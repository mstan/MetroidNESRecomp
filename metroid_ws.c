/*
 * metroid_ws.c — Metroid (NES) widescreen policy: lifecycle, per-frame
 * gating, function-entry hooks and the debug stats block.
 *
 * See metroid_ws.h for the overall design and metroid_ws_render.c for the
 * world model and compositor. Nothing here does anything until
 * metroid_ws_enable() runs (mod activation, or the --widescreen dev flag).
 */
#include "metroid_ws.h"
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
#include "mod_function_hooks.h"

#include <stdio.h>
#include <string.h>

/* Set by the generated RTS emitter; see metroid_ws_hook_is_object_visible. */
extern uint16_t g_rts_target;

/* Function-hook plugin ids; must match mods/widescreen_plugin.c. */
#define WS_HOOK_IS_OBJECT_VISIBLE "metroid.widescreen.is-object-visible"
#define WS_HOOK_DISPLAY_BAR       "metroid.widescreen.display-bar"
#define WS_HOOK_ROOM_FINISHED     "metroid.widescreen.room-finished"
#define WS_HOOK_UPDATE_NAMETABLE  "metroid.widescreen.nametable-transfer"
#define WS_HOOK_RETIRE_ROOM       "metroid.widescreen.retire-room"

static int          s_enabled;
static MetWsHud     s_hud = MET_WS_HUD_EDGES;
static int          s_gate_wide;

/* ---- lifecycle ---------------------------------------------------------- */

void metroid_ws_init(void) {
    /*
     * Widescreen OAM X sidecar window. Metroid composes an object from frame
     * data whose per-sprite X displacements (XDisplacement $DFA3, applied to
     * Temp0E_ScreenX in WriteSpriteRAM $DEE6) span noticeably wider layouts
     * than SMB's <=5-tile frames -- Ridley, Kraid and Mother Brain in
     * particular. Widen the accepted delta so those sprites keep their
     * unwrapped X instead of silently falling back to the vanilla byte.
     */
    g_ws_obj_delta_min = -64;
    g_ws_obj_delta_max = 72;
    met_render_reset();
}

int metroid_ws_enabled(void) { return s_enabled; }

void metroid_ws_enable(NesAspectMode aspect, MetWsHud hud) {
    s_hud = hud;
    met_render_set_hud(hud, -1, 0);

    if (aspect == NES_ASPECT_STOCK) {
        metroid_ws_disable();
        return;
    }

    g_ws_oam_sidecar = 1;

    if (!ppu_renderer_set_custom_render(met_render_frame, NULL)) {
        /* The engine refuses while the opt-in dot-PPU is active (it publishes
         * incrementally, so there is no whole-frame hand-off point). */
        printf("[Widescreen] custom renderer refused by the engine "
               "(dot-PPU active?); staying stock\n");
        g_ws_oam_sidecar = 0;
        return;
    }

    nes_video_set_aspect_mode(aspect);
    nes_mod_set_function_hook_enabled(WS_HOOK_IS_OBJECT_VISIBLE, 1);
    nes_mod_set_function_hook_enabled(WS_HOOK_DISPLAY_BAR, 1);
    nes_mod_set_function_hook_enabled(WS_HOOK_ROOM_FINISHED, 1);
    nes_mod_set_function_hook_enabled(WS_HOOK_UPDATE_NAMETABLE, 1);
    nes_mod_set_function_hook_enabled(WS_HOOK_RETIRE_ROOM, 1);
    nes_mod_set_function_hook_enabled("metroid.widescreen.world", 1);
    nes_mod_set_function_hook_enabled("metroid.widescreen.spawn", 1);
    nes_mod_set_function_hook_enabled("metroid.widescreen.draw-enemy", 1);
    nes_mod_set_function_hook_enabled("metroid.widescreen.draw-object", 1);
    nes_mod_set_function_hook_enabled("metroid.widescreen.draw-frame", 1);

    s_enabled = 1;
    printf("[Widescreen] enabled: aspect=%s hud=%s\n",
           nes_video_aspect_name(aspect),
           hud == MET_WS_HUD_EDGES ? "edges" : "center");
}

