/*
 * watchdog.h — Frame timeout detection
 *
 * Detects infinite loops in recompiled code by checking elapsed time
 * at loop back-edges. If a frame exceeds WATCHDOG_TIMEOUT_SECS,
 * dumps the recomp call stack and longjmps out.
 */
#pragma once

#include <setjmp.h>
#include <stdint.h>

#define WATCHDOG_TIMEOUT_SECS 10.0

/* Jump buffer for watchdog abort. Set before calling game code. */
extern jmp_buf g_watchdog_jmp;

/* Call at the start of each NMI frame. */
void watchdog_frame_start(void);

/* Call at loop back-edges in generated code.
 * If timeout exceeded, dumps stack and longjmps. */
void watchdog_check(void);

/* Bounded wall-time diagnostics for host work. Buffer spans >=100 ms (64 max)
 * and write metroid_stalls.jsonl at normal exit, with no gameplay file I/O.
 * METROID_STALL_TRACE=1 records spans >=8 ms (2048 max) and frame gaps >=25 ms.
 * phase must be a static literal. Debug pauses are excluded from render spans. */
uint64_t watchdog_span_begin(void);
void watchdog_span_end(const char *phase, uint64_t start);
void watchdog_render_start(void);
void watchdog_render_resume(void);
void watchdog_render_end(void);
