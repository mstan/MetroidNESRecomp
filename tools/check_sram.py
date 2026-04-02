#!/usr/bin/env python3
"""Check SRAM at scroll pointer $71C3 across multiple frames on both builds."""
import socket, json, time

def send_cmd(port, cmd, **kw):
    s = socket.socket()
    s.settimeout(5)
    s.connect(('127.0.0.1', port))
    obj = {'cmd': cmd, 'id': 1}
    obj.update(kw)
    s.sendall((json.dumps(obj) + '\n').encode())
    time.sleep(0.3)
    data = s.recv(65536).decode().strip()
    s.close()
    return json.loads(data)

for label, port in [('NATIVE', 4370), ('EMULATED', 4371)]:
    print(f"\n=== {label} ===")
    try:
        r = send_cmd(port, 'read_ram', addr='0x71C0', len=16)
        print(f"  Current $71C0: {r.get('hex','')}")
        r2 = send_cmd(port, 'ping')
        print(f"  Current frame: {r2.get('frame','?')}")
    except Exception as e:
        print(f"  Error: {e}")
