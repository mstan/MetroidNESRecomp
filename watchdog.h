/*
 * watchdog.h — Frame timeout detection
 *
 * Detects infinite loops in recompiled code by checking elapsed time
 * at loop back-edges. If a frame exceeds WATCHDOG_TIMEOUT_SECS,
 * dumps the recomp call stack and longjmps out.
 */
#pragma once

#include <setjmp.h>

#define WATCHDOG_TIMEOUT_SECS 0.5

/* Jump buffer for watchdog abort. Set before calling game code. */
extern jmp_buf g_watchdog_jmp;

/* Call at the start of each NMI frame. */
void watchdog_frame_start(void);

/* Call at loop back-edges in generated code.
 * If timeout exceeded, dumps stack and longjmps. */
void watchdog_check(void);
