#!/usr/bin/env python3
import socket, json, time

def query(port, frame):
    s = socket.socket()
    s.settimeout(5)
    s.connect(('127.0.0.1', port))
    cmd = json.dumps({'cmd': 'get_frame', 'id': 1, 'frame': frame}) + '\n'
    s.sendall(cmd.encode())
    time.sleep(0.5)
    data = s.recv(65536).decode().strip()
    s.close()
    return json.loads(data)

for f in [183, 184, 185, 186, 187, 188, 189, 190, 195, 200]:
    line = f"f={f:>4}: "
    for label, port in [('N', 4370), ('E', 4371)]:
        try:
            r = query(port, f)
            zp = bytes.fromhex(r.get('ram_zp', '00' * 256))
            line += (f" {label}[$49={zp[0x49]:02X} $50={zp[0x50]:02X}"
                     f" $6C={zp[0x6C]:02X} $6D={zp[0x6D]:02X}"
                     f" $FD={zp[0xFD]:02X} $4F={zp[0x4F]:02X}"
                     f" $1E={zp[0x1E]:02X}]")
        except Exception as e:
            line += f" {label}[err]"
    print(line)
