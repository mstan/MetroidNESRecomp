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

`widescreen_options_probe.py --exe <trace-exe> --rom metroid.nes --out
<fresh-directory>` installs the bundled package in isolated runs and exercises
all eight actor/sprite/timing combinations through persisted mod settings. It
compares gameplay RAM, screenshots and renderer counters with each CLI
equivalent after starting and walking in a fresh game. It also checks original
defaults, disabled features with saved enhancement choices, omitted choices,
and CLI rejection/reset behavior. This verifies mod activation and option
independence on the opening route, not full-game behavior.

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

`widescreen_rio_probe.py --exe <trace-exe> --rom metroid.nes --state <F3.sav>
--out <fresh-directory>` follows the Brinstar Rio from cell (9,14) through its
approach and adoption into a native slot, asserting that it stays at its ceiling
spawn until Samus is close. Boundary and full-flight fixtures then hold Samus
still in that room; enemy state and terrain are unchanged. All five sprite tiles
are checked through the dive and return. Add `--nesref <nesref.exe> --core
<mesen_libretro.dll>` to execute the unchanged ROM proximity routine in Mesen
against 14 boundary cases. Add `--clocked` to retain original world timing.
The missing Rio function seed bypassed drawing hooks; circular guest coordinates
also caused premature dives while Samus was several rooms away.

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

## Save/load crash and intermittent stalls

`metroid_resume_probe.py --exe <trace-exe> --rom metroid.nes --out
<fresh-directory>` walks right from a new game and then uses ordinary jump/fire
inputs near the ledge. It repeats 1,200 frames after restoring the spawn save,
comparing RAM and screenshots every 150 frames. It checks stock and all PC
widescreen options without changing player RAM. The old interpreter watchdog
terminated a healthy continuation after a few hundred restored frames.

Slow host phases (100 ms or longer) buffer up to 64 records per process, then
append them to `metroid_stalls.jsonl` next to the executable on normal exit.
The phase distinguishes password encoding/submission, world/actor updates,
widescreen rendering and debug snapshots. Records include
the frame, map cell, guest continuation and interpreter watchdog count. Input
pauses and frame pacing are outside these spans. Set `METROID_STALL_TRACE=1`
for 8 ms phase timing and gaps of at least 25 ms between rendering and the next
game callback (including frame pacing), capped at 2,048 records. Debug input
waits and save-state frame jumps are excluded. Close the game normally to flush
the buffered evidence; no file is created without an event.

Fallback telemetry is now explicitly opt-in: set `NESRECOMP_FALLBACK_LOG` to
an output path to collect it. Its synchronous writes can themselves cause
stutters, so leave it unset for normal gameplay and timing measurements.
`metroid_resume_probe.py` explicitly enables it to check interpreter counters.
Also retain `runtime_faults.log` and launch stdout/stderr after a crash.

`watchdog_diagnostics_test.c` links with `watchdog.c` and SDL2. In separate fresh
directories, run with the trace variable unset and then set to `1`. It verifies
that synthetic slow phases create no file during gameplay or mutate guest
state; after exit the JSON should contain 64 and 2,048 records respectively.

Password persistence/history now use one file-writer thread. Only copied text
and its capture timestamp leave the game thread; encoding still runs against
the original guest snapshot. Normal exit drains queued writes. If a disk stalls
long enough to fill the 16-entry queue, the newest pending entry is replaced
with the latest progress. Write errors trigger a retry on a later capture.

`password_writer_test.c` links with `password_writer.c` and SDL2. It blocks the
writer callback while submitting captures, then checks nonblocking submission,
copied inputs/timestamps, overflow policy, shutdown drain and the retry latch.
