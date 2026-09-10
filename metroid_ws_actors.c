/* Viewport actor residency and PC sprite output. Guest enemy state remains in
 * its original 16+16 byte format. Offloaded actors execute the original USA
 * routines against isolated RoomRAM; live room loads adopt that same state. */
#include "metroid_ws.h"
#include "watchdog.h"
#include "metroid_ws_zp.h"
#undef MET_RoomPtr
#undef MET_StructPtr
#undef MET_RoomRAMWorkPtr
#include "metroid_ram.h"
#include "nes_runtime.h"
#include "mapper.h"
#include "recomp_stack.h"
#include <stdio.h>
#include <string.h>

extern void func_CB29(void), func_EB0C(void), func_F345(void), func_F351(void);
extern void func_DD8B(void), func_DE47(void), func_DE4A(void), func_E0C1(void);
extern void func_F93B(void), func_FA9D(void);
extern void func_F152(void), func_F140(void), func_F282(void), func_F2CA(void), func_CE92(void);
extern void func_8B79_b1(void), func_8B79_b2(void), func_8B79_b3(void);
extern void func_8B79_b4(void), func_8B79_b5(void);
extern uint16_t g_rts_target;

#define EXTRA (MET_EnsExtra_0_status - 0x6000)
#define MAX_ACTORS 96
#define MAX_SPRITES 2048
#define DESPAWN_PAD 32
typedef struct {
    uint8_t used, slot, spawn_x, spawn_y, cx, cy, base[16], extra[16];
    uint8_t child_base[128], child_extra[128];
    int native_slot;
    uint16_t definition;
} Actor;
typedef struct { int16_t x, y; uint8_t tile, attr, hud; } Sprite;
typedef struct {
    uint8_t ram[0x800], sram[0x2000];
    int16_t shadow[64];
    CPU6502State cpu;
    int bail, stack;
    uint16_t rts;
    int16_t rel;
    uint8_t rel8, valid;
} Guest;
static Actor s_actors[MAX_ACTORS];
static int s_native[6], s_area = -1;
static int s_residents, s_expanded, s_smooth;
static int s_world, s_spawn, s_draw, s_virtual, s_vcx, s_vcy, s_other_x, s_other_y;
static int s_camera_x, s_camera_y, s_object_y, s_object_local_y;
static Sprite s_build[MAX_SPRITES], s_present[MAX_SPRITES];
static unsigned s_count, s_present_count, s_updates;
static int s_present_valid;
static uint8_t s_captured[64];
static int s_enemy_batch;
static unsigned s_enemy_tail;
static int s_doors;
static unsigned s_powerups_drawn;

static uint8_t rom(uint16_t p) { return p >= 0x8000 ? mapper_peek_prg(p) : 0xff; }
static uint16_t ram16(int p) { return g_ram[p] | (g_ram[p+1] << 8); }
static uint16_t ptr16(uint16_t p) { return rom(p) | (rom((uint16_t)(p+1)) << 8); }

void met_actors_reset(void) {
    memset(s_actors, 0, sizeof s_actors);
    for (int i=0; i<6; i++) s_native[i] = -1;
    s_area = -1; s_count = s_present_count = s_updates = 0;
    s_present_valid = 0;
}
void met_actors_configure(int residents, int expanded_sprites, int smooth) {
    s_residents = residents; s_expanded = expanded_sprites; s_smooth = smooth;
    met_actors_reset();
}
static int find_actor(int cx, int cy, int slot) {
    for (int i=0; i<MAX_ACTORS; i++)
        if (s_actors[i].used && s_actors[i].spawn_x==cx && s_actors[i].spawn_y==cy && s_actors[i].slot==slot)
            return i;
    return -1;
}
static int allocate_actor(int cx, int cy, int slot, uint16_t definition) {
    int i=find_actor(cx,cy,slot);
    if (i>=0) return i;
    for (i=0; i<MAX_ACTORS; i++) if (!s_actors[i].used) {
        Actor *a=&s_actors[i]; memset(a,0,sizeof *a);
        a->used=1; a->cx=(uint8_t)cx; a->cy=(uint8_t)cy; a->slot=(uint8_t)slot;
        a->spawn_x=(uint8_t)cx; a->spawn_y=(uint8_t)cy;
        a->native_slot=-1; a->definition=definition;
        return i;
    }
    return -1;
}
static void pull_actor(Actor *a, int slot) {
    memcpy(a->base,g_ram+MET_Ens_0+slot,16);
    memcpy(a->extra,g_sram+EXTRA+slot,16);
    if(!s_virtual) {
        const MetWsCells *cells=met_render_cells(); int nt=a->extra[7]&1;
        if(cells->cell_x[nt]>=0 && cells->cell_y[nt]>=0) {
            a->cx=(uint8_t)cells->cell_x[nt];a->cy=(uint8_t)cells->cell_y[nt];
        }
    }
}
static void push_actor(const Actor *a, int slot, int nt) {
    memcpy(g_ram+MET_Ens_0+slot,a->base,16);
    memcpy(g_sram+EXTRA+slot,a->extra,16);
    g_sram[EXTRA+slot+7]=(uint8_t)nt;
}
static void sync_native(void) {
    const MetWsCells *cells=met_render_cells();
    for (int slot=0;slot<6;slot++) {
        int i=s_native[slot], off=slot*16;
        if(i<0 && g_sram[EXTRA+off]) {
            int nt=g_sram[EXTRA+off+7]&1;
            if(cells->cell_x[nt]>=0 && cells->cell_y[nt]>=0)
                i=allocate_actor(cells->cell_x[nt],cells->cell_y[nt],off,0);
            s_native[slot]=i;
        }
        if(i>=0) { pull_actor(&s_actors[i],off); s_actors[i].native_slot=slot; }
    }
}
void met_actors_retire_room(int nt) {
    if(!s_residents || s_virtual) return;
    sync_native();
    for(int slot=0;slot<6;slot++) {
        int i=s_native[slot];
        if(i>=0 && (g_sram[EXTRA+slot*16+7]&1)==nt) {
            s_actors[i].native_slot=-1; s_native[slot]=-1;
        }
    }
}

