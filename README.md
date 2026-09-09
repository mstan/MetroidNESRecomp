# MetroidNESRecomp

> _This recompilation is a **byproduct of developing
> [nesrecomp](https://github.com/mstan/nesrecomp)** — the games are the proving ground, the framework is the goal.
> **These are in-development previews, not finished ports — expect rough
> edges**, and depth will keep landing over months, not days. My time for any
> one title is limited, so I ask for your patience. Contributions are welcome —
> testing, issues, and PRs to the game or framework all help and will
> accelerate this game's polish. More on the why at:
> [Recomp + AI: 5 Months Later »](https://1379.tech/recomp-ai-5-months-later/)_

A static recompilation of Metroid (NES) using [nesrecomp](https://github.com/mstan/nesrecomp). The original 6502 machine code is translated to C at build time, then compiled to native x64 for direct execution on modern PCs.

**This is NOT an emulator.** The game logic runs as native compiled code. NES hardware (PPU, APU, mapper) is simulated by the runner library.

**You must supply your own Metroid ROM.** No copyrighted game data is included in this repository.

## Status

**v0.0.1** - Early foundation release.

### What works

- Boot to title screen, start game
- Spawn into the starting area
- Walk, jump, shoot
- Pick up Morph Ball power-up
- Enemy spawning and combat
- Death, Game Over, password screen, and restart cycle (stable across unlimited cycles)
- Long runtime stability (tested 115,000+ frames with no crashes)

### What doesn't work (yet)

- Many areas beyond the starting region are likely missing dispatch table entries, causing enemies, doors, or items to silently not function
- No accuracy validation against emulator oracle has been performed - gameplay may have subtle behavioral differences
- Some bank-switched code paths may not be discovered by the recompiler's static analysis

This is a foundation for future work. The recompiler and runner are under active development. Each new area explored may require additional `extra_func` entries in `game.toml` or fixes in nesrecomp itself.

## Experimental Voxel 3D (first person)

Open **Mods** in the launcher and enable **Voxel 3D (first person)**. The
bundled feature is disabled by default and targets the verified US ROM. It
does not patch the ROM or alter password data.

The camera follows Samus's live screen position; Right and Left directly own
its horizontal heading, and holding Up smoothly raises the view toward the
near-vertical shot path. The lens opens during that upward aim so overhead
enemies and Samus's pellets remain visible. The room plane is reconstructed
upright so horizontal movement remains forward/back instead of looking
sideways. Only Samus's reserved OAM card is hidden; projectiles, enemies,
doors, pickups, architecture, and shadows remain visible. The full room is
voxelized behind a HUD-only overlay. The fixed Energy OAM band is excluded
from world geometry and only the `EN-##` glyph footprint is restored in
screen space, so no flat top strip or room pixels leak into the HUD.

Numpad 8/2 adjusts look pitch, 4/6 offsets yaw from Samus's facing direction,
7/9 rolls the camera, numpad or regular +/- adjusts field of view, and 1/3
changes sprite scale.
Numpad 0 toggles the live view and Numpad 5 restores package defaults.

The earlier room-diorama package remains archived under `mods/hidden` for
development reference but is intentionally not shown in release launchers.

## Building

### Prerequisites

- Windows 10/11
- Visual Studio 2022 Build Tools (or full VS 2022)
- CMake 3.20+
- A Metroid (NES) ROM (US version, CRC32: `A2C89CB9`)

### Steps

```bash
git clone https://github.com/mstan/MetroidNESRecomp.git
cd MetroidNESRecomp

# Windows
setup.bat

# Linux / macOS
chmod +x setup.sh && ./setup.sh
```

This initializes the pinned [nesrecomp](https://github.com/mstan/nesrecomp)
submodule and links the Nestopia oracle core.

The generated C files in `generated/` are checked into the repo, so you can
go straight to building the game:

```bash
cmake -S . -B build -G "Visual Studio 17 2022" -A x64
cmake --build build --config Release
```

To regenerate from ROM (optional):

```bash
# Build the recompiler (only needed once, or when nesrecomp changes)
cmake -S nesrecomp/recompiler -B nesrecomp/build/recompiler -G "Visual Studio 17 2022" -A x64
cmake --build nesrecomp/build/recompiler --config Release

# Generate recompiled C code from your ROM
nesrecomp/build/recompiler/Release/NESRecomp.exe "path/to/Metroid.nes" --game game.toml

# Rebuild the game
cmake --build build --config Release
```

## Project Structure

| File | Purpose |
|------|---------|
| `game.toml` | Recompiler configuration (dispatch hints, data regions, extra functions) |
| `extras.c` | Game-specific runner hooks (frame callbacks, dispatch overrides) |
| `recomp_stack.h/c` | Recompiled function call stack tracking |
| `watchdog.h/c` | Frame timeout detection |
| `generated/metroid_full.c` | Auto-generated recompiled game code (do not edit) |
| `generated/metroid_dispatch.c` | Auto-generated dispatch table (do not edit) |
| `nesrecomp/` | Recompiler + runner framework (git submodule) |

## How It Works

The nesrecomp recompiler statically analyzes the ROM, discovers functions via BFS from the NMI/RESET/IRQ vectors, and translates each 6502 instruction to equivalent C code. JSR becomes a direct C function call, branches become gotos, and the 6502 stack is maintained as real RAM at `g_ram[0x100+S]`.

Metroid uses the MMC1 mapper with 8 PRG banks. Bank 7 is fixed (always mapped at $C000-$FFFF) and contains the main game loop, NMI handler, and core routines. Banks 0-6 are switchable and contain area-specific code. The recompiler handles bank switching via `call_by_address()` runtime dispatch.

## License

PolyForm Noncommercial 1.0.0 — see [`LICENSE`](LICENSE). The `nesrecomp`
framework submodule and any other third-party components are licensed
separately in their own repositories.

No game ROM data is included. You must supply your own legally obtained copy of
Metroid (NES).

---

<p align="center">
  <sub><b>R.A.I.D. — Retro AI Development</b> · a Discord for AI-assisted retro reverse-engineering, decomp &amp; recomp</sub>
</p>

<p align="center">
  <a href="https://discord.gg/Ad9BwSzctP"><img src=".github/raid-discord.png" alt="Join the Retro AI Development (R.A.I.D.) Discord" width="200"></a>
</p>
