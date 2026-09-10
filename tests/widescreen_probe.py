"""Isolated, deterministic TCP route for the USA widescreen renderer.

Requires a TRACE=ON executable. All saves, logs and screenshots stay in --out.
The probe owns and terminates only its own process; it never deletes user saves.
"""
import argparse
import ctypes
from ctypes import wintypes
import hashlib
import json
import os
from pathlib import Path
import shutil
import socket
import subprocess
import time


class Probe:
    def __init__(self, exe, rom, out, aspect, port=5396, window=False):
        self.out = Path(out).resolve()
        self.out.mkdir(parents=True, exist_ok=False)
        exe = Path(exe).resolve()
        self.exe = self.out / exe.name
        shutil.copy2(exe, self.exe)
        shutil.copy2(exe.parent / "SDL2.dll", self.out / "SDL2.dll")
        (self.out / "debug.ini").write_text(f"port={port}\n")
        env = dict(os.environ, NESRECOMP_NO_LAUNCHER="1", NESRECOMP_START_PAUSED="1")
        self.log = (self.out / "runner.log").open("w")
        args = [str(self.exe), str(Path(rom).resolve()), "--widescreen", aspect]
        if not window:
            args += ["--smoke", "1000000", "--smoke-output", str(self.out / "smoke.json")]
        startup = subprocess.STARTUPINFO()
        startup.dwFlags |= subprocess.STARTF_USESHOWWINDOW
        startup.wShowWindow = 0
        self.proc = subprocess.Popen(args, cwd=self.out, env=env, stdout=self.log,
                                     stderr=subprocess.STDOUT, startupinfo=startup)
        self.sock = None
        deadline = time.monotonic() + 20
        while time.monotonic() < deadline:
            if self.proc.poll() is not None:
                raise RuntimeError(f"Runner exited: {self.out / 'runner.log'}")
            try:
                self.sock = socket.create_connection(("127.0.0.1", port), timeout=1)
                break
            except OSError:
                time.sleep(.05)
        if self.sock is None:
            self.close()
            raise TimeoutError("Debug server unavailable (TRACE=ON required)")
        self.sock.settimeout(30)
        self.stream = self.sock.makefile("rwb", buffering=0)
        self.seq = 0
        self.events = []
        self.records = []
        self.protect_player = False
        self.cmd("set_turbo", enabled=1)

    def cmd(self, cmd, **kw):
        self.seq += 1
        self.stream.write((json.dumps(dict(id=self.seq, cmd=cmd, **kw)) + "\n").encode())
        while True:
            line = self.stream.readline()
            if not line:
                raise RuntimeError("Debug connection closed")
            reply = json.loads(line)
            if reply.get("id") == self.seq:
                if reply.get("ok") is False:
                    raise RuntimeError(reply)
                return reply
            self.events.append(reply)

    def advance(self, frames, buttons=0):
        if self.protect_player:
            # Explicit renderer-route fixture: prevent contact knockback/death.
            # Enemy positions, AI, spawns and collision terrain remain the game's.
            self.cmd("write_ram", addr="0070", val="ff")
            self.cmd("write_ram", addr="0072", val="ff")  # SamusKnockbackDir: none
        target = self.cmd("frame")["frame"] + frames
        # press/step counters include nested engine callbacks; a permanent
        # input override plus an absolute frame target follows presented frames.
        self.cmd("set_input", buttons=f"{buttons:02x}")
        self.cmd("run_to_frame", frame=target)
        while True:
            if self.events and self.events[-1].get("event") == "run_to_done":
                self.events.clear()
                break
            reply = json.loads(self.stream.readline())
            if reply.get("event") == "run_to_done":
                break
        actual = self.cmd("frame")["frame"]
        if not target <= actual <= target + 1:
            raise RuntimeError(f"Runner stopped at frame {actual}, expected {target}")

    def capture(self, name):
        ram = b"".join(bytes.fromhex(self.cmd("read_ram", addr=f"{base:04x}", len=256)["hex"])
                       for base in range(0, 0x800, 256))
        extra = bytes.fromhex(self.cmd("read_ram", addr="6af4", len=96)["hex"])
        record = dict(name=name, frame=self.cmd("frame"), stats=self.cmd("ws_stats"),
                      protected_player_fixture=self.protect_player,
                      map_x=ram[0x50], map_y=ram[0x4f], scroll_dir=ram[0x49],
                      scroll_x=ram[0xfd], scroll_y=ram[0xfc], mode=ram[0x1d],
                      routine=ram[0x1e], samus=list(ram[0x300:0x310]),
                      samus_x=ram[0x30e], samus_y=ram[0x30d], samus_hi=ram[0x30c],
                      enemies=[dict(slot=i, base=list(ram[0x400+i:0x410+i]),
                                    extra=list(extra[i:i+16]))
                               for i in range(0, 0x60, 0x10)])
        self.cmd("screenshot", path=(self.out / f"{name}.png").as_posix())
        (self.out / f"{name}.ram").write_bytes(ram)
        self.records.append(record)
        (self.out / "route.json").write_text(json.dumps(self.records, indent=2))
        print(json.dumps({k:record[k] for k in ("name","map_x","map_y","scroll_dir","scroll_x","scroll_y","routine","samus_x","samus_y")} ), flush=True)
        return record

    def resize(self, width, height):
        user = ctypes.windll.user32
        handles = []
        callback = ctypes.WINFUNCTYPE(wintypes.BOOL, wintypes.HWND, wintypes.LPARAM)
        @callback
        def collect(hwnd, _):
            pid = wintypes.DWORD()
            user.GetWindowThreadProcessId(hwnd, ctypes.byref(pid))
            if pid.value == self.proc.pid:
                title = ctypes.create_unicode_buffer(256)
                cls = ctypes.create_unicode_buffer(256)
                user.GetWindowTextW(hwnd, title, 256)
                user.GetClassNameW(hwnd, cls, 256)
                if cls.value == "SDL_app":
                    handles.append(hwnd)
            return True
        user.EnumWindows(collect, 0)
        if not handles:
            raise RuntimeError("No runner window found")
        hwnd = handles[0]
        # The engine's TCP-pause loop drains window events without forwarding
        # SIZE_CHANGED. Resize during normal execution, as a player would.
        self.cmd("set_input", buttons="00")
        self.cmd("set_turbo", enabled=0)
        self.cmd("continue")
        time.sleep(.1)
        rect = wintypes.RECT(0, 0, width, height)
        user.AdjustWindowRectEx(ctypes.byref(rect), user.GetWindowLongW(hwnd, -16),
                                False, user.GetWindowLongW(hwnd, -20))
        if not user.SetWindowPos(hwnd, None, 0, 0, rect.right-rect.left,
                                 rect.bottom-rect.top, 0x16):
            raise ctypes.WinError()
        client = wintypes.RECT()
        user.GetClientRect(hwnd, ctypes.byref(client))
        (self.out / "window.json").write_text(json.dumps(dict(
            client_width=client.right, client_height=client.bottom, hwnd=hwnd)))
        time.sleep(.3)
        self.cmd("pause")
        self.cmd("set_turbo", enabled=1)
        return self.capture(f"resize_{width}_{height}")

    def close(self):
        if hasattr(self, "stream"):
            self.stream.close()
        if self.sock:
            self.sock.close()
        if self.proc.poll() is None:
            self.proc.terminate()
            self.proc.wait(timeout=10)
        self.log.close()

    def check_results(self):
        faults = self.cmd("dispatch_miss_info")
        (self.out / "faults.json").write_text(json.dumps(faults, indent=2))
        assert faults["total_misses"] == 0, faults
        assert all(r["stats"]["decoder_mismatch"] == 0 for r in self.records), "Decoder mismatch"