static void guest_begin(Guest *save, int cx, int cy, const uint8_t *terrain) {
    int horizontal;
    met_render_camera(&s_camera_x,&s_camera_y,&horizontal);
    memcpy(save->ram,g_ram,sizeof save->ram); memcpy(save->sram,g_sram,sizeof save->sram);
    memcpy(save->shadow,g_ws_shadow_x16,sizeof save->shadow);
    save->cpu=g_cpu; save->bail=g_bail_active; save->stack=g_recomp_stack_top; save->rts=g_rts_target;
    save->rel=g_ws_obj_true_rel; save->rel8=g_ws_obj_rel8; save->valid=g_ws_obj_ctx_valid;
    runtime_begin_unclocked();
    s_virtual=1; s_vcx=cx; s_vcy=cy;
    s_other_x=cx;s_other_y=cy;
    memset(g_ram+MET_Ens_0,0,256); memset(g_sram+EXTRA,0,256);
    memcpy(g_sram,terrain,1024); memcpy(g_sram+1024,terrain,1024);
    g_ram[MET_MapPosX]=(uint8_t)cx; g_ram[MET_MapPosY]=(uint8_t)cy;
    g_ram[MET_PPUCTRL_ZP]&=(uint8_t)~1u;
    g_ram[MET_ScrollDir]=2; g_ram[MET_ScrollX]=g_ram[MET_ScrollY]=0;
    g_ram[MET_SpritePagePos]=0; g_ram[MET_ObjectCntrl]=0;
    /* Keep target-facing AI relative to the real player's world position. */
    {
        const MetWsCells *cells=met_render_cells(); int nt=save->ram[MET_Samus_hi]&1;
        int sx=cells->cell_x[nt]*256+save->ram[MET_Samus_x]-cx*256;
        int sy=cells->cell_y[nt]*240+save->ram[MET_Samus_y]-cy*240;
        g_ram[MET_Samus_x]=(uint8_t)sx;
        g_ram[MET_Samus_hi]=(uint8_t)(sx<0 || sx>=256);
        g_ram[MET_Samus_y]=(uint8_t)(sy<0?0:sy>239?239:sy);
    }
    g_cpu.S=0xfd; g_bail_active=0;
}
static void guest_end(const Guest *save) {
    memcpy(g_ram,save->ram,sizeof save->ram); memcpy(g_sram,save->sram,sizeof save->sram);
    memcpy(g_ws_shadow_x16,save->shadow,sizeof save->shadow);
    g_cpu=save->cpu; g_bail_active=save->bail; g_recomp_stack_top=save->stack; g_rts_target=save->rts;
    g_ws_obj_true_rel=save->rel; g_ws_obj_rel8=save->rel8; g_ws_obj_ctx_valid=save->valid;
    s_virtual=0; runtime_end_unclocked();
}
int met_actors_virtual_position(int *wx, int *wy) {
    if(!s_virtual) return 0;
    int other=g_ram[MET_Temp06_PositionHi]&1;
    *wx=(other?s_other_x:s_vcx)*256+g_ram[MET_Temp0B_PositionX];
    *wy=(other?s_other_y:s_vcy)*240+g_ram[MET_Temp0A_PositionY];
    s_object_y=*wy-s_camera_y;
    s_object_local_y=g_ram[MET_Temp0A_PositionY];
    return 1;
}
int met_actors_virtual_screen_x(int world_x) {return world_x-s_camera_x;}

static void guest_call(void (*fn)(void)) {g_cpu.S=0xfd;fn();}

