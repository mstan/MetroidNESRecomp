"""Check F3 Rio residency, original proximity trigger, and sprite placement.

Use a current USA F3 setup with the Rio resident in cell (9,14). The supplied
save is read only. The approach uses normal input. Close-range fixtures hold
Samus still in the Rio's room to exercise its trigger/flight. Requires TRACE=ON.
"""
import argparse
from collections import Counter
import json
from pathlib import Path

from widescreen_actor_state import read_actor_state
from widescreen_probe import Probe


def sample(probe, phase, offset):
    snapshot = probe.out / "sample.sav"
    probe.cmd("save_state", path=snapshot.as_posix())
    ox, oy, state = read_actor_state(snapshot)
    rios = [a for a in state.actors if a.used and a.extra[14] == 6
            and a.spawn_x == 9 and a.spawn_y == 14]
    assert len(rios) == 1, "This fixture must contain one Rio from cell (9,14)"
    a = rios[0]
    x, y = a.cx * 256 + a.base[1] - ox, a.cy * 240 + a.base[0] - oy
    assert a.extra[3] in (0x63, 0x64), "Expected a living Rio animation"
    wing_y = -12 if a.extra[3] == 0x63 else -4
    expected = Counter([(x-4, y-8, 0xe2), (x-8, y, 0xe3),
                        (x-12, y+wing_y, 0xe4), (x, y, 0xe3),
                        (x+4, y+wing_y, 0xe4)])
    actual = Counter((s.x, s.y, s.tile) for s in state.sprites[:state.count]
                     if not s.hud and s.tile in (0xe2, 0xe3, 0xe4))
    # A submitted packet can precede the last camera step on this walking
    # route (1 px with smooth timing, up to 2 px with original timing).
    # Permit only a shared horizontal shift of the complete five-tile sprite;
    # stationary flight and boundary samples must remain exact.
    camera_lag = 0
    if phase == "approach":
        for shift in (1, 2):
            shifted = Counter((sx+shift, sy, tile) for sx, sy, tile in expected.elements())
            if actual == shifted:
                expected, camera_lag = shifted, shift
                break
    return a, dict(phase=phase, offset=offset, x=x, y=y, status=a.extra[0],
                   cell=[a.cx, a.cy], local=[a.base[1], a.base[0]], native=a.native,
                   camera_lag=camera_lag,
                   missing=list((expected-actual).elements()),
                   misplaced=list((actual-expected).elements()))


def hold_player(probe, nt, x):
    # Explicit proximity fixture; no enemy state, terrain or inventory edits.
    for addr, val in ((0x30c, nt), (0x30e, x), (0x30d, 112),
                      (0x309, 0), (0x311, 0), (0x313, 0), (0x315, 0)):
        probe.cmd("write_ram", addr=f"{addr:04x}", val=f"{val:02x}")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    for name in ("exe", "rom", "state", "out"):
        parser.add_argument(f"--{name}", required=True)
    parser.add_argument("--nesref")
    parser.add_argument("--core")
    parser.add_argument("--clocked", action="store_true", help="keep original world timing")
    args = parser.parse_args()
    assert bool(args.nesref) == bool(args.core), "Supply --nesref and --core together"
    probe = Probe(args.exe, args.rom, args.out, "32:9",
                  extra_args=["--widescreen-pc", "actors,sprites" if args.clocked else "actors,sprites,smooth"])
    records = []
    try:
        probe.cmd("load_state", path=Path(args.state).resolve().as_posix())
        for offset in range(0, 401, 4):
            probe.advance(1 if offset == 0 else 4, 0x01)
            a, record = sample(probe, "approach", offset)
            records.append(record)
        (probe.out / "rio.json").write_text(json.dumps(records, indent=2))
        assert all(r["status"] == 1 and r["cell"] == [9,14] and r["local"] == [204,56]
                   for r in records), "Rio dove before Samus reached its original trigger range"
        probe.capture("approach")
        assert a.native >= 0, "Approach did not exercise native slot adoption"
        anchor = probe.out / "approach.sav"
        probe.cmd("save_state", path=anchor.as_posix())
        nt = a.extra[7]
        probe.protect_player = True
        boundaries = []
        # ROM rounds coordinates before comparing: with Rio at even X=204,
        # X=77 is still outside; X=78 is inside. Check the actual guest updates.
        for px in (76, 77, 78, 124):
            probe.cmd("load_state", path=anchor.as_posix())
            active = False
            for offset in range(40):
                hold_player(probe, nt, px)
                probe.advance(1)
                a, record = sample(probe, f"player_x_{px}", offset)
                records.append(record)
                active |= a.extra[0] == 2
            boundaries.append(dict(player_x=px, activated=active))
        (probe.out / "boundaries.json").write_text(json.dumps(boundaries, indent=2))
        assert [r["activated"] for r in boundaries] == [False, False, True, True], boundaries
        probe.cmd("load_state", path=anchor.as_posix())
        flight = []
        for offset in range(160):
            hold_player(probe, nt, 124)
            probe.advance(1)
            a, record = sample(probe, "flight", offset)
            records.append(record)
            flight.append(record)
        bottom = max(range(len(flight)), key=lambda i: flight[i]["y"])
        assert flight[bottom]["y"] > 156, "Dive not exercised"
        assert any(r["y"] < 72 for r in flight[bottom+1:]), "Return not exercised"
        assert all(r["status"] in (1, 2) for r in flight), "Rio removed during flight"
        (probe.out / "rio.json").write_text(json.dumps(records, indent=2))
        bad = [r for r in records if r["missing"] or r["misplaced"]]
        assert not bad, f"Rio sprite mismatch in {len(bad)}/{len(records)} samples; first: {bad[0]}"
        probe.capture("flight_end")
        probe.check_results()
        print(f"PASS Rio residency, native handoff, proximity boundaries, dive/return: {len(records)} samples")
    finally:
        probe.close()
    if args.nesref:
        from rio_proximity_oracle import run_oracle
        result = run_oracle(args.rom, args.nesref, args.core, Path(args.out)/"mesen")
        print(f"PASS original proximity routine in Mesen: {len(result)} boundary cases")


if __name__ == "__main__":
    main()
