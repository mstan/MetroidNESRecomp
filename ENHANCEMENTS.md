# Metroid Recomp — Enhancements

Player-facing features layered on top of the base recompilation. Each is
implemented game-side (in `extras.c` + `CMakeLists.txt`) with no hand-edits to
generated code, mirroring the FaxanaduRecomp synthetic-SRAM pattern.

---

## Synthetic SRAM: password save system

Metroid has **no battery SRAM** — progress is preserved via a 24-character
password. This enhancement gives Metroid the same save UX as a battery game:

- **Save-anywhere capture** — every ~15 s of real gameplay the game's *own*
  password encoder is run to produce a valid password for the current progress,
  which is persisted to disk.
- **Persisted to disk** — `metroid.srm` (a one-line text file next to the exe),
  the same file the launcher reads/writes.
- **History log** — every distinct captured password is appended, timestamped,
  to `metroid_password_log.txt`, so you can "go back in time" to any earlier
  state by re-entering an older password.
- **Launcher display/edit** — the launcher's SAVES panel shows the last password
  (read-only) with an edit→confirm flow, via the framework's generic
  password-save UI (`NESRECOMP_GAME_PASSWORD_SAVE`).
- **Auto-prefill** — on the "PASS WORD PLEASE" entry screen the saved password is
  injected automatically, so the player never has to type it.

The captured/edited password is a *real* Metroid password (correct checksum), so
it round-trips through the game's own decode (no "ERROR TRY AGAIN").

### Implementation (status: implemented & validated 2026-06-17)

All in `extras.c` + the launcher define in `CMakeLists.txt`; no generated-code edits.
Requires nesrecomp ≥ the password-save framework — Metroid's `nesrecomp.pin` was
rolled forward a29337e → 068cfcf for this (save_ram backend + launcher panel).

- **Capture** (`password_capture_tick`, from `game_post_nmi`): every ~5 s, when in
  gameplay (`$1D==0`; it is `1` on title/menu/entry), call the game's encoder
  `func_8C7A_b0()` out-of-band — bracketed by `runtime_begin/end_post_nmi()` and
  with zero-page (`$0000-$00FF`) + WRAM scratch (`$6886-$69B1`) snapshotted/restored
  so the live game is untouched. Read the 24 codes at `g_sram[0x099A+i]` (`$699A`),
  map to glyphs, persist to `metroid.srm` + append to `metroid_password_log.txt`.
  Skips the blank (all-`0`) no-progress state and dedups on the string.
  A fixed obfuscation shift is forced (`$002E=0` → shift 9) so identical progress
  yields the identical password (stable saves/dedup; any shift 1-15 is valid).
- **Prefill** (`password_prefill_tick`, from `game_on_frame`): on the entry screen
  (`$1D==1 && $1F==0x18`), drive the game's own entry path — set the grid cursor
  (`$0321=code/13`, `$0322=code%13`) and press A per char, synced to the display
  position `$0320` so a dropped/early press self-corrects. The game renders each
  glyph, so the password appears typed-in; the player presses START to confirm.
- **Launcher** (`CMakeLists.txt`): `NESRECOMP_GAME_PASSWORD_SAVE="metroid.srm"` +
  `..._LABEL="Password"` → the framework's SAVES panel shows/edits the password
  (read-only display + Edit → confirm → rewrites `metroid.srm`).
- **Dev flags**: `--password STRING` (override prefill), `--no-password-capture`.
  Debug TCP cmd `pw_now` returns the current-progress password (ignores the gate).

WRAM offset reminder: `$NNNN` in `$6000-$7FFF` is `g_sram[$NNNN - $6000]` (e.g.
`$699A → 0x099A`). An early bug used `0x199A` (= `$799A`) and read an empty region.

---

## Reverse-engineering reference: Metroid password engine

Mapped empirically (live game over the TCP debug server) + Ghidra (banks 0/7).
The entry screen + engine live in **bank 0** (swappable, `$8000-$BFFF` window);
the password buffer is in **WRAM `$6000-$7FFF`** (so read via `g_sram`, offset =
addr − `$6000`). The fixed bank is 7 (`$C000-$FFFF`; NMI `$C0D9`, RESET `$FFB0`).

### Character codec
Password char code = **linear alphabet index 0-63**:

