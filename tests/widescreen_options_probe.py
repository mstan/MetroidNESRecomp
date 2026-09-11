"""Exercise persisted mod choices through the real runner, without the CLI bypass.

Compare every PC option combination with its explicit CLI equivalent, including
RAM and rendered pixels after starting and moving in a fresh game. Also check
default-off, disabled saved selections, and atomic CLI option rejection.
Requires TRACE=ON. Each run uses an isolated directory and owns only its process.
"""
import argparse
import hashlib
import itertools
import json
from pathlib import Path
import tomllib

from widescreen_probe import Probe


PACKAGE = "metroid.enhancement.widescreen"
OPTIONS = {"actors": "viewport", "sprites": "expanded", "timing": "smooth"}
CLI = {"actors": "actors", "sprites": "sprites", "timing": "smooth"}


def selection(enabled=True, values=None):
    state = f'''format_version = 1
[[package]]
id = "{PACKAGE}"
version = "1.0.0"
[[feature]]
package_id = "{PACKAGE}"
id = "widescreen"
enabled = {str(enabled).lower()}
[feature.values]
aspect = "32-9"
hud = "edges"
'''
    return state + "".join(f'{key} = "{value}"\n' for key, value in (values or {}).items())


def run(args, name, *, aspect=None, state=None, extra=()):
    probe = Probe(args.exe, args.rom, Path(args.out) / name, aspect,
                  mods=args.mods, mod_state=state, extra_args=extra)
    samples = []
    try:
        probe.advance(600); probe.advance(2, 0x10); probe.advance(120)
        probe.advance(2, 0x10); probe.advance(650)
        for label, frames, buttons in (("spawn", 0, 0), ("walk", 40, 1)):
            if frames:
                probe.advance(frames, buttons)
            record = probe.capture(label)
            assert record["mode"] == 0 and record["routine"] == 3, (name, label, record["mode"], record["routine"])
            samples.append(dict(
                ram=(probe.out / f"{label}.ram").read_bytes().hex(),
                pixels=hashlib.sha256((probe.out / f"{label}.png").read_bytes()).hexdigest(),
                # Ignore request ids, which are TCP bookkeeping.
                stats={key: value for key, value in record["stats"].items() if key != "id"},
            ))
        probe.check_results()
    finally:
        probe.close()
    persisted = tomllib.loads((probe.out / "mods/state.toml").read_text())
    return samples, persisted, (probe.out / "runner.log").read_text(errors="replace")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--exe", required=True)
    parser.add_argument("--rom", required=True)
    parser.add_argument("--mods", default="mods/preloaded")
    parser.add_argument("--out", required=True)
    args = parser.parse_args()
    manifest = tomllib.loads((Path(args.mods) / "packages" / PACKAGE / "1.0.0/manifest.toml").read_text())
    assert manifest["feature"][0]["default_enabled"] is False
    declarations = {option["id"]: option for option in manifest["option"]}
    for key, value in OPTIONS.items():
        assert declarations[key]["default"] == "stock", key
        assert {choice["value"] for choice in declarations[key]["choice"]} == {"stock", value}

    default, _, _ = run(args, "default")
    assert all(s["stats"]["enabled"] == 0 and s["stats"]["render_width"] == 256
               and s["stats"]["resident_actors"] == s["stats"]["pc_sprites"] == 0 for s in default)
    off, _, _ = run(args, "disabled_selected", state=selection(False, OPTIONS))
    assert default == off, "Saved enhancement choices bypassed disabled mod"
    pc_only, _, _ = run(args, "pc_without_widescreen", extra=("--widescreen-pc", "actors,sprites,smooth"))
    assert default == pc_only, "PC flags enabled themselves without widescreen"

    results = {}
    for bits in itertools.product((False, True), repeat=3):
        keys = [key for key, bit in zip(OPTIONS, bits) if bit]
        name = "_".join(keys) or "original"
        values = {key: OPTIONS[key] if bit else "stock" for key, bit in zip(OPTIONS, bits)}
        configured, persisted, _ = run(args, "mod_" + name, state=selection(values=values))
        flags = ",".join(CLI[key] for key in keys) or "off"
        command_line, _, _ = run(args, "cli_" + name, aspect="32:9",
                                 extra=("--widescreen-pc", flags))
        assert configured == command_line, f"Mod/CLI behavior differs: {name}"
        feature = next(f for f in persisted["feature"] if f["id"] == "widescreen")
        assert all(feature["values"][key] == value for key, value in values.items())
        for sample in configured:
            stats = sample["stats"]
            assert stats["enabled"] == 1 and stats["render_width"] == 854
            assert (stats["resident_actors"] > 0) == bits[0], (name, stats)
            if bits[0]:
                assert stats["virtual_actors"] > 0 and stats["virtual_updates"] > 0
            assert (stats["pc_sprites"] > 0) == (bits[0] or bits[1]), (name, stats)
        results[name] = configured
        print(f"PASS persisted mod / CLI: {name}", flush=True)

    missing, _, _ = run(args, "missing_choices", state=selection())
    assert missing == results["original"], "Omitted choices must keep original policies"
    for name, flags in (
        ("substring", ("--widescreen-pc", "notactors")),
        ("partial", ("--widescreen-pc", "actors,typo")),
        ("trailing_comma", ("--widescreen-pc", "sprites,")),
        ("reset", ("--widescreen-pc", "actors,sprites,smooth", "--widescreen-pc", "off")),
        ("disable_reenable", ("--widescreen-pc", "actors,sprites,smooth", "--widescreen", "off", "--widescreen", "32:9")),
    ):
        actual, _, log = run(args, name, aspect="32:9", extra=flags)
        assert actual == results["original"], name
        if name in ("substring", "partial", "trailing_comma"):
            assert "bad --widescreen-pc spec" in log, name
    # Distinct observable output/state confirms options are effective, beyond
    # merely accepting and echoing the stored settings.
    assert results["original"] != results["timing"]
    assert results["original"] != results["sprites"]
    assert results["original"] != results["actors"]
    (Path(args.out) / "results.json").write_text(json.dumps(results, indent=2))
    print("PASS: eight option combinations, original defaults, disabled feature, CLI rejection/reset", flush=True)


if __name__ == "__main__":
    main()
