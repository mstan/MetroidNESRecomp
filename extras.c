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

void game_on_init(void) {
    /* NOTE: Metroid DOES have volatile WRAM at $6000-$7FFF (MMC1 standard).
     * Both native and emulated have the same level data at $71C3 eventually.
     * The scroll bug is from NMI TIMING: native's scroll check runs before
     * the level loader has written data, reading 0x00 (cleared SRAM) instead
     * of the expected value.  Keep SRAM enabled. */

    /* Tag screenshots by run mode so native/emulated don't overwrite each other */
    if (g_run_mode == RUN_MODE_EMULATED)
        script_set_screenshot_prefix("emu_");
    else if (g_run_mode == RUN_MODE_VERIFY)
        script_set_screenshot_prefix("verify_");
    else
        script_set_screenshot_prefix("native_");

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

            /* Apply input script (deterministic replay for comparison) */
            script_tick(g_frame_count, g_ram);
            {
                int script_btn = script_get_buttons();
                if (script_btn >= 0) g_controller1_buttons = (uint8_t)script_btn;
            }
            {
                int ecode = script_check_exit();
                if (ecode >= 0) exit(ecode);
            }

            debug_server_poll();
            debug_server_wait_if_paused();

            nestopia_bridge_run_frame(g_controller1_buttons);
            nestopia_bridge_get_framebuf_argb(nestopia_argb);
            runner_present_framebuf(nestopia_argb);

            /* Script-triggered screenshot (emulated path) */
            {
                char shot_path[256];
                if (script_wants_screenshot(shot_path, sizeof(shot_path))) {
                    extern void runner_save_argb_png(const char *path,
                                                     const uint32_t *argb,
                                                     int w, int h);
                    runner_save_argb_png(shot_path, nestopia_argb, 256, 240);
                    printf("[Shot] %s\n", shot_path);
                }
            }

            nestopia_bridge_get_ram(g_ram);
            nestopia_bridge_get_sram(g_sram);
            /* Copy volatile WRAM via CPU bus — RETRO_MEMORY_SAVE_RAM
             * doesn't include non-battery WRAM on MMC1 */
            for (int _i = 0; _i < 0x2000; _i++)
                g_sram[_i] = nestopia_bridge_cpu_read(0x6000 + _i);

            /* Copy Nestopia PPU state to runner globals for ring buffer */
            {
                NestopiaPpuRegs ppu_regs;
                nestopia_bridge_get_ppu_regs(&ppu_regs);
                g_ppuctrl    = ppu_regs.ctrl;
                g_ppumask    = ppu_regs.mask;
                g_ppuscroll_x = ppu_regs.scroll_x;
                g_ppuscroll_y = ppu_regs.scroll_y;
            }

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
    /* Capture key Metroid state into the 16-byte game_data field:
     * [0] $1D  GameEnable (1=gameplay, 0=init/transition)
     * [1] $1E  GameMode (ChooseRoutine index when $1D=0)
     * [2] $1F  MainRoutine (ChooseRoutine index when $1D=1)
     * [3] $24  BankInitRequest (non-zero triggers BankInit)
     * [4] $56  GameEngineSubroutine (0=skip, >=5=run object processing)
     * [5] $2C  DelayTimer (for $1E=9 delayed transitions)
     * [6] $0300 lo  FrameProgressCounter
     * [7] $0680     Slot0 dispatch flag
     * [8] $0685     Slot5 dispatch flag
     * [9] $1A  NMI flag
     * [10] OAM[0] Y (sprite 0 — $F0=hidden)
     * [11] OAM[4] Y (sprite 1)
     * [12] $C8  AnimationFlag
     * [13] $0108  TransitionFlag lo
     * [14] $0109  TransitionFlag hi
     * [15] bank   current PRG bank */
    r->game_data[0]  = g_ram[0x1D];
    r->game_data[1]  = g_ram[0x1E];
    r->game_data[2]  = g_ram[0x1F];
    r->game_data[3]  = g_ram[0x24];
    r->game_data[4]  = g_ram[0x56];
    r->game_data[5]  = g_ram[0x2C];
    r->game_data[6]  = g_ram[0x300 & 0x7FF];
    r->game_data[7]  = g_ram[0x680 & 0x7FF];
    r->game_data[8]  = g_ram[0x685 & 0x7FF];
    r->game_data[9]  = g_ram[0x1A];
    r->game_data[10] = g_ppu_oam[0];
    r->game_data[11] = g_ppu_oam[4];
    r->game_data[12] = g_ram[0xC8];
    r->game_data[13] = g_ram[0x108 & 0x7FF];
    r->game_data[14] = g_ram[0x109 & 0x7FF];
    r->game_data[15] = (uint8_t)g_current_bank;
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
