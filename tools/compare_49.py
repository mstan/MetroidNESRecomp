#!/usr/bin/env python3
"""Compare $49 (scroll state) and $FD (scroll X) between native and emulated."""
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
    print(f"  Range: {h['oldest']}-{h['newest']}")

    prev_49 = None
    prev_fd = None
    prev_50 = None

    print(f"  {'Frame':>6}  {'$49':>4} {'$FD':>4} {'$50':>4} {'$1E':>4} {'$1D':>4}  Event")

    for f in range(0, min(h['newest'], 250) + 1):
        r = send_cmd(s, "get_frame", frame=f)
        if not r.get('ok'):
            continue
        zp = bytes.fromhex(r.get('ram_zp', '00'*256))
        v49 = zp[0x49]
        vfd = zp[0xFD]
        v50 = zp[0x50]
        v1e = zp[0x1E]
        v1d = zp[0x1D]

        events = []
        if prev_49 is not None and v49 != prev_49:
            events.append(f"$49: {prev_49:02X}->{v49:02X}")
        if prev_fd is not None and vfd != prev_fd:
            events.append(f"$FD: {prev_fd:02X}->{vfd:02X}")
        if prev_50 is not None and v50 != prev_50:
            events.append(f"$50: {prev_50:02X}->{v50:02X}")

        if events or f <= 3 or f % 50 == 0:
            print(f"  {f:>6}  0x{v49:02X} 0x{vfd:02X} 0x{v50:02X} 0x{v1e:02X} 0x{v1d:02X}  {', '.join(events)}")

        prev_49 = v49
        prev_fd = vfd
        prev_50 = v50

    s.close()
