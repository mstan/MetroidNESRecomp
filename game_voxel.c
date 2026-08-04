/*
 * Metroid semantic profile for NESRecomp's opt-in screen diorama adapter.
 * Architecture becomes depth geometry; live OAM becomes oriented cards.
 */
#include "game_voxel.h"

#include "config.h"
#include "controller.h"
#include "nes_runtime.h"
#include "voxel_screen_profile.h"

#include <math.h>

#define METROID_PI 3.14159265358979323846f
#define METROID_HUD_X0 24
#define METROID_HUD_X1 64
#define METROID_HUD_Y0 34
#define METROID_HUD_Y1 42

static NesVoxelScreenState s_voxel;
static float s_first_person_heading;
static float s_first_person_target_heading;
static float s_first_person_aim_pitch;
static float s_first_person_free_yaw;
static float s_right_stick_x;
static float s_right_stick_y;
static int s_first_person_heading_initialized;

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

static float clamp_float(float value, float low, float high) {
    if (value < low) return low;
    if (value > high) return high;
    return value;
}

static float stick_curve(float value) {
    const float deadzone = 0.18f;
    float magnitude = value < 0.0f ? -value : value;
    float scaled;
    if (magnitude <= deadzone) return 0.0f;
    scaled = (magnitude - deadzone) / (1.0f - deadzone);
    scaled *= scaled;
    return value < 0.0f ? -scaled : scaled;
}

static float ease_angle(float current, float target, float amount) {
    float delta = target - current;
    while (delta > 180.0f) delta -= 360.0f;
    while (delta < -180.0f) delta += 360.0f;
    if (delta > -0.25f && delta < 0.25f) return target;
    current += delta * amount;
    while (current > 180.0f) current -= 360.0f;
    while (current < -180.0f) current += 360.0f;
    return current;
}

static void metroid_first_person_camera(NesVoxelScreenCamera *camera,
                                        float pitch, float yaw, float roll,
                                        float zoom_percent, void *user) {
    float player_x = (float)g_ram[0x0051]; /* SamusScrX */
    float player_y = (float)g_ram[0x0052]; /* SamusScrY */
    uint8_t directions = g_controller1_buttons & 0x0B;
    float heading;
    float look_pitch;
    float look_distance = 128.0f;
    (void)roll;
    (void)user;

    if (player_x < 8.0f || player_x > 248.0f) player_x = 128.0f;
    if (player_y < 48.0f || player_y > 239.0f) player_y = 176.0f;

    if (!s_first_person_heading_initialized) {
        s_first_person_heading = g_ram[0x004D] ? 180.0f : 0.0f;
        s_first_person_target_heading = s_first_person_heading;
        s_first_person_heading_initialized = 1;
    }
    /* Right/left input owns horizontal facing. Internal SamusDir is retained
     * only as the initial heading, avoiding the same delayed-camera problem
     * that made Zelda's first-person controls disorienting. */
    if (directions & 0x01)
        s_first_person_target_heading = 0.0f;
    else if (directions & 0x02)
        s_first_person_target_heading = 180.0f;
    s_first_person_heading = ease_angle(
        s_first_person_heading, s_first_person_target_heading, 0.38f);

    /* Holding Up is Samus's native aim-up gesture. The right stick adds free
     * look without consuming her ordinary D-pad or face-button controls. */
    s_first_person_free_yaw += stick_curve(s_right_stick_x) * 2.5f;
    while (s_first_person_free_yaw > 180.0f)
        s_first_person_free_yaw -= 360.0f;
    while (s_first_person_free_yaw < -180.0f)
        s_first_person_free_yaw += 360.0f;
    {
        float stick_pitch = -stick_curve(s_right_stick_y);
        float target_pitch =
            (directions & 0x08) ? 72.0f :
            (stick_pitch >= 0.0f ? stick_pitch * 89.0f
                                 : stick_pitch * 45.0f);
        s_first_person_aim_pitch +=
            (target_pitch - s_first_person_aim_pitch) * 0.30f;
    }
    heading =
        (s_first_person_heading + s_first_person_free_yaw + yaw) *
        METROID_PI / 180.0f;
    look_pitch =
        ((pitch - 15.0f) + s_first_person_aim_pitch) *
        METROID_PI / 180.0f;

    camera->enabled = 1;
    camera->eye_x = player_x;
    camera->eye_y = clamp_float(240.0f - player_y, 8.0f, 184.0f);
    camera->eye_z = 0.0f;
    camera->look_at_x =
        camera->eye_x + cosf(heading) * cosf(look_pitch) * look_distance;
    camera->look_at_y =
        camera->eye_y + sinf(look_pitch) * look_distance;
    camera->look_at_z =
        camera->eye_z + sinf(heading) * cosf(look_pitch) * look_distance;
    /* Open the lens as the view approaches vertical. At the former fixed
     * focal length, directly-overhead enemies and Samus's shot path sat just
     * outside the frustum even though the camera had pitched upward. */
    camera->focal_scale = clamp_float(
        (0.72f - 0.18f * s_first_person_aim_pitch / 72.0f) *
            zoom_percent / 100.0f,
        0.38f, 1.25f);
    camera->center_y = 0.55f;
}

