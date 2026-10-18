# Cycle CPU migration

The default CMake backend is `cycle`. Separate `METROID_VARIANT=usa` and
`METROID_VARIANT=europe` builds use the USA and European ROM respectively.
Europe uses PAL CPU, PPU and APU timing. Each executable checks its own ROM
identity; a USA executable cannot run the European ROM.

```powershell
cmake -S . -B build-cycle-usa -DMETROID_VARIANT=usa -DNESRECOMP_ROM=F:/ROMs/metroid.nes
cmake --build build-cycle-usa --config Release
cmake -S . -B build-cycle-europe -DMETROID_VARIANT=europe -DNESRECOMP_ROM=F:/ROMs/metroid-eu.nes
cmake --build build-cycle-europe --config Release
```

Keep separate build and release directories for the regions. `mods/` packages
are staged with the selected region's CRC. Widescreen and first-person voxel
packages remain disabled by default. The earlier diorama experiment stays
parked. Developer flags include `--widescreen 32:9`,
`--widescreen-pc actors,sprites,smooth` and `--voxel-first-person`.

The function-level backend remains available with
`-DNESRECOMP_BACKEND=legacy`; it uses the checked-in USA generated sources and
the original `game.toml`. Cycle builds generate their own code during the
build and use `game-cycle-usa.toml` or `game-cycle-europe.toml`. Coverage seeds
improve native coverage; undiscovered instructions run on the cycle
interpreter, including later areas absent from the profiling route.

## Feature ports

Passwords use the original guest encoder in a fully restored isolated scope.
The existing asynchronous writer keeps `metroid.srm` and timestamped
`metroid_password_log.txt` beside the executable. Existing password text and
launcher editing remain compatible. Prefill drives the original input and
entry routines. `--no-save` suppresses sidecar loading and all automatic or
explicit persistence; an explicit `--password` still works.

Widescreen keeps the world decoder and visibility policy. Frame composition
uses displayed OAM and the scroll that the cycle PPU actually used. OAM X
sidecars and actor packets publish at NMI so a later CPU update cannot move
sprites in an earlier picture. HUD slots use displayed OAM coordinates.

Viewport actors execute the original guest routines through the cycle
backend in isolated scopes. Ordinary world, spawn and draw routines retain
their bus activity; return observers finish the host bookkeeping after the
guest RTS. Optional reduced slowdown uses a memory-only committed world
update. The commit refuses device-register stores. Expanded sprite packets,
pending returns and actor transients are part of cycle save states, with
preflight validation before any machine mutation.

First-person voxel rendering uses a presentation adapter for the cycle
machine's RAM, displayed OAM, mapped CHR and palette. It links no legacy CPU
runtime. Existing keypad controls, regular +/- and controller free look use
window gameplay events. Camera keys are blocked in the host menu; controller
removal clears held look input. Existing camera bindings can be read without
creating a legacy settings file.

## Validation and limits

The USA and Europe builds each passed a real 1,800-frame start-and-corridor
route. Stock native, game interpreter and standalone cycle interpreter
machine hashes matched exactly. Widescreen, actors, sprites, smooth, their
individual pairs and the combined mode matched between native and interpreter
in both machine hashes and final presentation.

Loading frame 899 in a fresh process reproduced frames 900 through 1799, the
final whole save state and the final widescreen picture for stock and every
tested enhancement mode, in both regions. Password capture preserved whole
machine state; saved passwords prefilled on restart and were accepted by the
ROM. Autosave preserved machine hashes. A controlled offloaded-enemy contact
regression confirms damage and invincibility survive scope restoration, with
identical native/interpreter results in both regions. The voxel path matched
native/interpreter presentation and hidden-window rendering, with SDL camera
and menu checks. The explicit legacy build compiled successfully.

USA stock also matched the independent TriCNES trace, RAM and CPU at
alignments 0/1/2. PAL native/interpreter runs matched at all five master-clock
phases. Bundled mod activation passed in both regions; corrupt state records
and incompatible options were refused without changing the running state.
The maintained `tests/cycle_backend_probe.py --case all` regression passed.
The owner briefly played and accepted USA widescreen with all enhancements,
Europe/PAL widescreen with all enhancements, and USA first-person on 2026-10-04.

This route does not cover every area, boss, ending or password. Existing
widescreen/viewport-actor experiments retain their documented coverage limits
in WIDESCREEN.md. Legacy binary save states use a different format; existing
password sidecars are the progress migration path. The branches remain
unmerged until the migration's remaining title playtests and integration.

## October 2026 USA progression coverage

The USA cycle seeds add 8,664 observed instruction starts from five areas,
74 original-loader checkpoints, boss combat, the ending elevator and credits.
The checkpoint set includes the valid authored special-item cells. Stock and
32:9 with actors, sprites and smooth timing matched native/interpreter hashes,
final pictures and complete states on every retained normal replay.
All 232 loader, room, combat and ending replays remain exact after harvesting.
Their interpreted ROM cycles fall from 428,886,431 to 804; RAM fallback stays
zero. The seven-mode corridor and fresh-process state replay also remain exact.

Checkpoint creation assists area/coordinate selection and player survival.
It runs the original graphics, room, item and enemy loaders; coordinate data-read
overrides are cleared before normal executable replay. These are assisted
coverage routes, rather than an unassisted traversal of the map.

Kraid and Ridley take original missile damage and set their statue flags and
75-missile capacity rewards in both aspect ratios. Original missiles destroy
the loaded Zebetite, glass and Mother Brain, whose death starts the original escape
timer. Combat assists Samus's aim, protection and ammunition, without writing
enemy health/status, victory flags, terrain or timers. A separate ending
checkpoint assists Samus's pose on the live elevator, then requires original
collision and Up input to reach the visible ending and credits. The ending
picture retains clean widescreen margins. The current cycle combat checkpoint
starts in the final chamber with one active Zebetite; the complete chamber
approach and escape-shaft traversal are separate.

Three additional checkpoints run original room initialization with widescreen
already active, then replay through the normal executable. Their displayed
crawler packets contain 56 checked tiles and nine visible margin residents,
with no misplaced or missing tiles. These check actual widened composition;
stock-origin snapshots can lack the widened room cache until a room streams.

The retained legacy backend also includes generated music/enemy continuations
and the shared save-state tail-resume correction. Its ending/credits replay
remains byte-identical to the qualified prior production build in stock and
32:9, including all 24 sampled framebuffer hashes and both full states.
Cycle and legacy states remain separate formats.

USA is the default build and archive profile. The ROM's payload must match the
selected USA/NTSC or explicit Europe/PAL variant before generation starts.
This expanded progression campaign qualifies USA; it does not extend the
earlier PAL corridor qualification to all these routes.

## Regional archives

`tools/make_release.ps1` builds and stages the USA/NTSC cycle preview by
default. Use `-Variant europe` or `-Variant both` for explicit PAL builds.
`-SkipBuild` packages existing `build-cycle-usa` and
`build-cycle-europe` Release outputs. It verifies backend/region cache values
and package CRCs, copies built launcher assets and regional packages, and
excludes ROMs, settings, mod selections and player progress. It creates local
archives under `release/`; it never publishes them.
