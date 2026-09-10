"""Check Brinstar crawler sprites against their actual world positions.

Requires TRACE=ON and current USA savestates in horizontal gameplay rooms.
Runs isolated copies and never overwrites the supplied states. In the original
32:9 bug, sprites outside the legacy [-256,512) sidecar range wrapped into the
native view. This checks every captured crawler tile, including clipped ones.
"""
import argparse
import json
from pathlib import Path

from widescreen_actor_state import read_actor_state
from widescreen_probe import Probe


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--exe", required=True)
    parser.add_argument("--rom", required=True)
    parser.add_argument("--state", action="append", required=True)
    parser.add_argument("--out", required=True)
    args = parser.parse_args()
    results = []
    for index, fixture in enumerate(args.state):
        probe = Probe(args.exe, args.rom, Path(args.out) / f"scene_{index}",
                      "32:9", extra_args=["--widescreen-pc", "actors,sprites,smooth"])
        try:
            probe.cmd("load_state", path=Path(fixture).resolve().as_posix())
            probe.advance(30)
            probe.capture("scene")
            state_path = probe.out / "scene.sav"
            probe.cmd("save_state", path=state_path.as_posix())
            ox, oy, state = read_actor_state(state_path)
            actors = [(i, a.cx * 256 + a.base[1] - ox, a.cy * 240 + a.base[0] - oy)
                      for i, a in enumerate(state.actors)
                      if a.used and a.extra[0] and a.extra[14] == 5]
            bad, checked = [], 0
            for i, sprite in enumerate(state.sprites[:state.count]):
                if sprite.hud or sprite.tile not in (0xca, 0xcb, 0xcc, 0xcd, 0xda, 0xdb, 0xdc, 0xdd):
                    continue
                checked += 1
                # Metasprite layout offsets plus a possible one-frame move
                # fit within 16 px. A wrapped room offset is at least 256 px.
                if not any(abs(sprite.x - x) <= 16 and abs(sprite.y - y) <= 16
                           for _, x, y in actors):
                    bad.append((i, sprite.x, sprite.y, sprite.tile))
            result = dict(fixture=fixture, checked=checked, misplaced=bad, actors=actors)
            (probe.out / "alignment.json").write_text(json.dumps(result, indent=2))
            results.append(result)
            probe.check_results()
            print(json.dumps(result), flush=True)
        finally:
            probe.close()
    assert all(r["checked"] and not r["misplaced"] for r in results), \
        "Crawler sprites do not match their world positions"


if __name__ == "__main__":
    main()
