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
#include "watchdog.h"
#ifdef ENABLE_NESTOPIA_ORACLE
#include "nestopia_bridge.h"
#endif
#include <SDL.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#ifdef _WIN32
#  define WIN32_LEAN_AND_MEAN
#  include <windows.h>
#endif

/* ---- Debug mode ---- */
static int s_debug_enabled = 0;
static void get_exe_relative_path(const char *filename, char *out, int max_len);

static int s_tcp_port = 5370;
static int s_tcp_port_from_cli = 0;

static int check_debug_ini(void) {
    char path[512];
    get_exe_relative_path("debug.ini", path, sizeof(path));
    FILE *f = fopen(path, "r");
    if (!f) return 0;
    /* Parse key=value lines */
    char line[256];
    while (fgets(line, sizeof(line), f)) {
        char *eq = strchr(line, '=');
        if (!eq) continue;
        *eq = '\0';
        char *key = line, *val = eq + 1;
        /* Trim whitespace/newline from val */
        char *end = val + strlen(val) - 1;
        while (end > val && (*end == '\n' || *end == '\r' || *end == ' ')) *end-- = '\0';
        if (strcmp(key, "port") == 0 && !s_tcp_port_from_cli) {
            s_tcp_port = atoi(val);
        }
    }
    fclose(f);
    return 1;
}

/* ---- Debug server state ---- */

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

/* ============================================================================
 * Synthetic SRAM: password save system  (see ENHANCEMENTS.md for the full RE).
 *
 * Metroid has no battery — progress is a 24-char password. We give it the same
 * UX as a battery game: every ~15 s of real gameplay we run the game's OWN
 * password encoder (func_8C7A_b0, bank 0) out-of-band on the current progress,
 * read back the 24 codes it writes to $699A, and persist the resulting password
 * to a sidecar file (metroid.srm) + a timestamped history (metroid_password_log
 * .txt). On the entry screen the saved password is auto-prefilled.
 *
 * Calling the recompiled encoder out-of-band is made side-effect-free by:
 *   - bracketing in runtime_begin/end_post_nmi() (neutralises maybe_trigger_vblank
 *     -> no NMI re-entrancy), and
 *   - snapshotting/restoring everything it touches: zero page ($0000-$00FF) and
 *     the $6886-$69B1 WRAM scratch (payload/codes/list). The encoder also bumps
 *     the RNG ($002E/$002F via func_c000) — covered by the zero-page snapshot.
 * ==========================================================================*/

extern uint8_t g_ram[];     /* 2KB work RAM ($0000-$07FF)  */
extern uint8_t g_sram[];    /* 8KB WRAM     ($6000-$7FFF)  */
void func_8C7A_b0(void);    /* bank-0 password encoder: live progress -> 24 codes @ $699A */

#define MET_PW_LEN        24
#define MET_CODES_OFF     0x099A          /* $699A - $6000 (codes buffer in g_sram) */
#define MET_SCRATCH_LO    0x0886          /* $6886 - $6000 */
#define MET_SCRATCH_HI    0x09B2          /* $69B1 + 1 - $6000 (exclusive) */

/* Metroid password char code (0-63) -> ASCII glyph.  Linear alphabet index:
 * 0-9, A-Z, a-z, then '?' (62) and '-' (63). */
static char metroid_index_to_char(int idx) {
    idx &= 0x3F;
    if (idx < 10) return (char)('0' + idx);
    if (idx < 36) return (char)('A' + (idx - 10));
    if (idx < 62) return (char)('a' + (idx - 36));
    return (idx == 62) ? '?' : '-';
}

/* Inverse: ASCII glyph -> code (0-63), or -1 if not a valid password char. */
static int metroid_char_to_index(char ch) {
    if (ch >= '0' && ch <= '9') return ch - '0';
    if (ch >= 'A' && ch <= 'Z') return 10 + (ch - 'A');
    if (ch >= 'a' && ch <= 'z') return 36 + (ch - 'a');
    if (ch == '?') return 62;
    if (ch == '-') return 63;
    return -1;
}

/* ---- Password state ---- */
static char s_loaded_password[MET_PW_LEN + 1];  /* current saved password (prefill source) */
static char s_saved_password[MET_PW_LEN + 1];   /* last password written to disk (dirty check) */
static const char *s_password = NULL;           /* active prefill string (loaded or --password) */
static int  s_password_from_cli = 0;            /* 1 if --password given (dev override) */
static int  s_capture_enabled = 1;              /* save-anywhere auto-capture on/off */
static int  s_pw_session_logged = 0;            /* lazy session header in the log */

