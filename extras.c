/*
 * extras.c -- Metroid game-specific runner hooks
 *
 * Implements game_extras.h for Metroid (NES).
 * Minimal stubs -- no game-specific logic yet.
 */
#include "game_extras.h"
#include "nes_runtime.h"
#include "debug_server.h"
#include "verify_mode.h"
#include "input_script.h"
#include "recomp_stack.h"
#ifdef ENABLE_NESTOPIA_ORACLE
#include "nestopia_bridge.h"
#endif
#include <SDL.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifdef _WIN32
#  define WIN32_LEAN_AND_MEAN
#  include <windows.h>
#endif

/* ---- SRAM persistence ---- */
static char s_sram_path[512] = "";
static uint8_t s_sram_snapshot[0x2000];
static int s_sram_dirty = 0;

static void sram_load(void) {
    FILE *f = fopen(s_sram_path, "rb");
    if (f) {
        size_t n = fread(g_sram, 1, 0x2000, f);
        fclose(f);
        memcpy(s_sram_snapshot, g_sram, 0x2000);
        printf("[SRAM] Loaded %zu bytes from %s\n", n, s_sram_path);
    } else {
        printf("[SRAM] No save file found, starting fresh\n");
        memcpy(s_sram_snapshot, g_sram, 0x2000);
    }
}

static void sram_save(void) {
    if (memcmp(g_sram, s_sram_snapshot, 0x2000) == 0) return;
    FILE *f = fopen(s_sram_path, "wb");
    if (f) {
        fwrite(g_sram, 1, 0x2000, f);
        fclose(f);
        memcpy(s_sram_snapshot, g_sram, 0x2000);
        printf("[SRAM] Saved to %s\n", s_sram_path);
    }
}

/* ---- Debug mode ---- */
static int s_debug_enabled = 0;
static void get_exe_relative_path(const char *filename, char *out, int max_len);

static int check_debug_ini(void) {
    char path[512];
    get_exe_relative_path("debug.ini", path, sizeof(path));
    FILE *f = fopen(path, "r");
    if (f) { fclose(f); return 1; }
    return 0;
}

/* ---- Debug server state ---- */
static int s_tcp_port = 4370;

/* ROM path exposed by runner for verify mode init */
const char *g_rom_path_for_extras = NULL;

/* ---- Path helper ---- */
static void get_exe_relative_path(const char *filename, char *out, int max_len) {
#ifdef _WIN32
    char exe_path[MAX_PATH];
    GetModuleFileNameA(NULL, exe_path, MAX_PATH);
    char *last_sep = strrchr(exe_path, '\\');
    if (last_sep) *(last_sep + 1) = '\0';
    snprintf(out, max_len, "%s%s", exe_path, filename);
#else
    snprintf(out, max_len, "%s", filename);
#endif
}

/* ---- game_extras.h implementation ---- */

uint32_t game_get_expected_crc32(void) { return 0; /* no CRC check for now */ }

const char *game_get_name(void) { return "Metroid"; }

static void bp_1d_callback(uint16_t addr, uint8_t old_val, uint8_t new_val) {
    (void)addr;
    static int s_log_count = 0;
    if (s_log_count < 50 && old_val != new_val) {
        printf("[BP] $%04X: %02X -> %02X (frame=%llu)\n",
               addr, old_val, new_val, (unsigned long long)g_frame_count);
        s_log_count++;
    }
}

void game_on_init(void) {
    /* Track writes to $1D (game enable flag) */
    g_write_bp_addr = 0x1D;
    g_write_bp_callback = bp_1d_callback;

    /* Load battery-backed SRAM from disk */
    get_exe_relative_path("metroid.srm", s_sram_path, sizeof(s_sram_path));
    sram_load();

    s_debug_enabled = check_debug_ini();

    if (s_debug_enabled) {
        printf("[Debug] debug.ini found -- TCP server and verify mode enabled\n");
        debug_server_init(s_tcp_port);

        if (g_run_mode != RUN_MODE_NATIVE && g_rom_path_for_extras) {
            verify_mode_init(g_rom_path_for_extras);
        }
    } else if (g_run_mode != RUN_MODE_NATIVE) {
        s_debug_enabled = 1;
        debug_server_init(s_tcp_port);
        if (g_rom_path_for_extras)
            verify_mode_init(g_rom_path_for_extras);
    }
}

void game_on_frame(uint64_t frame_count) {
    if (s_debug_enabled) {
        debug_server_poll();
        debug_server_wait_if_paused();
        int ovr = debug_server_get_input_override();
        if (ovr >= 0)
            g_controller1_buttons = (uint8_t)ovr;
    }

    /* Persist SRAM to disk every 5 seconds */
    if ((frame_count % 300) == 0) sram_save();
}

