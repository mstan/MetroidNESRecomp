import re, sys

for bank_num in range(8):
    for base in ['/tmp/metroid_disasm', 'C:/Users/Matthew/AppData/Local/Temp/metroid_disasm']:
        import os
        fname = os.path.join(base, f'Bank0{bank_num}.asm')
        if os.path.exists(fname):
            break

    with open(fname) as f:
        lines = f.readlines()

    cfg_bank = -1 if bank_num == 7 else bank_num

    # Find contiguous runs of .byte/.word/.dbyt lines with L-prefix addresses
    in_data = False
    data_start = None
    data_end = None

    for line in lines:
        # Check if this line has an address label and is data
        m = re.match(r'^L([0-9A-Fa-f]{4}):', line)
        if m:
            addr = int(m.group(1), 16)
            is_data = bool(re.search(r'\.byte|\.word|\.dbyt', line))

            if is_data:
                if not in_data:
                    data_start = addr
                    in_data = True
                data_end = addr
            else:
                if in_data and data_start is not None:
                    # End of data region - only emit if >= 4 bytes
                    if data_end > data_start + 2:
                        print(f'data_region {cfg_bank} {data_start:04X} {data_end:04X}')
                    in_data = False
                    data_start = None
        elif in_data and line.strip() and not line.strip().startswith(';'):
            # Non-address line that's not a comment - check if still data
            if not re.search(r'\.byte|\.word|\.dbyt', line):
                if data_start is not None and data_end > data_start + 2:
                    print(f'data_region {cfg_bank} {data_start:04X} {data_end:04X}')
                in_data = False
                data_start = None

    # Flush last region
    if in_data and data_start is not None and data_end > data_start + 2:
        print(f'data_region {cfg_bank} {data_start:04X} {data_end:04X}')
