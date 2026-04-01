import sys

rom_path = 'Metroid # NES.NES'

with open(rom_path, 'rb') as f:
    header = f.read(16)
    prg_banks = header[4]
    chr_banks = header[5]
    mapper = (header[6] >> 4) | (header[7] & 0xF0)
    mirror = header[6] & 1
    print(f'PRG banks: {prg_banks} x 16KB, CHR banks: {chr_banks} x 8KB, Mapper: {mapper}, Mirror: {mirror}')

    for i in range(prg_banks):
        data = f.read(16384)
        path = f'banks/bank{i:02d}.bin'
        with open(path, 'wb') as out:
            out.write(data)
        print(f'  {path}: {len(data)} bytes')

    for i in range(chr_banks):
        data = f.read(8192)
        path = f'banks/chr{i:02d}.bin'
        with open(path, 'wb') as out:
            out.write(data)
        print(f'  {path}: {len(data)} bytes')