static void guest_room_pair(const Actor *a,const Guest *live) {
    /* Give the original movement routines both sides of the nearest cell
     * boundary. Their unloaded-room guards remain useful at genuine world
     * edges, but no longer act as an invisible wall in visible terrain. */
    int horizontal=(live->ram[MET_ScrollDir]&2)!=0;
    const MetWsCells *cells=met_render_cells();
    int current=(live->ram[MET_PPUCTRL_ZP]>>(horizontal?0:1))&1;
    if(!horizontal && cells->cell_x[current]!=a->cx) horizontal=1;
    int before=(horizontal?a->base[1]<128:a->base[0]<120);
    int nx=a->cx+(horizontal?(before?-1:1):0);
    int ny=a->cy+(horizontal?0:(before?-1:1));
    const uint8_t *neighbor=(nx>=0 && nx<32 && ny>=0 && ny<32)?met_render_room_terrain(nx,ny):NULL;
    /* guest_begin has replaced both live RoomRAM buffers. Resolve a live
     * neighbor against the saved caller RAM, never against that scratch. */
    for(int n=0;n<2;n++)
        if(neighbor==g_sram+n*1024) neighbor=live->sram+n*1024;
    g_ram[MET_ScrollDir]=(uint8_t)(horizontal?2:0);
    if(neighbor) {
        memcpy(g_sram+1024,neighbor,1024);s_other_x=nx;s_other_y=ny;
        g_ram[MET_PPUCTRL_ZP]=(uint8_t)((g_ram[MET_PPUCTRL_ZP]&~3u)|(before?(horizontal?1:3):0));
        g_ram[horizontal?MET_ScrollX:MET_ScrollY]=1;
    }
    int nt=live->ram[MET_Samus_hi]&1;
    int dx=cells->cell_x[nt]*256+live->ram[MET_Samus_x]-a->cx*256;
    int dy=cells->cell_y[nt]*240+live->ram[MET_Samus_y]-a->cy*240;
    g_ram[MET_Samus_x]=(uint8_t)(horizontal?dx:(dx<0?0:dx>255?255:dx));
    g_ram[MET_Samus_y]=(uint8_t)(horizontal?(dy<0?0:dy>239?239:dy):(dy+240)%240);
    g_ram[MET_Samus_hi]=(uint8_t)(horizontal?(dx<0 || dx>=256):(dy<0 || dy>=240));
}

/* Execute the game's collision response after a host-side world-coordinate
 * broad phase. The original 9-bit coordinates cannot represent actors three
 * rooms apart: wrapping those positions would create phantom hits. For a
 * touching pair, translation to the middle of one cell preserves the exact
 * original collision flags and weapon response. */
static void collide_actor(Actor *a,const Guest *live) {
    int off=a->slot, status=g_sram[EXTRA+off];
    if(!status || status==3) return;
    const MetWsCells *cells=met_render_cells();
    uint8_t ax=g_ram[MET_Ens_0+off+1],ay=g_ram[MET_Ens_0+off];
    int nt=g_sram[EXTRA+off+7]&1;
    int wx=(nt?s_other_x:s_vcx)*256+ax,wy=(nt?s_other_y:s_vcy)*240+ay;
    uint8_t ctrl=g_ram[MET_PPUCTRL_ZP],dir=g_ram[MET_ScrollDir];
    g_ram[MET_PPUCTRL_ZP]&=(uint8_t)~3u;g_ram[MET_ScrollDir]=2;
    for(int obj=0xc0;obj>=0;obj=(obj==0xf0?0:obj+16)) {
        int p=MET_Samus+obj,st=live->ram[p],nt=live->ram[p+12]&1;
        if(obj==0) {
            if(live->ram[MET_SamusInvincibleDelay] || g_ram[MET_SamusHurt010F]!=0xff ||
               st==7 || st==8 || st==255) break;
        } else if(status==5 || !(st==1 || st==2 || st==3 || st==7 || st==10 || st==11)) continue;
        if(cells->cell_x[nt]<0 || cells->cell_y[nt]<0) {if(!obj)break;continue;}
        int dx=cells->cell_x[nt]*256+live->ram[p+14]-wx;
        int dy=cells->cell_y[nt]*240+live->ram[p+13]-wy;
        int rx=live->ram[p+2]+g_sram[EXTRA+off+2],ry=live->ram[p+1]+g_sram[EXTRA+off+1];
        if(dx<=-rx || dx>=rx || dy<=-ry || dy>=ry || dx<=-128 || dx>=128 || dy<=-112 || dy>=112) {
            if(!obj)break;continue;
        }
        g_ram[MET_Ens_0+off]=112;g_ram[MET_Ens_0+off+1]=128;g_sram[EXTRA+off+7]=0;
        g_ram[p+12]=0;g_ram[p+13]=(uint8_t)(112+dy);g_ram[p+14]=(uint8_t)(128+dx);
        g_cpu.X=(uint8_t)off;guest_call(func_F152);
        g_cpu.Y=(uint8_t)obj;guest_call(func_F140);
        guest_call(obj?func_F2CA:func_F282);
        g_ram[p+12]=live->ram[p+12];g_ram[p+13]=live->ram[p+13];g_ram[p+14]=live->ram[p+14];
        if(!obj)break;
    }
    g_ram[MET_Ens_0+off]=ay;g_ram[MET_Ens_0+off+1]=ax;
    g_sram[EXTRA+off+7]=(uint8_t)nt;
    g_ram[MET_PPUCTRL_ZP]=ctrl;g_ram[MET_ScrollDir]=dir;
    guest_call(func_CE92);
}

/* Only gameplay effects cross the isolated execution boundary. CPU state,
 * temporary coordinates, RoomRAM and OAM belong to the caller. */
