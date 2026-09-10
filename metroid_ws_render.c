/*
 * metroid_ws_render.c — Metroid (NES) widescreen world model, screen cache,
 * native room decoder and background compositor.
 *
 * See metroid_ws.h for the design summary. This file owns everything that
 * knows how a Metroid room becomes pixels:
 *
 *   1. World model    — which map cell each physical nametable currently
 *                       holds, and where the camera sits in world space.
 *   2. Screen cache   — a 1 KB RoomRAM snapshot per (area, cell), taken when
 *                       the game finished logical terrain construction.
 *                       32x32 cells, heap, dropped on area change.
 *   3. Room decoder   — a C port of the game's own SetupRoom/InitTables/
 *                       DrawRoom/DrawObject/DrawStruct/DrawStructRow/
 *                       DrawMetatile/UpdateAttrib (prg7_engine.asm) reading
 *                       ROM through mapper_peek_prg() and the live pointer
 *                       tables in zero page, for cells the player has never
 *                       loaded. Its output goes into the same cache, so when
 *                       the game later loads that cell for real the snapshot
 *                       path compares the two and counts the result
 *                       (decoder_verified / decoder_mismatch) — the automated
 *                       correctness check for this port.
 *   4. Compositor     — per output pixel: world (x,y) -> map cell -> tile
 *                       source (live nametable > cache > decode) -> CHR ->
 *                       pixel, then the engine's wide OAM pass with the HUD
 *                       slots anchored.
 *
 * Coordinate conventions
 *   world x = cell_x * 256 + x within the room (0..255)
 *   world y = cell_y * 240 + y within the room (0..239)
 *   Rooms are exactly one screen; the world map is a dense 32x32 grid whose
 *   room numbers live in WorldMapRAM ($7000, index = MapPosY*32 + MapPosX,
 *   $FF = no room).
 *
 * RoomRAM A ($6000) is drawn into physical nametable 0, RoomRAM B ($6400)
 * into physical nametable 1 (both mirroring modes Metroid uses map the
 * game's "name table 3" onto physical 1).
 */
#include "metroid_ws.h"
#include "watchdog.h"
#include "metroid_ws_zp.h"
/*
 * metroid_ram.h (generated) also names the three room-decoder pointers that
 * metroid_ws_zp.h declares -- WLA-DX does export RoomPtr/StructPtr/
 * RoomRAMWorkPtr after all, at the same addresses ($33/$35/$37). Drop the
 * hand-written copies so the generated header stays authoritative and the
 * translation unit compiles without C4005 macro-redefinition noise.
 */
#undef MET_RoomPtr
#undef MET_StructPtr
#undef MET_RoomRAMWorkPtr
#include "metroid_ram.h"

#include "nes_runtime.h"
#include "nes_video.h"
#include "mapper.h"

#include <stdlib.h>
#include <string.h>

/* ---- geometry ----------------------------------------------------------- */

#define MET_MAP_W       32
#define MET_MAP_H       32
#define MET_CELLS       (MET_MAP_W * MET_MAP_H)
#define MET_CELL_BYTES  1024            /* 32x30 tiles + 64 attribute bytes */
#define MET_CELL_PX_W   256
#define MET_CELL_PX_H   240

/* g_sram covers $6000-$7FFF; these are its offsets. */
#define SRAM_OFF(addr)  ((int)(addr) - 0x6000)
#define ROOMRAM_A_OFF   SRAM_OFF(MET_RoomRAMA)      /* 0x0000 */
#define WORLDMAP_OFF    SRAM_OFF(MET_WorldMapRAM)   /* 0x1000 */

/* Cache slot state. */
enum { CELL_EMPTY = 0, CELL_SNAPSHOT, CELL_DECODED };

/* ---- state -------------------------------------------------------------- */

static MetWsCells s_cells   = { { -1, -1 }, { -1, -1 }, -1 };
static MetWsStats s_stats;
static uint32_t s_pending_columns[2], s_pending_rows[2];

static uint8_t *s_cache;                /* MET_CELLS * MET_CELL_BYTES */
static uint8_t *s_state;                /* MET_CELLS */

static uint8_t  s_area_bank;            /* CurrentBank observed at RoomFinished */
static int      s_area_bank_valid;

static int      s_gate_wide;
static MetWsHud s_hud = MET_WS_HUD_EDGES;
static int      s_hud_slot_start = -1;
static int      s_hud_slot_count = 0;

static uint8_t *s_bg_opaque;            /* out_w * 240, 1 = opaque BG pixel */
static int      s_bg_opaque_w;
static int      s_native_x0;            /* stashed for the sprite placement cb */

/* ---- small helpers ------------------------------------------------------ */

static int floordiv(int a, int b) {
    int q = a / b;
    if ((a % b) != 0 && ((a < 0) != (b < 0))) q--;
    return q;
}

static uint16_t ram16(uint16_t zp) {
    return (uint16_t)(g_ram[zp & 0x7FF] | ((uint16_t)g_ram[(zp + 1) & 0x7FF] << 8));
}

