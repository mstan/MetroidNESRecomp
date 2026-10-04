"""Real-ROM native/interpreter and fresh-process state replay regression.

Run separately on the USA and Europe executables with their matching ROM.
All files go under --out; --no-save preserves existing password progress.
"""
import argparse
from pathlib import Path
import subprocess
import sys

CASES = {
    "stock": [],
    "wide": ["--widescreen", "32:9"],
    "actors": ["--widescreen", "32:9", "--widescreen-pc", "actors"],
    "sprites": ["--widescreen", "32:9", "--widescreen-pc", "sprites"],
    "smooth": ["--widescreen", "32:9", "--widescreen-pc", "smooth"],
    "all": ["--widescreen", "32:9", "--widescreen-pc", "actors,sprites,smooth"],
    "voxel": ["--voxel-first-person"],
}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--exe", type=Path, required=True)
    parser.add_argument("--rom", type=Path, required=True)
    parser.add_argument("--out", type=Path, required=True)
    parser.add_argument("--case", choices=CASES, action="append")
    args = parser.parse_args()
    exe, rom, out = args.exe.resolve(), args.rom.resolve(), args.out.resolve()
    out.mkdir(parents=True, exist_ok=True)
    route = out / "route.txt"
    route.write_text("0 -\n180 START\n185 -\n350 START\n355 -\n"
                     "800 LEFT\n950 -\n1100 RIGHT\n1500 -\n")
    base = [str(exe), str(rom), "--frames", "1800", "--input", str(route), "--no-save"]

    def run(tag, extra):
        kwargs = {}
        if sys.platform == "win32":
            startup = subprocess.STARTUPINFO()
            startup.dwFlags |= subprocess.STARTF_USESHOWWINDOW
            startup.wShowWindow = 0
            kwargs = {"startupinfo": startup, "creationflags": subprocess.CREATE_NO_WINDOW}
        with (out / f"{tag}.log").open("w", encoding="utf-8") as log:
            result = subprocess.run(base + list(map(str, extra)), cwd=out,
                                    stdout=log, stderr=subprocess.STDOUT, timeout=300, **kwargs)
        if result.returncode:
            raise AssertionError(f"{tag}: exit {result.returncode}; see {out / (tag + '.log')}")

    for case in args.case or CASES:
        options = CASES[case]
        middle = out / f"{case}-middle.cycstate"
        for mode in ("native", "interp"):
            tag = f"{case}-{mode}"
            flags = ["--interp-only"] if mode == "interp" else []
            run(tag, options + flags + ["--hash-out", out / f"{tag}.hash",
                                       "--present-out", out / f"{tag}.png",
                                       "--save-state", f"899:{middle}" if mode == "native"
                                       else f"899:{out / (tag + '-middle.cycstate')}",
                                       "--save-state", f"1799:{out / (tag + '.cycstate')}"])
        for suffix in ("hash", "png", "cycstate"):
            assert (out / f"{case}-native.{suffix}").read_bytes() == (
                out / f"{case}-interp.{suffix}").read_bytes(), f"{case}: {suffix} differs"
        tag = case + "-replay"
        run(tag, options + ["--load-state", middle, "--hash-out", out / f"{tag}.hash",
                            "--present-out", out / f"{tag}.png",
                            "--save-state", f"1799:{out / (tag + '.cycstate')}"])
        assert (out / f"{tag}.hash").read_text().splitlines() == (
            out / f"{case}-native.hash").read_text().splitlines()[900:], f"{case}: resumed machine differs"
        for suffix in ("png", "cycstate"):
            assert (out / f"{tag}.{suffix}").read_bytes() == (
                out / f"{case}-native.{suffix}").read_bytes(), f"{case}: resumed {suffix} differs"
        print(f"{case}: 1800 native/interpreter frames and 900 replay frames exact", flush=True)


if __name__ == "__main__":
    main()
