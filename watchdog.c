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
#include <stdlib.h>
#include <string.h>
#include <time.h>

#ifdef RECOMP_STACK_TRACKING
#include "recomp_stack.h"
#endif

jmp_buf g_watchdog_jmp;
static clock_t s_frame_start = 0;

/* Keep timing evidence in memory: opening/appending a diagnostic file during a
 * hitch can itself stall the game thread. Flush only at normal process exit. */
typedef struct {
    const char *phase;
    double ms;
    uint64_t frame, cycles, interp_total, interp_watchdogs;
    uint16_t pc;
    int valid, bank, depth;
    uint8_t map_x, map_y, routine, nmi_status, samus_x, samus_y;
} StallRecord;
enum { STALL_RECORD_CAP = 2048 };
static StallRecord s_stalls[STALL_RECORD_CAP];
static unsigned s_stall_count;
static int s_stall_initialized, s_stall_trace;
static uint64_t s_post_render, s_callback_start, s_previous_frame;

static void watchdog_flush_stalls(void) {
    if (!s_stall_count) return;
    char path[1024];
    snprintf(path, sizeof path, "%smetroid_stalls.jsonl", g_exe_dir);
    FILE *f = fopen(path, "a");
    if (!f) return;
    for (unsigned i = 0; i < s_stall_count; i++) {
        const StallRecord *r = &s_stalls[i];
        fprintf(f, "{\"event\":\"slow_span\",\"phase\":\"%s\",\"ms\":%.3f,"
                "\"frame\":%llu,\"cycles\":%llu,\"bank\":%d,"
                "\"resume_pc\":%u,\"resume_valid\":%d,\"vblank_depth\":%d,"
                "\"map_x\":%u,\"map_y\":%u,\"routine\":%u,\"nmi_status\":%u,"
                "\"samus_x\":%u,\"samus_y\":%u,\"interp_total\":%llu,"
                "\"interp_watchdogs\":%llu,\"record\":%u}\n",
                r->phase, r->ms, (unsigned long long)r->frame,
                (unsigned long long)r->cycles, r->bank, r->pc, r->valid, r->depth,
                r->map_x, r->map_y, r->routine, r->nmi_status, r->samus_x, r->samus_y,
                (unsigned long long)r->interp_total,
                (unsigned long long)r->interp_watchdogs, i + 1);
    }
    fclose(f);
}

static void watchdog_init_stalls(void) {
    if (s_stall_initialized) return;
    s_stall_initialized = 1;
    const char *trace = getenv("METROID_STALL_TRACE");
    s_stall_trace = trace && !strcmp(trace, "1");
    atexit(watchdog_flush_stalls);
}

uint64_t watchdog_span_begin(void) {
    return SDL_GetPerformanceCounter();
}

void watchdog_span_end(const char *phase, uint64_t start) {
    watchdog_init_stalls();
    if (s_stall_count >= (s_stall_trace ? STALL_RECORD_CAP : 64)) return;
    uint64_t end = SDL_GetPerformanceCounter(), freq = SDL_GetPerformanceFrequency();
    double threshold_ms = s_stall_trace ? 8.0 : 100.0;
    /* This span includes intentional NTSC pacing; only record late frames. */
    if (!strcmp(phase, "between_render_and_frame")) threshold_ms = 25.0;
    if (!freq || end < start) return;
    double ms = 1000.0 * (double)(end-start)/(double)freq;
    if (ms < threshold_ms) return;
    StallRecord *r = &s_stalls[s_stall_count++];
    r->phase = phase; r->ms = ms; r->frame = g_frame_count; r->cycles = g_nes_cycles;
    int tick = 0;
    r->valid = runtime_get_savestate_resume(&r->pc, &tick);
    r->bank = g_current_bank; r->depth = runtime_get_vblank_depth();
    r->map_x = g_ram[MET_MapPosX]; r->map_y = g_ram[MET_MapPosY];
    r->routine = g_ram[MET_MainRoutine]; r->nmi_status = g_ram[MET_NMIStatus];
    r->samus_x = g_ram[0x30e]; r->samus_y = g_ram[0x30d];
    NesInterpStats stats;
    nes_interp_get_stats(&stats);
    r->interp_total = stats.instrs_total; r->interp_watchdogs = stats.watchdog_trips;
}

void watchdog_render_start(void) {
    watchdog_init_stalls();
    if (!s_stall_trace) return;
    /* A state load/frame jump or menu interval is not steady gameplay. */
    if (g_ram[MET_GameMode] == 0 && g_ram[MET_MainRoutine] == 3 &&
        s_post_render && g_frame_count == s_previous_frame + 1)
        watchdog_span_end("between_render_and_frame", s_post_render);
    s_post_render = 0;
    s_callback_start = watchdog_span_begin();
}

void watchdog_render_end(void) {
    if (!s_stall_trace) return;
    if (s_callback_start) watchdog_span_end("nmi_through_render", s_callback_start);
    s_callback_start = 0;
    s_post_render = watchdog_span_begin();
    s_previous_frame = g_frame_count;
}

void watchdog_render_resume(void) {
    if (s_stall_trace) s_callback_start = watchdog_span_begin();
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
