#!/usr/bin/env python3
"""
gen_symbols.py -- derive symbols.sym and metroid_ram.h from the m1disasm submodule.

Pipeline (offline, results are committed):
  1. tools/build_wla_dx.ps1           builds wla-6502 / wlalink (WLA-DX >= 10.7)
  2. disasm/m1disasm/build.py         assembles every ROM variant; `wlalink -S`
                                      writes out/M1_<TARGET>.sym next to each ROM
                                      and build.py verifies the ROM md5 is vanilla
  3. this script                      converts one target's .sym into
        symbols.sym    -- nesrecomp symbol table (game.toml symbol_file):
                          BB:XXXX Name label   for switchable-bank ROM labels
                          XXXX Name label      for fixed-bank ($C000+) ROM labels
                          XXXX Name ram        for RAM / MMIO names
                          XXXX Name const      for plain constants (ids, flags)
        metroid_ram.h  -- MET_<Name> defines of the RAM names for game code
                          (extras.c, the widescreen renderer), so no bare
                          addresses appear outside the disassembly

The ROM this repo targets is the one m1disasm calls NES_NTSC: metroid.nes is
byte-identical to out/M1_NES_NTSC.nes (body CRC32 70080810 = No-Intro
"Metroid (USA)"). The EU variant is m1disasm's NES_PAL target (7751588D =
"Metroid (Europe)"), kept in this repo as metroid-eu.nes for reference; it
differs from NTSC in every PRG bank, so the target must match the ROM or every
banked name is wrong. To regenerate for the EU variant instead:

    python tools/gen_symbols.py --target NES_PAL --rom metroid-eu.nes

Usage: python tools/gen_symbols.py [--target NES_NTSC] [--rom metroid.nes] [--no-build]
"""
import argparse
import os
import re
import subprocess
import sys
import zlib

ROOT = os.path.dirname(os.path.dirname(os.path.realpath(__file__)))
DISASM = os.path.join(ROOT, 'disasm', 'm1disasm')
WLA_BIN = os.path.join(ROOT, 'tools', 'wla-dx', 'bin')

C_KEYWORDS = set("""auto break case char const continue default do double else enum extern
float for goto if inline int long register restrict return short signed sizeof static struct
switch typedef union unsigned void volatile while _Bool _Complex _Imaginary NULL A X Y S P PC
SP NMI IRQ RESET TRUE FALSE""".split())

# Auto-generated placeholder labels carry no information: L8022, Lx230, RTS_E01B ...
AUTO_LABEL = re.compile(r'^(L[0-9A-Fa-f]{4}|Lx[0-9]+|RTS_[0-9A-Fa-f]{4})$')


def sanitize(name):
    n = re.sub(r'[^A-Za-z0-9_]', '_', name)
    if not re.match(r'^[A-Za-z_]', n):
        n = '_' + n
    return n


def ram_roots():
    """Names declared in constants_ram.asm .enum blocks (RAM) and hardware.asm (MMIO)."""
    roots = set()
    decl = re.compile(r'\s*([A-Za-z_][A-Za-z0-9_]*)\s+'
                      r'(?:(?:db|dw|ds|dsw|dsb|instanceof|\.instanceof|\.db|\.dw|\.ds|\.equ)\b|=)', re.I)
    define = re.compile(r'\s*\.define\s+([A-Za-z_][A-Za-z0-9_]*)')
    for fn, always in (('constants_ram.asm', False), ('hardware.asm', True)):
        inblk = False
        for line in open(os.path.join(DISASM, 'SRC', fn), encoding='utf-8', errors='replace'):
            l = line.split(';')[0].rstrip()
            if re.match(r'\s*\.enum\b', l):
                inblk = True
                continue
            if re.match(r'\s*\.ende\b', l):
                inblk = False
                continue
            m = decl.match(l)
            if m and (inblk or always):
                roots.add(m.group(1))
            m2 = define.match(l)
            if m2 and (inblk or always):
                roots.add(m2.group(1))
    return roots