static int ensure_cache(void) {
    if (s_cache && s_state) return 1;
    if (!s_cache) s_cache = (uint8_t *)malloc((size_t)MET_CELLS * MET_CELL_BYTES);
    if (!s_state) s_state = (uint8_t *)calloc(MET_CELLS, 1);
    if (!s_cache || !s_state) {
        free(s_cache); s_cache = NULL;
        free(s_state); s_state = NULL;
        return 0;
    }
    memset(s_state, CELL_EMPTY, MET_CELLS);
    return 1;
}

static void cache_clear(void) {
    if (s_state) memset(s_state, CELL_EMPTY, MET_CELLS);
    s_stats.cells_cached = 0;
}

static int ensure_bg_opaque(int out_w) {
    if (s_bg_opaque && s_bg_opaque_w >= out_w) return 1;
    free(s_bg_opaque);
    s_bg_opaque = (uint8_t *)malloc((size_t)out_w * MET_CELL_PX_H);
    s_bg_opaque_w = s_bg_opaque ? out_w : 0;
    return s_bg_opaque != NULL;
}

/* ---- ROM access for the decoder ----------------------------------------- */
/*
 * The decoder reads exactly what the 6502 would: the currently mapped PRG
 * window. Callers gate on CurrentBank matching the bank that was live when
 * the area's pointer tables were last observed, so a decode never reads a
 * foreign bank. Anything below $8000 is not PRG and yields $FF (which every
 * walker below treats as a terminator).
 */
static uint8_t rom8(uint16_t a) {
    return (a < 0x8000) ? 0xFFu : mapper_peek_prg(a);
}

/* (zp),y indirect read of a 16-bit little-endian pointer; y wraps 8-bit as
 * the `iny` between the two loads does on hardware. */
static uint16_t rom16_zpy(uint16_t base, uint8_t y) {
    uint8_t lo = rom8((uint16_t)(base + y));
    uint8_t hi = rom8((uint16_t)(base + (uint8_t)(y + 1)));
    return (uint16_t)(lo | ((uint16_t)hi << 8));
}

/* ---- native room decoder ------------------------------------------------ */
/*
 * The decoder always pretends to draw into RoomRAM A ($6000), because the
 * game's own end-of-room test compares the work pointer's HIGH byte against
 * $63/$67 (DrawMetatile, prg7_engine.asm:9528-9548). Using the A base
 * reproduces the identical stop offset ($3A0) the B base produces; the
 * decoded 1 KB is base-independent.
 */
#define DEC_BASE 0x6000u

static void dec_write(uint8_t *buf, uint16_t addr, uint8_t v) {
    int off = (int)addr - (int)DEC_BASE;
    if (off >= 0 && off < MET_CELL_BYTES) buf[off] = v;
}

static uint8_t dec_read(const uint8_t *buf, uint16_t addr) {
    int off = (int)addr - (int)DEC_BASE;
    return (off >= 0 && off < MET_CELL_BYTES) ? buf[off] : 0u;
}

/* UpdateAttrib ($EF9E). Only touches the attribute table when the structure
 * carries a palette different from the room default. */
static void dec_update_attrib(uint8_t *buf, uint16_t p, uint8_t obj_pal, uint8_t room_pal) {
    static const uint8_t mask_tbl[4] = { 0xFCu, 0xF3u, 0xCFu, 0x3Fu };
    uint8_t t, attr_lo, attr_hi, cur, pv;
    uint16_t a;
    int quad, xq;

    if (obj_pal == room_pal) return;

    /* Temp02 = low byte of (work pointer >> 2). */
    t = (uint8_t)((p >> 2) & 0xFFu);
    attr_lo = (uint8_t)((((uint8_t)(t >> 2)) & 0x38u) | (t & 0x07u) | 0xC0u);
    attr_hi = (uint8_t)(0x63u | ((p >> 8) & 0x04u));   /* $63 (RoomRAM A) or $67 (B) */
    a = (uint16_t)(((uint16_t)attr_hi << 8) | attr_lo);

    /* Quadrant within the attribute byte: bit 6 of the low byte is tile-y
     * bit 1, bit 1 is tile-x bit 1. */
    quad = ((p & 0x40u) ? 2 : 0) + ((p & 0x02u) ? 1 : 0);

    cur = (uint8_t)(dec_read(buf, a) & mask_tbl[quad]);

    /* Shift the new palette into place: two ASLs per quadrant step, with the
     * game's `bcc` early-out reproduced verbatim. */
    pv = obj_pal;
    xq = quad;
    for (;;) {
        uint8_t c2;
        if (--xq < 0) break;
        pv = (uint8_t)(pv << 1);
        c2 = (uint8_t)((pv >> 7) & 1u);
        pv = (uint8_t)(pv << 1);
        if (c2) break;
    }
    dec_write(buf, a, (uint8_t)(cur | pv));
}

/*
 * DrawStruct ($EF8C) / DrawStructRow ($EF13) / DrawMetatile ($EF29) /
 * AdvanceRow ($EF78).
 *
 * Row byte: low nibble = metatile count (0 means 16), high nibble = x offset
 * in metatiles. `count` metatile ids follow. A metatile is 4 bytes in
 * MetatileDefs (UL, UR, LL, LR written at work+0, +1, +0x20, +0x21). After a
 * row the structure pointer advances by count+1 and the work pointer by
 * 0x40 (two tile rows). A row that would wrap past a 32-tile boundary ends
 * early and the remaining ids are skipped; drawing stops entirely once the
 * work pointer reaches the attribute area (offset $3A0).
 */