void metroid_ws_disable(void) {
    int was = s_enabled;

    s_enabled = 0;
    s_gate_wide = 0;
    met_render_set_gate(0);
    met_render_set_hud(s_hud, -1, 0);

    nes_mod_set_function_hook_enabled(WS_HOOK_IS_OBJECT_VISIBLE, 0);
    nes_mod_set_function_hook_enabled(WS_HOOK_DISPLAY_BAR, 0);
    nes_mod_set_function_hook_enabled(WS_HOOK_ROOM_FINISHED, 0);
    nes_mod_set_function_hook_enabled(WS_HOOK_UPDATE_NAMETABLE, 0);
    nes_mod_set_function_hook_enabled(WS_HOOK_RETIRE_ROOM, 0);
    nes_mod_set_function_hook_enabled("metroid.widescreen.world", 0);
    nes_mod_set_function_hook_enabled("metroid.widescreen.spawn", 0);
    nes_mod_set_function_hook_enabled("metroid.widescreen.draw-enemy", 0);
    nes_mod_set_function_hook_enabled("metroid.widescreen.draw-object", 0);
    nes_mod_set_function_hook_enabled("metroid.widescreen.draw-frame", 0);

    ppu_renderer_set_custom_render(NULL, NULL);

    /* Back to the vanilla 256-pixel framebuffer. This also takes the mode out
     * of NES_ASPECT_FIT so a later window resize does not re-widen it.
     * (Requires nesrecomp >= 86e0a8b: before that commit STOCK routed through
     * the 4:3 aspect formula and produced a 320-wide picture, which broke
     * stock parity because this runs from the mod reset callback on every
     * launch, mod on or off.) */
    nes_video_set_aspect_mode(NES_ASPECT_STOCK);

    g_ws_oam_sidecar = 0;
    g_ws_obj_ctx_valid = 0;

    if (was) printf("[Widescreen] disabled (stock 256x240)\n");
}

/* ---- per-frame gating --------------------------------------------------- */

void metroid_ws_post_nmi(uint64_t frame_count) {
    int mr, wide;

    (void)frame_count;

    if (!s_enabled) {
        s_gate_wide = 0;
        met_render_set_gate(0);
        return;
    }

    /*
     * Wide only while the game engine owns the screen. GameMode ($1D) is 0
     * during play and 1 on the title/password screens (GoMainRoutine,
     * prg7_engine.asm:301-309). MainRoutine ($1E) indexes
     * MainRoutinePtrTable (:347-357); 3 = GameEngine, 5 = PauseMode,
     * 8 = SamusIntro, 9 = WaitTimer are the routines that leave a real room
     * on screen. Everything else (area init, game over, password) falls back
     * to the pillarboxed stock frame.
     *
     * The framebuffer width is deliberately NOT changed here: the engine
     * pillarboxes whenever the custom render function returns 0, so the
     * window geometry stays put across transitions instead of snapping.
     */
    mr = g_ram[MET_MainRoutine];
    wide = (g_ram[MET_GameMode] == 0) && (mr == 3 || mr == 5 || mr == 8 || mr == 9);

    s_gate_wide = wide;
    met_render_set_gate(wide);
    met_render_post_nmi();
    if (!wide) g_ws_obj_ctx_valid = 0;
}

/* ---- function-entry hooks ----------------------------------------------- */

/*
 * Pop the JSR return address the caller pushed.
 *
 * game.toml sets push_all_jsr, so every emitted call site writes the return
 * address into the guest stack page and then checks `g_cpu.S != _cbs` after
 * the call, bailing out of the caller when the callee did not balance the
 * stack. A hook that skips the original body also skips its RTS, so it must
 * perform that RTS itself -- otherwise every caller of the hooked routine
 * aborts. This mirrors exactly what the generated RTS does, including
 * publishing g_rts_target.
 */
static void ws_hook_rts(void) {
    uint8_t lo, hi;
    g_cpu.S++; lo = g_ram[0x100 + g_cpu.S];
    g_cpu.S++; hi = g_ram[0x100 + g_cpu.S];
    g_rts_target = (uint16_t)(((uint16_t)hi << 8) | lo);
}

