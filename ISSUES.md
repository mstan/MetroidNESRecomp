# Known Issues

## Camera offset left on Brinstar spawn (scroll X corruption)

**Status:** Root cause identified — recompiler inline_dispatch + cycle timing

**Symptom:** When starting a new game, the camera snaps to the wrong initial X position (~260px too far left). Scroll X ($FD) wraps from 0x00 to 0xFC and the PPUCTRL nametable select bits flip (native 0x93 vs emulated 0x90), shifting the view by ~260 pixels — nearly a full nametable width.

### Root Cause Chain

1. **$1E (game mode sub-state) skips from 2→8, never reaching 4.**
   - $1E is the sub-state index for the title-to-gameplay transition
   - The dispatch at $C13E (`inline_dispatch $C27C`) switches on $1E
   - Case 4 ($C9A6) sets $24=1, which triggers NMI disable for 3 frames
   - On native, multiple cases execute within a single frame, so $1E jumps from 2→8
   - On emulated (real 6502 timing), each case takes a full frame, so $1E hits 4

2. **NMI is never disabled during the transition.**
   - Case 4 calls caseD_1a ($C45D) which clears bit 7 of $FF and writes $2000
   - Since case 4 is skipped, $FF stays 0x90 (NMI enabled) on native
   - On emulated, $FF drops to 0x10 (NMI disabled) for 3 frames

3. **Init completes 3 frames early.**
   - With NMI always enabled, the native build processes the transition faster
   - Init at $C81D (case 1, $1E=1) sets $49=2 at frame 185 vs emulated frame 188

4. **Scroll stepper reads SRAM before boundary sentinels are written.**
   - With $49=2, the scroll stepper (FUN_e6a7) runs in the main loop
   - It DECs $50 (03→02) and calls FUN_e720 with the new page value
   - On native, the SRAM at that address has non-sentinel data (0x17 instead of $FF)
   - E720 returns carry=0, causing nametable flip ($FF ^= 0x03 → 0x93) and DEC $FD (0→0xFF)

### Evidence (TCP frame trace)

| Frame | Native $1E | Native $FF | Emu $1E | Emu $FF |
|-------|-----------|-----------|---------|---------|
| 181   | 0x00      | 0x90      | 0x00    | 0x90    |
| 182   | 0x00      | 0x90      | 0x00    | **0x10** |
| 183   | **0x01**  | 0x90      | 0x00    | 0x10    |
| 185   | 0x01      | 0x90      | **0x01**| 0x90    |
| 187   | 0x01      | **0x93**  | 0x01    | 0x90    |
| 188   | 0x01      | 0x93      | 0x01    | 0x90    |
| 190   | **0x02**  | 0x93      | **0x02**| 0x90    |
| 192   | **0x08**  | 0x93      | 0x08    | 0x90    |

Native $1E transitions: 00→01 (F183), 01→02 (F190), **02→08 (F192)** — skips 3-7.

### Latest finding (PPUCTRL trace)

Runtime logging of $FF writes during frames 170-200 shows:
```
$FF: 90 -> 10 (frame=183)   ← NMI disabled by func_C45D (CONFIRMED WORKING)
$FF: 10 -> 90 (frame=183)   ← NMI re-enabled by func_C487 (SAME FRAME!)
$FF: 90 -> 93 (frame=187)   ← nametable flip from scroll stepper (THE BUG)
```

NMI disable/re-enable DOES happen on native — but the entire disable→setup→re-enable
cycle completes within a single `maybe_trigger_vblank()` frame. On emulated, the same
cycle spans 3 Nestopia frames (F182-184).

This is correct NES behavior — with NMI disabled, the CPU runs at full speed. The
setup code (nametable fills, data copies) takes ~3000 cycles total, well within one
frame's budget of 29781 cycles. The emulated build shows 3 frames because Nestopia's
frame counting includes VBlank-start events that the game polls via $2002 rather than
$1A during NMI-disabled periods.

### Fix Directions (revised)

The NMI-disable period is a red herring — it works correctly on both builds. The actual
3-frame timing gap comes from earlier in the transition sequence.

**Focus area:** The transition starts when $24 is set (frame 181 native, frame 180 emu).
The dispatch triggers func_C531 which runs the full NMI-disable/setup/re-enable cycle.
After that returns, the main loop runs the $1E dispatch (func_C114), which processes
cases 0→1→2→8. The 3-frame gap between native and emulated $49=2 (F185 vs F188) comes
from the case 0+1 combined handler (func_C801 → func_C81D), which includes VBlank waits
and the column loading loop.

