/*
 * nes_snapshot.c — NES state snapshot capture/restore/compare
 */
#include "nes_snapshot.h"
#include "nes_runtime.h"
#include <string.h>

void nes_snapshot_capture(NESSnapshot *snap) {
    snap->cpu_a = g_cpu.A;
    snap->cpu_x = g_cpu.X;
    snap->cpu_y = g_cpu.Y;
    snap->cpu_s = g_cpu.S;
    snap->cpu_p = g_cpu.P;
    snap->cpu_n = g_cpu.N;
    snap->cpu_v = g_cpu.V;
    snap->cpu_d = g_cpu.D;
    snap->cpu_i = g_cpu.I;
    snap->cpu_z = g_cpu.Z;
    snap->cpu_c = g_cpu.C;

    memcpy(snap->ram,     g_ram,     0x0800);
    memcpy(snap->sram,    g_sram,    0x2000);
    memcpy(snap->chr_ram, g_chr_ram, 0x2000);
    memcpy(snap->ppu_oam, g_ppu_oam, 0x100);
    memcpy(snap->ppu_pal, g_ppu_pal, 0x20);
    memcpy(snap->ppu_nt,  g_ppu_nt,  0x1000);

    snap->ppuctrl    = g_ppuctrl;
    snap->ppumask    = g_ppumask;
    snap->ppustatus  = g_ppustatus;
    snap->ppuscroll_x = g_ppuscroll_x;
    snap->ppuscroll_y = g_ppuscroll_y;
    snap->current_bank = g_current_bank;
    snap->frame_count  = g_frame_count;
}

void nes_snapshot_restore(const NESSnapshot *snap) {
    g_cpu.A = snap->cpu_a;
    g_cpu.X = snap->cpu_x;
    g_cpu.Y = snap->cpu_y;
    g_cpu.S = snap->cpu_s;
    g_cpu.P = snap->cpu_p;
    g_cpu.N = snap->cpu_n;
    g_cpu.V = snap->cpu_v;
    g_cpu.D = snap->cpu_d;
    g_cpu.I = snap->cpu_i;
    g_cpu.Z = snap->cpu_z;
    g_cpu.C = snap->cpu_c;

    memcpy(g_ram,     snap->ram,     0x0800);
    memcpy(g_sram,    snap->sram,    0x2000);
    memcpy(g_chr_ram, snap->chr_ram, 0x2000);
    memcpy(g_ppu_oam, snap->ppu_oam, 0x100);
    memcpy(g_ppu_pal, snap->ppu_pal, 0x20);
    memcpy(g_ppu_nt,  snap->ppu_nt,  0x1000);

    g_ppuctrl     = snap->ppuctrl;
    g_ppumask     = snap->ppumask;
    g_ppustatus   = snap->ppustatus;
    g_ppuscroll_x = snap->ppuscroll_x;
    g_ppuscroll_y = snap->ppuscroll_y;
    g_current_bank = snap->current_bank;
    g_frame_count  = snap->frame_count;
}

static int compare_region(const uint8_t *a, const uint8_t *b, int size,
                          const char *region, uint16_t base_addr,
                          SnapshotDiff *diffs, int max_diffs, int count) {
    for (int i = 0; i < size; i++) {
        if (a[i] != b[i]) {
            if (diffs && count < max_diffs) {
                diffs[count].addr   = (uint16_t)(base_addr + i);
                diffs[count].val_a  = a[i];
                diffs[count].val_b  = b[i];
                diffs[count].region = region;
            }
            count++;
        }
    }
    return count;
}

int nes_snapshot_compare(const NESSnapshot *a, const NESSnapshot *b,
                         SnapshotDiff *diffs_out, int max_diffs) {
    int count = 0;
    count = compare_region(a->ram, b->ram, 0x0800, "ram", 0x0000,
                           diffs_out, max_diffs, count);
    count = compare_region(a->sram, b->sram, 0x2000, "sram", 0x6000,
                           diffs_out, max_diffs, count);
    count = compare_region(a->ppu_oam, b->ppu_oam, 0x100, "oam", 0x0000,
                           diffs_out, max_diffs, count);
    count = compare_region(a->ppu_pal, b->ppu_pal, 0x20, "pal", 0x3F00,
                           diffs_out, max_diffs, count);
    count = compare_region(a->ppu_nt, b->ppu_nt, 0x1000, "nt", 0x2000,
                           diffs_out, max_diffs, count);
    return count;
}
