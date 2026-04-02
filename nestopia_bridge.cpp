/*
 * nestopia_bridge.cpp — Bridge between Nestopia libretro core and NES recomp
 *
 * Uses the standard libretro API: retro_init, retro_load_game, retro_run,
 * retro_get_memory_data. No stubs. No driver dependencies.
 */
#include "nestopia_bridge.h"
#include "libretro.h"

/* Nestopia core internals for PPU register access */
#include "source/core/api/NstApiEmulator.hpp"
#include "source/core/NstMachine.hpp"
#include "source/core/NstPpu.hpp"

#include <cstdio>
#include <cstdlib>
#include <cstring>

/* Exposed by libretro.cpp */
namespace Nes { namespace Api { class Emulator; } }
extern Nes::Api::Emulator& nestopia_get_emulator_instance(void);

/* ---- Libretro callbacks ---- */
static uint32_t s_framebuf_xrgb8888[256 * 240];
static unsigned s_frame_width = 256, s_frame_height = 240;
static int16_t  s_audiobuf[48000];
static int      s_audio_frames = 0;
static uint8_t  s_input_state = 0;
static bool     s_loaded = false;

/* Video callback — Nestopia renders here */
static void retro_video_refresh(const void *data, unsigned width, unsigned height, size_t pitch) {
    if (!data) return;
    s_frame_width = width;
    s_frame_height = height;
    for (unsigned y = 0; y < height && y < 240; y++) {
        memcpy(s_framebuf_xrgb8888 + y * 256,
               (const uint8_t *)data + y * pitch,
               (width < 256 ? width : 256) * sizeof(uint32_t));
    }
}

/* Audio callback */
static void retro_audio_sample(int16_t left, int16_t right) {
    (void)left; (void)right;
}

static size_t retro_audio_sample_batch(const int16_t *data, size_t frames) {
    (void)data; (void)frames;
    return frames;
}

/* Input callbacks */
static void retro_input_poll(void) {}

static int16_t retro_input_state(unsigned port, unsigned device, unsigned index, unsigned id) {
    (void)device; (void)index;
    if (port != 0) return 0;
    /* Map libretro button IDs to our button bitmask */
    switch (id) {
        case RETRO_DEVICE_ID_JOYPAD_A:      return (s_input_state & 0x80) ? 1 : 0;
        case RETRO_DEVICE_ID_JOYPAD_B:      return (s_input_state & 0x40) ? 1 : 0;
        case RETRO_DEVICE_ID_JOYPAD_SELECT: return (s_input_state & 0x20) ? 1 : 0;
        case RETRO_DEVICE_ID_JOYPAD_START:  return (s_input_state & 0x10) ? 1 : 0;
        case RETRO_DEVICE_ID_JOYPAD_UP:     return (s_input_state & 0x08) ? 1 : 0;
        case RETRO_DEVICE_ID_JOYPAD_DOWN:   return (s_input_state & 0x04) ? 1 : 0;
        case RETRO_DEVICE_ID_JOYPAD_LEFT:   return (s_input_state & 0x02) ? 1 : 0;
        case RETRO_DEVICE_ID_JOYPAD_RIGHT:  return (s_input_state & 0x01) ? 1 : 0;
        default: return 0;
    }
}

/* Environment callback */
static bool retro_environment(unsigned cmd, void *data) {
    switch (cmd) {
        case RETRO_ENVIRONMENT_GET_SYSTEM_DIRECTORY: {
            *(const char **)data = ".";
            return true;
        }
        case RETRO_ENVIRONMENT_GET_SAVE_DIRECTORY: {
            *(const char **)data = ".";
            return true;
        }
        case RETRO_ENVIRONMENT_SET_PIXEL_FORMAT: {
            /* Accept any format — Nestopia uses XRGB8888 */
            return true;
        }
        case RETRO_ENVIRONMENT_GET_VARIABLE: {
            struct retro_variable *var = (struct retro_variable *)data;
            var->value = NULL;
            return false;
        }
        default:
            return false;
    }
}

/* ---- Public API ---- */

