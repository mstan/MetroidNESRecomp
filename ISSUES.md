# Known Issues

## RESOLVED: Camera offset left on Brinstar spawn

**Status:** Fixed (commit e6c07c3)

Fixed by blocking $FD wrap during init via scroll_guard_callback in extras.c.

---

## RESOLVED: Tile garbling at gameplay load-in

**Status:** Fixed (commits 2edf857, b7be890)

**Root cause:** func_C376 uses `PLA PLA + RTS` — a 6502 non-local return pattern
that bails out two call levels. The recompiler treated PLA as a simple stack memory
operation and `return` only went back one C function level.

**Fix:** Added `stack_bail_func C376` to game config. The recompiler emits `return;`
after every JSR $C376 call site.

---

## RESOLVED: Dispatch misses ($B809, $B5BA and cascading)

**Status:** Fixed

**Root cause:** Multiple functions in bank 1 not discoverable via static analysis.

**Fix:** Added extra_func entries for all missing dispatch targets. Zero dispatch
misses during gameplay.

---

## RESOLVED: Stack pointer leak (progressive S drift from dispatch misses)

**Status:** Fixed (code_generator.c)

**Root cause:** With `push_all_jsr`, missed dispatch targets left orphaned return
addresses on the 6502 stack.

**Fix:** `call_by_address()` returns int; JSR-context dispatch emits
`if (!call_by_address(addr)) g_cpu.S += 2;` to compensate.

---

## RESOLVED: EF13/EF78/EF8C outer loop cross-function JMP

**Status:** Fixed (commit 8f06e6e, game.toml merge_func)

