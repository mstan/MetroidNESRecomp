/*
 * recomp_stack.c — Recompiled function call stack tracking
 */
#include "recomp_stack.h"
#include "nes_runtime.h"
#include <stdint.h>
#include <stdio.h>

extern uint64_t g_frame_count;

const char *g_recomp_stack[RECOMP_STACK_DEPTH];
int         g_recomp_stack_top = 0;
const char *g_last_recomp_func = "(none)";

/* Bail trace ring buffer */
BailTraceEntry g_bail_trace[BAIL_TRACE_SIZE];
int g_bail_trace_count = 0;
int g_bail_trace_idx = 0;

void recomp_stack_push(const char *name)
{
    if (g_recomp_stack_top < RECOMP_STACK_DEPTH)
        g_recomp_stack[g_recomp_stack_top++] = name;
    g_last_recomp_func = name;
}

void recomp_stack_pop(void)
{
    if (g_recomp_stack_top > 0)
        g_recomp_stack_top--;
    g_last_recomp_func = (g_recomp_stack_top > 0)
                        ? g_recomp_stack[g_recomp_stack_top - 1]
                        : "(none)";
}

static FILE *s_bail_log = NULL;
static int s_bail_log_opened = 0;

void bail_trace(uint16_t caller_pc, uint8_t expected_sp)
{
    BailTraceEntry *e = &g_bail_trace[g_bail_trace_idx];
    e->frame = g_frame_count;
    e->caller_pc = caller_pc;
    e->expected_sp = expected_sp;
    e->actual_sp = g_cpu.S;
    e->recomp_stack_top = g_recomp_stack_top;
    e->recomp_stack_0 = (g_recomp_stack_top > 0) ? g_recomp_stack[g_recomp_stack_top - 1] : "(none)";
    e->recomp_stack_1 = (g_recomp_stack_top > 1) ? g_recomp_stack[g_recomp_stack_top - 2] : "(none)";
    g_bail_trace_idx = (g_bail_trace_idx + 1) % BAIL_TRACE_SIZE;
    if (g_bail_trace_count < BAIL_TRACE_SIZE) g_bail_trace_count++;

    /* Write to bail_trace.log for post-mortem analysis */
    if (!s_bail_log_opened) {
        s_bail_log = fopen("bail_trace.log", "w");
        s_bail_log_opened = 1;
        if (s_bail_log) {
            fprintf(s_bail_log, "frame,caller_pc,exp_sp,act_sp,stk_top,fn0,fn1\n");
            fflush(s_bail_log);
        }
    }
    if (s_bail_log) {
        fprintf(s_bail_log, "%llu,$%04X,$%02X,$%02X,%d,%s,%s\n",
                (unsigned long long)e->frame, e->caller_pc,
                e->expected_sp, e->actual_sp, e->recomp_stack_top,
                e->recomp_stack_0 ? e->recomp_stack_0 : "?",
                e->recomp_stack_1 ? e->recomp_stack_1 : "?");
        fflush(s_bail_log);
    }
}
