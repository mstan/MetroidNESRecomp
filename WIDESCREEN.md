# Adaptive widescreen (USA preview)

Enable **Metroid Widescreen** in the launcher's mod controls, choose an aspect
and status-bar position, then launch. It is off by default. The command-line
equivalent is:

```powershell
.\MetroidNESRecomp.exe .\metroid.nes --widescreen fit
.\MetroidNESRecomp.exe .\metroid.nes --widescreen 32:9,center
.\MetroidNESRecomp.exe .\metroid.nes --widescreen off
```

Use Metroid (USA), headerless PRG+CHR CRC32 `70080810`. The executable rejects
the European ROM. An EU build needs separate generation and validation; this
package currently targets USA only. No ROM is distributed.

## Presentation

The renderer keeps square pixels and a 240-pixel height:

| Mode | Render width |
| --- | ---: |
| Off | 256 |
| 16:9 | 426 |
| 21:9 | 560 |
| 32:9 | 854 |
| Fit | Nearest even width for the window, clamped to 256–854 |

Fit follows live window resizing. `edges` pins the energy/missile display to
the left edge; `center` keeps its original position in the centered native
viewport. Title, password and other non-room screens use the centered stock
picture. The custom renderer requires the frame PPU; the experimental dot PPU
refuses it, and HD-pack rendering is bypassed while this renderer is active.

## What enemies and room previews do

The current development checkpoint adds optional PC actor, sprite and timing
enhancements, selected with:

```powershell
.\MetroidNESRecomp.exe .\metroid.nes --widescreen 32:9 --widescreen-pc actors,sprites,smooth
```

`actors` pre-spawns ordinary room enemies and retains their state beyond the
original six slots. `sprites` captures complete object submissions before the
64-entry OAM buffer wraps. `smooth` runs world updates without the emulated CPU
cycle limit. These are experimental and off by default; launcher choices are
not yet exposed. The behavior described below applies without these options.

The PC checkpoint passes the F1/F2 crawler-position regression, targeted
contact/shot tests, short save/load replays, and 120/120 stock-mode frame hashes
against the previous build. Full object coverage, vertical behavior, room
handoffs and shared-engine validation remain incomplete. Owner playtesting also
identified an invisible enemy in F4 and inconsistent door bubbles across rooms;
those are follow-up work, not fixed by this checkpoint.

The game's own enemy AI, movement, attacks and fixed spawn slots still run.
In horizontal rooms, the visibility test includes the wider view and preserves
everything stock considered visible. Loaded enemies can remain visible and
active beyond the original 256-pixel edge, so activation timing and trajectories
can differ from stock. Vertical rooms retain the original vertical visibility
test; stale horizontal sprite context is cleared before that path runs.

Only the two rooms backed by the game's live RoomRAM have live objects. Wider
margins can show additional rooms as **terrain previews**, including across a
closed door or wall. Those previews do not independently spawn enemies or open
collision paths. Doors and collision retain their game behavior.

When the game reuses a room's backing storage, its old enemies and doors must
retire even if a very wide view still includes that room. Keeping them would
give them the new room's collision map and occupy its spawn slots. The mod clears
only the outgoing room's visibility flags immediately before the game's own
cleanup; that cleanup performs deletion. Terrain can remain visible afterward.
This boundary can still produce an object disappearing in an outer margin.

The visibility-consumer audit of `disasm/m1disasm/src` found these readers:

| Visibility reader | Consequence of wider visibility |
| --- | --- |
| `UpdateEnemy_CheckIfVisible` | Resting/active enemies update in the margins |
| `UpdateEnemy_EnData05DistanceToSamusThreshold` | Original distance gates can activate AI earlier; movement and attack state can consequently diverge |
| `IsSlotTaken`, `UpdatePipeBugHole` | Visible occupants reserve their fixed spawn slots |
| `Door_DeleteOffscreenEnemies`, `DeleteOffscreenRoomSprites` | Loaded enemies persist until their room must retire |
| `UpdateEnProjectile`, Kraid lint/projectile AI | Projectiles persist to the wider boundary |
| `UpdateAllRinkaSpawners`, `RidleyTryToLaunchFireball` | Visible projectiles reserve their spawn slots longer |
| `UpdateBullet_DeleteIfOffScreen` (`Objects.onScreen`) | Samus projectiles persist to the wider boundary |
| `Doors_RemoveIfOffScreen` (`Objects.onScreen`) | Doors persist until the room retirement hook clears visibility |

`DrawEnemy_NotBlank` and `ObjDrawFrame` produce those visibility flags and gate
drawing. Other `Ens.data05` readers use direction, timing, or distance bits;
the mod does not replace those routines. Resting enemies may intentionally wait
for Samus to approach. Boss/projectile consumers above were audited in source,
but are not yet covered by the Brinstar runtime route.

The earlier plan's requirement that all wide-mode RAM changes stay confined to
visibility bytes is incompatible with earlier enemy updates: AI positions,
timers, attacks and RNG consumption can then change. Wide-mode behavior is
validated separately; the strict unchanged-output gate applies with the mod off.

## How the compositor gets complete terrain

The camera maps the native picture into a 32×32 world grid of 256×240 cells.
Each physical nametable is bound to its incoming map cell when construction
starts. Logical terrain readiness and PPU upload completion are tracked
separately from that location, so the camera stays valid while a room loads.

The PPU's other nametable is **not** immediately complete: the game streams one
column or row as scrolling advances. Treating the whole table as authoritative
caused floating platforms and enemies apparently walking on missing terrain.
The compositor now selects:

