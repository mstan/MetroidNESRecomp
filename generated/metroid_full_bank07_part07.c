/* metroid_full_bank07_part07.c — PRG bank 7 function bodies (sub-part 7).
 * STANDALONE translation unit — compiled independently (in
 * parallel with every other bank part/sub-part and the
 * umbrella metroid_full.c). Do not compile as part of another TU or
 * edit directly; the source of truth is the recompiler's
 * code_generator.c. Renamed to drop the _partNN suffix if
 * this bank turned out to fit in a single sub-part. */

#include "metroid_full_decls.h"

void func_D0E4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D0E4");
#endif
label_D0E4:;
    /* $D0E4: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_D0E5:;
    /* $D0E5: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_D0EB; }
label_D0E7:;
    /* $D0E7: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x12); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_D0E9:;
    /* $D0E9: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(2); goto label_D11E; }
label_D0EB:;
    /* $D0EB: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_D0ED:;
    /* $D0ED: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A);
label_D0EF:;
    /* $D0EF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_D11E; }
label_D0F1:;
    /* $D0F1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0301); FLAG_NZ(g_cpu.A);
label_D0F4:;
    /* $D0F4: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_D0F5:;
    /* $D0F5: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x08 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x08); g_cpu.A=r&0xFF; }
label_D0F7:;
    /* $D0F7: 8D */ maybe_trigger_vblank(4); nes_write(0x0301, g_cpu.A);
label_D0FA:;
    /* $D0FA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFC; g_cpu.S--; func_E7A2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD0FA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D0FD:;
    /* $D0FD: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); goto label_D11E; }
label_D0FF:;
    /* $D0FF: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_D101:;
    /* $D101: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x03; g_cpu.S--; func_E8BE();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD101, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D104:;
    /* $D104: 86 */ maybe_trigger_vblank(3); nes_write(0x05, g_cpu.X);
label_D106:;
    /* $D106: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF5; FLAG_NZ(g_cpu.A);
label_D108:;
    /* $D108: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_D10A:;
    /* $D10A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0C; g_cpu.S--; func_FD8F();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD10A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D10D:;
    /* $D10D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0F; g_cpu.S--; func_D638();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD10D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D110:;
    /* $D110: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x12; g_cpu.S--; func_CF55();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD110, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D113:;
    /* $D113: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0306; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D116:;
    /* $D116: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x18; g_cpu.S--; func_D147();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD116, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D119:;
    /* $D119: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_D11B:;
    /* $D11B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_D144(); return;
label_D11E:;
    /* $D11E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x12); FLAG_NZ(g_cpu.A);
label_D120:;
    /* $D120: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x22; g_cpu.S--; func_E1E1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD120, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D123:;
    /* $D123: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_D125:;
    /* $D125: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_D12E; }
label_D127:;
    /* $D127: 85 */ maybe_trigger_vblank(3); nes_write(0x4D, g_cpu.A);
label_D129:;
    /* $D129: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x16; FLAG_NZ(g_cpu.A);
label_D12B:;
    /* $D12B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2D; g_cpu.S--; func_CF6B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD12B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D12E:;
    /* $D12E: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4D); FLAG_NZ(g_cpu.X);
label_D130:;
    /* $D130: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x32; g_cpu.S--; func_CCB7();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD130, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D133:;
    /* $D133: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x35; g_cpu.S--; func_CF2E();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD133, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D136:;
    /* $D136: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x38; g_cpu.S--; func_D150();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD136, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D139:;
    /* $D139: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_D13B:;
    /* $D13B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_D13D:;
    /* $D13D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_D142; }
label_D13F:;
    /* $D13F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x41; g_cpu.S--; func_CFB7();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD13F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D142:;
    /* $D142: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_D144:;
    /* $D144: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_CD6D(); return;
}

void func_CC4C(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CC4C");
#endif
label_CC4C:;
    /* $CC4C: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xE1 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_CC4E:;
    /* $CC4E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_CC50:;
    /* $CC50: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_CC54; }
label_CC52:;
    /* $CC52: 85 */ maybe_trigger_vblank(3); nes_write(0x4D, g_cpu.A);
label_CC54:;
    /* $CC54: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_CC55:;
    /* $CC55: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xCC87 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_CC58:;
    /* $CC58: 8D */ maybe_trigger_vblank(4); nes_write(0x0300, g_cpu.A);
label_CC5B:;
    /* $CC5B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x12); FLAG_NZ(g_cpu.A);
label_CC5D:;
    /* $CC5D: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x16); FLAG_NZ(g_cpu.A);
label_CC5F:;
    /* $CC5F: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_CC60:;
    /* $CC60: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_CC65; }
label_CC62:;
    /* $CC62: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xCC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x64; g_cpu.S--; func_D1EE();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCC62, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CC65:;
    /* $CC65: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x12); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_CC67:;
    /* $CC67: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_CC6E; }
label_CC69:;
    /* $CC69: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_CC6B:;
    /* $CC6B: 8D */ maybe_trigger_vblank(4); nes_write(0x0300, g_cpu.A);
label_CC6E:;
    /* $CC6E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_CC70:;
    /* $CC70: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xCC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x72; g_cpu.S--; func_CD6D();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCC70, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CC73:;
    /* $CC73: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0300); FLAG_NZ(g_cpu.A);
label_CC76:;
    /* $CC76: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_CC78:;
    /* $CC78: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_CC97; }
label_CC7A:;
    /* $CC7A: 20 */ maybe_trigger_vblank(6); /* inline_dispatch $C27C: 5 entries (bank=-1) */
switch(g_cpu.A) {
  case 0: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x5C); nes_write(0x000D, 0xC4); g_cpu.A = 0xC4; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_C45C(); return;
  case 1: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x98); nes_write(0x000D, 0xCC); g_cpu.A = 0xCC; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_CC98(); return;
  case 2: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xC3); nes_write(0x000D, 0xCF); g_cpu.A = 0xCF; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_CFC3(); return;
  case 3: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xB5); nes_write(0x000D, 0xD0); g_cpu.A = 0xD0; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_D0B5(); return;
  case 4: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x77); nes_write(0x000D, 0xCF); g_cpu.A = 0xCF; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_CF77(); return;
  default: nes_log_inline_miss(0xCC7A, g_cpu.A); return;
}
label_CC87:;
    /* $CC87: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_CC89:;
    /* $CC89: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x04 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_CC8B:;
    /* $CC8B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x50; FLAG_NZ(g_cpu.A);
label_CC8D:;
    /* $CC8D: 8D */ maybe_trigger_vblank(4); nes_write(0x030F, g_cpu.A);
label_CC90:;
    /* $CC90: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x32; FLAG_NZ(g_cpu.A);
label_CC92:;
    /* $CC92: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xCC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x94; g_cpu.S--; func_CF6B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCC92, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CC95:;
    /* $CC95: 85 */ maybe_trigger_vblank(3); nes_write(0x65, g_cpu.A);
label_CC97:;
    /* $CC97: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F054(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F054");
#endif
label_F054:;
    /* $F054: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0xF1; FLAG_NZ(g_cpu.A);
label_F056:;
    /* $F056: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x58; g_cpu.S--; func_F2B4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF056, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F059:;
    /* $F059: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xD0; FLAG_NZ(g_cpu.Y);
label_F05B:;
    /* $F05B: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F05E:;
    /* $F05E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F076; }
label_F060:;
    /* $F060: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_F062:;
    /* $F062: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_F070; }
label_F064:;
    /* $F064: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_F066:;
    /* $F066: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F070; }
label_F068:;
    /* $F068: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_F06A:;
    /* $F06A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F070; }
label_F06C:;
    /* $F06C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0B; g_cpu.C=(g_cpu.A>=0x0B)?1:0; FLAG_NZ(r&0xFF); }
label_F06E:;
    /* $F06E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F076; }
label_F070:;
    /* $F070: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x72; g_cpu.S--; func_F149();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF070, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F073:;
    /* $F073: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x75; g_cpu.S--; func_F32A();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF073, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F076:;
    /* $F076: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x78; g_cpu.S--; func_F1EE();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF076, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F079:;
    /* $F079: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_F05B;
    }
label_F07B:;
    /* $F07B: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_F07C:;
    /* $F07C: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_F07D:;
    /* $F07D: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x08; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_F07F:;
    /* $F07F: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_F080:;
    /* $F080: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xF03D); return; }
label_F082:;
    /* $F082: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xB0; FLAG_NZ(g_cpu.X);
label_F084:;
    /* $F084: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F087:;
    /* $F087: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_F089:;
    /* $F089: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F098; }
label_F08B:;
    /* $F08B: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_F08D:;
    /* $F08D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; func_CE84();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF08D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F090:;
    /* $F090: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F09D; }
label_F092:;
    /* $F092: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x94; g_cpu.S--; func_DC7F();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF092, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F095:;
    /* $F095: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x97; g_cpu.S--; func_F277();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF095, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F098:;
    /* $F098: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; func_F1F4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF098, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F09B:;
    /* $F09B: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_F084;
    }
label_F09D:;
    /* $F09D: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x50; FLAG_NZ(g_cpu.X);
label_F09F:;
    /* $F09F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F0A2:;
    /* $F0A2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0A6; }
label_F0A4:;
    /* $F0A4: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_F0A6:;
    /* $F0A6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0E5; }
label_F0A8:;
    /* $F0A8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAA; g_cpu.S--; func_F152();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0A8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0AB:;
    /* $F0AB: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F0AE:;
    /* $F0AE: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_F0B0:;
    /* $F0B0: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0D4; }
label_F0B2:;
    /* $F0B2: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xD0; FLAG_NZ(g_cpu.Y);
label_F0B4:;
    /* $F0B4: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F0B7:;
    /* $F0B7: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0CF; }
label_F0B9:;
    /* $F0B9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_F0BB:;
    /* $F0BB: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_F0C9; }
label_F0BD:;
    /* $F0BD: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_F0BF:;
    /* $F0BF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0C9; }
label_F0C1:;
    /* $F0C1: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_F0C3:;
    /* $F0C3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0C9; }
label_F0C5:;
    /* $F0C5: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0B; g_cpu.C=(g_cpu.A>=0x0B)?1:0; FLAG_NZ(r&0xFF); }
label_F0C7:;
    /* $F0C7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0CF; }
label_F0C9:;
    /* $F0C9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCB; g_cpu.S--; func_F140();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0C9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0CC:;
    /* $F0CC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCE; g_cpu.S--; func_F2CA();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0CC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0CF:;
    /* $F0CF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD1; g_cpu.S--; func_F1EE();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0CF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0D2:;
    /* $F0D2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_F0B4;
    }
label_F0D4:;
    /* $F0D4: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_F0D6:;
    /* $F0D6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x70); FLAG_NZ(g_cpu.A);
label_F0D8:;
    /* $F0D8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0E5; }
label_F0DA:;
    /* $F0DA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDC; g_cpu.S--; func_CE84();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0DA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0DD:;
    /* $F0DD: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0E5; }
label_F0DF:;
    /* $F0DF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE1; g_cpu.S--; func_F140();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0DF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0E2:;
    /* $F0E2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE4; g_cpu.S--; func_F282();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0E2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0E5:;
    /* $F0E5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE7; g_cpu.S--; func_F1F4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0E5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0E8:;
    /* $F0E8: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_F0ED; }
label_F0EA:;
    /* $F0EA: 4C */ maybe_trigger_vblank(3); goto label_F09F;
