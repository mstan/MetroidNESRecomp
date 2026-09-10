"""Check paired blue door pictures and replay, with real shots from both sides.

Use a current USA F3-style state facing a closed blue door from the left;
optionally supply a state just after walking out on its right. The reference
executable is the build before paired presentation, for gameplay RAM parity.
"""
import argparse
from pathlib import Path

from widescreen_actor_state import read_actor_state
from widescreen_probe import Probe


def run(exe, args, side, fixture, reference):
    label = ("reference_" if reference else "paired_") + side
    probe = Probe(exe, args.rom, Path(args.out) / label, "32:9",
                  extra_args=["--widescreen-pc", "actors,sprites,smooth"])
    result = []
    try:
        probe.cmd("load_state", path=Path(fixture).resolve().as_posix())
        probe.protect_player = True
        # The right-side fixture must finish its original exit motion before
        # facing left. Only player protection is written by this route.
        probe.advance(2 if side == "left" else 8, 0 if side == "left" else 2)
        for name, frames in (("closed", 0), ("open", 20), ("replay", 20)):
            if name == "replay":
                probe.cmd("load_state", path=(probe.out / "closed.sav").as_posix())
            if frames:
                probe.advance(frames, 0x40)
            probe.capture(name)
            path = probe.out / f"{name}.sav"
            probe.cmd("save_state", path=path.as_posix())
            ox, oy, state = read_actor_state(path)
            ram = (probe.out / f"{name}.ram").read_bytes()
            sram = b"".join(bytes.fromhex(probe.cmd("read_ram", addr=f"{addr:04x}", len=256)["hex"])
                            for addr in range(0x6000, 0x8000, 256))
            result.append((ram, sram))
            # This fixture's paired boundary is map (11,14): six tiles per face.
            door_tiles = [(s.x + ox, s.y + oy) for s in state.sprites[:state.count]
                          if s.tile in (0x0f, 0x1f, 0x2f) and s.x + ox in (2792, 2832)
                          and 3440 <= s.y + oy <= 3480]
            if not reference:
                expected = [(x, y) for x in (2792, 2832) for y in range(3440, 3481, 8)] if name == "closed" else []
                assert sorted(door_tiles) == expected, (side, name, door_tiles)
            if name != "closed":
                assert any(ram[p] == 3 for p in range(0x380, 0x3c0, 16)), "Shot did not open a live door"
        assert (probe.out / "open.png").read_bytes() == (probe.out / "replay.png").read_bytes(), "Door replay differs"
        probe.check_results()
    finally:
        probe.close()
    return result


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    for name in ("exe", "rom", "state-left", "out"):
        parser.add_argument(f"--{name}", required=True)
    parser.add_argument("--state-right")
    parser.add_argument("--reference-exe")
    args = parser.parse_args()
    for side, fixture in (("left", args.state_left), ("right", args.state_right)):
        if not fixture:
            continue
        current = run(args.exe, args, side, fixture, False)
        if args.reference_exe:
            baseline = run(args.reference_exe, args, side, fixture, True)
            assert current == baseline, f"{side}: gameplay RAM/SRAM changed"
        print(f"PASS {side}: paired closed faces, real shot opens both, exact replay"
              + (", unchanged RAM/SRAM" if args.reference_exe else ""))


if __name__ == "__main__":
    main()