static void dec_draw_struct(uint8_t *buf, uint16_t struct_ptr, uint16_t work,
                            uint16_t mt_defs, uint8_t obj_pal, uint8_t room_pal) {
    static const uint8_t tile_pos[4] = { 0x21u, 0x20u, 0x01u, 0x00u };
    int row_guard = 0;

    for (;;) {                                   /* DrawStruct */
        uint8_t row_byte;
        int count, counter, struct_index, adv_a;
        uint16_t p;

        if (++row_guard > 64) return;            /* room RAM is 30 rows tall */

        row_byte = rom8(struct_ptr);
        if (row_byte == 0xFFu) return;           /* end of structure */

        count = row_byte & 0x0Fu;
        if (count == 0) count = 16;
        counter = count;
        struct_index = 0;
        p = (uint16_t)(work + (uint16_t)(((row_byte >> 4) & 0x0Fu) * 2));

        for (;;) {                               /* DrawMetatile */
            uint8_t hi = (uint8_t)(p >> 8);
            uint8_t mt_id, mt_index;
            int k;

            if (hi == 0x63u || hi == 0x67u) {
                if ((p & 0xFFu) >= 0xA0u) return;    /* reached attribute area */
            } else if (hi > 0x67u) {
                return;                              /* past room RAM entirely */
            }

            struct_index++;
            mt_id = rom8((uint16_t)(struct_ptr + (uint8_t)struct_index));
            mt_index = (uint8_t)(mt_id * 4u);
            for (k = 3; k >= 0; k--) {
                uint8_t v = rom8((uint16_t)(mt_defs + mt_index));
                mt_index = (uint8_t)(mt_index + 1u);
                dec_write(buf, (uint16_t)(p + tile_pos[k]), v);
            }
            dec_update_attrib(buf, p, obj_pal, room_pal);
            p = (uint16_t)(p + 2u);

            if ((p & 0x1Fu) != 0) {
                if (--counter != 0) continue;
                adv_a = struct_index & 0xFF;
            } else {
                /* Row wrapped: skip the ids we could not place. */
                adv_a = (struct_index + counter - 1) & 0xFF;
            }
            break;
        }

        /* AdvanceRow: struct ptr += A + 1, work ptr += one metatile row. */
        struct_ptr = (uint16_t)(struct_ptr + adv_a + 1);
        work = (uint16_t)(work + 0x40u);
    }
}

/*
 * SetupRoom ($EA2B) + InitTables ($EFF8) + DrawRoom ($EAAA) + DrawObject
 * ($EA61) for one map cell, into a 1 KB nametable image.
 *
 * Room data layout: [palette][pos structIdx attrib]* with $FD ending the
 * object list (enemies and doors follow and are NOT decoded — they are
 * sprites the game owns), $FE a placeholder byte to skip, $FF ending the
 * room.
 *
 * Returns 1 when the cell was decoded.
 */
static int dec_decode_cell(int cx, int cy, uint8_t *buf) {
    static const uint8_t at_data[4] = { 0x00u, 0x55u, 0xAAu, 0xFFu };
    uint16_t room_tbl, struct_tbl, mt_defs, room_ptr;
    uint8_t room, room_pal;
    int guard = 0;

    room = g_sram[WORLDMAP_OFF + cy * MET_MAP_W + cx];
    if (room >= 0xF0u) return 0;             /* $FF = no room; >= $F0 is a state marker */

    room_tbl   = ram16(MET_AreaPointers_RAM_RoomPtrTable);
    struct_tbl = ram16(MET_AreaPointers_RAM_StructPtrTable);
    mt_defs    = ram16(MET_AreaPointers_RAM_MetatileDefs);
    if (room_tbl < 0x8000u || struct_tbl < 0x8000u || mt_defs < 0x8000u) return 0;

    room_ptr = rom16_zpy(room_tbl, (uint8_t)(room * 2u));
    if (room_ptr < 0x8000u) return 0;

    room_pal = rom8(room_ptr);
    room_ptr = (uint16_t)(room_ptr + 1);

    /* InitTables: whole 1 KB to $FF, then the attribute table to the room's
     * default palette pattern. RoomPalette is a 0..3 selector; the game
     * indexes ATDataTable without masking, so a hypothetical out-of-range
     * palette would read the bytes after the table. Real rooms use 0..3. */
    memset(buf, 0xFF, 0x3C0);
    memset(buf + 0x3C0, at_data[room_pal & 3u], 0x40);

    for (;;) {                                /* DrawRoom */
        uint8_t b, struct_idx, obj_pal;
        uint16_t work, struct_ptr;

        if (++guard > 1024) break;
        b = rom8(room_ptr);
        if (b == 0xFFu) break;                /* end of room */
        if (b == 0xFDu) break;                /* end of objects (enemies/doors follow) */
        if (b == 0xFEu) { room_ptr = (uint16_t)(room_ptr + 1); continue; }

        /* DrawObject: position byte is %yyyyxxxx; each y unit is two tile
         * rows ($40 bytes), each x unit is two tiles. */
        work = (uint16_t)(DEC_BASE + (uint16_t)((b >> 4) * 0x40u)
                                   + (uint16_t)((b & 0x0Fu) * 2u));
        struct_idx = rom8((uint16_t)(room_ptr + 1));
        obj_pal    = rom8((uint16_t)(room_ptr + 2));
        struct_ptr = rom16_zpy(struct_tbl, (uint8_t)(struct_idx * 2u));
        if (struct_ptr >= 0x8000u)
            dec_draw_struct(buf, struct_ptr, work, mt_defs, obj_pal, room_pal);
        room_ptr = (uint16_t)(room_ptr + 3);
    }
    return 1;
}

