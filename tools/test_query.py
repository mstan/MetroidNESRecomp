#!/usr/bin/env python3
"""Quick test of ring buffer RAM and PPU data from both instances."""
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

for label, port in [("Native", 4370), ("Emulated", 4371)]:
    print(f"=== {label} (port {port}) frame 200 ===")
    try:
        r = query(port, 200)
        ppu = r.get('ppu', {})
        print(f"  PPU ctrl={ppu.get('ctrl')} mask={ppu.get('mask')} "
              f"scroll_x={ppu.get('scroll_x')} scroll_y={ppu.get('scroll_y')}")
        zp = r.get('ram_zp', '')
        print(f"  ram_zp: {len(zp)//2} bytes")
        if len(zp) >= 64:
            zp_bytes = bytes.fromhex(zp)
            print(f"  $1D={zp_bytes[0x1D]:02X} $1E={zp_bytes[0x1E]:02X} "
                  f"$1F={zp_bytes[0x1F]:02X} $24={zp_bytes[0x24]:02X}")
    except Exception as e:
        print(f"  ERROR: {e}")
    print()
