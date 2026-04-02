#!/usr/bin/env python3
"""Read the ROM data at the scroll pointer address $71C3."""
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

for label, port in [('NATIVE', 4370), ('EMULATED', 4371)]:
    try:
        # $71C3 is in SRAM range ($6000-$7FFF)
        r = send_cmd(port, 'read_ram', addr='0x71C3', len=16)
        print(f'{label}: {r}')
        # Also read $6000 region for context
        r2 = send_cmd(port, 'read_ram', addr='0x71C0', len=16)
        print(f'{label} $71C0: {r2.get("hex","")}')
    except Exception as e:
        print(f'{label}: {e}')