### Definitive root cause ($1A trace)

Runtime logging of $1A writes (frame 170-200) shows the bug clearly:

```
Frame 183: $1A: 01->00 (ops=12896)   ← init clears $1A for VBlank wait
Frame 183: $1A: 00->01 (ops=5760)    ← NMI fires, sets $1A=1, wait resolves
Frame 184: $1A: 01->01 (ops=4086)    ← NMI fires but $1A NEVER CLEARED
Frame 185: $1A: 01->01 (ops=4086)    ← same — init still running
Frame 186-189: same pattern           ← 6 frames of NMI firing without $1A clear
Frame 190: $1A: 01->00 (ops=27721)   ← init finally returns, main loop clears $1A
```

After the VBlank wait at $C840 resolves (frame 183), the init continues with:
- Setting $49=2, $50, $4F (scroll state)
- Column loading loop (E720 + EA2B × N)
- PPU setup writes

This post-VBlank code takes ~6 frames' worth of maybe_trigger_vblank cycles. During
those 6 frames, NMI fires but the game code doesn't clear $1A because it's inside the
init handler (not the main loop). The main loop only clears $1A at $C0C9 after the
dispatch handler returns.

**The scroll stepper (E6A7) runs during NMI at frame 187** while the init is still in
progress. The NMI handler calls game update code that includes the scroll stepper.
With $49=2 (set at frame 185 within the init), the scroll stepper reads SRAM that
the column loader hasn't finished writing, producing the wrong boundary check.

### Fix directions (definitive)

**Option A: Prevent scroll stepper from running during init.** The NMI handler should
check whether the init is still in progress (e.g., check if we're inside func_C801/C81D)
and skip the scroll update. This might already be gated on a flag — check what the NMI
handler's game update path does during $1E=0 or $1E=1.

**Option B: Reduce cycle cost of init's post-VBlank code.** The column loading loop
and PPU setup are consuming too many maybe_trigger_vblank cycles. If the cycle costs
per instruction are over-counted, reducing them would let the init complete faster
(closer to real hardware's 1-2 frames instead of 6).

**Option C: Don't run NMI game logic during init frames.** When the init handler is
executing (depth > 0 or some flag), gate the NMI handler to only do PPU transfers
without running the game update that includes the scroll stepper. This matches real
NES behavior where NMI interrupts are brief and don't advance game state during init.

### Key addresses

| Address | Description |
|---------|-------------|
| `$FD` | Scroll X position (zero page) |
| `$FF` | PPUCTRL shadow (zero page) |
| `$49` | Scroll engine state (0=inactive, 2=active) |
| `$50` | Scroll page counter |
| `$1E` | Game mode sub-state (title→gameplay transition index) |
| `$1D` | Game mode flag |
| `$24` | Dispatch trigger for FUN_c4de |
| `$1A` | VBlank flag (set by NMI, polled by $C439 spin-wait) |
| `FUN_e6a7` ($E6A7) | Scroll stepper |
| `FUN_e720` ($E720) | Scroll boundary check — reads SRAM, returns carry |
| `FUN_c27c` ($C27C) | PLA-based inline dispatch (ChooseRoutine) |
| `$C13E` | JSR $C27C — dispatches on $1E for mode transition |
| `$C9A6` | Case 4 handler — sets $24=1, $1F=$1C (NMI disable trigger) |
| `$C45D` | caseD_1a — disables NMI ($FF &= $7F, STA $2000) |
| `$C439` | VBlank wait — spins on $1A until NMI fires |
| `$C81D` | Mode 1 init handler — sets $49=2, loads level |

### Debug tooling

Investigation used TCP ring buffer (port 4370 native, 4371 emulated) and `[STATE]`
printf logging in runtime.c for $1D/$1E/$24. New `follow` TCP command added for
write-level tracing with call stack capture.

### Scoping note

The `inline_dispatch C27C` in game.cfg correctly generates a switch statement. The
generated code IS calling the right handler functions. The bug is that handlers which
end with `JMP $C439` (VBlank wait) complete and return within the same frame, so the
next case runs immediately without waiting for NMI.

### Verified NOT the cause

- **Recompiler codegen for E720/EC93:** carry chain is correct
- **SRAM initialization:** both builds init to 0xFF
- **Dispatch table correctness:** all cases present in generated switch
- **Function boundary splitting:** $C9A6 is properly generated and in dispatch table
- **$24 never being set:** $24 IS set (to 2 at frame 181), dispatch fires, but the
  handler for $1E=4 is never reached because $1E skips over it
