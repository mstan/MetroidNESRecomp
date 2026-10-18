"""Assisted Kraid/Ridley combat through original missiles and death handlers.

Supply ammunition and reposition/protect Samus; never write enemy health,
enemy state, statue flags or victory triggers. Require the game to set the
corresponding statue flag and award its original 75-missile capacity increase.
"""
import argparse,json
from pathlib import Path
from progression_qa import Survey

ap=argparse.ArgumentParser(description=__doc__)
for key in ('exe','rom','out','states'):ap.add_argument('--'+key,required=True)
ap.add_argument('--aspect',default='32:9')
ap.add_argument('--distance',type=int,default=20)
ap.add_argument('--y-offset',type=int,default=0)
args=ap.parse_args()
p=Survey(args)
p.protect_player=True
p.report['assistance']+=['100 supplied missiles/capacity; original missile toggle',
    'Samus position/camera teleports beside the live boss before shooting; original enemy health and victory flags untouched']
p.report['boss_victories']=[]

def read(address,length=1):
    return bytes.fromhex(p.cmd('read_ram',addr=f'{address:04x}',len=length)['hex'])

def write(address,value):p.cmd('write_ram',addr=f'{address:04x}',val=f'{value:02x}')

try:
    for name,enemy,flag in [('kraid',8,0x687b),('ridley',9,0x687c)]:
        p.cmd('load_state',path=(Path(args.states)/(name+'_entry.sav')).resolve().as_posix())
        assert not read(flag)[0],name
        write(0x6879,100);write(0x687a,100);write(0x10e,1)
        before_capacity=read(0x687a)[0]
        p.waypoint(name+'_before_combat')
        samples=[]
        for step in range(120):
            extra=read(0x6af4,96)
            base=read(0x400,96)
            slots=[i for i in range(0,96,16) if extra[i] and extra[i+14]==enemy]
            sample=dict(step=step,flag=read(flag)[0],missiles=read(0x6879)[0],
                        bosses=[dict(slot=i//16,health=base[i+11],status=extra[i]) for i in slots])
            samples.append(sample)
            if sample['flag']:break
            live=next((i for i in slots if base[i+11]),None)
            if live is not None:
                y,x=base[live],base[live+1]
                nt=extra[live+7]&1
                from_left=x>=80
                position=max(8,min(247,x-args.distance if from_left else x+args.distance))
                control=read(0xff)[0]
                write(0xff,(control&~1)|nt);write(0xfc,0);write(0xfd,0)
                write(0x30c,nt);write(0x30d,max(16,min(220,y+args.y_offset)));write(0x30e,position)
                for address in (0x308,0x309,0x312,0x313):write(address,0)
                p.advance(1,1 if from_left else 2)
                p.advance(3,0x40)
                p.advance(12)
            else:p.advance(16)
            if step%12==11:p.waypoint(f'{name}_combat_{step:03}')
        row=dict(name=name,aspect=args.aspect,defeated=bool(read(flag)[0]),
                 original_statue_flag=read(flag)[0],capacity_before=before_capacity,
                 capacity_after=read(0x687a)[0],samples=samples)
        p.report['boss_victories'].append(row)
        p.waypoint(name+'_after_combat');p.flush()
        print(json.dumps({k:v for k,v in row.items() if k!='samples'}),flush=True)
        assert row['defeated'] and row['capacity_after']==before_capacity+75,(name,row['original_statue_flag'],row['capacity_after'],samples[-1])
    p.check_results()
    p.cmd('quit');p.proc.wait(timeout=10)
    p.report['exit_code']=p.proc.returncode;p.flush()
finally:p.close()
