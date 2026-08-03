/*
 * Metroid semantic profile for NESRecomp's opt-in screen diorama adapter.
 * Architecture becomes depth geometry; live OAM becomes oriented cards.
 */
#include "game_voxel.h"

#include "nes_runtime.h"
#include "voxel_screen_profile.h"

static NesVoxelScreenState s_voxel;

static int metroid_scene_visible(const uint32_t *framebuffer,
                                 int stride, void *user) {
    (void)framebuffer;
    (void)stride;
    (void)user;
    /* $1D is nonzero on title/password/menu screens and zero in active play. */
    return g_ram[0x001D] == 0;
}

static float metroid_tile_height(const NesVoxelScreenSample *sample,
                                 void *user) {
    int filled = sample->non_background_pixels;
    (void)user;
    /* Metroid rooms use black negative space. Dense blue/stone cells are
     * collision architecture; sparse strips such as pipes and door details
     * receive only shallow relief instead of becoming full cubes. */
    if (filled < 5) return 0.0f;
    if (filled >= 40) return 18.0f;
    if (filled >= 20) return 13.0f;
    return 6.0f;
}

static const NesVoxelScreenProfile s_profile = {
    "Metroid diorama",
    48, 192, 48, 0, 85,
    30, -20, 0, 100, 125,
    0xFF02040Au, 0xFF07121Cu,
    metroid_scene_visible,
    metroid_tile_height,
    0
};

void game_voxel_set_mod_enabled(int enabled) {
    nes_voxel_screen_set_enabled(&s_voxel, enabled);
}

void game_voxel_configure_mod(int pitch, int yaw, int roll,
                              int zoom_percent, int sprite_scale_percent) {
    nes_voxel_screen_configure(&s_voxel, pitch, yaw, roll,
                               zoom_percent, sprite_scale_percent);
}

void game_voxel_handle_event(const SDL_Event *event) {
    nes_voxel_screen_handle_event(&s_voxel, event);
}

void game_voxel_init(void) {
    nes_voxel_screen_init(&s_voxel, &s_profile);
}

void game_voxel_update(void) {
    nes_voxel_screen_update(&s_voxel, &s_profile);
}

void game_voxel_post_render(uint32_t *framebuffer) {
    nes_voxel_screen_post_render(&s_voxel, &s_profile, framebuffer);
}
