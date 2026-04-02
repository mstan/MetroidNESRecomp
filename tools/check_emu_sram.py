#!/usr/bin/env python3
"""Check emulated SRAM content at $7100 and $6000 ranges."""
import socket, json, time

def send_cmd(port, cmd, **kw):
    s = socket.socket()
    s.settimeout(5)
    s.connect(('127.0.0.1', port))
    obj = {'cmd': cmd, 'id': 1}
    obj.update(kw)
    s.sendall((json.dumps(obj) + '\n').encode())
    time.sleep(0.5)
    data = s.recv(65536).decode().strip()
    s.close()
    return json.loads(data)

for label, port in [('EMULATED', 4371), ('NATIVE', 4370)]:
    print(f"\n=== {label} ===")
    try:
        r = send_cmd(port, 'ping')
        print(f"  Frame: {r.get('frame')}")

        # Check $7100-$71FF
        r1 = send_cmd(port, 'read_ram', addr='0x7100', len=256)
        h1 = r1.get('hex', '')
        vals1 = bytes.fromhex(h1)
        non_ff_7 = [(0x7100+i, v) for i, v in enumerate(vals1) if v != 0xFF]
        non_00_7 = [(0x7100+i, v) for i, v in enumerate(vals1) if v != 0x00]
        print(f"  $7100-$71FF: {len(non_ff_7)} non-FF, {len(non_00_7)} non-00")
        if non_ff_7:
            for addr, v in non_ff_7[:10]:
                print(f"    ${addr:04X}: 0x{v:02X}")

        # Check $6000-$60FF
        r2 = send_cmd(port, 'read_ram', addr='0x6000', len=256)
        h2 = r2.get('hex', '')
        vals2 = bytes.fromhex(h2)
        non_ff_6 = sum(1 for v in vals2 if v != 0xFF)
        non_00_6 = sum(1 for v in vals2 if v != 0x00)
        print(f"  $6000-$60FF: {non_ff_6} non-FF, {non_00_6} non-00")
    except Exception as e:
        print(f"  Error: {e}")
