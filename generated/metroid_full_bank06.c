/* metroid_full_bank06_part00.c — PRG bank 6 function bodies (sub-part 0).
 * STANDALONE translation unit — compiled independently (in
 * parallel with every other bank part/sub-part and the
 * umbrella metroid_full.c). Do not compile as part of another TU or
 * edit directly; the source of truth is the recompiler's
 * code_generator.c. Renamed to drop the _partNN suffix if
 * this bank turned out to fit in a single sub-part. */

#include "metroid_full_decls.h"

void func_9A07_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A07_b6");
#endif
label_9A07:;
    /* $9A07: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_9A08:;
    /* $9A08: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9A09:;
    /* $9A09: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9A0A:;
    /* $9A0A: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8049 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A0D:;
    /* $9A0D: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9A0E:;
    /* $9A0E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8048 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A11:;
    /* $9A11: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9A12:;
    /* $9A12: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _lo=g_ram[0x100+g_cpu.S]; g_cpu.S++; uint8_t _hi=g_ram[0x100+g_cpu.S]; call_by_address(((uint16_t)_hi<<8|_lo)+1); }
    
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9F54_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9F54_b6");
#endif
label_9F54:;
    /* $9F54: 80 */ maybe_trigger_vblank(2); /* NOP */
label_9F56:;
    /* $9F56: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9F56); return;
}

void func_8AC7_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8AC7_b6");
#endif
label_8AC7:;
    /* $8AC7: FA */ maybe_trigger_vblank(2); /* NOP */
