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

## RESOLVED: S divergence during gameplay transition ($1E=01 to 02)

**Status:** Fixed (recompiler: cond_bail_func + merge_range)

### April 3, 2026 session findings

**NMI is confirmed balanced.** PRE-NMI S == POST-NMI S every frame during transition.
The S leak is in the MAIN LOOP code between VBlanks, not in the NMI handler.

**New recompiler feature: `merge_range`** — Added `[[merge_range]]` to game.toml
and recompiler (game_config.h/c, code_generator.c). Automatically merges ALL
discovered entry points within an address range. Replaces 13 individual `merge_func`
entries with one `merge_range bank=7 addr_lo=0xEF11 addr_hi=0xEF8D`.

The EF13 merge was INCOMPLETE — function finder discovered 14+ entry points but only
2 were merged. merge_range fixes all instruction-boundary entries. 3 overlapping
mid-instruction entries (EF2A, EF4C, EF8D) remain as separate functions that call the
merged wrapper.

**Result: S leak PERSISTS despite comprehensive merge.** The EF13 JMP loop was
NOT the root cause (or not the only one).

**func_EA2B wrapper results (definitive):**
Wrapping func_EA2B with entry/exit S check revealed each call returns with S
2 bytes HIGHER than entry (bail/RTS pops JSR $EA2B return). This is expected
per-call, but iteration n=4 ($5A=0xF4) produces a catastrophic -248 drop.
The $5A=0xF4 path goes through func_EA13 inline_dispatch case 4 (func_EA26).
This function just sets $5A=0xFF and does RTS (S+=2). The -248 drop is unexplained.

**ROOT CAUSE FOUND (April 3 session, final):**

func_C36B contains bail function code (PLA PLA at $C37B-$C37C) INLINE within
its body. When the PPU buffer overflows (X >= 0x4F), the function takes the
bail path: PLA PLA RTS = S+=4, but only 2 bytes were pushed (JSR $C36B). The
extra 2 bytes over-pop the stack.

func_C36B is called 4 times per iteration of func_E5E2 (inline_dispatch case 3
from func_EA13 during the $5A >= 0xF0 cleanup phase). Each overflow bail pops
2 extra bytes. Over ~125 iterations of the column loading loop, this accumulates
~250 bytes of stack corruption.

func_C376 is listed as `stack_bail_func` in game.toml, but func_C36B is NOT
listed — the function finder merged $C36B through $C37D into one function that
CONTAINS the bail code. The recompiler doesn't know that the PLA PLA at
$C37B-$C37C is a bail — it treats them as normal stack operations.

**Fix needed in recompiler:** Detect when a function body CONTAINS a known
stack_bail_func's code (the PLA PLA sequence at the bail address). Either:
1. Emit `return;` after the bail path within the containing function
2. Split the function so the bail is a separate callable
3. Add func_C36B to stack_bail_func as an additional bail entry

**Fix:** Two recompiler changes:
1. `cond_bail_func` — new config/codegen concept for functions that CONTAIN
   inline bail code (PLA PLA + RTS) that fires conditionally. At JSR call sites,
   emits `{ uint8_t _cbs = S; push; func(); if (S != _cbs) return; }` to detect
   and propagate the bail. game.toml: `[[cond_bail_func]] addr = 0xC36B`.
2. `merge_range` — auto-merges all function entry points in an address range.
   Replaces 13 individual merge_func entries. game.toml:
   `[[merge_range]] bank=7 addr_lo=0xEF11 addr_hi=0xEF8D`.

**Verified:** Native S=0xFF at gameplay, matching emulator oracle.

**Debug note:** stderr logging is unreliable on Windows (buffering). Always use
`printf` + `fflush(stdout)` for debug output in the runner.

**Measured data (after fix):**
```
Frame 188: S=0xFD ($1E=02, transition complete)
Frame 189: S=0xFF ($1E=08, gameplay — matches emulator oracle)
```

---

## HISTORICAL: Earlier S divergence analysis (superseded by above)
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

## ACTIVE: S corruption during $1E=0x03 gameplay transition (frame 565→566)

**Priority:** Critical — blocks all downstream gameplay verification

**Symptom:** Native S drops from 0xFF to 0x01 in a single frame (frame 565→566)
when $1E transitions from 0x08 to 0x03. Emulator S stays at 0xFF. S stabilizes
at 0x08-0x0C during $1E=0x09 (active gameplay) — permanently corrupted.
last_func=func_C0CB throughout the transition.

**Measured data:**
```
Frame 564: S=0xFF, $1E=0x08  (last good frame)
Frame 565: S=0xFF, $1E=0x03  (transition, S still OK)
Frame 566: S=0x01, $1E=0x03  (S drops 254 bytes in ONE frame)
Frame 567+: S=0x08-0x0C      (permanently corrupted)
Emulator:  S=0xFF throughout  (always correct)
```