/* Generate the password for the CURRENT progress by running the game's own
 * encoder out-of-band, then reading the 24 codes it writes to $699A. Writes a
 * NUL-terminated ASCII password to `out`. Returns its length (0 on failure).
 * Leaves live game state untouched (snapshot/restore). */
static int metroid_generate_password(char *out, int out_sz) {
    if (out_sz < MET_PW_LEN + 1) return 0;

    /* The encoder is NOT stack-balanced when called out-of-band: its internal
     * RTS pops a return address we never pushed (g_cpu.S drifts +2) and its deep
     * call chain dirties the live 6502 stack page. Left unrestored this leaks
     * stack corruption every capture -> garbled state -> lockup. So snapshot and
     * restore ALL volatile state the call can touch: full work RAM (zero page +
     * stack $0100-$01FF + the rest), the CPU registers (esp. S), the bail flag,
     * the recomp shadow-stack depth, and the $6886-$69B1 WRAM scratch. This makes
     * the out-of-band call fully side-effect-free. */
    uint8_t      save_ram[0x800];
    uint8_t      save_scratch[MET_SCRATCH_HI - MET_SCRATCH_LO];
    CPU6502State save_cpu         = g_cpu;
    int          save_bail        = g_bail_active;
    int          save_rstack_top  = g_recomp_stack_top;
    memcpy(save_ram, g_ram, sizeof(save_ram));
    memcpy(save_scratch, &g_sram[MET_SCRATCH_LO], sizeof(save_scratch));

    /* Force a deterministic obfuscation shift so identical progress always yields
     * the identical password (the encoder picks the shift from RNG $002E via
     * func_c000: $2E=0 -> +0x19 -> shift 9). Restored with work RAM below; the
     * live game RNG is untouched. Any shift 1-15 is valid. */
    g_ram[0x002E] = 0;

    runtime_begin_post_nmi();   /* neutralise maybe_trigger_vblank during the call */
    func_8C7A_b0();             /* serialise progress -> obfuscate -> checksum -> pack -> $699A */
    runtime_end_post_nmi();

    for (int i = 0; i < MET_PW_LEN; i++)
        out[i] = metroid_index_to_char(g_sram[MET_CODES_OFF + i]);
    out[MET_PW_LEN] = '\0';

    memcpy(g_ram, save_ram, sizeof(save_ram));
    memcpy(&g_sram[MET_SCRATCH_LO], save_scratch, sizeof(save_scratch));
    g_cpu              = save_cpu;
    g_bail_active      = save_bail;
    g_recomp_stack_top = save_rstack_top;
    return MET_PW_LEN;
}

/* ---- metroid.srm sidecar (the launcher reads/writes this same file) ---- */

static void password_save_path(char *out, int max_len) {
    get_exe_relative_path("metroid.srm", out, max_len);
}

static void password_save_write(const char *pw) {
    char path[512];
    password_save_path(path, sizeof(path));
    FILE *f = fopen(path, "w");
    if (!f) return;
    fprintf(f, "%s\n", pw);
    fclose(f);
    snprintf(s_saved_password, sizeof(s_saved_password), "%s", pw);
    printf("[Password] Saved \"%s\"\n", pw);
}

/* Load the persisted password (fills s_loaded_password). Returns 1 on success. */
static int password_save_read(void) {
    char path[512];
    password_save_path(path, sizeof(path));
    FILE *f = fopen(path, "r");
    if (!f) return 0;
    char line[64];
    int ok = fgets(line, sizeof(line), f) != NULL;
    fclose(f);
    if (!ok) return 0;
    int len = (int)strlen(line);
    while (len > 0 && (line[len-1] == '\n' || line[len-1] == '\r')) line[--len] = '\0';
    if (len == 0 || len > MET_PW_LEN) return 0;
    for (int i = 0; i < len; i++) if (metroid_char_to_index(line[i]) < 0) return 0;
    memcpy(s_loaded_password, line, len + 1);
    snprintf(s_saved_password, sizeof(s_saved_password), "%s", line);
    return 1;
}

