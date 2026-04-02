#!/usr/bin/env python3
"""Check $71C0-$71CF on emulated build."""
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

r = send_cmd(4371, 'read_ram', addr='0x71C0', len=16)
print(f"Emu $71C0: {r.get('hex','')}")
r2 = send_cmd(4371, 'ping')
print(f"Frame: {r2.get('frame')}")
