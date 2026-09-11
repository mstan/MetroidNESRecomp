/*
 * mods/widescreen_plugin.c — trusted plugin registration for the Metroid
 * widescreen package.
 *
 * The package (mods/preloaded/packages/metroid.enhancement.widescreen) is
 * declarative: it names this plugin id and two choice options. Everything the
 * feature actually does lives in metroid_ws.c / metroid_ws_render.c; this
 * file only wires the mod runtime to it.
 *
 * Registration is by stable id, before main(). Function-entry hooks start
 * DISABLED, so linking this file cannot change behavior; metroid_ws_enable()
 * enables them and metroid_ws_disable() (the reset callback, which the
 * runtime runs before any activation) turns them back off.
 */
#include "mod_runtime.h"
#include "mod_function_hooks.h"
#include "mod_savestate.h"
#include "metroid_ws.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define WS_PACKAGE_ID "metroid.enhancement.widescreen"
#define WS_FEATURE_ID "widescreen"
#define WS_PLUGIN_ID  "metroid.widescreen"

/* USA 6502 entry addresses; all routines live in fixed bank 7. */
#define WS_ADDR_IS_OBJECT_VISIBLE 0xDFDFu   /* IsObjectVisible */
#define WS_ADDR_DISPLAY_BAR       0xE0C1u   /* DisplayBar */
#define WS_ADDR_ROOM_FINISHED     0xEA26u   /* RoomFinished */
#define WS_ADDR_GET_NAME_ADDRS    0xE564u   /* GetNameAddrs */
#define WS_ADDR_RETIRE_ROOM       0xEC9Bu   /* DeleteOffscreenRoomSprites */

static void reset_widescreen(void) {
    metroid_ws_disable();
}

static void activate_widescreen(void) {
    NesAspectMode aspect = NES_ASPECT_FIT;
    MetWsHud hud = MET_WS_HUD_EDGES;
    char value[32];

    /* Manifest defaults are fit/edges; fall back to those whenever the
     * committed plan cannot supply a value rather than treating an empty
     * string as a selection. */
    if (nes_mod_option_value(WS_PACKAGE_ID, WS_FEATURE_ID, "aspect",
                             value, sizeof value)) {
        if (!nes_video_aspect_from_name(value, &aspect)) {
            fprintf(stderr, "[Widescreen] unknown aspect option '%s'; using fit\n",
                    value);
            aspect = NES_ASPECT_FIT;
        }
    }
    if (nes_mod_option_value(WS_PACKAGE_ID, WS_FEATURE_ID, "hud",
                             value, sizeof value)) {
        if (!strcmp(value, "center"))      hud = MET_WS_HUD_CENTER;
        else if (!strcmp(value, "edges"))  hud = MET_WS_HUD_EDGES;
        else fprintf(stderr, "[Widescreen] unknown hud option '%s'; using edges\n",
                     value);
    }

    metroid_ws_enable(aspect, hud);
    int actors=0,sprites=0,smooth=0;
    if(nes_mod_option_value(WS_PACKAGE_ID,WS_FEATURE_ID,"actors",value,sizeof value)) actors=!strcmp(value,"viewport");
    if(nes_mod_option_value(WS_PACKAGE_ID,WS_FEATURE_ID,"sprites",value,sizeof value)) sprites=!strcmp(value,"expanded");
    if(nes_mod_option_value(WS_PACKAGE_ID,WS_FEATURE_ID,"timing",value,sizeof value)) smooth=!strcmp(value,"smooth");
    met_actors_configure(actors,sprites,smooth);
}

NES_MOD_CONSTRUCTOR(register_metroid_widescreen_plugin) {
    int ok = nes_mod_register_reset_callback(reset_widescreen);
    ok &= nes_mod_register_function_entry_plugin("metroid.widescreen.world",0xCB29,met_actors_hook_world);
    ok &= nes_mod_register_function_entry_plugin("metroid.widescreen.spawn",0xEB0C,met_actors_hook_spawn);
    ok &= nes_mod_register_function_entry_plugin("metroid.widescreen.proximity",0xF75B,met_actors_hook_proximity);
    ok &= nes_mod_register_function_entry_plugin("metroid.widescreen.draw-enemy",0xDD8B,met_actors_hook_draw_enemy);
    ok &= nes_mod_register_function_entry_plugin("metroid.widescreen.update-enemy",0xF351,met_actors_hook_draw_enemy);
    ok &= nes_mod_register_function_entry_plugin("metroid.widescreen.update-enemies",0xF345,met_actors_hook_draw_enemy);
    ok &= nes_mod_register_function_entry_plugin("metroid.widescreen.doors",0x8B79,met_actors_hook_doors);
    ok &= nes_mod_register_function_entry_plugin("metroid.widescreen.draw-object",0xDE47,met_actors_hook_draw_object);
    ok &= nes_mod_register_function_entry_plugin("metroid.widescreen.draw-frame",0xDE4A,met_actors_hook_draw_object);
    ok &= nes_mod_register_activation_plugin(WS_PLUGIN_ID, activate_widescreen);
    ok &= nes_mod_register_function_entry_plugin(
              "metroid.widescreen.is-object-visible",
              WS_ADDR_IS_OBJECT_VISIBLE, metroid_ws_hook_is_object_visible);
    ok &= nes_mod_register_function_entry_plugin(
              "metroid.widescreen.display-bar",
              WS_ADDR_DISPLAY_BAR, metroid_ws_hook_display_bar);
    ok &= nes_mod_register_function_entry_plugin(
              "metroid.widescreen.room-finished",
              WS_ADDR_ROOM_FINISHED, metroid_ws_hook_room_finished);
    ok &= nes_mod_register_function_entry_plugin(
              "metroid.widescreen.nametable-transfer",
              WS_ADDR_GET_NAME_ADDRS, metroid_ws_hook_get_name_addrs);
    ok &= nes_mod_register_function_entry_plugin(
              "metroid.widescreen.retire-room", WS_ADDR_RETIRE_ROOM, metroid_ws_hook_retire_room);
    ok &= nes_mod_register_savestate_hook("metroid.widescreen.renderer.v1",
                                         met_render_save, met_render_load);
    ok &= nes_mod_register_savestate_hook("metroid.widescreen.actors.v1",
                                         met_actors_save, met_actors_load);
    if (!ok)
        fprintf(stderr, "[Mods] Failed to register Metroid widescreen plugin\n");
}
