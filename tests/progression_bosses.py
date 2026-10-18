"""Original-loader boss/attack fixtures, replayed in the normal production build.

Room coordinates are bound to the audited USA world map. The separate QA
executable supplies its existing MoreInit coordinate-read override only while
creating checkpoints. Normal-build replays use no room-loader override.
"""
import argparse
import json
from pathlib import Path
from types import SimpleNamespace
from progression_qa import Survey

CASES=[('fake_kraid',2,4,28,0x1f,8),('kraid',2,8,29,0x1d,8),
       ('ridley',4,17,29,0x12,9),('mother_brain',3,2,11,None,None)]


def main():
    ap=argparse.ArgumentParser(description=__doc__)
    for key in ('exe','qa-exe','rom','out','opening'):
        ap.add_argument('--'+key,required=True)
    args=ap.parse_args()
    root=Path(args.out).resolve()
    root.mkdir(exist_ok=False)
    common=dict(rom=args.rom,aspect='32:9')
    generator=Survey(SimpleNamespace(exe=args.qa_exe,out=str(root/'loaders'),**common))
    try:
        for name,area,x,y,room,enemy in CASES:
            generator.cmd('load_state',path=Path(args.opening).resolve().as_posix())
            result=generator.cmd('qa_load_room',area=area,x=x,y=y)
            if room is not None:assert result['room']==room,(name,result)
            generator.protect_player=True
            generator.advance(550)
            doors=bytes.fromhex(generator.cmd('read_ram',addr='006c',len=2)['hex'])
            if any(doors):generator.cmd('write_ram',addr='0049',val='02')
            record=generator.waypoint(name+'_entry')
            assert [x,y] in record['stats']['nt_cells'],(name,record['stats'])
        generator.check_results()
        generator.cmd('quit');generator.proc.wait(timeout=10)
        generator.flush()
    finally:generator.close()
    all_results=[]
    for aspect in ('off','32:9'):
        p=Survey(SimpleNamespace(exe=args.exe,out=str(root/('stock' if aspect=='off' else 'wide')),rom=args.rom,aspect=aspect))
        p.report['boss_encounters']=[]
        p.protect_player=True
        try:
            for name,area,x,y,room,enemy in CASES:
                p.cmd('load_state',path=(root/'loaders'/(name+'_entry.sav')).as_posix())
                samples=[]
                for step in range(9):
                    if step:
                        # Original movement, jumping, shooting and boss AI.
                        p.advance(20,0x42 if step%2 else 0xc1)
                        p.advance(25,0x40)
                    record=p.waypoint(f'{name}_{step:02}')
                    extra=bytes.fromhex(p.cmd('read_ram',addr='6af4',len=96)['hex'])
                    base=bytes.fromhex(p.cmd('read_ram',addr='0400',len=96)['hex'])
                    types=[extra[i+14] for i in range(0,96,16) if extra[i]]
                    bosses=[dict(slot=i//16,status=extra[i],health=base[i+11],x=base[i+1],y=base[i])
                            for i in range(0,96,16) if extra[i] and extra[i+14]==enemy]
                    samples.append(dict(frame=record['frame']['frame'],types=types,bosses=bosses,
                        mother_brain_status=int(p.cmd('read_ram',addr='0098',len=1)['hex'],16),
                        mother_brain=list(bytes.fromhex(p.cmd('read_ram',addr='04e0',len=16)['hex'])),
                        statues=p.cmd('read_ram',addr='687b',len=2)['hex']))
                row=dict(name=name,aspect=aspect,expected_enemy=enemy,
                    encountered=any(s['mother_brain_status'] for s in samples) if enemy is None
                        else any(s['bosses'] for s in samples),samples=samples)
                p.report['boss_encounters'].append(row)
                all_results.append(row)
                p.flush()
                assert row['encountered'],row
                print(json.dumps({k:v for k,v in row.items() if k!='samples'}),flush=True)
            p.check_results()
            p.cmd('quit');p.proc.wait(timeout=10)
            p.report['exit_code']=p.proc.returncode;p.flush()
        finally:p.close()
    (root/'encounters.json').write_text(json.dumps(all_results,indent=2)+'\n')


if __name__=='__main__':main()
