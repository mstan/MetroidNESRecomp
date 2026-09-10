# Metroid (NESRecomp) — USA widescreen preview (unreleased)

Adaptive widescreen adds Fit, 16:9, 21:9 and 32:9 with square pixels and a
choice of HUD placement. The custom renderer uses complete logical room data
until PPU columns/rows finish streaming. Loaded enemies remain visible in the
wider area and retire when their room storage is reused, preserving new-room
spawn slots. Additional rooms can appear as terrain previews.

This is a local preview, not a full-game compatibility claim. See
[WIDESCREEN.md](WIDESCREEN.md) for validation, known Mesen/savestate issues and
the pending engine integration. EU builds remain deferred.

## Password save system (v0.1.0)

A native PC build of Metroid, statically recompiled from the NES ROM's 6502 code
to C with the [NESRecomp](https://github.com/mstan/nesrecomp) framework. No ROM is
included — select your own legally-obtained **Metroid (USA)** ROM on first launch
(file CRC32 `A2C89CB9`, headerless PRG+CHR CRC32 `70080810`). The build checks the
ROM and will refuse anything else, including **Metroid (Europe)** (`7751588D`),
which is a different program: it differs from the USA ROM in every PRG bank, so
the recompiled code in this build does not describe it.

## Headline: password save system (synthetic SRAM)

Metroid saves with a 24-character password, not battery SRAM. This build gives it
the same save UX as a battery game:

- **Save-anywhere capture** — as you play, the game's own password encoder is run
  to produce a valid password for your current progress, saved to `metroid.srm`
  next to the exe (plus a timestamped history in `metroid_password_log.txt` so you
  can roll back to an earlier point).
- **Auto-prefill** — on the "PASS WORD PLEASE" screen, your saved password is typed
  in for you; just press Start to resume. No more copying 24 characters by hand.
- **Launcher SAVE panel** — the pre-boot launcher shows your current password and
  lets you edit it (or paste an older one, with a confirm step).

The captured/edited password is a real Metroid password (correct checksum), so it
round-trips through the game's own decode.

## Also in this release

- **Fix: out-of-band capture is stack-balanced.** The save-anywhere capture calls
  the game's encoder out-of-band; it now snapshots/restores the full CPU + stack so
  it can never perturb live state. (An earlier in-development version leaked stack
  corruption → garbled health, a stray "TIME" display, eventual lockup — fixed.)
- **Regression tests** (`tests/password.test.ts`) that pin the capture as
  side-effect-free and deterministic.
- Rolled the `nesrecomp` framework pin forward to pick up the shared `save_ram`
  backend + launcher password panel.
- **Re-targeted at Metroid (USA).** Earlier in-development builds were recompiled
  from the European ROM while claiming to be USA. The symbol table, `game.toml`
  hints and CRC gate are now all derived from the USA ROM (m1disasm's `NES_NTSC`
  target); a European ROM is rejected up front instead of silently mismatching.
  A copy of the EU ROM is kept in the source tree as `metroid-eu.nes` so an EU
  variant of the port can be generated later with `tools/migrate_hints.py`.

## Controls

Arrow keys = D-Pad, `Z` = A, `X` = B, `Enter` = Start, `Tab` = Select.
`F5` turbo, `F6` save state, `F7` load state. Gamepads supported; all bindings are
configurable in `keybinds.ini`.

## Notes

This is an early (pre-1.0) recompilation and a work in progress; some gameplay/
hardware behaviors may still differ from original hardware.
