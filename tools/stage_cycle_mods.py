"""Stage declarative packages for one compiled Metroid ROM variant."""
import pathlib,shutil,sys
src,dst,variant=map(str,sys.argv[1:]);src=pathlib.Path(src);dst=pathlib.Path(dst)
assert variant in ('usa','europe')
# Keep the retired experiment out of incremental builds too.
retired=dst/'packages/metroid.enhancement.voxel-diorama'
if retired.exists():
    resolved=retired.resolve();base=dst.resolve()
    if not resolved.is_relative_to(base) or resolved==base:
        raise ValueError('Retired package path escapes the staging directory')
    shutil.rmtree(retired)
for file in src.rglob('*'):
    if not file.is_file():continue
    target=dst/file.relative_to(src);target.parent.mkdir(parents=True,exist_ok=True)
    if file.name=='manifest.toml':
        text=file.read_text(encoding='utf-8-sig')
        if variant=='europe':text=text.replace('rom_crc32 = "70080810"','rom_crc32 = "7751588d"')
        text=text.replace('# Metroid (USA) -- the ROM this build is recompiled from and the only one the\n# CRC32 gate in extras.c accepts today.','# This package targets the selected cycle ROM variant.')
        text=text.replace('# EU requires a separately generated and validated build, including the game\n# hooks and the transfer caller check. Do not advertise compatibility yet.','# Each cycle variant uses its own generated content keys and CPU timing.')
        target.write_text(text,encoding='utf-8')
    else:shutil.copy2(file,target)