static void commit_effects(Guest *live) {
    memcpy(live->ram+MET_Health,g_ram+MET_Health,2);
    memcpy(live->ram+MET_HealthChange,g_ram+MET_HealthChange,2);
    memcpy(live->ram+MET_Samus,g_ram+MET_Samus,12);
    live->ram[MET_SamusHurt010F]=g_ram[MET_SamusHurt010F];
    live->ram[MET_ObjectCounter]=g_ram[MET_ObjectCounter];
    live->ram[MET_EnergyPickupQtyCur]=g_ram[MET_EnergyPickupQtyCur];
    live->ram[MET_MissilePickupQtyCur]=g_ram[MET_MissilePickupQtyCur];
    live->sram[MET_MissileCount-0x6000]=g_sram[MET_MissileCount-0x6000];
    memcpy(live->ram+MET_SFXNoiseInitFlags,g_ram+MET_SFXNoiseInitFlags,5);
    for(int off=0xc0;off<=0xf0;off+=16) live->ram[MET_Samus+off+10]=g_ram[MET_Samus+off+10];
}

static uint16_t room_objects(int cx,int cy) {
    uint8_t room=g_sram[0x1000+cy*32+cx];
    uint16_t table=ram16(MET_AreaPointers_RAM_RoomPtrTable), p;
    if(room>=0xf0 || table<0x8000) return 0;
    p=ptr16((uint16_t)(table+(uint8_t)(room*2)));
    if(p<0x8000) return 0;
    ++p;
    for(int guard=0;guard<1024;guard++) {
        uint8_t b=rom(p);
        if(b==0xff) return 0;
        if(b==0xfd) return (uint16_t)(p+1);
        p+=(b==0xfe)?1:3;
    }
    return 0;
}
static int room_object_size(int kind) {
    if(kind==1 || kind==7) return 3;
    if(kind==2 || kind==4 || kind==6) return 2;
    return 0;
}
static void seed_cell(int cx,int cy) {
    uint16_t p=room_objects(cx,cy);
    const uint8_t *terrain;
    if(!p) return;
    terrain=met_render_room_terrain(cx,cy); if(!terrain) return;
    for(int guard=0;guard<64;guard++) {
        int kind=rom(p)&15,slot=rom(p)&0xf0;
        if(rom(p)==0xff) break;
        if(kind==1 && slot<0x60 && find_actor(cx,cy,slot)<0) {
            int i=allocate_actor(cx,cy,slot,p);
            if(i>=0) {
                Guest save; guest_begin(&save,cx,cy,terrain);
                g_ram[0]=(uint8_t)p;g_ram[1]=(uint8_t)(p>>8);g_cpu.Y=0;
                s_spawn=1;func_EB0C();s_spawn=0;
                pull_actor(&s_actors[i],slot);
                guest_end(&save);
            }
        }
        int size=room_object_size(kind);
        if(!size) break; /* refuse unknown room records */
        p+=(uint16_t)size;
    }
}
static void prepare_actors(void) {
    int ox,oy,horiz;
    if(s_area!=g_ram[MET_InArea]) {met_actors_reset();s_area=g_ram[MET_InArea];}
    sync_native();
    if(!met_render_camera(&ox,&oy,&horiz)) return;
    for(int i=0;i<MAX_ACTORS;i++) if(s_actors[i].used && s_actors[i].native_slot<0) {
        Actor *a=&s_actors[i];
        int x=a->cx*256+a->base[1],y=a->cy*240+a->base[0];
        int spawn_x=a->spawn_x*256,spawn_y=a->spawn_y*240;
        /* Retain a dead spawn's identity until its entire room leaves the
         * residency window. Moving beyond the original cell never changes
         * that identity or permits a duplicate first-entry spawn. */
        int spawn_out=spawn_x+256<ox-g_widescreen_left-DESPAWN_PAD ||
            spawn_x>=ox+256+g_widescreen_right+DESPAWN_PAD ||
            spawn_y+240<oy-DESPAWN_PAD || spawn_y>=oy+240+DESPAWN_PAD;
        int actor_out=x<ox-g_widescreen_left-DESPAWN_PAD || x>=ox+256+g_widescreen_right+DESPAWN_PAD ||
            y<oy-DESPAWN_PAD || y>=oy+240+DESPAWN_PAD;
        if(spawn_out && actor_out) a->used=0;
    }
    int left=(ox-g_widescreen_left-DESPAWN_PAD)/256;
    int right=(ox+255+g_widescreen_right+DESPAWN_PAD)/256;
    int top=oy/240,bottom=(oy+239)/240;
    for(int cy=top;cy<=bottom;cy++) for(int cx=left;cx<=right;cx++)
        if(cx>=0 && cx<32 && cy>=0 && cy<32) seed_cell(cx,cy);
}

