# Known Issues

## Camera offset left on Brinstar spawn (scroll X corruption)

**Status:** Root cause identified, fix pending

**Symptom:** When starting a new game, the camera spawns roughly one full screen to the left of Samus's spawn position (near the morph ball area). Scroll X ($FD) wraps from 0x00 to 0xFC (252) and the PPUCTRL nametable select bits flip (native 0x93 vs emulated 0x90), shifting the view by ~260 pixels — nearly a full nametable width.

**Root cause:** NMI timing discrepancy. The native build completes mode 1 initialization ~3 frames earlier than the real NES (Nestopia emulated). This causes the scroll stepper to run before the level loader has written data to SRAM, producing incorrect results.

### Trace

1. Mode 1 init (`$C81D`) sets `$49=2` (scroll state active) at native frame 185 vs emulated frame 188
2. Scroll stepper `FUN_e6a7` ($E6A7) checks `$49==2`, then calls `FUN_e720` ($E720)
3. E720 computes a pointer from `$4F` and `$50` into SRAM at `$71C3`
4. On native, `$71C3` contains 0x00 (RESET cleared SRAM, level loader hasn't written yet)
5. On emulated, `$71C3` already has level data (0x09) by the time E720 runs
6. The 0x00 at `$71C3` falls through E720's sentinel check (`CMP #$FF` fails, 0x00 != 0xFF), enters table scan, returns carry=0
7. Carry=0 causes `FUN_e6a7` to call `FUN_e9b7` (flip nametable bits in $FF) and `DEC $FD` (scroll X wraps 0 -> 0xFF)

### Key addresses

| Address | Description |
|---------|-------------|
| `$FD` | Scroll X position (zero page) |
| `$FC` | Scroll Y position (zero page) |
| `$FF` | PPUCTRL shadow (zero page) |
| `$49` | Scroll engine state (0=inactive, 2=active) |
| `$50` | Scroll page counter |
| `$71C3` | SRAM level data read by E720 scroll boundary check |
| `FUN_e6a7` ($E6A7) | Scroll stepper — decrements $FD when E720 returns carry=0 |
| `FUN_e720` ($E720) | Scroll boundary check — reads SRAM pointer, returns carry flag |
| `FUN_ec93` ($EC93) | Nametable bit check — `Y = NOT(bit0 of $FF)` |
| `FUN_e9b7` ($E9B7) | Nametable flip — `$FF ^= 0x03` |
| `$C81D` | Mode 1 init handler (sets $49=2, loads level) |
| `$C29A` | Scroll write to PPU — reads $FD/$FC, writes $2005 |

### Verified NOT the cause

- **Recompiler code generation:** E720/EC93 carry chain is correct (LSR -> ROL -> ADC verified)
- **SRAM initialization:** Both builds init to 0xFF; RESET clears to 0x00 on both; confirmed Metroid has volatile WRAM via `nestopia_bridge_cpu_read()`
- **Per-instruction cycle counting:** Adding opcode cycle costs to `maybe_trigger_vblank()` did not close the 3-frame gap and caused rendering regressions

### Possible fix directions

1. **Sprite-0 hit timing:** Metroid's NMI handler waits for sprite-0 hit (`$2002` bit 6). Our counter-based simulation may resolve faster than real hardware, shortening NMI duration and giving the main loop extra cycles per frame. This would explain why native completes init faster.

2. **NMI handler overhead:** The NMI handler's PPU buffer transfers do many `nes_read`/`nes_write` calls. If `bus_tick()` accounting differs from real cycle consumption, the NMI takes fewer "cycles" in our model.

3. **Branch penalty modeling:** 6502 branches taken across page boundaries cost +1 cycle. We don't model this. Over thousands of branches in the init sequence, the cumulative difference could be multiple frames.

### Debug tooling

All investigation was done via the TCP ring buffer debug server (port 4370 native, 4371 emulated). Key tools in `tools/`:

- `nes_compare.py` — dual-instance ring buffer comparison with auto frame alignment
- `trace_scroll.py` — frame-by-frame scroll_x / PPU state tracking
- `deep_compare.py` — full zero-page + extended RAM diff at divergence point
- `check_sram.py` / `check_emu_sram.py` — SRAM content verification
- `read_ptr.py` — read SRAM at the E720 scroll pointer address
- `test_boot.txt` — input script: boot through title, press START twice, enter gameplay
