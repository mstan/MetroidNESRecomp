#!/usr/bin/env python3
"""Find exactly when scroll_x first diverges between native and emulated."""
import socket, json, time, sys

def connect(port):
    s = socket.socket()
    s.settimeout(10)
    s.connect(('127.0.0.1', port))
    return s

def send_cmd(sock, cmd, **kwargs):
    msg_id = int(time.monotonic() * 1000) % 100000
    obj = {"cmd": cmd, "id": msg_id}
    obj.update(kwargs)
    sock.sendall((json.dumps(obj, separators=(",", ":")) + "\n").encode())
    buf = b""
    while True:
        buf += sock.recv(65536)
        idx = buf.find(b"\n")
        if idx >= 0:
            line = buf[:idx]
            resp = json.loads(line)
            if resp.get("id") == msg_id:
                return resp

def get_timeseries(sock, start, end):
    return send_cmd(sock, "frame_timeseries", start=start, end=end)

def get_frame_detail(sock, frame):
    return send_cmd(sock, "get_frame", frame=frame)

ns = connect(4370)
es = connect(4371)

# Get ranges
nh = send_cmd(ns, "history")
eh = send_cmd(es, "history")
print(f"Native:   frames {nh['oldest']}-{nh['newest']}")
print(f"Emulated: frames {eh['oldest']}-{eh['newest']}")

# Scan timeseries looking for first scroll divergence
# Use alignment offset from previous runs (try offsets 0-5)
n_newest = nh['newest']
e_newest = eh['newest']

# First, find alignment by matching game state transitions
# Fetch first 300 frames from both
print("\nFetching timeseries for alignment...")
n_ts = get_timeseries(ns, 0, min(199, n_newest))
e_ts = get_timeseries(es, 0, min(199, e_newest))

n_frames = {e['f']: e for e in n_ts.get('ts', []) if e}
e_frames = {e['f']: e for e in e_ts.get('ts', []) if e}

# Find first frame where $1D transitions to 1 in each
def find_transition(frames, gd_idx, from_val, to_val):
    for f in sorted(frames.keys()):
        gd = bytes.fromhex(frames[f].get('gd', '00'*16))
        if gd[gd_idx] == to_val:
            return f
    return None

n_1d_start = find_transition(n_frames, 0, 0, 1)  # $1D -> 1
e_1d_start = find_transition(e_frames, 0, 0, 1)
print(f"$1D=1 first at: native frame {n_1d_start}, emulated frame {e_1d_start}")

if n_1d_start is not None and e_1d_start is not None:
    offset = n_1d_start - e_1d_start
else:
    offset = 0
print(f"Alignment offset: {offset} (native = emu + {offset})")

# Now scan for first scroll divergence after alignment
print(f"\n{'='*70}")
print(f"Scanning for scroll_x divergence...")
print(f"{'='*70}")
print(f"{'E.frm':>6} {'N.frm':>6}  {'N.sx':>5} {'E.sx':>5}  {'N.sy':>5} {'E.sy':>5}  "
      f"{'N.ctrl':>6} {'E.ctrl':>6}  {'N.mask':>6} {'E.mask':>6}  {'N.$1E':>5} {'E.$1E':>5}")

first_scroll_diff = None
scan_end = min(e_newest, 500)

for batch_start in range(0, scan_end + 1, 200):
    batch_end = min(batch_start + 199, scan_end)

    e_batch = get_timeseries(es, batch_start, batch_end)
    n_batch_start = batch_start + offset
    n_batch_end = batch_end + offset
    if n_batch_start < 0:
        continue
    n_batch = get_timeseries(ns, max(0, n_batch_start), min(n_newest, n_batch_end))

    e_data = {e['f']: e for e in e_batch.get('ts', []) if e}
    n_data = {e['f']: e for e in n_batch.get('ts', []) if e}

    for ef in range(batch_start, batch_end + 1):
        nf = ef + offset
        if ef not in e_data or nf not in n_data:
            continue

        ne = n_data[nf]
        ee = e_data[ef]

        n_sx, e_sx = ne['sx'], ee['sx']
        n_sy, e_sy = ne['sy'], ee['sy']
        n_ctrl, e_ctrl = ne['ctrl'], ee['ctrl']
        n_mask, e_mask = ne['mask'], ee['mask']
        n_gd = bytes.fromhex(ne.get('gd', '00'*16))
        e_gd = bytes.fromhex(ee.get('gd', '00'*16))

        # Print if scroll or PPU differs, or at key transitions
        scroll_diff = (n_sx != e_sx or n_sy != e_sy)
        ppu_diff = (n_ctrl != e_ctrl or n_mask != e_mask)

        if scroll_diff or ppu_diff or ef % 50 == 0:
            marker = " <<<" if scroll_diff else ""
            print(f"  {ef:>5} {nf:>5}  {n_sx:>5} {e_sx:>5}  {n_sy:>5} {e_sy:>5}  "
                  f"  0x{n_ctrl:02X}   0x{e_ctrl:02X}  "
                  f"  0x{n_mask:02X}   0x{e_mask:02X}  "
                  f"  0x{n_gd[1]:02X}  0x{e_gd[1]:02X}"
                  f"{marker}")

        if scroll_diff and first_scroll_diff is None:
            first_scroll_diff = ef

if first_scroll_diff is not None:
    print(f"\n*** First scroll divergence at emulated frame {first_scroll_diff} "
          f"(native frame {first_scroll_diff + offset}) ***")

    # Get detailed frame data around the divergence
    print(f"\nDetailed zero-page diff at divergence point:")
    nf = first_scroll_diff + offset
    n_detail = get_frame_detail(ns, nf)
    e_detail = get_frame_detail(es, first_scroll_diff)

    n_zp = bytes.fromhex(n_detail.get('ram_zp', '00'*256))
    e_zp = bytes.fromhex(e_detail.get('ram_zp', '00'*256))

    print(f"  {'Addr':>6}  {'Native':>8}  {'Emulated':>8}")
    diff_count = 0
    for i in range(256):
        if n_zp[i] != e_zp[i]:
            print(f"  ${i:02X}      0x{n_zp[i]:02X}      0x{e_zp[i]:02X}")
            diff_count += 1
    print(f"  Total ZP diffs: {diff_count}")
else:
    print("\nNo scroll divergence found in scanned range!")

ns.close()
es.close()
