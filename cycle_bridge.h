#pragma once
#include "cyc_presentation.h"
#include "cyc_mod.h"
#include "cyc_render.h"
#include "cyc_video.h"
#include "mod_function_hooks.h"
#include "metroid_ram.h"
/* This game's work RAM contains data, not executable RAM views. Existing
 * actor code operates on the actual cycle machine's data inside its scope. */
typedef struct {uint8_t A,X,Y,S,C,Z,I,D,V,N;uint16_t PC;} CPU6502State;
extern CPU6502State met_cycle_cpu;
#define g_cpu met_cycle_cpu
uint8_t *met_cycle_work_ram(void);
#define g_sram (met_cycle_work_ram())
#define g_current_bank (g_ram[MET_CurrentBank])
extern int g_ws_oam_sidecar, g_ws_obj_delta_min,g_ws_obj_delta_max;
extern uint8_t g_ws_obj_ctx_valid,g_ws_obj_rel8;
extern int16_t g_ws_obj_true_rel,g_ws_shadow_x16[64];
extern int g_bail_active,g_recomp_stack_top;
extern uint16_t g_rts_target;
uint8_t mapper_peek_prg(uint16_t addr);
void runtime_begin_unclocked(void);
void runtime_end_unclocked(void);
uint16_t met_cycle_address(uint16_t usa);
int met_cycle_register_hook(const char *id,uint16_t usa,NESModFunctionEntryCallback cb);
int ppu_renderer_set_custom_render(CycCompositorFn fn,void *user);
void ppu_renderer_draw_sprites_wide(uint32_t *out,int width,int native_x0,const uint8_t *opaque,CycSpritePlaceFn place,void *user);
enum {MET_AFTER_WORLD=1,MET_AFTER_SPAWN,MET_AFTER_DRAW,MET_AFTER_BATCH,MET_AFTER_PROXIMITY,MET_AFTER_DOORS};
void met_cycle_after(int kind,uint64_t data);
bool met_cycle_world_commit(void);
void met_actors_cycle_return(int kind,uint64_t data);
void met_actors_cycle_publish(void);
void met_render_cycle_publish(void);
void met_cycle_init(void);
int met_cycle_save(uint8_t *buf,int cap);
int met_cycle_load(const uint8_t *buf,int len);
int met_cycle_validate(const uint8_t *buf,int len);
uint64_t watchdog_span_begin(void);
void watchdog_span_end(const char *phase,uint64_t start);