/* Append every distinct captured password to a timestamped history next to the
 * exe, so the player can "go back in time" by re-entering an older password. */
static void password_log_append(const char *pw) {
    char path[512];
    get_exe_relative_path("metroid_password_log.txt", path, sizeof(path));
    FILE *f = fopen(path, "a");
    if (!f) return;
    time_t now = time(NULL);
    struct tm *lt = localtime(&now);
    char ts[32] = "????-??-?? ??:??:??";
    if (lt) strftime(ts, sizeof(ts), "%Y-%m-%d %H:%M:%S", lt);
    if (!s_pw_session_logged) {
        fprintf(f, "# --- session %s ---\n", ts);
        s_pw_session_logged = 1;
    }
    fprintf(f, "%s  %s\n", ts, pw);
    fclose(f);
}

/* A blank password (all '0' codes) means no progress yet — don't persist it. */
static int password_is_blank(const char *pw) {
    for (int i = 0; pw[i]; i++) if (pw[i] != '0') return 0;
    return 1;
}

/* Per-frame save-anywhere capture (called from game_post_nmi). Gated to real
 * gameplay: $1D is 0 in active play, 1 on the title/menu screens (so we never
 * capture the empty title-screen state). Skips the blank/no-progress password
 * and persists only on change. */
static void password_capture_tick(uint64_t frame_count) {
    if (!s_capture_enabled || s_password_from_cli) return;
    if ((frame_count % 300) != 0) return;        /* ~every 5 s */
    if (g_ram[0x1D] != 0) return;                /* 0 = in gameplay; 1 = title/menu */

    char pw[MET_PW_LEN + 1];
    if (metroid_generate_password(pw, sizeof(pw)) <= 0) return;
    if (password_is_blank(pw)) return;               /* no progress yet */
    if (strcmp(pw, s_saved_password) == 0) return;   /* unchanged */

    password_save_write(pw);
    password_log_append(pw);
    /* Keep it ready for the prefill path on the next password screen. */
    snprintf(s_loaded_password, sizeof(s_loaded_password), "%s", pw);
    s_password = s_loaded_password;
}

/* ---- Auto-prefill the password entry screen (Faxanadu-style) ----
 * On the "PASS WORD PLEASE" screen we "type" the saved password for the player
 * by driving the game's OWN entry path: set the grid cursor ($0321 row,$0322 col)
 * to each glyph (code = row*13+col) and press A for one frame. The game enters and
 * RENDERS each char exactly as if typed, so the password appears on screen; the
 * player just presses START to confirm (or backspaces to edit). Reuses the proven
 * entry logic — no buffer pokes, no rendering to replicate.
 *
 * Entry screen is identified by $1D==1 (menu/entry, not gameplay) && $1F==0x18. */
extern uint8_t g_controller1_buttons;

static int s_prefill_idx   = -1;   /* next char to type; -1 = idle/done */
static int s_prefill_press = 0;    /* 0 = press A this frame, 1 = release */
static int s_prefill_armed = 0;    /* armed once per entry-screen visit */

static void password_prefill_tick(void) {
    int on_entry = (g_ram[0x1D] == 1 && g_ram[0x1F] == 0x18);
    if (!on_entry) { s_prefill_armed = 0; s_prefill_idx = -1; return; }
    if (!s_password || !s_password[0]) return;

    /* Arm once on arrival, only if the player hasn't started typing ($0320==0). */
    if (!s_prefill_armed) {
        s_prefill_armed = 1;
        s_prefill_idx = (g_ram[0x0320] == 0) ? 0 : -1;
        s_prefill_press = 0;
    }
    int len = (int)strlen(s_password);
    if (s_prefill_idx < 0 || s_prefill_idx >= len || s_prefill_idx >= MET_PW_LEN) {
        s_prefill_idx = -1;
        return;
    }

    /* Drive the game's own entry, synced to the display position $0320 so a
     * dropped/early press self-corrects (the first frames on the screen may not
     * accept input yet). Press A only when $0320 matches our index; advance only
     * once the entry actually registered ($0320 moved off our index). */
    if (s_prefill_press == 0) {
        if (g_ram[0x0320] != (uint8_t)s_prefill_idx) return;   /* wait for the buffer to catch up */
        int code = metroid_char_to_index(s_password[s_prefill_idx]);
        if (code < 0) { s_prefill_idx = -1; return; }
        g_ram[0x0321] = (uint8_t)(code / 13);   /* cursor row */
        g_ram[0x0322] = (uint8_t)(code % 13);   /* cursor col */
        g_controller1_buttons = 0x80;           /* press A (edge) */
        s_prefill_press = 1;
    } else {
        g_controller1_buttons = 0x00;           /* release so the next A is a fresh edge */
        s_prefill_press = 0;
        if (g_ram[0x0320] != (uint8_t)s_prefill_idx)   /* entry registered */
            s_prefill_idx++;
    }
}

