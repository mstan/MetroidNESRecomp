/* metroid_full_bank03_part00.c — PRG bank 3 function bodies (sub-part 0).
 * STANDALONE translation unit — compiled independently (in
 * parallel with every other bank part/sub-part and the
 * umbrella metroid_full.c). Do not compile as part of another TU or
 * edit directly; the source of truth is the recompiler's
 * code_generator.c. Renamed to drop the _partNN suffix if
 * this bank turned out to fit in a single sub-part. */

#include "metroid_full_decls.h"

void func_B3B4_b3(void) { /* SoundEngine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3B4_b3");
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
    /* $B3CA: 20 */ nes_cpu_instruction_boundary(0xB3CA, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCC; g_cpu.S--; func_B31B_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3CA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3CD:;
    /* $B3CD: 20 */ nes_cpu_instruction_boundary(0xB3CD, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCF; g_cpu.S--; func_B34B_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3CD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3D0:;
    /* $B3D0: 20 */ nes_cpu_instruction_boundary(0xB3D0, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD2; g_cpu.S--; func_B33D_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3D0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3D3:;
    /* $B3D3: 20 */ nes_cpu_instruction_boundary(0xB3D3, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD5; g_cpu.S--; func_BC36_b3();
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
    /* $B3EB: 20 */ nes_cpu_instruction_boundary(0xB3EB, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xED; g_cpu.S--; func_B404_b3();
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
    /* $B404: 20 */ nes_cpu_instruction_boundary(0xB404, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x06; g_cpu.S--; func_B41D_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB404, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B407:;
    /* $B407: 20 */ nes_cpu_instruction_boundary(0xB407, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x09; g_cpu.S--; func_B43E_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB407, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B40A:; /* GotoClearSpecialAddresses */
    /* $B40A: 20 */ nes_cpu_instruction_boundary(0xB40A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0C; g_cpu.S--; func_B40E_b3();
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

void func_9F54_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9F54_b3");
#endif
label_9F54:;
    /* $9F54: 8D */ nes_cpu_instruction_boundary(0x9F54, 4); nes_write(0x010A, g_cpu.A);
label_9F57:;
    /* $9F57: 8D */ nes_cpu_instruction_boundary(0x9F57, 4); nes_write(0x010B, g_cpu.A);
label_9F5A:;
    /* $9F5A: A9 */ nes_cpu_instruction_boundary(0x9F5A, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9F5C:;
    /* $9F5C: 8D */ nes_cpu_instruction_boundary(0x9F5C, 4); nes_write(0x010D, g_cpu.A);
label_9F5F:;
    /* $9F5F: A5 */ nes_cpu_instruction_boundary(0x9F5F, 3); g_cpu.A = nes_read(0x9D); FLAG_NZ(g_cpu.A);
label_9F61:;
    /* $9F61: 8D */ nes_cpu_instruction_boundary(0x9F61, 4); nes_write(0x010C, g_cpu.A);
label_9F64:; /* MotherBrain_SetTimeBomb_RTS */
    /* $9F64: 60 */ nes_cpu_instruction_boundary(0x9F64, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B399_b3(void) { /* SoundEngine_GameIsPaused */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B399_b3");
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
    /* $B3AD: 20 */ nes_cpu_instruction_boundary(0xB3AD, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAF; g_cpu.S--; func_B368_b3();
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

void func_B31B_b3_body(int _entry) { /* RunSFXNoiseInitRoutine */
    switch (_entry) {
        case 1: goto label_B329;
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
    /* $B337: 20 */ nes_cpu_instruction_boundary(0xB337, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x39; g_cpu.S--; func_B4BD_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB337, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B33A:;
    /* $B33A: 6C */ nes_cpu_instruction_boundary(0xB33A, 5); { uint16_t _jt = nes_read16zp(0xE2); nes_cpu_instruction_boundary(_jt, 2); call_by_address_tail(_jt, -1); return; }
}

void func_B31B_b3(void) { /* RunSFXNoiseInitRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B31B_b3");
#endif
    func_B31B_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B329_b3(void) { /* RunSFXSQ1InitRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B329_b3");
#endif
    func_B31B_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B34B_b3(void) { /* RunSFXMultiInitRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B34B_b3");
#endif
label_B34B:; /* RunSFXMultiInitRoutine */
    /* $B34B: AD */ nes_cpu_instruction_boundary(0xB34B, 4); g_cpu.A = nes_read(0x0684); FLAG_NZ(g_cpu.A);
label_B34E:;
    /* $B34E: A2 */ nes_cpu_instruction_boundary(0xB34E, 2); g_cpu.X = 0xA7; FLAG_NZ(g_cpu.X);
label_B350:;
    /* $B350: 20 */ nes_cpu_instruction_boundary(0xB350, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x52; g_cpu.S--; func_B4BD_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB350, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B353:;
    /* $B353: 20 */ nes_cpu_instruction_boundary(0xB353, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x55; g_cpu.S--; func_BC53_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB353, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B356:;
    /* $B356: 20 */ nes_cpu_instruction_boundary(0xB356, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x58; g_cpu.S--; func_BC64_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB356, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B359:;
    /* $B359: 6C */ nes_cpu_instruction_boundary(0xB359, 5); { uint16_t _jt = nes_read16zp(0xE2); nes_cpu_instruction_boundary(_jt, 2); call_by_address_tail(_jt, -1); return; }
}

void func_B33D_b3(void) { /* RunSFXTriInitRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B33D_b3");
#endif
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
    /* $B350: 20 */ nes_cpu_instruction_boundary(0xB350, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x52; g_cpu.S--; func_B4BD_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB350, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B353:;
    /* $B353: 20 */ nes_cpu_instruction_boundary(0xB353, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x55; g_cpu.S--; func_BC53_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB353, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B356:;
    /* $B356: 20 */ nes_cpu_instruction_boundary(0xB356, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x58; g_cpu.S--; func_BC64_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB356, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B359:;
    /* $B359: 6C */ nes_cpu_instruction_boundary(0xB359, 5); { uint16_t _jt = nes_read16zp(0xE2); nes_cpu_instruction_boundary(_jt, 2); call_by_address_tail(_jt, -1); return; }
}

void func_BC36_b3(void) { /* RunMusicLoopRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC36_b3");
#endif
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
    /* $BC42: 20 */ nes_cpu_instruction_boundary(0xBC42, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x44; g_cpu.S--; func_B4BD_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC42, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC45:;
    /* $BC45: 20 */ nes_cpu_instruction_boundary(0xBC45, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x47; g_cpu.S--; func_BC53_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC45, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC48:;
    /* $BC48: 6C */ nes_cpu_instruction_boundary(0xBC48, 5); { uint16_t _jt = nes_read16zp(0xE2); nes_cpu_instruction_boundary(_jt, 2); call_by_address_tail(_jt, -1); return; }
}

void func_B404_b3(void) { /* InitializeSoundAddresses */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B404_b3");
#endif
label_B404:; /* InitializeSoundAddresses */
    /* $B404: 20 */ nes_cpu_instruction_boundary(0xB404, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x06; g_cpu.S--; func_B41D_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB404, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B407:;
    /* $B407: 20 */ nes_cpu_instruction_boundary(0xB407, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x09; g_cpu.S--; func_B43E_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB407, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B40A:; /* GotoClearSpecialAddresses */
    /* $B40A: 20 */ nes_cpu_instruction_boundary(0xB40A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0C; g_cpu.S--; func_B40E_b3();
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

void func_B41D_b3_body(int _entry) { /* ClearMusicAndSFXAddresses */
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

void func_B41D_b3(void) { /* ClearMusicAndSFXAddresses */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B41D_b3");
#endif
    func_B41D_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B422_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B422_b3");
#endif
    func_B41D_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B43E_b3(void) { /* ClearSounds */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B43E_b3");
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

void func_B40E_b3(void) { /* ClearSpecialAddresses */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B40E_b3");
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

void func_988A_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_988A_b3");
#endif
label_988A:;
    /* $988A: C8 */ nes_cpu_instruction_boundary(0x988A, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_988B:;
    /* $988B: D0 */ nes_cpu_instruction_boundary(0x988B, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9899; }
label_988D:;
    /* $988D: A9 */ nes_cpu_instruction_boundary(0x988D, 2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_988F:;
    /* $988F: 9D */ nes_cpu_instruction_boundary(0x988F, 5); nes_write((0x040B + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9892:;
    /* $9892: D0 */ nes_cpu_instruction_boundary(0x9892, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9899; }
label_9894:; /* MetroidAIRoutine_BANK3_else_G */
    /* $9894: A9 */ nes_cpu_instruction_boundary(0x9894, 2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_9896:;
    /* $9896: 9D */ nes_cpu_instruction_boundary(0x9896, 5); nes_write((0x040B + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9899:; /* MetroidAIRoutine_BANK3_endIf_G */
    /* $9899: A5 */ nes_cpu_instruction_boundary(0x9899, 3); g_cpu.A = nes_read(0x81); FLAG_NZ(g_cpu.A);
label_989B:;
    /* $989B: C9 */ nes_cpu_instruction_boundary(0x989B, 2); { int r=g_cpu.A-0x06; g_cpu.C=(g_cpu.A>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_989D:;
    /* $989D: D0 */ nes_cpu_instruction_boundary(0x989D, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_98A9; }
label_989F:;
    /* $989F: DD */ nes_cpu_instruction_boundary(0x989F, 4); { uint8_t m=nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_98A2:;
    /* $98A2: F0 */ nes_cpu_instruction_boundary(0x98A2, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_98A9; }
label_98A4:;
    /* $98A4: A9 */ nes_cpu_instruction_boundary(0x98A4, 2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_98A6:;
    /* $98A6: 9D */ nes_cpu_instruction_boundary(0x98A6, 5); nes_write((0x6AF4 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_98A9:; /* MetroidAIRoutine_BANK3_endIf_H */
    /* $98A9: BD */ nes_cpu_instruction_boundary(0x98A9, 4); g_cpu.A = nes_read((0x0404 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_98AC:;
    /* $98AC: 29 */ nes_cpu_instruction_boundary(0x98AC, 2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_98AE:;
    /* $98AE: F0 */ nes_cpu_instruction_boundary(0x98AE, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_990F; }
label_98B0:;
    /* $98B0: 20 */ nes_cpu_instruction_boundary(0x98B0, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x98; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB2; g_cpu.S--; func_99B7_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x98B0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_98B3:;
    /* $98B3: B9 */ nes_cpu_instruction_boundary(0x98B3, 4); g_cpu.A = nes_read((0x77F8 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_98B6:;
    /* $98B6: F0 */ nes_cpu_instruction_boundary(0x98B6, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_98EF; }
label_98B8:;
    /* $98B8: BD */ nes_cpu_instruction_boundary(0x98B8, 4); g_cpu.A = nes_read((0x040E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_98BB:;
    /* $98BB: C9 */ nes_cpu_instruction_boundary(0x98BB, 2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_98BD:;
    /* $98BD: F0 */ nes_cpu_instruction_boundary(0x98BD, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_98C3; }
label_98BF:;
    /* $98BF: C9 */ nes_cpu_instruction_boundary(0x98BF, 2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_98C1:;
    /* $98C1: D0 */ nes_cpu_instruction_boundary(0x98C1, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_9932; }
label_98C3:; /* MetroidAIRoutine_BANK3_endIf_K */
    /* $98C3: A5 */ nes_cpu_instruction_boundary(0x98C3, 3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_98C5:;
    /* $98C5: 29 */ nes_cpu_instruction_boundary(0x98C5, 2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_98C7:;
    /* $98C7: D0 */ nes_cpu_instruction_boundary(0x98C7, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_9932; }
label_98C9:;
    /* $98C9: B9 */ nes_cpu_instruction_boundary(0x98C9, 4); g_cpu.A = nes_read((0x77F8 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_98CC:;
    /* $98CC: 18 */ nes_cpu_instruction_boundary(0x98CC, 2); g_cpu.C = 0;
label_98CD:;
    /* $98CD: 69 */ nes_cpu_instruction_boundary(0x98CD, 2); { uint16_t r = g_cpu.A + 0x10 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x10); g_cpu.A=r&0xFF; }
label_98CF:;
    /* $98CF: 99 */ nes_cpu_instruction_boundary(0x98CF, 5); nes_write((0x77F8 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_98D2:;
    /* $98D2: 29 */ nes_cpu_instruction_boundary(0x98D2, 2); g_cpu.A &= 0x70; FLAG_NZ(g_cpu.A);
label_98D4:;
    /* $98D4: C9 */ nes_cpu_instruction_boundary(0x98D4, 2); { int r=g_cpu.A-0x50; g_cpu.C=(g_cpu.A>=0x50)?1:0; FLAG_NZ(r&0xFF); }
label_98D6:;
    /* $98D6: D0 */ nes_cpu_instruction_boundary(0x98D6, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_9932; }
label_98D8:;
    /* $98D8: A9 */ nes_cpu_instruction_boundary(0x98D8, 2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_98DA:;
    /* $98DA: 1D */ nes_cpu_instruction_boundary(0x98DA, 4); g_cpu.A |= nes_read((0x040F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_98DD:;
    /* $98DD: 9D */ nes_cpu_instruction_boundary(0x98DD, 5); nes_write((0x040C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_98E0:;
    /* $98E0: A9 */ nes_cpu_instruction_boundary(0x98E0, 2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_98E2:;
    /* $98E2: 9D */ nes_cpu_instruction_boundary(0x98E2, 5); nes_write((0x6AF4 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_98E5:;
    /* $98E5: A9 */ nes_cpu_instruction_boundary(0x98E5, 2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_98E7:;
    /* $98E7: 9D */ nes_cpu_instruction_boundary(0x98E7, 5); nes_write((0x040F + g_cpu.X) & 0xFFFF, g_cpu.A);
label_98EA:;
    /* $98EA: A9 */ nes_cpu_instruction_boundary(0x98EA, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_98EC:;
    /* $98EC: 9D */ nes_cpu_instruction_boundary(0x98EC, 5); nes_write((0x040D + g_cpu.X) & 0xFFFF, g_cpu.A);
label_98EF:; /* MetroidAIRoutine_BANK3_endIf_J */
    /* $98EF: A9 */ nes_cpu_instruction_boundary(0x98EF, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_98F1:;
    /* $98F1: 9D */ nes_cpu_instruction_boundary(0x98F1, 5); nes_write((0x0404 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_98F4:;
    /* $98F4: 99 */ nes_cpu_instruction_boundary(0x98F4, 5); nes_write((0x77F8 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_98F7:;
    /* $98F7: 9D */ nes_cpu_instruction_boundary(0x98F7, 5); nes_write((0x0406 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_98FA:;
    /* $98FA: 9D */ nes_cpu_instruction_boundary(0x98FA, 5); nes_write((0x0407 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_98FD:;
    /* $98FD: BD */ nes_cpu_instruction_boundary(0x98FD, 4); g_cpu.A = nes_read((0x6AFE + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9900:;
    /* $9900: 20 */ nes_cpu_instruction_boundary(0x9900, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x02; g_cpu.S--; func_9A10_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9900, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9903:;
    /* $9903: 9D */ nes_cpu_instruction_boundary(0x9903, 5); nes_write((0x0402 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9906:;
    /* $9906: BD */ nes_cpu_instruction_boundary(0x9906, 4); g_cpu.A = nes_read((0x6AFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9909:;
    /* $9909: 20 */ nes_cpu_instruction_boundary(0x9909, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0B; g_cpu.S--; func_9A10_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9909, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_990C:;
    /* $990C: 9D */ nes_cpu_instruction_boundary(0x990C, 5); nes_write((0x0403 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_990F:; /* MetroidAIRoutine_BANK3_endIf_I */
    /* $990F: 20 */ nes_cpu_instruction_boundary(0x990F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x11; g_cpu.S--; func_99B7_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x990F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9912:;
    /* $9912: B9 */ nes_cpu_instruction_boundary(0x9912, 4); g_cpu.A = nes_read((0x77F8 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9915:;
    /* $9915: D0 */ nes_cpu_instruction_boundary(0x9915, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9932; }
label_9917:;
    /* $9917: BD */ nes_cpu_instruction_boundary(0x9917, 4); g_cpu.A = nes_read((0x0404 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_991A:;
    /* $991A: 29 */ nes_cpu_instruction_boundary(0x991A, 2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A);
label_991C:;
    /* $991C: F0 */ nes_cpu_instruction_boundary(0x991C, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9964; }
label_991E:;
    /* $991E: BD */ nes_cpu_instruction_boundary(0x991E, 4); g_cpu.A = nes_read((0x0403 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9921:;
    /* $9921: 29 */ nes_cpu_instruction_boundary(0x9921, 2); g_cpu.A &= 0x80; FLAG_NZ(g_cpu.A);
label_9923:;
    /* $9923: 09 */ nes_cpu_instruction_boundary(0x9923, 2); g_cpu.A |= 0x01; FLAG_NZ(g_cpu.A);
label_9925:;
    /* $9925: A8 */ nes_cpu_instruction_boundary(0x9925, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9926:;
    /* $9926: 20 */ nes_cpu_instruction_boundary(0x9926, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x28; g_cpu.S--; func_99C3_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9926, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9929:;
    /* $9929: 20 */ nes_cpu_instruction_boundary(0x9929, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2B; g_cpu.S--; func_99BD_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9929, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_992C:;
    /* $992C: 98 */ nes_cpu_instruction_boundary(0x992C, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_992D:;
    /* $992D: 9D */ nes_cpu_instruction_boundary(0x992D, 5); nes_write((0x77F8 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9930:;
    /* $9930: 8A */ nes_cpu_instruction_boundary(0x9930, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_9931:;
    /* $9931: A8 */ nes_cpu_instruction_boundary(0x9931, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9932:; /* MetroidAIRoutine_BANK3_endIf_L */
    /* $9932: 98 */ nes_cpu_instruction_boundary(0x9932, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_9933:;
    /* $9933: AA */ nes_cpu_instruction_boundary(0x9933, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_9934:;
    /* $9934: BD */ nes_cpu_instruction_boundary(0x9934, 4); g_cpu.A = nes_read((0x77F8 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9937:;
    /* $9937: 08 */ nes_cpu_instruction_boundary(0x9937, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9938:;
    /* $9938: 29 */ nes_cpu_instruction_boundary(0x9938, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_993A:;
    /* $993A: C9 */ nes_cpu_instruction_boundary(0x993A, 2); { int r=g_cpu.A-0x0C; g_cpu.C=(g_cpu.A>=0x0C)?1:0; FLAG_NZ(r&0xFF); }
label_993C:;
    /* $993C: F0 */ nes_cpu_instruction_boundary(0x993C, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9941; }
label_993E:;
    /* $993E: FE */ nes_cpu_instruction_boundary(0x993E, 7); { uint16_t a=(0x77F8 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9941:; /* MetroidAIRoutine_BANK3_endIf_M */
    /* $9941: A8 */ nes_cpu_instruction_boundary(0x9941, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9942:;
    /* $9942: B9 */ nes_cpu_instruction_boundary(0x9942, 4); g_cpu.A = nes_read((0x99D7 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9945:;
    /* $9945: 85 */ nes_cpu_instruction_boundary(0x9945, 3); nes_write(0x04, g_cpu.A);
label_9947:;
    /* $9947: 84 */ nes_cpu_instruction_boundary(0x9947, 3); nes_write(0x05, g_cpu.Y);
label_9949:;
    /* $9949: A9 */ nes_cpu_instruction_boundary(0x9949, 2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_994B:;
    /* $994B: 38 */ nes_cpu_instruction_boundary(0x994B, 2); g_cpu.C = 1;
label_994C:;
    /* $994C: E5 */ nes_cpu_instruction_boundary(0x994C, 3); { uint8_t m=nes_read(0x05); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_994E:;
    /* $994E: A6 */ nes_cpu_instruction_boundary(0x994E, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_9950:;
    /* $9950: 28 */ nes_cpu_instruction_boundary(0x9950, 4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_9951:;
    /* $9951: 30 */ nes_cpu_instruction_boundary(0x9951, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_9956; }
label_9953:;
    /* $9953: 20 */ nes_cpu_instruction_boundary(0x9953, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x55; g_cpu.S--; func_95C6_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9953, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9956:; /* MetroidAIRoutine_BANK3_endIf_N */
    /* $9956: 85 */ nes_cpu_instruction_boundary(0x9956, 3); nes_write(0x05, g_cpu.A);
label_9958:;
    /* $9958: 20 */ nes_cpu_instruction_boundary(0x9958, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x5A; g_cpu.S--; func_99E4_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9958, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_995B:;
    /* $995B: 20 */ nes_cpu_instruction_boundary(0x995B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x5D; g_cpu.S--; func_8027_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x995B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_995E:;
    /* $995E: 20 */ nes_cpu_instruction_boundary(0x995E, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x60; g_cpu.S--; func_99F4_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x995E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9961:;
    /* $9961: 4C */ nes_cpu_instruction_boundary(0x9961, 3); nes_cpu_instruction_boundary(0x9967, 2); func_9967_b3(); return;
label_9964:; /* MetroidAIRoutine_BANK3_metroidOnSamus_clearLatch */
    /* $9964: 20 */ nes_cpu_instruction_boundary(0x9964, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x66; g_cpu.S--; func_99AE_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9964, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9967:; /* MetroidAIRoutine_BANK3_metroidOnSamus */
    /* $9967: BD */ nes_cpu_instruction_boundary(0x9967, 4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_996A:;
    /* $996A: C9 */ nes_cpu_instruction_boundary(0x996A, 2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_996C:;
    /* $996C: D0 */ nes_cpu_instruction_boundary(0x996C, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9971; }
label_996E:;
    /* $996E: 20 */ nes_cpu_instruction_boundary(0x996E, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x70; g_cpu.S--; func_99AE_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x996E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9971:; /* MetroidAIRoutine_BANK3_endIf_O */
    /* $9971: A0 */ nes_cpu_instruction_boundary(0x9971, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_9973:;
    /* $9973: AD */ nes_cpu_instruction_boundary(0x9973, 4); g_cpu.A = nes_read(0x77F8); FLAG_NZ(g_cpu.A);
label_9976:;
    /* $9976: 0D */ nes_cpu_instruction_boundary(0x9976, 4); g_cpu.A |= nes_read(0x77F9); FLAG_NZ(g_cpu.A);
label_9979:;
    /* $9979: 0D */ nes_cpu_instruction_boundary(0x9979, 4); g_cpu.A |= nes_read(0x77FA); FLAG_NZ(g_cpu.A);
label_997C:;
    /* $997C: 0D */ nes_cpu_instruction_boundary(0x997C, 4); g_cpu.A |= nes_read(0x77FB); FLAG_NZ(g_cpu.A);
label_997F:;
    /* $997F: 0D */ nes_cpu_instruction_boundary(0x997F, 4); g_cpu.A |= nes_read(0x77FC); FLAG_NZ(g_cpu.A);
label_9982:;
    /* $9982: 0D */ nes_cpu_instruction_boundary(0x9982, 4); g_cpu.A |= nes_read(0x77FD); FLAG_NZ(g_cpu.A);
label_9985:;
    /* $9985: 29 */ nes_cpu_instruction_boundary(0x9985, 2); g_cpu.A &= 0x0C; FLAG_NZ(g_cpu.A);
label_9987:;
    /* $9987: C9 */ nes_cpu_instruction_boundary(0x9987, 2); { int r=g_cpu.A-0x0C; g_cpu.C=(g_cpu.A>=0x0C)?1:0; FLAG_NZ(r&0xFF); }
label_9989:;
    /* $9989: D0 */ nes_cpu_instruction_boundary(0x9989, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_999E; }
label_998B:;
    /* $998B: AD */ nes_cpu_instruction_boundary(0x998B, 4); g_cpu.A = nes_read(0x0106); FLAG_NZ(g_cpu.A);
label_998E:;
    /* $998E: 0D */ nes_cpu_instruction_boundary(0x998E, 4); g_cpu.A |= nes_read(0x0107); FLAG_NZ(g_cpu.A);
label_9991:;
    /* $9991: F0 */ nes_cpu_instruction_boundary(0x9991, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_999E; }
label_9993:;
    /* $9993: 84 */ nes_cpu_instruction_boundary(0x9993, 3); nes_write(0x6F, g_cpu.Y);
label_9995:;
    /* $9995: A0 */ nes_cpu_instruction_boundary(0x9995, 2); g_cpu.Y = 0x04; FLAG_NZ(g_cpu.Y);
label_9997:;
    /* $9997: 84 */ nes_cpu_instruction_boundary(0x9997, 3); nes_write(0x6E, g_cpu.Y);
label_9999:;
    /* $9999: 20 */ nes_cpu_instruction_boundary(0x9999, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x9B; g_cpu.S--; func_8042_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9999, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_999C:;
    /* $999C: A0 */ nes_cpu_instruction_boundary(0x999C, 2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_999E:; /* MetroidAIRoutine_BANK3_endIf_P */
    /* $999E: 84 */ nes_cpu_instruction_boundary(0x999E, 3); nes_write(0x92, g_cpu.Y);
label_99A0:;
    /* $99A0: A5 */ nes_cpu_instruction_boundary(0x99A0, 3); g_cpu.A = nes_read(0x6B); FLAG_NZ(g_cpu.A);
label_99A2:;
    /* $99A2: 30 */ nes_cpu_instruction_boundary(0x99A2, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_99AB; }
label_99A4:;
    /* $99A4: BD */ nes_cpu_instruction_boundary(0x99A4, 4); g_cpu.A = nes_read((0x6B02 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_99A7:;
    /* $99A7: 09 */ nes_cpu_instruction_boundary(0x99A7, 2); g_cpu.A |= 0xA2; FLAG_NZ(g_cpu.A);
label_99A9:;
    /* $99A9: 85 */ nes_cpu_instruction_boundary(0x99A9, 3); nes_write(0x6B, g_cpu.A);
label_99AB:; /* MetroidAIRoutine_BANK3_endIf_Q */
    /* $99AB: 4C */ nes_cpu_instruction_boundary(0x99AB, 3); nes_cpu_instruction_boundary(0x97E2, 2); func_97E2_b3(); return;
}

void func_8000_b3(void) { /* CommonJump_UpdateEnemyCommon */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8000_b3");
#endif
label_8000:; /* CommonJump_UpdateEnemyCommon */
    /* $8000: 4C */ nes_cpu_instruction_boundary(0x8000, 3); nes_cpu_instruction_boundary(0xF410, 2); func_F410(); return;
}

void func_B38F_b3(void) { /* PauseSFX */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B38F_b3");
#endif
label_B38F:; /* PauseSFX */
    /* $B38F: EE */ nes_cpu_instruction_boundary(0xB38F, 6); { uint16_t a=0x0602; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B392:;
    /* $B392: 20 */ nes_cpu_instruction_boundary(0xB392, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x94; g_cpu.S--; func_B43E_b3();
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

void func_B368_b3(void) { /* LoadSFXData */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B368_b3");
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

void func_B4BD_b3_body(int _entry) { /* GetSoundRoutine */
    switch (_entry) {
        case 1: goto label_B4EA;
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

void func_B4BD_b3(void) { /* GetSoundRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4BD_b3");
#endif
    func_B4BD_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B4EA_b3(void) { /* GetSoundRoutine_RestoreSFXFlags */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4EA_b3");
#endif
    func_B4BD_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BC53_b3(void) { /* FindMusicInitIndex */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC53_b3");
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

void func_BC64_b3(void) { /* MusicInitIndexAdd8 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC64_b3");
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

void func_B337_b3(void) { /* RunSoundRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B337_b3");
#endif
label_B337:; /* RunSoundRoutine */
    /* $B337: 20 */ nes_cpu_instruction_boundary(0xB337, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x39; g_cpu.S--; func_B4BD_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB337, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B33A:;
    /* $B33A: 6C */ nes_cpu_instruction_boundary(0xB33A, 5); { uint16_t _jt = nes_read16zp(0xE2); nes_cpu_instruction_boundary(_jt, 2); call_by_address_tail(_jt, -1); return; }
}

void func_99B7_b3(void) { /* LoadEnemySlotIDIntoY */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99B7_b3");
#endif
label_99B7:; /* LoadEnemySlotIDIntoY */
    /* $99B7: 8A */ nes_cpu_instruction_boundary(0x99B7, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_99B8:;
    /* $99B8: 20 */ nes_cpu_instruction_boundary(0x99B8, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; func_9B1B_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x99B8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_99BB:;
    /* $99BB: A8 */ nes_cpu_instruction_boundary(0x99BB, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_99BC:;
    /* $99BC: 60 */ nes_cpu_instruction_boundary(0x99BC, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9A10_b3(void) { /* GetMetroidRepelSpeed */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A10_b3");
#endif
label_9A10:; /* GetMetroidRepelSpeed */
    /* $9A10: 0A */ nes_cpu_instruction_boundary(0x9A10, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9A11:;
    /* $9A11: 2A */ nes_cpu_instruction_boundary(0x9A11, 2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_9A12:;
    /* $9A12: 29 */ nes_cpu_instruction_boundary(0x9A12, 2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_9A14:;
    /* $9A14: A8 */ nes_cpu_instruction_boundary(0x9A14, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9A15:;
    /* $9A15: B9 */ nes_cpu_instruction_boundary(0x9A15, 4); g_cpu.A = nes_read((0x77F0 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A18:;
    /* $9A18: 60 */ nes_cpu_instruction_boundary(0x9A18, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_99C3_b3_body(int _entry) { /* ClearMetroidSpeed */
    switch (_entry) {
        case 1: goto label_99D1;
    }
label_99C3:; /* ClearMetroidSpeed */
    /* $99C3: A9 */ nes_cpu_instruction_boundary(0x99C3, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_99C5:;
    /* $99C5: 9D */ nes_cpu_instruction_boundary(0x99C5, 5); nes_write((0x0402 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_99C8:;
    /* $99C8: 9D */ nes_cpu_instruction_boundary(0x99C8, 5); nes_write((0x0403 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_99CB:;
    /* $99CB: 9D */ nes_cpu_instruction_boundary(0x99CB, 5); nes_write((0x0407 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_99CE:;
    /* $99CE: 9D */ nes_cpu_instruction_boundary(0x99CE, 5); nes_write((0x0406 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_99D1:; /* ClearRinkaAcceleration */
    /* $99D1: 9D */ nes_cpu_instruction_boundary(0x99D1, 5); nes_write((0x6AFF + g_cpu.X) & 0xFFFF, g_cpu.A);
label_99D4:;
    /* $99D4: 9D */ nes_cpu_instruction_boundary(0x99D4, 5); nes_write((0x6AFE + g_cpu.X) & 0xFFFF, g_cpu.A);
label_99D7:;
    /* $99D7: 60 */ nes_cpu_instruction_boundary(0x99D7, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_99C3_b3(void) { /* ClearMetroidSpeed */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99C3_b3");
#endif
    func_99C3_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_99D1_b3(void) { /* ClearRinkaAcceleration */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99D1_b3");
#endif
    func_99C3_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_99BD_b3(void) { /* LoadEnemySlotIDIntoX */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99BD_b3");
#endif
label_99BD:; /* LoadEnemySlotIDIntoX */
    /* $99BD: 8A */ nes_cpu_instruction_boundary(0x99BD, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_99BE:;
    /* $99BE: 20 */ nes_cpu_instruction_boundary(0x99BE, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC0; g_cpu.S--; func_9B1B_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x99BE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_99C1:;
    /* $99C1: AA */ nes_cpu_instruction_boundary(0x99C1, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_99C2:;
    /* $99C2: 60 */ nes_cpu_instruction_boundary(0x99C2, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_95C6_b3(void) { /* TwosComplement_ */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95C6_b3");
#endif
label_95C6:; /* TwosComplement_ */
    /* $95C6: 49 */ nes_cpu_instruction_boundary(0x95C6, 2); g_cpu.A ^= 0xFF; FLAG_NZ(g_cpu.A);
label_95C8:;
    /* $95C8: 18 */ nes_cpu_instruction_boundary(0x95C8, 2); g_cpu.C = 0;
label_95C9:;
    /* $95C9: 69 */ nes_cpu_instruction_boundary(0x95C9, 2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_95CB:; /* Exit__ */
    /* $95CB: 60 */ nes_cpu_instruction_boundary(0x95CB, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_99E4_b3(void) { /* StoreSamusPositionToTemp */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99E4_b3");
#endif
label_99E4:; /* StoreSamusPositionToTemp */
    /* $99E4: AD */ nes_cpu_instruction_boundary(0x99E4, 4); g_cpu.A = nes_read(0x030E); FLAG_NZ(g_cpu.A);
label_99E7:;
    /* $99E7: 85 */ nes_cpu_instruction_boundary(0x99E7, 3); nes_write(0x09, g_cpu.A);
label_99E9:;
    /* $99E9: AD */ nes_cpu_instruction_boundary(0x99E9, 4); g_cpu.A = nes_read(0x030D); FLAG_NZ(g_cpu.A);
label_99EC:;
    /* $99EC: 85 */ nes_cpu_instruction_boundary(0x99EC, 3); nes_write(0x08, g_cpu.A);
label_99EE:;
    /* $99EE: AD */ nes_cpu_instruction_boundary(0x99EE, 4); g_cpu.A = nes_read(0x030C); FLAG_NZ(g_cpu.A);
label_99F1:;
    /* $99F1: 85 */ nes_cpu_instruction_boundary(0x99F1, 3); nes_write(0x0B, g_cpu.A);
label_99F3:;
    /* $99F3: 60 */ nes_cpu_instruction_boundary(0x99F3, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8027_b3(void) { /* CommonJump_ApplySpeedToPosition */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8027_b3");
#endif
label_8027:; /* CommonJump_ApplySpeedToPosition */
    /* $8027: 4C */ nes_cpu_instruction_boundary(0x8027, 3); nes_cpu_instruction_boundary(0xFD8F, 2); func_FD8F(); return;
}

void func_99F4_b3(void) { /* LoadEnemyPositionFromTemp_ */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99F4_b3");
#endif
label_99F4:; /* LoadEnemyPositionFromTemp_ */
    /* $99F4: A5 */ nes_cpu_instruction_boundary(0x99F4, 3); g_cpu.A = nes_read(0x09); FLAG_NZ(g_cpu.A);
label_99F6:;
    /* $99F6: 9D */ nes_cpu_instruction_boundary(0x99F6, 5); nes_write((0x0401 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_99F9:;
    /* $99F9: A5 */ nes_cpu_instruction_boundary(0x99F9, 3); g_cpu.A = nes_read(0x08); FLAG_NZ(g_cpu.A);
label_99FB:;
    /* $99FB: 9D */ nes_cpu_instruction_boundary(0x99FB, 5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_99FE:;
    /* $99FE: A5 */ nes_cpu_instruction_boundary(0x99FE, 3); g_cpu.A = nes_read(0x0B); FLAG_NZ(g_cpu.A);
label_9A00:;
    /* $9A00: 29 */ nes_cpu_instruction_boundary(0x9A00, 2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_9A02:;
    /* $9A02: 9D */ nes_cpu_instruction_boundary(0x9A02, 5); nes_write((0x6AFB + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9A05:;
    /* $9A05: 60 */ nes_cpu_instruction_boundary(0x9A05, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9967_b3(void) { /* MetroidAIRoutine_BANK3_metroidOnSamus */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9967_b3");
#endif
label_9967:; /* MetroidAIRoutine_BANK3_metroidOnSamus */
    /* $9967: BD */ nes_cpu_instruction_boundary(0x9967, 4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_996A:;
    /* $996A: C9 */ nes_cpu_instruction_boundary(0x996A, 2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_996C:;
    /* $996C: D0 */ nes_cpu_instruction_boundary(0x996C, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9971; }
label_996E:;
    /* $996E: 20 */ nes_cpu_instruction_boundary(0x996E, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x70; g_cpu.S--; func_99AE_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x996E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9971:; /* MetroidAIRoutine_BANK3_endIf_O */
    /* $9971: A0 */ nes_cpu_instruction_boundary(0x9971, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_9973:;
    /* $9973: AD */ nes_cpu_instruction_boundary(0x9973, 4); g_cpu.A = nes_read(0x77F8); FLAG_NZ(g_cpu.A);
label_9976:;
    /* $9976: 0D */ nes_cpu_instruction_boundary(0x9976, 4); g_cpu.A |= nes_read(0x77F9); FLAG_NZ(g_cpu.A);
label_9979:;
    /* $9979: 0D */ nes_cpu_instruction_boundary(0x9979, 4); g_cpu.A |= nes_read(0x77FA); FLAG_NZ(g_cpu.A);
label_997C:;
    /* $997C: 0D */ nes_cpu_instruction_boundary(0x997C, 4); g_cpu.A |= nes_read(0x77FB); FLAG_NZ(g_cpu.A);
label_997F:;
    /* $997F: 0D */ nes_cpu_instruction_boundary(0x997F, 4); g_cpu.A |= nes_read(0x77FC); FLAG_NZ(g_cpu.A);
label_9982:;
    /* $9982: 0D */ nes_cpu_instruction_boundary(0x9982, 4); g_cpu.A |= nes_read(0x77FD); FLAG_NZ(g_cpu.A);
label_9985:;
    /* $9985: 29 */ nes_cpu_instruction_boundary(0x9985, 2); g_cpu.A &= 0x0C; FLAG_NZ(g_cpu.A);
label_9987:;
    /* $9987: C9 */ nes_cpu_instruction_boundary(0x9987, 2); { int r=g_cpu.A-0x0C; g_cpu.C=(g_cpu.A>=0x0C)?1:0; FLAG_NZ(r&0xFF); }
label_9989:;
    /* $9989: D0 */ nes_cpu_instruction_boundary(0x9989, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_999E; }
label_998B:;
    /* $998B: AD */ nes_cpu_instruction_boundary(0x998B, 4); g_cpu.A = nes_read(0x0106); FLAG_NZ(g_cpu.A);
label_998E:;
    /* $998E: 0D */ nes_cpu_instruction_boundary(0x998E, 4); g_cpu.A |= nes_read(0x0107); FLAG_NZ(g_cpu.A);
label_9991:;
    /* $9991: F0 */ nes_cpu_instruction_boundary(0x9991, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_999E; }
label_9993:;
    /* $9993: 84 */ nes_cpu_instruction_boundary(0x9993, 3); nes_write(0x6F, g_cpu.Y);
label_9995:;
    /* $9995: A0 */ nes_cpu_instruction_boundary(0x9995, 2); g_cpu.Y = 0x04; FLAG_NZ(g_cpu.Y);
label_9997:;
    /* $9997: 84 */ nes_cpu_instruction_boundary(0x9997, 3); nes_write(0x6E, g_cpu.Y);
label_9999:;
    /* $9999: 20 */ nes_cpu_instruction_boundary(0x9999, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x9B; g_cpu.S--; func_8042_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9999, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_999C:;
    /* $999C: A0 */ nes_cpu_instruction_boundary(0x999C, 2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_999E:; /* MetroidAIRoutine_BANK3_endIf_P */
    /* $999E: 84 */ nes_cpu_instruction_boundary(0x999E, 3); nes_write(0x92, g_cpu.Y);
label_99A0:;
    /* $99A0: A5 */ nes_cpu_instruction_boundary(0x99A0, 3); g_cpu.A = nes_read(0x6B); FLAG_NZ(g_cpu.A);
label_99A2:;
    /* $99A2: 30 */ nes_cpu_instruction_boundary(0x99A2, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_99AB; }
label_99A4:;
    /* $99A4: BD */ nes_cpu_instruction_boundary(0x99A4, 4); g_cpu.A = nes_read((0x6B02 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_99A7:;
    /* $99A7: 09 */ nes_cpu_instruction_boundary(0x99A7, 2); g_cpu.A |= 0xA2; FLAG_NZ(g_cpu.A);
label_99A9:;
    /* $99A9: 85 */ nes_cpu_instruction_boundary(0x99A9, 3); nes_write(0x6B, g_cpu.A);
label_99AB:; /* MetroidAIRoutine_BANK3_endIf_Q */
    /* $99AB: 4C */ nes_cpu_instruction_boundary(0x99AB, 3); nes_cpu_instruction_boundary(0x97E2, 2); func_97E2_b3(); return;
}

void func_99AE_b3_body(int _entry) { /* ClearCurrentMetroidLatch */
    switch (_entry) {
        case 1: goto label_99B1;
    }
label_99AE:; /* ClearCurrentMetroidLatch */
    /* $99AE: 20 */ nes_cpu_instruction_boundary(0x99AE, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB0; g_cpu.S--; func_99B7_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x99AE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_99B1:; /* ClearMetroidLatch */
    /* $99B1: A9 */ nes_cpu_instruction_boundary(0x99B1, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_99B3:;
    /* $99B3: 99 */ nes_cpu_instruction_boundary(0x99B3, 5); nes_write((0x77F8 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_99B6:;
    /* $99B6: 60 */ nes_cpu_instruction_boundary(0x99B6, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_99AE_b3(void) { /* ClearCurrentMetroidLatch */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99AE_b3");
#endif
    func_99AE_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_99B1_b3(void) { /* ClearMetroidLatch */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99B1_b3");
#endif
    func_99AE_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8042_b3(void) { /* CommonJump_SubtractHealth */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8042_b3");
#endif
label_8042:; /* CommonJump_SubtractHealth */
    /* $8042: 4C */ nes_cpu_instruction_boundary(0x8042, 3); nes_cpu_instruction_boundary(0xCE92, 2); func_CE92(); return;
}

void func_97E2_b3(void) { /* UpdateEnemyCommon_Decide_BANK3 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_97E2_b3");
#endif
label_97E2:; /* UpdateEnemyCommon_Decide_BANK3 */
    /* $97E2: A5 */ nes_cpu_instruction_boundary(0x97E2, 3); g_cpu.A = nes_read(0x81); FLAG_NZ(g_cpu.A);
label_97E4:;
    /* $97E4: C9 */ nes_cpu_instruction_boundary(0x97E4, 2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_97E6:;
    /* $97E6: F0 */ nes_cpu_instruction_boundary(0x97E6, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_97F1; }
label_97E8:;
    /* $97E8: C9 */ nes_cpu_instruction_boundary(0x97E8, 2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_97EA:;
    /* $97EA: F0 */ nes_cpu_instruction_boundary(0x97EA, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_97F6; }
label_97EC:;
    /* $97EC: A5 */ nes_cpu_instruction_boundary(0x97EC, 3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_97EE:;
    /* $97EE: 4C */ nes_cpu_instruction_boundary(0x97EE, 3); nes_cpu_instruction_boundary(0x8000, 2); func_8000_b3(); return;
label_97F1:; /* UpdateEnemyCommon_Decide_BANK3_resting */
    /* $97F1: A5 */ nes_cpu_instruction_boundary(0x97F1, 3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_97F3:;
    /* $97F3: 4C */ nes_cpu_instruction_boundary(0x97F3, 3); nes_cpu_instruction_boundary(0x8003, 2); func_8003_b3(); return;
label_97F6:; /* UpdateEnemyCommon_Decide_BANK3_explode */
    /* $97F6: 4C */ nes_cpu_instruction_boundary(0x97F6, 3); nes_cpu_instruction_boundary(0x8006, 2); func_8006_b3(); return;
}

void func_8058_b3(void) { /* EnemyMove */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8058_b3");
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
    /* $8067: 20 */ nes_cpu_instruction_boundary(0x8067, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x69; g_cpu.S--; func_8244_b3();
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
    /* $8073: 20 */ nes_cpu_instruction_boundary(0x8073, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x75; g_cpu.S--; func_83F5_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8073, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8076:;
    /* $8076: 20 */ nes_cpu_instruction_boundary(0x8076, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x78; g_cpu.S--; func_80B8_b3();
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
    /* $8081: 20 */ nes_cpu_instruction_boundary(0x8081, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x83; g_cpu.S--; func_844B_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8081, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8084:;
    /* $8084: 20 */ nes_cpu_instruction_boundary(0x8084, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x86; g_cpu.S--; func_80FB_b3();
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
    /* $808B: 20 */ nes_cpu_instruction_boundary(0x808B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x8D; g_cpu.S--; func_8318_b3();
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
    /* $8097: 20 */ nes_cpu_instruction_boundary(0x8097, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; func_84A7_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8097, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_809A:;
    /* $809A: 20 */ nes_cpu_instruction_boundary(0x809A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x9C; g_cpu.S--; func_816E_b3();
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
    /* $80A5: 20 */ nes_cpu_instruction_boundary(0x80A5, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA7; g_cpu.S--; func_84FE_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x80A5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_80A8:;
    /* $80A8: 20 */ nes_cpu_instruction_boundary(0x80A8, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAA; g_cpu.S--; func_8134_b3();
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

void func_9B1B_b3(void) { /* Adiv16_ */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9B1B_b3");
#endif
label_9B1B:; /* Adiv16_ */
    /* $9B1B: 4A */ nes_cpu_instruction_boundary(0x9B1B, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9B1C:;
    /* $9B1C: 4A */ nes_cpu_instruction_boundary(0x9B1C, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9B1D:;
    /* $9B1D: 4A */ nes_cpu_instruction_boundary(0x9B1D, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9B1E:;
    /* $9B1E: 4A */ nes_cpu_instruction_boundary(0x9B1E, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9B1F:;
    /* $9B1F: 60 */ nes_cpu_instruction_boundary(0x9B1F, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8003_b3(void) { /* CommonJump_UpdateEnemyCommon_noMove */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8003_b3");
#endif
label_8003:; /* CommonJump_UpdateEnemyCommon_noMove */
    /* $8003: 4C */ nes_cpu_instruction_boundary(0x8003, 3); nes_cpu_instruction_boundary(0xF438, 2); func_F438(); return;
}

void func_8006_b3(void) { /* CommonJump_UpdateEnemyCommon_noMoveNoAnim */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8006_b3");
#endif
label_8006:; /* CommonJump_UpdateEnemyCommon_noMoveNoAnim */
    /* $8006: 4C */ nes_cpu_instruction_boundary(0x8006, 3); nes_cpu_instruction_boundary(0xF416, 2); func_F416(); return;
}

void func_95AB_b3(void) { /* GotoClearAllMetroidLatches */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95AB_b3");
#endif
label_95AB:; /* GotoClearAllMetroidLatches */
    /* $95AB: 4C */ nes_cpu_instruction_boundary(0x95AB, 3); nes_cpu_instruction_boundary(0xA315, 2); func_A315_b3(); return;
}

void func_95C3_b3(void) { /* AreaRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95C3_b3");
#endif
label_95C3:; /* AreaRoutine */
    /* $95C3: 4C */ nes_cpu_instruction_boundary(0x95C3, 3); nes_cpu_instruction_boundary(0x9B25, 2); func_9B25_b3(); return;
}

void func_8B13_b3_body(int _entry) { /* SamusEnterDoor */
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
    /* $8B56: 20 */ nes_cpu_instruction_boundary(0x8B56, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x58; g_cpu.S--; func_8B74_b3();
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
    /* $8B6D: 20 */ nes_cpu_instruction_boundary(0x8B6D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6F; g_cpu.S--; func_8B53_b3();
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

void func_8B13_b3(void) { /* SamusEnterDoor */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8B13_b3");
#endif
    func_8B13_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8B74_b3(void) { /* SamusInDoor */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8B74_b3");
#endif
    func_8B13_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8B53_b3(void) { /* SamusEnterDoor_endIf_A_noDex */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8B53_b3");
#endif
    func_8B13_b3_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8B79_b3(void) { /* UpdateAllDoors */
    if (nes_mod_function_entry(0x8B79u)) return;  /* trusted opt-in game-mod hook */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8B79_b3");
#endif
label_8B79:; /* UpdateAllDoors */
    /* $8B79: A2 */ nes_cpu_instruction_boundary(0x8B79, 2); g_cpu.X = 0xB0; FLAG_NZ(g_cpu.X);
label_8B7B:; /* UpdateAllDoors_loop */
    /* $8B7B: 20 */ nes_cpu_instruction_boundary(0x8B7B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x7D; g_cpu.S--; func_8B87_b3();
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

void func_8244_b3_body(int _entry) { /* EnemyGetDeltaY */
    switch (_entry) {
        case 1: goto label_8296;
        case 2: goto label_82C3;
        case 3: goto label_825B;
        case 4: goto label_82F4;
        case 5: goto label_8258;
        case 6: goto label_82A2;
    }
label_8244:; /* EnemyGetDeltaY */
    /* $8244: 20 */ nes_cpu_instruction_boundary(0x8244, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x46; g_cpu.S--; func_80B0_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8244, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8247:;
    /* $8247: 10 */ nes_cpu_instruction_boundary(0x8247, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_824C; }
label_8249:;
    /* $8249: 4C */ nes_cpu_instruction_boundary(0x8249, 3); nes_cpu_instruction_boundary(0x833F, 2); func_833F_b3(); return;
label_824C:; /* EnemyGetDeltaY_endIf_A */
    /* $824C: BD */ nes_cpu_instruction_boundary(0x824C, 4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_824F:;
    /* $824F: 29 */ nes_cpu_instruction_boundary(0x824F, 2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_8251:;
    /* $8251: 49 */ nes_cpu_instruction_boundary(0x8251, 2); g_cpu.A ^= 0x20; FLAG_NZ(g_cpu.A);
label_8253:;
    /* $8253: F0 */ nes_cpu_instruction_boundary(0x8253, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_82A2; }
label_8255:;
    /* $8255: 20 */ nes_cpu_instruction_boundary(0x8255, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x57; g_cpu.S--; func_822B_b3();
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
    /* $827C: 4C */ nes_cpu_instruction_boundary(0x827C, 3); nes_cpu_instruction_boundary(0x8312, 2); func_8312_b3(); return;
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
    /* $82BB: 4C */ nes_cpu_instruction_boundary(0x82BB, 3); nes_cpu_instruction_boundary(0x82C3, 2); func_82C3_b3(); return;
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
    /* $82EC: 4C */ nes_cpu_instruction_boundary(0x82EC, 3); nes_cpu_instruction_boundary(0x82F4, 2); func_82F4_b3(); return;
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
    /* $8312: 20 */ nes_cpu_instruction_boundary(0x8312, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x83; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x14; g_cpu.S--; func_81B1_b3();
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

void func_8244_b3(void) { /* EnemyGetDeltaY */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8244_b3");
#endif
    func_8244_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8296_b3(void) { /* EnemyGetDeltaY_SignMagSpeed_fromByte */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8296_b3");
#endif
    func_8244_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_82C3_b3(void) { /* EnemyGetDeltaY_RepeatPreviousUntilFailure_endIf_A */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_82C3_b3");
#endif
    func_8244_b3_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_825B_b3(void) { /* EnemyGetDeltaY_ReadByte */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_825B_b3");
#endif
    func_8244_b3_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_82F4_b3(void) { /* EnemyGetDeltaY_RepeatPreviousUntilNoDeltaYThenTriggerResting_endIf_A */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_82F4_b3");
#endif
    func_8244_b3_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8258_b3(void) { /* EnemyGetDeltaY_ReadByteAtIndex */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8258_b3");
#endif
    func_8244_b3_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_82A2_b3(void) { /* EnemyGetDeltaY_SignMagSpeed_endIf_B */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_82A2_b3");
#endif
    func_8244_b3_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_83F5_b3_body(int _entry) { /* EnemyMoveOnePixelUp */
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
    /* $8421: 20 */ nes_cpu_instruction_boundary(0x8421, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x23; g_cpu.S--; func_8563_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8421, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8424:;
    /* $8424: F0 */ nes_cpu_instruction_boundary(0x8424, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_844A; }
label_8426:;
    /* $8426: 20 */ nes_cpu_instruction_boundary(0x8426, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x28; g_cpu.S--; func_855A_b3();
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
    /* $8437: 20 */ nes_cpu_instruction_boundary(0x8437, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x39; g_cpu.S--; func_8563_b3();
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

void func_83F5_b3(void) { /* EnemyMoveOnePixelUp */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_83F5_b3");
#endif
    func_83F5_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8400_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8400_b3");
#endif
    func_83F5_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_80B8_b3_body(int _entry) { /* EnemyIfMoveFailedUp */
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
    /* $80C1: 20 */ nes_cpu_instruction_boundary(0x80C1, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC3; g_cpu.S--; func_81FC_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x80C1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_80C4:;
    /* $80C4: 4C */ nes_cpu_instruction_boundary(0x80C4, 3); nes_cpu_instruction_boundary(0x80F6, 2); func_80F6_b3(); return;
label_80C7:; /* EnemyIfMoveFailedUp_facingHorizontal */
    /* $80C7: 20 */ nes_cpu_instruction_boundary(0x80C7, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC9; g_cpu.S--; func_80B0_b3();
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
    /* $80D3: 20 */ nes_cpu_instruction_boundary(0x80D3, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD5; g_cpu.S--; func_81B1_b3();
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
    /* $80DF: 4C */ nes_cpu_instruction_boundary(0x80DF, 3); nes_cpu_instruction_boundary(0x80F6, 2); func_80F6_b3(); return;
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
    /* $80F3: 20 */ nes_cpu_instruction_boundary(0x80F3, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF5; g_cpu.S--; func_856B_b3();
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

void func_80B8_b3(void) { /* EnemyIfMoveFailedUp */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80B8_b3");
#endif
    func_80B8_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_80F6_b3(void) { /* EnemyIfMoveFailedUp_abortLoop */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80F6_b3");
#endif
    func_80B8_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_844B_b3(void) { /* EnemyMoveOnePixelDown */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_844B_b3");
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
    /* $8479: 20 */ nes_cpu_instruction_boundary(0x8479, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x7B; g_cpu.S--; func_8563_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8479, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_847C:;
    /* $847C: D0 */ nes_cpu_instruction_boundary(0x847C, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_84A6; }
label_847E:;
    /* $847E: 20 */ nes_cpu_instruction_boundary(0x847E, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; func_855A_b3();
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
    /* $8492: 20 */ nes_cpu_instruction_boundary(0x8492, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x94; g_cpu.S--; func_8563_b3();
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

void func_80FB_b3_body(int _entry) { /* EnemyIfMoveFailedDown */
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
    /* $8104: 20 */ nes_cpu_instruction_boundary(0x8104, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x06; g_cpu.S--; func_81FC_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8104, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8107:;
    /* $8107: 4C */ nes_cpu_instruction_boundary(0x8107, 3); nes_cpu_instruction_boundary(0x812F, 2); func_812F_b3(); return;
label_810A:; /* EnemyIfMoveFailedDown_facingHorizontal */
    /* $810A: 20 */ nes_cpu_instruction_boundary(0x810A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0C; g_cpu.S--; func_80B0_b3();
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
    /* $811D: 4C */ nes_cpu_instruction_boundary(0x811D, 3); nes_cpu_instruction_boundary(0x812F, 2); func_812F_b3(); return;
label_8120:; /* EnemyIfMoveFailedDown_landOnFloor */
    /* $8120: 20 */ nes_cpu_instruction_boundary(0x8120, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x22; g_cpu.S--; func_81B1_b3();
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
    /* $812C: 20 */ nes_cpu_instruction_boundary(0x812C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2E; g_cpu.S--; func_856B_b3();
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

void func_80FB_b3(void) { /* EnemyIfMoveFailedDown */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80FB_b3");
#endif
    func_80FB_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_812F_b3(void) { /* EnemyIfMoveFailedDown_abortLoop */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_812F_b3");
#endif
    func_80FB_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8318_b3_body(int _entry) { /* EnemyGetDeltaX */
    switch (_entry) {
        case 1: goto label_832F;
    }
label_8318:; /* EnemyGetDeltaX */
    /* $8318: 20 */ nes_cpu_instruction_boundary(0x8318, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x83; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1A; g_cpu.S--; func_80B0_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8318, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_831B:;
    /* $831B: 10 */ nes_cpu_instruction_boundary(0x831B, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_8320; }
label_831D:;
    /* $831D: 4C */ nes_cpu_instruction_boundary(0x831D, 3); nes_cpu_instruction_boundary(0x8395, 2); func_8395_b3(); return;
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

void func_8318_b3(void) { /* EnemyGetDeltaX */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8318_b3");
#endif
    func_8318_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_832F_b3(void) { /* EnemyGetDeltaX_SignMagSpeed_fromByte */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_832F_b3");
#endif
    func_8318_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_84A7_b3_body(int _entry) { /* EnemyMoveOnePixelLeft */
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
    /* $84D1: 20 */ nes_cpu_instruction_boundary(0x84D1, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD3; g_cpu.S--; func_8563_b3();
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
    /* $84D7: 20 */ nes_cpu_instruction_boundary(0x84D7, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD9; g_cpu.S--; func_855A_b3();
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
    /* $84E9: 20 */ nes_cpu_instruction_boundary(0x84E9, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xEB; g_cpu.S--; func_8563_b3();
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

void func_84A7_b3(void) { /* EnemyMoveOnePixelLeft */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_84A7_b3");
#endif
    func_84A7_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_84FD_b3(void) { /* EnemyMoveOnePixelLeft_RTS */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_84FD_b3");
#endif
    func_84A7_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_816E_b3_body(int _entry) { /* EnemyIfMoveFailedLeft */
    switch (_entry) {
        case 1: goto label_81AC;
    }
label_816E:; /* EnemyIfMoveFailedLeft */
    /* $816E: A6 */ nes_cpu_instruction_boundary(0x816E, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_8170:;
    /* $8170: B0 */ nes_cpu_instruction_boundary(0x8170, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_81B0; }
label_8172:;
    /* $8172: 20 */ nes_cpu_instruction_boundary(0x8172, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x74; g_cpu.S--; func_80B0_b3();
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
    /* $817C: 20 */ nes_cpu_instruction_boundary(0x817C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x7E; g_cpu.S--; func_81C7_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x817C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_817F:;
    /* $817F: 4C */ nes_cpu_instruction_boundary(0x817F, 3); nes_cpu_instruction_boundary(0x81AC, 2); func_81AC_b3(); return;
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
    /* $8189: 20 */ nes_cpu_instruction_boundary(0x8189, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; func_81C0_b3();
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
    /* $8195: 4C */ nes_cpu_instruction_boundary(0x8195, 3); nes_cpu_instruction_boundary(0x81AC, 2); func_81AC_b3(); return;
label_8198:; /* EnemyIfMoveFailedLeft_landOnLeftWallPt2 */
    /* $8198: 9D */ nes_cpu_instruction_boundary(0x8198, 5); nes_write((0x0403 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_819B:;
    /* $819B: 9D */ nes_cpu_instruction_boundary(0x819B, 5); nes_write((0x0407 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_819E:;
    /* $819E: F0 */ nes_cpu_instruction_boundary(0x819E, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_81AC; }
label_81A0:; /* EnemyIfMoveFailedLeft_movementStrings */
    /* $81A0: 20 */ nes_cpu_instruction_boundary(0x81A0, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA2; g_cpu.S--; func_80B0_b3();
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
    /* $81A9: 20 */ nes_cpu_instruction_boundary(0x81A9, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAB; g_cpu.S--; func_856B_b3();
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

void func_816E_b3(void) { /* EnemyIfMoveFailedLeft */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_816E_b3");
#endif
    func_816E_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_81AC_b3(void) { /* EnemyIfMoveFailedLeft_abortLoop */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81AC_b3");
#endif
    func_816E_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_84FE_b3_body(int _entry) { /* EnemyMoveOnePixelRight */
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
    /* $8528: 20 */ nes_cpu_instruction_boundary(0x8528, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x85; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2A; g_cpu.S--; func_8563_b3();
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
    /* $8533: 20 */ nes_cpu_instruction_boundary(0x8533, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x85; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x35; g_cpu.S--; func_855A_b3();
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
    /* $8545: 20 */ nes_cpu_instruction_boundary(0x8545, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x85; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x47; g_cpu.S--; func_8563_b3();
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

void func_84FE_b3(void) { /* EnemyMoveOnePixelRight */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_84FE_b3");
#endif
    func_84FE_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8500_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8500_b3");
#endif
    func_84FE_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8134_b3_body(int _entry) { /* EnemyIfMoveFailedRight */
    switch (_entry) {
        case 1: goto label_8169;
    }
label_8134:; /* EnemyIfMoveFailedRight */
    /* $8134: A6 */ nes_cpu_instruction_boundary(0x8134, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_8136:;
    /* $8136: B0 */ nes_cpu_instruction_boundary(0x8136, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_816D; }
label_8138:;
    /* $8138: 20 */ nes_cpu_instruction_boundary(0x8138, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3A; g_cpu.S--; func_80B0_b3();
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
    /* $8142: 20 */ nes_cpu_instruction_boundary(0x8142, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x44; g_cpu.S--; func_81C7_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8142, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8145:;
    /* $8145: 4C */ nes_cpu_instruction_boundary(0x8145, 3); nes_cpu_instruction_boundary(0x8169, 2); func_8169_b3(); return;
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
    /* $8156: 4C */ nes_cpu_instruction_boundary(0x8156, 3); nes_cpu_instruction_boundary(0x8169, 2); func_8169_b3(); return;
label_8159:; /* EnemyIfMoveFailedRight_landOnRightWall */
    /* $8159: 20 */ nes_cpu_instruction_boundary(0x8159, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x5B; g_cpu.S--; func_81C0_b3();
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
    /* $8166: 20 */ nes_cpu_instruction_boundary(0x8166, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x68; g_cpu.S--; func_856B_b3();
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

void func_8134_b3(void) { /* EnemyIfMoveFailedRight */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8134_b3");
#endif
    func_8134_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8169_b3(void) { /* EnemyIfMoveFailedRight_abortLoop */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8169_b3");
#endif
    func_8134_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A315_b3(void) { /* ClearAllMetroidLatches */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A315_b3");
#endif
label_A315:; /* ClearAllMetroidLatches */
    /* $A315: A0 */ nes_cpu_instruction_boundary(0xA315, 2); g_cpu.Y = 0x05; FLAG_NZ(g_cpu.Y);
label_A317:;
    /* $A317: 20 */ nes_cpu_instruction_boundary(0xA317, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x19; g_cpu.S--; func_99B1_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA317, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A31A:;
    /* $A31A: 88 */ nes_cpu_instruction_boundary(0xA31A, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A31B:;
    /* $A31B: 10 */ nes_cpu_instruction_boundary(0xA31B, 2); if (!g_cpu.N) {
    nes_cpu_instruction_boundary(0xA317, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A317;
    }
label_A31D:;
    /* $A31D: 85 */ nes_cpu_instruction_boundary(0xA31D, 3); nes_write(0x92, g_cpu.A);
label_A31F:;
    /* $A31F: 60 */ nes_cpu_instruction_boundary(0xA31F, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_95AE_b3(void) { /* GotoDeleteOffscreenRoomSprites_Tourian */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95AE_b3");
#endif
label_95AE:; /* GotoDeleteOffscreenRoomSprites_Tourian */
    /* $95AE: 4C */ nes_cpu_instruction_boundary(0x95AE, 3); nes_cpu_instruction_boundary(0x9C6F, 2); func_9C6F_b3(); return;
}

void func_95B1_b3(void) { /* GotoSpawnCannonRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95B1_b3");
#endif
label_95B1:; /* GotoSpawnCannonRoutine */
    /* $95B1: 4C */ nes_cpu_instruction_boundary(0x95B1, 3); nes_cpu_instruction_boundary(0x9CE6, 2); func_9CE6_b3(); return;
}

void func_95B4_b3(void) { /* GotoSpawnMotherBrainRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95B4_b3");
#endif
label_95B4:; /* GotoSpawnMotherBrainRoutine */
    /* $95B4: 4C */ nes_cpu_instruction_boundary(0x95B4, 3); nes_cpu_instruction_boundary(0x9D21, 2); func_9D21_b3(); return;
}

void func_95B7_b3(void) { /* GotoSpawnZebetiteRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95B7_b3");
#endif
label_95B7:; /* GotoSpawnZebetiteRoutine */
    /* $95B7: 4C */ nes_cpu_instruction_boundary(0x95B7, 3); nes_cpu_instruction_boundary(0x9D3D, 2); func_9D3D_b3(); return;
}

void func_95BA_b3(void) { /* GotoSpawnRinkaSpawnerRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95BA_b3");
#endif
label_95BA:; /* GotoSpawnRinkaSpawnerRoutine */
    /* $95BA: 4C */ nes_cpu_instruction_boundary(0x95BA, 3); nes_cpu_instruction_boundary(0x9D6C, 2); func_9D6C_b3(); return;
}

void func_95E5_b3(void) { /* ChooseEnemyAIRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95E5_b3");
#endif
label_95E5:; /* ChooseEnemyAIRoutine */
    /* $95E5: BD */ nes_cpu_instruction_boundary(0x95E5, 4); g_cpu.A = nes_read((0x6B02 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_95E8:;
    /* $95E8: 20 */ nes_cpu_instruction_boundary(0x95E8, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x95; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xEA; g_cpu.S--; func_8024_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x95E8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_95EB:;
    /* $95EB: F9 */ nes_cpu_instruction_boundary(0x95EB, 4); { uint8_t m=nes_read((0xF997 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_95EE:;
    /* $95EE: 97 */ nes_cpu_instruction_boundary(0x95EE, 4); nes_write((0x27 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_95F0:;
    /* $95F0: 9A */ nes_cpu_instruction_boundary(0x95F0, 2); g_cpu.S = g_cpu.X;
label_95F1:;
    /* $95F1: DC */ nes_cpu_instruction_boundary(0x95F1, 4); (void)nes_read((0x2C97 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_95F4:;
    /* $95F4: 9A */ nes_cpu_instruction_boundary(0x95F4, 2); g_cpu.S = g_cpu.X;
label_95F5:;
    /* $95F5: DC */ nes_cpu_instruction_boundary(0x95F5, 4); (void)nes_read((0xDC97 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_95F8:;
    /* $95F8: 97 */ nes_cpu_instruction_boundary(0x95F8, 4); nes_write((0xDC + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_95FA:;
    /* $95FA: 97 */ nes_cpu_instruction_boundary(0x95FA, 4); nes_write((0xDC + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_95FC:;
    /* $95FC: 97 */ nes_cpu_instruction_boundary(0x95FC, 4); nes_write((0xDC + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_95FE:;
    /* $95FE: 97 */ nes_cpu_instruction_boundary(0x95FE, 4); nes_write((0xDC + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_9600:;
    /* $9600: 97 */ nes_cpu_instruction_boundary(0x9600, 4); nes_write((0xDC + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_9602:;
    /* $9602: 97 */ nes_cpu_instruction_boundary(0x9602, 4); nes_write((0xDC + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_9604:;
    /* $9604: 97 */ nes_cpu_instruction_boundary(0x9604, 4); nes_write((0xDC + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_9606:;
    /* $9606: 97 */ nes_cpu_instruction_boundary(0x9606, 4); nes_write((0xDC + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_9608:;
    /* $9608: 97 */ nes_cpu_instruction_boundary(0x9608, 4); nes_write((0xDC + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_960A:;
    /* $960A: 97 */ nes_cpu_instruction_boundary(0x960A, 4); nes_write((0x08 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_960C:;
    /* $960C: 08 */ nes_cpu_instruction_boundary(0x960C, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_960D:;
    /* $960D: 08 */ nes_cpu_instruction_boundary(0x960D, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_960E:;
    /* $960E: 08 */ nes_cpu_instruction_boundary(0x960E, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_960F:;
    /* $960F: 16 */ nes_cpu_instruction_boundary(0x960F, 6); { uint16_t a=(0x16 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9611:;
    /* $9611: 18 */ nes_cpu_instruction_boundary(0x9611, 2); g_cpu.C = 0;
label_9612:;
    /* $9612: 18 */ nes_cpu_instruction_boundary(0x9612, 2); g_cpu.C = 0;
label_9613:;
    /* $9613: 1F */ nes_cpu_instruction_boundary(0x9613, 7); { uint16_t a=(0x001F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9616:;
    /* $9616: 00 */ nes_cpu_instruction_boundary(0x9616, 7); nes_brk_executed(0x9616); return;
}

void func_80B0_b3(void) { /* LoadTableAt977B */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80B0_b3");
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

void func_95A8_b3(void) { /* GotoClearCurrentMetroidLatchAndMetroidOnSamus */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95A8_b3");
#endif
label_95A8:; /* GotoClearCurrentMetroidLatchAndMetroidOnSamus */
    /* $95A8: 4C */ nes_cpu_instruction_boundary(0x95A8, 3); nes_cpu_instruction_boundary(0xA320, 2); func_A320_b3(); return;
}

void func_81DA_b3(void) { /* EnemyIfMoveFailedHorizontal_Bounce_flipSpeed */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81DA_b3");
#endif
label_81DA:; /* EnemyIfMoveFailedHorizontal_Bounce_flipSpeed */
    /* $81DA: 20 */ nes_cpu_instruction_boundary(0x81DA, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDC; g_cpu.S--; func_81F6_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x81DA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_81DD:;
    /* $81DD: D0 */ nes_cpu_instruction_boundary(0x81DD, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_81F5; }
label_81DF:;
    /* $81DF: 20 */ nes_cpu_instruction_boundary(0x81DF, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE1; g_cpu.S--; func_80B0_b3();
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

void func_820F_b3(void) { /* EnemyIfMoveFailedVertical_Bounce_flipSpeed */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_820F_b3");
#endif
label_820F:; /* EnemyIfMoveFailedVertical_Bounce_flipSpeed */
    /* $820F: 20 */ nes_cpu_instruction_boundary(0x820F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x11; g_cpu.S--; func_81F6_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x820F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8212:;
    /* $8212: D0 */ nes_cpu_instruction_boundary(0x8212, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_822A; }
label_8214:;
    /* $8214: 20 */ nes_cpu_instruction_boundary(0x8214, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x16; g_cpu.S--; func_80B0_b3();
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

void func_9B25_b3(void) { /* AreaRoutine_Tourian */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9B25_b3");
#endif
label_9B25:; /* AreaRoutine_Tourian */
    /* $9B25: 20 */ nes_cpu_instruction_boundary(0x9B25, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x27; g_cpu.S--; func_9B37_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9B25, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9B28:;
    /* $9B28: 20 */ nes_cpu_instruction_boundary(0x9B28, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2A; g_cpu.S--; func_9DD4_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9B28, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9B2B:;
    /* $9B2B: 20 */ nes_cpu_instruction_boundary(0x9B2B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2D; g_cpu.S--; func_A1E7_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9B2B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9B2E:;
    /* $9B2E: 20 */ nes_cpu_instruction_boundary(0x9B2E, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x30; g_cpu.S--; func_A238_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9B2E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9B31:;
    /* $9B31: 20 */ nes_cpu_instruction_boundary(0x9B31, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x33; g_cpu.S--; func_A28B_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9B31, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9B34:;
    /* $9B34: 4C */ nes_cpu_instruction_boundary(0x9B34, 3); nes_cpu_instruction_boundary(0xA15E, 2); func_A15E_b3(); return;
}

void func_8B87_b3_body(int _entry) { /* UpdateDoor */
    switch (_entry) {
        case 1: goto label_8B9D;
        case 2: goto label_8BB1;
    }
label_8B87:; /* UpdateDoor */
    /* $8B87: 86 */ nes_cpu_instruction_boundary(0x8B87, 3); nes_write(0x4B, g_cpu.X);
label_8B89:;
    /* $8B89: BD */ nes_cpu_instruction_boundary(0x8B89, 4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8B8C:;
    /* $8B8C: 20 */ nes_cpu_instruction_boundary(0x8B8C, 6); /* inline_dispatch $C27C: 7 entries (bank=3) */
switch(g_cpu.A) {
  case 0: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x5C); nes_write(0x000D, 0xC4); g_cpu.A = 0xC4; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0xC45C, 57); func_C45C(); return;
  case 1: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x9D); nes_write(0x000D, 0x8B); g_cpu.A = 0x8B; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x8B9D, 57); func_8B9D_b3(); return;
  case 2: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xD5); nes_write(0x000D, 0x8B); g_cpu.A = 0x8B; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x8BD5, 57); func_8BD5_b3(); return;
  case 3: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x01); nes_write(0x000D, 0x8C); g_cpu.A = 0x8C; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x8C01, 57); func_8C01_b3(); return;
  case 4: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x84); nes_write(0x000D, 0x8C); g_cpu.A = 0x8C; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x8C84, 57); func_8C84_b3(); return;
  case 5: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xC6); nes_write(0x000D, 0x8C); g_cpu.A = 0x8C; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x8CC6, 57); func_8CC6_b3(); return;
  case 6: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xF0); nes_write(0x000D, 0x8C); g_cpu.A = 0x8C; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); nes_cpu_instruction_boundary(0x8CF0, 57); func_8CF0_b3(); return;
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
    /* $8BA5: 20 */ nes_cpu_instruction_boundary(0x8BA5, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA7; g_cpu.S--; func_8CFB_b3();
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

void func_8B87_b3(void) { /* UpdateDoor */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8B87_b3");
#endif
    func_8B87_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8B9D_b3(void) { /* UpdateDoor_Init */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8B9D_b3");
#endif
    func_8B87_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8BB1_b3(void) { /* DrawDoor */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8BB1_b3");
#endif
    func_8B87_b3_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_833F_b3(void) { /* EnemyGetDeltaY_UsingAcceleration */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_833F_b3");
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

void func_822B_b3(void) { /* LoadEnemyMovementPtr */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_822B_b3");
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

void func_8312_b3(void) { /* EnemyGetDeltaY_RepeatPreviousUntilNoDeltaYThenTriggerResting_endIf_B */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8312_b3");
#endif
label_8312:; /* EnemyGetDeltaY_RepeatPreviousUntilNoDeltaYThenTriggerResting_endIf_B */
    /* $8312: 20 */ nes_cpu_instruction_boundary(0x8312, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x83; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x14; g_cpu.S--; func_81B1_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8312, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8315:;
    /* $8315: 4C */ nes_cpu_instruction_boundary(0x8315, 3); nes_cpu_instruction_boundary(0x82A2, 2); func_82A2_b3(); return;
}

void func_81B1_b3(void) { /* EnemyTriggerResting_AndClearEnAccelY */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81B1_b3");
#endif
label_81B1:; /* EnemyTriggerResting_AndClearEnAccelY */
    /* $81B1: 20 */ nes_cpu_instruction_boundary(0x81B1, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; func_81B8_b3();
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

void func_8563_b3(void) { /* GetOtherNameTableIndex */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8563_b3");
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

void func_855A_b3(void) { /* SwitchEnemyNameTable */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_855A_b3");
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

void func_81FC_b3_body(int _entry) { /* EnemyIfMoveFailedVertical_Bounce */
    switch (_entry) {
        case 1: goto label_8206;
    }
label_81FC:; /* EnemyIfMoveFailedVertical_Bounce */
    /* $81FC: 20 */ nes_cpu_instruction_boundary(0x81FC, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFE; g_cpu.S--; func_81F6_b3();
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
    /* $8203: 20 */ nes_cpu_instruction_boundary(0x8203, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x05; g_cpu.S--; func_856B_b3();
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
    /* $820F: 20 */ nes_cpu_instruction_boundary(0x820F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x11; g_cpu.S--; func_81F6_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x820F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8212:;
    /* $8212: D0 */ nes_cpu_instruction_boundary(0x8212, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_822A; }
label_8214:;
    /* $8214: 20 */ nes_cpu_instruction_boundary(0x8214, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x16; g_cpu.S--; func_80B0_b3();
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

void func_81FC_b3(void) { /* EnemyIfMoveFailedVertical_Bounce */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81FC_b3");
#endif
    func_81FC_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8206_b3(void) { /* EnemyIfMoveFailedVertical_Bounce_flipSpeedAndAccel */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8206_b3");
#endif
    func_81FC_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_856B_b3(void) { /* XorEnData05 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_856B_b3");
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

void func_8395_b3(void) { /* EnemyGetDeltaX_UsingAcceleration */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8395_b3");
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

void func_81C7_b3_body(int _entry) { /* EnemyIfMoveFailedHorizontal_Bounce */
    switch (_entry) {
        case 1: goto label_81D1;
        case 2: goto label_81F5;
    }
label_81C7:; /* EnemyIfMoveFailedHorizontal_Bounce */
    /* $81C7: 20 */ nes_cpu_instruction_boundary(0x81C7, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC9; g_cpu.S--; func_81F6_b3();
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
    /* $81CE: 20 */ nes_cpu_instruction_boundary(0x81CE, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD0; g_cpu.S--; func_856B_b3();
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
    /* $81DA: 20 */ nes_cpu_instruction_boundary(0x81DA, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDC; g_cpu.S--; func_81F6_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x81DA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_81DD:;
    /* $81DD: D0 */ nes_cpu_instruction_boundary(0x81DD, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_81F5; }
label_81DF:;
    /* $81DF: 20 */ nes_cpu_instruction_boundary(0x81DF, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE1; g_cpu.S--; func_80B0_b3();
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

void func_81C7_b3(void) { /* EnemyIfMoveFailedHorizontal_Bounce */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81C7_b3");
#endif
    func_81C7_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_81D1_b3(void) { /* EnemyIfMoveFailedHorizontal_Bounce_flipSpeedAndAccel */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81D1_b3");
#endif
    func_81C7_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_81F5_b3(void) { /* EnemyIfMoveFailedHorizontal_Bounce_RTS */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81F5_b3");
#endif
    func_81C7_b3_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_81C0_b3(void) { /* EnemyTriggerResting_AndClearEnAccelX */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81C0_b3");
#endif
label_81C0:; /* EnemyTriggerResting_AndClearEnAccelX */
    /* $81C0: 20 */ nes_cpu_instruction_boundary(0x81C0, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC2; g_cpu.S--; func_81B8_b3();
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

void func_9C6F_b3(void) { /* DeleteOffscreenRoomSprites_Tourian */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9C6F_b3");
#endif
label_9C6F:; /* DeleteOffscreenRoomSprites_Tourian */
    /* $9C6F: 84 */ nes_cpu_instruction_boundary(0x9C6F, 3); nes_write(0x02, g_cpu.Y);
label_9C71:;
    /* $9C71: A0 */ nes_cpu_instruction_boundary(0x9C71, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_9C73:; /* DeleteOffscreenRoomSprites_Tourian_loop_A */
    /* $9C73: B9 */ nes_cpu_instruction_boundary(0x9C73, 4); g_cpu.A = nes_read((0x6BF7 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C76:;
    /* $9C76: 45 */ nes_cpu_instruction_boundary(0x9C76, 3); g_cpu.A ^= nes_read(0x02); FLAG_NZ(g_cpu.A);
label_9C78:;
    /* $9C78: 4A */ nes_cpu_instruction_boundary(0x9C78, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9C79:;
    /* $9C79: B0 */ nes_cpu_instruction_boundary(0x9C79, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9C80; }
label_9C7B:;
    /* $9C7B: A9 */ nes_cpu_instruction_boundary(0x9C7B, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9C7D:;
    /* $9C7D: 99 */ nes_cpu_instruction_boundary(0x9C7D, 5); nes_write((0x6BF4 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9C80:; /* DeleteOffscreenRoomSprites_Tourian_endIf_A */
    /* $9C80: 98 */ nes_cpu_instruction_boundary(0x9C80, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_9C81:;
    /* $9C81: 18 */ nes_cpu_instruction_boundary(0x9C81, 2); g_cpu.C = 0;
label_9C82:;
    /* $9C82: 69 */ nes_cpu_instruction_boundary(0x9C82, 2); { uint16_t r = g_cpu.A + 0x08 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x08); g_cpu.A=r&0xFF; }
label_9C84:;
    /* $9C84: A8 */ nes_cpu_instruction_boundary(0x9C84, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9C85:;
    /* $9C85: 10 */ nes_cpu_instruction_boundary(0x9C85, 2); if (!g_cpu.N) {
    nes_cpu_instruction_boundary(0x9C73, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9C73;
    }
label_9C87:;
    /* $9C87: A2 */ nes_cpu_instruction_boundary(0x9C87, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_9C89:; /* DeleteOffscreenRoomSprites_Tourian_loop_B */
    /* $9C89: BD */ nes_cpu_instruction_boundary(0x9C89, 4); g_cpu.A = nes_read((0x0758 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C8C:;
    /* $9C8C: F0 */ nes_cpu_instruction_boundary(0x9C8C, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9C99; }
label_9C8E:;
    /* $9C8E: 20 */ nes_cpu_instruction_boundary(0x9C8E, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x90; g_cpu.S--; func_9D64_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9C8E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9C91:;
    /* $9C91: 5D */ nes_cpu_instruction_boundary(0x9C91, 4); g_cpu.A ^= nes_read((0x075A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C94:;
    /* $9C94: D0 */ nes_cpu_instruction_boundary(0x9C94, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9C99; }
label_9C96:;
    /* $9C96: 9D */ nes_cpu_instruction_boundary(0x9C96, 5); nes_write((0x0758 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9C99:; /* DeleteOffscreenRoomSprites_Tourian_endIf_B */
    /* $9C99: 8A */ nes_cpu_instruction_boundary(0x9C99, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_9C9A:;
    /* $9C9A: 18 */ nes_cpu_instruction_boundary(0x9C9A, 2); g_cpu.C = 0;
label_9C9B:;
    /* $9C9B: 69 */ nes_cpu_instruction_boundary(0x9C9B, 2); { uint16_t r = g_cpu.A + 0x08 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x08); g_cpu.A=r&0xFF; }
label_9C9D:;
    /* $9C9D: AA */ nes_cpu_instruction_boundary(0x9C9D, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_9C9E:;
    /* $9C9E: C9 */ nes_cpu_instruction_boundary(0x9C9E, 2); { int r=g_cpu.A-0x28; g_cpu.C=(g_cpu.A>=0x28)?1:0; FLAG_NZ(r&0xFF); }
label_9CA0:;
    /* $9CA0: D0 */ nes_cpu_instruction_boundary(0x9CA0, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0x9C89, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9C89;
    }
label_9CA2:;
    /* $9CA2: A2 */ nes_cpu_instruction_boundary(0x9CA2, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_9CA4:;
    /* $9CA4: 20 */ nes_cpu_instruction_boundary(0x9CA4, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA6; g_cpu.S--; func_9CD6_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9CA4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9CA7:;
    /* $9CA7: A2 */ nes_cpu_instruction_boundary(0x9CA7, 2); g_cpu.X = 0x03; FLAG_NZ(g_cpu.X);
label_9CA9:;
    /* $9CA9: 20 */ nes_cpu_instruction_boundary(0x9CA9, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAB; g_cpu.S--; func_9CD6_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9CA9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9CAC:;
    /* $9CAC: A5 */ nes_cpu_instruction_boundary(0x9CAC, 3); g_cpu.A = nes_read(0x98); FLAG_NZ(g_cpu.A);
label_9CAE:;
    /* $9CAE: F0 */ nes_cpu_instruction_boundary(0x9CAE, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9CC3; }
label_9CB0:;
    /* $9CB0: C9 */ nes_cpu_instruction_boundary(0x9CB0, 2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_9CB2:;
    /* $9CB2: F0 */ nes_cpu_instruction_boundary(0x9CB2, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9CC3; }
label_9CB4:;
    /* $9CB4: C9 */ nes_cpu_instruction_boundary(0x9CB4, 2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_9CB6:;
    /* $9CB6: F0 */ nes_cpu_instruction_boundary(0x9CB6, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9CC3; }
label_9CB8:;
    /* $9CB8: A5 */ nes_cpu_instruction_boundary(0x9CB8, 3); g_cpu.A = nes_read(0x9D); FLAG_NZ(g_cpu.A);
label_9CBA:;
    /* $9CBA: 45 */ nes_cpu_instruction_boundary(0x9CBA, 3); g_cpu.A ^= nes_read(0x02); FLAG_NZ(g_cpu.A);
label_9CBC:;
    /* $9CBC: 4A */ nes_cpu_instruction_boundary(0x9CBC, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9CBD:;
    /* $9CBD: B0 */ nes_cpu_instruction_boundary(0x9CBD, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9CC3; }
label_9CBF:;
    /* $9CBF: A9 */ nes_cpu_instruction_boundary(0x9CBF, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9CC1:;
    /* $9CC1: 85 */ nes_cpu_instruction_boundary(0x9CC1, 3); nes_write(0x98, g_cpu.A);
label_9CC3:; /* DeleteOffscreenRoomSprites_Tourian_endIf_C */
    /* $9CC3: AD */ nes_cpu_instruction_boundary(0x9CC3, 4); g_cpu.A = nes_read(0x010D); FLAG_NZ(g_cpu.A);
label_9CC6:;
    /* $9CC6: F0 */ nes_cpu_instruction_boundary(0x9CC6, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9CD5; }
label_9CC8:;
    /* $9CC8: AD */ nes_cpu_instruction_boundary(0x9CC8, 4); g_cpu.A = nes_read(0x010C); FLAG_NZ(g_cpu.A);
label_9CCB:;
    /* $9CCB: 45 */ nes_cpu_instruction_boundary(0x9CCB, 3); g_cpu.A ^= nes_read(0x02); FLAG_NZ(g_cpu.A);
label_9CCD:;
    /* $9CCD: 4A */ nes_cpu_instruction_boundary(0x9CCD, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9CCE:;
    /* $9CCE: B0 */ nes_cpu_instruction_boundary(0x9CCE, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9CD5; }
label_9CD0:;
    /* $9CD0: A9 */ nes_cpu_instruction_boundary(0x9CD0, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9CD2:;
    /* $9CD2: 8D */ nes_cpu_instruction_boundary(0x9CD2, 4); nes_write(0x010D, g_cpu.A);
label_9CD5:; /* DeleteOffscreenRoomSprites_Tourian_endIf_D */
    /* $9CD5: 60 */ nes_cpu_instruction_boundary(0x9CD5, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9CE6_b3(void) { /* SpawnCannonRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9CE6_b3");
#endif
label_9CE6:; /* SpawnCannonRoutine */
    /* $9CE6: A2 */ nes_cpu_instruction_boundary(0x9CE6, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_9CE8:; /* SpawnCannonRoutine_loop */
    /* $9CE8: BD */ nes_cpu_instruction_boundary(0x9CE8, 4); g_cpu.A = nes_read((0x6BF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CEB:;
    /* $9CEB: F0 */ nes_cpu_instruction_boundary(0x9CEB, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9CF6; }
label_9CED:;
    /* $9CED: 8A */ nes_cpu_instruction_boundary(0x9CED, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_9CEE:;
    /* $9CEE: 18 */ nes_cpu_instruction_boundary(0x9CEE, 2); g_cpu.C = 0;
label_9CEF:;
    /* $9CEF: 69 */ nes_cpu_instruction_boundary(0x9CEF, 2); { uint16_t r = g_cpu.A + 0x08 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x08); g_cpu.A=r&0xFF; }
label_9CF1:;
    /* $9CF1: AA */ nes_cpu_instruction_boundary(0x9CF1, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_9CF2:;
    /* $9CF2: 10 */ nes_cpu_instruction_boundary(0x9CF2, 2); if (!g_cpu.N) {
    nes_cpu_instruction_boundary(0x9CE8, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9CE8;
    }
label_9CF4:;
    /* $9CF4: 30 */ nes_cpu_instruction_boundary(0x9CF4, 2); if (g_cpu.N) { maybe_trigger_vblank(2); goto label_9D20; }
label_9CF6:; /* SpawnCannonRoutine_spawnCannon */
    /* $9CF6: B1 */ nes_cpu_instruction_boundary(0x9CF6, 5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CF8:;
    /* $9CF8: 20 */ nes_cpu_instruction_boundary(0x9CF8, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFA; g_cpu.S--; func_9B1B_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9CF8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9CFB:;
    /* $9CFB: 9D */ nes_cpu_instruction_boundary(0x9CFB, 5); nes_write((0x6BF8 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CFE:;
    /* $9CFE: A9 */ nes_cpu_instruction_boundary(0x9CFE, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9D00:;
    /* $9D00: 9D */ nes_cpu_instruction_boundary(0x9D00, 5); nes_write((0x6BF4 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D03:;
    /* $9D03: 9D */ nes_cpu_instruction_boundary(0x9D03, 5); nes_write((0x6BFB + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D06:;
    /* $9D06: C8 */ nes_cpu_instruction_boundary(0x9D06, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9D07:;
    /* $9D07: B1 */ nes_cpu_instruction_boundary(0x9D07, 5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9D09:;
    /* $9D09: 48 */ nes_cpu_instruction_boundary(0x9D09, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9D0A:;
    /* $9D0A: 29 */ nes_cpu_instruction_boundary(0x9D0A, 2); g_cpu.A &= 0xF0; FLAG_NZ(g_cpu.A);
label_9D0C:;
    /* $9D0C: 09 */ nes_cpu_instruction_boundary(0x9D0C, 2); g_cpu.A |= 0x07; FLAG_NZ(g_cpu.A);
label_9D0E:;
    /* $9D0E: 9D */ nes_cpu_instruction_boundary(0x9D0E, 5); nes_write((0x6BF5 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D11:;
    /* $9D11: 68 */ nes_cpu_instruction_boundary(0x9D11, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9D12:;
    /* $9D12: 20 */ nes_cpu_instruction_boundary(0x9D12, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9D; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x14; g_cpu.S--; func_9B20_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9D12, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9D15:;
    /* $9D15: 09 */ nes_cpu_instruction_boundary(0x9D15, 2); g_cpu.A |= 0x07; FLAG_NZ(g_cpu.A);
label_9D17:;
    /* $9D17: 9D */ nes_cpu_instruction_boundary(0x9D17, 5); nes_write((0x6BF6 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D1A:;
    /* $9D1A: 20 */ nes_cpu_instruction_boundary(0x9D1A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9D; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1C; g_cpu.S--; func_9D88_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9D1A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9D1D:;
    /* $9D1D: 9D */ nes_cpu_instruction_boundary(0x9D1D, 5); nes_write((0x6BF7 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D20:; /* SpawnCannonRoutine_RTS */
    /* $9D20: 60 */ nes_cpu_instruction_boundary(0x9D20, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9D21_b3(void) { /* SpawnMotherBrainRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9D21_b3");
#endif
label_9D21:; /* SpawnMotherBrainRoutine */
    /* $9D21: A9 */ nes_cpu_instruction_boundary(0x9D21, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9D23:;
    /* $9D23: 85 */ nes_cpu_instruction_boundary(0x9D23, 3); nes_write(0x98, g_cpu.A);
label_9D25:;
    /* $9D25: 20 */ nes_cpu_instruction_boundary(0x9D25, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9D; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x27; g_cpu.S--; func_9D88_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9D25, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9D28:;
    /* $9D28: 85 */ nes_cpu_instruction_boundary(0x9D28, 3); nes_write(0x9D, g_cpu.A);
label_9D2A:;
    /* $9D2A: 49 */ nes_cpu_instruction_boundary(0x9D2A, 2); g_cpu.A ^= 0x01; FLAG_NZ(g_cpu.A);
label_9D2C:;
    /* $9D2C: AA */ nes_cpu_instruction_boundary(0x9D2C, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_9D2D:;
    /* $9D2D: AD */ nes_cpu_instruction_boundary(0x9D2D, 4); g_cpu.A = nes_read(0x9D3C); FLAG_NZ(g_cpu.A);
label_9D30:;
    /* $9D30: 15 */ nes_cpu_instruction_boundary(0x9D30, 4); g_cpu.A |= nes_read((0x6C + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9D32:;
    /* $9D32: 95 */ nes_cpu_instruction_boundary(0x9D32, 4); nes_write((0x6C + g_cpu.X) & 0xFF, g_cpu.A);
label_9D34:;
    /* $9D34: A9 */ nes_cpu_instruction_boundary(0x9D34, 2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_9D36:;
    /* $9D36: 85 */ nes_cpu_instruction_boundary(0x9D36, 3); nes_write(0x9A, g_cpu.A);
label_9D38:;
    /* $9D38: 85 */ nes_cpu_instruction_boundary(0x9D38, 3); nes_write(0x9B, g_cpu.A);
label_9D3A:;
    /* $9D3A: 60 */ nes_cpu_instruction_boundary(0x9D3A, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9D3D_b3(void) { /* SpawnZebetiteRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9D3D_b3");
#endif
label_9D3D:; /* SpawnZebetiteRoutine */
    /* $9D3D: B1 */ nes_cpu_instruction_boundary(0x9D3D, 5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9D3F:;
    /* $9D3F: 29 */ nes_cpu_instruction_boundary(0x9D3F, 2); g_cpu.A &= 0xF0; FLAG_NZ(g_cpu.A);
label_9D41:;
    /* $9D41: 4A */ nes_cpu_instruction_boundary(0x9D41, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9D42:;
    /* $9D42: AA */ nes_cpu_instruction_boundary(0x9D42, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_9D43:;
    /* $9D43: 0A */ nes_cpu_instruction_boundary(0x9D43, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9D44:;
    /* $9D44: 29 */ nes_cpu_instruction_boundary(0x9D44, 2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_9D46:;
    /* $9D46: 49 */ nes_cpu_instruction_boundary(0x9D46, 2); g_cpu.A ^= 0x10; FLAG_NZ(g_cpu.A);
label_9D48:;
    /* $9D48: 09 */ nes_cpu_instruction_boundary(0x9D48, 2); g_cpu.A |= 0x84; FLAG_NZ(g_cpu.A);
label_9D4A:;
    /* $9D4A: 9D */ nes_cpu_instruction_boundary(0x9D4A, 5); nes_write((0x0759 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D4D:;
    /* $9D4D: 20 */ nes_cpu_instruction_boundary(0x9D4D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9D; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x4F; g_cpu.S--; func_9D64_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9D4D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9D50:;
    /* $9D50: 9D */ nes_cpu_instruction_boundary(0x9D50, 5); nes_write((0x075A + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D53:;
    /* $9D53: A9 */ nes_cpu_instruction_boundary(0x9D53, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9D55:;
    /* $9D55: 9D */ nes_cpu_instruction_boundary(0x9D55, 5); nes_write((0x0758 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D58:;
    /* $9D58: A9 */ nes_cpu_instruction_boundary(0x9D58, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9D5A:;
    /* $9D5A: 9D */ nes_cpu_instruction_boundary(0x9D5A, 5); nes_write((0x075B + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D5D:;
    /* $9D5D: 9D */ nes_cpu_instruction_boundary(0x9D5D, 5); nes_write((0x075C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D60:;
    /* $9D60: 9D */ nes_cpu_instruction_boundary(0x9D60, 5); nes_write((0x075D + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D63:;
    /* $9D63: 60 */ nes_cpu_instruction_boundary(0x9D63, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9D6C_b3_body(int _entry) { /* SpawnRinkaSpawnerRoutine */
    switch (_entry) {
        case 1: goto label_9D75;
    }
label_9D6C:; /* SpawnRinkaSpawnerRoutine */
    /* $9D6C: A2 */ nes_cpu_instruction_boundary(0x9D6C, 2); g_cpu.X = 0x03; FLAG_NZ(g_cpu.X);
label_9D6E:;
    /* $9D6E: 20 */ nes_cpu_instruction_boundary(0x9D6E, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9D; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x70; g_cpu.S--; func_9D75_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9D6E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9D71:;
    /* $9D71: 30 */ nes_cpu_instruction_boundary(0x9D71, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_9D87; }
label_9D73:;
    /* $9D73: A2 */ nes_cpu_instruction_boundary(0x9D73, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_9D75:; /* SpawnRinkaSpawnerRoutine_endIf_A */
    /* $9D75: B5 */ nes_cpu_instruction_boundary(0x9D75, 4); g_cpu.A = nes_read((0x8B + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9D77:;
    /* $9D77: 10 */ nes_cpu_instruction_boundary(0x9D77, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_9D87; }
label_9D79:;
    /* $9D79: B1 */ nes_cpu_instruction_boundary(0x9D79, 5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9D7B:;
    /* $9D7B: 20 */ nes_cpu_instruction_boundary(0x9D7B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9D; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x7D; g_cpu.S--; func_9B1B_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9D7B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9D7E:;
    /* $9D7E: 95 */ nes_cpu_instruction_boundary(0x9D7E, 4); nes_write((0x8B + g_cpu.X) & 0xFF, g_cpu.A);
label_9D80:;
    /* $9D80: 20 */ nes_cpu_instruction_boundary(0x9D80, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9D; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; func_9D88_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9D80, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9D83:;
    /* $9D83: 95 */ nes_cpu_instruction_boundary(0x9D83, 4); nes_write((0x8C + g_cpu.X) & 0xFF, g_cpu.A);
label_9D85:;
    /* $9D85: A9 */ nes_cpu_instruction_boundary(0x9D85, 2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_9D87:; /* SpawnRinkaSpawnerRoutine_RTS */
    /* $9D87: 60 */ nes_cpu_instruction_boundary(0x9D87, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9D6C_b3(void) { /* SpawnRinkaSpawnerRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9D6C_b3");
#endif
    func_9D6C_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9D75_b3(void) { /* SpawnRinkaSpawnerRoutine_endIf_A */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9D75_b3");
#endif
    func_9D6C_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8024_b3(void) { /* CommonJump_JumpEngine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8024_b3");
#endif
label_8024:; /* CommonJump_JumpEngine */
    /* $8024: 4C */ nes_cpu_instruction_boundary(0x8024, 3); nes_cpu_instruction_boundary(0xC27C, 2); func_C27C(); return;
}

void func_A320_b3(void) { /* ClearCurrentMetroidLatchAndMetroidOnSamus */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A320_b3");
#endif
label_A320:; /* ClearCurrentMetroidLatchAndMetroidOnSamus */
    /* $A320: 8A */ nes_cpu_instruction_boundary(0xA320, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A321:;
    /* $A321: 20 */ nes_cpu_instruction_boundary(0xA321, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x23; g_cpu.S--; func_9B1B_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA321, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A324:;
    /* $A324: A8 */ nes_cpu_instruction_boundary(0xA324, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A325:;
    /* $A325: 20 */ nes_cpu_instruction_boundary(0xA325, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x27; g_cpu.S--; func_99B1_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA325, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A328:;
    /* $A328: 85 */ nes_cpu_instruction_boundary(0xA328, 3); nes_write(0x92, g_cpu.A);
label_A32A:;
    /* $A32A: 60 */ nes_cpu_instruction_boundary(0xA32A, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_81F6_b3(void) { /* LoadBit5ofTableAt968B */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81F6_b3");
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

void func_95C0_b3(void) { /* GotoUpdateBullet_CollisionWithMotherBrain */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95C0_b3");
#endif
label_95C0:; /* GotoUpdateBullet_CollisionWithMotherBrain */
    /* $95C0: 4C */ nes_cpu_instruction_boundary(0x95C0, 3); nes_cpu_instruction_boundary(0xA142, 2); func_A142_b3(); return;
}

void func_9B37_b3_body(int _entry) { /* UpdateAllCannons */
    switch (_entry) {
        case 1: goto label_9B44;
    }
label_9B37:; /* UpdateAllCannons */
    /* $9B37: A2 */ nes_cpu_instruction_boundary(0x9B37, 2); g_cpu.X = 0x78; FLAG_NZ(g_cpu.X);
label_9B39:; /* UpdateAllCannons_loop */
    /* $9B39: 20 */ nes_cpu_instruction_boundary(0x9B39, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3B; g_cpu.S--; func_9B44_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9B39, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9B3C:;
    /* $9B3C: A5 */ nes_cpu_instruction_boundary(0x9B3C, 3); g_cpu.A = nes_read(0x97); FLAG_NZ(g_cpu.A);
label_9B3E:;
    /* $9B3E: 38 */ nes_cpu_instruction_boundary(0x9B3E, 2); g_cpu.C = 1;
label_9B3F:;
    /* $9B3F: E9 */ nes_cpu_instruction_boundary(0x9B3F, 2); { uint8_t m=0x08; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9B41:;
    /* $9B41: AA */ nes_cpu_instruction_boundary(0x9B41, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_9B42:;
    /* $9B42: D0 */ nes_cpu_instruction_boundary(0x9B42, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0x9B39, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9B39;
    }
label_9B44:; /* UpdateAllCannons_updateIfPossible */
    /* $9B44: 86 */ nes_cpu_instruction_boundary(0x9B44, 3); nes_write(0x97, g_cpu.X);
label_9B46:;
    /* $9B46: BC */ nes_cpu_instruction_boundary(0x9B46, 4); g_cpu.Y = nes_read((0x6BF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_9B49:;
    /* $9B49: D0 */ nes_cpu_instruction_boundary(0x9B49, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9B4C; }
label_9B4B:;
    /* $9B4B: 60 */ nes_cpu_instruction_boundary(0x9B4B, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9B4C:; /* UpdateCannon */
    /* $9B4C: 20 */ nes_cpu_instruction_boundary(0x9B4C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x4E; g_cpu.S--; func_9C4D_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9B4C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9B4F:;
    /* $9B4F: 98 */ nes_cpu_instruction_boundary(0x9B4F, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_9B50:;
    /* $9B50: D0 */ nes_cpu_instruction_boundary(0x9B50, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0x9B4B, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9B4B;
    }
label_9B52:;
    /* $9B52: AC */ nes_cpu_instruction_boundary(0x9B52, 4); g_cpu.Y = nes_read(0x010B); FLAG_NZ(g_cpu.Y);
label_9B55:;
    /* $9B55: C8 */ nes_cpu_instruction_boundary(0x9B55, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9B56:;
    /* $9B56: D0 */ nes_cpu_instruction_boundary(0x9B56, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9B65; }
label_9B58:;
    /* $9B58: BD */ nes_cpu_instruction_boundary(0x9B58, 4); g_cpu.A = nes_read((0x6BF8 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B5B:;
    /* $9B5B: C9 */ nes_cpu_instruction_boundary(0x9B5B, 2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_9B5D:;
    /* $9B5D: F0 */ nes_cpu_instruction_boundary(0x9B5D, 2); if (g_cpu.Z) {
    nes_cpu_instruction_boundary(0x9B4B, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9B4B;
    }
label_9B5F:;
    /* $9B5F: 20 */ nes_cpu_instruction_boundary(0x9B5F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x61; g_cpu.S--; func_9B70_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9B5F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9B62:;
    /* $9B62: 4C */ nes_cpu_instruction_boundary(0x9B62, 3); nes_cpu_instruction_boundary(0x9C2B, 2); func_9C2B_b3(); return;
label_9B65:; /* UpdateCannon_escape */
    /* $9B65: A5 */ nes_cpu_instruction_boundary(0x9B65, 3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_9B67:;
    /* $9B67: 29 */ nes_cpu_instruction_boundary(0x9B67, 2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9B69:;
    /* $9B69: D0 */ nes_cpu_instruction_boundary(0x9B69, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0x9B4B, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9B4B;
    }
label_9B6B:;
    /* $9B6B: A9 */ nes_cpu_instruction_boundary(0x9B6B, 2); g_cpu.A = 0x19; FLAG_NZ(g_cpu.A);
label_9B6D:;
    /* $9B6D: 4C */ nes_cpu_instruction_boundary(0x9B6D, 3); nes_cpu_instruction_boundary(0x9C31, 2); func_9C31_b3(); return;
}

void func_9B37_b3(void) { /* UpdateAllCannons */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9B37_b3");
#endif
    func_9B37_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9B44_b3(void) { /* UpdateAllCannons_updateIfPossible */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9B44_b3");
#endif
    func_9B37_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9DD4_b3(void) { /* MotherBrainStatusHandler */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9DD4_b3");
#endif
label_9DD4:; /* MotherBrainStatusHandler */
    /* $9DD4: A5 */ nes_cpu_instruction_boundary(0x9DD4, 3); g_cpu.A = nes_read(0x98); FLAG_NZ(g_cpu.A);
label_9DD6:;
    /* $9DD6: F0 */ nes_cpu_instruction_boundary(0x9DD6, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9DF1; }
label_9DD8:;
    /* $9DD8: 20 */ nes_cpu_instruction_boundary(0x9DD8, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9D; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDA; g_cpu.S--; func_8024_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9DD8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9DDB:;
    /* $9DDB: CB */ nes_cpu_instruction_boundary(0x9DDB, 2); { uint8_t t=(uint8_t)(g_cpu.A & g_cpu.X); g_cpu.C=(t>=0x95)?1:0; g_cpu.X=(t-0x95)&0xFF; FLAG_NZ(g_cpu.X); }
label_9DDD:;
    /* $9DDD: 22 */ nes_cpu_instruction_boundary(0x9DDD, 2); /* ILLEGAL $22 — skip 1 */
label_9DDE:;
    /* $9DDE: 9E */ nes_cpu_instruction_boundary(0x9DDE, 5); /* ILLEGAL $9E — skip 3 */
label_9DE1:;
    /* $9DE1: 52 */ nes_cpu_instruction_boundary(0x9DE1, 2); /* ILLEGAL $52 — skip 1 */
label_9DE2:;
    /* $9DE2: 9E */ nes_cpu_instruction_boundary(0x9DE2, 5); /* ILLEGAL $9E — skip 3 */
label_9DE5:;
    /* $9DE5: 02 */ nes_cpu_instruction_boundary(0x9DE5, 2); /* ILLEGAL $02 — skip 1 */
label_9DE6:;
    /* $9DE6: 9F */ nes_cpu_instruction_boundary(0x9DE6, 5); /* ILLEGAL $9F — skip 3 */
label_9DE9:;
    /* $9DE9: C0 */ nes_cpu_instruction_boundary(0x9DE9, 2); { int r=g_cpu.Y-0x9F; g_cpu.C=(g_cpu.Y>=0x9F)?1:0; FLAG_NZ(r&0xFF); }
label_9DEB:;
    /* $9DEB: 02 */ nes_cpu_instruction_boundary(0x9DEB, 2); /* ILLEGAL $02 — skip 1 */
label_9DEC:;
    /* $9DEC: 9F */ nes_cpu_instruction_boundary(0x9DEC, 5); /* ILLEGAL $9F — skip 3 */
label_9DEF:;
    /* $9DEF: CB */ nes_cpu_instruction_boundary(0x9DEF, 2); { uint8_t t=(uint8_t)(g_cpu.A & g_cpu.X); g_cpu.C=(t>=0x95)?1:0; g_cpu.X=(t-0x95)&0xFF; FLAG_NZ(g_cpu.X); }
label_9DF1:;
    /* $9DF1: 60 */ nes_cpu_instruction_boundary(0x9DF1, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A1E7_b3(void) { /* UpdateEndTimer */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A1E7_b3");
#endif
label_A1E7:; /* UpdateEndTimer */
    /* $A1E7: AC */ nes_cpu_instruction_boundary(0xA1E7, 4); g_cpu.Y = nes_read(0x010B); FLAG_NZ(g_cpu.Y);
label_A1EA:;
    /* $A1EA: C8 */ nes_cpu_instruction_boundary(0xA1EA, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A1EB:;
    /* $A1EB: F0 */ nes_cpu_instruction_boundary(0xA1EB, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_A237; }
label_A1ED:;
    /* $A1ED: AD */ nes_cpu_instruction_boundary(0xA1ED, 4); g_cpu.A = nes_read(0x010A); FLAG_NZ(g_cpu.A);
label_A1F0:;
    /* $A1F0: 85 */ nes_cpu_instruction_boundary(0xA1F0, 3); nes_write(0x03, g_cpu.A);
label_A1F2:;
    /* $A1F2: A9 */ nes_cpu_instruction_boundary(0xA1F2, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_A1F4:;
    /* $A1F4: 38 */ nes_cpu_instruction_boundary(0xA1F4, 2); g_cpu.C = 1;
label_A1F5:;
    /* $A1F5: 20 */ nes_cpu_instruction_boundary(0xA1F5, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF7; g_cpu.S--; func_8045_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA1F5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A1F8:;
    /* $A1F8: 8D */ nes_cpu_instruction_boundary(0xA1F8, 4); nes_write(0x010A, g_cpu.A);
label_A1FB:;
    /* $A1FB: AD */ nes_cpu_instruction_boundary(0xA1FB, 4); g_cpu.A = nes_read(0x010B); FLAG_NZ(g_cpu.A);
label_A1FE:;
    /* $A1FE: 85 */ nes_cpu_instruction_boundary(0xA1FE, 3); nes_write(0x03, g_cpu.A);
label_A200:;
    /* $A200: A9 */ nes_cpu_instruction_boundary(0xA200, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A202:;
    /* $A202: 20 */ nes_cpu_instruction_boundary(0xA202, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA2; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x04; g_cpu.S--; func_8045_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA202, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A205:;
    /* $A205: 8D */ nes_cpu_instruction_boundary(0xA205, 4); nes_write(0x010B, g_cpu.A);
label_A208:;
    /* $A208: A5 */ nes_cpu_instruction_boundary(0xA208, 3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_A20A:;
    /* $A20A: 29 */ nes_cpu_instruction_boundary(0xA20A, 2); g_cpu.A &= 0x1F; FLAG_NZ(g_cpu.A);
label_A20C:;
    /* $A20C: D0 */ nes_cpu_instruction_boundary(0xA20C, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A216; }
label_A20E:;
    /* $A20E: AD */ nes_cpu_instruction_boundary(0xA20E, 4); g_cpu.A = nes_read(0x0681); FLAG_NZ(g_cpu.A);
label_A211:;
    /* $A211: 09 */ nes_cpu_instruction_boundary(0xA211, 2); g_cpu.A |= 0x08; FLAG_NZ(g_cpu.A);
label_A213:;
    /* $A213: 8D */ nes_cpu_instruction_boundary(0xA213, 4); nes_write(0x0681, g_cpu.A);
label_A216:; /* UpdateEndTimer_endIf_A */
    /* $A216: AD */ nes_cpu_instruction_boundary(0xA216, 4); g_cpu.A = nes_read(0x010A); FLAG_NZ(g_cpu.A);
label_A219:;
    /* $A219: 0D */ nes_cpu_instruction_boundary(0xA219, 4); g_cpu.A |= nes_read(0x010B); FLAG_NZ(g_cpu.A);
label_A21C:;
    /* $A21C: D0 */ nes_cpu_instruction_boundary(0xA21C, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A237; }
label_A21E:;
    /* $A21E: CE */ nes_cpu_instruction_boundary(0xA21E, 6); { uint16_t a=0x010B; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A221:;
    /* $A221: 85 */ nes_cpu_instruction_boundary(0xA221, 3); nes_write(0x99, g_cpu.A);
label_A223:;
    /* $A223: A9 */ nes_cpu_instruction_boundary(0xA223, 2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_A225:;
    /* $A225: 85 */ nes_cpu_instruction_boundary(0xA225, 3); nes_write(0x98, g_cpu.A);
label_A227:;
    /* $A227: AD */ nes_cpu_instruction_boundary(0xA227, 4); g_cpu.A = nes_read(0x0680); FLAG_NZ(g_cpu.A);
label_A22A:;
    /* $A22A: 09 */ nes_cpu_instruction_boundary(0xA22A, 2); g_cpu.A |= 0x01; FLAG_NZ(g_cpu.A);
label_A22C:;
    /* $A22C: 8D */ nes_cpu_instruction_boundary(0xA22C, 4); nes_write(0x0680, g_cpu.A);
label_A22F:;
    /* $A22F: A9 */ nes_cpu_instruction_boundary(0xA22F, 2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_A231:;
    /* $A231: 85 */ nes_cpu_instruction_boundary(0xA231, 3); nes_write(0x2C, g_cpu.A);
label_A233:;
    /* $A233: A9 */ nes_cpu_instruction_boundary(0xA233, 2); g_cpu.A = 0x0B; FLAG_NZ(g_cpu.A);
label_A235:;
    /* $A235: 85 */ nes_cpu_instruction_boundary(0xA235, 3); nes_write(0x1C, g_cpu.A);
label_A237:; /* UpdateEndTimer_RTS */
    /* $A237: 60 */ nes_cpu_instruction_boundary(0xA237, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A238_b3_body(int _entry) { /* DrawEndTimerEnemy */
    switch (_entry) {
        case 1: goto label_A28A;
    }
label_A238:; /* DrawEndTimerEnemy */
    /* $A238: AD */ nes_cpu_instruction_boundary(0xA238, 4); g_cpu.A = nes_read(0x010D); FLAG_NZ(g_cpu.A);
label_A23B:;
    /* $A23B: F0 */ nes_cpu_instruction_boundary(0xA23B, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A28A; }
label_A23D:;
    /* $A23D: AD */ nes_cpu_instruction_boundary(0xA23D, 4); g_cpu.A = nes_read(0x010C); FLAG_NZ(g_cpu.A);
label_A240:;
    /* $A240: 8D */ nes_cpu_instruction_boundary(0xA240, 4); nes_write(0x6BDB, g_cpu.A);
label_A243:;
    /* $A243: A9 */ nes_cpu_instruction_boundary(0xA243, 2); g_cpu.A = 0x84; FLAG_NZ(g_cpu.A);
label_A245:;
    /* $A245: 8D */ nes_cpu_instruction_boundary(0xA245, 4); nes_write(0x04E0, g_cpu.A);
label_A248:;
    /* $A248: A9 */ nes_cpu_instruction_boundary(0xA248, 2); g_cpu.A = 0x64; FLAG_NZ(g_cpu.A);
label_A24A:;
    /* $A24A: 8D */ nes_cpu_instruction_boundary(0xA24A, 4); nes_write(0x04E1, g_cpu.A);
label_A24D:;
    /* $A24D: A9 */ nes_cpu_instruction_boundary(0xA24D, 2); g_cpu.A = 0x1A; FLAG_NZ(g_cpu.A);
label_A24F:;
    /* $A24F: 8D */ nes_cpu_instruction_boundary(0xA24F, 4); nes_write(0x6BD7, g_cpu.A);
label_A252:;
    /* $A252: A9 */ nes_cpu_instruction_boundary(0xA252, 2); g_cpu.A = 0xE0; FLAG_NZ(g_cpu.A);
label_A254:;
    /* $A254: 85 */ nes_cpu_instruction_boundary(0xA254, 3); nes_write(0x4B, g_cpu.A);
label_A256:;
    /* $A256: A5 */ nes_cpu_instruction_boundary(0xA256, 3); g_cpu.A = nes_read(0x5B); FLAG_NZ(g_cpu.A);
label_A258:;
    /* $A258: 48 */ nes_cpu_instruction_boundary(0xA258, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A259:;
    /* $A259: 20 */ nes_cpu_instruction_boundary(0xA259, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA2; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x5B; g_cpu.S--; func_803C_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA259, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A25C:;
    /* $A25C: 68 */ nes_cpu_instruction_boundary(0xA25C, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A25D:;
    /* $A25D: C5 */ nes_cpu_instruction_boundary(0xA25D, 3); { uint8_t m=nes_read(0x5B); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A25F:;
    /* $A25F: F0 */ nes_cpu_instruction_boundary(0xA25F, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A28A; }
label_A261:;
    /* $A261: AA */ nes_cpu_instruction_boundary(0xA261, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A262:;
    /* $A262: AD */ nes_cpu_instruction_boundary(0xA262, 4); g_cpu.A = nes_read(0x010B); FLAG_NZ(g_cpu.A);
label_A265:;
    /* $A265: 4A */ nes_cpu_instruction_boundary(0xA265, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A266:;
    /* $A266: 4A */ nes_cpu_instruction_boundary(0xA266, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A267:;
    /* $A267: 4A */ nes_cpu_instruction_boundary(0xA267, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A268:;
    /* $A268: 38 */ nes_cpu_instruction_boundary(0xA268, 2); g_cpu.C = 1;
label_A269:;
    /* $A269: 6A */ nes_cpu_instruction_boundary(0xA269, 2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_A26A:;
    /* $A26A: 29 */ nes_cpu_instruction_boundary(0xA26A, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A26C:;
    /* $A26C: 09 */ nes_cpu_instruction_boundary(0xA26C, 2); g_cpu.A |= 0xA0; FLAG_NZ(g_cpu.A);
label_A26E:;
    /* $A26E: 9D */ nes_cpu_instruction_boundary(0xA26E, 5); nes_write((0x0201 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A271:;
    /* $A271: AD */ nes_cpu_instruction_boundary(0xA271, 4); g_cpu.A = nes_read(0x010B); FLAG_NZ(g_cpu.A);
label_A274:;
    /* $A274: 29 */ nes_cpu_instruction_boundary(0xA274, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A276:;
    /* $A276: 09 */ nes_cpu_instruction_boundary(0xA276, 2); g_cpu.A |= 0xA0; FLAG_NZ(g_cpu.A);
label_A278:;
    /* $A278: 9D */ nes_cpu_instruction_boundary(0xA278, 5); nes_write((0x0205 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A27B:;
    /* $A27B: AD */ nes_cpu_instruction_boundary(0xA27B, 4); g_cpu.A = nes_read(0x010A); FLAG_NZ(g_cpu.A);
label_A27E:;
    /* $A27E: 4A */ nes_cpu_instruction_boundary(0xA27E, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A27F:;
    /* $A27F: 4A */ nes_cpu_instruction_boundary(0xA27F, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A280:;
    /* $A280: 4A */ nes_cpu_instruction_boundary(0xA280, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A281:;
    /* $A281: 38 */ nes_cpu_instruction_boundary(0xA281, 2); g_cpu.C = 1;
label_A282:;
    /* $A282: 6A */ nes_cpu_instruction_boundary(0xA282, 2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_A283:;
    /* $A283: 29 */ nes_cpu_instruction_boundary(0xA283, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A285:;
    /* $A285: 09 */ nes_cpu_instruction_boundary(0xA285, 2); g_cpu.A |= 0xA0; FLAG_NZ(g_cpu.A);
label_A287:;
    /* $A287: 9D */ nes_cpu_instruction_boundary(0xA287, 5); nes_write((0x0209 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A28A:; /* DrawEndTimerEnemy_RTS */
    /* $A28A: 60 */ nes_cpu_instruction_boundary(0xA28A, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A238_b3(void) { /* DrawEndTimerEnemy */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A238_b3");
#endif
    func_A238_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A28A_b3(void) { /* DrawEndTimerEnemy_RTS */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A28A_b3");
#endif
    func_A238_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A28B_b3_body(int _entry) { /* UpdateAllZebetites */
    switch (_entry) {
        case 1: goto label_A29B;
        case 2: goto label_A29E;
    }
label_A28B:; /* UpdateAllZebetites */
    /* $A28B: A9 */ nes_cpu_instruction_boundary(0xA28B, 2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_A28D:;
    /* $A28D: 85 */ nes_cpu_instruction_boundary(0xA28D, 3); nes_write(0x4B, g_cpu.A);
label_A28F:;
    /* $A28F: A2 */ nes_cpu_instruction_boundary(0xA28F, 2); g_cpu.X = 0x20; FLAG_NZ(g_cpu.X);
label_A291:; /* UpdateAllZebetites_loop */
    /* $A291: 20 */ nes_cpu_instruction_boundary(0xA291, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA2; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; func_A29B_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA291, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A294:;
    /* $A294: 8A */ nes_cpu_instruction_boundary(0xA294, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A295:;
    /* $A295: 38 */ nes_cpu_instruction_boundary(0xA295, 2); g_cpu.C = 1;
label_A296:;
    /* $A296: E9 */ nes_cpu_instruction_boundary(0xA296, 2); { uint8_t m=0x08; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A298:;
    /* $A298: AA */ nes_cpu_instruction_boundary(0xA298, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A299:;
    /* $A299: D0 */ nes_cpu_instruction_boundary(0xA299, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xA291, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A291;
    }
label_A29B:; /* UpdateZebetite */
    /* $A29B: BD */ nes_cpu_instruction_boundary(0xA29B, 4); g_cpu.A = nes_read((0x0758 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A29E:;
    /* $A29E: 29 */ nes_cpu_instruction_boundary(0xA29E, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A2A0:;
    /* $A2A0: C9 */ nes_cpu_instruction_boundary(0xA2A0, 2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_A2A2:;
    /* $A2A2: D0 */ nes_cpu_instruction_boundary(0xA2A2, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xA28A); return; }
label_A2A4:;
    /* $A2A4: BD */ nes_cpu_instruction_boundary(0xA2A4, 4); g_cpu.A = nes_read((0x075D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A2A7:;
    /* $A2A7: F0 */ nes_cpu_instruction_boundary(0xA2A7, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A2F2; }
label_A2A9:;
    /* $A2A9: FE */ nes_cpu_instruction_boundary(0xA2A9, 7); { uint16_t a=(0x075B + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A2AC:;
    /* $A2AC: BD */ nes_cpu_instruction_boundary(0xA2AC, 4); g_cpu.A = nes_read((0x075B + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A2AF:;
    /* $A2AF: 4A */ nes_cpu_instruction_boundary(0xA2AF, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A2B0:;
    /* $A2B0: B0 */ nes_cpu_instruction_boundary(0xA2B0, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A2F2; }
label_A2B2:;
    /* $A2B2: A8 */ nes_cpu_instruction_boundary(0xA2B2, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A2B3:;
    /* $A2B3: E9 */ nes_cpu_instruction_boundary(0xA2B3, 2); { uint8_t m=0x03; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A2B5:;
    /* $A2B5: D0 */ nes_cpu_instruction_boundary(0xA2B5, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A2BA; }
label_A2B7:;
    /* $A2B7: FE */ nes_cpu_instruction_boundary(0xA2B7, 7); { uint16_t a=(0x0758 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A2BA:;
    /* $A2BA: B9 */ nes_cpu_instruction_boundary(0xA2BA, 4); g_cpu.A = nes_read((0xA310 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A2BD:;
    /* $A2BD: 8D */ nes_cpu_instruction_boundary(0xA2BD, 4); nes_write(0x0513, g_cpu.A);
label_A2C0:;
    /* $A2C0: BD */ nes_cpu_instruction_boundary(0xA2C0, 4); g_cpu.A = nes_read((0x0759 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A2C3:;
    /* $A2C3: 8D */ nes_cpu_instruction_boundary(0xA2C3, 4); nes_write(0x0518, g_cpu.A);
label_A2C6:;
    /* $A2C6: BD */ nes_cpu_instruction_boundary(0xA2C6, 4); g_cpu.A = nes_read((0x075A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A2C9:;
    /* $A2C9: 8D */ nes_cpu_instruction_boundary(0xA2C9, 4); nes_write(0x0519, g_cpu.A);
label_A2CC:;
    /* $A2CC: AD */ nes_cpu_instruction_boundary(0xA2CC, 4); g_cpu.A = nes_read(0x07A0); FLAG_NZ(g_cpu.A);
label_A2CF:;
    /* $A2CF: D0 */ nes_cpu_instruction_boundary(0xA2CF, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A2DA; }
label_A2D1:;
    /* $A2D1: 8A */ nes_cpu_instruction_boundary(0xA2D1, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A2D2:;
    /* $A2D2: 48 */ nes_cpu_instruction_boundary(0xA2D2, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A2D3:;
    /* $A2D3: 20 */ nes_cpu_instruction_boundary(0xA2D3, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA2; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD5; g_cpu.S--; func_803F_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA2D3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A2D6:;
    /* $A2D6: 68 */ nes_cpu_instruction_boundary(0xA2D6, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A2D7:;
    /* $A2D7: AA */ nes_cpu_instruction_boundary(0xA2D7, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A2D8:;
    /* $A2D8: 90 */ nes_cpu_instruction_boundary(0xA2D8, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A2EB; }
label_A2DA:;
    /* $A2DA: BD */ nes_cpu_instruction_boundary(0xA2DA, 4); g_cpu.A = nes_read((0x0758 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A2DD:;
    /* $A2DD: 29 */ nes_cpu_instruction_boundary(0xA2DD, 2); g_cpu.A &= 0x80; FLAG_NZ(g_cpu.A);
label_A2DF:;
    /* $A2DF: 09 */ nes_cpu_instruction_boundary(0xA2DF, 2); g_cpu.A |= 0x01; FLAG_NZ(g_cpu.A);
label_A2E1:;
    /* $A2E1: 9D */ nes_cpu_instruction_boundary(0xA2E1, 5); nes_write((0x0758 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A2E4:;
    /* $A2E4: 9D */ nes_cpu_instruction_boundary(0xA2E4, 5); nes_write((0x075D + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A2E7:;
    /* $A2E7: DE */ nes_cpu_instruction_boundary(0xA2E7, 7); { uint16_t a=(0x075B + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A2EA:;
    /* $A2EA: 60 */ nes_cpu_instruction_boundary(0xA2EA, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A2EB:;
    /* $A2EB: A9 */ nes_cpu_instruction_boundary(0xA2EB, 2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_A2ED:;
    /* $A2ED: 9D */ nes_cpu_instruction_boundary(0xA2ED, 5); nes_write((0x075C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A2F0:;
    /* $A2F0: D0 */ nes_cpu_instruction_boundary(0xA2F0, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_A30A; }
label_A2F2:;
    /* $A2F2: BC */ nes_cpu_instruction_boundary(0xA2F2, 4); g_cpu.Y = nes_read((0x075B + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_A2F5:;
    /* $A2F5: F0 */ nes_cpu_instruction_boundary(0xA2F5, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_A30A; }
label_A2F7:;
    /* $A2F7: DE */ nes_cpu_instruction_boundary(0xA2F7, 7); { uint16_t a=(0x075C + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A2FA:;
    /* $A2FA: D0 */ nes_cpu_instruction_boundary(0xA2FA, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_A30A; }
label_A2FC:;
    /* $A2FC: A9 */ nes_cpu_instruction_boundary(0xA2FC, 2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_A2FE:;
    /* $A2FE: 9D */ nes_cpu_instruction_boundary(0xA2FE, 5); nes_write((0x075C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A301:;
    /* $A301: 88 */ nes_cpu_instruction_boundary(0xA301, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A302:;
    /* $A302: 98 */ nes_cpu_instruction_boundary(0xA302, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A303:;
    /* $A303: 9D */ nes_cpu_instruction_boundary(0xA303, 5); nes_write((0x075B + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A306:;
    /* $A306: 4A */ nes_cpu_instruction_boundary(0xA306, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A307:;
    /* $A307: A8 */ nes_cpu_instruction_boundary(0xA307, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A308:;
    /* $A308: 90 */ nes_cpu_instruction_boundary(0xA308, 2); if (!g_cpu.C) {
    nes_cpu_instruction_boundary(0xA2BA, 2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A2BA;
    }
label_A30A:;
    /* $A30A: A9 */ nes_cpu_instruction_boundary(0xA30A, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A30C:;
    /* $A30C: 9D */ nes_cpu_instruction_boundary(0xA30C, 5); nes_write((0x075D + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A30F:;
    /* $A30F: 60 */ nes_cpu_instruction_boundary(0xA30F, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A28B_b3(void) { /* UpdateAllZebetites */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A28B_b3");
#endif
    func_A28B_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A29B_b3(void) { /* UpdateZebetite */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A29B_b3");
#endif
    func_A28B_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A29E_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A29E_b3");
#endif
    func_A28B_b3_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A15E_b3_body(int _entry) { /* UpdateAllRinkaSpawners */
    switch (_entry) {
        case 1: goto label_A16B;
    }
label_A15E:; /* UpdateAllRinkaSpawners */
    /* $A15E: AC */ nes_cpu_instruction_boundary(0xA15E, 4); g_cpu.Y = nes_read(0x010B); FLAG_NZ(g_cpu.Y);
label_A161:;
    /* $A161: C8 */ nes_cpu_instruction_boundary(0xA161, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A162:;
    /* $A162: D0 */ nes_cpu_instruction_boundary(0xA162, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A1DA; }
label_A164:;
    /* $A164: A0 */ nes_cpu_instruction_boundary(0xA164, 2); g_cpu.Y = 0x03; FLAG_NZ(g_cpu.Y);
label_A166:;
    /* $A166: 20 */ nes_cpu_instruction_boundary(0xA166, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x68; g_cpu.S--; func_A16B_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA166, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A169:;
    /* $A169: A0 */ nes_cpu_instruction_boundary(0xA169, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A16B:; /* UpdateAllRinkaSpawners_subroutine */
    /* $A16B: 84 */ nes_cpu_instruction_boundary(0xA16B, 3); nes_write(0x4B, g_cpu.Y);
label_A16D:;
    /* $A16D: B9 */ nes_cpu_instruction_boundary(0xA16D, 4); g_cpu.A = nes_read((0x008B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A170:;
    /* $A170: 30 */ nes_cpu_instruction_boundary(0xA170, 2); if (g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xA15D); return; }
label_A172:;
    /* $A172: B9 */ nes_cpu_instruction_boundary(0xA172, 4); g_cpu.A = nes_read((0x008C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A175:;
    /* $A175: 45 */ nes_cpu_instruction_boundary(0xA175, 3); g_cpu.A ^= nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_A177:;
    /* $A177: 4A */ nes_cpu_instruction_boundary(0xA177, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A178:;
    /* $A178: 90 */ nes_cpu_instruction_boundary(0xA178, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xA15D); return; }
label_A17A:;
    /* $A17A: A5 */ nes_cpu_instruction_boundary(0xA17A, 3); g_cpu.A = nes_read(0x98); FLAG_NZ(g_cpu.A);
label_A17C:;
    /* $A17C: C9 */ nes_cpu_instruction_boundary(0xA17C, 2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A17E:;
    /* $A17E: B0 */ nes_cpu_instruction_boundary(0xA17E, 2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xA15D); return; }
label_A180:;
    /* $A180: A5 */ nes_cpu_instruction_boundary(0xA180, 3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_A182:;
    /* $A182: 29 */ nes_cpu_instruction_boundary(0xA182, 2); g_cpu.A &= 0x06; FLAG_NZ(g_cpu.A);
label_A184:;
    /* $A184: D0 */ nes_cpu_instruction_boundary(0xA184, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xA15D); return; }
label_A186:;
    /* $A186: A2 */ nes_cpu_instruction_boundary(0xA186, 2); g_cpu.X = 0x20; FLAG_NZ(g_cpu.X);
label_A188:; /* UpdateAllRinkaSpawners_loop */
    /* $A188: BD */ nes_cpu_instruction_boundary(0xA188, 4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A18B:;
    /* $A18B: F0 */ nes_cpu_instruction_boundary(0xA18B, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A19C; }
label_A18D:;
    /* $A18D: BD */ nes_cpu_instruction_boundary(0xA18D, 4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A190:;
    /* $A190: 29 */ nes_cpu_instruction_boundary(0xA190, 2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_A192:;
    /* $A192: F0 */ nes_cpu_instruction_boundary(0xA192, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A19C; }
label_A194:;
    /* $A194: 8A */ nes_cpu_instruction_boundary(0xA194, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A195:;
    /* $A195: 38 */ nes_cpu_instruction_boundary(0xA195, 2); g_cpu.C = 1;
label_A196:;
    /* $A196: E9 */ nes_cpu_instruction_boundary(0xA196, 2); { uint8_t m=0x10; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A198:;
    /* $A198: AA */ nes_cpu_instruction_boundary(0xA198, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A199:;
    /* $A199: 10 */ nes_cpu_instruction_boundary(0xA199, 2); if (!g_cpu.N) {
    nes_cpu_instruction_boundary(0xA188, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A188;
    }
label_A19B:;
    /* $A19B: 60 */ nes_cpu_instruction_boundary(0xA19B, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A19C:; /* UpdateAllRinkaSpawners_slotFound */
    /* $A19C: A9 */ nes_cpu_instruction_boundary(0xA19C, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_A19E:;
    /* $A19E: 9D */ nes_cpu_instruction_boundary(0xA19E, 5); nes_write((0x6AF4 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A1A1:;
    /* $A1A1: A9 */ nes_cpu_instruction_boundary(0xA1A1, 2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_A1A3:;
    /* $A1A3: 9D */ nes_cpu_instruction_boundary(0xA1A3, 5); nes_write((0x6B02 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A1A6:;
    /* $A1A6: A9 */ nes_cpu_instruction_boundary(0xA1A6, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A1A8:;
    /* $A1A8: 9D */ nes_cpu_instruction_boundary(0xA1A8, 5); nes_write((0x040F + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A1AB:;
    /* $A1AB: 9D */ nes_cpu_instruction_boundary(0xA1AB, 5); nes_write((0x0404 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A1AE:;
    /* $A1AE: 20 */ nes_cpu_instruction_boundary(0xA1AE, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB0; g_cpu.S--; func_802A_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA1AE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A1B1:;
    /* $A1B1: A9 */ nes_cpu_instruction_boundary(0xA1B1, 2); g_cpu.A = 0xF7; FLAG_NZ(g_cpu.A);
label_A1B3:;
    /* $A1B3: 9D */ nes_cpu_instruction_boundary(0xA1B3, 5); nes_write((0x6AF7 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A1B6:;
    /* $A1B6: A4 */ nes_cpu_instruction_boundary(0xA1B6, 3); g_cpu.Y = nes_read(0x4B); FLAG_NZ(g_cpu.Y);
label_A1B8:;
    /* $A1B8: B9 */ nes_cpu_instruction_boundary(0xA1B8, 4); g_cpu.A = nes_read((0x008C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A1BB:;
    /* $A1BB: 9D */ nes_cpu_instruction_boundary(0xA1BB, 5); nes_write((0x6AFB + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A1BE:;
    /* $A1BE: B9 */ nes_cpu_instruction_boundary(0xA1BE, 4); g_cpu.A = nes_read((0x008D + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A1C1:;
    /* $A1C1: 0A */ nes_cpu_instruction_boundary(0xA1C1, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A1C2:;
    /* $A1C2: 19 */ nes_cpu_instruction_boundary(0xA1C2, 4); g_cpu.A |= nes_read((0x008B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A1C5:;
    /* $A1C5: A8 */ nes_cpu_instruction_boundary(0xA1C5, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A1C6:;
    /* $A1C6: B9 */ nes_cpu_instruction_boundary(0xA1C6, 4); g_cpu.A = nes_read((0xA1DB + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A1C9:;
    /* $A1C9: 20 */ nes_cpu_instruction_boundary(0xA1C9, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCB; g_cpu.S--; func_9EE7_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA1C9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A1CC:;
    /* $A1CC: A6 */ nes_cpu_instruction_boundary(0xA1CC, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_A1CE:;
    /* $A1CE: F6 */ nes_cpu_instruction_boundary(0xA1CE, 6); { uint16_t a=(0x8D + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A1D0:;
    /* $A1D0: B5 */ nes_cpu_instruction_boundary(0xA1D0, 4); g_cpu.A = nes_read((0x8D + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A1D2:;
    /* $A1D2: C9 */ nes_cpu_instruction_boundary(0xA1D2, 2); { int r=g_cpu.A-0x06; g_cpu.C=(g_cpu.A>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_A1D4:;
    /* $A1D4: D0 */ nes_cpu_instruction_boundary(0xA1D4, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A1DA; }
label_A1D6:;
    /* $A1D6: A9 */ nes_cpu_instruction_boundary(0xA1D6, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A1D8:;
    /* $A1D8: 95 */ nes_cpu_instruction_boundary(0xA1D8, 4); nes_write((0x8D + g_cpu.X) & 0xFF, g_cpu.A);
label_A1DA:;
    /* $A1DA: 60 */ nes_cpu_instruction_boundary(0xA1DA, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A15E_b3(void) { /* UpdateAllRinkaSpawners */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A15E_b3");
#endif
    func_A15E_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A16B_b3(void) { /* UpdateAllRinkaSpawners_subroutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A16B_b3");
#endif
    func_A15E_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8BD5_b3(void) { /* UpdateDoor_Closed */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8BD5_b3");
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
    /* $8BFE: 4C */ nes_cpu_instruction_boundary(0x8BFE, 3); nes_cpu_instruction_boundary(0x8C7E, 2); func_8C7E_b3(); return;
}

void func_8C01_b3_body(int _entry) { /* UpdateDoor_Open */
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
    /* $8C2C: 20 */ nes_cpu_instruction_boundary(0x8C2C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2E; g_cpu.S--; func_8CF7_b3();
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
    /* $8C66: 20 */ nes_cpu_instruction_boundary(0x8C66, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x68; g_cpu.S--; func_8CFB_b3();
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
    /* $8C6E: 20 */ nes_cpu_instruction_boundary(0x8C6E, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x70; g_cpu.S--; func_8C76_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8C6E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8C71:; /* DoorSubRoutine8C71 */
    /* $8C71: A6 */ nes_cpu_instruction_boundary(0x8C71, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_8C73:; /* GotoDrawDoor */
    /* $8C73: 4C */ nes_cpu_instruction_boundary(0x8C73, 3); nes_cpu_instruction_boundary(0x8BB1, 2); func_8BB1_b3(); return;
}

void func_8C01_b3(void) { /* UpdateDoor_Open */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C01_b3");
#endif
    func_8C01_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8C71_b3(void) { /* DoorSubRoutine8C71 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C71_b3");
#endif
    func_8C01_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8C61_b3(void) { /* DoorSubRoutine8C61 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C61_b3");
#endif
    func_8C01_b3_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8C84_b3(void) { /* UpdateDoor_LetSamusIn */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C84_b3");
#endif
label_8C84:; /* UpdateDoor_LetSamusIn */
    /* $8C84: A5 */ nes_cpu_instruction_boundary(0x8C84, 3); g_cpu.A = nes_read(0x56); FLAG_NZ(g_cpu.A);
label_8C86:;
    /* $8C86: C9 */ nes_cpu_instruction_boundary(0x8C86, 2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_8C88:;
    /* $8C88: B0 */ nes_cpu_instruction_boundary(0x8C88, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8CC3; }
label_8C8A:;
    /* $8C8A: 20 */ nes_cpu_instruction_boundary(0x8C8A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; func_8CFB_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8C8A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8C8D:;
    /* $8C8D: 20 */ nes_cpu_instruction_boundary(0x8C8D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; func_8C76_b3();
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
    /* $8CC3: 4C */ nes_cpu_instruction_boundary(0x8CC3, 3); nes_cpu_instruction_boundary(0x8C71, 2); func_8C71_b3(); return;
}

void func_8CC6_b3_body(int _entry) { /* UpdateDoor_Scroll */
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
    /* $8CED: 4C */ nes_cpu_instruction_boundary(0x8CED, 3); nes_cpu_instruction_boundary(0x8BB1, 2); func_8BB1_b3(); return;
}

void func_8CC6_b3(void) { /* UpdateDoor_Scroll */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8CC6_b3");
#endif
    func_8CC6_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8CED_b3(void) { /* Goto2DrawDoor */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8CED_b3");
#endif
    func_8CC6_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8CCF_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8CCF_b3");
#endif
    func_8CC6_b3_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8CF0_b3(void) { /* UpdateDoor_LetSamusOut */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8CF0_b3");
#endif
label_8CF0:; /* UpdateDoor_LetSamusOut */
    /* $8CF0: A5 */ nes_cpu_instruction_boundary(0x8CF0, 3); g_cpu.A = nes_read(0x56); FLAG_NZ(g_cpu.A);
label_8CF2:;
    /* $8CF2: D0 */ nes_cpu_instruction_boundary(0x8CF2, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0x8CED); return; }
label_8CF4:;
    /* $8CF4: 4C */ nes_cpu_instruction_boundary(0x8CF4, 3); nes_cpu_instruction_boundary(0x8C61, 2); func_8C61_b3(); return;
}

void func_81B8_b3(void) { /* EnemyTriggerResting */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81B8_b3");
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

void func_9D64_b3(void) { /* GetRoomRAMPtrHi */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9D64_b3");
#endif
label_9D64:; /* GetRoomRAMPtrHi */
    /* $9D64: 20 */ nes_cpu_instruction_boundary(0x9D64, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9D; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x66; g_cpu.S--; func_9D88_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9D64, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9D67:;
    /* $9D67: 0A */ nes_cpu_instruction_boundary(0x9D67, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9D68:;
    /* $9D68: 0A */ nes_cpu_instruction_boundary(0x9D68, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9D69:;
    /* $9D69: 09 */ nes_cpu_instruction_boundary(0x9D69, 2); g_cpu.A |= 0x61; FLAG_NZ(g_cpu.A);
label_9D6B:;
    /* $9D6B: 60 */ nes_cpu_instruction_boundary(0x9D6B, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9CD6_b3(void) { /* DeleteOffscreenRoomSprites_Tourian_rinkaSpawner */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9CD6_b3");
#endif
label_9CD6:; /* DeleteOffscreenRoomSprites_Tourian_rinkaSpawner */
    /* $9CD6: B5 */ nes_cpu_instruction_boundary(0x9CD6, 4); g_cpu.A = nes_read((0x8B + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9CD8:;
    /* $9CD8: 30 */ nes_cpu_instruction_boundary(0x9CD8, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_9CE5; }
label_9CDA:;
    /* $9CDA: B5 */ nes_cpu_instruction_boundary(0x9CDA, 4); g_cpu.A = nes_read((0x8C + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9CDC:;
    /* $9CDC: 45 */ nes_cpu_instruction_boundary(0x9CDC, 3); g_cpu.A ^= nes_read(0x02); FLAG_NZ(g_cpu.A);
label_9CDE:;
    /* $9CDE: 4A */ nes_cpu_instruction_boundary(0x9CDE, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9CDF:;
    /* $9CDF: B0 */ nes_cpu_instruction_boundary(0x9CDF, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9CE5; }
label_9CE1:;
    /* $9CE1: A9 */ nes_cpu_instruction_boundary(0x9CE1, 2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_9CE3:;
    /* $9CE3: 95 */ nes_cpu_instruction_boundary(0x9CE3, 4); nes_write((0x8B + g_cpu.X) & 0xFF, g_cpu.A);
label_9CE5:; /* DeleteOffscreenRoomSprites_Tourian_RTS */
    /* $9CE5: 60 */ nes_cpu_instruction_boundary(0x9CE5, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_803F_b3(void) { /* CommonJump_DrawTileBlast */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_803F_b3");
#endif
label_803F:; /* CommonJump_DrawTileBlast */
    /* $803F: 4C */ nes_cpu_instruction_boundary(0x803F, 3); nes_cpu_instruction_boundary(0xFEDC, 2); func_FEDC(); return;
}

void func_9B20_b3(void) { /* Amul16_ */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9B20_b3");
#endif
label_9B20:; /* Amul16_ */
    /* $9B20: 0A */ nes_cpu_instruction_boundary(0x9B20, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9B21:;
    /* $9B21: 0A */ nes_cpu_instruction_boundary(0x9B21, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9B22:;
    /* $9B22: 0A */ nes_cpu_instruction_boundary(0x9B22, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9B23:;
    /* $9B23: 0A */ nes_cpu_instruction_boundary(0x9B23, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9B24:;
    /* $9B24: 60 */ nes_cpu_instruction_boundary(0x9B24, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9D88_b3(void) { /* GetNameTableAtScrollDir_ */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9D88_b3");
#endif
label_9D88:; /* GetNameTableAtScrollDir_ */
    /* $9D88: A5 */ nes_cpu_instruction_boundary(0x9D88, 3); g_cpu.A = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_9D8A:;
    /* $9D8A: 45 */ nes_cpu_instruction_boundary(0x9D8A, 3); g_cpu.A ^= nes_read(0x49); FLAG_NZ(g_cpu.A);
label_9D8C:;
    /* $9D8C: 29 */ nes_cpu_instruction_boundary(0x9D8C, 2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_9D8E:;
    /* $9D8E: 60 */ nes_cpu_instruction_boundary(0x9D8E, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A142_b3(void) { /* UpdateBullet_CollisionWithMotherBrain */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A142_b3");
#endif
label_A142:; /* UpdateBullet_CollisionWithMotherBrain */
    /* $A142: A8 */ nes_cpu_instruction_boundary(0xA142, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A143:;
    /* $A143: A5 */ nes_cpu_instruction_boundary(0xA143, 3); g_cpu.A = nes_read(0x71); FLAG_NZ(g_cpu.A);
label_A145:;
    /* $A145: F0 */ nes_cpu_instruction_boundary(0xA145, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A15C; }
label_A147:;
    /* $A147: A6 */ nes_cpu_instruction_boundary(0xA147, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_A149:;
    /* $A149: BD */ nes_cpu_instruction_boundary(0xA149, 4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A14C:;
    /* $A14C: C9 */ nes_cpu_instruction_boundary(0xA14C, 2); { int r=g_cpu.A-0x0B; g_cpu.C=(g_cpu.A>=0x0B)?1:0; FLAG_NZ(r&0xFF); }
label_A14E:;
    /* $A14E: D0 */ nes_cpu_instruction_boundary(0xA14E, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A15C; }
label_A150:;
    /* $A150: C0 */ nes_cpu_instruction_boundary(0xA150, 2); { int r=g_cpu.Y-0x5E; g_cpu.C=(g_cpu.Y>=0x5E)?1:0; FLAG_NZ(r&0xFF); }
label_A152:;
    /* $A152: 90 */ nes_cpu_instruction_boundary(0xA152, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A15C; }
label_A154:;
    /* $A154: C0 */ nes_cpu_instruction_boundary(0xA154, 2); { int r=g_cpu.Y-0x72; g_cpu.C=(g_cpu.Y>=0x72)?1:0; FLAG_NZ(r&0xFF); }
label_A156:;
    /* $A156: B0 */ nes_cpu_instruction_boundary(0xA156, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A15C; }
label_A158:;
    /* $A158: A9 */ nes_cpu_instruction_boundary(0xA158, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_A15A:;
    /* $A15A: 85 */ nes_cpu_instruction_boundary(0xA15A, 3); nes_write(0x9E, g_cpu.A);
label_A15C:; /* UpdateBullet_CollisionWithMotherBrain_exit */
    /* $A15C: 98 */ nes_cpu_instruction_boundary(0xA15C, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A15D:;
    /* $A15D: 60 */ nes_cpu_instruction_boundary(0xA15D, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_95BD_b3(void) { /* GotoUpdateBullet_CollisionWithZebetiteAndMotherBrainGlass */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95BD_b3");
#endif
label_95BD:; /* GotoUpdateBullet_CollisionWithZebetiteAndMotherBrainGlass */
    /* $95BD: 4C */ nes_cpu_instruction_boundary(0x95BD, 3); nes_cpu_instruction_boundary(0xA0C6, 2); func_A0C6_b3(); return;
}

void func_9C4D_b3(void) { /* UpdateCannon_CheckIfOnScreen */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9C4D_b3");
#endif
label_9C4D:; /* UpdateCannon_CheckIfOnScreen */
    /* $9C4D: A0 */ nes_cpu_instruction_boundary(0x9C4D, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_9C4F:;
    /* $9C4F: BD */ nes_cpu_instruction_boundary(0x9C4F, 4); g_cpu.A = nes_read((0x6BF6 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C52:;
    /* $9C52: C5 */ nes_cpu_instruction_boundary(0x9C52, 3); { uint8_t m=nes_read(0xFD); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9C54:;
    /* $9C54: A5 */ nes_cpu_instruction_boundary(0x9C54, 3); g_cpu.A = nes_read(0x49); FLAG_NZ(g_cpu.A);
label_9C56:;
    /* $9C56: 29 */ nes_cpu_instruction_boundary(0x9C56, 2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9C58:;
    /* $9C58: D0 */ nes_cpu_instruction_boundary(0x9C58, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9C5F; }
label_9C5A:;
    /* $9C5A: BD */ nes_cpu_instruction_boundary(0x9C5A, 4); g_cpu.A = nes_read((0x6BF5 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C5D:;
    /* $9C5D: C5 */ nes_cpu_instruction_boundary(0x9C5D, 3); { uint8_t m=nes_read(0xFC); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9C5F:; /* UpdateCannon_CheckIfOnScreen_endIf_A */
    /* $9C5F: BD */ nes_cpu_instruction_boundary(0x9C5F, 4); g_cpu.A = nes_read((0x6BF7 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C62:;
    /* $9C62: 45 */ nes_cpu_instruction_boundary(0x9C62, 3); g_cpu.A ^= nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_9C64:;
    /* $9C64: 29 */ nes_cpu_instruction_boundary(0x9C64, 2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_9C66:;
    /* $9C66: F0 */ nes_cpu_instruction_boundary(0x9C66, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9C6B; }
label_9C68:;
    /* $9C68: B0 */ nes_cpu_instruction_boundary(0x9C68, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9C6D; }
label_9C6A:;
    /* $9C6A: 38 */ nes_cpu_instruction_boundary(0x9C6A, 2); g_cpu.C = 1;
label_9C6B:; /* UpdateCannon_CheckIfOnScreen_endIf_B */
    /* $9C6B: B0 */ nes_cpu_instruction_boundary(0x9C6B, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9C6E; }
label_9C6D:; /* UpdateCannon_CheckIfOnScreen_return_y1 */
    /* $9C6D: C8 */ nes_cpu_instruction_boundary(0x9C6D, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9C6E:; /* UpdateCannon_CheckIfOnScreen_return_y0 */
    /* $9C6E: 60 */ nes_cpu_instruction_boundary(0x9C6E, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9B70_b3_body(int _entry) { /* UpdateCannon_RunInstructions */
    switch (_entry) {
        case 1: goto label_9B84;
    }
label_9B70:; /* UpdateCannon_RunInstructions */
    /* $9B70: BC */ nes_cpu_instruction_boundary(0x9B70, 4); g_cpu.Y = nes_read((0x6BF8 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_9B73:;
    /* $9B73: BD */ nes_cpu_instruction_boundary(0x9B73, 4); g_cpu.A = nes_read((0x6BFA + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B76:;
    /* $9B76: D0 */ nes_cpu_instruction_boundary(0x9B76, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9B81; }
label_9B78:;
    /* $9B78: B9 */ nes_cpu_instruction_boundary(0x9B78, 4); g_cpu.A = nes_read((0x9D8F + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B7B:;
    /* $9B7B: 9D */ nes_cpu_instruction_boundary(0x9B7B, 5); nes_write((0x6BFA + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9B7E:;
    /* $9B7E: FE */ nes_cpu_instruction_boundary(0x9B7E, 7); { uint16_t a=(0x6BFB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9B81:; /* UpdateCannon_RunInstructions_endIf_A */
    /* $9B81: DE */ nes_cpu_instruction_boundary(0x9B81, 7); { uint16_t a=(0x6BFA + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9B84:; /* UpdateCannon_RunInstructions_getInstruction */
    /* $9B84: B9 */ nes_cpu_instruction_boundary(0x9B84, 4); g_cpu.A = nes_read((0x9D94 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B87:;
    /* $9B87: 18 */ nes_cpu_instruction_boundary(0x9B87, 2); g_cpu.C = 0;
label_9B88:;
    /* $9B88: 7D */ nes_cpu_instruction_boundary(0x9B88, 4); { uint8_t m=nes_read((0x6BFB + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9B8B:;
    /* $9B8B: A8 */ nes_cpu_instruction_boundary(0x9B8B, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9B8C:;
    /* $9B8C: B9 */ nes_cpu_instruction_boundary(0x9B8C, 4); g_cpu.A = nes_read((0x9D99 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B8F:;
    /* $9B8F: 10 */ nes_cpu_instruction_boundary(0x9B8F, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_9BAB; }
label_9B91:;
    /* $9B91: C9 */ nes_cpu_instruction_boundary(0x9B91, 2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_9B93:;
    /* $9B93: D0 */ nes_cpu_instruction_boundary(0x9B93, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9B9F; }
label_9B95:;
    /* $9B95: BC */ nes_cpu_instruction_boundary(0x9B95, 4); g_cpu.Y = nes_read((0x6BF8 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_9B98:;
    /* $9B98: A9 */ nes_cpu_instruction_boundary(0x9B98, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9B9A:;
    /* $9B9A: 9D */ nes_cpu_instruction_boundary(0x9B9A, 5); nes_write((0x6BFB + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9B9D:;
    /* $9B9D: F0 */ nes_cpu_instruction_boundary(0x9B9D, 2); if (g_cpu.Z) {
    nes_cpu_instruction_boundary(0x9B84, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9B84;
    }
label_9B9F:; /* UpdateCannon_RunInstructions_shootEnProjectile */
    /* $9B9F: FE */ nes_cpu_instruction_boundary(0x9B9F, 7); { uint16_t a=(0x6BFB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9BA2:;
    /* $9BA2: 20 */ nes_cpu_instruction_boundary(0x9BA2, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA4; g_cpu.S--; func_9BAF_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9BA2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9BA5:;
    /* $9BA5: BC */ nes_cpu_instruction_boundary(0x9BA5, 4); g_cpu.Y = nes_read((0x6BF8 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_9BA8:;
    /* $9BA8: 4C */ nes_cpu_instruction_boundary(0x9BA8, 3); nes_cpu_instruction_boundary(0x9B84, 2);
    goto label_9B84;
label_9BAB:; /* UpdateCannon_RunInstructions_setAngle */
    /* $9BAB: 9D */ nes_cpu_instruction_boundary(0x9BAB, 5); nes_write((0x6BF9 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9BAE:;
    /* $9BAE: 60 */ nes_cpu_instruction_boundary(0x9BAE, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9B70_b3(void) { /* UpdateCannon_RunInstructions */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9B70_b3");
#endif
    func_9B70_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9B84_b3(void) { /* UpdateCannon_RunInstructions_getInstruction */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9B84_b3");
#endif
    func_9B70_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9C2B_b3(void) { /* DrawCannon_Normal */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9C2B_b3");
#endif
label_9C2B:; /* DrawCannon_Normal */
    /* $9C2B: BC */ nes_cpu_instruction_boundary(0x9C2B, 4); g_cpu.Y = nes_read((0x6BF9 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_9C2E:;
    /* $9C2E: B9 */ nes_cpu_instruction_boundary(0x9C2E, 4); g_cpu.A = nes_read((0x9DC6 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C31:; /* DrawCannon_Escape */
    /* $9C31: 8D */ nes_cpu_instruction_boundary(0x9C31, 4); nes_write(0x6BD7, g_cpu.A);
label_9C34:;
    /* $9C34: BD */ nes_cpu_instruction_boundary(0x9C34, 4); g_cpu.A = nes_read((0x6BF5 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C37:;
    /* $9C37: 8D */ nes_cpu_instruction_boundary(0x9C37, 4); nes_write(0x04E0, g_cpu.A);
label_9C3A:;
    /* $9C3A: BD */ nes_cpu_instruction_boundary(0x9C3A, 4); g_cpu.A = nes_read((0x6BF6 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C3D:;
    /* $9C3D: 8D */ nes_cpu_instruction_boundary(0x9C3D, 4); nes_write(0x04E1, g_cpu.A);
label_9C40:;
    /* $9C40: BD */ nes_cpu_instruction_boundary(0x9C40, 4); g_cpu.A = nes_read((0x6BF7 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C43:;
    /* $9C43: 8D */ nes_cpu_instruction_boundary(0x9C43, 4); nes_write(0x6BDB, g_cpu.A);
label_9C46:;
    /* $9C46: A9 */ nes_cpu_instruction_boundary(0x9C46, 2); g_cpu.A = 0xE0; FLAG_NZ(g_cpu.A);
label_9C48:;
    /* $9C48: 85 */ nes_cpu_instruction_boundary(0x9C48, 3); nes_write(0x4B, g_cpu.A);
label_9C4A:;
    /* $9C4A: 4C */ nes_cpu_instruction_boundary(0x9C4A, 3); nes_cpu_instruction_boundary(0x803C, 2); func_803C_b3(); return;
}

void func_9C31_b3(void) { /* DrawCannon_Escape */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9C31_b3");
#endif
label_9C31:; /* DrawCannon_Escape */
    /* $9C31: 8D */ nes_cpu_instruction_boundary(0x9C31, 4); nes_write(0x6BD7, g_cpu.A);
label_9C34:;
    /* $9C34: BD */ nes_cpu_instruction_boundary(0x9C34, 4); g_cpu.A = nes_read((0x6BF5 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C37:;
    /* $9C37: 8D */ nes_cpu_instruction_boundary(0x9C37, 4); nes_write(0x04E0, g_cpu.A);
label_9C3A:;
    /* $9C3A: BD */ nes_cpu_instruction_boundary(0x9C3A, 4); g_cpu.A = nes_read((0x6BF6 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C3D:;
    /* $9C3D: 8D */ nes_cpu_instruction_boundary(0x9C3D, 4); nes_write(0x04E1, g_cpu.A);
label_9C40:;
    /* $9C40: BD */ nes_cpu_instruction_boundary(0x9C40, 4); g_cpu.A = nes_read((0x6BF7 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C43:;
    /* $9C43: 8D */ nes_cpu_instruction_boundary(0x9C43, 4); nes_write(0x6BDB, g_cpu.A);
label_9C46:;
    /* $9C46: A9 */ nes_cpu_instruction_boundary(0x9C46, 2); g_cpu.A = 0xE0; FLAG_NZ(g_cpu.A);
label_9C48:;
    /* $9C48: 85 */ nes_cpu_instruction_boundary(0x9C48, 3); nes_write(0x4B, g_cpu.A);
label_9C4A:;
    /* $9C4A: 4C */ nes_cpu_instruction_boundary(0x9C4A, 3); nes_cpu_instruction_boundary(0x803C, 2); func_803C_b3(); return;
}

void func_8045_b3(void) { /* CommonJump_Base10Subtract */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8045_b3");
#endif
label_8045:; /* CommonJump_Base10Subtract */
    /* $8045: 4C */ nes_cpu_instruction_boundary(0x8045, 3); nes_cpu_instruction_boundary(0xC3FB, 2); func_C3FB(); return;
}

void func_803C_b3(void) { /* CommonJump_DrawEnemy */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_803C_b3");
#endif
label_803C:; /* CommonJump_DrawEnemy */
    /* $803C: 4C */ nes_cpu_instruction_boundary(0x803C, 3); nes_cpu_instruction_boundary(0xDD8B, 2); func_DD8B(); return;
}

void func_A15D_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A15D_b3");
#endif
label_A15D:;
    /* $A15D: 60 */ nes_cpu_instruction_boundary(0xA15D, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_802A_b3(void) { /* CommonJump_0E */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_802A_b3");
#endif
label_802A:; /* CommonJump_0E */
    /* $802A: 4C */ nes_cpu_instruction_boundary(0x802A, 3); nes_cpu_instruction_boundary(0xEB6E, 2); func_EB6E(); return;
}

void func_9EE7_b3(void) { /* SpawnRinka_InitPositionXY */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9EE7_b3");
#endif
label_9EE7:; /* SpawnRinka_InitPositionXY */
    /* $9EE7: 48 */ nes_cpu_instruction_boundary(0x9EE7, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9EE8:;
    /* $9EE8: 29 */ nes_cpu_instruction_boundary(0x9EE8, 2); g_cpu.A &= 0xF0; FLAG_NZ(g_cpu.A);
label_9EEA:;
    /* $9EEA: 09 */ nes_cpu_instruction_boundary(0x9EEA, 2); g_cpu.A |= 0x07; FLAG_NZ(g_cpu.A);
label_9EEC:;
    /* $9EEC: 9D */ nes_cpu_instruction_boundary(0x9EEC, 5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9EEF:;
    /* $9EEF: 68 */ nes_cpu_instruction_boundary(0x9EEF, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9EF0:;
    /* $9EF0: 20 */ nes_cpu_instruction_boundary(0x9EF0, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9E; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF2; g_cpu.S--; func_9B20_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9EF0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9EF3:;
    /* $9EF3: 09 */ nes_cpu_instruction_boundary(0x9EF3, 2); g_cpu.A |= 0x07; FLAG_NZ(g_cpu.A);
label_9EF5:;
    /* $9EF5: 9D */ nes_cpu_instruction_boundary(0x9EF5, 5); nes_write((0x0401 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9EF8:;
    /* $9EF8: 60 */ nes_cpu_instruction_boundary(0x9EF8, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8C7E_b3(void) { /* DoorSubRoutine8C7E */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C7E_b3");
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

void func_8CF7_b3_body(int _entry) { /* WriteDoorBGTiles_Air */
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

void func_8CF7_b3(void) { /* WriteDoorBGTiles_Air */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8CF7_b3");
#endif
    func_8CF7_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8CFB_b3(void) { /* WriteDoorBGTiles_Solid */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8CFB_b3");
#endif
    func_8CF7_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8C76_b3(void) { /* DoorSubRoutine8C76 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C76_b3");
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

void func_A0C6_b3(void) { /* UpdateBullet_CollisionWithZebetiteAndMotherBrainGlass */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A0C6_b3");
#endif
label_A0C6:; /* UpdateBullet_CollisionWithZebetiteAndMotherBrainGlass */
    /* $A0C6: A5 */ nes_cpu_instruction_boundary(0xA0C6, 3); g_cpu.A = nes_read(0x71); FLAG_NZ(g_cpu.A);
label_A0C8:;
    /* $A0C8: F0 */ nes_cpu_instruction_boundary(0xA0C8, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_A13E; }
label_A0CA:;
    /* $A0CA: A6 */ nes_cpu_instruction_boundary(0xA0CA, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_A0CC:;
    /* $A0CC: BD */ nes_cpu_instruction_boundary(0xA0CC, 4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0CF:;
    /* $A0CF: C9 */ nes_cpu_instruction_boundary(0xA0CF, 2); { int r=g_cpu.A-0x0B; g_cpu.C=(g_cpu.A>=0x0B)?1:0; FLAG_NZ(r&0xFF); }
label_A0D1:;
    /* $A0D1: D0 */ nes_cpu_instruction_boundary(0xA0D1, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_A13E; }
label_A0D3:;
    /* $A0D3: C0 */ nes_cpu_instruction_boundary(0xA0D3, 2); { int r=g_cpu.Y-0x98; g_cpu.C=(g_cpu.Y>=0x98)?1:0; FLAG_NZ(r&0xFF); }
label_A0D5:;
    /* $A0D5: D0 */ nes_cpu_instruction_boundary(0xA0D5, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_A103; }
label_A0D7:;
    /* $A0D7: A2 */ nes_cpu_instruction_boundary(0xA0D7, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A0D9:; /* UpdateBullet_CollisionWithZebetiteAndMotherBrainGlass_loop_Slot */
    /* $A0D9: BD */ nes_cpu_instruction_boundary(0xA0D9, 4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0DC:;
    /* $A0DC: F0 */ nes_cpu_instruction_boundary(0xA0DC, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A0E7; }
label_A0DE:;
    /* $A0DE: 20 */ nes_cpu_instruction_boundary(0xA0DE, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE0; g_cpu.S--; func_9EF9_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0DE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0E1:;
    /* $A0E1: C9 */ nes_cpu_instruction_boundary(0xA0E1, 2); { int r=g_cpu.A-0xD0; g_cpu.C=(g_cpu.A>=0xD0)?1:0; FLAG_NZ(r&0xFF); }
label_A0E3:;
    /* $A0E3: D0 */ nes_cpu_instruction_boundary(0xA0E3, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xA0D9, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A0D9;
    }
label_A0E5:;
    /* $A0E5: F0 */ nes_cpu_instruction_boundary(0xA0E5, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_A13E; }
label_A0E7:; /* UpdateBullet_CollisionWithZebetiteAndMotherBrainGlass_slotFound */
    /* $A0E7: A9 */ nes_cpu_instruction_boundary(0xA0E7, 2); g_cpu.A = 0x8C; FLAG_NZ(g_cpu.A);
label_A0E9:;
    /* $A0E9: 9D */ nes_cpu_instruction_boundary(0xA0E9, 5); nes_write((0x0508 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0EC:;
    /* $A0EC: A5 */ nes_cpu_instruction_boundary(0xA0EC, 3); g_cpu.A = nes_read(0x05); FLAG_NZ(g_cpu.A);
label_A0EE:;
    /* $A0EE: 9D */ nes_cpu_instruction_boundary(0xA0EE, 5); nes_write((0x0509 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0F1:;
    /* $A0F1: A9 */ nes_cpu_instruction_boundary(0xA0F1, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_A0F3:;
    /* $A0F3: 9D */ nes_cpu_instruction_boundary(0xA0F3, 5); nes_write((0x0503 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0F6:;
    /* $A0F6: A5 */ nes_cpu_instruction_boundary(0xA0F6, 3); g_cpu.A = nes_read(0x4B); FLAG_NZ(g_cpu.A);
label_A0F8:;
    /* $A0F8: 48 */ nes_cpu_instruction_boundary(0xA0F8, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A0F9:;
    /* $A0F9: 86 */ nes_cpu_instruction_boundary(0xA0F9, 3); nes_write(0x4B, g_cpu.X);
label_A0FB:;
    /* $A0FB: 20 */ nes_cpu_instruction_boundary(0xA0FB, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFD; g_cpu.S--; func_803F_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0FB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0FE:;
    /* $A0FE: 68 */ nes_cpu_instruction_boundary(0xA0FE, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A0FF:;
    /* $A0FF: 85 */ nes_cpu_instruction_boundary(0xA0FF, 3); nes_write(0x4B, g_cpu.A);
label_A101:;
    /* $A101: D0 */ nes_cpu_instruction_boundary(0xA101, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A13E; }
label_A103:; /* UpdateBullet_CollisionWithZebetiteAndMotherBrainGlass_checkZebetite */
    /* $A103: A5 */ nes_cpu_instruction_boundary(0xA103, 3); g_cpu.A = nes_read(0x04); FLAG_NZ(g_cpu.A);
label_A105:;
    /* $A105: 4A */ nes_cpu_instruction_boundary(0xA105, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A106:;
    /* $A106: 90 */ nes_cpu_instruction_boundary(0xA106, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A10A; }
label_A108:;
    /* $A108: C6 */ nes_cpu_instruction_boundary(0xA108, 5); { uint16_t a=0x04; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A10A:; /* UpdateBullet_CollisionWithZebetiteAndMotherBrainGlass_endIf_andFE */
    /* $A10A: A0 */ nes_cpu_instruction_boundary(0xA10A, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A10C:;
    /* $A10C: B1 */ nes_cpu_instruction_boundary(0xA10C, 5); g_cpu.A = nes_read((nes_read16zp(0x04) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A10E:;
    /* $A10E: 4A */ nes_cpu_instruction_boundary(0xA10E, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A10F:;
    /* $A10F: B0 */ nes_cpu_instruction_boundary(0xA10F, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A13E; }
label_A111:;
    /* $A111: C9 */ nes_cpu_instruction_boundary(0xA111, 2); { int r=g_cpu.A-0x48; g_cpu.C=(g_cpu.A>=0x48)?1:0; FLAG_NZ(r&0xFF); }
label_A113:;
    /* $A113: 90 */ nes_cpu_instruction_boundary(0xA113, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A13E; }
label_A115:;
    /* $A115: C9 */ nes_cpu_instruction_boundary(0xA115, 2); { int r=g_cpu.A-0x4C; g_cpu.C=(g_cpu.A>=0x4C)?1:0; FLAG_NZ(r&0xFF); }
label_A117:;
    /* $A117: B0 */ nes_cpu_instruction_boundary(0xA117, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A13E; }
label_A119:; /* UpdateBullet_CollisionWithZebetiteAndMotherBrainGlass_loop_Zebetite */
    /* $A119: B9 */ nes_cpu_instruction_boundary(0xA119, 4); g_cpu.A = nes_read((0x0758 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A11C:;
    /* $A11C: F0 */ nes_cpu_instruction_boundary(0xA11C, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A12E; }
label_A11E:;
    /* $A11E: A5 */ nes_cpu_instruction_boundary(0xA11E, 3); g_cpu.A = nes_read(0x04); FLAG_NZ(g_cpu.A);
label_A120:;
    /* $A120: 29 */ nes_cpu_instruction_boundary(0xA120, 2); g_cpu.A &= 0x9E; FLAG_NZ(g_cpu.A);
label_A122:;
    /* $A122: D9 */ nes_cpu_instruction_boundary(0xA122, 4); { uint8_t m=nes_read((0x0759 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A125:;
    /* $A125: D0 */ nes_cpu_instruction_boundary(0xA125, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A12E; }
label_A127:;
    /* $A127: A5 */ nes_cpu_instruction_boundary(0xA127, 3); g_cpu.A = nes_read(0x05); FLAG_NZ(g_cpu.A);
label_A129:;
    /* $A129: D9 */ nes_cpu_instruction_boundary(0xA129, 4); { uint8_t m=nes_read((0x075A + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A12C:;
    /* $A12C: F0 */ nes_cpu_instruction_boundary(0xA12C, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A139; }
label_A12E:; /* UpdateBullet_CollisionWithZebetiteAndMotherBrainGlass_notTheRightZebetite */
    /* $A12E: 98 */ nes_cpu_instruction_boundary(0xA12E, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A12F:;
    /* $A12F: 18 */ nes_cpu_instruction_boundary(0xA12F, 2); g_cpu.C = 0;
label_A130:;
    /* $A130: 69 */ nes_cpu_instruction_boundary(0xA130, 2); { uint16_t r = g_cpu.A + 0x08 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x08); g_cpu.A=r&0xFF; }
label_A132:;
    /* $A132: A8 */ nes_cpu_instruction_boundary(0xA132, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A133:;
    /* $A133: C9 */ nes_cpu_instruction_boundary(0xA133, 2); { int r=g_cpu.A-0x28; g_cpu.C=(g_cpu.A>=0x28)?1:0; FLAG_NZ(r&0xFF); }
label_A135:;
    /* $A135: D0 */ nes_cpu_instruction_boundary(0xA135, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xA119, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A119;
    }
label_A137:;
    /* $A137: F0 */ nes_cpu_instruction_boundary(0xA137, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A13E; }
label_A139:; /* UpdateBullet_CollisionWithZebetiteAndMotherBrainGlass_theRightZebetite */
    /* $A139: A9 */ nes_cpu_instruction_boundary(0xA139, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_A13B:;
    /* $A13B: 99 */ nes_cpu_instruction_boundary(0xA13B, 5); nes_write((0x075D + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A13E:; /* UpdateBullet_CollisionWithZebetiteAndMotherBrainGlass_exit */
    /* $A13E: 68 */ nes_cpu_instruction_boundary(0xA13E, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A13F:;
    /* $A13F: 68 */ nes_cpu_instruction_boundary(0xA13F, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A140:;
    /* $A140: 18 */ nes_cpu_instruction_boundary(0xA140, 2); g_cpu.C = 0;
label_A141:;
    /* $A141: 60 */ nes_cpu_instruction_boundary(0xA141, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9BAF_b3(void) { /* Cannon_ShootEnProjectile */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9BAF_b3");
#endif
label_9BAF:; /* Cannon_ShootEnProjectile */
    /* $9BAF: 48 */ nes_cpu_instruction_boundary(0x9BAF, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9BB0:;
    /* $9BB0: A5 */ nes_cpu_instruction_boundary(0x9BB0, 3); g_cpu.A = nes_read(0x98); FLAG_NZ(g_cpu.A);
label_9BB2:;
    /* $9BB2: C9 */ nes_cpu_instruction_boundary(0x9BB2, 2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_9BB4:;
    /* $9BB4: B0 */ nes_cpu_instruction_boundary(0x9BB4, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9BC6; }
label_9BB6:;
    /* $9BB6: A0 */ nes_cpu_instruction_boundary(0x9BB6, 2); g_cpu.Y = 0x60; FLAG_NZ(g_cpu.Y);
label_9BB8:; /* Cannon_ShootEnProjectile_loop */
    /* $9BB8: B9 */ nes_cpu_instruction_boundary(0x9BB8, 4); g_cpu.A = nes_read((0x6AF4 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9BBB:;
    /* $9BBB: F0 */ nes_cpu_instruction_boundary(0x9BBB, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9BC8; }
label_9BBD:;
    /* $9BBD: 98 */ nes_cpu_instruction_boundary(0x9BBD, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_9BBE:;
    /* $9BBE: 18 */ nes_cpu_instruction_boundary(0x9BBE, 2); g_cpu.C = 0;
label_9BBF:;
    /* $9BBF: 69 */ nes_cpu_instruction_boundary(0x9BBF, 2); { uint16_t r = g_cpu.A + 0x10 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x10); g_cpu.A=r&0xFF; }
label_9BC1:;
    /* $9BC1: A8 */ nes_cpu_instruction_boundary(0x9BC1, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9BC2:;
    /* $9BC2: C9 */ nes_cpu_instruction_boundary(0x9BC2, 2); { int r=g_cpu.A-0xA0; g_cpu.C=(g_cpu.A>=0xA0)?1:0; FLAG_NZ(r&0xFF); }
label_9BC4:;
    /* $9BC4: D0 */ nes_cpu_instruction_boundary(0x9BC4, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0x9BB8, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9BB8;
    }
label_9BC6:; /* Cannon_ShootEnProjectile_exit */
    /* $9BC6: 68 */ nes_cpu_instruction_boundary(0x9BC6, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9BC7:;
    /* $9BC7: 60 */ nes_cpu_instruction_boundary(0x9BC7, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9BC8:; /* Cannon_ShootEnProjectile_slotFound */
    /* $9BC8: 84 */ nes_cpu_instruction_boundary(0x9BC8, 3); nes_write(0x4B, g_cpu.Y);
label_9BCA:;
    /* $9BCA: BD */ nes_cpu_instruction_boundary(0x9BCA, 4); g_cpu.A = nes_read((0x6BF5 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9BCD:;
    /* $9BCD: 99 */ nes_cpu_instruction_boundary(0x9BCD, 5); nes_write((0x0400 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9BD0:;
    /* $9BD0: BD */ nes_cpu_instruction_boundary(0x9BD0, 4); g_cpu.A = nes_read((0x6BF6 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9BD3:;
    /* $9BD3: 99 */ nes_cpu_instruction_boundary(0x9BD3, 5); nes_write((0x0401 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9BD6:;
    /* $9BD6: BD */ nes_cpu_instruction_boundary(0x9BD6, 4); g_cpu.A = nes_read((0x6BF7 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9BD9:;
    /* $9BD9: 99 */ nes_cpu_instruction_boundary(0x9BD9, 5); nes_write((0x6AFB + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9BDC:;
    /* $9BDC: A9 */ nes_cpu_instruction_boundary(0x9BDC, 2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_9BDE:;
    /* $9BDE: 99 */ nes_cpu_instruction_boundary(0x9BDE, 5); nes_write((0x6AF4 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9BE1:;
    /* $9BE1: A9 */ nes_cpu_instruction_boundary(0x9BE1, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9BE3:;
    /* $9BE3: 99 */ nes_cpu_instruction_boundary(0x9BE3, 5); nes_write((0x0409 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9BE6:;
    /* $9BE6: 99 */ nes_cpu_instruction_boundary(0x9BE6, 5); nes_write((0x6AF8 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9BE9:;
    /* $9BE9: 99 */ nes_cpu_instruction_boundary(0x9BE9, 5); nes_write((0x0408 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9BEC:;
    /* $9BEC: 68 */ nes_cpu_instruction_boundary(0x9BEC, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9BED:;
    /* $9BED: 20 */ nes_cpu_instruction_boundary(0x9BED, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xEF; g_cpu.S--; func_95C6_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9BED, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9BF0:;
    /* $9BF0: AA */ nes_cpu_instruction_boundary(0x9BF0, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_9BF1:;
    /* $9BF1: 99 */ nes_cpu_instruction_boundary(0x9BF1, 5); nes_write((0x040A + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9BF4:;
    /* $9BF4: 09 */ nes_cpu_instruction_boundary(0x9BF4, 2); g_cpu.A |= 0x02; FLAG_NZ(g_cpu.A);
label_9BF6:;
    /* $9BF6: 99 */ nes_cpu_instruction_boundary(0x9BF6, 5); nes_write((0x0405 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9BF9:;
    /* $9BF9: BD */ nes_cpu_instruction_boundary(0x9BF9, 4); g_cpu.A = nes_read((0x9C26 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9BFC:;
    /* $9BFC: 99 */ nes_cpu_instruction_boundary(0x9BFC, 5); nes_write((0x6AF9 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9BFF:;
    /* $9BFF: 99 */ nes_cpu_instruction_boundary(0x9BFF, 5); nes_write((0x6AFA + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9C02:;
    /* $9C02: BD */ nes_cpu_instruction_boundary(0x9C02, 4); g_cpu.A = nes_read((0x9DCC + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C05:;
    /* $9C05: 85 */ nes_cpu_instruction_boundary(0x9C05, 3); nes_write(0x05, g_cpu.A);
label_9C07:;
    /* $9C07: BD */ nes_cpu_instruction_boundary(0x9C07, 4); g_cpu.A = nes_read((0x9DCF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C0A:;
    /* $9C0A: 85 */ nes_cpu_instruction_boundary(0x9C0A, 3); nes_write(0x04, g_cpu.A);
label_9C0C:;
    /* $9C0C: A6 */ nes_cpu_instruction_boundary(0x9C0C, 3); g_cpu.X = nes_read(0x97); FLAG_NZ(g_cpu.X);
label_9C0E:;
    /* $9C0E: BD */ nes_cpu_instruction_boundary(0x9C0E, 4); g_cpu.A = nes_read((0x6BF5 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C11:;
    /* $9C11: 85 */ nes_cpu_instruction_boundary(0x9C11, 3); nes_write(0x08, g_cpu.A);
label_9C13:;
    /* $9C13: BD */ nes_cpu_instruction_boundary(0x9C13, 4); g_cpu.A = nes_read((0x6BF6 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C16:;
    /* $9C16: 85 */ nes_cpu_instruction_boundary(0x9C16, 3); nes_write(0x09, g_cpu.A);
label_9C18:;
    /* $9C18: BD */ nes_cpu_instruction_boundary(0x9C18, 4); g_cpu.A = nes_read((0x6BF7 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C1B:;
    /* $9C1B: 85 */ nes_cpu_instruction_boundary(0x9C1B, 3); nes_write(0x0B, g_cpu.A);
label_9C1D:;
    /* $9C1D: 98 */ nes_cpu_instruction_boundary(0x9C1D, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_9C1E:;
    /* $9C1E: AA */ nes_cpu_instruction_boundary(0x9C1E, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_9C1F:;
    /* $9C1F: 20 */ nes_cpu_instruction_boundary(0x9C1F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x21; g_cpu.S--; func_8027_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9C1F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9C22:;
    /* $9C22: 20 */ nes_cpu_instruction_boundary(0x9C22, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x24; g_cpu.S--; func_99F4_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9C22, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9C25:;
    /* $9C25: A6 */ nes_cpu_instruction_boundary(0x9C25, 3); g_cpu.X = nes_read(0x97); FLAG_NZ(g_cpu.X);
label_9C27:;
    /* $9C27: 60 */ nes_cpu_instruction_boundary(0x9C27, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9EF9_b3(void) { /* Xplus16 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9EF9_b3");
#endif
label_9EF9:; /* Xplus16 */
    /* $9EF9: 8A */ nes_cpu_instruction_boundary(0x9EF9, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_9EFA:;
    /* $9EFA: 18 */ nes_cpu_instruction_boundary(0x9EFA, 2); g_cpu.C = 0;
label_9EFB:;
    /* $9EFB: 69 */ nes_cpu_instruction_boundary(0x9EFB, 2); { uint16_t r = g_cpu.A + 0x10 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x10); g_cpu.A=r&0xFF; }
label_9EFD:;
    /* $9EFD: AA */ nes_cpu_instruction_boundary(0x9EFD, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_9EFE:;
    /* $9EFE: 60 */ nes_cpu_instruction_boundary(0x9EFE, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_83AD_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_83AD_b3");
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

void func_A203_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A203_b3");
#endif
label_A203:;
    /* $A203: 45 */ nes_cpu_instruction_boundary(0xA203, 3); g_cpu.A ^= nes_read(0x80); FLAG_NZ(g_cpu.A);
label_A205:;
    /* $A205: 8D */ nes_cpu_instruction_boundary(0xA205, 4); nes_write(0x010B, g_cpu.A);
label_A208:;
    /* $A208: A5 */ nes_cpu_instruction_boundary(0xA208, 3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_A20A:;
    /* $A20A: 29 */ nes_cpu_instruction_boundary(0xA20A, 2); g_cpu.A &= 0x1F; FLAG_NZ(g_cpu.A);
label_A20C:;
    /* $A20C: D0 */ nes_cpu_instruction_boundary(0xA20C, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A216; }
label_A20E:;
    /* $A20E: AD */ nes_cpu_instruction_boundary(0xA20E, 4); g_cpu.A = nes_read(0x0681); FLAG_NZ(g_cpu.A);
label_A211:;
    /* $A211: 09 */ nes_cpu_instruction_boundary(0xA211, 2); g_cpu.A |= 0x08; FLAG_NZ(g_cpu.A);
label_A213:;
    /* $A213: 8D */ nes_cpu_instruction_boundary(0xA213, 4); nes_write(0x0681, g_cpu.A);
label_A216:; /* UpdateEndTimer_endIf_A */
    /* $A216: AD */ nes_cpu_instruction_boundary(0xA216, 4); g_cpu.A = nes_read(0x010A); FLAG_NZ(g_cpu.A);
label_A219:;
    /* $A219: 0D */ nes_cpu_instruction_boundary(0xA219, 4); g_cpu.A |= nes_read(0x010B); FLAG_NZ(g_cpu.A);
label_A21C:;
    /* $A21C: D0 */ nes_cpu_instruction_boundary(0xA21C, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A237; }
label_A21E:;
    /* $A21E: CE */ nes_cpu_instruction_boundary(0xA21E, 6); { uint16_t a=0x010B; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A221:;
    /* $A221: 85 */ nes_cpu_instruction_boundary(0xA221, 3); nes_write(0x99, g_cpu.A);
label_A223:;
    /* $A223: A9 */ nes_cpu_instruction_boundary(0xA223, 2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_A225:;
    /* $A225: 85 */ nes_cpu_instruction_boundary(0xA225, 3); nes_write(0x98, g_cpu.A);
label_A227:;
    /* $A227: AD */ nes_cpu_instruction_boundary(0xA227, 4); g_cpu.A = nes_read(0x0680); FLAG_NZ(g_cpu.A);
label_A22A:;
    /* $A22A: 09 */ nes_cpu_instruction_boundary(0xA22A, 2); g_cpu.A |= 0x01; FLAG_NZ(g_cpu.A);
label_A22C:;
    /* $A22C: 8D */ nes_cpu_instruction_boundary(0xA22C, 4); nes_write(0x0680, g_cpu.A);
label_A22F:;
    /* $A22F: A9 */ nes_cpu_instruction_boundary(0xA22F, 2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_A231:;
    /* $A231: 85 */ nes_cpu_instruction_boundary(0xA231, 3); nes_write(0x2C, g_cpu.A);
label_A233:;
    /* $A233: A9 */ nes_cpu_instruction_boundary(0xA233, 2); g_cpu.A = 0x0B; FLAG_NZ(g_cpu.A);
label_A235:;
    /* $A235: 85 */ nes_cpu_instruction_boundary(0xA235, 3); nes_write(0x1C, g_cpu.A);
label_A237:; /* UpdateEndTimer_RTS */
    /* $A237: 60 */ nes_cpu_instruction_boundary(0xA237, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B920_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B920_b3");
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
    /* $B93D: 4C */ nes_cpu_instruction_boundary(0xB93D, 3); nes_cpu_instruction_boundary(0xB452, 2); func_B452_b3(); return;
}

void func_9830_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9830_b3");
#endif
label_9830:;
    /* $9830: C6 */ nes_cpu_instruction_boundary(0x9830, 5); { uint16_t a=0x95; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9832:;
    /* $9832: 48 */ nes_cpu_instruction_boundary(0x9832, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9833:;
    /* $9833: A9 */ nes_cpu_instruction_boundary(0x9833, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9835:;
    /* $9835: DD */ nes_cpu_instruction_boundary(0x9835, 4); { uint8_t m=nes_read((0x0406 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9838:;
    /* $9838: FD */ nes_cpu_instruction_boundary(0x9838, 4); { uint8_t m=nes_read((0x0402 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_983B:; /* MetroidAIRoutine_BANK3_endIf_C */
    /* $983B: D9 */ nes_cpu_instruction_boundary(0x983B, 4); { uint8_t m=nes_read((0x77F6 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_983E:;
    /* $983E: 68 */ nes_cpu_instruction_boundary(0x983E, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_983F:;
    /* $983F: 90 */ nes_cpu_instruction_boundary(0x983F, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9849; }
label_9841:;
    /* $9841: 9D */ nes_cpu_instruction_boundary(0x9841, 5); nes_write((0x0402 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9844:;
    /* $9844: A9 */ nes_cpu_instruction_boundary(0x9844, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9846:;
    /* $9846: 9D */ nes_cpu_instruction_boundary(0x9846, 5); nes_write((0x0406 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9849:; /* MetroidAIRoutine_BANK3_endIf_D */
    /* $9849: B9 */ nes_cpu_instruction_boundary(0x9849, 4); g_cpu.A = nes_read((0x77F6 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_984C:;
    /* $984C: 48 */ nes_cpu_instruction_boundary(0x984C, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_984D:;
    /* $984D: BD */ nes_cpu_instruction_boundary(0x984D, 4); g_cpu.A = nes_read((0x0403 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9850:;
    /* $9850: 10 */ nes_cpu_instruction_boundary(0x9850, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_985F; }
label_9852:;
    /* $9852: 68 */ nes_cpu_instruction_boundary(0x9852, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9853:;
    /* $9853: 20 */ nes_cpu_instruction_boundary(0x9853, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x98; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x55; g_cpu.S--; func_95C6_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9853, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9856:;
    /* $9856: 48 */ nes_cpu_instruction_boundary(0x9856, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9857:;
    /* $9857: A9 */ nes_cpu_instruction_boundary(0x9857, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9859:;
    /* $9859: DD */ nes_cpu_instruction_boundary(0x9859, 4); { uint8_t m=nes_read((0x0407 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_985C:;
    /* $985C: FD */ nes_cpu_instruction_boundary(0x985C, 4); { uint8_t m=nes_read((0x0403 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_985F:; /* MetroidAIRoutine_BANK3_endIf_E */
    /* $985F: D9 */ nes_cpu_instruction_boundary(0x985F, 4); { uint8_t m=nes_read((0x77F6 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9862:;
    /* $9862: 68 */ nes_cpu_instruction_boundary(0x9862, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9863:;
    /* $9863: 90 */ nes_cpu_instruction_boundary(0x9863, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_986D; }
label_9865:;
    /* $9865: 9D */ nes_cpu_instruction_boundary(0x9865, 5); nes_write((0x0403 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9868:;
    /* $9868: A9 */ nes_cpu_instruction_boundary(0x9868, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_986A:;
    /* $986A: 9D */ nes_cpu_instruction_boundary(0x986A, 5); nes_write((0x0407 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_986D:; /* MetroidAIRoutine_BANK3_endIf_F */
    /* $986D: BD */ nes_cpu_instruction_boundary(0x986D, 4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9870:;
    /* $9870: 48 */ nes_cpu_instruction_boundary(0x9870, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9871:;
    /* $9871: 20 */ nes_cpu_instruction_boundary(0x9871, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x98; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x73; g_cpu.S--; func_9A06_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9871, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9874:;
    /* $9874: 9D */ nes_cpu_instruction_boundary(0x9874, 5); nes_write((0x6AFF + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9877:;
    /* $9877: 68 */ nes_cpu_instruction_boundary(0x9877, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9878:;
    /* $9878: 4A */ nes_cpu_instruction_boundary(0x9878, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9879:;
    /* $9879: 4A */ nes_cpu_instruction_boundary(0x9879, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_987A:;
    /* $987A: 20 */ nes_cpu_instruction_boundary(0x987A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x98; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x7C; g_cpu.S--; func_9A06_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x987A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_987D:;
    /* $987D: 9D */ nes_cpu_instruction_boundary(0x987D, 5); nes_write((0x6AFE + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9880:;
    /* $9880: BD */ nes_cpu_instruction_boundary(0x9880, 4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9883:;
    /* $9883: C9 */ nes_cpu_instruction_boundary(0x9883, 2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_9885:;
    /* $9885: D0 */ nes_cpu_instruction_boundary(0x9885, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9894; }
label_9887:;
    /* $9887: BC */ nes_cpu_instruction_boundary(0x9887, 4); g_cpu.Y = nes_read((0x040B + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_988A:;
    /* $988A: C8 */ nes_cpu_instruction_boundary(0x988A, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_988B:;
    /* $988B: D0 */ nes_cpu_instruction_boundary(0x988B, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9899; }
label_988D:;
    /* $988D: A9 */ nes_cpu_instruction_boundary(0x988D, 2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_988F:;
    /* $988F: 9D */ nes_cpu_instruction_boundary(0x988F, 5); nes_write((0x040B + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9892:;
    /* $9892: D0 */ nes_cpu_instruction_boundary(0x9892, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9899; }
label_9894:; /* MetroidAIRoutine_BANK3_else_G */
    /* $9894: A9 */ nes_cpu_instruction_boundary(0x9894, 2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_9896:;
    /* $9896: 9D */ nes_cpu_instruction_boundary(0x9896, 5); nes_write((0x040B + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9899:; /* MetroidAIRoutine_BANK3_endIf_G */
    /* $9899: A5 */ nes_cpu_instruction_boundary(0x9899, 3); g_cpu.A = nes_read(0x81); FLAG_NZ(g_cpu.A);
label_989B:;
    /* $989B: C9 */ nes_cpu_instruction_boundary(0x989B, 2); { int r=g_cpu.A-0x06; g_cpu.C=(g_cpu.A>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_989D:;
    /* $989D: D0 */ nes_cpu_instruction_boundary(0x989D, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_98A9; }
label_989F:;
    /* $989F: DD */ nes_cpu_instruction_boundary(0x989F, 4); { uint8_t m=nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_98A2:;
    /* $98A2: F0 */ nes_cpu_instruction_boundary(0x98A2, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_98A9; }
label_98A4:;
    /* $98A4: A9 */ nes_cpu_instruction_boundary(0x98A4, 2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_98A6:;
    /* $98A6: 9D */ nes_cpu_instruction_boundary(0x98A6, 5); nes_write((0x6AF4 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_98A9:; /* MetroidAIRoutine_BANK3_endIf_H */
    /* $98A9: BD */ nes_cpu_instruction_boundary(0x98A9, 4); g_cpu.A = nes_read((0x0404 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_98AC:;
    /* $98AC: 29 */ nes_cpu_instruction_boundary(0x98AC, 2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_98AE:;
    /* $98AE: F0 */ nes_cpu_instruction_boundary(0x98AE, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_990F; }
label_98B0:;
    /* $98B0: 20 */ nes_cpu_instruction_boundary(0x98B0, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x98; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB2; g_cpu.S--; func_99B7_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x98B0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_98B3:;
    /* $98B3: B9 */ nes_cpu_instruction_boundary(0x98B3, 4); g_cpu.A = nes_read((0x77F8 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_98B6:;
    /* $98B6: F0 */ nes_cpu_instruction_boundary(0x98B6, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_98EF; }
label_98B8:;
    /* $98B8: BD */ nes_cpu_instruction_boundary(0x98B8, 4); g_cpu.A = nes_read((0x040E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_98BB:;
    /* $98BB: C9 */ nes_cpu_instruction_boundary(0x98BB, 2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_98BD:;
    /* $98BD: F0 */ nes_cpu_instruction_boundary(0x98BD, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_98C3; }
label_98BF:;
    /* $98BF: C9 */ nes_cpu_instruction_boundary(0x98BF, 2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_98C1:;
    /* $98C1: D0 */ nes_cpu_instruction_boundary(0x98C1, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_9932; }
label_98C3:; /* MetroidAIRoutine_BANK3_endIf_K */
    /* $98C3: A5 */ nes_cpu_instruction_boundary(0x98C3, 3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_98C5:;
    /* $98C5: 29 */ nes_cpu_instruction_boundary(0x98C5, 2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_98C7:;
    /* $98C7: D0 */ nes_cpu_instruction_boundary(0x98C7, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_9932; }
label_98C9:;
    /* $98C9: B9 */ nes_cpu_instruction_boundary(0x98C9, 4); g_cpu.A = nes_read((0x77F8 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_98CC:;
    /* $98CC: 18 */ nes_cpu_instruction_boundary(0x98CC, 2); g_cpu.C = 0;
label_98CD:;
    /* $98CD: 69 */ nes_cpu_instruction_boundary(0x98CD, 2); { uint16_t r = g_cpu.A + 0x10 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x10); g_cpu.A=r&0xFF; }
label_98CF:;
    /* $98CF: 99 */ nes_cpu_instruction_boundary(0x98CF, 5); nes_write((0x77F8 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_98D2:;
    /* $98D2: 29 */ nes_cpu_instruction_boundary(0x98D2, 2); g_cpu.A &= 0x70; FLAG_NZ(g_cpu.A);
label_98D4:;
    /* $98D4: C9 */ nes_cpu_instruction_boundary(0x98D4, 2); { int r=g_cpu.A-0x50; g_cpu.C=(g_cpu.A>=0x50)?1:0; FLAG_NZ(r&0xFF); }
label_98D6:;
    /* $98D6: D0 */ nes_cpu_instruction_boundary(0x98D6, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_9932; }
label_98D8:;
    /* $98D8: A9 */ nes_cpu_instruction_boundary(0x98D8, 2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_98DA:;
    /* $98DA: 1D */ nes_cpu_instruction_boundary(0x98DA, 4); g_cpu.A |= nes_read((0x040F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_98DD:;
    /* $98DD: 9D */ nes_cpu_instruction_boundary(0x98DD, 5); nes_write((0x040C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_98E0:;
    /* $98E0: A9 */ nes_cpu_instruction_boundary(0x98E0, 2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_98E2:;
    /* $98E2: 9D */ nes_cpu_instruction_boundary(0x98E2, 5); nes_write((0x6AF4 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_98E5:;
    /* $98E5: A9 */ nes_cpu_instruction_boundary(0x98E5, 2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_98E7:;
    /* $98E7: 9D */ nes_cpu_instruction_boundary(0x98E7, 5); nes_write((0x040F + g_cpu.X) & 0xFFFF, g_cpu.A);
label_98EA:;
    /* $98EA: A9 */ nes_cpu_instruction_boundary(0x98EA, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_98EC:;
    /* $98EC: 9D */ nes_cpu_instruction_boundary(0x98EC, 5); nes_write((0x040D + g_cpu.X) & 0xFFFF, g_cpu.A);
label_98EF:; /* MetroidAIRoutine_BANK3_endIf_J */
    /* $98EF: A9 */ nes_cpu_instruction_boundary(0x98EF, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_98F1:;
    /* $98F1: 9D */ nes_cpu_instruction_boundary(0x98F1, 5); nes_write((0x0404 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_98F4:;
    /* $98F4: 99 */ nes_cpu_instruction_boundary(0x98F4, 5); nes_write((0x77F8 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_98F7:;
    /* $98F7: 9D */ nes_cpu_instruction_boundary(0x98F7, 5); nes_write((0x0406 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_98FA:;
    /* $98FA: 9D */ nes_cpu_instruction_boundary(0x98FA, 5); nes_write((0x0407 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_98FD:;
    /* $98FD: BD */ nes_cpu_instruction_boundary(0x98FD, 4); g_cpu.A = nes_read((0x6AFE + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9900:;
    /* $9900: 20 */ nes_cpu_instruction_boundary(0x9900, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x02; g_cpu.S--; func_9A10_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9900, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9903:;
    /* $9903: 9D */ nes_cpu_instruction_boundary(0x9903, 5); nes_write((0x0402 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9906:;
    /* $9906: BD */ nes_cpu_instruction_boundary(0x9906, 4); g_cpu.A = nes_read((0x6AFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9909:;
    /* $9909: 20 */ nes_cpu_instruction_boundary(0x9909, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0B; g_cpu.S--; func_9A10_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9909, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_990C:;
    /* $990C: 9D */ nes_cpu_instruction_boundary(0x990C, 5); nes_write((0x0403 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_990F:; /* MetroidAIRoutine_BANK3_endIf_I */
    /* $990F: 20 */ nes_cpu_instruction_boundary(0x990F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x11; g_cpu.S--; func_99B7_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x990F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9912:;
    /* $9912: B9 */ nes_cpu_instruction_boundary(0x9912, 4); g_cpu.A = nes_read((0x77F8 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9915:;
    /* $9915: D0 */ nes_cpu_instruction_boundary(0x9915, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9932; }
label_9917:;
    /* $9917: BD */ nes_cpu_instruction_boundary(0x9917, 4); g_cpu.A = nes_read((0x0404 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_991A:;
    /* $991A: 29 */ nes_cpu_instruction_boundary(0x991A, 2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A);
label_991C:;
    /* $991C: F0 */ nes_cpu_instruction_boundary(0x991C, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9964; }
label_991E:;
    /* $991E: BD */ nes_cpu_instruction_boundary(0x991E, 4); g_cpu.A = nes_read((0x0403 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9921:;
    /* $9921: 29 */ nes_cpu_instruction_boundary(0x9921, 2); g_cpu.A &= 0x80; FLAG_NZ(g_cpu.A);
label_9923:;
    /* $9923: 09 */ nes_cpu_instruction_boundary(0x9923, 2); g_cpu.A |= 0x01; FLAG_NZ(g_cpu.A);
label_9925:;
    /* $9925: A8 */ nes_cpu_instruction_boundary(0x9925, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9926:;
    /* $9926: 20 */ nes_cpu_instruction_boundary(0x9926, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x28; g_cpu.S--; func_99C3_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9926, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9929:;
    /* $9929: 20 */ nes_cpu_instruction_boundary(0x9929, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2B; g_cpu.S--; func_99BD_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9929, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_992C:;
    /* $992C: 98 */ nes_cpu_instruction_boundary(0x992C, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_992D:;
    /* $992D: 9D */ nes_cpu_instruction_boundary(0x992D, 5); nes_write((0x77F8 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9930:;
    /* $9930: 8A */ nes_cpu_instruction_boundary(0x9930, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_9931:;
    /* $9931: A8 */ nes_cpu_instruction_boundary(0x9931, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9932:; /* MetroidAIRoutine_BANK3_endIf_L */
    /* $9932: 98 */ nes_cpu_instruction_boundary(0x9932, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_9933:;
    /* $9933: AA */ nes_cpu_instruction_boundary(0x9933, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_9934:;
    /* $9934: BD */ nes_cpu_instruction_boundary(0x9934, 4); g_cpu.A = nes_read((0x77F8 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9937:;
    /* $9937: 08 */ nes_cpu_instruction_boundary(0x9937, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9938:;
    /* $9938: 29 */ nes_cpu_instruction_boundary(0x9938, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_993A:;
    /* $993A: C9 */ nes_cpu_instruction_boundary(0x993A, 2); { int r=g_cpu.A-0x0C; g_cpu.C=(g_cpu.A>=0x0C)?1:0; FLAG_NZ(r&0xFF); }
label_993C:;
    /* $993C: F0 */ nes_cpu_instruction_boundary(0x993C, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9941; }
label_993E:;
    /* $993E: FE */ nes_cpu_instruction_boundary(0x993E, 7); { uint16_t a=(0x77F8 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9941:; /* MetroidAIRoutine_BANK3_endIf_M */
    /* $9941: A8 */ nes_cpu_instruction_boundary(0x9941, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9942:;
    /* $9942: B9 */ nes_cpu_instruction_boundary(0x9942, 4); g_cpu.A = nes_read((0x99D7 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9945:;
    /* $9945: 85 */ nes_cpu_instruction_boundary(0x9945, 3); nes_write(0x04, g_cpu.A);
label_9947:;
    /* $9947: 84 */ nes_cpu_instruction_boundary(0x9947, 3); nes_write(0x05, g_cpu.Y);
label_9949:;
    /* $9949: A9 */ nes_cpu_instruction_boundary(0x9949, 2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_994B:;
    /* $994B: 38 */ nes_cpu_instruction_boundary(0x994B, 2); g_cpu.C = 1;
label_994C:;
    /* $994C: E5 */ nes_cpu_instruction_boundary(0x994C, 3); { uint8_t m=nes_read(0x05); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_994E:;
    /* $994E: A6 */ nes_cpu_instruction_boundary(0x994E, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_9950:;
    /* $9950: 28 */ nes_cpu_instruction_boundary(0x9950, 4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_9951:;
    /* $9951: 30 */ nes_cpu_instruction_boundary(0x9951, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_9956; }
label_9953:;
    /* $9953: 20 */ nes_cpu_instruction_boundary(0x9953, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x55; g_cpu.S--; func_95C6_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9953, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9956:; /* MetroidAIRoutine_BANK3_endIf_N */
    /* $9956: 85 */ nes_cpu_instruction_boundary(0x9956, 3); nes_write(0x05, g_cpu.A);
label_9958:;
    /* $9958: 20 */ nes_cpu_instruction_boundary(0x9958, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x5A; g_cpu.S--; func_99E4_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9958, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_995B:;
    /* $995B: 20 */ nes_cpu_instruction_boundary(0x995B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x5D; g_cpu.S--; func_8027_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x995B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_995E:;
    /* $995E: 20 */ nes_cpu_instruction_boundary(0x995E, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x60; g_cpu.S--; func_99F4_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x995E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9961:;
    /* $9961: 4C */ nes_cpu_instruction_boundary(0x9961, 3); nes_cpu_instruction_boundary(0x9967, 2); func_9967_b3(); return;
label_9964:; /* MetroidAIRoutine_BANK3_metroidOnSamus_clearLatch */
    /* $9964: 20 */ nes_cpu_instruction_boundary(0x9964, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x66; g_cpu.S--; func_99AE_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9964, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9967:; /* MetroidAIRoutine_BANK3_metroidOnSamus */
    /* $9967: BD */ nes_cpu_instruction_boundary(0x9967, 4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_996A:;
    /* $996A: C9 */ nes_cpu_instruction_boundary(0x996A, 2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_996C:;
    /* $996C: D0 */ nes_cpu_instruction_boundary(0x996C, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9971; }
label_996E:;
    /* $996E: 20 */ nes_cpu_instruction_boundary(0x996E, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x70; g_cpu.S--; func_99AE_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x996E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9971:; /* MetroidAIRoutine_BANK3_endIf_O */
    /* $9971: A0 */ nes_cpu_instruction_boundary(0x9971, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_9973:;
    /* $9973: AD */ nes_cpu_instruction_boundary(0x9973, 4); g_cpu.A = nes_read(0x77F8); FLAG_NZ(g_cpu.A);
label_9976:;
    /* $9976: 0D */ nes_cpu_instruction_boundary(0x9976, 4); g_cpu.A |= nes_read(0x77F9); FLAG_NZ(g_cpu.A);
label_9979:;
    /* $9979: 0D */ nes_cpu_instruction_boundary(0x9979, 4); g_cpu.A |= nes_read(0x77FA); FLAG_NZ(g_cpu.A);
label_997C:;
    /* $997C: 0D */ nes_cpu_instruction_boundary(0x997C, 4); g_cpu.A |= nes_read(0x77FB); FLAG_NZ(g_cpu.A);
label_997F:;
    /* $997F: 0D */ nes_cpu_instruction_boundary(0x997F, 4); g_cpu.A |= nes_read(0x77FC); FLAG_NZ(g_cpu.A);
label_9982:;
    /* $9982: 0D */ nes_cpu_instruction_boundary(0x9982, 4); g_cpu.A |= nes_read(0x77FD); FLAG_NZ(g_cpu.A);
label_9985:;
    /* $9985: 29 */ nes_cpu_instruction_boundary(0x9985, 2); g_cpu.A &= 0x0C; FLAG_NZ(g_cpu.A);
label_9987:;
    /* $9987: C9 */ nes_cpu_instruction_boundary(0x9987, 2); { int r=g_cpu.A-0x0C; g_cpu.C=(g_cpu.A>=0x0C)?1:0; FLAG_NZ(r&0xFF); }
label_9989:;
    /* $9989: D0 */ nes_cpu_instruction_boundary(0x9989, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_999E; }
label_998B:;
    /* $998B: AD */ nes_cpu_instruction_boundary(0x998B, 4); g_cpu.A = nes_read(0x0106); FLAG_NZ(g_cpu.A);
label_998E:;
    /* $998E: 0D */ nes_cpu_instruction_boundary(0x998E, 4); g_cpu.A |= nes_read(0x0107); FLAG_NZ(g_cpu.A);
label_9991:;
    /* $9991: F0 */ nes_cpu_instruction_boundary(0x9991, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_999E; }
label_9993:;
    /* $9993: 84 */ nes_cpu_instruction_boundary(0x9993, 3); nes_write(0x6F, g_cpu.Y);
label_9995:;
    /* $9995: A0 */ nes_cpu_instruction_boundary(0x9995, 2); g_cpu.Y = 0x04; FLAG_NZ(g_cpu.Y);
label_9997:;
    /* $9997: 84 */ nes_cpu_instruction_boundary(0x9997, 3); nes_write(0x6E, g_cpu.Y);
label_9999:;
    /* $9999: 20 */ nes_cpu_instruction_boundary(0x9999, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x9B; g_cpu.S--; func_8042_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9999, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_999C:;
    /* $999C: A0 */ nes_cpu_instruction_boundary(0x999C, 2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_999E:; /* MetroidAIRoutine_BANK3_endIf_P */
    /* $999E: 84 */ nes_cpu_instruction_boundary(0x999E, 3); nes_write(0x92, g_cpu.Y);
label_99A0:;
    /* $99A0: A5 */ nes_cpu_instruction_boundary(0x99A0, 3); g_cpu.A = nes_read(0x6B); FLAG_NZ(g_cpu.A);
label_99A2:;
    /* $99A2: 30 */ nes_cpu_instruction_boundary(0x99A2, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_99AB; }
label_99A4:;
    /* $99A4: BD */ nes_cpu_instruction_boundary(0x99A4, 4); g_cpu.A = nes_read((0x6B02 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_99A7:;
    /* $99A7: 09 */ nes_cpu_instruction_boundary(0x99A7, 2); g_cpu.A |= 0xA2; FLAG_NZ(g_cpu.A);
label_99A9:;
    /* $99A9: 85 */ nes_cpu_instruction_boundary(0x99A9, 3); nes_write(0x6B, g_cpu.A);
label_99AB:; /* MetroidAIRoutine_BANK3_endIf_Q */
    /* $99AB: 4C */ nes_cpu_instruction_boundary(0x99AB, 3); nes_cpu_instruction_boundary(0x97E2, 2); func_97E2_b3(); return;
}

void func_80C7_b3(void) { /* EnemyIfMoveFailedUp_facingHorizontal */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80C7_b3");
#endif
label_80C7:; /* EnemyIfMoveFailedUp_facingHorizontal */
    /* $80C7: 20 */ nes_cpu_instruction_boundary(0x80C7, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC9; g_cpu.S--; func_80B0_b3();
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
    /* $80CF: F0 */ nes_cpu_instruction_boundary(0x80CF, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0x80C1); return; }
label_80D1:;
    /* $80D1: 10 */ nes_cpu_instruction_boundary(0x80D1, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_80D8; }
label_80D3:;
    /* $80D3: 20 */ nes_cpu_instruction_boundary(0x80D3, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD5; g_cpu.S--; func_81B1_b3();
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
    /* $80DF: 4C */ nes_cpu_instruction_boundary(0x80DF, 3); nes_cpu_instruction_boundary(0x80F6, 2); func_80F6_b3(); return;
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
    /* $80F3: 20 */ nes_cpu_instruction_boundary(0x80F3, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF5; g_cpu.S--; func_856B_b3();
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

void func_B374_b3(void) { /* LoadSFXData_SQ2 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B374_b3");
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

void func_B36C_b3(void) { /* LoadSFXData_Tri */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B36C_b3");
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

void func_B370_b3(void) { /* LoadSFXData_Noise */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B370_b3");
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

void func_B493_b3(void) { /* UpdateContFlags */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B493_b3");
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

void func_B452_b3_body(int _entry) { /* InitSFXData */
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
    /* $B468: 20 */ nes_cpu_instruction_boundary(0xB468, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6A; g_cpu.S--; func_B368_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB468, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B46B:;
    /* $B46B: F0 */ nes_cpu_instruction_boundary(0xB46B, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B47A; }
label_B46D:; /* InitSFXData_SQ2 */
    /* $B46D: 20 */ nes_cpu_instruction_boundary(0xB46D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6F; g_cpu.S--; func_B374_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB46D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B470:;
    /* $B470: F0 */ nes_cpu_instruction_boundary(0xB470, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B47A; }
label_B472:; /* InitSFXData_Tri */
    /* $B472: 20 */ nes_cpu_instruction_boundary(0xB472, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x74; g_cpu.S--; func_B36C_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB472, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B475:;
    /* $B475: F0 */ nes_cpu_instruction_boundary(0xB475, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B47A; }
label_B477:; /* InitSFXData_Noise */
    /* $B477: 20 */ nes_cpu_instruction_boundary(0xB477, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x79; g_cpu.S--; func_B370_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB477, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B47A:; /* InitSFXData_Common */
    /* $B47A: 20 */ nes_cpu_instruction_boundary(0xB47A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x7C; g_cpu.S--; func_B493_b3();
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

void func_B452_b3(void) { /* InitSFXData */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B452_b3");
#endif
    func_B452_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B463_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B463_b3");
#endif
    func_B452_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B472_b3(void) { /* InitSFXData_Tri */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B472_b3");
#endif
    func_B452_b3_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B4A9_b3(void) { /* IncrementSFXFrame */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4A9_b3");
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

void func_B58F_b3(void) { /* EndNoiseSFX */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B58F_b3");
#endif
label_B58F:; /* EndNoiseSFX */
    /* $B58F: 20 */ nes_cpu_instruction_boundary(0xB58F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x91; g_cpu.S--; func_B4A2_b3();
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

void func_B587_b3(void) { /* GotoInitSFXData */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B587_b3");
#endif
label_B587:; /* GotoInitSFXData */
    /* $B587: 4C */ nes_cpu_instruction_boundary(0xB587, 3); nes_cpu_instruction_boundary(0xB452, 2); func_B452_b3(); return;
}

void func_B4A2_b3(void) { /* ClearCurrentSoundFlagsAndContFlags */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4A2_b3");
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

void func_B5A5_b3(void) { /* MultiSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5A5_b3");
#endif
label_B5A5:; /* MultiSFXInit */
    /* $B5A5: 8D */ nes_cpu_instruction_boundary(0xB5A5, 4); nes_write(0x0664, g_cpu.A);
label_B5A8:;
    /* $B5A8: 20 */ nes_cpu_instruction_boundary(0xB5A8, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAA; g_cpu.S--; func_B374_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB5A8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B5AB:;
    /* $B5AB: 20 */ nes_cpu_instruction_boundary(0xB5AB, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAD; g_cpu.S--; func_B493_b3();
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

void func_B62C_b3(void) { /* WriteSQ1SQ2PeriodLow */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B62C_b3");
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

void func_B5CD_b3(void) { /* EndMultiSFX */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5CD_b3");
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
    /* $B5DD: 20 */ nes_cpu_instruction_boundary(0xB5DD, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDF; g_cpu.S--; func_B4A2_b3();
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

void func_B6F2_b3(void) { /* EndSQ1SFX */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6F2_b3");
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
    /* $B6FC: 20 */ nes_cpu_instruction_boundary(0xB6FC, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFE; g_cpu.S--; func_B4A2_b3();
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

void func_B896_b3(void) { /* EndTriSFX */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B896_b3");
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
    /* $B8A3: 20 */ nes_cpu_instruction_boundary(0xB8A3, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA5; g_cpu.S--; func_B4A2_b3();
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

void func_B98C_b3(void) { /* DecreaseSFXTriPeriod */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B98C_b3");
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

void func_B869_b3(void) { /* WriteSFXTriPeriod */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B869_b3");
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

void func_B978_b3(void) { /* IncreaseSFXTriPeriod */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B978_b3");
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

void func_B9A0_b3(void) { /* DivideSFXTriPeriod */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9A0_b3");
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

void func_B8C3_b3(void) { /* RndTriPeriods */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8C3_b3");
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

void func_BA41_b3(void) { /* UpdateVolumeEnvelope */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA41_b3");
#endif
label_BA41:; /* UpdateVolumeEnvelope */
    /* $BA41: BD */ nes_cpu_instruction_boundary(0xBA41, 4); g_cpu.A = nes_read((0x062E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA44:;
    /* $BA44: F0 */ nes_cpu_instruction_boundary(0xBA44, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BA8B; }
label_BA46:;
    /* $BA46: 85 */ nes_cpu_instruction_boundary(0xBA46, 3); nes_write(0xEB, g_cpu.A);
label_BA48:;
    /* $BA48: 20 */ nes_cpu_instruction_boundary(0xBA48, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x4A; g_cpu.S--; func_BA08_b3();
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
    /* $BA9D: 20 */ nes_cpu_instruction_boundary(0xBA9D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x9F; g_cpu.S--; func_B3F0_b3();
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

void func_BA08_b3(void) { /* LoadMusicSQ1SQ2Periods */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA08_b3");
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

void func_B3F0_b3(void) { /* EndOrLoopMusic */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3F0_b3");
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
    /* $B404: 20 */ nes_cpu_instruction_boundary(0xB404, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x06; g_cpu.S--; func_B41D_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB404, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B407:;
    /* $B407: 20 */ nes_cpu_instruction_boundary(0xB407, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x09; g_cpu.S--; func_B43E_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB407, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B40A:; /* GotoClearSpecialAddresses */
    /* $B40A: 20 */ nes_cpu_instruction_boundary(0xB40A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0C; g_cpu.S--; func_B40E_b3();
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

void func_BA37_b3(void) { /* UpdateAllVolumeEnvelopes */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA37_b3");
#endif
label_BA37:; /* UpdateAllVolumeEnvelopes */
    /* $BA37: A2 */ nes_cpu_instruction_boundary(0xBA37, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_BA39:;
    /* $BA39: 20 */ nes_cpu_instruction_boundary(0xBA39, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3B; g_cpu.S--; func_BA41_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBA39, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BA3C:;
    /* $BA3C: E8 */ nes_cpu_instruction_boundary(0xBA3C, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_BA3D:;
    /* $BA3D: 20 */ nes_cpu_instruction_boundary(0xBA3D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3F; g_cpu.S--; func_BA41_b3();
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

void func_B9F3_b3(void) { /* ResetVolumeIndex */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9F3_b3");
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

void func_BB1C_b3(void) { /* LoadNextMusicChannelInstr_Continued */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB1C_b3");
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
    /* $BBAE: 4C */ nes_cpu_instruction_boundary(0xBBAE, 3); nes_cpu_instruction_boundary(0xBAB3, 2); func_BAB3_b3(); return;
label_BBB1:; /* MusicChannelIsUsedBySFX */
    /* $BBB1: FE */ nes_cpu_instruction_boundary(0xBBB1, 7); { uint16_t a=(0x0653 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BBB4:;
    /* $BBB4: 4C */ nes_cpu_instruction_boundary(0xBBB4, 3); nes_cpu_instruction_boundary(0xBBA8, 2);
    goto label_BBA8;
}

void func_BADC_b3(void) { /* LoadNextMusicChannelInstr */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BADC_b3");
#endif
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
    /* $BAF1: 4C */ nes_cpu_instruction_boundary(0xBAF1, 3); nes_cpu_instruction_boundary(0xBB1C, 2); func_BB1C_b3(); return;
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
label_BB16:; return;
label_BB19:; return;
label_BB1C:; return;
label_BB1D:; return;
label_BB1F:; return;
label_BB21:; return;
label_BB23:; return;
label_BB24:; return;
label_BB26:; return;
label_BB27:; return;
label_BB2A:; return;
label_BB2B:; return;
label_BB2E:; return;
label_BB31:; return;
label_BB32:; return;
label_BB33:; return;
label_BB35:; return;
label_BB37:; return;
label_BB3A:; return;
label_BB3D:; return;
label_BB3F:; return;
label_BB40:; return;
label_BB41:; return;
label_BB43:; return;
label_BB45:; return;
label_BB46:; return;
label_BB49:; return;
label_BB4C:; return;
label_BB4E:; return;
label_BB51:; return;
label_BB54:; return;
label_BB56:; return;
label_BB59:; return;
label_BB5A:; return;
label_BB5B:; return;
label_BB5C:; return;
label_BB5D:; return;
label_BB5F:; return;
label_BB61:; return;
label_BB63:; return;
label_BB64:; return;
label_BB66:; return;
label_BB68:; return;
label_BB6A:; return;
label_BB6C:; return;
label_BB6E:; return;
label_BB71:; return;
label_BB73:; return;
label_BB74:; return;
label_BB77:; return;
label_BB7A:; return;
label_BB7C:; return;
label_BB7F:; return;
label_BB82:; return;
label_BB83:; return;
label_BB85:; return;
label_BB87:; return;
label_BB8A:; return;
label_BB8C:; return;
label_BB8E:; return;
label_BB91:; return;
label_BB93:; return;
label_BB96:; return;
label_BB99:; return;
label_BB9C:; return;
label_BB9F:; return;
label_BBA2:; return;
label_BBA5:; return;
label_BBA8:; return;
label_BBAB:; return;
label_BBAE:; return;
label_BBB1:; return;
label_BBB4:; return;
label_BBB7:; return;
label_BBBA:; return;
label_BBBC:; return;
label_BBBE:; return;
label_BBC1:; return;
label_BBC3:; return;
label_BBC5:; return;
label_BBC6:; return;
label_BBC9:; return;
label_BBCB:; return;
label_BBCD:; return;
label_BBCE:; return;
label_BBD0:; return;
label_BBD1:; return;
label_BBD2:; return;
label_BBD4:; return;
label_BBD6:; return;
label_BBD8:; return;
label_BBDB:; return;
label_BBDE:; return;
label_BBE1:; return;
label_BBE3:; return;
label_BBE5:; return;
label_BBE8:; return;
label_BBEB:; return;
label_BBEE:; return;
label_BBF1:; return;
label_BBF4:; return;
label_BBF7:; return;
label_BBFA:; return;
label_BBFC:; return;
label_BBFE:; return;
label_BBFF:; return;
label_BC02:; return;
label_BC03:; return;
label_BC05:; return;
label_BC08:; return;
label_BC09:; return;
label_BC0C:; return;
label_BC0D:; return;
label_BC10:; return;
label_BC12:; return;
label_BC15:; return;
label_BC17:; return;
label_BC19:; return;
label_BC1B:; return;
label_BC1D:; return;
label_BC1F:; return;
label_BC21:; return;
label_BC23:; return;
label_BC25:; return;
label_BC27:; return;
label_BC2A:; return;
label_BC2C:; return;
label_BC2E:; return;
label_BC30:; return;
label_BC33:; return;
label_BC36:; return;
label_BC39:; return;
label_BC3B:; return;
label_BC3D:; return;
label_BC40:; return;
label_BC42:; return;
label_BC45:; return;
label_BC48:; return;
label_BC4B:; return;
label_BC4E:; return;
label_BC50:; return;
label_BC76:; return;
label_BC77:; return;
label_BC7A:; return;
label_BC7D:; return;
label_BC80:; return;
label_BC83:; return;
label_BC86:; return;
label_BC89:; return;
label_BC8B:; return;
label_BC8C:; return;
label_BC8D:; return;
label_BC90:; return;
label_BC93:; return;
label_BC96:; return;
label_BC98:; return;
label_BC9A:; return;
label_BC9C:; return;
label_BC9E:; return;
label_BCA0:; return;
label_BCA2:; return;
label_BCA4:; return;
label_BCA6:; return;
label_BCA8:; return;
label_BCAA:; return;
label_BCAC:; return;
label_BCAE:; return;
label_BCB0:; return;
label_BCB1:; return;
label_BCB4:; return;
label_BCB7:; return;
label_BCBA:; return;
label_BCBC:; return;
label_BCBD:; return;
label_BCBF:; return;
label_BCC1:; return;
label_BCC3:; return;
label_BCC4:; return;
label_BCC7:; return;
label_BCC9:; return;
label_BCCB:; return;
label_BCCD:; return;
label_BCCF:; return;
label_BCD0:; return;
label_BCD3:; return;
label_BCD5:; return;
label_BCD7:; return;
label_BCD9:; return;
label_BCDC:; return;
label_BCDE:; return;
label_BCE0:; return;
label_BCE2:; return;
label_BCE4:; return;
label_BCE6:; return;
label_BCE8:; return;
label_BCEA:; return;
label_BCEC:; return;
label_BCEE:; return;
label_BCF0:; return;
label_BCF2:; return;
label_BCF4:; return;
label_BCF5:; return;
label_BCF6:; return;
label_BCF7:; return;
label_BCF8:; return;
label_BCF9:; return;
label_BCFA:; return;
label_BCFB:; return;
label_BCFC:; return;
label_BCFD:; return;
label_BCFF:; return;
label_BD01:; return;
label_BD03:; return;
label_BD04:; return;
label_BD05:; return;
label_BD07:; return;
label_BD09:; return;
label_BD0B:; return;
label_BD0D:; return;
label_BD0F:; return;
label_BD11:; return;
label_BD13:; return;
label_BD15:; return;
label_BD16:; return;
label_BD17:; return;
label_BD19:; return;
label_BD1B:; return;
label_BD1D:; return;
label_BD1E:; return;
label_BD1F:; return;
label_BD21:; return;
label_BD23:; return;
label_BD25:; return;
label_BD27:; return;
label_BD28:; return;
label_BD2A:; return;
label_BD2C:; return;
label_BD2D:; return;
label_BD2E:; return;
label_BD30:; return;
label_BD32:; return;
label_BD35:; return;
label_BD36:; return;
label_BD39:; return;
label_BD3B:; return;
label_BD3D:; return;
label_BD3E:; return;
label_BD40:; return;
label_BD41:; return;
label_BD42:; return;
label_BD43:; return;
label_BD46:; return;
label_BD48:; return;
label_BD4A:; return;
label_BD4C:; return;
label_BD4F:; return;
label_BD51:; return;
label_BD53:; return;
label_BD55:; return;
label_BD57:; return;
label_BD59:; return;
label_BD5C:; return;
label_BD5D:; return;
label_BD5E:; return;
label_BD60:; return;
label_BD62:; return;
label_BD64:; return;
label_BD65:; return;
label_BD67:; return;
label_BD69:; return;
label_BD6A:; return;
label_BD6B:; return;
label_BD6E:; return;
label_BD71:; return;
label_BD72:; return;
label_BD74:; return;
label_BD76:; return;
label_BD78:; return;
label_BD7A:; return;
label_BD7C:; return;
label_BD7E:; return;
label_BD7F:; return;
label_BD81:; return;
label_BD82:; return;
label_BD83:; return;
label_BD85:; return;
label_BD87:; return;
label_BD89:; return;
label_BD8B:; return;
label_BD8D:; return;
label_BD8E:; return;
label_BD90:; return;
label_BD92:; return;
label_BD94:; return;
label_BD96:; return;
label_BD98:; return;
label_BD9A:; return;
label_BD9B:; return;
label_BD9D:; return;
label_BD9E:; return;
label_BDA1:; return;
label_BDA4:; return;
label_BDA5:; return;
label_BDA6:; return;
label_BDA7:; return;
label_BDA8:; return;
label_BDAA:; return;
label_BDAB:; return;
label_BDAD:; return;
label_BDB0:; return;
label_BDB3:; return;
label_BDB5:; return;
label_BDB6:; return;
label_BDB7:; return;
label_BDB9:; return;
label_BDBB:; return;
label_BDBD:; return;
label_BDBF:; return;
label_BDC1:; return;
label_BDC4:; return;
label_BDC5:; return;
label_BDC8:; return;
label_BDCB:; return;
label_BDCC:; return;
label_BDCD:; return;
label_BDCE:; return;
label_BDD0:; return;
label_BDD1:; return;
label_BDD4:; return;
label_BDD7:; return;
label_BDD9:; return;
label_BDDC:; return;
label_BDDE:; return;
label_BDDF:; return;
label_BDE1:; return;
label_BDE2:; return;
label_BDE3:; return;
label_BDE4:; return;
label_BDE5:; return;
label_BDE6:; return;
label_BDE8:; return;
label_BDE9:; return;
label_BDEA:; return;
label_BDEB:; return;
label_BE08:; return;
label_BE0A:; return;
label_BE0B:; return;
label_BE0E:; return;
label_BE0F:; return;
label_BE12:; return;
label_BE13:; return;
label_BE15:; return;
label_BE17:; return;
label_BE19:; return;
label_BE1B:; return;
label_BE1C:; return;
label_BE1D:; return;
label_BE1F:; return;
label_BE22:; return;
label_BE24:; return;
label_BE26:; return;
label_BE28:; return;
label_BE2B:; return;
label_BE2C:; return;
label_BE2E:; return;
label_BE30:; return;
label_BE33:; return;
label_BE35:; return;
label_BE38:; return;
label_BE3A:; return;
label_BE3B:; return;
label_BE3D:; return;
label_BE40:; return;
label_BE41:; return;
label_BE43:; return;
label_BE45:; return;
label_BE46:; return;
label_BE47:; return;
label_BE49:; return;
label_BE4B:; return;
label_BE4C:; return;
label_BE4E:; return;
label_BE50:; return;
label_BE51:; return;
label_BE53:; return;
label_BE55:; return;
label_BE57:; return;
label_BE5A:; return;
label_BE5C:; return;
label_BE5F:; return;
label_BE60:; return;
label_BE63:; return;
label_BE65:; return;
label_BE67:; return;
label_BE68:; return;
label_BE6A:; return;
label_BE6D:; return;
label_BE70:; return;
label_BEA3:; return;
label_BEA5:; return;
label_BEA7:; return;
label_BEA9:; return;
label_BEAB:; return;
label_BEAD:; return;
label_BEAF:; return;
label_BEB1:; return;
label_BEB3:; return;
label_BEB5:; return;
label_BEB7:; return;
label_BEB9:; return;
label_BEBA:; return;
label_BEBD:; return;
label_BEBE:; return;
label_BEC0:; return;
label_BEC2:; return;
label_BEC3:; return;
label_BEC4:; return;
label_BEC7:; return;
label_BEC8:; return;
label_BEC9:; return;
label_BECA:; return;
label_BECD:; return;
label_BECE:; return;
label_BED1:; return;
label_BED2:; return;
label_BED5:; return;
label_BED6:; return;
label_BED8:; return;
label_BEDA:; return;
label_BEDC:; return;
label_BEDF:; return;
label_BEE0:; return;
label_BEE2:; return;
label_BEE5:; return;
label_BEE6:; return;
label_BEE8:; return;
label_BEE9:; return;
label_BEEA:; return;
label_BEED:; return;
label_BEEE:; return;
label_BEF0:; return;
label_BEF2:; return;
label_BEF4:; return;
label_BEF7:; return;
label_BEF9:; return;
label_BEFB:; return;
label_BEFC:; return;
label_BEFD:; return;
label_BEFF:; return;
label_BF01:; return;
label_BF02:; return;
label_BF04:; return;
label_BF05:; return;
label_BF07:; return;
label_BF09:; return;
label_BF0A:; return;
label_BF0C:; return;
label_BF0E:; return;
label_BF10:; return;
label_BF13:; return;
label_BF14:; return;
label_BF16:; return;
label_BF17:; return;
label_BF18:; return;
label_BF1A:; return;
label_BF1D:; return;
label_BF20:; return;
label_BF23:; return;
label_BF26:; return;
label_BF29:; return;
label_BF2A:; return;
label_BF2C:; return;
label_BF2F:; return;
label_BF32:; return;
label_BF33:; return;
label_BF34:; return;
label_BF35:; return;
label_BF37:; return;
label_BF39:; return;
label_BF3B:; return;
label_BF3E:; return;
label_BF41:; return;
label_BF44:; return;
label_BF47:; return;
label_BF49:; return;
label_BF4C:; return;
label_BF4F:; return;
label_BF52:; return;
label_BF55:; return;
label_BF56:; return;
label_BF58:; return;
label_BF5B:; return;
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
label_BFA3:; return;
label_BFA4:; return;
label_BFA5:; return;
label_BFA6:; return;
label_BFA7:; return;
label_BFA8:; return;
label_BFA9:; return;
label_BFAA:; return;
label_BFAB:; return;
label_BFAC:; return;
label_BFAD:; return;
label_BFAE:; return;
label_BFAF:; return;
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
label_BFD8:; return;
label_BFDB:; return;
label_BFDE:; return;
label_BFE1:; return;
label_BFE2:; return;
label_BFE3:; return;
label_BFE4:; return;
label_BFE5:; return;
label_BFE6:; return;
label_BFE7:; return;
label_BFE8:; return;
label_BFE9:; return;
label_BFEA:; return;
label_BFEB:; return;
label_BFEC:; return;
label_BFED:; return;
label_BFEE:; return;
label_BFEF:; return;
label_BFF0:; return;
label_BFF1:; return;
label_BFF2:; return;
label_BFF3:; return;
label_BFF4:; return;
label_BFF5:; return;
label_BFF6:; return;
label_BFF7:; return;
label_BFF8:; return;
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
}

void func_BBDE_b3(void) { /* MusicChannelInstr_SongNoteNoise */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BBDE_b3");
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
    /* $BBF7: 4C */ nes_cpu_instruction_boundary(0xBBF7, 3); nes_cpu_instruction_boundary(0xBBA8, 2); func_BBA8_b3(); return;
}

void func_BBB7_b3(void) { /* UpdateMusicTriLinearCount */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BBB7_b3");
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
    /* $BBC6: 4C */ nes_cpu_instruction_boundary(0xBBC6, 3); nes_cpu_instruction_boundary(0xBBCD, 2); func_BBCD_b3(); return;
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
    /* $BBDB: 4C */ nes_cpu_instruction_boundary(0xBBDB, 3); nes_cpu_instruction_boundary(0xBB37, 2); func_BB37_b3(); return;
}

void func_BAB3_b3(void) { /* IncrementToNextMusicChannel */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BAB3_b3");
#endif
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
    /* $BAD2: F0 */ nes_cpu_instruction_boundary(0xBAD2, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBAB0); return; }
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
    /* $BAF1: 4C */ nes_cpu_instruction_boundary(0xBAF1, 3); nes_cpu_instruction_boundary(0xBB1C, 2); func_BB1C_b3(); return;
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

void func_BBA8_b3(void) { /* SetMusicInstrDelayToLength */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BBA8_b3");
#endif
label_BBA8:; /* SetMusicInstrDelayToLength */
    /* $BBA8: BD */ nes_cpu_instruction_boundary(0xBBA8, 4); g_cpu.A = nes_read((0x0620 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBAB:;
    /* $BBAB: 9D */ nes_cpu_instruction_boundary(0xBBAB, 5); nes_write((0x0640 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BBAE:;
    /* $BBAE: 4C */ nes_cpu_instruction_boundary(0xBBAE, 3); nes_cpu_instruction_boundary(0xBAB3, 2); func_BAB3_b3(); return;
}

void func_BBCD_b3(void) { /* UpdateMusicTriLinearCount_setToNoteLength */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BBCD_b3");
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
    /* $BBDB: 4C */ nes_cpu_instruction_boundary(0xBBDB, 3); nes_cpu_instruction_boundary(0xBB37, 2); func_BB37_b3(); return;
}

void func_BB37_b3(void) { /* LoadNextMusicChannelInstr_Continued_ReturnFromUpdateMusicTriLinearCount */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB37_b3");
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
    /* $BBAE: 4C */ nes_cpu_instruction_boundary(0xBBAE, 3); nes_cpu_instruction_boundary(0xBAB3, 2); func_BAB3_b3(); return;
label_BBB1:; /* MusicChannelIsUsedBySFX */
    /* $BBB1: FE */ nes_cpu_instruction_boundary(0xBBB1, 7); { uint16_t a=(0x0653 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BBB4:;
    /* $BBB4: 4C */ nes_cpu_instruction_boundary(0xBBB4, 3); nes_cpu_instruction_boundary(0xBBA8, 2);
    goto label_BBA8;
}

void func_BAA5_b3(void) { /* UpdateAllMusicChannels */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BAA5_b3");
#endif
label_BAA5:; /* UpdateAllMusicChannels */
    /* $BAA5: 20 */ nes_cpu_instruction_boundary(0xBAA5, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA7; g_cpu.S--; func_B9F3_b3();
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
    /* $BAF1: 4C */ nes_cpu_instruction_boundary(0xBAF1, 3); nes_cpu_instruction_boundary(0xBB1C, 2); func_BB1C_b3(); return;
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

void func_BCA4_b3(void) { /* Music01Init */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCA4_b3");
#endif
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

void func_BC9A_b3(void) { /* Music02Init */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC9A_b3");
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

void func_BC96_b3(void) { /* Music03Init */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC96_b3");
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

void func_BC89_b3(void) { /* Music04Init */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC89_b3");
#endif
label_BC89:; /* Music04Init */
    /* $BC89: A9 */ nes_cpu_instruction_boundary(0xBC89, 2); g_cpu.A = 0xB3; FLAG_NZ(g_cpu.A);
label_BC8B:; /* XYMusicInit */
    /* $BC8B: AA */ nes_cpu_instruction_boundary(0xBC8B, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BC8C:;
    /* $BC8C: A8 */ nes_cpu_instruction_boundary(0xBC8C, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BC8D:;
    /* $BC8D: 20 */ nes_cpu_instruction_boundary(0xBC8D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; func_B9E4_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC8D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC90:;
    /* $BC90: 20 */ nes_cpu_instruction_boundary(0xBC90, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x92; g_cpu.S--; func_BF19_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC90, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC93:;
    /* $BC93: 4C */ nes_cpu_instruction_boundary(0xBC93, 3); nes_cpu_instruction_boundary(0xBAA5, 2); func_BAA5_b3(); return;
}

void func_BC9E_b3(void) { /* Music05Init */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC9E_b3");
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

void func_B9E4_b3(void) { /* SetVolumeAndDisableSweep */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9E4_b3");
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

void func_BF19_b3(void) { /* InitializeMusic */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BF19_b3");
#endif
label_BF19:; /* InitializeMusic */
    /* $BF19: 20 */ nes_cpu_instruction_boundary(0xBF19, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBF; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1B; g_cpu.S--; func_B3FC_b3();
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

void func_BF1B_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BF1B_b3");
#endif
label_BF1B:;
    /* $BF1B: B3 */ nes_cpu_instruction_boundary(0xBF1B, 5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0xAD) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BF1D:;
    /* $BF1D: 4D */ nes_cpu_instruction_boundary(0xBF1D, 4); g_cpu.A ^= nes_read(0x8D06); FLAG_NZ(g_cpu.A);
label_BF20:;
    /* $BF20: 8D */ nes_cpu_instruction_boundary(0xBF20, 4); nes_write(0xAD06, g_cpu.A);
label_BF23:;
    /* $BF23: 5E */ nes_cpu_instruction_boundary(0xBF23, 7); { uint16_t a=(0xA806 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
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

void func_BF67_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BF67_b3");
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

void func_B17E_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B17E_b3");
#endif
label_B17E:;
    /* $B17E: 28 */ nes_cpu_instruction_boundary(0xB17E, 4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_B17F:;
    /* $B17F: 2E */ nes_cpu_instruction_boundary(0xB17F, 6); { uint16_t a=0x1802; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B182:;
    /* $B182: 44 */ nes_cpu_instruction_boundary(0xB182, 3); (void)nes_read(0x02); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B184:;
    /* $B184: 46 */ nes_cpu_instruction_boundary(0xB184, 5); { uint16_t a=0x48; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_B186:;
    /* $B186: 4A */ nes_cpu_instruction_boundary(0xB186, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B187:;
    /* $B187: 4C */ nes_cpu_instruction_boundary(0xB187, 3); nes_cpu_instruction_boundary(0x1802, 2); call_by_address_tail(0x1802, -1); return;
}

void func_9A06_b3_body(int _entry) { /* GetMetroidAccel */
    switch (_entry) {
        case 1: goto label_9A07;
    }
label_9A06:; /* GetMetroidAccel */
    /* $9A06: 4A */ nes_cpu_instruction_boundary(0x9A06, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9A07:;
    /* $9A07: BD */ nes_cpu_instruction_boundary(0x9A07, 4); g_cpu.A = nes_read((0x0408 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A0A:;
    /* $9A0A: 2A */ nes_cpu_instruction_boundary(0x9A0A, 2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_9A0B:;
    /* $9A0B: A8 */ nes_cpu_instruction_boundary(0x9A0B, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9A0C:;
    /* $9A0C: B9 */ nes_cpu_instruction_boundary(0x9A0C, 4); g_cpu.A = nes_read((0x77F2 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A0F:;
    /* $9A0F: 60 */ nes_cpu_instruction_boundary(0x9A0F, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9A06_b3(void) { /* GetMetroidAccel */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A06_b3");
#endif
    func_9A06_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9A07_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A07_b3");
#endif
    func_9A06_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_80C1_b3(void) { /* EnemyIfMoveFailedUp_bounce */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80C1_b3");
#endif
label_80C1:; /* EnemyIfMoveFailedUp_bounce */
    /* $80C1: 20 */ nes_cpu_instruction_boundary(0x80C1, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC3; g_cpu.S--; func_81FC_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x80C1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_80C4:;
    /* $80C4: 4C */ nes_cpu_instruction_boundary(0x80C4, 3); nes_cpu_instruction_boundary(0x80F6, 2); func_80F6_b3(); return;
}

void func_BB19_b3(void) { /* GotoUpdateMusicTriLinearCount */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB19_b3");
#endif
label_BB19:; /* GotoUpdateMusicTriLinearCount */
    /* $BB19: 4C */ nes_cpu_instruction_boundary(0xBB19, 3); nes_cpu_instruction_boundary(0xBBB7, 2); func_BBB7_b3(); return;
}

void func_BB16_b3(void) { /* GotoMusicChannelInstr_SongNoteNoise */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB16_b3");
#endif
label_BB16:; /* GotoMusicChannelInstr_SongNoteNoise */
    /* $BB16: 4C */ nes_cpu_instruction_boundary(0xBB16, 3); nes_cpu_instruction_boundary(0xBBDE, 2); func_BBDE_b3(); return;
}

void func_BA9D_b3(void) { /* GotoEndOrLoopMusic */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA9D_b3");
#endif
label_BA9D:; /* GotoEndOrLoopMusic */
    /* $BA9D: 20 */ nes_cpu_instruction_boundary(0xBA9D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x9F; g_cpu.S--; func_B3F0_b3();
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

void func_BAA1_b3(void) { /* GotoUpdateAllVolumeEnvelopes */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BAA1_b3");
#endif
label_BAA1:; /* GotoUpdateAllVolumeEnvelopes */
    /* $BAA1: 20 */ nes_cpu_instruction_boundary(0xBAA1, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA3; g_cpu.S--; func_BA37_b3();
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

void func_BAB0_b3(void) { /* MusicChannelBaseEmpty */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BAB0_b3");
#endif
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
    /* $BAF1: 4C */ nes_cpu_instruction_boundary(0xBAF1, 3); nes_cpu_instruction_boundary(0xBB1C, 2); func_BB1C_b3(); return;
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

void func_BC8D_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC8D_b3");
#endif
label_BC8D:;
    /* $BC8D: 20 */ nes_cpu_instruction_boundary(0xBC8D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; func_B9E4_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC8D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC90:;
    /* $BC90: 20 */ nes_cpu_instruction_boundary(0xBC90, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x92; g_cpu.S--; func_BF19_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC90, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC93:;
    /* $BC93: 4C */ nes_cpu_instruction_boundary(0xBC93, 3); nes_cpu_instruction_boundary(0xBAA5, 2); func_BAA5_b3(); return;
}

void func_BC8B_b3(void) { /* XYMusicInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC8B_b3");
#endif
label_BC8B:; /* XYMusicInit */
    /* $BC8B: AA */ nes_cpu_instruction_boundary(0xBC8B, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BC8C:;
    /* $BC8C: A8 */ nes_cpu_instruction_boundary(0xBC8C, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BC8D:;
    /* $BC8D: 20 */ nes_cpu_instruction_boundary(0xBC8D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; func_B9E4_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC8D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC90:;
    /* $BC90: 20 */ nes_cpu_instruction_boundary(0xBC90, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x92; g_cpu.S--; func_BF19_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC90, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC93:;
    /* $BC93: 4C */ nes_cpu_instruction_boundary(0xBC93, 3); nes_cpu_instruction_boundary(0xBAA5, 2); func_BAA5_b3(); return;
}

void func_B3FC_b3(void) { /* CheckMusicFlags */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3FC_b3");
#endif
label_B3FC:; /* CheckMusicFlags */
    /* $B3FC: AD */ nes_cpu_instruction_boundary(0xB3FC, 4); g_cpu.A = nes_read(0x068D); FLAG_NZ(g_cpu.A);
label_B3FF:;
    /* $B3FF: CD */ nes_cpu_instruction_boundary(0xB3FF, 4); { uint8_t m=nes_read(0x064D); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B402:;
    /* $B402: F0 */ nes_cpu_instruction_boundary(0xB402, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B40A; }
label_B404:; /* InitializeSoundAddresses */
    /* $B404: 20 */ nes_cpu_instruction_boundary(0xB404, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x06; g_cpu.S--; func_B41D_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB404, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B407:;
    /* $B407: 20 */ nes_cpu_instruction_boundary(0xB407, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x09; g_cpu.S--; func_B43E_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB407, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B40A:; /* GotoClearSpecialAddresses */
    /* $B40A: 20 */ nes_cpu_instruction_boundary(0xB40A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0C; g_cpu.S--; func_B40E_b3();
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

void func_99E5_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99E5_b3");
#endif
label_99E5:;
    /* $99E5: 0E */ nes_cpu_instruction_boundary(0x99E5, 6); { uint16_t a=0x8503; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_99E8:;
    /* $99E8: 09 */ nes_cpu_instruction_boundary(0x99E8, 2); g_cpu.A |= 0xAD; FLAG_NZ(g_cpu.A);
label_99EA:;
    /* $99EA: 0D */ nes_cpu_instruction_boundary(0x99EA, 4); g_cpu.A |= nes_read(0x8503); FLAG_NZ(g_cpu.A);
label_99ED:;
    /* $99ED: 08 */ nes_cpu_instruction_boundary(0x99ED, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_99EE:;
    /* $99EE: AD */ nes_cpu_instruction_boundary(0x99EE, 4); g_cpu.A = nes_read(0x030C); FLAG_NZ(g_cpu.A);
label_99F1:;
    /* $99F1: 85 */ nes_cpu_instruction_boundary(0x99F1, 3); nes_write(0x0B, g_cpu.A);
label_99F3:;
    /* $99F3: 60 */ nes_cpu_instruction_boundary(0x99F3, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8009_b3(void) { /* CommonJump_CrawlerAIRoutine_ShouldCrawlerMove */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8009_b3");
#endif
label_8009:; /* CommonJump_CrawlerAIRoutine_ShouldCrawlerMove */
    /* $8009: 4C */ nes_cpu_instruction_boundary(0x8009, 3); nes_cpu_instruction_boundary(0xF852, 2); func_F852(); return;
}

void func_9B45_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9B45_b3");
#endif
label_9B45:;
    /* $9B45: 97 */ nes_cpu_instruction_boundary(0x9B45, 4); nes_write((0xBC + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_9B47:;
    /* $9B47: F4 */ nes_cpu_instruction_boundary(0x9B47, 4); (void)nes_read((0x6B + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9B49:;
    /* $9B49: D0 */ nes_cpu_instruction_boundary(0x9B49, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9B4C; }
label_9B4B:;
    /* $9B4B: 60 */ nes_cpu_instruction_boundary(0x9B4B, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9B4C:; /* UpdateCannon */
    /* $9B4C: 20 */ nes_cpu_instruction_boundary(0x9B4C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x4E; g_cpu.S--; func_9C4D_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9B4C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9B4F:;
    /* $9B4F: 98 */ nes_cpu_instruction_boundary(0x9B4F, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_9B50:;
    /* $9B50: D0 */ nes_cpu_instruction_boundary(0x9B50, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0x9B4B, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9B4B;
    }
label_9B52:;
    /* $9B52: AC */ nes_cpu_instruction_boundary(0x9B52, 4); g_cpu.Y = nes_read(0x010B); FLAG_NZ(g_cpu.Y);
label_9B55:;
    /* $9B55: C8 */ nes_cpu_instruction_boundary(0x9B55, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9B56:;
    /* $9B56: D0 */ nes_cpu_instruction_boundary(0x9B56, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9B65; }
label_9B58:;
    /* $9B58: BD */ nes_cpu_instruction_boundary(0x9B58, 4); g_cpu.A = nes_read((0x6BF8 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B5B:;
    /* $9B5B: C9 */ nes_cpu_instruction_boundary(0x9B5B, 2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_9B5D:;
    /* $9B5D: F0 */ nes_cpu_instruction_boundary(0x9B5D, 2); if (g_cpu.Z) {
    nes_cpu_instruction_boundary(0x9B4B, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9B4B;
    }
label_9B5F:;
    /* $9B5F: 20 */ nes_cpu_instruction_boundary(0x9B5F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x61; g_cpu.S--; func_9B70_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9B5F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9B62:;
    /* $9B62: 4C */ nes_cpu_instruction_boundary(0x9B62, 3); nes_cpu_instruction_boundary(0x9C2B, 2); func_9C2B_b3(); return;
label_9B65:; /* UpdateCannon_escape */
    /* $9B65: A5 */ nes_cpu_instruction_boundary(0x9B65, 3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_9B67:;
    /* $9B67: 29 */ nes_cpu_instruction_boundary(0x9B67, 2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9B69:;
    /* $9B69: D0 */ nes_cpu_instruction_boundary(0x9B69, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0x9B4B, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9B4B;
    }
label_9B6B:;
    /* $9B6B: A9 */ nes_cpu_instruction_boundary(0x9B6B, 2); g_cpu.A = 0x19; FLAG_NZ(g_cpu.A);
label_9B6D:;
    /* $9B6D: 4C */ nes_cpu_instruction_boundary(0x9B6D, 3); nes_cpu_instruction_boundary(0x9C31, 2); func_9C31_b3(); return;
}

void func_9B85_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9B85_b3");
#endif
label_9B85:;
    /* $9B85: 94 */ nes_cpu_instruction_boundary(0x9B85, 4); nes_write((0x9D + g_cpu.X) & 0xFF, g_cpu.Y);
label_9B87:;
    /* $9B87: 18 */ nes_cpu_instruction_boundary(0x9B87, 2); g_cpu.C = 0;
label_9B88:;
    /* $9B88: 7D */ nes_cpu_instruction_boundary(0x9B88, 4); { uint8_t m=nes_read((0x6BFB + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9B8B:;
    /* $9B8B: A8 */ nes_cpu_instruction_boundary(0x9B8B, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9B8C:;
    /* $9B8C: B9 */ nes_cpu_instruction_boundary(0x9B8C, 4); g_cpu.A = nes_read((0x9D99 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B8F:;
    /* $9B8F: 10 */ nes_cpu_instruction_boundary(0x9B8F, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_9BAB; }
label_9B91:;
    /* $9B91: C9 */ nes_cpu_instruction_boundary(0x9B91, 2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_9B93:;
    /* $9B93: D0 */ nes_cpu_instruction_boundary(0x9B93, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9B9F; }
label_9B95:;
    /* $9B95: BC */ nes_cpu_instruction_boundary(0x9B95, 4); g_cpu.Y = nes_read((0x6BF8 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_9B98:;
    /* $9B98: A9 */ nes_cpu_instruction_boundary(0x9B98, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9B9A:;
    /* $9B9A: 9D */ nes_cpu_instruction_boundary(0x9B9A, 5); nes_write((0x6BFB + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9B9D:;
    /* $9B9D: F0 */ nes_cpu_instruction_boundary(0x9B9D, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0x9B84); return; }
label_9B9F:; /* UpdateCannon_RunInstructions_shootEnProjectile */
    /* $9B9F: FE */ nes_cpu_instruction_boundary(0x9B9F, 7); { uint16_t a=(0x6BFB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9BA2:;
    /* $9BA2: 20 */ nes_cpu_instruction_boundary(0x9BA2, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA4; g_cpu.S--; func_9BAF_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9BA2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9BA5:;
    /* $9BA5: BC */ nes_cpu_instruction_boundary(0x9BA5, 4); g_cpu.Y = nes_read((0x6BF8 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_9BA8:;
    /* $9BA8: 4C */ nes_cpu_instruction_boundary(0x9BA8, 3); nes_cpu_instruction_boundary(0x9B84, 2); func_9B84_b3(); return;
label_9BAB:; /* UpdateCannon_RunInstructions_setAngle */
    /* $9BAB: 9D */ nes_cpu_instruction_boundary(0x9BAB, 5); nes_write((0x6BF9 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9BAE:;
    /* $9BAE: 60 */ nes_cpu_instruction_boundary(0x9BAE, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A0F1_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A0F1_b3");
#endif
label_A0F1:;
    /* $A0F1: A9 */ nes_cpu_instruction_boundary(0xA0F1, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_A0F3:;
    /* $A0F3: 9D */ nes_cpu_instruction_boundary(0xA0F3, 5); nes_write((0x0503 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0F6:;
    /* $A0F6: A5 */ nes_cpu_instruction_boundary(0xA0F6, 3); g_cpu.A = nes_read(0x4B); FLAG_NZ(g_cpu.A);
label_A0F8:;
    /* $A0F8: 48 */ nes_cpu_instruction_boundary(0xA0F8, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A0F9:;
    /* $A0F9: 86 */ nes_cpu_instruction_boundary(0xA0F9, 3); nes_write(0x4B, g_cpu.X);
label_A0FB:;
    /* $A0FB: 20 */ nes_cpu_instruction_boundary(0xA0FB, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFD; g_cpu.S--; func_803F_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0FB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0FE:;
    /* $A0FE: 68 */ nes_cpu_instruction_boundary(0xA0FE, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A0FF:;
    /* $A0FF: 85 */ nes_cpu_instruction_boundary(0xA0FF, 3); nes_write(0x4B, g_cpu.A);
label_A101:;
    /* $A101: D0 */ nes_cpu_instruction_boundary(0xA101, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A13E; }
label_A103:; /* UpdateBullet_CollisionWithZebetiteAndMotherBrainGlass_checkZebetite */
    /* $A103: A5 */ nes_cpu_instruction_boundary(0xA103, 3); g_cpu.A = nes_read(0x04); FLAG_NZ(g_cpu.A);
label_A105:;
    /* $A105: 4A */ nes_cpu_instruction_boundary(0xA105, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A106:;
    /* $A106: 90 */ nes_cpu_instruction_boundary(0xA106, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A10A; }
label_A108:;
    /* $A108: C6 */ nes_cpu_instruction_boundary(0xA108, 5); { uint16_t a=0x04; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A10A:; /* UpdateBullet_CollisionWithZebetiteAndMotherBrainGlass_endIf_andFE */
    /* $A10A: A0 */ nes_cpu_instruction_boundary(0xA10A, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A10C:;
    /* $A10C: B1 */ nes_cpu_instruction_boundary(0xA10C, 5); g_cpu.A = nes_read((nes_read16zp(0x04) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A10E:;
    /* $A10E: 4A */ nes_cpu_instruction_boundary(0xA10E, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A10F:;
    /* $A10F: B0 */ nes_cpu_instruction_boundary(0xA10F, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A13E; }
label_A111:;
    /* $A111: C9 */ nes_cpu_instruction_boundary(0xA111, 2); { int r=g_cpu.A-0x48; g_cpu.C=(g_cpu.A>=0x48)?1:0; FLAG_NZ(r&0xFF); }
label_A113:;
    /* $A113: 90 */ nes_cpu_instruction_boundary(0xA113, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A13E; }
label_A115:;
    /* $A115: C9 */ nes_cpu_instruction_boundary(0xA115, 2); { int r=g_cpu.A-0x4C; g_cpu.C=(g_cpu.A>=0x4C)?1:0; FLAG_NZ(r&0xFF); }
label_A117:;
    /* $A117: B0 */ nes_cpu_instruction_boundary(0xA117, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A13E; }
label_A119:; /* UpdateBullet_CollisionWithZebetiteAndMotherBrainGlass_loop_Zebetite */
    /* $A119: B9 */ nes_cpu_instruction_boundary(0xA119, 4); g_cpu.A = nes_read((0x0758 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A11C:;
    /* $A11C: F0 */ nes_cpu_instruction_boundary(0xA11C, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A12E; }
label_A11E:;
    /* $A11E: A5 */ nes_cpu_instruction_boundary(0xA11E, 3); g_cpu.A = nes_read(0x04); FLAG_NZ(g_cpu.A);
label_A120:;
    /* $A120: 29 */ nes_cpu_instruction_boundary(0xA120, 2); g_cpu.A &= 0x9E; FLAG_NZ(g_cpu.A);
label_A122:;
    /* $A122: D9 */ nes_cpu_instruction_boundary(0xA122, 4); { uint8_t m=nes_read((0x0759 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A125:;
    /* $A125: D0 */ nes_cpu_instruction_boundary(0xA125, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A12E; }
label_A127:;
    /* $A127: A5 */ nes_cpu_instruction_boundary(0xA127, 3); g_cpu.A = nes_read(0x05); FLAG_NZ(g_cpu.A);
label_A129:;
    /* $A129: D9 */ nes_cpu_instruction_boundary(0xA129, 4); { uint8_t m=nes_read((0x075A + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A12C:;
    /* $A12C: F0 */ nes_cpu_instruction_boundary(0xA12C, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A139; }
label_A12E:; /* UpdateBullet_CollisionWithZebetiteAndMotherBrainGlass_notTheRightZebetite */
    /* $A12E: 98 */ nes_cpu_instruction_boundary(0xA12E, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A12F:;
    /* $A12F: 18 */ nes_cpu_instruction_boundary(0xA12F, 2); g_cpu.C = 0;
label_A130:;
    /* $A130: 69 */ nes_cpu_instruction_boundary(0xA130, 2); { uint16_t r = g_cpu.A + 0x08 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x08); g_cpu.A=r&0xFF; }
label_A132:;
    /* $A132: A8 */ nes_cpu_instruction_boundary(0xA132, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A133:;
    /* $A133: C9 */ nes_cpu_instruction_boundary(0xA133, 2); { int r=g_cpu.A-0x28; g_cpu.C=(g_cpu.A>=0x28)?1:0; FLAG_NZ(r&0xFF); }
label_A135:;
    /* $A135: D0 */ nes_cpu_instruction_boundary(0xA135, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xA119, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A119;
    }
label_A137:;
    /* $A137: F0 */ nes_cpu_instruction_boundary(0xA137, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A13E; }
label_A139:; /* UpdateBullet_CollisionWithZebetiteAndMotherBrainGlass_theRightZebetite */
    /* $A139: A9 */ nes_cpu_instruction_boundary(0xA139, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_A13B:;
    /* $A13B: 99 */ nes_cpu_instruction_boundary(0xA13B, 5); nes_write((0x075D + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A13E:; /* UpdateBullet_CollisionWithZebetiteAndMotherBrainGlass_exit */
    /* $A13E: 68 */ nes_cpu_instruction_boundary(0xA13E, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A13F:;
    /* $A13F: 68 */ nes_cpu_instruction_boundary(0xA13F, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A140:;
    /* $A140: 18 */ nes_cpu_instruction_boundary(0xA140, 2); g_cpu.C = 0;
label_A141:;
    /* $A141: 60 */ nes_cpu_instruction_boundary(0xA141, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_847F_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_847F_b3");
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
    /* $8492: 20 */ nes_cpu_instruction_boundary(0x8492, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x94; g_cpu.S--; func_8563_b3();
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

void func_800F_b3(void) { /* CommonJump_InitEnAnimIndex */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_800F_b3");
#endif
label_800F:; /* CommonJump_InitEnAnimIndex */
    /* $800F: 4C */ nes_cpu_instruction_boundary(0x800F, 3); nes_cpu_instruction_boundary(0xF68D, 2); func_F68D(); return;
}

void func_8036_b3(void) { /* CommonJump_EnemyGetDeltaY_UsingAcceleration */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8036_b3");
#endif
label_8036:; /* CommonJump_EnemyGetDeltaY_UsingAcceleration */
    /* $8036: 4C */ nes_cpu_instruction_boundary(0x8036, 3); nes_cpu_instruction_boundary(0x833F, 2); func_833F_b3(); return;
}

void func_8039_b3(void) { /* CommonJump_EnemyGetDeltaX_UsingAcceleration */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8039_b3");
#endif
label_8039:; /* CommonJump_EnemyGetDeltaX_UsingAcceleration */
    /* $8039: 4C */ nes_cpu_instruction_boundary(0x8039, 3); nes_cpu_instruction_boundary(0x8395, 2); func_8395_b3(); return;
}

void func_801B_b3(void) { /* CommonJump_EnemyFlipAfterDisplacement */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_801B_b3");
#endif
label_801B:; /* CommonJump_EnemyFlipAfterDisplacement */
    /* $801B: 4C */ nes_cpu_instruction_boundary(0x801B, 3); nes_cpu_instruction_boundary(0xFB88, 2); func_FB88(); return;
}

void func_801E_b3(void) { /* CommonJump_InitEnActiveAnimIndex_NoInitOffset */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_801E_b3");
#endif
label_801E:; /* CommonJump_InitEnActiveAnimIndex_NoInitOffset */
    /* $801E: 4C */ nes_cpu_instruction_boundary(0x801E, 3); nes_cpu_instruction_boundary(0xFBCA, 2); func_FBCA(); return;
}

void func_800C_b3(void) { /* CommonJump_UpdateEnemyAnim */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_800C_b3");
#endif
label_800C:; /* CommonJump_UpdateEnemyAnim */
    /* $800C: 4C */ nes_cpu_instruction_boundary(0x800C, 3); nes_cpu_instruction_boundary(0xE094, 2); func_E094(); return;
}

void func_802D_b3(void) { /* CommonJump_EnemyGetDeltaY */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_802D_b3");
#endif
label_802D:; /* CommonJump_EnemyGetDeltaY */
    /* $802D: 4C */ nes_cpu_instruction_boundary(0x802D, 3); nes_cpu_instruction_boundary(0x8244, 2); func_8244_b3(); return;
}

void func_8030_b3(void) { /* CommonJump_EnemyGetDeltaX */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8030_b3");
#endif
label_8030:; /* CommonJump_EnemyGetDeltaX */
    /* $8030: 4C */ nes_cpu_instruction_boundary(0x8030, 3); nes_cpu_instruction_boundary(0x8318, 2); func_8318_b3(); return;
}

void func_8033_b3(void) { /* CommonJump_EnemyBGCollideOrApplySpeed */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8033_b3");
#endif
label_8033:; /* CommonJump_EnemyBGCollideOrApplySpeed */
    /* $8033: 4C */ nes_cpu_instruction_boundary(0x8033, 3); nes_cpu_instruction_boundary(0xFA1E, 2); func_FA1E(); return;
}

void func_8021_b3(void) { /* CommonJump_SpawnEnProjectile */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8021_b3");
#endif
label_8021:; /* CommonJump_SpawnEnProjectile */
    /* $8021: 4C */ nes_cpu_instruction_boundary(0x8021, 3); nes_cpu_instruction_boundary(0xF870, 2); func_F870(); return;
}

void func_B61C_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B61C_b3");
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

void func_8001_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8001_b3");
#endif
label_8001:;
    /* $8001: 10 */ nes_cpu_instruction_boundary(0x8001, 2); if (!g_cpu.N) { maybe_trigger_vblank(2); call_by_address(0x7FF7); return; }
label_8003:; /* CommonJump_UpdateEnemyCommon_noMove */
    /* $8003: 4C */ nes_cpu_instruction_boundary(0x8003, 3); nes_cpu_instruction_boundary(0xF438, 2); func_F438(); return;
}

void func_9AF9_b3(void) { /* SetRinkaSpeed_BANK3 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9AF9_b3");
#endif
label_9AF9:; /* SetRinkaSpeed_BANK3 */
    /* $9AF9: A5 */ nes_cpu_instruction_boundary(0x9AF9, 3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_9AFB:;
    /* $9AFB: 48 */ nes_cpu_instruction_boundary(0x9AFB, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9AFC:;
    /* $9AFC: 20 */ nes_cpu_instruction_boundary(0x9AFC, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFE; g_cpu.S--; func_9B1B_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9AFC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9AFF:;
    /* $9AFF: 9D */ nes_cpu_instruction_boundary(0x9AFF, 5); nes_write((0x0402 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9B02:;
    /* $9B02: 68 */ nes_cpu_instruction_boundary(0x9B02, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9B03:;
    /* $9B03: 20 */ nes_cpu_instruction_boundary(0x9B03, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x05; g_cpu.S--; func_9B20_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9B03, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9B06:;
    /* $9B06: 9D */ nes_cpu_instruction_boundary(0x9B06, 5); nes_write((0x0406 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9B09:;
    /* $9B09: A5 */ nes_cpu_instruction_boundary(0x9B09, 3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_9B0B:;
    /* $9B0B: 48 */ nes_cpu_instruction_boundary(0x9B0B, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9B0C:;
    /* $9B0C: 20 */ nes_cpu_instruction_boundary(0x9B0C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0E; g_cpu.S--; func_9B1B_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9B0C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9B0F:;
    /* $9B0F: 9D */ nes_cpu_instruction_boundary(0x9B0F, 5); nes_write((0x0403 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9B12:;
    /* $9B12: 68 */ nes_cpu_instruction_boundary(0x9B12, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9B13:;
    /* $9B13: 20 */ nes_cpu_instruction_boundary(0x9B13, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x15; g_cpu.S--; func_9B20_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9B13, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9B16:;
    /* $9B16: 9D */ nes_cpu_instruction_boundary(0x9B16, 5); nes_write((0x0407 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9B19:;
    /* $9B19: 60 */ nes_cpu_instruction_boundary(0x9B19, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9DF2_b3(void) { /* MotherBrain_Idle_CollideWithSamus */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9DF2_b3");
#endif
label_9DF2:; /* MotherBrain_Idle_CollideWithSamus */
    /* $9DF2: AD */ nes_cpu_instruction_boundary(0x9DF2, 4); g_cpu.A = nes_read(0x030C); FLAG_NZ(g_cpu.A);
label_9DF5:;
    /* $9DF5: 45 */ nes_cpu_instruction_boundary(0x9DF5, 3); g_cpu.A ^= nes_read(0x9D); FLAG_NZ(g_cpu.A);
label_9DF7:;
    /* $9DF7: D0 */ nes_cpu_instruction_boundary(0x9DF7, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0x9DF1); return; }
label_9DF9:;
    /* $9DF9: AD */ nes_cpu_instruction_boundary(0x9DF9, 4); g_cpu.A = nes_read(0x030E); FLAG_NZ(g_cpu.A);
label_9DFC:;
    /* $9DFC: 38 */ nes_cpu_instruction_boundary(0x9DFC, 2); g_cpu.C = 1;
label_9DFD:;
    /* $9DFD: E9 */ nes_cpu_instruction_boundary(0x9DFD, 2); { uint8_t m=0x48; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9DFF:;
    /* $9DFF: C9 */ nes_cpu_instruction_boundary(0x9DFF, 2); { int r=g_cpu.A-0x2F; g_cpu.C=(g_cpu.A>=0x2F)?1:0; FLAG_NZ(r&0xFF); }
label_9E01:;
    /* $9E01: B0 */ nes_cpu_instruction_boundary(0x9E01, 2); if (g_cpu.C) { maybe_trigger_vblank(2); call_by_address(0x9DF1); return; }
label_9E03:;
    /* $9E03: AD */ nes_cpu_instruction_boundary(0x9E03, 4); g_cpu.A = nes_read(0x030D); FLAG_NZ(g_cpu.A);
label_9E06:;
    /* $9E06: 38 */ nes_cpu_instruction_boundary(0x9E06, 2); g_cpu.C = 1;
label_9E07:;
    /* $9E07: E9 */ nes_cpu_instruction_boundary(0x9E07, 2); { uint8_t m=0x80; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9E09:;
    /* $9E09: 10 */ nes_cpu_instruction_boundary(0x9E09, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_9E0E; }
label_9E0B:;
    /* $9E0B: 20 */ nes_cpu_instruction_boundary(0x9E0B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9E; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0D; g_cpu.S--; func_95C6_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9E0B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9E0E:;
    /* $9E0E: C9 */ nes_cpu_instruction_boundary(0x9E0E, 2); { int r=g_cpu.A-0x20; g_cpu.C=(g_cpu.A>=0x20)?1:0; FLAG_NZ(r&0xFF); }
label_9E10:;
    /* $9E10: B0 */ nes_cpu_instruction_boundary(0x9E10, 2); if (g_cpu.C) { maybe_trigger_vblank(2); call_by_address(0x9DF1); return; }
label_9E12:;
    /* $9E12: A9 */ nes_cpu_instruction_boundary(0x9E12, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9E14:;
    /* $9E14: 85 */ nes_cpu_instruction_boundary(0x9E14, 3); nes_write(0x6E, g_cpu.A);
label_9E16:;
    /* $9E16: A9 */ nes_cpu_instruction_boundary(0x9E16, 2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_9E18:;
    /* $9E18: 85 */ nes_cpu_instruction_boundary(0x9E18, 3); nes_write(0x6F, g_cpu.A);
label_9E1A:;
    /* $9E1A: A9 */ nes_cpu_instruction_boundary(0x9E1A, 2); g_cpu.A = 0x38; FLAG_NZ(g_cpu.A);
label_9E1C:;
    /* $9E1C: 8D */ nes_cpu_instruction_boundary(0x9E1C, 4); nes_write(0x030A, g_cpu.A);
label_9E1F:;
    /* $9E1F: 4C */ nes_cpu_instruction_boundary(0x9E1F, 3); nes_cpu_instruction_boundary(0x8042, 2); func_8042_b3(); return;
}

void func_9E43_b3(void) { /* UpdateMotherBrainFlashDelay */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9E43_b3");
#endif
label_9E43:; /* UpdateMotherBrainFlashDelay */
    /* $9E43: C6 */ nes_cpu_instruction_boundary(0x9E43, 5); { uint16_t a=0x9F; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9E45:;
    /* $9E45: D0 */ nes_cpu_instruction_boundary(0x9E45, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9E4B; }
label_9E47:;
    /* $9E47: A9 */ nes_cpu_instruction_boundary(0x9E47, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9E49:;
    /* $9E49: 85 */ nes_cpu_instruction_boundary(0x9E49, 3); nes_write(0x98, g_cpu.A);
label_9E4B:;
    /* $9E4B: A5 */ nes_cpu_instruction_boundary(0x9E4B, 3); g_cpu.A = nes_read(0x9F); FLAG_NZ(g_cpu.A);
label_9E4D:;
    /* $9E4D: 29 */ nes_cpu_instruction_boundary(0x9E4D, 2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9E4F:;
    /* $9E4F: 4A */ nes_cpu_instruction_boundary(0x9E4F, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9E50:;
    /* $9E50: A8 */ nes_cpu_instruction_boundary(0x9E50, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9E51:;
    /* $9E51: 60 */ nes_cpu_instruction_boundary(0x9E51, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9F69_b3(void) { /* MotherBrain_SpawnDoor */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9F69_b3");
#endif
label_9F69:; /* MotherBrain_SpawnDoor */
    /* $9F69: A5 */ nes_cpu_instruction_boundary(0x9F69, 3); g_cpu.A = nes_read(0x50); FLAG_NZ(g_cpu.A);
label_9F6B:;
    /* $9F6B: 18 */ nes_cpu_instruction_boundary(0x9F6B, 2); g_cpu.C = 0;
label_9F6C:;
    /* $9F6C: 65 */ nes_cpu_instruction_boundary(0x9F6C, 3); { uint8_t m=nes_read(0x4F); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9F6E:;
    /* $9F6E: 38 */ nes_cpu_instruction_boundary(0x9F6E, 2); g_cpu.C = 1;
label_9F6F:;
    /* $9F6F: 2A */ nes_cpu_instruction_boundary(0x9F6F, 2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_9F70:;
    /* $9F70: 29 */ nes_cpu_instruction_boundary(0x9F70, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_9F72:;
    /* $9F72: A8 */ nes_cpu_instruction_boundary(0x9F72, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9F73:;
    /* $9F73: BE */ nes_cpu_instruction_boundary(0x9F73, 4); g_cpu.X = nes_read((0x9F65 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_9F76:;
    /* $9F76: A9 */ nes_cpu_instruction_boundary(0x9F76, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9F78:;
    /* $9F78: 9D */ nes_cpu_instruction_boundary(0x9F78, 5); nes_write((0x030F + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9F7B:;
    /* $9F7B: A9 */ nes_cpu_instruction_boundary(0x9F7B, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9F7D:;
    /* $9F7D: 9D */ nes_cpu_instruction_boundary(0x9F7D, 5); nes_write((0x0307 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9F80:;
    /* $9F80: A9 */ nes_cpu_instruction_boundary(0x9F80, 2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_9F82:;
    /* $9F82: 9D */ nes_cpu_instruction_boundary(0x9F82, 5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9F85:;
    /* $9F85: A5 */ nes_cpu_instruction_boundary(0x9F85, 3); g_cpu.A = nes_read(0x9D); FLAG_NZ(g_cpu.A);
label_9F87:;
    /* $9F87: 9D */ nes_cpu_instruction_boundary(0x9F87, 5); nes_write((0x030C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9F8A:;
    /* $9F8A: A9 */ nes_cpu_instruction_boundary(0x9F8A, 2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_9F8C:;
    /* $9F8C: 9D */ nes_cpu_instruction_boundary(0x9F8C, 5); nes_write((0x030E + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9F8F:;
    /* $9F8F: A9 */ nes_cpu_instruction_boundary(0x9F8F, 2); g_cpu.A = 0x68; FLAG_NZ(g_cpu.A);
label_9F91:;
    /* $9F91: 9D */ nes_cpu_instruction_boundary(0x9F91, 5); nes_write((0x030D + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9F94:;
    /* $9F94: A9 */ nes_cpu_instruction_boundary(0x9F94, 2); g_cpu.A = 0x55; FLAG_NZ(g_cpu.A);
label_9F96:;
    /* $9F96: 9D */ nes_cpu_instruction_boundary(0x9F96, 5); nes_write((0x0305 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9F99:;
    /* $9F99: 9D */ nes_cpu_instruction_boundary(0x9F99, 5); nes_write((0x0306 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9F9C:;
    /* $9F9C: A9 */ nes_cpu_instruction_boundary(0x9F9C, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9F9E:;
    /* $9F9E: 9D */ nes_cpu_instruction_boundary(0x9F9E, 5); nes_write((0x0304 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9FA1:;
    /* $9FA1: A9 */ nes_cpu_instruction_boundary(0x9FA1, 2); g_cpu.A = 0xF7; FLAG_NZ(g_cpu.A);
label_9FA3:;
    /* $9FA3: 9D */ nes_cpu_instruction_boundary(0x9FA3, 5); nes_write((0x0303 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9FA6:;
    /* $9FA6: A9 */ nes_cpu_instruction_boundary(0x9FA6, 2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_9FA8:;
    /* $9FA8: 8D */ nes_cpu_instruction_boundary(0x9FA8, 4); nes_write(0x0503, g_cpu.A);
label_9FAB:;
    /* $9FAB: A9 */ nes_cpu_instruction_boundary(0x9FAB, 2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_9FAD:;
    /* $9FAD: 8D */ nes_cpu_instruction_boundary(0x9FAD, 4); nes_write(0x0508, g_cpu.A);
label_9FB0:;
    /* $9FB0: A5 */ nes_cpu_instruction_boundary(0x9FB0, 3); g_cpu.A = nes_read(0x9D); FLAG_NZ(g_cpu.A);
label_9FB2:;
    /* $9FB2: 0A */ nes_cpu_instruction_boundary(0x9FB2, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9FB3:;
    /* $9FB3: 0A */ nes_cpu_instruction_boundary(0x9FB3, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9FB4:;
    /* $9FB4: 09 */ nes_cpu_instruction_boundary(0x9FB4, 2); g_cpu.A |= 0x61; FLAG_NZ(g_cpu.A);
label_9FB6:;
    /* $9FB6: 8D */ nes_cpu_instruction_boundary(0x9FB6, 4); nes_write(0x0509, g_cpu.A);
label_9FB9:;
    /* $9FB9: A9 */ nes_cpu_instruction_boundary(0x9FB9, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9FBB:;
    /* $9FBB: 85 */ nes_cpu_instruction_boundary(0x9FBB, 3); nes_write(0x4B, g_cpu.A);
label_9FBD:;
    /* $9FBD: 4C */ nes_cpu_instruction_boundary(0x9FBD, 3); nes_cpu_instruction_boundary(0x803F, 2); func_803F_b3(); return;
}

void func_9FED_b3_body(int _entry) { /* MotherBrain_Idle_HandleBeingHit */
    switch (_entry) {
        case 1: goto label_A001;
    }
label_9FED:; /* MotherBrain_Idle_HandleBeingHit */
    /* $9FED: A5 */ nes_cpu_instruction_boundary(0x9FED, 3); g_cpu.A = nes_read(0x9E); FLAG_NZ(g_cpu.A);
label_9FEF:;
    /* $9FEF: F0 */ nes_cpu_instruction_boundary(0x9FEF, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_A01A; }
label_9FF1:;
    /* $9FF1: AD */ nes_cpu_instruction_boundary(0x9FF1, 4); g_cpu.A = nes_read(0x0684); FLAG_NZ(g_cpu.A);
label_9FF4:;
    /* $9FF4: 09 */ nes_cpu_instruction_boundary(0x9FF4, 2); g_cpu.A |= 0x02; FLAG_NZ(g_cpu.A);
label_9FF6:;
    /* $9FF6: 8D */ nes_cpu_instruction_boundary(0x9FF6, 4); nes_write(0x0684, g_cpu.A);
label_9FF9:;
    /* $9FF9: E6 */ nes_cpu_instruction_boundary(0x9FF9, 5); { uint16_t a=0x99; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9FFB:;
    /* $9FFB: A5 */ nes_cpu_instruction_boundary(0x9FFB, 3); g_cpu.A = nes_read(0x99); FLAG_NZ(g_cpu.A);
label_9FFD:;
    /* $9FFD: C9 */ nes_cpu_instruction_boundary(0x9FFD, 2); { int r=g_cpu.A-0x20; g_cpu.C=(g_cpu.A>=0x20)?1:0; FLAG_NZ(r&0xFF); }
label_9FFF:;
    /* $9FFF: A0 */ nes_cpu_instruction_boundary(0x9FFF, 2); g_cpu.Y = 0x02; FLAG_NZ(g_cpu.Y);
label_A001:;
    /* $A001: A9 */ nes_cpu_instruction_boundary(0xA001, 2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_A003:;
    /* $A003: 90 */ nes_cpu_instruction_boundary(0xA003, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A016; }
label_A005:;
    /* $A005: A2 */ nes_cpu_instruction_boundary(0xA005, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A007:; /* MotherBrain_Idle_HandleBeingHit_loop */
    /* $A007: A9 */ nes_cpu_instruction_boundary(0xA007, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A009:;
    /* $A009: 9D */ nes_cpu_instruction_boundary(0xA009, 5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A00C:;
    /* $A00C: 20 */ nes_cpu_instruction_boundary(0xA00C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0E; g_cpu.S--; func_9EF9_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA00C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A00F:;
    /* $A00F: C9 */ nes_cpu_instruction_boundary(0xA00F, 2); { int r=g_cpu.A-0xD0; g_cpu.C=(g_cpu.A>=0xD0)?1:0; FLAG_NZ(r&0xFF); }
label_A011:;
    /* $A011: D0 */ nes_cpu_instruction_boundary(0xA011, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xA007, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A007;
    }
label_A013:;
    /* $A013: C8 */ nes_cpu_instruction_boundary(0xA013, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A014:;
    /* $A014: A9 */ nes_cpu_instruction_boundary(0xA014, 2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_A016:; /* MotherBrain_Idle_HandleBeingHit_notDead */
    /* $A016: 84 */ nes_cpu_instruction_boundary(0xA016, 3); nes_write(0x98, g_cpu.Y);
label_A018:;
    /* $A018: 85 */ nes_cpu_instruction_boundary(0xA018, 3); nes_write(0x9F, g_cpu.A);
label_A01A:; /* MotherBrain_Idle_HandleBeingHit_RTS */
    /* $A01A: 60 */ nes_cpu_instruction_boundary(0xA01A, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9FED_b3(void) { /* MotherBrain_Idle_HandleBeingHit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9FED_b3");
#endif
    func_9FED_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A001_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A001_b3");
#endif
    func_9FED_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A01B_b3_body(int _entry) { /* MotherBrain_Idle_UpdateAnimBrain */
    switch (_entry) {
        case 1: goto label_A028;
    }
label_A01B:; /* MotherBrain_Idle_UpdateAnimBrain */
    /* $A01B: C6 */ nes_cpu_instruction_boundary(0xA01B, 5); { uint16_t a=0x9A; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A01D:;
    /* $A01D: D0 */ nes_cpu_instruction_boundary(0xA01D, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A02D; }
label_A01F:;
    /* $A01F: A5 */ nes_cpu_instruction_boundary(0xA01F, 3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_A021:;
    /* $A021: 29 */ nes_cpu_instruction_boundary(0xA021, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_A023:;
    /* $A023: 85 */ nes_cpu_instruction_boundary(0xA023, 3); nes_write(0x9C, g_cpu.A);
label_A025:;
    /* $A025: A9 */ nes_cpu_instruction_boundary(0xA025, 2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_A027:;
    /* $A027: 38 */ nes_cpu_instruction_boundary(0xA027, 2); g_cpu.C = 1;
label_A028:;
    /* $A028: E5 */ nes_cpu_instruction_boundary(0xA028, 3); { uint8_t m=nes_read(0x99); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A02A:;
    /* $A02A: 4A */ nes_cpu_instruction_boundary(0xA02A, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A02B:;
    /* $A02B: 85 */ nes_cpu_instruction_boundary(0xA02B, 3); nes_write(0x9A, g_cpu.A);
label_A02D:; /* MotherBrain_Idle_UpdateAnimBrain_RTS */
    /* $A02D: 60 */ nes_cpu_instruction_boundary(0xA02D, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A01B_b3(void) { /* MotherBrain_Idle_UpdateAnimBrain */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A01B_b3");
#endif
    func_A01B_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A028_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A028_b3");
#endif
    func_A01B_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A02E_b3(void) { /* MotherBrain_Idle_UpdateAnimEye */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A02E_b3");
#endif
label_A02E:; /* MotherBrain_Idle_UpdateAnimEye */
    /* $A02E: C6 */ nes_cpu_instruction_boundary(0xA02E, 5); { uint16_t a=0x9B; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A030:;
    /* $A030: A5 */ nes_cpu_instruction_boundary(0xA030, 3); g_cpu.A = nes_read(0x9B); FLAG_NZ(g_cpu.A);
label_A032:;
    /* $A032: 0A */ nes_cpu_instruction_boundary(0xA032, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A033:;
    /* $A033: D0 */ nes_cpu_instruction_boundary(0xA033, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A040; }
label_A035:;
    /* $A035: A9 */ nes_cpu_instruction_boundary(0xA035, 2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_A037:;
    /* $A037: 38 */ nes_cpu_instruction_boundary(0xA037, 2); g_cpu.C = 1;
label_A038:;
    /* $A038: E5 */ nes_cpu_instruction_boundary(0xA038, 3); { uint8_t m=nes_read(0x99); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A03A:;
    /* $A03A: 09 */ nes_cpu_instruction_boundary(0xA03A, 2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_A03C:;
    /* $A03C: 45 */ nes_cpu_instruction_boundary(0xA03C, 3); g_cpu.A ^= nes_read(0x9B); FLAG_NZ(g_cpu.A);
label_A03E:;
    /* $A03E: 85 */ nes_cpu_instruction_boundary(0xA03E, 3); nes_write(0x9B, g_cpu.A);
label_A040:; /* MotherBrain_Idle_UpdateAnimEye_RTS */
    /* $A040: 60 */ nes_cpu_instruction_boundary(0xA040, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A041_b3(void) { /* MotherBrain_DrawSprites */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A041_b3");
#endif
label_A041:; /* MotherBrain_DrawSprites */
    /* $A041: A9 */ nes_cpu_instruction_boundary(0xA041, 2); g_cpu.A = 0xE0; FLAG_NZ(g_cpu.A);
label_A043:;
    /* $A043: 85 */ nes_cpu_instruction_boundary(0xA043, 3); nes_write(0x4B, g_cpu.A);
label_A045:;
    /* $A045: A5 */ nes_cpu_instruction_boundary(0xA045, 3); g_cpu.A = nes_read(0x9D); FLAG_NZ(g_cpu.A);
label_A047:;
    /* $A047: 8D */ nes_cpu_instruction_boundary(0xA047, 4); nes_write(0x6BDB, g_cpu.A);
label_A04A:;
    /* $A04A: A9 */ nes_cpu_instruction_boundary(0xA04A, 2); g_cpu.A = 0x70; FLAG_NZ(g_cpu.A);
label_A04C:;
    /* $A04C: 8D */ nes_cpu_instruction_boundary(0xA04C, 4); nes_write(0x04E0, g_cpu.A);
label_A04F:;
    /* $A04F: A9 */ nes_cpu_instruction_boundary(0xA04F, 2); g_cpu.A = 0x48; FLAG_NZ(g_cpu.A);
label_A051:;
    /* $A051: 8D */ nes_cpu_instruction_boundary(0xA051, 4); nes_write(0x04E1, g_cpu.A);
label_A054:;
    /* $A054: A4 */ nes_cpu_instruction_boundary(0xA054, 3); g_cpu.Y = nes_read(0x9C); FLAG_NZ(g_cpu.Y);
label_A056:;
    /* $A056: B9 */ nes_cpu_instruction_boundary(0xA056, 4); g_cpu.A = nes_read((0xA06D + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A059:;
    /* $A059: 8D */ nes_cpu_instruction_boundary(0xA059, 4); nes_write(0x6BD7, g_cpu.A);
label_A05C:;
    /* $A05C: 20 */ nes_cpu_instruction_boundary(0xA05C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x5E; g_cpu.S--; func_803C_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA05C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A05F:;
    /* $A05F: A5 */ nes_cpu_instruction_boundary(0xA05F, 3); g_cpu.A = nes_read(0x9B); FLAG_NZ(g_cpu.A);
label_A061:;
    /* $A061: 30 */ nes_cpu_instruction_boundary(0xA061, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_A06C; }
label_A063:;
    /* $A063: AD */ nes_cpu_instruction_boundary(0xA063, 4); g_cpu.A = nes_read(0xA071); FLAG_NZ(g_cpu.A);
label_A066:;
    /* $A066: 8D */ nes_cpu_instruction_boundary(0xA066, 4); nes_write(0x6BD7, g_cpu.A);
label_A069:;
    /* $A069: 20 */ nes_cpu_instruction_boundary(0xA069, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6B; g_cpu.S--; func_803C_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA069, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A06C:; /* MotherBrain_DrawSprites_endIf_A */
    /* $A06C: 60 */ nes_cpu_instruction_boundary(0xA06C, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A072_b3(void) { /* MotherBrain_Disappear_Disintegrate */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A072_b3");
#endif
label_A072:; /* MotherBrain_Disappear_Disintegrate */
    /* $A072: A4 */ nes_cpu_instruction_boundary(0xA072, 3); g_cpu.Y = nes_read(0x99); FLAG_NZ(g_cpu.Y);
label_A074:;
    /* $A074: F0 */ nes_cpu_instruction_boundary(0xA074, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A086; }
label_A076:;
    /* $A076: B9 */ nes_cpu_instruction_boundary(0xA076, 4); g_cpu.A = nes_read((0xA0C0 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A079:;
    /* $A079: 18 */ nes_cpu_instruction_boundary(0xA079, 2); g_cpu.C = 0;
label_A07A:;
    /* $A07A: 65 */ nes_cpu_instruction_boundary(0xA07A, 3); { uint8_t m=nes_read(0x9A); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A07C:;
    /* $A07C: A8 */ nes_cpu_instruction_boundary(0xA07C, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A07D:;
    /* $A07D: B9 */ nes_cpu_instruction_boundary(0xA07D, 4); g_cpu.A = nes_read((0xA0A3 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A080:;
    /* $A080: C9 */ nes_cpu_instruction_boundary(0xA080, 2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_A082:;
    /* $A082: D0 */ nes_cpu_instruction_boundary(0xA082, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A087; }
label_A084:;
    /* $A084: C6 */ nes_cpu_instruction_boundary(0xA084, 5); { uint16_t a=0x9A; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A086:; /* MotherBrain_Disappear_Disintegrate_RTS */
    /* $A086: 60 */ nes_cpu_instruction_boundary(0xA086, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A087:; /* MotherBrain_Disappear_Disintegrate_disintegrate */
    /* $A087: 69 */ nes_cpu_instruction_boundary(0xA087, 2); { uint16_t r = g_cpu.A + 0x44 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x44); g_cpu.A=r&0xFF; }
label_A089:;
    /* $A089: 8D */ nes_cpu_instruction_boundary(0xA089, 4); nes_write(0x0508, g_cpu.A);
label_A08C:;
    /* $A08C: 08 */ nes_cpu_instruction_boundary(0xA08C, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A08D:;
    /* $A08D: A5 */ nes_cpu_instruction_boundary(0xA08D, 3); g_cpu.A = nes_read(0x9D); FLAG_NZ(g_cpu.A);
label_A08F:;
    /* $A08F: 0A */ nes_cpu_instruction_boundary(0xA08F, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A090:;
    /* $A090: 0A */ nes_cpu_instruction_boundary(0xA090, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A091:;
    /* $A091: 09 */ nes_cpu_instruction_boundary(0xA091, 2); g_cpu.A |= 0x61; FLAG_NZ(g_cpu.A);
label_A093:;
    /* $A093: 28 */ nes_cpu_instruction_boundary(0xA093, 4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_A094:;
    /* $A094: 69 */ nes_cpu_instruction_boundary(0xA094, 2); { uint16_t r = g_cpu.A + 0x00 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x00); g_cpu.A=r&0xFF; }
label_A096:;
    /* $A096: 8D */ nes_cpu_instruction_boundary(0xA096, 4); nes_write(0x0509, g_cpu.A);
label_A099:;
    /* $A099: A9 */ nes_cpu_instruction_boundary(0xA099, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A09B:;
    /* $A09B: 8D */ nes_cpu_instruction_boundary(0xA09B, 4); nes_write(0x0503, g_cpu.A);
label_A09E:;
    /* $A09E: 85 */ nes_cpu_instruction_boundary(0xA09E, 3); nes_write(0x4B, g_cpu.A);
label_A0A0:;
    /* $A0A0: 4C */ nes_cpu_instruction_boundary(0xA0A0, 3); nes_cpu_instruction_boundary(0x803F, 2); func_803F_b3(); return;
}

void func_B3C0_b3_body(int _entry) {
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
    /* $B3CA: 20 */ nes_cpu_instruction_boundary(0xB3CA, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCC; g_cpu.S--; func_B31B_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3CA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3CD:;
    /* $B3CD: 20 */ nes_cpu_instruction_boundary(0xB3CD, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCF; g_cpu.S--; func_B34B_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3CD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3D0:;
    /* $B3D0: 20 */ nes_cpu_instruction_boundary(0xB3D0, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD2; g_cpu.S--; func_B33D_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3D0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3D3:;
    /* $B3D3: 20 */ nes_cpu_instruction_boundary(0xB3D3, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD5; g_cpu.S--; func_BC36_b3();
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

void func_B3C0_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3C0_b3");
#endif
    func_B3C0_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B3E4_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3E4_b3");
#endif
    func_B3C0_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B3CC_b3_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B3DE;
    }
label_B3CC:;
    /* $B3CC: B3 */ nes_cpu_instruction_boundary(0xB3CC, 5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x20) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B3CE:;
    /* $B3CE: 4B */ nes_cpu_instruction_boundary(0xB3CE, 2); g_cpu.A &= 0xB3; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_B3D0:;
    /* $B3D0: 20 */ nes_cpu_instruction_boundary(0xB3D0, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD2; g_cpu.S--; func_B33D_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3D0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3D3:;
    /* $B3D3: 20 */ nes_cpu_instruction_boundary(0xB3D3, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD5; g_cpu.S--; func_BC36_b3();
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

void func_B3CC_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3CC_b3");
#endif
    func_B3CC_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B3DE_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3DE_b3");
#endif
    func_B3CC_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B479_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B479_b3");
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

void func_B48D_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B48D_b3");
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

void func_B557_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B557_b3");
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
    /* $B561: 4C */ nes_cpu_instruction_boundary(0xB561, 3); nes_cpu_instruction_boundary(0xB58F, 2); func_B58F_b3(); return;
}

void func_B575_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B575_b3");
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

void func_B948_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B948_b3");
#endif
label_B948:;
    /* $B948: AD */ nes_cpu_instruction_boundary(0xB948, 4); g_cpu.A = nes_read(0x0673); FLAG_NZ(g_cpu.A);
label_B94B:;
    /* $B94B: C9 */ nes_cpu_instruction_boundary(0xB94B, 2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_B94D:;
    /* $B94D: D0 */ nes_cpu_instruction_boundary(0xB94D, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B952; }
label_B94F:;
    /* $B94F: 4C */ nes_cpu_instruction_boundary(0xB94F, 3); nes_cpu_instruction_boundary(0xB896, 2); func_B896_b3(); return;
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
    /* $B964: 20 */ nes_cpu_instruction_boundary(0xB964, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x66; g_cpu.S--; func_B978_b3();
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
    /* $B96F: 4C */ nes_cpu_instruction_boundary(0xB96F, 3); nes_cpu_instruction_boundary(0xB869, 2); func_B869_b3(); return;
}

void func_B95C_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B95C_b3");
#endif
label_B95C:;
    /* $B95C: 8D */ nes_cpu_instruction_boundary(0xB95C, 4); nes_write(0x0612, g_cpu.A);
label_B95F:;
    /* $B95F: A9 */ nes_cpu_instruction_boundary(0xB95F, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B961:;
    /* $B961: 8D */ nes_cpu_instruction_boundary(0xB961, 4); nes_write(0x0613, g_cpu.A);
label_B964:;
    /* $B964: 20 */ nes_cpu_instruction_boundary(0xB964, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x66; g_cpu.S--; func_B978_b3();
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
    /* $B96F: 4C */ nes_cpu_instruction_boundary(0xB96F, 3); nes_cpu_instruction_boundary(0xB869, 2); func_B869_b3(); return;
}

void func_B970_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B970_b3");
#endif
label_B970:;
    /* $B970: 69 */ nes_cpu_instruction_boundary(0xB970, 2); { uint16_t r = g_cpu.A + 0xB8 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xB8); g_cpu.A=r&0xFF; }
label_B972:; /* StatueRaiseSFXCont_endIf_A */
    /* $B972: 20 */ nes_cpu_instruction_boundary(0xB972, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x74; g_cpu.S--; func_B98C_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB972, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B975:;
    /* $B975: 4C */ nes_cpu_instruction_boundary(0xB975, 3); nes_cpu_instruction_boundary(0xB869, 2); func_B869_b3(); return;
}

void func_B9B4_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9B4_b3");
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

void func_B9B5_b3_body(int _entry) { /* DivideSFXTriPeriod_loop */
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

void func_B9B5_b3(void) { /* DivideSFXTriPeriod_loop */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9B5_b3");
#endif
    func_B9B5_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B9C3_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9C3_b3");
#endif
    func_B9B5_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BA11_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA11_b3");
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

void func_BAF2_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BAF2_b3");
#endif
label_BAF2:;
    /* $BAF2: 1C */ nes_cpu_instruction_boundary(0xBAF2, 4); (void)nes_read((0xBDBB + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BAF5:;
    /* $BAF5: 24 */ nes_cpu_instruction_boundary(0xBAF5, 3); { uint8_t m=nes_read(0x06); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
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
    /* $BB13: 4C */ nes_cpu_instruction_boundary(0xBB13, 3); nes_cpu_instruction_boundary(0xBADC, 2); func_BADC_b3(); return;
}

void func_BBEC_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BBEC_b3");
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
    /* $BBF7: 4C */ nes_cpu_instruction_boundary(0xBBF7, 3); nes_cpu_instruction_boundary(0xBBA8, 2); func_BBA8_b3(); return;
}

void func_BC23_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC23_b3");
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
    /* $BC42: 20 */ nes_cpu_instruction_boundary(0xBC42, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x44; g_cpu.S--; func_B4BD_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC42, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC45:;
    /* $BC45: 20 */ nes_cpu_instruction_boundary(0xBC45, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x47; g_cpu.S--; func_BC53_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC45, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC48:;
    /* $BC48: 6C */ nes_cpu_instruction_boundary(0xBC48, 5); { uint16_t _jt = nes_read16zp(0xE2); nes_cpu_instruction_boundary(_jt, 2); call_by_address_tail(_jt, -1); return; }
}

void func_BC34_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC34_b3");
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
    /* $BC42: 20 */ nes_cpu_instruction_boundary(0xBC42, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x44; g_cpu.S--; func_B4BD_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC42, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC45:;
    /* $BC45: 20 */ nes_cpu_instruction_boundary(0xBC45, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x47; g_cpu.S--; func_BC53_b3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC45, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC48:;
    /* $BC48: 6C */ nes_cpu_instruction_boundary(0xBC48, 5); { uint16_t _jt = nes_read16zp(0xE2); nes_cpu_instruction_boundary(_jt, 2); call_by_address_tail(_jt, -1); return; }
}

void func_BEE9_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BEE9_b3");
#endif
label_BEE9:;
    /* $BEE9: 00 */ nes_cpu_instruction_boundary(0xBEE9, 7); nes_brk_executed(0xBEE9); return;
}

void func_C2BF_b3_body(int _entry) { /* Adiv16 */
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

void func_C2BF_b3(void) { /* Adiv16 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C2BF_b3");
#endif
    func_C2BF_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C2C0_b3(void) { /* Adiv8 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C2C0_b3");
#endif
    func_C2BF_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C2C5_b3(void) { /* Amul16 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C2C5_b3");
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

void func_C3D4_b3(void) { /* TwosComplement */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C3D4_b3");
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

void func_CB73_b3(void) { /* SelectSamusPalette */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CB73_b3");
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

void func_CBDA_b3_body(int _entry) { /* SFX_Door */
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

void func_CBDA_b3(void) { /* SFX_Door */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CBDA_b3");
#endif
    func_CBDA_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_CC03_b3(void) { /* MotherBrainMusic */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CC03_b3");
#endif
    func_CBDA_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_CC07_b3(void) { /* TourianMusic */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CC07_b3");
#endif
    func_CBDA_b3_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D2FD_b3(void) { /* SetObjAnimIndex */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D2FD_b3");
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

void func_DC1E_b3(void) { /* MapScrollRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DC1E_b3");
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

void func_E449_b3(void) { /* NegateTemp00Temp01 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E449_b3");
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

void func_E770_b3(void) { /* EnemyCheckMoveUp */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E770_b3");
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

void func_E77B_b3(void) { /* EnemyCheckMoveDown */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E77B_b3");
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

void func_E8F1_b3(void) { /* EnemyCheckMoveLeft */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E8F1_b3");
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

void func_E8FC_b3(void) { /* EnemyCheckMoveRight */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E8FC_b3");
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

void func_E96A_b3(void) { /* MakeRoomRAMPtr */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E96A_b3");
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

void func_F744_b3(void) { /* OrEnData05 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F744_b3");
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

void func_F74B_b3(void) { /* ReadTableAt968B */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F74B_b3");
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

void func_9DF1_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9DF1_b3");
#endif
label_9DF1:;
    /* $9DF1: 60 */ nes_cpu_instruction_boundary(0x9DF1, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B538_b3(void) { /* ScrewAttackSFXInit_RTS */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B538_b3");
#endif
label_B538:; /* ScrewAttackSFXInit_RTS */
    /* $B538: 60 */ nes_cpu_instruction_boundary(0xB538, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

