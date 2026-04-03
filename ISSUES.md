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

## RESOLVED: S register drift during title screen

**Status:** Fixed (code_generator.c — unsuppressed bail func RTS)

**Root cause:** The `stack_bail_func` RTS suppression was over-correcting.
func_C376 (PLA PLA RTS) is a 2-level bail: PLA PLA consumes its own JSR's
return address, then RTS pops the CALLER's return address. The suppressed
RTS meant the caller's return bytes stayed on the stack (-2 per bail invocation).

The bail func's callers (func_C37E, func_C328) are PPU buffer terminators
called every ~16 frames when the palette animation cycles ($1C set for ROM
PPU buffer transfer). Each invocation leaked -2 in the NMI handler and -2
in the main loop path = -4 total every 16 frames.

**Fix:** Unsuppressed the bail func's RTS in the codegen. All functions now
pop their JSR return address on RTS, including bail funcs. The `return;`
after JSR $C376 at the call site exits the caller before its own RTS,
preventing double-pop. S-trace confirmed: S=0xFF stable throughout title screen.

**Measured data (after fix):**
```
Frame   6: S=0xFF  (matches emulator oracle)
Frame  20: S=0xFF  (no drift)
Frame 116: S=0xFF  (stable)
```

---

## ACTIVE: S divergence during gameplay transition ($1E=01 to 02)

**Priority:** High — prevents correct gameplay

**Symptom:** During the title-to-gameplay transition, native S diverges from
emulator at the $1E=01→02 boundary (level loading). Native S drops to 0x03
while emulator shows 0xFD. This ~250-byte offset persists into gameplay ($1E=08):
native S=0x05 vs emulated S=0xFF.

**Measured data:**
```
                Native  Emulated
$1E=00 (title): 0xFF    0xFF     (matched after bail RTS fix)
$1E=01 (init):  varies  varies
$1E=02 (load):  0x03    0xFD     ← divergence
$1E=08 (game):  0x05    0xFF
```

**Root cause:** The unsuppressed bail func RTS over-pops by 2 when the bail's
caller (func_C37E or func_C328) is reached via JMP instead of JSR. JMP doesn't
push a return address, so the bail's RTS pops the *grandparent's* return addr.

**Specific JMP-to-bail sites:**
- `$8AFC`: JMP func_C37E (inside func_8AC7_b0, palette update — bank 0)
- `$945C`: JMP func_C328 (inside func_9449_b0, PPU setup — bank 0)

Both func_C37E and func_C328 are ALSO called via JSR from other sites:
- `$8AED`: JSR func_C37E (same func_8AC7_b0 — calls it twice, JSR then JMP)
- `$FF37`: JSR func_C328 (from multiple banks)

**Approaches tried and failed:**
1. **Suppress RTS + bail-site S+=2 compensation** — Works for JSR callers
   (pops the right bytes) but over-pops for JMP callers (pops grandparent's
   bytes, then grandparent's own RTS double-pops).
2. **g_bail_active runtime flag** — Set flag at bail site, check at JSR call
   sites to propagate the bail. WRONG: exits 2 C function levels instead of 1.
   On real 6502, the bail returns to the caller's caller which *continues
   executing*. The flag makes the caller's caller also exit early.
3. **push_jmp dummy return addr at JMP sites** — Push a dummy before calling
   bail-containing functions via JMP. Bail's RTS pops the dummy. WRONG: when
   the bail does NOT fire (normal return), the function's own RTS pops the
   dummy instead of the real return addr, leaving the real addr on the stack.

**The fundamental problem:** The bail's behavior depends on runtime context
(was the caller JSR'd or JMP'd?). No single compile-time RTS policy works
for both cases. The current unsuppressed RTS is correct for JSR callers
(the common case, fixing the title screen) but over-pops for JMP callers.

**Possible next steps:**
- **Runtime JSR/JMP detection**: At function entry, save whether the function
  was entered with a valid JSR push on the stack (compare top-of-stack with
  the expected return addr). At the bail's RTS, pop conditionally.
- **Restructure bail callers**: Use merge_func or inline the bail-containing
  code into the JMP callers so the JMP becomes a goto.  $8AFC → C37E and
  $945C → C328 are the only two JMP-to-bail sites.
- **Selective RTS suppression**: Suppress the bail's RTS only when the
  enclosing function was entered from a known JMP site.  This could use a
  per-function flag set by the JMP codegen.
- **Accept and compensate**: Keep unsuppressed RTS, add S-=2 at the specific
  JMP sites ($8AFC, $945C) after the call returns to undo the over-pop. This
  is fragile but targeted.

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
