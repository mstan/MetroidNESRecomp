/*
 * verify_mode.h — Dual-execution verification mode
 *
 * Runs both FCEUX oracle and native recompiled code each frame,
 * comparing results to detect divergences.
 */
#pragma once
#include <stdint.h>

typedef enum {
    RUN_MODE_NATIVE   = 0,  /* Pure recompiled code (default) */
    RUN_MODE_VERIFY   = 1,  /* Both paths, compare results */
    RUN_MODE_EMULATED = 2,  /* Pure FCEUX oracle, no recompiled code */
} RunMode;

/* Current run mode (set via --verify or --emulated CLI flags). */
extern RunMode g_run_mode;

/* Initialize verify mode. Call after FCEUX bridge init.
 * rom_path is needed to load the ROM into FCEUX. */
void verify_mode_init(const char *rom_path);

/* Run one NMI frame through the current mode.
 * In NATIVE mode: calls func_NMI() directly.
 * In VERIFY mode: snapshots → FCEUX NMI → snapshot → restore → native NMI → compare.
 * In EMULATED mode: calls FCEUX frame runner.
 * Returns 1 if verify passed (or not in verify mode), 0 if divergence detected. */
int verify_mode_run_nmi(void);

/* Get the number of divergences detected so far. */
uint64_t verify_mode_get_divergence_count(void);
