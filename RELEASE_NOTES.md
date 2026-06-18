# Metroid (NESRecomp) v0.1.0 — Password Save System

A native PC build of Metroid, statically recompiled from the NES ROM's 6502 code
to C with the [NESRecomp](https://github.com/mstan/nesrecomp) framework. No ROM is
included — select your own legally-obtained Metroid (USA) ROM on first launch.

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

## Controls

Arrow keys = D-Pad, `Z` = A, `X` = B, `Enter` = Start, `Tab` = Select.
`F5` turbo, `F6` save state, `F7` load state. Gamepads supported; all bindings are
configurable in `keybinds.ini`.

## Notes

This is an early (pre-1.0) recompilation and a work in progress; some gameplay/
hardware behaviors may still differ from original hardware.
