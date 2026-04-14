/*
 * recomp_stack.h — Recompiled function call stack tracking
 *
 * Maintains a shadow call stack of the last RECOMP_STACK_DEPTH function
 * names. Generated code emits push/pop calls at function entry/exit.
 * Queryable via TCP debug server ("call_stack" command).
 */
#pragma once
#include <stdint.h>

#define RECOMP_STACK_DEPTH 16

extern const char *g_recomp_stack[RECOMP_STACK_DEPTH];
extern int         g_recomp_stack_top;
extern const char *g_last_recomp_func;

void recomp_stack_push(const char *name);
void recomp_stack_pop(void);
void bail_trace(uint16_t caller_pc, uint8_t expected_sp);

/* Bail trace ring buffer — captures bail events for TCP debugging */
#define BAIL_TRACE_SIZE 32
typedef struct {
    uint64_t frame;
    uint16_t caller_pc;
    uint8_t  expected_sp;
    uint8_t  actual_sp;
    int      recomp_stack_top;
    const char *recomp_stack_0; /* top of recomp stack at bail */
    const char *recomp_stack_1; /* second entry */
} BailTraceEntry;

extern BailTraceEntry g_bail_trace[BAIL_TRACE_SIZE];
extern int g_bail_trace_count;
extern int g_bail_trace_idx;
