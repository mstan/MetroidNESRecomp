"""USA-only progression survey with explicit assistance and fallback evidence.

Runs privately with muted output. Every debug command (including fixture writes)
is journaled; screenshots/guest RAM and hardware checkpoints accompany waypoints.
Room fixtures establish loading and frame coverage, never a boss victory.
"""
import argparse
import hashlib
import json
from pathlib import Path
import re
import zlib

from widescreen_probe import Probe


class Survey(Probe):
    def __init__(self, args):
        raw = Path(args.rom).read_bytes()
        if raw[:4] != b'NES\x1a' or zlib.crc32(raw[16:]) != 0x70080810:
            raise ValueError('Metroid USA body CRC70080810 is required')
        self.journal = []
        self.report = dict(rom_sha256=hashlib.sha256(raw).hexdigest(),
                           exe_sha256=hashlib.sha256(Path(args.exe).read_bytes()).hexdigest(),
                           aspect=args.aspect, assistance=['invincibility/knockback'],
                           sources=['https://gamefaqs.gamespot.com/nes/519689-metroid/faqs/44084',
                                    'disasm/m1disasm/SRC/prg7_engine.asm'],
                           waypoints=[], errors=[])
        super().__init__(args.exe, args.rom, args.out, args.aspect, port=5466,
                         extra_args=['--widescreen-pc', 'actors,sprites,smooth']
                         if args.aspect != 'off' else [],
                         extra_env={'NESRECOMP_FALLBACK_LOG': str(Path(args.out).resolve()/'fallback.jsonl')})

    def cmd(self, cmd, **kw):
        try:
            result = super().cmd(cmd, **kw)
        except Exception as exc:
            with (self.out/'journal.jsonl').open('a') as log:
                log.write(json.dumps(dict(cmd=cmd,args=kw,error=repr(exc)))+'\n')
            raise
        self.journal.append(dict(cmd=cmd, args=kw, result=result))
        with (self.out/'journal.jsonl').open('a') as log:
            log.write(json.dumps(self.journal[-1])+'\n')
        return result

    def waypoint(self, name):
        record = self.capture(name)
        record.update(interpreter=self.cmd('interpreter_stats'),
                      faults=self.cmd('runtime_faults'), misses=self.cmd('dispatch_miss_info'))
        self.cmd('save_state', path=(self.out/(name+'.sav')).as_posix())
        self.report['waypoints'].append(record)
        self.flush()
        return record

    def flush(self):
        (self.out/'report.json').write_text(json.dumps(self.report, indent=2)+'\n')


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    for key in ('exe', 'rom', 'out'):
        ap.add_argument('--'+key, required=True)
    ap.add_argument('--aspect', default='32:9')
    ap.add_argument('--opening-only', action='store_true')
    ap.add_argument('--area-starts', action='store_true',
                    help='assist area selection, then run the ROM area/room initialization')
    ap.add_argument('--item-rooms', action='store_true',
                    help='use the dedicated QA build to load original special-item coordinates')
    ap.add_argument('--limit', type=int, default=0)
    args = ap.parse_args()
    p = Survey(args)
    try:
        p.advance(600); p.advance(2, 0x10); p.advance(120)
        p.advance(2, 0x10); p.advance(650)
        p.protect_player = True
        p.waypoint('opening')
        for i in range(9):
            p.advance(20, 2); p.advance(40, 0xc2); p.advance(15, 0x42)
        gear = int(p.cmd('read_ram', addr='6878', len=1)['hex'], 16)
        if not gear & 0x10 and not args.opening_only:
            for i in range(6):
                p.advance(20, 1); p.advance(40, 0xc1); p.advance(15, 0x41)
                gear = int(p.cmd('read_ram', addr='6878', len=1)['hex'], 16)
                if gear & 0x10:
                    break
        p.report['morph_ball_collected_by_game'] = bool(gear & 0x10)
        p.waypoint('morph_ball')
        if not args.opening_only:
            assert gear & 0x10, 'Movement did not collect Morph Ball'
        if args.area_starts:
            p.report['assistance'].append('area/bank selection and MoreInit restart')
            for area, bank, name in [(1, 2, 'norfair'), (2, 4, 'kraid'),
                                     (4, 5, 'ridley'), (3, 3, 'tourian')]:
                # The original elevator path selects these area/bank values.
                # GoBankInit loads graphics through the normal game loop;
                # MoreInit then runs its original room, enemy and item loaders
                # at that area's ROM-defined entry. No boss flags are written.
                # Restart initialization before changing the bank: running an
                # old area's enemies against the next area's AI table is an
                # invalid fixture and can jump into unrelated ROM data.
                p.cmd('write_ram', addr='001e', val='01')
                p.cmd('write_ram', addr='0074', val=f'{0x10+area:02x}')
                p.cmd('write_ram', addr='0024', val=f'{bank+1:02x}')
                p.advance(630)
                start = p.waypoint(name+'_start')
                assert start['routine'] == 3, (name, start['routine'])
                assert int(p.cmd('read_ram', addr='0074', len=1)['hex'],16) == 0x10+area
                for i in range(4):
                    p.advance(20, 1); p.advance(40, 0xc1); p.advance(15, 0x41)
                p.waypoint(name+'_movement')
        if args.item_rooms:
            p.report['assistance'].append('MoreInit coordinate-read override in dedicated QA build')
            visited = 0
            world_map = Path(args.rom).read_bytes()[16+0x253e:16+0x293e]
            p.report['unused_special_item_entries'] = []
            for area, name in [(0,'brinstar'),(1,'norfair'),(2,'kraid'),(4,'ridley'),(3,'tourian')]:
                text = (Path(__file__).resolve().parents[1]/'disasm/m1disasm/SRC'/name/'items.asm').read_text()
                y, x, cells = None, None, []
                for line in text.splitlines():
                    my = re.match(r'^@y([0-9A-Fa-f]+):', line)
                    mx = re.match(r'^\s*@@x([0-9A-Fa-f]+):', line)
                    if my: y = int(my[1],16)
                    if mx:
                        x = int(mx[1],16)
                        if (x,y) not in cells: cells.append((x,y))
                for x,y in cells:
                    if args.limit and visited >= args.limit: break
                    if world_map[y*32+x] == 0xff:
                        p.report['unused_special_item_entries'].append(dict(area=name,x=x,y=y))
                        continue
                    requested = p.cmd('qa_load_room', area=area, x=x, y=y)
                    p.advance(550)
                    record = p.waypoint(f'{name}_{x:02x}_{y:02x}')
                    record['requested_room'] = requested
                    assert [x,y] in record['stats']['nt_cells'], (name,x,y,record['stats']['nt_cells'])
                    assert record['stats']['decoder_mismatch'] == 0, record
                    # Entry initialization assumes a vertical elevator outside
                    # Brinstar. Rooms with actual left/right door faces use the
                    # horizontal fixture orientation before movement tests.
                    doors = bytes.fromhex(p.cmd('read_ram',addr='006c',len=2)['hex'])
                    if any(doors): p.cmd('write_ram',addr='0049',val='02')
                    p.advance(20,1); p.advance(30,0xc1); p.advance(20,0x41)
                    p.waypoint(f'{name}_{x:02x}_{y:02x}_action')
                    visited += 1
                if args.limit and visited >= args.limit: break
            p.report['special_item_cells_loaded'] = visited
        p.cmd('quit')
        p.proc.wait(timeout=10)
        p.report['exit_code'] = p.proc.returncode
        p.flush()
    except Exception as exc:
        p.report['errors'].append(repr(exc)); p.flush()
        raise
    finally:
        p.close()


if __name__ == '__main__':
    main()