def descend_shaft(probe):
    """Renderer fixture: grant Morph Ball/bombs, break the floor and descend."""
    gear = int(probe.cmd("read_ram", addr="6878", len=1)["hex"], 16)
    probe.cmd("write_ram", addr="6878", val=f"{gear | 0x11:02x}")
    (probe.out / "shaft_fixture.json").write_text(json.dumps(dict(
        samus_gear_before=gear, samus_gear_after=gear | 0x11,
        protected_player=True)))
    probe.advance(80, 0x01)
    probe.advance(35, 0x02)
    probe.advance(4, 0x04)
    probe.advance(45, 0x02)
    probe.advance(8, 0x40)
    probe.advance(80)
    probe.capture("shaft_bomb")
    probe.advance(25, 0x01)
    for i in range(6):
        probe.advance(40, 0x01 if i < 2 else 0)
        record = probe.capture(f"shaft_drop_{i:02}")
    assert record["map_y"] >= 18, record
    # Partial row masks prove the observer sees vertical transfers, rather
    # than only recognizing a completed full-nametable upload.
    assert any(0 < mask < 0x3fffffff for r in probe.records
               if r["name"].startswith("shaft_drop")
               for mask in r["stats"]["streamed_rows"])


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--exe", required=True)
    parser.add_argument("--rom", required=True)
    parser.add_argument("--out", required=True)
    parser.add_argument("--aspect", default="32:9")
    parser.add_argument("--protect-player", action="store_true",
                        help="renderer fixture: suppress player damage/knockback through $70/$72")
    parser.add_argument("--window", action="store_true", help="exercise real SDL window resizing")
    mode = parser.add_mutually_exclusive_group()
    mode.add_argument("--extended", action="store_true", help="check a short save/load replay")
    mode.add_argument("--shaft", action="store_true", help="grant bombs/Morph Ball and descend the shaft")
    args = parser.parse_args()
    if args.shaft and not args.protect_player:
        parser.error("--shaft requires --protect-player for the deterministic renderer fixture")
    probe = Probe(args.exe, args.rom, args.out, args.aspect, window=args.window)
    try:
        probe.advance(600)
        probe.advance(2, 0x10)
        probe.advance(120)
        probe.advance(2, 0x10)
        probe.advance(650)
        probe.capture("spawn")
        probe.protect_player = args.protect_player
        probe.cmd("save_state", path=(probe.out / "spawn.state").as_posix())
        if args.window:
            for width, height in [(800, 600), (1280, 720), (1680, 720), (1708, 480), (640, 720)]:
                resized = probe.resize(width, height)
                if args.aspect == "fit":
                    expected = max(256, min(854, int(240 * width / height + 1) & ~1))
                    assert resized["stats"]["render_width"] == expected, (resized, expected)
        for i in range(16):
            probe.advance(20, 0x01)
            probe.advance(40, 0xc1)  # right + shoot + full jump
            probe.advance(15, 0x41)
            probe.capture(f"right_{i:02}")
            if i == 8:
                probe.cmd("save_state", path=(probe.out / "shaft.state").as_posix())
                if args.shaft:
                    descend_shaft(probe)
                    probe.check_results()
                    return
            if i == 5:
                probe.cmd("save_state", path=(probe.out / "approach.state").as_posix())
                probe.advance(40)
                probe.advance(20, 0x01)
                probe.advance(45, 0x81)
                probe.advance(12, 0xc1)
                probe.advance(6, 0x01)
                probe.advance(70, 0x41)
                probe.capture("door_entry")
        probe.cmd("save_state", path=(probe.out / "door.state").as_posix())
        for i in range(8):
            probe.advance(20, 0x02)
            probe.advance(40, 0xc2)
            probe.advance(15, 0x42)
            probe.capture(f"left_{i:02}")
        if args.extended:
            probe.cmd("load_state", path=(probe.out / "approach.state").as_posix())
            probe.advance(1)
            replay = probe.out / "replay.state"
            probe.cmd("save_state", path=replay.as_posix())
            probe.advance(10, 0x01)
            probe.capture("replay_expected")
            probe.advance(90, 0x02)
            probe.cmd("load_state", path=replay.as_posix())
            probe.advance(10, 0x01)
            probe.capture("replay_actual")
            hashes = {n: hashlib.sha256((probe.out / f"replay_{n}.png").read_bytes()).hexdigest()
                      for n in ("expected", "actual")}
            (probe.out / "replay.json").write_text(json.dumps(hashes, indent=2))
            assert hashes["expected"] == hashes["actual"], hashes
        probe.check_results()
    finally:
        probe.close()


if __name__ == "__main__":
    main()
