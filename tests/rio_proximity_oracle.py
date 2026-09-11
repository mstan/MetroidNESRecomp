"""Run the USA ROM's proximity routine in Mesen using an isolated test ROM.

The two original PRG banks are mapped directly as NROM. A reset harness calls
the unchanged F75B routine and its original dependencies with boundary inputs.
No owner ROM or save is modified. This tests the trigger, not complete Rio AI.
"""
import json
import os
from pathlib import Path
import subprocess


def run_oracle(rom_path, nesref, core, out):
    out = Path(out).resolve()
    out.mkdir(parents=True, exist_ok=False)
    rom = Path(rom_path).read_bytes()
    prg = bytearray(rom[16+0x4000:16+0x8000] + rom[16+7*0x4000:16+8*0x4000])
    # (Enemy X, Samus X) in a two-nametable coordinate system. Both sides,
    # odd/even rounding, and a nametable boundary are represented.
    cases = [(204, x) for x in (60, 76, 77, 78, 79, 124)]
    cases += [(205, 77), (205, 78), (50, 176), (50, 178),
              (300, 172), (300, 174), (300, 426), (300, 428)]
    code = bytearray([0x78, 0xd8, 0xa2, 0xff, 0x9a])  # SEI, CLD, LDX, TXS

    def store(address, value):
        code.extend((0xa9, value & 255, 0x8d, address & 255, address >> 8))

    store(0x2000, 0)  # no NMI; the original query executes synchronously
    store(0x2001, 0)
    store(0x4017, 0x40)
    for i, (enemy, player) in enumerate(cases):
        for address, value in ((0x0401, enemy), (0x030e, player),
                               (0x6afb, enemy >> 8), (0x030c, player >> 8),
                               (0x0405, 2), (0x6b02, 6)):
            store(address, value)
        code.extend((0xa2, 0, 0x20, 0x5b, 0xf7, 0xad, 0x05, 0x04,
                     0x8d, i, 0x05))
    store(0x05ff, 0xa5)
    end = 0xc000 + len(code)
    code.extend((0x4c, end & 255, end >> 8))
    assert len(code) < 0x3d4, "Harness overlaps TwosComplement"
    prg[0x4000:0x4000+len(code)] = code
    prg[0x7ffa:0x8000] = bytes((0, 0xc0, 0, 0xc0, 0, 0xc0))
    fixture = out / "proximity.nes"
    fixture.write_bytes(b"NES\x1a" + bytes((2, 0, 0, 0)) + bytes(8) + prg)
    trace = out / "ram.jsonl"
    env = dict(os.environ, NESREF_FRAMES="4", NESREF_TRACE_FILE=str(trace))
    startup = subprocess.STARTUPINFO()
    startup.dwFlags |= subprocess.STARTF_USESHOWWINDOW
    startup.wShowWindow = 0
    with (out / "mesen.log").open("w") as log:
        subprocess.run([str(Path(nesref).resolve()), str(Path(core).resolve()), str(fixture)],
                       cwd=out, env=env, stdout=log, stderr=subprocess.STDOUT,
                       startupinfo=startup, check=True, timeout=30)
    ram = bytearray(2048)
    for line in trace.read_text().splitlines():
        r = json.loads(line)
        ram[int(r["adr"], 16)] = int(r["val"], 16)
    assert ram[0x5ff] == 0xa5, "Mesen did not complete the ROM query fixture"
    results = []
    for i, (enemy, player) in enumerate(cases):
        expected = (abs((enemy >> 1) - (player >> 1)) >> 3) < 8
        actual = bool(ram[0x500+i] & 8)
        assert actual == expected, (enemy, player, actual, expected)
        results.append(dict(enemy=enemy, player=player, near=actual))
    (out / "results.json").write_text(json.dumps(results, indent=2))
    return results
