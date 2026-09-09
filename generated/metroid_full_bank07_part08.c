/* metroid_full_bank07_part08.c — PRG bank 7 function bodies (sub-part 8).
 * STANDALONE translation unit — compiled independently (in
 * parallel with every other bank part/sub-part and the
 * umbrella metroid_full.c). Do not compile as part of another TU or
 * edit directly; the source of truth is the recompiler's
 * code_generator.c. Renamed to drop the _partNN suffix if
 * this bank turned out to fit in a single sub-part. */

#include "metroid_full_decls.h"

void func_F0E6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F0E6");
#endif
label_F0E6:;
    /* $F0E6: F4 */ nes_cpu_instruction_boundary(0xF0E6, 4); (void)nes_read((0xF1 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F0E8:;
    /* $F0E8: 30 */ nes_cpu_instruction_boundary(0xF0E8, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_F0ED; }
label_F0EA:;
    /* $F0EA: 4C */ nes_cpu_instruction_boundary(0xF0EA, 3); nes_cpu_instruction_boundary(0xF09F, 2); func_F09F(); return;
label_F0ED:;
    /* $F0ED: A2 */ nes_cpu_instruction_boundary(0xF0ED, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_F0EF:;
    /* $F0EF: 20 */ nes_cpu_instruction_boundary(0xF0EF, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; func_F172();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0EF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0F2:;
    /* $F0F2: A0 */ nes_cpu_instruction_boundary(0xF0F2, 2); g_cpu.Y = 0x60; FLAG_NZ(g_cpu.Y);
label_F0F4:;
    /* $F0F4: B9 */ nes_cpu_instruction_boundary(0xF0F4, 4); g_cpu.A = nes_read((0x6AF4 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F0F7:;
    /* $F0F7: F0 */ nes_cpu_instruction_boundary(0xF0F7, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_F112; }
label_F0F9:;
    /* $F0F9: C9 */ nes_cpu_instruction_boundary(0xF0F9, 2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_F0FB:;
    /* $F0FB: F0 */ nes_cpu_instruction_boundary(0xF0FB, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_F112; }
label_F0FD:;
    /* $F0FD: A5 */ nes_cpu_instruction_boundary(0xF0FD, 3); g_cpu.A = nes_read(0x70); FLAG_NZ(g_cpu.A);
label_F0FF:;
    /* $F0FF: D0 */ nes_cpu_instruction_boundary(0xF0FF, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F112; }
label_F101:;
    /* $F101: 20 */ nes_cpu_instruction_boundary(0xF101, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x03; g_cpu.S--; func_CE84();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF101, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F104:;
    /* $F104: F0 */ nes_cpu_instruction_boundary(0xF104, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F112; }
label_F106:;
    /* $F106: 20 */ nes_cpu_instruction_boundary(0xF106, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x08; g_cpu.S--; func_F1B3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF106, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F109:;
    /* $F109: 20 */ nes_cpu_instruction_boundary(0xF109, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0B; g_cpu.S--; func_F162();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF109, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F10C:;
    /* $F10C: 20 */ nes_cpu_instruction_boundary(0xF10C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0E; g_cpu.S--; func_F1FA();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF10C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F10F:;
    /* $F10F: 20 */ nes_cpu_instruction_boundary(0xF10F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x11; g_cpu.S--; func_F2ED();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF10F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F112:;
    /* $F112: 20 */ nes_cpu_instruction_boundary(0xF112, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x14; g_cpu.S--; func_F1EE();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF112, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F115:;
    /* $F115: C9 */ nes_cpu_instruction_boundary(0xF115, 2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_F117:;
    /* $F117: D0 */ nes_cpu_instruction_boundary(0xF117, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xF0F4, 2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_F0F4;
    }
label_F119:;
    /* $F119: A0 */ nes_cpu_instruction_boundary(0xF119, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_F11B:;
    /* $F11B: 20 */ nes_cpu_instruction_boundary(0xF11B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1D; g_cpu.S--; func_CE84();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF11B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F11E:;
    /* $F11E: F0 */ nes_cpu_instruction_boundary(0xF11E, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F13D; }
label_F120:;
    /* $F120: 20 */ nes_cpu_instruction_boundary(0xF120, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x22; g_cpu.S--; func_F186();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF120, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F123:;
    /* $F123: A2 */ nes_cpu_instruction_boundary(0xF123, 2); g_cpu.X = 0xF0; FLAG_NZ(g_cpu.X);
label_F125:;
    /* $F125: BD */ nes_cpu_instruction_boundary(0xF125, 4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F128:;
    /* $F128: C9 */ nes_cpu_instruction_boundary(0xF128, 2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_F12A:;
    /* $F12A: F0 */ nes_cpu_instruction_boundary(0xF12A, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F130; }
label_F12C:;
    /* $F12C: C9 */ nes_cpu_instruction_boundary(0xF12C, 2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_F12E:;
    /* $F12E: D0 */ nes_cpu_instruction_boundary(0xF12E, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F136; }
label_F130:;
    /* $F130: 20 */ nes_cpu_instruction_boundary(0xF130, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x32; g_cpu.S--; func_DC82();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF130, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F133:;
    /* $F133: 20 */ nes_cpu_instruction_boundary(0xF133, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x35; g_cpu.S--; func_F311();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF133, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F136:;
    /* $F136: 20 */ nes_cpu_instruction_boundary(0xF136, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x38; g_cpu.S--; func_F1F4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF136, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F139:;
    /* $F139: C9 */ nes_cpu_instruction_boundary(0xF139, 2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_F13B:;
    /* $F13B: D0 */ nes_cpu_instruction_boundary(0xF13B, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xF125, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_F125;
    }
label_F13D:; /* GotoSubtractHealth */
    /* $F13D: 4C */ nes_cpu_instruction_boundary(0xF13D, 3); nes_cpu_instruction_boundary(0xCE92, 2); func_CE92(); return;
}

void func_C9C0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C9C0");
#endif
label_C9C0:;
    /* $C9C0: 31 */ nes_cpu_instruction_boundary(0xC9C0, 5); g_cpu.A &= nes_read((nes_read16zp(0xE6) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_C9C2:;
    /* $C9C2: 1E */ nes_cpu_instruction_boundary(0xC9C2, 7); { uint16_t a=(0xA960 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C9C5:;
    /* $C9C5: 19 */ nes_cpu_instruction_boundary(0xC9C5, 4); g_cpu.A |= nes_read((0x1F85 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_C9C8:;
    /* $C9C8: A9 */ nes_cpu_instruction_boundary(0xC9C8, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_C9CA:;
    /* $C9CA: 85 */ nes_cpu_instruction_boundary(0xC9CA, 3); nes_write(0x24, g_cpu.A);
label_C9CC:;
    /* $C9CC: AD */ nes_cpu_instruction_boundary(0xC9CC, 4); g_cpu.A = nes_read(0x0680); FLAG_NZ(g_cpu.A);
label_C9CF:;
    /* $C9CF: 09 */ nes_cpu_instruction_boundary(0xC9CF, 2); g_cpu.A |= 0x01; FLAG_NZ(g_cpu.A);
label_C9D1:;
    /* $C9D1: 8D */ nes_cpu_instruction_boundary(0xC9D1, 4); nes_write(0x0680, g_cpu.A);
label_C9D4:;
    /* $C9D4: 4C */ nes_cpu_instruction_boundary(0xC9D4, 3); nes_cpu_instruction_boundary(0xC439, 2); func_C439(); return;
}

void func_DC4C(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DC4C");
#endif
label_DC4C:;
    /* $DC4C: DC */ nes_cpu_instruction_boundary(0xDC4C, 4); (void)nes_read((0x0665 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_DC4F:;
    /* $DC4F: 85 */ nes_cpu_instruction_boundary(0xDC4F, 3); nes_write(0x06, g_cpu.A);
label_DC51:; /* MapScrollRoutine_endIf_B */
    /* $DC51: 20 */ nes_cpu_instruction_boundary(0xDC51, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xDC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x53; g_cpu.S--; func_DC67();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDC51, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DC54:; /* AddItemToHistory */
    /* $DC54: AC */ nes_cpu_instruction_boundary(0xDC54, 4); g_cpu.Y = nes_read(0x6886); FLAG_NZ(g_cpu.Y);
label_DC57:;
    /* $DC57: A5 */ nes_cpu_instruction_boundary(0xDC57, 3); g_cpu.A = nes_read(0x06); FLAG_NZ(g_cpu.A);
label_DC59:;
    /* $DC59: 99 */ nes_cpu_instruction_boundary(0xDC59, 5); nes_write((0x6887 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_DC5C:;
    /* $DC5C: A5 */ nes_cpu_instruction_boundary(0xDC5C, 3); g_cpu.A = nes_read(0x07); FLAG_NZ(g_cpu.A);
label_DC5E:;
    /* $DC5E: 99 */ nes_cpu_instruction_boundary(0xDC5E, 5); nes_write((0x6888 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_DC61:;
    /* $DC61: C8 */ nes_cpu_instruction_boundary(0xDC61, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DC62:;
    /* $DC62: C8 */ nes_cpu_instruction_boundary(0xDC62, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DC63:;
    /* $DC63: 8C */ nes_cpu_instruction_boundary(0xDC63, 4); nes_write(0x6886, g_cpu.Y);
label_DC66:;
    /* $DC66: 60 */ nes_cpu_instruction_boundary(0xDC66, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C9B0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C9B0");
#endif
label_C9B0:;
    /* $C9B0: C4 */ nes_cpu_instruction_boundary(0xC9B0, 3); { uint8_t m=nes_read(0xA5); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C9B2:;
    /* $C9B2: 15 */ nes_cpu_instruction_boundary(0xC9B2, 4); g_cpu.A |= nes_read((0x29 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_C9B4:;
    /* $C9B4: 88 */ nes_cpu_instruction_boundary(0xC9B4, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_C9B5:;
    /* $C9B5: 49 */ nes_cpu_instruction_boundary(0xC9B5, 2); g_cpu.A ^= 0x88; FLAG_NZ(g_cpu.A);
label_C9B7:;
    /* $C9B7: D0 */ nes_cpu_instruction_boundary(0xC9B7, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_C9C3; }
label_C9B9:;
    /* $C9B9: AC */ nes_cpu_instruction_boundary(0xC9B9, 4); g_cpu.Y = nes_read(0x010B); FLAG_NZ(g_cpu.Y);
label_C9BC:;
    /* $C9BC: C8 */ nes_cpu_instruction_boundary(0xC9BC, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_C9BD:;
    /* $C9BD: D0 */ nes_cpu_instruction_boundary(0xC9BD, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_C9C3; }
label_C9BF:;
    /* $C9BF: 85 */ nes_cpu_instruction_boundary(0xC9BF, 3); nes_write(0x31, g_cpu.A);
label_C9C1:;
    /* $C9C1: E6 */ nes_cpu_instruction_boundary(0xC9C1, 5); { uint16_t a=0x1E; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C9C3:; /* PauseMode_RTS */
    /* $C9C3: 60 */ nes_cpu_instruction_boundary(0xC9C3, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_FA90(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_FA90");
#endif
label_FA90:;
    /* $FA90: E9 */ nes_cpu_instruction_boundary(0xFA90, 2); { uint8_t m=0x20; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_FA92:;
    /* $FA92: 18 */ nes_cpu_instruction_boundary(0xFA92, 2); g_cpu.C = 0;
label_FA93:;
    /* $FA93: FA */ nes_cpu_instruction_boundary(0xFA93, 2); /* NOP */
label_FA94:;
    /* $FA94: AD */ nes_cpu_instruction_boundary(0xFA94, 4); g_cpu.A = nes_read(0x95DC); FLAG_NZ(g_cpu.A);
label_FA97:;
    /* $FA97: 20 */ nes_cpu_instruction_boundary(0xFA97, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; func_F68D();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFA97, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FA9A:;
    /* $FA9A: 4C */ nes_cpu_instruction_boundary(0xFA9A, 3); nes_cpu_instruction_boundary(0xF97C, 2); func_F97C(); return;
}

void func_F5A2(void) { /* PlaySnd2 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F5A2");
#endif
label_F5A2:; /* PlaySnd2 */
    /* $F5A2: 20 */ nes_cpu_instruction_boundary(0xF5A2, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA4; g_cpu.S--; func_CBB0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF5A2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F5A5:;
    /* $F5A5: D0 */ nes_cpu_instruction_boundary(0xF5A5, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F5AA; }
label_F5A7:; /* PlaySnd3 */
    /* $F5A7: 20 */ nes_cpu_instruction_boundary(0xF5A7, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA9; g_cpu.S--; func_CBCE();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF5A7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F5AA:;
    /* $F5AA: A6 */ nes_cpu_instruction_boundary(0xF5AA, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_F5AC:;
    /* $F5AC: 20 */ nes_cpu_instruction_boundary(0xF5AC, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAE; g_cpu.S--; if (!nes_dispatch_call(0x80B0, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF5AC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F5AF:;
    /* $F5AF: 29 */ nes_cpu_instruction_boundary(0xF5AF, 2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_F5B1:;
    /* $F5B1: F0 */ nes_cpu_instruction_boundary(0xF5B1, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F5BA; }
label_F5B3:;
    /* $F5B3: BD */ nes_cpu_instruction_boundary(0xF5B3, 4); g_cpu.A = nes_read((0x040E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F5B6:;
    /* $F5B6: C9 */ nes_cpu_instruction_boundary(0xF5B6, 2); { int r=g_cpu.A-0x0B; g_cpu.C=(g_cpu.A>=0x0B)?1:0; FLAG_NZ(r&0xFF); }
label_F5B8:;
    /* $F5B8: D0 */ nes_cpu_instruction_boundary(0xF5B8, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xF56C); return; }
label_F5BA:;
    /* $F5BA: BD */ nes_cpu_instruction_boundary(0xF5BA, 4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F5BD:;
    /* $F5BD: C9 */ nes_cpu_instruction_boundary(0xF5BD, 2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_F5BF:;
    /* $F5BF: D0 */ nes_cpu_instruction_boundary(0xF5BF, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F5C4; }
label_F5C1:;
    /* $F5C1: BD */ nes_cpu_instruction_boundary(0xF5C1, 4); g_cpu.A = nes_read((0x040C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F5C4:;
    /* $F5C4: 05 */ nes_cpu_instruction_boundary(0xF5C4, 3); g_cpu.A |= nes_read(0x0A); FLAG_NZ(g_cpu.A);
label_F5C6:;
    /* $F5C6: 9D */ nes_cpu_instruction_boundary(0xF5C6, 5); nes_write((0x040C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F5C9:;
    /* $F5C9: 0A */ nes_cpu_instruction_boundary(0xF5C9, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_F5CA:;
    /* $F5CA: 30 */ nes_cpu_instruction_boundary(0xF5CA, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_F5DE; }
label_F5CC:;
    /* $F5CC: 20 */ nes_cpu_instruction_boundary(0xF5CC, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCE; g_cpu.S--; if (!nes_dispatch_call(0x80B0, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF5CC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F5CF:;
    /* $F5CF: 29 */ nes_cpu_instruction_boundary(0xF5CF, 2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_F5D1:;
    /* $F5D1: D0 */ nes_cpu_instruction_boundary(0xF5D1, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F5DE; }
label_F5D3:;
    /* $F5D3: BC */ nes_cpu_instruction_boundary(0xF5D3, 4); g_cpu.Y = nes_read((0x040E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_F5D6:;
    /* $F5D6: C0 */ nes_cpu_instruction_boundary(0xF5D6, 2); { int r=g_cpu.Y-0x0B; g_cpu.C=(g_cpu.Y>=0x0B)?1:0; FLAG_NZ(r&0xFF); }
label_F5D8:;
    /* $F5D8: F0 */ nes_cpu_instruction_boundary(0xF5D8, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_F611; }
label_F5DA:;
    /* $F5DA: C0 */ nes_cpu_instruction_boundary(0xF5DA, 2); { int r=g_cpu.Y-0x81; g_cpu.C=(g_cpu.Y>=0x81)?1:0; FLAG_NZ(r&0xFF); }
label_F5DC:;
    /* $F5DC: F0 */ nes_cpu_instruction_boundary(0xF5DC, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_F611; }
label_F5DE:;
    /* $F5DE: A9 */ nes_cpu_instruction_boundary(0xF5DE, 2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_F5E0:;
    /* $F5E0: 9D */ nes_cpu_instruction_boundary(0xF5E0, 5); nes_write((0x6AF4 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F5E3:;
    /* $F5E3: A9 */ nes_cpu_instruction_boundary(0xF5E3, 2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_F5E5:;
    /* $F5E5: 24 */ nes_cpu_instruction_boundary(0xF5E5, 3); { uint8_t m=nes_read(0x0A); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_F5E7:;
    /* $F5E7: 50 */ nes_cpu_instruction_boundary(0xF5E7, 2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_F5EB; }
label_F5E9:;
    /* $F5E9: A9 */ nes_cpu_instruction_boundary(0xF5E9, 2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_F5EB:;
    /* $F5EB: 9D */ nes_cpu_instruction_boundary(0xF5EB, 5); nes_write((0x040F + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F5EE:;
    /* $F5EE: C0 */ nes_cpu_instruction_boundary(0xF5EE, 2); { int r=g_cpu.Y-0x02; g_cpu.C=(g_cpu.Y>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_F5F0:;
    /* $F5F0: F0 */ nes_cpu_instruction_boundary(0xF5F0, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_F607; }
label_F5F2:;
    /* $F5F2: 24 */ nes_cpu_instruction_boundary(0xF5F2, 3); { uint8_t m=nes_read(0x0A); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_F5F4:;
    /* $F5F4: 50 */ nes_cpu_instruction_boundary(0xF5F4, 2); if (!g_cpu.V) { maybe_trigger_vblank(2); goto label_F60C; }
label_F5F6:;
    /* $F5F6: BC */ nes_cpu_instruction_boundary(0xF5F6, 4); g_cpu.Y = nes_read((0x040E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_F5F9:;
    /* $F5F9: C0 */ nes_cpu_instruction_boundary(0xF5F9, 2); { int r=g_cpu.Y-0x0B; g_cpu.C=(g_cpu.Y>=0x0B)?1:0; FLAG_NZ(r&0xFF); }
label_F5FB:;
    /* $F5FB: D0 */ nes_cpu_instruction_boundary(0xF5FB, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_F60C; }
label_F5FD:;
    /* $F5FD: DE */ nes_cpu_instruction_boundary(0xF5FD, 7); { uint16_t a=(0x040B + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F600:;
    /* $F600: F0 */ nes_cpu_instruction_boundary(0xF600, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F611; }
label_F602:;
    /* $F602: DE */ nes_cpu_instruction_boundary(0xF602, 7); { uint16_t a=(0x040B + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F605:;
    /* $F605: F0 */ nes_cpu_instruction_boundary(0xF605, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F611; }
label_F607:;
    /* $F607: DE */ nes_cpu_instruction_boundary(0xF607, 7); { uint16_t a=(0x040B + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F60A:;
    /* $F60A: F0 */ nes_cpu_instruction_boundary(0xF60A, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F611; }
label_F60C:;
    /* $F60C: DE */ nes_cpu_instruction_boundary(0xF60C, 7); { uint16_t a=(0x040B + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F60F:;
    /* $F60F: D0 */ nes_cpu_instruction_boundary(0xF60F, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F673; }
label_F611:; /* ExplodeEnemy */
    /* $F611: A9 */ nes_cpu_instruction_boundary(0xF611, 2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_F613:;
    /* $F613: 9D */ nes_cpu_instruction_boundary(0xF613, 5); nes_write((0x6AF4 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F616:;
    /* $F616: 24 */ nes_cpu_instruction_boundary(0xF616, 3); { uint8_t m=nes_read(0x0A); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_F618:;
    /* $F618: 70 */ nes_cpu_instruction_boundary(0xF618, 2); if (g_cpu.V) { maybe_trigger_vblank(1); goto label_F628; }
label_F61A:;
    /* $F61A: BD */ nes_cpu_instruction_boundary(0xF61A, 4); g_cpu.A = nes_read((0x040E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F61D:;
    /* $F61D: C9 */ nes_cpu_instruction_boundary(0xF61D, 2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_F61F:;
    /* $F61F: B0 */ nes_cpu_instruction_boundary(0xF61F, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_F628; }
label_F621:;
    /* $F621: A9 */ nes_cpu_instruction_boundary(0xF621, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_F623:;
    /* $F623: 20 */ nes_cpu_instruction_boundary(0xF623, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x25; g_cpu.S--; func_DCFC();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF623, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F626:;
    /* $F626: A6 */ nes_cpu_instruction_boundary(0xF626, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_F628:; /* ExplodeEnemy_endIf_A */
    /* $F628: 20 */ nes_cpu_instruction_boundary(0xF628, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2A; g_cpu.S--; func_F844();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF628, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F62B:;
    /* $F62B: B9 */ nes_cpu_instruction_boundary(0xF62B, 4); g_cpu.A = nes_read((0x960B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F62E:;
    /* $F62E: 20 */ nes_cpu_instruction_boundary(0xF62E, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x30; g_cpu.S--; func_F68D();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF62E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F631:;
    /* $F631: 9D */ nes_cpu_instruction_boundary(0xF631, 5); nes_write((0x0406 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F634:;
    /* $F634: A2 */ nes_cpu_instruction_boundary(0xF634, 2); g_cpu.X = 0xC0; FLAG_NZ(g_cpu.X);
label_F636:; /* ExplodeEnemy_loop */
    /* $F636: BD */ nes_cpu_instruction_boundary(0xF636, 4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F639:;
    /* $F639: F0 */ nes_cpu_instruction_boundary(0xF639, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F646; }
label_F63B:;
    /* $F63B: 8A */ nes_cpu_instruction_boundary(0xF63B, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_F63C:;
    /* $F63C: 18 */ nes_cpu_instruction_boundary(0xF63C, 2); g_cpu.C = 0;
label_F63D:;
    /* $F63D: 69 */ nes_cpu_instruction_boundary(0xF63D, 2); { uint16_t r = g_cpu.A + 0x08 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x08); g_cpu.A=r&0xFF; }
label_F63F:;
    /* $F63F: AA */ nes_cpu_instruction_boundary(0xF63F, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_F640:;
    /* $F640: C9 */ nes_cpu_instruction_boundary(0xF640, 2); { int r=g_cpu.A-0xE0; g_cpu.C=(g_cpu.A>=0xE0)?1:0; FLAG_NZ(r&0xFF); }
label_F642:;
    /* $F642: D0 */ nes_cpu_instruction_boundary(0xF642, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xF636, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_F636;
    }
label_F644:;
    /* $F644: F0 */ nes_cpu_instruction_boundary(0xF644, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F673; }
label_F646:; /* ExplodeEnemy_exitLoop */
    /* $F646: AD */ nes_cpu_instruction_boundary(0xF646, 4); g_cpu.A = nes_read(0x95DD); FLAG_NZ(g_cpu.A);
label_F649:;
    /* $F649: 20 */ nes_cpu_instruction_boundary(0xF649, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x4B; g_cpu.S--; func_F68D();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF649, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F64C:;
    /* $F64C: A9 */ nes_cpu_instruction_boundary(0xF64C, 2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_F64E:;
    /* $F64E: 9D */ nes_cpu_instruction_boundary(0xF64E, 5); nes_write((0x0406 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F651:;
    /* $F651: FE */ nes_cpu_instruction_boundary(0xF651, 7); { uint16_t a=(0x6AF4 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F654:;
    /* $F654: A9 */ nes_cpu_instruction_boundary(0xF654, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_F656:;
    /* $F656: 24 */ nes_cpu_instruction_boundary(0xF656, 3); { uint8_t m=nes_read(0x0A); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_F658:;
    /* $F658: 50 */ nes_cpu_instruction_boundary(0xF658, 2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_F65C; }
label_F65A:;
    /* $F65A: A9 */ nes_cpu_instruction_boundary(0xF65A, 2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_F65C:; /* ExplodeEnemy_endIf_B */
    /* $F65C: 9D */ nes_cpu_instruction_boundary(0xF65C, 5); nes_write((0x0407 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F65F:;
    /* $F65F: A4 */ nes_cpu_instruction_boundary(0xF65F, 3); g_cpu.Y = nes_read(0x4B); FLAG_NZ(g_cpu.Y);
label_F661:;
    /* $F661: B9 */ nes_cpu_instruction_boundary(0xF661, 4); g_cpu.A = nes_read((0x0400 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F664:;
    /* $F664: 9D */ nes_cpu_instruction_boundary(0xF664, 5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F667:;
    /* $F667: B9 */ nes_cpu_instruction_boundary(0xF667, 4); g_cpu.A = nes_read((0x0401 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F66A:;
    /* $F66A: 9D */ nes_cpu_instruction_boundary(0xF66A, 5); nes_write((0x0401 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F66D:;
    /* $F66D: B9 */ nes_cpu_instruction_boundary(0xF66D, 4); g_cpu.A = nes_read((0x6AFB + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F670:;
    /* $F670: 9D */ nes_cpu_instruction_boundary(0xF670, 5); nes_write((0x6AFB + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F673:; /* ExplodeEnemy_exit */
    /* $F673: A6 */ nes_cpu_instruction_boundary(0xF673, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_F675:;
    /* $F675: 60 */ nes_cpu_instruction_boundary(0xF675, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_D0F6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D0F6");
#endif
label_D0F6:;
    /* $D0F6: 08 */ nes_cpu_instruction_boundary(0xD0F6, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_D0F7:;
    /* $D0F7: 8D */ nes_cpu_instruction_boundary(0xD0F7, 4); nes_write(0x0301, g_cpu.A);
label_D0FA:;
    /* $D0FA: 20 */ nes_cpu_instruction_boundary(0xD0FA, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFC; g_cpu.S--; func_E7A2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD0FA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D0FD:;
    /* $D0FD: 90 */ nes_cpu_instruction_boundary(0xD0FD, 2); if (!g_cpu.C) { maybe_trigger_vblank(2); goto label_D11E; }
label_D0FF:;
    /* $D0FF: A2 */ nes_cpu_instruction_boundary(0xD0FF, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_D101:;
    /* $D101: 20 */ nes_cpu_instruction_boundary(0xD101, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x03; g_cpu.S--; func_E8BE();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD101, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D104:;
    /* $D104: 86 */ nes_cpu_instruction_boundary(0xD104, 3); nes_write(0x05, g_cpu.X);
label_D106:;
    /* $D106: A9 */ nes_cpu_instruction_boundary(0xD106, 2); g_cpu.A = 0xF5; FLAG_NZ(g_cpu.A);
label_D108:;
    /* $D108: 85 */ nes_cpu_instruction_boundary(0xD108, 3); nes_write(0x04, g_cpu.A);
label_D10A:;
    /* $D10A: 20 */ nes_cpu_instruction_boundary(0xD10A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0C; g_cpu.S--; func_FD8F();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD10A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D10D:;
    /* $D10D: 20 */ nes_cpu_instruction_boundary(0xD10D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0F; g_cpu.S--; func_D638();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD10D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D110:;
    /* $D110: 20 */ nes_cpu_instruction_boundary(0xD110, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x12; g_cpu.S--; func_CF55();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD110, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D113:;
    /* $D113: CE */ nes_cpu_instruction_boundary(0xD113, 6); { uint16_t a=0x0306; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D116:;
    /* $D116: 20 */ nes_cpu_instruction_boundary(0xD116, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x18; g_cpu.S--; func_D147();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD116, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D119:;
    /* $D119: A9 */ nes_cpu_instruction_boundary(0xD119, 2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_D11B:;
    /* $D11B: 4C */ nes_cpu_instruction_boundary(0xD11B, 3); nes_cpu_instruction_boundary(0xD144, 2); func_D144(); return;
label_D11E:;
    /* $D11E: A5 */ nes_cpu_instruction_boundary(0xD11E, 3); g_cpu.A = nes_read(0x12); FLAG_NZ(g_cpu.A);
label_D120:;
    /* $D120: 20 */ nes_cpu_instruction_boundary(0xD120, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x22; g_cpu.S--; func_E1E1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD120, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D123:;
    /* $D123: C9 */ nes_cpu_instruction_boundary(0xD123, 2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_D125:;
    /* $D125: B0 */ nes_cpu_instruction_boundary(0xD125, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_D12E; }
label_D127:;
    /* $D127: 85 */ nes_cpu_instruction_boundary(0xD127, 3); nes_write(0x4D, g_cpu.A);
label_D129:;
    /* $D129: A9 */ nes_cpu_instruction_boundary(0xD129, 2); g_cpu.A = 0x16; FLAG_NZ(g_cpu.A);
label_D12B:;
    /* $D12B: 20 */ nes_cpu_instruction_boundary(0xD12B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2D; g_cpu.S--; func_CF6B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD12B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D12E:;
    /* $D12E: A6 */ nes_cpu_instruction_boundary(0xD12E, 3); g_cpu.X = nes_read(0x4D); FLAG_NZ(g_cpu.X);
label_D130:;
    /* $D130: 20 */ nes_cpu_instruction_boundary(0xD130, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x32; g_cpu.S--; func_CCB7();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD130, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D133:;
    /* $D133: 20 */ nes_cpu_instruction_boundary(0xD133, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x35; g_cpu.S--; func_CF2E();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD133, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D136:;
    /* $D136: 20 */ nes_cpu_instruction_boundary(0xD136, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x38; g_cpu.S--; func_D150();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD136, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D139:;
    /* $D139: A5 */ nes_cpu_instruction_boundary(0xD139, 3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_D13B:;
    /* $D13B: 29 */ nes_cpu_instruction_boundary(0xD13B, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_D13D:;
    /* $D13D: D0 */ nes_cpu_instruction_boundary(0xD13D, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_D142; }
label_D13F:;
    /* $D13F: 20 */ nes_cpu_instruction_boundary(0xD13F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x41; g_cpu.S--; func_CFB7();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD13F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D142:;
    /* $D142: A9 */ nes_cpu_instruction_boundary(0xD142, 2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_D144:;
    /* $D144: 4C */ nes_cpu_instruction_boundary(0xD144, 3); nes_cpu_instruction_boundary(0xCD6D, 2); func_CD6D(); return;
}

void func_E9D0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E9D0");
#endif
label_E9D0:;
    /* $E9D0: 0A */ nes_cpu_instruction_boundary(0xE9D0, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_E9D1:;
    /* $E9D1: 20 */ nes_cpu_instruction_boundary(0xE9D1, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD3; g_cpu.S--; func_F1F4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE9D1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E9D4:;
    /* $E9D4: D0 */ nes_cpu_instruction_boundary(0xE9D4, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xE9CC); return; }
label_E9D6:;
    /* $E9D6: BD */ nes_cpu_instruction_boundary(0xE9D6, 4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E9D9:;
    /* $E9D9: D0 */ nes_cpu_instruction_boundary(0xE9D9, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_EA03; }
label_E9DB:;
    /* $E9DB: FE */ nes_cpu_instruction_boundary(0xE9DB, 7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E9DE:;
    /* $E9DE: A5 */ nes_cpu_instruction_boundary(0xE9DE, 3); g_cpu.A = nes_read(0x04); FLAG_NZ(g_cpu.A);
label_E9E0:;
    /* $E9E0: 29 */ nes_cpu_instruction_boundary(0xE9E0, 2); g_cpu.A &= 0xDE; FLAG_NZ(g_cpu.A);
label_E9E2:;
    /* $E9E2: 9D */ nes_cpu_instruction_boundary(0xE9E2, 5); nes_write((0x0508 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_E9E5:;
    /* $E9E5: A5 */ nes_cpu_instruction_boundary(0xE9E5, 3); g_cpu.A = nes_read(0x05); FLAG_NZ(g_cpu.A);
label_E9E7:;
    /* $E9E7: 9D */ nes_cpu_instruction_boundary(0xE9E7, 5); nes_write((0x0509 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_E9EA:;
    /* $E9EA: A5 */ nes_cpu_instruction_boundary(0xE9EA, 3); g_cpu.A = nes_read(0x74); FLAG_NZ(g_cpu.A);
label_E9EC:;
    /* $E9EC: C9 */ nes_cpu_instruction_boundary(0xE9EC, 2); { int r=g_cpu.A-0x11; g_cpu.C=(g_cpu.A>=0x11)?1:0; FLAG_NZ(r&0xFF); }
label_E9EE:;
    /* $E9EE: D0 */ nes_cpu_instruction_boundary(0xE9EE, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E9F8; }
label_E9F0:;
    /* $E9F0: C0 */ nes_cpu_instruction_boundary(0xE9F0, 2); { int r=g_cpu.Y-0x76; g_cpu.C=(g_cpu.Y>=0x76)?1:0; FLAG_NZ(r&0xFF); }
label_E9F2:;
    /* $E9F2: D0 */ nes_cpu_instruction_boundary(0xE9F2, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E9F8; }
label_E9F4:;
    /* $E9F4: A9 */ nes_cpu_instruction_boundary(0xE9F4, 2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_E9F6:;
    /* $E9F6: D0 */ nes_cpu_instruction_boundary(0xE9F6, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E9FF; }
label_E9F8:;
    /* $E9F8: 98 */ nes_cpu_instruction_boundary(0xE9F8, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_E9F9:;
    /* $E9F9: 18 */ nes_cpu_instruction_boundary(0xE9F9, 2); g_cpu.C = 0;
label_E9FA:;
    /* $E9FA: 69 */ nes_cpu_instruction_boundary(0xE9FA, 2); { uint16_t r = g_cpu.A + 0x10 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x10); g_cpu.A=r&0xFF; }
label_E9FC:;
    /* $E9FC: 29 */ nes_cpu_instruction_boundary(0xE9FC, 2); g_cpu.A &= 0x3C; FLAG_NZ(g_cpu.A);
label_E9FE:;
    /* $E9FE: 4A */ nes_cpu_instruction_boundary(0xE9FE, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_E9FF:;
    /* $E9FF: 4A */ nes_cpu_instruction_boundary(0xE9FF, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_EA00:;
    /* $EA00: 9D */ nes_cpu_instruction_boundary(0xEA00, 5); nes_write((0x050A + g_cpu.X) & 0xFFFF, g_cpu.A);
label_EA03:;
    /* $EA03: 18 */ nes_cpu_instruction_boundary(0xEA03, 2); g_cpu.C = 0;
label_EA04:; /* Exit18 */
    /* $EA04: 60 */ nes_cpu_instruction_boundary(0xEA04, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_CA4C(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CA4C");
#endif
label_CA4C:;
    /* $CA4C: A5 */ nes_cpu_instruction_boundary(0xCA4C, 3); g_cpu.A = nes_read(0x1E); FLAG_NZ(g_cpu.A);
label_CA4E:;
    /* $CA4E: C9 */ nes_cpu_instruction_boundary(0xCA4E, 2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_CA50:;
    /* $CA50: F0 */ nes_cpu_instruction_boundary(0xCA50, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_CA72; }
label_CA52:; /* SaveGameData */
    /* $CA52: A5 */ nes_cpu_instruction_boundary(0xCA52, 3); g_cpu.A = nes_read(0x74); FLAG_NZ(g_cpu.A);
label_CA54:;
    /* $CA54: 20 */ nes_cpu_instruction_boundary(0xCA54, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xCA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x56; g_cpu.S--; func_CAC6();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCA54, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CA57:;
    /* $CA57: A0 */ nes_cpu_instruction_boundary(0xCA57, 2); g_cpu.Y = 0x3F; FLAG_NZ(g_cpu.Y);
label_CA59:;
    /* $CA59: B9 */ nes_cpu_instruction_boundary(0xCA59, 4); g_cpu.A = nes_read((0x6886 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_CA5C:;
    /* $CA5C: 91 */ nes_cpu_instruction_boundary(0xCA5C, 6); nes_write((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_CA5E:;
    /* $CA5E: 88 */ nes_cpu_instruction_boundary(0xCA5E, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_CA5F:;
    /* $CA5F: 10 */ nes_cpu_instruction_boundary(0xCA5F, 2); if (!g_cpu.N) {
    nes_cpu_instruction_boundary(0xCA59, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_CA59;
    }
label_CA61:;
    /* $CA61: AC */ nes_cpu_instruction_boundary(0xCA61, 4); g_cpu.Y = nes_read(0x6875); FLAG_NZ(g_cpu.Y);
label_CA64:;
    /* $CA64: A2 */ nes_cpu_instruction_boundary(0xCA64, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_CA66:;
    /* $CA66: BD */ nes_cpu_instruction_boundary(0xCA66, 4); g_cpu.A = nes_read((0x6876 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_CA69:;
    /* $CA69: 99 */ nes_cpu_instruction_boundary(0xCA69, 5); nes_write((0x77FE + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_CA6C:;
    /* $CA6C: C8 */ nes_cpu_instruction_boundary(0xCA6C, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_CA6D:;
    /* $CA6D: E8 */ nes_cpu_instruction_boundary(0xCA6D, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_CA6E:;
    /* $CA6E: E0 */ nes_cpu_instruction_boundary(0xCA6E, 2); { int r=g_cpu.X-0x10; g_cpu.C=(g_cpu.X>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_CA70:;
    /* $CA70: D0 */ nes_cpu_instruction_boundary(0xCA70, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xCA66, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_CA66;
    }
label_CA72:; /* LoadGameData */
    /* $CA72: 68 */ nes_cpu_instruction_boundary(0xCA72, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_CA73:;
    /* $CA73: 20 */ nes_cpu_instruction_boundary(0xCA73, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xCA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x75; g_cpu.S--; func_CAC6();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCA73, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CA76:;
    /* $CA76: A0 */ nes_cpu_instruction_boundary(0xCA76, 2); g_cpu.Y = 0x3F; FLAG_NZ(g_cpu.Y);
label_CA78:;
    /* $CA78: B1 */ nes_cpu_instruction_boundary(0xCA78, 5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_CA7A:;
    /* $CA7A: 99 */ nes_cpu_instruction_boundary(0xCA7A, 5); nes_write((0x6886 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_CA7D:;
    /* $CA7D: 88 */ nes_cpu_instruction_boundary(0xCA7D, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_CA7E:;
    /* $CA7E: 10 */ nes_cpu_instruction_boundary(0xCA7E, 2); if (!g_cpu.N) {
    nes_cpu_instruction_boundary(0xCA78, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_CA78;
    }
label_CA80:;
    /* $CA80: 30 */ nes_cpu_instruction_boundary(0xCA80, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_CA83; }
label_CA82:;
    /* $CA82: 48 */ nes_cpu_instruction_boundary(0xCA82, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_CA83:;
    /* $CA83: AC */ nes_cpu_instruction_boundary(0xCA83, 4); g_cpu.Y = nes_read(0x6875); FLAG_NZ(g_cpu.Y);
label_CA86:;
    /* $CA86: A2 */ nes_cpu_instruction_boundary(0xCA86, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_CA88:;
    /* $CA88: B9 */ nes_cpu_instruction_boundary(0xCA88, 4); g_cpu.A = nes_read((0x77FE + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_CA8B:;
    /* $CA8B: 9D */ nes_cpu_instruction_boundary(0xCA8B, 5); nes_write((0x6876 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_CA8E:;
    /* $CA8E: C8 */ nes_cpu_instruction_boundary(0xCA8E, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_CA8F:;
    /* $CA8F: E8 */ nes_cpu_instruction_boundary(0xCA8F, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_CA90:;
    /* $CA90: E0 */ nes_cpu_instruction_boundary(0xCA90, 2); { int r=g_cpu.X-0x10; g_cpu.C=(g_cpu.X>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_CA92:;
    /* $CA92: D0 */ nes_cpu_instruction_boundary(0xCA92, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xCA88, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_CA88;
    }
label_CA94:;
    /* $CA94: 68 */ nes_cpu_instruction_boundary(0xCA94, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_CA95:;
    /* $CA95: 60 */ nes_cpu_instruction_boundary(0xCA95, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F0F6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F0F6");
#endif
label_F0F6:;
    /* $F0F6: 6A */ nes_cpu_instruction_boundary(0xF0F6, 2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_F0F7:;
    /* $F0F7: F0 */ nes_cpu_instruction_boundary(0xF0F7, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_F112; }
label_F0F9:;
    /* $F0F9: C9 */ nes_cpu_instruction_boundary(0xF0F9, 2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_F0FB:;
    /* $F0FB: F0 */ nes_cpu_instruction_boundary(0xF0FB, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_F112; }
label_F0FD:;
    /* $F0FD: A5 */ nes_cpu_instruction_boundary(0xF0FD, 3); g_cpu.A = nes_read(0x70); FLAG_NZ(g_cpu.A);
label_F0FF:;
    /* $F0FF: D0 */ nes_cpu_instruction_boundary(0xF0FF, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F112; }
label_F101:;
    /* $F101: 20 */ nes_cpu_instruction_boundary(0xF101, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x03; g_cpu.S--; func_CE84();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF101, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F104:;
    /* $F104: F0 */ nes_cpu_instruction_boundary(0xF104, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F112; }
label_F106:;
    /* $F106: 20 */ nes_cpu_instruction_boundary(0xF106, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x08; g_cpu.S--; func_F1B3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF106, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F109:;
    /* $F109: 20 */ nes_cpu_instruction_boundary(0xF109, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0B; g_cpu.S--; func_F162();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF109, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F10C:;
    /* $F10C: 20 */ nes_cpu_instruction_boundary(0xF10C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0E; g_cpu.S--; func_F1FA();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF10C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F10F:;
    /* $F10F: 20 */ nes_cpu_instruction_boundary(0xF10F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x11; g_cpu.S--; func_F2ED();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF10F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F112:;
    /* $F112: 20 */ nes_cpu_instruction_boundary(0xF112, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x14; g_cpu.S--; func_F1EE();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF112, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F115:;
    /* $F115: C9 */ nes_cpu_instruction_boundary(0xF115, 2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_F117:;
    /* $F117: D0 */ nes_cpu_instruction_boundary(0xF117, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xF0F4); return; }
label_F119:;
    /* $F119: A0 */ nes_cpu_instruction_boundary(0xF119, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_F11B:;
    /* $F11B: 20 */ nes_cpu_instruction_boundary(0xF11B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1D; g_cpu.S--; func_CE84();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF11B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F11E:;
    /* $F11E: F0 */ nes_cpu_instruction_boundary(0xF11E, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F13D; }
label_F120:;
    /* $F120: 20 */ nes_cpu_instruction_boundary(0xF120, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x22; g_cpu.S--; func_F186();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF120, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F123:;
    /* $F123: A2 */ nes_cpu_instruction_boundary(0xF123, 2); g_cpu.X = 0xF0; FLAG_NZ(g_cpu.X);
label_F125:;
    /* $F125: BD */ nes_cpu_instruction_boundary(0xF125, 4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F128:;
    /* $F128: C9 */ nes_cpu_instruction_boundary(0xF128, 2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_F12A:;
    /* $F12A: F0 */ nes_cpu_instruction_boundary(0xF12A, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F130; }
label_F12C:;
    /* $F12C: C9 */ nes_cpu_instruction_boundary(0xF12C, 2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_F12E:;
    /* $F12E: D0 */ nes_cpu_instruction_boundary(0xF12E, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F136; }
label_F130:;
    /* $F130: 20 */ nes_cpu_instruction_boundary(0xF130, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x32; g_cpu.S--; func_DC82();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF130, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F133:;
    /* $F133: 20 */ nes_cpu_instruction_boundary(0xF133, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x35; g_cpu.S--; func_F311();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF133, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F136:;
    /* $F136: 20 */ nes_cpu_instruction_boundary(0xF136, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x38; g_cpu.S--; func_F1F4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF136, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F139:;
    /* $F139: C9 */ nes_cpu_instruction_boundary(0xF139, 2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_F13B:;
    /* $F13B: D0 */ nes_cpu_instruction_boundary(0xF13B, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xF125, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_F125;
    }
label_F13D:; /* GotoSubtractHealth */
    /* $F13D: 4C */ nes_cpu_instruction_boundary(0xF13D, 3); nes_cpu_instruction_boundary(0xCE92, 2); func_CE92(); return;
}

void func_FD00(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_FD00");
#endif
label_FD00:;
    /* $FD00: 50 */ nes_cpu_instruction_boundary(0xFD00, 2); if (!g_cpu.V) { maybe_trigger_vblank(2); call_by_address(0xFC92); return; }
label_FD02:;
    /* $FD02: 04 */ nes_cpu_instruction_boundary(0xFD02, 3); (void)nes_read(0xA9); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_FD04:;
    /* $FD04: 01 */ nes_cpu_instruction_boundary(0xFD04, 6); g_cpu.A |= nes_read(nes_read16zp((0x95 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_FD06:;
    /* $FD06: B0 */ nes_cpu_instruction_boundary(0xFD06, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_FD68; }
label_FD08:; /* UpdateMellow_FD08 */
    /* $FD08: A9 */ nes_cpu_instruction_boundary(0xFD08, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_FD0A:;
    /* $FD0A: 95 */ nes_cpu_instruction_boundary(0xFD0A, 4); nes_write((0xB5 + g_cpu.X) & 0xFF, g_cpu.A);
label_FD0C:;
    /* $FD0C: A8 */ nes_cpu_instruction_boundary(0xFD0C, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_FD0D:;
    /* $FD0D: AD */ nes_cpu_instruction_boundary(0xFD0D, 4); g_cpu.A = nes_read(0x030E); FLAG_NZ(g_cpu.A);
label_FD10:;
    /* $FD10: 38 */ nes_cpu_instruction_boundary(0xFD10, 2); g_cpu.C = 1;
label_FD11:;
    /* $FD11: F5 */ nes_cpu_instruction_boundary(0xFD11, 4); { uint8_t m=nes_read((0xB2 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_FD13:;
    /* $FD13: 10 */ nes_cpu_instruction_boundary(0xFD13, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_FD19; }
label_FD15:;
    /* $FD15: C8 */ nes_cpu_instruction_boundary(0xFD15, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_FD16:;
    /* $FD16: 20 */ nes_cpu_instruction_boundary(0xFD16, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x18; g_cpu.S--; func_C3D4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFD16, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FD19:;
    /* $FD19: C9 */ nes_cpu_instruction_boundary(0xFD19, 2); { int r=g_cpu.A-0x10; g_cpu.C=(g_cpu.A>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_FD1B:;
    /* $FD1B: B0 */ nes_cpu_instruction_boundary(0xFD1B, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_FD24; }
label_FD1D:;
    /* $FD1D: 98 */ nes_cpu_instruction_boundary(0xFD1D, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_FD1E:;
    /* $FD1E: 95 */ nes_cpu_instruction_boundary(0xFD1E, 4); nes_write((0xB4 + g_cpu.X) & 0xFF, g_cpu.A);
label_FD20:;
    /* $FD20: A9 */ nes_cpu_instruction_boundary(0xFD20, 2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_FD22:;
    /* $FD22: 95 */ nes_cpu_instruction_boundary(0xFD22, 4); nes_write((0xB0 + g_cpu.X) & 0xFF, g_cpu.A);
label_FD24:; /* RTS_X399 */
    /* $FD24: 60 */ nes_cpu_instruction_boundary(0xFD24, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_FD25:; /* UpdateMellow_FD25 */
    /* $FD25: 8A */ nes_cpu_instruction_boundary(0xFD25, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_FD26:;
    /* $FD26: 4A */ nes_cpu_instruction_boundary(0xFD26, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_FD27:;
    /* $FD27: 4A */ nes_cpu_instruction_boundary(0xFD27, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_FD28:;
    /* $FD28: 4A */ nes_cpu_instruction_boundary(0xFD28, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_FD29:;
    /* $FD29: 65 */ nes_cpu_instruction_boundary(0xFD29, 3); { uint8_t m=nes_read(0x8A); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_FD2B:;
    /* $FD2B: 85 */ nes_cpu_instruction_boundary(0xFD2B, 3); nes_write(0x8A, g_cpu.A);
label_FD2D:;
    /* $FD2D: 46 */ nes_cpu_instruction_boundary(0xFD2D, 5); { uint16_t a=0x8A; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_FD2F:;
    /* $FD2F: 29 */ nes_cpu_instruction_boundary(0xFD2F, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_FD31:;
    /* $FD31: A8 */ nes_cpu_instruction_boundary(0xFD31, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_FD32:;
    /* $FD32: B9 */ nes_cpu_instruction_boundary(0xFD32, 4); g_cpu.A = nes_read((0xFD5A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FD35:;
    /* $FD35: 85 */ nes_cpu_instruction_boundary(0xFD35, 3); nes_write(0x04, g_cpu.A);
label_FD37:;
    /* $FD37: B9 */ nes_cpu_instruction_boundary(0xFD37, 4); g_cpu.A = nes_read((0xFD5B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FD3A:;
    /* $FD3A: 85 */ nes_cpu_instruction_boundary(0xFD3A, 3); nes_write(0x05, g_cpu.A);
label_FD3C:;
    /* $FD3C: 20 */ nes_cpu_instruction_boundary(0xFD3C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3E; g_cpu.S--; func_FD5F();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFD3C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FD3F:;
    /* $FD3F: A5 */ nes_cpu_instruction_boundary(0xFD3F, 3); g_cpu.A = nes_read(0x08); FLAG_NZ(g_cpu.A);
label_FD41:;
    /* $FD41: 38 */ nes_cpu_instruction_boundary(0xFD41, 2); g_cpu.C = 1;
label_FD42:;
    /* $FD42: E5 */ nes_cpu_instruction_boundary(0xFD42, 3); { uint8_t m=nes_read(0xFC); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_FD44:;
    /* $FD44: A8 */ nes_cpu_instruction_boundary(0xFD44, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_FD45:;
    /* $FD45: A9 */ nes_cpu_instruction_boundary(0xFD45, 2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_FD47:;
    /* $FD47: C0 */ nes_cpu_instruction_boundary(0xFD47, 2); { int r=g_cpu.Y-0x20; g_cpu.C=(g_cpu.Y>=0x20)?1:0; FLAG_NZ(r&0xFF); }
label_FD49:;
    /* $FD49: 90 */ nes_cpu_instruction_boundary(0xFD49, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_FD52; }
label_FD4B:;
    /* $FD4B: 20 */ nes_cpu_instruction_boundary(0xFD4B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x4D; g_cpu.S--; func_C3D4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFD4B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FD4E:;
    /* $FD4E: C0 */ nes_cpu_instruction_boundary(0xFD4E, 2); { int r=g_cpu.Y-0x80; g_cpu.C=(g_cpu.Y>=0x80)?1:0; FLAG_NZ(r&0xFF); }
label_FD50:;
    /* $FD50: 90 */ nes_cpu_instruction_boundary(0xFD50, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_FD54; }
label_FD52:;
    /* $FD52: 85 */ nes_cpu_instruction_boundary(0xFD52, 3); nes_write(0x04, g_cpu.A);
label_FD54:;
    /* $FD54: 20 */ nes_cpu_instruction_boundary(0xFD54, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x56; g_cpu.S--; func_FD8F();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFD54, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FD57:;
    /* $FD57: 4C */ nes_cpu_instruction_boundary(0xFD57, 3); nes_cpu_instruction_boundary(0xFD6C, 2); func_FD6C(); return;
label_FD68:;
    /* $FD68: B2 */ nes_cpu_instruction_boundary(0xFD68, 2); /* ILLEGAL $B2 — skip 1 */
label_FD69:;
    /* $FD69: 85 */ nes_cpu_instruction_boundary(0xFD69, 3); nes_write(0x09, g_cpu.A);
label_FD6B:;
    /* $FD6B: 60 */ nes_cpu_instruction_boundary(0xFD6B, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_FEBD(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_FEBD");
#endif
label_FEBD:;
    /* $FEBD: 20 */ nes_cpu_instruction_boundary(0xFEBD, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFE; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBF; g_cpu.S--; func_F1FA();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFEBD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FEC0:;
    /* $FEC0: B0 */ nes_cpu_instruction_boundary(0xFEC0, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_FEDB; }
label_FEC2:;
    /* $FEC2: 20 */ nes_cpu_instruction_boundary(0xFEC2, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFE; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC4; g_cpu.S--; func_F311();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFEC2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FEC5:;
    /* $FEC5: A9 */ nes_cpu_instruction_boundary(0xFEC5, 2); g_cpu.A = 0x50; FLAG_NZ(g_cpu.A);
label_FEC7:;
    /* $FEC7: 85 */ nes_cpu_instruction_boundary(0xFEC7, 3); nes_write(0x6E, g_cpu.A);
label_FEC9:;
    /* $FEC9: 4C */ nes_cpu_instruction_boundary(0xFEC9, 3); nes_cpu_instruction_boundary(0xCE92, 2); func_CE92(); return;
label_FEDB:; /* GetVRAMStringPtr_RTS */
    /* $FEDB: 60 */ nes_cpu_instruction_boundary(0xFEDB, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_FAC9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_FAC9");
#endif
label_FAC9:;
    /* $FAC9: 06 */ nes_cpu_instruction_boundary(0xFAC9, 5); { uint16_t a=0x04; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_FACB:;
    /* $FACB: C9 */ nes_cpu_instruction_boundary(0xFACB, 2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_FACD:;
    /* $FACD: D0 */ nes_cpu_instruction_boundary(0xFACD, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_FAE1; }
label_FACF:;
    /* $FACF: BD */ nes_cpu_instruction_boundary(0xFACF, 4); g_cpu.A = nes_read((0x0407 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FAD2:;
    /* $FAD2: 0A */ nes_cpu_instruction_boundary(0xFAD2, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_FAD3:;
    /* $FAD3: A8 */ nes_cpu_instruction_boundary(0xFAD3, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_FAD4:;
    /* $FAD4: B9 */ nes_cpu_instruction_boundary(0xFAD4, 4); g_cpu.A = nes_read((0xFAEA + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FAD7:;
    /* $FAD7: 85 */ nes_cpu_instruction_boundary(0xFAD7, 3); nes_write(0x04, g_cpu.A);
label_FAD9:;
    /* $FAD9: B9 */ nes_cpu_instruction_boundary(0xFAD9, 4); g_cpu.A = nes_read((0xFAEB + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FADC:;
    /* $FADC: 85 */ nes_cpu_instruction_boundary(0xFADC, 3); nes_write(0x05, g_cpu.A);
label_FADE:;
    /* $FADE: 20 */ nes_cpu_instruction_boundary(0xFADE, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE0; g_cpu.S--; func_FA41();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFADE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FAE1:; /* UpdateEnemyExplosion_endIf_A */
    /* $FAE1: A9 */ nes_cpu_instruction_boundary(0xFAE1, 2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_FAE3:;
    /* $FAE3: 85 */ nes_cpu_instruction_boundary(0xFAE3, 3); nes_write(0x6B, g_cpu.A);
label_FAE5:;
    /* $FAE5: A9 */ nes_cpu_instruction_boundary(0xFAE5, 2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_FAE7:;
    /* $FAE7: 4C */ nes_cpu_instruction_boundary(0xFAE7, 3); nes_cpu_instruction_boundary(0xF97E, 2); func_F97E(); return;
}

void func_F0FA(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F0FA");
#endif
label_F0FA:;
    /* $F0FA: 05 */ nes_cpu_instruction_boundary(0xF0FA, 3); g_cpu.A |= nes_read(0xF0); FLAG_NZ(g_cpu.A);
label_F0FC:;
    /* $F0FC: 15 */ nes_cpu_instruction_boundary(0xF0FC, 4); g_cpu.A |= nes_read((0xA5 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_F0FE:;
    /* $F0FE: 70 */ nes_cpu_instruction_boundary(0xF0FE, 2); if (g_cpu.V) { maybe_trigger_vblank(2); call_by_address(0xF0D0); return; }
label_F100:;
    /* $F100: 11 */ nes_cpu_instruction_boundary(0xF100, 5); g_cpu.A |= nes_read((nes_read16zp(0x20) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F102:;
    /* $F102: 84 */ nes_cpu_instruction_boundary(0xF102, 3); nes_write(0xCE, g_cpu.Y);
label_F104:;
    /* $F104: F0 */ nes_cpu_instruction_boundary(0xF104, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F112; }
label_F106:;
    /* $F106: 20 */ nes_cpu_instruction_boundary(0xF106, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x08; g_cpu.S--; func_F1B3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF106, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F109:;
    /* $F109: 20 */ nes_cpu_instruction_boundary(0xF109, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0B; g_cpu.S--; func_F162();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF109, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F10C:;
    /* $F10C: 20 */ nes_cpu_instruction_boundary(0xF10C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0E; g_cpu.S--; func_F1FA();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF10C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F10F:;
    /* $F10F: 20 */ nes_cpu_instruction_boundary(0xF10F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x11; g_cpu.S--; func_F2ED();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF10F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F112:;
    /* $F112: 20 */ nes_cpu_instruction_boundary(0xF112, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x14; g_cpu.S--; func_F1EE();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF112, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F115:;
    /* $F115: C9 */ nes_cpu_instruction_boundary(0xF115, 2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_F117:;
    /* $F117: D0 */ nes_cpu_instruction_boundary(0xF117, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xF0F4); return; }
label_F119:;
    /* $F119: A0 */ nes_cpu_instruction_boundary(0xF119, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_F11B:;
    /* $F11B: 20 */ nes_cpu_instruction_boundary(0xF11B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1D; g_cpu.S--; func_CE84();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF11B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F11E:;
    /* $F11E: F0 */ nes_cpu_instruction_boundary(0xF11E, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F13D; }
label_F120:;
    /* $F120: 20 */ nes_cpu_instruction_boundary(0xF120, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x22; g_cpu.S--; func_F186();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF120, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F123:;
    /* $F123: A2 */ nes_cpu_instruction_boundary(0xF123, 2); g_cpu.X = 0xF0; FLAG_NZ(g_cpu.X);
label_F125:;
    /* $F125: BD */ nes_cpu_instruction_boundary(0xF125, 4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F128:;
    /* $F128: C9 */ nes_cpu_instruction_boundary(0xF128, 2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_F12A:;
    /* $F12A: F0 */ nes_cpu_instruction_boundary(0xF12A, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F130; }
label_F12C:;
    /* $F12C: C9 */ nes_cpu_instruction_boundary(0xF12C, 2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_F12E:;
    /* $F12E: D0 */ nes_cpu_instruction_boundary(0xF12E, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F136; }
label_F130:;
    /* $F130: 20 */ nes_cpu_instruction_boundary(0xF130, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x32; g_cpu.S--; func_DC82();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF130, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F133:;
    /* $F133: 20 */ nes_cpu_instruction_boundary(0xF133, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x35; g_cpu.S--; func_F311();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF133, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F136:;
    /* $F136: 20 */ nes_cpu_instruction_boundary(0xF136, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x38; g_cpu.S--; func_F1F4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF136, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F139:;
    /* $F139: C9 */ nes_cpu_instruction_boundary(0xF139, 2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_F13B:;
    /* $F13B: D0 */ nes_cpu_instruction_boundary(0xF13B, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xF125, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_F125;
    }
label_F13D:; /* GotoSubtractHealth */
    /* $F13D: 4C */ nes_cpu_instruction_boundary(0xF13D, 3); nes_cpu_instruction_boundary(0xCE92, 2); func_CE92(); return;
}

void func_C946(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C946");
#endif
label_C946:;
    /* $C946: 29 */ nes_cpu_instruction_boundary(0xC946, 2); g_cpu.A &= 0xCB; FLAG_NZ(g_cpu.A);
label_C948:;
    /* $C948: AD */ nes_cpu_instruction_boundary(0xC948, 4); g_cpu.A = nes_read(0x0108); FLAG_NZ(g_cpu.A);
label_C94B:;
    /* $C94B: 0D */ nes_cpu_instruction_boundary(0xC94B, 4); g_cpu.A |= nes_read(0x0109); FLAG_NZ(g_cpu.A);
label_C94E:;
    /* $C94E: F0 */ nes_cpu_instruction_boundary(0xC94E, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C95F; }
label_C950:;
    /* $C950: A9 */ nes_cpu_instruction_boundary(0xC950, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C952:;
    /* $C952: 8D */ nes_cpu_instruction_boundary(0xC952, 4); nes_write(0x0108, g_cpu.A);
label_C955:;
    /* $C955: 8D */ nes_cpu_instruction_boundary(0xC955, 4); nes_write(0x0109, g_cpu.A);
label_C958:;
    /* $C958: A9 */ nes_cpu_instruction_boundary(0xC958, 2); g_cpu.A = 0x18; FLAG_NZ(g_cpu.A);
label_C95A:;
    /* $C95A: A2 */ nes_cpu_instruction_boundary(0xC95A, 2); g_cpu.X = 0x03; FLAG_NZ(g_cpu.X);
label_C95C:;
    /* $C95C: 20 */ nes_cpu_instruction_boundary(0xC95C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x5E; g_cpu.S--; func_C4AA();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC95C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C95F:;
    /* $C95F: AD */ nes_cpu_instruction_boundary(0xC95F, 4); g_cpu.A = nes_read(0x0300); FLAG_NZ(g_cpu.A);
label_C962:;
    /* $C962: C9 */ nes_cpu_instruction_boundary(0xC962, 2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_C964:;
    /* $C964: D0 */ nes_cpu_instruction_boundary(0xC964, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xC92A); return; }
label_C966:;
    /* $C966: AD */ nes_cpu_instruction_boundary(0xC966, 4); g_cpu.A = nes_read(0x0304); FLAG_NZ(g_cpu.A);
label_C969:;
    /* $C969: D0 */ nes_cpu_instruction_boundary(0xC969, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xC92A); return; }
label_C96B:;
    /* $C96B: 20 */ nes_cpu_instruction_boundary(0xC96B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6D; g_cpu.S--; func_CB8E();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC96B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C96E:;
    /* $C96E: A5 */ nes_cpu_instruction_boundary(0xC96E, 3); g_cpu.A = nes_read(0x98); FLAG_NZ(g_cpu.A);
label_C970:;
    /* $C970: C9 */ nes_cpu_instruction_boundary(0xC970, 2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_C972:;
    /* $C972: F0 */ nes_cpu_instruction_boundary(0xC972, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C97B; }
label_C974:;
    /* $C974: A9 */ nes_cpu_instruction_boundary(0xC974, 2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_C976:;
    /* $C976: A2 */ nes_cpu_instruction_boundary(0xC976, 2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_C978:;
    /* $C978: 4C */ nes_cpu_instruction_boundary(0xC978, 3); nes_cpu_instruction_boundary(0xC4AA, 2); func_C4AA(); return;
label_C97B:;
    /* $C97B: E6 */ nes_cpu_instruction_boundary(0xC97B, 5); { uint16_t a=0x1E; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C97D:;
    /* $C97D: 60 */ nes_cpu_instruction_boundary(0xC97D, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_FECB(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_FECB");
#endif
label_FECB:;
    /* $FECB: CE */ nes_cpu_instruction_boundary(0xFECB, 6); { uint16_t a=0x03BD; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_FECE:;
    /* $FECE: 05 */ nes_cpu_instruction_boundary(0xFECE, 3); g_cpu.A |= nes_read(0x0A); FLAG_NZ(g_cpu.A);
label_FED0:;
    /* $FED0: A8 */ nes_cpu_instruction_boundary(0xFED0, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_FED1:;
    /* $FED1: B9 */ nes_cpu_instruction_boundary(0xFED1, 4); g_cpu.A = nes_read((0x97AF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FED4:;
    /* $FED4: 85 */ nes_cpu_instruction_boundary(0xFED4, 3); nes_write(0x02, g_cpu.A);
label_FED6:;
    /* $FED6: B9 */ nes_cpu_instruction_boundary(0xFED6, 4); g_cpu.A = nes_read((0x97B0 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FED9:;
    /* $FED9: 85 */ nes_cpu_instruction_boundary(0xFED9, 3); nes_write(0x03, g_cpu.A);
label_FEDB:; /* GetVRAMStringPtr_RTS */
    /* $FEDB: 60 */ nes_cpu_instruction_boundary(0xFEDB, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F2A0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F2A0");
#endif
label_F2A0:;
    /* $F2A0: 96 */ nes_cpu_instruction_boundary(0xF2A0, 4); nes_write((0x29 + g_cpu.Y) & 0xFF, g_cpu.X);
label_F2A2:;
    /* $F2A2: 10 */ nes_cpu_instruction_boundary(0xF2A2, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xF274); return; }
label_F2A4:;
    /* $F2A4: DC */ nes_cpu_instruction_boundary(0xF2A4, 4); (void)nes_read((0x00A0 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F2A7:;
    /* $F2A7: 20 */ nes_cpu_instruction_boundary(0xF2A7, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF2; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA9; g_cpu.S--; func_F338();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF2A7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F2AA:;
    /* $F2AA: 4C */ nes_cpu_instruction_boundary(0xF2AA, 3); nes_cpu_instruction_boundary(0xF306, 2); func_F306(); return;
}

void func_E504(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E504");
#endif
label_E504:;
    /* $E504: 0C */ nes_cpu_instruction_boundary(0xE504, 4); (void)nes_read(0x4FC6); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E507:;
    /* $E507: 20 */ nes_cpu_instruction_boundary(0xE507, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x09; g_cpu.S--; func_E720();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE507, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E50A:;
    /* $E50A: B0 */ nes_cpu_instruction_boundary(0xE50A, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_E515; }
label_E50C:;
    /* $E50C: 20 */ nes_cpu_instruction_boundary(0xE50C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0E; g_cpu.S--; func_E9B7();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE50C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E50F:;
    /* $E50F: A2 */ nes_cpu_instruction_boundary(0xE50F, 2); g_cpu.X = 0xF0; FLAG_NZ(g_cpu.X);
label_E511:; /* ScrollUp_noNewRoom */
    /* $E511: CA */ nes_cpu_instruction_boundary(0xE511, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_E512:;
    /* $E512: 4C */ nes_cpu_instruction_boundary(0xE512, 3); nes_cpu_instruction_boundary(0xE53F, 2); func_E53F(); return;
label_E515:; /* ScrollUp_atTopBound */
    /* $E515: E6 */ nes_cpu_instruction_boundary(0xE515, 5); { uint16_t a=0x4F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E517:; /* ScrollUp_cantScroll */
    /* $E517: 38 */ nes_cpu_instruction_boundary(0xE517, 2); g_cpu.C = 1;
label_E518:;
    /* $E518: 60 */ nes_cpu_instruction_boundary(0xE518, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E130(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E130");
#endif
label_E130:;
    /* $E130: 20 */ nes_cpu_instruction_boundary(0xE130, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x32; g_cpu.S--; func_C2BF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE130, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E133:;
    /* $E133: 20 */ nes_cpu_instruction_boundary(0xE133, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x35; g_cpu.S--; func_E173();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE133, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E136:;
    /* $E136: A9 */ nes_cpu_instruction_boundary(0xE136, 2); g_cpu.A = 0x58; FLAG_NZ(g_cpu.A);
label_E138:;
    /* $E138: 9D */ nes_cpu_instruction_boundary(0xE138, 5); nes_write((0x0201 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_E13B:;
    /* $E13B: FE */ nes_cpu_instruction_boundary(0xE13B, 7); { uint16_t a=(0x0202 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E13E:;
    /* $E13E: E0 */ nes_cpu_instruction_boundary(0xE13E, 2); { int r=g_cpu.X-0xFC; g_cpu.C=(g_cpu.X>=0xFC)?1:0; FLAG_NZ(r&0xFF); }
label_E140:;
    /* $E140: B0 */ nes_cpu_instruction_boundary(0xE140, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_E14A; }
label_E142:;
    /* $E142: A9 */ nes_cpu_instruction_boundary(0xE142, 2); g_cpu.A = 0x59; FLAG_NZ(g_cpu.A);
label_E144:;
    /* $E144: 9D */ nes_cpu_instruction_boundary(0xE144, 5); nes_write((0x0205 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_E147:;
    /* $E147: FE */ nes_cpu_instruction_boundary(0xE147, 7); { uint16_t a=(0x0206 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E14A:;
    /* $E14A: A6 */ nes_cpu_instruction_boundary(0xE14A, 3); g_cpu.X = nes_read(0x5B); FLAG_NZ(g_cpu.X);
label_E14C:;
    /* $E14C: AD */ nes_cpu_instruction_boundary(0xE14C, 4); g_cpu.A = nes_read(0x6877); FLAG_NZ(g_cpu.A);
label_E14F:;
    /* $E14F: F0 */ nes_cpu_instruction_boundary(0xE14F, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E172; }
label_E151:;
    /* $E151: 85 */ nes_cpu_instruction_boundary(0xE151, 3); nes_write(0x03, g_cpu.A);
label_E153:;
    /* $E153: A9 */ nes_cpu_instruction_boundary(0xE153, 2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_E155:;
    /* $E155: 85 */ nes_cpu_instruction_boundary(0xE155, 3); nes_write(0x00, g_cpu.A);
label_E157:;
    /* $E157: A0 */ nes_cpu_instruction_boundary(0xE157, 2); g_cpu.Y = 0x6F; FLAG_NZ(g_cpu.Y);
label_E159:;
    /* $E159: AD */ nes_cpu_instruction_boundary(0xE159, 4); g_cpu.A = nes_read(0x0107); FLAG_NZ(g_cpu.A);
label_E15C:;
    /* $E15C: 20 */ nes_cpu_instruction_boundary(0xE15C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x5E; g_cpu.S--; func_C2BF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE15C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E15F:;
    /* $E15F: 85 */ nes_cpu_instruction_boundary(0xE15F, 3); nes_write(0x01, g_cpu.A);
label_E161:;
    /* $E161: D0 */ nes_cpu_instruction_boundary(0xE161, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E164; }
label_E163:;
    /* $E163: 88 */ nes_cpu_instruction_boundary(0xE163, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E164:; /* AddTanks */
    /* $E164: 20 */ nes_cpu_instruction_boundary(0xE164, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x66; g_cpu.S--; func_E17B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE164, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E167:;
    /* $E167: C6 */ nes_cpu_instruction_boundary(0xE167, 5); { uint16_t a=0x01; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E169:;
    /* $E169: D0 */ nes_cpu_instruction_boundary(0xE169, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E16C; }
label_E16B:;
    /* $E16B: 88 */ nes_cpu_instruction_boundary(0xE16B, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E16C:;
    /* $E16C: C6 */ nes_cpu_instruction_boundary(0xE16C, 5); { uint16_t a=0x03; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E16E:;
    /* $E16E: D0 */ nes_cpu_instruction_boundary(0xE16E, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xE164, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_E164;
    }
label_E170:;
    /* $E170: 86 */ nes_cpu_instruction_boundary(0xE170, 3); nes_write(0x5B, g_cpu.X);
label_E172:;
    /* $E172: 60 */ nes_cpu_instruction_boundary(0xE172, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_FCBD(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_FCBD");
#endif
label_FCBD:;
    /* $FCBD: B0 */ nes_cpu_instruction_boundary(0xFCBD, 2); if (g_cpu.C) { maybe_trigger_vblank(2); call_by_address(0xFD0B); return; }
label_FCBF:;
    /* $FCBF: B0 */ nes_cpu_instruction_boundary(0xFCBF, 2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xFC8C); return; }
label_FCC1:; /* UpdateMellow_RunAI */
    /* $FCC1: 20 */ nes_cpu_instruction_boundary(0xFCC1, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC3; g_cpu.S--; func_FD5F();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFCC1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FCC4:;
    /* $FCC4: B5 */ nes_cpu_instruction_boundary(0xFCC4, 4); g_cpu.A = nes_read((0xB4 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_FCC6:;
    /* $FCC6: C9 */ nes_cpu_instruction_boundary(0xFCC6, 2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_FCC8:;
    /* $FCC8: B0 */ nes_cpu_instruction_boundary(0xFCC8, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_FCD5; }
label_FCCA:;
    /* $FCCA: A4 */ nes_cpu_instruction_boundary(0xFCCA, 3); g_cpu.Y = nes_read(0x08); FLAG_NZ(g_cpu.Y);
label_FCCC:;
    /* $FCCC: CC */ nes_cpu_instruction_boundary(0xFCCC, 4); { uint8_t m=nes_read(0x030D); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_FCCF:;
    /* $FCCF: 90 */ nes_cpu_instruction_boundary(0xFCCF, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_FCD5; }
label_FCD1:;
    /* $FCD1: 09 */ nes_cpu_instruction_boundary(0xFCD1, 2); g_cpu.A |= 0x02; FLAG_NZ(g_cpu.A);
label_FCD3:;
    /* $FCD3: 95 */ nes_cpu_instruction_boundary(0xFCD3, 4); nes_write((0xB4 + g_cpu.X) & 0xFF, g_cpu.A);
label_FCD5:;
    /* $FCD5: A0 */ nes_cpu_instruction_boundary(0xFCD5, 2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_FCD7:;
    /* $FCD7: B5 */ nes_cpu_instruction_boundary(0xFCD7, 4); g_cpu.A = nes_read((0xB4 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_FCD9:;
    /* $FCD9: 4A */ nes_cpu_instruction_boundary(0xFCD9, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_FCDA:;
    /* $FCDA: 90 */ nes_cpu_instruction_boundary(0xFCDA, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_FCDE; }
label_FCDC:;
    /* $FCDC: A0 */ nes_cpu_instruction_boundary(0xFCDC, 2); g_cpu.Y = 0xFF; FLAG_NZ(g_cpu.Y);
label_FCDE:;
    /* $FCDE: 84 */ nes_cpu_instruction_boundary(0xFCDE, 3); nes_write(0x05, g_cpu.Y);
label_FCE0:;
    /* $FCE0: A0 */ nes_cpu_instruction_boundary(0xFCE0, 2); g_cpu.Y = 0x04; FLAG_NZ(g_cpu.Y);
label_FCE2:;
    /* $FCE2: 4A */ nes_cpu_instruction_boundary(0xFCE2, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_FCE3:;
    /* $FCE3: B5 */ nes_cpu_instruction_boundary(0xFCE3, 4); g_cpu.A = nes_read((0xB5 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_FCE5:;
    /* $FCE5: 90 */ nes_cpu_instruction_boundary(0xFCE5, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_FCE9; }
label_FCE7:;
    /* $FCE7: A0 */ nes_cpu_instruction_boundary(0xFCE7, 2); g_cpu.Y = 0xFD; FLAG_NZ(g_cpu.Y);
label_FCE9:;
    /* $FCE9: 84 */ nes_cpu_instruction_boundary(0xFCE9, 3); nes_write(0x04, g_cpu.Y);
label_FCEB:;
    /* $FCEB: F6 */ nes_cpu_instruction_boundary(0xFCEB, 6); { uint16_t a=(0xB5 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_FCED:;
    /* $FCED: 20 */ nes_cpu_instruction_boundary(0xFCED, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xEF; g_cpu.S--; func_FD8F();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFCED, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FCF0:;
    /* $FCF0: B0 */ nes_cpu_instruction_boundary(0xFCF0, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_FCF8; }
label_FCF2:;
    /* $FCF2: B5 */ nes_cpu_instruction_boundary(0xFCF2, 4); g_cpu.A = nes_read((0xB4 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_FCF4:;
    /* $FCF4: 09 */ nes_cpu_instruction_boundary(0xFCF4, 2); g_cpu.A |= 0x02; FLAG_NZ(g_cpu.A);
label_FCF6:;
    /* $FCF6: 95 */ nes_cpu_instruction_boundary(0xFCF6, 4); nes_write((0xB4 + g_cpu.X) & 0xFF, g_cpu.A);
label_FCF8:;
    /* $FCF8: 90 */ nes_cpu_instruction_boundary(0xFCF8, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_FCFD; }
label_FCFA:;
    /* $FCFA: 20 */ nes_cpu_instruction_boundary(0xFCFA, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFC; g_cpu.S--; func_FD6C();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFCFA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FCFD:;
    /* $FCFD: B5 */ nes_cpu_instruction_boundary(0xFCFD, 4); g_cpu.A = nes_read((0xB5 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_FCFF:;
    /* $FCFF: C9 */ nes_cpu_instruction_boundary(0xFCFF, 2); { int r=g_cpu.A-0x50; g_cpu.C=(g_cpu.A>=0x50)?1:0; FLAG_NZ(r&0xFF); }
label_FD01:;
    /* $FD01: 90 */ nes_cpu_instruction_boundary(0xFD01, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_FD07; }
label_FD03:;
    /* $FD03: A9 */ nes_cpu_instruction_boundary(0xFD03, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_FD05:;
    /* $FD05: 95 */ nes_cpu_instruction_boundary(0xFD05, 4); nes_write((0xB0 + g_cpu.X) & 0xFF, g_cpu.A);
label_FD07:; /* RTS_X397 */
    /* $FD07: 60 */ nes_cpu_instruction_boundary(0xFD07, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_FD08:; return;
label_FD0A:; return;
label_FD0C:; return;
label_FD0D:; return;
label_FD10:; return;
label_FD11:; return;
label_FD13:; return;
label_FD15:; return;
label_FD16:; return;
label_FD19:; return;
label_FD1B:; return;
label_FD1D:; return;
label_FD1E:; return;
label_FD20:; return;
label_FD22:; return;
label_FD24:; return;
label_FD25:; return;
label_FD26:; return;
label_FD27:; return;
label_FD28:; return;
label_FD29:; return;
label_FD2B:; return;
label_FD2D:; return;
label_FD2F:; return;
label_FD31:; return;
label_FD32:; return;
label_FD35:; return;
label_FD37:; return;
label_FD3A:; return;
label_FD3C:; return;
label_FD3F:; return;
label_FD41:; return;
label_FD42:; return;
label_FD44:; return;
label_FD45:; return;
label_FD47:; return;
label_FD49:; return;
label_FD4B:; return;
label_FD4E:; return;
label_FD50:; return;
label_FD52:; return;
label_FD54:; return;
label_FD57:; return;
label_FD5A:; return;
label_FD5B:; return;
label_FD5E:; return;
label_FD5F:; return;
label_FD61:; return;
label_FD63:; return;
label_FD65:; return;
label_FD67:; return;
label_FD69:; return;
label_FD6B:; return;
label_FD6C:; return;
label_FD6E:; return;
label_FD70:; return;
label_FD73:; return;
label_FD75:; return;
label_FD77:; return;
label_FD7A:; return;
label_FD7C:; return;
label_FD7E:; return;
label_FD80:; return;
label_FD83:; return;
label_FD84:; return;
label_FD86:; return;
label_FD88:; return;
label_FD8A:; return;
label_FD8C:; return;
label_FD8E:; return;
label_FD8F:; return;
label_FD91:; return;
label_FD93:; return;
label_FD95:; return;
label_FD97:; return;
label_FD98:; return;
label_FD9A:; return;
label_FD9C:; return;
label_FD9E:; return;
label_FDA0:; return;
label_FDA2:; return;
label_FDA4:; return;
label_FDA6:; return;
label_FDA8:; return;
label_FDAA:; return;
label_FDAC:; return;
label_FDAE:; return;
label_FDB1:; return;
label_FDB3:; return;
label_FDB5:; return;
label_FDB7:; return;
label_FDB9:; return;
label_FDBB:; return;
label_FDBD:; return;
label_FDBF:; return;
label_FDC1:; return;
label_FDC2:; return;
label_FDC4:; return;
label_FDC6:; return;
label_FDC8:; return;
label_FDCA:; return;
label_FDCC:; return;
label_FDCE:; return;
label_FDD0:; return;
label_FDD3:; return;
label_FDD5:; return;
label_FDD7:; return;
label_FDD9:; return;
label_FDDB:; return;
label_FDDD:; return;
label_FDDF:; return;
label_FDE0:; return;
label_FDE1:; return;
label_FDE2:; return;
label_FDE3:; return;
label_FDE6:; return;
label_FDE8:; return;
label_FDEA:; return;
label_FDEB:; return;
label_FDEE:; return;
label_FDF0:; return;
label_FDF2:; return;
label_FDF4:; return;
label_FDF6:; return;
label_FDF9:; return;
label_FDFB:; return;
label_FDFE:; return;
label_FDFF:; return;
label_FE00:; return;
label_FE02:; return;
label_FE03:; return;
label_FE05:; return;
label_FE08:; return;
label_FE09:; return;
label_FE0B:; return;
label_FE0D:; return;
label_FE0F:; return;
label_FE12:; return;
label_FE13:; return;
label_FE14:; return;
label_FE16:; return;
label_FE18:; return;
label_FE1B:; return;
label_FE1D:; return;
label_FE20:; return;
label_FE22:; return;
label_FE25:; return;
label_FE27:; return;
label_FE29:; return;
label_FE2C:; return;
label_FE2E:; return;
label_FE3D:; return;
label_FE40:; return;
label_FE42:; return;
label_FE45:; return;
label_FE47:; return;
label_FE4A:; return;
label_FE4D:; return;
label_FE4F:; return;
label_FE52:; return;
label_FE54:; return;
label_FE56:; return;
label_FE78:; return;
label_FE79:; return;
label_FE7A:; return;
label_FE7D:; return;
label_FE7F:; return;
label_FE82:; return;
label_FE84:; return;
label_FE85:; return;
label_FE88:; return;
label_FE8B:; return;
label_FE8C:; return;
label_FE8E:; return;
label_FE90:; return;
label_FE93:; return;
label_FE95:; return;
label_FE98:; return;
label_FE9A:; return;
label_FE9C:; return;
label_FE9E:; return;
label_FEA0:; return;
label_FEA2:; return;
label_FEA3:; return;
label_FEA4:; return;
label_FEA6:; return;
label_FEA8:; return;
label_FEAA:; return;
label_FEAD:; return;
label_FEAF:; return;
label_FEB0:; return;
label_FEB3:; return;
label_FEB5:; return;
label_FEB7:; return;
label_FEB8:; return;
label_FEBB:; return;
label_FEBD:; return;
label_FEC0:; return;
label_FEC2:; return;
label_FEC5:; return;
label_FEC7:; return;
label_FEC9:; return;
label_FEDB:; return;
label_FEDC:; return;
label_FEDF:; return;
label_FEE1:; return;
label_FEE3:; return;
label_FEE5:; return;
label_FEE8:; return;
label_FEEA:; return;
label_FEED:; return;
label_FEEF:; return;
label_FEF2:; return;
label_FEF4:; return;
label_FEF6:; return;
label_FEF8:; return;
label_FEF9:; return;
label_FEFC:; return;
label_FEFE:; return;
label_FEFF:; return;
label_FF01:; return;
label_FF03:; return;
label_FF04:; return;
label_FF06:; return;
label_FF08:; return;
label_FF0A:; return;
label_FF0C:; return;
label_FF0E:; return;
label_FF10:; return;
label_FF12:; return;
label_FF14:; return;
label_FF15:; return;
label_FF17:; return;
label_FF19:; return;
label_FF1A:; return;
label_FF1C:; return;
label_FF1D:; return;
label_FF1F:; return;
label_FF21:; return;
label_FF23:; return;
label_FF25:; return;
label_FF27:; return;
label_FF29:; return;
label_FF2B:; return;
label_FF2D:; return;
label_FF2F:; return;
label_FF31:; return;
label_FF33:; return;
label_FF35:; return;
label_FF37:; return;
label_FF3A:; return;
label_FF3B:; return;
label_FF3C:; return;
label_FF3E:; return;
label_FF3F:; return;
label_FF41:; return;
label_FF43:; return;
label_FF45:; return;
label_FF46:; return;
label_FF48:; return;
label_FF49:; return;
label_FF4B:; return;
label_FF4C:; return;
label_FF4E:; return;
label_FF51:; return;
label_FF53:; return;
label_FF54:; return;
label_FF56:; return;
label_FF59:; return;
label_FF5B:; return;
label_FF5E:; return;
label_FF60:; return;
label_FF63:; return;
label_FF66:; return;
label_FF69:; return;
label_FF6B:; return;
label_FF6D:; return;
label_FF70:; return;
label_FF71:; return;
label_FF72:; return;
label_FF75:; return;
label_FF78:; return;
label_FF7A:; return;
label_FF7C:; return;
label_FF7F:; return;
label_FF80:; return;
label_FF83:; return;
label_FF84:; return;
label_FF85:; return;
label_FF86:; return;
label_FF88:; return;
label_FF89:; return;
label_FF8C:; return;
label_FF8E:; return;
label_FF90:; return;
label_FF91:; return;
label_FF94:; return;
label_FF96:; return;
label_FF98:; return;
label_FF9A:; return;
label_FF9C:; return;
label_FF9E:; return;
label_FFA0:; return;
label_FFA2:; return;
label_FFA4:; return;
label_FFA5:; return;
label_FFA8:; return;
label_FFAA:; return;
label_FFAC:; return;
label_FFAD:; return;
label_FFB0:; return;
label_FFB1:; return;
label_FFB2:; return;
label_FFB4:; return;
label_FFB7:; return;
label_FFBA:; return;
label_FFBD:; return;
label_FFBF:; return;
label_FFC2:; return;
label_FFC4:; return;
label_FFC6:; return;
label_FFC9:; return;
label_FFCC:; return;
label_FFCF:; return;
label_FFD2:; return;
label_FFD5:; return;
label_FFD8:; return;
label_FFDB:; return;
label_FFDE:; return;
label_FFE1:; return;
label_FFE4:; return;
label_FFE7:; return;
label_FFEA:; return;
label_FFEC:; return;
label_FFED:; return;
label_FFF0:; return;
label_FFF2:; return;
label_FFF3:; return;
label_FFF4:; return;
label_FFF5:; return;
label_FFF7:; return;
label_FFF9:; return;
label_FFFC:; return;
label_FFFE:; return;
}

void func_FC9D(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_FC9D");
#endif
label_FC9D:;
    /* $FC9D: 5C */ nes_cpu_instruction_boundary(0xFC9D, 4); (void)nes_read((0xA5C4 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_FCA0:;
    /* $FCA0: FC */ nes_cpu_instruction_boundary(0xFCA0, 4); (void)nes_read((0xFCB1 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_FCA3:;
    /* $FCA3: BA */ nes_cpu_instruction_boundary(0xFCA3, 2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_FCA4:;
    /* $FCA4: FC */ nes_cpu_instruction_boundary(0xFCA4, 4); (void)nes_read((0x8420 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_FCA7:;
    /* $FCA7: FD */ nes_cpu_instruction_boundary(0xFCA7, 4); { uint8_t m=nes_read((0x0820 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_FCAA:;
    /* $FCAA: FD */ nes_cpu_instruction_boundary(0xFCAA, 4); { uint8_t m=nes_read((0x2520 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_FCAD:;
    /* $FCAD: FD */ nes_cpu_instruction_boundary(0xFCAD, 4); { uint8_t m=nes_read((0x8B4C + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_FCB0:;
    /* $FCB0: DD */ nes_cpu_instruction_boundary(0xFCB0, 4); { uint8_t m=nes_read((0x8420 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_FCB3:;
    /* $FCB3: FD */ nes_cpu_instruction_boundary(0xFCB3, 4); { uint8_t m=nes_read((0xC120 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_FCB6:;
    /* $FCB6: FC */ nes_cpu_instruction_boundary(0xFCB6, 4); (void)nes_read((0x8B4C + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_FCB9:;
    /* $FCB9: DD */ nes_cpu_instruction_boundary(0xFCB9, 4); { uint8_t m=nes_read((0x00A9 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_FCBC:;
    /* $FCBC: 95 */ nes_cpu_instruction_boundary(0xFCBC, 4); nes_write((0xB0 + g_cpu.X) & 0xFF, g_cpu.A);
label_FCBE:;
    /* $FCBE: 4C */ nes_cpu_instruction_boundary(0xFCBE, 3); nes_cpu_instruction_boundary(0xCBB0, 2); func_CBB0(); return;
}

void func_FF7D(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_FF7D");
#endif
label_FF7D:;
    /* $FF7D: 06 */ nes_cpu_instruction_boundary(0xFF7D, 5); { uint16_t a=0x05; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_FF7F:; /* UpdateTileBlastAnim_RTS */
    /* $FF7F: 60 */ nes_cpu_instruction_boundary(0xFF7F, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_FFBC(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_FFBC");
#endif
label_FFBC:;
    /* $FFBC: 20 */ nes_cpu_instruction_boundary(0xFFBC, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFF; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBE; g_cpu.S--; func_FB10();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFFBC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FFBF:; /* ROMFIXED_RESET_WaitForVBlank2 */
    /* $FFBF: AD */ nes_cpu_instruction_boundary(0xFFBF, 4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_FFC2:;
    /* $FFC2: 10 */ nes_cpu_instruction_boundary(0xFFC2, 2); if (!g_cpu.N) {
    nes_cpu_instruction_boundary(0xFFBF, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_FFBF;
    }
label_FFC4:;
    /* $FFC4: 09 */ nes_cpu_instruction_boundary(0xFFC4, 2); g_cpu.A |= 0xFF; FLAG_NZ(g_cpu.A);
label_FFC6:;
    /* $FFC6: 8D */ nes_cpu_instruction_boundary(0xFFC6, 4); nes_write(0x8000, g_cpu.A);
label_FFC9:;
    /* $FFC9: 8D */ nes_cpu_instruction_boundary(0xFFC9, 4); nes_write(0xA000, g_cpu.A);
label_FFCC:;
    /* $FFCC: 8D */ nes_cpu_instruction_boundary(0xFFCC, 4); nes_write(0xC000, g_cpu.A);
label_FFCF:;
    /* $FFCF: 8D */ nes_cpu_instruction_boundary(0xFFCF, 4); nes_write(0xE000, g_cpu.A);
label_FFD2:;
    /* $FFD2: 4C */ nes_cpu_instruction_boundary(0xFFD2, 3); nes_cpu_instruction_boundary(0xC01A, 2); func_C01A(); return;
}

void func_C504(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C504");
#endif
label_C504:;
    /* $C504: E0 */ nes_cpu_instruction_boundary(0xC504, 2); { int r=g_cpu.X-0x4A; g_cpu.C=(g_cpu.X>=0x4A)?1:0; FLAG_NZ(r&0xFF); }
label_C506:;
    /* $C506: 8D */ nes_cpu_instruction_boundary(0xC506, 4); nes_write(0xE000, g_cpu.A);
label_C509:;
    /* $C509: 4A */ nes_cpu_instruction_boundary(0xC509, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_C50A:;
    /* $C50A: 8D */ nes_cpu_instruction_boundary(0xC50A, 4); nes_write(0xE000, g_cpu.A);
label_C50D:;
    /* $C50D: A5 */ nes_cpu_instruction_boundary(0xC50D, 3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_C50F:;
    /* $C50F: 60 */ nes_cpu_instruction_boundary(0xC50F, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_FD9D(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_FD9D");
#endif
label_FD9D:;
    /* $FD9D: 08 */ nes_cpu_instruction_boundary(0xFD9D, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_FD9E:;
    /* $FD9E: B0 */ nes_cpu_instruction_boundary(0xFD9E, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_FDA4; }
label_FDA0:;
    /* $FDA0: C9 */ nes_cpu_instruction_boundary(0xFDA0, 2); { int r=g_cpu.A-0xF0; g_cpu.C=(g_cpu.A>=0xF0)?1:0; FLAG_NZ(r&0xFF); }
label_FDA2:;
    /* $FDA2: 90 */ nes_cpu_instruction_boundary(0xFDA2, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_FDAC; }
label_FDA4:; /* ApplySpeedToPosition_then_B */
    /* $FDA4: 69 */ nes_cpu_instruction_boundary(0xFDA4, 2); { uint16_t r = g_cpu.A + 0x0F + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0F); g_cpu.A=r&0xFF; }
label_FDA6:;
    /* $FDA6: A4 */ nes_cpu_instruction_boundary(0xFDA6, 3); g_cpu.Y = nes_read(0x02); FLAG_NZ(g_cpu.Y);
label_FDA8:;
    /* $FDA8: D0 */ nes_cpu_instruction_boundary(0xFDA8, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_FDE1; }
label_FDAA:;
    /* $FDAA: E6 */ nes_cpu_instruction_boundary(0xFDAA, 5); { uint16_t a=0x0B; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_FDAC:; /* ApplySpeedToPosition_endIf_B */
    /* $FDAC: 85 */ nes_cpu_instruction_boundary(0xFDAC, 3); nes_write(0x08, g_cpu.A);
label_FDAE:;
    /* $FDAE: 4C */ nes_cpu_instruction_boundary(0xFDAE, 3); nes_cpu_instruction_boundary(0xFDBF, 2); func_FDBF(); return;
label_FDE1:; /* ApplySpeedToPosition_exit_failure */
    /* $FDE1: 18 */ nes_cpu_instruction_boundary(0xFDE1, 2); g_cpu.C = 0;
label_FDE2:; /* RTS_X410 */
    /* $FDE2: 60 */ nes_cpu_instruction_boundary(0xFDE2, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E642(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E642");
#endif
label_E642:;
    /* $E642: 20 */ nes_cpu_instruction_boundary(0xE642, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x44; g_cpu.S--; if (!nes_dispatch_call(0x51A5, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE642, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E645:;
    /* $E645: C9 */ nes_cpu_instruction_boundary(0xE645, 2); { int r=g_cpu.A-0x71; g_cpu.C=(g_cpu.A>=0x71)?1:0; FLAG_NZ(r&0xFF); }
label_E647:;
    /* $E647: B0 */ nes_cpu_instruction_boundary(0xE647, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_E64E; }
label_E649:;
    /* $E649: 20 */ nes_cpu_instruction_boundary(0xE649, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x4B; g_cpu.S--; func_E6A7();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE649, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E64C:;
    /* $E64C: 90 */ nes_cpu_instruction_boundary(0xE64C, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_E650; }
label_E64E:;
    /* $E64E: C6 */ nes_cpu_instruction_boundary(0xE64E, 5); { uint16_t a=0x51; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E650:;
    /* $E650: AD */ nes_cpu_instruction_boundary(0xE650, 4); g_cpu.A = nes_read(0x030E); FLAG_NZ(g_cpu.A);
label_E653:;
    /* $E653: D0 */ nes_cpu_instruction_boundary(0xE653, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E65E; }
label_E655:;
    /* $E655: A5 */ nes_cpu_instruction_boundary(0xE655, 3); g_cpu.A = nes_read(0x49); FLAG_NZ(g_cpu.A);
label_E657:;
    /* $E657: 29 */ nes_cpu_instruction_boundary(0xE657, 2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_E659:;
    /* $E659: F0 */ nes_cpu_instruction_boundary(0xE659, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E65E; }
label_E65B:;
    /* $E65B: 20 */ nes_cpu_instruction_boundary(0xE65B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x5D; g_cpu.S--; func_E249();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE65B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E65E:;
    /* $E65E: CE */ nes_cpu_instruction_boundary(0xE65E, 6); { uint16_t a=0x030E; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E661:;
    /* $E661: 38 */ nes_cpu_instruction_boundary(0xE661, 2); g_cpu.C = 1;
label_E662:;
    /* $E662: 60 */ nes_cpu_instruction_boundary(0xE662, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E63D(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E63D");
#endif
label_E63D:;
    /* $E63D: 41 */ nes_cpu_instruction_boundary(0xE63D, 6); g_cpu.A ^= nes_read(nes_read16zp((0xC9 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_E63F:;
    /* $E63F: 41 */ nes_cpu_instruction_boundary(0xE63F, 6); g_cpu.A ^= nes_read(nes_read16zp((0x18 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_E641:;
    /* $E641: F0 */ nes_cpu_instruction_boundary(0xE641, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E663; }
label_E643:;
    /* $E643: A5 */ nes_cpu_instruction_boundary(0xE643, 3); g_cpu.A = nes_read(0x51); FLAG_NZ(g_cpu.A);
label_E645:;
    /* $E645: C9 */ nes_cpu_instruction_boundary(0xE645, 2); { int r=g_cpu.A-0x71; g_cpu.C=(g_cpu.A>=0x71)?1:0; FLAG_NZ(r&0xFF); }
label_E647:;
    /* $E647: B0 */ nes_cpu_instruction_boundary(0xE647, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_E64E; }
label_E649:;
    /* $E649: 20 */ nes_cpu_instruction_boundary(0xE649, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x4B; g_cpu.S--; func_E6A7();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE649, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E64C:;
    /* $E64C: 90 */ nes_cpu_instruction_boundary(0xE64C, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_E650; }
label_E64E:;
    /* $E64E: C6 */ nes_cpu_instruction_boundary(0xE64E, 5); { uint16_t a=0x51; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E650:;
    /* $E650: AD */ nes_cpu_instruction_boundary(0xE650, 4); g_cpu.A = nes_read(0x030E); FLAG_NZ(g_cpu.A);
label_E653:;
    /* $E653: D0 */ nes_cpu_instruction_boundary(0xE653, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E65E; }
label_E655:;
    /* $E655: A5 */ nes_cpu_instruction_boundary(0xE655, 3); g_cpu.A = nes_read(0x49); FLAG_NZ(g_cpu.A);
label_E657:;
    /* $E657: 29 */ nes_cpu_instruction_boundary(0xE657, 2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_E659:;
    /* $E659: F0 */ nes_cpu_instruction_boundary(0xE659, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E65E; }
label_E65B:;
    /* $E65B: 20 */ nes_cpu_instruction_boundary(0xE65B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x5D; g_cpu.S--; func_E249();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE65B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E65E:;
    /* $E65E: CE */ nes_cpu_instruction_boundary(0xE65E, 6); { uint16_t a=0x030E; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E661:;
    /* $E661: 38 */ nes_cpu_instruction_boundary(0xE661, 2); g_cpu.C = 1;
label_E662:;
    /* $E662: 60 */ nes_cpu_instruction_boundary(0xE662, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_E663:;
    /* $E663: A9 */ nes_cpu_instruction_boundary(0xE663, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E665:;
    /* $E665: 85 */ nes_cpu_instruction_boundary(0xE665, 3); nes_write(0x58, g_cpu.A);
label_E667:;
    /* $E667: 60 */ nes_cpu_instruction_boundary(0xE667, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_DE17(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DE17");
#endif
label_DE17:;
    /* $DE17: 09 */ nes_cpu_instruction_boundary(0xDE17, 2); g_cpu.A |= 0xC8; FLAG_NZ(g_cpu.A);
label_DE19:;
    /* $DE19: 84 */ nes_cpu_instruction_boundary(0xDE19, 3); nes_write(0x11, g_cpu.Y);
label_DE1B:;
    /* $DE1B: 20 */ nes_cpu_instruction_boundary(0xDE1B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xDE; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1D; g_cpu.S--; func_DFDF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDE1B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DE1E:;
    /* $DE1E: 8A */ nes_cpu_instruction_boundary(0xDE1E, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_DE1F:;
    /* $DE1F: 0A */ nes_cpu_instruction_boundary(0xDE1F, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_DE20:;
    /* $DE20: 85 */ nes_cpu_instruction_boundary(0xDE20, 3); nes_write(0x08, g_cpu.A);
label_DE22:;
    /* $DE22: A6 */ nes_cpu_instruction_boundary(0xDE22, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_DE24:;
    /* $DE24: BD */ nes_cpu_instruction_boundary(0xDE24, 4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DE27:;
    /* $DE27: 29 */ nes_cpu_instruction_boundary(0xDE27, 2); g_cpu.A &= 0xFD; FLAG_NZ(g_cpu.A);
label_DE29:;
    /* $DE29: 05 */ nes_cpu_instruction_boundary(0xDE29, 3); g_cpu.A |= nes_read(0x08); FLAG_NZ(g_cpu.A);
label_DE2B:;
    /* $DE2B: 9D */ nes_cpu_instruction_boundary(0xDE2B, 5); nes_write((0x0405 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DE2E:;
    /* $DE2E: A5 */ nes_cpu_instruction_boundary(0xDE2E, 3); g_cpu.A = nes_read(0x08); FLAG_NZ(g_cpu.A);
label_DE30:;
    /* $DE30: F0 */ nes_cpu_instruction_boundary(0xDE30, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DE53; }
label_DE32:;
    /* $DE32: 4C */ nes_cpu_instruction_boundary(0xDE32, 3); nes_cpu_instruction_boundary(0xDEDE, 2); func_DEDE(); return;
label_DE53:; /* GotoClearObjectCntrl */
    /* $DE53: 4C */ nes_cpu_instruction_boundary(0xDE53, 3); nes_cpu_instruction_boundary(0xDF2D, 2); func_DF2D(); return;
}

void func_C944(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C944");
#endif
label_C944:;
    /* $C944: 68 */ nes_cpu_instruction_boundary(0xC944, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_C945:;
    /* $C945: 20 */ nes_cpu_instruction_boundary(0xC945, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x47; g_cpu.S--; func_CB29();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC945, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C948:;
    /* $C948: AD */ nes_cpu_instruction_boundary(0xC948, 4); g_cpu.A = nes_read(0x0108); FLAG_NZ(g_cpu.A);
label_C94B:;
    /* $C94B: 0D */ nes_cpu_instruction_boundary(0xC94B, 4); g_cpu.A |= nes_read(0x0109); FLAG_NZ(g_cpu.A);
label_C94E:;
    /* $C94E: F0 */ nes_cpu_instruction_boundary(0xC94E, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C95F; }
label_C950:;
    /* $C950: A9 */ nes_cpu_instruction_boundary(0xC950, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C952:;
    /* $C952: 8D */ nes_cpu_instruction_boundary(0xC952, 4); nes_write(0x0108, g_cpu.A);
label_C955:;
    /* $C955: 8D */ nes_cpu_instruction_boundary(0xC955, 4); nes_write(0x0109, g_cpu.A);
label_C958:;
    /* $C958: A9 */ nes_cpu_instruction_boundary(0xC958, 2); g_cpu.A = 0x18; FLAG_NZ(g_cpu.A);
label_C95A:;
    /* $C95A: A2 */ nes_cpu_instruction_boundary(0xC95A, 2); g_cpu.X = 0x03; FLAG_NZ(g_cpu.X);
label_C95C:;
    /* $C95C: 20 */ nes_cpu_instruction_boundary(0xC95C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x5E; g_cpu.S--; func_C4AA();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC95C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C95F:;
    /* $C95F: AD */ nes_cpu_instruction_boundary(0xC95F, 4); g_cpu.A = nes_read(0x0300); FLAG_NZ(g_cpu.A);
label_C962:;
    /* $C962: C9 */ nes_cpu_instruction_boundary(0xC962, 2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_C964:;
    /* $C964: D0 */ nes_cpu_instruction_boundary(0xC964, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xC92A); return; }
label_C966:;
    /* $C966: AD */ nes_cpu_instruction_boundary(0xC966, 4); g_cpu.A = nes_read(0x0304); FLAG_NZ(g_cpu.A);
label_C969:;
    /* $C969: D0 */ nes_cpu_instruction_boundary(0xC969, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xC92A); return; }
label_C96B:;
    /* $C96B: 20 */ nes_cpu_instruction_boundary(0xC96B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6D; g_cpu.S--; func_CB8E();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC96B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C96E:;
    /* $C96E: A5 */ nes_cpu_instruction_boundary(0xC96E, 3); g_cpu.A = nes_read(0x98); FLAG_NZ(g_cpu.A);
label_C970:;
    /* $C970: C9 */ nes_cpu_instruction_boundary(0xC970, 2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_C972:;
    /* $C972: F0 */ nes_cpu_instruction_boundary(0xC972, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C97B; }
label_C974:;
    /* $C974: A9 */ nes_cpu_instruction_boundary(0xC974, 2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_C976:;
    /* $C976: A2 */ nes_cpu_instruction_boundary(0xC976, 2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_C978:;
    /* $C978: 4C */ nes_cpu_instruction_boundary(0xC978, 3); nes_cpu_instruction_boundary(0xC4AA, 2); func_C4AA(); return;
label_C97B:;
    /* $C97B: E6 */ nes_cpu_instruction_boundary(0xC97B, 5); { uint16_t a=0x1E; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C97D:;
    /* $C97D: 60 */ nes_cpu_instruction_boundary(0xC97D, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E310(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E310");
#endif
label_E310:;
    /* $E310: D1 */ nes_cpu_instruction_boundary(0xE310, 5); { uint8_t m=nes_read((nes_read16zp(0x8C) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_E312:;
    /* $E312: 14 */ nes_cpu_instruction_boundary(0xE312, 4); (void)nes_read((0x03 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E314:;
    /* $E314: F0 */ nes_cpu_instruction_boundary(0xE314, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E31A; }
label_E316:; /* SamusMoveVertically_endIf_D */
    /* $E316: C6 */ nes_cpu_instruction_boundary(0xE316, 5); { uint16_t a=0x65; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E318:;
    /* $E318: D0 */ nes_cpu_instruction_boundary(0xE318, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xE2E3); return; }
label_E31A:; /* SamusMoveHorizontally */
    /* $E31A: 20 */ nes_cpu_instruction_boundary(0xE31A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1C; g_cpu.S--; func_E3E5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE31A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E31D:;
    /* $E31D: AD */ nes_cpu_instruction_boundary(0xE31D, 4); g_cpu.A = nes_read(0x030E); FLAG_NZ(g_cpu.A);
label_E320:;
    /* $E320: 38 */ nes_cpu_instruction_boundary(0xE320, 2); g_cpu.C = 1;
label_E321:;
    /* $E321: E5 */ nes_cpu_instruction_boundary(0xE321, 3); { uint8_t m=nes_read(0xFD); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_E323:;
    /* $E323: 85 */ nes_cpu_instruction_boundary(0xE323, 3); nes_write(0x51, g_cpu.A);
label_E325:;
    /* $E325: A5 */ nes_cpu_instruction_boundary(0xE325, 3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_E327:;
    /* $E327: 10 */ nes_cpu_instruction_boundary(0xE327, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_E347; }
label_E329:;
    /* $E329: 20 */ nes_cpu_instruction_boundary(0xE329, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2B; g_cpu.S--; func_C3D4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE329, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E32C:;
    /* $E32C: A4 */ nes_cpu_instruction_boundary(0xE32C, 3); g_cpu.Y = nes_read(0x64); FLAG_NZ(g_cpu.Y);
label_E32E:;
    /* $E32E: F0 */ nes_cpu_instruction_boundary(0xE32E, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E333; }
label_E330:;
    /* $E330: 4A */ nes_cpu_instruction_boundary(0xE330, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_E331:;
    /* $E331: F0 */ nes_cpu_instruction_boundary(0xE331, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E364; }
label_E333:;
    /* $E333: 85 */ nes_cpu_instruction_boundary(0xE333, 3); nes_write(0x65, g_cpu.A);
label_E335:;
    /* $E335: 20 */ nes_cpu_instruction_boundary(0xE335, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x37; g_cpu.S--; func_E626();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE335, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E338:;
    /* $E338: 20 */ nes_cpu_instruction_boundary(0xE338, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3A; g_cpu.S--; func_E365();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE338, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E33B:;
    /* $E33B: C6 */ nes_cpu_instruction_boundary(0xE33B, 5); { uint16_t a=0x65; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E33D:;
    /* $E33D: D0 */ nes_cpu_instruction_boundary(0xE33D, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xE335, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_E335;
    }
label_E33F:;
    /* $E33F: A5 */ nes_cpu_instruction_boundary(0xE33F, 3); g_cpu.A = nes_read(0x58); FLAG_NZ(g_cpu.A);
label_E341:;
    /* $E341: F0 */ nes_cpu_instruction_boundary(0xE341, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E364; }
label_E343:;
    /* $E343: A9 */ nes_cpu_instruction_boundary(0xE343, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_E345:;
    /* $E345: D0 */ nes_cpu_instruction_boundary(0xE345, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E362; }
label_E347:;
    /* $E347: F0 */ nes_cpu_instruction_boundary(0xE347, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E364; }
label_E349:;
    /* $E349: A4 */ nes_cpu_instruction_boundary(0xE349, 3); g_cpu.Y = nes_read(0x64); FLAG_NZ(g_cpu.Y);
label_E34B:;
    /* $E34B: F0 */ nes_cpu_instruction_boundary(0xE34B, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E350; }
label_E34D:;
    /* $E34D: 4A */ nes_cpu_instruction_boundary(0xE34D, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_E34E:;
    /* $E34E: F0 */ nes_cpu_instruction_boundary(0xE34E, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E364; }
label_E350:;
    /* $E350: 85 */ nes_cpu_instruction_boundary(0xE350, 3); nes_write(0x65, g_cpu.A);
label_E352:;
    /* $E352: 20 */ nes_cpu_instruction_boundary(0xE352, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x54; g_cpu.S--; func_E668();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE352, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E355:;
    /* $E355: 20 */ nes_cpu_instruction_boundary(0xE355, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x57; g_cpu.S--; func_E365();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE355, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E358:;
    /* $E358: C6 */ nes_cpu_instruction_boundary(0xE358, 5); { uint16_t a=0x65; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E35A:;
    /* $E35A: D0 */ nes_cpu_instruction_boundary(0xE35A, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xE352, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_E352;
    }
label_E35C:;
    /* $E35C: A5 */ nes_cpu_instruction_boundary(0xE35C, 3); g_cpu.A = nes_read(0x58); FLAG_NZ(g_cpu.A);
label_E35E:;
    /* $E35E: F0 */ nes_cpu_instruction_boundary(0xE35E, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E364; }
label_E360:;
    /* $E360: A9 */ nes_cpu_instruction_boundary(0xE360, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E362:;
    /* $E362: 85 */ nes_cpu_instruction_boundary(0xE362, 3); nes_write(0x4E, g_cpu.A);
label_E364:; /* Exit10 */
    /* $E364: 60 */ nes_cpu_instruction_boundary(0xE364, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C9EB(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C9EB");
#endif
label_C9EB:;
    /* $C9EB: 20 */ nes_cpu_instruction_boundary(0xC9EB, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xED; g_cpu.S--; func_CB73();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC9EB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C9EE:;
    /* $C9EE: A9 */ nes_cpu_instruction_boundary(0xC9EE, 2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_C9F0:;
    /* $C9F0: 85 */ nes_cpu_instruction_boundary(0xC9F0, 3); nes_write(0x1E, g_cpu.A);
label_C9F2:;
    /* $C9F2: C9 */ nes_cpu_instruction_boundary(0xC9F2, 2); { int r=g_cpu.A-0x1F; g_cpu.C=(g_cpu.A>=0x1F)?1:0; FLAG_NZ(r&0xFF); }
label_C9F4:;
    /* $C9F4: B0 */ nes_cpu_instruction_boundary(0xC9F4, 2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xC9C3); return; }
label_C9F6:;
    /* $C9F6: D9 */ nes_cpu_instruction_boundary(0xC9F6, 4); { uint8_t m=nes_read((0xC9FF + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C9F9:;
    /* $C9F9: D0 */ nes_cpu_instruction_boundary(0xC9F9, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_CA00; }
label_C9FB:;
    /* $C9FB: EE */ nes_cpu_instruction_boundary(0xC9FB, 6); { uint16_t a=0x0300; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C9FE:;
    /* $C9FE: 84 */ nes_cpu_instruction_boundary(0xC9FE, 3); nes_write(0x1C, g_cpu.Y);
label_CA00:;
    /* $CA00: A5 */ nes_cpu_instruction_boundary(0xCA00, 3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_CA02:;
    /* $CA02: 4A */ nes_cpu_instruction_boundary(0xCA02, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_CA03:;
    /* $CA03: 90 */ nes_cpu_instruction_boundary(0xCA03, 2); if (!g_cpu.C) { maybe_trigger_vblank(2); call_by_address(0xC9C3); return; }
label_CA05:;
    /* $CA05: A9 */ nes_cpu_instruction_boundary(0xCA05, 2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_CA07:;
    /* $CA07: 20 */ nes_cpu_instruction_boundary(0xCA07, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xCA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x09; g_cpu.S--; func_CF6B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCA07, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CA0A:;
    /* $CA0A: A9 */ nes_cpu_instruction_boundary(0xCA0A, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_CA0C:;
    /* $CA0C: 85 */ nes_cpu_instruction_boundary(0xCA0C, 3); nes_write(0x5B, g_cpu.A);
label_CA0E:;
    /* $CA0E: 85 */ nes_cpu_instruction_boundary(0xCA0E, 3); nes_write(0x4B, g_cpu.A);
label_CA10:;
    /* $CA10: 4C */ nes_cpu_instruction_boundary(0xCA10, 3); nes_cpu_instruction_boundary(0xDE47, 2); func_DE47(); return;
}

void func_D0E4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D0E4");
#endif
label_D0E4:;
    /* $D0E4: 08 */ nes_cpu_instruction_boundary(0xD0E4, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_D0E5:;
    /* $D0E5: D0 */ nes_cpu_instruction_boundary(0xD0E5, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_D0EB; }
label_D0E7:;
    /* $D0E7: 24 */ nes_cpu_instruction_boundary(0xD0E7, 3); { uint8_t m=nes_read(0x12); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_D0E9:;
    /* $D0E9: 10 */ nes_cpu_instruction_boundary(0xD0E9, 2); if (!g_cpu.N) { maybe_trigger_vblank(2); goto label_D11E; }
label_D0EB:;
    /* $D0EB: A5 */ nes_cpu_instruction_boundary(0xD0EB, 3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_D0ED:;
    /* $D0ED: 29 */ nes_cpu_instruction_boundary(0xD0ED, 2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A);
label_D0EF:;
    /* $D0EF: D0 */ nes_cpu_instruction_boundary(0xD0EF, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_D11E; }
label_D0F1:;
    /* $D0F1: AD */ nes_cpu_instruction_boundary(0xD0F1, 4); g_cpu.A = nes_read(0x0301); FLAG_NZ(g_cpu.A);
label_D0F4:;
    /* $D0F4: 18 */ nes_cpu_instruction_boundary(0xD0F4, 2); g_cpu.C = 0;
label_D0F5:;
    /* $D0F5: 69 */ nes_cpu_instruction_boundary(0xD0F5, 2); { uint16_t r = g_cpu.A + 0x08 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x08); g_cpu.A=r&0xFF; }
label_D0F7:;
    /* $D0F7: 8D */ nes_cpu_instruction_boundary(0xD0F7, 4); nes_write(0x0301, g_cpu.A);
label_D0FA:;
    /* $D0FA: 20 */ nes_cpu_instruction_boundary(0xD0FA, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFC; g_cpu.S--; func_E7A2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD0FA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D0FD:;
    /* $D0FD: 90 */ nes_cpu_instruction_boundary(0xD0FD, 2); if (!g_cpu.C) { maybe_trigger_vblank(2); goto label_D11E; }
label_D0FF:;
    /* $D0FF: A2 */ nes_cpu_instruction_boundary(0xD0FF, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_D101:;
    /* $D101: 20 */ nes_cpu_instruction_boundary(0xD101, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x03; g_cpu.S--; func_E8BE();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD101, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D104:;
    /* $D104: 86 */ nes_cpu_instruction_boundary(0xD104, 3); nes_write(0x05, g_cpu.X);
label_D106:;
    /* $D106: A9 */ nes_cpu_instruction_boundary(0xD106, 2); g_cpu.A = 0xF5; FLAG_NZ(g_cpu.A);
label_D108:;
    /* $D108: 85 */ nes_cpu_instruction_boundary(0xD108, 3); nes_write(0x04, g_cpu.A);
label_D10A:;
    /* $D10A: 20 */ nes_cpu_instruction_boundary(0xD10A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0C; g_cpu.S--; func_FD8F();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD10A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D10D:;
    /* $D10D: 20 */ nes_cpu_instruction_boundary(0xD10D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0F; g_cpu.S--; func_D638();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD10D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D110:;
    /* $D110: 20 */ nes_cpu_instruction_boundary(0xD110, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x12; g_cpu.S--; func_CF55();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD110, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D113:;
    /* $D113: CE */ nes_cpu_instruction_boundary(0xD113, 6); { uint16_t a=0x0306; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D116:;
    /* $D116: 20 */ nes_cpu_instruction_boundary(0xD116, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x18; g_cpu.S--; func_D147();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD116, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D119:;
    /* $D119: A9 */ nes_cpu_instruction_boundary(0xD119, 2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_D11B:;
    /* $D11B: 4C */ nes_cpu_instruction_boundary(0xD11B, 3); nes_cpu_instruction_boundary(0xD144, 2); func_D144(); return;
label_D11E:;
    /* $D11E: A5 */ nes_cpu_instruction_boundary(0xD11E, 3); g_cpu.A = nes_read(0x12); FLAG_NZ(g_cpu.A);
label_D120:;
    /* $D120: 20 */ nes_cpu_instruction_boundary(0xD120, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x22; g_cpu.S--; func_E1E1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD120, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D123:;
    /* $D123: C9 */ nes_cpu_instruction_boundary(0xD123, 2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_D125:;
    /* $D125: B0 */ nes_cpu_instruction_boundary(0xD125, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_D12E; }
label_D127:;
    /* $D127: 85 */ nes_cpu_instruction_boundary(0xD127, 3); nes_write(0x4D, g_cpu.A);
label_D129:;
    /* $D129: A9 */ nes_cpu_instruction_boundary(0xD129, 2); g_cpu.A = 0x16; FLAG_NZ(g_cpu.A);
label_D12B:;
    /* $D12B: 20 */ nes_cpu_instruction_boundary(0xD12B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2D; g_cpu.S--; func_CF6B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD12B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D12E:;
    /* $D12E: A6 */ nes_cpu_instruction_boundary(0xD12E, 3); g_cpu.X = nes_read(0x4D); FLAG_NZ(g_cpu.X);
label_D130:;
    /* $D130: 20 */ nes_cpu_instruction_boundary(0xD130, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x32; g_cpu.S--; func_CCB7();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD130, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D133:;
    /* $D133: 20 */ nes_cpu_instruction_boundary(0xD133, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x35; g_cpu.S--; func_CF2E();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD133, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D136:;
    /* $D136: 20 */ nes_cpu_instruction_boundary(0xD136, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x38; g_cpu.S--; func_D150();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD136, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D139:;
    /* $D139: A5 */ nes_cpu_instruction_boundary(0xD139, 3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_D13B:;
    /* $D13B: 29 */ nes_cpu_instruction_boundary(0xD13B, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_D13D:;
    /* $D13D: D0 */ nes_cpu_instruction_boundary(0xD13D, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_D142; }
label_D13F:;
    /* $D13F: 20 */ nes_cpu_instruction_boundary(0xD13F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x41; g_cpu.S--; func_CFB7();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD13F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D142:;
    /* $D142: A9 */ nes_cpu_instruction_boundary(0xD142, 2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_D144:;
    /* $D144: 4C */ nes_cpu_instruction_boundary(0xD144, 3); nes_cpu_instruction_boundary(0xCD6D, 2); func_CD6D(); return;
}

void func_CC4C(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CC4C");
#endif
label_CC4C:;
    /* $CC4C: E1 */ nes_cpu_instruction_boundary(0xCC4C, 6); { uint8_t m=nes_read(nes_read16zp((0xE1 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_CC4E:;
    /* $CC4E: C9 */ nes_cpu_instruction_boundary(0xCC4E, 2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_CC50:;
    /* $CC50: B0 */ nes_cpu_instruction_boundary(0xCC50, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_CC54; }
label_CC52:;
    /* $CC52: 85 */ nes_cpu_instruction_boundary(0xCC52, 3); nes_write(0x4D, g_cpu.A);
label_CC54:;
    /* $CC54: AA */ nes_cpu_instruction_boundary(0xCC54, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_CC55:;
    /* $CC55: BD */ nes_cpu_instruction_boundary(0xCC55, 4); g_cpu.A = nes_read((0xCC87 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_CC58:;
    /* $CC58: 8D */ nes_cpu_instruction_boundary(0xCC58, 4); nes_write(0x0300, g_cpu.A);
label_CC5B:;
    /* $CC5B: A5 */ nes_cpu_instruction_boundary(0xCC5B, 3); g_cpu.A = nes_read(0x12); FLAG_NZ(g_cpu.A);
label_CC5D:;
    /* $CC5D: 05 */ nes_cpu_instruction_boundary(0xCC5D, 3); g_cpu.A |= nes_read(0x16); FLAG_NZ(g_cpu.A);
label_CC5F:;
    /* $CC5F: 0A */ nes_cpu_instruction_boundary(0xCC5F, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_CC60:;
    /* $CC60: 10 */ nes_cpu_instruction_boundary(0xCC60, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_CC65; }
label_CC62:;
    /* $CC62: 20 */ nes_cpu_instruction_boundary(0xCC62, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xCC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x64; g_cpu.S--; func_D1EE();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCC62, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CC65:;
    /* $CC65: 24 */ nes_cpu_instruction_boundary(0xCC65, 3); { uint8_t m=nes_read(0x12); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_CC67:;
    /* $CC67: 10 */ nes_cpu_instruction_boundary(0xCC67, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_CC6E; }
label_CC69:;
    /* $CC69: A9 */ nes_cpu_instruction_boundary(0xCC69, 2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_CC6B:;
    /* $CC6B: 8D */ nes_cpu_instruction_boundary(0xCC6B, 4); nes_write(0x0300, g_cpu.A);
label_CC6E:;
    /* $CC6E: A9 */ nes_cpu_instruction_boundary(0xCC6E, 2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_CC70:;
    /* $CC70: 20 */ nes_cpu_instruction_boundary(0xCC70, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xCC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x72; g_cpu.S--; func_CD6D();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCC70, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CC73:;
    /* $CC73: AD */ nes_cpu_instruction_boundary(0xCC73, 4); g_cpu.A = nes_read(0x0300); FLAG_NZ(g_cpu.A);
label_CC76:;
    /* $CC76: C9 */ nes_cpu_instruction_boundary(0xCC76, 2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_CC78:;
    /* $CC78: B0 */ nes_cpu_instruction_boundary(0xCC78, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_CC97; }
label_CC7A:;
    /* $CC7A: 20 */ nes_cpu_instruction_boundary(0xCC7A, 6); /* inline_dispatch $C27C: 5 entries (bank=-1) */
switch(g_cpu.A) {
  case 0: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x5C); nes_write(0x000D, 0xC4); g_cpu.A = 0xC4; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0xC45C, 57); func_C45C(); return;
  case 1: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x98); nes_write(0x000D, 0xCC); g_cpu.A = 0xCC; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0xCC98, 57); func_CC98(); return;
  case 2: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xC3); nes_write(0x000D, 0xCF); g_cpu.A = 0xCF; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0xCFC3, 57); func_CFC3(); return;
  case 3: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xB5); nes_write(0x000D, 0xD0); g_cpu.A = 0xD0; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0xD0B5, 57); func_D0B5(); return;
  case 4: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x77); nes_write(0x000D, 0xCF); g_cpu.A = 0xCF; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0xCF77, 57); func_CF77(); return;
  default: nes_log_inline_miss(0xCC7A, g_cpu.A); return;
}
label_CC87:; /* ActionTable */
    /* $CC87: 01 */ nes_cpu_instruction_boundary(0xCC87, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_CC89:;
    /* $CC89: 03 */ nes_cpu_instruction_boundary(0xCC89, 8); { uint16_t a=nes_read16zp((0x04 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_CC8B:; /* SetSamusExplode */
    /* $CC8B: A9 */ nes_cpu_instruction_boundary(0xCC8B, 2); g_cpu.A = 0x50; FLAG_NZ(g_cpu.A);
label_CC8D:;
    /* $CC8D: 8D */ nes_cpu_instruction_boundary(0xCC8D, 4); nes_write(0x030F, g_cpu.A);
label_CC90:;
    /* $CC90: A9 */ nes_cpu_instruction_boundary(0xCC90, 2); g_cpu.A = 0x32; FLAG_NZ(g_cpu.A);
label_CC92:;
    /* $CC92: 20 */ nes_cpu_instruction_boundary(0xCC92, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xCC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x94; g_cpu.S--; func_CF6B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCC92, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CC95:;
    /* $CC95: 85 */ nes_cpu_instruction_boundary(0xCC95, 3); nes_write(0x65, g_cpu.A);
label_CC97:; /* RTS_CC9X */
    /* $CC97: 60 */ nes_cpu_instruction_boundary(0xCC97, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

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
    /* $F054: 49 */ nes_cpu_instruction_boundary(0xF054, 2); g_cpu.A ^= 0xF1; FLAG_NZ(g_cpu.A);
label_F056:;
    /* $F056: 20 */ nes_cpu_instruction_boundary(0xF056, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x58; g_cpu.S--; func_F2B4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF056, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F059:;
    /* $F059: A0 */ nes_cpu_instruction_boundary(0xF059, 2); g_cpu.Y = 0xD0; FLAG_NZ(g_cpu.Y);
label_F05B:;
    /* $F05B: B9 */ nes_cpu_instruction_boundary(0xF05B, 4); g_cpu.A = nes_read((0x0300 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F05E:;
    /* $F05E: F0 */ nes_cpu_instruction_boundary(0xF05E, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F076; }
label_F060:;
    /* $F060: C9 */ nes_cpu_instruction_boundary(0xF060, 2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_F062:;
    /* $F062: 90 */ nes_cpu_instruction_boundary(0xF062, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_F070; }
label_F064:;
    /* $F064: C9 */ nes_cpu_instruction_boundary(0xF064, 2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_F066:;
    /* $F066: F0 */ nes_cpu_instruction_boundary(0xF066, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F070; }
label_F068:;
    /* $F068: C9 */ nes_cpu_instruction_boundary(0xF068, 2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_F06A:;
    /* $F06A: F0 */ nes_cpu_instruction_boundary(0xF06A, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F070; }
label_F06C:;
    /* $F06C: C9 */ nes_cpu_instruction_boundary(0xF06C, 2); { int r=g_cpu.A-0x0B; g_cpu.C=(g_cpu.A>=0x0B)?1:0; FLAG_NZ(r&0xFF); }
label_F06E:;
    /* $F06E: D0 */ nes_cpu_instruction_boundary(0xF06E, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F076; }
label_F070:;
    /* $F070: 20 */ nes_cpu_instruction_boundary(0xF070, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x72; g_cpu.S--; func_F149();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF070, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F073:;
    /* $F073: 20 */ nes_cpu_instruction_boundary(0xF073, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x75; g_cpu.S--; func_F32A();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF073, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F076:;
    /* $F076: 20 */ nes_cpu_instruction_boundary(0xF076, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x78; g_cpu.S--; func_F1EE();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF076, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F079:;
    /* $F079: D0 */ nes_cpu_instruction_boundary(0xF079, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xF05B, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_F05B;
    }
label_F07B:;
    /* $F07B: 8A */ nes_cpu_instruction_boundary(0xF07B, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_F07C:;
    /* $F07C: 38 */ nes_cpu_instruction_boundary(0xF07C, 2); g_cpu.C = 1;
label_F07D:;
    /* $F07D: E9 */ nes_cpu_instruction_boundary(0xF07D, 2); { uint8_t m=0x08; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_F07F:;
    /* $F07F: AA */ nes_cpu_instruction_boundary(0xF07F, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_F080:;
    /* $F080: 10 */ nes_cpu_instruction_boundary(0xF080, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xF03D); return; }
label_F082:;
    /* $F082: A2 */ nes_cpu_instruction_boundary(0xF082, 2); g_cpu.X = 0xB0; FLAG_NZ(g_cpu.X);
label_F084:;
    /* $F084: BD */ nes_cpu_instruction_boundary(0xF084, 4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F087:;
    /* $F087: C9 */ nes_cpu_instruction_boundary(0xF087, 2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_F089:;
    /* $F089: D0 */ nes_cpu_instruction_boundary(0xF089, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F098; }
label_F08B:;
    /* $F08B: A0 */ nes_cpu_instruction_boundary(0xF08B, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_F08D:;
    /* $F08D: 20 */ nes_cpu_instruction_boundary(0xF08D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; func_CE84();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF08D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F090:;
    /* $F090: F0 */ nes_cpu_instruction_boundary(0xF090, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F09D; }
label_F092:;
    /* $F092: 20 */ nes_cpu_instruction_boundary(0xF092, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x94; g_cpu.S--; func_DC7F();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF092, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F095:;
    /* $F095: 20 */ nes_cpu_instruction_boundary(0xF095, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x97; g_cpu.S--; func_F277();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF095, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F098:;
    /* $F098: 20 */ nes_cpu_instruction_boundary(0xF098, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; func_F1F4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF098, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F09B:;
    /* $F09B: 30 */ nes_cpu_instruction_boundary(0xF09B, 2); if (g_cpu.N) {
    nes_cpu_instruction_boundary(0xF084, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_F084;
    }
label_F09D:;
    /* $F09D: A2 */ nes_cpu_instruction_boundary(0xF09D, 2); g_cpu.X = 0x50; FLAG_NZ(g_cpu.X);
label_F09F:;
    /* $F09F: BD */ nes_cpu_instruction_boundary(0xF09F, 4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F0A2:;
    /* $F0A2: F0 */ nes_cpu_instruction_boundary(0xF0A2, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0A6; }
label_F0A4:;
    /* $F0A4: C9 */ nes_cpu_instruction_boundary(0xF0A4, 2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_F0A6:;
    /* $F0A6: F0 */ nes_cpu_instruction_boundary(0xF0A6, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0E5; }
label_F0A8:;
    /* $F0A8: 20 */ nes_cpu_instruction_boundary(0xF0A8, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAA; g_cpu.S--; func_F152();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0A8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0AB:;
    /* $F0AB: BD */ nes_cpu_instruction_boundary(0xF0AB, 4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F0AE:;
    /* $F0AE: C9 */ nes_cpu_instruction_boundary(0xF0AE, 2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_F0B0:;
    /* $F0B0: F0 */ nes_cpu_instruction_boundary(0xF0B0, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0D4; }
label_F0B2:;
    /* $F0B2: A0 */ nes_cpu_instruction_boundary(0xF0B2, 2); g_cpu.Y = 0xD0; FLAG_NZ(g_cpu.Y);
label_F0B4:;
    /* $F0B4: B9 */ nes_cpu_instruction_boundary(0xF0B4, 4); g_cpu.A = nes_read((0x0300 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F0B7:;
    /* $F0B7: F0 */ nes_cpu_instruction_boundary(0xF0B7, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0CF; }
label_F0B9:;
    /* $F0B9: C9 */ nes_cpu_instruction_boundary(0xF0B9, 2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_F0BB:;
    /* $F0BB: 90 */ nes_cpu_instruction_boundary(0xF0BB, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_F0C9; }
label_F0BD:;
    /* $F0BD: C9 */ nes_cpu_instruction_boundary(0xF0BD, 2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_F0BF:;
    /* $F0BF: F0 */ nes_cpu_instruction_boundary(0xF0BF, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0C9; }
label_F0C1:;
    /* $F0C1: C9 */ nes_cpu_instruction_boundary(0xF0C1, 2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_F0C3:;
    /* $F0C3: F0 */ nes_cpu_instruction_boundary(0xF0C3, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0C9; }
label_F0C5:;
    /* $F0C5: C9 */ nes_cpu_instruction_boundary(0xF0C5, 2); { int r=g_cpu.A-0x0B; g_cpu.C=(g_cpu.A>=0x0B)?1:0; FLAG_NZ(r&0xFF); }
label_F0C7:;
    /* $F0C7: D0 */ nes_cpu_instruction_boundary(0xF0C7, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0CF; }
label_F0C9:;
    /* $F0C9: 20 */ nes_cpu_instruction_boundary(0xF0C9, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCB; g_cpu.S--; func_F140();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0C9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0CC:;
    /* $F0CC: 20 */ nes_cpu_instruction_boundary(0xF0CC, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCE; g_cpu.S--; func_F2CA();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0CC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0CF:;
    /* $F0CF: 20 */ nes_cpu_instruction_boundary(0xF0CF, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD1; g_cpu.S--; func_F1EE();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0CF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0D2:;
    /* $F0D2: D0 */ nes_cpu_instruction_boundary(0xF0D2, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xF0B4, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_F0B4;
    }
label_F0D4:;
    /* $F0D4: A0 */ nes_cpu_instruction_boundary(0xF0D4, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_F0D6:;
    /* $F0D6: A5 */ nes_cpu_instruction_boundary(0xF0D6, 3); g_cpu.A = nes_read(0x70); FLAG_NZ(g_cpu.A);
label_F0D8:;
    /* $F0D8: D0 */ nes_cpu_instruction_boundary(0xF0D8, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0E5; }
label_F0DA:;
    /* $F0DA: 20 */ nes_cpu_instruction_boundary(0xF0DA, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDC; g_cpu.S--; func_CE84();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0DA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0DD:;
    /* $F0DD: F0 */ nes_cpu_instruction_boundary(0xF0DD, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0E5; }
label_F0DF:;
    /* $F0DF: 20 */ nes_cpu_instruction_boundary(0xF0DF, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE1; g_cpu.S--; func_F140();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0DF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0E2:;
    /* $F0E2: 20 */ nes_cpu_instruction_boundary(0xF0E2, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE4; g_cpu.S--; func_F282();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0E2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0E5:; /* NextEnemy */
    /* $F0E5: 20 */ nes_cpu_instruction_boundary(0xF0E5, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE7; g_cpu.S--; func_F1F4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0E5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0E8:;
    /* $F0E8: 30 */ nes_cpu_instruction_boundary(0xF0E8, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_F0ED; }
label_F0EA:;
    /* $F0EA: 4C */ nes_cpu_instruction_boundary(0xF0EA, 3); goto label_F09F;
label_F0ED:;
    /* $F0ED: A2 */ nes_cpu_instruction_boundary(0xF0ED, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_F0EF:;
    /* $F0EF: 20 */ nes_cpu_instruction_boundary(0xF0EF, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; func_F172();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0EF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0F2:;
    /* $F0F2: A0 */ nes_cpu_instruction_boundary(0xF0F2, 2); g_cpu.Y = 0x60; FLAG_NZ(g_cpu.Y);
label_F0F4:;
    /* $F0F4: B9 */ nes_cpu_instruction_boundary(0xF0F4, 4); g_cpu.A = nes_read((0x6AF4 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F0F7:;
    /* $F0F7: F0 */ nes_cpu_instruction_boundary(0xF0F7, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_F112; }
label_F0F9:;
    /* $F0F9: C9 */ nes_cpu_instruction_boundary(0xF0F9, 2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_F0FB:;
    /* $F0FB: F0 */ nes_cpu_instruction_boundary(0xF0FB, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_F112; }
label_F0FD:;
    /* $F0FD: A5 */ nes_cpu_instruction_boundary(0xF0FD, 3); g_cpu.A = nes_read(0x70); FLAG_NZ(g_cpu.A);
label_F0FF:;
    /* $F0FF: D0 */ nes_cpu_instruction_boundary(0xF0FF, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F112; }
label_F101:;
    /* $F101: 20 */ nes_cpu_instruction_boundary(0xF101, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x03; g_cpu.S--; func_CE84();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF101, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F104:;
    /* $F104: F0 */ nes_cpu_instruction_boundary(0xF104, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F112; }
label_F106:;
    /* $F106: 20 */ nes_cpu_instruction_boundary(0xF106, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x08; g_cpu.S--; func_F1B3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF106, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F109:;
    /* $F109: 20 */ nes_cpu_instruction_boundary(0xF109, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0B; g_cpu.S--; func_F162();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF109, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F10C:;
    /* $F10C: 20 */ nes_cpu_instruction_boundary(0xF10C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0E; g_cpu.S--; func_F1FA();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF10C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F10F:;
    /* $F10F: 20 */ nes_cpu_instruction_boundary(0xF10F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x11; g_cpu.S--; func_F2ED();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF10F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F112:;
    /* $F112: 20 */ nes_cpu_instruction_boundary(0xF112, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x14; g_cpu.S--; func_F1EE();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF112, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F115:;
    /* $F115: C9 */ nes_cpu_instruction_boundary(0xF115, 2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_F117:;
    /* $F117: D0 */ nes_cpu_instruction_boundary(0xF117, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xF0F4, 2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_F0F4;
    }
label_F119:;
    /* $F119: A0 */ nes_cpu_instruction_boundary(0xF119, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_F11B:;
    /* $F11B: 20 */ nes_cpu_instruction_boundary(0xF11B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1D; g_cpu.S--; func_CE84();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF11B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F11E:;
    /* $F11E: F0 */ nes_cpu_instruction_boundary(0xF11E, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F13D; }
label_F120:;
    /* $F120: 20 */ nes_cpu_instruction_boundary(0xF120, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x22; g_cpu.S--; func_F186();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF120, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F123:;
    /* $F123: A2 */ nes_cpu_instruction_boundary(0xF123, 2); g_cpu.X = 0xF0; FLAG_NZ(g_cpu.X);
label_F125:;
    /* $F125: BD */ nes_cpu_instruction_boundary(0xF125, 4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F128:;
    /* $F128: C9 */ nes_cpu_instruction_boundary(0xF128, 2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_F12A:;
    /* $F12A: F0 */ nes_cpu_instruction_boundary(0xF12A, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F130; }
label_F12C:;
    /* $F12C: C9 */ nes_cpu_instruction_boundary(0xF12C, 2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_F12E:;
    /* $F12E: D0 */ nes_cpu_instruction_boundary(0xF12E, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F136; }
label_F130:;
    /* $F130: 20 */ nes_cpu_instruction_boundary(0xF130, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x32; g_cpu.S--; func_DC82();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF130, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F133:;
    /* $F133: 20 */ nes_cpu_instruction_boundary(0xF133, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x35; g_cpu.S--; func_F311();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF133, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F136:;
    /* $F136: 20 */ nes_cpu_instruction_boundary(0xF136, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x38; g_cpu.S--; func_F1F4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF136, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F139:;
    /* $F139: C9 */ nes_cpu_instruction_boundary(0xF139, 2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_F13B:;
    /* $F13B: D0 */ nes_cpu_instruction_boundary(0xF13B, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xF125, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_F125;
    }
label_F13D:; /* GotoSubtractHealth */
    /* $F13D: 4C */ nes_cpu_instruction_boundary(0xF13D, 3); nes_cpu_instruction_boundary(0xCE92, 2); func_CE92(); return;
}

void func_F560(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F560");
#endif
label_F560:;
    /* $F560: 20 */ nes_cpu_instruction_boundary(0xF560, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x62; g_cpu.S--; if (!nes_dispatch_call(0x08F0, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF560, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F563:;
    /* $F563: A9 */ nes_cpu_instruction_boundary(0xF563, 2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_F565:;
    /* $F565: 9D */ nes_cpu_instruction_boundary(0xF565, 5); nes_write((0x040B + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F568:;
    /* $F568: 4C */ nes_cpu_instruction_boundary(0xF568, 3); nes_cpu_instruction_boundary(0x95A8, 2); call_by_address_tail(0x95A8, -1); return;
}

void func_DD40(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DD40");
#endif
label_DD40:;
    /* $DD40: 95 */ nes_cpu_instruction_boundary(0xDD40, 4); nes_write((0xF0 + g_cpu.X) & 0xFF, g_cpu.A);
label_DD42:;
    /* $DD42: 18 */ nes_cpu_instruction_boundary(0xDD42, 2); g_cpu.C = 0;
label_DD43:;
    /* $DD43: AD */ nes_cpu_instruction_boundary(0xDD43, 4); g_cpu.A = nes_read(0x687A); FLAG_NZ(g_cpu.A);
label_DD46:;
    /* $DD46: F0 */ nes_cpu_instruction_boundary(0xDD46, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DD5B; }
label_DD48:;
    /* $DD48: E6 */ nes_cpu_instruction_boundary(0xDD48, 5); { uint16_t a=0x95; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DD4A:; /* RTS_X137 */
    /* $DD4A: 60 */ nes_cpu_instruction_boundary(0xDD4A, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_DD4B:;
    /* $DD4B: A4 */ nes_cpu_instruction_boundary(0xDD4B, 3); g_cpu.Y = nes_read(0x94); FLAG_NZ(g_cpu.Y);
label_DD4D:;
    /* $DD4D: C4 */ nes_cpu_instruction_boundary(0xDD4D, 3); { uint8_t m=nes_read(0x96); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_DD4F:;
    /* $DD4F: F0 */ nes_cpu_instruction_boundary(0xDD4F, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DD5B; }
label_DD51:;
    /* $DD51: E6 */ nes_cpu_instruction_boundary(0xDD51, 5); { uint16_t a=0x96; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DD53:;
    /* $DD53: C9 */ nes_cpu_instruction_boundary(0xDD53, 2); { int r=g_cpu.A-0x89; g_cpu.C=(g_cpu.A>=0x89)?1:0; FLAG_NZ(r&0xFF); }
label_DD55:;
    /* $DD55: D0 */ nes_cpu_instruction_boundary(0xDD55, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xDD4A, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DD4A;
    }
label_DD57:;
    /* $DD57: 46 */ nes_cpu_instruction_boundary(0xDD57, 5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_DD59:;
    /* $DD59: B0 */ nes_cpu_instruction_boundary(0xDD59, 2); if (g_cpu.C) {
    nes_cpu_instruction_boundary(0xDD4A, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DD4A;
    }
label_DD5B:;
    /* $DD5B: A6 */ nes_cpu_instruction_boundary(0xDD5B, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_DD5D:;
    /* $DD5D: A5 */ nes_cpu_instruction_boundary(0xDD5D, 3); g_cpu.A = nes_read(0x74); FLAG_NZ(g_cpu.A);
label_DD5F:;
    /* $DD5F: C9 */ nes_cpu_instruction_boundary(0xDD5F, 2); { int r=g_cpu.A-0x13; g_cpu.C=(g_cpu.A>=0x13)?1:0; FLAG_NZ(r&0xFF); }
label_DD61:;
    /* $DD61: F0 */ nes_cpu_instruction_boundary(0xDD61, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DD66; }
label_DD63:;
    /* $DD63: 4C */ nes_cpu_instruction_boundary(0xDD63, 3); nes_cpu_instruction_boundary(0xFA18, 2); func_FA18(); return;
label_DD66:;
    /* $DD66: A5 */ nes_cpu_instruction_boundary(0xDD66, 3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_DD68:;
    /* $DD68: A0 */ nes_cpu_instruction_boundary(0xDD68, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_DD6A:;
    /* $DD6A: 84 */ nes_cpu_instruction_boundary(0xDD6A, 3); nes_write(0x96, g_cpu.Y);
label_DD6C:;
    /* $DD6C: 84 */ nes_cpu_instruction_boundary(0xDD6C, 3); nes_write(0x95, g_cpu.Y);
label_DD6E:;
    /* $DD6E: C8 */ nes_cpu_instruction_boundary(0xDD6E, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DD6F:;
    /* $DD6F: 84 */ nes_cpu_instruction_boundary(0xDD6F, 3); nes_write(0x93, g_cpu.Y);
label_DD71:;
    /* $DD71: 84 */ nes_cpu_instruction_boundary(0xDD71, 3); nes_write(0x94, g_cpu.Y);
label_DD73:;
    /* $DD73: D0 */ nes_cpu_instruction_boundary(0xDD73, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xDD30); return; }
label_DD75:;
    /* $DD75: 20 */ nes_cpu_instruction_boundary(0xDD75, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xDD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x77; g_cpu.S--; func_CBF9();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDD75, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DD78:;
    /* $DD78: A5 */ nes_cpu_instruction_boundary(0xDD78, 3); g_cpu.A = nes_read(0x74); FLAG_NZ(g_cpu.A);
label_DD7A:;
    /* $DD7A: 29 */ nes_cpu_instruction_boundary(0xDD7A, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_DD7C:;
    /* $DD7C: 8D */ nes_cpu_instruction_boundary(0xDD7C, 4); nes_write(0x0108, g_cpu.A);
label_DD7F:;
    /* $DD7F: 4A */ nes_cpu_instruction_boundary(0xDD7F, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_DD80:;
    /* $DD80: A8 */ nes_cpu_instruction_boundary(0xDD80, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_DD81:;
    /* $DD81: 99 */ nes_cpu_instruction_boundary(0xDD81, 5); nes_write((0x687A + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_DD84:;
    /* $DD84: A9 */ nes_cpu_instruction_boundary(0xDD84, 2); g_cpu.A = 0x4B; FLAG_NZ(g_cpu.A);
label_DD86:;
    /* $DD86: 20 */ nes_cpu_instruction_boundary(0xDD86, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xDD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x88; g_cpu.S--; func_DD97();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDD86, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DD89:;
    /* $DD89: D0 */ nes_cpu_instruction_boundary(0xDD89, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xDD5B, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DD5B;
    }
label_DD8B:; /* DrawEnemy */
    /* $DD8B: A6 */ nes_cpu_instruction_boundary(0xDD8B, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_DD8D:;
    /* $DD8D: BD */ nes_cpu_instruction_boundary(0xDD8D, 4); g_cpu.A = nes_read((0x6AF7 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DD90:;
    /* $DD90: C9 */ nes_cpu_instruction_boundary(0xDD90, 2); { int r=g_cpu.A-0xF7; g_cpu.C=(g_cpu.A>=0xF7)?1:0; FLAG_NZ(r&0xFF); }
label_DD92:;
    /* $DD92: D0 */ nes_cpu_instruction_boundary(0xDD92, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_DDB0; }
label_DD94:;
    /* $DD94: 4C */ nes_cpu_instruction_boundary(0xDD94, 3); nes_cpu_instruction_boundary(0xDF2D, 2); func_DF2D(); return;
label_DDB0:; /* DrawEnemy_NotBlank */
    /* $DDB0: BD */ nes_cpu_instruction_boundary(0xDDB0, 4); g_cpu.A = nes_read((0x0400 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDB3:;
    /* $DDB3: 85 */ nes_cpu_instruction_boundary(0xDDB3, 3); nes_write(0x0A, g_cpu.A);
label_DDB5:;
    /* $DDB5: BD */ nes_cpu_instruction_boundary(0xDDB5, 4); g_cpu.A = nes_read((0x0401 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDB8:;
    /* $DDB8: 85 */ nes_cpu_instruction_boundary(0xDDB8, 3); nes_write(0x0B, g_cpu.A);
label_DDBA:;
    /* $DDBA: BD */ nes_cpu_instruction_boundary(0xDDBA, 4); g_cpu.A = nes_read((0x6AFB + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDBD:;
    /* $DDBD: 85 */ nes_cpu_instruction_boundary(0xDDBD, 3); nes_write(0x06, g_cpu.A);
label_DDBF:;
    /* $DDBF: BD */ nes_cpu_instruction_boundary(0xDDBF, 4); g_cpu.A = nes_read((0x6AF7 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDC2:;
    /* $DDC2: 0A */ nes_cpu_instruction_boundary(0xDDC2, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_DDC3:;
    /* $DDC3: A8 */ nes_cpu_instruction_boundary(0xDDC3, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_DDC4:;
    /* $DDC4: B1 */ nes_cpu_instruction_boundary(0xDDC4, 5); g_cpu.A = nes_read((nes_read16zp(0x41) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDC6:;
    /* $DDC6: 90 */ nes_cpu_instruction_boundary(0xDDC6, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DDCA; }
label_DDC8:;
    /* $DDC8: B1 */ nes_cpu_instruction_boundary(0xDDC8, 5); g_cpu.A = nes_read((nes_read16zp(0x43) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDCA:;
    /* $DDCA: 85 */ nes_cpu_instruction_boundary(0xDDCA, 3); nes_write(0x00, g_cpu.A);
label_DDCC:;
    /* $DDCC: C8 */ nes_cpu_instruction_boundary(0xDDCC, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DDCD:;
    /* $DDCD: B1 */ nes_cpu_instruction_boundary(0xDDCD, 5); g_cpu.A = nes_read((nes_read16zp(0x41) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDCF:;
    /* $DDCF: 90 */ nes_cpu_instruction_boundary(0xDDCF, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DDD3; }
label_DDD1:;
    /* $DDD1: B1 */ nes_cpu_instruction_boundary(0xDDD1, 5); g_cpu.A = nes_read((nes_read16zp(0x43) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDD3:;
    /* $DDD3: 85 */ nes_cpu_instruction_boundary(0xDDD3, 3); nes_write(0x01, g_cpu.A);
label_DDD5:;
    /* $DDD5: 20 */ nes_cpu_instruction_boundary(0xDDD5, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xDD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD7; g_cpu.S--; func_DCC3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDDD5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DDD8:;
    /* $DDD8: A8 */ nes_cpu_instruction_boundary(0xDDD8, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_DDD9:;
    /* $DDD9: B1 */ nes_cpu_instruction_boundary(0xDDD9, 5); g_cpu.A = nes_read((nes_read16zp(0x45) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDDB:;
    /* $DDDB: 85 */ nes_cpu_instruction_boundary(0xDDDB, 3); nes_write(0x02, g_cpu.A);
label_DDDD:;
    /* $DDDD: C8 */ nes_cpu_instruction_boundary(0xDDDD, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DDDE:;
    /* $DDDE: B1 */ nes_cpu_instruction_boundary(0xDDDE, 5); g_cpu.A = nes_read((nes_read16zp(0x45) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDE0:;
    /* $DDE0: 85 */ nes_cpu_instruction_boundary(0xDDE0, 3); nes_write(0x03, g_cpu.A);
label_DDE2:;
    /* $DDE2: A0 */ nes_cpu_instruction_boundary(0xDDE2, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_DDE4:;
    /* $DDE4: E0 */ nes_cpu_instruction_boundary(0xDDE4, 2); { int r=g_cpu.X-0x02; g_cpu.C=(g_cpu.X>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_DDE6:;
    /* $DDE6: D0 */ nes_cpu_instruction_boundary(0xDDE6, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_DE05; }
label_DDE8:;
    /* $DDE8: A6 */ nes_cpu_instruction_boundary(0xDDE8, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_DDEA:;
    /* $DDEA: FE */ nes_cpu_instruction_boundary(0xDDEA, 7); { uint16_t a=(0x0406 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DDED:;
    /* $DDED: BD */ nes_cpu_instruction_boundary(0xDDED, 4); g_cpu.A = nes_read((0x0406 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDF0:;
    /* $DDF0: 48 */ nes_cpu_instruction_boundary(0xDDF0, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_DDF1:;
    /* $DDF1: 29 */ nes_cpu_instruction_boundary(0xDDF1, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_DDF3:;
    /* $DDF3: AA */ nes_cpu_instruction_boundary(0xDDF3, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_DDF4:;
    /* $DDF4: A5 */ nes_cpu_instruction_boundary(0xDDF4, 3); g_cpu.A = nes_read(0x05); FLAG_NZ(g_cpu.A);
label_DDF6:;
    /* $DDF6: 29 */ nes_cpu_instruction_boundary(0xDDF6, 2); g_cpu.A &= 0x3F; FLAG_NZ(g_cpu.A);
label_DDF8:;
    /* $DDF8: 1D */ nes_cpu_instruction_boundary(0xDDF8, 4); g_cpu.A |= nes_read((0xDC8B + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDFB:;
    /* $DDFB: 85 */ nes_cpu_instruction_boundary(0xDDFB, 3); nes_write(0x05, g_cpu.A);
label_DDFD:;
    /* $DDFD: 68 */ nes_cpu_instruction_boundary(0xDDFD, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_DDFE:;
    /* $DDFE: C9 */ nes_cpu_instruction_boundary(0xDDFE, 2); { int r=g_cpu.A-0x19; g_cpu.C=(g_cpu.A>=0x19)?1:0; FLAG_NZ(r&0xFF); }
label_DE00:;
    /* $DE00: D0 */ nes_cpu_instruction_boundary(0xDE00, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_DE05; }
label_DE02:;
    /* $DE02: 4C */ nes_cpu_instruction_boundary(0xDE02, 3); nes_cpu_instruction_boundary(0xDCF5, 2); func_DCF5(); return;
label_DE05:;
    /* $DE05: A6 */ nes_cpu_instruction_boundary(0xDE05, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_DE07:;
    /* $DE07: C8 */ nes_cpu_instruction_boundary(0xDE07, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DE08:;
    /* $DE08: B1 */ nes_cpu_instruction_boundary(0xDE08, 5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DE0A:;
    /* $DE0A: 9D */ nes_cpu_instruction_boundary(0xDE0A, 5); nes_write((0x6AF5 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DE0D:;
    /* $DE0D: 20 */ nes_cpu_instruction_boundary(0xDE0D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xDE; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0F; g_cpu.S--; func_DE3D();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDE0D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DE10:;
    /* $DE10: C8 */ nes_cpu_instruction_boundary(0xDE10, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DE11:;
    /* $DE11: B1 */ nes_cpu_instruction_boundary(0xDE11, 5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DE13:;
    /* $DE13: 9D */ nes_cpu_instruction_boundary(0xDE13, 5); nes_write((0x6AF6 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DE16:;
    /* $DE16: 85 */ nes_cpu_instruction_boundary(0xDE16, 3); nes_write(0x09, g_cpu.A);
label_DE18:;
    /* $DE18: C8 */ nes_cpu_instruction_boundary(0xDE18, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DE19:;
    /* $DE19: 84 */ nes_cpu_instruction_boundary(0xDE19, 3); nes_write(0x11, g_cpu.Y);
label_DE1B:;
    /* $DE1B: 20 */ nes_cpu_instruction_boundary(0xDE1B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xDE; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1D; g_cpu.S--; func_DFDF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDE1B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DE1E:;
    /* $DE1E: 8A */ nes_cpu_instruction_boundary(0xDE1E, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_DE1F:;
    /* $DE1F: 0A */ nes_cpu_instruction_boundary(0xDE1F, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_DE20:;
    /* $DE20: 85 */ nes_cpu_instruction_boundary(0xDE20, 3); nes_write(0x08, g_cpu.A);
label_DE22:;
    /* $DE22: A6 */ nes_cpu_instruction_boundary(0xDE22, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_DE24:;
    /* $DE24: BD */ nes_cpu_instruction_boundary(0xDE24, 4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DE27:;
    /* $DE27: 29 */ nes_cpu_instruction_boundary(0xDE27, 2); g_cpu.A &= 0xFD; FLAG_NZ(g_cpu.A);
label_DE29:;
    /* $DE29: 05 */ nes_cpu_instruction_boundary(0xDE29, 3); g_cpu.A |= nes_read(0x08); FLAG_NZ(g_cpu.A);
label_DE2B:;
    /* $DE2B: 9D */ nes_cpu_instruction_boundary(0xDE2B, 5); nes_write((0x0405 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DE2E:;
    /* $DE2E: A5 */ nes_cpu_instruction_boundary(0xDE2E, 3); g_cpu.A = nes_read(0x08); FLAG_NZ(g_cpu.A);
label_DE30:;
    /* $DE30: F0 */ nes_cpu_instruction_boundary(0xDE30, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DE53; }
label_DE32:;
    /* $DE32: 4C */ nes_cpu_instruction_boundary(0xDE32, 3); nes_cpu_instruction_boundary(0xDEDE, 2); func_DEDE(); return;
label_DE53:; /* GotoClearObjectCntrl */
    /* $DE53: 4C */ nes_cpu_instruction_boundary(0xDE53, 3); nes_cpu_instruction_boundary(0xDF2D, 2); func_DF2D(); return;
}

void func_DD50(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DD50");
#endif
label_DD50:;
    /* $DD50: 0A */ nes_cpu_instruction_boundary(0xDD50, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_DD51:;
    /* $DD51: E6 */ nes_cpu_instruction_boundary(0xDD51, 5); { uint16_t a=0x96; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DD53:;
    /* $DD53: C9 */ nes_cpu_instruction_boundary(0xDD53, 2); { int r=g_cpu.A-0x89; g_cpu.C=(g_cpu.A>=0x89)?1:0; FLAG_NZ(r&0xFF); }
label_DD55:;
    /* $DD55: D0 */ nes_cpu_instruction_boundary(0xDD55, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xDD4A); return; }
label_DD57:;
    /* $DD57: 46 */ nes_cpu_instruction_boundary(0xDD57, 5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_DD59:;
    /* $DD59: B0 */ nes_cpu_instruction_boundary(0xDD59, 2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xDD4A); return; }
label_DD5B:;
    /* $DD5B: A6 */ nes_cpu_instruction_boundary(0xDD5B, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_DD5D:;
    /* $DD5D: A5 */ nes_cpu_instruction_boundary(0xDD5D, 3); g_cpu.A = nes_read(0x74); FLAG_NZ(g_cpu.A);
label_DD5F:;
    /* $DD5F: C9 */ nes_cpu_instruction_boundary(0xDD5F, 2); { int r=g_cpu.A-0x13; g_cpu.C=(g_cpu.A>=0x13)?1:0; FLAG_NZ(r&0xFF); }
label_DD61:;
    /* $DD61: F0 */ nes_cpu_instruction_boundary(0xDD61, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DD66; }
label_DD63:;
    /* $DD63: 4C */ nes_cpu_instruction_boundary(0xDD63, 3); nes_cpu_instruction_boundary(0xFA18, 2); func_FA18(); return;
label_DD66:;
    /* $DD66: A5 */ nes_cpu_instruction_boundary(0xDD66, 3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_DD68:;
    /* $DD68: A0 */ nes_cpu_instruction_boundary(0xDD68, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_DD6A:;
    /* $DD6A: 84 */ nes_cpu_instruction_boundary(0xDD6A, 3); nes_write(0x96, g_cpu.Y);
label_DD6C:;
    /* $DD6C: 84 */ nes_cpu_instruction_boundary(0xDD6C, 3); nes_write(0x95, g_cpu.Y);
label_DD6E:;
    /* $DD6E: C8 */ nes_cpu_instruction_boundary(0xDD6E, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DD6F:;
    /* $DD6F: 84 */ nes_cpu_instruction_boundary(0xDD6F, 3); nes_write(0x93, g_cpu.Y);
label_DD71:;
    /* $DD71: 84 */ nes_cpu_instruction_boundary(0xDD71, 3); nes_write(0x94, g_cpu.Y);
label_DD73:;
    /* $DD73: D0 */ nes_cpu_instruction_boundary(0xDD73, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xDD30); return; }
label_DD75:;
    /* $DD75: 20 */ nes_cpu_instruction_boundary(0xDD75, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xDD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x77; g_cpu.S--; func_CBF9();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDD75, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DD78:;
    /* $DD78: A5 */ nes_cpu_instruction_boundary(0xDD78, 3); g_cpu.A = nes_read(0x74); FLAG_NZ(g_cpu.A);
label_DD7A:;
    /* $DD7A: 29 */ nes_cpu_instruction_boundary(0xDD7A, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_DD7C:;
    /* $DD7C: 8D */ nes_cpu_instruction_boundary(0xDD7C, 4); nes_write(0x0108, g_cpu.A);
label_DD7F:;
    /* $DD7F: 4A */ nes_cpu_instruction_boundary(0xDD7F, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_DD80:;
    /* $DD80: A8 */ nes_cpu_instruction_boundary(0xDD80, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_DD81:;
    /* $DD81: 99 */ nes_cpu_instruction_boundary(0xDD81, 5); nes_write((0x687A + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_DD84:;
    /* $DD84: A9 */ nes_cpu_instruction_boundary(0xDD84, 2); g_cpu.A = 0x4B; FLAG_NZ(g_cpu.A);
label_DD86:;
    /* $DD86: 20 */ nes_cpu_instruction_boundary(0xDD86, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xDD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x88; g_cpu.S--; func_DD97();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDD86, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DD89:;
    /* $DD89: D0 */ nes_cpu_instruction_boundary(0xDD89, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xDD5B, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DD5B;
    }
label_DD8B:; /* DrawEnemy */
    /* $DD8B: A6 */ nes_cpu_instruction_boundary(0xDD8B, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_DD8D:;
    /* $DD8D: BD */ nes_cpu_instruction_boundary(0xDD8D, 4); g_cpu.A = nes_read((0x6AF7 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DD90:;
    /* $DD90: C9 */ nes_cpu_instruction_boundary(0xDD90, 2); { int r=g_cpu.A-0xF7; g_cpu.C=(g_cpu.A>=0xF7)?1:0; FLAG_NZ(r&0xFF); }
label_DD92:;
    /* $DD92: D0 */ nes_cpu_instruction_boundary(0xDD92, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_DDB0; }
label_DD94:;
    /* $DD94: 4C */ nes_cpu_instruction_boundary(0xDD94, 3); nes_cpu_instruction_boundary(0xDF2D, 2); func_DF2D(); return;
label_DDB0:; /* DrawEnemy_NotBlank */
    /* $DDB0: BD */ nes_cpu_instruction_boundary(0xDDB0, 4); g_cpu.A = nes_read((0x0400 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDB3:;
    /* $DDB3: 85 */ nes_cpu_instruction_boundary(0xDDB3, 3); nes_write(0x0A, g_cpu.A);
label_DDB5:;
    /* $DDB5: BD */ nes_cpu_instruction_boundary(0xDDB5, 4); g_cpu.A = nes_read((0x0401 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDB8:;
    /* $DDB8: 85 */ nes_cpu_instruction_boundary(0xDDB8, 3); nes_write(0x0B, g_cpu.A);
label_DDBA:;
    /* $DDBA: BD */ nes_cpu_instruction_boundary(0xDDBA, 4); g_cpu.A = nes_read((0x6AFB + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDBD:;
    /* $DDBD: 85 */ nes_cpu_instruction_boundary(0xDDBD, 3); nes_write(0x06, g_cpu.A);
label_DDBF:;
    /* $DDBF: BD */ nes_cpu_instruction_boundary(0xDDBF, 4); g_cpu.A = nes_read((0x6AF7 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDC2:;
    /* $DDC2: 0A */ nes_cpu_instruction_boundary(0xDDC2, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_DDC3:;
    /* $DDC3: A8 */ nes_cpu_instruction_boundary(0xDDC3, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_DDC4:;
    /* $DDC4: B1 */ nes_cpu_instruction_boundary(0xDDC4, 5); g_cpu.A = nes_read((nes_read16zp(0x41) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDC6:;
    /* $DDC6: 90 */ nes_cpu_instruction_boundary(0xDDC6, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DDCA; }
label_DDC8:;
    /* $DDC8: B1 */ nes_cpu_instruction_boundary(0xDDC8, 5); g_cpu.A = nes_read((nes_read16zp(0x43) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDCA:;
    /* $DDCA: 85 */ nes_cpu_instruction_boundary(0xDDCA, 3); nes_write(0x00, g_cpu.A);
label_DDCC:;
    /* $DDCC: C8 */ nes_cpu_instruction_boundary(0xDDCC, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DDCD:;
    /* $DDCD: B1 */ nes_cpu_instruction_boundary(0xDDCD, 5); g_cpu.A = nes_read((nes_read16zp(0x41) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDCF:;
    /* $DDCF: 90 */ nes_cpu_instruction_boundary(0xDDCF, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DDD3; }
label_DDD1:;
    /* $DDD1: B1 */ nes_cpu_instruction_boundary(0xDDD1, 5); g_cpu.A = nes_read((nes_read16zp(0x43) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDD3:;
    /* $DDD3: 85 */ nes_cpu_instruction_boundary(0xDDD3, 3); nes_write(0x01, g_cpu.A);
label_DDD5:;
    /* $DDD5: 20 */ nes_cpu_instruction_boundary(0xDDD5, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xDD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD7; g_cpu.S--; func_DCC3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDDD5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DDD8:;
    /* $DDD8: A8 */ nes_cpu_instruction_boundary(0xDDD8, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_DDD9:;
    /* $DDD9: B1 */ nes_cpu_instruction_boundary(0xDDD9, 5); g_cpu.A = nes_read((nes_read16zp(0x45) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDDB:;
    /* $DDDB: 85 */ nes_cpu_instruction_boundary(0xDDDB, 3); nes_write(0x02, g_cpu.A);
label_DDDD:;
    /* $DDDD: C8 */ nes_cpu_instruction_boundary(0xDDDD, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DDDE:;
    /* $DDDE: B1 */ nes_cpu_instruction_boundary(0xDDDE, 5); g_cpu.A = nes_read((nes_read16zp(0x45) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDE0:;
    /* $DDE0: 85 */ nes_cpu_instruction_boundary(0xDDE0, 3); nes_write(0x03, g_cpu.A);
label_DDE2:;
    /* $DDE2: A0 */ nes_cpu_instruction_boundary(0xDDE2, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_DDE4:;
    /* $DDE4: E0 */ nes_cpu_instruction_boundary(0xDDE4, 2); { int r=g_cpu.X-0x02; g_cpu.C=(g_cpu.X>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_DDE6:;
    /* $DDE6: D0 */ nes_cpu_instruction_boundary(0xDDE6, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_DE05; }
label_DDE8:;
    /* $DDE8: A6 */ nes_cpu_instruction_boundary(0xDDE8, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_DDEA:;
    /* $DDEA: FE */ nes_cpu_instruction_boundary(0xDDEA, 7); { uint16_t a=(0x0406 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DDED:;
    /* $DDED: BD */ nes_cpu_instruction_boundary(0xDDED, 4); g_cpu.A = nes_read((0x0406 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDF0:;
    /* $DDF0: 48 */ nes_cpu_instruction_boundary(0xDDF0, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_DDF1:;
    /* $DDF1: 29 */ nes_cpu_instruction_boundary(0xDDF1, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_DDF3:;
    /* $DDF3: AA */ nes_cpu_instruction_boundary(0xDDF3, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_DDF4:;
    /* $DDF4: A5 */ nes_cpu_instruction_boundary(0xDDF4, 3); g_cpu.A = nes_read(0x05); FLAG_NZ(g_cpu.A);
label_DDF6:;
    /* $DDF6: 29 */ nes_cpu_instruction_boundary(0xDDF6, 2); g_cpu.A &= 0x3F; FLAG_NZ(g_cpu.A);
label_DDF8:;
    /* $DDF8: 1D */ nes_cpu_instruction_boundary(0xDDF8, 4); g_cpu.A |= nes_read((0xDC8B + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDFB:;
    /* $DDFB: 85 */ nes_cpu_instruction_boundary(0xDDFB, 3); nes_write(0x05, g_cpu.A);
label_DDFD:;
    /* $DDFD: 68 */ nes_cpu_instruction_boundary(0xDDFD, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_DDFE:;
    /* $DDFE: C9 */ nes_cpu_instruction_boundary(0xDDFE, 2); { int r=g_cpu.A-0x19; g_cpu.C=(g_cpu.A>=0x19)?1:0; FLAG_NZ(r&0xFF); }
label_DE00:;
    /* $DE00: D0 */ nes_cpu_instruction_boundary(0xDE00, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_DE05; }
label_DE02:;
    /* $DE02: 4C */ nes_cpu_instruction_boundary(0xDE02, 3); nes_cpu_instruction_boundary(0xDCF5, 2); func_DCF5(); return;
label_DE05:;
    /* $DE05: A6 */ nes_cpu_instruction_boundary(0xDE05, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_DE07:;
    /* $DE07: C8 */ nes_cpu_instruction_boundary(0xDE07, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DE08:;
    /* $DE08: B1 */ nes_cpu_instruction_boundary(0xDE08, 5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DE0A:;
    /* $DE0A: 9D */ nes_cpu_instruction_boundary(0xDE0A, 5); nes_write((0x6AF5 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DE0D:;
    /* $DE0D: 20 */ nes_cpu_instruction_boundary(0xDE0D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xDE; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0F; g_cpu.S--; func_DE3D();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDE0D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DE10:;
    /* $DE10: C8 */ nes_cpu_instruction_boundary(0xDE10, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DE11:;
    /* $DE11: B1 */ nes_cpu_instruction_boundary(0xDE11, 5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DE13:;
    /* $DE13: 9D */ nes_cpu_instruction_boundary(0xDE13, 5); nes_write((0x6AF6 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DE16:;
    /* $DE16: 85 */ nes_cpu_instruction_boundary(0xDE16, 3); nes_write(0x09, g_cpu.A);
label_DE18:;
    /* $DE18: C8 */ nes_cpu_instruction_boundary(0xDE18, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DE19:;
    /* $DE19: 84 */ nes_cpu_instruction_boundary(0xDE19, 3); nes_write(0x11, g_cpu.Y);
label_DE1B:;
    /* $DE1B: 20 */ nes_cpu_instruction_boundary(0xDE1B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xDE; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1D; g_cpu.S--; func_DFDF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDE1B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DE1E:;
    /* $DE1E: 8A */ nes_cpu_instruction_boundary(0xDE1E, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_DE1F:;
    /* $DE1F: 0A */ nes_cpu_instruction_boundary(0xDE1F, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_DE20:;
    /* $DE20: 85 */ nes_cpu_instruction_boundary(0xDE20, 3); nes_write(0x08, g_cpu.A);
label_DE22:;
    /* $DE22: A6 */ nes_cpu_instruction_boundary(0xDE22, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_DE24:;
    /* $DE24: BD */ nes_cpu_instruction_boundary(0xDE24, 4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DE27:;
    /* $DE27: 29 */ nes_cpu_instruction_boundary(0xDE27, 2); g_cpu.A &= 0xFD; FLAG_NZ(g_cpu.A);
label_DE29:;
    /* $DE29: 05 */ nes_cpu_instruction_boundary(0xDE29, 3); g_cpu.A |= nes_read(0x08); FLAG_NZ(g_cpu.A);
label_DE2B:;
    /* $DE2B: 9D */ nes_cpu_instruction_boundary(0xDE2B, 5); nes_write((0x0405 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DE2E:;
    /* $DE2E: A5 */ nes_cpu_instruction_boundary(0xDE2E, 3); g_cpu.A = nes_read(0x08); FLAG_NZ(g_cpu.A);
label_DE30:;
    /* $DE30: F0 */ nes_cpu_instruction_boundary(0xDE30, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DE53; }
label_DE32:;
    /* $DE32: 4C */ nes_cpu_instruction_boundary(0xDE32, 3); nes_cpu_instruction_boundary(0xDEDE, 2); func_DEDE(); return;
label_DE53:; /* GotoClearObjectCntrl */
    /* $DE53: 4C */ nes_cpu_instruction_boundary(0xDE53, 3); nes_cpu_instruction_boundary(0xDF2D, 2); func_DF2D(); return;
}

void func_FF22(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_FF22");
#endif
label_FF22:;
    /* $FF22: 04 */ nes_cpu_instruction_boundary(0xFF22, 3); (void)nes_read(0xD0); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_FF24:;
    /* $FF24: E1 */ nes_cpu_instruction_boundary(0xFF24, 6); { uint8_t m=nes_read(nes_read16zp((0xA5 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_FF26:;
    /* $FF26: 01 */ nes_cpu_instruction_boundary(0xFF26, 6); g_cpu.A |= nes_read(nes_read16zp((0x29 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_FF28:;
    /* $FF28: 04 */ nes_cpu_instruction_boundary(0xFF28, 3); (void)nes_read(0xF0); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_FF2A:;
    /* $FF2A: 06 */ nes_cpu_instruction_boundary(0xFF2A, 5); { uint16_t a=0xA5; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_FF2C:;
    /* $FF2C: 01 */ nes_cpu_instruction_boundary(0xFF2C, 6); g_cpu.A |= nes_read(nes_read16zp((0x09 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_FF2E:;
    /* $FF2E: 0C */ nes_cpu_instruction_boundary(0xFF2E, 4); (void)nes_read(0x0185); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_FF31:; /* DrawTileBlast_inNameTable0 */
    /* $FF31: A5 */ nes_cpu_instruction_boundary(0xFF31, 3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_FF33:;
    /* $FF33: 29 */ nes_cpu_instruction_boundary(0xFF33, 2); g_cpu.A &= 0x2F; FLAG_NZ(g_cpu.A);
label_FF35:;
    /* $FF35: 85 */ nes_cpu_instruction_boundary(0xFF35, 3); nes_write(0x01, g_cpu.A);
label_FF37:;
    /* $FF37: 20 */ nes_cpu_instruction_boundary(0xFF37, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFF; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x39; g_cpu.S--; func_C328();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFF37, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FF3A:;
    /* $FF3A: 18 */ nes_cpu_instruction_boundary(0xFF3A, 2); g_cpu.C = 0;
label_FF3B:;
    /* $FF3B: 60 */ nes_cpu_instruction_boundary(0xFF3B, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

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
    /* $DD0F: 04 */ nes_cpu_instruction_boundary(0xDD0F, 3); (void)nes_read(0x0A); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_DD11:;
    /* $DD11: 30 */ nes_cpu_instruction_boundary(0xDD11, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_DD75; }
label_DD13:;
    /* $DD13: 20 */ nes_cpu_instruction_boundary(0xDD13, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xDD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x15; g_cpu.S--; func_F74B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDD13, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DD16:;
    /* $DD16: 85 */ nes_cpu_instruction_boundary(0xDD16, 3); nes_write(0x00, g_cpu.A);
label_DD18:;
    /* $DD18: 20 */ nes_cpu_instruction_boundary(0xDD18, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xDD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1A; g_cpu.S--; if (!nes_dispatch_call(0x80B0, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDD18, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DD1B:;
    /* $DD1B: 29 */ nes_cpu_instruction_boundary(0xDD1B, 2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_DD1D:;
    /* $DD1D: 9D */ nes_cpu_instruction_boundary(0xDD1D, 5); nes_write((0x6B02 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DD20:;
    /* $DD20: A9 */ nes_cpu_instruction_boundary(0xDD20, 2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_DD22:;
    /* $DD22: 9D */ nes_cpu_instruction_boundary(0xDD22, 5); nes_write((0x6AF4 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DD25:;
    /* $DD25: A9 */ nes_cpu_instruction_boundary(0xDD25, 2); g_cpu.A = 0x60; FLAG_NZ(g_cpu.A);
label_DD27:;
    /* $DD27: 9D */ nes_cpu_instruction_boundary(0xDD27, 5); nes_write((0x040D + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DD2A:;
    /* $DD2A: A5 */ nes_cpu_instruction_boundary(0xDD2A, 3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_DD2C:;
    /* $DD2C: C9 */ nes_cpu_instruction_boundary(0xDD2C, 2); { int r=g_cpu.A-0x10; g_cpu.C=(g_cpu.A>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_DD2E:;
    /* $DD2E: 90 */ nes_cpu_instruction_boundary(0xDD2E, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DD5B; }
label_DD30:;
    /* $DD30: 29 */ nes_cpu_instruction_boundary(0xDD30, 2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_DD32:;
    /* $DD32: A8 */ nes_cpu_instruction_boundary(0xDD32, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_DD33:;
    /* $DD33: B9 */ nes_cpu_instruction_boundary(0xDD33, 4); g_cpu.A = nes_read((0xDE35 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DD36:;
    /* $DD36: 9D */ nes_cpu_instruction_boundary(0xDD36, 5); nes_write((0x6AF7 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DD39:;
    /* $DD39: C9 */ nes_cpu_instruction_boundary(0xDD39, 2); { int r=g_cpu.A-0x80; g_cpu.C=(g_cpu.A>=0x80)?1:0; FLAG_NZ(r&0xFF); }
label_DD3B:;
    /* $DD3B: D0 */ nes_cpu_instruction_boundary(0xDD3B, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_DD4B; }
label_DD3D:;
    /* $DD3D: A4 */ nes_cpu_instruction_boundary(0xDD3D, 3); g_cpu.Y = nes_read(0x93); FLAG_NZ(g_cpu.Y);
label_DD3F:;
    /* $DD3F: C4 */ nes_cpu_instruction_boundary(0xDD3F, 3); { uint8_t m=nes_read(0x95); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_DD41:;
    /* $DD41: F0 */ nes_cpu_instruction_boundary(0xDD41, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DD5B; }
label_DD43:;
    /* $DD43: AD */ nes_cpu_instruction_boundary(0xDD43, 4); g_cpu.A = nes_read(0x687A); FLAG_NZ(g_cpu.A);
label_DD46:;
    /* $DD46: F0 */ nes_cpu_instruction_boundary(0xDD46, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DD5B; }
label_DD48:;
    /* $DD48: E6 */ nes_cpu_instruction_boundary(0xDD48, 5); { uint16_t a=0x95; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DD4A:; /* RTS_X137 */
    /* $DD4A: 60 */ nes_cpu_instruction_boundary(0xDD4A, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_DD4B:;
    /* $DD4B: A4 */ nes_cpu_instruction_boundary(0xDD4B, 3); g_cpu.Y = nes_read(0x94); FLAG_NZ(g_cpu.Y);
label_DD4D:;
    /* $DD4D: C4 */ nes_cpu_instruction_boundary(0xDD4D, 3); { uint8_t m=nes_read(0x96); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_DD4F:;
    /* $DD4F: F0 */ nes_cpu_instruction_boundary(0xDD4F, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DD5B; }
label_DD51:;
    /* $DD51: E6 */ nes_cpu_instruction_boundary(0xDD51, 5); { uint16_t a=0x96; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DD53:;
    /* $DD53: C9 */ nes_cpu_instruction_boundary(0xDD53, 2); { int r=g_cpu.A-0x89; g_cpu.C=(g_cpu.A>=0x89)?1:0; FLAG_NZ(r&0xFF); }
label_DD55:;
    /* $DD55: D0 */ nes_cpu_instruction_boundary(0xDD55, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xDD4A, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DD4A;
    }
label_DD57:;
    /* $DD57: 46 */ nes_cpu_instruction_boundary(0xDD57, 5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_DD59:;
    /* $DD59: B0 */ nes_cpu_instruction_boundary(0xDD59, 2); if (g_cpu.C) {
    nes_cpu_instruction_boundary(0xDD4A, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DD4A;
    }
label_DD5B:;
    /* $DD5B: A6 */ nes_cpu_instruction_boundary(0xDD5B, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_DD5D:;
    /* $DD5D: A5 */ nes_cpu_instruction_boundary(0xDD5D, 3); g_cpu.A = nes_read(0x74); FLAG_NZ(g_cpu.A);
label_DD5F:;
    /* $DD5F: C9 */ nes_cpu_instruction_boundary(0xDD5F, 2); { int r=g_cpu.A-0x13; g_cpu.C=(g_cpu.A>=0x13)?1:0; FLAG_NZ(r&0xFF); }
label_DD61:;
    /* $DD61: F0 */ nes_cpu_instruction_boundary(0xDD61, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DD66; }
label_DD63:;
    /* $DD63: 4C */ nes_cpu_instruction_boundary(0xDD63, 3); nes_cpu_instruction_boundary(0xFA18, 2); func_FA18(); return;
label_DD66:;
    /* $DD66: A5 */ nes_cpu_instruction_boundary(0xDD66, 3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_DD68:;
    /* $DD68: A0 */ nes_cpu_instruction_boundary(0xDD68, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_DD6A:;
    /* $DD6A: 84 */ nes_cpu_instruction_boundary(0xDD6A, 3); nes_write(0x96, g_cpu.Y);
label_DD6C:;
    /* $DD6C: 84 */ nes_cpu_instruction_boundary(0xDD6C, 3); nes_write(0x95, g_cpu.Y);
label_DD6E:;
    /* $DD6E: C8 */ nes_cpu_instruction_boundary(0xDD6E, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DD6F:;
    /* $DD6F: 84 */ nes_cpu_instruction_boundary(0xDD6F, 3); nes_write(0x93, g_cpu.Y);
label_DD71:;
    /* $DD71: 84 */ nes_cpu_instruction_boundary(0xDD71, 3); nes_write(0x94, g_cpu.Y);
label_DD73:;
    /* $DD73: D0 */ nes_cpu_instruction_boundary(0xDD73, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xDD30, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DD30;
    }
label_DD75:;
    /* $DD75: 20 */ nes_cpu_instruction_boundary(0xDD75, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xDD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x77; g_cpu.S--; func_CBF9();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDD75, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DD78:;
    /* $DD78: A5 */ nes_cpu_instruction_boundary(0xDD78, 3); g_cpu.A = nes_read(0x74); FLAG_NZ(g_cpu.A);
label_DD7A:;
    /* $DD7A: 29 */ nes_cpu_instruction_boundary(0xDD7A, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_DD7C:;
    /* $DD7C: 8D */ nes_cpu_instruction_boundary(0xDD7C, 4); nes_write(0x0108, g_cpu.A);
label_DD7F:;
    /* $DD7F: 4A */ nes_cpu_instruction_boundary(0xDD7F, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_DD80:;
    /* $DD80: A8 */ nes_cpu_instruction_boundary(0xDD80, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_DD81:;
    /* $DD81: 99 */ nes_cpu_instruction_boundary(0xDD81, 5); nes_write((0x687A + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_DD84:;
    /* $DD84: A9 */ nes_cpu_instruction_boundary(0xDD84, 2); g_cpu.A = 0x4B; FLAG_NZ(g_cpu.A);
label_DD86:;
    /* $DD86: 20 */ nes_cpu_instruction_boundary(0xDD86, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xDD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x88; g_cpu.S--; func_DD97();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDD86, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DD89:;
    /* $DD89: D0 */ nes_cpu_instruction_boundary(0xDD89, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xDD5B, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DD5B;
    }
label_DD8B:; /* DrawEnemy */
    /* $DD8B: A6 */ nes_cpu_instruction_boundary(0xDD8B, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_DD8D:;
    /* $DD8D: BD */ nes_cpu_instruction_boundary(0xDD8D, 4); g_cpu.A = nes_read((0x6AF7 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DD90:;
    /* $DD90: C9 */ nes_cpu_instruction_boundary(0xDD90, 2); { int r=g_cpu.A-0xF7; g_cpu.C=(g_cpu.A>=0xF7)?1:0; FLAG_NZ(r&0xFF); }
label_DD92:;
    /* $DD92: D0 */ nes_cpu_instruction_boundary(0xDD92, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_DDB0; }
label_DD94:;
    /* $DD94: 4C */ nes_cpu_instruction_boundary(0xDD94, 3); nes_cpu_instruction_boundary(0xDF2D, 2); func_DF2D(); return;
label_DDB0:; /* DrawEnemy_NotBlank */
    /* $DDB0: BD */ nes_cpu_instruction_boundary(0xDDB0, 4); g_cpu.A = nes_read((0x0400 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDB3:;
    /* $DDB3: 85 */ nes_cpu_instruction_boundary(0xDDB3, 3); nes_write(0x0A, g_cpu.A);
label_DDB5:;
    /* $DDB5: BD */ nes_cpu_instruction_boundary(0xDDB5, 4); g_cpu.A = nes_read((0x0401 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDB8:;
    /* $DDB8: 85 */ nes_cpu_instruction_boundary(0xDDB8, 3); nes_write(0x0B, g_cpu.A);
label_DDBA:;
    /* $DDBA: BD */ nes_cpu_instruction_boundary(0xDDBA, 4); g_cpu.A = nes_read((0x6AFB + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDBD:;
    /* $DDBD: 85 */ nes_cpu_instruction_boundary(0xDDBD, 3); nes_write(0x06, g_cpu.A);
label_DDBF:;
    /* $DDBF: BD */ nes_cpu_instruction_boundary(0xDDBF, 4); g_cpu.A = nes_read((0x6AF7 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDC2:;
    /* $DDC2: 0A */ nes_cpu_instruction_boundary(0xDDC2, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_DDC3:;
    /* $DDC3: A8 */ nes_cpu_instruction_boundary(0xDDC3, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_DDC4:;
    /* $DDC4: B1 */ nes_cpu_instruction_boundary(0xDDC4, 5); g_cpu.A = nes_read((nes_read16zp(0x41) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDC6:;
    /* $DDC6: 90 */ nes_cpu_instruction_boundary(0xDDC6, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DDCA; }
label_DDC8:;
    /* $DDC8: B1 */ nes_cpu_instruction_boundary(0xDDC8, 5); g_cpu.A = nes_read((nes_read16zp(0x43) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDCA:;
    /* $DDCA: 85 */ nes_cpu_instruction_boundary(0xDDCA, 3); nes_write(0x00, g_cpu.A);
label_DDCC:;
    /* $DDCC: C8 */ nes_cpu_instruction_boundary(0xDDCC, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DDCD:;
    /* $DDCD: B1 */ nes_cpu_instruction_boundary(0xDDCD, 5); g_cpu.A = nes_read((nes_read16zp(0x41) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDCF:;
    /* $DDCF: 90 */ nes_cpu_instruction_boundary(0xDDCF, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DDD3; }
label_DDD1:;
    /* $DDD1: B1 */ nes_cpu_instruction_boundary(0xDDD1, 5); g_cpu.A = nes_read((nes_read16zp(0x43) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDD3:;
    /* $DDD3: 85 */ nes_cpu_instruction_boundary(0xDDD3, 3); nes_write(0x01, g_cpu.A);
label_DDD5:;
    /* $DDD5: 20 */ nes_cpu_instruction_boundary(0xDDD5, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xDD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD7; g_cpu.S--; func_DCC3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDDD5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DDD8:;
    /* $DDD8: A8 */ nes_cpu_instruction_boundary(0xDDD8, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_DDD9:;
    /* $DDD9: B1 */ nes_cpu_instruction_boundary(0xDDD9, 5); g_cpu.A = nes_read((nes_read16zp(0x45) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDDB:;
    /* $DDDB: 85 */ nes_cpu_instruction_boundary(0xDDDB, 3); nes_write(0x02, g_cpu.A);
label_DDDD:;
    /* $DDDD: C8 */ nes_cpu_instruction_boundary(0xDDDD, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DDDE:;
    /* $DDDE: B1 */ nes_cpu_instruction_boundary(0xDDDE, 5); g_cpu.A = nes_read((nes_read16zp(0x45) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDE0:;
    /* $DDE0: 85 */ nes_cpu_instruction_boundary(0xDDE0, 3); nes_write(0x03, g_cpu.A);
label_DDE2:;
    /* $DDE2: A0 */ nes_cpu_instruction_boundary(0xDDE2, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_DDE4:;
    /* $DDE4: E0 */ nes_cpu_instruction_boundary(0xDDE4, 2); { int r=g_cpu.X-0x02; g_cpu.C=(g_cpu.X>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_DDE6:;
    /* $DDE6: D0 */ nes_cpu_instruction_boundary(0xDDE6, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_DE05; }
label_DDE8:;
    /* $DDE8: A6 */ nes_cpu_instruction_boundary(0xDDE8, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_DDEA:;
    /* $DDEA: FE */ nes_cpu_instruction_boundary(0xDDEA, 7); { uint16_t a=(0x0406 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DDED:;
    /* $DDED: BD */ nes_cpu_instruction_boundary(0xDDED, 4); g_cpu.A = nes_read((0x0406 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDF0:;
    /* $DDF0: 48 */ nes_cpu_instruction_boundary(0xDDF0, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_DDF1:;
    /* $DDF1: 29 */ nes_cpu_instruction_boundary(0xDDF1, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_DDF3:;
    /* $DDF3: AA */ nes_cpu_instruction_boundary(0xDDF3, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_DDF4:;
    /* $DDF4: A5 */ nes_cpu_instruction_boundary(0xDDF4, 3); g_cpu.A = nes_read(0x05); FLAG_NZ(g_cpu.A);
label_DDF6:;
    /* $DDF6: 29 */ nes_cpu_instruction_boundary(0xDDF6, 2); g_cpu.A &= 0x3F; FLAG_NZ(g_cpu.A);
label_DDF8:;
    /* $DDF8: 1D */ nes_cpu_instruction_boundary(0xDDF8, 4); g_cpu.A |= nes_read((0xDC8B + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DDFB:;
    /* $DDFB: 85 */ nes_cpu_instruction_boundary(0xDDFB, 3); nes_write(0x05, g_cpu.A);
label_DDFD:;
    /* $DDFD: 68 */ nes_cpu_instruction_boundary(0xDDFD, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_DDFE:;
    /* $DDFE: C9 */ nes_cpu_instruction_boundary(0xDDFE, 2); { int r=g_cpu.A-0x19; g_cpu.C=(g_cpu.A>=0x19)?1:0; FLAG_NZ(r&0xFF); }
label_DE00:;
    /* $DE00: D0 */ nes_cpu_instruction_boundary(0xDE00, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_DE05; }
label_DE02:;
    /* $DE02: 4C */ nes_cpu_instruction_boundary(0xDE02, 3); nes_cpu_instruction_boundary(0xDCF5, 2); func_DCF5(); return;
label_DE05:;
    /* $DE05: A6 */ nes_cpu_instruction_boundary(0xDE05, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_DE07:;
    /* $DE07: C8 */ nes_cpu_instruction_boundary(0xDE07, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DE08:;
    /* $DE08: B1 */ nes_cpu_instruction_boundary(0xDE08, 5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DE0A:;
    /* $DE0A: 9D */ nes_cpu_instruction_boundary(0xDE0A, 5); nes_write((0x6AF5 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DE0D:;
    /* $DE0D: 20 */ nes_cpu_instruction_boundary(0xDE0D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xDE; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0F; g_cpu.S--; func_DE3D();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDE0D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DE10:;
    /* $DE10: C8 */ nes_cpu_instruction_boundary(0xDE10, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DE11:;
    /* $DE11: B1 */ nes_cpu_instruction_boundary(0xDE11, 5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DE13:;
    /* $DE13: 9D */ nes_cpu_instruction_boundary(0xDE13, 5); nes_write((0x6AF6 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DE16:;
    /* $DE16: 85 */ nes_cpu_instruction_boundary(0xDE16, 3); nes_write(0x09, g_cpu.A);
label_DE18:;
    /* $DE18: C8 */ nes_cpu_instruction_boundary(0xDE18, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DE19:;
    /* $DE19: 84 */ nes_cpu_instruction_boundary(0xDE19, 3); nes_write(0x11, g_cpu.Y);
label_DE1B:;
    /* $DE1B: 20 */ nes_cpu_instruction_boundary(0xDE1B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xDE; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1D; g_cpu.S--; func_DFDF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDE1B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DE1E:;
    /* $DE1E: 8A */ nes_cpu_instruction_boundary(0xDE1E, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_DE1F:;
    /* $DE1F: 0A */ nes_cpu_instruction_boundary(0xDE1F, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_DE20:;
    /* $DE20: 85 */ nes_cpu_instruction_boundary(0xDE20, 3); nes_write(0x08, g_cpu.A);
label_DE22:;
    /* $DE22: A6 */ nes_cpu_instruction_boundary(0xDE22, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_DE24:;
    /* $DE24: BD */ nes_cpu_instruction_boundary(0xDE24, 4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DE27:;
    /* $DE27: 29 */ nes_cpu_instruction_boundary(0xDE27, 2); g_cpu.A &= 0xFD; FLAG_NZ(g_cpu.A);
label_DE29:;
    /* $DE29: 05 */ nes_cpu_instruction_boundary(0xDE29, 3); g_cpu.A |= nes_read(0x08); FLAG_NZ(g_cpu.A);
label_DE2B:;
    /* $DE2B: 9D */ nes_cpu_instruction_boundary(0xDE2B, 5); nes_write((0x0405 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DE2E:;
    /* $DE2E: A5 */ nes_cpu_instruction_boundary(0xDE2E, 3); g_cpu.A = nes_read(0x08); FLAG_NZ(g_cpu.A);
label_DE30:;
    /* $DE30: F0 */ nes_cpu_instruction_boundary(0xDE30, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DE53; }
label_DE32:;
    /* $DE32: 4C */ nes_cpu_instruction_boundary(0xDE32, 3); nes_cpu_instruction_boundary(0xDEDE, 2); func_DEDE(); return;
label_DE53:; /* GotoClearObjectCntrl */
    /* $DE53: 4C */ nes_cpu_instruction_boundary(0xDE53, 3); nes_cpu_instruction_boundary(0xDF2D, 2); func_DF2D(); return;
}

void func_F8F6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F8F6");
#endif
label_F8F6:;
    /* $F8F6: F4 */ nes_cpu_instruction_boundary(0xF8F6, 4); (void)nes_read((0x60 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F8F8:; /* SpawnEnProjectile_F8F8 */
    /* $F8F8: A5 */ nes_cpu_instruction_boundary(0xF8F8, 3); g_cpu.A = nes_read(0x85); FLAG_NZ(g_cpu.A);
label_F8FA:;
    /* $F8FA: C9 */ nes_cpu_instruction_boundary(0xF8FA, 2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_F8FC:;
    /* $F8FC: 90 */ nes_cpu_instruction_boundary(0xF8FC, 2); if (!g_cpu.C) { maybe_trigger_vblank(2); goto label_F91C; }
label_F8FE:;
    /* $F8FE: A6 */ nes_cpu_instruction_boundary(0xF8FE, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_F900:;
    /* $F900: BD */ nes_cpu_instruction_boundary(0xF900, 4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F903:;
    /* $F903: 4A */ nes_cpu_instruction_boundary(0xF903, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_F904:;
    /* $F904: A5 */ nes_cpu_instruction_boundary(0xF904, 3); g_cpu.A = nes_read(0x88); FLAG_NZ(g_cpu.A);
label_F906:;
    /* $F906: 2A */ nes_cpu_instruction_boundary(0xF906, 2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_F907:;
    /* $F907: 29 */ nes_cpu_instruction_boundary(0xF907, 2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_F909:;
    /* $F909: 99 */ nes_cpu_instruction_boundary(0xF909, 5); nes_write((0x040A + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F90C:;
    /* $F90C: A9 */ nes_cpu_instruction_boundary(0xF90C, 2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_F90E:;
    /* $F90E: 99 */ nes_cpu_instruction_boundary(0xF90E, 5); nes_write((0x6AF4 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F911:;
    /* $F911: A9 */ nes_cpu_instruction_boundary(0xF911, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_F913:;
    /* $F913: 99 */ nes_cpu_instruction_boundary(0xF913, 5); nes_write((0x0409 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F916:;
    /* $F916: 99 */ nes_cpu_instruction_boundary(0xF916, 5); nes_write((0x6AF8 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F919:;
    /* $F919: 99 */ nes_cpu_instruction_boundary(0xF919, 5); nes_write((0x0408 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F91C:; /* SpawnEnProjectile_F8F8_RTS */
    /* $F91C: 60 */ nes_cpu_instruction_boundary(0xF91C, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

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
    /* $FAF6: FA */ nes_cpu_instruction_boundary(0xFAF6, 2); /* NOP */
label_FAF7:;
    /* $FAF7: A5 */ nes_cpu_instruction_boundary(0xFAF7, 3); g_cpu.A = nes_read(0x4B); FLAG_NZ(g_cpu.A);
label_FAF9:;
    /* $FAF9: 38 */ nes_cpu_instruction_boundary(0xFAF9, 2); g_cpu.C = 1;
label_FAFA:;
    /* $FAFA: E9 */ nes_cpu_instruction_boundary(0xFAFA, 2); { uint8_t m=0x08; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_FAFC:;
    /* $FAFC: A8 */ nes_cpu_instruction_boundary(0xFAFC, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_FAFD:;
    /* $FAFD: D0 */ nes_cpu_instruction_boundary(0xFAFD, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xFAF4); return; }
label_FAFF:; /* UpdatePipeBugHole */
    /* $FAFF: 84 */ nes_cpu_instruction_boundary(0xFAFF, 3); nes_write(0x4B, g_cpu.Y);
label_FB01:;
    /* $FB01: BE */ nes_cpu_instruction_boundary(0xFB01, 4); g_cpu.X = nes_read((0x0728 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_FB04:;
    /* $FB04: E8 */ nes_cpu_instruction_boundary(0xFB04, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_FB05:;
    /* $FB05: F0 */ nes_cpu_instruction_boundary(0xFB05, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xFAB3); return; }
label_FB07:;
    /* $FB07: BE */ nes_cpu_instruction_boundary(0xFB07, 4); g_cpu.X = nes_read((0x0729 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_FB0A:;
    /* $FB0A: BD */ nes_cpu_instruction_boundary(0xFB0A, 4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FB0D:;
    /* $FB0D: F0 */ nes_cpu_instruction_boundary(0xFB0D, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_FB16; }
label_FB0F:;
    /* $FB0F: BD */ nes_cpu_instruction_boundary(0xFB0F, 4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FB12:;
    /* $FB12: 29 */ nes_cpu_instruction_boundary(0xFB12, 2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_FB14:;
    /* $FB14: D0 */ nes_cpu_instruction_boundary(0xFB14, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_FB87; }
label_FB16:; /* UpdatePipeBugHole_endIf_A */
    /* $FB16: 9D */ nes_cpu_instruction_boundary(0xFB16, 5); nes_write((0x0404 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_FB19:;
    /* $FB19: A9 */ nes_cpu_instruction_boundary(0xFB19, 2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_FB1B:;
    /* $FB1B: DD */ nes_cpu_instruction_boundary(0xFB1B, 4); { uint8_t m=nes_read((0x6B02 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_FB1E:;
    /* $FB1E: D0 */ nes_cpu_instruction_boundary(0xFB1E, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_FB70; }
label_FB20:;
    /* $FB20: DE */ nes_cpu_instruction_boundary(0xFB20, 7); { uint16_t a=(0x0409 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_FB23:;
    /* $FB23: D0 */ nes_cpu_instruction_boundary(0xFB23, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_FB87; }
label_FB25:;
    /* $FB25: B9 */ nes_cpu_instruction_boundary(0xFB25, 4); g_cpu.A = nes_read((0x0728 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FB28:;
    /* $FB28: 20 */ nes_cpu_instruction_boundary(0xFB28, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFB; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2A; g_cpu.S--; func_EB28();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFB28, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FB2B:;
    /* $FB2B: A4 */ nes_cpu_instruction_boundary(0xFB2B, 3); g_cpu.Y = nes_read(0x4B); FLAG_NZ(g_cpu.Y);
label_FB2D:;
    /* $FB2D: B9 */ nes_cpu_instruction_boundary(0xFB2D, 4); g_cpu.A = nes_read((0x072A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FB30:;
    /* $FB30: 9D */ nes_cpu_instruction_boundary(0xFB30, 5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_FB33:;
    /* $FB33: B9 */ nes_cpu_instruction_boundary(0xFB33, 4); g_cpu.A = nes_read((0x072B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FB36:;
    /* $FB36: 9D */ nes_cpu_instruction_boundary(0xFB36, 5); nes_write((0x0401 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_FB39:;
    /* $FB39: B9 */ nes_cpu_instruction_boundary(0xFB39, 4); g_cpu.A = nes_read((0x072C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FB3C:;
    /* $FB3C: 9D */ nes_cpu_instruction_boundary(0xFB3C, 5); nes_write((0x6AFB + g_cpu.X) & 0xFFFF, g_cpu.A);
label_FB3F:;
    /* $FB3F: A9 */ nes_cpu_instruction_boundary(0xFB3F, 2); g_cpu.A = 0x18; FLAG_NZ(g_cpu.A);
label_FB41:;
    /* $FB41: 9D */ nes_cpu_instruction_boundary(0xFB41, 5); nes_write((0x6AF6 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_FB44:;
    /* $FB44: A9 */ nes_cpu_instruction_boundary(0xFB44, 2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_FB46:;
    /* $FB46: 9D */ nes_cpu_instruction_boundary(0xFB46, 5); nes_write((0x6AF5 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_FB49:;
    /* $FB49: A0 */ nes_cpu_instruction_boundary(0xFB49, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_FB4B:;
    /* $FB4B: 20 */ nes_cpu_instruction_boundary(0xFB4B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFB; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x4D; g_cpu.S--; func_F186();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFB4B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FB4E:;
    /* $FB4E: 20 */ nes_cpu_instruction_boundary(0xFB4E, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFB; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x50; g_cpu.S--; func_F152();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFB4E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FB51:;
    /* $FB51: 20 */ nes_cpu_instruction_boundary(0xFB51, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFB; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x53; g_cpu.S--; func_F1BF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFB51, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FB54:;
    /* $FB54: 20 */ nes_cpu_instruction_boundary(0xFB54, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFB; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x56; g_cpu.S--; func_F1FA();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFB54, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FB57:;
    /* $FB57: 90 */ nes_cpu_instruction_boundary(0xFB57, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_FB87; }
label_FB59:;
    /* $FB59: A9 */ nes_cpu_instruction_boundary(0xFB59, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_FB5B:;
    /* $FB5B: 9D */ nes_cpu_instruction_boundary(0xFB5B, 5); nes_write((0x0409 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_FB5E:;
    /* $FB5E: 9D */ nes_cpu_instruction_boundary(0xFB5E, 5); nes_write((0x6AF4 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_FB61:;
    /* $FB61: 25 */ nes_cpu_instruction_boundary(0xFB61, 3); g_cpu.A &= nes_read(0x49); FLAG_NZ(g_cpu.A);
label_FB63:;
    /* $FB63: 0A */ nes_cpu_instruction_boundary(0xFB63, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_FB64:;
    /* $FB64: 9D */ nes_cpu_instruction_boundary(0xFB64, 5); nes_write((0x0405 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_FB67:;
    /* $FB67: BC */ nes_cpu_instruction_boundary(0xFB67, 4); g_cpu.Y = nes_read((0x6B02 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_FB6A:;
    /* $FB6A: 20 */ nes_cpu_instruction_boundary(0xFB6A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFB; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6C; g_cpu.S--; func_FB7B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFB6A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FB6D:;
    /* $FB6D: 4C */ nes_cpu_instruction_boundary(0xFB6D, 3); nes_cpu_instruction_boundary(0xF85A, 2); func_F85A(); return;
label_FB70:; /* UpdatePipeBugHole_clearEnemySlot */
    /* $FB70: 9D */ nes_cpu_instruction_boundary(0xFB70, 5); nes_write((0x6B02 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_FB73:;
    /* $FB73: A9 */ nes_cpu_instruction_boundary(0xFB73, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_FB75:;
    /* $FB75: 9D */ nes_cpu_instruction_boundary(0xFB75, 5); nes_write((0x0409 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_FB78:;
    /* $FB78: 4C */ nes_cpu_instruction_boundary(0xFB78, 3); nes_cpu_instruction_boundary(0xFA18, 2); func_FA18(); return;
label_FB87:; /* Exit13 */
    /* $FB87: 60 */ nes_cpu_instruction_boundary(0xFB87, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

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
    /* $FD04: 01 */ nes_cpu_instruction_boundary(0xFD04, 6); g_cpu.A |= nes_read(nes_read16zp((0x95 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_FD06:;
    /* $FD06: B0 */ nes_cpu_instruction_boundary(0xFD06, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_FD68; }
label_FD08:; /* UpdateMellow_FD08 */
    /* $FD08: A9 */ nes_cpu_instruction_boundary(0xFD08, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_FD0A:;
    /* $FD0A: 95 */ nes_cpu_instruction_boundary(0xFD0A, 4); nes_write((0xB5 + g_cpu.X) & 0xFF, g_cpu.A);
label_FD0C:;
    /* $FD0C: A8 */ nes_cpu_instruction_boundary(0xFD0C, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_FD0D:;
    /* $FD0D: AD */ nes_cpu_instruction_boundary(0xFD0D, 4); g_cpu.A = nes_read(0x030E); FLAG_NZ(g_cpu.A);
label_FD10:;
    /* $FD10: 38 */ nes_cpu_instruction_boundary(0xFD10, 2); g_cpu.C = 1;
label_FD11:;
    /* $FD11: F5 */ nes_cpu_instruction_boundary(0xFD11, 4); { uint8_t m=nes_read((0xB2 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_FD13:;
    /* $FD13: 10 */ nes_cpu_instruction_boundary(0xFD13, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_FD19; }
label_FD15:;
    /* $FD15: C8 */ nes_cpu_instruction_boundary(0xFD15, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_FD16:;
    /* $FD16: 20 */ nes_cpu_instruction_boundary(0xFD16, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x18; g_cpu.S--; func_C3D4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFD16, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FD19:;
    /* $FD19: C9 */ nes_cpu_instruction_boundary(0xFD19, 2); { int r=g_cpu.A-0x10; g_cpu.C=(g_cpu.A>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_FD1B:;
    /* $FD1B: B0 */ nes_cpu_instruction_boundary(0xFD1B, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_FD24; }
label_FD1D:;
    /* $FD1D: 98 */ nes_cpu_instruction_boundary(0xFD1D, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_FD1E:;
    /* $FD1E: 95 */ nes_cpu_instruction_boundary(0xFD1E, 4); nes_write((0xB4 + g_cpu.X) & 0xFF, g_cpu.A);
label_FD20:;
    /* $FD20: A9 */ nes_cpu_instruction_boundary(0xFD20, 2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_FD22:;
    /* $FD22: 95 */ nes_cpu_instruction_boundary(0xFD22, 4); nes_write((0xB0 + g_cpu.X) & 0xFF, g_cpu.A);
label_FD24:; /* RTS_X399 */
    /* $FD24: 60 */ nes_cpu_instruction_boundary(0xFD24, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_FD25:; /* UpdateMellow_FD25 */
    /* $FD25: 8A */ nes_cpu_instruction_boundary(0xFD25, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_FD26:;
    /* $FD26: 4A */ nes_cpu_instruction_boundary(0xFD26, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_FD27:;
    /* $FD27: 4A */ nes_cpu_instruction_boundary(0xFD27, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_FD28:;
    /* $FD28: 4A */ nes_cpu_instruction_boundary(0xFD28, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_FD29:;
    /* $FD29: 65 */ nes_cpu_instruction_boundary(0xFD29, 3); { uint8_t m=nes_read(0x8A); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_FD2B:;
    /* $FD2B: 85 */ nes_cpu_instruction_boundary(0xFD2B, 3); nes_write(0x8A, g_cpu.A);
label_FD2D:;
    /* $FD2D: 46 */ nes_cpu_instruction_boundary(0xFD2D, 5); { uint16_t a=0x8A; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_FD2F:;
    /* $FD2F: 29 */ nes_cpu_instruction_boundary(0xFD2F, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_FD31:;
    /* $FD31: A8 */ nes_cpu_instruction_boundary(0xFD31, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_FD32:;
    /* $FD32: B9 */ nes_cpu_instruction_boundary(0xFD32, 4); g_cpu.A = nes_read((0xFD5A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FD35:;
    /* $FD35: 85 */ nes_cpu_instruction_boundary(0xFD35, 3); nes_write(0x04, g_cpu.A);
label_FD37:;
    /* $FD37: B9 */ nes_cpu_instruction_boundary(0xFD37, 4); g_cpu.A = nes_read((0xFD5B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FD3A:;
    /* $FD3A: 85 */ nes_cpu_instruction_boundary(0xFD3A, 3); nes_write(0x05, g_cpu.A);
label_FD3C:;
    /* $FD3C: 20 */ nes_cpu_instruction_boundary(0xFD3C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3E; g_cpu.S--; func_FD5F();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFD3C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FD3F:;
    /* $FD3F: A5 */ nes_cpu_instruction_boundary(0xFD3F, 3); g_cpu.A = nes_read(0x08); FLAG_NZ(g_cpu.A);
label_FD41:;
    /* $FD41: 38 */ nes_cpu_instruction_boundary(0xFD41, 2); g_cpu.C = 1;
label_FD42:;
    /* $FD42: E5 */ nes_cpu_instruction_boundary(0xFD42, 3); { uint8_t m=nes_read(0xFC); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_FD44:;
    /* $FD44: A8 */ nes_cpu_instruction_boundary(0xFD44, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_FD45:;
    /* $FD45: A9 */ nes_cpu_instruction_boundary(0xFD45, 2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_FD47:;
    /* $FD47: C0 */ nes_cpu_instruction_boundary(0xFD47, 2); { int r=g_cpu.Y-0x20; g_cpu.C=(g_cpu.Y>=0x20)?1:0; FLAG_NZ(r&0xFF); }
label_FD49:;
    /* $FD49: 90 */ nes_cpu_instruction_boundary(0xFD49, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_FD52; }
label_FD4B:;
    /* $FD4B: 20 */ nes_cpu_instruction_boundary(0xFD4B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x4D; g_cpu.S--; func_C3D4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFD4B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FD4E:;
    /* $FD4E: C0 */ nes_cpu_instruction_boundary(0xFD4E, 2); { int r=g_cpu.Y-0x80; g_cpu.C=(g_cpu.Y>=0x80)?1:0; FLAG_NZ(r&0xFF); }
label_FD50:;
    /* $FD50: 90 */ nes_cpu_instruction_boundary(0xFD50, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_FD54; }
label_FD52:;
    /* $FD52: 85 */ nes_cpu_instruction_boundary(0xFD52, 3); nes_write(0x04, g_cpu.A);
label_FD54:;
    /* $FD54: 20 */ nes_cpu_instruction_boundary(0xFD54, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x56; g_cpu.S--; func_FD8F();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFD54, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FD57:;
    /* $FD57: 4C */ nes_cpu_instruction_boundary(0xFD57, 3); nes_cpu_instruction_boundary(0xFD6C, 2); func_FD6C(); return;
label_FD68:;
    /* $FD68: B2 */ nes_cpu_instruction_boundary(0xFD68, 2); /* ILLEGAL $B2 — skip 1 */
label_FD69:;
    /* $FD69: 85 */ nes_cpu_instruction_boundary(0xFD69, 3); nes_write(0x09, g_cpu.A);
label_FD6B:;
    /* $FD6B: 60 */ nes_cpu_instruction_boundary(0xFD6B, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

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
    /* $F6D9: 96 */ nes_cpu_instruction_boundary(0xF6D9, 4); nes_write((0x9D + g_cpu.Y) & 0xFF, g_cpu.X);
label_F6DB:;
    /* $F6DB: 0D */ nes_cpu_instruction_boundary(0xF6DB, 4); g_cpu.A |= nes_read(0x6804); FLAG_NZ(g_cpu.A);
label_F6DE:;
    /* $F6DE: 10 */ nes_cpu_instruction_boundary(0xF6DE, 2); if (!g_cpu.N) { maybe_trigger_vblank(2); goto label_F70F; }
label_F6E0:;
    /* $F6E0: A9 */ nes_cpu_instruction_boundary(0xF6E0, 2); g_cpu.A = 0xFE; FLAG_NZ(g_cpu.A);
label_F6E2:;
    /* $F6E2: 20 */ nes_cpu_instruction_boundary(0xF6E2, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE4; g_cpu.S--; func_F7B3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF6E2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F6E5:;
    /* $F6E5: A5 */ nes_cpu_instruction_boundary(0xF6E5, 3); g_cpu.A = nes_read(0x49); FLAG_NZ(g_cpu.A);
label_F6E7:;
    /* $F6E7: C9 */ nes_cpu_instruction_boundary(0xF6E7, 2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_F6E9:;
    /* $F6E9: 90 */ nes_cpu_instruction_boundary(0xF6E9, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_F6F5; }
label_F6EB:;
    /* $F6EB: 20 */ nes_cpu_instruction_boundary(0xF6EB, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xED; g_cpu.S--; func_F752();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF6EB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F6EE:;
    /* $F6EE: 90 */ nes_cpu_instruction_boundary(0xF6EE, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_F6F5; }
label_F6F0:;
    /* $F6F0: 98 */ nes_cpu_instruction_boundary(0xF6F0, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_F6F1:;
    /* $F6F1: 45 */ nes_cpu_instruction_boundary(0xF6F1, 3); g_cpu.A ^= nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_F6F3:;
    /* $F6F3: B0 */ nes_cpu_instruction_boundary(0xF6F3, 2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_F700; }
label_F6F5:; /* UpdateEnemy_ForceSpeedTowardsSamus_else_B */
    /* $F6F5: BD */ nes_cpu_instruction_boundary(0xF6F5, 4); g_cpu.A = nes_read((0x0401 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F6F8:;
    /* $F6F8: CD */ nes_cpu_instruction_boundary(0xF6F8, 4); { uint8_t m=nes_read(0x030E); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_F6FB:;
    /* $F6FB: D0 */ nes_cpu_instruction_boundary(0xF6FB, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F6FF; }
label_F6FD:;
    /* $F6FD: E6 */ nes_cpu_instruction_boundary(0xF6FD, 5); { uint16_t a=0x82; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F6FF:; /* UpdateEnemy_ForceSpeedTowardsSamus_endIf_C */
    /* $F6FF: 2A */ nes_cpu_instruction_boundary(0xF6FF, 2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_F700:; /* UpdateEnemy_ForceSpeedTowardsSamus_endIf_B */
    /* $F700: 29 */ nes_cpu_instruction_boundary(0xF700, 2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_F702:;
    /* $F702: 20 */ nes_cpu_instruction_boundary(0xF702, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x04; g_cpu.S--; func_F744();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF702, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F705:;
    /* $F705: 4A */ nes_cpu_instruction_boundary(0xF705, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_F706:;
    /* $F706: 6A */ nes_cpu_instruction_boundary(0xF706, 2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_F707:;
    /* $F707: 5D */ nes_cpu_instruction_boundary(0xF707, 4); g_cpu.A ^= nes_read((0x0403 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F70A:;
    /* $F70A: 10 */ nes_cpu_instruction_boundary(0xF70A, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_F70F; }
label_F70C:;
    /* $F70C: 20 */ nes_cpu_instruction_boundary(0xF70C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0E; g_cpu.S--; if (!nes_dispatch_call(0x81DA, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF70C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F70F:; /* UpdateEnemy_ForceSpeedTowardsSamus_endIf_D */
    /* $F70F: A9 */ nes_cpu_instruction_boundary(0xF70F, 2); g_cpu.A = 0xFB; FLAG_NZ(g_cpu.A);
label_F711:;
    /* $F711: 20 */ nes_cpu_instruction_boundary(0xF711, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x13; g_cpu.S--; func_F7B3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF711, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F714:;
    /* $F714: A5 */ nes_cpu_instruction_boundary(0xF714, 3); g_cpu.A = nes_read(0x49); FLAG_NZ(g_cpu.A);
label_F716:;
    /* $F716: C9 */ nes_cpu_instruction_boundary(0xF716, 2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_F718:;
    /* $F718: B0 */ nes_cpu_instruction_boundary(0xF718, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_F724; }
label_F71A:;
    /* $F71A: 20 */ nes_cpu_instruction_boundary(0xF71A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1C; g_cpu.S--; func_F752();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF71A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F71D:;
    /* $F71D: 90 */ nes_cpu_instruction_boundary(0xF71D, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_F724; }
label_F71F:;
    /* $F71F: 98 */ nes_cpu_instruction_boundary(0xF71F, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_F720:;
    /* $F720: 45 */ nes_cpu_instruction_boundary(0xF720, 3); g_cpu.A ^= nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_F722:;
    /* $F722: B0 */ nes_cpu_instruction_boundary(0xF722, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_F731; }
label_F724:; /* UpdateEnemy_ForceSpeedTowardsSamus_else_E */
    /* $F724: BD */ nes_cpu_instruction_boundary(0xF724, 4); g_cpu.A = nes_read((0x0400 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F727:;
    /* $F727: CD */ nes_cpu_instruction_boundary(0xF727, 4); { uint8_t m=nes_read(0x030D); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_F72A:;
    /* $F72A: D0 */ nes_cpu_instruction_boundary(0xF72A, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F730; }
label_F72C:;
    /* $F72C: E6 */ nes_cpu_instruction_boundary(0xF72C, 5); { uint16_t a=0x82; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F72E:;
    /* $F72E: E6 */ nes_cpu_instruction_boundary(0xF72E, 5); { uint16_t a=0x82; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F730:; /* UpdateEnemy_ForceSpeedTowardsSamus_endIf_F */
    /* $F730: 2A */ nes_cpu_instruction_boundary(0xF730, 2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_F731:; /* UpdateEnemy_ForceSpeedTowardsSamus_endIf_E */
    /* $F731: 29 */ nes_cpu_instruction_boundary(0xF731, 2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_F733:;
    /* $F733: 0A */ nes_cpu_instruction_boundary(0xF733, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_F734:;
    /* $F734: 0A */ nes_cpu_instruction_boundary(0xF734, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_F735:;
    /* $F735: 20 */ nes_cpu_instruction_boundary(0xF735, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x37; g_cpu.S--; func_F744();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF735, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F738:;
    /* $F738: 4A */ nes_cpu_instruction_boundary(0xF738, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_F739:;
    /* $F739: 4A */ nes_cpu_instruction_boundary(0xF739, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_F73A:;
    /* $F73A: 4A */ nes_cpu_instruction_boundary(0xF73A, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_F73B:;
    /* $F73B: 6A */ nes_cpu_instruction_boundary(0xF73B, 2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_F73C:;
    /* $F73C: 5D */ nes_cpu_instruction_boundary(0xF73C, 4); g_cpu.A ^= nes_read((0x0402 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F73F:;
    /* $F73F: 10 */ nes_cpu_instruction_boundary(0xF73F, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_F74A; }
label_F741:;
    /* $F741: 4C */ nes_cpu_instruction_boundary(0xF741, 3); nes_cpu_instruction_boundary(0x820F, 2); call_by_address_tail(0x820F, -1); return;
label_F74A:; /* OrEnData05_RTS */
    /* $F74A: 60 */ nes_cpu_instruction_boundary(0xF74A, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

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
    /* $F8AD: 05 */ nes_cpu_instruction_boundary(0xF8AD, 3); g_cpu.A |= nes_read(0x04); FLAG_NZ(g_cpu.A);
label_F8AF:;
    /* $F8AF: AA */ nes_cpu_instruction_boundary(0xF8AF, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_F8B0:;
    /* $F8B0: BD */ nes_cpu_instruction_boundary(0xF8B0, 4); g_cpu.A = nes_read((0xF92A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F8B3:;
    /* $F8B3: 99 */ nes_cpu_instruction_boundary(0xF8B3, 5); nes_write((0x0403 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F8B6:;
    /* $F8B6: A9 */ nes_cpu_instruction_boundary(0xF8B6, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_F8B8:;
    /* $F8B8: 99 */ nes_cpu_instruction_boundary(0xF8B8, 5); nes_write((0x0402 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F8BB:;
    /* $F8BB: A6 */ nes_cpu_instruction_boundary(0xF8BB, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_F8BD:;
    /* $F8BD: 20 */ nes_cpu_instruction_boundary(0xF8BD, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBF; g_cpu.S--; func_F8F8();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF8BD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F8C0:;
    /* $F8C0: BD */ nes_cpu_instruction_boundary(0xF8C0, 4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F8C3:;
    /* $F8C3: 4A */ nes_cpu_instruction_boundary(0xF8C3, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_F8C4:;
    /* $F8C4: 68 */ nes_cpu_instruction_boundary(0xF8C4, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_F8C5:;
    /* $F8C5: AA */ nes_cpu_instruction_boundary(0xF8C5, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_F8C6:;
    /* $F8C6: BD */ nes_cpu_instruction_boundary(0xF8C6, 4); g_cpu.A = nes_read((0x97A3 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F8C9:;
    /* $F8C9: 85 */ nes_cpu_instruction_boundary(0xF8C9, 3); nes_write(0x04, g_cpu.A);
label_F8CB:;
    /* $F8CB: 8A */ nes_cpu_instruction_boundary(0xF8CB, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_F8CC:;
    /* $F8CC: 2A */ nes_cpu_instruction_boundary(0xF8CC, 2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_F8CD:;
    /* $F8CD: AA */ nes_cpu_instruction_boundary(0xF8CD, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_F8CE:;
    /* $F8CE: BD */ nes_cpu_instruction_boundary(0xF8CE, 4); g_cpu.A = nes_read((0x979B + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F8D1:;
    /* $F8D1: 85 */ nes_cpu_instruction_boundary(0xF8D1, 3); nes_write(0x05, g_cpu.A);
label_F8D3:;
    /* $F8D3: 20 */ nes_cpu_instruction_boundary(0xF8D3, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD5; g_cpu.S--; func_F91D();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF8D3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F8D6:;
    /* $F8D6: A6 */ nes_cpu_instruction_boundary(0xF8D6, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_F8D8:;
    /* $F8D8: 24 */ nes_cpu_instruction_boundary(0xF8D8, 3); { uint8_t m=nes_read(0x87); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_F8DA:;
    /* $F8DA: 50 */ nes_cpu_instruction_boundary(0xF8DA, 2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_F8F7; }
label_F8DC:;
    /* $F8DC: BD */ nes_cpu_instruction_boundary(0xF8DC, 4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F8DF:;
    /* $F8DF: 29 */ nes_cpu_instruction_boundary(0xF8DF, 2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_F8E1:;
    /* $F8E1: A8 */ nes_cpu_instruction_boundary(0xF8E1, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_F8E2:;
    /* $F8E2: B9 */ nes_cpu_instruction_boundary(0xF8E2, 4); g_cpu.A = nes_read((0x0083 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F8E5:;
    /* $F8E5: 4C */ nes_cpu_instruction_boundary(0xF8E5, 3); nes_cpu_instruction_boundary(0xF690, 2); func_F690(); return;
label_F8F7:; /* SpawnEnProjectile_FindSlot_RTS */
    /* $F8F7: 60 */ nes_cpu_instruction_boundary(0xF8F7, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_FA0D(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_FA0D");
#endif
label_FA0D:;
    /* $FA0D: 20 */ nes_cpu_instruction_boundary(0xFA0D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0F; g_cpu.S--; func_F518();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFA0D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FA10:;
    /* $FA10: A9 */ nes_cpu_instruction_boundary(0xFA10, 2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_FA12:;
    /* $FA12: 9D */ nes_cpu_instruction_boundary(0xFA12, 5); nes_write((0x0409 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_FA15:;
    /* $FA15: 4C */ nes_cpu_instruction_boundary(0xFA15, 3); nes_cpu_instruction_boundary(0xF97C, 2); func_F97C(); return;
}

void func_FC0D(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_FC0D");
#endif
label_FC0D:;
    /* $FC0D: FD */ nes_cpu_instruction_boundary(0xFC0D, 4); { uint8_t m=nes_read((0x4890 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_FC10:;
    /* $FC10: A5 */ nes_cpu_instruction_boundary(0xFC10, 3); g_cpu.A = nes_read(0x08); FLAG_NZ(g_cpu.A);
label_FC12:;
    /* $FC12: 95 */ nes_cpu_instruction_boundary(0xFC12, 4); nes_write((0xA1 + g_cpu.X) & 0xFF, g_cpu.A);
label_FC14:;
    /* $FC14: 8D */ nes_cpu_instruction_boundary(0xFC14, 4); nes_write(0x034D, g_cpu.A);
label_FC17:;
    /* $FC17: A5 */ nes_cpu_instruction_boundary(0xFC17, 3); g_cpu.A = nes_read(0x09); FLAG_NZ(g_cpu.A);
label_FC19:;
    /* $FC19: 95 */ nes_cpu_instruction_boundary(0xFC19, 4); nes_write((0xA2 + g_cpu.X) & 0xFF, g_cpu.A);
label_FC1B:;
    /* $FC1B: 8D */ nes_cpu_instruction_boundary(0xFC1B, 4); nes_write(0x034E, g_cpu.A);
label_FC1E:;
    /* $FC1E: A5 */ nes_cpu_instruction_boundary(0xFC1E, 3); g_cpu.A = nes_read(0x0B); FLAG_NZ(g_cpu.A);
label_FC20:;
    /* $FC20: 29 */ nes_cpu_instruction_boundary(0xFC20, 2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_FC22:;
    /* $FC22: 95 */ nes_cpu_instruction_boundary(0xFC22, 4); nes_write((0xA3 + g_cpu.X) & 0xFF, g_cpu.A);
label_FC24:;
    /* $FC24: 8D */ nes_cpu_instruction_boundary(0xFC24, 4); nes_write(0x034C, g_cpu.A);
label_FC27:;
    /* $FC27: B5 */ nes_cpu_instruction_boundary(0xFC27, 4); g_cpu.A = nes_read((0xA3 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_FC29:;
    /* $FC29: 8D */ nes_cpu_instruction_boundary(0xFC29, 4); nes_write(0x034C, g_cpu.A);
label_FC2C:;
    /* $FC2C: A9 */ nes_cpu_instruction_boundary(0xFC2C, 2); g_cpu.A = 0x5A; FLAG_NZ(g_cpu.A);
label_FC2E:;
    /* $FC2E: 8D */ nes_cpu_instruction_boundary(0xFC2E, 4); nes_write(0x0343, g_cpu.A);
label_FC31:;
    /* $FC31: 8A */ nes_cpu_instruction_boundary(0xFC31, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_FC32:;
    /* $FC32: 48 */ nes_cpu_instruction_boundary(0xFC32, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_FC33:;
    /* $FC33: 20 */ nes_cpu_instruction_boundary(0xFC33, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x35; g_cpu.S--; func_DE4A();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFC33, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FC36:;
    /* $FC36: A5 */ nes_cpu_instruction_boundary(0xFC36, 3); g_cpu.A = nes_read(0x70); FLAG_NZ(g_cpu.A);
label_FC38:;
    /* $FC38: D0 */ nes_cpu_instruction_boundary(0xFC38, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_FC55; }
label_FC3A:;
    /* $FC3A: A0 */ nes_cpu_instruction_boundary(0xFC3A, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_FC3C:;
    /* $FC3C: A2 */ nes_cpu_instruction_boundary(0xFC3C, 2); g_cpu.X = 0x40; FLAG_NZ(g_cpu.X);
label_FC3E:;
    /* $FC3E: 20 */ nes_cpu_instruction_boundary(0xFC3E, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x40; g_cpu.S--; func_DC7F();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFC3E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FC41:;
    /* $FC41: B0 */ nes_cpu_instruction_boundary(0xFC41, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_FC55; }
label_FC43:;
    /* $FC43: 20 */ nes_cpu_instruction_boundary(0xFC43, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x45; g_cpu.S--; func_CD9C();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFC43, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FC46:;
    /* $FC46: A0 */ nes_cpu_instruction_boundary(0xFC46, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_FC48:;
    /* $FC48: 90 */ nes_cpu_instruction_boundary(0xFC48, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_FC55; }
label_FC4A:;
    /* $FC4A: 18 */ nes_cpu_instruction_boundary(0xFC4A, 2); g_cpu.C = 0;
label_FC4B:;
    /* $FC4B: 20 */ nes_cpu_instruction_boundary(0xFC4B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x4D; g_cpu.S--; func_F311();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFC4B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FC4E:;
    /* $FC4E: A9 */ nes_cpu_instruction_boundary(0xFC4E, 2); g_cpu.A = 0x50; FLAG_NZ(g_cpu.A);
label_FC50:;
    /* $FC50: 85 */ nes_cpu_instruction_boundary(0xFC50, 3); nes_write(0x6E, g_cpu.A);
label_FC52:;
    /* $FC52: 20 */ nes_cpu_instruction_boundary(0xFC52, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x54; g_cpu.S--; func_CE92();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFC52, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FC55:; /* UpdateSkreeProjectile_endIf_A */
    /* $FC55: 68 */ nes_cpu_instruction_boundary(0xFC55, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_FC56:;
    /* $FC56: AA */ nes_cpu_instruction_boundary(0xFC56, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_FC57:; /* UpdateSkreeProjectile_RTS */
    /* $FC57: 60 */ nes_cpu_instruction_boundary(0xFC57, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

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
    /* $FD7D: 01 */ nes_cpu_instruction_boundary(0xFD7D, 6); g_cpu.A |= nes_read(nes_read16zp((0x95 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_FD7F:;
    /* $FD7F: B3 */ nes_cpu_instruction_boundary(0xFD7F, 5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x8D) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FD81:;
    /* $FD81: EB */ nes_cpu_instruction_boundary(0xFD81, 2); { uint8_t m=0x6B; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_FD83:;
    /* $FD83: 60 */ nes_cpu_instruction_boundary(0xFD83, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

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
    /* $FB7D: 80 */ nes_cpu_instruction_boundary(0xFB7D, 2); /* NOP */
label_FB7F:;
    /* $FB7F: 05 */ nes_cpu_instruction_boundary(0xFB7F, 3); g_cpu.A |= nes_read(0x04); FLAG_NZ(g_cpu.A);
label_FB81:;
    /* $FB81: B9 */ nes_cpu_instruction_boundary(0xFB81, 4); g_cpu.A = nes_read((0x96BB + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FB84:;
    /* $FB84: 9D */ nes_cpu_instruction_boundary(0xFB84, 5); nes_write((0x0409 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_FB87:; /* Exit13 */
    /* $FB87: 60 */ nes_cpu_instruction_boundary(0xFB87, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E5F0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E5F0");
#endif
label_E5F0:;
    /* $E5F0: 20 */ nes_cpu_instruction_boundary(0xE5F0, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF2; g_cpu.S--; func_E564();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE5F0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E5F3:;
    /* $E5F3: 09 */ nes_cpu_instruction_boundary(0xE5F3, 2); g_cpu.A |= 0x03; FLAG_NZ(g_cpu.A);
label_E5F5:;
    /* $E5F5: 85 */ nes_cpu_instruction_boundary(0xE5F5, 3); nes_write(0x03, g_cpu.A);
label_E5F7:;
    /* $E5F7: 8A */ nes_cpu_instruction_boundary(0xE5F7, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_E5F8:;
    /* $E5F8: 09 */ nes_cpu_instruction_boundary(0xE5F8, 2); g_cpu.A |= 0x03; FLAG_NZ(g_cpu.A);
label_E5FA:;
    /* $E5FA: 85 */ nes_cpu_instruction_boundary(0xE5FA, 3); nes_write(0x01, g_cpu.A);
label_E5FC:;
    /* $E5FC: A9 */ nes_cpu_instruction_boundary(0xE5FC, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_E5FE:;
    /* $E5FE: 85 */ nes_cpu_instruction_boundary(0xE5FE, 3); nes_write(0x1B, g_cpu.A);
label_E600:;
    /* $E600: AE */ nes_cpu_instruction_boundary(0xE600, 4); g_cpu.X = nes_read(0x07A0); FLAG_NZ(g_cpu.X);
label_E603:;
    /* $E603: A5 */ nes_cpu_instruction_boundary(0xE603, 3); g_cpu.A = nes_read(0x03); FLAG_NZ(g_cpu.A);
label_E605:;
    /* $E605: 20 */ nes_cpu_instruction_boundary(0xE605, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x07; g_cpu.S--; func_C36B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE605, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E608:;
    /* $E608: A5 */ nes_cpu_instruction_boundary(0xE608, 3); g_cpu.A = nes_read(0x02); FLAG_NZ(g_cpu.A);
label_E60A:;
    /* $E60A: 20 */ nes_cpu_instruction_boundary(0xE60A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0C; g_cpu.S--; func_C36B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE60A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E60D:;
    /* $E60D: A9 */ nes_cpu_instruction_boundary(0xE60D, 2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_E60F:;
    /* $E60F: 85 */ nes_cpu_instruction_boundary(0xE60F, 3); nes_write(0x04, g_cpu.A);
label_E611:;
    /* $E611: 20 */ nes_cpu_instruction_boundary(0xE611, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x13; g_cpu.S--; func_C36B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE611, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E614:;
    /* $E614: A0 */ nes_cpu_instruction_boundary(0xE614, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_E616:;
    /* $E616: B1 */ nes_cpu_instruction_boundary(0xE616, 5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E618:;
    /* $E618: 20 */ nes_cpu_instruction_boundary(0xE618, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1A; g_cpu.S--; func_C36B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE618, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E61B:;
    /* $E61B: C8 */ nes_cpu_instruction_boundary(0xE61B, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E61C:;
    /* $E61C: C6 */ nes_cpu_instruction_boundary(0xE61C, 5); { uint16_t a=0x04; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E61E:;
    /* $E61E: D0 */ nes_cpu_instruction_boundary(0xE61E, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xE616, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_E616;
    }
label_E620:;
    /* $E620: 8E */ nes_cpu_instruction_boundary(0xE620, 4); nes_write(0x07A0, g_cpu.X);
label_E623:;
    /* $E623: 20 */ nes_cpu_instruction_boundary(0xE623, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x25; g_cpu.S--; func_C376();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE623, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E626:; /* MoveSamusLeft */
    /* $E626: AD */ nes_cpu_instruction_boundary(0xE626, 4); g_cpu.A = nes_read(0x030E); FLAG_NZ(g_cpu.A);
label_E629:;
    /* $E629: 38 */ nes_cpu_instruction_boundary(0xE629, 2); g_cpu.C = 1;
label_E62A:;
    /* $E62A: ED */ nes_cpu_instruction_boundary(0xE62A, 4); { uint8_t m=nes_read(0x0302); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_E62D:;
    /* $E62D: 29 */ nes_cpu_instruction_boundary(0xE62D, 2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_E62F:;
    /* $E62F: D0 */ nes_cpu_instruction_boundary(0xE62F, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E636; }
label_E631:;
    /* $E631: 20 */ nes_cpu_instruction_boundary(0xE631, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x33; g_cpu.S--; func_E880();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE631, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E634:;
    /* $E634: 90 */ nes_cpu_instruction_boundary(0xE634, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_E663; }
label_E636:;
    /* $E636: 20 */ nes_cpu_instruction_boundary(0xE636, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x38; g_cpu.S--; func_D976();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE636, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E639:;
    /* $E639: AD */ nes_cpu_instruction_boundary(0xE639, 4); g_cpu.A = nes_read(0x030A); FLAG_NZ(g_cpu.A);
label_E63C:;
    /* $E63C: 29 */ nes_cpu_instruction_boundary(0xE63C, 2); g_cpu.A &= 0x41; FLAG_NZ(g_cpu.A);
label_E63E:;
    /* $E63E: C9 */ nes_cpu_instruction_boundary(0xE63E, 2); { int r=g_cpu.A-0x41; g_cpu.C=(g_cpu.A>=0x41)?1:0; FLAG_NZ(r&0xFF); }
label_E640:;
    /* $E640: 18 */ nes_cpu_instruction_boundary(0xE640, 2); g_cpu.C = 0;
label_E641:;
    /* $E641: F0 */ nes_cpu_instruction_boundary(0xE641, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E663; }
label_E643:;
    /* $E643: A5 */ nes_cpu_instruction_boundary(0xE643, 3); g_cpu.A = nes_read(0x51); FLAG_NZ(g_cpu.A);
label_E645:;
    /* $E645: C9 */ nes_cpu_instruction_boundary(0xE645, 2); { int r=g_cpu.A-0x71; g_cpu.C=(g_cpu.A>=0x71)?1:0; FLAG_NZ(r&0xFF); }
label_E647:;
    /* $E647: B0 */ nes_cpu_instruction_boundary(0xE647, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_E64E; }
label_E649:;
    /* $E649: 20 */ nes_cpu_instruction_boundary(0xE649, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x4B; g_cpu.S--; func_E6A7();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE649, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E64C:;
    /* $E64C: 90 */ nes_cpu_instruction_boundary(0xE64C, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_E650; }
label_E64E:;
    /* $E64E: C6 */ nes_cpu_instruction_boundary(0xE64E, 5); { uint16_t a=0x51; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E650:;
    /* $E650: AD */ nes_cpu_instruction_boundary(0xE650, 4); g_cpu.A = nes_read(0x030E); FLAG_NZ(g_cpu.A);
label_E653:;
    /* $E653: D0 */ nes_cpu_instruction_boundary(0xE653, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E65E; }
label_E655:;
    /* $E655: A5 */ nes_cpu_instruction_boundary(0xE655, 3); g_cpu.A = nes_read(0x49); FLAG_NZ(g_cpu.A);
label_E657:;
    /* $E657: 29 */ nes_cpu_instruction_boundary(0xE657, 2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_E659:;
    /* $E659: F0 */ nes_cpu_instruction_boundary(0xE659, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E65E; }
label_E65B:;
    /* $E65B: 20 */ nes_cpu_instruction_boundary(0xE65B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x5D; g_cpu.S--; func_E249();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE65B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E65E:;
    /* $E65E: CE */ nes_cpu_instruction_boundary(0xE65E, 6); { uint16_t a=0x030E; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E661:;
    /* $E661: 38 */ nes_cpu_instruction_boundary(0xE661, 2); g_cpu.C = 1;
label_E662:;
    /* $E662: 60 */ nes_cpu_instruction_boundary(0xE662, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_E663:;
    /* $E663: A9 */ nes_cpu_instruction_boundary(0xE663, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E665:;
    /* $E665: 85 */ nes_cpu_instruction_boundary(0xE665, 3); nes_write(0x58, g_cpu.A);
label_E667:;
    /* $E667: 60 */ nes_cpu_instruction_boundary(0xE667, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

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
    /* $C56B: 78 */ nes_cpu_instruction_boundary(0xC56B, 2); g_cpu.I = 1;
label_C56C:;
    /* $C56C: C5 */ nes_cpu_instruction_boundary(0xC56C, 3); { uint8_t m=nes_read(0xA0); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C56E:;
    /* $C56E: 00 */ nes_cpu_instruction_boundary(0xC56E, 7); nes_brk_executed(0xC56E); return;
}

void func_FDC5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_FDC5");
#endif
label_FDC5:;
    /* $FDC5: 19 */ nes_cpu_instruction_boundary(0xFDC5, 4); g_cpu.A |= nes_read((0x0965 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FDC8:;
    /* $FDC8: 90 */ nes_cpu_instruction_boundary(0xFDC8, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_FDD0; }
label_FDCA:;
    /* $FDCA: A4 */ nes_cpu_instruction_boundary(0xFDCA, 3); g_cpu.Y = nes_read(0x02); FLAG_NZ(g_cpu.Y);
label_FDCC:;
    /* $FDCC: F0 */ nes_cpu_instruction_boundary(0xFDCC, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_FDE1; }
label_FDCE:;
    /* $FDCE: E6 */ nes_cpu_instruction_boundary(0xFDCE, 5); { uint16_t a=0x0B; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_FDD0:; /* ApplySpeedToPosition_endIf_E */
    /* $FDD0: 4C */ nes_cpu_instruction_boundary(0xFDD0, 3); nes_cpu_instruction_boundary(0xFDDD, 2); func_FDDD(); return;
label_FDE1:; /* ApplySpeedToPosition_exit_failure */
    /* $FDE1: 18 */ nes_cpu_instruction_boundary(0xFDE1, 2); g_cpu.C = 0;
label_FDE2:; /* RTS_X410 */
    /* $FDE2: 60 */ nes_cpu_instruction_boundary(0xFDE2, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F098(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F098");
#endif
label_F098:;
    /* $F098: 20 */ nes_cpu_instruction_boundary(0xF098, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; func_F1F4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF098, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F09B:;
    /* $F09B: 30 */ nes_cpu_instruction_boundary(0xF09B, 2); if (g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xF084); return; }
label_F09D:;
    /* $F09D: A2 */ nes_cpu_instruction_boundary(0xF09D, 2); g_cpu.X = 0x50; FLAG_NZ(g_cpu.X);
label_F09F:;
    /* $F09F: BD */ nes_cpu_instruction_boundary(0xF09F, 4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F0A2:;
    /* $F0A2: F0 */ nes_cpu_instruction_boundary(0xF0A2, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0A6; }
label_F0A4:;
    /* $F0A4: C9 */ nes_cpu_instruction_boundary(0xF0A4, 2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_F0A6:;
    /* $F0A6: F0 */ nes_cpu_instruction_boundary(0xF0A6, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0E5; }
label_F0A8:;
    /* $F0A8: 20 */ nes_cpu_instruction_boundary(0xF0A8, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAA; g_cpu.S--; func_F152();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0A8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0AB:;
    /* $F0AB: BD */ nes_cpu_instruction_boundary(0xF0AB, 4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F0AE:;
    /* $F0AE: C9 */ nes_cpu_instruction_boundary(0xF0AE, 2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_F0B0:;
    /* $F0B0: F0 */ nes_cpu_instruction_boundary(0xF0B0, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0D4; }
label_F0B2:;
    /* $F0B2: A0 */ nes_cpu_instruction_boundary(0xF0B2, 2); g_cpu.Y = 0xD0; FLAG_NZ(g_cpu.Y);
label_F0B4:;
    /* $F0B4: B9 */ nes_cpu_instruction_boundary(0xF0B4, 4); g_cpu.A = nes_read((0x0300 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F0B7:;
    /* $F0B7: F0 */ nes_cpu_instruction_boundary(0xF0B7, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0CF; }
label_F0B9:;
    /* $F0B9: C9 */ nes_cpu_instruction_boundary(0xF0B9, 2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_F0BB:;
    /* $F0BB: 90 */ nes_cpu_instruction_boundary(0xF0BB, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_F0C9; }
label_F0BD:;
    /* $F0BD: C9 */ nes_cpu_instruction_boundary(0xF0BD, 2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_F0BF:;
    /* $F0BF: F0 */ nes_cpu_instruction_boundary(0xF0BF, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0C9; }
label_F0C1:;
    /* $F0C1: C9 */ nes_cpu_instruction_boundary(0xF0C1, 2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_F0C3:;
    /* $F0C3: F0 */ nes_cpu_instruction_boundary(0xF0C3, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0C9; }
label_F0C5:;
    /* $F0C5: C9 */ nes_cpu_instruction_boundary(0xF0C5, 2); { int r=g_cpu.A-0x0B; g_cpu.C=(g_cpu.A>=0x0B)?1:0; FLAG_NZ(r&0xFF); }
label_F0C7:;
    /* $F0C7: D0 */ nes_cpu_instruction_boundary(0xF0C7, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0CF; }
label_F0C9:;
    /* $F0C9: 20 */ nes_cpu_instruction_boundary(0xF0C9, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCB; g_cpu.S--; func_F140();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0C9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0CC:;
    /* $F0CC: 20 */ nes_cpu_instruction_boundary(0xF0CC, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCE; g_cpu.S--; func_F2CA();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0CC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0CF:;
    /* $F0CF: 20 */ nes_cpu_instruction_boundary(0xF0CF, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD1; g_cpu.S--; func_F1EE();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0CF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0D2:;
    /* $F0D2: D0 */ nes_cpu_instruction_boundary(0xF0D2, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xF0B4, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_F0B4;
    }
label_F0D4:;
    /* $F0D4: A0 */ nes_cpu_instruction_boundary(0xF0D4, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_F0D6:;
    /* $F0D6: A5 */ nes_cpu_instruction_boundary(0xF0D6, 3); g_cpu.A = nes_read(0x70); FLAG_NZ(g_cpu.A);
label_F0D8:;
    /* $F0D8: D0 */ nes_cpu_instruction_boundary(0xF0D8, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0E5; }
label_F0DA:;
    /* $F0DA: 20 */ nes_cpu_instruction_boundary(0xF0DA, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDC; g_cpu.S--; func_CE84();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0DA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0DD:;
    /* $F0DD: F0 */ nes_cpu_instruction_boundary(0xF0DD, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0E5; }
label_F0DF:;
    /* $F0DF: 20 */ nes_cpu_instruction_boundary(0xF0DF, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE1; g_cpu.S--; func_F140();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0DF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0E2:;
    /* $F0E2: 20 */ nes_cpu_instruction_boundary(0xF0E2, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE4; g_cpu.S--; func_F282();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0E2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0E5:; /* NextEnemy */
    /* $F0E5: 20 */ nes_cpu_instruction_boundary(0xF0E5, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE7; g_cpu.S--; func_F1F4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0E5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0E8:;
    /* $F0E8: 30 */ nes_cpu_instruction_boundary(0xF0E8, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_F0ED; }
label_F0EA:;
    /* $F0EA: 4C */ nes_cpu_instruction_boundary(0xF0EA, 3); goto label_F09F;
label_F0ED:;
    /* $F0ED: A2 */ nes_cpu_instruction_boundary(0xF0ED, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_F0EF:;
    /* $F0EF: 20 */ nes_cpu_instruction_boundary(0xF0EF, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; func_F172();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0EF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0F2:;
    /* $F0F2: A0 */ nes_cpu_instruction_boundary(0xF0F2, 2); g_cpu.Y = 0x60; FLAG_NZ(g_cpu.Y);
label_F0F4:;
    /* $F0F4: B9 */ nes_cpu_instruction_boundary(0xF0F4, 4); g_cpu.A = nes_read((0x6AF4 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F0F7:;
    /* $F0F7: F0 */ nes_cpu_instruction_boundary(0xF0F7, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_F112; }
label_F0F9:;
    /* $F0F9: C9 */ nes_cpu_instruction_boundary(0xF0F9, 2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_F0FB:;
    /* $F0FB: F0 */ nes_cpu_instruction_boundary(0xF0FB, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_F112; }
label_F0FD:;
    /* $F0FD: A5 */ nes_cpu_instruction_boundary(0xF0FD, 3); g_cpu.A = nes_read(0x70); FLAG_NZ(g_cpu.A);
label_F0FF:;
    /* $F0FF: D0 */ nes_cpu_instruction_boundary(0xF0FF, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F112; }
label_F101:;
    /* $F101: 20 */ nes_cpu_instruction_boundary(0xF101, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x03; g_cpu.S--; func_CE84();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF101, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F104:;
    /* $F104: F0 */ nes_cpu_instruction_boundary(0xF104, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F112; }
label_F106:;
    /* $F106: 20 */ nes_cpu_instruction_boundary(0xF106, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x08; g_cpu.S--; func_F1B3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF106, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F109:;
    /* $F109: 20 */ nes_cpu_instruction_boundary(0xF109, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0B; g_cpu.S--; func_F162();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF109, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F10C:;
    /* $F10C: 20 */ nes_cpu_instruction_boundary(0xF10C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0E; g_cpu.S--; func_F1FA();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF10C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F10F:;
    /* $F10F: 20 */ nes_cpu_instruction_boundary(0xF10F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x11; g_cpu.S--; func_F2ED();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF10F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F112:;
    /* $F112: 20 */ nes_cpu_instruction_boundary(0xF112, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x14; g_cpu.S--; func_F1EE();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF112, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F115:;
    /* $F115: C9 */ nes_cpu_instruction_boundary(0xF115, 2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_F117:;
    /* $F117: D0 */ nes_cpu_instruction_boundary(0xF117, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xF0F4, 2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_F0F4;
    }
label_F119:;
    /* $F119: A0 */ nes_cpu_instruction_boundary(0xF119, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_F11B:;
    /* $F11B: 20 */ nes_cpu_instruction_boundary(0xF11B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1D; g_cpu.S--; func_CE84();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF11B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F11E:;
    /* $F11E: F0 */ nes_cpu_instruction_boundary(0xF11E, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F13D; }
label_F120:;
    /* $F120: 20 */ nes_cpu_instruction_boundary(0xF120, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x22; g_cpu.S--; func_F186();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF120, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F123:;
    /* $F123: A2 */ nes_cpu_instruction_boundary(0xF123, 2); g_cpu.X = 0xF0; FLAG_NZ(g_cpu.X);
label_F125:;
    /* $F125: BD */ nes_cpu_instruction_boundary(0xF125, 4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F128:;
    /* $F128: C9 */ nes_cpu_instruction_boundary(0xF128, 2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_F12A:;
    /* $F12A: F0 */ nes_cpu_instruction_boundary(0xF12A, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F130; }
label_F12C:;
    /* $F12C: C9 */ nes_cpu_instruction_boundary(0xF12C, 2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_F12E:;
    /* $F12E: D0 */ nes_cpu_instruction_boundary(0xF12E, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F136; }
label_F130:;
    /* $F130: 20 */ nes_cpu_instruction_boundary(0xF130, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x32; g_cpu.S--; func_DC82();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF130, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F133:;
    /* $F133: 20 */ nes_cpu_instruction_boundary(0xF133, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x35; g_cpu.S--; func_F311();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF133, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F136:;
    /* $F136: 20 */ nes_cpu_instruction_boundary(0xF136, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x38; g_cpu.S--; func_F1F4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF136, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F139:;
    /* $F139: C9 */ nes_cpu_instruction_boundary(0xF139, 2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_F13B:;
    /* $F13B: D0 */ nes_cpu_instruction_boundary(0xF13B, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xF125, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_F125;
    }
label_F13D:; /* GotoSubtractHealth */
    /* $F13D: 4C */ nes_cpu_instruction_boundary(0xF13D, 3); nes_cpu_instruction_boundary(0xCE92, 2); func_CE92(); return;
}

void func_EEB0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EEB0");
#endif
label_EEB0:;
    /* $EEB0: 95 */ nes_cpu_instruction_boundary(0xEEB0, 4); nes_write((0xA9 + g_cpu.X) & 0xFF, g_cpu.A);
label_EEB2:;
    /* $EEB2: 38 */ nes_cpu_instruction_boundary(0xEEB2, 2); g_cpu.C = 1;
label_EEB3:;
    /* $EEB3: 85 */ nes_cpu_instruction_boundary(0xEEB3, 3); nes_write(0x07, g_cpu.A);
label_EEB5:;
    /* $EEB5: A9 */ nes_cpu_instruction_boundary(0xEEB5, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_EEB7:;
    /* $EEB7: 85 */ nes_cpu_instruction_boundary(0xEEB7, 3); nes_write(0x06, g_cpu.A);
label_EEB9:;
    /* $EEB9: 20 */ nes_cpu_instruction_boundary(0xEEB9, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xEE; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBB; g_cpu.S--; func_EE4A();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xEEB9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_EEBC:;
    /* $EEBC: 90 */ nes_cpu_instruction_boundary(0xEEBC, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_EEC6; }
label_EEBE:;
    /* $EEBE: A9 */ nes_cpu_instruction_boundary(0xEEBE, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_EEC0:;
    /* $EEC0: 85 */ nes_cpu_instruction_boundary(0xEEC0, 3); nes_write(0x98, g_cpu.A);
label_EEC2:;
    /* $EEC2: A9 */ nes_cpu_instruction_boundary(0xEEC2, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_EEC4:;
    /* $EEC4: 85 */ nes_cpu_instruction_boundary(0xEEC4, 3); nes_write(0x99, g_cpu.A);
label_EEC6:; /* SpawnMotherBrain_exit */
    /* $EEC6: A9 */ nes_cpu_instruction_boundary(0xEEC6, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_EEC8:;
    /* $EEC8: D0 */ nes_cpu_instruction_boundary(0xEEC8, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xEEAB); return; }
label_EECA:; /* SpawnZebetite */
    /* $EECA: 20 */ nes_cpu_instruction_boundary(0xEECA, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xEE; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCC; g_cpu.S--; if (!nes_dispatch_call(0x95B7, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xEECA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_EECD:;
    /* $EECD: 8A */ nes_cpu_instruction_boundary(0xEECD, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_EECE:;
    /* $EECE: 4A */ nes_cpu_instruction_boundary(0xEECE, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_EECF:;
    /* $EECF: 69 */ nes_cpu_instruction_boundary(0xEECF, 2); { uint16_t r = g_cpu.A + 0x3C + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x3C); g_cpu.A=r&0xFF; }
label_EED1:;
    /* $EED1: 85 */ nes_cpu_instruction_boundary(0xEED1, 3); nes_write(0x07, g_cpu.A);
label_EED3:;
    /* $EED3: A9 */ nes_cpu_instruction_boundary(0xEED3, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_EED5:;
    /* $EED5: 85 */ nes_cpu_instruction_boundary(0xEED5, 3); nes_write(0x06, g_cpu.A);
label_EED7:;
    /* $EED7: 20 */ nes_cpu_instruction_boundary(0xEED7, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xEE; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD9; g_cpu.S--; func_EE4A();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xEED7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_EEDA:;
    /* $EEDA: 90 */ nes_cpu_instruction_boundary(0xEEDA, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_EEEB; }
label_EEDC:;
    /* $EEDC: A9 */ nes_cpu_instruction_boundary(0xEEDC, 2); g_cpu.A = 0x81; FLAG_NZ(g_cpu.A);
label_EEDE:;
    /* $EEDE: 9D */ nes_cpu_instruction_boundary(0xEEDE, 5); nes_write((0x0758 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_EEE1:;
    /* $EEE1: A9 */ nes_cpu_instruction_boundary(0xEEE1, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_EEE3:;
    /* $EEE3: 9D */ nes_cpu_instruction_boundary(0xEEE3, 5); nes_write((0x075D + g_cpu.X) & 0xFFFF, g_cpu.A);
label_EEE6:;
    /* $EEE6: A9 */ nes_cpu_instruction_boundary(0xEEE6, 2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_EEE8:;
    /* $EEE8: 9D */ nes_cpu_instruction_boundary(0xEEE8, 5); nes_write((0x075B + g_cpu.X) & 0xFFFF, g_cpu.A);
label_EEEB:; /* SpawnZebetite_endIf_A */
    /* $EEEB: 4C */ nes_cpu_instruction_boundary(0xEEEB, 3); goto label_EEC6;
}

void func_D09F(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D09F");
#endif
label_D09F:;
    /* $D09F: 16 */ nes_cpu_instruction_boundary(0xD09F, 6); { uint16_t a=(0x0A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D0A1:;
    /* $D0A1: 10 */ nes_cpu_instruction_boundary(0xD0A1, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xD095); return; }
label_D0A3:;
    /* $D0A3: AD */ nes_cpu_instruction_boundary(0xD0A3, 4); g_cpu.A = nes_read(0x0305); FLAG_NZ(g_cpu.A);
label_D0A6:;
    /* $D0A6: C9 */ nes_cpu_instruction_boundary(0xD0A6, 2); { int r=g_cpu.A-0x35; g_cpu.C=(g_cpu.A>=0x35)?1:0; FLAG_NZ(r&0xFF); }
label_D0A8:;
    /* $D0A8: D0 */ nes_cpu_instruction_boundary(0xD0A8, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_D0AD; }
label_D0AA:;
    /* $D0AA: 4C */ nes_cpu_instruction_boundary(0xD0AA, 3); nes_cpu_instruction_boundary(0xD275, 2); func_D275(); return;
label_D0AD:; /* SamusJump_CheckFire_notAimingUp */
    /* $D0AD: 20 */ nes_cpu_instruction_boundary(0xD0AD, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAF; g_cpu.S--; func_D210();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD0AD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D0B0:;
    /* $D0B0: A9 */ nes_cpu_instruction_boundary(0xD0B0, 2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_D0B2:;
    /* $D0B2: 4C */ nes_cpu_instruction_boundary(0xD0B2, 3); nes_cpu_instruction_boundary(0xCF6B, 2); func_CF6B(); return;
}

void func_E09E(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E09E");
#endif
label_E09E:;
    /* $E09E: F8 */ nes_cpu_instruction_boundary(0xE09E, 2); g_cpu.D = 1;
label_E09F:;
    /* $E09F: 6A */ nes_cpu_instruction_boundary(0xE09F, 2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_E0A0:;
    /* $E0A0: F0 */ nes_cpu_instruction_boundary(0xE0A0, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E0A7; }
label_E0A2:;
    /* $E0A2: DE */ nes_cpu_instruction_boundary(0xE0A2, 7); { uint16_t a=(0x6AF8 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E0A5:;
    /* $E0A5: D0 */ nes_cpu_instruction_boundary(0xE0A5, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E0BB; }
label_E0A7:;
    /* $E0A7: 9D */ nes_cpu_instruction_boundary(0xE0A7, 5); nes_write((0x6AF8 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_E0AA:;
    /* $E0AA: BC */ nes_cpu_instruction_boundary(0xE0AA, 4); g_cpu.Y = nes_read((0x6AFA + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_E0AD:;
    /* $E0AD: B1 */ nes_cpu_instruction_boundary(0xE0AD, 5); g_cpu.A = nes_read((nes_read16zp(0x47) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E0AF:;
    /* $E0AF: C9 */ nes_cpu_instruction_boundary(0xE0AF, 2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_E0B1:;
    /* $E0B1: F0 */ nes_cpu_instruction_boundary(0xE0B1, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E0BC; }
label_E0B3:;
    /* $E0B3: 9D */ nes_cpu_instruction_boundary(0xE0B3, 5); nes_write((0x6AF7 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_E0B6:;
    /* $E0B6: C8 */ nes_cpu_instruction_boundary(0xE0B6, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E0B7:;
    /* $E0B7: 98 */ nes_cpu_instruction_boundary(0xE0B7, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_E0B8:;
    /* $E0B8: 9D */ nes_cpu_instruction_boundary(0xE0B8, 5); nes_write((0x6AFA + g_cpu.X) & 0xFFFF, g_cpu.A);
label_E0BB:;
    /* $E0BB: 60 */ nes_cpu_instruction_boundary(0xE0BB, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_E0BC:;
    /* $E0BC: BC */ nes_cpu_instruction_boundary(0xE0BC, 4); g_cpu.Y = nes_read((0x6AF9 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_E0BF:;
    /* $E0BF: B0 */ nes_cpu_instruction_boundary(0xE0BF, 2); if (g_cpu.C) {
    nes_cpu_instruction_boundary(0xE0AD, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_E0AD;
    }
label_E0C1:; /* DisplayBar */
    /* $E0C1: A0 */ nes_cpu_instruction_boundary(0xE0C1, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_E0C3:;
    /* $E0C3: A5 */ nes_cpu_instruction_boundary(0xE0C3, 3); g_cpu.A = nes_read(0x5B); FLAG_NZ(g_cpu.A);
label_E0C5:;
    /* $E0C5: 48 */ nes_cpu_instruction_boundary(0xE0C5, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_E0C6:;
    /* $E0C6: AA */ nes_cpu_instruction_boundary(0xE0C6, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_E0C7:; /* DisplayBar_loop */
    /* $E0C7: B9 */ nes_cpu_instruction_boundary(0xE0C7, 4); g_cpu.A = nes_read((0xE1B9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E0CA:;
    /* $E0CA: 9D */ nes_cpu_instruction_boundary(0xE0CA, 5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_E0CD:;
    /* $E0CD: E8 */ nes_cpu_instruction_boundary(0xE0CD, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_E0CE:;
    /* $E0CE: C8 */ nes_cpu_instruction_boundary(0xE0CE, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E0CF:;
    /* $E0CF: C0 */ nes_cpu_instruction_boundary(0xE0CF, 2); { int r=g_cpu.Y-0x28; g_cpu.C=(g_cpu.Y>=0x28)?1:0; FLAG_NZ(r&0xFF); }
label_E0D1:;
    /* $E0D1: D0 */ nes_cpu_instruction_boundary(0xE0D1, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xE0C7, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_E0C7;
    }
label_E0D3:;
    /* $E0D3: 86 */ nes_cpu_instruction_boundary(0xE0D3, 3); nes_write(0x5B, g_cpu.X);
label_E0D5:;
    /* $E0D5: 68 */ nes_cpu_instruction_boundary(0xE0D5, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_E0D6:;
    /* $E0D6: AA */ nes_cpu_instruction_boundary(0xE0D6, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_E0D7:;
    /* $E0D7: AD */ nes_cpu_instruction_boundary(0xE0D7, 4); g_cpu.A = nes_read(0x0107); FLAG_NZ(g_cpu.A);
label_E0DA:;
    /* $E0DA: 29 */ nes_cpu_instruction_boundary(0xE0DA, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_E0DC:;
    /* $E0DC: 20 */ nes_cpu_instruction_boundary(0xE0DC, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDE; g_cpu.S--; func_E173();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE0DC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E0DF:;
    /* $E0DF: AD */ nes_cpu_instruction_boundary(0xE0DF, 4); g_cpu.A = nes_read(0x0106); FLAG_NZ(g_cpu.A);
label_E0E2:;
    /* $E0E2: 20 */ nes_cpu_instruction_boundary(0xE0E2, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE4; g_cpu.S--; func_C2BF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE0E2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E0E5:;
    /* $E0E5: 20 */ nes_cpu_instruction_boundary(0xE0E5, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE7; g_cpu.S--; func_E173();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE0E5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E0E8:;
    /* $E0E8: AC */ nes_cpu_instruction_boundary(0xE0E8, 4); g_cpu.Y = nes_read(0x010B); FLAG_NZ(g_cpu.Y);
label_E0EB:;
    /* $E0EB: C8 */ nes_cpu_instruction_boundary(0xE0EB, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E0EC:;
    /* $E0EC: D0 */ nes_cpu_instruction_boundary(0xE0EC, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_E11C; }
label_E0EE:;
    /* $E0EE: AC */ nes_cpu_instruction_boundary(0xE0EE, 4); g_cpu.Y = nes_read(0x687A); FLAG_NZ(g_cpu.Y);
label_E0F1:;
    /* $E0F1: F0 */ nes_cpu_instruction_boundary(0xE0F1, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_E10A; }
label_E0F3:;
    /* $E0F3: AD */ nes_cpu_instruction_boundary(0xE0F3, 4); g_cpu.A = nes_read(0x6879); FLAG_NZ(g_cpu.A);
label_E0F6:;
    /* $E0F6: 20 */ nes_cpu_instruction_boundary(0xE0F6, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF8; g_cpu.S--; func_E198();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE0F6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E0F9:;
    /* $E0F9: A5 */ nes_cpu_instruction_boundary(0xE0F9, 3); g_cpu.A = nes_read(0x02); FLAG_NZ(g_cpu.A);
label_E0FB:;
    /* $E0FB: 20 */ nes_cpu_instruction_boundary(0xE0FB, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFD; g_cpu.S--; func_E173();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE0FB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E0FE:;
    /* $E0FE: A5 */ nes_cpu_instruction_boundary(0xE0FE, 3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_E100:;
    /* $E100: 20 */ nes_cpu_instruction_boundary(0xE100, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x02; g_cpu.S--; func_E173();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE100, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E103:;
    /* $E103: A5 */ nes_cpu_instruction_boundary(0xE103, 3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_E105:;
    /* $E105: 20 */ nes_cpu_instruction_boundary(0xE105, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x07; g_cpu.S--; func_E173();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE105, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E108:;
    /* $E108: D0 */ nes_cpu_instruction_boundary(0xE108, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E14A; }
label_E10A:;
    /* $E10A: A9 */ nes_cpu_instruction_boundary(0xE10A, 2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_E10C:;
    /* $E10C: E0 */ nes_cpu_instruction_boundary(0xE10C, 2); { int r=g_cpu.X-0xF4; g_cpu.C=(g_cpu.X>=0xF4)?1:0; FLAG_NZ(r&0xFF); }
label_E10E:;
    /* $E10E: B0 */ nes_cpu_instruction_boundary(0xE10E, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_E14A; }
label_E110:;
    /* $E110: 9D */ nes_cpu_instruction_boundary(0xE110, 5); nes_write((0x020D + g_cpu.X) & 0xFFFF, g_cpu.A);
label_E113:;
    /* $E113: E0 */ nes_cpu_instruction_boundary(0xE113, 2); { int r=g_cpu.X-0xF0; g_cpu.C=(g_cpu.X>=0xF0)?1:0; FLAG_NZ(r&0xFF); }
label_E115:;
    /* $E115: B0 */ nes_cpu_instruction_boundary(0xE115, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_E14A; }
label_E117:;
    /* $E117: 9D */ nes_cpu_instruction_boundary(0xE117, 5); nes_write((0x0211 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_E11A:;
    /* $E11A: D0 */ nes_cpu_instruction_boundary(0xE11A, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E14A; }
label_E11C:;
    /* $E11C: AD */ nes_cpu_instruction_boundary(0xE11C, 4); g_cpu.A = nes_read(0x010B); FLAG_NZ(g_cpu.A);
label_E11F:;
    /* $E11F: 20 */ nes_cpu_instruction_boundary(0xE11F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x21; g_cpu.S--; func_C2BF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE11F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E122:;
    /* $E122: 20 */ nes_cpu_instruction_boundary(0xE122, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x24; g_cpu.S--; func_E173();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE122, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E125:;
    /* $E125: AD */ nes_cpu_instruction_boundary(0xE125, 4); g_cpu.A = nes_read(0x010B); FLAG_NZ(g_cpu.A);
label_E128:;
    /* $E128: 29 */ nes_cpu_instruction_boundary(0xE128, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_E12A:;
    /* $E12A: 20 */ nes_cpu_instruction_boundary(0xE12A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2C; g_cpu.S--; func_E173();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE12A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E12D:;
    /* $E12D: AD */ nes_cpu_instruction_boundary(0xE12D, 4); g_cpu.A = nes_read(0x010A); FLAG_NZ(g_cpu.A);
label_E130:;
    /* $E130: 20 */ nes_cpu_instruction_boundary(0xE130, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x32; g_cpu.S--; func_C2BF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE130, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E133:;
    /* $E133: 20 */ nes_cpu_instruction_boundary(0xE133, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x35; g_cpu.S--; func_E173();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE133, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E136:;
    /* $E136: A9 */ nes_cpu_instruction_boundary(0xE136, 2); g_cpu.A = 0x58; FLAG_NZ(g_cpu.A);
label_E138:;
    /* $E138: 9D */ nes_cpu_instruction_boundary(0xE138, 5); nes_write((0x0201 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_E13B:;
    /* $E13B: FE */ nes_cpu_instruction_boundary(0xE13B, 7); { uint16_t a=(0x0202 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E13E:;
    /* $E13E: E0 */ nes_cpu_instruction_boundary(0xE13E, 2); { int r=g_cpu.X-0xFC; g_cpu.C=(g_cpu.X>=0xFC)?1:0; FLAG_NZ(r&0xFF); }
label_E140:;
    /* $E140: B0 */ nes_cpu_instruction_boundary(0xE140, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_E14A; }
label_E142:;
    /* $E142: A9 */ nes_cpu_instruction_boundary(0xE142, 2); g_cpu.A = 0x59; FLAG_NZ(g_cpu.A);
label_E144:;
    /* $E144: 9D */ nes_cpu_instruction_boundary(0xE144, 5); nes_write((0x0205 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_E147:;
    /* $E147: FE */ nes_cpu_instruction_boundary(0xE147, 7); { uint16_t a=(0x0206 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E14A:;
    /* $E14A: A6 */ nes_cpu_instruction_boundary(0xE14A, 3); g_cpu.X = nes_read(0x5B); FLAG_NZ(g_cpu.X);
label_E14C:;
    /* $E14C: AD */ nes_cpu_instruction_boundary(0xE14C, 4); g_cpu.A = nes_read(0x6877); FLAG_NZ(g_cpu.A);
label_E14F:;
    /* $E14F: F0 */ nes_cpu_instruction_boundary(0xE14F, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E172; }
label_E151:;
    /* $E151: 85 */ nes_cpu_instruction_boundary(0xE151, 3); nes_write(0x03, g_cpu.A);
label_E153:;
    /* $E153: A9 */ nes_cpu_instruction_boundary(0xE153, 2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_E155:;
    /* $E155: 85 */ nes_cpu_instruction_boundary(0xE155, 3); nes_write(0x00, g_cpu.A);
label_E157:;
    /* $E157: A0 */ nes_cpu_instruction_boundary(0xE157, 2); g_cpu.Y = 0x6F; FLAG_NZ(g_cpu.Y);
label_E159:;
    /* $E159: AD */ nes_cpu_instruction_boundary(0xE159, 4); g_cpu.A = nes_read(0x0107); FLAG_NZ(g_cpu.A);
label_E15C:;
    /* $E15C: 20 */ nes_cpu_instruction_boundary(0xE15C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x5E; g_cpu.S--; func_C2BF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE15C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E15F:;
    /* $E15F: 85 */ nes_cpu_instruction_boundary(0xE15F, 3); nes_write(0x01, g_cpu.A);
label_E161:;
    /* $E161: D0 */ nes_cpu_instruction_boundary(0xE161, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E164; }
label_E163:;
    /* $E163: 88 */ nes_cpu_instruction_boundary(0xE163, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E164:; /* AddTanks */
    /* $E164: 20 */ nes_cpu_instruction_boundary(0xE164, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x66; g_cpu.S--; func_E17B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE164, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E167:;
    /* $E167: C6 */ nes_cpu_instruction_boundary(0xE167, 5); { uint16_t a=0x01; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E169:;
    /* $E169: D0 */ nes_cpu_instruction_boundary(0xE169, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E16C; }
label_E16B:;
    /* $E16B: 88 */ nes_cpu_instruction_boundary(0xE16B, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E16C:;
    /* $E16C: C6 */ nes_cpu_instruction_boundary(0xE16C, 5); { uint16_t a=0x03; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E16E:;
    /* $E16E: D0 */ nes_cpu_instruction_boundary(0xE16E, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xE164, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_E164;
    }
label_E170:;
    /* $E170: 86 */ nes_cpu_instruction_boundary(0xE170, 3); nes_write(0x5B, g_cpu.X);
label_E172:;
    /* $E172: 60 */ nes_cpu_instruction_boundary(0xE172, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

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
    /* $C99E: 06 */ nes_cpu_instruction_boundary(0xC99E, 5); { uint16_t a=0xE8; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C9A0:;
    /* $C9A0: FE */ nes_cpu_instruction_boundary(0xC9A0, 7); { uint16_t a=(0x687D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C9A3:;
    /* $C9A3: F0 */ nes_cpu_instruction_boundary(0xC9A3, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xC99B); return; }
label_C9A5:; /* UpdateAge_RTS */
    /* $C9A5: 60 */ nes_cpu_instruction_boundary(0xC9A5, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C099(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C099");
#endif
label_C099:;
    /* $C099: 20 */ nes_cpu_instruction_boundary(0xC099, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x9B; g_cpu.S--; func_C4B2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC099, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C09C:;
    /* $C09C: A9 */ nes_cpu_instruction_boundary(0xC09C, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C09E:;
    /* $C09E: 8D */ nes_cpu_instruction_boundary(0xC09E, 4); nes_write(0x4011, g_cpu.A);
label_C0A1:;
    /* $C0A1: A9 */ nes_cpu_instruction_boundary(0xC0A1, 2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_C0A3:;
    /* $C0A3: 8D */ nes_cpu_instruction_boundary(0xC0A3, 4); nes_write(0x4015, g_cpu.A);
label_C0A6:;
    /* $C0A6: A0 */ nes_cpu_instruction_boundary(0xC0A6, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_C0A8:;
    /* $C0A8: 84 */ nes_cpu_instruction_boundary(0xC0A8, 3); nes_write(0x1F, g_cpu.Y);
label_C0AA:;
    /* $C0AA: 84 */ nes_cpu_instruction_boundary(0xC0AA, 3); nes_write(0x1E, g_cpu.Y);
label_C0AC:;
    /* $C0AC: A9 */ nes_cpu_instruction_boundary(0xC0AC, 2); g_cpu.A = 0x11; FLAG_NZ(g_cpu.A);
label_C0AE:;
    /* $C0AE: 85 */ nes_cpu_instruction_boundary(0xC0AE, 3); nes_write(0x2E, g_cpu.A);
label_C0B0:;
    /* $C0B0: A9 */ nes_cpu_instruction_boundary(0xC0B0, 2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_C0B2:;
    /* $C0B2: 85 */ nes_cpu_instruction_boundary(0xC0B2, 3); nes_write(0x2F, g_cpu.A);
label_C0B4:;
    /* $C0B4: C8 */ nes_cpu_instruction_boundary(0xC0B4, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_C0B5:;
    /* $C0B5: 84 */ nes_cpu_instruction_boundary(0xC0B5, 3); nes_write(0x24, g_cpu.Y);
label_C0B7:;
    /* $C0B7: 20 */ nes_cpu_instruction_boundary(0xC0B7, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; func_C4DE();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC0B7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C0BA:;
    /* $C0BA: D0 */ nes_cpu_instruction_boundary(0xC0BA, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_C0CB; }
label_C0BC:; /* MainLoop */
    /* $C0BC: 20 */ nes_cpu_instruction_boundary(0xC0BC, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBE; g_cpu.S--; func_C4DE();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC0BC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C0BF:;
    /* $C0BF: 20 */ nes_cpu_instruction_boundary(0xC0BF, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC1; g_cpu.S--; func_C266();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC0BF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C0C2:;
    /* $C0C2: 20 */ nes_cpu_instruction_boundary(0xC0C2, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC4; g_cpu.S--; func_C114();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC0C2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C0C5:;
    /* $C0C5: E6 */ nes_cpu_instruction_boundary(0xC0C5, 5); { uint16_t a=0x2D; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C0C7:;
    /* $C0C7: A9 */ nes_cpu_instruction_boundary(0xC0C7, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C0C9:;
    /* $C0C9: 85 */ nes_cpu_instruction_boundary(0xC0C9, 3); nes_write(0x1A, g_cpu.A);
label_C0CB:; /* WaitNMIEnd */
    /* $C0CB: A8 */ nes_cpu_instruction_boundary(0xC0CB, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_C0CC:;
    /* $C0CC: A5 */ nes_cpu_instruction_boundary(0xC0CC, 3); g_cpu.A = nes_read(0x1A); FLAG_NZ(g_cpu.A);
label_C0CE:;
    /* $C0CE: D0 */ nes_cpu_instruction_boundary(0xC0CE, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_C0D3; }
label_C0D0:;
    /* $C0D0: 4C */ nes_cpu_instruction_boundary(0xC0D0, 3); goto label_C0CB;
label_C0D3:;
    /* $C0D3: 20 */ nes_cpu_instruction_boundary(0xC0D3, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD5; g_cpu.S--; func_C000();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC0D3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C0D6:;
    /* $C0D6: 4C */ nes_cpu_instruction_boundary(0xC0D6, 3); goto label_C0BC;
}

void func_F09E(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F09E");
#endif
label_F09E:;
    /* $F09E: 50 */ nes_cpu_instruction_boundary(0xF09E, 2); if (!g_cpu.V) { maybe_trigger_vblank(1); call_by_address(0xF05D); return; }
label_F0A0:;
    /* $F0A0: F4 */ nes_cpu_instruction_boundary(0xF0A0, 4); (void)nes_read((0x6A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F0A2:;
    /* $F0A2: F0 */ nes_cpu_instruction_boundary(0xF0A2, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0A6; }
label_F0A4:;
    /* $F0A4: C9 */ nes_cpu_instruction_boundary(0xF0A4, 2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_F0A6:;
    /* $F0A6: F0 */ nes_cpu_instruction_boundary(0xF0A6, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0E5; }
label_F0A8:;
    /* $F0A8: 20 */ nes_cpu_instruction_boundary(0xF0A8, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAA; g_cpu.S--; func_F152();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0A8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0AB:;
    /* $F0AB: BD */ nes_cpu_instruction_boundary(0xF0AB, 4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F0AE:;
    /* $F0AE: C9 */ nes_cpu_instruction_boundary(0xF0AE, 2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_F0B0:;
    /* $F0B0: F0 */ nes_cpu_instruction_boundary(0xF0B0, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0D4; }
label_F0B2:;
    /* $F0B2: A0 */ nes_cpu_instruction_boundary(0xF0B2, 2); g_cpu.Y = 0xD0; FLAG_NZ(g_cpu.Y);
label_F0B4:;
    /* $F0B4: B9 */ nes_cpu_instruction_boundary(0xF0B4, 4); g_cpu.A = nes_read((0x0300 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F0B7:;
    /* $F0B7: F0 */ nes_cpu_instruction_boundary(0xF0B7, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0CF; }
label_F0B9:;
    /* $F0B9: C9 */ nes_cpu_instruction_boundary(0xF0B9, 2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_F0BB:;
    /* $F0BB: 90 */ nes_cpu_instruction_boundary(0xF0BB, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_F0C9; }
label_F0BD:;
    /* $F0BD: C9 */ nes_cpu_instruction_boundary(0xF0BD, 2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_F0BF:;
    /* $F0BF: F0 */ nes_cpu_instruction_boundary(0xF0BF, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0C9; }
label_F0C1:;
    /* $F0C1: C9 */ nes_cpu_instruction_boundary(0xF0C1, 2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_F0C3:;
    /* $F0C3: F0 */ nes_cpu_instruction_boundary(0xF0C3, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0C9; }
label_F0C5:;
    /* $F0C5: C9 */ nes_cpu_instruction_boundary(0xF0C5, 2); { int r=g_cpu.A-0x0B; g_cpu.C=(g_cpu.A>=0x0B)?1:0; FLAG_NZ(r&0xFF); }
label_F0C7:;
    /* $F0C7: D0 */ nes_cpu_instruction_boundary(0xF0C7, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0CF; }
label_F0C9:;
    /* $F0C9: 20 */ nes_cpu_instruction_boundary(0xF0C9, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCB; g_cpu.S--; func_F140();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0C9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0CC:;
    /* $F0CC: 20 */ nes_cpu_instruction_boundary(0xF0CC, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCE; g_cpu.S--; func_F2CA();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0CC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0CF:;
    /* $F0CF: 20 */ nes_cpu_instruction_boundary(0xF0CF, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD1; g_cpu.S--; func_F1EE();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0CF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0D2:;
    /* $F0D2: D0 */ nes_cpu_instruction_boundary(0xF0D2, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xF0B4, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_F0B4;
    }
label_F0D4:;
    /* $F0D4: A0 */ nes_cpu_instruction_boundary(0xF0D4, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_F0D6:;
    /* $F0D6: A5 */ nes_cpu_instruction_boundary(0xF0D6, 3); g_cpu.A = nes_read(0x70); FLAG_NZ(g_cpu.A);
label_F0D8:;
    /* $F0D8: D0 */ nes_cpu_instruction_boundary(0xF0D8, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0E5; }
label_F0DA:;
    /* $F0DA: 20 */ nes_cpu_instruction_boundary(0xF0DA, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDC; g_cpu.S--; func_CE84();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0DA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0DD:;
    /* $F0DD: F0 */ nes_cpu_instruction_boundary(0xF0DD, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0E5; }
label_F0DF:;
    /* $F0DF: 20 */ nes_cpu_instruction_boundary(0xF0DF, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE1; g_cpu.S--; func_F140();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0DF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0E2:;
    /* $F0E2: 20 */ nes_cpu_instruction_boundary(0xF0E2, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE4; g_cpu.S--; func_F282();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0E2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0E5:; /* NextEnemy */
    /* $F0E5: 20 */ nes_cpu_instruction_boundary(0xF0E5, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE7; g_cpu.S--; func_F1F4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0E5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0E8:;
    /* $F0E8: 30 */ nes_cpu_instruction_boundary(0xF0E8, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_F0ED; }
label_F0EA:;
    /* $F0EA: 4C */ nes_cpu_instruction_boundary(0xF0EA, 3); nes_cpu_instruction_boundary(0xF09F, 2); func_F09F(); return;
label_F0ED:;
    /* $F0ED: A2 */ nes_cpu_instruction_boundary(0xF0ED, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_F0EF:;
    /* $F0EF: 20 */ nes_cpu_instruction_boundary(0xF0EF, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; func_F172();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0EF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0F2:;
    /* $F0F2: A0 */ nes_cpu_instruction_boundary(0xF0F2, 2); g_cpu.Y = 0x60; FLAG_NZ(g_cpu.Y);
label_F0F4:;
    /* $F0F4: B9 */ nes_cpu_instruction_boundary(0xF0F4, 4); g_cpu.A = nes_read((0x6AF4 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F0F7:;
    /* $F0F7: F0 */ nes_cpu_instruction_boundary(0xF0F7, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_F112; }
label_F0F9:;
    /* $F0F9: C9 */ nes_cpu_instruction_boundary(0xF0F9, 2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_F0FB:;
    /* $F0FB: F0 */ nes_cpu_instruction_boundary(0xF0FB, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_F112; }
label_F0FD:;
    /* $F0FD: A5 */ nes_cpu_instruction_boundary(0xF0FD, 3); g_cpu.A = nes_read(0x70); FLAG_NZ(g_cpu.A);
label_F0FF:;
    /* $F0FF: D0 */ nes_cpu_instruction_boundary(0xF0FF, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F112; }
label_F101:;
    /* $F101: 20 */ nes_cpu_instruction_boundary(0xF101, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x03; g_cpu.S--; func_CE84();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF101, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F104:;
    /* $F104: F0 */ nes_cpu_instruction_boundary(0xF104, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F112; }
label_F106:;
    /* $F106: 20 */ nes_cpu_instruction_boundary(0xF106, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x08; g_cpu.S--; func_F1B3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF106, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F109:;
    /* $F109: 20 */ nes_cpu_instruction_boundary(0xF109, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0B; g_cpu.S--; func_F162();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF109, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F10C:;
    /* $F10C: 20 */ nes_cpu_instruction_boundary(0xF10C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0E; g_cpu.S--; func_F1FA();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF10C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F10F:;
    /* $F10F: 20 */ nes_cpu_instruction_boundary(0xF10F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x11; g_cpu.S--; func_F2ED();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF10F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F112:;
    /* $F112: 20 */ nes_cpu_instruction_boundary(0xF112, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x14; g_cpu.S--; func_F1EE();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF112, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F115:;
    /* $F115: C9 */ nes_cpu_instruction_boundary(0xF115, 2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_F117:;
    /* $F117: D0 */ nes_cpu_instruction_boundary(0xF117, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xF0F4, 2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_F0F4;
    }
label_F119:;
    /* $F119: A0 */ nes_cpu_instruction_boundary(0xF119, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_F11B:;
    /* $F11B: 20 */ nes_cpu_instruction_boundary(0xF11B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1D; g_cpu.S--; func_CE84();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF11B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F11E:;
    /* $F11E: F0 */ nes_cpu_instruction_boundary(0xF11E, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F13D; }
label_F120:;
    /* $F120: 20 */ nes_cpu_instruction_boundary(0xF120, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x22; g_cpu.S--; func_F186();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF120, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F123:;
    /* $F123: A2 */ nes_cpu_instruction_boundary(0xF123, 2); g_cpu.X = 0xF0; FLAG_NZ(g_cpu.X);
label_F125:;
    /* $F125: BD */ nes_cpu_instruction_boundary(0xF125, 4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F128:;
    /* $F128: C9 */ nes_cpu_instruction_boundary(0xF128, 2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_F12A:;
    /* $F12A: F0 */ nes_cpu_instruction_boundary(0xF12A, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F130; }
label_F12C:;
    /* $F12C: C9 */ nes_cpu_instruction_boundary(0xF12C, 2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_F12E:;
    /* $F12E: D0 */ nes_cpu_instruction_boundary(0xF12E, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F136; }
label_F130:;
    /* $F130: 20 */ nes_cpu_instruction_boundary(0xF130, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x32; g_cpu.S--; func_DC82();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF130, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F133:;
    /* $F133: 20 */ nes_cpu_instruction_boundary(0xF133, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x35; g_cpu.S--; func_F311();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF133, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F136:;
    /* $F136: 20 */ nes_cpu_instruction_boundary(0xF136, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x38; g_cpu.S--; func_F1F4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF136, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F139:;
    /* $F139: C9 */ nes_cpu_instruction_boundary(0xF139, 2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_F13B:;
    /* $F13B: D0 */ nes_cpu_instruction_boundary(0xF13B, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xF125, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_F125;
    }
label_F13D:; /* GotoSubtractHealth */
    /* $F13D: 4C */ nes_cpu_instruction_boundary(0xF13D, 3); nes_cpu_instruction_boundary(0xCE92, 2); func_CE92(); return;
}

void func_D99E(void) { /* SamusCollisionWithSolidEntities_notOnEnemy */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D99E");
#endif
label_D99E:; /* SamusCollisionWithSolidEntities_notOnEnemy */
    /* $D99E: 20 */ nes_cpu_instruction_boundary(0xD99E, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA0; g_cpu.S--; func_F1F4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD99E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D9A1:;
    /* $D9A1: 10 */ nes_cpu_instruction_boundary(0xD9A1, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xD983); return; }
label_D9A3:; /* SamusCollisionWithSolidEntities_loopExit */
    /* $D9A3: AD */ nes_cpu_instruction_boundary(0xD9A3, 4); g_cpu.A = nes_read(0x0320); FLAG_NZ(g_cpu.A);
label_D9A6:;
    /* $D9A6: F0 */ nes_cpu_instruction_boundary(0xD9A6, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D9B9; }
label_D9A8:;
    /* $D9A8: A0 */ nes_cpu_instruction_boundary(0xD9A8, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_D9AA:;
    /* $D9AA: A2 */ nes_cpu_instruction_boundary(0xD9AA, 2); g_cpu.X = 0x20; FLAG_NZ(g_cpu.X);
label_D9AC:;
    /* $D9AC: 20 */ nes_cpu_instruction_boundary(0xD9AC, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAE; g_cpu.S--; func_DC82();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD9AC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D9AF:;
    /* $D9AF: B0 */ nes_cpu_instruction_boundary(0xD9AF, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_D9B9; }
label_D9B1:;
    /* $D9B1: 20 */ nes_cpu_instruction_boundary(0xD9B1, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; func_D9BA();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD9B1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D9B4:;
    /* $D9B4: D0 */ nes_cpu_instruction_boundary(0xD9B4, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_D9B9; }
label_D9B6:;
    /* $D9B6: EE */ nes_cpu_instruction_boundary(0xD9B6, 6); { uint16_t a=0x0307; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D9B9:; /* SamusCollisionWithSolidEntities_RTS */
    /* $D9B9: 60 */ nes_cpu_instruction_boundary(0xD9B9, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_D905(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D905");
#endif
label_D905:;
    /* $D905: C4 */ nes_cpu_instruction_boundary(0xD905, 3); { uint8_t m=nes_read(0x20); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_D907:;
    /* $D907: B0 */ nes_cpu_instruction_boundary(0xD907, 2); if (g_cpu.C) { maybe_trigger_vblank(2); call_by_address(0xD8D1); return; }
label_D909:;
    /* $D909: 20 */ nes_cpu_instruction_boundary(0xD909, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xD9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0B; g_cpu.S--; func_C8BB();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD909, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D90C:;
    /* $D90C: A2 */ nes_cpu_instruction_boundary(0xD90C, 2); g_cpu.X = 0x20; FLAG_NZ(g_cpu.X);
label_D90E:;
    /* $D90E: 86 */ nes_cpu_instruction_boundary(0xD90E, 3); nes_write(0x4B, g_cpu.X);
label_D910:;
    /* $D910: A9 */ nes_cpu_instruction_boundary(0xD910, 2); g_cpu.A = 0x6B; FLAG_NZ(g_cpu.A);
label_D912:;
    /* $D912: 8D */ nes_cpu_instruction_boundary(0xD912, 4); nes_write(0x0305, g_cpu.A);
label_D915:;
    /* $D915: A9 */ nes_cpu_instruction_boundary(0xD915, 2); g_cpu.A = 0x5F; FLAG_NZ(g_cpu.A);
label_D917:;
    /* $D917: 8D */ nes_cpu_instruction_boundary(0xD917, 4); nes_write(0x0306, g_cpu.A);
label_D91A:;
    /* $D91A: A9 */ nes_cpu_instruction_boundary(0xD91A, 2); g_cpu.A = 0x7A; FLAG_NZ(g_cpu.A);
label_D91C:;
    /* $D91C: 9D */ nes_cpu_instruction_boundary(0xD91C, 5); nes_write((0x0305 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_D91F:;
    /* $D91F: A9 */ nes_cpu_instruction_boundary(0xD91F, 2); g_cpu.A = 0x6E; FLAG_NZ(g_cpu.A);
label_D921:;
    /* $D921: 9D */ nes_cpu_instruction_boundary(0xD921, 5); nes_write((0x0306 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_D924:;
    /* $D924: FE */ nes_cpu_instruction_boundary(0xD924, 7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D927:;
    /* $D927: A9 */ nes_cpu_instruction_boundary(0xD927, 2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_D929:;
    /* $D929: 85 */ nes_cpu_instruction_boundary(0xD929, 3); nes_write(0x2A, g_cpu.A);
label_D92B:;
    /* $D92B: 60 */ nes_cpu_instruction_boundary(0xD92B, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F0E2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F0E2");
#endif
label_F0E2:;
    /* $F0E2: 20 */ nes_cpu_instruction_boundary(0xF0E2, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE4; g_cpu.S--; func_F282();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0E2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0E5:; /* NextEnemy */
    /* $F0E5: 20 */ nes_cpu_instruction_boundary(0xF0E5, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE7; g_cpu.S--; func_F1F4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0E5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0E8:;
    /* $F0E8: 30 */ nes_cpu_instruction_boundary(0xF0E8, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_F0ED; }
label_F0EA:;
    /* $F0EA: 4C */ nes_cpu_instruction_boundary(0xF0EA, 3); nes_cpu_instruction_boundary(0xF09F, 2); func_F09F(); return;
label_F0ED:;
    /* $F0ED: A2 */ nes_cpu_instruction_boundary(0xF0ED, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_F0EF:;
    /* $F0EF: 20 */ nes_cpu_instruction_boundary(0xF0EF, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; func_F172();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0EF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0F2:;
    /* $F0F2: A0 */ nes_cpu_instruction_boundary(0xF0F2, 2); g_cpu.Y = 0x60; FLAG_NZ(g_cpu.Y);
label_F0F4:;
    /* $F0F4: B9 */ nes_cpu_instruction_boundary(0xF0F4, 4); g_cpu.A = nes_read((0x6AF4 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F0F7:;
    /* $F0F7: F0 */ nes_cpu_instruction_boundary(0xF0F7, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_F112; }
label_F0F9:;
    /* $F0F9: C9 */ nes_cpu_instruction_boundary(0xF0F9, 2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_F0FB:;
    /* $F0FB: F0 */ nes_cpu_instruction_boundary(0xF0FB, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_F112; }
label_F0FD:;
    /* $F0FD: A5 */ nes_cpu_instruction_boundary(0xF0FD, 3); g_cpu.A = nes_read(0x70); FLAG_NZ(g_cpu.A);
label_F0FF:;
    /* $F0FF: D0 */ nes_cpu_instruction_boundary(0xF0FF, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F112; }
label_F101:;
    /* $F101: 20 */ nes_cpu_instruction_boundary(0xF101, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x03; g_cpu.S--; func_CE84();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF101, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F104:;
    /* $F104: F0 */ nes_cpu_instruction_boundary(0xF104, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F112; }
label_F106:;
    /* $F106: 20 */ nes_cpu_instruction_boundary(0xF106, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x08; g_cpu.S--; func_F1B3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF106, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F109:;
    /* $F109: 20 */ nes_cpu_instruction_boundary(0xF109, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0B; g_cpu.S--; func_F162();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF109, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F10C:;
    /* $F10C: 20 */ nes_cpu_instruction_boundary(0xF10C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0E; g_cpu.S--; func_F1FA();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF10C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F10F:;
    /* $F10F: 20 */ nes_cpu_instruction_boundary(0xF10F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x11; g_cpu.S--; func_F2ED();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF10F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F112:;
    /* $F112: 20 */ nes_cpu_instruction_boundary(0xF112, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x14; g_cpu.S--; func_F1EE();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF112, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F115:;
    /* $F115: C9 */ nes_cpu_instruction_boundary(0xF115, 2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_F117:;
    /* $F117: D0 */ nes_cpu_instruction_boundary(0xF117, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xF0F4, 2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_F0F4;
    }
label_F119:;
    /* $F119: A0 */ nes_cpu_instruction_boundary(0xF119, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_F11B:;
    /* $F11B: 20 */ nes_cpu_instruction_boundary(0xF11B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1D; g_cpu.S--; func_CE84();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF11B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F11E:;
    /* $F11E: F0 */ nes_cpu_instruction_boundary(0xF11E, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F13D; }
label_F120:;
    /* $F120: 20 */ nes_cpu_instruction_boundary(0xF120, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x22; g_cpu.S--; func_F186();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF120, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F123:;
    /* $F123: A2 */ nes_cpu_instruction_boundary(0xF123, 2); g_cpu.X = 0xF0; FLAG_NZ(g_cpu.X);
label_F125:;
    /* $F125: BD */ nes_cpu_instruction_boundary(0xF125, 4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F128:;
    /* $F128: C9 */ nes_cpu_instruction_boundary(0xF128, 2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_F12A:;
    /* $F12A: F0 */ nes_cpu_instruction_boundary(0xF12A, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F130; }
label_F12C:;
    /* $F12C: C9 */ nes_cpu_instruction_boundary(0xF12C, 2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_F12E:;
    /* $F12E: D0 */ nes_cpu_instruction_boundary(0xF12E, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F136; }
label_F130:;
    /* $F130: 20 */ nes_cpu_instruction_boundary(0xF130, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x32; g_cpu.S--; func_DC82();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF130, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F133:;
    /* $F133: 20 */ nes_cpu_instruction_boundary(0xF133, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x35; g_cpu.S--; func_F311();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF133, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F136:;
    /* $F136: 20 */ nes_cpu_instruction_boundary(0xF136, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x38; g_cpu.S--; func_F1F4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF136, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F139:;
    /* $F139: C9 */ nes_cpu_instruction_boundary(0xF139, 2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_F13B:;
    /* $F13B: D0 */ nes_cpu_instruction_boundary(0xF13B, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xF125, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_F125;
    }
label_F13D:; /* GotoSubtractHealth */
    /* $F13D: 4C */ nes_cpu_instruction_boundary(0xF13D, 3); nes_cpu_instruction_boundary(0xCE92, 2); func_CE92(); return;
}

void func_EB30(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EB30");
#endif
label_EB30:;
    /* $EB30: 15 */ nes_cpu_instruction_boundary(0xEB30, 4); g_cpu.A |= nes_read((0xA5 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_EB32:;
    /* $EB32: 74 */ nes_cpu_instruction_boundary(0xEB32, 4); (void)nes_read((0x29 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_EB34:;
    /* $EB34: 06 */ nes_cpu_instruction_boundary(0xEB34, 5); { uint16_t a=0x4A; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EB36:;
    /* $EB36: A8 */ nes_cpu_instruction_boundary(0xEB36, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_EB37:;
    /* $EB37: B9 */ nes_cpu_instruction_boundary(0xEB37, 4); g_cpu.A = nes_read((0x687A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_EB3A:;
    /* $EB3A: F0 */ nes_cpu_instruction_boundary(0xEB3A, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_EB41; }
label_EB3C:;
    /* $EB3C: 68 */ nes_cpu_instruction_boundary(0xEB3C, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_EB3D:;
    /* $EB3D: 68 */ nes_cpu_instruction_boundary(0xEB3D, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_EB3E:;
    /* $EB3E: 4C */ nes_cpu_instruction_boundary(0xEB3E, 3); nes_cpu_instruction_boundary(0xEB24, 2); func_EB24(); return;
label_EB41:;
    /* $EB41: A9 */ nes_cpu_instruction_boundary(0xEB41, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_EB43:;
    /* $EB43: 8D */ nes_cpu_instruction_boundary(0xEB43, 4); nes_write(0x6987, g_cpu.A);
label_EB46:;
    /* $EB46: 68 */ nes_cpu_instruction_boundary(0xEB46, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_EB47:;
    /* $EB47: 29 */ nes_cpu_instruction_boundary(0xEB47, 2); g_cpu.A &= 0x3F; FLAG_NZ(g_cpu.A);
label_EB49:;
    /* $EB49: 9D */ nes_cpu_instruction_boundary(0xEB49, 5); nes_write((0x6B02 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_EB4C:;
    /* $EB4C: 60 */ nes_cpu_instruction_boundary(0xEB4C, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

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
    /* $E390: AD */ nes_cpu_instruction_boundary(0xE390, 4); g_cpu.A = nes_read(0x90E7); FLAG_NZ(g_cpu.A);
label_E393:;
    /* $E393: 11 */ nes_cpu_instruction_boundary(0xE393, 5); g_cpu.A |= nes_read((nes_read16zp(0x20) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E395:;
    /* $E395: 76 */ nes_cpu_instruction_boundary(0xE395, 6); { uint16_t a=(0xD9 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E397:;
    /* $E397: AD */ nes_cpu_instruction_boundary(0xE397, 4); g_cpu.A = nes_read(0x0307); FLAG_NZ(g_cpu.A);
label_E39A:;
    /* $E39A: D0 */ nes_cpu_instruction_boundary(0xE39A, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E3A5; }
label_E39C:;
    /* $E39C: A5 */ nes_cpu_instruction_boundary(0xE39C, 3); g_cpu.A = nes_read(0x7D); FLAG_NZ(g_cpu.A);
label_E39E:;
    /* $E39E: D0 */ nes_cpu_instruction_boundary(0xE39E, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E3A5; }
label_E3A0:;
    /* $E3A0: A9 */ nes_cpu_instruction_boundary(0xE3A0, 2); g_cpu.A = 0x1A; FLAG_NZ(g_cpu.A);
label_E3A2:;
    /* $E3A2: 8D */ nes_cpu_instruction_boundary(0xE3A2, 4); nes_write(0x0314, g_cpu.A);
label_E3A5:; /* VertAccelerate_dontStartFalling */
    /* $E3A5: A2 */ nes_cpu_instruction_boundary(0xE3A5, 2); g_cpu.X = 0x05; FLAG_NZ(g_cpu.X);
label_E3A7:;
    /* $E3A7: AD */ nes_cpu_instruction_boundary(0xE3A7, 4); g_cpu.A = nes_read(0x0312); FLAG_NZ(g_cpu.A);
label_E3AA:;
    /* $E3AA: 18 */ nes_cpu_instruction_boundary(0xE3AA, 2); g_cpu.C = 0;
label_E3AB:;
    /* $E3AB: 6D */ nes_cpu_instruction_boundary(0xE3AB, 4); { uint8_t m=nes_read(0x0314); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_E3AE:;
    /* $E3AE: 8D */ nes_cpu_instruction_boundary(0xE3AE, 4); nes_write(0x0312, g_cpu.A);
label_E3B1:;
    /* $E3B1: AD */ nes_cpu_instruction_boundary(0xE3B1, 4); g_cpu.A = nes_read(0x0308); FLAG_NZ(g_cpu.A);
label_E3B4:;
    /* $E3B4: 69 */ nes_cpu_instruction_boundary(0xE3B4, 2); { uint16_t r = g_cpu.A + 0x00 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x00); g_cpu.A=r&0xFF; }
label_E3B6:;
    /* $E3B6: 8D */ nes_cpu_instruction_boundary(0xE3B6, 4); nes_write(0x0308, g_cpu.A);
label_E3B9:;
    /* $E3B9: 10 */ nes_cpu_instruction_boundary(0xE3B9, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_E3C9; }
label_E3BB:;
    /* $E3BB: A9 */ nes_cpu_instruction_boundary(0xE3BB, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E3BD:;
    /* $E3BD: CD */ nes_cpu_instruction_boundary(0xE3BD, 4); { uint8_t m=nes_read(0x0312); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_E3C0:;
    /* $E3C0: ED */ nes_cpu_instruction_boundary(0xE3C0, 4); { uint8_t m=nes_read(0x0308); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_E3C3:;
    /* $E3C3: C9 */ nes_cpu_instruction_boundary(0xE3C3, 2); { int r=g_cpu.A-0x06; g_cpu.C=(g_cpu.A>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_E3C5:;
    /* $E3C5: A2 */ nes_cpu_instruction_boundary(0xE3C5, 2); g_cpu.X = 0xFA; FLAG_NZ(g_cpu.X);
label_E3C7:;
    /* $E3C7: D0 */ nes_cpu_instruction_boundary(0xE3C7, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E3CB; }
label_E3C9:; /* VertAccelerate_else_B */
    /* $E3C9: C9 */ nes_cpu_instruction_boundary(0xE3C9, 2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_E3CB:; /* VertAccelerate_endIf_B */
    /* $E3CB: 90 */ nes_cpu_instruction_boundary(0xE3CB, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_E3D3; }
label_E3CD:;
    /* $E3CD: 20 */ nes_cpu_instruction_boundary(0xE3CD, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCF; g_cpu.S--; func_D147();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE3CD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E3D0:;
    /* $E3D0: 8E */ nes_cpu_instruction_boundary(0xE3D0, 4); nes_write(0x0308, g_cpu.X);
label_E3D3:; /* VertAccelerate_endIf_C */
    /* $E3D3: AD */ nes_cpu_instruction_boundary(0xE3D3, 4); g_cpu.A = nes_read(0x0310); FLAG_NZ(g_cpu.A);
label_E3D6:;
    /* $E3D6: 18 */ nes_cpu_instruction_boundary(0xE3D6, 2); g_cpu.C = 0;
label_E3D7:;
    /* $E3D7: 6D */ nes_cpu_instruction_boundary(0xE3D7, 4); { uint8_t m=nes_read(0x0312); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_E3DA:;
    /* $E3DA: 8D */ nes_cpu_instruction_boundary(0xE3DA, 4); nes_write(0x0310, g_cpu.A);
label_E3DD:;
    /* $E3DD: A9 */ nes_cpu_instruction_boundary(0xE3DD, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E3DF:;
    /* $E3DF: 6D */ nes_cpu_instruction_boundary(0xE3DF, 4); { uint8_t m=nes_read(0x0308); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_E3E2:;
    /* $E3E2: 85 */ nes_cpu_instruction_boundary(0xE3E2, 3); nes_write(0x00, g_cpu.A);
label_E3E4:;
    /* $E3E4: 60 */ nes_cpu_instruction_boundary(0xE3E4, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

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
    /* $F64B: F6 */ nes_cpu_instruction_boundary(0xF64B, 6); { uint16_t a=(0xA9 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F64D:;
    /* $F64D: 0A */ nes_cpu_instruction_boundary(0xF64D, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_F64E:;
    /* $F64E: 9D */ nes_cpu_instruction_boundary(0xF64E, 5); nes_write((0x0406 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F651:;
    /* $F651: FE */ nes_cpu_instruction_boundary(0xF651, 7); { uint16_t a=(0x6AF4 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F654:;
    /* $F654: A9 */ nes_cpu_instruction_boundary(0xF654, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_F656:;
    /* $F656: 24 */ nes_cpu_instruction_boundary(0xF656, 3); { uint8_t m=nes_read(0x0A); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_F658:;
    /* $F658: 50 */ nes_cpu_instruction_boundary(0xF658, 2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_F65C; }
label_F65A:;
    /* $F65A: A9 */ nes_cpu_instruction_boundary(0xF65A, 2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_F65C:; /* ExplodeEnemy_endIf_B */
    /* $F65C: 9D */ nes_cpu_instruction_boundary(0xF65C, 5); nes_write((0x0407 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F65F:;
    /* $F65F: A4 */ nes_cpu_instruction_boundary(0xF65F, 3); g_cpu.Y = nes_read(0x4B); FLAG_NZ(g_cpu.Y);
label_F661:;
    /* $F661: B9 */ nes_cpu_instruction_boundary(0xF661, 4); g_cpu.A = nes_read((0x0400 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F664:;
    /* $F664: 9D */ nes_cpu_instruction_boundary(0xF664, 5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F667:;
    /* $F667: B9 */ nes_cpu_instruction_boundary(0xF667, 4); g_cpu.A = nes_read((0x0401 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F66A:;
    /* $F66A: 9D */ nes_cpu_instruction_boundary(0xF66A, 5); nes_write((0x0401 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F66D:;
    /* $F66D: B9 */ nes_cpu_instruction_boundary(0xF66D, 4); g_cpu.A = nes_read((0x6AFB + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F670:;
    /* $F670: 9D */ nes_cpu_instruction_boundary(0xF670, 5); nes_write((0x6AFB + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F673:; /* ExplodeEnemy_exit */
    /* $F673: A6 */ nes_cpu_instruction_boundary(0xF673, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_F675:;
    /* $F675: 60 */ nes_cpu_instruction_boundary(0xF675, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

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
    /* $F8F2: F1 */ nes_cpu_instruction_boundary(0xF8F2, 5); { uint8_t m=nes_read((nes_read16zp(0xC9) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_F8F4:;
    /* $F8F4: C0 */ nes_cpu_instruction_boundary(0xF8F4, 2); { int r=g_cpu.Y-0xD0; g_cpu.C=(g_cpu.Y>=0xD0)?1:0; FLAG_NZ(r&0xFF); }
label_F8F6:;
    /* $F8F6: F4 */ nes_cpu_instruction_boundary(0xF8F6, 4); (void)nes_read((0x60 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F8F8:; /* SpawnEnProjectile_F8F8 */
    /* $F8F8: A5 */ nes_cpu_instruction_boundary(0xF8F8, 3); g_cpu.A = nes_read(0x85); FLAG_NZ(g_cpu.A);
label_F8FA:;
    /* $F8FA: C9 */ nes_cpu_instruction_boundary(0xF8FA, 2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_F8FC:;
    /* $F8FC: 90 */ nes_cpu_instruction_boundary(0xF8FC, 2); if (!g_cpu.C) { maybe_trigger_vblank(2); goto label_F91C; }
label_F8FE:;
    /* $F8FE: A6 */ nes_cpu_instruction_boundary(0xF8FE, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_F900:;
    /* $F900: BD */ nes_cpu_instruction_boundary(0xF900, 4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F903:;
    /* $F903: 4A */ nes_cpu_instruction_boundary(0xF903, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_F904:;
    /* $F904: A5 */ nes_cpu_instruction_boundary(0xF904, 3); g_cpu.A = nes_read(0x88); FLAG_NZ(g_cpu.A);
label_F906:;
    /* $F906: 2A */ nes_cpu_instruction_boundary(0xF906, 2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_F907:;
    /* $F907: 29 */ nes_cpu_instruction_boundary(0xF907, 2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_F909:;
    /* $F909: 99 */ nes_cpu_instruction_boundary(0xF909, 5); nes_write((0x040A + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F90C:;
    /* $F90C: A9 */ nes_cpu_instruction_boundary(0xF90C, 2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_F90E:;
    /* $F90E: 99 */ nes_cpu_instruction_boundary(0xF90E, 5); nes_write((0x6AF4 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F911:;
    /* $F911: A9 */ nes_cpu_instruction_boundary(0xF911, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_F913:;
    /* $F913: 99 */ nes_cpu_instruction_boundary(0xF913, 5); nes_write((0x0409 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F916:;
    /* $F916: 99 */ nes_cpu_instruction_boundary(0xF916, 5); nes_write((0x6AF8 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F919:;
    /* $F919: 99 */ nes_cpu_instruction_boundary(0xF919, 5); nes_write((0x0408 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F91C:; /* SpawnEnProjectile_F8F8_RTS */
    /* $F91C: 60 */ nes_cpu_instruction_boundary(0xF91C, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

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
    /* $F408: 1E */ nes_cpu_instruction_boundary(0xF408, 7); { uint16_t a=(0x20F5 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F40B:;
    /* $F40B: 36 */ nes_cpu_instruction_boundary(0xF40B, 6); { uint16_t a=(0xF5 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F40D:; /* UpdateEnemy_Explode */
    /* $F40D: 4C */ nes_cpu_instruction_boundary(0xF40D, 3); nes_cpu_instruction_boundary(0x95E5, 2); call_by_address_tail(0x95E5, -1); return;
}

void func_DF90(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DF90");
#endif
label_DF90:;
    /* $DF90: 65 */ nes_cpu_instruction_boundary(0xDF90, 3); { uint8_t m=nes_read(0xA8); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_DF92:;
    /* $DF92: B9 */ nes_cpu_instruction_boundary(0xDF92, 4); g_cpu.A = nes_read((0xE04B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DF95:;
    /* $DF95: 48 */ nes_cpu_instruction_boundary(0xDF95, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_DF96:;
    /* $DF96: A5 */ nes_cpu_instruction_boundary(0xDF96, 3); g_cpu.A = nes_read(0x0F); FLAG_NZ(g_cpu.A);
label_DF98:;
    /* $DF98: 18 */ nes_cpu_instruction_boundary(0xDF98, 2); g_cpu.C = 0;
label_DF99:;
    /* $DF99: 69 */ nes_cpu_instruction_boundary(0xDF99, 2); { uint16_t r = g_cpu.A + 0x0C + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0C); g_cpu.A=r&0xFF; }
label_DF9B:;
    /* $DF9B: A8 */ nes_cpu_instruction_boundary(0xDF9B, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_DF9C:;
    /* $DF9C: 68 */ nes_cpu_instruction_boundary(0xDF9C, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_DF9D:;
    /* $DF9D: 18 */ nes_cpu_instruction_boundary(0xDF9D, 2); g_cpu.C = 0;
label_DF9E:;
    /* $DF9E: 71 */ nes_cpu_instruction_boundary(0xDF9E, 5); { uint8_t m=nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_DFA0:;
    /* $DFA0: 4C */ nes_cpu_instruction_boundary(0xDFA0, 3); nes_cpu_instruction_boundary(0xDF75, 2); func_DF75(); return;
}

void func_FE1D(void) { /* UpdateAllTileBlasts_loop */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_FE1D");
#endif
label_FE1D:; /* UpdateAllTileBlasts_loop */
    /* $FE1D: 20 */ nes_cpu_instruction_boundary(0xFE1D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFE; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1F; g_cpu.S--; func_FE27();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFE1D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FE20:;
    /* $FE20: A6 */ nes_cpu_instruction_boundary(0xFE20, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_FE22:;
    /* $FE22: 20 */ nes_cpu_instruction_boundary(0xFE22, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFE; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x24; g_cpu.S--; func_F1F4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFE22, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FE25:;
    /* $FE25: D0 */ nes_cpu_instruction_boundary(0xFE25, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xFE1D, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_FE1D;
    }
label_FE27:; /* UpdateTileBlast */
    /* $FE27: 86 */ nes_cpu_instruction_boundary(0xFE27, 3); nes_write(0x4B, g_cpu.X);
label_FE29:;
    /* $FE29: BD */ nes_cpu_instruction_boundary(0xFE29, 4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FE2C:;
    /* $FE2C: F0 */ nes_cpu_instruction_boundary(0xFE2C, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_FE78; }
label_FE2E:;
    /* $FE2E: 20 */ nes_cpu_instruction_boundary(0xFE2E, 6); /* inline_dispatch $C27C: 6 entries (bank=-1) */
switch(g_cpu.A) {
  case 0: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x5C); nes_write(0x000D, 0xC4); g_cpu.A = 0xC4; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0xC45C, 57); func_C45C(); return;
  case 1: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x3D); nes_write(0x000D, 0xFE); g_cpu.A = 0xFE; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0xFE3D, 57); func_FE3D(); return;
  case 2: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x54); nes_write(0x000D, 0xFE); g_cpu.A = 0xFE; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0xFE54, 57); func_FE54(); return;
  case 3: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x59); nes_write(0x000D, 0xFE); g_cpu.A = 0xFE; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0xFE59, 57); func_FE59(); return;
  case 4: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x54); nes_write(0x000D, 0xFE); g_cpu.A = 0xFE; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0xFE54, 57); func_FE54(); return;
  case 5: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x83); nes_write(0x000D, 0xFE); g_cpu.A = 0xFE; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0xFE83, 57); func_FE83(); return;
  default: nes_log_inline_miss(0xFE2E, g_cpu.A); return;
}
label_FE3D:; /* UpdateTileBlast_Init */
    /* $FE3D: FE */ nes_cpu_instruction_boundary(0xFE3D, 7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_FE40:;
    /* $FE40: A9 */ nes_cpu_instruction_boundary(0xFE40, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_FE42:;
    /* $FE42: 20 */ nes_cpu_instruction_boundary(0xFE42, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFE; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x44; g_cpu.S--; func_FE6D();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFE42, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FE45:;
    /* $FE45: A9 */ nes_cpu_instruction_boundary(0xFE45, 2); g_cpu.A = 0x50; FLAG_NZ(g_cpu.A);
label_FE47:;
    /* $FE47: 9D */ nes_cpu_instruction_boundary(0xFE47, 5); nes_write((0x0507 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_FE4A:;
    /* $FE4A: BD */ nes_cpu_instruction_boundary(0xFE4A, 4); g_cpu.A = nes_read((0x0508 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FE4D:;
    /* $FE4D: 85 */ nes_cpu_instruction_boundary(0xFE4D, 3); nes_write(0x00, g_cpu.A);
label_FE4F:;
    /* $FE4F: BD */ nes_cpu_instruction_boundary(0xFE4F, 4); g_cpu.A = nes_read((0x0509 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FE52:;
    /* $FE52: 85 */ nes_cpu_instruction_boundary(0xFE52, 3); nes_write(0x01, g_cpu.A);
label_FE54:; /* UpdateTileBlast_Animating */
    /* $FE54: A9 */ nes_cpu_instruction_boundary(0xFE54, 2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_FE56:;
    /* $FE56: 4C */ nes_cpu_instruction_boundary(0xFE56, 3); nes_cpu_instruction_boundary(0xFF54, 2); func_FF54(); return;
label_FE78:; /* SetTileAnim_RTS */
    /* $FE78: 60 */ nes_cpu_instruction_boundary(0xFE78, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C39B(void) { /* WritePaletteStringByte */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C39B");
#endif
label_C39B:; /* WritePaletteStringByte */
    /* $C39B: 24 */ nes_cpu_instruction_boundary(0xC39B, 3); { uint8_t m=nes_read(0x04); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_C39D:;
    /* $C39D: 70 */ nes_cpu_instruction_boundary(0xC39D, 2); if (g_cpu.V) { maybe_trigger_vblank(1); goto label_C3A0; }
label_C39F:;
    /* $C39F: C8 */ nes_cpu_instruction_boundary(0xC39F, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_C3A0:;
    /* $C3A0: B1 */ nes_cpu_instruction_boundary(0xC3A0, 5); g_cpu.A = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_C3A2:;
    /* $C3A2: 20 */ nes_cpu_instruction_boundary(0xC3A2, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA4; g_cpu.S--; func_C36B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC3A2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C3A5:;
    /* $C3A5: 84 */ nes_cpu_instruction_boundary(0xC3A5, 3); nes_write(0x06, g_cpu.Y);
label_C3A7:;
    /* $C3A7: A0 */ nes_cpu_instruction_boundary(0xC3A7, 2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_C3A9:;
    /* $C3A9: 24 */ nes_cpu_instruction_boundary(0xC3A9, 3); { uint8_t m=nes_read(0x04); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_C3AB:;
    /* $C3AB: 10 */ nes_cpu_instruction_boundary(0xC3AB, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_C3AF; }
label_C3AD:;
    /* $C3AD: A0 */ nes_cpu_instruction_boundary(0xC3AD, 2); g_cpu.Y = 0x20; FLAG_NZ(g_cpu.Y);
label_C3AF:;
    /* $C3AF: 20 */ nes_cpu_instruction_boundary(0xC3AF, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB1; g_cpu.S--; func_C2A8();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC3AF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C3B2:;
    /* $C3B2: A4 */ nes_cpu_instruction_boundary(0xC3B2, 3); g_cpu.Y = nes_read(0x06); FLAG_NZ(g_cpu.Y);
label_C3B4:;
    /* $C3B4: C6 */ nes_cpu_instruction_boundary(0xC3B4, 5); { uint16_t a=0x05; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C3B6:;
    /* $C3B6: D0 */ nes_cpu_instruction_boundary(0xC3B6, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xC39B, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_C39B;
    }
label_C3B8:;
    /* $C3B8: 8E */ nes_cpu_instruction_boundary(0xC3B8, 4); nes_write(0x07A0, g_cpu.X);
label_C3BB:;
    /* $C3BB: C8 */ nes_cpu_instruction_boundary(0xC3BB, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_C3BC:;
    /* $C3BC: AE */ nes_cpu_instruction_boundary(0xC3BC, 4); g_cpu.X = nes_read(0x07A0); FLAG_NZ(g_cpu.X);
label_C3BF:;
    /* $C3BF: B1 */ nes_cpu_instruction_boundary(0xC3BF, 5); g_cpu.A = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_C3C1:;
    /* $C3C1: D0 */ nes_cpu_instruction_boundary(0xC3C1, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xC385); return; }
label_C3C3:;
    /* $C3C3: 20 */ nes_cpu_instruction_boundary(0xC3C3, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC5; g_cpu.S--; func_C376();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC3C3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C3C6:; /* SeparateControlBits */
    /* $C3C6: 85 */ nes_cpu_instruction_boundary(0xC3C6, 3); nes_write(0x04, g_cpu.A);
label_C3C8:;
    /* $C3C8: 29 */ nes_cpu_instruction_boundary(0xC3C8, 2); g_cpu.A &= 0xBF; FLAG_NZ(g_cpu.A);
label_C3CA:;
    /* $C3CA: 9D */ nes_cpu_instruction_boundary(0xC3CA, 5); nes_write((0x07A1 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_C3CD:;
    /* $C3CD: 29 */ nes_cpu_instruction_boundary(0xC3CD, 2); g_cpu.A &= 0x3F; FLAG_NZ(g_cpu.A);
label_C3CF:;
    /* $C3CF: 85 */ nes_cpu_instruction_boundary(0xC3CF, 3); nes_write(0x05, g_cpu.A);
label_C3D1:;
    /* $C3D1: 4C */ nes_cpu_instruction_boundary(0xC3D1, 3); nes_cpu_instruction_boundary(0xC36E, 2); func_C36E(); return;
}

void func_FD68(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_FD68");
#endif
label_FD68:;
    /* $FD68: B2 */ nes_cpu_instruction_boundary(0xFD68, 2); /* ILLEGAL $B2 — skip 1 */
label_FD69:;
    /* $FD69: 85 */ nes_cpu_instruction_boundary(0xFD69, 3); nes_write(0x09, g_cpu.A);
label_FD6B:;
    /* $FD6B: 60 */ nes_cpu_instruction_boundary(0xFD6B, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

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
    /* $F274: 0A */ nes_cpu_instruction_boundary(0xF274, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_F275:;
    /* $F275: 03 */ nes_cpu_instruction_boundary(0xF275, 8); { uint16_t a=nes_read16zp((0x60 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_F277:; /* CollisionDetectionDoor_F277 */
    /* $F277: B0 */ nes_cpu_instruction_boundary(0xF277, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_F281; }
label_F279:; /* SetWeaponProjectileIsHit */
    /* $F279: A5 */ nes_cpu_instruction_boundary(0xF279, 3); g_cpu.A = nes_read(0x10); FLAG_NZ(g_cpu.A);
label_F27B:; /* SetSamusIsHitFlags */
    /* $F27B: 19 */ nes_cpu_instruction_boundary(0xF27B, 4); g_cpu.A |= nes_read((0x030A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F27E:;
    /* $F27E: 99 */ nes_cpu_instruction_boundary(0xF27E, 5); nes_write((0x030A + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F281:; /* Exit17 */
    /* $F281: 60 */ nes_cpu_instruction_boundary(0xF281, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

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
    /* $FD0B: B5 */ nes_cpu_instruction_boundary(0xFD0B, 4); g_cpu.A = nes_read((0xA8 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_FD0D:;
    /* $FD0D: AD */ nes_cpu_instruction_boundary(0xFD0D, 4); g_cpu.A = nes_read(0x030E); FLAG_NZ(g_cpu.A);
label_FD10:;
    /* $FD10: 38 */ nes_cpu_instruction_boundary(0xFD10, 2); g_cpu.C = 1;
label_FD11:;
    /* $FD11: F5 */ nes_cpu_instruction_boundary(0xFD11, 4); { uint8_t m=nes_read((0xB2 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_FD13:;
    /* $FD13: 10 */ nes_cpu_instruction_boundary(0xFD13, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_FD19; }
label_FD15:;
    /* $FD15: C8 */ nes_cpu_instruction_boundary(0xFD15, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_FD16:;
    /* $FD16: 20 */ nes_cpu_instruction_boundary(0xFD16, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x18; g_cpu.S--; func_C3D4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFD16, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FD19:;
    /* $FD19: C9 */ nes_cpu_instruction_boundary(0xFD19, 2); { int r=g_cpu.A-0x10; g_cpu.C=(g_cpu.A>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_FD1B:;
    /* $FD1B: B0 */ nes_cpu_instruction_boundary(0xFD1B, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_FD24; }
label_FD1D:;
    /* $FD1D: 98 */ nes_cpu_instruction_boundary(0xFD1D, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_FD1E:;
    /* $FD1E: 95 */ nes_cpu_instruction_boundary(0xFD1E, 4); nes_write((0xB4 + g_cpu.X) & 0xFF, g_cpu.A);
label_FD20:;
    /* $FD20: A9 */ nes_cpu_instruction_boundary(0xFD20, 2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_FD22:;
    /* $FD22: 95 */ nes_cpu_instruction_boundary(0xFD22, 4); nes_write((0xB0 + g_cpu.X) & 0xFF, g_cpu.A);
label_FD24:; /* RTS_X399 */
    /* $FD24: 60 */ nes_cpu_instruction_boundary(0xFD24, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E2E3(void) { /* SamusMoveVertically_loop_down */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E2E3");
#endif
label_E2E3:; /* SamusMoveVertically_loop_down */
    /* $E2E3: 20 */ nes_cpu_instruction_boundary(0xE2E3, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE2; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE5; g_cpu.S--; func_E4A3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE2E3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E2E6:;
    /* $E2E6: B0 */ nes_cpu_instruction_boundary(0xE2E6, 2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_E316; }
label_E2E8:;
    /* $E2E8: AD */ nes_cpu_instruction_boundary(0xE2E8, 4); g_cpu.A = nes_read(0x0300); FLAG_NZ(g_cpu.A);
label_E2EB:;
    /* $E2EB: C9 */ nes_cpu_instruction_boundary(0xE2EB, 2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_E2ED:;
    /* $E2ED: D0 */ nes_cpu_instruction_boundary(0xE2ED, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_E30B; }
label_E2EF:;
    /* $E2EF: 4E */ nes_cpu_instruction_boundary(0xE2EF, 6); { uint16_t a=0x0308; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_E2F2:;
    /* $E2F2: F0 */ nes_cpu_instruction_boundary(0xE2F2, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_E30E; }
label_E2F4:;
    /* $E2F4: 6E */ nes_cpu_instruction_boundary(0xE2F4, 6); { uint16_t a=0x0312; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E2F7:;
    /* $E2F7: A9 */ nes_cpu_instruction_boundary(0xE2F7, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E2F9:;
    /* $E2F9: 38 */ nes_cpu_instruction_boundary(0xE2F9, 2); g_cpu.C = 1;
label_E2FA:;
    /* $E2FA: ED */ nes_cpu_instruction_boundary(0xE2FA, 4); { uint8_t m=nes_read(0x0312); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_E2FD:;
    /* $E2FD: 8D */ nes_cpu_instruction_boundary(0xE2FD, 4); nes_write(0x0312, g_cpu.A);
label_E300:;
    /* $E300: A9 */ nes_cpu_instruction_boundary(0xE300, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E302:;
    /* $E302: ED */ nes_cpu_instruction_boundary(0xE302, 4); { uint8_t m=nes_read(0x0308); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_E305:;
    /* $E305: 8D */ nes_cpu_instruction_boundary(0xE305, 4); nes_write(0x0308, g_cpu.A);
label_E308:;
    /* $E308: 4C */ nes_cpu_instruction_boundary(0xE308, 3); nes_cpu_instruction_boundary(0xE31A, 2); func_E31A(); return;
label_E30B:; /* SamusMoveVertically_landingNoBall */
    /* $E30B: 20 */ nes_cpu_instruction_boundary(0xE30B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0D; g_cpu.S--; func_CB96();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE30B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E30E:; /* SamusMoveVertically_landingNoBounce */
    /* $E30E: 20 */ nes_cpu_instruction_boundary(0xE30E, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x10; g_cpu.S--; func_D147();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE30E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E311:;
    /* $E311: 8C */ nes_cpu_instruction_boundary(0xE311, 4); nes_write(0x0314, g_cpu.Y);
label_E314:;
    /* $E314: F0 */ nes_cpu_instruction_boundary(0xE314, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E31A; }
label_E316:; /* SamusMoveVertically_endIf_D */
    /* $E316: C6 */ nes_cpu_instruction_boundary(0xE316, 5); { uint16_t a=0x65; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E318:;
    /* $E318: D0 */ nes_cpu_instruction_boundary(0xE318, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xE2E3, 2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_E2E3;
    }
label_E31A:; /* SamusMoveHorizontally */
    /* $E31A: 20 */ nes_cpu_instruction_boundary(0xE31A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1C; g_cpu.S--; func_E3E5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE31A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E31D:;
    /* $E31D: AD */ nes_cpu_instruction_boundary(0xE31D, 4); g_cpu.A = nes_read(0x030E); FLAG_NZ(g_cpu.A);
label_E320:;
    /* $E320: 38 */ nes_cpu_instruction_boundary(0xE320, 2); g_cpu.C = 1;
label_E321:;
    /* $E321: E5 */ nes_cpu_instruction_boundary(0xE321, 3); { uint8_t m=nes_read(0xFD); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_E323:;
    /* $E323: 85 */ nes_cpu_instruction_boundary(0xE323, 3); nes_write(0x51, g_cpu.A);
label_E325:;
    /* $E325: A5 */ nes_cpu_instruction_boundary(0xE325, 3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_E327:;
    /* $E327: 10 */ nes_cpu_instruction_boundary(0xE327, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_E347; }
label_E329:;
    /* $E329: 20 */ nes_cpu_instruction_boundary(0xE329, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2B; g_cpu.S--; func_C3D4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE329, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E32C:;
    /* $E32C: A4 */ nes_cpu_instruction_boundary(0xE32C, 3); g_cpu.Y = nes_read(0x64); FLAG_NZ(g_cpu.Y);
label_E32E:;
    /* $E32E: F0 */ nes_cpu_instruction_boundary(0xE32E, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E333; }
label_E330:;
    /* $E330: 4A */ nes_cpu_instruction_boundary(0xE330, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_E331:;
    /* $E331: F0 */ nes_cpu_instruction_boundary(0xE331, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E364; }
label_E333:;
    /* $E333: 85 */ nes_cpu_instruction_boundary(0xE333, 3); nes_write(0x65, g_cpu.A);
label_E335:;
    /* $E335: 20 */ nes_cpu_instruction_boundary(0xE335, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x37; g_cpu.S--; func_E626();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE335, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E338:;
    /* $E338: 20 */ nes_cpu_instruction_boundary(0xE338, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3A; g_cpu.S--; func_E365();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE338, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E33B:;
    /* $E33B: C6 */ nes_cpu_instruction_boundary(0xE33B, 5); { uint16_t a=0x65; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E33D:;
    /* $E33D: D0 */ nes_cpu_instruction_boundary(0xE33D, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xE335, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_E335;
    }
label_E33F:;
    /* $E33F: A5 */ nes_cpu_instruction_boundary(0xE33F, 3); g_cpu.A = nes_read(0x58); FLAG_NZ(g_cpu.A);
label_E341:;
    /* $E341: F0 */ nes_cpu_instruction_boundary(0xE341, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E364; }
label_E343:;
    /* $E343: A9 */ nes_cpu_instruction_boundary(0xE343, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_E345:;
    /* $E345: D0 */ nes_cpu_instruction_boundary(0xE345, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E362; }
label_E347:;
    /* $E347: F0 */ nes_cpu_instruction_boundary(0xE347, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E364; }
label_E349:;
    /* $E349: A4 */ nes_cpu_instruction_boundary(0xE349, 3); g_cpu.Y = nes_read(0x64); FLAG_NZ(g_cpu.Y);
label_E34B:;
    /* $E34B: F0 */ nes_cpu_instruction_boundary(0xE34B, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E350; }
label_E34D:;
    /* $E34D: 4A */ nes_cpu_instruction_boundary(0xE34D, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_E34E:;
    /* $E34E: F0 */ nes_cpu_instruction_boundary(0xE34E, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E364; }
label_E350:;
    /* $E350: 85 */ nes_cpu_instruction_boundary(0xE350, 3); nes_write(0x65, g_cpu.A);
label_E352:;
    /* $E352: 20 */ nes_cpu_instruction_boundary(0xE352, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x54; g_cpu.S--; func_E668();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE352, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E355:;
    /* $E355: 20 */ nes_cpu_instruction_boundary(0xE355, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x57; g_cpu.S--; func_E365();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE355, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E358:;
    /* $E358: C6 */ nes_cpu_instruction_boundary(0xE358, 5); { uint16_t a=0x65; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E35A:;
    /* $E35A: D0 */ nes_cpu_instruction_boundary(0xE35A, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xE352, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_E352;
    }
label_E35C:;
    /* $E35C: A5 */ nes_cpu_instruction_boundary(0xE35C, 3); g_cpu.A = nes_read(0x58); FLAG_NZ(g_cpu.A);
label_E35E:;
    /* $E35E: F0 */ nes_cpu_instruction_boundary(0xE35E, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E364; }
label_E360:;
    /* $E360: A9 */ nes_cpu_instruction_boundary(0xE360, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E362:;
    /* $E362: 85 */ nes_cpu_instruction_boundary(0xE362, 3); nes_write(0x4E, g_cpu.A);
label_E364:; /* Exit10 */
    /* $E364: 60 */ nes_cpu_instruction_boundary(0xE364, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_FAF4(void) { /* UpdateAllPipeBugHoles_loop */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_FAF4");
#endif
label_FAF4:; /* UpdateAllPipeBugHoles_loop */
    /* $FAF4: 20 */ nes_cpu_instruction_boundary(0xFAF4, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF6; g_cpu.S--; func_FAFF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFAF4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FAF7:;
    /* $FAF7: A5 */ nes_cpu_instruction_boundary(0xFAF7, 3); g_cpu.A = nes_read(0x4B); FLAG_NZ(g_cpu.A);
label_FAF9:;
    /* $FAF9: 38 */ nes_cpu_instruction_boundary(0xFAF9, 2); g_cpu.C = 1;
label_FAFA:;
    /* $FAFA: E9 */ nes_cpu_instruction_boundary(0xFAFA, 2); { uint8_t m=0x08; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_FAFC:;
    /* $FAFC: A8 */ nes_cpu_instruction_boundary(0xFAFC, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_FAFD:;
    /* $FAFD: D0 */ nes_cpu_instruction_boundary(0xFAFD, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xFAF4, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_FAF4;
    }
label_FAFF:; /* UpdatePipeBugHole */
    /* $FAFF: 84 */ nes_cpu_instruction_boundary(0xFAFF, 3); nes_write(0x4B, g_cpu.Y);
label_FB01:;
    /* $FB01: BE */ nes_cpu_instruction_boundary(0xFB01, 4); g_cpu.X = nes_read((0x0728 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_FB04:;
    /* $FB04: E8 */ nes_cpu_instruction_boundary(0xFB04, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_FB05:;
    /* $FB05: F0 */ nes_cpu_instruction_boundary(0xFB05, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xFAB3); return; }
label_FB07:;
    /* $FB07: BE */ nes_cpu_instruction_boundary(0xFB07, 4); g_cpu.X = nes_read((0x0729 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_FB0A:;
    /* $FB0A: BD */ nes_cpu_instruction_boundary(0xFB0A, 4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FB0D:;
    /* $FB0D: F0 */ nes_cpu_instruction_boundary(0xFB0D, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_FB16; }
label_FB0F:;
    /* $FB0F: BD */ nes_cpu_instruction_boundary(0xFB0F, 4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FB12:;
    /* $FB12: 29 */ nes_cpu_instruction_boundary(0xFB12, 2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_FB14:;
    /* $FB14: D0 */ nes_cpu_instruction_boundary(0xFB14, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_FB87; }
label_FB16:; /* UpdatePipeBugHole_endIf_A */
    /* $FB16: 9D */ nes_cpu_instruction_boundary(0xFB16, 5); nes_write((0x0404 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_FB19:;
    /* $FB19: A9 */ nes_cpu_instruction_boundary(0xFB19, 2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_FB1B:;
    /* $FB1B: DD */ nes_cpu_instruction_boundary(0xFB1B, 4); { uint8_t m=nes_read((0x6B02 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_FB1E:;
    /* $FB1E: D0 */ nes_cpu_instruction_boundary(0xFB1E, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_FB70; }
label_FB20:;
    /* $FB20: DE */ nes_cpu_instruction_boundary(0xFB20, 7); { uint16_t a=(0x0409 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_FB23:;
    /* $FB23: D0 */ nes_cpu_instruction_boundary(0xFB23, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_FB87; }
label_FB25:;
    /* $FB25: B9 */ nes_cpu_instruction_boundary(0xFB25, 4); g_cpu.A = nes_read((0x0728 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FB28:;
    /* $FB28: 20 */ nes_cpu_instruction_boundary(0xFB28, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFB; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2A; g_cpu.S--; func_EB28();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFB28, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FB2B:;
    /* $FB2B: A4 */ nes_cpu_instruction_boundary(0xFB2B, 3); g_cpu.Y = nes_read(0x4B); FLAG_NZ(g_cpu.Y);
label_FB2D:;
    /* $FB2D: B9 */ nes_cpu_instruction_boundary(0xFB2D, 4); g_cpu.A = nes_read((0x072A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FB30:;
    /* $FB30: 9D */ nes_cpu_instruction_boundary(0xFB30, 5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_FB33:;
    /* $FB33: B9 */ nes_cpu_instruction_boundary(0xFB33, 4); g_cpu.A = nes_read((0x072B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FB36:;
    /* $FB36: 9D */ nes_cpu_instruction_boundary(0xFB36, 5); nes_write((0x0401 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_FB39:;
    /* $FB39: B9 */ nes_cpu_instruction_boundary(0xFB39, 4); g_cpu.A = nes_read((0x072C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FB3C:;
    /* $FB3C: 9D */ nes_cpu_instruction_boundary(0xFB3C, 5); nes_write((0x6AFB + g_cpu.X) & 0xFFFF, g_cpu.A);
label_FB3F:;
    /* $FB3F: A9 */ nes_cpu_instruction_boundary(0xFB3F, 2); g_cpu.A = 0x18; FLAG_NZ(g_cpu.A);
label_FB41:;
    /* $FB41: 9D */ nes_cpu_instruction_boundary(0xFB41, 5); nes_write((0x6AF6 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_FB44:;
    /* $FB44: A9 */ nes_cpu_instruction_boundary(0xFB44, 2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_FB46:;
    /* $FB46: 9D */ nes_cpu_instruction_boundary(0xFB46, 5); nes_write((0x6AF5 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_FB49:;
    /* $FB49: A0 */ nes_cpu_instruction_boundary(0xFB49, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_FB4B:;
    /* $FB4B: 20 */ nes_cpu_instruction_boundary(0xFB4B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFB; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x4D; g_cpu.S--; func_F186();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFB4B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FB4E:;
    /* $FB4E: 20 */ nes_cpu_instruction_boundary(0xFB4E, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFB; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x50; g_cpu.S--; func_F152();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFB4E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FB51:;
    /* $FB51: 20 */ nes_cpu_instruction_boundary(0xFB51, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFB; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x53; g_cpu.S--; func_F1BF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFB51, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FB54:;
    /* $FB54: 20 */ nes_cpu_instruction_boundary(0xFB54, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFB; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x56; g_cpu.S--; func_F1FA();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFB54, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FB57:;
    /* $FB57: 90 */ nes_cpu_instruction_boundary(0xFB57, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_FB87; }
label_FB59:;
    /* $FB59: A9 */ nes_cpu_instruction_boundary(0xFB59, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_FB5B:;
    /* $FB5B: 9D */ nes_cpu_instruction_boundary(0xFB5B, 5); nes_write((0x0409 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_FB5E:;
    /* $FB5E: 9D */ nes_cpu_instruction_boundary(0xFB5E, 5); nes_write((0x6AF4 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_FB61:;
    /* $FB61: 25 */ nes_cpu_instruction_boundary(0xFB61, 3); g_cpu.A &= nes_read(0x49); FLAG_NZ(g_cpu.A);
label_FB63:;
    /* $FB63: 0A */ nes_cpu_instruction_boundary(0xFB63, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_FB64:;
    /* $FB64: 9D */ nes_cpu_instruction_boundary(0xFB64, 5); nes_write((0x0405 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_FB67:;
    /* $FB67: BC */ nes_cpu_instruction_boundary(0xFB67, 4); g_cpu.Y = nes_read((0x6B02 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_FB6A:;
    /* $FB6A: 20 */ nes_cpu_instruction_boundary(0xFB6A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFB; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6C; g_cpu.S--; func_FB7B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFB6A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FB6D:;
    /* $FB6D: 4C */ nes_cpu_instruction_boundary(0xFB6D, 3); nes_cpu_instruction_boundary(0xF85A, 2); func_F85A(); return;
label_FB70:; /* UpdatePipeBugHole_clearEnemySlot */
    /* $FB70: 9D */ nes_cpu_instruction_boundary(0xFB70, 5); nes_write((0x6B02 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_FB73:;
    /* $FB73: A9 */ nes_cpu_instruction_boundary(0xFB73, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_FB75:;
    /* $FB75: 9D */ nes_cpu_instruction_boundary(0xFB75, 5); nes_write((0x0409 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_FB78:;
    /* $FB78: 4C */ nes_cpu_instruction_boundary(0xFB78, 3); nes_cpu_instruction_boundary(0xFA18, 2); func_FA18(); return;
label_FB87:; /* Exit13 */
    /* $FB87: 60 */ nes_cpu_instruction_boundary(0xFB87, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C531_body(int _entry) { /* InitBank0 */
    switch (_entry) {
        case 1: goto label_C54A;
        case 2: goto label_C543;
    }
label_C531:; /* InitBank0 */
    /* $C531: A0 */ nes_cpu_instruction_boundary(0xC531, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_C533:;
    /* $C533: 84 */ nes_cpu_instruction_boundary(0xC533, 3); nes_write(0x31, g_cpu.Y);
label_C535:;
    /* $C535: C8 */ nes_cpu_instruction_boundary(0xC535, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_C536:;
    /* $C536: 84 */ nes_cpu_instruction_boundary(0xC536, 3); nes_write(0x1D, g_cpu.Y);
label_C538:;
    /* $C538: 20 */ nes_cpu_instruction_boundary(0xC538, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3A; g_cpu.S--; func_C45D();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC538, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C53B:;
    /* $C53B: 20 */ nes_cpu_instruction_boundary(0xC53B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3D; g_cpu.S--; if (!nes_dispatch_call(0xA93E, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC53B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C53E:;
    /* $C53E: 20 */ nes_cpu_instruction_boundary(0xC53E, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x40; g_cpu.S--; func_C158();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC53E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C541:;
    /* $C541: A0 */ nes_cpu_instruction_boundary(0xC541, 2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_C543:;
    /* $C543: B9 */ nes_cpu_instruction_boundary(0xC543, 4); g_cpu.A = nes_read((0x98BF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_C546:;
    /* $C546: 99 */ nes_cpu_instruction_boundary(0xC546, 5); nes_write((0x6DFF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_C549:;
    /* $C549: 88 */ nes_cpu_instruction_boundary(0xC549, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_C54A:;
    /* $C54A: D0 */ nes_cpu_instruction_boundary(0xC54A, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xC543, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_C543;
    }
label_C54C:;
    /* $C54C: 20 */ nes_cpu_instruction_boundary(0xC54C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x4E; g_cpu.S--; func_C5D7();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC54C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C54F:;
    /* $C54F: 4C */ nes_cpu_instruction_boundary(0xC54F, 3); nes_cpu_instruction_boundary(0xC487, 2); func_C487(); return;
}

void func_C531(void) { /* InitBank0 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C531");
#endif
    func_C531_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C54A(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C54A");
#endif
    func_C531_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C543(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C543");
#endif
    func_C531_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C552(void) { /* InitBank1 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C552");
#endif
label_C552:; /* InitBank1 */
    /* $C552: A9 */ nes_cpu_instruction_boundary(0xC552, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C554:;
    /* $C554: 85 */ nes_cpu_instruction_boundary(0xC554, 3); nes_write(0x1D, g_cpu.A);
label_C556:;
    /* $C556: 20 */ nes_cpu_instruction_boundary(0xC556, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x58; g_cpu.S--; func_C45D();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC556, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C559:;
    /* $C559: A5 */ nes_cpu_instruction_boundary(0xC559, 3); g_cpu.A = nes_read(0x1E); FLAG_NZ(g_cpu.A);
label_C55B:;
    /* $C55B: C9 */ nes_cpu_instruction_boundary(0xC55B, 2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_C55D:;
    /* $C55D: F0 */ nes_cpu_instruction_boundary(0xC55D, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C56D; }
label_C55F:;
    /* $C55F: A9 */ nes_cpu_instruction_boundary(0xC55F, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C561:;
    /* $C561: 85 */ nes_cpu_instruction_boundary(0xC561, 3); nes_write(0x1E, g_cpu.A);
label_C563:;
    /* $C563: 85 */ nes_cpu_instruction_boundary(0xC563, 3); nes_write(0x74, g_cpu.A);
label_C565:;
    /* $C565: 85 */ nes_cpu_instruction_boundary(0xC565, 3); nes_write(0x31, g_cpu.A);
label_C567:;
    /* $C567: 20 */ nes_cpu_instruction_boundary(0xC567, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x69; g_cpu.S--; func_C1D4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC567, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C56A:;
    /* $C56A: 20 */ nes_cpu_instruction_boundary(0xC56A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6C; g_cpu.S--; func_C578();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC56A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C56D:;
    /* $C56D: A0 */ nes_cpu_instruction_boundary(0xC56D, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_C56F:;
    /* $C56F: 20 */ nes_cpu_instruction_boundary(0xC56F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x71; g_cpu.S--; func_C4EF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC56F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C572:;
    /* $C572: 20 */ nes_cpu_instruction_boundary(0xC572, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x74; g_cpu.S--; func_C604();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC572, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C575:;
    /* $C575: 4C */ nes_cpu_instruction_boundary(0xC575, 3); nes_cpu_instruction_boundary(0xC487, 2); func_C487(); return;
}

void func_C583_body(int _entry) { /* InitBank2 */
    switch (_entry) {
        case 1: goto label_C585;
    }
label_C583:; /* InitBank2 */
    /* $C583: A9 */ nes_cpu_instruction_boundary(0xC583, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C585:;
    /* $C585: 85 */ nes_cpu_instruction_boundary(0xC585, 3); nes_write(0x1D, g_cpu.A);
label_C587:;
    /* $C587: 20 */ nes_cpu_instruction_boundary(0xC587, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x89; g_cpu.S--; func_C45D();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC587, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C58A:;
    /* $C58A: 20 */ nes_cpu_instruction_boundary(0xC58A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; func_C622();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC58A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C58D:;
    /* $C58D: 4C */ nes_cpu_instruction_boundary(0xC58D, 3); nes_cpu_instruction_boundary(0xC487, 2); func_C487(); return;
}

void func_C583(void) { /* InitBank2 */
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

void func_C5B6(void) { /* InitBank4 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C5B6");
#endif
label_C5B6:; /* InitBank4 */
    /* $C5B6: A9 */ nes_cpu_instruction_boundary(0xC5B6, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C5B8:;
    /* $C5B8: 85 */ nes_cpu_instruction_boundary(0xC5B8, 3); nes_write(0x1D, g_cpu.A);
label_C5BA:;
    /* $C5BA: 20 */ nes_cpu_instruction_boundary(0xC5BA, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; func_C45D();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC5BA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C5BD:;
    /* $C5BD: 20 */ nes_cpu_instruction_boundary(0xC5BD, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBF; g_cpu.S--; func_C677();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC5BD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C5C0:;
    /* $C5C0: 4C */ nes_cpu_instruction_boundary(0xC5C0, 3); nes_cpu_instruction_boundary(0xC487, 2); func_C487(); return;
}

void func_C5C3(void) { /* InitBank5 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C5C3");
#endif
label_C5C3:; /* InitBank5 */
    /* $C5C3: A9 */ nes_cpu_instruction_boundary(0xC5C3, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C5C5:;
    /* $C5C5: 85 */ nes_cpu_instruction_boundary(0xC5C5, 3); nes_write(0x1D, g_cpu.A);
label_C5C7:;
    /* $C5C7: 20 */ nes_cpu_instruction_boundary(0xC5C7, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC9; g_cpu.S--; func_C45D();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC5C7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C5CA:;
    /* $C5CA: 20 */ nes_cpu_instruction_boundary(0xC5CA, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCC; g_cpu.S--; func_C69F();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC5CA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C5CD:;
    /* $C5CD: 4C */ nes_cpu_instruction_boundary(0xC5CD, 3); nes_cpu_instruction_boundary(0xC487, 2); func_C487(); return;
}

void func_84C8_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_84C8_b7");
#endif
label_84C8:;
    /* $84C8: 4A */ nes_cpu_instruction_boundary(0x84C8, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_84C9:;
    /* $84C9: 8D */ nes_cpu_instruction_boundary(0x84C9, 4); nes_write(0x8000, g_cpu.A);
label_84CC:;
    /* $84CC: 4A */ nes_cpu_instruction_boundary(0x84CC, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_84CD:;
    /* $84CD: 8D */ nes_cpu_instruction_boundary(0x84CD, 4); nes_write(0x8000, g_cpu.A);
label_84D0:;
    /* $84D0: 4A */ nes_cpu_instruction_boundary(0x84D0, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_84D1:;
    /* $84D1: 8D */ nes_cpu_instruction_boundary(0x84D1, 4); nes_write(0x8000, g_cpu.A);
label_84D4:;
    /* $84D4: 4A */ nes_cpu_instruction_boundary(0x84D4, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_84D5:;
    /* $84D5: 8D */ nes_cpu_instruction_boundary(0x84D5, 4); nes_write(0x8000, g_cpu.A);
label_84D8:;
    /* $84D8: 60 */ nes_cpu_instruction_boundary(0x84D8, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A0A0_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A0A0_b7");
#endif
label_A0A0:;
    /* $A0A0: F0 */ nes_cpu_instruction_boundary(0xA0A0, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A0A7; }
label_A0A2:;
    /* $A0A2: DE */ nes_cpu_instruction_boundary(0xA0A2, 7); { uint16_t a=(0x6AF8 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A0A5:;
    /* $A0A5: D0 */ nes_cpu_instruction_boundary(0xA0A5, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A0BB; }
label_A0A7:;
    /* $A0A7: 9D */ nes_cpu_instruction_boundary(0xA0A7, 5); nes_write((0x6AF8 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0AA:;
    /* $A0AA: BC */ nes_cpu_instruction_boundary(0xA0AA, 4); g_cpu.Y = nes_read((0x6AFA + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_A0AD:;
    /* $A0AD: B1 */ nes_cpu_instruction_boundary(0xA0AD, 5); g_cpu.A = nes_read((nes_read16zp(0x47) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0AF:;
    /* $A0AF: C9 */ nes_cpu_instruction_boundary(0xA0AF, 2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_A0B1:;
    /* $A0B1: F0 */ nes_cpu_instruction_boundary(0xA0B1, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A0BC; }
label_A0B3:;
    /* $A0B3: 9D */ nes_cpu_instruction_boundary(0xA0B3, 5); nes_write((0x6AF7 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0B6:;
    /* $A0B6: C8 */ nes_cpu_instruction_boundary(0xA0B6, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A0B7:;
    /* $A0B7: 98 */ nes_cpu_instruction_boundary(0xA0B7, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A0B8:;
    /* $A0B8: 9D */ nes_cpu_instruction_boundary(0xA0B8, 5); nes_write((0x6AFA + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0BB:;
    /* $A0BB: 60 */ nes_cpu_instruction_boundary(0xA0BB, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A0BC:;
    /* $A0BC: BC */ nes_cpu_instruction_boundary(0xA0BC, 4); g_cpu.Y = nes_read((0x6AF9 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_A0BF:;
    /* $A0BF: B0 */ nes_cpu_instruction_boundary(0xA0BF, 2); if (g_cpu.C) {
    nes_cpu_instruction_boundary(0xA0AD, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A0AD;
    }
label_A0C1:;
    /* $A0C1: A0 */ nes_cpu_instruction_boundary(0xA0C1, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A0C3:;
    /* $A0C3: A5 */ nes_cpu_instruction_boundary(0xA0C3, 3); g_cpu.A = nes_read(0x5B); FLAG_NZ(g_cpu.A);
label_A0C5:;
    /* $A0C5: 48 */ nes_cpu_instruction_boundary(0xA0C5, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A0C6:;
    /* $A0C6: AA */ nes_cpu_instruction_boundary(0xA0C6, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A0C7:;
    /* $A0C7: B9 */ nes_cpu_instruction_boundary(0xA0C7, 4); g_cpu.A = nes_read((0xE1B9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0CA:;
    /* $A0CA: 9D */ nes_cpu_instruction_boundary(0xA0CA, 5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0CD:;
    /* $A0CD: E8 */ nes_cpu_instruction_boundary(0xA0CD, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A0CE:;
    /* $A0CE: C8 */ nes_cpu_instruction_boundary(0xA0CE, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A0CF:;
    /* $A0CF: C0 */ nes_cpu_instruction_boundary(0xA0CF, 2); { int r=g_cpu.Y-0x28; g_cpu.C=(g_cpu.Y>=0x28)?1:0; FLAG_NZ(r&0xFF); }
label_A0D1:;
    /* $A0D1: D0 */ nes_cpu_instruction_boundary(0xA0D1, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xA0C7, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A0C7;
    }
label_A0D3:;
    /* $A0D3: 86 */ nes_cpu_instruction_boundary(0xA0D3, 3); nes_write(0x5B, g_cpu.X);
label_A0D5:;
    /* $A0D5: 68 */ nes_cpu_instruction_boundary(0xA0D5, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A0D6:;
    /* $A0D6: AA */ nes_cpu_instruction_boundary(0xA0D6, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A0D7:;
    /* $A0D7: AD */ nes_cpu_instruction_boundary(0xA0D7, 4); g_cpu.A = nes_read(0x0107); FLAG_NZ(g_cpu.A);
label_A0DA:;
    /* $A0DA: 29 */ nes_cpu_instruction_boundary(0xA0DA, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A0DC:;
    /* $A0DC: 20 */ nes_cpu_instruction_boundary(0xA0DC, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDE; g_cpu.S--; func_E173();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0DC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0DF:;
    /* $A0DF: AD */ nes_cpu_instruction_boundary(0xA0DF, 4); g_cpu.A = nes_read(0x0106); FLAG_NZ(g_cpu.A);
label_A0E2:;
    /* $A0E2: 20 */ nes_cpu_instruction_boundary(0xA0E2, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE4; g_cpu.S--; func_C2BF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0E2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0E5:;
    /* $A0E5: 20 */ nes_cpu_instruction_boundary(0xA0E5, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE7; g_cpu.S--; func_E173();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0E5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0E8:;
    /* $A0E8: AC */ nes_cpu_instruction_boundary(0xA0E8, 4); g_cpu.Y = nes_read(0x010B); FLAG_NZ(g_cpu.Y);
label_A0EB:;
    /* $A0EB: C8 */ nes_cpu_instruction_boundary(0xA0EB, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A0EC:;
    /* $A0EC: D0 */ nes_cpu_instruction_boundary(0xA0EC, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_A11C; }
label_A0EE:;
    /* $A0EE: AC */ nes_cpu_instruction_boundary(0xA0EE, 4); g_cpu.Y = nes_read(0x687A); FLAG_NZ(g_cpu.Y);
label_A0F1:;
    /* $A0F1: F0 */ nes_cpu_instruction_boundary(0xA0F1, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_A10A; }
label_A0F3:;
    /* $A0F3: AD */ nes_cpu_instruction_boundary(0xA0F3, 4); g_cpu.A = nes_read(0x6879); FLAG_NZ(g_cpu.A);
label_A0F6:;
    /* $A0F6: 20 */ nes_cpu_instruction_boundary(0xA0F6, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF8; g_cpu.S--; func_E198();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0F6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0F9:;
    /* $A0F9: A5 */ nes_cpu_instruction_boundary(0xA0F9, 3); g_cpu.A = nes_read(0x02); FLAG_NZ(g_cpu.A);
label_A0FB:;
    /* $A0FB: 20 */ nes_cpu_instruction_boundary(0xA0FB, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFD; g_cpu.S--; func_E173();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0FB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0FE:;
    /* $A0FE: A5 */ nes_cpu_instruction_boundary(0xA0FE, 3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_A100:;
    /* $A100: 20 */ nes_cpu_instruction_boundary(0xA100, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x02; g_cpu.S--; func_E173();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA100, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A103:;
    /* $A103: A5 */ nes_cpu_instruction_boundary(0xA103, 3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_A105:;
    /* $A105: 20 */ nes_cpu_instruction_boundary(0xA105, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x07; g_cpu.S--; func_E173();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA105, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A108:;
    /* $A108: D0 */ nes_cpu_instruction_boundary(0xA108, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A14A; }
label_A10A:;
    /* $A10A: A9 */ nes_cpu_instruction_boundary(0xA10A, 2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_A10C:;
    /* $A10C: E0 */ nes_cpu_instruction_boundary(0xA10C, 2); { int r=g_cpu.X-0xF4; g_cpu.C=(g_cpu.X>=0xF4)?1:0; FLAG_NZ(r&0xFF); }
label_A10E:;
    /* $A10E: B0 */ nes_cpu_instruction_boundary(0xA10E, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A14A; }
label_A110:;
    /* $A110: 9D */ nes_cpu_instruction_boundary(0xA110, 5); nes_write((0x020D + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A113:;
    /* $A113: E0 */ nes_cpu_instruction_boundary(0xA113, 2); { int r=g_cpu.X-0xF0; g_cpu.C=(g_cpu.X>=0xF0)?1:0; FLAG_NZ(r&0xFF); }
label_A115:;
    /* $A115: B0 */ nes_cpu_instruction_boundary(0xA115, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A14A; }
label_A117:;
    /* $A117: 9D */ nes_cpu_instruction_boundary(0xA117, 5); nes_write((0x0211 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A11A:;
    /* $A11A: D0 */ nes_cpu_instruction_boundary(0xA11A, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A14A; }
label_A11C:;
    /* $A11C: AD */ nes_cpu_instruction_boundary(0xA11C, 4); g_cpu.A = nes_read(0x010B); FLAG_NZ(g_cpu.A);
label_A11F:;
    /* $A11F: 20 */ nes_cpu_instruction_boundary(0xA11F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x21; g_cpu.S--; func_C2BF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA11F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A122:;
    /* $A122: 20 */ nes_cpu_instruction_boundary(0xA122, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x24; g_cpu.S--; func_E173();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA122, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A125:;
    /* $A125: AD */ nes_cpu_instruction_boundary(0xA125, 4); g_cpu.A = nes_read(0x010B); FLAG_NZ(g_cpu.A);
label_A128:;
    /* $A128: 29 */ nes_cpu_instruction_boundary(0xA128, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A12A:;
    /* $A12A: 20 */ nes_cpu_instruction_boundary(0xA12A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2C; g_cpu.S--; func_E173();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA12A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A12D:;
    /* $A12D: AD */ nes_cpu_instruction_boundary(0xA12D, 4); g_cpu.A = nes_read(0x010A); FLAG_NZ(g_cpu.A);
label_A130:;
    /* $A130: 20 */ nes_cpu_instruction_boundary(0xA130, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x32; g_cpu.S--; func_C2BF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA130, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A133:;
    /* $A133: 20 */ nes_cpu_instruction_boundary(0xA133, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x35; g_cpu.S--; func_E173();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA133, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A136:;
    /* $A136: A9 */ nes_cpu_instruction_boundary(0xA136, 2); g_cpu.A = 0x58; FLAG_NZ(g_cpu.A);
label_A138:;
    /* $A138: 9D */ nes_cpu_instruction_boundary(0xA138, 5); nes_write((0x0201 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A13B:;
    /* $A13B: FE */ nes_cpu_instruction_boundary(0xA13B, 7); { uint16_t a=(0x0202 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A13E:;
    /* $A13E: E0 */ nes_cpu_instruction_boundary(0xA13E, 2); { int r=g_cpu.X-0xFC; g_cpu.C=(g_cpu.X>=0xFC)?1:0; FLAG_NZ(r&0xFF); }
label_A140:;
    /* $A140: B0 */ nes_cpu_instruction_boundary(0xA140, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A14A; }
label_A142:;
    /* $A142: A9 */ nes_cpu_instruction_boundary(0xA142, 2); g_cpu.A = 0x59; FLAG_NZ(g_cpu.A);
label_A144:;
    /* $A144: 9D */ nes_cpu_instruction_boundary(0xA144, 5); nes_write((0x0205 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A147:;
    /* $A147: FE */ nes_cpu_instruction_boundary(0xA147, 7); { uint16_t a=(0x0206 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A14A:;
    /* $A14A: A6 */ nes_cpu_instruction_boundary(0xA14A, 3); g_cpu.X = nes_read(0x5B); FLAG_NZ(g_cpu.X);
label_A14C:;
    /* $A14C: AD */ nes_cpu_instruction_boundary(0xA14C, 4); g_cpu.A = nes_read(0x6877); FLAG_NZ(g_cpu.A);
label_A14F:;
    /* $A14F: F0 */ nes_cpu_instruction_boundary(0xA14F, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A172; }
label_A151:;
    /* $A151: 85 */ nes_cpu_instruction_boundary(0xA151, 3); nes_write(0x03, g_cpu.A);
label_A153:;
    /* $A153: A9 */ nes_cpu_instruction_boundary(0xA153, 2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_A155:;
    /* $A155: 85 */ nes_cpu_instruction_boundary(0xA155, 3); nes_write(0x00, g_cpu.A);
label_A157:;
    /* $A157: A0 */ nes_cpu_instruction_boundary(0xA157, 2); g_cpu.Y = 0x6F; FLAG_NZ(g_cpu.Y);
label_A159:;
    /* $A159: AD */ nes_cpu_instruction_boundary(0xA159, 4); g_cpu.A = nes_read(0x0107); FLAG_NZ(g_cpu.A);
label_A15C:;
    /* $A15C: 20 */ nes_cpu_instruction_boundary(0xA15C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x5E; g_cpu.S--; func_C2BF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA15C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A15F:;
    /* $A15F: 85 */ nes_cpu_instruction_boundary(0xA15F, 3); nes_write(0x01, g_cpu.A);
label_A161:;
    /* $A161: D0 */ nes_cpu_instruction_boundary(0xA161, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A164; }
label_A163:;
    /* $A163: 88 */ nes_cpu_instruction_boundary(0xA163, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A164:;
    /* $A164: 20 */ nes_cpu_instruction_boundary(0xA164, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x66; g_cpu.S--; func_E17B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA164, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A167:;
    /* $A167: C6 */ nes_cpu_instruction_boundary(0xA167, 5); { uint16_t a=0x01; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A169:;
    /* $A169: D0 */ nes_cpu_instruction_boundary(0xA169, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A16C; }
label_A16B:;
    /* $A16B: 88 */ nes_cpu_instruction_boundary(0xA16B, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A16C:;
    /* $A16C: C6 */ nes_cpu_instruction_boundary(0xA16C, 5); { uint16_t a=0x03; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A16E:;
    /* $A16E: D0 */ nes_cpu_instruction_boundary(0xA16E, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xA164, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A164;
    }
label_A170:;
    /* $A170: 86 */ nes_cpu_instruction_boundary(0xA170, 3); nes_write(0x5B, g_cpu.X);
label_A172:;
    /* $A172: 60 */ nes_cpu_instruction_boundary(0xA172, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BFB9_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BFB9_b7");
#endif
label_BFB9:;
    /* $BFB9: 20 */ nes_cpu_instruction_boundary(0xBFB9, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBF; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBB; g_cpu.S--; if (!nes_dispatch_call(0x02AD, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBFB9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BFBC:;
    /* $BFBC: 20 */ nes_cpu_instruction_boundary(0xBFBC, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBF; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBE; g_cpu.S--; func_FB10();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBFBC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BFBF:;
    /* $BFBF: AD */ nes_cpu_instruction_boundary(0xBFBF, 4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_BFC2:;
    /* $BFC2: 10 */ nes_cpu_instruction_boundary(0xBFC2, 2); if (!g_cpu.N) {
    nes_cpu_instruction_boundary(0xBFBF, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BFBF;
    }
label_BFC4:;
    /* $BFC4: 09 */ nes_cpu_instruction_boundary(0xBFC4, 2); g_cpu.A |= 0xFF; FLAG_NZ(g_cpu.A);
label_BFC6:;
    /* $BFC6: 8D */ nes_cpu_instruction_boundary(0xBFC6, 4); nes_write(0x8000, g_cpu.A);
label_BFC9:;
    /* $BFC9: 8D */ nes_cpu_instruction_boundary(0xBFC9, 4); nes_write(0xA000, g_cpu.A);
label_BFCC:;
    /* $BFCC: 8D */ nes_cpu_instruction_boundary(0xBFCC, 4); nes_write(0xC000, g_cpu.A);
label_BFCF:;
    /* $BFCF: 8D */ nes_cpu_instruction_boundary(0xBFCF, 4); nes_write(0xE000, g_cpu.A);
label_BFD2:;
    /* $BFD2: 4C */ nes_cpu_instruction_boundary(0xBFD2, 3); nes_cpu_instruction_boundary(0xC01A, 2); func_C01A(); return;
}

void func_9998_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9998_b7");
#endif
label_9998:;
    /* $9998: D0 */ nes_cpu_instruction_boundary(0x9998, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_999E; }
label_999A:;
    /* $999A: E6 */ nes_cpu_instruction_boundary(0x999A, 5); { uint16_t a=0x7D; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_999C:;
    /* $999C: D0 */ nes_cpu_instruction_boundary(0x999C, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_99A3; }
label_999E:;
    /* $999E: 20 */ nes_cpu_instruction_boundary(0x999E, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA0; g_cpu.S--; func_F1F4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x999E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_99A1:;
    /* $99A1: 10 */ nes_cpu_instruction_boundary(0x99A1, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0x9983); return; }
label_99A3:;
    /* $99A3: AD */ nes_cpu_instruction_boundary(0x99A3, 4); g_cpu.A = nes_read(0x0320); FLAG_NZ(g_cpu.A);
label_99A6:;
    /* $99A6: F0 */ nes_cpu_instruction_boundary(0x99A6, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_99B9; }
label_99A8:;
    /* $99A8: A0 */ nes_cpu_instruction_boundary(0x99A8, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_99AA:;
    /* $99AA: A2 */ nes_cpu_instruction_boundary(0x99AA, 2); g_cpu.X = 0x20; FLAG_NZ(g_cpu.X);
label_99AC:;
    /* $99AC: 20 */ nes_cpu_instruction_boundary(0x99AC, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAE; g_cpu.S--; func_DC82();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x99AC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_99AF:;
    /* $99AF: B0 */ nes_cpu_instruction_boundary(0x99AF, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_99B9; }
label_99B1:;
    /* $99B1: 20 */ nes_cpu_instruction_boundary(0x99B1, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; func_D9BA();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x99B1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_99B4:;
    /* $99B4: D0 */ nes_cpu_instruction_boundary(0x99B4, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_99B9; }
label_99B6:;
    /* $99B6: EE */ nes_cpu_instruction_boundary(0x99B6, 6); { uint16_t a=0x0307; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_99B9:;
    /* $99B9: 60 */ nes_cpu_instruction_boundary(0x99B9, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A9C4_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9C4_b7");
#endif
label_A9C4:;
    /* $A9C4: BD */ nes_cpu_instruction_boundary(0xA9C4, 4); g_cpu.A = nes_read((0xC095 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9C7:;
    /* $A9C7: 98 */ nes_cpu_instruction_boundary(0xA9C7, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A9C8:;
    /* $A9C8: B0 */ nes_cpu_instruction_boundary(0xA9C8, 2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_AA03; }
label_A9CA:;
    /* $A9CA: A2 */ nes_cpu_instruction_boundary(0xA9CA, 2); g_cpu.X = 0xC0; FLAG_NZ(g_cpu.X);
label_A9CC:;
    /* $A9CC: BD */ nes_cpu_instruction_boundary(0xA9CC, 4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9CF:;
    /* $A9CF: F0 */ nes_cpu_instruction_boundary(0xA9CF, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9DB; }
label_A9D1:;
    /* $A9D1: 20 */ nes_cpu_instruction_boundary(0xA9D1, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD3; g_cpu.S--; func_F1F4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA9D1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A9D4:;
    /* $A9D4: D0 */ nes_cpu_instruction_boundary(0xA9D4, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xA9CC, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A9CC;
    }
label_A9D6:;
    /* $A9D6: BD */ nes_cpu_instruction_boundary(0xA9D6, 4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9D9:;
    /* $A9D9: D0 */ nes_cpu_instruction_boundary(0xA9D9, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA03; }
label_A9DB:;
    /* $A9DB: FE */ nes_cpu_instruction_boundary(0xA9DB, 7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9DE:;
    /* $A9DE: A5 */ nes_cpu_instruction_boundary(0xA9DE, 3); g_cpu.A = nes_read(0x04); FLAG_NZ(g_cpu.A);
label_A9E0:;
    /* $A9E0: 29 */ nes_cpu_instruction_boundary(0xA9E0, 2); g_cpu.A &= 0xDE; FLAG_NZ(g_cpu.A);
label_A9E2:;
    /* $A9E2: 9D */ nes_cpu_instruction_boundary(0xA9E2, 5); nes_write((0x0508 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A9E5:;
    /* $A9E5: A5 */ nes_cpu_instruction_boundary(0xA9E5, 3); g_cpu.A = nes_read(0x05); FLAG_NZ(g_cpu.A);
label_A9E7:;
    /* $A9E7: 9D */ nes_cpu_instruction_boundary(0xA9E7, 5); nes_write((0x0509 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A9EA:;
    /* $A9EA: A5 */ nes_cpu_instruction_boundary(0xA9EA, 3); g_cpu.A = nes_read(0x74); FLAG_NZ(g_cpu.A);
label_A9EC:;
    /* $A9EC: C9 */ nes_cpu_instruction_boundary(0xA9EC, 2); { int r=g_cpu.A-0x11; g_cpu.C=(g_cpu.A>=0x11)?1:0; FLAG_NZ(r&0xFF); }
label_A9EE:;
    /* $A9EE: D0 */ nes_cpu_instruction_boundary(0xA9EE, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9F8; }
label_A9F0:;
    /* $A9F0: C0 */ nes_cpu_instruction_boundary(0xA9F0, 2); { int r=g_cpu.Y-0x76; g_cpu.C=(g_cpu.Y>=0x76)?1:0; FLAG_NZ(r&0xFF); }
label_A9F2:;
    /* $A9F2: D0 */ nes_cpu_instruction_boundary(0xA9F2, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9F8; }
label_A9F4:;
    /* $A9F4: A9 */ nes_cpu_instruction_boundary(0xA9F4, 2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_A9F6:;
    /* $A9F6: D0 */ nes_cpu_instruction_boundary(0xA9F6, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9FF; }
label_A9F8:;
    /* $A9F8: 98 */ nes_cpu_instruction_boundary(0xA9F8, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A9F9:;
    /* $A9F9: 18 */ nes_cpu_instruction_boundary(0xA9F9, 2); g_cpu.C = 0;
label_A9FA:;
    /* $A9FA: 69 */ nes_cpu_instruction_boundary(0xA9FA, 2); { uint16_t r = g_cpu.A + 0x10 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x10); g_cpu.A=r&0xFF; }
label_A9FC:;
    /* $A9FC: 29 */ nes_cpu_instruction_boundary(0xA9FC, 2); g_cpu.A &= 0x3C; FLAG_NZ(g_cpu.A);
label_A9FE:;
    /* $A9FE: 4A */ nes_cpu_instruction_boundary(0xA9FE, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A9FF:;
    /* $A9FF: 4A */ nes_cpu_instruction_boundary(0xA9FF, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AA00:;
    /* $AA00: 9D */ nes_cpu_instruction_boundary(0xAA00, 5); nes_write((0x050A + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AA03:;
    /* $AA03: 18 */ nes_cpu_instruction_boundary(0xAA03, 2); g_cpu.C = 0;
label_AA04:;
    /* $AA04: 60 */ nes_cpu_instruction_boundary(0xAA04, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

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
    /* $8500: E0 */ nes_cpu_instruction_boundary(0x8500, 2); { int r=g_cpu.X-0x4A; g_cpu.C=(g_cpu.X>=0x4A)?1:0; FLAG_NZ(r&0xFF); }
label_8502:;
    /* $8502: 8D */ nes_cpu_instruction_boundary(0x8502, 4); nes_write(0xE000, g_cpu.A);
label_8505:;
    /* $8505: 4A */ nes_cpu_instruction_boundary(0x8505, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8506:;
    /* $8506: 8D */ nes_cpu_instruction_boundary(0x8506, 4); nes_write(0xE000, g_cpu.A);
label_8509:;
    /* $8509: 4A */ nes_cpu_instruction_boundary(0x8509, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_850A:;
    /* $850A: 8D */ nes_cpu_instruction_boundary(0x850A, 4); nes_write(0xE000, g_cpu.A);
label_850D:;
    /* $850D: A5 */ nes_cpu_instruction_boundary(0x850D, 3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_850F:;
    /* $850F: 60 */ nes_cpu_instruction_boundary(0x850F, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

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
    /* $A90F: A5 */ nes_cpu_instruction_boundary(0xA90F, 3); g_cpu.A = nes_read(0x02); FLAG_NZ(g_cpu.A);
label_A911:;
    /* $A911: 10 */ nes_cpu_instruction_boundary(0xA911, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A922; }
label_A913:;
    /* $A913: 20 */ nes_cpu_instruction_boundary(0xA913, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x15; g_cpu.S--; func_E95F();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA913, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A916:;
    /* $A916: B0 */ nes_cpu_instruction_boundary(0xA916, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A91C; }
label_A918:;
    /* $A918: E0 */ nes_cpu_instruction_boundary(0xA918, 2); { int r=g_cpu.X-0xF0; g_cpu.C=(g_cpu.X>=0xF0)?1:0; FLAG_NZ(r&0xFF); }
label_A91A:;
    /* $A91A: 90 */ nes_cpu_instruction_boundary(0xA91A, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A93D; }
label_A91C:;
    /* $A91C: 8A */ nes_cpu_instruction_boundary(0xA91C, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A91D:;
    /* $A91D: 69 */ nes_cpu_instruction_boundary(0xA91D, 2); { uint16_t r = g_cpu.A + 0x0F + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0F); g_cpu.A=r&0xFF; }
label_A91F:;
    /* $A91F: 4C */ nes_cpu_instruction_boundary(0xA91F, 3); nes_cpu_instruction_boundary(0xE934, 2); func_E934(); return;
label_A922:;
    /* $A922: 20 */ nes_cpu_instruction_boundary(0xA922, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x24; g_cpu.S--; func_E95F();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA922, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A925:;
    /* $A925: A5 */ nes_cpu_instruction_boundary(0xA925, 3); g_cpu.A = nes_read(0x08); FLAG_NZ(g_cpu.A);
label_A927:;
    /* $A927: 38 */ nes_cpu_instruction_boundary(0xA927, 2); g_cpu.C = 1;
label_A928:;
    /* $A928: E5 */ nes_cpu_instruction_boundary(0xA928, 3); { uint8_t m=nes_read(0x02); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A92A:;
    /* $A92A: AA */ nes_cpu_instruction_boundary(0xA92A, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A92B:;
    /* $A92B: 29 */ nes_cpu_instruction_boundary(0xA92B, 2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_A92D:;
    /* $A92D: 85 */ nes_cpu_instruction_boundary(0xA92D, 3); nes_write(0x00, g_cpu.A);
label_A92F:;
    /* $A92F: B0 */ nes_cpu_instruction_boundary(0xA92F, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A93D; }
label_A931:;
    /* $A931: 8A */ nes_cpu_instruction_boundary(0xA931, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A932:;
    /* $A932: E9 */ nes_cpu_instruction_boundary(0xA932, 2); { uint8_t m=0x0F; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A934:;
    /* $A934: AA */ nes_cpu_instruction_boundary(0xA934, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A935:;
    /* $A935: A5 */ nes_cpu_instruction_boundary(0xA935, 3); g_cpu.A = nes_read(0x49); FLAG_NZ(g_cpu.A);
label_A937:;
    /* $A937: 29 */ nes_cpu_instruction_boundary(0xA937, 2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_A939:;
    /* $A939: D0 */ nes_cpu_instruction_boundary(0xA939, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A93D; }
label_A93B:;
    /* $A93B: E6 */ nes_cpu_instruction_boundary(0xA93B, 5); { uint16_t a=0x0B; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A93D:;
    /* $A93D: 86 */ nes_cpu_instruction_boundary(0xA93D, 3); nes_write(0x02, g_cpu.X);
label_A93F:;
    /* $A93F: A2 */ nes_cpu_instruction_boundary(0xA93F, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A941:;
    /* $A941: A5 */ nes_cpu_instruction_boundary(0xA941, 3); g_cpu.A = nes_read(0x03); FLAG_NZ(g_cpu.A);
label_A943:;
    /* $A943: 30 */ nes_cpu_instruction_boundary(0xA943, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_A946; }
label_A945:;
    /* $A945: CA */ nes_cpu_instruction_boundary(0xA945, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A946:;
    /* $A946: A5 */ nes_cpu_instruction_boundary(0xA946, 3); g_cpu.A = nes_read(0x09); FLAG_NZ(g_cpu.A);
label_A948:;
    /* $A948: 38 */ nes_cpu_instruction_boundary(0xA948, 2); g_cpu.C = 1;
label_A949:;
    /* $A949: E5 */ nes_cpu_instruction_boundary(0xA949, 3); { uint8_t m=nes_read(0x03); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A94B:;
    /* $A94B: 85 */ nes_cpu_instruction_boundary(0xA94B, 3); nes_write(0x03, g_cpu.A);
label_A94D:;
    /* $A94D: 29 */ nes_cpu_instruction_boundary(0xA94D, 2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_A94F:;
    /* $A94F: 85 */ nes_cpu_instruction_boundary(0xA94F, 3); nes_write(0x01, g_cpu.A);
label_A951:;
    /* $A951: 8A */ nes_cpu_instruction_boundary(0xA951, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A952:;
    /* $A952: 69 */ nes_cpu_instruction_boundary(0xA952, 2); { uint16_t r = g_cpu.A + 0x00 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x00); g_cpu.A=r&0xFF; }
label_A954:;
    /* $A954: F0 */ nes_cpu_instruction_boundary(0xA954, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A95E; }
label_A956:;
    /* $A956: A5 */ nes_cpu_instruction_boundary(0xA956, 3); g_cpu.A = nes_read(0x49); FLAG_NZ(g_cpu.A);
label_A958:;
    /* $A958: 29 */ nes_cpu_instruction_boundary(0xA958, 2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_A95A:;
    /* $A95A: F0 */ nes_cpu_instruction_boundary(0xA95A, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A95E; }
label_A95C:;
    /* $A95C: E6 */ nes_cpu_instruction_boundary(0xA95C, 5); { uint16_t a=0x0B; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A95E:;
    /* $A95E: 60 */ nes_cpu_instruction_boundary(0xA95E, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

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
    /* $9900: 20 */ nes_cpu_instruction_boundary(0x9900, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x02; g_cpu.S--; func_D92C();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9900, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9903:;
    /* $9903: 20 */ nes_cpu_instruction_boundary(0x9903, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x05; g_cpu.S--; func_C447();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9903, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9906:;
    /* $9906: 20 */ nes_cpu_instruction_boundary(0x9906, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x08; g_cpu.S--; func_C8B0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9906, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9909:;
    /* $9909: 20 */ nes_cpu_instruction_boundary(0x9909, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0B; g_cpu.S--; func_C8BB();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9909, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_990C:;
    /* $990C: A2 */ nes_cpu_instruction_boundary(0x990C, 2); g_cpu.X = 0x20; FLAG_NZ(g_cpu.X);
label_990E:;
    /* $990E: 86 */ nes_cpu_instruction_boundary(0x990E, 3); nes_write(0x4B, g_cpu.X);
label_9910:;
    /* $9910: A9 */ nes_cpu_instruction_boundary(0x9910, 2); g_cpu.A = 0x6B; FLAG_NZ(g_cpu.A);
label_9912:;
    /* $9912: 8D */ nes_cpu_instruction_boundary(0x9912, 4); nes_write(0x0305, g_cpu.A);
label_9915:;
    /* $9915: A9 */ nes_cpu_instruction_boundary(0x9915, 2); g_cpu.A = 0x5F; FLAG_NZ(g_cpu.A);
label_9917:;
    /* $9917: 8D */ nes_cpu_instruction_boundary(0x9917, 4); nes_write(0x0306, g_cpu.A);
label_991A:;
    /* $991A: A9 */ nes_cpu_instruction_boundary(0x991A, 2); g_cpu.A = 0x7A; FLAG_NZ(g_cpu.A);
label_991C:;
    /* $991C: 9D */ nes_cpu_instruction_boundary(0x991C, 5); nes_write((0x0305 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_991F:;
    /* $991F: A9 */ nes_cpu_instruction_boundary(0x991F, 2); g_cpu.A = 0x6E; FLAG_NZ(g_cpu.A);
label_9921:;
    /* $9921: 9D */ nes_cpu_instruction_boundary(0x9921, 5); nes_write((0x0306 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9924:;
    /* $9924: FE */ nes_cpu_instruction_boundary(0x9924, 7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9927:;
    /* $9927: A9 */ nes_cpu_instruction_boundary(0x9927, 2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_9929:;
    /* $9929: 85 */ nes_cpu_instruction_boundary(0x9929, 3); nes_write(0x2A, g_cpu.A);
label_992B:;
    /* $992B: 60 */ nes_cpu_instruction_boundary(0x992B, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

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
    /* $A8B9: A5 */ nes_cpu_instruction_boundary(0xA8B9, 3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_A8BB:;
    /* $A8BB: 4C */ nes_cpu_instruction_boundary(0xA8BB, 3); nes_cpu_instruction_boundary(0xE7DE, 2); func_E7DE(); return;
}

void func_99C5_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99C5_b7");
#endif
label_99C5:;
    /* $99C5: F0 */ nes_cpu_instruction_boundary(0x99C5, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_99D3; }
label_99C7:;
    /* $99C7: AD */ nes_cpu_instruction_boundary(0x99C7, 4); g_cpu.A = nes_read(0x030A); FLAG_NZ(g_cpu.A);
label_99CA:;
    /* $99CA: 29 */ nes_cpu_instruction_boundary(0x99CA, 2); g_cpu.A &= 0x38; FLAG_NZ(g_cpu.A);
label_99CC:;
    /* $99CC: 05 */ nes_cpu_instruction_boundary(0x99CC, 3); g_cpu.A |= nes_read(0x10); FLAG_NZ(g_cpu.A);
label_99CE:;
    /* $99CE: 09 */ nes_cpu_instruction_boundary(0x99CE, 2); g_cpu.A |= 0x40; FLAG_NZ(g_cpu.A);
label_99D0:;
    /* $99D0: 8D */ nes_cpu_instruction_boundary(0x99D0, 4); nes_write(0x030A, g_cpu.A);
label_99D3:;
    /* $99D3: 60 */ nes_cpu_instruction_boundary(0x99D3, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

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
    /* $A900: 38 */ nes_cpu_instruction_boundary(0xA900, 2); g_cpu.C = 1;
label_A901:;
    /* $A901: FD */ nes_cpu_instruction_boundary(0xA901, 4); { uint8_t m=nes_read((0x6AF6 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A904:;
    /* $A904: 85 */ nes_cpu_instruction_boundary(0xA904, 3); nes_write(0x03, g_cpu.A);
label_A906:;
    /* $A906: 20 */ nes_cpu_instruction_boundary(0xA906, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x08; g_cpu.S--; func_E792();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA906, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A909:;
    /* $A909: BC */ nes_cpu_instruction_boundary(0xA909, 4); g_cpu.Y = nes_read((0x6AF5 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_A90C:;
    /* $A90C: 4C */ nes_cpu_instruction_boundary(0xA90C, 3); nes_cpu_instruction_boundary(0xE89B, 2); func_E89B(); return;
}

void func_8501_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8501_b7");
#endif
label_8501:;
    /* $8501: 4A */ nes_cpu_instruction_boundary(0x8501, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8502:;
    /* $8502: 8D */ nes_cpu_instruction_boundary(0x8502, 4); nes_write(0xE000, g_cpu.A);
label_8505:;
    /* $8505: 4A */ nes_cpu_instruction_boundary(0x8505, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8506:;
    /* $8506: 8D */ nes_cpu_instruction_boundary(0x8506, 4); nes_write(0xE000, g_cpu.A);
label_8509:;
    /* $8509: 4A */ nes_cpu_instruction_boundary(0x8509, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_850A:;
    /* $850A: 8D */ nes_cpu_instruction_boundary(0x850A, 4); nes_write(0xE000, g_cpu.A);
label_850D:;
    /* $850D: A5 */ nes_cpu_instruction_boundary(0x850D, 3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_850F:;
    /* $850F: 60 */ nes_cpu_instruction_boundary(0x850F, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

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
    /* $AB20: 20 */ nes_cpu_instruction_boundary(0xAB20, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xAB; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x22; g_cpu.S--; func_EB4D();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAB20, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AB23:;
    /* $AB23: 48 */ nes_cpu_instruction_boundary(0xAB23, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AB24:;
    /* $AB24: 68 */ nes_cpu_instruction_boundary(0xAB24, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_AB25:;
    /* $AB25: A9 */ nes_cpu_instruction_boundary(0xAB25, 2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_AB27:;
    /* $AB27: 60 */ nes_cpu_instruction_boundary(0xAB27, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A0C7_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A0C7_b7");
#endif
label_A0C7:;
    /* $A0C7: B9 */ nes_cpu_instruction_boundary(0xA0C7, 4); g_cpu.A = nes_read((0xE1B9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0CA:;
    /* $A0CA: 9D */ nes_cpu_instruction_boundary(0xA0CA, 5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0CD:;
    /* $A0CD: E8 */ nes_cpu_instruction_boundary(0xA0CD, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A0CE:;
    /* $A0CE: C8 */ nes_cpu_instruction_boundary(0xA0CE, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A0CF:;
    /* $A0CF: C0 */ nes_cpu_instruction_boundary(0xA0CF, 2); { int r=g_cpu.Y-0x28; g_cpu.C=(g_cpu.Y>=0x28)?1:0; FLAG_NZ(r&0xFF); }
label_A0D1:;
    /* $A0D1: D0 */ nes_cpu_instruction_boundary(0xA0D1, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xA0C7, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A0C7;
    }
label_A0D3:;
    /* $A0D3: 86 */ nes_cpu_instruction_boundary(0xA0D3, 3); nes_write(0x5B, g_cpu.X);
label_A0D5:;
    /* $A0D5: 68 */ nes_cpu_instruction_boundary(0xA0D5, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A0D6:;
    /* $A0D6: AA */ nes_cpu_instruction_boundary(0xA0D6, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A0D7:;
    /* $A0D7: AD */ nes_cpu_instruction_boundary(0xA0D7, 4); g_cpu.A = nes_read(0x0107); FLAG_NZ(g_cpu.A);
label_A0DA:;
    /* $A0DA: 29 */ nes_cpu_instruction_boundary(0xA0DA, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A0DC:;
    /* $A0DC: 20 */ nes_cpu_instruction_boundary(0xA0DC, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDE; g_cpu.S--; func_E173();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0DC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0DF:;
    /* $A0DF: AD */ nes_cpu_instruction_boundary(0xA0DF, 4); g_cpu.A = nes_read(0x0106); FLAG_NZ(g_cpu.A);
label_A0E2:;
    /* $A0E2: 20 */ nes_cpu_instruction_boundary(0xA0E2, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE4; g_cpu.S--; func_C2BF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0E2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0E5:;
    /* $A0E5: 20 */ nes_cpu_instruction_boundary(0xA0E5, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE7; g_cpu.S--; func_E173();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0E5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0E8:;
    /* $A0E8: AC */ nes_cpu_instruction_boundary(0xA0E8, 4); g_cpu.Y = nes_read(0x010B); FLAG_NZ(g_cpu.Y);
label_A0EB:;
    /* $A0EB: C8 */ nes_cpu_instruction_boundary(0xA0EB, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A0EC:;
    /* $A0EC: D0 */ nes_cpu_instruction_boundary(0xA0EC, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_A11C; }
label_A0EE:;
    /* $A0EE: AC */ nes_cpu_instruction_boundary(0xA0EE, 4); g_cpu.Y = nes_read(0x687A); FLAG_NZ(g_cpu.Y);
label_A0F1:;
    /* $A0F1: F0 */ nes_cpu_instruction_boundary(0xA0F1, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_A10A; }
label_A0F3:;
    /* $A0F3: AD */ nes_cpu_instruction_boundary(0xA0F3, 4); g_cpu.A = nes_read(0x6879); FLAG_NZ(g_cpu.A);
label_A0F6:;
    /* $A0F6: 20 */ nes_cpu_instruction_boundary(0xA0F6, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF8; g_cpu.S--; func_E198();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0F6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0F9:;
    /* $A0F9: A5 */ nes_cpu_instruction_boundary(0xA0F9, 3); g_cpu.A = nes_read(0x02); FLAG_NZ(g_cpu.A);
label_A0FB:;
    /* $A0FB: 20 */ nes_cpu_instruction_boundary(0xA0FB, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFD; g_cpu.S--; func_E173();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0FB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0FE:;
    /* $A0FE: A5 */ nes_cpu_instruction_boundary(0xA0FE, 3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_A100:;
    /* $A100: 20 */ nes_cpu_instruction_boundary(0xA100, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x02; g_cpu.S--; func_E173();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA100, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A103:;
    /* $A103: A5 */ nes_cpu_instruction_boundary(0xA103, 3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_A105:;
    /* $A105: 20 */ nes_cpu_instruction_boundary(0xA105, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x07; g_cpu.S--; func_E173();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA105, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A108:;
    /* $A108: D0 */ nes_cpu_instruction_boundary(0xA108, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A14A; }
label_A10A:;
    /* $A10A: A9 */ nes_cpu_instruction_boundary(0xA10A, 2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_A10C:;
    /* $A10C: E0 */ nes_cpu_instruction_boundary(0xA10C, 2); { int r=g_cpu.X-0xF4; g_cpu.C=(g_cpu.X>=0xF4)?1:0; FLAG_NZ(r&0xFF); }
label_A10E:;
    /* $A10E: B0 */ nes_cpu_instruction_boundary(0xA10E, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A14A; }
label_A110:;
    /* $A110: 9D */ nes_cpu_instruction_boundary(0xA110, 5); nes_write((0x020D + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A113:;
    /* $A113: E0 */ nes_cpu_instruction_boundary(0xA113, 2); { int r=g_cpu.X-0xF0; g_cpu.C=(g_cpu.X>=0xF0)?1:0; FLAG_NZ(r&0xFF); }
label_A115:;
    /* $A115: B0 */ nes_cpu_instruction_boundary(0xA115, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A14A; }
label_A117:;
    /* $A117: 9D */ nes_cpu_instruction_boundary(0xA117, 5); nes_write((0x0211 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A11A:;
    /* $A11A: D0 */ nes_cpu_instruction_boundary(0xA11A, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A14A; }
label_A11C:;
    /* $A11C: AD */ nes_cpu_instruction_boundary(0xA11C, 4); g_cpu.A = nes_read(0x010B); FLAG_NZ(g_cpu.A);
label_A11F:;
    /* $A11F: 20 */ nes_cpu_instruction_boundary(0xA11F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x21; g_cpu.S--; func_C2BF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA11F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A122:;
    /* $A122: 20 */ nes_cpu_instruction_boundary(0xA122, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x24; g_cpu.S--; func_E173();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA122, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A125:;
    /* $A125: AD */ nes_cpu_instruction_boundary(0xA125, 4); g_cpu.A = nes_read(0x010B); FLAG_NZ(g_cpu.A);
label_A128:;
    /* $A128: 29 */ nes_cpu_instruction_boundary(0xA128, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A12A:;
    /* $A12A: 20 */ nes_cpu_instruction_boundary(0xA12A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2C; g_cpu.S--; func_E173();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA12A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A12D:;
    /* $A12D: AD */ nes_cpu_instruction_boundary(0xA12D, 4); g_cpu.A = nes_read(0x010A); FLAG_NZ(g_cpu.A);
label_A130:;
    /* $A130: 20 */ nes_cpu_instruction_boundary(0xA130, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x32; g_cpu.S--; func_C2BF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA130, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A133:;
    /* $A133: 20 */ nes_cpu_instruction_boundary(0xA133, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x35; g_cpu.S--; func_E173();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA133, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A136:;
    /* $A136: A9 */ nes_cpu_instruction_boundary(0xA136, 2); g_cpu.A = 0x58; FLAG_NZ(g_cpu.A);
label_A138:;
    /* $A138: 9D */ nes_cpu_instruction_boundary(0xA138, 5); nes_write((0x0201 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A13B:;
    /* $A13B: FE */ nes_cpu_instruction_boundary(0xA13B, 7); { uint16_t a=(0x0202 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A13E:;
    /* $A13E: E0 */ nes_cpu_instruction_boundary(0xA13E, 2); { int r=g_cpu.X-0xFC; g_cpu.C=(g_cpu.X>=0xFC)?1:0; FLAG_NZ(r&0xFF); }
label_A140:;
    /* $A140: B0 */ nes_cpu_instruction_boundary(0xA140, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A14A; }
label_A142:;
    /* $A142: A9 */ nes_cpu_instruction_boundary(0xA142, 2); g_cpu.A = 0x59; FLAG_NZ(g_cpu.A);
label_A144:;
    /* $A144: 9D */ nes_cpu_instruction_boundary(0xA144, 5); nes_write((0x0205 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A147:;
    /* $A147: FE */ nes_cpu_instruction_boundary(0xA147, 7); { uint16_t a=(0x0206 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A14A:;
    /* $A14A: A6 */ nes_cpu_instruction_boundary(0xA14A, 3); g_cpu.X = nes_read(0x5B); FLAG_NZ(g_cpu.X);
label_A14C:;
    /* $A14C: AD */ nes_cpu_instruction_boundary(0xA14C, 4); g_cpu.A = nes_read(0x6877); FLAG_NZ(g_cpu.A);
label_A14F:;
    /* $A14F: F0 */ nes_cpu_instruction_boundary(0xA14F, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A172; }
label_A151:;
    /* $A151: 85 */ nes_cpu_instruction_boundary(0xA151, 3); nes_write(0x03, g_cpu.A);
label_A153:;
    /* $A153: A9 */ nes_cpu_instruction_boundary(0xA153, 2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_A155:;
    /* $A155: 85 */ nes_cpu_instruction_boundary(0xA155, 3); nes_write(0x00, g_cpu.A);
label_A157:;
    /* $A157: A0 */ nes_cpu_instruction_boundary(0xA157, 2); g_cpu.Y = 0x6F; FLAG_NZ(g_cpu.Y);
label_A159:;
    /* $A159: AD */ nes_cpu_instruction_boundary(0xA159, 4); g_cpu.A = nes_read(0x0107); FLAG_NZ(g_cpu.A);
label_A15C:;
    /* $A15C: 20 */ nes_cpu_instruction_boundary(0xA15C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x5E; g_cpu.S--; func_C2BF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA15C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A15F:;
    /* $A15F: 85 */ nes_cpu_instruction_boundary(0xA15F, 3); nes_write(0x01, g_cpu.A);
label_A161:;
    /* $A161: D0 */ nes_cpu_instruction_boundary(0xA161, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A164; }
label_A163:;
    /* $A163: 88 */ nes_cpu_instruction_boundary(0xA163, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A164:;
    /* $A164: 20 */ nes_cpu_instruction_boundary(0xA164, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x66; g_cpu.S--; func_E17B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA164, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A167:;
    /* $A167: C6 */ nes_cpu_instruction_boundary(0xA167, 5); { uint16_t a=0x01; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A169:;
    /* $A169: D0 */ nes_cpu_instruction_boundary(0xA169, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A16C; }
label_A16B:;
    /* $A16B: 88 */ nes_cpu_instruction_boundary(0xA16B, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A16C:;
    /* $A16C: C6 */ nes_cpu_instruction_boundary(0xA16C, 5); { uint16_t a=0x03; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A16E:;
    /* $A16E: D0 */ nes_cpu_instruction_boundary(0xA16E, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xA164, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A164;
    }
label_A170:;
    /* $A170: 86 */ nes_cpu_instruction_boundary(0xA170, 3); nes_write(0x5B, g_cpu.X);
label_A172:;
    /* $A172: 60 */ nes_cpu_instruction_boundary(0xA172, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

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
    /* $B3AD: 0A */ nes_cpu_instruction_boundary(0xB3AD, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_B3AE:;
    /* $B3AE: 2A */ nes_cpu_instruction_boundary(0xB3AE, 2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B3AF:;
    /* $B3AF: A8 */ nes_cpu_instruction_boundary(0xB3AF, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B3B0:;
    /* $B3B0: 8A */ nes_cpu_instruction_boundary(0xB3B0, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_B3B1:;
    /* $B3B1: 20 */ nes_cpu_instruction_boundary(0xB3B1, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; func_C2BF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3B1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3B4:;
    /* $B3B4: 45 */ nes_cpu_instruction_boundary(0xB3B4, 3); g_cpu.A ^= nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_B3B6:;
    /* $B3B6: 4A */ nes_cpu_instruction_boundary(0xB3B6, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B3B7:;
    /* $B3B7: 98 */ nes_cpu_instruction_boundary(0xB3B7, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_B3B8:;
    /* $B3B8: 6A */ nes_cpu_instruction_boundary(0xB3B8, 2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_B3B9:;
    /* $B3B9: 6A */ nes_cpu_instruction_boundary(0xB3B9, 2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_B3BA:;
    /* $B3BA: 9D */ nes_cpu_instruction_boundary(0xB3BA, 5); nes_write((0x0405 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B3BD:;
    /* $B3BD: 60 */ nes_cpu_instruction_boundary(0xB3BD, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

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
    /* $AB4C: 60 */ nes_cpu_instruction_boundary(0xAB4C, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

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
    /* $8000: 8A */ nes_cpu_instruction_boundary(0x8000, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8001:;
    /* $8001: 48 */ nes_cpu_instruction_boundary(0x8001, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_8002:;
    /* $8002: A2 */ nes_cpu_instruction_boundary(0x8002, 2); g_cpu.X = 0x05; FLAG_NZ(g_cpu.X);
label_8004:;
    /* $8004: A5 */ nes_cpu_instruction_boundary(0x8004, 3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_8006:;
    /* $8006: 18 */ nes_cpu_instruction_boundary(0x8006, 2); g_cpu.C = 0;
label_8007:;
    /* $8007: 69 */ nes_cpu_instruction_boundary(0x8007, 2); { uint16_t r = g_cpu.A + 0x05 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x05); g_cpu.A=r&0xFF; }
label_8009:;
    /* $8009: 85 */ nes_cpu_instruction_boundary(0x8009, 3); nes_write(0x2E, g_cpu.A);
label_800B:;
    /* $800B: A5 */ nes_cpu_instruction_boundary(0x800B, 3); g_cpu.A = nes_read(0x2F); FLAG_NZ(g_cpu.A);
label_800D:;
    /* $800D: 18 */ nes_cpu_instruction_boundary(0x800D, 2); g_cpu.C = 0;
label_800E:;
    /* $800E: 69 */ nes_cpu_instruction_boundary(0x800E, 2); { uint16_t r = g_cpu.A + 0x13 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x13); g_cpu.A=r&0xFF; }
label_8010:;
    /* $8010: 85 */ nes_cpu_instruction_boundary(0x8010, 3); nes_write(0x2F, g_cpu.A);
label_8012:;
    /* $8012: CA */ nes_cpu_instruction_boundary(0x8012, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_8013:;
    /* $8013: D0 */ nes_cpu_instruction_boundary(0x8013, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0x8004, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8004;
    }
label_8015:;
    /* $8015: 68 */ nes_cpu_instruction_boundary(0x8015, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8016:;
    /* $8016: AA */ nes_cpu_instruction_boundary(0x8016, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8017:;
    /* $8017: A5 */ nes_cpu_instruction_boundary(0x8017, 3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_8019:;
    /* $8019: 60 */ nes_cpu_instruction_boundary(0x8019, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

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
    /* $8D60: E1 */ nes_cpu_instruction_boundary(0x8D60, 6); { uint8_t m=nes_read(nes_read16zp((0xE1 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D62:;
    /* $8D62: C5 */ nes_cpu_instruction_boundary(0x8D62, 3); { uint8_t m=nes_read(0x4D); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8D64:;
    /* $8D64: F0 */ nes_cpu_instruction_boundary(0x8D64, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8D6B; }
label_8D66:;
    /* $8D66: 85 */ nes_cpu_instruction_boundary(0x8D66, 3); nes_write(0x4D, g_cpu.A);
label_8D68:;
    /* $8D68: 20 */ nes_cpu_instruction_boundary(0x8D68, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8D; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6A; g_cpu.S--; func_CC98();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8D68, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8D6B:;
    /* $8D6B: A9 */ nes_cpu_instruction_boundary(0x8D6B, 2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8D6D:;
    /* $8D6D: 20 */ nes_cpu_instruction_boundary(0x8D6D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8D; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6F; g_cpu.S--; func_DC8F();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8D6D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8D70:;
    /* $8D70: 20 */ nes_cpu_instruction_boundary(0x8D70, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8D; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x72; g_cpu.S--; func_CD9C();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8D70, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8D73:;
    /* $8D73: B0 */ nes_cpu_instruction_boundary(0x8D73, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8D7E; }
label_8D75:;
    /* $8D75: A5 */ nes_cpu_instruction_boundary(0x8D75, 3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_8D77:;
    /* $8D77: 4A */ nes_cpu_instruction_boundary(0x8D77, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8D78:;
    /* $8D78: 29 */ nes_cpu_instruction_boundary(0x8D78, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_8D7A:;
    /* $8D7A: 09 */ nes_cpu_instruction_boundary(0x8D7A, 2); g_cpu.A |= 0xA0; FLAG_NZ(g_cpu.A);
label_8D7C:;
    /* $8D7C: 85 */ nes_cpu_instruction_boundary(0x8D7C, 3); nes_write(0x6B, g_cpu.A);
label_8D7E:;
    /* $8D7E: 20 */ nes_cpu_instruction_boundary(0x8D7E, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8D; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; func_CDFA();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8D7E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8D81:;
    /* $8D81: 20 */ nes_cpu_instruction_boundary(0x8D81, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8D; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x83; g_cpu.S--; func_E269();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8D81, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8D84:;
    /* $8D84: A5 */ nes_cpu_instruction_boundary(0x8D84, 3); g_cpu.A = nes_read(0x92); FLAG_NZ(g_cpu.A);
label_8D86:;
    /* $8D86: F0 */ nes_cpu_instruction_boundary(0x8D86, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8D8C; }
label_8D88:;
    /* $8D88: A9 */ nes_cpu_instruction_boundary(0x8D88, 2); g_cpu.A = 0xA1; FLAG_NZ(g_cpu.A);
label_8D8A:;
    /* $8D8A: 85 */ nes_cpu_instruction_boundary(0x8D8A, 3); nes_write(0x6B, g_cpu.A);
label_8D8C:;
    /* $8D8C: 20 */ nes_cpu_instruction_boundary(0x8D8C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8D; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x8E; g_cpu.S--; func_CD92();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8D8C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8D8F:;
    /* $8D8F: 4C */ nes_cpu_instruction_boundary(0x8D8F, 3); nes_cpu_instruction_boundary(0xDE4A, 2); func_DE4A(); return;
}

void func_A006_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A006_b7");
#endif
label_A006:;
    /* $A006: 85 */ nes_cpu_instruction_boundary(0xA006, 3); nes_write(0x10, g_cpu.A);
label_A008:;
    /* $A008: A5 */ nes_cpu_instruction_boundary(0xA008, 3); g_cpu.A = nes_read(0x09); FLAG_NZ(g_cpu.A);
label_A00A:;
    /* $A00A: 18 */ nes_cpu_instruction_boundary(0xA00A, 2); g_cpu.C = 0;
label_A00B:;
    /* $A00B: 65 */ nes_cpu_instruction_boundary(0xA00B, 3); { uint8_t m=nes_read(0x10); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A00D:;
    /* $A00D: C9 */ nes_cpu_instruction_boundary(0xA00D, 2); { int r=g_cpu.A-0xF0; g_cpu.C=(g_cpu.A>=0xF0)?1:0; FLAG_NZ(r&0xFF); }
label_A00F:;
    /* $A00F: 90 */ nes_cpu_instruction_boundary(0xA00F, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A01B; }
label_A011:;
    /* $A011: 18 */ nes_cpu_instruction_boundary(0xA011, 2); g_cpu.C = 0;
label_A012:;
    /* $A012: 90 */ nes_cpu_instruction_boundary(0xA012, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A01A; }
label_A014:;
    /* $A014: A5 */ nes_cpu_instruction_boundary(0xA014, 3); g_cpu.A = nes_read(0x09); FLAG_NZ(g_cpu.A);
label_A016:;
    /* $A016: C5 */ nes_cpu_instruction_boundary(0xA016, 3); { uint8_t m=nes_read(0x10); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A018:;
    /* $A018: 90 */ nes_cpu_instruction_boundary(0xA018, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A01B; }
label_A01A:;
    /* $A01A: CA */ nes_cpu_instruction_boundary(0xA01A, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A01B:;
    /* $A01B: 60 */ nes_cpu_instruction_boundary(0xA01B, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

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
    /* $9160: 0D */ nes_cpu_instruction_boundary(0x9160, 4); g_cpu.A |= nes_read(0x0307); FLAG_NZ(g_cpu.A);
label_9163:;
    /* $9163: D0 */ nes_cpu_instruction_boundary(0x9163, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9197; }
label_9165:;
    /* $9165: A2 */ nes_cpu_instruction_boundary(0x9165, 2); g_cpu.X = 0xD0; FLAG_NZ(g_cpu.X);
label_9167:;
    /* $9167: BD */ nes_cpu_instruction_boundary(0x9167, 4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_916A:;
    /* $916A: F0 */ nes_cpu_instruction_boundary(0x916A, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_917A; }
label_916C:;
    /* $916C: A2 */ nes_cpu_instruction_boundary(0x916C, 2); g_cpu.X = 0xE0; FLAG_NZ(g_cpu.X);
label_916E:;
    /* $916E: BD */ nes_cpu_instruction_boundary(0x916E, 4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9171:;
    /* $9171: F0 */ nes_cpu_instruction_boundary(0x9171, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_917A; }
label_9173:;
    /* $9173: A2 */ nes_cpu_instruction_boundary(0x9173, 2); g_cpu.X = 0xF0; FLAG_NZ(g_cpu.X);
label_9175:;
    /* $9175: BD */ nes_cpu_instruction_boundary(0x9175, 4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9178:;
    /* $9178: D0 */ nes_cpu_instruction_boundary(0x9178, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9197; }
label_917A:;
    /* $917A: AD */ nes_cpu_instruction_boundary(0x917A, 4); g_cpu.A = nes_read(0x030C); FLAG_NZ(g_cpu.A);
label_917D:;
    /* $917D: 9D */ nes_cpu_instruction_boundary(0x917D, 5); nes_write((0x030C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9180:;
    /* $9180: AD */ nes_cpu_instruction_boundary(0x9180, 4); g_cpu.A = nes_read(0x030E); FLAG_NZ(g_cpu.A);
label_9183:;
    /* $9183: 9D */ nes_cpu_instruction_boundary(0x9183, 5); nes_write((0x030E + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9186:;
    /* $9186: AD */ nes_cpu_instruction_boundary(0x9186, 4); g_cpu.A = nes_read(0x030D); FLAG_NZ(g_cpu.A);
label_9189:;
    /* $9189: 18 */ nes_cpu_instruction_boundary(0x9189, 2); g_cpu.C = 0;
label_918A:;
    /* $918A: 69 */ nes_cpu_instruction_boundary(0x918A, 2); { uint16_t r = g_cpu.A + 0x04 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x04); g_cpu.A=r&0xFF; }
label_918C:;
    /* $918C: 9D */ nes_cpu_instruction_boundary(0x918C, 5); nes_write((0x030D + g_cpu.X) & 0xFFFF, g_cpu.A);
label_918F:;
    /* $918F: A9 */ nes_cpu_instruction_boundary(0x918F, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_9191:;
    /* $9191: 9D */ nes_cpu_instruction_boundary(0x9191, 5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9194:;
    /* $9194: 20 */ nes_cpu_instruction_boundary(0x9194, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x91; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x96; g_cpu.S--; func_CBA8();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9194, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9197:;
    /* $9197: 60 */ nes_cpu_instruction_boundary(0x9197, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

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
    /* $A950: 01 */ nes_cpu_instruction_boundary(0xA950, 6); g_cpu.A |= nes_read(nes_read16zp((0x8A + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A952:;
    /* $A952: 69 */ nes_cpu_instruction_boundary(0xA952, 2); { uint16_t r = g_cpu.A + 0x00 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x00); g_cpu.A=r&0xFF; }
label_A954:;
    /* $A954: F0 */ nes_cpu_instruction_boundary(0xA954, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A95E; }
label_A956:;
    /* $A956: A5 */ nes_cpu_instruction_boundary(0xA956, 3); g_cpu.A = nes_read(0x49); FLAG_NZ(g_cpu.A);
label_A958:;
    /* $A958: 29 */ nes_cpu_instruction_boundary(0xA958, 2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_A95A:;
    /* $A95A: F0 */ nes_cpu_instruction_boundary(0xA95A, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A95E; }
label_A95C:;
    /* $A95C: E6 */ nes_cpu_instruction_boundary(0xA95C, 5); { uint16_t a=0x0B; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A95E:;
    /* $A95E: 60 */ nes_cpu_instruction_boundary(0xA95E, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9983_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9983_b7");
#endif
label_9983:;
    /* $9983: BD */ nes_cpu_instruction_boundary(0x9983, 4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9986:;
    /* $9986: C9 */ nes_cpu_instruction_boundary(0x9986, 2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_9988:;
    /* $9988: D0 */ nes_cpu_instruction_boundary(0x9988, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_999E; }
label_998A:;
    /* $998A: 20 */ nes_cpu_instruction_boundary(0x998A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; func_F152();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x998A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_998D:;
    /* $998D: 20 */ nes_cpu_instruction_boundary(0x998D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; func_F1BF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x998D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9990:;
    /* $9990: 20 */ nes_cpu_instruction_boundary(0x9990, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x92; g_cpu.S--; func_F1FA();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9990, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9993:;
    /* $9993: B0 */ nes_cpu_instruction_boundary(0x9993, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_999E; }
label_9995:;
    /* $9995: 20 */ nes_cpu_instruction_boundary(0x9995, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x97; g_cpu.S--; func_D9BA();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9995, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9998:;
    /* $9998: D0 */ nes_cpu_instruction_boundary(0x9998, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_999E; }
label_999A:;
    /* $999A: E6 */ nes_cpu_instruction_boundary(0x999A, 5); { uint16_t a=0x7D; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_999C:;
    /* $999C: D0 */ nes_cpu_instruction_boundary(0x999C, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_99A3; }
label_999E:;
    /* $999E: 20 */ nes_cpu_instruction_boundary(0x999E, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA0; g_cpu.S--; func_F1F4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x999E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_99A1:;
    /* $99A1: 10 */ nes_cpu_instruction_boundary(0x99A1, 2); if (!g_cpu.N) {
    nes_cpu_instruction_boundary(0x9983, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9983;
    }
label_99A3:;
    /* $99A3: AD */ nes_cpu_instruction_boundary(0x99A3, 4); g_cpu.A = nes_read(0x0320); FLAG_NZ(g_cpu.A);
label_99A6:;
    /* $99A6: F0 */ nes_cpu_instruction_boundary(0x99A6, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_99B9; }
label_99A8:;
    /* $99A8: A0 */ nes_cpu_instruction_boundary(0x99A8, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_99AA:;
    /* $99AA: A2 */ nes_cpu_instruction_boundary(0x99AA, 2); g_cpu.X = 0x20; FLAG_NZ(g_cpu.X);
label_99AC:;
    /* $99AC: 20 */ nes_cpu_instruction_boundary(0x99AC, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAE; g_cpu.S--; func_DC82();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x99AC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_99AF:;
    /* $99AF: B0 */ nes_cpu_instruction_boundary(0x99AF, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_99B9; }
label_99B1:;
    /* $99B1: 20 */ nes_cpu_instruction_boundary(0x99B1, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; func_D9BA();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x99B1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_99B4:;
    /* $99B4: D0 */ nes_cpu_instruction_boundary(0x99B4, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_99B9; }
label_99B6:;
    /* $99B6: EE */ nes_cpu_instruction_boundary(0x99B6, 6); { uint16_t a=0x0307; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_99B9:;
    /* $99B9: 60 */ nes_cpu_instruction_boundary(0x99B9, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_80B0_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80B0_b7");
#endif
label_80B0:;
    /* $80B0: A9 */ nes_cpu_instruction_boundary(0x80B0, 2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_80B2:;
    /* $80B2: 85 */ nes_cpu_instruction_boundary(0x80B2, 3); nes_write(0x2F, g_cpu.A);
label_80B4:;
    /* $80B4: C8 */ nes_cpu_instruction_boundary(0x80B4, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_80B5:;
    /* $80B5: 84 */ nes_cpu_instruction_boundary(0x80B5, 3); nes_write(0x24, g_cpu.Y);
label_80B7:;
    /* $80B7: 20 */ nes_cpu_instruction_boundary(0x80B7, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; func_C4DE();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x80B7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_80BA:;
    /* $80BA: D0 */ nes_cpu_instruction_boundary(0x80BA, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_80CB; }
label_80BC:;
    /* $80BC: 20 */ nes_cpu_instruction_boundary(0x80BC, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBE; g_cpu.S--; func_C4DE();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x80BC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_80BF:;
    /* $80BF: 20 */ nes_cpu_instruction_boundary(0x80BF, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC1; g_cpu.S--; func_C266();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x80BF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_80C2:;
    /* $80C2: 20 */ nes_cpu_instruction_boundary(0x80C2, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC4; g_cpu.S--; func_C114();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x80C2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_80C5:;
    /* $80C5: E6 */ nes_cpu_instruction_boundary(0x80C5, 5); { uint16_t a=0x2D; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_80C7:;
    /* $80C7: A9 */ nes_cpu_instruction_boundary(0x80C7, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_80C9:;
    /* $80C9: 85 */ nes_cpu_instruction_boundary(0x80C9, 3); nes_write(0x1A, g_cpu.A);
label_80CB:;
    /* $80CB: A8 */ nes_cpu_instruction_boundary(0x80CB, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_80CC:;
    /* $80CC: A5 */ nes_cpu_instruction_boundary(0x80CC, 3); g_cpu.A = nes_read(0x1A); FLAG_NZ(g_cpu.A);
label_80CE:;
    /* $80CE: D0 */ nes_cpu_instruction_boundary(0x80CE, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_80D3; }
label_80D0:;
    /* $80D0: 4C */ nes_cpu_instruction_boundary(0x80D0, 3); nes_cpu_instruction_boundary(0xC0CB, 2); func_C0CB(); return;
label_80D3:;
    /* $80D3: 20 */ nes_cpu_instruction_boundary(0x80D3, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD5; g_cpu.S--; func_C000();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x80D3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_80D6:;
    /* $80D6: 4C */ nes_cpu_instruction_boundary(0x80D6, 3); nes_cpu_instruction_boundary(0xC0BC, 2); func_C0BC(); return;
}

void func_8296_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8296_b7");
#endif
label_8296:;
    /* $8296: 6A */ nes_cpu_instruction_boundary(0x8296, 2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_8297:;
    /* $8297: 6C */ nes_cpu_instruction_boundary(0x8297, 5); { uint16_t _jt = nes_read16zp(0x0C); nes_cpu_instruction_boundary(_jt, 2); call_by_address_tail(_jt, -1); return; }
}

void func_832F_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_832F_b7");
#endif
label_832F:;
    /* $832F: 29 */ nes_cpu_instruction_boundary(0x832F, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_8331:;
    /* $8331: 85 */ nes_cpu_instruction_boundary(0x8331, 3); nes_write(0x05, g_cpu.A);
label_8333:;
    /* $8333: B1 */ nes_cpu_instruction_boundary(0x8333, 5); g_cpu.A = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8335:;
    /* $8335: 20 */ nes_cpu_instruction_boundary(0x8335, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x83; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x37; g_cpu.S--; func_C2BF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8335, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8338:;
    /* $8338: 85 */ nes_cpu_instruction_boundary(0x8338, 3); nes_write(0x04, g_cpu.A);
label_833A:;
    /* $833A: AE */ nes_cpu_instruction_boundary(0x833A, 4); g_cpu.X = nes_read(0x07A0); FLAG_NZ(g_cpu.X);
label_833D:;
    /* $833D: A5 */ nes_cpu_instruction_boundary(0x833D, 3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_833F:;
    /* $833F: 20 */ nes_cpu_instruction_boundary(0x833F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x83; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x41; g_cpu.S--; func_C36B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x833F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8342:;
    /* $8342: A5 */ nes_cpu_instruction_boundary(0x8342, 3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_8344:;
    /* $8344: 20 */ nes_cpu_instruction_boundary(0x8344, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x83; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x46; g_cpu.S--; func_C36B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8344, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8347:;
    /* $8347: A5 */ nes_cpu_instruction_boundary(0x8347, 3); g_cpu.A = nes_read(0x05); FLAG_NZ(g_cpu.A);
label_8349:;
    /* $8349: 85 */ nes_cpu_instruction_boundary(0x8349, 3); nes_write(0x06, g_cpu.A);
label_834B:;
    /* $834B: 20 */ nes_cpu_instruction_boundary(0x834B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x83; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x4D; g_cpu.S--; func_C36B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x834B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_834E:;
    /* $834E: C8 */ nes_cpu_instruction_boundary(0x834E, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_834F:;
    /* $834F: B1 */ nes_cpu_instruction_boundary(0x834F, 5); g_cpu.A = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8351:;
    /* $8351: 20 */ nes_cpu_instruction_boundary(0x8351, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x83; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x53; g_cpu.S--; func_C36B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8351, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8354:;
    /* $8354: C6 */ nes_cpu_instruction_boundary(0x8354, 5); { uint16_t a=0x06; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8356:;
    /* $8356: D0 */ nes_cpu_instruction_boundary(0x8356, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0x834E, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_834E;
    }
label_8358:;
    /* $8358: 8E */ nes_cpu_instruction_boundary(0x8358, 4); nes_write(0x07A0, g_cpu.X);
label_835B:;
    /* $835B: 84 */ nes_cpu_instruction_boundary(0x835B, 3); nes_write(0x06, g_cpu.Y);
label_835D:;
    /* $835D: A0 */ nes_cpu_instruction_boundary(0x835D, 2); g_cpu.Y = 0x20; FLAG_NZ(g_cpu.Y);
label_835F:;
    /* $835F: 20 */ nes_cpu_instruction_boundary(0x835F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x83; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x61; g_cpu.S--; func_C2A8();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x835F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8362:;
    /* $8362: A4 */ nes_cpu_instruction_boundary(0x8362, 3); g_cpu.Y = nes_read(0x06); FLAG_NZ(g_cpu.Y);
label_8364:;
    /* $8364: C6 */ nes_cpu_instruction_boundary(0x8364, 5); { uint16_t a=0x04; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8366:;
    /* $8366: D0 */ nes_cpu_instruction_boundary(0x8366, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0x833D, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_833D;
    }
label_8368:;
    /* $8368: 20 */ nes_cpu_instruction_boundary(0x8368, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x83; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6A; g_cpu.S--; func_C376();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8368, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_836B:;
    /* $836B: 9D */ nes_cpu_instruction_boundary(0x836B, 5); nes_write((0x07A1 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_836E:;
    /* $836E: E8 */ nes_cpu_instruction_boundary(0x836E, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_836F:;
    /* $836F: E0 */ nes_cpu_instruction_boundary(0x836F, 2); { int r=g_cpu.X-0x4F; g_cpu.C=(g_cpu.X>=0x4F)?1:0; FLAG_NZ(r&0xFF); }
label_8371:;
    /* $8371: 90 */ nes_cpu_instruction_boundary(0x8371, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_837D; }
label_8373:;
    /* $8373: AE */ nes_cpu_instruction_boundary(0x8373, 4); g_cpu.X = nes_read(0x07A0); FLAG_NZ(g_cpu.X);
label_8376:;
    /* $8376: A9 */ nes_cpu_instruction_boundary(0x8376, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8378:;
    /* $8378: 9D */ nes_cpu_instruction_boundary(0x8378, 5); nes_write((0x07A1 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_837B:;
    /* $837B: 68 */ nes_cpu_instruction_boundary(0x837B, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_837C:;
    /* $837C: 68 */ nes_cpu_instruction_boundary(0x837C, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_837D:;
    /* $837D: 60 */ nes_cpu_instruction_boundary(0x837D, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

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
    /* $FE21: 4B */ nes_cpu_instruction_boundary(0xFE21, 2); g_cpu.A &= 0x20; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_FE23:;
    /* $FE23: F4 */ nes_cpu_instruction_boundary(0xFE23, 4); (void)nes_read((0xF1 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_FE25:;
    /* $FE25: D0 */ nes_cpu_instruction_boundary(0xFE25, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xFE1D); return; }
label_FE27:; /* UpdateTileBlast */
    /* $FE27: 86 */ nes_cpu_instruction_boundary(0xFE27, 3); nes_write(0x4B, g_cpu.X);
label_FE29:;
    /* $FE29: BD */ nes_cpu_instruction_boundary(0xFE29, 4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FE2C:;
    /* $FE2C: F0 */ nes_cpu_instruction_boundary(0xFE2C, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_FE78; }
label_FE2E:;
    /* $FE2E: 20 */ nes_cpu_instruction_boundary(0xFE2E, 6); /* inline_dispatch $C27C: 6 entries (bank=-1) */
switch(g_cpu.A) {
  case 0: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x5C); nes_write(0x000D, 0xC4); g_cpu.A = 0xC4; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0xC45C, 57); func_C45C(); return;
  case 1: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x3D); nes_write(0x000D, 0xFE); g_cpu.A = 0xFE; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0xFE3D, 57); func_FE3D(); return;
  case 2: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x54); nes_write(0x000D, 0xFE); g_cpu.A = 0xFE; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0xFE54, 57); func_FE54(); return;
  case 3: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x59); nes_write(0x000D, 0xFE); g_cpu.A = 0xFE; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0xFE59, 57); func_FE59(); return;
  case 4: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x54); nes_write(0x000D, 0xFE); g_cpu.A = 0xFE; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0xFE54, 57); func_FE54(); return;
  case 5: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x83); nes_write(0x000D, 0xFE); g_cpu.A = 0xFE; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0xFE83, 57); func_FE83(); return;
  default: nes_log_inline_miss(0xFE2E, g_cpu.A); return;
}
label_FE3D:; /* UpdateTileBlast_Init */
    /* $FE3D: FE */ nes_cpu_instruction_boundary(0xFE3D, 7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_FE40:;
    /* $FE40: A9 */ nes_cpu_instruction_boundary(0xFE40, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_FE42:;
    /* $FE42: 20 */ nes_cpu_instruction_boundary(0xFE42, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xFE; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x44; g_cpu.S--; func_FE6D();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xFE42, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_FE45:;
    /* $FE45: A9 */ nes_cpu_instruction_boundary(0xFE45, 2); g_cpu.A = 0x50; FLAG_NZ(g_cpu.A);
label_FE47:;
    /* $FE47: 9D */ nes_cpu_instruction_boundary(0xFE47, 5); nes_write((0x0507 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_FE4A:;
    /* $FE4A: BD */ nes_cpu_instruction_boundary(0xFE4A, 4); g_cpu.A = nes_read((0x0508 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FE4D:;
    /* $FE4D: 85 */ nes_cpu_instruction_boundary(0xFE4D, 3); nes_write(0x00, g_cpu.A);
label_FE4F:;
    /* $FE4F: BD */ nes_cpu_instruction_boundary(0xFE4F, 4); g_cpu.A = nes_read((0x0509 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FE52:;
    /* $FE52: 85 */ nes_cpu_instruction_boundary(0xFE52, 3); nes_write(0x01, g_cpu.A);
label_FE54:; /* UpdateTileBlast_Animating */
    /* $FE54: A9 */ nes_cpu_instruction_boundary(0xFE54, 2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_FE56:;
    /* $FE56: 4C */ nes_cpu_instruction_boundary(0xFE56, 3); nes_cpu_instruction_boundary(0xFF54, 2); func_FF54(); return;
label_FE78:; /* SetTileAnim_RTS */
    /* $FE78: 60 */ nes_cpu_instruction_boundary(0xFE78, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

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
    /* $C360: A8 */ nes_cpu_instruction_boundary(0xC360, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_C361:;
    /* $C361: C2 */ nes_cpu_instruction_boundary(0xC361, 2); /* NOP */
label_C363:;
    /* $C363: 06 */ nes_cpu_instruction_boundary(0xC363, 5); { uint16_t a=0xC6; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C365:;
    /* $C365: 04 */ nes_cpu_instruction_boundary(0xC365, 3); (void)nes_read(0xD0); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C367:;
    /* $C367: D5 */ nes_cpu_instruction_boundary(0xC367, 4); { uint8_t m=nes_read((0x20 + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C369:;
    /* $C369: 76 */ nes_cpu_instruction_boundary(0xC369, 6); { uint16_t a=(0xC3 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C36B:; /* WritePPUByte */
    /* $C36B: 9D */ nes_cpu_instruction_boundary(0xC36B, 5); nes_write((0x07A1 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_C36E:; /* NextPPUByte */
    /* $C36E: E8 */ nes_cpu_instruction_boundary(0xC36E, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_C36F:;
    /* $C36F: E0 */ nes_cpu_instruction_boundary(0xC36F, 2); { int r=g_cpu.X-0x4F; g_cpu.C=(g_cpu.X>=0x4F)?1:0; FLAG_NZ(r&0xFF); }
label_C371:;
    /* $C371: 90 */ nes_cpu_instruction_boundary(0xC371, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_C37D; }
label_C373:;
    /* $C373: AE */ nes_cpu_instruction_boundary(0xC373, 4); g_cpu.X = nes_read(0x07A0); FLAG_NZ(g_cpu.X);
label_C376:; /* EndVRAMStruct */
    /* $C376: A9 */ nes_cpu_instruction_boundary(0xC376, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C378:;
    /* $C378: 9D */ nes_cpu_instruction_boundary(0xC378, 5); nes_write((0x07A1 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_C37B:;
    /* $C37B: 68 */ nes_cpu_instruction_boundary(0xC37B, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_C37C:;
    /* $C37C: 68 */ nes_cpu_instruction_boundary(0xC37C, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_C37D:;
    /* $C37D: 60 */ nes_cpu_instruction_boundary(0xC37D, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

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

void func_C36B(void) { /* WritePPUByte */
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
    /* $DF73: 07 */ nes_cpu_instruction_boundary(0xDF73, 5); { uint16_t a=0x98; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_DF75:;
    /* $DF75: 24 */ nes_cpu_instruction_boundary(0xDF75, 3); { uint8_t m=nes_read(0x04); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_DF77:;
    /* $DF77: 30 */ nes_cpu_instruction_boundary(0xDF77, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_DFB1; }
label_DF79:;
    /* $DF79: 18 */ nes_cpu_instruction_boundary(0xDF79, 2); g_cpu.C = 0;
label_DF7A:;
    /* $DF7A: 60 */ nes_cpu_instruction_boundary(0xDF7A, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_DF7B:; /* ExplodeYDisplace */
    /* $DF7B: 98 */ nes_cpu_instruction_boundary(0xDF7B, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_DF7C:;
    /* $DF7C: 29 */ nes_cpu_instruction_boundary(0xDF7C, 2); g_cpu.A &= 0x0E; FLAG_NZ(g_cpu.A);
label_DF7E:;
    /* $DF7E: 4A */ nes_cpu_instruction_boundary(0xDF7E, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_DF7F:;
    /* $DF7F: A8 */ nes_cpu_instruction_boundary(0xDF7F, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_DF80:;
    /* $DF80: B9 */ nes_cpu_instruction_boundary(0xDF80, 4); g_cpu.A = nes_read((0xE049 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DF83:;
    /* $DF83: A4 */ nes_cpu_instruction_boundary(0xDF83, 3); g_cpu.Y = nes_read(0x55); FLAG_NZ(g_cpu.Y);
label_DF85:;
    /* $DF85: D0 */ nes_cpu_instruction_boundary(0xDF85, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_DF8F; }
label_DF87:;
    /* $DF87: A4 */ nes_cpu_instruction_boundary(0xDF87, 3); g_cpu.Y = nes_read(0x4B); FLAG_NZ(g_cpu.Y);
label_DF89:;
    /* $DF89: 79 */ nes_cpu_instruction_boundary(0xDF89, 4); { uint8_t m=nes_read((0x0406 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_DF8C:;
    /* $DF8C: 4C */ nes_cpu_instruction_boundary(0xDF8C, 3); nes_cpu_instruction_boundary(0xDF91, 2); func_DF91(); return;
label_DF8F:;
    /* $DF8F: 65 */ nes_cpu_instruction_boundary(0xDF8F, 3); { uint8_t m=nes_read(0x65); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_DF91:;
    /* $DF91: A8 */ nes_cpu_instruction_boundary(0xDF91, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_DF92:;
    /* $DF92: B9 */ nes_cpu_instruction_boundary(0xDF92, 4); g_cpu.A = nes_read((0xE04B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DF95:;
    /* $DF95: 48 */ nes_cpu_instruction_boundary(0xDF95, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_DF96:;
    /* $DF96: A5 */ nes_cpu_instruction_boundary(0xDF96, 3); g_cpu.A = nes_read(0x0F); FLAG_NZ(g_cpu.A);
label_DF98:;
    /* $DF98: 18 */ nes_cpu_instruction_boundary(0xDF98, 2); g_cpu.C = 0;
label_DF99:;
    /* $DF99: 69 */ nes_cpu_instruction_boundary(0xDF99, 2); { uint16_t r = g_cpu.A + 0x0C + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0C); g_cpu.A=r&0xFF; }
label_DF9B:;
    /* $DF9B: A8 */ nes_cpu_instruction_boundary(0xDF9B, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_DF9C:;
    /* $DF9C: 68 */ nes_cpu_instruction_boundary(0xDF9C, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_DF9D:;
    /* $DF9D: 18 */ nes_cpu_instruction_boundary(0xDF9D, 2); g_cpu.C = 0;
label_DF9E:;
    /* $DF9E: 71 */ nes_cpu_instruction_boundary(0xDF9E, 5); { uint8_t m=nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_DFA0:;
    /* $DFA0: 4C */ nes_cpu_instruction_boundary(0xDFA0, 3); goto label_DF75;
label_DFB1:; /* NegativeDisplacement */
    /* $DFB1: 49 */ nes_cpu_instruction_boundary(0xDFB1, 2); g_cpu.A ^= 0xFF; FLAG_NZ(g_cpu.A);
label_DFB3:;
    /* $DFB3: 38 */ nes_cpu_instruction_boundary(0xDFB3, 2); g_cpu.C = 1;
label_DFB4:;
    /* $DFB4: 69 */ nes_cpu_instruction_boundary(0xDFB4, 2); { uint16_t r = g_cpu.A + 0xF8 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xF8); g_cpu.A=r&0xFF; }
label_DFB6:;
    /* $DFB6: 18 */ nes_cpu_instruction_boundary(0xDFB6, 2); g_cpu.C = 0;
label_DFB7:;
    /* $DFB7: 60 */ nes_cpu_instruction_boundary(0xDFB7, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

