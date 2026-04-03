# Known Issues

## RESOLVED: Camera offset left on Brinstar spawn

**Status:** Fixed (commit e6c07c3)

Fixed by blocking $FD wrap during init via scroll_guard_callback in extras.c.
See git history for the full investigation trail.

## RESOLVED: Tile garbling at gameplay load-in

**Status:** Fixed (commits 2edf857, b7be890)

**Root cause:** func_C376 uses `PLA PLA + RTS` — a 6502 non-local return pattern
that bails out two call levels. The recompiler treated PLA as a simple stack memory
operation and `return` only went back one C function level. The caller continued
executing past the PPU command buffer's `$00` terminator, writing garbage PPU
addresses ($FFFF) that wrapped into CHR RAM space.

**Fix:** Added `stack_bail_func C376` to game.cfg. The recompiler emits `return;`
after every JSR $C376 call site, matching the real 6502 behavior.

**Also fixed in this session:**
- Deferred NMI model: NMI at depth > 0 defers to backward branch points (loop
  boundaries) instead of firing inline mid-instruction. Prevents NMI from firing
  during bank switches where $9560 table reads would hit wrong ROM data.
- Merged $2005/$2006 write toggle into single latch matching real NES "w" register.
- Nestopia VRAM bridge: CHR RAM, nametable, palette, OAM now synced from Nestopia
  internals for oracle comparison in emulated mode.

---

## ACTIVE: Dispatch misses ($B809, $B5BA in bank 1)

**Priority:** High — quick fix, likely unblocks enemies and other gameplay

**Symptom:** Repeated dispatch miss log spam starting around frame 559:
```
[Dispatch] MISS: no func for $B809 bank=1
[Dispatch] MISS: no func for $B5BA bank=1
```

These are functions in bank 1 that the recompiler's static analysis didn't discover.
They're called via computed dispatch (likely the inline_dispatch pattern) during
gameplay.

**Fix:** Add `extra_func 1 B809` and `extra_func 1 B5BA` to game.cfg, regenerate,
rebuild. May need Ghidra to verify these are real function entry points.

**Likely downstream effects:** Enemy AI, object spawning, gameplay logic not running.

---

## ACTIVE: Stack pointer leak

**Priority:** High — causes progressive corruption

**Symptom:** The 6502 stack pointer (g_cpu.S) drifts upward each frame:
```
Frame 200: S=$02
Frame 322: S=$02
Frame 688: S=$3B
Frame 809: S=$47
Frame 930: S=$51
Frame 1052: S=$5F
```

Something is pushing bytes onto the stack without popping them, or a JSR/RTS
mismatch is leaking stack entries. After enough frames, S wraps and corrupts
game state stored in the stack page ($0100-$01FF).

**Investigation needed:** Compare 6502 stack depth per frame between native and
emulated. Use TCP follow on S or track stack depth at NMI entry/exit.

---

## ACTIVE: Samus head missing

**Priority:** Medium

**Symptom:** Samus's body and legs render correctly but her head/helmet is missing.
Could be a sprite rendering issue (wrong CHR offset for sprite pattern table), an
OAM issue, or downstream of the dispatch misses preventing full sprite setup.

**Investigation needed:** Compare OAM data between native and emulated. Check if
the sprite pattern table base (PPUCTRL bit 3) is correct.

---

## ACTIVE: Enemies missing / flicker for one frame

**Priority:** Medium — likely caused by dispatch misses

**Symptom:** Enemies don't appear or flash briefly for a single frame then vanish.
This is consistent with enemy AI functions ($B809, $B5BA) not being compiled —
enemies spawn but their update code is a no-op, so they disappear on the next frame.

**Fix:** Likely resolves when dispatch misses are fixed.

---

## ACTIVE: TIME label on HUD

**Priority:** Low

**Symptom:** "TIME" text appears on the HUD where it shouldn't. Metroid doesn't
have a timer display in normal gameplay. This may be a nametable corruption issue
or a PPU transfer writing HUD data to the wrong location.

**Not investigated.**

---

## ACTIVE: Watchdog stuck in func_EF8C

**Priority:** Medium

**Symptom:** Watchdog fires every ~120 frames, always stuck in the same call stack:
```
func_EF8C < func_C43D < func_C45D < func_C531 < func_C510 < func_C4DE
```

func_EF8C is in the column/nametable rendering path. It calls func_C43D (wait for
NMI) and the wait takes longer than the 2-second watchdog timeout. The forced VBlank
trigger recovers, but this indicates the NMI timing is still not fully correct for
nested NMI scenarios.

**Investigation needed:** Check why the deferred NMI takes so long to fire during
func_EF8C's wait. May be related to the cycle counting or the pending flag not
being checked frequently enough.

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
| `func_EF8C` | Nametable renderer |
| `func_8AC7` | Palette update (bank 0 only) |
