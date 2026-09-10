"""Read the current USA host-actor packet for geometric regression checks.

This intentionally supports only the current build's binary layouts. It is
not a savestate migration utility. Update it when those layouts change.
"""
import ctypes as c
from pathlib import Path
import struct


class Actor(c.Structure):
    _fields_ = [
        ("used", c.c_uint8), ("slot", c.c_uint8),
        ("spawn_x", c.c_uint8), ("spawn_y", c.c_uint8),
        ("cx", c.c_uint8), ("cy", c.c_uint8),
        ("base", c.c_uint8 * 16), ("extra", c.c_uint8 * 16),
        ("child_base", c.c_uint8 * 128), ("child_extra", c.c_uint8 * 128),
        ("native", c.c_int32), ("definition", c.c_uint16),
    ]


class Sprite(c.Structure):
    _fields_ = [("x", c.c_int16), ("y", c.c_int16),
                ("tile", c.c_uint8), ("attr", c.c_uint8), ("hud", c.c_uint8)]


class ActorSave(c.Structure):
    _fields_ = [
        ("version", c.c_uint32), ("count", c.c_uint32),
        ("valid", c.c_uint32), ("updates", c.c_uint32),
        ("area", c.c_int32), ("native", c.c_int32 * 6),
        ("actors", Actor * 96), ("sprites", Sprite * 2048),
    ]


def read_actor_state(path):
    raw = Path(path).read_bytes()
    assert raw[:5] == b"NSSR\x07", "Expected a current v7 savestate"
    base_size = struct.unpack_from("<I", raw, 5)[0]
    assert base_size == 23720, "Engine base layout changed; update this reader"
    # Eleven byte-sized CPU register/flag fields precede work RAM.
    ram = raw[20:20 + 2048]
    offset = 9 + base_size
    count = struct.unpack_from("<H", raw, offset)[0]
    offset += 2
    records = {}
    for _ in range(count):
        name = raw[offset:offset + 64].split(b"\0")[0].decode()
        size = struct.unpack_from("<I", raw, offset + 64)[0]
        offset += 68
        records[name] = raw[offset:offset + size]
        offset += size
    renderer = struct.unpack("<20i", records["metroid.widescreen.renderer.v1"])
    assert renderer[0] == 2, "Renderer layout changed"
    payload = records["metroid.widescreen.actors.v1"]
    assert len(payload) == c.sizeof(ActorSave), "Actor layout changed"
    state = ActorSave.from_buffer_copy(payload)
    assert state.version == 1 and state.count <= 2048
    horizontal = bool(ram[0x49] & 2)
    nt = (ram[0xff] >> (0 if horizontal else 1)) & 1
    ox = renderer[2 + nt] * 256 + ram[0xfd]
    oy = renderer[4 + nt] * 240 + ram[0xfc]
    return ox, oy, state
