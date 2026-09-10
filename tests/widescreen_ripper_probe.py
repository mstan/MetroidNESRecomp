"""Compare the F4 Ripper against stock OAM and pixels with expanded sprites.

Requires TRACE=ON, Pillow and a current USA state with a visible native Ripper.
Copies the executable and writes all artifacts under --out; never changes the
supplied state. This specifically catches the slot-zero fall-through omission.
"""
import argparse
from pathlib import Path

from PIL import Image

from widescreen_actor_state import read_actor_state
from widescreen_probe import Probe


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    for name in ("exe", "rom", "state", "out"):
        parser.add_argument(f"--{name}", required=True)
    args = parser.parse_args()
    reference = []
    for mode, options in (("stock", None), ("sprites", "sprites"),
                          ("all", "actors,sprites,smooth")):
        probe = Probe(args.exe, args.rom, Path(args.out) / mode,
                      "off" if mode == "stock" else "32:9",
                      extra_args=["--widescreen-pc", options] if options else [])
        try:
            probe.cmd("load_state", path=Path(args.state).resolve().as_posix())
            for frame in range(4):
                probe.advance(2 if frame == 0 else 6)
                name = f"frame_{frame}"
                probe.capture(name)
                ram = (probe.out / f"{name}.ram").read_bytes()
                tiles = [(ram[p + 3], ram[p] + 1, ram[p + 1], ram[p + 2])
                         for p in range(0x200, 0x300, 4)
                         if ram[p + 1] in (0xc0, 0xc1) and ram[p] < 232]
                assert len(tiles) == 2, f"Expected the fixture's visible Ripper: {tiles}"
                picture = Image.open(probe.out / f"{name}.png").convert("RGB")
                center = (picture.width - 256) // 2
                pixels = [picture.crop((x + center, y, x + center + 8, y + 8)).tobytes()
                          for x, y, _, _ in tiles]
                if mode == "stock":
                    reference.append((tiles, pixels))
                    continue
                assert (tiles, pixels) == reference[frame], f"{mode}/{name}: Ripper differs from stock"
                state_path = probe.out / f"{name}.sav"
                probe.cmd("save_state", path=state_path.as_posix())
                _, _, state = read_actor_state(state_path)
                packet = [(s.x, s.y, s.tile, s.attr) for s in state.sprites[:state.count] if not s.hud]
                assert all(packet.count(tile) == 1 for tile in tiles), \
                    f"{mode}/{name}: Ripper missing or duplicated in expanded packet"
            probe.check_results()
        finally:
            probe.close()
    print("PASS: native Ripper tiles and pixels match stock in sprites/all modes across four frames")


if __name__ == "__main__":
    main()
