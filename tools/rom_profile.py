"""Bind the retail ROM payload to its qualified timing and seed profile."""
from pathlib import Path
import sys
import zlib

PROFILES = {"usa": 0x70080810, "europe": 0x7751588D}


def validate(path, variant):
    data = Path(path).read_bytes()
    if len(data) < 16 or data[:4] != b"NES\x1a":
        raise ValueError("An iNES Metroid cartridge is required")
    if data[7] & 0x0C == 0x08:
        raise ValueError("Use the qualified retail iNES image")
    mapper = (data[6] >> 4) | (data[7] & 0xF0)
    start = 16 + (512 if data[6] & 4 else 0)
    if mapper != 1 or len(data) != start + data[4] * 16384 + data[5] * 8192:
        raise ValueError("Unexpected Metroid mapper or image size")
    crc = zlib.crc32(data[start:])
    if crc != PROFILES[variant]:
        raise ValueError(f"Expected {variant} Metroid payload {PROFILES[variant]:08X}; got {crc:08X}")
    print(f"Metroid {variant}: mapper 1, payload CRC32 {crc:08X}")


if __name__ == "__main__":
    validate(*sys.argv[1:])