**Root cause:** The tile writer at $EF13-$EF99 was split into three separate
functions by the function finder. `JMP $EF13` at $EF96 became a tail-call
(`func_EF13(); return;`) instead of a loop-back goto. Each outer loop iteration
over-popped S by 2 (the target's RTS popped bytes never pushed by the JMP).
During level loading ($1E=01→02), 5 iterations caused S to wrap from 0xF9 to 0x03.

**Fix:** Added `merge_func 7 EF13 EF78` and `merge_func 7 EF13 EF8C` to game.toml.
The JMP at EF96 now generates `goto label_EF13` within a single merged function body.

---

## RESOLVED: stack_bail_func C376 double-pop

**Status:** Fixed (code_generator.c, commit 8f06e6e)

**Root cause:** With `push_all_jsr`, the bail function's RTS did `g_cpu.S += 2`
(popping the outer function's return address). But the C return chain also reached
the outer function, whose own RTS popped again — double-popping the outer return.

**Fix:** Suppressed `g_cpu.S += 2` in the RTS codegen for functions listed as
`stack_bail_func`. The bail func's PLA PLA handles the inner pop; the outer
function's own RTS handles the outer pop.

---

## RESOLVED: Nestopia CPU bridge gap

**Status:** Fixed (commit 8f06e6e)

The emulated oracle's ring buffer wasn't copying Nestopia's CPU registers (A, X, Y,
S, P). It always showed the runner's init values (S=0xFD). Added
`nestopia_bridge_get_cpu_regs()` and CPU state sync in the emulated frame loop.

---

## RESOLVED: Enemies missing / flicker for one frame

**Status:** Fixed (consequence of dispatch miss fix)

---

## ACTIVE: S register drift during title screen

**Priority:** High — root cause of gameplay divergence

**Symptom:** Native S starts at 0xFB after boot (should be 0xFF) and drifts by
-4 every ~16 frames during the title screen ($1D=01). By frame 116, S=0xDF.
This offset persists into gameplay, causing wrong game sub-states and cascading
divergence.

**Measured data:**
```
Frame   6: S=0xFB  (first stable frame after boot)
Frame  20: S=0xF7  (-4)
Frame  36: S=0xF3  (-4)
Frame  52: S=0xEF  (-4)
...
Frame 116: S=0xDF  (stable until gameplay transition)
```

Emulator oracle shows S=0xFF throughout.

**Investigation so far:**
- The initial 0xFB (not 0xFF) at frame 6: the stack has 2 return addresses —
  $C0B9 (from JSR C4DE at C0B7) and $C53A (from JSR C45D at C538). These are
  from VBlank waits inside the boot init sequence. The question is why these
  2 pushes remain when the init completes.
- The -4 drift every ~16 frames during title screen: likely another cross-function
  JMP pattern (same class of bug as the EF13/EF78 fix) or the stack_bail_func
  being called periodically during title animation.
- NOT caused by dispatch misses (zero misses logged).

**Next steps:** Re-enable the S-wrap detector (`g_ram[0x7F0-0x7F2]` trick) during
the title screen to identify which RTS causes the periodic over-pop.

---

## ACTIVE: Crash when scrolling right

**Priority:** High

**Symptom:** Walking Samus to the right (scrolling the screen) causes a crash
or hang. The entropy test script reproduces this — the `HOLD RIGHT / WAIT 300`
section triggers it.

**Investigation needed:** Likely related to the S drift — by the time gameplay
starts, S is offset by ~32 bytes from expected, which corrupts stack-relative
reads in the scroll/column loading code. May also be a separate codegen issue
in the scrolling path. Need to trace via TCP comparison at the point of crash.

---

## ACTIVE: Enemies not spawning correctly

**Priority:** Medium — may cascade from S drift

**Symptom:** Enemy spawning behavior diverges from emulator oracle. Enemies may
not appear or appear incorrectly during gameplay.

**Investigation needed:** Compare enemy-related RAM ($0300+ OAM, enemy state
tables) between native and emulated at equivalent game states. The S drift
causes different sub-state paths which likely affect enemy spawn logic.

---

## ACTIVE: Samus head missing/wrong

**Priority:** Medium — caused by S drift → wrong PPUCTRL

**Symptom:** Samus's body renders but head/helmet uses wrong tiles. PPUCTRL=0x90
(8x8 sprites) instead of 0x94 (8x16). In 8x16 mode the head tiles render correctly.

**Root cause:** PPUCTRL shadow ($FF) diverges because game sub-state ($1E) takes
a different path due to the S offset. Will likely resolve when S drift is fixed.

---

## ACTIVE: TIME label on HUD

**Priority:** Low — may already be resolved

Needs re-verification after S drift fix. Not visible in recent screenshots.

---

## ACTIVE: Watchdog fires in func_EF8C

**Priority:** Low — may be changed by merge_func fix

**Symptom:** Watchdog fires every ~120 frames in the column renderer call stack.
The merge_func fix for EF8C/EF13/EF78 changed the function boundaries here —
behavior needs re-verification.

---

## Key addresses

| Address | Description |
|---------|-------------|
| `$FD` | Scroll X position |
| `$FF` | PPUCTRL shadow |
| `$49` | Scroll engine state (0=inactive, 2=active) |
| `$1A` | VBlank flag (set by NMI, polled by $C439 spin-wait) |
| `$1B` | RAM PPU buffer pending flag |
| `$1C` | ROM PPU buffer transfer count |
| `$1D` | Game mode flag |
| `$1E` | Game mode sub-state |
| `$5A` | Column loader counter |
| `$07A0` | RAM PPU buffer write index |
| `$07A1+` | RAM PPU command buffer (processed by func_C2CA) |
| `$9560` | ROM PPU buffer pointer table (bank-dependent) |
| `func_C0D9` | NMI handler entry |
| `func_C1E0` | PPU data transfer (ROM buffer) |
| `func_C2CA` | PPU data transfer (RAM buffer) |
| `func_C30C` | PPU command processor |
| `func_C376` | Buffer terminator + bail-out (PLA PLA + RTS) |
| `func_C43D` | Wait for NMI (spin on $1A) |
| `func_EA2B` | Column loader |
| `func_EF8C` | Nametable renderer (merged with EF13/EF78) |
| `func_8AC7` | Palette update (bank 0 only) |