void game_post_nmi(uint64_t frame_count) {
    (void)frame_count;
    if (s_debug_enabled) {
        debug_server_record_frame();
        debug_server_check_watchpoints();
    }
}

int game_handle_arg(const char *key, const char *val) {
    if (strcmp(key, "--tcp-port") == 0 && val) {
        s_tcp_port = atoi(val);
        printf("[Debug] TCP port set to %d\n", s_tcp_port);
        return 1;
    }
    if (strcmp(key, "--verify") == 0) {
        g_run_mode = RUN_MODE_VERIFY;
        printf("[Verify] Dual-execution verify mode enabled\n");
        return 1;
    }
    if (strcmp(key, "--emulated") == 0) {
        g_run_mode = RUN_MODE_EMULATED;
        printf("[Verify] Nestopia emulated mode enabled\n");
        return 1;
    }
    (void)val;
    return 0;
}

const char *game_arg_usage(void) {
    return "  --tcp-port PORT     TCP debug server port (default 4370)\n"
           "  --verify            Enable dual-execution verify mode (Nestopia oracle)\n"
           "  --emulated          Run purely via Nestopia emulator (no recompiled code)\n";
}

void game_run_nmi(void) {
    verify_mode_run_nmi();
}

void game_run_main(void) {
    if (g_run_mode == RUN_MODE_EMULATED) {
#ifdef ENABLE_NESTOPIA_ORACLE
        printf("[Emulated] Nestopia driving main loop\n");

        static uint32_t nestopia_argb[256 * 240];

        extern void runner_present_framebuf(const uint32_t *argb_buf);

        for (;;) {
            {
                SDL_Event ev;
                while (SDL_PollEvent(&ev)) {
                    if (ev.type == SDL_QUIT) exit(0);
                    if (ev.type == SDL_KEYDOWN && ev.key.keysym.sym == SDLK_ESCAPE) exit(0);
                    if (ev.type == SDL_KEYDOWN && ev.key.keysym.sym == SDLK_F5)
                        g_turbo ^= 1;
                }

                const uint8_t *keys = SDL_GetKeyboardState(NULL);
                uint8_t btn = 0;
                if (keys[SDL_SCANCODE_Z])      btn |= 0x80;
                if (keys[SDL_SCANCODE_X])      btn |= 0x40;
                if (keys[SDL_SCANCODE_TAB])    btn |= 0x20;
                if (keys[SDL_SCANCODE_RETURN]) btn |= 0x10;
                if (keys[SDL_SCANCODE_UP])     btn |= 0x08;
                if (keys[SDL_SCANCODE_DOWN])   btn |= 0x04;
                if (keys[SDL_SCANCODE_LEFT])   btn |= 0x02;
                if (keys[SDL_SCANCODE_RIGHT])  btn |= 0x01;
                g_controller1_buttons = btn;
            }

            debug_server_poll();
            debug_server_wait_if_paused();

            nestopia_bridge_run_frame(g_controller1_buttons);
            nestopia_bridge_get_framebuf_argb(nestopia_argb);
            runner_present_framebuf(nestopia_argb);

            nestopia_bridge_get_ram(g_ram);
            nestopia_bridge_get_sram(g_sram);
            g_frame_count++;

            debug_server_record_frame();
            debug_server_check_watchpoints();

            if (!g_turbo) SDL_Delay(16);
        }
#else
        fprintf(stderr, "[Error] Nestopia not compiled in, falling back to native\n");
        func_RESET();
#endif
    } else {
        func_RESET();
    }
}

/* No dispatch override needed for Metroid (no SRAM code execution) */
int game_dispatch_override(uint16_t addr) {
    (void)addr;
    return 0;
}

uint8_t game_ram_read_hook(uint16_t pc, uint16_t addr, uint8_t val) {
    (void)pc; (void)addr; return val;
}

/* ---- Debug server hooks ---- */

void game_fill_frame_record(void *record) {
    NESFrameRecord *r = (NESFrameRecord *)record;
    memset(r->game_data, 0, sizeof(r->game_data));
}

int game_handle_debug_cmd(const char *cmd, int id, const char *json) {
    (void)json;
    if (strcmp(cmd, "echo_cmd") == 0) {
        debug_server_send_fmt("{\"id\":%d,\"echo\":\"%s\"}\n", id, cmd);
        return 1;
    }
    return 0;
}

/* ---- Watchdog globals ---- */
int g_watchdog_triggered = 0;
uint64_t g_watchdog_frame = 0;
char g_watchdog_stack_dump[1024] = "";