int met_actors_hook_spawn(uint16_t addr) {
    (void)addr;
    if(!s_residents || !metroid_ws_enabled() || s_spawn || s_virtual) return 0;
    uint16_t p=ram16(0);int off=rom(p)&0xf0;
    if(off>=0x60) return 0;
    int slot=off/16,cx=g_ram[MET_MapPosX],cy=g_ram[MET_MapPosY];
    int i=find_actor(cx,cy,off),old=s_native[slot],existing=i>=0;
    if(old>=0 && old!=i) {pull_actor(&s_actors[old],off);s_actors[old].native_slot=-1;}
    if(i<0) i=allocate_actor(cx,cy,off,p);
    g_sram[EXTRA+off]=0; /* original fixed slot can now serve this room */
    s_spawn=1;func_EB0C();s_spawn=0;
    if(i>=0) {
        if(existing) {
            const MetWsCells *cells=met_render_cells();int nt=-1;
            for(int n=0;n<2;n++) if(cells->cell_x[n]==s_actors[i].cx && cells->cell_y[n]==s_actors[i].cy) nt=n;
            if(nt>=0) push_actor(&s_actors[i],off,nt);
            else {g_sram[EXTRA+off]=0;s_native[slot]=-1;return 1;}
        }
        else pull_actor(&s_actors[i],off);
        s_actors[i].definition=p;s_actors[i].native_slot=slot;s_native[slot]=i;
    }
    return 1;
}

static void capture(unsigned start,int hud) {
    unsigned end=g_ram[MET_SpritePagePos];
    for(unsigned pos=start;pos!=end;pos=(pos+4)&255) {
        if(s_count>=MAX_SPRITES) break;
        int y=g_ram[0x200+pos]+1,x=g_ws_shadow_x16[pos/4];
        /* The legacy OAM sidecar accepts only [-256,512). A resident actor
         * can be farther away, and even the visible 32:9 edges exceed that
         * range. Its fallback byte would wrap distant sprites into the
         * center. This packet owns full coordinates and clips only at draw. */
        if(!hud && g_ws_obj_ctx_valid)
            x=g_ws_obj_true_rel+(int8_t)(g_ram[0x203+pos]-g_ws_obj_rel8);
        if(s_virtual) {
            y=s_object_y+(int8_t)(y-s_object_local_y);
        } else {
            if(g_ram[0x200+pos]>=0xef) continue;
            s_captured[pos/4]=1;
        }
        Sprite *s=&s_build[s_count++];
        s->x=(int16_t)x;s->y=(int16_t)y;s->tile=g_ram[0x201+pos];
        s->attr=g_ram[0x202+pos];s->hud=(uint8_t)hud;
    }
}
static int draw_call(void (*fn)(void),int hud) {
    int pickup=s_residents && !s_virtual && g_ram[MET_PageIndex]==0x40 &&
        (fn==func_DE47 || fn==func_DE4A) ? g_ram[MET_ItemIndex] : -1;
    if(!metroid_ws_enabled() || (!s_expanded && !s_virtual && pickup<0) || s_draw) return 0;
    unsigned start=g_ram[MET_SpritePagePos];
    s_draw=1;fn();s_draw=0;
    if((pickup==0 || pickup==8) && start!=g_ram[MET_SpritePagePos]) s_powerups_drawn|=1u<<(pickup/8);
    if(s_expanded || s_virtual) capture(start,hud);
    if(s_enemy_batch) s_enemy_tail=g_ram[MET_SpritePagePos];
    return 1;
}
int met_actors_hook_draw_enemy(uint16_t addr) {
    if(addr==0xF345) {
        if(!metroid_ws_enabled() || !s_expanded || s_enemy_batch) return 0;
        /* UpdateAllEnemies JSRs slots $50..$10, then falls through UpdateEnemy
         * for slot zero. That final update can also tail-enter DrawEnemy.
         * Nested captures advance the cursor; collect only the remaining
         * tail while its signed object coordinate context is still current. */
        s_enemy_batch=1;s_enemy_tail=g_ram[MET_SpritePagePos];
        func_F345();capture(s_enemy_tail,0);s_enemy_batch=0;
        return 1;
    }
    /* Some generated AI paths tail-enter the drawing body without calling
     * the DrawEnemy entry. Capturing the full update includes those sprites;
     * the draw guard prevents duplicate capture by the nested DrawEnemy hook. */
    return draw_call(addr==0xF351?func_F351:func_DD8B,0);
}
int met_actors_hook_draw_object(uint16_t addr) {return draw_call(addr==0xDE47?func_DE47:func_DE4A,0);}
int met_actors_hook_draw_hud(uint16_t addr) {(void)addr;return draw_call(func_E0C1,1);}

int met_actors_hook_doors(uint16_t addr) {
    static void (*const update[])(void)={func_8B79_b1,func_8B79_b2,func_8B79_b3,func_8B79_b4,func_8B79_b5};
    (void)addr;
    if(!metroid_ws_enabled() || !s_expanded || !s_world || s_doors || g_current_bank<1 || g_current_bank>5)
        return 0;
    /* Keep the original updates, hit testing and collision tiles. Replace only
     * their captured pictures with the paired presentation after UpdateWorld. */
    unsigned start=s_count;
    s_doors=1;update[g_current_bank-1]();s_doors=0;s_count=start;
    return 1;
}

