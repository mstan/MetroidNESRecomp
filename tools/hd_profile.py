"""Prepare the separately compiled, verified USA HD cartridge in a build tree.

The player still imports the original cartridge and the pack through Mods.
No patched ROM or authored pack files are distributed by this project.
"""
import argparse
import hashlib
import importlib.util
from pathlib import Path
import re
import sys

sys.dont_write_bytecode = True

ORIGINAL_SHA1 = 'ecf39ec5a33e6a6f832f03e8ffc61c5d53f4f90b'
PATCH_SHA256 = '08eced01051091b2bdfdbae05765d300986847f3a08a97fe203e6b9e22c817c9'
PATCHED_SHA1 = '5f0b6083a79235c3acc76f2b2fdb3d65c44f1163'


def prepare(rom, pack, sdk, output):
    rom, pack, sdk, output = map(Path, (rom, pack, sdk, output))
    if rom.resolve() == output.resolve() or (output.exists() and rom.samefile(output)):
        raise ValueError('Build output must not overwrite the original cartridge')
    image = rom.read_bytes()
    if hashlib.sha1(image).hexdigest() != ORIGINAL_SHA1:
        raise ValueError('This HD program requires the original USA cartridge')
    manifest = (pack/'hires.txt').read_text(encoding='utf-8-sig')
    matches = []
    for line in re.findall(r'^\s*<patch>([^\r\n]+)', manifest, re.MULTILINE):
        fields = [s.strip() for s in line.split(',')]
        if len(fields) >= 2 and fields[1].lower() == ORIGINAL_SHA1:
            matches.append(fields[0])
    if len(matches) != 1:
        raise ValueError('Pack must contain one matching original-cartridge patch')
    spec = importlib.util.spec_from_file_location('nesrecomp_hd_package', sdk/'tools/package_hdpack.py')
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    patch = (pack/module.relative(matches[0])).read_bytes()
    if hashlib.sha256(patch).hexdigest() != PATCH_SHA256:
        raise ValueError('The supplied HD patch differs from the compiled 2.1.2 profile')
    patched = module.apply_ips(image, patch, allow_resize=True)
    if hashlib.sha1(patched).hexdigest() != PATCHED_SHA1:
        raise ValueError('Patched cartridge differs from the qualified HD program')
    output.parent.mkdir(parents=True, exist_ok=True)
    if not output.exists() or output.read_bytes() != patched:
        output.write_bytes(patched)
    print(f'HD program prepared: {len(patched)} bytes, SHA1 {PATCHED_SHA1}')


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    for name in ('rom', 'pack', 'sdk', 'out'):
        parser.add_argument('--'+name, type=Path, required=True)
    args = parser.parse_args()
    prepare(args.rom, args.pack, args.sdk, args.out)
