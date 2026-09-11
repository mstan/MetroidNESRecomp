/* Test the real diagnostics with deterministic elapsed-time fixtures.
 * Run in a fresh directory; JSON must appear only after process exit. */
#define SDL_MAIN_HANDLED
#include <SDL.h>
#include "nes_runtime.h"
#include "interp.h"
#include "watchdog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

CPU6502State g_cpu;
uint8_t g_ram[0x800];
uint64_t g_frame_count = 123, g_nes_cycles = 4000000;
int g_current_bank = 1;
char g_exe_dir[260];
int g_watchdog_triggered;
uint64_t g_watchdog_frame;
char g_watchdog_stack_dump[1024];
void maybe_fire_pending_vblank(void) {}
int runtime_get_vblank_depth(void) { return 1; }
int runtime_get_savestate_resume(uint16_t *pc, int *charged) {
    *pc = 0xc0cc; *charged = 1; return 1;
}
void nes_interp_get_stats(NesInterpStats *out) {
    memset(out, 0, sizeof *out); out->instrs_total = 3000000;
}
int main(void) {
    int trace = getenv("METROID_STALL_TRACE") != NULL;
    watchdog_span_end("fast_fixture", watchdog_span_begin());
    for (int i = 0; i < (trace ? 2050 : 70); i++)
        watchdog_span_end("slow_fixture", watchdog_span_begin() -
                         SDL_GetPerformanceFrequency() / (trace ? 50 : 5));
    FILE *f = fopen("metroid_stalls.jsonl", "r");
    if (f) { fclose(f); return 1; }
    if (g_frame_count != 123 || g_nes_cycles != 4000000 || g_cpu.S != 0) return 2;
    puts("PASS: records buffered without gameplay file I/O or guest mutation; check JSON after exit");
    return 0;
}
