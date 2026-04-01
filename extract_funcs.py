import re, sys, os

all_funcs = {}
disasm_dir = os.path.join(os.path.dirname(__file__), '')

for bank_num in range(8):
    # Try both possible tmp locations
    for base in ['/tmp/metroid_disasm', 'C:/Users/Matthew/AppData/Local/Temp/metroid_disasm']:
        fname = os.path.join(base, f'Bank0{bank_num}.asm')
        if os.path.exists(fname):
            break

    with open(fname) as f:
        lines = f.readlines()

    # Build label->address map
    label_map = {}
    last_named = None
    for i, line in enumerate(lines):
        m = re.match(r'^L([0-9A-Fa-f]{4}):', line)
        if m:
            addr = int(m.group(1), 16)
            label_map['L' + m.group(1)] = addr
            if last_named:
                label_map[last_named] = addr
                last_named = None
        m2 = re.match(r'^(\w+):\s*$', line)
        if m2 and not line.startswith('L'):
            last_named = m2.group(1)
        elif not line.strip().startswith(';') and line.strip():
            last_named = None

    # Find all JSR targets
    funcs = set()
    for line in lines:
        for m in re.finditer(r'JSR\s+\$([0-9A-Fa-f]{4})', line):
            funcs.add(int(m.group(1), 16))
        for m in re.finditer(r'JSR\s+([A-Za-z_]\w*)', line):
            target = m.group(1)
            if target in label_map:
                funcs.add(label_map[target])

    all_funcs[bank_num] = funcs

# Output extra_func lines
count = 0
for bank_num in sorted(all_funcs.keys()):
    cfg_bank = -1 if bank_num == 7 else bank_num
    for addr in sorted(all_funcs[bank_num]):
        if addr >= 0x8000:
            print(f'extra_func {cfg_bank} {addr:04X}')
            count += 1

print(f'# Total: {count} extra_func entries', file=sys.stderr)
