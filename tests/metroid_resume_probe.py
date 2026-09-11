"""Reproduce the long save/load watchdog on an unmodified-player opening route.

Requires TRACE=ON. Owns only the copied runner, logs and saves in --out.
Fresh gameplay and restored gameplay must match at 150-frame checkpoints for
1,200 frames, beyond the old limit with both stock and PC widescreen options.
"""
import argparse
import json
from pathlib import Path
import re
import time

from widescreen_probe import Probe


def run(args, pc):
    out = Path(args.out) / ("pc" if pc else "stock")
    probe = Probe(args.exe, args.rom, out, "32:9" if pc else "off",
                  extra_args=["--widescreen-pc", "actors,sprites,smooth"] if pc else [],
                  extra_env={"NESRECOMP_FALLBACK_LOG": "fallback_telemetry.jsonl"})
    timings = []
    try:
        probe.advance(600); probe.advance(2, 0x10); probe.advance(120)
        probe.advance(2, 0x10); probe.advance(650)
        state = probe.out / "spawn.sav"
        probe.cmd("save_state", path=state.as_posix())
        for replay in (False, True):
            prefix = "restored" if replay else "fresh"
            if replay:
                probe.cmd("load_state", path=state.as_posix())
            for i in range(0, 1200, 10):
                # Ordinary controls; no invincibility, gear or position writes.
                buttons = 1 if i < 300 else (0xc1 if i % 75 < 40 else 0x41)
                started = time.perf_counter()
                probe.advance(10, buttons)
                timings.append(dict(run=prefix, offset=i, seconds=time.perf_counter()-started))
                if i % 150 == 140:
                    probe.capture(f"{prefix}_{i+10}")
                    if replay:
                        for suffix in ("ram", "png"):
                            fresh = probe.out / f"fresh_{i+10}.{suffix}"
                            restored = probe.out / f"restored_{i+10}.{suffix}"
                            assert fresh.read_bytes() == restored.read_bytes(), (i+10, suffix)
        probe.check_results()
        events = [json.loads(line) for line in (probe.out / "fallback_telemetry.jsonl").read_text().splitlines()]
        assert all(e.get("total_watchdog_trips", 0) == 0 for e in events)
        assert max(e.get("total_instrs", 0) for e in events) > 2000000
        # Normal shutdown must drain the file writer before the process exits.
        probe.cmd("quit")
        assert probe.proc.wait(timeout=10) == 0
        saved = re.findall(r'\[Password\] Saved "([^"]+)"', (probe.out / "runner.log").read_text())
        history = [line.rsplit(" ", 1)[-1] for line in
                   (probe.out / "metroid_password_log.txt").read_text().splitlines()
                   if line and not line.startswith("#")]
        assert saved and all(len(pw) == 24 for pw in saved)
        assert (probe.out / "metroid.srm").read_text().strip() == saved[-1]
        assert history == saved, "Password history lost or reordered captures"
    finally:
        (probe.out / "timings.json").write_text(json.dumps(timings, indent=2))
        probe.close()


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    for option in ("exe", "rom", "out"):
        parser.add_argument(f"--{option}", required=True)
    args = parser.parse_args()
    for pc in (False, True):
        run(args, pc)
    print("PASS: stock and PC, 1200-frame restored routes match fresh RAM/pixels; zero watchdogs/misses; saves/history drained")


if __name__ == "__main__":
    main()