**Key finding: S set directly, NOT by pushes.** Stack page ($0100-$01FF) is
mostly zeros at S=0x01 — normal push operations would leave data. This means
S was set via TXS (opcode 0x9A) with X holding a small value.

**Lead: func_D076 — misaligned function (UNVERIFIED)**
The previous session found that $D076 is a function created by the recompiler
starting ONE BYTE into a BNE instruction at $D075. The real 6502 code is:
```
D075: D0 11      BNE +17 → $D088
D077: B9 9A D0   LDA $D09A,Y
D07A: 4C 88 D0   JMP $D088
```
But the recompiler's func_D076 starts at $D076 and decodes:
```
D076: 11 B9      ORA ($B9),Y     ← actually BNE offset + LDA opcode
D078: 9A         TXS             ← actually low byte of LDA $D09A,Y address
```
This phantom TXS would set S=X, explaining the corruption. func_D076 IS in the
dispatch table, but no static call_by_address(0xD076) was found. Need to verify
whether it's reached dynamically during $1E=0x03.

**$1E=0x03 dispatch path:** $C114 reads $1E, uses inline dispatch table at $C141.
$1E=0x03 dispatches to $C92B. The code at $C92B calls $E1F1, $CB29, $C4AA, and
loops back to $C92A (which is just RTS).

**Protocol status:**
- [x] Step 1: Sync state — used $1E transitions + S values
- [x] Step 2: State dump — CPU, ZP, stack page from both sides
- [x] Step 3: Diff — S=0x01 vs S=0xFF, mapper ctrl also diverged
- [x] Step 4: First divergence — frame 566, during $1E=0x03
- [x] Step 5: Write trace — S tracking tooling built, per-instruction tracking done
- [ ] Step 6: Classify — accumulated drift, not single TXS; nested NMI involvement
- [ ] Step 7: Fix — blocked on step 6

**S tracking results (measured, April 3 session 2):**
- Built `watch_s` / `watch_s_history` TCP commands in debug_server.c
- Added `debug_server_check_s()` to `maybe_trigger_vblank()` for per-instruction tracking
- Added explicit check after runner NMI push in main_runner.c
- 730 S changes tracked in frame 566
- All individual changes are small (+/-1 to +/-3), no single large TXS jump
- **func_D076 (misaligned function) is NOT the cause** — never called
- S starts at 0xFF, drifts through operations, ends at 0x01 (+3 wrapping via entry 729)
- Entry 729 stack: `func_C0CB<func_EB0C<func_EB06<...<func_C0D9<func_EF13<func_EF8C`
  — inside the NMI handler chain, suggesting nested VBlank involvement
- The $1E=0x03 dispatch path is: func_C114 → func_C92B (loop) → calls func_E1F1,
  func_CB29, func_F59A, func_F351, func_F282, func_DE4A, func_B36D_b1, etc.
- NMI handler (func_C0D9) RTI at $C113 correctly pops 3+4=7 bytes (balanced)
- Cumulative drift of +13 across 730 changes indicates systematic small leaks

**Disproved leads:**
- func_D076 misaligned TXS — never called during $1E=0x03 transition
- func_F282 BCS $F281 "branch to RTS" — individually balanced (+2/-2)
- Single large TXS instruction — none fired; corruption is accumulated drift

**Active investigation:**
- The call chain func_C92B → func_E1F1 → various subfunctions contains
  multiple JSR/RTS pairs that should each be balanced. Something is leaking
  +2 per iteration of the C92B loop. Need to identify which specific
  function leaks S by +2 (RTS pops without matching push).
- Nested NMI behavior may also contribute — the NMI handler chain runs
  long enough to trigger additional VBlanks, which push/pop the interrupt frame.

**Previous fix attempt (FAILED):** Adding `g_cpu.S = _cbs` to cond_bail_func
codegen in code_generator.c line 685. Made S oscillate wildly. Reverted.

**Tooling added to runner:**
- `watch_s` TCP command: enables per-instruction S tracking with frame range filter
- `watch_s_history` TCP command: retrieves S change log with call stacks and offset paging
- `debug_server_check_s()`: lightweight S change detector callable from any context

---

## ACTIVE: Crash when scrolling right

**Priority:** High — likely cascade from S corruption above

**Symptom:** Walking Samus to the right (scrolling the screen) causes a crash
or hang. The entropy test script reproduces this — the `HOLD RIGHT / WAIT 300`
section triggers it.

**Investigation needed:** S is corrupted by ~254 bytes when gameplay starts.
This corrupts stack-relative reads in scroll/column loading code. Will likely
resolve when the $1E=0x03 S corruption is fixed.

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
