/*
 * metroid_ws.h — Metroid (NES) opt-in widescreen, custom-renderer edition.
 *
 * Design (see WIDESCREEN.md): the guest retains its 256x240 coordinate space. A
 * Metroid-specific compositor, installed through the engine's custom renderer
 * hook (nes_runtime.h: ppu_renderer_set_custom_render), re-draws the world
 * into a wider framebuffer whose width follows the window (Fit) or a preset
 * (16:9 / 21:9 / 32:9) through nes_video.h.
 *
 *   Background : per output pixel -> world (x,y) -> map cell (32x32 grid,
 *                256x240 px each) -> tile source:
 *                  (a) live PPU nametable for the native viewport/streamed
 *                      margins, complete logical RoomRAM for unstreamed margins,
 *                  (b) the screen cache (1 KB RoomRAM snapshot captured when
 *                      the game finished logical terrain construction),
 *                  (c) a native C port of the game's room decoder
 *                      (SetupRoom/DrawRoom/DrawStruct, prg7_engine.asm) run
 *                      on ROM data for cells never visited, result cached.
 *   Sprites    : the game's own culling routine IsObjectVisible ($DFDF) is
 *                replaced by an equivalent C implementation whose horizontal
 *                window is the widened viewport; the engine's 16-bit OAM X
 *                sidecar removes the 8-bit wrap; ppu_renderer_draw_sprites_wide
 *                draws every slot into the wide frame.
 *   HUD        : the 10 OAM slots DisplayBar ($E0C1) writes are anchored to the
 *                left screen edge (Edges) or kept at their stock position
 *                (Center).
 *   Gating     : wide only while GameMode==0 and MainRoutine is an in-room
 *                routine; otherwise the hook returns 0 and the engine
 *                pillarboxes the stock frame.
 *
 * Everything here is a no-op until metroid_ws_enable() runs (mod activation or
 * the --widescreen dev flag); with the mod off the stock output is
 * byte-identical (all hooks disabled, no custom renderer installed).
 *
 * RAM/ROM names come from metroid_ram.h (generated from disasm/m1disasm); the
 * few zero-page temporaries the disassembly declares with '=' (not exported to
 * the .sym) are defined in metroid_ws_zp.h with their disassembly names.
 */
#pragma once
#include <stdint.h>
#include "nes_video.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    MET_WS_HUD_EDGES = 0,   /* HUD pinned to the left screen edge */
    MET_WS_HUD_CENTER       /* HUD stays at its stock (centered) position */
} MetWsHud;

/* ---- policy / lifecycle (metroid_ws.c) ---------------------------------- */

/* game_on_init(): one-time setup (sidecar window, renderer state). */
void metroid_ws_init(void);

/* Turn the feature on with the given aspect and HUD policy (mod activation
 * callback, or the --widescreen dev flag). Installs the custom renderer,
 * enables the function-entry hooks, requests the framebuffer width. */
void metroid_ws_enable(NesAspectMode aspect, MetWsHud hud);

/* Stock policy (mod reset callback): hooks off, renderer uninstalled,
 * width back to 256. */
void metroid_ws_disable(void);

int  metroid_ws_enabled(void);

/* game_post_nmi(): per-frame gating (wide vs pillarbox) and sidecar context
 * housekeeping. Must run before the frame is rendered. */
void metroid_ws_post_nmi(uint64_t frame_count);

/* Parse "fit|16:9|21:9|32:9|off" (+ optional ",edges|,center"); 1 on success. */
int  metroid_ws_parse_spec(const char *spec, NesAspectMode *aspect, MetWsHud *hud);

/* Function-entry hook callbacks (nes_mod_register_function_entry_plugin).
 * Return nonzero to skip the original 6502 body. */
int  metroid_ws_hook_is_object_visible(uint16_t addr);   /* $DFDF, replaces body */
int  metroid_ws_hook_display_bar(uint16_t addr);         /* $E0C1, observe only */
int  metroid_ws_hook_room_finished(uint16_t addr);       /* $EA26, observe only */
int  metroid_ws_hook_get_name_addrs(uint16_t addr);      /* $E564, observe transfer */
int  metroid_ws_hook_retire_room(uint16_t addr);         /* $EC9B, before reuse */

