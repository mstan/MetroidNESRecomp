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

for label, port in [("NATIVE", 4370), ("EMULATED", 4371)]:
    print(f"=== {label} frame 200 ===")
    try:
        r = query(port, 200)
        zp = bytes.fromhex(r.get('ram_zp', '00'*256))
        ppu = r.get('ppu', {})
        print(f"  $FD={zp[0xFD]:02X} $FC={zp[0xFC]:02X} $FF={zp[0xFF]:02X}")
        print(f"  $49={zp[0x49]:02X} $50={zp[0x50]:02X}")
        print(f"  PPU scroll_x={ppu.get('scroll_x')} scroll_y={ppu.get('scroll_y')}")
        print(f"  PPU ctrl={ppu.get('ctrl')} mask={ppu.get('mask')}")
    except Exception as e:
        print(f"  Error: {e}")
