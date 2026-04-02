#!/usr/bin/env python3
"""Watch $FD (scroll X) and $1E (GameMode) via ring buffer to see when they change."""
import socket, json, time

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
            return json.loads(buf[:idx])

def get_ts(sock, start, end):
    return send_cmd(sock, "frame_timeseries", start=start, end=end)

def get_frame(sock, frame_num):
    return send_cmd(sock, "get_frame", frame=frame_num)

for label, port in [("NATIVE", 4370), ("EMULATED", 4371)]:
    print(f"\n{'='*60}")
    print(f"  {label} (port {port})")
    print(f"{'='*60}")

    try:
        s = connect(port)
    except Exception as e:
        print(f"  Cannot connect: {e}")
        continue

    h = send_cmd(s, "history")
    newest = h['newest']
    oldest = h['oldest']
    print(f"  Range: {oldest}-{newest}")

    # Scan frame by frame looking at $FD and $1E changes
    prev_fd = None
    prev_1e = None
    prev_ff = None

    print(f"  {'Frame':>6}  {'$FD':>4} {'$FC':>4} {'$FF':>4} {'$1E':>4} {'$1D':>4}  {'scrollX':>7}  Event")

    scan_end = min(newest, 300)
    for batch_start in range(oldest, scan_end + 1, 200):
        batch_end = min(batch_start + 199, scan_end)

        # Use get_frame to get zero page
        for f in range(batch_start, batch_end + 1):
            r = get_frame(s, f)
            if not r.get('ok'):
                continue
            zp = bytes.fromhex(r.get('ram_zp', '00'*256))
            sx = r.get('ppu', {}).get('scroll_x', 0)
            fd = zp[0xFD]
            fc = zp[0xFC]
            ff = zp[0xFF]
            m1e = zp[0x1E]
            m1d = zp[0x1D]

            events = []
            if prev_fd is not None and fd != prev_fd:
                events.append(f"$FD: {prev_fd:02X}->{fd:02X}")
            if prev_1e is not None and m1e != prev_1e:
                events.append(f"$1E: {prev_1e:02X}->{m1e:02X}")
            if prev_ff is not None and ff != prev_ff:
                events.append(f"$FF: {prev_ff:02X}->{ff:02X}")

            if events or f <= 5 or f % 50 == 0:
                print(f"  {f:>6}  0x{fd:02X} 0x{fc:02X} 0x{ff:02X} 0x{m1e:02X} 0x{m1d:02X}  {sx:>7}  {', '.join(events)}")

            prev_fd = fd
            prev_1e = m1e
            prev_ff = ff

    s.close()