/* Debug/TCP frame record: writes up to 16 bytes of widescreen stats into
 * game_data[16..31] (render width, cells known, cache/decoder mismatches). */
void metroid_ws_fill_stats(uint8_t *game_data32);

/* ---- world model / renderer (metroid_ws_render.c) ----------------------- */

/* Which physical nametable (0 = $2000 / RoomRAM A $6000, 1 = $2400|$2800 /
 * RoomRAM B $6400) holds which map cell. -1 = unknown. */
typedef struct {
    int cell_x[2], cell_y[2];   /* per physical nametable */
    int area;                   /* InArea ($74) the mapping belongs to */
} MetWsCells;

void met_render_reset(void);                       /* forget cells + cache */
void met_render_note_room_finished(void);          /* logical completion: snapshot RoomRAM once */
void met_render_note_stream(void);                 /* queue row/column validity */
void met_render_post_nmi(void);                    /* acknowledge completed PPU transfers */
void met_render_begin_room(int nt);                /* bind incoming location, mark incomplete */
const uint8_t *met_render_room_terrain(int cx, int cy);

/* Optional PC actor/sprite scheduling. Off unless explicitly selected. */
void met_actors_configure(int residents, int expanded_sprites, int smooth);
void met_actors_reset(void);
void met_actors_retire_room(int nt);
int met_actors_hook_world(uint16_t addr);
int met_actors_hook_spawn(uint16_t addr);
int met_actors_hook_draw_enemy(uint16_t addr);
int met_actors_hook_draw_object(uint16_t addr);
int met_actors_hook_draw_hud(uint16_t addr);
int met_actors_virtual_position(int *wx, int *wy);
int met_actors_virtual_screen_x(int world_x);
int met_actors_draw(uint32_t *out, int width, int native_x0, const uint8_t *opaque, int hud_edges);
void met_actors_stats(unsigned *resident, unsigned *virtual_count, unsigned *sprites, unsigned *updates);
int met_actors_save(uint8_t *buf, int cap);
int met_actors_load(const uint8_t *buf, int len);
int met_actors_debug_json(char *buf, int cap);
int met_render_save(uint8_t *buf, int cap);
int met_render_load(const uint8_t *buf, int len);
const MetWsCells *met_render_cells(void);

/* Camera: world position of native column 0 / row 0, and room orientation.
 * Returns 0 when the current nametable's cell is unknown (caller falls back
 * to stock behavior). horizontal = ScrollDir & 2. */
int  met_render_camera(int *origin_x, int *origin_y, int *horizontal);

/* World X for object activation; 0 if the cell is unknown or still building. */
int  met_render_nt_world_x(int nt, int *world_x);

/* NesCustomRenderFn implementation. `user` is unused. Returns 0 (pillarbox
 * fallback) when the frame is not gated wide or the camera is unknown. */
int  met_render_frame(uint32_t *out, int out_w, int out_h, int native_x0,
                      const uint32_t *native, void *user);

/* HUD placement policy consumed by the sprite pass. */
void met_render_set_hud(MetWsHud hud, int hud_slot_start, int hud_slot_count);
void met_render_set_gate(int wide);                /* per-frame: draw wide or fall back */

/* Stats for metroid_ws_fill_stats / tests. */
typedef struct {
    uint32_t cells_cached;        /* cache entries for the current area */
    uint32_t decoded_cells;       /* cells filled by the native decoder */
    uint32_t decoder_mismatch;    /* decoded cells later loaded by the game that differed */
    uint32_t decoder_verified;    /* decoded cells later loaded by the game that matched */
    uint32_t cache_mismatch;      /* re-snapshots that differed from the cached copy */
    uint32_t frames_wide;         /* frames composited wide */
    uint32_t frames_fallback;     /* frames handed back to the engine */
    uint32_t streamed_columns[2], streamed_rows[2];
    uint32_t room_ready_mask;     /* logical RoomRAM complete; independent of uploads */
    uint32_t mismatch_bytes;
    uint32_t decoder_object_bytes; /* proven door collision-tile differences */
    uint32_t retired_enemies;
    int mismatch_cell_x, mismatch_cell_y, mismatch_offset;
    uint8_t mismatch_decoded, mismatch_actual;
} MetWsStats;
const MetWsStats *met_render_stats(void);

#ifdef __cplusplus
}
#endif
