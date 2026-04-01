import re, sys, os

# Extract pointer table targets that follow JSR ChooseRoutine calls
# and BankInitTable entries, and any other .word entries that look like code pointers

all_targets = set()

for bank_num in range(8):
    for base in ['/tmp/metroid_disasm', 'C:/Users/Matthew/AppData/Local/Temp/metroid_disasm']:
        fname = os.path.join(base, f'Bank0{bank_num}.asm')
        if os.path.exists(fname):
            break

    with open(fname) as f:
        lines = f.readlines()

    cfg_bank = -1 if bank_num == 7 else bank_num

    # Find .word entries after JSR ChooseRoutine — these are dispatch table targets
    in_table = False
    for i, line in enumerate(lines):
        if 'JSR' in line and ('ChooseRoutine' in line or '$C27C' in line):
            in_table = True
            continue
        if in_table:
            # .word entries contain the dispatch targets
            words = re.findall(r'\$([0-9A-Fa-f]{4})', line)
            if '.word' in line and words:
                for w in words:
                    addr = int(w, 16)
                    if addr >= 0x8000:
                        # Targets in $C000+ are fixed bank, others are current bank
                        if addr >= 0xC000:
                            print(f'extra_func -1 {addr:04X}')
                        else:
                            print(f'extra_func {cfg_bank} {addr:04X}')
                        all_targets.add(addr)
            elif '.word' not in line and '.byte' not in line and line.strip() and not line.strip().startswith(';'):
                in_table = False

    # Also find BankInitTable and similar .word tables with code pointers
    in_init_table = False
    for i, line in enumerate(lines):
        if 'InitTable' in line or 'JumpTable' in line or 'PtrTable' in line or 'RoutineTable' in line:
            in_init_table = True
            continue
        if in_init_table:
            words = re.findall(r'\$([0-9A-Fa-f]{4})', line)
            if '.word' in line and words:
                for w in words:
                    addr = int(w, 16)
                    if addr >= 0x8000 and addr not in all_targets:
                        if addr >= 0xC000:
                            print(f'extra_func -1 {addr:04X}')
                        else:
                            print(f'extra_func {cfg_bank} {addr:04X}')
                        all_targets.add(addr)
            elif '.word' not in line and '.byte' not in line and line.strip() and not line.strip().startswith(';'):
                in_init_table = False

print(f'# Total dispatch targets: {len(all_targets)}', file=sys.stderr)