/* ---- world model -------------------------------------------------------- */

void met_render_reset(void) {
    met_actors_reset();
    s_cells.cell_x[0] = s_cells.cell_x[1] = -1;
    s_cells.cell_y[0] = s_cells.cell_y[1] = -1;
    s_cells.area = -1;
    s_area_bank_valid = 0;
    s_gate_wide = 0;
    s_hud_slot_start = -1;
    s_hud_slot_count = 0;
    cache_clear();
    memset(&s_stats, 0, sizeof s_stats);
    memset(s_pending_columns, 0, sizeof s_pending_columns);
    memset(s_pending_rows, 0, sizeof s_pending_rows);
}

/* areas_common.asm WriteDoorBGTiles_Common writes six collision tiles at
 * y=$50..$78, x=$E8 (right) or $10 (left). Require a live door on this NT;
 * never excuse an arbitrary $4E tile or a geometry/attribute discrepancy. */
static int is_door_collision_delta(int nt, int off, uint8_t decoded, uint8_t actual) {
    int slot, row = off / 32, col = off % 32;
    if (decoded != 0xff || actual != 0x4e || row < 10 || row > 15) return 0;
    for (slot = 0x80; slot <= 0xb0; slot += 0x10) {
        int door_col = (slot & 0x10) ? 2 : 29;
        if (col == door_col && g_ram[MET_Objects_0_status + slot] &&
            (g_ram[MET_Objects_0_hi + slot] & 1) == nt) return 1;
    }
    return 0;
}

static void select_area(int area) {
    if (s_cells.area != area) {
        cache_clear();
        s_cells.area = area;
        s_cells.cell_x[0] = s_cells.cell_x[1] = -1;
        s_cells.cell_y[0] = s_cells.cell_y[1] = -1;
        memset(s_stats.streamed_columns, 0, sizeof s_stats.streamed_columns);
        memset(s_stats.streamed_rows, 0, sizeof s_stats.streamed_rows);
        memset(s_pending_columns, 0, sizeof s_pending_columns);
        memset(s_pending_rows, 0, sizeof s_pending_rows);
        s_stats.room_ready_mask = 0;
    }
}

void met_render_note_room_finished(void) {
    int nt, cx, cy, idx;
    const uint8_t *live;

    if (!ensure_cache()) return;
    select_area(g_ram[MET_InArea]);

    /* SelectRoomRAM ($EA05) stored RoomRAMA>>8 ($60, nametable 0) or
     * RoomRAMB>>8 ($64, nametable 3 -> physical nametable 1) as the high byte. */
    nt = (g_ram[(MET_RoomRAMPtr + 1) & 0x7FF] == (MET_RoomRAMB >> 8)) ? 1 : 0;
    /* RoomFinished can arrive several frames after logical completion.
     * Keep the location captured when construction began (MapPos can change
     * if the player reverses direction), and snapshot each load only once. */
    if (s_stats.room_ready_mask & (1u << nt)) return;
    cx = s_cells.cell_x[nt] >= 0 ? s_cells.cell_x[nt] : g_ram[MET_MapPosX];
    cy = s_cells.cell_y[nt] >= 0 ? s_cells.cell_y[nt] : g_ram[MET_MapPosY];

    /* The area's PRG bank is live while the game is decoding its rooms; the
     * native decoder refuses to run against any other bank. */
    s_area_bank = g_ram[MET_CurrentBank];
    s_area_bank_valid = 1;

    if (cx >= 0 && cx < MET_MAP_W && cy >= 0 && cy < MET_MAP_H) {
        idx = cy * MET_MAP_W + cx;
        live = &g_sram[ROOMRAM_A_OFF + nt * 0x400];

        /* Automated correctness checks: a cell the game re-draws must match
         * what we cached, and a cell we decoded ourselves must match what the
         * game eventually produces. */
        if (s_state[idx] == CELL_SNAPSHOT) {
            if (memcmp(s_cache + (size_t)idx * MET_CELL_BYTES, live, MET_CELL_BYTES) != 0)
                s_stats.cache_mismatch++;
        } else if (s_state[idx] == CELL_DECODED) {
            /* Classify the measured Brinstar door collision-tile delta.
             * Every other geometry/attribute discrepancy remains an error. */
            if (memcmp(s_cache + (size_t)idx * MET_CELL_BYTES, live, MET_CELL_BYTES) != 0) {
                int off;
                s_stats.mismatch_bytes = 0;
                s_stats.mismatch_cell_x = cx;
                s_stats.mismatch_cell_y = cy;
                for (off = 0; off < MET_CELL_BYTES; off++) {
                    uint8_t decoded = s_cache[(size_t)idx * MET_CELL_BYTES + off];
                    if (decoded == live[off]) continue;
                    if (is_door_collision_delta(nt, off, decoded, live[off])) {
                        s_stats.decoder_object_bytes++;
                        continue;
                    }
                    if (!s_stats.mismatch_bytes) {
                        s_stats.mismatch_offset = off;
                        s_stats.mismatch_decoded = decoded;
                        s_stats.mismatch_actual = live[off];
                    }
                    s_stats.mismatch_bytes++;
                }
                if (s_stats.mismatch_bytes) s_stats.decoder_mismatch++;
                else s_stats.decoder_verified++;
            } else
                s_stats.decoder_verified++;
        } else {
            s_stats.cells_cached++;
        }

        memcpy(s_cache + (size_t)idx * MET_CELL_BYTES, live, MET_CELL_BYTES);
        s_state[idx] = CELL_SNAPSHOT;
    }

    s_cells.cell_x[nt] = cx;
    s_cells.cell_y[nt] = cy;
    s_stats.room_ready_mask |= 1u << nt;
}