label_8AC8:;
    /* $8AC8: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFBFA + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8ACB:;
    /* $8ACB: FC */ maybe_trigger_vblank(4); (void)nes_read((0x0400 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8ACE:;
    /* $8ACE: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC6); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8AD0:;
    /* $8AD0: C7 */ maybe_trigger_vblank(5); { uint16_t a=0xD5; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8AD2:;
    /* $8AD2: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0xD7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8AD4:;
    /* $8AD4: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xE6); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8AD6:;
    /* $8AD6: E7 */ maybe_trigger_vblank(5); { uint16_t a=0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8AD8:;
    /* $8AD8: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0800 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8ADB:;
    /* $8ADB: FA */ maybe_trigger_vblank(2); /* NOP */
label_8ADC:;
    /* $8ADC: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFBFA + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8ADF:;
    /* $8ADF: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xC9C8 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8AE2:;
    /* $8AE2: EB */ maybe_trigger_vblank(2); { uint8_t m=0xD8; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8AE4:;
    /* $8AE4: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xE8EA + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8AE7:;
    /* $8AE7: E9 */ maybe_trigger_vblank(2); { uint8_t m=0xFF; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8AE9:;
    /* $8AE9: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8AEA:;
    /* $8AEA: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x08); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8AEC:;
    /* $8AEC: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x5700 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8AEF:;
    /* $8AEF: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x5740 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8AF2:;
    /* $8AF2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x040B + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8AF5:;
    /* $8AF5: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x00FD); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8AF8:;
    /* $8AF8: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8AFA:;
    /* $8AFA: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x1840 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8AFD:;
    /* $8AFD: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xFD + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8AFF:;
    /* $8AFF: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x18; g_cpu.C=(g_cpu.Y>=0x18)?1:0; FLAG_NZ(r&0xFF); }
label_8B01:;
    /* $8B01: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8B02:;
    /* $8B02: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x040C + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8B05:;
    /* $8B05: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address(0x8B04); return; }
label_8B07:;
    /* $8B07: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8B07); return;
}

void func_B3E4_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3E4_b6");
#endif
label_B3E4:;
    /* $B3E4: FC */ maybe_trigger_vblank(4); (void)nes_read((0x00FC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B3E7:;
    /* $B3E7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB3E7); return;
}

void func_988A_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_988A_b6");
#endif
label_988A:;
    /* $988A: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8000_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8000_b6");
#endif
label_8000:;
    /* $8000: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8000); return;
}

void func_8058_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8058_b6");
#endif
label_8058:;
    /* $8058: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8058); return;
}

void func_95AB_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95AB_b6");
#endif
label_95AB:;
    /* $95AB: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x183C + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_95AE:;
    /* $95AE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x95AE); return;
}

void func_95C3_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95C3_b6");
#endif
label_95C3:;
    /* $95C3: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x163A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_95C6:;
    /* $95C6: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0xE014); FLAG_NZ(g_cpu.A);
label_95C9:;
    /* $95C9: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_95CA:;
    /* $95CA: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_95CB:;
    /* $95CB: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x38) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_95CD:;
    /* $95CD: 52 */ maybe_trigger_vblank(2); /* ILLEGAL $52 — skip 1 */
label_95CE:;
    /* $95CE: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x30); FLAG_NZ(g_cpu.A);
label_95D0:;
    /* $95D0: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A);
label_95D2:;
    /* $95D2: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_95D4:;
    /* $95D4: 95 */ maybe_trigger_vblank(4); nes_write((0x9F + g_cpu.X) & 0xFF, g_cpu.A);
label_95D6:;
    /* $95D6: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_95D8:;
    /* $95D8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x95D8); return;
}

void func_8B13_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8B13_b6");
#endif
label_8B13:;
    /* $8B13: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x56); FLAG_NZ(g_cpu.A);
label_8B15:;
    /* $8B15: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8B6C;
label_8B17:;
    /* $8B17: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x58); FLAG_NZ(g_cpu.Y);
label_8B19:;
    /* $8B19: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8B6C;
label_8B1B:;
    /* $8B1B: 85 */ maybe_trigger_vblank(3); nes_write(0x95, g_cpu.A);
label_8B1D:;
    /* $8B1D: 85 */ maybe_trigger_vblank(3); nes_write(0x96, g_cpu.A);
label_8B1F:;
    /* $8B1F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_8B21:;
    /* $8B21: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_8B23:;
    /* $8B23: 85 */ maybe_trigger_vblank(3); nes_write(0x93, g_cpu.A);
label_8B25:;
    /* $8B25: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8B26:;
    /* $8B26: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x40; FLAG_NZ(g_cpu.A);
label_8B28:;
    /* $8B28: 85 */ maybe_trigger_vblank(3); nes_write(0x94, g_cpu.A);
label_8B2A:;
    /* $8B2A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_8B2C:;
    /* $8B2C: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x01; FLAG_NZ(g_cpu.A);
label_8B2E:;
    /* $8B2E: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_8B30:;
    /* $8B30: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8B31:;
    /* $8B31: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8B32:;
    /* $8B32: 99 */ maybe_trigger_vblank(5); nes_write((0x006C + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8B35:;
    /* $8B35: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x49); FLAG_NZ(g_cpu.A);
label_8B37:;
    /* $8B37: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_8B39:;
    /* $8B39: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8B4B;
label_8B3B:;
    /* $8B3B: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_8B3D:;
    /* $8B3D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFC); FLAG_NZ(g_cpu.A);
label_8B3F:;
    /* $8B3F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8B6D;
label_8B41:;
    /* $8B41: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_8B43:;
    /* $8B43: 4D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read(0x030C); FLAG_NZ(g_cpu.A);
label_8B46:;
    /* $8B46: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8B47:;
    /* $8B47: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_8B53;
label_8B49:;
    /* $8B49: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8B52;
label_8B4B:;
    /* $8B4B: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x02; FLAG_NZ(g_cpu.X);
label_8B4D:;
    /* $8B4D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x030E); FLAG_NZ(g_cpu.A);
label_8B50:;
    /* $8B50: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_8B53;
label_8B52:;
    /* $8B52: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_8B53:;
    /* $8B53: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8B54:;
    /* $8B54: 85 */ maybe_trigger_vblank(3); nes_write(0x57, g_cpu.A);
label_8B56:;
    /* $8B56: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x58; g_cpu.S--; func_8B74_b6();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8B56, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8B59:;
    /* $8B59: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x12; FLAG_NZ(g_cpu.A);
label_8B5B:;
    /* $8B5B: 85 */ maybe_trigger_vblank(3); nes_write(0x59, g_cpu.A);
label_8B5D:;
    /* $8B5D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x58); FLAG_NZ(g_cpu.A);
label_8B5F:;
    /* $8B5F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x61; g_cpu.S--; func_C2C5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8B5F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8B62:;
    /* $8B62: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0300); FLAG_NZ(g_cpu.A);
label_8B65:;
    /* $8B65: 85 */ maybe_trigger_vblank(3); nes_write(0x58, g_cpu.A);
label_8B67:;
    /* $8B67: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_8B69:;
    /* $8B69: 8D */ maybe_trigger_vblank(4); nes_write(0x0300, g_cpu.A);
label_8B6C:;
    /* $8B6C: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8B6D:;
    /* $8B6D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6F; g_cpu.S--; func_8B53_b6();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8B6D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8B70:;
    /* $8B70: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x72; g_cpu.S--; func_E21B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8B70, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8B73:;
    /* $8B73: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8B74:;
    /* $8B74: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_8B76:;
    /* $8B76: 85 */ maybe_trigger_vblank(3); nes_write(0x56, g_cpu.A);
label_8B78:;
    /* $8B78: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8B79_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8B79_b6");
#endif
label_8B79:;
    /* $8B79: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xB0; FLAG_NZ(g_cpu.X);
label_8B7B:;
    /* $8B7B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x7D; g_cpu.S--; func_8B87_b6();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8B7B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8B7E:;
    /* $8B7E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x4B); FLAG_NZ(g_cpu.A);
label_8B80:;
    /* $8B80: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8B81:;
    /* $8B81: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x10; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8B83:;
    /* $8B83: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8B84:;
    /* $8B84: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8B7B;
    }
label_8B86:;
    /* $8B86: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_95AE_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95AE_b6");
#endif
label_95AE:;
    /* $95AE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x95AE); return;
}

void func_95B1_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95B1_b6");
#endif
label_95B1:;
    /* $95B1: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_95B2:;
    /* $95B2: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_95B3:;
    /* $95B3: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1A1C + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_95B6:;
    /* $95B6: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x0F + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_95B8:;
    /* $95B8: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_95B9:;
    /* $95B9: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_95BA:;
    /* $95BA: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_95BB:;
    /* $95BB: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x0408 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_95BE:;
    /* $95BE: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_95BF:;
    /* $95BF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x95BF); return;
}

void func_95B4_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95B4_b6");
#endif
label_95B4:;
    /* $95B4: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x171A + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_95B7:;
    /* $95B7: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x3838; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_95BA:;
    /* $95BA: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_95BB:;
    /* $95BB: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x0408 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_95BE:;
    /* $95BE: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_95BF:;
    /* $95BF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x95BF); return;
}

void func_95B7_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95B7_b6");
#endif
label_95B7:;
    /* $95B7: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x3838; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_95BA:;
    /* $95BA: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_95BB:;
    /* $95BB: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x0408 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_95BE:;
    /* $95BE: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_95BF:;
    /* $95BF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x95BF); return;
}

void func_95BA_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95BA_b6");
#endif
label_95BA:;
    /* $95BA: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_95BB:;
    /* $95BB: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x0408 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_95BE:;
    /* $95BE: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_95BF:;
    /* $95BF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x95BF); return;
}

void func_95E5_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95E5_b6");
#endif
label_95E5:;
    /* $95E5: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x393D + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_95E8:;
    /* $95E8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x95E8); return;
}

void func_80B0_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80B0_b6");
#endif
label_80B0:;
    /* $80B0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x80B0); return;
}

void func_95A8_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95A8_b6");
#endif
label_95A8:;
    /* $95A8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x95A8); return;
}

void func_81DA_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81DA_b6");
#endif
label_81DA:;
    /* $81DA: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0F1F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_81DD:;
    /* $81DD: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x0707; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_81E0:;
    /* $81E0: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xFCFE + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_81E3:;
    /* $81E3: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_81E4:;
    /* $81E4: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xFC; g_cpu.C=(g_cpu.X>=0xFC)?1:0; FLAG_NZ(r&0xFF); }
label_81E6:;
    /* $81E6: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0xEF9A + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_81E9:;
    /* $81E9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x63CF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_81EC:;
    /* $81EC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x81EC); return;
}

void func_820F_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_820F_b6");
#endif
label_820F:;
    /* $820F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x820F); return;
}

void func_81D1_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81D1_b6");
#endif
label_81D1:;
    /* $81D1: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1E1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_81D4:;
    /* $81D4: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x070F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_81D7:;
    /* $81D7: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_81D9:;
    /* $81D9: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x1F1D + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_81DC:;
    /* $81DC: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x070F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_81DF:;
    /* $81DF: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xBE; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_81E1:;
    /* $81E1: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xF8FC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_81E4:;
    /* $81E4: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xFC; g_cpu.C=(g_cpu.X>=0xFC)?1:0; FLAG_NZ(r&0xFF); }
label_81E6:;
    /* $81E6: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0xEF9A + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_81E9:;
    /* $81E9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x63CF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_81EC:;
    /* $81EC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x81EC); return;
}

void func_8206_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8206_b6");
#endif
label_8206:;
    /* $8206: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8206); return;
}

void func_8296_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8296_b6");
#endif
label_8296:;
    /* $8296: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x5F18 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8299:;
    /* $8299: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x12; FLAG_NZ(g_cpu.A);
label_829B:;
    /* $829B: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0C0C; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_829E:;
    /* $829E: 0C */ maybe_trigger_vblank(4); (void)nes_read(0xFF10); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_82A1:;
    /* $82A1: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x66 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_82A3:;
    /* $82A3: 7C */ maybe_trigger_vblank(4); (void)nes_read((0x3030 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_82A6:;
    /* $82A6: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_82A7:;
    /* $82A7: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_82A8:;
    /* $82A8: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xE0 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_82AA:;
    /* $82AA: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_832F_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_832F_b6");
#endif
label_832F:;
    /* $832F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x832F); return;
}

void func_8B74_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8B74_b6");
#endif
label_8B74:;
    /* $8B74: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_8B76:;
    /* $8B76: 85 */ maybe_trigger_vblank(3); nes_write(0x56, g_cpu.A);
label_8B78:;
    /* $8B78: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8B53_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8B53_b6");
#endif
label_8B53:;
    /* $8B53: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8B54:;
    /* $8B54: 85 */ maybe_trigger_vblank(3); nes_write(0x57, g_cpu.A);
label_8B56:;
    /* $8B56: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x58; g_cpu.S--; func_8B74_b6();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8B56, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8B59:;
    /* $8B59: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x12; FLAG_NZ(g_cpu.A);
label_8B5B:;
    /* $8B5B: 85 */ maybe_trigger_vblank(3); nes_write(0x59, g_cpu.A);
label_8B5D:;
    /* $8B5D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x58); FLAG_NZ(g_cpu.A);
label_8B5F:;
    /* $8B5F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x61; g_cpu.S--; func_C2C5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8B5F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8B62:;
    /* $8B62: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0300); FLAG_NZ(g_cpu.A);
label_8B65:;
    /* $8B65: 85 */ maybe_trigger_vblank(3); nes_write(0x58, g_cpu.A);
label_8B67:;
    /* $8B67: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_8B69:;
    /* $8B69: 8D */ maybe_trigger_vblank(4); nes_write(0x0300, g_cpu.A);
label_8B6C:;
    /* $8B6C: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8B87_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8B87_b6");
#endif
label_8B87:;
    /* $8B87: 86 */ maybe_trigger_vblank(3); nes_write(0x4B, g_cpu.X);
label_8B89:;
    /* $8B89: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8B8C:;
    /* $8B8C: 20 */ maybe_trigger_vblank(6); /* inline_dispatch $C27C: 7 entries (bank=6) */
switch(g_cpu.A) {
  case 0: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x5C); nes_write(0x000D, 0xC4); g_cpu.A = 0xC4; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_C45C(); return;
  case 1: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x9D); nes_write(0x000D, 0x8B); g_cpu.A = 0x8B; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_8B9D_b6(); return;
  case 2: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xD5); nes_write(0x000D, 0x8B); g_cpu.A = 0x8B; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_8BD5_b6(); return;
  case 3: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x01); nes_write(0x000D, 0x8C); g_cpu.A = 0x8C; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_8C01_b6(); return;
  case 4: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x84); nes_write(0x000D, 0x8C); g_cpu.A = 0x8C; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_8C84_b6(); return;
  case 5: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xC6); nes_write(0x000D, 0x8C); g_cpu.A = 0x8C; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_8CC6_b6(); return;
  case 6: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xF0); nes_write(0x000D, 0x8C); g_cpu.A = 0x8C; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_8CF0_b6(); return;
  default: nes_log_inline_miss(0x8B8C, g_cpu.A); return;
}
label_8B9D:;
    /* $8B9D: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8BA0:;
    /* $8BA0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x30; FLAG_NZ(g_cpu.A);
label_8BA2:;
    /* $8BA2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA4; g_cpu.S--; func_D2FA();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8BA2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8BA5:;
    /* $8BA5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA7; g_cpu.S--; func_8CFB_b6();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8BA5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8BA8:;
    /* $8BA8: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0307 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_8BAB:;
    /* $8BAB: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8BD1 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8BAE:;
    /* $8BAE: 9D */ maybe_trigger_vblank(5); nes_write((0x030F + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8BB1:;
    /* $8BB1: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0307 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8BB4:;
    /* $8BB4: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_8BB6:;
    /* $8BB6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8BBA;
label_8BB8:;
    /* $8BB8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8BBA:;
    /* $8BBA: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xA0; FLAG_NZ(g_cpu.A);
label_8BBC:;
    /* $8BBC: 85 */ maybe_trigger_vblank(3); nes_write(0x6B, g_cpu.A);
label_8BBE:;
    /* $8BBE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8BC0:;
    /* $8BC0: 9D */ maybe_trigger_vblank(5); nes_write((0x030A + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8BC3:;
    /* $8BC3: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8BC4:;
    /* $8BC4: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_8BC6:;
    /* $8BC6: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x10; FLAG_NZ(g_cpu.A);
label_8BC8:;
    /* $8BC8: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x6B); FLAG_NZ(g_cpu.A);
label_8BCA:;
    /* $8BCA: 85 */ maybe_trigger_vblank(3); nes_write(0x6B, g_cpu.A);
label_8BCC:;
    /* $8BCC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_8BCE:;
    /* $8BCE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_DE47(); return;
}

void func_A29E_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A29E_b6");
#endif
label_A29E:;
    /* $A29E: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_95C0_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95C0_b6");
#endif
label_95C0:;
    /* $95C0: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_95C1:;
    /* $95C1: 5C */ maybe_trigger_vblank(4); (void)nes_read((0x1D4A + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_95C4:;
    /* $95C4: 3A */ maybe_trigger_vblank(2); /* NOP */
label_95C5:;
    /* $95C5: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x2D + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_95C7:;
    /* $95C7: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xE0 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_95C9:;
    /* $95C9: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_95CA:;
    /* $95CA: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_95CB:;
    /* $95CB: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x38) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_95CD:;
    /* $95CD: 52 */ maybe_trigger_vblank(2); /* ILLEGAL $52 — skip 1 */
label_95CE:;
    /* $95CE: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x30); FLAG_NZ(g_cpu.A);
label_95D0:;
    /* $95D0: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A);
label_95D2:;
    /* $95D2: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_95D4:;
    /* $95D4: 95 */ maybe_trigger_vblank(4); nes_write((0x9F + g_cpu.X) & 0xFF, g_cpu.A);
label_95D6:;
    /* $95D6: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_95D8:;
    /* $95D8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x95D8); return;
}

void func_8420_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8420_b6");
#endif
label_8420:;
    /* $8420: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x3737 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8423:;
    /* $8423: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x0707 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8426:;
    /* $8426: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x07; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8428:;
    /* $8428: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x3F3F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_842B:;
    /* $842B: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x0707 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_842E:;
    /* $842E: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x07; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8430:;
    /* $8430: FC */ maybe_trigger_vblank(4); (void)nes_read((0xE088 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8433:;
    /* $8433: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_84B1;
label_8435:;
    /* $8435: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xCCDE + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_8438:;
    /* $8438: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xD0; g_cpu.C=(g_cpu.X>=0xD0)?1:0; FLAG_NZ(r&0xFF); }
label_843A:;
    /* $843A: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xF0; g_cpu.C=(g_cpu.X>=0xF0)?1:0; FLAG_NZ(r&0xFF); }
label_843C:;
    /* $843C: 7C */ maybe_trigger_vblank(4); (void)nes_read((0xDABA + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_843F:;
    /* $843F: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x7D); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8441:;
    /* $8441: C7 */ maybe_trigger_vblank(5); { uint16_t a=0xF8; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8443:;
    /* $8443: FC */ maybe_trigger_vblank(4); (void)nes_read((0x187C + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8446:;
    /* $8446: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x07; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8448:;
    /* $8448: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFF27 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_844B:;
    /* $844B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x1F7E + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_844E:;
    /* $844E: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x07; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8450:;
    /* $8450: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_8451:;
    /* $8451: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0x848B); return; }
label_8453:;
    /* $8453: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x381C + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8456:;
    /* $8456: 80 */ maybe_trigger_vblank(2); /* NOP */
label_8458:;
    /* $8458: 80 */ maybe_trigger_vblank(2); /* NOP */
label_845A:;
    /* $845A: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_845B:;
    /* $845B: FC */ maybe_trigger_vblank(4); (void)nes_read((0xF83C + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_845E:;
    /* $845E: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x00; g_cpu.C=(g_cpu.Y>=0x00)?1:0; FLAG_NZ(r&0xFF); }
label_8460:;
    /* $8460: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8461:;
    /* $8461: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8461); return;
label_8462:;
    /* $8462: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8462); return;
label_8463:;
    /* $8463: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8464:;
    /* $8464: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8464); return;
label_8465:;
    /* $8465: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8465); return;
label_8466:;
    /* $8466: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8466); return;
label_8467:;
    /* $8467: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8467); return;
label_8468:;
    /* $8468: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x0F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_846A:;
    /* $846A: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x0007; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_846D:;
    /* $846D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x846D); return;
label_846E:;
    /* $846E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x846E); return;
label_846F:;
    /* $846F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x846F); return;
label_8470:;
    /* $8470: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x367A + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8473:;
    /* $8473: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x0D0E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8476:;
    /* $8476: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x03); FLAG_NZ(g_cpu.A);
label_8478:;
    /* $8478: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xC5 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_847A:;
    /* $847A: E9 */ maybe_trigger_vblank(2); { uint8_t m=0xF1; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_847C:;
    /* $847C: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_847E:;
    /* $847E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_847F:;
    /* $847F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8481:;
    /* $8481: FC */ maybe_trigger_vblank(4); (void)nes_read((0xDEEE + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8484:;
    /* $8484: FC */ maybe_trigger_vblank(4); (void)nes_read((0xF0F8 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8487:;
    /* $8487: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xF0; g_cpu.C=(g_cpu.X>=0xF0)?1:0; FLAG_NZ(r&0xFF); }
label_8489:;
    /* $8489: FC */ maybe_trigger_vblank(4); (void)nes_read((0xDCF0 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_848C:;
    /* $848C: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x0018 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_848F:;
    /* $848F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x848F); return;
label_8490:;
    /* $8490: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x3F1F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8493:;
    /* $8493: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x0F1F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8496:;
    /* $8496: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x07; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8498:;
    /* $8498: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x1F1F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_849B:;
    /* $849B: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x0F1F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_849E:;
    /* $849E: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x07; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_84A0:;
    /* $84A0: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x7CBE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_84A3:;
    /* $84A3: FC */ maybe_trigger_vblank(4); (void)nes_read((0xD0B0 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_84A6:;
    /* $84A6: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xC0; g_cpu.C=(g_cpu.X>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_84A8:;
    /* $84A8: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84AA:;
    /* $84AA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xC0DC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84AD:;
    /* $84AD: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE0; g_cpu.C=(g_cpu.X>=0xE0)?1:0; FLAG_NZ(r&0xFF); }
label_84AF:;
    /* $84AF: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x40; g_cpu.C=(g_cpu.Y>=0x40)?1:0; FLAG_NZ(r&0xFF); }
label_84B1:;
    /* $84B1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x84B1); return;
label_84B2:; return;
label_84B3:; return;
label_84B4:; return;
label_84B5:; return;
label_84B6:; return;
label_84B7:; return;
label_84B8:; return;
label_84BA:; return;
label_84BC:; return;
label_84BD:; return;
label_84BE:; return;
label_84BF:; return;
label_84C0:; return;
label_84C3:; return;
label_84C6:; return;
label_84C8:; return;
label_84C9:; return;
label_84CA:; return;
label_84CB:; return;
label_84CE:; return;
label_84CF:; return;
label_84D0:; return;
label_84D1:; return;
label_84D2:; return;
label_84D3:; return;
label_84D6:; return;
label_84D8:; return;
label_84D9:; return;
label_84DA:; return;
label_84DB:; return;
label_84DE:; return;
label_84DF:; return;
label_84E0:; return;
label_84E1:; return;
label_84E4:; return;
label_84E5:; return;
label_84E7:; return;
label_84E9:; return;
label_84EA:; return;
label_84EB:; return;
label_84ED:; return;
label_84EE:; return;
label_84F0:; return;
label_84F2:; return;
label_84F4:; return;
label_84F6:; return;
label_84F8:; return;
label_84F9:; return;
label_84FA:; return;
label_84FC:; return;
label_84FE:; return;
label_8500:; return;
label_8501:; return;
label_8502:; return;
label_8503:; return;
label_8505:; return;
label_8508:; return;
label_8509:; return;
label_850A:; return;
label_850B:; return;
label_850D:; return;
label_850F:; return;
label_8512:; return;
label_8513:; return;
label_8515:; return;
label_8516:; return;
label_8517:; return;
label_851A:; return;
label_851B:; return;
label_851D:; return;
label_851E:; return;
label_851F:; return;
label_8522:; return;
label_8525:; return;
label_8527:; return;
label_852A:; return;
label_852B:; return;
label_852D:; return;
label_852F:; return;
label_8531:; return;
label_8532:; return;
label_8534:; return;
label_8536:; return;
label_8538:; return;
label_8539:; return;
label_853A:; return;
label_853B:; return;
label_853C:; return;
label_853D:; return;
label_853F:; return;
label_8540:; return;
label_8541:; return;
label_8543:; return;
label_8546:; return;
label_8549:; return;
label_854B:; return;
label_854E:; return;
label_8551:; return;
label_8554:; return;
label_8557:; return;
label_855A:; return;
label_855D:; return;
label_8560:; return;
label_8561:; return;
label_8562:; return;
label_8563:; return;
label_8564:; return;
label_8566:; return;
label_8568:; return;
label_8569:; return;
label_856A:; return;
label_856B:; return;
label_856C:; return;
label_856D:; return;
label_856E:; return;
label_8571:; return;
label_8574:; return;
label_8577:; return;
label_8579:; return;
label_857C:; return;
label_857E:; return;
label_857F:; return;
label_8580:; return;
label_8581:; return;
label_8583:; return;
label_8585:; return;
label_8587:; return;
label_8588:; return;
label_8589:; return;
label_858B:; return;
label_858D:; return;
label_858F:; return;
label_8590:; return;
label_8591:; return;
label_8593:; return;
label_8595:; return;
label_8597:; return;
label_8598:; return;
label_8599:; return;
label_859B:; return;
label_859D:; return;
label_859F:; return;
label_85A0:; return;
label_85A3:; return;
label_85A6:; return;
label_85A9:; return;
label_85AC:; return;
label_85AF:; return;
label_85B0:; return;
label_85B1:; return;
label_85B2:; return;
label_85B3:; return;
label_85B4:; return;
label_85B5:; return;
label_85B6:; return;
label_85B7:; return;
label_85B8:; return;
label_85B9:; return;
label_85BA:; return;
label_85BB:; return;
label_85BC:; return;
label_85BD:; return;
label_85BE:; return;
label_85BF:; return;
label_85C0:; return;
label_85C3:; return;
label_85C5:; return;
label_85C7:; return;
label_85CA:; return;
label_85CD:; return;
label_85D0:; return;
label_85D1:; return;
label_85D2:; return;
label_85D3:; return;
label_85D4:; return;
label_85D5:; return;
label_85D6:; return;
label_85D7:; return;
label_85D8:; return;
label_85D9:; return;
label_85DA:; return;
label_85DB:; return;
label_85DC:; return;
label_85DD:; return;
label_85DE:; return;
label_85DF:; return;
label_85E0:; return;
label_85E2:; return;
label_85E4:; return;
label_85E6:; return;
label_85E7:; return;
label_85E9:; return;
label_85EA:; return;
label_85EC:; return;
label_85EE:; return;
label_85EF:; return;
label_85F1:; return;
label_85F2:; return;
label_85F3:; return;
label_85F5:; return;
label_85F6:; return;
label_85F7:; return;
label_85F9:; return;
label_85FA:; return;
label_85FC:; return;
label_85FD:; return;
label_85FF:; return;
label_8601:; return;
label_8604:; return;
label_8607:; return;
label_8609:; return;
label_860C:; return;
label_860E:; return;
label_8610:; return;
label_8613:; return;
label_8616:; return;
label_8618:; return;
label_861B:; return;
label_861E:; return;
label_8620:; return;
label_8623:; return;
label_8626:; return;
label_8629:; return;
label_862C:; return;
label_862F:; return;
label_8632:; return;
label_8635:; return;
label_8638:; return;
label_8639:; return;
label_863C:; return;
label_863F:; return;
label_8642:; return;
label_8645:; return;
label_8647:; return;
label_8648:; return;
label_864B:; return;
label_864D:; return;
label_8650:; return;
label_8652:; return;
label_8655:; return;
label_8656:; return;
label_8658:; return;
label_865B:; return;
label_865E:; return;
label_865F:; return;
label_8660:; return;
label_8661:; return;
label_8662:; return;
label_8663:; return;
label_8666:; return;
label_8667:; return;
label_8668:; return;
label_866A:; return;
label_866B:; return;
label_866C:; return;
label_866D:; return;
label_866E:; return;
label_866F:; return;
label_8670:; return;
label_8673:; return;
label_8674:; return;
label_8675:; return;
label_8676:; return;
label_8677:; return;
label_8678:; return;
label_867B:; return;
label_867E:; return;
label_8681:; return;
label_8684:; return;
label_8687:; return;
label_868A:; return;
label_868D:; return;
label_868E:; return;
label_868F:; return;
label_8690:; return;
label_8691:; return;
label_8692:; return;
label_8693:; return;
label_8694:; return;
label_8695:; return;
label_8696:; return;
label_8697:; return;
label_8698:; return;
label_8699:; return;
label_869A:; return;
label_869C:; return;
label_869D:; return;
label_869E:; return;
label_869F:; return;
label_86A0:; return;
label_86A2:; return;
label_86A3:; return;
label_86A5:; return;
label_86A6:; return;
label_86A7:; return;
label_86A8:; return;
label_86A9:; return;
label_86AA:; return;
label_86AC:; return;
label_86AD:; return;
label_86AE:; return;
label_86AF:; return;
label_86B0:; return;
label_86B1:; return;
label_86B2:; return;
label_86B3:; return;
label_86B4:; return;
label_86B5:; return;
label_86B7:; return;
label_86B9:; return;
label_86BA:; return;
label_86BB:; return;
label_86BC:; return;
label_86BD:; return;
label_86BE:; return;
label_86BF:; return;
label_86C0:; return;
label_86C2:; return;
label_86C4:; return;
label_86C6:; return;
label_86C8:; return;
label_86C9:; return;
label_86CA:; return;
label_86CB:; return;
label_86CC:; return;
label_86CD:; return;
label_86CE:; return;
label_86CF:; return;
label_86D0:; return;
label_86D1:; return;
label_86D2:; return;
label_86D3:; return;
label_86D4:; return;
label_86D5:; return;
label_86D6:; return;
label_86D7:; return;
label_86D8:; return;
label_86D9:; return;
label_86DA:; return;
label_86DB:; return;
label_86DC:; return;
label_86DD:; return;
label_86DE:; return;
label_86DF:; return;
label_86E0:; return;
label_86E2:; return;
label_86E4:; return;
label_86E6:; return;
label_86E8:; return;
label_86EB:; return;
label_86ED:; return;
label_86EF:; return;
label_86F0:; return;
label_86F2:; return;
label_86F5:; return;
label_86F8:; return;
label_86FB:; return;
label_86FE:; return;
label_8701:; return;
label_8704:; return;
label_8706:; return;
label_8709:; return;
label_870C:; return;
label_870D:; return;
label_870E:; return;
label_8711:; return;
label_8714:; return;
label_8716:; return;
label_8719:; return;
label_871C:; return;
label_871F:; return;
label_8720:; return;
label_8723:; return;
label_8725:; return;
label_8726:; return;
label_8728:; return;
label_872B:; return;
label_872D:; return;
label_872E:; return;
label_872F:; return;
label_8730:; return;
label_8733:; return;
label_8734:; return;
label_8736:; return;
label_8737:; return;
label_8739:; return;
label_873C:; return;
label_873D:; return;
label_873F:; return;
label_8742:; return;
label_8743:; return;
label_8744:; return;
label_8746:; return;
label_8748:; return;
label_8749:; return;
label_874A:; return;
label_874B:; return;
label_874C:; return;
label_874E:; return;
label_8750:; return;
label_8751:; return;
label_8752:; return;
label_8754:; return;
label_8756:; return;
label_8758:; return;
label_8759:; return;
label_875B:; return;
label_875C:; return;
label_875D:; return;
label_875F:; return;
label_8760:; return;
label_8763:; return;
label_8766:; return;
label_8769:; return;
label_876B:; return;
label_876E:; return;
label_8771:; return;
label_8774:; return;
label_8777:; return;
label_8779:; return;
label_877C:; return;
label_877F:; return;
label_8781:; return;
label_8782:; return;
label_8783:; return;
label_8784:; return;
label_8786:; return;
label_8788:; return;
label_878A:; return;
label_878C:; return;
label_878E:; return;
label_8790:; return;
label_8792:; return;
label_8795:; return;
label_8798:; return;
label_879A:; return;
label_879B:; return;
label_879D:; return;
label_87A0:; return;
label_87A2:; return;
label_87A4:; return;
label_87A6:; return;
label_87A8:; return;
label_87AA:; return;
label_87AC:; return;
label_87AE:; return;
label_87B0:; return;
label_87B2:; return;
label_87B4:; return;
label_87B6:; return;
label_87B8:; return;
label_87B9:; return;
label_87BA:; return;
label_87BB:; return;
label_87BC:; return;
label_87BD:; return;
label_87BF:; return;
label_87C1:; return;
label_87C3:; return;
label_87C6:; return;
label_87C8:; return;
label_87C9:; return;
label_87CA:; return;
label_87CB:; return;
label_87CE:; return;
label_87D0:; return;
label_87D1:; return;
label_87D3:; return;
label_87D6:; return;
label_87D9:; return;
label_87DB:; return;
label_87DE:; return;
label_87E1:; return;
label_87E3:; return;
label_87E4:; return;
label_87E5:; return;
label_87E8:; return;
label_87E9:; return;
label_87EB:; return;
label_87EC:; return;
label_87ED:; return;
label_87F0:; return;
label_87F2:; return;
label_87F4:; return;
label_87F7:; return;
label_87F9:; return;
label_87FB:; return;
label_87FE:; return;
label_8800:; return;
label_8801:; return;
label_8802:; return;
label_8803:; return;
label_8804:; return;
label_8806:; return;
label_8809:; return;
label_880A:; return;
label_880C:; return;
label_880F:; return;
label_8812:; return;
label_8815:; return;
label_8817:; return;
label_8819:; return;
label_881B:; return;
label_881D:; return;
label_881E:; return;
label_8821:; return;
label_8823:; return;
label_8825:; return;
label_8828:; return;
label_8829:; return;
label_882B:; return;
label_882D:; return;
label_882F:; return;
label_8830:; return;
label_8831:; return;
label_8833:; return;
label_8835:; return;
label_8837:; return;
label_8838:; return;
label_883A:; return;
label_883C:; return;
label_883E:; return;
label_883F:; return;
label_8840:; return;
label_8843:; return;
label_8844:; return;
label_8845:; return;
label_8846:; return;
label_8847:; return;
label_8848:; return;
label_884B:; return;
label_884D:; return;
label_884F:; return;
label_8851:; return;
label_8853:; return;
label_8855:; return;
label_8857:; return;
label_8859:; return;
label_885B:; return;
label_885D:; return;
label_885F:; return;
label_8861:; return;
label_8862:; return;
label_8863:; return;
label_8865:; return;
label_8867:; return;
label_886A:; return;
label_886B:; return;
label_886D:; return;
label_886E:; return;
label_886F:; return;
label_8870:; return;
label_8871:; return;
label_8872:; return;
label_8873:; return;
label_8874:; return;
label_8876:; return;
label_8878:; return;
label_8879:; return;
label_887B:; return;
label_887C:; return;
label_887D:; return;
label_887E:; return;
label_887F:; return;
label_8881:; return;
label_8883:; return;
label_8884:; return;
label_8886:; return;
label_8889:; return;
label_888A:; return;
label_888B:; return;
label_888C:; return;
label_888D:; return;
label_888E:; return;
label_888F:; return;
label_8890:; return;
label_8891:; return;
label_8894:; return;
label_8897:; return;
label_8898:; return;
label_8899:; return;
label_889C:; return;
label_889F:; return;
label_88A0:; return;
label_88A3:; return;
label_88A6:; return;
label_88A9:; return;
label_88AA:; return;
label_88AB:; return;
label_88AC:; return;
label_88AD:; return;
label_88AE:; return;
label_88AF:; return;
label_88B0:; return;
label_88B2:; return;
label_88B4:; return;
label_88B7:; return;
label_88B8:; return;
label_88BA:; return;
label_88BC:; return;
label_88BD:; return;
label_88BE:; return;
label_88BF:; return;
label_88C2:; return;
label_88C3:; return;
label_88C5:; return;
label_88C7:; return;
label_88C8:; return;
label_88CA:; return;
label_88CB:; return;
label_88CD:; return;
label_88CE:; return;
label_88D0:; return;
label_88D3:; return;
label_88D6:; return;
label_88D7:; return;
label_88D8:; return;
label_88DB:; return;
label_88DE:; return;
label_88DF:; return;
label_88E0:; return;
label_88E3:; return;
label_88E4:; return;
label_88E6:; return;
label_88E7:; return;
label_88E8:; return;
label_88EB:; return;
label_88EC:; return;
label_88EE:; return;
label_88EF:; return;
label_88F0:; return;
label_88F3:; return;
label_88F6:; return;
label_88F9:; return;
label_88FB:; return;
label_88FC:; return;
label_88FD:; return;
label_88FF:; return;
label_8901:; return;
label_8903:; return;
label_8906:; return;
label_8908:; return;
label_890B:; return;
label_890D:; return;
label_890F:; return;
label_8910:; return;
label_8912:; return;
label_8914:; return;
label_8915:; return;
label_8916:; return;
label_8917:; return;
label_8918:; return;
label_891A:; return;
label_891D:; return;
label_891F:; return;
label_8920:; return;
label_8923:; return;
label_8925:; return;
label_8926:; return;
label_8928:; return;
label_8929:; return;
label_892A:; return;
label_892B:; return;
label_892E:; return;
label_8930:; return;
label_8931:; return;
label_8932:; return;
label_8934:; return;
label_8936:; return;
label_8938:; return;
label_8939:; return;
label_893A:; return;
label_893B:; return;
label_893D:; return;
label_893F:; return;
label_8941:; return;
label_8944:; return;
label_8946:; return;
label_8948:; return;
label_894A:; return;
label_894D:; return;
label_894F:; return;
label_8952:; return;
label_8954:; return;
label_8956:; return;
label_8958:; return;
label_895A:; return;
label_895C:; return;
label_895E:; return;
label_895F:; return;
label_8962:; return;
label_8964:; return;
label_8965:; return;
label_8966:; return;
label_8969:; return;
label_896A:; return;
label_896B:; return;
label_896C:; return;
label_896D:; return;
label_896F:; return;
label_8972:; return;
label_8974:; return;
label_8975:; return;
label_8976:; return;
label_8979:; return;
label_897A:; return;
label_897B:; return;
label_897C:; return;
label_897D:; return;
label_897F:; return;
label_8980:; return;
label_8982:; return;
label_8983:; return;
label_8986:; return;
label_8989:; return;
label_898A:; return;
label_898B:; return;
label_898C:; return;
label_898D:; return;
label_8990:; return;
label_8992:; return;
label_8993:; return;
label_8995:; return;
label_8997:; return;
label_8999:; return;
label_899A:; return;
label_899B:; return;
label_899D:; return;
label_899E:; return;
label_899F:; return;
label_89A0:; return;
label_89A1:; return;
label_89A2:; return;
label_89A4:; return;
label_89A5:; return;
label_89A7:; return;
label_89A8:; return;
label_89A9:; return;
label_89AA:; return;
label_89AD:; return;
label_89B0:; return;
label_89B1:; return;
label_89B2:; return;
label_89B3:; return;
label_89B6:; return;
label_89B7:; return;
label_89B8:; return;
label_89B9:; return;
label_89BA:; return;
label_89BB:; return;
label_89BE:; return;
label_89BF:; return;
label_89C0:; return;
label_89C1:; return;
label_89C2:; return;
label_89C3:; return;
label_89C4:; return;
label_89C5:; return;
label_89C6:; return;
label_89C7:; return;
label_89C8:; return;
label_89C9:; return;
label_89CB:; return;
label_89CD:; return;
label_89CF:; return;
label_89D1:; return;
label_89D3:; return;
label_89D5:; return;
label_89D8:; return;
label_89DA:; return;
label_89DC:; return;
label_89DD:; return;
label_89DF:; return;
label_89E1:; return;
label_89E2:; return;
label_89E5:; return;
label_89E6:; return;
label_89E8:; return;
label_89EA:; return;
label_89EB:; return;
label_89EE:; return;
label_89F0:; return;
label_89F3:; return;
label_89F6:; return;
label_89F7:; return;
label_89F9:; return;
label_89FA:; return;
label_89FB:; return;
label_89FE:; return;
label_8A01:; return;
label_8A03:; return;
label_8A05:; return;
label_8A06:; return;
label_8A09:; return;
label_8A0B:; return;
label_8A0E:; return;
label_8A0F:; return;
label_8A11:; return;
label_8A12:; return;
label_8A13:; return;
label_8A14:; return;
label_8A15:; return;
label_8A16:; return;
label_8A17:; return;
label_8A18:; return;
label_8A19:; return;
label_8A1B:; return;
label_8A1E:; return;
label_8A1F:; return;
label_8A20:; return;
label_8A21:; return;
label_8A23:; return;
label_8A24:; return;
label_8A26:; return;
label_8A27:; return;
label_8A28:; return;
label_8A2A:; return;
label_8A2B:; return;
label_8A2D:; return;
label_8A2F:; return;
label_8A30:; return;
label_8A31:; return;
label_8A32:; return;
label_8A33:; return;
label_8A34:; return;
label_8A35:; return;
label_8A36:; return;
label_8A37:; return;
label_8A38:; return;
label_8A39:; return;
label_8A3A:; return;
label_8A3B:; return;
label_8A3C:; return;
label_8A3D:; return;
label_8A3E:; return;
label_8A3F:; return;
label_8A40:; return;
label_8A41:; return;
label_8A42:; return;
label_8A43:; return;
label_8A44:; return;
label_8A45:; return;
label_8A46:; return;
label_8A47:; return;
label_8A48:; return;
label_8A49:; return;
label_8A4A:; return;
label_8A4B:; return;
label_8A4C:; return;
label_8A4D:; return;
label_8A4E:; return;
label_8A4F:; return;
label_8A50:; return;
label_8A51:; return;
label_8A52:; return;
label_8A53:; return;
label_8A54:; return;
label_8A55:; return;
label_8A56:; return;
label_8A57:; return;
label_8A58:; return;
label_8A59:; return;
label_8A5A:; return;
label_8A5B:; return;
label_8A5C:; return;
label_8A5D:; return;
label_8A5E:; return;
label_8A5F:; return;
label_8A60:; return;
label_8A61:; return;
label_8A62:; return;
label_8A63:; return;
label_8A64:; return;
label_8A65:; return;
label_8A66:; return;
label_8A67:; return;
label_8A68:; return;
label_8A69:; return;
label_8A6A:; return;
label_8A6B:; return;
label_8A6C:; return;
label_8A6D:; return;
label_8A6E:; return;
label_8A6F:; return;
label_8A70:; return;
label_8A71:; return;
label_8A72:; return;
label_8A73:; return;
label_8A74:; return;
label_8A75:; return;
label_8A76:; return;
label_8A78:; return;
label_8A79:; return;
label_8A7A:; return;
label_8A7B:; return;
label_8A7C:; return;
label_8A7D:; return;
label_8A7E:; return;
label_8A7F:; return;
label_8A80:; return;
label_8A81:; return;
label_8A82:; return;
label_8A83:; return;
label_8A84:; return;
label_8A86:; return;
label_8A87:; return;
label_8A88:; return;
label_8A89:; return;
label_8A8A:; return;
label_8A8B:; return;
label_8A8C:; return;
label_8A8D:; return;
label_8A8E:; return;
label_8A8F:; return;
label_8A90:; return;
label_8A91:; return;
label_8A92:; return;
label_8A94:; return;
label_8A95:; return;
label_8A96:; return;
label_8A97:; return;
label_8A98:; return;
label_8A99:; return;
label_8A9A:; return;
label_8A9B:; return;
label_8A9C:; return;
label_8A9D:; return;
label_8A9E:; return;
label_8A9F:; return;
label_8AA0:; return;
label_8AA3:; return;
label_8AA4:; return;
label_8AA5:; return;
label_8AA8:; return;
label_8AA9:; return;
label_8AAB:; return;
label_8AAC:; return;
label_8AAE:; return;
label_8AB0:; return;
label_8AB1:; return;
label_8AB3:; return;
label_8AB5:; return;
label_8AB6:; return;
label_8AB8:; return;
label_8ABA:; return;
label_8ABC:; return;
label_8ABD:; return;
label_8ABF:; return;
label_8AC0:; return;
label_8AC3:; return;
label_8AC6:; return;
label_8AC7:; return;
label_8AC8:; return;
label_8ACB:; return;
label_8ACE:; return;
label_8AD0:; return;
label_8AD2:; return;
label_8AD4:; return;
label_8AD6:; return;
label_8AD8:; return;
label_8ADB:; return;
label_8ADC:; return;
label_8ADF:; return;
label_8AE2:; return;
label_8AE4:; return;
label_8AE7:; return;
label_8AE9:; return;
label_8AEA:; return;
label_8AEC:; return;
label_8AEF:; return;
label_8AF2:; return;
label_8AF5:; return;
label_8AF8:; return;
label_8AFA:; return;
label_8AFD:; return;
label_8AFF:; return;
label_8B01:; return;
label_8B02:; return;
label_8B05:; return;
label_8B07:; return;
label_8B08:; return;
label_8B0A:; return;
label_8B0D:; return;
label_8B0F:; return;
label_8B11:; return;
label_8B12:; return;
label_8B15:; return;
label_8B17:; return;
label_8B19:; return;
label_8B1B:; return;
label_8B1D:; return;
label_8B1F:; return;
label_8B21:; return;
label_8B23:; return;
label_8B25:; return;
label_8B26:; return;
label_8B28:; return;
label_8B2A:; return;
label_8B2C:; return;
label_8B2E:; return;
label_8B30:; return;
label_8B31:; return;
label_8B32:; return;
label_8B35:; return;
label_8B37:; return;
label_8B39:; return;
label_8B3B:; return;
label_8B3D:; return;
label_8B3F:; return;
label_8B41:; return;
label_8B43:; return;
label_8B46:; return;
label_8B47:; return;
label_8B49:; return;
label_8B4B:; return;
label_8B4D:; return;
label_8B50:; return;
label_8B52:; return;
label_8B53:; return;
label_8B54:; return;
label_8B56:; return;
label_8B59:; return;
label_8B5B:; return;
label_8B5D:; return;
label_8B5F:; return;
label_8B62:; return;
label_8B65:; return;
label_8B67:; return;
label_8B69:; return;
label_8B6C:; return;
label_8B6D:; return;
label_8B70:; return;
label_8B73:; return;
label_8B74:; return;
label_8B76:; return;
label_8B78:; return;
label_8B79:; return;
label_8B7B:; return;
label_8B7E:; return;
label_8B80:; return;
label_8B81:; return;
label_8B83:; return;
label_8B84:; return;
label_8B86:; return;
label_8B87:; return;
label_8B89:; return;
label_8B8C:; return;
label_8B9D:; return;
label_8BA0:; return;
label_8BA2:; return;
label_8BA5:; return;
label_8BA8:; return;
label_8BAB:; return;
label_8BAE:; return;
label_8BB1:; return;
label_8BB4:; return;
label_8BB6:; return;
label_8BB8:; return;
label_8BBA:; return;
label_8BBC:; return;
label_8BBE:; return;
label_8BC0:; return;
label_8BC3:; return;
label_8BC4:; return;
label_8BC6:; return;
label_8BC8:; return;
label_8BCA:; return;
label_8BCC:; return;
label_8BCE:; return;
label_8BD1:; return;
label_8BD3:; return;
label_8BD4:; return;
label_8BD6:; return;
label_8BD7:; return;
label_8BD9:; return;
label_8BDB:; return;
label_8BDD:; return;
label_8BE0:; return;
label_8BE3:; return;
label_8BE4:; return;
label_8BE5:; return;
label_8BE6:; return;
label_8BE7:; return;
label_8BE8:; return;
label_8BE9:; return;
label_8BEC:; return;
label_8BEF:; return;
label_8BF2:; return;
label_8BF3:; return;
label_8BF5:; return;
label_8BF7:; return;
label_8BF9:; return;
label_8BFC:; return;
label_8BFF:; return;
label_8C02:; return;
label_8C03:; return;
label_8C04:; return;
label_8C05:; return;
label_8C06:; return;
label_8C07:; return;
label_8C08:; return;
label_8C0B:; return;
label_8C0E:; return;
label_8C11:; return;
label_8C12:; return;
label_8C13:; return;
label_8C14:; return;
label_8C15:; return;
label_8C16:; return;
label_8C17:; return;
label_8C18:; return;
label_8C19:; return;
label_8C1C:; return;
label_8C1F:; return;
label_8C22:; return;
label_8C23:; return;
label_8C24:; return;
label_8C25:; return;
label_8C26:; return;
label_8C27:; return;
label_8C28:; return;
label_8C2B:; return;
label_8C2E:; return;
label_8C31:; return;
label_8C34:; return;
label_8C37:; return;
label_8C3A:; return;
label_8C3C:; return;
label_8C3E:; return;
label_8C40:; return;
label_8C42:; return;
label_8C44:; return;
label_8C46:; return;
label_8C48:; return;
label_8C4A:; return;
label_8C4C:; return;
label_8C4E:; return;
label_8C50:; return;
label_8C51:; return;
label_8C52:; return;
label_8C53:; return;
label_8C54:; return;
label_8C55:; return;
label_8C56:; return;
label_8C57:; return;
label_8C58:; return;
label_8C5B:; return;
label_8C5E:; return;
label_8C61:; return;
label_8C62:; return;
label_8C64:; return;
label_8C65:; return;
label_8C66:; return;
label_8C67:; return;
label_8C68:; return;
label_8C6B:; return;
label_8C6C:; return;
label_8C6D:; return;
label_8C6E:; return;
label_8C6F:; return;
label_8C70:; return;
label_8C71:; return;
label_8C72:; return;
label_8C73:; return;
label_8C75:; return;
label_8C77:; return;
label_8C79:; return;
label_8C7C:; return;
label_8C7F:; return;
label_8C82:; return;
label_8C84:; return;
label_8C85:; return;
label_8C86:; return;
label_8C87:; return;
label_8C88:; return;
label_8C8B:; return;
label_8C8E:; return;
label_8C91:; return;
label_8C92:; return;
label_8C93:; return;
label_8C94:; return;
label_8C95:; return;
label_8C96:; return;
label_8C97:; return;
label_8C98:; return;
label_8C9A:; return;
label_8C9D:; return;
label_8CA0:; return;
label_8CA1:; return;
label_8CA2:; return;
label_8CA3:; return;
label_8CA4:; return;
label_8CA5:; return;
label_8CA6:; return;
label_8CA7:; return;
label_8CAA:; return;
label_8CAD:; return;
label_8CB0:; return;
label_8CB3:; return;
label_8CB6:; return;
label_8CB9:; return;
label_8CBB:; return;
label_8CBD:; return;
label_8CBF:; return;
label_8CC0:; return;
label_8CC2:; return;
label_8CC4:; return;
label_8CC6:; return;
label_8CC8:; return;
label_8CCA:; return;
label_8CCC:; return;
label_8CCE:; return;
label_8CD0:; return;
label_8CD1:; return;
label_8CD2:; return;
label_8CD3:; return;
label_8CD4:; return;
label_8CD5:; return;
label_8CD6:; return;
label_8CD7:; return;
label_8CDA:; return;
label_8CDD:; return;
label_8CE0:; return;
label_8CE1:; return;
label_8CE2:; return;
label_8CE3:; return;
label_8CE4:; return;
label_8CE5:; return;
label_8CE6:; return;
label_8CE7:; return;
label_8CE8:; return;
label_8CEB:; return;
label_8CEE:; return;
label_8CF1:; return;
label_8CF4:; return;
label_8CF7:; return;
label_8CFA:; return;
label_8CFD:; return;
label_8D00:; return;
label_8D03:; return;
label_8D06:; return;
label_8D09:; return;
label_8D0C:; return;
label_8D0F:; return;
label_8D12:; return;
label_8D14:; return;
label_8D16:; return;
label_8D18:; return;
label_8D1A:; return;
label_8D1C:; return;
label_8D1E:; return;
label_8D20:; return;
label_8D22:; return;
label_8D24:; return;
label_8D26:; return;
label_8D28:; return;
label_8D2A:; return;
label_8D2C:; return;
label_8D2E:; return;
label_8D30:; return;
label_8D31:; return;
label_8D32:; return;
label_8D33:; return;
label_8D35:; return;
label_8D36:; return;
label_8D37:; return;
label_8D39:; return;
label_8D3B:; return;
label_8D3E:; return;
label_8D40:; return;
label_8D41:; return;
label_8D43:; return;
label_8D45:; return;
label_8D46:; return;
label_8D47:; return;
label_8D48:; return;
label_8D49:; return;
label_8D4A:; return;
label_8D4C:; return;
label_8D4E:; return;
label_8D51:; return;
label_8D52:; return;
label_8D55:; return;
label_8D58:; return;
label_8D5B:; return;
label_8D5E:; return;
label_8D61:; return;
label_8D62:; return;
label_8D65:; return;
label_8D68:; return;
label_8D6B:; return;
label_8D6E:; return;
label_8D71:; return;
label_8D74:; return;
label_8D75:; return;
label_8D76:; return;
label_8D77:; return;
label_8D78:; return;
label_8D7B:; return;
label_8D7D:; return;
label_8D80:; return;
label_8D83:; return;
label_8D86:; return;
label_8D87:; return;
label_8D88:; return;
label_8D8B:; return;
label_8D8C:; return;
label_8D8F:; return;
label_8D92:; return;
label_8D93:; return;
label_8D94:; return;
label_8D95:; return;
label_8D98:; return;
label_8D9B:; return;
label_8D9E:; return;
label_8DA1:; return;
label_8DA2:; return;
label_8DA3:; return;
label_8DA4:; return;
label_8DA5:; return;
label_8DA8:; return;
label_8DAB:; return;
label_8DAE:; return;
label_8DB1:; return;
label_8DB2:; return;
label_8DB3:; return;
label_8DB4:; return;
label_8DB5:; return;
label_8DB6:; return;
label_8DB7:; return;
label_8DB8:; return;
label_8DB9:; return;
label_8DBC:; return;
label_8DBF:; return;
label_8DC2:; return;
label_8DC3:; return;
label_8DC4:; return;
label_8DC5:; return;
label_8DC6:; return;
label_8DC7:; return;
label_8DCA:; return;
label_8DCD:; return;
label_8DD0:; return;
label_8DD3:; return;
label_8DD6:; return;
label_8DD7:; return;
label_8DD8:; return;
label_8DDB:; return;
label_8DDE:; return;
label_8DE1:; return;
label_8DE4:; return;
label_8DE5:; return;
label_8DE8:; return;
label_8DEB:; return;
label_8DEE:; return;
label_8DF1:; return;
label_8DF4:; return;
label_8DF7:; return;
label_8DFA:; return;
label_8DFD:; return;
label_8E00:; return;
label_8E01:; return;
label_8E03:; return;
label_8E05:; return;
label_8E08:; return;
label_8E09:; return;
label_8E0A:; return;
label_8E0C:; return;
label_8E0F:; return;
label_8E12:; return;
label_8E14:; return;
label_8E16:; return;
label_8E17:; return;
label_8E18:; return;
label_8E19:; return;
label_8E1A:; return;
label_8E1C:; return;
label_8E1D:; return;
label_8E1E:; return;
label_8E21:; return;
label_8E22:; return;
label_8E24:; return;
label_8E27:; return;
label_8E2A:; return;
label_8E2B:; return;
label_8E2C:; return;
label_8E2E:; return;
label_8E31:; return;
label_8E34:; return;
label_8E35:; return;
label_8E37:; return;
label_8E38:; return;
label_8E3B:; return;
label_8E3E:; return;
label_8E40:; return;
label_8E41:; return;
label_8E42:; return;
label_8E43:; return;
label_8E44:; return;
label_8E46:; return;
label_8E49:; return;
label_8E4C:; return;
label_8E4F:; return;
label_8E52:; return;
label_8E55:; return;
label_8E58:; return;
label_8E5B:; return;
label_8E5E:; return;
label_8E60:; return;
label_8E61:; return;
label_8E62:; return;
label_8E65:; return;
label_8E68:; return;
label_8E6B:; return;
label_8E6E:; return;
label_8E71:; return;
label_8E72:; return;
label_8E75:; return;
label_8E78:; return;
label_8E7B:; return;
label_8E7E:; return;
label_8E81:; return;
label_8E84:; return;
label_8E87:; return;
label_8E88:; return;
label_8E8A:; return;
label_8E8C:; return;
label_8E8E:; return;
label_8E91:; return;
label_8E93:; return;
label_8E95:; return;
label_8E98:; return;
label_8E9A:; return;
label_8E9C:; return;
label_8E9E:; return;
label_8EA1:; return;
label_8EA4:; return;
label_8EA5:; return;
label_8EA6:; return;
label_8EA7:; return;
label_8EA8:; return;
label_8EAB:; return;
label_8EAD:; return;
label_8EB0:; return;
label_8EB3:; return;
label_8EB6:; return;
label_8EB7:; return;
label_8EB8:; return;
label_8EBB:; return;
label_8EBD:; return;
label_8EC0:; return;
label_8EC1:; return;
label_8EC2:; return;
label_8EC3:; return;
label_8EC4:; return;
label_8EC5:; return;
label_8EC8:; return;
label_8ECB:; return;
label_8ECE:; return;
label_8ED1:; return;
label_8ED2:; return;
label_8ED3:; return;
label_8ED4:; return;
label_8ED5:; return;
label_8ED8:; return;
label_8EDB:; return;
label_8EDE:; return;
label_8EE1:; return;
label_8EE2:; return;
label_8EE3:; return;
label_8EE4:; return;
label_8EE6:; return;
label_8EE7:; return;
label_8EE9:; return;
label_8EEC:; return;
label_8EED:; return;
label_8EEE:; return;
label_8EF0:; return;
label_8EF2:; return;
label_8EF4:; return;
label_8EF5:; return;
label_8EF6:; return;
label_8EF7:; return;
label_8EF8:; return;
label_8EFA:; return;
label_8EFB:; return;
label_8EFC:; return;
label_8EFF:; return;
label_8F02:; return;
label_8F04:; return;
label_8F06:; return;
label_8F08:; return;
label_8F0B:; return;
label_8F0D:; return;
label_8F0F:; return;
label_8F11:; return;
label_8F14:; return;
label_8F17:; return;
label_8F1A:; return;
label_8F1C:; return;
label_8F1E:; return;
label_8F20:; return;
label_8F21:; return;
label_8F22:; return;
label_8F25:; return;
label_8F28:; return;
label_8F2B:; return;
label_8F2E:; return;
label_8F31:; return;
label_8F32:; return;
label_8F34:; return;
label_8F36:; return;
label_8F38:; return;
label_8F3B:; return;
label_8F3E:; return;
label_8F41:; return;
label_8F42:; return;
label_8F44:; return;
label_8F46:; return;
label_8F48:; return;
label_8F4B:; return;
label_8F4E:; return;
label_8F51:; return;
label_8F52:; return;
label_8F55:; return;
label_8F58:; return;
label_8F5B:; return;
label_8F5E:; return;
label_8F61:; return;
label_8F64:; return;
label_8F65:; return;
label_8F66:; return;
label_8F67:; return;
label_8F68:; return;
label_8F6B:; return;
label_8F6C:; return;
label_8F6D:; return;
label_8F6E:; return;
label_8F6F:; return;
label_8F70:; return;
label_8F72:; return;
label_8F73:; return;
label_8F74:; return;
label_8F75:; return;
label_8F76:; return;
label_8F77:; return;
label_8F78:; return;
label_8F7B:; return;
label_8F7E:; return;
label_8F81:; return;
label_8F83:; return;
label_8F84:; return;
label_8F85:; return;
label_8F86:; return;
label_8F87:; return;
label_8F88:; return;
label_8F8B:; return;
label_8F8E:; return;
label_8F91:; return;
label_8F94:; return;
label_8F95:; return;
label_8F96:; return;
label_8F97:; return;
label_8F98:; return;
label_8F9B:; return;
label_8F9C:; return;
label_8F9D:; return;
label_8F9E:; return;
label_8F9F:; return;
label_8FA0:; return;
label_8FA3:; return;
label_8FA6:; return;
label_8FA8:; return;
label_8FAB:; return;
label_8FAE:; return;
label_8FB0:; return;
label_8FB3:; return;
label_8FB6:; return;
label_8FB9:; return;
label_8FBC:; return;
label_8FBE:; return;
label_8FC0:; return;
label_8FC1:; return;
label_8FC2:; return;
label_8FC3:; return;
label_8FC4:; return;
label_8FC6:; return;
label_8FC8:; return;
label_8FCB:; return;
label_8FCE:; return;
label_8FD1:; return;
label_8FD4:; return;
label_8FD7:; return;
label_8FD8:; return;
label_8FDB:; return;
label_8FDE:; return;
label_8FDF:; return;
label_8FE0:; return;
label_8FE1:; return;
label_8FE4:; return;
label_8FE7:; return;
label_8FEA:; return;
label_8FED:; return;
label_8FF0:; return;
label_8FF2:; return;
label_8FF5:; return;
label_8FF8:; return;
label_8FFA:; return;
label_8FFD:; return;
label_9000:; return;
label_9002:; return;
label_9005:; return;
label_9008:; return;
label_900B:; return;
label_900E:; return;
label_9011:; return;
label_9014:; return;
label_9016:; return;
label_9019:; return;
label_901C:; return;
label_901F:; return;
label_9022:; return;
label_9025:; return;
label_9028:; return;
label_902B:; return;
label_902E:; return;
label_9031:; return;
label_9034:; return;
label_9037:; return;
label_903A:; return;
label_903D:; return;
label_9040:; return;
label_9043:; return;
label_9046:; return;
label_9049:; return;
label_904C:; return;
label_904F:; return;
label_9051:; return;
label_9054:; return;
label_9057:; return;
label_905A:; return;
label_905D:; return;
label_9060:; return;
label_9062:; return;
label_9065:; return;
label_9068:; return;
label_906B:; return;
label_906E:; return;
label_9071:; return;
label_9074:; return;
label_9076:; return;
label_9079:; return;
label_907C:; return;
label_907F:; return;
label_9082:; return;
label_9085:; return;
label_9086:; return;
label_9088:; return;
label_908B:; return;
label_908E:; return;
label_9091:; return;
label_9094:; return;
label_9097:; return;
label_909A:; return;
label_909D:; return;
label_90A0:; return;
label_90A1:; return;
label_90A2:; return;
label_90A3:; return;
label_90A4:; return;
label_90A7:; return;
label_90AA:; return;
label_90AB:; return;
label_90AC:; return;
label_90AF:; return;
label_90B2:; return;
label_90B4:; return;
label_90B6:; return;
label_90B8:; return;
label_90BA:; return;
label_90BC:; return;
label_90BE:; return;
label_90C0:; return;
label_90C3:; return;
label_90C6:; return;
label_90C8:; return;
label_90CB:; return;
label_90CC:; return;
label_90CD:; return;
label_90CF:; return;
label_90D0:; return;
label_90D3:; return;
label_90D5:; return;
label_90D8:; return;
label_90D9:; return;
label_90DA:; return;
label_90DB:; return;
label_90DC:; return;
label_90DD:; return;
label_90DE:; return;
label_90DF:; return;
label_90E0:; return;
label_90E1:; return;
label_90E4:; return;
label_90E6:; return;
label_90E8:; return;
label_90E9:; return;
label_90EC:; return;
label_90EF:; return;
label_90F2:; return;
label_90F3:; return;
label_90F4:; return;
label_90F6:; return;
label_90F9:; return;
label_90FA:; return;
label_90FB:; return;
label_90FC:; return;
label_90FE:; return;
label_9101:; return;
label_9103:; return;
label_9105:; return;
label_9106:; return;
label_9107:; return;
label_9108:; return;
label_910B:; return;
label_910E:; return;
label_9111:; return;
label_9113:; return;
label_9116:; return;
label_9118:; return;
label_9119:; return;
label_911B:; return;
label_911E:; return;
label_9120:; return;
label_9121:; return;
label_9123:; return;
label_9125:; return;
label_9128:; return;
label_912A:; return;
label_912C:; return;
label_912D:; return;
label_912F:; return;
label_9131:; return;
label_9134:; return;
label_9136:; return;
label_9138:; return;
label_913B:; return;
label_913D:; return;
label_913F:; return;
label_9142:; return;
label_9143:; return;
label_9144:; return;
label_9146:; return;
label_9147:; return;
label_9149:; return;
label_914A:; return;
label_914B:; return;
label_914C:; return;
label_914E:; return;
label_914F:; return;
label_9151:; return;
label_9152:; return;
label_9154:; return;
label_9157:; return;
label_9158:; return;
label_915A:; return;
label_915C:; return;
label_915E:; return;
label_9160:; return;
label_9161:; return;
label_9162:; return;
label_9163:; return;
label_9164:; return;
label_9166:; return;
label_9168:; return;
label_9169:; return;
label_916A:; return;
label_916B:; return;
label_916C:; return;
label_916D:; return;
label_916E:; return;
label_916F:; return;
label_9170:; return;
label_9172:; return;
label_9174:; return;
label_9175:; return;
label_9176:; return;
label_9177:; return;
label_9178:; return;
label_917A:; return;
label_917C:; return;
label_917E:; return;
label_9180:; return;
label_9182:; return;
label_9184:; return;
label_9186:; return;
label_9188:; return;
label_918A:; return;
label_918C:; return;
label_918E:; return;
label_9190:; return;
label_9192:; return;
label_9194:; return;
label_9195:; return;
label_9196:; return;
label_9197:; return;
label_9198:; return;
label_919A:; return;
label_919C:; return;
label_919D:; return;
label_91A0:; return;
label_91A2:; return;
label_91A3:; return;
label_91A4:; return;
label_91A7:; return;
label_91A8:; return;
label_91AA:; return;
label_91AB:; return;
label_91AC:; return;
label_91AF:; return;
label_91B0:; return;
label_91B2:; return;
label_91B4:; return;
label_91B7:; return;
label_91BA:; return;
label_91BC:; return;
label_91BF:; return;
label_91C2:; return;
label_91C3:; return;
label_91C5:; return;
label_91C6:; return;
label_91C7:; return;
label_91C8:; return;
label_91CA:; return;
label_91CB:; return;
label_91CD:; return;
label_91CF:; return;
label_91D0:; return;
label_91D2:; return;
label_91D4:; return;
label_91D5:; return;
label_91D8:; return;
label_91D9:; return;
label_91DA:; return;
label_91DB:; return;
label_91DC:; return;
label_91DD:; return;
label_91DE:; return;
label_91E0:; return;
label_91E1:; return;
label_91E3:; return;
label_91E5:; return;
label_91E8:; return;
label_91EA:; return;
label_91ED:; return;
label_91EF:; return;
label_91F0:; return;
label_91F3:; return;
label_91F4:; return;
label_91F5:; return;
label_91F7:; return;
label_91F9:; return;
label_91FA:; return;
label_91FC:; return;
label_91FD:; return;
label_91FE:; return;
label_91FF:; return;
label_9200:; return;
label_9202:; return;
label_9204:; return;
label_9206:; return;
label_9208:; return;
label_920A:; return;
label_920C:; return;
label_920D:; return;
label_920E:; return;
label_920F:; return;
label_9210:; return;
label_9211:; return;
label_9212:; return;
label_9215:; return;
label_9217:; return;
label_9219:; return;
label_921A:; return;
label_921B:; return;
label_921E:; return;
label_921F:; return;
label_9220:; return;
label_9221:; return;
label_9222:; return;
label_9225:; return;
label_9226:; return;
label_9227:; return;
label_922A:; return;
label_922C:; return;
label_922D:; return;
label_922E:; return;
label_922F:; return;
label_9231:; return;
label_9234:; return;
label_9236:; return;
label_9238:; return;
label_923A:; return;
label_923C:; return;
label_923D:; return;
label_923E:; return;
label_923F:; return;
label_9240:; return;
label_9242:; return;
label_9243:; return;
label_9245:; return;
label_9247:; return;
label_9249:; return;
label_924A:; return;
label_924B:; return;
label_924C:; return;
label_924D:; return;
label_924E:; return;
label_924F:; return;
label_9250:; return;
label_9251:; return;
label_9253:; return;
label_9255:; return;
label_9256:; return;
label_9257:; return;
label_9258:; return;
label_9259:; return;
label_925B:; return;
label_925D:; return;
label_925E:; return;
label_925F:; return;
label_9260:; return;
label_9263:; return;
label_9264:; return;
label_9266:; return;
label_9269:; return;
label_926A:; return;
label_926C:; return;
label_926E:; return;
label_9270:; return;
label_9272:; return;
label_9275:; return;
label_9277:; return;
label_9279:; return;
label_927B:; return;
label_927C:; return;
label_927D:; return;
label_927E:; return;
label_927F:; return;
label_9280:; return;
label_9281:; return;
label_9282:; return;
label_9283:; return;
label_9284:; return;
label_9285:; return;
label_9288:; return;
label_9289:; return;
label_928A:; return;
label_928B:; return;
label_928C:; return;
label_928D:; return;
label_928E:; return;
label_928F:; return;
label_9290:; return;
label_9292:; return;
label_9294:; return;
label_9295:; return;
label_9297:; return;
label_9299:; return;
label_929B:; return;
label_929C:; return;
label_929D:; return;
label_929E:; return;
label_929F:; return;
label_92A1:; return;
label_92A2:; return;
label_92A4:; return;
label_92A6:; return;
label_92A7:; return;
label_92A8:; return;
}

void func_8B9D_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8B9D_b6");
#endif
label_8B9D:;
    /* $8B9D: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8BA0:;
    /* $8BA0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x30; FLAG_NZ(g_cpu.A);
label_8BA2:;
    /* $8BA2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA4; g_cpu.S--; func_D2FA();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8BA2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8BA5:;
    /* $8BA5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA7; g_cpu.S--; func_8CFB_b6();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8BA5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8BA8:;
    /* $8BA8: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0307 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_8BAB:;
    /* $8BAB: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8BD1 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8BAE:;
    /* $8BAE: 9D */ maybe_trigger_vblank(5); nes_write((0x030F + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8BB1:;
    /* $8BB1: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0307 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8BB4:;
    /* $8BB4: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_8BB6:;
    /* $8BB6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8BBA;
label_8BB8:;
    /* $8BB8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8BBA:;
    /* $8BBA: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xA0; FLAG_NZ(g_cpu.A);
label_8BBC:;
    /* $8BBC: 85 */ maybe_trigger_vblank(3); nes_write(0x6B, g_cpu.A);
label_8BBE:;
    /* $8BBE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8BC0:;
    /* $8BC0: 9D */ maybe_trigger_vblank(5); nes_write((0x030A + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8BC3:;
    /* $8BC3: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8BC4:;
    /* $8BC4: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_8BC6:;
    /* $8BC6: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x10; FLAG_NZ(g_cpu.A);
label_8BC8:;
    /* $8BC8: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x6B); FLAG_NZ(g_cpu.A);
label_8BCA:;
    /* $8BCA: 85 */ maybe_trigger_vblank(3); nes_write(0x6B, g_cpu.A);
label_8BCC:;
    /* $8BCC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_8BCE:;
    /* $8BCE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_DE47(); return;
}

void func_8BD5_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8BD5_b6");
#endif
label_8BD5:;
    /* $8BD5: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x030A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8BD8:;
    /* $8BD8: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A);
label_8BDA:;
    /* $8BDA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0x8BB1); return; }
label_8BDC:;
    /* $8BDC: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x030F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8BDF:;
    /* $8BDF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0x8C60); return; }
label_8BE1:;
    /* $8BE1: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8BE2:; return;
label_8BE3:; return;
label_8BE4:; return;
label_8BE5:; return;
label_8BE6:; return;
label_8BE7:; return;
label_8BE8:; return;
label_8BE9:; return;
label_8BEC:; return;
label_8BEF:; return;
label_8BF2:; return;
label_8BF3:; return;
label_8BF5:; return;
label_8BF7:; return;
label_8BF9:; return;
label_8BFC:; return;
label_8BFF:; return;
label_8C02:; return;
label_8C03:; return;
label_8C04:; return;
label_8C05:; return;
label_8C06:; return;
label_8C07:; return;
label_8C08:; return;
label_8C0B:; return;
label_8C0E:; return;
label_8C11:; return;
label_8C12:; return;
label_8C13:; return;
label_8C14:; return;
label_8C15:; return;
label_8C16:; return;
label_8C17:; return;
label_8C18:; return;
label_8C19:; return;
label_8C1C:; return;
label_8C1F:; return;
label_8C22:; return;
label_8C23:; return;
label_8C24:; return;
label_8C25:; return;
label_8C26:; return;
label_8C27:; return;
label_8C28:; return;
label_8C2B:; return;
label_8C2E:; return;
label_8C31:; return;
label_8C34:; return;
label_8C37:; return;
label_8C3A:; return;
label_8C3C:; return;
label_8C3E:; return;
label_8C40:; return;
label_8C42:; return;
label_8C44:; return;
label_8C46:; return;
label_8C48:; return;
label_8C4A:; return;
label_8C4C:; return;
label_8C4E:; return;
label_8C50:; return;
label_8C51:; return;
label_8C52:; return;
label_8C53:; return;
label_8C54:; return;
label_8C55:; return;
label_8C56:; return;
label_8C57:; return;
label_8C58:; return;
label_8C5B:; return;
label_8C5E:; return;
label_8C61:; return;
label_8C62:; return;
label_8C64:; return;
label_8C65:; return;
label_8C66:; return;
label_8C67:; return;
label_8C68:; return;
label_8C6B:; return;
label_8C6C:; return;
label_8C6D:; return;
label_8C6E:; return;
label_8C6F:; return;
label_8C70:; return;
label_8C71:; return;
label_8C72:; return;
label_8C73:; return;
label_8C75:; return;
label_8C77:; return;
label_8C79:; return;
label_8C7C:; return;
label_8C7F:; return;
label_8C82:; return;
label_8C84:; return;
label_8C85:; return;
label_8C86:; return;
label_8C87:; return;
label_8C88:; return;
label_8C8B:; return;
label_8C8E:; return;
label_8C91:; return;
label_8C92:; return;
label_8C93:; return;
label_8C94:; return;
label_8C95:; return;
label_8C96:; return;
label_8C97:; return;
label_8C98:; return;
label_8C9A:; return;
label_8C9D:; return;
label_8CA0:; return;
label_8CA1:; return;
label_8CA2:; return;
label_8CA3:; return;
label_8CA4:; return;
label_8CA5:; return;
label_8CA6:; return;
label_8CA7:; return;
label_8CAA:; return;
label_8CAD:; return;
label_8CB0:; return;
label_8CB3:; return;
label_8CB6:; return;
label_8CB9:; return;
label_8CBB:; return;
label_8CBD:; return;
label_8CBF:; return;
label_8CC0:; return;
label_8CC2:; return;
label_8CC4:; return;
label_8CC6:; return;
label_8CC8:; return;
label_8CCA:; return;
label_8CCC:; return;
label_8CCE:; return;
label_8CD0:; return;
label_8CD1:; return;
label_8CD2:; return;
label_8CD3:; return;
label_8CD4:; return;
label_8CD5:; return;
label_8CD6:; return;
label_8CD7:; return;
label_8CDA:; return;
label_8CDD:; return;
label_8CE0:; return;
label_8CE1:; return;
label_8CE2:; return;
label_8CE3:; return;
label_8CE4:; return;
label_8CE5:; return;
label_8CE6:; return;
label_8CE7:; return;
label_8CE8:; return;
label_8CEB:; return;
label_8CEE:; return;
label_8CF1:; return;
label_8CF4:; return;
label_8CF7:; return;
label_8CFA:; return;
label_8CFD:; return;
label_8D00:; return;
label_8D03:; return;
label_8D06:; return;
label_8D09:; return;
label_8D0C:; return;
label_8D0F:; return;
label_8D12:; return;
label_8D14:; return;
label_8D16:; return;
label_8D18:; return;
label_8D1A:; return;
label_8D1C:; return;
label_8D1E:; return;
label_8D20:; return;
label_8D22:; return;
label_8D24:; return;
label_8D26:; return;
label_8D28:; return;
label_8D2A:; return;
label_8D2C:; return;
label_8D2E:; return;
label_8D30:; return;
label_8D31:; return;
label_8D32:; return;
label_8D33:; return;
label_8D35:; return;
label_8D36:; return;
label_8D37:; return;
label_8D39:; return;
label_8D3B:; return;
label_8D3E:; return;
label_8D40:; return;
label_8D41:; return;
label_8D43:; return;
label_8D45:; return;
label_8D46:; return;
label_8D47:; return;
label_8D48:; return;
label_8D49:; return;
label_8D4A:; return;
label_8D4C:; return;
label_8D4E:; return;
label_8D51:; return;
label_8D52:; return;
label_8D55:; return;
label_8D58:; return;
label_8D5B:; return;
label_8D5E:; return;
label_8D61:; return;
label_8D62:; return;
label_8D65:; return;
label_8D68:; return;
label_8D6B:; return;
label_8D6E:; return;
label_8D71:; return;
label_8D74:; return;
label_8D75:; return;
label_8D76:; return;
label_8D77:; return;
label_8D78:; return;
label_8D7B:; return;
label_8D7D:; return;
label_8D80:; return;
label_8D83:; return;
label_8D86:; return;
label_8D87:; return;
label_8D88:; return;
label_8D8B:; return;
label_8D8C:; return;
label_8D8F:; return;
label_8D92:; return;
label_8D93:; return;
label_8D94:; return;
label_8D95:; return;
label_8D98:; return;
label_8D9B:; return;
label_8D9E:; return;
label_8DA1:; return;
label_8DA2:; return;
label_8DA3:; return;
label_8DA4:; return;
label_8DA5:; return;
label_8DA8:; return;
label_8DAB:; return;
label_8DAE:; return;
label_8DB1:; return;
label_8DB2:; return;
label_8DB3:; return;
label_8DB4:; return;
label_8DB5:; return;
label_8DB6:; return;
label_8DB7:; return;
label_8DB8:; return;
label_8DB9:; return;
label_8DBC:; return;
label_8DBF:; return;
label_8DC2:; return;
label_8DC3:; return;
label_8DC4:; return;
label_8DC5:; return;
label_8DC6:; return;
label_8DC7:; return;
label_8DCA:; return;
label_8DCD:; return;
label_8DD0:; return;
label_8DD3:; return;
label_8DD6:; return;
label_8DD7:; return;
label_8DD8:; return;
label_8DDB:; return;
label_8DDE:; return;
label_8DE1:; return;
label_8DE4:; return;
label_8DE5:; return;
label_8DE8:; return;
label_8DEB:; return;
label_8DEE:; return;
label_8DF1:; return;
label_8DF4:; return;
label_8DF7:; return;
label_8DFA:; return;
label_8DFD:; return;
label_8E00:; return;
label_8E01:; return;
label_8E03:; return;
label_8E05:; return;
label_8E08:; return;
label_8E09:; return;
label_8E0A:; return;
label_8E0C:; return;
label_8E0F:; return;
label_8E12:; return;
label_8E14:; return;
label_8E16:; return;
label_8E17:; return;
label_8E18:; return;
label_8E19:; return;
label_8E1A:; return;
label_8E1C:; return;
label_8E1D:; return;
label_8E1E:; return;
label_8E21:; return;
label_8E22:; return;
label_8E24:; return;
label_8E27:; return;
label_8E2A:; return;
label_8E2B:; return;
label_8E2C:; return;
label_8E2E:; return;
label_8E31:; return;
label_8E34:; return;
label_8E35:; return;
label_8E37:; return;
label_8E38:; return;
label_8E3B:; return;
label_8E3E:; return;
label_8E40:; return;
label_8E41:; return;
label_8E42:; return;
label_8E43:; return;
label_8E44:; return;
label_8E46:; return;
label_8E49:; return;
label_8E4C:; return;
label_8E4F:; return;
label_8E52:; return;
label_8E55:; return;
label_8E58:; return;
label_8E5B:; return;
label_8E5E:; return;
label_8E60:; return;
label_8E61:; return;
label_8E62:; return;
label_8E65:; return;
label_8E68:; return;
label_8E6B:; return;
label_8E6E:; return;
label_8E71:; return;
label_8E72:; return;
label_8E75:; return;
label_8E78:; return;
label_8E7B:; return;
label_8E7E:; return;
label_8E81:; return;
label_8E84:; return;
label_8E87:; return;
label_8E88:; return;
label_8E8A:; return;
label_8E8C:; return;
label_8E8E:; return;
label_8E91:; return;
label_8E93:; return;
label_8E95:; return;
label_8E98:; return;
label_8E9A:; return;
label_8E9C:; return;
label_8E9E:; return;
label_8EA1:; return;
label_8EA4:; return;
label_8EA5:; return;
label_8EA6:; return;
label_8EA7:; return;
label_8EA8:; return;
label_8EAB:; return;
label_8EAD:; return;
label_8EB0:; return;
label_8EB3:; return;
label_8EB6:; return;
label_8EB7:; return;
label_8EB8:; return;
label_8EBB:; return;
label_8EBD:; return;
label_8EC0:; return;
label_8EC1:; return;
label_8EC2:; return;
label_8EC3:; return;
label_8EC4:; return;
label_8EC5:; return;
label_8EC8:; return;
label_8ECB:; return;
label_8ECE:; return;
label_8ED1:; return;
label_8ED2:; return;
label_8ED3:; return;
label_8ED4:; return;
label_8ED5:; return;
label_8ED8:; return;
label_8EDB:; return;
label_8EDE:; return;
label_8EE1:; return;
label_8EE2:; return;
label_8EE3:; return;
label_8EE4:; return;
label_8EE6:; return;
label_8EE7:; return;
label_8EE9:; return;
label_8EEC:; return;
label_8EED:; return;
label_8EEE:; return;
label_8EF0:; return;
label_8EF2:; return;
label_8EF4:; return;
label_8EF5:; return;
label_8EF6:; return;
label_8EF7:; return;
label_8EF8:; return;
label_8EFA:; return;
label_8EFB:; return;
label_8EFC:; return;
label_8EFF:; return;
label_8F02:; return;
label_8F04:; return;
label_8F06:; return;
label_8F08:; return;
label_8F0B:; return;
label_8F0D:; return;
label_8F0F:; return;
label_8F11:; return;
label_8F14:; return;
label_8F17:; return;
label_8F1A:; return;
label_8F1C:; return;
label_8F1E:; return;
label_8F20:; return;
label_8F21:; return;
label_8F22:; return;
label_8F25:; return;
label_8F28:; return;
label_8F2B:; return;
label_8F2E:; return;
label_8F31:; return;
label_8F32:; return;
label_8F34:; return;
label_8F36:; return;
label_8F38:; return;
label_8F3B:; return;
label_8F3E:; return;
label_8F41:; return;
label_8F42:; return;
label_8F44:; return;
label_8F46:; return;
label_8F48:; return;
label_8F4B:; return;
label_8F4E:; return;
label_8F51:; return;
label_8F52:; return;
label_8F55:; return;
label_8F58:; return;
label_8F5B:; return;
label_8F5E:; return;
label_8F61:; return;
label_8F64:; return;
label_8F65:; return;
label_8F66:; return;
label_8F67:; return;
label_8F68:; return;
label_8F6B:; return;
label_8F6C:; return;
label_8F6D:; return;
label_8F6E:; return;
label_8F6F:; return;
label_8F70:; return;
label_8F72:; return;
label_8F73:; return;
label_8F74:; return;
label_8F75:; return;
label_8F76:; return;
label_8F77:; return;
label_8F78:; return;
label_8F7B:; return;
label_8F7E:; return;
label_8F81:; return;
label_8F83:; return;
label_8F84:; return;
label_8F85:; return;
label_8F86:; return;
label_8F87:; return;
label_8F88:; return;
label_8F8B:; return;
label_8F8E:; return;
label_8F91:; return;
label_8F94:; return;
label_8F95:; return;
label_8F96:; return;
label_8F97:; return;
label_8F98:; return;
label_8F9B:; return;
label_8F9C:; return;
label_8F9D:; return;
label_8F9E:; return;
label_8F9F:; return;
label_8FA0:; return;
label_8FA3:; return;
label_8FA6:; return;
label_8FA8:; return;
label_8FAB:; return;
label_8FAE:; return;
label_8FB0:; return;
label_8FB3:; return;
label_8FB6:; return;
label_8FB9:; return;
label_8FBC:; return;
label_8FBE:; return;
label_8FC0:; return;
label_8FC1:; return;
label_8FC2:; return;
label_8FC3:; return;
label_8FC4:; return;
label_8FC6:; return;
label_8FC8:; return;
label_8FCB:; return;
label_8FCE:; return;
label_8FD1:; return;
label_8FD4:; return;
label_8FD7:; return;
label_8FD8:; return;
label_8FDB:; return;
label_8FDE:; return;
label_8FDF:; return;
label_8FE0:; return;
label_8FE1:; return;
label_8FE4:; return;
label_8FE7:; return;
label_8FEA:; return;
label_8FED:; return;
label_8FF0:; return;
label_8FF2:; return;
label_8FF5:; return;
label_8FF8:; return;
label_8FFA:; return;
label_8FFD:; return;
label_9000:; return;
label_9002:; return;
label_9005:; return;
label_9008:; return;
label_900B:; return;
label_900E:; return;
label_9011:; return;
label_9014:; return;
label_9016:; return;
label_9019:; return;
label_901C:; return;
label_901F:; return;
label_9022:; return;
label_9025:; return;
label_9028:; return;
label_902B:; return;
label_902E:; return;
label_9031:; return;
label_9034:; return;
label_9037:; return;
label_903A:; return;
label_903D:; return;
label_9040:; return;
label_9043:; return;
label_9046:; return;
label_9049:; return;
label_904C:; return;
label_904F:; return;
label_9051:; return;
label_9054:; return;
label_9057:; return;
label_905A:; return;
label_905D:; return;
label_9060:; return;
label_9062:; return;
label_9065:; return;
label_9068:; return;
label_906B:; return;
label_906E:; return;
label_9071:; return;
label_9074:; return;
label_9076:; return;
label_9079:; return;
label_907C:; return;
label_907F:; return;
label_9082:; return;
label_9085:; return;
label_9086:; return;
label_9088:; return;
label_908B:; return;
label_908E:; return;
label_9091:; return;
label_9094:; return;
label_9097:; return;
label_909A:; return;
label_909D:; return;
label_90A0:; return;
label_90A1:; return;
label_90A2:; return;
label_90A3:; return;
label_90A4:; return;
label_90A7:; return;
label_90AA:; return;
label_90AB:; return;
label_90AC:; return;
label_90AF:; return;
label_90B2:; return;
label_90B4:; return;
label_90B6:; return;
label_90B8:; return;
label_90BA:; return;
label_90BC:; return;
label_90BE:; return;
label_90C0:; return;
label_90C3:; return;
label_90C6:; return;
label_90C8:; return;
label_90CB:; return;
label_90CC:; return;
label_90CD:; return;
label_90CF:; return;
label_90D0:; return;
label_90D3:; return;
label_90D5:; return;
label_90D8:; return;
label_90D9:; return;
label_90DA:; return;
label_90DB:; return;
label_90DC:; return;
label_90DD:; return;
label_90DE:; return;
label_90DF:; return;
label_90E0:; return;
label_90E1:; return;
label_90E4:; return;
label_90E6:; return;
label_90E8:; return;
label_90E9:; return;
label_90EC:; return;
label_90EF:; return;
label_90F2:; return;
label_90F3:; return;
label_90F4:; return;
label_90F6:; return;
label_90F9:; return;
label_90FA:; return;
label_90FB:; return;
label_90FC:; return;
label_90FE:; return;
label_9101:; return;
label_9103:; return;
label_9105:; return;
label_9106:; return;
label_9107:; return;
label_9108:; return;
label_910B:; return;
label_910E:; return;
label_9111:; return;
label_9113:; return;
label_9116:; return;
label_9118:; return;
label_9119:; return;
label_911B:; return;
label_911E:; return;
label_9120:; return;
label_9121:; return;
label_9123:; return;
label_9125:; return;
label_9128:; return;
label_912A:; return;
label_912C:; return;
label_912D:; return;
label_912F:; return;
label_9131:; return;
label_9134:; return;
label_9136:; return;
label_9138:; return;
label_913B:; return;
label_913D:; return;
label_913F:; return;
label_9142:; return;
label_9143:; return;
label_9144:; return;
label_9146:; return;
label_9147:; return;
label_9149:; return;
label_914A:; return;
label_914B:; return;
label_914C:; return;
label_914E:; return;
label_914F:; return;
label_9151:; return;
label_9152:; return;
label_9154:; return;
label_9157:; return;
label_9158:; return;
label_915A:; return;
label_915C:; return;
label_915E:; return;
label_9160:; return;
label_9161:; return;
label_9162:; return;
label_9163:; return;
label_9164:; return;
label_9166:; return;
label_9168:; return;
label_9169:; return;
label_916A:; return;
label_916B:; return;
label_916C:; return;
label_916D:; return;
label_916E:; return;
label_916F:; return;
label_9170:; return;
label_9172:; return;
label_9174:; return;
label_9175:; return;
label_9176:; return;
label_9177:; return;
label_9178:; return;
label_917A:; return;
label_917C:; return;
label_917E:; return;
label_9180:; return;
label_9182:; return;
label_9184:; return;
label_9186:; return;
label_9188:; return;
label_918A:; return;
label_918C:; return;
label_918E:; return;
label_9190:; return;
label_9192:; return;
label_9194:; return;
label_9195:; return;
label_9196:; return;
label_9197:; return;
label_9198:; return;
label_919A:; return;
label_919C:; return;
label_919D:; return;
label_91A0:; return;
label_91A2:; return;
label_91A3:; return;
label_91A4:; return;
label_91A7:; return;
label_91A8:; return;
label_91AA:; return;
label_91AB:; return;
label_91AC:; return;
label_91AF:; return;
label_91B0:; return;
label_91B2:; return;
label_91B4:; return;
label_91B7:; return;
label_91BA:; return;
label_91BC:; return;
label_91BF:; return;
label_91C2:; return;
label_91C3:; return;
label_91C5:; return;
label_91C6:; return;
label_91C7:; return;
label_91C8:; return;
label_91CA:; return;
label_91CB:; return;
label_91CD:; return;
label_91CF:; return;
label_91D0:; return;
label_91D2:; return;
label_91D4:; return;
label_91D5:; return;
label_91D8:; return;
label_91D9:; return;
label_91DA:; return;
label_91DB:; return;
label_91DC:; return;
label_91DD:; return;
label_91DE:; return;
label_91E0:; return;
label_91E1:; return;
label_91E3:; return;
label_91E5:; return;
label_91E8:; return;
label_91EA:; return;
label_91ED:; return;
label_91EF:; return;
label_91F0:; return;
label_91F3:; return;
label_91F4:; return;
label_91F5:; return;
label_91F7:; return;
label_91F9:; return;
label_91FA:; return;
label_91FC:; return;
label_91FD:; return;
label_91FE:; return;
label_91FF:; return;
label_9200:; return;
label_9202:; return;
label_9204:; return;
label_9206:; return;
label_9208:; return;
label_920A:; return;
label_920C:; return;
label_920D:; return;
label_920E:; return;
label_920F:; return;
label_9210:; return;
label_9211:; return;
label_9212:; return;
label_9215:; return;
label_9217:; return;
label_9219:; return;
label_921A:; return;
label_921B:; return;
label_921E:; return;
label_921F:; return;
label_9220:; return;
label_9221:; return;
label_9222:; return;
label_9225:; return;
label_9226:; return;
label_9227:; return;
label_922A:; return;
label_922C:; return;
label_922D:; return;
label_922E:; return;
label_922F:; return;
label_9231:; return;
label_9234:; return;
label_9236:; return;
label_9238:; return;
label_923A:; return;
label_923C:; return;
label_923D:; return;
label_923E:; return;
label_923F:; return;
label_9240:; return;
label_9242:; return;
label_9243:; return;
label_9245:; return;
label_9247:; return;
label_9249:; return;
label_924A:; return;
label_924B:; return;
label_924C:; return;
label_924D:; return;
label_924E:; return;
label_924F:; return;
label_9250:; return;
label_9251:; return;
label_9253:; return;
label_9255:; return;
label_9256:; return;
label_9257:; return;
label_9258:; return;
label_9259:; return;
label_925B:; return;
label_925D:; return;
label_925E:; return;
label_925F:; return;
label_9260:; return;
label_9263:; return;
label_9264:; return;
label_9266:; return;
label_9269:; return;
label_926A:; return;
label_926C:; return;
label_926E:; return;
label_9270:; return;
label_9272:; return;
label_9275:; return;
label_9277:; return;
label_9279:; return;
label_927B:; return;
label_927C:; return;
label_927D:; return;
label_927E:; return;
label_927F:; return;
label_9280:; return;
label_9281:; return;
label_9282:; return;
label_9283:; return;
label_9284:; return;
label_9285:; return;
label_9288:; return;
label_9289:; return;
label_928A:; return;
label_928B:; return;
label_928C:; return;
label_928D:; return;
label_928E:; return;
label_928F:; return;
label_9290:; return;
label_9292:; return;
label_9294:; return;
label_9295:; return;
label_9297:; return;
label_9299:; return;
label_929B:; return;
label_929C:; return;
label_929D:; return;
label_929E:; return;
label_929F:; return;
label_92A1:; return;
label_92A2:; return;
label_92A4:; return;
label_92A6:; return;
label_92A7:; return;
label_92A8:; return;
label_92A9:; return;
label_92AA:; return;
label_92AB:; return;
label_92AC:; return;
label_92AD:; return;
label_92AE:; return;
label_92AF:; return;
label_92B0:; return;
label_92B3:; return;
label_92B5:; return;
label_92B7:; return;
label_92B9:; return;
label_92BA:; return;
label_92BB:; return;
label_92BC:; return;
label_92BD:; return;
label_92BE:; return;
label_92BF:; return;
label_92C0:; return;
label_92C2:; return;
label_92C5:; return;
label_92C8:; return;
label_92CA:; return;
label_92CB:; return;
label_92CC:; return;
label_92CE:; return;
label_92CF:; return;
label_92D0:; return;
label_92D3:; return;
label_92D6:; return;
label_92D9:; return;
label_92DA:; return;
label_92DB:; return;
label_92DC:; return;
label_92DD:; return;
label_92DE:; return;
label_92DF:; return;
label_92E0:; return;
label_92E2:; return;
label_92E3:; return;
label_92E4:; return;
label_92E5:; return;
label_92E6:; return;
label_92E7:; return;
label_92E8:; return;
label_92E9:; return;
label_92EA:; return;
label_92EB:; return;
label_92EC:; return;
label_92ED:; return;
label_92EE:; return;
label_92EF:; return;
label_92F0:; return;
label_92F2:; return;
label_92F4:; return;
label_92F5:; return;
label_92F6:; return;
label_92F7:; return;
label_92F9:; return;
label_92FA:; return;
label_92FB:; return;
label_92FD:; return;
label_92FF:; return;
label_9301:; return;
label_9302:; return;
label_9303:; return;
label_9304:; return;
label_9305:; return;
label_9308:; return;
label_930B:; return;
label_930C:; return;
label_930D:; return;
label_930E:; return;
label_930F:; return;
label_9311:; return;
label_9313:; return;
label_9314:; return;
label_9315:; return;
label_9316:; return;
label_9317:; return;
label_9318:; return;
label_931A:; return;
label_931C:; return;
label_931D:; return;
label_931E:; return;
label_9320:; return;
label_9323:; return;
label_9324:; return;
label_9325:; return;
label_9326:; return;
label_9327:; return;
label_9328:; return;
label_932A:; return;
label_932C:; return;
label_932D:; return;
label_932E:; return;
label_932F:; return;
label_9330:; return;
label_9331:; return;
label_9332:; return;
label_9333:; return;
label_9334:; return;
label_9335:; return;
label_9336:; return;
label_9337:; return;
label_9338:; return;
label_933A:; return;
label_933C:; return;
label_933E:; return;
label_9341:; return;
label_9344:; return;
label_9346:; return;
label_9347:; return;
label_9348:; return;
label_934A:; return;
label_934C:; return;
label_934F:; return;
label_9352:; return;
label_9354:; return;
label_9355:; return;
label_9356:; return;
label_9357:; return;
label_9358:; return;
label_9359:; return;
label_935A:; return;
label_935D:; return;
label_935E:; return;
label_935F:; return;
label_9360:; return;
label_9361:; return;
label_9364:; return;
label_9367:; return;
label_936A:; return;
label_936B:; return;
label_936D:; return;
label_936E:; return;
label_936F:; return;
label_9370:; return;
label_9372:; return;
label_9375:; return;
label_9376:; return;
label_9377:; return;
label_9378:; return;
label_937A:; return;
label_937D:; return;
label_9380:; return;
label_9382:; return;
label_9383:; return;
label_9384:; return;
label_9385:; return;
label_9386:; return;
label_9387:; return;
label_9388:; return;
label_938B:; return;
label_938C:; return;
label_938E:; return;
label_9391:; return;
label_9392:; return;
label_9393:; return;
label_9394:; return;
label_9396:; return;
label_9397:; return;
label_9399:; return;
label_939B:; return;
label_939C:; return;
label_939D:; return;
label_939E:; return;
label_939F:; return;
label_93A0:; return;
label_93A1:; return;
label_93A2:; return;
label_93A3:; return;
label_93A4:; return;
label_93A6:; return;
label_93A7:; return;
label_93A8:; return;
label_93A9:; return;
label_93AA:; return;
label_93AB:; return;
label_93AD:; return;
label_93AE:; return;
label_93AF:; return;
label_93B0:; return;
label_93B1:; return;
label_93B2:; return;
label_93B3:; return;
label_93B4:; return;
label_93B5:; return;
label_93B6:; return;
label_93B7:; return;
label_93B8:; return;
label_93B9:; return;
label_93BB:; return;
label_93BD:; return;
label_93BF:; return;
label_93C0:; return;
label_93C2:; return;
label_93C3:; return;
label_93C4:; return;
label_93C5:; return;
label_93C6:; return;
label_93C7:; return;
label_93C8:; return;
label_93C9:; return;
label_93CA:; return;
label_93CB:; return;
label_93CC:; return;
label_93CD:; return;
label_93CF:; return;
label_93D1:; return;
label_93D4:; return;
label_93D7:; return;
label_93DA:; return;
label_93DB:; return;
label_93DC:; return;
label_93DD:; return;
label_93DE:; return;
label_93DF:; return;
label_93E0:; return;
label_93E1:; return;
label_93E2:; return;
label_93E5:; return;
label_93E6:; return;
label_93E7:; return;
label_93E8:; return;
label_93E9:; return;
label_93EB:; return;
label_93ED:; return;
label_93EF:; return;
label_93F0:; return;
label_93F3:; return;
label_93F4:; return;
label_93F7:; return;
label_93FA:; return;
label_93FB:; return;
label_93FC:; return;
label_93FD:; return;
label_93FE:; return;
label_9401:; return;
label_9402:; return;
label_9403:; return;
label_9404:; return;
label_9405:; return;
label_9406:; return;
label_9407:; return;
label_9408:; return;
label_9409:; return;
label_940A:; return;
label_940B:; return;
label_940C:; return;
label_940D:; return;
label_940E:; return;
label_940F:; return;
label_9410:; return;
label_9411:; return;
label_9412:; return;
label_9414:; return;
label_9416:; return;
label_9418:; return;
label_941B:; return;
label_941C:; return;
label_941D:; return;
label_941F:; return;
label_9420:; return;
label_9421:; return;
label_9422:; return;
label_9424:; return;
label_9426:; return;
label_9428:; return;
label_9429:; return;
label_942A:; return;
label_942B:; return;
label_942C:; return;
label_942D:; return;
label_942F:; return;
label_9430:; return;
label_9431:; return;
label_9432:; return;
label_9433:; return;
label_9435:; return;
label_9437:; return;
label_9439:; return;
label_943B:; return;
label_943C:; return;
label_943D:; return;
label_943E:; return;
label_9440:; return;
label_9441:; return;
label_9442:; return;
label_9443:; return;
label_9445:; return;
label_9447:; return;
label_9449:; return;
label_944A:; return;
label_944B:; return;
label_944C:; return;
label_944D:; return;
label_944E:; return;
label_944F:; return;
label_9451:; return;
label_9452:; return;
label_9454:; return;
label_9457:; return;
label_9458:; return;
label_9459:; return;
label_945A:; return;
label_945B:; return;
label_945D:; return;
label_945E:; return;
label_945F:; return;
label_9460:; return;
label_9461:; return;
label_9464:; return;
label_9467:; return;
label_946A:; return;
label_946B:; return;
label_946D:; return;
label_946E:; return;
label_946F:; return;
label_9470:; return;
label_9471:; return;
label_9472:; return;
label_9475:; return;
label_9476:; return;
label_9477:; return;
label_9479:; return;
label_947A:; return;
label_947B:; return;
label_947C:; return;
label_947D:; return;
label_947E:; return;
label_9480:; return;
label_9481:; return;
label_9482:; return;
label_9483:; return;
label_9485:; return;
label_9487:; return;
label_9488:; return;
label_9489:; return;
label_948A:; return;
label_948B:; return;
label_948D:; return;
label_948E:; return;
label_948F:; return;
label_9490:; return;
label_9491:; return;
label_9494:; return;
label_9495:; return;
label_9498:; return;
label_9499:; return;
label_949A:; return;
label_949B:; return;
label_949C:; return;
label_949D:; return;
label_949E:; return;
label_949F:; return;
label_94A0:; return;
label_94A1:; return;
label_94A3:; return;
label_94A4:; return;
label_94A5:; return;
label_94A8:; return;
label_94A9:; return;
label_94AA:; return;
label_94AB:; return;
label_94AC:; return;
label_94AD:; return;
label_94AF:; return;
label_94B0:; return;
label_94B1:; return;
label_94B3:; return;
label_94B6:; return;
label_94B8:; return;
label_94B9:; return;
label_94BA:; return;
label_94BB:; return;
label_94BD:; return;
label_94BF:; return;
label_94C1:; return;
label_94C2:; return;
label_94C3:; return;
label_94C6:; return;
label_94C8:; return;
label_94C9:; return;
label_94CA:; return;
label_94CB:; return;
label_94CC:; return;
label_94CE:; return;
label_94CF:; return;
label_94D1:; return;
label_94D2:; return;
label_94D4:; return;
label_94D6:; return;
label_94D8:; return;
label_94D9:; return;
label_94DA:; return;
label_94DC:; return;
label_94DE:; return;
label_94DF:; return;
label_94E1:; return;
label_94E3:; return;
label_94E5:; return;
label_94E7:; return;
label_94E9:; return;
label_94EB:; return;
label_94ED:; return;
label_94EE:; return;
label_94EF:; return;
label_94F0:; return;
label_94F1:; return;
label_94F3:; return;
label_94F4:; return;
label_94F5:; return;
label_94F7:; return;
label_94F9:; return;
label_94FC:; return;
label_94FE:; return;
label_94FF:; return;
label_9501:; return;
label_9504:; return;
label_9506:; return;
label_9508:; return;
label_9509:; return;
label_950A:; return;
label_950B:; return;
label_950C:; return;
label_950D:; return;
label_950E:; return;
label_950F:; return;
label_9510:; return;
label_9511:; return;
label_9513:; return;
label_9516:; return;
label_9518:; return;
label_951B:; return;
label_951D:; return;
label_951E:; return;
label_951F:; return;
label_9520:; return;
label_9522:; return;
label_9524:; return;
label_9526:; return;
label_9528:; return;
label_9529:; return;
label_952A:; return;
label_952B:; return;
label_952D:; return;
label_9530:; return;
label_9532:; return;
label_9534:; return;
label_9537:; return;
label_9538:; return;
label_953A:; return;
label_953C:; return;
label_953D:; return;
label_953E:; return;
label_953F:; return;
label_9540:; return;
label_9541:; return;
label_9543:; return;
label_9545:; return;
label_9546:; return;
label_9547:; return;
label_9548:; return;
label_9549:; return;
label_954B:; return;
label_954D:; return;
label_954E:; return;
label_954F:; return;
label_9550:; return;
label_9552:; return;
label_9554:; return;
label_9557:; return;
label_9558:; return;
label_955A:; return;
label_955D:; return;
label_955E:; return;
label_9560:; return;
label_9562:; return;
label_9564:; return;
label_9566:; return;
label_9567:; return;
label_9568:; return;
label_9569:; return;
label_956A:; return;
label_956B:; return;
label_956C:; return;
label_956D:; return;
label_956F:; return;
label_9571:; return;
label_9574:; return;
label_9576:; return;
label_9578:; return;
label_9579:; return;
label_957A:; return;
label_957B:; return;
label_957E:; return;
label_957F:; return;
label_9580:; return;
label_9582:; return;
label_9585:; return;
label_9587:; return;
label_9589:; return;
label_958A:; return;
label_958C:; return;
label_958D:; return;
label_958E:; return;
label_958F:; return;
label_9590:; return;
label_9591:; return;
label_9592:; return;
label_9594:; return;
label_9596:; return;
label_9597:; return;
label_9598:; return;
label_9599:; return;
label_959A:; return;
label_959C:; return;
label_959E:; return;
label_959F:; return;
label_95A0:; return;
label_95A3:; return;
label_95A6:; return;
label_95A8:; return;
label_95A9:; return;
label_95AA:; return;
label_95AB:; return;
label_95AE:; return;
label_95AF:; return;
label_95B0:; return;
label_95B1:; return;
label_95B2:; return;
label_95B3:; return;
label_95B6:; return;
label_95B8:; return;
label_95B9:; return;
label_95BA:; return;
label_95BB:; return;
label_95BE:; return;
label_95BF:; return;
label_95C0:; return;
label_95C1:; return;
label_95C4:; return;
label_95C5:; return;
label_95C7:; return;
label_95C9:; return;
label_95CA:; return;
label_95CB:; return;
label_95CD:; return;
label_95CE:; return;
label_95D0:; return;
label_95D2:; return;
label_95D4:; return;
label_95D6:; return;
label_95D8:; return;
label_95D9:; return;
label_95DA:; return;
label_95DC:; return;
label_95DE:; return;
label_95E0:; return;
label_95E1:; return;
label_95E2:; return;
label_95E3:; return;
label_95E5:; return;
label_95E8:; return;
label_95E9:; return;
label_95EA:; return;
label_95EB:; return;
label_95ED:; return;
label_95F0:; return;
label_95F1:; return;
label_95F2:; return;
label_95F3:; return;
label_95F5:; return;
label_95F6:; return;
label_95F7:; return;
label_95FA:; return;
label_95FB:; return;
label_95FD:; return;
label_95FE:; return;
label_95FF:; return;
label_9602:; return;
label_9604:; return;
label_9607:; return;
label_9609:; return;
label_960A:; return;
label_960C:; return;
label_960F:; return;
label_9610:; return;
label_9611:; return;
label_9612:; return;
label_9613:; return;
label_9615:; return;
label_9616:; return;
label_9618:; return;
label_9619:; return;
label_961A:; return;
label_961B:; return;
label_961D:; return;
label_961E:; return;
label_9620:; return;
label_9621:; return;
label_9623:; return;
label_9625:; return;
label_9628:; return;
label_9629:; return;
label_962B:; return;
label_962D:; return;
label_9630:; return;
label_9631:; return;
label_9633:; return;
label_9636:; return;
label_9638:; return;
label_9639:; return;
label_963B:; return;
label_963D:; return;
label_963F:; return;
label_9641:; return;
label_9642:; return;
label_9643:; return;
label_9644:; return;
label_9645:; return;
label_9646:; return;
label_9648:; return;
label_9649:; return;
label_964A:; return;
label_964B:; return;
label_964D:; return;
label_964F:; return;
label_9651:; return;
label_9654:; return;
label_9657:; return;
label_9659:; return;
label_965C:; return;
label_965E:; return;
label_965F:; return;
label_9660:; return;
label_9661:; return;
label_9663:; return;
label_9665:; return;
label_9667:; return;
label_9668:; return;
label_9669:; return;
label_966B:; return;
label_966D:; return;
label_966F:; return;
label_9670:; return;
label_9671:; return;
label_9673:; return;
label_9675:; return;
label_9677:; return;
label_9678:; return;
label_9679:; return;
label_967B:; return;
label_967D:; return;
label_967F:; return;
label_9680:; return;
label_9683:; return;
label_9686:; return;
label_9689:; return;
label_968C:; return;
label_968F:; return;
label_9690:; return;
label_9691:; return;
label_9692:; return;
label_9693:; return;
label_9694:; return;
label_9695:; return;
label_9696:; return;
label_9697:; return;
label_9698:; return;
label_9699:; return;
label_969A:; return;
label_969B:; return;
label_969C:; return;
label_969D:; return;
label_969E:; return;
label_969F:; return;
label_96A0:; return;
label_96A3:; return;
label_96A5:; return;
label_96A7:; return;
label_96AA:; return;
label_96AD:; return;
label_96B0:; return;
label_96B1:; return;
label_96B2:; return;
label_96B3:; return;
label_96B4:; return;
label_96B5:; return;
label_96B6:; return;
label_96B7:; return;
label_96B8:; return;
label_96B9:; return;
label_96BA:; return;
label_96BB:; return;
label_96BC:; return;
label_96BD:; return;
label_96BE:; return;
label_96BF:; return;
label_96C0:; return;
label_96C2:; return;
label_96C4:; return;
label_96C6:; return;
label_96C7:; return;
label_96C9:; return;
label_96CA:; return;
label_96CC:; return;
label_96CE:; return;
label_96CF:; return;
label_96D1:; return;
label_96D2:; return;
label_96D3:; return;
label_96D5:; return;
label_96D6:; return;
label_96D7:; return;
label_96D9:; return;
label_96DA:; return;
label_96DC:; return;
label_96DD:; return;
label_96DF:; return;
label_96E1:; return;
label_96E4:; return;
label_96E6:; return;
label_96E7:; return;
label_96E9:; return;
label_96EC:; return;
label_96EF:; return;
label_96F0:; return;
label_96F3:; return;
label_96F5:; return;
label_96F7:; return;
label_96F9:; return;
label_96FA:; return;
label_96FB:; return;
label_96FC:; return;
label_96FE:; return;
label_96FF:; return;
label_9700:; return;
label_9702:; return;
label_9705:; return;
label_9706:; return;
label_9707:; return;
label_970A:; return;
label_970B:; return;
label_970C:; return;
label_970F:; return;
label_9711:; return;
label_9714:; return;
label_9717:; return;
label_9719:; return;
label_971C:; return;
label_971D:; return;
label_971F:; return;
label_9720:; return;
label_9723:; return;
label_9724:; return;
label_9727:; return;
label_9728:; return;
label_9729:; return;
label_972A:; return;
label_972B:; return;
label_972E:; return;
label_9730:; return;
label_9732:; return;
label_9734:; return;
label_9736:; return;
label_9737:; return;
label_9738:; return;
label_973B:; return;
label_973E:; return;
label_973F:; return;
label_9740:; return;
label_9741:; return;
label_9742:; return;
label_9743:; return;
label_9745:; return;
label_9746:; return;
label_9747:; return;
label_9748:; return;
label_974A:; return;
label_974B:; return;
label_974C:; return;
label_974D:; return;
label_974E:; return;
label_974F:; return;
label_9750:; return;
label_9753:; return;
label_9754:; return;
label_9755:; return;
label_9756:; return;
label_9757:; return;
label_9758:; return;
label_975B:; return;
label_975E:; return;
label_9761:; return;
label_9764:; return;
label_9767:; return;
label_976A:; return;
label_976D:; return;
label_976E:; return;
label_976F:; return;
label_9770:; return;
label_9771:; return;
label_9772:; return;
label_9773:; return;
label_9775:; return;
label_9776:; return;
label_9778:; return;
label_9779:; return;
label_977A:; return;
label_977B:; return;
label_977D:; return;
label_977E:; return;
label_9780:; return;
label_9782:; return;
label_9783:; return;
label_9785:; return;
label_9786:; return;
label_9787:; return;
label_9788:; return;
label_9789:; return;
label_978A:; return;
label_978C:; return;
label_978D:; return;
label_978E:; return;
label_978F:; return;
label_9790:; return;
label_9791:; return;
label_9792:; return;
label_9793:; return;
label_9794:; return;
label_9795:; return;
label_9797:; return;
label_9799:; return;
label_979A:; return;
label_979B:; return;
label_979C:; return;
label_979D:; return;
label_979E:; return;
label_979F:; return;
label_97A0:; return;
label_97A2:; return;
label_97A4:; return;
label_97A6:; return;
label_97A8:; return;
label_97A9:; return;
label_97AA:; return;
label_97AB:; return;
label_97AC:; return;
label_97AD:; return;
label_97AE:; return;
label_97AF:; return;
label_97B0:; return;
label_97B1:; return;
label_97B2:; return;
label_97B3:; return;
label_97B4:; return;
label_97B5:; return;
label_97B6:; return;
label_97B7:; return;
label_97B8:; return;
label_97B9:; return;
label_97BA:; return;
label_97BB:; return;
label_97BC:; return;
label_97BD:; return;
label_97BE:; return;
label_97BF:; return;
label_97C0:; return;
label_97C2:; return;
label_97C4:; return;
label_97C6:; return;
label_97C8:; return;
label_97CB:; return;
label_97CD:; return;
label_97CF:; return;
label_97D0:; return;
label_97D2:; return;
label_97D5:; return;
label_97D8:; return;
label_97DB:; return;
label_97DE:; return;
label_97E1:; return;
label_97E4:; return;
label_97E6:; return;
label_97E9:; return;
label_97EC:; return;
label_97ED:; return;
label_97EE:; return;
label_97F1:; return;
label_97F4:; return;
label_97F6:; return;
label_97F9:; return;
label_97FC:; return;
label_97FF:; return;
label_9800:; return;
label_9802:; return;
label_9804:; return;
label_9806:; return;
label_9807:; return;
label_9808:; return;
label_9809:; return;
label_980A:; return;
label_980B:; return;
label_980D:; return;
label_980E:; return;
label_980F:; return;
label_9810:; return;
label_9811:; return;
label_9812:; return;
label_9814:; return;
label_9815:; return;
label_9816:; return;
label_9817:; return;
label_9818:; return;
label_9819:; return;
label_981B:; return;
label_981C:; return;
label_981D:; return;
label_981E:; return;
label_981F:; return;
label_9820:; return;
label_9821:; return;
label_9822:; return;
label_9823:; return;
label_9824:; return;
label_9826:; return;
label_9828:; return;
label_9829:; return;
label_982A:; return;
label_982B:; return;
label_982C:; return;
label_982E:; return;
label_9830:; return;
label_9831:; return;
label_9832:; return;
label_9834:; return;
label_9836:; return;
label_9838:; return;
label_9839:; return;
label_983B:; return;
label_983C:; return;
label_983D:; return;
label_983F:; return;
label_9840:; return;
label_9843:; return;
label_9846:; return;
label_9849:; return;
label_984B:; return;
label_984E:; return;
label_9851:; return;
label_9854:; return;
label_9856:; return;
label_9859:; return;
label_985A:; return;
label_985B:; return;
label_985D:; return;
label_985F:; return;
label_9860:; return;
label_9863:; return;
label_9865:; return;
label_9867:; return;
label_9869:; return;
label_986A:; return;
label_986B:; return;
label_986C:; return;
label_986D:; return;
label_986E:; return;
label_986F:; return;
label_9870:; return;
label_9873:; return;
label_9875:; return;
label_9878:; return;
label_987B:; return;
label_987E:; return;
label_987F:; return;
label_9881:; return;
label_9883:; return;
label_9885:; return;
label_9887:; return;
label_9888:; return;
label_9889:; return;
label_988A:; return;
label_988B:; return;
label_988E:; return;
label_988F:; return;
label_9890:; return;
label_9891:; return;
label_9892:; return;
label_9893:; return;
label_9894:; return;
label_9895:; return;
label_9896:; return;
label_9897:; return;
label_9898:; return;
label_9899:; return;
label_989A:; return;
label_989B:; return;
label_989C:; return;
label_989D:; return;
label_989E:; return;
label_989F:; return;
label_98A0:; return;
label_98A3:; return;
label_98A6:; return;
label_98A9:; return;
label_98AA:; return;
label_98AC:; return;
label_98AF:; return;
label_98B1:; return;
label_98B3:; return;
label_98B6:; return;
label_98B7:; return;
label_98BA:; return;
label_98BC:; return;
label_98BD:; return;
label_98BF:; return;
label_98C2:; return;
label_98C5:; return;
label_98C7:; return;
label_98CA:; return;
label_98CC:; return;
label_98CF:; return;
label_98D1:; return;
label_98D4:; return;
label_98D5:; return;
label_98D6:; return;
label_98D7:; return;
label_98D9:; return;
label_98DB:; return;
label_98DD:; return;
label_98DF:; return;
label_98E2:; return;
label_98E4:; return;
label_98E6:; return;
label_98E9:; return;
label_98EB:; return;
label_98ED:; return;
label_98EF:; return;
label_98F2:; return;
label_98F5:; return;
label_98F8:; return;
label_98FB:; return;
label_98FD:; return;
label_98FF:; return;
label_9901:; return;
label_9904:; return;
label_9906:; return;
label_9908:; return;
label_990B:; return;
label_990C:; return;
label_990E:; return;
label_9910:; return;
label_9912:; return;
label_9914:; return;
label_9916:; return;
label_9919:; return;
label_991B:; return;
label_991D:; return;
label_991F:; return;
label_9922:; return;
label_9924:; return;
label_9927:; return;
label_9929:; return;
label_992C:; return;
label_992F:; return;
label_9931:; return;
label_9934:; return;
label_9936:; return;
label_9938:; return;
label_993B:; return;
label_993C:; return;
label_993F:; return;
label_9941:; return;
label_9944:; return;
label_9946:; return;
label_9948:; return;
label_994A:; return;
label_994D:; return;
label_9950:; return;
label_9952:; return;
label_9955:; return;
label_9958:; return;
label_995B:; return;
label_995E:; return;
label_995F:; return;
label_9962:; return;
label_9963:; return;
label_9966:; return;
label_9967:; return;
label_996A:; return;
label_996C:; return;
label_996E:; return;
label_9970:; return;
label_9972:; return;
label_9974:; return;
label_9976:; return;
label_9978:; return;
label_997B:; return;
label_997D:; return;
label_997F:; return;
label_9982:; return;
label_9985:; return;
label_9988:; return;
label_998B:; return;
label_998E:; return;
label_9991:; return;
label_9994:; return;
label_9997:; return;
label_999A:; return;
label_999D:; return;
label_99A0:; return;
label_99A3:; return;
label_99A6:; return;
label_99A9:; return;
label_99AC:; return;
label_99AF:; return;
label_99B2:; return;
label_99B3:; return;
label_99B4:; return;
label_99B5:; return;
label_99B6:; return;
label_99B7:; return;
label_99B8:; return;
label_99B9:; return;
label_99BA:; return;
label_99BB:; return;
label_99BC:; return;
label_99BD:; return;
label_99BE:; return;
label_99BF:; return;
label_99C0:; return;
label_99C2:; return;
label_99C4:; return;
label_99C7:; return;
label_99C9:; return;
label_99CC:; return;
label_99CE:; return;
}

void func_8C01_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C01_b6");
#endif
label_8C01:;
    /* $8C01: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C03:;
    /* $8C03: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8C04:;
    /* $8C04: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8C05:;
    /* $8C05: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8C06:;
    /* $8C06: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8C07:;
    /* $8C07: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8C08:;
    /* $8C08: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFCFD + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8C0B:;
    /* $8C0B: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8C0E:;
    /* $8C0E: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFEFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8C11:;
    /* $8C11: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8C12:;
    /* $8C12: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8C13:;
    /* $8C13: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8C14:;
    /* $8C14: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8C15:;
    /* $8C15: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8C16:;
    /* $8C16: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8C17:;
    /* $8C17: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8C18:;
    /* $8C18: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8C18); return;
}

void func_8C84_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C84_b6");
#endif
label_8C84:;
    /* $8C84: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8CC6_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8CC6_b6");
#endif
label_8CC6:;
    /* $8CC6: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x07); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8CC8:;
    /* $8CC8: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8CCA:;
    /* $8CCA: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8CCC:;
    /* $8CCC: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8CCE:;
    /* $8CCE: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8CD0:;
    /* $8CD0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8CD1:;
    /* $8CD1: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8CD2:;
    /* $8CD2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8CD3:;
    /* $8CD3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8CD4:;
    /* $8CD4: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8CD5:;
    /* $8CD5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8CD6:;
    /* $8CD6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8CD7:;
    /* $8CD7: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFCFC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8CDA:;
    /* $8CDA: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8CDD:;
    /* $8CDD: FC */ maybe_trigger_vblank(4); (void)nes_read((0x00FC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8CE0:;
    /* $8CE0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8CE0); return;
}

void func_8CF0_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8CF0_b6");
#endif
label_8CF0:;
    /* $8CF0: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x7F7F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8CF3:;
    /* $8CF3: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x7F7F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8CF6:;
    /* $8CF6: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x7F7F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8CF9:;
    /* $8CF9: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x7F7F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8CFC:;
    /* $8CFC: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x7F7F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8CFF:;
    /* $8CFF: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFE + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8D02:;
    /* $8D02: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8D05:;
    /* $8D05: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8D08:;
    /* $8D08: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8D0B:;
    /* $8D0B: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8D0E:;
    /* $8D0E: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xE0FE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8D11:;
    /* $8D11: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE0; g_cpu.C=(g_cpu.X>=0xE0)?1:0; FLAG_NZ(r&0xFF); }
label_8D13:;
    /* $8D13: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE0; g_cpu.C=(g_cpu.X>=0xE0)?1:0; FLAG_NZ(r&0xFF); }
label_8D15:;
    /* $8D15: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE0; g_cpu.C=(g_cpu.X>=0xE0)?1:0; FLAG_NZ(r&0xFF); }
label_8D17:;
    /* $8D17: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE0; g_cpu.C=(g_cpu.X>=0xE0)?1:0; FLAG_NZ(r&0xFF); }
label_8D19:;
    /* $8D19: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE0; g_cpu.C=(g_cpu.X>=0xE0)?1:0; FLAG_NZ(r&0xFF); }
label_8D1B:;
    /* $8D1B: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE0; g_cpu.C=(g_cpu.X>=0xE0)?1:0; FLAG_NZ(r&0xFF); }
label_8D1D:;
    /* $8D1D: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE0; g_cpu.C=(g_cpu.X>=0xE0)?1:0; FLAG_NZ(r&0xFF); }
label_8D1F:;
    /* $8D1F: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x07; g_cpu.C=(g_cpu.X>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_8D21:;
    /* $8D21: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x07; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D23:;
    /* $8D23: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x07; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D25:;
    /* $8D25: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x07; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D27:;
    /* $8D27: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x07; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D29:;
    /* $8D29: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x07; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D2B:;
    /* $8D2B: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x07; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D2D:;
    /* $8D2D: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x07; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D2F:;
    /* $8D2F: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D31:;
    /* $8D31: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8D31); return;
}

void func_8CFB_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8CFB_b6");
#endif
label_8CFB:;
    /* $8CFB: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x7F7F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8CFE:;
    /* $8CFE: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFE7F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8D01:;
    /* $8D01: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8D04:;
    /* $8D04: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8D07:;
    /* $8D07: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8D0A:;
    /* $8D0A: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8D0D:;
    /* $8D0D: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8D10:;
    /* $8D10: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE0; g_cpu.C=(g_cpu.X>=0xE0)?1:0; FLAG_NZ(r&0xFF); }
label_8D12:;
    /* $8D12: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE0; g_cpu.C=(g_cpu.X>=0xE0)?1:0; FLAG_NZ(r&0xFF); }
label_8D14:;
    /* $8D14: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE0; g_cpu.C=(g_cpu.X>=0xE0)?1:0; FLAG_NZ(r&0xFF); }
label_8D16:;
    /* $8D16: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE0; g_cpu.C=(g_cpu.X>=0xE0)?1:0; FLAG_NZ(r&0xFF); }
label_8D18:;
    /* $8D18: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE0; g_cpu.C=(g_cpu.X>=0xE0)?1:0; FLAG_NZ(r&0xFF); }
label_8D1A:;
    /* $8D1A: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE0; g_cpu.C=(g_cpu.X>=0xE0)?1:0; FLAG_NZ(r&0xFF); }
label_8D1C:;
    /* $8D1C: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE0; g_cpu.C=(g_cpu.X>=0xE0)?1:0; FLAG_NZ(r&0xFF); }
label_8D1E:;
    /* $8D1E: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE0; g_cpu.C=(g_cpu.X>=0xE0)?1:0; FLAG_NZ(r&0xFF); }
label_8D20:;
    /* $8D20: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x07; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D22:;
    /* $8D22: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x07; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D24:;
    /* $8D24: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x07; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D26:;
    /* $8D26: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x07; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D28:;
    /* $8D28: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x07; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D2A:;
    /* $8D2A: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x07; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D2C:;
    /* $8D2C: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x07; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D2E:;
    /* $8D2E: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x07; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D30:;
    /* $8D30: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8D30); return;
}

void func_95BD_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95BD_b6");
#endif
label_95BD:;
    /* $95BD: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x08); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_95BF:;
    /* $95BF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x95BF); return;
}

void func_8844_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8844_b6");
#endif
label_8844:;
    /* $8844: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8845:;
    /* $8845: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8846:;
    /* $8846: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8847:;
    /* $8847: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8848:;
    /* $8848: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x88; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x4A; g_cpu.S--; func_E06E();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8848, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_884B:;
    /* $884B: E7 */ maybe_trigger_vblank(5); { uint16_t a=0xE4; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_884D:;
    /* $884D: E7 */ maybe_trigger_vblank(5); { uint16_t a=0xE4; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_884F:;
    /* $884F: E7 */ maybe_trigger_vblank(5); { uint16_t a=0xF4; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8851:;
    /* $8851: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xF5 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8853:;
    /* $8853: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x17 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8855:;
    /* $8855: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x37 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8857:;
    /* $8857: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x04 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8859:;
    /* $8859: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x07; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_885B:;
    /* $885B: E7 */ maybe_trigger_vblank(5); { uint16_t a=0x07; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_885D:;
    /* $885D: C7 */ maybe_trigger_vblank(5); { uint16_t a=0x07; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_885F:;
    /* $885F: E7 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8861:;
    /* $8861: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8861); return;
}

void func_8BB1_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8BB1_b6");
#endif
label_8BB1:;
    /* $8BB1: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0307 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8BB4:;
    /* $8BB4: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_8BB6:;
    /* $8BB6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8BBA;
label_8BB8:;
    /* $8BB8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8BBA:;
    /* $8BBA: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xA0; FLAG_NZ(g_cpu.A);
label_8BBC:;
    /* $8BBC: 85 */ maybe_trigger_vblank(3); nes_write(0x6B, g_cpu.A);
label_8BBE:;
    /* $8BBE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8BC0:;
    /* $8BC0: 9D */ maybe_trigger_vblank(5); nes_write((0x030A + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8BC3:;
    /* $8BC3: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8BC4:;
    /* $8BC4: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_8BC6:;
    /* $8BC6: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x10; FLAG_NZ(g_cpu.A);
label_8BC8:;
    /* $8BC8: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x6B); FLAG_NZ(g_cpu.A);
label_8BCA:;
    /* $8BCA: 85 */ maybe_trigger_vblank(3); nes_write(0x6B, g_cpu.A);
label_8BCC:;
    /* $8BCC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_8BCE:;
    /* $8BCE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_DE47(); return;
}

void func_A480_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A480_b6");
#endif
label_A480:;
    /* $A480: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA480); return;
}

void func_8036_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8036_b6");
#endif
label_8036:;
    /* $8036: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { call_by_address(0x8008); return; }
label_8038:;
    /* $8038: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8038); return;
}

void func_8039_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8039_b6");
#endif
label_8039:;
    /* $8039: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8039); return;
}

void func_9AE1_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9AE1_b6");
#endif
label_9AE1:;
    /* $9AE1: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0400 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9AE4:;
    /* $9AE4: 85 */ maybe_trigger_vblank(3); nes_write(0x08, g_cpu.A);
label_9AE6:;
    /* $9AE6: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0401 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9AE9:;
    /* $9AE9: 85 */ maybe_trigger_vblank(3); nes_write(0x09, g_cpu.A);
label_9AEB:;
    /* $9AEB: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AFB + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9AEE:;
    /* $9AEE: 85 */ maybe_trigger_vblank(3); nes_write(0x0B, g_cpu.A);
label_9AF0:;
    /* $9AF0: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8027_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8027_b6");
#endif
label_8027:;
    /* $8027: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x0000 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_802A:;
    /* $802A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x802A); return;
}

void func_9AF1_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9AF1_b6");
#endif
label_9AF1:;
    /* $9AF1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x0B); FLAG_NZ(g_cpu.A);
label_9AF3:;
    /* $9AF3: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_9AF5:;
    /* $9AF5: 9D */ maybe_trigger_vblank(5); nes_write((0x6AFB + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9AF8:;
    /* $9AF8: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x08); FLAG_NZ(g_cpu.A);
label_9AFA:;
    /* $9AFA: 9D */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9AFD:;
    /* $9AFD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x09); FLAG_NZ(g_cpu.A);
label_9AFF:;
    /* $9AFF: 9D */ maybe_trigger_vblank(5); nes_write((0x0401 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9B02:;
    /* $9B02: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8003_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8003_b6");
#endif
label_8003:;
    /* $8003: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x4B2D + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8006:;
    /* $8006: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x001D); FLAG_NZ(g_cpu.A);
label_8009:;
    /* $8009: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8009); return;
}

void func_9958_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9958_b6");
#endif
label_9958:;
    /* $9958: 9D */ maybe_trigger_vblank(5); nes_write((0x6B02 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_995B:;
    /* $995B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x040B + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_995E:;
    /* $995E: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_995F:;
    /* $995F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x61; g_cpu.S--; func_802A_b6();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x995F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9962:;
    /* $9962: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9963:;
    /* $9963: 9D */ maybe_trigger_vblank(5); nes_write((0x040B + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9966:;
    /* $9966: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_98F8_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_98F8_b6");
#endif
label_98F8:;
    /* $98F8: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_98FB:;
    /* $98FB: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_98FD:;
    /* $98FD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_990B;
label_98FF:;
    /* $98FF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_9901:;
    /* $9901: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0402 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_9904:;
    /* $9904: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_9908;
label_9906:;
    /* $9906: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1D; FLAG_NZ(g_cpu.A);
label_9908:;
    /* $9908: 9D */ maybe_trigger_vblank(5); nes_write((0x6AF9 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_990B:;
    /* $990B: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9830_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9830_b6");
#endif
label_9830:;
    /* $9830: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9831:;
    /* $9831: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9832:;
    /* $9832: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x4A + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9834:;
    /* $9834: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0x98 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9836:;
    /* $9836: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { call_by_address(0x9858); return; }
label_9838:;
    /* $9838: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9838); return;
label_9839:; return;
label_983B:; return;
label_983C:; return;
label_983D:; return;
label_983F:; return;
label_9840:; return;
label_9843:; return;
label_9846:; return;
label_9849:; return;
label_984B:; return;
label_984E:; return;
label_9851:; return;
label_9854:; return;
label_9856:; return;
label_9859:; return;
label_985A:; return;
label_985B:; return;
label_985D:; return;
label_985F:; return;
label_9860:; return;
label_9863:; return;
label_9865:; return;
label_9867:; return;
label_9869:; return;
label_986A:; return;
label_986B:; return;
label_986C:; return;
label_986D:; return;
label_986E:; return;
label_986F:; return;
label_9870:; return;
label_9873:; return;
label_9875:; return;
label_9878:; return;
label_987B:; return;
label_987E:; return;
label_987F:; return;
label_9881:; return;
label_9883:; return;
label_9885:; return;
label_9887:; return;
label_9888:; return;
label_9889:; return;
label_988A:; return;
label_988B:; return;
label_988E:; return;
label_988F:; return;
label_9890:; return;
label_9891:; return;
label_9892:; return;
label_9893:; return;
label_9894:; return;
label_9895:; return;
label_9896:; return;
label_9897:; return;
label_9898:; return;
label_9899:; return;
label_989A:; return;
label_989B:; return;
label_989C:; return;
label_989D:; return;
label_989E:; return;
label_989F:; return;
label_98A0:; return;
label_98A3:; return;
label_98A6:; return;
label_98A9:; return;
label_98AA:; return;
label_98AC:; return;
label_98AF:; return;
label_98B1:; return;
label_98B3:; return;
label_98B6:; return;
label_98B7:; return;
label_98BA:; return;
label_98BC:; return;
label_98BD:; return;
label_98BF:; return;
label_98C2:; return;
label_98C5:; return;
label_98C7:; return;
label_98CA:; return;
label_98CC:; return;
label_98CF:; return;
label_98D1:; return;
label_98D4:; return;
label_98D5:; return;
label_98D6:; return;
label_98D7:; return;
label_98D9:; return;
label_98DB:; return;
label_98DD:; return;
label_98DF:; return;
label_98E2:; return;
label_98E4:; return;
label_98E6:; return;
label_98E9:; return;
label_98EB:; return;
label_98ED:; return;
label_98EF:; return;
label_98F2:; return;
label_98F5:; return;
label_98F8:; return;
label_98FB:; return;
label_98FD:; return;
label_98FF:; return;
label_9901:; return;
label_9904:; return;
label_9906:; return;
label_9908:; return;
label_990B:; return;
label_990C:; return;
label_990E:; return;
label_9910:; return;
label_9912:; return;
label_9914:; return;
label_9916:; return;
label_9919:; return;
label_991B:; return;
label_991D:; return;
label_991F:; return;
label_9922:; return;
label_9924:; return;
label_9927:; return;
label_9929:; return;
label_992C:; return;
label_992F:; return;
label_9931:; return;
label_9934:; return;
label_9936:; return;
label_9938:; return;
label_993B:; return;
label_993C:; return;
label_993F:; return;
label_9941:; return;
label_9944:; return;
label_9946:; return;
label_9948:; return;
label_994A:; return;
label_994D:; return;
label_9950:; return;
label_9952:; return;
label_9955:; return;
label_9958:; return;
label_995B:; return;
label_995E:; return;
label_995F:; return;
label_9962:; return;
label_9963:; return;
label_9966:; return;
label_9967:; return;
label_996A:; return;
label_996C:; return;
label_996E:; return;
label_9970:; return;
label_9972:; return;
label_9974:; return;
label_9976:; return;
label_9978:; return;
label_997B:; return;
label_997D:; return;
label_997F:; return;
label_9982:; return;
label_9985:; return;
label_9988:; return;
label_998B:; return;
label_998E:; return;
label_9991:; return;
label_9994:; return;
label_9997:; return;
label_999A:; return;
label_999D:; return;
label_99A0:; return;
label_99A3:; return;
label_99A6:; return;
label_99A9:; return;
label_99AC:; return;
label_99AF:; return;
label_99B2:; return;
label_99B3:; return;
label_99B4:; return;
label_99B5:; return;
label_99B6:; return;
label_99B7:; return;
label_99B8:; return;
label_99B9:; return;
label_99BA:; return;
label_99BB:; return;
label_99BC:; return;
label_99BD:; return;
label_99BE:; return;
label_99BF:; return;
label_99C0:; return;
label_99C2:; return;
label_99C4:; return;
label_99C7:; return;
label_99C9:; return;
label_99CC:; return;
label_99CE:; return;
label_99D1:; return;
label_99D2:; return;
label_99D3:; return;
label_99D5:; return;
label_99D8:; return;
label_99DB:; return;
label_99DE:; return;
label_99E0:; return;
label_99E3:; return;
label_99E4:; return;
label_99E7:; return;
label_99EA:; return;
label_99EC:; return;
label_99EE:; return;
label_99F1:; return;
label_99F4:; return;
label_99F7:; return;
label_99F8:; return;
label_99FB:; return;
label_99FC:; return;
label_99FD:; return;
label_99FF:; return;
label_9A00:; return;
label_9A03:; return;
label_9A05:; return;
label_9A07:; return;
label_9A08:; return;
label_9A09:; return;
label_9A0A:; return;
label_9A0D:; return;
label_9A0E:; return;
label_9A11:; return;
label_9A12:; return;
label_9A13:; return;
label_9A16:; return;
label_9A18:; return;
label_9A1A:; return;
label_9A1C:; return;
label_9A1E:; return;
label_9A20:; return;
label_9A22:; return;
label_9A25:; return;
label_9A28:; return;
label_9A2B:; return;
label_9A2E:; return;
label_9A31:; return;
label_9A33:; return;
label_9A35:; return;
label_9A37:; return;
label_9A39:; return;
label_9A3B:; return;
label_9A3E:; return;
label_9A41:; return;
label_9A43:; return;
label_9A45:; return;
label_9A47:; return;
label_9A4A:; return;
label_9A4D:; return;
label_9A4E:; return;
label_9A50:; return;
label_9A52:; return;
label_9A54:; return;
label_9A57:; return;
label_9A58:; return;
label_9A5A:; return;
label_9A5D:; return;
label_9A5E:; return;
label_9A60:; return;
label_9A63:; return;
label_9A64:; return;
label_9A66:; return;
label_9A69:; return;
label_9A6A:; return;
label_9A6D:; return;
label_9A6F:; return;
label_9A71:; return;
label_9A73:; return;
label_9A75:; return;
label_9A78:; return;
label_9A79:; return;
label_9A7B:; return;
label_9A7D:; return;
label_9A7F:; return;
label_9A81:; return;
label_9A83:; return;
label_9A85:; return;
label_9A86:; return;
label_9A88:; return;
label_9A89:; return;
label_9A8A:; return;
label_9A8C:; return;
label_9A8E:; return;
label_9A90:; return;
label_9A92:; return;
label_9A94:; return;
label_9A97:; return;
label_9A99:; return;
label_9A9C:; return;
label_9A9E:; return;
label_9AA0:; return;
label_9AA1:; return;
label_9AA2:; return;
label_9AA4:; return;
label_9AA5:; return;
label_9AA7:; return;
label_9AA9:; return;
label_9AAA:; return;
label_9AAB:; return;
label_9AAC:; return;
label_9AAE:; return;
label_9AB1:; return;
label_9AB2:; return;
label_9AB3:; return;
label_9AB6:; return;
label_9AB9:; return;
label_9ABB:; return;
label_9ABC:; return;
label_9ABF:; return;
label_9AC1:; return;
label_9AC3:; return;
label_9AC5:; return;
label_9AC8:; return;
label_9ACA:; return;
label_9ACC:; return;
label_9ACF:; return;
label_9AD1:; return;
label_9AD4:; return;
label_9AD6:; return;
label_9AD9:; return;
label_9ADC:; return;
label_9ADF:; return;
label_9AE0:; return;
label_9AE1:; return;
label_9AE4:; return;
label_9AE6:; return;
label_9AE9:; return;
label_9AEB:; return;
label_9AEE:; return;
label_9AF0:; return;
label_9AF1:; return;
label_9AF3:; return;
label_9AF5:; return;
label_9AF8:; return;
label_9AFA:; return;
label_9AFD:; return;
label_9AFF:; return;
label_9B02:; return;
label_9B03:; return;
label_9B06:; return;
label_9B08:; return;
label_9B0A:; return;
label_9B0D:; return;
label_9B0F:; return;
label_9B11:; return;
label_9B13:; return;
label_9B16:; return;
label_9B18:; return;
label_9B1B:; return;
label_9B1E:; return;
label_9B20:; return;
label_9B23:; return;
label_9B24:; return;
label_9B25:; return;
label_9B26:; return;
label_9B27:; return;
label_9B28:; return;
label_9B2A:; return;
label_9B2C:; return;
label_9B2E:; return;
label_9B31:; return;
label_9B33:; return;
label_9B35:; return;
label_9B37:; return;
label_9B38:; return;
label_9B3B:; return;
label_9B3D:; return;
label_9B3F:; return;
label_9B41:; return;
label_9B43:; return;
label_9B45:; return;
label_9B48:; return;
label_9B49:; return;
label_9B4A:; return;
label_9B4D:; return;
label_9B50:; return;
label_9B52:; return;
label_9B54:; return;
label_9B56:; return;
label_9B58:; return;
label_9B59:; return;
label_9B5A:; return;
label_9B5C:; return;
label_9B5E:; return;
label_9B61:; return;
label_9B64:; return;
label_9B66:; return;
label_9B68:; return;
label_9B6B:; return;
label_9B6E:; return;
label_9B71:; return;
label_9B72:; return;
label_9B74:; return;
label_9B75:; return;
label_9B77:; return;
label_9B79:; return;
label_9B7A:; return;
label_9B7C:; return;
label_9B7E:; return;
label_9B80:; return;
label_9B81:; return;
label_9B82:; return;
label_9B85:; return;
label_9B86:; return;
label_9B88:; return;
label_9B89:; return;
label_9B8C:; return;
label_9B8F:; return;
label_9B92:; return;
label_9B95:; return;
label_9B98:; return;
label_9B9B:; return;
label_9B9E:; return;
label_9BA0:; return;
label_9BA2:; return;
label_9BA4:; return;
label_9BA7:; return;
label_9BAA:; return;
label_9BAC:; return;
label_9BAF:; return;
label_9BB1:; return;
label_9BB4:; return;
label_9BB7:; return;
label_9BBA:; return;
label_9BBD:; return;
label_9BBF:; return;
label_9BC1:; return;
label_9BC2:; return;
label_9BC5:; return;
label_9BC8:; return;
label_9BCB:; return;
label_9BCE:; return;
label_9BD1:; return;
label_9BD4:; return;
label_9BD7:; return;
label_9BDA:; return;
label_9BDD:; return;
label_9BDF:; return;
label_9BE0:; return;
label_9BE2:; return;
label_9BE4:; return;
label_9BE7:; return;
label_9BEA:; return;
label_9BEC:; return;
label_9BEE:; return;
label_9BF0:; return;
label_9BF1:; return;
label_9BF4:; return;
label_9BF6:; return;
label_9BF8:; return;
label_9BF9:; return;
label_9BFC:; return;
label_9BFE:; return;
label_9BFF:; return;
label_9C02:; return;
label_9C04:; return;
label_9C06:; return;
label_9C09:; return;
label_9C0C:; return;
label_9C0E:; return;
label_9C10:; return;
label_9C12:; return;
label_9C14:; return;
label_9C16:; return;
label_9C17:; return;
label_9C1A:; return;
label_9C1D:; return;
label_9C20:; return;
label_9C23:; return;
label_9C26:; return;
label_9C29:; return;
label_9C2C:; return;
label_9C2E:; return;
label_9C30:; return;
label_9C32:; return;
label_9C34:; return;
label_9C37:; return;
label_9C3A:; return;
label_9C3C:; return;
label_9C3E:; return;
label_9C40:; return;
label_9C42:; return;
label_9C44:; return;
label_9C47:; return;
label_9C4A:; return;
label_9C4C:; return;
label_9C4E:; return;
label_9C50:; return;
label_9C53:; return;
label_9C56:; return;
label_9C58:; return;
label_9C5A:; return;
label_9C5B:; return;
label_9C5E:; return;
label_9C61:; return;
label_9C64:; return;
label_9C66:; return;
label_9C68:; return;
label_9C6A:; return;
label_9C6C:; return;
label_9C6E:; return;
label_9C70:; return;
label_9C72:; return;
label_9C74:; return;
label_9C76:; return;
label_9C78:; return;
label_9C7A:; return;
label_9C7D:; return;
label_9C7F:; return;
label_9C81:; return;
label_9C83:; return;
label_9C85:; return;
label_9C87:; return;
label_9C89:; return;
label_9C8B:; return;
label_9C8D:; return;
label_9C8F:; return;
label_9C91:; return;
label_9C93:; return;
label_9C95:; return;
label_9C97:; return;
label_9C99:; return;
label_9C9B:; return;
label_9C9D:; return;
label_9C9F:; return;
label_9CA1:; return;
label_9CA3:; return;
label_9CA5:; return;
label_9CA7:; return;
label_9CA9:; return;
label_9CAB:; return;
label_9CAD:; return;
label_9CAF:; return;
label_9CB1:; return;
label_9CB3:; return;
label_9CB5:; return;
label_9CB7:; return;
label_9CB9:; return;
label_9CBB:; return;
label_9CBD:; return;
label_9CBF:; return;
label_9CC1:; return;
label_9CC3:; return;
label_9CC5:; return;
label_9CC7:; return;
label_9CC9:; return;
label_9CCB:; return;
label_9CCD:; return;
label_9CCF:; return;
label_9CD1:; return;
label_9CD3:; return;
label_9CD5:; return;
label_9CD7:; return;
label_9CD9:; return;
label_9CDB:; return;
label_9CDD:; return;
label_9CDF:; return;
label_9CE1:; return;
label_9CE3:; return;
label_9CE5:; return;
label_9CE7:; return;
label_9CE9:; return;
label_9CEB:; return;
label_9CED:; return;
label_9CEF:; return;
label_9CF1:; return;
label_9CF3:; return;
label_9CF5:; return;
label_9CF7:; return;
label_9CF9:; return;
label_9CFB:; return;
label_9CFD:; return;
label_9CFF:; return;
label_9D01:; return;
label_9D03:; return;
label_9D05:; return;
label_9D08:; return;
label_9D0B:; return;
label_9D0E:; return;
label_9D10:; return;
label_9D13:; return;
label_9D16:; return;
label_9D17:; return;
label_9D1A:; return;
label_9D1B:; return;
label_9D1E:; return;
label_9D21:; return;
label_9D24:; return;
label_9D26:; return;
label_9D28:; return;
label_9D2A:; return;
label_9D2C:; return;
label_9D2E:; return;
label_9D30:; return;
label_9D32:; return;
label_9D34:; return;
label_9D37:; return;
label_9D38:; return;
label_9D3A:; return;
label_9D3C:; return;
label_9D3F:; return;
label_9D40:; return;
label_9D42:; return;
label_9D44:; return;
label_9D47:; return;
label_9D48:; return;
label_9D4A:; return;
label_9D4C:; return;
label_9D4E:; return;
label_9D50:; return;
label_9D53:; return;
label_9D54:; return;
label_9D57:; return;
label_9D59:; return;
label_9D5C:; return;
label_9D5D:; return;
label_9D5E:; return;
label_9D60:; return;
label_9D62:; return;
label_9D64:; return;
label_9D65:; return;
label_9D67:; return;
label_9D6A:; return;
label_9D6B:; return;
label_9D6C:; return;
label_9D6D:; return;
label_9D6E:; return;
label_9D71:; return;
label_9D72:; return;
label_9D74:; return;
label_9D76:; return;
label_9D77:; return;
label_9D78:; return;
label_9D79:; return;
label_9D7A:; return;
label_9D7B:; return;
label_9D7C:; return;
label_9D7D:; return;
label_9D7E:; return;
label_9D7F:; return;
label_9D80:; return;
label_9D81:; return;
label_9D82:; return;
label_9D83:; return;
label_9D84:; return;
label_9D85:; return;
label_9D87:; return;
label_9D89:; return;
label_9D8A:; return;
label_9D8B:; return;
label_9D8C:; return;
label_9D8D:; return;
label_9D8E:; return;
label_9D8F:; return;
label_9D90:; return;
label_9D91:; return;
label_9D92:; return;
label_9D94:; return;
label_9D96:; return;
label_9D97:; return;
label_9D98:; return;
label_9D9A:; return;
label_9D9C:; return;
label_9D9D:; return;
label_9D9F:; return;
label_9DA1:; return;
label_9DA4:; return;
label_9DA6:; return;
label_9DA9:; return;
label_9DAB:; return;
label_9DAC:; return;
label_9DAD:; return;
label_9DAF:; return;
label_9DB2:; return;
label_9DB4:; return;
label_9DB6:; return;
label_9DB9:; return;
label_9DBC:; return;
label_9DBE:; return;
label_9DC1:; return;
label_9DC4:; return;
label_9DC6:; return;
label_9DC9:; return;
label_9DCB:; return;
label_9DCC:; return;
label_9DCE:; return;
label_9DD1:; return;
label_9DD4:; return;
label_9DD6:; return;
label_9DD8:; return;
label_9DDA:; return;
label_9DDC:; return;
label_9DDE:; return;
label_9DE0:; return;
label_9DE3:; return;
label_9DE6:; return;
label_9DE9:; return;
label_9DEB:; return;
label_9DED:; return;
label_9DEF:; return;
label_9DF1:; return;
label_9DF2:; return;
label_9DF3:; return;
label_9DF4:; return;
label_9DF5:; return;
label_9DF6:; return;
label_9DF7:; return;
label_9DF8:; return;
label_9DF9:; return;
label_9DFA:; return;
label_9DFB:; return;
label_9DFC:; return;
label_9DFD:; return;
label_9DFE:; return;
label_9DFF:; return;
label_9E00:; return;
label_9E01:; return;
label_9E04:; return;
label_9E07:; return;
label_9E0A:; return;
label_9E0D:; return;
label_9E0E:; return;
label_9E11:; return;
label_9E12:; return;
label_9E15:; return;
label_9E18:; return;
label_9E1B:; return;
label_9E1C:; return;
label_9E1D:; return;
label_9E20:; return;
label_9E23:; return;
label_9E26:; return;
label_9E27:; return;
label_9E2A:; return;
label_9E2C:; return;
label_9E2F:; return;
label_9E30:; return;
label_9E31:; return;
label_9E34:; return;
label_9E37:; return;
label_9E3A:; return;
label_9E3C:; return;
label_9E3D:; return;
label_9E3E:; return;
label_9E40:; return;
label_9E43:; return;
label_9E45:; return;
label_9E47:; return;
label_9E49:; return;
label_9E4C:; return;
label_9E4F:; return;
label_9E51:; return;
label_9E54:; return;
label_9E57:; return;
label_9E59:; return;
label_9E5B:; return;
label_9E5C:; return;
label_9E5D:; return;
label_9E5F:; return;
label_9E60:; return;
label_9E62:; return;
label_9E64:; return;
label_9E66:; return;
label_9E69:; return;
label_9E6C:; return;
label_9E6F:; return;
label_9E71:; return;
label_9E73:; return;
label_9E74:; return;
label_9E75:; return;
label_9E77:; return;
label_9E78:; return;
label_9E79:; return;
label_9E7C:; return;
label_9E7F:; return;
label_9E80:; return;
label_9E83:; return;
label_9E84:; return;
label_9E86:; return;
label_9E89:; return;
label_9E8B:; return;
label_9E8C:; return;
label_9E8E:; return;
label_9E91:; return;
label_9E94:; return;
label_9E95:; return;
label_9E97:; return;
label_9E99:; return;
label_9E9A:; return;
label_9E9C:; return;
label_9E9E:; return;
label_9E9F:; return;
label_9EA1:; return;
label_9EA2:; return;
label_9EA4:; return;
label_9EA5:; return;
label_9EA6:; return;
label_9EA8:; return;
label_9EA9:; return;
label_9EAA:; return;
label_9EAD:; return;
label_9EAE:; return;
label_9EB0:; return;
label_9EB2:; return;
label_9EB4:; return;
label_9EB6:; return;
label_9EB7:; return;
label_9EB9:; return;
label_9EBA:; return;
label_9EBC:; return;
label_9EBE:; return;
label_9EBF:; return;
label_9EC1:; return;
label_9EC3:; return;
label_9EC5:; return;
label_9EC6:; return;
label_9EC7:; return;
label_9EC9:; return;
label_9ECC:; return;
label_9ECF:; return;
label_9ED2:; return;
label_9ED3:; return;
label_9ED4:; return;
label_9ED5:; return;
label_9ED7:; return;
label_9ED9:; return;
label_9EDC:; return;
label_9EDF:; return;
label_9EE1:; return;
label_9EE2:; return;
label_9EE3:; return;
label_9EE4:; return;
label_9EE6:; return;
label_9EE8:; return;
label_9EEA:; return;
label_9EEB:; return;
label_9EEE:; return;
label_9EF0:; return;
label_9EF2:; return;
label_9EF4:; return;
label_9EF6:; return;
label_9EF8:; return;
label_9EF9:; return;
label_9EFA:; return;
label_9EFD:; return;
label_9EFF:; return;
label_9F02:; return;
label_9F04:; return;
label_9F06:; return;
label_9F08:; return;
label_9F09:; return;
label_9F0B:; return;
label_9F0C:; return;
label_9F0F:; return;
label_9F11:; return;
label_9F13:; return;
label_9F15:; return;
label_9F18:; return;
label_9F1B:; return;
label_9F1E:; return;
label_9F20:; return;
label_9F22:; return;
label_9F24:; return;
label_9F26:; return;
label_9F27:; return;
label_9F28:; return;
label_9F2A:; return;
label_9F2D:; return;
label_9F2F:; return;
label_9F30:; return;
label_9F33:; return;
label_9F35:; return;
label_9F36:; return;
label_9F39:; return;
label_9F3C:; return;
label_9F3D:; return;
label_9F3E:; return;
label_9F3F:; return;
label_9F42:; return;
label_9F43:; return;
label_9F44:; return;
label_9F45:; return;
label_9F48:; return;
label_9F49:; return;
label_9F4C:; return;
label_9F4D:; return;
label_9F4E:; return;
label_9F51:; return;
label_9F53:; return;
label_9F55:; return;
label_9F57:; return;
label_9F58:; return;
label_9F5B:; return;
label_9F5C:; return;
label_9F5F:; return;
label_9F60:; return;
label_9F63:; return;
label_9F66:; return;
label_9F67:; return;
label_9F68:; return;
label_9F6B:; return;
label_9F6C:; return;
label_9F6F:; return;
label_9F70:; return;
label_9F71:; return;
label_9F72:; return;
label_9F73:; return;
label_9F75:; return;
label_9F78:; return;
label_9F7A:; return;
label_9F7D:; return;
label_9F7F:; return;
label_9F82:; return;
label_9F84:; return;
label_9F86:; return;
label_9F88:; return;
label_9F8A:; return;
label_9F8D:; return;
label_9F90:; return;
label_9F91:; return;
label_9F92:; return;
label_9F93:; return;
label_9F95:; return;
label_9F96:; return;
label_9F97:; return;
label_9F98:; return;
label_9F9B:; return;
label_9F9E:; return;
label_9FA0:; return;
label_9FA2:; return;
label_9FA5:; return;
label_9FA7:; return;
label_9FA8:; return;
label_9FAB:; return;
label_9FAE:; return;
label_9FB0:; return;
label_9FB3:; return;
label_9FB5:; return;
label_9FB8:; return;
label_9FB9:; return;
label_9FBB:; return;
label_9FBC:; return;
label_9FBD:; return;
label_9FBF:; return;
label_9FC2:; return;
label_9FC4:; return;
label_9FC6:; return;
label_9FC9:; return;
label_9FCC:; return;
label_9FCE:; return;
label_9FD1:; return;
label_9FD4:; return;
label_9FD6:; return;
label_9FD9:; return;
label_9FDB:; return;
label_9FDC:; return;
label_9FDE:; return;
label_9FE1:; return;
label_9FE4:; return;
label_9FE6:; return;
label_9FE8:; return;
label_9FEA:; return;
label_9FEC:; return;
label_9FEE:; return;
label_9FF0:; return;
label_9FF3:; return;
label_9FF5:; return;
label_9FF6:; return;
label_9FF9:; return;
label_9FFC:; return;
label_9FFD:; return;
label_9FFE:; return;
label_9FFF:; return;
label_A002:; return;
label_A003:; return;
label_A004:; return;
label_A005:; return;
label_A008:; return;
label_A009:; return;
label_A00C:; return;
label_A00D:; return;
label_A00E:; return;
label_A011:; return;
label_A013:; return;
label_A015:; return;
label_A017:; return;
label_A018:; return;
label_A01B:; return;
label_A01C:; return;
label_A01F:; return;
label_A020:; return;
label_A023:; return;
label_A026:; return;
label_A027:; return;
label_A028:; return;
label_A02B:; return;
label_A02C:; return;
label_A02F:; return;
label_A030:; return;
label_A032:; return;
label_A034:; return;
label_A035:; return;
label_A036:; return;
label_A037:; return;
label_A039:; return;
label_A03C:; return;
label_A03F:; return;
label_A042:; return;
label_A043:; return;
label_A044:; return;
label_A045:; return;
label_A047:; return;
label_A049:; return;
label_A04C:; return;
label_A04F:; return;
label_A051:; return;
label_A052:; return;
label_A053:; return;
label_A054:; return;
label_A056:; return;
label_A058:; return;
label_A05A:; return;
label_A05B:; return;
label_A05E:; return;
label_A060:; return;
label_A062:; return;
label_A064:; return;
label_A066:; return;
label_A069:; return;
label_A06C:; return;
label_A06F:; return;
label_A071:; return;
label_A074:; return;
label_A076:; return;
label_A079:; return;
label_A07B:; return;
label_A07C:; return;
label_A07E:; return;
label_A081:; return;
label_A084:; return;
label_A085:; return;
label_A087:; return;
label_A089:; return;
label_A08A:; return;
label_A08C:; return;
label_A08E:; return;
label_A08F:; return;
label_A091:; return;
label_A092:; return;
label_A094:; return;
label_A095:; return;
label_A096:; return;
label_A098:; return;
label_A099:; return;
label_A09A:; return;
label_A09D:; return;
label_A09E:; return;
label_A0A0:; return;
label_A0A2:; return;
label_A0A4:; return;
label_A0A6:; return;
label_A0A7:; return;
label_A0A9:; return;
label_A0AA:; return;
label_A0AC:; return;
label_A0AE:; return;
label_A0AF:; return;
label_A0B1:; return;
label_A0B3:; return;
label_A0B5:; return;
label_A0B7:; return;
label_A0B9:; return;
label_A0BB:; return;
label_A0BC:; return;
label_A0BD:; return;
label_A0C0:; return;
label_A0C3:; return;
label_A0C5:; return;
label_A0C6:; return;
label_A0C9:; return;
label_A0CB:; return;
label_A0CD:; return;
label_A0D0:; return;
label_A0D1:; return;
label_A0D2:; return;
label_A0D3:; return;
label_A0D5:; return;
label_A0D6:; return;
label_A0D8:; return;
label_A0DA:; return;
label_A0DC:; return;
label_A0DD:; return;
label_A0DE:; return;
label_A0DF:; return;
label_A0E1:; return;
label_A0E2:; return;
label_A0E3:; return;
label_A0E4:; return;
label_A0E6:; return;
label_A0E7:; return;
label_A0E9:; return;
label_A0EA:; return;
label_A0EC:; return;
label_A0EE:; return;
label_A0EF:; return;
label_A0F1:; return;
label_A0F3:; return;
label_A0F5:; return;
label_A0F8:; return;
label_A0F9:; return;
label_A0FC:; return;
label_A0FF:; return;
label_A102:; return;
label_A105:; return;
label_A108:; return;
label_A109:; return;
label_A10C:; return;
label_A10F:; return;
label_A112:; return;
label_A113:; return;
label_A116:; return;
label_A119:; return;
label_A11A:; return;
label_A11B:; return;
label_A11E:; return;
label_A121:; return;
label_A124:; return;
label_A127:; return;
label_A12A:; return;
label_A12C:; return;
label_A12F:; return;
label_A130:; return;
label_A132:; return;
label_A134:; return;
label_A136:; return;
label_A138:; return;
label_A13A:; return;
label_A13C:; return;
label_A13E:; return;
label_A140:; return;
label_A142:; return;
label_A144:; return;
label_A146:; return;
label_A148:; return;
label_A149:; return;
label_A14A:; return;
label_A14B:; return;
label_A14C:; return;
label_A14D:; return;
label_A14E:; return;
label_A14F:; return;
label_A150:; return;
label_A152:; return;
label_A155:; return;
label_A158:; return;
label_A159:; return;
label_A15A:; return;
label_A15B:; return;
label_A15D:; return;
label_A15F:; return;
label_A160:; return;
label_A163:; return;
label_A165:; return;
label_A168:; return;
label_A16A:; return;
label_A16B:; return;
label_A16C:; return;
label_A16E:; return;
label_A170:; return;
label_A172:; return;
label_A173:; return;
label_A174:; return;
label_A176:; return;
label_A177:; return;
label_A178:; return;
label_A179:; return;
label_A17A:; return;
label_A17B:; return;
label_A17C:; return;
label_A17D:; return;
label_A17E:; return;
label_A17F:; return;
label_A180:; return;
label_A183:; return;
label_A185:; return;
label_A186:; return;
label_A188:; return;
label_A189:; return;
label_A18A:; return;
label_A18B:; return;
label_A18C:; return;
label_A18D:; return;
label_A18E:; return;
label_A18F:; return;
label_A190:; return;
label_A191:; return;
label_A194:; return;
label_A196:; return;
label_A199:; return;
label_A19A:; return;
label_A19B:; return;
label_A19C:; return;
label_A19D:; return;
label_A19E:; return;
label_A19F:; return;
label_A1A0:; return;
label_A1A1:; return;
label_A1A2:; return;
label_A1A4:; return;
label_A1A6:; return;
label_A1A7:; return;
label_A1A8:; return;
label_A1A9:; return;
label_A1AA:; return;
label_A1AB:; return;
label_A1AC:; return;
label_A1AD:; return;
label_A1AE:; return;
label_A1AF:; return;
label_A1B0:; return;
label_A1B1:; return;
label_A1B2:; return;
label_A1B3:; return;
label_A1B4:; return;
label_A1B6:; return;
label_A1B7:; return;
label_A1B8:; return;
label_A1B9:; return;
label_A1BA:; return;
label_A1BB:; return;
label_A1BC:; return;
label_A1BD:; return;
label_A1BE:; return;
label_A1BF:; return;
label_A1C0:; return;
label_A1C2:; return;
label_A1C4:; return;
label_A1C6:; return;
label_A1C7:; return;
label_A1C8:; return;
label_A1C9:; return;
label_A1CA:; return;
label_A1CB:; return;
label_A1CC:; return;
label_A1CD:; return;
label_A1CE:; return;
label_A1CF:; return;
label_A1D0:; return;
label_A1D3:; return;
label_A1D5:; return;
label_A1D7:; return;
label_A1D8:; return;
label_A1D9:; return;
label_A1DA:; return;
label_A1DB:; return;
label_A1DC:; return;
label_A1DD:; return;
label_A1DE:; return;
label_A1DF:; return;
label_A1E0:; return;
label_A1E3:; return;
label_A1E4:; return;
label_A1E6:; return;
label_A1E7:; return;
label_A1E8:; return;
label_A1E9:; return;
label_A1EA:; return;
label_A1EB:; return;
label_A1EC:; return;
label_A1ED:; return;
label_A1EE:; return;
label_A1EF:; return;
label_A1F0:; return;
label_A1F3:; return;
label_A1F5:; return;
label_A1F8:; return;
label_A1F9:; return;
label_A1FB:; return;
label_A1FC:; return;
label_A1FD:; return;
label_A1FF:; return;
label_A202:; return;
label_A204:; return;
label_A206:; return;
label_A209:; return;
label_A20C:; return;
label_A20E:; return;
label_A211:; return;
label_A214:; return;
label_A216:; return;
label_A219:; return;
label_A21B:; return;
label_A21C:; return;
label_A21E:; return;
label_A221:; return;
label_A224:; return;
label_A226:; return;
label_A228:; return;
label_A22A:; return;
label_A22C:; return;
label_A22E:; return;
label_A230:; return;
label_A231:; return;
label_A233:; return;
label_A236:; return;
label_A239:; return;
label_A23B:; return;
label_A23E:; return;
label_A241:; return;
label_A242:; return;
label_A244:; return;
label_A246:; return;
label_A248:; return;
label_A24A:; return;
label_A24C:; return;
label_A24E:; return;
label_A250:; return;
label_A253:; return;
label_A256:; return;
label_A257:; return;
label_A258:; return;
label_A25B:; return;
label_A25E:; return;
label_A25F:; return;
label_A260:; return;
label_A262:; return;
label_A263:; return;
label_A264:; return;
label_A265:; return;
label_A266:; return;
label_A267:; return;
label_A268:; return;
label_A26A:; return;
label_A26B:; return;
label_A26C:; return;
label_A26D:; return;
label_A26E:; return;
label_A26F:; return;
label_A270:; return;
label_A271:; return;
label_A272:; return;
label_A273:; return;
label_A274:; return;
label_A275:; return;
label_A278:; return;
label_A27B:; return;
label_A27E:; return;
label_A281:; return;
label_A282:; return;
label_A285:; return;
label_A288:; return;
label_A28B:; return;
label_A28E:; return;
label_A28F:; return;
label_A290:; return;
label_A292:; return;
label_A295:; return;
label_A298:; return;
label_A299:; return;
label_A29A:; return;
label_A29B:; return;
label_A29C:; return;
label_A29D:; return;
label_A29E:; return;
label_A29F:; return;
label_A2A1:; return;
label_A2A4:; return;
label_A2A7:; return;
label_A2AA:; return;
label_A2AB:; return;
label_A2AC:; return;
label_A2AE:; return;
label_A2B0:; return;
label_A2B3:; return;
label_A2B5:; return;
label_A2B6:; return;
label_A2B7:; return;
label_A2B8:; return;
label_A2BA:; return;
label_A2BC:; return;
label_A2BD:; return;
label_A2BE:; return;
label_A2BF:; return;
label_A2C0:; return;
label_A2C2:; return;
label_A2C4:; return;
label_A2C6:; return;
label_A2C8:; return;
label_A2CA:; return;
label_A2CC:; return;
label_A2CD:; return;
label_A2CE:; return;
label_A2D1:; return;
label_A2D3:; return;
label_A2D5:; return;
label_A2D7:; return;
label_A2DA:; return;
label_A2DD:; return;
label_A2E0:; return;
label_A2E2:; return;
label_A2E4:; return;
label_A2E6:; return;
label_A2E8:; return;
label_A2EA:; return;
label_A2EC:; return;
label_A2EE:; return;
label_A2F0:; return;
label_A2F1:; return;
label_A2F2:; return;
label_A2F4:; return;
label_A2F7:; return;
label_A2F9:; return;
label_A2FA:; return;
label_A2FC:; return;
label_A2FE:; return;
label_A2FF:; return;
label_A301:; return;
label_A303:; return;
label_A304:; return;
label_A307:; return;
label_A308:; return;
label_A309:; return;
label_A30B:; return;
label_A30C:; return;
label_A30E:; return;
label_A30F:; return;
label_A310:; return;
label_A313:; return;
label_A316:; return;
label_A317:; return;
label_A318:; return;
label_A31A:; return;
label_A31C:; return;
label_A31F:; return;
label_A320:; return;
label_A322:; return;
label_A324:; return;
label_A325:; return;
label_A326:; return;
label_A327:; return;
label_A329:; return;
label_A32C:; return;
label_A32F:; return;
label_A332:; return;
label_A333:; return;
label_A334:; return;
label_A335:; return;
label_A337:; return;
label_A339:; return;
label_A33C:; return;
label_A33F:; return;
label_A341:; return;
label_A342:; return;
label_A343:; return;
label_A344:; return;
label_A346:; return;
label_A348:; return;
label_A34A:; return;
label_A34B:; return;
label_A34E:; return;
label_A350:; return;
label_A352:; return;
label_A354:; return;
label_A356:; return;
label_A359:; return;
label_A35C:; return;
label_A35F:; return;
label_A361:; return;
label_A363:; return;
label_A365:; return;
label_A366:; return;
label_A369:; return;
label_A36C:; return;
label_A36D:; return;
label_A36E:; return;
label_A36F:; return;
label_A372:; return;
label_A373:; return;
label_A374:; return;
label_A375:; return;
label_A378:; return;
label_A379:; return;
label_A37C:; return;
label_A37D:; return;
label_A37E:; return;
label_A381:; return;
label_A383:; return;
label_A385:; return;
label_A387:; return;
label_A388:; return;
label_A38B:; return;
label_A38C:; return;
label_A38F:; return;
label_A390:; return;
label_A393:; return;
label_A396:; return;
label_A397:; return;
label_A398:; return;
label_A39B:; return;
label_A39C:; return;
label_A39F:; return;
label_A3A0:; return;
label_A3A2:; return;
label_A3A4:; return;
label_A3A6:; return;
label_A3A7:; return;
label_A3A8:; return;
label_A3AA:; return;
label_A3AC:; return;
label_A3AE:; return;
label_A3AF:; return;
label_A3B0:; return;
label_A3B2:; return;
label_A3B4:; return;
label_A3B6:; return;
label_A3B7:; return;
label_A3B8:; return;
label_A3BA:; return;
label_A3BC:; return;
label_A3BE:; return;
label_A3BF:; return;
label_A3C0:; return;
label_A3C1:; return;
label_A3C2:; return;
label_A3C3:; return;
label_A3C4:; return;
label_A3C5:; return;
label_A3C6:; return;
label_A3C7:; return;
label_A3C8:; return;
label_A3C9:; return;
label_A3CB:; return;
label_A3CE:; return;
label_A3D1:; return;
label_A3D2:; return;
label_A3D3:; return;
label_A3D4:; return;
label_A3D5:; return;
label_A3D6:; return;
label_A3D7:; return;
label_A3D8:; return;
label_A3D9:; return;
label_A3DA:; return;
label_A3DB:; return;
label_A3DE:; return;
label_A3E0:; return;
label_A3E1:; return;
label_A3E2:; return;
label_A3E3:; return;
label_A3E4:; return;
label_A3E5:; return;
label_A3E6:; return;
label_A3E7:; return;
label_A3E8:; return;
label_A3EB:; return;
label_A3EE:; return;
label_A3F1:; return;
label_A3F2:; return;
label_A3F3:; return;
label_A3F4:; return;
label_A3F5:; return;
label_A3F6:; return;
label_A3F7:; return;
label_A3F8:; return;
label_A3F9:; return;
label_A3FB:; return;
label_A3FD:; return;
label_A3FF:; return;
label_A400:; return;
label_A401:; return;
label_A402:; return;
label_A403:; return;
label_A404:; return;
label_A405:; return;
label_A406:; return;
label_A407:; return;
label_A408:; return;
label_A409:; return;
label_A40A:; return;
label_A40B:; return;
label_A40C:; return;
label_A40D:; return;
label_A410:; return;
label_A411:; return;
label_A412:; return;
label_A413:; return;
label_A414:; return;
label_A415:; return;
label_A416:; return;
label_A417:; return;
label_A418:; return;
label_A419:; return;
label_A41A:; return;
label_A41B:; return;
label_A41C:; return;
label_A41D:; return;
label_A41F:; return;
label_A422:; return;
label_A423:; return;
label_A424:; return;
label_A425:; return;
label_A426:; return;
label_A427:; return;
label_A428:; return;
label_A42B:; return;
label_A42E:; return;
label_A430:; return;
label_A431:; return;
label_A432:; return;
label_A433:; return;
label_A434:; return;
label_A435:; return;
label_A436:; return;
label_A437:; return;
label_A438:; return;
label_A43A:; return;
label_A43C:; return;
label_A43D:; return;
label_A43E:; return;
label_A441:; return;
label_A442:; return;
label_A443:; return;
label_A444:; return;
label_A445:; return;
label_A447:; return;
label_A448:; return;
label_A44B:; return;
label_A44D:; return;
label_A44E:; return;
label_A450:; return;
label_A451:; return;
label_A452:; return;
label_A453:; return;
label_A454:; return;
label_A455:; return;
label_A457:; return;
label_A458:; return;
label_A45B:; return;
label_A45D:; return;
label_A45E:; return;
label_A460:; return;
label_A461:; return;
label_A463:; return;
label_A466:; return;
label_A467:; return;
label_A468:; return;
label_A46B:; return;
label_A46D:; return;
label_A46F:; return;
label_A472:; return;
label_A473:; return;
label_A474:; return;
label_A475:; return;
label_A476:; return;
label_A477:; return;
label_A478:; return;
label_A479:; return;
label_A47A:; return;
label_A47B:; return;
label_A47C:; return;
label_A47D:; return;
label_A47E:; return;
label_A47F:; return;
label_A480:; return;
label_A481:; return;
label_A482:; return;
label_A483:; return;
label_A484:; return;
label_A485:; return;
label_A486:; return;
label_A487:; return;
label_A488:; return;
label_A489:; return;
label_A48A:; return;
label_A48B:; return;
label_A48C:; return;
label_A48D:; return;
label_A48E:; return;
label_A48F:; return;
label_A490:; return;
label_A491:; return;
label_A492:; return;
label_A493:; return;
label_A494:; return;
label_A495:; return;
label_A496:; return;
label_A497:; return;
label_A498:; return;
label_A499:; return;
label_A49A:; return;
label_A49B:; return;
label_A49C:; return;
label_A49D:; return;
label_A49E:; return;
label_A49F:; return;
label_A4A0:; return;
label_A4A1:; return;
label_A4A2:; return;
label_A4A3:; return;
label_A4A4:; return;
label_A4A5:; return;
label_A4A6:; return;
label_A4A7:; return;
label_A4A8:; return;
label_A4A9:; return;
label_A4AA:; return;
label_A4AB:; return;
label_A4AC:; return;
label_A4AD:; return;
label_A4AE:; return;
label_A4AF:; return;
label_A4B0:; return;
label_A4B1:; return;
label_A4B2:; return;
label_A4B3:; return;
label_A4B4:; return;
label_A4B5:; return;
label_A4B6:; return;
label_A4B7:; return;
label_A4B8:; return;
label_A4B9:; return;
label_A4BA:; return;
label_A4BB:; return;
label_A4BC:; return;
label_A4BD:; return;
label_A4BE:; return;
label_A4BF:; return;
label_A4C0:; return;
label_A4C1:; return;
label_A4C2:; return;
label_A4C3:; return;
label_A4C4:; return;
label_A4C5:; return;
label_A4C6:; return;
label_A4C7:; return;
label_A4C8:; return;
label_A4C9:; return;
label_A4CA:; return;
label_A4CB:; return;
label_A4CC:; return;
label_A4CD:; return;
label_A4CE:; return;
label_A4CF:; return;
label_A4D0:; return;
label_A4D1:; return;
label_A4D2:; return;
label_A4D3:; return;
label_A4D4:; return;
label_A4D5:; return;
label_A4D6:; return;
label_A4D7:; return;
label_A4D8:; return;
label_A4D9:; return;
label_A4DA:; return;
label_A4DB:; return;
label_A4DC:; return;
label_A4DD:; return;
label_A4DE:; return;
label_A4DF:; return;
label_A4E0:; return;
label_A4E1:; return;
label_A4E2:; return;
label_A4E3:; return;
label_A4E4:; return;
label_A4E5:; return;
label_A4E6:; return;
label_A4E7:; return;
label_A4E8:; return;
label_A4E9:; return;
label_A4EA:; return;
label_A4EB:; return;
label_A4EC:; return;
label_A4ED:; return;
label_A4EE:; return;
label_A4EF:; return;
label_A4F0:; return;
label_A4F3:; return;
label_A4F5:; return;
label_A4F7:; return;
label_A4FA:; return;
label_A4FD:; return;
label_A4FE:; return;
label_A501:; return;
label_A504:; return;
label_A507:; return;
label_A50A:; return;
label_A50D:; return;
label_A510:; return;
label_A512:; return;
label_A514:; return;
label_A517:; return;
label_A518:; return;
label_A51B:; return;
label_A51E:; return;
label_A51F:; return;
label_A520:; return;
label_A523:; return;
label_A526:; return;
label_A527:; return;
label_A528:; return;
label_A52B:; return;
label_A52E:; return;
label_A52F:; return;
label_A530:; return;
label_A533:; return;
label_A534:; return;
label_A537:; return;
label_A53A:; return;
label_A53D:; return;
label_A53E:; return;
label_A53F:; return;
label_A540:; return;
label_A543:; return;
label_A544:; return;
label_A547:; return;
label_A54A:; return;
label_A54C:; return;
label_A54F:; return;
label_A550:; return;
label_A551:; return;
label_A552:; return;
label_A553:; return;
label_A556:; return;
label_A557:; return;
label_A55A:; return;
label_A55D:; return;
label_A55E:; return;
label_A561:; return;
label_A562:; return;
label_A563:; return;
label_A566:; return;
label_A567:; return;
label_A56A:; return;
label_A56D:; return;
label_A56E:; return;
label_A571:; return;
label_A574:; return;
label_A576:; return;
label_A577:; return;
label_A579:; return;
label_A57A:; return;
label_A57B:; return;
label_A57E:; return;
label_A580:; return;
label_A581:; return;
label_A584:; return;
label_A586:; return;
label_A589:; return;
label_A58B:; return;
label_A58E:; return;
label_A591:; return;
label_A593:; return;
label_A596:; return;
label_A597:; return;
label_A598:; return;
label_A59A:; return;
label_A59D:; return;
label_A5A0:; return;
label_A5A1:; return;
label_A5A3:; return;
label_A5A6:; return;
label_A5A7:; return;
label_A5A8:; return;
label_A5A9:; return;
label_A5AB:; return;
label_A5AE:; return;
label_A5AF:; return;
label_A5B0:; return;
label_A5B1:; return;
label_A5B2:; return;
label_A5B3:; return;
label_A5B4:; return;
label_A5B5:; return;
label_A5B6:; return;
label_A5B7:; return;
label_A5B8:; return;
label_A5BB:; return;
label_A5BC:; return;
label_A5BF:; return;
label_A5C2:; return;
label_A5C3:; return;
label_A5C4:; return;
label_A5C5:; return;
label_A5C6:; return;
label_A5C7:; return;
label_A5C8:; return;
label_A5CB:; return;
label_A5CC:; return;
label_A5CE:; return;
label_A5D0:; return;
label_A5D1:; return;
label_A5D2:; return;
label_A5D3:; return;
label_A5D4:; return;
label_A5D5:; return;
label_A5D6:; return;
label_A5D7:; return;
label_A5D8:; return;
label_A5DA:; return;
label_A5DD:; return;
label_A5E0:; return;
label_A5E1:; return;
label_A5E2:; return;
label_A5E3:; return;
label_A5E4:; return;
label_A5E5:; return;
label_A5E6:; return;
label_A5E7:; return;
label_A5E8:; return;
label_A5EB:; return;
label_A5ED:; return;
label_A5F0:; return;
label_A5F2:; return;
label_A5F5:; return;
label_A5F8:; return;
label_A5F9:; return;
label_A5FA:; return;
label_A5FB:; return;
label_A5FC:; return;
label_A5FD:; return;
label_A5FE:; return;
label_A5FF:; return;
label_A601:; return;
label_A604:; return;
label_A607:; return;
label_A60A:; return;
label_A60B:; return;
label_A60C:; return;
label_A60E:; return;
label_A610:; return;
label_A613:; return;
label_A616:; return;
label_A619:; return;
label_A61A:; return;
label_A61B:; return;
label_A61C:; return;
label_A61D:; return;
label_A61E:; return;
label_A61F:; return;
label_A620:; return;
label_A621:; return;
label_A622:; return;
label_A623:; return;
label_A624:; return;
label_A626:; return;
label_A627:; return;
label_A628:; return;
label_A629:; return;
label_A62A:; return;
label_A62B:; return;
label_A62C:; return;
label_A62D:; return;
label_A62E:; return;
label_A62F:; return;
label_A630:; return;
label_A632:; return;
label_A634:; return;
label_A636:; return;
label_A637:; return;
label_A638:; return;
label_A639:; return;
label_A63A:; return;
label_A63B:; return;
label_A63C:; return;
label_A63D:; return;
label_A63E:; return;
label_A63F:; return;
label_A640:; return;
label_A642:; return;
label_A643:; return;
label_A645:; return;
label_A647:; return;
label_A648:; return;
label_A649:; return;
label_A64A:; return;
label_A64B:; return;
label_A64C:; return;
label_A64D:; return;
label_A64E:; return;
label_A64F:; return;
label_A650:; return;
label_A653:; return;
label_A656:; return;
label_A659:; return;
label_A65A:; return;
label_A65B:; return;
label_A65C:; return;
label_A65D:; return;
label_A65E:; return;
label_A65F:; return;
label_A660:; return;
label_A663:; return;
label_A666:; return;
label_A669:; return;
label_A66A:; return;
label_A66B:; return;
label_A66C:; return;
label_A66D:; return;
label_A66E:; return;
label_A66F:; return;
label_A670:; return;
label_A671:; return;
label_A672:; return;
label_A673:; return;
label_A674:; return;
label_A675:; return;
label_A676:; return;
label_A677:; return;
label_A678:; return;
label_A679:; return;
label_A67A:; return;
label_A67B:; return;
label_A67C:; return;
label_A67D:; return;
label_A67E:; return;
label_A67F:; return;
label_A680:; return;
label_A681:; return;
label_A682:; return;
label_A683:; return;
label_A684:; return;
label_A685:; return;
label_A686:; return;
label_A687:; return;
label_A688:; return;
label_A689:; return;
label_A68A:; return;
label_A68B:; return;
label_A68C:; return;
label_A68D:; return;
label_A68E:; return;
label_A68F:; return;
label_A690:; return;
label_A691:; return;
}

void func_95C6_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95C6_b6");
#endif
label_95C6:;
    /* $95C6: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0xE014); FLAG_NZ(g_cpu.A);
label_95C9:;
    /* $95C9: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_95CA:;
    /* $95CA: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_95CB:;
    /* $95CB: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x38) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_95CD:;
    /* $95CD: 52 */ maybe_trigger_vblank(2); /* ILLEGAL $52 — skip 1 */
label_95CE:;
    /* $95CE: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x30); FLAG_NZ(g_cpu.A);
label_95D0:;
    /* $95D0: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A);
label_95D2:;
    /* $95D2: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_95D4:;
    /* $95D4: 95 */ maybe_trigger_vblank(4); nes_write((0x9F + g_cpu.X) & 0xFF, g_cpu.A);
label_95D6:;
    /* $95D6: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_95D8:;
    /* $95D8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x95D8); return;
}

void func_8006_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8006_b6");
#endif
label_8006:;
    /* $8006: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x001D); FLAG_NZ(g_cpu.A);
label_8009:;
    /* $8009: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8009); return;
}

void func_802A_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_802A_b6");
#endif
label_802A:;
    /* $802A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x802A); return;
}

void func_8009_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8009_b6");
#endif
label_8009:;
    /* $8009: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8009); return;
}

void func_8008_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8008_b6");
#endif
label_8008:;
    /* $8008: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8008); return;
}

void func_9817_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9817_b6");
#endif
label_9817:;
    /* $9817: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9817); return;
}

void func_99AD_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99AD_b6");
#endif
label_99AD:;
    /* $99AD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_99B0:;
    /* $99B0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x99B0); return;
}

void func_99F8_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99F8_b6");
#endif
label_99F8:;
    /* $99F8: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x040A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_99FB:;
    /* $99FB: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_99FC:;
    /* $99FC: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_99FD:;
    /* $99FD: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_99FF:;
    /* $99FF: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9A00_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A00_b6");
#endif
label_9A00:;
    /* $9A00: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_9A03:;
    /* $9A03: 84 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.Y);
label_9A05:;
    /* $9A05: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_9A07:;
    /* $9A07: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_9A08:;
    /* $9A08: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9A09:;
    /* $9A09: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9A0A:;
    /* $9A0A: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8049 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A0D:;
    /* $9A0D: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9A0E:;
    /* $9A0E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8048 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A11:;
    /* $9A11: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9A12:;
    /* $9A12: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _lo=g_ram[0x100+g_cpu.S]; g_cpu.S++; uint8_t _hi=g_ram[0x100+g_cpu.S]; call_by_address(((uint16_t)_hi<<8|_lo)+1); }
    
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_801B_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_801B_b6");
#endif
label_801B:;
    /* $801B: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9A79_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A79_b6");
#endif
label_9A79:;
    /* $9A79: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x80); FLAG_NZ(g_cpu.Y);
label_9A7B:;
    /* $9A7B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9A7F;
label_9A7D:;
    /* $9A7D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x60; FLAG_NZ(g_cpu.Y);
label_9A7F:;
    /* $9A7F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_9A81:;
    /* $9A81: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9A83:;
    /* $9A83: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9AA9;
label_9A85:;
    /* $9A85: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A86:;
    /* $9A86: 84 */ maybe_trigger_vblank(3); nes_write(0x80, g_cpu.Y);
label_9A88:;
    /* $9A88: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_9A89:;
    /* $9A89: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9A8A:;
    /* $9A8A: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_9AA9;
label_9A8C:;
    /* $9A8C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_9A8E:;
    /* $9A8E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_9A90:;
    /* $9A90: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9AA9;
label_9A92:;
    /* $9A92: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x50; FLAG_NZ(g_cpu.X);
label_9A94:;
    /* $9A94: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A97:;
    /* $9A97: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9AAA;
label_9A99:;
    /* $9A99: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A9C:;
    /* $9A9C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9A9E:;
    /* $9A9E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9AAA;
label_9AA0:;
    /* $9AA0: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_9AA1:;
    /* $9AA1: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_9AA2:;
    /* $9AA2: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x10; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9AA4:;
    /* $9AA4: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_9AA5:;
    /* $9AA5: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9A94;
    }
label_9AA7:;
    /* $9AA7: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x7E; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9AA9:;
    /* $9AA9: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9AAA:;
    /* $9AAA: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_9AAB:;
    /* $9AAB: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9AAC:;
    /* $9AAC: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_9AAE:;
    /* $9AAE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB0; g_cpu.S--; func_9AE1_b6();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9AAE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9AB1:;
    /* $9AB1: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_9AB2:;
    /* $9AB2: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_9AB3:;
    /* $9AB3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0405); FLAG_NZ(g_cpu.A);
label_9AB6:;
    /* $9AB6: 9D */ maybe_trigger_vblank(5); nes_write((0x0405 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9AB9:;
    /* $9AB9: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_9ABB:;
    /* $9ABB: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9ABC:;
    /* $9ABC: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9ADF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9ABF:;
    /* $9ABF: 85 */ maybe_trigger_vblank(3); nes_write(0x05, g_cpu.A);
label_9AC1:;
    /* $9AC1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF8; FLAG_NZ(g_cpu.A);
label_9AC3:;
    /* $9AC3: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_9AC5:;
    /* $9AC5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC7; g_cpu.S--; func_8027_b6();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9AC5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9AC8:;
    /* $9AC8: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9AA9;
    }
label_9ACA:;
    /* $9ACA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9ACC:;
    /* $9ACC: 9D */ maybe_trigger_vblank(5); nes_write((0x040F + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9ACF:;
    /* $9ACF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_9AD1:;
    /* $9AD1: 9D */ maybe_trigger_vblank(5); nes_write((0x6B02 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9AD4:;
    /* $9AD4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9AD6:;
    /* $9AD6: 9D */ maybe_trigger_vblank(5); nes_write((0x6AF4 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9AD9:;
    /* $9AD9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDB; g_cpu.S--; func_9AF1_b6();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9AD9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9ADC:;
    /* $9ADC: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_802A_b6(); return;
}

void func_801E_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_801E_b6");
#endif
label_801E:;
    /* $801E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x801E); return;
}

void func_8021_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8021_b6");
#endif
label_8021:;
    /* $8021: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x161F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8024:;
    /* $8024: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_8026:;
    /* $8026: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x003E; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8029:;
    /* $8029: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8029); return;
}

void func_B0E7_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B0E7_b6");
#endif
label_B0E7:;
    /* $B0E7: EA */ maybe_trigger_vblank(2); /* NOP */
label_B0E8:;
    /* $B0E8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB0E8); return;
}

void func_A903_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A903_b6");
#endif
label_A903:;
    /* $A903: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA903); return;
}

void func_A820_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A820_b6");
#endif
label_A820:;
    /* $A820: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A823:;
    /* $A823: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) goto label_A82C;
label_A825:;
    /* $A825: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x1EFC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A828:;
    /* $A828: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA828); return;
label_A829:;
    /* $A829: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A82B:;
    /* $A82B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA82B); return;
label_A82C:;
    /* $A82C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA82C); return;
}

void func_8CCF_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8CCF_b6");
#endif
label_8CCF:;
    /* $8CCF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8CCF); return;
}

void func_B503_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B503_b6");
#endif
label_B503:;
    /* $B503: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB503); return;
}

void func_84C8_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_84C8_b6");
#endif
label_84C8:;
    /* $84C8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x84C8); return;
}

void func_83AD_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_83AD_b6");
#endif
label_83AD:;
    /* $83AD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x83AD); return;
}

void func_A203_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A203_b6");
#endif
label_A203:;
    /* $A203: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x82E0; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A206:;
    /* $A206: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x0080 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A209:;
    /* $A209: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0FC1 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A20C:;
    /* $A20C: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x82; g_cpu.C=(g_cpu.X>=0x82)?1:0; FLAG_NZ(r&0xFF); }
label_A20E:;
    /* $A20E: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0xC180 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A211:;
    /* $A211: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x983F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A214:;
    /* $A214: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xFF + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A216:;
    /* $A216: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0x001F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A219:;
    /* $A219: C1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x20 + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A21B:;
    /* $A21B: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A21C:;
    /* $A21C: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x8F + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A21E:;
    /* $A21E: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0xE31F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A221:;
    /* $A221: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0EC6 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A224:;
    /* $A224: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { call_by_address(0xA1AD); return; }
label_A226:;
    /* $A226: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xFC + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A228:;
    /* $A228: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xFF + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A22A:;
    /* $A22A: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x0E; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A22C:;
    /* $A22C: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { call_by_address(0xA1B5); return; }
label_A22E:;
    /* $A22E: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xFC + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A230:;
    /* $A230: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A231:;
    /* $A231: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A233:;
    /* $A233: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A236:;
    /* $A236: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x007E + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A239:;
    /* $A239: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0xF7 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A23B:;
    /* $A23B: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x7FDB + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A23E:;
    /* $A23E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x905E + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A241:;
    /* $A241: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A1AD_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A1AD_b6");
#endif
label_A1AD:;
    /* $A1AD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA1AD); return;
}

void func_A1B5_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A1B5_b6");
#endif
label_A1B5:;
    /* $A1B5: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B1C8_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B1C8_b6");
#endif
label_B1C8:;
    /* $B1C8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB1C8); return;
}

void func_A93E_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A93E_b6");
#endif
label_A93E:;
    /* $A93E: DC */ maybe_trigger_vblank(4); (void)nes_read((0x0780 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A941:;
    /* $A941: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A942:;
    /* $A942: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A943:;
    /* $A943: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A944:;
    /* $A944: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x18; FLAG_NZ(g_cpu.A);
label_A946:;
    /* $A946: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_A948;
label_A948:;
    /* $A948: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x72; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A94A:;
    /* $A94A: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_A94B:;
    /* $A94B: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xFBFA + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A94E:;
    /* $A94E: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A950:;
    /* $A950: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA950); return;
}