def build():
    env = dict(os.environ)
    env['PATH'] = WLA_BIN + os.pathsep + env['PATH']
    if not (os.path.exists(os.path.join(WLA_BIN, 'wla-6502.exe')) or
            os.path.exists(os.path.join(WLA_BIN, 'wla-6502'))):
        sys.exit('WLA-DX not built: run powershell -File tools/build_wla_dx.ps1 first')
    r = subprocess.run([sys.executable, 'build.py'], cwd=DISASM, env=env,
                       capture_output=True, text=True)
    if r.returncode != 0:
        sys.exit('m1disasm build failed:\n' + r.stdout[-2000:] + r.stderr[-2000:])
    if 'Hash does not match' in r.stdout:
        sys.exit('m1disasm build is not byte-exact:\n' + r.stdout)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--target', default='NES_NTSC')
    ap.add_argument('--rom', default=os.path.join(ROOT, 'metroid.nes'))
    ap.add_argument('--no-build', action='store_true')
    a = ap.parse_args()

    if not a.no_build:
        build()
    built = os.path.join(DISASM, 'out', 'M1_%s.nes' % a.target)
    sym = os.path.join(DISASM, 'out', 'M1_%s.sym' % a.target)
    if os.path.exists(a.rom):
        ours = open(a.rom, 'rb').read()[16:]
        theirs = open(built, 'rb').read()[16:]
        if ours != theirs:
            sys.exit('%s body CRC32 %08x does not match m1disasm target %s (%08x); '
                     'pick the matching --target'
                     % (a.rom, zlib.crc32(ours) & 0xffffffff, a.target,
                        zlib.crc32(theirs) & 0xffffffff))

    roots = ram_roots()
    labels, defs = [], []
    sec = None
    for line in open(sym, encoding='utf-8', errors='replace'):
        line = line.split(';')[0].strip()
        if not line:
            continue
        if line.startswith('['):
            sec = line
            continue
        parts = line.split()
        if len(parts) < 2:
            continue
        if sec == '[labels]':
            bank, addr = parts[0].split(':')
            labels.append((int(bank, 16), int(addr, 16), parts[1]))
        elif sec == '[definitions]':
            defs.append((int(parts[0], 16), parts[1]))

    out = ['# Metroid (NES) symbol table -- GENERATED by tools/gen_symbols.py, do not edit.',
           '# Source: disasm/m1disasm (metroidret/m1disasm) target %s, WLA-DX .sym' % a.target,
           '# Format: [BB:]HEXADDR Name kind   (BB = PRG bank for switchable-bank code;',
           '#         fixed bank 7 at $C000-$FFFF and RAM/const entries carry no bank)',
           '']
    seen = set()
    nlab = 0
    for bank, addr, name in sorted(labels):
        if AUTO_LABEL.match(name):
            continue
        n = sanitize(name)
        if n in C_KEYWORDS:
            continue
        key = (bank, addr, n)
        if key in seen:
            continue
        seen.add(key)
        if addr >= 0xC000:
            out.append('%04X %s label' % (addr, n))
        else:
            out.append('%02X:%04X %s label' % (bank, addr, n))
        nlab += 1

    ram, const = set(), set()
    for val, name in defs:
        root = name.split('.')[0]
        n = sanitize(name)
        if n in C_KEYWORDS or val > 0xFFFF:
            continue
        (ram if root in roots else const).add((val, n))
    # A name bound to several values (per-area duplicates such as
    # _sizeof_PalettePtrTable) would become colliding #defines; drop it.
    for group in (ram, const):
        by_name = {}
        for val, n in group:
            by_name.setdefault(n, set()).add(val)
        ambiguous = {n for n, vals in by_name.items() if len(vals) > 1}
        for item in [x for x in group if x[1] in ambiguous]:
            group.discard(item)
        if ambiguous:
            print('dropped %d ambiguous names: %s' % (len(ambiguous), ', '.join(sorted(ambiguous))))
    out.append('')
    for val, n in sorted(ram):
        out.append('%04X %s ram' % (val, n))
    out.append('')
    for val, n in sorted(const):
        out.append('%04X %s const' % (val, n))
    with open(os.path.join(ROOT, 'symbols.sym'), 'w', newline='\n') as f:
        f.write('\n'.join(out) + '\n')

    hdr = ['/* metroid_ram.h -- GENERATED by tools/gen_symbols.py from disasm/m1disasm',
           ' * (target %s). RAM / MMIO names from constants_ram.asm + hardware.asm,' % a.target,
           ' * prefixed MET_. Game code (extras.c, widescreen renderer, mod hooks) uses',
           ' * these instead of bare addresses. Do not edit. */',
           '#pragma once', '']
    for val, n in sorted(ram):
        hdr.append('#define MET_%s 0x%04Xu' % (n, val))
    with open(os.path.join(ROOT, 'metroid_ram.h'), 'w', newline='\n') as f:
        f.write('\n'.join(hdr) + '\n')
    print('symbols.sym: %d labels, %d ram, %d const; metroid_ram.h: %d defines (target %s)'
          % (nlab, len(ram), len(const), len(ram), a.target))


if __name__ == '__main__':
    main()