void met_render_note_stream(void) {
    /* At the $E592 call to GetNameAddrs, $01:$00 is the tile offset.
     * GetNameTableAtScrollDir ($EB85) returns (PPUCTRL_ZP ^ ScrollDir) & 1.
     * The routine only queues VRAM data. Do not publish validity until NMI. */
    int nt = (g_ram[MET_PPUCTRL_ZP] ^ g_ram[MET_ScrollDir]) & 1;
    unsigned offset = ((unsigned)g_ram[0x01] << 8) | g_ram[0x00];
    if (g_ram[MET_ScrollDir] & 2) {
        if (offset < 32) s_pending_columns[nt] |= 1u << offset;
    } else if (offset < 960 && !(offset & 31)) {
        s_pending_rows[nt] |= 1u << (offset >> 5);
    }
}

void met_render_post_nmi(void) {
    int nt;
    /* EndOfRoom marks complete logical RoomRAM as $F0. The four attribute
     * bookkeeping steps through RoomFinished only advance with scrolling;
     * a stationary player may stay at $F1 indefinitely. */
    if (g_ram[MET_GameMode] == 0 && g_ram[MET_RoomNumber] >= 0xf0 &&
        g_ram[MET_RoomNumber] <= 0xf4)
        met_render_note_room_finished();
    if (g_ram[MET_PPUDataPending]) return;
    for (nt = 0; nt < 2; nt++) {
        s_stats.streamed_columns[nt] |= s_pending_columns[nt];
        s_stats.streamed_rows[nt] |= s_pending_rows[nt];
        s_pending_columns[nt] = s_pending_rows[nt] = 0;
        /* Area initialization copies a whole RoomRAM directly, bypassing
         * UpdateNameTable. Recognize only a complete byte-identical upload. */
        if ((s_stats.room_ready_mask & (1u << nt)) &&
            memcmp(g_ppu_nt + nt * 1024, g_sram + ROOMRAM_A_OFF + nt * 1024, 1024) == 0) {
            s_stats.streamed_columns[nt] = 0xffffffffu;
            s_stats.streamed_rows[nt] = 0x3fffffffu;
        }
    }
}

void met_render_begin_room(int nt) {
    met_actors_retire_room(nt);
    int slot, cx = s_cells.cell_x[nt], cy = s_cells.cell_y[nt];
    int replace = s_cells.area != g_ram[MET_InArea] ||
                  cx != g_ram[MET_MapPosX] || cy != g_ram[MET_MapPosY];
    if (cx >= 0 && cy >= 0 && (s_stats.room_ready_mask & (1u << nt)) &&
        s_cells.area == g_ram[MET_InArea] && ensure_cache()) {
        int idx = cy * MET_MAP_W + cx;
        memcpy(s_cache + (size_t)idx * MET_CELL_BYTES,
               g_sram + ROOMRAM_A_OFF + nt * MET_CELL_BYTES, MET_CELL_BYTES);
        s_state[idx] = CELL_SNAPSHOT;
    }
    /* The guest is about to overwrite this room's collision storage. Keeping
     * its enemies alive would reassign them to the new room and prevent that
     * room's fixed-slot spawns. Clear only its visibility bit; stock cleanup
     * at $EC9B performs the actual deletion immediately after this hook. */
    if (replace) {
        for (slot = 0; slot < 0x60; slot += 0x10) {
            if ((g_sram[SRAM_OFF(MET_EnsExtra_0_hi) + slot] & 1) == nt) {
                if (g_sram[SRAM_OFF(MET_EnsExtra_0_status) + slot] &&
                    (g_ram[MET_Ens_0_data05 + slot] & 2)) s_stats.retired_enemies++;
                g_ram[MET_Ens_0_data05 + slot] &= (uint8_t)~2u;
            }
        }
        for (slot = 0x80; slot <= 0xb0; slot += 0x10)
            if ((g_ram[MET_Objects_0_hi + slot] & 1) == nt)
                g_ram[MET_Objects_0_onScreen + slot] = 0;
    }
    /* The incoming room location is known before its terrain is complete.
     * Left/up scrolling already points the camera into it at this moment.
     * Keep that location usable, but hide partial RoomRAM from the margins
     * and from widened enemy activation until EndOfRoom. A reload of the
     * same cell also rebuilds RoomRAM, but retains its existing occupants. */
    select_area(g_ram[MET_InArea]);
    s_cells.cell_x[nt] = g_ram[MET_MapPosX];
    s_cells.cell_y[nt] = g_ram[MET_MapPosY];
    s_stats.room_ready_mask &= ~(1u << nt);
    s_area_bank = g_ram[MET_CurrentBank];
    s_area_bank_valid = 1;
    s_stats.streamed_columns[nt] = s_stats.streamed_rows[nt] = 0;
    s_pending_columns[nt] = s_pending_rows[nt] = 0;
    g_ws_obj_ctx_valid = 0;
}