static int item_collected(int cx,int cy,int type) {
    /* CreateItemID/CheckForItem's persistent identity, independent of NT reuse. */
    if(cx<0 || cx>=32 || cy<0 || cy>=32) return 0;
    uint8_t lo=(uint8_t)((cx<<5)|cy),hi=(uint8_t)((type<<2)|(cx>>3));
    int bytes=g_sram[MET_NumberOfUniqueItems-0x6000];
    for(int i=0;i+1<bytes;i+=2)
        if(g_sram[MET_UniqueItemHistory-0x6000+i]==lo &&
           g_sram[MET_UniqueItemHistory-0x6000+i+1]==hi) return 1;
    return 0;
}
typedef struct {int cx,cy,side,type,status,frame;} DoorFace;
static int door_animation_priority(const DoorFace *d,int closed) {
    /* The departing face closes before the arriving face starts opening.
     * Follow that handoff; a stale closed face must not override an animation. */
    if(d->status==3 || d->status==6) return 4;
    if(d->status==4 || d->status==5) return 3;
    if(d->status==2 && d->frame!=closed) return 2;
    return d->status?1:0;
}
static void draw_doors(void) {
    DoorFace faces[32];int count=0,ox,oy,horizontal;
    if(!s_expanded || g_current_bank<1 || g_current_bank>5 ||
       !met_render_camera(&ox,&oy,&horizontal)) return;
    const MetWsCells *cells=met_render_cells();
    /* Live faces include special-item doors that aren't in room definitions. */
    for(int slot=0x80;slot<=0xb0;slot+=16) {
        int p=MET_Objects_0_status+slot,nt=g_ram[p+12]&1;
        if(!g_ram[p] || g_ram[p]>6 || cells->cell_x[nt]<0 || cells->cell_y[nt]<0) continue;
        faces[count++]=(DoorFace){cells->cell_x[nt],cells->cell_y[nt],(slot>>4)&1,g_ram[p+7]&3,g_ram[p],
                                 g_ram[p]==1?rom(0x85a2):g_ram[p+3]};
    }
    int left=(ox-g_widescreen_left)/256,right=(ox+255+g_widescreen_right)/256;
    for(int cy=oy/240;cy<=(oy+239)/240;cy++) for(int cx=left;cx<=right;cx++) {
        if(cx<0 || cx>=32 || cy<0 || cy>=32) continue;
        uint16_t p=room_objects(cx,cy);
        for(int guard=0;p && guard<64 && rom(p)!=0xff;guard++) {
            int kind=rom(p)&15,size=room_object_size(kind);
            if(kind==2) {
                int info=rom(p+1),side=(info>>4)&1,found=0;
                for(int i=0;i<count;i++) if(faces[i].cx==cx && faces[i].cy==cy && faces[i].side==side) found=1;
                if(!found && count<32) faces[count++]=(DoorFace){cx,cy,side,info&3,0,rom(0x85a2)};
            }
            if(!size) break;
            p+=(uint16_t)size;
        }
    }
    for(int i=0;i<count;i++) {
        const DoorFace *d=&faces[i],*animation=NULL;int boundary=d->cx+!d->side;
        for(int j=0;j<count;j++)
            if(faces[j].cy==d->cy && faces[j].cx+!faces[j].side==boundary &&
               (!animation || door_animation_priority(&faces[j],rom(0x85a2))>door_animation_priority(animation,rom(0x85a2))))
                animation=&faces[j];
        if(animation->frame==0xf7 || (!(d->type&1) && item_collected(boundary-1,d->cy,0x0a))) continue;
        const uint8_t *terrain=met_render_room_terrain(d->cx,d->cy);
        if(!terrain) continue;
        Guest save;guest_begin(&save,d->cx,d->cy,terrain);
        int slot=0x80+d->side*16,p=MET_Objects_0_status+slot;
        memset(g_ram+p,0,16);
        g_ram[p+3]=(uint8_t)animation->frame;
        g_ram[p+13]=0x68;g_ram[p+14]=(uint8_t)(d->side?0x10:0xf0);
        g_ram[MET_PageIndex]=(uint8_t)slot;g_ram[MET_IsSamus]=0;
        g_ram[MET_ObjectCntrl]=(uint8_t)(0xa0|(d->type==3?1:d->type)|(d->side?0:0x10));
        guest_call(func_DE4A);
        guest_end(&save);
    }
}

