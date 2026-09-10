"""Check both door faces through the original opening/closing animation.

Use a current USA F3-style state facing a closed blue door from the left;
optionally supply a state just after walking out on its right. The reference
executable predates paired presentation, for gameplay RAM parity. Closing uses
an explicit shortened re-close timer fixture; animation timing is unchanged.
"""
import argparse
import json
from pathlib import Path

from widescreen_actor_state import read_actor_state
from widescreen_probe import Probe


def run(exe, args, side, fixture, reference):
    label = ("reference_" if reference else "paired_") + side
    probe = Probe(exe, args.rom, Path(args.out) / label, "32:9",
                  extra_args=["--widescreen-pc", "actors,sprites,smooth"])
    result, stages = [], {"opening": set(), "closing": set()}
    try:
        probe.cmd("load_state", path=Path(fixture).resolve().as_posix())
        probe.protect_player = True
        probe.advance(2 if side == "left" else 8, 0 if side == "left" else 2)
        def sample(name, phase=None):
            probe.capture(name)
            path = probe.out / f"{name}.sav"
            probe.cmd("save_state", path=path.as_posix())
            ox, oy, state = read_actor_state(path)
            ram = (probe.out / f"{name}.ram").read_bytes()
            sram = b"".join(bytes.fromhex(probe.cmd("read_ram", addr=f"{addr:04x}", len=256)["hex"])
                            for addr in range(0x6000, 0x8000, 256))
            result.append((ram, sram))
            live = [p for p in range(0x380, 0x3c0, 16) if ram[p] in (2, 3)]
            assert len(live) == 1, "Fixture must have one live blue door"
            frame = ram[live[0] + 3]
            if phase:
                stages[phase].add(frame)
            if not reference:
                expected = {0x31: [15, 31, 47, 47, 31, 15],
                            0x33: [106, 107, 108, 108, 107, 106], 0xf7: []}[frame]
                tiles = [(s.x + ox, s.y + oy, s.tile) for s in state.sprites[:state.count]
                         if s.tile in (15, 31, 47, 106, 107, 108)
                         and 2784 <= s.x + ox <= 2840 and 3440 <= s.y + oy <= 3480]
                for right in (False, True):
                    face = sorted((y, tile) for x, y, tile in tiles if (x >= 2816) == right)
                    assert [tile for _, tile in face] == expected, (name, frame, right, face)
            return live[0], frame
        sample("closed")
        for i in range(18):
            probe.advance(2, 0x40 if i == 0 else 0)
            live, frame = sample(f"opening_{i:02}", "opening")
        assert frame == 0xf7, "Door did not finish opening"
        assert stages["opening"] == {0x31, 0x33, 0xf7}, stages
        # Explicit timer fixture avoids the unrelated long-restore interpreter
        # watchdog while retaining the game's real closing animation sequence.
        probe.cmd("write_ram", addr=f"{live + 15:04x}", val="01")
        for i in range(10):
            probe.advance(2)
            _, frame = sample(f"closing_{i:02}", "closing")
        assert frame == 0x31 and 0x33 in stages["closing"], stages
        probe.cmd("load_state", path=(probe.out / "closed.sav").as_posix())
        probe.advance(2, 0x40)
        probe.advance(18)
        probe.capture("replay")
        assert (probe.out / "opening_09.png").read_bytes() == (probe.out / "replay.png").read_bytes(), "Door replay differs"
        (probe.out / "animation.json").write_text(json.dumps({k: sorted(v) for k, v in stages.items()}))
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
        print(f"PASS {side}: closed/narrow/open frames on both faces, closing animation, exact replay"
              + (", unchanged RAM/SRAM" if args.reference_exe else ""))


if __name__ == "__main__":
    main()
