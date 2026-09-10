"""Fresh-game Morph Ball preview, native handoff, collection and history replay.

Requires TRACE=ON and current USA build. Player protection is the only gameplay
fixture on the collection route. A final renderer fixture restores the opening
camera with the inventory/history actually earned during that route. Optional
reference comparison checks RAM/SRAM against the build before pickup previews.
"""
import argparse
from pathlib import Path

from widescreen_actor_state import read_actor_state
from widescreen_probe import Probe


def run(exe, args, reference=False):
    probe = Probe(exe, args.rom, Path(args.out) / ("reference" if reference else "current"),
                  "32:9", extra_args=["--widescreen-pc", "actors,sprites,smooth"])
    result = []
    try:
        probe.advance(600); probe.advance(2, 0x10); probe.advance(120)
        probe.advance(2, 0x10); probe.advance(650)
        probe.protect_player = True
        def sample(name, expected=None, screenshot=True):
            if screenshot:
                probe.capture(name)
            path = probe.out / f"{name}.sav"
            probe.cmd("save_state", path=path.as_posix())
            raw = path.read_bytes()
            ram = raw[20:2068]
            ox, oy, state = read_actor_state(path)
            actual = sorted((s.x + ox, s.y + oy, s.tile) for s in state.sprites[:state.count]
                            if s.tile in (0x7d, 0x7e, 0x8d, 0x8e) and not s.hud)
            if not reference and expected is not None:
                tiles = [(608, 3504, 0x7d), (616, 3504, 0x7e),
                         (608, 3512, 0x8d), (616, 3512, 0x8e)] if expected else []
                assert actual == sorted(tiles), (name, actual)
            sram = b"".join(bytes.fromhex(probe.cmd("read_ram", addr=f"{addr:04x}", len=256)["hex"])
                            for addr in range(0x6000, 0x8000, 256))
            result.append((ram, sram))
            return ram, ox
        ram, _ = sample("spawn", True)
        assert ram[0x748] == ram[0x750] == 0xff, "Fixture already loaded the native pickup"
        # Inspect every presented frame while the game loads the neighboring
        # room. Four tiles exactly once catches both gaps and duplicate draws.
        for i in range(24):
            probe.advance(1, 2)
            ram, _ = sample(f"handoff_{i:02}", True, screenshot=i in (0, 23))
        assert 4 in (ram[0x748], ram[0x750]), "Native Morph Ball did not spawn"
        for i in range(9):
            probe.advance(20, 2); probe.advance(40, 0xc2); probe.advance(15, 0x42)
        gear = int(probe.cmd("read_ram", addr="6878", len=1)["hex"], 16)
        assert gear & 0x10, "Real route did not collect Morph Ball"
        sample("collected", False)
        # Explicit renderer fixture: restore the initial view, where the item
        # room is unloaded, with the inventory/history earned above. This tests
        # persistent pickup suppression without a second navigation route.
        count = int(probe.cmd("read_ram", addr="6886", len=1)["hex"], 16)
        history = bytes.fromhex(probe.cmd("read_ram", addr="6887", len=count)["hex"])
        assert count >= 2
        probe.cmd("load_state", path=(probe.out / "spawn.sav").as_posix())
        probe.cmd("write_ram", addr="6878", val=f"{gear:02x}")
        probe.cmd("write_ram", addr="6886", val=f"{count:02x}")
        for i, value in enumerate(history):
            probe.cmd("write_ram", addr=f"{0x6887 + i:04x}", val=f"{value:02x}")
        probe.advance(2)
        assert [2, 14] not in probe.cmd("ws_stats")["nt_cells"]
        sample("collected_history_unloaded", False)
        probe.check_results()
    finally:
        probe.close()
    return result


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    for name in ("exe", "rom", "out"):
        parser.add_argument(f"--{name}", required=True)
    parser.add_argument("--reference-exe")
    args = parser.parse_args()
    current = run(args.exe, args)
    if args.reference_exe:
        assert current == run(args.reference_exe, args, True), "Gameplay RAM/SRAM changed"
    print("PASS: Morph Ball visible at spawn, no handoff gaps/duplicates, real collection, collected-history preview suppression"
          + (", unchanged RAM/SRAM" if args.reference_exe else ""))


if __name__ == "__main__":
    main()