/*
 * IsObjectVisible ($DFDF) — prg7_engine.asm:6444-6503.
 *
 * The routine answers "is this object inside the 256-pixel viewport?" and
 * returns X = 1/0. Its callers are ObjDrawFrame (:6251, which stores the
 * answer in Objects.onScreen) and the enemy frame path (:6126, which stores
 * it in Ens.data05 bit 1). DeleteOffscreenRoomSprites ($EC9B) deletes
 * enemies on the opposite nametable whose bit 1 is clear. A third caller,
 * UpdateEnemy_CheckIfVisible (:10456), gates resting/active enemy updates.
 *
 * DELIBERATE RAM DELTA: this hook widens the horizontal window to the
 * widescreen viewport, so Objects.onScreen and Ens.data05 bit 1 become
 * "visible in the widened view" instead of "visible in the 256-pixel view".
 * That is the point -- a purely draw-side widening would let the game delete
 * (or never mark visible) exactly the enemies the margins reveal, and they
 * would pop in and out at the old screen edge. The widened answer is a
 * SUPERSET of the vanilla one (vanilla_visible || widened_visible), so
 * nothing the stock game considered visible is ever hidden.
 *
 * Falls through to the original 6502 body (returns 0) whenever the mod is
 * off, the frame is not gated wide, the room scrolls vertically, or either
 * nametable's map cell is unknown -- so the vanilla answer is used unless we
 * can compute a strictly better one.
 */
int metroid_ws_hook_is_object_visible(uint16_t addr) {
    uint8_t pos_y, pos_x, hi_nt, radius, scroll_x, scroll_y, screen_x, screen_y;
    int origin_x, origin_y, horiz, nt_x0, nt_x1, wx;
    int same_nt, vanilla_visible, widened_visible, visible;

    (void)addr;

    if (s_enabled) g_ws_obj_ctx_valid = 0;
    if (!s_enabled || !s_gate_wide) return 0;
    if (met_actors_virtual_position(&wx, &origin_y)) {
        g_ram[MET_Temp10_ScreenY]=g_ram[MET_Temp0A_PositionY];
        g_ram[MET_Temp0E_ScreenX]=g_ram[MET_Temp0B_PositionX];
        g_cpu.Y=g_ram[MET_Temp0A_PositionY];g_cpu.X=1;
        g_cpu.Z=0;g_cpu.N=0;
        g_ws_obj_true_rel=(int16_t)met_actors_virtual_screen_x(wx);
        g_ws_obj_rel8=g_ram[MET_Temp0B_PositionX];g_ws_obj_ctx_valid=1;
        ws_hook_rts();return 1;
    }
    if (!met_render_camera(&origin_x, &origin_y, &horiz) || !horiz) return 0;
    if (!met_render_nt_world_x(0, &nt_x0) || !met_render_nt_world_x(1, &nt_x1)) return 0;

    pos_y    = g_ram[MET_Temp0A_PositionY];
    pos_x    = g_ram[MET_Temp0B_PositionX];
    hi_nt    = g_ram[MET_Temp06_PositionHi];
    radius   = g_ram[MET_Temp09_RadiusX];
    scroll_x = g_ram[MET_ScrollX];
    scroll_y = g_ram[MET_ScrollY];

    /* The routine's side effects, byte for byte. */
    screen_y = (uint8_t)(pos_y - scroll_y);
    screen_x = (uint8_t)(pos_x - scroll_x);
    g_ram[MET_Temp10_ScreenY] = screen_y;
    g_ram[MET_Temp0E_ScreenX] = screen_x;
    g_cpu.Y = pos_y;                       /* `tay` after loading PositionY */

    /* Exact port of the horizontal branch (HorzScrollCheck, :6484-6503).
     * Carry entering the branch is "PositionX >= ScrollX". */
    same_nt = (((hi_nt ^ g_ram[MET_PPUCTRL_ZP]) & 1u) == 0);
    if (same_nt)
        vanilla_visible = (pos_x >= scroll_x) && (radius < screen_x);
    else
        vanilla_visible = (pos_x <  scroll_x) && (((int)radius + (int)screen_x) < 256);

    /* Preserve the original horizontal path's accumulator and ALU flags.
     * The callers currently consume X, but a function replacement must not
     * silently leave the incoming A/C/V behind. SBC X sets V; CMP preserves it. */
    g_cpu.V = ((pos_x ^ scroll_x) & (pos_x ^ screen_x) & 0x80u) != 0;
    g_cpu.C = pos_x >= scroll_x;
    g_cpu.A = (uint8_t)(same_nt ? 0 : 1);
    g_cpu.N = 0; g_cpu.Z = same_nt;
    if (same_nt && g_cpu.C) {
        g_cpu.A = radius;
        g_cpu.C = radius >= screen_x;
        g_cpu.N = ((uint8_t)(radius - screen_x) >> 7) & 1;
        g_cpu.Z = radius == screen_x;
    } else if (!same_nt && !g_cpu.C) {
        unsigned sum = (unsigned)radius + screen_x;
        g_cpu.A = (uint8_t)sum;
        g_cpu.V = ((~(radius ^ screen_x) & (radius ^ g_cpu.A)) >> 7) & 1;
        g_cpu.N = g_cpu.A >> 7; g_cpu.Z = g_cpu.A == 0;
        g_cpu.C = 0; /* overflow takes the explicit CLC before DEX */
    }
    if (!vanilla_visible) { g_cpu.N = 0; g_cpu.Z = 1; } /* DEX */

    /* True (unwrapped) screen X: the object's room X inside its own cell,
     * expressed relative to the camera. */
    wx = (((hi_nt & 1u) ? nt_x1 : nt_x0) + (int)pos_x) - origin_x;
    widened_visible = ((wx - (int)radius) > -g_widescreen_left) &&
                      ((wx + (int)radius) < 256 + g_widescreen_right);

    visible = vanilla_visible || widened_visible;
    g_cpu.X = (uint8_t)(visible ? 1 : 0);

    /* Publish the 16-bit OAM X sidecar context for the WriteSpriteRAM stores
     * that follow, so the object's sprites keep an unwrapped screen X. */
    if (visible) {
        g_ws_obj_true_rel = (int16_t)(wx < -32768 ? -32768 : (wx > 32767 ? 32767 : wx));
        g_ws_obj_rel8     = screen_x;
        g_ws_obj_ctx_valid = 1;
    } else {
        g_ws_obj_ctx_valid = 0;
    }

    ws_hook_rts();
    return 1;
}

