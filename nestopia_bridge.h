/*
 * nestopia_bridge.h — Nestopia libretro core bridge for NES recomp
 */
#pragma once
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

int  nestopia_bridge_init(const char *rom_path);
void nestopia_bridge_run_frame(uint8_t buttons);
void nestopia_bridge_get_ram(uint8_t *out);       /* 2KB work RAM */
void nestopia_bridge_get_sram(uint8_t *out);      /* 8KB save RAM */
void nestopia_bridge_get_framebuf_argb(uint32_t *out);  /* 256x240 ARGB */
void nestopia_bridge_write_ram(uint16_t addr, uint8_t val);
void nestopia_bridge_shutdown(void);

/* Read a byte from Nestopia's CPU address space (any address $0000-$FFFF) */
uint8_t nestopia_bridge_cpu_read(uint16_t addr);

/* PPU register extraction — reads Nestopia's internal PPU state */
typedef struct {
    uint8_t ctrl;       /* $2000 PPUCTRL */
    uint8_t mask;       /* $2001 PPUMASK */
    uint8_t scroll_x;   /* Coarse X + fine X combined */
    uint8_t scroll_y;   /* Coarse Y + fine Y combined */
} NestopiaPpuRegs;

void nestopia_bridge_get_ppu_regs(NestopiaPpuRegs *out);

/* PPU VRAM extraction — reads Nestopia's internal PPU memory for oracle comparison */
void nestopia_bridge_get_chr_ram(uint8_t *out, int len);    /* CHR pattern tables (up to 8KB) */
void nestopia_bridge_get_nametable(uint8_t *out, int len);  /* Nametable (up to 4KB, mirrored) */
void nestopia_bridge_get_palette(uint8_t *out);             /* Palette RAM (32 bytes) */
void nestopia_bridge_get_oam(uint8_t *out);                 /* OAM (256 bytes) */

#ifdef __cplusplus
}
#endif
