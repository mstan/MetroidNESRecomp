#!/usr/bin/env python3
"""
nes_compare.py — Dual-instance TCP ring buffer comparison tool.

Connects to two instances of a NES recomp runner (native vs emulated),
queries their frame ring buffers, auto-aligns by detecting matching
game state signatures, and reports divergences.

Usage:
    python tools/nes_compare.py [--native-port 4370] [--emu-port 4371]
                                [--ram-diff] [--context N]
                                [--no-align] [--align-field FIELD]
"""
import argparse
import json
import socket
import sys
import time
from dataclasses import dataclass, field
from typing import Optional, List, Tuple


# ---------------------------------------------------------------------------
# TCP client for the NES debug server JSON-over-newline protocol
# ---------------------------------------------------------------------------

class NESDebugClient:
    def __init__(self, host: str = "127.0.0.1", port: int = 4370, label: str = ""):
        self.host = host
        self.port = port
        self.label = label or f":{port}"
        self._sock: Optional[socket.socket] = None
        self._buf = b""
        self._next_id = 1

    def connect(self, timeout: float = 5.0):
        self._sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self._sock.settimeout(timeout)
        self._sock.connect((self.host, self.port))
        self._buf = b""

    def close(self):
        if self._sock:
            self._sock.close()
            self._sock = None

    def _send(self, obj: dict):
        line = json.dumps(obj, separators=(",", ":")) + "\n"
        self._sock.sendall(line.encode())

    def _recv_line(self, timeout: float = 10.0) -> dict:
        deadline = time.monotonic() + timeout
        while True:
            idx = self._buf.find(b"\n")
            if idx >= 0:
                line = self._buf[:idx]
                self._buf = self._buf[idx + 1:]
                if not line.strip():
                    continue
                return json.loads(line)
            remaining = deadline - time.monotonic()
            if remaining <= 0:
                raise TimeoutError(f"[{self.label}] No response within {timeout}s")
            self._sock.settimeout(remaining)
            chunk = self._sock.recv(65536)
            if not chunk:
                raise ConnectionError(f"[{self.label}] Connection closed")
            self._buf += chunk

    def send_cmd(self, cmd: str, timeout: float = 10.0, **kwargs) -> dict:
        msg_id = self._next_id
        self._next_id += 1
        obj = {"cmd": cmd, "id": msg_id}
        obj.update(kwargs)
        self._send(obj)
        while True:
            resp = self._recv_line(timeout)
            if "event" in resp:
                continue
            if resp.get("id") == msg_id:
                return resp

    def send_cmd_multi(self, cmd: str, timeout: float = 10.0, **kwargs) -> list:
        """Send command, collect ALL response lines with matching id (for dump_ram)."""
        msg_id = self._next_id
        self._next_id += 1
        obj = {"cmd": cmd, "id": msg_id}
        obj.update(kwargs)
        self._send(obj)
        results = []
        while True:
            resp = self._recv_line(timeout)
            if "event" in resp:
                continue
            if resp.get("id") == msg_id:
                results.append(resp)
                if not resp.get("ok", False):
                    return results
                if cmd == "dump_ram":
                    total_len = kwargs.get("len", 256)
                    received = sum(r.get("len", 0) for r in results)
                    if received >= total_len:
                        return results
                else:
                    return results

    def ping(self) -> dict:
        return self.send_cmd("ping")

    def history(self) -> dict:
        return self.send_cmd("history")

    def get_frame(self, frame: int) -> dict:
        return self.send_cmd("get_frame", frame=frame)

    def frame_timeseries(self, start: int, end: int) -> dict:
        return self.send_cmd("frame_timeseries", start=start, end=end, timeout=30.0)

    def dump_ram(self, addr: int, length: int) -> bytes:
        """Read RAM and return as bytes."""
        responses = self.send_cmd_multi(
            "dump_ram", addr=f"0x{addr:04X}", len=length, timeout=30.0
        )
        data = bytearray(length)
        for r in responses:
            if not r.get("ok"):
                raise RuntimeError(f"[{self.label}] dump_ram error: {r.get('error')}")
            offset = r.get("offset", 0)
            hex_str = r.get("hex", "")
            chunk = bytes.fromhex(hex_str)
            data[offset:offset + len(chunk)] = chunk
        return bytes(data)

    def ppu_state(self) -> dict:
        return self.send_cmd("ppu_state")