/*
 * DisplayBar ($E0C1) — prg7_engine.asm:6592-6604. Observe only (returns 0).
 *
 * The status bar is OAM sprites: the routine copies 10 four-byte entries from
 * DataDisplayTbl into SpriteRAM starting at SpritePagePos, then overwrites
 * tile ids inside those same 10 entries with the health/missile digits. So
 * the HUD occupies exactly slots [SpritePagePos/4, +10) and nothing else --
 * there is no sprite-0 split anywhere in Metroid to anchor against.
 */
int metroid_ws_hook_display_bar(uint16_t addr) {
    (void)addr;
    if (!s_enabled) return 0;
    met_render_set_hud(s_hud, g_ram[MET_SpritePagePos] >> 2, 10);
    /* HUD sprites carry no object context; a stale one would displace them. */
    g_ws_obj_ctx_valid = 0;
    return met_actors_hook_draw_hud(addr);
}

/*
 * RoomFinished ($EA26) — prg7_engine.asm:8485. Observe only (returns 0).
 * The last step of loading a room: RoomRAM A/B holds the finished 32x30
 * nametable image for map cell (MapPosX, MapPosY).
 */
int metroid_ws_hook_room_finished(uint16_t addr) {
    (void)addr;
    if (!s_enabled) return 0;
    met_render_note_room_finished();
    return 0;
}

int metroid_ws_hook_get_name_addrs(uint16_t addr) {
    uint16_t caller;
    (void)addr;
    /* Both scrolling paths JSR here from $E592. Vertical scrolling falls
     * through $E590 in several generated functions, bypassing an entry hook
     * there. Ignore the other caller (attribute uploads) explicitly. */
    caller = (uint16_t)(g_ram[0x100 + (uint8_t)(g_cpu.S + 1)] |
                       ((uint16_t)g_ram[0x100 + (uint8_t)(g_cpu.S + 2)] << 8));
    if (s_enabled && caller == 0xE594u) met_render_note_stream();
    return 0;
}

int metroid_ws_hook_retire_room(uint16_t addr) {
    int nt;
    (void)addr;
    if (!s_enabled) return 0;
    nt = (g_ram[MET_PPUCTRL_ZP] ^ g_ram[MET_ScrollDir]) & 1;
    met_render_begin_room(nt);
    return 0; /* the original cleanup still runs and balances its own stack */
}

