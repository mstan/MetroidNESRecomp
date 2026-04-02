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

/* PPU register extraction — reads Nestopia's internal PPU state */
typedef struct {
    uint8_t ctrl;       /* $2000 PPUCTRL */
    uint8_t mask;       /* $2001 PPUMASK */
    uint8_t scroll_x;   /* Coarse X + fine X combined */
    uint8_t scroll_y;   /* Coarse Y + fine Y combined */
} NestopiaPpuRegs;

void nestopia_bridge_get_ppu_regs(NestopiaPpuRegs *out);

#ifdef __cplusplus
}
#endif