/* Versioned fixed-width host state, kept below the engine's 512-byte mod
 * payload limit. RoomRAM and PPU bytes are already in the engine savestate.
 * Other cache entries are discarded and decoded afresh after restoration. */
typedef struct {
    uint32_t version;
    int32_t area, cell_x[2], cell_y[2];
    uint32_t columns[2], rows[2], pending_columns[2], pending_rows[2];
    int32_t bank, bank_valid, gate, hud_start, hud_count;
    uint32_t room_ready_mask;
} MetWsSave;

int met_render_save(uint8_t *buf, int cap) {
    MetWsSave save;
    int nt;
    if (cap < (int)sizeof save) return -1;
    memset(&save, 0, sizeof save);
    save.version = 2;
    save.area = s_cells.area;
    for (nt = 0; nt < 2; nt++) {
        save.cell_x[nt] = s_cells.cell_x[nt]; save.cell_y[nt] = s_cells.cell_y[nt];
        save.columns[nt] = s_stats.streamed_columns[nt];
        save.rows[nt] = s_stats.streamed_rows[nt];
        save.pending_columns[nt] = s_pending_columns[nt];
        save.pending_rows[nt] = s_pending_rows[nt];
    }
    save.bank = s_area_bank; save.bank_valid = s_area_bank_valid;
    save.gate = s_gate_wide;
    save.hud_start = s_hud_slot_start; save.hud_count = s_hud_slot_count;
    save.room_ready_mask = s_stats.room_ready_mask;
    memcpy(buf, &save, sizeof save);
    return (int)sizeof save;
}

int met_render_load(const uint8_t *buf, int len) {
    MetWsSave save;
    int nt;
    if (len != (int)sizeof save) return 0;
    memcpy(&save, buf, sizeof save);
    if (save.version != 2) return 0;
    for (nt = 0; nt < 2; nt++)
        if (save.cell_x[nt] < -1 || save.cell_x[nt] >= MET_MAP_W ||
            save.cell_y[nt] < -1 || save.cell_y[nt] >= MET_MAP_H) return 0;
    met_render_reset();
    s_cells.area = save.area;
    s_area_bank = (uint8_t)save.bank; s_area_bank_valid = save.bank_valid;
    s_gate_wide = save.gate;
    s_hud_slot_start = save.hud_start; s_hud_slot_count = save.hud_count;
    s_stats.room_ready_mask = save.room_ready_mask & 3u;
    for (nt = 0; nt < 2; nt++) {
        s_cells.cell_x[nt] = save.cell_x[nt]; s_cells.cell_y[nt] = save.cell_y[nt];
        s_stats.streamed_columns[nt] = save.columns[nt];
        s_stats.streamed_rows[nt] = save.rows[nt];
        s_pending_columns[nt] = save.pending_columns[nt];
        s_pending_rows[nt] = save.pending_rows[nt];
        if ((s_stats.room_ready_mask & (1u << nt)) &&
            save.cell_x[nt] >= 0 && save.cell_y[nt] >= 0 && ensure_cache()) {
            int idx = save.cell_y[nt] * MET_MAP_W + save.cell_x[nt];
            memcpy(s_cache + (size_t)idx * MET_CELL_BYTES,
                   g_sram + ROOMRAM_A_OFF + nt * MET_CELL_BYTES, MET_CELL_BYTES);
            s_state[idx] = CELL_SNAPSHOT;
            s_stats.cells_cached++;
        }
    }
    g_ws_obj_ctx_valid = 0;
    return 1;
}

const MetWsCells *met_render_cells(void) { return &s_cells; }
const MetWsStats *met_render_stats(void) { return &s_stats; }