static void draw_powerup_preview(int cx,int cy,int type,int position) {
    if(type>9 || item_collected(cx,cy,type)) return;
    int x=((position&15)<<4)+8,y=(position&0xf0)+8;
    const MetWsCells *cells=met_render_cells();
    for(int nt=0;nt<2;nt++) if(cells->cell_x[nt]==cx && cells->cell_y[nt]==cy) {
        /* Loading creates the native slot before widened visibility is ready.
         * Keep the preview until that slot actually draws; merely existing is
         * not a handoff. An absent slot in a complete room can mean a beam was
         * collected, even though repeatable beams don't enter item history. */
        int live=0;
        for(int i=0;i<16;i+=8)
            if(g_ram[MET_PowerUps+i]==type && (g_ram[MET_PowerUps+i+3]&1)==nt &&
               g_ram[MET_PowerUps+i+1]==y && g_ram[MET_PowerUps+i+2]==x) {
                if(s_powerups_drawn&(1u<<(i/8))) return;
                live=1;
            }
        if(!live && (met_render_stats()->room_ready_mask&(1u<<nt))) return;
    }
    const uint8_t *terrain=met_render_room_terrain(cx,cy);
    /* UpdateOnePowerUp hides items buried in solid tiles until uncovered. */
    if(!terrain || y>=240 || terrain[(y/8)*32+x/8]<0xa0) return;
    Guest save;guest_begin(&save,cx,cy,terrain);
    memset(g_ram+MET_PowerUpDraw,0,16);
    g_ram[MET_PowerUpDraw_animFrame]=(uint8_t)(0x50|type);
    g_ram[MET_PowerUpDraw_y]=(uint8_t)y;g_ram[MET_PowerUpDraw_x]=(uint8_t)x;
    g_ram[MET_PageIndex]=0x40;g_ram[MET_IsSamus]=0;
    g_ram[MET_ObjectCntrl]=(uint8_t)(0x80|((g_ram[MET_FrameCount]>>1)&3));
    unsigned start=s_count;
    guest_call(func_DE4A);
    /* UpdateOnePowerUp overrides the beam orb's palette after ObjDrawFrame. */
    if((type==2 || type==6 || type==7) && s_count>start+1) s_build[start+1].attr=(uint8_t)(type==7);
    guest_end(&save);
}
static void draw_powerup_previews(void) {
    int ox,oy,horizontal;
    if(!s_residents || g_current_bank<1 || g_current_bank>5 ||
       !met_render_camera(&ox,&oy,&horizontal)) return;
    int left=(ox-g_widescreen_left)/256,right=(ox+255+g_widescreen_right)/256;
    /* ScanForItems' linked row list, then its offset-linked cell records.
     * Only powerup records are drawn; no guest spawns or pickup effects run. */
    uint16_t row=ptr16(0x9598); /* SpecItmsTblPtr, common to USA area banks */
    static const uint8_t size[]={0,3,3,1,2,2,1,1,2,2,1};
    for(int rows=0;rows<32 && row>=0x8000 && row!=0xffff;rows++) {
        int cy=rom(row);
        if(cy>=(oy/240) && cy<=(oy+239)/240 && cy<32) {
            uint16_t cell=(uint16_t)(row+3);
            for(int cells=0;cells<32;cells++) {
                int cx=rom(cell),next=rom(cell+1);
                if(cx>=left && cx<=right && cx<32) {
                    uint16_t p=(uint16_t)(cell+2);
                    for(int records=0;records<64;records++) {
                        int kind=rom(p)&15;
                        if(!kind || kind>10) break;
                        if(kind==2) draw_powerup_preview(cx,cy,rom(p+1),rom(p+2));
                        p+=size[kind];
                    }
                }
                if(next==0xff || next<3) break;
                cell+=(uint16_t)next;
            }
        }
        row=ptr16((uint16_t)(row+1));
    }
}

int met_actors_hook_world(uint16_t addr) {
    (void)addr;
    if(!metroid_ws_enabled() || s_world || (!s_residents && !s_expanded && !s_smooth)) return 0;
    s_world=1;s_count=0;s_powerups_drawn=0;memset(s_captured,0,sizeof s_captured);
    uint64_t started = watchdog_span_begin();
    if(s_residents) prepare_actors();
    watchdog_span_end("actor_prepare", started);
    started = watchdog_span_begin();
    if(s_smooth) runtime_begin_unclocked();
    func_CB29();
    if(s_smooth) runtime_end_unclocked();
    /* Clocked guest updates may legitimately enter a frame/input wait. Only
     * the unclocked PC path is a bounded host span with no deliberate pause. */
    if(s_smooth) watchdog_span_end("native_world", started);
    started = watchdog_span_begin();
    if(s_residents) {
        sync_native();
        for(int i=0;i<MAX_ACTORS;i++) {
            Actor *a=&s_actors[i];
            if(!a->used) continue;
            int children=0;for(int j=0;j<128;j+=16) children|=a->child_extra[j];
            if(!children && (a->native_slot>=0 || !a->extra[0])) continue;
            const uint8_t *terrain=met_render_room_terrain(a->cx,a->cy);if(!terrain) continue;
            Guest save;guest_begin(&save,a->cx,a->cy,terrain);
            guest_room_pair(a,&save);
            memcpy(g_ram+MET_EnProjectiles,a->child_base,128);
            memcpy(g_sram+EXTRA+0x60,a->child_extra,128);
            if(a->native_slot<0 && a->extra[0]) {
                push_actor(a,a->slot,0);g_cpu.X=a->slot;
                func_F351();collide_actor(a,&save);pull_actor(a,a->slot);s_updates++;
                if(a->extra[7]&1) {a->cx=(uint8_t)s_other_x;a->cy=(uint8_t)s_other_y;}
            }
            g_cpu.S=0xfd;func_FA9D();
            g_cpu.S=0xfd;func_F93B();
            memcpy(a->child_base,g_ram+MET_EnProjectiles,128);
            memcpy(a->child_extra,g_sram+EXTRA+0x60,128);
            commit_effects(&save);
            guest_end(&save);
        }
    }
    watchdog_span_end("virtual_actors", started);
    started = watchdog_span_begin();
    draw_doors();
    draw_powerup_previews();
    watchdog_span_end("door_pickup_previews", started);
    memcpy(s_present,s_build,s_count*sizeof(Sprite));s_present_count=s_count;s_present_valid=1;
    s_world=0;return 1;
}

