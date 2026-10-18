"""Check Brinstar/Norfair crawler sprites against their actual world positions.

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
    parser.add_argument("--norfair", action="store_true",
                        help="check Norfair Nova crawlers from its original frame/place tables")
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
            if args.norfair:
                assert state.area == 0x11, 'Norfair mode requires InArea=$11'
            enemy_type = 6 if args.norfair else 5
            # Norfair's Nova uses the same eight tile indices as Brinstar's
            # crawler (enemy_sprite_data.asm, EnFrame_NovaOnFloor..LeftWall).
            tiles = (0xca,0xcb,0xcc,0xcd,0xda,0xdb,0xdc,0xdd)
            actors = [(i, a.cx * 256 + a.base[1] - ox, a.cy * 240 + a.base[0] - oy)
                      for i, a in enumerate(state.actors)
                      if a.used and a.extra[0] and a.extra[14] == enemy_type]
            bad, checked = [], 0
            matched = {i:0 for i,_,_ in actors}
            for i, sprite in enumerate(state.sprites[:state.count]):
                if sprite.hud or sprite.tile not in tiles:
                    continue
                checked += 1
                # Metasprite layout offsets plus a possible one-frame move
                # fit within 16 px. A wrapped room offset is at least 256 px.
                nearby = [i for i,x,y in actors if abs(sprite.x-x)<=16 and abs(sprite.y-y)<=16]
                for i in nearby: matched[i] += 1
                if not nearby:
                    bad.append((i, sprite.x, sprite.y, sprite.tile))
            missing = []
            if args.norfair:
                # Nova's original EnPlace7 contains four tile positions. A
                # living visible resident must submit all four, including
                # tiles clipped by the final viewport. Catch bypassed drawing
                # hooks as well as coordinate wrapping.
                missing = [dict(actor=i,x=x,y=y,tiles=matched[i]) for i,x,y in actors
                           if -307<x<563 and -8<y<248 and matched[i]!=4]
            result = dict(fixture=fixture, checked=checked, misplaced=bad, actors=actors,missing=missing)
            (probe.out / "alignment.json").write_text(json.dumps(result, indent=2))
            results.append(result)
            probe.check_results()
            print(json.dumps(result), flush=True)
        finally:
            probe.close()
    assert all(r["checked"] and not r["misplaced"] and not r['missing'] for r in results), \
        "Crawler sprites do not match their world positions"


if __name__ == "__main__":
    main()
