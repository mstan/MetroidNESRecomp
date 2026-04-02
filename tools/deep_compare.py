#!/usr/bin/env python3
"""Deep comparison of zero-page state at the scroll divergence point.
Compares $6C-$7F region (the AND target in E720), $49-$5A region,
and full ZP diff at the first frame where $FD diverges."""
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

def dump_ram(sock, addr, length):
    """Read RAM via dump_ram command, return bytes."""
    msg_id = int(time.monotonic() * 1000) % 100000
    obj = {"cmd": "dump_ram", "id": msg_id, "addr": f"0x{addr:04X}", "len": length}
    sock.sendall((json.dumps(obj, separators=(",", ":")) + "\n").encode())
    data = bytearray(length)
    received = 0
    buf = b""
    while received < length:
        buf += sock.recv(65536)
        while True:
            idx = buf.find(b"\n")
            if idx < 0:
                break
            line = buf[:idx]
            buf = buf[idx + 1:]
            resp = json.loads(line)
            if resp.get("id") == msg_id and resp.get("ok"):
                offset = resp.get("offset", 0)
                chunk = bytes.fromhex(resp.get("hex", ""))
                data[offset:offset + len(chunk)] = chunk
                received += len(chunk)
    return bytes(data)

ns = connect(4370)
es = connect(4371)

# Find the frame where native $FD first becomes non-zero
nh = send_cmd(ns, "history")
eh = send_cmd(es, "history")
print(f"Native range: {nh['oldest']}-{nh['newest']}")
print(f"Emulated range: {eh['oldest']}-{eh['newest']}")

# Find divergence frame on native
diverge_frame = None
for f in range(180, min(nh['newest'], 210)):
    r = send_cmd(ns, "get_frame", frame=f)
    if not r.get('ok'):
        continue
    zp = bytes.fromhex(r.get('ram_zp', '00' * 256))
    if zp[0xFD] != 0:
        diverge_frame = f
        break

if diverge_frame is None:
    print("No $FD divergence found in frames 180-210")
else:
    print(f"\n$FD first non-zero at native frame {diverge_frame}")

    # Get full ZP from both at frame before divergence and at divergence
    for check_frame in [diverge_frame - 1, diverge_frame]:
        print(f"\n{'='*60}")
        print(f"Frame {check_frame}")
        print(f"{'='*60}")

        nr = send_cmd(ns, "get_frame", frame=check_frame)
        # Use same frame for emulated (approximate alignment)
        er = send_cmd(es, "get_frame", frame=check_frame)

        if not nr.get('ok') or not er.get('ok'):
            print(f"  Frame not available (N:{nr.get('ok')} E:{er.get('ok')})")
            continue

        nzp = bytes.fromhex(nr.get('ram_zp', '00' * 256))
        ezp = bytes.fromhex(er.get('ram_zp', '00' * 256))

        # Key scroll-related addresses
        print(f"\n  Key state:")
        for addr, name in [(0x49, "$49 ScrollState"), (0x50, "$50 ScrollPage"),
                           (0x4F, "$4F ScrollParam"), (0x5A, "$5A LoopCounter"),
                           (0xFD, "$FD ScrollX"), (0xFC, "$FC ScrollY"),
                           (0xFF, "$FF PPUCTRL"), (0x1D, "$1D GameEnable"),
                           (0x1E, "$1E GameMode"), (0x1A, "$1A NMIFlag"),
                           (0x79, "$79 ScrollFlag")]:
            marker = " <<<" if nzp[addr] != ezp[addr] else ""
            print(f"    {name}: N=0x{nzp[addr]:02X} E=0x{ezp[addr]:02X}{marker}")

        # $6C-$7F region (AND target in E720)
        print(f"\n  $6C-$7F region (E720 AND target):")
        for i in range(0x6C, 0x80):
            if nzp[i] != ezp[i] or nzp[i] != 0:
                print(f"    ${i:02X}: N=0x{nzp[i]:02X} E=0x{ezp[i]:02X}")

        # Full ZP diff
        diffs = [(i, nzp[i], ezp[i]) for i in range(256) if nzp[i] != ezp[i]]
        print(f"\n  Full ZP diff ({len(diffs)} bytes differ):")
        for addr, nv, ev in diffs[:30]:
            print(f"    ${addr:02X}: N=0x{nv:02X} E=0x{ev:02X}")
        if len(diffs) > 30:
            print(f"    ... and {len(diffs)-30} more")

    # Also dump $0300-$04FF region (object/entity tables) at divergence
    print(f"\n{'='*60}")
    print(f"Extended RAM comparison at frame {diverge_frame}")
    print(f"{'='*60}")
    try:
        n_ext = dump_ram(ns, 0x0300, 0x200)
        e_ext = dump_ram(es, 0x0300, 0x200)
        ext_diffs = [(0x300 + i, n_ext[i], e_ext[i])
                     for i in range(len(n_ext)) if n_ext[i] != e_ext[i]]
        print(f"  $0300-$04FF: {len(ext_diffs)} bytes differ")
        for addr, nv, ev in ext_diffs[:20]:
            print(f"    ${addr:04X}: N=0x{nv:02X} E=0x{ev:02X}")
    except Exception as e:
        print(f"  Error: {e}")

ns.close()
es.close()
