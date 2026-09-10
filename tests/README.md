# Tests

```bash
cd tests
npm install          # once
npx vitest run       # everything
npx vitest run password.test.ts
```

`test.config.json` pins `romSha256` to the SHA-256 of the **Metroid (USA)** ROM
body (the file minus its 16-byte iNES header), which is how `findRom()` picks
`metroid.nes` out of the repo root and ignores `metroid-eu.nes`. If you retarget
the repo at another ROM revision, update that hash too.

## The password tests need a debug-server build

`password.test.ts` drives the running game over the TCP debug server (`pause`,
`get_registers`, `read_ram`, `write_ram`, `pw_now`). That server only exists when
the runner is built with `-DNESRECOMP_ENABLE_TRACE=ON`; a production build
compiles `debug_server_stub.c` instead, opens no port, and the test fails in
`beforeAll` with *"debug server never came up"*.

`build_release/` is the **release** tree (`tools/make_release.ps1` ships it), so it
stays production. Build a separate trace tree and point the tests at it with
`NESRECOMP_TEST_EXE`:

```powershell
# VS dev shell, VS-bundled cmake + ninja (see build_all.bat for the PATH scrub)
cmake -S . -B build_trace -G Ninja -DCMAKE_BUILD_TYPE=Release `
      -DCMAKE_C_COMPILER=cl -DCMAKE_CXX_COMPILER=cl -DNESRECOMP_ENABLE_TRACE=ON
cmake --build build_trace

cd tests
$env:NESRECOMP_TEST_EXE = "build_trace\MetroidNESRecomp.exe" # relative to repo root
npx vitest run password.test.ts
```

Without `NESRECOMP_TEST_EXE` the tests keep their old behaviour: `build_release/`
first, then `build/Release/`.

## Widescreen routes

Run from the repository root with Windows Python:

```powershell
python tests\widescreen_probe.py --exe build_trace\MetroidNESRecomp.exe `
  --rom metroid.nes --out build\ws_32_9 --aspect 32:9 --protect-player --extended
python tests\widescreen_probe.py --exe build_trace\MetroidNESRecomp.exe `
  --rom metroid.nes --out build\ws_shaft --aspect 32:9 --protect-player --shaft
python tests\widescreen_probe.py --exe build_trace\MetroidNESRecomp.exe `
  --rom metroid.nes --out build\ws_fit --aspect fit --window --protect-player
```

Use a fresh output directory. The probe copies the executable/SDL2 there and
owns only that process; logs, saves, RAM and PNG captures stay there. Routes run
sequentially on TCP port 5396. `--protect-player` is an explicit renderer fixture
writing the invincibility/knockback bytes; `--shaft` also grants bombs/Morph Ball.
Omit these flags for unmodified-player exploration. `--extended` checks a short
save/load screenshot replay. `--window` tests live Fit resizing during normal
execution. See [WIDESCREEN.md](../WIDESCREEN.md) for coverage and limitations.

Use the trace build's `ws_stats` command for full renderer counters, room
bindings, row/column masks and decoder mismatch location/bytes. The frame-record
ring buffer also stores summary bytes at `game_data[16..31]`, but the current
engine TCP serializer only returns `[0..15]`; do not use it to read these stats.

To regress room-loading flicker, run `widescreen_fallback_probe.py` with the same
`--exe`, `--rom`, `--out` and `--aspect` arguments. Its fresh-game route collects
Morph Ball, asserts no in-room fallback, and verifies a save/load screenshot
replay while room construction is incomplete. The fresh route uses player
protection but grants no gear. Add `--state <path>` to check an existing save
through 121 idle frames without modifying that file or player RAM.

For misplaced Brinstar crawlers with the PC actor options, use current v7
horizontal-room states with the focused coordinate regression:

```powershell
python tests\widescreen_actor_probe.py --exe build_trace\MetroidNESRecomp.exe `
  --rom metroid.nes --state path\to\morph-ball.sav --state path\to\shaft.sav `
  --out build\ws_actor_coordinates
```

It checks captured crawler tiles against actor world positions, including tiles
outside the viewport. The original 32:9 sidecar wrap bug failed this check with
16 misplaced tiles in the F2 fixture; the corrected build passes both fixtures.
The binary-state reader intentionally follows the current build only. This
checks placement, not full enemy behavior or every object type.

`widescreen_ripper_probe.py --exe <trace-exe> --rom metroid.nes --state <F4.sav>
--out <fresh-directory>` compares the visible Brinstar Ripper's sprite entries
and pixels against stock across four samples, with expanded sprites alone and
all PC options. It requires Pillow. This catches enemy slot zero falling through
the update/draw entry hooks and disappearing from the expanded sprite packet.

`widescreen_doors_probe.py --exe <trace-exe> --rom metroid.nes --state-left
<F3.sav> --out <fresh-directory>` checks both blue bubbles at the Brinstar shaft,
the full opening and closing animation, and exact save/load replay. Add
`--state-right <just-exited-shaft-door.sav>` to shoot from the opposite side and
`--reference-exe <before-paired-doors.exe>` to compare gameplay RAM/SRAM. The
route explicitly protects Samus from enemy damage and fires a real shot. It
shortens the open door's re-close timer for the closing test; animation state
and timing run through the original game routines.

`widescreen_pickups_probe.py --exe <trace-exe> --rom metroid.nes --out
<fresh-directory>` starts a new game, checks Morph Ball in the left margin on
every frame of its handoff to the native pickup, and collects it normally.
A final renderer fixture restores the opening camera with the inventory and
history earned during that route: the collected item must stay absent while
its room is unloaded. Add `--reference-exe <before-pickup-previews.exe>` for
RAM/SRAM parity. The collection route uses player protection.