1. Live PPU tiles in the native viewport and in uploaded margin columns/rows.
2. Complete logical RoomRAM for unstreamed parts of a loaded room, and while
   its attribute uploads remain pending.
3. A cached RoomRAM snapshot for a previously loaded room.
4. A native port of the ROM's room decoder for unvisited terrain previews.

The upload masks become valid after NMI consumes the queued PPU data. Initial
full uploads are recognized only when the complete PPU table equals RoomRAM.
Bindings and masks reset when storage is reused or the area changes.

`EndOfRoom` marks logical RoomRAM complete (`RoomNumber=$F0..$F4`). Waiting for
the later `RoomFinished` callback caused stock-picture flicker when moving left
or up, and permanent pillarboxing if the player stopped near Morph Ball while
upload bookkeeping was at `$F1`. That bookkeeping advances with scrolling.
The renderer now recognizes logical completion after NMI; until then the
margins use cached/decoded terrain and widened enemy activation stays gated.

USA hook points in `game.toml` and `mods/widescreen_plugin.c`:

| Address | Purpose |
| --- | --- |
| `$DFDF` IsObjectVisible | Widen horizontal visibility; preserve guest return/ALU effects |
| `$E0C1` DisplayBar | Identify the ten HUD sprite slots |
| `$EA26` RoomFinished | Confirm logical completion if not already observed |
| `$E564` GetNameAddrs | Observe transfers called from `$E592` (stack return `$E594`) |
| `$EC9B` DeleteOffscreenRoomSprites | Retire occupants and bind the incoming room before storage reuse |

An entry hook at `$E590` UpdateNameTable alone misses vertical scrolling:
generated functions fall through that address. Both axes call `$E564`, where
`$01:$00` holds the tile offset. The caller check excludes attribute uploads.
Always regenerate after changing hooks; never edit `generated/` by hand.

The decoder is checked against the game's later RoomRAM output. The measured
start-corridor discrepancy was six `$FF → $4E` door collision tiles, written by
`WriteDoorBGTiles_Common` after terrain construction. The verifier accepts that
specific column/row pattern only when a matching live door exists; every other
tile or attribute difference remains a mismatch.

New savestates include room bindings, logical readiness, upload masks and HUD
metadata. Complete RoomRAM reconstructs the cache; incomplete rooms and other
entries are decoded again. Savestates are specific to the build: the engine now
writes version 7 with size-delimited mod records, and rejects older engine and
renderer formats. There is no migration or backwards-compatibility promise.
Use password saves to carry progress between builds. Existing save files are
not converted or deleted automatically.

## Validation and remaining limits

The September 10, 2026 validation artifacts are under
`build/widescreen_validation_20260910/` (local, not shipped). The maintained
`tests/widescreen_probe.py` records screenshots, RAM, enemy slots, `ws_stats`
and dispatch misses in an isolated output directory. It requires `TRACE=ON`.

The follow-up `tests/widescreen_fallback_probe.py` covers a fresh leftward route
that collects Morph Ball, including its item-get pause, and a save/load replay
during incomplete room construction. The replay screenshots match exactly.
An owner-provided Morph Ball save also remained wide for 121 idle frames with
its native gameplay pixels preserved (HUD intentionally moves). A separate
570-frame leftward/backtracking trace changed from five fallback frames to
zero. These artifacts are in `build/widescreen_fallback_20260910/`.

Validated paths include the Brinstar start corridor, approach/entry through the
right door, backtracking, and a vertical descent from map row 14 through 18.
The descent uses a declared fixture granting Morph Ball/bombs and suppressing
player damage/knockback. Enemy AI and terrain still run in the game, but this
fixture does not establish unmodified combat or full-game correctness.

The vertical run verified seven decoded cells with zero unexpected decoder
differences and zero dispatch misses. A short save/load replay produced
identical screenshots. Live Fit resizing exercised client sizes 800×600,
1280×720, 1680×720, 1708×480 and 640×720, yielding widths 320, 426, 560, 854 and
256 respectively. Stock-off A/B verification compares 120 hashes over 1200
frames against a preserved executable from before these fixes.

The final 16:9, 21:9 (center HUD), and 32:9 routes recorded respectively 16, 35
and 50 samples of visible enemies outside native X=0–255, with active enemies
moving and new-room slots populated. All three had zero dispatch misses,
unexpected decoder differences and cache mismatches. The password regression
tests passed 2/2. The extracted USA ZIP passed both stock and 32:9 smoke runs;
its stock hashes matched the preserved executable 120/120.

Known limits remain tracked in the central Beads database:

- `beads-2dw.6.9`: Mesen RAM comparison still has the pre-existing frame-5
  divergence (99.65% steady-state match over the 900-frame attract comparison).
  Deterministic recomp output is not proof of oracle parity.
- `beads-2dw.1.23`: a long run after restoring a shaft savestate can reach an
  interpreter watchdog. It reproduces with widescreen off in both the preserved
  and updated executables. Short replay validation does not resolve this.
- Bosses, later areas, unusual enemy types, elevator/death transitions and long
  play sessions have not been comprehensively validated with widescreen enabled.
- Preview rooms use the current area's live CHR and palette. An adjacent room
  with a different palette can therefore appear with the current room's colors.
- Window resize events are discarded while the TCP debugger pauses the engine;
  Fit was tested during normal execution.

This checkpoint pins the matching engine work on
`feat/metroid-widescreen-engine`. Engine integration, source publication and
the final re-pin remain separate owner-approved work.