| Code | Chars |
|------|-------|
| `0x00-0x09` | `0`-`9` |
| `0x0A-0x23` | `A`-`Z` |
| `0x24-0x3D` | `a`-`z` |
| `0x3E` / `0x3F` | `?` / `-` |
| `0xFF` | empty slot |

Palette grid is 5 rows × 13 cols in that order.

### Format (24 chars → 18-byte payload)
```
24 codes @ $699A ──6-bit MSB-first pack (4 codes → 3 bytes)──> 18 bytes @ $6988
  $6988[0..15] = game state (obfuscated by a rotate)
  $6998        = shift amount (random 1-15 at encode time)
  $6999        = checksum = sum($6988[0..16]) & 0xFF
```
- Obfuscation: the 16 state bytes are **circularly rotated** by `$6998` bits
  (encode rotates one way, decode `FUN_8e4e` rotates back).
- 16-byte table at **`$8E07`** = the hardcoded cheat code (NARPAS-type →
  invincibility flag `$69b3`/`$69b2`).
- The 16 state bytes encode 59 "world" bits (missable items/doors, via a 16-bit
  table at `$9029`) + items/equipment (`$6878-$687c`) + stats `$687d-$6880`
  (missiles/energy/…) + region `$0074` + flags.

### Key routines (bank 0 unless noted)
| Addr / symbol | Role |
|---|---|
| `func_911A` | password-entry screen **init** (zeros `$0320` pos, `$0321` row, `$0322` col, `$0324`) |
| `func_9147` (PasswordScreenTick) | per-frame entry handler: d-pad nav (`$0016` low nibble), A enters code → `$699A[$0320]`, B backspaces, **START → `func_8c5e`** |
| `func_8c5e` | **confirm/decode**: unpack → validate → carry-clear ⇒ `func_92d4` ("ERROR TRY AGAIN"), carry-set ⇒ start game (`$1F=0x18`) |
| `func_8f60` | unpack 24 codes → 18 bytes |
| `func_8dde` | validate: cheat-table check vs `$8E07`, else de-rotate + checksum |
| `func_8e4e` | decode de-obfuscate (circular left-rotate by `$6998`) |
| `func_8e21` | checksum = sum(`$6988[0..16]`) |
| `func_8bd4` / `func_8c39` | decode-**apply**: walk 59 payload bits → build world via `$9029` table |
| **`func_8C7A_b0`** | **password ENCODER (the keystone)** — see below |
| `func_8e17` / `func_8e2d` | encode checksum + obfuscate-rotate |
| `func_8e6c` | encode pack: 18 bytes → 24 codes @ `$699A` |
| `func_c000` (bank 7) | RNG step (adds to `$002E`/`$002F` only) |

### The encoder — `func_8C7A_b0`
Self-contained generator (already emitted as a callable C function; called in-game
from `$936A`/`$9B45`). Does the whole job:
1. serialize live state → `$6988[0..16]` (items `$6878-$687c`, stats `$687d-$6880`,
   region `$0074`, flag `$69b3`, 59 world bits via `FUN_8b79`/`$9029`);
2. random shift `$6998 = $002e & 0xf` (1-15) via `func_c000`;
3. checksum (`func_8e17`) + obfuscate-rotate (`func_8e2d`);
4. pack → **24 codes at `$699A-$69B1`** (`func_8e6c`).

**Out-of-band call (save-anywhere capture):** bracket with
`runtime_begin_post_nmi()` / `runtime_end_post_nmi()` (no NMI re-entrancy), call
`func_8C7A_b0()`, read the 24 codes at `g_sram[0x199A + i]`, map to glyphs. Make it
side-effect-free by snapshotting **zero page (`$0000-$00FF`)** + **WRAM
`$6886-$69B1`** before the call and restoring after (the encoder only clobbers those
+ the RNG `$002E/$002F`, which the ZP snapshot covers).

### Entry-screen RAM (for prefill)
- `$699A[0..23]` = entered codes (in WRAM → `g_sram[0x199A+i]`).
- `$0320` = display position (0-23), `$0321` = grid cursor row, `$0322` = col.
- Gameplay gate for capture: `$1D` (GameEnable) == 1 means active play.

### Debug/build notes
- Native build applies TCP input override; emulated mode only takes `--script`.
- Menu nav: title → START → **SELECT toggles** START/CONTINUE → CONTINUE+START →
  password screen.
- Build via the project build script (vcvarsall + VS-bundled cmake/ninja).
