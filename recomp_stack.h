/*
 * recomp_stack.h — Recompiled function call stack tracking
 *
 * Maintains a shadow call stack of the last RECOMP_STACK_DEPTH function
 * names. Generated code emits push/pop calls at function entry/exit.
 * Queryable via TCP debug server ("call_stack" command).
 */
#pragma once

#define RECOMP_STACK_DEPTH 16

extern const char *g_recomp_stack[RECOMP_STACK_DEPTH];
extern int         g_recomp_stack_top;
extern const char *g_last_recomp_func;

void recomp_stack_push(const char *name);
void recomp_stack_pop(void);