static int metroid_first_person_sprite_connect(int first_index,
                                                int second_index,
                                                void *user) {
    int first = first_index * 4;
    int second = second_index * 4;
    int first_x = g_ppu_oam[first + 3];
    int first_y = g_ppu_oam[first] + 1;
    int second_x = g_ppu_oam[second + 3];
    int second_y = g_ppu_oam[second] + 1;
    int player_x = g_ram[0x0051]; /* SamusScrX */
    int player_y = g_ram[0x0052]; /* SamusScrY */
    int first_hud;
    int second_hud;
    int first_samus;
    int second_samus;
    (void)user;

    /* OAM indices move as enemies enter and leave, so identify the two
     * presentation-only groups geometrically instead of assuming fixed bands.
     * Energy glyph pieces occupy fixed 8-pixel cells; Samus occupies the
     * 16x40 grid around her live screen coordinates. */
    first_hud =
        first_x >= 24 && first_x <= 56 &&
        (first_y == 34 || first_y == 44);
    second_hud =
        second_x >= 24 && second_x <= 56 &&
        (second_y == 34 || second_y == 44);
    first_samus =
        first_x >= player_x - 8 && first_x <= player_x &&
        first_y >= player_y - 24 && first_y <= player_y + 8;
    second_samus =
        second_x >= player_x - 8 && second_x <= player_x &&
        second_y >= player_y - 24 && second_y <= player_y + 8;

    if (first_hud != second_hud)
        return -1;
    if (!first_hud && !second_hud && first_samus != second_samus)
        return -1;
    return 0;
}

static int metroid_first_person_sprite_members_visible(
    const int *members, int member_count,
    int min_x, int min_y, int max_x, int max_y, void *user) {
    (void)min_x;
    (void)min_y;
    (void)max_x;
    (void)max_y;
    (void)user;
    for (int i = 0; i < member_count; i++) {
        int index = members[i] * 4;
        int x = g_ppu_oam[index + 3];
        int y = g_ppu_oam[index] + 1;
        int player_x = g_ram[0x0051]; /* SamusScrX */
        int player_y = g_ram[0x0052]; /* SamusScrY */
        int is_hud =
            x >= 24 && x <= 56 && (y == 34 || y == 44);
        int is_samus =
            x >= player_x - 8 && x <= player_x &&
            y >= player_y - 24 && y <= player_y + 8;
        /* Energy is composited once below. The eye occupies Samus's body, but
         * a projectile that has emerged above that grid remains world-space. */
        if (is_hud || is_samus)
            return 0;
    }
    return 1;
}

static int metroid_metatile_grid_offset(void *user) {
    (void)user;
    return -(g_ram[0x00FD] & 15); /* ScrollX */
}

static const NesVoxelScreenProfile s_diorama_profile = {
    "Metroid diorama",
    48, 192, 48, 0, 85,
    30, -20, 0, 100, 125,
    0xFF02040Au, 0xFF07121Cu,
    metroid_scene_visible,
    metroid_tile_height,
    0
};

static const NesVoxelScreenProfile s_first_person_profile = {
    "Metroid first-person voxel",
    0, 240, 0, 0, 85,
    15, 0, 0, 100, 115,
    0xFF02040Au, 0xFF07121Cu,
    metroid_scene_visible,
    metroid_tile_height,
    0,
    metroid_first_person_camera,
    0,
    NES_VOXEL_LAYOUT_SIDE,
    2,
    metroid_metatile_grid_offset,
    24,
    metroid_first_person_sprite_connect,
    metroid_first_person_sprite_members_visible
};

static const NesVoxelScreenProfile *s_active_profile = &s_diorama_profile;

