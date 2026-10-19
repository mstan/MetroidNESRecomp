# v0.2.2 - Windows startup diagnostics

Startup logs now begin before the launcher opens. Unhandled Windows crashes
attempt a matching minidump, and the release's optimized symbols are retained
for analysis. Send the `diagnostics` folder after reproducing a failure; see
`DIAGNOSTICS.md`. `Collect-Diagnostics.cmd` also records Windows loader failures
that occur before the executable can write its own log.

The Windows package now includes the Microsoft C++ runtime DLLs required by
the executable. The previous ZIP omitted them and relied on an existing
redistributable installation.

The reported crash was not reproduced locally. Extracted launcher/Play checks
pass; the short 900-frame gameplay route retains exact earlier-release and
interpreter hashes and its final picture. This release adds evidence collection
and corrects the missing runtime packaging.

# Metroid cycle previews

Separate USA/NTSC and Europe/PAL builds now use the cycle CPU backend by
default. Choose the executable matching your ROM. No ROM is included.
Headerless PRG+CHR CRC32 is `70080810` for USA and `7751588D` for Europe.

Password capture, history, launcher editing and CONTINUE prefill remain
available. Existing `metroid.srm` password text carries progress forward.
Legacy binary save states cannot be loaded into the cycle backend.

The optional Metroid Widescreen package supports Fit, 16:9, 21:9 and 32:9,
HUD placement, viewport actors, expanded sprites and reduced slowdown in
both regions. Voxel 3D (first person) is also available in both builds. Both
packages start disabled; the earlier diorama experiment remains parked.

The October 2026 USA pass adds native coverage across five areas and 74
original-loader checkpoints, with stock and 32:9 native/interpreter comparisons.
Assisted original Kraid/Ridley and Mother Brain combat, the escape timer,
ending-elevator collision, visible ending and credits are also checked in both
aspect ratios. The fixtures assist player position/protection and supplies;
they do not write enemy damage or progression outcomes. See CYCLE-MIGRATION.md
for the qualification scope, including the separate retained legacy fixes.

Stock gameplay, enhancement combinations, password persistence and cycle
state replay passed short regression routes in both regions. The owner
accepted brief USA and PAL enhanced widescreen playtests and USA first-person.
These checks do not establish compatibility across every room, boss or ending.
Existing experimental feature limits remain in [WIDESCREEN.md](WIDESCREEN.md).
See [CYCLE-MIGRATION.md](CYCLE-MIGRATION.md) for the validation record.

Arrow keys move, Z jumps, X shoots, Enter starts and Backslash selects.
Escape opens the settings menu; hold Tab for fast-forward. F8 saves a cycle
state, F9 loads it, F11 toggles fullscreen and F12 takes a screenshot.
Gamepads and remapping are available in the menu.

The Windows packaging tool creates separate local regional archives with
the built launcher assets and correctly targeted mod packages. It excludes
ROMs, player saves, settings and debug output. These branches and archives
remain unpublished while the wider migration is under review.
