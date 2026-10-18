"""Assisted original missile combat against a Zebetite, glass and Mother Brain.

Supply ammunition and protect/reposition Samus. Enemy hit counters, status,
terrain, progression flags and the escape timer are never written. The game
must destroy its barriers and Mother Brain and start its original escape.
"""
import argparse,json
from pathlib import Path
from progression_qa import Survey

ap=argparse.ArgumentParser(description=__doc__)
for key in ('exe','rom','out','states'):ap.add_argument('--'+key,required=True)
ap.add_argument('--aspect',default='32:9')
ap.add_argument('--brain-y',type=int,default=0x68)
args=ap.parse_args()
p=Survey(args);p.protect_player=True
p.report['assistance']+=['Supplied 200 missiles/capacity and original missile toggle',
    'Samus position/camera teleports beside live barriers and Mother Brain; no enemy or escape-state writes']
p.report['combat_samples']=[]

def read(address,length=1):
    return bytes.fromhex(p.cmd('read_ram',addr=f'{address:04x}',len=length)['hex'])

def write(address,value):p.cmd('write_ram',addr=f'{address:04x}',val=f'{value:02x}')

def shoot(x,y,nt):
    write(0xff,(read(0xff)[0]&~1)|nt);write(0xfc,0);write(0xfd,0)
    write(0x30c,nt);write(0x30d,y);write(0x30e,x)
    for address in (0x308,0x309,0x312,0x313):write(address,0)
    if read(0x6879)[0]<10:write(0x6879,200)
    p.advance(1,2);p.advance(3,0x40);p.advance(28)

try:
    p.cmd('load_state',path=(Path(args.states)/'mother_brain_entry.sav').resolve().as_posix())
    assert read(0x98)[0]==1,'Original live Mother Brain entry required'
    write(0x6879,200);write(0x687a,200);write(0x10e,1)
    p.waypoint('mother_brain_before_combat')
    original=read(0x758,40)
    active=[i for i in range(0,40,8) if original[i]]
    assert active,'Expected the original room to contain a live Zebetite'
    for slot in active:
        pointer=int.from_bytes(original[slot+1:slot+3],'little')
        assert 0x6000<=pointer<0x6800
        nt=int(pointer>=0x6400)
        tile=(pointer-0x6000)&0x3ff
        x=(tile%32)*8
        for step in range(100):
            z=read(0x758+slot,8)
            p.report['combat_samples'].append(dict(target='zebetite',slot=slot//8,
                step=step,status=z[0],hits=z[3]))
            # Original status 2 is destroyed; the history recorder advances
            # it to 3. The slot remains occupied until its room unloads.
            if z[0] in (2,3):break
            shoot(min(239,x+28),128,nt)
        assert read(0x758+slot)[0] in (2,3),('Zebetite survived',slot,read(0x758+slot,8).hex())
        p.waypoint(f'zebetite_{slot//8}_destroyed')
    saw_death=False
    for step in range(120):
        status=read(0x98)[0]
        p.report['combat_samples'].append(dict(target='mother_brain',step=step,status=status,
            hits=read(0x99)[0],missiles=read(0x6879)[0]))
        if status>=3:
            saw_death=True;break
        if step==24:
            assert read(0x99)[0],('Aim never hit Mother Brain',args.brain_y)
        shoot(0x90,args.brain_y,read(0x9d)[0]&1)
        if step%16==15:p.waypoint(f'mother_brain_combat_{step:03}')
    p.waypoint('mother_brain_after_missiles')
    assert saw_death,'Original missiles did not defeat Mother Brain'
    statuses=[]
    for _ in range(40):
        timer=read(0x10a,2)
        timer_enabled=read(0x10d)[0]
        statuses.append(dict(status=read(0x98)[0],timer=list(timer),timer_enabled=timer_enabled))
        # State 6 sets the timer and immediately clears MotherBrainStatus.
        # A frame sampler need not ever observe that transient state.
        if timer_enabled and timer[1]!=255:break
        p.advance(60)
    timer=read(0x10a,2)
    p.report['mother_brain_victory']=dict(aspect=args.aspect,
        zebetites_destroyed=[i//8 for i in active],original_death_status=saw_death,
        death_sequence_statuses=statuses,escape_timer=list(timer),
        escape_started=bool(timer_enabled) and timer[1]!=255 and any(timer)
            and all((b&15)<=9 and (b>>4)<=9 for b in timer))
    p.waypoint('original_escape_started');p.flush()
    print(json.dumps(p.report['mother_brain_victory']),flush=True)
    assert p.report['mother_brain_victory']['escape_started'],p.report['mother_brain_victory']
    p.check_results();p.cmd('quit');p.proc.wait(timeout=10)
    p.report['exit_code']=p.proc.returncode;p.flush()
except Exception as exc:
    p.report['errors'].append(repr(exc));p.flush();raise
finally:p.close()