int met_render_camera(int *origin_x, int *origin_y, int *horizontal) {
    int horiz = (g_ram[MET_ScrollDir] & 0x02u) != 0;
    /* Horizontal rooms scroll across a vertically mirrored pair, so PPUCTRL
     * bit 0 names the nametable at the left of the view; vertical rooms use a
     * horizontally mirrored pair and bit 1 names the one at the top. */
    int cur = horiz ? (g_ram[MET_PPUCTRL_ZP] & 1u)
                    : ((g_ram[MET_PPUCTRL_ZP] >> 1) & 1u);

    if (s_cells.cell_x[cur] < 0) return 0;

    if (origin_x)   *origin_x = s_cells.cell_x[cur] * MET_CELL_PX_W + g_ram[MET_ScrollX];
    if (origin_y)   *origin_y = s_cells.cell_y[cur] * MET_CELL_PX_H + g_ram[MET_ScrollY];
    if (horizontal) *horizontal = horiz;
    return 1;
}

int met_render_nt_world_x(int nt, int *world_x) {
    if (nt < 0 || nt > 1 || s_cells.cell_x[nt] < 0 ||
        !(s_stats.room_ready_mask & (1u << nt))) {
        if (world_x) *world_x = 0;
        return 0;
    }
    if (world_x) *world_x = s_cells.cell_x[nt] * MET_CELL_PX_W;
    return 1;
}

void met_render_set_gate(int wide) { s_gate_wide = wide ? 1 : 0; }

void met_render_set_hud(MetWsHud hud, int hud_slot_start, int hud_slot_count) {
    s_hud = hud;
    s_hud_slot_start = hud_slot_start;
    s_hud_slot_count = hud_slot_count;
}

/* ---- tile source selection ---------------------------------------------- */
/*
 * Bound cells use live PPU bytes in the native viewport and streamed margins;
 * unstreamed margins use complete logical RoomRAM. Other cells use a cached
 * snapshot or a fresh decode. No unstreamed PPU column/row is authoritative.
 */
static const uint8_t *cell_source(int cx, int cy, int tx, int ty, int native_pixel) {
    int nt, idx;

    if (cx < 0 || cx >= MET_MAP_W || cy < 0 || cy >= MET_MAP_H) return NULL;

    for (nt = 0; nt < 2; nt++)
        if (s_cells.cell_x[nt] == cx && s_cells.cell_y[nt] == cy) {
            uint32_t mask = (g_ram[MET_ScrollDir] & 2)
                ? s_stats.streamed_columns[nt] : s_stats.streamed_rows[nt];
            int bit = (g_ram[MET_ScrollDir] & 2) ? tx : ty;
            if (native_pixel) return &g_ppu_nt[nt * 0x400];
            if (!(s_stats.room_ready_mask & (1u << nt))) break; /* use cache/decoder */
            /* The first streamed row/column can precede attribute uploads.
             * Until those finish, use the complete logical room in margins. */
            if ((mask & (1u << bit)) &&
                !(g_ram[MET_RoomNumber] >= 0xf0 && g_ram[MET_RoomNumber] <= 0xf4 &&
                  g_ram[MET_RoomRAMPtr + 1] == (0x60 + nt * 4)))
                return &g_ppu_nt[nt * 0x400];
            /* The full logical room exists in RoomRAM before it is streamed
             * to the PPU. It also includes current door/block modifications. */
            return &g_sram[ROOMRAM_A_OFF + nt * 0x400];
        }

    if (g_sram[WORLDMAP_OFF + cy * MET_MAP_W + cx] >= 0xF0u) return NULL;
    if (!ensure_cache()) return NULL;

    idx = cy * MET_MAP_W + cx;
    if (s_state[idx] != CELL_EMPTY) return s_cache + (size_t)idx * MET_CELL_BYTES;

    /* Decoding reads the area bank through the live PRG window; refuse when
     * some other bank is mapped (menus, bank-switched subroutines). */
    if (!s_area_bank_valid || g_ram[MET_CurrentBank] != s_area_bank) return NULL;
    if (!dec_decode_cell(cx, cy, s_cache + (size_t)idx * MET_CELL_BYTES)) return NULL;

    s_state[idx] = CELL_DECODED;
    s_stats.decoded_cells++;
    s_stats.cells_cached++;
    return s_cache + (size_t)idx * MET_CELL_BYTES;
}

/* ---- sprite placement --------------------------------------------------- */

const uint8_t *met_render_room_terrain(int cx, int cy) {
    /* Actor physics needs a complete logical room. Choosing the PPU image
     * based on tile (0,0) alone can return stale, unstreamed columns. */
    for(int nt=0;nt<2;nt++)
        if(s_cells.cell_x[nt]==cx && s_cells.cell_y[nt]==cy &&
           (s_stats.room_ready_mask & (1u<<nt)))
            return g_sram+ROOMRAM_A_OFF+nt*MET_CELL_BYTES;
    return cell_source(cx, cy, 0, 0, 0);
}

static int place_sprite(int oam_slot, int screen_x, int screen_y, int *out_x, void *user) {
    (void)screen_y; (void)user;
    if (s_hud_slot_count > 0 &&
        oam_slot >= s_hud_slot_start &&
        oam_slot < s_hud_slot_start + s_hud_slot_count) {
        /* Edges: the status bar is pinned to the left edge of the widened
         * output. Center: it stays where the stock picture puts it. */
        *out_x = (s_hud == MET_WS_HUD_EDGES) ? screen_x : screen_x + s_native_x0;
    } else {
        *out_x = screen_x + s_native_x0;
    }
    return 1;
}

