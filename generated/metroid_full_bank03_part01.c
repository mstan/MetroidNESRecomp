/* metroid_full_bank03_part01.c — PRG bank 3 function bodies (sub-part 1).
 * STANDALONE translation unit — compiled independently (in
 * parallel with every other bank part/sub-part and the
 * umbrella metroid_full.c). Do not compile as part of another TU or
 * edit directly; the source of truth is the recompiler's
 * code_generator.c. Renamed to drop the _partNN suffix if
 * this bank turned out to fit in a single sub-part. */

#include "metroid_full_decls.h"

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
