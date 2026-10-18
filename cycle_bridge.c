#include "cycle_bridge.h"
#include "cycle_regions.h"
#include "metroid_ws.h"
#include "hw_internal.h"
#include "cpu6502.h"
#include "mod_runtime.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
CPU6502State met_cycle_cpu;
int g_ws_oam_sidecar,g_ws_obj_delta_min,g_ws_obj_delta_max,g_bail_active,g_recomp_stack_top;
uint16_t g_rts_target;
uint8_t g_ws_obj_ctx_valid,g_ws_obj_rel8;
int16_t g_ws_obj_true_rel,g_ws_shadow_x16[64];
static int16_t s_display_shadow[64];
typedef struct {uint16_t pc;uint8_t s,kind;uint64_t data;} After;
static After s_after[64];
static unsigned s_after_count,s_scope_after_count;
static CycCompositorFn s_compositor;static void *s_compositor_user;
static void regs_read(void) {
    g_cpu.A=cpu.a;g_cpu.X=cpu.x;g_cpu.Y=cpu.y;g_cpu.S=cpu.s;g_cpu.PC=cpu.pc;
    g_cpu.C=cpu.c;g_cpu.Z=cpu.z;g_cpu.I=cpu.i;g_cpu.D=cpu.d;g_cpu.V=cpu.v;g_cpu.N=cpu.n;
}
static void regs_write(void) {
    cpu.a=g_cpu.A;cpu.x=g_cpu.X;cpu.y=g_cpu.Y;cpu.s=g_cpu.S;
    cpu.c=g_cpu.C;cpu.z=g_cpu.Z;cpu.i=g_cpu.I;cpu.d=g_cpu.D;cpu.v=g_cpu.V;cpu.n=g_cpu.N;
}
uint8_t *met_cycle_work_ram(void) {return hw_cart.wram;}
uint8_t mapper_peek_prg(uint16_t addr) {return cyc_mod_peek(addr);}
uint16_t met_cycle_address(uint16_t usa) {
#ifdef METROID_CYCLE_PAL
    unsigned bank=usa>=0xc000?7:g_current_bank;
    for(unsigned i=0;i<sizeof met_region_addresses/sizeof met_region_addresses[0];i++)
        if(met_region_addresses[i].bank==bank && met_region_addresses[i].usa==usa) return met_region_addresses[i].pal;
#endif
    return usa;
}
static CycModRegs call_regs(void) {
    CycModRegs r={g_cpu.A,g_cpu.X,g_cpu.Y,g_cpu.S,(uint8_t)(g_cpu.N<<7|g_cpu.V<<6|0x20|g_cpu.D<<3|g_cpu.I<<2|g_cpu.Z<<1|g_cpu.C),0};return r;
}
void runtime_begin_unclocked(void) {
    s_scope_after_count=s_after_count;
    if(!cyc_mod_isolate_begin()){fprintf(stderr,"[Metroid cycle] nested actor scope\n");exit(2);}
    cyc_mod_allow_isolated_hooks(true);
}
void runtime_end_unclocked(void) {
    cyc_mod_isolate_end();s_after_count=s_scope_after_count;
}
static void call(uint16_t usa) {
    CycModRegs r=call_regs();r.s=0xfd;
    if(!cyc_mod_call(met_cycle_address(usa),&r)){fprintf(stderr,"[Metroid cycle] actor call failed $%04X\n",usa);exit(2);}
    regs_read();
}
#define GUEST(name,addr) void name(void){call(addr);}
GUEST(func_CB29,0xcb29) GUEST(func_EB0C,0xeb0c) GUEST(func_F345,0xf345) GUEST(func_F351,0xf351)
GUEST(func_DD8B,0xdd8b) GUEST(func_DE47,0xde47) GUEST(func_DE4A,0xde4a) GUEST(func_E0C1,0xe0c1)
GUEST(func_F93B,0xf93b) GUEST(func_FA9D,0xfa9d) GUEST(func_F75B,0xf75b)
GUEST(func_F152,0xf152) GUEST(func_F140,0xf140) GUEST(func_F282,0xf282) GUEST(func_F2CA,0xf2ca) GUEST(func_CE92,0xce92)
GUEST(func_8B79_b1,0x8b79) GUEST(func_8B79_b2,0x8b79) GUEST(func_8B79_b3,0x8b79)
GUEST(func_8B79_b4,0x8b79) GUEST(func_8B79_b5,0x8b79)
void met_cycle_after(int kind,uint64_t data) {
    if(s_after_count==64){fprintf(stderr,"[Metroid cycle] return queue overflow\n");exit(2);}
    uint16_t ret=(uint16_t)(g_ram[0x100|(uint8_t)(g_cpu.S+1)]|(g_ram[0x100|(uint8_t)(g_cpu.S+2)]<<8));
    After a;memset(&a,0,sizeof a);
    a.pc=(uint16_t)(ret+1);a.s=(uint8_t)(g_cpu.S+2);a.kind=(uint8_t)kind;a.data=data;
    s_after[s_after_count++]=a;
}
static void returned(void) {
    while(s_after_count) {
        After a=s_after[s_after_count-1];
        if(cpu.pc!=a.pc || cpu.s!=a.s) break;
        s_after_count--;regs_read();met_actors_cycle_return(a.kind,a.data);regs_write();
    }
}
bool met_cycle_world_commit(void) {
    CycModRegs r=call_regs();
    bool ok=cyc_mod_call_commit_hooked(met_cycle_address(0xcb29),&r);
    regs_read();return ok;
}
typedef struct {NESModFunctionEntryCallback cb;uint16_t usa;} Entry;
static Entry s_entries[24];static unsigned s_entry_count;
static int hook(unsigned i,uint16_t addr) {
    (void)addr;regs_read();int result=s_entries[i].cb(s_entries[i].usa);regs_write();return result;
}
#define HOOK(n) static int hook##n(uint16_t addr){return hook(n,addr);}
HOOK(0) HOOK(1) HOOK(2) HOOK(3) HOOK(4) HOOK(5) HOOK(6) HOOK(7)
HOOK(8) HOOK(9) HOOK(10) HOOK(11) HOOK(12) HOOK(13) HOOK(14) HOOK(15)
HOOK(16) HOOK(17) HOOK(18) HOOK(19) HOOK(20) HOOK(21) HOOK(22) HOOK(23)
int met_cycle_register_hook(const char *id,uint16_t usa,NESModFunctionEntryCallback cb) {
    static NESModFunctionEntryCallback const hooks[]={hook0,hook1,hook2,hook3,hook4,hook5,hook6,hook7,hook8,hook9,hook10,hook11,hook12,hook13,hook14,hook15,hook16,hook17,hook18,hook19,hook20,hook21,hook22,hook23};
    unsigned i=s_entry_count++;if(i>=24)return 0;s_entries[i]=(Entry){cb,usa};
    /* Constructors run before a ROM is loaded; fixed and shared area entry
     * addresses are therefore resolved from the generated region table. */
    uint16_t mapped=usa;
#ifdef METROID_CYCLE_PAL
    for(unsigned k=0;k<sizeof met_region_addresses/sizeof met_region_addresses[0];k++)
        if(met_region_addresses[k].usa==usa){mapped=met_region_addresses[k].pal;break;}
#endif
    return nes_mod_register_function_entry_plugin(id,mapped,hooks[i]);
}
static int sprite_store(uint16_t addr) {
    (void)addr;int slot=g_cpu.X/4;uint8_t x=g_cpu.A;
    int dx=(int8_t)(x-g_ws_obj_rel8);
    g_ws_shadow_x16[slot]=(int16_t)(g_ws_obj_ctx_valid && dx>=g_ws_obj_delta_min && dx<=g_ws_obj_delta_max?g_ws_obj_true_rel+dx:x);
    return 0;
}
static int nmi(uint16_t addr) {
    (void)addr;memcpy(s_display_shadow,g_ws_shadow_x16,sizeof s_display_shadow);
    met_actors_cycle_publish();met_render_cycle_publish();return 0;
}
static int compositor(uint32_t *out,int w,int h,int x0,const uint32_t *native,void *user) {
    (void)user;cyc_presentation_sync();return s_compositor?s_compositor(out,w,h,x0,native,s_compositor_user):0;
}
int ppu_renderer_set_custom_render(CycCompositorFn fn,void *user) {
    s_compositor=fn;s_compositor_user=user;cyc_render_set_compositor(fn?compositor:NULL,NULL);return 1;
}
typedef struct {CycSpritePlaceFn place;void *user;} Placement;
static int place_sprite(int slot,int x,int y,int *out,void *user) {
    Placement *p=user;return p->place?p->place(slot,s_display_shadow[slot],y,out,p->user):(*out=x,1);
}
void ppu_renderer_draw_sprites_wide(uint32_t *out,int w,int x0,const uint8_t *opaque,CycSpritePlaceFn place,void *user) {
    Placement p={place,user};cyc_render_sprites(out,w,240,x0,opaque,place_sprite,&p);
}
void met_cycle_init(void) {
    cyc_presentation_sync();regs_read();s_after_count=0;
    for(int i=0;i<64;i++)g_ws_shadow_x16[i]=s_display_shadow[i]=g_ppu_oam[i*4+3];
    cyc_mod_set_return_hook(returned);
    nes_mod_set_function_hook_enabled("metroid.cycle.sprite-x",1);
    nes_mod_set_function_hook_enabled("metroid.cycle.nmi",1);
}
NES_MOD_CONSTRUCTOR(register_cycle_helpers) {
    met_cycle_register_hook("metroid.cycle.sprite-x",MET_CYCLE_SPRITE_STORE_USA,sprite_store);
    met_cycle_register_hook("metroid.cycle.nmi",MET_CYCLE_NMI_USA,nmi);
}
typedef struct {uint32_t version,count;After after[64];int16_t build[64],display[64],rel;uint8_t rel8,valid;} Save;
int met_cycle_save(uint8_t *buf,int cap) {
    if(!metroid_ws_enabled())return 0;
    if(cap<(int)sizeof(Save))return -1;Save s={0};s.version=1;s.count=s_after_count;
    memcpy(s.after,s_after,s_after_count*sizeof *s_after);memcpy(s.build,g_ws_shadow_x16,sizeof s.build);memcpy(s.display,s_display_shadow,sizeof s.display);
    s.rel=g_ws_obj_true_rel;s.rel8=g_ws_obj_rel8;s.valid=g_ws_obj_ctx_valid;memcpy(buf,&s,sizeof s);return sizeof s;
}
static int bridge_read(const uint8_t *buf,int len,int apply) {
    if(!len){if(apply)s_after_count=0;return 1;}if(len!=(int)sizeof(Save))return 0;Save s;memcpy(&s,buf,sizeof s);
    if(s.version!=1 || s.count>64 || s.valid>1)return 0;
    for(unsigned i=0;i<s.count;i++){
        After a=s.after[i];if(a.kind<MET_AFTER_WORLD || a.kind>MET_AFTER_DOORS)return 0;
        if(a.kind==MET_AFTER_SPAWN && ((a.data&255)>=0x60 || ((a.data>>8)&255)>96 || ((a.data>>16)&255)>=6))return 0;
        if(a.kind==MET_AFTER_PROXIMITY && (a.data&255)>=0x60)return 0;
        if(a.kind==MET_AFTER_DOORS && a.data>2048)return 0;
    }
    if(!apply)return 1;
    s_after_count=s.count;memcpy(s_after,s.after,sizeof s.after);memcpy(g_ws_shadow_x16,s.build,sizeof s.build);memcpy(s_display_shadow,s.display,sizeof s.display);
    g_ws_obj_true_rel=s.rel;g_ws_obj_rel8=s.rel8;g_ws_obj_ctx_valid=s.valid;return 1;
}
int met_cycle_load(const uint8_t *buf,int len) {return bridge_read(buf,len,1);}
int met_cycle_validate(const uint8_t *buf,int len) {return bridge_read(buf,len,0);}
uint64_t watchdog_span_begin(void){return 0;}
void watchdog_span_end(const char *phase,uint64_t start){(void)phase;(void)start;}