extern "C" {

int nestopia_bridge_init(const char *rom_path) {
    /* Set callbacks */
    retro_set_environment(retro_environment);
    retro_set_video_refresh(retro_video_refresh);
    retro_set_audio_sample(retro_audio_sample);
    retro_set_audio_sample_batch(retro_audio_sample_batch);
    retro_set_input_poll(retro_input_poll);
    retro_set_input_state(retro_input_state);

    retro_init();

    /* Load ROM */
    FILE *f = fopen(rom_path, "rb");
    if (!f) {
        fprintf(stderr, "[nestopia] Cannot open ROM: %s\n", rom_path);
        return -1;
    }
    fseek(f, 0, SEEK_END);
    long size = ftell(f);
    fseek(f, 0, SEEK_SET);
    uint8_t *rom_data = (uint8_t *)malloc(size);
    fread(rom_data, 1, size, f);
    fclose(f);

    struct retro_game_info info = {};
    info.path = rom_path;
    info.data = rom_data;
    info.size = (size_t)size;

    if (!retro_load_game(&info)) {
        fprintf(stderr, "[nestopia] Failed to load ROM: %s\n", rom_path);
        free(rom_data);
        return -2;
    }
    free(rom_data);

    s_loaded = true;
    fprintf(stderr, "[nestopia] Loaded ROM: %s\n", rom_path);
    return 0;
}

void nestopia_bridge_run_frame(uint8_t buttons) {
    if (!s_loaded) return;
    s_input_state = buttons;
    retro_run();
}

void nestopia_bridge_get_ram(uint8_t *out) {
    if (!out) return;
    void *data = retro_get_memory_data(RETRO_MEMORY_SYSTEM_RAM);
    size_t size = retro_get_memory_size(RETRO_MEMORY_SYSTEM_RAM);
    if (data && size > 0) {
        memcpy(out, data, size < 0x800 ? size : 0x800);
    }
}

void nestopia_bridge_get_sram(uint8_t *out) {
    if (!out) return;
    void *data = retro_get_memory_data(RETRO_MEMORY_SAVE_RAM);
    size_t size = retro_get_memory_size(RETRO_MEMORY_SAVE_RAM);
    if (data && size > 0) {
        memcpy(out, data, size < 0x2000 ? size : 0x2000);
    }
}

void nestopia_bridge_get_framebuf_argb(uint32_t *out) {
    if (!out) return;
    /* XRGB8888 → ARGB8888 (just set alpha to 0xFF) */
    for (int i = 0; i < 256 * 240; i++) {
        out[i] = s_framebuf_xrgb8888[i] | 0xFF000000;
    }
}

void nestopia_bridge_write_ram(uint16_t addr, uint8_t val) {
    void *data = retro_get_memory_data(RETRO_MEMORY_SYSTEM_RAM);
    size_t size = retro_get_memory_size(RETRO_MEMORY_SYSTEM_RAM);
    if (data && addr < size) {
        ((uint8_t *)data)[addr] = val;
    }
}

void nestopia_bridge_shutdown(void) {
    if (s_loaded) {
        retro_unload_game();
        s_loaded = false;
    }
    retro_deinit();
}

uint8_t nestopia_bridge_cpu_read(uint16_t addr) {
    if (!s_loaded) return 0xFF;
    Nes::Api::Emulator &emu = nestopia_get_emulator_instance();
    Nes::Core::Machine &mach = emu.GetMachine();
    return (uint8_t)mach.cpu.Peek(addr);
}

void nestopia_bridge_get_ppu_regs(NestopiaPpuRegs *out) {
    if (!out || !s_loaded) return;
    Nes::Api::Emulator &emu = nestopia_get_emulator_instance();
    Nes::Core::Machine &mach = emu.GetMachine();
    const Nes::Core::Ppu &ppu = mach.ppu;

    /* ctrl[0] = PPUCTRL ($2000), ctrl[1] = PPUMASK ($2001) */
    out->ctrl = (uint8_t)(ppu.GetCtrl(0) & 0xFF);
    out->mask = (uint8_t)(ppu.GetCtrl(1) & 0xFF);

    /* Scroll: reconstruct pixel-level X and Y from PPU internals.
     * scroll.address holds current VRAM address:
     *   bits 0-4:  coarse X (tile column)
     *   bits 5-9:  coarse Y (tile row)
     *   bits 12-14: fine Y scroll
     * scroll.xFine holds fine X (0-7) */
    unsigned addr = ppu.GetScrollAddress();
    unsigned xFine = ppu.GetScrollXFine();
    unsigned coarseX = addr & 0x1F;
    unsigned coarseY = (addr >> 5) & 0x1F;
    unsigned fineY = (addr >> 12) & 0x07;

    out->scroll_x = (uint8_t)((coarseX << 3) | (xFine & 7));
    out->scroll_y = (uint8_t)((coarseY << 3) | fineY);
}

} /* extern "C" */
