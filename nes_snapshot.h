/*
 * nes_snapshot.h — NES state snapshot for verify mode
 *
 * Captures and restores full NES state for comparing native (recompiled)
 * execution against FCEUX oracle execution.
 */
#pragma once
#include <stdint.h>

typedef struct {
    /* CPU state */
    uint8_t  cpu_a, cpu_x, cpu_y, cpu_s, cpu_p;
    uint8_t  cpu_n, cpu_v, cpu_d, cpu_i, cpu_z, cpu_c;

    /* RAM */
    uint8_t  ram[0x0800];        /* 2KB work RAM */
    uint8_t  sram[0x2000];       /* 8KB battery SRAM */

    /* PPU */
    uint8_t  chr_ram[0x2000];    /* 8KB CHR RAM */
    uint8_t  ppu_oam[0x100];     /* 256B OAM */
    uint8_t  ppu_pal[0x20];      /* 32B palette */
    uint8_t  ppu_nt[0x1000];     /* 4KB nametable */
    uint8_t  ppuctrl, ppumask, ppustatus;
    uint8_t  ppuscroll_x, ppuscroll_y;

    /* Mapper */
    int      current_bank;

    /* Frame counter */
    uint64_t frame_count;
} NESSnapshot;

/* Capture current NES runtime state into a snapshot. */
void nes_snapshot_capture(NESSnapshot *snap);

/* Restore NES runtime state from a snapshot. */
void nes_snapshot_restore(const NESSnapshot *snap);

/* Compare two snapshots byte-by-byte.
 * Returns the number of differing bytes.
 * If diffs_out is non-NULL, writes up to max_diffs diff entries. */
typedef struct {
    uint16_t addr;
    uint8_t  val_a;
    uint8_t  val_b;
    const char *region;  /* "ram", "sram", "oam", "pal", "nt", "chr" */
} SnapshotDiff;

int nes_snapshot_compare(const NESSnapshot *a, const NESSnapshot *b,
                         SnapshotDiff *diffs_out, int max_diffs);