int met_actors_draw(uint32_t *out,int width,int native_x0,const uint8_t *opaque,int hud_edges) {
    if(!s_present_valid || (!s_expanded && !s_residents)) return 0;
    if(!(g_ppumask&0x10)) return s_expanded;
    int tall=(g_ppuctrl&0x20)!=0,height=tall?16:8;
    for(int n=(int)s_present_count-1;n>=0;n--) {
        const Sprite *s=&s_present[n];int x=s->x+((s->hud && hud_edges)?0:native_x0);
        int base=tall?((s->tile&1)?0x1000:0):((g_ppuctrl&8)?0x1000:0);
        for(int row=0;row<height;row++) {
            int y=s->y+row;if(y<0 || y>=240) continue;
            int r=(s->attr&0x80)?height-1-row:row;
            int tile=tall?((s->tile&0xfe)+(r/8)):s->tile;
            int chr=base+tile*16+(r&7);uint8_t lo=g_chr_ram[chr],hi=g_chr_ram[chr+8];
            for(int col=0;col<8;col++) {
                int px=x+col;if(px<0 || px>=width) continue;
                if(!s->hud && s->x+col>=0 && s->x+col<8 && !(g_ppumask&4)) continue;
                int bit=(s->attr&0x40)?col:7-col,ci=((lo>>bit)&1)|(((hi>>bit)&1)<<1);
                if(!ci || ((s->attr&0x20)&&opaque[y*width+px])) continue;
                out[y*width+px]=g_nes_palette[g_ppu_pal[16+(s->attr&3)*4+ci]&63];
            }
        }
    }
    return s_expanded;
}
void met_actors_stats(unsigned *resident,unsigned *virtual_count,unsigned *sprites,unsigned *updates) {
    *resident=*virtual_count=0;
    for(int i=0;i<MAX_ACTORS;i++) if(s_actors[i].used && s_actors[i].extra[0]) {
        (*resident)++;if(s_actors[i].native_slot<0)(*virtual_count)++;
    }
    *sprites=s_present_count;*updates=s_updates;
}

typedef struct {
    uint32_t version, count, valid, updates;
    int32_t area, native[6];
    Actor actors[MAX_ACTORS];
    Sprite sprites[MAX_SPRITES];
} ActorSave;
int met_actors_save(uint8_t *buf,int cap) {
    if(!s_residents && !s_expanded) return 0;
    if(cap<(int)sizeof(ActorSave)) return -1;
    ActorSave save;memset(&save,0,sizeof save);
    save.version=1;save.count=s_present_count;save.valid=s_present_valid;save.updates=s_updates;save.area=s_area;
    for(int i=0;i<6;i++) save.native[i]=s_native[i];
    memcpy(save.actors,s_actors,sizeof s_actors);memcpy(save.sprites,s_present,sizeof s_present);
    memcpy(buf,&save,sizeof save);return sizeof save;
}
int met_actors_load(const uint8_t *buf,int len) {
    if(len==0) {met_actors_reset();return 1;}
    if(len!=(int)sizeof(ActorSave)) return 0;
    ActorSave save;memcpy(&save,buf,sizeof save);
    if(save.version!=1 || save.count>MAX_SPRITES || save.valid>1) return 0;
    for(int i=0;i<6;i++) if(save.native[i]<-1 || save.native[i]>=MAX_ACTORS) return 0;
    for(int i=0;i<MAX_ACTORS;i++) if(save.actors[i].used &&
        (save.actors[i].cx>=32 || save.actors[i].cy>=32 || save.actors[i].spawn_x>=32 ||
         save.actors[i].spawn_y>=32 || save.actors[i].slot>=0x60 ||
         (save.actors[i].slot&15) || save.actors[i].native_slot < -1 || save.actors[i].native_slot>=6)) return 0;
    s_area=save.area;s_present_count=save.count;s_present_valid=save.valid;s_updates=save.updates;
    for(int i=0;i<6;i++) s_native[i]=save.native[i];
    memcpy(s_actors,save.actors,sizeof s_actors);memcpy(s_present,save.sprites,sizeof s_present);
    return 1;
}
int met_actors_debug_json(char *buf,int cap) {
    int n=snprintf(buf,cap,"[");
    for(int i=0,first=1;i<MAX_ACTORS;i++) if(s_actors[i].used) {
        Actor *a=&s_actors[i];
        int written=snprintf(buf+n,cap-n,"%s{\"id\":%d,\"spawn\":[%u,%u],\"cell\":[%u,%u],\"slot\":%u,\"native\":%d,\"x\":%u,\"y\":%u,\"status\":%u,\"type\":%u,\"frame\":%u,\"health\":%u,\"hit\":%u}",
            first?"":",",i,a->spawn_x,a->spawn_y,a->cx,a->cy,a->slot,a->native_slot,a->base[1],a->base[0],a->extra[0],a->extra[14],a->extra[3],a->base[11],a->base[4]);
        if(written<0 || written>=cap-n) return 0;
        n+=written;first=0;
    }
    if(n+2>cap) return 0;buf[n++]=']';buf[n]=0;return 1;
}