/* ---- CLI spec parsing --------------------------------------------------- */

int metroid_ws_parse_spec(const char *spec, NesAspectMode *aspect, MetWsHud *hud) {
    char buf[64];
    char *comma;
    MetWsHud h = MET_WS_HUD_EDGES;
    NesAspectMode m;

    if (!spec || !*spec) return 0;

    {
        size_t i;
        for (i = 0; i + 1 < sizeof buf && spec[i]; i++) buf[i] = spec[i];
        buf[i] = '\0';
    }

    comma = strchr(buf, ',');
    if (comma) {
        const char *hs = comma + 1;
        *comma = '\0';
        if (!strcmp(hs, "edges"))                              h = MET_WS_HUD_EDGES;
        else if (!strcmp(hs, "center") || !strcmp(hs, "centre")) h = MET_WS_HUD_CENTER;
        else return 0;
    }

    /* nes_video_aspect_from_name accepts stock/off/4:3, 16:9|16-9|16x9,
     * 21:9, 32:9 and fit|adaptive|auto. */
    if (!nes_video_aspect_from_name(buf, &m)) return 0;

    if (aspect) *aspect = m;
    if (hud)    *hud = h;
    return 1;
}

/* ---- debug stats -------------------------------------------------------- */

static uint8_t sat8(uint32_t v)  { return (uint8_t)(v > 255u ? 255u : v); }
static uint8_t lo16(uint32_t v)  { return (uint8_t)(v > 0xFFFFu ? 0xFFu : (v & 0xFFu)); }
static uint8_t hi16(uint32_t v)  { return (uint8_t)(v > 0xFFFFu ? 0xFFu : ((v >> 8) & 0xFFu)); }

/*
 * game_data[16..31] widescreen block (game_data[0..15] stays the existing
 * Metroid state capture in extras.c):
 *
 *   [16] render width low byte      [17] render width high byte
 *   [18] left margin (px)           [19] right margin (px)
 *   [20] flags: bit0 nametable 0 cell known, bit1 nametable 1 cell known,
 *               bit2 frame gated wide, bit3 mod enabled
 *   [21] cells_cached low           [22] cells_cached high
 *   [23] decoded_cells low          [24] decoded_cells high
 *   [25] decoder_verified (saturating 255)
 *   [26] decoder_mismatch (saturating 255)
 *   [27] cache_mismatch   (saturating 255)
 *   [28] frames_wide low            [29] frames_wide high
 *   [30] frames_fallback low        [31] frames_fallback high
 *
 * The 16-bit pairs saturate at 0xFFFF (both bytes 0xFF).
 */
void metroid_ws_fill_stats(uint8_t *game_data32) {
    const MetWsStats *st = met_render_stats();
    const MetWsCells *cl = met_render_cells();
    uint8_t flags;

    if (!game_data32) return;

    game_data32[16] = (uint8_t)(g_render_width & 0xFF);
    game_data32[17] = (uint8_t)((g_render_width >> 8) & 0xFF);
    game_data32[18] = (uint8_t)(g_widescreen_left  > 255 ? 255 : g_widescreen_left);
    game_data32[19] = (uint8_t)(g_widescreen_right > 255 ? 255 : g_widescreen_right);

    flags = 0;
    if (cl->cell_x[0] >= 0) flags |= 0x01u;
    if (cl->cell_x[1] >= 0) flags |= 0x02u;
    if (s_gate_wide)        flags |= 0x04u;
    if (s_enabled)          flags |= 0x08u;
    game_data32[20] = flags;

    game_data32[21] = lo16(st->cells_cached);
    game_data32[22] = hi16(st->cells_cached);
    game_data32[23] = lo16(st->decoded_cells);
    game_data32[24] = hi16(st->decoded_cells);
    game_data32[25] = sat8(st->decoder_verified);
    game_data32[26] = sat8(st->decoder_mismatch);
    game_data32[27] = sat8(st->cache_mismatch);
    game_data32[28] = lo16(st->frames_wide);
    game_data32[29] = hi16(st->frames_wide);
    game_data32[30] = lo16(st->frames_fallback);
    game_data32[31] = hi16(st->frames_fallback);
}
