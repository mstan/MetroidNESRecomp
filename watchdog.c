/*
 * watchdog.c — Frame timeout detection
 *
 * When a frame exceeds WATCHDOG_TIMEOUT_SECS, logs the call stack and
 * forces a VBlank trigger to break out of spin-wait loops. Does NOT
 * longjmp (unsafe from deeply nested generated code).
 */
#include "watchdog.h"
#include "nes_runtime.h"
#include "metroid_ram.h"
#include "interp.h"
#include <SDL.h>

#include <stdio.h>
#include <string.h>
#include <time.h>

#ifdef RECOMP_STACK_TRACKING
#include "recomp_stack.h"
#endif

jmp_buf g_watchdog_jmp;
static clock_t s_frame_start = 0;

uint64_t watchdog_span_begin(void) {
    return SDL_GetPerformanceCounter();
}

void watchdog_span_end(const char *phase, uint64_t start) {
    static unsigned count;
    if (count >= 64) return;
    uint64_t end = SDL_GetPerformanceCounter(), freq = SDL_GetPerformanceFrequency();
    if (!freq || end < start || end - start < freq / 10) return;
    count++;
    char path[1024];
    snprintf(path, sizeof path, "%smetroid_stalls.jsonl", g_exe_dir);
    FILE *f = fopen(path, "a");
    if (!f) return;
    uint16_t pc = 0;
    int tick = 0, valid = runtime_get_savestate_resume(&pc, &tick);
    NesInterpStats stats;
    nes_interp_get_stats(&stats);
    /* phase is an internal literal, not user text. No guest memory is changed. */
    fprintf(f, "{\"event\":\"slow_span\",\"time\":%lld,\"phase\":\"%s\","
            "\"ms\":%.3f,\"frame\":%llu,\"cycles\":%llu,\"bank\":%d,"
            "\"resume_pc\":%u,\"resume_valid\":%d,\"vblank_depth\":%d,"
            "\"map_x\":%u,\"map_y\":%u,\"routine\":%u,\"nmi_status\":%u,"
            "\"samus_x\":%u,\"samus_y\":%u,\"interp_total\":%llu,"
            "\"interp_watchdogs\":%llu,\"record\":%u}\n",
            (long long)time(NULL), phase, 1000.0 * (double)(end-start)/(double)freq,
            (unsigned long long)g_frame_count, (unsigned long long)g_nes_cycles,
            g_current_bank, pc, valid, runtime_get_vblank_depth(),
            g_ram[MET_MapPosX], g_ram[MET_MapPosY], g_ram[MET_MainRoutine],
            g_ram[MET_NMIStatus], g_ram[0x30e], g_ram[0x30d],
            (unsigned long long)stats.instrs_total,
            (unsigned long long)stats.watchdog_trips, count);
    fclose(f);
}

void watchdog_frame_start(void) {
    s_frame_start = clock();
}

void watchdog_check(void) {
    /* Fire any pending VBlank at backward branch points (loop boundaries).
     * This is the ONLY place NMI fires — at safe points where the game's
     * state is consistent (correct bank mapped, ZP pointers set up).
     * maybe_trigger_vblank() only counts cycles and sets a pending flag;
     * the actual NMI handler runs here. */
    maybe_fire_pending_vblank();

    clock_t now = clock();
    double elapsed = (double)(now - s_frame_start) / CLOCKS_PER_SEC;

    if (elapsed > WATCHDOG_TIMEOUT_SECS) {
        /* Only report once per frame to avoid log flooding */
        static uint64_t s_last_reported_frame = (uint64_t)-1;
        if (g_frame_count == s_last_reported_frame) return;
        s_last_reported_frame = g_frame_count;

        fprintf(stderr, "\n=== WATCHDOG: Frame %llu exceeded %.1fs ===\n",
                (unsigned long long)g_frame_count, elapsed);

        /* Set globals for TCP watchdog_status query */
        extern int g_watchdog_triggered;
        extern uint64_t g_watchdog_frame;
        extern char g_watchdog_stack_dump[1024];
        g_watchdog_triggered = 1;
        g_watchdog_frame = g_frame_count;

#ifdef RECOMP_STACK_TRACKING
        fprintf(stderr, "Call stack (most recent first):\n");
        {
            int pos = 0;
            for (int i = g_recomp_stack_top - 1; i >= 0 && pos < 1000; i--) {
                const char *name = g_recomp_stack[i] ? g_recomp_stack[i] : "(null)";
                fprintf(stderr, "  [%d] %s\n", i, name);
                pos += snprintf(g_watchdog_stack_dump + pos,
                                sizeof(g_watchdog_stack_dump) - pos,
                                "[%d] %s\n", i, name);
            }
        }
#else
        fprintf(stderr, "(no stack tracking compiled in)\n");
        snprintf(g_watchdog_stack_dump, sizeof(g_watchdog_stack_dump),
                 "(no stack tracking compiled in)");
#endif
        fprintf(stderr, "CPU: A=%02X X=%02X Y=%02X S=%02X bank=%d\n",
                g_cpu.A, g_cpu.X, g_cpu.Y, g_cpu.S, g_current_bank);
        fprintf(stderr, "=== Continuing (forced VBlank trigger) ===\n\n");

        /* Reset the timer so we don't spam */
        s_frame_start = clock();
    }
}
