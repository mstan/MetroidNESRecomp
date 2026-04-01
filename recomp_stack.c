/*
 * recomp_stack.c — Recompiled function call stack tracking
 */
#include "recomp_stack.h"

const char *g_recomp_stack[RECOMP_STACK_DEPTH];
int         g_recomp_stack_top = 0;
const char *g_last_recomp_func = "(none)";

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