label_F0ED:;
    /* $F0ED: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_F0EF:;
    /* $F0EF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; func_F172();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0EF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0F2:;
    /* $F0F2: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x60; FLAG_NZ(g_cpu.Y);
label_F0F4:;
    /* $F0F4: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AF4 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F0F7:;
    /* $F0F7: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_F112; }
label_F0F9:;
    /* $F0F9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_F0FB:;
    /* $F0FB: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_F112; }
label_F0FD:;
    /* $F0FD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x70); FLAG_NZ(g_cpu.A);
label_F0FF:;
    /* $F0FF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F112; }
label_F101:;
    /* $F101: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x03; g_cpu.S--; func_CE84();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF101, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F104:;
    /* $F104: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F112; }
label_F106:;
    /* $F106: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x08; g_cpu.S--; func_F1B3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF106, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F109:;
    /* $F109: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0B; g_cpu.S--; func_F162();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF109, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F10C:;
    /* $F10C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0E; g_cpu.S--; func_F1FA();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF10C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F10F:;
    /* $F10F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x11; g_cpu.S--; func_F2ED();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF10F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F112:;
    /* $F112: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x14; g_cpu.S--; func_F1EE();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF112, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F115:;
    /* $F115: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_F117:;
    /* $F117: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_F0F4;
    }
label_F119:;
    /* $F119: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_F11B:;
    /* $F11B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1D; g_cpu.S--; func_CE84();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF11B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F11E:;
    /* $F11E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F13D; }
label_F120:;
    /* $F120: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x22; g_cpu.S--; func_F186();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF120, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F123:;
    /* $F123: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xF0; FLAG_NZ(g_cpu.X);
label_F125:;
    /* $F125: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F128:;
    /* $F128: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_F12A:;
    /* $F12A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F130; }
label_F12C:;
    /* $F12C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_F12E:;
    /* $F12E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F136; }
label_F130:;
    /* $F130: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x32; g_cpu.S--; func_DC82();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF130, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F133:;
    /* $F133: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x35; g_cpu.S--; func_F311();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF133, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F136:;
    /* $F136: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x38; g_cpu.S--; func_F1F4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF136, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F139:;
    /* $F139: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_F13B:;
    /* $F13B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_F125;
    }
label_F13D:;
    /* $F13D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_CE92(); return;
}

void func_F560(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F560");
#endif
label_F560:;
    /* $F560: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x62; g_cpu.S--; if (!nes_dispatch_call(0x08F0, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF560, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F563:;
    /* $F563: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_F565:;
    /* $F565: 9D */ maybe_trigger_vblank(5); nes_write((0x040B + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F568:;
    /* $F568: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x95A8, -1); return;
}

void func_DD40(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DD40");
#endif
label_DD40:;
    /* $DD40: 95 */ maybe_trigger_vblank(4); nes_write((0xF0 + g_cpu.X) & 0xFF, g_cpu.A);
label_DD42:;
    /* $DD42: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_DD43:;
    /* $DD43: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x687A); FLAG_NZ(g_cpu.A);
label_DD46:;
    /* $DD46: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DD5B; }
label_DD48:;
    /* $DD48: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x95; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DD4A:;
    /* $DD4A: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_DD4B:;
    /* $DD4B: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x94); FLAG_NZ(g_cpu.Y);
label_DD4D:;
    /* $DD4D: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x96); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_DD4F:;
    /* $DD4F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DD5B; }
label_DD51:;
    /* $DD51: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x96; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DD53:;
    /* $DD53: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x89; g_cpu.C=(g_cpu.A>=0x89)?1:0; FLAG_NZ(r&0xFF); }
label_DD55:;
    /* $DD55: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DD4A;
    }
label_DD57:;
    /* $DD57: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_DD59:;
    /* $DD59: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DD4A;
    }
label_DD5B:;
    /* $DD5B: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_DD5D:;
    /* $DD5D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x74); FLAG_NZ(g_cpu.A);
label_DD5F:;
    /* $DD5F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x13; g_cpu.C=(g_cpu.A>=0x13)?1:0; FLAG_NZ(r&0xFF); }
label_DD61:;
    /* $DD61: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DD66; }
label_DD63:;
    /* $DD63: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_FA18(); return;
label_DD66:;
    /* $DD66: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_DD68:;
    /* $DD68: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_DD6A:;
    /* $DD6A: 84 */ maybe_trigger_vblank(3); nes_write(0x96, g_cpu.Y);
label_DD6C:;
    /* $DD6C: 84 */ maybe_trigger_vblank(3); nes_write(0x95, g_cpu.Y);
label_DD6E:;
    /* $DD6E: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DD6F:;
    /* $DD6F: 84 */ maybe_trigger_vblank(3); nes_write(0x93, g_cpu.Y);
label_DD71:;
    /* $DD71: 84 */ maybe_trigger_vblank(3); nes_write(0x94, g_cpu.Y);
label_DD73:;
    /* $DD73: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xDD30); return; }
label_DD75:;
    /* $DD75: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xDD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x77; g_cpu.S--; func_CBF9();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDD75, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DD78:;
    /* $DD78: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x74); FLAG_NZ(g_cpu.A);
label_DD7A:;
    /* $DD7A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_DD7C:;
    /* $DD7C: 8D */ maybe_trigger_vblank(4); nes_write(0x0108, g_cpu.A);
label_DD7F:;
    /* $DD7F: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_DD80:;
    /* $DD80: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_DD81:;
    /* $DD81: 99 */ maybe_trigger_vblank(5); nes_write((0x687A + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_DD84:;
    /* $DD84: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x4B; FLAG_NZ(g_cpu.A);
label_DD86:;
    /* $DD86: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xDD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x88; g_cpu.S--; func_DD97();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDD86, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DD89:;
    /* $DD89: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DD5B;
    }
label_DD8B:;
    /* $DD8B: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_DD8D:;
    /* $DD8D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AF7 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DD90:;
    /* $DD90: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xF7; g_cpu.C=(g_cpu.A>=0xF7)?1:0; FLAG_NZ(r&0xFF); }
label_DD92:;
    /* $DD92: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_DDB0; }
label_DD94:;
    /* $DD94: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_DF2D(); return;
label_DDB0:;
    /* $DDB0: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0400 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDB3:;
    /* $DDB3: 85 */ maybe_trigger_vblank(3); nes_write(0x0A, g_cpu.A);
label_DDB5:;
    /* $DDB5: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0401 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDB8:;
    /* $DDB8: 85 */ maybe_trigger_vblank(3); nes_write(0x0B, g_cpu.A);
label_DDBA:;
    /* $DDBA: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AFB + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDBD:;
    /* $DDBD: 85 */ maybe_trigger_vblank(3); nes_write(0x06, g_cpu.A);
label_DDBF:;
    /* $DDBF: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AF7 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDC2:;
    /* $DDC2: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_DDC3:;
    /* $DDC3: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_DDC4:;
    /* $DDC4: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x41) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDC6:;
    /* $DDC6: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DDCA; }
label_DDC8:;
    /* $DDC8: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x43) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDCA:;
    /* $DDCA: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_DDCC:;
    /* $DDCC: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DDCD:;
    /* $DDCD: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x41) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDCF:;
    /* $DDCF: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DDD3; }
label_DDD1:;
    /* $DDD1: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x43) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDD3:;
    /* $DDD3: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_DDD5:;
    /* $DDD5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xDD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD7; g_cpu.S--; func_DCC3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDDD5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DDD8:;
    /* $DDD8: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_DDD9:;
    /* $DDD9: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x45) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDDB:;
    /* $DDDB: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_DDDD:;
    /* $DDDD: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DDDE:;
    /* $DDDE: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x45) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDE0:;
    /* $DDE0: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_DDE2:;
    /* $DDE2: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_DDE4:;
    /* $DDE4: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x02; g_cpu.C=(g_cpu.X>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_DDE6:;
    /* $DDE6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_DE05; }
label_DDE8:;
    /* $DDE8: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_DDEA:;
    /* $DDEA: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0406 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DDED:;
    /* $DDED: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0406 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDF0:;
    /* $DDF0: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_DDF1:;
    /* $DDF1: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_DDF3:;
    /* $DDF3: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_DDF4:;
    /* $DDF4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x05); FLAG_NZ(g_cpu.A);
label_DDF6:;
    /* $DDF6: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x3F; FLAG_NZ(g_cpu.A);
label_DDF8:;
    /* $DDF8: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xDC8B + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDFB:;
    /* $DDFB: 85 */ maybe_trigger_vblank(3); nes_write(0x05, g_cpu.A);
label_DDFD:;
    /* $DDFD: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_DDFE:;
    /* $DDFE: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x19; g_cpu.C=(g_cpu.A>=0x19)?1:0; FLAG_NZ(r&0xFF); }
label_DE00:;
    /* $DE00: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_DE05; }
label_DE02:;
    /* $DE02: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_DCF5(); return;
label_DE05:;
    /* $DE05: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_DE07:;
    /* $DE07: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DE08:;
    /* $DE08: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DE0A:;
    /* $DE0A: 9D */ maybe_trigger_vblank(5); nes_write((0x6AF5 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DE0D:;
    /* $DE0D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xDE; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0F; g_cpu.S--; func_DE3D();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDE0D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DE10:;
    /* $DE10: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DE11:;
    /* $DE11: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DE13:;
    /* $DE13: 9D */ maybe_trigger_vblank(5); nes_write((0x6AF6 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DE16:;
    /* $DE16: 85 */ maybe_trigger_vblank(3); nes_write(0x09, g_cpu.A);
label_DE18:;
    /* $DE18: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DE19:;
    /* $DE19: 84 */ maybe_trigger_vblank(3); nes_write(0x11, g_cpu.Y);
label_DE1B:;
    /* $DE1B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xDE; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1D; g_cpu.S--; func_DFDF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDE1B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DE1E:;
    /* $DE1E: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_DE1F:;
    /* $DE1F: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_DE20:;
    /* $DE20: 85 */ maybe_trigger_vblank(3); nes_write(0x08, g_cpu.A);
label_DE22:;
    /* $DE22: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_DE24:;
    /* $DE24: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DE27:;
    /* $DE27: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFD; FLAG_NZ(g_cpu.A);
label_DE29:;
    /* $DE29: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x08); FLAG_NZ(g_cpu.A);
label_DE2B:;
    /* $DE2B: 9D */ maybe_trigger_vblank(5); nes_write((0x0405 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DE2E:;
    /* $DE2E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x08); FLAG_NZ(g_cpu.A);
label_DE30:;
    /* $DE30: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DE53; }
label_DE32:;
    /* $DE32: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_DEDE(); return;
label_DE53:;
    /* $DE53: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_DF2D(); return;
}

void func_DD50(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DD50");
#endif
label_DD50:;
    /* $DD50: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_DD51:;
    /* $DD51: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x96; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DD53:;
    /* $DD53: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x89; g_cpu.C=(g_cpu.A>=0x89)?1:0; FLAG_NZ(r&0xFF); }
label_DD55:;
    /* $DD55: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xDD4A); return; }
label_DD57:;
    /* $DD57: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_DD59:;
    /* $DD59: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xDD4A); return; }
label_DD5B:;
    /* $DD5B: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_DD5D:;
    /* $DD5D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x74); FLAG_NZ(g_cpu.A);
label_DD5F:;
    /* $DD5F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x13; g_cpu.C=(g_cpu.A>=0x13)?1:0; FLAG_NZ(r&0xFF); }
label_DD61:;
    /* $DD61: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DD66; }
label_DD63:;
    /* $DD63: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_FA18(); return;
label_DD66:;
    /* $DD66: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_DD68:;
    /* $DD68: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_DD6A:;
    /* $DD6A: 84 */ maybe_trigger_vblank(3); nes_write(0x96, g_cpu.Y);
label_DD6C:;
    /* $DD6C: 84 */ maybe_trigger_vblank(3); nes_write(0x95, g_cpu.Y);
label_DD6E:;
    /* $DD6E: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DD6F:;
    /* $DD6F: 84 */ maybe_trigger_vblank(3); nes_write(0x93, g_cpu.Y);
label_DD71:;
    /* $DD71: 84 */ maybe_trigger_vblank(3); nes_write(0x94, g_cpu.Y);
label_DD73:;
    /* $DD73: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xDD30); return; }
label_DD75:;
    /* $DD75: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xDD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x77; g_cpu.S--; func_CBF9();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDD75, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DD78:;
    /* $DD78: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x74); FLAG_NZ(g_cpu.A);
label_DD7A:;
    /* $DD7A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_DD7C:;
    /* $DD7C: 8D */ maybe_trigger_vblank(4); nes_write(0x0108, g_cpu.A);
label_DD7F:;
    /* $DD7F: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_DD80:;
    /* $DD80: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_DD81:;
    /* $DD81: 99 */ maybe_trigger_vblank(5); nes_write((0x687A + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_DD84:;
    /* $DD84: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x4B; FLAG_NZ(g_cpu.A);
label_DD86:;
    /* $DD86: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xDD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x88; g_cpu.S--; func_DD97();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDD86, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DD89:;
    /* $DD89: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DD5B;
    }
label_DD8B:;
    /* $DD8B: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_DD8D:;
    /* $DD8D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AF7 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DD90:;
    /* $DD90: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xF7; g_cpu.C=(g_cpu.A>=0xF7)?1:0; FLAG_NZ(r&0xFF); }
label_DD92:;
    /* $DD92: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_DDB0; }
label_DD94:;
    /* $DD94: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_DF2D(); return;
label_DDB0:;
    /* $DDB0: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0400 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDB3:;
    /* $DDB3: 85 */ maybe_trigger_vblank(3); nes_write(0x0A, g_cpu.A);
label_DDB5:;
    /* $DDB5: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0401 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDB8:;
    /* $DDB8: 85 */ maybe_trigger_vblank(3); nes_write(0x0B, g_cpu.A);
label_DDBA:;
    /* $DDBA: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AFB + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDBD:;
    /* $DDBD: 85 */ maybe_trigger_vblank(3); nes_write(0x06, g_cpu.A);
label_DDBF:;
    /* $DDBF: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AF7 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDC2:;
    /* $DDC2: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_DDC3:;
    /* $DDC3: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_DDC4:;
    /* $DDC4: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x41) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDC6:;
    /* $DDC6: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DDCA; }
label_DDC8:;
    /* $DDC8: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x43) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDCA:;
    /* $DDCA: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_DDCC:;
    /* $DDCC: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DDCD:;
    /* $DDCD: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x41) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDCF:;
    /* $DDCF: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DDD3; }
label_DDD1:;
    /* $DDD1: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x43) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDD3:;
    /* $DDD3: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_DDD5:;
    /* $DDD5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xDD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD7; g_cpu.S--; func_DCC3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDDD5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DDD8:;
    /* $DDD8: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_DDD9:;
    /* $DDD9: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x45) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDDB:;
    /* $DDDB: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_DDDD:;
    /* $DDDD: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DDDE:;
    /* $DDDE: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x45) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDE0:;
    /* $DDE0: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_DDE2:;
    /* $DDE2: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_DDE4:;
    /* $DDE4: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x02; g_cpu.C=(g_cpu.X>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_DDE6:;
    /* $DDE6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_DE05; }
label_DDE8:;
    /* $DDE8: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_DDEA:;
    /* $DDEA: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0406 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DDED:;
    /* $DDED: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0406 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDF0:;
    /* $DDF0: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_DDF1:;
    /* $DDF1: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_DDF3:;
    /* $DDF3: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_DDF4:;
    /* $DDF4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x05); FLAG_NZ(g_cpu.A);
label_DDF6:;
    /* $DDF6: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x3F; FLAG_NZ(g_cpu.A);
label_DDF8:;
    /* $DDF8: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xDC8B + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDFB:;
    /* $DDFB: 85 */ maybe_trigger_vblank(3); nes_write(0x05, g_cpu.A);
label_DDFD:;
    /* $DDFD: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_DDFE:;
    /* $DDFE: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x19; g_cpu.C=(g_cpu.A>=0x19)?1:0; FLAG_NZ(r&0xFF); }
label_DE00:;
    /* $DE00: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_DE05; }
label_DE02:;
    /* $DE02: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_DCF5(); return;
label_DE05:;
    /* $DE05: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_DE07:;
    /* $DE07: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DE08:;
    /* $DE08: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DE0A:;
    /* $DE0A: 9D */ maybe_trigger_vblank(5); nes_write((0x6AF5 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DE0D:;
    /* $DE0D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xDE; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0F; g_cpu.S--; func_DE3D();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDE0D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DE10:;
    /* $DE10: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DE11:;
    /* $DE11: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DE13:;
    /* $DE13: 9D */ maybe_trigger_vblank(5); nes_write((0x6AF6 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DE16:;
    /* $DE16: 85 */ maybe_trigger_vblank(3); nes_write(0x09, g_cpu.A);
label_DE18:;
    /* $DE18: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DE19:;
    /* $DE19: 84 */ maybe_trigger_vblank(3); nes_write(0x11, g_cpu.Y);
label_DE1B:;
    /* $DE1B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xDE; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1D; g_cpu.S--; func_DFDF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDE1B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DE1E:;
    /* $DE1E: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_DE1F:;
    /* $DE1F: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_DE20:;
    /* $DE20: 85 */ maybe_trigger_vblank(3); nes_write(0x08, g_cpu.A);
label_DE22:;
    /* $DE22: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_DE24:;
    /* $DE24: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DE27:;
    /* $DE27: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFD; FLAG_NZ(g_cpu.A);
label_DE29:;
    /* $DE29: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x08); FLAG_NZ(g_cpu.A);
label_DE2B:;
    /* $DE2B: 9D */ maybe_trigger_vblank(5); nes_write((0x0405 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DE2E:;
    /* $DE2E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x08); FLAG_NZ(g_cpu.A);
label_DE30:;
    /* $DE30: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DE53; }
label_DE32:;
    /* $DE32: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_DEDE(); return;
label_DE53:;
    /* $DE53: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_DF2D(); return;
}

void func_FF22(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_FF22");
#endif
label_FF22:;
    /* $FF22: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xD0); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_FF24:;
    /* $FF24: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xA5 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_FF26:;
    /* $FF26: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x29 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_FF28:;
    /* $FF28: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xF0); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_FF2A:;
    /* $FF2A: 06 */ maybe_trigger_vblank(5); { uint16_t a=0xA5; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_FF2C:;
    /* $FF2C: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x09 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_FF2E:;
    /* $FF2E: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0185); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_FF31:;
    /* $FF31: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_FF33:;
    /* $FF33: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x2F; FLAG_NZ(g_cpu.A);
label_FF35:;
    /* $FF35: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_FF37:;
    /* $FF37: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFF; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x39; g_cpu.S--; func_C328();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFF37, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FF3A:;
    /* $FF3A: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_FF3B:;
    /* $FF3B: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_DD0F(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DD0F");
#endif
label_DD0F:;
    /* $DD0F: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x0A); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_DD11:;
    /* $DD11: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_DD75; }
label_DD13:;
    /* $DD13: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xDD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x15; g_cpu.S--; func_F74B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDD13, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DD16:;
    /* $DD16: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_DD18:;
    /* $DD18: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xDD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1A; g_cpu.S--; if (!nes_dispatch_call(0x80B0, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDD18, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DD1B:;
    /* $DD1B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_DD1D:;
    /* $DD1D: 9D */ maybe_trigger_vblank(5); nes_write((0x6B02 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DD20:;
    /* $DD20: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_DD22:;
    /* $DD22: 9D */ maybe_trigger_vblank(5); nes_write((0x6AF4 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DD25:;
    /* $DD25: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x60; FLAG_NZ(g_cpu.A);
label_DD27:;
    /* $DD27: 9D */ maybe_trigger_vblank(5); nes_write((0x040D + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DD2A:;
    /* $DD2A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_DD2C:;
    /* $DD2C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x10; g_cpu.C=(g_cpu.A>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_DD2E:;
    /* $DD2E: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DD5B; }
label_DD30:;
    /* $DD30: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_DD32:;
    /* $DD32: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_DD33:;
    /* $DD33: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xDE35 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DD36:;
    /* $DD36: 9D */ maybe_trigger_vblank(5); nes_write((0x6AF7 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DD39:;
    /* $DD39: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x80; g_cpu.C=(g_cpu.A>=0x80)?1:0; FLAG_NZ(r&0xFF); }
label_DD3B:;
    /* $DD3B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_DD4B; }
label_DD3D:;
    /* $DD3D: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x93); FLAG_NZ(g_cpu.Y);
label_DD3F:;
    /* $DD3F: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x95); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_DD41:;
    /* $DD41: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DD5B; }
label_DD43:;
    /* $DD43: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x687A); FLAG_NZ(g_cpu.A);
label_DD46:;
    /* $DD46: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DD5B; }
label_DD48:;
    /* $DD48: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x95; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DD4A:;
    /* $DD4A: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_DD4B:;
    /* $DD4B: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x94); FLAG_NZ(g_cpu.Y);
label_DD4D:;
    /* $DD4D: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x96); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_DD4F:;
    /* $DD4F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DD5B; }
label_DD51:;
    /* $DD51: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x96; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DD53:;
    /* $DD53: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x89; g_cpu.C=(g_cpu.A>=0x89)?1:0; FLAG_NZ(r&0xFF); }
label_DD55:;
    /* $DD55: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DD4A;
    }
label_DD57:;
    /* $DD57: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_DD59:;
    /* $DD59: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DD4A;
    }
label_DD5B:;
    /* $DD5B: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_DD5D:;
    /* $DD5D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x74); FLAG_NZ(g_cpu.A);
label_DD5F:;
    /* $DD5F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x13; g_cpu.C=(g_cpu.A>=0x13)?1:0; FLAG_NZ(r&0xFF); }
label_DD61:;
    /* $DD61: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DD66; }
label_DD63:;
    /* $DD63: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_FA18(); return;
label_DD66:;
    /* $DD66: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_DD68:;
    /* $DD68: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_DD6A:;
    /* $DD6A: 84 */ maybe_trigger_vblank(3); nes_write(0x96, g_cpu.Y);
label_DD6C:;
    /* $DD6C: 84 */ maybe_trigger_vblank(3); nes_write(0x95, g_cpu.Y);
label_DD6E:;
    /* $DD6E: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DD6F:;
    /* $DD6F: 84 */ maybe_trigger_vblank(3); nes_write(0x93, g_cpu.Y);
label_DD71:;
    /* $DD71: 84 */ maybe_trigger_vblank(3); nes_write(0x94, g_cpu.Y);
label_DD73:;
    /* $DD73: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DD30;
    }
label_DD75:;
    /* $DD75: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xDD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x77; g_cpu.S--; func_CBF9();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDD75, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DD78:;
    /* $DD78: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x74); FLAG_NZ(g_cpu.A);
label_DD7A:;
    /* $DD7A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_DD7C:;
    /* $DD7C: 8D */ maybe_trigger_vblank(4); nes_write(0x0108, g_cpu.A);
label_DD7F:;
    /* $DD7F: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_DD80:;
    /* $DD80: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_DD81:;
    /* $DD81: 99 */ maybe_trigger_vblank(5); nes_write((0x687A + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_DD84:;
    /* $DD84: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x4B; FLAG_NZ(g_cpu.A);
label_DD86:;
    /* $DD86: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xDD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x88; g_cpu.S--; func_DD97();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDD86, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DD89:;
    /* $DD89: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DD5B;
    }
label_DD8B:;
    /* $DD8B: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_DD8D:;
    /* $DD8D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AF7 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DD90:;
    /* $DD90: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xF7; g_cpu.C=(g_cpu.A>=0xF7)?1:0; FLAG_NZ(r&0xFF); }
label_DD92:;
    /* $DD92: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_DDB0; }
label_DD94:;
    /* $DD94: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_DF2D(); return;
label_DDB0:;
    /* $DDB0: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0400 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDB3:;
    /* $DDB3: 85 */ maybe_trigger_vblank(3); nes_write(0x0A, g_cpu.A);
label_DDB5:;
    /* $DDB5: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0401 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDB8:;
    /* $DDB8: 85 */ maybe_trigger_vblank(3); nes_write(0x0B, g_cpu.A);
label_DDBA:;
    /* $DDBA: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AFB + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDBD:;
    /* $DDBD: 85 */ maybe_trigger_vblank(3); nes_write(0x06, g_cpu.A);
label_DDBF:;
    /* $DDBF: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AF7 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDC2:;
    /* $DDC2: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_DDC3:;
    /* $DDC3: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_DDC4:;
    /* $DDC4: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x41) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDC6:;
    /* $DDC6: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DDCA; }
label_DDC8:;
    /* $DDC8: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x43) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDCA:;
    /* $DDCA: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_DDCC:;
    /* $DDCC: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DDCD:;
    /* $DDCD: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x41) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDCF:;
    /* $DDCF: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DDD3; }
label_DDD1:;
    /* $DDD1: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x43) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDD3:;
    /* $DDD3: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_DDD5:;
    /* $DDD5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xDD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD7; g_cpu.S--; func_DCC3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDDD5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DDD8:;
    /* $DDD8: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_DDD9:;
    /* $DDD9: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x45) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDDB:;
    /* $DDDB: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_DDDD:;
    /* $DDDD: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DDDE:;
    /* $DDDE: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x45) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDE0:;
    /* $DDE0: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_DDE2:;
    /* $DDE2: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_DDE4:;
    /* $DDE4: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x02; g_cpu.C=(g_cpu.X>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_DDE6:;
    /* $DDE6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_DE05; }
label_DDE8:;
    /* $DDE8: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_DDEA:;
    /* $DDEA: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0406 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DDED:;
    /* $DDED: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0406 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDF0:;
    /* $DDF0: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_DDF1:;
    /* $DDF1: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_DDF3:;
    /* $DDF3: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_DDF4:;
    /* $DDF4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x05); FLAG_NZ(g_cpu.A);
label_DDF6:;
    /* $DDF6: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x3F; FLAG_NZ(g_cpu.A);
label_DDF8:;
    /* $DDF8: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xDC8B + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDFB:;
    /* $DDFB: 85 */ maybe_trigger_vblank(3); nes_write(0x05, g_cpu.A);
label_DDFD:;
    /* $DDFD: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_DDFE:;
    /* $DDFE: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x19; g_cpu.C=(g_cpu.A>=0x19)?1:0; FLAG_NZ(r&0xFF); }
label_DE00:;
    /* $DE00: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_DE05; }
label_DE02:;
    /* $DE02: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_DCF5(); return;
label_DE05:;
    /* $DE05: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_DE07:;
    /* $DE07: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DE08:;
    /* $DE08: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DE0A:;
    /* $DE0A: 9D */ maybe_trigger_vblank(5); nes_write((0x6AF5 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DE0D:;
    /* $DE0D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xDE; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0F; g_cpu.S--; func_DE3D();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDE0D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DE10:;
    /* $DE10: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DE11:;
    /* $DE11: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DE13:;
    /* $DE13: 9D */ maybe_trigger_vblank(5); nes_write((0x6AF6 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DE16:;
    /* $DE16: 85 */ maybe_trigger_vblank(3); nes_write(0x09, g_cpu.A);
label_DE18:;
    /* $DE18: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DE19:;
    /* $DE19: 84 */ maybe_trigger_vblank(3); nes_write(0x11, g_cpu.Y);
label_DE1B:;
    /* $DE1B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xDE; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1D; g_cpu.S--; func_DFDF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDE1B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DE1E:;
    /* $DE1E: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_DE1F:;
    /* $DE1F: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_DE20:;
    /* $DE20: 85 */ maybe_trigger_vblank(3); nes_write(0x08, g_cpu.A);
label_DE22:;
    /* $DE22: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_DE24:;
    /* $DE24: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DE27:;
    /* $DE27: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFD; FLAG_NZ(g_cpu.A);
label_DE29:;
    /* $DE29: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x08); FLAG_NZ(g_cpu.A);
label_DE2B:;
    /* $DE2B: 9D */ maybe_trigger_vblank(5); nes_write((0x0405 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DE2E:;
    /* $DE2E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x08); FLAG_NZ(g_cpu.A);
label_DE30:;
    /* $DE30: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DE53; }
label_DE32:;
    /* $DE32: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_DEDE(); return;
label_DE53:;
    /* $DE53: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_DF2D(); return;
}

void func_F8F6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F8F6");
#endif
label_F8F6:;
    /* $F8F6: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x60 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F8F8:;
    /* $F8F8: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x85); FLAG_NZ(g_cpu.A);
label_F8FA:;
    /* $F8FA: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_F8FC:;
    /* $F8FC: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); goto label_F91C; }
label_F8FE:;
    /* $F8FE: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_F900:;
    /* $F900: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F903:;
    /* $F903: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_F904:;
    /* $F904: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x88); FLAG_NZ(g_cpu.A);
label_F906:;
    /* $F906: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_F907:;
    /* $F907: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_F909:;
    /* $F909: 99 */ maybe_trigger_vblank(5); nes_write((0x040A + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F90C:;
    /* $F90C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_F90E:;
    /* $F90E: 99 */ maybe_trigger_vblank(5); nes_write((0x6AF4 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F911:;
    /* $F911: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_F913:;
    /* $F913: 99 */ maybe_trigger_vblank(5); nes_write((0x0409 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F916:;
    /* $F916: 99 */ maybe_trigger_vblank(5); nes_write((0x6AF8 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F919:;
    /* $F919: 99 */ maybe_trigger_vblank(5); nes_write((0x0408 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F91C:;
    /* $F91C: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_FAF6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_FAF6");
#endif
label_FAF6:;
    /* $FAF6: FA */ maybe_trigger_vblank(2); /* NOP */
label_FAF7:;
    /* $FAF7: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x4B); FLAG_NZ(g_cpu.A);
label_FAF9:;
    /* $FAF9: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_FAFA:;
    /* $FAFA: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x08; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_FAFC:;
    /* $FAFC: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_FAFD:;
    /* $FAFD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xFAF4); return; }
label_FAFF:;
    /* $FAFF: 84 */ maybe_trigger_vblank(3); nes_write(0x4B, g_cpu.Y);
label_FB01:;
    /* $FB01: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x0728 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_FB04:;
    /* $FB04: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_FB05:;
    /* $FB05: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xFAB3); return; }
label_FB07:;
    /* $FB07: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x0729 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_FB0A:;
    /* $FB0A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FB0D:;
    /* $FB0D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_FB16; }
label_FB0F:;
    /* $FB0F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FB12:;
    /* $FB12: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_FB14:;
    /* $FB14: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_FB87; }
label_FB16:;
    /* $FB16: 9D */ maybe_trigger_vblank(5); nes_write((0x0404 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_FB19:;
    /* $FB19: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_FB1B:;
    /* $FB1B: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x6B02 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_FB1E:;
    /* $FB1E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_FB70; }
label_FB20:;
    /* $FB20: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0409 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_FB23:;
    /* $FB23: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_FB87; }
label_FB25:;
    /* $FB25: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0728 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FB28:;
    /* $FB28: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFB; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2A; g_cpu.S--; func_EB28();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFB28, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FB2B:;
    /* $FB2B: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x4B); FLAG_NZ(g_cpu.Y);
label_FB2D:;
    /* $FB2D: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x072A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FB30:;
    /* $FB30: 9D */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_FB33:;
    /* $FB33: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x072B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FB36:;
    /* $FB36: 9D */ maybe_trigger_vblank(5); nes_write((0x0401 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_FB39:;
    /* $FB39: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x072C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FB3C:;
    /* $FB3C: 9D */ maybe_trigger_vblank(5); nes_write((0x6AFB + g_cpu.X) & 0xFFFF, g_cpu.A);
label_FB3F:;
    /* $FB3F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x18; FLAG_NZ(g_cpu.A);
label_FB41:;
    /* $FB41: 9D */ maybe_trigger_vblank(5); nes_write((0x6AF6 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_FB44:;
    /* $FB44: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_FB46:;
    /* $FB46: 9D */ maybe_trigger_vblank(5); nes_write((0x6AF5 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_FB49:;
    /* $FB49: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_FB4B:;
    /* $FB4B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFB; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x4D; g_cpu.S--; func_F186();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFB4B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FB4E:;
    /* $FB4E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFB; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x50; g_cpu.S--; func_F152();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFB4E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FB51:;
    /* $FB51: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFB; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x53; g_cpu.S--; func_F1BF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFB51, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FB54:;
    /* $FB54: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFB; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x56; g_cpu.S--; func_F1FA();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFB54, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FB57:;
    /* $FB57: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_FB87; }
label_FB59:;
    /* $FB59: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_FB5B:;
    /* $FB5B: 9D */ maybe_trigger_vblank(5); nes_write((0x0409 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_FB5E:;
    /* $FB5E: 9D */ maybe_trigger_vblank(5); nes_write((0x6AF4 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_FB61:;
    /* $FB61: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x49); FLAG_NZ(g_cpu.A);
label_FB63:;
    /* $FB63: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_FB64:;
    /* $FB64: 9D */ maybe_trigger_vblank(5); nes_write((0x0405 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_FB67:;
    /* $FB67: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x6B02 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_FB6A:;
    /* $FB6A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFB; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6C; g_cpu.S--; func_FB7B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFB6A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FB6D:;
    /* $FB6D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_F85A(); return;
label_FB70:;
    /* $FB70: 9D */ maybe_trigger_vblank(5); nes_write((0x6B02 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_FB73:;
    /* $FB73: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_FB75:;
    /* $FB75: 9D */ maybe_trigger_vblank(5); nes_write((0x0409 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_FB78:;
    /* $FB78: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_FA18(); return;
label_FB87:;
    /* $FB87: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_FD04(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_FD04");
#endif
label_FD04:;
    /* $FD04: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x95 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_FD06:;
    /* $FD06: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_FD68; }
label_FD08:;
    /* $FD08: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_FD0A:;
    /* $FD0A: 95 */ maybe_trigger_vblank(4); nes_write((0xB5 + g_cpu.X) & 0xFF, g_cpu.A);
label_FD0C:;
    /* $FD0C: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_FD0D:;
    /* $FD0D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x030E); FLAG_NZ(g_cpu.A);
label_FD10:;
    /* $FD10: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_FD11:;
    /* $FD11: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xB2 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_FD13:;
    /* $FD13: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_FD19; }
label_FD15:;
    /* $FD15: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_FD16:;
    /* $FD16: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x18; g_cpu.S--; func_C3D4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFD16, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FD19:;
    /* $FD19: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x10; g_cpu.C=(g_cpu.A>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_FD1B:;
    /* $FD1B: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_FD24; }
label_FD1D:;
    /* $FD1D: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_FD1E:;
    /* $FD1E: 95 */ maybe_trigger_vblank(4); nes_write((0xB4 + g_cpu.X) & 0xFF, g_cpu.A);
label_FD20:;
    /* $FD20: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_FD22:;
    /* $FD22: 95 */ maybe_trigger_vblank(4); nes_write((0xB0 + g_cpu.X) & 0xFF, g_cpu.A);
label_FD24:;
    /* $FD24: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_FD25:;
    /* $FD25: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_FD26:;
    /* $FD26: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_FD27:;
    /* $FD27: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_FD28:;
    /* $FD28: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_FD29:;
    /* $FD29: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x8A); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_FD2B:;
    /* $FD2B: 85 */ maybe_trigger_vblank(3); nes_write(0x8A, g_cpu.A);
label_FD2D:;
    /* $FD2D: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x8A; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_FD2F:;
    /* $FD2F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_FD31:;
    /* $FD31: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_FD32:;
    /* $FD32: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xFD5A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FD35:;
    /* $FD35: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_FD37:;
    /* $FD37: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xFD5B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FD3A:;
    /* $FD3A: 85 */ maybe_trigger_vblank(3); nes_write(0x05, g_cpu.A);
label_FD3C:;
    /* $FD3C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3E; g_cpu.S--; func_FD5F();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFD3C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FD3F:;
    /* $FD3F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x08); FLAG_NZ(g_cpu.A);
label_FD41:;
    /* $FD41: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_FD42:;
    /* $FD42: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xFC); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_FD44:;
    /* $FD44: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_FD45:;
    /* $FD45: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_FD47:;
    /* $FD47: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x20; g_cpu.C=(g_cpu.Y>=0x20)?1:0; FLAG_NZ(r&0xFF); }
label_FD49:;
    /* $FD49: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_FD52; }
label_FD4B:;
    /* $FD4B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x4D; g_cpu.S--; func_C3D4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFD4B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FD4E:;
    /* $FD4E: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x80; g_cpu.C=(g_cpu.Y>=0x80)?1:0; FLAG_NZ(r&0xFF); }
label_FD50:;
    /* $FD50: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_FD54; }
label_FD52:;
    /* $FD52: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_FD54:;
    /* $FD54: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x56; g_cpu.S--; func_FD8F();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFD54, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FD57:;
    /* $FD57: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_FD6C(); return;
label_FD68:;
    /* $FD68: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_FD69:;
    /* $FD69: 85 */ maybe_trigger_vblank(3); nes_write(0x09, g_cpu.A);
label_FD6B:;
    /* $FD6B: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F6D9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F6D9");
#endif
label_F6D9:;
    /* $F6D9: 96 */ maybe_trigger_vblank(4); nes_write((0x9D + g_cpu.Y) & 0xFF, g_cpu.X);
label_F6DB:;
    /* $F6DB: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x6804); FLAG_NZ(g_cpu.A);
label_F6DE:;
    /* $F6DE: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(2); goto label_F70F; }
label_F6E0:;
    /* $F6E0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFE; FLAG_NZ(g_cpu.A);
label_F6E2:;
    /* $F6E2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE4; g_cpu.S--; func_F7B3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF6E2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F6E5:;
    /* $F6E5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x49); FLAG_NZ(g_cpu.A);
label_F6E7:;
    /* $F6E7: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_F6E9:;
    /* $F6E9: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_F6F5; }
label_F6EB:;
    /* $F6EB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xED; g_cpu.S--; func_F752();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF6EB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F6EE:;
    /* $F6EE: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_F6F5; }
label_F6F0:;
    /* $F6F0: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_F6F1:;
    /* $F6F1: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_F6F3:;
    /* $F6F3: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_F700; }
label_F6F5:;
    /* $F6F5: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0401 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F6F8:;
    /* $F6F8: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x030E); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_F6FB:;
    /* $F6FB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F6FF; }
label_F6FD:;
    /* $F6FD: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x82; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F6FF:;
    /* $F6FF: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_F700:;
    /* $F700: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_F702:;
    /* $F702: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x04; g_cpu.S--; func_F744();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF702, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F705:;
    /* $F705: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_F706:;
    /* $F706: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_F707:;
    /* $F707: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x0403 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F70A:;
    /* $F70A: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_F70F; }
label_F70C:;
    /* $F70C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0E; g_cpu.S--; if (!nes_dispatch_call(0x81DA, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF70C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F70F:;
    /* $F70F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFB; FLAG_NZ(g_cpu.A);
label_F711:;
    /* $F711: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x13; g_cpu.S--; func_F7B3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF711, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F714:;
    /* $F714: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x49); FLAG_NZ(g_cpu.A);
label_F716:;
    /* $F716: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_F718:;
    /* $F718: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_F724; }
label_F71A:;
    /* $F71A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1C; g_cpu.S--; func_F752();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF71A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F71D:;
    /* $F71D: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_F724; }
label_F71F:;
    /* $F71F: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_F720:;
    /* $F720: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_F722:;
    /* $F722: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_F731; }
label_F724:;
    /* $F724: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0400 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F727:;
    /* $F727: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x030D); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_F72A:;
    /* $F72A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F730; }
label_F72C:;
    /* $F72C: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x82; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F72E:;
    /* $F72E: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x82; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F730:;
    /* $F730: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_F731:;
    /* $F731: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_F733:;
    /* $F733: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_F734:;
    /* $F734: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_F735:;
    /* $F735: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x37; g_cpu.S--; func_F744();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF735, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F738:;
    /* $F738: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_F739:;
    /* $F739: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_F73A:;
    /* $F73A: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_F73B:;
    /* $F73B: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_F73C:;
    /* $F73C: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x0402 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F73F:;
    /* $F73F: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_F74A; }
label_F741:;
    /* $F741: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x820F, -1); return;
label_F74A:;
    /* $F74A: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F8AD(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F8AD");
#endif
label_F8AD:;
    /* $F8AD: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x04); FLAG_NZ(g_cpu.A);
label_F8AF:;
    /* $F8AF: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_F8B0:;
    /* $F8B0: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xF92A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F8B3:;
    /* $F8B3: 99 */ maybe_trigger_vblank(5); nes_write((0x0403 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F8B6:;
    /* $F8B6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_F8B8:;
    /* $F8B8: 99 */ maybe_trigger_vblank(5); nes_write((0x0402 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F8BB:;
    /* $F8BB: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_F8BD:;
    /* $F8BD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBF; g_cpu.S--; func_F8F8();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF8BD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F8C0:;
    /* $F8C0: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F8C3:;
    /* $F8C3: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_F8C4:;
    /* $F8C4: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_F8C5:;
    /* $F8C5: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_F8C6:;
    /* $F8C6: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x97A3 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F8C9:;
    /* $F8C9: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_F8CB:;
    /* $F8CB: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_F8CC:;
    /* $F8CC: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_F8CD:;
    /* $F8CD: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_F8CE:;
    /* $F8CE: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x979B + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F8D1:;
    /* $F8D1: 85 */ maybe_trigger_vblank(3); nes_write(0x05, g_cpu.A);
label_F8D3:;
    /* $F8D3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD5; g_cpu.S--; func_F91D();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF8D3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F8D6:;
    /* $F8D6: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_F8D8:;
    /* $F8D8: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x87); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_F8DA:;
    /* $F8DA: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_F8F7; }
label_F8DC:;
    /* $F8DC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F8DF:;
    /* $F8DF: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_F8E1:;
    /* $F8E1: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_F8E2:;
    /* $F8E2: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0083 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F8E5:;
    /* $F8E5: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_F690(); return;
label_F8F7:;
    /* $F8F7: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_FC0D(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_FC0D");
#endif
label_FC0D:;
    /* $FC0D: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x4890 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_FC10:;
    /* $FC10: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x08); FLAG_NZ(g_cpu.A);
label_FC12:;
    /* $FC12: 95 */ maybe_trigger_vblank(4); nes_write((0xA1 + g_cpu.X) & 0xFF, g_cpu.A);
label_FC14:;
    /* $FC14: 8D */ maybe_trigger_vblank(4); nes_write(0x034D, g_cpu.A);
label_FC17:;
    /* $FC17: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x09); FLAG_NZ(g_cpu.A);
label_FC19:;
    /* $FC19: 95 */ maybe_trigger_vblank(4); nes_write((0xA2 + g_cpu.X) & 0xFF, g_cpu.A);
label_FC1B:;
    /* $FC1B: 8D */ maybe_trigger_vblank(4); nes_write(0x034E, g_cpu.A);
label_FC1E:;
    /* $FC1E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x0B); FLAG_NZ(g_cpu.A);
label_FC20:;
    /* $FC20: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_FC22:;
    /* $FC22: 95 */ maybe_trigger_vblank(4); nes_write((0xA3 + g_cpu.X) & 0xFF, g_cpu.A);
label_FC24:;
    /* $FC24: 8D */ maybe_trigger_vblank(4); nes_write(0x034C, g_cpu.A);
label_FC27:;
    /* $FC27: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA3 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_FC29:;
    /* $FC29: 8D */ maybe_trigger_vblank(4); nes_write(0x034C, g_cpu.A);
label_FC2C:;
    /* $FC2C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5A; FLAG_NZ(g_cpu.A);
label_FC2E:;
    /* $FC2E: 8D */ maybe_trigger_vblank(4); nes_write(0x0343, g_cpu.A);
label_FC31:;
    /* $FC31: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_FC32:;
    /* $FC32: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_FC33:;
    /* $FC33: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x35; g_cpu.S--; func_DE4A();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFC33, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FC36:;
    /* $FC36: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x70); FLAG_NZ(g_cpu.A);
label_FC38:;
    /* $FC38: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_FC55; }
label_FC3A:;
    /* $FC3A: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_FC3C:;
    /* $FC3C: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x40; FLAG_NZ(g_cpu.X);
label_FC3E:;
    /* $FC3E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x40; g_cpu.S--; func_DC7F();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFC3E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FC41:;
    /* $FC41: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_FC55; }
label_FC43:;
    /* $FC43: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x45; g_cpu.S--; func_CD9C();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFC43, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FC46:;
    /* $FC46: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_FC48:;
    /* $FC48: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_FC55; }
label_FC4A:;
    /* $FC4A: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_FC4B:;
    /* $FC4B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x4D; g_cpu.S--; func_F311();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFC4B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FC4E:;
    /* $FC4E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x50; FLAG_NZ(g_cpu.A);
label_FC50:;
    /* $FC50: 85 */ maybe_trigger_vblank(3); nes_write(0x6E, g_cpu.A);
label_FC52:;
    /* $FC52: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x54; g_cpu.S--; func_CE92();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFC52, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FC55:;
    /* $FC55: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_FC56:;
    /* $FC56: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_FC57:;
    /* $FC57: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_FD7D(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_FD7D");
#endif
label_FD7D:;
    /* $FD7D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x95 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_FD7F:;
    /* $FD7F: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x8D) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FD81:;
    /* $FD81: EB */ maybe_trigger_vblank(2); { uint8_t m=0x6B; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_FD83:;
    /* $FD83: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_FB7D(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_FB7D");
#endif
label_FB7D:;
    /* $FB7D: 80 */ maybe_trigger_vblank(2); /* NOP */
label_FB7F:;
    /* $FB7F: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x04); FLAG_NZ(g_cpu.A);
label_FB81:;
    /* $FB81: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x96BB + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FB84:;
    /* $FB84: 9D */ maybe_trigger_vblank(5); nes_write((0x0409 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_FB87:;
    /* $FB87: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C56B(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C56B");
#endif
label_C56B:;
    /* $C56B: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_C56C:;
    /* $C56C: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA0); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C56E:;
    /* $C56E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xC56E); return;
}

void func_FDC5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_FDC5");
#endif
label_FDC5:;
    /* $FDC5: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0965 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FDC8:;
    /* $FDC8: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_FDD0; }
label_FDCA:;
    /* $FDCA: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x02); FLAG_NZ(g_cpu.Y);
label_FDCC:;
    /* $FDCC: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_FDE1; }
label_FDCE:;
    /* $FDCE: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x0B; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_FDD0:;
    /* $FDD0: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_FDDD(); return;
label_FDE1:;
    /* $FDE1: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_FDE2:;
    /* $FDE2: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_EEB0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EEB0");
#endif
label_EEB0:;
    /* $EEB0: 95 */ maybe_trigger_vblank(4); nes_write((0xA9 + g_cpu.X) & 0xFF, g_cpu.A);
label_EEB2:;
    /* $EEB2: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_EEB3:;
    /* $EEB3: 85 */ maybe_trigger_vblank(3); nes_write(0x07, g_cpu.A);
label_EEB5:;
    /* $EEB5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_EEB7:;
    /* $EEB7: 85 */ maybe_trigger_vblank(3); nes_write(0x06, g_cpu.A);
label_EEB9:;
    /* $EEB9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xEE; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBB; g_cpu.S--; func_EE4A();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xEEB9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_EEBC:;
    /* $EEBC: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_EEC6; }
label_EEBE:;
    /* $EEBE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_EEC0:;
    /* $EEC0: 85 */ maybe_trigger_vblank(3); nes_write(0x98, g_cpu.A);
label_EEC2:;
    /* $EEC2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_EEC4:;
    /* $EEC4: 85 */ maybe_trigger_vblank(3); nes_write(0x99, g_cpu.A);
label_EEC6:;
    /* $EEC6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_EEC8:;
    /* $EEC8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xEEAB); return; }
label_EECA:;
    /* $EECA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xEE; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCC; g_cpu.S--; if (!nes_dispatch_call(0x95B7, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xEECA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_EECD:;
    /* $EECD: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_EECE:;
    /* $EECE: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_EECF:;
    /* $EECF: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x3C + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x3C); g_cpu.A=r&0xFF; }
label_EED1:;
    /* $EED1: 85 */ maybe_trigger_vblank(3); nes_write(0x07, g_cpu.A);
label_EED3:;
    /* $EED3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_EED5:;
    /* $EED5: 85 */ maybe_trigger_vblank(3); nes_write(0x06, g_cpu.A);
label_EED7:;
    /* $EED7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xEE; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD9; g_cpu.S--; func_EE4A();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xEED7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_EEDA:;
    /* $EEDA: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_EEEB; }
label_EEDC:;
    /* $EEDC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x81; FLAG_NZ(g_cpu.A);
label_EEDE:;
    /* $EEDE: 9D */ maybe_trigger_vblank(5); nes_write((0x0758 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_EEE1:;
    /* $EEE1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_EEE3:;
    /* $EEE3: 9D */ maybe_trigger_vblank(5); nes_write((0x075D + g_cpu.X) & 0xFFFF, g_cpu.A);
label_EEE6:;
    /* $EEE6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_EEE8:;
    /* $EEE8: 9D */ maybe_trigger_vblank(5); nes_write((0x075B + g_cpu.X) & 0xFFFF, g_cpu.A);
label_EEEB:;
    /* $EEEB: 4C */ maybe_trigger_vblank(3); goto label_EEC6;
}

void func_D09F(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D09F");
#endif
label_D09F:;
    /* $D09F: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x0A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D0A1:;
    /* $D0A1: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xD095); return; }
label_D0A3:;
    /* $D0A3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0305); FLAG_NZ(g_cpu.A);
label_D0A6:;
    /* $D0A6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x35; g_cpu.C=(g_cpu.A>=0x35)?1:0; FLAG_NZ(r&0xFF); }
label_D0A8:;
    /* $D0A8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_D0AD; }
label_D0AA:;
    /* $D0AA: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_D275(); return;
label_D0AD:;
    /* $D0AD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAF; g_cpu.S--; func_D210();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD0AD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D0B0:;
    /* $D0B0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_D0B2:;
    /* $D0B2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_CF6B(); return;
}

void func_E09E(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E09E");
#endif
label_E09E:;
    /* $E09E: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_E09F:;
    /* $E09F: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_E0A0:;
    /* $E0A0: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E0A7; }
label_E0A2:;
    /* $E0A2: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x6AF8 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E0A5:;
    /* $E0A5: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E0BB; }
label_E0A7:;
    /* $E0A7: 9D */ maybe_trigger_vblank(5); nes_write((0x6AF8 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_E0AA:;
    /* $E0AA: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x6AFA + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_E0AD:;
    /* $E0AD: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x47) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E0AF:;
    /* $E0AF: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_E0B1:;
    /* $E0B1: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E0BC; }
label_E0B3:;
    /* $E0B3: 9D */ maybe_trigger_vblank(5); nes_write((0x6AF7 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_E0B6:;
    /* $E0B6: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E0B7:;
    /* $E0B7: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_E0B8:;
    /* $E0B8: 9D */ maybe_trigger_vblank(5); nes_write((0x6AFA + g_cpu.X) & 0xFFFF, g_cpu.A);
label_E0BB:;
    /* $E0BB: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_E0BC:;
    /* $E0BC: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x6AF9 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_E0BF:;
    /* $E0BF: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_E0AD;
    }
label_E0C1:;
    /* $E0C1: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_E0C3:;
    /* $E0C3: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x5B); FLAG_NZ(g_cpu.A);
label_E0C5:;
    /* $E0C5: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_E0C6:;
    /* $E0C6: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_E0C7:;
    /* $E0C7: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xE1B9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E0CA:;
    /* $E0CA: 9D */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_E0CD:;
    /* $E0CD: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_E0CE:;
    /* $E0CE: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E0CF:;
    /* $E0CF: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x28; g_cpu.C=(g_cpu.Y>=0x28)?1:0; FLAG_NZ(r&0xFF); }
label_E0D1:;
    /* $E0D1: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_E0C7;
    }
label_E0D3:;
    /* $E0D3: 86 */ maybe_trigger_vblank(3); nes_write(0x5B, g_cpu.X);
label_E0D5:;
    /* $E0D5: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_E0D6:;
    /* $E0D6: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_E0D7:;
    /* $E0D7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0107); FLAG_NZ(g_cpu.A);
label_E0DA:;
    /* $E0DA: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_E0DC:;
    /* $E0DC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDE; g_cpu.S--; func_E173();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE0DC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E0DF:;
    /* $E0DF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0106); FLAG_NZ(g_cpu.A);
label_E0E2:;
    /* $E0E2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE4; g_cpu.S--; func_C2BF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE0E2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E0E5:;
    /* $E0E5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE7; g_cpu.S--; func_E173();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE0E5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E0E8:;
    /* $E0E8: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x010B); FLAG_NZ(g_cpu.Y);
label_E0EB:;
    /* $E0EB: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E0EC:;
    /* $E0EC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_E11C; }
label_E0EE:;
    /* $E0EE: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x687A); FLAG_NZ(g_cpu.Y);
label_E0F1:;
    /* $E0F1: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_E10A; }
label_E0F3:;
    /* $E0F3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x6879); FLAG_NZ(g_cpu.A);
label_E0F6:;
    /* $E0F6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF8; g_cpu.S--; func_E198();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE0F6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E0F9:;
    /* $E0F9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x02); FLAG_NZ(g_cpu.A);
label_E0FB:;
    /* $E0FB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFD; g_cpu.S--; func_E173();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE0FB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E0FE:;
    /* $E0FE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_E100:;
    /* $E100: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x02; g_cpu.S--; func_E173();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE100, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E103:;
    /* $E103: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_E105:;
    /* $E105: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x07; g_cpu.S--; func_E173();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE105, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E108:;
    /* $E108: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E14A; }
label_E10A:;
    /* $E10A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_E10C:;
    /* $E10C: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xF4; g_cpu.C=(g_cpu.X>=0xF4)?1:0; FLAG_NZ(r&0xFF); }
label_E10E:;
    /* $E10E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_E14A; }
label_E110:;
    /* $E110: 9D */ maybe_trigger_vblank(5); nes_write((0x020D + g_cpu.X) & 0xFFFF, g_cpu.A);
label_E113:;
    /* $E113: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xF0; g_cpu.C=(g_cpu.X>=0xF0)?1:0; FLAG_NZ(r&0xFF); }
label_E115:;
    /* $E115: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_E14A; }
label_E117:;
    /* $E117: 9D */ maybe_trigger_vblank(5); nes_write((0x0211 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_E11A:;
    /* $E11A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E14A; }
label_E11C:;
    /* $E11C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x010B); FLAG_NZ(g_cpu.A);
label_E11F:;
    /* $E11F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x21; g_cpu.S--; func_C2BF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE11F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E122:;
    /* $E122: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x24; g_cpu.S--; func_E173();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE122, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E125:;
    /* $E125: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x010B); FLAG_NZ(g_cpu.A);
label_E128:;
    /* $E128: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_E12A:;
    /* $E12A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2C; g_cpu.S--; func_E173();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE12A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E12D:;
    /* $E12D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x010A); FLAG_NZ(g_cpu.A);
label_E130:;
    /* $E130: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x32; g_cpu.S--; func_C2BF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE130, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E133:;
    /* $E133: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x35; g_cpu.S--; func_E173();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE133, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E136:;
    /* $E136: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x58; FLAG_NZ(g_cpu.A);
label_E138:;
    /* $E138: 9D */ maybe_trigger_vblank(5); nes_write((0x0201 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_E13B:;
    /* $E13B: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0202 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E13E:;
    /* $E13E: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xFC; g_cpu.C=(g_cpu.X>=0xFC)?1:0; FLAG_NZ(r&0xFF); }
label_E140:;
    /* $E140: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_E14A; }
label_E142:;
    /* $E142: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x59; FLAG_NZ(g_cpu.A);
label_E144:;
    /* $E144: 9D */ maybe_trigger_vblank(5); nes_write((0x0205 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_E147:;
    /* $E147: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0206 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E14A:;
    /* $E14A: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x5B); FLAG_NZ(g_cpu.X);
label_E14C:;
    /* $E14C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x6877); FLAG_NZ(g_cpu.A);
label_E14F:;
    /* $E14F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E172; }
label_E151:;
    /* $E151: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_E153:;
    /* $E153: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_E155:;
    /* $E155: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_E157:;
    /* $E157: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x6F; FLAG_NZ(g_cpu.Y);
label_E159:;
    /* $E159: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0107); FLAG_NZ(g_cpu.A);
label_E15C:;
    /* $E15C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x5E; g_cpu.S--; func_C2BF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE15C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E15F:;
    /* $E15F: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_E161:;
    /* $E161: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E164; }
label_E163:;
    /* $E163: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E164:;
    /* $E164: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x66; g_cpu.S--; func_E17B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE164, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E167:;
    /* $E167: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E169:;
    /* $E169: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E16C; }
label_E16B:;
    /* $E16B: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E16C:;
    /* $E16C: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E16E:;
    /* $E16E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_E164;
    }
label_E170:;
    /* $E170: 86 */ maybe_trigger_vblank(3); nes_write(0x5B, g_cpu.X);
label_E172:;
    /* $E172: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C99E(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C99E");
#endif
label_C99E:;
    /* $C99E: 06 */ maybe_trigger_vblank(5); { uint16_t a=0xE8; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C9A0:;
    /* $C9A0: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x687D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C9A3:;
    /* $C9A3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xC99B); return; }
label_C9A5:;
    /* $C9A5: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C92D(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C92D");
#endif
label_C92D:;
    /* $C92D: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x20 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C92F:;
    /* $C92F: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xE1) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C931:;
    /* $C931: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x69B2); FLAG_NZ(g_cpu.A);
label_C934:;
    /* $C934: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C945; }
label_C936:;
    /* $C936: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_C938:;
    /* $C938: 8D */ maybe_trigger_vblank(4); nes_write(0x0107, g_cpu.A);
label_C93B:;
    /* $C93B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_C93D:;
    /* $C93D: 8D */ maybe_trigger_vblank(4); nes_write(0x6878, g_cpu.A);
label_C940:;
    /* $C940: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_C942:;
    /* $C942: 8D */ maybe_trigger_vblank(4); nes_write(0x6879, g_cpu.A);
label_C945:;
    /* $C945: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x47; g_cpu.S--; func_CB29();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC945, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C948:;
    /* $C948: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0108); FLAG_NZ(g_cpu.A);
label_C94B:;
    /* $C94B: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0109); FLAG_NZ(g_cpu.A);
label_C94E:;
    /* $C94E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C95F; }
label_C950:;
    /* $C950: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C952:;
    /* $C952: 8D */ maybe_trigger_vblank(4); nes_write(0x0108, g_cpu.A);
label_C955:;
    /* $C955: 8D */ maybe_trigger_vblank(4); nes_write(0x0109, g_cpu.A);
label_C958:;
    /* $C958: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x15; FLAG_NZ(g_cpu.A);
label_C95A:;
    /* $C95A: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x03; FLAG_NZ(g_cpu.X);
label_C95C:;
    /* $C95C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x5E; g_cpu.S--; func_C4AA();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC95C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C95F:;
    /* $C95F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0300); FLAG_NZ(g_cpu.A);
label_C962:;
    /* $C962: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_C964:;
    /* $C964: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xC92A); return; }
label_C966:;
    /* $C966: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0304); FLAG_NZ(g_cpu.A);
label_C969:;
    /* $C969: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xC92A); return; }
label_C96B:;
    /* $C96B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6D; g_cpu.S--; func_CB8E();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC96B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C96E:;
    /* $C96E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x98); FLAG_NZ(g_cpu.A);
label_C970:;
    /* $C970: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_C972:;
    /* $C972: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C97B; }
label_C974:;
    /* $C974: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_C976:;
    /* $C976: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_C978:;
    /* $C978: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_C4AA(); return;
label_C97B:;
    /* $C97B: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1E; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C97D:;
    /* $C97D: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F09E(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F09E");
#endif
label_F09E:;
    /* $F09E: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); call_by_address(0xF05D); return; }
label_F0A0:;
    /* $F0A0: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x6A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F0A2:;
    /* $F0A2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0A6; }
label_F0A4:;
    /* $F0A4: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_F0A6:;
    /* $F0A6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0E5; }
label_F0A8:;
    /* $F0A8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAA; g_cpu.S--; func_F152();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0A8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0AB:;
    /* $F0AB: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F0AE:;
    /* $F0AE: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_F0B0:;
    /* $F0B0: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0D4; }
label_F0B2:;
    /* $F0B2: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xD0; FLAG_NZ(g_cpu.Y);
label_F0B4:;
    /* $F0B4: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F0B7:;
    /* $F0B7: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0CF; }
label_F0B9:;
    /* $F0B9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_F0BB:;
    /* $F0BB: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_F0C9; }
label_F0BD:;
    /* $F0BD: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_F0BF:;
    /* $F0BF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0C9; }
label_F0C1:;
    /* $F0C1: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_F0C3:;
    /* $F0C3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0C9; }
label_F0C5:;
    /* $F0C5: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0B; g_cpu.C=(g_cpu.A>=0x0B)?1:0; FLAG_NZ(r&0xFF); }
label_F0C7:;
    /* $F0C7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0CF; }
label_F0C9:;
    /* $F0C9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCB; g_cpu.S--; func_F140();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0C9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0CC:;
    /* $F0CC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCE; g_cpu.S--; func_F2CA();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0CC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0CF:;
    /* $F0CF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD1; g_cpu.S--; func_F1EE();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0CF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0D2:;
    /* $F0D2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_F0B4;
    }
label_F0D4:;
    /* $F0D4: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_F0D6:;
    /* $F0D6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x70); FLAG_NZ(g_cpu.A);
label_F0D8:;
    /* $F0D8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0E5; }
label_F0DA:;
    /* $F0DA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDC; g_cpu.S--; func_CE84();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0DA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0DD:;
    /* $F0DD: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0E5; }
label_F0DF:;
    /* $F0DF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE1; g_cpu.S--; func_F140();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0DF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0E2:;
    /* $F0E2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE4; g_cpu.S--; func_F282();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0E2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0E5:;
    /* $F0E5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE7; g_cpu.S--; func_F1F4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0E5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0E8:;
    /* $F0E8: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_F0ED; }
label_F0EA:;
    /* $F0EA: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_F09F(); return;
label_F0ED:;
    /* $F0ED: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_F0EF:;
    /* $F0EF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; func_F172();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0EF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0F2:;
    /* $F0F2: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x60; FLAG_NZ(g_cpu.Y);
label_F0F4:;
    /* $F0F4: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AF4 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F0F7:;
    /* $F0F7: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_F112; }
label_F0F9:;
    /* $F0F9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_F0FB:;
    /* $F0FB: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_F112; }
label_F0FD:;
    /* $F0FD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x70); FLAG_NZ(g_cpu.A);
label_F0FF:;
    /* $F0FF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F112; }
label_F101:;
    /* $F101: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x03; g_cpu.S--; func_CE84();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF101, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F104:;
    /* $F104: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F112; }
label_F106:;
    /* $F106: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x08; g_cpu.S--; func_F1B3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF106, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F109:;
    /* $F109: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0B; g_cpu.S--; func_F162();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF109, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F10C:;
    /* $F10C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0E; g_cpu.S--; func_F1FA();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF10C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F10F:;
    /* $F10F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x11; g_cpu.S--; func_F2ED();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF10F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F112:;
    /* $F112: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x14; g_cpu.S--; func_F1EE();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF112, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F115:;
    /* $F115: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_F117:;
    /* $F117: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_F0F4;
    }
label_F119:;
    /* $F119: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_F11B:;
    /* $F11B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1D; g_cpu.S--; func_CE84();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF11B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F11E:;
    /* $F11E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F13D; }
label_F120:;
    /* $F120: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x22; g_cpu.S--; func_F186();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF120, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F123:;
    /* $F123: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xF0; FLAG_NZ(g_cpu.X);
label_F125:;
    /* $F125: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F128:;
    /* $F128: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_F12A:;
    /* $F12A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F130; }
label_F12C:;
    /* $F12C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_F12E:;
    /* $F12E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F136; }
label_F130:;
    /* $F130: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x32; g_cpu.S--; func_DC82();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF130, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F133:;
    /* $F133: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x35; g_cpu.S--; func_F311();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF133, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F136:;
    /* $F136: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x38; g_cpu.S--; func_F1F4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF136, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F139:;
    /* $F139: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_F13B:;
    /* $F13B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_F125;
    }
label_F13D:;
    /* $F13D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_CE92(); return;
}

void func_D905(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D905");
#endif
label_D905:;
    /* $D905: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x20); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_D907:;
    /* $D907: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); call_by_address(0xD8D1); return; }
label_D909:;
    /* $D909: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0B; g_cpu.S--; func_C8BB();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD909, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D90C:;
    /* $D90C: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x20; FLAG_NZ(g_cpu.X);
label_D90E:;
    /* $D90E: 86 */ maybe_trigger_vblank(3); nes_write(0x4B, g_cpu.X);
label_D910:;
    /* $D910: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x6B; FLAG_NZ(g_cpu.A);
label_D912:;
    /* $D912: 8D */ maybe_trigger_vblank(4); nes_write(0x0305, g_cpu.A);
label_D915:;
    /* $D915: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5F; FLAG_NZ(g_cpu.A);
label_D917:;
    /* $D917: 8D */ maybe_trigger_vblank(4); nes_write(0x0306, g_cpu.A);
label_D91A:;
    /* $D91A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x7A; FLAG_NZ(g_cpu.A);
label_D91C:;
    /* $D91C: 9D */ maybe_trigger_vblank(5); nes_write((0x0305 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_D91F:;
    /* $D91F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x6E; FLAG_NZ(g_cpu.A);
label_D921:;
    /* $D921: 9D */ maybe_trigger_vblank(5); nes_write((0x0306 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_D924:;
    /* $D924: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D927:;
    /* $D927: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_D929:;
    /* $D929: 85 */ maybe_trigger_vblank(3); nes_write(0x2A, g_cpu.A);
label_D92B:;
    /* $D92B: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_EB30(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EB30");
#endif
label_EB30:;
    /* $EB30: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xA5 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_EB32:;
    /* $EB32: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x29 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_EB34:;
    /* $EB34: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x4A; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EB36:;
    /* $EB36: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_EB37:;
    /* $EB37: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x687A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_EB3A:;
    /* $EB3A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_EB41; }
label_EB3C:;
    /* $EB3C: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_EB3D:;
    /* $EB3D: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_EB3E:;
    /* $EB3E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_EB24(); return;
label_EB41:;
    /* $EB41: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_EB43:;
    /* $EB43: 8D */ maybe_trigger_vblank(4); nes_write(0x6987, g_cpu.A);
label_EB46:;
    /* $EB46: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_EB47:;
    /* $EB47: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x3F; FLAG_NZ(g_cpu.A);
label_EB49:;
    /* $EB49: 9D */ maybe_trigger_vblank(5); nes_write((0x6B02 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_EB4C:;
    /* $EB4C: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E390(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E390");
#endif
label_E390:;
    /* $E390: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x90E7); FLAG_NZ(g_cpu.A);
label_E393:;
    /* $E393: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x20) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E395:;
    /* $E395: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0xD9 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E397:;
    /* $E397: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0307); FLAG_NZ(g_cpu.A);
label_E39A:;
    /* $E39A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E3A5; }
label_E39C:;
    /* $E39C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x7D); FLAG_NZ(g_cpu.A);
label_E39E:;
    /* $E39E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E3A5; }
label_E3A0:;
    /* $E3A0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1A; FLAG_NZ(g_cpu.A);
label_E3A2:;
    /* $E3A2: 8D */ maybe_trigger_vblank(4); nes_write(0x0314, g_cpu.A);
label_E3A5:;
    /* $E3A5: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x05; FLAG_NZ(g_cpu.X);
label_E3A7:;
    /* $E3A7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0312); FLAG_NZ(g_cpu.A);
label_E3AA:;
    /* $E3AA: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_E3AB:;
    /* $E3AB: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0314); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_E3AE:;
    /* $E3AE: 8D */ maybe_trigger_vblank(4); nes_write(0x0312, g_cpu.A);
label_E3B1:;
    /* $E3B1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0308); FLAG_NZ(g_cpu.A);
label_E3B4:;
    /* $E3B4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x00 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x00); g_cpu.A=r&0xFF; }
label_E3B6:;
    /* $E3B6: 8D */ maybe_trigger_vblank(4); nes_write(0x0308, g_cpu.A);
label_E3B9:;
    /* $E3B9: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_E3C9; }
label_E3BB:;
    /* $E3BB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E3BD:;
    /* $E3BD: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0312); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_E3C0:;
    /* $E3C0: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0308); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_E3C3:;
    /* $E3C3: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x06; g_cpu.C=(g_cpu.A>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_E3C5:;
    /* $E3C5: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xFA; FLAG_NZ(g_cpu.X);
label_E3C7:;
    /* $E3C7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E3CB; }
label_E3C9:;
    /* $E3C9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_E3CB:;
    /* $E3CB: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_E3D3; }
label_E3CD:;
    /* $E3CD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCF; g_cpu.S--; func_D147();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE3CD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E3D0:;
    /* $E3D0: 8E */ maybe_trigger_vblank(4); nes_write(0x0308, g_cpu.X);
label_E3D3:;
    /* $E3D3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0310); FLAG_NZ(g_cpu.A);
label_E3D6:;
    /* $E3D6: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_E3D7:;
    /* $E3D7: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0312); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_E3DA:;
    /* $E3DA: 8D */ maybe_trigger_vblank(4); nes_write(0x0310, g_cpu.A);
label_E3DD:;
    /* $E3DD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E3DF:;
    /* $E3DF: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0308); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_E3E2:;
    /* $E3E2: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_E3E4:;
    /* $E3E4: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F64B(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F64B");
#endif
label_F64B:;
    /* $F64B: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xA9 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F64D:;
    /* $F64D: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_F64E:;
    /* $F64E: 9D */ maybe_trigger_vblank(5); nes_write((0x0406 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F651:;
    /* $F651: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x6AF4 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F654:;
    /* $F654: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_F656:;
    /* $F656: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x0A); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_F658:;
    /* $F658: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_F65C; }
label_F65A:;
    /* $F65A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_F65C:;
    /* $F65C: 9D */ maybe_trigger_vblank(5); nes_write((0x0407 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F65F:;
    /* $F65F: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x4B); FLAG_NZ(g_cpu.Y);
label_F661:;
    /* $F661: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0400 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F664:;
    /* $F664: 9D */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F667:;
    /* $F667: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0401 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F66A:;
    /* $F66A: 9D */ maybe_trigger_vblank(5); nes_write((0x0401 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F66D:;
    /* $F66D: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AFB + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F670:;
    /* $F670: 9D */ maybe_trigger_vblank(5); nes_write((0x6AFB + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F673:;
    /* $F673: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_F675:;
    /* $F675: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F8F2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F8F2");
#endif
label_F8F2:;
    /* $F8F2: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xC9) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_F8F4:;
    /* $F8F4: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0xD0; g_cpu.C=(g_cpu.Y>=0xD0)?1:0; FLAG_NZ(r&0xFF); }
label_F8F6:;
    /* $F8F6: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x60 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F8F8:;
    /* $F8F8: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x85); FLAG_NZ(g_cpu.A);
label_F8FA:;
    /* $F8FA: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_F8FC:;
    /* $F8FC: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); goto label_F91C; }
label_F8FE:;
    /* $F8FE: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_F900:;
    /* $F900: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F903:;
    /* $F903: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_F904:;
    /* $F904: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x88); FLAG_NZ(g_cpu.A);
label_F906:;
    /* $F906: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_F907:;
    /* $F907: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_F909:;
    /* $F909: 99 */ maybe_trigger_vblank(5); nes_write((0x040A + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F90C:;
    /* $F90C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_F90E:;
    /* $F90E: 99 */ maybe_trigger_vblank(5); nes_write((0x6AF4 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F911:;
    /* $F911: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_F913:;
    /* $F913: 99 */ maybe_trigger_vblank(5); nes_write((0x0409 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F916:;
    /* $F916: 99 */ maybe_trigger_vblank(5); nes_write((0x6AF8 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F919:;
    /* $F919: 99 */ maybe_trigger_vblank(5); nes_write((0x0408 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F91C:;
    /* $F91C: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F408(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F408");
#endif
label_F408:;
    /* $F408: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x20F5 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F40B:;
    /* $F40B: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0xF5 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F40D:;
    /* $F40D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x95E5, -1); return;
}

void func_DF90(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DF90");
#endif
label_DF90:;
    /* $DF90: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA8); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_DF92:;
    /* $DF92: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xE04B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DF95:;
    /* $DF95: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_DF96:;
    /* $DF96: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x0F); FLAG_NZ(g_cpu.A);
label_DF98:;
    /* $DF98: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_DF99:;
    /* $DF99: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0C + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0C); g_cpu.A=r&0xFF; }
label_DF9B:;
    /* $DF9B: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_DF9C:;
    /* $DF9C: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_DF9D:;
    /* $DF9D: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_DF9E:;
    /* $DF9E: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_DFA0:;
    /* $DFA0: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_DF75(); return;
}

void func_FE1D(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_FE1D");
#endif
label_FE1D:;
    /* $FE1D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFE; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1F; g_cpu.S--; func_FE27();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFE1D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FE20:;
    /* $FE20: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_FE22:;
    /* $FE22: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFE; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x24; g_cpu.S--; func_F1F4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFE22, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FE25:;
    /* $FE25: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_FE1D;
    }
label_FE27:;
    /* $FE27: 86 */ maybe_trigger_vblank(3); nes_write(0x4B, g_cpu.X);
label_FE29:;
    /* $FE29: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FE2C:;
    /* $FE2C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_FE78; }
label_FE2E:;
    /* $FE2E: 20 */ maybe_trigger_vblank(6); /* inline_dispatch $C27C: 6 entries (bank=-1) */
switch(g_cpu.A) {
  case 0: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x5C); nes_write(0x000D, 0xC4); g_cpu.A = 0xC4; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_C45C(); return;
  case 1: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x3D); nes_write(0x000D, 0xFE); g_cpu.A = 0xFE; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_FE3D(); return;
  case 2: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x54); nes_write(0x000D, 0xFE); g_cpu.A = 0xFE; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_FE54(); return;
  case 3: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x59); nes_write(0x000D, 0xFE); g_cpu.A = 0xFE; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_FE59(); return;
  case 4: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x54); nes_write(0x000D, 0xFE); g_cpu.A = 0xFE; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_FE54(); return;
  case 5: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x83); nes_write(0x000D, 0xFE); g_cpu.A = 0xFE; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_FE83(); return;
  default: nes_log_inline_miss(0xFE2E, g_cpu.A); return;
}
label_FE3D:;
    /* $FE3D: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_FE40:;
    /* $FE40: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_FE42:;
    /* $FE42: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFE; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x44; g_cpu.S--; func_FE6D();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFE42, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FE45:;
    /* $FE45: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x50; FLAG_NZ(g_cpu.A);
label_FE47:;
    /* $FE47: 9D */ maybe_trigger_vblank(5); nes_write((0x0507 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_FE4A:;
    /* $FE4A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0508 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FE4D:;
    /* $FE4D: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_FE4F:;
    /* $FE4F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0509 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FE52:;
    /* $FE52: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_FE54:;
    /* $FE54: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_FE56:;
    /* $FE56: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_FF54(); return;
label_FE78:;
    /* $FE78: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C39B(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C39B");
#endif
label_C39B:;
    /* $C39B: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x04); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_C39D:;
    /* $C39D: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(1); goto label_C3A0; }
label_C39F:;
    /* $C39F: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_C3A0:;
    /* $C3A0: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_C3A2:;
    /* $C3A2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA4; g_cpu.S--; func_C36B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC3A2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C3A5:;
    /* $C3A5: 84 */ maybe_trigger_vblank(3); nes_write(0x06, g_cpu.Y);
label_C3A7:;
    /* $C3A7: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_C3A9:;
    /* $C3A9: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x04); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_C3AB:;
    /* $C3AB: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_C3AF; }
label_C3AD:;
    /* $C3AD: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x20; FLAG_NZ(g_cpu.Y);
label_C3AF:;
    /* $C3AF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB1; g_cpu.S--; func_C2A8();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC3AF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C3B2:;
    /* $C3B2: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x06); FLAG_NZ(g_cpu.Y);
label_C3B4:;
    /* $C3B4: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x05; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C3B6:;
    /* $C3B6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_C39B;
    }
label_C3B8:;
    /* $C3B8: 8E */ maybe_trigger_vblank(4); nes_write(0x07A0, g_cpu.X);
label_C3BB:;
    /* $C3BB: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_C3BC:;
    /* $C3BC: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x07A0); FLAG_NZ(g_cpu.X);
label_C3BF:;
    /* $C3BF: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_C3C1:;
    /* $C3C1: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xC385); return; }
label_C3C3:;
    /* $C3C3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC5; g_cpu.S--; func_C376();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC3C3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C3C6:;
    /* $C3C6: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_C3C8:;
    /* $C3C8: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xBF; FLAG_NZ(g_cpu.A);
label_C3CA:;
    /* $C3CA: 9D */ maybe_trigger_vblank(5); nes_write((0x07A1 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_C3CD:;
    /* $C3CD: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x3F; FLAG_NZ(g_cpu.A);
label_C3CF:;
    /* $C3CF: 85 */ maybe_trigger_vblank(3); nes_write(0x05, g_cpu.A);
label_C3D1:;
    /* $C3D1: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_C36E(); return;
}

void func_FD68(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_FD68");
#endif
label_FD68:;
    /* $FD68: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_FD69:;
    /* $FD69: 85 */ maybe_trigger_vblank(3); nes_write(0x09, g_cpu.A);
label_FD6B:;
    /* $FD6B: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F274(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F274");
#endif
label_F274:;
    /* $F274: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_F275:;
    /* $F275: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x60 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_F277:;
    /* $F277: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_F281; }
label_F279:;
    /* $F279: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x10); FLAG_NZ(g_cpu.A);
label_F27B:;
    /* $F27B: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x030A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F27E:;
    /* $F27E: 99 */ maybe_trigger_vblank(5); nes_write((0x030A + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F281:;
    /* $F281: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_FD0B(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_FD0B");
#endif
label_FD0B:;
    /* $FD0B: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA8 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_FD0D:;
    /* $FD0D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x030E); FLAG_NZ(g_cpu.A);
label_FD10:;
    /* $FD10: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_FD11:;
    /* $FD11: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xB2 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_FD13:;
    /* $FD13: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_FD19; }
label_FD15:;
    /* $FD15: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_FD16:;
    /* $FD16: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x18; g_cpu.S--; func_C3D4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFD16, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FD19:;
    /* $FD19: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x10; g_cpu.C=(g_cpu.A>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_FD1B:;
    /* $FD1B: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_FD24; }
label_FD1D:;
    /* $FD1D: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_FD1E:;
    /* $FD1E: 95 */ maybe_trigger_vblank(4); nes_write((0xB4 + g_cpu.X) & 0xFF, g_cpu.A);
label_FD20:;
    /* $FD20: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_FD22:;
    /* $FD22: 95 */ maybe_trigger_vblank(4); nes_write((0xB0 + g_cpu.X) & 0xFF, g_cpu.A);
label_FD24:;
    /* $FD24: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C531_body(int _entry) {
    switch (_entry) {
        case 1: goto label_C54C;
        case 2: goto label_C54A;
        case 3: goto label_C543;
    }
label_C531:;
    /* $C531: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_C533:;
    /* $C533: 84 */ maybe_trigger_vblank(3); nes_write(0x31, g_cpu.Y);
label_C535:;
    /* $C535: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_C536:;
    /* $C536: 84 */ maybe_trigger_vblank(3); nes_write(0x1D, g_cpu.Y);
label_C538:;
    /* $C538: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3A; g_cpu.S--; func_C45D();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC538, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C53B:;
    /* $C53B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3D; g_cpu.S--; if (!nes_dispatch_call(0xA93E, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC53B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C53E:;
    /* $C53E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x40; g_cpu.S--; func_C158();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC53E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C541:;
    /* $C541: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_C543:;
    /* $C543: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x98BF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_C546:;
    /* $C546: 99 */ maybe_trigger_vblank(5); nes_write((0x6DFF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_C549:;
    /* $C549: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_C54A:;
    /* $C54A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_C543;
    }
label_C54C:;
    /* $C54C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x4E; g_cpu.S--; func_C5D7();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC54C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C54F:;
    /* $C54F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_C487(); return;
}

void func_C531(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C531");
#endif
    func_C531_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C54C(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C54C");
#endif
    func_C531_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C54A(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C54A");
#endif
    func_C531_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C543(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C543");
#endif
    func_C531_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C552_body(int _entry) {
    switch (_entry) {
        case 1: goto label_C567;
    }
label_C552:;
    /* $C552: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C554:;
    /* $C554: 85 */ maybe_trigger_vblank(3); nes_write(0x1D, g_cpu.A);
label_C556:;
    /* $C556: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x58; g_cpu.S--; func_C45D();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC556, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C559:;
    /* $C559: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1E); FLAG_NZ(g_cpu.A);
label_C55B:;
    /* $C55B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_C55D:;
    /* $C55D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C56D; }
label_C55F:;
    /* $C55F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C561:;
    /* $C561: 85 */ maybe_trigger_vblank(3); nes_write(0x1E, g_cpu.A);
label_C563:;
    /* $C563: 85 */ maybe_trigger_vblank(3); nes_write(0x74, g_cpu.A);
label_C565:;
    /* $C565: 85 */ maybe_trigger_vblank(3); nes_write(0x31, g_cpu.A);
label_C567:;
    /* $C567: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x69; g_cpu.S--; func_C1D4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC567, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C56A:;
    /* $C56A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6C; g_cpu.S--; func_C578();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC56A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C56D:;
    /* $C56D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_C56F:;
    /* $C56F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x71; g_cpu.S--; func_C4EF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC56F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C572:;
    /* $C572: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x74; g_cpu.S--; func_C604();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC572, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C575:;
    /* $C575: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_C487(); return;
}

void func_C552(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C552");
#endif
    func_C552_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C567(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C567");
#endif
    func_C552_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C583_body(int _entry) {
    switch (_entry) {
        case 1: goto label_C585;
    }
label_C583:;
    /* $C583: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C585:;
    /* $C585: 85 */ maybe_trigger_vblank(3); nes_write(0x1D, g_cpu.A);
label_C587:;
    /* $C587: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x89; g_cpu.S--; func_C45D();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC587, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C58A:;
    /* $C58A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; func_C622();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC58A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C58D:;
    /* $C58D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_C487(); return;
}

void func_C583(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C583");
#endif
    func_C583_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C585(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C585");
#endif
    func_C583_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C5C3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C5C3");
#endif
label_C5C3:;
    /* $C5C3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C5C5:;
    /* $C5C5: 85 */ maybe_trigger_vblank(3); nes_write(0x1D, g_cpu.A);
label_C5C7:;
    /* $C5C7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC9; g_cpu.S--; func_C45D();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC5C7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C5CA:;
    /* $C5CA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCC; g_cpu.S--; func_C69F();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC5CA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C5CD:;
    /* $C5CD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_C487(); return;
}

void func_84C8_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_84C8_b7");
#endif
label_84C8:;
    /* $84C8: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_84C9:;
    /* $84C9: 8D */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.A);
label_84CC:;
    /* $84CC: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_84CD:;
    /* $84CD: 8D */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.A);
label_84D0:;
    /* $84D0: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_84D1:;
    /* $84D1: 8D */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.A);
label_84D4:;
    /* $84D4: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_84D5:;
    /* $84D5: 8D */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.A);
label_84D8:;
    /* $84D8: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A0A0_b7_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A0C7;
    }
label_A0A0:;
    /* $A0A0: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A0A7; }
label_A0A2:;
    /* $A0A2: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x6AF8 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A0A5:;
    /* $A0A5: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A0BB; }
label_A0A7:;
    /* $A0A7: 9D */ maybe_trigger_vblank(5); nes_write((0x6AF8 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0AA:;
    /* $A0AA: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x6AFA + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_A0AD:;
    /* $A0AD: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x47) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0AF:;
    /* $A0AF: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_A0B1:;
    /* $A0B1: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A0BC; }
label_A0B3:;
    /* $A0B3: 9D */ maybe_trigger_vblank(5); nes_write((0x6AF7 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0B6:;
    /* $A0B6: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A0B7:;
    /* $A0B7: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A0B8:;
    /* $A0B8: 9D */ maybe_trigger_vblank(5); nes_write((0x6AFA + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0BB:;
    /* $A0BB: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A0BC:;
    /* $A0BC: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x6AF9 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_A0BF:;
    /* $A0BF: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A0AD;
    }
label_A0C1:;
    /* $A0C1: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A0C3:;
    /* $A0C3: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x5B); FLAG_NZ(g_cpu.A);
label_A0C5:;
    /* $A0C5: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A0C6:;
    /* $A0C6: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A0C7:;
    /* $A0C7: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xE1B9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0CA:;
    /* $A0CA: 9D */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0CD:;
    /* $A0CD: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A0CE:;
    /* $A0CE: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A0CF:;
    /* $A0CF: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x28; g_cpu.C=(g_cpu.Y>=0x28)?1:0; FLAG_NZ(r&0xFF); }
label_A0D1:;
    /* $A0D1: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A0C7;
    }
label_A0D3:;
    /* $A0D3: 86 */ maybe_trigger_vblank(3); nes_write(0x5B, g_cpu.X);
label_A0D5:;
    /* $A0D5: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A0D6:;
    /* $A0D6: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A0D7:;
    /* $A0D7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0107); FLAG_NZ(g_cpu.A);
label_A0DA:;
    /* $A0DA: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A0DC:;
    /* $A0DC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDE; g_cpu.S--; func_E173();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0DC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0DF:;
    /* $A0DF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0106); FLAG_NZ(g_cpu.A);
label_A0E2:;
    /* $A0E2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE4; g_cpu.S--; func_C2BF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0E2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0E5:;
    /* $A0E5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE7; g_cpu.S--; func_E173();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0E5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0E8:;
    /* $A0E8: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x010B); FLAG_NZ(g_cpu.Y);
label_A0EB:;
    /* $A0EB: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A0EC:;
    /* $A0EC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_A11C; }
label_A0EE:;
    /* $A0EE: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x687A); FLAG_NZ(g_cpu.Y);
label_A0F1:;
    /* $A0F1: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_A10A; }
label_A0F3:;
    /* $A0F3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x6879); FLAG_NZ(g_cpu.A);
label_A0F6:;
    /* $A0F6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF8; g_cpu.S--; func_E198();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0F6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0F9:;
    /* $A0F9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x02); FLAG_NZ(g_cpu.A);
label_A0FB:;
    /* $A0FB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFD; g_cpu.S--; func_E173();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0FB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0FE:;
    /* $A0FE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_A100:;
    /* $A100: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x02; g_cpu.S--; func_E173();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA100, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A103:;
    /* $A103: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_A105:;
    /* $A105: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x07; g_cpu.S--; func_E173();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA105, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A108:;
    /* $A108: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A14A; }
label_A10A:;
    /* $A10A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_A10C:;
    /* $A10C: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xF4; g_cpu.C=(g_cpu.X>=0xF4)?1:0; FLAG_NZ(r&0xFF); }
label_A10E:;
    /* $A10E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A14A; }
label_A110:;
    /* $A110: 9D */ maybe_trigger_vblank(5); nes_write((0x020D + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A113:;
    /* $A113: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xF0; g_cpu.C=(g_cpu.X>=0xF0)?1:0; FLAG_NZ(r&0xFF); }
label_A115:;
    /* $A115: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A14A; }
label_A117:;
    /* $A117: 9D */ maybe_trigger_vblank(5); nes_write((0x0211 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A11A:;
    /* $A11A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A14A; }
label_A11C:;
    /* $A11C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x010B); FLAG_NZ(g_cpu.A);
label_A11F:;
    /* $A11F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x21; g_cpu.S--; func_C2BF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA11F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A122:;
    /* $A122: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x24; g_cpu.S--; func_E173();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA122, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A125:;
    /* $A125: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x010B); FLAG_NZ(g_cpu.A);
label_A128:;
    /* $A128: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A12A:;
    /* $A12A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2C; g_cpu.S--; func_E173();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA12A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A12D:;
    /* $A12D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x010A); FLAG_NZ(g_cpu.A);
label_A130:;
    /* $A130: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x32; g_cpu.S--; func_C2BF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA130, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A133:;
    /* $A133: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x35; g_cpu.S--; func_E173();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA133, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A136:;
    /* $A136: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x58; FLAG_NZ(g_cpu.A);
label_A138:;
    /* $A138: 9D */ maybe_trigger_vblank(5); nes_write((0x0201 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A13B:;
    /* $A13B: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0202 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A13E:;
    /* $A13E: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xFC; g_cpu.C=(g_cpu.X>=0xFC)?1:0; FLAG_NZ(r&0xFF); }
label_A140:;
    /* $A140: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A14A; }
label_A142:;
    /* $A142: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x59; FLAG_NZ(g_cpu.A);
label_A144:;
    /* $A144: 9D */ maybe_trigger_vblank(5); nes_write((0x0205 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A147:;
    /* $A147: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0206 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A14A:;
    /* $A14A: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x5B); FLAG_NZ(g_cpu.X);
label_A14C:;
    /* $A14C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x6877); FLAG_NZ(g_cpu.A);
label_A14F:;
    /* $A14F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A172; }
label_A151:;
    /* $A151: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_A153:;
    /* $A153: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_A155:;
    /* $A155: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_A157:;
    /* $A157: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x6F; FLAG_NZ(g_cpu.Y);
label_A159:;
    /* $A159: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0107); FLAG_NZ(g_cpu.A);
label_A15C:;
    /* $A15C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x5E; g_cpu.S--; func_C2BF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA15C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A15F:;
    /* $A15F: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_A161:;
    /* $A161: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A164; }
label_A163:;
    /* $A163: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A164:;
    /* $A164: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x66; g_cpu.S--; func_E17B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA164, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A167:;
    /* $A167: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A169:;
    /* $A169: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A16C; }
label_A16B:;
    /* $A16B: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A16C:;
    /* $A16C: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A16E:;
    /* $A16E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A164;
    }
label_A170:;
    /* $A170: 86 */ maybe_trigger_vblank(3); nes_write(0x5B, g_cpu.X);
label_A172:;
    /* $A172: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A0A0_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A0A0_b7");
#endif
    func_A0A0_b7_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A0C7_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A0C7_b7");
#endif
    func_A0A0_b7_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BFB9_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BFB9_b7");
#endif
label_BFB9:;
    /* $BFB9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBF; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBB; g_cpu.S--; if (!nes_dispatch_call(0x02AD, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBFB9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BFBC:;
    /* $BFBC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBF; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBE; g_cpu.S--; func_FB10();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBFBC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BFBF:;
    /* $BFBF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_BFC2:;
    /* $BFC2: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BFBF;
    }
label_BFC4:;
    /* $BFC4: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xFF; FLAG_NZ(g_cpu.A);
label_BFC6:;
    /* $BFC6: 8D */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.A);
label_BFC9:;
    /* $BFC9: 8D */ maybe_trigger_vblank(4); nes_write(0xA000, g_cpu.A);
label_BFCC:;
    /* $BFCC: 8D */ maybe_trigger_vblank(4); nes_write(0xC000, g_cpu.A);
label_BFCF:;
    /* $BFCF: 8D */ maybe_trigger_vblank(4); nes_write(0xE000, g_cpu.A);
label_BFD2:;
    /* $BFD2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_C01A(); return;
}

void func_A9C4_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9C4_b7");
#endif
label_A9C4:;
    /* $A9C4: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xC095 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9C7:;
    /* $A9C7: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A9C8:;
    /* $A9C8: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_AA03; }
label_A9CA:;
    /* $A9CA: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xC0; FLAG_NZ(g_cpu.X);
label_A9CC:;
    /* $A9CC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9CF:;
    /* $A9CF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9DB; }
label_A9D1:;
    /* $A9D1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD3; g_cpu.S--; func_F1F4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA9D1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A9D4:;
    /* $A9D4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A9CC;
    }
label_A9D6:;
    /* $A9D6: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9D9:;
    /* $A9D9: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA03; }
label_A9DB:;
    /* $A9DB: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9DE:;
    /* $A9DE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x04); FLAG_NZ(g_cpu.A);
label_A9E0:;
    /* $A9E0: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xDE; FLAG_NZ(g_cpu.A);
label_A9E2:;
    /* $A9E2: 9D */ maybe_trigger_vblank(5); nes_write((0x0508 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A9E5:;
    /* $A9E5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x05); FLAG_NZ(g_cpu.A);
label_A9E7:;
    /* $A9E7: 9D */ maybe_trigger_vblank(5); nes_write((0x0509 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A9EA:;
    /* $A9EA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x74); FLAG_NZ(g_cpu.A);
label_A9EC:;
    /* $A9EC: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x11; g_cpu.C=(g_cpu.A>=0x11)?1:0; FLAG_NZ(r&0xFF); }
label_A9EE:;
    /* $A9EE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9F8; }
label_A9F0:;
    /* $A9F0: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x76; g_cpu.C=(g_cpu.Y>=0x76)?1:0; FLAG_NZ(r&0xFF); }
label_A9F2:;
    /* $A9F2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9F8; }
label_A9F4:;
    /* $A9F4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_A9F6:;
    /* $A9F6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9FF; }
label_A9F8:;
    /* $A9F8: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A9F9:;
    /* $A9F9: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A9FA:;
    /* $A9FA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x10 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x10); g_cpu.A=r&0xFF; }
label_A9FC:;
    /* $A9FC: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x3C; FLAG_NZ(g_cpu.A);
label_A9FE:;
    /* $A9FE: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A9FF:;
    /* $A9FF: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AA00:;
    /* $AA00: 9D */ maybe_trigger_vblank(5); nes_write((0x050A + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AA03:;
    /* $AA03: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AA04:;
    /* $AA04: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8500_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8500_b7");
#endif
label_8500:;
    /* $8500: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x4A; g_cpu.C=(g_cpu.X>=0x4A)?1:0; FLAG_NZ(r&0xFF); }
label_8502:;
    /* $8502: 8D */ maybe_trigger_vblank(4); nes_write(0xE000, g_cpu.A);
label_8505:;
    /* $8505: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8506:;
    /* $8506: 8D */ maybe_trigger_vblank(4); nes_write(0xE000, g_cpu.A);
label_8509:;
    /* $8509: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_850A:;
    /* $850A: 8D */ maybe_trigger_vblank(4); nes_write(0xE000, g_cpu.A);
label_850D:;
    /* $850D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_850F:;
    /* $850F: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A90F_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A90F_b7");
#endif
label_A90F:;
    /* $A90F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x02); FLAG_NZ(g_cpu.A);
label_A911:;
    /* $A911: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A922; }
label_A913:;
    /* $A913: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x15; g_cpu.S--; func_E95F();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA913, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A916:;
    /* $A916: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A91C; }
label_A918:;
    /* $A918: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xF0; g_cpu.C=(g_cpu.X>=0xF0)?1:0; FLAG_NZ(r&0xFF); }
label_A91A:;
    /* $A91A: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A93D; }
label_A91C:;
    /* $A91C: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A91D:;
    /* $A91D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0F + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0F); g_cpu.A=r&0xFF; }
label_A91F:;
    /* $A91F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_E934(); return;
label_A922:;
    /* $A922: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x24; g_cpu.S--; func_E95F();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA922, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A925:;
    /* $A925: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x08); FLAG_NZ(g_cpu.A);
label_A927:;
    /* $A927: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A928:;
    /* $A928: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A92A:;
    /* $A92A: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A92B:;
    /* $A92B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_A92D:;
    /* $A92D: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_A92F:;
    /* $A92F: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A93D; }
label_A931:;
    /* $A931: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A932:;
    /* $A932: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x0F; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A934:;
    /* $A934: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A935:;
    /* $A935: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x49); FLAG_NZ(g_cpu.A);
label_A937:;
    /* $A937: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_A939:;
    /* $A939: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A93D; }
label_A93B:;
    /* $A93B: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x0B; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A93D:;
    /* $A93D: 86 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.X);
label_A93F:;
    /* $A93F: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A941:;
    /* $A941: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x03); FLAG_NZ(g_cpu.A);
label_A943:;
    /* $A943: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_A946; }
label_A945:;
    /* $A945: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A946:;
    /* $A946: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x09); FLAG_NZ(g_cpu.A);
label_A948:;
    /* $A948: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A949:;
    /* $A949: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x03); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A94B:;
    /* $A94B: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_A94D:;
    /* $A94D: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_A94F:;
    /* $A94F: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_A951:;
    /* $A951: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A952:;
    /* $A952: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x00 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x00); g_cpu.A=r&0xFF; }
label_A954:;
    /* $A954: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A95E; }
label_A956:;
    /* $A956: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x49); FLAG_NZ(g_cpu.A);
label_A958:;
    /* $A958: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_A95A:;
    /* $A95A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A95E; }
label_A95C:;
    /* $A95C: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x0B; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A95E:;
    /* $A95E: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9900_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9900_b7");
#endif
label_9900:;
    /* $9900: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x02; g_cpu.S--; func_D92C();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9900, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9903:;
    /* $9903: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x05; g_cpu.S--; func_C447();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9903, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9906:;
    /* $9906: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x08; g_cpu.S--; func_C8B0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9906, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9909:;
    /* $9909: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0B; g_cpu.S--; func_C8BB();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9909, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_990C:;
    /* $990C: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x20; FLAG_NZ(g_cpu.X);
label_990E:;
    /* $990E: 86 */ maybe_trigger_vblank(3); nes_write(0x4B, g_cpu.X);
label_9910:;
    /* $9910: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x6B; FLAG_NZ(g_cpu.A);
label_9912:;
    /* $9912: 8D */ maybe_trigger_vblank(4); nes_write(0x0305, g_cpu.A);
label_9915:;
    /* $9915: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5F; FLAG_NZ(g_cpu.A);
label_9917:;
    /* $9917: 8D */ maybe_trigger_vblank(4); nes_write(0x0306, g_cpu.A);
label_991A:;
    /* $991A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x7A; FLAG_NZ(g_cpu.A);
label_991C:;
    /* $991C: 9D */ maybe_trigger_vblank(5); nes_write((0x0305 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_991F:;
    /* $991F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x6E; FLAG_NZ(g_cpu.A);
label_9921:;
    /* $9921: 9D */ maybe_trigger_vblank(5); nes_write((0x0306 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9924:;
    /* $9924: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9927:;
    /* $9927: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_9929:;
    /* $9929: 85 */ maybe_trigger_vblank(3); nes_write(0x2A, g_cpu.A);
label_992B:;
    /* $992B: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A8B9_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A8B9_b7");
#endif
label_A8B9:;
    /* $A8B9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_A8BB:;
    /* $A8BB: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_E7DE(); return;
}

void func_99C5_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99C5_b7");
#endif
label_99C5:;
    /* $99C5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_99D3; }
label_99C7:;
    /* $99C7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x030A); FLAG_NZ(g_cpu.A);
label_99CA:;
    /* $99CA: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x38; FLAG_NZ(g_cpu.A);
label_99CC:;
    /* $99CC: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x10); FLAG_NZ(g_cpu.A);
label_99CE:;
    /* $99CE: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x40; FLAG_NZ(g_cpu.A);
label_99D0:;
    /* $99D0: 8D */ maybe_trigger_vblank(4); nes_write(0x030A, g_cpu.A);
label_99D3:;
    /* $99D3: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A900_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A900_b7");
#endif
label_A900:;
    /* $A900: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A901:;
    /* $A901: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x6AF6 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A904:;
    /* $A904: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_A906:;
    /* $A906: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x08; g_cpu.S--; func_E792();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA906, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A909:;
    /* $A909: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x6AF5 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_A90C:;
    /* $A90C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_E89B(); return;
}

void func_8501_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8501_b7");
#endif
label_8501:;
    /* $8501: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8502:;
    /* $8502: 8D */ maybe_trigger_vblank(4); nes_write(0xE000, g_cpu.A);
label_8505:;
    /* $8505: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8506:;
    /* $8506: 8D */ maybe_trigger_vblank(4); nes_write(0xE000, g_cpu.A);
label_8509:;
    /* $8509: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_850A:;
    /* $850A: 8D */ maybe_trigger_vblank(4); nes_write(0xE000, g_cpu.A);
label_850D:;
    /* $850D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_850F:;
    /* $850F: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AB20_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AB20_b7");
#endif
label_AB20:;
    /* $AB20: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xAB; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x22; g_cpu.S--; func_EB4D();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAB20, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AB23:;
    /* $AB23: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AB24:;
    /* $AB24: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_AB25:;
    /* $AB25: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_AB27:;
    /* $AB27: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B3AD_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3AD_b7");
#endif
label_B3AD:;
    /* $B3AD: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_B3AE:;
    /* $B3AE: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B3AF:;
    /* $B3AF: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B3B0:;
    /* $B3B0: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_B3B1:;
    /* $B3B1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; func_C2BF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3B1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3B4:;
    /* $B3B4: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_B3B6:;
    /* $B3B6: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B3B7:;
    /* $B3B7: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_B3B8:;
    /* $B3B8: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_B3B9:;
    /* $B3B9: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_B3BA:;
    /* $B3BA: 9D */ maybe_trigger_vblank(5); nes_write((0x0405 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B3BD:;
    /* $B3BD: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AB4C_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AB4C_b7");
#endif
label_AB4C:;
    /* $AB4C: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8000_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8000_b7");
#endif
label_8000:;
    /* $8000: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8001:;
    /* $8001: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_8002:;
    /* $8002: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x05; FLAG_NZ(g_cpu.X);
label_8004:;
    /* $8004: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_8006:;
    /* $8006: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8007:;
    /* $8007: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x05 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x05); g_cpu.A=r&0xFF; }
label_8009:;
    /* $8009: 85 */ maybe_trigger_vblank(3); nes_write(0x2E, g_cpu.A);
label_800B:;
    /* $800B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2F); FLAG_NZ(g_cpu.A);
label_800D:;
    /* $800D: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_800E:;
    /* $800E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x13 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x13); g_cpu.A=r&0xFF; }
label_8010:;
    /* $8010: 85 */ maybe_trigger_vblank(3); nes_write(0x2F, g_cpu.A);
label_8012:;
    /* $8012: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_8013:;
    /* $8013: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8004;
    }
label_8015:;
    /* $8015: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8016:;
    /* $8016: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8017:;
    /* $8017: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_8019:;
    /* $8019: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8D60_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D60_b7");
#endif
label_8D60:;
    /* $8D60: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xE1 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D62:;
    /* $8D62: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x4D); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8D64:;
    /* $8D64: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8D6B; }
label_8D66:;
    /* $8D66: 85 */ maybe_trigger_vblank(3); nes_write(0x4D, g_cpu.A);
label_8D68:;
    /* $8D68: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8D; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6A; g_cpu.S--; func_CC98();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8D68, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8D6B:;
    /* $8D6B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8D6D:;
    /* $8D6D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8D; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6F; g_cpu.S--; func_DC8F();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8D6D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8D70:;
    /* $8D70: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8D; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x72; g_cpu.S--; func_CD9C();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8D70, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8D73:;
    /* $8D73: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8D7E; }
label_8D75:;
    /* $8D75: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_8D77:;
    /* $8D77: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8D78:;
    /* $8D78: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_8D7A:;
    /* $8D7A: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xA0; FLAG_NZ(g_cpu.A);
label_8D7C:;
    /* $8D7C: 85 */ maybe_trigger_vblank(3); nes_write(0x6B, g_cpu.A);
label_8D7E:;
    /* $8D7E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8D; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; func_CDFA();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8D7E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8D81:;
    /* $8D81: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8D; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x83; g_cpu.S--; func_E269();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8D81, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8D84:;
    /* $8D84: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x92); FLAG_NZ(g_cpu.A);
label_8D86:;
    /* $8D86: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8D8C; }
label_8D88:;
    /* $8D88: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA1; FLAG_NZ(g_cpu.A);
label_8D8A:;
    /* $8D8A: 85 */ maybe_trigger_vblank(3); nes_write(0x6B, g_cpu.A);
label_8D8C:;
    /* $8D8C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8D; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x8E; g_cpu.S--; func_CD92();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8D8C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8D8F:;
    /* $8D8F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_DE4A(); return;
}

void func_A006_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A006_b7");
#endif
label_A006:;
    /* $A006: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_A008:;
    /* $A008: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x09); FLAG_NZ(g_cpu.A);
label_A00A:;
    /* $A00A: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A00B:;
    /* $A00B: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x10); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A00D:;
    /* $A00D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xF0; g_cpu.C=(g_cpu.A>=0xF0)?1:0; FLAG_NZ(r&0xFF); }
label_A00F:;
    /* $A00F: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A01B; }
label_A011:;
    /* $A011: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A012:;
    /* $A012: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A01A; }
label_A014:;
    /* $A014: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x09); FLAG_NZ(g_cpu.A);
label_A016:;
    /* $A016: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x10); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A018:;
    /* $A018: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A01B; }
label_A01A:;
    /* $A01A: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A01B:;
    /* $A01B: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9160_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9160_b7");
#endif
label_9160:;
    /* $9160: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0307); FLAG_NZ(g_cpu.A);
label_9163:;
    /* $9163: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9197; }
label_9165:;
    /* $9165: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xD0; FLAG_NZ(g_cpu.X);
label_9167:;
    /* $9167: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_916A:;
    /* $916A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_917A; }
label_916C:;
    /* $916C: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xE0; FLAG_NZ(g_cpu.X);
label_916E:;
    /* $916E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9171:;
    /* $9171: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_917A; }
label_9173:;
    /* $9173: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xF0; FLAG_NZ(g_cpu.X);
label_9175:;
    /* $9175: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9178:;
    /* $9178: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9197; }
label_917A:;
    /* $917A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x030C); FLAG_NZ(g_cpu.A);
label_917D:;
    /* $917D: 9D */ maybe_trigger_vblank(5); nes_write((0x030C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9180:;
    /* $9180: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x030E); FLAG_NZ(g_cpu.A);
label_9183:;
    /* $9183: 9D */ maybe_trigger_vblank(5); nes_write((0x030E + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9186:;
    /* $9186: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x030D); FLAG_NZ(g_cpu.A);
label_9189:;
    /* $9189: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_918A:;
    /* $918A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x04 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x04); g_cpu.A=r&0xFF; }
label_918C:;
    /* $918C: 9D */ maybe_trigger_vblank(5); nes_write((0x030D + g_cpu.X) & 0xFFFF, g_cpu.A);
label_918F:;
    /* $918F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_9191:;
    /* $9191: 9D */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9194:;
    /* $9194: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x91; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x96; g_cpu.S--; func_CBA8();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9194, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9197:;
    /* $9197: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A950_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A950_b7");
#endif
label_A950:;
    /* $A950: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x8A + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A952:;
    /* $A952: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x00 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x00); g_cpu.A=r&0xFF; }
label_A954:;
    /* $A954: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A95E; }
label_A956:;
    /* $A956: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x49); FLAG_NZ(g_cpu.A);
label_A958:;
    /* $A958: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_A95A:;
    /* $A95A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A95E; }
label_A95C:;
    /* $A95C: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x0B; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A95E:;
    /* $A95E: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9983_b7_body(int _entry) {
    switch (_entry) {
        case 1: goto label_9998;
    }
label_9983:;
    /* $9983: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9986:;
    /* $9986: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_9988:;
    /* $9988: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_999E; }
label_998A:;
    /* $998A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; func_F152();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x998A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_998D:;
    /* $998D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; func_F1BF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x998D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9990:;
    /* $9990: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x92; g_cpu.S--; func_F1FA();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9990, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9993:;
    /* $9993: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_999E; }
label_9995:;
    /* $9995: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x97; g_cpu.S--; func_D9BA();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9995, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9998:;
    /* $9998: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_999E; }
label_999A:;
    /* $999A: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x7D; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_999C:;
    /* $999C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_99A3; }
label_999E:;
    /* $999E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA0; g_cpu.S--; func_F1F4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x999E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_99A1:;
    /* $99A1: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9983;
    }
label_99A3:;
    /* $99A3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0320); FLAG_NZ(g_cpu.A);
label_99A6:;
    /* $99A6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_99B9; }
label_99A8:;
    /* $99A8: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_99AA:;
    /* $99AA: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x20; FLAG_NZ(g_cpu.X);
label_99AC:;
    /* $99AC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAE; g_cpu.S--; func_DC82();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x99AC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_99AF:;
    /* $99AF: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_99B9; }
label_99B1:;
    /* $99B1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; func_D9BA();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x99B1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_99B4:;
    /* $99B4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_99B9; }
label_99B6:;
    /* $99B6: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0307; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_99B9:;
    /* $99B9: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9983_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9983_b7");
#endif
    func_9983_b7_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9998_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9998_b7");
#endif
    func_9983_b7_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_80B0_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80B0_b7");
#endif
label_80B0:;
    /* $80B0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_80B2:;
    /* $80B2: 85 */ maybe_trigger_vblank(3); nes_write(0x2F, g_cpu.A);
label_80B4:;
    /* $80B4: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_80B5:;
    /* $80B5: 84 */ maybe_trigger_vblank(3); nes_write(0x24, g_cpu.Y);
label_80B7:;
    /* $80B7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; func_C4DE();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x80B7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_80BA:;
    /* $80BA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_80CB; }
label_80BC:;
    /* $80BC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBE; g_cpu.S--; func_C4DE();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x80BC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_80BF:;
    /* $80BF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC1; g_cpu.S--; func_C266();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x80BF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_80C2:;
    /* $80C2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC4; g_cpu.S--; func_C114();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x80C2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_80C5:;
    /* $80C5: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x2D; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_80C7:;
    /* $80C7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_80C9:;
    /* $80C9: 85 */ maybe_trigger_vblank(3); nes_write(0x1A, g_cpu.A);
label_80CB:;
    /* $80CB: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_80CC:;
    /* $80CC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1A); FLAG_NZ(g_cpu.A);
label_80CE:;
    /* $80CE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_80D3; }
label_80D0:;
    /* $80D0: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_C0CB(); return;
label_80D3:;
    /* $80D3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD5; g_cpu.S--; func_C000();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x80D3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_80D6:;
    /* $80D6: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_C0BC(); return;
}

void func_8296_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8296_b7");
#endif
label_8296:;
    /* $8296: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_8297:;
    /* $8297: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16zp(0x0C); nes_trace_indirect_jump(0x8297, _jt); maybe_trigger_vblank(2); call_by_address_tail(_jt, -1); return; }
}

void func_832F_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_832F_b7");
#endif
label_832F:;
    /* $832F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_8331:;
    /* $8331: 85 */ maybe_trigger_vblank(3); nes_write(0x05, g_cpu.A);
label_8333:;
    /* $8333: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8335:;
    /* $8335: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x83; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x37; g_cpu.S--; func_C2BF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8335, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8338:;
    /* $8338: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_833A:;
    /* $833A: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x07A0); FLAG_NZ(g_cpu.X);
label_833D:;
    /* $833D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_833F:;
    /* $833F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x83; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x41; g_cpu.S--; func_C36B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x833F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8342:;
    /* $8342: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_8344:;
    /* $8344: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x83; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x46; g_cpu.S--; func_C36B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8344, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8347:;
    /* $8347: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x05); FLAG_NZ(g_cpu.A);
label_8349:;
    /* $8349: 85 */ maybe_trigger_vblank(3); nes_write(0x06, g_cpu.A);
label_834B:;
    /* $834B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x83; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x4D; g_cpu.S--; func_C36B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x834B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_834E:;
    /* $834E: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_834F:;
    /* $834F: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8351:;
    /* $8351: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x83; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x53; g_cpu.S--; func_C36B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8351, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8354:;
    /* $8354: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8356:;
    /* $8356: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_834E;
    }
label_8358:;
    /* $8358: 8E */ maybe_trigger_vblank(4); nes_write(0x07A0, g_cpu.X);
label_835B:;
    /* $835B: 84 */ maybe_trigger_vblank(3); nes_write(0x06, g_cpu.Y);
label_835D:;
    /* $835D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x20; FLAG_NZ(g_cpu.Y);
label_835F:;
    /* $835F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x83; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x61; g_cpu.S--; func_C2A8();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x835F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8362:;
    /* $8362: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x06); FLAG_NZ(g_cpu.Y);
label_8364:;
    /* $8364: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x04; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8366:;
    /* $8366: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_833D;
    }
label_8368:;
    /* $8368: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x83; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6A; g_cpu.S--; func_C376();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8368, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_836B:;
    /* $836B: 9D */ maybe_trigger_vblank(5); nes_write((0x07A1 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_836E:;
    /* $836E: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_836F:;
    /* $836F: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x4F; g_cpu.C=(g_cpu.X>=0x4F)?1:0; FLAG_NZ(r&0xFF); }
label_8371:;
    /* $8371: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_837D; }
label_8373:;
    /* $8373: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x07A0); FLAG_NZ(g_cpu.X);
label_8376:;
    /* $8376: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8378:;
    /* $8378: 9D */ maybe_trigger_vblank(5); nes_write((0x07A1 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_837B:;
    /* $837B: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_837C:;
    /* $837C: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_837D:;
    /* $837D: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_FE21(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_FE21");
#endif
label_FE21:;
    /* $FE21: 4B */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_FE23:;
    /* $FE23: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xF1 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_FE25:;
    /* $FE25: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xFE1D); return; }
label_FE27:;
    /* $FE27: 86 */ maybe_trigger_vblank(3); nes_write(0x4B, g_cpu.X);
label_FE29:;
    /* $FE29: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FE2C:;
    /* $FE2C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_FE78; }
label_FE2E:;
    /* $FE2E: 20 */ maybe_trigger_vblank(6); /* inline_dispatch $C27C: 6 entries (bank=-1) */
switch(g_cpu.A) {
  case 0: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x5C); nes_write(0x000D, 0xC4); g_cpu.A = 0xC4; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_C45C(); return;
  case 1: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x3D); nes_write(0x000D, 0xFE); g_cpu.A = 0xFE; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_FE3D(); return;
  case 2: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x54); nes_write(0x000D, 0xFE); g_cpu.A = 0xFE; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_FE54(); return;
  case 3: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x59); nes_write(0x000D, 0xFE); g_cpu.A = 0xFE; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_FE59(); return;
  case 4: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x54); nes_write(0x000D, 0xFE); g_cpu.A = 0xFE; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_FE54(); return;
  case 5: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x83); nes_write(0x000D, 0xFE); g_cpu.A = 0xFE; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_FE83(); return;
  default: nes_log_inline_miss(0xFE2E, g_cpu.A); return;
}
label_FE3D:;
    /* $FE3D: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_FE40:;
    /* $FE40: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_FE42:;
    /* $FE42: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFE; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x44; g_cpu.S--; func_FE6D();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFE42, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FE45:;
    /* $FE45: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x50; FLAG_NZ(g_cpu.A);
label_FE47:;
    /* $FE47: 9D */ maybe_trigger_vblank(5); nes_write((0x0507 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_FE4A:;
    /* $FE4A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0508 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FE4D:;
    /* $FE4D: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_FE4F:;
    /* $FE4F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0509 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FE52:;
    /* $FE52: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_FE54:;
    /* $FE54: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_FE56:;
    /* $FE56: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_FF54(); return;
label_FE78:;
    /* $FE78: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C360_body(int _entry) {
    switch (_entry) {
        case 1: goto label_C36B;
    }
label_C360:;
    /* $C360: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_C361:;
    /* $C361: C2 */ maybe_trigger_vblank(2); /* NOP */
label_C363:;
    /* $C363: 06 */ maybe_trigger_vblank(5); { uint16_t a=0xC6; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C365:;
    /* $C365: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xD0); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C367:;
    /* $C367: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x20 + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C369:;
    /* $C369: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0xC3 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C36B:;
    /* $C36B: 9D */ maybe_trigger_vblank(5); nes_write((0x07A1 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_C36E:;
    /* $C36E: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_C36F:;
    /* $C36F: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x4F; g_cpu.C=(g_cpu.X>=0x4F)?1:0; FLAG_NZ(r&0xFF); }
label_C371:;
    /* $C371: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_C37D; }
label_C373:;
    /* $C373: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x07A0); FLAG_NZ(g_cpu.X);
label_C376:;
    /* $C376: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C378:;
    /* $C378: 9D */ maybe_trigger_vblank(5); nes_write((0x07A1 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_C37B:;
    /* $C37B: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_C37C:;
    /* $C37C: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_C37D:;
    /* $C37D: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C360(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C360");
#endif
    func_C360_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C36B(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C36B");
#endif
    func_C360_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_DF73(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DF73");
#endif
label_DF73:;
    /* $DF73: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x98; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_DF75:;
    /* $DF75: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x04); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_DF77:;
    /* $DF77: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_DFB1; }
label_DF79:;
    /* $DF79: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_DF7A:;
    /* $DF7A: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_DF7B:;
    /* $DF7B: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_DF7C:;
    /* $DF7C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0E; FLAG_NZ(g_cpu.A);
label_DF7E:;
    /* $DF7E: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_DF7F:;
    /* $DF7F: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_DF80:;
    /* $DF80: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xE049 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DF83:;
    /* $DF83: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x55); FLAG_NZ(g_cpu.Y);
label_DF85:;
    /* $DF85: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_DF8F; }
label_DF87:;
    /* $DF87: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x4B); FLAG_NZ(g_cpu.Y);
label_DF89:;
    /* $DF89: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0406 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_DF8C:;
    /* $DF8C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_DF91(); return;
label_DF8F:;
    /* $DF8F: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x65); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_DF91:;
    /* $DF91: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_DF92:;
    /* $DF92: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xE04B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DF95:;
    /* $DF95: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_DF96:;
    /* $DF96: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x0F); FLAG_NZ(g_cpu.A);
label_DF98:;
    /* $DF98: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_DF99:;
    /* $DF99: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0C + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0C); g_cpu.A=r&0xFF; }
label_DF9B:;
    /* $DF9B: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_DF9C:;
    /* $DF9C: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_DF9D:;
    /* $DF9D: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_DF9E:;
    /* $DF9E: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_DFA0:;
    /* $DFA0: 4C */ maybe_trigger_vblank(3); goto label_DF75;
label_DFB1:;
    /* $DFB1: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0xFF; FLAG_NZ(g_cpu.A);
label_DFB3:;
    /* $DFB3: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_DFB4:;
    /* $DFB4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xF8 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xF8); g_cpu.A=r&0xFF; }
label_DFB6:;
    /* $DFB6: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_DFB7:;
    /* $DFB7: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

