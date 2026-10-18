#include "mod_runtime.h"
#include "game_voxel.h"

#include <stdio.h>

static void reset_voxel(void) {
    game_voxel_set_mod_enabled(0);
}

static void activate_voxel_diorama(void) {
    const char *package = "metroid.enhancement.voxel-diorama";
    const char *feature = "voxel-diorama";
    game_voxel_configure_mod(
        0,
        nes_mod_get_option_int(package, feature, "pitch", 30),
        nes_mod_get_option_int(package, feature, "yaw", -20),
        nes_mod_get_option_int(package, feature, "roll", 0),
        nes_mod_get_option_int(package, feature, "zoom", 100),
        nes_mod_get_option_int(package, feature, "sprite-scale", 125));
    game_voxel_set_mod_enabled(1);
}

static void activate_voxel_first_person(void) {
    const char *package = "metroid.enhancement.voxel-first-person";
    const char *feature = "voxel-first-person";
    game_voxel_configure_mod(
        1,
        nes_mod_get_option_int(package, feature, "pitch", 15),
        nes_mod_get_option_int(package, feature, "yaw", 0),
        nes_mod_get_option_int(package, feature, "roll", 0),
        nes_mod_get_option_int(package, feature, "zoom", 100),
        nes_mod_get_option_int(package, feature, "sprite-scale", 115));
    game_voxel_set_mod_enabled(1);
}

NES_MOD_CONSTRUCTOR(register_voxel_plugin) {
    int reset_registered = nes_mod_register_reset_callback(reset_voxel);
    int diorama_registered = nes_mod_register_activation_plugin(
        "metroid.voxel-diorama", activate_voxel_diorama);
    int first_person_registered = nes_mod_register_activation_plugin(
        "metroid.voxel-first-person", activate_voxel_first_person);
    if (!reset_registered || !diorama_registered ||
        !first_person_registered)
        fprintf(stderr, "[Mods] Failed to register Metroid voxel plugin\n");
}
