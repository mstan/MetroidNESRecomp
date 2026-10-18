"""Verify original item collection from isolated, original-loader checkpoints.

Each attempted pickup journals a player-position teleport. Gear, item slots,
collection history and terrain are never written. This is assisted collision
coverage, not evidence of traversing the route or earning access to the room.
"""
import argparse
import json
from pathlib import Path
from progression_qa import Survey


def main():
    ap=argparse.ArgumentParser(description=__doc__)
    for name in ('exe','rom','out','states'):
        ap.add_argument('--'+name,required=True)
    ap.add_argument('--aspect',default='32:9')
    ap.add_argument('--only',nargs='*')
    ap.add_argument('--gear-only',action='store_true')
    args=ap.parse_args()
    sources=[]
    for state in sorted(Path(args.states).glob('*.sav')):
        if state.stem.endswith('_action') or not state.with_suffix('.ram').exists():continue
        if args.only and state.stem not in args.only:continue
        r=state.with_suffix('.ram').read_bytes()
        slots=[i for i in (0x748,0x750) if r[i]!=255 and (r[i]<8 or not args.gear_only)]
        for slot in slots:sources.append((state,slot,r[slot]))
    assert sources,'No original-loader item slots selected'
    p=Survey(args)
    p.report['assistance']+=['Samus position teleports to loaded item collision; no gear/history injection']
    p.report['pickups']=[]
    p.report['neighbor_slots_skipped']=[]
    p.protect_player=True
    try:
        for state,slot,item_type in sources:
            name=state.stem+f'_slot{slot:04x}'
            p.cmd('load_state',path=state.resolve().as_posix())
            before=bytes.fromhex(p.cmd('read_ram',addr='6877',len=4)['hex'])
            item=bytes.fromhex(p.cmd('read_ram',addr=f'{slot:04x}',len=4)['hex'])
            assert item[0]==item_type,(name,item)
            requested=[int(v,16) for v in state.stem.split('_')[-2:]]
            cells=p.cmd('ws_stats')['nt_cells']
            if cells[item[3]&1]!=requested:
                # A second native nametable can retain a neighboring room's
                # item. It is not an encounter with this requested waypoint.
                p.report['neighbor_slots_skipped'].append(dict(name=name,cell=cells[item[3]&1]))
                continue
            p.waypoint(name+'_before')
            # The room loader normally enters via an elevator. A door-room
            # checkpoint needs the original horizontal collision orientation.
            doors=bytes.fromhex(p.cmd('read_ram',addr='006c',len=2)['hex'])
            if any(doors):p.cmd('write_ram',addr='0049',val='02')
            # Recenter the original camera on the item's loaded nametable.
            # Otherwise teleporting the player alone leaves the item outside
            # the native draw/collision window, particularly in vertical rooms.
            control=int(p.cmd('read_ram',addr='00ff',len=1)['hex'],16)
            p.cmd('write_ram',addr='00ff',val=f'{(control&~1)|(item[3]&1):02x}')
            p.cmd('write_ram',addr='00fc',val='00')
            p.cmd('write_ram',addr='00fd',val='00')
            def touch(dx=0,dy=0):
                # Original PowerUps fields are type,y,x,nametable. Samus
                # y/x/nametable live in the original object-zero structure.
                p.cmd('write_ram',addr='030c',val=f'{item[3]:02x}')
                p.cmd('write_ram',addr='030d',val=f'{(item[1]+dy)%240:02x}')
                p.cmd('write_ram',addr='030e',val=f'{(item[2]+dx)%256:02x}')
                p.cmd('write_ram',addr='0308',val='00')
                p.cmd('write_ram',addr='0309',val='00')
            touch()
            p.advance(8)
            after=bytes.fromhex(p.cmd('read_ram',addr='6877',len=4)['hex'])
            def collected():
                if item_type<8:return not before[1]&(1<<item_type) and bool(after[1]&(1<<item_type))
                return after[0]>before[0] if item_type==8 else after[3]>before[3]
            if not collected():
                # A buried item remains hidden until its original block is
                # shot. Try normal firing, then re-enter its collision point.
                from_left=item[2]>223
                touch(-32 if from_left else 32,6)
                p.advance(1,1 if from_left else 2)
                p.advance(1,0x40)
                p.advance(12)
                touch()
                p.advance(8)
                after=bytes.fromhex(p.cmd('read_ram',addr='6877',len=4)['hex'])
            if not collected():
                # Ceiling pickups need an upward shot from below their block.
                touch(0,32)
                p.advance(1)
                p.advance(1,0x48)
                p.advance(12)
                touch()
                p.advance(8)
                after=bytes.fromhex(p.cmd('read_ram',addr='6877',len=4)['hex'])
            removed=bytes.fromhex(p.cmd('read_ram',addr=f'{slot:04x}',len=1)['hex'])[0]==255
            row=dict(name=name,item_type=item_type,before=list(before),after=list(after),
                     collected=collected(),slot_removed=removed)
            p.report['pickups'].append(row)
            p.waypoint(name+'_after')
            print(json.dumps(row),flush=True)
            p.flush()
        p.report['all_selected_collected']=all(r['collected'] and r['slot_removed'] for r in p.report['pickups'])
        p.check_results()
        p.cmd('quit')
        p.proc.wait(timeout=10)
        p.report['exit_code']=p.proc.returncode
        p.flush()
        assert p.report['all_selected_collected'],'Some selected item collisions need further investigation; see report.json'
    except Exception as exc:
        p.report['errors'].append(repr(exc));p.flush()
        raise
    finally:p.close()


if __name__=='__main__':main()