/* ---- compositor --------------------------------------------------------- */

int met_render_frame(uint32_t *out, int out_w, int out_h, int native_x0,
                     const uint32_t *native, void *user) {
    uint32_t pal[4][4];
    uint32_t universal;
    int origin_x, origin_y, horiz;
    int chr_base, bg_on, clip_left8;
    int oy;

    (void)native; (void)user;

    if (!out || out_w <= 0) return 0;
    if (!s_gate_wide) { s_stats.frames_fallback++; return 0; }
    if (!met_render_camera(&origin_x, &origin_y, &horiz)) { s_stats.frames_fallback++; return 0; }
    if (!ensure_bg_opaque(out_w)) { s_stats.frames_fallback++; return 0; }
    uint64_t started = watchdog_span_begin();

    if (out_h > MET_CELL_PX_H) out_h = MET_CELL_PX_H;
    s_native_x0 = native_x0;
    memset(s_bg_opaque, 0, (size_t)out_w * MET_CELL_PX_H);

    universal = g_nes_palette[g_ppu_pal[0] & 0x3Fu];
    {
        int p, c;
        for (p = 0; p < 4; p++) {
            pal[p][0] = universal;
            for (c = 1; c < 4; c++)
                pal[p][c] = g_nes_palette[g_ppu_pal[(p * 4 + c) & 0x1F] & 0x3Fu];
        }
    }
    chr_base   = (g_ppuctrl & 0x10u) ? 0x1000 : 0x0000;
    bg_on      = (g_ppumask & 0x08u) != 0;
    clip_left8 = !(g_ppumask & 0x02u);

    for (oy = 0; oy < out_h; oy++) {
        uint32_t *row  = out + (size_t)oy * out_w;
        uint8_t  *orow = s_bg_opaque + (size_t)oy * out_w;
        int wy, cy, ry, ty, fine_y, ox;

        if (!bg_on) {
            int i;
            for (i = 0; i < out_w; i++) row[i] = universal;
            continue;
        }

        wy = origin_y + oy;
        cy = floordiv(wy, MET_CELL_PX_H);
        ry = wy - cy * MET_CELL_PX_H;
        ty = ry >> 3;
        fine_y = ry & 7;

        ox = 0;
        while (ox < out_w) {
            int wx = origin_x + (ox - native_x0);
            int cx = floordiv(wx, MET_CELL_PX_W);
            int rx = wx - cx * MET_CELL_PX_W;
            int span = 8 - (rx & 7);
            const uint8_t *src;
            int i;

            if (span > out_w - ox) span = out_w - ox;
            /* Split spans at the native viewport boundaries as well as tiles. */
            if (ox < native_x0 && ox + span > native_x0) span = native_x0 - ox;
            if (ox < native_x0 + 256 && ox + span > native_x0 + 256)
                span = native_x0 + 256 - ox;
            src = cell_source(cx, cy, rx >> 3, ty,
                              ox >= native_x0 && ox < native_x0 + 256);

            if (!src) {
                /* Off-map or an unknown/undecodable cell: universal
                 * background colour, transparent for sprite priority. */
                for (i = 0; i < span; i++) row[ox + i] = universal;
            } else {
                int tx = rx >> 3;
                uint8_t tile = src[ty * 32 + tx];
                uint8_t attr = src[0x3C0 + (ty >> 2) * 8 + (tx >> 2)];
                int quad = (((ty >> 1) & 1) * 2) + ((tx >> 1) & 1);
                int pb = (attr >> (quad * 2)) & 3;
                int coff = chr_base + tile * 16 + fine_y;
                uint8_t lo = g_chr_ram[coff & 0x1FFF];
                uint8_t hi = g_chr_ram[(coff + 8) & 0x1FFF];
                const uint32_t *colors = pal[pb];
                int px0 = rx & 7;
                for (i = 0; i < span; i++) {
                    int bit = 7 - (px0 + i);
                    int ci = ((lo >> bit) & 1) | (((hi >> bit) & 1) << 1);
                    row[ox + i] = colors[ci];
                    orow[ox + i] = (uint8_t)(ci != 0);
                }
            }

            /* PPUMASK bit 1 clips the leftmost 8 pixels of the NATIVE
             * picture only; the widened margins are not hardware and are
             * never clipped. */
            if (clip_left8 && (ox - native_x0) < 8 && (ox + span - native_x0) > 0) {
                for (i = 0; i < span; i++) {
                    int nx = ox + i - native_x0;
                    if (nx >= 0 && nx < 8) { row[ox + i] = universal; orow[ox + i] = 0; }
                }
            }

            ox += span;
        }
    }

    if (!met_actors_draw(out, out_w, native_x0, s_bg_opaque, s_hud == MET_WS_HUD_EDGES))
        ppu_renderer_draw_sprites_wide(out, out_w, native_x0, s_bg_opaque, place_sprite, NULL);
    s_stats.frames_wide++;
    watchdog_span_end("widescreen_render", started);
    return 1;
}