void game_voxel_set_mod_enabled(int enabled) {
    nes_voxel_screen_set_enabled(&s_voxel, enabled);
}

void game_voxel_configure_mod(int first_person,
                              int pitch, int yaw, int roll,
                              int zoom_percent, int sprite_scale_percent) {
    s_active_profile =
        first_person ? &s_first_person_profile : &s_diorama_profile;
    if (first_person) {
        s_first_person_heading_initialized = 0;
        s_first_person_aim_pitch = 0.0f;
        s_first_person_free_yaw = 0.0f;
        s_right_stick_x = s_right_stick_y = 0.0f;
    }
    nes_voxel_screen_configure(&s_voxel, pitch, yaw, roll,
                               zoom_percent, sprite_scale_percent);
}

void game_voxel_handle_event(const SDL_Event *event) {
    SDL_Event translated;
    if (!event) return;
    if (s_active_profile == &s_first_person_profile &&
        event->type == SDL_CONTROLLERAXISMOTION &&
        g_nes_config.player_src[0] == 2 &&
        controller_instance_is_player(event->caxis.which, 1)) {
        float value = event->caxis.value < 0
            ? (float)event->caxis.value / 32768.0f
            : (float)event->caxis.value / 32767.0f;
        if (event->caxis.axis == SDL_CONTROLLER_AXIS_RIGHTX)
            s_right_stick_x = value;
        else if (event->caxis.axis == SDL_CONTROLLER_AXIS_RIGHTY)
            s_right_stick_y = value;
    } else if (event->type == SDL_CONTROLLERDEVICEREMOVED) {
        s_right_stick_x = s_right_stick_y = 0.0f;
    }
    translated = *event;
    /* The shared live controls historically accepted only keypad +/-.
     * First person also accepts the main keyboard's +/- pair as FOV controls. */
    if (s_active_profile == &s_first_person_profile &&
        event->type == SDL_KEYDOWN) {
        if (event->key.keysym.scancode == SDL_SCANCODE_EQUALS)
            translated.key.keysym.scancode = SDL_SCANCODE_KP_PLUS;
        else if (event->key.keysym.scancode == SDL_SCANCODE_MINUS)
            translated.key.keysym.scancode = SDL_SCANCODE_KP_MINUS;
    }
    nes_voxel_screen_handle_event(&s_voxel, &translated);
}

void game_voxel_init(void) {
    nes_voxel_screen_init(&s_voxel, s_active_profile);
}

void game_voxel_update(void) {
    nes_voxel_screen_update(&s_voxel, s_active_profile);
}

void game_voxel_post_render(uint32_t *framebuffer) {
    uint32_t hud[(METROID_HUD_X1 - METROID_HUD_X0) *
                 (METROID_HUD_Y1 - METROID_HUD_Y0)];
    int hud_width = METROID_HUD_X1 - METROID_HUD_X0;
    if (s_active_profile == &s_first_person_profile) {
        for (int y = METROID_HUD_Y0; y < METROID_HUD_Y1; y++) {
            for (int x = METROID_HUD_X0; x < METROID_HUD_X1; x++) {
                int index =
                    y * g_render_width + g_widescreen_left + x;
                hud[(y - METROID_HUD_Y0) * hud_width +
                    x - METROID_HUD_X0] = framebuffer[index];
                /* Remove fixed Energy glyphs before the screen becomes world
                 * geometry. The captured pixels are restored after projection,
                 * so the readout exists exactly once: in screen-space HUD. */
                framebuffer[index] = 0xFF000000u;
            }
        }
    }
    nes_voxel_screen_post_render(&s_voxel, s_active_profile, framebuffer);
    if (s_active_profile == &s_first_person_profile) {
        for (int y = METROID_HUD_Y0; y < METROID_HUD_Y1; y++) {
            for (int x = METROID_HUD_X0; x < METROID_HUD_X1; x++) {
                uint32_t color =
                    hud[(y - METROID_HUD_Y0) * hud_width +
                        x - METROID_HUD_X0];
                unsigned r = (color >> 16) & 0xFF;
                unsigned g = (color >> 8) & 0xFF;
                unsigned b = color & 0xFF;
                /* The readout sits on black. Restore only its colored glyphs
                 * so no flat rectangular strip survives around the HUD. */
                if (r + g + b >= 72)
                    framebuffer[y * g_render_width +
                                g_widescreen_left + x] = color;
            }
        }
    }
}