# ---------------------------------------------------------------------------
# Metroid game_data decoder
# ---------------------------------------------------------------------------

GAME_DATA_FIELDS = [
    ("$1D GameEnable", 0),
    ("$1E GameMode", 1),
    ("$1F MainRoutine", 2),
    ("$24 BankInitReq", 3),
    ("$56 EngineSub", 4),
    ("$2C DelayTimer", 5),
    ("$0300 FrameProgress", 6),
    ("$0680 Slot0Dispatch", 7),
    ("$0685 Slot5Dispatch", 8),
    ("$1A NMIFlag", 9),
    ("OAM[0].Y Spr0", 10),
    ("OAM[4].Y Spr1", 11),
    ("$C8 AnimFlag", 12),
    ("$0108 TransLo", 13),
    ("$0109 TransHi", 14),
    ("Bank", 15),
]


def decode_game_data(hex_str: str) -> dict:
    raw = bytes.fromhex(hex_str)
    result = {}
    for name, idx in GAME_DATA_FIELDS:
        if idx < len(raw):
            result[name] = raw[idx]
    return result


# ---------------------------------------------------------------------------
# Frame record from timeseries
# ---------------------------------------------------------------------------

@dataclass
class FrameRecord:
    frame: int = 0
    verify: int = -1
    a: int = 0
    x: int = 0
    y: int = 0
    ctrl: int = 0
    mask: int = 0
    sx: int = 0
    sy: int = 0
    bank: int = 0
    buttons: int = 0
    game_data_hex: str = ""
    game_data: dict = field(default_factory=dict)

    @classmethod
    def from_ts(cls, obj: dict) -> "FrameRecord":
        if obj is None:
            return None
        gd_hex = obj.get("gd", "00" * 16)
        return cls(
            frame=obj.get("f", 0),
            verify=obj.get("v", -1),
            a=obj.get("a", 0),
            x=obj.get("x", 0),
            y=obj.get("y", 0),
            ctrl=obj.get("ctrl", 0),
            mask=obj.get("mask", 0),
            sx=obj.get("sx", 0),
            sy=obj.get("sy", 0),
            bank=obj.get("bk", 0),
            buttons=obj.get("btn", 0),
            game_data_hex=gd_hex,
            game_data=decode_game_data(gd_hex),
        )

    def gd_byte(self, idx: int) -> int:
        raw = bytes.fromhex(self.game_data_hex)
        return raw[idx] if idx < len(raw) else 0


# ---------------------------------------------------------------------------
# Frame alignment
# ---------------------------------------------------------------------------

def extract_signature(rec: FrameRecord) -> tuple:
    """Extract a game-state signature for alignment matching.
    Uses game_data fields that represent high-level game state:
    $1D (GameEnable), $1E (GameMode), $1F (MainRoutine)."""
    return (rec.gd_byte(0), rec.gd_byte(1), rec.gd_byte(2))


def find_signature_transitions(records: dict) -> List[Tuple[int, tuple, tuple]]:
    """Find frames where the game-state signature changes.
    Returns [(frame, old_sig, new_sig), ...]."""
    transitions = []
    sorted_frames = sorted(records.keys())
    prev_sig = None
    for f in sorted_frames:
        sig = extract_signature(records[f])
        if prev_sig is not None and sig != prev_sig:
            transitions.append((f, prev_sig, sig))
        prev_sig = sig
    return transitions


