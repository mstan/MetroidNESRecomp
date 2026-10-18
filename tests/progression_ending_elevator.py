"""Take the original ending elevator from an assisted original room entry.

The checkpoint was made by the original room loader at Tourian (1,3).
Reposition Samus onto its live $8F elevator, then use Up. No elevator status,
SamusOnElevator, ending flag, boss flags, timer or routine writes are allowed.
This covers the elevator/ending path, not a traversal of the escape shaft.
"""
import argparse,json
from pathlib import Path
from PIL import Image
from progression_qa import Survey

ap=argparse.ArgumentParser(description=__doc__)
for key in ('exe','rom','out','states'):ap.add_argument('--'+key,required=True)
ap.add_argument('--aspect',default='32:9')
args=ap.parse_args()
p=Survey(args);p.protect_player=True
p.report['assistance']+=['Original Tourian (1,3) room-loader checkpoint',
    'Samus pose onto the live ending elevator; original Up input, no ending/timer/progression writes']

def read(a,n=1):return bytes.fromhex(p.cmd('read_ram',addr=f'{a:04x}',len=n)['hex'])
def write(a,v):p.cmd('write_ram',addr=f'{a:04x}',val=f'{v:02x}')

try:
    source=(Path(args.states)/'tourian_01_03.sav').resolve().as_posix()
    attempts=[]
    for dy in (-18,-19,-15,-17,-16,-12,-8,0):
        p.cmd('load_state',path=source)
        e=read(0x320,16)
        assert e[0]==1 and e[15]==0x8f and not read(0x6883)[0],list(e)
        nt=e[12]&1
        write(0xff,(read(0xff)[0]&~1)|nt);write(0xfc,0);write(0xfd,0)
        write(0x30c,nt);write(0x30d,(e[13]+dy)%240);write(0x30e,e[14])
        for address in (0x308,0x309,0x312,0x313):write(address,0)
        # Original sa_Begin=$FF waits without movement/collision on neutral
        # input. A direction enters the normal movement handlers first.
        p.advance(1,1)
        for frame in range(8):
            p.advance(1)
            on_elevator=read(0x307)[0]
            attempts.append(dict(y_offset=dy,frame=frame,collision_on_elevator=on_elevator,
                samus=list(read(0x300,16))))
            if on_elevator:break
        if on_elevator:break
    p.report['elevator_collision_attempts']=attempts;p.flush()
    assert on_elevator,'Original elevator collision did not accept the player pose'
    p.waypoint('original_elevator_collision')
    p.advance(420,8)
    p.waypoint('ending_after_up')
    assert read(0x6883)[0],'Original ending elevator did not set AtEnding'
    with Image.open(p.out/'ending_after_up.png') as image:
        image=image.convert('RGB')
        width,height=image.size;left=(width-256)//2
        center=sum(image.getpixel((x,y))!=(0,0,0) for y in range(height) for x in range(left,left+256))
        margins=sum(image.getpixel((x,y))!=(0,0,0) for y in range(height)
                    for x in list(range(left))+list(range(left+256,width)))
    p.report['ending_picture']=dict(width=width,visible_center_pixels=center,visible_margin_pixels=margins)
    assert center>500 and margins==0,'Ending must draw its native picture with clean pillarbox margins'
    p.advance(1800)
    p.waypoint('ending_sequence')
    p.report['ending_elevator']=dict(aspect=args.aspect,original_ending_flag=read(0x6883)[0],
        mode=read(0x1d)[0],routine=read(0x1e)[0],title_routine=read(0x1f)[0])
    print(json.dumps(p.report['ending_elevator']),flush=True)
    p.check_results();p.cmd('quit');p.proc.wait(timeout=10)
    p.report['exit_code']=p.proc.returncode;p.flush()
except Exception as exc:
    p.report['errors'].append(repr(exc));p.flush();raise
finally:p.close()
