#include "mod_runtime.h"
#include "game_voxel.h"

#include <stdio.h>

static void reset_voxel(void) {
    game_voxel_set_mod_enabled(0);
}

static void activate_voxel(void) {
    const char *package = "metroid.enhancement.voxel-diorama";
    const char *feature = "voxel-diorama";
    game_voxel_configure_mod(
        nes_mod_get_option_int(package, feature, "pitch", 30),
        nes_mod_get_option_int(package, feature, "yaw", -20),
        nes_mod_get_option_int(package, feature, "roll", 0),
        nes_mod_get_option_int(package, feature, "zoom", 100),
        nes_mod_get_option_int(package, feature, "sprite-scale", 125));
    game_voxel_set_mod_enabled(1);
}

NES_MOD_CONSTRUCTOR(register_voxel_plugin) {
    if (!nes_mod_register_reset_callback(reset_voxel) ||
        !nes_mod_register_activation_plugin(
            "metroid.voxel-diorama", activate_voxel))
        fprintf(stderr, "[Mods] Failed to register Metroid voxel plugin\n");
}