def compute_alignment_offset(n_records: dict, e_records: dict) -> int:
    """Compute frame offset: native_frame = emulated_frame + offset.

    Scans both timeseries for matching sequences of game-state transitions.
    The NES boot sequence may add extra initialization frames that the
    native recompiled build skips, so we find where both instances reach
    the same game-state progression and calculate the offset.

    Returns the offset (can be negative). 0 means already aligned.
    """
    n_trans = find_signature_transitions(n_records)
    e_trans = find_signature_transitions(e_records)

    if not n_trans or not e_trans:
        return 0

    # Build transition signature sequences (ignoring frame numbers)
    # and try to match them
    n_sigs = [(old, new) for _, old, new in n_trans]
    e_sigs = [(old, new) for _, old, new in e_trans]

    # Find the first matching transition pair (a sequence of 2+ identical transitions)
    best_offset = None
    best_match_len = 0

    for ni, n_t in enumerate(n_trans):
        for ei, e_t in enumerate(e_trans):
            if n_sigs[ni] == e_sigs[ei]:
                # Count how many consecutive transitions match
                match_len = 0
                while (ni + match_len < len(n_trans) and
                       ei + match_len < len(e_trans) and
                       n_sigs[ni + match_len] == e_sigs[ei + match_len]):
                    match_len += 1

                if match_len > best_match_len:
                    best_match_len = match_len
                    # offset = native_frame - emulated_frame
                    best_offset = n_trans[ni][0] - e_trans[ei][0]

    if best_offset is not None and best_match_len >= 2:
        return best_offset

    # Fallback: match on the first identical transition
    for _, n_old, n_new in n_trans:
        for e_frame, e_old, e_new in e_trans:
            if (n_old, n_new) == (e_old, e_new):
                # Find matching native frame
                for n_frame, no, nn in n_trans:
                    if (no, nn) == (e_old, e_new):
                        return n_frame - e_frame
    return 0


# ---------------------------------------------------------------------------
# Comparison engine
# ---------------------------------------------------------------------------

COMPARE_FIELDS = [
    ("CPU.A", "a"),
    ("CPU.X", "x"),
    ("CPU.Y", "y"),
    ("PPU.ctrl", "ctrl"),
    ("PPU.mask", "mask"),
    ("Scroll.X", "sx"),
    ("Scroll.Y", "sy"),
    ("Bank", "bank"),
    ("Buttons", "buttons"),
]


def compare_frame(native: FrameRecord, emulated: FrameRecord) -> list:
    """Compare two frame records. Returns list of (field, native_val, emu_val)."""
    diffs = []
    for label, attr in COMPARE_FIELDS:
        nv = getattr(native, attr)
        ev = getattr(emulated, attr)
        if nv != ev:
            diffs.append((label, nv, ev))

    n_gd = bytes.fromhex(native.game_data_hex)
    e_gd = bytes.fromhex(emulated.game_data_hex)
    for name, idx in GAME_DATA_FIELDS:
        if idx < len(n_gd) and idx < len(e_gd):
            if n_gd[idx] != e_gd[idx]:
                diffs.append((f"gd[{idx}] {name}", n_gd[idx], e_gd[idx]))

    return diffs


def fetch_timeseries(client: NESDebugClient, start: int, end: int) -> dict:
    """Fetch timeseries in 200-frame batches, return {frame: FrameRecord}."""
    records = {}
    batch_start = start
    while batch_start <= end:
        batch_end = min(batch_start + 199, end)
        resp = client.frame_timeseries(batch_start, batch_end)
        if not resp.get("ok"):
            print(f"  [{client.label}] timeseries error: {resp.get('error')}", file=sys.stderr)
            batch_start = batch_end + 1
            continue
        ts = resp.get("ts", [])
        for entry in ts:
            if entry is not None:
                fr = FrameRecord.from_ts(entry)
                records[fr.frame] = fr
        batch_start = batch_end + 1
    return records


