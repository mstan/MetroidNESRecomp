/* metroid_full_bank00_part00.c — PRG bank 0 function bodies (sub-part 0).
 * STANDALONE translation unit — compiled independently (in
 * parallel with every other bank part/sub-part and the
 * umbrella metroid_full.c). Do not compile as part of another TU or
 * edit directly; the source of truth is the recompiler's
 * code_generator.c. Renamed to drop the _partNN suffix if
 * this bank turned out to fit in a single sub-part. */

#include "metroid_full_decls.h"

void func_9A07_b0(void) { /* NMIScreenWrite */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A07_b0");
#endif
label_9A07:; /* NMIScreenWrite */
    /* $9A07: A5 */ nes_cpu_instruction_boundary(0x9A07, 3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_9A09:;
    /* $9A09: C9 */ nes_cpu_instruction_boundary(0x9A09, 2); { int r=g_cpu.A-0x1D; g_cpu.C=(g_cpu.A>=0x1D)?1:0; FLAG_NZ(r&0xFF); }
label_9A0B:;
    /* $9A0B: 90 */ nes_cpu_instruction_boundary(0x9A0B, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9A38; }
label_9A0D:;
    /* $9A0D: 20 */ nes_cpu_instruction_boundary(0x9A0D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0F; g_cpu.S--; func_9C45_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9A0D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9A10:;
    /* $9A10: A5 */ nes_cpu_instruction_boundary(0x9A10, 3); g_cpu.A = nes_read(0x7A); FLAG_NZ(g_cpu.A);
label_9A12:;
    /* $9A12: F0 */ nes_cpu_instruction_boundary(0x9A12, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A24; }
label_9A14:;
    /* $9A14: C9 */ nes_cpu_instruction_boundary(0x9A14, 2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_9A16:;
    /* $9A16: B0 */ nes_cpu_instruction_boundary(0x9A16, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9A24; }
label_9A18:;
    /* $9A18: 0A */ nes_cpu_instruction_boundary(0x9A18, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9A19:;
    /* $9A19: A8 */ nes_cpu_instruction_boundary(0x9A19, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9A1A:;
    /* $9A1A: BE */ nes_cpu_instruction_boundary(0x9A1A, 4); g_cpu.X = nes_read((0xA1B8 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_9A1D:;
    /* $9A1D: B9 */ nes_cpu_instruction_boundary(0x9A1D, 4); g_cpu.A = nes_read((0xA1B9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A20:;
    /* $9A20: A8 */ nes_cpu_instruction_boundary(0x9A20, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9A21:;
    /* $9A21: 20 */ nes_cpu_instruction_boundary(0x9A21, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x23; g_cpu.S--; func_C20E();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9A21, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9A24:;
    /* $9A24: A5 */ nes_cpu_instruction_boundary(0x9A24, 3); g_cpu.A = nes_read(0x81); FLAG_NZ(g_cpu.A);
label_9A26:;
    /* $9A26: F0 */ nes_cpu_instruction_boundary(0x9A26, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A38; }
label_9A28:;
    /* $9A28: C9 */ nes_cpu_instruction_boundary(0x9A28, 2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_9A2A:;
    /* $9A2A: B0 */ nes_cpu_instruction_boundary(0x9A2A, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9A38; }
label_9A2C:;
    /* $9A2C: 0A */ nes_cpu_instruction_boundary(0x9A2C, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9A2D:;
    /* $9A2D: A8 */ nes_cpu_instruction_boundary(0x9A2D, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9A2E:;
    /* $9A2E: BE */ nes_cpu_instruction_boundary(0x9A2E, 4); g_cpu.X = nes_read((0xA263 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_9A31:;
    /* $9A31: B9 */ nes_cpu_instruction_boundary(0x9A31, 4); g_cpu.A = nes_read((0xA264 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A34:;
    /* $9A34: A8 */ nes_cpu_instruction_boundary(0x9A34, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9A35:;
    /* $9A35: 4C */ nes_cpu_instruction_boundary(0x9A35, 3); nes_cpu_instruction_boundary(0xC20E, 2); func_C20E(); return;
label_9A38:; /* Exit100 */
    /* $9A38: 60 */ nes_cpu_instruction_boundary(0x9A38, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B3B4_b0(void) { /* SoundEngine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3B4_b0");
#endif
label_B3B4:; /* SoundEngine */
    /* $B3B4: A9 */ nes_cpu_instruction_boundary(0xB3B4, 2); g_cpu.A = 0xC0; FLAG_NZ(g_cpu.A);
label_B3B6:;
    /* $B3B6: 8D */ nes_cpu_instruction_boundary(0xB3B6, 4); nes_write(0x4017, g_cpu.A);
label_B3B9:;
    /* $B3B9: AD */ nes_cpu_instruction_boundary(0xB3B9, 4); g_cpu.A = nes_read(0x0680); FLAG_NZ(g_cpu.A);
label_B3BC:;
    /* $B3BC: 4A */ nes_cpu_instruction_boundary(0xB3BC, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B3BD:;
    /* $B3BD: B0 */ nes_cpu_instruction_boundary(0xB3BD, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B3EB; }
label_B3BF:;
    /* $B3BF: A5 */ nes_cpu_instruction_boundary(0xB3BF, 3); g_cpu.A = nes_read(0x1E); FLAG_NZ(g_cpu.A);
label_B3C1:;
    /* $B3C1: C9 */ nes_cpu_instruction_boundary(0xB3C1, 2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_B3C3:;
    /* $B3C3: F0 */ nes_cpu_instruction_boundary(0xB3C3, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB399); return; }
label_B3C5:;
    /* $B3C5: A9 */ nes_cpu_instruction_boundary(0xB3C5, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B3C7:;
    /* $B3C7: 8D */ nes_cpu_instruction_boundary(0xB3C7, 4); nes_write(0x0602, g_cpu.A);
label_B3CA:;
    /* $B3CA: 20 */ nes_cpu_instruction_boundary(0xB3CA, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCC; g_cpu.S--; func_B31B_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3CA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3CD:;
    /* $B3CD: 20 */ nes_cpu_instruction_boundary(0xB3CD, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCF; g_cpu.S--; func_B34B_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3CD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3D0:;
    /* $B3D0: 20 */ nes_cpu_instruction_boundary(0xB3D0, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD2; g_cpu.S--; func_B33D_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3D0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3D3:;
    /* $B3D3: 20 */ nes_cpu_instruction_boundary(0xB3D3, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD5; g_cpu.S--; func_BC36_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3D3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3D6:; /* ClearInitFlags */
    /* $B3D6: A9 */ nes_cpu_instruction_boundary(0xB3D6, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B3D8:;
    /* $B3D8: 8D */ nes_cpu_instruction_boundary(0xB3D8, 4); nes_write(0x0680, g_cpu.A);
label_B3DB:;
    /* $B3DB: 8D */ nes_cpu_instruction_boundary(0xB3DB, 4); nes_write(0x0681, g_cpu.A);
label_B3DE:;
    /* $B3DE: 8D */ nes_cpu_instruction_boundary(0xB3DE, 4); nes_write(0x0682, g_cpu.A);
label_B3E1:;
    /* $B3E1: 8D */ nes_cpu_instruction_boundary(0xB3E1, 4); nes_write(0x0683, g_cpu.A);
label_B3E4:;
    /* $B3E4: 8D */ nes_cpu_instruction_boundary(0xB3E4, 4); nes_write(0x0684, g_cpu.A);
label_B3E7:;
    /* $B3E7: 8D */ nes_cpu_instruction_boundary(0xB3E7, 4); nes_write(0x0685, g_cpu.A);
label_B3EA:;
    /* $B3EA: 60 */ nes_cpu_instruction_boundary(0xB3EA, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B3EB:; /* SoundEngine_SilenceMusic */
    /* $B3EB: 20 */ nes_cpu_instruction_boundary(0xB3EB, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xED; g_cpu.S--; func_B404_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3EB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3EE:;
    /* $B3EE: F0 */ nes_cpu_instruction_boundary(0xB3EE, 2); if (g_cpu.Z) {
    nes_cpu_instruction_boundary(0xB3D6, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B3D6;
    }
label_B3F0:; /* EndOrLoopMusic */
    /* $B3F0: AD */ nes_cpu_instruction_boundary(0xB3F0, 4); g_cpu.A = nes_read(0x062C); FLAG_NZ(g_cpu.A);
label_B3F3:;
    /* $B3F3: F0 */ nes_cpu_instruction_boundary(0xB3F3, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_B404; }
label_B3F5:;
    /* $B3F5: AD */ nes_cpu_instruction_boundary(0xB3F5, 4); g_cpu.A = nes_read(0x068D); FLAG_NZ(g_cpu.A);
label_B3F8:;
    /* $B3F8: 8D */ nes_cpu_instruction_boundary(0xB3F8, 4); nes_write(0x065D, g_cpu.A);
label_B3FB:;
    /* $B3FB: 60 */ nes_cpu_instruction_boundary(0xB3FB, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B3FC:; /* CheckMusicFlags */
    /* $B3FC: AD */ nes_cpu_instruction_boundary(0xB3FC, 4); g_cpu.A = nes_read(0x068D); FLAG_NZ(g_cpu.A);
label_B3FF:;
    /* $B3FF: CD */ nes_cpu_instruction_boundary(0xB3FF, 4); { uint8_t m=nes_read(0x064D); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B402:;
    /* $B402: F0 */ nes_cpu_instruction_boundary(0xB402, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B40A; }
label_B404:; /* InitializeSoundAddresses */
    /* $B404: 20 */ nes_cpu_instruction_boundary(0xB404, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x06; g_cpu.S--; func_B41D_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB404, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B407:;
    /* $B407: 20 */ nes_cpu_instruction_boundary(0xB407, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x09; g_cpu.S--; func_B43E_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB407, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B40A:; /* GotoClearSpecialAddresses */
    /* $B40A: 20 */ nes_cpu_instruction_boundary(0xB40A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0C; g_cpu.S--; func_B40E_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB40A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B40D:;
    /* $B40D: 60 */ nes_cpu_instruction_boundary(0xB40D, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9C45_b0(void) { /* LoadCredits */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9C45_b0");
#endif
label_9C45:; /* LoadCredits */
    /* $9C45: A4 */ nes_cpu_instruction_boundary(0x9C45, 3); g_cpu.Y = nes_read(0x80); FLAG_NZ(g_cpu.Y);
label_9C47:;
    /* $9C47: F0 */ nes_cpu_instruction_boundary(0x9C47, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9C7E; }
label_9C49:;
    /* $9C49: C0 */ nes_cpu_instruction_boundary(0x9C49, 2); { int r=g_cpu.Y-0x07; g_cpu.C=(g_cpu.Y>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_9C4B:;
    /* $9C4B: B0 */ nes_cpu_instruction_boundary(0x9C4B, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9C7E; }
label_9C4D:;
    /* $9C4D: A2 */ nes_cpu_instruction_boundary(0x9C4D, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_9C4F:;
    /* $9C4F: A5 */ nes_cpu_instruction_boundary(0x9C4F, 3); g_cpu.A = nes_read(0xFC); FLAG_NZ(g_cpu.A);
label_9C51:;
    /* $9C51: 10 */ nes_cpu_instruction_boundary(0x9C51, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_9C57; }
label_9C53:;
    /* $9C53: E8 */ nes_cpu_instruction_boundary(0x9C53, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9C54:;
    /* $9C54: 38 */ nes_cpu_instruction_boundary(0x9C54, 2); g_cpu.C = 1;
label_9C55:;
    /* $9C55: E9 */ nes_cpu_instruction_boundary(0x9C55, 2); { uint8_t m=0x80; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9C57:; /* LoadCredits_endIf_A */
    /* $9C57: C9 */ nes_cpu_instruction_boundary(0x9C57, 2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_9C59:;
    /* $9C59: B0 */ nes_cpu_instruction_boundary(0x9C59, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9C7E; }
label_9C5B:;
    /* $9C5B: 85 */ nes_cpu_instruction_boundary(0x9C5B, 3); nes_write(0x01, g_cpu.A);
label_9C5D:;
    /* $9C5D: 88 */ nes_cpu_instruction_boundary(0x9C5D, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9C5E:;
    /* $9C5E: 8A */ nes_cpu_instruction_boundary(0x9C5E, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_9C5F:;
    /* $9C5F: D0 */ nes_cpu_instruction_boundary(0x9C5F, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9C6C; }
label_9C61:;
    /* $9C61: 88 */ nes_cpu_instruction_boundary(0x9C61, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9C62:;
    /* $9C62: 30 */ nes_cpu_instruction_boundary(0x9C62, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_9C7E; }
label_9C64:;
    /* $9C64: 98 */ nes_cpu_instruction_boundary(0x9C64, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_9C65:;
    /* $9C65: 0A */ nes_cpu_instruction_boundary(0x9C65, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9C66:;
    /* $9C66: 0A */ nes_cpu_instruction_boundary(0x9C66, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9C67:;
    /* $9C67: 0A */ nes_cpu_instruction_boundary(0x9C67, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9C68:;
    /* $9C68: 69 */ nes_cpu_instruction_boundary(0x9C68, 2); { uint16_t r = g_cpu.A + 0x04 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x04); g_cpu.A=r&0xFF; }
label_9C6A:;
    /* $9C6A: D0 */ nes_cpu_instruction_boundary(0x9C6A, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9C70; }
label_9C6C:; /* LoadCredits_else_B */
    /* $9C6C: 98 */ nes_cpu_instruction_boundary(0x9C6C, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_9C6D:;
    /* $9C6D: 0A */ nes_cpu_instruction_boundary(0x9C6D, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9C6E:;
    /* $9C6E: 0A */ nes_cpu_instruction_boundary(0x9C6E, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9C6F:;
    /* $9C6F: 0A */ nes_cpu_instruction_boundary(0x9C6F, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9C70:; /* LoadCredits_endIf_B */
    /* $9C70: 65 */ nes_cpu_instruction_boundary(0x9C70, 3); { uint8_t m=nes_read(0x01); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9C72:;
    /* $9C72: 0A */ nes_cpu_instruction_boundary(0x9C72, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9C73:;
    /* $9C73: A8 */ nes_cpu_instruction_boundary(0x9C73, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9C74:;
    /* $9C74: BE */ nes_cpu_instruction_boundary(0x9C74, 4); g_cpu.X = nes_read((0xA291 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_9C77:;
    /* $9C77: B9 */ nes_cpu_instruction_boundary(0x9C77, 4); g_cpu.A = nes_read((0xA292 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C7A:;
    /* $9C7A: A8 */ nes_cpu_instruction_boundary(0x9C7A, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9C7B:;
    /* $9C7B: 4C */ nes_cpu_instruction_boundary(0x9C7B, 3); nes_cpu_instruction_boundary(0xC20E, 2); func_C20E(); return;
label_9C7E:; /* LoadCredits_RTS */
    /* $9C7E: 60 */ nes_cpu_instruction_boundary(0x9C7E, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9F54_b0(void) { /* EndGamePaletteWrite */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9F54_b0");
#endif
label_9F54:; /* EndGamePaletteWrite */
    /* $9F54: A5 */ nes_cpu_instruction_boundary(0x9F54, 3); g_cpu.A = nes_read(0x1C); FLAG_NZ(g_cpu.A);
label_9F56:;
    /* $9F56: F0 */ nes_cpu_instruction_boundary(0x9F56, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9F80; }
label_9F58:;
    /* $9F58: C9 */ nes_cpu_instruction_boundary(0x9F58, 2); { int r=g_cpu.A-0x0C; g_cpu.C=(g_cpu.A>=0x0C)?1:0; FLAG_NZ(r&0xFF); }
label_9F5A:;
    /* $9F5A: F0 */ nes_cpu_instruction_boundary(0x9F5A, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9F80; }
label_9F5C:;
    /* $9F5C: C9 */ nes_cpu_instruction_boundary(0x9F5C, 2); { int r=g_cpu.A-0x0D; g_cpu.C=(g_cpu.A>=0x0D)?1:0; FLAG_NZ(r&0xFF); }
label_9F5E:;
    /* $9F5E: D0 */ nes_cpu_instruction_boundary(0x9F5E, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9F64; }
label_9F60:;
    /* $9F60: A0 */ nes_cpu_instruction_boundary(0x9F60, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_9F62:;
    /* $9F62: 84 */ nes_cpu_instruction_boundary(0x9F62, 3); nes_write(0x1C, g_cpu.Y);
label_9F64:; /* EndGamePaletteWrite_endIf_A */
    /* $9F64: 0A */ nes_cpu_instruction_boundary(0x9F64, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9F65:;
    /* $9F65: A8 */ nes_cpu_instruction_boundary(0x9F65, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9F66:;
    /* $9F66: B9 */ nes_cpu_instruction_boundary(0x9F66, 4); g_cpu.A = nes_read((0x9F80 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9F69:;
    /* $9F69: BE */ nes_cpu_instruction_boundary(0x9F69, 4); g_cpu.X = nes_read((0x9F7F + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_9F6C:;
    /* $9F6C: A8 */ nes_cpu_instruction_boundary(0x9F6C, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9F6D:;
    /* $9F6D: 20 */ nes_cpu_instruction_boundary(0x9F6D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6F; g_cpu.S--; func_C20E();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9F6D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9F70:;
    /* $9F70: A9 */ nes_cpu_instruction_boundary(0x9F70, 2); g_cpu.A = 0x3F; FLAG_NZ(g_cpu.A);
label_9F72:;
    /* $9F72: 8D */ nes_cpu_instruction_boundary(0x9F72, 4); nes_write(0x2006, g_cpu.A);
label_9F75:;
    /* $9F75: A9 */ nes_cpu_instruction_boundary(0x9F75, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9F77:;
    /* $9F77: 8D */ nes_cpu_instruction_boundary(0x9F77, 4); nes_write(0x2006, g_cpu.A);
label_9F7A:;
    /* $9F7A: 8D */ nes_cpu_instruction_boundary(0x9F7A, 4); nes_write(0x2006, g_cpu.A);
label_9F7D:;
    /* $9F7D: 8D */ nes_cpu_instruction_boundary(0x9F7D, 4); nes_write(0x2006, g_cpu.A);
label_9F80:; /* EndGamePaletteWrite_RTS */
    /* $9F80: 60 */ nes_cpu_instruction_boundary(0x9F80, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8AC7_b0(void) { /* StarPaletteSwitch */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8AC7_b0");
#endif
label_8AC7:; /* StarPaletteSwitch */
    /* $8AC7: A5 */ nes_cpu_instruction_boundary(0x8AC7, 3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_8AC9:;
    /* $8AC9: 29 */ nes_cpu_instruction_boundary(0x8AC9, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_8ACB:;
    /* $8ACB: D0 */ nes_cpu_instruction_boundary(0x8ACB, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8AD2; }
label_8ACD:;
    /* $8ACD: AD */ nes_cpu_instruction_boundary(0x8ACD, 4); g_cpu.A = nes_read(0x07A0); FLAG_NZ(g_cpu.A);
label_8AD0:;
    /* $8AD0: F0 */ nes_cpu_instruction_boundary(0x8AD0, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8AD3; }
label_8AD2:; /* StarPaletteSwitch_RTS */
    /* $8AD2: 60 */ nes_cpu_instruction_boundary(0x8AD2, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8AD3:; /* StarPaletteSwitch_checkSuccess */
    /* $8AD3: A9 */ nes_cpu_instruction_boundary(0x8AD3, 2); g_cpu.A = 0x19; FLAG_NZ(g_cpu.A);
label_8AD5:;
    /* $8AD5: 85 */ nes_cpu_instruction_boundary(0x8AD5, 3); nes_write(0x00, g_cpu.A);
label_8AD7:;
    /* $8AD7: A9 */ nes_cpu_instruction_boundary(0x8AD7, 2); g_cpu.A = 0x3F; FLAG_NZ(g_cpu.A);
label_8AD9:;
    /* $8AD9: 85 */ nes_cpu_instruction_boundary(0x8AD9, 3); nes_write(0x01, g_cpu.A);
label_8ADB:;
    /* $8ADB: A5 */ nes_cpu_instruction_boundary(0x8ADB, 3); g_cpu.A = nes_read(0xC3); FLAG_NZ(g_cpu.A);
label_8ADD:;
    /* $8ADD: 29 */ nes_cpu_instruction_boundary(0x8ADD, 2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_8ADF:;
    /* $8ADF: 0A */ nes_cpu_instruction_boundary(0x8ADF, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8AE0:;
    /* $8AE0: A8 */ nes_cpu_instruction_boundary(0x8AE0, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8AE1:;
    /* $8AE1: B9 */ nes_cpu_instruction_boundary(0x8AE1, 4); g_cpu.A = nes_read((0x8AFF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8AE4:;
    /* $8AE4: 85 */ nes_cpu_instruction_boundary(0x8AE4, 3); nes_write(0x02, g_cpu.A);
label_8AE6:;
    /* $8AE6: B9 */ nes_cpu_instruction_boundary(0x8AE6, 4); g_cpu.A = nes_read((0x8B00 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8AE9:;
    /* $8AE9: 85 */ nes_cpu_instruction_boundary(0x8AE9, 3); nes_write(0x03, g_cpu.A);
label_8AEB:;
    /* $8AEB: E6 */ nes_cpu_instruction_boundary(0x8AEB, 5); { uint16_t a=0xC3; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8AED:;
    /* $8AED: 20 */ nes_cpu_instruction_boundary(0x8AED, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xEF; g_cpu.S--; func_C37E();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8AED, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8AF0:;
    /* $8AF0: A9 */ nes_cpu_instruction_boundary(0x8AF0, 2); g_cpu.A = 0x1D; FLAG_NZ(g_cpu.A);
label_8AF2:;
    /* $8AF2: 85 */ nes_cpu_instruction_boundary(0x8AF2, 3); nes_write(0x00, g_cpu.A);
label_8AF4:;
    /* $8AF4: A9 */ nes_cpu_instruction_boundary(0x8AF4, 2); g_cpu.A = 0x3F; FLAG_NZ(g_cpu.A);
label_8AF6:;
    /* $8AF6: 85 */ nes_cpu_instruction_boundary(0x8AF6, 3); nes_write(0x01, g_cpu.A);
label_8AF8:;
    /* $8AF8: C8 */ nes_cpu_instruction_boundary(0x8AF8, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8AF9:;
    /* $8AF9: 20 */ nes_cpu_instruction_boundary(0x8AF9, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFB; g_cpu.S--; func_C2B3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8AF9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8AFC:;
    /* $8AFC: 4C */ nes_cpu_instruction_boundary(0x8AFC, 3); nes_cpu_instruction_boundary(0xC37E, 2); func_C37E(); return;
}

void func_B399_b0(void) { /* SoundEngine_GameIsPaused */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B399_b0");
#endif
label_B399:; /* SoundEngine_GameIsPaused */
    /* $B399: AD */ nes_cpu_instruction_boundary(0xB399, 4); g_cpu.A = nes_read(0x0602); FLAG_NZ(g_cpu.A);
label_B39C:;
    /* $B39C: F0 */ nes_cpu_instruction_boundary(0xB39C, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB38F); return; }
label_B39E:;
    /* $B39E: AD */ nes_cpu_instruction_boundary(0xB39E, 4); g_cpu.A = nes_read(0x0603); FLAG_NZ(g_cpu.A);
label_B3A1:;
    /* $B3A1: C9 */ nes_cpu_instruction_boundary(0xB3A1, 2); { int r=g_cpu.A-0x12; g_cpu.C=(g_cpu.A>=0x12)?1:0; FLAG_NZ(r&0xFF); }
label_B3A3:;
    /* $B3A3: F0 */ nes_cpu_instruction_boundary(0xB3A3, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B3B3; }
label_B3A5:;
    /* $B3A5: 29 */ nes_cpu_instruction_boundary(0xB3A5, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_B3A7:;
    /* $B3A7: C9 */ nes_cpu_instruction_boundary(0xB3A7, 2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_B3A9:;
    /* $B3A9: D0 */ nes_cpu_instruction_boundary(0xB3A9, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B3B0; }
label_B3AB:;
    /* $B3AB: A0 */ nes_cpu_instruction_boundary(0xB3AB, 2); g_cpu.Y = 0x0D; FLAG_NZ(g_cpu.Y);
label_B3AD:;
    /* $B3AD: 20 */ nes_cpu_instruction_boundary(0xB3AD, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAF; g_cpu.S--; func_B368_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3AD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3B0:; /* SoundEngine_GameIsPaused_endIf_A */
    /* $B3B0: EE */ nes_cpu_instruction_boundary(0xB3B0, 6); { uint16_t a=0x0603; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B3B3:; /* SoundEngine_GameIsPaused_RTS */
    /* $B3B3: 60 */ nes_cpu_instruction_boundary(0xB3B3, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B31B_b0_body(int _entry) { /* RunSFXNoiseInitRoutine */
    switch (_entry) {
        case 1: goto label_B322;
    }
label_B31B:; /* RunSFXNoiseInitRoutine */
    /* $B31B: AD */ nes_cpu_instruction_boundary(0xB31B, 4); g_cpu.A = nes_read(0x0680); FLAG_NZ(g_cpu.A);
label_B31E:;
    /* $B31E: A2 */ nes_cpu_instruction_boundary(0xB31E, 2); g_cpu.X = 0x89; FLAG_NZ(g_cpu.X);
label_B320:;
    /* $B320: D0 */ nes_cpu_instruction_boundary(0xB320, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B337; }
label_B322:; /* RunSFXNoiseContRoutine */
    /* $B322: AD */ nes_cpu_instruction_boundary(0xB322, 4); g_cpu.A = nes_read(0x0688); FLAG_NZ(g_cpu.A);
label_B325:;
    /* $B325: A2 */ nes_cpu_instruction_boundary(0xB325, 2); g_cpu.X = 0x8E; FLAG_NZ(g_cpu.X);
label_B327:;
    /* $B327: D0 */ nes_cpu_instruction_boundary(0xB327, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B337; }
label_B329:; /* RunSFXSQ1InitRoutine */
    /* $B329: AD */ nes_cpu_instruction_boundary(0xB329, 4); g_cpu.A = nes_read(0x0681); FLAG_NZ(g_cpu.A);
label_B32C:;
    /* $B32C: A2 */ nes_cpu_instruction_boundary(0xB32C, 2); g_cpu.X = 0x93; FLAG_NZ(g_cpu.X);
label_B32E:;
    /* $B32E: D0 */ nes_cpu_instruction_boundary(0xB32E, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B337; }
label_B330:; /* RunSFXSQ1ContRoutine */
    /* $B330: AD */ nes_cpu_instruction_boundary(0xB330, 4); g_cpu.A = nes_read(0x0689); FLAG_NZ(g_cpu.A);
label_B333:;
    /* $B333: A2 */ nes_cpu_instruction_boundary(0xB333, 2); g_cpu.X = 0x98; FLAG_NZ(g_cpu.X);
label_B335:;
    /* $B335: D0 */ nes_cpu_instruction_boundary(0xB335, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B337; }
label_B337:; /* RunSoundRoutine */
    /* $B337: 20 */ nes_cpu_instruction_boundary(0xB337, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x39; g_cpu.S--; func_B4BD_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB337, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B33A:;
    /* $B33A: 6C */ nes_cpu_instruction_boundary(0xB33A, 5); { uint16_t _jt = nes_read16zp(0xE2); nes_cpu_instruction_boundary(_jt, 2); call_by_address_tail(_jt, -1); return; }
}

void func_B31B_b0(void) { /* RunSFXNoiseInitRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B31B_b0");
#endif
    func_B31B_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B322_b0(void) { /* RunSFXNoiseContRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B322_b0");
#endif
    func_B31B_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B34B_b0(void) { /* RunSFXMultiInitRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B34B_b0");
#endif
label_B34B:; /* RunSFXMultiInitRoutine */
    /* $B34B: AD */ nes_cpu_instruction_boundary(0xB34B, 4); g_cpu.A = nes_read(0x0684); FLAG_NZ(g_cpu.A);
label_B34E:;
    /* $B34E: A2 */ nes_cpu_instruction_boundary(0xB34E, 2); g_cpu.X = 0xA7; FLAG_NZ(g_cpu.X);
label_B350:;
    /* $B350: 20 */ nes_cpu_instruction_boundary(0xB350, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x52; g_cpu.S--; func_B4BD_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB350, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B353:;
    /* $B353: 20 */ nes_cpu_instruction_boundary(0xB353, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x55; g_cpu.S--; func_BC53_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB353, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B356:;
    /* $B356: 20 */ nes_cpu_instruction_boundary(0xB356, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x58; g_cpu.S--; func_BC64_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB356, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B359:;
    /* $B359: 6C */ nes_cpu_instruction_boundary(0xB359, 5); { uint16_t _jt = nes_read16zp(0xE2); nes_cpu_instruction_boundary(_jt, 2); call_by_address_tail(_jt, -1); return; }
}

void func_B33D_b0_body(int _entry) { /* RunSFXTriInitRoutine */
    switch (_entry) {
        case 1: goto label_B344;
    }
label_B33D:; /* RunSFXTriInitRoutine */
    /* $B33D: AD */ nes_cpu_instruction_boundary(0xB33D, 4); g_cpu.A = nes_read(0x0683); FLAG_NZ(g_cpu.A);
label_B340:;
    /* $B340: A2 */ nes_cpu_instruction_boundary(0xB340, 2); g_cpu.X = 0x9D; FLAG_NZ(g_cpu.X);
label_B342:;
    /* $B342: D0 */ nes_cpu_instruction_boundary(0xB342, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB337); return; }
label_B344:; /* RunSFXTriContRoutine */
    /* $B344: AD */ nes_cpu_instruction_boundary(0xB344, 4); g_cpu.A = nes_read(0x068B); FLAG_NZ(g_cpu.A);
label_B347:;
    /* $B347: A2 */ nes_cpu_instruction_boundary(0xB347, 2); g_cpu.X = 0xA2; FLAG_NZ(g_cpu.X);
label_B349:;
    /* $B349: D0 */ nes_cpu_instruction_boundary(0xB349, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB337); return; }
label_B34B:; /* RunSFXMultiInitRoutine */
    /* $B34B: AD */ nes_cpu_instruction_boundary(0xB34B, 4); g_cpu.A = nes_read(0x0684); FLAG_NZ(g_cpu.A);
label_B34E:;
    /* $B34E: A2 */ nes_cpu_instruction_boundary(0xB34E, 2); g_cpu.X = 0xA7; FLAG_NZ(g_cpu.X);
label_B350:;
    /* $B350: 20 */ nes_cpu_instruction_boundary(0xB350, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x52; g_cpu.S--; func_B4BD_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB350, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B353:;
    /* $B353: 20 */ nes_cpu_instruction_boundary(0xB353, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x55; g_cpu.S--; func_BC53_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB353, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B356:;
    /* $B356: 20 */ nes_cpu_instruction_boundary(0xB356, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x58; g_cpu.S--; func_BC64_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB356, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B359:;
    /* $B359: 6C */ nes_cpu_instruction_boundary(0xB359, 5); { uint16_t _jt = nes_read16zp(0xE2); nes_cpu_instruction_boundary(_jt, 2); call_by_address_tail(_jt, -1); return; }
}

void func_B33D_b0(void) { /* RunSFXTriInitRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B33D_b0");
#endif
    func_B33D_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B344_b0(void) { /* RunSFXTriContRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B344_b0");
#endif
    func_B33D_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BC36_b0_body(int _entry) { /* RunMusicLoopRoutine */
    switch (_entry) {
        case 1: goto label_BC3D;
    }
label_BC36:; /* RunMusicLoopRoutine */
    /* $BC36: AD */ nes_cpu_instruction_boundary(0xBC36, 4); g_cpu.A = nes_read(0x065D); FLAG_NZ(g_cpu.A);
label_BC39:;
    /* $BC39: A2 */ nes_cpu_instruction_boundary(0xBC39, 2); g_cpu.X = 0xB6; FLAG_NZ(g_cpu.X);
label_BC3B:;
    /* $BC3B: D0 */ nes_cpu_instruction_boundary(0xBC3B, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BC42; }
label_BC3D:; /* RunMusicInitRoutine */
    /* $BC3D: AD */ nes_cpu_instruction_boundary(0xBC3D, 4); g_cpu.A = nes_read(0x0685); FLAG_NZ(g_cpu.A);
label_BC40:;
    /* $BC40: A2 */ nes_cpu_instruction_boundary(0xBC40, 2); g_cpu.X = 0xB1; FLAG_NZ(g_cpu.X);
label_BC42:; /* RunMusicInitRoutine_Common */
    /* $BC42: 20 */ nes_cpu_instruction_boundary(0xBC42, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x44; g_cpu.S--; func_B4BD_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC42, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC45:;
    /* $BC45: 20 */ nes_cpu_instruction_boundary(0xBC45, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x47; g_cpu.S--; func_BC53_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC45, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC48:;
    /* $BC48: 6C */ nes_cpu_instruction_boundary(0xBC48, 5); { uint16_t _jt = nes_read16zp(0xE2); nes_cpu_instruction_boundary(_jt, 2); call_by_address_tail(_jt, -1); return; }
}

void func_BC36_b0(void) { /* RunMusicLoopRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC36_b0");
#endif
    func_BC36_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BC3D_b0(void) { /* RunMusicInitRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC3D_b0");
#endif
    func_BC36_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B404_b0(void) { /* InitializeSoundAddresses */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B404_b0");
#endif
label_B404:; /* InitializeSoundAddresses */
    /* $B404: 20 */ nes_cpu_instruction_boundary(0xB404, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x06; g_cpu.S--; func_B41D_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB404, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B407:;
    /* $B407: 20 */ nes_cpu_instruction_boundary(0xB407, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x09; g_cpu.S--; func_B43E_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB407, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B40A:; /* GotoClearSpecialAddresses */
    /* $B40A: 20 */ nes_cpu_instruction_boundary(0xB40A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0C; g_cpu.S--; func_B40E_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB40A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B40D:;
    /* $B40D: 60 */ nes_cpu_instruction_boundary(0xB40D, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B41D_b0_body(int _entry) { /* ClearMusicAndSFXAddresses */
    switch (_entry) {
        case 1: goto label_B422;
    }
label_B41D:; /* ClearMusicAndSFXAddresses */
    /* $B41D: A9 */ nes_cpu_instruction_boundary(0xB41D, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B41F:;
    /* $B41F: 8D */ nes_cpu_instruction_boundary(0xB41F, 4); nes_write(0x0653, g_cpu.A);
label_B422:;
    /* $B422: 8D */ nes_cpu_instruction_boundary(0xB422, 4); nes_write(0x0654, g_cpu.A);
label_B425:;
    /* $B425: 8D */ nes_cpu_instruction_boundary(0xB425, 4); nes_write(0x0655, g_cpu.A);
label_B428:;
    /* $B428: 8D */ nes_cpu_instruction_boundary(0xB428, 4); nes_write(0x0607, g_cpu.A);
label_B42B:;
    /* $B42B: 8D */ nes_cpu_instruction_boundary(0xB42B, 4); nes_write(0x0688, g_cpu.A);
label_B42E:;
    /* $B42E: 8D */ nes_cpu_instruction_boundary(0xB42E, 4); nes_write(0x0689, g_cpu.A);
label_B431:;
    /* $B431: 8D */ nes_cpu_instruction_boundary(0xB431, 4); nes_write(0x068A, g_cpu.A);
label_B434:;
    /* $B434: 8D */ nes_cpu_instruction_boundary(0xB434, 4); nes_write(0x068B, g_cpu.A);
label_B437:;
    /* $B437: 8D */ nes_cpu_instruction_boundary(0xB437, 4); nes_write(0x068C, g_cpu.A);
label_B43A:;
    /* $B43A: 8D */ nes_cpu_instruction_boundary(0xB43A, 4); nes_write(0x068D, g_cpu.A);
label_B43D:;
    /* $B43D: 60 */ nes_cpu_instruction_boundary(0xB43D, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B41D_b0(void) { /* ClearMusicAndSFXAddresses */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B41D_b0");
#endif
    func_B41D_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B422_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B422_b0");
#endif
    func_B41D_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B43E_b0(void) { /* ClearSounds */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B43E_b0");
#endif
label_B43E:; /* ClearSounds */
    /* $B43E: A9 */ nes_cpu_instruction_boundary(0xB43E, 2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_B440:;
    /* $B440: 8D */ nes_cpu_instruction_boundary(0xB440, 4); nes_write(0x4000, g_cpu.A);
label_B443:;
    /* $B443: 8D */ nes_cpu_instruction_boundary(0xB443, 4); nes_write(0x4004, g_cpu.A);
label_B446:;
    /* $B446: 8D */ nes_cpu_instruction_boundary(0xB446, 4); nes_write(0x400C, g_cpu.A);
label_B449:;
    /* $B449: A9 */ nes_cpu_instruction_boundary(0xB449, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B44B:;
    /* $B44B: 8D */ nes_cpu_instruction_boundary(0xB44B, 4); nes_write(0x4008, g_cpu.A);
label_B44E:;
    /* $B44E: 8D */ nes_cpu_instruction_boundary(0xB44E, 4); nes_write(0x4011, g_cpu.A);
label_B451:;
    /* $B451: 60 */ nes_cpu_instruction_boundary(0xB451, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B40E_b0(void) { /* ClearSpecialAddresses */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B40E_b0");
#endif
label_B40E:; /* ClearSpecialAddresses */
    /* $B40E: A9 */ nes_cpu_instruction_boundary(0xB40E, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B410:;
    /* $B410: 8D */ nes_cpu_instruction_boundary(0xB410, 4); nes_write(0x062D, g_cpu.A);
label_B413:;
    /* $B413: 8D */ nes_cpu_instruction_boundary(0xB413, 4); nes_write(0x0602, g_cpu.A);
label_B416:;
    /* $B416: 8D */ nes_cpu_instruction_boundary(0xB416, 4); nes_write(0x065D, g_cpu.A);
label_B419:;
    /* $B419: 8D */ nes_cpu_instruction_boundary(0xB419, 4); nes_write(0x062C, g_cpu.A);
label_B41C:;
    /* $B41C: 60 */ nes_cpu_instruction_boundary(0xB41C, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_988A_b0(void) { /* DecSpriteYCoord */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_988A_b0");
#endif
label_988A:; /* DecSpriteYCoord */
    /* $988A: A5 */ nes_cpu_instruction_boundary(0x988A, 3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_988C:;
    /* $988C: C9 */ nes_cpu_instruction_boundary(0x988C, 2); { int r=g_cpu.A-0x1D; g_cpu.C=(g_cpu.A>=0x1D)?1:0; FLAG_NZ(r&0xFF); }
label_988E:;
    /* $988E: B0 */ nes_cpu_instruction_boundary(0x988E, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_98AD; }
label_9890:;
    /* $9890: A5 */ nes_cpu_instruction_boundary(0x9890, 3); g_cpu.A = nes_read(0xC8); FLAG_NZ(g_cpu.A);
label_9892:;
    /* $9892: F0 */ nes_cpu_instruction_boundary(0x9892, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_98AD; }
label_9894:;
    /* $9894: A5 */ nes_cpu_instruction_boundary(0x9894, 3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_9896:;
    /* $9896: 4A */ nes_cpu_instruction_boundary(0x9896, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9897:;
    /* $9897: B0 */ nes_cpu_instruction_boundary(0x9897, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_98AD; }
label_9899:;
    /* $9899: A2 */ nes_cpu_instruction_boundary(0x9899, 2); g_cpu.X = 0x9F; FLAG_NZ(g_cpu.X);
label_989B:; /* DecSpriteYCoord_loop */
    /* $989B: DE */ nes_cpu_instruction_boundary(0x989B, 7); { uint16_t a=(0x6E00 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_989E:;
    /* $989E: DE */ nes_cpu_instruction_boundary(0x989E, 7); { uint16_t a=(0x0260 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_98A1:;
    /* $98A1: CA */ nes_cpu_instruction_boundary(0x98A1, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_98A2:;
    /* $98A2: CA */ nes_cpu_instruction_boundary(0x98A2, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_98A3:;
    /* $98A3: CA */ nes_cpu_instruction_boundary(0x98A3, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_98A4:;
    /* $98A4: CA */ nes_cpu_instruction_boundary(0x98A4, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_98A5:;
    /* $98A5: E0 */ nes_cpu_instruction_boundary(0x98A5, 2); { int r=g_cpu.X-0xFF; g_cpu.C=(g_cpu.X>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_98A7:;
    /* $98A7: D0 */ nes_cpu_instruction_boundary(0x98A7, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0x989B, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_989B;
    }
label_98A9:;
    /* $98A9: A9 */ nes_cpu_instruction_boundary(0x98A9, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_98AB:;
    /* $98AB: 85 */ nes_cpu_instruction_boundary(0x98AB, 3); nes_write(0xC8, g_cpu.A);
label_98AD:; /* DecSpriteYCoord_RTS */
    /* $98AD: 60 */ nes_cpu_instruction_boundary(0x98AD, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8000_b0_body(int _entry) { /* MainTitleRoutine */
    switch (_entry) {
        case 1: goto label_806E;
        case 2: goto label_8068;
    }
label_8000:; /* MainTitleRoutine */
    /* $8000: A5 */ nes_cpu_instruction_boundary(0x8000, 3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_8002:;
    /* $8002: C9 */ nes_cpu_instruction_boundary(0x8002, 2); { int r=g_cpu.A-0x15; g_cpu.C=(g_cpu.A>=0x15)?1:0; FLAG_NZ(r&0xFF); }
label_8004:;
    /* $8004: B0 */ nes_cpu_instruction_boundary(0x8004, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8027; }
label_8006:;
    /* $8006: A5 */ nes_cpu_instruction_boundary(0x8006, 3); g_cpu.A = nes_read(0x12); FLAG_NZ(g_cpu.A);
label_8008:;
    /* $8008: 29 */ nes_cpu_instruction_boundary(0x8008, 2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_800A:;
    /* $800A: F0 */ nes_cpu_instruction_boundary(0x800A, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8022; }
label_800C:;
    /* $800C: A0 */ nes_cpu_instruction_boundary(0x800C, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_800E:;
    /* $800E: 84 */ nes_cpu_instruction_boundary(0x800E, 3); nes_write(0xD1, g_cpu.Y);
label_8010:;
    /* $8010: 84 */ nes_cpu_instruction_boundary(0x8010, 3); nes_write(0xBB, g_cpu.Y);
label_8012:;
    /* $8012: 84 */ nes_cpu_instruction_boundary(0x8012, 3); nes_write(0xB7, g_cpu.Y);
label_8014:;
    /* $8014: 84 */ nes_cpu_instruction_boundary(0x8014, 3); nes_write(0xB8, g_cpu.Y);
label_8016:;
    /* $8016: A5 */ nes_cpu_instruction_boundary(0x8016, 3); g_cpu.A = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_8018:;
    /* $8018: 29 */ nes_cpu_instruction_boundary(0x8018, 2); g_cpu.A &= 0xFC; FLAG_NZ(g_cpu.A);
label_801A:;
    /* $801A: 85 */ nes_cpu_instruction_boundary(0x801A, 3); nes_write(0xFF, g_cpu.A);
label_801C:;
    /* $801C: A9 */ nes_cpu_instruction_boundary(0x801C, 2); g_cpu.A = 0x1B; FLAG_NZ(g_cpu.A);
label_801E:;
    /* $801E: 85 */ nes_cpu_instruction_boundary(0x801E, 3); nes_write(0x1F, g_cpu.A);
label_8020:;
    /* $8020: D0 */ nes_cpu_instruction_boundary(0x8020, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8027; }
label_8022:;
    /* $8022: 20 */ nes_cpu_instruction_boundary(0x8022, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x24; g_cpu.S--; func_C1BC();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8022, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8025:;
    /* $8025: A5 */ nes_cpu_instruction_boundary(0x8025, 3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_8027:;
    /* $8027: 20 */ nes_cpu_instruction_boundary(0x8027, 6); /* inline_dispatch $C27C: 31 entries (bank=0) */
switch(g_cpu.A) {
  case 0: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x71); nes_write(0x000D, 0x80); g_cpu.A = 0x80; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x8071, 57); func_8071_b0(); return;
  case 1: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xD0); nes_write(0x000D, 0x80); g_cpu.A = 0x80; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x80D0, 57); func_80D0_b0(); return;
  case 2: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xF9); nes_write(0x000D, 0x80); g_cpu.A = 0x80; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x80F9, 57); func_80F9_b0(); return;
  case 3: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x2C); nes_write(0x000D, 0x81); g_cpu.A = 0x81; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x812C, 57); func_812C_b0(); return;
  case 4: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x42); nes_write(0x000D, 0x81); g_cpu.A = 0x81; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x8142, 57); func_8142_b0(); return;
  case 5: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x09); nes_write(0x000D, 0x81); g_cpu.A = 0x81; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x8109, 57); func_8109_b0(); return;
  case 6: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x4D); nes_write(0x000D, 0x81); g_cpu.A = 0x81; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x814D, 57); func_814D_b0(); return;
  case 7: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x63); nes_write(0x000D, 0x81); g_cpu.A = 0x81; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x8163, 57); func_8163_b0(); return;
  case 8: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x82); nes_write(0x000D, 0x81); g_cpu.A = 0x81; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x8182, 57); func_8182_b0(); return;
  case 9: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xD1); nes_write(0x000D, 0x81); g_cpu.A = 0x81; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x81D1, 57); func_81D1_b0(); return;
  case 10: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x6E); nes_write(0x000D, 0x80); g_cpu.A = 0x80; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x806E, 57); func_806E_b0(); return;
  case 11: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x6E); nes_write(0x000D, 0x80); g_cpu.A = 0x80; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x806E, 57); func_806E_b0(); return;
  case 12: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x2E); nes_write(0x000D, 0x82); g_cpu.A = 0x82; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x822E, 57); func_822E_b0(); return;
  case 13: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x43); nes_write(0x000D, 0x82); g_cpu.A = 0x82; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x8243, 57); func_8243_b0(); return;
  case 14: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x63); nes_write(0x000D, 0x82); g_cpu.A = 0x82; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x8263, 57); func_8263_b0(); return;
  case 15: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x83); nes_write(0x000D, 0x82); g_cpu.A = 0x82; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x8283, 57); func_8283_b0(); return;
  case 16: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x68); nes_write(0x000D, 0x80); g_cpu.A = 0x80; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x8068, 57); func_8068_b0(); return;
  case 17: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xA3); nes_write(0x000D, 0x82); g_cpu.A = 0x82; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x82A3, 57); func_82A3_b0(); return;
  case 18: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xED); nes_write(0x000D, 0x82); g_cpu.A = 0x82; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x82ED, 57); func_82ED_b0(); return;
  case 19: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xF3); nes_write(0x000D, 0x82); g_cpu.A = 0x82; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x82F3, 57); func_82F3_b0(); return;
  case 20: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xF3); nes_write(0x000D, 0x82); g_cpu.A = 0x82; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x82F3, 57); func_82F3_b0(); return;
  case 21: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xBA); nes_write(0x000D, 0x90); g_cpu.A = 0x90; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x90BA, 57); func_90BA_b0(); return;
  case 22: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xD7); nes_write(0x000D, 0x90); g_cpu.A = 0x90; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x90D7, 57); func_90D7_b0(); return;
  case 23: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x1A); nes_write(0x000D, 0x91); g_cpu.A = 0x91; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x911A, 57); func_911A_b0(); return;
  case 24: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x47); nes_write(0x000D, 0x91); g_cpu.A = 0x91; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x9147, 57); func_9147_b0(); return;
  case 25: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x59); nes_write(0x000D, 0x93); g_cpu.A = 0x93; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x9359, 57); func_9359_b0(); return;
  case 26: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x94); nes_write(0x000D, 0x93); g_cpu.A = 0x93; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x9394, 57); func_9394_b0(); return;
  case 27: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xBA); nes_write(0x000D, 0x90); g_cpu.A = 0x90; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x90BA, 57); func_90BA_b0(); return;
  case 28: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x9E); nes_write(0x000D, 0x93); g_cpu.A = 0x93; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x939E, 57); func_939E_b0(); return;
  case 29: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xA7); nes_write(0x000D, 0x9A); g_cpu.A = 0x9A; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x9AA7, 57); func_9AA7_b0(); return;
  case 30: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xAA); nes_write(0x000D, 0xC4); g_cpu.A = 0xC4; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0xC4AA, 57); func_C4AA(); return;
  default: nes_log_inline_miss(0x8027, g_cpu.A); return;
}
label_8068:; /* ClearSpareMem */
    /* $8068: A9 */ nes_cpu_instruction_boundary(0x8068, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_806A:;
    /* $806A: 85 */ nes_cpu_instruction_boundary(0x806A, 3); nes_write(0xCB, g_cpu.A);
label_806C:;
    /* $806C: 85 */ nes_cpu_instruction_boundary(0x806C, 3); nes_write(0xC9, g_cpu.A);
label_806E:; /* IncTitleRoutine0A */
    /* $806E: E6 */ nes_cpu_instruction_boundary(0x806E, 5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8070:;
    /* $8070: 60 */ nes_cpu_instruction_boundary(0x8070, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8000_b0(void) { /* MainTitleRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8000_b0");
#endif
    func_8000_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_806E_b0(void) { /* IncTitleRoutine0A */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_806E_b0");
#endif
    func_8000_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8068_b0(void) { /* ClearSpareMem */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8068_b0");
#endif
    func_8000_b0_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B38F_b0(void) { /* PauseSFX */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B38F_b0");
#endif
label_B38F:; /* PauseSFX */
    /* $B38F: EE */ nes_cpu_instruction_boundary(0xB38F, 6); { uint16_t a=0x0602; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B392:;
    /* $B392: 20 */ nes_cpu_instruction_boundary(0xB392, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x94; g_cpu.S--; func_B43E_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB392, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B395:;
    /* $B395: 8D */ nes_cpu_instruction_boundary(0xB395, 4); nes_write(0x0603, g_cpu.A);
label_B398:;
    /* $B398: 60 */ nes_cpu_instruction_boundary(0xB398, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B368_b0(void) { /* LoadSFXData */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B368_b0");
#endif
label_B368:; /* LoadSFXData */
    /* $B368: A9 */ nes_cpu_instruction_boundary(0xB368, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B36A:;
    /* $B36A: F0 */ nes_cpu_instruction_boundary(0xB36A, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B376; }
label_B36C:; /* LoadSFXData_Tri */
    /* $B36C: A9 */ nes_cpu_instruction_boundary(0xB36C, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_B36E:;
    /* $B36E: D0 */ nes_cpu_instruction_boundary(0xB36E, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B376; }
label_B370:; /* LoadSFXData_Noise */
    /* $B370: A9 */ nes_cpu_instruction_boundary(0xB370, 2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_B372:;
    /* $B372: D0 */ nes_cpu_instruction_boundary(0xB372, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B376; }
label_B374:; /* LoadSFXData_SQ2 */
    /* $B374: A9 */ nes_cpu_instruction_boundary(0xB374, 2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_B376:; /* LoadSFXData_Common */
    /* $B376: 85 */ nes_cpu_instruction_boundary(0xB376, 3); nes_write(0xE0, g_cpu.A);
label_B378:;
    /* $B378: A9 */ nes_cpu_instruction_boundary(0xB378, 2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_B37A:;
    /* $B37A: 85 */ nes_cpu_instruction_boundary(0xB37A, 3); nes_write(0xE1, g_cpu.A);
label_B37C:;
    /* $B37C: 84 */ nes_cpu_instruction_boundary(0xB37C, 3); nes_write(0xE2, g_cpu.Y);
label_B37E:;
    /* $B37E: A9 */ nes_cpu_instruction_boundary(0xB37E, 2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B380:;
    /* $B380: 85 */ nes_cpu_instruction_boundary(0xB380, 3); nes_write(0xE3, g_cpu.A);
label_B382:;
    /* $B382: A0 */ nes_cpu_instruction_boundary(0xB382, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_B384:; /* LoadSFXData_loop_LoadSFXRegisters */
    /* $B384: B1 */ nes_cpu_instruction_boundary(0xB384, 5); g_cpu.A = nes_read((nes_read16zp(0xE2) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B386:;
    /* $B386: 91 */ nes_cpu_instruction_boundary(0xB386, 6); nes_write((nes_read16zp(0xE0) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B388:;
    /* $B388: C8 */ nes_cpu_instruction_boundary(0xB388, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B389:;
    /* $B389: 98 */ nes_cpu_instruction_boundary(0xB389, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_B38A:;
    /* $B38A: C9 */ nes_cpu_instruction_boundary(0xB38A, 2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_B38C:;
    /* $B38C: D0 */ nes_cpu_instruction_boundary(0xB38C, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xB384, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B384;
    }
label_B38E:;
    /* $B38E: 60 */ nes_cpu_instruction_boundary(0xB38E, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B4BD_b0_body(int _entry) { /* GetSoundRoutine */
    switch (_entry) {
        case 1: goto label_B4EE;
        case 2: goto label_B4EA;
    }
label_B4BD:; /* GetSoundRoutine */
    /* $B4BD: 8D */ nes_cpu_instruction_boundary(0xB4BD, 4); nes_write(0x064D, g_cpu.A);
label_B4C0:;
    /* $B4C0: 86 */ nes_cpu_instruction_boundary(0xB4C0, 3); nes_write(0xE4, g_cpu.X);
label_B4C2:;
    /* $B4C2: A0 */ nes_cpu_instruction_boundary(0xB4C2, 2); g_cpu.Y = 0xB2; FLAG_NZ(g_cpu.Y);
label_B4C4:;
    /* $B4C4: 84 */ nes_cpu_instruction_boundary(0xB4C4, 3); nes_write(0xE5, g_cpu.Y);
label_B4C6:;
    /* $B4C6: A0 */ nes_cpu_instruction_boundary(0xB4C6, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_B4C8:; /* GetSoundRoutine_loop_A */
    /* $B4C8: B1 */ nes_cpu_instruction_boundary(0xB4C8, 5); g_cpu.A = nes_read((nes_read16zp(0xE4) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B4CA:;
    /* $B4CA: 99 */ nes_cpu_instruction_boundary(0xB4CA, 5); nes_write((0x00E0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B4CD:;
    /* $B4CD: C8 */ nes_cpu_instruction_boundary(0xB4CD, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B4CE:;
    /* $B4CE: 98 */ nes_cpu_instruction_boundary(0xB4CE, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_B4CF:;
    /* $B4CF: C9 */ nes_cpu_instruction_boundary(0xB4CF, 2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_B4D1:;
    /* $B4D1: D0 */ nes_cpu_instruction_boundary(0xB4D1, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xB4C8, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B4C8;
    }
label_B4D3:;
    /* $B4D3: B1 */ nes_cpu_instruction_boundary(0xB4D3, 5); g_cpu.A = nes_read((nes_read16zp(0xE4) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B4D5:;
    /* $B4D5: 8D */ nes_cpu_instruction_boundary(0xB4D5, 4); nes_write(0x065C, g_cpu.A);
label_B4D8:;
    /* $B4D8: A0 */ nes_cpu_instruction_boundary(0xB4D8, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_B4DA:;
    /* $B4DA: AD */ nes_cpu_instruction_boundary(0xB4DA, 4); g_cpu.A = nes_read(0x064D); FLAG_NZ(g_cpu.A);
label_B4DD:;
    /* $B4DD: 48 */ nes_cpu_instruction_boundary(0xB4DD, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B4DE:; /* GetSoundRoutine_loop_B */
    /* $B4DE: 0E */ nes_cpu_instruction_boundary(0xB4DE, 6); { uint16_t a=0x064D; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B4E1:;
    /* $B4E1: B0 */ nes_cpu_instruction_boundary(0xB4E1, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B4EF; }
label_B4E3:;
    /* $B4E3: C8 */ nes_cpu_instruction_boundary(0xB4E3, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B4E4:;
    /* $B4E4: C8 */ nes_cpu_instruction_boundary(0xB4E4, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B4E5:;
    /* $B4E5: 98 */ nes_cpu_instruction_boundary(0xB4E5, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_B4E6:;
    /* $B4E6: C9 */ nes_cpu_instruction_boundary(0xB4E6, 2); { int r=g_cpu.A-0x10; g_cpu.C=(g_cpu.A>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_B4E8:;
    /* $B4E8: D0 */ nes_cpu_instruction_boundary(0xB4E8, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xB4DE, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B4DE;
    }
label_B4EA:; /* GetSoundRoutine_RestoreSFXFlags */
    /* $B4EA: 68 */ nes_cpu_instruction_boundary(0xB4EA, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_B4EB:;
    /* $B4EB: 8D */ nes_cpu_instruction_boundary(0xB4EB, 4); nes_write(0x064D, g_cpu.A);
label_B4EE:; /* GetSoundRoutine_RTS */
    /* $B4EE: 60 */ nes_cpu_instruction_boundary(0xB4EE, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B4EF:; /* GetSoundRoutine_SoundFlagFound */
    /* $B4EF: B1 */ nes_cpu_instruction_boundary(0xB4EF, 5); g_cpu.A = nes_read((nes_read16zp(0xE0) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B4F1:;
    /* $B4F1: 85 */ nes_cpu_instruction_boundary(0xB4F1, 3); nes_write(0xE2, g_cpu.A);
label_B4F3:;
    /* $B4F3: C8 */ nes_cpu_instruction_boundary(0xB4F3, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B4F4:;
    /* $B4F4: B1 */ nes_cpu_instruction_boundary(0xB4F4, 5); g_cpu.A = nes_read((nes_read16zp(0xE0) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B4F6:;
    /* $B4F6: 85 */ nes_cpu_instruction_boundary(0xB4F6, 3); nes_write(0xE3, g_cpu.A);
label_B4F8:;
    /* $B4F8: 4C */ nes_cpu_instruction_boundary(0xB4F8, 3); nes_cpu_instruction_boundary(0xB4EA, 2);
    goto label_B4EA;
}

void func_B4BD_b0(void) { /* GetSoundRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4BD_b0");
#endif
    func_B4BD_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B4EE_b0(void) { /* GetSoundRoutine_RTS */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4EE_b0");
#endif
    func_B4BD_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B4EA_b0(void) { /* GetSoundRoutine_RestoreSFXFlags */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4EA_b0");
#endif
    func_B4BD_b0_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BC53_b0(void) { /* FindMusicInitIndex */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC53_b0");
#endif
label_BC53:; /* FindMusicInitIndex */
    /* $BC53: A9 */ nes_cpu_instruction_boundary(0xBC53, 2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_BC55:;
    /* $BC55: 8D */ nes_cpu_instruction_boundary(0xBC55, 4); nes_write(0x065E, g_cpu.A);
label_BC58:;
    /* $BC58: AD */ nes_cpu_instruction_boundary(0xBC58, 4); g_cpu.A = nes_read(0x064D); FLAG_NZ(g_cpu.A);
label_BC5B:;
    /* $BC5B: F0 */ nes_cpu_instruction_boundary(0xBC5B, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BC63; }
label_BC5D:; /* FindMusicInitIndex_loop */
    /* $BC5D: EE */ nes_cpu_instruction_boundary(0xBC5D, 6); { uint16_t a=0x065E; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BC60:;
    /* $BC60: 0A */ nes_cpu_instruction_boundary(0xBC60, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_BC61:;
    /* $BC61: 90 */ nes_cpu_instruction_boundary(0xBC61, 2); if (!g_cpu.C) {
    nes_cpu_instruction_boundary(0xBC5D, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BC5D;
    }
label_BC63:; /* FindMusicInitIndex_RTS */
    /* $BC63: 60 */ nes_cpu_instruction_boundary(0xBC63, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BC64_b0(void) { /* MusicInitIndexAdd8 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC64_b0");
#endif
label_BC64:; /* MusicInitIndexAdd8 */
    /* $BC64: AD */ nes_cpu_instruction_boundary(0xBC64, 4); g_cpu.A = nes_read(0x065E); FLAG_NZ(g_cpu.A);
label_BC67:;
    /* $BC67: 18 */ nes_cpu_instruction_boundary(0xBC67, 2); g_cpu.C = 0;
label_BC68:;
    /* $BC68: 69 */ nes_cpu_instruction_boundary(0xBC68, 2); { uint16_t r = g_cpu.A + 0x08 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x08); g_cpu.A=r&0xFF; }
label_BC6A:;
    /* $BC6A: 8D */ nes_cpu_instruction_boundary(0xBC6A, 4); nes_write(0x065E, g_cpu.A);
label_BC6D:;
    /* $BC6D: 60 */ nes_cpu_instruction_boundary(0xBC6D, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B337_b0(void) { /* RunSoundRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B337_b0");
#endif
label_B337:; /* RunSoundRoutine */
    /* $B337: 20 */ nes_cpu_instruction_boundary(0xB337, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x39; g_cpu.S--; func_B4BD_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB337, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B33A:;
    /* $B33A: 6C */ nes_cpu_instruction_boundary(0xB33A, 5); { uint16_t _jt = nes_read16zp(0xE2); nes_cpu_instruction_boundary(_jt, 2); call_by_address_tail(_jt, -1); return; }
}

void func_8071_b0_body(int _entry) { /* InitializeAfterReset */
    switch (_entry) {
        case 1: goto label_80AC;
        case 2: goto label_809E;
    }
label_8071:; /* InitializeAfterReset */
    /* $8071: A0 */ nes_cpu_instruction_boundary(0x8071, 2); g_cpu.Y = 0x02; FLAG_NZ(g_cpu.Y);
label_8073:;
    /* $8073: 84 */ nes_cpu_instruction_boundary(0x8073, 3); nes_write(0xCF, g_cpu.Y);
label_8075:;
    /* $8075: 84 */ nes_cpu_instruction_boundary(0x8075, 3); nes_write(0xCC, g_cpu.Y);
label_8077:;
    /* $8077: 88 */ nes_cpu_instruction_boundary(0x8077, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8078:;
    /* $8078: 84 */ nes_cpu_instruction_boundary(0x8078, 3); nes_write(0xCE, g_cpu.Y);
label_807A:;
    /* $807A: 84 */ nes_cpu_instruction_boundary(0x807A, 3); nes_write(0xD1, g_cpu.Y);
label_807C:;
    /* $807C: 88 */ nes_cpu_instruction_boundary(0x807C, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_807D:;
    /* $807D: 84 */ nes_cpu_instruction_boundary(0x807D, 3); nes_write(0xD0, g_cpu.Y);
label_807F:;
    /* $807F: 84 */ nes_cpu_instruction_boundary(0x807F, 3); nes_write(0xCD, g_cpu.Y);
label_8081:;
    /* $8081: 84 */ nes_cpu_instruction_boundary(0x8081, 3); nes_write(0xD3, g_cpu.Y);
label_8083:;
    /* $8083: 8C */ nes_cpu_instruction_boundary(0x8083, 4); nes_write(0x69B2, g_cpu.Y);
label_8086:;
    /* $8086: 84 */ nes_cpu_instruction_boundary(0x8086, 3); nes_write(0xCB, g_cpu.Y);
label_8088:;
    /* $8088: 84 */ nes_cpu_instruction_boundary(0x8088, 3); nes_write(0xC9, g_cpu.Y);
label_808A:;
    /* $808A: A9 */ nes_cpu_instruction_boundary(0x808A, 2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_808C:;
    /* $808C: 85 */ nes_cpu_instruction_boundary(0x808C, 3); nes_write(0xD8, g_cpu.A);
label_808E:;
    /* $808E: 84 */ nes_cpu_instruction_boundary(0x808E, 3); nes_write(0xB7, g_cpu.Y);
label_8090:;
    /* $8090: 84 */ nes_cpu_instruction_boundary(0x8090, 3); nes_write(0xB8, g_cpu.Y);
label_8092:;
    /* $8092: 84 */ nes_cpu_instruction_boundary(0x8092, 3); nes_write(0xC1, g_cpu.Y);
label_8094:;
    /* $8094: 84 */ nes_cpu_instruction_boundary(0x8094, 3); nes_write(0xC2, g_cpu.Y);
label_8096:;
    /* $8096: 84 */ nes_cpu_instruction_boundary(0x8096, 3); nes_write(0xC3, g_cpu.Y);
label_8098:;
    /* $8098: 84 */ nes_cpu_instruction_boundary(0x8098, 3); nes_write(0xC4, g_cpu.Y);
label_809A:;
    /* $809A: 84 */ nes_cpu_instruction_boundary(0x809A, 3); nes_write(0x00, g_cpu.Y);
label_809C:;
    /* $809C: A2 */ nes_cpu_instruction_boundary(0x809C, 2); g_cpu.X = 0x60; FLAG_NZ(g_cpu.X);
label_809E:; /* InitializeAfterReset_loop_A */
    /* $809E: 86 */ nes_cpu_instruction_boundary(0x809E, 3); nes_write(0x01, g_cpu.X);
label_80A0:;
    /* $80A0: 8A */ nes_cpu_instruction_boundary(0x80A0, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_80A1:;
    /* $80A1: 29 */ nes_cpu_instruction_boundary(0x80A1, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_80A3:;
    /* $80A3: 0A */ nes_cpu_instruction_boundary(0x80A3, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_80A4:;
    /* $80A4: A8 */ nes_cpu_instruction_boundary(0x80A4, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_80A5:;
    /* $80A5: 84 */ nes_cpu_instruction_boundary(0x80A5, 3); nes_write(0x02, g_cpu.Y);
label_80A7:;
    /* $80A7: B9 */ nes_cpu_instruction_boundary(0x80A7, 4); g_cpu.A = nes_read((0x80C8 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_80AA:;
    /* $80AA: A0 */ nes_cpu_instruction_boundary(0x80AA, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_80AC:; /* InitializeAfterReset_loop_B */
    /* $80AC: 91 */ nes_cpu_instruction_boundary(0x80AC, 6); nes_write((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_80AE:;
    /* $80AE: C8 */ nes_cpu_instruction_boundary(0x80AE, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_80AF:;
    /* $80AF: F0 */ nes_cpu_instruction_boundary(0x80AF, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_80BE; }
label_80B1:;
    /* $80B1: C0 */ nes_cpu_instruction_boundary(0x80B1, 2); { int r=g_cpu.Y-0x40; g_cpu.C=(g_cpu.Y>=0x40)?1:0; FLAG_NZ(r&0xFF); }
label_80B3:;
    /* $80B3: D0 */ nes_cpu_instruction_boundary(0x80B3, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0x80AC, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_80AC;
    }
label_80B5:;
    /* $80B5: A4 */ nes_cpu_instruction_boundary(0x80B5, 3); g_cpu.Y = nes_read(0x02); FLAG_NZ(g_cpu.Y);
label_80B7:;
    /* $80B7: B9 */ nes_cpu_instruction_boundary(0x80B7, 4); g_cpu.A = nes_read((0x80C9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_80BA:;
    /* $80BA: A0 */ nes_cpu_instruction_boundary(0x80BA, 2); g_cpu.Y = 0x40; FLAG_NZ(g_cpu.Y);
label_80BC:;
    /* $80BC: 10 */ nes_cpu_instruction_boundary(0x80BC, 2); if (!g_cpu.N) {
    nes_cpu_instruction_boundary(0x80AC, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_80AC;
    }
label_80BE:; /* InitializeAfterReset_exitloop_B */
    /* $80BE: E8 */ nes_cpu_instruction_boundary(0x80BE, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_80BF:;
    /* $80BF: E0 */ nes_cpu_instruction_boundary(0x80BF, 2); { int r=g_cpu.X-0x68; g_cpu.C=(g_cpu.X>=0x68)?1:0; FLAG_NZ(r&0xFF); }
label_80C1:;
    /* $80C1: D0 */ nes_cpu_instruction_boundary(0x80C1, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0x809E, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_809E;
    }
label_80C3:;
    /* $80C3: E6 */ nes_cpu_instruction_boundary(0x80C3, 5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_80C5:;
    /* $80C5: 4C */ nes_cpu_instruction_boundary(0x80C5, 3); nes_cpu_instruction_boundary(0x98AE, 2); func_98AE_b0(); return;
}

void func_8071_b0(void) { /* InitializeAfterReset */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8071_b0");
#endif
    func_8071_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_80AC_b0(void) { /* InitializeAfterReset_loop_B */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80AC_b0");
#endif
    func_8071_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_809E_b0(void) { /* InitializeAfterReset_loop_A */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_809E_b0");
#endif
    func_8071_b0_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_80D0_b0(void) { /* DrawIntroBackground */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80D0_b0");
#endif
label_80D0:; /* DrawIntroBackground */
    /* $80D0: A9 */ nes_cpu_instruction_boundary(0x80D0, 2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_80D2:;
    /* $80D2: 85 */ nes_cpu_instruction_boundary(0x80D2, 3); nes_write(0xF0, g_cpu.A);
label_80D4:;
    /* $80D4: 8D */ nes_cpu_instruction_boundary(0x80D4, 4); nes_write(0x0684, g_cpu.A);
label_80D7:;
    /* $80D7: 20 */ nes_cpu_instruction_boundary(0x80D7, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD9; g_cpu.S--; func_C439();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x80D7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_80DA:;
    /* $80DA: 20 */ nes_cpu_instruction_boundary(0x80DA, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDC; g_cpu.S--; func_C158();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x80DA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_80DD:;
    /* $80DD: A2 */ nes_cpu_instruction_boundary(0x80DD, 2); g_cpu.X = 0xF4; FLAG_NZ(g_cpu.X);
label_80DF:;
    /* $80DF: A0 */ nes_cpu_instruction_boundary(0x80DF, 2); g_cpu.Y = 0x82; FLAG_NZ(g_cpu.Y);
label_80E1:;
    /* $80E1: 20 */ nes_cpu_instruction_boundary(0x80E1, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE3; g_cpu.S--; func_C20E();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x80E1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_80E4:;
    /* $80E4: A9 */ nes_cpu_instruction_boundary(0x80E4, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_80E6:;
    /* $80E6: 85 */ nes_cpu_instruction_boundary(0x80E6, 3); nes_write(0x1C, g_cpu.A);
label_80E8:;
    /* $80E8: 85 */ nes_cpu_instruction_boundary(0x80E8, 3); nes_write(0xC5, g_cpu.A);
label_80EA:;
    /* $80EA: A5 */ nes_cpu_instruction_boundary(0x80EA, 3); g_cpu.A = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_80EC:;
    /* $80EC: 29 */ nes_cpu_instruction_boundary(0x80EC, 2); g_cpu.A &= 0xFC; FLAG_NZ(g_cpu.A);
label_80EE:;
    /* $80EE: 85 */ nes_cpu_instruction_boundary(0x80EE, 3); nes_write(0xFF, g_cpu.A);
label_80F0:;
    /* $80F0: E6 */ nes_cpu_instruction_boundary(0x80F0, 5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_80F2:;
    /* $80F2: A9 */ nes_cpu_instruction_boundary(0x80F2, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_80F4:;
    /* $80F4: 85 */ nes_cpu_instruction_boundary(0x80F4, 3); nes_write(0xD7, g_cpu.A);
label_80F6:;
    /* $80F6: 4C */ nes_cpu_instruction_boundary(0x80F6, 3); nes_cpu_instruction_boundary(0xC447, 2); func_C447(); return;
}

void func_80F9_b0(void) { /* FadeInDelay */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80F9_b0");
#endif
label_80F9:; /* FadeInDelay */
    /* $80F9: A5 */ nes_cpu_instruction_boundary(0x80F9, 3); g_cpu.A = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_80FB:;
    /* $80FB: 29 */ nes_cpu_instruction_boundary(0x80FB, 2); g_cpu.A &= 0xFE; FLAG_NZ(g_cpu.A);
label_80FD:;
    /* $80FD: 85 */ nes_cpu_instruction_boundary(0x80FD, 3); nes_write(0xFF, g_cpu.A);
label_80FF:;
    /* $80FF: A9 */ nes_cpu_instruction_boundary(0x80FF, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_8101:;
    /* $8101: 85 */ nes_cpu_instruction_boundary(0x8101, 3); nes_write(0x2C, g_cpu.A);
label_8103:;
    /* $8103: 4A */ nes_cpu_instruction_boundary(0x8103, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8104:;
    /* $8104: 85 */ nes_cpu_instruction_boundary(0x8104, 3); nes_write(0xC1, g_cpu.A);
label_8106:;
    /* $8106: E6 */ nes_cpu_instruction_boundary(0x8106, 5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8108:;
    /* $8108: 60 */ nes_cpu_instruction_boundary(0x8108, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_812C_b0_body(int _entry) { /* METROIDFadeIn */
    switch (_entry) {
        case 1: goto label_8141;
    }
label_812C:; /* METROIDFadeIn */
    /* $812C: A5 */ nes_cpu_instruction_boundary(0x812C, 3); g_cpu.A = nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_812E:;
    /* $812E: D0 */ nes_cpu_instruction_boundary(0x812E, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8141; }
label_8130:;
    /* $8130: A5 */ nes_cpu_instruction_boundary(0x8130, 3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_8132:;
    /* $8132: 29 */ nes_cpu_instruction_boundary(0x8132, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_8134:;
    /* $8134: D0 */ nes_cpu_instruction_boundary(0x8134, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8141; }
label_8136:;
    /* $8136: 20 */ nes_cpu_instruction_boundary(0x8136, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x38; g_cpu.S--; func_8A8C_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8136, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8139:;
    /* $8139: D0 */ nes_cpu_instruction_boundary(0x8139, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8141; }
label_813B:;
    /* $813B: A9 */ nes_cpu_instruction_boundary(0x813B, 2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_813D:;
    /* $813D: 85 */ nes_cpu_instruction_boundary(0x813D, 3); nes_write(0x2C, g_cpu.A);
label_813F:;
    /* $813F: E6 */ nes_cpu_instruction_boundary(0x813F, 5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8141:;
    /* $8141: 60 */ nes_cpu_instruction_boundary(0x8141, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_812C_b0(void) { /* METROIDFadeIn */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_812C_b0");
#endif
    func_812C_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8141_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8141_b0");
#endif
    func_812C_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8142_b0(void) { /* LoadFlashTimer */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8142_b0");
#endif
label_8142:; /* LoadFlashTimer */
    /* $8142: A5 */ nes_cpu_instruction_boundary(0x8142, 3); g_cpu.A = nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_8144:;
    /* $8144: D0 */ nes_cpu_instruction_boundary(0x8144, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0x8141); return; }
label_8146:;
    /* $8146: A9 */ nes_cpu_instruction_boundary(0x8146, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_8148:;
    /* $8148: 85 */ nes_cpu_instruction_boundary(0x8148, 3); nes_write(0x2C, g_cpu.A);
label_814A:;
    /* $814A: E6 */ nes_cpu_instruction_boundary(0x814A, 5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_814C:;
    /* $814C: 60 */ nes_cpu_instruction_boundary(0x814C, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8109_b0(void) { /* FlashEffect */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8109_b0");
#endif
label_8109:; /* FlashEffect */
    /* $8109: A5 */ nes_cpu_instruction_boundary(0x8109, 3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_810B:;
    /* $810B: 29 */ nes_cpu_instruction_boundary(0x810B, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_810D:;
    /* $810D: D0 */ nes_cpu_instruction_boundary(0x810D, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_812B; }
label_810F:;
    /* $810F: A5 */ nes_cpu_instruction_boundary(0x810F, 3); g_cpu.A = nes_read(0xC1); FLAG_NZ(g_cpu.A);
label_8111:;
    /* $8111: 29 */ nes_cpu_instruction_boundary(0x8111, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_8113:;
    /* $8113: 85 */ nes_cpu_instruction_boundary(0x8113, 3); nes_write(0xC1, g_cpu.A);
label_8115:;
    /* $8115: 20 */ nes_cpu_instruction_boundary(0x8115, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x17; g_cpu.S--; func_8A8C_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8115, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8118:;
    /* $8118: A5 */ nes_cpu_instruction_boundary(0x8118, 3); g_cpu.A = nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_811A:;
    /* $811A: D0 */ nes_cpu_instruction_boundary(0x811A, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_812B; }
label_811C:;
    /* $811C: A5 */ nes_cpu_instruction_boundary(0x811C, 3); g_cpu.A = nes_read(0xC1); FLAG_NZ(g_cpu.A);
label_811E:;
    /* $811E: C9 */ nes_cpu_instruction_boundary(0x811E, 2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_8120:;
    /* $8120: D0 */ nes_cpu_instruction_boundary(0x8120, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_812B; }
label_8122:;
    /* $8122: E6 */ nes_cpu_instruction_boundary(0x8122, 5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8124:;
    /* $8124: 20 */ nes_cpu_instruction_boundary(0x8124, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x26; g_cpu.S--; func_87AB_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8124, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8127:;
    /* $8127: A9 */ nes_cpu_instruction_boundary(0x8127, 2); g_cpu.A = 0x18; FLAG_NZ(g_cpu.A);
label_8129:;
    /* $8129: 85 */ nes_cpu_instruction_boundary(0x8129, 3); nes_write(0x2C, g_cpu.A);
label_812B:; /* FlashEffect_RTS */
    /* $812B: 60 */ nes_cpu_instruction_boundary(0x812B, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_814D_b0(void) { /* METROIDSparkle */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_814D_b0");
#endif
label_814D:; /* METROIDSparkle */
    /* $814D: A5 */ nes_cpu_instruction_boundary(0x814D, 3); g_cpu.A = nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_814F:;
    /* $814F: D0 */ nes_cpu_instruction_boundary(0x814F, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8162; }
label_8151:;
    /* $8151: AD */ nes_cpu_instruction_boundary(0x8151, 4); g_cpu.A = nes_read(0x6EAA); FLAG_NZ(g_cpu.A);
label_8154:;
    /* $8154: 2D */ nes_cpu_instruction_boundary(0x8154, 4); g_cpu.A &= nes_read(0x6EBA); FLAG_NZ(g_cpu.A);
label_8157:;
    /* $8157: C9 */ nes_cpu_instruction_boundary(0x8157, 2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_8159:;
    /* $8159: D0 */ nes_cpu_instruction_boundary(0x8159, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_815F; }
label_815B:;
    /* $815B: E6 */ nes_cpu_instruction_boundary(0x815B, 5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_815D:;
    /* $815D: D0 */ nes_cpu_instruction_boundary(0x815D, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8162; }
label_815F:; /* METROIDSparkle_endIf_A */
    /* $815F: 20 */ nes_cpu_instruction_boundary(0x815F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x61; g_cpu.S--; func_87CF_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x815F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8162:; /* METROIDSparkle_RTS */
    /* $8162: 60 */ nes_cpu_instruction_boundary(0x8162, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8163_b0(void) { /* METROIDFadeOut */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8163_b0");
#endif
label_8163:; /* METROIDFadeOut */
    /* $8163: A5 */ nes_cpu_instruction_boundary(0x8163, 3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_8165:;
    /* $8165: 29 */ nes_cpu_instruction_boundary(0x8165, 2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_8167:;
    /* $8167: D0 */ nes_cpu_instruction_boundary(0x8167, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8181; }
label_8169:;
    /* $8169: A5 */ nes_cpu_instruction_boundary(0x8169, 3); g_cpu.A = nes_read(0xC4); FLAG_NZ(g_cpu.A);
label_816B:;
    /* $816B: C9 */ nes_cpu_instruction_boundary(0x816B, 2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_816D:;
    /* $816D: D0 */ nes_cpu_instruction_boundary(0x816D, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_817E; }
label_816F:;
    /* $816F: 20 */ nes_cpu_instruction_boundary(0x816F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x71; g_cpu.S--; func_8897_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x816F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8172:;
    /* $8172: A9 */ nes_cpu_instruction_boundary(0x8172, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_8174:;
    /* $8174: 85 */ nes_cpu_instruction_boundary(0x8174, 3); nes_write(0x2C, g_cpu.A);
label_8176:;
    /* $8176: 85 */ nes_cpu_instruction_boundary(0x8176, 3); nes_write(0xBC, g_cpu.A);
label_8178:;
    /* $8178: A9 */ nes_cpu_instruction_boundary(0x8178, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_817A:;
    /* $817A: 85 */ nes_cpu_instruction_boundary(0x817A, 3); nes_write(0xBF, g_cpu.A);
label_817C:;
    /* $817C: E6 */ nes_cpu_instruction_boundary(0x817C, 5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_817E:; /* METROIDFadeOut_endIf_A */
    /* $817E: 20 */ nes_cpu_instruction_boundary(0x817E, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; func_8B5F_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x817E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8181:; /* METROIDFadeOut_RTS */
    /* $8181: 60 */ nes_cpu_instruction_boundary(0x8181, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_81D1_b0(void) { /* MoreCrosshairs */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81D1_b0");
#endif
label_81D1:; /* MoreCrosshairs */
    /* $81D1: A5 */ nes_cpu_instruction_boundary(0x81D1, 3); g_cpu.A = nes_read(0xC0); FLAG_NZ(g_cpu.A);
label_81D3:;
    /* $81D3: F0 */ nes_cpu_instruction_boundary(0x81D3, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_81DB; }
label_81D5:;
    /* $81D5: 20 */ nes_cpu_instruction_boundary(0x81D5, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD7; g_cpu.S--; func_8976_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x81D5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_81D8:;
    /* $81D8: 4C */ nes_cpu_instruction_boundary(0x81D8, 3); nes_cpu_instruction_boundary(0x8AA7, 2); func_8AA7_b0(); return;
label_81DB:; /* MoreCrosshairs_endIf_A */
    /* $81DB: E6 */ nes_cpu_instruction_boundary(0x81DB, 5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_81DD:;
    /* $81DD: A9 */ nes_cpu_instruction_boundary(0x81DD, 2); g_cpu.A = 0x60; FLAG_NZ(g_cpu.A);
label_81DF:;
    /* $81DF: 8D */ nes_cpu_instruction_boundary(0x81DF, 4); nes_write(0x030D, g_cpu.A);
label_81E2:;
    /* $81E2: A9 */ nes_cpu_instruction_boundary(0x81E2, 2); g_cpu.A = 0x7C; FLAG_NZ(g_cpu.A);
label_81E4:;
    /* $81E4: 8D */ nes_cpu_instruction_boundary(0x81E4, 4); nes_write(0x030E, g_cpu.A);
label_81E7:;
    /* $81E7: AD */ nes_cpu_instruction_boundary(0x81E7, 4); g_cpu.A = nes_read(0x0305); FLAG_NZ(g_cpu.A);
label_81EA:;
    /* $81EA: 8D */ nes_cpu_instruction_boundary(0x81EA, 4); nes_write(0x0306, g_cpu.A);
label_81ED:;
    /* $81ED: 60 */ nes_cpu_instruction_boundary(0x81ED, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_822E_b0(void) { /* ChangeIntroNameTable */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_822E_b0");
#endif
label_822E:; /* ChangeIntroNameTable */
    /* $822E: A5 */ nes_cpu_instruction_boundary(0x822E, 3); g_cpu.A = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_8230:;
    /* $8230: 09 */ nes_cpu_instruction_boundary(0x8230, 2); g_cpu.A |= 0x01; FLAG_NZ(g_cpu.A);
label_8232:;
    /* $8232: 85 */ nes_cpu_instruction_boundary(0x8232, 3); nes_write(0xFF, g_cpu.A);
label_8234:;
    /* $8234: E6 */ nes_cpu_instruction_boundary(0x8234, 5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8236:;
    /* $8236: A9 */ nes_cpu_instruction_boundary(0x8236, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_8238:;
    /* $8238: 85 */ nes_cpu_instruction_boundary(0x8238, 3); nes_write(0x2C, g_cpu.A);
label_823A:;
    /* $823A: A9 */ nes_cpu_instruction_boundary(0x823A, 2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_823C:;
    /* $823C: 85 */ nes_cpu_instruction_boundary(0x823C, 3); nes_write(0xC4, g_cpu.A);
label_823E:;
    /* $823E: A9 */ nes_cpu_instruction_boundary(0x823E, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8240:;
    /* $8240: 85 */ nes_cpu_instruction_boundary(0x8240, 3); nes_write(0xC9, g_cpu.A);
label_8242:;
    /* $8242: 60 */ nes_cpu_instruction_boundary(0x8242, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8243_b0(void) { /* MessageFadeIn */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8243_b0");
#endif
label_8243:; /* MessageFadeIn */
    /* $8243: A5 */ nes_cpu_instruction_boundary(0x8243, 3); g_cpu.A = nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_8245:;
    /* $8245: D0 */ nes_cpu_instruction_boundary(0x8245, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8262; }
label_8247:;
    /* $8247: A5 */ nes_cpu_instruction_boundary(0x8247, 3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_8249:;
    /* $8249: 29 */ nes_cpu_instruction_boundary(0x8249, 2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_824B:;
    /* $824B: D0 */ nes_cpu_instruction_boundary(0x824B, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8262; }
label_824D:;
    /* $824D: A5 */ nes_cpu_instruction_boundary(0x824D, 3); g_cpu.A = nes_read(0xC4); FLAG_NZ(g_cpu.A);
label_824F:;
    /* $824F: C9 */ nes_cpu_instruction_boundary(0x824F, 2); { int r=g_cpu.A-0x0B; g_cpu.C=(g_cpu.A>=0x0B)?1:0; FLAG_NZ(r&0xFF); }
label_8251:;
    /* $8251: D0 */ nes_cpu_instruction_boundary(0x8251, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_825F; }
label_8253:;
    /* $8253: A9 */ nes_cpu_instruction_boundary(0x8253, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8255:;
    /* $8255: 85 */ nes_cpu_instruction_boundary(0x8255, 3); nes_write(0xC4, g_cpu.A);
label_8257:;
    /* $8257: A9 */ nes_cpu_instruction_boundary(0x8257, 2); g_cpu.A = 0x30; FLAG_NZ(g_cpu.A);
label_8259:;
    /* $8259: 85 */ nes_cpu_instruction_boundary(0x8259, 3); nes_write(0x2C, g_cpu.A);
label_825B:;
    /* $825B: E6 */ nes_cpu_instruction_boundary(0x825B, 5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_825D:;
    /* $825D: D0 */ nes_cpu_instruction_boundary(0x825D, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8262; }
label_825F:; /* MessageFadeIn_endIf_A */
    /* $825F: 20 */ nes_cpu_instruction_boundary(0x825F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x61; g_cpu.S--; func_8B5F_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x825F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8262:; /* MessageFadeIn_RTS */
    /* $8262: 60 */ nes_cpu_instruction_boundary(0x8262, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8263_b0(void) { /* MessageFadeOut */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8263_b0");
#endif
label_8263:; /* MessageFadeOut */
    /* $8263: A5 */ nes_cpu_instruction_boundary(0x8263, 3); g_cpu.A = nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_8265:;
    /* $8265: D0 */ nes_cpu_instruction_boundary(0x8265, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8282; }
label_8267:;
    /* $8267: A5 */ nes_cpu_instruction_boundary(0x8267, 3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_8269:;
    /* $8269: 29 */ nes_cpu_instruction_boundary(0x8269, 2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_826B:;
    /* $826B: D0 */ nes_cpu_instruction_boundary(0x826B, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8282; }
label_826D:;
    /* $826D: A5 */ nes_cpu_instruction_boundary(0x826D, 3); g_cpu.A = nes_read(0xC4); FLAG_NZ(g_cpu.A);
label_826F:;
    /* $826F: C9 */ nes_cpu_instruction_boundary(0x826F, 2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_8271:;
    /* $8271: D0 */ nes_cpu_instruction_boundary(0x8271, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_827F; }
label_8273:;
    /* $8273: A9 */ nes_cpu_instruction_boundary(0x8273, 2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_8275:;
    /* $8275: 85 */ nes_cpu_instruction_boundary(0x8275, 3); nes_write(0xC4, g_cpu.A);
label_8277:;
    /* $8277: A9 */ nes_cpu_instruction_boundary(0x8277, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8279:;
    /* $8279: 85 */ nes_cpu_instruction_boundary(0x8279, 3); nes_write(0xCB, g_cpu.A);
label_827B:;
    /* $827B: E6 */ nes_cpu_instruction_boundary(0x827B, 5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_827D:;
    /* $827D: D0 */ nes_cpu_instruction_boundary(0x827D, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8282; }
label_827F:; /* MessageFadeOut_endIf_A */
    /* $827F: 20 */ nes_cpu_instruction_boundary(0x827F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; func_8B5F_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x827F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8282:; /* MessageFadeOut_RTS */
    /* $8282: 60 */ nes_cpu_instruction_boundary(0x8282, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8283_b0(void) { /* DelayIntroReplay */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8283_b0");
#endif
label_8283:; /* DelayIntroReplay */
    /* $8283: E6 */ nes_cpu_instruction_boundary(0x8283, 5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8285:;
    /* $8285: A9 */ nes_cpu_instruction_boundary(0x8285, 2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_8287:;
    /* $8287: 85 */ nes_cpu_instruction_boundary(0x8287, 3); nes_write(0x2C, g_cpu.A);
label_8289:;
    /* $8289: 60 */ nes_cpu_instruction_boundary(0x8289, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_82A3_b0(void) { /* PrepIntroRestart */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_82A3_b0");
#endif
label_82A3:; /* PrepIntroRestart */
    /* $82A3: A5 */ nes_cpu_instruction_boundary(0x82A3, 3); g_cpu.A = nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_82A5:;
    /* $82A5: D0 */ nes_cpu_instruction_boundary(0x82A5, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_82E9; }
label_82A7:;
    /* $82A7: 85 */ nes_cpu_instruction_boundary(0x82A7, 3); nes_write(0xD2, g_cpu.A);
label_82A9:;
    /* $82A9: 85 */ nes_cpu_instruction_boundary(0x82A9, 3); nes_write(0xBB, g_cpu.A);
label_82AB:;
    /* $82AB: 85 */ nes_cpu_instruction_boundary(0x82AB, 3); nes_write(0x55, g_cpu.A);
label_82AD:;
    /* $82AD: A0 */ nes_cpu_instruction_boundary(0x82AD, 2); g_cpu.Y = 0x1F; FLAG_NZ(g_cpu.Y);
label_82AF:; /* PrepIntroRestart_loop */
    /* $82AF: 99 */ nes_cpu_instruction_boundary(0x82AF, 5); nes_write((0x0300 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_82B2:;
    /* $82B2: 88 */ nes_cpu_instruction_boundary(0x82B2, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_82B3:;
    /* $82B3: 10 */ nes_cpu_instruction_boundary(0x82B3, 2); if (!g_cpu.N) {
    nes_cpu_instruction_boundary(0x82AF, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_82AF;
    }
label_82B5:;
    /* $82B5: A5 */ nes_cpu_instruction_boundary(0x82B5, 3); g_cpu.A = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_82B7:;
    /* $82B7: 29 */ nes_cpu_instruction_boundary(0x82B7, 2); g_cpu.A &= 0xFC; FLAG_NZ(g_cpu.A);
label_82B9:;
    /* $82B9: 85 */ nes_cpu_instruction_boundary(0x82B9, 3); nes_write(0xFF, g_cpu.A);
label_82BB:;
    /* $82BB: C8 */ nes_cpu_instruction_boundary(0x82BB, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_82BC:;
    /* $82BC: 84 */ nes_cpu_instruction_boundary(0x82BC, 3); nes_write(0xB7, g_cpu.Y);
label_82BE:;
    /* $82BE: 84 */ nes_cpu_instruction_boundary(0x82BE, 3); nes_write(0xB8, g_cpu.Y);
label_82C0:;
    /* $82C0: 84 */ nes_cpu_instruction_boundary(0x82C0, 3); nes_write(0xC1, g_cpu.Y);
label_82C2:;
    /* $82C2: 84 */ nes_cpu_instruction_boundary(0x82C2, 3); nes_write(0xC2, g_cpu.Y);
label_82C4:;
    /* $82C4: 84 */ nes_cpu_instruction_boundary(0x82C4, 3); nes_write(0xC3, g_cpu.Y);
label_82C6:;
    /* $82C6: 84 */ nes_cpu_instruction_boundary(0x82C6, 3); nes_write(0xC4, g_cpu.Y);
label_82C8:;
    /* $82C8: 84 */ nes_cpu_instruction_boundary(0x82C8, 3); nes_write(0xCD, g_cpu.Y);
label_82CA:;
    /* $82CA: 84 */ nes_cpu_instruction_boundary(0x82CA, 3); nes_write(0x12, g_cpu.Y);
label_82CC:;
    /* $82CC: 84 */ nes_cpu_instruction_boundary(0x82CC, 3); nes_write(0x14, g_cpu.Y);
label_82CE:;
    /* $82CE: 84 */ nes_cpu_instruction_boundary(0x82CE, 3); nes_write(0x16, g_cpu.Y);
label_82D0:;
    /* $82D0: 84 */ nes_cpu_instruction_boundary(0x82D0, 3); nes_write(0xD7, g_cpu.Y);
label_82D2:;
    /* $82D2: C8 */ nes_cpu_instruction_boundary(0x82D2, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_82D3:;
    /* $82D3: 84 */ nes_cpu_instruction_boundary(0x82D3, 3); nes_write(0xCE, g_cpu.Y);
label_82D5:;
    /* $82D5: C8 */ nes_cpu_instruction_boundary(0x82D5, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_82D6:;
    /* $82D6: 84 */ nes_cpu_instruction_boundary(0x82D6, 3); nes_write(0xCC, g_cpu.Y);
label_82D8:;
    /* $82D8: 84 */ nes_cpu_instruction_boundary(0x82D8, 3); nes_write(0xCF, g_cpu.Y);
label_82DA:;
    /* $82DA: 84 */ nes_cpu_instruction_boundary(0x82DA, 3); nes_write(0x1F, g_cpu.Y);
label_82DC:;
    /* $82DC: A5 */ nes_cpu_instruction_boundary(0x82DC, 3); g_cpu.A = nes_read(0xD8); FLAG_NZ(g_cpu.A);
label_82DE:;
    /* $82DE: D0 */ nes_cpu_instruction_boundary(0x82DE, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_82EA; }
label_82E0:;
    /* $82E0: A9 */ nes_cpu_instruction_boundary(0x82E0, 2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_82E2:;
    /* $82E2: 8D */ nes_cpu_instruction_boundary(0x82E2, 4); nes_write(0x0684, g_cpu.A);
label_82E5:;
    /* $82E5: A9 */ nes_cpu_instruction_boundary(0x82E5, 2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_82E7:;
    /* $82E7: 85 */ nes_cpu_instruction_boundary(0x82E7, 3); nes_write(0xD8, g_cpu.A);
label_82E9:; /* PrepIntroRestart_RTS */
    /* $82E9: 60 */ nes_cpu_instruction_boundary(0x82E9, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_82EA:; /* PrepIntroRestart_else_A */
    /* $82EA: C6 */ nes_cpu_instruction_boundary(0x82EA, 5); { uint16_t a=0xD8; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_82EC:;
    /* $82EC: 60 */ nes_cpu_instruction_boundary(0x82EC, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_82ED_b0(void) { /* TitleScreenOff */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_82ED_b0");
#endif
label_82ED:; /* TitleScreenOff */
    /* $82ED: 20 */ nes_cpu_instruction_boundary(0x82ED, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xEF; g_cpu.S--; func_C439();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x82ED, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_82F0:;
    /* $82F0: E6 */ nes_cpu_instruction_boundary(0x82F0, 5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_82F2:;
    /* $82F2: 60 */ nes_cpu_instruction_boundary(0x82F2, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_82F3_b0(void) { /* TitleRoutineReturn13 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_82F3_b0");
#endif
label_82F3:; /* TitleRoutineReturn13 */
    /* $82F3: 60 */ nes_cpu_instruction_boundary(0x82F3, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_90BA_b0(void) { /* StartContinueScreen15 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_90BA_b0");
#endif
label_90BA:; /* StartContinueScreen15 */
    /* $90BA: 20 */ nes_cpu_instruction_boundary(0x90BA, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x90; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; func_909F_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x90BA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_90BD:;
    /* $90BD: A2 */ nes_cpu_instruction_boundary(0x90BD, 2); g_cpu.X = 0x84; FLAG_NZ(g_cpu.X);
label_90BF:;
    /* $90BF: A0 */ nes_cpu_instruction_boundary(0x90BF, 2); g_cpu.Y = 0x99; FLAG_NZ(g_cpu.Y);
label_90C1:;
    /* $90C1: 20 */ nes_cpu_instruction_boundary(0x90C1, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x90; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC3; g_cpu.S--; func_9449_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x90C1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_90C4:;
    /* $90C4: A0 */ nes_cpu_instruction_boundary(0x90C4, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_90C6:;
    /* $90C6: 8C */ nes_cpu_instruction_boundary(0x90C6, 4); nes_write(0x0325, g_cpu.Y);
label_90C9:;
    /* $90C9: A9 */ nes_cpu_instruction_boundary(0x90C9, 2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_90CB:;
    /* $90CB: 85 */ nes_cpu_instruction_boundary(0x90CB, 3); nes_write(0x1C, g_cpu.A);
label_90CD:;
    /* $90CD: A9 */ nes_cpu_instruction_boundary(0x90CD, 2); g_cpu.A = 0x16; FLAG_NZ(g_cpu.A);
label_90CF:;
    /* $90CF: 85 */ nes_cpu_instruction_boundary(0x90CF, 3); nes_write(0x1F, g_cpu.A);
label_90D1:; /* TurnOnDisplay */
    /* $90D1: 20 */ nes_cpu_instruction_boundary(0x90D1, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x90; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD3; g_cpu.S--; func_C487();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x90D1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_90D4:;
    /* $90D4: 4C */ nes_cpu_instruction_boundary(0x90D4, 3); nes_cpu_instruction_boundary(0xC447, 2); func_C447(); return;
}

void func_90D7_b0(void) { /* ChooseStartContinue */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_90D7_b0");
#endif
label_90D7:; /* ChooseStartContinue */
    /* $90D7: A5 */ nes_cpu_instruction_boundary(0x90D7, 3); g_cpu.A = nes_read(0x12); FLAG_NZ(g_cpu.A);
label_90D9:;
    /* $90D9: 29 */ nes_cpu_instruction_boundary(0x90D9, 2); g_cpu.A &= 0x30; FLAG_NZ(g_cpu.A);
label_90DB:;
    /* $90DB: C9 */ nes_cpu_instruction_boundary(0x90DB, 2); { int r=g_cpu.A-0x10; g_cpu.C=(g_cpu.A>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_90DD:;
    /* $90DD: D0 */ nes_cpu_instruction_boundary(0x90DD, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_90EB; }
label_90DF:;
    /* $90DF: AC */ nes_cpu_instruction_boundary(0x90DF, 4); g_cpu.Y = nes_read(0x0325); FLAG_NZ(g_cpu.Y);
label_90E2:;
    /* $90E2: D0 */ nes_cpu_instruction_boundary(0x90E2, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_90E7; }
label_90E4:;
    /* $90E4: 4C */ nes_cpu_instruction_boundary(0x90E4, 3); nes_cpu_instruction_boundary(0x932B, 2); func_932B_b0(); return;
label_90E7:; /* ChooseStartContinue_endIf_B */
    /* $90E7: A0 */ nes_cpu_instruction_boundary(0x90E7, 2); g_cpu.Y = 0x17; FLAG_NZ(g_cpu.Y);
label_90E9:;
    /* $90E9: 84 */ nes_cpu_instruction_boundary(0x90E9, 3); nes_write(0x1F, g_cpu.Y);
label_90EB:; /* ChooseStartContinue_endIf_A */
    /* $90EB: C9 */ nes_cpu_instruction_boundary(0x90EB, 2); { int r=g_cpu.A-0x20; g_cpu.C=(g_cpu.A>=0x20)?1:0; FLAG_NZ(r&0xFF); }
label_90ED:;
    /* $90ED: D0 */ nes_cpu_instruction_boundary(0x90ED, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_90FF; }
label_90EF:;
    /* $90EF: AD */ nes_cpu_instruction_boundary(0x90EF, 4); g_cpu.A = nes_read(0x0325); FLAG_NZ(g_cpu.A);
label_90F2:;
    /* $90F2: 49 */ nes_cpu_instruction_boundary(0x90F2, 2); g_cpu.A ^= 0x01; FLAG_NZ(g_cpu.A);
label_90F4:;
    /* $90F4: 8D */ nes_cpu_instruction_boundary(0x90F4, 4); nes_write(0x0325, g_cpu.A);
label_90F7:;
    /* $90F7: AD */ nes_cpu_instruction_boundary(0x90F7, 4); g_cpu.A = nes_read(0x0683); FLAG_NZ(g_cpu.A);
label_90FA:;
    /* $90FA: 09 */ nes_cpu_instruction_boundary(0x90FA, 2); g_cpu.A |= 0x08; FLAG_NZ(g_cpu.A);
label_90FC:;
    /* $90FC: 8D */ nes_cpu_instruction_boundary(0x90FC, 4); nes_write(0x0683, g_cpu.A);
label_90FF:; /* ChooseStartContinue_endIf_C */
    /* $90FF: AC */ nes_cpu_instruction_boundary(0x90FF, 4); g_cpu.Y = nes_read(0x0325); FLAG_NZ(g_cpu.Y);
label_9102:;
    /* $9102: B9 */ nes_cpu_instruction_boundary(0x9102, 4); g_cpu.A = nes_read((0x9118 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9105:;
    /* $9105: 8D */ nes_cpu_instruction_boundary(0x9105, 4); nes_write(0x0200, g_cpu.A);
label_9108:;
    /* $9108: A9 */ nes_cpu_instruction_boundary(0x9108, 2); g_cpu.A = 0x6E; FLAG_NZ(g_cpu.A);
label_910A:;
    /* $910A: 8D */ nes_cpu_instruction_boundary(0x910A, 4); nes_write(0x0201, g_cpu.A);
label_910D:;
    /* $910D: A9 */ nes_cpu_instruction_boundary(0x910D, 2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_910F:;
    /* $910F: 8D */ nes_cpu_instruction_boundary(0x910F, 4); nes_write(0x0202, g_cpu.A);
label_9112:;
    /* $9112: A9 */ nes_cpu_instruction_boundary(0x9112, 2); g_cpu.A = 0x50; FLAG_NZ(g_cpu.A);
label_9114:;
    /* $9114: 8D */ nes_cpu_instruction_boundary(0x9114, 4); nes_write(0x0203, g_cpu.A);
label_9117:;
    /* $9117: 60 */ nes_cpu_instruction_boundary(0x9117, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_911A_b0(void) { /* LoadPasswordScreen */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_911A_b0");
#endif
label_911A:; /* LoadPasswordScreen */
    /* $911A: 20 */ nes_cpu_instruction_boundary(0x911A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x91; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1C; g_cpu.S--; func_909F_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x911A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_911D:;
    /* $911D: A2 */ nes_cpu_instruction_boundary(0x911D, 2); g_cpu.X = 0xE3; FLAG_NZ(g_cpu.X);
label_911F:;
    /* $911F: A0 */ nes_cpu_instruction_boundary(0x911F, 2); g_cpu.Y = 0x99; FLAG_NZ(g_cpu.Y);
label_9121:;
    /* $9121: 20 */ nes_cpu_instruction_boundary(0x9121, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x91; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x23; g_cpu.S--; func_9449_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9121, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9124:;
    /* $9124: 20 */ nes_cpu_instruction_boundary(0x9124, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x91; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x26; g_cpu.S--; func_C6D6();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9124, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9127:;
    /* $9127: 20 */ nes_cpu_instruction_boundary(0x9127, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x91; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x29; g_cpu.S--; func_940B_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9127, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_912A:;
    /* $912A: A9 */ nes_cpu_instruction_boundary(0x912A, 2); g_cpu.A = 0x13; FLAG_NZ(g_cpu.A);
label_912C:;
    /* $912C: 85 */ nes_cpu_instruction_boundary(0x912C, 3); nes_write(0x1C, g_cpu.A);
label_912E:;
    /* $912E: A9 */ nes_cpu_instruction_boundary(0x912E, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9130:;
    /* $9130: 8D */ nes_cpu_instruction_boundary(0x9130, 4); nes_write(0x0321, g_cpu.A);
label_9133:;
    /* $9133: 8D */ nes_cpu_instruction_boundary(0x9133, 4); nes_write(0x0322, g_cpu.A);
label_9136:;
    /* $9136: 85 */ nes_cpu_instruction_boundary(0x9136, 3); nes_write(0x2C, g_cpu.A);
label_9138:;
    /* $9138: A9 */ nes_cpu_instruction_boundary(0x9138, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_913A:;
    /* $913A: 8D */ nes_cpu_instruction_boundary(0x913A, 4); nes_write(0x0320, g_cpu.A);
label_913D:;
    /* $913D: A0 */ nes_cpu_instruction_boundary(0x913D, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_913F:;
    /* $913F: 8C */ nes_cpu_instruction_boundary(0x913F, 4); nes_write(0x0324, g_cpu.Y);
label_9142:;
    /* $9142: E6 */ nes_cpu_instruction_boundary(0x9142, 5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9144:;
    /* $9144: 4C */ nes_cpu_instruction_boundary(0x9144, 3); nes_cpu_instruction_boundary(0x90D1, 2); func_90D1_b0(); return;
}

void func_9147_b0_body(int _entry) { /* EnterPassword */
    switch (_entry) {
        case 1: goto label_9180;
        case 2: goto label_91FB;
        case 3: goto label_91BF;
    }
label_9147:; /* EnterPassword */
    /* $9147: 20 */ nes_cpu_instruction_boundary(0x9147, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x91; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x49; g_cpu.S--; func_C1A3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9147, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_914A:;
    /* $914A: A5 */ nes_cpu_instruction_boundary(0x914A, 3); g_cpu.A = nes_read(0x12); FLAG_NZ(g_cpu.A);
label_914C:;
    /* $914C: 29 */ nes_cpu_instruction_boundary(0x914C, 2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_914E:;
    /* $914E: F0 */ nes_cpu_instruction_boundary(0x914E, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9153; }
label_9150:;
    /* $9150: 4C */ nes_cpu_instruction_boundary(0x9150, 3); nes_cpu_instruction_boundary(0x8C5E, 2); func_8C5E_b0(); return;
label_9153:; /* EnterPassword_endIf_A */
    /* $9153: A2 */ nes_cpu_instruction_boundary(0x9153, 2); g_cpu.X = 0x01; FLAG_NZ(g_cpu.X);
label_9155:;
    /* $9155: 86 */ nes_cpu_instruction_boundary(0x9155, 3); nes_write(0x1B, g_cpu.X);
label_9157:;
    /* $9157: AE */ nes_cpu_instruction_boundary(0x9157, 4); g_cpu.X = nes_read(0x07A0); FLAG_NZ(g_cpu.X);
label_915A:;
    /* $915A: A9 */ nes_cpu_instruction_boundary(0x915A, 2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_915C:;
    /* $915C: 20 */ nes_cpu_instruction_boundary(0x915C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x91; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x5E; g_cpu.S--; func_C36B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x915C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_915F:;
    /* $915F: A9 */ nes_cpu_instruction_boundary(0x915F, 2); g_cpu.A = 0xA8; FLAG_NZ(g_cpu.A);
label_9161:;
    /* $9161: 20 */ nes_cpu_instruction_boundary(0x9161, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x91; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x63; g_cpu.S--; func_C36B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9161, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9164:;
    /* $9164: A9 */ nes_cpu_instruction_boundary(0x9164, 2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_9166:;
    /* $9166: 20 */ nes_cpu_instruction_boundary(0x9166, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x91; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x68; g_cpu.S--; func_C36B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9166, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9169:;
    /* $9169: A5 */ nes_cpu_instruction_boundary(0x9169, 3); g_cpu.A = nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_916B:;
    /* $916B: F0 */ nes_cpu_instruction_boundary(0x916B, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9178; }
label_916D:;
    /* $916D: A9 */ nes_cpu_instruction_boundary(0x916D, 2); g_cpu.A = 0x59; FLAG_NZ(g_cpu.A);
label_916F:;
    /* $916F: 85 */ nes_cpu_instruction_boundary(0x916F, 3); nes_write(0x02, g_cpu.A);
label_9171:;
    /* $9171: A9 */ nes_cpu_instruction_boundary(0x9171, 2); g_cpu.A = 0x87; FLAG_NZ(g_cpu.A);
label_9173:;
    /* $9173: 85 */ nes_cpu_instruction_boundary(0x9173, 3); nes_write(0x03, g_cpu.A);
label_9175:;
    /* $9175: 4C */ nes_cpu_instruction_boundary(0x9175, 3); nes_cpu_instruction_boundary(0x9180, 2); func_9180_b0(); return;
label_9178:; /* EnterPassword_else_B */
    /* $9178: A9 */ nes_cpu_instruction_boundary(0x9178, 2); g_cpu.A = 0x68; FLAG_NZ(g_cpu.A);
label_917A:;
    /* $917A: 85 */ nes_cpu_instruction_boundary(0x917A, 3); nes_write(0x02, g_cpu.A);
label_917C:;
    /* $917C: A9 */ nes_cpu_instruction_boundary(0x917C, 2); g_cpu.A = 0x87; FLAG_NZ(g_cpu.A);
label_917E:;
    /* $917E: 85 */ nes_cpu_instruction_boundary(0x917E, 3); nes_write(0x03, g_cpu.A);
label_9180:; /* EnterPassword_endIf_B */
    /* $9180: A0 */ nes_cpu_instruction_boundary(0x9180, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_9182:; /* EnterPassword_loop */
    /* $9182: B1 */ nes_cpu_instruction_boundary(0x9182, 5); g_cpu.A = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9184:;
    /* $9184: 20 */ nes_cpu_instruction_boundary(0x9184, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x91; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x86; g_cpu.S--; func_C36B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9184, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9187:;
    /* $9187: C8 */ nes_cpu_instruction_boundary(0x9187, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9188:;
    /* $9188: C0 */ nes_cpu_instruction_boundary(0x9188, 2); { int r=g_cpu.Y-0x0F; g_cpu.C=(g_cpu.Y>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_918A:;
    /* $918A: D0 */ nes_cpu_instruction_boundary(0x918A, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0x9182, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9182;
    }
label_918C:;
    /* $918C: A5 */ nes_cpu_instruction_boundary(0x918C, 3); g_cpu.A = nes_read(0x12); FLAG_NZ(g_cpu.A);
label_918E:;
    /* $918E: 30 */ nes_cpu_instruction_boundary(0x918E, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_9193; }
label_9190:;
    /* $9190: 4C */ nes_cpu_instruction_boundary(0x9190, 3); nes_cpu_instruction_boundary(0x91FB, 2); func_91FB_b0(); return;
label_9193:; /* EnterPassword_endIf_C */
    /* $9193: AD */ nes_cpu_instruction_boundary(0x9193, 4); g_cpu.A = nes_read(0x0683); FLAG_NZ(g_cpu.A);
label_9196:;
    /* $9196: 09 */ nes_cpu_instruction_boundary(0x9196, 2); g_cpu.A |= 0x01; FLAG_NZ(g_cpu.A);
label_9198:;
    /* $9198: 8D */ nes_cpu_instruction_boundary(0x9198, 4); nes_write(0x0683, g_cpu.A);
label_919B:;
    /* $919B: AD */ nes_cpu_instruction_boundary(0x919B, 4); g_cpu.A = nes_read(0x0320); FLAG_NZ(g_cpu.A);
label_919E:;
    /* $919E: C9 */ nes_cpu_instruction_boundary(0x919E, 2); { int r=g_cpu.A-0x12; g_cpu.C=(g_cpu.A>=0x12)?1:0; FLAG_NZ(r&0xFF); }
label_91A0:;
    /* $91A0: 90 */ nes_cpu_instruction_boundary(0x91A0, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_91A8; }
label_91A2:;
    /* $91A2: 18 */ nes_cpu_instruction_boundary(0x91A2, 2); g_cpu.C = 0;
label_91A3:;
    /* $91A3: 69 */ nes_cpu_instruction_boundary(0x91A3, 2); { uint16_t r = g_cpu.A + 0x3E + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x3E); g_cpu.A=r&0xFF; }
label_91A5:;
    /* $91A5: 4C */ nes_cpu_instruction_boundary(0x91A5, 3); nes_cpu_instruction_boundary(0x91BF, 2); func_91BF_b0(); return;
label_91A8:;
    /* $91A8: C9 */ nes_cpu_instruction_boundary(0x91A8, 2); { int r=g_cpu.A-0x0C; g_cpu.C=(g_cpu.A>=0x0C)?1:0; FLAG_NZ(r&0xFF); }
label_91AA:;
    /* $91AA: 90 */ nes_cpu_instruction_boundary(0x91AA, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_91B2; }
label_91AC:;
    /* $91AC: 18 */ nes_cpu_instruction_boundary(0x91AC, 2); g_cpu.C = 0;
label_91AD:;
    /* $91AD: 69 */ nes_cpu_instruction_boundary(0x91AD, 2); { uint16_t r = g_cpu.A + 0x3D + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x3D); g_cpu.A=r&0xFF; }
label_91AF:;
    /* $91AF: 4C */ nes_cpu_instruction_boundary(0x91AF, 3); nes_cpu_instruction_boundary(0x91BF, 2); func_91BF_b0(); return;
label_91B2:;
    /* $91B2: C9 */ nes_cpu_instruction_boundary(0x91B2, 2); { int r=g_cpu.A-0x06; g_cpu.C=(g_cpu.A>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_91B4:;
    /* $91B4: 90 */ nes_cpu_instruction_boundary(0x91B4, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_91BC; }
label_91B6:;
    /* $91B6: 18 */ nes_cpu_instruction_boundary(0x91B6, 2); g_cpu.C = 0;
label_91B7:;
    /* $91B7: 69 */ nes_cpu_instruction_boundary(0x91B7, 2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_91B9:;
    /* $91B9: 4C */ nes_cpu_instruction_boundary(0x91B9, 3); nes_cpu_instruction_boundary(0x91BF, 2); func_91BF_b0(); return;
label_91BC:;
    /* $91BC: 18 */ nes_cpu_instruction_boundary(0x91BC, 2); g_cpu.C = 0;
label_91BD:;
    /* $91BD: 69 */ nes_cpu_instruction_boundary(0x91BD, 2); { uint16_t r = g_cpu.A + 0x09 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x09); g_cpu.A=r&0xFF; }
label_91BF:; /* LoadRowAndColumn */
    /* $91BF: 85 */ nes_cpu_instruction_boundary(0x91BF, 3); nes_write(0x06, g_cpu.A);
label_91C1:;
    /* $91C1: AD */ nes_cpu_instruction_boundary(0x91C1, 4); g_cpu.A = nes_read(0x0321); FLAG_NZ(g_cpu.A);
label_91C4:;
    /* $91C4: 0A */ nes_cpu_instruction_boundary(0x91C4, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_91C5:;
    /* $91C5: A8 */ nes_cpu_instruction_boundary(0x91C5, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_91C6:;
    /* $91C6: B9 */ nes_cpu_instruction_boundary(0x91C6, 4); g_cpu.A = nes_read((0x9998 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_91C9:;
    /* $91C9: 85 */ nes_cpu_instruction_boundary(0x91C9, 3); nes_write(0x00, g_cpu.A);
label_91CB:;
    /* $91CB: B9 */ nes_cpu_instruction_boundary(0x91CB, 4); g_cpu.A = nes_read((0x9999 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_91CE:;
    /* $91CE: 85 */ nes_cpu_instruction_boundary(0x91CE, 3); nes_write(0x01, g_cpu.A);
label_91D0:;
    /* $91D0: AC */ nes_cpu_instruction_boundary(0x91D0, 4); g_cpu.Y = nes_read(0x0322); FLAG_NZ(g_cpu.Y);
label_91D3:;
    /* $91D3: B1 */ nes_cpu_instruction_boundary(0x91D3, 5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_91D5:;
    /* $91D5: 48 */ nes_cpu_instruction_boundary(0x91D5, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_91D6:;
    /* $91D6: 8D */ nes_cpu_instruction_boundary(0x91D6, 4); nes_write(0x0781, g_cpu.A);
label_91D9:;
    /* $91D9: A9 */ nes_cpu_instruction_boundary(0x91D9, 2); g_cpu.A = 0x11; FLAG_NZ(g_cpu.A);
label_91DB:;
    /* $91DB: 8D */ nes_cpu_instruction_boundary(0x91DB, 4); nes_write(0x0780, g_cpu.A);
label_91DE:;
    /* $91DE: A6 */ nes_cpu_instruction_boundary(0x91DE, 3); g_cpu.X = nes_read(0x06); FLAG_NZ(g_cpu.X);
label_91E0:;
    /* $91E0: A0 */ nes_cpu_instruction_boundary(0x91E0, 2); g_cpu.Y = 0x21; FLAG_NZ(g_cpu.Y);
label_91E2:;
    /* $91E2: 20 */ nes_cpu_instruction_boundary(0x91E2, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x91; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE4; g_cpu.S--; func_9450_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x91E2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_91E5:;
    /* $91E5: AE */ nes_cpu_instruction_boundary(0x91E5, 4); g_cpu.X = nes_read(0x0320); FLAG_NZ(g_cpu.X);
label_91E8:;
    /* $91E8: 68 */ nes_cpu_instruction_boundary(0x91E8, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_91E9:;
    /* $91E9: 9D */ nes_cpu_instruction_boundary(0x91E9, 5); nes_write((0x699A + g_cpu.X) & 0xFFFF, g_cpu.A);
label_91EC:;
    /* $91EC: AD */ nes_cpu_instruction_boundary(0x91EC, 4); g_cpu.A = nes_read(0x0320); FLAG_NZ(g_cpu.A);
label_91EF:;
    /* $91EF: 18 */ nes_cpu_instruction_boundary(0x91EF, 2); g_cpu.C = 0;
label_91F0:;
    /* $91F0: 69 */ nes_cpu_instruction_boundary(0x91F0, 2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_91F2:;
    /* $91F2: C9 */ nes_cpu_instruction_boundary(0x91F2, 2); { int r=g_cpu.A-0x18; g_cpu.C=(g_cpu.A>=0x18)?1:0; FLAG_NZ(r&0xFF); }
label_91F4:;
    /* $91F4: 90 */ nes_cpu_instruction_boundary(0x91F4, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_91F8; }
label_91F6:;
    /* $91F6: A9 */ nes_cpu_instruction_boundary(0x91F6, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_91F8:;
    /* $91F8: 8D */ nes_cpu_instruction_boundary(0x91F8, 4); nes_write(0x0320, g_cpu.A);
label_91FB:; /* CheckBackspace */
    /* $91FB: A5 */ nes_cpu_instruction_boundary(0x91FB, 3); g_cpu.A = nes_read(0x12); FLAG_NZ(g_cpu.A);
label_91FD:;
    /* $91FD: 29 */ nes_cpu_instruction_boundary(0x91FD, 2); g_cpu.A &= 0x40; FLAG_NZ(g_cpu.A);
label_91FF:;
    /* $91FF: F0 */ nes_cpu_instruction_boundary(0x91FF, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_920E; }
label_9201:;
    /* $9201: AD */ nes_cpu_instruction_boundary(0x9201, 4); g_cpu.A = nes_read(0x0320); FLAG_NZ(g_cpu.A);
label_9204:;
    /* $9204: 38 */ nes_cpu_instruction_boundary(0x9204, 2); g_cpu.C = 1;
label_9205:;
    /* $9205: E9 */ nes_cpu_instruction_boundary(0x9205, 2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9207:;
    /* $9207: B0 */ nes_cpu_instruction_boundary(0x9207, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_920B; }
label_9209:;
    /* $9209: A9 */ nes_cpu_instruction_boundary(0x9209, 2); g_cpu.A = 0x17; FLAG_NZ(g_cpu.A);
label_920B:;
    /* $920B: 8D */ nes_cpu_instruction_boundary(0x920B, 4); nes_write(0x0320, g_cpu.A);
label_920E:;
    /* $920E: AC */ nes_cpu_instruction_boundary(0x920E, 4); g_cpu.Y = nes_read(0x0324); FLAG_NZ(g_cpu.Y);
label_9211:;
    /* $9211: A5 */ nes_cpu_instruction_boundary(0x9211, 3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_9213:;
    /* $9213: 29 */ nes_cpu_instruction_boundary(0x9213, 2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A);
label_9215:;
    /* $9215: F0 */ nes_cpu_instruction_boundary(0x9215, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_923F; }
label_9217:;
    /* $9217: A9 */ nes_cpu_instruction_boundary(0x9217, 2); g_cpu.A = 0x3F; FLAG_NZ(g_cpu.A);
label_9219:;
    /* $9219: AE */ nes_cpu_instruction_boundary(0x9219, 4); g_cpu.X = nes_read(0x0320); FLAG_NZ(g_cpu.X);
label_921C:;
    /* $921C: E0 */ nes_cpu_instruction_boundary(0x921C, 2); { int r=g_cpu.X-0x0C; g_cpu.C=(g_cpu.X>=0x0C)?1:0; FLAG_NZ(r&0xFF); }
label_921E:;
    /* $921E: 90 */ nes_cpu_instruction_boundary(0x921E, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9222; }
label_9220:;
    /* $9220: A9 */ nes_cpu_instruction_boundary(0x9220, 2); g_cpu.A = 0x4F; FLAG_NZ(g_cpu.A);
label_9222:;
    /* $9222: 8D */ nes_cpu_instruction_boundary(0x9222, 4); nes_write(0x0204, g_cpu.A);
label_9225:;
    /* $9225: A9 */ nes_cpu_instruction_boundary(0x9225, 2); g_cpu.A = 0x6E; FLAG_NZ(g_cpu.A);
label_9227:;
    /* $9227: 8D */ nes_cpu_instruction_boundary(0x9227, 4); nes_write(0x0205, g_cpu.A);
label_922A:;
    /* $922A: A9 */ nes_cpu_instruction_boundary(0x922A, 2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_922C:;
    /* $922C: 8D */ nes_cpu_instruction_boundary(0x922C, 4); nes_write(0x0206, g_cpu.A);
label_922F:;
    /* $922F: AD */ nes_cpu_instruction_boundary(0x922F, 4); g_cpu.A = nes_read(0x0320); FLAG_NZ(g_cpu.A);
label_9232:;
    /* $9232: C9 */ nes_cpu_instruction_boundary(0x9232, 2); { int r=g_cpu.A-0x0C; g_cpu.C=(g_cpu.A>=0x0C)?1:0; FLAG_NZ(r&0xFF); }
label_9234:;
    /* $9234: 90 */ nes_cpu_instruction_boundary(0x9234, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9238; }
label_9236:;
    /* $9236: E9 */ nes_cpu_instruction_boundary(0x9236, 2); { uint8_t m=0x0C; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9238:;
    /* $9238: AA */ nes_cpu_instruction_boundary(0x9238, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_9239:;
    /* $9239: BD */ nes_cpu_instruction_boundary(0x9239, 4); g_cpu.A = nes_read((0x92C8 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_923C:;
    /* $923C: 8D */ nes_cpu_instruction_boundary(0x923C, 4); nes_write(0x0207, g_cpu.A);
label_923F:;
    /* $923F: AE */ nes_cpu_instruction_boundary(0x923F, 4); g_cpu.X = nes_read(0x0321); FLAG_NZ(g_cpu.X);
label_9242:;
    /* $9242: AC */ nes_cpu_instruction_boundary(0x9242, 4); g_cpu.Y = nes_read(0x0322); FLAG_NZ(g_cpu.Y);
label_9245:;
    /* $9245: A5 */ nes_cpu_instruction_boundary(0x9245, 3); g_cpu.A = nes_read(0x16); FLAG_NZ(g_cpu.A);
label_9247:;
    /* $9247: 29 */ nes_cpu_instruction_boundary(0x9247, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_9249:;
    /* $9249: F0 */ nes_cpu_instruction_boundary(0x9249, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9297; }
label_924B:;
    /* $924B: 48 */ nes_cpu_instruction_boundary(0x924B, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_924C:;
    /* $924C: AD */ nes_cpu_instruction_boundary(0x924C, 4); g_cpu.A = nes_read(0x0683); FLAG_NZ(g_cpu.A);
label_924F:;
    /* $924F: 09 */ nes_cpu_instruction_boundary(0x924F, 2); g_cpu.A |= 0x08; FLAG_NZ(g_cpu.A);
label_9251:;
    /* $9251: 8D */ nes_cpu_instruction_boundary(0x9251, 4); nes_write(0x0683, g_cpu.A);
label_9254:;
    /* $9254: 68 */ nes_cpu_instruction_boundary(0x9254, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9255:;
    /* $9255: 4A */ nes_cpu_instruction_boundary(0x9255, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9256:;
    /* $9256: 90 */ nes_cpu_instruction_boundary(0x9256, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_926C; }
label_9258:;
    /* $9258: C8 */ nes_cpu_instruction_boundary(0x9258, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9259:;
    /* $9259: C0 */ nes_cpu_instruction_boundary(0x9259, 2); { int r=g_cpu.Y-0x0D; g_cpu.C=(g_cpu.Y>=0x0D)?1:0; FLAG_NZ(r&0xFF); }
label_925B:;
    /* $925B: D0 */ nes_cpu_instruction_boundary(0x925B, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9269; }
label_925D:;
    /* $925D: E8 */ nes_cpu_instruction_boundary(0x925D, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_925E:;
    /* $925E: E0 */ nes_cpu_instruction_boundary(0x925E, 2); { int r=g_cpu.X-0x05; g_cpu.C=(g_cpu.X>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_9260:;
    /* $9260: D0 */ nes_cpu_instruction_boundary(0x9260, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9264; }
label_9262:;
    /* $9262: A2 */ nes_cpu_instruction_boundary(0x9262, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_9264:;
    /* $9264: 8E */ nes_cpu_instruction_boundary(0x9264, 4); nes_write(0x0321, g_cpu.X);
label_9267:;
    /* $9267: A0 */ nes_cpu_instruction_boundary(0x9267, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_9269:;
    /* $9269: 8C */ nes_cpu_instruction_boundary(0x9269, 4); nes_write(0x0322, g_cpu.Y);
label_926C:;
    /* $926C: 4A */ nes_cpu_instruction_boundary(0x926C, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_926D:;
    /* $926D: 90 */ nes_cpu_instruction_boundary(0x926D, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_927F; }
label_926F:;
    /* $926F: 88 */ nes_cpu_instruction_boundary(0x926F, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9270:;
    /* $9270: 10 */ nes_cpu_instruction_boundary(0x9270, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_927C; }
label_9272:;
    /* $9272: CA */ nes_cpu_instruction_boundary(0x9272, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_9273:;
    /* $9273: 10 */ nes_cpu_instruction_boundary(0x9273, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_9277; }
label_9275:;
    /* $9275: A2 */ nes_cpu_instruction_boundary(0x9275, 2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_9277:;
    /* $9277: 8E */ nes_cpu_instruction_boundary(0x9277, 4); nes_write(0x0321, g_cpu.X);
label_927A:;
    /* $927A: A0 */ nes_cpu_instruction_boundary(0x927A, 2); g_cpu.Y = 0x0C; FLAG_NZ(g_cpu.Y);
label_927C:;
    /* $927C: 8C */ nes_cpu_instruction_boundary(0x927C, 4); nes_write(0x0322, g_cpu.Y);
label_927F:;
    /* $927F: 4A */ nes_cpu_instruction_boundary(0x927F, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9280:;
    /* $9280: 90 */ nes_cpu_instruction_boundary(0x9280, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_928C; }
label_9282:;
    /* $9282: E8 */ nes_cpu_instruction_boundary(0x9282, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9283:;
    /* $9283: E0 */ nes_cpu_instruction_boundary(0x9283, 2); { int r=g_cpu.X-0x05; g_cpu.C=(g_cpu.X>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_9285:;
    /* $9285: D0 */ nes_cpu_instruction_boundary(0x9285, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9289; }
label_9287:;
    /* $9287: A2 */ nes_cpu_instruction_boundary(0x9287, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_9289:;
    /* $9289: 8E */ nes_cpu_instruction_boundary(0x9289, 4); nes_write(0x0321, g_cpu.X);
label_928C:;
    /* $928C: 4A */ nes_cpu_instruction_boundary(0x928C, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_928D:;
    /* $928D: 90 */ nes_cpu_instruction_boundary(0x928D, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9297; }
label_928F:;
    /* $928F: CA */ nes_cpu_instruction_boundary(0x928F, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_9290:;
    /* $9290: 10 */ nes_cpu_instruction_boundary(0x9290, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_9294; }
label_9292:;
    /* $9292: A2 */ nes_cpu_instruction_boundary(0x9292, 2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_9294:;
    /* $9294: 8E */ nes_cpu_instruction_boundary(0x9294, 4); nes_write(0x0321, g_cpu.X);
label_9297:;
    /* $9297: A5 */ nes_cpu_instruction_boundary(0x9297, 3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_9299:;
    /* $9299: 29 */ nes_cpu_instruction_boundary(0x9299, 2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A);
label_929B:;
    /* $929B: F0 */ nes_cpu_instruction_boundary(0x929B, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_92B3; }
label_929D:;
    /* $929D: BD */ nes_cpu_instruction_boundary(0x929D, 4); g_cpu.A = nes_read((0x92B6 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_92A0:;
    /* $92A0: 8D */ nes_cpu_instruction_boundary(0x92A0, 4); nes_write(0x0208, g_cpu.A);
label_92A3:;
    /* $92A3: A9 */ nes_cpu_instruction_boundary(0x92A3, 2); g_cpu.A = 0x6E; FLAG_NZ(g_cpu.A);
label_92A5:;
    /* $92A5: 8D */ nes_cpu_instruction_boundary(0x92A5, 4); nes_write(0x0209, g_cpu.A);
label_92A8:;
    /* $92A8: A9 */ nes_cpu_instruction_boundary(0x92A8, 2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_92AA:;
    /* $92AA: 8D */ nes_cpu_instruction_boundary(0x92AA, 4); nes_write(0x020A, g_cpu.A);
label_92AD:;
    /* $92AD: B9 */ nes_cpu_instruction_boundary(0x92AD, 4); g_cpu.A = nes_read((0x92BB + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_92B0:;
    /* $92B0: 8D */ nes_cpu_instruction_boundary(0x92B0, 4); nes_write(0x020B, g_cpu.A);
label_92B3:;
    /* $92B3: 60 */ nes_cpu_instruction_boundary(0x92B3, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9147_b0(void) { /* EnterPassword */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9147_b0");
#endif
    func_9147_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9180_b0(void) { /* EnterPassword_endIf_B */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9180_b0");
#endif
    func_9147_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_91FB_b0(void) { /* CheckBackspace */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_91FB_b0");
#endif
    func_9147_b0_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_91BF_b0(void) { /* LoadRowAndColumn */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_91BF_b0");
#endif
    func_9147_b0_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9359_b0(void) { /* DisplayPassword */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9359_b0");
#endif
label_9359:; /* DisplayPassword */
    /* $9359: A5 */ nes_cpu_instruction_boundary(0x9359, 3); g_cpu.A = nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_935B:;
    /* $935B: D0 */ nes_cpu_instruction_boundary(0x935B, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0x9324); return; }
label_935D:;
    /* $935D: 20 */ nes_cpu_instruction_boundary(0x935D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x5F; g_cpu.S--; func_909F_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x935D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9360:;
    /* $9360: A2 */ nes_cpu_instruction_boundary(0x9360, 2); g_cpu.X = 0x7F; FLAG_NZ(g_cpu.X);
label_9362:;
    /* $9362: A0 */ nes_cpu_instruction_boundary(0x9362, 2); g_cpu.Y = 0x93; FLAG_NZ(g_cpu.Y);
label_9364:;
    /* $9364: 20 */ nes_cpu_instruction_boundary(0x9364, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x66; g_cpu.S--; func_9449_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9364, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9367:;
    /* $9367: 20 */ nes_cpu_instruction_boundary(0x9367, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x69; g_cpu.S--; func_C6D6();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9367, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_936A:;
    /* $936A: 20 */ nes_cpu_instruction_boundary(0x936A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6C; g_cpu.S--; func_8C7A_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x936A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_936D:;
    /* $936D: 20 */ nes_cpu_instruction_boundary(0x936D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6F; g_cpu.S--; func_C487();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x936D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9370:;
    /* $9370: 20 */ nes_cpu_instruction_boundary(0x9370, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x72; g_cpu.S--; func_93C6_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9370, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9373:;
    /* $9373: 20 */ nes_cpu_instruction_boundary(0x9373, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x75; g_cpu.S--; func_C42C();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9373, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9376:;
    /* $9376: A9 */ nes_cpu_instruction_boundary(0x9376, 2); g_cpu.A = 0x13; FLAG_NZ(g_cpu.A);
label_9378:;
    /* $9378: 85 */ nes_cpu_instruction_boundary(0x9378, 3); nes_write(0x1C, g_cpu.A);
label_937A:;
    /* $937A: E6 */ nes_cpu_instruction_boundary(0x937A, 5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_937C:;
    /* $937C: 4C */ nes_cpu_instruction_boundary(0x937C, 3); nes_cpu_instruction_boundary(0xC447, 2); func_C447(); return;
}

void func_9394_b0(void) { /* WaitForSTART */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9394_b0");
#endif
label_9394:; /* WaitForSTART */
    /* $9394: A5 */ nes_cpu_instruction_boundary(0x9394, 3); g_cpu.A = nes_read(0x12); FLAG_NZ(g_cpu.A);
label_9396:;
    /* $9396: 29 */ nes_cpu_instruction_boundary(0x9396, 2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_9398:;
    /* $9398: F0 */ nes_cpu_instruction_boundary(0x9398, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_939D; }
label_939A:;
    /* $939A: 4C */ nes_cpu_instruction_boundary(0x939A, 3); nes_cpu_instruction_boundary(0x8C5E, 2); func_8C5E_b0(); return;
label_939D:; /* WaitForSTART_RTS */
    /* $939D: 60 */ nes_cpu_instruction_boundary(0x939D, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_939E_b0(void) { /* GameOver */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_939E_b0");
#endif
label_939E:; /* GameOver */
    /* $939E: 20 */ nes_cpu_instruction_boundary(0x939E, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA0; g_cpu.S--; func_909F_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x939E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_93A1:;
    /* $93A1: A2 */ nes_cpu_instruction_boundary(0x93A1, 2); g_cpu.X = 0xB9; FLAG_NZ(g_cpu.X);
label_93A3:;
    /* $93A3: A0 */ nes_cpu_instruction_boundary(0x93A3, 2); g_cpu.Y = 0x93; FLAG_NZ(g_cpu.Y);
label_93A5:;
    /* $93A5: 20 */ nes_cpu_instruction_boundary(0x93A5, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA7; g_cpu.S--; func_9449_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x93A5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_93A8:;
    /* $93A8: 20 */ nes_cpu_instruction_boundary(0x93A8, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAA; g_cpu.S--; func_C6D6();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x93A8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_93AB:;
    /* $93AB: 20 */ nes_cpu_instruction_boundary(0x93AB, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAD; g_cpu.S--; func_C487();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x93AB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_93AE:;
    /* $93AE: A9 */ nes_cpu_instruction_boundary(0x93AE, 2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_93B0:;
    /* $93B0: 85 */ nes_cpu_instruction_boundary(0x93B0, 3); nes_write(0x2C, g_cpu.A);
label_93B2:;
    /* $93B2: A9 */ nes_cpu_instruction_boundary(0x93B2, 2); g_cpu.A = 0x19; FLAG_NZ(g_cpu.A);
label_93B4:;
    /* $93B4: 85 */ nes_cpu_instruction_boundary(0x93B4, 3); nes_write(0x1F, g_cpu.A);
label_93B6:;
    /* $93B6: 4C */ nes_cpu_instruction_boundary(0x93B6, 3); nes_cpu_instruction_boundary(0xC447, 2); func_C447(); return;
}

void func_9AA7_b0(void) { /* EndGame */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9AA7_b0");
#endif
label_9AA7:; /* EndGame */
    /* $9AA7: 20 */ nes_cpu_instruction_boundary(0x9AA7, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA9; g_cpu.S--; func_9EAA_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9AA7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9AAA:;
    /* $9AAA: A5 */ nes_cpu_instruction_boundary(0x9AAA, 3); g_cpu.A = nes_read(0x7B); FLAG_NZ(g_cpu.A);
label_9AAC:;
    /* $9AAC: D0 */ nes_cpu_instruction_boundary(0x9AAC, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9AC0; }
label_9AAE:;
    /* $9AAE: A5 */ nes_cpu_instruction_boundary(0x9AAE, 3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_9AB0:;
    /* $9AB0: 29 */ nes_cpu_instruction_boundary(0x9AB0, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_9AB2:;
    /* $9AB2: D0 */ nes_cpu_instruction_boundary(0x9AB2, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9AC0; }
label_9AB4:;
    /* $9AB4: E6 */ nes_cpu_instruction_boundary(0x9AB4, 5); { uint16_t a=0x1C; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9AB6:;
    /* $9AB6: A5 */ nes_cpu_instruction_boundary(0x9AB6, 3); g_cpu.A = nes_read(0x1C); FLAG_NZ(g_cpu.A);
label_9AB8:;
    /* $9AB8: C9 */ nes_cpu_instruction_boundary(0x9AB8, 2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_9ABA:;
    /* $9ABA: D0 */ nes_cpu_instruction_boundary(0x9ABA, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9AC0; }
label_9ABC:;
    /* $9ABC: A9 */ nes_cpu_instruction_boundary(0x9ABC, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9ABE:;
    /* $9ABE: 85 */ nes_cpu_instruction_boundary(0x9ABE, 3); nes_write(0x1C, g_cpu.A);
label_9AC0:; /* EndGame_jumpEngine */
    /* $9AC0: A5 */ nes_cpu_instruction_boundary(0x9AC0, 3); g_cpu.A = nes_read(0x33); FLAG_NZ(g_cpu.A);
label_9AC2:;
    /* $9AC2: 20 */ nes_cpu_instruction_boundary(0x9AC2, 6); /* inline_dispatch $C27C: 9 entries (bank=0) */
switch(g_cpu.A) {
  case 0: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xD5); nes_write(0x000D, 0x9A); g_cpu.A = 0x9A; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x9AD5, 57); func_9AD5_b0(); return;
  case 1: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x1C); nes_write(0x000D, 0x9B); g_cpu.A = 0x9B; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x9B1C, 57); func_9B1C_b0(); return;
  case 2: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x34); nes_write(0x000D, 0x9B); g_cpu.A = 0x9B; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x9B34, 57); func_9B34_b0(); return;
  case 3: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x93); nes_write(0x000D, 0x9B); g_cpu.A = 0x9B; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x9B93, 57); func_9B93_b0(); return;
  case 4: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xCD); nes_write(0x000D, 0x9B); g_cpu.A = 0x9B; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x9BCD, 57); func_9BCD_b0(); return;
  case 5: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xFC); nes_write(0x000D, 0x9B); g_cpu.A = 0x9B; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x9BFC, 57); func_9BFC_b0(); return;
  case 6: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x39); nes_write(0x000D, 0x9A); g_cpu.A = 0x9A; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x9A39, 57); func_9A39_b0(); return;
  case 7: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x5C); nes_write(0x000D, 0xC4); g_cpu.A = 0xC4; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0xC45C, 57); func_C45C(); return;
  case 8: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x20); nes_write(0x000D, 0x9F); g_cpu.A = 0x9F; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x9F20, 57); func_9F20_b0(); return;
  default: nes_log_inline_miss(0x9AC2, g_cpu.A); return;
}
label_9AD7:;
    /* $9AD7: 90 */ nes_cpu_instruction_boundary(0x9AD7, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9AF9; }
label_9AD9:;
    /* $9AD9: D0 */ nes_cpu_instruction_boundary(0x9AD9, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0x9AA0); return; }
label_9ADB:;
    /* $9ADB: A9 */ nes_cpu_instruction_boundary(0x9ADB, 2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_9ADD:;
    /* $9ADD: AC */ nes_cpu_instruction_boundary(0x9ADD, 4); g_cpu.Y = nes_read(0x69B3); FLAG_NZ(g_cpu.Y);
label_9AE0:;
    /* $9AE0: D0 */ nes_cpu_instruction_boundary(0x9AE0, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9AE4; }
label_9AE2:;
    /* $9AE2: A9 */ nes_cpu_instruction_boundary(0x9AE2, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9AE4:;
    /* $9AE4: 8D */ nes_cpu_instruction_boundary(0x9AE4, 4); nes_write(0x6872, g_cpu.A);
label_9AE7:;
    /* $9AE7: 0A */ nes_cpu_instruction_boundary(0x9AE7, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9AE8:;
    /* $9AE8: 85 */ nes_cpu_instruction_boundary(0x9AE8, 3); nes_write(0x7D, g_cpu.A);
label_9AEA:;
    /* $9AEA: A2 */ nes_cpu_instruction_boundary(0x9AEA, 2); g_cpu.X = 0x52; FLAG_NZ(g_cpu.X);
label_9AEC:;
    /* $9AEC: A0 */ nes_cpu_instruction_boundary(0x9AEC, 2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_9AEE:;
    /* $9AEE: 20 */ nes_cpu_instruction_boundary(0x9AEE, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; func_C20E();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9AEE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9AF1:;
    /* $9AF1: 20 */ nes_cpu_instruction_boundary(0x9AF1, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF3; g_cpu.S--; func_C487();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9AF1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9AF4:;
    /* $9AF4: A9 */ nes_cpu_instruction_boundary(0x9AF4, 2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_9AF6:;
    /* $9AF6: 8D */ nes_cpu_instruction_boundary(0x9AF6, 4); nes_write(0x0684, g_cpu.A);
label_9AF9:;
    /* $9AF9: A9 */ nes_cpu_instruction_boundary(0x9AF9, 2); g_cpu.A = 0x60; FLAG_NZ(g_cpu.A);
label_9AFB:;
    /* $9AFB: 85 */ nes_cpu_instruction_boundary(0x9AFB, 3); nes_write(0x2C, g_cpu.A);
label_9AFD:;
    /* $9AFD: A9 */ nes_cpu_instruction_boundary(0x9AFD, 2); g_cpu.A = 0x36; FLAG_NZ(g_cpu.A);
label_9AFF:;
    /* $9AFF: 85 */ nes_cpu_instruction_boundary(0x9AFF, 3); nes_write(0x7C, g_cpu.A);
label_9B01:;
    /* $9B01: A9 */ nes_cpu_instruction_boundary(0x9B01, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9B03:;
    /* $9B03: 85 */ nes_cpu_instruction_boundary(0x9B03, 3); nes_write(0x7E, g_cpu.A);
label_9B05:;
    /* $9B05: 85 */ nes_cpu_instruction_boundary(0x9B05, 3); nes_write(0x7F, g_cpu.A);
label_9B07:;
    /* $9B07: 85 */ nes_cpu_instruction_boundary(0x9B07, 3); nes_write(0x7B, g_cpu.A);
label_9B09:;
    /* $9B09: 85 */ nes_cpu_instruction_boundary(0x9B09, 3); nes_write(0x7A, g_cpu.A);
label_9B0B:;
    /* $9B0B: 85 */ nes_cpu_instruction_boundary(0x9B0B, 3); nes_write(0x81, g_cpu.A);
label_9B0D:;
    /* $9B0D: 85 */ nes_cpu_instruction_boundary(0x9B0D, 3); nes_write(0x80, g_cpu.A);
label_9B0F:;
    /* $9B0F: A9 */ nes_cpu_instruction_boundary(0x9B0F, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9B11:;
    /* $9B11: 85 */ nes_cpu_instruction_boundary(0x9B11, 3); nes_write(0x1C, g_cpu.A);
label_9B13:;
    /* $9B13: A9 */ nes_cpu_instruction_boundary(0x9B13, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_9B15:;
    /* $9B15: 85 */ nes_cpu_instruction_boundary(0x9B15, 3); nes_write(0x82, g_cpu.A);
label_9B17:;
    /* $9B17: E6 */ nes_cpu_instruction_boundary(0x9B17, 5); { uint16_t a=0x33; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9B19:;
    /* $9B19: 4C */ nes_cpu_instruction_boundary(0x9B19, 3); nes_cpu_instruction_boundary(0xC447, 2); func_C447(); return;
}

void func_98AE_b0(void) { /* LoadStarSprites */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_98AE_b0");
#endif
label_98AE:; /* LoadStarSprites */
    /* $98AE: A0 */ nes_cpu_instruction_boundary(0x98AE, 2); g_cpu.Y = 0x9F; FLAG_NZ(g_cpu.Y);
label_98B0:; /* LoadStarSprites_loop */
    /* $98B0: B9 */ nes_cpu_instruction_boundary(0x98B0, 4); g_cpu.A = nes_read((0x6E00 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_98B3:;
    /* $98B3: 99 */ nes_cpu_instruction_boundary(0x98B3, 5); nes_write((0x0260 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_98B6:;
    /* $98B6: 88 */ nes_cpu_instruction_boundary(0x98B6, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_98B7:;
    /* $98B7: C0 */ nes_cpu_instruction_boundary(0x98B7, 2); { int r=g_cpu.Y-0xFF; g_cpu.C=(g_cpu.Y>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_98B9:;
    /* $98B9: D0 */ nes_cpu_instruction_boundary(0x98B9, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0x98B0, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_98B0;
    }
label_98BB:;
    /* $98BB: A9 */ nes_cpu_instruction_boundary(0x98BB, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_98BD:;
    /* $98BD: 85 */ nes_cpu_instruction_boundary(0x98BD, 3); nes_write(0xC8, g_cpu.A);
label_98BF:;
    /* $98BF: 60 */ nes_cpu_instruction_boundary(0x98BF, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8A8C_b0(void) { /* CrossExplodeDataTbl_end_2 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A8C_b0");
#endif
label_8A8C:; /* CrossExplodeDataTbl_end_2 */
    /* $8A8C: A4 */ nes_cpu_instruction_boundary(0x8A8C, 3); g_cpu.Y = nes_read(0xC1); FLAG_NZ(g_cpu.Y);
label_8A8E:;
    /* $8A8E: B9 */ nes_cpu_instruction_boundary(0x8A8E, 4); g_cpu.A = nes_read((0x8A9A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8A91:;
    /* $8A91: C9 */ nes_cpu_instruction_boundary(0x8A91, 2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_8A93:;
    /* $8A93: F0 */ nes_cpu_instruction_boundary(0x8A93, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8A99; }
label_8A95:;
    /* $8A95: 85 */ nes_cpu_instruction_boundary(0x8A95, 3); nes_write(0x1C, g_cpu.A);
label_8A97:;
    /* $8A97: E6 */ nes_cpu_instruction_boundary(0x8A97, 5); { uint16_t a=0xC1; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8A99:; /* LoadPalData_RTS */
    /* $8A99: 60 */ nes_cpu_instruction_boundary(0x8A99, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_87AB_b0(void) { /* LoadSparkleData */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_87AB_b0");
#endif
label_87AB:; /* LoadSparkleData */
    /* $87AB: A2 */ nes_cpu_instruction_boundary(0x87AB, 2); g_cpu.X = 0x0A; FLAG_NZ(g_cpu.X);
label_87AD:;
    /* $87AD: BD */ nes_cpu_instruction_boundary(0x87AD, 4); g_cpu.A = nes_read((0x87C4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_87B0:;
    /* $87B0: 9D */ nes_cpu_instruction_boundary(0x87B0, 5); nes_write((0x6EA0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_87B3:;
    /* $87B3: 9D */ nes_cpu_instruction_boundary(0x87B3, 5); nes_write((0x6EB0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_87B6:;
    /* $87B6: CA */ nes_cpu_instruction_boundary(0x87B6, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_87B7:;
    /* $87B7: 10 */ nes_cpu_instruction_boundary(0x87B7, 2); if (!g_cpu.N) {
    nes_cpu_instruction_boundary(0x87AD, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_87AD;
    }
label_87B9:;
    /* $87B9: A9 */ nes_cpu_instruction_boundary(0x87B9, 2); g_cpu.A = 0x6B; FLAG_NZ(g_cpu.A);
label_87BB:;
    /* $87BB: 8D */ nes_cpu_instruction_boundary(0x87BB, 4); nes_write(0x6EB0, g_cpu.A);
label_87BE:;
    /* $87BE: A9 */ nes_cpu_instruction_boundary(0x87BE, 2); g_cpu.A = 0xDC; FLAG_NZ(g_cpu.A);
label_87C0:;
    /* $87C0: 8D */ nes_cpu_instruction_boundary(0x87C0, 4); nes_write(0x6EB3, g_cpu.A);
label_87C3:;
    /* $87C3: 60 */ nes_cpu_instruction_boundary(0x87C3, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_87CF_b0_body(int _entry) { /* UpdateSparkleSprites */
    switch (_entry) {
        case 1: goto label_87D6;
        case 2: goto label_87D9;
    }
label_87CF:; /* UpdateSparkleSprites */
    /* $87CF: A2 */ nes_cpu_instruction_boundary(0x87CF, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_87D1:;
    /* $87D1: 20 */ nes_cpu_instruction_boundary(0x87D1, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x87; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD3; g_cpu.S--; func_87D6_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x87D1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_87D4:;
    /* $87D4: A2 */ nes_cpu_instruction_boundary(0x87D4, 2); g_cpu.X = 0x10; FLAG_NZ(g_cpu.X);
label_87D6:; /* DoTwoSparkleUpdates */
    /* $87D6: 20 */ nes_cpu_instruction_boundary(0x87D6, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x87; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD8; g_cpu.S--; func_87D9_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x87D6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_87D9:; /* SparkleUpdate */
    /* $87D9: BD */ nes_cpu_instruction_boundary(0x87D9, 4); g_cpu.A = nes_read((0x6EA5 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_87DC:;
    /* $87DC: D0 */ nes_cpu_instruction_boundary(0x87DC, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_87E1; }
label_87DE:;
    /* $87DE: 20 */ nes_cpu_instruction_boundary(0x87DE, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x87; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE0; g_cpu.S--; func_881A_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x87DE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_87E1:; /* SparkleUpdate_endIf_A */
    /* $87E1: BD */ nes_cpu_instruction_boundary(0x87E1, 4); g_cpu.A = nes_read((0x6EAA + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_87E4:;
    /* $87E4: D0 */ nes_cpu_instruction_boundary(0x87E4, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_8819; }
label_87E6:;
    /* $87E6: DE */ nes_cpu_instruction_boundary(0x87E6, 7); { uint16_t a=(0x6EA5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_87E9:;
    /* $87E9: BD */ nes_cpu_instruction_boundary(0x87E9, 4); g_cpu.A = nes_read((0x6EA6 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_87EC:;
    /* $87EC: 18 */ nes_cpu_instruction_boundary(0x87EC, 2); g_cpu.C = 0;
label_87ED:;
    /* $87ED: 7D */ nes_cpu_instruction_boundary(0x87ED, 4); { uint8_t m=nes_read((0x6EA0 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_87F0:;
    /* $87F0: 9D */ nes_cpu_instruction_boundary(0x87F0, 5); nes_write((0x6EA0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_87F3:;
    /* $87F3: BD */ nes_cpu_instruction_boundary(0x87F3, 4); g_cpu.A = nes_read((0x6EA7 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_87F6:;
    /* $87F6: 18 */ nes_cpu_instruction_boundary(0x87F6, 2); g_cpu.C = 0;
label_87F7:;
    /* $87F7: 7D */ nes_cpu_instruction_boundary(0x87F7, 4); { uint8_t m=nes_read((0x6EA3 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_87FA:;
    /* $87FA: 9D */ nes_cpu_instruction_boundary(0x87FA, 5); nes_write((0x6EA3 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_87FD:;
    /* $87FD: DE */ nes_cpu_instruction_boundary(0x87FD, 7); { uint16_t a=(0x6EA8 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8800:;
    /* $8800: D0 */ nes_cpu_instruction_boundary(0x8800, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8816; }
label_8802:;
    /* $8802: BD */ nes_cpu_instruction_boundary(0x8802, 4); g_cpu.A = nes_read((0x6EA1 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8805:;
    /* $8805: 49 */ nes_cpu_instruction_boundary(0x8805, 2); g_cpu.A ^= 0x03; FLAG_NZ(g_cpu.A);
label_8807:;
    /* $8807: 9D */ nes_cpu_instruction_boundary(0x8807, 5); nes_write((0x6EA1 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_880A:;
    /* $880A: A9 */ nes_cpu_instruction_boundary(0x880A, 2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_880C:;
    /* $880C: 9D */ nes_cpu_instruction_boundary(0x880C, 5); nes_write((0x6EA8 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_880F:;
    /* $880F: 0A */ nes_cpu_instruction_boundary(0x880F, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8810:;
    /* $8810: 5D */ nes_cpu_instruction_boundary(0x8810, 4); g_cpu.A ^= nes_read((0x6EA2 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8813:;
    /* $8813: 9D */ nes_cpu_instruction_boundary(0x8813, 5); nes_write((0x6EA2 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8816:; /* SparkleUpdate_endIf_B */
    /* $8816: 4C */ nes_cpu_instruction_boundary(0x8816, 3); nes_cpu_instruction_boundary(0x887B, 2); func_887B_b0(); return;
label_8819:; /* SparkleUpdate_RTS */
    /* $8819: 60 */ nes_cpu_instruction_boundary(0x8819, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_87CF_b0(void) { /* UpdateSparkleSprites */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_87CF_b0");
#endif
    func_87CF_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_87D6_b0(void) { /* DoTwoSparkleUpdates */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_87D6_b0");
#endif
    func_87CF_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_87D9_b0(void) { /* SparkleUpdate */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_87D9_b0");
#endif
    func_87CF_b0_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8897_b0(void) { /* InitCrossMissiles */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8897_b0");
#endif
label_8897:; /* InitCrossMissiles */
    /* $8897: A9 */ nes_cpu_instruction_boundary(0x8897, 2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_8899:;
    /* $8899: 85 */ nes_cpu_instruction_boundary(0x8899, 3); nes_write(0xBD, g_cpu.A);
label_889B:;
    /* $889B: A2 */ nes_cpu_instruction_boundary(0x889B, 2); g_cpu.X = 0x3F; FLAG_NZ(g_cpu.X);
label_889D:; /* InitCrossMissiles_loop */
    /* $889D: BD */ nes_cpu_instruction_boundary(0x889D, 4); g_cpu.A = nes_read((0x88BE + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_88A0:;
    /* $88A0: C5 */ nes_cpu_instruction_boundary(0x88A0, 3); { uint8_t m=nes_read(0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_88A2:;
    /* $88A2: F0 */ nes_cpu_instruction_boundary(0x88A2, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_88AA; }
label_88A4:;
    /* $88A4: 9D */ nes_cpu_instruction_boundary(0x88A4, 5); nes_write((0x6EA0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_88A7:;
    /* $88A7: 9D */ nes_cpu_instruction_boundary(0x88A7, 5); nes_write((0x6EE0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_88AA:; /* InitCrossMissiles_endIf_A */
    /* $88AA: CA */ nes_cpu_instruction_boundary(0x88AA, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_88AB:;
    /* $88AB: 10 */ nes_cpu_instruction_boundary(0x88AB, 2); if (!g_cpu.N) {
    nes_cpu_instruction_boundary(0x889D, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_889D;
    }
label_88AD:;
    /* $88AD: A9 */ nes_cpu_instruction_boundary(0x88AD, 2); g_cpu.A = 0xB8; FLAG_NZ(g_cpu.A);
label_88AF:;
    /* $88AF: 8D */ nes_cpu_instruction_boundary(0x88AF, 4); nes_write(0x6F00, g_cpu.A);
label_88B2:;
    /* $88B2: 8D */ nes_cpu_instruction_boundary(0x88B2, 4); nes_write(0x6F10, g_cpu.A);
label_88B5:;
    /* $88B5: A9 */ nes_cpu_instruction_boundary(0x88B5, 2); g_cpu.A = 0x16; FLAG_NZ(g_cpu.A);
label_88B7:;
    /* $88B7: 8D */ nes_cpu_instruction_boundary(0x88B7, 4); nes_write(0x6F0D, g_cpu.A);
label_88BA:;
    /* $88BA: 8D */ nes_cpu_instruction_boundary(0x88BA, 4); nes_write(0x6F1D, g_cpu.A);
label_88BD:;
    /* $88BD: 60 */ nes_cpu_instruction_boundary(0x88BD, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8B5F_b0(void) { /* DoFadeOut */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8B5F_b0");
#endif
label_8B5F:; /* DoFadeOut */
    /* $8B5F: A4 */ nes_cpu_instruction_boundary(0x8B5F, 3); g_cpu.Y = nes_read(0xC4); FLAG_NZ(g_cpu.Y);
label_8B61:;
    /* $8B61: B9 */ nes_cpu_instruction_boundary(0x8B61, 4); g_cpu.A = nes_read((0x8B6D + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8B64:;
    /* $8B64: C9 */ nes_cpu_instruction_boundary(0x8B64, 2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_8B66:;
    /* $8B66: F0 */ nes_cpu_instruction_boundary(0x8B66, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8B6C; }
label_8B68:;
    /* $8B68: 85 */ nes_cpu_instruction_boundary(0x8B68, 3); nes_write(0x1C, g_cpu.A);
label_8B6A:;
    /* $8B6A: E6 */ nes_cpu_instruction_boundary(0x8B6A, 5); { uint16_t a=0xC4; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8B6C:; /* DoFadeOut_RTS */
    /* $8B6C: 60 */ nes_cpu_instruction_boundary(0x8B6C, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8AA7_b0(void) { /* FlashIntroScreen */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8AA7_b0");
#endif
label_8AA7:; /* FlashIntroScreen */
    /* $8AA7: A4 */ nes_cpu_instruction_boundary(0x8AA7, 3); g_cpu.Y = nes_read(0xC2); FLAG_NZ(g_cpu.Y);
label_8AA9:;
    /* $8AA9: B9 */ nes_cpu_instruction_boundary(0x8AA9, 4); g_cpu.A = nes_read((0x8ABD + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8AAC:;
    /* $8AAC: C9 */ nes_cpu_instruction_boundary(0x8AAC, 2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_8AAE:;
    /* $8AAE: D0 */ nes_cpu_instruction_boundary(0x8AAE, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8AB8; }
label_8AB0:;
    /* $8AB0: A9 */ nes_cpu_instruction_boundary(0x8AB0, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8AB2:;
    /* $8AB2: 85 */ nes_cpu_instruction_boundary(0x8AB2, 3); nes_write(0xC2, g_cpu.A);
label_8AB4:;
    /* $8AB4: 85 */ nes_cpu_instruction_boundary(0x8AB4, 3); nes_write(0xC0, g_cpu.A);
label_8AB6:;
    /* $8AB6: F0 */ nes_cpu_instruction_boundary(0x8AB6, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8ABC; }
label_8AB8:; /* FlashIntroScreen_else_A */
    /* $8AB8: 85 */ nes_cpu_instruction_boundary(0x8AB8, 3); nes_write(0x1C, g_cpu.A);
label_8ABA:;
    /* $8ABA: E6 */ nes_cpu_instruction_boundary(0x8ABA, 5); { uint16_t a=0xC2; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8ABC:; /* FlashIntroScreen_RTS */
    /* $8ABC: 60 */ nes_cpu_instruction_boundary(0x8ABC, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_88FE_b0_body(int _entry) { /* UpdateCrossMissiles */
    switch (_entry) {
        case 1: goto label_8963;
    }
label_88FE:; /* UpdateCrossMissiles */
    /* $88FE: A5 */ nes_cpu_instruction_boundary(0x88FE, 3); g_cpu.A = nes_read(0xBC); FLAG_NZ(g_cpu.A);
label_8900:;
    /* $8900: F0 */ nes_cpu_instruction_boundary(0x8900, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8936; }
label_8902:;
    /* $8902: C6 */ nes_cpu_instruction_boundary(0x8902, 5); { uint16_t a=0xBC; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8904:;
    /* $8904: D0 */ nes_cpu_instruction_boundary(0x8904, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8936; }
label_8906:;
    /* $8906: 0E */ nes_cpu_instruction_boundary(0x8906, 6); { uint16_t a=0x6EAC; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8909:;
    /* $8909: 0E */ nes_cpu_instruction_boundary(0x8909, 6); { uint16_t a=0x6EAD; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_890C:;
    /* $890C: 0E */ nes_cpu_instruction_boundary(0x890C, 6); { uint16_t a=0x6EBC; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_890F:;
    /* $890F: 0E */ nes_cpu_instruction_boundary(0x890F, 6); { uint16_t a=0x6EBD; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8912:;
    /* $8912: 0E */ nes_cpu_instruction_boundary(0x8912, 6); { uint16_t a=0x6ECC; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8915:;
    /* $8915: 0E */ nes_cpu_instruction_boundary(0x8915, 6); { uint16_t a=0x6ECD; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8918:;
    /* $8918: 0E */ nes_cpu_instruction_boundary(0x8918, 6); { uint16_t a=0x6EDC; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_891B:;
    /* $891B: 0E */ nes_cpu_instruction_boundary(0x891B, 6); { uint16_t a=0x6EDD; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_891E:;
    /* $891E: 0E */ nes_cpu_instruction_boundary(0x891E, 6); { uint16_t a=0x6EEC; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8921:;
    /* $8921: 0E */ nes_cpu_instruction_boundary(0x8921, 6); { uint16_t a=0x6EED; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8924:;
    /* $8924: 0E */ nes_cpu_instruction_boundary(0x8924, 6); { uint16_t a=0x6EFC; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8927:;
    /* $8927: 0E */ nes_cpu_instruction_boundary(0x8927, 6); { uint16_t a=0x6EFD; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_892A:;
    /* $892A: 0E */ nes_cpu_instruction_boundary(0x892A, 6); { uint16_t a=0x6F0C; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_892D:;
    /* $892D: 0E */ nes_cpu_instruction_boundary(0x892D, 6); { uint16_t a=0x6F0D; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8930:;
    /* $8930: 0E */ nes_cpu_instruction_boundary(0x8930, 6); { uint16_t a=0x6F1C; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8933:;
    /* $8933: 0E */ nes_cpu_instruction_boundary(0x8933, 6); { uint16_t a=0x6F1D; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8936:;
    /* $8936: A2 */ nes_cpu_instruction_boundary(0x8936, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_8938:;
    /* $8938: 20 */ nes_cpu_instruction_boundary(0x8938, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x89; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3A; g_cpu.S--; func_8963_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8938, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_893B:;
    /* $893B: A2 */ nes_cpu_instruction_boundary(0x893B, 2); g_cpu.X = 0x10; FLAG_NZ(g_cpu.X);
label_893D:;
    /* $893D: 20 */ nes_cpu_instruction_boundary(0x893D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x89; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3F; g_cpu.S--; func_8963_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x893D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8940:;
    /* $8940: A2 */ nes_cpu_instruction_boundary(0x8940, 2); g_cpu.X = 0x20; FLAG_NZ(g_cpu.X);
label_8942:;
    /* $8942: 20 */ nes_cpu_instruction_boundary(0x8942, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x89; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x44; g_cpu.S--; func_8963_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8942, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8945:;
    /* $8945: A2 */ nes_cpu_instruction_boundary(0x8945, 2); g_cpu.X = 0x30; FLAG_NZ(g_cpu.X);
label_8947:;
    /* $8947: A5 */ nes_cpu_instruction_boundary(0x8947, 3); g_cpu.A = nes_read(0xBD); FLAG_NZ(g_cpu.A);
label_8949:;
    /* $8949: F0 */ nes_cpu_instruction_boundary(0x8949, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_894F; }
label_894B:;
    /* $894B: C6 */ nes_cpu_instruction_boundary(0x894B, 5); { uint16_t a=0xBD; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_894D:;
    /* $894D: D0 */ nes_cpu_instruction_boundary(0x894D, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8963; }
label_894F:;
    /* $894F: 20 */ nes_cpu_instruction_boundary(0x894F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x89; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x51; g_cpu.S--; func_8963_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x894F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8952:;
    /* $8952: A2 */ nes_cpu_instruction_boundary(0x8952, 2); g_cpu.X = 0x40; FLAG_NZ(g_cpu.X);
label_8954:;
    /* $8954: 20 */ nes_cpu_instruction_boundary(0x8954, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x89; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x56; g_cpu.S--; func_8963_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8954, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8957:;
    /* $8957: A2 */ nes_cpu_instruction_boundary(0x8957, 2); g_cpu.X = 0x50; FLAG_NZ(g_cpu.X);
label_8959:;
    /* $8959: 20 */ nes_cpu_instruction_boundary(0x8959, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x89; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x5B; g_cpu.S--; func_8963_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8959, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_895C:;
    /* $895C: A2 */ nes_cpu_instruction_boundary(0x895C, 2); g_cpu.X = 0x60; FLAG_NZ(g_cpu.X);
label_895E:;
    /* $895E: 20 */ nes_cpu_instruction_boundary(0x895E, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x89; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x60; g_cpu.S--; func_8963_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x895E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8961:;
    /* $8961: A2 */ nes_cpu_instruction_boundary(0x8961, 2); g_cpu.X = 0x70; FLAG_NZ(g_cpu.X);
label_8963:; /* UpdateCrossMissile */
    /* $8963: BD */ nes_cpu_instruction_boundary(0x8963, 4); g_cpu.A = nes_read((0x6EAA + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8966:;
    /* $8966: D0 */ nes_cpu_instruction_boundary(0x8966, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8975; }
label_8968:;
    /* $8968: 20 */ nes_cpu_instruction_boundary(0x8968, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x89; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6A; g_cpu.S--; func_981E_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8968, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_896B:;
    /* $896B: B0 */ nes_cpu_instruction_boundary(0x896B, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8972; }
label_896D:;
    /* $896D: A9 */ nes_cpu_instruction_boundary(0x896D, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_896F:;
    /* $896F: 9D */ nes_cpu_instruction_boundary(0x896F, 5); nes_write((0x6EAA + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8972:; /* UpdateCrossMissile_endIf_A */
    /* $8972: 4C */ nes_cpu_instruction_boundary(0x8972, 3); nes_cpu_instruction_boundary(0x887B, 2); func_887B_b0(); return;
label_8975:; /* UpdateCrossMissile_RTS */
    /* $8975: 60 */ nes_cpu_instruction_boundary(0x8975, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_88FE_b0(void) { /* UpdateCrossMissiles */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_88FE_b0");
#endif
    func_88FE_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8963_b0(void) { /* UpdateCrossMissile */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8963_b0");
#endif
    func_88FE_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8976_b0(void) { /* UpdateCrossExplode */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8976_b0");
#endif
label_8976:; /* UpdateCrossExplode */
    /* $8976: A5 */ nes_cpu_instruction_boundary(0x8976, 3); g_cpu.A = nes_read(0xC7); FLAG_NZ(g_cpu.A);
label_8978:;
    /* $8978: F0 */ nes_cpu_instruction_boundary(0x8978, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_89A9; }
label_897A:;
    /* $897A: A4 */ nes_cpu_instruction_boundary(0x897A, 3); g_cpu.Y = nes_read(0xC6); FLAG_NZ(g_cpu.Y);
label_897C:;
    /* $897C: C0 */ nes_cpu_instruction_boundary(0x897C, 2); { int r=g_cpu.Y-0x04; g_cpu.C=(g_cpu.Y>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_897E:;
    /* $897E: 90 */ nes_cpu_instruction_boundary(0x897E, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8986; }
label_8980:;
    /* $8980: D0 */ nes_cpu_instruction_boundary(0x8980, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_89A9; }
label_8982:;
    /* $8982: A9 */ nes_cpu_instruction_boundary(0x8982, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8984:;
    /* $8984: 85 */ nes_cpu_instruction_boundary(0x8984, 3); nes_write(0xC7, g_cpu.A);
label_8986:;
    /* $8986: B9 */ nes_cpu_instruction_boundary(0x8986, 4); g_cpu.A = nes_read((0x89AA + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8989:;
    /* $8989: 85 */ nes_cpu_instruction_boundary(0x8989, 3); nes_write(0x00, g_cpu.A);
label_898B:;
    /* $898B: A0 */ nes_cpu_instruction_boundary(0x898B, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_898D:;
    /* $898D: BE */ nes_cpu_instruction_boundary(0x898D, 4); g_cpu.X = nes_read((0x8A4B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_8990:;
    /* $8990: C8 */ nes_cpu_instruction_boundary(0x8990, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8991:;
    /* $8991: B9 */ nes_cpu_instruction_boundary(0x8991, 4); g_cpu.A = nes_read((0x8A4B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8994:;
    /* $8994: 9D */ nes_cpu_instruction_boundary(0x8994, 5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8997:;
    /* $8997: E8 */ nes_cpu_instruction_boundary(0x8997, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8998:;
    /* $8998: C8 */ nes_cpu_instruction_boundary(0x8998, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8999:;
    /* $8999: 8A */ nes_cpu_instruction_boundary(0x8999, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_899A:;
    /* $899A: 29 */ nes_cpu_instruction_boundary(0x899A, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_899C:;
    /* $899C: D0 */ nes_cpu_instruction_boundary(0x899C, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0x8991, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8991;
    }
label_899E:;
    /* $899E: C4 */ nes_cpu_instruction_boundary(0x899E, 3); { uint8_t m=nes_read(0x00); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_89A0:;
    /* $89A0: D0 */ nes_cpu_instruction_boundary(0x89A0, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0x898D, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_898D;
    }
label_89A2:;
    /* $89A2: A5 */ nes_cpu_instruction_boundary(0x89A2, 3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_89A4:;
    /* $89A4: 4A */ nes_cpu_instruction_boundary(0x89A4, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_89A5:;
    /* $89A5: 90 */ nes_cpu_instruction_boundary(0x89A5, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_89A9; }
label_89A7:;
    /* $89A7: E6 */ nes_cpu_instruction_boundary(0x89A7, 5); { uint16_t a=0xC6; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_89A9:;
    /* $89A9: 60 */ nes_cpu_instruction_boundary(0x89A9, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_909F_b0(void) { /* ClearAll */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_909F_b0");
#endif
label_909F:; /* ClearAll */
    /* $909F: 20 */ nes_cpu_instruction_boundary(0x909F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x90; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA1; g_cpu.S--; func_C439();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x909F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_90A2:;
    /* $90A2: 20 */ nes_cpu_instruction_boundary(0x90A2, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x90; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA4; g_cpu.S--; func_C158();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x90A2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_90A5:;
    /* $90A5: 20 */ nes_cpu_instruction_boundary(0x90A5, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x90; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA7; g_cpu.S--; func_C1A3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x90A5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_90A8:;
    /* $90A8: A5 */ nes_cpu_instruction_boundary(0x90A8, 3); g_cpu.A = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_90AA:;
    /* $90AA: 29 */ nes_cpu_instruction_boundary(0x90AA, 2); g_cpu.A &= 0xFC; FLAG_NZ(g_cpu.A);
label_90AC:;
    /* $90AC: 85 */ nes_cpu_instruction_boundary(0x90AC, 3); nes_write(0xFF, g_cpu.A);
label_90AE:;
    /* $90AE: A9 */ nes_cpu_instruction_boundary(0x90AE, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_90B0:;
    /* $90B0: 85 */ nes_cpu_instruction_boundary(0x90B0, 3); nes_write(0xFC, g_cpu.A);
label_90B2:;
    /* $90B2: 85 */ nes_cpu_instruction_boundary(0x90B2, 3); nes_write(0xFD, g_cpu.A);
label_90B4:;
    /* $90B4: 20 */ nes_cpu_instruction_boundary(0x90B4, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x90; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; func_C42C();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x90B4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_90B7:;
    /* $90B7: 4C */ nes_cpu_instruction_boundary(0x90B7, 3); nes_cpu_instruction_boundary(0xC47D, 2); func_C47D(); return;
}

void func_9449_b0(void) { /* PreparePPUProcess_ */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9449_b0");
#endif
label_9449:; /* PreparePPUProcess_ */
    /* $9449: 86 */ nes_cpu_instruction_boundary(0x9449, 3); nes_write(0x00, g_cpu.X);
label_944B:;
    /* $944B: 84 */ nes_cpu_instruction_boundary(0x944B, 3); nes_write(0x01, g_cpu.Y);
label_944D:;
    /* $944D: 4C */ nes_cpu_instruction_boundary(0x944D, 3); nes_cpu_instruction_boundary(0xC30C, 2); func_C30C(); return;
}

void func_932B_b0(void) { /* InitializeStats */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_932B_b0");
#endif
label_932B:; /* InitializeStats */
    /* $932B: A9 */ nes_cpu_instruction_boundary(0x932B, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_932D:;
    /* $932D: 8D */ nes_cpu_instruction_boundary(0x932D, 4); nes_write(0x6876, g_cpu.A);
label_9330:;
    /* $9330: 8D */ nes_cpu_instruction_boundary(0x9330, 4); nes_write(0x6877, g_cpu.A);
label_9333:;
    /* $9333: 8D */ nes_cpu_instruction_boundary(0x9333, 4); nes_write(0x6878, g_cpu.A);
label_9336:;
    /* $9336: 8D */ nes_cpu_instruction_boundary(0x9336, 4); nes_write(0x6879, g_cpu.A);
label_9339:;
    /* $9339: 8D */ nes_cpu_instruction_boundary(0x9339, 4); nes_write(0x687A, g_cpu.A);
label_933C:;
    /* $933C: 8D */ nes_cpu_instruction_boundary(0x933C, 4); nes_write(0x687B, g_cpu.A);
label_933F:;
    /* $933F: 8D */ nes_cpu_instruction_boundary(0x933F, 4); nes_write(0x687C, g_cpu.A);
label_9342:;
    /* $9342: 8D */ nes_cpu_instruction_boundary(0x9342, 4); nes_write(0x687D, g_cpu.A);
label_9345:;
    /* $9345: 8D */ nes_cpu_instruction_boundary(0x9345, 4); nes_write(0x687E, g_cpu.A);
label_9348:;
    /* $9348: 8D */ nes_cpu_instruction_boundary(0x9348, 4); nes_write(0x687F, g_cpu.A);
label_934B:;
    /* $934B: 8D */ nes_cpu_instruction_boundary(0x934B, 4); nes_write(0x6880, g_cpu.A);
label_934E:;
    /* $934E: 8D */ nes_cpu_instruction_boundary(0x934E, 4); nes_write(0x6883, g_cpu.A);
label_9351:;
    /* $9351: 8D */ nes_cpu_instruction_boundary(0x9351, 4); nes_write(0x69B3, g_cpu.A);
label_9354:;
    /* $9354: A9 */ nes_cpu_instruction_boundary(0x9354, 2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_9356:;
    /* $9356: 85 */ nes_cpu_instruction_boundary(0x9356, 3); nes_write(0x24, g_cpu.A);
label_9358:;
    /* $9358: 60 */ nes_cpu_instruction_boundary(0x9358, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_940B_b0(void) { /* DisplayInputCharacters */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_940B_b0");
#endif
label_940B:; /* DisplayInputCharacters */
    /* $940B: AD */ nes_cpu_instruction_boundary(0x940B, 4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_940E:;
    /* $940E: A0 */ nes_cpu_instruction_boundary(0x940E, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_9410:;
    /* $9410: 98 */ nes_cpu_instruction_boundary(0x9410, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_9411:;
    /* $9411: 85 */ nes_cpu_instruction_boundary(0x9411, 3); nes_write(0x00, g_cpu.A);
label_9413:;
    /* $9413: 85 */ nes_cpu_instruction_boundary(0x9413, 3); nes_write(0x01, g_cpu.A);
label_9415:;
    /* $9415: 0A */ nes_cpu_instruction_boundary(0x9415, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9416:;
    /* $9416: AA */ nes_cpu_instruction_boundary(0x9416, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_9417:;
    /* $9417: BD */ nes_cpu_instruction_boundary(0x9417, 4); g_cpu.A = nes_read((0x943F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_941A:;
    /* $941A: 8D */ nes_cpu_instruction_boundary(0x941A, 4); nes_write(0x2006, g_cpu.A);
label_941D:;
    /* $941D: BD */ nes_cpu_instruction_boundary(0x941D, 4); g_cpu.A = nes_read((0x9440 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9420:;
    /* $9420: 8D */ nes_cpu_instruction_boundary(0x9420, 4); nes_write(0x2006, g_cpu.A);
label_9423:;
    /* $9423: A2 */ nes_cpu_instruction_boundary(0x9423, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_9425:;
    /* $9425: B9 */ nes_cpu_instruction_boundary(0x9425, 4); g_cpu.A = nes_read((0x99A2 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9428:;
    /* $9428: 8D */ nes_cpu_instruction_boundary(0x9428, 4); nes_write(0x2007, g_cpu.A);
label_942B:;
    /* $942B: A9 */ nes_cpu_instruction_boundary(0x942B, 2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_942D:;
    /* $942D: 8D */ nes_cpu_instruction_boundary(0x942D, 4); nes_write(0x2007, g_cpu.A);
label_9430:;
    /* $9430: C8 */ nes_cpu_instruction_boundary(0x9430, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9431:;
    /* $9431: E8 */ nes_cpu_instruction_boundary(0x9431, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9432:;
    /* $9432: E0 */ nes_cpu_instruction_boundary(0x9432, 2); { int r=g_cpu.X-0x0D; g_cpu.C=(g_cpu.X>=0x0D)?1:0; FLAG_NZ(r&0xFF); }
label_9434:;
    /* $9434: D0 */ nes_cpu_instruction_boundary(0x9434, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0x9425, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9425;
    }
label_9436:;
    /* $9436: E6 */ nes_cpu_instruction_boundary(0x9436, 5); { uint16_t a=0x01; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9438:;
    /* $9438: A5 */ nes_cpu_instruction_boundary(0x9438, 3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_943A:;
    /* $943A: C9 */ nes_cpu_instruction_boundary(0x943A, 2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_943C:;
    /* $943C: D0 */ nes_cpu_instruction_boundary(0x943C, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0x9415, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9415;
    }
label_943E:;
    /* $943E: 60 */ nes_cpu_instruction_boundary(0x943E, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_90D1_b0(void) { /* TurnOnDisplay */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_90D1_b0");
#endif
label_90D1:; /* TurnOnDisplay */
    /* $90D1: 20 */ nes_cpu_instruction_boundary(0x90D1, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x90; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD3; g_cpu.S--; func_C487();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x90D1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_90D4:;
    /* $90D4: 4C */ nes_cpu_instruction_boundary(0x90D4, 3); nes_cpu_instruction_boundary(0xC447, 2); func_C447(); return;
}

void func_8C5E_b0(void) { /* CheckPassword */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C5E_b0");
#endif
label_8C5E:; /* CheckPassword */
    /* $8C5E: 20 */ nes_cpu_instruction_boundary(0x8C5E, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x60; g_cpu.S--; func_8F60_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8C5E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8C61:;
    /* $8C61: 20 */ nes_cpu_instruction_boundary(0x8C61, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x63; g_cpu.S--; func_8DDE_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8C61, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8C64:;
    /* $8C64: B0 */ nes_cpu_instruction_boundary(0x8C64, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8C69; }
label_8C66:;
    /* $8C66: 4C */ nes_cpu_instruction_boundary(0x8C66, 3); nes_cpu_instruction_boundary(0x92D4, 2); func_92D4_b0(); return;
label_8C69:;
    /* $8C69: AD */ nes_cpu_instruction_boundary(0x8C69, 4); g_cpu.A = nes_read(0x0684); FLAG_NZ(g_cpu.A);
label_8C6C:;
    /* $8C6C: 09 */ nes_cpu_instruction_boundary(0x8C6C, 2); g_cpu.A |= 0x01; FLAG_NZ(g_cpu.A);
label_8C6E:;
    /* $8C6E: 8D */ nes_cpu_instruction_boundary(0x8C6E, 4); nes_write(0x0684, g_cpu.A);
label_8C71:;
    /* $8C71: A9 */ nes_cpu_instruction_boundary(0x8C71, 2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_8C73:;
    /* $8C73: 85 */ nes_cpu_instruction_boundary(0x8C73, 3); nes_write(0x2C, g_cpu.A);
label_8C75:;
    /* $8C75: A9 */ nes_cpu_instruction_boundary(0x8C75, 2); g_cpu.A = 0x18; FLAG_NZ(g_cpu.A);
label_8C77:;
    /* $8C77: 85 */ nes_cpu_instruction_boundary(0x8C77, 3); nes_write(0x1F, g_cpu.A);
label_8C79:;
    /* $8C79: 60 */ nes_cpu_instruction_boundary(0x8C79, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9450_b0(void) { /* PrepareWriteVRAMStringRAM */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9450_b0");
#endif
label_9450:; /* PrepareWriteVRAMStringRAM */
    /* $9450: 86 */ nes_cpu_instruction_boundary(0x9450, 3); nes_write(0x00, g_cpu.X);
label_9452:;
    /* $9452: 84 */ nes_cpu_instruction_boundary(0x9452, 3); nes_write(0x01, g_cpu.Y);
label_9454:;
    /* $9454: A2 */ nes_cpu_instruction_boundary(0x9454, 2); g_cpu.X = 0x80; FLAG_NZ(g_cpu.X);
label_9456:;
    /* $9456: A0 */ nes_cpu_instruction_boundary(0x9456, 2); g_cpu.Y = 0x07; FLAG_NZ(g_cpu.Y);
label_9458:;
    /* $9458: 86 */ nes_cpu_instruction_boundary(0x9458, 3); nes_write(0x02, g_cpu.X);
label_945A:;
    /* $945A: 84 */ nes_cpu_instruction_boundary(0x945A, 3); nes_write(0x03, g_cpu.Y);
label_945C:;
    /* $945C: 4C */ nes_cpu_instruction_boundary(0x945C, 3); nes_cpu_instruction_boundary(0xC328, 2); func_C328(); return;
}

void func_9324_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9324_b0");
#endif
label_9324:;
    /* $9324: 60 */ nes_cpu_instruction_boundary(0x9324, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8C7A_b0(void) { /* CalculatePassword */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C7A_b0");
#endif
label_8C7A:; /* CalculatePassword */
    /* $8C7A: A9 */ nes_cpu_instruction_boundary(0x8C7A, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8C7C:;
    /* $8C7C: A0 */ nes_cpu_instruction_boundary(0x8C7C, 2); g_cpu.Y = 0x0F; FLAG_NZ(g_cpu.Y);
label_8C7E:; /* CalculatePassword_loop_A */
    /* $8C7E: 99 */ nes_cpu_instruction_boundary(0x8C7E, 5); nes_write((0x6988 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8C81:;
    /* $8C81: 99 */ nes_cpu_instruction_boundary(0x8C81, 5); nes_write((0x699A + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8C84:;
    /* $8C84: 88 */ nes_cpu_instruction_boundary(0x8C84, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8C85:;
    /* $8C85: 10 */ nes_cpu_instruction_boundary(0x8C85, 2); if (!g_cpu.N) {
    nes_cpu_instruction_boundary(0x8C7E, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8C7E;
    }
label_8C87:;
    /* $8C87: 20 */ nes_cpu_instruction_boundary(0x8C87, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x89; g_cpu.S--; func_8B79_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8C87, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8C8A:;
    /* $8C8A: AD */ nes_cpu_instruction_boundary(0x8C8A, 4); g_cpu.A = nes_read(0x698F); FLAG_NZ(g_cpu.A);
label_8C8D:;
    /* $8C8D: 29 */ nes_cpu_instruction_boundary(0x8C8D, 2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A);
label_8C8F:;
    /* $8C8F: F0 */ nes_cpu_instruction_boundary(0x8C8F, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8C9E; }
label_8C91:;
    /* $8C91: A9 */ nes_cpu_instruction_boundary(0x8C91, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8C93:;
    /* $8C93: 8D */ nes_cpu_instruction_boundary(0x8C93, 4); nes_write(0x698F, g_cpu.A);
label_8C96:;
    /* $8C96: AD */ nes_cpu_instruction_boundary(0x8C96, 4); g_cpu.A = nes_read(0x698E); FLAG_NZ(g_cpu.A);
label_8C99:;
    /* $8C99: 29 */ nes_cpu_instruction_boundary(0x8C99, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_8C9B:;
    /* $8C9B: 8D */ nes_cpu_instruction_boundary(0x8C9B, 4); nes_write(0x698E, g_cpu.A);
label_8C9E:; /* CalculatePassword_endIf_A */
    /* $8C9E: A5 */ nes_cpu_instruction_boundary(0x8C9E, 3); g_cpu.A = nes_read(0x74); FLAG_NZ(g_cpu.A);
label_8CA0:;
    /* $8CA0: 29 */ nes_cpu_instruction_boundary(0x8CA0, 2); g_cpu.A &= 0x3F; FLAG_NZ(g_cpu.A);
label_8CA2:;
    /* $8CA2: AC */ nes_cpu_instruction_boundary(0x8CA2, 4); g_cpu.Y = nes_read(0x69B3); FLAG_NZ(g_cpu.Y);
label_8CA5:;
    /* $8CA5: F0 */ nes_cpu_instruction_boundary(0x8CA5, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8CA9; }
label_8CA7:;
    /* $8CA7: 09 */ nes_cpu_instruction_boundary(0x8CA7, 2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_8CA9:; /* CalculatePassword_endIf_suitless */
    /* $8CA9: 8D */ nes_cpu_instruction_boundary(0x8CA9, 4); nes_write(0x6990, g_cpu.A);
label_8CAC:;
    /* $8CAC: AD */ nes_cpu_instruction_boundary(0x8CAC, 4); g_cpu.A = nes_read(0x6878); FLAG_NZ(g_cpu.A);
label_8CAF:;
    /* $8CAF: 8D */ nes_cpu_instruction_boundary(0x8CAF, 4); nes_write(0x6991, g_cpu.A);
label_8CB2:;
    /* $8CB2: AD */ nes_cpu_instruction_boundary(0x8CB2, 4); g_cpu.A = nes_read(0x6879); FLAG_NZ(g_cpu.A);
label_8CB5:;
    /* $8CB5: 8D */ nes_cpu_instruction_boundary(0x8CB5, 4); nes_write(0x6992, g_cpu.A);
label_8CB8:;
    /* $8CB8: A9 */ nes_cpu_instruction_boundary(0x8CB8, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8CBA:;
    /* $8CBA: 85 */ nes_cpu_instruction_boundary(0x8CBA, 3); nes_write(0x00, g_cpu.A);
label_8CBC:;
    /* $8CBC: AD */ nes_cpu_instruction_boundary(0x8CBC, 4); g_cpu.A = nes_read(0x687B); FLAG_NZ(g_cpu.A);
label_8CBF:;
    /* $8CBF: 29 */ nes_cpu_instruction_boundary(0x8CBF, 2); g_cpu.A &= 0x80; FLAG_NZ(g_cpu.A);
label_8CC1:;
    /* $8CC1: F0 */ nes_cpu_instruction_boundary(0x8CC1, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8CC9; }
label_8CC3:;
    /* $8CC3: A5 */ nes_cpu_instruction_boundary(0x8CC3, 3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_8CC5:;
    /* $8CC5: 09 */ nes_cpu_instruction_boundary(0x8CC5, 2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_8CC7:;
    /* $8CC7: 85 */ nes_cpu_instruction_boundary(0x8CC7, 3); nes_write(0x00, g_cpu.A);
label_8CC9:; /* CalculatePassword_endIf_statueBit7 */
    /* $8CC9: AD */ nes_cpu_instruction_boundary(0x8CC9, 4); g_cpu.A = nes_read(0x687B); FLAG_NZ(g_cpu.A);
label_8CCC:;
    /* $8CCC: 29 */ nes_cpu_instruction_boundary(0x8CCC, 2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_8CCE:;
    /* $8CCE: F0 */ nes_cpu_instruction_boundary(0x8CCE, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8CD6; }
label_8CD0:;
    /* $8CD0: A5 */ nes_cpu_instruction_boundary(0x8CD0, 3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_8CD2:;
    /* $8CD2: 09 */ nes_cpu_instruction_boundary(0x8CD2, 2); g_cpu.A |= 0x40; FLAG_NZ(g_cpu.A);
label_8CD4:;
    /* $8CD4: 85 */ nes_cpu_instruction_boundary(0x8CD4, 3); nes_write(0x00, g_cpu.A);
label_8CD6:; /* CalculatePassword_endIf_statueBit6 */
    /* $8CD6: AD */ nes_cpu_instruction_boundary(0x8CD6, 4); g_cpu.A = nes_read(0x687C); FLAG_NZ(g_cpu.A);
label_8CD9:;
    /* $8CD9: 29 */ nes_cpu_instruction_boundary(0x8CD9, 2); g_cpu.A &= 0x80; FLAG_NZ(g_cpu.A);
label_8CDB:;
    /* $8CDB: F0 */ nes_cpu_instruction_boundary(0x8CDB, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8CE3; }
label_8CDD:;
    /* $8CDD: A5 */ nes_cpu_instruction_boundary(0x8CDD, 3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_8CDF:;
    /* $8CDF: 09 */ nes_cpu_instruction_boundary(0x8CDF, 2); g_cpu.A |= 0x20; FLAG_NZ(g_cpu.A);
label_8CE1:;
    /* $8CE1: 85 */ nes_cpu_instruction_boundary(0x8CE1, 3); nes_write(0x00, g_cpu.A);
label_8CE3:; /* CalculatePassword_endIf_statueBit5 */
    /* $8CE3: AD */ nes_cpu_instruction_boundary(0x8CE3, 4); g_cpu.A = nes_read(0x687C); FLAG_NZ(g_cpu.A);
label_8CE6:;
    /* $8CE6: 29 */ nes_cpu_instruction_boundary(0x8CE6, 2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_8CE8:;
    /* $8CE8: F0 */ nes_cpu_instruction_boundary(0x8CE8, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8CF0; }
label_8CEA:;
    /* $8CEA: A5 */ nes_cpu_instruction_boundary(0x8CEA, 3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_8CEC:;
    /* $8CEC: 09 */ nes_cpu_instruction_boundary(0x8CEC, 2); g_cpu.A |= 0x10; FLAG_NZ(g_cpu.A);
label_8CEE:;
    /* $8CEE: 85 */ nes_cpu_instruction_boundary(0x8CEE, 3); nes_write(0x00, g_cpu.A);
label_8CF0:; /* CalculatePassword_endIf_statueBit4 */
    /* $8CF0: A5 */ nes_cpu_instruction_boundary(0x8CF0, 3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_8CF2:;
    /* $8CF2: 8D */ nes_cpu_instruction_boundary(0x8CF2, 4); nes_write(0x6997, g_cpu.A);
label_8CF5:;
    /* $8CF5: A0 */ nes_cpu_instruction_boundary(0x8CF5, 2); g_cpu.Y = 0x03; FLAG_NZ(g_cpu.Y);
label_8CF7:; /* CalculatePassword_loop_SamusAge */
    /* $8CF7: B9 */ nes_cpu_instruction_boundary(0x8CF7, 4); g_cpu.A = nes_read((0x687D + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8CFA:;
    /* $8CFA: 99 */ nes_cpu_instruction_boundary(0x8CFA, 5); nes_write((0x6993 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8CFD:;
    /* $8CFD: 88 */ nes_cpu_instruction_boundary(0x8CFD, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8CFE:;
    /* $8CFE: 10 */ nes_cpu_instruction_boundary(0x8CFE, 2); if (!g_cpu.N) {
    nes_cpu_instruction_boundary(0x8CF7, 2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8CF7;
    }
label_8D00:; /* CalculatePassword_loop_random */
    /* $8D00: 20 */ nes_cpu_instruction_boundary(0x8D00, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8D; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x02; g_cpu.S--; func_C000();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8D00, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8D03:;
    /* $8D03: A5 */ nes_cpu_instruction_boundary(0x8D03, 3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_8D05:;
    /* $8D05: 29 */ nes_cpu_instruction_boundary(0x8D05, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_8D07:;
    /* $8D07: F0 */ nes_cpu_instruction_boundary(0x8D07, 2); if (g_cpu.Z) {
    nes_cpu_instruction_boundary(0x8D00, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8D00;
    }
label_8D09:;
    /* $8D09: 8D */ nes_cpu_instruction_boundary(0x8D09, 4); nes_write(0x6998, g_cpu.A);
label_8D0C:;
    /* $8D0C: 20 */ nes_cpu_instruction_boundary(0x8D0C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8D; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0E; g_cpu.S--; func_8E17_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8D0C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8D0F:;
    /* $8D0F: 4C */ nes_cpu_instruction_boundary(0x8D0F, 3); nes_cpu_instruction_boundary(0x8E6C, 2); func_8E6C_b0(); return;
}

void func_93C6_b0(void) { /* PasswordToScreen */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_93C6_b0");
#endif
label_93C6:; /* PasswordToScreen */
    /* $93C6: 20 */ nes_cpu_instruction_boundary(0x93C6, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC8; g_cpu.S--; func_C42C();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x93C6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_93C9:;
    /* $93C9: A0 */ nes_cpu_instruction_boundary(0x93C9, 2); g_cpu.Y = 0x05; FLAG_NZ(g_cpu.Y);
label_93CB:;
    /* $93CB: 20 */ nes_cpu_instruction_boundary(0x93CB, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCD; g_cpu.S--; func_93F9_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x93CB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_93CE:;
    /* $93CE: A2 */ nes_cpu_instruction_boundary(0x93CE, 2); g_cpu.X = 0xA9; FLAG_NZ(g_cpu.X);
label_93D0:;
    /* $93D0: A0 */ nes_cpu_instruction_boundary(0x93D0, 2); g_cpu.Y = 0x21; FLAG_NZ(g_cpu.Y);
label_93D2:;
    /* $93D2: 20 */ nes_cpu_instruction_boundary(0x93D2, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD4; g_cpu.S--; func_9450_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x93D2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_93D5:;
    /* $93D5: A0 */ nes_cpu_instruction_boundary(0x93D5, 2); g_cpu.Y = 0x0B; FLAG_NZ(g_cpu.Y);
label_93D7:;
    /* $93D7: 20 */ nes_cpu_instruction_boundary(0x93D7, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD9; g_cpu.S--; func_93F9_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x93D7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_93DA:;
    /* $93DA: A2 */ nes_cpu_instruction_boundary(0x93DA, 2); g_cpu.X = 0xB0; FLAG_NZ(g_cpu.X);
label_93DC:;
    /* $93DC: A0 */ nes_cpu_instruction_boundary(0x93DC, 2); g_cpu.Y = 0x21; FLAG_NZ(g_cpu.Y);
label_93DE:;
    /* $93DE: 20 */ nes_cpu_instruction_boundary(0x93DE, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE0; g_cpu.S--; func_9450_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x93DE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_93E1:;
    /* $93E1: A0 */ nes_cpu_instruction_boundary(0x93E1, 2); g_cpu.Y = 0x11; FLAG_NZ(g_cpu.Y);
label_93E3:;
    /* $93E3: 20 */ nes_cpu_instruction_boundary(0x93E3, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE5; g_cpu.S--; func_93F9_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x93E3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_93E6:;
    /* $93E6: A2 */ nes_cpu_instruction_boundary(0x93E6, 2); g_cpu.X = 0xE9; FLAG_NZ(g_cpu.X);
label_93E8:;
    /* $93E8: A0 */ nes_cpu_instruction_boundary(0x93E8, 2); g_cpu.Y = 0x21; FLAG_NZ(g_cpu.Y);
label_93EA:;
    /* $93EA: 20 */ nes_cpu_instruction_boundary(0x93EA, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xEC; g_cpu.S--; func_9450_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x93EA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_93ED:;
    /* $93ED: A0 */ nes_cpu_instruction_boundary(0x93ED, 2); g_cpu.Y = 0x17; FLAG_NZ(g_cpu.Y);
label_93EF:;
    /* $93EF: 20 */ nes_cpu_instruction_boundary(0x93EF, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; func_93F9_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x93EF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_93F2:;
    /* $93F2: A2 */ nes_cpu_instruction_boundary(0x93F2, 2); g_cpu.X = 0xF0; FLAG_NZ(g_cpu.X);
label_93F4:;
    /* $93F4: A0 */ nes_cpu_instruction_boundary(0x93F4, 2); g_cpu.Y = 0x21; FLAG_NZ(g_cpu.Y);
label_93F6:;
    /* $93F6: 4C */ nes_cpu_instruction_boundary(0x93F6, 3); nes_cpu_instruction_boundary(0x9450, 2); func_9450_b0(); return;
}

void func_9EAA_b0(void) { /* LoadEndStarSprites */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9EAA_b0");
#endif
label_9EAA:; /* LoadEndStarSprites */
    /* $9EAA: A0 */ nes_cpu_instruction_boundary(0x9EAA, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_9EAC:; /* LoadEndStarSprites_loop */
    /* $9EAC: B9 */ nes_cpu_instruction_boundary(0x9EAC, 4); g_cpu.A = nes_read((0x9EB8 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9EAF:;
    /* $9EAF: 99 */ nes_cpu_instruction_boundary(0x9EAF, 5); nes_write((0x0270 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9EB2:;
    /* $9EB2: C8 */ nes_cpu_instruction_boundary(0x9EB2, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9EB3:;
    /* $9EB3: C0 */ nes_cpu_instruction_boundary(0x9EB3, 2); { int r=g_cpu.Y-0x9C; g_cpu.C=(g_cpu.Y>=0x9C)?1:0; FLAG_NZ(r&0xFF); }
label_9EB5:;
    /* $9EB5: D0 */ nes_cpu_instruction_boundary(0x9EB5, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0x9EAC, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9EAC;
    }
label_9EB7:;
    /* $9EB7: 60 */ nes_cpu_instruction_boundary(0x9EB7, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9AD5_b0(void) { /* LoadEndGFX */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9AD5_b0");
#endif
label_9AD5:; /* LoadEndGFX */
    /* $9AD5: 20 */ nes_cpu_instruction_boundary(0x9AD5, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD7; g_cpu.S--; func_909F_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9AD5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9AD8:;
    /* $9AD8: 20 */ nes_cpu_instruction_boundary(0x9AD8, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDA; g_cpu.S--; func_C5D0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9AD8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9ADB:;
    /* $9ADB: A9 */ nes_cpu_instruction_boundary(0x9ADB, 2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_9ADD:;
    /* $9ADD: AC */ nes_cpu_instruction_boundary(0x9ADD, 4); g_cpu.Y = nes_read(0x69B3); FLAG_NZ(g_cpu.Y);
label_9AE0:;
    /* $9AE0: D0 */ nes_cpu_instruction_boundary(0x9AE0, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9AE4; }
label_9AE2:;
    /* $9AE2: A9 */ nes_cpu_instruction_boundary(0x9AE2, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9AE4:;
    /* $9AE4: 8D */ nes_cpu_instruction_boundary(0x9AE4, 4); nes_write(0x6872, g_cpu.A);
label_9AE7:;
    /* $9AE7: 0A */ nes_cpu_instruction_boundary(0x9AE7, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9AE8:;
    /* $9AE8: 85 */ nes_cpu_instruction_boundary(0x9AE8, 3); nes_write(0x7D, g_cpu.A);
label_9AEA:;
    /* $9AEA: A2 */ nes_cpu_instruction_boundary(0x9AEA, 2); g_cpu.X = 0x52; FLAG_NZ(g_cpu.X);
label_9AEC:;
    /* $9AEC: A0 */ nes_cpu_instruction_boundary(0x9AEC, 2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_9AEE:;
    /* $9AEE: 20 */ nes_cpu_instruction_boundary(0x9AEE, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; func_C20E();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9AEE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9AF1:;
    /* $9AF1: 20 */ nes_cpu_instruction_boundary(0x9AF1, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF3; g_cpu.S--; func_C487();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9AF1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9AF4:;
    /* $9AF4: A9 */ nes_cpu_instruction_boundary(0x9AF4, 2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_9AF6:;
    /* $9AF6: 8D */ nes_cpu_instruction_boundary(0x9AF6, 4); nes_write(0x0684, g_cpu.A);
label_9AF9:;
    /* $9AF9: A9 */ nes_cpu_instruction_boundary(0x9AF9, 2); g_cpu.A = 0x60; FLAG_NZ(g_cpu.A);
label_9AFB:;
    /* $9AFB: 85 */ nes_cpu_instruction_boundary(0x9AFB, 3); nes_write(0x2C, g_cpu.A);
label_9AFD:;
    /* $9AFD: A9 */ nes_cpu_instruction_boundary(0x9AFD, 2); g_cpu.A = 0x36; FLAG_NZ(g_cpu.A);
label_9AFF:;
    /* $9AFF: 85 */ nes_cpu_instruction_boundary(0x9AFF, 3); nes_write(0x7C, g_cpu.A);
label_9B01:;
    /* $9B01: A9 */ nes_cpu_instruction_boundary(0x9B01, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9B03:;
    /* $9B03: 85 */ nes_cpu_instruction_boundary(0x9B03, 3); nes_write(0x7E, g_cpu.A);
label_9B05:;
    /* $9B05: 85 */ nes_cpu_instruction_boundary(0x9B05, 3); nes_write(0x7F, g_cpu.A);
label_9B07:;
    /* $9B07: 85 */ nes_cpu_instruction_boundary(0x9B07, 3); nes_write(0x7B, g_cpu.A);
label_9B09:;
    /* $9B09: 85 */ nes_cpu_instruction_boundary(0x9B09, 3); nes_write(0x7A, g_cpu.A);
label_9B0B:;
    /* $9B0B: 85 */ nes_cpu_instruction_boundary(0x9B0B, 3); nes_write(0x81, g_cpu.A);
label_9B0D:;
    /* $9B0D: 85 */ nes_cpu_instruction_boundary(0x9B0D, 3); nes_write(0x80, g_cpu.A);
label_9B0F:;
    /* $9B0F: A9 */ nes_cpu_instruction_boundary(0x9B0F, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9B11:;
    /* $9B11: 85 */ nes_cpu_instruction_boundary(0x9B11, 3); nes_write(0x1C, g_cpu.A);
label_9B13:;
    /* $9B13: A9 */ nes_cpu_instruction_boundary(0x9B13, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_9B15:;
    /* $9B15: 85 */ nes_cpu_instruction_boundary(0x9B15, 3); nes_write(0x82, g_cpu.A);
label_9B17:;
    /* $9B17: E6 */ nes_cpu_instruction_boundary(0x9B17, 5); { uint16_t a=0x33; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9B19:;
    /* $9B19: 4C */ nes_cpu_instruction_boundary(0x9B19, 3); nes_cpu_instruction_boundary(0xC447, 2); func_C447(); return;
}

void func_9B1C_b0(void) { /* ShowEndSamus */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9B1C_b0");
#endif
label_9B1C:; /* ShowEndSamus */
    /* $9B1C: 20 */ nes_cpu_instruction_boundary(0x9B1C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1E; g_cpu.S--; func_9C9A_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9B1C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9B1F:;
    /* $9B1F: A5 */ nes_cpu_instruction_boundary(0x9B1F, 3); g_cpu.A = nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_9B21:;
    /* $9B21: D0 */ nes_cpu_instruction_boundary(0x9B21, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9B26; }
label_9B23:;
    /* $9B23: E6 */ nes_cpu_instruction_boundary(0x9B23, 5); { uint16_t a=0x33; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9B25:;
    /* $9B25: 60 */ nes_cpu_instruction_boundary(0x9B25, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9B26:;
    /* $9B26: C9 */ nes_cpu_instruction_boundary(0x9B26, 2); { int r=g_cpu.A-0x50; g_cpu.C=(g_cpu.A>=0x50)?1:0; FLAG_NZ(r&0xFF); }
label_9B28:;
    /* $9B28: D0 */ nes_cpu_instruction_boundary(0x9B28, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9B2D; }
label_9B2A:;
    /* $9B2A: E6 */ nes_cpu_instruction_boundary(0x9B2A, 5); { uint16_t a=0x7A; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9B2C:;
    /* $9B2C: 60 */ nes_cpu_instruction_boundary(0x9B2C, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9B2D:;
    /* $9B2D: C9 */ nes_cpu_instruction_boundary(0x9B2D, 2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_9B2F:;
    /* $9B2F: D0 */ nes_cpu_instruction_boundary(0x9B2F, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9B33; }
label_9B31:;
    /* $9B31: E6 */ nes_cpu_instruction_boundary(0x9B31, 5); { uint16_t a=0x81; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9B33:;
    /* $9B33: 60 */ nes_cpu_instruction_boundary(0x9B33, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9B34_b0(void) { /* EndSamusFlash */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9B34_b0");
#endif
label_9B34:; /* EndSamusFlash */
    /* $9B34: A5 */ nes_cpu_instruction_boundary(0x9B34, 3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_9B36:;
    /* $9B36: 29 */ nes_cpu_instruction_boundary(0x9B36, 2); g_cpu.A &= 0x1F; FLAG_NZ(g_cpu.A);
label_9B38:;
    /* $9B38: D0 */ nes_cpu_instruction_boundary(0x9B38, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9B69; }
label_9B3A:;
    /* $9B3A: E6 */ nes_cpu_instruction_boundary(0x9B3A, 5); { uint16_t a=0x7F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9B3C:;
    /* $9B3C: A5 */ nes_cpu_instruction_boundary(0x9B3C, 3); g_cpu.A = nes_read(0x7F); FLAG_NZ(g_cpu.A);
label_9B3E:;
    /* $9B3E: C9 */ nes_cpu_instruction_boundary(0x9B3E, 2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_9B40:;
    /* $9B40: D0 */ nes_cpu_instruction_boundary(0x9B40, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9B52; }
label_9B42:;
    /* $9B42: 20 */ nes_cpu_instruction_boundary(0x9B42, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x44; g_cpu.S--; func_CAF5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9B42, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9B45:;
    /* $9B45: 20 */ nes_cpu_instruction_boundary(0x9B45, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x47; g_cpu.S--; func_8C7A_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9B45, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9B48:;
    /* $9B48: AD */ nes_cpu_instruction_boundary(0x9B48, 4); g_cpu.A = nes_read(0x6872); FLAG_NZ(g_cpu.A);
label_9B4B:;
    /* $9B4B: 0A */ nes_cpu_instruction_boundary(0x9B4B, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9B4C:;
    /* $9B4C: 85 */ nes_cpu_instruction_boundary(0x9B4C, 3); nes_write(0x7D, g_cpu.A);
label_9B4E:;
    /* $9B4E: A9 */ nes_cpu_instruction_boundary(0x9B4E, 2); g_cpu.A = 0x36; FLAG_NZ(g_cpu.A);
label_9B50:;
    /* $9B50: 85 */ nes_cpu_instruction_boundary(0x9B50, 3); nes_write(0x7C, g_cpu.A);
label_9B52:;
    /* $9B52: C9 */ nes_cpu_instruction_boundary(0x9B52, 2); { int r=g_cpu.A-0x10; g_cpu.C=(g_cpu.A>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_9B54:;
    /* $9B54: D0 */ nes_cpu_instruction_boundary(0x9B54, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9B69; }
label_9B56:;
    /* $9B56: 85 */ nes_cpu_instruction_boundary(0x9B56, 3); nes_write(0x2C, g_cpu.A);
label_9B58:;
    /* $9B58: A0 */ nes_cpu_instruction_boundary(0x9B58, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_9B5A:;
    /* $9B5A: AD */ nes_cpu_instruction_boundary(0x9B5A, 4); g_cpu.A = nes_read(0x6872); FLAG_NZ(g_cpu.A);
label_9B5D:;
    /* $9B5D: C9 */ nes_cpu_instruction_boundary(0x9B5D, 2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_9B5F:;
    /* $9B5F: 90 */ nes_cpu_instruction_boundary(0x9B5F, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9B62; }
label_9B61:;
    /* $9B61: C8 */ nes_cpu_instruction_boundary(0x9B61, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9B62:;
    /* $9B62: 84 */ nes_cpu_instruction_boundary(0x9B62, 3); nes_write(0x7E, g_cpu.Y);
label_9B64:;
    /* $9B64: E6 */ nes_cpu_instruction_boundary(0x9B64, 5); { uint16_t a=0x33; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9B66:;
    /* $9B66: 4C */ nes_cpu_instruction_boundary(0x9B66, 3); nes_cpu_instruction_boundary(0xC1A3, 2); func_C1A3(); return;
label_9B69:;
    /* $9B69: C6 */ nes_cpu_instruction_boundary(0x9B69, 5); { uint16_t a=0x82; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9B6B:;
    /* $9B6B: D0 */ nes_cpu_instruction_boundary(0x9B6B, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9B80; }
label_9B6D:;
    /* $9B6D: A4 */ nes_cpu_instruction_boundary(0x9B6D, 3); g_cpu.Y = nes_read(0x7F); FLAG_NZ(g_cpu.Y);
label_9B6F:;
    /* $9B6F: B9 */ nes_cpu_instruction_boundary(0x9B6F, 4); g_cpu.A = nes_read((0x9B83 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B72:;
    /* $9B72: 85 */ nes_cpu_instruction_boundary(0x9B72, 3); nes_write(0x82, g_cpu.A);
label_9B74:;
    /* $9B74: E6 */ nes_cpu_instruction_boundary(0x9B74, 5); { uint16_t a=0x7E; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9B76:;
    /* $9B76: A5 */ nes_cpu_instruction_boundary(0x9B76, 3); g_cpu.A = nes_read(0x7E); FLAG_NZ(g_cpu.A);
label_9B78:;
    /* $9B78: C9 */ nes_cpu_instruction_boundary(0x9B78, 2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_9B7A:;
    /* $9B7A: D0 */ nes_cpu_instruction_boundary(0x9B7A, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9B80; }
label_9B7C:;
    /* $9B7C: A9 */ nes_cpu_instruction_boundary(0x9B7C, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9B7E:;
    /* $9B7E: 85 */ nes_cpu_instruction_boundary(0x9B7E, 3); nes_write(0x7E, g_cpu.A);
label_9B80:;
    /* $9B80: 4C */ nes_cpu_instruction_boundary(0x9B80, 3); nes_cpu_instruction_boundary(0x9C9A, 2); func_9C9A_b0(); return;
}

void func_9B93_b0(void) { /* SamusWave */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9B93_b0");
#endif
label_9B93:; /* SamusWave */
    /* $9B93: A5 */ nes_cpu_instruction_boundary(0x9B93, 3); g_cpu.A = nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_9B95:;
    /* $9B95: D0 */ nes_cpu_instruction_boundary(0x9B95, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9BA2; }
label_9B97:;
    /* $9B97: A9 */ nes_cpu_instruction_boundary(0x9B97, 2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_9B99:;
    /* $9B99: 85 */ nes_cpu_instruction_boundary(0x9B99, 3); nes_write(0x2C, g_cpu.A);
label_9B9B:;
    /* $9B9B: A9 */ nes_cpu_instruction_boundary(0x9B9B, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_9B9D:;
    /* $9B9D: 85 */ nes_cpu_instruction_boundary(0x9B9D, 3); nes_write(0x1C, g_cpu.A);
label_9B9F:;
    /* $9B9F: E6 */ nes_cpu_instruction_boundary(0x9B9F, 5); { uint16_t a=0x33; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9BA1:;
    /* $9BA1: 60 */ nes_cpu_instruction_boundary(0x9BA1, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9BA2:;
    /* $9BA2: AD */ nes_cpu_instruction_boundary(0x9BA2, 4); g_cpu.A = nes_read(0x6872); FLAG_NZ(g_cpu.A);
label_9BA5:;
    /* $9BA5: C9 */ nes_cpu_instruction_boundary(0x9BA5, 2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_9BA7:;
    /* $9BA7: B0 */ nes_cpu_instruction_boundary(0x9BA7, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9BAC; }
label_9BA9:;
    /* $9BA9: 4C */ nes_cpu_instruction_boundary(0x9BA9, 3); nes_cpu_instruction_boundary(0x9C9A, 2); func_9C9A_b0(); return;
label_9BAC:;
    /* $9BAC: E9 */ nes_cpu_instruction_boundary(0x9BAC, 2); { uint8_t m=0x04; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9BAE:;
    /* $9BAE: 0A */ nes_cpu_instruction_boundary(0x9BAE, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9BAF:;
    /* $9BAF: 0A */ nes_cpu_instruction_boundary(0x9BAF, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9BB0:;
    /* $9BB0: 85 */ nes_cpu_instruction_boundary(0x9BB0, 3); nes_write(0x83, g_cpu.A);
label_9BB2:;
    /* $9BB2: A5 */ nes_cpu_instruction_boundary(0x9BB2, 3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_9BB4:;
    /* $9BB4: 29 */ nes_cpu_instruction_boundary(0x9BB4, 2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A);
label_9BB6:;
    /* $9BB6: D0 */ nes_cpu_instruction_boundary(0x9BB6, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9BBE; }
label_9BB8:;
    /* $9BB8: A0 */ nes_cpu_instruction_boundary(0x9BB8, 2); g_cpu.Y = 0x10; FLAG_NZ(g_cpu.Y);
label_9BBA:;
    /* $9BBA: 84 */ nes_cpu_instruction_boundary(0x9BBA, 3); nes_write(0x84, g_cpu.Y);
label_9BBC:;
    /* $9BBC: D0 */ nes_cpu_instruction_boundary(0x9BBC, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9BC6; }
label_9BBE:;
    /* $9BBE: E6 */ nes_cpu_instruction_boundary(0x9BBE, 5); { uint16_t a=0x83; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9BC0:;
    /* $9BC0: E6 */ nes_cpu_instruction_boundary(0x9BC0, 5); { uint16_t a=0x83; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9BC2:;
    /* $9BC2: A0 */ nes_cpu_instruction_boundary(0x9BC2, 2); g_cpu.Y = 0x10; FLAG_NZ(g_cpu.Y);
label_9BC4:;
    /* $9BC4: 84 */ nes_cpu_instruction_boundary(0x9BC4, 3); nes_write(0x84, g_cpu.Y);
label_9BC6:;
    /* $9BC6: A9 */ nes_cpu_instruction_boundary(0x9BC6, 2); g_cpu.A = 0x2D; FLAG_NZ(g_cpu.A);
label_9BC8:;
    /* $9BC8: 85 */ nes_cpu_instruction_boundary(0x9BC8, 3); nes_write(0x7C, g_cpu.A);
label_9BCA:;
    /* $9BCA: 4C */ nes_cpu_instruction_boundary(0x9BCA, 3); nes_cpu_instruction_boundary(0x9C7F, 2); func_9C7F_b0(); return;
}

void func_9BCD_b0(void) { /* EndFadeOut */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9BCD_b0");
#endif
label_9BCD:; /* EndFadeOut */
    /* $9BCD: A5 */ nes_cpu_instruction_boundary(0x9BCD, 3); g_cpu.A = nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_9BCF:;
    /* $9BCF: D0 */ nes_cpu_instruction_boundary(0x9BCF, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9BEF; }
label_9BD1:;
    /* $9BD1: A5 */ nes_cpu_instruction_boundary(0x9BD1, 3); g_cpu.A = nes_read(0x7B); FLAG_NZ(g_cpu.A);
label_9BD3:;
    /* $9BD3: D0 */ nes_cpu_instruction_boundary(0x9BD3, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9BDB; }
label_9BD5:;
    /* $9BD5: A9 */ nes_cpu_instruction_boundary(0x9BD5, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_9BD7:;
    /* $9BD7: 85 */ nes_cpu_instruction_boundary(0x9BD7, 3); nes_write(0x1C, g_cpu.A);
label_9BD9:;
    /* $9BD9: E6 */ nes_cpu_instruction_boundary(0x9BD9, 5); { uint16_t a=0x7B; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9BDB:;
    /* $9BDB: A5 */ nes_cpu_instruction_boundary(0x9BDB, 3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_9BDD:;
    /* $9BDD: 29 */ nes_cpu_instruction_boundary(0x9BDD, 2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_9BDF:;
    /* $9BDF: D0 */ nes_cpu_instruction_boundary(0x9BDF, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9BEF; }
label_9BE1:;
    /* $9BE1: E6 */ nes_cpu_instruction_boundary(0x9BE1, 5); { uint16_t a=0x1C; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9BE3:;
    /* $9BE3: A5 */ nes_cpu_instruction_boundary(0x9BE3, 3); g_cpu.A = nes_read(0x1C); FLAG_NZ(g_cpu.A);
label_9BE5:;
    /* $9BE5: C9 */ nes_cpu_instruction_boundary(0x9BE5, 2); { int r=g_cpu.A-0x0C; g_cpu.C=(g_cpu.A>=0x0C)?1:0; FLAG_NZ(r&0xFF); }
label_9BE7:;
    /* $9BE7: D0 */ nes_cpu_instruction_boundary(0x9BE7, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9BEF; }
label_9BE9:;
    /* $9BE9: A9 */ nes_cpu_instruction_boundary(0x9BE9, 2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_9BEB:;
    /* $9BEB: 85 */ nes_cpu_instruction_boundary(0x9BEB, 3); nes_write(0x2C, g_cpu.A);
label_9BED:;
    /* $9BED: E6 */ nes_cpu_instruction_boundary(0x9BED, 5); { uint16_t a=0x33; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9BEF:;
    /* $9BEF: AD */ nes_cpu_instruction_boundary(0x9BEF, 4); g_cpu.A = nes_read(0x6872); FLAG_NZ(g_cpu.A);
label_9BF2:;
    /* $9BF2: C9 */ nes_cpu_instruction_boundary(0x9BF2, 2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_9BF4:;
    /* $9BF4: B0 */ nes_cpu_instruction_boundary(0x9BF4, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9BF9; }
label_9BF6:;
    /* $9BF6: 4C */ nes_cpu_instruction_boundary(0x9BF6, 3); nes_cpu_instruction_boundary(0x9C9A, 2); func_9C9A_b0(); return;
label_9BF9:;
    /* $9BF9: 4C */ nes_cpu_instruction_boundary(0x9BF9, 3); nes_cpu_instruction_boundary(0x9C7F, 2); func_9C7F_b0(); return;
}

void func_9BFC_b0(void) { /* RollCredits */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9BFC_b0");
#endif
label_9BFC:; /* RollCredits */
    /* $9BFC: A5 */ nes_cpu_instruction_boundary(0x9BFC, 3); g_cpu.A = nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_9BFE:;
    /* $9BFE: F0 */ nes_cpu_instruction_boundary(0x9BFE, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9C17; }
label_9C00:;
    /* $9C00: C9 */ nes_cpu_instruction_boundary(0x9C00, 2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_9C02:;
    /* $9C02: D0 */ nes_cpu_instruction_boundary(0x9C02, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9C44; }
label_9C04:;
    /* $9C04: 20 */ nes_cpu_instruction_boundary(0x9C04, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x06; g_cpu.S--; func_C439();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9C04, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9C07:;
    /* $9C07: 20 */ nes_cpu_instruction_boundary(0x9C07, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x09; g_cpu.S--; func_C16D();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9C07, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9C0A:;
    /* $9C0A: 20 */ nes_cpu_instruction_boundary(0x9C0A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0C; g_cpu.S--; func_C1A3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9C0A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9C0D:;
    /* $9C0D: A9 */ nes_cpu_instruction_boundary(0x9C0D, 2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_9C0F:;
    /* $9C0F: 85 */ nes_cpu_instruction_boundary(0x9C0F, 3); nes_write(0x1C, g_cpu.A);
label_9C11:;
    /* $9C11: 20 */ nes_cpu_instruction_boundary(0x9C11, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x13; g_cpu.S--; func_C447();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9C11, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9C14:;
    /* $9C14: 4C */ nes_cpu_instruction_boundary(0x9C14, 3); nes_cpu_instruction_boundary(0xC43F, 2); func_C43F(); return;
label_9C17:; /* RollCredits_endIf_A */
    /* $9C17: A5 */ nes_cpu_instruction_boundary(0x9C17, 3); g_cpu.A = nes_read(0x80); FLAG_NZ(g_cpu.A);
label_9C19:;
    /* $9C19: D0 */ nes_cpu_instruction_boundary(0x9C19, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9C1D; }
label_9C1B:;
    /* $9C1B: E6 */ nes_cpu_instruction_boundary(0x9C1B, 5); { uint16_t a=0x80; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9C1D:; /* RollCredits_endIf_B */
    /* $9C1D: C9 */ nes_cpu_instruction_boundary(0x9C1D, 2); { int r=g_cpu.A-0x06; g_cpu.C=(g_cpu.A>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_9C1F:;
    /* $9C1F: D0 */ nes_cpu_instruction_boundary(0x9C1F, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9C2A; }
label_9C21:;
    /* $9C21: A5 */ nes_cpu_instruction_boundary(0x9C21, 3); g_cpu.A = nes_read(0xFC); FLAG_NZ(g_cpu.A);
label_9C23:;
    /* $9C23: C9 */ nes_cpu_instruction_boundary(0x9C23, 2); { int r=g_cpu.A-0x88; g_cpu.C=(g_cpu.A>=0x88)?1:0; FLAG_NZ(r&0xFF); }
label_9C25:;
    /* $9C25: 90 */ nes_cpu_instruction_boundary(0x9C25, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9C2A; }
label_9C27:;
    /* $9C27: E6 */ nes_cpu_instruction_boundary(0x9C27, 5); { uint16_t a=0x33; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9C29:;
    /* $9C29: 60 */ nes_cpu_instruction_boundary(0x9C29, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9C2A:; /* RollCredits_endIf_C */
    /* $9C2A: A5 */ nes_cpu_instruction_boundary(0x9C2A, 3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_9C2C:;
    /* $9C2C: 29 */ nes_cpu_instruction_boundary(0x9C2C, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_9C2E:;
    /* $9C2E: D0 */ nes_cpu_instruction_boundary(0x9C2E, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9C44; }
label_9C30:;
    /* $9C30: E6 */ nes_cpu_instruction_boundary(0x9C30, 5); { uint16_t a=0xFC; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9C32:;
    /* $9C32: A5 */ nes_cpu_instruction_boundary(0x9C32, 3); g_cpu.A = nes_read(0xFC); FLAG_NZ(g_cpu.A);
label_9C34:;
    /* $9C34: C9 */ nes_cpu_instruction_boundary(0x9C34, 2); { int r=g_cpu.A-0xF0; g_cpu.C=(g_cpu.A>=0xF0)?1:0; FLAG_NZ(r&0xFF); }
label_9C36:;
    /* $9C36: D0 */ nes_cpu_instruction_boundary(0x9C36, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9C44; }
label_9C38:;
    /* $9C38: E6 */ nes_cpu_instruction_boundary(0x9C38, 5); { uint16_t a=0x80; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9C3A:;
    /* $9C3A: A9 */ nes_cpu_instruction_boundary(0x9C3A, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9C3C:;
    /* $9C3C: 85 */ nes_cpu_instruction_boundary(0x9C3C, 3); nes_write(0xFC, g_cpu.A);
label_9C3E:;
    /* $9C3E: A5 */ nes_cpu_instruction_boundary(0x9C3E, 3); g_cpu.A = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_9C40:;
    /* $9C40: 49 */ nes_cpu_instruction_boundary(0x9C40, 2); g_cpu.A ^= 0x02; FLAG_NZ(g_cpu.A);
label_9C42:;
    /* $9C42: 85 */ nes_cpu_instruction_boundary(0x9C42, 3); nes_write(0xFF, g_cpu.A);
label_9C44:; /* RollCredits_RTS */
    /* $9C44: 60 */ nes_cpu_instruction_boundary(0x9C44, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9A39_b0(void) { /* Restart */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A39_b0");
#endif
label_9A39:; /* Restart */
    /* $9A39: A5 */ nes_cpu_instruction_boundary(0x9A39, 3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_9A3B:;
    /* $9A3B: 29 */ nes_cpu_instruction_boundary(0x9A3B, 2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_9A3D:;
    /* $9A3D: F0 */ nes_cpu_instruction_boundary(0x9A3D, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0x9A38); return; }
label_9A3F:;
    /* $9A3F: A0 */ nes_cpu_instruction_boundary(0x9A3F, 2); g_cpu.Y = 0x11; FLAG_NZ(g_cpu.Y);
label_9A41:;
    /* $9A41: A9 */ nes_cpu_instruction_boundary(0x9A41, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9A43:; /* Restart_loop_erasePassword */
    /* $9A43: 99 */ nes_cpu_instruction_boundary(0x9A43, 5); nes_write((0x6988 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A46:;
    /* $9A46: 88 */ nes_cpu_instruction_boundary(0x9A46, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A47:;
    /* $9A47: 10 */ nes_cpu_instruction_boundary(0x9A47, 2); if (!g_cpu.N) {
    nes_cpu_instruction_boundary(0x9A43, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9A43;
    }
label_9A49:;
    /* $9A49: C8 */ nes_cpu_instruction_boundary(0x9A49, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A4A:; /* Restart_loop_eraseUniqueItemHistory */
    /* $9A4A: 99 */ nes_cpu_instruction_boundary(0x9A4A, 5); nes_write((0x6887 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A4D:;
    /* $9A4D: C8 */ nes_cpu_instruction_boundary(0x9A4D, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A4E:;
    /* $9A4E: D0 */ nes_cpu_instruction_boundary(0x9A4E, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0x9A4A, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9A4A;
    }
label_9A50:;
    /* $9A50: AD */ nes_cpu_instruction_boundary(0x9A50, 4); g_cpu.A = nes_read(0x6878); FLAG_NZ(g_cpu.A);
label_9A53:;
    /* $9A53: 29 */ nes_cpu_instruction_boundary(0x9A53, 2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_9A55:;
    /* $9A55: F0 */ nes_cpu_instruction_boundary(0x9A55, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A5C; }
label_9A57:;
    /* $9A57: A9 */ nes_cpu_instruction_boundary(0x9A57, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9A59:;
    /* $9A59: 8D */ nes_cpu_instruction_boundary(0x9A59, 4); nes_write(0x6988, g_cpu.A);
label_9A5C:; /* Restart_endIf_MaruMari */
    /* $9A5C: AD */ nes_cpu_instruction_boundary(0x9A5C, 4); g_cpu.A = nes_read(0x6878); FLAG_NZ(g_cpu.A);
label_9A5F:;
    /* $9A5F: 29 */ nes_cpu_instruction_boundary(0x9A5F, 2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_9A61:;
    /* $9A61: F0 */ nes_cpu_instruction_boundary(0x9A61, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A6B; }
label_9A63:;
    /* $9A63: AD */ nes_cpu_instruction_boundary(0x9A63, 4); g_cpu.A = nes_read(0x6988); FLAG_NZ(g_cpu.A);
label_9A66:;
    /* $9A66: 09 */ nes_cpu_instruction_boundary(0x9A66, 2); g_cpu.A |= 0x40; FLAG_NZ(g_cpu.A);
label_9A68:;
    /* $9A68: 8D */ nes_cpu_instruction_boundary(0x9A68, 4); nes_write(0x6988, g_cpu.A);
label_9A6B:; /* Restart_endIf_Bombs */
    /* $9A6B: AD */ nes_cpu_instruction_boundary(0x9A6B, 4); g_cpu.A = nes_read(0x6878); FLAG_NZ(g_cpu.A);
label_9A6E:;
    /* $9A6E: 29 */ nes_cpu_instruction_boundary(0x9A6E, 2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_9A70:;
    /* $9A70: F0 */ nes_cpu_instruction_boundary(0x9A70, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A77; }
label_9A72:;
    /* $9A72: A9 */ nes_cpu_instruction_boundary(0x9A72, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_9A74:;
    /* $9A74: 8D */ nes_cpu_instruction_boundary(0x9A74, 4); nes_write(0x6989, g_cpu.A);
label_9A77:; /* Restart_endIf_Varia */
    /* $9A77: AD */ nes_cpu_instruction_boundary(0x9A77, 4); g_cpu.A = nes_read(0x6878); FLAG_NZ(g_cpu.A);
label_9A7A:;
    /* $9A7A: 29 */ nes_cpu_instruction_boundary(0x9A7A, 2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9A7C:;
    /* $9A7C: F0 */ nes_cpu_instruction_boundary(0x9A7C, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A83; }
label_9A7E:;
    /* $9A7E: A9 */ nes_cpu_instruction_boundary(0x9A7E, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9A80:;
    /* $9A80: 8D */ nes_cpu_instruction_boundary(0x9A80, 4); nes_write(0x698B, g_cpu.A);
label_9A83:; /* Restart_endIf_HighJump */
    /* $9A83: AD */ nes_cpu_instruction_boundary(0x9A83, 4); g_cpu.A = nes_read(0x6878); FLAG_NZ(g_cpu.A);
label_9A86:;
    /* $9A86: 29 */ nes_cpu_instruction_boundary(0x9A86, 2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_9A88:;
    /* $9A88: F0 */ nes_cpu_instruction_boundary(0x9A88, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A92; }
label_9A8A:;
    /* $9A8A: AD */ nes_cpu_instruction_boundary(0x9A8A, 4); g_cpu.A = nes_read(0x698B); FLAG_NZ(g_cpu.A);
label_9A8D:;
    /* $9A8D: 09 */ nes_cpu_instruction_boundary(0x9A8D, 2); g_cpu.A |= 0x04; FLAG_NZ(g_cpu.A);
label_9A8F:;
    /* $9A8F: 8D */ nes_cpu_instruction_boundary(0x9A8F, 4); nes_write(0x698B, g_cpu.A);
label_9A92:; /* Restart_endIf_ScrewAttack */
    /* $9A92: AD */ nes_cpu_instruction_boundary(0x9A92, 4); g_cpu.A = nes_read(0x6878); FLAG_NZ(g_cpu.A);
label_9A95:;
    /* $9A95: 8D */ nes_cpu_instruction_boundary(0x9A95, 4); nes_write(0x6991, g_cpu.A);
label_9A98:;
    /* $9A98: A9 */ nes_cpu_instruction_boundary(0x9A98, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9A9A:;
    /* $9A9A: AC */ nes_cpu_instruction_boundary(0x9A9A, 4); g_cpu.Y = nes_read(0x69B3); FLAG_NZ(g_cpu.Y);
label_9A9D:;
    /* $9A9D: F0 */ nes_cpu_instruction_boundary(0x9A9D, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9AA1; }
label_9A9F:;
    /* $9A9F: A9 */ nes_cpu_instruction_boundary(0x9A9F, 2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_9AA1:; /* Restart_endIf_JustInBailey */
    /* $9AA1: 8D */ nes_cpu_instruction_boundary(0x9AA1, 4); nes_write(0x6990, g_cpu.A);
label_9AA4:;
    /* $9AA4: 4C */ nes_cpu_instruction_boundary(0x9AA4, 3); nes_cpu_instruction_boundary(0x92D4, 2); func_92D4_b0(); return;
}

void func_9AA0_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9AA0_b0");
#endif
label_9AA0:;
    /* $9AA0: 80 */ nes_cpu_instruction_boundary(0x9AA0, 2); /* NOP */
label_9AA2:;
    /* $9AA2: 90 */ nes_cpu_instruction_boundary(0x9AA2, 2); if (!g_cpu.C) { maybe_trigger_vblank(2); goto label_9B0D; }
label_9AA4:;
    /* $9AA4: 4C */ nes_cpu_instruction_boundary(0x9AA4, 3); nes_cpu_instruction_boundary(0x92D4, 2); func_92D4_b0(); return;
label_9B0D:;
    /* $9B0D: 85 */ nes_cpu_instruction_boundary(0x9B0D, 3); nes_write(0x80, g_cpu.A);
label_9B0F:;
    /* $9B0F: A9 */ nes_cpu_instruction_boundary(0x9B0F, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9B11:;
    /* $9B11: 85 */ nes_cpu_instruction_boundary(0x9B11, 3); nes_write(0x1C, g_cpu.A);
label_9B13:;
    /* $9B13: A9 */ nes_cpu_instruction_boundary(0x9B13, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_9B15:;
    /* $9B15: 85 */ nes_cpu_instruction_boundary(0x9B15, 3); nes_write(0x82, g_cpu.A);
label_9B17:;
    /* $9B17: E6 */ nes_cpu_instruction_boundary(0x9B17, 5); { uint16_t a=0x33; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9B19:;
    /* $9B19: 4C */ nes_cpu_instruction_boundary(0x9B19, 3); nes_cpu_instruction_boundary(0xC447, 2); func_C447(); return;
}

void func_8B79_b0(void) { /* ProcessUniqueItems */
    if (nes_mod_function_entry(0x8B79u)) return;  /* trusted opt-in game-mod hook */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8B79_b0");
#endif
label_8B79:; /* ProcessUniqueItems */
    /* $8B79: AD */ nes_cpu_instruction_boundary(0x8B79, 4); g_cpu.A = nes_read(0x6886); FLAG_NZ(g_cpu.A);
label_8B7C:;
    /* $8B7C: 85 */ nes_cpu_instruction_boundary(0x8B7C, 3); nes_write(0x03, g_cpu.A);
label_8B7E:;
    /* $8B7E: A0 */ nes_cpu_instruction_boundary(0x8B7E, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_8B80:;
    /* $8B80: 84 */ nes_cpu_instruction_boundary(0x8B80, 3); nes_write(0x04, g_cpu.Y);
label_8B82:; /* ProcessUniqueItems_loop */
    /* $8B82: A4 */ nes_cpu_instruction_boundary(0x8B82, 3); g_cpu.Y = nes_read(0x04); FLAG_NZ(g_cpu.Y);
label_8B84:;
    /* $8B84: C8 */ nes_cpu_instruction_boundary(0x8B84, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8B85:;
    /* $8B85: B9 */ nes_cpu_instruction_boundary(0x8B85, 4); g_cpu.A = nes_read((0x6886 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8B88:;
    /* $8B88: 85 */ nes_cpu_instruction_boundary(0x8B88, 3); nes_write(0x00, g_cpu.A);
label_8B8A:;
    /* $8B8A: C8 */ nes_cpu_instruction_boundary(0x8B8A, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8B8B:;
    /* $8B8B: B9 */ nes_cpu_instruction_boundary(0x8B8B, 4); g_cpu.A = nes_read((0x6886 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8B8E:;
    /* $8B8E: 85 */ nes_cpu_instruction_boundary(0x8B8E, 3); nes_write(0x01, g_cpu.A);
label_8B90:;
    /* $8B90: 84 */ nes_cpu_instruction_boundary(0x8B90, 3); nes_write(0x04, g_cpu.Y);
label_8B92:;
    /* $8B92: 20 */ nes_cpu_instruction_boundary(0x8B92, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x94; g_cpu.S--; func_8B9C_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8B92, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8B95:;
    /* $8B95: A4 */ nes_cpu_instruction_boundary(0x8B95, 3); g_cpu.Y = nes_read(0x04); FLAG_NZ(g_cpu.Y);
label_8B97:;
    /* $8B97: C4 */ nes_cpu_instruction_boundary(0x8B97, 3); { uint8_t m=nes_read(0x03); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8B99:;
    /* $8B99: 90 */ nes_cpu_instruction_boundary(0x8B99, 2); if (!g_cpu.C) {
    nes_cpu_instruction_boundary(0x8B82, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8B82;
    }
label_8B9B:;
    /* $8B9B: 60 */ nes_cpu_instruction_boundary(0x8B9B, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_881A_b0(void) { /* DoSparkleSpriteCoord */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_881A_b0");
#endif
label_881A:; /* DoSparkleSpriteCoord */
    /* $881A: 8A */ nes_cpu_instruction_boundary(0x881A, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_881B:;
    /* $881B: 20 */ nes_cpu_instruction_boundary(0x881B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x88; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1D; g_cpu.S--; func_C2C0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x881B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_881E:;
    /* $881E: A8 */ nes_cpu_instruction_boundary(0x881E, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_881F:;
    /* $881F: B9 */ nes_cpu_instruction_boundary(0x881F, 4); g_cpu.A = nes_read((0x89AF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8822:;
    /* $8822: 85 */ nes_cpu_instruction_boundary(0x8822, 3); nes_write(0x00, g_cpu.A);
label_8824:;
    /* $8824: B9 */ nes_cpu_instruction_boundary(0x8824, 4); g_cpu.A = nes_read((0x89B0 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8827:;
    /* $8827: 85 */ nes_cpu_instruction_boundary(0x8827, 3); nes_write(0x01, g_cpu.A);
label_8829:;
    /* $8829: BC */ nes_cpu_instruction_boundary(0x8829, 4); g_cpu.Y = nes_read((0x6EA4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_882C:;
    /* $882C: B1 */ nes_cpu_instruction_boundary(0x882C, 5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_882E:;
    /* $882E: 10 */ nes_cpu_instruction_boundary(0x882E, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_8835; }
label_8830:;
    /* $8830: A9 */ nes_cpu_instruction_boundary(0x8830, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8832:;
    /* $8832: 9D */ nes_cpu_instruction_boundary(0x8832, 5); nes_write((0x6EA9 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8835:; /* DoSparkleSpriteCoord_endIf_A */
    /* $8835: D0 */ nes_cpu_instruction_boundary(0x8835, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_883C; }
label_8837:;
    /* $8837: A9 */ nes_cpu_instruction_boundary(0x8837, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8839:;
    /* $8839: 9D */ nes_cpu_instruction_boundary(0x8839, 5); nes_write((0x6EAA + g_cpu.X) & 0xFFFF, g_cpu.A);
label_883C:; /* DoSparkleSpriteCoord_endIf_B */
    /* $883C: 9D */ nes_cpu_instruction_boundary(0x883C, 5); nes_write((0x6EA5 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_883F:;
    /* $883F: C8 */ nes_cpu_instruction_boundary(0x883F, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8840:;
    /* $8840: B1 */ nes_cpu_instruction_boundary(0x8840, 5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8842:;
    /* $8842: DE */ nes_cpu_instruction_boundary(0x8842, 7); { uint16_t a=(0x6EA9 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8845:;
    /* $8845: 30 */ nes_cpu_instruction_boundary(0x8845, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_8850; }
label_8847:;
    /* $8847: A9 */ nes_cpu_instruction_boundary(0x8847, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8849:;
    /* $8849: 9D */ nes_cpu_instruction_boundary(0x8849, 5); nes_write((0x6EA6 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_884C:;
    /* $884C: B1 */ nes_cpu_instruction_boundary(0x884C, 5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_884E:;
    /* $884E: 30 */ nes_cpu_instruction_boundary(0x884E, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_8867; }
label_8850:; /* DoSparkleSpriteCoord_else_C */
    /* $8850: 48 */ nes_cpu_instruction_boundary(0x8850, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_8851:;
    /* $8851: 48 */ nes_cpu_instruction_boundary(0x8851, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_8852:;
    /* $8852: A9 */ nes_cpu_instruction_boundary(0x8852, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8854:;
    /* $8854: 9D */ nes_cpu_instruction_boundary(0x8854, 5); nes_write((0x6EA9 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8857:;
    /* $8857: 68 */ nes_cpu_instruction_boundary(0x8857, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8858:;
    /* $8858: 20 */ nes_cpu_instruction_boundary(0x8858, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x88; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x5A; g_cpu.S--; func_C2BF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8858, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_885B:;
    /* $885B: 20 */ nes_cpu_instruction_boundary(0x885B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x88; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x5D; g_cpu.S--; func_8871_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x885B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_885E:;
    /* $885E: 9D */ nes_cpu_instruction_boundary(0x885E, 5); nes_write((0x6EA6 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8861:;
    /* $8861: 68 */ nes_cpu_instruction_boundary(0x8861, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8862:;
    /* $8862: 29 */ nes_cpu_instruction_boundary(0x8862, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_8864:;
    /* $8864: 20 */ nes_cpu_instruction_boundary(0x8864, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x88; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x66; g_cpu.S--; func_8871_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8864, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8867:; /* DoSparkleSpriteCoord_endIf_C */
    /* $8867: 9D */ nes_cpu_instruction_boundary(0x8867, 5); nes_write((0x6EA7 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_886A:;
    /* $886A: FE */ nes_cpu_instruction_boundary(0x886A, 7); { uint16_t a=(0x6EA4 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_886D:;
    /* $886D: FE */ nes_cpu_instruction_boundary(0x886D, 7); { uint16_t a=(0x6EA4 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8870:;
    /* $8870: 60 */ nes_cpu_instruction_boundary(0x8870, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_887B_b0(void) { /* WriteIntroSprite */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_887B_b0");
#endif
label_887B:; /* WriteIntroSprite */
    /* $887B: BD */ nes_cpu_instruction_boundary(0x887B, 4); g_cpu.A = nes_read((0x6EA0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_887E:;
    /* $887E: 38 */ nes_cpu_instruction_boundary(0x887E, 2); g_cpu.C = 1;
label_887F:;
    /* $887F: E9 */ nes_cpu_instruction_boundary(0x887F, 2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8881:;
    /* $8881: 9D */ nes_cpu_instruction_boundary(0x8881, 5); nes_write((0x0210 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8884:;
    /* $8884: BD */ nes_cpu_instruction_boundary(0x8884, 4); g_cpu.A = nes_read((0x6EA1 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8887:;
    /* $8887: 9D */ nes_cpu_instruction_boundary(0x8887, 5); nes_write((0x0211 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_888A:;
    /* $888A: BD */ nes_cpu_instruction_boundary(0x888A, 4); g_cpu.A = nes_read((0x6EA2 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_888D:;
    /* $888D: 9D */ nes_cpu_instruction_boundary(0x888D, 5); nes_write((0x0212 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8890:;
    /* $8890: BD */ nes_cpu_instruction_boundary(0x8890, 4); g_cpu.A = nes_read((0x6EA3 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8893:;
    /* $8893: 9D */ nes_cpu_instruction_boundary(0x8893, 5); nes_write((0x0213 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8896:;
    /* $8896: 60 */ nes_cpu_instruction_boundary(0x8896, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_981E_b0(void) { /* UpdateCrossMissileCoords */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_981E_b0");
#endif
label_981E:; /* UpdateCrossMissileCoords */
    /* $981E: BD */ nes_cpu_instruction_boundary(0x981E, 4); g_cpu.A = nes_read((0x6EAC + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9821:;
    /* $9821: 20 */ nes_cpu_instruction_boundary(0x9821, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x98; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x23; g_cpu.S--; func_9871_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9821, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9824:;
    /* $9824: BC */ nes_cpu_instruction_boundary(0x9824, 4); g_cpu.Y = nes_read((0x6EAE + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_9827:;
    /* $9827: 10 */ nes_cpu_instruction_boundary(0x9827, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_982E; }
label_9829:;
    /* $9829: 49 */ nes_cpu_instruction_boundary(0x9829, 2); g_cpu.A ^= 0xFF; FLAG_NZ(g_cpu.A);
label_982B:;
    /* $982B: 18 */ nes_cpu_instruction_boundary(0x982B, 2); g_cpu.C = 0;
label_982C:;
    /* $982C: 69 */ nes_cpu_instruction_boundary(0x982C, 2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_982E:; /* UpdateCrossMissileCoords_endIf_A */
    /* $982E: 18 */ nes_cpu_instruction_boundary(0x982E, 2); g_cpu.C = 0;
label_982F:;
    /* $982F: 7D */ nes_cpu_instruction_boundary(0x982F, 4); { uint8_t m=nes_read((0x6EA3 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9832:;
    /* $9832: 9D */ nes_cpu_instruction_boundary(0x9832, 5); nes_write((0x6EA3 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9835:;
    /* $9835: 38 */ nes_cpu_instruction_boundary(0x9835, 2); g_cpu.C = 1;
label_9836:;
    /* $9836: FD */ nes_cpu_instruction_boundary(0x9836, 4); { uint8_t m=nes_read((0x6EA6 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9839:;
    /* $9839: 08 */ nes_cpu_instruction_boundary(0x9839, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_983A:;
    /* $983A: 68 */ nes_cpu_instruction_boundary(0x983A, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_983B:;
    /* $983B: 5D */ nes_cpu_instruction_boundary(0x983B, 4); g_cpu.A ^= nes_read((0x6EAE + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_983E:;
    /* $983E: 4A */ nes_cpu_instruction_boundary(0x983E, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_983F:;
    /* $983F: 90 */ nes_cpu_instruction_boundary(0x983F, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9864; }
label_9841:;
    /* $9841: BD */ nes_cpu_instruction_boundary(0x9841, 4); g_cpu.A = nes_read((0x6EAD + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9844:;
    /* $9844: 20 */ nes_cpu_instruction_boundary(0x9844, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x98; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x46; g_cpu.S--; func_9871_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9844, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9847:;
    /* $9847: BC */ nes_cpu_instruction_boundary(0x9847, 4); g_cpu.Y = nes_read((0x6EAF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_984A:;
    /* $984A: 10 */ nes_cpu_instruction_boundary(0x984A, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_9851; }
label_984C:;
    /* $984C: 49 */ nes_cpu_instruction_boundary(0x984C, 2); g_cpu.A ^= 0xFF; FLAG_NZ(g_cpu.A);
label_984E:;
    /* $984E: 18 */ nes_cpu_instruction_boundary(0x984E, 2); g_cpu.C = 0;
label_984F:;
    /* $984F: 69 */ nes_cpu_instruction_boundary(0x984F, 2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_9851:; /* UpdateCrossMissileCoords_endIf_C */
    /* $9851: 18 */ nes_cpu_instruction_boundary(0x9851, 2); g_cpu.C = 0;
label_9852:;
    /* $9852: 7D */ nes_cpu_instruction_boundary(0x9852, 4); { uint8_t m=nes_read((0x6EA0 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9855:;
    /* $9855: 9D */ nes_cpu_instruction_boundary(0x9855, 5); nes_write((0x6EA0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9858:;
    /* $9858: 38 */ nes_cpu_instruction_boundary(0x9858, 2); g_cpu.C = 1;
label_9859:;
    /* $9859: FD */ nes_cpu_instruction_boundary(0x9859, 4); { uint8_t m=nes_read((0x6EA7 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_985C:;
    /* $985C: 08 */ nes_cpu_instruction_boundary(0x985C, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_985D:;
    /* $985D: 68 */ nes_cpu_instruction_boundary(0x985D, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_985E:;
    /* $985E: 5D */ nes_cpu_instruction_boundary(0x985E, 4); g_cpu.A ^= nes_read((0x6EAF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9861:;
    /* $9861: 4A */ nes_cpu_instruction_boundary(0x9861, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9862:;
    /* $9862: B0 */ nes_cpu_instruction_boundary(0x9862, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9870; }
label_9864:; /* UpdateCrossMissileCoords_endIf_B */
    /* $9864: BD */ nes_cpu_instruction_boundary(0x9864, 4); g_cpu.A = nes_read((0x6EA7 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9867:;
    /* $9867: 9D */ nes_cpu_instruction_boundary(0x9867, 5); nes_write((0x6EA0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_986A:;
    /* $986A: BD */ nes_cpu_instruction_boundary(0x986A, 4); g_cpu.A = nes_read((0x6EA6 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_986D:;
    /* $986D: 9D */ nes_cpu_instruction_boundary(0x986D, 5); nes_write((0x6EA3 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9870:; /* UpdateCrossMissileCoords_RTS */
    /* $9870: 60 */ nes_cpu_instruction_boundary(0x9870, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8F60_b0(void) { /* ConsolidatePassword */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8F60_b0");
#endif
label_8F60:; /* ConsolidatePassword */
    /* $8F60: A0 */ nes_cpu_instruction_boundary(0x8F60, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_8F62:;
    /* $8F62: 20 */ nes_cpu_instruction_boundary(0x8F62, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x64; g_cpu.S--; func_8FF1_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8F62, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8F65:;
    /* $8F65: 8D */ nes_cpu_instruction_boundary(0x8F65, 4); nes_write(0x6988, g_cpu.A);
label_8F68:;
    /* $8F68: A0 */ nes_cpu_instruction_boundary(0x8F68, 2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_8F6A:;
    /* $8F6A: 20 */ nes_cpu_instruction_boundary(0x8F6A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6C; g_cpu.S--; func_9001_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8F6A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8F6D:;
    /* $8F6D: 8D */ nes_cpu_instruction_boundary(0x8F6D, 4); nes_write(0x6989, g_cpu.A);
label_8F70:;
    /* $8F70: A0 */ nes_cpu_instruction_boundary(0x8F70, 2); g_cpu.Y = 0x02; FLAG_NZ(g_cpu.Y);
label_8F72:;
    /* $8F72: 20 */ nes_cpu_instruction_boundary(0x8F72, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x74; g_cpu.S--; func_9011_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8F72, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8F75:;
    /* $8F75: 8D */ nes_cpu_instruction_boundary(0x8F75, 4); nes_write(0x698A, g_cpu.A);
label_8F78:;
    /* $8F78: A0 */ nes_cpu_instruction_boundary(0x8F78, 2); g_cpu.Y = 0x04; FLAG_NZ(g_cpu.Y);
label_8F7A:;
    /* $8F7A: 20 */ nes_cpu_instruction_boundary(0x8F7A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x7C; g_cpu.S--; func_8FF1_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8F7A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8F7D:;
    /* $8F7D: 8D */ nes_cpu_instruction_boundary(0x8F7D, 4); nes_write(0x698B, g_cpu.A);
label_8F80:;
    /* $8F80: A0 */ nes_cpu_instruction_boundary(0x8F80, 2); g_cpu.Y = 0x05; FLAG_NZ(g_cpu.Y);
label_8F82:;
    /* $8F82: 20 */ nes_cpu_instruction_boundary(0x8F82, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; func_9001_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8F82, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8F85:;
    /* $8F85: 8D */ nes_cpu_instruction_boundary(0x8F85, 4); nes_write(0x698C, g_cpu.A);
label_8F88:;
    /* $8F88: A0 */ nes_cpu_instruction_boundary(0x8F88, 2); g_cpu.Y = 0x06; FLAG_NZ(g_cpu.Y);
label_8F8A:;
    /* $8F8A: 20 */ nes_cpu_instruction_boundary(0x8F8A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; func_9011_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8F8A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8F8D:;
    /* $8F8D: 8D */ nes_cpu_instruction_boundary(0x8F8D, 4); nes_write(0x698D, g_cpu.A);
label_8F90:;
    /* $8F90: A0 */ nes_cpu_instruction_boundary(0x8F90, 2); g_cpu.Y = 0x08; FLAG_NZ(g_cpu.Y);
label_8F92:;
    /* $8F92: 20 */ nes_cpu_instruction_boundary(0x8F92, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x94; g_cpu.S--; func_8FF1_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8F92, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8F95:;
    /* $8F95: 8D */ nes_cpu_instruction_boundary(0x8F95, 4); nes_write(0x698E, g_cpu.A);
label_8F98:;
    /* $8F98: A0 */ nes_cpu_instruction_boundary(0x8F98, 2); g_cpu.Y = 0x09; FLAG_NZ(g_cpu.Y);
label_8F9A:;
    /* $8F9A: 20 */ nes_cpu_instruction_boundary(0x8F9A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x9C; g_cpu.S--; func_9001_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8F9A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8F9D:;
    /* $8F9D: 8D */ nes_cpu_instruction_boundary(0x8F9D, 4); nes_write(0x698F, g_cpu.A);
label_8FA0:;
    /* $8FA0: A0 */ nes_cpu_instruction_boundary(0x8FA0, 2); g_cpu.Y = 0x0A; FLAG_NZ(g_cpu.Y);
label_8FA2:;
    /* $8FA2: 20 */ nes_cpu_instruction_boundary(0x8FA2, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA4; g_cpu.S--; func_9011_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8FA2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8FA5:;
    /* $8FA5: 8D */ nes_cpu_instruction_boundary(0x8FA5, 4); nes_write(0x6990, g_cpu.A);
label_8FA8:;
    /* $8FA8: A0 */ nes_cpu_instruction_boundary(0x8FA8, 2); g_cpu.Y = 0x0C; FLAG_NZ(g_cpu.Y);
label_8FAA:;
    /* $8FAA: 20 */ nes_cpu_instruction_boundary(0x8FAA, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAC; g_cpu.S--; func_8FF1_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8FAA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8FAD:;
    /* $8FAD: 8D */ nes_cpu_instruction_boundary(0x8FAD, 4); nes_write(0x6991, g_cpu.A);
label_8FB0:;
    /* $8FB0: A0 */ nes_cpu_instruction_boundary(0x8FB0, 2); g_cpu.Y = 0x0D; FLAG_NZ(g_cpu.Y);
label_8FB2:;
    /* $8FB2: 20 */ nes_cpu_instruction_boundary(0x8FB2, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; func_9001_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8FB2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8FB5:;
    /* $8FB5: 8D */ nes_cpu_instruction_boundary(0x8FB5, 4); nes_write(0x6992, g_cpu.A);
label_8FB8:;
    /* $8FB8: A0 */ nes_cpu_instruction_boundary(0x8FB8, 2); g_cpu.Y = 0x0E; FLAG_NZ(g_cpu.Y);
label_8FBA:;
    /* $8FBA: 20 */ nes_cpu_instruction_boundary(0x8FBA, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; func_9011_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8FBA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8FBD:;
    /* $8FBD: 8D */ nes_cpu_instruction_boundary(0x8FBD, 4); nes_write(0x6993, g_cpu.A);
label_8FC0:;
    /* $8FC0: A0 */ nes_cpu_instruction_boundary(0x8FC0, 2); g_cpu.Y = 0x10; FLAG_NZ(g_cpu.Y);
label_8FC2:;
    /* $8FC2: 20 */ nes_cpu_instruction_boundary(0x8FC2, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC4; g_cpu.S--; func_8FF1_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8FC2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8FC5:;
    /* $8FC5: 8D */ nes_cpu_instruction_boundary(0x8FC5, 4); nes_write(0x6994, g_cpu.A);
label_8FC8:;
    /* $8FC8: A0 */ nes_cpu_instruction_boundary(0x8FC8, 2); g_cpu.Y = 0x11; FLAG_NZ(g_cpu.Y);
label_8FCA:;
    /* $8FCA: 20 */ nes_cpu_instruction_boundary(0x8FCA, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCC; g_cpu.S--; func_9001_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8FCA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8FCD:;
    /* $8FCD: 8D */ nes_cpu_instruction_boundary(0x8FCD, 4); nes_write(0x6995, g_cpu.A);
label_8FD0:;
    /* $8FD0: A0 */ nes_cpu_instruction_boundary(0x8FD0, 2); g_cpu.Y = 0x12; FLAG_NZ(g_cpu.Y);
label_8FD2:;
    /* $8FD2: 20 */ nes_cpu_instruction_boundary(0x8FD2, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD4; g_cpu.S--; func_9011_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8FD2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8FD5:;
    /* $8FD5: 8D */ nes_cpu_instruction_boundary(0x8FD5, 4); nes_write(0x6996, g_cpu.A);
label_8FD8:;
    /* $8FD8: A0 */ nes_cpu_instruction_boundary(0x8FD8, 2); g_cpu.Y = 0x14; FLAG_NZ(g_cpu.Y);
label_8FDA:;
    /* $8FDA: 20 */ nes_cpu_instruction_boundary(0x8FDA, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDC; g_cpu.S--; func_8FF1_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8FDA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8FDD:;
    /* $8FDD: 8D */ nes_cpu_instruction_boundary(0x8FDD, 4); nes_write(0x6997, g_cpu.A);
label_8FE0:;
    /* $8FE0: A0 */ nes_cpu_instruction_boundary(0x8FE0, 2); g_cpu.Y = 0x15; FLAG_NZ(g_cpu.Y);
label_8FE2:;
    /* $8FE2: 20 */ nes_cpu_instruction_boundary(0x8FE2, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE4; g_cpu.S--; func_9001_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8FE2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8FE5:;
    /* $8FE5: 8D */ nes_cpu_instruction_boundary(0x8FE5, 4); nes_write(0x6998, g_cpu.A);
label_8FE8:;
    /* $8FE8: A0 */ nes_cpu_instruction_boundary(0x8FE8, 2); g_cpu.Y = 0x16; FLAG_NZ(g_cpu.Y);
label_8FEA:;
    /* $8FEA: 20 */ nes_cpu_instruction_boundary(0x8FEA, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xEC; g_cpu.S--; func_9011_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8FEA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8FED:;
    /* $8FED: 8D */ nes_cpu_instruction_boundary(0x8FED, 4); nes_write(0x6999, g_cpu.A);
label_8FF0:;
    /* $8FF0: 60 */ nes_cpu_instruction_boundary(0x8FF0, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8DDE_b0(void) { /* ValidatePassword */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8DDE_b0");
#endif
label_8DDE:; /* ValidatePassword */
    /* $8DDE: AD */ nes_cpu_instruction_boundary(0x8DDE, 4); g_cpu.A = nes_read(0x69B2); FLAG_NZ(g_cpu.A);
label_8DE1:;
    /* $8DE1: D0 */ nes_cpu_instruction_boundary(0x8DE1, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8DF7; }
label_8DE3:;
    /* $8DE3: A0 */ nes_cpu_instruction_boundary(0x8DE3, 2); g_cpu.Y = 0x0F; FLAG_NZ(g_cpu.Y);
label_8DE5:; /* ValidatePassword_loop_NARPASSWORD */
    /* $8DE5: B9 */ nes_cpu_instruction_boundary(0x8DE5, 4); g_cpu.A = nes_read((0x699A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8DE8:;
    /* $8DE8: D9 */ nes_cpu_instruction_boundary(0x8DE8, 4); { uint8_t m=nes_read((0x8E07 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8DEB:;
    /* $8DEB: D0 */ nes_cpu_instruction_boundary(0x8DEB, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8DF7; }
label_8DED:;
    /* $8DED: 88 */ nes_cpu_instruction_boundary(0x8DED, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8DEE:;
    /* $8DEE: 10 */ nes_cpu_instruction_boundary(0x8DEE, 2); if (!g_cpu.N) {
    nes_cpu_instruction_boundary(0x8DE5, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8DE5;
    }
label_8DF0:;
    /* $8DF0: A9 */ nes_cpu_instruction_boundary(0x8DF0, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8DF2:;
    /* $8DF2: 8D */ nes_cpu_instruction_boundary(0x8DF2, 4); nes_write(0x69B2, g_cpu.A);
label_8DF5:;
    /* $8DF5: D0 */ nes_cpu_instruction_boundary(0x8DF5, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_8E05; }
label_8DF7:; /* ValidatePassword_passwordIsNotNARPASSWORD */
    /* $8DF7: 20 */ nes_cpu_instruction_boundary(0x8DF7, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8D; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF9; g_cpu.S--; func_8E4E_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8DF7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8DFA:;
    /* $8DFA: 20 */ nes_cpu_instruction_boundary(0x8DFA, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8D; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFC; g_cpu.S--; func_8E21_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8DFA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8DFD:;
    /* $8DFD: CD */ nes_cpu_instruction_boundary(0x8DFD, 4); { uint8_t m=nes_read(0x6999); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8E00:;
    /* $8E00: F0 */ nes_cpu_instruction_boundary(0x8E00, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8E05; }
label_8E02:;
    /* $8E02: 38 */ nes_cpu_instruction_boundary(0x8E02, 2); g_cpu.C = 1;
label_8E03:;
    /* $8E03: B0 */ nes_cpu_instruction_boundary(0x8E03, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8E06; }
label_8E05:; /* ValidatePassword_validPassword */
    /* $8E05: 18 */ nes_cpu_instruction_boundary(0x8E05, 2); g_cpu.C = 0;
label_8E06:; /* ValidatePassword_RTS */
    /* $8E06: 60 */ nes_cpu_instruction_boundary(0x8E06, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_92D4_b0(void) { /* InitializeGame */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_92D4_b0");
#endif
label_92D4:; /* InitializeGame */
    /* $92D4: 20 */ nes_cpu_instruction_boundary(0x92D4, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x92; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD6; g_cpu.S--; func_C1D4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x92D4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_92D7:;
    /* $92D7: 20 */ nes_cpu_instruction_boundary(0x92D7, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x92; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD9; g_cpu.S--; func_C578();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x92D7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_92DA:;
    /* $92DA: 20 */ nes_cpu_instruction_boundary(0x92DA, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x92; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDC; g_cpu.S--; func_8D12_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x92DA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_92DD:;
    /* $92DD: A0 */ nes_cpu_instruction_boundary(0x92DD, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_92DF:;
    /* $92DF: 84 */ nes_cpu_instruction_boundary(0x92DF, 3); nes_write(0x5B, g_cpu.Y);
label_92E1:;
    /* $92E1: 84 */ nes_cpu_instruction_boundary(0x92E1, 3); nes_write(0x4B, g_cpu.Y);
label_92E3:;
    /* $92E3: 84 */ nes_cpu_instruction_boundary(0x92E3, 3); nes_write(0x6B, g_cpu.Y);
label_92E5:;
    /* $92E5: 8C */ nes_cpu_instruction_boundary(0x92E5, 4); nes_write(0x030C, g_cpu.Y);
label_92E8:;
    /* $92E8: 20 */ nes_cpu_instruction_boundary(0x92E8, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x92; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xEA; g_cpu.S--; func_CB8E();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x92E8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_92EB:;
    /* $92EB: A9 */ nes_cpu_instruction_boundary(0x92EB, 2); g_cpu.A = 0x5A; FLAG_NZ(g_cpu.A);
label_92ED:;
    /* $92ED: 8D */ nes_cpu_instruction_boundary(0x92ED, 4); nes_write(0x0303, g_cpu.A);
label_92F0:;
    /* $92F0: A2 */ nes_cpu_instruction_boundary(0x92F0, 2); g_cpu.X = 0x01; FLAG_NZ(g_cpu.X);
label_92F2:;
    /* $92F2: A5 */ nes_cpu_instruction_boundary(0x92F2, 3); g_cpu.A = nes_read(0x74); FLAG_NZ(g_cpu.A);
label_92F4:;
    /* $92F4: 29 */ nes_cpu_instruction_boundary(0x92F4, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_92F6:;
    /* $92F6: D0 */ nes_cpu_instruction_boundary(0x92F6, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_92F9; }
label_92F8:;
    /* $92F8: CA */ nes_cpu_instruction_boundary(0x92F8, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_92F9:;
    /* $92F9: BD */ nes_cpu_instruction_boundary(0x92F9, 4); g_cpu.A = nes_read((0x9325 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_92FC:;
    /* $92FC: 8D */ nes_cpu_instruction_boundary(0x92FC, 4); nes_write(0x030D, g_cpu.A);
label_92FF:;
    /* $92FF: BD */ nes_cpu_instruction_boundary(0x92FF, 4); g_cpu.A = nes_read((0x9328 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9302:;
    /* $9302: 8D */ nes_cpu_instruction_boundary(0x9302, 4); nes_write(0x030E, g_cpu.A);
label_9305:;
    /* $9305: EE */ nes_cpu_instruction_boundary(0x9305, 6); { uint16_t a=0x6881; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9308:;
    /* $9308: D0 */ nes_cpu_instruction_boundary(0x9308, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_930D; }
label_930A:;
    /* $930A: EE */ nes_cpu_instruction_boundary(0x930A, 6); { uint16_t a=0x6882; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_930D:;
    /* $930D: A9 */ nes_cpu_instruction_boundary(0x930D, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_930F:;
    /* $930F: 85 */ nes_cpu_instruction_boundary(0x930F, 3); nes_write(0x1E, g_cpu.A);
label_9311:;
    /* $9311: 20 */ nes_cpu_instruction_boundary(0x9311, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x13; g_cpu.S--; func_C45D();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9311, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9314:;
    /* $9314: 20 */ nes_cpu_instruction_boundary(0x9314, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x16; g_cpu.S--; func_C5DC();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9314, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9317:;
    /* $9317: 20 */ nes_cpu_instruction_boundary(0x9317, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x19; g_cpu.S--; func_C487();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9317, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_931A:;
    /* $931A: A5 */ nes_cpu_instruction_boundary(0x931A, 3); g_cpu.A = nes_read(0x74); FLAG_NZ(g_cpu.A);
label_931C:;
    /* $931C: 29 */ nes_cpu_instruction_boundary(0x931C, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_931E:;
    /* $931E: A8 */ nes_cpu_instruction_boundary(0x931E, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_931F:;
    /* $931F: B9 */ nes_cpu_instruction_boundary(0x931F, 4); g_cpu.A = nes_read((0xCA30 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9322:;
    /* $9322: 85 */ nes_cpu_instruction_boundary(0x9322, 3); nes_write(0x24, g_cpu.A);
label_9324:;
    /* $9324: 60 */ nes_cpu_instruction_boundary(0x9324, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8E17_b0(void) { /* PasswordChecksumAndScramble */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8E17_b0");
#endif
label_8E17:; /* PasswordChecksumAndScramble */
    /* $8E17: 20 */ nes_cpu_instruction_boundary(0x8E17, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8E; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x19; g_cpu.S--; func_8E21_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8E17, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8E1A:;
    /* $8E1A: 8D */ nes_cpu_instruction_boundary(0x8E1A, 4); nes_write(0x6999, g_cpu.A);
label_8E1D:;
    /* $8E1D: 20 */ nes_cpu_instruction_boundary(0x8E1D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8E; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1F; g_cpu.S--; func_8E2D_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8E1D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8E20:;
    /* $8E20: 60 */ nes_cpu_instruction_boundary(0x8E20, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8E6C_b0(void) { /* LoadPasswordChar */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8E6C_b0");
#endif
label_8E6C:; /* LoadPasswordChar */
    /* $8E6C: A0 */ nes_cpu_instruction_boundary(0x8E6C, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_8E6E:;
    /* $8E6E: 20 */ nes_cpu_instruction_boundary(0x8E6E, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8E; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x70; g_cpu.S--; func_8F2D_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8E6E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8E71:;
    /* $8E71: 8D */ nes_cpu_instruction_boundary(0x8E71, 4); nes_write(0x699A, g_cpu.A);
label_8E74:;
    /* $8E74: A0 */ nes_cpu_instruction_boundary(0x8E74, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_8E76:;
    /* $8E76: 20 */ nes_cpu_instruction_boundary(0x8E76, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8E; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x78; g_cpu.S--; func_8F33_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8E76, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8E79:;
    /* $8E79: 8D */ nes_cpu_instruction_boundary(0x8E79, 4); nes_write(0x699B, g_cpu.A);
label_8E7C:;
    /* $8E7C: A0 */ nes_cpu_instruction_boundary(0x8E7C, 2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_8E7E:;
    /* $8E7E: 20 */ nes_cpu_instruction_boundary(0x8E7E, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8E; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; func_8F46_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8E7E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8E81:;
    /* $8E81: 8D */ nes_cpu_instruction_boundary(0x8E81, 4); nes_write(0x699C, g_cpu.A);
label_8E84:;
    /* $8E84: A0 */ nes_cpu_instruction_boundary(0x8E84, 2); g_cpu.Y = 0x02; FLAG_NZ(g_cpu.Y);
label_8E86:;
    /* $8E86: 20 */ nes_cpu_instruction_boundary(0x8E86, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8E; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x88; g_cpu.S--; func_8F5A_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8E86, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8E89:;
    /* $8E89: 8D */ nes_cpu_instruction_boundary(0x8E89, 4); nes_write(0x699D, g_cpu.A);
label_8E8C:;
    /* $8E8C: A0 */ nes_cpu_instruction_boundary(0x8E8C, 2); g_cpu.Y = 0x03; FLAG_NZ(g_cpu.Y);
label_8E8E:;
    /* $8E8E: 20 */ nes_cpu_instruction_boundary(0x8E8E, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8E; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x90; g_cpu.S--; func_8F2D_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8E8E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8E91:;
    /* $8E91: 8D */ nes_cpu_instruction_boundary(0x8E91, 4); nes_write(0x699E, g_cpu.A);
label_8E94:;
    /* $8E94: A0 */ nes_cpu_instruction_boundary(0x8E94, 2); g_cpu.Y = 0x03; FLAG_NZ(g_cpu.Y);
label_8E96:;
    /* $8E96: 20 */ nes_cpu_instruction_boundary(0x8E96, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8E; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x98; g_cpu.S--; func_8F33_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8E96, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8E99:;
    /* $8E99: 8D */ nes_cpu_instruction_boundary(0x8E99, 4); nes_write(0x699F, g_cpu.A);
label_8E9C:;
    /* $8E9C: A0 */ nes_cpu_instruction_boundary(0x8E9C, 2); g_cpu.Y = 0x04; FLAG_NZ(g_cpu.Y);
label_8E9E:;
    /* $8E9E: 20 */ nes_cpu_instruction_boundary(0x8E9E, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8E; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA0; g_cpu.S--; func_8F46_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8E9E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8EA1:;
    /* $8EA1: 8D */ nes_cpu_instruction_boundary(0x8EA1, 4); nes_write(0x69A0, g_cpu.A);
label_8EA4:;
    /* $8EA4: A0 */ nes_cpu_instruction_boundary(0x8EA4, 2); g_cpu.Y = 0x05; FLAG_NZ(g_cpu.Y);
label_8EA6:;
    /* $8EA6: 20 */ nes_cpu_instruction_boundary(0x8EA6, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8E; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA8; g_cpu.S--; func_8F5A_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8EA6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8EA9:;
    /* $8EA9: 8D */ nes_cpu_instruction_boundary(0x8EA9, 4); nes_write(0x69A1, g_cpu.A);
label_8EAC:;
    /* $8EAC: A0 */ nes_cpu_instruction_boundary(0x8EAC, 2); g_cpu.Y = 0x06; FLAG_NZ(g_cpu.Y);
label_8EAE:;
    /* $8EAE: 20 */ nes_cpu_instruction_boundary(0x8EAE, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8E; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB0; g_cpu.S--; func_8F2D_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8EAE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8EB1:;
    /* $8EB1: 8D */ nes_cpu_instruction_boundary(0x8EB1, 4); nes_write(0x69A2, g_cpu.A);
label_8EB4:;
    /* $8EB4: A0 */ nes_cpu_instruction_boundary(0x8EB4, 2); g_cpu.Y = 0x06; FLAG_NZ(g_cpu.Y);
label_8EB6:;
    /* $8EB6: 20 */ nes_cpu_instruction_boundary(0x8EB6, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8E; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; func_8F33_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8EB6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8EB9:;
    /* $8EB9: 8D */ nes_cpu_instruction_boundary(0x8EB9, 4); nes_write(0x69A3, g_cpu.A);
label_8EBC:;
    /* $8EBC: A0 */ nes_cpu_instruction_boundary(0x8EBC, 2); g_cpu.Y = 0x07; FLAG_NZ(g_cpu.Y);
label_8EBE:;
    /* $8EBE: 20 */ nes_cpu_instruction_boundary(0x8EBE, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8E; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC0; g_cpu.S--; func_8F46_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8EBE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8EC1:;
    /* $8EC1: 8D */ nes_cpu_instruction_boundary(0x8EC1, 4); nes_write(0x69A4, g_cpu.A);
label_8EC4:;
    /* $8EC4: A0 */ nes_cpu_instruction_boundary(0x8EC4, 2); g_cpu.Y = 0x08; FLAG_NZ(g_cpu.Y);
label_8EC6:;
    /* $8EC6: 20 */ nes_cpu_instruction_boundary(0x8EC6, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8E; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC8; g_cpu.S--; func_8F5A_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8EC6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8EC9:;
    /* $8EC9: 8D */ nes_cpu_instruction_boundary(0x8EC9, 4); nes_write(0x69A5, g_cpu.A);
label_8ECC:;
    /* $8ECC: A0 */ nes_cpu_instruction_boundary(0x8ECC, 2); g_cpu.Y = 0x09; FLAG_NZ(g_cpu.Y);
label_8ECE:;
    /* $8ECE: 20 */ nes_cpu_instruction_boundary(0x8ECE, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8E; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD0; g_cpu.S--; func_8F2D_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8ECE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8ED1:;
    /* $8ED1: 8D */ nes_cpu_instruction_boundary(0x8ED1, 4); nes_write(0x69A6, g_cpu.A);
label_8ED4:;
    /* $8ED4: A0 */ nes_cpu_instruction_boundary(0x8ED4, 2); g_cpu.Y = 0x09; FLAG_NZ(g_cpu.Y);
label_8ED6:;
    /* $8ED6: 20 */ nes_cpu_instruction_boundary(0x8ED6, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8E; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD8; g_cpu.S--; func_8F33_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8ED6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8ED9:;
    /* $8ED9: 8D */ nes_cpu_instruction_boundary(0x8ED9, 4); nes_write(0x69A7, g_cpu.A);
label_8EDC:;
    /* $8EDC: A0 */ nes_cpu_instruction_boundary(0x8EDC, 2); g_cpu.Y = 0x0A; FLAG_NZ(g_cpu.Y);
label_8EDE:;
    /* $8EDE: 20 */ nes_cpu_instruction_boundary(0x8EDE, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8E; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE0; g_cpu.S--; func_8F46_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8EDE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8EE1:;
    /* $8EE1: 8D */ nes_cpu_instruction_boundary(0x8EE1, 4); nes_write(0x69A8, g_cpu.A);
label_8EE4:;
    /* $8EE4: A0 */ nes_cpu_instruction_boundary(0x8EE4, 2); g_cpu.Y = 0x0B; FLAG_NZ(g_cpu.Y);
label_8EE6:;
    /* $8EE6: 20 */ nes_cpu_instruction_boundary(0x8EE6, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8E; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE8; g_cpu.S--; func_8F5A_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8EE6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8EE9:;
    /* $8EE9: 8D */ nes_cpu_instruction_boundary(0x8EE9, 4); nes_write(0x69A9, g_cpu.A);
label_8EEC:;
    /* $8EEC: A0 */ nes_cpu_instruction_boundary(0x8EEC, 2); g_cpu.Y = 0x0C; FLAG_NZ(g_cpu.Y);
label_8EEE:;
    /* $8EEE: 20 */ nes_cpu_instruction_boundary(0x8EEE, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8E; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; func_8F2D_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8EEE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8EF1:;
    /* $8EF1: 8D */ nes_cpu_instruction_boundary(0x8EF1, 4); nes_write(0x69AA, g_cpu.A);
label_8EF4:;
    /* $8EF4: A0 */ nes_cpu_instruction_boundary(0x8EF4, 2); g_cpu.Y = 0x0C; FLAG_NZ(g_cpu.Y);
label_8EF6:;
    /* $8EF6: 20 */ nes_cpu_instruction_boundary(0x8EF6, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8E; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF8; g_cpu.S--; func_8F33_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8EF6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8EF9:;
    /* $8EF9: 8D */ nes_cpu_instruction_boundary(0x8EF9, 4); nes_write(0x69AB, g_cpu.A);
label_8EFC:;
    /* $8EFC: A0 */ nes_cpu_instruction_boundary(0x8EFC, 2); g_cpu.Y = 0x0D; FLAG_NZ(g_cpu.Y);
label_8EFE:;
    /* $8EFE: 20 */ nes_cpu_instruction_boundary(0x8EFE, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x00; g_cpu.S--; func_8F46_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8EFE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8F01:;
    /* $8F01: 8D */ nes_cpu_instruction_boundary(0x8F01, 4); nes_write(0x69AC, g_cpu.A);
label_8F04:;
    /* $8F04: A0 */ nes_cpu_instruction_boundary(0x8F04, 2); g_cpu.Y = 0x0E; FLAG_NZ(g_cpu.Y);
label_8F06:;
    /* $8F06: 20 */ nes_cpu_instruction_boundary(0x8F06, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x08; g_cpu.S--; func_8F5A_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8F06, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8F09:;
    /* $8F09: 8D */ nes_cpu_instruction_boundary(0x8F09, 4); nes_write(0x69AD, g_cpu.A);
label_8F0C:;
    /* $8F0C: A0 */ nes_cpu_instruction_boundary(0x8F0C, 2); g_cpu.Y = 0x0F; FLAG_NZ(g_cpu.Y);
label_8F0E:;
    /* $8F0E: 20 */ nes_cpu_instruction_boundary(0x8F0E, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x10; g_cpu.S--; func_8F2D_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8F0E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8F11:;
    /* $8F11: 8D */ nes_cpu_instruction_boundary(0x8F11, 4); nes_write(0x69AE, g_cpu.A);
label_8F14:;
    /* $8F14: A0 */ nes_cpu_instruction_boundary(0x8F14, 2); g_cpu.Y = 0x0F; FLAG_NZ(g_cpu.Y);
label_8F16:;
    /* $8F16: 20 */ nes_cpu_instruction_boundary(0x8F16, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x18; g_cpu.S--; func_8F33_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8F16, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8F19:;
    /* $8F19: 8D */ nes_cpu_instruction_boundary(0x8F19, 4); nes_write(0x69AF, g_cpu.A);
label_8F1C:;
    /* $8F1C: A0 */ nes_cpu_instruction_boundary(0x8F1C, 2); g_cpu.Y = 0x10; FLAG_NZ(g_cpu.Y);
label_8F1E:;
    /* $8F1E: 20 */ nes_cpu_instruction_boundary(0x8F1E, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x20; g_cpu.S--; func_8F46_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8F1E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8F21:;
    /* $8F21: 8D */ nes_cpu_instruction_boundary(0x8F21, 4); nes_write(0x69B0, g_cpu.A);
label_8F24:;
    /* $8F24: A0 */ nes_cpu_instruction_boundary(0x8F24, 2); g_cpu.Y = 0x11; FLAG_NZ(g_cpu.Y);
label_8F26:;
    /* $8F26: 20 */ nes_cpu_instruction_boundary(0x8F26, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x28; g_cpu.S--; func_8F5A_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8F26, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8F29:;
    /* $8F29: 8D */ nes_cpu_instruction_boundary(0x8F29, 4); nes_write(0x69B1, g_cpu.A);
label_8F2C:;
    /* $8F2C: 60 */ nes_cpu_instruction_boundary(0x8F2C, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_93F9_b0(void) { /* LoadPasswordCharToVRAMStringRAM */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_93F9_b0");
#endif
label_93F9:; /* LoadPasswordCharToVRAMStringRAM */
    /* $93F9: A9 */ nes_cpu_instruction_boundary(0x93F9, 2); g_cpu.A = 0x16; FLAG_NZ(g_cpu.A);
label_93FB:;
    /* $93FB: 8D */ nes_cpu_instruction_boundary(0x93FB, 4); nes_write(0x0780, g_cpu.A);
label_93FE:;
    /* $93FE: A2 */ nes_cpu_instruction_boundary(0x93FE, 2); g_cpu.X = 0x05; FLAG_NZ(g_cpu.X);
label_9400:; /* LoadPasswordCharToVRAMStringRAM_loop */
    /* $9400: B9 */ nes_cpu_instruction_boundary(0x9400, 4); g_cpu.A = nes_read((0x699A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9403:;
    /* $9403: 9D */ nes_cpu_instruction_boundary(0x9403, 5); nes_write((0x0781 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9406:;
    /* $9406: 88 */ nes_cpu_instruction_boundary(0x9406, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9407:;
    /* $9407: CA */ nes_cpu_instruction_boundary(0x9407, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_9408:;
    /* $9408: 10 */ nes_cpu_instruction_boundary(0x9408, 2); if (!g_cpu.N) {
    nes_cpu_instruction_boundary(0x9400, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9400;
    }
label_940A:;
    /* $940A: 60 */ nes_cpu_instruction_boundary(0x940A, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9C9A_b0(void) { /* LoadEndSamusSprites */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9C9A_b0");
#endif
label_9C9A:; /* LoadEndSamusSprites */
    /* $9C9A: A2 */ nes_cpu_instruction_boundary(0x9C9A, 2); g_cpu.X = 0x30; FLAG_NZ(g_cpu.X);
label_9C9C:;
    /* $9C9C: A4 */ nes_cpu_instruction_boundary(0x9C9C, 3); g_cpu.Y = nes_read(0x7D); FLAG_NZ(g_cpu.Y);
label_9C9E:;
    /* $9C9E: B9 */ nes_cpu_instruction_boundary(0x9C9E, 4); g_cpu.A = nes_read((0x9D5A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CA1:;
    /* $9CA1: 85 */ nes_cpu_instruction_boundary(0x9CA1, 3); nes_write(0x00, g_cpu.A);
label_9CA3:;
    /* $9CA3: B9 */ nes_cpu_instruction_boundary(0x9CA3, 4); g_cpu.A = nes_read((0x9D5B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CA6:;
    /* $9CA6: 85 */ nes_cpu_instruction_boundary(0x9CA6, 3); nes_write(0x01, g_cpu.A);
label_9CA8:;
    /* $9CA8: A0 */ nes_cpu_instruction_boundary(0x9CA8, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_9CAA:; /* LoadEndSamusSprites_loop_A */
    /* $9CAA: B1 */ nes_cpu_instruction_boundary(0x9CAA, 5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CAC:;
    /* $9CAC: 9D */ nes_cpu_instruction_boundary(0x9CAC, 5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CAF:;
    /* $9CAF: E8 */ nes_cpu_instruction_boundary(0x9CAF, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9CB0:;
    /* $9CB0: C8 */ nes_cpu_instruction_boundary(0x9CB0, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9CB1:;
    /* $9CB1: B1 */ nes_cpu_instruction_boundary(0x9CB1, 5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CB3:;
    /* $9CB3: 10 */ nes_cpu_instruction_boundary(0x9CB3, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_9CC0; }
label_9CB5:;
    /* $9CB5: 29 */ nes_cpu_instruction_boundary(0x9CB5, 2); g_cpu.A &= 0x7F; FLAG_NZ(g_cpu.A);
label_9CB7:;
    /* $9CB7: 9D */ nes_cpu_instruction_boundary(0x9CB7, 5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CBA:;
    /* $9CBA: A5 */ nes_cpu_instruction_boundary(0x9CBA, 3); g_cpu.A = nes_read(0x7E); FLAG_NZ(g_cpu.A);
label_9CBC:;
    /* $9CBC: 49 */ nes_cpu_instruction_boundary(0x9CBC, 2); g_cpu.A ^= 0x40; FLAG_NZ(g_cpu.A);
label_9CBE:;
    /* $9CBE: D0 */ nes_cpu_instruction_boundary(0x9CBE, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9CC5; }
label_9CC0:; /* LoadEndSamusSprites_else_A */
    /* $9CC0: 9D */ nes_cpu_instruction_boundary(0x9CC0, 5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CC3:;
    /* $9CC3: A5 */ nes_cpu_instruction_boundary(0x9CC3, 3); g_cpu.A = nes_read(0x7E); FLAG_NZ(g_cpu.A);
label_9CC5:; /* LoadEndSamusSprites_endIf_A */
    /* $9CC5: E8 */ nes_cpu_instruction_boundary(0x9CC5, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9CC6:;
    /* $9CC6: 9D */ nes_cpu_instruction_boundary(0x9CC6, 5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CC9:;
    /* $9CC9: C8 */ nes_cpu_instruction_boundary(0x9CC9, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9CCA:;
    /* $9CCA: E8 */ nes_cpu_instruction_boundary(0x9CCA, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9CCB:;
    /* $9CCB: B1 */ nes_cpu_instruction_boundary(0x9CCB, 5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CCD:;
    /* $9CCD: 9D */ nes_cpu_instruction_boundary(0x9CCD, 5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CD0:;
    /* $9CD0: C8 */ nes_cpu_instruction_boundary(0x9CD0, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9CD1:;
    /* $9CD1: E8 */ nes_cpu_instruction_boundary(0x9CD1, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9CD2:;
    /* $9CD2: C4 */ nes_cpu_instruction_boundary(0x9CD2, 3); { uint8_t m=nes_read(0x7C); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9CD4:;
    /* $9CD4: D0 */ nes_cpu_instruction_boundary(0x9CD4, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0x9CAA, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9CAA;
    }
label_9CD6:;
    /* $9CD6: A5 */ nes_cpu_instruction_boundary(0x9CD6, 3); g_cpu.A = nes_read(0x33); FLAG_NZ(g_cpu.A);
label_9CD8:;
    /* $9CD8: C9 */ nes_cpu_instruction_boundary(0x9CD8, 2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_9CDA:;
    /* $9CDA: 90 */ nes_cpu_instruction_boundary(0x9CDA, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9CF9; }
label_9CDC:;
    /* $9CDC: A5 */ nes_cpu_instruction_boundary(0x9CDC, 3); g_cpu.A = nes_read(0x7F); FLAG_NZ(g_cpu.A);
label_9CDE:;
    /* $9CDE: C9 */ nes_cpu_instruction_boundary(0x9CDE, 2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_9CE0:;
    /* $9CE0: 90 */ nes_cpu_instruction_boundary(0x9CE0, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9CF9; }
label_9CE2:;
    /* $9CE2: AD */ nes_cpu_instruction_boundary(0x9CE2, 4); g_cpu.A = nes_read(0x6872); FLAG_NZ(g_cpu.A);
label_9CE5:;
    /* $9CE5: C9 */ nes_cpu_instruction_boundary(0x9CE5, 2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_9CE7:;
    /* $9CE7: D0 */ nes_cpu_instruction_boundary(0x9CE7, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9CF9; }
label_9CE9:;
    /* $9CE9: A0 */ nes_cpu_instruction_boundary(0x9CE9, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_9CEB:;
    /* $9CEB: A2 */ nes_cpu_instruction_boundary(0x9CEB, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_9CED:; /* LoadEndSamusSprites_loop_B */
    /* $9CED: B9 */ nes_cpu_instruction_boundary(0x9CED, 4); g_cpu.A = nes_read((0x9CFA + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CF0:;
    /* $9CF0: 9D */ nes_cpu_instruction_boundary(0x9CF0, 5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CF3:;
    /* $9CF3: C8 */ nes_cpu_instruction_boundary(0x9CF3, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9CF4:;
    /* $9CF4: E8 */ nes_cpu_instruction_boundary(0x9CF4, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9CF5:;
    /* $9CF5: C0 */ nes_cpu_instruction_boundary(0x9CF5, 2); { int r=g_cpu.Y-0x18; g_cpu.C=(g_cpu.Y>=0x18)?1:0; FLAG_NZ(r&0xFF); }
label_9CF7:;
    /* $9CF7: D0 */ nes_cpu_instruction_boundary(0x9CF7, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0x9CED, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9CED;
    }
label_9CF9:; /* LoadEndSamusSprites_RTS */
    /* $9CF9: 60 */ nes_cpu_instruction_boundary(0x9CF9, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9C7F_b0(void) { /* LoadWaveSprites */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9C7F_b0");
#endif
label_9C7F:; /* LoadWaveSprites */
    /* $9C7F: A6 */ nes_cpu_instruction_boundary(0x9C7F, 3); g_cpu.X = nes_read(0x83); FLAG_NZ(g_cpu.X);
label_9C81:;
    /* $9C81: BD */ nes_cpu_instruction_boundary(0x9C81, 4); g_cpu.A = nes_read((0x9D12 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C84:;
    /* $9C84: 85 */ nes_cpu_instruction_boundary(0x9C84, 3); nes_write(0x00, g_cpu.A);
label_9C86:;
    /* $9C86: BD */ nes_cpu_instruction_boundary(0x9C86, 4); g_cpu.A = nes_read((0x9D13 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C89:;
    /* $9C89: 85 */ nes_cpu_instruction_boundary(0x9C89, 3); nes_write(0x01, g_cpu.A);
label_9C8B:;
    /* $9C8B: A2 */ nes_cpu_instruction_boundary(0x9C8B, 2); g_cpu.X = 0x20; FLAG_NZ(g_cpu.X);
label_9C8D:;
    /* $9C8D: A0 */ nes_cpu_instruction_boundary(0x9C8D, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_9C8F:; /* LoadWaveSprites_loop */
    /* $9C8F: B1 */ nes_cpu_instruction_boundary(0x9C8F, 5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C91:;
    /* $9C91: 9D */ nes_cpu_instruction_boundary(0x9C91, 5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9C94:;
    /* $9C94: E8 */ nes_cpu_instruction_boundary(0x9C94, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9C95:;
    /* $9C95: C8 */ nes_cpu_instruction_boundary(0x9C95, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9C96:;
    /* $9C96: C4 */ nes_cpu_instruction_boundary(0x9C96, 3); { uint8_t m=nes_read(0x84); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9C98:;
    /* $9C98: D0 */ nes_cpu_instruction_boundary(0x9C98, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0x9C8F, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9C8F;
    }
label_9C9A:; /* LoadEndSamusSprites */
    /* $9C9A: A2 */ nes_cpu_instruction_boundary(0x9C9A, 2); g_cpu.X = 0x30; FLAG_NZ(g_cpu.X);
label_9C9C:;
    /* $9C9C: A4 */ nes_cpu_instruction_boundary(0x9C9C, 3); g_cpu.Y = nes_read(0x7D); FLAG_NZ(g_cpu.Y);
label_9C9E:;
    /* $9C9E: B9 */ nes_cpu_instruction_boundary(0x9C9E, 4); g_cpu.A = nes_read((0x9D5A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CA1:;
    /* $9CA1: 85 */ nes_cpu_instruction_boundary(0x9CA1, 3); nes_write(0x00, g_cpu.A);
label_9CA3:;
    /* $9CA3: B9 */ nes_cpu_instruction_boundary(0x9CA3, 4); g_cpu.A = nes_read((0x9D5B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CA6:;
    /* $9CA6: 85 */ nes_cpu_instruction_boundary(0x9CA6, 3); nes_write(0x01, g_cpu.A);
label_9CA8:;
    /* $9CA8: A0 */ nes_cpu_instruction_boundary(0x9CA8, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_9CAA:; /* LoadEndSamusSprites_loop_A */
    /* $9CAA: B1 */ nes_cpu_instruction_boundary(0x9CAA, 5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CAC:;
    /* $9CAC: 9D */ nes_cpu_instruction_boundary(0x9CAC, 5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CAF:;
    /* $9CAF: E8 */ nes_cpu_instruction_boundary(0x9CAF, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9CB0:;
    /* $9CB0: C8 */ nes_cpu_instruction_boundary(0x9CB0, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9CB1:;
    /* $9CB1: B1 */ nes_cpu_instruction_boundary(0x9CB1, 5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CB3:;
    /* $9CB3: 10 */ nes_cpu_instruction_boundary(0x9CB3, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_9CC0; }
label_9CB5:;
    /* $9CB5: 29 */ nes_cpu_instruction_boundary(0x9CB5, 2); g_cpu.A &= 0x7F; FLAG_NZ(g_cpu.A);
label_9CB7:;
    /* $9CB7: 9D */ nes_cpu_instruction_boundary(0x9CB7, 5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CBA:;
    /* $9CBA: A5 */ nes_cpu_instruction_boundary(0x9CBA, 3); g_cpu.A = nes_read(0x7E); FLAG_NZ(g_cpu.A);
label_9CBC:;
    /* $9CBC: 49 */ nes_cpu_instruction_boundary(0x9CBC, 2); g_cpu.A ^= 0x40; FLAG_NZ(g_cpu.A);
label_9CBE:;
    /* $9CBE: D0 */ nes_cpu_instruction_boundary(0x9CBE, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9CC5; }
label_9CC0:; /* LoadEndSamusSprites_else_A */
    /* $9CC0: 9D */ nes_cpu_instruction_boundary(0x9CC0, 5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CC3:;
    /* $9CC3: A5 */ nes_cpu_instruction_boundary(0x9CC3, 3); g_cpu.A = nes_read(0x7E); FLAG_NZ(g_cpu.A);
label_9CC5:; /* LoadEndSamusSprites_endIf_A */
    /* $9CC5: E8 */ nes_cpu_instruction_boundary(0x9CC5, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9CC6:;
    /* $9CC6: 9D */ nes_cpu_instruction_boundary(0x9CC6, 5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CC9:;
    /* $9CC9: C8 */ nes_cpu_instruction_boundary(0x9CC9, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9CCA:;
    /* $9CCA: E8 */ nes_cpu_instruction_boundary(0x9CCA, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9CCB:;
    /* $9CCB: B1 */ nes_cpu_instruction_boundary(0x9CCB, 5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CCD:;
    /* $9CCD: 9D */ nes_cpu_instruction_boundary(0x9CCD, 5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CD0:;
    /* $9CD0: C8 */ nes_cpu_instruction_boundary(0x9CD0, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9CD1:;
    /* $9CD1: E8 */ nes_cpu_instruction_boundary(0x9CD1, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9CD2:;
    /* $9CD2: C4 */ nes_cpu_instruction_boundary(0x9CD2, 3); { uint8_t m=nes_read(0x7C); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9CD4:;
    /* $9CD4: D0 */ nes_cpu_instruction_boundary(0x9CD4, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0x9CAA, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9CAA;
    }
label_9CD6:;
    /* $9CD6: A5 */ nes_cpu_instruction_boundary(0x9CD6, 3); g_cpu.A = nes_read(0x33); FLAG_NZ(g_cpu.A);
label_9CD8:;
    /* $9CD8: C9 */ nes_cpu_instruction_boundary(0x9CD8, 2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_9CDA:;
    /* $9CDA: 90 */ nes_cpu_instruction_boundary(0x9CDA, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9CF9; }
label_9CDC:;
    /* $9CDC: A5 */ nes_cpu_instruction_boundary(0x9CDC, 3); g_cpu.A = nes_read(0x7F); FLAG_NZ(g_cpu.A);
label_9CDE:;
    /* $9CDE: C9 */ nes_cpu_instruction_boundary(0x9CDE, 2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_9CE0:;
    /* $9CE0: 90 */ nes_cpu_instruction_boundary(0x9CE0, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9CF9; }
label_9CE2:;
    /* $9CE2: AD */ nes_cpu_instruction_boundary(0x9CE2, 4); g_cpu.A = nes_read(0x6872); FLAG_NZ(g_cpu.A);
label_9CE5:;
    /* $9CE5: C9 */ nes_cpu_instruction_boundary(0x9CE5, 2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_9CE7:;
    /* $9CE7: D0 */ nes_cpu_instruction_boundary(0x9CE7, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9CF9; }
label_9CE9:;
    /* $9CE9: A0 */ nes_cpu_instruction_boundary(0x9CE9, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_9CEB:;
    /* $9CEB: A2 */ nes_cpu_instruction_boundary(0x9CEB, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_9CED:; /* LoadEndSamusSprites_loop_B */
    /* $9CED: B9 */ nes_cpu_instruction_boundary(0x9CED, 4); g_cpu.A = nes_read((0x9CFA + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CF0:;
    /* $9CF0: 9D */ nes_cpu_instruction_boundary(0x9CF0, 5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CF3:;
    /* $9CF3: C8 */ nes_cpu_instruction_boundary(0x9CF3, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9CF4:;
    /* $9CF4: E8 */ nes_cpu_instruction_boundary(0x9CF4, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9CF5:;
    /* $9CF5: C0 */ nes_cpu_instruction_boundary(0x9CF5, 2); { int r=g_cpu.Y-0x18; g_cpu.C=(g_cpu.Y>=0x18)?1:0; FLAG_NZ(r&0xFF); }
label_9CF7:;
    /* $9CF7: D0 */ nes_cpu_instruction_boundary(0x9CF7, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0x9CED, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9CED;
    }
label_9CF9:; /* LoadEndSamusSprites_RTS */
    /* $9CF9: 60 */ nes_cpu_instruction_boundary(0x9CF9, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9A38_b0(void) { /* Exit100 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A38_b0");
#endif
label_9A38:; /* Exit100 */
    /* $9A38: 60 */ nes_cpu_instruction_boundary(0x9A38, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_80B0_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80B0_b0");
#endif
label_80B0:;
    /* $80B0: 0D */ nes_cpu_instruction_boundary(0x80B0, 4); g_cpu.A |= nes_read(0x40C0); FLAG_NZ(g_cpu.A);
label_80B3:;
    /* $80B3: D0 */ nes_cpu_instruction_boundary(0x80B3, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0x80AC); return; }
label_80B5:;
    /* $80B5: A4 */ nes_cpu_instruction_boundary(0x80B5, 3); g_cpu.Y = nes_read(0x02); FLAG_NZ(g_cpu.Y);
label_80B7:;
    /* $80B7: B9 */ nes_cpu_instruction_boundary(0x80B7, 4); g_cpu.A = nes_read((0x80C9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_80BA:;
    /* $80BA: A0 */ nes_cpu_instruction_boundary(0x80BA, 2); g_cpu.Y = 0x40; FLAG_NZ(g_cpu.Y);
label_80BC:;
    /* $80BC: 10 */ nes_cpu_instruction_boundary(0x80BC, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0x80AC); return; }
label_80BE:; /* InitializeAfterReset_exitloop_B */
    /* $80BE: E8 */ nes_cpu_instruction_boundary(0x80BE, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_80BF:;
    /* $80BF: E0 */ nes_cpu_instruction_boundary(0x80BF, 2); { int r=g_cpu.X-0x68; g_cpu.C=(g_cpu.X>=0x68)?1:0; FLAG_NZ(r&0xFF); }
label_80C1:;
    /* $80C1: D0 */ nes_cpu_instruction_boundary(0x80C1, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0x809E); return; }
label_80C3:;
    /* $80C3: E6 */ nes_cpu_instruction_boundary(0x80C3, 5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_80C5:;
    /* $80C5: 4C */ nes_cpu_instruction_boundary(0x80C5, 3); nes_cpu_instruction_boundary(0x98AE, 2); func_98AE_b0(); return;
}

void func_81DA_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81DA_b0");
#endif
label_81DA:;
    /* $81DA: 8A */ nes_cpu_instruction_boundary(0x81DA, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_81DB:; /* MoreCrosshairs_endIf_A */
    /* $81DB: E6 */ nes_cpu_instruction_boundary(0x81DB, 5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_81DD:;
    /* $81DD: A9 */ nes_cpu_instruction_boundary(0x81DD, 2); g_cpu.A = 0x60; FLAG_NZ(g_cpu.A);
label_81DF:;
    /* $81DF: 8D */ nes_cpu_instruction_boundary(0x81DF, 4); nes_write(0x030D, g_cpu.A);
label_81E2:;
    /* $81E2: A9 */ nes_cpu_instruction_boundary(0x81E2, 2); g_cpu.A = 0x7C; FLAG_NZ(g_cpu.A);
label_81E4:;
    /* $81E4: 8D */ nes_cpu_instruction_boundary(0x81E4, 4); nes_write(0x030E, g_cpu.A);
label_81E7:;
    /* $81E7: AD */ nes_cpu_instruction_boundary(0x81E7, 4); g_cpu.A = nes_read(0x0305); FLAG_NZ(g_cpu.A);
label_81EA:;
    /* $81EA: 8D */ nes_cpu_instruction_boundary(0x81EA, 4); nes_write(0x0306, g_cpu.A);
label_81ED:;
    /* $81ED: 60 */ nes_cpu_instruction_boundary(0x81ED, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_820F_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_820F_b0");
#endif
label_820F:;
    /* $820F: 8D */ nes_cpu_instruction_boundary(0x820F, 4); nes_write(0x0300, g_cpu.A);
label_8212:;
    /* $8212: A9 */ nes_cpu_instruction_boundary(0x8212, 2); g_cpu.A = 0x0B; FLAG_NZ(g_cpu.A);
label_8214:;
    /* $8214: 8D */ nes_cpu_instruction_boundary(0x8214, 4); nes_write(0x0305, g_cpu.A);
label_8217:;
    /* $8217: A9 */ nes_cpu_instruction_boundary(0x8217, 2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_8219:;
    /* $8219: 8D */ nes_cpu_instruction_boundary(0x8219, 4); nes_write(0x0306, g_cpu.A);
label_821C:;
    /* $821C: A9 */ nes_cpu_instruction_boundary(0x821C, 2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_821E:;
    /* $821E: 8D */ nes_cpu_instruction_boundary(0x821E, 4); nes_write(0x0303, g_cpu.A);
label_8221:;
    /* $8221: A9 */ nes_cpu_instruction_boundary(0x8221, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_8223:;
    /* $8223: 85 */ nes_cpu_instruction_boundary(0x8223, 3); nes_write(0x2C, g_cpu.A);
label_8225:;
    /* $8225: A9 */ nes_cpu_instruction_boundary(0x8225, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8227:;
    /* $8227: 85 */ nes_cpu_instruction_boundary(0x8227, 3); nes_write(0xC9, g_cpu.A);
label_8229:;
    /* $8229: 85 */ nes_cpu_instruction_boundary(0x8229, 3); nes_write(0xCB, g_cpu.A);
label_822B:;
    /* $822B: E6 */ nes_cpu_instruction_boundary(0x822B, 5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_822D:;
    /* $822D: 60 */ nes_cpu_instruction_boundary(0x822D, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8206_b0(void) { /* UnusedIntroRoutine2 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8206_b0");
#endif
label_8206:; /* UnusedIntroRoutine2 */
    /* $8206: AD */ nes_cpu_instruction_boundary(0x8206, 4); g_cpu.A = nes_read(0x0300); FLAG_NZ(g_cpu.A);
label_8209:;
    /* $8209: C9 */ nes_cpu_instruction_boundary(0x8209, 2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_820B:;
    /* $820B: D0 */ nes_cpu_instruction_boundary(0x820B, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_822D; }
label_820D:;
    /* $820D: A9 */ nes_cpu_instruction_boundary(0x820D, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_820F:;
    /* $820F: 8D */ nes_cpu_instruction_boundary(0x820F, 4); nes_write(0x0300, g_cpu.A);
label_8212:;
    /* $8212: A9 */ nes_cpu_instruction_boundary(0x8212, 2); g_cpu.A = 0x0B; FLAG_NZ(g_cpu.A);
label_8214:;
    /* $8214: 8D */ nes_cpu_instruction_boundary(0x8214, 4); nes_write(0x0305, g_cpu.A);
label_8217:;
    /* $8217: A9 */ nes_cpu_instruction_boundary(0x8217, 2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_8219:;
    /* $8219: 8D */ nes_cpu_instruction_boundary(0x8219, 4); nes_write(0x0306, g_cpu.A);
label_821C:;
    /* $821C: A9 */ nes_cpu_instruction_boundary(0x821C, 2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_821E:;
    /* $821E: 8D */ nes_cpu_instruction_boundary(0x821E, 4); nes_write(0x0303, g_cpu.A);
label_8221:;
    /* $8221: A9 */ nes_cpu_instruction_boundary(0x8221, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_8223:;
    /* $8223: 85 */ nes_cpu_instruction_boundary(0x8223, 3); nes_write(0x2C, g_cpu.A);
label_8225:;
    /* $8225: A9 */ nes_cpu_instruction_boundary(0x8225, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8227:;
    /* $8227: 85 */ nes_cpu_instruction_boundary(0x8227, 3); nes_write(0xC9, g_cpu.A);
label_8229:;
    /* $8229: 85 */ nes_cpu_instruction_boundary(0x8229, 3); nes_write(0xCB, g_cpu.A);
label_822B:;
    /* $822B: E6 */ nes_cpu_instruction_boundary(0x822B, 5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_822D:;
    /* $822D: 60 */ nes_cpu_instruction_boundary(0x822D, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8296_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8296_b0");
#endif
label_8296:;
    /* $8296: D0 */ nes_cpu_instruction_boundary(0x8296, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_82A2; }
label_8298:;
    /* $8298: A9 */ nes_cpu_instruction_boundary(0x8298, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_829A:;
    /* $829A: 85 */ nes_cpu_instruction_boundary(0x829A, 3); nes_write(0xD2, g_cpu.A);
label_829C:;
    /* $829C: A9 */ nes_cpu_instruction_boundary(0x829C, 2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_829E:;
    /* $829E: 85 */ nes_cpu_instruction_boundary(0x829E, 3); nes_write(0x2C, g_cpu.A);
label_82A0:;
    /* $82A0: E6 */ nes_cpu_instruction_boundary(0x82A0, 5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_82A2:;
    /* $82A2: 60 */ nes_cpu_instruction_boundary(0x82A2, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8B9C_b0(void) { /* UniqueItemSearch */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8B9C_b0");
#endif
label_8B9C:; /* UniqueItemSearch */
    /* $8B9C: A2 */ nes_cpu_instruction_boundary(0x8B9C, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_8B9E:;
    /* $8B9E: 8A */ nes_cpu_instruction_boundary(0x8B9E, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8B9F:;
    /* $8B9F: 0A */ nes_cpu_instruction_boundary(0x8B9F, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8BA0:;
    /* $8BA0: A8 */ nes_cpu_instruction_boundary(0x8BA0, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8BA1:;
    /* $8BA1: B9 */ nes_cpu_instruction_boundary(0x8BA1, 4); g_cpu.A = nes_read((0x9029 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8BA4:;
    /* $8BA4: C5 */ nes_cpu_instruction_boundary(0x8BA4, 3); { uint8_t m=nes_read(0x00); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8BA6:;
    /* $8BA6: D0 */ nes_cpu_instruction_boundary(0x8BA6, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8BAF; }
label_8BA8:;
    /* $8BA8: B9 */ nes_cpu_instruction_boundary(0x8BA8, 4); g_cpu.A = nes_read((0x902A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8BAB:;
    /* $8BAB: C5 */ nes_cpu_instruction_boundary(0x8BAB, 3); { uint8_t m=nes_read(0x01); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8BAD:;
    /* $8BAD: F0 */ nes_cpu_instruction_boundary(0x8BAD, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8BB5; }
label_8BAF:;
    /* $8BAF: E8 */ nes_cpu_instruction_boundary(0x8BAF, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8BB0:;
    /* $8BB0: E0 */ nes_cpu_instruction_boundary(0x8BB0, 2); { int r=g_cpu.X-0x3C; g_cpu.C=(g_cpu.X>=0x3C)?1:0; FLAG_NZ(r&0xFF); }
label_8BB2:;
    /* $8BB2: 90 */ nes_cpu_instruction_boundary(0x8BB2, 2); if (!g_cpu.C) {
    nes_cpu_instruction_boundary(0x8B9E, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8B9E;
    }
label_8BB4:;
    /* $8BB4: 60 */ nes_cpu_instruction_boundary(0x8BB4, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8BB5:; /* UniqueItemFound */
    /* $8BB5: 8A */ nes_cpu_instruction_boundary(0x8BB5, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8BB6:;
    /* $8BB6: 20 */ nes_cpu_instruction_boundary(0x8BB6, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; func_C2C0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8BB6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8BB9:;
    /* $8BB9: 85 */ nes_cpu_instruction_boundary(0x8BB9, 3); nes_write(0x05, g_cpu.A);
label_8BBB:;
    /* $8BBB: 20 */ nes_cpu_instruction_boundary(0x8BBB, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBD; g_cpu.S--; func_C2C6();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8BBB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8BBE:;
    /* $8BBE: 85 */ nes_cpu_instruction_boundary(0x8BBE, 3); nes_write(0x02, g_cpu.A);
label_8BC0:;
    /* $8BC0: 8A */ nes_cpu_instruction_boundary(0x8BC0, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8BC1:;
    /* $8BC1: 38 */ nes_cpu_instruction_boundary(0x8BC1, 2); g_cpu.C = 1;
label_8BC2:;
    /* $8BC2: E5 */ nes_cpu_instruction_boundary(0x8BC2, 3); { uint8_t m=nes_read(0x02); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8BC4:;
    /* $8BC4: 85 */ nes_cpu_instruction_boundary(0x8BC4, 3); nes_write(0x06, g_cpu.A);
label_8BC6:;
    /* $8BC6: A6 */ nes_cpu_instruction_boundary(0x8BC6, 3); g_cpu.X = nes_read(0x05); FLAG_NZ(g_cpu.X);
label_8BC8:;
    /* $8BC8: BD */ nes_cpu_instruction_boundary(0x8BC8, 4); g_cpu.A = nes_read((0x6988 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8BCB:;
    /* $8BCB: A4 */ nes_cpu_instruction_boundary(0x8BCB, 3); g_cpu.Y = nes_read(0x06); FLAG_NZ(g_cpu.Y);
label_8BCD:;
    /* $8BCD: 19 */ nes_cpu_instruction_boundary(0x8BCD, 4); g_cpu.A |= nes_read((0x9021 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8BD0:;
    /* $8BD0: 9D */ nes_cpu_instruction_boundary(0x8BD0, 5); nes_write((0x6988 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8BD3:;
    /* $8BD3: 60 */ nes_cpu_instruction_boundary(0x8BD3, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8871_b0(void) { /* DoSparkleSpriteCoord_NibbleSubtract */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8871_b0");
#endif
label_8871:; /* DoSparkleSpriteCoord_NibbleSubtract */
    /* $8871: C9 */ nes_cpu_instruction_boundary(0x8871, 2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_8873:;
    /* $8873: 90 */ nes_cpu_instruction_boundary(0x8873, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_887A; }
label_8875:;
    /* $8875: 29 */ nes_cpu_instruction_boundary(0x8875, 2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_8877:;
    /* $8877: 20 */ nes_cpu_instruction_boundary(0x8877, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x88; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x79; g_cpu.S--; func_C3D4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8877, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_887A:; /* DoSparkleSpriteCoord_RTS */
    /* $887A: 60 */ nes_cpu_instruction_boundary(0x887A, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9871_b0(void) { /* UpdateCrossMissileCoords_CalcDisplacement */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9871_b0");
#endif
label_9871:; /* UpdateCrossMissileCoords_CalcDisplacement */
    /* $9871: 85 */ nes_cpu_instruction_boundary(0x9871, 3); nes_write(0x04, g_cpu.A);
label_9873:;
    /* $9873: A9 */ nes_cpu_instruction_boundary(0x9873, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_9875:;
    /* $9875: 85 */ nes_cpu_instruction_boundary(0x9875, 3); nes_write(0x00, g_cpu.A);
label_9877:; /* UpdateCrossMissileCoords_loop */
    /* $9877: 46 */ nes_cpu_instruction_boundary(0x9877, 5); { uint16_t a=0x04; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_9879:;
    /* $9879: 90 */ nes_cpu_instruction_boundary(0x9879, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9883; }
label_987B:;
    /* $987B: A5 */ nes_cpu_instruction_boundary(0x987B, 3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_987D:;
    /* $987D: 25 */ nes_cpu_instruction_boundary(0x987D, 3); g_cpu.A &= nes_read(0x00); FLAG_NZ(g_cpu.A);
label_987F:;
    /* $987F: D0 */ nes_cpu_instruction_boundary(0x987F, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9883; }
label_9881:;
    /* $9881: E6 */ nes_cpu_instruction_boundary(0x9881, 5); { uint16_t a=0x04; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9883:; /* UpdateCrossMissileCoords_endIf_D */
    /* $9883: 46 */ nes_cpu_instruction_boundary(0x9883, 5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_9885:;
    /* $9885: D0 */ nes_cpu_instruction_boundary(0x9885, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0x9877, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9877;
    }
label_9887:;
    /* $9887: A5 */ nes_cpu_instruction_boundary(0x9887, 3); g_cpu.A = nes_read(0x04); FLAG_NZ(g_cpu.A);
label_9889:;
    /* $9889: 60 */ nes_cpu_instruction_boundary(0x9889, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8FF1_b0(void) { /* SixLowerAndTwoUpper */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8FF1_b0");
#endif
label_8FF1:; /* SixLowerAndTwoUpper */
    /* $8FF1: B9 */ nes_cpu_instruction_boundary(0x8FF1, 4); g_cpu.A = nes_read((0x699A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8FF4:;
    /* $8FF4: 0A */ nes_cpu_instruction_boundary(0x8FF4, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8FF5:;
    /* $8FF5: 0A */ nes_cpu_instruction_boundary(0x8FF5, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8FF6:;
    /* $8FF6: 85 */ nes_cpu_instruction_boundary(0x8FF6, 3); nes_write(0x00, g_cpu.A);
label_8FF8:;
    /* $8FF8: B9 */ nes_cpu_instruction_boundary(0x8FF8, 4); g_cpu.A = nes_read((0x699B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8FFB:;
    /* $8FFB: 20 */ nes_cpu_instruction_boundary(0x8FFB, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFD; g_cpu.S--; func_C2BF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8FFB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8FFE:;
    /* $8FFE: 05 */ nes_cpu_instruction_boundary(0x8FFE, 3); g_cpu.A |= nes_read(0x00); FLAG_NZ(g_cpu.A);
label_9000:;
    /* $9000: 60 */ nes_cpu_instruction_boundary(0x9000, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9001_b0(void) { /* FourLowerAndFiveThruTwo */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9001_b0");
#endif
label_9001:; /* FourLowerAndFiveThruTwo */
    /* $9001: B9 */ nes_cpu_instruction_boundary(0x9001, 4); g_cpu.A = nes_read((0x699A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9004:;
    /* $9004: 20 */ nes_cpu_instruction_boundary(0x9004, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x90; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x06; g_cpu.S--; func_C2C5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9004, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9007:;
    /* $9007: 85 */ nes_cpu_instruction_boundary(0x9007, 3); nes_write(0x00, g_cpu.A);
label_9009:;
    /* $9009: B9 */ nes_cpu_instruction_boundary(0x9009, 4); g_cpu.A = nes_read((0x699B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_900C:;
    /* $900C: 4A */ nes_cpu_instruction_boundary(0x900C, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_900D:;
    /* $900D: 4A */ nes_cpu_instruction_boundary(0x900D, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_900E:;
    /* $900E: 05 */ nes_cpu_instruction_boundary(0x900E, 3); g_cpu.A |= nes_read(0x00); FLAG_NZ(g_cpu.A);
label_9010:;
    /* $9010: 60 */ nes_cpu_instruction_boundary(0x9010, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9011_b0(void) { /* TwoLowerAndSixLower */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9011_b0");
#endif
label_9011:; /* TwoLowerAndSixLower */
    /* $9011: B9 */ nes_cpu_instruction_boundary(0x9011, 4); g_cpu.A = nes_read((0x699A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9014:;
    /* $9014: 6A */ nes_cpu_instruction_boundary(0x9014, 2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_9015:;
    /* $9015: 6A */ nes_cpu_instruction_boundary(0x9015, 2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_9016:;
    /* $9016: 6A */ nes_cpu_instruction_boundary(0x9016, 2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_9017:;
    /* $9017: 29 */ nes_cpu_instruction_boundary(0x9017, 2); g_cpu.A &= 0xC0; FLAG_NZ(g_cpu.A);
label_9019:;
    /* $9019: 85 */ nes_cpu_instruction_boundary(0x9019, 3); nes_write(0x00, g_cpu.A);
label_901B:;
    /* $901B: B9 */ nes_cpu_instruction_boundary(0x901B, 4); g_cpu.A = nes_read((0x699B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_901E:;
    /* $901E: 05 */ nes_cpu_instruction_boundary(0x901E, 3); g_cpu.A |= nes_read(0x00); FLAG_NZ(g_cpu.A);
label_9020:;
    /* $9020: 60 */ nes_cpu_instruction_boundary(0x9020, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8E4E_b0(void) { /* UnscramblePassword */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8E4E_b0");
#endif
label_8E4E:; /* UnscramblePassword */
    /* $8E4E: AD */ nes_cpu_instruction_boundary(0x8E4E, 4); g_cpu.A = nes_read(0x6998); FLAG_NZ(g_cpu.A);
label_8E51:;
    /* $8E51: 85 */ nes_cpu_instruction_boundary(0x8E51, 3); nes_write(0x02, g_cpu.A);
label_8E53:; /* UnscramblePassword_loop_A */
    /* $8E53: AD */ nes_cpu_instruction_boundary(0x8E53, 4); g_cpu.A = nes_read(0x6997); FLAG_NZ(g_cpu.A);
label_8E56:;
    /* $8E56: 85 */ nes_cpu_instruction_boundary(0x8E56, 3); nes_write(0x00, g_cpu.A);
label_8E58:;
    /* $8E58: A2 */ nes_cpu_instruction_boundary(0x8E58, 2); g_cpu.X = 0x0F; FLAG_NZ(g_cpu.X);
label_8E5A:; /* UnscramblePassword_loop_B */
    /* $8E5A: 3E */ nes_cpu_instruction_boundary(0x8E5A, 7); { uint16_t a=(0x6988 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8E5D:;
    /* $8E5D: CA */ nes_cpu_instruction_boundary(0x8E5D, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_8E5E:;
    /* $8E5E: 10 */ nes_cpu_instruction_boundary(0x8E5E, 2); if (!g_cpu.N) {
    nes_cpu_instruction_boundary(0x8E5A, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8E5A;
    }
label_8E60:;
    /* $8E60: 26 */ nes_cpu_instruction_boundary(0x8E60, 5); { uint16_t a=0x00; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8E62:;
    /* $8E62: A5 */ nes_cpu_instruction_boundary(0x8E62, 3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_8E64:;
    /* $8E64: 8D */ nes_cpu_instruction_boundary(0x8E64, 4); nes_write(0x6997, g_cpu.A);
label_8E67:;
    /* $8E67: C6 */ nes_cpu_instruction_boundary(0x8E67, 5); { uint16_t a=0x02; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8E69:;
    /* $8E69: D0 */ nes_cpu_instruction_boundary(0x8E69, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0x8E53, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8E53;
    }
label_8E6B:;
    /* $8E6B: 60 */ nes_cpu_instruction_boundary(0x8E6B, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8E21_b0(void) { /* PasswordChecksum */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8E21_b0");
#endif
label_8E21:; /* PasswordChecksum */
    /* $8E21: A0 */ nes_cpu_instruction_boundary(0x8E21, 2); g_cpu.Y = 0x10; FLAG_NZ(g_cpu.Y);
label_8E23:;
    /* $8E23: A9 */ nes_cpu_instruction_boundary(0x8E23, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8E25:; /* PasswordChecksum_loop */
    /* $8E25: 18 */ nes_cpu_instruction_boundary(0x8E25, 2); g_cpu.C = 0;
label_8E26:;
    /* $8E26: 79 */ nes_cpu_instruction_boundary(0x8E26, 4); { uint8_t m=nes_read((0x6988 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8E29:;
    /* $8E29: 88 */ nes_cpu_instruction_boundary(0x8E29, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8E2A:;
    /* $8E2A: 10 */ nes_cpu_instruction_boundary(0x8E2A, 2); if (!g_cpu.N) {
    nes_cpu_instruction_boundary(0x8E25, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8E25;
    }
label_8E2C:;
    /* $8E2C: 60 */ nes_cpu_instruction_boundary(0x8E2C, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8D12_b0(void) { /* LoadPasswordData */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D12_b0");
#endif
label_8D12:; /* LoadPasswordData */
    /* $8D12: AD */ nes_cpu_instruction_boundary(0x8D12, 4); g_cpu.A = nes_read(0x69B2); FLAG_NZ(g_cpu.A);
label_8D15:;
    /* $8D15: D0 */ nes_cpu_instruction_boundary(0x8D15, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8D3C; }
label_8D17:;
    /* $8D17: 20 */ nes_cpu_instruction_boundary(0x8D17, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8D; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x19; g_cpu.S--; func_8BD4_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8D17, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8D1A:;
    /* $8D1A: 20 */ nes_cpu_instruction_boundary(0x8D1A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8D; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1C; g_cpu.S--; func_8D3D_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8D1A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8D1D:;
    /* $8D1D: A0 */ nes_cpu_instruction_boundary(0x8D1D, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_8D1F:;
    /* $8D1F: AD */ nes_cpu_instruction_boundary(0x8D1F, 4); g_cpu.A = nes_read(0x6990); FLAG_NZ(g_cpu.A);
label_8D22:;
    /* $8D22: 29 */ nes_cpu_instruction_boundary(0x8D22, 2); g_cpu.A &= 0x80; FLAG_NZ(g_cpu.A);
label_8D24:;
    /* $8D24: F0 */ nes_cpu_instruction_boundary(0x8D24, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8D27; }
label_8D26:;
    /* $8D26: C8 */ nes_cpu_instruction_boundary(0x8D26, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8D27:;
    /* $8D27: 8C */ nes_cpu_instruction_boundary(0x8D27, 4); nes_write(0x69B3, g_cpu.Y);
label_8D2A:;
    /* $8D2A: AD */ nes_cpu_instruction_boundary(0x8D2A, 4); g_cpu.A = nes_read(0x6990); FLAG_NZ(g_cpu.A);
label_8D2D:;
    /* $8D2D: 29 */ nes_cpu_instruction_boundary(0x8D2D, 2); g_cpu.A &= 0x3F; FLAG_NZ(g_cpu.A);
label_8D2F:;
    /* $8D2F: 85 */ nes_cpu_instruction_boundary(0x8D2F, 3); nes_write(0x74, g_cpu.A);
label_8D31:;
    /* $8D31: A0 */ nes_cpu_instruction_boundary(0x8D31, 2); g_cpu.Y = 0x03; FLAG_NZ(g_cpu.Y);
label_8D33:;
    /* $8D33: B9 */ nes_cpu_instruction_boundary(0x8D33, 4); g_cpu.A = nes_read((0x6993 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8D36:;
    /* $8D36: 99 */ nes_cpu_instruction_boundary(0x8D36, 5); nes_write((0x687D + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8D39:;
    /* $8D39: 88 */ nes_cpu_instruction_boundary(0x8D39, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8D3A:;
    /* $8D3A: 10 */ nes_cpu_instruction_boundary(0x8D3A, 2); if (!g_cpu.N) {
    nes_cpu_instruction_boundary(0x8D33, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8D33;
    }
label_8D3C:;
    /* $8D3C: 60 */ nes_cpu_instruction_boundary(0x8D3C, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8E2D_b0(void) { /* PasswordScramble */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8E2D_b0");
#endif
label_8E2D:; /* PasswordScramble */
    /* $8E2D: AD */ nes_cpu_instruction_boundary(0x8E2D, 4); g_cpu.A = nes_read(0x6998); FLAG_NZ(g_cpu.A);
label_8E30:;
    /* $8E30: 85 */ nes_cpu_instruction_boundary(0x8E30, 3); nes_write(0x02, g_cpu.A);
label_8E32:; /* PasswordScramble_loop_A */
    /* $8E32: AD */ nes_cpu_instruction_boundary(0x8E32, 4); g_cpu.A = nes_read(0x6988); FLAG_NZ(g_cpu.A);
label_8E35:;
    /* $8E35: 85 */ nes_cpu_instruction_boundary(0x8E35, 3); nes_write(0x00, g_cpu.A);
label_8E37:;
    /* $8E37: A2 */ nes_cpu_instruction_boundary(0x8E37, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_8E39:;
    /* $8E39: A0 */ nes_cpu_instruction_boundary(0x8E39, 2); g_cpu.Y = 0x0F; FLAG_NZ(g_cpu.Y);
label_8E3B:; /* PasswordScramble_loop_B */
    /* $8E3B: 7E */ nes_cpu_instruction_boundary(0x8E3B, 7); { uint16_t a=(0x6988 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8E3E:;
    /* $8E3E: E8 */ nes_cpu_instruction_boundary(0x8E3E, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8E3F:;
    /* $8E3F: 88 */ nes_cpu_instruction_boundary(0x8E3F, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8E40:;
    /* $8E40: 10 */ nes_cpu_instruction_boundary(0x8E40, 2); if (!g_cpu.N) {
    nes_cpu_instruction_boundary(0x8E3B, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8E3B;
    }
label_8E42:;
    /* $8E42: 66 */ nes_cpu_instruction_boundary(0x8E42, 5); { uint16_t a=0x00; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8E44:;
    /* $8E44: A5 */ nes_cpu_instruction_boundary(0x8E44, 3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_8E46:;
    /* $8E46: 8D */ nes_cpu_instruction_boundary(0x8E46, 4); nes_write(0x6988, g_cpu.A);
label_8E49:;
    /* $8E49: C6 */ nes_cpu_instruction_boundary(0x8E49, 5); { uint16_t a=0x02; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8E4B:;
    /* $8E4B: D0 */ nes_cpu_instruction_boundary(0x8E4B, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0x8E32, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8E32;
    }
label_8E4D:;
    /* $8E4D: 60 */ nes_cpu_instruction_boundary(0x8E4D, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8F2D_b0(void) { /* SixUpperBits */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8F2D_b0");
#endif
label_8F2D:; /* SixUpperBits */
    /* $8F2D: B9 */ nes_cpu_instruction_boundary(0x8F2D, 4); g_cpu.A = nes_read((0x6988 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8F30:;
    /* $8F30: 4A */ nes_cpu_instruction_boundary(0x8F30, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8F31:;
    /* $8F31: 4A */ nes_cpu_instruction_boundary(0x8F31, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8F32:;
    /* $8F32: 60 */ nes_cpu_instruction_boundary(0x8F32, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8F33_b0(void) { /* TwoLowerAndFourUpper */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8F33_b0");
#endif
label_8F33:; /* TwoLowerAndFourUpper */
    /* $8F33: B9 */ nes_cpu_instruction_boundary(0x8F33, 4); g_cpu.A = nes_read((0x6988 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8F36:;
    /* $8F36: 29 */ nes_cpu_instruction_boundary(0x8F36, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_8F38:;
    /* $8F38: 20 */ nes_cpu_instruction_boundary(0x8F38, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3A; g_cpu.S--; func_C2C5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8F38, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8F3B:;
    /* $8F3B: 85 */ nes_cpu_instruction_boundary(0x8F3B, 3); nes_write(0x00, g_cpu.A);
label_8F3D:;
    /* $8F3D: B9 */ nes_cpu_instruction_boundary(0x8F3D, 4); g_cpu.A = nes_read((0x6989 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8F40:;
    /* $8F40: 20 */ nes_cpu_instruction_boundary(0x8F40, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x42; g_cpu.S--; func_C2BF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8F40, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8F43:;
    /* $8F43: 05 */ nes_cpu_instruction_boundary(0x8F43, 3); g_cpu.A |= nes_read(0x00); FLAG_NZ(g_cpu.A);
label_8F45:;
    /* $8F45: 60 */ nes_cpu_instruction_boundary(0x8F45, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8F46_b0(void) { /* FourLowerAndTwoUpper */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8F46_b0");
#endif
label_8F46:; /* FourLowerAndTwoUpper */
    /* $8F46: B9 */ nes_cpu_instruction_boundary(0x8F46, 4); g_cpu.A = nes_read((0x6988 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8F49:;
    /* $8F49: 29 */ nes_cpu_instruction_boundary(0x8F49, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_8F4B:;
    /* $8F4B: 0A */ nes_cpu_instruction_boundary(0x8F4B, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8F4C:;
    /* $8F4C: 0A */ nes_cpu_instruction_boundary(0x8F4C, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8F4D:;
    /* $8F4D: 85 */ nes_cpu_instruction_boundary(0x8F4D, 3); nes_write(0x00, g_cpu.A);
label_8F4F:;
    /* $8F4F: B9 */ nes_cpu_instruction_boundary(0x8F4F, 4); g_cpu.A = nes_read((0x6989 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8F52:;
    /* $8F52: 2A */ nes_cpu_instruction_boundary(0x8F52, 2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_8F53:;
    /* $8F53: 2A */ nes_cpu_instruction_boundary(0x8F53, 2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_8F54:;
    /* $8F54: 2A */ nes_cpu_instruction_boundary(0x8F54, 2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_8F55:;
    /* $8F55: 29 */ nes_cpu_instruction_boundary(0x8F55, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_8F57:;
    /* $8F57: 05 */ nes_cpu_instruction_boundary(0x8F57, 3); g_cpu.A |= nes_read(0x00); FLAG_NZ(g_cpu.A);
label_8F59:;
    /* $8F59: 60 */ nes_cpu_instruction_boundary(0x8F59, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8F5A_b0(void) { /* SixLowerBits */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8F5A_b0");
#endif
label_8F5A:; /* SixLowerBits */
    /* $8F5A: B9 */ nes_cpu_instruction_boundary(0x8F5A, 4); g_cpu.A = nes_read((0x6988 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8F5D:;
    /* $8F5D: 29 */ nes_cpu_instruction_boundary(0x8F5D, 2); g_cpu.A &= 0x3F; FLAG_NZ(g_cpu.A);
label_8F5F:;
    /* $8F5F: 60 */ nes_cpu_instruction_boundary(0x8F5F, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A29E_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A29E_b0");
#endif
label_A29E:;
    /* $A29E: A3 */ nes_cpu_instruction_boundary(0xA29E, 6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x62 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A2A0:;
    /* $A2A0: A3 */ nes_cpu_instruction_boundary(0xA2A0, 6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x75 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A2A2:;
    /* $A2A2: A3 */ nes_cpu_instruction_boundary(0xA2A2, 6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x84 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A2A4:;
    /* $A2A4: A3 */ nes_cpu_instruction_boundary(0xA2A4, 6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x9F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A2A6:;
    /* $A2A6: A3 */ nes_cpu_instruction_boundary(0xA2A6, 6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0xAA + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A2A8:;
    /* $A2A8: A3 */ nes_cpu_instruction_boundary(0xA2A8, 6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0xC8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A2AA:;
    /* $A2AA: A3 */ nes_cpu_instruction_boundary(0xA2AA, 6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0xD8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A2AC:;
    /* $A2AC: A3 */ nes_cpu_instruction_boundary(0xA2AC, 6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0xF1 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A2AE:;
    /* $A2AE: A3 */ nes_cpu_instruction_boundary(0xA2AE, 6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x12 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A2B0:;
    /* $A2B0: A4 */ nes_cpu_instruction_boundary(0xA2B0, 3); g_cpu.Y = nes_read(0x17); FLAG_NZ(g_cpu.Y);
label_A2B2:;
    /* $A2B2: A4 */ nes_cpu_instruction_boundary(0xA2B2, 3); g_cpu.Y = nes_read(0x26); FLAG_NZ(g_cpu.Y);
label_A2B4:;
    /* $A2B4: A4 */ nes_cpu_instruction_boundary(0xA2B4, 3); g_cpu.Y = nes_read(0x42); FLAG_NZ(g_cpu.Y);
label_A2B6:;
    /* $A2B6: A4 */ nes_cpu_instruction_boundary(0xA2B6, 3); g_cpu.Y = nes_read(0x6B); FLAG_NZ(g_cpu.Y);
label_A2B8:;
    /* $A2B8: A4 */ nes_cpu_instruction_boundary(0xA2B8, 3); g_cpu.Y = nes_read(0x70); FLAG_NZ(g_cpu.Y);
label_A2BA:;
    /* $A2BA: A4 */ nes_cpu_instruction_boundary(0xA2BA, 3); g_cpu.Y = nes_read(0x93); FLAG_NZ(g_cpu.Y);
label_A2BC:;
    /* $A2BC: A4 */ nes_cpu_instruction_boundary(0xA2BC, 3); g_cpu.Y = nes_read(0x9C); FLAG_NZ(g_cpu.Y);
label_A2BE:;
    /* $A2BE: A4 */ nes_cpu_instruction_boundary(0xA2BE, 3); g_cpu.Y = nes_read(0xAD); FLAG_NZ(g_cpu.Y);
label_A2C0:;
    /* $A2C0: A4 */ nes_cpu_instruction_boundary(0xA2C0, 3); g_cpu.Y = nes_read(0xBD); FLAG_NZ(g_cpu.Y);
label_A2C2:;
    /* $A2C2: A4 */ nes_cpu_instruction_boundary(0xA2C2, 3); g_cpu.Y = nes_read(0xCD); FLAG_NZ(g_cpu.Y);
label_A2C4:;
    /* $A2C4: A4 */ nes_cpu_instruction_boundary(0xA2C4, 3); g_cpu.Y = nes_read(0xD2); FLAG_NZ(g_cpu.Y);
label_A2C6:;
    /* $A2C6: A4 */ nes_cpu_instruction_boundary(0xA2C6, 3); g_cpu.Y = nes_read(0xD7); FLAG_NZ(g_cpu.Y);
label_A2C8:;
    /* $A2C8: A4 */ nes_cpu_instruction_boundary(0xA2C8, 3); g_cpu.Y = nes_read(0xDC); FLAG_NZ(g_cpu.Y);
label_A2CA:;
    /* $A2CA: A4 */ nes_cpu_instruction_boundary(0xA2CA, 3); g_cpu.Y = nes_read(0xE1); FLAG_NZ(g_cpu.Y);
label_A2CC:;
    /* $A2CC: A4 */ nes_cpu_instruction_boundary(0xA2CC, 3); g_cpu.Y = nes_read(0xE6); FLAG_NZ(g_cpu.Y);
label_A2CE:;
    /* $A2CE: A4 */ nes_cpu_instruction_boundary(0xA2CE, 3); g_cpu.Y = nes_read(0xEB); FLAG_NZ(g_cpu.Y);
label_A2D0:;
    /* $A2D0: A4 */ nes_cpu_instruction_boundary(0xA2D0, 3); g_cpu.Y = nes_read(0xEF); FLAG_NZ(g_cpu.Y);
label_A2D2:;
    /* $A2D2: A4 */ nes_cpu_instruction_boundary(0xA2D2, 3); g_cpu.Y = nes_read(0xF0); FLAG_NZ(g_cpu.Y);
label_A2D4:;
    /* $A2D4: A4 */ nes_cpu_instruction_boundary(0xA2D4, 3); g_cpu.Y = nes_read(0x08); FLAG_NZ(g_cpu.Y);
label_A2D6:;
    /* $A2D6: A5 */ nes_cpu_instruction_boundary(0xA2D6, 3); g_cpu.A = nes_read(0x1A); FLAG_NZ(g_cpu.A);
label_A2D8:;
    /* $A2D8: A5 */ nes_cpu_instruction_boundary(0xA2D8, 3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_A2DA:;
    /* $A2DA: A5 */ nes_cpu_instruction_boundary(0xA2DA, 3); g_cpu.A = nes_read(0x24); FLAG_NZ(g_cpu.A);
label_A2DC:;
    /* $A2DC: A5 */ nes_cpu_instruction_boundary(0xA2DC, 3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_A2DE:;
    /* $A2DE: A5 */ nes_cpu_instruction_boundary(0xA2DE, 3); g_cpu.A = nes_read(0x24); FLAG_NZ(g_cpu.A);
label_A2E0:;
    /* $A2E0: A5 */ nes_cpu_instruction_boundary(0xA2E0, 3); g_cpu.A = nes_read(0x38); FLAG_NZ(g_cpu.A);
label_A2E2:;
    /* $A2E2: A5 */ nes_cpu_instruction_boundary(0xA2E2, 3); g_cpu.A = nes_read(0x3D); FLAG_NZ(g_cpu.A);
label_A2E4:;
    /* $A2E4: A5 */ nes_cpu_instruction_boundary(0xA2E4, 3); g_cpu.A = nes_read(0x38); FLAG_NZ(g_cpu.A);
label_A2E6:;
    /* $A2E6: A5 */ nes_cpu_instruction_boundary(0xA2E6, 3); g_cpu.A = nes_read(0x3D); FLAG_NZ(g_cpu.A);
label_A2E8:;
    /* $A2E8: A5 */ nes_cpu_instruction_boundary(0xA2E8, 3); g_cpu.A = nes_read(0x20); FLAG_NZ(g_cpu.A);
label_A2EA:;
    /* $A2EA: 2C */ nes_cpu_instruction_boundary(0xA2EA, 4); { uint8_t m=nes_read(0x110A); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A2ED:;
    /* $A2ED: 0A */ nes_cpu_instruction_boundary(0xA2ED, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A2EE:;
    /* $A2EE: 12 */ nes_cpu_instruction_boundary(0xA2EE, 2); /* ILLEGAL $12 — skip 1 */
label_A2EF:;
    /* $A2EF: FF */ nes_cpu_instruction_boundary(0xA2EF, 7); { uint16_t a=(0x1E22 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A2F2:;
    /* $A2F2: 14 */ nes_cpu_instruction_boundary(0xA2F2, 4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A2F4:;
    /* $A2F4: 16 */ nes_cpu_instruction_boundary(0xA2F4, 6); { uint16_t a=(0x12 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A2F6:; /* VRAMStruct_Credits00_VRAMStructData96_end */
    /* $A2F6: 23 */ nes_cpu_instruction_boundary(0xA2F6, 8); { uint16_t a=nes_read16zp((0xC0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A2F8:;
    /* $A2F8: 60 */ nes_cpu_instruction_boundary(0xA2F8, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8BD4_b0(void) { /* LoadUniqueItems */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8BD4_b0");
#endif
label_8BD4:; /* LoadUniqueItems */
    /* $8BD4: A9 */ nes_cpu_instruction_boundary(0x8BD4, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8BD6:;
    /* $8BD6: 8D */ nes_cpu_instruction_boundary(0x8BD6, 4); nes_write(0x6886, g_cpu.A);
label_8BD9:;
    /* $8BD9: 85 */ nes_cpu_instruction_boundary(0x8BD9, 3); nes_write(0x05, g_cpu.A);
label_8BDB:;
    /* $8BDB: 85 */ nes_cpu_instruction_boundary(0x8BDB, 3); nes_write(0x06, g_cpu.A);
label_8BDD:;
    /* $8BDD: A9 */ nes_cpu_instruction_boundary(0x8BDD, 2); g_cpu.A = 0x3B; FLAG_NZ(g_cpu.A);
label_8BDF:;
    /* $8BDF: 85 */ nes_cpu_instruction_boundary(0x8BDF, 3); nes_write(0x07, g_cpu.A);
label_8BE1:;
    /* $8BE1: A4 */ nes_cpu_instruction_boundary(0x8BE1, 3); g_cpu.Y = nes_read(0x05); FLAG_NZ(g_cpu.Y);
label_8BE3:;
    /* $8BE3: B9 */ nes_cpu_instruction_boundary(0x8BE3, 4); g_cpu.A = nes_read((0x6988 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8BE6:;
    /* $8BE6: 85 */ nes_cpu_instruction_boundary(0x8BE6, 3); nes_write(0x08, g_cpu.A);
label_8BE8:;
    /* $8BE8: A2 */ nes_cpu_instruction_boundary(0x8BE8, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_8BEA:;
    /* $8BEA: 86 */ nes_cpu_instruction_boundary(0x8BEA, 3); nes_write(0x09, g_cpu.X);
label_8BEC:;
    /* $8BEC: A6 */ nes_cpu_instruction_boundary(0x8BEC, 3); g_cpu.X = nes_read(0x06); FLAG_NZ(g_cpu.X);
label_8BEE:;
    /* $8BEE: F0 */ nes_cpu_instruction_boundary(0x8BEE, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_8C0A; }
label_8BF0:;
    /* $8BF0: A2 */ nes_cpu_instruction_boundary(0x8BF0, 2); g_cpu.X = 0x01; FLAG_NZ(g_cpu.X);
label_8BF2:;
    /* $8BF2: 86 */ nes_cpu_instruction_boundary(0x8BF2, 3); nes_write(0x02, g_cpu.X);
label_8BF4:;
    /* $8BF4: 18 */ nes_cpu_instruction_boundary(0x8BF4, 2); g_cpu.C = 0;
label_8BF5:; /* LoadUniqueItems_loop_unused */
    /* $8BF5: 6A */ nes_cpu_instruction_boundary(0x8BF5, 2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_8BF6:;
    /* $8BF6: 85 */ nes_cpu_instruction_boundary(0x8BF6, 3); nes_write(0x08, g_cpu.A);
label_8BF8:;
    /* $8BF8: A6 */ nes_cpu_instruction_boundary(0x8BF8, 3); g_cpu.X = nes_read(0x02); FLAG_NZ(g_cpu.X);
label_8BFA:;
    /* $8BFA: E4 */ nes_cpu_instruction_boundary(0x8BFA, 3); { uint8_t m=nes_read(0x06); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8BFC:;
    /* $8BFC: F0 */ nes_cpu_instruction_boundary(0x8BFC, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_8C0A; }
label_8BFE:;
    /* $8BFE: E6 */ nes_cpu_instruction_boundary(0x8BFE, 5); { uint16_t a=0x02; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C00:;
    /* $8C00: 4C */ nes_cpu_instruction_boundary(0x8C00, 3); nes_cpu_instruction_boundary(0x8BF5, 2);
    goto label_8BF5;
label_8C0A:; /* LoadUniqueItems_processItemBit */
    /* $8C0A: A5 */ nes_cpu_instruction_boundary(0x8C0A, 3); g_cpu.A = nes_read(0x08); FLAG_NZ(g_cpu.A);
label_8C0C:;
    /* $8C0C: 6A */ nes_cpu_instruction_boundary(0x8C0C, 2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_8C0D:;
    /* $8C0D: 85 */ nes_cpu_instruction_boundary(0x8C0D, 3); nes_write(0x08, g_cpu.A);
label_8C0F:;
    /* $8C0F: 90 */ nes_cpu_instruction_boundary(0x8C0F, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8C14; }
label_8C11:;
    /* $8C11: 20 */ nes_cpu_instruction_boundary(0x8C11, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x13; g_cpu.S--; func_8C39_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8C11, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8C14:; /* LoadUniqueItems_endIf_A */
    /* $8C14: A4 */ nes_cpu_instruction_boundary(0x8C14, 3); g_cpu.Y = nes_read(0x06); FLAG_NZ(g_cpu.Y);
label_8C16:;
    /* $8C16: C0 */ nes_cpu_instruction_boundary(0x8C16, 2); { int r=g_cpu.Y-0x07; g_cpu.C=(g_cpu.Y>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_8C18:;
    /* $8C18: B0 */ nes_cpu_instruction_boundary(0x8C18, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8C27; }
label_8C1A:;
    /* $8C1A: E6 */ nes_cpu_instruction_boundary(0x8C1A, 5); { uint16_t a=0x06; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C1C:;
    /* $8C1C: E6 */ nes_cpu_instruction_boundary(0x8C1C, 5); { uint16_t a=0x09; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C1E:;
    /* $8C1E: A6 */ nes_cpu_instruction_boundary(0x8C1E, 3); g_cpu.X = nes_read(0x09); FLAG_NZ(g_cpu.X);
label_8C20:;
    /* $8C20: E4 */ nes_cpu_instruction_boundary(0x8C20, 3); { uint8_t m=nes_read(0x07); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8C22:;
    /* $8C22: B0 */ nes_cpu_instruction_boundary(0x8C22, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8C38; }
label_8C24:;
    /* $8C24: 4C */ nes_cpu_instruction_boundary(0x8C24, 3); nes_cpu_instruction_boundary(0x8C0A, 2);
    goto label_8C0A;
label_8C27:; /* LoadUniqueItems_moveToNextByte */
    /* $8C27: A0 */ nes_cpu_instruction_boundary(0x8C27, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_8C29:;
    /* $8C29: 84 */ nes_cpu_instruction_boundary(0x8C29, 3); nes_write(0x06, g_cpu.Y);
label_8C2B:;
    /* $8C2B: E6 */ nes_cpu_instruction_boundary(0x8C2B, 5); { uint16_t a=0x05; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C2D:;
    /* $8C2D: E6 */ nes_cpu_instruction_boundary(0x8C2D, 5); { uint16_t a=0x09; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C2F:;
    /* $8C2F: A6 */ nes_cpu_instruction_boundary(0x8C2F, 3); g_cpu.X = nes_read(0x09); FLAG_NZ(g_cpu.X);
label_8C31:;
    /* $8C31: E4 */ nes_cpu_instruction_boundary(0x8C31, 3); { uint8_t m=nes_read(0x07); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8C33:;
    /* $8C33: B0 */ nes_cpu_instruction_boundary(0x8C33, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8C38; }
label_8C35:;
    /* $8C35: 4C */ nes_cpu_instruction_boundary(0x8C35, 3); nes_cpu_instruction_boundary(0x8C03, 2); func_8C03_b0(); return;
label_8C38:; /* LoadUniqueItems_RTS */
    /* $8C38: 60 */ nes_cpu_instruction_boundary(0x8C38, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8D3D_b0(void) { /* LoadTanksAndMissiles */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D3D_b0");
#endif
label_8D3D:; /* LoadTanksAndMissiles */
    /* $8D3D: AD */ nes_cpu_instruction_boundary(0x8D3D, 4); g_cpu.A = nes_read(0x6991); FLAG_NZ(g_cpu.A);
label_8D40:;
    /* $8D40: 8D */ nes_cpu_instruction_boundary(0x8D40, 4); nes_write(0x6878, g_cpu.A);
label_8D43:;
    /* $8D43: AD */ nes_cpu_instruction_boundary(0x8D43, 4); g_cpu.A = nes_read(0x6992); FLAG_NZ(g_cpu.A);
label_8D46:;
    /* $8D46: 8D */ nes_cpu_instruction_boundary(0x8D46, 4); nes_write(0x6879, g_cpu.A);
label_8D49:;
    /* $8D49: A9 */ nes_cpu_instruction_boundary(0x8D49, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8D4B:;
    /* $8D4B: 85 */ nes_cpu_instruction_boundary(0x8D4B, 3); nes_write(0x00, g_cpu.A);
label_8D4D:;
    /* $8D4D: 85 */ nes_cpu_instruction_boundary(0x8D4D, 3); nes_write(0x02, g_cpu.A);
label_8D4F:;
    /* $8D4F: AD */ nes_cpu_instruction_boundary(0x8D4F, 4); g_cpu.A = nes_read(0x6997); FLAG_NZ(g_cpu.A);
label_8D52:;
    /* $8D52: 29 */ nes_cpu_instruction_boundary(0x8D52, 2); g_cpu.A &= 0x80; FLAG_NZ(g_cpu.A);
label_8D54:;
    /* $8D54: F0 */ nes_cpu_instruction_boundary(0x8D54, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8D5C; }
label_8D56:;
    /* $8D56: A5 */ nes_cpu_instruction_boundary(0x8D56, 3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_8D58:;
    /* $8D58: 09 */ nes_cpu_instruction_boundary(0x8D58, 2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_8D5A:;
    /* $8D5A: 85 */ nes_cpu_instruction_boundary(0x8D5A, 3); nes_write(0x00, g_cpu.A);
label_8D5C:; /* LoadTanksAndMissiles_endIf_kraidRaised */
    /* $8D5C: AD */ nes_cpu_instruction_boundary(0x8D5C, 4); g_cpu.A = nes_read(0x6997); FLAG_NZ(g_cpu.A);
label_8D5F:;
    /* $8D5F: 29 */ nes_cpu_instruction_boundary(0x8D5F, 2); g_cpu.A &= 0x40; FLAG_NZ(g_cpu.A);
label_8D61:;
    /* $8D61: F0 */ nes_cpu_instruction_boundary(0x8D61, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8D69; }
label_8D63:;
    /* $8D63: A5 */ nes_cpu_instruction_boundary(0x8D63, 3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_8D65:;
    /* $8D65: 09 */ nes_cpu_instruction_boundary(0x8D65, 2); g_cpu.A |= 0x01; FLAG_NZ(g_cpu.A);
label_8D67:;
    /* $8D67: 85 */ nes_cpu_instruction_boundary(0x8D67, 3); nes_write(0x00, g_cpu.A);
label_8D69:; /* LoadTanksAndMissiles_endIf_kraidKilled */
    /* $8D69: A5 */ nes_cpu_instruction_boundary(0x8D69, 3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_8D6B:;
    /* $8D6B: 8D */ nes_cpu_instruction_boundary(0x8D6B, 4); nes_write(0x687B, g_cpu.A);
label_8D6E:;
    /* $8D6E: AD */ nes_cpu_instruction_boundary(0x8D6E, 4); g_cpu.A = nes_read(0x6997); FLAG_NZ(g_cpu.A);
label_8D71:;
    /* $8D71: 29 */ nes_cpu_instruction_boundary(0x8D71, 2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_8D73:;
    /* $8D73: F0 */ nes_cpu_instruction_boundary(0x8D73, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8D7B; }
label_8D75:;
    /* $8D75: A5 */ nes_cpu_instruction_boundary(0x8D75, 3); g_cpu.A = nes_read(0x02); FLAG_NZ(g_cpu.A);
label_8D77:;
    /* $8D77: 09 */ nes_cpu_instruction_boundary(0x8D77, 2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_8D79:;
    /* $8D79: 85 */ nes_cpu_instruction_boundary(0x8D79, 3); nes_write(0x02, g_cpu.A);
label_8D7B:; /* LoadTanksAndMissiles_endIf_ridleyRaised */
    /* $8D7B: AD */ nes_cpu_instruction_boundary(0x8D7B, 4); g_cpu.A = nes_read(0x6997); FLAG_NZ(g_cpu.A);
label_8D7E:;
    /* $8D7E: 29 */ nes_cpu_instruction_boundary(0x8D7E, 2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_8D80:;
    /* $8D80: F0 */ nes_cpu_instruction_boundary(0x8D80, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8D88; }
label_8D82:;
    /* $8D82: A5 */ nes_cpu_instruction_boundary(0x8D82, 3); g_cpu.A = nes_read(0x02); FLAG_NZ(g_cpu.A);
label_8D84:;
    /* $8D84: 09 */ nes_cpu_instruction_boundary(0x8D84, 2); g_cpu.A |= 0x02; FLAG_NZ(g_cpu.A);
label_8D86:;
    /* $8D86: 85 */ nes_cpu_instruction_boundary(0x8D86, 3); nes_write(0x02, g_cpu.A);
label_8D88:; /* LoadTanksAndMissiles_endIf_ridleyKilled */
    /* $8D88: A5 */ nes_cpu_instruction_boundary(0x8D88, 3); g_cpu.A = nes_read(0x02); FLAG_NZ(g_cpu.A);
label_8D8A:;
    /* $8D8A: 8D */ nes_cpu_instruction_boundary(0x8D8A, 4); nes_write(0x687C, g_cpu.A);
label_8D8D:;
    /* $8D8D: A9 */ nes_cpu_instruction_boundary(0x8D8D, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8D8F:;
    /* $8D8F: 85 */ nes_cpu_instruction_boundary(0x8D8F, 3); nes_write(0x00, g_cpu.A);
label_8D91:;
    /* $8D91: 85 */ nes_cpu_instruction_boundary(0x8D91, 3); nes_write(0x02, g_cpu.A);
label_8D93:;
    /* $8D93: A0 */ nes_cpu_instruction_boundary(0x8D93, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_8D95:; /* LoadTanksAndMissiles_loop_tanks */
    /* $8D95: B9 */ nes_cpu_instruction_boundary(0x8D95, 4); g_cpu.A = nes_read((0x6888 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8D98:;
    /* $8D98: 29 */ nes_cpu_instruction_boundary(0x8D98, 2); g_cpu.A &= 0xFC; FLAG_NZ(g_cpu.A);
label_8D9A:;
    /* $8D9A: C9 */ nes_cpu_instruction_boundary(0x8D9A, 2); { int r=g_cpu.A-0x20; g_cpu.C=(g_cpu.A>=0x20)?1:0; FLAG_NZ(r&0xFF); }
label_8D9C:;
    /* $8D9C: D0 */ nes_cpu_instruction_boundary(0x8D9C, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8DA3; }
label_8D9E:;
    /* $8D9E: E6 */ nes_cpu_instruction_boundary(0x8D9E, 5); { uint16_t a=0x00; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8DA0:;
    /* $8DA0: 4C */ nes_cpu_instruction_boundary(0x8DA0, 3); nes_cpu_instruction_boundary(0x8DA9, 2); func_8DA9_b0(); return;
label_8DA3:; /* LoadTanksAndMissiles_endIf_etank */
    /* $8DA3: C9 */ nes_cpu_instruction_boundary(0x8DA3, 2); { int r=g_cpu.A-0x24; g_cpu.C=(g_cpu.A>=0x24)?1:0; FLAG_NZ(r&0xFF); }
label_8DA5:;
    /* $8DA5: D0 */ nes_cpu_instruction_boundary(0x8DA5, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8DA9; }
label_8DA7:;
    /* $8DA7: E6 */ nes_cpu_instruction_boundary(0x8DA7, 5); { uint16_t a=0x02; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8DA9:; /* LoadTanksAndMissiles_IncrementToNextItem */
    /* $8DA9: C8 */ nes_cpu_instruction_boundary(0x8DA9, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8DAA:;
    /* $8DAA: C8 */ nes_cpu_instruction_boundary(0x8DAA, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8DAB:;
    /* $8DAB: C0 */ nes_cpu_instruction_boundary(0x8DAB, 2); { int r=g_cpu.Y-0x84; g_cpu.C=(g_cpu.Y>=0x84)?1:0; FLAG_NZ(r&0xFF); }
label_8DAD:;
    /* $8DAD: 90 */ nes_cpu_instruction_boundary(0x8DAD, 2); if (!g_cpu.C) {
    nes_cpu_instruction_boundary(0x8D95, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8D95;
    }
label_8DAF:;
    /* $8DAF: A5 */ nes_cpu_instruction_boundary(0x8DAF, 3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_8DB1:;
    /* $8DB1: C9 */ nes_cpu_instruction_boundary(0x8DB1, 2); { int r=g_cpu.A-0x06; g_cpu.C=(g_cpu.A>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_8DB3:;
    /* $8DB3: 90 */ nes_cpu_instruction_boundary(0x8DB3, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8DB7; }
label_8DB5:;
    /* $8DB5: A9 */ nes_cpu_instruction_boundary(0x8DB5, 2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_8DB7:; /* LoadTanksAndMissiles_endIf_A */
    /* $8DB7: 8D */ nes_cpu_instruction_boundary(0x8DB7, 4); nes_write(0x6877, g_cpu.A);
label_8DBA:;
    /* $8DBA: A9 */ nes_cpu_instruction_boundary(0x8DBA, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8DBC:;
    /* $8DBC: A4 */ nes_cpu_instruction_boundary(0x8DBC, 3); g_cpu.Y = nes_read(0x02); FLAG_NZ(g_cpu.Y);
label_8DBE:;
    /* $8DBE: F0 */ nes_cpu_instruction_boundary(0x8DBE, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8DC6; }
label_8DC0:;
    /* $8DC0: 18 */ nes_cpu_instruction_boundary(0x8DC0, 2); g_cpu.C = 0;
label_8DC1:; /* LoadTanksAndMissiles_loop_mul5 */
    /* $8DC1: 69 */ nes_cpu_instruction_boundary(0x8DC1, 2); { uint16_t r = g_cpu.A + 0x05 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x05); g_cpu.A=r&0xFF; }
label_8DC3:;
    /* $8DC3: 88 */ nes_cpu_instruction_boundary(0x8DC3, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8DC4:;
    /* $8DC4: D0 */ nes_cpu_instruction_boundary(0x8DC4, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0x8DC1, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8DC1;
    }
label_8DC6:; /* LoadTanksAndMissiles_endIf_B */
    /* $8DC6: AC */ nes_cpu_instruction_boundary(0x8DC6, 4); g_cpu.Y = nes_read(0x687B); FLAG_NZ(g_cpu.Y);
label_8DC9:;
    /* $8DC9: F0 */ nes_cpu_instruction_boundary(0x8DC9, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8DCF; }
label_8DCB:;
    /* $8DCB: 69 */ nes_cpu_instruction_boundary(0x8DCB, 2); { uint16_t r = g_cpu.A + 0x4B + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x4B); g_cpu.A=r&0xFF; }
label_8DCD:;
    /* $8DCD: B0 */ nes_cpu_instruction_boundary(0x8DCD, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8DD8; }
label_8DCF:; /* LoadTanksAndMissiles_endIf_C */
    /* $8DCF: AC */ nes_cpu_instruction_boundary(0x8DCF, 4); g_cpu.Y = nes_read(0x687C); FLAG_NZ(g_cpu.Y);
label_8DD2:;
    /* $8DD2: F0 */ nes_cpu_instruction_boundary(0x8DD2, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8DDA; }
label_8DD4:;
    /* $8DD4: 69 */ nes_cpu_instruction_boundary(0x8DD4, 2); { uint16_t r = g_cpu.A + 0x4B + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x4B); g_cpu.A=r&0xFF; }
label_8DD6:;
    /* $8DD6: 90 */ nes_cpu_instruction_boundary(0x8DD6, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8DDA; }
label_8DD8:; /* LoadTanksAndMissiles_capMaxMissiles */
    /* $8DD8: A9 */ nes_cpu_instruction_boundary(0x8DD8, 2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_8DDA:; /* LoadTanksAndMissiles_endIf_D */
    /* $8DDA: 8D */ nes_cpu_instruction_boundary(0x8DDA, 4); nes_write(0x687A, g_cpu.A);
label_8DDD:;
    /* $8DDD: 60 */ nes_cpu_instruction_boundary(0x8DDD, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8BF5_b0(void) { /* LoadUniqueItems_loop_unused */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8BF5_b0");
#endif
label_8BF5:; /* LoadUniqueItems_loop_unused */
    /* $8BF5: 6A */ nes_cpu_instruction_boundary(0x8BF5, 2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_8BF6:;
    /* $8BF6: 85 */ nes_cpu_instruction_boundary(0x8BF6, 3); nes_write(0x08, g_cpu.A);
label_8BF8:;
    /* $8BF8: A6 */ nes_cpu_instruction_boundary(0x8BF8, 3); g_cpu.X = nes_read(0x02); FLAG_NZ(g_cpu.X);
label_8BFA:;
    /* $8BFA: E4 */ nes_cpu_instruction_boundary(0x8BFA, 3); { uint8_t m=nes_read(0x06); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8BFC:;
    /* $8BFC: F0 */ nes_cpu_instruction_boundary(0x8BFC, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_8C0A; }
label_8BFE:;
    /* $8BFE: E6 */ nes_cpu_instruction_boundary(0x8BFE, 5); { uint16_t a=0x02; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C00:;
    /* $8C00: 4C */ nes_cpu_instruction_boundary(0x8C00, 3); nes_cpu_instruction_boundary(0x8BF5, 2);
    goto label_8BF5;
label_8C0A:; /* LoadUniqueItems_processItemBit */
    /* $8C0A: A5 */ nes_cpu_instruction_boundary(0x8C0A, 3); g_cpu.A = nes_read(0x08); FLAG_NZ(g_cpu.A);
label_8C0C:;
    /* $8C0C: 6A */ nes_cpu_instruction_boundary(0x8C0C, 2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_8C0D:;
    /* $8C0D: 85 */ nes_cpu_instruction_boundary(0x8C0D, 3); nes_write(0x08, g_cpu.A);
label_8C0F:;
    /* $8C0F: 90 */ nes_cpu_instruction_boundary(0x8C0F, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8C14; }
label_8C11:;
    /* $8C11: 20 */ nes_cpu_instruction_boundary(0x8C11, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x13; g_cpu.S--; func_8C39_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8C11, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8C14:; /* LoadUniqueItems_endIf_A */
    /* $8C14: A4 */ nes_cpu_instruction_boundary(0x8C14, 3); g_cpu.Y = nes_read(0x06); FLAG_NZ(g_cpu.Y);
label_8C16:;
    /* $8C16: C0 */ nes_cpu_instruction_boundary(0x8C16, 2); { int r=g_cpu.Y-0x07; g_cpu.C=(g_cpu.Y>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_8C18:;
    /* $8C18: B0 */ nes_cpu_instruction_boundary(0x8C18, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8C27; }
label_8C1A:;
    /* $8C1A: E6 */ nes_cpu_instruction_boundary(0x8C1A, 5); { uint16_t a=0x06; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C1C:;
    /* $8C1C: E6 */ nes_cpu_instruction_boundary(0x8C1C, 5); { uint16_t a=0x09; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C1E:;
    /* $8C1E: A6 */ nes_cpu_instruction_boundary(0x8C1E, 3); g_cpu.X = nes_read(0x09); FLAG_NZ(g_cpu.X);
label_8C20:;
    /* $8C20: E4 */ nes_cpu_instruction_boundary(0x8C20, 3); { uint8_t m=nes_read(0x07); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8C22:;
    /* $8C22: B0 */ nes_cpu_instruction_boundary(0x8C22, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8C38; }
label_8C24:;
    /* $8C24: 4C */ nes_cpu_instruction_boundary(0x8C24, 3); nes_cpu_instruction_boundary(0x8C0A, 2);
    goto label_8C0A;
label_8C27:; /* LoadUniqueItems_moveToNextByte */
    /* $8C27: A0 */ nes_cpu_instruction_boundary(0x8C27, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_8C29:;
    /* $8C29: 84 */ nes_cpu_instruction_boundary(0x8C29, 3); nes_write(0x06, g_cpu.Y);
label_8C2B:;
    /* $8C2B: E6 */ nes_cpu_instruction_boundary(0x8C2B, 5); { uint16_t a=0x05; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C2D:;
    /* $8C2D: E6 */ nes_cpu_instruction_boundary(0x8C2D, 5); { uint16_t a=0x09; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C2F:;
    /* $8C2F: A6 */ nes_cpu_instruction_boundary(0x8C2F, 3); g_cpu.X = nes_read(0x09); FLAG_NZ(g_cpu.X);
label_8C31:;
    /* $8C31: E4 */ nes_cpu_instruction_boundary(0x8C31, 3); { uint8_t m=nes_read(0x07); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8C33:;
    /* $8C33: B0 */ nes_cpu_instruction_boundary(0x8C33, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8C38; }
label_8C35:;
    /* $8C35: 4C */ nes_cpu_instruction_boundary(0x8C35, 3); nes_cpu_instruction_boundary(0x8C03, 2); func_8C03_b0(); return;
label_8C38:; /* LoadUniqueItems_RTS */
    /* $8C38: 60 */ nes_cpu_instruction_boundary(0x8C38, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8C39:; return;
label_8C3B:; return;
label_8C3E:; return;
label_8C3F:; return;
label_8C41:; return;
label_8C42:; return;
label_8C43:; return;
label_8C46:; return;
label_8C48:; return;
label_8C4B:; return;
label_8C4D:; return;
label_8C50:; return;
label_8C53:; return;
label_8C55:; return;
label_8C56:; return;
label_8C59:; return;
label_8C5A:; return;
label_8C5D:; return;
label_8C5E:; return;
label_8C61:; return;
label_8C64:; return;
label_8C66:; return;
label_8C69:; return;
label_8C6C:; return;
label_8C6E:; return;
label_8C71:; return;
label_8C73:; return;
label_8C75:; return;
label_8C77:; return;
label_8C79:; return;
label_8C7A:; return;
label_8C7C:; return;
label_8C7E:; return;
label_8C81:; return;
label_8C84:; return;
label_8C85:; return;
label_8C87:; return;
label_8C8A:; return;
label_8C8D:; return;
label_8C8F:; return;
label_8C91:; return;
label_8C93:; return;
label_8C96:; return;
label_8C99:; return;
label_8C9B:; return;
label_8C9E:; return;
label_8CA0:; return;
label_8CA2:; return;
label_8CA5:; return;
label_8CA7:; return;
label_8CA9:; return;
label_8CAC:; return;
label_8CAF:; return;
label_8CB2:; return;
label_8CB5:; return;
label_8CB8:; return;
label_8CBA:; return;
label_8CBC:; return;
label_8CBF:; return;
label_8CC1:; return;
label_8CC3:; return;
label_8CC5:; return;
label_8CC7:; return;
label_8CC9:; return;
label_8CCC:; return;
label_8CCE:; return;
label_8CD0:; return;
label_8CD2:; return;
label_8CD4:; return;
label_8CD6:; return;
label_8CD9:; return;
label_8CDB:; return;
label_8CDD:; return;
label_8CDF:; return;
label_8CE1:; return;
label_8CE3:; return;
label_8CE6:; return;
label_8CE8:; return;
label_8CEA:; return;
label_8CEC:; return;
label_8CEE:; return;
label_8CF0:; return;
label_8CF2:; return;
label_8CF5:; return;
label_8CF7:; return;
label_8CFA:; return;
label_8CFD:; return;
label_8CFE:; return;
label_8D00:; return;
label_8D03:; return;
label_8D05:; return;
label_8D07:; return;
label_8D09:; return;
label_8D0C:; return;
label_8D0F:; return;
label_8D12:; return;
label_8D15:; return;
label_8D17:; return;
label_8D1A:; return;
label_8D1D:; return;
label_8D1F:; return;
label_8D22:; return;
label_8D24:; return;
label_8D26:; return;
label_8D27:; return;
label_8D2A:; return;
label_8D2D:; return;
label_8D2F:; return;
label_8D31:; return;
label_8D33:; return;
label_8D36:; return;
label_8D39:; return;
label_8D3A:; return;
label_8D3C:; return;
label_8D3D:; return;
label_8D40:; return;
label_8D43:; return;
label_8D46:; return;
label_8D49:; return;
label_8D4B:; return;
label_8D4D:; return;
label_8D4F:; return;
label_8D52:; return;
label_8D54:; return;
label_8D56:; return;
label_8D58:; return;
label_8D5A:; return;
label_8D5C:; return;
label_8D5F:; return;
label_8D61:; return;
label_8D63:; return;
label_8D65:; return;
label_8D67:; return;
label_8D69:; return;
label_8D6B:; return;
label_8D6E:; return;
label_8D71:; return;
label_8D73:; return;
label_8D75:; return;
label_8D77:; return;
label_8D79:; return;
label_8D7B:; return;
label_8D7E:; return;
label_8D80:; return;
label_8D82:; return;
label_8D84:; return;
label_8D86:; return;
label_8D88:; return;
label_8D8A:; return;
label_8D8D:; return;
label_8D8F:; return;
label_8D91:; return;
label_8D93:; return;
label_8D95:; return;
label_8D98:; return;
label_8D9A:; return;
label_8D9C:; return;
label_8D9E:; return;
label_8DA0:; return;
label_8DA3:; return;
label_8DA5:; return;
label_8DA7:; return;
label_8DA9:; return;
label_8DAA:; return;
label_8DAB:; return;
label_8DAD:; return;
label_8DAF:; return;
label_8DB1:; return;
label_8DB3:; return;
label_8DB5:; return;
label_8DB7:; return;
label_8DBA:; return;
label_8DBC:; return;
label_8DBE:; return;
label_8DC0:; return;
label_8DC1:; return;
label_8DC3:; return;
label_8DC4:; return;
label_8DC6:; return;
label_8DC9:; return;
label_8DCB:; return;
label_8DCD:; return;
label_8DCF:; return;
label_8DD2:; return;
label_8DD4:; return;
label_8DD6:; return;
label_8DD8:; return;
label_8DDA:; return;
label_8DDD:; return;
label_8DDE:; return;
label_8DE1:; return;
label_8DE3:; return;
label_8DE5:; return;
label_8DE8:; return;
label_8DEB:; return;
label_8DED:; return;
label_8DEE:; return;
label_8DF0:; return;
label_8DF2:; return;
label_8DF5:; return;
label_8DF7:; return;
label_8DFA:; return;
label_8DFD:; return;
label_8E00:; return;
label_8E02:; return;
label_8E03:; return;
label_8E05:; return;
label_8E06:; return;
label_8E07:; return;
label_8E09:; return;
label_8E0C:; return;
label_8E0F:; return;
label_8E10:; return;
label_8E13:; return;
label_8E14:; return;
label_8E15:; return;
label_8E16:; return;
label_8E17:; return;
label_8E1A:; return;
label_8E1D:; return;
label_8E20:; return;
label_8E21:; return;
label_8E23:; return;
label_8E25:; return;
label_8E26:; return;
label_8E29:; return;
label_8E2A:; return;
label_8E2C:; return;
label_8E2D:; return;
label_8E30:; return;
label_8E32:; return;
label_8E35:; return;
label_8E37:; return;
label_8E39:; return;
label_8E3B:; return;
label_8E3E:; return;
label_8E3F:; return;
label_8E40:; return;
label_8E42:; return;
label_8E44:; return;
label_8E46:; return;
label_8E49:; return;
label_8E4B:; return;
label_8E4D:; return;
label_8E4E:; return;
label_8E51:; return;
label_8E53:; return;
label_8E56:; return;
label_8E58:; return;
label_8E5A:; return;
label_8E5D:; return;
label_8E5E:; return;
label_8E60:; return;
label_8E62:; return;
label_8E64:; return;
label_8E67:; return;
label_8E69:; return;
label_8E6B:; return;
label_8E6C:; return;
label_8E6E:; return;
label_8E71:; return;
label_8E74:; return;
label_8E76:; return;
label_8E79:; return;
label_8E7C:; return;
label_8E7E:; return;
label_8E81:; return;
label_8E84:; return;
label_8E86:; return;
label_8E89:; return;
label_8E8C:; return;
label_8E8E:; return;
label_8E91:; return;
label_8E94:; return;
label_8E96:; return;
label_8E99:; return;
label_8E9C:; return;
label_8E9E:; return;
label_8EA1:; return;
label_8EA4:; return;
label_8EA6:; return;
label_8EA9:; return;
label_8EAC:; return;
label_8EAE:; return;
label_8EB1:; return;
label_8EB4:; return;
label_8EB6:; return;
label_8EB9:; return;
label_8EBC:; return;
label_8EBE:; return;
label_8EC1:; return;
label_8EC4:; return;
label_8EC6:; return;
label_8EC9:; return;
label_8ECC:; return;
label_8ECE:; return;
label_8ED1:; return;
label_8ED4:; return;
label_8ED6:; return;
label_8ED9:; return;
label_8EDC:; return;
label_8EDE:; return;
label_8EE1:; return;
label_8EE4:; return;
label_8EE6:; return;
label_8EE9:; return;
label_8EEC:; return;
label_8EEE:; return;
label_8EF1:; return;
label_8EF4:; return;
label_8EF6:; return;
label_8EF9:; return;
label_8EFC:; return;
label_8EFE:; return;
label_8F01:; return;
label_8F04:; return;
label_8F06:; return;
label_8F09:; return;
label_8F0C:; return;
label_8F0E:; return;
label_8F11:; return;
label_8F14:; return;
label_8F16:; return;
label_8F19:; return;
label_8F1C:; return;
label_8F1E:; return;
label_8F21:; return;
label_8F24:; return;
label_8F26:; return;
label_8F29:; return;
label_8F2C:; return;
label_8F2D:; return;
label_8F30:; return;
label_8F31:; return;
label_8F32:; return;
label_8F33:; return;
label_8F36:; return;
label_8F38:; return;
label_8F3B:; return;
label_8F3D:; return;
label_8F40:; return;
label_8F43:; return;
label_8F45:; return;
label_8F46:; return;
label_8F49:; return;
label_8F4B:; return;
label_8F4C:; return;
label_8F4D:; return;
label_8F4F:; return;
label_8F52:; return;
label_8F53:; return;
label_8F54:; return;
label_8F55:; return;
label_8F57:; return;
label_8F59:; return;
label_8F5A:; return;
label_8F5D:; return;
label_8F5F:; return;
label_8F60:; return;
label_8F62:; return;
label_8F65:; return;
label_8F68:; return;
label_8F6A:; return;
label_8F6D:; return;
label_8F70:; return;
label_8F72:; return;
label_8F75:; return;
label_8F78:; return;
label_8F7A:; return;
label_8F7D:; return;
label_8F80:; return;
label_8F82:; return;
label_8F85:; return;
label_8F88:; return;
label_8F8A:; return;
label_8F8D:; return;
label_8F90:; return;
label_8F92:; return;
label_8F95:; return;
label_8F98:; return;
label_8F9A:; return;
label_8F9D:; return;
label_8FA0:; return;
label_8FA2:; return;
label_8FA5:; return;
label_8FA8:; return;
label_8FAA:; return;
label_8FAD:; return;
label_8FB0:; return;
label_8FB2:; return;
label_8FB5:; return;
label_8FB8:; return;
label_8FBA:; return;
label_8FBD:; return;
label_8FC0:; return;
label_8FC2:; return;
label_8FC5:; return;
label_8FC8:; return;
label_8FCA:; return;
label_8FCD:; return;
label_8FD0:; return;
label_8FD2:; return;
label_8FD5:; return;
label_8FD8:; return;
label_8FDA:; return;
label_8FDD:; return;
label_8FE0:; return;
label_8FE2:; return;
label_8FE5:; return;
label_8FE8:; return;
label_8FEA:; return;
label_8FED:; return;
label_8FF0:; return;
label_8FF1:; return;
label_8FF4:; return;
label_8FF5:; return;
label_8FF6:; return;
label_8FF8:; return;
label_8FFB:; return;
label_8FFE:; return;
label_9000:; return;
label_9001:; return;
label_9004:; return;
label_9007:; return;
label_9009:; return;
label_900C:; return;
label_900D:; return;
label_900E:; return;
label_9010:; return;
label_9011:; return;
label_9014:; return;
label_9015:; return;
label_9016:; return;
label_9017:; return;
label_9019:; return;
label_901B:; return;
label_901E:; return;
label_9020:; return;
label_9021:; return;
label_9023:; return;
label_9025:; return;
label_9027:; return;
label_9028:; return;
label_902A:; return;
label_902C:; return;
label_902E:; return;
label_902F:; return;
label_9031:; return;
label_9033:; return;
label_9035:; return;
label_9037:; return;
label_9039:; return;
label_903B:; return;
label_903D:; return;
label_903F:; return;
label_9041:; return;
label_9044:; return;
label_9046:; return;
label_9048:; return;
label_904A:; return;
label_904C:; return;
label_904E:; return;
label_9050:; return;
label_9052:; return;
label_9054:; return;
label_9056:; return;
label_9058:; return;
label_905A:; return;
label_905C:; return;
label_905E:; return;
label_9061:; return;
label_9063:; return;
label_9065:; return;
label_9067:; return;
label_9069:; return;
label_906B:; return;
label_906D:; return;
label_906F:; return;
label_9071:; return;
label_9073:; return;
label_9074:; return;
label_9075:; return;
label_9078:; return;
label_907A:; return;
label_907C:; return;
label_907E:; return;
label_9080:; return;
label_9082:; return;
label_9083:; return;
label_9086:; return;
label_9088:; return;
label_9089:; return;
label_908C:; return;
label_908E:; return;
label_908F:; return;
label_9091:; return;
label_9093:; return;
label_9094:; return;
label_9097:; return;
label_9098:; return;
label_909A:; return;
label_909B:; return;
label_909C:; return;
label_909F:; return;
label_90A2:; return;
label_90A5:; return;
label_90A8:; return;
label_90AA:; return;
label_90AC:; return;
label_90AE:; return;
label_90B0:; return;
label_90B2:; return;
label_90B4:; return;
label_90B7:; return;
label_90BA:; return;
label_90BD:; return;
label_90BF:; return;
label_90C1:; return;
label_90C4:; return;
label_90C6:; return;
label_90C9:; return;
label_90CB:; return;
label_90CD:; return;
label_90CF:; return;
label_90D1:; return;
label_90D4:; return;
label_90D7:; return;
label_90D9:; return;
label_90DB:; return;
label_90DD:; return;
label_90DF:; return;
label_90E2:; return;
label_90E4:; return;
label_90E7:; return;
label_90E9:; return;
label_90EB:; return;
label_90ED:; return;
label_90EF:; return;
label_90F2:; return;
label_90F4:; return;
label_90F7:; return;
label_90FA:; return;
label_90FC:; return;
label_90FF:; return;
label_9102:; return;
label_9105:; return;
label_9108:; return;
label_910A:; return;
label_910D:; return;
label_910F:; return;
label_9112:; return;
label_9114:; return;
label_9117:; return;
label_9118:; return;
label_9119:; return;
label_911A:; return;
label_911D:; return;
label_911F:; return;
label_9121:; return;
label_9124:; return;
label_9127:; return;
label_912A:; return;
label_912C:; return;
label_912E:; return;
label_9130:; return;
label_9133:; return;
label_9136:; return;
label_9138:; return;
label_913A:; return;
label_913D:; return;
label_913F:; return;
label_9142:; return;
label_9144:; return;
label_9147:; return;
label_914A:; return;
label_914C:; return;
label_914E:; return;
label_9150:; return;
label_9153:; return;
label_9155:; return;
label_9157:; return;
label_915A:; return;
label_915C:; return;
label_915F:; return;
label_9161:; return;
label_9164:; return;
label_9166:; return;
label_9169:; return;
label_916B:; return;
label_916D:; return;
label_916F:; return;
label_9171:; return;
label_9173:; return;
label_9175:; return;
label_9178:; return;
label_917A:; return;
label_917C:; return;
label_917E:; return;
label_9180:; return;
label_9182:; return;
label_9184:; return;
label_9187:; return;
label_9188:; return;
label_918A:; return;
label_918C:; return;
label_918E:; return;
label_9190:; return;
label_9193:; return;
label_9196:; return;
label_9198:; return;
label_919B:; return;
label_919E:; return;
label_91A0:; return;
label_91A2:; return;
label_91A3:; return;
label_91A5:; return;
label_91A8:; return;
label_91AA:; return;
label_91AC:; return;
label_91AD:; return;
label_91AF:; return;
label_91B2:; return;
label_91B4:; return;
label_91B6:; return;
label_91B7:; return;
label_91B9:; return;
label_91BC:; return;
label_91BD:; return;
label_91BF:; return;
label_91C1:; return;
label_91C4:; return;
label_91C5:; return;
label_91C6:; return;
label_91C9:; return;
label_91CB:; return;
label_91CE:; return;
label_91D0:; return;
label_91D3:; return;
label_91D5:; return;
label_91D6:; return;
label_91D9:; return;
label_91DB:; return;
label_91DE:; return;
label_91E0:; return;
label_91E2:; return;
label_91E5:; return;
label_91E8:; return;
label_91E9:; return;
label_91EC:; return;
label_91EF:; return;
label_91F0:; return;
label_91F2:; return;
label_91F4:; return;
label_91F6:; return;
label_91F8:; return;
label_91FB:; return;
label_91FD:; return;
label_91FF:; return;
label_9201:; return;
label_9204:; return;
label_9205:; return;
label_9207:; return;
label_9209:; return;
label_920B:; return;
label_920E:; return;
label_9211:; return;
label_9213:; return;
label_9215:; return;
label_9217:; return;
label_9219:; return;
label_921C:; return;
label_921E:; return;
label_9220:; return;
label_9222:; return;
label_9225:; return;
label_9227:; return;
label_922A:; return;
label_922C:; return;
label_922F:; return;
label_9232:; return;
label_9234:; return;
label_9236:; return;
label_9238:; return;
label_9239:; return;
label_923C:; return;
label_923F:; return;
label_9242:; return;
label_9245:; return;
label_9247:; return;
label_9249:; return;
label_924B:; return;
label_924C:; return;
label_924F:; return;
label_9251:; return;
label_9254:; return;
label_9255:; return;
label_9256:; return;
label_9258:; return;
label_9259:; return;
label_925B:; return;
label_925D:; return;
label_925E:; return;
label_9260:; return;
label_9262:; return;
label_9264:; return;
label_9267:; return;
label_9269:; return;
label_926C:; return;
label_926D:; return;
label_926F:; return;
label_9270:; return;
label_9272:; return;
label_9273:; return;
label_9275:; return;
label_9277:; return;
label_927A:; return;
label_927C:; return;
label_927F:; return;
label_9280:; return;
label_9282:; return;
label_9283:; return;
label_9285:; return;
label_9287:; return;
label_9289:; return;
label_928C:; return;
label_928D:; return;
label_928F:; return;
label_9290:; return;
label_9292:; return;
label_9294:; return;
label_9297:; return;
label_9299:; return;
label_929B:; return;
label_929D:; return;
label_92A0:; return;
label_92A3:; return;
label_92A5:; return;
label_92A8:; return;
label_92AA:; return;
label_92AD:; return;
label_92B0:; return;
label_92B3:; return;
label_92B4:; return;
label_92B6:; return;
label_92B8:; return;
label_92BA:; return;
label_92BC:; return;
label_92BE:; return;
label_92C0:; return;
label_92C2:; return;
label_92C4:; return;
label_92C6:; return;
label_92C8:; return;
label_92C9:; return;
label_92CB:; return;
label_92CC:; return;
label_92CD:; return;
label_92CF:; return;
label_92D0:; return;
label_92D2:; return;
label_92D4:; return;
label_92D7:; return;
label_92DA:; return;
label_92DD:; return;
label_92DF:; return;
label_92E1:; return;
label_92E3:; return;
label_92E5:; return;
label_92E8:; return;
label_92EB:; return;
label_92ED:; return;
label_92F0:; return;
label_92F2:; return;
label_92F4:; return;
label_92F6:; return;
label_92F8:; return;
label_92F9:; return;
label_92FC:; return;
label_92FF:; return;
label_9302:; return;
label_9305:; return;
label_9308:; return;
label_930A:; return;
label_930D:; return;
label_930F:; return;
label_9311:; return;
label_9314:; return;
label_9317:; return;
label_931A:; return;
label_931C:; return;
label_931E:; return;
label_931F:; return;
label_9322:; return;
label_9324:; return;
label_9325:; return;
label_9327:; return;
label_932A:; return;
label_932D:; return;
label_9330:; return;
label_9333:; return;
label_9336:; return;
label_9339:; return;
label_933C:; return;
label_933F:; return;
label_9342:; return;
label_9345:; return;
label_9348:; return;
label_934B:; return;
label_934E:; return;
label_9351:; return;
label_9354:; return;
label_9356:; return;
label_9358:; return;
label_9359:; return;
label_935B:; return;
label_935D:; return;
label_9360:; return;
label_9362:; return;
label_9364:; return;
label_9367:; return;
label_936A:; return;
label_936D:; return;
label_9370:; return;
label_9373:; return;
label_9376:; return;
label_9378:; return;
label_937A:; return;
label_937C:; return;
label_937F:; return;
label_9381:; return;
label_9383:; return;
label_9384:; return;
label_9387:; return;
label_938A:; return;
label_938D:; return;
label_938E:; return;
label_938F:; return;
label_9391:; return;
label_9392:; return;
label_9394:; return;
label_9396:; return;
label_9398:; return;
label_939A:; return;
label_939D:; return;
label_939E:; return;
label_93A1:; return;
label_93A3:; return;
label_93A5:; return;
label_93A8:; return;
label_93AB:; return;
label_93AE:; return;
label_93B0:; return;
label_93B2:; return;
label_93B4:; return;
label_93B6:; return;
label_93B9:; return;
label_93BB:; return;
label_93BD:; return;
label_93BE:; return;
label_93C0:; return;
label_93C3:; return;
label_93C6:; return;
label_93C9:; return;
label_93CB:; return;
label_93CE:; return;
label_93D0:; return;
label_93D2:; return;
label_93D5:; return;
label_93D7:; return;
label_93DA:; return;
label_93DC:; return;
label_93DE:; return;
label_93E1:; return;
label_93E3:; return;
label_93E6:; return;
label_93E8:; return;
label_93EA:; return;
label_93ED:; return;
label_93EF:; return;
label_93F2:; return;
label_93F4:; return;
label_93F6:; return;
label_93F9:; return;
label_93FB:; return;
label_93FE:; return;
label_9400:; return;
label_9403:; return;
label_9406:; return;
label_9407:; return;
label_9408:; return;
label_940A:; return;
label_940B:; return;
label_940E:; return;
label_9410:; return;
label_9411:; return;
label_9413:; return;
label_9415:; return;
label_9416:; return;
label_9417:; return;
label_941A:; return;
label_941D:; return;
label_9420:; return;
label_9423:; return;
label_9425:; return;
label_9428:; return;
label_942B:; return;
label_942D:; return;
label_9430:; return;
label_9431:; return;
label_9432:; return;
label_9434:; return;
label_9436:; return;
label_9438:; return;
label_943A:; return;
label_943C:; return;
label_943E:; return;
label_943F:; return;
label_9441:; return;
label_9442:; return;
label_9444:; return;
label_9446:; return;
label_9448:; return;
label_944A:; return;
label_944B:; return;
label_944D:; return;
label_9450:; return;
label_9452:; return;
label_9454:; return;
label_9456:; return;
label_9458:; return;
label_945A:; return;
label_945C:; return;
label_945F:; return;
label_9462:; return;
label_9464:; return;
label_9467:; return;
label_9469:; return;
label_946B:; return;
label_946C:; return;
label_946E:; return;
label_9470:; return;
label_9471:; return;
label_9472:; return;
label_9473:; return;
label_9474:; return;
label_9477:; return;
label_9479:; return;
label_947B:; return;
label_947E:; return;
label_947F:; return;
label_9480:; return;
label_9482:; return;
label_9484:; return;
label_9487:; return;
label_9489:; return;
label_948C:; return;
label_948E:; return;
label_948F:; return;
label_9490:; return;
label_9491:; return;
label_9494:; return;
label_9495:; return;
label_9498:; return;
label_949A:; return;
label_949D:; return;
label_949F:; return;
label_94A2:; return;
label_94A4:; return;
label_94A7:; return;
label_94A9:; return;
label_94AC:; return;
label_94AD:; return;
label_94AE:; return;
label_94AF:; return;
label_94B0:; return;
label_94B1:; return;
label_94B4:; return;
label_94B5:; return;
label_94B8:; return;
label_94BA:; return;
label_94BD:; return;
label_94BF:; return;
label_94C2:; return;
label_94C4:; return;
label_94C7:; return;
label_94C9:; return;
label_94CC:; return;
label_94CF:; return;
label_94D0:; return;
label_94D1:; return;
label_94D2:; return;
label_94D3:; return;
label_94D4:; return;
label_94D7:; return;
label_94D8:; return;
label_94D9:; return;
label_94DA:; return;
label_94DC:; return;
label_94DE:; return;
label_94E0:; return;
label_94E2:; return;
label_94E3:; return;
label_94E5:; return;
label_94E7:; return;
label_94E9:; return;
label_94EB:; return;
label_94ED:; return;
label_94EF:; return;
label_94F1:; return;
label_94F3:; return;
label_94F5:; return;
label_94F7:; return;
label_94F9:; return;
label_94FB:; return;
label_94FD:; return;
label_94FF:; return;
label_9501:; return;
label_9502:; return;
label_9504:; return;
label_9506:; return;
label_9508:; return;
label_950A:; return;
label_950C:; return;
label_950E:; return;
label_950F:; return;
label_9511:; return;
label_9513:; return;
label_9515:; return;
label_9517:; return;
label_9519:; return;
label_951B:; return;
label_951E:; return;
label_9520:; return;
label_9522:; return;
label_9524:; return;
label_9527:; return;
label_9529:; return;
label_952B:; return;
label_952C:; return;
label_952F:; return;
label_9532:; return;
label_9533:; return;
label_9534:; return;
label_9535:; return;
label_9536:; return;
label_9537:; return;
label_9538:; return;
label_953B:; return;
label_953E:; return;
label_9541:; return;
label_9544:; return;
label_9547:; return;
label_954A:; return;
label_954B:; return;
label_954C:; return;
label_954D:; return;
label_954E:; return;
label_954F:; return;
label_9550:; return;
label_9551:; return;
label_9552:; return;
label_9553:; return;
label_9554:; return;
label_9555:; return;
label_9556:; return;
label_9557:; return;
label_9558:; return;
label_9559:; return;
label_955A:; return;
label_955B:; return;
label_955C:; return;
label_955D:; return;
label_955E:; return;
label_955F:; return;
label_9560:; return;
label_9562:; return;
label_9563:; return;
label_9565:; return;
label_9567:; return;
label_9569:; return;
label_956B:; return;
label_956D:; return;
label_956F:; return;
label_9571:; return;
label_9573:; return;
label_9575:; return;
label_9577:; return;
label_9579:; return;
label_957B:; return;
label_957D:; return;
label_957F:; return;
label_9581:; return;
label_9583:; return;
label_9585:; return;
label_9587:; return;
label_9588:; return;
label_958B:; return;
label_958C:; return;
label_958D:; return;
label_9590:; return;
label_9591:; return;
label_9594:; return;
label_9597:; return;
label_959A:; return;
label_959C:; return;
label_959E:; return;
label_95A0:; return;
label_95A3:; return;
label_95A5:; return;
label_95A8:; return;
label_95A9:; return;
label_95AA:; return;
label_95AD:; return;
label_95B0:; return;
label_95B1:; return;
label_95B4:; return;
label_95B5:; return;
label_95B8:; return;
label_95BA:; return;
label_95BC:; return;
label_95BE:; return;
label_95C0:; return;
label_95C2:; return;
label_95C4:; return;
label_95C7:; return;
label_95C9:; return;
label_95CC:; return;
label_95CD:; return;
label_95CE:; return;
label_95D1:; return;
label_95D4:; return;
label_95D5:; return;
label_95D8:; return;
label_95D9:; return;
label_95DC:; return;
label_95DE:; return;
label_95E1:; return;
label_95E4:; return;
label_95E6:; return;
label_95E8:; return;
label_95EB:; return;
label_95ED:; return;
label_95F0:; return;
label_95F1:; return;
label_95F2:; return;
label_95F5:; return;
label_95F8:; return;
label_95F9:; return;
label_95FC:; return;
label_95FD:; return;
label_9600:; return;
label_9602:; return;
label_9604:; return;
label_9606:; return;
label_9608:; return;
label_960A:; return;
label_960C:; return;
label_960F:; return;
label_9611:; return;
label_9614:; return;
label_9615:; return;
label_9616:; return;
label_9619:; return;
label_961C:; return;
label_961D:; return;
label_9620:; return;
label_9621:; return;
label_9624:; return;
label_9625:; return;
label_9628:; return;
label_9629:; return;
label_962C:; return;
label_962E:; return;
label_9630:; return;
label_9633:; return;
label_9635:; return;
label_9638:; return;
label_9639:; return;
label_963A:; return;
label_963D:; return;
label_9640:; return;
label_9641:; return;
label_9644:; return;
label_9645:; return;
label_9648:; return;
label_964B:; return;
label_964E:; return;
label_9650:; return;
label_9652:; return;
label_9654:; return;
label_9657:; return;
label_9659:; return;
label_965C:; return;
label_965D:; return;
label_965E:; return;
label_9661:; return;
label_9664:; return;
label_9665:; return;
label_9668:; return;
label_9669:; return;
label_966C:; return;
label_966F:; return;
label_9671:; return;
label_9674:; return;
label_9676:; return;
label_9678:; return;
label_967B:; return;
label_967D:; return;
label_9680:; return;
label_9681:; return;
label_9682:; return;
label_9685:; return;
label_9688:; return;
label_9689:; return;
label_968C:; return;
label_968D:; return;
label_9690:; return;
label_9692:; return;
label_9693:; return;
label_9694:; return;
label_9696:; return;
label_9698:; return;
label_969A:; return;
label_969C:; return;
label_969F:; return;
label_96A1:; return;
label_96A4:; return;
label_96A5:; return;
label_96A6:; return;
label_96A9:; return;
label_96AC:; return;
label_96AD:; return;
label_96B0:; return;
label_96B1:; return;
label_96B4:; return;
label_96B6:; return;
label_96B7:; return;
label_96B9:; return;
label_96BC:; return;
label_96BE:; return;
label_96C0:; return;
label_96C3:; return;
label_96C5:; return;
label_96C8:; return;
label_96C9:; return;
label_96CA:; return;
label_96CD:; return;
label_96D0:; return;
label_96D1:; return;
label_96D4:; return;
label_96D5:; return;
label_96D8:; return;
label_96D9:; return;
label_96DC:; return;
label_96DD:; return;
label_96E0:; return;
label_96E2:; return;
label_96E4:; return;
label_96E7:; return;
label_96E9:; return;
label_96EC:; return;
label_96ED:; return;
label_96EE:; return;
label_96F1:; return;
label_96F4:; return;
label_96F5:; return;
label_96F8:; return;
label_96F9:; return;
label_96FC:; return;
label_96FD:; return;
label_9700:; return;
label_9701:; return;
label_9704:; return;
label_9706:; return;
label_9708:; return;
label_970B:; return;
label_970D:; return;
label_9710:; return;
label_9711:; return;
label_9712:; return;
label_9715:; return;
label_9718:; return;
label_9719:; return;
label_971C:; return;
label_971D:; return;
label_9720:; return;
label_9722:; return;
label_9724:; return;
label_9726:; return;
label_9728:; return;
label_972A:; return;
label_972C:; return;
label_972F:; return;
label_9731:; return;
label_9734:; return;
label_9735:; return;
label_9736:; return;
label_9739:; return;
label_973C:; return;
label_973D:; return;
label_9740:; return;
label_9742:; return;
label_9744:; return;
label_9746:; return;
label_9748:; return;
label_974A:; return;
label_974C:; return;
label_974E:; return;
label_974F:; return;
label_9751:; return;
label_9754:; return;
label_9757:; return;
label_9759:; return;
label_975A:; return;
label_975D:; return;
label_9760:; return;
label_9761:; return;
label_9764:; return;
label_9765:; return;
label_9768:; return;
label_976A:; return;
label_976B:; return;
label_976C:; return;
label_976E:; return;
label_9770:; return;
label_9772:; return;
label_9774:; return;
label_9777:; return;
label_9779:; return;
label_977C:; return;
label_977D:; return;
label_977E:; return;
label_9781:; return;
label_9784:; return;
label_9785:; return;
label_9788:; return;
label_9789:; return;
label_978C:; return;
label_978F:; return;
label_9791:; return;
label_9794:; return;
label_9796:; return;
label_9798:; return;
label_979B:; return;
label_979D:; return;
label_97A0:; return;
label_97A1:; return;
label_97A2:; return;
label_97A5:; return;
label_97A8:; return;
label_97A9:; return;
label_97AC:; return;
label_97AD:; return;
label_97B0:; return;
label_97B3:; return;
label_97B6:; return;
label_97B8:; return;
label_97BA:; return;
label_97BC:; return;
label_97BF:; return;
label_97C1:; return;
label_97C4:; return;
label_97C5:; return;
label_97C6:; return;
label_97C9:; return;
label_97CB:; return;
label_97CC:; return;
label_97CD:; return;
label_97CF:; return;
label_97D2:; return;
label_97D4:; return;
label_97D6:; return;
label_97D8:; return;
label_97DA:; return;
label_97DC:; return;
label_97DE:; return;
label_97E0:; return;
label_97E3:; return;
label_97E5:; return;
label_97E7:; return;
label_97E8:; return;
label_97E9:; return;
label_97EA:; return;
label_97ED:; return;
label_97F0:; return;
label_97F2:; return;
label_97F5:; return;
label_97F8:; return;
label_97FB:; return;
label_97FC:; return;
label_97FE:; return;
label_9800:; return;
label_9803:; return;
label_9804:; return;
label_9806:; return;
label_9809:; return;
label_980C:; return;
label_980F:; return;
label_9812:; return;
label_9815:; return;
label_9818:; return;
label_981B:; return;
label_981D:; return;
label_981E:; return;
label_9821:; return;
label_9824:; return;
label_9827:; return;
label_9829:; return;
label_982B:; return;
label_982C:; return;
label_982E:; return;
label_982F:; return;
label_9832:; return;
label_9835:; return;
label_9836:; return;
label_9839:; return;
label_983A:; return;
label_983B:; return;
label_983E:; return;
label_983F:; return;
label_9841:; return;
label_9844:; return;
label_9847:; return;
label_984A:; return;
label_984C:; return;
label_984E:; return;
label_984F:; return;
label_9851:; return;
label_9852:; return;
label_9855:; return;
label_9858:; return;
label_9859:; return;
label_985C:; return;
label_985D:; return;
label_985E:; return;
label_9861:; return;
label_9862:; return;
label_9864:; return;
label_9867:; return;
label_986A:; return;
label_986D:; return;
label_9870:; return;
label_9871:; return;
label_9873:; return;
label_9875:; return;
label_9877:; return;
label_9879:; return;
label_987B:; return;
label_987D:; return;
label_987F:; return;
label_9881:; return;
label_9883:; return;
label_9885:; return;
label_9887:; return;
label_9889:; return;
label_988A:; return;
label_988C:; return;
label_988E:; return;
label_9890:; return;
label_9892:; return;
label_9894:; return;
label_9896:; return;
label_9897:; return;
label_9899:; return;
label_989B:; return;
label_989E:; return;
label_98A1:; return;
label_98A2:; return;
label_98A3:; return;
label_98A4:; return;
label_98A5:; return;
label_98A7:; return;
label_98A9:; return;
label_98AB:; return;
label_98AD:; return;
label_98AE:; return;
label_98B0:; return;
label_98B3:; return;
label_98B6:; return;
label_98B7:; return;
label_98B9:; return;
label_98BB:; return;
label_98BD:; return;
label_98BF:; return;
label_98C0:; return;
label_98C2:; return;
label_98C3:; return;
label_98C4:; return;
label_98C5:; return;
label_98C8:; return;
label_98C9:; return;
label_98CC:; return;
label_98CE:; return;
label_98D0:; return;
label_98D2:; return;
label_98D4:; return;
label_98D6:; return;
label_98D8:; return;
label_98DB:; return;
label_98DC:; return;
label_98DF:; return;
label_98E1:; return;
label_98E4:; return;
label_98E7:; return;
label_98E9:; return;
label_98EC:; return;
label_98EE:; return;
label_98F0:; return;
label_98F1:; return;
label_98F4:; return;
label_98F7:; return;
label_98F8:; return;
label_98FB:; return;
label_98FE:; return;
label_9900:; return;
label_9903:; return;
label_9906:; return;
label_9908:; return;
label_990A:; return;
label_990C:; return;
label_990E:; return;
label_990F:; return;
label_9912:; return;
label_9914:; return;
label_9915:; return;
label_9918:; return;
label_991B:; return;
label_991C:; return;
label_991E:; return;
label_9920:; return;
label_9923:; return;
label_9924:; return;
label_9927:; return;
label_9928:; return;
label_9929:; return;
label_992C:; return;
label_992E:; return;
label_9930:; return;
label_9931:; return;
label_9934:; return;
label_9936:; return;
label_9938:; return;
label_993B:; return;
label_993E:; return;
label_993F:; return;
label_9942:; return;
label_9943:; return;
label_9945:; return;
label_9948:; return;
label_994A:; return;
label_994B:; return;
label_994E:; return;
label_9950:; return;
label_9952:; return;
label_9954:; return;
label_9956:; return;
label_9958:; return;
label_9959:; return;
label_995C:; return;
label_995D:; return;
label_9960:; return;
label_9963:; return;
label_9964:; return;
label_9967:; return;
label_9968:; return;
label_996B:; return;
label_996C:; return;
label_996F:; return;
label_9970:; return;
label_9972:; return;
label_9974:; return;
label_9976:; return;
label_9978:; return;
label_997A:; return;
label_997C:; return;
label_997E:; return;
label_9980:; return;
label_9982:; return;
label_9984:; return;
label_9986:; return;
label_9988:; return;
label_998B:; return;
label_998E:; return;
label_998F:; return;
label_9992:; return;
label_9995:; return;
label_9998:; return;
label_999A:; return;
label_999D:; return;
label_99A0:; return;
label_99A2:; return;
label_99A3:; return;
label_99A5:; return;
label_99A7:; return;
label_99A9:; return;
label_99AB:; return;
label_99AD:; return;
label_99AF:; return;
label_99B2:; return;
label_99B4:; return;
label_99B5:; return;
label_99B7:; return;
label_99B9:; return;
label_99BB:; return;
label_99BE:; return;
label_99C1:; return;
label_99C4:; return;
label_99C5:; return;
label_99C7:; return;
label_99C9:; return;
label_99CB:; return;
label_99CD:; return;
label_99CF:; return;
label_99D2:; return;
label_99D4:; return;
label_99D5:; return;
label_99D7:; return;
label_99D9:; return;
label_99DB:; return;
label_99DE:; return;
label_99E1:; return;
label_99E4:; return;
label_99E5:; return;
label_99E7:; return;
label_99E8:; return;
label_99EB:; return;
label_99EE:; return;
label_99F1:; return;
label_99F3:; return;
label_99F4:; return;
label_99F7:; return;
label_99F9:; return;
label_99FA:; return;
label_99FC:; return;
label_99FD:; return;
label_99FF:; return;
label_9A00:; return;
label_9A01:; return;
label_9A04:; return;
label_9A06:; return;
label_9A07:; return;
label_9A09:; return;
label_9A0B:; return;
label_9A0D:; return;
label_9A10:; return;
label_9A12:; return;
label_9A14:; return;
label_9A16:; return;
label_9A18:; return;
label_9A19:; return;
label_9A1A:; return;
label_9A1D:; return;
label_9A20:; return;
label_9A21:; return;
label_9A24:; return;
label_9A26:; return;
label_9A28:; return;
label_9A2A:; return;
label_9A2C:; return;
label_9A2D:; return;
label_9A2E:; return;
label_9A31:; return;
label_9A34:; return;
label_9A35:; return;
label_9A38:; return;
label_9A39:; return;
label_9A3B:; return;
label_9A3D:; return;
label_9A3F:; return;
label_9A41:; return;
label_9A43:; return;
label_9A46:; return;
label_9A47:; return;
label_9A49:; return;
label_9A4A:; return;
label_9A4D:; return;
label_9A4E:; return;
label_9A50:; return;
label_9A53:; return;
label_9A55:; return;
label_9A57:; return;
label_9A59:; return;
label_9A5C:; return;
label_9A5F:; return;
label_9A61:; return;
label_9A63:; return;
label_9A66:; return;
label_9A68:; return;
label_9A6B:; return;
label_9A6E:; return;
label_9A70:; return;
label_9A72:; return;
label_9A74:; return;
label_9A77:; return;
label_9A7A:; return;
label_9A7C:; return;
label_9A7E:; return;
label_9A80:; return;
label_9A83:; return;
label_9A86:; return;
label_9A88:; return;
label_9A8A:; return;
label_9A8D:; return;
label_9A8F:; return;
label_9A92:; return;
label_9A95:; return;
label_9A98:; return;
label_9A9A:; return;
label_9A9D:; return;
label_9A9F:; return;
label_9AA1:; return;
label_9AA4:; return;
label_9AA7:; return;
label_9AAA:; return;
label_9AAC:; return;
label_9AAE:; return;
label_9AB0:; return;
label_9AB2:; return;
label_9AB4:; return;
label_9AB6:; return;
label_9AB8:; return;
label_9ABA:; return;
label_9ABC:; return;
label_9ABE:; return;
label_9AC0:; return;
label_9AC2:; return;
label_9AD7:; return;
label_9AD9:; return;
label_9ADB:; return;
label_9ADD:; return;
label_9AE0:; return;
label_9AE2:; return;
label_9AE4:; return;
label_9AE7:; return;
label_9AE8:; return;
label_9AEA:; return;
label_9AEC:; return;
label_9AEE:; return;
label_9AF1:; return;
label_9AF4:; return;
label_9AF6:; return;
label_9AF9:; return;
label_9AFB:; return;
label_9AFD:; return;
label_9AFF:; return;
label_9B01:; return;
label_9B03:; return;
label_9B05:; return;
label_9B07:; return;
label_9B09:; return;
label_9B0B:; return;
label_9B0D:; return;
label_9B0F:; return;
label_9B11:; return;
label_9B13:; return;
label_9B15:; return;
label_9B17:; return;
label_9B19:; return;
label_9B1C:; return;
label_9B1F:; return;
label_9B21:; return;
label_9B23:; return;
label_9B25:; return;
label_9B26:; return;
label_9B28:; return;
label_9B2A:; return;
label_9B2C:; return;
label_9B2D:; return;
label_9B2F:; return;
label_9B31:; return;
label_9B33:; return;
label_9B34:; return;
label_9B36:; return;
label_9B38:; return;
label_9B3A:; return;
label_9B3C:; return;
label_9B3E:; return;
label_9B40:; return;
label_9B42:; return;
label_9B45:; return;
label_9B48:; return;
label_9B4B:; return;
label_9B4C:; return;
label_9B4E:; return;
label_9B50:; return;
label_9B52:; return;
label_9B54:; return;
label_9B56:; return;
label_9B58:; return;
label_9B5A:; return;
label_9B5D:; return;
label_9B5F:; return;
label_9B61:; return;
label_9B62:; return;
label_9B64:; return;
label_9B66:; return;
label_9B69:; return;
label_9B6B:; return;
label_9B6D:; return;
label_9B6F:; return;
label_9B72:; return;
label_9B74:; return;
label_9B76:; return;
label_9B78:; return;
label_9B7A:; return;
label_9B7C:; return;
label_9B7E:; return;
label_9B80:; return;
label_9B83:; return;
label_9B84:; return;
label_9B86:; return;
label_9B88:; return;
label_9B8A:; return;
label_9B8C:; return;
label_9B8D:; return;
label_9B8F:; return;
label_9B91:; return;
label_9B93:; return;
label_9B95:; return;
label_9B97:; return;
label_9B99:; return;
label_9B9B:; return;
label_9B9D:; return;
label_9B9F:; return;
label_9BA1:; return;
label_9BA2:; return;
label_9BA5:; return;
label_9BA7:; return;
label_9BA9:; return;
label_9BAC:; return;
label_9BAE:; return;
label_9BAF:; return;
label_9BB0:; return;
label_9BB2:; return;
label_9BB4:; return;
label_9BB6:; return;
label_9BB8:; return;
label_9BBA:; return;
label_9BBC:; return;
label_9BBE:; return;
label_9BC0:; return;
label_9BC2:; return;
label_9BC4:; return;
label_9BC6:; return;
label_9BC8:; return;
label_9BCA:; return;
label_9BCD:; return;
label_9BCF:; return;
label_9BD1:; return;
label_9BD3:; return;
label_9BD5:; return;
label_9BD7:; return;
label_9BD9:; return;
label_9BDB:; return;
label_9BDD:; return;
label_9BDF:; return;
label_9BE1:; return;
label_9BE3:; return;
label_9BE5:; return;
label_9BE7:; return;
label_9BE9:; return;
label_9BEB:; return;
label_9BED:; return;
label_9BEF:; return;
label_9BF2:; return;
label_9BF4:; return;
label_9BF6:; return;
label_9BF9:; return;
label_9BFC:; return;
label_9BFE:; return;
label_9C00:; return;
label_9C02:; return;
label_9C04:; return;
label_9C07:; return;
label_9C0A:; return;
label_9C0D:; return;
label_9C0F:; return;
label_9C11:; return;
label_9C14:; return;
label_9C17:; return;
label_9C19:; return;
label_9C1B:; return;
label_9C1D:; return;
label_9C1F:; return;
label_9C21:; return;
label_9C23:; return;
label_9C25:; return;
label_9C27:; return;
label_9C29:; return;
label_9C2A:; return;
label_9C2C:; return;
label_9C2E:; return;
label_9C30:; return;
label_9C32:; return;
label_9C34:; return;
label_9C36:; return;
label_9C38:; return;
label_9C3A:; return;
label_9C3C:; return;
label_9C3E:; return;
label_9C40:; return;
label_9C42:; return;
label_9C44:; return;
label_9C45:; return;
label_9C47:; return;
label_9C49:; return;
label_9C4B:; return;
label_9C4D:; return;
label_9C4F:; return;
label_9C51:; return;
label_9C53:; return;
label_9C54:; return;
label_9C55:; return;
label_9C57:; return;
label_9C59:; return;
label_9C5B:; return;
label_9C5D:; return;
label_9C5E:; return;
label_9C5F:; return;
label_9C61:; return;
label_9C62:; return;
label_9C64:; return;
label_9C65:; return;
label_9C66:; return;
label_9C67:; return;
label_9C68:; return;
label_9C6A:; return;
label_9C6C:; return;
label_9C6D:; return;
label_9C6E:; return;
label_9C6F:; return;
label_9C70:; return;
label_9C72:; return;
label_9C73:; return;
label_9C74:; return;
label_9C77:; return;
label_9C7A:; return;
label_9C7B:; return;
label_9C7E:; return;
label_9C7F:; return;
label_9C81:; return;
label_9C84:; return;
label_9C86:; return;
label_9C89:; return;
label_9C8B:; return;
label_9C8D:; return;
label_9C8F:; return;
label_9C91:; return;
label_9C94:; return;
label_9C95:; return;
label_9C96:; return;
label_9C98:; return;
label_9C9A:; return;
label_9C9C:; return;
label_9C9E:; return;
label_9CA1:; return;
label_9CA3:; return;
label_9CA6:; return;
label_9CA8:; return;
label_9CAA:; return;
label_9CAC:; return;
label_9CAF:; return;
label_9CB0:; return;
label_9CB1:; return;
label_9CB3:; return;
label_9CB5:; return;
label_9CB7:; return;
label_9CBA:; return;
label_9CBC:; return;
label_9CBE:; return;
label_9CC0:; return;
label_9CC3:; return;
label_9CC5:; return;
label_9CC6:; return;
label_9CC9:; return;
label_9CCA:; return;
label_9CCB:; return;
label_9CCD:; return;
label_9CD0:; return;
label_9CD1:; return;
label_9CD2:; return;
label_9CD4:; return;
label_9CD6:; return;
label_9CD8:; return;
label_9CDA:; return;
label_9CDC:; return;
label_9CDE:; return;
label_9CE0:; return;
label_9CE2:; return;
label_9CE5:; return;
label_9CE7:; return;
label_9CE9:; return;
label_9CEB:; return;
label_9CED:; return;
label_9CF0:; return;
label_9CF3:; return;
label_9CF4:; return;
label_9CF5:; return;
label_9CF7:; return;
label_9CF9:; return;
label_9CFA:; return;
label_9CFC:; return;
label_9CFE:; return;
label_9D00:; return;
label_9D02:; return;
label_9D04:; return;
label_9D06:; return;
label_9D09:; return;
label_9D0B:; return;
label_9D0D:; return;
label_9D0E:; return;
label_9D11:; return;
label_9D13:; return;
label_9D16:; return;
label_9D17:; return;
label_9D1A:; return;
label_9D1D:; return;
label_9D1F:; return;
}

void func_8C39_b0(void) { /* SamusHasItem */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C39_b0");
#endif
label_8C39:; /* SamusHasItem */
    /* $8C39: A5 */ nes_cpu_instruction_boundary(0x8C39, 3); g_cpu.A = nes_read(0x05); FLAG_NZ(g_cpu.A);
label_8C3B:;
    /* $8C3B: 20 */ nes_cpu_instruction_boundary(0x8C3B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3D; g_cpu.S--; func_C2C6();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8C3B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8C3E:;
    /* $8C3E: 18 */ nes_cpu_instruction_boundary(0x8C3E, 2); g_cpu.C = 0;
label_8C3F:;
    /* $8C3F: 65 */ nes_cpu_instruction_boundary(0x8C3F, 3); { uint8_t m=nes_read(0x06); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8C41:;
    /* $8C41: 0A */ nes_cpu_instruction_boundary(0x8C41, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8C42:;
    /* $8C42: A8 */ nes_cpu_instruction_boundary(0x8C42, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8C43:;
    /* $8C43: B9 */ nes_cpu_instruction_boundary(0x8C43, 4); g_cpu.A = nes_read((0x902A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8C46:;
    /* $8C46: 85 */ nes_cpu_instruction_boundary(0x8C46, 3); nes_write(0x01, g_cpu.A);
label_8C48:;
    /* $8C48: B9 */ nes_cpu_instruction_boundary(0x8C48, 4); g_cpu.A = nes_read((0x9029 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8C4B:;
    /* $8C4B: 85 */ nes_cpu_instruction_boundary(0x8C4B, 3); nes_write(0x00, g_cpu.A);
label_8C4D:;
    /* $8C4D: AC */ nes_cpu_instruction_boundary(0x8C4D, 4); g_cpu.Y = nes_read(0x6886); FLAG_NZ(g_cpu.Y);
label_8C50:;
    /* $8C50: 99 */ nes_cpu_instruction_boundary(0x8C50, 5); nes_write((0x6887 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8C53:;
    /* $8C53: A5 */ nes_cpu_instruction_boundary(0x8C53, 3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_8C55:;
    /* $8C55: C8 */ nes_cpu_instruction_boundary(0x8C55, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8C56:;
    /* $8C56: 99 */ nes_cpu_instruction_boundary(0x8C56, 5); nes_write((0x6887 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8C59:;
    /* $8C59: C8 */ nes_cpu_instruction_boundary(0x8C59, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8C5A:;
    /* $8C5A: 8C */ nes_cpu_instruction_boundary(0x8C5A, 4); nes_write(0x6886, g_cpu.Y);
label_8C5D:;
    /* $8C5D: 60 */ nes_cpu_instruction_boundary(0x8C5D, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8C0A_b0(void) { /* LoadUniqueItems_processItemBit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C0A_b0");
#endif
label_8C0A:; /* LoadUniqueItems_processItemBit */
    /* $8C0A: A5 */ nes_cpu_instruction_boundary(0x8C0A, 3); g_cpu.A = nes_read(0x08); FLAG_NZ(g_cpu.A);
label_8C0C:;
    /* $8C0C: 6A */ nes_cpu_instruction_boundary(0x8C0C, 2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_8C0D:;
    /* $8C0D: 85 */ nes_cpu_instruction_boundary(0x8C0D, 3); nes_write(0x08, g_cpu.A);
label_8C0F:;
    /* $8C0F: 90 */ nes_cpu_instruction_boundary(0x8C0F, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8C14; }
label_8C11:;
    /* $8C11: 20 */ nes_cpu_instruction_boundary(0x8C11, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x13; g_cpu.S--; func_8C39_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8C11, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8C14:; /* LoadUniqueItems_endIf_A */
    /* $8C14: A4 */ nes_cpu_instruction_boundary(0x8C14, 3); g_cpu.Y = nes_read(0x06); FLAG_NZ(g_cpu.Y);
label_8C16:;
    /* $8C16: C0 */ nes_cpu_instruction_boundary(0x8C16, 2); { int r=g_cpu.Y-0x07; g_cpu.C=(g_cpu.Y>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_8C18:;
    /* $8C18: B0 */ nes_cpu_instruction_boundary(0x8C18, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8C27; }
label_8C1A:;
    /* $8C1A: E6 */ nes_cpu_instruction_boundary(0x8C1A, 5); { uint16_t a=0x06; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C1C:;
    /* $8C1C: E6 */ nes_cpu_instruction_boundary(0x8C1C, 5); { uint16_t a=0x09; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C1E:;
    /* $8C1E: A6 */ nes_cpu_instruction_boundary(0x8C1E, 3); g_cpu.X = nes_read(0x09); FLAG_NZ(g_cpu.X);
label_8C20:;
    /* $8C20: E4 */ nes_cpu_instruction_boundary(0x8C20, 3); { uint8_t m=nes_read(0x07); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8C22:;
    /* $8C22: B0 */ nes_cpu_instruction_boundary(0x8C22, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8C38; }
label_8C24:;
    /* $8C24: 4C */ nes_cpu_instruction_boundary(0x8C24, 3); nes_cpu_instruction_boundary(0x8C0A, 2);
    goto label_8C0A;
label_8C27:; /* LoadUniqueItems_moveToNextByte */
    /* $8C27: A0 */ nes_cpu_instruction_boundary(0x8C27, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_8C29:;
    /* $8C29: 84 */ nes_cpu_instruction_boundary(0x8C29, 3); nes_write(0x06, g_cpu.Y);
label_8C2B:;
    /* $8C2B: E6 */ nes_cpu_instruction_boundary(0x8C2B, 5); { uint16_t a=0x05; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C2D:;
    /* $8C2D: E6 */ nes_cpu_instruction_boundary(0x8C2D, 5); { uint16_t a=0x09; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C2F:;
    /* $8C2F: A6 */ nes_cpu_instruction_boundary(0x8C2F, 3); g_cpu.X = nes_read(0x09); FLAG_NZ(g_cpu.X);
label_8C31:;
    /* $8C31: E4 */ nes_cpu_instruction_boundary(0x8C31, 3); { uint8_t m=nes_read(0x07); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8C33:;
    /* $8C33: B0 */ nes_cpu_instruction_boundary(0x8C33, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8C38; }
label_8C35:;
    /* $8C35: 4C */ nes_cpu_instruction_boundary(0x8C35, 3); nes_cpu_instruction_boundary(0x8C03, 2); func_8C03_b0(); return;
label_8C38:; /* LoadUniqueItems_RTS */
    /* $8C38: 60 */ nes_cpu_instruction_boundary(0x8C38, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8C39:; return;
label_8C3B:; return;
label_8C3E:; return;
label_8C3F:; return;
label_8C41:; return;
label_8C42:; return;
label_8C43:; return;
label_8C46:; return;
label_8C48:; return;
label_8C4B:; return;
label_8C4D:; return;
label_8C50:; return;
label_8C53:; return;
label_8C55:; return;
label_8C56:; return;
label_8C59:; return;
label_8C5A:; return;
label_8C5D:; return;
label_8C5E:; return;
label_8C61:; return;
label_8C64:; return;
label_8C66:; return;
label_8C69:; return;
label_8C6C:; return;
label_8C6E:; return;
label_8C71:; return;
label_8C73:; return;
label_8C75:; return;
label_8C77:; return;
label_8C79:; return;
label_8C7A:; return;
label_8C7C:; return;
label_8C7E:; return;
label_8C81:; return;
label_8C84:; return;
label_8C85:; return;
label_8C87:; return;
label_8C8A:; return;
label_8C8D:; return;
label_8C8F:; return;
label_8C91:; return;
label_8C93:; return;
label_8C96:; return;
label_8C99:; return;
label_8C9B:; return;
label_8C9E:; return;
label_8CA0:; return;
label_8CA2:; return;
label_8CA5:; return;
label_8CA7:; return;
label_8CA9:; return;
label_8CAC:; return;
label_8CAF:; return;
label_8CB2:; return;
label_8CB5:; return;
label_8CB8:; return;
label_8CBA:; return;
label_8CBC:; return;
label_8CBF:; return;
label_8CC1:; return;
label_8CC3:; return;
label_8CC5:; return;
label_8CC7:; return;
label_8CC9:; return;
label_8CCC:; return;
label_8CCE:; return;
label_8CD0:; return;
label_8CD2:; return;
label_8CD4:; return;
label_8CD6:; return;
label_8CD9:; return;
label_8CDB:; return;
label_8CDD:; return;
label_8CDF:; return;
label_8CE1:; return;
label_8CE3:; return;
label_8CE6:; return;
label_8CE8:; return;
label_8CEA:; return;
label_8CEC:; return;
label_8CEE:; return;
label_8CF0:; return;
label_8CF2:; return;
label_8CF5:; return;
label_8CF7:; return;
label_8CFA:; return;
label_8CFD:; return;
label_8CFE:; return;
label_8D00:; return;
label_8D03:; return;
label_8D05:; return;
label_8D07:; return;
label_8D09:; return;
label_8D0C:; return;
label_8D0F:; return;
label_8D12:; return;
label_8D15:; return;
label_8D17:; return;
label_8D1A:; return;
label_8D1D:; return;
label_8D1F:; return;
label_8D22:; return;
label_8D24:; return;
label_8D26:; return;
label_8D27:; return;
label_8D2A:; return;
label_8D2D:; return;
label_8D2F:; return;
label_8D31:; return;
label_8D33:; return;
label_8D36:; return;
label_8D39:; return;
label_8D3A:; return;
label_8D3C:; return;
label_8D3D:; return;
label_8D40:; return;
label_8D43:; return;
label_8D46:; return;
label_8D49:; return;
label_8D4B:; return;
label_8D4D:; return;
label_8D4F:; return;
label_8D52:; return;
label_8D54:; return;
label_8D56:; return;
label_8D58:; return;
label_8D5A:; return;
label_8D5C:; return;
label_8D5F:; return;
label_8D61:; return;
label_8D63:; return;
label_8D65:; return;
label_8D67:; return;
label_8D69:; return;
label_8D6B:; return;
label_8D6E:; return;
label_8D71:; return;
label_8D73:; return;
label_8D75:; return;
label_8D77:; return;
label_8D79:; return;
label_8D7B:; return;
label_8D7E:; return;
label_8D80:; return;
label_8D82:; return;
label_8D84:; return;
label_8D86:; return;
label_8D88:; return;
label_8D8A:; return;
label_8D8D:; return;
label_8D8F:; return;
label_8D91:; return;
label_8D93:; return;
label_8D95:; return;
label_8D98:; return;
label_8D9A:; return;
label_8D9C:; return;
label_8D9E:; return;
label_8DA0:; return;
label_8DA3:; return;
label_8DA5:; return;
label_8DA7:; return;
label_8DA9:; return;
label_8DAA:; return;
label_8DAB:; return;
label_8DAD:; return;
label_8DAF:; return;
label_8DB1:; return;
label_8DB3:; return;
label_8DB5:; return;
label_8DB7:; return;
label_8DBA:; return;
label_8DBC:; return;
label_8DBE:; return;
label_8DC0:; return;
label_8DC1:; return;
label_8DC3:; return;
label_8DC4:; return;
label_8DC6:; return;
label_8DC9:; return;
label_8DCB:; return;
label_8DCD:; return;
label_8DCF:; return;
label_8DD2:; return;
label_8DD4:; return;
label_8DD6:; return;
label_8DD8:; return;
label_8DDA:; return;
label_8DDD:; return;
label_8DDE:; return;
label_8DE1:; return;
label_8DE3:; return;
label_8DE5:; return;
label_8DE8:; return;
label_8DEB:; return;
label_8DED:; return;
label_8DEE:; return;
label_8DF0:; return;
label_8DF2:; return;
label_8DF5:; return;
label_8DF7:; return;
label_8DFA:; return;
label_8DFD:; return;
label_8E00:; return;
label_8E02:; return;
label_8E03:; return;
label_8E05:; return;
label_8E06:; return;
label_8E07:; return;
label_8E09:; return;
label_8E0C:; return;
label_8E0F:; return;
label_8E10:; return;
label_8E13:; return;
label_8E14:; return;
label_8E15:; return;
label_8E16:; return;
label_8E17:; return;
label_8E1A:; return;
label_8E1D:; return;
label_8E20:; return;
label_8E21:; return;
label_8E23:; return;
label_8E25:; return;
label_8E26:; return;
label_8E29:; return;
label_8E2A:; return;
label_8E2C:; return;
label_8E2D:; return;
label_8E30:; return;
label_8E32:; return;
label_8E35:; return;
label_8E37:; return;
label_8E39:; return;
label_8E3B:; return;
label_8E3E:; return;
label_8E3F:; return;
label_8E40:; return;
label_8E42:; return;
label_8E44:; return;
label_8E46:; return;
label_8E49:; return;
label_8E4B:; return;
label_8E4D:; return;
label_8E4E:; return;
label_8E51:; return;
label_8E53:; return;
label_8E56:; return;
label_8E58:; return;
label_8E5A:; return;
label_8E5D:; return;
label_8E5E:; return;
label_8E60:; return;
label_8E62:; return;
label_8E64:; return;
label_8E67:; return;
label_8E69:; return;
label_8E6B:; return;
label_8E6C:; return;
label_8E6E:; return;
label_8E71:; return;
label_8E74:; return;
label_8E76:; return;
label_8E79:; return;
label_8E7C:; return;
label_8E7E:; return;
label_8E81:; return;
label_8E84:; return;
label_8E86:; return;
label_8E89:; return;
label_8E8C:; return;
label_8E8E:; return;
label_8E91:; return;
label_8E94:; return;
label_8E96:; return;
label_8E99:; return;
label_8E9C:; return;
label_8E9E:; return;
label_8EA1:; return;
label_8EA4:; return;
label_8EA6:; return;
label_8EA9:; return;
label_8EAC:; return;
label_8EAE:; return;
label_8EB1:; return;
label_8EB4:; return;
label_8EB6:; return;
label_8EB9:; return;
label_8EBC:; return;
label_8EBE:; return;
label_8EC1:; return;
label_8EC4:; return;
label_8EC6:; return;
label_8EC9:; return;
label_8ECC:; return;
label_8ECE:; return;
label_8ED1:; return;
label_8ED4:; return;
label_8ED6:; return;
label_8ED9:; return;
label_8EDC:; return;
label_8EDE:; return;
label_8EE1:; return;
label_8EE4:; return;
label_8EE6:; return;
label_8EE9:; return;
label_8EEC:; return;
label_8EEE:; return;
label_8EF1:; return;
label_8EF4:; return;
label_8EF6:; return;
label_8EF9:; return;
label_8EFC:; return;
label_8EFE:; return;
label_8F01:; return;
label_8F04:; return;
label_8F06:; return;
label_8F09:; return;
label_8F0C:; return;
label_8F0E:; return;
label_8F11:; return;
label_8F14:; return;
label_8F16:; return;
label_8F19:; return;
label_8F1C:; return;
label_8F1E:; return;
label_8F21:; return;
label_8F24:; return;
label_8F26:; return;
label_8F29:; return;
label_8F2C:; return;
label_8F2D:; return;
label_8F30:; return;
label_8F31:; return;
label_8F32:; return;
label_8F33:; return;
label_8F36:; return;
label_8F38:; return;
label_8F3B:; return;
label_8F3D:; return;
label_8F40:; return;
label_8F43:; return;
label_8F45:; return;
label_8F46:; return;
label_8F49:; return;
label_8F4B:; return;
label_8F4C:; return;
label_8F4D:; return;
label_8F4F:; return;
label_8F52:; return;
label_8F53:; return;
label_8F54:; return;
label_8F55:; return;
label_8F57:; return;
label_8F59:; return;
label_8F5A:; return;
label_8F5D:; return;
label_8F5F:; return;
label_8F60:; return;
label_8F62:; return;
label_8F65:; return;
label_8F68:; return;
label_8F6A:; return;
label_8F6D:; return;
label_8F70:; return;
label_8F72:; return;
label_8F75:; return;
label_8F78:; return;
label_8F7A:; return;
label_8F7D:; return;
label_8F80:; return;
label_8F82:; return;
label_8F85:; return;
label_8F88:; return;
label_8F8A:; return;
label_8F8D:; return;
label_8F90:; return;
label_8F92:; return;
label_8F95:; return;
label_8F98:; return;
label_8F9A:; return;
label_8F9D:; return;
label_8FA0:; return;
label_8FA2:; return;
label_8FA5:; return;
label_8FA8:; return;
label_8FAA:; return;
label_8FAD:; return;
label_8FB0:; return;
label_8FB2:; return;
label_8FB5:; return;
label_8FB8:; return;
label_8FBA:; return;
label_8FBD:; return;
label_8FC0:; return;
label_8FC2:; return;
label_8FC5:; return;
label_8FC8:; return;
label_8FCA:; return;
label_8FCD:; return;
label_8FD0:; return;
label_8FD2:; return;
label_8FD5:; return;
label_8FD8:; return;
label_8FDA:; return;
label_8FDD:; return;
label_8FE0:; return;
label_8FE2:; return;
label_8FE5:; return;
label_8FE8:; return;
label_8FEA:; return;
label_8FED:; return;
label_8FF0:; return;
label_8FF1:; return;
label_8FF4:; return;
label_8FF5:; return;
label_8FF6:; return;
label_8FF8:; return;
label_8FFB:; return;
label_8FFE:; return;
label_9000:; return;
label_9001:; return;
label_9004:; return;
label_9007:; return;
label_9009:; return;
label_900C:; return;
label_900D:; return;
label_900E:; return;
label_9010:; return;
label_9011:; return;
label_9014:; return;
label_9015:; return;
label_9016:; return;
label_9017:; return;
label_9019:; return;
label_901B:; return;
label_901E:; return;
label_9020:; return;
label_9021:; return;
label_9023:; return;
label_9025:; return;
label_9027:; return;
label_9028:; return;
label_902A:; return;
label_902C:; return;
label_902E:; return;
label_902F:; return;
label_9031:; return;
label_9033:; return;
label_9035:; return;
label_9037:; return;
label_9039:; return;
label_903B:; return;
label_903D:; return;
label_903F:; return;
label_9041:; return;
label_9044:; return;
label_9046:; return;
label_9048:; return;
label_904A:; return;
label_904C:; return;
label_904E:; return;
label_9050:; return;
label_9052:; return;
label_9054:; return;
label_9056:; return;
label_9058:; return;
label_905A:; return;
label_905C:; return;
label_905E:; return;
label_9061:; return;
label_9063:; return;
label_9065:; return;
label_9067:; return;
label_9069:; return;
label_906B:; return;
label_906D:; return;
label_906F:; return;
label_9071:; return;
label_9073:; return;
label_9074:; return;
label_9075:; return;
label_9078:; return;
label_907A:; return;
label_907C:; return;
label_907E:; return;
label_9080:; return;
label_9082:; return;
label_9083:; return;
label_9086:; return;
label_9088:; return;
label_9089:; return;
label_908C:; return;
label_908E:; return;
label_908F:; return;
label_9091:; return;
label_9093:; return;
label_9094:; return;
label_9097:; return;
label_9098:; return;
label_909A:; return;
label_909B:; return;
label_909C:; return;
label_909F:; return;
label_90A2:; return;
label_90A5:; return;
label_90A8:; return;
label_90AA:; return;
label_90AC:; return;
label_90AE:; return;
label_90B0:; return;
label_90B2:; return;
label_90B4:; return;
label_90B7:; return;
label_90BA:; return;
label_90BD:; return;
label_90BF:; return;
label_90C1:; return;
label_90C4:; return;
label_90C6:; return;
label_90C9:; return;
label_90CB:; return;
label_90CD:; return;
label_90CF:; return;
label_90D1:; return;
label_90D4:; return;
label_90D7:; return;
label_90D9:; return;
label_90DB:; return;
label_90DD:; return;
label_90DF:; return;
label_90E2:; return;
label_90E4:; return;
label_90E7:; return;
label_90E9:; return;
label_90EB:; return;
label_90ED:; return;
label_90EF:; return;
label_90F2:; return;
label_90F4:; return;
label_90F7:; return;
label_90FA:; return;
label_90FC:; return;
label_90FF:; return;
label_9102:; return;
label_9105:; return;
label_9108:; return;
label_910A:; return;
label_910D:; return;
label_910F:; return;
label_9112:; return;
label_9114:; return;
label_9117:; return;
label_9118:; return;
label_9119:; return;
label_911A:; return;
label_911D:; return;
label_911F:; return;
label_9121:; return;
label_9124:; return;
label_9127:; return;
label_912A:; return;
label_912C:; return;
label_912E:; return;
label_9130:; return;
label_9133:; return;
label_9136:; return;
label_9138:; return;
label_913A:; return;
label_913D:; return;
label_913F:; return;
label_9142:; return;
label_9144:; return;
label_9147:; return;
label_914A:; return;
label_914C:; return;
label_914E:; return;
label_9150:; return;
label_9153:; return;
label_9155:; return;
label_9157:; return;
label_915A:; return;
label_915C:; return;
label_915F:; return;
label_9161:; return;
label_9164:; return;
label_9166:; return;
label_9169:; return;
label_916B:; return;
label_916D:; return;
label_916F:; return;
label_9171:; return;
label_9173:; return;
label_9175:; return;
label_9178:; return;
label_917A:; return;
label_917C:; return;
label_917E:; return;
label_9180:; return;
label_9182:; return;
label_9184:; return;
label_9187:; return;
label_9188:; return;
label_918A:; return;
label_918C:; return;
label_918E:; return;
label_9190:; return;
label_9193:; return;
label_9196:; return;
label_9198:; return;
label_919B:; return;
label_919E:; return;
label_91A0:; return;
label_91A2:; return;
label_91A3:; return;
label_91A5:; return;
label_91A8:; return;
label_91AA:; return;
label_91AC:; return;
label_91AD:; return;
label_91AF:; return;
label_91B2:; return;
label_91B4:; return;
label_91B6:; return;
label_91B7:; return;
label_91B9:; return;
label_91BC:; return;
label_91BD:; return;
label_91BF:; return;
label_91C1:; return;
label_91C4:; return;
label_91C5:; return;
label_91C6:; return;
label_91C9:; return;
label_91CB:; return;
label_91CE:; return;
label_91D0:; return;
label_91D3:; return;
label_91D5:; return;
label_91D6:; return;
label_91D9:; return;
label_91DB:; return;
label_91DE:; return;
label_91E0:; return;
label_91E2:; return;
label_91E5:; return;
label_91E8:; return;
label_91E9:; return;
label_91EC:; return;
label_91EF:; return;
label_91F0:; return;
label_91F2:; return;
label_91F4:; return;
label_91F6:; return;
label_91F8:; return;
label_91FB:; return;
label_91FD:; return;
label_91FF:; return;
label_9201:; return;
label_9204:; return;
label_9205:; return;
label_9207:; return;
label_9209:; return;
label_920B:; return;
label_920E:; return;
label_9211:; return;
label_9213:; return;
label_9215:; return;
label_9217:; return;
label_9219:; return;
label_921C:; return;
label_921E:; return;
label_9220:; return;
label_9222:; return;
label_9225:; return;
label_9227:; return;
label_922A:; return;
label_922C:; return;
label_922F:; return;
label_9232:; return;
label_9234:; return;
label_9236:; return;
label_9238:; return;
label_9239:; return;
label_923C:; return;
label_923F:; return;
label_9242:; return;
label_9245:; return;
label_9247:; return;
label_9249:; return;
label_924B:; return;
label_924C:; return;
label_924F:; return;
label_9251:; return;
label_9254:; return;
label_9255:; return;
label_9256:; return;
label_9258:; return;
label_9259:; return;
label_925B:; return;
label_925D:; return;
label_925E:; return;
label_9260:; return;
label_9262:; return;
label_9264:; return;
label_9267:; return;
label_9269:; return;
label_926C:; return;
label_926D:; return;
label_926F:; return;
label_9270:; return;
label_9272:; return;
label_9273:; return;
label_9275:; return;
label_9277:; return;
label_927A:; return;
label_927C:; return;
label_927F:; return;
label_9280:; return;
label_9282:; return;
label_9283:; return;
label_9285:; return;
label_9287:; return;
label_9289:; return;
label_928C:; return;
label_928D:; return;
label_928F:; return;
label_9290:; return;
label_9292:; return;
label_9294:; return;
label_9297:; return;
label_9299:; return;
label_929B:; return;
label_929D:; return;
label_92A0:; return;
label_92A3:; return;
label_92A5:; return;
label_92A8:; return;
label_92AA:; return;
label_92AD:; return;
label_92B0:; return;
label_92B3:; return;
label_92B4:; return;
label_92B6:; return;
label_92B8:; return;
label_92BA:; return;
label_92BC:; return;
label_92BE:; return;
label_92C0:; return;
label_92C2:; return;
label_92C4:; return;
label_92C6:; return;
label_92C8:; return;
label_92C9:; return;
label_92CB:; return;
label_92CC:; return;
label_92CD:; return;
label_92CF:; return;
label_92D0:; return;
label_92D2:; return;
label_92D4:; return;
label_92D7:; return;
label_92DA:; return;
label_92DD:; return;
label_92DF:; return;
label_92E1:; return;
label_92E3:; return;
label_92E5:; return;
label_92E8:; return;
label_92EB:; return;
label_92ED:; return;
label_92F0:; return;
label_92F2:; return;
label_92F4:; return;
label_92F6:; return;
label_92F8:; return;
label_92F9:; return;
label_92FC:; return;
label_92FF:; return;
label_9302:; return;
label_9305:; return;
label_9308:; return;
label_930A:; return;
label_930D:; return;
label_930F:; return;
label_9311:; return;
label_9314:; return;
label_9317:; return;
label_931A:; return;
label_931C:; return;
label_931E:; return;
label_931F:; return;
label_9322:; return;
label_9324:; return;
label_9325:; return;
label_9327:; return;
label_932A:; return;
label_932D:; return;
label_9330:; return;
label_9333:; return;
label_9336:; return;
label_9339:; return;
label_933C:; return;
label_933F:; return;
label_9342:; return;
label_9345:; return;
label_9348:; return;
label_934B:; return;
label_934E:; return;
label_9351:; return;
label_9354:; return;
label_9356:; return;
label_9358:; return;
label_9359:; return;
label_935B:; return;
label_935D:; return;
label_9360:; return;
label_9362:; return;
label_9364:; return;
label_9367:; return;
label_936A:; return;
label_936D:; return;
label_9370:; return;
label_9373:; return;
label_9376:; return;
label_9378:; return;
label_937A:; return;
label_937C:; return;
label_937F:; return;
label_9381:; return;
label_9383:; return;
label_9384:; return;
label_9387:; return;
label_938A:; return;
label_938D:; return;
label_938E:; return;
label_938F:; return;
label_9391:; return;
label_9392:; return;
label_9394:; return;
label_9396:; return;
label_9398:; return;
label_939A:; return;
label_939D:; return;
label_939E:; return;
label_93A1:; return;
label_93A3:; return;
label_93A5:; return;
label_93A8:; return;
label_93AB:; return;
label_93AE:; return;
label_93B0:; return;
label_93B2:; return;
label_93B4:; return;
label_93B6:; return;
label_93B9:; return;
label_93BB:; return;
label_93BD:; return;
label_93BE:; return;
label_93C0:; return;
label_93C3:; return;
label_93C6:; return;
label_93C9:; return;
label_93CB:; return;
label_93CE:; return;
label_93D0:; return;
label_93D2:; return;
label_93D5:; return;
label_93D7:; return;
label_93DA:; return;
label_93DC:; return;
label_93DE:; return;
label_93E1:; return;
label_93E3:; return;
label_93E6:; return;
label_93E8:; return;
label_93EA:; return;
label_93ED:; return;
label_93EF:; return;
label_93F2:; return;
label_93F4:; return;
label_93F6:; return;
label_93F9:; return;
label_93FB:; return;
label_93FE:; return;
label_9400:; return;
label_9403:; return;
label_9406:; return;
label_9407:; return;
label_9408:; return;
label_940A:; return;
label_940B:; return;
label_940E:; return;
label_9410:; return;
label_9411:; return;
label_9413:; return;
label_9415:; return;
label_9416:; return;
label_9417:; return;
label_941A:; return;
label_941D:; return;
label_9420:; return;
label_9423:; return;
label_9425:; return;
label_9428:; return;
label_942B:; return;
label_942D:; return;
label_9430:; return;
label_9431:; return;
label_9432:; return;
label_9434:; return;
label_9436:; return;
label_9438:; return;
label_943A:; return;
label_943C:; return;
label_943E:; return;
label_943F:; return;
label_9441:; return;
label_9442:; return;
label_9444:; return;
label_9446:; return;
label_9448:; return;
label_944A:; return;
label_944B:; return;
label_944D:; return;
label_9450:; return;
label_9452:; return;
label_9454:; return;
label_9456:; return;
label_9458:; return;
label_945A:; return;
label_945C:; return;
label_945F:; return;
label_9462:; return;
label_9464:; return;
label_9467:; return;
label_9469:; return;
label_946B:; return;
label_946C:; return;
label_946E:; return;
label_9470:; return;
label_9471:; return;
label_9472:; return;
label_9473:; return;
label_9474:; return;
label_9477:; return;
label_9479:; return;
label_947B:; return;
label_947E:; return;
label_947F:; return;
label_9480:; return;
label_9482:; return;
label_9484:; return;
label_9487:; return;
label_9489:; return;
label_948C:; return;
label_948E:; return;
label_948F:; return;
label_9490:; return;
label_9491:; return;
label_9494:; return;
label_9495:; return;
label_9498:; return;
label_949A:; return;
label_949D:; return;
label_949F:; return;
label_94A2:; return;
label_94A4:; return;
label_94A7:; return;
label_94A9:; return;
label_94AC:; return;
label_94AD:; return;
label_94AE:; return;
label_94AF:; return;
label_94B0:; return;
label_94B1:; return;
label_94B4:; return;
label_94B5:; return;
label_94B8:; return;
label_94BA:; return;
label_94BD:; return;
label_94BF:; return;
label_94C2:; return;
label_94C4:; return;
label_94C7:; return;
label_94C9:; return;
label_94CC:; return;
label_94CF:; return;
label_94D0:; return;
label_94D1:; return;
label_94D2:; return;
label_94D3:; return;
label_94D4:; return;
label_94D7:; return;
label_94D8:; return;
label_94D9:; return;
label_94DA:; return;
label_94DC:; return;
label_94DE:; return;
label_94E0:; return;
label_94E2:; return;
label_94E3:; return;
label_94E5:; return;
label_94E7:; return;
label_94E9:; return;
label_94EB:; return;
label_94ED:; return;
label_94EF:; return;
label_94F1:; return;
label_94F3:; return;
label_94F5:; return;
label_94F7:; return;
label_94F9:; return;
label_94FB:; return;
label_94FD:; return;
label_94FF:; return;
label_9501:; return;
label_9502:; return;
label_9504:; return;
label_9506:; return;
label_9508:; return;
label_950A:; return;
label_950C:; return;
label_950E:; return;
label_950F:; return;
label_9511:; return;
label_9513:; return;
label_9515:; return;
label_9517:; return;
label_9519:; return;
label_951B:; return;
label_951E:; return;
label_9520:; return;
label_9522:; return;
label_9524:; return;
label_9527:; return;
label_9529:; return;
label_952B:; return;
label_952C:; return;
label_952F:; return;
label_9532:; return;
label_9533:; return;
label_9534:; return;
label_9535:; return;
label_9536:; return;
label_9537:; return;
label_9538:; return;
label_953B:; return;
label_953E:; return;
label_9541:; return;
label_9544:; return;
label_9547:; return;
label_954A:; return;
label_954B:; return;
label_954C:; return;
label_954D:; return;
label_954E:; return;
label_954F:; return;
label_9550:; return;
label_9551:; return;
label_9552:; return;
label_9553:; return;
label_9554:; return;
label_9555:; return;
label_9556:; return;
label_9557:; return;
label_9558:; return;
label_9559:; return;
label_955A:; return;
label_955B:; return;
label_955C:; return;
label_955D:; return;
label_955E:; return;
label_955F:; return;
label_9560:; return;
label_9562:; return;
label_9563:; return;
label_9565:; return;
label_9567:; return;
label_9569:; return;
label_956B:; return;
label_956D:; return;
label_956F:; return;
label_9571:; return;
label_9573:; return;
label_9575:; return;
label_9577:; return;
label_9579:; return;
label_957B:; return;
label_957D:; return;
label_957F:; return;
label_9581:; return;
label_9583:; return;
label_9585:; return;
label_9587:; return;
label_9588:; return;
label_958B:; return;
label_958C:; return;
label_958D:; return;
label_9590:; return;
label_9591:; return;
label_9594:; return;
label_9597:; return;
label_959A:; return;
label_959C:; return;
label_959E:; return;
label_95A0:; return;
label_95A3:; return;
label_95A5:; return;
label_95A8:; return;
label_95A9:; return;
label_95AA:; return;
label_95AD:; return;
label_95B0:; return;
label_95B1:; return;
label_95B4:; return;
label_95B5:; return;
label_95B8:; return;
label_95BA:; return;
label_95BC:; return;
label_95BE:; return;
label_95C0:; return;
label_95C2:; return;
label_95C4:; return;
label_95C7:; return;
label_95C9:; return;
label_95CC:; return;
label_95CD:; return;
label_95CE:; return;
label_95D1:; return;
label_95D4:; return;
label_95D5:; return;
label_95D8:; return;
label_95D9:; return;
label_95DC:; return;
label_95DE:; return;
label_95E1:; return;
label_95E4:; return;
label_95E6:; return;
label_95E8:; return;
label_95EB:; return;
label_95ED:; return;
label_95F0:; return;
label_95F1:; return;
label_95F2:; return;
label_95F5:; return;
label_95F8:; return;
label_95F9:; return;
label_95FC:; return;
label_95FD:; return;
label_9600:; return;
label_9602:; return;
label_9604:; return;
label_9606:; return;
label_9608:; return;
label_960A:; return;
label_960C:; return;
label_960F:; return;
label_9611:; return;
label_9614:; return;
label_9615:; return;
label_9616:; return;
label_9619:; return;
label_961C:; return;
label_961D:; return;
label_9620:; return;
label_9621:; return;
label_9624:; return;
label_9625:; return;
label_9628:; return;
label_9629:; return;
label_962C:; return;
label_962E:; return;
label_9630:; return;
label_9633:; return;
label_9635:; return;
label_9638:; return;
label_9639:; return;
label_963A:; return;
label_963D:; return;
label_9640:; return;
label_9641:; return;
label_9644:; return;
label_9645:; return;
label_9648:; return;
label_964B:; return;
label_964E:; return;
label_9650:; return;
label_9652:; return;
label_9654:; return;
label_9657:; return;
label_9659:; return;
label_965C:; return;
label_965D:; return;
label_965E:; return;
label_9661:; return;
label_9664:; return;
label_9665:; return;
label_9668:; return;
label_9669:; return;
label_966C:; return;
label_966F:; return;
label_9671:; return;
label_9674:; return;
label_9676:; return;
label_9678:; return;
label_967B:; return;
label_967D:; return;
label_9680:; return;
label_9681:; return;
label_9682:; return;
label_9685:; return;
label_9688:; return;
label_9689:; return;
label_968C:; return;
label_968D:; return;
label_9690:; return;
label_9692:; return;
label_9693:; return;
label_9694:; return;
label_9696:; return;
label_9698:; return;
label_969A:; return;
label_969C:; return;
label_969F:; return;
label_96A1:; return;
label_96A4:; return;
label_96A5:; return;
label_96A6:; return;
label_96A9:; return;
label_96AC:; return;
label_96AD:; return;
label_96B0:; return;
label_96B1:; return;
label_96B4:; return;
label_96B6:; return;
label_96B7:; return;
label_96B9:; return;
label_96BC:; return;
label_96BE:; return;
label_96C0:; return;
label_96C3:; return;
label_96C5:; return;
label_96C8:; return;
label_96C9:; return;
label_96CA:; return;
label_96CD:; return;
label_96D0:; return;
label_96D1:; return;
label_96D4:; return;
label_96D5:; return;
label_96D8:; return;
label_96D9:; return;
label_96DC:; return;
label_96DD:; return;
label_96E0:; return;
label_96E2:; return;
label_96E4:; return;
label_96E7:; return;
label_96E9:; return;
label_96EC:; return;
label_96ED:; return;
label_96EE:; return;
label_96F1:; return;
label_96F4:; return;
label_96F5:; return;
label_96F8:; return;
label_96F9:; return;
label_96FC:; return;
label_96FD:; return;
label_9700:; return;
label_9701:; return;
label_9704:; return;
label_9706:; return;
label_9708:; return;
label_970B:; return;
label_970D:; return;
label_9710:; return;
label_9711:; return;
label_9712:; return;
label_9715:; return;
label_9718:; return;
label_9719:; return;
label_971C:; return;
label_971D:; return;
label_9720:; return;
label_9722:; return;
label_9724:; return;
label_9726:; return;
label_9728:; return;
label_972A:; return;
label_972C:; return;
label_972F:; return;
label_9731:; return;
label_9734:; return;
label_9735:; return;
label_9736:; return;
label_9739:; return;
label_973C:; return;
label_973D:; return;
label_9740:; return;
label_9742:; return;
label_9744:; return;
label_9746:; return;
label_9748:; return;
label_974A:; return;
label_974C:; return;
label_974E:; return;
label_974F:; return;
label_9751:; return;
label_9754:; return;
label_9757:; return;
label_9759:; return;
label_975A:; return;
label_975D:; return;
label_9760:; return;
label_9761:; return;
label_9764:; return;
label_9765:; return;
label_9768:; return;
label_976A:; return;
label_976B:; return;
label_976C:; return;
label_976E:; return;
label_9770:; return;
label_9772:; return;
label_9774:; return;
label_9777:; return;
label_9779:; return;
label_977C:; return;
label_977D:; return;
label_977E:; return;
label_9781:; return;
label_9784:; return;
label_9785:; return;
label_9788:; return;
label_9789:; return;
label_978C:; return;
label_978F:; return;
label_9791:; return;
label_9794:; return;
label_9796:; return;
label_9798:; return;
label_979B:; return;
label_979D:; return;
label_97A0:; return;
label_97A1:; return;
label_97A2:; return;
label_97A5:; return;
label_97A8:; return;
label_97A9:; return;
label_97AC:; return;
label_97AD:; return;
label_97B0:; return;
label_97B3:; return;
label_97B6:; return;
label_97B8:; return;
label_97BA:; return;
label_97BC:; return;
label_97BF:; return;
label_97C1:; return;
label_97C4:; return;
label_97C5:; return;
label_97C6:; return;
label_97C9:; return;
label_97CB:; return;
label_97CC:; return;
label_97CD:; return;
label_97CF:; return;
label_97D2:; return;
label_97D4:; return;
label_97D6:; return;
label_97D8:; return;
label_97DA:; return;
label_97DC:; return;
label_97DE:; return;
label_97E0:; return;
label_97E3:; return;
label_97E5:; return;
label_97E7:; return;
label_97E8:; return;
label_97E9:; return;
label_97EA:; return;
label_97ED:; return;
label_97F0:; return;
label_97F2:; return;
label_97F5:; return;
label_97F8:; return;
label_97FB:; return;
label_97FC:; return;
label_97FE:; return;
label_9800:; return;
label_9803:; return;
label_9804:; return;
label_9806:; return;
label_9809:; return;
label_980C:; return;
label_980F:; return;
label_9812:; return;
label_9815:; return;
label_9818:; return;
label_981B:; return;
label_981D:; return;
label_981E:; return;
label_9821:; return;
label_9824:; return;
label_9827:; return;
label_9829:; return;
label_982B:; return;
label_982C:; return;
label_982E:; return;
label_982F:; return;
label_9832:; return;
label_9835:; return;
label_9836:; return;
label_9839:; return;
label_983A:; return;
label_983B:; return;
label_983E:; return;
label_983F:; return;
label_9841:; return;
label_9844:; return;
label_9847:; return;
label_984A:; return;
label_984C:; return;
label_984E:; return;
label_984F:; return;
label_9851:; return;
label_9852:; return;
label_9855:; return;
label_9858:; return;
label_9859:; return;
label_985C:; return;
label_985D:; return;
label_985E:; return;
label_9861:; return;
label_9862:; return;
label_9864:; return;
label_9867:; return;
label_986A:; return;
label_986D:; return;
label_9870:; return;
label_9871:; return;
label_9873:; return;
label_9875:; return;
label_9877:; return;
label_9879:; return;
label_987B:; return;
label_987D:; return;
label_987F:; return;
label_9881:; return;
label_9883:; return;
label_9885:; return;
label_9887:; return;
label_9889:; return;
label_988A:; return;
label_988C:; return;
label_988E:; return;
label_9890:; return;
label_9892:; return;
label_9894:; return;
label_9896:; return;
label_9897:; return;
label_9899:; return;
label_989B:; return;
label_989E:; return;
label_98A1:; return;
label_98A2:; return;
label_98A3:; return;
label_98A4:; return;
label_98A5:; return;
label_98A7:; return;
label_98A9:; return;
label_98AB:; return;
label_98AD:; return;
label_98AE:; return;
label_98B0:; return;
label_98B3:; return;
label_98B6:; return;
label_98B7:; return;
label_98B9:; return;
label_98BB:; return;
label_98BD:; return;
label_98BF:; return;
label_98C0:; return;
label_98C2:; return;
label_98C3:; return;
label_98C4:; return;
label_98C5:; return;
label_98C8:; return;
label_98C9:; return;
label_98CC:; return;
label_98CE:; return;
label_98D0:; return;
label_98D2:; return;
label_98D4:; return;
label_98D6:; return;
label_98D8:; return;
label_98DB:; return;
label_98DC:; return;
label_98DF:; return;
label_98E1:; return;
label_98E4:; return;
label_98E7:; return;
label_98E9:; return;
label_98EC:; return;
label_98EE:; return;
label_98F0:; return;
label_98F1:; return;
label_98F4:; return;
label_98F7:; return;
label_98F8:; return;
label_98FB:; return;
label_98FE:; return;
label_9900:; return;
label_9903:; return;
label_9906:; return;
label_9908:; return;
label_990A:; return;
label_990C:; return;
label_990E:; return;
label_990F:; return;
label_9912:; return;
label_9914:; return;
label_9915:; return;
label_9918:; return;
label_991B:; return;
label_991C:; return;
label_991E:; return;
label_9920:; return;
label_9923:; return;
label_9924:; return;
label_9927:; return;
label_9928:; return;
label_9929:; return;
label_992C:; return;
label_992E:; return;
label_9930:; return;
label_9931:; return;
label_9934:; return;
label_9936:; return;
label_9938:; return;
label_993B:; return;
label_993E:; return;
label_993F:; return;
label_9942:; return;
label_9943:; return;
label_9945:; return;
label_9948:; return;
label_994A:; return;
label_994B:; return;
label_994E:; return;
label_9950:; return;
label_9952:; return;
label_9954:; return;
label_9956:; return;
label_9958:; return;
label_9959:; return;
label_995C:; return;
label_995D:; return;
label_9960:; return;
label_9963:; return;
label_9964:; return;
label_9967:; return;
label_9968:; return;
label_996B:; return;
label_996C:; return;
label_996F:; return;
label_9970:; return;
label_9972:; return;
label_9974:; return;
label_9976:; return;
label_9978:; return;
label_997A:; return;
label_997C:; return;
label_997E:; return;
label_9980:; return;
label_9982:; return;
label_9984:; return;
label_9986:; return;
label_9988:; return;
label_998B:; return;
label_998E:; return;
label_998F:; return;
label_9992:; return;
label_9995:; return;
label_9998:; return;
label_999A:; return;
label_999D:; return;
label_99A0:; return;
label_99A2:; return;
label_99A3:; return;
label_99A5:; return;
label_99A7:; return;
label_99A9:; return;
label_99AB:; return;
label_99AD:; return;
label_99AF:; return;
label_99B2:; return;
label_99B4:; return;
label_99B5:; return;
label_99B7:; return;
label_99B9:; return;
label_99BB:; return;
label_99BE:; return;
label_99C1:; return;
label_99C4:; return;
label_99C5:; return;
label_99C7:; return;
label_99C9:; return;
label_99CB:; return;
label_99CD:; return;
label_99CF:; return;
label_99D2:; return;
label_99D4:; return;
label_99D5:; return;
label_99D7:; return;
label_99D9:; return;
label_99DB:; return;
label_99DE:; return;
label_99E1:; return;
label_99E4:; return;
label_99E5:; return;
label_99E7:; return;
label_99E8:; return;
label_99EB:; return;
label_99EE:; return;
label_99F1:; return;
label_99F3:; return;
label_99F4:; return;
label_99F7:; return;
label_99F9:; return;
label_99FA:; return;
label_99FC:; return;
label_99FD:; return;
label_99FF:; return;
label_9A00:; return;
label_9A01:; return;
label_9A04:; return;
label_9A06:; return;
label_9A07:; return;
label_9A09:; return;
label_9A0B:; return;
label_9A0D:; return;
label_9A10:; return;
label_9A12:; return;
label_9A14:; return;
label_9A16:; return;
label_9A18:; return;
label_9A19:; return;
label_9A1A:; return;
label_9A1D:; return;
label_9A20:; return;
label_9A21:; return;
label_9A24:; return;
label_9A26:; return;
label_9A28:; return;
label_9A2A:; return;
label_9A2C:; return;
label_9A2D:; return;
label_9A2E:; return;
label_9A31:; return;
label_9A34:; return;
label_9A35:; return;
label_9A38:; return;
label_9A39:; return;
label_9A3B:; return;
label_9A3D:; return;
label_9A3F:; return;
label_9A41:; return;
label_9A43:; return;
label_9A46:; return;
label_9A47:; return;
label_9A49:; return;
label_9A4A:; return;
label_9A4D:; return;
label_9A4E:; return;
label_9A50:; return;
label_9A53:; return;
label_9A55:; return;
label_9A57:; return;
label_9A59:; return;
label_9A5C:; return;
label_9A5F:; return;
label_9A61:; return;
label_9A63:; return;
label_9A66:; return;
label_9A68:; return;
label_9A6B:; return;
label_9A6E:; return;
label_9A70:; return;
label_9A72:; return;
label_9A74:; return;
label_9A77:; return;
label_9A7A:; return;
label_9A7C:; return;
label_9A7E:; return;
label_9A80:; return;
label_9A83:; return;
label_9A86:; return;
label_9A88:; return;
label_9A8A:; return;
label_9A8D:; return;
label_9A8F:; return;
label_9A92:; return;
label_9A95:; return;
label_9A98:; return;
label_9A9A:; return;
label_9A9D:; return;
label_9A9F:; return;
label_9AA1:; return;
label_9AA4:; return;
label_9AA7:; return;
label_9AAA:; return;
label_9AAC:; return;
label_9AAE:; return;
label_9AB0:; return;
label_9AB2:; return;
label_9AB4:; return;
label_9AB6:; return;
label_9AB8:; return;
label_9ABA:; return;
label_9ABC:; return;
label_9ABE:; return;
label_9AC0:; return;
label_9AC2:; return;
label_9AD7:; return;
label_9AD9:; return;
label_9ADB:; return;
label_9ADD:; return;
label_9AE0:; return;
label_9AE2:; return;
label_9AE4:; return;
label_9AE7:; return;
label_9AE8:; return;
label_9AEA:; return;
label_9AEC:; return;
label_9AEE:; return;
label_9AF1:; return;
label_9AF4:; return;
label_9AF6:; return;
label_9AF9:; return;
label_9AFB:; return;
label_9AFD:; return;
label_9AFF:; return;
label_9B01:; return;
label_9B03:; return;
label_9B05:; return;
label_9B07:; return;
label_9B09:; return;
label_9B0B:; return;
label_9B0D:; return;
label_9B0F:; return;
label_9B11:; return;
label_9B13:; return;
label_9B15:; return;
label_9B17:; return;
label_9B19:; return;
label_9B1C:; return;
label_9B1F:; return;
label_9B21:; return;
label_9B23:; return;
label_9B25:; return;
label_9B26:; return;
label_9B28:; return;
label_9B2A:; return;
label_9B2C:; return;
label_9B2D:; return;
label_9B2F:; return;
label_9B31:; return;
label_9B33:; return;
label_9B34:; return;
label_9B36:; return;
label_9B38:; return;
label_9B3A:; return;
label_9B3C:; return;
label_9B3E:; return;
label_9B40:; return;
label_9B42:; return;
label_9B45:; return;
label_9B48:; return;
label_9B4B:; return;
label_9B4C:; return;
label_9B4E:; return;
label_9B50:; return;
label_9B52:; return;
label_9B54:; return;
label_9B56:; return;
label_9B58:; return;
label_9B5A:; return;
label_9B5D:; return;
label_9B5F:; return;
label_9B61:; return;
label_9B62:; return;
label_9B64:; return;
label_9B66:; return;
label_9B69:; return;
label_9B6B:; return;
label_9B6D:; return;
label_9B6F:; return;
label_9B72:; return;
label_9B74:; return;
label_9B76:; return;
label_9B78:; return;
label_9B7A:; return;
label_9B7C:; return;
label_9B7E:; return;
label_9B80:; return;
label_9B83:; return;
label_9B84:; return;
label_9B86:; return;
label_9B88:; return;
label_9B8A:; return;
label_9B8C:; return;
label_9B8D:; return;
label_9B8F:; return;
label_9B91:; return;
label_9B93:; return;
label_9B95:; return;
label_9B97:; return;
label_9B99:; return;
label_9B9B:; return;
label_9B9D:; return;
label_9B9F:; return;
label_9BA1:; return;
label_9BA2:; return;
label_9BA5:; return;
label_9BA7:; return;
label_9BA9:; return;
label_9BAC:; return;
label_9BAE:; return;
label_9BAF:; return;
label_9BB0:; return;
label_9BB2:; return;
label_9BB4:; return;
label_9BB6:; return;
label_9BB8:; return;
label_9BBA:; return;
label_9BBC:; return;
label_9BBE:; return;
label_9BC0:; return;
label_9BC2:; return;
label_9BC4:; return;
label_9BC6:; return;
label_9BC8:; return;
label_9BCA:; return;
label_9BCD:; return;
label_9BCF:; return;
label_9BD1:; return;
label_9BD3:; return;
label_9BD5:; return;
label_9BD7:; return;
label_9BD9:; return;
label_9BDB:; return;
label_9BDD:; return;
label_9BDF:; return;
label_9BE1:; return;
label_9BE3:; return;
label_9BE5:; return;
label_9BE7:; return;
label_9BE9:; return;
label_9BEB:; return;
label_9BED:; return;
label_9BEF:; return;
label_9BF2:; return;
label_9BF4:; return;
label_9BF6:; return;
label_9BF9:; return;
label_9BFC:; return;
label_9BFE:; return;
label_9C00:; return;
label_9C02:; return;
label_9C04:; return;
label_9C07:; return;
label_9C0A:; return;
label_9C0D:; return;
label_9C0F:; return;
label_9C11:; return;
label_9C14:; return;
label_9C17:; return;
label_9C19:; return;
label_9C1B:; return;
label_9C1D:; return;
label_9C1F:; return;
label_9C21:; return;
label_9C23:; return;
label_9C25:; return;
label_9C27:; return;
label_9C29:; return;
label_9C2A:; return;
label_9C2C:; return;
label_9C2E:; return;
label_9C30:; return;
label_9C32:; return;
label_9C34:; return;
label_9C36:; return;
label_9C38:; return;
label_9C3A:; return;
label_9C3C:; return;
label_9C3E:; return;
label_9C40:; return;
label_9C42:; return;
label_9C44:; return;
label_9C45:; return;
label_9C47:; return;
label_9C49:; return;
label_9C4B:; return;
label_9C4D:; return;
label_9C4F:; return;
label_9C51:; return;
label_9C53:; return;
label_9C54:; return;
label_9C55:; return;
label_9C57:; return;
label_9C59:; return;
label_9C5B:; return;
label_9C5D:; return;
label_9C5E:; return;
label_9C5F:; return;
label_9C61:; return;
label_9C62:; return;
label_9C64:; return;
label_9C65:; return;
label_9C66:; return;
label_9C67:; return;
label_9C68:; return;
label_9C6A:; return;
label_9C6C:; return;
label_9C6D:; return;
label_9C6E:; return;
label_9C6F:; return;
label_9C70:; return;
label_9C72:; return;
label_9C73:; return;
label_9C74:; return;
label_9C77:; return;
label_9C7A:; return;
label_9C7B:; return;
label_9C7E:; return;
label_9C7F:; return;
label_9C81:; return;
label_9C84:; return;
label_9C86:; return;
label_9C89:; return;
label_9C8B:; return;
label_9C8D:; return;
label_9C8F:; return;
label_9C91:; return;
label_9C94:; return;
label_9C95:; return;
label_9C96:; return;
label_9C98:; return;
label_9C9A:; return;
label_9C9C:; return;
label_9C9E:; return;
label_9CA1:; return;
label_9CA3:; return;
label_9CA6:; return;
label_9CA8:; return;
label_9CAA:; return;
label_9CAC:; return;
label_9CAF:; return;
label_9CB0:; return;
label_9CB1:; return;
label_9CB3:; return;
label_9CB5:; return;
label_9CB7:; return;
label_9CBA:; return;
label_9CBC:; return;
label_9CBE:; return;
label_9CC0:; return;
label_9CC3:; return;
label_9CC5:; return;
label_9CC6:; return;
label_9CC9:; return;
label_9CCA:; return;
label_9CCB:; return;
label_9CCD:; return;
label_9CD0:; return;
label_9CD1:; return;
label_9CD2:; return;
label_9CD4:; return;
label_9CD6:; return;
label_9CD8:; return;
label_9CDA:; return;
label_9CDC:; return;
label_9CDE:; return;
label_9CE0:; return;
label_9CE2:; return;
label_9CE5:; return;
label_9CE7:; return;
label_9CE9:; return;
label_9CEB:; return;
label_9CED:; return;
label_9CF0:; return;
label_9CF3:; return;
label_9CF4:; return;
label_9CF5:; return;
label_9CF7:; return;
label_9CF9:; return;
label_9CFA:; return;
label_9CFC:; return;
label_9CFE:; return;
label_9D00:; return;
label_9D02:; return;
label_9D04:; return;
label_9D06:; return;
label_9D09:; return;
label_9D0B:; return;
label_9D0D:; return;
label_9D0E:; return;
label_9D11:; return;
label_9D13:; return;
label_9D16:; return;
label_9D17:; return;
label_9D1A:; return;
label_9D1D:; return;
label_9D1F:; return;
label_9D22:; return;
label_9D24:; return;
label_9D26:; return;
label_9D28:; return;
label_9D2A:; return;
label_9D2D:; return;
label_9D2F:; return;
}

void func_8C03_b0(void) { /* LoadUniqueItems_processItemByte */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C03_b0");
#endif
label_8C03:; /* LoadUniqueItems_processItemByte */
    /* $8C03: A4 */ nes_cpu_instruction_boundary(0x8C03, 3); g_cpu.Y = nes_read(0x05); FLAG_NZ(g_cpu.Y);
label_8C05:;
    /* $8C05: B9 */ nes_cpu_instruction_boundary(0x8C05, 4); g_cpu.A = nes_read((0x6988 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8C08:;
    /* $8C08: 85 */ nes_cpu_instruction_boundary(0x8C08, 3); nes_write(0x08, g_cpu.A);
label_8C0A:; /* LoadUniqueItems_processItemBit */
    /* $8C0A: A5 */ nes_cpu_instruction_boundary(0x8C0A, 3); g_cpu.A = nes_read(0x08); FLAG_NZ(g_cpu.A);
label_8C0C:;
    /* $8C0C: 6A */ nes_cpu_instruction_boundary(0x8C0C, 2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_8C0D:;
    /* $8C0D: 85 */ nes_cpu_instruction_boundary(0x8C0D, 3); nes_write(0x08, g_cpu.A);
label_8C0F:;
    /* $8C0F: 90 */ nes_cpu_instruction_boundary(0x8C0F, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8C14; }
label_8C11:;
    /* $8C11: 20 */ nes_cpu_instruction_boundary(0x8C11, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x13; g_cpu.S--; func_8C39_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8C11, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8C14:; /* LoadUniqueItems_endIf_A */
    /* $8C14: A4 */ nes_cpu_instruction_boundary(0x8C14, 3); g_cpu.Y = nes_read(0x06); FLAG_NZ(g_cpu.Y);
label_8C16:;
    /* $8C16: C0 */ nes_cpu_instruction_boundary(0x8C16, 2); { int r=g_cpu.Y-0x07; g_cpu.C=(g_cpu.Y>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_8C18:;
    /* $8C18: B0 */ nes_cpu_instruction_boundary(0x8C18, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8C27; }
label_8C1A:;
    /* $8C1A: E6 */ nes_cpu_instruction_boundary(0x8C1A, 5); { uint16_t a=0x06; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C1C:;
    /* $8C1C: E6 */ nes_cpu_instruction_boundary(0x8C1C, 5); { uint16_t a=0x09; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C1E:;
    /* $8C1E: A6 */ nes_cpu_instruction_boundary(0x8C1E, 3); g_cpu.X = nes_read(0x09); FLAG_NZ(g_cpu.X);
label_8C20:;
    /* $8C20: E4 */ nes_cpu_instruction_boundary(0x8C20, 3); { uint8_t m=nes_read(0x07); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8C22:;
    /* $8C22: B0 */ nes_cpu_instruction_boundary(0x8C22, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8C38; }
label_8C24:;
    /* $8C24: 4C */ nes_cpu_instruction_boundary(0x8C24, 3); nes_cpu_instruction_boundary(0x8C0A, 2);
    goto label_8C0A;
label_8C27:; /* LoadUniqueItems_moveToNextByte */
    /* $8C27: A0 */ nes_cpu_instruction_boundary(0x8C27, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_8C29:;
    /* $8C29: 84 */ nes_cpu_instruction_boundary(0x8C29, 3); nes_write(0x06, g_cpu.Y);
label_8C2B:;
    /* $8C2B: E6 */ nes_cpu_instruction_boundary(0x8C2B, 5); { uint16_t a=0x05; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C2D:;
    /* $8C2D: E6 */ nes_cpu_instruction_boundary(0x8C2D, 5); { uint16_t a=0x09; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C2F:;
    /* $8C2F: A6 */ nes_cpu_instruction_boundary(0x8C2F, 3); g_cpu.X = nes_read(0x09); FLAG_NZ(g_cpu.X);
label_8C31:;
    /* $8C31: E4 */ nes_cpu_instruction_boundary(0x8C31, 3); { uint8_t m=nes_read(0x07); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8C33:;
    /* $8C33: B0 */ nes_cpu_instruction_boundary(0x8C33, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8C38; }
label_8C35:;
    /* $8C35: 4C */ nes_cpu_instruction_boundary(0x8C35, 3); nes_cpu_instruction_boundary(0x8C03, 2);
    goto label_8C03;
label_8C38:; /* LoadUniqueItems_RTS */
    /* $8C38: 60 */ nes_cpu_instruction_boundary(0x8C38, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8C39:; return;
label_8C3B:; return;
label_8C3E:; return;
label_8C3F:; return;
label_8C41:; return;
label_8C42:; return;
label_8C43:; return;
label_8C46:; return;
label_8C48:; return;
label_8C4B:; return;
label_8C4D:; return;
label_8C50:; return;
label_8C53:; return;
label_8C55:; return;
label_8C56:; return;
label_8C59:; return;
label_8C5A:; return;
label_8C5D:; return;
label_8C5E:; return;
label_8C61:; return;
label_8C64:; return;
label_8C66:; return;
label_8C69:; return;
label_8C6C:; return;
label_8C6E:; return;
label_8C71:; return;
label_8C73:; return;
label_8C75:; return;
label_8C77:; return;
label_8C79:; return;
label_8C7A:; return;
label_8C7C:; return;
label_8C7E:; return;
label_8C81:; return;
label_8C84:; return;
label_8C85:; return;
label_8C87:; return;
label_8C8A:; return;
label_8C8D:; return;
label_8C8F:; return;
label_8C91:; return;
label_8C93:; return;
label_8C96:; return;
label_8C99:; return;
label_8C9B:; return;
label_8C9E:; return;
label_8CA0:; return;
label_8CA2:; return;
label_8CA5:; return;
label_8CA7:; return;
label_8CA9:; return;
label_8CAC:; return;
label_8CAF:; return;
label_8CB2:; return;
label_8CB5:; return;
label_8CB8:; return;
label_8CBA:; return;
label_8CBC:; return;
label_8CBF:; return;
label_8CC1:; return;
label_8CC3:; return;
label_8CC5:; return;
label_8CC7:; return;
label_8CC9:; return;
label_8CCC:; return;
label_8CCE:; return;
label_8CD0:; return;
label_8CD2:; return;
label_8CD4:; return;
label_8CD6:; return;
label_8CD9:; return;
label_8CDB:; return;
label_8CDD:; return;
label_8CDF:; return;
label_8CE1:; return;
label_8CE3:; return;
label_8CE6:; return;
label_8CE8:; return;
label_8CEA:; return;
label_8CEC:; return;
label_8CEE:; return;
label_8CF0:; return;
label_8CF2:; return;
label_8CF5:; return;
label_8CF7:; return;
label_8CFA:; return;
label_8CFD:; return;
label_8CFE:; return;
label_8D00:; return;
label_8D03:; return;
label_8D05:; return;
label_8D07:; return;
label_8D09:; return;
label_8D0C:; return;
label_8D0F:; return;
label_8D12:; return;
label_8D15:; return;
label_8D17:; return;
label_8D1A:; return;
label_8D1D:; return;
label_8D1F:; return;
label_8D22:; return;
label_8D24:; return;
label_8D26:; return;
label_8D27:; return;
label_8D2A:; return;
label_8D2D:; return;
label_8D2F:; return;
label_8D31:; return;
label_8D33:; return;
label_8D36:; return;
label_8D39:; return;
label_8D3A:; return;
label_8D3C:; return;
label_8D3D:; return;
label_8D40:; return;
label_8D43:; return;
label_8D46:; return;
label_8D49:; return;
label_8D4B:; return;
label_8D4D:; return;
label_8D4F:; return;
label_8D52:; return;
label_8D54:; return;
label_8D56:; return;
label_8D58:; return;
label_8D5A:; return;
label_8D5C:; return;
label_8D5F:; return;
label_8D61:; return;
label_8D63:; return;
label_8D65:; return;
label_8D67:; return;
label_8D69:; return;
label_8D6B:; return;
label_8D6E:; return;
label_8D71:; return;
label_8D73:; return;
label_8D75:; return;
label_8D77:; return;
label_8D79:; return;
label_8D7B:; return;
label_8D7E:; return;
label_8D80:; return;
label_8D82:; return;
label_8D84:; return;
label_8D86:; return;
label_8D88:; return;
label_8D8A:; return;
label_8D8D:; return;
label_8D8F:; return;
label_8D91:; return;
label_8D93:; return;
label_8D95:; return;
label_8D98:; return;
label_8D9A:; return;
label_8D9C:; return;
label_8D9E:; return;
label_8DA0:; return;
label_8DA3:; return;
label_8DA5:; return;
label_8DA7:; return;
label_8DA9:; return;
label_8DAA:; return;
label_8DAB:; return;
label_8DAD:; return;
label_8DAF:; return;
label_8DB1:; return;
label_8DB3:; return;
label_8DB5:; return;
label_8DB7:; return;
label_8DBA:; return;
label_8DBC:; return;
label_8DBE:; return;
label_8DC0:; return;
label_8DC1:; return;
label_8DC3:; return;
label_8DC4:; return;
label_8DC6:; return;
label_8DC9:; return;
label_8DCB:; return;
label_8DCD:; return;
label_8DCF:; return;
label_8DD2:; return;
label_8DD4:; return;
label_8DD6:; return;
label_8DD8:; return;
label_8DDA:; return;
label_8DDD:; return;
label_8DDE:; return;
label_8DE1:; return;
label_8DE3:; return;
label_8DE5:; return;
label_8DE8:; return;
label_8DEB:; return;
label_8DED:; return;
label_8DEE:; return;
label_8DF0:; return;
label_8DF2:; return;
label_8DF5:; return;
label_8DF7:; return;
label_8DFA:; return;
label_8DFD:; return;
label_8E00:; return;
label_8E02:; return;
label_8E03:; return;
label_8E05:; return;
label_8E06:; return;
label_8E07:; return;
label_8E09:; return;
label_8E0C:; return;
label_8E0F:; return;
label_8E10:; return;
label_8E13:; return;
label_8E14:; return;
label_8E15:; return;
label_8E16:; return;
label_8E17:; return;
label_8E1A:; return;
label_8E1D:; return;
label_8E20:; return;
label_8E21:; return;
label_8E23:; return;
label_8E25:; return;
label_8E26:; return;
label_8E29:; return;
label_8E2A:; return;
label_8E2C:; return;
label_8E2D:; return;
label_8E30:; return;
label_8E32:; return;
label_8E35:; return;
label_8E37:; return;
label_8E39:; return;
label_8E3B:; return;
label_8E3E:; return;
label_8E3F:; return;
label_8E40:; return;
label_8E42:; return;
label_8E44:; return;
label_8E46:; return;
label_8E49:; return;
label_8E4B:; return;
label_8E4D:; return;
label_8E4E:; return;
label_8E51:; return;
label_8E53:; return;
label_8E56:; return;
label_8E58:; return;
label_8E5A:; return;
label_8E5D:; return;
label_8E5E:; return;
label_8E60:; return;
label_8E62:; return;
label_8E64:; return;
label_8E67:; return;
label_8E69:; return;
label_8E6B:; return;
label_8E6C:; return;
label_8E6E:; return;
label_8E71:; return;
label_8E74:; return;
label_8E76:; return;
label_8E79:; return;
label_8E7C:; return;
label_8E7E:; return;
label_8E81:; return;
label_8E84:; return;
label_8E86:; return;
label_8E89:; return;
label_8E8C:; return;
label_8E8E:; return;
label_8E91:; return;
label_8E94:; return;
label_8E96:; return;
label_8E99:; return;
label_8E9C:; return;
label_8E9E:; return;
label_8EA1:; return;
label_8EA4:; return;
label_8EA6:; return;
label_8EA9:; return;
label_8EAC:; return;
label_8EAE:; return;
label_8EB1:; return;
label_8EB4:; return;
label_8EB6:; return;
label_8EB9:; return;
label_8EBC:; return;
label_8EBE:; return;
label_8EC1:; return;
label_8EC4:; return;
label_8EC6:; return;
label_8EC9:; return;
label_8ECC:; return;
label_8ECE:; return;
label_8ED1:; return;
label_8ED4:; return;
label_8ED6:; return;
label_8ED9:; return;
label_8EDC:; return;
label_8EDE:; return;
label_8EE1:; return;
label_8EE4:; return;
label_8EE6:; return;
label_8EE9:; return;
label_8EEC:; return;
label_8EEE:; return;
label_8EF1:; return;
label_8EF4:; return;
label_8EF6:; return;
label_8EF9:; return;
label_8EFC:; return;
label_8EFE:; return;
label_8F01:; return;
label_8F04:; return;
label_8F06:; return;
label_8F09:; return;
label_8F0C:; return;
label_8F0E:; return;
label_8F11:; return;
label_8F14:; return;
label_8F16:; return;
label_8F19:; return;
label_8F1C:; return;
label_8F1E:; return;
label_8F21:; return;
label_8F24:; return;
label_8F26:; return;
label_8F29:; return;
label_8F2C:; return;
label_8F2D:; return;
label_8F30:; return;
label_8F31:; return;
label_8F32:; return;
label_8F33:; return;
label_8F36:; return;
label_8F38:; return;
label_8F3B:; return;
label_8F3D:; return;
label_8F40:; return;
label_8F43:; return;
label_8F45:; return;
label_8F46:; return;
label_8F49:; return;
label_8F4B:; return;
label_8F4C:; return;
label_8F4D:; return;
label_8F4F:; return;
label_8F52:; return;
label_8F53:; return;
label_8F54:; return;
label_8F55:; return;
label_8F57:; return;
label_8F59:; return;
label_8F5A:; return;
label_8F5D:; return;
label_8F5F:; return;
label_8F60:; return;
label_8F62:; return;
label_8F65:; return;
label_8F68:; return;
label_8F6A:; return;
label_8F6D:; return;
label_8F70:; return;
label_8F72:; return;
label_8F75:; return;
label_8F78:; return;
label_8F7A:; return;
label_8F7D:; return;
label_8F80:; return;
label_8F82:; return;
label_8F85:; return;
label_8F88:; return;
label_8F8A:; return;
label_8F8D:; return;
label_8F90:; return;
label_8F92:; return;
label_8F95:; return;
label_8F98:; return;
label_8F9A:; return;
label_8F9D:; return;
label_8FA0:; return;
label_8FA2:; return;
label_8FA5:; return;
label_8FA8:; return;
label_8FAA:; return;
label_8FAD:; return;
label_8FB0:; return;
label_8FB2:; return;
label_8FB5:; return;
label_8FB8:; return;
label_8FBA:; return;
label_8FBD:; return;
label_8FC0:; return;
label_8FC2:; return;
label_8FC5:; return;
label_8FC8:; return;
label_8FCA:; return;
label_8FCD:; return;
label_8FD0:; return;
label_8FD2:; return;
label_8FD5:; return;
label_8FD8:; return;
label_8FDA:; return;
label_8FDD:; return;
label_8FE0:; return;
label_8FE2:; return;
label_8FE5:; return;
label_8FE8:; return;
label_8FEA:; return;
label_8FED:; return;
label_8FF0:; return;
label_8FF1:; return;
label_8FF4:; return;
label_8FF5:; return;
label_8FF6:; return;
label_8FF8:; return;
label_8FFB:; return;
label_8FFE:; return;
label_9000:; return;
label_9001:; return;
label_9004:; return;
label_9007:; return;
label_9009:; return;
label_900C:; return;
label_900D:; return;
label_900E:; return;
label_9010:; return;
label_9011:; return;
label_9014:; return;
label_9015:; return;
label_9016:; return;
label_9017:; return;
label_9019:; return;
label_901B:; return;
label_901E:; return;
label_9020:; return;
label_9021:; return;
label_9023:; return;
label_9025:; return;
label_9027:; return;
label_9028:; return;
label_902A:; return;
label_902C:; return;
label_902E:; return;
label_902F:; return;
label_9031:; return;
label_9033:; return;
label_9035:; return;
label_9037:; return;
label_9039:; return;
label_903B:; return;
label_903D:; return;
label_903F:; return;
label_9041:; return;
label_9044:; return;
label_9046:; return;
label_9048:; return;
label_904A:; return;
label_904C:; return;
label_904E:; return;
label_9050:; return;
label_9052:; return;
label_9054:; return;
label_9056:; return;
label_9058:; return;
label_905A:; return;
label_905C:; return;
label_905E:; return;
label_9061:; return;
label_9063:; return;
label_9065:; return;
label_9067:; return;
label_9069:; return;
label_906B:; return;
label_906D:; return;
label_906F:; return;
label_9071:; return;
label_9073:; return;
label_9074:; return;
label_9075:; return;
label_9078:; return;
label_907A:; return;
label_907C:; return;
label_907E:; return;
label_9080:; return;
label_9082:; return;
label_9083:; return;
label_9086:; return;
label_9088:; return;
label_9089:; return;
label_908C:; return;
label_908E:; return;
label_908F:; return;
label_9091:; return;
label_9093:; return;
label_9094:; return;
label_9097:; return;
label_9098:; return;
label_909A:; return;
label_909B:; return;
label_909C:; return;
label_909F:; return;
label_90A2:; return;
label_90A5:; return;
label_90A8:; return;
label_90AA:; return;
label_90AC:; return;
label_90AE:; return;
label_90B0:; return;
label_90B2:; return;
label_90B4:; return;
label_90B7:; return;
label_90BA:; return;
label_90BD:; return;
label_90BF:; return;
label_90C1:; return;
label_90C4:; return;
label_90C6:; return;
label_90C9:; return;
label_90CB:; return;
label_90CD:; return;
label_90CF:; return;
label_90D1:; return;
label_90D4:; return;
label_90D7:; return;
label_90D9:; return;
label_90DB:; return;
label_90DD:; return;
label_90DF:; return;
label_90E2:; return;
label_90E4:; return;
label_90E7:; return;
label_90E9:; return;
label_90EB:; return;
label_90ED:; return;
label_90EF:; return;
label_90F2:; return;
label_90F4:; return;
label_90F7:; return;
label_90FA:; return;
label_90FC:; return;
label_90FF:; return;
label_9102:; return;
label_9105:; return;
label_9108:; return;
label_910A:; return;
label_910D:; return;
label_910F:; return;
label_9112:; return;
label_9114:; return;
label_9117:; return;
label_9118:; return;
label_9119:; return;
label_911A:; return;
label_911D:; return;
label_911F:; return;
label_9121:; return;
label_9124:; return;
label_9127:; return;
label_912A:; return;
label_912C:; return;
label_912E:; return;
label_9130:; return;
label_9133:; return;
label_9136:; return;
label_9138:; return;
label_913A:; return;
label_913D:; return;
label_913F:; return;
label_9142:; return;
label_9144:; return;
label_9147:; return;
label_914A:; return;
label_914C:; return;
label_914E:; return;
label_9150:; return;
label_9153:; return;
label_9155:; return;
label_9157:; return;
label_915A:; return;
label_915C:; return;
label_915F:; return;
label_9161:; return;
label_9164:; return;
label_9166:; return;
label_9169:; return;
label_916B:; return;
label_916D:; return;
label_916F:; return;
label_9171:; return;
label_9173:; return;
label_9175:; return;
label_9178:; return;
label_917A:; return;
label_917C:; return;
label_917E:; return;
label_9180:; return;
label_9182:; return;
label_9184:; return;
label_9187:; return;
label_9188:; return;
label_918A:; return;
label_918C:; return;
label_918E:; return;
label_9190:; return;
label_9193:; return;
label_9196:; return;
label_9198:; return;
label_919B:; return;
label_919E:; return;
label_91A0:; return;
label_91A2:; return;
label_91A3:; return;
label_91A5:; return;
label_91A8:; return;
label_91AA:; return;
label_91AC:; return;
label_91AD:; return;
label_91AF:; return;
label_91B2:; return;
label_91B4:; return;
label_91B6:; return;
label_91B7:; return;
label_91B9:; return;
label_91BC:; return;
label_91BD:; return;
label_91BF:; return;
label_91C1:; return;
label_91C4:; return;
label_91C5:; return;
label_91C6:; return;
label_91C9:; return;
label_91CB:; return;
label_91CE:; return;
label_91D0:; return;
label_91D3:; return;
label_91D5:; return;
label_91D6:; return;
label_91D9:; return;
label_91DB:; return;
label_91DE:; return;
label_91E0:; return;
label_91E2:; return;
label_91E5:; return;
label_91E8:; return;
label_91E9:; return;
label_91EC:; return;
label_91EF:; return;
label_91F0:; return;
label_91F2:; return;
label_91F4:; return;
label_91F6:; return;
label_91F8:; return;
label_91FB:; return;
label_91FD:; return;
label_91FF:; return;
label_9201:; return;
label_9204:; return;
label_9205:; return;
label_9207:; return;
label_9209:; return;
label_920B:; return;
label_920E:; return;
label_9211:; return;
label_9213:; return;
label_9215:; return;
label_9217:; return;
label_9219:; return;
label_921C:; return;
label_921E:; return;
label_9220:; return;
label_9222:; return;
label_9225:; return;
label_9227:; return;
label_922A:; return;
label_922C:; return;
label_922F:; return;
label_9232:; return;
label_9234:; return;
label_9236:; return;
label_9238:; return;
label_9239:; return;
label_923C:; return;
label_923F:; return;
label_9242:; return;
label_9245:; return;
label_9247:; return;
label_9249:; return;
label_924B:; return;
label_924C:; return;
label_924F:; return;
label_9251:; return;
label_9254:; return;
label_9255:; return;
label_9256:; return;
label_9258:; return;
label_9259:; return;
label_925B:; return;
label_925D:; return;
label_925E:; return;
label_9260:; return;
label_9262:; return;
label_9264:; return;
label_9267:; return;
label_9269:; return;
label_926C:; return;
label_926D:; return;
label_926F:; return;
label_9270:; return;
label_9272:; return;
label_9273:; return;
label_9275:; return;
label_9277:; return;
label_927A:; return;
label_927C:; return;
label_927F:; return;
label_9280:; return;
label_9282:; return;
label_9283:; return;
label_9285:; return;
label_9287:; return;
label_9289:; return;
label_928C:; return;
label_928D:; return;
label_928F:; return;
label_9290:; return;
label_9292:; return;
label_9294:; return;
label_9297:; return;
label_9299:; return;
label_929B:; return;
label_929D:; return;
label_92A0:; return;
label_92A3:; return;
label_92A5:; return;
label_92A8:; return;
label_92AA:; return;
label_92AD:; return;
label_92B0:; return;
label_92B3:; return;
label_92B4:; return;
label_92B6:; return;
label_92B8:; return;
label_92BA:; return;
label_92BC:; return;
label_92BE:; return;
label_92C0:; return;
label_92C2:; return;
label_92C4:; return;
label_92C6:; return;
label_92C8:; return;
label_92C9:; return;
label_92CB:; return;
label_92CC:; return;
label_92CD:; return;
label_92CF:; return;
label_92D0:; return;
label_92D2:; return;
label_92D4:; return;
label_92D7:; return;
label_92DA:; return;
label_92DD:; return;
label_92DF:; return;
label_92E1:; return;
label_92E3:; return;
label_92E5:; return;
label_92E8:; return;
label_92EB:; return;
label_92ED:; return;
label_92F0:; return;
label_92F2:; return;
label_92F4:; return;
label_92F6:; return;
label_92F8:; return;
label_92F9:; return;
label_92FC:; return;
label_92FF:; return;
label_9302:; return;
label_9305:; return;
label_9308:; return;
label_930A:; return;
label_930D:; return;
label_930F:; return;
label_9311:; return;
label_9314:; return;
label_9317:; return;
label_931A:; return;
label_931C:; return;
label_931E:; return;
label_931F:; return;
label_9322:; return;
label_9324:; return;
label_9325:; return;
label_9327:; return;
label_932A:; return;
label_932D:; return;
label_9330:; return;
label_9333:; return;
label_9336:; return;
label_9339:; return;
label_933C:; return;
label_933F:; return;
label_9342:; return;
label_9345:; return;
label_9348:; return;
label_934B:; return;
label_934E:; return;
label_9351:; return;
label_9354:; return;
label_9356:; return;
label_9358:; return;
label_9359:; return;
label_935B:; return;
label_935D:; return;
label_9360:; return;
label_9362:; return;
label_9364:; return;
label_9367:; return;
label_936A:; return;
label_936D:; return;
label_9370:; return;
label_9373:; return;
label_9376:; return;
label_9378:; return;
label_937A:; return;
label_937C:; return;
label_937F:; return;
label_9381:; return;
label_9383:; return;
label_9384:; return;
label_9387:; return;
label_938A:; return;
label_938D:; return;
label_938E:; return;
label_938F:; return;
label_9391:; return;
label_9392:; return;
label_9394:; return;
label_9396:; return;
label_9398:; return;
label_939A:; return;
label_939D:; return;
label_939E:; return;
label_93A1:; return;
label_93A3:; return;
label_93A5:; return;
label_93A8:; return;
label_93AB:; return;
label_93AE:; return;
label_93B0:; return;
label_93B2:; return;
label_93B4:; return;
label_93B6:; return;
label_93B9:; return;
label_93BB:; return;
label_93BD:; return;
label_93BE:; return;
label_93C0:; return;
label_93C3:; return;
label_93C6:; return;
label_93C9:; return;
label_93CB:; return;
label_93CE:; return;
label_93D0:; return;
label_93D2:; return;
label_93D5:; return;
label_93D7:; return;
label_93DA:; return;
label_93DC:; return;
label_93DE:; return;
label_93E1:; return;
label_93E3:; return;
label_93E6:; return;
label_93E8:; return;
label_93EA:; return;
label_93ED:; return;
label_93EF:; return;
label_93F2:; return;
label_93F4:; return;
label_93F6:; return;
label_93F9:; return;
label_93FB:; return;
label_93FE:; return;
label_9400:; return;
label_9403:; return;
label_9406:; return;
label_9407:; return;
label_9408:; return;
label_940A:; return;
label_940B:; return;
label_940E:; return;
label_9410:; return;
label_9411:; return;
label_9413:; return;
label_9415:; return;
label_9416:; return;
label_9417:; return;
label_941A:; return;
label_941D:; return;
label_9420:; return;
label_9423:; return;
label_9425:; return;
label_9428:; return;
label_942B:; return;
label_942D:; return;
label_9430:; return;
label_9431:; return;
label_9432:; return;
label_9434:; return;
label_9436:; return;
label_9438:; return;
label_943A:; return;
label_943C:; return;
label_943E:; return;
label_943F:; return;
label_9441:; return;
label_9442:; return;
label_9444:; return;
label_9446:; return;
label_9448:; return;
label_944A:; return;
label_944B:; return;
label_944D:; return;
label_9450:; return;
label_9452:; return;
label_9454:; return;
label_9456:; return;
label_9458:; return;
label_945A:; return;
label_945C:; return;
label_945F:; return;
label_9462:; return;
label_9464:; return;
label_9467:; return;
label_9469:; return;
label_946B:; return;
label_946C:; return;
label_946E:; return;
label_9470:; return;
label_9471:; return;
label_9472:; return;
label_9473:; return;
label_9474:; return;
label_9477:; return;
label_9479:; return;
label_947B:; return;
label_947E:; return;
label_947F:; return;
label_9480:; return;
label_9482:; return;
label_9484:; return;
label_9487:; return;
label_9489:; return;
label_948C:; return;
label_948E:; return;
label_948F:; return;
label_9490:; return;
label_9491:; return;
label_9494:; return;
label_9495:; return;
label_9498:; return;
label_949A:; return;
label_949D:; return;
label_949F:; return;
label_94A2:; return;
label_94A4:; return;
label_94A7:; return;
label_94A9:; return;
label_94AC:; return;
label_94AD:; return;
label_94AE:; return;
label_94AF:; return;
label_94B0:; return;
label_94B1:; return;
label_94B4:; return;
label_94B5:; return;
label_94B8:; return;
label_94BA:; return;
label_94BD:; return;
label_94BF:; return;
label_94C2:; return;
label_94C4:; return;
label_94C7:; return;
label_94C9:; return;
label_94CC:; return;
label_94CF:; return;
label_94D0:; return;
label_94D1:; return;
label_94D2:; return;
label_94D3:; return;
label_94D4:; return;
label_94D7:; return;
label_94D8:; return;
label_94D9:; return;
label_94DA:; return;
label_94DC:; return;
label_94DE:; return;
label_94E0:; return;
label_94E2:; return;
label_94E3:; return;
label_94E5:; return;
label_94E7:; return;
label_94E9:; return;
label_94EB:; return;
label_94ED:; return;
label_94EF:; return;
label_94F1:; return;
label_94F3:; return;
label_94F5:; return;
label_94F7:; return;
label_94F9:; return;
label_94FB:; return;
label_94FD:; return;
label_94FF:; return;
label_9501:; return;
label_9502:; return;
label_9504:; return;
label_9506:; return;
label_9508:; return;
label_950A:; return;
label_950C:; return;
label_950E:; return;
label_950F:; return;
label_9511:; return;
label_9513:; return;
label_9515:; return;
label_9517:; return;
label_9519:; return;
label_951B:; return;
label_951E:; return;
label_9520:; return;
label_9522:; return;
label_9524:; return;
label_9527:; return;
label_9529:; return;
label_952B:; return;
label_952C:; return;
label_952F:; return;
label_9532:; return;
label_9533:; return;
label_9534:; return;
label_9535:; return;
label_9536:; return;
label_9537:; return;
label_9538:; return;
label_953B:; return;
label_953E:; return;
label_9541:; return;
label_9544:; return;
label_9547:; return;
label_954A:; return;
label_954B:; return;
label_954C:; return;
label_954D:; return;
label_954E:; return;
label_954F:; return;
label_9550:; return;
label_9551:; return;
label_9552:; return;
label_9553:; return;
label_9554:; return;
label_9555:; return;
label_9556:; return;
label_9557:; return;
label_9558:; return;
label_9559:; return;
label_955A:; return;
label_955B:; return;
label_955C:; return;
label_955D:; return;
label_955E:; return;
label_955F:; return;
label_9560:; return;
label_9562:; return;
label_9563:; return;
label_9565:; return;
label_9567:; return;
label_9569:; return;
label_956B:; return;
label_956D:; return;
label_956F:; return;
label_9571:; return;
label_9573:; return;
label_9575:; return;
label_9577:; return;
label_9579:; return;
label_957B:; return;
label_957D:; return;
label_957F:; return;
label_9581:; return;
label_9583:; return;
label_9585:; return;
label_9587:; return;
label_9588:; return;
label_958B:; return;
label_958C:; return;
label_958D:; return;
label_9590:; return;
label_9591:; return;
label_9594:; return;
label_9597:; return;
label_959A:; return;
label_959C:; return;
label_959E:; return;
label_95A0:; return;
label_95A3:; return;
label_95A5:; return;
label_95A8:; return;
label_95A9:; return;
label_95AA:; return;
label_95AD:; return;
label_95B0:; return;
label_95B1:; return;
label_95B4:; return;
label_95B5:; return;
label_95B8:; return;
label_95BA:; return;
label_95BC:; return;
label_95BE:; return;
label_95C0:; return;
label_95C2:; return;
label_95C4:; return;
label_95C7:; return;
label_95C9:; return;
label_95CC:; return;
label_95CD:; return;
label_95CE:; return;
label_95D1:; return;
label_95D4:; return;
label_95D5:; return;
label_95D8:; return;
label_95D9:; return;
label_95DC:; return;
label_95DE:; return;
label_95E1:; return;
label_95E4:; return;
label_95E6:; return;
label_95E8:; return;
label_95EB:; return;
label_95ED:; return;
label_95F0:; return;
label_95F1:; return;
label_95F2:; return;
label_95F5:; return;
label_95F8:; return;
label_95F9:; return;
label_95FC:; return;
label_95FD:; return;
label_9600:; return;
label_9602:; return;
label_9604:; return;
label_9606:; return;
label_9608:; return;
label_960A:; return;
label_960C:; return;
label_960F:; return;
label_9611:; return;
label_9614:; return;
label_9615:; return;
label_9616:; return;
label_9619:; return;
label_961C:; return;
label_961D:; return;
label_9620:; return;
label_9621:; return;
label_9624:; return;
label_9625:; return;
label_9628:; return;
label_9629:; return;
label_962C:; return;
label_962E:; return;
label_9630:; return;
label_9633:; return;
label_9635:; return;
label_9638:; return;
label_9639:; return;
label_963A:; return;
label_963D:; return;
label_9640:; return;
label_9641:; return;
label_9644:; return;
label_9645:; return;
label_9648:; return;
label_964B:; return;
label_964E:; return;
label_9650:; return;
label_9652:; return;
label_9654:; return;
label_9657:; return;
label_9659:; return;
label_965C:; return;
label_965D:; return;
label_965E:; return;
label_9661:; return;
label_9664:; return;
label_9665:; return;
label_9668:; return;
label_9669:; return;
label_966C:; return;
label_966F:; return;
label_9671:; return;
label_9674:; return;
label_9676:; return;
label_9678:; return;
label_967B:; return;
label_967D:; return;
label_9680:; return;
label_9681:; return;
label_9682:; return;
label_9685:; return;
label_9688:; return;
label_9689:; return;
label_968C:; return;
label_968D:; return;
label_9690:; return;
label_9692:; return;
label_9693:; return;
label_9694:; return;
label_9696:; return;
label_9698:; return;
label_969A:; return;
label_969C:; return;
label_969F:; return;
label_96A1:; return;
label_96A4:; return;
label_96A5:; return;
label_96A6:; return;
label_96A9:; return;
label_96AC:; return;
label_96AD:; return;
label_96B0:; return;
label_96B1:; return;
label_96B4:; return;
label_96B6:; return;
label_96B7:; return;
label_96B9:; return;
label_96BC:; return;
label_96BE:; return;
label_96C0:; return;
label_96C3:; return;
label_96C5:; return;
label_96C8:; return;
label_96C9:; return;
label_96CA:; return;
label_96CD:; return;
label_96D0:; return;
label_96D1:; return;
label_96D4:; return;
label_96D5:; return;
label_96D8:; return;
label_96D9:; return;
label_96DC:; return;
label_96DD:; return;
label_96E0:; return;
label_96E2:; return;
label_96E4:; return;
label_96E7:; return;
label_96E9:; return;
label_96EC:; return;
label_96ED:; return;
label_96EE:; return;
label_96F1:; return;
label_96F4:; return;
label_96F5:; return;
label_96F8:; return;
label_96F9:; return;
label_96FC:; return;
label_96FD:; return;
label_9700:; return;
label_9701:; return;
label_9704:; return;
label_9706:; return;
label_9708:; return;
label_970B:; return;
label_970D:; return;
label_9710:; return;
label_9711:; return;
label_9712:; return;
label_9715:; return;
label_9718:; return;
label_9719:; return;
label_971C:; return;
label_971D:; return;
label_9720:; return;
label_9722:; return;
label_9724:; return;
label_9726:; return;
label_9728:; return;
label_972A:; return;
label_972C:; return;
label_972F:; return;
label_9731:; return;
label_9734:; return;
label_9735:; return;
label_9736:; return;
label_9739:; return;
label_973C:; return;
label_973D:; return;
label_9740:; return;
label_9742:; return;
label_9744:; return;
label_9746:; return;
label_9748:; return;
label_974A:; return;
label_974C:; return;
label_974E:; return;
label_974F:; return;
label_9751:; return;
label_9754:; return;
label_9757:; return;
label_9759:; return;
label_975A:; return;
label_975D:; return;
label_9760:; return;
label_9761:; return;
label_9764:; return;
label_9765:; return;
label_9768:; return;
label_976A:; return;
label_976B:; return;
label_976C:; return;
label_976E:; return;
label_9770:; return;
label_9772:; return;
label_9774:; return;
label_9777:; return;
label_9779:; return;
label_977C:; return;
label_977D:; return;
label_977E:; return;
label_9781:; return;
label_9784:; return;
label_9785:; return;
label_9788:; return;
label_9789:; return;
label_978C:; return;
label_978F:; return;
label_9791:; return;
label_9794:; return;
label_9796:; return;
label_9798:; return;
label_979B:; return;
label_979D:; return;
label_97A0:; return;
label_97A1:; return;
label_97A2:; return;
label_97A5:; return;
label_97A8:; return;
label_97A9:; return;
label_97AC:; return;
label_97AD:; return;
label_97B0:; return;
label_97B3:; return;
label_97B6:; return;
label_97B8:; return;
label_97BA:; return;
label_97BC:; return;
label_97BF:; return;
label_97C1:; return;
label_97C4:; return;
label_97C5:; return;
label_97C6:; return;
label_97C9:; return;
label_97CB:; return;
label_97CC:; return;
label_97CD:; return;
label_97CF:; return;
label_97D2:; return;
label_97D4:; return;
label_97D6:; return;
label_97D8:; return;
label_97DA:; return;
label_97DC:; return;
label_97DE:; return;
label_97E0:; return;
label_97E3:; return;
label_97E5:; return;
label_97E7:; return;
label_97E8:; return;
label_97E9:; return;
label_97EA:; return;
label_97ED:; return;
label_97F0:; return;
label_97F2:; return;
label_97F5:; return;
label_97F8:; return;
label_97FB:; return;
label_97FC:; return;
label_97FE:; return;
label_9800:; return;
label_9803:; return;
label_9804:; return;
label_9806:; return;
label_9809:; return;
label_980C:; return;
label_980F:; return;
label_9812:; return;
label_9815:; return;
label_9818:; return;
label_981B:; return;
label_981D:; return;
label_981E:; return;
label_9821:; return;
label_9824:; return;
label_9827:; return;
label_9829:; return;
label_982B:; return;
label_982C:; return;
label_982E:; return;
label_982F:; return;
label_9832:; return;
label_9835:; return;
label_9836:; return;
label_9839:; return;
label_983A:; return;
label_983B:; return;
label_983E:; return;
label_983F:; return;
label_9841:; return;
label_9844:; return;
label_9847:; return;
label_984A:; return;
label_984C:; return;
label_984E:; return;
label_984F:; return;
label_9851:; return;
label_9852:; return;
label_9855:; return;
label_9858:; return;
label_9859:; return;
label_985C:; return;
label_985D:; return;
label_985E:; return;
label_9861:; return;
label_9862:; return;
label_9864:; return;
label_9867:; return;
label_986A:; return;
label_986D:; return;
label_9870:; return;
label_9871:; return;
label_9873:; return;
label_9875:; return;
label_9877:; return;
label_9879:; return;
label_987B:; return;
label_987D:; return;
label_987F:; return;
label_9881:; return;
label_9883:; return;
label_9885:; return;
label_9887:; return;
label_9889:; return;
label_988A:; return;
label_988C:; return;
label_988E:; return;
label_9890:; return;
label_9892:; return;
label_9894:; return;
label_9896:; return;
label_9897:; return;
label_9899:; return;
label_989B:; return;
label_989E:; return;
label_98A1:; return;
label_98A2:; return;
label_98A3:; return;
label_98A4:; return;
label_98A5:; return;
label_98A7:; return;
label_98A9:; return;
label_98AB:; return;
label_98AD:; return;
label_98AE:; return;
label_98B0:; return;
label_98B3:; return;
label_98B6:; return;
label_98B7:; return;
label_98B9:; return;
label_98BB:; return;
label_98BD:; return;
label_98BF:; return;
label_98C0:; return;
label_98C2:; return;
label_98C3:; return;
label_98C4:; return;
label_98C5:; return;
label_98C8:; return;
label_98C9:; return;
label_98CC:; return;
label_98CE:; return;
label_98D0:; return;
label_98D2:; return;
label_98D4:; return;
label_98D6:; return;
label_98D8:; return;
label_98DB:; return;
label_98DC:; return;
label_98DF:; return;
label_98E1:; return;
label_98E4:; return;
label_98E7:; return;
label_98E9:; return;
label_98EC:; return;
label_98EE:; return;
label_98F0:; return;
label_98F1:; return;
label_98F4:; return;
label_98F7:; return;
label_98F8:; return;
label_98FB:; return;
label_98FE:; return;
label_9900:; return;
label_9903:; return;
label_9906:; return;
label_9908:; return;
label_990A:; return;
label_990C:; return;
label_990E:; return;
label_990F:; return;
label_9912:; return;
label_9914:; return;
label_9915:; return;
label_9918:; return;
label_991B:; return;
label_991C:; return;
label_991E:; return;
label_9920:; return;
label_9923:; return;
label_9924:; return;
label_9927:; return;
label_9928:; return;
label_9929:; return;
label_992C:; return;
label_992E:; return;
label_9930:; return;
label_9931:; return;
label_9934:; return;
label_9936:; return;
label_9938:; return;
label_993B:; return;
label_993E:; return;
label_993F:; return;
label_9942:; return;
label_9943:; return;
label_9945:; return;
label_9948:; return;
label_994A:; return;
label_994B:; return;
label_994E:; return;
label_9950:; return;
label_9952:; return;
label_9954:; return;
label_9956:; return;
label_9958:; return;
label_9959:; return;
label_995C:; return;
label_995D:; return;
label_9960:; return;
label_9963:; return;
label_9964:; return;
label_9967:; return;
label_9968:; return;
label_996B:; return;
label_996C:; return;
label_996F:; return;
label_9970:; return;
label_9972:; return;
label_9974:; return;
label_9976:; return;
label_9978:; return;
label_997A:; return;
label_997C:; return;
label_997E:; return;
label_9980:; return;
label_9982:; return;
label_9984:; return;
label_9986:; return;
label_9988:; return;
label_998B:; return;
label_998E:; return;
label_998F:; return;
label_9992:; return;
label_9995:; return;
label_9998:; return;
label_999A:; return;
label_999D:; return;
label_99A0:; return;
label_99A2:; return;
label_99A3:; return;
label_99A5:; return;
label_99A7:; return;
label_99A9:; return;
label_99AB:; return;
label_99AD:; return;
label_99AF:; return;
label_99B2:; return;
label_99B4:; return;
label_99B5:; return;
label_99B7:; return;
label_99B9:; return;
label_99BB:; return;
label_99BE:; return;
label_99C1:; return;
label_99C4:; return;
label_99C5:; return;
label_99C7:; return;
label_99C9:; return;
label_99CB:; return;
label_99CD:; return;
label_99CF:; return;
label_99D2:; return;
label_99D4:; return;
label_99D5:; return;
label_99D7:; return;
label_99D9:; return;
label_99DB:; return;
label_99DE:; return;
label_99E1:; return;
label_99E4:; return;
label_99E5:; return;
label_99E7:; return;
label_99E8:; return;
label_99EB:; return;
label_99EE:; return;
label_99F1:; return;
label_99F3:; return;
label_99F4:; return;
label_99F7:; return;
label_99F9:; return;
label_99FA:; return;
label_99FC:; return;
label_99FD:; return;
label_99FF:; return;
label_9A00:; return;
label_9A01:; return;
label_9A04:; return;
label_9A06:; return;
label_9A07:; return;
label_9A09:; return;
label_9A0B:; return;
label_9A0D:; return;
label_9A10:; return;
label_9A12:; return;
label_9A14:; return;
label_9A16:; return;
label_9A18:; return;
label_9A19:; return;
label_9A1A:; return;
label_9A1D:; return;
label_9A20:; return;
label_9A21:; return;
label_9A24:; return;
label_9A26:; return;
label_9A28:; return;
label_9A2A:; return;
label_9A2C:; return;
label_9A2D:; return;
label_9A2E:; return;
label_9A31:; return;
label_9A34:; return;
label_9A35:; return;
label_9A38:; return;
label_9A39:; return;
label_9A3B:; return;
label_9A3D:; return;
label_9A3F:; return;
label_9A41:; return;
label_9A43:; return;
label_9A46:; return;
label_9A47:; return;
label_9A49:; return;
label_9A4A:; return;
label_9A4D:; return;
label_9A4E:; return;
label_9A50:; return;
label_9A53:; return;
label_9A55:; return;
label_9A57:; return;
label_9A59:; return;
label_9A5C:; return;
label_9A5F:; return;
label_9A61:; return;
label_9A63:; return;
label_9A66:; return;
label_9A68:; return;
label_9A6B:; return;
label_9A6E:; return;
label_9A70:; return;
label_9A72:; return;
label_9A74:; return;
label_9A77:; return;
label_9A7A:; return;
label_9A7C:; return;
label_9A7E:; return;
label_9A80:; return;
label_9A83:; return;
label_9A86:; return;
label_9A88:; return;
label_9A8A:; return;
label_9A8D:; return;
label_9A8F:; return;
label_9A92:; return;
label_9A95:; return;
label_9A98:; return;
label_9A9A:; return;
label_9A9D:; return;
label_9A9F:; return;
label_9AA1:; return;
label_9AA4:; return;
label_9AA7:; return;
label_9AAA:; return;
label_9AAC:; return;
label_9AAE:; return;
label_9AB0:; return;
label_9AB2:; return;
label_9AB4:; return;
label_9AB6:; return;
label_9AB8:; return;
label_9ABA:; return;
label_9ABC:; return;
label_9ABE:; return;
label_9AC0:; return;
label_9AC2:; return;
label_9AD7:; return;
label_9AD9:; return;
label_9ADB:; return;
label_9ADD:; return;
label_9AE0:; return;
label_9AE2:; return;
label_9AE4:; return;
label_9AE7:; return;
label_9AE8:; return;
label_9AEA:; return;
label_9AEC:; return;
label_9AEE:; return;
label_9AF1:; return;
label_9AF4:; return;
label_9AF6:; return;
label_9AF9:; return;
label_9AFB:; return;
label_9AFD:; return;
label_9AFF:; return;
label_9B01:; return;
label_9B03:; return;
label_9B05:; return;
label_9B07:; return;
label_9B09:; return;
label_9B0B:; return;
label_9B0D:; return;
label_9B0F:; return;
label_9B11:; return;
label_9B13:; return;
label_9B15:; return;
label_9B17:; return;
label_9B19:; return;
label_9B1C:; return;
label_9B1F:; return;
label_9B21:; return;
label_9B23:; return;
label_9B25:; return;
label_9B26:; return;
label_9B28:; return;
label_9B2A:; return;
label_9B2C:; return;
label_9B2D:; return;
label_9B2F:; return;
label_9B31:; return;
label_9B33:; return;
label_9B34:; return;
label_9B36:; return;
label_9B38:; return;
label_9B3A:; return;
label_9B3C:; return;
label_9B3E:; return;
label_9B40:; return;
label_9B42:; return;
label_9B45:; return;
label_9B48:; return;
label_9B4B:; return;
label_9B4C:; return;
label_9B4E:; return;
label_9B50:; return;
label_9B52:; return;
label_9B54:; return;
label_9B56:; return;
label_9B58:; return;
label_9B5A:; return;
label_9B5D:; return;
label_9B5F:; return;
label_9B61:; return;
label_9B62:; return;
label_9B64:; return;
label_9B66:; return;
label_9B69:; return;
label_9B6B:; return;
label_9B6D:; return;
label_9B6F:; return;
label_9B72:; return;
label_9B74:; return;
label_9B76:; return;
label_9B78:; return;
label_9B7A:; return;
label_9B7C:; return;
label_9B7E:; return;
label_9B80:; return;
label_9B83:; return;
label_9B84:; return;
label_9B86:; return;
label_9B88:; return;
label_9B8A:; return;
label_9B8C:; return;
label_9B8D:; return;
label_9B8F:; return;
label_9B91:; return;
label_9B93:; return;
label_9B95:; return;
label_9B97:; return;
label_9B99:; return;
label_9B9B:; return;
label_9B9D:; return;
label_9B9F:; return;
label_9BA1:; return;
label_9BA2:; return;
label_9BA5:; return;
label_9BA7:; return;
label_9BA9:; return;
label_9BAC:; return;
label_9BAE:; return;
label_9BAF:; return;
label_9BB0:; return;
label_9BB2:; return;
label_9BB4:; return;
label_9BB6:; return;
label_9BB8:; return;
label_9BBA:; return;
label_9BBC:; return;
label_9BBE:; return;
label_9BC0:; return;
label_9BC2:; return;
label_9BC4:; return;
label_9BC6:; return;
label_9BC8:; return;
label_9BCA:; return;
label_9BCD:; return;
label_9BCF:; return;
label_9BD1:; return;
label_9BD3:; return;
label_9BD5:; return;
label_9BD7:; return;
label_9BD9:; return;
label_9BDB:; return;
label_9BDD:; return;
label_9BDF:; return;
label_9BE1:; return;
label_9BE3:; return;
label_9BE5:; return;
label_9BE7:; return;
label_9BE9:; return;
label_9BEB:; return;
label_9BED:; return;
label_9BEF:; return;
label_9BF2:; return;
label_9BF4:; return;
label_9BF6:; return;
label_9BF9:; return;
label_9BFC:; return;
label_9BFE:; return;
label_9C00:; return;
label_9C02:; return;
label_9C04:; return;
label_9C07:; return;
label_9C0A:; return;
label_9C0D:; return;
label_9C0F:; return;
label_9C11:; return;
label_9C14:; return;
label_9C17:; return;
label_9C19:; return;
label_9C1B:; return;
label_9C1D:; return;
label_9C1F:; return;
label_9C21:; return;
label_9C23:; return;
label_9C25:; return;
label_9C27:; return;
label_9C29:; return;
label_9C2A:; return;
label_9C2C:; return;
label_9C2E:; return;
label_9C30:; return;
label_9C32:; return;
label_9C34:; return;
label_9C36:; return;
label_9C38:; return;
label_9C3A:; return;
label_9C3C:; return;
label_9C3E:; return;
label_9C40:; return;
label_9C42:; return;
label_9C44:; return;
label_9C45:; return;
label_9C47:; return;
label_9C49:; return;
label_9C4B:; return;
label_9C4D:; return;
label_9C4F:; return;
label_9C51:; return;
label_9C53:; return;
label_9C54:; return;
label_9C55:; return;
label_9C57:; return;
label_9C59:; return;
label_9C5B:; return;
label_9C5D:; return;
label_9C5E:; return;
label_9C5F:; return;
label_9C61:; return;
label_9C62:; return;
label_9C64:; return;
label_9C65:; return;
label_9C66:; return;
label_9C67:; return;
label_9C68:; return;
label_9C6A:; return;
label_9C6C:; return;
label_9C6D:; return;
label_9C6E:; return;
label_9C6F:; return;
label_9C70:; return;
label_9C72:; return;
label_9C73:; return;
label_9C74:; return;
label_9C77:; return;
label_9C7A:; return;
label_9C7B:; return;
label_9C7E:; return;
label_9C7F:; return;
label_9C81:; return;
label_9C84:; return;
label_9C86:; return;
label_9C89:; return;
label_9C8B:; return;
label_9C8D:; return;
label_9C8F:; return;
label_9C91:; return;
label_9C94:; return;
label_9C95:; return;
label_9C96:; return;
label_9C98:; return;
label_9C9A:; return;
label_9C9C:; return;
label_9C9E:; return;
label_9CA1:; return;
label_9CA3:; return;
label_9CA6:; return;
label_9CA8:; return;
label_9CAA:; return;
label_9CAC:; return;
label_9CAF:; return;
label_9CB0:; return;
label_9CB1:; return;
label_9CB3:; return;
label_9CB5:; return;
label_9CB7:; return;
label_9CBA:; return;
label_9CBC:; return;
label_9CBE:; return;
label_9CC0:; return;
label_9CC3:; return;
label_9CC5:; return;
label_9CC6:; return;
label_9CC9:; return;
label_9CCA:; return;
label_9CCB:; return;
label_9CCD:; return;
label_9CD0:; return;
label_9CD1:; return;
label_9CD2:; return;
label_9CD4:; return;
label_9CD6:; return;
label_9CD8:; return;
label_9CDA:; return;
label_9CDC:; return;
label_9CDE:; return;
label_9CE0:; return;
label_9CE2:; return;
label_9CE5:; return;
label_9CE7:; return;
label_9CE9:; return;
label_9CEB:; return;
label_9CED:; return;
label_9CF0:; return;
label_9CF3:; return;
label_9CF4:; return;
label_9CF5:; return;
label_9CF7:; return;
label_9CF9:; return;
label_9CFA:; return;
label_9CFC:; return;
label_9CFE:; return;
label_9D00:; return;
label_9D02:; return;
label_9D04:; return;
label_9D06:; return;
label_9D09:; return;
label_9D0B:; return;
label_9D0D:; return;
label_9D0E:; return;
label_9D11:; return;
label_9D13:; return;
label_9D16:; return;
label_9D17:; return;
label_9D1A:; return;
label_9D1D:; return;
label_9D1F:; return;
label_9D22:; return;
label_9D24:; return;
label_9D26:; return;
label_9D28:; return;
}

void func_8DA9_b0(void) { /* LoadTanksAndMissiles_IncrementToNextItem */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8DA9_b0");
#endif
label_8DA9:; /* LoadTanksAndMissiles_IncrementToNextItem */
    /* $8DA9: C8 */ nes_cpu_instruction_boundary(0x8DA9, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8DAA:;
    /* $8DAA: C8 */ nes_cpu_instruction_boundary(0x8DAA, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8DAB:;
    /* $8DAB: C0 */ nes_cpu_instruction_boundary(0x8DAB, 2); { int r=g_cpu.Y-0x84; g_cpu.C=(g_cpu.Y>=0x84)?1:0; FLAG_NZ(r&0xFF); }
label_8DAD:;
    /* $8DAD: 90 */ nes_cpu_instruction_boundary(0x8DAD, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0x8D95); return; }
label_8DAF:;
    /* $8DAF: A5 */ nes_cpu_instruction_boundary(0x8DAF, 3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_8DB1:;
    /* $8DB1: C9 */ nes_cpu_instruction_boundary(0x8DB1, 2); { int r=g_cpu.A-0x06; g_cpu.C=(g_cpu.A>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_8DB3:;
    /* $8DB3: 90 */ nes_cpu_instruction_boundary(0x8DB3, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8DB7; }
label_8DB5:;
    /* $8DB5: A9 */ nes_cpu_instruction_boundary(0x8DB5, 2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_8DB7:; /* LoadTanksAndMissiles_endIf_A */
    /* $8DB7: 8D */ nes_cpu_instruction_boundary(0x8DB7, 4); nes_write(0x6877, g_cpu.A);
label_8DBA:;
    /* $8DBA: A9 */ nes_cpu_instruction_boundary(0x8DBA, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8DBC:;
    /* $8DBC: A4 */ nes_cpu_instruction_boundary(0x8DBC, 3); g_cpu.Y = nes_read(0x02); FLAG_NZ(g_cpu.Y);
label_8DBE:;
    /* $8DBE: F0 */ nes_cpu_instruction_boundary(0x8DBE, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8DC6; }
label_8DC0:;
    /* $8DC0: 18 */ nes_cpu_instruction_boundary(0x8DC0, 2); g_cpu.C = 0;
label_8DC1:; /* LoadTanksAndMissiles_loop_mul5 */
    /* $8DC1: 69 */ nes_cpu_instruction_boundary(0x8DC1, 2); { uint16_t r = g_cpu.A + 0x05 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x05); g_cpu.A=r&0xFF; }
label_8DC3:;
    /* $8DC3: 88 */ nes_cpu_instruction_boundary(0x8DC3, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8DC4:;
    /* $8DC4: D0 */ nes_cpu_instruction_boundary(0x8DC4, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0x8DC1, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8DC1;
    }
label_8DC6:; /* LoadTanksAndMissiles_endIf_B */
    /* $8DC6: AC */ nes_cpu_instruction_boundary(0x8DC6, 4); g_cpu.Y = nes_read(0x687B); FLAG_NZ(g_cpu.Y);
label_8DC9:;
    /* $8DC9: F0 */ nes_cpu_instruction_boundary(0x8DC9, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8DCF; }
label_8DCB:;
    /* $8DCB: 69 */ nes_cpu_instruction_boundary(0x8DCB, 2); { uint16_t r = g_cpu.A + 0x4B + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x4B); g_cpu.A=r&0xFF; }
label_8DCD:;
    /* $8DCD: B0 */ nes_cpu_instruction_boundary(0x8DCD, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8DD8; }
label_8DCF:; /* LoadTanksAndMissiles_endIf_C */
    /* $8DCF: AC */ nes_cpu_instruction_boundary(0x8DCF, 4); g_cpu.Y = nes_read(0x687C); FLAG_NZ(g_cpu.Y);
label_8DD2:;
    /* $8DD2: F0 */ nes_cpu_instruction_boundary(0x8DD2, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8DDA; }
label_8DD4:;
    /* $8DD4: 69 */ nes_cpu_instruction_boundary(0x8DD4, 2); { uint16_t r = g_cpu.A + 0x4B + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x4B); g_cpu.A=r&0xFF; }
label_8DD6:;
    /* $8DD6: 90 */ nes_cpu_instruction_boundary(0x8DD6, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8DDA; }
label_8DD8:; /* LoadTanksAndMissiles_capMaxMissiles */
    /* $8DD8: A9 */ nes_cpu_instruction_boundary(0x8DD8, 2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_8DDA:; /* LoadTanksAndMissiles_endIf_D */
    /* $8DDA: 8D */ nes_cpu_instruction_boundary(0x8DDA, 4); nes_write(0x687A, g_cpu.A);
label_8DDD:;
    /* $8DDD: 60 */ nes_cpu_instruction_boundary(0x8DDD, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8D95_b0(void) { /* LoadTanksAndMissiles_loop_tanks */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D95_b0");
#endif
label_8D95:; /* LoadTanksAndMissiles_loop_tanks */
    /* $8D95: B9 */ nes_cpu_instruction_boundary(0x8D95, 4); g_cpu.A = nes_read((0x6888 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8D98:;
    /* $8D98: 29 */ nes_cpu_instruction_boundary(0x8D98, 2); g_cpu.A &= 0xFC; FLAG_NZ(g_cpu.A);
label_8D9A:;
    /* $8D9A: C9 */ nes_cpu_instruction_boundary(0x8D9A, 2); { int r=g_cpu.A-0x20; g_cpu.C=(g_cpu.A>=0x20)?1:0; FLAG_NZ(r&0xFF); }
label_8D9C:;
    /* $8D9C: D0 */ nes_cpu_instruction_boundary(0x8D9C, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8DA3; }
label_8D9E:;
    /* $8D9E: E6 */ nes_cpu_instruction_boundary(0x8D9E, 5); { uint16_t a=0x00; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8DA0:;
    /* $8DA0: 4C */ nes_cpu_instruction_boundary(0x8DA0, 3); nes_cpu_instruction_boundary(0x8DA9, 2); func_8DA9_b0(); return;
label_8DA3:; /* LoadTanksAndMissiles_endIf_etank */
    /* $8DA3: C9 */ nes_cpu_instruction_boundary(0x8DA3, 2); { int r=g_cpu.A-0x24; g_cpu.C=(g_cpu.A>=0x24)?1:0; FLAG_NZ(r&0xFF); }
label_8DA5:;
    /* $8DA5: D0 */ nes_cpu_instruction_boundary(0x8DA5, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8DA9; }
label_8DA7:;
    /* $8DA7: E6 */ nes_cpu_instruction_boundary(0x8DA7, 5); { uint16_t a=0x02; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8DA9:; /* LoadTanksAndMissiles_IncrementToNextItem */
    /* $8DA9: C8 */ nes_cpu_instruction_boundary(0x8DA9, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8DAA:;
    /* $8DAA: C8 */ nes_cpu_instruction_boundary(0x8DAA, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8DAB:;
    /* $8DAB: C0 */ nes_cpu_instruction_boundary(0x8DAB, 2); { int r=g_cpu.Y-0x84; g_cpu.C=(g_cpu.Y>=0x84)?1:0; FLAG_NZ(r&0xFF); }
label_8DAD:;
    /* $8DAD: 90 */ nes_cpu_instruction_boundary(0x8DAD, 2); if (!g_cpu.C) {
    nes_cpu_instruction_boundary(0x8D95, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8D95;
    }
label_8DAF:;
    /* $8DAF: A5 */ nes_cpu_instruction_boundary(0x8DAF, 3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_8DB1:;
    /* $8DB1: C9 */ nes_cpu_instruction_boundary(0x8DB1, 2); { int r=g_cpu.A-0x06; g_cpu.C=(g_cpu.A>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_8DB3:;
    /* $8DB3: 90 */ nes_cpu_instruction_boundary(0x8DB3, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8DB7; }
label_8DB5:;
    /* $8DB5: A9 */ nes_cpu_instruction_boundary(0x8DB5, 2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_8DB7:; /* LoadTanksAndMissiles_endIf_A */
    /* $8DB7: 8D */ nes_cpu_instruction_boundary(0x8DB7, 4); nes_write(0x6877, g_cpu.A);
label_8DBA:;
    /* $8DBA: A9 */ nes_cpu_instruction_boundary(0x8DBA, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8DBC:;
    /* $8DBC: A4 */ nes_cpu_instruction_boundary(0x8DBC, 3); g_cpu.Y = nes_read(0x02); FLAG_NZ(g_cpu.Y);
label_8DBE:;
    /* $8DBE: F0 */ nes_cpu_instruction_boundary(0x8DBE, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8DC6; }
label_8DC0:;
    /* $8DC0: 18 */ nes_cpu_instruction_boundary(0x8DC0, 2); g_cpu.C = 0;
label_8DC1:; /* LoadTanksAndMissiles_loop_mul5 */
    /* $8DC1: 69 */ nes_cpu_instruction_boundary(0x8DC1, 2); { uint16_t r = g_cpu.A + 0x05 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x05); g_cpu.A=r&0xFF; }
label_8DC3:;
    /* $8DC3: 88 */ nes_cpu_instruction_boundary(0x8DC3, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8DC4:;
    /* $8DC4: D0 */ nes_cpu_instruction_boundary(0x8DC4, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0x8DC1, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8DC1;
    }
label_8DC6:; /* LoadTanksAndMissiles_endIf_B */
    /* $8DC6: AC */ nes_cpu_instruction_boundary(0x8DC6, 4); g_cpu.Y = nes_read(0x687B); FLAG_NZ(g_cpu.Y);
label_8DC9:;
    /* $8DC9: F0 */ nes_cpu_instruction_boundary(0x8DC9, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8DCF; }
label_8DCB:;
    /* $8DCB: 69 */ nes_cpu_instruction_boundary(0x8DCB, 2); { uint16_t r = g_cpu.A + 0x4B + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x4B); g_cpu.A=r&0xFF; }
label_8DCD:;
    /* $8DCD: B0 */ nes_cpu_instruction_boundary(0x8DCD, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8DD8; }
label_8DCF:; /* LoadTanksAndMissiles_endIf_C */
    /* $8DCF: AC */ nes_cpu_instruction_boundary(0x8DCF, 4); g_cpu.Y = nes_read(0x687C); FLAG_NZ(g_cpu.Y);
label_8DD2:;
    /* $8DD2: F0 */ nes_cpu_instruction_boundary(0x8DD2, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8DDA; }
label_8DD4:;
    /* $8DD4: 69 */ nes_cpu_instruction_boundary(0x8DD4, 2); { uint16_t r = g_cpu.A + 0x4B + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x4B); g_cpu.A=r&0xFF; }
label_8DD6:;
    /* $8DD6: 90 */ nes_cpu_instruction_boundary(0x8DD6, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8DDA; }
label_8DD8:; /* LoadTanksAndMissiles_capMaxMissiles */
    /* $8DD8: A9 */ nes_cpu_instruction_boundary(0x8DD8, 2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_8DDA:; /* LoadTanksAndMissiles_endIf_D */
    /* $8DDA: 8D */ nes_cpu_instruction_boundary(0x8DDA, 4); nes_write(0x687A, g_cpu.A);
label_8DDD:;
    /* $8DDD: 60 */ nes_cpu_instruction_boundary(0x8DDD, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_84C8_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_84C8_b0");
#endif
label_84C8:;
    /* $84C8: 1A */ nes_cpu_instruction_boundary(0x84C8, 2); /* NOP */
label_84C9:; /* VRAMStruct_DrawIntroBackground_VRAMStructData14_start */
    /* $84C9: 4C */ nes_cpu_instruction_boundary(0x84C9, 3); nes_cpu_instruction_boundary(0xFF4F, 2); func_FF4F(); return;
}

void func_83AD_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_83AD_b0");
#endif
label_83AD:;
    /* $83AD: 85 */ nes_cpu_instruction_boundary(0x83AD, 3); nes_write(0x84, g_cpu.A);
label_83AF:;
    /* $83AF: 85 */ nes_cpu_instruction_boundary(0x83AF, 3); nes_write(0x84, g_cpu.A);
label_83B1:;
    /* $83B1: 85 */ nes_cpu_instruction_boundary(0x83B1, 3); nes_write(0x84, g_cpu.A);
label_83B3:;
    /* $83B3: 85 */ nes_cpu_instruction_boundary(0x83B3, 3); nes_write(0x84, g_cpu.A);
label_83B5:;
    /* $83B5: 85 */ nes_cpu_instruction_boundary(0x83B5, 3); nes_write(0x84, g_cpu.A);
label_83B7:;
    /* $83B7: 85 */ nes_cpu_instruction_boundary(0x83B7, 3); nes_write(0x84, g_cpu.A);
label_83B9:;
    /* $83B9: 85 */ nes_cpu_instruction_boundary(0x83B9, 3); nes_write(0x84, g_cpu.A);
label_83BB:;
    /* $83BB: 85 */ nes_cpu_instruction_boundary(0x83BB, 3); nes_write(0x84, g_cpu.A);
label_83BD:;
    /* $83BD: 85 */ nes_cpu_instruction_boundary(0x83BD, 3); nes_write(0x84, g_cpu.A);
label_83BF:;
    /* $83BF: 85 */ nes_cpu_instruction_boundary(0x83BF, 3); nes_write(0x84, g_cpu.A);
label_83C1:;
    /* $83C1: 85 */ nes_cpu_instruction_boundary(0x83C1, 3); nes_write(0x84, g_cpu.A);
label_83C3:;
    /* $83C3: 85 */ nes_cpu_instruction_boundary(0x83C3, 3); nes_write(0x84, g_cpu.A);
label_83C5:;
    /* $83C5: 85 */ nes_cpu_instruction_boundary(0x83C5, 3); nes_write(0x23, g_cpu.A);
label_83C7:;
    /* $83C7: 60 */ nes_cpu_instruction_boundary(0x83C7, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B452_b0_body(int _entry) { /* InitSFXData */
    switch (_entry) {
        case 1: goto label_B463;
        case 2: goto label_B472;
    }
label_B452:; /* InitSFXData */
    /* $B452: AE */ nes_cpu_instruction_boundary(0xB452, 4); g_cpu.X = nes_read(0x065C); FLAG_NZ(g_cpu.X);
label_B455:;
    /* $B455: 9D */ nes_cpu_instruction_boundary(0xB455, 5); nes_write((0x0660 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B458:;
    /* $B458: 8A */ nes_cpu_instruction_boundary(0xB458, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_B459:;
    /* $B459: F0 */ nes_cpu_instruction_boundary(0xB459, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B477; }
label_B45B:;
    /* $B45B: C9 */ nes_cpu_instruction_boundary(0xB45B, 2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_B45D:;
    /* $B45D: F0 */ nes_cpu_instruction_boundary(0xB45D, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B468; }
label_B45F:;
    /* $B45F: C9 */ nes_cpu_instruction_boundary(0xB45F, 2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_B461:;
    /* $B461: F0 */ nes_cpu_instruction_boundary(0xB461, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B46D; }
label_B463:;
    /* $B463: C9 */ nes_cpu_instruction_boundary(0xB463, 2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_B465:;
    /* $B465: F0 */ nes_cpu_instruction_boundary(0xB465, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B472; }
label_B467:;
    /* $B467: 60 */ nes_cpu_instruction_boundary(0xB467, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B468:; /* InitSFXData_SQ1 */
    /* $B468: 20 */ nes_cpu_instruction_boundary(0xB468, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6A; g_cpu.S--; func_B368_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB468, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B46B:;
    /* $B46B: F0 */ nes_cpu_instruction_boundary(0xB46B, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B47A; }
label_B46D:; /* InitSFXData_SQ2 */
    /* $B46D: 20 */ nes_cpu_instruction_boundary(0xB46D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6F; g_cpu.S--; func_B374_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB46D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B470:;
    /* $B470: F0 */ nes_cpu_instruction_boundary(0xB470, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B47A; }
label_B472:; /* InitSFXData_Tri */
    /* $B472: 20 */ nes_cpu_instruction_boundary(0xB472, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x74; g_cpu.S--; func_B36C_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB472, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B475:;
    /* $B475: F0 */ nes_cpu_instruction_boundary(0xB475, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B47A; }
label_B477:; /* InitSFXData_Noise */
    /* $B477: 20 */ nes_cpu_instruction_boundary(0xB477, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x79; g_cpu.S--; func_B370_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB477, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B47A:; /* InitSFXData_Common */
    /* $B47A: 20 */ nes_cpu_instruction_boundary(0xB47A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x7C; g_cpu.S--; func_B493_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB47A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B47D:;
    /* $B47D: 8A */ nes_cpu_instruction_boundary(0xB47D, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_B47E:;
    /* $B47E: 9D */ nes_cpu_instruction_boundary(0xB47E, 5); nes_write((0x0652 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B481:;
    /* $B481: A9 */ nes_cpu_instruction_boundary(0xB481, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B483:;
    /* $B483: 9D */ nes_cpu_instruction_boundary(0xB483, 5); nes_write((0x0665 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B486:;
    /* $B486: 9D */ nes_cpu_instruction_boundary(0xB486, 5); nes_write((0x0670 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B489:;
    /* $B489: 9D */ nes_cpu_instruction_boundary(0xB489, 5); nes_write((0x0674 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B48C:;
    /* $B48C: 9D */ nes_cpu_instruction_boundary(0xB48C, 5); nes_write((0x0678 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B48F:;
    /* $B48F: 8D */ nes_cpu_instruction_boundary(0xB48F, 4); nes_write(0x0607, g_cpu.A);
label_B492:;
    /* $B492: 60 */ nes_cpu_instruction_boundary(0xB492, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B452_b0(void) { /* InitSFXData */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B452_b0");
#endif
    func_B452_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B463_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B463_b0");
#endif
    func_B452_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B472_b0(void) { /* InitSFXData_Tri */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B472_b0");
#endif
    func_B452_b0_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B374_b0(void) { /* LoadSFXData_SQ2 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B374_b0");
#endif
label_B374:; /* LoadSFXData_SQ2 */
    /* $B374: A9 */ nes_cpu_instruction_boundary(0xB374, 2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_B376:; /* LoadSFXData_Common */
    /* $B376: 85 */ nes_cpu_instruction_boundary(0xB376, 3); nes_write(0xE0, g_cpu.A);
label_B378:;
    /* $B378: A9 */ nes_cpu_instruction_boundary(0xB378, 2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_B37A:;
    /* $B37A: 85 */ nes_cpu_instruction_boundary(0xB37A, 3); nes_write(0xE1, g_cpu.A);
label_B37C:;
    /* $B37C: 84 */ nes_cpu_instruction_boundary(0xB37C, 3); nes_write(0xE2, g_cpu.Y);
label_B37E:;
    /* $B37E: A9 */ nes_cpu_instruction_boundary(0xB37E, 2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B380:;
    /* $B380: 85 */ nes_cpu_instruction_boundary(0xB380, 3); nes_write(0xE3, g_cpu.A);
label_B382:;
    /* $B382: A0 */ nes_cpu_instruction_boundary(0xB382, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_B384:; /* LoadSFXData_loop_LoadSFXRegisters */
    /* $B384: B1 */ nes_cpu_instruction_boundary(0xB384, 5); g_cpu.A = nes_read((nes_read16zp(0xE2) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B386:;
    /* $B386: 91 */ nes_cpu_instruction_boundary(0xB386, 6); nes_write((nes_read16zp(0xE0) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B388:;
    /* $B388: C8 */ nes_cpu_instruction_boundary(0xB388, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B389:;
    /* $B389: 98 */ nes_cpu_instruction_boundary(0xB389, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_B38A:;
    /* $B38A: C9 */ nes_cpu_instruction_boundary(0xB38A, 2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_B38C:;
    /* $B38C: D0 */ nes_cpu_instruction_boundary(0xB38C, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xB384, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B384;
    }
label_B38E:;
    /* $B38E: 60 */ nes_cpu_instruction_boundary(0xB38E, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B36C_b0(void) { /* LoadSFXData_Tri */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B36C_b0");
#endif
label_B36C:; /* LoadSFXData_Tri */
    /* $B36C: A9 */ nes_cpu_instruction_boundary(0xB36C, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_B36E:;
    /* $B36E: D0 */ nes_cpu_instruction_boundary(0xB36E, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B376; }
label_B370:; /* LoadSFXData_Noise */
    /* $B370: A9 */ nes_cpu_instruction_boundary(0xB370, 2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_B372:;
    /* $B372: D0 */ nes_cpu_instruction_boundary(0xB372, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B376; }
label_B374:; /* LoadSFXData_SQ2 */
    /* $B374: A9 */ nes_cpu_instruction_boundary(0xB374, 2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_B376:; /* LoadSFXData_Common */
    /* $B376: 85 */ nes_cpu_instruction_boundary(0xB376, 3); nes_write(0xE0, g_cpu.A);
label_B378:;
    /* $B378: A9 */ nes_cpu_instruction_boundary(0xB378, 2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_B37A:;
    /* $B37A: 85 */ nes_cpu_instruction_boundary(0xB37A, 3); nes_write(0xE1, g_cpu.A);
label_B37C:;
    /* $B37C: 84 */ nes_cpu_instruction_boundary(0xB37C, 3); nes_write(0xE2, g_cpu.Y);
label_B37E:;
    /* $B37E: A9 */ nes_cpu_instruction_boundary(0xB37E, 2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B380:;
    /* $B380: 85 */ nes_cpu_instruction_boundary(0xB380, 3); nes_write(0xE3, g_cpu.A);
label_B382:;
    /* $B382: A0 */ nes_cpu_instruction_boundary(0xB382, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_B384:; /* LoadSFXData_loop_LoadSFXRegisters */
    /* $B384: B1 */ nes_cpu_instruction_boundary(0xB384, 5); g_cpu.A = nes_read((nes_read16zp(0xE2) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B386:;
    /* $B386: 91 */ nes_cpu_instruction_boundary(0xB386, 6); nes_write((nes_read16zp(0xE0) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B388:;
    /* $B388: C8 */ nes_cpu_instruction_boundary(0xB388, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B389:;
    /* $B389: 98 */ nes_cpu_instruction_boundary(0xB389, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_B38A:;
    /* $B38A: C9 */ nes_cpu_instruction_boundary(0xB38A, 2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_B38C:;
    /* $B38C: D0 */ nes_cpu_instruction_boundary(0xB38C, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xB384, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B384;
    }
label_B38E:;
    /* $B38E: 60 */ nes_cpu_instruction_boundary(0xB38E, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B370_b0(void) { /* LoadSFXData_Noise */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B370_b0");
#endif
label_B370:; /* LoadSFXData_Noise */
    /* $B370: A9 */ nes_cpu_instruction_boundary(0xB370, 2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_B372:;
    /* $B372: D0 */ nes_cpu_instruction_boundary(0xB372, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B376; }
label_B374:; /* LoadSFXData_SQ2 */
    /* $B374: A9 */ nes_cpu_instruction_boundary(0xB374, 2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_B376:; /* LoadSFXData_Common */
    /* $B376: 85 */ nes_cpu_instruction_boundary(0xB376, 3); nes_write(0xE0, g_cpu.A);
label_B378:;
    /* $B378: A9 */ nes_cpu_instruction_boundary(0xB378, 2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_B37A:;
    /* $B37A: 85 */ nes_cpu_instruction_boundary(0xB37A, 3); nes_write(0xE1, g_cpu.A);
label_B37C:;
    /* $B37C: 84 */ nes_cpu_instruction_boundary(0xB37C, 3); nes_write(0xE2, g_cpu.Y);
label_B37E:;
    /* $B37E: A9 */ nes_cpu_instruction_boundary(0xB37E, 2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B380:;
    /* $B380: 85 */ nes_cpu_instruction_boundary(0xB380, 3); nes_write(0xE3, g_cpu.A);
label_B382:;
    /* $B382: A0 */ nes_cpu_instruction_boundary(0xB382, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_B384:; /* LoadSFXData_loop_LoadSFXRegisters */
    /* $B384: B1 */ nes_cpu_instruction_boundary(0xB384, 5); g_cpu.A = nes_read((nes_read16zp(0xE2) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B386:;
    /* $B386: 91 */ nes_cpu_instruction_boundary(0xB386, 6); nes_write((nes_read16zp(0xE0) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B388:;
    /* $B388: C8 */ nes_cpu_instruction_boundary(0xB388, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B389:;
    /* $B389: 98 */ nes_cpu_instruction_boundary(0xB389, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_B38A:;
    /* $B38A: C9 */ nes_cpu_instruction_boundary(0xB38A, 2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_B38C:;
    /* $B38C: D0 */ nes_cpu_instruction_boundary(0xB38C, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xB384, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B384;
    }
label_B38E:;
    /* $B38E: 60 */ nes_cpu_instruction_boundary(0xB38E, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B493_b0(void) { /* UpdateContFlags */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B493_b0");
#endif
label_B493:; /* UpdateContFlags */
    /* $B493: AE */ nes_cpu_instruction_boundary(0xB493, 4); g_cpu.X = nes_read(0x065C); FLAG_NZ(g_cpu.X);
label_B496:;
    /* $B496: BD */ nes_cpu_instruction_boundary(0xB496, 4); g_cpu.A = nes_read((0x0688 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B499:;
    /* $B499: 29 */ nes_cpu_instruction_boundary(0xB499, 2); g_cpu.A &= 0x00; FLAG_NZ(g_cpu.A);
label_B49B:;
    /* $B49B: 0D */ nes_cpu_instruction_boundary(0xB49B, 4); g_cpu.A |= nes_read(0x064D); FLAG_NZ(g_cpu.A);
label_B49E:;
    /* $B49E: 9D */ nes_cpu_instruction_boundary(0xB49E, 5); nes_write((0x0688 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B4A1:;
    /* $B4A1: 60 */ nes_cpu_instruction_boundary(0xB4A1, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A93E_b0(void) { /* CopyMap */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A93E_b0");
#endif
label_A93E:; /* CopyMap */
    /* $A93E: A9 */ nes_cpu_instruction_boundary(0xA93E, 2); g_cpu.A = 0x3E; FLAG_NZ(g_cpu.A);
label_A940:;
    /* $A940: 85 */ nes_cpu_instruction_boundary(0xA940, 3); nes_write(0x00, g_cpu.A);
label_A942:;
    /* $A942: A9 */ nes_cpu_instruction_boundary(0xA942, 2); g_cpu.A = 0xA5; FLAG_NZ(g_cpu.A);
label_A944:;
    /* $A944: 85 */ nes_cpu_instruction_boundary(0xA944, 3); nes_write(0x01, g_cpu.A);
label_A946:;
    /* $A946: A9 */ nes_cpu_instruction_boundary(0xA946, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A948:;
    /* $A948: 85 */ nes_cpu_instruction_boundary(0xA948, 3); nes_write(0x02, g_cpu.A);
label_A94A:;
    /* $A94A: A9 */ nes_cpu_instruction_boundary(0xA94A, 2); g_cpu.A = 0x70; FLAG_NZ(g_cpu.A);
label_A94C:;
    /* $A94C: 85 */ nes_cpu_instruction_boundary(0xA94C, 3); nes_write(0x03, g_cpu.A);
label_A94E:;
    /* $A94E: A2 */ nes_cpu_instruction_boundary(0xA94E, 2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_A950:; /* CopyMap_loop */
    /* $A950: A0 */ nes_cpu_instruction_boundary(0xA950, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A952:; /* CopyMap_endIf_A */
    /* $A952: B1 */ nes_cpu_instruction_boundary(0xA952, 5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A954:;
    /* $A954: 91 */ nes_cpu_instruction_boundary(0xA954, 6); nes_write((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A956:;
    /* $A956: C8 */ nes_cpu_instruction_boundary(0xA956, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A957:;
    /* $A957: D0 */ nes_cpu_instruction_boundary(0xA957, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xA952, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A952;
    }
label_A959:;
    /* $A959: E6 */ nes_cpu_instruction_boundary(0xA959, 5); { uint16_t a=0x01; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A95B:;
    /* $A95B: E6 */ nes_cpu_instruction_boundary(0xA95B, 5); { uint16_t a=0x03; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A95D:;
    /* $A95D: CA */ nes_cpu_instruction_boundary(0xA95D, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A95E:;
    /* $A95E: D0 */ nes_cpu_instruction_boundary(0xA95E, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xA950, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A950;
    }
label_A960:;
    /* $A960: 60 */ nes_cpu_instruction_boundary(0xA960, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B920_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B920_b0");
#endif
label_B920:;
    /* $B920: B8 */ nes_cpu_instruction_boundary(0xB920, 2); g_cpu.V = 0;
label_B921:; /* StatueRaiseSFXInit */
    /* $B921: AD */ nes_cpu_instruction_boundary(0xB921, 4); g_cpu.A = nes_read(0xB283); FLAG_NZ(g_cpu.A);
label_B924:;
    /* $B924: 8D */ nes_cpu_instruction_boundary(0xB924, 4); nes_write(0x0610, g_cpu.A);
label_B927:;
    /* $B927: AD */ nes_cpu_instruction_boundary(0xB927, 4); g_cpu.A = nes_read(0xB284); FLAG_NZ(g_cpu.A);
label_B92A:;
    /* $B92A: 29 */ nes_cpu_instruction_boundary(0xB92A, 2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_B92C:;
    /* $B92C: 8D */ nes_cpu_instruction_boundary(0xB92C, 4); nes_write(0x0611, g_cpu.A);
label_B92F:;
    /* $B92F: A9 */ nes_cpu_instruction_boundary(0xB92F, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B931:;
    /* $B931: 8D */ nes_cpu_instruction_boundary(0xB931, 4); nes_write(0x0613, g_cpu.A);
label_B934:;
    /* $B934: A9 */ nes_cpu_instruction_boundary(0xB934, 2); g_cpu.A = 0x0B; FLAG_NZ(g_cpu.A);
label_B936:;
    /* $B936: 8D */ nes_cpu_instruction_boundary(0xB936, 4); nes_write(0x0612, g_cpu.A);
label_B939:;
    /* $B939: A9 */ nes_cpu_instruction_boundary(0xB939, 2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_B93B:;
    /* $B93B: A0 */ nes_cpu_instruction_boundary(0xB93B, 2); g_cpu.Y = 0x81; FLAG_NZ(g_cpu.Y);
label_B93D:;
    /* $B93D: 4C */ nes_cpu_instruction_boundary(0xB93D, 3); nes_cpu_instruction_boundary(0xB452, 2); func_B452_b0(); return;
}

void func_B329_b0_body(int _entry) { /* RunSFXSQ1InitRoutine */
    switch (_entry) {
        case 1: goto label_B330;
    }
label_B329:; /* RunSFXSQ1InitRoutine */
    /* $B329: AD */ nes_cpu_instruction_boundary(0xB329, 4); g_cpu.A = nes_read(0x0681); FLAG_NZ(g_cpu.A);
label_B32C:;
    /* $B32C: A2 */ nes_cpu_instruction_boundary(0xB32C, 2); g_cpu.X = 0x93; FLAG_NZ(g_cpu.X);
label_B32E:;
    /* $B32E: D0 */ nes_cpu_instruction_boundary(0xB32E, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B337; }
label_B330:; /* RunSFXSQ1ContRoutine */
    /* $B330: AD */ nes_cpu_instruction_boundary(0xB330, 4); g_cpu.A = nes_read(0x0689); FLAG_NZ(g_cpu.A);
label_B333:;
    /* $B333: A2 */ nes_cpu_instruction_boundary(0xB333, 2); g_cpu.X = 0x98; FLAG_NZ(g_cpu.X);
label_B335:;
    /* $B335: D0 */ nes_cpu_instruction_boundary(0xB335, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B337; }
label_B337:; /* RunSoundRoutine */
    /* $B337: 20 */ nes_cpu_instruction_boundary(0xB337, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x39; g_cpu.S--; func_B4BD_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB337, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B33A:;
    /* $B33A: 6C */ nes_cpu_instruction_boundary(0xB33A, 5); { uint16_t _jt = nes_read16zp(0xE2); nes_cpu_instruction_boundary(_jt, 2); call_by_address_tail(_jt, -1); return; }
}

void func_B329_b0(void) { /* RunSFXSQ1InitRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B329_b0");
#endif
    func_B329_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B330_b0(void) { /* RunSFXSQ1ContRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B330_b0");
#endif
    func_B329_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B4A9_b0(void) { /* IncrementSFXFrame */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4A9_b0");
#endif
label_B4A9:; /* IncrementSFXFrame */
    /* $B4A9: AE */ nes_cpu_instruction_boundary(0xB4A9, 4); g_cpu.X = nes_read(0x065C); FLAG_NZ(g_cpu.X);
label_B4AC:;
    /* $B4AC: FE */ nes_cpu_instruction_boundary(0xB4AC, 7); { uint16_t a=(0x0665 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B4AF:;
    /* $B4AF: BD */ nes_cpu_instruction_boundary(0xB4AF, 4); g_cpu.A = nes_read((0x0665 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B4B2:;
    /* $B4B2: DD */ nes_cpu_instruction_boundary(0xB4B2, 4); { uint8_t m=nes_read((0x0660 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B4B5:;
    /* $B4B5: D0 */ nes_cpu_instruction_boundary(0xB4B5, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B4BC; }
label_B4B7:;
    /* $B4B7: A9 */ nes_cpu_instruction_boundary(0xB4B7, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B4B9:;
    /* $B4B9: 9D */ nes_cpu_instruction_boundary(0xB4B9, 5); nes_write((0x0665 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B4BC:; /* IncrementSFXFrame_RTS */
    /* $B4BC: 60 */ nes_cpu_instruction_boundary(0xB4BC, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B58F_b0(void) { /* EndNoiseSFX */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B58F_b0");
#endif
label_B58F:; /* EndNoiseSFX */
    /* $B58F: 20 */ nes_cpu_instruction_boundary(0xB58F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x91; g_cpu.S--; func_B4A2_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB58F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B592:;
    /* $B592: A9 */ nes_cpu_instruction_boundary(0xB592, 2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_B594:;
    /* $B594: 8D */ nes_cpu_instruction_boundary(0xB594, 4); nes_write(0x400C, g_cpu.A);
label_B597:; /* EndNoiseSFX_RTS */
    /* $B597: 60 */ nes_cpu_instruction_boundary(0xB597, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B587_b0(void) { /* GotoInitSFXData */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B587_b0");
#endif
label_B587:; /* GotoInitSFXData */
    /* $B587: 4C */ nes_cpu_instruction_boundary(0xB587, 3); nes_cpu_instruction_boundary(0xB452, 2); func_B452_b0(); return;
}

void func_B4A2_b0(void) { /* ClearCurrentSoundFlagsAndContFlags */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4A2_b0");
#endif
label_B4A2:; /* ClearCurrentSoundFlagsAndContFlags */
    /* $B4A2: A9 */ nes_cpu_instruction_boundary(0xB4A2, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B4A4:;
    /* $B4A4: 8D */ nes_cpu_instruction_boundary(0xB4A4, 4); nes_write(0x064D, g_cpu.A);
label_B4A7:;
    /* $B4A7: F0 */ nes_cpu_instruction_boundary(0xB4A7, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB493); return; }
label_B4A9:; /* IncrementSFXFrame */
    /* $B4A9: AE */ nes_cpu_instruction_boundary(0xB4A9, 4); g_cpu.X = nes_read(0x065C); FLAG_NZ(g_cpu.X);
label_B4AC:;
    /* $B4AC: FE */ nes_cpu_instruction_boundary(0xB4AC, 7); { uint16_t a=(0x0665 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B4AF:;
    /* $B4AF: BD */ nes_cpu_instruction_boundary(0xB4AF, 4); g_cpu.A = nes_read((0x0665 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B4B2:;
    /* $B4B2: DD */ nes_cpu_instruction_boundary(0xB4B2, 4); { uint8_t m=nes_read((0x0660 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B4B5:;
    /* $B4B5: D0 */ nes_cpu_instruction_boundary(0xB4B5, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B4BC; }
label_B4B7:;
    /* $B4B7: A9 */ nes_cpu_instruction_boundary(0xB4B7, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B4B9:;
    /* $B4B9: 9D */ nes_cpu_instruction_boundary(0xB4B9, 5); nes_write((0x0665 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B4BC:; /* IncrementSFXFrame_RTS */
    /* $B4BC: 60 */ nes_cpu_instruction_boundary(0xB4BC, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B5A5_b0(void) { /* MultiSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5A5_b0");
#endif
label_B5A5:; /* MultiSFXInit */
    /* $B5A5: 8D */ nes_cpu_instruction_boundary(0xB5A5, 4); nes_write(0x0664, g_cpu.A);
label_B5A8:;
    /* $B5A8: 20 */ nes_cpu_instruction_boundary(0xB5A8, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAA; g_cpu.S--; func_B374_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB5A8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B5AB:;
    /* $B5AB: 20 */ nes_cpu_instruction_boundary(0xB5AB, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAD; g_cpu.S--; func_B493_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB5AB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B5AE:;
    /* $B5AE: A9 */ nes_cpu_instruction_boundary(0xB5AE, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_B5B0:;
    /* $B5B0: 8D */ nes_cpu_instruction_boundary(0xB5B0, 4); nes_write(0x0653, g_cpu.A);
label_B5B3:;
    /* $B5B3: A9 */ nes_cpu_instruction_boundary(0xB5B3, 2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_B5B5:;
    /* $B5B5: 8D */ nes_cpu_instruction_boundary(0xB5B5, 4); nes_write(0x0654, g_cpu.A);
label_B5B8:;
    /* $B5B8: A9 */ nes_cpu_instruction_boundary(0xB5B8, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B5BA:;
    /* $B5BA: 8D */ nes_cpu_instruction_boundary(0xB5BA, 4); nes_write(0x0689, g_cpu.A);
label_B5BD:;
    /* $B5BD: 8D */ nes_cpu_instruction_boundary(0xB5BD, 4); nes_write(0x0671, g_cpu.A);
label_B5C0:;
    /* $B5C0: 8D */ nes_cpu_instruction_boundary(0xB5C0, 4); nes_write(0x0675, g_cpu.A);
label_B5C3:;
    /* $B5C3: 8D */ nes_cpu_instruction_boundary(0xB5C3, 4); nes_write(0x0679, g_cpu.A);
label_B5C6:;
    /* $B5C6: 8D */ nes_cpu_instruction_boundary(0xB5C6, 4); nes_write(0x0669, g_cpu.A);
label_B5C9:;
    /* $B5C9: 8D */ nes_cpu_instruction_boundary(0xB5C9, 4); nes_write(0x0607, g_cpu.A);
label_B5CC:;
    /* $B5CC: 60 */ nes_cpu_instruction_boundary(0xB5CC, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B62C_b0(void) { /* WriteSQ1SQ2PeriodLow */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B62C_b0");
#endif
label_B62C:; /* WriteSQ1SQ2PeriodLow */
    /* $B62C: AD */ nes_cpu_instruction_boundary(0xB62C, 4); g_cpu.A = nes_read(0x0675); FLAG_NZ(g_cpu.A);
label_B62F:;
    /* $B62F: 8D */ nes_cpu_instruction_boundary(0xB62F, 4); nes_write(0x4006, g_cpu.A);
label_B632:;
    /* $B632: AD */ nes_cpu_instruction_boundary(0xB632, 4); g_cpu.A = nes_read(0x0679); FLAG_NZ(g_cpu.A);
label_B635:;
    /* $B635: 8D */ nes_cpu_instruction_boundary(0xB635, 4); nes_write(0x4002, g_cpu.A);
label_B638:;
    /* $B638: 60 */ nes_cpu_instruction_boundary(0xB638, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B5CD_b0(void) { /* EndMultiSFX */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5CD_b0");
#endif
label_B5CD:; /* EndMultiSFX */
    /* $B5CD: A9 */ nes_cpu_instruction_boundary(0xB5CD, 2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_B5CF:;
    /* $B5CF: 8D */ nes_cpu_instruction_boundary(0xB5CF, 4); nes_write(0x4000, g_cpu.A);
label_B5D2:;
    /* $B5D2: 8D */ nes_cpu_instruction_boundary(0xB5D2, 4); nes_write(0x4004, g_cpu.A);
label_B5D5:;
    /* $B5D5: A9 */ nes_cpu_instruction_boundary(0xB5D5, 2); g_cpu.A = 0x7F; FLAG_NZ(g_cpu.A);
label_B5D7:;
    /* $B5D7: 8D */ nes_cpu_instruction_boundary(0xB5D7, 4); nes_write(0x4001, g_cpu.A);
label_B5DA:;
    /* $B5DA: 8D */ nes_cpu_instruction_boundary(0xB5DA, 4); nes_write(0x4005, g_cpu.A);
label_B5DD:;
    /* $B5DD: 20 */ nes_cpu_instruction_boundary(0xB5DD, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDF; g_cpu.S--; func_B4A2_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB5DD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B5E0:;
    /* $B5E0: A9 */ nes_cpu_instruction_boundary(0xB5E0, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B5E2:;
    /* $B5E2: 8D */ nes_cpu_instruction_boundary(0xB5E2, 4); nes_write(0x0653, g_cpu.A);
label_B5E5:;
    /* $B5E5: 8D */ nes_cpu_instruction_boundary(0xB5E5, 4); nes_write(0x0654, g_cpu.A);
label_B5E8:;
    /* $B5E8: EE */ nes_cpu_instruction_boundary(0xB5E8, 6); { uint16_t a=0x0607; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B5EB:;
    /* $B5EB: 60 */ nes_cpu_instruction_boundary(0xB5EB, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B6F2_b0(void) { /* EndSQ1SFX */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6F2_b0");
#endif
label_B6F2:; /* EndSQ1SFX */
    /* $B6F2: A9 */ nes_cpu_instruction_boundary(0xB6F2, 2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_B6F4:;
    /* $B6F4: 8D */ nes_cpu_instruction_boundary(0xB6F4, 4); nes_write(0x4000, g_cpu.A);
label_B6F7:;
    /* $B6F7: A9 */ nes_cpu_instruction_boundary(0xB6F7, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B6F9:;
    /* $B6F9: 8D */ nes_cpu_instruction_boundary(0xB6F9, 4); nes_write(0x0653, g_cpu.A);
label_B6FC:;
    /* $B6FC: 20 */ nes_cpu_instruction_boundary(0xB6FC, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFE; g_cpu.S--; func_B4A2_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB6FC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B6FF:;
    /* $B6FF: EE */ nes_cpu_instruction_boundary(0xB6FF, 6); { uint16_t a=0x0607; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B702:;
    /* $B702: 60 */ nes_cpu_instruction_boundary(0xB702, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B896_b0(void) { /* EndTriSFX */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B896_b0");
#endif
label_B896:; /* EndTriSFX */
    /* $B896: A9 */ nes_cpu_instruction_boundary(0xB896, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B898:;
    /* $B898: 8D */ nes_cpu_instruction_boundary(0xB898, 4); nes_write(0x4008, g_cpu.A);
label_B89B:;
    /* $B89B: 8D */ nes_cpu_instruction_boundary(0xB89B, 4); nes_write(0x0655, g_cpu.A);
label_B89E:;
    /* $B89E: A9 */ nes_cpu_instruction_boundary(0xB89E, 2); g_cpu.A = 0x18; FLAG_NZ(g_cpu.A);
label_B8A0:;
    /* $B8A0: 8D */ nes_cpu_instruction_boundary(0xB8A0, 4); nes_write(0x400B, g_cpu.A);
label_B8A3:;
    /* $B8A3: 20 */ nes_cpu_instruction_boundary(0xB8A3, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA5; g_cpu.S--; func_B4A2_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB8A3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B8A6:; /* EndTriSFX_RTS */
    /* $B8A6: 60 */ nes_cpu_instruction_boundary(0xB8A6, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B98C_b0(void) { /* DecreaseSFXTriPeriod */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B98C_b0");
#endif
label_B98C:; /* DecreaseSFXTriPeriod */
    /* $B98C: 38 */ nes_cpu_instruction_boundary(0xB98C, 2); g_cpu.C = 1;
label_B98D:;
    /* $B98D: AD */ nes_cpu_instruction_boundary(0xB98D, 4); g_cpu.A = nes_read(0x0610); FLAG_NZ(g_cpu.A);
label_B990:;
    /* $B990: ED */ nes_cpu_instruction_boundary(0xB990, 4); { uint8_t m=nes_read(0x0612); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B993:;
    /* $B993: 8D */ nes_cpu_instruction_boundary(0xB993, 4); nes_write(0x0610, g_cpu.A);
label_B996:;
    /* $B996: AD */ nes_cpu_instruction_boundary(0xB996, 4); g_cpu.A = nes_read(0x0611); FLAG_NZ(g_cpu.A);
label_B999:;
    /* $B999: ED */ nes_cpu_instruction_boundary(0xB999, 4); { uint8_t m=nes_read(0x0613); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B99C:;
    /* $B99C: 8D */ nes_cpu_instruction_boundary(0xB99C, 4); nes_write(0x0611, g_cpu.A);
label_B99F:;
    /* $B99F: 60 */ nes_cpu_instruction_boundary(0xB99F, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B869_b0(void) { /* WriteSFXTriPeriod */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B869_b0");
#endif
label_B869:; /* WriteSFXTriPeriod */
    /* $B869: AD */ nes_cpu_instruction_boundary(0xB869, 4); g_cpu.A = nes_read(0x0610); FLAG_NZ(g_cpu.A);
label_B86C:;
    /* $B86C: 8D */ nes_cpu_instruction_boundary(0xB86C, 4); nes_write(0x400A, g_cpu.A);
label_B86F:;
    /* $B86F: AD */ nes_cpu_instruction_boundary(0xB86F, 4); g_cpu.A = nes_read(0x0611); FLAG_NZ(g_cpu.A);
label_B872:;
    /* $B872: 09 */ nes_cpu_instruction_boundary(0xB872, 2); g_cpu.A |= 0x08; FLAG_NZ(g_cpu.A);
label_B874:;
    /* $B874: 8D */ nes_cpu_instruction_boundary(0xB874, 4); nes_write(0x400B, g_cpu.A);
label_B877:;
    /* $B877: 60 */ nes_cpu_instruction_boundary(0xB877, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B978_b0(void) { /* IncreaseSFXTriPeriod */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B978_b0");
#endif
label_B978:; /* IncreaseSFXTriPeriod */
    /* $B978: 18 */ nes_cpu_instruction_boundary(0xB978, 2); g_cpu.C = 0;
label_B979:;
    /* $B979: AD */ nes_cpu_instruction_boundary(0xB979, 4); g_cpu.A = nes_read(0x0610); FLAG_NZ(g_cpu.A);
label_B97C:;
    /* $B97C: 6D */ nes_cpu_instruction_boundary(0xB97C, 4); { uint8_t m=nes_read(0x0612); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B97F:;
    /* $B97F: 8D */ nes_cpu_instruction_boundary(0xB97F, 4); nes_write(0x0610, g_cpu.A);
label_B982:;
    /* $B982: AD */ nes_cpu_instruction_boundary(0xB982, 4); g_cpu.A = nes_read(0x0611); FLAG_NZ(g_cpu.A);
label_B985:;
    /* $B985: 6D */ nes_cpu_instruction_boundary(0xB985, 4); { uint8_t m=nes_read(0x0613); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B988:;
    /* $B988: 8D */ nes_cpu_instruction_boundary(0xB988, 4); nes_write(0x0611, g_cpu.A);
label_B98B:;
    /* $B98B: 60 */ nes_cpu_instruction_boundary(0xB98B, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B9A0_b0(void) { /* DivideSFXTriPeriod */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9A0_b0");
#endif
label_B9A0:; /* DivideSFXTriPeriod */
    /* $B9A0: AD */ nes_cpu_instruction_boundary(0xB9A0, 4); g_cpu.A = nes_read(0x0610); FLAG_NZ(g_cpu.A);
label_B9A3:;
    /* $B9A3: 48 */ nes_cpu_instruction_boundary(0xB9A3, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B9A4:;
    /* $B9A4: AD */ nes_cpu_instruction_boundary(0xB9A4, 4); g_cpu.A = nes_read(0x0611); FLAG_NZ(g_cpu.A);
label_B9A7:;
    /* $B9A7: 48 */ nes_cpu_instruction_boundary(0xB9A7, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B9A8:;
    /* $B9A8: A9 */ nes_cpu_instruction_boundary(0xB9A8, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B9AA:;
    /* $B9AA: 8D */ nes_cpu_instruction_boundary(0xB9AA, 4); nes_write(0x0617, g_cpu.A);
label_B9AD:;
    /* $B9AD: A2 */ nes_cpu_instruction_boundary(0xB9AD, 2); g_cpu.X = 0x10; FLAG_NZ(g_cpu.X);
label_B9AF:;
    /* $B9AF: 2E */ nes_cpu_instruction_boundary(0xB9AF, 6); { uint16_t a=0x0610; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9B2:;
    /* $B9B2: 2E */ nes_cpu_instruction_boundary(0xB9B2, 6); { uint16_t a=0x0611; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9B5:; /* DivideSFXTriPeriod_loop */
    /* $B9B5: 2E */ nes_cpu_instruction_boundary(0xB9B5, 6); { uint16_t a=0x0617; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9B8:;
    /* $B9B8: AD */ nes_cpu_instruction_boundary(0xB9B8, 4); g_cpu.A = nes_read(0x0617); FLAG_NZ(g_cpu.A);
label_B9BB:;
    /* $B9BB: CD */ nes_cpu_instruction_boundary(0xB9BB, 4); { uint8_t m=nes_read(0x0616); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B9BE:;
    /* $B9BE: 90 */ nes_cpu_instruction_boundary(0xB9BE, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_B9C6; }
label_B9C0:;
    /* $B9C0: ED */ nes_cpu_instruction_boundary(0xB9C0, 4); { uint8_t m=nes_read(0x0616); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9C3:;
    /* $B9C3: 8D */ nes_cpu_instruction_boundary(0xB9C3, 4); nes_write(0x0617, g_cpu.A);
label_B9C6:; /* DivideSFXTriPeriod_endIf_A */
    /* $B9C6: 2E */ nes_cpu_instruction_boundary(0xB9C6, 6); { uint16_t a=0x0610; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9C9:;
    /* $B9C9: 2E */ nes_cpu_instruction_boundary(0xB9C9, 6); { uint16_t a=0x0611; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9CC:;
    /* $B9CC: CA */ nes_cpu_instruction_boundary(0xB9CC, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_B9CD:;
    /* $B9CD: D0 */ nes_cpu_instruction_boundary(0xB9CD, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xB9B5, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B9B5;
    }
label_B9CF:;
    /* $B9CF: AD */ nes_cpu_instruction_boundary(0xB9CF, 4); g_cpu.A = nes_read(0x0610); FLAG_NZ(g_cpu.A);
label_B9D2:;
    /* $B9D2: 8D */ nes_cpu_instruction_boundary(0xB9D2, 4); nes_write(0x0614, g_cpu.A);
label_B9D5:;
    /* $B9D5: AD */ nes_cpu_instruction_boundary(0xB9D5, 4); g_cpu.A = nes_read(0x0611); FLAG_NZ(g_cpu.A);
label_B9D8:;
    /* $B9D8: 8D */ nes_cpu_instruction_boundary(0xB9D8, 4); nes_write(0x0615, g_cpu.A);
label_B9DB:;
    /* $B9DB: 68 */ nes_cpu_instruction_boundary(0xB9DB, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_B9DC:;
    /* $B9DC: 8D */ nes_cpu_instruction_boundary(0xB9DC, 4); nes_write(0x0611, g_cpu.A);
label_B9DF:;
    /* $B9DF: 68 */ nes_cpu_instruction_boundary(0xB9DF, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_B9E0:;
    /* $B9E0: 8D */ nes_cpu_instruction_boundary(0xB9E0, 4); nes_write(0x0610, g_cpu.A);
label_B9E3:;
    /* $B9E3: 60 */ nes_cpu_instruction_boundary(0xB9E3, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B8C3_b0(void) { /* RndTriPeriods */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8C3_b0");
#endif
label_B8C3:; /* RndTriPeriods */
    /* $B8C3: A5 */ nes_cpu_instruction_boundary(0xB8C3, 3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_B8C5:;
    /* $B8C5: 09 */ nes_cpu_instruction_boundary(0xB8C5, 2); g_cpu.A |= 0x6C; FLAG_NZ(g_cpu.A);
label_B8C7:;
    /* $B8C7: 8D */ nes_cpu_instruction_boundary(0xB8C7, 4); nes_write(0x400A, g_cpu.A);
label_B8CA:;
    /* $B8CA: 29 */ nes_cpu_instruction_boundary(0xB8CA, 2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_B8CC:;
    /* $B8CC: 09 */ nes_cpu_instruction_boundary(0xB8CC, 2); g_cpu.A |= 0xF8; FLAG_NZ(g_cpu.A);
label_B8CE:;
    /* $B8CE: 8D */ nes_cpu_instruction_boundary(0xB8CE, 4); nes_write(0x400B, g_cpu.A);
label_B8D1:;
    /* $B8D1: 60 */ nes_cpu_instruction_boundary(0xB8D1, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BA41_b0(void) { /* UpdateVolumeEnvelope */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA41_b0");
#endif
label_BA41:; /* UpdateVolumeEnvelope */
    /* $BA41: BD */ nes_cpu_instruction_boundary(0xBA41, 4); g_cpu.A = nes_read((0x062E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA44:;
    /* $BA44: F0 */ nes_cpu_instruction_boundary(0xBA44, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BA8B; }
label_BA46:;
    /* $BA46: 85 */ nes_cpu_instruction_boundary(0xBA46, 3); nes_write(0xEB, g_cpu.A);
label_BA48:;
    /* $BA48: 20 */ nes_cpu_instruction_boundary(0xBA48, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x4A; g_cpu.S--; func_BA08_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBA48, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BA4B:;
    /* $BA4B: BD */ nes_cpu_instruction_boundary(0xBA4B, 4); g_cpu.A = nes_read((0x066C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA4E:;
    /* $BA4E: C9 */ nes_cpu_instruction_boundary(0xBA4E, 2); { int r=g_cpu.A-0x10; g_cpu.C=(g_cpu.A>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_BA50:;
    /* $BA50: F0 */ nes_cpu_instruction_boundary(0xBA50, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BA99; }
label_BA52:;
    /* $BA52: A0 */ nes_cpu_instruction_boundary(0xBA52, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_BA54:; /* UpdateVolumeEnvelope_loop_multiply */
    /* $BA54: C6 */ nes_cpu_instruction_boundary(0xBA54, 5); { uint16_t a=0xEB; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA56:;
    /* $BA56: F0 */ nes_cpu_instruction_boundary(0xBA56, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BA5C; }
label_BA58:;
    /* $BA58: C8 */ nes_cpu_instruction_boundary(0xBA58, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_BA59:;
    /* $BA59: C8 */ nes_cpu_instruction_boundary(0xBA59, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_BA5A:;
    /* $BA5A: D0 */ nes_cpu_instruction_boundary(0xBA5A, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xBA54, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BA54;
    }
label_BA5C:; /* UpdateVolumeEnvelope_exitLoop_multiply */
    /* $BA5C: B9 */ nes_cpu_instruction_boundary(0xBA5C, 4); g_cpu.A = nes_read((0xBCB0 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA5F:;
    /* $BA5F: 85 */ nes_cpu_instruction_boundary(0xBA5F, 3); nes_write(0xEC, g_cpu.A);
label_BA61:;
    /* $BA61: B9 */ nes_cpu_instruction_boundary(0xBA61, 4); g_cpu.A = nes_read((0xBCB1 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA64:;
    /* $BA64: 85 */ nes_cpu_instruction_boundary(0xBA64, 3); nes_write(0xED, g_cpu.A);
label_BA66:;
    /* $BA66: BC */ nes_cpu_instruction_boundary(0xBA66, 4); g_cpu.Y = nes_read((0x066A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BA69:;
    /* $BA69: B1 */ nes_cpu_instruction_boundary(0xBA69, 5); g_cpu.A = nes_read((nes_read16zp(0xEC) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA6B:;
    /* $BA6B: 85 */ nes_cpu_instruction_boundary(0xBA6B, 3); nes_write(0xEA, g_cpu.A);
label_BA6D:;
    /* $BA6D: C9 */ nes_cpu_instruction_boundary(0xBA6D, 2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_BA6F:;
    /* $BA6F: F0 */ nes_cpu_instruction_boundary(0xBA6F, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BA90; }
label_BA71:;
    /* $BA71: C9 */ nes_cpu_instruction_boundary(0xBA71, 2); { int r=g_cpu.A-0xF0; g_cpu.C=(g_cpu.A>=0xF0)?1:0; FLAG_NZ(r&0xFF); }
label_BA73:;
    /* $BA73: F0 */ nes_cpu_instruction_boundary(0xBA73, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BA95; }
label_BA75:;
    /* $BA75: BD */ nes_cpu_instruction_boundary(0xBA75, 4); g_cpu.A = nes_read((0x0628 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA78:;
    /* $BA78: 29 */ nes_cpu_instruction_boundary(0xBA78, 2); g_cpu.A &= 0xF0; FLAG_NZ(g_cpu.A);
label_BA7A:;
    /* $BA7A: 05 */ nes_cpu_instruction_boundary(0xBA7A, 3); g_cpu.A |= nes_read(0xEA); FLAG_NZ(g_cpu.A);
label_BA7C:;
    /* $BA7C: A8 */ nes_cpu_instruction_boundary(0xBA7C, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BA7D:; /* UpdateVolumeEnvelope_updateRegister_inc */
    /* $BA7D: FE */ nes_cpu_instruction_boundary(0xBA7D, 7); { uint16_t a=(0x066A + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA80:; /* UpdateVolumeEnvelope_updateRegister_noInc */
    /* $BA80: BD */ nes_cpu_instruction_boundary(0xBA80, 4); g_cpu.A = nes_read((0x0653 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA83:;
    /* $BA83: D0 */ nes_cpu_instruction_boundary(0xBA83, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BA8B; }
label_BA85:;
    /* $BA85: 8A */ nes_cpu_instruction_boundary(0xBA85, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BA86:;
    /* $BA86: F0 */ nes_cpu_instruction_boundary(0xBA86, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BA8C; }
label_BA88:; /* UpdateVolumeEnvelope_writeSQ2_VOL */
    /* $BA88: 8C */ nes_cpu_instruction_boundary(0xBA88, 4); nes_write(0x4004, g_cpu.Y);
label_BA8B:; /* UpdateVolumeEnvelope_RTS */
    /* $BA8B: 60 */ nes_cpu_instruction_boundary(0xBA8B, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_BA8C:; /* UpdateVolumeEnvelope_writeSQ1_VOL */
    /* $BA8C: 8C */ nes_cpu_instruction_boundary(0xBA8C, 4); nes_write(0x4000, g_cpu.Y);
label_BA8F:;
    /* $BA8F: 60 */ nes_cpu_instruction_boundary(0xBA8F, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_BA90:; /* UpdateVolumeEnvelope_keepPrevVolume */
    /* $BA90: BC */ nes_cpu_instruction_boundary(0xBA90, 4); g_cpu.Y = nes_read((0x0628 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BA93:;
    /* $BA93: D0 */ nes_cpu_instruction_boundary(0xBA93, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xBA80, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BA80;
    }
label_BA95:; /* UpdateVolumeEnvelope_killVolume */
    /* $BA95: A0 */ nes_cpu_instruction_boundary(0xBA95, 2); g_cpu.Y = 0x10; FLAG_NZ(g_cpu.Y);
label_BA97:;
    /* $BA97: D0 */ nes_cpu_instruction_boundary(0xBA97, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xBA80, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BA80;
    }
label_BA99:; /* UpdateVolumeEnvelope_noVolume */
    /* $BA99: A0 */ nes_cpu_instruction_boundary(0xBA99, 2); g_cpu.Y = 0x10; FLAG_NZ(g_cpu.Y);
label_BA9B:;
    /* $BA9B: D0 */ nes_cpu_instruction_boundary(0xBA9B, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xBA7D, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BA7D;
    }
label_BA9D:; /* GotoEndOrLoopMusic */
    /* $BA9D: 20 */ nes_cpu_instruction_boundary(0xBA9D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x9F; g_cpu.S--; func_B3F0_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBA9D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BAA0:;
    /* $BAA0: 60 */ nes_cpu_instruction_boundary(0xBAA0, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BA08_b0(void) { /* LoadMusicSQ1SQ2Periods */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA08_b0");
#endif
label_BA08:; /* LoadMusicSQ1SQ2Periods */
    /* $BA08: AD */ nes_cpu_instruction_boundary(0xBA08, 4); g_cpu.A = nes_read(0x0607); FLAG_NZ(g_cpu.A);
label_BA0B:;
    /* $BA0B: F0 */ nes_cpu_instruction_boundary(0xBA0B, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BA36; }
label_BA0D:;
    /* $BA0D: A9 */ nes_cpu_instruction_boundary(0xBA0D, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BA0F:;
    /* $BA0F: 8D */ nes_cpu_instruction_boundary(0xBA0F, 4); nes_write(0x0607, g_cpu.A);
label_BA12:;
    /* $BA12: AD */ nes_cpu_instruction_boundary(0xBA12, 4); g_cpu.A = nes_read(0x0648); FLAG_NZ(g_cpu.A);
label_BA15:;
    /* $BA15: 8D */ nes_cpu_instruction_boundary(0xBA15, 4); nes_write(0x4001, g_cpu.A);
label_BA18:;
    /* $BA18: AD */ nes_cpu_instruction_boundary(0xBA18, 4); g_cpu.A = nes_read(0x0600); FLAG_NZ(g_cpu.A);
label_BA1B:;
    /* $BA1B: 8D */ nes_cpu_instruction_boundary(0xBA1B, 4); nes_write(0x4002, g_cpu.A);
label_BA1E:;
    /* $BA1E: AD */ nes_cpu_instruction_boundary(0xBA1E, 4); g_cpu.A = nes_read(0x0601); FLAG_NZ(g_cpu.A);
label_BA21:;
    /* $BA21: 8D */ nes_cpu_instruction_boundary(0xBA21, 4); nes_write(0x4003, g_cpu.A);
label_BA24:;
    /* $BA24: AD */ nes_cpu_instruction_boundary(0xBA24, 4); g_cpu.A = nes_read(0x0649); FLAG_NZ(g_cpu.A);
label_BA27:;
    /* $BA27: 8D */ nes_cpu_instruction_boundary(0xBA27, 4); nes_write(0x4005, g_cpu.A);
label_BA2A:;
    /* $BA2A: AD */ nes_cpu_instruction_boundary(0xBA2A, 4); g_cpu.A = nes_read(0x0604); FLAG_NZ(g_cpu.A);
label_BA2D:;
    /* $BA2D: 8D */ nes_cpu_instruction_boundary(0xBA2D, 4); nes_write(0x4006, g_cpu.A);
label_BA30:;
    /* $BA30: AD */ nes_cpu_instruction_boundary(0xBA30, 4); g_cpu.A = nes_read(0x0605); FLAG_NZ(g_cpu.A);
label_BA33:;
    /* $BA33: 8D */ nes_cpu_instruction_boundary(0xBA33, 4); nes_write(0x4007, g_cpu.A);
label_BA36:; /* LoadMusicSQ1SQ2Periods_RTS */
    /* $BA36: 60 */ nes_cpu_instruction_boundary(0xBA36, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B3F0_b0(void) { /* EndOrLoopMusic */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3F0_b0");
#endif
label_B3F0:; /* EndOrLoopMusic */
    /* $B3F0: AD */ nes_cpu_instruction_boundary(0xB3F0, 4); g_cpu.A = nes_read(0x062C); FLAG_NZ(g_cpu.A);
label_B3F3:;
    /* $B3F3: F0 */ nes_cpu_instruction_boundary(0xB3F3, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_B404; }
label_B3F5:;
    /* $B3F5: AD */ nes_cpu_instruction_boundary(0xB3F5, 4); g_cpu.A = nes_read(0x068D); FLAG_NZ(g_cpu.A);
label_B3F8:;
    /* $B3F8: 8D */ nes_cpu_instruction_boundary(0xB3F8, 4); nes_write(0x065D, g_cpu.A);
label_B3FB:;
    /* $B3FB: 60 */ nes_cpu_instruction_boundary(0xB3FB, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B3FC:; /* CheckMusicFlags */
    /* $B3FC: AD */ nes_cpu_instruction_boundary(0xB3FC, 4); g_cpu.A = nes_read(0x068D); FLAG_NZ(g_cpu.A);
label_B3FF:;
    /* $B3FF: CD */ nes_cpu_instruction_boundary(0xB3FF, 4); { uint8_t m=nes_read(0x064D); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B402:;
    /* $B402: F0 */ nes_cpu_instruction_boundary(0xB402, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B40A; }
label_B404:; /* InitializeSoundAddresses */
    /* $B404: 20 */ nes_cpu_instruction_boundary(0xB404, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x06; g_cpu.S--; func_B41D_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB404, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B407:;
    /* $B407: 20 */ nes_cpu_instruction_boundary(0xB407, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x09; g_cpu.S--; func_B43E_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB407, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B40A:; /* GotoClearSpecialAddresses */
    /* $B40A: 20 */ nes_cpu_instruction_boundary(0xB40A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0C; g_cpu.S--; func_B40E_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB40A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B40D:;
    /* $B40D: 60 */ nes_cpu_instruction_boundary(0xB40D, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BA37_b0(void) { /* UpdateAllVolumeEnvelopes */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA37_b0");
#endif
label_BA37:; /* UpdateAllVolumeEnvelopes */
    /* $BA37: A2 */ nes_cpu_instruction_boundary(0xBA37, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_BA39:;
    /* $BA39: 20 */ nes_cpu_instruction_boundary(0xBA39, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3B; g_cpu.S--; func_BA41_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBA39, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BA3C:;
    /* $BA3C: E8 */ nes_cpu_instruction_boundary(0xBA3C, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_BA3D:;
    /* $BA3D: 20 */ nes_cpu_instruction_boundary(0xBA3D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3F; g_cpu.S--; func_BA41_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBA3D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BA40:;
    /* $BA40: 60 */ nes_cpu_instruction_boundary(0xBA40, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B9F3_b0(void) { /* ResetVolumeIndex */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9F3_b0");
#endif
label_B9F3:; /* ResetVolumeIndex */
    /* $B9F3: AD */ nes_cpu_instruction_boundary(0xB9F3, 4); g_cpu.A = nes_read(0x0640); FLAG_NZ(g_cpu.A);
label_B9F6:;
    /* $B9F6: C9 */ nes_cpu_instruction_boundary(0xB9F6, 2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_B9F8:;
    /* $B9F8: D0 */ nes_cpu_instruction_boundary(0xB9F8, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B9FD; }
label_B9FA:;
    /* $B9FA: 8D */ nes_cpu_instruction_boundary(0xB9FA, 4); nes_write(0x066A, g_cpu.A);
label_B9FD:; /* ResetVolumeIndex_endIf_A */
    /* $B9FD: AD */ nes_cpu_instruction_boundary(0xB9FD, 4); g_cpu.A = nes_read(0x0641); FLAG_NZ(g_cpu.A);
label_BA00:;
    /* $BA00: C9 */ nes_cpu_instruction_boundary(0xBA00, 2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_BA02:;
    /* $BA02: D0 */ nes_cpu_instruction_boundary(0xBA02, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BA07; }
label_BA04:;
    /* $BA04: 8D */ nes_cpu_instruction_boundary(0xBA04, 4); nes_write(0x066B, g_cpu.A);
label_BA07:; /* ResetVolumeIndex_endIf_B */
    /* $BA07: 60 */ nes_cpu_instruction_boundary(0xBA07, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BB1C_b0(void) { /* LoadNextMusicChannelInstr_Continued */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB1C_b0");
#endif
label_BB1C:; /* LoadNextMusicChannelInstr_Continued */
    /* $BB1C: 98 */ nes_cpu_instruction_boundary(0xBB1C, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_BB1D:;
    /* $BB1D: 29 */ nes_cpu_instruction_boundary(0xBB1D, 2); g_cpu.A &= 0xB0; FLAG_NZ(g_cpu.A);
label_BB1F:;
    /* $BB1F: C9 */ nes_cpu_instruction_boundary(0xBB1F, 2); { int r=g_cpu.A-0xB0; g_cpu.C=(g_cpu.A>=0xB0)?1:0; FLAG_NZ(r&0xFF); }
label_BB21:;
    /* $BB21: D0 */ nes_cpu_instruction_boundary(0xBB21, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB40; }
label_BB23:;
    /* $BB23: 98 */ nes_cpu_instruction_boundary(0xBB23, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_BB24:;
    /* $BB24: 29 */ nes_cpu_instruction_boundary(0xBB24, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_BB26:;
    /* $BB26: 18 */ nes_cpu_instruction_boundary(0xBB26, 2); g_cpu.C = 0;
label_BB27:;
    /* $BB27: 6D */ nes_cpu_instruction_boundary(0xBB27, 4); { uint8_t m=nes_read(0x062B); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BB2A:;
    /* $BB2A: A8 */ nes_cpu_instruction_boundary(0xBB2A, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BB2B:;
    /* $BB2B: B9 */ nes_cpu_instruction_boundary(0xBB2B, 4); g_cpu.A = nes_read((0xBEF7 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB2E:;
    /* $BB2E: 9D */ nes_cpu_instruction_boundary(0xBB2E, 5); nes_write((0x0620 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB31:;
    /* $BB31: A8 */ nes_cpu_instruction_boundary(0xBB31, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BB32:;
    /* $BB32: 8A */ nes_cpu_instruction_boundary(0xBB32, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BB33:;
    /* $BB33: C9 */ nes_cpu_instruction_boundary(0xBB33, 2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_BB35:;
    /* $BB35: F0 */ nes_cpu_instruction_boundary(0xBB35, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBB19); return; }
label_BB37:; /* LoadNextMusicChannelInstr_Continued_ReturnFromUpdateMusicTriLinearCount */
    /* $BB37: BC */ nes_cpu_instruction_boundary(0xBB37, 4); g_cpu.Y = nes_read((0x0638 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BB3A:;
    /* $BB3A: FE */ nes_cpu_instruction_boundary(0xBB3A, 7); { uint16_t a=(0x0638 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB3D:;
    /* $BB3D: B1 */ nes_cpu_instruction_boundary(0xBB3D, 5); g_cpu.A = nes_read((nes_read16zp(0xE6) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB3F:;
    /* $BB3F: A8 */ nes_cpu_instruction_boundary(0xBB3F, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BB40:; /* LoadNextMusicChannelInstr_Continued_noteOrRest */
    /* $BB40: 8A */ nes_cpu_instruction_boundary(0xBB40, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BB41:;
    /* $BB41: C9 */ nes_cpu_instruction_boundary(0xBB41, 2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_BB43:;
    /* $BB43: F0 */ nes_cpu_instruction_boundary(0xBB43, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBB16); return; }
label_BB45:;
    /* $BB45: 48 */ nes_cpu_instruction_boundary(0xBB45, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_BB46:;
    /* $BB46: AE */ nes_cpu_instruction_boundary(0xBB46, 4); g_cpu.X = nes_read(0x064B); FLAG_NZ(g_cpu.X);
label_BB49:;
    /* $BB49: B9 */ nes_cpu_instruction_boundary(0xBB49, 4); g_cpu.A = nes_read((0xBE78 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB4C:;
    /* $BB4C: F0 */ nes_cpu_instruction_boundary(0xBB4C, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB59; }
label_BB4E:;
    /* $BB4E: 9D */ nes_cpu_instruction_boundary(0xBB4E, 5); nes_write((0x0600 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB51:;
    /* $BB51: B9 */ nes_cpu_instruction_boundary(0xBB51, 4); g_cpu.A = nes_read((0xBE77 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB54:;
    /* $BB54: 09 */ nes_cpu_instruction_boundary(0xBB54, 2); g_cpu.A |= 0x08; FLAG_NZ(g_cpu.A);
label_BB56:;
    /* $BB56: 9D */ nes_cpu_instruction_boundary(0xBB56, 5); nes_write((0x0601 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB59:; /* LoadNextMusicChannelInstr_Continued_endIf_A */
    /* $BB59: A8 */ nes_cpu_instruction_boundary(0xBB59, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BB5A:;
    /* $BB5A: 68 */ nes_cpu_instruction_boundary(0xBB5A, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_BB5B:;
    /* $BB5B: AA */ nes_cpu_instruction_boundary(0xBB5B, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BB5C:;
    /* $BB5C: 98 */ nes_cpu_instruction_boundary(0xBB5C, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_BB5D:;
    /* $BB5D: D0 */ nes_cpu_instruction_boundary(0xBB5D, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB6E; }
label_BB5F:;
    /* $BB5F: A9 */ nes_cpu_instruction_boundary(0xBB5F, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BB61:;
    /* $BB61: 85 */ nes_cpu_instruction_boundary(0xBB61, 3); nes_write(0xEA, g_cpu.A);
label_BB63:;
    /* $BB63: 8A */ nes_cpu_instruction_boundary(0xBB63, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BB64:;
    /* $BB64: C9 */ nes_cpu_instruction_boundary(0xBB64, 2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_BB66:;
    /* $BB66: F0 */ nes_cpu_instruction_boundary(0xBB66, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB73; }
label_BB68:;
    /* $BB68: A9 */ nes_cpu_instruction_boundary(0xBB68, 2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_BB6A:;
    /* $BB6A: 85 */ nes_cpu_instruction_boundary(0xBB6A, 3); nes_write(0xEA, g_cpu.A);
label_BB6C:;
    /* $BB6C: D0 */ nes_cpu_instruction_boundary(0xBB6C, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB73; }
label_BB6E:; /* LoadNextMusicChannelInstr_Continued_else_B */
    /* $BB6E: BD */ nes_cpu_instruction_boundary(0xBB6E, 4); g_cpu.A = nes_read((0x0628 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB71:;
    /* $BB71: 85 */ nes_cpu_instruction_boundary(0xBB71, 3); nes_write(0xEA, g_cpu.A);
label_BB73:; /* LoadNextMusicChannelInstr_Continued_endIf_B */
    /* $BB73: 8A */ nes_cpu_instruction_boundary(0xBB73, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BB74:;
    /* $BB74: DE */ nes_cpu_instruction_boundary(0xBB74, 7); { uint16_t a=(0x0653 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB77:;
    /* $BB77: DD */ nes_cpu_instruction_boundary(0xBB77, 4); { uint8_t m=nes_read((0x0653 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BB7A:;
    /* $BB7A: F0 */ nes_cpu_instruction_boundary(0xBB7A, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BBB1; }
label_BB7C:;
    /* $BB7C: FE */ nes_cpu_instruction_boundary(0xBB7C, 7); { uint16_t a=(0x0653 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB7F:;
    /* $BB7F: AC */ nes_cpu_instruction_boundary(0xBB7F, 4); g_cpu.Y = nes_read(0x064B); FLAG_NZ(g_cpu.Y);
label_BB82:;
    /* $BB82: 8A */ nes_cpu_instruction_boundary(0xBB82, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BB83:;
    /* $BB83: C9 */ nes_cpu_instruction_boundary(0xBB83, 2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_BB85:;
    /* $BB85: F0 */ nes_cpu_instruction_boundary(0xBB85, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB8C; }
label_BB87:;
    /* $BB87: BD */ nes_cpu_instruction_boundary(0xBB87, 4); g_cpu.A = nes_read((0x062E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB8A:;
    /* $BB8A: D0 */ nes_cpu_instruction_boundary(0xBB8A, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB91; }
label_BB8C:; /* LoadNextMusicChannelInstr_Continued_if_Cntrl0Data */
    /* $BB8C: A5 */ nes_cpu_instruction_boundary(0xBB8C, 3); g_cpu.A = nes_read(0xEA); FLAG_NZ(g_cpu.A);
label_BB8E:;
    /* $BB8E: 99 */ nes_cpu_instruction_boundary(0xBB8E, 5); nes_write((0x4000 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BB91:; /* LoadNextMusicChannelInstr_Continued_endIf_Cntrl0Data */
    /* $BB91: A5 */ nes_cpu_instruction_boundary(0xBB91, 3); g_cpu.A = nes_read(0xEA); FLAG_NZ(g_cpu.A);
label_BB93:;
    /* $BB93: 9D */ nes_cpu_instruction_boundary(0xBB93, 5); nes_write((0x066C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB96:;
    /* $BB96: B9 */ nes_cpu_instruction_boundary(0xBB96, 4); g_cpu.A = nes_read((0x0600 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB99:;
    /* $BB99: 99 */ nes_cpu_instruction_boundary(0xBB99, 5); nes_write((0x4002 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BB9C:;
    /* $BB9C: B9 */ nes_cpu_instruction_boundary(0xBB9C, 4); g_cpu.A = nes_read((0x0601 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB9F:;
    /* $BB9F: 99 */ nes_cpu_instruction_boundary(0xBB9F, 5); nes_write((0x4003 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BBA2:;
    /* $BBA2: BD */ nes_cpu_instruction_boundary(0xBBA2, 4); g_cpu.A = nes_read((0x0648 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBA5:;
    /* $BBA5: 99 */ nes_cpu_instruction_boundary(0xBBA5, 5); nes_write((0x4001 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BBA8:; /* SetMusicInstrDelayToLength */
    /* $BBA8: BD */ nes_cpu_instruction_boundary(0xBBA8, 4); g_cpu.A = nes_read((0x0620 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBAB:;
    /* $BBAB: 9D */ nes_cpu_instruction_boundary(0xBBAB, 5); nes_write((0x0640 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BBAE:;
    /* $BBAE: 4C */ nes_cpu_instruction_boundary(0xBBAE, 3); nes_cpu_instruction_boundary(0xBAB3, 2); func_BAB3_b0(); return;
label_BBB1:; /* MusicChannelIsUsedBySFX */
    /* $BBB1: FE */ nes_cpu_instruction_boundary(0xBBB1, 7); { uint16_t a=(0x0653 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BBB4:;
    /* $BBB4: 4C */ nes_cpu_instruction_boundary(0xBBB4, 3); nes_cpu_instruction_boundary(0xBBA8, 2);
    goto label_BBA8;
}

void func_BBDE_b0(void) { /* MusicChannelInstr_SongNoteNoise */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BBDE_b0");
#endif
label_BBDE:; /* MusicChannelInstr_SongNoteNoise */
    /* $BBDE: AD */ nes_cpu_instruction_boundary(0xBBDE, 4); g_cpu.A = nes_read(0x0688); FLAG_NZ(g_cpu.A);
label_BBE1:;
    /* $BBE1: 29 */ nes_cpu_instruction_boundary(0xBBE1, 2); g_cpu.A &= 0xFC; FLAG_NZ(g_cpu.A);
label_BBE3:;
    /* $BBE3: D0 */ nes_cpu_instruction_boundary(0xBBE3, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BBF7; }
label_BBE5:;
    /* $BBE5: B9 */ nes_cpu_instruction_boundary(0xBBE5, 4); g_cpu.A = nes_read((0xB200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBE8:;
    /* $BBE8: 8D */ nes_cpu_instruction_boundary(0xBBE8, 4); nes_write(0x400C, g_cpu.A);
label_BBEB:;
    /* $BBEB: B9 */ nes_cpu_instruction_boundary(0xBBEB, 4); g_cpu.A = nes_read((0xB201 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBEE:;
    /* $BBEE: 8D */ nes_cpu_instruction_boundary(0xBBEE, 4); nes_write(0x400E, g_cpu.A);
label_BBF1:;
    /* $BBF1: B9 */ nes_cpu_instruction_boundary(0xBBF1, 4); g_cpu.A = nes_read((0xB202 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBF4:;
    /* $BBF4: 8D */ nes_cpu_instruction_boundary(0xBBF4, 4); nes_write(0x400F, g_cpu.A);
label_BBF7:; /* MusicChannelInstr_SongNoteNoise_endIf_A */
    /* $BBF7: 4C */ nes_cpu_instruction_boundary(0xBBF7, 3); nes_cpu_instruction_boundary(0xBBA8, 2); func_BBA8_b0(); return;
}

void func_BBB7_b0(void) { /* UpdateMusicTriLinearCount */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BBB7_b0");
#endif
label_BBB7:; /* UpdateMusicTriLinearCount */
    /* $BBB7: AD */ nes_cpu_instruction_boundary(0xBBB7, 4); g_cpu.A = nes_read(0x062D); FLAG_NZ(g_cpu.A);
label_BBBA:;
    /* $BBBA: 29 */ nes_cpu_instruction_boundary(0xBBBA, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_BBBC:;
    /* $BBBC: D0 */ nes_cpu_instruction_boundary(0xBBBC, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BBD8; }
label_BBBE:;
    /* $BBBE: AD */ nes_cpu_instruction_boundary(0xBBBE, 4); g_cpu.A = nes_read(0x062D); FLAG_NZ(g_cpu.A);
label_BBC1:;
    /* $BBC1: 29 */ nes_cpu_instruction_boundary(0xBBC1, 2); g_cpu.A &= 0xF0; FLAG_NZ(g_cpu.A);
label_BBC3:;
    /* $BBC3: D0 */ nes_cpu_instruction_boundary(0xBBC3, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BBC9; }
label_BBC5:;
    /* $BBC5: 98 */ nes_cpu_instruction_boundary(0xBBC5, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_BBC6:;
    /* $BBC6: 4C */ nes_cpu_instruction_boundary(0xBBC6, 3); nes_cpu_instruction_boundary(0xBBCD, 2); func_BBCD_b0(); return;
label_BBC9:; /* UpdateMusicTriLinearCount_endIf_A */
    /* $BBC9: A9 */ nes_cpu_instruction_boundary(0xBBC9, 2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_BBCB:;
    /* $BBCB: D0 */ nes_cpu_instruction_boundary(0xBBCB, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BBD8; }
label_BBCD:; /* UpdateMusicTriLinearCount_setToNoteLength */
    /* $BBCD: 18 */ nes_cpu_instruction_boundary(0xBBCD, 2); g_cpu.C = 0;
label_BBCE:;
    /* $BBCE: 69 */ nes_cpu_instruction_boundary(0xBBCE, 2); { uint16_t r = g_cpu.A + 0xFF + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xFF); g_cpu.A=r&0xFF; }
label_BBD0:;
    /* $BBD0: 0A */ nes_cpu_instruction_boundary(0xBBD0, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_BBD1:;
    /* $BBD1: 0A */ nes_cpu_instruction_boundary(0xBBD1, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_BBD2:;
    /* $BBD2: C9 */ nes_cpu_instruction_boundary(0xBBD2, 2); { int r=g_cpu.A-0x3C; g_cpu.C=(g_cpu.A>=0x3C)?1:0; FLAG_NZ(r&0xFF); }
label_BBD4:;
    /* $BBD4: 90 */ nes_cpu_instruction_boundary(0xBBD4, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_BBD8; }
label_BBD6:;
    /* $BBD6: A9 */ nes_cpu_instruction_boundary(0xBBD6, 2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_BBD8:; /* UpdateMusicTriLinearCount_endIf_B */
    /* $BBD8: 8D */ nes_cpu_instruction_boundary(0xBBD8, 4); nes_write(0x062A, g_cpu.A);
label_BBDB:;
    /* $BBDB: 4C */ nes_cpu_instruction_boundary(0xBBDB, 3); nes_cpu_instruction_boundary(0xBB37, 2); func_BB37_b0(); return;
}

void func_BBA8_b0(void) { /* SetMusicInstrDelayToLength */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BBA8_b0");
#endif
label_BBA8:; /* SetMusicInstrDelayToLength */
    /* $BBA8: BD */ nes_cpu_instruction_boundary(0xBBA8, 4); g_cpu.A = nes_read((0x0620 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBAB:;
    /* $BBAB: 9D */ nes_cpu_instruction_boundary(0xBBAB, 5); nes_write((0x0640 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BBAE:;
    /* $BBAE: 4C */ nes_cpu_instruction_boundary(0xBBAE, 3); nes_cpu_instruction_boundary(0xBAB3, 2); func_BAB3_b0(); return;
}

void func_BBCD_b0(void) { /* UpdateMusicTriLinearCount_setToNoteLength */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BBCD_b0");
#endif
label_BBCD:; /* UpdateMusicTriLinearCount_setToNoteLength */
    /* $BBCD: 18 */ nes_cpu_instruction_boundary(0xBBCD, 2); g_cpu.C = 0;
label_BBCE:;
    /* $BBCE: 69 */ nes_cpu_instruction_boundary(0xBBCE, 2); { uint16_t r = g_cpu.A + 0xFF + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xFF); g_cpu.A=r&0xFF; }
label_BBD0:;
    /* $BBD0: 0A */ nes_cpu_instruction_boundary(0xBBD0, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_BBD1:;
    /* $BBD1: 0A */ nes_cpu_instruction_boundary(0xBBD1, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_BBD2:;
    /* $BBD2: C9 */ nes_cpu_instruction_boundary(0xBBD2, 2); { int r=g_cpu.A-0x3C; g_cpu.C=(g_cpu.A>=0x3C)?1:0; FLAG_NZ(r&0xFF); }
label_BBD4:;
    /* $BBD4: 90 */ nes_cpu_instruction_boundary(0xBBD4, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_BBD8; }
label_BBD6:;
    /* $BBD6: A9 */ nes_cpu_instruction_boundary(0xBBD6, 2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_BBD8:; /* UpdateMusicTriLinearCount_endIf_B */
    /* $BBD8: 8D */ nes_cpu_instruction_boundary(0xBBD8, 4); nes_write(0x062A, g_cpu.A);
label_BBDB:;
    /* $BBDB: 4C */ nes_cpu_instruction_boundary(0xBBDB, 3); nes_cpu_instruction_boundary(0xBB37, 2); func_BB37_b0(); return;
}

void func_BB37_b0(void) { /* LoadNextMusicChannelInstr_Continued_ReturnFromUpdateMusicTriLinearCount */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB37_b0");
#endif
label_BB37:; /* LoadNextMusicChannelInstr_Continued_ReturnFromUpdateMusicTriLinearCount */
    /* $BB37: BC */ nes_cpu_instruction_boundary(0xBB37, 4); g_cpu.Y = nes_read((0x0638 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BB3A:;
    /* $BB3A: FE */ nes_cpu_instruction_boundary(0xBB3A, 7); { uint16_t a=(0x0638 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB3D:;
    /* $BB3D: B1 */ nes_cpu_instruction_boundary(0xBB3D, 5); g_cpu.A = nes_read((nes_read16zp(0xE6) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB3F:;
    /* $BB3F: A8 */ nes_cpu_instruction_boundary(0xBB3F, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BB40:; /* LoadNextMusicChannelInstr_Continued_noteOrRest */
    /* $BB40: 8A */ nes_cpu_instruction_boundary(0xBB40, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BB41:;
    /* $BB41: C9 */ nes_cpu_instruction_boundary(0xBB41, 2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_BB43:;
    /* $BB43: F0 */ nes_cpu_instruction_boundary(0xBB43, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBB16); return; }
label_BB45:;
    /* $BB45: 48 */ nes_cpu_instruction_boundary(0xBB45, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_BB46:;
    /* $BB46: AE */ nes_cpu_instruction_boundary(0xBB46, 4); g_cpu.X = nes_read(0x064B); FLAG_NZ(g_cpu.X);
label_BB49:;
    /* $BB49: B9 */ nes_cpu_instruction_boundary(0xBB49, 4); g_cpu.A = nes_read((0xBE78 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB4C:;
    /* $BB4C: F0 */ nes_cpu_instruction_boundary(0xBB4C, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB59; }
label_BB4E:;
    /* $BB4E: 9D */ nes_cpu_instruction_boundary(0xBB4E, 5); nes_write((0x0600 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB51:;
    /* $BB51: B9 */ nes_cpu_instruction_boundary(0xBB51, 4); g_cpu.A = nes_read((0xBE77 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB54:;
    /* $BB54: 09 */ nes_cpu_instruction_boundary(0xBB54, 2); g_cpu.A |= 0x08; FLAG_NZ(g_cpu.A);
label_BB56:;
    /* $BB56: 9D */ nes_cpu_instruction_boundary(0xBB56, 5); nes_write((0x0601 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB59:; /* LoadNextMusicChannelInstr_Continued_endIf_A */
    /* $BB59: A8 */ nes_cpu_instruction_boundary(0xBB59, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BB5A:;
    /* $BB5A: 68 */ nes_cpu_instruction_boundary(0xBB5A, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_BB5B:;
    /* $BB5B: AA */ nes_cpu_instruction_boundary(0xBB5B, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BB5C:;
    /* $BB5C: 98 */ nes_cpu_instruction_boundary(0xBB5C, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_BB5D:;
    /* $BB5D: D0 */ nes_cpu_instruction_boundary(0xBB5D, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB6E; }
label_BB5F:;
    /* $BB5F: A9 */ nes_cpu_instruction_boundary(0xBB5F, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BB61:;
    /* $BB61: 85 */ nes_cpu_instruction_boundary(0xBB61, 3); nes_write(0xEA, g_cpu.A);
label_BB63:;
    /* $BB63: 8A */ nes_cpu_instruction_boundary(0xBB63, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BB64:;
    /* $BB64: C9 */ nes_cpu_instruction_boundary(0xBB64, 2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_BB66:;
    /* $BB66: F0 */ nes_cpu_instruction_boundary(0xBB66, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB73; }
label_BB68:;
    /* $BB68: A9 */ nes_cpu_instruction_boundary(0xBB68, 2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_BB6A:;
    /* $BB6A: 85 */ nes_cpu_instruction_boundary(0xBB6A, 3); nes_write(0xEA, g_cpu.A);
label_BB6C:;
    /* $BB6C: D0 */ nes_cpu_instruction_boundary(0xBB6C, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB73; }
label_BB6E:; /* LoadNextMusicChannelInstr_Continued_else_B */
    /* $BB6E: BD */ nes_cpu_instruction_boundary(0xBB6E, 4); g_cpu.A = nes_read((0x0628 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB71:;
    /* $BB71: 85 */ nes_cpu_instruction_boundary(0xBB71, 3); nes_write(0xEA, g_cpu.A);
label_BB73:; /* LoadNextMusicChannelInstr_Continued_endIf_B */
    /* $BB73: 8A */ nes_cpu_instruction_boundary(0xBB73, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BB74:;
    /* $BB74: DE */ nes_cpu_instruction_boundary(0xBB74, 7); { uint16_t a=(0x0653 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB77:;
    /* $BB77: DD */ nes_cpu_instruction_boundary(0xBB77, 4); { uint8_t m=nes_read((0x0653 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BB7A:;
    /* $BB7A: F0 */ nes_cpu_instruction_boundary(0xBB7A, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BBB1; }
label_BB7C:;
    /* $BB7C: FE */ nes_cpu_instruction_boundary(0xBB7C, 7); { uint16_t a=(0x0653 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB7F:;
    /* $BB7F: AC */ nes_cpu_instruction_boundary(0xBB7F, 4); g_cpu.Y = nes_read(0x064B); FLAG_NZ(g_cpu.Y);
label_BB82:;
    /* $BB82: 8A */ nes_cpu_instruction_boundary(0xBB82, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BB83:;
    /* $BB83: C9 */ nes_cpu_instruction_boundary(0xBB83, 2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_BB85:;
    /* $BB85: F0 */ nes_cpu_instruction_boundary(0xBB85, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB8C; }
label_BB87:;
    /* $BB87: BD */ nes_cpu_instruction_boundary(0xBB87, 4); g_cpu.A = nes_read((0x062E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB8A:;
    /* $BB8A: D0 */ nes_cpu_instruction_boundary(0xBB8A, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB91; }
label_BB8C:; /* LoadNextMusicChannelInstr_Continued_if_Cntrl0Data */
    /* $BB8C: A5 */ nes_cpu_instruction_boundary(0xBB8C, 3); g_cpu.A = nes_read(0xEA); FLAG_NZ(g_cpu.A);
label_BB8E:;
    /* $BB8E: 99 */ nes_cpu_instruction_boundary(0xBB8E, 5); nes_write((0x4000 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BB91:; /* LoadNextMusicChannelInstr_Continued_endIf_Cntrl0Data */
    /* $BB91: A5 */ nes_cpu_instruction_boundary(0xBB91, 3); g_cpu.A = nes_read(0xEA); FLAG_NZ(g_cpu.A);
label_BB93:;
    /* $BB93: 9D */ nes_cpu_instruction_boundary(0xBB93, 5); nes_write((0x066C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB96:;
    /* $BB96: B9 */ nes_cpu_instruction_boundary(0xBB96, 4); g_cpu.A = nes_read((0x0600 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB99:;
    /* $BB99: 99 */ nes_cpu_instruction_boundary(0xBB99, 5); nes_write((0x4002 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BB9C:;
    /* $BB9C: B9 */ nes_cpu_instruction_boundary(0xBB9C, 4); g_cpu.A = nes_read((0x0601 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB9F:;
    /* $BB9F: 99 */ nes_cpu_instruction_boundary(0xBB9F, 5); nes_write((0x4003 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BBA2:;
    /* $BBA2: BD */ nes_cpu_instruction_boundary(0xBBA2, 4); g_cpu.A = nes_read((0x0648 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBA5:;
    /* $BBA5: 99 */ nes_cpu_instruction_boundary(0xBBA5, 5); nes_write((0x4001 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BBA8:; /* SetMusicInstrDelayToLength */
    /* $BBA8: BD */ nes_cpu_instruction_boundary(0xBBA8, 4); g_cpu.A = nes_read((0x0620 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBAB:;
    /* $BBAB: 9D */ nes_cpu_instruction_boundary(0xBBAB, 5); nes_write((0x0640 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BBAE:;
    /* $BBAE: 4C */ nes_cpu_instruction_boundary(0xBBAE, 3); nes_cpu_instruction_boundary(0xBAB3, 2); func_BAB3_b0(); return;
label_BBB1:; /* MusicChannelIsUsedBySFX */
    /* $BBB1: FE */ nes_cpu_instruction_boundary(0xBBB1, 7); { uint16_t a=(0x0653 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BBB4:;
    /* $BBB4: 4C */ nes_cpu_instruction_boundary(0xBBB4, 3); nes_cpu_instruction_boundary(0xBBA8, 2);
    goto label_BBA8;
}

void func_BAA5_b0_body(int _entry) { /* UpdateAllMusicChannels */
    switch (_entry) {
        case 1: goto label_BADC;
        case 2: goto label_BAB3;
        case 3: goto label_BAB0;
    }
label_BAA5:; /* UpdateAllMusicChannels */
    /* $BAA5: 20 */ nes_cpu_instruction_boundary(0xBAA5, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA7; g_cpu.S--; func_B9F3_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBAA5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BAA8:;
    /* $BAA8: A9 */ nes_cpu_instruction_boundary(0xBAA8, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BAAA:;
    /* $BAAA: AA */ nes_cpu_instruction_boundary(0xBAAA, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BAAB:;
    /* $BAAB: 8D */ nes_cpu_instruction_boundary(0xBAAB, 4); nes_write(0x064B, g_cpu.A);
label_BAAE:;
    /* $BAAE: F0 */ nes_cpu_instruction_boundary(0xBAAE, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BAC2; }
label_BAB0:; /* MusicChannelBaseEmpty */
    /* $BAB0: 8A */ nes_cpu_instruction_boundary(0xBAB0, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BAB1:;
    /* $BAB1: 4A */ nes_cpu_instruction_boundary(0xBAB1, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_BAB2:;
    /* $BAB2: AA */ nes_cpu_instruction_boundary(0xBAB2, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BAB3:; /* IncrementToNextMusicChannel */
    /* $BAB3: E8 */ nes_cpu_instruction_boundary(0xBAB3, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_BAB4:;
    /* $BAB4: 8A */ nes_cpu_instruction_boundary(0xBAB4, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BAB5:;
    /* $BAB5: C9 */ nes_cpu_instruction_boundary(0xBAB5, 2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_BAB7:;
    /* $BAB7: F0 */ nes_cpu_instruction_boundary(0xBAB7, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBAA1); return; }
label_BAB9:;
    /* $BAB9: AD */ nes_cpu_instruction_boundary(0xBAB9, 4); g_cpu.A = nes_read(0x064B); FLAG_NZ(g_cpu.A);
label_BABC:;
    /* $BABC: 18 */ nes_cpu_instruction_boundary(0xBABC, 2); g_cpu.C = 0;
label_BABD:;
    /* $BABD: 69 */ nes_cpu_instruction_boundary(0xBABD, 2); { uint16_t r = g_cpu.A + 0x04 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x04); g_cpu.A=r&0xFF; }
label_BABF:;
    /* $BABF: 8D */ nes_cpu_instruction_boundary(0xBABF, 4); nes_write(0x064B, g_cpu.A);
label_BAC2:; /* UpdateMusicChannel */
    /* $BAC2: 8A */ nes_cpu_instruction_boundary(0xBAC2, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BAC3:;
    /* $BAC3: 0A */ nes_cpu_instruction_boundary(0xBAC3, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_BAC4:;
    /* $BAC4: AA */ nes_cpu_instruction_boundary(0xBAC4, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BAC5:;
    /* $BAC5: BD */ nes_cpu_instruction_boundary(0xBAC5, 4); g_cpu.A = nes_read((0x0630 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BAC8:;
    /* $BAC8: 85 */ nes_cpu_instruction_boundary(0xBAC8, 3); nes_write(0xE6, g_cpu.A);
label_BACA:;
    /* $BACA: BD */ nes_cpu_instruction_boundary(0xBACA, 4); g_cpu.A = nes_read((0x0631 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BACD:;
    /* $BACD: 85 */ nes_cpu_instruction_boundary(0xBACD, 3); nes_write(0xE7, g_cpu.A);
label_BACF:;
    /* $BACF: BD */ nes_cpu_instruction_boundary(0xBACF, 4); g_cpu.A = nes_read((0x0631 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BAD2:;
    /* $BAD2: F0 */ nes_cpu_instruction_boundary(0xBAD2, 2); if (g_cpu.Z) {
    nes_cpu_instruction_boundary(0xBAB0, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BAB0;
    }
label_BAD4:;
    /* $BAD4: 8A */ nes_cpu_instruction_boundary(0xBAD4, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BAD5:;
    /* $BAD5: 4A */ nes_cpu_instruction_boundary(0xBAD5, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_BAD6:;
    /* $BAD6: AA */ nes_cpu_instruction_boundary(0xBAD6, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BAD7:;
    /* $BAD7: DE */ nes_cpu_instruction_boundary(0xBAD7, 7); { uint16_t a=(0x0640 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BADA:;
    /* $BADA: D0 */ nes_cpu_instruction_boundary(0xBADA, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xBAB3, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BAB3;
    }
label_BADC:; /* LoadNextMusicChannelInstr */
    /* $BADC: BC */ nes_cpu_instruction_boundary(0xBADC, 4); g_cpu.Y = nes_read((0x0638 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BADF:;
    /* $BADF: FE */ nes_cpu_instruction_boundary(0xBADF, 7); { uint16_t a=(0x0638 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BAE2:;
    /* $BAE2: B1 */ nes_cpu_instruction_boundary(0xBAE2, 5); g_cpu.A = nes_read((nes_read16zp(0xE6) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BAE4:;
    /* $BAE4: F0 */ nes_cpu_instruction_boundary(0xBAE4, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBA9D); return; }
label_BAE6:;
    /* $BAE6: A8 */ nes_cpu_instruction_boundary(0xBAE6, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BAE7:;
    /* $BAE7: C9 */ nes_cpu_instruction_boundary(0xBAE7, 2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_BAE9:;
    /* $BAE9: F0 */ nes_cpu_instruction_boundary(0xBAE9, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BAF4; }
label_BAEB:;
    /* $BAEB: 29 */ nes_cpu_instruction_boundary(0xBAEB, 2); g_cpu.A &= 0xC0; FLAG_NZ(g_cpu.A);
label_BAED:;
    /* $BAED: C9 */ nes_cpu_instruction_boundary(0xBAED, 2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_BAEF:;
    /* $BAEF: F0 */ nes_cpu_instruction_boundary(0xBAEF, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_BB04; }
label_BAF1:;
    /* $BAF1: 4C */ nes_cpu_instruction_boundary(0xBAF1, 3); nes_cpu_instruction_boundary(0xBB1C, 2); func_BB1C_b0(); return;
label_BAF4:; /* MusicChannelInstr_SongRepeat */
    /* $BAF4: BD */ nes_cpu_instruction_boundary(0xBAF4, 4); g_cpu.A = nes_read((0x0624 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BAF7:;
    /* $BAF7: F0 */ nes_cpu_instruction_boundary(0xBAF7, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_BB13; }
label_BAF9:;
    /* $BAF9: DE */ nes_cpu_instruction_boundary(0xBAF9, 7); { uint16_t a=(0x0624 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BAFC:;
    /* $BAFC: BD */ nes_cpu_instruction_boundary(0xBAFC, 4); g_cpu.A = nes_read((0x063C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BAFF:;
    /* $BAFF: 9D */ nes_cpu_instruction_boundary(0xBAFF, 5); nes_write((0x0638 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB02:;
    /* $BB02: D0 */ nes_cpu_instruction_boundary(0xBB02, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB13; }
label_BB04:; /* MusicChannelInstr_SongRepeatSetup */
    /* $BB04: 98 */ nes_cpu_instruction_boundary(0xBB04, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_BB05:;
    /* $BB05: 29 */ nes_cpu_instruction_boundary(0xBB05, 2); g_cpu.A &= 0x3F; FLAG_NZ(g_cpu.A);
label_BB07:;
    /* $BB07: 9D */ nes_cpu_instruction_boundary(0xBB07, 5); nes_write((0x0624 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB0A:;
    /* $BB0A: DE */ nes_cpu_instruction_boundary(0xBB0A, 7); { uint16_t a=(0x0624 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB0D:;
    /* $BB0D: BD */ nes_cpu_instruction_boundary(0xBB0D, 4); g_cpu.A = nes_read((0x0638 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB10:;
    /* $BB10: 9D */ nes_cpu_instruction_boundary(0xBB10, 5); nes_write((0x063C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB13:; /* GotoLoadNextMusicChannelInstr */
    /* $BB13: 4C */ nes_cpu_instruction_boundary(0xBB13, 3); nes_cpu_instruction_boundary(0xBADC, 2);
    goto label_BADC;
}

void func_BAA5_b0(void) { /* UpdateAllMusicChannels */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BAA5_b0");
#endif
    func_BAA5_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BADC_b0(void) { /* LoadNextMusicChannelInstr */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BADC_b0");
#endif
    func_BAA5_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BAB3_b0(void) { /* IncrementToNextMusicChannel */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BAB3_b0");
#endif
    func_BAA5_b0_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BAB0_b0(void) { /* MusicChannelBaseEmpty */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BAB0_b0");
#endif
    func_BAA5_b0_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BCA4_b0_body(int _entry) { /* Music01Init */
    switch (_entry) {
        case 1: goto label_BCAA;
    }
label_BCA4:; /* Music01Init */
    /* $BCA4: A2 */ nes_cpu_instruction_boundary(0xBCA4, 2); g_cpu.X = 0xB6; FLAG_NZ(g_cpu.X);
label_BCA6:;
    /* $BCA6: A0 */ nes_cpu_instruction_boundary(0xBCA6, 2); g_cpu.Y = 0xF6; FLAG_NZ(g_cpu.Y);
label_BCA8:;
    /* $BCA8: D0 */ nes_cpu_instruction_boundary(0xBCA8, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBC8D); return; }
label_BCAA:; /* Music00Init */
    /* $BCAA: A2 */ nes_cpu_instruction_boundary(0xBCAA, 2); g_cpu.X = 0x92; FLAG_NZ(g_cpu.X);
label_BCAC:;
    /* $BCAC: A0 */ nes_cpu_instruction_boundary(0xBCAC, 2); g_cpu.Y = 0x96; FLAG_NZ(g_cpu.Y);
label_BCAE:;
    /* $BCAE: D0 */ nes_cpu_instruction_boundary(0xBCAE, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBC8D); return; }
label_BCB0:; /* VolumeEnvelopePtrTable */
    /* $BCB0: BA */ nes_cpu_instruction_boundary(0xBCB0, 2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_BCB1:;
    /* $BCB1: BC */ nes_cpu_instruction_boundary(0xBCB1, 4); g_cpu.Y = nes_read((0xBCC5 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BCB4:;
    /* $BCB4: CF */ nes_cpu_instruction_boundary(0xBCB4, 6); { uint16_t a=0xDABC; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BCB7:;
    /* $BCB7: BC */ nes_cpu_instruction_boundary(0xBCB7, 4); g_cpu.Y = nes_read((0xBD03 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BCBA:; /* VolumeEnvelope1 */
    /* $BCBA: 01 */ nes_cpu_instruction_boundary(0xBCBA, 6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BCBC:;
    /* $BCBC: 02 */ nes_cpu_instruction_boundary(0xBCBC, 2); /* ILLEGAL $02 — skip 1 */
label_BCBD:;
    /* $BCBD: 03 */ nes_cpu_instruction_boundary(0xBCBD, 8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCBF:;
    /* $BCBF: 04 */ nes_cpu_instruction_boundary(0xBCBF, 3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BCC1:;
    /* $BCC1: 06 */ nes_cpu_instruction_boundary(0xBCC1, 5); { uint16_t a=0x07; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCC3:;
    /* $BCC3: 08 */ nes_cpu_instruction_boundary(0xBCC3, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_BCC4:;
    /* $BCC4: FF */ nes_cpu_instruction_boundary(0xBCC4, 7); { uint16_t a=(0x0402 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BCC7:;
    /* $BCC7: 05 */ nes_cpu_instruction_boundary(0xBCC7, 3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_BCC9:;
    /* $BCC9: 07 */ nes_cpu_instruction_boundary(0xBCC9, 5); { uint16_t a=0x08; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCCB:;
    /* $BCCB: 07 */ nes_cpu_instruction_boundary(0xBCCB, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCCD:;
    /* $BCCD: 05 */ nes_cpu_instruction_boundary(0xBCCD, 3); g_cpu.A |= nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_BCCF:; /* VolumeEnvelope3 */
    /* $BCCF: 00 */ nes_cpu_instruction_boundary(0xBCCF, 7); nes_brk_executed(0xBCCF); return;
}

void func_BCA4_b0(void) { /* Music01Init */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCA4_b0");
#endif
    func_BCA4_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BCAA_b0(void) { /* Music00Init */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCAA_b0");
#endif
    func_BCA4_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BC9A_b0(void) { /* Music02Init */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC9A_b0");
#endif
label_BC9A:; /* Music02Init */
    /* $BC9A: A9 */ nes_cpu_instruction_boundary(0xBC9A, 2); g_cpu.A = 0xF4; FLAG_NZ(g_cpu.A);
label_BC9C:;
    /* $BC9C: D0 */ nes_cpu_instruction_boundary(0xBC9C, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBC8B); return; }
label_BC9E:; /* Music05Init */
    /* $BC9E: A2 */ nes_cpu_instruction_boundary(0xBC9E, 2); g_cpu.X = 0xF5; FLAG_NZ(g_cpu.X);
label_BCA0:;
    /* $BCA0: A0 */ nes_cpu_instruction_boundary(0xBCA0, 2); g_cpu.Y = 0xF6; FLAG_NZ(g_cpu.Y);
label_BCA2:;
    /* $BCA2: D0 */ nes_cpu_instruction_boundary(0xBCA2, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBC8D); return; }
label_BCA4:; /* Music01Init */
    /* $BCA4: A2 */ nes_cpu_instruction_boundary(0xBCA4, 2); g_cpu.X = 0xB6; FLAG_NZ(g_cpu.X);
label_BCA6:;
    /* $BCA6: A0 */ nes_cpu_instruction_boundary(0xBCA6, 2); g_cpu.Y = 0xF6; FLAG_NZ(g_cpu.Y);
label_BCA8:;
    /* $BCA8: D0 */ nes_cpu_instruction_boundary(0xBCA8, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBC8D); return; }
label_BCAA:; /* Music00Init */
    /* $BCAA: A2 */ nes_cpu_instruction_boundary(0xBCAA, 2); g_cpu.X = 0x92; FLAG_NZ(g_cpu.X);
label_BCAC:;
    /* $BCAC: A0 */ nes_cpu_instruction_boundary(0xBCAC, 2); g_cpu.Y = 0x96; FLAG_NZ(g_cpu.Y);
label_BCAE:;
    /* $BCAE: D0 */ nes_cpu_instruction_boundary(0xBCAE, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBC8D); return; }
label_BCB0:; /* VolumeEnvelopePtrTable */
    /* $BCB0: BA */ nes_cpu_instruction_boundary(0xBCB0, 2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_BCB1:;
    /* $BCB1: BC */ nes_cpu_instruction_boundary(0xBCB1, 4); g_cpu.Y = nes_read((0xBCC5 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BCB4:;
    /* $BCB4: CF */ nes_cpu_instruction_boundary(0xBCB4, 6); { uint16_t a=0xDABC; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BCB7:;
    /* $BCB7: BC */ nes_cpu_instruction_boundary(0xBCB7, 4); g_cpu.Y = nes_read((0xBD03 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BCBA:; /* VolumeEnvelope1 */
    /* $BCBA: 01 */ nes_cpu_instruction_boundary(0xBCBA, 6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BCBC:;
    /* $BCBC: 02 */ nes_cpu_instruction_boundary(0xBCBC, 2); /* ILLEGAL $02 — skip 1 */
label_BCBD:;
    /* $BCBD: 03 */ nes_cpu_instruction_boundary(0xBCBD, 8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCBF:;
    /* $BCBF: 04 */ nes_cpu_instruction_boundary(0xBCBF, 3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BCC1:;
    /* $BCC1: 06 */ nes_cpu_instruction_boundary(0xBCC1, 5); { uint16_t a=0x07; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCC3:;
    /* $BCC3: 08 */ nes_cpu_instruction_boundary(0xBCC3, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_BCC4:;
    /* $BCC4: FF */ nes_cpu_instruction_boundary(0xBCC4, 7); { uint16_t a=(0x0402 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BCC7:;
    /* $BCC7: 05 */ nes_cpu_instruction_boundary(0xBCC7, 3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_BCC9:;
    /* $BCC9: 07 */ nes_cpu_instruction_boundary(0xBCC9, 5); { uint16_t a=0x08; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCCB:;
    /* $BCCB: 07 */ nes_cpu_instruction_boundary(0xBCCB, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCCD:;
    /* $BCCD: 05 */ nes_cpu_instruction_boundary(0xBCCD, 3); g_cpu.A |= nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_BCCF:; /* VolumeEnvelope3 */
    /* $BCCF: 00 */ nes_cpu_instruction_boundary(0xBCCF, 7); nes_brk_executed(0xBCCF); return;
}

void func_BC96_b0(void) { /* Music03Init */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC96_b0");
#endif
label_BC96:; /* Music03Init */
    /* $BC96: A9 */ nes_cpu_instruction_boundary(0xBC96, 2); g_cpu.A = 0x34; FLAG_NZ(g_cpu.A);
label_BC98:;
    /* $BC98: D0 */ nes_cpu_instruction_boundary(0xBC98, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBC8B); return; }
label_BC9A:; /* Music02Init */
    /* $BC9A: A9 */ nes_cpu_instruction_boundary(0xBC9A, 2); g_cpu.A = 0xF4; FLAG_NZ(g_cpu.A);
label_BC9C:;
    /* $BC9C: D0 */ nes_cpu_instruction_boundary(0xBC9C, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBC8B); return; }
label_BC9E:; /* Music05Init */
    /* $BC9E: A2 */ nes_cpu_instruction_boundary(0xBC9E, 2); g_cpu.X = 0xF5; FLAG_NZ(g_cpu.X);
label_BCA0:;
    /* $BCA0: A0 */ nes_cpu_instruction_boundary(0xBCA0, 2); g_cpu.Y = 0xF6; FLAG_NZ(g_cpu.Y);
label_BCA2:;
    /* $BCA2: D0 */ nes_cpu_instruction_boundary(0xBCA2, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBC8D); return; }
label_BCA4:; /* Music01Init */
    /* $BCA4: A2 */ nes_cpu_instruction_boundary(0xBCA4, 2); g_cpu.X = 0xB6; FLAG_NZ(g_cpu.X);
label_BCA6:;
    /* $BCA6: A0 */ nes_cpu_instruction_boundary(0xBCA6, 2); g_cpu.Y = 0xF6; FLAG_NZ(g_cpu.Y);
label_BCA8:;
    /* $BCA8: D0 */ nes_cpu_instruction_boundary(0xBCA8, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBC8D); return; }
label_BCAA:; /* Music00Init */
    /* $BCAA: A2 */ nes_cpu_instruction_boundary(0xBCAA, 2); g_cpu.X = 0x92; FLAG_NZ(g_cpu.X);
label_BCAC:;
    /* $BCAC: A0 */ nes_cpu_instruction_boundary(0xBCAC, 2); g_cpu.Y = 0x96; FLAG_NZ(g_cpu.Y);
label_BCAE:;
    /* $BCAE: D0 */ nes_cpu_instruction_boundary(0xBCAE, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBC8D); return; }
label_BCB0:; /* VolumeEnvelopePtrTable */
    /* $BCB0: BA */ nes_cpu_instruction_boundary(0xBCB0, 2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_BCB1:;
    /* $BCB1: BC */ nes_cpu_instruction_boundary(0xBCB1, 4); g_cpu.Y = nes_read((0xBCC5 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BCB4:;
    /* $BCB4: CF */ nes_cpu_instruction_boundary(0xBCB4, 6); { uint16_t a=0xDABC; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BCB7:;
    /* $BCB7: BC */ nes_cpu_instruction_boundary(0xBCB7, 4); g_cpu.Y = nes_read((0xBD03 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BCBA:; /* VolumeEnvelope1 */
    /* $BCBA: 01 */ nes_cpu_instruction_boundary(0xBCBA, 6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BCBC:;
    /* $BCBC: 02 */ nes_cpu_instruction_boundary(0xBCBC, 2); /* ILLEGAL $02 — skip 1 */
label_BCBD:;
    /* $BCBD: 03 */ nes_cpu_instruction_boundary(0xBCBD, 8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCBF:;
    /* $BCBF: 04 */ nes_cpu_instruction_boundary(0xBCBF, 3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BCC1:;
    /* $BCC1: 06 */ nes_cpu_instruction_boundary(0xBCC1, 5); { uint16_t a=0x07; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCC3:;
    /* $BCC3: 08 */ nes_cpu_instruction_boundary(0xBCC3, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_BCC4:;
    /* $BCC4: FF */ nes_cpu_instruction_boundary(0xBCC4, 7); { uint16_t a=(0x0402 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BCC7:;
    /* $BCC7: 05 */ nes_cpu_instruction_boundary(0xBCC7, 3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_BCC9:;
    /* $BCC9: 07 */ nes_cpu_instruction_boundary(0xBCC9, 5); { uint16_t a=0x08; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCCB:;
    /* $BCCB: 07 */ nes_cpu_instruction_boundary(0xBCCB, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCCD:;
    /* $BCCD: 05 */ nes_cpu_instruction_boundary(0xBCCD, 3); g_cpu.A |= nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_BCCF:; /* VolumeEnvelope3 */
    /* $BCCF: 00 */ nes_cpu_instruction_boundary(0xBCCF, 7); nes_brk_executed(0xBCCF); return;
}

void func_BC89_b0(void) { /* Music04Init */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC89_b0");
#endif
label_BC89:; /* Music04Init */
    /* $BC89: A9 */ nes_cpu_instruction_boundary(0xBC89, 2); g_cpu.A = 0xB3; FLAG_NZ(g_cpu.A);
label_BC8B:; /* XYMusicInit */
    /* $BC8B: AA */ nes_cpu_instruction_boundary(0xBC8B, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BC8C:;
    /* $BC8C: A8 */ nes_cpu_instruction_boundary(0xBC8C, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BC8D:;
    /* $BC8D: 20 */ nes_cpu_instruction_boundary(0xBC8D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; func_B9E4_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC8D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC90:;
    /* $BC90: 20 */ nes_cpu_instruction_boundary(0xBC90, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x92; g_cpu.S--; func_BF19_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC90, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC93:;
    /* $BC93: 4C */ nes_cpu_instruction_boundary(0xBC93, 3); nes_cpu_instruction_boundary(0xBAA5, 2); func_BAA5_b0(); return;
}

void func_BC9E_b0(void) { /* Music05Init */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC9E_b0");
#endif
label_BC9E:; /* Music05Init */
    /* $BC9E: A2 */ nes_cpu_instruction_boundary(0xBC9E, 2); g_cpu.X = 0xF5; FLAG_NZ(g_cpu.X);
label_BCA0:;
    /* $BCA0: A0 */ nes_cpu_instruction_boundary(0xBCA0, 2); g_cpu.Y = 0xF6; FLAG_NZ(g_cpu.Y);
label_BCA2:;
    /* $BCA2: D0 */ nes_cpu_instruction_boundary(0xBCA2, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBC8D); return; }
label_BCA4:; /* Music01Init */
    /* $BCA4: A2 */ nes_cpu_instruction_boundary(0xBCA4, 2); g_cpu.X = 0xB6; FLAG_NZ(g_cpu.X);
label_BCA6:;
    /* $BCA6: A0 */ nes_cpu_instruction_boundary(0xBCA6, 2); g_cpu.Y = 0xF6; FLAG_NZ(g_cpu.Y);
label_BCA8:;
    /* $BCA8: D0 */ nes_cpu_instruction_boundary(0xBCA8, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBC8D); return; }
label_BCAA:; /* Music00Init */
    /* $BCAA: A2 */ nes_cpu_instruction_boundary(0xBCAA, 2); g_cpu.X = 0x92; FLAG_NZ(g_cpu.X);
label_BCAC:;
    /* $BCAC: A0 */ nes_cpu_instruction_boundary(0xBCAC, 2); g_cpu.Y = 0x96; FLAG_NZ(g_cpu.Y);
label_BCAE:;
    /* $BCAE: D0 */ nes_cpu_instruction_boundary(0xBCAE, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBC8D); return; }
label_BCB0:; /* VolumeEnvelopePtrTable */
    /* $BCB0: BA */ nes_cpu_instruction_boundary(0xBCB0, 2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_BCB1:;
    /* $BCB1: BC */ nes_cpu_instruction_boundary(0xBCB1, 4); g_cpu.Y = nes_read((0xBCC5 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BCB4:;
    /* $BCB4: CF */ nes_cpu_instruction_boundary(0xBCB4, 6); { uint16_t a=0xDABC; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BCB7:;
    /* $BCB7: BC */ nes_cpu_instruction_boundary(0xBCB7, 4); g_cpu.Y = nes_read((0xBD03 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BCBA:; /* VolumeEnvelope1 */
    /* $BCBA: 01 */ nes_cpu_instruction_boundary(0xBCBA, 6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BCBC:;
    /* $BCBC: 02 */ nes_cpu_instruction_boundary(0xBCBC, 2); /* ILLEGAL $02 — skip 1 */
label_BCBD:;
    /* $BCBD: 03 */ nes_cpu_instruction_boundary(0xBCBD, 8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCBF:;
    /* $BCBF: 04 */ nes_cpu_instruction_boundary(0xBCBF, 3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BCC1:;
    /* $BCC1: 06 */ nes_cpu_instruction_boundary(0xBCC1, 5); { uint16_t a=0x07; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCC3:;
    /* $BCC3: 08 */ nes_cpu_instruction_boundary(0xBCC3, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_BCC4:;
    /* $BCC4: FF */ nes_cpu_instruction_boundary(0xBCC4, 7); { uint16_t a=(0x0402 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BCC7:;
    /* $BCC7: 05 */ nes_cpu_instruction_boundary(0xBCC7, 3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_BCC9:;
    /* $BCC9: 07 */ nes_cpu_instruction_boundary(0xBCC9, 5); { uint16_t a=0x08; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCCB:;
    /* $BCCB: 07 */ nes_cpu_instruction_boundary(0xBCCB, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCCD:;
    /* $BCCD: 05 */ nes_cpu_instruction_boundary(0xBCCD, 3); g_cpu.A |= nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_BCCF:; /* VolumeEnvelope3 */
    /* $BCCF: 00 */ nes_cpu_instruction_boundary(0xBCCF, 7); nes_brk_executed(0xBCCF); return;
}

void func_B9E4_b0(void) { /* SetVolumeAndDisableSweep */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9E4_b0");
#endif
label_B9E4:; /* SetVolumeAndDisableSweep */
    /* $B9E4: A9 */ nes_cpu_instruction_boundary(0xB9E4, 2); g_cpu.A = 0x7F; FLAG_NZ(g_cpu.A);
label_B9E6:;
    /* $B9E6: 8D */ nes_cpu_instruction_boundary(0xB9E6, 4); nes_write(0x0648, g_cpu.A);
label_B9E9:;
    /* $B9E9: 8D */ nes_cpu_instruction_boundary(0xB9E9, 4); nes_write(0x0649, g_cpu.A);
label_B9EC:;
    /* $B9EC: 8E */ nes_cpu_instruction_boundary(0xB9EC, 4); nes_write(0x0628, g_cpu.X);
label_B9EF:;
    /* $B9EF: 8C */ nes_cpu_instruction_boundary(0xB9EF, 4); nes_write(0x0629, g_cpu.Y);
label_B9F2:;
    /* $B9F2: 60 */ nes_cpu_instruction_boundary(0xB9F2, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BF67_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BF67_b0");
#endif
label_BF67:;
    /* $BF67: 06 */ nes_cpu_instruction_boundary(0xBF67, 5); { uint16_t a=0x8D; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BF69:;
    /* $BF69: 8D */ nes_cpu_instruction_boundary(0xBF69, 4); nes_write(0xAD06, g_cpu.A);
label_BF6C:;
    /* $BF6C: 5E */ nes_cpu_instruction_boundary(0xBF6C, 7); { uint16_t a=(0xA806 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_BF6F:;
    /* $BF6F: B9 */ nes_cpu_instruction_boundary(0xBF6F, 4); g_cpu.A = nes_read((0xBC2A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BF72:;
    /* $BF72: A8 */ nes_cpu_instruction_boundary(0xBF72, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BF73:;
    /* $BF73: A2 */ nes_cpu_instruction_boundary(0xBF73, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_BF75:;
    /* $BF75: B9 */ nes_cpu_instruction_boundary(0xBF75, 4); g_cpu.A = nes_read((0xBD61 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BF78:;
    /* $BF78: 9D */ nes_cpu_instruction_boundary(0xBF78, 5); nes_write((0x062B + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BF7B:;
    /* $BF7B: C8 */ nes_cpu_instruction_boundary(0xBF7B, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_BF7C:;
    /* $BF7C: E8 */ nes_cpu_instruction_boundary(0xBF7C, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_BF7D:;
    /* $BF7D: 8A */ nes_cpu_instruction_boundary(0xBF7D, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BF7E:;
    /* $BF7E: C9 */ nes_cpu_instruction_boundary(0xBF7E, 2); { int r=g_cpu.A-0x0D; g_cpu.C=(g_cpu.A>=0x0D)?1:0; FLAG_NZ(r&0xFF); }
label_BF80:;
    /* $BF80: D0 */ nes_cpu_instruction_boundary(0xBF80, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xBF75, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BF75;
    }
label_BF82:;
    /* $BF82: A9 */ nes_cpu_instruction_boundary(0xBF82, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_BF84:;
    /* $BF84: 8D */ nes_cpu_instruction_boundary(0xBF84, 4); nes_write(0x0640, g_cpu.A);
label_BF87:;
    /* $BF87: 8D */ nes_cpu_instruction_boundary(0xBF87, 4); nes_write(0x0641, g_cpu.A);
label_BF8A:;
    /* $BF8A: 8D */ nes_cpu_instruction_boundary(0xBF8A, 4); nes_write(0x0642, g_cpu.A);
label_BF8D:;
    /* $BF8D: 8D */ nes_cpu_instruction_boundary(0xBF8D, 4); nes_write(0x0643, g_cpu.A);
label_BF90:;
    /* $BF90: A9 */ nes_cpu_instruction_boundary(0xBF90, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BF92:;
    /* $BF92: 8D */ nes_cpu_instruction_boundary(0xBF92, 4); nes_write(0x0638, g_cpu.A);
label_BF95:;
    /* $BF95: 8D */ nes_cpu_instruction_boundary(0xBF95, 4); nes_write(0x0639, g_cpu.A);
label_BF98:;
    /* $BF98: 8D */ nes_cpu_instruction_boundary(0xBF98, 4); nes_write(0x063A, g_cpu.A);
label_BF9B:;
    /* $BF9B: 8D */ nes_cpu_instruction_boundary(0xBF9B, 4); nes_write(0x063B, g_cpu.A);
label_BF9E:;
    /* $BF9E: 60 */ nes_cpu_instruction_boundary(0xBF9E, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BB19_b0(void) { /* GotoUpdateMusicTriLinearCount */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB19_b0");
#endif
label_BB19:; /* GotoUpdateMusicTriLinearCount */
    /* $BB19: 4C */ nes_cpu_instruction_boundary(0xBB19, 3); nes_cpu_instruction_boundary(0xBBB7, 2); func_BBB7_b0(); return;
}

void func_BB16_b0(void) { /* GotoMusicChannelInstr_SongNoteNoise */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB16_b0");
#endif
label_BB16:; /* GotoMusicChannelInstr_SongNoteNoise */
    /* $BB16: 4C */ nes_cpu_instruction_boundary(0xBB16, 3); nes_cpu_instruction_boundary(0xBBDE, 2); func_BBDE_b0(); return;
}

void func_BA9D_b0(void) { /* GotoEndOrLoopMusic */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA9D_b0");
#endif
label_BA9D:; /* GotoEndOrLoopMusic */
    /* $BA9D: 20 */ nes_cpu_instruction_boundary(0xBA9D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x9F; g_cpu.S--; func_B3F0_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBA9D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BAA0:;
    /* $BAA0: 60 */ nes_cpu_instruction_boundary(0xBAA0, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BAA1_b0(void) { /* GotoUpdateAllVolumeEnvelopes */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BAA1_b0");
#endif
label_BAA1:; /* GotoUpdateAllVolumeEnvelopes */
    /* $BAA1: 20 */ nes_cpu_instruction_boundary(0xBAA1, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA3; g_cpu.S--; func_BA37_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBAA1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BAA4:;
    /* $BAA4: 60 */ nes_cpu_instruction_boundary(0xBAA4, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BC8D_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC8D_b0");
#endif
label_BC8D:;
    /* $BC8D: 20 */ nes_cpu_instruction_boundary(0xBC8D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; func_B9E4_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC8D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC90:;
    /* $BC90: 20 */ nes_cpu_instruction_boundary(0xBC90, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x92; g_cpu.S--; func_BF19_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC90, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC93:;
    /* $BC93: 4C */ nes_cpu_instruction_boundary(0xBC93, 3); nes_cpu_instruction_boundary(0xBAA5, 2); func_BAA5_b0(); return;
}

void func_BC8B_b0(void) { /* XYMusicInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC8B_b0");
#endif
label_BC8B:; /* XYMusicInit */
    /* $BC8B: AA */ nes_cpu_instruction_boundary(0xBC8B, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BC8C:;
    /* $BC8C: A8 */ nes_cpu_instruction_boundary(0xBC8C, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BC8D:;
    /* $BC8D: 20 */ nes_cpu_instruction_boundary(0xBC8D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; func_B9E4_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC8D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC90:;
    /* $BC90: 20 */ nes_cpu_instruction_boundary(0xBC90, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x92; g_cpu.S--; func_BF19_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC90, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC93:;
    /* $BC93: 4C */ nes_cpu_instruction_boundary(0xBC93, 3); nes_cpu_instruction_boundary(0xBAA5, 2); func_BAA5_b0(); return;
}

void func_B3FC_b0(void) { /* CheckMusicFlags */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3FC_b0");
#endif
label_B3FC:; /* CheckMusicFlags */
    /* $B3FC: AD */ nes_cpu_instruction_boundary(0xB3FC, 4); g_cpu.A = nes_read(0x068D); FLAG_NZ(g_cpu.A);
label_B3FF:;
    /* $B3FF: CD */ nes_cpu_instruction_boundary(0xB3FF, 4); { uint8_t m=nes_read(0x064D); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B402:;
    /* $B402: F0 */ nes_cpu_instruction_boundary(0xB402, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B40A; }
label_B404:; /* InitializeSoundAddresses */
    /* $B404: 20 */ nes_cpu_instruction_boundary(0xB404, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x06; g_cpu.S--; func_B41D_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB404, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B407:;
    /* $B407: 20 */ nes_cpu_instruction_boundary(0xB407, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x09; g_cpu.S--; func_B43E_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB407, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B40A:; /* GotoClearSpecialAddresses */
    /* $B40A: 20 */ nes_cpu_instruction_boundary(0xB40A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0C; g_cpu.S--; func_B40E_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB40A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B40D:;
    /* $B40D: 60 */ nes_cpu_instruction_boundary(0xB40D, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B61C_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B61C_b0");
#endif
label_B61C:;
    /* $B61C: 06 */ nes_cpu_instruction_boundary(0xB61C, 5); { uint16_t a=0x4C; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B61E:;
    /* $B61E: 2C */ nes_cpu_instruction_boundary(0xB61E, 4); { uint8_t m=nes_read(0xEEB6); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_B621:;
    /* $B621: 75 */ nes_cpu_instruction_boundary(0xB621, 4); { uint8_t m=nes_read((0x06 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B623:;
    /* $B623: EE */ nes_cpu_instruction_boundary(0xB623, 6); { uint16_t a=0x0675; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B626:;
    /* $B626: EE */ nes_cpu_instruction_boundary(0xB626, 6); { uint16_t a=0x0679; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B629:;
    /* $B629: EE */ nes_cpu_instruction_boundary(0xB629, 6); { uint16_t a=0x0679; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B62C:; /* WriteSQ1SQ2PeriodLow */
    /* $B62C: AD */ nes_cpu_instruction_boundary(0xB62C, 4); g_cpu.A = nes_read(0x0675); FLAG_NZ(g_cpu.A);
label_B62F:;
    /* $B62F: 8D */ nes_cpu_instruction_boundary(0xB62F, 4); nes_write(0x4006, g_cpu.A);
label_B632:;
    /* $B632: AD */ nes_cpu_instruction_boundary(0xB632, 4); g_cpu.A = nes_read(0x0679); FLAG_NZ(g_cpu.A);
label_B635:;
    /* $B635: 8D */ nes_cpu_instruction_boundary(0xB635, 4); nes_write(0x4002, g_cpu.A);
label_B638:;
    /* $B638: 60 */ nes_cpu_instruction_boundary(0xB638, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BF19_b0(void) { /* InitializeMusic */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BF19_b0");
#endif
label_BF19:; /* InitializeMusic */
    /* $BF19: 20 */ nes_cpu_instruction_boundary(0xBF19, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBF; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1B; g_cpu.S--; func_B3FC_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBF19, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BF1C:;
    /* $BF1C: AD */ nes_cpu_instruction_boundary(0xBF1C, 4); g_cpu.A = nes_read(0x064D); FLAG_NZ(g_cpu.A);
label_BF1F:;
    /* $BF1F: 8D */ nes_cpu_instruction_boundary(0xBF1F, 4); nes_write(0x068D, g_cpu.A);
label_BF22:;
    /* $BF22: AD */ nes_cpu_instruction_boundary(0xBF22, 4); g_cpu.A = nes_read(0x065E); FLAG_NZ(g_cpu.A);
label_BF25:;
    /* $BF25: A8 */ nes_cpu_instruction_boundary(0xBF25, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BF26:;
    /* $BF26: B9 */ nes_cpu_instruction_boundary(0xBF26, 4); g_cpu.A = nes_read((0xBBFA + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BF29:;
    /* $BF29: A8 */ nes_cpu_instruction_boundary(0xBF29, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BF2A:;
    /* $BF2A: A2 */ nes_cpu_instruction_boundary(0xBF2A, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_BF2C:; /* InitializeMusic_loop */
    /* $BF2C: B9 */ nes_cpu_instruction_boundary(0xBF2C, 4); g_cpu.A = nes_read((0xBD31 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BF2F:;
    /* $BF2F: 9D */ nes_cpu_instruction_boundary(0xBF2F, 5); nes_write((0x062B + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BF32:;
    /* $BF32: C8 */ nes_cpu_instruction_boundary(0xBF32, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_BF33:;
    /* $BF33: E8 */ nes_cpu_instruction_boundary(0xBF33, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_BF34:;
    /* $BF34: 8A */ nes_cpu_instruction_boundary(0xBF34, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BF35:;
    /* $BF35: C9 */ nes_cpu_instruction_boundary(0xBF35, 2); { int r=g_cpu.A-0x0D; g_cpu.C=(g_cpu.A>=0x0D)?1:0; FLAG_NZ(r&0xFF); }
label_BF37:;
    /* $BF37: D0 */ nes_cpu_instruction_boundary(0xBF37, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xBF2C, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BF2C;
    }
label_BF39:;
    /* $BF39: A9 */ nes_cpu_instruction_boundary(0xBF39, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_BF3B:;
    /* $BF3B: 8D */ nes_cpu_instruction_boundary(0xBF3B, 4); nes_write(0x0640, g_cpu.A);
label_BF3E:;
    /* $BF3E: 8D */ nes_cpu_instruction_boundary(0xBF3E, 4); nes_write(0x0641, g_cpu.A);
label_BF41:;
    /* $BF41: 8D */ nes_cpu_instruction_boundary(0xBF41, 4); nes_write(0x0642, g_cpu.A);
label_BF44:;
    /* $BF44: 8D */ nes_cpu_instruction_boundary(0xBF44, 4); nes_write(0x0643, g_cpu.A);
label_BF47:;
    /* $BF47: A9 */ nes_cpu_instruction_boundary(0xBF47, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BF49:;
    /* $BF49: 8D */ nes_cpu_instruction_boundary(0xBF49, 4); nes_write(0x0638, g_cpu.A);
label_BF4C:;
    /* $BF4C: 8D */ nes_cpu_instruction_boundary(0xBF4C, 4); nes_write(0x0639, g_cpu.A);
label_BF4F:;
    /* $BF4F: 8D */ nes_cpu_instruction_boundary(0xBF4F, 4); nes_write(0x063A, g_cpu.A);
label_BF52:;
    /* $BF52: 8D */ nes_cpu_instruction_boundary(0xBF52, 4); nes_write(0x063B, g_cpu.A);
label_BF55:;
    /* $BF55: 60 */ nes_cpu_instruction_boundary(0xBF55, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8180_b0_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8182;
    }
label_8180:;
    /* $8180: 8B */ nes_cpu_instruction_boundary(0x8180, 2); /* ILLEGAL $8B — skip 2 */
label_8182:; /* Crosshairs */
    /* $8182: A5 */ nes_cpu_instruction_boundary(0x8182, 3); g_cpu.A = nes_read(0xC0); FLAG_NZ(g_cpu.A);
label_8184:;
    /* $8184: F0 */ nes_cpu_instruction_boundary(0x8184, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8189; }
label_8186:;
    /* $8186: 20 */ nes_cpu_instruction_boundary(0x8186, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x88; g_cpu.S--; func_8AA7_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8186, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8189:; /* Crosshairs_endIf_A */
    /* $8189: A5 */ nes_cpu_instruction_boundary(0x8189, 3); g_cpu.A = nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_818B:;
    /* $818B: D0 */ nes_cpu_instruction_boundary(0x818B, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_81D0; }
label_818D:;
    /* $818D: AD */ nes_cpu_instruction_boundary(0x818D, 4); g_cpu.A = nes_read(0x6EAA); FLAG_NZ(g_cpu.A);
label_8190:;
    /* $8190: 2D */ nes_cpu_instruction_boundary(0x8190, 4); g_cpu.A &= nes_read(0x6EBA); FLAG_NZ(g_cpu.A);
label_8193:;
    /* $8193: 2D */ nes_cpu_instruction_boundary(0x8193, 4); g_cpu.A &= nes_read(0x6ECA); FLAG_NZ(g_cpu.A);
label_8196:;
    /* $8196: 2D */ nes_cpu_instruction_boundary(0x8196, 4); g_cpu.A &= nes_read(0x6EDA); FLAG_NZ(g_cpu.A);
label_8199:;
    /* $8199: F0 */ nes_cpu_instruction_boundary(0x8199, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_81CA; }
label_819B:;
    /* $819B: A9 */ nes_cpu_instruction_boundary(0x819B, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_819D:;
    /* $819D: C5 */ nes_cpu_instruction_boundary(0x819D, 3); { uint8_t m=nes_read(0xBF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_819F:;
    /* $819F: F0 */ nes_cpu_instruction_boundary(0x819F, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_81AB; }
label_81A1:;
    /* $81A1: E6 */ nes_cpu_instruction_boundary(0x81A1, 5); { uint16_t a=0xBF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_81A3:;
    /* $81A3: 85 */ nes_cpu_instruction_boundary(0x81A3, 3); nes_write(0xC7, g_cpu.A);
label_81A5:;
    /* $81A5: 85 */ nes_cpu_instruction_boundary(0x81A5, 3); nes_write(0xC0, g_cpu.A);
label_81A7:;
    /* $81A7: A9 */ nes_cpu_instruction_boundary(0x81A7, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_81A9:;
    /* $81A9: 85 */ nes_cpu_instruction_boundary(0x81A9, 3); nes_write(0xC6, g_cpu.A);
label_81AB:; /* Crosshairs_endIf_B */
    /* $81AB: 2D */ nes_cpu_instruction_boundary(0x81AB, 4); g_cpu.A &= nes_read(0x6EEA); FLAG_NZ(g_cpu.A);
label_81AE:;
    /* $81AE: 2D */ nes_cpu_instruction_boundary(0x81AE, 4); g_cpu.A &= nes_read(0x6EFA); FLAG_NZ(g_cpu.A);
label_81B1:;
    /* $81B1: 2D */ nes_cpu_instruction_boundary(0x81B1, 4); g_cpu.A &= nes_read(0x6F0A); FLAG_NZ(g_cpu.A);
label_81B4:;
    /* $81B4: 2D */ nes_cpu_instruction_boundary(0x81B4, 4); g_cpu.A &= nes_read(0x6F1A); FLAG_NZ(g_cpu.A);
label_81B7:;
    /* $81B7: F0 */ nes_cpu_instruction_boundary(0x81B7, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_81CA; }
label_81B9:;
    /* $81B9: A9 */ nes_cpu_instruction_boundary(0x81B9, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_81BB:;
    /* $81BB: 85 */ nes_cpu_instruction_boundary(0x81BB, 3); nes_write(0xC7, g_cpu.A);
label_81BD:;
    /* $81BD: 85 */ nes_cpu_instruction_boundary(0x81BD, 3); nes_write(0xC0, g_cpu.A);
label_81BF:;
    /* $81BF: 20 */ nes_cpu_instruction_boundary(0x81BF, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC1; g_cpu.S--; func_98AE_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x81BF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_81C2:;
    /* $81C2: A9 */ nes_cpu_instruction_boundary(0x81C2, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_81C4:;
    /* $81C4: 85 */ nes_cpu_instruction_boundary(0x81C4, 3); nes_write(0xC6, g_cpu.A);
label_81C6:;
    /* $81C6: E6 */ nes_cpu_instruction_boundary(0x81C6, 5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_81C8:;
    /* $81C8: D0 */ nes_cpu_instruction_boundary(0x81C8, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_81CD; }
label_81CA:; /* Crosshairs_notComplete */
    /* $81CA: 20 */ nes_cpu_instruction_boundary(0x81CA, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCC; g_cpu.S--; func_88FE_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x81CA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_81CD:; /* Crosshairs_complete */
    /* $81CD: 20 */ nes_cpu_instruction_boundary(0x81CD, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCF; g_cpu.S--; func_8976_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x81CD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_81D0:; /* Crosshairs_RTS */
    /* $81D0: 60 */ nes_cpu_instruction_boundary(0x81D0, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8180_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8180_b0");
#endif
    func_8180_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8182_b0(void) { /* Crosshairs */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8182_b0");
#endif
    func_8180_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8988_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8988_b0");
#endif
label_8988:;
    /* $8988: 89 */ nes_cpu_instruction_boundary(0x8988, 2); /* NOP */
label_898A:;
    /* $898A: 00 */ nes_cpu_instruction_boundary(0x898A, 7); nes_brk_executed(0x898A); return;
}

void func_B2EB_b0(void) { /* SFXSQ1ContRoutineTbl */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B2EB_b0");
#endif
label_B2EB:; /* SFXSQ1ContRoutineTbl */
    /* $B2EB: B0 */ nes_cpu_instruction_boundary(0xB2EB, 2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xB2A3); return; }
label_B2ED:;
    /* $B2ED: D3 */ nes_cpu_instruction_boundary(0xB2ED, 8); { uint16_t a=(nes_read16zp(0xB6) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B2EF:;
    /* $B2EF: ED */ nes_cpu_instruction_boundary(0xB2EF, 4); { uint8_t m=nes_read(0x4FB6); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B2F2:;
    /* $B2F2: B7 */ nes_cpu_instruction_boundary(0xB2F2, 4); g_cpu.A = g_cpu.X = nes_read((0xED + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_B2F4:;
    /* $B2F4: B6 */ nes_cpu_instruction_boundary(0xB2F4, 4); g_cpu.X = nes_read((0xED + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_B2F6:;
    /* $B2F6: B6 */ nes_cpu_instruction_boundary(0xB2F6, 4); g_cpu.X = nes_read((0xED + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_B2F8:;
    /* $B2F8: B6 */ nes_cpu_instruction_boundary(0xB2F8, 4); g_cpu.X = nes_read((0x81 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_B2FA:;
    /* $B2FA: B7 */ nes_cpu_instruction_boundary(0xB2FA, 4); g_cpu.A = g_cpu.X = nes_read((0xD2 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_B2FC:;
    /* $B2FC: B8 */ nes_cpu_instruction_boundary(0xB2FC, 2); g_cpu.V = 0;
label_B2FD:;
    /* $B2FD: AC */ nes_cpu_instruction_boundary(0xB2FD, 4); g_cpu.Y = nes_read(0xA7B7); FLAG_NZ(g_cpu.Y);
label_B300:;
    /* $B300: B8 */ nes_cpu_instruction_boundary(0xB300, 2); g_cpu.V = 0;
label_B301:;
    /* $B301: 21 */ nes_cpu_instruction_boundary(0xB301, 6); g_cpu.A &= nes_read(nes_read16zp((0xB9 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B303:;
    /* $B303: D9 */ nes_cpu_instruction_boundary(0xB303, 4); { uint8_t m=nes_read((0xEFB7 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B306:;
    /* $B306: B7 */ nes_cpu_instruction_boundary(0xB306, 4); g_cpu.A = g_cpu.X = nes_read((0x34 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_B308:;
    /* $B308: B8 */ nes_cpu_instruction_boundary(0xB308, 2); g_cpu.V = 0;
label_B309:;
    /* $B309: 78 */ nes_cpu_instruction_boundary(0xB309, 2); g_cpu.I = 1;
label_B30A:;
    /* $B30A: B8 */ nes_cpu_instruction_boundary(0xB30A, 2); g_cpu.V = 0;
label_B30B:; /* SFXTriContRoutineTbl */
    /* $B30B: ED */ nes_cpu_instruction_boundary(0xB30B, 4); { uint8_t m=nes_read(0xCBB8); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B30E:;
    /* $B30E: B7 */ nes_cpu_instruction_boundary(0xB30E, 4); g_cpu.A = g_cpu.X = nes_read((0xB1 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_B310:;
    /* $B310: B8 */ nes_cpu_instruction_boundary(0xB310, 2); g_cpu.V = 0;
label_B311:;
    /* $B311: 40 */ nes_cpu_instruction_boundary(0xB311, 6); /* RTI */ g_rti_source = 0xB311; g_rti_bank = 0; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B2F9_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B2F9_b0");
#endif
label_B2F9:;
    /* $B2F9: 81 */ nes_cpu_instruction_boundary(0xB2F9, 6); nes_write(nes_read16zp((0xB7 + g_cpu.X) & 0xFF), g_cpu.A);
label_B2FB:; /* SFXTriInitRoutineTbl */
    /* $B2FB: D2 */ nes_cpu_instruction_boundary(0xB2FB, 2); /* ILLEGAL $D2 — skip 1 */
label_B2FC:;
    /* $B2FC: B8 */ nes_cpu_instruction_boundary(0xB2FC, 2); g_cpu.V = 0;
label_B2FD:;
    /* $B2FD: AC */ nes_cpu_instruction_boundary(0xB2FD, 4); g_cpu.Y = nes_read(0xA7B7); FLAG_NZ(g_cpu.Y);
label_B300:;
    /* $B300: B8 */ nes_cpu_instruction_boundary(0xB300, 2); g_cpu.V = 0;
label_B301:;
    /* $B301: 21 */ nes_cpu_instruction_boundary(0xB301, 6); g_cpu.A &= nes_read(nes_read16zp((0xB9 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B303:;
    /* $B303: D9 */ nes_cpu_instruction_boundary(0xB303, 4); { uint8_t m=nes_read((0xEFB7 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B306:;
    /* $B306: B7 */ nes_cpu_instruction_boundary(0xB306, 4); g_cpu.A = g_cpu.X = nes_read((0x34 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_B308:;
    /* $B308: B8 */ nes_cpu_instruction_boundary(0xB308, 2); g_cpu.V = 0;
label_B309:;
    /* $B309: 78 */ nes_cpu_instruction_boundary(0xB309, 2); g_cpu.I = 1;
label_B30A:;
    /* $B30A: B8 */ nes_cpu_instruction_boundary(0xB30A, 2); g_cpu.V = 0;
label_B30B:; /* SFXTriContRoutineTbl */
    /* $B30B: ED */ nes_cpu_instruction_boundary(0xB30B, 4); { uint8_t m=nes_read(0xCBB8); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B30E:;
    /* $B30E: B7 */ nes_cpu_instruction_boundary(0xB30E, 4); g_cpu.A = g_cpu.X = nes_read((0xB1 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_B310:;
    /* $B310: B8 */ nes_cpu_instruction_boundary(0xB310, 2); g_cpu.V = 0;
label_B311:;
    /* $B311: 40 */ nes_cpu_instruction_boundary(0xB311, 6); /* RTI */ g_rti_source = 0xB311; g_rti_bank = 0; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B30D_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B30D_b0");
#endif
label_B30D:;
    /* $B30D: CB */ nes_cpu_instruction_boundary(0xB30D, 2); { uint8_t t=(uint8_t)(g_cpu.A & g_cpu.X); g_cpu.C=(t>=0xB7)?1:0; g_cpu.X=(t-0xB7)&0xFF; FLAG_NZ(g_cpu.X); }
label_B30F:;
    /* $B30F: B1 */ nes_cpu_instruction_boundary(0xB30F, 5); g_cpu.A = nes_read((nes_read16zp(0xB8) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B311:;
    /* $B311: 40 */ nes_cpu_instruction_boundary(0xB311, 6); /* RTI */ g_rti_source = 0xB311; g_rti_bank = 0; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B35C_b0(void) { /* RunSFXMultiContRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B35C_b0");
#endif
label_B35C:; /* RunSFXMultiContRoutine */
    /* $B35C: AD */ nes_cpu_instruction_boundary(0xB35C, 4); g_cpu.A = nes_read(0x068C); FLAG_NZ(g_cpu.A);
label_B35F:;
    /* $B35F: A2 */ nes_cpu_instruction_boundary(0xB35F, 2); g_cpu.X = 0xAC; FLAG_NZ(g_cpu.X);
label_B361:;
    /* $B361: 4C */ nes_cpu_instruction_boundary(0xB361, 3); nes_cpu_instruction_boundary(0xB337, 2); func_B337_b0(); return;
}

void func_B364_b0(void) { /* GotoRunSFXSQ1InitRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B364_b0");
#endif
label_B364:; /* GotoRunSFXSQ1InitRoutine */
    /* $B364: 20 */ nes_cpu_instruction_boundary(0xB364, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x66; g_cpu.S--; func_B329_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB364, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B367:;
    /* $B367: 60 */ nes_cpu_instruction_boundary(0xB367, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B3C0_b0_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B3E4;
    }
label_B3C0:;
    /* $B3C0: 1E */ nes_cpu_instruction_boundary(0xB3C0, 7); { uint16_t a=(0x05C9 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B3C3:;
    /* $B3C3: F0 */ nes_cpu_instruction_boundary(0xB3C3, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB399); return; }
label_B3C5:;
    /* $B3C5: A9 */ nes_cpu_instruction_boundary(0xB3C5, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B3C7:;
    /* $B3C7: 8D */ nes_cpu_instruction_boundary(0xB3C7, 4); nes_write(0x0602, g_cpu.A);
label_B3CA:;
    /* $B3CA: 20 */ nes_cpu_instruction_boundary(0xB3CA, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCC; g_cpu.S--; func_B31B_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3CA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3CD:;
    /* $B3CD: 20 */ nes_cpu_instruction_boundary(0xB3CD, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCF; g_cpu.S--; func_B34B_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3CD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3D0:;
    /* $B3D0: 20 */ nes_cpu_instruction_boundary(0xB3D0, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD2; g_cpu.S--; func_B33D_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3D0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3D3:;
    /* $B3D3: 20 */ nes_cpu_instruction_boundary(0xB3D3, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD5; g_cpu.S--; func_BC36_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3D3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3D6:; /* ClearInitFlags */
    /* $B3D6: A9 */ nes_cpu_instruction_boundary(0xB3D6, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B3D8:;
    /* $B3D8: 8D */ nes_cpu_instruction_boundary(0xB3D8, 4); nes_write(0x0680, g_cpu.A);
label_B3DB:;
    /* $B3DB: 8D */ nes_cpu_instruction_boundary(0xB3DB, 4); nes_write(0x0681, g_cpu.A);
label_B3DE:;
    /* $B3DE: 8D */ nes_cpu_instruction_boundary(0xB3DE, 4); nes_write(0x0682, g_cpu.A);
label_B3E1:;
    /* $B3E1: 8D */ nes_cpu_instruction_boundary(0xB3E1, 4); nes_write(0x0683, g_cpu.A);
label_B3E4:;
    /* $B3E4: 8D */ nes_cpu_instruction_boundary(0xB3E4, 4); nes_write(0x0684, g_cpu.A);
label_B3E7:;
    /* $B3E7: 8D */ nes_cpu_instruction_boundary(0xB3E7, 4); nes_write(0x0685, g_cpu.A);
label_B3EA:;
    /* $B3EA: 60 */ nes_cpu_instruction_boundary(0xB3EA, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B3C0_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3C0_b0");
#endif
    func_B3C0_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B3E4_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3E4_b0");
#endif
    func_B3C0_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B3CC_b0_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B3DE;
    }
label_B3CC:;
    /* $B3CC: B3 */ nes_cpu_instruction_boundary(0xB3CC, 5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x20) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B3CE:;
    /* $B3CE: 4B */ nes_cpu_instruction_boundary(0xB3CE, 2); g_cpu.A &= 0xB3; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_B3D0:;
    /* $B3D0: 20 */ nes_cpu_instruction_boundary(0xB3D0, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD2; g_cpu.S--; func_B33D_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3D0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3D3:;
    /* $B3D3: 20 */ nes_cpu_instruction_boundary(0xB3D3, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD5; g_cpu.S--; func_BC36_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3D3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3D6:; /* ClearInitFlags */
    /* $B3D6: A9 */ nes_cpu_instruction_boundary(0xB3D6, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B3D8:;
    /* $B3D8: 8D */ nes_cpu_instruction_boundary(0xB3D8, 4); nes_write(0x0680, g_cpu.A);
label_B3DB:;
    /* $B3DB: 8D */ nes_cpu_instruction_boundary(0xB3DB, 4); nes_write(0x0681, g_cpu.A);
label_B3DE:;
    /* $B3DE: 8D */ nes_cpu_instruction_boundary(0xB3DE, 4); nes_write(0x0682, g_cpu.A);
label_B3E1:;
    /* $B3E1: 8D */ nes_cpu_instruction_boundary(0xB3E1, 4); nes_write(0x0683, g_cpu.A);
label_B3E4:;
    /* $B3E4: 8D */ nes_cpu_instruction_boundary(0xB3E4, 4); nes_write(0x0684, g_cpu.A);
label_B3E7:;
    /* $B3E7: 8D */ nes_cpu_instruction_boundary(0xB3E7, 4); nes_write(0x0685, g_cpu.A);
label_B3EA:;
    /* $B3EA: 60 */ nes_cpu_instruction_boundary(0xB3EA, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B3CC_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3CC_b0");
#endif
    func_B3CC_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B3DE_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3DE_b0");
#endif
    func_B3CC_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B479_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B479_b0");
#endif
label_B479:;
    /* $B479: B3 */ nes_cpu_instruction_boundary(0xB479, 5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x20) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B47B:;
    /* $B47B: 93 */ nes_cpu_instruction_boundary(0xB47B, 6); /* ILLEGAL $93 — skip 2 */
label_B47D:;
    /* $B47D: 8A */ nes_cpu_instruction_boundary(0xB47D, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_B47E:;
    /* $B47E: 9D */ nes_cpu_instruction_boundary(0xB47E, 5); nes_write((0x0652 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B481:;
    /* $B481: A9 */ nes_cpu_instruction_boundary(0xB481, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B483:;
    /* $B483: 9D */ nes_cpu_instruction_boundary(0xB483, 5); nes_write((0x0665 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B486:;
    /* $B486: 9D */ nes_cpu_instruction_boundary(0xB486, 5); nes_write((0x0670 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B489:;
    /* $B489: 9D */ nes_cpu_instruction_boundary(0xB489, 5); nes_write((0x0674 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B48C:;
    /* $B48C: 9D */ nes_cpu_instruction_boundary(0xB48C, 5); nes_write((0x0678 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B48F:;
    /* $B48F: 8D */ nes_cpu_instruction_boundary(0xB48F, 4); nes_write(0x0607, g_cpu.A);
label_B492:;
    /* $B492: 60 */ nes_cpu_instruction_boundary(0xB492, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B48D_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B48D_b0");
#endif
label_B48D:;
    /* $B48D: 78 */ nes_cpu_instruction_boundary(0xB48D, 2); g_cpu.I = 1;
label_B48E:;
    /* $B48E: 06 */ nes_cpu_instruction_boundary(0xB48E, 5); { uint16_t a=0x8D; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B490:;
    /* $B490: 07 */ nes_cpu_instruction_boundary(0xB490, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B492:;
    /* $B492: 60 */ nes_cpu_instruction_boundary(0xB492, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B557_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B557_b0");
#endif
label_B557:;
    /* $B557: EE */ nes_cpu_instruction_boundary(0xB557, 6); { uint16_t a=0x0674; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B55A:;
    /* $B55A: AD */ nes_cpu_instruction_boundary(0xB55A, 4); g_cpu.A = nes_read(0x0674); FLAG_NZ(g_cpu.A);
label_B55D:;
    /* $B55D: C9 */ nes_cpu_instruction_boundary(0xB55D, 2); { int r=g_cpu.A-0x0F; g_cpu.C=(g_cpu.A>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_B55F:;
    /* $B55F: D0 */ nes_cpu_instruction_boundary(0xB55F, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB538); return; }
label_B561:;
    /* $B561: 4C */ nes_cpu_instruction_boundary(0xB561, 3); nes_cpu_instruction_boundary(0xB58F, 2); func_B58F_b0(); return;
}

void func_B575_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B575_b0");
#endif
label_B575:;
    /* $B575: A9 */ nes_cpu_instruction_boundary(0xB575, 2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_B577:;
    /* $B577: 8D */ nes_cpu_instruction_boundary(0xB577, 4); nes_write(0x0670, g_cpu.A);
label_B57A:;
    /* $B57A: 60 */ nes_cpu_instruction_boundary(0xB57A, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B948_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B948_b0");
#endif
label_B948:;
    /* $B948: AD */ nes_cpu_instruction_boundary(0xB948, 4); g_cpu.A = nes_read(0x0673); FLAG_NZ(g_cpu.A);
label_B94B:;
    /* $B94B: C9 */ nes_cpu_instruction_boundary(0xB94B, 2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_B94D:;
    /* $B94D: D0 */ nes_cpu_instruction_boundary(0xB94D, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B952; }
label_B94F:;
    /* $B94F: 4C */ nes_cpu_instruction_boundary(0xB94F, 3); nes_cpu_instruction_boundary(0xB896, 2); func_B896_b0(); return;
label_B952:; /* StatueRaiseSFXCont_endIf_B */
    /* $B952: AD */ nes_cpu_instruction_boundary(0xB952, 4); g_cpu.A = nes_read(0x0612); FLAG_NZ(g_cpu.A);
label_B955:;
    /* $B955: 48 */ nes_cpu_instruction_boundary(0xB955, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B956:;
    /* $B956: AD */ nes_cpu_instruction_boundary(0xB956, 4); g_cpu.A = nes_read(0x0613); FLAG_NZ(g_cpu.A);
label_B959:;
    /* $B959: 48 */ nes_cpu_instruction_boundary(0xB959, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B95A:;
    /* $B95A: A9 */ nes_cpu_instruction_boundary(0xB95A, 2); g_cpu.A = 0x25; FLAG_NZ(g_cpu.A);
label_B95C:;
    /* $B95C: 8D */ nes_cpu_instruction_boundary(0xB95C, 4); nes_write(0x0612, g_cpu.A);
label_B95F:;
    /* $B95F: A9 */ nes_cpu_instruction_boundary(0xB95F, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B961:;
    /* $B961: 8D */ nes_cpu_instruction_boundary(0xB961, 4); nes_write(0x0613, g_cpu.A);
label_B964:;
    /* $B964: 20 */ nes_cpu_instruction_boundary(0xB964, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x66; g_cpu.S--; func_B978_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB964, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B967:;
    /* $B967: 68 */ nes_cpu_instruction_boundary(0xB967, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_B968:;
    /* $B968: 8D */ nes_cpu_instruction_boundary(0xB968, 4); nes_write(0x0613, g_cpu.A);
label_B96B:;
    /* $B96B: 68 */ nes_cpu_instruction_boundary(0xB96B, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_B96C:;
    /* $B96C: 8D */ nes_cpu_instruction_boundary(0xB96C, 4); nes_write(0x0612, g_cpu.A);
label_B96F:;
    /* $B96F: 4C */ nes_cpu_instruction_boundary(0xB96F, 3); nes_cpu_instruction_boundary(0xB869, 2); func_B869_b0(); return;
}

void func_B95C_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B95C_b0");
#endif
label_B95C:;
    /* $B95C: 8D */ nes_cpu_instruction_boundary(0xB95C, 4); nes_write(0x0612, g_cpu.A);
label_B95F:;
    /* $B95F: A9 */ nes_cpu_instruction_boundary(0xB95F, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B961:;
    /* $B961: 8D */ nes_cpu_instruction_boundary(0xB961, 4); nes_write(0x0613, g_cpu.A);
label_B964:;
    /* $B964: 20 */ nes_cpu_instruction_boundary(0xB964, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x66; g_cpu.S--; func_B978_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB964, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B967:;
    /* $B967: 68 */ nes_cpu_instruction_boundary(0xB967, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_B968:;
    /* $B968: 8D */ nes_cpu_instruction_boundary(0xB968, 4); nes_write(0x0613, g_cpu.A);
label_B96B:;
    /* $B96B: 68 */ nes_cpu_instruction_boundary(0xB96B, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_B96C:;
    /* $B96C: 8D */ nes_cpu_instruction_boundary(0xB96C, 4); nes_write(0x0612, g_cpu.A);
label_B96F:;
    /* $B96F: 4C */ nes_cpu_instruction_boundary(0xB96F, 3); nes_cpu_instruction_boundary(0xB869, 2); func_B869_b0(); return;
}

void func_B970_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B970_b0");
#endif
label_B970:;
    /* $B970: 69 */ nes_cpu_instruction_boundary(0xB970, 2); { uint16_t r = g_cpu.A + 0xB8 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xB8); g_cpu.A=r&0xFF; }
label_B972:; /* StatueRaiseSFXCont_endIf_A */
    /* $B972: 20 */ nes_cpu_instruction_boundary(0xB972, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x74; g_cpu.S--; func_B98C_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB972, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B975:;
    /* $B975: 4C */ nes_cpu_instruction_boundary(0xB975, 3); nes_cpu_instruction_boundary(0xB869, 2); func_B869_b0(); return;
}

void func_B9B4_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9B4_b0");
#endif
label_B9B4:;
    /* $B9B4: 06 */ nes_cpu_instruction_boundary(0xB9B4, 5); { uint16_t a=0x2E; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9B6:;
    /* $B9B6: 17 */ nes_cpu_instruction_boundary(0xB9B6, 6); { uint16_t a=(0x06 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B9B8:;
    /* $B9B8: AD */ nes_cpu_instruction_boundary(0xB9B8, 4); g_cpu.A = nes_read(0x0617); FLAG_NZ(g_cpu.A);
label_B9BB:;
    /* $B9BB: CD */ nes_cpu_instruction_boundary(0xB9BB, 4); { uint8_t m=nes_read(0x0616); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B9BE:;
    /* $B9BE: 90 */ nes_cpu_instruction_boundary(0xB9BE, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_B9C6; }
label_B9C0:;
    /* $B9C0: ED */ nes_cpu_instruction_boundary(0xB9C0, 4); { uint8_t m=nes_read(0x0616); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9C3:;
    /* $B9C3: 8D */ nes_cpu_instruction_boundary(0xB9C3, 4); nes_write(0x0617, g_cpu.A);
label_B9C6:; /* DivideSFXTriPeriod_endIf_A */
    /* $B9C6: 2E */ nes_cpu_instruction_boundary(0xB9C6, 6); { uint16_t a=0x0610; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9C9:;
    /* $B9C9: 2E */ nes_cpu_instruction_boundary(0xB9C9, 6); { uint16_t a=0x0611; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9CC:;
    /* $B9CC: CA */ nes_cpu_instruction_boundary(0xB9CC, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_B9CD:;
    /* $B9CD: D0 */ nes_cpu_instruction_boundary(0xB9CD, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB9B5); return; }
label_B9CF:;
    /* $B9CF: AD */ nes_cpu_instruction_boundary(0xB9CF, 4); g_cpu.A = nes_read(0x0610); FLAG_NZ(g_cpu.A);
label_B9D2:;
    /* $B9D2: 8D */ nes_cpu_instruction_boundary(0xB9D2, 4); nes_write(0x0614, g_cpu.A);
label_B9D5:;
    /* $B9D5: AD */ nes_cpu_instruction_boundary(0xB9D5, 4); g_cpu.A = nes_read(0x0611); FLAG_NZ(g_cpu.A);
label_B9D8:;
    /* $B9D8: 8D */ nes_cpu_instruction_boundary(0xB9D8, 4); nes_write(0x0615, g_cpu.A);
label_B9DB:;
    /* $B9DB: 68 */ nes_cpu_instruction_boundary(0xB9DB, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_B9DC:;
    /* $B9DC: 8D */ nes_cpu_instruction_boundary(0xB9DC, 4); nes_write(0x0611, g_cpu.A);
label_B9DF:;
    /* $B9DF: 68 */ nes_cpu_instruction_boundary(0xB9DF, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_B9E0:;
    /* $B9E0: 8D */ nes_cpu_instruction_boundary(0xB9E0, 4); nes_write(0x0610, g_cpu.A);
label_B9E3:;
    /* $B9E3: 60 */ nes_cpu_instruction_boundary(0xB9E3, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B9B5_b0_body(int _entry) { /* DivideSFXTriPeriod_loop */
    switch (_entry) {
        case 1: goto label_B9C3;
    }
label_B9B5:; /* DivideSFXTriPeriod_loop */
    /* $B9B5: 2E */ nes_cpu_instruction_boundary(0xB9B5, 6); { uint16_t a=0x0617; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9B8:;
    /* $B9B8: AD */ nes_cpu_instruction_boundary(0xB9B8, 4); g_cpu.A = nes_read(0x0617); FLAG_NZ(g_cpu.A);
label_B9BB:;
    /* $B9BB: CD */ nes_cpu_instruction_boundary(0xB9BB, 4); { uint8_t m=nes_read(0x0616); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B9BE:;
    /* $B9BE: 90 */ nes_cpu_instruction_boundary(0xB9BE, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_B9C6; }
label_B9C0:;
    /* $B9C0: ED */ nes_cpu_instruction_boundary(0xB9C0, 4); { uint8_t m=nes_read(0x0616); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9C3:;
    /* $B9C3: 8D */ nes_cpu_instruction_boundary(0xB9C3, 4); nes_write(0x0617, g_cpu.A);
label_B9C6:; /* DivideSFXTriPeriod_endIf_A */
    /* $B9C6: 2E */ nes_cpu_instruction_boundary(0xB9C6, 6); { uint16_t a=0x0610; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9C9:;
    /* $B9C9: 2E */ nes_cpu_instruction_boundary(0xB9C9, 6); { uint16_t a=0x0611; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9CC:;
    /* $B9CC: CA */ nes_cpu_instruction_boundary(0xB9CC, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_B9CD:;
    /* $B9CD: D0 */ nes_cpu_instruction_boundary(0xB9CD, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xB9B5, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B9B5;
    }
label_B9CF:;
    /* $B9CF: AD */ nes_cpu_instruction_boundary(0xB9CF, 4); g_cpu.A = nes_read(0x0610); FLAG_NZ(g_cpu.A);
label_B9D2:;
    /* $B9D2: 8D */ nes_cpu_instruction_boundary(0xB9D2, 4); nes_write(0x0614, g_cpu.A);
label_B9D5:;
    /* $B9D5: AD */ nes_cpu_instruction_boundary(0xB9D5, 4); g_cpu.A = nes_read(0x0611); FLAG_NZ(g_cpu.A);
label_B9D8:;
    /* $B9D8: 8D */ nes_cpu_instruction_boundary(0xB9D8, 4); nes_write(0x0615, g_cpu.A);
label_B9DB:;
    /* $B9DB: 68 */ nes_cpu_instruction_boundary(0xB9DB, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_B9DC:;
    /* $B9DC: 8D */ nes_cpu_instruction_boundary(0xB9DC, 4); nes_write(0x0611, g_cpu.A);
label_B9DF:;
    /* $B9DF: 68 */ nes_cpu_instruction_boundary(0xB9DF, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_B9E0:;
    /* $B9E0: 8D */ nes_cpu_instruction_boundary(0xB9E0, 4); nes_write(0x0610, g_cpu.A);
label_B9E3:;
    /* $B9E3: 60 */ nes_cpu_instruction_boundary(0xB9E3, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B9B5_b0(void) { /* DivideSFXTriPeriod_loop */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9B5_b0");
#endif
    func_B9B5_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B9C3_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9C3_b0");
#endif
    func_B9B5_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BA11_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA11_b0");
#endif
label_BA11:;
    /* $BA11: 06 */ nes_cpu_instruction_boundary(0xBA11, 5); { uint16_t a=0xAD; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA13:;
    /* $BA13: 48 */ nes_cpu_instruction_boundary(0xBA13, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_BA14:;
    /* $BA14: 06 */ nes_cpu_instruction_boundary(0xBA14, 5); { uint16_t a=0x8D; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA16:;
    /* $BA16: 01 */ nes_cpu_instruction_boundary(0xBA16, 6); g_cpu.A |= nes_read(nes_read16zp((0x40 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA18:;
    /* $BA18: AD */ nes_cpu_instruction_boundary(0xBA18, 4); g_cpu.A = nes_read(0x0600); FLAG_NZ(g_cpu.A);
label_BA1B:;
    /* $BA1B: 8D */ nes_cpu_instruction_boundary(0xBA1B, 4); nes_write(0x4002, g_cpu.A);
label_BA1E:;
    /* $BA1E: AD */ nes_cpu_instruction_boundary(0xBA1E, 4); g_cpu.A = nes_read(0x0601); FLAG_NZ(g_cpu.A);
label_BA21:;
    /* $BA21: 8D */ nes_cpu_instruction_boundary(0xBA21, 4); nes_write(0x4003, g_cpu.A);
label_BA24:;
    /* $BA24: AD */ nes_cpu_instruction_boundary(0xBA24, 4); g_cpu.A = nes_read(0x0649); FLAG_NZ(g_cpu.A);
label_BA27:;
    /* $BA27: 8D */ nes_cpu_instruction_boundary(0xBA27, 4); nes_write(0x4005, g_cpu.A);
label_BA2A:;
    /* $BA2A: AD */ nes_cpu_instruction_boundary(0xBA2A, 4); g_cpu.A = nes_read(0x0604); FLAG_NZ(g_cpu.A);
label_BA2D:;
    /* $BA2D: 8D */ nes_cpu_instruction_boundary(0xBA2D, 4); nes_write(0x4006, g_cpu.A);
label_BA30:;
    /* $BA30: AD */ nes_cpu_instruction_boundary(0xBA30, 4); g_cpu.A = nes_read(0x0605); FLAG_NZ(g_cpu.A);
label_BA33:;
    /* $BA33: 8D */ nes_cpu_instruction_boundary(0xBA33, 4); nes_write(0x4007, g_cpu.A);
label_BA36:; /* LoadMusicSQ1SQ2Periods_RTS */
    /* $BA36: 60 */ nes_cpu_instruction_boundary(0xBA36, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BBEC_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BBEC_b0");
#endif
label_BBEC:;
    /* $BBEC: 01 */ nes_cpu_instruction_boundary(0xBBEC, 6); g_cpu.A |= nes_read(nes_read16zp((0xB2 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BBEE:;
    /* $BBEE: 8D */ nes_cpu_instruction_boundary(0xBBEE, 4); nes_write(0x400E, g_cpu.A);
label_BBF1:;
    /* $BBF1: B9 */ nes_cpu_instruction_boundary(0xBBF1, 4); g_cpu.A = nes_read((0xB202 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBF4:;
    /* $BBF4: 8D */ nes_cpu_instruction_boundary(0xBBF4, 4); nes_write(0x400F, g_cpu.A);
label_BBF7:; /* MusicChannelInstr_SongNoteNoise_endIf_A */
    /* $BBF7: 4C */ nes_cpu_instruction_boundary(0xBBF7, 3); nes_cpu_instruction_boundary(0xBBA8, 2); func_BBA8_b0(); return;
}

void func_BC23_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC23_b0");
#endif
label_BC23:;
    /* $BC23: B5 */ nes_cpu_instruction_boundary(0xBC23, 4); g_cpu.A = nes_read((0xA1 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_BC25:;
    /* $BC25: B6 */ nes_cpu_instruction_boundary(0xBC25, 4); g_cpu.X = nes_read((0x83 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_BC27:;
    /* $BC27: BC */ nes_cpu_instruction_boundary(0xBC27, 4); g_cpu.Y = nes_read((0xBC77 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BC2A:;
    /* $BC2A: 77 */ nes_cpu_instruction_boundary(0xBC2A, 6); { uint16_t a=(0xBC + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BC2C:;
    /* $BC2C: 77 */ nes_cpu_instruction_boundary(0xBC2C, 6); { uint16_t a=(0xBC + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BC2E:;
    /* $BC2E: 80 */ nes_cpu_instruction_boundary(0xBC2E, 2); /* NOP */
label_BC30:;
    /* $BC30: 7D */ nes_cpu_instruction_boundary(0xBC30, 4); { uint8_t m=nes_read((0x77BC + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BC33:;
    /* $BC33: BC */ nes_cpu_instruction_boundary(0xBC33, 4); g_cpu.Y = nes_read((0xBC80 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BC36:; /* RunMusicLoopRoutine */
    /* $BC36: AD */ nes_cpu_instruction_boundary(0xBC36, 4); g_cpu.A = nes_read(0x065D); FLAG_NZ(g_cpu.A);
label_BC39:;
    /* $BC39: A2 */ nes_cpu_instruction_boundary(0xBC39, 2); g_cpu.X = 0xB6; FLAG_NZ(g_cpu.X);
label_BC3B:;
    /* $BC3B: D0 */ nes_cpu_instruction_boundary(0xBC3B, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BC42; }
label_BC3D:; /* RunMusicInitRoutine */
    /* $BC3D: AD */ nes_cpu_instruction_boundary(0xBC3D, 4); g_cpu.A = nes_read(0x0685); FLAG_NZ(g_cpu.A);
label_BC40:;
    /* $BC40: A2 */ nes_cpu_instruction_boundary(0xBC40, 2); g_cpu.X = 0xB1; FLAG_NZ(g_cpu.X);
label_BC42:; /* RunMusicInitRoutine_Common */
    /* $BC42: 20 */ nes_cpu_instruction_boundary(0xBC42, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x44; g_cpu.S--; func_B4BD_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC42, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC45:;
    /* $BC45: 20 */ nes_cpu_instruction_boundary(0xBC45, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x47; g_cpu.S--; func_BC53_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC45, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC48:;
    /* $BC48: 6C */ nes_cpu_instruction_boundary(0xBC48, 5); { uint16_t _jt = nes_read16zp(0xE2); nes_cpu_instruction_boundary(_jt, 2); call_by_address_tail(_jt, -1); return; }
}

void func_BC34_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC34_b0");
#endif
label_BC34:;
    /* $BC34: 80 */ nes_cpu_instruction_boundary(0xBC34, 2); /* NOP */
label_BC36:; /* RunMusicLoopRoutine */
    /* $BC36: AD */ nes_cpu_instruction_boundary(0xBC36, 4); g_cpu.A = nes_read(0x065D); FLAG_NZ(g_cpu.A);
label_BC39:;
    /* $BC39: A2 */ nes_cpu_instruction_boundary(0xBC39, 2); g_cpu.X = 0xB6; FLAG_NZ(g_cpu.X);
label_BC3B:;
    /* $BC3B: D0 */ nes_cpu_instruction_boundary(0xBC3B, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BC42; }
label_BC3D:; /* RunMusicInitRoutine */
    /* $BC3D: AD */ nes_cpu_instruction_boundary(0xBC3D, 4); g_cpu.A = nes_read(0x0685); FLAG_NZ(g_cpu.A);
label_BC40:;
    /* $BC40: A2 */ nes_cpu_instruction_boundary(0xBC40, 2); g_cpu.X = 0xB1; FLAG_NZ(g_cpu.X);
label_BC42:; /* RunMusicInitRoutine_Common */
    /* $BC42: 20 */ nes_cpu_instruction_boundary(0xBC42, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x44; g_cpu.S--; func_B4BD_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC42, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC45:;
    /* $BC45: 20 */ nes_cpu_instruction_boundary(0xBC45, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x47; g_cpu.S--; func_BC53_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC45, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC48:;
    /* $BC48: 6C */ nes_cpu_instruction_boundary(0xBC48, 5); { uint16_t _jt = nes_read16zp(0xE2); nes_cpu_instruction_boundary(_jt, 2); call_by_address_tail(_jt, -1); return; }
}

void func_BC4B_b0(void) { /* ContinueMusic */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC4B_b0");
#endif
label_BC4B:; /* ContinueMusic */
    /* $BC4B: AD */ nes_cpu_instruction_boundary(0xBC4B, 4); g_cpu.A = nes_read(0x068D); FLAG_NZ(g_cpu.A);
label_BC4E:;
    /* $BC4E: F0 */ nes_cpu_instruction_boundary(0xBC4E, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BC76; }
label_BC50:;
    /* $BC50: 4C */ nes_cpu_instruction_boundary(0xBC50, 3); nes_cpu_instruction_boundary(0xBAA5, 2); func_BAA5_b0(); return;
label_BC76:; /* MusicInitIndexAdd8_RTS */
    /* $BC76: 60 */ nes_cpu_instruction_boundary(0xBC76, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BC7A_b0(void) { /* GotoMusic01Init */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC7A_b0");
#endif
label_BC7A:; /* GotoMusic01Init */
    /* $BC7A: 4C */ nes_cpu_instruction_boundary(0xBC7A, 3); nes_cpu_instruction_boundary(0xBCA4, 2); func_BCA4_b0(); return;
}

void func_BEE9_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BEE9_b0");
#endif
label_BEE9:;
    /* $BEE9: 00 */ nes_cpu_instruction_boundary(0xBEE9, 7); nes_brk_executed(0xBEE9); return;
}

void func_C000_b0(void) { /* RandomNumbers */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C000_b0");
#endif
label_C000:; /* RandomNumbers */
    /* $C000: 8A */ nes_cpu_instruction_boundary(0xC000, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_C001:;
    /* $C001: 48 */ nes_cpu_instruction_boundary(0xC001, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_C002:;
    /* $C002: A2 */ nes_cpu_instruction_boundary(0xC002, 2); g_cpu.X = 0x05; FLAG_NZ(g_cpu.X);
label_C004:; /* RandomNumbers_loop */
    /* $C004: A5 */ nes_cpu_instruction_boundary(0xC004, 3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_C006:;
    /* $C006: 18 */ nes_cpu_instruction_boundary(0xC006, 2); g_cpu.C = 0;
label_C007:;
    /* $C007: 69 */ nes_cpu_instruction_boundary(0xC007, 2); { uint16_t r = g_cpu.A + 0x05 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x05); g_cpu.A=r&0xFF; }
label_C009:;
    /* $C009: 85 */ nes_cpu_instruction_boundary(0xC009, 3); nes_write(0x2E, g_cpu.A);
label_C00B:;
    /* $C00B: A5 */ nes_cpu_instruction_boundary(0xC00B, 3); g_cpu.A = nes_read(0x2F); FLAG_NZ(g_cpu.A);
label_C00D:;
    /* $C00D: 18 */ nes_cpu_instruction_boundary(0xC00D, 2); g_cpu.C = 0;
label_C00E:;
    /* $C00E: 69 */ nes_cpu_instruction_boundary(0xC00E, 2); { uint16_t r = g_cpu.A + 0x13 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x13); g_cpu.A=r&0xFF; }
label_C010:;
    /* $C010: 85 */ nes_cpu_instruction_boundary(0xC010, 3); nes_write(0x2F, g_cpu.A);
label_C012:;
    /* $C012: CA */ nes_cpu_instruction_boundary(0xC012, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_C013:;
    /* $C013: D0 */ nes_cpu_instruction_boundary(0xC013, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xC004, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_C004;
    }
label_C015:;
    /* $C015: 68 */ nes_cpu_instruction_boundary(0xC015, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_C016:;
    /* $C016: AA */ nes_cpu_instruction_boundary(0xC016, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_C017:;
    /* $C017: A5 */ nes_cpu_instruction_boundary(0xC017, 3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_C019:;
    /* $C019: 60 */ nes_cpu_instruction_boundary(0xC019, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B2A3_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B2A3_b0");
#endif
label_B2A3:;
    /* $B2A3: B3 */ nes_cpu_instruction_boundary(0xB2A3, 5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0xEE) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B2A5:;
    /* $B2A5: B4 */ nes_cpu_instruction_boundary(0xB2A5, 4); g_cpu.Y = nes_read((0x03 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_B2A7:; /* GetSoundRoutineData_SFXMultiInit */
    /* $B2A7: 06 */ nes_cpu_instruction_boundary(0xB2A7, 5); { uint16_t a=0xBC; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B2A9:;
    /* $B2A9: 5C */ nes_cpu_instruction_boundary(0xB2A9, 4); (void)nes_read((0x04B3 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B2AC:; /* GetSoundRoutineData_SFXMultiCont */
    /* $B2AC: 16 */ nes_cpu_instruction_boundary(0xB2AC, 6); { uint16_t a=(0xBC + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B2AE:;
    /* $B2AE: 64 */ nes_cpu_instruction_boundary(0xB2AE, 3); (void)nes_read(0xB3); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B2B0:;
    /* $B2B0: 04 */ nes_cpu_instruction_boundary(0xB2B0, 3); (void)nes_read(0x26); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B2B2:;
    /* $B2B2: BC */ nes_cpu_instruction_boundary(0xB2B2, 4); g_cpu.Y = nes_read((0xBC4B + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_B2B5:;
    /* $B2B5: 00 */ nes_cpu_instruction_boundary(0xB2B5, 7); nes_brk_executed(0xB2B5); return;
}

void func_B538_b0(void) { /* ScrewAttackSFXInit_RTS */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B538_b0");
#endif
label_B538:; /* ScrewAttackSFXInit_RTS */
    /* $B538: 60 */ nes_cpu_instruction_boundary(0xB538, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

