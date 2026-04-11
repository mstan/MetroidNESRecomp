# MetroidNESRecomp

A static recompilation of Metroid (NES) using [nesrecomp](https://github.com/mstan/nesrecomp). The original 6502 machine code is translated to C at build time, then compiled to native x64 for direct execution on modern PCs.

**This is NOT an emulator.** The game logic runs as native compiled code. NES hardware (PPU, APU, mapper) is simulated by the runner library.

**You must supply your own Metroid ROM.** No copyrighted game data is included in this repository.

## Status

**v0.0.1** - Early foundation release.

### What works

- Boot to title screen, start game
- Spawn in Brinstar starting area
- Walk, jump, shoot, crouch
- Pick up Morph Ball power-up
- Enemy spawning and combat
- Death, Game Over, password screen, and restart cycle (stable across unlimited cycles)
- Long runtime stability (tested 115,000+ frames with no crashes)

### What doesn't work (yet)

- Many areas beyond the starting region are likely missing dispatch table entries, causing enemies, doors, or items to silently not function
- No accuracy validation against emulator oracle has been performed - gameplay may have subtle behavioral differences
- Some bank-switched code paths may not be discovered by the recompiler's static analysis

This is a foundation for future work. The recompiler and runner are under active development. Each new area explored may require additional `extra_func` entries in `game.toml` or fixes in nesrecomp itself.

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

This clones [nesrecomp](https://github.com/mstan/nesrecomp) at the exact
version pinned in `nesrecomp.pin` and links the Nestopia oracle core.

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

The recompiler framework (nesrecomp submodule) and all game-specific code in this repository are provided as-is for educational and research purposes. No game ROM data is included. You must supply your own legally obtained copy of Metroid (NES).
