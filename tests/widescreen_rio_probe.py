"""Check the F3 Brinstar Rio's complete dive/return against its sprite packet.

Use a current USA F3 setup with the Rio resident in cell (9,14). The supplied
save is read only. No player/actor RAM is changed. Requires TRACE=ON.
"""
import argparse
from collections import Counter
import json
from pathlib import Path

from widescreen_actor_state import read_actor_state
from widescreen_probe import Probe


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    for name in ("exe", "rom", "state", "out"):
        parser.add_argument(f"--{name}", required=True)
    args = parser.parse_args()
    probe = Probe(args.exe, args.rom, args.out, "32:9",
                  extra_args=["--widescreen-pc", "actors,sprites,smooth"])
    records = []
    try:
        probe.cmd("load_state", path=Path(args.state).resolve().as_posix())
        for offset in range(0, 160, 4):
            probe.advance(1 if offset == 0 else 4)
            snapshot = probe.out / "sample.sav"
            probe.cmd("save_state", path=snapshot.as_posix())
            ox, oy, state = read_actor_state(snapshot)
            rios = [a for a in state.actors if a.used and a.extra[14] == 6
                    and a.spawn_x == 9 and a.spawn_y == 14]
            assert len(rios) == 1, "This fixture must contain one Rio from cell (9,14)"
            a = rios[0]
            x, y = a.cx * 256 + a.base[1] - ox, a.cy * 240 + a.base[0] - oy
            assert a.extra[3] in (0x63, 0x64), "Expected a living Rio animation"
            # ROM EnFrame_Rio0/1 and EnPlaceB: five tiles, with the two wing
            # tips changing Y. Check all coordinates, even outside the viewport.
            wing_y = -12 if a.extra[3] == 0x63 else -4
            expected = Counter([(x-4, y-8, 0xe2), (x-8, y, 0xe3),
                                (x-12, y+wing_y, 0xe4), (x, y, 0xe3),
                                (x+4, y+wing_y, 0xe4)])
            actual = Counter((s.x, s.y, s.tile) for s in state.sprites[:state.count]
                             if not s.hud and s.tile in (0xe2, 0xe3, 0xe4))
            records.append(dict(offset=offset, x=x, y=y, status=a.extra[0],
                                missing=list((expected-actual).elements()),
                                misplaced=list((actual-expected).elements())))
        (probe.out / "rio.json").write_text(json.dumps(records, indent=2))
        bottom = max(range(len(records)), key=lambda i: records[i]["y"])
        assert records[bottom]["y"] > records[0]["y"] + 100, "Dive not exercised"
        assert records[-1]["y"] < records[bottom]["y"] - 100, "Return not exercised"
        assert all(r["status"] in (1, 2) for r in records), "Rio removed during flight"
        probe.check_results()
        bad = [r for r in records if r["missing"] or r["misplaced"]]
        assert not bad, f"Rio sprite mismatch in {len(bad)}/{len(records)} samples; first: {bad[0]}"
        # Ordinary movement brings the flyer into the right-hand expanded view.
        probe.cmd("load_state", path=Path(args.state).resolve().as_posix())
        probe.advance(401, 0x01)
        probe.capture("approach")
        probe.check_results()
        print(f"PASS Rio dive/return: {len(records)} samples, all five tiles correctly placed")
    finally:
        probe.close()


if __name__ == "__main__":
    main()