def ram_diff(native_client: NESDebugClient, emu_client: NESDebugClient):
    """Dump full 2KB work RAM from both instances and diff."""
    print("\n--- Full RAM Diff (0x0000-0x07FF) ---")
    try:
        n_ram = native_client.dump_ram(0x0000, 0x0800)
        e_ram = emu_client.dump_ram(0x0000, 0x0800)
    except Exception as e:
        print(f"  Error dumping RAM: {e}", file=sys.stderr)
        return

    diff_count = 0
    print(f"  {'Addr':>6}  {'Native':>8}  {'Emulated':>8}")
    print(f"  {'----':>6}  {'------':>8}  {'--------':>8}")
    for i in range(len(n_ram)):
        if n_ram[i] != e_ram[i]:
            print(f"  ${i:04X}    0x{n_ram[i]:02X}      0x{e_ram[i]:02X}")
            diff_count += 1
    if diff_count == 0:
        print("  (no differences)")
    else:
        print(f"  Total: {diff_count} bytes differ")


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------

def main():
    parser = argparse.ArgumentParser(
        description="Compare NES recomp native vs emulated via TCP ring buffers"
    )
    parser.add_argument("--native-port", type=int, default=4370)
    parser.add_argument("--emu-port", type=int, default=4371)
    parser.add_argument("--start", type=int, default=0, help="Start frame (default: 0)")
    parser.add_argument("--end", type=int, default=-1, help="End frame (default: auto)")
    parser.add_argument("--ram-diff", action="store_true", help="Full RAM diff at first divergence")
    parser.add_argument("--context", type=int, default=5, help="Context frames around divergence")
    parser.add_argument("--host", default="127.0.0.1")
    parser.add_argument("--no-align", action="store_true",
                        help="Disable auto frame alignment (compare raw frame numbers)")
    args = parser.parse_args()

    native = NESDebugClient(args.host, args.native_port, label="native")
    emu = NESDebugClient(args.host, args.emu_port, label="emulated")

    # Connect
    print(f"Connecting to native on port {args.native_port}...")
    try:
        native.connect()
    except Exception as e:
        print(f"  FAILED: {e}", file=sys.stderr)
        sys.exit(1)

    print(f"Connecting to emulated on port {args.emu_port}...")
    try:
        emu.connect()
    except Exception as e:
        print(f"  FAILED: {e}", file=sys.stderr)
        native.close()
        sys.exit(1)

    # Ping
    n_ping = native.ping()
    e_ping = emu.ping()
    print(f"Native  frame: {n_ping.get('frame', '?')}")
    print(f"Emulated frame: {e_ping.get('frame', '?')}")

    # Get history ranges
    n_hist = native.history()
    e_hist = emu.history()
    n_oldest = n_hist.get("oldest", 0)
    n_newest = n_hist.get("newest", 0)
    e_oldest = e_hist.get("oldest", 0)
    e_newest = e_hist.get("newest", 0)

    print(f"Native  ring buffer: frames {n_oldest} - {n_newest}")
    print(f"Emulated ring buffer: frames {e_oldest} - {e_newest}")

    # Fetch all available data from both for alignment
    n_fetch_start = max(n_oldest, args.start)
    n_fetch_end = n_newest if args.end < 0 else min(n_newest, args.end)
    e_fetch_start = max(e_oldest, args.start)
    e_fetch_end = e_newest if args.end < 0 else min(e_newest, args.end)

    print(f"\nFetching native timeseries ({n_fetch_start}-{n_fetch_end})...", end="", flush=True)
    n_records = fetch_timeseries(native, n_fetch_start, n_fetch_end)
    print(f" {len(n_records)} frames")

    print(f"Fetching emulated timeseries ({e_fetch_start}-{e_fetch_end})...", end="", flush=True)
    e_records = fetch_timeseries(emu, e_fetch_start, e_fetch_end)
    print(f" {len(e_records)} frames")

    # Alignment
    offset = 0
    if not args.no_align:
        print("\n--- Frame Alignment ---")
        n_trans = find_signature_transitions(n_records)
        e_trans = find_signature_transitions(e_records)

        print(f"  Native transitions ({len(n_trans)}):")
        for f, old, new in n_trans[:15]:
            print(f"    frame {f:>5}: ($1D,$1E,$1F) {old} -> {new}")
        if len(n_trans) > 15:
            print(f"    ... and {len(n_trans)-15} more")

        print(f"  Emulated transitions ({len(e_trans)}):")
        for f, old, new in e_trans[:15]:
            print(f"    frame {f:>5}: ($1D,$1E,$1F) {old} -> {new}")
        if len(e_trans) > 15:
            print(f"    ... and {len(e_trans)-15} more")

        offset = compute_alignment_offset(n_records, e_records)
        if offset == 0:
            print("  Alignment: frames already aligned (offset=0)")
        else:
            print(f"  Alignment: native_frame = emulated_frame + {offset}")
            print(f"  (native is {'ahead' if offset > 0 else 'behind'} by {abs(offset)} frames)")
    else:
        print("\nAlignment disabled (--no-align)")

    # Build aligned pairs: iterate emulated frames, look up native at emu_frame + offset
    print(f"\n{'='*60}")
    print(f"Comparing with offset={offset} (native_frame = emu_frame + {offset})")
    print(f"{'='*60}\n")

    compared = 0
    matched = 0
    diverged = 0
    first_diverge_emu = None

    e_sorted = sorted(e_records.keys())
    for ef in e_sorted:
        nf = ef + offset
        if nf not in n_records:
            continue
        compared += 1
        diffs = compare_frame(n_records[nf], e_records[ef])
        if diffs:
            diverged += 1
            if first_diverge_emu is None:
                first_diverge_emu = ef
        else:
            matched += 1

    print(f"Compared: {compared} frame pairs")
    print(f"Matched:  {matched}")
    print(f"Diverged: {diverged}")

    if diverged == 0:
        print(f"\nAll {compared} aligned frame pairs MATCH.")
    else:
        first_diverge_native = first_diverge_emu + offset
        print(f"\nFirst divergence: native frame {first_diverge_native} vs emulated frame {first_diverge_emu}")

        nr = n_records.get(first_diverge_native)
        er = e_records.get(first_diverge_emu)
        if nr and er:
            diffs = compare_frame(nr, er)
            print(f"\n--- Divergence detail ---")
            print(f"  {'Field':<25} {'Native':>10} {'Emulated':>10}")
            print(f"  {'-'*25} {'-'*10} {'-'*10}")
            for label, nv, ev in diffs:
                print(f"  {label:<25} 0x{nv:02X}={nv:<5d} 0x{ev:02X}={ev:<5d}")

        # Context
        ctx = args.context
        ctx_emu_start = max(min(e_records.keys()), first_diverge_emu - ctx)
        ctx_emu_end = min(max(e_records.keys()), first_diverge_emu + ctx)
        print(f"\n--- Context (emu frames {ctx_emu_start}-{ctx_emu_end}, "
              f"native frames {ctx_emu_start+offset}-{ctx_emu_end+offset}) ---")
        print(f"  {'E.frm':>6} {'N.frm':>6}  {'N.A':>4} {'E.A':>4}  "
              f"{'N.sX':>4} {'E.sX':>4}  "
              f"{'N.$1D':>5} {'E.$1D':>5}  {'N.$1E':>5} {'E.$1E':>5}  "
              f"{'N.$1F':>5} {'E.$1F':>5}  {'Diff?':>5}")
        for ef in range(ctx_emu_start, ctx_emu_end + 1):
            nf = ef + offset
            er = e_records.get(ef)
            nr = n_records.get(nf)
            if er is None or nr is None:
                continue
            n_gd = bytes.fromhex(nr.game_data_hex)
            e_gd = bytes.fromhex(er.game_data_hex)
            has_diff = "<<<" if compare_frame(nr, er) else ""
            print(f"  {ef:>6} {nf:>6}  0x{nr.a:02X} 0x{er.a:02X}  "
                  f"{nr.sx:>4} {er.sx:>4}  "
                  f"  0x{n_gd[0]:02X}  0x{e_gd[0]:02X}  "
                  f"  0x{n_gd[1]:02X}  0x{e_gd[1]:02X}  "
                  f"  0x{n_gd[2]:02X}  0x{e_gd[2]:02X}  "
                  f"{has_diff}")

        if args.ram_diff:
            ram_diff(native, emu)

    native.close()
    emu.close()


if __name__ == "__main__":
    main()
