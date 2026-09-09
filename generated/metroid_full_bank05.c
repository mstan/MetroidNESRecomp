/* metroid_full_bank05_part00.c — PRG bank 5 function bodies (sub-part 0).
 * STANDALONE translation unit — compiled independently (in
 * parallel with every other bank part/sub-part and the
 * umbrella metroid_full.c). Do not compile as part of another TU or
 * edit directly; the source of truth is the recompiler's
 * code_generator.c. Renamed to drop the _partNN suffix if
 * this bank turned out to fit in a single sub-part. */

#include "metroid_full_decls.h"

void func_B3E4_b5(void) { /* SoundEngine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3E4_b5");
#endif
label_B3E4:; /* SoundEngine */
    /* $B3E4: A9 */ nes_cpu_instruction_boundary(0xB3E4, 2); g_cpu.A = 0xC0; FLAG_NZ(g_cpu.A);
label_B3E6:;
    /* $B3E6: 8D */ nes_cpu_instruction_boundary(0xB3E6, 4); nes_write(0x4017, g_cpu.A);
label_B3E9:;
    /* $B3E9: AD */ nes_cpu_instruction_boundary(0xB3E9, 4); g_cpu.A = nes_read(0x0680); FLAG_NZ(g_cpu.A);
label_B3EC:;
    /* $B3EC: 4A */ nes_cpu_instruction_boundary(0xB3EC, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B3ED:;
    /* $B3ED: B0 */ nes_cpu_instruction_boundary(0xB3ED, 2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_B41B; }
label_B3EF:;
    /* $B3EF: A5 */ nes_cpu_instruction_boundary(0xB3EF, 3); g_cpu.A = nes_read(0x1E); FLAG_NZ(g_cpu.A);
label_B3F1:;
    /* $B3F1: C9 */ nes_cpu_instruction_boundary(0xB3F1, 2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_B3F3:;
    /* $B3F3: F0 */ nes_cpu_instruction_boundary(0xB3F3, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB3C9); return; }
label_B3F5:;
    /* $B3F5: A9 */ nes_cpu_instruction_boundary(0xB3F5, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B3F7:;
    /* $B3F7: 8D */ nes_cpu_instruction_boundary(0xB3F7, 4); nes_write(0x0602, g_cpu.A);
label_B3FA:;
    /* $B3FA: 20 */ nes_cpu_instruction_boundary(0xB3FA, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFC; g_cpu.S--; func_B34B_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3FA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3FD:;
    /* $B3FD: 20 */ nes_cpu_instruction_boundary(0xB3FD, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFF; g_cpu.S--; func_B37B_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3FD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B400:;
    /* $B400: 20 */ nes_cpu_instruction_boundary(0xB400, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x02; g_cpu.S--; func_B36D_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB400, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B403:;
    /* $B403: 20 */ nes_cpu_instruction_boundary(0xB403, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x05; g_cpu.S--; func_BC66_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB403, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B406:; /* ClearInitFlags */
    /* $B406: A9 */ nes_cpu_instruction_boundary(0xB406, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B408:;
    /* $B408: 8D */ nes_cpu_instruction_boundary(0xB408, 4); nes_write(0x0680, g_cpu.A);
label_B40B:;
    /* $B40B: 8D */ nes_cpu_instruction_boundary(0xB40B, 4); nes_write(0x0681, g_cpu.A);
label_B40E:;
    /* $B40E: 8D */ nes_cpu_instruction_boundary(0xB40E, 4); nes_write(0x0682, g_cpu.A);
label_B411:;
    /* $B411: 8D */ nes_cpu_instruction_boundary(0xB411, 4); nes_write(0x0683, g_cpu.A);
label_B414:;
    /* $B414: 8D */ nes_cpu_instruction_boundary(0xB414, 4); nes_write(0x0684, g_cpu.A);
label_B417:;
    /* $B417: 8D */ nes_cpu_instruction_boundary(0xB417, 4); nes_write(0x0685, g_cpu.A);
label_B41A:;
    /* $B41A: 60 */ nes_cpu_instruction_boundary(0xB41A, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B41B:; /* SoundEngine_SilenceMusic */
    /* $B41B: 20 */ nes_cpu_instruction_boundary(0xB41B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1D; g_cpu.S--; func_B434_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB41B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B41E:;
    /* $B41E: F0 */ nes_cpu_instruction_boundary(0xB41E, 2); if (g_cpu.Z) {
    nes_cpu_instruction_boundary(0xB406, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B406;
    }
label_B420:; /* EndOrLoopMusic */
    /* $B420: AD */ nes_cpu_instruction_boundary(0xB420, 4); g_cpu.A = nes_read(0x062C); FLAG_NZ(g_cpu.A);
label_B423:;
    /* $B423: F0 */ nes_cpu_instruction_boundary(0xB423, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B434; }
label_B425:;
    /* $B425: AD */ nes_cpu_instruction_boundary(0xB425, 4); g_cpu.A = nes_read(0x068D); FLAG_NZ(g_cpu.A);
label_B428:;
    /* $B428: 8D */ nes_cpu_instruction_boundary(0xB428, 4); nes_write(0x065D, g_cpu.A);
label_B42B:;
    /* $B42B: 60 */ nes_cpu_instruction_boundary(0xB42B, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B42C:; /* CheckMusicFlags */
    /* $B42C: AD */ nes_cpu_instruction_boundary(0xB42C, 4); g_cpu.A = nes_read(0x068D); FLAG_NZ(g_cpu.A);
label_B42F:;
    /* $B42F: CD */ nes_cpu_instruction_boundary(0xB42F, 4); { uint8_t m=nes_read(0x064D); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B432:;
    /* $B432: F0 */ nes_cpu_instruction_boundary(0xB432, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B43A; }
label_B434:; /* InitializeSoundAddresses */
    /* $B434: 20 */ nes_cpu_instruction_boundary(0xB434, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x36; g_cpu.S--; func_B44D_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB434, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B437:;
    /* $B437: 20 */ nes_cpu_instruction_boundary(0xB437, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x39; g_cpu.S--; func_B46E_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB437, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B43A:; /* GotoClearSpecialAddresses */
    /* $B43A: 20 */ nes_cpu_instruction_boundary(0xB43A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3C; g_cpu.S--; func_B43E_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB43A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B43D:;
    /* $B43D: 60 */ nes_cpu_instruction_boundary(0xB43D, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_988A_b5(void) { /* PipeBugAIRoutine_BANK5_checkIfGoForwards */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_988A_b5");
#endif
label_988A:; /* PipeBugAIRoutine_BANK5_checkIfGoForwards */
    /* $988A: BD */ nes_cpu_instruction_boundary(0x988A, 4); g_cpu.A = nes_read((0x0402 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_988D:;
    /* $988D: 30 */ nes_cpu_instruction_boundary(0x988D, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_98A6; }
label_988F:;
    /* $988F: A9 */ nes_cpu_instruction_boundary(0x988F, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9891:;
    /* $9891: 9D */ nes_cpu_instruction_boundary(0x9891, 5); nes_write((0x0402 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9894:;
    /* $9894: 9D */ nes_cpu_instruction_boundary(0x9894, 5); nes_write((0x0406 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9897:;
    /* $9897: 9D */ nes_cpu_instruction_boundary(0x9897, 5); nes_write((0x6AFE + g_cpu.X) & 0xFFFF, g_cpu.A);
label_989A:;
    /* $989A: BD */ nes_cpu_instruction_boundary(0x989A, 4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_989D:;
    /* $989D: 29 */ nes_cpu_instruction_boundary(0x989D, 2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_989F:;
    /* $989F: A8 */ nes_cpu_instruction_boundary(0x989F, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_98A0:;
    /* $98A0: B9 */ nes_cpu_instruction_boundary(0x98A0, 4); g_cpu.A = nes_read((0x98D5 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_98A3:;
    /* $98A3: 9D */ nes_cpu_instruction_boundary(0x98A3, 5); nes_write((0x0403 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_98A6:; /* PipeBugAIRoutine_BANK5_applySpeed */
    /* $98A6: BD */ nes_cpu_instruction_boundary(0x98A6, 4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_98A9:;
    /* $98A9: 0A */ nes_cpu_instruction_boundary(0x98A9, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_98AA:;
    /* $98AA: 30 */ nes_cpu_instruction_boundary(0x98AA, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_98CA; }
label_98AC:;
    /* $98AC: BD */ nes_cpu_instruction_boundary(0x98AC, 4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_98AF:;
    /* $98AF: C9 */ nes_cpu_instruction_boundary(0x98AF, 2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_98B1:;
    /* $98B1: D0 */ nes_cpu_instruction_boundary(0x98B1, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_98CA; }
label_98B3:;
    /* $98B3: 20 */ nes_cpu_instruction_boundary(0x98B3, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x98; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; func_8036_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x98B3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_98B6:;
    /* $98B6: 48 */ nes_cpu_instruction_boundary(0x98B6, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_98B7:;
    /* $98B7: 20 */ nes_cpu_instruction_boundary(0x98B7, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x98; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; func_8039_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x98B7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_98BA:;
    /* $98BA: 85 */ nes_cpu_instruction_boundary(0x98BA, 3); nes_write(0x05, g_cpu.A);
label_98BC:;
    /* $98BC: 68 */ nes_cpu_instruction_boundary(0x98BC, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_98BD:;
    /* $98BD: 85 */ nes_cpu_instruction_boundary(0x98BD, 3); nes_write(0x04, g_cpu.A);
label_98BF:;
    /* $98BF: 20 */ nes_cpu_instruction_boundary(0x98BF, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x98; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC1; g_cpu.S--; func_9AE1_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x98BF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_98C2:;
    /* $98C2: 20 */ nes_cpu_instruction_boundary(0x98C2, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x98; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC4; g_cpu.S--; func_8027_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x98C2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_98C5:;
    /* $98C5: 90 */ nes_cpu_instruction_boundary(0x98C5, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_98CF; }
label_98C7:;
    /* $98C7: 20 */ nes_cpu_instruction_boundary(0x98C7, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x98; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC9; g_cpu.S--; func_9AF1_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x98C7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_98CA:; /* PipeBugAIRoutine_BANK5_exit */
    /* $98CA: A9 */ nes_cpu_instruction_boundary(0x98CA, 2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_98CC:;
    /* $98CC: 4C */ nes_cpu_instruction_boundary(0x98CC, 3); nes_cpu_instruction_boundary(0x8003, 2); func_8003_b5(); return;
label_98CF:; /* PipeBugAIRoutine_BANK5_remove */
    /* $98CF: A9 */ nes_cpu_instruction_boundary(0x98CF, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_98D1:;
    /* $98D1: 9D */ nes_cpu_instruction_boundary(0x98D1, 5); nes_write((0x6AF4 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_98D4:;
    /* $98D4: 60 */ nes_cpu_instruction_boundary(0x98D4, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8000_b5(void) { /* CommonJump_UpdateEnemyCommon */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8000_b5");
#endif
label_8000:; /* CommonJump_UpdateEnemyCommon */
    /* $8000: 4C */ nes_cpu_instruction_boundary(0x8000, 3); nes_cpu_instruction_boundary(0xF410, 2); func_F410(); return;
}

void func_B3C9_b5(void) { /* SoundEngine_GameIsPaused */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3C9_b5");
#endif
label_B3C9:; /* SoundEngine_GameIsPaused */
    /* $B3C9: AD */ nes_cpu_instruction_boundary(0xB3C9, 4); g_cpu.A = nes_read(0x0602); FLAG_NZ(g_cpu.A);
label_B3CC:;
    /* $B3CC: F0 */ nes_cpu_instruction_boundary(0xB3CC, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB3BF); return; }
label_B3CE:;
    /* $B3CE: AD */ nes_cpu_instruction_boundary(0xB3CE, 4); g_cpu.A = nes_read(0x0603); FLAG_NZ(g_cpu.A);
label_B3D1:;
    /* $B3D1: C9 */ nes_cpu_instruction_boundary(0xB3D1, 2); { int r=g_cpu.A-0x12; g_cpu.C=(g_cpu.A>=0x12)?1:0; FLAG_NZ(r&0xFF); }
label_B3D3:;
    /* $B3D3: F0 */ nes_cpu_instruction_boundary(0xB3D3, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B3E3; }
label_B3D5:;
    /* $B3D5: 29 */ nes_cpu_instruction_boundary(0xB3D5, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_B3D7:;
    /* $B3D7: C9 */ nes_cpu_instruction_boundary(0xB3D7, 2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_B3D9:;
    /* $B3D9: D0 */ nes_cpu_instruction_boundary(0xB3D9, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B3E0; }
label_B3DB:;
    /* $B3DB: A0 */ nes_cpu_instruction_boundary(0xB3DB, 2); g_cpu.Y = 0x3D; FLAG_NZ(g_cpu.Y);
label_B3DD:;
    /* $B3DD: 20 */ nes_cpu_instruction_boundary(0xB3DD, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDF; g_cpu.S--; func_B398_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3DD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3E0:; /* SoundEngine_GameIsPaused_endIf_A */
    /* $B3E0: EE */ nes_cpu_instruction_boundary(0xB3E0, 6); { uint16_t a=0x0603; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B3E3:; /* SoundEngine_GameIsPaused_RTS */
    /* $B3E3: 60 */ nes_cpu_instruction_boundary(0xB3E3, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B34B_b5_body(int _entry) { /* RunSFXNoiseInitRoutine */
    switch (_entry) {
        case 1: goto label_B359;
    }
label_B34B:; /* RunSFXNoiseInitRoutine */
    /* $B34B: AD */ nes_cpu_instruction_boundary(0xB34B, 4); g_cpu.A = nes_read(0x0680); FLAG_NZ(g_cpu.A);
label_B34E:;
    /* $B34E: A2 */ nes_cpu_instruction_boundary(0xB34E, 2); g_cpu.X = 0xB9; FLAG_NZ(g_cpu.X);
label_B350:;
    /* $B350: D0 */ nes_cpu_instruction_boundary(0xB350, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B367; }
label_B352:; /* RunSFXNoiseContRoutine */
    /* $B352: AD */ nes_cpu_instruction_boundary(0xB352, 4); g_cpu.A = nes_read(0x0688); FLAG_NZ(g_cpu.A);
label_B355:;
    /* $B355: A2 */ nes_cpu_instruction_boundary(0xB355, 2); g_cpu.X = 0xBE; FLAG_NZ(g_cpu.X);
label_B357:;
    /* $B357: D0 */ nes_cpu_instruction_boundary(0xB357, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B367; }
label_B359:; /* RunSFXSQ1InitRoutine */
    /* $B359: AD */ nes_cpu_instruction_boundary(0xB359, 4); g_cpu.A = nes_read(0x0681); FLAG_NZ(g_cpu.A);
label_B35C:;
    /* $B35C: A2 */ nes_cpu_instruction_boundary(0xB35C, 2); g_cpu.X = 0xC3; FLAG_NZ(g_cpu.X);
label_B35E:;
    /* $B35E: D0 */ nes_cpu_instruction_boundary(0xB35E, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B367; }
label_B360:; /* RunSFXSQ1ContRoutine */
    /* $B360: AD */ nes_cpu_instruction_boundary(0xB360, 4); g_cpu.A = nes_read(0x0689); FLAG_NZ(g_cpu.A);
label_B363:;
    /* $B363: A2 */ nes_cpu_instruction_boundary(0xB363, 2); g_cpu.X = 0xC8; FLAG_NZ(g_cpu.X);
label_B365:;
    /* $B365: D0 */ nes_cpu_instruction_boundary(0xB365, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B367; }
label_B367:; /* RunSoundRoutine */
    /* $B367: 20 */ nes_cpu_instruction_boundary(0xB367, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x69; g_cpu.S--; func_B4ED_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB367, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B36A:;
    /* $B36A: 6C */ nes_cpu_instruction_boundary(0xB36A, 5); { uint16_t _jt = nes_read16zp(0xE2); nes_cpu_instruction_boundary(_jt, 2); call_by_address_tail(_jt, -1); return; }
}

void func_B34B_b5(void) { /* RunSFXNoiseInitRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B34B_b5");
#endif
    func_B34B_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B359_b5(void) { /* RunSFXSQ1InitRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B359_b5");
#endif
    func_B34B_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B37B_b5(void) { /* RunSFXMultiInitRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B37B_b5");
#endif
label_B37B:; /* RunSFXMultiInitRoutine */
    /* $B37B: AD */ nes_cpu_instruction_boundary(0xB37B, 4); g_cpu.A = nes_read(0x0684); FLAG_NZ(g_cpu.A);
label_B37E:;
    /* $B37E: A2 */ nes_cpu_instruction_boundary(0xB37E, 2); g_cpu.X = 0xD7; FLAG_NZ(g_cpu.X);
label_B380:;
    /* $B380: 20 */ nes_cpu_instruction_boundary(0xB380, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; func_B4ED_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB380, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B383:;
    /* $B383: 20 */ nes_cpu_instruction_boundary(0xB383, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x85; g_cpu.S--; func_BC83_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB383, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B386:;
    /* $B386: 20 */ nes_cpu_instruction_boundary(0xB386, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x88; g_cpu.S--; func_BC94_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB386, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B389:;
    /* $B389: 6C */ nes_cpu_instruction_boundary(0xB389, 5); { uint16_t _jt = nes_read16zp(0xE2); nes_cpu_instruction_boundary(_jt, 2); call_by_address_tail(_jt, -1); return; }
}

void func_B36D_b5(void) { /* RunSFXTriInitRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B36D_b5");
#endif
label_B36D:; /* RunSFXTriInitRoutine */
    /* $B36D: AD */ nes_cpu_instruction_boundary(0xB36D, 4); g_cpu.A = nes_read(0x0683); FLAG_NZ(g_cpu.A);
label_B370:;
    /* $B370: A2 */ nes_cpu_instruction_boundary(0xB370, 2); g_cpu.X = 0xCD; FLAG_NZ(g_cpu.X);
label_B372:;
    /* $B372: D0 */ nes_cpu_instruction_boundary(0xB372, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB367); return; }
label_B374:; /* RunSFXTriContRoutine */
    /* $B374: AD */ nes_cpu_instruction_boundary(0xB374, 4); g_cpu.A = nes_read(0x068B); FLAG_NZ(g_cpu.A);
label_B377:;
    /* $B377: A2 */ nes_cpu_instruction_boundary(0xB377, 2); g_cpu.X = 0xD2; FLAG_NZ(g_cpu.X);
label_B379:;
    /* $B379: D0 */ nes_cpu_instruction_boundary(0xB379, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB367); return; }
label_B37B:; /* RunSFXMultiInitRoutine */
    /* $B37B: AD */ nes_cpu_instruction_boundary(0xB37B, 4); g_cpu.A = nes_read(0x0684); FLAG_NZ(g_cpu.A);
label_B37E:;
    /* $B37E: A2 */ nes_cpu_instruction_boundary(0xB37E, 2); g_cpu.X = 0xD7; FLAG_NZ(g_cpu.X);
label_B380:;
    /* $B380: 20 */ nes_cpu_instruction_boundary(0xB380, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; func_B4ED_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB380, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B383:;
    /* $B383: 20 */ nes_cpu_instruction_boundary(0xB383, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x85; g_cpu.S--; func_BC83_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB383, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B386:;
    /* $B386: 20 */ nes_cpu_instruction_boundary(0xB386, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x88; g_cpu.S--; func_BC94_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB386, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B389:;
    /* $B389: 6C */ nes_cpu_instruction_boundary(0xB389, 5); { uint16_t _jt = nes_read16zp(0xE2); nes_cpu_instruction_boundary(_jt, 2); call_by_address_tail(_jt, -1); return; }
}

void func_BC66_b5(void) { /* RunMusicLoopRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC66_b5");
#endif
label_BC66:; /* RunMusicLoopRoutine */
    /* $BC66: AD */ nes_cpu_instruction_boundary(0xBC66, 4); g_cpu.A = nes_read(0x065D); FLAG_NZ(g_cpu.A);
label_BC69:;
    /* $BC69: A2 */ nes_cpu_instruction_boundary(0xBC69, 2); g_cpu.X = 0xE6; FLAG_NZ(g_cpu.X);
label_BC6B:;
    /* $BC6B: D0 */ nes_cpu_instruction_boundary(0xBC6B, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BC72; }
label_BC6D:; /* RunMusicInitRoutine */
    /* $BC6D: AD */ nes_cpu_instruction_boundary(0xBC6D, 4); g_cpu.A = nes_read(0x0685); FLAG_NZ(g_cpu.A);
label_BC70:;
    /* $BC70: A2 */ nes_cpu_instruction_boundary(0xBC70, 2); g_cpu.X = 0xE1; FLAG_NZ(g_cpu.X);
label_BC72:; /* RunMusicInitRoutine_Common */
    /* $BC72: 20 */ nes_cpu_instruction_boundary(0xBC72, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x74; g_cpu.S--; func_B4ED_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC72, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC75:;
    /* $BC75: 20 */ nes_cpu_instruction_boundary(0xBC75, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x77; g_cpu.S--; func_BC83_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC75, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC78:;
    /* $BC78: 6C */ nes_cpu_instruction_boundary(0xBC78, 5); { uint16_t _jt = nes_read16zp(0xE2); nes_cpu_instruction_boundary(_jt, 2); call_by_address_tail(_jt, -1); return; }
}

void func_B434_b5(void) { /* InitializeSoundAddresses */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B434_b5");
#endif
label_B434:; /* InitializeSoundAddresses */
    /* $B434: 20 */ nes_cpu_instruction_boundary(0xB434, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x36; g_cpu.S--; func_B44D_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB434, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B437:;
    /* $B437: 20 */ nes_cpu_instruction_boundary(0xB437, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x39; g_cpu.S--; func_B46E_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB437, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B43A:; /* GotoClearSpecialAddresses */
    /* $B43A: 20 */ nes_cpu_instruction_boundary(0xB43A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3C; g_cpu.S--; func_B43E_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB43A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B43D:;
    /* $B43D: 60 */ nes_cpu_instruction_boundary(0xB43D, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B44D_b5_body(int _entry) { /* ClearMusicAndSFXAddresses */
    switch (_entry) {
        case 1: goto label_B452;
    }
label_B44D:; /* ClearMusicAndSFXAddresses */
    /* $B44D: A9 */ nes_cpu_instruction_boundary(0xB44D, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B44F:;
    /* $B44F: 8D */ nes_cpu_instruction_boundary(0xB44F, 4); nes_write(0x0653, g_cpu.A);
label_B452:;
    /* $B452: 8D */ nes_cpu_instruction_boundary(0xB452, 4); nes_write(0x0654, g_cpu.A);
label_B455:;
    /* $B455: 8D */ nes_cpu_instruction_boundary(0xB455, 4); nes_write(0x0655, g_cpu.A);
label_B458:;
    /* $B458: 8D */ nes_cpu_instruction_boundary(0xB458, 4); nes_write(0x0607, g_cpu.A);
label_B45B:;
    /* $B45B: 8D */ nes_cpu_instruction_boundary(0xB45B, 4); nes_write(0x0688, g_cpu.A);
label_B45E:;
    /* $B45E: 8D */ nes_cpu_instruction_boundary(0xB45E, 4); nes_write(0x0689, g_cpu.A);
label_B461:;
    /* $B461: 8D */ nes_cpu_instruction_boundary(0xB461, 4); nes_write(0x068A, g_cpu.A);
label_B464:;
    /* $B464: 8D */ nes_cpu_instruction_boundary(0xB464, 4); nes_write(0x068B, g_cpu.A);
label_B467:;
    /* $B467: 8D */ nes_cpu_instruction_boundary(0xB467, 4); nes_write(0x068C, g_cpu.A);
label_B46A:;
    /* $B46A: 8D */ nes_cpu_instruction_boundary(0xB46A, 4); nes_write(0x068D, g_cpu.A);
label_B46D:;
    /* $B46D: 60 */ nes_cpu_instruction_boundary(0xB46D, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B44D_b5(void) { /* ClearMusicAndSFXAddresses */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B44D_b5");
#endif
    func_B44D_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B452_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B452_b5");
#endif
    func_B44D_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B46E_b5(void) { /* ClearSounds */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B46E_b5");
#endif
label_B46E:; /* ClearSounds */
    /* $B46E: A9 */ nes_cpu_instruction_boundary(0xB46E, 2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_B470:;
    /* $B470: 8D */ nes_cpu_instruction_boundary(0xB470, 4); nes_write(0x4000, g_cpu.A);
label_B473:;
    /* $B473: 8D */ nes_cpu_instruction_boundary(0xB473, 4); nes_write(0x4004, g_cpu.A);
label_B476:;
    /* $B476: 8D */ nes_cpu_instruction_boundary(0xB476, 4); nes_write(0x400C, g_cpu.A);
label_B479:;
    /* $B479: A9 */ nes_cpu_instruction_boundary(0xB479, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B47B:;
    /* $B47B: 8D */ nes_cpu_instruction_boundary(0xB47B, 4); nes_write(0x4008, g_cpu.A);
label_B47E:;
    /* $B47E: 8D */ nes_cpu_instruction_boundary(0xB47E, 4); nes_write(0x4011, g_cpu.A);
label_B481:;
    /* $B481: 60 */ nes_cpu_instruction_boundary(0xB481, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B43E_b5(void) { /* ClearSpecialAddresses */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B43E_b5");
#endif
label_B43E:; /* ClearSpecialAddresses */
    /* $B43E: A9 */ nes_cpu_instruction_boundary(0xB43E, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B440:;
    /* $B440: 8D */ nes_cpu_instruction_boundary(0xB440, 4); nes_write(0x062D, g_cpu.A);
label_B443:;
    /* $B443: 8D */ nes_cpu_instruction_boundary(0xB443, 4); nes_write(0x0602, g_cpu.A);
label_B446:;
    /* $B446: 8D */ nes_cpu_instruction_boundary(0xB446, 4); nes_write(0x065D, g_cpu.A);
label_B449:;
    /* $B449: 8D */ nes_cpu_instruction_boundary(0xB449, 4); nes_write(0x062C, g_cpu.A);
label_B44C:;
    /* $B44C: 60 */ nes_cpu_instruction_boundary(0xB44C, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8036_b5(void) { /* CommonJump_EnemyGetDeltaY_UsingAcceleration */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8036_b5");
#endif
label_8036:; /* CommonJump_EnemyGetDeltaY_UsingAcceleration */
    /* $8036: 4C */ nes_cpu_instruction_boundary(0x8036, 3); nes_cpu_instruction_boundary(0x833F, 2); func_833F_b5(); return;
}

void func_8039_b5(void) { /* CommonJump_EnemyGetDeltaX_UsingAcceleration */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8039_b5");
#endif
label_8039:; /* CommonJump_EnemyGetDeltaX_UsingAcceleration */
    /* $8039: 4C */ nes_cpu_instruction_boundary(0x8039, 3); nes_cpu_instruction_boundary(0x8395, 2); func_8395_b5(); return;
}

void func_9AE1_b5(void) { /* StoreEnemyPositionToTemp__BANK5 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9AE1_b5");
#endif
label_9AE1:; /* StoreEnemyPositionToTemp__BANK5 */
    /* $9AE1: BD */ nes_cpu_instruction_boundary(0x9AE1, 4); g_cpu.A = nes_read((0x0400 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9AE4:;
    /* $9AE4: 85 */ nes_cpu_instruction_boundary(0x9AE4, 3); nes_write(0x08, g_cpu.A);
label_9AE6:;
    /* $9AE6: BD */ nes_cpu_instruction_boundary(0x9AE6, 4); g_cpu.A = nes_read((0x0401 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9AE9:;
    /* $9AE9: 85 */ nes_cpu_instruction_boundary(0x9AE9, 3); nes_write(0x09, g_cpu.A);
label_9AEB:;
    /* $9AEB: BD */ nes_cpu_instruction_boundary(0x9AEB, 4); g_cpu.A = nes_read((0x6AFB + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9AEE:;
    /* $9AEE: 85 */ nes_cpu_instruction_boundary(0x9AEE, 3); nes_write(0x0B, g_cpu.A);
label_9AF0:;
    /* $9AF0: 60 */ nes_cpu_instruction_boundary(0x9AF0, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8027_b5(void) { /* CommonJump_ApplySpeedToPosition */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8027_b5");
#endif
label_8027:; /* CommonJump_ApplySpeedToPosition */
    /* $8027: 4C */ nes_cpu_instruction_boundary(0x8027, 3); nes_cpu_instruction_boundary(0xFD8F, 2); func_FD8F(); return;
}

void func_9AF1_b5(void) { /* LoadEnemyPositionFromTemp__BANK5 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9AF1_b5");
#endif
label_9AF1:; /* LoadEnemyPositionFromTemp__BANK5 */
    /* $9AF1: A5 */ nes_cpu_instruction_boundary(0x9AF1, 3); g_cpu.A = nes_read(0x0B); FLAG_NZ(g_cpu.A);
label_9AF3:;
    /* $9AF3: 29 */ nes_cpu_instruction_boundary(0x9AF3, 2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_9AF5:;
    /* $9AF5: 9D */ nes_cpu_instruction_boundary(0x9AF5, 5); nes_write((0x6AFB + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9AF8:;
    /* $9AF8: A5 */ nes_cpu_instruction_boundary(0x9AF8, 3); g_cpu.A = nes_read(0x08); FLAG_NZ(g_cpu.A);
label_9AFA:;
    /* $9AFA: 9D */ nes_cpu_instruction_boundary(0x9AFA, 5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9AFD:;
    /* $9AFD: A5 */ nes_cpu_instruction_boundary(0x9AFD, 3); g_cpu.A = nes_read(0x09); FLAG_NZ(g_cpu.A);
label_9AFF:;
    /* $9AFF: 9D */ nes_cpu_instruction_boundary(0x9AFF, 5); nes_write((0x0401 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9B02:;
    /* $9B02: 60 */ nes_cpu_instruction_boundary(0x9B02, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8003_b5(void) { /* CommonJump_UpdateEnemyCommon_noMove */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8003_b5");
#endif
label_8003:; /* CommonJump_UpdateEnemyCommon_noMove */
    /* $8003: 4C */ nes_cpu_instruction_boundary(0x8003, 3); nes_cpu_instruction_boundary(0xF438, 2); func_F438(); return;
}

void func_8058_b5(void) { /* EnemyMove */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8058_b5");
#endif
label_8058:; /* EnemyMove */
    /* $8058: A6 */ nes_cpu_instruction_boundary(0x8058, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_805A:;
    /* $805A: BD */ nes_cpu_instruction_boundary(0x805A, 4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_805D:;
    /* $805D: 0A */ nes_cpu_instruction_boundary(0x805D, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_805E:;
    /* $805E: 30 */ nes_cpu_instruction_boundary(0x805E, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_80AF; }
label_8060:;
    /* $8060: BD */ nes_cpu_instruction_boundary(0x8060, 4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8063:;
    /* $8063: C9 */ nes_cpu_instruction_boundary(0x8063, 2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_8065:;
    /* $8065: D0 */ nes_cpu_instruction_boundary(0x8065, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_80AF; }
label_8067:;
    /* $8067: 20 */ nes_cpu_instruction_boundary(0x8067, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x69; g_cpu.S--; func_8244_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8067, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_806A:;
    /* $806A: A5 */ nes_cpu_instruction_boundary(0x806A, 3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_806C:;
    /* $806C: 10 */ nes_cpu_instruction_boundary(0x806C, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_807D; }
label_806E:;
    /* $806E: 20 */ nes_cpu_instruction_boundary(0x806E, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x70; g_cpu.S--; func_C3D4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x806E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8071:;
    /* $8071: 85 */ nes_cpu_instruction_boundary(0x8071, 3); nes_write(0x66, g_cpu.A);
label_8073:; /* EnemyMove_loop_Up */
    /* $8073: 20 */ nes_cpu_instruction_boundary(0x8073, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x75; g_cpu.S--; func_83F5_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8073, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8076:;
    /* $8076: 20 */ nes_cpu_instruction_boundary(0x8076, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x78; g_cpu.S--; func_80B8_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8076, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8079:;
    /* $8079: C6 */ nes_cpu_instruction_boundary(0x8079, 5); { uint16_t a=0x66; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_807B:;
    /* $807B: D0 */ nes_cpu_instruction_boundary(0x807B, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0x8073, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8073;
    }
label_807D:; /* EnemyMove_endIf_Up */
    /* $807D: F0 */ nes_cpu_instruction_boundary(0x807D, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_808B; }
label_807F:;
    /* $807F: 85 */ nes_cpu_instruction_boundary(0x807F, 3); nes_write(0x66, g_cpu.A);
label_8081:; /* EnemyMove_loop_Down */
    /* $8081: 20 */ nes_cpu_instruction_boundary(0x8081, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x83; g_cpu.S--; func_844B_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8081, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8084:;
    /* $8084: 20 */ nes_cpu_instruction_boundary(0x8084, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x86; g_cpu.S--; func_80FB_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8084, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8087:;
    /* $8087: C6 */ nes_cpu_instruction_boundary(0x8087, 5); { uint16_t a=0x66; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8089:;
    /* $8089: D0 */ nes_cpu_instruction_boundary(0x8089, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0x8081, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8081;
    }
label_808B:; /* EnemyMove_endIf_Down */
    /* $808B: 20 */ nes_cpu_instruction_boundary(0x808B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x8D; g_cpu.S--; func_8318_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x808B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_808E:;
    /* $808E: A5 */ nes_cpu_instruction_boundary(0x808E, 3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_8090:;
    /* $8090: 10 */ nes_cpu_instruction_boundary(0x8090, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_80A1; }
label_8092:;
    /* $8092: 20 */ nes_cpu_instruction_boundary(0x8092, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x94; g_cpu.S--; func_C3D4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8092, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8095:;
    /* $8095: 85 */ nes_cpu_instruction_boundary(0x8095, 3); nes_write(0x66, g_cpu.A);
label_8097:; /* EnemyMove_loop_Left */
    /* $8097: 20 */ nes_cpu_instruction_boundary(0x8097, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; func_84A7_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8097, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_809A:;
    /* $809A: 20 */ nes_cpu_instruction_boundary(0x809A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x9C; g_cpu.S--; func_816E_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x809A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_809D:;
    /* $809D: C6 */ nes_cpu_instruction_boundary(0x809D, 5); { uint16_t a=0x66; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_809F:;
    /* $809F: D0 */ nes_cpu_instruction_boundary(0x809F, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0x8097, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8097;
    }
label_80A1:; /* EnemyMove_endIf_Left */
    /* $80A1: F0 */ nes_cpu_instruction_boundary(0x80A1, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_80AF; }
label_80A3:;
    /* $80A3: 85 */ nes_cpu_instruction_boundary(0x80A3, 3); nes_write(0x66, g_cpu.A);
label_80A5:; /* EnemyMove_loop_Right */
    /* $80A5: 20 */ nes_cpu_instruction_boundary(0x80A5, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA7; g_cpu.S--; func_84FE_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x80A5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_80A8:;
    /* $80A8: 20 */ nes_cpu_instruction_boundary(0x80A8, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAA; g_cpu.S--; func_8134_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x80A8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_80AB:;
    /* $80AB: C6 */ nes_cpu_instruction_boundary(0x80AB, 5); { uint16_t a=0x66; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_80AD:;
    /* $80AD: D0 */ nes_cpu_instruction_boundary(0x80AD, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0x80A5, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_80A5;
    }
label_80AF:; /* EnemyMove_RTS */
    /* $80AF: 60 */ nes_cpu_instruction_boundary(0x80AF, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B3BF_b5(void) { /* PauseSFX */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3BF_b5");
#endif
label_B3BF:; /* PauseSFX */
    /* $B3BF: EE */ nes_cpu_instruction_boundary(0xB3BF, 6); { uint16_t a=0x0602; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B3C2:;
    /* $B3C2: 20 */ nes_cpu_instruction_boundary(0xB3C2, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC4; g_cpu.S--; func_B46E_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3C2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3C5:;
    /* $B3C5: 8D */ nes_cpu_instruction_boundary(0xB3C5, 4); nes_write(0x0603, g_cpu.A);
label_B3C8:;
    /* $B3C8: 60 */ nes_cpu_instruction_boundary(0xB3C8, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B398_b5(void) { /* LoadSFXData */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B398_b5");
#endif
label_B398:; /* LoadSFXData */
    /* $B398: A9 */ nes_cpu_instruction_boundary(0xB398, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B39A:;
    /* $B39A: F0 */ nes_cpu_instruction_boundary(0xB39A, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B3A6; }
label_B39C:; /* LoadSFXData_Tri */
    /* $B39C: A9 */ nes_cpu_instruction_boundary(0xB39C, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_B39E:;
    /* $B39E: D0 */ nes_cpu_instruction_boundary(0xB39E, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B3A6; }
label_B3A0:; /* LoadSFXData_Noise */
    /* $B3A0: A9 */ nes_cpu_instruction_boundary(0xB3A0, 2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_B3A2:;
    /* $B3A2: D0 */ nes_cpu_instruction_boundary(0xB3A2, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B3A6; }
label_B3A4:; /* LoadSFXData_SQ2 */
    /* $B3A4: A9 */ nes_cpu_instruction_boundary(0xB3A4, 2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_B3A6:; /* LoadSFXData_Common */
    /* $B3A6: 85 */ nes_cpu_instruction_boundary(0xB3A6, 3); nes_write(0xE0, g_cpu.A);
label_B3A8:;
    /* $B3A8: A9 */ nes_cpu_instruction_boundary(0xB3A8, 2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_B3AA:;
    /* $B3AA: 85 */ nes_cpu_instruction_boundary(0xB3AA, 3); nes_write(0xE1, g_cpu.A);
label_B3AC:;
    /* $B3AC: 84 */ nes_cpu_instruction_boundary(0xB3AC, 3); nes_write(0xE2, g_cpu.Y);
label_B3AE:;
    /* $B3AE: A9 */ nes_cpu_instruction_boundary(0xB3AE, 2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B3B0:;
    /* $B3B0: 85 */ nes_cpu_instruction_boundary(0xB3B0, 3); nes_write(0xE3, g_cpu.A);
label_B3B2:;
    /* $B3B2: A0 */ nes_cpu_instruction_boundary(0xB3B2, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_B3B4:; /* LoadSFXData_loop_LoadSFXRegisters */
    /* $B3B4: B1 */ nes_cpu_instruction_boundary(0xB3B4, 5); g_cpu.A = nes_read((nes_read16zp(0xE2) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B3B6:;
    /* $B3B6: 91 */ nes_cpu_instruction_boundary(0xB3B6, 6); nes_write((nes_read16zp(0xE0) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B3B8:;
    /* $B3B8: C8 */ nes_cpu_instruction_boundary(0xB3B8, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B3B9:;
    /* $B3B9: 98 */ nes_cpu_instruction_boundary(0xB3B9, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_B3BA:;
    /* $B3BA: C9 */ nes_cpu_instruction_boundary(0xB3BA, 2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_B3BC:;
    /* $B3BC: D0 */ nes_cpu_instruction_boundary(0xB3BC, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xB3B4, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B3B4;
    }
label_B3BE:;
    /* $B3BE: 60 */ nes_cpu_instruction_boundary(0xB3BE, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B4ED_b5_body(int _entry) { /* GetSoundRoutine */
    switch (_entry) {
        case 1: goto label_B51A;
        case 2: goto label_B503;
        case 3: goto label_B51E;
    }
label_B4ED:; /* GetSoundRoutine */
    /* $B4ED: 8D */ nes_cpu_instruction_boundary(0xB4ED, 4); nes_write(0x064D, g_cpu.A);
label_B4F0:;
    /* $B4F0: 86 */ nes_cpu_instruction_boundary(0xB4F0, 3); nes_write(0xE4, g_cpu.X);
label_B4F2:;
    /* $B4F2: A0 */ nes_cpu_instruction_boundary(0xB4F2, 2); g_cpu.Y = 0xB2; FLAG_NZ(g_cpu.Y);
label_B4F4:;
    /* $B4F4: 84 */ nes_cpu_instruction_boundary(0xB4F4, 3); nes_write(0xE5, g_cpu.Y);
label_B4F6:;
    /* $B4F6: A0 */ nes_cpu_instruction_boundary(0xB4F6, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_B4F8:; /* GetSoundRoutine_loop_A */
    /* $B4F8: B1 */ nes_cpu_instruction_boundary(0xB4F8, 5); g_cpu.A = nes_read((nes_read16zp(0xE4) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B4FA:;
    /* $B4FA: 99 */ nes_cpu_instruction_boundary(0xB4FA, 5); nes_write((0x00E0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B4FD:;
    /* $B4FD: C8 */ nes_cpu_instruction_boundary(0xB4FD, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B4FE:;
    /* $B4FE: 98 */ nes_cpu_instruction_boundary(0xB4FE, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_B4FF:;
    /* $B4FF: C9 */ nes_cpu_instruction_boundary(0xB4FF, 2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_B501:;
    /* $B501: D0 */ nes_cpu_instruction_boundary(0xB501, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xB4F8, 2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B4F8;
    }
label_B503:;
    /* $B503: B1 */ nes_cpu_instruction_boundary(0xB503, 5); g_cpu.A = nes_read((nes_read16zp(0xE4) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B505:;
    /* $B505: 8D */ nes_cpu_instruction_boundary(0xB505, 4); nes_write(0x065C, g_cpu.A);
label_B508:;
    /* $B508: A0 */ nes_cpu_instruction_boundary(0xB508, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_B50A:;
    /* $B50A: AD */ nes_cpu_instruction_boundary(0xB50A, 4); g_cpu.A = nes_read(0x064D); FLAG_NZ(g_cpu.A);
label_B50D:;
    /* $B50D: 48 */ nes_cpu_instruction_boundary(0xB50D, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B50E:; /* GetSoundRoutine_loop_B */
    /* $B50E: 0E */ nes_cpu_instruction_boundary(0xB50E, 6); { uint16_t a=0x064D; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B511:;
    /* $B511: B0 */ nes_cpu_instruction_boundary(0xB511, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B51F; }
label_B513:;
    /* $B513: C8 */ nes_cpu_instruction_boundary(0xB513, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B514:;
    /* $B514: C8 */ nes_cpu_instruction_boundary(0xB514, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B515:;
    /* $B515: 98 */ nes_cpu_instruction_boundary(0xB515, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_B516:;
    /* $B516: C9 */ nes_cpu_instruction_boundary(0xB516, 2); { int r=g_cpu.A-0x10; g_cpu.C=(g_cpu.A>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_B518:;
    /* $B518: D0 */ nes_cpu_instruction_boundary(0xB518, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xB50E, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B50E;
    }
label_B51A:; /* GetSoundRoutine_RestoreSFXFlags */
    /* $B51A: 68 */ nes_cpu_instruction_boundary(0xB51A, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_B51B:;
    /* $B51B: 8D */ nes_cpu_instruction_boundary(0xB51B, 4); nes_write(0x064D, g_cpu.A);
label_B51E:; /* GetSoundRoutine_RTS */
    /* $B51E: 60 */ nes_cpu_instruction_boundary(0xB51E, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B51F:; /* GetSoundRoutine_SoundFlagFound */
    /* $B51F: B1 */ nes_cpu_instruction_boundary(0xB51F, 5); g_cpu.A = nes_read((nes_read16zp(0xE0) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B521:;
    /* $B521: 85 */ nes_cpu_instruction_boundary(0xB521, 3); nes_write(0xE2, g_cpu.A);
label_B523:;
    /* $B523: C8 */ nes_cpu_instruction_boundary(0xB523, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B524:;
    /* $B524: B1 */ nes_cpu_instruction_boundary(0xB524, 5); g_cpu.A = nes_read((nes_read16zp(0xE0) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B526:;
    /* $B526: 85 */ nes_cpu_instruction_boundary(0xB526, 3); nes_write(0xE3, g_cpu.A);
label_B528:;
    /* $B528: 4C */ nes_cpu_instruction_boundary(0xB528, 3); nes_cpu_instruction_boundary(0xB51A, 2);
    goto label_B51A;
}

void func_B4ED_b5(void) { /* GetSoundRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4ED_b5");
#endif
    func_B4ED_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B51A_b5(void) { /* GetSoundRoutine_RestoreSFXFlags */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B51A_b5");
#endif
    func_B4ED_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B503_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B503_b5");
#endif
    func_B4ED_b5_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B51E_b5(void) { /* GetSoundRoutine_RTS */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B51E_b5");
#endif
    func_B4ED_b5_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BC83_b5(void) { /* FindMusicInitIndex */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC83_b5");
#endif
label_BC83:; /* FindMusicInitIndex */
    /* $BC83: A9 */ nes_cpu_instruction_boundary(0xBC83, 2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_BC85:;
    /* $BC85: 8D */ nes_cpu_instruction_boundary(0xBC85, 4); nes_write(0x065E, g_cpu.A);
label_BC88:;
    /* $BC88: AD */ nes_cpu_instruction_boundary(0xBC88, 4); g_cpu.A = nes_read(0x064D); FLAG_NZ(g_cpu.A);
label_BC8B:;
    /* $BC8B: F0 */ nes_cpu_instruction_boundary(0xBC8B, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BC93; }
label_BC8D:; /* FindMusicInitIndex_loop */
    /* $BC8D: EE */ nes_cpu_instruction_boundary(0xBC8D, 6); { uint16_t a=0x065E; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BC90:;
    /* $BC90: 0A */ nes_cpu_instruction_boundary(0xBC90, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_BC91:;
    /* $BC91: 90 */ nes_cpu_instruction_boundary(0xBC91, 2); if (!g_cpu.C) {
    nes_cpu_instruction_boundary(0xBC8D, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BC8D;
    }
label_BC93:; /* FindMusicInitIndex_RTS */
    /* $BC93: 60 */ nes_cpu_instruction_boundary(0xBC93, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BC94_b5(void) { /* MusicInitIndexAdd8 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC94_b5");
#endif
label_BC94:; /* MusicInitIndexAdd8 */
    /* $BC94: AD */ nes_cpu_instruction_boundary(0xBC94, 4); g_cpu.A = nes_read(0x065E); FLAG_NZ(g_cpu.A);
label_BC97:;
    /* $BC97: 18 */ nes_cpu_instruction_boundary(0xBC97, 2); g_cpu.C = 0;
label_BC98:;
    /* $BC98: 69 */ nes_cpu_instruction_boundary(0xBC98, 2); { uint16_t r = g_cpu.A + 0x08 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x08); g_cpu.A=r&0xFF; }
label_BC9A:;
    /* $BC9A: 8D */ nes_cpu_instruction_boundary(0xBC9A, 4); nes_write(0x065E, g_cpu.A);
label_BC9D:;
    /* $BC9D: 60 */ nes_cpu_instruction_boundary(0xBC9D, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B367_b5(void) { /* RunSoundRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B367_b5");
#endif
label_B367:; /* RunSoundRoutine */
    /* $B367: 20 */ nes_cpu_instruction_boundary(0xB367, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x69; g_cpu.S--; func_B4ED_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB367, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B36A:;
    /* $B36A: 6C */ nes_cpu_instruction_boundary(0xB36A, 5); { uint16_t _jt = nes_read16zp(0xE2); nes_cpu_instruction_boundary(_jt, 2); call_by_address_tail(_jt, -1); return; }
}

void func_833F_b5(void) { /* EnemyGetDeltaY_UsingAcceleration */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_833F_b5");
#endif
label_833F:; /* EnemyGetDeltaY_UsingAcceleration */
    /* $833F: A0 */ nes_cpu_instruction_boundary(0x833F, 2); g_cpu.Y = 0x0E; FLAG_NZ(g_cpu.Y);
label_8341:;
    /* $8341: BD */ nes_cpu_instruction_boundary(0x8341, 4); g_cpu.A = nes_read((0x6AFE + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8344:;
    /* $8344: 30 */ nes_cpu_instruction_boundary(0x8344, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_835E; }
label_8346:;
    /* $8346: 18 */ nes_cpu_instruction_boundary(0x8346, 2); g_cpu.C = 0;
label_8347:;
    /* $8347: 7D */ nes_cpu_instruction_boundary(0x8347, 4); { uint8_t m=nes_read((0x0406 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_834A:;
    /* $834A: 9D */ nes_cpu_instruction_boundary(0x834A, 5); nes_write((0x0406 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_834D:;
    /* $834D: BD */ nes_cpu_instruction_boundary(0x834D, 4); g_cpu.A = nes_read((0x0402 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8350:;
    /* $8350: 69 */ nes_cpu_instruction_boundary(0x8350, 2); { uint16_t r = g_cpu.A + 0x00 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x00); g_cpu.A=r&0xFF; }
label_8352:;
    /* $8352: 9D */ nes_cpu_instruction_boundary(0x8352, 5); nes_write((0x0402 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8355:;
    /* $8355: 10 */ nes_cpu_instruction_boundary(0x8355, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_8376; }
label_8357:; /* EnemyGetDeltaY_UsingAcceleration_if_B */
    /* $8357: 20 */ nes_cpu_instruction_boundary(0x8357, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x83; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x59; g_cpu.S--; func_C3D4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8357, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_835A:;
    /* $835A: A0 */ nes_cpu_instruction_boundary(0x835A, 2); g_cpu.Y = 0xF2; FLAG_NZ(g_cpu.Y);
label_835C:;
    /* $835C: D0 */ nes_cpu_instruction_boundary(0x835C, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8376; }
label_835E:; /* EnemyGetDeltaY_UsingAcceleration_else_A */
    /* $835E: 20 */ nes_cpu_instruction_boundary(0x835E, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x83; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x60; g_cpu.S--; func_C3D4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x835E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8361:;
    /* $8361: 38 */ nes_cpu_instruction_boundary(0x8361, 2); g_cpu.C = 1;
label_8362:;
    /* $8362: 85 */ nes_cpu_instruction_boundary(0x8362, 3); nes_write(0x00, g_cpu.A);
label_8364:;
    /* $8364: BD */ nes_cpu_instruction_boundary(0x8364, 4); g_cpu.A = nes_read((0x0406 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8367:;
    /* $8367: E5 */ nes_cpu_instruction_boundary(0x8367, 3); { uint8_t m=nes_read(0x00); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8369:;
    /* $8369: 9D */ nes_cpu_instruction_boundary(0x8369, 5); nes_write((0x0406 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_836C:;
    /* $836C: BD */ nes_cpu_instruction_boundary(0x836C, 4); g_cpu.A = nes_read((0x0402 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_836F:;
    /* $836F: E9 */ nes_cpu_instruction_boundary(0x836F, 2); { uint8_t m=0x00; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8371:;
    /* $8371: 9D */ nes_cpu_instruction_boundary(0x8371, 5); nes_write((0x0402 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8374:;
    /* $8374: 30 */ nes_cpu_instruction_boundary(0x8374, 2); if (g_cpu.N) {
    nes_cpu_instruction_boundary(0x8357, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8357;
    }
label_8376:; /* EnemyGetDeltaY_UsingAcceleration_endIf_A */
    /* $8376: C9 */ nes_cpu_instruction_boundary(0x8376, 2); { int r=g_cpu.A-0x0E; g_cpu.C=(g_cpu.A>=0x0E)?1:0; FLAG_NZ(r&0xFF); }
label_8378:;
    /* $8378: 90 */ nes_cpu_instruction_boundary(0x8378, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8383; }
label_837A:;
    /* $837A: A9 */ nes_cpu_instruction_boundary(0x837A, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_837C:;
    /* $837C: 9D */ nes_cpu_instruction_boundary(0x837C, 5); nes_write((0x0406 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_837F:;
    /* $837F: 98 */ nes_cpu_instruction_boundary(0x837F, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8380:;
    /* $8380: 9D */ nes_cpu_instruction_boundary(0x8380, 5); nes_write((0x0402 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8383:; /* EnemyGetDeltaY_UsingAcceleration_endIf_C */
    /* $8383: BD */ nes_cpu_instruction_boundary(0x8383, 4); g_cpu.A = nes_read((0x6AFC + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8386:;
    /* $8386: 18 */ nes_cpu_instruction_boundary(0x8386, 2); g_cpu.C = 0;
label_8387:;
    /* $8387: 7D */ nes_cpu_instruction_boundary(0x8387, 4); { uint8_t m=nes_read((0x0406 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_838A:;
    /* $838A: 9D */ nes_cpu_instruction_boundary(0x838A, 5); nes_write((0x6AFC + g_cpu.X) & 0xFFFF, g_cpu.A);
label_838D:;
    /* $838D: A9 */ nes_cpu_instruction_boundary(0x838D, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_838F:;
    /* $838F: 7D */ nes_cpu_instruction_boundary(0x838F, 4); { uint8_t m=nes_read((0x0402 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8392:;
    /* $8392: 85 */ nes_cpu_instruction_boundary(0x8392, 3); nes_write(0x00, g_cpu.A);
label_8394:;
    /* $8394: 60 */ nes_cpu_instruction_boundary(0x8394, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8395_b5(void) { /* EnemyGetDeltaX_UsingAcceleration */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8395_b5");
#endif
label_8395:; /* EnemyGetDeltaX_UsingAcceleration */
    /* $8395: A9 */ nes_cpu_instruction_boundary(0x8395, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8397:;
    /* $8397: 85 */ nes_cpu_instruction_boundary(0x8397, 3); nes_write(0x00, g_cpu.A);
label_8399:;
    /* $8399: 85 */ nes_cpu_instruction_boundary(0x8399, 3); nes_write(0x02, g_cpu.A);
label_839B:;
    /* $839B: A9 */ nes_cpu_instruction_boundary(0x839B, 2); g_cpu.A = 0x0E; FLAG_NZ(g_cpu.A);
label_839D:;
    /* $839D: 85 */ nes_cpu_instruction_boundary(0x839D, 3); nes_write(0x01, g_cpu.A);
label_839F:;
    /* $839F: 85 */ nes_cpu_instruction_boundary(0x839F, 3); nes_write(0x03, g_cpu.A);
label_83A1:;
    /* $83A1: BD */ nes_cpu_instruction_boundary(0x83A1, 4); g_cpu.A = nes_read((0x0407 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_83A4:;
    /* $83A4: 18 */ nes_cpu_instruction_boundary(0x83A4, 2); g_cpu.C = 0;
label_83A5:;
    /* $83A5: 7D */ nes_cpu_instruction_boundary(0x83A5, 4); { uint8_t m=nes_read((0x6AFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83A8:;
    /* $83A8: 9D */ nes_cpu_instruction_boundary(0x83A8, 5); nes_write((0x0407 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_83AB:;
    /* $83AB: 85 */ nes_cpu_instruction_boundary(0x83AB, 3); nes_write(0x04, g_cpu.A);
label_83AD:;
    /* $83AD: A9 */ nes_cpu_instruction_boundary(0x83AD, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_83AF:;
    /* $83AF: BC */ nes_cpu_instruction_boundary(0x83AF, 4); g_cpu.Y = nes_read((0x6AFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_83B2:;
    /* $83B2: 10 */ nes_cpu_instruction_boundary(0x83B2, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_83B6; }
label_83B4:;
    /* $83B4: A9 */ nes_cpu_instruction_boundary(0x83B4, 2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_83B6:; /* EnemyGetDeltaX_UsingAcceleration_endIf_A */
    /* $83B6: 7D */ nes_cpu_instruction_boundary(0x83B6, 4); { uint8_t m=nes_read((0x0403 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83B9:;
    /* $83B9: 9D */ nes_cpu_instruction_boundary(0x83B9, 5); nes_write((0x0403 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_83BC:;
    /* $83BC: A8 */ nes_cpu_instruction_boundary(0x83BC, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_83BD:;
    /* $83BD: 10 */ nes_cpu_instruction_boundary(0x83BD, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_83D0; }
label_83BF:;
    /* $83BF: A9 */ nes_cpu_instruction_boundary(0x83BF, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_83C1:;
    /* $83C1: 38 */ nes_cpu_instruction_boundary(0x83C1, 2); g_cpu.C = 1;
label_83C2:;
    /* $83C2: FD */ nes_cpu_instruction_boundary(0x83C2, 4); { uint8_t m=nes_read((0x0407 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83C5:;
    /* $83C5: 85 */ nes_cpu_instruction_boundary(0x83C5, 3); nes_write(0x04, g_cpu.A);
label_83C7:;
    /* $83C7: A9 */ nes_cpu_instruction_boundary(0x83C7, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_83C9:;
    /* $83C9: FD */ nes_cpu_instruction_boundary(0x83C9, 4); { uint8_t m=nes_read((0x0403 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83CC:;
    /* $83CC: A8 */ nes_cpu_instruction_boundary(0x83CC, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_83CD:;
    /* $83CD: 20 */ nes_cpu_instruction_boundary(0x83CD, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x83; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCF; g_cpu.S--; func_E449();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x83CD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_83D0:; /* EnemyGetDeltaX_UsingAcceleration_endIf_B */
    /* $83D0: A5 */ nes_cpu_instruction_boundary(0x83D0, 3); g_cpu.A = nes_read(0x04); FLAG_NZ(g_cpu.A);
label_83D2:;
    /* $83D2: C5 */ nes_cpu_instruction_boundary(0x83D2, 3); { uint8_t m=nes_read(0x02); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_83D4:;
    /* $83D4: 98 */ nes_cpu_instruction_boundary(0x83D4, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_83D5:;
    /* $83D5: E5 */ nes_cpu_instruction_boundary(0x83D5, 3); { uint8_t m=nes_read(0x03); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83D7:;
    /* $83D7: 90 */ nes_cpu_instruction_boundary(0x83D7, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_83E3; }
label_83D9:;
    /* $83D9: A5 */ nes_cpu_instruction_boundary(0x83D9, 3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_83DB:;
    /* $83DB: 9D */ nes_cpu_instruction_boundary(0x83DB, 5); nes_write((0x0407 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_83DE:;
    /* $83DE: A5 */ nes_cpu_instruction_boundary(0x83DE, 3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_83E0:;
    /* $83E0: 9D */ nes_cpu_instruction_boundary(0x83E0, 5); nes_write((0x0403 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_83E3:; /* EnemyGetDeltaX_UsingAcceleration_endIf_C */
    /* $83E3: BD */ nes_cpu_instruction_boundary(0x83E3, 4); g_cpu.A = nes_read((0x6AFD + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_83E6:;
    /* $83E6: 18 */ nes_cpu_instruction_boundary(0x83E6, 2); g_cpu.C = 0;
label_83E7:;
    /* $83E7: 7D */ nes_cpu_instruction_boundary(0x83E7, 4); { uint8_t m=nes_read((0x0407 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83EA:;
    /* $83EA: 9D */ nes_cpu_instruction_boundary(0x83EA, 5); nes_write((0x6AFD + g_cpu.X) & 0xFFFF, g_cpu.A);
label_83ED:;
    /* $83ED: A9 */ nes_cpu_instruction_boundary(0x83ED, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_83EF:;
    /* $83EF: 7D */ nes_cpu_instruction_boundary(0x83EF, 4); { uint8_t m=nes_read((0x0403 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83F2:;
    /* $83F2: 85 */ nes_cpu_instruction_boundary(0x83F2, 3); nes_write(0x00, g_cpu.A);
label_83F4:;
    /* $83F4: 60 */ nes_cpu_instruction_boundary(0x83F4, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_95AB_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95AB_b5");
#endif
label_95AB:;
    /* $95AB: 60 */ nes_cpu_instruction_boundary(0x95AB, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_95C3_b5(void) { /* AreaRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95C3_b5");
#endif
label_95C3:; /* AreaRoutine */
    /* $95C3: 4C */ nes_cpu_instruction_boundary(0x95C3, 3); nes_cpu_instruction_boundary(0x9B48, 2); func_9B48_b5(); return;
}

void func_8B13_b5_body(int _entry) { /* SamusEnterDoor */
    switch (_entry) {
        case 1: goto label_8B74;
        case 2: goto label_8B53;
    }
label_8B13:; /* SamusEnterDoor */
    /* $8B13: A5 */ nes_cpu_instruction_boundary(0x8B13, 3); g_cpu.A = nes_read(0x56); FLAG_NZ(g_cpu.A);
label_8B15:;
    /* $8B15: D0 */ nes_cpu_instruction_boundary(0x8B15, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8B6C; }
label_8B17:;
    /* $8B17: A4 */ nes_cpu_instruction_boundary(0x8B17, 3); g_cpu.Y = nes_read(0x58); FLAG_NZ(g_cpu.Y);
label_8B19:;
    /* $8B19: F0 */ nes_cpu_instruction_boundary(0x8B19, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8B6C; }
label_8B1B:;
    /* $8B1B: 85 */ nes_cpu_instruction_boundary(0x8B1B, 3); nes_write(0x95, g_cpu.A);
label_8B1D:;
    /* $8B1D: 85 */ nes_cpu_instruction_boundary(0x8B1D, 3); nes_write(0x96, g_cpu.A);
label_8B1F:;
    /* $8B1F: A5 */ nes_cpu_instruction_boundary(0x8B1F, 3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_8B21:;
    /* $8B21: 29 */ nes_cpu_instruction_boundary(0x8B21, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_8B23:;
    /* $8B23: 85 */ nes_cpu_instruction_boundary(0x8B23, 3); nes_write(0x93, g_cpu.A);
label_8B25:;
    /* $8B25: 0A */ nes_cpu_instruction_boundary(0x8B25, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8B26:;
    /* $8B26: 09 */ nes_cpu_instruction_boundary(0x8B26, 2); g_cpu.A |= 0x40; FLAG_NZ(g_cpu.A);
label_8B28:;
    /* $8B28: 85 */ nes_cpu_instruction_boundary(0x8B28, 3); nes_write(0x94, g_cpu.A);
label_8B2A:;
    /* $8B2A: A5 */ nes_cpu_instruction_boundary(0x8B2A, 3); g_cpu.A = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_8B2C:;
    /* $8B2C: 49 */ nes_cpu_instruction_boundary(0x8B2C, 2); g_cpu.A ^= 0x01; FLAG_NZ(g_cpu.A);
label_8B2E:;
    /* $8B2E: 29 */ nes_cpu_instruction_boundary(0x8B2E, 2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_8B30:;
    /* $8B30: A8 */ nes_cpu_instruction_boundary(0x8B30, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8B31:;
    /* $8B31: 4A */ nes_cpu_instruction_boundary(0x8B31, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8B32:;
    /* $8B32: 99 */ nes_cpu_instruction_boundary(0x8B32, 5); nes_write((0x006C + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8B35:;
    /* $8B35: A5 */ nes_cpu_instruction_boundary(0x8B35, 3); g_cpu.A = nes_read(0x49); FLAG_NZ(g_cpu.A);
label_8B37:;
    /* $8B37: 29 */ nes_cpu_instruction_boundary(0x8B37, 2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_8B39:;
    /* $8B39: D0 */ nes_cpu_instruction_boundary(0x8B39, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8B4B; }
label_8B3B:;
    /* $8B3B: A2 */ nes_cpu_instruction_boundary(0x8B3B, 2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_8B3D:;
    /* $8B3D: A5 */ nes_cpu_instruction_boundary(0x8B3D, 3); g_cpu.A = nes_read(0xFC); FLAG_NZ(g_cpu.A);
label_8B3F:;
    /* $8B3F: F0 */ nes_cpu_instruction_boundary(0x8B3F, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8B6D; }
label_8B41:;
    /* $8B41: A5 */ nes_cpu_instruction_boundary(0x8B41, 3); g_cpu.A = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_8B43:;
    /* $8B43: 4D */ nes_cpu_instruction_boundary(0x8B43, 4); g_cpu.A ^= nes_read(0x030C); FLAG_NZ(g_cpu.A);
label_8B46:;
    /* $8B46: 4A */ nes_cpu_instruction_boundary(0x8B46, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8B47:;
    /* $8B47: 90 */ nes_cpu_instruction_boundary(0x8B47, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8B53; }
label_8B49:;
    /* $8B49: B0 */ nes_cpu_instruction_boundary(0x8B49, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8B52; }
label_8B4B:; /* SamusEnterDoor_else_A */
    /* $8B4B: A2 */ nes_cpu_instruction_boundary(0x8B4B, 2); g_cpu.X = 0x02; FLAG_NZ(g_cpu.X);
label_8B4D:;
    /* $8B4D: AD */ nes_cpu_instruction_boundary(0x8B4D, 4); g_cpu.A = nes_read(0x030E); FLAG_NZ(g_cpu.A);
label_8B50:;
    /* $8B50: 10 */ nes_cpu_instruction_boundary(0x8B50, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_8B53; }
label_8B52:; /* SamusEnterDoor_endIf_A_dex */
    /* $8B52: CA */ nes_cpu_instruction_boundary(0x8B52, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_8B53:; /* SamusEnterDoor_endIf_A_noDex */
    /* $8B53: 8A */ nes_cpu_instruction_boundary(0x8B53, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8B54:;
    /* $8B54: 85 */ nes_cpu_instruction_boundary(0x8B54, 3); nes_write(0x57, g_cpu.A);
label_8B56:;
    /* $8B56: 20 */ nes_cpu_instruction_boundary(0x8B56, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x58; g_cpu.S--; func_8B74_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8B56, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8B59:;
    /* $8B59: A9 */ nes_cpu_instruction_boundary(0x8B59, 2); g_cpu.A = 0x12; FLAG_NZ(g_cpu.A);
label_8B5B:;
    /* $8B5B: 85 */ nes_cpu_instruction_boundary(0x8B5B, 3); nes_write(0x59, g_cpu.A);
label_8B5D:;
    /* $8B5D: A5 */ nes_cpu_instruction_boundary(0x8B5D, 3); g_cpu.A = nes_read(0x58); FLAG_NZ(g_cpu.A);
label_8B5F:;
    /* $8B5F: 20 */ nes_cpu_instruction_boundary(0x8B5F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x61; g_cpu.S--; func_C2C5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8B5F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8B62:;
    /* $8B62: 0D */ nes_cpu_instruction_boundary(0x8B62, 4); g_cpu.A |= nes_read(0x0300); FLAG_NZ(g_cpu.A);
label_8B65:;
    /* $8B65: 85 */ nes_cpu_instruction_boundary(0x8B65, 3); nes_write(0x58, g_cpu.A);
label_8B67:;
    /* $8B67: A9 */ nes_cpu_instruction_boundary(0x8B67, 2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_8B69:;
    /* $8B69: 8D */ nes_cpu_instruction_boundary(0x8B69, 4); nes_write(0x0300, g_cpu.A);
label_8B6C:; /* SetDoorEntryInfo_RTS */
    /* $8B6C: 60 */ nes_cpu_instruction_boundary(0x8B6C, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8B6D:;
    /* $8B6D: 20 */ nes_cpu_instruction_boundary(0x8B6D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6F; g_cpu.S--; func_8B53_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8B6D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8B70:;
    /* $8B70: 20 */ nes_cpu_instruction_boundary(0x8B70, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x72; g_cpu.S--; func_E21B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8B70, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8B73:;
    /* $8B73: 8A */ nes_cpu_instruction_boundary(0x8B73, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8B74:; /* SamusInDoor */
    /* $8B74: 09 */ nes_cpu_instruction_boundary(0x8B74, 2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_8B76:;
    /* $8B76: 85 */ nes_cpu_instruction_boundary(0x8B76, 3); nes_write(0x56, g_cpu.A);
label_8B78:;
    /* $8B78: 60 */ nes_cpu_instruction_boundary(0x8B78, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8B13_b5(void) { /* SamusEnterDoor */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8B13_b5");
#endif
    func_8B13_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8B74_b5(void) { /* SamusInDoor */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8B74_b5");
#endif
    func_8B13_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8B53_b5(void) { /* SamusEnterDoor_endIf_A_noDex */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8B53_b5");
#endif
    func_8B13_b5_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8B79_b5(void) { /* UpdateAllDoors */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8B79_b5");
#endif
label_8B79:; /* UpdateAllDoors */
    /* $8B79: A2 */ nes_cpu_instruction_boundary(0x8B79, 2); g_cpu.X = 0xB0; FLAG_NZ(g_cpu.X);
label_8B7B:; /* UpdateAllDoors_loop */
    /* $8B7B: 20 */ nes_cpu_instruction_boundary(0x8B7B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x7D; g_cpu.S--; func_8B87_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8B7B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8B7E:;
    /* $8B7E: A5 */ nes_cpu_instruction_boundary(0x8B7E, 3); g_cpu.A = nes_read(0x4B); FLAG_NZ(g_cpu.A);
label_8B80:;
    /* $8B80: 38 */ nes_cpu_instruction_boundary(0x8B80, 2); g_cpu.C = 1;
label_8B81:;
    /* $8B81: E9 */ nes_cpu_instruction_boundary(0x8B81, 2); { uint8_t m=0x10; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8B83:;
    /* $8B83: AA */ nes_cpu_instruction_boundary(0x8B83, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8B84:;
    /* $8B84: 30 */ nes_cpu_instruction_boundary(0x8B84, 2); if (g_cpu.N) {
    nes_cpu_instruction_boundary(0x8B7B, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8B7B;
    }
label_8B86:;
    /* $8B86: 60 */ nes_cpu_instruction_boundary(0x8B86, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8244_b5_body(int _entry) { /* EnemyGetDeltaY */
    switch (_entry) {
        case 1: goto label_8296;
        case 2: goto label_82C3;
        case 3: goto label_825B;
        case 4: goto label_82F4;
        case 5: goto label_8258;
        case 6: goto label_82A2;
    }
label_8244:; /* EnemyGetDeltaY */
    /* $8244: 20 */ nes_cpu_instruction_boundary(0x8244, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x46; g_cpu.S--; func_80B0_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8244, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8247:;
    /* $8247: 10 */ nes_cpu_instruction_boundary(0x8247, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_824C; }
label_8249:;
    /* $8249: 4C */ nes_cpu_instruction_boundary(0x8249, 3); nes_cpu_instruction_boundary(0x833F, 2); func_833F_b5(); return;
label_824C:; /* EnemyGetDeltaY_endIf_A */
    /* $824C: BD */ nes_cpu_instruction_boundary(0x824C, 4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_824F:;
    /* $824F: 29 */ nes_cpu_instruction_boundary(0x824F, 2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_8251:;
    /* $8251: 49 */ nes_cpu_instruction_boundary(0x8251, 2); g_cpu.A ^= 0x20; FLAG_NZ(g_cpu.A);
label_8253:;
    /* $8253: F0 */ nes_cpu_instruction_boundary(0x8253, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_82A2; }
label_8255:;
    /* $8255: 20 */ nes_cpu_instruction_boundary(0x8255, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x57; g_cpu.S--; func_822B_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8255, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8258:; /* EnemyGetDeltaY_ReadByteAtIndex */
    /* $8258: BC */ nes_cpu_instruction_boundary(0x8258, 4); g_cpu.Y = nes_read((0x0406 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_825B:; /* EnemyGetDeltaY_ReadByte */
    /* $825B: B1 */ nes_cpu_instruction_boundary(0x825B, 5); g_cpu.A = nes_read((nes_read16zp(0x81) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_825D:;
    /* $825D: C9 */ nes_cpu_instruction_boundary(0x825D, 2); { int r=g_cpu.A-0xF0; g_cpu.C=(g_cpu.A>=0xF0)?1:0; FLAG_NZ(r&0xFF); }
label_825F:;
    /* $825F: 90 */ nes_cpu_instruction_boundary(0x825F, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_827F; }
label_8261:;
    /* $8261: C9 */ nes_cpu_instruction_boundary(0x8261, 2); { int r=g_cpu.A-0xFA; g_cpu.C=(g_cpu.A>=0xFA)?1:0; FLAG_NZ(r&0xFF); }
label_8263:;
    /* $8263: F0 */ nes_cpu_instruction_boundary(0x8263, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_827C; }
label_8265:;
    /* $8265: C9 */ nes_cpu_instruction_boundary(0x8265, 2); { int r=g_cpu.A-0xFB; g_cpu.C=(g_cpu.A>=0xFB)?1:0; FLAG_NZ(r&0xFF); }
label_8267:;
    /* $8267: F0 */ nes_cpu_instruction_boundary(0x8267, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_82B0; }
label_8269:;
    /* $8269: C9 */ nes_cpu_instruction_boundary(0x8269, 2); { int r=g_cpu.A-0xFC; g_cpu.C=(g_cpu.A>=0xFC)?1:0; FLAG_NZ(r&0xFF); }
label_826B:;
    /* $826B: F0 */ nes_cpu_instruction_boundary(0x826B, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_82B3; }
label_826D:;
    /* $826D: C9 */ nes_cpu_instruction_boundary(0x826D, 2); { int r=g_cpu.A-0xFD; g_cpu.C=(g_cpu.A>=0xFD)?1:0; FLAG_NZ(r&0xFF); }
label_826F:;
    /* $826F: F0 */ nes_cpu_instruction_boundary(0x826F, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_82A5; }
label_8271:;
    /* $8271: C9 */ nes_cpu_instruction_boundary(0x8271, 2); { int r=g_cpu.A-0xFE; g_cpu.C=(g_cpu.A>=0xFE)?1:0; FLAG_NZ(r&0xFF); }
label_8273:;
    /* $8273: F0 */ nes_cpu_instruction_boundary(0x8273, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_82DE; }
label_8275:;
    /* $8275: A9 */ nes_cpu_instruction_boundary(0x8275, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8277:;
    /* $8277: 9D */ nes_cpu_instruction_boundary(0x8277, 5); nes_write((0x0406 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_827A:;
    /* $827A: F0 */ nes_cpu_instruction_boundary(0x827A, 2); if (g_cpu.Z) {
    nes_cpu_instruction_boundary(0x8258, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8258;
    }
label_827C:; /* GotoEnemyGetDeltaY_TriggerResting */
    /* $827C: 4C */ nes_cpu_instruction_boundary(0x827C, 3); nes_cpu_instruction_boundary(0x8312, 2); func_8312_b5(); return;
label_827F:; /* EnemyGetDeltaY_SignMagSpeed */
    /* $827F: 38 */ nes_cpu_instruction_boundary(0x827F, 2); g_cpu.C = 1;
label_8280:;
    /* $8280: FD */ nes_cpu_instruction_boundary(0x8280, 4); { uint8_t m=nes_read((0x0409 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8283:;
    /* $8283: D0 */ nes_cpu_instruction_boundary(0x8283, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8290; }
label_8285:;
    /* $8285: 9D */ nes_cpu_instruction_boundary(0x8285, 5); nes_write((0x0409 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8288:;
    /* $8288: C8 */ nes_cpu_instruction_boundary(0x8288, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8289:;
    /* $8289: C8 */ nes_cpu_instruction_boundary(0x8289, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_828A:;
    /* $828A: 98 */ nes_cpu_instruction_boundary(0x828A, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_828B:;
    /* $828B: 9D */ nes_cpu_instruction_boundary(0x828B, 5); nes_write((0x0406 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_828E:;
    /* $828E: D0 */ nes_cpu_instruction_boundary(0x828E, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0x825B, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_825B;
    }
label_8290:; /* EnemyGetDeltaY_SignMagSpeed_endIf_A */
    /* $8290: FE */ nes_cpu_instruction_boundary(0x8290, 7); { uint16_t a=(0x0409 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8293:;
    /* $8293: C8 */ nes_cpu_instruction_boundary(0x8293, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8294:;
    /* $8294: B1 */ nes_cpu_instruction_boundary(0x8294, 5); g_cpu.A = nes_read((nes_read16zp(0x81) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8296:; /* EnemyGetDeltaY_SignMagSpeed_fromByte */
    /* $8296: 0A */ nes_cpu_instruction_boundary(0x8296, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8297:;
    /* $8297: 08 */ nes_cpu_instruction_boundary(0x8297, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8298:;
    /* $8298: 20 */ nes_cpu_instruction_boundary(0x8298, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; func_C2BE();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8298, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_829B:;
    /* $829B: 28 */ nes_cpu_instruction_boundary(0x829B, 4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_829C:;
    /* $829C: 90 */ nes_cpu_instruction_boundary(0x829C, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_82A2; }
label_829E:;
    /* $829E: 49 */ nes_cpu_instruction_boundary(0x829E, 2); g_cpu.A ^= 0xFF; FLAG_NZ(g_cpu.A);
label_82A0:;
    /* $82A0: 69 */ nes_cpu_instruction_boundary(0x82A0, 2); { uint16_t r = g_cpu.A + 0x00 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x00); g_cpu.A=r&0xFF; }
label_82A2:; /* EnemyGetDeltaY_SignMagSpeed_endIf_B */
    /* $82A2: 85 */ nes_cpu_instruction_boundary(0x82A2, 3); nes_write(0x00, g_cpu.A);
label_82A4:;
    /* $82A4: 60 */ nes_cpu_instruction_boundary(0x82A4, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_82A5:; /* EnemyGetDeltaY_ClearEnJumpDsplcmnt */
    /* $82A5: FE */ nes_cpu_instruction_boundary(0x82A5, 7); { uint16_t a=(0x0406 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_82A8:;
    /* $82A8: C8 */ nes_cpu_instruction_boundary(0x82A8, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_82A9:;
    /* $82A9: A9 */ nes_cpu_instruction_boundary(0x82A9, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_82AB:;
    /* $82AB: 9D */ nes_cpu_instruction_boundary(0x82AB, 5); nes_write((0x6B01 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_82AE:;
    /* $82AE: F0 */ nes_cpu_instruction_boundary(0x82AE, 2); if (g_cpu.Z) {
    nes_cpu_instruction_boundary(0x825B, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_825B;
    }
label_82B0:; /* EnemyGetDeltaY_StopMovement */
    /* $82B0: 68 */ nes_cpu_instruction_boundary(0x82B0, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_82B1:;
    /* $82B1: 68 */ nes_cpu_instruction_boundary(0x82B1, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_82B2:;
    /* $82B2: 60 */ nes_cpu_instruction_boundary(0x82B2, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_82B3:; /* EnemyGetDeltaY_RepeatPreviousUntilFailure */
    /* $82B3: BD */ nes_cpu_instruction_boundary(0x82B3, 4); g_cpu.A = nes_read((0x6B03 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_82B6:;
    /* $82B6: 10 */ nes_cpu_instruction_boundary(0x82B6, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_82BE; }
label_82B8:;
    /* $82B8: 20 */ nes_cpu_instruction_boundary(0x82B8, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; func_E770();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x82B8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_82BB:;
    /* $82BB: 4C */ nes_cpu_instruction_boundary(0x82BB, 3); nes_cpu_instruction_boundary(0x82C3, 2); func_82C3_b5(); return;
label_82BE:; /* EnemyGetDeltaY_RepeatPreviousUntilFailure_else_A */
    /* $82BE: F0 */ nes_cpu_instruction_boundary(0x82BE, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_82D2; }
label_82C0:;
    /* $82C0: 20 */ nes_cpu_instruction_boundary(0x82C0, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC2; g_cpu.S--; func_E77B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x82C0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_82C3:; /* EnemyGetDeltaY_RepeatPreviousUntilFailure_endIf_A */
    /* $82C3: A6 */ nes_cpu_instruction_boundary(0x82C3, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_82C5:;
    /* $82C5: B0 */ nes_cpu_instruction_boundary(0x82C5, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_82D2; }
label_82C7:;
    /* $82C7: BC */ nes_cpu_instruction_boundary(0x82C7, 4); g_cpu.Y = nes_read((0x0406 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_82CA:;
    /* $82CA: C8 */ nes_cpu_instruction_boundary(0x82CA, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_82CB:;
    /* $82CB: A9 */ nes_cpu_instruction_boundary(0x82CB, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_82CD:;
    /* $82CD: 9D */ nes_cpu_instruction_boundary(0x82CD, 5); nes_write((0x6B03 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_82D0:;
    /* $82D0: F0 */ nes_cpu_instruction_boundary(0x82D0, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_82D7; }
label_82D2:; /* EnemyGetDeltaY_RepeatPreviousUntilFailure_success */
    /* $82D2: BC */ nes_cpu_instruction_boundary(0x82D2, 4); g_cpu.Y = nes_read((0x0406 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_82D5:;
    /* $82D5: 88 */ nes_cpu_instruction_boundary(0x82D5, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_82D6:;
    /* $82D6: 88 */ nes_cpu_instruction_boundary(0x82D6, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_82D7:; /* EnemyGetDeltaY_RepeatPreviousUntilFailure_common */
    /* $82D7: 98 */ nes_cpu_instruction_boundary(0x82D7, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_82D8:;
    /* $82D8: 9D */ nes_cpu_instruction_boundary(0x82D8, 5); nes_write((0x0406 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_82DB:;
    /* $82DB: 4C */ nes_cpu_instruction_boundary(0x82DB, 3); nes_cpu_instruction_boundary(0x825B, 2);
    goto label_825B;
label_82DE:; /* EnemyGetDeltaY_RepeatPreviousUntilNoDeltaYThenTriggerResting */
    /* $82DE: 88 */ nes_cpu_instruction_boundary(0x82DE, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_82DF:;
    /* $82DF: 88 */ nes_cpu_instruction_boundary(0x82DF, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_82E0:;
    /* $82E0: 98 */ nes_cpu_instruction_boundary(0x82E0, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_82E1:;
    /* $82E1: 9D */ nes_cpu_instruction_boundary(0x82E1, 5); nes_write((0x0406 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_82E4:;
    /* $82E4: BD */ nes_cpu_instruction_boundary(0x82E4, 4); g_cpu.A = nes_read((0x6B03 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_82E7:;
    /* $82E7: 10 */ nes_cpu_instruction_boundary(0x82E7, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_82EF; }
label_82E9:;
    /* $82E9: 20 */ nes_cpu_instruction_boundary(0x82E9, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xEB; g_cpu.S--; func_E770();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x82E9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_82EC:;
    /* $82EC: 4C */ nes_cpu_instruction_boundary(0x82EC, 3); nes_cpu_instruction_boundary(0x82F4, 2); func_82F4_b5(); return;
label_82EF:; /* EnemyGetDeltaY_RepeatPreviousUntilNoDeltaYThenTriggerResting_else_A */
    /* $82EF: F0 */ nes_cpu_instruction_boundary(0x82EF, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_82FB; }
label_82F1:;
    /* $82F1: 20 */ nes_cpu_instruction_boundary(0x82F1, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF3; g_cpu.S--; func_E77B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x82F1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_82F4:; /* EnemyGetDeltaY_RepeatPreviousUntilNoDeltaYThenTriggerResting_endIf_A */
    /* $82F4: A6 */ nes_cpu_instruction_boundary(0x82F4, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_82F6:;
    /* $82F6: 90 */ nes_cpu_instruction_boundary(0x82F6, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_82FB; }
label_82F8:;
    /* $82F8: 4C */ nes_cpu_instruction_boundary(0x82F8, 3); nes_cpu_instruction_boundary(0x8258, 2);
    goto label_8258;
label_82FB:; /* EnemyGetDeltaY_RepeatPreviousUntilNoDeltaYThenTriggerResting_fail */
    /* $82FB: BC */ nes_cpu_instruction_boundary(0x82FB, 4); g_cpu.Y = nes_read((0x6B02 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_82FE:;
    /* $82FE: B9 */ nes_cpu_instruction_boundary(0x82FE, 4); g_cpu.A = nes_read((0x968B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8301:;
    /* $8301: 29 */ nes_cpu_instruction_boundary(0x8301, 2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_8303:;
    /* $8303: F0 */ nes_cpu_instruction_boundary(0x8303, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8312; }
label_8305:;
    /* $8305: BD */ nes_cpu_instruction_boundary(0x8305, 4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8308:;
    /* $8308: 49 */ nes_cpu_instruction_boundary(0x8308, 2); g_cpu.A ^= 0x05; FLAG_NZ(g_cpu.A);
label_830A:;
    /* $830A: 19 */ nes_cpu_instruction_boundary(0x830A, 4); g_cpu.A |= nes_read((0x968B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_830D:;
    /* $830D: 29 */ nes_cpu_instruction_boundary(0x830D, 2); g_cpu.A &= 0x1F; FLAG_NZ(g_cpu.A);
label_830F:;
    /* $830F: 9D */ nes_cpu_instruction_boundary(0x830F, 5); nes_write((0x0405 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8312:; /* EnemyGetDeltaY_RepeatPreviousUntilNoDeltaYThenTriggerResting_endIf_B */
    /* $8312: 20 */ nes_cpu_instruction_boundary(0x8312, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x83; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x14; g_cpu.S--; func_81B1_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8312, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8315:;
    /* $8315: 4C */ nes_cpu_instruction_boundary(0x8315, 3); nes_cpu_instruction_boundary(0x82A2, 2);
    goto label_82A2;
}

void func_8244_b5(void) { /* EnemyGetDeltaY */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8244_b5");
#endif
    func_8244_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8296_b5(void) { /* EnemyGetDeltaY_SignMagSpeed_fromByte */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8296_b5");
#endif
    func_8244_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_82C3_b5(void) { /* EnemyGetDeltaY_RepeatPreviousUntilFailure_endIf_A */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_82C3_b5");
#endif
    func_8244_b5_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_825B_b5(void) { /* EnemyGetDeltaY_ReadByte */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_825B_b5");
#endif
    func_8244_b5_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_82F4_b5(void) { /* EnemyGetDeltaY_RepeatPreviousUntilNoDeltaYThenTriggerResting_endIf_A */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_82F4_b5");
#endif
    func_8244_b5_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8258_b5(void) { /* EnemyGetDeltaY_ReadByteAtIndex */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8258_b5");
#endif
    func_8244_b5_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_82A2_b5(void) { /* EnemyGetDeltaY_SignMagSpeed_endIf_B */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_82A2_b5");
#endif
    func_8244_b5_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_83F5_b5_body(int _entry) { /* EnemyMoveOnePixelUp */
    switch (_entry) {
        case 1: goto label_8400;
    }
label_83F5:; /* EnemyMoveOnePixelUp */
    /* $83F5: A6 */ nes_cpu_instruction_boundary(0x83F5, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_83F7:;
    /* $83F7: BD */ nes_cpu_instruction_boundary(0x83F7, 4); g_cpu.A = nes_read((0x0400 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_83FA:;
    /* $83FA: 38 */ nes_cpu_instruction_boundary(0x83FA, 2); g_cpu.C = 1;
label_83FB:;
    /* $83FB: FD */ nes_cpu_instruction_boundary(0x83FB, 4); { uint8_t m=nes_read((0x6AF5 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83FE:;
    /* $83FE: 29 */ nes_cpu_instruction_boundary(0x83FE, 2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_8400:;
    /* $8400: 38 */ nes_cpu_instruction_boundary(0x8400, 2); g_cpu.C = 1;
label_8401:;
    /* $8401: D0 */ nes_cpu_instruction_boundary(0x8401, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8406; }
label_8403:;
    /* $8403: 20 */ nes_cpu_instruction_boundary(0x8403, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x05; g_cpu.S--; func_E770();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8403, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8406:; /* EnemyMoveOnePixelUp_endIf_A */
    /* $8406: A0 */ nes_cpu_instruction_boundary(0x8406, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_8408:;
    /* $8408: 84 */ nes_cpu_instruction_boundary(0x8408, 3); nes_write(0x00, g_cpu.Y);
label_840A:;
    /* $840A: A6 */ nes_cpu_instruction_boundary(0x840A, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_840C:;
    /* $840C: 90 */ nes_cpu_instruction_boundary(0x840C, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_844A; }
label_840E:;
    /* $840E: E6 */ nes_cpu_instruction_boundary(0x840E, 5); { uint16_t a=0x00; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8410:;
    /* $8410: BC */ nes_cpu_instruction_boundary(0x8410, 4); g_cpu.Y = nes_read((0x0400 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_8413:;
    /* $8413: D0 */ nes_cpu_instruction_boundary(0x8413, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8429; }
label_8415:;
    /* $8415: A0 */ nes_cpu_instruction_boundary(0x8415, 2); g_cpu.Y = 0xF0; FLAG_NZ(g_cpu.Y);
label_8417:;
    /* $8417: A5 */ nes_cpu_instruction_boundary(0x8417, 3); g_cpu.A = nes_read(0x49); FLAG_NZ(g_cpu.A);
label_8419:;
    /* $8419: C9 */ nes_cpu_instruction_boundary(0x8419, 2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_841B:;
    /* $841B: B0 */ nes_cpu_instruction_boundary(0x841B, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8429; }
label_841D:;
    /* $841D: A5 */ nes_cpu_instruction_boundary(0x841D, 3); g_cpu.A = nes_read(0xFC); FLAG_NZ(g_cpu.A);
label_841F:;
    /* $841F: F0 */ nes_cpu_instruction_boundary(0x841F, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_844A; }
label_8421:;
    /* $8421: 20 */ nes_cpu_instruction_boundary(0x8421, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x23; g_cpu.S--; func_8563_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8421, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8424:;
    /* $8424: F0 */ nes_cpu_instruction_boundary(0x8424, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_844A; }
label_8426:;
    /* $8426: 20 */ nes_cpu_instruction_boundary(0x8426, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x28; g_cpu.S--; func_855A_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8426, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8429:; /* EnemyMoveOnePixelUp_endIf_B */
    /* $8429: 88 */ nes_cpu_instruction_boundary(0x8429, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_842A:;
    /* $842A: 98 */ nes_cpu_instruction_boundary(0x842A, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_842B:;
    /* $842B: 9D */ nes_cpu_instruction_boundary(0x842B, 5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_842E:;
    /* $842E: DD */ nes_cpu_instruction_boundary(0x842E, 4); { uint8_t m=nes_read((0x6AF5 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8431:;
    /* $8431: D0 */ nes_cpu_instruction_boundary(0x8431, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8441; }
label_8433:;
    /* $8433: A5 */ nes_cpu_instruction_boundary(0x8433, 3); g_cpu.A = nes_read(0xFC); FLAG_NZ(g_cpu.A);
label_8435:;
    /* $8435: F0 */ nes_cpu_instruction_boundary(0x8435, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_843C; }
label_8437:;
    /* $8437: 20 */ nes_cpu_instruction_boundary(0x8437, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x39; g_cpu.S--; func_8563_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8437, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_843A:;
    /* $843A: D0 */ nes_cpu_instruction_boundary(0x843A, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8441; }
label_843C:; /* EnemyMoveOnePixelUp_endIf_C */
    /* $843C: FE */ nes_cpu_instruction_boundary(0x843C, 7); { uint16_t a=(0x0400 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_843F:;
    /* $843F: 18 */ nes_cpu_instruction_boundary(0x843F, 2); g_cpu.C = 0;
label_8440:;
    /* $8440: 60 */ nes_cpu_instruction_boundary(0x8440, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8441:; /* EnemyMoveOnePixelUp_success */
    /* $8441: BD */ nes_cpu_instruction_boundary(0x8441, 4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8444:;
    /* $8444: 30 */ nes_cpu_instruction_boundary(0x8444, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_8449; }
label_8446:;
    /* $8446: FE */ nes_cpu_instruction_boundary(0x8446, 7); { uint16_t a=(0x6B01 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8449:; /* EnemyMoveOnePixelUp_endIf_D */
    /* $8449: 38 */ nes_cpu_instruction_boundary(0x8449, 2); g_cpu.C = 1;
label_844A:; /* EnemyMoveOnePixelUp_RTS */
    /* $844A: 60 */ nes_cpu_instruction_boundary(0x844A, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_83F5_b5(void) { /* EnemyMoveOnePixelUp */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_83F5_b5");
#endif
    func_83F5_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8400_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8400_b5");
#endif
    func_83F5_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_80B8_b5_body(int _entry) { /* EnemyIfMoveFailedUp */
    switch (_entry) {
        case 1: goto label_80F6;
    }
label_80B8:; /* EnemyIfMoveFailedUp */
    /* $80B8: A6 */ nes_cpu_instruction_boundary(0x80B8, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_80BA:;
    /* $80BA: B0 */ nes_cpu_instruction_boundary(0x80BA, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_80FA; }
label_80BC:;
    /* $80BC: BD */ nes_cpu_instruction_boundary(0x80BC, 4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_80BF:;
    /* $80BF: 10 */ nes_cpu_instruction_boundary(0x80BF, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_80C7; }
label_80C1:; /* EnemyIfMoveFailedUp_bounce */
    /* $80C1: 20 */ nes_cpu_instruction_boundary(0x80C1, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC3; g_cpu.S--; func_81FC_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x80C1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_80C4:;
    /* $80C4: 4C */ nes_cpu_instruction_boundary(0x80C4, 3); nes_cpu_instruction_boundary(0x80F6, 2); func_80F6_b5(); return;
label_80C7:; /* EnemyIfMoveFailedUp_facingHorizontal */
    /* $80C7: 20 */ nes_cpu_instruction_boundary(0x80C7, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC9; g_cpu.S--; func_80B0_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x80C7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_80CA:;
    /* $80CA: 10 */ nes_cpu_instruction_boundary(0x80CA, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_80EA; }
label_80CC:;
    /* $80CC: BD */ nes_cpu_instruction_boundary(0x80CC, 4); g_cpu.A = nes_read((0x6B03 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_80CF:;
    /* $80CF: F0 */ nes_cpu_instruction_boundary(0x80CF, 2); if (g_cpu.Z) {
    nes_cpu_instruction_boundary(0x80C1, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_80C1;
    }
label_80D1:;
    /* $80D1: 10 */ nes_cpu_instruction_boundary(0x80D1, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_80D8; }
label_80D3:;
    /* $80D3: 20 */ nes_cpu_instruction_boundary(0x80D3, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD5; g_cpu.S--; func_81B1_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x80D3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_80D6:;
    /* $80D6: F0 */ nes_cpu_instruction_boundary(0x80D6, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_80E2; }
label_80D8:; /* EnemyIfMoveFailedUp_brushOnCeiling */
    /* $80D8: 38 */ nes_cpu_instruction_boundary(0x80D8, 2); g_cpu.C = 1;
label_80D9:;
    /* $80D9: 7E */ nes_cpu_instruction_boundary(0x80D9, 7); { uint16_t a=(0x0402 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_80DC:;
    /* $80DC: 7E */ nes_cpu_instruction_boundary(0x80DC, 7); { uint16_t a=(0x0406 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_80DF:;
    /* $80DF: 4C */ nes_cpu_instruction_boundary(0x80DF, 3); nes_cpu_instruction_boundary(0x80F6, 2); func_80F6_b5(); return;
label_80E2:; /* EnemyIfMoveFailedUp_landOnCeilingPt2 */
    /* $80E2: 9D */ nes_cpu_instruction_boundary(0x80E2, 5); nes_write((0x0402 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_80E5:;
    /* $80E5: 9D */ nes_cpu_instruction_boundary(0x80E5, 5); nes_write((0x0406 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_80E8:;
    /* $80E8: F0 */ nes_cpu_instruction_boundary(0x80E8, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_80F6; }
label_80EA:; /* EnemyIfMoveFailedUp_movementStrings */
    /* $80EA: B9 */ nes_cpu_instruction_boundary(0x80EA, 4); g_cpu.A = nes_read((0x977B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_80ED:;
    /* $80ED: 4A */ nes_cpu_instruction_boundary(0x80ED, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_80EE:;
    /* $80EE: 4A */ nes_cpu_instruction_boundary(0x80EE, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_80EF:;
    /* $80EF: 90 */ nes_cpu_instruction_boundary(0x80EF, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_80F6; }
label_80F1:;
    /* $80F1: A9 */ nes_cpu_instruction_boundary(0x80F1, 2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_80F3:;
    /* $80F3: 20 */ nes_cpu_instruction_boundary(0x80F3, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF5; g_cpu.S--; func_856B_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x80F3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_80F6:; /* EnemyIfMoveFailedUp_abortLoop */
    /* $80F6: A9 */ nes_cpu_instruction_boundary(0x80F6, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_80F8:;
    /* $80F8: 85 */ nes_cpu_instruction_boundary(0x80F8, 3); nes_write(0x66, g_cpu.A);
label_80FA:; /* EnemyIfMoveFailedUp_RTS */
    /* $80FA: 60 */ nes_cpu_instruction_boundary(0x80FA, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_80B8_b5(void) { /* EnemyIfMoveFailedUp */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80B8_b5");
#endif
    func_80B8_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_80F6_b5(void) { /* EnemyIfMoveFailedUp_abortLoop */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80F6_b5");
#endif
    func_80B8_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_844B_b5(void) { /* EnemyMoveOnePixelDown */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_844B_b5");
#endif
label_844B:; /* EnemyMoveOnePixelDown */
    /* $844B: A6 */ nes_cpu_instruction_boundary(0x844B, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_844D:;
    /* $844D: BD */ nes_cpu_instruction_boundary(0x844D, 4); g_cpu.A = nes_read((0x0400 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8450:;
    /* $8450: 18 */ nes_cpu_instruction_boundary(0x8450, 2); g_cpu.C = 0;
label_8451:;
    /* $8451: 7D */ nes_cpu_instruction_boundary(0x8451, 4); { uint8_t m=nes_read((0x6AF5 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8454:;
    /* $8454: 29 */ nes_cpu_instruction_boundary(0x8454, 2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_8456:;
    /* $8456: 38 */ nes_cpu_instruction_boundary(0x8456, 2); g_cpu.C = 1;
label_8457:;
    /* $8457: D0 */ nes_cpu_instruction_boundary(0x8457, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_845C; }
label_8459:;
    /* $8459: 20 */ nes_cpu_instruction_boundary(0x8459, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x5B; g_cpu.S--; func_E77B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8459, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_845C:; /* EnemyMoveOnePixelDown_endIf_A */
    /* $845C: A0 */ nes_cpu_instruction_boundary(0x845C, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_845E:;
    /* $845E: 84 */ nes_cpu_instruction_boundary(0x845E, 3); nes_write(0x00, g_cpu.Y);
label_8460:;
    /* $8460: A6 */ nes_cpu_instruction_boundary(0x8460, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_8462:;
    /* $8462: 90 */ nes_cpu_instruction_boundary(0x8462, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_84A6; }
label_8464:;
    /* $8464: E6 */ nes_cpu_instruction_boundary(0x8464, 5); { uint16_t a=0x00; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8466:;
    /* $8466: BC */ nes_cpu_instruction_boundary(0x8466, 4); g_cpu.Y = nes_read((0x0400 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_8469:;
    /* $8469: C0 */ nes_cpu_instruction_boundary(0x8469, 2); { int r=g_cpu.Y-0xEF; g_cpu.C=(g_cpu.Y>=0xEF)?1:0; FLAG_NZ(r&0xFF); }
label_846B:;
    /* $846B: D0 */ nes_cpu_instruction_boundary(0x846B, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8481; }
label_846D:;
    /* $846D: A0 */ nes_cpu_instruction_boundary(0x846D, 2); g_cpu.Y = 0xFF; FLAG_NZ(g_cpu.Y);
label_846F:;
    /* $846F: A5 */ nes_cpu_instruction_boundary(0x846F, 3); g_cpu.A = nes_read(0x49); FLAG_NZ(g_cpu.A);
label_8471:;
    /* $8471: C9 */ nes_cpu_instruction_boundary(0x8471, 2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_8473:;
    /* $8473: B0 */ nes_cpu_instruction_boundary(0x8473, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8481; }
label_8475:;
    /* $8475: A5 */ nes_cpu_instruction_boundary(0x8475, 3); g_cpu.A = nes_read(0xFC); FLAG_NZ(g_cpu.A);
label_8477:;
    /* $8477: F0 */ nes_cpu_instruction_boundary(0x8477, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_84A6; }
label_8479:;
    /* $8479: 20 */ nes_cpu_instruction_boundary(0x8479, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x7B; g_cpu.S--; func_8563_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8479, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_847C:;
    /* $847C: D0 */ nes_cpu_instruction_boundary(0x847C, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_84A6; }
label_847E:;
    /* $847E: 20 */ nes_cpu_instruction_boundary(0x847E, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; func_855A_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x847E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8481:; /* EnemyMoveOnePixelDown_endIf_B */
    /* $8481: C8 */ nes_cpu_instruction_boundary(0x8481, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8482:;
    /* $8482: 98 */ nes_cpu_instruction_boundary(0x8482, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8483:;
    /* $8483: 9D */ nes_cpu_instruction_boundary(0x8483, 5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8486:;
    /* $8486: 18 */ nes_cpu_instruction_boundary(0x8486, 2); g_cpu.C = 0;
label_8487:;
    /* $8487: 7D */ nes_cpu_instruction_boundary(0x8487, 4); { uint8_t m=nes_read((0x6AF5 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_848A:;
    /* $848A: C9 */ nes_cpu_instruction_boundary(0x848A, 2); { int r=g_cpu.A-0xEF; g_cpu.C=(g_cpu.A>=0xEF)?1:0; FLAG_NZ(r&0xFF); }
label_848C:;
    /* $848C: D0 */ nes_cpu_instruction_boundary(0x848C, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_849D; }
label_848E:;
    /* $848E: A5 */ nes_cpu_instruction_boundary(0x848E, 3); g_cpu.A = nes_read(0xFC); FLAG_NZ(g_cpu.A);
label_8490:;
    /* $8490: F0 */ nes_cpu_instruction_boundary(0x8490, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8497; }
label_8492:;
    /* $8492: 20 */ nes_cpu_instruction_boundary(0x8492, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x94; g_cpu.S--; func_8563_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8492, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8495:;
    /* $8495: F0 */ nes_cpu_instruction_boundary(0x8495, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_849D; }
label_8497:; /* EnemyMoveOnePixelDown_endIf_C */
    /* $8497: DE */ nes_cpu_instruction_boundary(0x8497, 7); { uint16_t a=(0x0400 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_849A:;
    /* $849A: 18 */ nes_cpu_instruction_boundary(0x849A, 2); g_cpu.C = 0;
label_849B:;
    /* $849B: 90 */ nes_cpu_instruction_boundary(0x849B, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_84A6; }
label_849D:; /* EnemyMoveOnePixelDown_success */
    /* $849D: BD */ nes_cpu_instruction_boundary(0x849D, 4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_84A0:;
    /* $84A0: 30 */ nes_cpu_instruction_boundary(0x84A0, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_84A5; }
label_84A2:;
    /* $84A2: DE */ nes_cpu_instruction_boundary(0x84A2, 7); { uint16_t a=(0x6B01 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_84A5:; /* EnemyMoveOnePixelDown_endIf_D */
    /* $84A5: 38 */ nes_cpu_instruction_boundary(0x84A5, 2); g_cpu.C = 1;
label_84A6:; /* EnemyMoveOnePixelDown_RTS */
    /* $84A6: 60 */ nes_cpu_instruction_boundary(0x84A6, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_80FB_b5_body(int _entry) { /* EnemyIfMoveFailedDown */
    switch (_entry) {
        case 1: goto label_812F;
    }
label_80FB:; /* EnemyIfMoveFailedDown */
    /* $80FB: A6 */ nes_cpu_instruction_boundary(0x80FB, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_80FD:;
    /* $80FD: B0 */ nes_cpu_instruction_boundary(0x80FD, 2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_8133; }
label_80FF:;
    /* $80FF: BD */ nes_cpu_instruction_boundary(0x80FF, 4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8102:;
    /* $8102: 10 */ nes_cpu_instruction_boundary(0x8102, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_810A; }
label_8104:; /* EnemyIfMoveFailedDown_bounce */
    /* $8104: 20 */ nes_cpu_instruction_boundary(0x8104, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x06; g_cpu.S--; func_81FC_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8104, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8107:;
    /* $8107: 4C */ nes_cpu_instruction_boundary(0x8107, 3); nes_cpu_instruction_boundary(0x812F, 2); func_812F_b5(); return;
label_810A:; /* EnemyIfMoveFailedDown_facingHorizontal */
    /* $810A: 20 */ nes_cpu_instruction_boundary(0x810A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0C; g_cpu.S--; func_80B0_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x810A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_810D:;
    /* $810D: 10 */ nes_cpu_instruction_boundary(0x810D, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_8123; }
label_810F:;
    /* $810F: BD */ nes_cpu_instruction_boundary(0x810F, 4); g_cpu.A = nes_read((0x6B03 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8112:;
    /* $8112: F0 */ nes_cpu_instruction_boundary(0x8112, 2); if (g_cpu.Z) {
    nes_cpu_instruction_boundary(0x8104, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8104;
    }
label_8114:;
    /* $8114: 10 */ nes_cpu_instruction_boundary(0x8114, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_8120; }
label_8116:;
    /* $8116: 18 */ nes_cpu_instruction_boundary(0x8116, 2); g_cpu.C = 0;
label_8117:;
    /* $8117: 7E */ nes_cpu_instruction_boundary(0x8117, 7); { uint16_t a=(0x0402 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_811A:;
    /* $811A: 7E */ nes_cpu_instruction_boundary(0x811A, 7); { uint16_t a=(0x0406 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_811D:;
    /* $811D: 4C */ nes_cpu_instruction_boundary(0x811D, 3); nes_cpu_instruction_boundary(0x812F, 2); func_812F_b5(); return;
label_8120:; /* EnemyIfMoveFailedDown_landOnFloor */
    /* $8120: 20 */ nes_cpu_instruction_boundary(0x8120, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x22; g_cpu.S--; func_81B1_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8120, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8123:; /* EnemyIfMoveFailedDown_movementStrings */
    /* $8123: B9 */ nes_cpu_instruction_boundary(0x8123, 4); g_cpu.A = nes_read((0x977B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8126:;
    /* $8126: 4A */ nes_cpu_instruction_boundary(0x8126, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8127:;
    /* $8127: 4A */ nes_cpu_instruction_boundary(0x8127, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8128:;
    /* $8128: 90 */ nes_cpu_instruction_boundary(0x8128, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_812F; }
label_812A:;
    /* $812A: A9 */ nes_cpu_instruction_boundary(0x812A, 2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_812C:;
    /* $812C: 20 */ nes_cpu_instruction_boundary(0x812C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2E; g_cpu.S--; func_856B_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x812C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_812F:; /* EnemyIfMoveFailedDown_abortLoop */
    /* $812F: A9 */ nes_cpu_instruction_boundary(0x812F, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8131:;
    /* $8131: 85 */ nes_cpu_instruction_boundary(0x8131, 3); nes_write(0x66, g_cpu.A);
label_8133:; /* EnemyIfMoveFailedDown_RTS */
    /* $8133: 60 */ nes_cpu_instruction_boundary(0x8133, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_80FB_b5(void) { /* EnemyIfMoveFailedDown */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80FB_b5");
#endif
    func_80FB_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_812F_b5(void) { /* EnemyIfMoveFailedDown_abortLoop */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_812F_b5");
#endif
    func_80FB_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8318_b5_body(int _entry) { /* EnemyGetDeltaX */
    switch (_entry) {
        case 1: goto label_832F;
    }
label_8318:; /* EnemyGetDeltaX */
    /* $8318: 20 */ nes_cpu_instruction_boundary(0x8318, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x83; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1A; g_cpu.S--; func_80B0_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8318, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_831B:;
    /* $831B: 10 */ nes_cpu_instruction_boundary(0x831B, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_8320; }
label_831D:;
    /* $831D: 4C */ nes_cpu_instruction_boundary(0x831D, 3); nes_cpu_instruction_boundary(0x8395, 2); func_8395_b5(); return;
label_8320:; /* EnemyGetDeltaX_endIf_A */
    /* $8320: BD */ nes_cpu_instruction_boundary(0x8320, 4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8323:;
    /* $8323: 29 */ nes_cpu_instruction_boundary(0x8323, 2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_8325:;
    /* $8325: 49 */ nes_cpu_instruction_boundary(0x8325, 2); g_cpu.A ^= 0x20; FLAG_NZ(g_cpu.A);
label_8327:;
    /* $8327: F0 */ nes_cpu_instruction_boundary(0x8327, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_833C; }
label_8329:;
    /* $8329: BC */ nes_cpu_instruction_boundary(0x8329, 4); g_cpu.Y = nes_read((0x0406 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_832C:;
    /* $832C: C8 */ nes_cpu_instruction_boundary(0x832C, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_832D:;
    /* $832D: B1 */ nes_cpu_instruction_boundary(0x832D, 5); g_cpu.A = nes_read((nes_read16zp(0x81) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_832F:; /* EnemyGetDeltaX_SignMagSpeed_fromByte */
    /* $832F: AA */ nes_cpu_instruction_boundary(0x832F, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8330:;
    /* $8330: 29 */ nes_cpu_instruction_boundary(0x8330, 2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A);
label_8332:;
    /* $8332: 08 */ nes_cpu_instruction_boundary(0x8332, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8333:;
    /* $8333: 8A */ nes_cpu_instruction_boundary(0x8333, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8334:;
    /* $8334: 29 */ nes_cpu_instruction_boundary(0x8334, 2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_8336:;
    /* $8336: 28 */ nes_cpu_instruction_boundary(0x8336, 4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_8337:;
    /* $8337: F0 */ nes_cpu_instruction_boundary(0x8337, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_833C; }
label_8339:;
    /* $8339: 20 */ nes_cpu_instruction_boundary(0x8339, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x83; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3B; g_cpu.S--; func_C3D4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8339, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_833C:; /* EnemyGetDeltaX_SignMagSpeed_endIf_A */
    /* $833C: 85 */ nes_cpu_instruction_boundary(0x833C, 3); nes_write(0x00, g_cpu.A);
label_833E:;
    /* $833E: 60 */ nes_cpu_instruction_boundary(0x833E, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8318_b5(void) { /* EnemyGetDeltaX */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8318_b5");
#endif
    func_8318_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_832F_b5(void) { /* EnemyGetDeltaX_SignMagSpeed_fromByte */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_832F_b5");
#endif
    func_8318_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_84A7_b5_body(int _entry) { /* EnemyMoveOnePixelLeft */
    switch (_entry) {
        case 1: goto label_84FD;
    }
label_84A7:; /* EnemyMoveOnePixelLeft */
    /* $84A7: A6 */ nes_cpu_instruction_boundary(0x84A7, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_84A9:;
    /* $84A9: BD */ nes_cpu_instruction_boundary(0x84A9, 4); g_cpu.A = nes_read((0x0401 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_84AC:;
    /* $84AC: 38 */ nes_cpu_instruction_boundary(0x84AC, 2); g_cpu.C = 1;
label_84AD:;
    /* $84AD: FD */ nes_cpu_instruction_boundary(0x84AD, 4); { uint8_t m=nes_read((0x6AF6 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_84B0:;
    /* $84B0: 29 */ nes_cpu_instruction_boundary(0x84B0, 2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_84B2:;
    /* $84B2: 38 */ nes_cpu_instruction_boundary(0x84B2, 2); g_cpu.C = 1;
label_84B3:;
    /* $84B3: D0 */ nes_cpu_instruction_boundary(0x84B3, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_84B8; }
label_84B5:;
    /* $84B5: 20 */ nes_cpu_instruction_boundary(0x84B5, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; func_E8F1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x84B5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_84B8:; /* EnemyMoveOnePixelLeft_endIf_A */
    /* $84B8: A0 */ nes_cpu_instruction_boundary(0x84B8, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_84BA:;
    /* $84BA: 84 */ nes_cpu_instruction_boundary(0x84BA, 3); nes_write(0x00, g_cpu.Y);
label_84BC:;
    /* $84BC: A6 */ nes_cpu_instruction_boundary(0x84BC, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_84BE:;
    /* $84BE: 90 */ nes_cpu_instruction_boundary(0x84BE, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_84FD; }
label_84C0:;
    /* $84C0: E6 */ nes_cpu_instruction_boundary(0x84C0, 5); { uint16_t a=0x00; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_84C2:;
    /* $84C2: BC */ nes_cpu_instruction_boundary(0x84C2, 4); g_cpu.Y = nes_read((0x0401 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_84C5:;
    /* $84C5: D0 */ nes_cpu_instruction_boundary(0x84C5, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_84DA; }
label_84C7:;
    /* $84C7: A5 */ nes_cpu_instruction_boundary(0x84C7, 3); g_cpu.A = nes_read(0x49); FLAG_NZ(g_cpu.A);
label_84C9:;
    /* $84C9: C9 */ nes_cpu_instruction_boundary(0x84C9, 2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_84CB:;
    /* $84CB: 90 */ nes_cpu_instruction_boundary(0x84CB, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_84DA; }
label_84CD:;
    /* $84CD: A5 */ nes_cpu_instruction_boundary(0x84CD, 3); g_cpu.A = nes_read(0xFD); FLAG_NZ(g_cpu.A);
label_84CF:;
    /* $84CF: F0 */ nes_cpu_instruction_boundary(0x84CF, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_84D4; }
label_84D1:;
    /* $84D1: 20 */ nes_cpu_instruction_boundary(0x84D1, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD3; g_cpu.S--; func_8563_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x84D1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_84D4:; /* EnemyMoveOnePixelLeft_endIf_C */
    /* $84D4: 18 */ nes_cpu_instruction_boundary(0x84D4, 2); g_cpu.C = 0;
label_84D5:;
    /* $84D5: F0 */ nes_cpu_instruction_boundary(0x84D5, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_84FD; }
label_84D7:;
    /* $84D7: 20 */ nes_cpu_instruction_boundary(0x84D7, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD9; g_cpu.S--; func_855A_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x84D7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_84DA:; /* EnemyMoveOnePixelLeft_endIf_B */
    /* $84DA: DE */ nes_cpu_instruction_boundary(0x84DA, 7); { uint16_t a=(0x0401 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_84DD:;
    /* $84DD: BD */ nes_cpu_instruction_boundary(0x84DD, 4); g_cpu.A = nes_read((0x0401 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_84E0:;
    /* $84E0: DD */ nes_cpu_instruction_boundary(0x84E0, 4); { uint8_t m=nes_read((0x6AF6 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_84E3:;
    /* $84E3: D0 */ nes_cpu_instruction_boundary(0x84E3, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_84F4; }
label_84E5:;
    /* $84E5: A5 */ nes_cpu_instruction_boundary(0x84E5, 3); g_cpu.A = nes_read(0xFD); FLAG_NZ(g_cpu.A);
label_84E7:;
    /* $84E7: F0 */ nes_cpu_instruction_boundary(0x84E7, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_84EE; }
label_84E9:;
    /* $84E9: 20 */ nes_cpu_instruction_boundary(0x84E9, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xEB; g_cpu.S--; func_8563_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x84E9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_84EC:;
    /* $84EC: D0 */ nes_cpu_instruction_boundary(0x84EC, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_84F4; }
label_84EE:; /* EnemyMoveOnePixelLeft_endIf_D */
    /* $84EE: FE */ nes_cpu_instruction_boundary(0x84EE, 7); { uint16_t a=(0x0401 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_84F1:;
    /* $84F1: 18 */ nes_cpu_instruction_boundary(0x84F1, 2); g_cpu.C = 0;
label_84F2:;
    /* $84F2: 90 */ nes_cpu_instruction_boundary(0x84F2, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_84FD; }
label_84F4:; /* EnemyMoveOnePixelLeft_success */
    /* $84F4: BD */ nes_cpu_instruction_boundary(0x84F4, 4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_84F7:;
    /* $84F7: 10 */ nes_cpu_instruction_boundary(0x84F7, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_84FC; }
label_84F9:;
    /* $84F9: FE */ nes_cpu_instruction_boundary(0x84F9, 7); { uint16_t a=(0x6B01 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_84FC:; /* EnemyMoveOnePixelLeft_endIf_E */
    /* $84FC: 38 */ nes_cpu_instruction_boundary(0x84FC, 2); g_cpu.C = 1;
label_84FD:; /* EnemyMoveOnePixelLeft_RTS */
    /* $84FD: 60 */ nes_cpu_instruction_boundary(0x84FD, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_84A7_b5(void) { /* EnemyMoveOnePixelLeft */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_84A7_b5");
#endif
    func_84A7_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_84FD_b5(void) { /* EnemyMoveOnePixelLeft_RTS */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_84FD_b5");
#endif
    func_84A7_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_816E_b5_body(int _entry) { /* EnemyIfMoveFailedLeft */
    switch (_entry) {
        case 1: goto label_81AC;
    }
label_816E:; /* EnemyIfMoveFailedLeft */
    /* $816E: A6 */ nes_cpu_instruction_boundary(0x816E, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_8170:;
    /* $8170: B0 */ nes_cpu_instruction_boundary(0x8170, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_81B0; }
label_8172:;
    /* $8172: 20 */ nes_cpu_instruction_boundary(0x8172, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x74; g_cpu.S--; func_80B0_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8172, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8175:;
    /* $8175: 10 */ nes_cpu_instruction_boundary(0x8175, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_81A0; }
label_8177:;
    /* $8177: BD */ nes_cpu_instruction_boundary(0x8177, 4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_817A:;
    /* $817A: 30 */ nes_cpu_instruction_boundary(0x817A, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_8182; }
label_817C:; /* EnemyIfMoveFailedLeft_bounce */
    /* $817C: 20 */ nes_cpu_instruction_boundary(0x817C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x7E; g_cpu.S--; func_81C7_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x817C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_817F:;
    /* $817F: 4C */ nes_cpu_instruction_boundary(0x817F, 3); nes_cpu_instruction_boundary(0x81AC, 2); func_81AC_b5(); return;
label_8182:; /* EnemyIfMoveFailedLeft_facingVertical */
    /* $8182: BD */ nes_cpu_instruction_boundary(0x8182, 4); g_cpu.A = nes_read((0x6B03 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8185:;
    /* $8185: F0 */ nes_cpu_instruction_boundary(0x8185, 2); if (g_cpu.Z) {
    nes_cpu_instruction_boundary(0x817C, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_817C;
    }
label_8187:;
    /* $8187: 10 */ nes_cpu_instruction_boundary(0x8187, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_818E; }
label_8189:;
    /* $8189: 20 */ nes_cpu_instruction_boundary(0x8189, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; func_81C0_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8189, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_818C:;
    /* $818C: F0 */ nes_cpu_instruction_boundary(0x818C, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8198; }
label_818E:; /* EnemyIfMoveFailedLeft_brushOnLeftWall */
    /* $818E: 38 */ nes_cpu_instruction_boundary(0x818E, 2); g_cpu.C = 1;
label_818F:;
    /* $818F: 7E */ nes_cpu_instruction_boundary(0x818F, 7); { uint16_t a=(0x0403 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8192:;
    /* $8192: 7E */ nes_cpu_instruction_boundary(0x8192, 7); { uint16_t a=(0x0407 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8195:;
    /* $8195: 4C */ nes_cpu_instruction_boundary(0x8195, 3); nes_cpu_instruction_boundary(0x81AC, 2); func_81AC_b5(); return;
label_8198:; /* EnemyIfMoveFailedLeft_landOnLeftWallPt2 */
    /* $8198: 9D */ nes_cpu_instruction_boundary(0x8198, 5); nes_write((0x0403 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_819B:;
    /* $819B: 9D */ nes_cpu_instruction_boundary(0x819B, 5); nes_write((0x0407 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_819E:;
    /* $819E: F0 */ nes_cpu_instruction_boundary(0x819E, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_81AC; }
label_81A0:; /* EnemyIfMoveFailedLeft_movementStrings */
    /* $81A0: 20 */ nes_cpu_instruction_boundary(0x81A0, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA2; g_cpu.S--; func_80B0_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x81A0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_81A3:;
    /* $81A3: 4A */ nes_cpu_instruction_boundary(0x81A3, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_81A4:;
    /* $81A4: 4A */ nes_cpu_instruction_boundary(0x81A4, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_81A5:;
    /* $81A5: 90 */ nes_cpu_instruction_boundary(0x81A5, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_81AC; }
label_81A7:;
    /* $81A7: A9 */ nes_cpu_instruction_boundary(0x81A7, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_81A9:;
    /* $81A9: 20 */ nes_cpu_instruction_boundary(0x81A9, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAB; g_cpu.S--; func_856B_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x81A9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_81AC:; /* EnemyIfMoveFailedLeft_abortLoop */
    /* $81AC: A9 */ nes_cpu_instruction_boundary(0x81AC, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_81AE:;
    /* $81AE: 85 */ nes_cpu_instruction_boundary(0x81AE, 3); nes_write(0x66, g_cpu.A);
label_81B0:; /* EnemyIfMoveFailedLeft_RTS */
    /* $81B0: 60 */ nes_cpu_instruction_boundary(0x81B0, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_816E_b5(void) { /* EnemyIfMoveFailedLeft */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_816E_b5");
#endif
    func_816E_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_81AC_b5(void) { /* EnemyIfMoveFailedLeft_abortLoop */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81AC_b5");
#endif
    func_816E_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_84FE_b5_body(int _entry) { /* EnemyMoveOnePixelRight */
    switch (_entry) {
        case 1: goto label_8500;
    }
label_84FE:; /* EnemyMoveOnePixelRight */
    /* $84FE: A6 */ nes_cpu_instruction_boundary(0x84FE, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_8500:;
    /* $8500: BD */ nes_cpu_instruction_boundary(0x8500, 4); g_cpu.A = nes_read((0x0401 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8503:;
    /* $8503: 18 */ nes_cpu_instruction_boundary(0x8503, 2); g_cpu.C = 0;
label_8504:;
    /* $8504: 7D */ nes_cpu_instruction_boundary(0x8504, 4); { uint8_t m=nes_read((0x6AF6 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8507:;
    /* $8507: 29 */ nes_cpu_instruction_boundary(0x8507, 2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_8509:;
    /* $8509: 38 */ nes_cpu_instruction_boundary(0x8509, 2); g_cpu.C = 1;
label_850A:;
    /* $850A: D0 */ nes_cpu_instruction_boundary(0x850A, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_850F; }
label_850C:;
    /* $850C: 20 */ nes_cpu_instruction_boundary(0x850C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x85; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0E; g_cpu.S--; func_E8FC();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x850C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_850F:; /* EnemyMoveOnePixelRight_endIf_A */
    /* $850F: A0 */ nes_cpu_instruction_boundary(0x850F, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_8511:;
    /* $8511: 84 */ nes_cpu_instruction_boundary(0x8511, 3); nes_write(0x00, g_cpu.Y);
label_8513:;
    /* $8513: A6 */ nes_cpu_instruction_boundary(0x8513, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_8515:;
    /* $8515: 90 */ nes_cpu_instruction_boundary(0x8515, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8559; }
label_8517:;
    /* $8517: E6 */ nes_cpu_instruction_boundary(0x8517, 5); { uint16_t a=0x00; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8519:;
    /* $8519: FE */ nes_cpu_instruction_boundary(0x8519, 7); { uint16_t a=(0x0401 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_851C:;
    /* $851C: D0 */ nes_cpu_instruction_boundary(0x851C, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8536; }
label_851E:;
    /* $851E: A5 */ nes_cpu_instruction_boundary(0x851E, 3); g_cpu.A = nes_read(0x49); FLAG_NZ(g_cpu.A);
label_8520:;
    /* $8520: C9 */ nes_cpu_instruction_boundary(0x8520, 2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_8522:;
    /* $8522: 90 */ nes_cpu_instruction_boundary(0x8522, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8536; }
label_8524:;
    /* $8524: A5 */ nes_cpu_instruction_boundary(0x8524, 3); g_cpu.A = nes_read(0xFD); FLAG_NZ(g_cpu.A);
label_8526:;
    /* $8526: F0 */ nes_cpu_instruction_boundary(0x8526, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_852D; }
label_8528:;
    /* $8528: 20 */ nes_cpu_instruction_boundary(0x8528, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x85; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2A; g_cpu.S--; func_8563_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8528, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_852B:;
    /* $852B: F0 */ nes_cpu_instruction_boundary(0x852B, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8533; }
label_852D:; /* EnemyMoveOnePixelRight_then_C */
    /* $852D: DE */ nes_cpu_instruction_boundary(0x852D, 7); { uint16_t a=(0x0401 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8530:;
    /* $8530: 18 */ nes_cpu_instruction_boundary(0x8530, 2); g_cpu.C = 0;
label_8531:;
    /* $8531: 90 */ nes_cpu_instruction_boundary(0x8531, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8559; }
label_8533:; /* EnemyMoveOnePixelRight_endIf_C */
    /* $8533: 20 */ nes_cpu_instruction_boundary(0x8533, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x85; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x35; g_cpu.S--; func_855A_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8533, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8536:; /* EnemyMoveOnePixelRight_endIf_B */
    /* $8536: BD */ nes_cpu_instruction_boundary(0x8536, 4); g_cpu.A = nes_read((0x0401 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8539:;
    /* $8539: 18 */ nes_cpu_instruction_boundary(0x8539, 2); g_cpu.C = 0;
label_853A:;
    /* $853A: 7D */ nes_cpu_instruction_boundary(0x853A, 4); { uint8_t m=nes_read((0x6AF6 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_853D:;
    /* $853D: C9 */ nes_cpu_instruction_boundary(0x853D, 2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_853F:;
    /* $853F: D0 */ nes_cpu_instruction_boundary(0x853F, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8550; }
label_8541:;
    /* $8541: A5 */ nes_cpu_instruction_boundary(0x8541, 3); g_cpu.A = nes_read(0xFD); FLAG_NZ(g_cpu.A);
label_8543:;
    /* $8543: F0 */ nes_cpu_instruction_boundary(0x8543, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_854A; }
label_8545:;
    /* $8545: 20 */ nes_cpu_instruction_boundary(0x8545, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x85; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x47; g_cpu.S--; func_8563_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8545, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8548:;
    /* $8548: F0 */ nes_cpu_instruction_boundary(0x8548, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8550; }
label_854A:; /* EnemyMoveOnePixelRight_endIf_D */
    /* $854A: DE */ nes_cpu_instruction_boundary(0x854A, 7); { uint16_t a=(0x0401 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_854D:;
    /* $854D: 18 */ nes_cpu_instruction_boundary(0x854D, 2); g_cpu.C = 0;
label_854E:;
    /* $854E: 90 */ nes_cpu_instruction_boundary(0x854E, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8559; }
label_8550:; /* EnemyMoveOnePixelRight_success */
    /* $8550: BD */ nes_cpu_instruction_boundary(0x8550, 4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8553:;
    /* $8553: 10 */ nes_cpu_instruction_boundary(0x8553, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_8558; }
label_8555:;
    /* $8555: DE */ nes_cpu_instruction_boundary(0x8555, 7); { uint16_t a=(0x6B01 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8558:; /* EnemyMoveOnePixelRight_endIf_E */
    /* $8558: 38 */ nes_cpu_instruction_boundary(0x8558, 2); g_cpu.C = 1;
label_8559:; /* EnemyMoveOnePixelRight_RTS */
    /* $8559: 60 */ nes_cpu_instruction_boundary(0x8559, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_84FE_b5(void) { /* EnemyMoveOnePixelRight */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_84FE_b5");
#endif
    func_84FE_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8500_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8500_b5");
#endif
    func_84FE_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8134_b5_body(int _entry) { /* EnemyIfMoveFailedRight */
    switch (_entry) {
        case 1: goto label_8169;
    }
label_8134:; /* EnemyIfMoveFailedRight */
    /* $8134: A6 */ nes_cpu_instruction_boundary(0x8134, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_8136:;
    /* $8136: B0 */ nes_cpu_instruction_boundary(0x8136, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_816D; }
label_8138:;
    /* $8138: 20 */ nes_cpu_instruction_boundary(0x8138, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3A; g_cpu.S--; func_80B0_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8138, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_813B:;
    /* $813B: 10 */ nes_cpu_instruction_boundary(0x813B, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_815E; }
label_813D:;
    /* $813D: BD */ nes_cpu_instruction_boundary(0x813D, 4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8140:;
    /* $8140: 30 */ nes_cpu_instruction_boundary(0x8140, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_8148; }
label_8142:; /* EnemyIfMoveFailedRight_bounce */
    /* $8142: 20 */ nes_cpu_instruction_boundary(0x8142, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x44; g_cpu.S--; func_81C7_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8142, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8145:;
    /* $8145: 4C */ nes_cpu_instruction_boundary(0x8145, 3); nes_cpu_instruction_boundary(0x8169, 2); func_8169_b5(); return;
label_8148:; /* EnemyIfMoveFailedRight_facingVertical */
    /* $8148: BD */ nes_cpu_instruction_boundary(0x8148, 4); g_cpu.A = nes_read((0x6B03 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_814B:;
    /* $814B: F0 */ nes_cpu_instruction_boundary(0x814B, 2); if (g_cpu.Z) {
    nes_cpu_instruction_boundary(0x8142, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8142;
    }
label_814D:;
    /* $814D: 10 */ nes_cpu_instruction_boundary(0x814D, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_8159; }
label_814F:;
    /* $814F: 18 */ nes_cpu_instruction_boundary(0x814F, 2); g_cpu.C = 0;
label_8150:;
    /* $8150: 7E */ nes_cpu_instruction_boundary(0x8150, 7); { uint16_t a=(0x0403 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8153:;
    /* $8153: 7E */ nes_cpu_instruction_boundary(0x8153, 7); { uint16_t a=(0x0407 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8156:;
    /* $8156: 4C */ nes_cpu_instruction_boundary(0x8156, 3); nes_cpu_instruction_boundary(0x8169, 2); func_8169_b5(); return;
label_8159:; /* EnemyIfMoveFailedRight_landOnRightWall */
    /* $8159: 20 */ nes_cpu_instruction_boundary(0x8159, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x5B; g_cpu.S--; func_81C0_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8159, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_815C:;
    /* $815C: F0 */ nes_cpu_instruction_boundary(0x815C, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8169; }
label_815E:; /* EnemyIfMoveFailedRight_movementStrings */
    /* $815E: B9 */ nes_cpu_instruction_boundary(0x815E, 4); g_cpu.A = nes_read((0x977B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8161:;
    /* $8161: 4A */ nes_cpu_instruction_boundary(0x8161, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8162:;
    /* $8162: 90 */ nes_cpu_instruction_boundary(0x8162, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8169; }
label_8164:;
    /* $8164: A9 */ nes_cpu_instruction_boundary(0x8164, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8166:;
    /* $8166: 20 */ nes_cpu_instruction_boundary(0x8166, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x68; g_cpu.S--; func_856B_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8166, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8169:; /* EnemyIfMoveFailedRight_abortLoop */
    /* $8169: A9 */ nes_cpu_instruction_boundary(0x8169, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_816B:;
    /* $816B: 85 */ nes_cpu_instruction_boundary(0x816B, 3); nes_write(0x66, g_cpu.A);
label_816D:; /* EnemyIfMoveFailedRight_RTS */
    /* $816D: 60 */ nes_cpu_instruction_boundary(0x816D, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8134_b5(void) { /* EnemyIfMoveFailedRight */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8134_b5");
#endif
    func_8134_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8169_b5(void) { /* EnemyIfMoveFailedRight_abortLoop */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8169_b5");
#endif
    func_8134_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_95AE_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95AE_b5");
#endif
label_95AE:;
    /* $95AE: 60 */ nes_cpu_instruction_boundary(0x95AE, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_95B1_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95B1_b5");
#endif
label_95B1:;
    /* $95B1: 60 */ nes_cpu_instruction_boundary(0x95B1, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_95B4_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95B4_b5");
#endif
label_95B4:;
    /* $95B4: 60 */ nes_cpu_instruction_boundary(0x95B4, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_95B7_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95B7_b5");
#endif
label_95B7:;
    /* $95B7: 60 */ nes_cpu_instruction_boundary(0x95B7, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_95BA_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95BA_b5");
#endif
label_95BA:;
    /* $95BA: 60 */ nes_cpu_instruction_boundary(0x95BA, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_80B0_b5(void) { /* LoadTableAt977B */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80B0_b5");
#endif
label_80B0:; /* LoadTableAt977B */
    /* $80B0: BC */ nes_cpu_instruction_boundary(0x80B0, 4); g_cpu.Y = nes_read((0x6B02 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_80B3:;
    /* $80B3: B9 */ nes_cpu_instruction_boundary(0x80B3, 4); g_cpu.A = nes_read((0x977B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_80B6:;
    /* $80B6: 0A */ nes_cpu_instruction_boundary(0x80B6, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_80B7:;
    /* $80B7: 60 */ nes_cpu_instruction_boundary(0x80B7, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_95A8_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95A8_b5");
#endif
label_95A8:;
    /* $95A8: 60 */ nes_cpu_instruction_boundary(0x95A8, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_81DA_b5(void) { /* EnemyIfMoveFailedHorizontal_Bounce_flipSpeed */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81DA_b5");
#endif
label_81DA:; /* EnemyIfMoveFailedHorizontal_Bounce_flipSpeed */
    /* $81DA: 20 */ nes_cpu_instruction_boundary(0x81DA, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDC; g_cpu.S--; func_81F6_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x81DA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_81DD:;
    /* $81DD: D0 */ nes_cpu_instruction_boundary(0x81DD, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_81F5; }
label_81DF:;
    /* $81DF: 20 */ nes_cpu_instruction_boundary(0x81DF, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE1; g_cpu.S--; func_80B0_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x81DF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_81E2:;
    /* $81E2: 38 */ nes_cpu_instruction_boundary(0x81E2, 2); g_cpu.C = 1;
label_81E3:;
    /* $81E3: 10 */ nes_cpu_instruction_boundary(0x81E3, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_81ED; }
label_81E5:;
    /* $81E5: A9 */ nes_cpu_instruction_boundary(0x81E5, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_81E7:;
    /* $81E7: FD */ nes_cpu_instruction_boundary(0x81E7, 4); { uint8_t m=nes_read((0x0407 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_81EA:;
    /* $81EA: 9D */ nes_cpu_instruction_boundary(0x81EA, 5); nes_write((0x0407 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_81ED:; /* EnemyIfMoveFailedHorizontal_Bounce_endIf_speedSubPixel */
    /* $81ED: A9 */ nes_cpu_instruction_boundary(0x81ED, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_81EF:;
    /* $81EF: FD */ nes_cpu_instruction_boundary(0x81EF, 4); { uint8_t m=nes_read((0x0403 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_81F2:;
    /* $81F2: 9D */ nes_cpu_instruction_boundary(0x81F2, 5); nes_write((0x0403 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_81F5:; /* EnemyIfMoveFailedHorizontal_Bounce_RTS */
    /* $81F5: 60 */ nes_cpu_instruction_boundary(0x81F5, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_820F_b5(void) { /* EnemyIfMoveFailedVertical_Bounce_flipSpeed */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_820F_b5");
#endif
label_820F:; /* EnemyIfMoveFailedVertical_Bounce_flipSpeed */
    /* $820F: 20 */ nes_cpu_instruction_boundary(0x820F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x11; g_cpu.S--; func_81F6_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x820F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8212:;
    /* $8212: D0 */ nes_cpu_instruction_boundary(0x8212, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_822A; }
label_8214:;
    /* $8214: 20 */ nes_cpu_instruction_boundary(0x8214, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x16; g_cpu.S--; func_80B0_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8214, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8217:;
    /* $8217: 38 */ nes_cpu_instruction_boundary(0x8217, 2); g_cpu.C = 1;
label_8218:;
    /* $8218: 10 */ nes_cpu_instruction_boundary(0x8218, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_8222; }
label_821A:;
    /* $821A: A9 */ nes_cpu_instruction_boundary(0x821A, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_821C:;
    /* $821C: FD */ nes_cpu_instruction_boundary(0x821C, 4); { uint8_t m=nes_read((0x0406 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_821F:;
    /* $821F: 9D */ nes_cpu_instruction_boundary(0x821F, 5); nes_write((0x0406 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8222:; /* EnemyIfMoveFailedVertical_Bounce_endIf_speedSubPixel */
    /* $8222: A9 */ nes_cpu_instruction_boundary(0x8222, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8224:;
    /* $8224: FD */ nes_cpu_instruction_boundary(0x8224, 4); { uint8_t m=nes_read((0x0402 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8227:;
    /* $8227: 9D */ nes_cpu_instruction_boundary(0x8227, 5); nes_write((0x0402 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_822A:; /* EnemyIfMoveFailedVertical_Bounce_RTS */
    /* $822A: 60 */ nes_cpu_instruction_boundary(0x822A, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9B48_b5(void) { /* RTS_Polyp_BANK5 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9B48_b5");
#endif
label_9B48:; /* RTS_Polyp_BANK5 */
    /* $9B48: 60 */ nes_cpu_instruction_boundary(0x9B48, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8B87_b5_body(int _entry) { /* UpdateDoor */
    switch (_entry) {
        case 1: goto label_8B9D;
        case 2: goto label_8BB1;
    }
label_8B87:; /* UpdateDoor */
    /* $8B87: 86 */ nes_cpu_instruction_boundary(0x8B87, 3); nes_write(0x4B, g_cpu.X);
label_8B89:;
    /* $8B89: BD */ nes_cpu_instruction_boundary(0x8B89, 4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8B8C:;
    /* $8B8C: 20 */ nes_cpu_instruction_boundary(0x8B8C, 6); /* inline_dispatch $C27C: 7 entries (bank=5) */
switch(g_cpu.A) {
  case 0: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x5C); nes_write(0x000D, 0xC4); g_cpu.A = 0xC4; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0xC45C, 57); func_C45C(); return;
  case 1: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x9D); nes_write(0x000D, 0x8B); g_cpu.A = 0x8B; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x8B9D, 57); func_8B9D_b5(); return;
  case 2: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xD5); nes_write(0x000D, 0x8B); g_cpu.A = 0x8B; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x8BD5, 57); func_8BD5_b5(); return;
  case 3: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x01); nes_write(0x000D, 0x8C); g_cpu.A = 0x8C; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x8C01, 57); func_8C01_b5(); return;
  case 4: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x84); nes_write(0x000D, 0x8C); g_cpu.A = 0x8C; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x8C84, 57); func_8C84_b5(); return;
  case 5: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xC6); nes_write(0x000D, 0x8C); g_cpu.A = 0x8C; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x8CC6, 57); func_8CC6_b5(); return;
  case 6: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xF0); nes_write(0x000D, 0x8C); g_cpu.A = 0x8C; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x8CF0, 57); func_8CF0_b5(); return;
  default: nes_log_inline_miss(0x8B8C, g_cpu.A); return;
}
label_8B9D:; /* UpdateDoor_Init */
    /* $8B9D: FE */ nes_cpu_instruction_boundary(0x8B9D, 7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8BA0:;
    /* $8BA0: A9 */ nes_cpu_instruction_boundary(0x8BA0, 2); g_cpu.A = 0x30; FLAG_NZ(g_cpu.A);
label_8BA2:;
    /* $8BA2: 20 */ nes_cpu_instruction_boundary(0x8BA2, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA4; g_cpu.S--; func_D2FA();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8BA2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8BA5:;
    /* $8BA5: 20 */ nes_cpu_instruction_boundary(0x8BA5, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA7; g_cpu.S--; func_8CFB_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8BA5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8BA8:;
    /* $8BA8: BC */ nes_cpu_instruction_boundary(0x8BA8, 4); g_cpu.Y = nes_read((0x0307 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_8BAB:;
    /* $8BAB: B9 */ nes_cpu_instruction_boundary(0x8BAB, 4); g_cpu.A = nes_read((0x8BD1 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8BAE:;
    /* $8BAE: 9D */ nes_cpu_instruction_boundary(0x8BAE, 5); nes_write((0x030F + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8BB1:; /* DrawDoor */
    /* $8BB1: BD */ nes_cpu_instruction_boundary(0x8BB1, 4); g_cpu.A = nes_read((0x0307 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8BB4:;
    /* $8BB4: C9 */ nes_cpu_instruction_boundary(0x8BB4, 2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_8BB6:;
    /* $8BB6: D0 */ nes_cpu_instruction_boundary(0x8BB6, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8BBA; }
label_8BB8:;
    /* $8BB8: A9 */ nes_cpu_instruction_boundary(0x8BB8, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8BBA:; /* DrawDoor_endIf_A */
    /* $8BBA: 09 */ nes_cpu_instruction_boundary(0x8BBA, 2); g_cpu.A |= 0xA0; FLAG_NZ(g_cpu.A);
label_8BBC:;
    /* $8BBC: 85 */ nes_cpu_instruction_boundary(0x8BBC, 3); nes_write(0x6B, g_cpu.A);
label_8BBE:;
    /* $8BBE: A9 */ nes_cpu_instruction_boundary(0x8BBE, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8BC0:;
    /* $8BC0: 9D */ nes_cpu_instruction_boundary(0x8BC0, 5); nes_write((0x030A + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8BC3:;
    /* $8BC3: 8A */ nes_cpu_instruction_boundary(0x8BC3, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8BC4:;
    /* $8BC4: 29 */ nes_cpu_instruction_boundary(0x8BC4, 2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_8BC6:;
    /* $8BC6: 49 */ nes_cpu_instruction_boundary(0x8BC6, 2); g_cpu.A ^= 0x10; FLAG_NZ(g_cpu.A);
label_8BC8:;
    /* $8BC8: 05 */ nes_cpu_instruction_boundary(0x8BC8, 3); g_cpu.A |= nes_read(0x6B); FLAG_NZ(g_cpu.A);
label_8BCA:;
    /* $8BCA: 85 */ nes_cpu_instruction_boundary(0x8BCA, 3); nes_write(0x6B, g_cpu.A);
label_8BCC:;
    /* $8BCC: A9 */ nes_cpu_instruction_boundary(0x8BCC, 2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_8BCE:;
    /* $8BCE: 4C */ nes_cpu_instruction_boundary(0x8BCE, 3); nes_cpu_instruction_boundary(0xDE47, 2); func_DE47(); return;
}

void func_8B87_b5(void) { /* UpdateDoor */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8B87_b5");
#endif
    func_8B87_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8B9D_b5(void) { /* UpdateDoor_Init */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8B9D_b5");
#endif
    func_8B87_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8BB1_b5(void) { /* DrawDoor */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8BB1_b5");
#endif
    func_8B87_b5_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_822B_b5(void) { /* LoadEnemyMovementPtr */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_822B_b5");
#endif
label_822B:; /* LoadEnemyMovementPtr */
    /* $822B: BD */ nes_cpu_instruction_boundary(0x822B, 4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_822E:;
    /* $822E: 10 */ nes_cpu_instruction_boundary(0x822E, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_8232; }
label_8230:;
    /* $8230: 4A */ nes_cpu_instruction_boundary(0x8230, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8231:;
    /* $8231: 4A */ nes_cpu_instruction_boundary(0x8231, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8232:; /* LoadEnemyMovementPtr_endIf_A */
    /* $8232: 4A */ nes_cpu_instruction_boundary(0x8232, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8233:;
    /* $8233: BD */ nes_cpu_instruction_boundary(0x8233, 4); g_cpu.A = nes_read((0x0408 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8236:;
    /* $8236: 2A */ nes_cpu_instruction_boundary(0x8236, 2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_8237:;
    /* $8237: 0A */ nes_cpu_instruction_boundary(0x8237, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8238:;
    /* $8238: A8 */ nes_cpu_instruction_boundary(0x8238, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8239:;
    /* $8239: B9 */ nes_cpu_instruction_boundary(0x8239, 4); g_cpu.A = nes_read((0x96DB + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_823C:;
    /* $823C: 85 */ nes_cpu_instruction_boundary(0x823C, 3); nes_write(0x81, g_cpu.A);
label_823E:;
    /* $823E: B9 */ nes_cpu_instruction_boundary(0x823E, 4); g_cpu.A = nes_read((0x96DC + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8241:;
    /* $8241: 85 */ nes_cpu_instruction_boundary(0x8241, 3); nes_write(0x82, g_cpu.A);
label_8243:;
    /* $8243: 60 */ nes_cpu_instruction_boundary(0x8243, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8312_b5(void) { /* EnemyGetDeltaY_RepeatPreviousUntilNoDeltaYThenTriggerResting_endIf_B */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8312_b5");
#endif
label_8312:; /* EnemyGetDeltaY_RepeatPreviousUntilNoDeltaYThenTriggerResting_endIf_B */
    /* $8312: 20 */ nes_cpu_instruction_boundary(0x8312, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x83; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x14; g_cpu.S--; func_81B1_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8312, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8315:;
    /* $8315: 4C */ nes_cpu_instruction_boundary(0x8315, 3); nes_cpu_instruction_boundary(0x82A2, 2); func_82A2_b5(); return;
}

void func_81B1_b5(void) { /* EnemyTriggerResting_AndClearEnAccelY */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81B1_b5");
#endif
label_81B1:; /* EnemyTriggerResting_AndClearEnAccelY */
    /* $81B1: 20 */ nes_cpu_instruction_boundary(0x81B1, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; func_81B8_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x81B1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_81B4:;
    /* $81B4: 9D */ nes_cpu_instruction_boundary(0x81B4, 5); nes_write((0x6AFE + g_cpu.X) & 0xFFFF, g_cpu.A);
label_81B7:;
    /* $81B7: 60 */ nes_cpu_instruction_boundary(0x81B7, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8563_b5(void) { /* GetOtherNameTableIndex */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8563_b5");
#endif
label_8563:; /* GetOtherNameTableIndex */
    /* $8563: BD */ nes_cpu_instruction_boundary(0x8563, 4); g_cpu.A = nes_read((0x6AFB + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8566:;
    /* $8566: 45 */ nes_cpu_instruction_boundary(0x8566, 3); g_cpu.A ^= nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_8568:;
    /* $8568: 29 */ nes_cpu_instruction_boundary(0x8568, 2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_856A:;
    /* $856A: 60 */ nes_cpu_instruction_boundary(0x856A, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_855A_b5(void) { /* SwitchEnemyNameTable */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_855A_b5");
#endif
label_855A:; /* SwitchEnemyNameTable */
    /* $855A: BD */ nes_cpu_instruction_boundary(0x855A, 4); g_cpu.A = nes_read((0x6AFB + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_855D:;
    /* $855D: 49 */ nes_cpu_instruction_boundary(0x855D, 2); g_cpu.A ^= 0x01; FLAG_NZ(g_cpu.A);
label_855F:;
    /* $855F: 9D */ nes_cpu_instruction_boundary(0x855F, 5); nes_write((0x6AFB + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8562:;
    /* $8562: 60 */ nes_cpu_instruction_boundary(0x8562, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_81FC_b5_body(int _entry) { /* EnemyIfMoveFailedVertical_Bounce */
    switch (_entry) {
        case 1: goto label_8206;
    }
label_81FC:; /* EnemyIfMoveFailedVertical_Bounce */
    /* $81FC: 20 */ nes_cpu_instruction_boundary(0x81FC, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFE; g_cpu.S--; func_81F6_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x81FC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_81FF:;
    /* $81FF: D0 */ nes_cpu_instruction_boundary(0x81FF, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0x81F5); return; }
label_8201:;
    /* $8201: A9 */ nes_cpu_instruction_boundary(0x8201, 2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_8203:;
    /* $8203: 20 */ nes_cpu_instruction_boundary(0x8203, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x05; g_cpu.S--; func_856B_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8203, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8206:; /* EnemyIfMoveFailedVertical_Bounce_flipSpeedAndAccel */
    /* $8206: BD */ nes_cpu_instruction_boundary(0x8206, 4); g_cpu.A = nes_read((0x6AFE + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8209:;
    /* $8209: 20 */ nes_cpu_instruction_boundary(0x8209, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0B; g_cpu.S--; func_C3D4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8209, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_820C:;
    /* $820C: 9D */ nes_cpu_instruction_boundary(0x820C, 5); nes_write((0x6AFE + g_cpu.X) & 0xFFFF, g_cpu.A);
label_820F:; /* EnemyIfMoveFailedVertical_Bounce_flipSpeed */
    /* $820F: 20 */ nes_cpu_instruction_boundary(0x820F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x11; g_cpu.S--; func_81F6_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x820F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8212:;
    /* $8212: D0 */ nes_cpu_instruction_boundary(0x8212, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_822A; }
label_8214:;
    /* $8214: 20 */ nes_cpu_instruction_boundary(0x8214, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x16; g_cpu.S--; func_80B0_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8214, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8217:;
    /* $8217: 38 */ nes_cpu_instruction_boundary(0x8217, 2); g_cpu.C = 1;
label_8218:;
    /* $8218: 10 */ nes_cpu_instruction_boundary(0x8218, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_8222; }
label_821A:;
    /* $821A: A9 */ nes_cpu_instruction_boundary(0x821A, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_821C:;
    /* $821C: FD */ nes_cpu_instruction_boundary(0x821C, 4); { uint8_t m=nes_read((0x0406 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_821F:;
    /* $821F: 9D */ nes_cpu_instruction_boundary(0x821F, 5); nes_write((0x0406 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8222:; /* EnemyIfMoveFailedVertical_Bounce_endIf_speedSubPixel */
    /* $8222: A9 */ nes_cpu_instruction_boundary(0x8222, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8224:;
    /* $8224: FD */ nes_cpu_instruction_boundary(0x8224, 4); { uint8_t m=nes_read((0x0402 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8227:;
    /* $8227: 9D */ nes_cpu_instruction_boundary(0x8227, 5); nes_write((0x0402 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_822A:; /* EnemyIfMoveFailedVertical_Bounce_RTS */
    /* $822A: 60 */ nes_cpu_instruction_boundary(0x822A, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_81FC_b5(void) { /* EnemyIfMoveFailedVertical_Bounce */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81FC_b5");
#endif
    func_81FC_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8206_b5(void) { /* EnemyIfMoveFailedVertical_Bounce_flipSpeedAndAccel */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8206_b5");
#endif
    func_81FC_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_856B_b5(void) { /* XorEnData05 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_856B_b5");
#endif
label_856B:; /* XorEnData05 */
    /* $856B: 5D */ nes_cpu_instruction_boundary(0x856B, 4); g_cpu.A ^= nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_856E:;
    /* $856E: 9D */ nes_cpu_instruction_boundary(0x856E, 5); nes_write((0x0405 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8571:;
    /* $8571: 60 */ nes_cpu_instruction_boundary(0x8571, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_81C7_b5_body(int _entry) { /* EnemyIfMoveFailedHorizontal_Bounce */
    switch (_entry) {
        case 1: goto label_81D1;
        case 2: goto label_81F5;
    }
label_81C7:; /* EnemyIfMoveFailedHorizontal_Bounce */
    /* $81C7: 20 */ nes_cpu_instruction_boundary(0x81C7, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC9; g_cpu.S--; func_81F6_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x81C7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_81CA:;
    /* $81CA: D0 */ nes_cpu_instruction_boundary(0x81CA, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_81F5; }
label_81CC:;
    /* $81CC: A9 */ nes_cpu_instruction_boundary(0x81CC, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_81CE:;
    /* $81CE: 20 */ nes_cpu_instruction_boundary(0x81CE, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD0; g_cpu.S--; func_856B_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x81CE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_81D1:; /* EnemyIfMoveFailedHorizontal_Bounce_flipSpeedAndAccel */
    /* $81D1: BD */ nes_cpu_instruction_boundary(0x81D1, 4); g_cpu.A = nes_read((0x6AFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_81D4:;
    /* $81D4: 20 */ nes_cpu_instruction_boundary(0x81D4, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD6; g_cpu.S--; func_C3D4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x81D4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_81D7:;
    /* $81D7: 9D */ nes_cpu_instruction_boundary(0x81D7, 5); nes_write((0x6AFF + g_cpu.X) & 0xFFFF, g_cpu.A);
label_81DA:; /* EnemyIfMoveFailedHorizontal_Bounce_flipSpeed */
    /* $81DA: 20 */ nes_cpu_instruction_boundary(0x81DA, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDC; g_cpu.S--; func_81F6_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x81DA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_81DD:;
    /* $81DD: D0 */ nes_cpu_instruction_boundary(0x81DD, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_81F5; }
label_81DF:;
    /* $81DF: 20 */ nes_cpu_instruction_boundary(0x81DF, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE1; g_cpu.S--; func_80B0_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x81DF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_81E2:;
    /* $81E2: 38 */ nes_cpu_instruction_boundary(0x81E2, 2); g_cpu.C = 1;
label_81E3:;
    /* $81E3: 10 */ nes_cpu_instruction_boundary(0x81E3, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_81ED; }
label_81E5:;
    /* $81E5: A9 */ nes_cpu_instruction_boundary(0x81E5, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_81E7:;
    /* $81E7: FD */ nes_cpu_instruction_boundary(0x81E7, 4); { uint8_t m=nes_read((0x0407 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_81EA:;
    /* $81EA: 9D */ nes_cpu_instruction_boundary(0x81EA, 5); nes_write((0x0407 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_81ED:; /* EnemyIfMoveFailedHorizontal_Bounce_endIf_speedSubPixel */
    /* $81ED: A9 */ nes_cpu_instruction_boundary(0x81ED, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_81EF:;
    /* $81EF: FD */ nes_cpu_instruction_boundary(0x81EF, 4); { uint8_t m=nes_read((0x0403 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_81F2:;
    /* $81F2: 9D */ nes_cpu_instruction_boundary(0x81F2, 5); nes_write((0x0403 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_81F5:; /* EnemyIfMoveFailedHorizontal_Bounce_RTS */
    /* $81F5: 60 */ nes_cpu_instruction_boundary(0x81F5, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_81C7_b5(void) { /* EnemyIfMoveFailedHorizontal_Bounce */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81C7_b5");
#endif
    func_81C7_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_81D1_b5(void) { /* EnemyIfMoveFailedHorizontal_Bounce_flipSpeedAndAccel */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81D1_b5");
#endif
    func_81C7_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_81F5_b5(void) { /* EnemyIfMoveFailedHorizontal_Bounce_RTS */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81F5_b5");
#endif
    func_81C7_b5_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_81C0_b5(void) { /* EnemyTriggerResting_AndClearEnAccelX */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81C0_b5");
#endif
label_81C0:; /* EnemyTriggerResting_AndClearEnAccelX */
    /* $81C0: 20 */ nes_cpu_instruction_boundary(0x81C0, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC2; g_cpu.S--; func_81B8_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x81C0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_81C3:;
    /* $81C3: 9D */ nes_cpu_instruction_boundary(0x81C3, 5); nes_write((0x6AFF + g_cpu.X) & 0xFFFF, g_cpu.A);
label_81C6:;
    /* $81C6: 60 */ nes_cpu_instruction_boundary(0x81C6, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8024_b5(void) { /* CommonJump_JumpEngine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8024_b5");
#endif
label_8024:; /* CommonJump_JumpEngine */
    /* $8024: 4C */ nes_cpu_instruction_boundary(0x8024, 3); nes_cpu_instruction_boundary(0xC27C, 2); func_C27C(); return;
}

void func_81F6_b5(void) { /* LoadBit5ofTableAt968B */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81F6_b5");
#endif
label_81F6:; /* LoadBit5ofTableAt968B */
    /* $81F6: 20 */ nes_cpu_instruction_boundary(0x81F6, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF8; g_cpu.S--; func_F74B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x81F6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_81F9:;
    /* $81F9: 29 */ nes_cpu_instruction_boundary(0x81F9, 2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_81FB:;
    /* $81FB: 60 */ nes_cpu_instruction_boundary(0x81FB, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_95C0_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95C0_b5");
#endif
label_95C0:;
    /* $95C0: 60 */ nes_cpu_instruction_boundary(0x95C0, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8BD5_b5(void) { /* UpdateDoor_Closed */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8BD5_b5");
#endif
label_8BD5:; /* UpdateDoor_Closed */
    /* $8BD5: BD */ nes_cpu_instruction_boundary(0x8BD5, 4); g_cpu.A = nes_read((0x030A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8BD8:;
    /* $8BD8: 29 */ nes_cpu_instruction_boundary(0x8BD8, 2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A);
label_8BDA:;
    /* $8BDA: F0 */ nes_cpu_instruction_boundary(0x8BDA, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0x8BB1); return; }
label_8BDC:;
    /* $8BDC: DE */ nes_cpu_instruction_boundary(0x8BDC, 7); { uint16_t a=(0x030F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8BDF:;
    /* $8BDF: D0 */ nes_cpu_instruction_boundary(0x8BDF, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0x8BB1); return; }
label_8BE1:;
    /* $8BE1: A9 */ nes_cpu_instruction_boundary(0x8BE1, 2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8BE3:;
    /* $8BE3: DD */ nes_cpu_instruction_boundary(0x8BE3, 4); { uint8_t m=nes_read((0x0307 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8BE6:;
    /* $8BE6: D0 */ nes_cpu_instruction_boundary(0x8BE6, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8BEE; }
label_8BE8:;
    /* $8BE8: AC */ nes_cpu_instruction_boundary(0x8BE8, 4); g_cpu.Y = nes_read(0x010B); FLAG_NZ(g_cpu.Y);
label_8BEB:;
    /* $8BEB: C8 */ nes_cpu_instruction_boundary(0x8BEB, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8BEC:;
    /* $8BEC: D0 */ nes_cpu_instruction_boundary(0x8BEC, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0x8BB1); return; }
label_8BEE:;
    /* $8BEE: 9D */ nes_cpu_instruction_boundary(0x8BEE, 5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8BF1:;
    /* $8BF1: A9 */ nes_cpu_instruction_boundary(0x8BF1, 2); g_cpu.A = 0x50; FLAG_NZ(g_cpu.A);
label_8BF3:;
    /* $8BF3: 9D */ nes_cpu_instruction_boundary(0x8BF3, 5); nes_write((0x030F + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8BF6:;
    /* $8BF6: A9 */ nes_cpu_instruction_boundary(0x8BF6, 2); g_cpu.A = 0x2C; FLAG_NZ(g_cpu.A);
label_8BF8:;
    /* $8BF8: 9D */ nes_cpu_instruction_boundary(0x8BF8, 5); nes_write((0x0305 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8BFB:;
    /* $8BFB: 38 */ nes_cpu_instruction_boundary(0x8BFB, 2); g_cpu.C = 1;
label_8BFC:;
    /* $8BFC: E9 */ nes_cpu_instruction_boundary(0x8BFC, 2); { uint8_t m=0x03; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8BFE:;
    /* $8BFE: 4C */ nes_cpu_instruction_boundary(0x8BFE, 3); nes_cpu_instruction_boundary(0x8C7E, 2); func_8C7E_b5(); return;
}

void func_8C01_b5_body(int _entry) { /* UpdateDoor_Open */
    switch (_entry) {
        case 1: goto label_8C71;
        case 2: goto label_8C61;
    }
label_8C01:; /* UpdateDoor_Open */
    /* $8C01: A5 */ nes_cpu_instruction_boundary(0x8C01, 3); g_cpu.A = nes_read(0x56); FLAG_NZ(g_cpu.A);
label_8C03:;
    /* $8C03: F0 */ nes_cpu_instruction_boundary(0x8C03, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8C1D; }
label_8C05:;
    /* $8C05: AD */ nes_cpu_instruction_boundary(0x8C05, 4); g_cpu.A = nes_read(0x030C); FLAG_NZ(g_cpu.A);
label_8C08:;
    /* $8C08: 5D */ nes_cpu_instruction_boundary(0x8C08, 4); g_cpu.A ^= nes_read((0x030C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8C0B:;
    /* $8C0B: 4A */ nes_cpu_instruction_boundary(0x8C0B, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8C0C:;
    /* $8C0C: B0 */ nes_cpu_instruction_boundary(0x8C0C, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8C1D; }
label_8C0E:;
    /* $8C0E: AD */ nes_cpu_instruction_boundary(0x8C0E, 4); g_cpu.A = nes_read(0x030E); FLAG_NZ(g_cpu.A);
label_8C11:;
    /* $8C11: 5D */ nes_cpu_instruction_boundary(0x8C11, 4); g_cpu.A ^= nes_read((0x030E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8C14:;
    /* $8C14: 30 */ nes_cpu_instruction_boundary(0x8C14, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_8C1D; }
label_8C16:;
    /* $8C16: A9 */ nes_cpu_instruction_boundary(0x8C16, 2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_8C18:;
    /* $8C18: 9D */ nes_cpu_instruction_boundary(0x8C18, 5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8C1B:;
    /* $8C1B: D0 */ nes_cpu_instruction_boundary(0x8C1B, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8C73; }
label_8C1D:;
    /* $8C1D: BD */ nes_cpu_instruction_boundary(0x8C1D, 4); g_cpu.A = nes_read((0x0306 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8C20:;
    /* $8C20: DD */ nes_cpu_instruction_boundary(0x8C20, 4); { uint8_t m=nes_read((0x0305 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8C23:;
    /* $8C23: 90 */ nes_cpu_instruction_boundary(0x8C23, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8C73; }
label_8C25:;
    /* $8C25: BD */ nes_cpu_instruction_boundary(0x8C25, 4); g_cpu.A = nes_read((0x030F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8C28:;
    /* $8C28: C9 */ nes_cpu_instruction_boundary(0x8C28, 2); { int r=g_cpu.A-0x50; g_cpu.C=(g_cpu.A>=0x50)?1:0; FLAG_NZ(r&0xFF); }
label_8C2A:;
    /* $8C2A: D0 */ nes_cpu_instruction_boundary(0x8C2A, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8C57; }
label_8C2C:;
    /* $8C2C: 20 */ nes_cpu_instruction_boundary(0x8C2C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2E; g_cpu.S--; func_8CF7_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8C2C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8C2F:;
    /* $8C2F: BD */ nes_cpu_instruction_boundary(0x8C2F, 4); g_cpu.A = nes_read((0x0307 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8C32:;
    /* $8C32: C9 */ nes_cpu_instruction_boundary(0x8C32, 2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_8C34:;
    /* $8C34: F0 */ nes_cpu_instruction_boundary(0x8C34, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8C57; }
label_8C36:;
    /* $8C36: C9 */ nes_cpu_instruction_boundary(0x8C36, 2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_8C38:;
    /* $8C38: F0 */ nes_cpu_instruction_boundary(0x8C38, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8C57; }
label_8C3A:;
    /* $8C3A: A9 */ nes_cpu_instruction_boundary(0x8C3A, 2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_8C3C:;
    /* $8C3C: 85 */ nes_cpu_instruction_boundary(0x8C3C, 3); nes_write(0x09, g_cpu.A);
label_8C3E:;
    /* $8C3E: BD */ nes_cpu_instruction_boundary(0x8C3E, 4); g_cpu.A = nes_read((0x030C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8C41:;
    /* $8C41: 85 */ nes_cpu_instruction_boundary(0x8C41, 3); nes_write(0x08, g_cpu.A);
label_8C43:;
    /* $8C43: A4 */ nes_cpu_instruction_boundary(0x8C43, 3); g_cpu.Y = nes_read(0x50); FLAG_NZ(g_cpu.Y);
label_8C45:;
    /* $8C45: 8A */ nes_cpu_instruction_boundary(0x8C45, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8C46:;
    /* $8C46: 20 */ nes_cpu_instruction_boundary(0x8C46, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x48; g_cpu.S--; func_C2C5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8C46, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8C49:;
    /* $8C49: 90 */ nes_cpu_instruction_boundary(0x8C49, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8C4C; }
label_8C4B:;
    /* $8C4B: 88 */ nes_cpu_instruction_boundary(0x8C4B, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8C4C:;
    /* $8C4C: 98 */ nes_cpu_instruction_boundary(0x8C4C, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8C4D:;
    /* $8C4D: 20 */ nes_cpu_instruction_boundary(0x8C4D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x4F; g_cpu.S--; func_DC1E();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8C4D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8C50:;
    /* $8C50: A9 */ nes_cpu_instruction_boundary(0x8C50, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8C52:;
    /* $8C52: 9D */ nes_cpu_instruction_boundary(0x8C52, 5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8C55:;
    /* $8C55: F0 */ nes_cpu_instruction_boundary(0x8C55, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8C73; }
label_8C57:;
    /* $8C57: A5 */ nes_cpu_instruction_boundary(0x8C57, 3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_8C59:;
    /* $8C59: 4A */ nes_cpu_instruction_boundary(0x8C59, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8C5A:;
    /* $8C5A: B0 */ nes_cpu_instruction_boundary(0x8C5A, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8C73; }
label_8C5C:;
    /* $8C5C: DE */ nes_cpu_instruction_boundary(0x8C5C, 7); { uint16_t a=(0x030F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C5F:;
    /* $8C5F: D0 */ nes_cpu_instruction_boundary(0x8C5F, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8C73; }
label_8C61:; /* DoorSubRoutine8C61 */
    /* $8C61: A9 */ nes_cpu_instruction_boundary(0x8C61, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8C63:;
    /* $8C63: 9D */ nes_cpu_instruction_boundary(0x8C63, 5); nes_write((0x030F + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8C66:;
    /* $8C66: 20 */ nes_cpu_instruction_boundary(0x8C66, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x68; g_cpu.S--; func_8CFB_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8C66, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8C69:;
    /* $8C69: A9 */ nes_cpu_instruction_boundary(0x8C69, 2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_8C6B:;
    /* $8C6B: 9D */ nes_cpu_instruction_boundary(0x8C6B, 5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8C6E:;
    /* $8C6E: 20 */ nes_cpu_instruction_boundary(0x8C6E, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x70; g_cpu.S--; func_8C76_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8C6E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8C71:; /* DoorSubRoutine8C71 */
    /* $8C71: A6 */ nes_cpu_instruction_boundary(0x8C71, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_8C73:; /* GotoDrawDoor */
    /* $8C73: 4C */ nes_cpu_instruction_boundary(0x8C73, 3); nes_cpu_instruction_boundary(0x8BB1, 2); func_8BB1_b5(); return;
}

void func_8C01_b5(void) { /* UpdateDoor_Open */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C01_b5");
#endif
    func_8C01_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8C71_b5(void) { /* DoorSubRoutine8C71 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C71_b5");
#endif
    func_8C01_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8C61_b5(void) { /* DoorSubRoutine8C61 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C61_b5");
#endif
    func_8C01_b5_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8C84_b5(void) { /* UpdateDoor_LetSamusIn */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C84_b5");
#endif
label_8C84:; /* UpdateDoor_LetSamusIn */
    /* $8C84: A5 */ nes_cpu_instruction_boundary(0x8C84, 3); g_cpu.A = nes_read(0x56); FLAG_NZ(g_cpu.A);
label_8C86:;
    /* $8C86: C9 */ nes_cpu_instruction_boundary(0x8C86, 2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_8C88:;
    /* $8C88: B0 */ nes_cpu_instruction_boundary(0x8C88, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8CC3; }
label_8C8A:;
    /* $8C8A: 20 */ nes_cpu_instruction_boundary(0x8C8A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; func_8CFB_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8C8A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8C8D:;
    /* $8C8D: 20 */ nes_cpu_instruction_boundary(0x8C8D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; func_8C76_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8C8D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8C90:;
    /* $8C90: A6 */ nes_cpu_instruction_boundary(0x8C90, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_8C92:;
    /* $8C92: A5 */ nes_cpu_instruction_boundary(0x8C92, 3); g_cpu.A = nes_read(0x91); FLAG_NZ(g_cpu.A);
label_8C94:;
    /* $8C94: F0 */ nes_cpu_instruction_boundary(0x8C94, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8CA7; }
label_8C96:;
    /* $8C96: 8A */ nes_cpu_instruction_boundary(0x8C96, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8C97:;
    /* $8C97: 20 */ nes_cpu_instruction_boundary(0x8C97, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; func_C2BF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8C97, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8C9A:;
    /* $8C9A: 45 */ nes_cpu_instruction_boundary(0x8C9A, 3); g_cpu.A ^= nes_read(0x91); FLAG_NZ(g_cpu.A);
label_8C9C:;
    /* $8C9C: 4A */ nes_cpu_instruction_boundary(0x8C9C, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8C9D:;
    /* $8C9D: 90 */ nes_cpu_instruction_boundary(0x8C9D, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8CA7; }
label_8C9F:;
    /* $8C9F: A5 */ nes_cpu_instruction_boundary(0x8C9F, 3); g_cpu.A = nes_read(0x76); FLAG_NZ(g_cpu.A);
label_8CA1:;
    /* $8CA1: 49 */ nes_cpu_instruction_boundary(0x8CA1, 2); g_cpu.A ^= 0x07; FLAG_NZ(g_cpu.A);
label_8CA3:;
    /* $8CA3: 85 */ nes_cpu_instruction_boundary(0x8CA3, 3); nes_write(0x76, g_cpu.A);
label_8CA5:;
    /* $8CA5: 85 */ nes_cpu_instruction_boundary(0x8CA5, 3); nes_write(0x1C, g_cpu.A);
label_8CA7:;
    /* $8CA7: FE */ nes_cpu_instruction_boundary(0x8CA7, 7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8CAA:;
    /* $8CAA: A9 */ nes_cpu_instruction_boundary(0x8CAA, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8CAC:;
    /* $8CAC: 85 */ nes_cpu_instruction_boundary(0x8CAC, 3); nes_write(0x91, g_cpu.A);
label_8CAE:;
    /* $8CAE: BD */ nes_cpu_instruction_boundary(0x8CAE, 4); g_cpu.A = nes_read((0x0307 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8CB1:;
    /* $8CB1: C9 */ nes_cpu_instruction_boundary(0x8CB1, 2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_8CB3:;
    /* $8CB3: D0 */ nes_cpu_instruction_boundary(0x8CB3, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8CC3; }
label_8CB5:;
    /* $8CB5: 8A */ nes_cpu_instruction_boundary(0x8CB5, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8CB6:;
    /* $8CB6: 20 */ nes_cpu_instruction_boundary(0x8CB6, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; func_C2C5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8CB6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8CB9:;
    /* $8CB9: B0 */ nes_cpu_instruction_boundary(0x8CB9, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8CC0; }
label_8CBB:;
    /* $8CBB: 20 */ nes_cpu_instruction_boundary(0x8CBB, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBD; g_cpu.S--; func_CC07();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8CBB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8CBE:;
    /* $8CBE: D0 */ nes_cpu_instruction_boundary(0x8CBE, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8CC3; }
label_8CC0:;
    /* $8CC0: 20 */ nes_cpu_instruction_boundary(0x8CC0, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC2; g_cpu.S--; func_CC03();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8CC0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8CC3:;
    /* $8CC3: 4C */ nes_cpu_instruction_boundary(0x8CC3, 3); nes_cpu_instruction_boundary(0x8C71, 2); func_8C71_b5(); return;
}

void func_8CC6_b5_body(int _entry) { /* UpdateDoor_Scroll */
    switch (_entry) {
        case 1: goto label_8CED;
        case 2: goto label_8CCF;
    }
label_8CC6:; /* UpdateDoor_Scroll */
    /* $8CC6: A5 */ nes_cpu_instruction_boundary(0x8CC6, 3); g_cpu.A = nes_read(0x56); FLAG_NZ(g_cpu.A);
label_8CC8:;
    /* $8CC8: C9 */ nes_cpu_instruction_boundary(0x8CC8, 2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_8CCA:;
    /* $8CCA: D0 */ nes_cpu_instruction_boundary(0x8CCA, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8CED; }
label_8CCC:;
    /* $8CCC: 8A */ nes_cpu_instruction_boundary(0x8CCC, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8CCD:;
    /* $8CCD: 49 */ nes_cpu_instruction_boundary(0x8CCD, 2); g_cpu.A ^= 0x10; FLAG_NZ(g_cpu.A);
label_8CCF:;
    /* $8CCF: AA */ nes_cpu_instruction_boundary(0x8CCF, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8CD0:;
    /* $8CD0: A9 */ nes_cpu_instruction_boundary(0x8CD0, 2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_8CD2:;
    /* $8CD2: 9D */ nes_cpu_instruction_boundary(0x8CD2, 5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8CD5:;
    /* $8CD5: A9 */ nes_cpu_instruction_boundary(0x8CD5, 2); g_cpu.A = 0x2C; FLAG_NZ(g_cpu.A);
label_8CD7:;
    /* $8CD7: 9D */ nes_cpu_instruction_boundary(0x8CD7, 5); nes_write((0x0305 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8CDA:;
    /* $8CDA: 38 */ nes_cpu_instruction_boundary(0x8CDA, 2); g_cpu.C = 1;
label_8CDB:;
    /* $8CDB: E9 */ nes_cpu_instruction_boundary(0x8CDB, 2); { uint8_t m=0x03; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8CDD:;
    /* $8CDD: 20 */ nes_cpu_instruction_boundary(0x8CDD, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDF; g_cpu.S--; func_D2FD();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8CDD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8CE0:;
    /* $8CE0: 20 */ nes_cpu_instruction_boundary(0x8CE0, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE2; g_cpu.S--; func_CBDA();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8CE0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8CE3:;
    /* $8CE3: 20 */ nes_cpu_instruction_boundary(0x8CE3, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE5; g_cpu.S--; func_CB73();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8CE3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8CE6:;
    /* $8CE6: A6 */ nes_cpu_instruction_boundary(0x8CE6, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_8CE8:;
    /* $8CE8: A9 */ nes_cpu_instruction_boundary(0x8CE8, 2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_8CEA:;
    /* $8CEA: 9D */ nes_cpu_instruction_boundary(0x8CEA, 5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8CED:; /* Goto2DrawDoor */
    /* $8CED: 4C */ nes_cpu_instruction_boundary(0x8CED, 3); nes_cpu_instruction_boundary(0x8BB1, 2); func_8BB1_b5(); return;
}

void func_8CC6_b5(void) { /* UpdateDoor_Scroll */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8CC6_b5");
#endif
    func_8CC6_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8CED_b5(void) { /* Goto2DrawDoor */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8CED_b5");
#endif
    func_8CC6_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8CCF_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8CCF_b5");
#endif
    func_8CC6_b5_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8CF0_b5(void) { /* UpdateDoor_LetSamusOut */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8CF0_b5");
#endif
label_8CF0:; /* UpdateDoor_LetSamusOut */
    /* $8CF0: A5 */ nes_cpu_instruction_boundary(0x8CF0, 3); g_cpu.A = nes_read(0x56); FLAG_NZ(g_cpu.A);
label_8CF2:;
    /* $8CF2: D0 */ nes_cpu_instruction_boundary(0x8CF2, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0x8CED); return; }
label_8CF4:;
    /* $8CF4: 4C */ nes_cpu_instruction_boundary(0x8CF4, 3); nes_cpu_instruction_boundary(0x8C61, 2); func_8C61_b5(); return;
}

void func_81B8_b5(void) { /* EnemyTriggerResting */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81B8_b5");
#endif
label_81B8:; /* EnemyTriggerResting */
    /* $81B8: A9 */ nes_cpu_instruction_boundary(0x81B8, 2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_81BA:;
    /* $81BA: 20 */ nes_cpu_instruction_boundary(0x81BA, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; func_F744();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x81BA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_81BD:;
    /* $81BD: A9 */ nes_cpu_instruction_boundary(0x81BD, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_81BF:;
    /* $81BF: 60 */ nes_cpu_instruction_boundary(0x81BF, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AAA3_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AAA3_b5");
#endif
label_AAA3:;
    /* $AAA3: 0E */ nes_cpu_instruction_boundary(0xAAA3, 6); { uint16_t a=0x040D; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AAA6:;
    /* $AAA6: 0D */ nes_cpu_instruction_boundary(0xAAA6, 4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_AAA9:;
    /* $AAA9: 0D */ nes_cpu_instruction_boundary(0xAAA9, 4); g_cpu.A |= nes_read(0x08FF); FLAG_NZ(g_cpu.A);
label_AAAC:;
    /* $AAAC: 0D */ nes_cpu_instruction_boundary(0xAAAC, 4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_AAAF:;
    /* $AAAF: 0D */ nes_cpu_instruction_boundary(0xAAAF, 4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_AAB2:;
    /* $AAB2: 0D */ nes_cpu_instruction_boundary(0xAAB2, 4); g_cpu.A |= nes_read(0x080D); FLAG_NZ(g_cpu.A);
label_AAB5:;
    /* $AAB5: 0D */ nes_cpu_instruction_boundary(0xAAB5, 4); g_cpu.A |= nes_read(0x0E0E); FLAG_NZ(g_cpu.A);
label_AAB8:;
    /* $AAB8: 0E */ nes_cpu_instruction_boundary(0xAAB8, 6); { uint16_t a=0x0E0E; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AABB:;
    /* $AABB: 0E */ nes_cpu_instruction_boundary(0xAABB, 6); { uint16_t a=0x080D; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AABE:;
    /* $AABE: 0D */ nes_cpu_instruction_boundary(0xAABE, 4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_AAC1:;
    /* $AAC1: 0D */ nes_cpu_instruction_boundary(0xAAC1, 4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_AAC4:;
    /* $AAC4: 0D */ nes_cpu_instruction_boundary(0xAAC4, 4); g_cpu.A |= nes_read(0xFF0D); FLAG_NZ(g_cpu.A);
label_AAC7:; /* Structure15_BANK5 */
    /* $AAC7: 04 */ nes_cpu_instruction_boundary(0xAAC7, 3); (void)nes_read(0x1C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AAC9:;
    /* $AAC9: 1C */ nes_cpu_instruction_boundary(0xAAC9, 4); (void)nes_read((0x1C1C + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AACC:;
    /* $AACC: 04 */ nes_cpu_instruction_boundary(0xAACC, 3); (void)nes_read(0x1C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AACE:;
    /* $AACE: 1C */ nes_cpu_instruction_boundary(0xAACE, 4); (void)nes_read((0x1C1C + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AAD1:;
    /* $AAD1: FF */ nes_cpu_instruction_boundary(0xAAD1, 7); { uint16_t a=(0x1D01 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AAD4:;
    /* $AAD4: 01 */ nes_cpu_instruction_boundary(0xAAD4, 6); g_cpu.A |= nes_read(nes_read16zp((0x1D + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AAD6:;
    /* $AAD6: 01 */ nes_cpu_instruction_boundary(0xAAD6, 6); g_cpu.A |= nes_read(nes_read16zp((0x1D + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AAD8:;
    /* $AAD8: FF */ nes_cpu_instruction_boundary(0xAAD8, 7); { uint16_t a=(0x1E04 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AADB:;
    /* $AADB: 1E */ nes_cpu_instruction_boundary(0xAADB, 7); { uint16_t a=(0x1E1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AADE:;
    /* $AADE: 04 */ nes_cpu_instruction_boundary(0xAADE, 3); (void)nes_read(0x1E); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AAE0:;
    /* $AAE0: 05 */ nes_cpu_instruction_boundary(0xAAE0, 3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_AAE2:;
    /* $AAE2: 1E */ nes_cpu_instruction_boundary(0xAAE2, 7); { uint16_t a=(0x1E04 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AAE5:;
    /* $AAE5: 05 */ nes_cpu_instruction_boundary(0xAAE5, 3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_AAE7:;
    /* $AAE7: 1E */ nes_cpu_instruction_boundary(0xAAE7, 7); { uint16_t a=(0x1E04 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AAEA:;
    /* $AAEA: 1E */ nes_cpu_instruction_boundary(0xAAEA, 7); { uint16_t a=(0x1E1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AAED:;
    /* $AAED: FF */ nes_cpu_instruction_boundary(0xAAED, 7); { uint16_t a=(0x1E08 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AAF0:;
    /* $AAF0: 1E */ nes_cpu_instruction_boundary(0xAAF0, 7); { uint16_t a=(0x1E1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AAF3:;
    /* $AAF3: 1E */ nes_cpu_instruction_boundary(0xAAF3, 7); { uint16_t a=(0x1E1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AAF6:;
    /* $AAF6: 1E */ nes_cpu_instruction_boundary(0xAAF6, 7); { uint16_t a=(0x1E08 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AAF9:;
    /* $AAF9: 09 */ nes_cpu_instruction_boundary(0xAAF9, 2); g_cpu.A |= 0x09; FLAG_NZ(g_cpu.A);
label_AAFB:;
    /* $AAFB: 09 */ nes_cpu_instruction_boundary(0xAAFB, 2); g_cpu.A |= 0x09; FLAG_NZ(g_cpu.A);
label_AAFD:;
    /* $AAFD: 09 */ nes_cpu_instruction_boundary(0xAAFD, 2); g_cpu.A |= 0x09; FLAG_NZ(g_cpu.A);
label_AAFF:;
    /* $AAFF: 1E */ nes_cpu_instruction_boundary(0xAAFF, 7); { uint16_t a=(0x1E08 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AB02:;
    /* $AB02: 1E */ nes_cpu_instruction_boundary(0xAB02, 7); { uint16_t a=(0x1E1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AB05:;
    /* $AB05: 1E */ nes_cpu_instruction_boundary(0xAB05, 7); { uint16_t a=(0x1E1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AB08:;
    /* $AB08: 1E */ nes_cpu_instruction_boundary(0xAB08, 7); { uint16_t a=(0x01FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AB0B:;
    /* $AB0B: 14 */ nes_cpu_instruction_boundary(0xAB0B, 4); (void)nes_read((0x01 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AB0D:;
    /* $AB0D: 05 */ nes_cpu_instruction_boundary(0xAB0D, 3); g_cpu.A |= nes_read(0x01); FLAG_NZ(g_cpu.A);
label_AB0F:;
    /* $AB0F: 14 */ nes_cpu_instruction_boundary(0xAB0F, 4); (void)nes_read((0xFF + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AB11:; /* Structure1A_BANK5 */
    /* $AB11: 01 */ nes_cpu_instruction_boundary(0xAB11, 6); g_cpu.A |= nes_read(nes_read16zp((0x04 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AB13:;
    /* $AB13: 01 */ nes_cpu_instruction_boundary(0xAB13, 6); g_cpu.A |= nes_read(nes_read16zp((0x04 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AB15:;
    /* $AB15: 01 */ nes_cpu_instruction_boundary(0xAB15, 6); g_cpu.A |= nes_read(nes_read16zp((0x04 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AB17:;
    /* $AB17: 01 */ nes_cpu_instruction_boundary(0xAB17, 6); g_cpu.A |= nes_read(nes_read16zp((0x04 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AB19:;
    /* $AB19: FF */ nes_cpu_instruction_boundary(0xAB19, 7); { uint16_t a=(0x1F01 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AB1C:;
    /* $AB1C: FF */ nes_cpu_instruction_boundary(0xAB1C, 7); { uint16_t a=(0x2004 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AB1F:;
    /* $AB1F: 20 */ nes_cpu_instruction_boundary(0xAB1F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xAB; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x21; g_cpu.S--; if (!nes_dispatch_call(0x2020, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAB1F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AB22:;
    /* $AB22: FF */ nes_cpu_instruction_boundary(0xAB22, 7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AB25:;
    /* $AB25: F0 */ nes_cpu_instruction_boundary(0xAB25, 2); if (g_cpu.Z) {
    nes_cpu_instruction_boundary(0xAB17, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AB17;
    }
label_AB27:;
    /* $AB27: F1 */ nes_cpu_instruction_boundary(0xAB27, 5); { uint8_t m=nes_read((nes_read16zp(0xF1) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AB29:;
    /* $AB29: F1 */ nes_cpu_instruction_boundary(0xAB29, 5); { uint8_t m=nes_read((nes_read16zp(0xF1) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AB2B:;
    /* $AB2B: A4 */ nes_cpu_instruction_boundary(0xAB2B, 3); g_cpu.Y = nes_read(0xFF); FLAG_NZ(g_cpu.Y);
label_AB2D:;
    /* $AB2D: A4 */ nes_cpu_instruction_boundary(0xAB2D, 3); g_cpu.Y = nes_read(0xFF); FLAG_NZ(g_cpu.Y);
label_AB2F:;
    /* $AB2F: FF */ nes_cpu_instruction_boundary(0xAB2F, 7); { uint16_t a=(0xFFA5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AB32:;
    /* $AB32: A5 */ nes_cpu_instruction_boundary(0xAB32, 3); g_cpu.A = nes_read(0x80); FLAG_NZ(g_cpu.A);
label_AB34:;
    /* $AB34: 81 */ nes_cpu_instruction_boundary(0xAB34, 6); nes_write(nes_read16zp((0x82 + g_cpu.X) & 0xFF), g_cpu.A);
label_AB36:;
    /* $AB36: 83 */ nes_cpu_instruction_boundary(0xAB36, 6); nes_write(nes_read16zp((0x45 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_AB38:;
    /* $AB38: 46 */ nes_cpu_instruction_boundary(0xAB38, 5); { uint16_t a=0x45; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_AB3A:;
    /* $AB3A: 46 */ nes_cpu_instruction_boundary(0xAB3A, 5); { uint16_t a=0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_AB3C:;
    /* $AB3C: FF */ nes_cpu_instruction_boundary(0xAB3C, 7); { uint16_t a=(0x5A59 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AB3F:;
    /* $AB3F: FF */ nes_cpu_instruction_boundary(0xAB3F, 7); { uint16_t a=(0x5AFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AB42:;
    /* $AB42: 5B */ nes_cpu_instruction_boundary(0xAB42, 7); { uint16_t a=(0x6160 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AB45:;
    /* $AB45: 62 */ nes_cpu_instruction_boundary(0xAB45, 2); /* ILLEGAL $62 — skip 1 */
label_AB46:;
    /* $AB46: 63 */ nes_cpu_instruction_boundary(0xAB46, 8); { uint16_t a=nes_read16zp((0x0C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AB48:;
    /* $AB48: 0D */ nes_cpu_instruction_boundary(0xAB48, 4); g_cpu.A |= nes_read(0x0F0E); FLAG_NZ(g_cpu.A);
label_AB4B:;
    /* $AB4B: EC */ nes_cpu_instruction_boundary(0xAB4B, 4); { uint8_t m=nes_read(0xEDFF); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_AB4E:;
    /* $AB4E: FF */ nes_cpu_instruction_boundary(0xAB4E, 7); { uint16_t a=(0xEEFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AB51:;
    /* $AB51: FF */ nes_cpu_instruction_boundary(0xAB51, 7); { uint16_t a=(0x1CEF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AB54:;
    /* $AB54: 1D */ nes_cpu_instruction_boundary(0xAB54, 4); g_cpu.A |= nes_read((0x1F1E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB57:;
    /* $AB57: 20 */ nes_cpu_instruction_boundary(0xAB57, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xAB; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x59; g_cpu.S--; if (!nes_dispatch_call(0x2221, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAB57, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AB5A:;
    /* $AB5A: 23 */ nes_cpu_instruction_boundary(0xAB5A, 8); { uint16_t a=nes_read16zp((0x25 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AB5C:;
    /* $AB5C: 25 */ nes_cpu_instruction_boundary(0xAB5C, 3); g_cpu.A &= nes_read(0x24); FLAG_NZ(g_cpu.A);
label_AB5E:;
    /* $AB5E: 24 */ nes_cpu_instruction_boundary(0xAB5E, 3); { uint8_t m=nes_read(0x26); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AB60:;
    /* $AB60: 27 */ nes_cpu_instruction_boundary(0xAB60, 5); { uint16_t a=0x28; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AB62:;
    /* $AB62: 29 */ nes_cpu_instruction_boundary(0xAB62, 2); g_cpu.A &= 0x2A; FLAG_NZ(g_cpu.A);
label_AB64:;
    /* $AB64: 2B */ nes_cpu_instruction_boundary(0xAB64, 2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AB66:;
    /* $AB66: 2D */ nes_cpu_instruction_boundary(0xAB66, 4); g_cpu.A &= nes_read(0x1918); FLAG_NZ(g_cpu.A);
label_AB69:;
    /* $AB69: 1A */ nes_cpu_instruction_boundary(0xAB69, 2); /* NOP */
label_AB6A:;
    /* $AB6A: 1B */ nes_cpu_instruction_boundary(0xAB6A, 7); { uint16_t a=(0xA0A0 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AB6D:;
    /* $AB6D: A0 */ nes_cpu_instruction_boundary(0xAB6D, 2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_AB6F:;
    /* $AB6F: A1 */ nes_cpu_instruction_boundary(0xAB6F, 6); g_cpu.A = nes_read(nes_read16zp((0xA1 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AB71:;
    /* $AB71: A1 */ nes_cpu_instruction_boundary(0xAB71, 6); g_cpu.A = nes_read(nes_read16zp((0xA1 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AB73:;
    /* $AB73: 10 */ nes_cpu_instruction_boundary(0xAB73, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xAB86); return; }
label_AB75:;
    /* $AB75: 12 */ nes_cpu_instruction_boundary(0xAB75, 2); /* ILLEGAL $12 — skip 1 */
label_AB76:;
    /* $AB76: 13 */ nes_cpu_instruction_boundary(0xAB76, 8); { uint16_t a=(nes_read16zp(0x04) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AB78:;
    /* $AB78: 05 */ nes_cpu_instruction_boundary(0xAB78, 3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_AB7A:;
    /* $AB7A: 07 */ nes_cpu_instruction_boundary(0xAB7A, 5); { uint16_t a=0xE0; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AB7C:;
    /* $AB7C: E1 */ nes_cpu_instruction_boundary(0xAB7C, 6); { uint8_t m=nes_read(nes_read16zp((0xE2 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AB7E:;
    /* $AB7E: E3 */ nes_cpu_instruction_boundary(0xAB7E, 8); { uint16_t a=nes_read16zp((0x70 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AB80:;
    /* $AB80: 71 */ nes_cpu_instruction_boundary(0xAB80, 5); { uint8_t m=nes_read((nes_read16zp(0x72) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AB82:;
    /* $AB82: 73 */ nes_cpu_instruction_boundary(0xAB82, 8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AB84:;
    /* $AB84: FF */ nes_cpu_instruction_boundary(0xAB84, 7); { uint16_t a=(0x4343 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AB87:;
    /* $AB87: 44 */ nes_cpu_instruction_boundary(0xAB87, 3); (void)nes_read(0x44); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AB89:;
    /* $AB89: 44 */ nes_cpu_instruction_boundary(0xAB89, 3); (void)nes_read(0x44); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AB8B:;
    /* $AB8B: 14 */ nes_cpu_instruction_boundary(0xAB8B, 4); (void)nes_read((0x15 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AB8D:;
    /* $AB8D: 16 */ nes_cpu_instruction_boundary(0xAB8D, 6); { uint16_t a=(0x17 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AB8F:;
    /* $AB8F: 88 */ nes_cpu_instruction_boundary(0xAB8F, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AB90:;
    /* $AB90: 89 */ nes_cpu_instruction_boundary(0xAB90, 2); /* NOP */
label_AB92:;
    /* $AB92: 8B */ nes_cpu_instruction_boundary(0xAB92, 2); /* ILLEGAL $8B — skip 2 */
label_AB94:;
    /* $AB94: E9 */ nes_cpu_instruction_boundary(0xAB94, 2); { uint8_t m=0xEA; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AB96:;
    /* $AB96: EB */ nes_cpu_instruction_boundary(0xAB96, 2); { uint8_t m=0x78; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AB98:;
    /* $AB98: 79 */ nes_cpu_instruction_boundary(0xAB98, 4); { uint8_t m=nes_read((0x7B7A + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AB9B:;
    /* $AB9B: 55 */ nes_cpu_instruction_boundary(0xAB9B, 4); g_cpu.A ^= nes_read((0x56 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AB9D:;
    /* $AB9D: 57 */ nes_cpu_instruction_boundary(0xAB9D, 6); { uint16_t a=(0x58 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AB9F:;
    /* $AB9F: 90 */ nes_cpu_instruction_boundary(0xAB9F, 2); if (!g_cpu.C) {
    nes_cpu_instruction_boundary(0xAB32, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AB32;
    }
label_ABA1:;
    /* $ABA1: 92 */ nes_cpu_instruction_boundary(0xABA1, 2); /* ILLEGAL $92 — skip 1 */
label_ABA2:;
    /* $ABA2: 93 */ nes_cpu_instruction_boundary(0xABA2, 6); /* ILLEGAL $93 — skip 2 */
label_ABA4:;
    /* $ABA4: C8 */ nes_cpu_instruction_boundary(0xABA4, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_ABA5:;
    /* $ABA5: C9 */ nes_cpu_instruction_boundary(0xABA5, 2); { int r=g_cpu.A-0xCA; g_cpu.C=(g_cpu.A>=0xCA)?1:0; FLAG_NZ(r&0xFF); }
label_ABA7:;
    /* $ABA7: 11 */ nes_cpu_instruction_boundary(0xABA7, 5); g_cpu.A |= nes_read((nes_read16zp(0x11) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ABA9:;
    /* $ABA9: 11 */ nes_cpu_instruction_boundary(0xABA9, 5); g_cpu.A |= nes_read((nes_read16zp(0x04) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ABAB:;
    /* $ABAB: 11 */ nes_cpu_instruction_boundary(0xABAB, 5); g_cpu.A |= nes_read((nes_read16zp(0x11) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ABAD:;
    /* $ABAD: 11 */ nes_cpu_instruction_boundary(0xABAD, 5); g_cpu.A |= nes_read((nes_read16zp(0x11) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ABAF:;
    /* $ABAF: FF */ nes_cpu_instruction_boundary(0xABAF, 7); { uint16_t a=(0x2008 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ABB2:;
    /* $ABB2: 22 */ nes_cpu_instruction_boundary(0xABB2, 2); /* ILLEGAL $22 — skip 1 */
label_ABB3:;
    /* $ABB3: 22 */ nes_cpu_instruction_boundary(0xABB3, 2); /* ILLEGAL $22 — skip 1 */
label_ABB4:;
    /* $ABB4: 22 */ nes_cpu_instruction_boundary(0xABB4, 2); /* ILLEGAL $22 — skip 1 */
label_ABB5:;
    /* $ABB5: 22 */ nes_cpu_instruction_boundary(0xABB5, 2); /* ILLEGAL $22 — skip 1 */
label_ABB6:;
    /* $ABB6: 22 */ nes_cpu_instruction_boundary(0xABB6, 2); /* ILLEGAL $22 — skip 1 */
label_ABB7:;
    /* $ABB7: 22 */ nes_cpu_instruction_boundary(0xABB7, 2); /* ILLEGAL $22 — skip 1 */
label_ABB8:;
    /* $ABB8: 22 */ nes_cpu_instruction_boundary(0xABB8, 2); /* ILLEGAL $22 — skip 1 */
label_ABB9:;
    /* $ABB9: FF */ nes_cpu_instruction_boundary(0xABB9, 7); { uint16_t a=(0x1F01 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ABBC:;
    /* $ABBC: FF */ nes_cpu_instruction_boundary(0xABBC, 7); { uint16_t a=(0x2101 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ABBF:;
    /* $ABBF: 01 */ nes_cpu_instruction_boundary(0xABBF, 6); g_cpu.A |= nes_read(nes_read16zp((0x21 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ABC1:;
    /* $ABC1: 01 */ nes_cpu_instruction_boundary(0xABC1, 6); g_cpu.A |= nes_read(nes_read16zp((0x21 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ABC3:;
    /* $ABC3: FF */ nes_cpu_instruction_boundary(0xABC3, 7); { uint16_t a=(0x2308 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ABC6:;
    /* $ABC6: 23 */ nes_cpu_instruction_boundary(0xABC6, 8); { uint16_t a=nes_read16zp((0x23 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_ABC8:;
    /* $ABC8: 23 */ nes_cpu_instruction_boundary(0xABC8, 8); { uint16_t a=nes_read16zp((0x23 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_ABCA:;
    /* $ABCA: 23 */ nes_cpu_instruction_boundary(0xABCA, 8); { uint16_t a=nes_read16zp((0x23 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_ABCC:;
    /* $ABCC: 23 */ nes_cpu_instruction_boundary(0xABCC, 8); { uint16_t a=nes_read16zp((0x08 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_ABCE:;
    /* $ABCE: 23 */ nes_cpu_instruction_boundary(0xABCE, 8); { uint16_t a=nes_read16zp((0x24 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_ABD0:;
    /* $ABD0: 24 */ nes_cpu_instruction_boundary(0xABD0, 3); { uint8_t m=nes_read(0x24); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_ABD2:;
    /* $ABD2: 24 */ nes_cpu_instruction_boundary(0xABD2, 3); { uint8_t m=nes_read(0x24); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_ABD4:;
    /* $ABD4: 24 */ nes_cpu_instruction_boundary(0xABD4, 3); { uint8_t m=nes_read(0x23); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_ABD6:;
    /* $ABD6: 08 */ nes_cpu_instruction_boundary(0xABD6, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_ABD7:;
    /* $ABD7: 23 */ nes_cpu_instruction_boundary(0xABD7, 8); { uint16_t a=nes_read16zp((0x23 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_ABD9:;
    /* $ABD9: 23 */ nes_cpu_instruction_boundary(0xABD9, 8); { uint16_t a=nes_read16zp((0x23 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_ABDB:;
    /* $ABDB: 23 */ nes_cpu_instruction_boundary(0xABDB, 8); { uint16_t a=nes_read16zp((0x23 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_ABDD:;
    /* $ABDD: 23 */ nes_cpu_instruction_boundary(0xABDD, 8); { uint16_t a=nes_read16zp((0x23 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_ABDF:;
    /* $ABDF: FF */ nes_cpu_instruction_boundary(0xABDF, 7); { uint16_t a=(0x2301 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ABE2:;
    /* $ABE2: 01 */ nes_cpu_instruction_boundary(0xABE2, 6); g_cpu.A |= nes_read(nes_read16zp((0x23 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ABE4:;
    /* $ABE4: 01 */ nes_cpu_instruction_boundary(0xABE4, 6); g_cpu.A |= nes_read(nes_read16zp((0x23 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ABE6:;
    /* $ABE6: 01 */ nes_cpu_instruction_boundary(0xABE6, 6); g_cpu.A |= nes_read(nes_read16zp((0x23 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ABE8:;
    /* $ABE8: FF */ nes_cpu_instruction_boundary(0xABE8, 7); { uint16_t a=(0x2304 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ABEB:;
    /* $ABEB: 23 */ nes_cpu_instruction_boundary(0xABEB, 8); { uint16_t a=nes_read16zp((0x23 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_ABED:;
    /* $ABED: 23 */ nes_cpu_instruction_boundary(0xABED, 8); { uint16_t a=nes_read16zp((0x04 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_ABEF:;
    /* $ABEF: 23 */ nes_cpu_instruction_boundary(0xABEF, 8); { uint16_t a=nes_read16zp((0x24 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_ABF1:;
    /* $ABF1: 24 */ nes_cpu_instruction_boundary(0xABF1, 3); { uint8_t m=nes_read(0x23); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_ABF3:;
    /* $ABF3: 04 */ nes_cpu_instruction_boundary(0xABF3, 3); (void)nes_read(0x23); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ABF5:;
    /* $ABF5: 24 */ nes_cpu_instruction_boundary(0xABF5, 3); { uint8_t m=nes_read(0x24); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_ABF7:;
    /* $ABF7: 23 */ nes_cpu_instruction_boundary(0xABF7, 8); { uint16_t a=nes_read16zp((0x04 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_ABF9:;
    /* $ABF9: 23 */ nes_cpu_instruction_boundary(0xABF9, 8); { uint16_t a=nes_read16zp((0x23 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_ABFB:;
    /* $ABFB: 23 */ nes_cpu_instruction_boundary(0xABFB, 8); { uint16_t a=nes_read16zp((0x23 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_ABFD:;
    /* $ABFD: FF */ nes_cpu_instruction_boundary(0xABFD, 7); { uint16_t a=(0x2501 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AC00:;
    /* $AC00: FF */ nes_cpu_instruction_boundary(0xAC00, 7); { uint16_t a=(0x2601 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AC03:;
    /* $AC03: 01 */ nes_cpu_instruction_boundary(0xAC03, 6); g_cpu.A |= nes_read(nes_read16zp((0x26 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AC05:;
    /* $AC05: 01 */ nes_cpu_instruction_boundary(0xAC05, 6); g_cpu.A |= nes_read(nes_read16zp((0x26 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AC07:;
    /* $AC07: 01 */ nes_cpu_instruction_boundary(0xAC07, 6); g_cpu.A |= nes_read(nes_read16zp((0x26 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AC09:;
    /* $AC09: FF */ nes_cpu_instruction_boundary(0xAC09, 7); { uint16_t a=(0x2703 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AC0C:;
    /* $AC0C: 27 */ nes_cpu_instruction_boundary(0xAC0C, 5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AC0E:;
    /* $AC0E: FF */ nes_cpu_instruction_boundary(0xAC0E, 7); { uint16_t a=(0x2803 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AC11:;
    /* $AC11: 28 */ nes_cpu_instruction_boundary(0xAC11, 4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AC12:;
    /* $AC12: 28 */ nes_cpu_instruction_boundary(0xAC12, 4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AC13:;
    /* $AC13: FF */ nes_cpu_instruction_boundary(0xAC13, 7); { uint16_t a=(0x1308 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AC16:;
    /* $AC16: 13 */ nes_cpu_instruction_boundary(0xAC16, 8); { uint16_t a=(nes_read16zp(0x13) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AC18:;
    /* $AC18: 13 */ nes_cpu_instruction_boundary(0xAC18, 8); { uint16_t a=(nes_read16zp(0x13) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AC1A:;
    /* $AC1A: 13 */ nes_cpu_instruction_boundary(0xAC1A, 8); { uint16_t a=(nes_read16zp(0x13) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AC1C:;
    /* $AC1C: 13 */ nes_cpu_instruction_boundary(0xAC1C, 8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AC1E:;
    /* $AC1E: 01 */ nes_cpu_instruction_boundary(0xAC1E, 6); g_cpu.A |= nes_read(nes_read16zp((0x13 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AC20:;
    /* $AC20: 01 */ nes_cpu_instruction_boundary(0xAC20, 6); g_cpu.A |= nes_read(nes_read16zp((0x13 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AC22:;
    /* $AC22: 01 */ nes_cpu_instruction_boundary(0xAC22, 6); g_cpu.A |= nes_read(nes_read16zp((0x13 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AC24:;
    /* $AC24: 01 */ nes_cpu_instruction_boundary(0xAC24, 6); g_cpu.A |= nes_read(nes_read16zp((0x13 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AC26:;
    /* $AC26: FF */ nes_cpu_instruction_boundary(0xAC26, 7); { uint16_t a=(0x0C04 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AC29:;
    /* $AC29: 0C */ nes_cpu_instruction_boundary(0xAC29, 4); (void)nes_read(0x0C0C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AC2C:;
    /* $AC2C: 04 */ nes_cpu_instruction_boundary(0xAC2C, 3); (void)nes_read(0x0D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AC2E:;
    /* $AC2E: 0D */ nes_cpu_instruction_boundary(0xAC2E, 4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_AC31:;
    /* $AC31: FF */ nes_cpu_instruction_boundary(0xAC31, 7); { uint16_t a=(0xF1F1 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AC34:;
    /* $AC34: F1 */ nes_cpu_instruction_boundary(0xAC34, 5); { uint8_t m=nes_read((nes_read16zp(0xF1) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AC36:;
    /* $AC36: FF */ nes_cpu_instruction_boundary(0xAC36, 7); { uint16_t a=(0xF0FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AC39:;
    /* $AC39: F0 */ nes_cpu_instruction_boundary(0xAC39, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AC9F; }
label_AC3B:;
    /* $AC3B: 64 */ nes_cpu_instruction_boundary(0xAC3B, 3); (void)nes_read(0x64); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AC3D:;
    /* $AC3D: 64 */ nes_cpu_instruction_boundary(0xAC3D, 3); (void)nes_read(0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AC3F:;
    /* $AC3F: FF */ nes_cpu_instruction_boundary(0xAC3F, 7); { uint16_t a=(0x6464 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AC42:;
    /* $AC42: A4 */ nes_cpu_instruction_boundary(0xAC42, 3); g_cpu.Y = nes_read(0xFF); FLAG_NZ(g_cpu.Y);
label_AC44:;
    /* $AC44: A4 */ nes_cpu_instruction_boundary(0xAC44, 3); g_cpu.Y = nes_read(0xFF); FLAG_NZ(g_cpu.Y);
label_AC46:;
    /* $AC46: FF */ nes_cpu_instruction_boundary(0xAC46, 7); { uint16_t a=(0xFFA5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AC49:;
    /* $AC49: A5 */ nes_cpu_instruction_boundary(0xAC49, 3); g_cpu.A = nes_read(0xA0); FLAG_NZ(g_cpu.A);
label_AC4B:;
    /* $AC4B: A0 */ nes_cpu_instruction_boundary(0xAC4B, 2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_AC4D:;
    /* $AC4D: A0 */ nes_cpu_instruction_boundary(0xAC4D, 2); g_cpu.Y = 0xA1; FLAG_NZ(g_cpu.Y);
label_AC4F:;
    /* $AC4F: A1 */ nes_cpu_instruction_boundary(0xAC4F, 6); g_cpu.A = nes_read(nes_read16zp((0xA1 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AC51:;
    /* $AC51: A1 */ nes_cpu_instruction_boundary(0xAC51, 6); g_cpu.A = nes_read(nes_read16zp((0x4F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AC53:;
    /* $AC53: 4F */ nes_cpu_instruction_boundary(0xAC53, 6); { uint16_t a=0x4F4F; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AC56:;
    /* $AC56: 84 */ nes_cpu_instruction_boundary(0xAC56, 3); nes_write(0x85, g_cpu.Y);
label_AC58:;
    /* $AC58: 86 */ nes_cpu_instruction_boundary(0xAC58, 3); nes_write(0x87, g_cpu.X);
label_AC5A:;
    /* $AC5A: 88 */ nes_cpu_instruction_boundary(0xAC5A, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AC5B:;
    /* $AC5B: 89 */ nes_cpu_instruction_boundary(0xAC5B, 2); /* NOP */
label_AC5D:;
    /* $AC5D: 8B */ nes_cpu_instruction_boundary(0xAC5D, 2); /* ILLEGAL $8B — skip 2 */
label_AC5F:;
    /* $AC5F: 81 */ nes_cpu_instruction_boundary(0xAC5F, 6); nes_write(nes_read16zp((0x82 + g_cpu.X) & 0xFF), g_cpu.A);
label_AC61:;
    /* $AC61: 83 */ nes_cpu_instruction_boundary(0xAC61, 6); nes_write(nes_read16zp((0xFF + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_AC63:;
    /* $AC63: FF */ nes_cpu_instruction_boundary(0xAC63, 7); { uint16_t a=(0xBABA + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AC66:;
    /* $AC66: BB */ nes_cpu_instruction_boundary(0xAC66, 4); /* ILLEGAL $BB — skip 3 */
label_AC69:;
    /* $AC69: BB */ nes_cpu_instruction_boundary(0xAC69, 4); /* ILLEGAL $BB — skip 3 */
label_AC6C:;
    /* $AC6C: 12 */ nes_cpu_instruction_boundary(0xAC6C, 2); /* ILLEGAL $12 — skip 1 */
label_AC6D:;
    /* $AC6D: 13 */ nes_cpu_instruction_boundary(0xAC6D, 8); { uint16_t a=(nes_read16zp(0x04) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AC6F:;
    /* $AC6F: 05 */ nes_cpu_instruction_boundary(0xAC6F, 3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_AC71:;
    /* $AC71: 07 */ nes_cpu_instruction_boundary(0xAC71, 5); { uint16_t a=0x14; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AC73:;
    /* $AC73: 15 */ nes_cpu_instruction_boundary(0xAC73, 4); g_cpu.A |= nes_read((0x16 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AC75:;
    /* $AC75: 17 */ nes_cpu_instruction_boundary(0xAC75, 6); { uint16_t a=(0x1C + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AC77:;
    /* $AC77: 1D */ nes_cpu_instruction_boundary(0xAC77, 4); g_cpu.A |= nes_read((0x1F1E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AC7A:;
    /* $AC7A: 09 */ nes_cpu_instruction_boundary(0xAC7A, 2); g_cpu.A |= 0x09; FLAG_NZ(g_cpu.A);
label_AC7C:;
    /* $AC7C: 09 */ nes_cpu_instruction_boundary(0xAC7C, 2); g_cpu.A |= 0x09; FLAG_NZ(g_cpu.A);
label_AC7E:;
    /* $AC7E: 0C */ nes_cpu_instruction_boundary(0xAC7E, 4); (void)nes_read(0x0E0D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AC81:;
    /* $AC81: 0F */ nes_cpu_instruction_boundary(0xAC81, 6); { uint16_t a=0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AC84:;
    /* $AC84: 59 */ nes_cpu_instruction_boundary(0xAC84, 4); g_cpu.A ^= nes_read((0xFF5A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AC87:;
    /* $AC87: FF */ nes_cpu_instruction_boundary(0xAC87, 7); { uint16_t a=(0x5B5A + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AC8A:;
    /* $AC8A: 51 */ nes_cpu_instruction_boundary(0xAC8A, 5); g_cpu.A ^= nes_read((nes_read16zp(0x52) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AC8C:;
    /* $AC8C: 53 */ nes_cpu_instruction_boundary(0xAC8C, 8); { uint16_t a=(nes_read16zp(0x54) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AC8E:;
    /* $AC8E: 55 */ nes_cpu_instruction_boundary(0xAC8E, 4); g_cpu.A ^= nes_read((0x56 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AC90:;
    /* $AC90: 57 */ nes_cpu_instruction_boundary(0xAC90, 6); { uint16_t a=(0x58 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AC92:;
    /* $AC92: EC */ nes_cpu_instruction_boundary(0xAC92, 4); { uint8_t m=nes_read(0xEDFF); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_AC95:;
    /* $AC95: FF */ nes_cpu_instruction_boundary(0xAC95, 7); { uint16_t a=(0xEEFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AC98:;
    /* $AC98: FF */ nes_cpu_instruction_boundary(0xAC98, 7); { uint16_t a=(0x45EF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AC9B:;
    /* $AC9B: 46 */ nes_cpu_instruction_boundary(0xAC9B, 5); { uint16_t a=0x45; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_AC9D:;
    /* $AC9D: 46 */ nes_cpu_instruction_boundary(0xAC9D, 5); { uint16_t a=0x4B; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_AC9F:;
    /* $AC9F: 4C */ nes_cpu_instruction_boundary(0xAC9F, 3); nes_cpu_instruction_boundary(0x504D, 2); call_by_address_tail(0x504D, -1); return;
label_ACA2:; return;
label_ACA5:; return;
label_ACA8:; return;
label_ACAA:; return;
label_ACAB:; return;
label_ACAC:; return;
label_ACAD:; return;
label_ACAE:; return;
label_ACB0:; return;
label_ACB1:; return;
label_ACB3:; return;
label_ACB5:; return;
label_ACB7:; return;
label_ACB9:; return;
label_ACBB:; return;
label_ACBD:; return;
label_ACBF:; return;
label_ACC1:; return;
label_ACC3:; return;
label_ACC5:; return;
label_ACC7:; return;
label_ACCA:; return;
label_ACCB:; return;
label_ACCD:; return;
label_ACCF:; return;
label_ACD1:; return;
label_ACD3:; return;
label_ACD5:; return;
label_ACD8:; return;
label_ACDA:; return;
label_ACDD:; return;
label_ACE0:; return;
label_ACE2:; return;
label_ACE4:; return;
label_ACE6:; return;
label_ACE8:; return;
label_ACEA:; return;
label_ACEC:; return;
label_ACEE:; return;
label_ACF0:; return;
label_ACF2:; return;
label_ACF5:; return;
label_ACF8:; return;
label_ACFB:; return;
label_ACFC:; return;
label_ACFF:; return;
label_AD02:; return;
label_AD03:; return;
label_AD06:; return;
label_AD09:; return;
label_AD0C:; return;
label_AD0F:; return;
label_AD12:; return;
label_AD15:; return;
label_AD18:; return;
label_AD1B:; return;
label_AD1D:; return;
label_AD20:; return;
label_AD22:; return;
label_AD25:; return;
label_AD28:; return;
label_AD2A:; return;
label_AD2B:; return;
label_AD2C:; return;
label_AD2F:; return;
label_AD31:; return;
label_AD33:; return;
label_AD35:; return;
label_AD37:; return;
label_AD39:; return;
label_AD3B:; return;
label_AD3E:; return;
label_AD41:; return;
label_AD42:; return;
label_AD43:; return;
label_AD44:; return;
label_AD45:; return;
label_AD46:; return;
label_AD47:; return;
label_AD4A:; return;
label_AD4D:; return;
label_AD4E:; return;
label_AD50:; return;
label_AD52:; return;
label_AD54:; return;
label_AD56:; return;
label_AD58:; return;
label_AD5A:; return;
label_AD5C:; return;
label_AD5E:; return;
label_AD60:; return;
label_AD63:; return;
label_AD66:; return;
label_AD68:; return;
label_AD6A:; return;
label_AD6D:; return;
label_AD6E:; return;
label_AD70:; return;
label_AD73:; return;
label_AD76:; return;
label_AD77:; return;
label_AD79:; return;
label_AD7B:; return;
label_AD7E:; return;
label_AD80:; return;
label_AD81:; return;
label_AD83:; return;
label_AD85:; return;
label_AD87:; return;
label_AD89:; return;
label_AD8B:; return;
label_AD8C:; return;
label_AD8F:; return;
label_AD90:; return;
label_AD93:; return;
label_AD96:; return;
label_AD99:; return;
label_AD9A:; return;
label_AD9C:; return;
label_AD9F:; return;
label_ADA2:; return;
label_ADA3:; return;
label_ADA6:; return;
label_ADA8:; return;
label_ADAA:; return;
label_ADAD:; return;
label_ADAE:; return;
label_ADB1:; return;
label_ADB4:; return;
label_ADB7:; return;
label_ADB9:; return;
label_ADBB:; return;
label_ADBE:; return;
label_ADBF:; return;
label_ADC2:; return;
label_ADC5:; return;
label_ADC8:; return;
label_ADCA:; return;
label_ADCD:; return;
label_ADCF:; return;
label_ADD0:; return;
label_ADD1:; return;
label_ADD2:; return;
label_ADD4:; return;
label_ADD5:; return;
label_ADD6:; return;
label_ADD7:; return;
label_ADD9:; return;
label_ADDA:; return;
label_ADDB:; return;
label_ADDC:; return;
label_ADDF:; return;
label_ADE0:; return;
label_ADE1:; return;
label_ADE2:; return;
label_ADE3:; return;
label_ADE4:; return;
label_ADE5:; return;
label_ADE7:; return;
label_ADE9:; return;
label_ADEB:; return;
label_ADED:; return;
label_ADEF:; return;
label_ADF0:; return;
label_ADF2:; return;
label_ADF3:; return;
label_ADF5:; return;
label_ADF7:; return;
label_ADF9:; return;
label_ADFB:; return;
label_ADFD:; return;
label_AE00:; return;
label_AE02:; return;
label_AE04:; return;
label_AE06:; return;
label_AE08:; return;
label_AE0A:; return;
label_AE0C:; return;
label_AE0E:; return;
label_AE11:; return;
label_AE13:; return;
label_AE15:; return;
label_AE17:; return;
label_AE19:; return;
label_AE1C:; return;
label_AE1D:; return;
label_AE20:; return;
label_AE23:; return;
label_AE26:; return;
label_AE28:; return;
label_AE29:; return;
label_AE2A:; return;
label_AE2B:; return;
label_AE2E:; return;
label_AE2F:; return;
label_AE30:; return;
label_AE31:; return;
label_AE32:; return;
label_AE33:; return;
label_AE34:; return;
label_AE37:; return;
label_AE3A:; return;
label_AE3D:; return;
label_AE40:; return;
label_AE43:; return;
label_AE46:; return;
label_AE49:; return;
label_AE4B:; return;
label_AE4D:; return;
label_AE50:; return;
label_AE52:; return;
label_AE54:; return;
label_AE57:; return;
label_AE59:; return;
label_AE5B:; return;
label_AE5D:; return;
label_AE60:; return;
label_AE62:; return;
label_AE65:; return;
label_AE68:; return;
label_AE6B:; return;
label_AE6D:; return;
label_AE6F:; return;
label_AE71:; return;
label_AE73:; return;
label_AE75:; return;
label_AE77:; return;
label_AE78:; return;
label_AE7A:; return;
label_AE7C:; return;
label_AE7E:; return;
label_AE7F:; return;
label_AE80:; return;
label_AE81:; return;
label_AE82:; return;
label_AE85:; return;
label_AE88:; return;
label_AE8B:; return;
label_AE8E:; return;
label_AE90:; return;
label_AE92:; return;
label_AE95:; return;
label_AE96:; return;
label_AE99:; return;
label_AE9B:; return;
label_AE9D:; return;
label_AEA0:; return;
label_AEA2:; return;
label_AEA4:; return;
label_AEA6:; return;
label_AEA7:; return;
label_AEA9:; return;
label_AEAB:; return;
label_AEAD:; return;
label_AEAE:; return;
label_AEB0:; return;
label_AEB3:; return;
label_AEB6:; return;
label_AEB8:; return;
label_AEBB:; return;
label_AEBE:; return;
label_AEBF:; return;
label_AEC1:; return;
label_AEC3:; return;
label_AEC5:; return;
label_AEC8:; return;
label_AEC9:; return;
label_AECB:; return;
label_AECD:; return;
label_AED0:; return;
label_AED1:; return;
label_AED4:; return;
label_AED7:; return;
label_AEDA:; return;
label_AEDC:; return;
label_AEDE:; return;
label_AEE0:; return;
label_AEE2:; return;
label_AEE4:; return;
label_AEE6:; return;
label_AEE8:; return;
label_AEEB:; return;
label_AEEE:; return;
label_AEF1:; return;
label_AEF4:; return;
label_AEF7:; return;
label_AEF9:; return;
label_AEFB:; return;
label_AEFD:; return;
label_AEFF:; return;
label_AF01:; return;
label_AF04:; return;
label_AF06:; return;
label_AF08:; return;
label_AF0A:; return;
label_AF0B:; return;
label_AF0D:; return;
label_AF0F:; return;
label_AF11:; return;
label_AF14:; return;
label_AF15:; return;
label_AF17:; return;
label_AF19:; return;
label_AF1B:; return;
label_AF1D:; return;
label_AF20:; return;
label_AF23:; return;
label_AF26:; return;
label_AF29:; return;
label_AF2C:; return;
label_AF2D:; return;
label_AF2F:; return;
label_AF31:; return;
label_AF34:; return;
label_AF37:; return;
label_AF3A:; return;
label_AF3D:; return;
label_AF40:; return;
label_AF43:; return;
label_AF45:; return;
label_AF47:; return;
label_AF49:; return;
label_AF4C:; return;
label_AF4F:; return;
label_AF50:; return;
label_AF52:; return;
label_AF54:; return;
label_AF55:; return;
label_AF58:; return;
label_AF5B:; return;
label_AF5C:; return;
label_AF5E:; return;
label_AF60:; return;
label_AF62:; return;
label_AF64:; return;
label_AF65:; return;
label_AF67:; return;
label_AF69:; return;
label_AF6B:; return;
label_AF6D:; return;
label_AF6E:; return;
label_AF6F:; return;
label_AF71:; return;
label_AF74:; return;
label_AF75:; return;
label_AF76:; return;
label_AF79:; return;
label_AF7B:; return;
label_AF7D:; return;
label_AF7F:; return;
label_AF81:; return;
label_AF84:; return;
label_AF87:; return;
label_AF89:; return;
label_AF8B:; return;
label_AF8D:; return;
label_AF8F:; return;
label_AF92:; return;
label_AF95:; return;
label_AF97:; return;
label_AF9A:; return;
label_AF9C:; return;
label_AF9E:; return;
label_AFA0:; return;
label_AFA2:; return;
label_AFA4:; return;
label_AFA7:; return;
label_AFA8:; return;
label_AFAB:; return;
label_AFAE:; return;
label_AFAF:; return;
label_AFB1:; return;
label_AFB3:; return;
label_AFB5:; return;
label_AFB8:; return;
label_AFBB:; return;
label_AFBC:; return;
label_AFBE:; return;
label_AFC0:; return;
label_AFC2:; return;
label_AFC3:; return;
label_AFC5:; return;
label_AFC8:; return;
label_AFCA:; return;
label_AFCC:; return;
label_AFCE:; return;
label_AFCF:; return;
label_AFD1:; return;
label_AFD4:; return;
label_AFD6:; return;
label_AFD9:; return;
label_AFDA:; return;
label_AFDB:; return;
label_AFDD:; return;
label_AFDE:; return;
label_AFDF:; return;
label_AFE2:; return;
label_AFE4:; return;
label_AFE6:; return;
label_AFE9:; return;
label_AFEC:; return;
label_AFEE:; return;
label_AFF0:; return;
label_AFF2:; return;
label_AFF3:; return;
label_AFF5:; return;
label_AFF7:; return;
label_AFF9:; return;
label_AFFB:; return;
label_AFFC:; return;
label_AFFE:; return;
label_B000:; return;
label_B002:; return;
label_B003:; return;
label_B004:; return;
label_B006:; return;
label_B008:; return;
label_B00A:; return;
label_B00C:; return;
label_B00D:; return;
label_B00F:; return;
label_B011:; return;
label_B013:; return;
label_B015:; return;
label_B017:; return;
label_B01A:; return;
label_B01B:; return;
label_B01D:; return;
label_B01E:; return;
label_B020:; return;
label_B021:; return;
label_B022:; return;
label_B023:; return;
label_B024:; return;
label_B026:; return;
label_B029:; return;
label_B02A:; return;
label_B02D:; return;
label_B02F:; return;
label_B031:; return;
label_B033:; return;
label_B035:; return;
label_B037:; return;
label_B03A:; return;
label_B03D:; return;
label_B040:; return;
label_B041:; return;
label_B043:; return;
label_B046:; return;
label_B048:; return;
label_B049:; return;
label_B04B:; return;
label_B04C:; return;
label_B04D:; return;
label_B04E:; return;
label_B050:; return;
label_B051:; return;
label_B053:; return;
label_B055:; return;
label_B056:; return;
label_B057:; return;
label_B058:; return;
label_B05A:; return;
label_B05B:; return;
label_B05C:; return;
label_B05E:; return;
label_B05F:; return;
label_B060:; return;
label_B062:; return;
label_B063:; return;
label_B066:; return;
label_B068:; return;
label_B069:; return;
label_B06A:; return;
label_B06B:; return;
label_B06C:; return;
label_B06D:; return;
label_B06E:; return;
label_B071:; return;
label_B072:; return;
label_B075:; return;
label_B077:; return;
label_B079:; return;
label_B07B:; return;
label_B07C:; return;
label_B07D:; return;
label_B07E:; return;
label_B07F:; return;
label_B082:; return;
label_B083:; return;
label_B085:; return;
label_B087:; return;
label_B088:; return;
label_B08A:; return;
label_B08B:; return;
label_B08C:; return;
label_B08D:; return;
label_B090:; return;
label_B092:; return;
label_B093:; return;
label_B096:; return;
label_B098:; return;
label_B099:; return;
label_B09C:; return;
label_B09F:; return;
label_B0A0:; return;
label_B0A1:; return;
label_B0A2:; return;
label_B0A4:; return;
label_B0A5:; return;
label_B0A6:; return;
label_B0A7:; return;
label_B0A8:; return;
label_B0AB:; return;
label_B0AC:; return;
label_B0AE:; return;
label_B0B1:; return;
label_B0B2:; return;
label_B0B5:; return;
label_B0B6:; return;
label_B0B9:; return;
label_B0BA:; return;
label_B0BD:; return;
label_B0BE:; return;
label_B0C1:; return;
label_B0C4:; return;
label_B0C6:; return;
label_B0C8:; return;
label_B0C9:; return;
label_B0CA:; return;
label_B0CC:; return;
label_B0CE:; return;
label_B0CF:; return;
label_B0D0:; return;
label_B0D3:; return;
label_B0D5:; return;
label_B0D6:; return;
label_B0D8:; return;
label_B0D9:; return;
label_B0DA:; return;
label_B0DC:; return;
label_B0DD:; return;
label_B0DE:; return;
label_B0E0:; return;
label_B0E1:; return;
label_B0E2:; return;
label_B0E5:; return;
label_B0E8:; return;
label_B0E9:; return;
label_B0EC:; return;
label_B0ED:; return;
label_B0F0:; return;
label_B0F2:; return;
label_B0F4:; return;
label_B0F5:; return;
label_B0F8:; return;
label_B0F9:; return;
label_B0FC:; return;
label_B0FF:; return;
label_B102:; return;
label_B103:; return;
label_B106:; return;
label_B107:; return;
label_B10A:; return;
label_B10D:; return;
label_B110:; return;
label_B111:; return;
label_B114:; return;
label_B117:; return;
label_B11A:; return;
label_B11C:; return;
label_B11F:; return;
label_B122:; return;
label_B123:; return;
label_B126:; return;
label_B127:; return;
label_B12A:; return;
label_B12B:; return;
label_B12E:; return;
label_B12F:; return;
label_B130:; return;
label_B131:; return;
label_B134:; return;
label_B135:; return;
label_B138:; return;
label_B139:; return;
label_B13A:; return;
label_B13B:; return;
label_B13E:; return;
label_B13F:; return;
label_B142:; return;
label_B143:; return;
label_B144:; return;
label_B145:; return;
label_B146:; return;
label_B147:; return;
label_B14A:; return;
label_B14B:; return;
label_B14E:; return;
label_B150:; return;
label_B153:; return;
label_B156:; return;
label_B158:; return;
label_B15B:; return;
label_B15E:; return;
label_B15F:; return;
label_B162:; return;
label_B163:; return;
label_B166:; return;
label_B167:; return;
label_B16A:; return;
label_B16B:; return;
label_B16E:; return;
label_B171:; return;
label_B174:; return;
label_B177:; return;
label_B17A:; return;
label_B17C:; return;
label_B17F:; return;
label_B180:; return;
label_B182:; return;
label_B185:; return;
label_B186:; return;
label_B187:; return;
label_B188:; return;
label_B18B:; return;
label_B18E:; return;
label_B191:; return;
label_B193:; return;
label_B194:; return;
label_B196:; return;
label_B198:; return;
label_B19A:; return;
label_B19C:; return;
label_B19D:; return;
label_B19F:; return;
label_B1A0:; return;
label_B1A1:; return;
label_B1A2:; return;
label_B1A5:; return;
label_B1A7:; return;
label_B1A9:; return;
label_B1AC:; return;
label_B1AF:; return;
label_B1B0:; return;
label_B1B3:; return;
label_B1B4:; return;
label_B1B5:; return;
label_B1B6:; return;
label_B1B9:; return;
label_B1BA:; return;
label_B1BB:; return;
label_B1BC:; return;
label_B1BE:; return;
label_B1C1:; return;
label_B1C4:; return;
label_B1C7:; return;
label_B1CA:; return;
label_B1CD:; return;
label_B1CF:; return;
label_B1D2:; return;
label_B1D4:; return;
label_B1D6:; return;
label_B1D8:; return;
label_B1DA:; return;
label_B1DC:; return;
label_B1DE:; return;
label_B1E0:; return;
label_B1E2:; return;
label_B1E4:; return;
label_B1E6:; return;
label_B1E8:; return;
label_B1EA:; return;
label_B1EC:; return;
label_B1EE:; return;
label_B1EF:; return;
label_B1F0:; return;
label_B1F1:; return;
label_B1F2:; return;
label_B1F3:; return;
label_B1F4:; return;
label_B1F7:; return;
label_B1FA:; return;
label_B1FB:; return;
label_B1FC:; return;
label_B1FE:; return;
label_B1FF:; return;
label_B202:; return;
label_B203:; return;
label_B205:; return;
label_B206:; return;
label_B207:; return;
label_B20A:; return;
label_B20D:; return;
label_B20F:; return;
label_B211:; return;
label_B212:; return;
label_B215:; return;
label_B218:; return;
label_B219:; return;
label_B21A:; return;
label_B21C:; return;
label_B21F:; return;
label_B222:; return;
label_B223:; return;
label_B225:; return;
label_B228:; return;
label_B22B:; return;
label_B22C:; return;
label_B22E:; return;
label_B22F:; return;
label_B230:; return;
label_B231:; return;
label_B233:; return;
label_B234:; return;
label_B235:; return;
label_B237:; return;
label_B239:; return;
label_B23A:; return;
label_B23B:; return;
label_B23D:; return;
label_B23F:; return;
label_B241:; return;
label_B243:; return;
label_B244:; return;
label_B246:; return;
label_B249:; return;
label_B24C:; return;
label_B24D:; return;
label_B24F:; return;
label_B251:; return;
label_B253:; return;
label_B256:; return;
label_B258:; return;
label_B25B:; return;
label_B25D:; return;
label_B25F:; return;
label_B262:; return;
label_B265:; return;
label_B267:; return;
label_B269:; return;
label_B26B:; return;
label_B26D:; return;
label_B26F:; return;
label_B271:; return;
label_B273:; return;
label_B276:; return;
label_B279:; return;
label_B27B:; return;
label_B27C:; return;
label_B27D:; return;
label_B27F:; return;
label_B280:; return;
label_B281:; return;
label_B283:; return;
label_B284:; return;
label_B287:; return;
label_B28A:; return;
label_B28D:; return;
label_B290:; return;
label_B291:; return;
label_B292:; return;
label_B295:; return;
label_B297:; return;
label_B298:; return;
label_B299:; return;
label_B29B:; return;
label_B29D:; return;
label_B2A0:; return;
label_B2A3:; return;
label_B2A6:; return;
label_B2A9:; return;
label_B2AB:; return;
label_B2AD:; return;
label_B2AF:; return;
label_B2B0:; return;
label_B2B1:; return;
label_B2B3:; return;
label_B2B5:; return;
label_B2B8:; return;
label_B2B9:; return;
label_B2BB:; return;
label_B2BC:; return;
label_B2BE:; return;
label_B2C1:; return;
label_B2C3:; return;
label_B2C5:; return;
label_B2C6:; return;
label_B2C8:; return;
label_B2CB:; return;
label_B2CD:; return;
label_B2CF:; return;
label_B2D1:; return;
label_B2D3:; return;
label_B2D5:; return;
label_B2D7:; return;
label_B2D9:; return;
label_B2DC:; return;
label_B2DE:; return;
label_B2E0:; return;
label_B2E2:; return;
label_B2E5:; return;
label_B2E6:; return;
label_B2E8:; return;
label_B2EB:; return;
label_B2EE:; return;
label_B2F0:; return;
label_B2F2:; return;
label_B2F4:; return;
label_B2F6:; return;
label_B2F8:; return;
label_B2FA:; return;
label_B2FC:; return;
label_B2FE:; return;
label_B300:; return;
label_B302:; return;
label_B304:; return;
label_B306:; return;
label_B308:; return;
label_B30A:; return;
label_B30C:; return;
label_B30E:; return;
label_B310:; return;
label_B312:; return;
label_B314:; return;
label_B316:; return;
label_B318:; return;
label_B31A:; return;
label_B31C:; return;
label_B31E:; return;
label_B320:; return;
label_B322:; return;
label_B324:; return;
label_B326:; return;
label_B328:; return;
label_B32A:; return;
label_B32C:; return;
label_B32F:; return;
label_B331:; return;
label_B333:; return;
label_B335:; return;
label_B338:; return;
label_B339:; return;
label_B33A:; return;
label_B33B:; return;
label_B33E:; return;
label_B340:; return;
label_B341:; return;
label_B343:; return;
label_B345:; return;
label_B348:; return;
label_B349:; return;
label_B34C:; return;
label_B34E:; return;
label_B350:; return;
label_B352:; return;
label_B355:; return;
label_B357:; return;
label_B359:; return;
label_B35C:; return;
label_B35E:; return;
label_B360:; return;
label_B363:; return;
label_B365:; return;
label_B367:; return;
label_B36A:; return;
label_B36D:; return;
label_B370:; return;
label_B372:; return;
label_B374:; return;
label_B377:; return;
label_B379:; return;
label_B37B:; return;
label_B37E:; return;
label_B380:; return;
label_B383:; return;
label_B386:; return;
label_B389:; return;
label_B38C:; return;
label_B38F:; return;
label_B391:; return;
label_B394:; return;
label_B397:; return;
label_B398:; return;
label_B39A:; return;
label_B39C:; return;
label_B39E:; return;
label_B3A0:; return;
label_B3A2:; return;
label_B3A4:; return;
label_B3A6:; return;
label_B3A8:; return;
label_B3AA:; return;
label_B3AC:; return;
label_B3AE:; return;
label_B3B0:; return;
label_B3B2:; return;
label_B3B4:; return;
label_B3B6:; return;
label_B3B8:; return;
label_B3B9:; return;
label_B3BA:; return;
label_B3BC:; return;
label_B3BE:; return;
label_B3BF:; return;
label_B3C2:; return;
label_B3C5:; return;
label_B3C8:; return;
label_B3C9:; return;
label_B3CC:; return;
label_B3CE:; return;
label_B3D1:; return;
label_B3D3:; return;
label_B3D5:; return;
label_B3D7:; return;
label_B3D9:; return;
label_B3DB:; return;
label_B3DD:; return;
label_B3E0:; return;
label_B3E3:; return;
label_B3E4:; return;
label_B3E6:; return;
label_B3E9:; return;
label_B3EC:; return;
label_B3ED:; return;
label_B3EF:; return;
label_B3F1:; return;
label_B3F3:; return;
label_B3F5:; return;
label_B3F7:; return;
label_B3FA:; return;
label_B3FD:; return;
label_B400:; return;
label_B403:; return;
label_B406:; return;
label_B408:; return;
label_B40B:; return;
label_B40E:; return;
label_B411:; return;
label_B414:; return;
label_B417:; return;
label_B41A:; return;
label_B41B:; return;
label_B41E:; return;
label_B420:; return;
label_B423:; return;
label_B425:; return;
label_B428:; return;
label_B42B:; return;
label_B42C:; return;
label_B42F:; return;
label_B432:; return;
label_B434:; return;
label_B437:; return;
label_B43A:; return;
label_B43D:; return;
label_B43E:; return;
label_B440:; return;
label_B443:; return;
label_B446:; return;
label_B449:; return;
label_B44C:; return;
label_B44D:; return;
label_B44F:; return;
label_B452:; return;
label_B455:; return;
label_B458:; return;
label_B45B:; return;
label_B45E:; return;
label_B461:; return;
label_B464:; return;
label_B467:; return;
label_B46A:; return;
label_B46D:; return;
label_B46E:; return;
label_B470:; return;
label_B473:; return;
label_B476:; return;
label_B479:; return;
label_B47B:; return;
label_B47E:; return;
label_B481:; return;
label_B482:; return;
label_B485:; return;
label_B488:; return;
label_B489:; return;
label_B48B:; return;
label_B48D:; return;
label_B48F:; return;
label_B491:; return;
label_B493:; return;
label_B495:; return;
label_B497:; return;
label_B498:; return;
label_B49B:; return;
label_B49D:; return;
label_B4A0:; return;
label_B4A2:; return;
label_B4A5:; return;
label_B4A7:; return;
label_B4AA:; return;
label_B4AD:; return;
label_B4AE:; return;
label_B4B1:; return;
label_B4B3:; return;
label_B4B6:; return;
label_B4B9:; return;
label_B4BC:; return;
label_B4BF:; return;
label_B4C2:; return;
label_B4C3:; return;
label_B4C6:; return;
label_B4C9:; return;
label_B4CB:; return;
label_B4CE:; return;
label_B4D1:; return;
label_B4D2:; return;
label_B4D4:; return;
label_B4D7:; return;
label_B4D9:; return;
label_B4DC:; return;
label_B4DF:; return;
label_B4E2:; return;
label_B4E5:; return;
label_B4E7:; return;
label_B4E9:; return;
label_B4EC:; return;
label_B4ED:; return;
label_B4F0:; return;
label_B4F2:; return;
label_B4F4:; return;
label_B4F6:; return;
label_B4F8:; return;
label_B4FA:; return;
label_B4FD:; return;
label_B4FE:; return;
label_B4FF:; return;
label_B501:; return;
label_B503:; return;
label_B505:; return;
label_B508:; return;
label_B50A:; return;
label_B50D:; return;
label_B50E:; return;
label_B511:; return;
label_B513:; return;
label_B514:; return;
label_B515:; return;
label_B516:; return;
label_B518:; return;
label_B51A:; return;
label_B51B:; return;
label_B51E:; return;
label_B51F:; return;
label_B521:; return;
label_B523:; return;
label_B524:; return;
label_B526:; return;
label_B528:; return;
label_B52B:; return;
label_B52C:; return;
label_B52E:; return;
label_B530:; return;
label_B532:; return;
label_B535:; return;
label_B538:; return;
label_B539:; return;
label_B53C:; return;
label_B53E:; return;
label_B53F:; return;
label_B541:; return;
label_B543:; return;
label_B546:; return;
label_B549:; return;
label_B54B:; return;
label_B54E:; return;
label_B551:; return;
label_B554:; return;
label_B557:; return;
label_B55A:; return;
label_B55B:; return;
label_B55D:; return;
label_B55F:; return;
label_B562:; return;
label_B565:; return;
label_B568:; return;
label_B569:; return;
label_B56C:; return;
label_B56E:; return;
label_B570:; return;
label_B573:; return;
label_B575:; return;
label_B578:; return;
label_B579:; return;
label_B57C:; return;
label_B57E:; return;
label_B581:; return;
label_B584:; return;
label_B587:; return;
label_B58A:; return;
label_B58D:; return;
label_B58F:; return;
label_B591:; return;
label_B594:; return;
label_B597:; return;
label_B59A:; return;
label_B59D:; return;
label_B59E:; return;
label_B5A0:; return;
label_B5A2:; return;
label_B5A5:; return;
label_B5A7:; return;
label_B5AA:; return;
label_B5AB:; return;
label_B5AE:; return;
label_B5B0:; return;
label_B5B3:; return;
label_B5B5:; return;
label_B5B7:; return;
label_B5BA:; return;
label_B5BD:; return;
label_B5BF:; return;
label_B5C2:; return;
label_B5C4:; return;
label_B5C7:; return;
label_B5C8:; return;
label_B5CB:; return;
label_B5CD:; return;
label_B5CF:; return;
label_B5D1:; return;
label_B5D3:; return;
label_B5D5:; return;
label_B5D8:; return;
label_B5DB:; return;
label_B5DE:; return;
label_B5E0:; return;
label_B5E3:; return;
label_B5E5:; return;
label_B5E8:; return;
label_B5EA:; return;
label_B5ED:; return;
label_B5F0:; return;
label_B5F3:; return;
label_B5F6:; return;
label_B5F9:; return;
label_B5FC:; return;
label_B5FD:; return;
label_B5FF:; return;
label_B602:; return;
label_B605:; return;
label_B607:; return;
label_B60A:; return;
label_B60D:; return;
label_B610:; return;
label_B612:; return;
label_B615:; return;
label_B618:; return;
label_B61B:; return;
label_B61C:; return;
label_B61E:; return;
label_B621:; return;
label_B623:; return;
label_B626:; return;
label_B629:; return;
label_B62C:; return;
label_B62F:; return;
label_B632:; return;
label_B635:; return;
label_B638:; return;
label_B63A:; return;
label_B63C:; return;
label_B63E:; return;
label_B640:; return;
label_B642:; return;
label_B644:; return;
label_B646:; return;
label_B649:; return;
label_B64A:; return;
label_B64D:; return;
label_B650:; return;
label_B653:; return;
label_B656:; return;
label_B659:; return;
label_B65C:; return;
label_B65F:; return;
label_B662:; return;
label_B665:; return;
label_B668:; return;
label_B669:; return;
label_B66C:; return;
label_B66D:; return;
label_B670:; return;
label_B673:; return;
label_B676:; return;
label_B679:; return;
label_B67C:; return;
label_B67F:; return;
label_B682:; return;
label_B684:; return;
label_B686:; return;
label_B689:; return;
label_B68B:; return;
label_B68C:; return;
label_B68E:; return;
label_B691:; return;
label_B694:; return;
label_B696:; return;
label_B699:; return;
label_B69B:; return;
label_B69C:; return;
label_B69D:; return;
label_B69F:; return;
label_B6A2:; return;
label_B6A3:; return;
label_B6A5:; return;
label_B6A8:; return;
label_B6AA:; return;
label_B6AC:; return;
label_B6AF:; return;
label_B6B0:; return;
label_B6B2:; return;
label_B6B4:; return;
label_B6B6:; return;
label_B6B8:; return;
label_B6BB:; return;
label_B6BD:; return;
label_B6BE:; return;
label_B6BF:; return;
label_B6C1:; return;
label_B6C4:; return;
label_B6C5:; return;
label_B6C7:; return;
label_B6CA:; return;
label_B6CC:; return;
label_B6CE:; return;
label_B6D1:; return;
label_B6D4:; return;
label_B6D6:; return;
label_B6D9:; return;
label_B6DC:; return;
label_B6DF:; return;
label_B6E0:; return;
label_B6E3:; return;
label_B6E5:; return;
label_B6E8:; return;
label_B6EB:; return;
label_B6ED:; return;
label_B6F0:; return;
label_B6F3:; return;
label_B6F6:; return;
label_B6F9:; return;
label_B6FC:; return;
label_B6FD:; return;
label_B6FF:; return;
label_B701:; return;
label_B703:; return;
label_B706:; return;
label_B708:; return;
label_B70B:; return;
label_B70E:; return;
label_B710:; return;
label_B712:; return;
label_B714:; return;
label_B722:; return;
label_B724:; return;
label_B727:; return;
label_B729:; return;
label_B72C:; return;
label_B72F:; return;
label_B732:; return;
label_B733:; return;
label_B736:; return;
label_B738:; return;
label_B73A:; return;
label_B73C:; return;
label_B73E:; return;
label_B740:; return;
label_B742:; return;
label_B744:; return;
label_B746:; return;
label_B749:; return;
label_B74A:; return;
label_B74C:; return;
label_B74F:; return;
label_B751:; return;
label_B753:; return;
label_B756:; return;
label_B757:; return;
label_B759:; return;
label_B75B:; return;
label_B75D:; return;
label_B75F:; return;
label_B761:; return;
label_B763:; return;
label_B765:; return;
label_B767:; return;
label_B769:; return;
label_B78E:; return;
label_B790:; return;
label_B792:; return;
label_B795:; return;
label_B798:; return;
label_B79A:; return;
label_B79D:; return;
label_B7A0:; return;
label_B7A2:; return;
label_B7A3:; return;
label_B7A6:; return;
label_B7A8:; return;
label_B7AA:; return;
label_B7AC:; return;
label_B7AE:; return;
label_B7D0:; return;
label_B7D3:; return;
label_B7D6:; return;
label_B7D7:; return;
label_B7D8:; return;
label_B7DB:; return;
label_B7DC:; return;
label_B7DF:; return;
label_B7E2:; return;
label_B7E5:; return;
label_B7E7:; return;
label_B7EA:; return;
label_B7EC:; return;
label_B7EF:; return;
label_B7F1:; return;
label_B7F4:; return;
label_B7F6:; return;
label_B7F8:; return;
label_B7FB:; return;
label_B7FE:; return;
label_B800:; return;
label_B803:; return;
label_B806:; return;
label_B809:; return;
label_B80C:; return;
label_B80E:; return;
label_B810:; return;
label_B812:; return;
label_B814:; return;
label_B817:; return;
label_B81A:; return;
label_B81C:; return;
label_B81F:; return;
label_B821:; return;
label_B824:; return;
label_B826:; return;
label_B829:; return;
label_B82C:; return;
label_B82F:; return;
label_B832:; return;
label_B834:; return;
label_B837:; return;
label_B839:; return;
label_B83B:; return;
label_B83E:; return;
label_B841:; return;
label_B843:; return;
label_B846:; return;
label_B849:; return;
label_B84B:; return;
label_B84D:; return;
label_B850:; return;
label_B853:; return;
label_B855:; return;
label_B858:; return;
label_B85B:; return;
label_B85E:; return;
label_B860:; return;
label_B863:; return;
label_B864:; return;
label_B866:; return;
label_B868:; return;
label_B86B:; return;
label_B86D:; return;
label_B870:; return;
label_B873:; return;
label_B876:; return;
label_B879:; return;
label_B87B:; return;
label_B87E:; return;
label_B87F:; return;
label_B882:; return;
label_B884:; return;
label_B887:; return;
label_B88A:; return;
label_B88D:; return;
label_B890:; return;
label_B893:; return;
label_B896:; return;
label_B899:; return;
label_B89C:; return;
label_B89F:; return;
label_B8A2:; return;
label_B8A4:; return;
label_B8A7:; return;
label_B8A8:; return;
label_B8AA:; return;
label_B8AC:; return;
label_B8AF:; return;
label_B8B2:; return;
label_B8B4:; return;
label_B8B7:; return;
label_B8BA:; return;
label_B8BC:; return;
label_B8BE:; return;
label_B8C1:; return;
label_B8C3:; return;
label_B8D6:; return;
label_B8D7:; return;
label_B8D9:; return;
label_B8DB:; return;
label_B8DE:; return;
label_B8E1:; return;
label_B8E4:; return;
label_B8E6:; return;
label_B8E9:; return;
label_B8EC:; return;
label_B8EE:; return;
label_B8F0:; return;
label_B8F3:; return;
label_B8F5:; return;
label_B8F7:; return;
label_B8FA:; return;
label_B8FC:; return;
label_B8FE:; return;
label_B901:; return;
label_B902:; return;
label_B905:; return;
label_B907:; return;
label_B909:; return;
label_B90C:; return;
label_B90E:; return;
label_B911:; return;
label_B914:; return;
label_B917:; return;
label_B919:; return;
label_B91C:; return;
label_B91D:; return;
label_B920:; return;
label_B922:; return;
label_B924:; return;
label_B927:; return;
label_B929:; return;
label_B92C:; return;
label_B92F:; return;
label_B932:; return;
label_B935:; return;
label_B937:; return;
label_B939:; return;
label_B93C:; return;
label_B93F:; return;
label_B942:; return;
label_B945:; return;
label_B948:; return;
label_B94B:; return;
label_B94E:; return;
label_B951:; return;
label_B954:; return;
label_B957:; return;
label_B95A:; return;
label_B95C:; return;
label_B95F:; return;
label_B961:; return;
label_B964:; return;
label_B966:; return;
label_B969:; return;
label_B96B:; return;
label_B96D:; return;
label_B970:; return;
label_B973:; return;
label_B975:; return;
label_B978:; return;
label_B97B:; return;
label_B97D:; return;
label_B97F:; return;
label_B982:; return;
label_B985:; return;
label_B986:; return;
label_B989:; return;
label_B98A:; return;
label_B98C:; return;
label_B98F:; return;
label_B991:; return;
label_B994:; return;
label_B997:; return;
label_B998:; return;
label_B99B:; return;
label_B99C:; return;
label_B99F:; return;
label_B9A2:; return;
label_B9A5:; return;
label_B9A8:; return;
label_B9A9:; return;
label_B9AC:; return;
label_B9AF:; return;
label_B9B2:; return;
label_B9B5:; return;
label_B9B8:; return;
label_B9BB:; return;
label_B9BC:; return;
label_B9BD:; return;
label_B9C0:; return;
label_B9C3:; return;
label_B9C6:; return;
label_B9C9:; return;
label_B9CC:; return;
label_B9CF:; return;
label_B9D0:; return;
label_B9D3:; return;
label_B9D4:; return;
label_B9D7:; return;
label_B9D8:; return;
label_B9DA:; return;
label_B9DD:; return;
label_B9DF:; return;
label_B9E2:; return;
label_B9E5:; return;
label_B9E8:; return;
label_B9EB:; return;
label_B9EE:; return;
label_B9F0:; return;
label_B9F3:; return;
label_B9F6:; return;
label_B9F9:; return;
label_B9FC:; return;
label_B9FD:; return;
label_B9FF:; return;
label_BA02:; return;
label_BA05:; return;
label_BA08:; return;
label_BA0B:; return;
label_BA0C:; return;
label_BA0F:; return;
label_BA10:; return;
label_BA13:; return;
label_BA14:; return;
label_BA16:; return;
label_BA19:; return;
label_BA1C:; return;
label_BA1F:; return;
label_BA22:; return;
label_BA23:; return;
label_BA26:; return;
label_BA28:; return;
label_BA2A:; return;
label_BA2D:; return;
label_BA30:; return;
label_BA32:; return;
label_BA34:; return;
label_BA37:; return;
label_BA38:; return;
label_BA3B:; return;
label_BA3D:; return;
label_BA3F:; return;
label_BA42:; return;
label_BA45:; return;
label_BA48:; return;
label_BA4B:; return;
label_BA4E:; return;
label_BA51:; return;
label_BA54:; return;
label_BA57:; return;
label_BA5A:; return;
label_BA5D:; return;
label_BA60:; return;
label_BA63:; return;
label_BA66:; return;
label_BA67:; return;
label_BA69:; return;
label_BA6C:; return;
label_BA6D:; return;
label_BA70:; return;
label_BA71:; return;
label_BA74:; return;
label_BA76:; return;
label_BA78:; return;
label_BA7B:; return;
label_BA7E:; return;
label_BA80:; return;
label_BA82:; return;
label_BA84:; return;
label_BA86:; return;
label_BA88:; return;
label_BA89:; return;
label_BA8A:; return;
label_BA8C:; return;
label_BA8F:; return;
label_BA91:; return;
label_BA94:; return;
label_BA96:; return;
label_BA99:; return;
label_BA9B:; return;
label_BA9D:; return;
label_BA9F:; return;
label_BAA1:; return;
label_BAA3:; return;
label_BAA5:; return;
label_BAA8:; return;
label_BAAA:; return;
label_BAAC:; return;
label_BAAD:; return;
label_BAB0:; return;
label_BAB3:; return;
label_BAB5:; return;
label_BAB6:; return;
label_BAB8:; return;
label_BABB:; return;
label_BABC:; return;
label_BABF:; return;
label_BAC0:; return;
label_BAC3:; return;
label_BAC5:; return;
label_BAC7:; return;
label_BAC9:; return;
label_BACB:; return;
label_BACD:; return;
label_BAD0:; return;
label_BAD1:; return;
label_BAD4:; return;
label_BAD5:; return;
label_BAD8:; return;
label_BADA:; return;
label_BADB:; return;
label_BADE:; return;
label_BAE0:; return;
label_BAE1:; return;
label_BAE2:; return;
label_BAE3:; return;
label_BAE4:; return;
label_BAE5:; return;
label_BAE7:; return;
label_BAE9:; return;
label_BAEC:; return;
label_BAED:; return;
label_BAEF:; return;
label_BAF2:; return;
label_BAF3:; return;
label_BAF4:; return;
label_BAF5:; return;
label_BAF8:; return;
label_BAFA:; return;
label_BAFD:; return;
label_BAFF:; return;
label_BB02:; return;
label_BB04:; return;
label_BB05:; return;
label_BB06:; return;
label_BB07:; return;
label_BB0A:; return;
label_BB0C:; return;
label_BB0F:; return;
label_BB12:; return;
label_BB14:; return;
label_BB16:; return;
label_BB17:; return;
label_BB19:; return;
label_BB1B:; return;
label_BB1D:; return;
label_BB1F:; return;
label_BB21:; return;
label_BB24:; return;
label_BB27:; return;
label_BB29:; return;
label_BB2C:; return;
label_BB2F:; return;
label_BB32:; return;
label_BB34:; return;
label_BB35:; return;
label_BB37:; return;
label_BB3A:; return;
label_BB3D:; return;
label_BB40:; return;
label_BB43:; return;
label_BB46:; return;
label_BB49:; return;
label_BB4C:; return;
label_BB4D:; return;
label_BB4F:; return;
label_BB51:; return;
label_BB53:; return;
label_BB54:; return;
label_BB56:; return;
label_BB57:; return;
label_BB5A:; return;
label_BB5B:; return;
label_BB5E:; return;
label_BB61:; return;
label_BB62:; return;
label_BB63:; return;
label_BB65:; return;
label_BB67:; return;
label_BB6A:; return;
label_BB6D:; return;
label_BB6F:; return;
label_BB70:; return;
label_BB71:; return;
label_BB73:; return;
label_BB75:; return;
label_BB76:; return;
label_BB79:; return;
label_BB7C:; return;
label_BB7E:; return;
label_BB81:; return;
label_BB84:; return;
label_BB86:; return;
label_BB89:; return;
label_BB8A:; return;
label_BB8B:; return;
label_BB8C:; return;
label_BB8D:; return;
label_BB8F:; return;
label_BB91:; return;
label_BB93:; return;
label_BB94:; return;
label_BB96:; return;
label_BB98:; return;
label_BB9A:; return;
label_BB9C:; return;
label_BB9E:; return;
label_BBA1:; return;
label_BBA3:; return;
label_BBA4:; return;
label_BBA7:; return;
label_BBAA:; return;
label_BBAC:; return;
label_BBAF:; return;
label_BBB2:; return;
label_BBB3:; return;
label_BBB5:; return;
label_BBB7:; return;
label_BBBA:; return;
label_BBBC:; return;
label_BBBE:; return;
label_BBC1:; return;
label_BBC3:; return;
label_BBC6:; return;
label_BBC9:; return;
label_BBCC:; return;
label_BBCF:; return;
label_BBD2:; return;
label_BBD5:; return;
label_BBD8:; return;
label_BBDB:; return;
label_BBDE:; return;
label_BBE1:; return;
label_BBE4:; return;
label_BBE7:; return;
label_BBEA:; return;
label_BBEC:; return;
label_BBEE:; return;
label_BBF1:; return;
label_BBF3:; return;
label_BBF5:; return;
label_BBF6:; return;
label_BBF9:; return;
label_BBFB:; return;
label_BBFD:; return;
label_BBFE:; return;
label_BC00:; return;
label_BC01:; return;
label_BC02:; return;
label_BC04:; return;
label_BC06:; return;
label_BC08:; return;
label_BC0B:; return;
label_BC0E:; return;
label_BC11:; return;
label_BC13:; return;
label_BC15:; return;
label_BC18:; return;
label_BC1B:; return;
label_BC1E:; return;
label_BC21:; return;
label_BC24:; return;
label_BC27:; return;
label_BC2A:; return;
label_BC2C:; return;
label_BC2E:; return;
label_BC2F:; return;
label_BC32:; return;
label_BC33:; return;
label_BC35:; return;
label_BC38:; return;
label_BC39:; return;
label_BC3C:; return;
label_BC3D:; return;
label_BC40:; return;
label_BC42:; return;
label_BC45:; return;
label_BC47:; return;
label_BC49:; return;
label_BC4B:; return;
label_BC4D:; return;
label_BC4F:; return;
label_BC51:; return;
label_BC53:; return;
label_BC55:; return;
label_BC57:; return;
label_BC5A:; return;
label_BC5C:; return;
label_BC5E:; return;
label_BC60:; return;
label_BC63:; return;
label_BC66:; return;
label_BC69:; return;
label_BC6B:; return;
label_BC6D:; return;
label_BC70:; return;
label_BC72:; return;
label_BC75:; return;
label_BC78:; return;
label_BC7B:; return;
label_BC7E:; return;
label_BC80:; return;
label_BCA6:; return;
label_BCA7:; return;
label_BCAA:; return;
label_BCAD:; return;
label_BCB0:; return;
label_BCB3:; return;
}

void func_AD04_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AD04_b5");
#endif
label_AD04:;
    /* $AD04: 1C */ nes_cpu_instruction_boundary(0xAD04, 4); (void)nes_read((0x1C21 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD07:;
    /* $AD07: 1C */ nes_cpu_instruction_boundary(0xAD07, 4); (void)nes_read((0x1C21 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD0A:;
    /* $AD0A: 21 */ nes_cpu_instruction_boundary(0xAD0A, 6); g_cpu.A &= nes_read(nes_read16zp((0x08 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD0C:;
    /* $AD0C: 1C */ nes_cpu_instruction_boundary(0xAD0C, 4); (void)nes_read((0x0C1C + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD0F:;
    /* $AD0F: 1C */ nes_cpu_instruction_boundary(0xAD0F, 4); (void)nes_read((0x1F1C + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD12:;
    /* $AD12: 0D */ nes_cpu_instruction_boundary(0xAD12, 4); g_cpu.A |= nes_read(0x0720); FLAG_NZ(g_cpu.A);
label_AD15:;
    /* $AD15: 1C */ nes_cpu_instruction_boundary(0xAD15, 4); (void)nes_read((0x211C + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD18:;
    /* $AD18: 1C */ nes_cpu_instruction_boundary(0xAD18, 4); (void)nes_read((0x1C1C + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD1B:;
    /* $AD1B: 14 */ nes_cpu_instruction_boundary(0xAD1B, 4); (void)nes_read((0x04 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD1D:;
    /* $AD1D: 1C */ nes_cpu_instruction_boundary(0xAD1D, 4); (void)nes_read((0x0D14 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD20:;
    /* $AD20: 14 */ nes_cpu_instruction_boundary(0xAD20, 4); (void)nes_read((0x03 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD22:;
    /* $AD22: 1C */ nes_cpu_instruction_boundary(0xAD22, 4); (void)nes_read((0x151C + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD25:;
    /* $AD25: FF */ nes_cpu_instruction_boundary(0xAD25, 7); { uint16_t a=(0x0102 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD28:;
    /* $AD28: 01 */ nes_cpu_instruction_boundary(0xAD28, 6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD2A:;
    /* $AD2A: 00 */ nes_cpu_instruction_boundary(0xAD2A, 7); nes_brk_executed(0xAD2A); return;
}

void func_ADFC_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ADFC_b5");
#endif
label_ADFC:;
    /* $ADFC: 0D */ nes_cpu_instruction_boundary(0xADFC, 4); g_cpu.A |= nes_read(0x01FF); FLAG_NZ(g_cpu.A);
label_ADFF:;
    /* $ADFF: 0A */ nes_cpu_instruction_boundary(0xADFF, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AE00:;
    /* $AE00: 01 */ nes_cpu_instruction_boundary(0xAE00, 6); g_cpu.A |= nes_read(nes_read16zp((0x0A + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE02:;
    /* $AE02: 01 */ nes_cpu_instruction_boundary(0xAE02, 6); g_cpu.A |= nes_read(nes_read16zp((0x0A + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE04:;
    /* $AE04: 01 */ nes_cpu_instruction_boundary(0xAE04, 6); g_cpu.A |= nes_read(nes_read16zp((0x0A + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE06:;
    /* $AE06: 01 */ nes_cpu_instruction_boundary(0xAE06, 6); g_cpu.A |= nes_read(nes_read16zp((0x0A + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE08:;
    /* $AE08: 01 */ nes_cpu_instruction_boundary(0xAE08, 6); g_cpu.A |= nes_read(nes_read16zp((0x0A + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE0A:;
    /* $AE0A: 01 */ nes_cpu_instruction_boundary(0xAE0A, 6); g_cpu.A |= nes_read(nes_read16zp((0x0A + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE0C:;
    /* $AE0C: 01 */ nes_cpu_instruction_boundary(0xAE0C, 6); g_cpu.A |= nes_read(nes_read16zp((0x0A + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE0E:;
    /* $AE0E: FF */ nes_cpu_instruction_boundary(0xAE0E, 7); { uint16_t a=(0x0D01 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE11:;
    /* $AE11: 01 */ nes_cpu_instruction_boundary(0xAE11, 6); g_cpu.A |= nes_read(nes_read16zp((0x18 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE13:;
    /* $AE13: 01 */ nes_cpu_instruction_boundary(0xAE13, 6); g_cpu.A |= nes_read(nes_read16zp((0x18 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE15:;
    /* $AE15: 01 */ nes_cpu_instruction_boundary(0xAE15, 6); g_cpu.A |= nes_read(nes_read16zp((0x18 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE17:;
    /* $AE17: 01 */ nes_cpu_instruction_boundary(0xAE17, 6); g_cpu.A |= nes_read(nes_read16zp((0x18 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE19:;
    /* $AE19: FF */ nes_cpu_instruction_boundary(0xAE19, 7); { uint16_t a=(0x1902 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE1C:;
    /* $AE1C: 1A */ nes_cpu_instruction_boundary(0xAE1C, 2); /* NOP */
label_AE1D:;
    /* $AE1D: FF */ nes_cpu_instruction_boundary(0xAE1D, 7); { uint16_t a=(0x0D01 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE20:;
    /* $AE20: FF */ nes_cpu_instruction_boundary(0xAE20, 7); { uint16_t a=(0x1404 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE23:;
    /* $AE23: 1C */ nes_cpu_instruction_boundary(0xAE23, 4); (void)nes_read((0x141C + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE26:;
    /* $AE26: 04 */ nes_cpu_instruction_boundary(0xAE26, 3); (void)nes_read(0x0A); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE28:;
    /* $AE28: 0A */ nes_cpu_instruction_boundary(0xAE28, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AE29:;
    /* $AE29: 0A */ nes_cpu_instruction_boundary(0xAE29, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AE2A:;
    /* $AE2A: 0A */ nes_cpu_instruction_boundary(0xAE2A, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AE2B:;
    /* $AE2B: FF */ nes_cpu_instruction_boundary(0xAE2B, 7); { uint16_t a=(0x0D08 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE2E:;
    /* $AE2E: 22 */ nes_cpu_instruction_boundary(0xAE2E, 2); /* ILLEGAL $22 — skip 1 */
label_AE2F:;
    /* $AE2F: 22 */ nes_cpu_instruction_boundary(0xAE2F, 2); /* ILLEGAL $22 — skip 1 */
label_AE30:;
    /* $AE30: 22 */ nes_cpu_instruction_boundary(0xAE30, 2); /* ILLEGAL $22 — skip 1 */
label_AE31:;
    /* $AE31: 22 */ nes_cpu_instruction_boundary(0xAE31, 2); /* ILLEGAL $22 — skip 1 */
label_AE32:;
    /* $AE32: 22 */ nes_cpu_instruction_boundary(0xAE32, 2); /* ILLEGAL $22 — skip 1 */
label_AE33:;
    /* $AE33: 22 */ nes_cpu_instruction_boundary(0xAE33, 2); /* ILLEGAL $22 — skip 1 */
label_AE34:;
    /* $AE34: 0D */ nes_cpu_instruction_boundary(0xAE34, 4); g_cpu.A |= nes_read(0x08FF); FLAG_NZ(g_cpu.A);
label_AE37:;
    /* $AE37: 0E */ nes_cpu_instruction_boundary(0xAE37, 6); { uint16_t a=0x0E0E; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE3A:;
    /* $AE3A: 0E */ nes_cpu_instruction_boundary(0xAE3A, 6); { uint16_t a=0x0E0E; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE3D:;
    /* $AE3D: 0E */ nes_cpu_instruction_boundary(0xAE3D, 6); { uint16_t a=0x080E; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE40:;
    /* $AE40: 0E */ nes_cpu_instruction_boundary(0xAE40, 6); { uint16_t a=0x0E10; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE43:;
    /* $AE43: 0E */ nes_cpu_instruction_boundary(0xAE43, 6); { uint16_t a=0x1010; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE46:;
    /* $AE46: 0E */ nes_cpu_instruction_boundary(0xAE46, 6); { uint16_t a=0xFF10; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE49:;
    /* $AE49: A7 */ nes_cpu_instruction_boundary(0xAE49, 3); g_cpu.A = g_cpu.X = nes_read(0xA7); FLAG_NZ(g_cpu.A);
label_AE4B:;
    /* $AE4B: A7 */ nes_cpu_instruction_boundary(0xAE4B, 3); g_cpu.A = g_cpu.X = nes_read(0xA7); FLAG_NZ(g_cpu.A);
label_AE4D:;
    /* $AE4D: FF */ nes_cpu_instruction_boundary(0xAE4D, 7); { uint16_t a=(0xA6FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE50:;
    /* $AE50: A6 */ nes_cpu_instruction_boundary(0xAE50, 3); g_cpu.X = nes_read(0xA2); FLAG_NZ(g_cpu.X);
label_AE52:;
    /* $AE52: A2 */ nes_cpu_instruction_boundary(0xAE52, 2); g_cpu.X = 0xFF; FLAG_NZ(g_cpu.X);
label_AE54:;
    /* $AE54: FF */ nes_cpu_instruction_boundary(0xAE54, 7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE57:;
    /* $AE57: A3 */ nes_cpu_instruction_boundary(0xAE57, 6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0xA3 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE59:;
    /* $AE59: A4 */ nes_cpu_instruction_boundary(0xAE59, 3); g_cpu.Y = nes_read(0xFF); FLAG_NZ(g_cpu.Y);
label_AE5B:;
    /* $AE5B: A4 */ nes_cpu_instruction_boundary(0xAE5B, 3); g_cpu.Y = nes_read(0xFF); FLAG_NZ(g_cpu.Y);
label_AE5D:;
    /* $AE5D: FF */ nes_cpu_instruction_boundary(0xAE5D, 7); { uint16_t a=(0xFFA5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE60:;
    /* $AE60: A5 */ nes_cpu_instruction_boundary(0xAE60, 3); g_cpu.A = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_AE62:;
    /* $AE62: 79 */ nes_cpu_instruction_boundary(0xAE62, 4); { uint8_t m=nes_read((0x7EFF + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AE65:;
    /* $AE65: 4F */ nes_cpu_instruction_boundary(0xAE65, 6); { uint16_t a=0x4F4F; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AE68:;
    /* $AE68: 4F */ nes_cpu_instruction_boundary(0xAE68, 6); { uint16_t a=0xA0A0; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AE6B:;
    /* $AE6B: A0 */ nes_cpu_instruction_boundary(0xAE6B, 2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_AE6D:;
    /* $AE6D: A1 */ nes_cpu_instruction_boundary(0xAE6D, 6); g_cpu.A = nes_read(nes_read16zp((0xA1 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE6F:;
    /* $AE6F: A1 */ nes_cpu_instruction_boundary(0xAE6F, 6); g_cpu.A = nes_read(nes_read16zp((0xA1 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE71:;
    /* $AE71: 04 */ nes_cpu_instruction_boundary(0xAE71, 3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE73:;
    /* $AE73: 06 */ nes_cpu_instruction_boundary(0xAE73, 5); { uint16_t a=0x07; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE75:;
    /* $AE75: 10 */ nes_cpu_instruction_boundary(0xAE75, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AE88; }
label_AE77:;
    /* $AE77: 12 */ nes_cpu_instruction_boundary(0xAE77, 2); /* ILLEGAL $12 — skip 1 */
label_AE78:;
    /* $AE78: 13 */ nes_cpu_instruction_boundary(0xAE78, 8); { uint16_t a=(nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AE7A:;
    /* $AE7A: 01 */ nes_cpu_instruction_boundary(0xAE7A, 6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE7C:;
    /* $AE7C: 03 */ nes_cpu_instruction_boundary(0xAE7C, 8); { uint16_t a=nes_read16zp((0x08 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AE7E:;
    /* $AE7E: 08 */ nes_cpu_instruction_boundary(0xAE7E, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AE7F:;
    /* $AE7F: 08 */ nes_cpu_instruction_boundary(0xAE7F, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AE80:;
    /* $AE80: 08 */ nes_cpu_instruction_boundary(0xAE80, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AE81:;
    /* $AE81: 18 */ nes_cpu_instruction_boundary(0xAE81, 2); g_cpu.C = 0;
label_AE82:;
    /* $AE82: 19 */ nes_cpu_instruction_boundary(0xAE82, 4); g_cpu.A |= nes_read((0x1B1A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE85:;
    /* $AE85: 1C */ nes_cpu_instruction_boundary(0xAE85, 4); (void)nes_read((0x1E1D + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE88:;
    /* $AE88: 1F */ nes_cpu_instruction_boundary(0xAE88, 7); { uint16_t a=(0x0D0C + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AE8B:;
    /* $AE8B: 0E */ nes_cpu_instruction_boundary(0xAE8B, 6); { uint16_t a=0x090F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE8E:;
    /* $AE8E: 09 */ nes_cpu_instruction_boundary(0xAE8E, 2); g_cpu.A |= 0x09; FLAG_NZ(g_cpu.A);
label_AE90:;
    /* $AE90: 09 */ nes_cpu_instruction_boundary(0xAE90, 2); g_cpu.A |= 0x7A; FLAG_NZ(g_cpu.A);
label_AE92:;
    /* $AE92: 7B */ nes_cpu_instruction_boundary(0xAE92, 7); { uint16_t a=(0x5A7F + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE95:;
    /* $AE95: 2A */ nes_cpu_instruction_boundary(0xAE95, 2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_AE96:;
    /* $AE96: 2C */ nes_cpu_instruction_boundary(0xAE96, 4); { uint8_t m=nes_read(0xFFFF); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AE99:;
    /* $AE99: 14 */ nes_cpu_instruction_boundary(0xAE99, 4); (void)nes_read((0x15 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE9B:;
    /* $AE9B: 16 */ nes_cpu_instruction_boundary(0xAE9B, 6); { uint16_t a=(0x17 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE9D:;
    /* $AE9D: 20 */ nes_cpu_instruction_boundary(0xAE9D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xAE; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x9F; g_cpu.S--; if (!nes_dispatch_call(0x2221, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAE9D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AEA0:;
    /* $AEA0: 23 */ nes_cpu_instruction_boundary(0xAEA0, 8); { uint16_t a=nes_read16zp((0x24 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AEA2:;
    /* $AEA2: 25 */ nes_cpu_instruction_boundary(0xAEA2, 3); g_cpu.A &= nes_read(0x20); FLAG_NZ(g_cpu.A);
label_AEA4:;
    /* $AEA4: 21 */ nes_cpu_instruction_boundary(0xAEA4, 6); g_cpu.A &= nes_read(nes_read16zp((0x28 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AEA6:;
    /* $AEA6: 28 */ nes_cpu_instruction_boundary(0xAEA6, 4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AEA7:;
    /* $AEA7: 29 */ nes_cpu_instruction_boundary(0xAEA7, 2); g_cpu.A &= 0x29; FLAG_NZ(g_cpu.A);
label_AEA9:;
    /* $AEA9: 26 */ nes_cpu_instruction_boundary(0xAEA9, 5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AEAB:;
    /* $AEAB: 26 */ nes_cpu_instruction_boundary(0xAEAB, 5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AEAD:;
    /* $AEAD: 2A */ nes_cpu_instruction_boundary(0xAEAD, 2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_AEAE:;
    /* $AEAE: 2B */ nes_cpu_instruction_boundary(0xAEAE, 2); g_cpu.A &= 0xFF; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AEB0:;
    /* $AEB0: FF */ nes_cpu_instruction_boundary(0xAEB0, 7); { uint16_t a=(0x2C2B + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AEB3:;
    /* $AEB3: FF */ nes_cpu_instruction_boundary(0xAEB3, 7); { uint16_t a=(0x2BFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AEB6:;
    /* $AEB6: 2B */ nes_cpu_instruction_boundary(0xAEB6, 2); g_cpu.A &= 0xFF; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AEB8:;
    /* $AEB8: FF */ nes_cpu_instruction_boundary(0xAEB8, 7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AEBB:;
    /* $AEBB: FF */ nes_cpu_instruction_boundary(0xAEBB, 7); { uint16_t a=(0x31FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AEBE:;
    /* $AEBE: 32 */ nes_cpu_instruction_boundary(0xAEBE, 2); /* ILLEGAL $32 — skip 1 */
label_AEBF:;
    /* $AEBF: 33 */ nes_cpu_instruction_boundary(0xAEBF, 8); { uint16_t a=(nes_read16zp(0x34) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AEC1:;
    /* $AEC1: 35 */ nes_cpu_instruction_boundary(0xAEC1, 4); g_cpu.A &= nes_read((0x36 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AEC3:;
    /* $AEC3: 37 */ nes_cpu_instruction_boundary(0xAEC3, 6); { uint16_t a=(0x38 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AEC5:;
    /* $AEC5: 3D */ nes_cpu_instruction_boundary(0xAEC5, 4); g_cpu.A &= nes_read((0x3F3E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AEC8:;
    /* $AEC8: 40 */ nes_cpu_instruction_boundary(0xAEC8, 6); /* RTI */ g_rti_source = 0xAEC8; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BB22_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB22_b5");
#endif
label_BB22:;
    /* $BB22: 4C */ nes_cpu_instruction_boundary(0xBB22, 3); nes_cpu_instruction_boundary(0xBDBB, 2); func_BDBB_b5(); return;
}

void func_B920_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B920_b5");
#endif
label_B920:;
    /* $B920: D0 */ nes_cpu_instruction_boundary(0xB920, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B93C; }
label_B922:;
    /* $B922: A9 */ nes_cpu_instruction_boundary(0xB922, 2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_B924:;
    /* $B924: 8D */ nes_cpu_instruction_boundary(0xB924, 4); nes_write(0x0612, g_cpu.A);
label_B927:;
    /* $B927: A9 */ nes_cpu_instruction_boundary(0xB927, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B929:;
    /* $B929: 8D */ nes_cpu_instruction_boundary(0xB929, 4); nes_write(0x0613, g_cpu.A);
label_B92C:;
    /* $B92C: 20 */ nes_cpu_instruction_boundary(0xB92C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2E; g_cpu.S--; func_B9BC_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB92C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B92F:;
    /* $B92F: EE */ nes_cpu_instruction_boundary(0xB92F, 6); { uint16_t a=0x0673; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B932:;
    /* $B932: AD */ nes_cpu_instruction_boundary(0xB932, 4); g_cpu.A = nes_read(0x0673); FLAG_NZ(g_cpu.A);
label_B935:;
    /* $B935: C9 */ nes_cpu_instruction_boundary(0xB935, 2); { int r=g_cpu.A-0x06; g_cpu.C=(g_cpu.A>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_B937:;
    /* $B937: D0 */ nes_cpu_instruction_boundary(0xB937, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB91C); return; }
label_B939:;
    /* $B939: 4C */ nes_cpu_instruction_boundary(0xB939, 3); nes_cpu_instruction_boundary(0xB8C6, 2); func_B8C6_b5(); return;
label_B93C:;
    /* $B93C: 20 */ nes_cpu_instruction_boundary(0xB93C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3E; g_cpu.S--; func_B9D0_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB93C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B93F:;
    /* $B93F: AD */ nes_cpu_instruction_boundary(0xB93F, 4); g_cpu.A = nes_read(0x0614); FLAG_NZ(g_cpu.A);
label_B942:;
    /* $B942: 8D */ nes_cpu_instruction_boundary(0xB942, 4); nes_write(0x0612, g_cpu.A);
label_B945:;
    /* $B945: AD */ nes_cpu_instruction_boundary(0xB945, 4); g_cpu.A = nes_read(0x0615); FLAG_NZ(g_cpu.A);
label_B948:;
    /* $B948: 8D */ nes_cpu_instruction_boundary(0xB948, 4); nes_write(0x0613, g_cpu.A);
label_B94B:;
    /* $B94B: 20 */ nes_cpu_instruction_boundary(0xB94B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x4D; g_cpu.S--; func_B9A8_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB94B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B94E:;
    /* $B94E: 4C */ nes_cpu_instruction_boundary(0xB94E, 3); nes_cpu_instruction_boundary(0xB899, 2); func_B899_b5(); return;
}

void func_95BD_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95BD_b5");
#endif
label_95BD:;
    /* $95BD: 60 */ nes_cpu_instruction_boundary(0x95BD, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8C7E_b5(void) { /* DoorSubRoutine8C7E */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C7E_b5");
#endif
label_8C7E:; /* DoorSubRoutine8C7E */
    /* $8C7E: 20 */ nes_cpu_instruction_boundary(0x8C7E, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; func_D2FD();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8C7E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8C81:;
    /* $8C81: 4C */ nes_cpu_instruction_boundary(0x8C81, 3); nes_cpu_instruction_boundary(0xCBDA, 2); func_CBDA(); return;
}

void func_8CF7_b5_body(int _entry) { /* WriteDoorBGTiles_Air */
    switch (_entry) {
        case 1: goto label_8CFB;
    }
label_8CF7:; /* WriteDoorBGTiles_Air */
    /* $8CF7: A9 */ nes_cpu_instruction_boundary(0x8CF7, 2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_8CF9:;
    /* $8CF9: D0 */ nes_cpu_instruction_boundary(0x8CF9, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8CFD; }
label_8CFB:; /* WriteDoorBGTiles_Solid */
    /* $8CFB: A9 */ nes_cpu_instruction_boundary(0x8CFB, 2); g_cpu.A = 0x4E; FLAG_NZ(g_cpu.A);
label_8CFD:; /* WriteDoorBGTiles_Common */
    /* $8CFD: 48 */ nes_cpu_instruction_boundary(0x8CFD, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_8CFE:;
    /* $8CFE: A9 */ nes_cpu_instruction_boundary(0x8CFE, 2); g_cpu.A = 0x50; FLAG_NZ(g_cpu.A);
label_8D00:;
    /* $8D00: 85 */ nes_cpu_instruction_boundary(0x8D00, 3); nes_write(0x02, g_cpu.A);
label_8D02:;
    /* $8D02: 8A */ nes_cpu_instruction_boundary(0x8D02, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8D03:;
    /* $8D03: 20 */ nes_cpu_instruction_boundary(0x8D03, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8D; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x05; g_cpu.S--; func_C2BF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8D03, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8D06:;
    /* $8D06: 29 */ nes_cpu_instruction_boundary(0x8D06, 2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_8D08:;
    /* $8D08: A8 */ nes_cpu_instruction_boundary(0x8D08, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8D09:;
    /* $8D09: B9 */ nes_cpu_instruction_boundary(0x8D09, 4); g_cpu.A = nes_read((0x8D3A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8D0C:;
    /* $8D0C: 85 */ nes_cpu_instruction_boundary(0x8D0C, 3); nes_write(0x03, g_cpu.A);
label_8D0E:;
    /* $8D0E: BD */ nes_cpu_instruction_boundary(0x8D0E, 4); g_cpu.A = nes_read((0x030C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8D11:;
    /* $8D11: 85 */ nes_cpu_instruction_boundary(0x8D11, 3); nes_write(0x0B, g_cpu.A);
label_8D13:;
    /* $8D13: 20 */ nes_cpu_instruction_boundary(0x8D13, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8D; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x15; g_cpu.S--; func_E96A();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8D13, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8D16:;
    /* $8D16: A0 */ nes_cpu_instruction_boundary(0x8D16, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_8D18:;
    /* $8D18: 68 */ nes_cpu_instruction_boundary(0x8D18, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8D19:; /* WriteDoorBGTiles_Common_loop */
    /* $8D19: 91 */ nes_cpu_instruction_boundary(0x8D19, 6); nes_write((nes_read16zp(0x04) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8D1B:;
    /* $8D1B: AA */ nes_cpu_instruction_boundary(0x8D1B, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8D1C:;
    /* $8D1C: 98 */ nes_cpu_instruction_boundary(0x8D1C, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8D1D:;
    /* $8D1D: 18 */ nes_cpu_instruction_boundary(0x8D1D, 2); g_cpu.C = 0;
label_8D1E:;
    /* $8D1E: 69 */ nes_cpu_instruction_boundary(0x8D1E, 2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_8D20:;
    /* $8D20: A8 */ nes_cpu_instruction_boundary(0x8D20, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8D21:;
    /* $8D21: 8A */ nes_cpu_instruction_boundary(0x8D21, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8D22:;
    /* $8D22: C0 */ nes_cpu_instruction_boundary(0x8D22, 2); { int r=g_cpu.Y-0xC0; g_cpu.C=(g_cpu.Y>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_8D24:;
    /* $8D24: D0 */ nes_cpu_instruction_boundary(0x8D24, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0x8D19, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8D19;
    }
label_8D26:;
    /* $8D26: A6 */ nes_cpu_instruction_boundary(0x8D26, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_8D28:;
    /* $8D28: 8A */ nes_cpu_instruction_boundary(0x8D28, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8D29:;
    /* $8D29: 20 */ nes_cpu_instruction_boundary(0x8D29, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8D; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2B; g_cpu.S--; func_C2C0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8D29, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8D2C:;
    /* $8D2C: 29 */ nes_cpu_instruction_boundary(0x8D2C, 2); g_cpu.A &= 0x06; FLAG_NZ(g_cpu.A);
label_8D2E:;
    /* $8D2E: A8 */ nes_cpu_instruction_boundary(0x8D2E, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8D2F:;
    /* $8D2F: A5 */ nes_cpu_instruction_boundary(0x8D2F, 3); g_cpu.A = nes_read(0x04); FLAG_NZ(g_cpu.A);
label_8D31:;
    /* $8D31: 99 */ nes_cpu_instruction_boundary(0x8D31, 5); nes_write((0x005C + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8D34:;
    /* $8D34: A5 */ nes_cpu_instruction_boundary(0x8D34, 3); g_cpu.A = nes_read(0x05); FLAG_NZ(g_cpu.A);
label_8D36:;
    /* $8D36: 99 */ nes_cpu_instruction_boundary(0x8D36, 5); nes_write((0x005D + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8D39:;
    /* $8D39: 60 */ nes_cpu_instruction_boundary(0x8D39, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8CF7_b5(void) { /* WriteDoorBGTiles_Air */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8CF7_b5");
#endif
    func_8CF7_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8CFB_b5(void) { /* WriteDoorBGTiles_Solid */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8CFB_b5");
#endif
    func_8CF7_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8C76_b5(void) { /* DoorSubRoutine8C76 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C76_b5");
#endif
label_8C76:; /* DoorSubRoutine8C76 */
    /* $8C76: A9 */ nes_cpu_instruction_boundary(0x8C76, 2); g_cpu.A = 0x30; FLAG_NZ(g_cpu.A);
label_8C78:;
    /* $8C78: 9D */ nes_cpu_instruction_boundary(0x8C78, 5); nes_write((0x0305 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8C7B:;
    /* $8C7B: 38 */ nes_cpu_instruction_boundary(0x8C7B, 2); g_cpu.C = 1;
label_8C7C:;
    /* $8C7C: E9 */ nes_cpu_instruction_boundary(0x8C7C, 2); { uint8_t m=0x02; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8C7E:; /* DoorSubRoutine8C7E */
    /* $8C7E: 20 */ nes_cpu_instruction_boundary(0x8C7E, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; func_D2FD();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8C7E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8C81:;
    /* $8C81: 4C */ nes_cpu_instruction_boundary(0x8C81, 3); nes_cpu_instruction_boundary(0xCBDA, 2); func_CBDA(); return;
}

void func_B3A4_b5(void) { /* LoadSFXData_SQ2 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3A4_b5");
#endif
label_B3A4:; /* LoadSFXData_SQ2 */
    /* $B3A4: A9 */ nes_cpu_instruction_boundary(0xB3A4, 2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_B3A6:; /* LoadSFXData_Common */
    /* $B3A6: 85 */ nes_cpu_instruction_boundary(0xB3A6, 3); nes_write(0xE0, g_cpu.A);
label_B3A8:;
    /* $B3A8: A9 */ nes_cpu_instruction_boundary(0xB3A8, 2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_B3AA:;
    /* $B3AA: 85 */ nes_cpu_instruction_boundary(0xB3AA, 3); nes_write(0xE1, g_cpu.A);
label_B3AC:;
    /* $B3AC: 84 */ nes_cpu_instruction_boundary(0xB3AC, 3); nes_write(0xE2, g_cpu.Y);
label_B3AE:;
    /* $B3AE: A9 */ nes_cpu_instruction_boundary(0xB3AE, 2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B3B0:;
    /* $B3B0: 85 */ nes_cpu_instruction_boundary(0xB3B0, 3); nes_write(0xE3, g_cpu.A);
label_B3B2:;
    /* $B3B2: A0 */ nes_cpu_instruction_boundary(0xB3B2, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_B3B4:; /* LoadSFXData_loop_LoadSFXRegisters */
    /* $B3B4: B1 */ nes_cpu_instruction_boundary(0xB3B4, 5); g_cpu.A = nes_read((nes_read16zp(0xE2) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B3B6:;
    /* $B3B6: 91 */ nes_cpu_instruction_boundary(0xB3B6, 6); nes_write((nes_read16zp(0xE0) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B3B8:;
    /* $B3B8: C8 */ nes_cpu_instruction_boundary(0xB3B8, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B3B9:;
    /* $B3B9: 98 */ nes_cpu_instruction_boundary(0xB3B9, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_B3BA:;
    /* $B3BA: C9 */ nes_cpu_instruction_boundary(0xB3BA, 2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_B3BC:;
    /* $B3BC: D0 */ nes_cpu_instruction_boundary(0xB3BC, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xB3B4, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B3B4;
    }
label_B3BE:;
    /* $B3BE: 60 */ nes_cpu_instruction_boundary(0xB3BE, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B39C_b5(void) { /* LoadSFXData_Tri */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B39C_b5");
#endif
label_B39C:; /* LoadSFXData_Tri */
    /* $B39C: A9 */ nes_cpu_instruction_boundary(0xB39C, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_B39E:;
    /* $B39E: D0 */ nes_cpu_instruction_boundary(0xB39E, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B3A6; }
label_B3A0:; /* LoadSFXData_Noise */
    /* $B3A0: A9 */ nes_cpu_instruction_boundary(0xB3A0, 2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_B3A2:;
    /* $B3A2: D0 */ nes_cpu_instruction_boundary(0xB3A2, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B3A6; }
label_B3A4:; /* LoadSFXData_SQ2 */
    /* $B3A4: A9 */ nes_cpu_instruction_boundary(0xB3A4, 2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_B3A6:; /* LoadSFXData_Common */
    /* $B3A6: 85 */ nes_cpu_instruction_boundary(0xB3A6, 3); nes_write(0xE0, g_cpu.A);
label_B3A8:;
    /* $B3A8: A9 */ nes_cpu_instruction_boundary(0xB3A8, 2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_B3AA:;
    /* $B3AA: 85 */ nes_cpu_instruction_boundary(0xB3AA, 3); nes_write(0xE1, g_cpu.A);
label_B3AC:;
    /* $B3AC: 84 */ nes_cpu_instruction_boundary(0xB3AC, 3); nes_write(0xE2, g_cpu.Y);
label_B3AE:;
    /* $B3AE: A9 */ nes_cpu_instruction_boundary(0xB3AE, 2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B3B0:;
    /* $B3B0: 85 */ nes_cpu_instruction_boundary(0xB3B0, 3); nes_write(0xE3, g_cpu.A);
label_B3B2:;
    /* $B3B2: A0 */ nes_cpu_instruction_boundary(0xB3B2, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_B3B4:; /* LoadSFXData_loop_LoadSFXRegisters */
    /* $B3B4: B1 */ nes_cpu_instruction_boundary(0xB3B4, 5); g_cpu.A = nes_read((nes_read16zp(0xE2) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B3B6:;
    /* $B3B6: 91 */ nes_cpu_instruction_boundary(0xB3B6, 6); nes_write((nes_read16zp(0xE0) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B3B8:;
    /* $B3B8: C8 */ nes_cpu_instruction_boundary(0xB3B8, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B3B9:;
    /* $B3B9: 98 */ nes_cpu_instruction_boundary(0xB3B9, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_B3BA:;
    /* $B3BA: C9 */ nes_cpu_instruction_boundary(0xB3BA, 2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_B3BC:;
    /* $B3BC: D0 */ nes_cpu_instruction_boundary(0xB3BC, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xB3B4, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B3B4;
    }
label_B3BE:;
    /* $B3BE: 60 */ nes_cpu_instruction_boundary(0xB3BE, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B3A0_b5(void) { /* LoadSFXData_Noise */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3A0_b5");
#endif
label_B3A0:; /* LoadSFXData_Noise */
    /* $B3A0: A9 */ nes_cpu_instruction_boundary(0xB3A0, 2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_B3A2:;
    /* $B3A2: D0 */ nes_cpu_instruction_boundary(0xB3A2, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B3A6; }
label_B3A4:; /* LoadSFXData_SQ2 */
    /* $B3A4: A9 */ nes_cpu_instruction_boundary(0xB3A4, 2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_B3A6:; /* LoadSFXData_Common */
    /* $B3A6: 85 */ nes_cpu_instruction_boundary(0xB3A6, 3); nes_write(0xE0, g_cpu.A);
label_B3A8:;
    /* $B3A8: A9 */ nes_cpu_instruction_boundary(0xB3A8, 2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_B3AA:;
    /* $B3AA: 85 */ nes_cpu_instruction_boundary(0xB3AA, 3); nes_write(0xE1, g_cpu.A);
label_B3AC:;
    /* $B3AC: 84 */ nes_cpu_instruction_boundary(0xB3AC, 3); nes_write(0xE2, g_cpu.Y);
label_B3AE:;
    /* $B3AE: A9 */ nes_cpu_instruction_boundary(0xB3AE, 2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B3B0:;
    /* $B3B0: 85 */ nes_cpu_instruction_boundary(0xB3B0, 3); nes_write(0xE3, g_cpu.A);
label_B3B2:;
    /* $B3B2: A0 */ nes_cpu_instruction_boundary(0xB3B2, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_B3B4:; /* LoadSFXData_loop_LoadSFXRegisters */
    /* $B3B4: B1 */ nes_cpu_instruction_boundary(0xB3B4, 5); g_cpu.A = nes_read((nes_read16zp(0xE2) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B3B6:;
    /* $B3B6: 91 */ nes_cpu_instruction_boundary(0xB3B6, 6); nes_write((nes_read16zp(0xE0) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B3B8:;
    /* $B3B8: C8 */ nes_cpu_instruction_boundary(0xB3B8, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B3B9:;
    /* $B3B9: 98 */ nes_cpu_instruction_boundary(0xB3B9, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_B3BA:;
    /* $B3BA: C9 */ nes_cpu_instruction_boundary(0xB3BA, 2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_B3BC:;
    /* $B3BC: D0 */ nes_cpu_instruction_boundary(0xB3BC, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xB3B4, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B3B4;
    }
label_B3BE:;
    /* $B3BE: 60 */ nes_cpu_instruction_boundary(0xB3BE, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B4C3_b5(void) { /* UpdateContFlags */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4C3_b5");
#endif
label_B4C3:; /* UpdateContFlags */
    /* $B4C3: AE */ nes_cpu_instruction_boundary(0xB4C3, 4); g_cpu.X = nes_read(0x065C); FLAG_NZ(g_cpu.X);
label_B4C6:;
    /* $B4C6: BD */ nes_cpu_instruction_boundary(0xB4C6, 4); g_cpu.A = nes_read((0x0688 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B4C9:;
    /* $B4C9: 29 */ nes_cpu_instruction_boundary(0xB4C9, 2); g_cpu.A &= 0x00; FLAG_NZ(g_cpu.A);
label_B4CB:;
    /* $B4CB: 0D */ nes_cpu_instruction_boundary(0xB4CB, 4); g_cpu.A |= nes_read(0x064D); FLAG_NZ(g_cpu.A);
label_B4CE:;
    /* $B4CE: 9D */ nes_cpu_instruction_boundary(0xB4CE, 5); nes_write((0x0688 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B4D1:;
    /* $B4D1: 60 */ nes_cpu_instruction_boundary(0xB4D1, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B482_b5_body(int _entry) { /* InitSFXData */
    switch (_entry) {
        case 1: goto label_B493;
        case 2: goto label_B4A2;
    }
label_B482:; /* InitSFXData */
    /* $B482: AE */ nes_cpu_instruction_boundary(0xB482, 4); g_cpu.X = nes_read(0x065C); FLAG_NZ(g_cpu.X);
label_B485:;
    /* $B485: 9D */ nes_cpu_instruction_boundary(0xB485, 5); nes_write((0x0660 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B488:;
    /* $B488: 8A */ nes_cpu_instruction_boundary(0xB488, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_B489:;
    /* $B489: F0 */ nes_cpu_instruction_boundary(0xB489, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B4A7; }
label_B48B:;
    /* $B48B: C9 */ nes_cpu_instruction_boundary(0xB48B, 2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_B48D:;
    /* $B48D: F0 */ nes_cpu_instruction_boundary(0xB48D, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B498; }
label_B48F:;
    /* $B48F: C9 */ nes_cpu_instruction_boundary(0xB48F, 2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_B491:;
    /* $B491: F0 */ nes_cpu_instruction_boundary(0xB491, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B49D; }
label_B493:;
    /* $B493: C9 */ nes_cpu_instruction_boundary(0xB493, 2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_B495:;
    /* $B495: F0 */ nes_cpu_instruction_boundary(0xB495, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B4A2; }
label_B497:;
    /* $B497: 60 */ nes_cpu_instruction_boundary(0xB497, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B498:; /* InitSFXData_SQ1 */
    /* $B498: 20 */ nes_cpu_instruction_boundary(0xB498, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; func_B398_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB498, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B49B:;
    /* $B49B: F0 */ nes_cpu_instruction_boundary(0xB49B, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B4AA; }
label_B49D:; /* InitSFXData_SQ2 */
    /* $B49D: 20 */ nes_cpu_instruction_boundary(0xB49D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x9F; g_cpu.S--; func_B3A4_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB49D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B4A0:;
    /* $B4A0: F0 */ nes_cpu_instruction_boundary(0xB4A0, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B4AA; }
label_B4A2:; /* InitSFXData_Tri */
    /* $B4A2: 20 */ nes_cpu_instruction_boundary(0xB4A2, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA4; g_cpu.S--; func_B39C_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB4A2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B4A5:;
    /* $B4A5: F0 */ nes_cpu_instruction_boundary(0xB4A5, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B4AA; }
label_B4A7:; /* InitSFXData_Noise */
    /* $B4A7: 20 */ nes_cpu_instruction_boundary(0xB4A7, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA9; g_cpu.S--; func_B3A0_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB4A7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B4AA:; /* InitSFXData_Common */
    /* $B4AA: 20 */ nes_cpu_instruction_boundary(0xB4AA, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAC; g_cpu.S--; func_B4C3_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB4AA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B4AD:;
    /* $B4AD: 8A */ nes_cpu_instruction_boundary(0xB4AD, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_B4AE:;
    /* $B4AE: 9D */ nes_cpu_instruction_boundary(0xB4AE, 5); nes_write((0x0652 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B4B1:;
    /* $B4B1: A9 */ nes_cpu_instruction_boundary(0xB4B1, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B4B3:;
    /* $B4B3: 9D */ nes_cpu_instruction_boundary(0xB4B3, 5); nes_write((0x0665 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B4B6:;
    /* $B4B6: 9D */ nes_cpu_instruction_boundary(0xB4B6, 5); nes_write((0x0670 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B4B9:;
    /* $B4B9: 9D */ nes_cpu_instruction_boundary(0xB4B9, 5); nes_write((0x0674 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B4BC:;
    /* $B4BC: 9D */ nes_cpu_instruction_boundary(0xB4BC, 5); nes_write((0x0678 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B4BF:;
    /* $B4BF: 8D */ nes_cpu_instruction_boundary(0xB4BF, 4); nes_write(0x0607, g_cpu.A);
label_B4C2:;
    /* $B4C2: 60 */ nes_cpu_instruction_boundary(0xB4C2, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B482_b5(void) { /* InitSFXData */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B482_b5");
#endif
    func_B482_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B493_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B493_b5");
#endif
    func_B482_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B4A2_b5(void) { /* InitSFXData_Tri */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4A2_b5");
#endif
    func_B482_b5_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B4D9_b5(void) { /* IncrementSFXFrame */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4D9_b5");
#endif
label_B4D9:; /* IncrementSFXFrame */
    /* $B4D9: AE */ nes_cpu_instruction_boundary(0xB4D9, 4); g_cpu.X = nes_read(0x065C); FLAG_NZ(g_cpu.X);
label_B4DC:;
    /* $B4DC: FE */ nes_cpu_instruction_boundary(0xB4DC, 7); { uint16_t a=(0x0665 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B4DF:;
    /* $B4DF: BD */ nes_cpu_instruction_boundary(0xB4DF, 4); g_cpu.A = nes_read((0x0665 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B4E2:;
    /* $B4E2: DD */ nes_cpu_instruction_boundary(0xB4E2, 4); { uint8_t m=nes_read((0x0660 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B4E5:;
    /* $B4E5: D0 */ nes_cpu_instruction_boundary(0xB4E5, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B4EC; }
label_B4E7:;
    /* $B4E7: A9 */ nes_cpu_instruction_boundary(0xB4E7, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B4E9:;
    /* $B4E9: 9D */ nes_cpu_instruction_boundary(0xB4E9, 5); nes_write((0x0665 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B4EC:; /* IncrementSFXFrame_RTS */
    /* $B4EC: 60 */ nes_cpu_instruction_boundary(0xB4EC, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B5BF_b5(void) { /* EndNoiseSFX */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5BF_b5");
#endif
label_B5BF:; /* EndNoiseSFX */
    /* $B5BF: 20 */ nes_cpu_instruction_boundary(0xB5BF, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC1; g_cpu.S--; func_B4D2_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB5BF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B5C2:;
    /* $B5C2: A9 */ nes_cpu_instruction_boundary(0xB5C2, 2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_B5C4:;
    /* $B5C4: 8D */ nes_cpu_instruction_boundary(0xB5C4, 4); nes_write(0x400C, g_cpu.A);
label_B5C7:; /* EndNoiseSFX_RTS */
    /* $B5C7: 60 */ nes_cpu_instruction_boundary(0xB5C7, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B5B7_b5(void) { /* GotoInitSFXData */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5B7_b5");
#endif
label_B5B7:; /* GotoInitSFXData */
    /* $B5B7: 4C */ nes_cpu_instruction_boundary(0xB5B7, 3); nes_cpu_instruction_boundary(0xB482, 2); func_B482_b5(); return;
}

void func_B4D2_b5(void) { /* ClearCurrentSoundFlagsAndContFlags */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4D2_b5");
#endif
label_B4D2:; /* ClearCurrentSoundFlagsAndContFlags */
    /* $B4D2: A9 */ nes_cpu_instruction_boundary(0xB4D2, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B4D4:;
    /* $B4D4: 8D */ nes_cpu_instruction_boundary(0xB4D4, 4); nes_write(0x064D, g_cpu.A);
label_B4D7:;
    /* $B4D7: F0 */ nes_cpu_instruction_boundary(0xB4D7, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB4C3); return; }
label_B4D9:; /* IncrementSFXFrame */
    /* $B4D9: AE */ nes_cpu_instruction_boundary(0xB4D9, 4); g_cpu.X = nes_read(0x065C); FLAG_NZ(g_cpu.X);
label_B4DC:;
    /* $B4DC: FE */ nes_cpu_instruction_boundary(0xB4DC, 7); { uint16_t a=(0x0665 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B4DF:;
    /* $B4DF: BD */ nes_cpu_instruction_boundary(0xB4DF, 4); g_cpu.A = nes_read((0x0665 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B4E2:;
    /* $B4E2: DD */ nes_cpu_instruction_boundary(0xB4E2, 4); { uint8_t m=nes_read((0x0660 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B4E5:;
    /* $B4E5: D0 */ nes_cpu_instruction_boundary(0xB4E5, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B4EC; }
label_B4E7:;
    /* $B4E7: A9 */ nes_cpu_instruction_boundary(0xB4E7, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B4E9:;
    /* $B4E9: 9D */ nes_cpu_instruction_boundary(0xB4E9, 5); nes_write((0x0665 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B4EC:; /* IncrementSFXFrame_RTS */
    /* $B4EC: 60 */ nes_cpu_instruction_boundary(0xB4EC, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B5D5_b5(void) { /* MultiSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5D5_b5");
#endif
label_B5D5:; /* MultiSFXInit */
    /* $B5D5: 8D */ nes_cpu_instruction_boundary(0xB5D5, 4); nes_write(0x0664, g_cpu.A);
label_B5D8:;
    /* $B5D8: 20 */ nes_cpu_instruction_boundary(0xB5D8, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDA; g_cpu.S--; func_B3A4_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB5D8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B5DB:;
    /* $B5DB: 20 */ nes_cpu_instruction_boundary(0xB5DB, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDD; g_cpu.S--; func_B4C3_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB5DB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B5DE:;
    /* $B5DE: A9 */ nes_cpu_instruction_boundary(0xB5DE, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_B5E0:;
    /* $B5E0: 8D */ nes_cpu_instruction_boundary(0xB5E0, 4); nes_write(0x0653, g_cpu.A);
label_B5E3:;
    /* $B5E3: A9 */ nes_cpu_instruction_boundary(0xB5E3, 2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_B5E5:;
    /* $B5E5: 8D */ nes_cpu_instruction_boundary(0xB5E5, 4); nes_write(0x0654, g_cpu.A);
label_B5E8:;
    /* $B5E8: A9 */ nes_cpu_instruction_boundary(0xB5E8, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B5EA:;
    /* $B5EA: 8D */ nes_cpu_instruction_boundary(0xB5EA, 4); nes_write(0x0689, g_cpu.A);
label_B5ED:;
    /* $B5ED: 8D */ nes_cpu_instruction_boundary(0xB5ED, 4); nes_write(0x0671, g_cpu.A);
label_B5F0:;
    /* $B5F0: 8D */ nes_cpu_instruction_boundary(0xB5F0, 4); nes_write(0x0675, g_cpu.A);
label_B5F3:;
    /* $B5F3: 8D */ nes_cpu_instruction_boundary(0xB5F3, 4); nes_write(0x0679, g_cpu.A);
label_B5F6:;
    /* $B5F6: 8D */ nes_cpu_instruction_boundary(0xB5F6, 4); nes_write(0x0669, g_cpu.A);
label_B5F9:;
    /* $B5F9: 8D */ nes_cpu_instruction_boundary(0xB5F9, 4); nes_write(0x0607, g_cpu.A);
label_B5FC:;
    /* $B5FC: 60 */ nes_cpu_instruction_boundary(0xB5FC, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B65C_b5(void) { /* WriteSQ1SQ2PeriodLow */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B65C_b5");
#endif
label_B65C:; /* WriteSQ1SQ2PeriodLow */
    /* $B65C: AD */ nes_cpu_instruction_boundary(0xB65C, 4); g_cpu.A = nes_read(0x0675); FLAG_NZ(g_cpu.A);
label_B65F:;
    /* $B65F: 8D */ nes_cpu_instruction_boundary(0xB65F, 4); nes_write(0x4006, g_cpu.A);
label_B662:;
    /* $B662: AD */ nes_cpu_instruction_boundary(0xB662, 4); g_cpu.A = nes_read(0x0679); FLAG_NZ(g_cpu.A);
label_B665:;
    /* $B665: 8D */ nes_cpu_instruction_boundary(0xB665, 4); nes_write(0x4002, g_cpu.A);
label_B668:;
    /* $B668: 60 */ nes_cpu_instruction_boundary(0xB668, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B5FD_b5(void) { /* EndMultiSFX */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5FD_b5");
#endif
label_B5FD:; /* EndMultiSFX */
    /* $B5FD: A9 */ nes_cpu_instruction_boundary(0xB5FD, 2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_B5FF:;
    /* $B5FF: 8D */ nes_cpu_instruction_boundary(0xB5FF, 4); nes_write(0x4000, g_cpu.A);
label_B602:;
    /* $B602: 8D */ nes_cpu_instruction_boundary(0xB602, 4); nes_write(0x4004, g_cpu.A);
label_B605:;
    /* $B605: A9 */ nes_cpu_instruction_boundary(0xB605, 2); g_cpu.A = 0x7F; FLAG_NZ(g_cpu.A);
label_B607:;
    /* $B607: 8D */ nes_cpu_instruction_boundary(0xB607, 4); nes_write(0x4001, g_cpu.A);
label_B60A:;
    /* $B60A: 8D */ nes_cpu_instruction_boundary(0xB60A, 4); nes_write(0x4005, g_cpu.A);
label_B60D:;
    /* $B60D: 20 */ nes_cpu_instruction_boundary(0xB60D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0F; g_cpu.S--; func_B4D2_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB60D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B610:;
    /* $B610: A9 */ nes_cpu_instruction_boundary(0xB610, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B612:;
    /* $B612: 8D */ nes_cpu_instruction_boundary(0xB612, 4); nes_write(0x0653, g_cpu.A);
label_B615:;
    /* $B615: 8D */ nes_cpu_instruction_boundary(0xB615, 4); nes_write(0x0654, g_cpu.A);
label_B618:;
    /* $B618: EE */ nes_cpu_instruction_boundary(0xB618, 6); { uint16_t a=0x0607; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B61B:;
    /* $B61B: 60 */ nes_cpu_instruction_boundary(0xB61B, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B722_b5(void) { /* EndSQ1SFX */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B722_b5");
#endif
label_B722:; /* EndSQ1SFX */
    /* $B722: A9 */ nes_cpu_instruction_boundary(0xB722, 2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_B724:;
    /* $B724: 8D */ nes_cpu_instruction_boundary(0xB724, 4); nes_write(0x4000, g_cpu.A);
label_B727:;
    /* $B727: A9 */ nes_cpu_instruction_boundary(0xB727, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B729:;
    /* $B729: 8D */ nes_cpu_instruction_boundary(0xB729, 4); nes_write(0x0653, g_cpu.A);
label_B72C:;
    /* $B72C: 20 */ nes_cpu_instruction_boundary(0xB72C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2E; g_cpu.S--; func_B4D2_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB72C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B72F:;
    /* $B72F: EE */ nes_cpu_instruction_boundary(0xB72F, 6); { uint16_t a=0x0607; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B732:;
    /* $B732: 60 */ nes_cpu_instruction_boundary(0xB732, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B8C6_b5_body(int _entry) { /* EndTriSFX */
    switch (_entry) {
        case 1: goto label_B8D6;
    }
label_B8C6:; /* EndTriSFX */
    /* $B8C6: A9 */ nes_cpu_instruction_boundary(0xB8C6, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B8C8:;
    /* $B8C8: 8D */ nes_cpu_instruction_boundary(0xB8C8, 4); nes_write(0x4008, g_cpu.A);
label_B8CB:;
    /* $B8CB: 8D */ nes_cpu_instruction_boundary(0xB8CB, 4); nes_write(0x0655, g_cpu.A);
label_B8CE:;
    /* $B8CE: A9 */ nes_cpu_instruction_boundary(0xB8CE, 2); g_cpu.A = 0x18; FLAG_NZ(g_cpu.A);
label_B8D0:;
    /* $B8D0: 8D */ nes_cpu_instruction_boundary(0xB8D0, 4); nes_write(0x400B, g_cpu.A);
label_B8D3:;
    /* $B8D3: 20 */ nes_cpu_instruction_boundary(0xB8D3, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD5; g_cpu.S--; func_B4D2_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB8D3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B8D6:; /* EndTriSFX_RTS */
    /* $B8D6: 60 */ nes_cpu_instruction_boundary(0xB8D6, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B8C6_b5(void) { /* EndTriSFX */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8C6_b5");
#endif
    func_B8C6_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B8D6_b5(void) { /* EndTriSFX_RTS */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8D6_b5");
#endif
    func_B8C6_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B9BC_b5(void) { /* DecreaseSFXTriPeriod */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9BC_b5");
#endif
label_B9BC:; /* DecreaseSFXTriPeriod */
    /* $B9BC: 38 */ nes_cpu_instruction_boundary(0xB9BC, 2); g_cpu.C = 1;
label_B9BD:;
    /* $B9BD: AD */ nes_cpu_instruction_boundary(0xB9BD, 4); g_cpu.A = nes_read(0x0610); FLAG_NZ(g_cpu.A);
label_B9C0:;
    /* $B9C0: ED */ nes_cpu_instruction_boundary(0xB9C0, 4); { uint8_t m=nes_read(0x0612); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9C3:;
    /* $B9C3: 8D */ nes_cpu_instruction_boundary(0xB9C3, 4); nes_write(0x0610, g_cpu.A);
label_B9C6:;
    /* $B9C6: AD */ nes_cpu_instruction_boundary(0xB9C6, 4); g_cpu.A = nes_read(0x0611); FLAG_NZ(g_cpu.A);
label_B9C9:;
    /* $B9C9: ED */ nes_cpu_instruction_boundary(0xB9C9, 4); { uint8_t m=nes_read(0x0613); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9CC:;
    /* $B9CC: 8D */ nes_cpu_instruction_boundary(0xB9CC, 4); nes_write(0x0611, g_cpu.A);
label_B9CF:;
    /* $B9CF: 60 */ nes_cpu_instruction_boundary(0xB9CF, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B899_b5(void) { /* WriteSFXTriPeriod */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B899_b5");
#endif
label_B899:; /* WriteSFXTriPeriod */
    /* $B899: AD */ nes_cpu_instruction_boundary(0xB899, 4); g_cpu.A = nes_read(0x0610); FLAG_NZ(g_cpu.A);
label_B89C:;
    /* $B89C: 8D */ nes_cpu_instruction_boundary(0xB89C, 4); nes_write(0x400A, g_cpu.A);
label_B89F:;
    /* $B89F: AD */ nes_cpu_instruction_boundary(0xB89F, 4); g_cpu.A = nes_read(0x0611); FLAG_NZ(g_cpu.A);
label_B8A2:;
    /* $B8A2: 09 */ nes_cpu_instruction_boundary(0xB8A2, 2); g_cpu.A |= 0x08; FLAG_NZ(g_cpu.A);
label_B8A4:;
    /* $B8A4: 8D */ nes_cpu_instruction_boundary(0xB8A4, 4); nes_write(0x400B, g_cpu.A);
label_B8A7:;
    /* $B8A7: 60 */ nes_cpu_instruction_boundary(0xB8A7, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B9A8_b5(void) { /* IncreaseSFXTriPeriod */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9A8_b5");
#endif
label_B9A8:; /* IncreaseSFXTriPeriod */
    /* $B9A8: 18 */ nes_cpu_instruction_boundary(0xB9A8, 2); g_cpu.C = 0;
label_B9A9:;
    /* $B9A9: AD */ nes_cpu_instruction_boundary(0xB9A9, 4); g_cpu.A = nes_read(0x0610); FLAG_NZ(g_cpu.A);
label_B9AC:;
    /* $B9AC: 6D */ nes_cpu_instruction_boundary(0xB9AC, 4); { uint8_t m=nes_read(0x0612); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9AF:;
    /* $B9AF: 8D */ nes_cpu_instruction_boundary(0xB9AF, 4); nes_write(0x0610, g_cpu.A);
label_B9B2:;
    /* $B9B2: AD */ nes_cpu_instruction_boundary(0xB9B2, 4); g_cpu.A = nes_read(0x0611); FLAG_NZ(g_cpu.A);
label_B9B5:;
    /* $B9B5: 6D */ nes_cpu_instruction_boundary(0xB9B5, 4); { uint8_t m=nes_read(0x0613); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9B8:;
    /* $B9B8: 8D */ nes_cpu_instruction_boundary(0xB9B8, 4); nes_write(0x0611, g_cpu.A);
label_B9BB:;
    /* $B9BB: 60 */ nes_cpu_instruction_boundary(0xB9BB, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B9D0_b5(void) { /* DivideSFXTriPeriod */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9D0_b5");
#endif
label_B9D0:; /* DivideSFXTriPeriod */
    /* $B9D0: AD */ nes_cpu_instruction_boundary(0xB9D0, 4); g_cpu.A = nes_read(0x0610); FLAG_NZ(g_cpu.A);
label_B9D3:;
    /* $B9D3: 48 */ nes_cpu_instruction_boundary(0xB9D3, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B9D4:;
    /* $B9D4: AD */ nes_cpu_instruction_boundary(0xB9D4, 4); g_cpu.A = nes_read(0x0611); FLAG_NZ(g_cpu.A);
label_B9D7:;
    /* $B9D7: 48 */ nes_cpu_instruction_boundary(0xB9D7, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B9D8:;
    /* $B9D8: A9 */ nes_cpu_instruction_boundary(0xB9D8, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B9DA:;
    /* $B9DA: 8D */ nes_cpu_instruction_boundary(0xB9DA, 4); nes_write(0x0617, g_cpu.A);
label_B9DD:;
    /* $B9DD: A2 */ nes_cpu_instruction_boundary(0xB9DD, 2); g_cpu.X = 0x10; FLAG_NZ(g_cpu.X);
label_B9DF:;
    /* $B9DF: 2E */ nes_cpu_instruction_boundary(0xB9DF, 6); { uint16_t a=0x0610; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9E2:;
    /* $B9E2: 2E */ nes_cpu_instruction_boundary(0xB9E2, 6); { uint16_t a=0x0611; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9E5:; /* DivideSFXTriPeriod_loop */
    /* $B9E5: 2E */ nes_cpu_instruction_boundary(0xB9E5, 6); { uint16_t a=0x0617; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9E8:;
    /* $B9E8: AD */ nes_cpu_instruction_boundary(0xB9E8, 4); g_cpu.A = nes_read(0x0617); FLAG_NZ(g_cpu.A);
label_B9EB:;
    /* $B9EB: CD */ nes_cpu_instruction_boundary(0xB9EB, 4); { uint8_t m=nes_read(0x0616); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B9EE:;
    /* $B9EE: 90 */ nes_cpu_instruction_boundary(0xB9EE, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_B9F6; }
label_B9F0:;
    /* $B9F0: ED */ nes_cpu_instruction_boundary(0xB9F0, 4); { uint8_t m=nes_read(0x0616); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9F3:;
    /* $B9F3: 8D */ nes_cpu_instruction_boundary(0xB9F3, 4); nes_write(0x0617, g_cpu.A);
label_B9F6:; /* DivideSFXTriPeriod_endIf_A */
    /* $B9F6: 2E */ nes_cpu_instruction_boundary(0xB9F6, 6); { uint16_t a=0x0610; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9F9:;
    /* $B9F9: 2E */ nes_cpu_instruction_boundary(0xB9F9, 6); { uint16_t a=0x0611; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9FC:;
    /* $B9FC: CA */ nes_cpu_instruction_boundary(0xB9FC, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_B9FD:;
    /* $B9FD: D0 */ nes_cpu_instruction_boundary(0xB9FD, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xB9E5, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B9E5;
    }
label_B9FF:;
    /* $B9FF: AD */ nes_cpu_instruction_boundary(0xB9FF, 4); g_cpu.A = nes_read(0x0610); FLAG_NZ(g_cpu.A);
label_BA02:;
    /* $BA02: 8D */ nes_cpu_instruction_boundary(0xBA02, 4); nes_write(0x0614, g_cpu.A);
label_BA05:;
    /* $BA05: AD */ nes_cpu_instruction_boundary(0xBA05, 4); g_cpu.A = nes_read(0x0611); FLAG_NZ(g_cpu.A);
label_BA08:;
    /* $BA08: 8D */ nes_cpu_instruction_boundary(0xBA08, 4); nes_write(0x0615, g_cpu.A);
label_BA0B:;
    /* $BA0B: 68 */ nes_cpu_instruction_boundary(0xBA0B, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_BA0C:;
    /* $BA0C: 8D */ nes_cpu_instruction_boundary(0xBA0C, 4); nes_write(0x0611, g_cpu.A);
label_BA0F:;
    /* $BA0F: 68 */ nes_cpu_instruction_boundary(0xBA0F, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_BA10:;
    /* $BA10: 8D */ nes_cpu_instruction_boundary(0xBA10, 4); nes_write(0x0610, g_cpu.A);
label_BA13:;
    /* $BA13: 60 */ nes_cpu_instruction_boundary(0xBA13, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B8F3_b5(void) { /* RndTriPeriods */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8F3_b5");
#endif
label_B8F3:; /* RndTriPeriods */
    /* $B8F3: A5 */ nes_cpu_instruction_boundary(0xB8F3, 3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_B8F5:;
    /* $B8F5: 09 */ nes_cpu_instruction_boundary(0xB8F5, 2); g_cpu.A |= 0x6C; FLAG_NZ(g_cpu.A);
label_B8F7:;
    /* $B8F7: 8D */ nes_cpu_instruction_boundary(0xB8F7, 4); nes_write(0x400A, g_cpu.A);
label_B8FA:;
    /* $B8FA: 29 */ nes_cpu_instruction_boundary(0xB8FA, 2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_B8FC:;
    /* $B8FC: 09 */ nes_cpu_instruction_boundary(0xB8FC, 2); g_cpu.A |= 0xF8; FLAG_NZ(g_cpu.A);
label_B8FE:;
    /* $B8FE: 8D */ nes_cpu_instruction_boundary(0xB8FE, 4); nes_write(0x400B, g_cpu.A);
label_B901:;
    /* $B901: 60 */ nes_cpu_instruction_boundary(0xB901, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BA71_b5(void) { /* UpdateVolumeEnvelope */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA71_b5");
#endif
label_BA71:; /* UpdateVolumeEnvelope */
    /* $BA71: BD */ nes_cpu_instruction_boundary(0xBA71, 4); g_cpu.A = nes_read((0x062E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA74:;
    /* $BA74: F0 */ nes_cpu_instruction_boundary(0xBA74, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BABB; }
label_BA76:;
    /* $BA76: 85 */ nes_cpu_instruction_boundary(0xBA76, 3); nes_write(0xEB, g_cpu.A);
label_BA78:;
    /* $BA78: 20 */ nes_cpu_instruction_boundary(0xBA78, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x7A; g_cpu.S--; func_BA38_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBA78, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BA7B:;
    /* $BA7B: BD */ nes_cpu_instruction_boundary(0xBA7B, 4); g_cpu.A = nes_read((0x066C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA7E:;
    /* $BA7E: C9 */ nes_cpu_instruction_boundary(0xBA7E, 2); { int r=g_cpu.A-0x10; g_cpu.C=(g_cpu.A>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_BA80:;
    /* $BA80: F0 */ nes_cpu_instruction_boundary(0xBA80, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BAC9; }
label_BA82:;
    /* $BA82: A0 */ nes_cpu_instruction_boundary(0xBA82, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_BA84:; /* UpdateVolumeEnvelope_loop_multiply */
    /* $BA84: C6 */ nes_cpu_instruction_boundary(0xBA84, 5); { uint16_t a=0xEB; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA86:;
    /* $BA86: F0 */ nes_cpu_instruction_boundary(0xBA86, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BA8C; }
label_BA88:;
    /* $BA88: C8 */ nes_cpu_instruction_boundary(0xBA88, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_BA89:;
    /* $BA89: C8 */ nes_cpu_instruction_boundary(0xBA89, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_BA8A:;
    /* $BA8A: D0 */ nes_cpu_instruction_boundary(0xBA8A, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xBA84, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BA84;
    }
label_BA8C:; /* UpdateVolumeEnvelope_exitLoop_multiply */
    /* $BA8C: B9 */ nes_cpu_instruction_boundary(0xBA8C, 4); g_cpu.A = nes_read((0xBCE0 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA8F:;
    /* $BA8F: 85 */ nes_cpu_instruction_boundary(0xBA8F, 3); nes_write(0xEC, g_cpu.A);
label_BA91:;
    /* $BA91: B9 */ nes_cpu_instruction_boundary(0xBA91, 4); g_cpu.A = nes_read((0xBCE1 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA94:;
    /* $BA94: 85 */ nes_cpu_instruction_boundary(0xBA94, 3); nes_write(0xED, g_cpu.A);
label_BA96:;
    /* $BA96: BC */ nes_cpu_instruction_boundary(0xBA96, 4); g_cpu.Y = nes_read((0x066A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BA99:;
    /* $BA99: B1 */ nes_cpu_instruction_boundary(0xBA99, 5); g_cpu.A = nes_read((nes_read16zp(0xEC) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA9B:;
    /* $BA9B: 85 */ nes_cpu_instruction_boundary(0xBA9B, 3); nes_write(0xEA, g_cpu.A);
label_BA9D:;
    /* $BA9D: C9 */ nes_cpu_instruction_boundary(0xBA9D, 2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_BA9F:;
    /* $BA9F: F0 */ nes_cpu_instruction_boundary(0xBA9F, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BAC0; }
label_BAA1:;
    /* $BAA1: C9 */ nes_cpu_instruction_boundary(0xBAA1, 2); { int r=g_cpu.A-0xF0; g_cpu.C=(g_cpu.A>=0xF0)?1:0; FLAG_NZ(r&0xFF); }
label_BAA3:;
    /* $BAA3: F0 */ nes_cpu_instruction_boundary(0xBAA3, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BAC5; }
label_BAA5:;
    /* $BAA5: BD */ nes_cpu_instruction_boundary(0xBAA5, 4); g_cpu.A = nes_read((0x0628 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BAA8:;
    /* $BAA8: 29 */ nes_cpu_instruction_boundary(0xBAA8, 2); g_cpu.A &= 0xF0; FLAG_NZ(g_cpu.A);
label_BAAA:;
    /* $BAAA: 05 */ nes_cpu_instruction_boundary(0xBAAA, 3); g_cpu.A |= nes_read(0xEA); FLAG_NZ(g_cpu.A);
label_BAAC:;
    /* $BAAC: A8 */ nes_cpu_instruction_boundary(0xBAAC, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BAAD:; /* UpdateVolumeEnvelope_updateRegister_inc */
    /* $BAAD: FE */ nes_cpu_instruction_boundary(0xBAAD, 7); { uint16_t a=(0x066A + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BAB0:; /* UpdateVolumeEnvelope_updateRegister_noInc */
    /* $BAB0: BD */ nes_cpu_instruction_boundary(0xBAB0, 4); g_cpu.A = nes_read((0x0653 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BAB3:;
    /* $BAB3: D0 */ nes_cpu_instruction_boundary(0xBAB3, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BABB; }
label_BAB5:;
    /* $BAB5: 8A */ nes_cpu_instruction_boundary(0xBAB5, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BAB6:;
    /* $BAB6: F0 */ nes_cpu_instruction_boundary(0xBAB6, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BABC; }
label_BAB8:; /* UpdateVolumeEnvelope_writeSQ2_VOL */
    /* $BAB8: 8C */ nes_cpu_instruction_boundary(0xBAB8, 4); nes_write(0x4004, g_cpu.Y);
label_BABB:; /* UpdateVolumeEnvelope_RTS */
    /* $BABB: 60 */ nes_cpu_instruction_boundary(0xBABB, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_BABC:; /* UpdateVolumeEnvelope_writeSQ1_VOL */
    /* $BABC: 8C */ nes_cpu_instruction_boundary(0xBABC, 4); nes_write(0x4000, g_cpu.Y);
label_BABF:;
    /* $BABF: 60 */ nes_cpu_instruction_boundary(0xBABF, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_BAC0:; /* UpdateVolumeEnvelope_keepPrevVolume */
    /* $BAC0: BC */ nes_cpu_instruction_boundary(0xBAC0, 4); g_cpu.Y = nes_read((0x0628 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BAC3:;
    /* $BAC3: D0 */ nes_cpu_instruction_boundary(0xBAC3, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xBAB0, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BAB0;
    }
label_BAC5:; /* UpdateVolumeEnvelope_killVolume */
    /* $BAC5: A0 */ nes_cpu_instruction_boundary(0xBAC5, 2); g_cpu.Y = 0x10; FLAG_NZ(g_cpu.Y);
label_BAC7:;
    /* $BAC7: D0 */ nes_cpu_instruction_boundary(0xBAC7, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xBAB0, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BAB0;
    }
label_BAC9:; /* UpdateVolumeEnvelope_noVolume */
    /* $BAC9: A0 */ nes_cpu_instruction_boundary(0xBAC9, 2); g_cpu.Y = 0x10; FLAG_NZ(g_cpu.Y);
label_BACB:;
    /* $BACB: D0 */ nes_cpu_instruction_boundary(0xBACB, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xBAAD, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BAAD;
    }
label_BACD:; /* GotoEndOrLoopMusic */
    /* $BACD: 20 */ nes_cpu_instruction_boundary(0xBACD, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCF; g_cpu.S--; func_B420_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBACD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BAD0:;
    /* $BAD0: 60 */ nes_cpu_instruction_boundary(0xBAD0, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BA38_b5(void) { /* LoadMusicSQ1SQ2Periods */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA38_b5");
#endif
label_BA38:; /* LoadMusicSQ1SQ2Periods */
    /* $BA38: AD */ nes_cpu_instruction_boundary(0xBA38, 4); g_cpu.A = nes_read(0x0607); FLAG_NZ(g_cpu.A);
label_BA3B:;
    /* $BA3B: F0 */ nes_cpu_instruction_boundary(0xBA3B, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BA66; }
label_BA3D:;
    /* $BA3D: A9 */ nes_cpu_instruction_boundary(0xBA3D, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BA3F:;
    /* $BA3F: 8D */ nes_cpu_instruction_boundary(0xBA3F, 4); nes_write(0x0607, g_cpu.A);
label_BA42:;
    /* $BA42: AD */ nes_cpu_instruction_boundary(0xBA42, 4); g_cpu.A = nes_read(0x0648); FLAG_NZ(g_cpu.A);
label_BA45:;
    /* $BA45: 8D */ nes_cpu_instruction_boundary(0xBA45, 4); nes_write(0x4001, g_cpu.A);
label_BA48:;
    /* $BA48: AD */ nes_cpu_instruction_boundary(0xBA48, 4); g_cpu.A = nes_read(0x0600); FLAG_NZ(g_cpu.A);
label_BA4B:;
    /* $BA4B: 8D */ nes_cpu_instruction_boundary(0xBA4B, 4); nes_write(0x4002, g_cpu.A);
label_BA4E:;
    /* $BA4E: AD */ nes_cpu_instruction_boundary(0xBA4E, 4); g_cpu.A = nes_read(0x0601); FLAG_NZ(g_cpu.A);
label_BA51:;
    /* $BA51: 8D */ nes_cpu_instruction_boundary(0xBA51, 4); nes_write(0x4003, g_cpu.A);
label_BA54:;
    /* $BA54: AD */ nes_cpu_instruction_boundary(0xBA54, 4); g_cpu.A = nes_read(0x0649); FLAG_NZ(g_cpu.A);
label_BA57:;
    /* $BA57: 8D */ nes_cpu_instruction_boundary(0xBA57, 4); nes_write(0x4005, g_cpu.A);
label_BA5A:;
    /* $BA5A: AD */ nes_cpu_instruction_boundary(0xBA5A, 4); g_cpu.A = nes_read(0x0604); FLAG_NZ(g_cpu.A);
label_BA5D:;
    /* $BA5D: 8D */ nes_cpu_instruction_boundary(0xBA5D, 4); nes_write(0x4006, g_cpu.A);
label_BA60:;
    /* $BA60: AD */ nes_cpu_instruction_boundary(0xBA60, 4); g_cpu.A = nes_read(0x0605); FLAG_NZ(g_cpu.A);
label_BA63:;
    /* $BA63: 8D */ nes_cpu_instruction_boundary(0xBA63, 4); nes_write(0x4007, g_cpu.A);
label_BA66:; /* LoadMusicSQ1SQ2Periods_RTS */
    /* $BA66: 60 */ nes_cpu_instruction_boundary(0xBA66, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B420_b5(void) { /* EndOrLoopMusic */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B420_b5");
#endif
label_B420:; /* EndOrLoopMusic */
    /* $B420: AD */ nes_cpu_instruction_boundary(0xB420, 4); g_cpu.A = nes_read(0x062C); FLAG_NZ(g_cpu.A);
label_B423:;
    /* $B423: F0 */ nes_cpu_instruction_boundary(0xB423, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B434; }
label_B425:;
    /* $B425: AD */ nes_cpu_instruction_boundary(0xB425, 4); g_cpu.A = nes_read(0x068D); FLAG_NZ(g_cpu.A);
label_B428:;
    /* $B428: 8D */ nes_cpu_instruction_boundary(0xB428, 4); nes_write(0x065D, g_cpu.A);
label_B42B:;
    /* $B42B: 60 */ nes_cpu_instruction_boundary(0xB42B, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B42C:; /* CheckMusicFlags */
    /* $B42C: AD */ nes_cpu_instruction_boundary(0xB42C, 4); g_cpu.A = nes_read(0x068D); FLAG_NZ(g_cpu.A);
label_B42F:;
    /* $B42F: CD */ nes_cpu_instruction_boundary(0xB42F, 4); { uint8_t m=nes_read(0x064D); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B432:;
    /* $B432: F0 */ nes_cpu_instruction_boundary(0xB432, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B43A; }
label_B434:; /* InitializeSoundAddresses */
    /* $B434: 20 */ nes_cpu_instruction_boundary(0xB434, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x36; g_cpu.S--; func_B44D_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB434, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B437:;
    /* $B437: 20 */ nes_cpu_instruction_boundary(0xB437, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x39; g_cpu.S--; func_B46E_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB437, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B43A:; /* GotoClearSpecialAddresses */
    /* $B43A: 20 */ nes_cpu_instruction_boundary(0xB43A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3C; g_cpu.S--; func_B43E_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB43A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B43D:;
    /* $B43D: 60 */ nes_cpu_instruction_boundary(0xB43D, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BA67_b5(void) { /* UpdateAllVolumeEnvelopes */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA67_b5");
#endif
label_BA67:; /* UpdateAllVolumeEnvelopes */
    /* $BA67: A2 */ nes_cpu_instruction_boundary(0xBA67, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_BA69:;
    /* $BA69: 20 */ nes_cpu_instruction_boundary(0xBA69, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6B; g_cpu.S--; func_BA71_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBA69, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BA6C:;
    /* $BA6C: E8 */ nes_cpu_instruction_boundary(0xBA6C, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_BA6D:;
    /* $BA6D: 20 */ nes_cpu_instruction_boundary(0xBA6D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6F; g_cpu.S--; func_BA71_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBA6D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BA70:;
    /* $BA70: 60 */ nes_cpu_instruction_boundary(0xBA70, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BA23_b5(void) { /* ResetVolumeIndex */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA23_b5");
#endif
label_BA23:; /* ResetVolumeIndex */
    /* $BA23: AD */ nes_cpu_instruction_boundary(0xBA23, 4); g_cpu.A = nes_read(0x0640); FLAG_NZ(g_cpu.A);
label_BA26:;
    /* $BA26: C9 */ nes_cpu_instruction_boundary(0xBA26, 2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_BA28:;
    /* $BA28: D0 */ nes_cpu_instruction_boundary(0xBA28, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BA2D; }
label_BA2A:;
    /* $BA2A: 8D */ nes_cpu_instruction_boundary(0xBA2A, 4); nes_write(0x066A, g_cpu.A);
label_BA2D:; /* ResetVolumeIndex_endIf_A */
    /* $BA2D: AD */ nes_cpu_instruction_boundary(0xBA2D, 4); g_cpu.A = nes_read(0x0641); FLAG_NZ(g_cpu.A);
label_BA30:;
    /* $BA30: C9 */ nes_cpu_instruction_boundary(0xBA30, 2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_BA32:;
    /* $BA32: D0 */ nes_cpu_instruction_boundary(0xBA32, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BA37; }
label_BA34:;
    /* $BA34: 8D */ nes_cpu_instruction_boundary(0xBA34, 4); nes_write(0x066B, g_cpu.A);
label_BA37:; /* ResetVolumeIndex_endIf_B */
    /* $BA37: 60 */ nes_cpu_instruction_boundary(0xBA37, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BB4C_b5(void) { /* LoadNextMusicChannelInstr_Continued */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB4C_b5");
#endif
label_BB4C:; /* LoadNextMusicChannelInstr_Continued */
    /* $BB4C: 98 */ nes_cpu_instruction_boundary(0xBB4C, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_BB4D:;
    /* $BB4D: 29 */ nes_cpu_instruction_boundary(0xBB4D, 2); g_cpu.A &= 0xB0; FLAG_NZ(g_cpu.A);
label_BB4F:;
    /* $BB4F: C9 */ nes_cpu_instruction_boundary(0xBB4F, 2); { int r=g_cpu.A-0xB0; g_cpu.C=(g_cpu.A>=0xB0)?1:0; FLAG_NZ(r&0xFF); }
label_BB51:;
    /* $BB51: D0 */ nes_cpu_instruction_boundary(0xBB51, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB70; }
label_BB53:;
    /* $BB53: 98 */ nes_cpu_instruction_boundary(0xBB53, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_BB54:;
    /* $BB54: 29 */ nes_cpu_instruction_boundary(0xBB54, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_BB56:;
    /* $BB56: 18 */ nes_cpu_instruction_boundary(0xBB56, 2); g_cpu.C = 0;
label_BB57:;
    /* $BB57: 6D */ nes_cpu_instruction_boundary(0xBB57, 4); { uint8_t m=nes_read(0x062B); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BB5A:;
    /* $BB5A: A8 */ nes_cpu_instruction_boundary(0xBB5A, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BB5B:;
    /* $BB5B: B9 */ nes_cpu_instruction_boundary(0xBB5B, 4); g_cpu.A = nes_read((0xBF27 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB5E:;
    /* $BB5E: 9D */ nes_cpu_instruction_boundary(0xBB5E, 5); nes_write((0x0620 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB61:;
    /* $BB61: A8 */ nes_cpu_instruction_boundary(0xBB61, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BB62:;
    /* $BB62: 8A */ nes_cpu_instruction_boundary(0xBB62, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BB63:;
    /* $BB63: C9 */ nes_cpu_instruction_boundary(0xBB63, 2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_BB65:;
    /* $BB65: F0 */ nes_cpu_instruction_boundary(0xBB65, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBB49); return; }
label_BB67:; /* LoadNextMusicChannelInstr_Continued_ReturnFromUpdateMusicTriLinearCount */
    /* $BB67: BC */ nes_cpu_instruction_boundary(0xBB67, 4); g_cpu.Y = nes_read((0x0638 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BB6A:;
    /* $BB6A: FE */ nes_cpu_instruction_boundary(0xBB6A, 7); { uint16_t a=(0x0638 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB6D:;
    /* $BB6D: B1 */ nes_cpu_instruction_boundary(0xBB6D, 5); g_cpu.A = nes_read((nes_read16zp(0xE6) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB6F:;
    /* $BB6F: A8 */ nes_cpu_instruction_boundary(0xBB6F, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BB70:; /* LoadNextMusicChannelInstr_Continued_noteOrRest */
    /* $BB70: 8A */ nes_cpu_instruction_boundary(0xBB70, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BB71:;
    /* $BB71: C9 */ nes_cpu_instruction_boundary(0xBB71, 2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_BB73:;
    /* $BB73: F0 */ nes_cpu_instruction_boundary(0xBB73, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBB46); return; }
label_BB75:;
    /* $BB75: 48 */ nes_cpu_instruction_boundary(0xBB75, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_BB76:;
    /* $BB76: AE */ nes_cpu_instruction_boundary(0xBB76, 4); g_cpu.X = nes_read(0x064B); FLAG_NZ(g_cpu.X);
label_BB79:;
    /* $BB79: B9 */ nes_cpu_instruction_boundary(0xBB79, 4); g_cpu.A = nes_read((0xBEA8 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB7C:;
    /* $BB7C: F0 */ nes_cpu_instruction_boundary(0xBB7C, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB89; }
label_BB7E:;
    /* $BB7E: 9D */ nes_cpu_instruction_boundary(0xBB7E, 5); nes_write((0x0600 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB81:;
    /* $BB81: B9 */ nes_cpu_instruction_boundary(0xBB81, 4); g_cpu.A = nes_read((0xBEA7 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB84:;
    /* $BB84: 09 */ nes_cpu_instruction_boundary(0xBB84, 2); g_cpu.A |= 0x08; FLAG_NZ(g_cpu.A);
label_BB86:;
    /* $BB86: 9D */ nes_cpu_instruction_boundary(0xBB86, 5); nes_write((0x0601 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB89:; /* LoadNextMusicChannelInstr_Continued_endIf_A */
    /* $BB89: A8 */ nes_cpu_instruction_boundary(0xBB89, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BB8A:;
    /* $BB8A: 68 */ nes_cpu_instruction_boundary(0xBB8A, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_BB8B:;
    /* $BB8B: AA */ nes_cpu_instruction_boundary(0xBB8B, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BB8C:;
    /* $BB8C: 98 */ nes_cpu_instruction_boundary(0xBB8C, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_BB8D:;
    /* $BB8D: D0 */ nes_cpu_instruction_boundary(0xBB8D, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB9E; }
label_BB8F:;
    /* $BB8F: A9 */ nes_cpu_instruction_boundary(0xBB8F, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BB91:;
    /* $BB91: 85 */ nes_cpu_instruction_boundary(0xBB91, 3); nes_write(0xEA, g_cpu.A);
label_BB93:;
    /* $BB93: 8A */ nes_cpu_instruction_boundary(0xBB93, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BB94:;
    /* $BB94: C9 */ nes_cpu_instruction_boundary(0xBB94, 2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_BB96:;
    /* $BB96: F0 */ nes_cpu_instruction_boundary(0xBB96, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BBA3; }
label_BB98:;
    /* $BB98: A9 */ nes_cpu_instruction_boundary(0xBB98, 2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_BB9A:;
    /* $BB9A: 85 */ nes_cpu_instruction_boundary(0xBB9A, 3); nes_write(0xEA, g_cpu.A);
label_BB9C:;
    /* $BB9C: D0 */ nes_cpu_instruction_boundary(0xBB9C, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BBA3; }
label_BB9E:; /* LoadNextMusicChannelInstr_Continued_else_B */
    /* $BB9E: BD */ nes_cpu_instruction_boundary(0xBB9E, 4); g_cpu.A = nes_read((0x0628 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBA1:;
    /* $BBA1: 85 */ nes_cpu_instruction_boundary(0xBBA1, 3); nes_write(0xEA, g_cpu.A);
label_BBA3:; /* LoadNextMusicChannelInstr_Continued_endIf_B */
    /* $BBA3: 8A */ nes_cpu_instruction_boundary(0xBBA3, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BBA4:;
    /* $BBA4: DE */ nes_cpu_instruction_boundary(0xBBA4, 7); { uint16_t a=(0x0653 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BBA7:;
    /* $BBA7: DD */ nes_cpu_instruction_boundary(0xBBA7, 4); { uint8_t m=nes_read((0x0653 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BBAA:;
    /* $BBAA: F0 */ nes_cpu_instruction_boundary(0xBBAA, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BBE1; }
label_BBAC:;
    /* $BBAC: FE */ nes_cpu_instruction_boundary(0xBBAC, 7); { uint16_t a=(0x0653 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BBAF:;
    /* $BBAF: AC */ nes_cpu_instruction_boundary(0xBBAF, 4); g_cpu.Y = nes_read(0x064B); FLAG_NZ(g_cpu.Y);
label_BBB2:;
    /* $BBB2: 8A */ nes_cpu_instruction_boundary(0xBBB2, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BBB3:;
    /* $BBB3: C9 */ nes_cpu_instruction_boundary(0xBBB3, 2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_BBB5:;
    /* $BBB5: F0 */ nes_cpu_instruction_boundary(0xBBB5, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BBBC; }
label_BBB7:;
    /* $BBB7: BD */ nes_cpu_instruction_boundary(0xBBB7, 4); g_cpu.A = nes_read((0x062E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBBA:;
    /* $BBBA: D0 */ nes_cpu_instruction_boundary(0xBBBA, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BBC1; }
label_BBBC:; /* LoadNextMusicChannelInstr_Continued_if_Cntrl0Data */
    /* $BBBC: A5 */ nes_cpu_instruction_boundary(0xBBBC, 3); g_cpu.A = nes_read(0xEA); FLAG_NZ(g_cpu.A);
label_BBBE:;
    /* $BBBE: 99 */ nes_cpu_instruction_boundary(0xBBBE, 5); nes_write((0x4000 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BBC1:; /* LoadNextMusicChannelInstr_Continued_endIf_Cntrl0Data */
    /* $BBC1: A5 */ nes_cpu_instruction_boundary(0xBBC1, 3); g_cpu.A = nes_read(0xEA); FLAG_NZ(g_cpu.A);
label_BBC3:;
    /* $BBC3: 9D */ nes_cpu_instruction_boundary(0xBBC3, 5); nes_write((0x066C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BBC6:;
    /* $BBC6: B9 */ nes_cpu_instruction_boundary(0xBBC6, 4); g_cpu.A = nes_read((0x0600 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBC9:;
    /* $BBC9: 99 */ nes_cpu_instruction_boundary(0xBBC9, 5); nes_write((0x4002 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BBCC:;
    /* $BBCC: B9 */ nes_cpu_instruction_boundary(0xBBCC, 4); g_cpu.A = nes_read((0x0601 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBCF:;
    /* $BBCF: 99 */ nes_cpu_instruction_boundary(0xBBCF, 5); nes_write((0x4003 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BBD2:;
    /* $BBD2: BD */ nes_cpu_instruction_boundary(0xBBD2, 4); g_cpu.A = nes_read((0x0648 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBD5:;
    /* $BBD5: 99 */ nes_cpu_instruction_boundary(0xBBD5, 5); nes_write((0x4001 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BBD8:; /* SetMusicInstrDelayToLength */
    /* $BBD8: BD */ nes_cpu_instruction_boundary(0xBBD8, 4); g_cpu.A = nes_read((0x0620 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBDB:;
    /* $BBDB: 9D */ nes_cpu_instruction_boundary(0xBBDB, 5); nes_write((0x0640 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BBDE:;
    /* $BBDE: 4C */ nes_cpu_instruction_boundary(0xBBDE, 3); nes_cpu_instruction_boundary(0xBAE3, 2); func_BAE3_b5(); return;
label_BBE1:; /* MusicChannelIsUsedBySFX */
    /* $BBE1: FE */ nes_cpu_instruction_boundary(0xBBE1, 7); { uint16_t a=(0x0653 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BBE4:;
    /* $BBE4: 4C */ nes_cpu_instruction_boundary(0xBBE4, 3); nes_cpu_instruction_boundary(0xBBD8, 2);
    goto label_BBD8;
}

void func_BB0C_b5(void) { /* LoadNextMusicChannelInstr */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB0C_b5");
#endif
label_BB0C:; /* LoadNextMusicChannelInstr */
    /* $BB0C: BC */ nes_cpu_instruction_boundary(0xBB0C, 4); g_cpu.Y = nes_read((0x0638 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BB0F:;
    /* $BB0F: FE */ nes_cpu_instruction_boundary(0xBB0F, 7); { uint16_t a=(0x0638 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB12:;
    /* $BB12: B1 */ nes_cpu_instruction_boundary(0xBB12, 5); g_cpu.A = nes_read((nes_read16zp(0xE6) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB14:;
    /* $BB14: F0 */ nes_cpu_instruction_boundary(0xBB14, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xBACD); return; }
label_BB16:;
    /* $BB16: A8 */ nes_cpu_instruction_boundary(0xBB16, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BB17:;
    /* $BB17: C9 */ nes_cpu_instruction_boundary(0xBB17, 2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_BB19:;
    /* $BB19: F0 */ nes_cpu_instruction_boundary(0xBB19, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB24; }
label_BB1B:;
    /* $BB1B: 29 */ nes_cpu_instruction_boundary(0xBB1B, 2); g_cpu.A &= 0xC0; FLAG_NZ(g_cpu.A);
label_BB1D:;
    /* $BB1D: C9 */ nes_cpu_instruction_boundary(0xBB1D, 2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_BB1F:;
    /* $BB1F: F0 */ nes_cpu_instruction_boundary(0xBB1F, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB34; }
label_BB21:;
    /* $BB21: 4C */ nes_cpu_instruction_boundary(0xBB21, 3); nes_cpu_instruction_boundary(0xBB4C, 2); func_BB4C_b5(); return;
label_BB24:; /* MusicChannelInstr_SongRepeat */
    /* $BB24: BD */ nes_cpu_instruction_boundary(0xBB24, 4); g_cpu.A = nes_read((0x0624 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB27:;
    /* $BB27: F0 */ nes_cpu_instruction_boundary(0xBB27, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB43; }
label_BB29:;
    /* $BB29: DE */ nes_cpu_instruction_boundary(0xBB29, 7); { uint16_t a=(0x0624 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB2C:;
    /* $BB2C: BD */ nes_cpu_instruction_boundary(0xBB2C, 4); g_cpu.A = nes_read((0x063C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB2F:;
    /* $BB2F: 9D */ nes_cpu_instruction_boundary(0xBB2F, 5); nes_write((0x0638 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB32:;
    /* $BB32: D0 */ nes_cpu_instruction_boundary(0xBB32, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB43; }
label_BB34:; /* MusicChannelInstr_SongRepeatSetup */
    /* $BB34: 98 */ nes_cpu_instruction_boundary(0xBB34, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_BB35:;
    /* $BB35: 29 */ nes_cpu_instruction_boundary(0xBB35, 2); g_cpu.A &= 0x3F; FLAG_NZ(g_cpu.A);
label_BB37:;
    /* $BB37: 9D */ nes_cpu_instruction_boundary(0xBB37, 5); nes_write((0x0624 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB3A:;
    /* $BB3A: DE */ nes_cpu_instruction_boundary(0xBB3A, 7); { uint16_t a=(0x0624 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB3D:;
    /* $BB3D: BD */ nes_cpu_instruction_boundary(0xBB3D, 4); g_cpu.A = nes_read((0x0638 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB40:;
    /* $BB40: 9D */ nes_cpu_instruction_boundary(0xBB40, 5); nes_write((0x063C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB43:; /* GotoLoadNextMusicChannelInstr */
    /* $BB43: 4C */ nes_cpu_instruction_boundary(0xBB43, 3); nes_cpu_instruction_boundary(0xBB0C, 2);
    goto label_BB0C;
label_BB46:; return;
label_BB49:; return;
label_BB4C:; return;
label_BB4D:; return;
label_BB4F:; return;
label_BB51:; return;
label_BB53:; return;
label_BB54:; return;
label_BB56:; return;
label_BB57:; return;
label_BB5A:; return;
label_BB5B:; return;
label_BB5E:; return;
label_BB61:; return;
label_BB62:; return;
label_BB63:; return;
label_BB65:; return;
label_BB67:; return;
label_BB6A:; return;
label_BB6D:; return;
label_BB6F:; return;
label_BB70:; return;
label_BB71:; return;
label_BB73:; return;
label_BB75:; return;
label_BB76:; return;
label_BB79:; return;
label_BB7C:; return;
label_BB7E:; return;
label_BB81:; return;
label_BB84:; return;
label_BB86:; return;
label_BB89:; return;
label_BB8A:; return;
label_BB8B:; return;
label_BB8C:; return;
label_BB8D:; return;
label_BB8F:; return;
label_BB91:; return;
label_BB93:; return;
label_BB94:; return;
label_BB96:; return;
label_BB98:; return;
label_BB9A:; return;
label_BB9C:; return;
label_BB9E:; return;
label_BBA1:; return;
label_BBA3:; return;
label_BBA4:; return;
label_BBA7:; return;
label_BBAA:; return;
label_BBAC:; return;
label_BBAF:; return;
label_BBB2:; return;
label_BBB3:; return;
label_BBB5:; return;
label_BBB7:; return;
label_BBBA:; return;
label_BBBC:; return;
label_BBBE:; return;
label_BBC1:; return;
label_BBC3:; return;
label_BBC6:; return;
label_BBC9:; return;
label_BBCC:; return;
label_BBCF:; return;
label_BBD2:; return;
label_BBD5:; return;
label_BBD8:; return;
label_BBDB:; return;
label_BBDE:; return;
label_BBE1:; return;
label_BBE4:; return;
label_BBE7:; return;
label_BBEA:; return;
label_BBEC:; return;
label_BBEE:; return;
label_BBF1:; return;
label_BBF3:; return;
label_BBF5:; return;
label_BBF6:; return;
label_BBF9:; return;
label_BBFB:; return;
label_BBFD:; return;
label_BBFE:; return;
label_BC00:; return;
label_BC01:; return;
label_BC02:; return;
label_BC04:; return;
label_BC06:; return;
label_BC08:; return;
label_BC0B:; return;
label_BC0E:; return;
label_BC11:; return;
label_BC13:; return;
label_BC15:; return;
label_BC18:; return;
label_BC1B:; return;
label_BC1E:; return;
label_BC21:; return;
label_BC24:; return;
label_BC27:; return;
label_BC2A:; return;
label_BC2C:; return;
label_BC2E:; return;
label_BC2F:; return;
label_BC32:; return;
label_BC33:; return;
label_BC35:; return;
label_BC38:; return;
label_BC39:; return;
label_BC3C:; return;
label_BC3D:; return;
label_BC40:; return;
label_BC42:; return;
label_BC45:; return;
label_BC47:; return;
label_BC49:; return;
label_BC4B:; return;
label_BC4D:; return;
label_BC4F:; return;
label_BC51:; return;
label_BC53:; return;
label_BC55:; return;
label_BC57:; return;
label_BC5A:; return;
label_BC5C:; return;
label_BC5E:; return;
label_BC60:; return;
label_BC63:; return;
label_BC66:; return;
label_BC69:; return;
label_BC6B:; return;
label_BC6D:; return;
label_BC70:; return;
label_BC72:; return;
label_BC75:; return;
label_BC78:; return;
label_BC7B:; return;
label_BC7E:; return;
label_BC80:; return;
label_BCA6:; return;
label_BCA7:; return;
label_BCAA:; return;
label_BCAD:; return;
label_BCB0:; return;
label_BCB3:; return;
label_BCB6:; return;
label_BCB9:; return;
label_BCBB:; return;
label_BCBC:; return;
label_BCBD:; return;
label_BCC0:; return;
label_BCC3:; return;
label_BCC6:; return;
label_BCC8:; return;
label_BCCA:; return;
label_BCCC:; return;
label_BCCE:; return;
label_BCD0:; return;
label_BCD2:; return;
label_BCD4:; return;
label_BCD6:; return;
label_BCD8:; return;
label_BCDA:; return;
label_BCDC:; return;
label_BCDE:; return;
label_BCE0:; return;
label_BCE1:; return;
label_BCE4:; return;
label_BCE7:; return;
label_BCEA:; return;
label_BCEC:; return;
label_BCEE:; return;
label_BCF0:; return;
label_BCF2:; return;
label_BCF4:; return;
label_BCF7:; return;
label_BCF9:; return;
label_BCFB:; return;
label_BCFD:; return;
label_BCFF:; return;
label_BD00:; return;
label_BD03:; return;
label_BD05:; return;
label_BD07:; return;
label_BD09:; return;
label_BD0C:; return;
label_BD0E:; return;
label_BD10:; return;
label_BD12:; return;
label_BD14:; return;
label_BD16:; return;
label_BD18:; return;
label_BD1A:; return;
label_BD1C:; return;
label_BD1E:; return;
label_BD20:; return;
label_BD22:; return;
label_BD24:; return;
label_BD25:; return;
label_BD26:; return;
label_BD27:; return;
label_BD28:; return;
label_BD29:; return;
label_BD2A:; return;
label_BD2B:; return;
label_BD2C:; return;
label_BD2D:; return;
label_BD2F:; return;
label_BD31:; return;
label_BD33:; return;
label_BD34:; return;
label_BD35:; return;
label_BD37:; return;
label_BD39:; return;
label_BD3B:; return;
label_BD3D:; return;
label_BD3F:; return;
label_BD41:; return;
label_BD43:; return;
label_BD45:; return;
label_BD46:; return;
label_BD47:; return;
label_BD49:; return;
label_BD4B:; return;
label_BD4D:; return;
label_BD4E:; return;
label_BD4F:; return;
label_BD51:; return;
label_BD53:; return;
label_BD55:; return;
label_BD57:; return;
label_BD58:; return;
label_BD5A:; return;
label_BD5C:; return;
label_BD5D:; return;
label_BD5E:; return;
label_BD60:; return;
label_BD62:; return;
label_BD65:; return;
label_BD66:; return;
label_BD67:; return;
label_BD68:; return;
label_BD69:; return;
label_BD6A:; return;
label_BD6B:; return;
label_BD6C:; return;
label_BD6D:; return;
label_BD6E:; return;
label_BD6F:; return;
label_BD72:; return;
label_BD73:; return;
label_BD74:; return;
label_BD75:; return;
label_BD76:; return;
label_BD77:; return;
label_BD78:; return;
label_BD79:; return;
label_BD7A:; return;
label_BD7B:; return;
label_BD7C:; return;
label_BD7F:; return;
label_BD81:; return;
label_BD82:; return;
label_BD83:; return;
label_BD84:; return;
label_BD85:; return;
label_BD86:; return;
label_BD87:; return;
label_BD88:; return;
label_BD8B:; return;
label_BD8C:; return;
label_BD8D:; return;
label_BD90:; return;
label_BD92:; return;
label_BD94:; return;
label_BD95:; return;
label_BD96:; return;
label_BD99:; return;
label_BD9A:; return;
label_BD9B:; return;
label_BD9E:; return;
label_BDA1:; return;
label_BDA2:; return;
label_BDA3:; return;
label_BDA6:; return;
label_BDA8:; return;
label_BDAA:; return;
label_BDAC:; return;
label_BDAE:; return;
label_BDAF:; return;
label_BDB1:; return;
label_BDB2:; return;
label_BDB3:; return;
label_BDB5:; return;
label_BDB6:; return;
label_BDB7:; return;
label_BDB8:; return;
label_BDB9:; return;
label_BDBA:; return;
label_BDBB:; return;
label_BDBC:; return;
label_BDBE:; return;
label_BDC0:; return;
label_BDC2:; return;
label_BDC3:; return;
label_BDC4:; return;
label_BDC5:; return;
label_BDC6:; return;
label_BDC7:; return;
label_BDC8:; return;
label_BDC9:; return;
label_BDCA:; return;
label_BDCB:; return;
label_BDCD:; return;
label_BDCE:; return;
label_BDD1:; return;
label_BDD4:; return;
label_BDD5:; return;
label_BDD6:; return;
label_BDD7:; return;
label_BDD8:; return;
label_BDDA:; return;
label_BDDB:; return;
label_BDDD:; return;
label_BDE0:; return;
label_BDE3:; return;
label_BDE4:; return;
label_BDE7:; return;
label_BDE9:; return;
label_BDEA:; return;
label_BDEB:; return;
label_BDEC:; return;
label_BDED:; return;
label_BDEE:; return;
label_BDEF:; return;
label_BDF0:; return;
label_BDF1:; return;
label_BDF4:; return;
label_BDF5:; return;
label_BDF7:; return;
label_BDF9:; return;
label_BDFA:; return;
label_BDFD:; return;
label_BDFE:; return;
label_BE00:; return;
label_BE01:; return;
label_BE04:; return;
label_BE07:; return;
label_BE09:; return;
label_BE0C:; return;
label_BE0E:; return;
label_BE0F:; return;
label_BE11:; return;
label_BE12:; return;
label_BE13:; return;
label_BE14:; return;
label_BE15:; return;
label_BE16:; return;
label_BE18:; return;
label_BE19:; return;
label_BE1A:; return;
label_BE1B:; return;
label_BE38:; return;
label_BE3A:; return;
label_BE3B:; return;
label_BE3E:; return;
label_BE3F:; return;
label_BE42:; return;
label_BE43:; return;
label_BE45:; return;
label_BE47:; return;
label_BE49:; return;
label_BE4B:; return;
label_BE4C:; return;
label_BE4D:; return;
label_BE4F:; return;
label_BE52:; return;
label_BE54:; return;
label_BE56:; return;
label_BE58:; return;
label_BE5B:; return;
label_BE5C:; return;
label_BE5E:; return;
label_BE60:; return;
label_BE63:; return;
label_BE65:; return;
label_BE68:; return;
label_BE6A:; return;
label_BE6B:; return;
label_BE6D:; return;
label_BE70:; return;
label_BE71:; return;
label_BE73:; return;
label_BE75:; return;
label_BE76:; return;
label_BE77:; return;
label_BE79:; return;
label_BE7B:; return;
label_BE7C:; return;
label_BE7E:; return;
label_BE80:; return;
label_BE81:; return;
label_BE83:; return;
label_BE85:; return;
label_BE87:; return;
label_BE8A:; return;
label_BE8C:; return;
label_BE8F:; return;
label_BE90:; return;
label_BE93:; return;
label_BE95:; return;
label_BE97:; return;
label_BE98:; return;
label_BE9A:; return;
label_BE9D:; return;
label_BEA0:; return;
label_BED3:; return;
label_BED5:; return;
label_BED7:; return;
label_BED9:; return;
label_BEDB:; return;
label_BEDD:; return;
label_BEDF:; return;
label_BEE1:; return;
label_BEE3:; return;
label_BEE5:; return;
label_BEE7:; return;
label_BEE9:; return;
label_BEEA:; return;
label_BEED:; return;
label_BEEE:; return;
label_BEF0:; return;
label_BEF2:; return;
label_BEF3:; return;
label_BEF4:; return;
label_BEF7:; return;
label_BEF8:; return;
label_BEF9:; return;
label_BEFA:; return;
label_BEFD:; return;
label_BEFE:; return;
label_BF01:; return;
label_BF02:; return;
label_BF05:; return;
label_BF06:; return;
label_BF08:; return;
label_BF0A:; return;
label_BF0C:; return;
label_BF0F:; return;
label_BF10:; return;
label_BF12:; return;
label_BF15:; return;
label_BF16:; return;
label_BF18:; return;
label_BF19:; return;
label_BF1A:; return;
label_BF1D:; return;
label_BF1E:; return;
label_BF20:; return;
label_BF22:; return;
label_BF24:; return;
label_BF27:; return;
label_BF29:; return;
label_BF2C:; return;
label_BF2D:; return;
label_BF2F:; return;
label_BF30:; return;
label_BF32:; return;
label_BF34:; return;
label_BF35:; return;
label_BF37:; return;
label_BF38:; return;
label_BF39:; return;
label_BF3B:; return;
label_BF3D:; return;
label_BF3E:; return;
label_BF40:; return;
label_BF41:; return;
label_BF43:; return;
label_BF45:; return;
label_BF48:; return;
label_BF4A:; return;
label_BF4B:; return;
label_BF4D:; return;
label_BF4E:; return;
label_BF50:; return;
label_BF52:; return;
label_BF53:; return;
label_BF55:; return;
label_BF57:; return;
label_BF59:; return;
label_BF5C:; return;
label_BF5D:; return;
label_BF5F:; return;
label_BF60:; return;
label_BF61:; return;
label_BF63:; return;
label_BF66:; return;
label_BF69:; return;
label_BF6C:; return;
label_BF6F:; return;
label_BF72:; return;
label_BF73:; return;
label_BF75:; return;
label_BF78:; return;
label_BF7B:; return;
label_BF7C:; return;
label_BF7D:; return;
label_BF7E:; return;
label_BF80:; return;
label_BF82:; return;
label_BF84:; return;
label_BF87:; return;
label_BF8A:; return;
label_BF8D:; return;
label_BF90:; return;
label_BF92:; return;
label_BF95:; return;
label_BF98:; return;
label_BF9B:; return;
label_BF9E:; return;
label_BF9F:; return;
label_BFA2:; return;
label_BFA4:; return;
label_BFA6:; return;
label_BFA8:; return;
label_BFAA:; return;
label_BFAB:; return;
label_BFAD:; return;
label_BFAE:; return;
label_BFB0:; return;
label_BFB1:; return;
label_BFB2:; return;
label_BFB4:; return;
label_BFB7:; return;
label_BFBA:; return;
label_BFBD:; return;
label_BFBF:; return;
label_BFC2:; return;
label_BFC4:; return;
label_BFC6:; return;
label_BFC9:; return;
label_BFCC:; return;
label_BFCF:; return;
label_BFD2:; return;
label_BFD5:; return;
label_BFD6:; return;
label_BFD9:; return;
label_BFDA:; return;
label_BFDD:; return;
label_BFDE:; return;
label_BFE1:; return;
label_BFE2:; return;
label_BFE5:; return;
label_BFE6:; return;
label_BFE9:; return;
label_BFEA:; return;
label_BFED:; return;
label_BFEE:; return;
label_BFF1:; return;
label_BFF2:; return;
label_BFF5:; return;
label_BFF6:; return;
label_BFF9:; return;
label_BFFA:; return;
label_BFFD:; return;
label_C000:; return;
label_C001:; return;
label_C002:; return;
label_C004:; return;
label_C006:; return;
label_C007:; return;
label_C009:; return;
label_C00B:; return;
label_C00D:; return;
label_C00E:; return;
label_C010:; return;
label_C012:; return;
label_C013:; return;
label_C015:; return;
label_C016:; return;
label_C017:; return;
label_C019:; return;
label_C01A:; return;
label_C01C:; return;
label_C01F:; return;
label_C022:; return;
label_C025:; return;
label_C028:; return;
label_C02B:; return;
label_C02E:; return;
label_C031:; return;
label_C034:; return;
label_C037:; return;
label_C03A:; return;
label_C03D:; return;
label_C03E:; return;
label_C03F:; return;
label_C041:; return;
label_C043:; return;
label_C045:; return;
label_C047:; return;
label_C048:; return;
label_C04A:; return;
label_C04B:; return;
label_C04D:; return;
label_C04F:; return;
label_C051:; return;
label_C053:; return;
label_C055:; return;
label_C057:; return;
label_C059:; return;
label_C05B:; return;
label_C05D:; return;
label_C05F:; return;
label_C060:; return;
label_C062:; return;
label_C063:; return;
label_C065:; return;
label_C067:; return;
label_C069:; return;
label_C06B:; return;
label_C06D:; return;
label_C06F:; return;
label_C071:; return;
label_C073:; return;
label_C075:; return;
label_C077:; return;
label_C079:; return;
label_C07B:; return;
label_C07E:; return;
label_C081:; return;
label_C082:; return;
label_C084:; return;
label_C087:; return;
label_C08A:; return;
label_C08C:; return;
label_C08F:; return;
label_C091:; return;
label_C093:; return;
label_C095:; return;
label_C097:; return;
label_C099:; return;
label_C09C:; return;
label_C09E:; return;
label_C0A1:; return;
label_C0A3:; return;
label_C0A6:; return;
label_C0A8:; return;
label_C0AA:; return;
label_C0AC:; return;
label_C0AE:; return;
label_C0B0:; return;
label_C0B2:; return;
label_C0B4:; return;
label_C0B5:; return;
label_C0B7:; return;
label_C0BA:; return;
label_C0BC:; return;
label_C0BF:; return;
label_C0C2:; return;
label_C0C5:; return;
label_C0C7:; return;
label_C0C9:; return;
label_C0CB:; return;
label_C0CC:; return;
label_C0CE:; return;
label_C0D0:; return;
label_C0D3:; return;
label_C0D6:; return;
label_C0D9:; return;
label_C0DA:; return;
label_C0DB:; return;
label_C0DC:; return;
label_C0DD:; return;
label_C0DE:; return;
label_C0DF:; return;
label_C0E1:; return;
label_C0E4:; return;
label_C0E6:; return;
label_C0E9:; return;
label_C0EB:; return;
label_C0ED:; return;
label_C0EF:; return;
label_C0F1:; return;
label_C0F4:; return;
label_C0F7:; return;
label_C0FA:; return;
label_C0FD:; return;
label_C100:; return;
label_C103:; return;
label_C106:; return;
label_C109:; return;
label_C10B:; return;
label_C10D:; return;
label_C10E:; return;
label_C10F:; return;
label_C110:; return;
label_C111:; return;
label_C112:; return;
label_C113:; return;
label_C114:; return;
label_C116:; return;
label_C118:; return;
label_C11B:; return;
label_C11D:; return;
label_C11F:; return;
label_C121:; return;
label_C123:; return;
label_C125:; return;
label_C127:; return;
label_C129:; return;
label_C12B:; return;
label_C12D:; return;
label_C12F:; return;
label_C131:; return;
label_C133:; return;
label_C135:; return;
label_C137:; return;
label_C139:; return;
label_C13C:; return;
label_C13E:; return;
label_C155:; return;
label_C157:; return;
label_C158:; return;
label_C15B:; return;
label_C15D:; return;
label_C15F:; return;
label_C161:; return;
label_C163:; return;
label_C165:; return;
label_C167:; return;
label_C169:; return;
label_C16B:; return;
label_C16D:; return;
label_C16F:; return;
label_C171:; return;
label_C173:; return;
label_C175:; return;
label_C178:; return;
label_C17A:; return;
label_C17C:; return;
label_C17E:; return;
label_C181:; return;
label_C183:; return;
label_C184:; return;
label_C187:; return;
label_C18A:; return;
label_C18C:; return;
label_C18F:; return;
label_C191:; return;
label_C193:; return;
label_C195:; return;
label_C198:; return;
label_C199:; return;
label_C19B:; return;
label_C19C:; return;
label_C19E:; return;
label_C19F:; return;
label_C1A2:; return;
label_C1A5:; return;
label_C1A7:; return;
label_C1A9:; return;
label_C1AB:; return;
label_C1AD:; return;
label_C1AF:; return;
label_C1B1:; return;
label_C1B2:; return;
label_C1B4:; return;
label_C1B6:; return;
label_C1B8:; return;
label_C1BB:; return;
label_C1BC:; return;
label_C1BE:; return;
label_C1C0:; return;
label_C1C2:; return;
label_C1C4:; return;
label_C1C6:; return;
label_C1C8:; return;
label_C1CA:; return;
label_C1CB:; return;
label_C1CD:; return;
label_C1CF:; return;
label_C1D1:; return;
label_C1D4:; return;
label_C1D6:; return;
label_C1D8:; return;
label_C1DA:; return;
label_C1DB:; return;
label_C1DD:; return;
label_C1DF:; return;
label_C1E0:; return;
label_C1E2:; return;
label_C1E4:; return;
label_C1E6:; return;
label_C1E8:; return;
label_C1EA:; return;
label_C1ED:; return;
label_C1EF:; return;
label_C1F1:; return;
label_C1F3:; return;
label_C1F5:; return;
label_C1F7:; return;
label_C1F9:; return;
label_C1FB:; return;
label_C1FE:; return;
label_C1FF:; return;
label_C200:; return;
label_C201:; return;
label_C202:; return;
label_C203:; return;
label_C206:; return;
label_C209:; return;
label_C20A:; return;
label_C20C:; return;
label_C20E:; return;
label_C210:; return;
label_C212:; return;
label_C215:; return;
label_C217:; return;
label_C219:; return;
label_C21C:; return;
label_C21D:; return;
label_C21F:; return;
label_C221:; return;
label_C224:; return;
label_C225:; return;
label_C228:; return;
label_C22A:; return;
label_C22B:; return;
label_C22E:; return;
label_C230:; return;
label_C231:; return;
label_C233:; return;
label_C234:; return;
label_C235:; return;
label_C236:; return;
label_C237:; return;
label_C239:; return;
label_C23B:; return;
label_C23D:; return;
label_C23F:; return;
label_C241:; return;
label_C243:; return;
label_C245:; return;
label_C247:; return;
label_C249:; return;
label_C24B:; return;
label_C24D:; return;
label_C24F:; return;
label_C251:; return;
label_C253:; return;
label_C255:; return;
label_C257:; return;
label_C259:; return;
label_C25B:; return;
label_C25D:; return;
label_C25F:; return;
label_C261:; return;
label_C263:; return;
label_C265:; return;
label_C266:; return;
label_C268:; return;
label_C26A:; return;
label_C26C:; return;
label_C26E:; return;
label_C270:; return;
label_C272:; return;
label_C274:; return;
label_C276:; return;
label_C278:; return;
label_C279:; return;
label_C27B:; return;
label_C27C:; return;
label_C27D:; return;
label_C27F:; return;
label_C281:; return;
label_C282:; return;
label_C283:; return;
label_C284:; return;
label_C286:; return;
label_C287:; return;
label_C289:; return;
label_C28B:; return;
label_C28C:; return;
label_C28D:; return;
label_C28F:; return;
label_C291:; return;
label_C293:; return;
label_C295:; return;
label_C297:; return;
label_C29A:; return;
label_C29D:; return;
label_C29F:; return;
label_C2A2:; return;
label_C2A4:; return;
label_C2A7:; return;
label_C2A8:; return;
label_C2A9:; return;
label_C2AA:; return;
label_C2AC:; return;
label_C2AE:; return;
label_C2B0:; return;
label_C2B2:; return;
label_C2B3:; return;
label_C2B4:; return;
label_C2B5:; return;
label_C2B7:; return;
label_C2B9:; return;
label_C2BB:; return;
label_C2BD:; return;
label_C2BE:; return;
label_C2BF:; return;
label_C2C0:; return;
label_C2C1:; return;
label_C2C2:; return;
label_C2C3:; return;
label_C2C4:; return;
label_C2C5:; return;
label_C2C6:; return;
label_C2C7:; return;
label_C2C8:; return;
label_C2C9:; return;
label_C2CA:; return;
label_C2CC:; return;
label_C2CE:; return;
label_C2D0:; return;
label_C2D2:; return;
label_C2D4:; return;
label_C2D6:; return;
label_C2D9:; return;
label_C2DB:; return;
label_C2DE:; return;
label_C2E1:; return;
label_C2E3:; return;
label_C2E4:; return;
label_C2E7:; return;
label_C2E8:; return;
label_C2EA:; return;
label_C2ED:; return;
label_C2EE:; return;
label_C2F0:; return;
label_C2F1:; return;
label_C2F4:; return;
label_C2F5:; return;
label_C2F7:; return;
label_C2F9:; return;
label_C2FA:; return;
label_C2FC:; return;
label_C2FD:; return;
label_C2FF:; return;
label_C300:; return;
label_C302:; return;
label_C305:; return;
label_C306:; return;
label_C308:; return;
label_C309:; return;
label_C30C:; return;
label_C30F:; return;
label_C311:; return;
label_C313:; return;
label_C315:; return;
label_C318:; return;
label_C319:; return;
label_C31B:; return;
label_C31D:; return;
label_C31F:; return;
label_C321:; return;
label_C324:; return;
label_C326:; return;
label_C327:; return;
label_C328:; return;
label_C32A:; return;
label_C32C:; return;
label_C32D:; return;
label_C32F:; return;
label_C331:; return;
label_C333:; return;
label_C335:; return;
label_C338:; return;
label_C33A:; return;
label_C33D:; return;
label_C33F:; return;
label_C342:; return;
label_C344:; return;
label_C347:; return;
label_C349:; return;
label_C34B:; return;
label_C34E:; return;
label_C34F:; return;
label_C351:; return;
label_C354:; return;
label_C356:; return;
label_C358:; return;
label_C35B:; return;
label_C35D:; return;
label_C35F:; return;
label_C362:; return;
label_C364:; return;
label_C366:; return;
label_C368:; return;
label_C36B:; return;
label_C36E:; return;
label_C36F:; return;
label_C371:; return;
label_C373:; return;
label_C376:; return;
label_C378:; return;
label_C37B:; return;
label_C37C:; return;
label_C37D:; return;
label_C37E:; return;
label_C380:; return;
label_C382:; return;
label_C383:; return;
label_C385:; return;
label_C387:; return;
label_C389:; return;
label_C38C:; return;
label_C38E:; return;
label_C391:; return;
label_C393:; return;
label_C396:; return;
label_C398:; return;
label_C39A:; return;
label_C39B:; return;
label_C39D:; return;
label_C39F:; return;
label_C3A0:; return;
label_C3A2:; return;
label_C3A5:; return;
label_C3A7:; return;
label_C3A9:; return;
label_C3AB:; return;
label_C3AD:; return;
label_C3AF:; return;
label_C3B2:; return;
label_C3B4:; return;
label_C3B6:; return;
label_C3B8:; return;
label_C3BB:; return;
label_C3BC:; return;
label_C3BF:; return;
label_C3C1:; return;
label_C3C3:; return;
label_C3C6:; return;
label_C3C8:; return;
label_C3CA:; return;
label_C3CD:; return;
label_C3CF:; return;
label_C3D1:; return;
label_C3D4:; return;
label_C3D6:; return;
label_C3D7:; return;
label_C3D9:; return;
label_C3DA:; return;
label_C3DD:; return;
label_C3DF:; return;
label_C3E1:; return;
label_C3E3:; return;
label_C3E5:; return;
label_C3E6:; return;
label_C3E8:; return;
label_C3EA:; return;
label_C3EC:; return;
label_C3EE:; return;
label_C3F0:; return;
label_C3F2:; return;
label_C3F4:; return;
label_C3F5:; return;
label_C3F6:; return;
label_C3F8:; return;
label_C3FA:; return;
label_C3FB:; return;
label_C3FE:; return;
label_C400:; return;
label_C402:; return;
label_C404:; return;
label_C406:; return;
label_C408:; return;
label_C40A:; return;
label_C40C:; return;
label_C40E:; return;
label_C410:; return;
label_C412:; return;
label_C413:; return;
label_C415:; return;
label_C417:; return;
label_C419:; return;
label_C41A:; return;
label_C41C:; return;
label_C41D:; return;
label_C41E:; return;
label_C420:; return;
label_C422:; return;
label_C423:; return;
label_C425:; return;
label_C427:; return;
label_C429:; return;
label_C42B:; return;
label_C42C:; return;
label_C42F:; return;
label_C431:; return;
label_C433:; return;
label_C434:; return;
label_C436:; return;
label_C438:; return;
label_C439:; return;
label_C43B:; return;
label_C43D:; return;
label_C43F:; return;
label_C442:; return;
label_C444:; return;
label_C446:; return;
label_C447:; return;
label_C449:; return;
label_C44B:; return;
label_C44D:; return;
label_C44F:; return;
label_C452:; return;
label_C454:; return;
label_C457:; return;
label_C459:; return;
label_C45C:; return;
label_C45D:; return;
label_C45F:; return;
label_C461:; return;
label_C464:; return;
label_C466:; return;
label_C468:; return;
label_C46A:; return;
label_C46D:; return;
label_C46E:; return;
label_C470:; return;
label_C472:; return;
label_C474:; return;
label_C477:; return;
label_C479:; return;
label_C47B:; return;
label_C47D:; return;
label_C47F:; return;
label_C481:; return;
label_C484:; return;
label_C486:; return;
label_C487:; return;
label_C48A:; return;
label_C48C:; return;
label_C48E:; return;
label_C490:; return;
label_C492:; return;
label_C494:; return;
label_C496:; return;
label_C498:; return;
label_C49A:; return;
label_C49C:; return;
label_C49E:; return;
label_C4A0:; return;
label_C4A2:; return;
label_C4A5:; return;
label_C4A7:; return;
label_C4A9:; return;
label_C4AA:; return;
label_C4AC:; return;
label_C4AE:; return;
label_C4B0:; return;
label_C4B2:; return;
label_C4B3:; return;
label_C4B4:; return;
label_C4B6:; return;
label_C4B7:; return;
label_C4B8:; return;
label_C4B9:; return;
label_C4BB:; return;
label_C4BD:; return;
label_C4BF:; return;
label_C4C1:; return;
label_C4C3:; return;
label_C4C5:; return;
label_C4C8:; return;
label_C4C9:; return;
label_C4CC:; return;
label_C4CD:; return;
label_C4D0:; return;
label_C4D1:; return;
label_C4D4:; return;
label_C4D5:; return;
label_C4D8:; return;
label_C4D9:; return;
label_C4DB:; return;
label_C4DE:; return;
label_C4E0:; return;
label_C4E2:; return;
label_C4E5:; return;
label_C50F:; return;
label_C510:; return;
label_C511:; return;
label_C512:; return;
label_C515:; return;
label_C517:; return;
label_C51A:; return;
label_C51C:; return;
label_C51F:; return;
label_C521:; return;
label_C522:; return;
label_C524:; return;
label_C526:; return;
label_C528:; return;
label_C52A:; return;
label_C52C:; return;
label_C52E:; return;
label_C530:; return;
label_C532:; return;
label_C533:; return;
label_C535:; return;
label_C536:; return;
label_C538:; return;
label_C53B:; return;
label_C53E:; return;
label_C541:; return;
label_C543:; return;
label_C546:; return;
label_C549:; return;
label_C54A:; return;
label_C54C:; return;
label_C54F:; return;
label_C552:; return;
label_C554:; return;
label_C556:; return;
label_C559:; return;
label_C55B:; return;
label_C55D:; return;
label_C55F:; return;
label_C561:; return;
label_C563:; return;
label_C565:; return;
label_C567:; return;
label_C56A:; return;
label_C56D:; return;
label_C56F:; return;
label_C572:; return;
label_C575:; return;
label_C578:; return;
label_C57A:; return;
label_C57C:; return;
label_C57F:; return;
label_C580:; return;
label_C582:; return;
label_C583:; return;
label_C585:; return;
label_C587:; return;
label_C58A:; return;
label_C58D:; return;
label_C590:; return;
label_C592:; return;
label_C594:; return;
label_C597:; return;
label_C599:; return;
label_C59C:; return;
label_C59F:; return;
label_C5A0:; return;
label_C5A2:; return;
label_C5A5:; return;
label_C5A8:; return;
label_C5A9:; return;
label_C5AA:; return;
label_C5AC:; return;
label_C5AD:; return;
label_C5AF:; return;
label_C5B1:; return;
label_C5B2:; return;
label_C5B3:; return;
label_C5B4:; return;
label_C5B5:; return;
label_C5B6:; return;
label_C5B8:; return;
label_C5BA:; return;
label_C5BD:; return;
label_C5C0:; return;
label_C5C3:; return;
label_C5C5:; return;
label_C5C7:; return;
label_C5CA:; return;
label_C5CD:; return;
label_C5D0:; return;
label_C5D2:; return;
label_C5D4:; return;
label_C5D7:; return;
label_C5D9:; return;
label_C5DC:; return;
label_C5DE:; return;
label_C5E1:; return;
label_C5E4:; return;
label_C5E6:; return;
label_C5E8:; return;
label_C5EB:; return;
label_C5ED:; return;
label_C5F0:; return;
label_C5F2:; return;
label_C5F5:; return;
label_C5F7:; return;
label_C5FA:; return;
label_C5FC:; return;
label_C5FF:; return;
label_C601:; return;
label_C604:; return;
label_C606:; return;
label_C609:; return;
label_C60B:; return;
label_C60E:; return;
label_C610:; return;
label_C613:; return;
label_C615:; return;
label_C618:; return;
label_C61A:; return;
label_C61D:; return;
label_C61F:; return;
label_C622:; return;
label_C624:; return;
label_C627:; return;
label_C629:; return;
label_C62C:; return;
label_C62E:; return;
label_C631:; return;
label_C633:; return;
label_C636:; return;
label_C638:; return;
label_C63B:; return;
label_C63D:; return;
label_C640:; return;
label_C642:; return;
label_C645:; return;
label_C647:; return;
label_C64A:; return;
label_C64C:; return;
label_C64F:; return;
label_C651:; return;
label_C654:; return;
label_C656:; return;
label_C659:; return;
label_C65B:; return;
label_C65E:; return;
label_C660:; return;
label_C663:; return;
label_C665:; return;
label_C668:; return;
label_C66A:; return;
label_C66D:; return;
label_C66F:; return;
label_C672:; return;
label_C674:; return;
label_C677:; return;
label_C679:; return;
label_C67C:; return;
label_C67E:; return;
label_C681:; return;
label_C683:; return;
label_C686:; return;
label_C688:; return;
label_C68B:; return;
label_C68D:; return;
label_C690:; return;
label_C692:; return;
label_C695:; return;
label_C697:; return;
label_C69A:; return;
label_C69C:; return;
label_C69F:; return;
label_C6A1:; return;
label_C6A4:; return;
label_C6A6:; return;
label_C6A9:; return;
label_C6AB:; return;
label_C6AE:; return;
label_C6B0:; return;
label_C6B3:; return;
label_C6B5:; return;
label_C6B8:; return;
label_C6BA:; return;
label_C6BD:; return;
label_C6BF:; return;
label_C6C2:; return;
label_C6C4:; return;
label_C6C7:; return;
label_C6C9:; return;
label_C6CC:; return;
label_C6CE:; return;
label_C6D1:; return;
label_C6D3:; return;
label_C6D6:; return;
label_C6D8:; return;
label_C6DB:; return;
label_C6DD:; return;
label_C6E0:; return;
label_C6E2:; return;
label_C6E4:; return;
label_C6E5:; return;
label_C6E7:; return;
label_C6E9:; return;
label_C6EC:; return;
label_C6EF:; return;
label_C6F0:; return;
label_C6F3:; return;
label_C6F4:; return;
label_C6F6:; return;
label_C6F8:; return;
label_C6F9:; return;
label_C6FB:; return;
label_C6FD:; return;
label_C6FE:; return;
label_C701:; return;
label_C703:; return;
label_C705:; return;
label_C708:; return;
label_C709:; return;
label_C70A:; return;
label_C70C:; return;
label_C70E:; return;
label_C711:; return;
label_C713:; return;
label_C715:; return;
label_C717:; return;
label_C718:; return;
label_C71A:; return;
label_C71C:; return;
label_C71E:; return;
label_C71F:; return;
label_C720:; return;
label_C721:; return;
label_C724:; return;
label_C725:; return;
label_C727:; return;
label_C729:; return;
label_C72A:; return;
label_C72C:; return;
label_C72D:; return;
label_C72F:; return;
label_C732:; return;
label_C733:; return;
label_C735:; return;
label_C737:; return;
label_C738:; return;
label_C73B:; return;
label_C73D:; return;
label_C73F:; return;
label_C742:; return;
label_C743:; return;
label_C744:; return;
label_C746:; return;
label_C749:; return;
label_C74B:; return;
label_C74D:; return;
label_C74F:; return;
label_C750:; return;
label_C752:; return;
label_C754:; return;
label_C757:; return;
label_C759:; return;
label_C75C:; return;
label_C75D:; return;
label_C75F:; return;
label_C761:; return;
label_C762:; return;
label_C764:; return;
label_C765:; return;
label_C767:; return;
label_C769:; return;
label_C76C:; return;
label_C76E:; return;
label_C770:; return;
label_C773:; return;
label_C775:; return;
label_C777:; return;
label_C779:; return;
label_C77B:; return;
label_C77D:; return;
label_C77F:; return;
label_C780:; return;
label_C781:; return;
label_C783:; return;
label_C785:; return;
label_C787:; return;
label_C789:; return;
label_C78B:; return;
label_C78C:; return;
label_C78D:; return;
label_C78F:; return;
label_C791:; return;
label_C794:; return;
label_C795:; return;
label_C796:; return;
label_C798:; return;
label_C79A:; return;
label_C79D:; return;
label_C79F:; return;
label_C7A1:; return;
label_C7A2:; return;
label_C7A4:; return;
label_C7A6:; return;
label_C7A7:; return;
label_C7A8:; return;
label_C7AB:; return;
label_C7AD:; return;
label_C7AE:; return;
label_C7B0:; return;
label_C7B1:; return;
label_C7B3:; return;
label_C7B4:; return;
label_C7B6:; return;
label_C7B9:; return;
label_C7BB:; return;
label_C7BC:; return;
label_C7BD:; return;
label_C7BF:; return;
label_C7C1:; return;
label_C7C4:; return;
label_C7C6:; return;
label_C7C8:; return;
label_C7CA:; return;
label_C7CD:; return;
label_C7D0:; return;
label_C7D2:; return;
label_C7D5:; return;
label_C7D7:; return;
label_C7D9:; return;
label_C7DB:; return;
label_C7DD:; return;
label_C7E0:; return;
label_C7E2:; return;
label_C7E5:; return;
label_C7E7:; return;
label_C7E9:; return;
label_C7EC:; return;
label_C7EE:; return;
label_C7F0:; return;
label_C7F2:; return;
label_C7F4:; return;
label_C7F6:; return;
label_C7F7:; return;
label_C7F9:; return;
label_C7FB:; return;
label_C7FD:; return;
label_C800:; return;
label_C801:; return;
label_C803:; return;
label_C805:; return;
label_C807:; return;
label_C809:; return;
label_C80B:; return;
label_C80D:; return;
label_C80F:; return;
label_C811:; return;
label_C813:; return;
label_C815:; return;
label_C818:; return;
label_C81A:; return;
label_C81D:; return;
label_C81F:; return;
label_C821:; return;
label_C823:; return;
label_C825:; return;
label_C826:; return;
label_C829:; return;
label_C82B:; return;
label_C82D:; return;
label_C82F:; return;
label_C830:; return;
label_C832:; return;
label_C834:; return;
label_C836:; return;
label_C838:; return;
label_C83A:; return;
label_C83D:; return;
label_C83E:; return;
label_C840:; return;
label_C843:; return;
label_C846:; return;
label_C849:; return;
label_C84C:; return;
label_C84E:; return;
label_C850:; return;
label_C851:; return;
label_C853:; return;
label_C854:; return;
label_C856:; return;
label_C859:; return;
label_C85B:; return;
label_C85E:; return;
label_C860:; return;
label_C863:; return;
label_C865:; return;
label_C867:; return;
label_C869:; return;
label_C86C:; return;
label_C86F:; return;
label_C872:; return;
label_C874:; return;
label_C875:; return;
label_C877:; return;
label_C879:; return;
label_C87B:; return;
label_C87D:; return;
label_C87F:; return;
label_C881:; return;
label_C883:; return;
label_C885:; return;
label_C888:; return;
label_C88B:; return;
label_C88D:; return;
label_C890:; return;
label_C892:; return;
label_C895:; return;
label_C897:; return;
label_C899:; return;
label_C89C:; return;
label_C89D:; return;
label_C89F:; return;
label_C8A1:; return;
label_C8A2:; return;
label_C8A4:; return;
label_C8A6:; return;
label_C8A7:; return;
label_C8A9:; return;
label_C8AB:; return;
label_C8AD:; return;
label_C8B0:; return;
label_C8B2:; return;
label_C8B5:; return;
label_C8B7:; return;
label_C8B8:; return;
label_C8BA:; return;
label_C8BB:; return;
label_C8BD:; return;
label_C8BE:; return;
label_C8C0:; return;
label_C8C2:; return;
label_C8C4:; return;
label_C8C7:; return;
label_C8C8:; return;
label_C8C9:; return;
label_C8CA:; return;
label_C8CC:; return;
label_C8CE:; return;
label_C8D1:; return;
label_C8D3:; return;
label_C8D5:; return;
label_C8D7:; return;
label_C8D9:; return;
label_C8DC:; return;
label_C8DE:; return;
label_C8E1:; return;
label_C8E3:; return;
label_C8E5:; return;
label_C8E6:; return;
label_C8E9:; return;
label_C8EC:; return;
label_C8EF:; return;
label_C8F2:; return;
label_C8F5:; return;
label_C8F8:; return;
label_C8FA:; return;
label_C8FC:; return;
label_C8FE:; return;
label_C900:; return;
label_C902:; return;
label_C904:; return;
label_C906:; return;
label_C908:; return;
label_C90A:; return;
label_C90C:; return;
label_C90E:; return;
label_C911:; return;
label_C914:; return;
label_C916:; return;
label_C919:; return;
label_C91B:; return;
label_C91D:; return;
label_C920:; return;
label_C922:; return;
label_C925:; return;
label_C927:; return;
label_C92A:; return;
label_C92B:; return;
label_C92E:; return;
label_C931:; return;
label_C934:; return;
label_C936:; return;
label_C938:; return;
label_C93B:; return;
label_C93D:; return;
label_C940:; return;
label_C942:; return;
label_C945:; return;
label_C948:; return;
label_C94B:; return;
label_C94E:; return;
label_C950:; return;
label_C952:; return;
label_C955:; return;
label_C958:; return;
label_C95A:; return;
label_C95C:; return;
label_C95F:; return;
label_C962:; return;
label_C964:; return;
label_C966:; return;
label_C969:; return;
label_C96B:; return;
label_C96E:; return;
label_C970:; return;
label_C972:; return;
label_C974:; return;
label_C976:; return;
label_C978:; return;
label_C97B:; return;
label_C97D:; return;
label_C97E:; return;
label_C980:; return;
label_C982:; return;
label_C984:; return;
label_C986:; return;
label_C988:; return;
label_C98A:; return;
label_C98C:; return;
label_C98F:; return;
label_C992:; return;
label_C994:; return;
label_C996:; return;
label_C998:; return;
label_C99B:; return;
label_C99D:; return;
label_C99F:; return;
label_C9A0:; return;
label_C9A3:; return;
label_C9A5:; return;
label_C9A6:; return;
label_C9A8:; return;
label_C9AA:; return;
label_C9AC:; return;
label_C9AE:; return;
label_C9B1:; return;
label_C9B3:; return;
label_C9B5:; return;
label_C9B7:; return;
label_C9B9:; return;
label_C9BC:; return;
label_C9BD:; return;
label_C9BF:; return;
label_C9C1:; return;
label_C9C3:; return;
label_C9C4:; return;
label_C9C6:; return;
label_C9C8:; return;
label_C9CA:; return;
label_C9CC:; return;
label_C9CF:; return;
label_C9D1:; return;
label_C9D4:; return;
label_C9D7:; return;
label_C9DA:; return;
label_C9DD:; return;
label_C9DF:; return;
label_C9E1:; return;
label_C9E3:; return;
label_C9E5:; return;
label_C9E8:; return;
label_C9EB:; return;
label_C9EE:; return;
label_C9F0:; return;
label_C9F2:; return;
label_C9F4:; return;
label_C9F6:; return;
label_C9F9:; return;
label_C9FB:; return;
label_C9FE:; return;
label_CA00:; return;
label_CA02:; return;
label_CA03:; return;
label_CA05:; return;
label_CA07:; return;
label_CA0A:; return;
label_CA0C:; return;
label_CA0E:; return;
label_CA10:; return;
label_CA13:; return;
label_CA16:; return;
label_CA18:; return;
label_CA1A:; return;
label_CA1C:; return;
label_CA1E:; return;
label_CA20:; return;
label_CA22:; return;
label_CA23:; return;
label_CA25:; return;
label_CA27:; return;
label_CA28:; return;
label_CA2B:; return;
label_CA2D:; return;
label_CA30:; return;
label_CA31:; return;
label_CA33:; return;
label_CA35:; return;
label_CA36:; return;
label_CA37:; return;
label_CA3A:; return;
label_CA3D:; return;
label_CA3F:; return;
label_CA41:; return;
label_CA44:; return;
label_CA47:; return;
label_CA49:; return;
label_CA4C:; return;
label_CA4E:; return;
label_CA50:; return;
label_CA52:; return;
label_CA54:; return;
label_CA57:; return;
label_CA59:; return;
label_CA5C:; return;
label_CA5E:; return;
label_CA5F:; return;
label_CA61:; return;
label_CA64:; return;
label_CA66:; return;
label_CA69:; return;
label_CA6C:; return;
label_CA6D:; return;
label_CA6E:; return;
label_CA70:; return;
label_CA72:; return;
label_CA73:; return;
label_CA76:; return;
label_CA78:; return;
label_CA7A:; return;
label_CA7D:; return;
label_CA7E:; return;
label_CA80:; return;
label_CA82:; return;
label_CA83:; return;
label_CA86:; return;
label_CA88:; return;
label_CA8B:; return;
label_CA8E:; return;
label_CA8F:; return;
label_CA90:; return;
label_CA92:; return;
label_CA94:; return;
label_CA95:; return;
label_CA96:; return;
label_CA99:; return;
label_CA9A:; return;
label_CA9B:; return;
label_CA9C:; return;
label_CA9D:; return;
label_CAA0:; return;
label_CAA1:; return;
label_CAA3:; return;
label_CAA6:; return;
label_CAA8:; return;
label_CAAA:; return;
label_CAAB:; return;
label_CAAD:; return;
label_CAAF:; return;
label_CAB1:; return;
label_CAB3:; return;
label_CAB4:; return;
label_CAB6:; return;
label_CAB9:; return;
label_CABB:; return;
label_CABC:; return;
label_CABF:; return;
label_CAC0:; return;
label_CAC1:; return;
label_CAC3:; return;
label_CAC5:; return;
label_CAC6:; return;
label_CAC7:; return;
label_CACA:; return;
label_CACB:; return;
label_CACC:; return;
label_CACF:; return;
label_CAD1:; return;
label_CAD3:; return;
label_CAD6:; return;
label_CAD8:; return;
label_CADA:; return;
label_CADB:; return;
label_CADD:; return;
label_CADE:; return;
label_CAE0:; return;
label_CAE2:; return;
label_CAE3:; return;
label_CAE5:; return;
label_CAE7:; return;
label_CAE9:; return;
label_CAEB:; return;
label_CAEC:; return;
label_CAEE:; return;
label_CAEF:; return;
label_CAF1:; return;
label_CAF3:; return;
label_CAF5:; return;
label_CAF7:; return;
label_CAFA:; return;
label_CAFC:; return;
label_CAFF:; return;
label_CB02:; return;
label_CB04:; return;
label_CB05:; return;
label_CB07:; return;
label_CB09:; return;
label_CB0C:; return;
label_CB0E:; return;
label_CB10:; return;
label_CB12:; return;
label_CB14:; return;
label_CB17:; return;
label_CB18:; return;
label_CB19:; return;
label_CB1B:; return;
label_CB1D:; return;
label_CB20:; return;
label_CB23:; return;
label_CB26:; return;
label_CB29:; return;
label_CB2B:; return;
label_CB2D:; return;
label_CB30:; return;
label_CB33:; return;
label_CB36:; return;
label_CB39:; return;
label_CB3C:; return;
label_CB3F:; return;
label_CB42:; return;
label_CB45:; return;
label_CB48:; return;
label_CB4B:; return;
label_CB4E:; return;
label_CB51:; return;
label_CB54:; return;
label_CB57:; return;
label_CB5A:; return;
label_CB5D:; return;
label_CB60:; return;
label_CB63:; return;
label_CB66:; return;
label_CB68:; return;
label_CB6A:; return;
label_CB6D:; return;
label_CB70:; return;
label_CB72:; return;
label_CB73:; return;
label_CB74:; return;
label_CB75:; return;
label_CB78:; return;
label_CB79:; return;
label_CB7A:; return;
label_CB7B:; return;
label_CB7E:; return;
label_CB7F:; return;
label_CB81:; return;
label_CB84:; return;
label_CB86:; return;
label_CB87:; return;
label_CB89:; return;
label_CB8B:; return;
label_CB8C:; return;
label_CB8D:; return;
label_CB8E:; return;
label_CB90:; return;
label_CB92:; return;
label_CB94:; return;
label_CB96:; return;
label_CB98:; return;
label_CB9A:; return;
label_CB9C:; return;
label_CB9E:; return;
label_CBA0:; return;
label_CBA2:; return;
label_CBA4:; return;
label_CBA6:; return;
label_CBA8:; return;
label_CBAA:; return;
label_CBAC:; return;
label_CBAE:; return;
label_CBB0:; return;
label_CBB2:; return;
label_CBB4:; return;
label_CBB6:; return;
label_CBB8:; return;
label_CBBA:; return;
label_CBBC:; return;
label_CBBE:; return;
label_CBC0:; return;
label_CBC2:; return;
label_CBC4:; return;
label_CBC6:; return;
label_CBC8:; return;
label_CBCA:; return;
label_CBCC:; return;
label_CBCE:; return;
label_CBD0:; return;
label_CBD2:; return;
label_CBD4:; return;
label_CBD6:; return;
label_CBD8:; return;
label_CBDA:; return;
label_CBDC:; return;
label_CBDE:; return;
label_CBE0:; return;
label_CBE2:; return;
label_CBE4:; return;
label_CBE6:; return;
label_CBE8:; return;
label_CBEB:; return;
label_CBEE:; return;
label_CBEF:; return;
label_CBF1:; return;
label_CBF3:; return;
label_CBF5:; return;
label_CBF7:; return;
label_CBF9:; return;
label_CBFB:; return;
}

void func_BC0E_b5(void) { /* MusicChannelInstr_SongNoteNoise */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC0E_b5");
#endif
label_BC0E:; /* MusicChannelInstr_SongNoteNoise */
    /* $BC0E: AD */ nes_cpu_instruction_boundary(0xBC0E, 4); g_cpu.A = nes_read(0x0688); FLAG_NZ(g_cpu.A);
label_BC11:;
    /* $BC11: 29 */ nes_cpu_instruction_boundary(0xBC11, 2); g_cpu.A &= 0xFC; FLAG_NZ(g_cpu.A);
label_BC13:;
    /* $BC13: D0 */ nes_cpu_instruction_boundary(0xBC13, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BC27; }
label_BC15:;
    /* $BC15: B9 */ nes_cpu_instruction_boundary(0xBC15, 4); g_cpu.A = nes_read((0xB230 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BC18:;
    /* $BC18: 8D */ nes_cpu_instruction_boundary(0xBC18, 4); nes_write(0x400C, g_cpu.A);
label_BC1B:;
    /* $BC1B: B9 */ nes_cpu_instruction_boundary(0xBC1B, 4); g_cpu.A = nes_read((0xB231 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BC1E:;
    /* $BC1E: 8D */ nes_cpu_instruction_boundary(0xBC1E, 4); nes_write(0x400E, g_cpu.A);
label_BC21:;
    /* $BC21: B9 */ nes_cpu_instruction_boundary(0xBC21, 4); g_cpu.A = nes_read((0xB232 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BC24:;
    /* $BC24: 8D */ nes_cpu_instruction_boundary(0xBC24, 4); nes_write(0x400F, g_cpu.A);
label_BC27:; /* MusicChannelInstr_SongNoteNoise_endIf_A */
    /* $BC27: 4C */ nes_cpu_instruction_boundary(0xBC27, 3); nes_cpu_instruction_boundary(0xBBD8, 2); func_BBD8_b5(); return;
}

void func_BBE7_b5(void) { /* UpdateMusicTriLinearCount */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BBE7_b5");
#endif
label_BBE7:; /* UpdateMusicTriLinearCount */
    /* $BBE7: AD */ nes_cpu_instruction_boundary(0xBBE7, 4); g_cpu.A = nes_read(0x062D); FLAG_NZ(g_cpu.A);
label_BBEA:;
    /* $BBEA: 29 */ nes_cpu_instruction_boundary(0xBBEA, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_BBEC:;
    /* $BBEC: D0 */ nes_cpu_instruction_boundary(0xBBEC, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_BC08; }
label_BBEE:;
    /* $BBEE: AD */ nes_cpu_instruction_boundary(0xBBEE, 4); g_cpu.A = nes_read(0x062D); FLAG_NZ(g_cpu.A);
label_BBF1:;
    /* $BBF1: 29 */ nes_cpu_instruction_boundary(0xBBF1, 2); g_cpu.A &= 0xF0; FLAG_NZ(g_cpu.A);
label_BBF3:;
    /* $BBF3: D0 */ nes_cpu_instruction_boundary(0xBBF3, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BBF9; }
label_BBF5:;
    /* $BBF5: 98 */ nes_cpu_instruction_boundary(0xBBF5, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_BBF6:;
    /* $BBF6: 4C */ nes_cpu_instruction_boundary(0xBBF6, 3); nes_cpu_instruction_boundary(0xBBFD, 2); func_BBFD_b5(); return;
label_BBF9:; /* UpdateMusicTriLinearCount_endIf_A */
    /* $BBF9: A9 */ nes_cpu_instruction_boundary(0xBBF9, 2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_BBFB:;
    /* $BBFB: D0 */ nes_cpu_instruction_boundary(0xBBFB, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_BC08; }
label_BBFD:; /* UpdateMusicTriLinearCount_setToNoteLength */
    /* $BBFD: 18 */ nes_cpu_instruction_boundary(0xBBFD, 2); g_cpu.C = 0;
label_BBFE:;
    /* $BBFE: 69 */ nes_cpu_instruction_boundary(0xBBFE, 2); { uint16_t r = g_cpu.A + 0xFF + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xFF); g_cpu.A=r&0xFF; }
label_BC00:;
    /* $BC00: 0A */ nes_cpu_instruction_boundary(0xBC00, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_BC01:;
    /* $BC01: 0A */ nes_cpu_instruction_boundary(0xBC01, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_BC02:;
    /* $BC02: C9 */ nes_cpu_instruction_boundary(0xBC02, 2); { int r=g_cpu.A-0x3C; g_cpu.C=(g_cpu.A>=0x3C)?1:0; FLAG_NZ(r&0xFF); }
label_BC04:;
    /* $BC04: 90 */ nes_cpu_instruction_boundary(0xBC04, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_BC08; }
label_BC06:;
    /* $BC06: A9 */ nes_cpu_instruction_boundary(0xBC06, 2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_BC08:; /* UpdateMusicTriLinearCount_endIf_B */
    /* $BC08: 8D */ nes_cpu_instruction_boundary(0xBC08, 4); nes_write(0x062A, g_cpu.A);
label_BC0B:;
    /* $BC0B: 4C */ nes_cpu_instruction_boundary(0xBC0B, 3); nes_cpu_instruction_boundary(0xBB67, 2); func_BB67_b5(); return;
}

void func_BAE3_b5(void) { /* IncrementToNextMusicChannel */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BAE3_b5");
#endif
label_BAE3:; /* IncrementToNextMusicChannel */
    /* $BAE3: E8 */ nes_cpu_instruction_boundary(0xBAE3, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_BAE4:;
    /* $BAE4: 8A */ nes_cpu_instruction_boundary(0xBAE4, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BAE5:;
    /* $BAE5: C9 */ nes_cpu_instruction_boundary(0xBAE5, 2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_BAE7:;
    /* $BAE7: F0 */ nes_cpu_instruction_boundary(0xBAE7, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBAD1); return; }
label_BAE9:;
    /* $BAE9: AD */ nes_cpu_instruction_boundary(0xBAE9, 4); g_cpu.A = nes_read(0x064B); FLAG_NZ(g_cpu.A);
label_BAEC:;
    /* $BAEC: 18 */ nes_cpu_instruction_boundary(0xBAEC, 2); g_cpu.C = 0;
label_BAED:;
    /* $BAED: 69 */ nes_cpu_instruction_boundary(0xBAED, 2); { uint16_t r = g_cpu.A + 0x04 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x04); g_cpu.A=r&0xFF; }
label_BAEF:;
    /* $BAEF: 8D */ nes_cpu_instruction_boundary(0xBAEF, 4); nes_write(0x064B, g_cpu.A);
label_BAF2:; /* UpdateMusicChannel */
    /* $BAF2: 8A */ nes_cpu_instruction_boundary(0xBAF2, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BAF3:;
    /* $BAF3: 0A */ nes_cpu_instruction_boundary(0xBAF3, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_BAF4:;
    /* $BAF4: AA */ nes_cpu_instruction_boundary(0xBAF4, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BAF5:;
    /* $BAF5: BD */ nes_cpu_instruction_boundary(0xBAF5, 4); g_cpu.A = nes_read((0x0630 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BAF8:;
    /* $BAF8: 85 */ nes_cpu_instruction_boundary(0xBAF8, 3); nes_write(0xE6, g_cpu.A);
label_BAFA:;
    /* $BAFA: BD */ nes_cpu_instruction_boundary(0xBAFA, 4); g_cpu.A = nes_read((0x0631 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BAFD:;
    /* $BAFD: 85 */ nes_cpu_instruction_boundary(0xBAFD, 3); nes_write(0xE7, g_cpu.A);
label_BAFF:;
    /* $BAFF: BD */ nes_cpu_instruction_boundary(0xBAFF, 4); g_cpu.A = nes_read((0x0631 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB02:;
    /* $BB02: F0 */ nes_cpu_instruction_boundary(0xBB02, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xBAE0); return; }
label_BB04:;
    /* $BB04: 8A */ nes_cpu_instruction_boundary(0xBB04, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BB05:;
    /* $BB05: 4A */ nes_cpu_instruction_boundary(0xBB05, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_BB06:;
    /* $BB06: AA */ nes_cpu_instruction_boundary(0xBB06, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BB07:;
    /* $BB07: DE */ nes_cpu_instruction_boundary(0xBB07, 7); { uint16_t a=(0x0640 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB0A:;
    /* $BB0A: D0 */ nes_cpu_instruction_boundary(0xBB0A, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xBAE3, 2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BAE3;
    }
label_BB0C:; /* LoadNextMusicChannelInstr */
    /* $BB0C: BC */ nes_cpu_instruction_boundary(0xBB0C, 4); g_cpu.Y = nes_read((0x0638 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BB0F:;
    /* $BB0F: FE */ nes_cpu_instruction_boundary(0xBB0F, 7); { uint16_t a=(0x0638 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB12:;
    /* $BB12: B1 */ nes_cpu_instruction_boundary(0xBB12, 5); g_cpu.A = nes_read((nes_read16zp(0xE6) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB14:;
    /* $BB14: F0 */ nes_cpu_instruction_boundary(0xBB14, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xBACD); return; }
label_BB16:;
    /* $BB16: A8 */ nes_cpu_instruction_boundary(0xBB16, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BB17:;
    /* $BB17: C9 */ nes_cpu_instruction_boundary(0xBB17, 2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_BB19:;
    /* $BB19: F0 */ nes_cpu_instruction_boundary(0xBB19, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB24; }
label_BB1B:;
    /* $BB1B: 29 */ nes_cpu_instruction_boundary(0xBB1B, 2); g_cpu.A &= 0xC0; FLAG_NZ(g_cpu.A);
label_BB1D:;
    /* $BB1D: C9 */ nes_cpu_instruction_boundary(0xBB1D, 2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_BB1F:;
    /* $BB1F: F0 */ nes_cpu_instruction_boundary(0xBB1F, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB34; }
label_BB21:;
    /* $BB21: 4C */ nes_cpu_instruction_boundary(0xBB21, 3); nes_cpu_instruction_boundary(0xBB4C, 2); func_BB4C_b5(); return;
label_BB24:; /* MusicChannelInstr_SongRepeat */
    /* $BB24: BD */ nes_cpu_instruction_boundary(0xBB24, 4); g_cpu.A = nes_read((0x0624 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB27:;
    /* $BB27: F0 */ nes_cpu_instruction_boundary(0xBB27, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB43; }
label_BB29:;
    /* $BB29: DE */ nes_cpu_instruction_boundary(0xBB29, 7); { uint16_t a=(0x0624 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB2C:;
    /* $BB2C: BD */ nes_cpu_instruction_boundary(0xBB2C, 4); g_cpu.A = nes_read((0x063C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB2F:;
    /* $BB2F: 9D */ nes_cpu_instruction_boundary(0xBB2F, 5); nes_write((0x0638 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB32:;
    /* $BB32: D0 */ nes_cpu_instruction_boundary(0xBB32, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB43; }
label_BB34:; /* MusicChannelInstr_SongRepeatSetup */
    /* $BB34: 98 */ nes_cpu_instruction_boundary(0xBB34, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_BB35:;
    /* $BB35: 29 */ nes_cpu_instruction_boundary(0xBB35, 2); g_cpu.A &= 0x3F; FLAG_NZ(g_cpu.A);
label_BB37:;
    /* $BB37: 9D */ nes_cpu_instruction_boundary(0xBB37, 5); nes_write((0x0624 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB3A:;
    /* $BB3A: DE */ nes_cpu_instruction_boundary(0xBB3A, 7); { uint16_t a=(0x0624 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB3D:;
    /* $BB3D: BD */ nes_cpu_instruction_boundary(0xBB3D, 4); g_cpu.A = nes_read((0x0638 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB40:;
    /* $BB40: 9D */ nes_cpu_instruction_boundary(0xBB40, 5); nes_write((0x063C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB43:; /* GotoLoadNextMusicChannelInstr */
    /* $BB43: 4C */ nes_cpu_instruction_boundary(0xBB43, 3); nes_cpu_instruction_boundary(0xBB0C, 2);
    goto label_BB0C;
}

void func_BBD8_b5(void) { /* SetMusicInstrDelayToLength */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BBD8_b5");
#endif
label_BBD8:; /* SetMusicInstrDelayToLength */
    /* $BBD8: BD */ nes_cpu_instruction_boundary(0xBBD8, 4); g_cpu.A = nes_read((0x0620 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBDB:;
    /* $BBDB: 9D */ nes_cpu_instruction_boundary(0xBBDB, 5); nes_write((0x0640 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BBDE:;
    /* $BBDE: 4C */ nes_cpu_instruction_boundary(0xBBDE, 3); nes_cpu_instruction_boundary(0xBAE3, 2); func_BAE3_b5(); return;
}

void func_BBFD_b5(void) { /* UpdateMusicTriLinearCount_setToNoteLength */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BBFD_b5");
#endif
label_BBFD:; /* UpdateMusicTriLinearCount_setToNoteLength */
    /* $BBFD: 18 */ nes_cpu_instruction_boundary(0xBBFD, 2); g_cpu.C = 0;
label_BBFE:;
    /* $BBFE: 69 */ nes_cpu_instruction_boundary(0xBBFE, 2); { uint16_t r = g_cpu.A + 0xFF + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xFF); g_cpu.A=r&0xFF; }
label_BC00:;
    /* $BC00: 0A */ nes_cpu_instruction_boundary(0xBC00, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_BC01:;
    /* $BC01: 0A */ nes_cpu_instruction_boundary(0xBC01, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_BC02:;
    /* $BC02: C9 */ nes_cpu_instruction_boundary(0xBC02, 2); { int r=g_cpu.A-0x3C; g_cpu.C=(g_cpu.A>=0x3C)?1:0; FLAG_NZ(r&0xFF); }
label_BC04:;
    /* $BC04: 90 */ nes_cpu_instruction_boundary(0xBC04, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_BC08; }
label_BC06:;
    /* $BC06: A9 */ nes_cpu_instruction_boundary(0xBC06, 2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_BC08:; /* UpdateMusicTriLinearCount_endIf_B */
    /* $BC08: 8D */ nes_cpu_instruction_boundary(0xBC08, 4); nes_write(0x062A, g_cpu.A);
label_BC0B:;
    /* $BC0B: 4C */ nes_cpu_instruction_boundary(0xBC0B, 3); nes_cpu_instruction_boundary(0xBB67, 2); func_BB67_b5(); return;
}

void func_BB67_b5(void) { /* LoadNextMusicChannelInstr_Continued_ReturnFromUpdateMusicTriLinearCount */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB67_b5");
#endif
label_BB67:; /* LoadNextMusicChannelInstr_Continued_ReturnFromUpdateMusicTriLinearCount */
    /* $BB67: BC */ nes_cpu_instruction_boundary(0xBB67, 4); g_cpu.Y = nes_read((0x0638 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BB6A:;
    /* $BB6A: FE */ nes_cpu_instruction_boundary(0xBB6A, 7); { uint16_t a=(0x0638 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB6D:;
    /* $BB6D: B1 */ nes_cpu_instruction_boundary(0xBB6D, 5); g_cpu.A = nes_read((nes_read16zp(0xE6) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB6F:;
    /* $BB6F: A8 */ nes_cpu_instruction_boundary(0xBB6F, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BB70:; /* LoadNextMusicChannelInstr_Continued_noteOrRest */
    /* $BB70: 8A */ nes_cpu_instruction_boundary(0xBB70, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BB71:;
    /* $BB71: C9 */ nes_cpu_instruction_boundary(0xBB71, 2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_BB73:;
    /* $BB73: F0 */ nes_cpu_instruction_boundary(0xBB73, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBB46); return; }
label_BB75:;
    /* $BB75: 48 */ nes_cpu_instruction_boundary(0xBB75, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_BB76:;
    /* $BB76: AE */ nes_cpu_instruction_boundary(0xBB76, 4); g_cpu.X = nes_read(0x064B); FLAG_NZ(g_cpu.X);
label_BB79:;
    /* $BB79: B9 */ nes_cpu_instruction_boundary(0xBB79, 4); g_cpu.A = nes_read((0xBEA8 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB7C:;
    /* $BB7C: F0 */ nes_cpu_instruction_boundary(0xBB7C, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB89; }
label_BB7E:;
    /* $BB7E: 9D */ nes_cpu_instruction_boundary(0xBB7E, 5); nes_write((0x0600 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB81:;
    /* $BB81: B9 */ nes_cpu_instruction_boundary(0xBB81, 4); g_cpu.A = nes_read((0xBEA7 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB84:;
    /* $BB84: 09 */ nes_cpu_instruction_boundary(0xBB84, 2); g_cpu.A |= 0x08; FLAG_NZ(g_cpu.A);
label_BB86:;
    /* $BB86: 9D */ nes_cpu_instruction_boundary(0xBB86, 5); nes_write((0x0601 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB89:; /* LoadNextMusicChannelInstr_Continued_endIf_A */
    /* $BB89: A8 */ nes_cpu_instruction_boundary(0xBB89, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BB8A:;
    /* $BB8A: 68 */ nes_cpu_instruction_boundary(0xBB8A, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_BB8B:;
    /* $BB8B: AA */ nes_cpu_instruction_boundary(0xBB8B, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BB8C:;
    /* $BB8C: 98 */ nes_cpu_instruction_boundary(0xBB8C, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_BB8D:;
    /* $BB8D: D0 */ nes_cpu_instruction_boundary(0xBB8D, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB9E; }
label_BB8F:;
    /* $BB8F: A9 */ nes_cpu_instruction_boundary(0xBB8F, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BB91:;
    /* $BB91: 85 */ nes_cpu_instruction_boundary(0xBB91, 3); nes_write(0xEA, g_cpu.A);
label_BB93:;
    /* $BB93: 8A */ nes_cpu_instruction_boundary(0xBB93, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BB94:;
    /* $BB94: C9 */ nes_cpu_instruction_boundary(0xBB94, 2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_BB96:;
    /* $BB96: F0 */ nes_cpu_instruction_boundary(0xBB96, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BBA3; }
label_BB98:;
    /* $BB98: A9 */ nes_cpu_instruction_boundary(0xBB98, 2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_BB9A:;
    /* $BB9A: 85 */ nes_cpu_instruction_boundary(0xBB9A, 3); nes_write(0xEA, g_cpu.A);
label_BB9C:;
    /* $BB9C: D0 */ nes_cpu_instruction_boundary(0xBB9C, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BBA3; }
label_BB9E:; /* LoadNextMusicChannelInstr_Continued_else_B */
    /* $BB9E: BD */ nes_cpu_instruction_boundary(0xBB9E, 4); g_cpu.A = nes_read((0x0628 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBA1:;
    /* $BBA1: 85 */ nes_cpu_instruction_boundary(0xBBA1, 3); nes_write(0xEA, g_cpu.A);
label_BBA3:; /* LoadNextMusicChannelInstr_Continued_endIf_B */
    /* $BBA3: 8A */ nes_cpu_instruction_boundary(0xBBA3, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BBA4:;
    /* $BBA4: DE */ nes_cpu_instruction_boundary(0xBBA4, 7); { uint16_t a=(0x0653 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BBA7:;
    /* $BBA7: DD */ nes_cpu_instruction_boundary(0xBBA7, 4); { uint8_t m=nes_read((0x0653 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BBAA:;
    /* $BBAA: F0 */ nes_cpu_instruction_boundary(0xBBAA, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BBE1; }
label_BBAC:;
    /* $BBAC: FE */ nes_cpu_instruction_boundary(0xBBAC, 7); { uint16_t a=(0x0653 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BBAF:;
    /* $BBAF: AC */ nes_cpu_instruction_boundary(0xBBAF, 4); g_cpu.Y = nes_read(0x064B); FLAG_NZ(g_cpu.Y);
label_BBB2:;
    /* $BBB2: 8A */ nes_cpu_instruction_boundary(0xBBB2, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BBB3:;
    /* $BBB3: C9 */ nes_cpu_instruction_boundary(0xBBB3, 2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_BBB5:;
    /* $BBB5: F0 */ nes_cpu_instruction_boundary(0xBBB5, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BBBC; }
label_BBB7:;
    /* $BBB7: BD */ nes_cpu_instruction_boundary(0xBBB7, 4); g_cpu.A = nes_read((0x062E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBBA:;
    /* $BBBA: D0 */ nes_cpu_instruction_boundary(0xBBBA, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BBC1; }
label_BBBC:; /* LoadNextMusicChannelInstr_Continued_if_Cntrl0Data */
    /* $BBBC: A5 */ nes_cpu_instruction_boundary(0xBBBC, 3); g_cpu.A = nes_read(0xEA); FLAG_NZ(g_cpu.A);
label_BBBE:;
    /* $BBBE: 99 */ nes_cpu_instruction_boundary(0xBBBE, 5); nes_write((0x4000 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BBC1:; /* LoadNextMusicChannelInstr_Continued_endIf_Cntrl0Data */
    /* $BBC1: A5 */ nes_cpu_instruction_boundary(0xBBC1, 3); g_cpu.A = nes_read(0xEA); FLAG_NZ(g_cpu.A);
label_BBC3:;
    /* $BBC3: 9D */ nes_cpu_instruction_boundary(0xBBC3, 5); nes_write((0x066C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BBC6:;
    /* $BBC6: B9 */ nes_cpu_instruction_boundary(0xBBC6, 4); g_cpu.A = nes_read((0x0600 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBC9:;
    /* $BBC9: 99 */ nes_cpu_instruction_boundary(0xBBC9, 5); nes_write((0x4002 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BBCC:;
    /* $BBCC: B9 */ nes_cpu_instruction_boundary(0xBBCC, 4); g_cpu.A = nes_read((0x0601 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBCF:;
    /* $BBCF: 99 */ nes_cpu_instruction_boundary(0xBBCF, 5); nes_write((0x4003 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BBD2:;
    /* $BBD2: BD */ nes_cpu_instruction_boundary(0xBBD2, 4); g_cpu.A = nes_read((0x0648 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBD5:;
    /* $BBD5: 99 */ nes_cpu_instruction_boundary(0xBBD5, 5); nes_write((0x4001 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BBD8:; /* SetMusicInstrDelayToLength */
    /* $BBD8: BD */ nes_cpu_instruction_boundary(0xBBD8, 4); g_cpu.A = nes_read((0x0620 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBDB:;
    /* $BBDB: 9D */ nes_cpu_instruction_boundary(0xBBDB, 5); nes_write((0x0640 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BBDE:;
    /* $BBDE: 4C */ nes_cpu_instruction_boundary(0xBBDE, 3); nes_cpu_instruction_boundary(0xBAE3, 2); func_BAE3_b5(); return;
label_BBE1:; /* MusicChannelIsUsedBySFX */
    /* $BBE1: FE */ nes_cpu_instruction_boundary(0xBBE1, 7); { uint16_t a=(0x0653 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BBE4:;
    /* $BBE4: 4C */ nes_cpu_instruction_boundary(0xBBE4, 3); nes_cpu_instruction_boundary(0xBBD8, 2);
    goto label_BBD8;
}

void func_BAD5_b5(void) { /* UpdateAllMusicChannels */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BAD5_b5");
#endif
label_BAD5:; /* UpdateAllMusicChannels */
    /* $BAD5: 20 */ nes_cpu_instruction_boundary(0xBAD5, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD7; g_cpu.S--; func_BA23_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBAD5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BAD8:;
    /* $BAD8: A9 */ nes_cpu_instruction_boundary(0xBAD8, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BADA:;
    /* $BADA: AA */ nes_cpu_instruction_boundary(0xBADA, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BADB:;
    /* $BADB: 8D */ nes_cpu_instruction_boundary(0xBADB, 4); nes_write(0x064B, g_cpu.A);
label_BADE:;
    /* $BADE: F0 */ nes_cpu_instruction_boundary(0xBADE, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BAF2; }
label_BAE0:; /* MusicChannelBaseEmpty */
    /* $BAE0: 8A */ nes_cpu_instruction_boundary(0xBAE0, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BAE1:;
    /* $BAE1: 4A */ nes_cpu_instruction_boundary(0xBAE1, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_BAE2:;
    /* $BAE2: AA */ nes_cpu_instruction_boundary(0xBAE2, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BAE3:; /* IncrementToNextMusicChannel */
    /* $BAE3: E8 */ nes_cpu_instruction_boundary(0xBAE3, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_BAE4:;
    /* $BAE4: 8A */ nes_cpu_instruction_boundary(0xBAE4, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BAE5:;
    /* $BAE5: C9 */ nes_cpu_instruction_boundary(0xBAE5, 2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_BAE7:;
    /* $BAE7: F0 */ nes_cpu_instruction_boundary(0xBAE7, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBAD1); return; }
label_BAE9:;
    /* $BAE9: AD */ nes_cpu_instruction_boundary(0xBAE9, 4); g_cpu.A = nes_read(0x064B); FLAG_NZ(g_cpu.A);
label_BAEC:;
    /* $BAEC: 18 */ nes_cpu_instruction_boundary(0xBAEC, 2); g_cpu.C = 0;
label_BAED:;
    /* $BAED: 69 */ nes_cpu_instruction_boundary(0xBAED, 2); { uint16_t r = g_cpu.A + 0x04 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x04); g_cpu.A=r&0xFF; }
label_BAEF:;
    /* $BAEF: 8D */ nes_cpu_instruction_boundary(0xBAEF, 4); nes_write(0x064B, g_cpu.A);
label_BAF2:; /* UpdateMusicChannel */
    /* $BAF2: 8A */ nes_cpu_instruction_boundary(0xBAF2, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BAF3:;
    /* $BAF3: 0A */ nes_cpu_instruction_boundary(0xBAF3, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_BAF4:;
    /* $BAF4: AA */ nes_cpu_instruction_boundary(0xBAF4, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BAF5:;
    /* $BAF5: BD */ nes_cpu_instruction_boundary(0xBAF5, 4); g_cpu.A = nes_read((0x0630 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BAF8:;
    /* $BAF8: 85 */ nes_cpu_instruction_boundary(0xBAF8, 3); nes_write(0xE6, g_cpu.A);
label_BAFA:;
    /* $BAFA: BD */ nes_cpu_instruction_boundary(0xBAFA, 4); g_cpu.A = nes_read((0x0631 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BAFD:;
    /* $BAFD: 85 */ nes_cpu_instruction_boundary(0xBAFD, 3); nes_write(0xE7, g_cpu.A);
label_BAFF:;
    /* $BAFF: BD */ nes_cpu_instruction_boundary(0xBAFF, 4); g_cpu.A = nes_read((0x0631 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB02:;
    /* $BB02: F0 */ nes_cpu_instruction_boundary(0xBB02, 2); if (g_cpu.Z) {
    nes_cpu_instruction_boundary(0xBAE0, 2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BAE0;
    }
label_BB04:;
    /* $BB04: 8A */ nes_cpu_instruction_boundary(0xBB04, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BB05:;
    /* $BB05: 4A */ nes_cpu_instruction_boundary(0xBB05, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_BB06:;
    /* $BB06: AA */ nes_cpu_instruction_boundary(0xBB06, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BB07:;
    /* $BB07: DE */ nes_cpu_instruction_boundary(0xBB07, 7); { uint16_t a=(0x0640 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB0A:;
    /* $BB0A: D0 */ nes_cpu_instruction_boundary(0xBB0A, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xBAE3, 2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BAE3;
    }
label_BB0C:; /* LoadNextMusicChannelInstr */
    /* $BB0C: BC */ nes_cpu_instruction_boundary(0xBB0C, 4); g_cpu.Y = nes_read((0x0638 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BB0F:;
    /* $BB0F: FE */ nes_cpu_instruction_boundary(0xBB0F, 7); { uint16_t a=(0x0638 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB12:;
    /* $BB12: B1 */ nes_cpu_instruction_boundary(0xBB12, 5); g_cpu.A = nes_read((nes_read16zp(0xE6) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB14:;
    /* $BB14: F0 */ nes_cpu_instruction_boundary(0xBB14, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xBACD); return; }
label_BB16:;
    /* $BB16: A8 */ nes_cpu_instruction_boundary(0xBB16, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BB17:;
    /* $BB17: C9 */ nes_cpu_instruction_boundary(0xBB17, 2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_BB19:;
    /* $BB19: F0 */ nes_cpu_instruction_boundary(0xBB19, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB24; }
label_BB1B:;
    /* $BB1B: 29 */ nes_cpu_instruction_boundary(0xBB1B, 2); g_cpu.A &= 0xC0; FLAG_NZ(g_cpu.A);
label_BB1D:;
    /* $BB1D: C9 */ nes_cpu_instruction_boundary(0xBB1D, 2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_BB1F:;
    /* $BB1F: F0 */ nes_cpu_instruction_boundary(0xBB1F, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB34; }
label_BB21:;
    /* $BB21: 4C */ nes_cpu_instruction_boundary(0xBB21, 3); nes_cpu_instruction_boundary(0xBB4C, 2); func_BB4C_b5(); return;
label_BB24:; /* MusicChannelInstr_SongRepeat */
    /* $BB24: BD */ nes_cpu_instruction_boundary(0xBB24, 4); g_cpu.A = nes_read((0x0624 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB27:;
    /* $BB27: F0 */ nes_cpu_instruction_boundary(0xBB27, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB43; }
label_BB29:;
    /* $BB29: DE */ nes_cpu_instruction_boundary(0xBB29, 7); { uint16_t a=(0x0624 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB2C:;
    /* $BB2C: BD */ nes_cpu_instruction_boundary(0xBB2C, 4); g_cpu.A = nes_read((0x063C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB2F:;
    /* $BB2F: 9D */ nes_cpu_instruction_boundary(0xBB2F, 5); nes_write((0x0638 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB32:;
    /* $BB32: D0 */ nes_cpu_instruction_boundary(0xBB32, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB43; }
label_BB34:; /* MusicChannelInstr_SongRepeatSetup */
    /* $BB34: 98 */ nes_cpu_instruction_boundary(0xBB34, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_BB35:;
    /* $BB35: 29 */ nes_cpu_instruction_boundary(0xBB35, 2); g_cpu.A &= 0x3F; FLAG_NZ(g_cpu.A);
label_BB37:;
    /* $BB37: 9D */ nes_cpu_instruction_boundary(0xBB37, 5); nes_write((0x0624 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB3A:;
    /* $BB3A: DE */ nes_cpu_instruction_boundary(0xBB3A, 7); { uint16_t a=(0x0624 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB3D:;
    /* $BB3D: BD */ nes_cpu_instruction_boundary(0xBB3D, 4); g_cpu.A = nes_read((0x0638 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB40:;
    /* $BB40: 9D */ nes_cpu_instruction_boundary(0xBB40, 5); nes_write((0x063C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB43:; /* GotoLoadNextMusicChannelInstr */
    /* $BB43: 4C */ nes_cpu_instruction_boundary(0xBB43, 3); nes_cpu_instruction_boundary(0xBB0C, 2);
    goto label_BB0C;
}

void func_BCD4_b5(void) { /* Music01Init */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCD4_b5");
#endif
label_BCD4:; /* Music01Init */
    /* $BCD4: A2 */ nes_cpu_instruction_boundary(0xBCD4, 2); g_cpu.X = 0xB6; FLAG_NZ(g_cpu.X);
label_BCD6:;
    /* $BCD6: A0 */ nes_cpu_instruction_boundary(0xBCD6, 2); g_cpu.Y = 0xF6; FLAG_NZ(g_cpu.Y);
label_BCD8:;
    /* $BCD8: D0 */ nes_cpu_instruction_boundary(0xBCD8, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBCBD); return; }
label_BCDA:; /* Music00Init */
    /* $BCDA: A2 */ nes_cpu_instruction_boundary(0xBCDA, 2); g_cpu.X = 0x92; FLAG_NZ(g_cpu.X);
label_BCDC:;
    /* $BCDC: A0 */ nes_cpu_instruction_boundary(0xBCDC, 2); g_cpu.Y = 0x96; FLAG_NZ(g_cpu.Y);
label_BCDE:;
    /* $BCDE: D0 */ nes_cpu_instruction_boundary(0xBCDE, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBCBD); return; }
label_BCE0:; /* VolumeEnvelopePtrTable */
    /* $BCE0: EA */ nes_cpu_instruction_boundary(0xBCE0, 2); /* NOP */
label_BCE1:;
    /* $BCE1: BC */ nes_cpu_instruction_boundary(0xBCE1, 4); g_cpu.Y = nes_read((0xBCF5 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BCE4:;
    /* $BCE4: FF */ nes_cpu_instruction_boundary(0xBCE4, 7); { uint16_t a=(0x0ABC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BCE7:;
    /* $BCE7: BD */ nes_cpu_instruction_boundary(0xBCE7, 4); g_cpu.A = nes_read((0xBD33 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BCEA:; /* VolumeEnvelope1 */
    /* $BCEA: 01 */ nes_cpu_instruction_boundary(0xBCEA, 6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BCEC:;
    /* $BCEC: 03 */ nes_cpu_instruction_boundary(0xBCEC, 8); { uint16_t a=nes_read16zp((0x04 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCEE:;
    /* $BCEE: 04 */ nes_cpu_instruction_boundary(0xBCEE, 3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BCF0:;
    /* $BCF0: 06 */ nes_cpu_instruction_boundary(0xBCF0, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCF2:;
    /* $BCF2: 07 */ nes_cpu_instruction_boundary(0xBCF2, 5); { uint16_t a=0x08; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCF4:;
    /* $BCF4: FF */ nes_cpu_instruction_boundary(0xBCF4, 7); { uint16_t a=(0x0402 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BCF7:;
    /* $BCF7: 05 */ nes_cpu_instruction_boundary(0xBCF7, 3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_BCF9:;
    /* $BCF9: 07 */ nes_cpu_instruction_boundary(0xBCF9, 5); { uint16_t a=0x08; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCFB:;
    /* $BCFB: 07 */ nes_cpu_instruction_boundary(0xBCFB, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCFD:;
    /* $BCFD: 05 */ nes_cpu_instruction_boundary(0xBCFD, 3); g_cpu.A |= nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_BCFF:; /* VolumeEnvelope3 */
    /* $BCFF: 00 */ nes_cpu_instruction_boundary(0xBCFF, 7); nes_brk_executed(0xBCFF); return;
}

void func_BCCA_b5(void) { /* Music02Init */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCCA_b5");
#endif
label_BCCA:; /* Music02Init */
    /* $BCCA: A9 */ nes_cpu_instruction_boundary(0xBCCA, 2); g_cpu.A = 0xF4; FLAG_NZ(g_cpu.A);
label_BCCC:;
    /* $BCCC: D0 */ nes_cpu_instruction_boundary(0xBCCC, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBCBB); return; }
label_BCCE:; /* Music05Init */
    /* $BCCE: A2 */ nes_cpu_instruction_boundary(0xBCCE, 2); g_cpu.X = 0xF5; FLAG_NZ(g_cpu.X);
label_BCD0:;
    /* $BCD0: A0 */ nes_cpu_instruction_boundary(0xBCD0, 2); g_cpu.Y = 0xF6; FLAG_NZ(g_cpu.Y);
label_BCD2:;
    /* $BCD2: D0 */ nes_cpu_instruction_boundary(0xBCD2, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBCBD); return; }
label_BCD4:; /* Music01Init */
    /* $BCD4: A2 */ nes_cpu_instruction_boundary(0xBCD4, 2); g_cpu.X = 0xB6; FLAG_NZ(g_cpu.X);
label_BCD6:;
    /* $BCD6: A0 */ nes_cpu_instruction_boundary(0xBCD6, 2); g_cpu.Y = 0xF6; FLAG_NZ(g_cpu.Y);
label_BCD8:;
    /* $BCD8: D0 */ nes_cpu_instruction_boundary(0xBCD8, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBCBD); return; }
label_BCDA:; /* Music00Init */
    /* $BCDA: A2 */ nes_cpu_instruction_boundary(0xBCDA, 2); g_cpu.X = 0x92; FLAG_NZ(g_cpu.X);
label_BCDC:;
    /* $BCDC: A0 */ nes_cpu_instruction_boundary(0xBCDC, 2); g_cpu.Y = 0x96; FLAG_NZ(g_cpu.Y);
label_BCDE:;
    /* $BCDE: D0 */ nes_cpu_instruction_boundary(0xBCDE, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBCBD); return; }
label_BCE0:; /* VolumeEnvelopePtrTable */
    /* $BCE0: EA */ nes_cpu_instruction_boundary(0xBCE0, 2); /* NOP */
label_BCE1:;
    /* $BCE1: BC */ nes_cpu_instruction_boundary(0xBCE1, 4); g_cpu.Y = nes_read((0xBCF5 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BCE4:;
    /* $BCE4: FF */ nes_cpu_instruction_boundary(0xBCE4, 7); { uint16_t a=(0x0ABC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BCE7:;
    /* $BCE7: BD */ nes_cpu_instruction_boundary(0xBCE7, 4); g_cpu.A = nes_read((0xBD33 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BCEA:; /* VolumeEnvelope1 */
    /* $BCEA: 01 */ nes_cpu_instruction_boundary(0xBCEA, 6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BCEC:;
    /* $BCEC: 03 */ nes_cpu_instruction_boundary(0xBCEC, 8); { uint16_t a=nes_read16zp((0x04 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCEE:;
    /* $BCEE: 04 */ nes_cpu_instruction_boundary(0xBCEE, 3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BCF0:;
    /* $BCF0: 06 */ nes_cpu_instruction_boundary(0xBCF0, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCF2:;
    /* $BCF2: 07 */ nes_cpu_instruction_boundary(0xBCF2, 5); { uint16_t a=0x08; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCF4:;
    /* $BCF4: FF */ nes_cpu_instruction_boundary(0xBCF4, 7); { uint16_t a=(0x0402 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BCF7:;
    /* $BCF7: 05 */ nes_cpu_instruction_boundary(0xBCF7, 3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_BCF9:;
    /* $BCF9: 07 */ nes_cpu_instruction_boundary(0xBCF9, 5); { uint16_t a=0x08; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCFB:;
    /* $BCFB: 07 */ nes_cpu_instruction_boundary(0xBCFB, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCFD:;
    /* $BCFD: 05 */ nes_cpu_instruction_boundary(0xBCFD, 3); g_cpu.A |= nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_BCFF:; /* VolumeEnvelope3 */
    /* $BCFF: 00 */ nes_cpu_instruction_boundary(0xBCFF, 7); nes_brk_executed(0xBCFF); return;
}

void func_BCC6_b5(void) { /* Music03Init */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCC6_b5");
#endif
label_BCC6:; /* Music03Init */
    /* $BCC6: A9 */ nes_cpu_instruction_boundary(0xBCC6, 2); g_cpu.A = 0x34; FLAG_NZ(g_cpu.A);
label_BCC8:;
    /* $BCC8: D0 */ nes_cpu_instruction_boundary(0xBCC8, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBCBB); return; }
label_BCCA:; /* Music02Init */
    /* $BCCA: A9 */ nes_cpu_instruction_boundary(0xBCCA, 2); g_cpu.A = 0xF4; FLAG_NZ(g_cpu.A);
label_BCCC:;
    /* $BCCC: D0 */ nes_cpu_instruction_boundary(0xBCCC, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBCBB); return; }
label_BCCE:; /* Music05Init */
    /* $BCCE: A2 */ nes_cpu_instruction_boundary(0xBCCE, 2); g_cpu.X = 0xF5; FLAG_NZ(g_cpu.X);
label_BCD0:;
    /* $BCD0: A0 */ nes_cpu_instruction_boundary(0xBCD0, 2); g_cpu.Y = 0xF6; FLAG_NZ(g_cpu.Y);
label_BCD2:;
    /* $BCD2: D0 */ nes_cpu_instruction_boundary(0xBCD2, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBCBD); return; }
label_BCD4:; /* Music01Init */
    /* $BCD4: A2 */ nes_cpu_instruction_boundary(0xBCD4, 2); g_cpu.X = 0xB6; FLAG_NZ(g_cpu.X);
label_BCD6:;
    /* $BCD6: A0 */ nes_cpu_instruction_boundary(0xBCD6, 2); g_cpu.Y = 0xF6; FLAG_NZ(g_cpu.Y);
label_BCD8:;
    /* $BCD8: D0 */ nes_cpu_instruction_boundary(0xBCD8, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBCBD); return; }
label_BCDA:; /* Music00Init */
    /* $BCDA: A2 */ nes_cpu_instruction_boundary(0xBCDA, 2); g_cpu.X = 0x92; FLAG_NZ(g_cpu.X);
label_BCDC:;
    /* $BCDC: A0 */ nes_cpu_instruction_boundary(0xBCDC, 2); g_cpu.Y = 0x96; FLAG_NZ(g_cpu.Y);
label_BCDE:;
    /* $BCDE: D0 */ nes_cpu_instruction_boundary(0xBCDE, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBCBD); return; }
label_BCE0:; /* VolumeEnvelopePtrTable */
    /* $BCE0: EA */ nes_cpu_instruction_boundary(0xBCE0, 2); /* NOP */
label_BCE1:;
    /* $BCE1: BC */ nes_cpu_instruction_boundary(0xBCE1, 4); g_cpu.Y = nes_read((0xBCF5 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BCE4:;
    /* $BCE4: FF */ nes_cpu_instruction_boundary(0xBCE4, 7); { uint16_t a=(0x0ABC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BCE7:;
    /* $BCE7: BD */ nes_cpu_instruction_boundary(0xBCE7, 4); g_cpu.A = nes_read((0xBD33 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BCEA:; /* VolumeEnvelope1 */
    /* $BCEA: 01 */ nes_cpu_instruction_boundary(0xBCEA, 6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BCEC:;
    /* $BCEC: 03 */ nes_cpu_instruction_boundary(0xBCEC, 8); { uint16_t a=nes_read16zp((0x04 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCEE:;
    /* $BCEE: 04 */ nes_cpu_instruction_boundary(0xBCEE, 3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BCF0:;
    /* $BCF0: 06 */ nes_cpu_instruction_boundary(0xBCF0, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCF2:;
    /* $BCF2: 07 */ nes_cpu_instruction_boundary(0xBCF2, 5); { uint16_t a=0x08; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCF4:;
    /* $BCF4: FF */ nes_cpu_instruction_boundary(0xBCF4, 7); { uint16_t a=(0x0402 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BCF7:;
    /* $BCF7: 05 */ nes_cpu_instruction_boundary(0xBCF7, 3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_BCF9:;
    /* $BCF9: 07 */ nes_cpu_instruction_boundary(0xBCF9, 5); { uint16_t a=0x08; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCFB:;
    /* $BCFB: 07 */ nes_cpu_instruction_boundary(0xBCFB, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCFD:;
    /* $BCFD: 05 */ nes_cpu_instruction_boundary(0xBCFD, 3); g_cpu.A |= nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_BCFF:; /* VolumeEnvelope3 */
    /* $BCFF: 00 */ nes_cpu_instruction_boundary(0xBCFF, 7); nes_brk_executed(0xBCFF); return;
}

void func_BCB9_b5(void) { /* Music04Init */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCB9_b5");
#endif
label_BCB9:; /* Music04Init */
    /* $BCB9: A9 */ nes_cpu_instruction_boundary(0xBCB9, 2); g_cpu.A = 0xB3; FLAG_NZ(g_cpu.A);
label_BCBB:; /* XYMusicInit */
    /* $BCBB: AA */ nes_cpu_instruction_boundary(0xBCBB, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BCBC:;
    /* $BCBC: A8 */ nes_cpu_instruction_boundary(0xBCBC, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BCBD:;
    /* $BCBD: 20 */ nes_cpu_instruction_boundary(0xBCBD, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBF; g_cpu.S--; func_BA14_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBCBD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BCC0:;
    /* $BCC0: 20 */ nes_cpu_instruction_boundary(0xBCC0, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC2; g_cpu.S--; func_BF62_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBCC0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BCC3:;
    /* $BCC3: 4C */ nes_cpu_instruction_boundary(0xBCC3, 3); nes_cpu_instruction_boundary(0xBAD5, 2); func_BAD5_b5(); return;
}

void func_BCCE_b5(void) { /* Music05Init */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCCE_b5");
#endif
label_BCCE:; /* Music05Init */
    /* $BCCE: A2 */ nes_cpu_instruction_boundary(0xBCCE, 2); g_cpu.X = 0xF5; FLAG_NZ(g_cpu.X);
label_BCD0:;
    /* $BCD0: A0 */ nes_cpu_instruction_boundary(0xBCD0, 2); g_cpu.Y = 0xF6; FLAG_NZ(g_cpu.Y);
label_BCD2:;
    /* $BCD2: D0 */ nes_cpu_instruction_boundary(0xBCD2, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBCBD); return; }
label_BCD4:; /* Music01Init */
    /* $BCD4: A2 */ nes_cpu_instruction_boundary(0xBCD4, 2); g_cpu.X = 0xB6; FLAG_NZ(g_cpu.X);
label_BCD6:;
    /* $BCD6: A0 */ nes_cpu_instruction_boundary(0xBCD6, 2); g_cpu.Y = 0xF6; FLAG_NZ(g_cpu.Y);
label_BCD8:;
    /* $BCD8: D0 */ nes_cpu_instruction_boundary(0xBCD8, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBCBD); return; }
label_BCDA:; /* Music00Init */
    /* $BCDA: A2 */ nes_cpu_instruction_boundary(0xBCDA, 2); g_cpu.X = 0x92; FLAG_NZ(g_cpu.X);
label_BCDC:;
    /* $BCDC: A0 */ nes_cpu_instruction_boundary(0xBCDC, 2); g_cpu.Y = 0x96; FLAG_NZ(g_cpu.Y);
label_BCDE:;
    /* $BCDE: D0 */ nes_cpu_instruction_boundary(0xBCDE, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBCBD); return; }
label_BCE0:; /* VolumeEnvelopePtrTable */
    /* $BCE0: EA */ nes_cpu_instruction_boundary(0xBCE0, 2); /* NOP */
label_BCE1:;
    /* $BCE1: BC */ nes_cpu_instruction_boundary(0xBCE1, 4); g_cpu.Y = nes_read((0xBCF5 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BCE4:;
    /* $BCE4: FF */ nes_cpu_instruction_boundary(0xBCE4, 7); { uint16_t a=(0x0ABC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BCE7:;
    /* $BCE7: BD */ nes_cpu_instruction_boundary(0xBCE7, 4); g_cpu.A = nes_read((0xBD33 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BCEA:; /* VolumeEnvelope1 */
    /* $BCEA: 01 */ nes_cpu_instruction_boundary(0xBCEA, 6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BCEC:;
    /* $BCEC: 03 */ nes_cpu_instruction_boundary(0xBCEC, 8); { uint16_t a=nes_read16zp((0x04 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCEE:;
    /* $BCEE: 04 */ nes_cpu_instruction_boundary(0xBCEE, 3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BCF0:;
    /* $BCF0: 06 */ nes_cpu_instruction_boundary(0xBCF0, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCF2:;
    /* $BCF2: 07 */ nes_cpu_instruction_boundary(0xBCF2, 5); { uint16_t a=0x08; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCF4:;
    /* $BCF4: FF */ nes_cpu_instruction_boundary(0xBCF4, 7); { uint16_t a=(0x0402 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BCF7:;
    /* $BCF7: 05 */ nes_cpu_instruction_boundary(0xBCF7, 3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_BCF9:;
    /* $BCF9: 07 */ nes_cpu_instruction_boundary(0xBCF9, 5); { uint16_t a=0x08; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCFB:;
    /* $BCFB: 07 */ nes_cpu_instruction_boundary(0xBCFB, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCFD:;
    /* $BCFD: 05 */ nes_cpu_instruction_boundary(0xBCFD, 3); g_cpu.A |= nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_BCFF:; /* VolumeEnvelope3 */
    /* $BCFF: 00 */ nes_cpu_instruction_boundary(0xBCFF, 7); nes_brk_executed(0xBCFF); return;
}

void func_BA14_b5(void) { /* SetVolumeAndDisableSweep */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA14_b5");
#endif
label_BA14:; /* SetVolumeAndDisableSweep */
    /* $BA14: A9 */ nes_cpu_instruction_boundary(0xBA14, 2); g_cpu.A = 0x7F; FLAG_NZ(g_cpu.A);
label_BA16:;
    /* $BA16: 8D */ nes_cpu_instruction_boundary(0xBA16, 4); nes_write(0x0648, g_cpu.A);
label_BA19:;
    /* $BA19: 8D */ nes_cpu_instruction_boundary(0xBA19, 4); nes_write(0x0649, g_cpu.A);
label_BA1C:;
    /* $BA1C: 8E */ nes_cpu_instruction_boundary(0xBA1C, 4); nes_write(0x0628, g_cpu.X);
label_BA1F:;
    /* $BA1F: 8C */ nes_cpu_instruction_boundary(0xBA1F, 4); nes_write(0x0629, g_cpu.Y);
label_BA22:;
    /* $BA22: 60 */ nes_cpu_instruction_boundary(0xBA22, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BF62_b5(void) { /* InitializeMusic */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BF62_b5");
#endif
label_BF62:; /* InitializeMusic */
    /* $BF62: 20 */ nes_cpu_instruction_boundary(0xBF62, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBF; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x64; g_cpu.S--; func_B42C_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBF62, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BF65:;
    /* $BF65: AD */ nes_cpu_instruction_boundary(0xBF65, 4); g_cpu.A = nes_read(0x064D); FLAG_NZ(g_cpu.A);
label_BF68:;
    /* $BF68: 8D */ nes_cpu_instruction_boundary(0xBF68, 4); nes_write(0x068D, g_cpu.A);
label_BF6B:;
    /* $BF6B: AD */ nes_cpu_instruction_boundary(0xBF6B, 4); g_cpu.A = nes_read(0x065E); FLAG_NZ(g_cpu.A);
label_BF6E:;
    /* $BF6E: A8 */ nes_cpu_instruction_boundary(0xBF6E, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BF6F:;
    /* $BF6F: B9 */ nes_cpu_instruction_boundary(0xBF6F, 4); g_cpu.A = nes_read((0xBC2A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BF72:;
    /* $BF72: A8 */ nes_cpu_instruction_boundary(0xBF72, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BF73:;
    /* $BF73: A2 */ nes_cpu_instruction_boundary(0xBF73, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_BF75:; /* InitializeMusic_loop */
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

void func_B91C_b5(void) { /* SamusDieSFXInit_RTS */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B91C_b5");
#endif
label_B91C:; /* SamusDieSFXInit_RTS */
    /* $B91C: 60 */ nes_cpu_instruction_boundary(0xB91C, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BB49_b5(void) { /* GotoUpdateMusicTriLinearCount */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB49_b5");
#endif
label_BB49:; /* GotoUpdateMusicTriLinearCount */
    /* $BB49: 4C */ nes_cpu_instruction_boundary(0xBB49, 3); nes_cpu_instruction_boundary(0xBBE7, 2); func_BBE7_b5(); return;
}

void func_BB46_b5(void) { /* GotoMusicChannelInstr_SongNoteNoise */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB46_b5");
#endif
label_BB46:; /* GotoMusicChannelInstr_SongNoteNoise */
    /* $BB46: 4C */ nes_cpu_instruction_boundary(0xBB46, 3); nes_cpu_instruction_boundary(0xBC0E, 2); func_BC0E_b5(); return;
}

void func_BACD_b5(void) { /* GotoEndOrLoopMusic */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BACD_b5");
#endif
label_BACD:; /* GotoEndOrLoopMusic */
    /* $BACD: 20 */ nes_cpu_instruction_boundary(0xBACD, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCF; g_cpu.S--; func_B420_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBACD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BAD0:;
    /* $BAD0: 60 */ nes_cpu_instruction_boundary(0xBAD0, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BAD1_b5(void) { /* GotoUpdateAllVolumeEnvelopes */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BAD1_b5");
#endif
label_BAD1:; /* GotoUpdateAllVolumeEnvelopes */
    /* $BAD1: 20 */ nes_cpu_instruction_boundary(0xBAD1, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD3; g_cpu.S--; func_BA67_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBAD1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BAD4:;
    /* $BAD4: 60 */ nes_cpu_instruction_boundary(0xBAD4, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BAE0_b5(void) { /* MusicChannelBaseEmpty */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BAE0_b5");
#endif
label_BAE0:; /* MusicChannelBaseEmpty */
    /* $BAE0: 8A */ nes_cpu_instruction_boundary(0xBAE0, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BAE1:;
    /* $BAE1: 4A */ nes_cpu_instruction_boundary(0xBAE1, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_BAE2:;
    /* $BAE2: AA */ nes_cpu_instruction_boundary(0xBAE2, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BAE3:; /* IncrementToNextMusicChannel */
    /* $BAE3: E8 */ nes_cpu_instruction_boundary(0xBAE3, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_BAE4:;
    /* $BAE4: 8A */ nes_cpu_instruction_boundary(0xBAE4, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BAE5:;
    /* $BAE5: C9 */ nes_cpu_instruction_boundary(0xBAE5, 2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_BAE7:;
    /* $BAE7: F0 */ nes_cpu_instruction_boundary(0xBAE7, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBAD1); return; }
label_BAE9:;
    /* $BAE9: AD */ nes_cpu_instruction_boundary(0xBAE9, 4); g_cpu.A = nes_read(0x064B); FLAG_NZ(g_cpu.A);
label_BAEC:;
    /* $BAEC: 18 */ nes_cpu_instruction_boundary(0xBAEC, 2); g_cpu.C = 0;
label_BAED:;
    /* $BAED: 69 */ nes_cpu_instruction_boundary(0xBAED, 2); { uint16_t r = g_cpu.A + 0x04 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x04); g_cpu.A=r&0xFF; }
label_BAEF:;
    /* $BAEF: 8D */ nes_cpu_instruction_boundary(0xBAEF, 4); nes_write(0x064B, g_cpu.A);
label_BAF2:; /* UpdateMusicChannel */
    /* $BAF2: 8A */ nes_cpu_instruction_boundary(0xBAF2, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BAF3:;
    /* $BAF3: 0A */ nes_cpu_instruction_boundary(0xBAF3, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_BAF4:;
    /* $BAF4: AA */ nes_cpu_instruction_boundary(0xBAF4, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BAF5:;
    /* $BAF5: BD */ nes_cpu_instruction_boundary(0xBAF5, 4); g_cpu.A = nes_read((0x0630 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BAF8:;
    /* $BAF8: 85 */ nes_cpu_instruction_boundary(0xBAF8, 3); nes_write(0xE6, g_cpu.A);
label_BAFA:;
    /* $BAFA: BD */ nes_cpu_instruction_boundary(0xBAFA, 4); g_cpu.A = nes_read((0x0631 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BAFD:;
    /* $BAFD: 85 */ nes_cpu_instruction_boundary(0xBAFD, 3); nes_write(0xE7, g_cpu.A);
label_BAFF:;
    /* $BAFF: BD */ nes_cpu_instruction_boundary(0xBAFF, 4); g_cpu.A = nes_read((0x0631 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB02:;
    /* $BB02: F0 */ nes_cpu_instruction_boundary(0xBB02, 2); if (g_cpu.Z) {
    nes_cpu_instruction_boundary(0xBAE0, 2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BAE0;
    }
label_BB04:;
    /* $BB04: 8A */ nes_cpu_instruction_boundary(0xBB04, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BB05:;
    /* $BB05: 4A */ nes_cpu_instruction_boundary(0xBB05, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_BB06:;
    /* $BB06: AA */ nes_cpu_instruction_boundary(0xBB06, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BB07:;
    /* $BB07: DE */ nes_cpu_instruction_boundary(0xBB07, 7); { uint16_t a=(0x0640 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB0A:;
    /* $BB0A: D0 */ nes_cpu_instruction_boundary(0xBB0A, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xBAE3, 2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BAE3;
    }
label_BB0C:; /* LoadNextMusicChannelInstr */
    /* $BB0C: BC */ nes_cpu_instruction_boundary(0xBB0C, 4); g_cpu.Y = nes_read((0x0638 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BB0F:;
    /* $BB0F: FE */ nes_cpu_instruction_boundary(0xBB0F, 7); { uint16_t a=(0x0638 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB12:;
    /* $BB12: B1 */ nes_cpu_instruction_boundary(0xBB12, 5); g_cpu.A = nes_read((nes_read16zp(0xE6) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB14:;
    /* $BB14: F0 */ nes_cpu_instruction_boundary(0xBB14, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xBACD); return; }
label_BB16:;
    /* $BB16: A8 */ nes_cpu_instruction_boundary(0xBB16, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BB17:;
    /* $BB17: C9 */ nes_cpu_instruction_boundary(0xBB17, 2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_BB19:;
    /* $BB19: F0 */ nes_cpu_instruction_boundary(0xBB19, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB24; }
label_BB1B:;
    /* $BB1B: 29 */ nes_cpu_instruction_boundary(0xBB1B, 2); g_cpu.A &= 0xC0; FLAG_NZ(g_cpu.A);
label_BB1D:;
    /* $BB1D: C9 */ nes_cpu_instruction_boundary(0xBB1D, 2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_BB1F:;
    /* $BB1F: F0 */ nes_cpu_instruction_boundary(0xBB1F, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB34; }
label_BB21:;
    /* $BB21: 4C */ nes_cpu_instruction_boundary(0xBB21, 3); nes_cpu_instruction_boundary(0xBB4C, 2); func_BB4C_b5(); return;
label_BB24:; /* MusicChannelInstr_SongRepeat */
    /* $BB24: BD */ nes_cpu_instruction_boundary(0xBB24, 4); g_cpu.A = nes_read((0x0624 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB27:;
    /* $BB27: F0 */ nes_cpu_instruction_boundary(0xBB27, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB43; }
label_BB29:;
    /* $BB29: DE */ nes_cpu_instruction_boundary(0xBB29, 7); { uint16_t a=(0x0624 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB2C:;
    /* $BB2C: BD */ nes_cpu_instruction_boundary(0xBB2C, 4); g_cpu.A = nes_read((0x063C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB2F:;
    /* $BB2F: 9D */ nes_cpu_instruction_boundary(0xBB2F, 5); nes_write((0x0638 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB32:;
    /* $BB32: D0 */ nes_cpu_instruction_boundary(0xBB32, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB43; }
label_BB34:; /* MusicChannelInstr_SongRepeatSetup */
    /* $BB34: 98 */ nes_cpu_instruction_boundary(0xBB34, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_BB35:;
    /* $BB35: 29 */ nes_cpu_instruction_boundary(0xBB35, 2); g_cpu.A &= 0x3F; FLAG_NZ(g_cpu.A);
label_BB37:;
    /* $BB37: 9D */ nes_cpu_instruction_boundary(0xBB37, 5); nes_write((0x0624 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB3A:;
    /* $BB3A: DE */ nes_cpu_instruction_boundary(0xBB3A, 7); { uint16_t a=(0x0624 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB3D:;
    /* $BB3D: BD */ nes_cpu_instruction_boundary(0xBB3D, 4); g_cpu.A = nes_read((0x0638 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB40:;
    /* $BB40: 9D */ nes_cpu_instruction_boundary(0xBB40, 5); nes_write((0x063C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB43:; /* GotoLoadNextMusicChannelInstr */
    /* $BB43: 4C */ nes_cpu_instruction_boundary(0xBB43, 3); nes_cpu_instruction_boundary(0xBB0C, 2);
    goto label_BB0C;
}

void func_BCBD_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCBD_b5");
#endif
label_BCBD:;
    /* $BCBD: 20 */ nes_cpu_instruction_boundary(0xBCBD, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBF; g_cpu.S--; func_BA14_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBCBD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BCC0:;
    /* $BCC0: 20 */ nes_cpu_instruction_boundary(0xBCC0, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC2; g_cpu.S--; func_BF62_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBCC0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BCC3:;
    /* $BCC3: 4C */ nes_cpu_instruction_boundary(0xBCC3, 3); nes_cpu_instruction_boundary(0xBAD5, 2); func_BAD5_b5(); return;
}

void func_BCBB_b5(void) { /* XYMusicInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCBB_b5");
#endif
label_BCBB:; /* XYMusicInit */
    /* $BCBB: AA */ nes_cpu_instruction_boundary(0xBCBB, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BCBC:;
    /* $BCBC: A8 */ nes_cpu_instruction_boundary(0xBCBC, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BCBD:;
    /* $BCBD: 20 */ nes_cpu_instruction_boundary(0xBCBD, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBF; g_cpu.S--; func_BA14_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBCBD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BCC0:;
    /* $BCC0: 20 */ nes_cpu_instruction_boundary(0xBCC0, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC2; g_cpu.S--; func_BF62_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBCC0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BCC3:;
    /* $BCC3: 4C */ nes_cpu_instruction_boundary(0xBCC3, 3); nes_cpu_instruction_boundary(0xBAD5, 2); func_BAD5_b5(); return;
}

void func_B42C_b5(void) { /* CheckMusicFlags */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B42C_b5");
#endif
label_B42C:; /* CheckMusicFlags */
    /* $B42C: AD */ nes_cpu_instruction_boundary(0xB42C, 4); g_cpu.A = nes_read(0x068D); FLAG_NZ(g_cpu.A);
label_B42F:;
    /* $B42F: CD */ nes_cpu_instruction_boundary(0xB42F, 4); { uint8_t m=nes_read(0x064D); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B432:;
    /* $B432: F0 */ nes_cpu_instruction_boundary(0xB432, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B43A; }
label_B434:; /* InitializeSoundAddresses */
    /* $B434: 20 */ nes_cpu_instruction_boundary(0xB434, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x36; g_cpu.S--; func_B44D_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB434, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B437:;
    /* $B437: 20 */ nes_cpu_instruction_boundary(0xB437, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x39; g_cpu.S--; func_B46E_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB437, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B43A:; /* GotoClearSpecialAddresses */
    /* $B43A: 20 */ nes_cpu_instruction_boundary(0xB43A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3C; g_cpu.S--; func_B43E_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB43A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B43D:;
    /* $B43D: 60 */ nes_cpu_instruction_boundary(0xB43D, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_83AD_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_83AD_b5");
#endif
label_83AD:;
    /* $83AD: A9 */ nes_cpu_instruction_boundary(0x83AD, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_83AF:;
    /* $83AF: BC */ nes_cpu_instruction_boundary(0x83AF, 4); g_cpu.Y = nes_read((0x6AFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_83B2:;
    /* $83B2: 10 */ nes_cpu_instruction_boundary(0x83B2, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_83B6; }
label_83B4:;
    /* $83B4: A9 */ nes_cpu_instruction_boundary(0x83B4, 2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_83B6:; /* EnemyGetDeltaX_UsingAcceleration_endIf_A */
    /* $83B6: 7D */ nes_cpu_instruction_boundary(0x83B6, 4); { uint8_t m=nes_read((0x0403 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83B9:;
    /* $83B9: 9D */ nes_cpu_instruction_boundary(0x83B9, 5); nes_write((0x0403 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_83BC:;
    /* $83BC: A8 */ nes_cpu_instruction_boundary(0x83BC, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_83BD:;
    /* $83BD: 10 */ nes_cpu_instruction_boundary(0x83BD, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_83D0; }
label_83BF:;
    /* $83BF: A9 */ nes_cpu_instruction_boundary(0x83BF, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_83C1:;
    /* $83C1: 38 */ nes_cpu_instruction_boundary(0x83C1, 2); g_cpu.C = 1;
label_83C2:;
    /* $83C2: FD */ nes_cpu_instruction_boundary(0x83C2, 4); { uint8_t m=nes_read((0x0407 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83C5:;
    /* $83C5: 85 */ nes_cpu_instruction_boundary(0x83C5, 3); nes_write(0x04, g_cpu.A);
label_83C7:;
    /* $83C7: A9 */ nes_cpu_instruction_boundary(0x83C7, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_83C9:;
    /* $83C9: FD */ nes_cpu_instruction_boundary(0x83C9, 4); { uint8_t m=nes_read((0x0403 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83CC:;
    /* $83CC: A8 */ nes_cpu_instruction_boundary(0x83CC, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_83CD:;
    /* $83CD: 20 */ nes_cpu_instruction_boundary(0x83CD, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x83; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCF; g_cpu.S--; func_E449();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x83CD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_83D0:; /* EnemyGetDeltaX_UsingAcceleration_endIf_B */
    /* $83D0: A5 */ nes_cpu_instruction_boundary(0x83D0, 3); g_cpu.A = nes_read(0x04); FLAG_NZ(g_cpu.A);
label_83D2:;
    /* $83D2: C5 */ nes_cpu_instruction_boundary(0x83D2, 3); { uint8_t m=nes_read(0x02); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_83D4:;
    /* $83D4: 98 */ nes_cpu_instruction_boundary(0x83D4, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_83D5:;
    /* $83D5: E5 */ nes_cpu_instruction_boundary(0x83D5, 3); { uint8_t m=nes_read(0x03); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83D7:;
    /* $83D7: 90 */ nes_cpu_instruction_boundary(0x83D7, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_83E3; }
label_83D9:;
    /* $83D9: A5 */ nes_cpu_instruction_boundary(0x83D9, 3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_83DB:;
    /* $83DB: 9D */ nes_cpu_instruction_boundary(0x83DB, 5); nes_write((0x0407 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_83DE:;
    /* $83DE: A5 */ nes_cpu_instruction_boundary(0x83DE, 3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_83E0:;
    /* $83E0: 9D */ nes_cpu_instruction_boundary(0x83E0, 5); nes_write((0x0403 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_83E3:; /* EnemyGetDeltaX_UsingAcceleration_endIf_C */
    /* $83E3: BD */ nes_cpu_instruction_boundary(0x83E3, 4); g_cpu.A = nes_read((0x6AFD + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_83E6:;
    /* $83E6: 18 */ nes_cpu_instruction_boundary(0x83E6, 2); g_cpu.C = 0;
label_83E7:;
    /* $83E7: 7D */ nes_cpu_instruction_boundary(0x83E7, 4); { uint8_t m=nes_read((0x0407 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83EA:;
    /* $83EA: 9D */ nes_cpu_instruction_boundary(0x83EA, 5); nes_write((0x6AFD + g_cpu.X) & 0xFFFF, g_cpu.A);
label_83ED:;
    /* $83ED: A9 */ nes_cpu_instruction_boundary(0x83ED, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_83EF:;
    /* $83EF: 7D */ nes_cpu_instruction_boundary(0x83EF, 4); { uint8_t m=nes_read((0x0403 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83F2:;
    /* $83F2: 85 */ nes_cpu_instruction_boundary(0x83F2, 3); nes_write(0x00, g_cpu.A);
label_83F4:;
    /* $83F4: 60 */ nes_cpu_instruction_boundary(0x83F4, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B6E0_b5(void) { /* MissilePickupSFXCont */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6E0_b5");
#endif
label_B6E0:; /* MissilePickupSFXCont */
    /* $B6E0: 20 */ nes_cpu_instruction_boundary(0xB6E0, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE2; g_cpu.S--; func_B4D9_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB6E0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B6E3:;
    /* $B6E3: D0 */ nes_cpu_instruction_boundary(0xB6E3, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B6FC; }
label_B6E5:;
    /* $B6E5: AC */ nes_cpu_instruction_boundary(0xB6E5, 4); g_cpu.Y = nes_read(0x0671); FLAG_NZ(g_cpu.Y);
label_B6E8:;
    /* $B6E8: B9 */ nes_cpu_instruction_boundary(0xB6E8, 4); g_cpu.A = nes_read((0xB6D9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B6EB:;
    /* $B6EB: D0 */ nes_cpu_instruction_boundary(0xB6EB, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B6F0; }
label_B6ED:;
    /* $B6ED: 4C */ nes_cpu_instruction_boundary(0xB6ED, 3); nes_cpu_instruction_boundary(0xB722, 2); func_B722_b5(); return;
label_B6F0:; /* MissilePickupSFXCont_endIf_A */
    /* $B6F0: 8D */ nes_cpu_instruction_boundary(0xB6F0, 4); nes_write(0x4002, g_cpu.A);
label_B6F3:;
    /* $B6F3: AD */ nes_cpu_instruction_boundary(0xB6F3, 4); g_cpu.A = nes_read(0xB274); FLAG_NZ(g_cpu.A);
label_B6F6:;
    /* $B6F6: 8D */ nes_cpu_instruction_boundary(0xB6F6, 4); nes_write(0x4003, g_cpu.A);
label_B6F9:;
    /* $B6F9: EE */ nes_cpu_instruction_boundary(0xB6F9, 6); { uint16_t a=0x0671; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B6FC:; /* MissilePickupSFXCont_RTS */
    /* $B6FC: 60 */ nes_cpu_instruction_boundary(0xB6FC, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B703_b5(void) { /* EnergyPickupSFXCont */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B703_b5");
#endif
label_B703:; /* EnergyPickupSFXCont */
    /* $B703: 20 */ nes_cpu_instruction_boundary(0xB703, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x05; g_cpu.S--; func_B4D9_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB703, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B706:;
    /* $B706: D0 */ nes_cpu_instruction_boundary(0xB706, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xB6FC); return; }
label_B708:;
    /* $B708: EE */ nes_cpu_instruction_boundary(0xB708, 6); { uint16_t a=0x0671; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B70B:;
    /* $B70B: AD */ nes_cpu_instruction_boundary(0xB70B, 4); g_cpu.A = nes_read(0x0671); FLAG_NZ(g_cpu.A);
label_B70E:;
    /* $B70E: C9 */ nes_cpu_instruction_boundary(0xB70E, 2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_B710:;
    /* $B710: F0 */ nes_cpu_instruction_boundary(0xB710, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B722; }
label_B712:;
    /* $B712: A0 */ nes_cpu_instruction_boundary(0xB712, 2); g_cpu.Y = 0x6D; FLAG_NZ(g_cpu.Y);
label_B714:;
    /* $B714: 4C */ nes_cpu_instruction_boundary(0xB714, 3); nes_cpu_instruction_boundary(0xB398, 2); func_B398_b5(); return;
label_B722:; /* EndSQ1SFX */
    /* $B722: A9 */ nes_cpu_instruction_boundary(0xB722, 2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_B724:;
    /* $B724: 8D */ nes_cpu_instruction_boundary(0xB724, 4); nes_write(0x4000, g_cpu.A);
label_B727:;
    /* $B727: A9 */ nes_cpu_instruction_boundary(0xB727, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B729:;
    /* $B729: 8D */ nes_cpu_instruction_boundary(0xB729, 4); nes_write(0x0653, g_cpu.A);
label_B72C:;
    /* $B72C: 20 */ nes_cpu_instruction_boundary(0xB72C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2E; g_cpu.S--; func_B4D2_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB72C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B72F:;
    /* $B72F: EE */ nes_cpu_instruction_boundary(0xB72F, 6); { uint16_t a=0x0607; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B732:;
    /* $B732: 60 */ nes_cpu_instruction_boundary(0xB732, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B71D_b5(void) { /* SQ1SFXCont */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B71D_b5");
#endif
label_B71D:; /* SQ1SFXCont */
    /* $B71D: 20 */ nes_cpu_instruction_boundary(0xB71D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1F; g_cpu.S--; func_B4D9_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB71D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B720:;
    /* $B720: D0 */ nes_cpu_instruction_boundary(0xB720, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xB6FC); return; }
label_B722:; /* EndSQ1SFX */
    /* $B722: A9 */ nes_cpu_instruction_boundary(0xB722, 2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_B724:;
    /* $B724: 8D */ nes_cpu_instruction_boundary(0xB724, 4); nes_write(0x4000, g_cpu.A);
label_B727:;
    /* $B727: A9 */ nes_cpu_instruction_boundary(0xB727, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B729:;
    /* $B729: 8D */ nes_cpu_instruction_boundary(0xB729, 4); nes_write(0x0653, g_cpu.A);
label_B72C:;
    /* $B72C: 20 */ nes_cpu_instruction_boundary(0xB72C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2E; g_cpu.S--; func_B4D2_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB72C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B72F:;
    /* $B72F: EE */ nes_cpu_instruction_boundary(0xB72F, 6); { uint16_t a=0x0607; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B732:;
    /* $B732: 60 */ nes_cpu_instruction_boundary(0xB732, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B77F_b5(void) { /* BulletFireSFXCont */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B77F_b5");
#endif
label_B77F:; /* BulletFireSFXCont */
    /* $B77F: AD */ nes_cpu_instruction_boundary(0xB77F, 4); g_cpu.A = nes_read(0x061F); FLAG_NZ(g_cpu.A);
label_B782:;
    /* $B782: 4A */ nes_cpu_instruction_boundary(0xB782, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B783:;
    /* $B783: B0 */ nes_cpu_instruction_boundary(0xB783, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B795; }
label_B785:;
    /* $B785: 20 */ nes_cpu_instruction_boundary(0xB785, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x87; g_cpu.S--; func_B4D9_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB785, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B788:;
    /* $B788: D0 */ nes_cpu_instruction_boundary(0xB788, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B78D; }
label_B78A:;
    /* $B78A: 4C */ nes_cpu_instruction_boundary(0xB78A, 3); nes_cpu_instruction_boundary(0xB722, 2); func_B722_b5(); return;
label_B78D:; /* BulletFireSFXCont_RTS */
    /* $B78D: 60 */ nes_cpu_instruction_boundary(0xB78D, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B78E:; /* HasIceBeamSFXInit */
    /* $B78E: A9 */ nes_cpu_instruction_boundary(0xB78E, 2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_B790:;
    /* $B790: A0 */ nes_cpu_instruction_boundary(0xB790, 2); g_cpu.Y = 0x91; FLAG_NZ(g_cpu.Y);
label_B792:;
    /* $B792: 4C */ nes_cpu_instruction_boundary(0xB792, 3); nes_cpu_instruction_boundary(0xB482, 2); func_B482_b5(); return;
label_B795:; /* HasIceBeamSFXCont */
    /* $B795: 20 */ nes_cpu_instruction_boundary(0xB795, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x97; g_cpu.S--; func_B4D9_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB795, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B798:;
    /* $B798: D0 */ nes_cpu_instruction_boundary(0xB798, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B79D; }
label_B79A:;
    /* $B79A: 4C */ nes_cpu_instruction_boundary(0xB79A, 3); nes_cpu_instruction_boundary(0xB722, 2); func_B722_b5(); return;
label_B79D:; /* HasIceBeamSFXCont_endIf_A */
    /* $B79D: AD */ nes_cpu_instruction_boundary(0xB79D, 4); g_cpu.A = nes_read(0x0671); FLAG_NZ(g_cpu.A);
label_B7A0:;
    /* $B7A0: 29 */ nes_cpu_instruction_boundary(0xB7A0, 2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_B7A2:;
    /* $B7A2: A8 */ nes_cpu_instruction_boundary(0xB7A2, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B7A3:;
    /* $B7A3: B9 */ nes_cpu_instruction_boundary(0xB7A3, 4); g_cpu.A = nes_read((0xB7A8 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B7A6:;
    /* $B7A6: D0 */ nes_cpu_instruction_boundary(0xB7A6, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B7D0; }
label_B7A8:; /* HasIceBeamSFXCont_IceBeamTbl */
    /* $B7A8: 93 */ nes_cpu_instruction_boundary(0xB7A8, 6); /* ILLEGAL $93 — skip 2 */
label_B7AA:; /* WaveBeamSFXInit */
    /* $B7AA: A9 */ nes_cpu_instruction_boundary(0xB7AA, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_B7AC:;
    /* $B7AC: A0 */ nes_cpu_instruction_boundary(0xB7AC, 2); g_cpu.Y = 0x8D; FLAG_NZ(g_cpu.Y);
label_B7AE:;
    /* $B7AE: 4C */ nes_cpu_instruction_boundary(0xB7AE, 3); nes_cpu_instruction_boundary(0xB482, 2); func_B482_b5(); return;
label_B7D0:; /* LoadSQ1PeriodLow */
    /* $B7D0: 8D */ nes_cpu_instruction_boundary(0xB7D0, 4); nes_write(0x4002, g_cpu.A);
label_B7D3:;
    /* $B7D3: EE */ nes_cpu_instruction_boundary(0xB7D3, 6); { uint16_t a=0x0671; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B7D6:; /* LoadSQ1PeriodLow_RTS */
    /* $B7D6: 60 */ nes_cpu_instruction_boundary(0xB7D6, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B7B1_b5(void) { /* WaveBeamSFXCont */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7B1_b5");
#endif
label_B7B1:; /* WaveBeamSFXCont */
    /* $B7B1: 20 */ nes_cpu_instruction_boundary(0xB7B1, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; func_B4D9_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB7B1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B7B4:;
    /* $B7B4: D0 */ nes_cpu_instruction_boundary(0xB7B4, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B7C7; }
label_B7B6:;
    /* $B7B6: AC */ nes_cpu_instruction_boundary(0xB7B6, 4); g_cpu.Y = nes_read(0x0675); FLAG_NZ(g_cpu.Y);
label_B7B9:;
    /* $B7B9: EE */ nes_cpu_instruction_boundary(0xB7B9, 6); { uint16_t a=0x0675; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B7BC:;
    /* $B7BC: B9 */ nes_cpu_instruction_boundary(0xB7BC, 4); g_cpu.A = nes_read((0xB7D9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B7BF:;
    /* $B7BF: 8D */ nes_cpu_instruction_boundary(0xB7BF, 4); nes_write(0x4000, g_cpu.A);
label_B7C2:;
    /* $B7C2: D0 */ nes_cpu_instruction_boundary(0xB7C2, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B7D6; }
label_B7C4:;
    /* $B7C4: 4C */ nes_cpu_instruction_boundary(0xB7C4, 3); nes_cpu_instruction_boundary(0xB722, 2); func_B722_b5(); return;
label_B7C7:; /* WaveBeamSFXCont_endIf_A */
    /* $B7C7: AD */ nes_cpu_instruction_boundary(0xB7C7, 4); g_cpu.A = nes_read(0x0671); FLAG_NZ(g_cpu.A);
label_B7CA:;
    /* $B7CA: 29 */ nes_cpu_instruction_boundary(0xB7CA, 2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_B7CC:;
    /* $B7CC: A8 */ nes_cpu_instruction_boundary(0xB7CC, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B7CD:;
    /* $B7CD: B9 */ nes_cpu_instruction_boundary(0xB7CD, 4); g_cpu.A = nes_read((0xB7D7 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B7D0:; /* LoadSQ1PeriodLow */
    /* $B7D0: 8D */ nes_cpu_instruction_boundary(0xB7D0, 4); nes_write(0x4002, g_cpu.A);
label_B7D3:;
    /* $B7D3: EE */ nes_cpu_instruction_boundary(0xB7D3, 6); { uint16_t a=0x0671; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B7D6:; /* LoadSQ1PeriodLow_RTS */
    /* $B7D6: 60 */ nes_cpu_instruction_boundary(0xB7D6, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B902_b5(void) { /* SamusDieSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B902_b5");
#endif
label_B902:; /* SamusDieSFXInit */
    /* $B902: 20 */ nes_cpu_instruction_boundary(0xB902, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x04; g_cpu.S--; func_B434_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB902, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B905:;
    /* $B905: A9 */ nes_cpu_instruction_boundary(0xB905, 2); g_cpu.A = 0x0E; FLAG_NZ(g_cpu.A);
label_B907:;
    /* $B907: A0 */ nes_cpu_instruction_boundary(0xB907, 2); g_cpu.Y = 0xA5; FLAG_NZ(g_cpu.Y);
label_B909:;
    /* $B909: 20 */ nes_cpu_instruction_boundary(0xB909, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0B; g_cpu.S--; func_B482_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB909, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B90C:;
    /* $B90C: A9 */ nes_cpu_instruction_boundary(0xB90C, 2); g_cpu.A = 0x15; FLAG_NZ(g_cpu.A);
label_B90E:;
    /* $B90E: 8D */ nes_cpu_instruction_boundary(0xB90E, 4); nes_write(0x0616, g_cpu.A);
label_B911:;
    /* $B911: AD */ nes_cpu_instruction_boundary(0xB911, 4); g_cpu.A = nes_read(0xB2A7); FLAG_NZ(g_cpu.A);
label_B914:;
    /* $B914: 8D */ nes_cpu_instruction_boundary(0xB914, 4); nes_write(0x0610, g_cpu.A);
label_B917:;
    /* $B917: A9 */ nes_cpu_instruction_boundary(0xB917, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B919:;
    /* $B919: 8D */ nes_cpu_instruction_boundary(0xB919, 4); nes_write(0x0611, g_cpu.A);
label_B91C:; /* SamusDieSFXInit_RTS */
    /* $B91C: 60 */ nes_cpu_instruction_boundary(0xB91C, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B7DC_b5(void) { /* DoorOpenCloseSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7DC_b5");
#endif
label_B7DC:; /* DoorOpenCloseSFXInit */
    /* $B7DC: AD */ nes_cpu_instruction_boundary(0xB7DC, 4); g_cpu.A = nes_read(0xB2B7); FLAG_NZ(g_cpu.A);
label_B7DF:;
    /* $B7DF: 8D */ nes_cpu_instruction_boundary(0xB7DF, 4); nes_write(0x0610, g_cpu.A);
label_B7E2:;
    /* $B7E2: AD */ nes_cpu_instruction_boundary(0xB7E2, 4); g_cpu.A = nes_read(0xB2B8); FLAG_NZ(g_cpu.A);
label_B7E5:;
    /* $B7E5: 29 */ nes_cpu_instruction_boundary(0xB7E5, 2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_B7E7:;
    /* $B7E7: 8D */ nes_cpu_instruction_boundary(0xB7E7, 4); nes_write(0x0611, g_cpu.A);
label_B7EA:;
    /* $B7EA: A9 */ nes_cpu_instruction_boundary(0xB7EA, 2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_B7EC:;
    /* $B7EC: 8D */ nes_cpu_instruction_boundary(0xB7EC, 4); nes_write(0x0612, g_cpu.A);
label_B7EF:;
    /* $B7EF: A9 */ nes_cpu_instruction_boundary(0xB7EF, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B7F1:;
    /* $B7F1: 8D */ nes_cpu_instruction_boundary(0xB7F1, 4); nes_write(0x0613, g_cpu.A);
label_B7F4:;
    /* $B7F4: A9 */ nes_cpu_instruction_boundary(0xB7F4, 2); g_cpu.A = 0x1F; FLAG_NZ(g_cpu.A);
label_B7F6:;
    /* $B7F6: A0 */ nes_cpu_instruction_boundary(0xB7F6, 2); g_cpu.Y = 0xB5; FLAG_NZ(g_cpu.Y);
label_B7F8:;
    /* $B7F8: 4C */ nes_cpu_instruction_boundary(0xB7F8, 3); nes_cpu_instruction_boundary(0xB482, 2); func_B482_b5(); return;
}

void func_B8D7_b5(void) { /* MetroidHitSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8D7_b5");
#endif
label_B8D7:; /* MetroidHitSFXInit */
    /* $B8D7: A9 */ nes_cpu_instruction_boundary(0xB8D7, 2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_B8D9:;
    /* $B8D9: A0 */ nes_cpu_instruction_boundary(0xB8D9, 2); g_cpu.Y = 0xA1; FLAG_NZ(g_cpu.Y);
label_B8DB:;
    /* $B8DB: 20 */ nes_cpu_instruction_boundary(0xB8DB, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDD; g_cpu.S--; func_B482_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB8DB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B8DE:;
    /* $B8DE: 4C */ nes_cpu_instruction_boundary(0xB8DE, 3); nes_cpu_instruction_boundary(0xB8F3, 2); func_B8F3_b5(); return;
}

void func_B951_b5(void) { /* StatueRaiseSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B951_b5");
#endif
label_B951:; /* StatueRaiseSFXInit */
    /* $B951: AD */ nes_cpu_instruction_boundary(0xB951, 4); g_cpu.A = nes_read(0xB2B3); FLAG_NZ(g_cpu.A);
label_B954:;
    /* $B954: 8D */ nes_cpu_instruction_boundary(0xB954, 4); nes_write(0x0610, g_cpu.A);
label_B957:;
    /* $B957: AD */ nes_cpu_instruction_boundary(0xB957, 4); g_cpu.A = nes_read(0xB2B4); FLAG_NZ(g_cpu.A);
label_B95A:;
    /* $B95A: 29 */ nes_cpu_instruction_boundary(0xB95A, 2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_B95C:;
    /* $B95C: 8D */ nes_cpu_instruction_boundary(0xB95C, 4); nes_write(0x0611, g_cpu.A);
label_B95F:;
    /* $B95F: A9 */ nes_cpu_instruction_boundary(0xB95F, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B961:;
    /* $B961: 8D */ nes_cpu_instruction_boundary(0xB961, 4); nes_write(0x0613, g_cpu.A);
label_B964:;
    /* $B964: A9 */ nes_cpu_instruction_boundary(0xB964, 2); g_cpu.A = 0x0B; FLAG_NZ(g_cpu.A);
label_B966:;
    /* $B966: 8D */ nes_cpu_instruction_boundary(0xB966, 4); nes_write(0x0612, g_cpu.A);
label_B969:;
    /* $B969: A9 */ nes_cpu_instruction_boundary(0xB969, 2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_B96B:;
    /* $B96B: A0 */ nes_cpu_instruction_boundary(0xB96B, 2); g_cpu.Y = 0xB1; FLAG_NZ(g_cpu.Y);
label_B96D:;
    /* $B96D: 4C */ nes_cpu_instruction_boundary(0xB96D, 3); nes_cpu_instruction_boundary(0xB482, 2); func_B482_b5(); return;
}

void func_B809_b5(void) { /* BeepSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B809_b5");
#endif
label_B809:; /* BeepSFXInit */
    /* $B809: AD */ nes_cpu_instruction_boundary(0xB809, 4); g_cpu.A = nes_read(0x068B); FLAG_NZ(g_cpu.A);
label_B80C:;
    /* $B80C: 29 */ nes_cpu_instruction_boundary(0xB80C, 2); g_cpu.A &= 0x80; FLAG_NZ(g_cpu.A);
label_B80E:;
    /* $B80E: D0 */ nes_cpu_instruction_boundary(0xB80E, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xB7D6); return; }
label_B810:;
    /* $B810: A9 */ nes_cpu_instruction_boundary(0xB810, 2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_B812:;
    /* $B812: A0 */ nes_cpu_instruction_boundary(0xB812, 2); g_cpu.Y = 0xA9; FLAG_NZ(g_cpu.Y);
label_B814:;
    /* $B814: 4C */ nes_cpu_instruction_boundary(0xB814, 3); nes_cpu_instruction_boundary(0xB482, 2); func_B482_b5(); return;
}

void func_B81F_b5(void) { /* BigEnemyHitSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B81F_b5");
#endif
label_B81F:; /* BigEnemyHitSFXInit */
    /* $B81F: A9 */ nes_cpu_instruction_boundary(0xB81F, 2); g_cpu.A = 0x12; FLAG_NZ(g_cpu.A);
label_B821:;
    /* $B821: 8D */ nes_cpu_instruction_boundary(0xB821, 4); nes_write(0x0612, g_cpu.A);
label_B824:;
    /* $B824: A9 */ nes_cpu_instruction_boundary(0xB824, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B826:;
    /* $B826: 8D */ nes_cpu_instruction_boundary(0xB826, 4); nes_write(0x0613, g_cpu.A);
label_B829:;
    /* $B829: AD */ nes_cpu_instruction_boundary(0xB829, 4); g_cpu.A = nes_read(0xB2AF); FLAG_NZ(g_cpu.A);
label_B82C:;
    /* $B82C: 8D */ nes_cpu_instruction_boundary(0xB82C, 4); nes_write(0x0610, g_cpu.A);
label_B82F:;
    /* $B82F: AD */ nes_cpu_instruction_boundary(0xB82F, 4); g_cpu.A = nes_read(0xB2B0); FLAG_NZ(g_cpu.A);
label_B832:;
    /* $B832: 29 */ nes_cpu_instruction_boundary(0xB832, 2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_B834:;
    /* $B834: 8D */ nes_cpu_instruction_boundary(0xB834, 4); nes_write(0x0611, g_cpu.A);
label_B837:;
    /* $B837: A9 */ nes_cpu_instruction_boundary(0xB837, 2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_B839:;
    /* $B839: A0 */ nes_cpu_instruction_boundary(0xB839, 2); g_cpu.Y = 0xAD; FLAG_NZ(g_cpu.Y);
label_B83B:;
    /* $B83B: 4C */ nes_cpu_instruction_boundary(0xB83B, 3); nes_cpu_instruction_boundary(0xB482, 2); func_B482_b5(); return;
}

void func_B864_b5(void) { /* SamusToBallSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B864_b5");
#endif
label_B864:; /* SamusToBallSFXInit */
    /* $B864: A9 */ nes_cpu_instruction_boundary(0xB864, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_B866:;
    /* $B866: A0 */ nes_cpu_instruction_boundary(0xB866, 2); g_cpu.Y = 0x9D; FLAG_NZ(g_cpu.Y);
label_B868:;
    /* $B868: 20 */ nes_cpu_instruction_boundary(0xB868, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6A; g_cpu.S--; func_B482_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB868, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B86B:;
    /* $B86B: A9 */ nes_cpu_instruction_boundary(0xB86B, 2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_B86D:;
    /* $B86D: 8D */ nes_cpu_instruction_boundary(0xB86D, 4); nes_write(0x0616, g_cpu.A);
label_B870:;
    /* $B870: AD */ nes_cpu_instruction_boundary(0xB870, 4); g_cpu.A = nes_read(0xB29F); FLAG_NZ(g_cpu.A);
label_B873:;
    /* $B873: 8D */ nes_cpu_instruction_boundary(0xB873, 4); nes_write(0x0610, g_cpu.A);
label_B876:;
    /* $B876: AD */ nes_cpu_instruction_boundary(0xB876, 4); g_cpu.A = nes_read(0xB2A0); FLAG_NZ(g_cpu.A);
label_B879:;
    /* $B879: 29 */ nes_cpu_instruction_boundary(0xB879, 2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_B87B:;
    /* $B87B: 8D */ nes_cpu_instruction_boundary(0xB87B, 4); nes_write(0x0611, g_cpu.A);
label_B87E:;
    /* $B87E: 60 */ nes_cpu_instruction_boundary(0xB87E, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B8A8_b5(void) { /* BombLaunchSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8A8_b5");
#endif
label_B8A8:; /* BombLaunchSFXInit */
    /* $B8A8: A9 */ nes_cpu_instruction_boundary(0xB8A8, 2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_B8AA:;
    /* $B8AA: A0 */ nes_cpu_instruction_boundary(0xB8AA, 2); g_cpu.Y = 0x95; FLAG_NZ(g_cpu.Y);
label_B8AC:;
    /* $B8AC: 4C */ nes_cpu_instruction_boundary(0xB8AC, 3); nes_cpu_instruction_boundary(0xB482, 2); func_B482_b5(); return;
}

void func_B91D_b5(void) { /* SamusDieSFXCont */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B91D_b5");
#endif
label_B91D:; /* SamusDieSFXCont */
    /* $B91D: 20 */ nes_cpu_instruction_boundary(0xB91D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1F; g_cpu.S--; func_B4D9_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB91D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B920:;
    /* $B920: D0 */ nes_cpu_instruction_boundary(0xB920, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B93C; }
label_B922:;
    /* $B922: A9 */ nes_cpu_instruction_boundary(0xB922, 2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_B924:;
    /* $B924: 8D */ nes_cpu_instruction_boundary(0xB924, 4); nes_write(0x0612, g_cpu.A);
label_B927:;
    /* $B927: A9 */ nes_cpu_instruction_boundary(0xB927, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B929:;
    /* $B929: 8D */ nes_cpu_instruction_boundary(0xB929, 4); nes_write(0x0613, g_cpu.A);
label_B92C:;
    /* $B92C: 20 */ nes_cpu_instruction_boundary(0xB92C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2E; g_cpu.S--; func_B9BC_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB92C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B92F:;
    /* $B92F: EE */ nes_cpu_instruction_boundary(0xB92F, 6); { uint16_t a=0x0673; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B932:;
    /* $B932: AD */ nes_cpu_instruction_boundary(0xB932, 4); g_cpu.A = nes_read(0x0673); FLAG_NZ(g_cpu.A);
label_B935:;
    /* $B935: C9 */ nes_cpu_instruction_boundary(0xB935, 2); { int r=g_cpu.A-0x06; g_cpu.C=(g_cpu.A>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_B937:;
    /* $B937: D0 */ nes_cpu_instruction_boundary(0xB937, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB91C); return; }
label_B939:;
    /* $B939: 4C */ nes_cpu_instruction_boundary(0xB939, 3); nes_cpu_instruction_boundary(0xB8C6, 2); func_B8C6_b5(); return;
label_B93C:;
    /* $B93C: 20 */ nes_cpu_instruction_boundary(0xB93C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3E; g_cpu.S--; func_B9D0_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB93C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B93F:;
    /* $B93F: AD */ nes_cpu_instruction_boundary(0xB93F, 4); g_cpu.A = nes_read(0x0614); FLAG_NZ(g_cpu.A);
label_B942:;
    /* $B942: 8D */ nes_cpu_instruction_boundary(0xB942, 4); nes_write(0x0612, g_cpu.A);
label_B945:;
    /* $B945: AD */ nes_cpu_instruction_boundary(0xB945, 4); g_cpu.A = nes_read(0x0615); FLAG_NZ(g_cpu.A);
label_B948:;
    /* $B948: 8D */ nes_cpu_instruction_boundary(0xB948, 4); nes_write(0x0613, g_cpu.A);
label_B94B:;
    /* $B94B: 20 */ nes_cpu_instruction_boundary(0xB94B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x4D; g_cpu.S--; func_B9A8_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB94B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B94E:;
    /* $B94E: 4C */ nes_cpu_instruction_boundary(0xB94E, 3); nes_cpu_instruction_boundary(0xB899, 2); func_B899_b5(); return;
}

void func_B7FB_b5(void) { /* DoorOpenCloseSFXCont */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7FB_b5");
#endif
label_B7FB:; /* DoorOpenCloseSFXCont */
    /* $B7FB: 20 */ nes_cpu_instruction_boundary(0xB7FB, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFD; g_cpu.S--; func_B4D9_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB7FB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B7FE:;
    /* $B7FE: D0 */ nes_cpu_instruction_boundary(0xB7FE, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B803; }
label_B800:;
    /* $B800: 4C */ nes_cpu_instruction_boundary(0xB800, 3); nes_cpu_instruction_boundary(0xB8C6, 2); func_B8C6_b5(); return;
label_B803:; /* DoorOpenCloseSFXCont_endIf_A */
    /* $B803: 20 */ nes_cpu_instruction_boundary(0xB803, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x05; g_cpu.S--; func_B9BC_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB803, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B806:;
    /* $B806: 4C */ nes_cpu_instruction_boundary(0xB806, 3); nes_cpu_instruction_boundary(0xB899, 2); func_B899_b5(); return;
}

void func_B8E1_b5(void) { /* MetroidHitSFXCont */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8E1_b5");
#endif
label_B8E1:; /* MetroidHitSFXCont */
    /* $B8E1: 20 */ nes_cpu_instruction_boundary(0xB8E1, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE3; g_cpu.S--; func_B4D9_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB8E1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B8E4:;
    /* $B8E4: F0 */ nes_cpu_instruction_boundary(0xB8E4, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B8F3; }
label_B8E6:;
    /* $B8E6: EE */ nes_cpu_instruction_boundary(0xB8E6, 6); { uint16_t a=0x0673; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B8E9:;
    /* $B8E9: AD */ nes_cpu_instruction_boundary(0xB8E9, 4); g_cpu.A = nes_read(0x0673); FLAG_NZ(g_cpu.A);
label_B8EC:;
    /* $B8EC: C9 */ nes_cpu_instruction_boundary(0xB8EC, 2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_B8EE:;
    /* $B8EE: D0 */ nes_cpu_instruction_boundary(0xB8EE, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB8D6); return; }
label_B8F0:;
    /* $B8F0: 4C */ nes_cpu_instruction_boundary(0xB8F0, 3); nes_cpu_instruction_boundary(0xB8C6, 2); func_B8C6_b5(); return;
label_B8F3:; /* RndTriPeriods */
    /* $B8F3: A5 */ nes_cpu_instruction_boundary(0xB8F3, 3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_B8F5:;
    /* $B8F5: 09 */ nes_cpu_instruction_boundary(0xB8F5, 2); g_cpu.A |= 0x6C; FLAG_NZ(g_cpu.A);
label_B8F7:;
    /* $B8F7: 8D */ nes_cpu_instruction_boundary(0xB8F7, 4); nes_write(0x400A, g_cpu.A);
label_B8FA:;
    /* $B8FA: 29 */ nes_cpu_instruction_boundary(0xB8FA, 2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_B8FC:;
    /* $B8FC: 09 */ nes_cpu_instruction_boundary(0xB8FC, 2); g_cpu.A |= 0xF8; FLAG_NZ(g_cpu.A);
label_B8FE:;
    /* $B8FE: 8D */ nes_cpu_instruction_boundary(0xB8FE, 4); nes_write(0x400B, g_cpu.A);
label_B901:;
    /* $B901: 60 */ nes_cpu_instruction_boundary(0xB901, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B970_b5_body(int _entry) { /* StatueRaiseSFXCont */
    switch (_entry) {
        case 1: goto label_B978;
    }
label_B970:; /* StatueRaiseSFXCont */
    /* $B970: 20 */ nes_cpu_instruction_boundary(0xB970, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x72; g_cpu.S--; func_B4D9_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB970, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B973:;
    /* $B973: D0 */ nes_cpu_instruction_boundary(0xB973, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B9A2; }
label_B975:;
    /* $B975: EE */ nes_cpu_instruction_boundary(0xB975, 6); { uint16_t a=0x0673; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B978:;
    /* $B978: AD */ nes_cpu_instruction_boundary(0xB978, 4); g_cpu.A = nes_read(0x0673); FLAG_NZ(g_cpu.A);
label_B97B:;
    /* $B97B: C9 */ nes_cpu_instruction_boundary(0xB97B, 2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_B97D:;
    /* $B97D: D0 */ nes_cpu_instruction_boundary(0xB97D, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B982; }
label_B97F:;
    /* $B97F: 4C */ nes_cpu_instruction_boundary(0xB97F, 3); nes_cpu_instruction_boundary(0xB8C6, 2); func_B8C6_b5(); return;
label_B982:; /* StatueRaiseSFXCont_endIf_B */
    /* $B982: AD */ nes_cpu_instruction_boundary(0xB982, 4); g_cpu.A = nes_read(0x0612); FLAG_NZ(g_cpu.A);
label_B985:;
    /* $B985: 48 */ nes_cpu_instruction_boundary(0xB985, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B986:;
    /* $B986: AD */ nes_cpu_instruction_boundary(0xB986, 4); g_cpu.A = nes_read(0x0613); FLAG_NZ(g_cpu.A);
label_B989:;
    /* $B989: 48 */ nes_cpu_instruction_boundary(0xB989, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B98A:;
    /* $B98A: A9 */ nes_cpu_instruction_boundary(0xB98A, 2); g_cpu.A = 0x25; FLAG_NZ(g_cpu.A);
label_B98C:;
    /* $B98C: 8D */ nes_cpu_instruction_boundary(0xB98C, 4); nes_write(0x0612, g_cpu.A);
label_B98F:;
    /* $B98F: A9 */ nes_cpu_instruction_boundary(0xB98F, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B991:;
    /* $B991: 8D */ nes_cpu_instruction_boundary(0xB991, 4); nes_write(0x0613, g_cpu.A);
label_B994:;
    /* $B994: 20 */ nes_cpu_instruction_boundary(0xB994, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x96; g_cpu.S--; func_B9A8_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB994, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B997:;
    /* $B997: 68 */ nes_cpu_instruction_boundary(0xB997, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_B998:;
    /* $B998: 8D */ nes_cpu_instruction_boundary(0xB998, 4); nes_write(0x0613, g_cpu.A);
label_B99B:;
    /* $B99B: 68 */ nes_cpu_instruction_boundary(0xB99B, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_B99C:;
    /* $B99C: 8D */ nes_cpu_instruction_boundary(0xB99C, 4); nes_write(0x0612, g_cpu.A);
label_B99F:;
    /* $B99F: 4C */ nes_cpu_instruction_boundary(0xB99F, 3); nes_cpu_instruction_boundary(0xB899, 2); func_B899_b5(); return;
label_B9A2:; /* StatueRaiseSFXCont_endIf_A */
    /* $B9A2: 20 */ nes_cpu_instruction_boundary(0xB9A2, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA4; g_cpu.S--; func_B9BC_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB9A2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B9A5:;
    /* $B9A5: 4C */ nes_cpu_instruction_boundary(0xB9A5, 3); nes_cpu_instruction_boundary(0xB899, 2); func_B899_b5(); return;
}

void func_B970_b5(void) { /* StatueRaiseSFXCont */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B970_b5");
#endif
    func_B970_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B978_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B978_b5");
#endif
    func_B970_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B817_b5(void) { /* BeepSFXCont */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B817_b5");
#endif
label_B817:; /* BeepSFXCont */
    /* $B817: 20 */ nes_cpu_instruction_boundary(0xB817, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x19; g_cpu.S--; func_B4D9_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB817, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B81A:;
    /* $B81A: D0 */ nes_cpu_instruction_boundary(0xB81A, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xB7D6); return; }
label_B81C:;
    /* $B81C: 4C */ nes_cpu_instruction_boundary(0xB81C, 3); nes_cpu_instruction_boundary(0xB8C6, 2); func_B8C6_b5(); return;
}

void func_B83E_b5(void) { /* BigEnemyHitSFXCont */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B83E_b5");
#endif
label_B83E:; /* BigEnemyHitSFXCont */
    /* $B83E: 20 */ nes_cpu_instruction_boundary(0xB83E, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x40; g_cpu.S--; func_B4D9_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB83E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B841:;
    /* $B841: D0 */ nes_cpu_instruction_boundary(0xB841, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B846; }
label_B843:;
    /* $B843: 4C */ nes_cpu_instruction_boundary(0xB843, 3); nes_cpu_instruction_boundary(0xB8C6, 2); func_B8C6_b5(); return;
label_B846:; /* BigEnemyHitSFXCont_dontEnd */
    /* $B846: 20 */ nes_cpu_instruction_boundary(0xB846, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x48; g_cpu.S--; func_B9A8_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB846, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B849:;
    /* $B849: A5 */ nes_cpu_instruction_boundary(0xB849, 3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_B84B:;
    /* $B84B: 29 */ nes_cpu_instruction_boundary(0xB84B, 2); g_cpu.A &= 0x3C; FLAG_NZ(g_cpu.A);
label_B84D:;
    /* $B84D: 8D */ nes_cpu_instruction_boundary(0xB84D, 4); nes_write(0x0673, g_cpu.A);
label_B850:;
    /* $B850: AD */ nes_cpu_instruction_boundary(0xB850, 4); g_cpu.A = nes_read(0x0610); FLAG_NZ(g_cpu.A);
label_B853:;
    /* $B853: 29 */ nes_cpu_instruction_boundary(0xB853, 2); g_cpu.A &= 0xC3; FLAG_NZ(g_cpu.A);
label_B855:;
    /* $B855: 0D */ nes_cpu_instruction_boundary(0xB855, 4); g_cpu.A |= nes_read(0x0673); FLAG_NZ(g_cpu.A);
label_B858:;
    /* $B858: 8D */ nes_cpu_instruction_boundary(0xB858, 4); nes_write(0x400A, g_cpu.A);
label_B85B:;
    /* $B85B: AD */ nes_cpu_instruction_boundary(0xB85B, 4); g_cpu.A = nes_read(0x0611); FLAG_NZ(g_cpu.A);
label_B85E:;
    /* $B85E: 09 */ nes_cpu_instruction_boundary(0xB85E, 2); g_cpu.A |= 0x40; FLAG_NZ(g_cpu.A);
label_B860:;
    /* $B860: 8D */ nes_cpu_instruction_boundary(0xB860, 4); nes_write(0x400B, g_cpu.A);
label_B863:;
    /* $B863: 60 */ nes_cpu_instruction_boundary(0xB863, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B87F_b5(void) { /* SamusToBallSFXCont */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B87F_b5");
#endif
label_B87F:; /* SamusToBallSFXCont */
    /* $B87F: 20 */ nes_cpu_instruction_boundary(0xB87F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; func_B4D9_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB87F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B882:;
    /* $B882: D0 */ nes_cpu_instruction_boundary(0xB882, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B887; }
label_B884:;
    /* $B884: 4C */ nes_cpu_instruction_boundary(0xB884, 3); nes_cpu_instruction_boundary(0xB8C6, 2); func_B8C6_b5(); return;
label_B887:;
    /* $B887: 20 */ nes_cpu_instruction_boundary(0xB887, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x89; g_cpu.S--; func_B9D0_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB887, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B88A:;
    /* $B88A: AD */ nes_cpu_instruction_boundary(0xB88A, 4); g_cpu.A = nes_read(0x0614); FLAG_NZ(g_cpu.A);
label_B88D:;
    /* $B88D: 8D */ nes_cpu_instruction_boundary(0xB88D, 4); nes_write(0x0612, g_cpu.A);
label_B890:;
    /* $B890: AD */ nes_cpu_instruction_boundary(0xB890, 4); g_cpu.A = nes_read(0x0615); FLAG_NZ(g_cpu.A);
label_B893:;
    /* $B893: 8D */ nes_cpu_instruction_boundary(0xB893, 4); nes_write(0x0613, g_cpu.A);
label_B896:;
    /* $B896: 20 */ nes_cpu_instruction_boundary(0xB896, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x98; g_cpu.S--; func_B9BC_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB896, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B899:; /* WriteSFXTriPeriod */
    /* $B899: AD */ nes_cpu_instruction_boundary(0xB899, 4); g_cpu.A = nes_read(0x0610); FLAG_NZ(g_cpu.A);
label_B89C:;
    /* $B89C: 8D */ nes_cpu_instruction_boundary(0xB89C, 4); nes_write(0x400A, g_cpu.A);
label_B89F:;
    /* $B89F: AD */ nes_cpu_instruction_boundary(0xB89F, 4); g_cpu.A = nes_read(0x0611); FLAG_NZ(g_cpu.A);
label_B8A2:;
    /* $B8A2: 09 */ nes_cpu_instruction_boundary(0xB8A2, 2); g_cpu.A |= 0x08; FLAG_NZ(g_cpu.A);
label_B8A4:;
    /* $B8A4: 8D */ nes_cpu_instruction_boundary(0xB8A4, 4); nes_write(0x400B, g_cpu.A);
label_B8A7:;
    /* $B8A7: 60 */ nes_cpu_instruction_boundary(0xB8A7, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B8AF_b5(void) { /* BombLaunchSFXCont */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8AF_b5");
#endif
label_B8AF:; /* BombLaunchSFXCont */
    /* $B8AF: 20 */ nes_cpu_instruction_boundary(0xB8AF, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB1; g_cpu.S--; func_B4D9_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB8AF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B8B2:;
    /* $B8B2: D0 */ nes_cpu_instruction_boundary(0xB8B2, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B8D6; }
label_B8B4:;
    /* $B8B4: EE */ nes_cpu_instruction_boundary(0xB8B4, 6); { uint16_t a=0x0673; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B8B7:;
    /* $B8B7: AD */ nes_cpu_instruction_boundary(0xB8B7, 4); g_cpu.A = nes_read(0x0673); FLAG_NZ(g_cpu.A);
label_B8BA:;
    /* $B8BA: C9 */ nes_cpu_instruction_boundary(0xB8BA, 2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_B8BC:;
    /* $B8BC: D0 */ nes_cpu_instruction_boundary(0xB8BC, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B8C1; }
label_B8BE:;
    /* $B8BE: 4C */ nes_cpu_instruction_boundary(0xB8BE, 3); nes_cpu_instruction_boundary(0xB8C6, 2); func_B8C6_b5(); return;
label_B8C1:; /* BombLaunchSFXCont_endIf_A */
    /* $B8C1: A0 */ nes_cpu_instruction_boundary(0xB8C1, 2); g_cpu.Y = 0x99; FLAG_NZ(g_cpu.Y);
label_B8C3:;
    /* $B8C3: 4C */ nes_cpu_instruction_boundary(0xB8C3, 3); nes_cpu_instruction_boundary(0xB39C, 2); func_B39C_b5(); return;
label_B8D6:; /* EndTriSFX_RTS */
    /* $B8D6: 60 */ nes_cpu_instruction_boundary(0xB8D6, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_80AD_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80AD_b5");
#endif
label_80AD:;
    /* $80AD: D0 */ nes_cpu_instruction_boundary(0x80AD, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0x80A5); return; }
label_80AF:; /* EnemyMove_RTS */
    /* $80AF: 60 */ nes_cpu_instruction_boundary(0x80AF, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BCAA_b5(void) { /* GotoMusic01Init */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCAA_b5");
#endif
label_BCAA:; /* GotoMusic01Init */
    /* $BCAA: 4C */ nes_cpu_instruction_boundary(0xBCAA, 3); nes_cpu_instruction_boundary(0xBCD4, 2); func_BCD4_b5(); return;
}

void func_B6A3_b5(void) { /* SamusHitSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6A3_b5");
#endif
label_B6A3:; /* SamusHitSFXInit */
    /* $B6A3: A0 */ nes_cpu_instruction_boundary(0xB6A3, 2); g_cpu.Y = 0x55; FLAG_NZ(g_cpu.Y);
label_B6A5:;
    /* $B6A5: 20 */ nes_cpu_instruction_boundary(0xB6A5, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA7; g_cpu.S--; func_B398_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB6A5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B6A8:;
    /* $B6A8: A5 */ nes_cpu_instruction_boundary(0xB6A8, 3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_B6AA:;
    /* $B6AA: 29 */ nes_cpu_instruction_boundary(0xB6AA, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_B6AC:;
    /* $B6AC: 8D */ nes_cpu_instruction_boundary(0xB6AC, 4); nes_write(0x4002, g_cpu.A);
label_B6AF:;
    /* $B6AF: 18 */ nes_cpu_instruction_boundary(0xB6AF, 2); g_cpu.C = 0;
label_B6B0:;
    /* $B6B0: A5 */ nes_cpu_instruction_boundary(0xB6B0, 3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_B6B2:;
    /* $B6B2: 29 */ nes_cpu_instruction_boundary(0xB6B2, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_B6B4:;
    /* $B6B4: 69 */ nes_cpu_instruction_boundary(0xB6B4, 2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_B6B6:;
    /* $B6B6: A0 */ nes_cpu_instruction_boundary(0xB6B6, 2); g_cpu.Y = 0x55; FLAG_NZ(g_cpu.Y);
label_B6B8:;
    /* $B6B8: 20 */ nes_cpu_instruction_boundary(0xB6B8, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; func_B5D5_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB6B8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B6BB:;
    /* $B6BB: A5 */ nes_cpu_instruction_boundary(0xB6BB, 3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_B6BD:;
    /* $B6BD: 4A */ nes_cpu_instruction_boundary(0xB6BD, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B6BE:;
    /* $B6BE: 4A */ nes_cpu_instruction_boundary(0xB6BE, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B6BF:;
    /* $B6BF: 29 */ nes_cpu_instruction_boundary(0xB6BF, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_B6C1:;
    /* $B6C1: 8D */ nes_cpu_instruction_boundary(0xB6C1, 4); nes_write(0x4006, g_cpu.A);
label_B6C4:; /* SamusHitSFXInit_RTS */
    /* $B6C4: 60 */ nes_cpu_instruction_boundary(0xB6C4, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B61C_b5(void) { /* BossHitSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B61C_b5");
#endif
label_B61C:; /* BossHitSFXInit */
    /* $B61C: A0 */ nes_cpu_instruction_boundary(0xB61C, 2); g_cpu.Y = 0x5D; FLAG_NZ(g_cpu.Y);
label_B61E:;
    /* $B61E: 20 */ nes_cpu_instruction_boundary(0xB61E, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x20; g_cpu.S--; func_B398_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB61E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B621:;
    /* $B621: A0 */ nes_cpu_instruction_boundary(0xB621, 2); g_cpu.Y = 0x59; FLAG_NZ(g_cpu.Y);
label_B623:;
    /* $B623: 4C */ nes_cpu_instruction_boundary(0xB623, 3); nes_cpu_instruction_boundary(0xB5D5, 2); func_B5D5_b5(); return;
}

void func_B6C5_b5(void) { /* IncorrectPasswordSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6C5_b5");
#endif
label_B6C5:; /* IncorrectPasswordSFXInit */
    /* $B6C5: A0 */ nes_cpu_instruction_boundary(0xB6C5, 2); g_cpu.Y = 0x61; FLAG_NZ(g_cpu.Y);
label_B6C7:;
    /* $B6C7: 20 */ nes_cpu_instruction_boundary(0xB6C7, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC9; g_cpu.S--; func_B398_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB6C7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B6CA:;
    /* $B6CA: A9 */ nes_cpu_instruction_boundary(0xB6CA, 2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_B6CC:;
    /* $B6CC: A0 */ nes_cpu_instruction_boundary(0xB6CC, 2); g_cpu.Y = 0x65; FLAG_NZ(g_cpu.Y);
label_B6CE:;
    /* $B6CE: 4C */ nes_cpu_instruction_boundary(0xB6CE, 3); nes_cpu_instruction_boundary(0xB5D5, 2); func_B5D5_b5(); return;
}

void func_B680_b5(void) { /* SamusHitSFXCont */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B680_b5");
#endif
label_B680:; /* SamusHitSFXCont */
    /* $B680: 20 */ nes_cpu_instruction_boundary(0xB680, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; func_B4D9_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB680, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B683:;
    /* $B683: D0 */ nes_cpu_instruction_boundary(0xB683, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B688; }
label_B685:;
    /* $B685: 4C */ nes_cpu_instruction_boundary(0xB685, 3); nes_cpu_instruction_boundary(0xB5FD, 2); func_B5FD_b5(); return;
label_B688:; /* SamusHitSFXCont_endIf_A */
    /* $B688: A0 */ nes_cpu_instruction_boundary(0xB688, 2); g_cpu.Y = 0x55; FLAG_NZ(g_cpu.Y);
label_B68A:;
    /* $B68A: 20 */ nes_cpu_instruction_boundary(0xB68A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; func_B398_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB68A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B68D:;
    /* $B68D: A5 */ nes_cpu_instruction_boundary(0xB68D, 3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_B68F:;
    /* $B68F: 29 */ nes_cpu_instruction_boundary(0xB68F, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_B691:;
    /* $B691: 8D */ nes_cpu_instruction_boundary(0xB691, 4); nes_write(0x4002, g_cpu.A);
label_B694:;
    /* $B694: A0 */ nes_cpu_instruction_boundary(0xB694, 2); g_cpu.Y = 0x55; FLAG_NZ(g_cpu.Y);
label_B696:;
    /* $B696: 20 */ nes_cpu_instruction_boundary(0xB696, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x98; g_cpu.S--; func_B3A4_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB696, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B699:;
    /* $B699: A5 */ nes_cpu_instruction_boundary(0xB699, 3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_B69B:;
    /* $B69B: 4A */ nes_cpu_instruction_boundary(0xB69B, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B69C:;
    /* $B69C: 4A */ nes_cpu_instruction_boundary(0xB69C, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B69D:;
    /* $B69D: 29 */ nes_cpu_instruction_boundary(0xB69D, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_B69F:;
    /* $B69F: 8D */ nes_cpu_instruction_boundary(0xB69F, 4); nes_write(0x4006, g_cpu.A);
label_B6A2:;
    /* $B6A2: 60 */ nes_cpu_instruction_boundary(0xB6A2, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B626_b5(void) { /* BossHitSFXCont */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B626_b5");
#endif
label_B626:; /* BossHitSFXCont */
    /* $B626: EE */ nes_cpu_instruction_boundary(0xB626, 6); { uint16_t a=0x0671; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B629:;
    /* $B629: AC */ nes_cpu_instruction_boundary(0xB629, 4); g_cpu.Y = nes_read(0x0671); FLAG_NZ(g_cpu.Y);
label_B62C:;
    /* $B62C: B9 */ nes_cpu_instruction_boundary(0xB62C, 4); g_cpu.A = nes_read((0xB66C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B62F:;
    /* $B62F: 8D */ nes_cpu_instruction_boundary(0xB62F, 4); nes_write(0x4000, g_cpu.A);
label_B632:;
    /* $B632: 8D */ nes_cpu_instruction_boundary(0xB632, 4); nes_write(0x4004, g_cpu.A);
label_B635:;
    /* $B635: AD */ nes_cpu_instruction_boundary(0xB635, 4); g_cpu.A = nes_read(0x0671); FLAG_NZ(g_cpu.A);
label_B638:;
    /* $B638: C9 */ nes_cpu_instruction_boundary(0xB638, 2); { int r=g_cpu.A-0x14; g_cpu.C=(g_cpu.A>=0x14)?1:0; FLAG_NZ(r&0xFF); }
label_B63A:;
    /* $B63A: F0 */ nes_cpu_instruction_boundary(0xB63A, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B669; }
label_B63C:;
    /* $B63C: C9 */ nes_cpu_instruction_boundary(0xB63C, 2); { int r=g_cpu.A-0x06; g_cpu.C=(g_cpu.A>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_B63E:;
    /* $B63E: 90 */ nes_cpu_instruction_boundary(0xB63E, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_B650; }
label_B640:;
    /* $B640: A5 */ nes_cpu_instruction_boundary(0xB640, 3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_B642:;
    /* $B642: 09 */ nes_cpu_instruction_boundary(0xB642, 2); g_cpu.A |= 0x10; FLAG_NZ(g_cpu.A);
label_B644:;
    /* $B644: 29 */ nes_cpu_instruction_boundary(0xB644, 2); g_cpu.A &= 0x7F; FLAG_NZ(g_cpu.A);
label_B646:;
    /* $B646: 8D */ nes_cpu_instruction_boundary(0xB646, 4); nes_write(0x0679, g_cpu.A);
label_B649:;
    /* $B649: 2A */ nes_cpu_instruction_boundary(0xB649, 2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B64A:;
    /* $B64A: 8D */ nes_cpu_instruction_boundary(0xB64A, 4); nes_write(0x0675, g_cpu.A);
label_B64D:;
    /* $B64D: 4C */ nes_cpu_instruction_boundary(0xB64D, 3); nes_cpu_instruction_boundary(0xB65C, 2); func_B65C_b5(); return;
label_B650:; /* BossHitSFXCont_endIf_A */
    /* $B650: EE */ nes_cpu_instruction_boundary(0xB650, 6); { uint16_t a=0x0675; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B653:;
    /* $B653: EE */ nes_cpu_instruction_boundary(0xB653, 6); { uint16_t a=0x0675; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B656:;
    /* $B656: EE */ nes_cpu_instruction_boundary(0xB656, 6); { uint16_t a=0x0679; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B659:;
    /* $B659: EE */ nes_cpu_instruction_boundary(0xB659, 6); { uint16_t a=0x0679; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B65C:; /* WriteSQ1SQ2PeriodLow */
    /* $B65C: AD */ nes_cpu_instruction_boundary(0xB65C, 4); g_cpu.A = nes_read(0x0675); FLAG_NZ(g_cpu.A);
label_B65F:;
    /* $B65F: 8D */ nes_cpu_instruction_boundary(0xB65F, 4); nes_write(0x4006, g_cpu.A);
label_B662:;
    /* $B662: AD */ nes_cpu_instruction_boundary(0xB662, 4); g_cpu.A = nes_read(0x0679); FLAG_NZ(g_cpu.A);
label_B665:;
    /* $B665: 8D */ nes_cpu_instruction_boundary(0xB665, 4); nes_write(0x4002, g_cpu.A);
label_B668:;
    /* $B668: 60 */ nes_cpu_instruction_boundary(0xB668, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B669:; /* GotoEndMultiSFX */
    /* $B669: 4C */ nes_cpu_instruction_boundary(0xB669, 3); nes_cpu_instruction_boundary(0xB5FD, 2); func_B5FD_b5(); return;
}

void func_B6D1_b5(void) { /* IncorrectPasswordSFXCont */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6D1_b5");
#endif
label_B6D1:; /* IncorrectPasswordSFXCont */
    /* $B6D1: 20 */ nes_cpu_instruction_boundary(0xB6D1, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD3; g_cpu.S--; func_B4D9_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB6D1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B6D4:;
    /* $B6D4: D0 */ nes_cpu_instruction_boundary(0xB6D4, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB6C4); return; }
label_B6D6:;
    /* $B6D6: 4C */ nes_cpu_instruction_boundary(0xB6D6, 3); nes_cpu_instruction_boundary(0xB5FD, 2); func_B5FD_b5(); return;
}

void func_B6FC_b5(void) { /* MissilePickupSFXCont_RTS */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6FC_b5");
#endif
label_B6FC:; /* MissilePickupSFXCont_RTS */
    /* $B6FC: 60 */ nes_cpu_instruction_boundary(0xB6FC, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B7D6_b5(void) { /* LoadSQ1PeriodLow_RTS */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7D6_b5");
#endif
label_B7D6:; /* LoadSQ1PeriodLow_RTS */
    /* $B7D6: 60 */ nes_cpu_instruction_boundary(0xB7D6, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_80A5_b5(void) { /* EnemyMove_loop_Right */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80A5_b5");
#endif
label_80A5:; /* EnemyMove_loop_Right */
    /* $80A5: 20 */ nes_cpu_instruction_boundary(0x80A5, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA7; g_cpu.S--; func_84FE_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x80A5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_80A8:;
    /* $80A8: 20 */ nes_cpu_instruction_boundary(0x80A8, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAA; g_cpu.S--; func_8134_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x80A8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_80AB:;
    /* $80AB: C6 */ nes_cpu_instruction_boundary(0x80AB, 5); { uint16_t a=0x66; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_80AD:;
    /* $80AD: D0 */ nes_cpu_instruction_boundary(0x80AD, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0x80A5, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_80A5;
    }
label_80AF:; /* EnemyMove_RTS */
    /* $80AF: 60 */ nes_cpu_instruction_boundary(0x80AF, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B6C4_b5(void) { /* SamusHitSFXInit_RTS */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6C4_b5");
#endif
label_B6C4:; /* SamusHitSFXInit_RTS */
    /* $B6C4: 60 */ nes_cpu_instruction_boundary(0xB6C4, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_800F_b5(void) { /* CommonJump_InitEnAnimIndex */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_800F_b5");
#endif
label_800F:; /* CommonJump_InitEnAnimIndex */
    /* $800F: 4C */ nes_cpu_instruction_boundary(0x800F, 3); nes_cpu_instruction_boundary(0xF68D, 2); func_F68D(); return;
}

void func_8042_b5(void) { /* CommonJump_SubtractHealth */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8042_b5");
#endif
label_8042:; /* CommonJump_SubtractHealth */
    /* $8042: 4C */ nes_cpu_instruction_boundary(0x8042, 3); nes_cpu_instruction_boundary(0xCE92, 2); func_CE92(); return;
}

void func_8006_b5(void) { /* CommonJump_UpdateEnemyCommon_noMoveNoAnim */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8006_b5");
#endif
label_8006:; /* CommonJump_UpdateEnemyCommon_noMoveNoAnim */
    /* $8006: 4C */ nes_cpu_instruction_boundary(0x8006, 3); nes_cpu_instruction_boundary(0xF416, 2); func_F416(); return;
}

void func_801B_b5(void) { /* CommonJump_EnemyFlipAfterDisplacement */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_801B_b5");
#endif
label_801B:; /* CommonJump_EnemyFlipAfterDisplacement */
    /* $801B: 4C */ nes_cpu_instruction_boundary(0x801B, 3); nes_cpu_instruction_boundary(0xFB88, 2); func_FB88(); return;
}

void func_801E_b5(void) { /* CommonJump_InitEnActiveAnimIndex_NoInitOffset */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_801E_b5");
#endif
label_801E:; /* CommonJump_InitEnActiveAnimIndex_NoInitOffset */
    /* $801E: 4C */ nes_cpu_instruction_boundary(0x801E, 3); nes_cpu_instruction_boundary(0xFBCA, 2); func_FBCA(); return;
}

void func_8009_b5(void) { /* CommonJump_CrawlerAIRoutine_ShouldCrawlerMove */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8009_b5");
#endif
label_8009:; /* CommonJump_CrawlerAIRoutine_ShouldCrawlerMove */
    /* $8009: 4C */ nes_cpu_instruction_boundary(0x8009, 3); nes_cpu_instruction_boundary(0xF852, 2); func_F852(); return;
}

void func_800C_b5(void) { /* CommonJump_UpdateEnemyAnim */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_800C_b5");
#endif
label_800C:; /* CommonJump_UpdateEnemyAnim */
    /* $800C: 4C */ nes_cpu_instruction_boundary(0x800C, 3); nes_cpu_instruction_boundary(0xE094, 2); func_E094(); return;
}

void func_802D_b5(void) { /* CommonJump_EnemyGetDeltaY */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_802D_b5");
#endif
label_802D:; /* CommonJump_EnemyGetDeltaY */
    /* $802D: 4C */ nes_cpu_instruction_boundary(0x802D, 3); nes_cpu_instruction_boundary(0x8244, 2); func_8244_b5(); return;
}

void func_8030_b5(void) { /* CommonJump_EnemyGetDeltaX */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8030_b5");
#endif
label_8030:; /* CommonJump_EnemyGetDeltaX */
    /* $8030: 4C */ nes_cpu_instruction_boundary(0x8030, 3); nes_cpu_instruction_boundary(0x8318, 2); func_8318_b5(); return;
}

void func_8033_b5(void) { /* CommonJump_EnemyBGCollideOrApplySpeed */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8033_b5");
#endif
label_8033:; /* CommonJump_EnemyBGCollideOrApplySpeed */
    /* $8033: 4C */ nes_cpu_instruction_boundary(0x8033, 3); nes_cpu_instruction_boundary(0xFA1E, 2); func_FA1E(); return;
}

void func_802A_b5(void) { /* CommonJump_0E */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_802A_b5");
#endif
label_802A:; /* CommonJump_0E */
    /* $802A: 4C */ nes_cpu_instruction_boundary(0x802A, 3); nes_cpu_instruction_boundary(0xEB6E, 2); func_EB6E(); return;
}

void func_8021_b5(void) { /* CommonJump_SpawnEnProjectile */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8021_b5");
#endif
label_8021:; /* CommonJump_SpawnEnProjectile */
    /* $8021: 4C */ nes_cpu_instruction_boundary(0x8021, 3); nes_cpu_instruction_boundary(0xF870, 2); func_F870(); return;
}

void func_803F_b5(void) { /* CommonJump_DrawTileBlast */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_803F_b5");
#endif
label_803F:; /* CommonJump_DrawTileBlast */
    /* $803F: 4C */ nes_cpu_instruction_boundary(0x803F, 3); nes_cpu_instruction_boundary(0xFEDC, 2); func_FEDC(); return;
}

void func_8045_b5(void) { /* CommonJump_Base10Subtract */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8045_b5");
#endif
label_8045:; /* CommonJump_Base10Subtract */
    /* $8045: 4C */ nes_cpu_instruction_boundary(0x8045, 3); nes_cpu_instruction_boundary(0xC3FB, 2); func_C3FB(); return;
}

void func_803C_b5(void) { /* CommonJump_DrawEnemy */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_803C_b5");
#endif
label_803C:; /* CommonJump_DrawEnemy */
    /* $803C: 4C */ nes_cpu_instruction_boundary(0x803C, 3); nes_cpu_instruction_boundary(0xDD8B, 2); func_DD8B(); return;
}

void func_8001_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8001_b5");
#endif
label_8001:;
    /* $8001: 10 */ nes_cpu_instruction_boundary(0x8001, 2); if (!g_cpu.N) { maybe_trigger_vblank(2); call_by_address(0x7FF7); return; }
label_8003:; /* CommonJump_UpdateEnemyCommon_noMove */
    /* $8003: 4C */ nes_cpu_instruction_boundary(0x8003, 3); nes_cpu_instruction_boundary(0xF438, 2); func_F438(); return;
}

void func_847F_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_847F_b5");
#endif
label_847F:;
    /* $847F: 5A */ nes_cpu_instruction_boundary(0x847F, 2); /* NOP */
label_8480:;
    /* $8480: 85 */ nes_cpu_instruction_boundary(0x8480, 3); nes_write(0xC8, g_cpu.A);
label_8482:;
    /* $8482: 98 */ nes_cpu_instruction_boundary(0x8482, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8483:;
    /* $8483: 9D */ nes_cpu_instruction_boundary(0x8483, 5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8486:;
    /* $8486: 18 */ nes_cpu_instruction_boundary(0x8486, 2); g_cpu.C = 0;
label_8487:;
    /* $8487: 7D */ nes_cpu_instruction_boundary(0x8487, 4); { uint8_t m=nes_read((0x6AF5 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_848A:;
    /* $848A: C9 */ nes_cpu_instruction_boundary(0x848A, 2); { int r=g_cpu.A-0xEF; g_cpu.C=(g_cpu.A>=0xEF)?1:0; FLAG_NZ(r&0xFF); }
label_848C:;
    /* $848C: D0 */ nes_cpu_instruction_boundary(0x848C, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_849D; }
label_848E:;
    /* $848E: A5 */ nes_cpu_instruction_boundary(0x848E, 3); g_cpu.A = nes_read(0xFC); FLAG_NZ(g_cpu.A);
label_8490:;
    /* $8490: F0 */ nes_cpu_instruction_boundary(0x8490, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8497; }
label_8492:;
    /* $8492: 20 */ nes_cpu_instruction_boundary(0x8492, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x94; g_cpu.S--; func_8563_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8492, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8495:;
    /* $8495: F0 */ nes_cpu_instruction_boundary(0x8495, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_849D; }
label_8497:; /* EnemyMoveOnePixelDown_endIf_C */
    /* $8497: DE */ nes_cpu_instruction_boundary(0x8497, 7); { uint16_t a=(0x0400 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_849A:;
    /* $849A: 18 */ nes_cpu_instruction_boundary(0x849A, 2); g_cpu.C = 0;
label_849B:;
    /* $849B: 90 */ nes_cpu_instruction_boundary(0x849B, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_84A6; }
label_849D:; /* EnemyMoveOnePixelDown_success */
    /* $849D: BD */ nes_cpu_instruction_boundary(0x849D, 4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_84A0:;
    /* $84A0: 30 */ nes_cpu_instruction_boundary(0x84A0, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_84A5; }
label_84A2:;
    /* $84A2: DE */ nes_cpu_instruction_boundary(0x84A2, 7); { uint16_t a=(0x6B01 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_84A5:; /* EnemyMoveOnePixelDown_endIf_D */
    /* $84A5: 38 */ nes_cpu_instruction_boundary(0x84A5, 2); g_cpu.C = 1;
label_84A6:; /* EnemyMoveOnePixelDown_RTS */
    /* $84A6: 60 */ nes_cpu_instruction_boundary(0x84A6, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_871C_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_871C_b5");
#endif
label_871C:;
    /* $871C: F4 */ nes_cpu_instruction_boundary(0x871C, 4); (void)nes_read((0xEE + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_871E:;
    /* $871E: F4 */ nes_cpu_instruction_boundary(0x871E, 4); (void)nes_read((0xF3 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8720:;
    /* $8720: F8 */ nes_cpu_instruction_boundary(0x8720, 2); g_cpu.D = 1;
label_8721:;
    /* $8721: F3 */ nes_cpu_instruction_boundary(0x8721, 8); { uint16_t a=(nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8723:;
    /* $8723: FB */ nes_cpu_instruction_boundary(0x8723, 7); { uint16_t a=(0xFBF8 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8726:;
    /* $8726: 00 */ nes_cpu_instruction_boundary(0x8726, 7); nes_brk_executed(0x8726); return;
}

void func_95C6_b5(void) { /* TwosComplement_ */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95C6_b5");
#endif
label_95C6:; /* TwosComplement_ */
    /* $95C6: 49 */ nes_cpu_instruction_boundary(0x95C6, 2); g_cpu.A ^= 0xFF; FLAG_NZ(g_cpu.A);
label_95C8:;
    /* $95C8: 18 */ nes_cpu_instruction_boundary(0x95C8, 2); g_cpu.C = 0;
label_95C9:;
    /* $95C9: 69 */ nes_cpu_instruction_boundary(0x95C9, 2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_95CB:;
    /* $95CB: 60 */ nes_cpu_instruction_boundary(0x95CB, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9830_b5(void) { /* UpdateEnemyCommon_Decide_BANK5 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9830_b5");
#endif
label_9830:; /* UpdateEnemyCommon_Decide_BANK5 */
    /* $9830: A5 */ nes_cpu_instruction_boundary(0x9830, 3); g_cpu.A = nes_read(0x81); FLAG_NZ(g_cpu.A);
label_9832:;
    /* $9832: C9 */ nes_cpu_instruction_boundary(0x9832, 2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_9834:;
    /* $9834: F0 */ nes_cpu_instruction_boundary(0x9834, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_983F; }
label_9836:;
    /* $9836: C9 */ nes_cpu_instruction_boundary(0x9836, 2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_9838:;
    /* $9838: F0 */ nes_cpu_instruction_boundary(0x9838, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9844; }
label_983A:;
    /* $983A: A5 */ nes_cpu_instruction_boundary(0x983A, 3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_983C:;
    /* $983C: 4C */ nes_cpu_instruction_boundary(0x983C, 3); nes_cpu_instruction_boundary(0x8000, 2); func_8000_b5(); return;
label_983F:; /* UpdateEnemyCommon_Decide_BANK5_resting */
    /* $983F: A5 */ nes_cpu_instruction_boundary(0x983F, 3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_9841:;
    /* $9841: 4C */ nes_cpu_instruction_boundary(0x9841, 3); nes_cpu_instruction_boundary(0x8003, 2); func_8003_b5(); return;
label_9844:; /* UpdateEnemyCommon_Decide_BANK5_explode */
    /* $9844: 4C */ nes_cpu_instruction_boundary(0x9844, 3); nes_cpu_instruction_boundary(0x8006, 2); func_8006_b5(); return;
}

void func_98F8_b5(void) { /* UpdateSwooperAnim_BANK5 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_98F8_b5");
#endif
label_98F8:; /* UpdateSwooperAnim_BANK5 */
    /* $98F8: BD */ nes_cpu_instruction_boundary(0x98F8, 4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_98FB:;
    /* $98FB: C9 */ nes_cpu_instruction_boundary(0x98FB, 2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_98FD:;
    /* $98FD: D0 */ nes_cpu_instruction_boundary(0x98FD, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_990B; }
label_98FF:;
    /* $98FF: A9 */ nes_cpu_instruction_boundary(0x98FF, 2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_9901:;
    /* $9901: BC */ nes_cpu_instruction_boundary(0x9901, 4); g_cpu.Y = nes_read((0x0402 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_9904:;
    /* $9904: 10 */ nes_cpu_instruction_boundary(0x9904, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_9908; }
label_9906:;
    /* $9906: A9 */ nes_cpu_instruction_boundary(0x9906, 2); g_cpu.A = 0x1D; FLAG_NZ(g_cpu.A);
label_9908:; /* UpdateSwooperAnim_BANK5_endIf_A */
    /* $9908: 9D */ nes_cpu_instruction_boundary(0x9908, 5); nes_write((0x6AF9 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_990B:; /* UpdateSwooperAnim_BANK5_RTS */
    /* $990B: 60 */ nes_cpu_instruction_boundary(0x990B, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9958_b5(void) { /* SwooperChangeEnemyType_BANK5 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9958_b5");
#endif
label_9958:; /* SwooperChangeEnemyType_BANK5 */
    /* $9958: 9D */ nes_cpu_instruction_boundary(0x9958, 5); nes_write((0x6B02 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_995B:;
    /* $995B: BD */ nes_cpu_instruction_boundary(0x995B, 4); g_cpu.A = nes_read((0x040B + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_995E:;
    /* $995E: 48 */ nes_cpu_instruction_boundary(0x995E, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_995F:;
    /* $995F: 20 */ nes_cpu_instruction_boundary(0x995F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x61; g_cpu.S--; func_802A_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x995F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9962:;
    /* $9962: 68 */ nes_cpu_instruction_boundary(0x9962, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9963:;
    /* $9963: 9D */ nes_cpu_instruction_boundary(0x9963, 5); nes_write((0x040B + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9966:;
    /* $9966: 60 */ nes_cpu_instruction_boundary(0x9966, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_99AD_b5(void) { /* CrawlerReorientSprite_BANK5 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99AD_b5");
#endif
label_99AD:; /* CrawlerReorientSprite_BANK5 */
    /* $99AD: BD */ nes_cpu_instruction_boundary(0x99AD, 4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_99B0:;
    /* $99B0: 4A */ nes_cpu_instruction_boundary(0x99B0, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_99B1:;
    /* $99B1: BD */ nes_cpu_instruction_boundary(0x99B1, 4); g_cpu.A = nes_read((0x040A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_99B4:;
    /* $99B4: 29 */ nes_cpu_instruction_boundary(0x99B4, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_99B6:;
    /* $99B6: 2A */ nes_cpu_instruction_boundary(0x99B6, 2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_99B7:;
    /* $99B7: A8 */ nes_cpu_instruction_boundary(0x99B7, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_99B8:;
    /* $99B8: B9 */ nes_cpu_instruction_boundary(0x99B8, 4); g_cpu.A = nes_read((0x99BE + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_99BB:;
    /* $99BB: 4C */ nes_cpu_instruction_boundary(0x99BB, 3); nes_cpu_instruction_boundary(0x800F, 2); func_800F_b5(); return;
}

void func_99C6_b5_body(int _entry) { /* CrawlerInsideCornerCheck_BANK5 */
    switch (_entry) {
        case 1: goto label_99DB;
    }
label_99C6:; /* CrawlerInsideCornerCheck_BANK5 */
    /* $99C6: A6 */ nes_cpu_instruction_boundary(0x99C6, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_99C8:;
    /* $99C8: B0 */ nes_cpu_instruction_boundary(0x99C8, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_99E3; }
label_99CA:;
    /* $99CA: A5 */ nes_cpu_instruction_boundary(0x99CA, 3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_99CC:;
    /* $99CC: D0 */ nes_cpu_instruction_boundary(0x99CC, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_99DB; }
label_99CE:;
    /* $99CE: BC */ nes_cpu_instruction_boundary(0x99CE, 4); g_cpu.Y = nes_read((0x040A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_99D1:;
    /* $99D1: 88 */ nes_cpu_instruction_boundary(0x99D1, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_99D2:;
    /* $99D2: 98 */ nes_cpu_instruction_boundary(0x99D2, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_99D3:;
    /* $99D3: 29 */ nes_cpu_instruction_boundary(0x99D3, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_99D5:;
    /* $99D5: 9D */ nes_cpu_instruction_boundary(0x99D5, 5); nes_write((0x040A + g_cpu.X) & 0xFFFF, g_cpu.A);
label_99D8:;
    /* $99D8: 4C */ nes_cpu_instruction_boundary(0x99D8, 3); nes_cpu_instruction_boundary(0x99AD, 2); func_99AD_b5(); return;
label_99DB:; /* CrawlerFlipDirection_BANK5 */
    /* $99DB: BD */ nes_cpu_instruction_boundary(0x99DB, 4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_99DE:;
    /* $99DE: 49 */ nes_cpu_instruction_boundary(0x99DE, 2); g_cpu.A ^= 0x01; FLAG_NZ(g_cpu.A);
label_99E0:;
    /* $99E0: 9D */ nes_cpu_instruction_boundary(0x99E0, 5); nes_write((0x0405 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_99E3:; /* RTS_Crawler06_BANK5 */
    /* $99E3: 60 */ nes_cpu_instruction_boundary(0x99E3, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_99C6_b5(void) { /* CrawlerInsideCornerCheck_BANK5 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99C6_b5");
#endif
    func_99C6_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_99DB_b5(void) { /* CrawlerFlipDirection_BANK5 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99DB_b5");
#endif
    func_99C6_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_99E4_b5(void) { /* CrawlerOutsideCornerCheck_BANK5 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99E4_b5");
#endif
label_99E4:; /* CrawlerOutsideCornerCheck_BANK5 */
    /* $99E4: 20 */ nes_cpu_instruction_boundary(0x99E4, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE6; g_cpu.S--; func_99F8_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x99E4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_99E7:;
    /* $99E7: 20 */ nes_cpu_instruction_boundary(0x99E7, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE9; g_cpu.S--; func_9A00_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x99E7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_99EA:;
    /* $99EA: A6 */ nes_cpu_instruction_boundary(0x99EA, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_99EC:;
    /* $99EC: 90 */ nes_cpu_instruction_boundary(0x99EC, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_99F7; }
label_99EE:;
    /* $99EE: 20 */ nes_cpu_instruction_boundary(0x99EE, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; func_99F8_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x99EE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_99F1:;
    /* $99F1: 9D */ nes_cpu_instruction_boundary(0x99F1, 5); nes_write((0x040A + g_cpu.X) & 0xFFFF, g_cpu.A);
label_99F4:;
    /* $99F4: 20 */ nes_cpu_instruction_boundary(0x99F4, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF6; g_cpu.S--; func_99AD_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x99F4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_99F7:; /* CrawlerOutsideCornerCheck_BANK5_RTS */
    /* $99F7: 60 */ nes_cpu_instruction_boundary(0x99F7, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_99F8_b5(void) { /* CrawlerOutsideCornerGetNextOrientation_BANK5 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99F8_b5");
#endif
label_99F8:; /* CrawlerOutsideCornerGetNextOrientation_BANK5 */
    /* $99F8: BC */ nes_cpu_instruction_boundary(0x99F8, 4); g_cpu.Y = nes_read((0x040A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_99FB:;
    /* $99FB: C8 */ nes_cpu_instruction_boundary(0x99FB, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_99FC:;
    /* $99FC: 98 */ nes_cpu_instruction_boundary(0x99FC, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_99FD:;
    /* $99FD: 29 */ nes_cpu_instruction_boundary(0x99FD, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_99FF:;
    /* $99FF: 60 */ nes_cpu_instruction_boundary(0x99FF, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9A00_b5_body(int _entry) { /* JumpByRTSToMovementRoutine_BANK5 */
    switch (_entry) {
        case 1: goto label_9A07;
    }
label_9A00:; /* JumpByRTSToMovementRoutine_BANK5 */
    /* $9A00: BC */ nes_cpu_instruction_boundary(0x9A00, 4); g_cpu.Y = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_9A03:;
    /* $9A03: 84 */ nes_cpu_instruction_boundary(0x9A03, 3); nes_write(0x00, g_cpu.Y);
label_9A05:;
    /* $9A05: 46 */ nes_cpu_instruction_boundary(0x9A05, 5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_9A07:;
    /* $9A07: 2A */ nes_cpu_instruction_boundary(0x9A07, 2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_9A08:;
    /* $9A08: 0A */ nes_cpu_instruction_boundary(0x9A08, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9A09:;
    /* $9A09: A8 */ nes_cpu_instruction_boundary(0x9A09, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9A0A:;
    /* $9A0A: B9 */ nes_cpu_instruction_boundary(0x9A0A, 4); g_cpu.A = nes_read((0x8049 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A0D:;
    /* $9A0D: 48 */ nes_cpu_instruction_boundary(0x9A0D, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9A0E:;
    /* $9A0E: B9 */ nes_cpu_instruction_boundary(0x9A0E, 4); g_cpu.A = nes_read((0x8048 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A11:;
    /* $9A11: 48 */ nes_cpu_instruction_boundary(0x9A11, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9A12:;
    /* $9A12: 60 */ nes_cpu_instruction_boundary(0x9A12, 6); { g_cpu.S++; uint8_t _lo=g_ram[0x100+g_cpu.S]; g_cpu.S++; uint8_t _hi=g_ram[0x100+g_cpu.S]; call_by_address_tail(((uint16_t)_hi<<8|_lo)+1, -1); }
    
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9A00_b5(void) { /* JumpByRTSToMovementRoutine_BANK5 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A00_b5");
#endif
    func_9A00_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9A07_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A07_b5");
#endif
    func_9A00_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9A79_b5(void) { /* RidleyTryToLaunchFireball_BANK5 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A79_b5");
#endif
label_9A79:; /* RidleyTryToLaunchFireball_BANK5 */
    /* $9A79: A4 */ nes_cpu_instruction_boundary(0x9A79, 3); g_cpu.Y = nes_read(0x80); FLAG_NZ(g_cpu.Y);
label_9A7B:;
    /* $9A7B: D0 */ nes_cpu_instruction_boundary(0x9A7B, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A7F; }
label_9A7D:;
    /* $9A7D: A0 */ nes_cpu_instruction_boundary(0x9A7D, 2); g_cpu.Y = 0x60; FLAG_NZ(g_cpu.Y);
label_9A7F:; /* RidleyTryToLaunchFireball_BANK5_endIf_A */
    /* $9A7F: A5 */ nes_cpu_instruction_boundary(0x9A7F, 3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_9A81:;
    /* $9A81: 29 */ nes_cpu_instruction_boundary(0x9A81, 2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9A83:;
    /* $9A83: D0 */ nes_cpu_instruction_boundary(0x9A83, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9AA9; }
label_9A85:;
    /* $9A85: 88 */ nes_cpu_instruction_boundary(0x9A85, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A86:;
    /* $9A86: 84 */ nes_cpu_instruction_boundary(0x9A86, 3); nes_write(0x80, g_cpu.Y);
label_9A88:;
    /* $9A88: 98 */ nes_cpu_instruction_boundary(0x9A88, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_9A89:;
    /* $9A89: 0A */ nes_cpu_instruction_boundary(0x9A89, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9A8A:;
    /* $9A8A: 30 */ nes_cpu_instruction_boundary(0x9A8A, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_9AA9; }
label_9A8C:;
    /* $9A8C: 29 */ nes_cpu_instruction_boundary(0x9A8C, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_9A8E:;
    /* $9A8E: C9 */ nes_cpu_instruction_boundary(0x9A8E, 2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_9A90:;
    /* $9A90: D0 */ nes_cpu_instruction_boundary(0x9A90, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9AA9; }
label_9A92:;
    /* $9A92: A2 */ nes_cpu_instruction_boundary(0x9A92, 2); g_cpu.X = 0x50; FLAG_NZ(g_cpu.X);
label_9A94:; /* RidleyTryToLaunchFireball_BANK5_loop_A */
    /* $9A94: BD */ nes_cpu_instruction_boundary(0x9A94, 4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A97:;
    /* $9A97: F0 */ nes_cpu_instruction_boundary(0x9A97, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9AAA; }
label_9A99:;
    /* $9A99: BD */ nes_cpu_instruction_boundary(0x9A99, 4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A9C:;
    /* $9A9C: 29 */ nes_cpu_instruction_boundary(0x9A9C, 2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9A9E:;
    /* $9A9E: F0 */ nes_cpu_instruction_boundary(0x9A9E, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9AAA; }
label_9AA0:;
    /* $9AA0: 8A */ nes_cpu_instruction_boundary(0x9AA0, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_9AA1:;
    /* $9AA1: 38 */ nes_cpu_instruction_boundary(0x9AA1, 2); g_cpu.C = 1;
label_9AA2:;
    /* $9AA2: E9 */ nes_cpu_instruction_boundary(0x9AA2, 2); { uint8_t m=0x10; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9AA4:;
    /* $9AA4: AA */ nes_cpu_instruction_boundary(0x9AA4, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_9AA5:;
    /* $9AA5: D0 */ nes_cpu_instruction_boundary(0x9AA5, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0x9A94, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9A94;
    }
label_9AA7:;
    /* $9AA7: E6 */ nes_cpu_instruction_boundary(0x9AA7, 5); { uint16_t a=0x7E; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9AA9:; /* RidleyTryToLaunchFireball_BANK5_RTS */
    /* $9AA9: 60 */ nes_cpu_instruction_boundary(0x9AA9, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9AAA:; /* RidleyTryToLaunchFireball_FoundEnemySlot_BANK5 */
    /* $9AAA: 8A */ nes_cpu_instruction_boundary(0x9AAA, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_9AAB:;
    /* $9AAB: A8 */ nes_cpu_instruction_boundary(0x9AAB, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9AAC:;
    /* $9AAC: A2 */ nes_cpu_instruction_boundary(0x9AAC, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_9AAE:;
    /* $9AAE: 20 */ nes_cpu_instruction_boundary(0x9AAE, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB0; g_cpu.S--; func_9AE1_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9AAE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9AB1:;
    /* $9AB1: 98 */ nes_cpu_instruction_boundary(0x9AB1, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_9AB2:;
    /* $9AB2: AA */ nes_cpu_instruction_boundary(0x9AB2, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_9AB3:;
    /* $9AB3: AD */ nes_cpu_instruction_boundary(0x9AB3, 4); g_cpu.A = nes_read(0x0405); FLAG_NZ(g_cpu.A);
label_9AB6:;
    /* $9AB6: 9D */ nes_cpu_instruction_boundary(0x9AB6, 5); nes_write((0x0405 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9AB9:;
    /* $9AB9: 29 */ nes_cpu_instruction_boundary(0x9AB9, 2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_9ABB:;
    /* $9ABB: A8 */ nes_cpu_instruction_boundary(0x9ABB, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9ABC:;
    /* $9ABC: B9 */ nes_cpu_instruction_boundary(0x9ABC, 4); g_cpu.A = nes_read((0x9ADF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9ABF:;
    /* $9ABF: 85 */ nes_cpu_instruction_boundary(0x9ABF, 3); nes_write(0x05, g_cpu.A);
label_9AC1:;
    /* $9AC1: A9 */ nes_cpu_instruction_boundary(0x9AC1, 2); g_cpu.A = 0xF8; FLAG_NZ(g_cpu.A);
label_9AC3:;
    /* $9AC3: 85 */ nes_cpu_instruction_boundary(0x9AC3, 3); nes_write(0x04, g_cpu.A);
label_9AC5:;
    /* $9AC5: 20 */ nes_cpu_instruction_boundary(0x9AC5, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC7; g_cpu.S--; func_8027_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9AC5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9AC8:;
    /* $9AC8: 90 */ nes_cpu_instruction_boundary(0x9AC8, 2); if (!g_cpu.C) {
    nes_cpu_instruction_boundary(0x9AA9, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9AA9;
    }
label_9ACA:;
    /* $9ACA: A9 */ nes_cpu_instruction_boundary(0x9ACA, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9ACC:;
    /* $9ACC: 9D */ nes_cpu_instruction_boundary(0x9ACC, 5); nes_write((0x040F + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9ACF:;
    /* $9ACF: A9 */ nes_cpu_instruction_boundary(0x9ACF, 2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_9AD1:;
    /* $9AD1: 9D */ nes_cpu_instruction_boundary(0x9AD1, 5); nes_write((0x6B02 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9AD4:;
    /* $9AD4: A9 */ nes_cpu_instruction_boundary(0x9AD4, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9AD6:;
    /* $9AD6: 9D */ nes_cpu_instruction_boundary(0x9AD6, 5); nes_write((0x6AF4 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9AD9:;
    /* $9AD9: 20 */ nes_cpu_instruction_boundary(0x9AD9, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDB; g_cpu.S--; func_9AF1_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9AD9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9ADC:;
    /* $9ADC: 4C */ nes_cpu_instruction_boundary(0x9ADC, 3); nes_cpu_instruction_boundary(0x802A, 2); func_802A_b5(); return;
}

void func_B3F0_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3F0_b5");
#endif
label_B3F0:;
    /* $B3F0: 1E */ nes_cpu_instruction_boundary(0xB3F0, 7); { uint16_t a=(0x05C9 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B3F3:;
    /* $B3F3: F0 */ nes_cpu_instruction_boundary(0xB3F3, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB3C9); return; }
label_B3F5:;
    /* $B3F5: A9 */ nes_cpu_instruction_boundary(0xB3F5, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B3F7:;
    /* $B3F7: 8D */ nes_cpu_instruction_boundary(0xB3F7, 4); nes_write(0x0602, g_cpu.A);
label_B3FA:;
    /* $B3FA: 20 */ nes_cpu_instruction_boundary(0xB3FA, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFC; g_cpu.S--; func_B34B_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3FA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3FD:;
    /* $B3FD: 20 */ nes_cpu_instruction_boundary(0xB3FD, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFF; g_cpu.S--; func_B37B_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3FD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B400:;
    /* $B400: 20 */ nes_cpu_instruction_boundary(0xB400, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x02; g_cpu.S--; func_B36D_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB400, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B403:;
    /* $B403: 20 */ nes_cpu_instruction_boundary(0xB403, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x05; g_cpu.S--; func_BC66_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB403, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B406:; /* ClearInitFlags */
    /* $B406: A9 */ nes_cpu_instruction_boundary(0xB406, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B408:;
    /* $B408: 8D */ nes_cpu_instruction_boundary(0xB408, 4); nes_write(0x0680, g_cpu.A);
label_B40B:;
    /* $B40B: 8D */ nes_cpu_instruction_boundary(0xB40B, 4); nes_write(0x0681, g_cpu.A);
label_B40E:;
    /* $B40E: 8D */ nes_cpu_instruction_boundary(0xB40E, 4); nes_write(0x0682, g_cpu.A);
label_B411:;
    /* $B411: 8D */ nes_cpu_instruction_boundary(0xB411, 4); nes_write(0x0683, g_cpu.A);
label_B414:;
    /* $B414: 8D */ nes_cpu_instruction_boundary(0xB414, 4); nes_write(0x0684, g_cpu.A);
label_B417:;
    /* $B417: 8D */ nes_cpu_instruction_boundary(0xB417, 4); nes_write(0x0685, g_cpu.A);
label_B41A:;
    /* $B41A: 60 */ nes_cpu_instruction_boundary(0xB41A, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B3FC_b5_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B40E;
    }
label_B3FC:;
    /* $B3FC: B3 */ nes_cpu_instruction_boundary(0xB3FC, 5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x20) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B3FE:;
    /* $B3FE: 7B */ nes_cpu_instruction_boundary(0xB3FE, 7); { uint16_t a=(0x20B3 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B401:;
    /* $B401: 6D */ nes_cpu_instruction_boundary(0xB401, 4); { uint8_t m=nes_read(0x20B3); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B404:;
    /* $B404: 66 */ nes_cpu_instruction_boundary(0xB404, 5); { uint16_t a=0xBC; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B406:; /* ClearInitFlags */
    /* $B406: A9 */ nes_cpu_instruction_boundary(0xB406, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B408:;
    /* $B408: 8D */ nes_cpu_instruction_boundary(0xB408, 4); nes_write(0x0680, g_cpu.A);
label_B40B:;
    /* $B40B: 8D */ nes_cpu_instruction_boundary(0xB40B, 4); nes_write(0x0681, g_cpu.A);
label_B40E:;
    /* $B40E: 8D */ nes_cpu_instruction_boundary(0xB40E, 4); nes_write(0x0682, g_cpu.A);
label_B411:;
    /* $B411: 8D */ nes_cpu_instruction_boundary(0xB411, 4); nes_write(0x0683, g_cpu.A);
label_B414:;
    /* $B414: 8D */ nes_cpu_instruction_boundary(0xB414, 4); nes_write(0x0684, g_cpu.A);
label_B417:;
    /* $B417: 8D */ nes_cpu_instruction_boundary(0xB417, 4); nes_write(0x0685, g_cpu.A);
label_B41A:;
    /* $B41A: 60 */ nes_cpu_instruction_boundary(0xB41A, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B3FC_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3FC_b5");
#endif
    func_B3FC_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B40E_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B40E_b5");
#endif
    func_B3FC_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B4A9_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4A9_b5");
#endif
label_B4A9:;
    /* $B4A9: B3 */ nes_cpu_instruction_boundary(0xB4A9, 5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x20) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B4AB:;
    /* $B4AB: C3 */ nes_cpu_instruction_boundary(0xB4AB, 8); { uint16_t a=nes_read16zp((0xB4 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B4AD:;
    /* $B4AD: 8A */ nes_cpu_instruction_boundary(0xB4AD, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_B4AE:;
    /* $B4AE: 9D */ nes_cpu_instruction_boundary(0xB4AE, 5); nes_write((0x0652 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B4B1:;
    /* $B4B1: A9 */ nes_cpu_instruction_boundary(0xB4B1, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B4B3:;
    /* $B4B3: 9D */ nes_cpu_instruction_boundary(0xB4B3, 5); nes_write((0x0665 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B4B6:;
    /* $B4B6: 9D */ nes_cpu_instruction_boundary(0xB4B6, 5); nes_write((0x0670 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B4B9:;
    /* $B4B9: 9D */ nes_cpu_instruction_boundary(0xB4B9, 5); nes_write((0x0674 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B4BC:;
    /* $B4BC: 9D */ nes_cpu_instruction_boundary(0xB4BC, 5); nes_write((0x0678 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B4BF:;
    /* $B4BF: 8D */ nes_cpu_instruction_boundary(0xB4BF, 4); nes_write(0x0607, g_cpu.A);
label_B4C2:;
    /* $B4C2: 60 */ nes_cpu_instruction_boundary(0xB4C2, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B4BD_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4BD_b5");
#endif
label_B4BD:;
    /* $B4BD: 78 */ nes_cpu_instruction_boundary(0xB4BD, 2); g_cpu.I = 1;
label_B4BE:;
    /* $B4BE: 06 */ nes_cpu_instruction_boundary(0xB4BE, 5); { uint16_t a=0x8D; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B4C0:;
    /* $B4C0: 07 */ nes_cpu_instruction_boundary(0xB4C0, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B4C2:;
    /* $B4C2: 60 */ nes_cpu_instruction_boundary(0xB4C2, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B587_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B587_b5");
#endif
label_B587:;
    /* $B587: EE */ nes_cpu_instruction_boundary(0xB587, 6); { uint16_t a=0x0674; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B58A:;
    /* $B58A: AD */ nes_cpu_instruction_boundary(0xB58A, 4); g_cpu.A = nes_read(0x0674); FLAG_NZ(g_cpu.A);
label_B58D:;
    /* $B58D: C9 */ nes_cpu_instruction_boundary(0xB58D, 2); { int r=g_cpu.A-0x0F; g_cpu.C=(g_cpu.A>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_B58F:;
    /* $B58F: D0 */ nes_cpu_instruction_boundary(0xB58F, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB568); return; }
label_B591:;
    /* $B591: 4C */ nes_cpu_instruction_boundary(0xB591, 3); nes_cpu_instruction_boundary(0xB5BF, 2); func_B5BF_b5(); return;
}

void func_B5A5_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5A5_b5");
#endif
label_B5A5:;
    /* $B5A5: A9 */ nes_cpu_instruction_boundary(0xB5A5, 2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_B5A7:;
    /* $B5A7: 8D */ nes_cpu_instruction_boundary(0xB5A7, 4); nes_write(0x0670, g_cpu.A);
label_B5AA:;
    /* $B5AA: 60 */ nes_cpu_instruction_boundary(0xB5AA, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B98C_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B98C_b5");
#endif
label_B98C:;
    /* $B98C: 8D */ nes_cpu_instruction_boundary(0xB98C, 4); nes_write(0x0612, g_cpu.A);
label_B98F:;
    /* $B98F: A9 */ nes_cpu_instruction_boundary(0xB98F, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B991:;
    /* $B991: 8D */ nes_cpu_instruction_boundary(0xB991, 4); nes_write(0x0613, g_cpu.A);
label_B994:;
    /* $B994: 20 */ nes_cpu_instruction_boundary(0xB994, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x96; g_cpu.S--; func_B9A8_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB994, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B997:;
    /* $B997: 68 */ nes_cpu_instruction_boundary(0xB997, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_B998:;
    /* $B998: 8D */ nes_cpu_instruction_boundary(0xB998, 4); nes_write(0x0613, g_cpu.A);
label_B99B:;
    /* $B99B: 68 */ nes_cpu_instruction_boundary(0xB99B, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_B99C:;
    /* $B99C: 8D */ nes_cpu_instruction_boundary(0xB99C, 4); nes_write(0x0612, g_cpu.A);
label_B99F:;
    /* $B99F: 4C */ nes_cpu_instruction_boundary(0xB99F, 3); nes_cpu_instruction_boundary(0xB899, 2); func_B899_b5(); return;
}

void func_B9A0_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9A0_b5");
#endif
label_B9A0:;
    /* $B9A0: 99 */ nes_cpu_instruction_boundary(0xB9A0, 5); nes_write((0x20B8 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B9A3:;
    /* $B9A3: BC */ nes_cpu_instruction_boundary(0xB9A3, 4); g_cpu.Y = nes_read((0x4CB9 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_B9A6:;
    /* $B9A6: 99 */ nes_cpu_instruction_boundary(0xB9A6, 5); nes_write((0x18B8 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B9A9:;
    /* $B9A9: AD */ nes_cpu_instruction_boundary(0xB9A9, 4); g_cpu.A = nes_read(0x0610); FLAG_NZ(g_cpu.A);
label_B9AC:;
    /* $B9AC: 6D */ nes_cpu_instruction_boundary(0xB9AC, 4); { uint8_t m=nes_read(0x0612); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9AF:;
    /* $B9AF: 8D */ nes_cpu_instruction_boundary(0xB9AF, 4); nes_write(0x0610, g_cpu.A);
label_B9B2:;
    /* $B9B2: AD */ nes_cpu_instruction_boundary(0xB9B2, 4); g_cpu.A = nes_read(0x0611); FLAG_NZ(g_cpu.A);
label_B9B5:;
    /* $B9B5: 6D */ nes_cpu_instruction_boundary(0xB9B5, 4); { uint8_t m=nes_read(0x0613); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9B8:;
    /* $B9B8: 8D */ nes_cpu_instruction_boundary(0xB9B8, 4); nes_write(0x0611, g_cpu.A);
label_B9BB:;
    /* $B9BB: 60 */ nes_cpu_instruction_boundary(0xB9BB, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B9E4_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9E4_b5");
#endif
label_B9E4:;
    /* $B9E4: 06 */ nes_cpu_instruction_boundary(0xB9E4, 5); { uint16_t a=0x2E; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9E6:;
    /* $B9E6: 17 */ nes_cpu_instruction_boundary(0xB9E6, 6); { uint16_t a=(0x06 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B9E8:;
    /* $B9E8: AD */ nes_cpu_instruction_boundary(0xB9E8, 4); g_cpu.A = nes_read(0x0617); FLAG_NZ(g_cpu.A);
label_B9EB:;
    /* $B9EB: CD */ nes_cpu_instruction_boundary(0xB9EB, 4); { uint8_t m=nes_read(0x0616); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B9EE:;
    /* $B9EE: 90 */ nes_cpu_instruction_boundary(0xB9EE, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_B9F6; }
label_B9F0:;
    /* $B9F0: ED */ nes_cpu_instruction_boundary(0xB9F0, 4); { uint8_t m=nes_read(0x0616); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9F3:;
    /* $B9F3: 8D */ nes_cpu_instruction_boundary(0xB9F3, 4); nes_write(0x0617, g_cpu.A);
label_B9F6:; /* DivideSFXTriPeriod_endIf_A */
    /* $B9F6: 2E */ nes_cpu_instruction_boundary(0xB9F6, 6); { uint16_t a=0x0610; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9F9:;
    /* $B9F9: 2E */ nes_cpu_instruction_boundary(0xB9F9, 6); { uint16_t a=0x0611; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9FC:;
    /* $B9FC: CA */ nes_cpu_instruction_boundary(0xB9FC, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_B9FD:;
    /* $B9FD: D0 */ nes_cpu_instruction_boundary(0xB9FD, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB9E5); return; }
label_B9FF:;
    /* $B9FF: AD */ nes_cpu_instruction_boundary(0xB9FF, 4); g_cpu.A = nes_read(0x0610); FLAG_NZ(g_cpu.A);
label_BA02:;
    /* $BA02: 8D */ nes_cpu_instruction_boundary(0xBA02, 4); nes_write(0x0614, g_cpu.A);
label_BA05:;
    /* $BA05: AD */ nes_cpu_instruction_boundary(0xBA05, 4); g_cpu.A = nes_read(0x0611); FLAG_NZ(g_cpu.A);
label_BA08:;
    /* $BA08: 8D */ nes_cpu_instruction_boundary(0xBA08, 4); nes_write(0x0615, g_cpu.A);
label_BA0B:;
    /* $BA0B: 68 */ nes_cpu_instruction_boundary(0xBA0B, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_BA0C:;
    /* $BA0C: 8D */ nes_cpu_instruction_boundary(0xBA0C, 4); nes_write(0x0611, g_cpu.A);
label_BA0F:;
    /* $BA0F: 68 */ nes_cpu_instruction_boundary(0xBA0F, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_BA10:;
    /* $BA10: 8D */ nes_cpu_instruction_boundary(0xBA10, 4); nes_write(0x0610, g_cpu.A);
label_BA13:;
    /* $BA13: 60 */ nes_cpu_instruction_boundary(0xBA13, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B9E5_b5_body(int _entry) { /* DivideSFXTriPeriod_loop */
    switch (_entry) {
        case 1: goto label_B9F3;
    }
label_B9E5:; /* DivideSFXTriPeriod_loop */
    /* $B9E5: 2E */ nes_cpu_instruction_boundary(0xB9E5, 6); { uint16_t a=0x0617; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9E8:;
    /* $B9E8: AD */ nes_cpu_instruction_boundary(0xB9E8, 4); g_cpu.A = nes_read(0x0617); FLAG_NZ(g_cpu.A);
label_B9EB:;
    /* $B9EB: CD */ nes_cpu_instruction_boundary(0xB9EB, 4); { uint8_t m=nes_read(0x0616); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B9EE:;
    /* $B9EE: 90 */ nes_cpu_instruction_boundary(0xB9EE, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_B9F6; }
label_B9F0:;
    /* $B9F0: ED */ nes_cpu_instruction_boundary(0xB9F0, 4); { uint8_t m=nes_read(0x0616); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9F3:;
    /* $B9F3: 8D */ nes_cpu_instruction_boundary(0xB9F3, 4); nes_write(0x0617, g_cpu.A);
label_B9F6:; /* DivideSFXTriPeriod_endIf_A */
    /* $B9F6: 2E */ nes_cpu_instruction_boundary(0xB9F6, 6); { uint16_t a=0x0610; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9F9:;
    /* $B9F9: 2E */ nes_cpu_instruction_boundary(0xB9F9, 6); { uint16_t a=0x0611; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9FC:;
    /* $B9FC: CA */ nes_cpu_instruction_boundary(0xB9FC, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_B9FD:;
    /* $B9FD: D0 */ nes_cpu_instruction_boundary(0xB9FD, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xB9E5, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B9E5;
    }
label_B9FF:;
    /* $B9FF: AD */ nes_cpu_instruction_boundary(0xB9FF, 4); g_cpu.A = nes_read(0x0610); FLAG_NZ(g_cpu.A);
label_BA02:;
    /* $BA02: 8D */ nes_cpu_instruction_boundary(0xBA02, 4); nes_write(0x0614, g_cpu.A);
label_BA05:;
    /* $BA05: AD */ nes_cpu_instruction_boundary(0xBA05, 4); g_cpu.A = nes_read(0x0611); FLAG_NZ(g_cpu.A);
label_BA08:;
    /* $BA08: 8D */ nes_cpu_instruction_boundary(0xBA08, 4); nes_write(0x0615, g_cpu.A);
label_BA0B:;
    /* $BA0B: 68 */ nes_cpu_instruction_boundary(0xBA0B, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_BA0C:;
    /* $BA0C: 8D */ nes_cpu_instruction_boundary(0xBA0C, 4); nes_write(0x0611, g_cpu.A);
label_BA0F:;
    /* $BA0F: 68 */ nes_cpu_instruction_boundary(0xBA0F, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_BA10:;
    /* $BA10: 8D */ nes_cpu_instruction_boundary(0xBA10, 4); nes_write(0x0610, g_cpu.A);
label_BA13:;
    /* $BA13: 60 */ nes_cpu_instruction_boundary(0xBA13, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B9E5_b5(void) { /* DivideSFXTriPeriod_loop */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9E5_b5");
#endif
    func_B9E5_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B9F3_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9F3_b5");
#endif
    func_B9E5_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BA41_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA41_b5");
#endif
label_BA41:;
    /* $BA41: 06 */ nes_cpu_instruction_boundary(0xBA41, 5); { uint16_t a=0xAD; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA43:;
    /* $BA43: 48 */ nes_cpu_instruction_boundary(0xBA43, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_BA44:;
    /* $BA44: 06 */ nes_cpu_instruction_boundary(0xBA44, 5); { uint16_t a=0x8D; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA46:;
    /* $BA46: 01 */ nes_cpu_instruction_boundary(0xBA46, 6); g_cpu.A |= nes_read(nes_read16zp((0x40 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA48:;
    /* $BA48: AD */ nes_cpu_instruction_boundary(0xBA48, 4); g_cpu.A = nes_read(0x0600); FLAG_NZ(g_cpu.A);
label_BA4B:;
    /* $BA4B: 8D */ nes_cpu_instruction_boundary(0xBA4B, 4); nes_write(0x4002, g_cpu.A);
label_BA4E:;
    /* $BA4E: AD */ nes_cpu_instruction_boundary(0xBA4E, 4); g_cpu.A = nes_read(0x0601); FLAG_NZ(g_cpu.A);
label_BA51:;
    /* $BA51: 8D */ nes_cpu_instruction_boundary(0xBA51, 4); nes_write(0x4003, g_cpu.A);
label_BA54:;
    /* $BA54: AD */ nes_cpu_instruction_boundary(0xBA54, 4); g_cpu.A = nes_read(0x0649); FLAG_NZ(g_cpu.A);
label_BA57:;
    /* $BA57: 8D */ nes_cpu_instruction_boundary(0xBA57, 4); nes_write(0x4005, g_cpu.A);
label_BA5A:;
    /* $BA5A: AD */ nes_cpu_instruction_boundary(0xBA5A, 4); g_cpu.A = nes_read(0x0604); FLAG_NZ(g_cpu.A);
label_BA5D:;
    /* $BA5D: 8D */ nes_cpu_instruction_boundary(0xBA5D, 4); nes_write(0x4006, g_cpu.A);
label_BA60:;
    /* $BA60: AD */ nes_cpu_instruction_boundary(0xBA60, 4); g_cpu.A = nes_read(0x0605); FLAG_NZ(g_cpu.A);
label_BA63:;
    /* $BA63: 8D */ nes_cpu_instruction_boundary(0xBA63, 4); nes_write(0x4007, g_cpu.A);
label_BA66:; /* LoadMusicSQ1SQ2Periods_RTS */
    /* $BA66: 60 */ nes_cpu_instruction_boundary(0xBA66, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BC1C_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC1C_b5");
#endif
label_BC1C:;
    /* $BC1C: 31 */ nes_cpu_instruction_boundary(0xBC1C, 5); g_cpu.A &= nes_read((nes_read16zp(0xB2) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BC1E:;
    /* $BC1E: 8D */ nes_cpu_instruction_boundary(0xBC1E, 4); nes_write(0x400E, g_cpu.A);
label_BC21:;
    /* $BC21: B9 */ nes_cpu_instruction_boundary(0xBC21, 4); g_cpu.A = nes_read((0xB232 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BC24:;
    /* $BC24: 8D */ nes_cpu_instruction_boundary(0xBC24, 4); nes_write(0x400F, g_cpu.A);
label_BC27:; /* MusicChannelInstr_SongNoteNoise_endIf_A */
    /* $BC27: 4C */ nes_cpu_instruction_boundary(0xBC27, 3); nes_cpu_instruction_boundary(0xBBD8, 2); func_BBD8_b5(); return;
}

void func_BC53_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC53_b5");
#endif
label_BC53:;
    /* $BC53: B6 */ nes_cpu_instruction_boundary(0xBC53, 4); g_cpu.X = nes_read((0xD1 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_BC55:;
    /* $BC55: B6 */ nes_cpu_instruction_boundary(0xBC55, 4); g_cpu.X = nes_read((0xB3 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_BC57:;
    /* $BC57: BC */ nes_cpu_instruction_boundary(0xBC57, 4); g_cpu.Y = nes_read((0xBCA7 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BC5A:;
    /* $BC5A: A7 */ nes_cpu_instruction_boundary(0xBC5A, 3); g_cpu.A = g_cpu.X = nes_read(0xBC); FLAG_NZ(g_cpu.A);
label_BC5C:;
    /* $BC5C: A7 */ nes_cpu_instruction_boundary(0xBC5C, 3); g_cpu.A = g_cpu.X = nes_read(0xBC); FLAG_NZ(g_cpu.A);
label_BC5E:;
    /* $BC5E: B0 */ nes_cpu_instruction_boundary(0xBC5E, 2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xBC1C); return; }
label_BC60:;
    /* $BC60: AD */ nes_cpu_instruction_boundary(0xBC60, 4); g_cpu.A = nes_read(0xA7BC); FLAG_NZ(g_cpu.A);
label_BC63:;
    /* $BC63: BC */ nes_cpu_instruction_boundary(0xBC63, 4); g_cpu.Y = nes_read((0xBCB0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BC66:; /* RunMusicLoopRoutine */
    /* $BC66: AD */ nes_cpu_instruction_boundary(0xBC66, 4); g_cpu.A = nes_read(0x065D); FLAG_NZ(g_cpu.A);
label_BC69:;
    /* $BC69: A2 */ nes_cpu_instruction_boundary(0xBC69, 2); g_cpu.X = 0xE6; FLAG_NZ(g_cpu.X);
label_BC6B:;
    /* $BC6B: D0 */ nes_cpu_instruction_boundary(0xBC6B, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BC72; }
label_BC6D:; /* RunMusicInitRoutine */
    /* $BC6D: AD */ nes_cpu_instruction_boundary(0xBC6D, 4); g_cpu.A = nes_read(0x0685); FLAG_NZ(g_cpu.A);
label_BC70:;
    /* $BC70: A2 */ nes_cpu_instruction_boundary(0xBC70, 2); g_cpu.X = 0xE1; FLAG_NZ(g_cpu.X);
label_BC72:; /* RunMusicInitRoutine_Common */
    /* $BC72: 20 */ nes_cpu_instruction_boundary(0xBC72, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x74; g_cpu.S--; func_B4ED_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC72, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC75:;
    /* $BC75: 20 */ nes_cpu_instruction_boundary(0xBC75, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x77; g_cpu.S--; func_BC83_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC75, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC78:;
    /* $BC78: 6C */ nes_cpu_instruction_boundary(0xBC78, 5); { uint16_t _jt = nes_read16zp(0xE2); nes_cpu_instruction_boundary(_jt, 2); call_by_address_tail(_jt, -1); return; }
}

void func_BC64_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC64_b5");
#endif
label_BC64:;
    /* $BC64: B0 */ nes_cpu_instruction_boundary(0xBC64, 2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xBC22); return; }
label_BC66:; /* RunMusicLoopRoutine */
    /* $BC66: AD */ nes_cpu_instruction_boundary(0xBC66, 4); g_cpu.A = nes_read(0x065D); FLAG_NZ(g_cpu.A);
label_BC69:;
    /* $BC69: A2 */ nes_cpu_instruction_boundary(0xBC69, 2); g_cpu.X = 0xE6; FLAG_NZ(g_cpu.X);
label_BC6B:;
    /* $BC6B: D0 */ nes_cpu_instruction_boundary(0xBC6B, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BC72; }
label_BC6D:; /* RunMusicInitRoutine */
    /* $BC6D: AD */ nes_cpu_instruction_boundary(0xBC6D, 4); g_cpu.A = nes_read(0x0685); FLAG_NZ(g_cpu.A);
label_BC70:;
    /* $BC70: A2 */ nes_cpu_instruction_boundary(0xBC70, 2); g_cpu.X = 0xE1; FLAG_NZ(g_cpu.X);
label_BC72:; /* RunMusicInitRoutine_Common */
    /* $BC72: 20 */ nes_cpu_instruction_boundary(0xBC72, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x74; g_cpu.S--; func_B4ED_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC72, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC75:;
    /* $BC75: 20 */ nes_cpu_instruction_boundary(0xBC75, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x77; g_cpu.S--; func_BC83_b5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC75, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC78:;
    /* $BC78: 6C */ nes_cpu_instruction_boundary(0xBC78, 5); { uint16_t _jt = nes_read16zp(0xE2); nes_cpu_instruction_boundary(_jt, 2); call_by_address_tail(_jt, -1); return; }
}

void func_BF19_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BF19_b5");
#endif
label_BF19:;
    /* $BF19: 00 */ nes_cpu_instruction_boundary(0xBF19, 7); nes_brk_executed(0xBF19); return;
}

void func_C2BF_b5_body(int _entry) { /* Adiv16 */
    switch (_entry) {
        case 1: goto label_C2C0;
    }
label_C2BF:; /* Adiv16 */
    /* $C2BF: 4A */ nes_cpu_instruction_boundary(0xC2BF, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_C2C0:; /* Adiv8 */
    /* $C2C0: 4A */ nes_cpu_instruction_boundary(0xC2C0, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_C2C1:;
    /* $C2C1: 4A */ nes_cpu_instruction_boundary(0xC2C1, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_C2C2:;
    /* $C2C2: 4A */ nes_cpu_instruction_boundary(0xC2C2, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_C2C3:;
    /* $C2C3: 60 */ nes_cpu_instruction_boundary(0xC2C3, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C2BF_b5(void) { /* Adiv16 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C2BF_b5");
#endif
    func_C2BF_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C2C0_b5(void) { /* Adiv8 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C2C0_b5");
#endif
    func_C2BF_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C2C5_b5(void) { /* Amul16 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C2C5_b5");
#endif
label_C2C5:; /* Amul16 */
    /* $C2C5: 0A */ nes_cpu_instruction_boundary(0xC2C5, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_C2C6:; /* Amul8 */
    /* $C2C6: 0A */ nes_cpu_instruction_boundary(0xC2C6, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_C2C7:;
    /* $C2C7: 0A */ nes_cpu_instruction_boundary(0xC2C7, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_C2C8:;
    /* $C2C8: 0A */ nes_cpu_instruction_boundary(0xC2C8, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_C2C9:;
    /* $C2C9: 60 */ nes_cpu_instruction_boundary(0xC2C9, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C3D4_b5(void) { /* TwosComplement */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C3D4_b5");
#endif
label_C3D4:; /* TwosComplement */
    /* $C3D4: 49 */ nes_cpu_instruction_boundary(0xC3D4, 2); g_cpu.A ^= 0xFF; FLAG_NZ(g_cpu.A);
label_C3D6:;
    /* $C3D6: 18 */ nes_cpu_instruction_boundary(0xC3D6, 2); g_cpu.C = 0;
label_C3D7:;
    /* $C3D7: 69 */ nes_cpu_instruction_boundary(0xC3D7, 2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_C3D9:;
    /* $C3D9: 60 */ nes_cpu_instruction_boundary(0xC3D9, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_CB73_b5(void) { /* SelectSamusPalette */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CB73_b5");
#endif
label_CB73:; /* SelectSamusPalette */
    /* $CB73: 98 */ nes_cpu_instruction_boundary(0xCB73, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_CB74:;
    /* $CB74: 48 */ nes_cpu_instruction_boundary(0xCB74, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_CB75:;
    /* $CB75: AD */ nes_cpu_instruction_boundary(0xCB75, 4); g_cpu.A = nes_read(0x6878); FLAG_NZ(g_cpu.A);
label_CB78:;
    /* $CB78: 0A */ nes_cpu_instruction_boundary(0xCB78, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_CB79:;
    /* $CB79: 0A */ nes_cpu_instruction_boundary(0xCB79, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_CB7A:;
    /* $CB7A: 0A */ nes_cpu_instruction_boundary(0xCB7A, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_CB7B:;
    /* $CB7B: AD */ nes_cpu_instruction_boundary(0xCB7B, 4); g_cpu.A = nes_read(0x010E); FLAG_NZ(g_cpu.A);
label_CB7E:;
    /* $CB7E: 2A */ nes_cpu_instruction_boundary(0xCB7E, 2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_CB7F:;
    /* $CB7F: 69 */ nes_cpu_instruction_boundary(0xCB7F, 2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_CB81:;
    /* $CB81: AC */ nes_cpu_instruction_boundary(0xCB81, 4); g_cpu.Y = nes_read(0x69B3); FLAG_NZ(g_cpu.Y);
label_CB84:;
    /* $CB84: F0 */ nes_cpu_instruction_boundary(0xCB84, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_CB89; }
label_CB86:;
    /* $CB86: 18 */ nes_cpu_instruction_boundary(0xCB86, 2); g_cpu.C = 0;
label_CB87:;
    /* $CB87: 69 */ nes_cpu_instruction_boundary(0xCB87, 2); { uint16_t r = g_cpu.A + 0x17 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x17); g_cpu.A=r&0xFF; }
label_CB89:; /* SelectSamusPalette_endIf */
    /* $CB89: 85 */ nes_cpu_instruction_boundary(0xCB89, 3); nes_write(0x1C, g_cpu.A);
label_CB8B:;
    /* $CB8B: 68 */ nes_cpu_instruction_boundary(0xCB8B, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_CB8C:;
    /* $CB8C: A8 */ nes_cpu_instruction_boundary(0xCB8C, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_CB8D:;
    /* $CB8D: 60 */ nes_cpu_instruction_boundary(0xCB8D, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_CBDA_b5_body(int _entry) { /* SFX_Door */
    switch (_entry) {
        case 1: goto label_CC03;
        case 2: goto label_CC07;
    }
label_CBDA:; /* SFX_Door */
    /* $CBDA: A9 */ nes_cpu_instruction_boundary(0xCBDA, 2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_CBDC:;
    /* $CBDC: D0 */ nes_cpu_instruction_boundary(0xCBDC, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_CBF5; }
label_CBDE:; /* SFX_SamusHit */
    /* $CBDE: A9 */ nes_cpu_instruction_boundary(0xCBDE, 2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_CBE0:;
    /* $CBE0: D0 */ nes_cpu_instruction_boundary(0xCBE0, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_CBFF; }
label_CBE2:; /* SFX_SamusDie */
    /* $CBE2: A9 */ nes_cpu_instruction_boundary(0xCBE2, 2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_CBE4:;
    /* $CBE4: D0 */ nes_cpu_instruction_boundary(0xCBE4, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_CBF5; }
label_CBE6:; /* SetSFXSQ2InitFlag */
    /* $CBE6: A2 */ nes_cpu_instruction_boundary(0xCBE6, 2); g_cpu.X = 0x02; FLAG_NZ(g_cpu.X);
label_CBE8:; /* SetSoundInitFlag */
    /* $CBE8: 1D */ nes_cpu_instruction_boundary(0xCBE8, 4); g_cpu.A |= nes_read((0x0680 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_CBEB:;
    /* $CBEB: 9D */ nes_cpu_instruction_boundary(0xCBEB, 5); nes_write((0x0680 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_CBEE:;
    /* $CBEE: 60 */ nes_cpu_instruction_boundary(0xCBEE, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_CBEF:; /* SFX_SamusBall */
    /* $CBEF: A9 */ nes_cpu_instruction_boundary(0xCBEF, 2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_CBF1:;
    /* $CBF1: D0 */ nes_cpu_instruction_boundary(0xCBF1, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_CBF5; }
label_CBF3:; /* SFX_Beep */
    /* $CBF3: A9 */ nes_cpu_instruction_boundary(0xCBF3, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_CBF5:; /* SetSFXTriInitFlag */
    /* $CBF5: A2 */ nes_cpu_instruction_boundary(0xCBF5, 2); g_cpu.X = 0x03; FLAG_NZ(g_cpu.X);
label_CBF7:;
    /* $CBF7: D0 */ nes_cpu_instruction_boundary(0xCBF7, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xCBE8, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_CBE8;
    }
label_CBF9:; /* PowerUpMusic */
    /* $CBF9: A9 */ nes_cpu_instruction_boundary(0xCBF9, 2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_CBFB:;
    /* $CBFB: D0 */ nes_cpu_instruction_boundary(0xCBFB, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_CBFF; }
label_CBFD:; /* IntroMusic */
    /* $CBFD: A9 */ nes_cpu_instruction_boundary(0xCBFD, 2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_CBFF:; /* SetSFXMultiInitFlag */
    /* $CBFF: A2 */ nes_cpu_instruction_boundary(0xCBFF, 2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_CC01:;
    /* $CC01: D0 */ nes_cpu_instruction_boundary(0xCC01, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xCBE8, 2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_CBE8;
    }
label_CC03:; /* MotherBrainMusic */
    /* $CC03: A9 */ nes_cpu_instruction_boundary(0xCC03, 2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_CC05:;
    /* $CC05: D0 */ nes_cpu_instruction_boundary(0xCC05, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_CC09; }
label_CC07:; /* TourianMusic */
    /* $CC07: A9 */ nes_cpu_instruction_boundary(0xCC07, 2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_CC09:; /* SetMusicInitFlag */
    /* $CC09: A2 */ nes_cpu_instruction_boundary(0xCC09, 2); g_cpu.X = 0x05; FLAG_NZ(g_cpu.X);
label_CC0B:;
    /* $CC0B: D0 */ nes_cpu_instruction_boundary(0xCC0B, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xCBE8, 2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_CBE8;
    }
label_CC0D:; /* UpdateSamus */
    /* $CC0D: A2 */ nes_cpu_instruction_boundary(0xCC0D, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_CC0F:;
    /* $CC0F: 86 */ nes_cpu_instruction_boundary(0xCC0F, 3); nes_write(0x4B, g_cpu.X);
label_CC11:;
    /* $CC11: E8 */ nes_cpu_instruction_boundary(0xCC11, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_CC12:;
    /* $CC12: 86 */ nes_cpu_instruction_boundary(0xCC12, 3); nes_write(0x55, g_cpu.X);
label_CC14:;
    /* $CC14: 20 */ nes_cpu_instruction_boundary(0xCC14, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xCC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x16; g_cpu.S--; func_CC1A();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCC14, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CC17:;
    /* $CC17: C6 */ nes_cpu_instruction_boundary(0xCC17, 5); { uint16_t a=0x55; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_CC19:;
    /* $CC19: 60 */ nes_cpu_instruction_boundary(0xCC19, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_CBDA_b5(void) { /* SFX_Door */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CBDA_b5");
#endif
    func_CBDA_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_CC03_b5(void) { /* MotherBrainMusic */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CC03_b5");
#endif
    func_CBDA_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_CC07_b5(void) { /* TourianMusic */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CC07_b5");
#endif
    func_CBDA_b5_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D2FD_b5(void) { /* SetObjAnimIndex */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D2FD_b5");
#endif
label_D2FD:; /* SetObjAnimIndex */
    /* $D2FD: 9D */ nes_cpu_instruction_boundary(0xD2FD, 5); nes_write((0x0306 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_D300:;
    /* $D300: A9 */ nes_cpu_instruction_boundary(0xD300, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_D302:;
    /* $D302: 9D */ nes_cpu_instruction_boundary(0xD302, 5); nes_write((0x0304 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_D305:; /* SetObjAnimIndex_RTS */
    /* $D305: 60 */ nes_cpu_instruction_boundary(0xD305, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_DC1E_b5(void) { /* MapScrollRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DC1E_b5");
#endif
label_DC1E:; /* MapScrollRoutine */
    /* $DC1E: 85 */ nes_cpu_instruction_boundary(0xDC1E, 3); nes_write(0x07, g_cpu.A);
label_DC20:;
    /* $DC20: A5 */ nes_cpu_instruction_boundary(0xDC20, 3); g_cpu.A = nes_read(0x4F); FLAG_NZ(g_cpu.A);
label_DC22:;
    /* $DC22: 85 */ nes_cpu_instruction_boundary(0xDC22, 3); nes_write(0x06, g_cpu.A);
label_DC24:;
    /* $DC24: A5 */ nes_cpu_instruction_boundary(0xDC24, 3); g_cpu.A = nes_read(0x49); FLAG_NZ(g_cpu.A);
label_DC26:;
    /* $DC26: 4A */ nes_cpu_instruction_boundary(0xDC26, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_DC27:;
    /* $DC27: 08 */ nes_cpu_instruction_boundary(0xDC27, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_DC28:;
    /* $DC28: F0 */ nes_cpu_instruction_boundary(0xDC28, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DC34; }
label_DC2A:;
    /* $DC2A: 90 */ nes_cpu_instruction_boundary(0xDC2A, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DC3C; }
label_DC2C:;
    /* $DC2C: A5 */ nes_cpu_instruction_boundary(0xDC2C, 3); g_cpu.A = nes_read(0xFD); FLAG_NZ(g_cpu.A);
label_DC2E:;
    /* $DC2E: F0 */ nes_cpu_instruction_boundary(0xDC2E, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DC3C; }
label_DC30:;
    /* $DC30: C6 */ nes_cpu_instruction_boundary(0xDC30, 5); { uint16_t a=0x07; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DC32:;
    /* $DC32: B0 */ nes_cpu_instruction_boundary(0xDC32, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_DC3C; }
label_DC34:; /* MapScrollRoutine_else_A */
    /* $DC34: 90 */ nes_cpu_instruction_boundary(0xDC34, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DC3C; }
label_DC36:;
    /* $DC36: A5 */ nes_cpu_instruction_boundary(0xDC36, 3); g_cpu.A = nes_read(0xFC); FLAG_NZ(g_cpu.A);
label_DC38:;
    /* $DC38: F0 */ nes_cpu_instruction_boundary(0xDC38, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DC3C; }
label_DC3A:;
    /* $DC3A: C6 */ nes_cpu_instruction_boundary(0xDC3A, 5); { uint16_t a=0x06; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DC3C:; /* MapScrollRoutine_endIf_A */
    /* $DC3C: A5 */ nes_cpu_instruction_boundary(0xDC3C, 3); g_cpu.A = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_DC3E:;
    /* $DC3E: 45 */ nes_cpu_instruction_boundary(0xDC3E, 3); g_cpu.A ^= nes_read(0x08); FLAG_NZ(g_cpu.A);
label_DC40:;
    /* $DC40: 29 */ nes_cpu_instruction_boundary(0xDC40, 2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_DC42:;
    /* $DC42: 28 */ nes_cpu_instruction_boundary(0xDC42, 4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_DC43:;
    /* $DC43: 18 */ nes_cpu_instruction_boundary(0xDC43, 2); g_cpu.C = 0;
label_DC44:;
    /* $DC44: F0 */ nes_cpu_instruction_boundary(0xDC44, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DC4D; }
label_DC46:;
    /* $DC46: 65 */ nes_cpu_instruction_boundary(0xDC46, 3); { uint8_t m=nes_read(0x07); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_DC48:;
    /* $DC48: 85 */ nes_cpu_instruction_boundary(0xDC48, 3); nes_write(0x07, g_cpu.A);
label_DC4A:;
    /* $DC4A: 4C */ nes_cpu_instruction_boundary(0xDC4A, 3); nes_cpu_instruction_boundary(0xDC51, 2); func_DC51(); return;
label_DC4D:; /* MapScrollRoutine_else_B */
    /* $DC4D: 65 */ nes_cpu_instruction_boundary(0xDC4D, 3); { uint8_t m=nes_read(0x06); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
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

void func_E449_b5(void) { /* NegateTemp00Temp01 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E449_b5");
#endif
label_E449:; /* NegateTemp00Temp01 */
    /* $E449: A9 */ nes_cpu_instruction_boundary(0xE449, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E44B:;
    /* $E44B: 38 */ nes_cpu_instruction_boundary(0xE44B, 2); g_cpu.C = 1;
label_E44C:;
    /* $E44C: E5 */ nes_cpu_instruction_boundary(0xE44C, 3); { uint8_t m=nes_read(0x00); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_E44E:;
    /* $E44E: 85 */ nes_cpu_instruction_boundary(0xE44E, 3); nes_write(0x00, g_cpu.A);
label_E450:;
    /* $E450: A9 */ nes_cpu_instruction_boundary(0xE450, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E452:;
    /* $E452: E5 */ nes_cpu_instruction_boundary(0xE452, 3); { uint8_t m=nes_read(0x01); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_E454:;
    /* $E454: 85 */ nes_cpu_instruction_boundary(0xE454, 3); nes_write(0x01, g_cpu.A);
label_E456:;
    /* $E456: 60 */ nes_cpu_instruction_boundary(0xE456, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E770_b5(void) { /* EnemyCheckMoveUp */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E770_b5");
#endif
label_E770:; /* EnemyCheckMoveUp */
    /* $E770: A6 */ nes_cpu_instruction_boundary(0xE770, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_E772:;
    /* $E772: BD */ nes_cpu_instruction_boundary(0xE772, 4); g_cpu.A = nes_read((0x6AF5 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E775:;
    /* $E775: 18 */ nes_cpu_instruction_boundary(0xE775, 2); g_cpu.C = 0;
label_E776:;
    /* $E776: 69 */ nes_cpu_instruction_boundary(0xE776, 2); { uint16_t r = g_cpu.A + 0x08 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x08); g_cpu.A=r&0xFF; }
label_E778:;
    /* $E778: 4C */ nes_cpu_instruction_boundary(0xE778, 3); nes_cpu_instruction_boundary(0xE783, 2); func_E783(); return;
}

void func_E77B_b5(void) { /* EnemyCheckMoveDown */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E77B_b5");
#endif
label_E77B:; /* EnemyCheckMoveDown */
    /* $E77B: A6 */ nes_cpu_instruction_boundary(0xE77B, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_E77D:;
    /* $E77D: A9 */ nes_cpu_instruction_boundary(0xE77D, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E77F:;
    /* $E77F: 38 */ nes_cpu_instruction_boundary(0xE77F, 2); g_cpu.C = 1;
label_E780:;
    /* $E780: FD */ nes_cpu_instruction_boundary(0xE780, 4); { uint8_t m=nes_read((0x6AF5 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_E783:; /* EnemyCheckMoveVertical */
    /* $E783: 85 */ nes_cpu_instruction_boundary(0xE783, 3); nes_write(0x02, g_cpu.A);
label_E785:;
    /* $E785: A9 */ nes_cpu_instruction_boundary(0xE785, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_E787:;
    /* $E787: 85 */ nes_cpu_instruction_boundary(0xE787, 3); nes_write(0x04, g_cpu.A);
label_E789:;
    /* $E789: 20 */ nes_cpu_instruction_boundary(0xE789, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; func_E792();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE789, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E78C:;
    /* $E78C: BD */ nes_cpu_instruction_boundary(0xE78C, 4); g_cpu.A = nes_read((0x6AF6 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E78F:;
    /* $E78F: 4C */ nes_cpu_instruction_boundary(0xE78F, 3); nes_cpu_instruction_boundary(0xE7BD, 2); func_E7BD(); return;
}

void func_E8F1_b5(void) { /* EnemyCheckMoveLeft */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E8F1_b5");
#endif
label_E8F1:; /* EnemyCheckMoveLeft */
    /* $E8F1: A6 */ nes_cpu_instruction_boundary(0xE8F1, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_E8F3:;
    /* $E8F3: BD */ nes_cpu_instruction_boundary(0xE8F3, 4); g_cpu.A = nes_read((0x6AF6 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E8F6:;
    /* $E8F6: 18 */ nes_cpu_instruction_boundary(0xE8F6, 2); g_cpu.C = 0;
label_E8F7:;
    /* $E8F7: 69 */ nes_cpu_instruction_boundary(0xE8F7, 2); { uint16_t r = g_cpu.A + 0x08 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x08); g_cpu.A=r&0xFF; }
label_E8F9:;
    /* $E8F9: 4C */ nes_cpu_instruction_boundary(0xE8F9, 3); nes_cpu_instruction_boundary(0xE904, 2); func_E904(); return;
}

void func_E8FC_b5(void) { /* EnemyCheckMoveRight */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E8FC_b5");
#endif
label_E8FC:; /* EnemyCheckMoveRight */
    /* $E8FC: A6 */ nes_cpu_instruction_boundary(0xE8FC, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_E8FE:;
    /* $E8FE: A9 */ nes_cpu_instruction_boundary(0xE8FE, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E900:;
    /* $E900: 38 */ nes_cpu_instruction_boundary(0xE900, 2); g_cpu.C = 1;
label_E901:;
    /* $E901: FD */ nes_cpu_instruction_boundary(0xE901, 4); { uint8_t m=nes_read((0x6AF6 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_E904:; /* EnemyCheckMoveHorizontalBranch */
    /* $E904: 85 */ nes_cpu_instruction_boundary(0xE904, 3); nes_write(0x03, g_cpu.A);
label_E906:;
    /* $E906: 20 */ nes_cpu_instruction_boundary(0xE906, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x08; g_cpu.S--; func_E792();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE906, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E909:;
    /* $E909: BC */ nes_cpu_instruction_boundary(0xE909, 4); g_cpu.Y = nes_read((0x6AF5 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_E90C:;
    /* $E90C: 4C */ nes_cpu_instruction_boundary(0xE90C, 3); nes_cpu_instruction_boundary(0xE89B, 2); func_E89B(); return;
}

void func_E96A_b5(void) { /* MakeRoomRAMPtr */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E96A_b5");
#endif
label_E96A:; /* MakeRoomRAMPtr */
    /* $E96A: A9 */ nes_cpu_instruction_boundary(0xE96A, 2); g_cpu.A = 0x18; FLAG_NZ(g_cpu.A);
label_E96C:;
    /* $E96C: 85 */ nes_cpu_instruction_boundary(0xE96C, 3); nes_write(0x05, g_cpu.A);
label_E96E:;
    /* $E96E: A5 */ nes_cpu_instruction_boundary(0xE96E, 3); g_cpu.A = nes_read(0x02); FLAG_NZ(g_cpu.A);
label_E970:;
    /* $E970: 29 */ nes_cpu_instruction_boundary(0xE970, 2); g_cpu.A &= 0xF8; FLAG_NZ(g_cpu.A);
label_E972:;
    /* $E972: 0A */ nes_cpu_instruction_boundary(0xE972, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_E973:;
    /* $E973: 26 */ nes_cpu_instruction_boundary(0xE973, 5); { uint16_t a=0x05; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E975:;
    /* $E975: 0A */ nes_cpu_instruction_boundary(0xE975, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_E976:;
    /* $E976: 26 */ nes_cpu_instruction_boundary(0xE976, 5); { uint16_t a=0x05; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E978:;
    /* $E978: 85 */ nes_cpu_instruction_boundary(0xE978, 3); nes_write(0x04, g_cpu.A);
label_E97A:;
    /* $E97A: A5 */ nes_cpu_instruction_boundary(0xE97A, 3); g_cpu.A = nes_read(0x03); FLAG_NZ(g_cpu.A);
label_E97C:;
    /* $E97C: 4A */ nes_cpu_instruction_boundary(0xE97C, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_E97D:;
    /* $E97D: 4A */ nes_cpu_instruction_boundary(0xE97D, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_E97E:;
    /* $E97E: 4A */ nes_cpu_instruction_boundary(0xE97E, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_E97F:;
    /* $E97F: 05 */ nes_cpu_instruction_boundary(0xE97F, 3); g_cpu.A |= nes_read(0x04); FLAG_NZ(g_cpu.A);
label_E981:;
    /* $E981: 85 */ nes_cpu_instruction_boundary(0xE981, 3); nes_write(0x04, g_cpu.A);
label_E983:;
    /* $E983: A5 */ nes_cpu_instruction_boundary(0xE983, 3); g_cpu.A = nes_read(0x0B); FLAG_NZ(g_cpu.A);
label_E985:;
    /* $E985: 0A */ nes_cpu_instruction_boundary(0xE985, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_E986:;
    /* $E986: 0A */ nes_cpu_instruction_boundary(0xE986, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_E987:;
    /* $E987: 29 */ nes_cpu_instruction_boundary(0xE987, 2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A);
label_E989:;
    /* $E989: 05 */ nes_cpu_instruction_boundary(0xE989, 3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_E98B:;
    /* $E98B: 85 */ nes_cpu_instruction_boundary(0xE98B, 3); nes_write(0x05, g_cpu.A);
label_E98D:;
    /* $E98D: 60 */ nes_cpu_instruction_boundary(0xE98D, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F744_b5(void) { /* OrEnData05 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F744_b5");
#endif
label_F744:; /* OrEnData05 */
    /* $F744: 1D */ nes_cpu_instruction_boundary(0xF744, 4); g_cpu.A |= nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F747:;
    /* $F747: 9D */ nes_cpu_instruction_boundary(0xF747, 5); nes_write((0x0405 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F74A:; /* OrEnData05_RTS */
    /* $F74A: 60 */ nes_cpu_instruction_boundary(0xF74A, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F74B_b5(void) { /* ReadTableAt968B */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F74B_b5");
#endif
label_F74B:; /* ReadTableAt968B */
    /* $F74B: BC */ nes_cpu_instruction_boundary(0xF74B, 4); g_cpu.Y = nes_read((0x6B02 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_F74E:;
    /* $F74E: B9 */ nes_cpu_instruction_boundary(0xF74E, 4); g_cpu.A = nes_read((0x968B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F751:;
    /* $F751: 60 */ nes_cpu_instruction_boundary(0xF751, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B568_b5(void) { /* ScrewAttackSFXInit_RTS */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B568_b5");
#endif
label_B568:; /* ScrewAttackSFXInit_RTS */
    /* $B568: 60 */ nes_cpu_instruction_boundary(0xB568, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