/* ---- game_extras.h implementation ---- */

/* ---- Scroll corruption fix ----
 * During the title-to-gameplay init, the column loader (EA2B) calls
 * the scroll stepper (E6A7) which does DEC $FD when $FD=0, wrapping
 * it to 0xFF.  On real NES this doesn't happen because NMI is disabled
 * for 3 frames during the transition, preventing E6A7 from running.
 * On native recomp, the NMI disable/re-enable cycle completes within
 * one frame, so E6A7 runs and corrupts $FD.
 *
 * Fix: block the 0→0xFF write to $FD while the init is in progress
 * ($1E < 2 = transition not complete). */
#if 0  /* Legacy write_bp callback API removed at nesrecomp commit 69ecd30
        * (refactor(rdb): retire legacy write_bp + follower + watch_s).
        * The Tier 2.5 replacement is rdb_watch_add. Migrating the scroll
        * guard requires reimplementing the per-write callback through
        * the RDB hook — not done yet. Left here as a porting reference. */
static void scroll_guard_callback(uint16_t addr, uint8_t old_val, uint8_t new_val) {
    (void)addr;
    g_write_bp_block = 0;  /* default: allow */
    /* Block $FD wrapping from 0 to 0xFF during init transition */
    if (old_val == 0x00 && new_val == 0xFF && g_ram[0x1E] < 2) {
        g_write_bp_block = 1;  /* block this write */
    }
}
#endif

uint32_t game_get_expected_crc32(void) { return 0; /* no CRC check for now */ }

const char *game_get_name(void) { return "Metroid"; }

void game_on_init(void) {
#if 0  /* Scroll corruption guard disabled: depends on legacy write_bp API.
        * See note above scroll_guard_callback. */
    g_write_bp_addr = 0xFD;
    g_write_bp_match_val = 0xFF;  /* only trigger when writing 0xFF */
    g_write_bp_callback = scroll_guard_callback;
#endif

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

        /* Auto-register followers for scroll bug investigation — disabled:
         * legacy debug_server_add_follower API removed (see scroll_guard
         * note above). Use rdb_watch_add via TCP when needed. */
#if 0
        debug_server_add_follower(0xFF, -1);
        debug_server_add_follower(0xFD, -1);
        debug_server_add_follower(0x50, -1);
        debug_server_add_follower(0x5A, -1);
        debug_server_add_follower(0x49, -1);
        printf("[Debug] Auto-registered 5 followers for scroll investigation\n");
#endif

        if (g_run_mode != RUN_MODE_NATIVE && g_rom_path_for_extras) {
            verify_mode_init(g_rom_path_for_extras);
        }
    } else if (g_run_mode != RUN_MODE_NATIVE) {
        s_debug_enabled = 1;
        debug_server_init(s_tcp_port);
        if (g_rom_path_for_extras)
            verify_mode_init(g_rom_path_for_extras);
    }

    /* Auto-prefill source (unless --password overrides): load our persisted
     * password (metroid.srm, auto-captured during play). */
    if (!s_password_from_cli && password_save_read()) {
        s_password = s_loaded_password;
        printf("[Password] Loaded saved password \"%s\" (auto-prefill)\n",
               s_loaded_password);
    }
}

void game_on_frame(uint64_t frame_count) {
#ifdef WATCHDOG_ENABLED
    watchdog_frame_start();
#endif
    if (s_debug_enabled) {
        debug_server_poll();
        debug_server_wait_if_paused();
        int ovr = debug_server_get_input_override();
        if (ovr >= 0)
            g_controller1_buttons = (uint8_t)ovr;
    }

    /* Auto-prefill the saved password on the entry screen (after any debug
     * override, so it drives the entry screen). */
    password_prefill_tick();
}

