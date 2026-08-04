#pragma once

#include <stdint.h>
#include <SDL.h>

void game_voxel_set_mod_enabled(int enabled);
void game_voxel_configure_mod(int first_person,
                              int pitch, int yaw, int roll,
                              int zoom_percent, int sprite_scale_percent);
void game_voxel_handle_event(const SDL_Event *event);
void game_voxel_init(void);
void game_voxel_update(void);
void game_voxel_post_render(uint32_t *framebuffer);