void game_post_nmi(uint64_t frame_count) {
    /* Save-anywhere: capture the current-progress password into metroid.srm. */
    password_capture_tick(frame_count);

    if (s_debug_enabled) {
        debug_server_record_frame();
    }
}

int game_handle_arg(const char *key, const char *val) {
    if (strcmp(key, "--tcp-port") == 0 && val) {
        s_tcp_port = atoi(val);
        s_tcp_port_from_cli = 1;
        return 1;
    }
    if (strcmp(key, "--password") == 0 && val) {
        s_password = val;
        s_password_from_cli = 1;
        printf("[Password] Will auto-fill password: \"%s\"\n", val);
        return 1;
    }
    if (strcmp(key, "--no-password-capture") == 0) {
        s_capture_enabled = 0;
        printf("[Password] Save-anywhere auto-capture disabled\n");
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
    return "  --password STRING       Auto-fill this password on the entry screen (dev override)\n"
           "  --no-password-capture   Disable save-anywhere password auto-capture\n"
           "  --verify            Enable dual-execution verify mode (Nestopia oracle)\n"
           "  --emulated          Run purely via Nestopia emulator (no recompiled code)\n"
           "  TCP port set via debug.ini (port=XXXX) in the exe directory\n";
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

            /* Copy Nestopia CPU state to runner globals for ring buffer */
            {
                NestopiaCpuRegs cpu_regs;
                nestopia_bridge_get_cpu_regs(&cpu_regs);
                g_cpu.A = cpu_regs.a;
                g_cpu.X = cpu_regs.x;
                g_cpu.Y = cpu_regs.y;
                g_cpu.S = cpu_regs.sp;
                /* Unpack P flags */
                g_cpu.C = (cpu_regs.p >> 0) & 1;
                g_cpu.Z = (cpu_regs.p >> 1) & 1;
                g_cpu.I = (cpu_regs.p >> 2) & 1;
                g_cpu.D = (cpu_regs.p >> 3) & 1;
                g_cpu.V = (cpu_regs.p >> 6) & 1;
                g_cpu.N = (cpu_regs.p >> 7) & 1;
            }

            /* Copy Nestopia PPU state to runner globals for ring buffer */
            {
                NestopiaPpuRegs ppu_regs;
                nestopia_bridge_get_ppu_regs(&ppu_regs);
                g_ppuctrl    = ppu_regs.ctrl;
                g_ppumask    = ppu_regs.mask;
                g_ppuscroll_x = ppu_regs.scroll_x;
                g_ppuscroll_y = ppu_regs.scroll_y;
            }

            /* Copy Nestopia VRAM to runner globals for ring buffer oracle comparison */
            nestopia_bridge_get_chr_ram(g_chr_ram, 0x2000);
            nestopia_bridge_get_nametable(g_ppu_nt, 0x1000);
            nestopia_bridge_get_palette(g_ppu_pal);
            nestopia_bridge_get_oam(g_ppu_oam);

            g_frame_count++;

            debug_server_record_frame();

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

/* Dispatch override: intercept specific calls to track S balance.
 * call_by_address calls this when no match is found in the dispatch table.
 * We can also use it to PRE-HOOK known addresses by declaring externs. */
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

void game_post_render(uint32_t *framebuf) { (void)framebuf; }

int game_handle_debug_cmd(const char *cmd, int id, const char *json) {
    (void)json;
    if (strcmp(cmd, "echo_cmd") == 0) {
        debug_server_send_fmt("{\"id\":%d,\"echo\":\"%s\"}\n", id, cmd);
        return 1;
    }
    /* Diagnostic: run the game's encoder out-of-band on the current progress and
     * return the password (mirrors what save-anywhere persists). Ignores the gate. */
    if (strcmp(cmd, "pw_now") == 0) {
        char pw[MET_PW_LEN + 1];
        int n = metroid_generate_password(pw, sizeof(pw));
        debug_server_send_fmt(
            "{\"id\":%d,\"ok\":true,\"len\":%d,\"d1d\":%d,\"password\":\"%s\"}",
            id, n, g_ram[0x1D], pw);
        return 1;
    }
    return 0;
}

/* ---- Watchdog globals ---- */
int g_watchdog_triggered = 0;
uint64_t g_watchdog_frame = 0;
char g_watchdog_stack_dump[1024] = "";
