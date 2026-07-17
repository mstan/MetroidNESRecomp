/* metroid_full_bank04_part00.c — PRG bank 4 function bodies (sub-part 0).
 * STANDALONE translation unit — compiled independently (in
 * parallel with every other bank part/sub-part and the
 * umbrella metroid_full.c). Do not compile as part of another TU or
 * edit directly; the source of truth is the recompiler's
 * code_generator.c. Renamed to drop the _partNN suffix if
 * this bank turned out to fit in a single sub-part. */

#include "metroid_full_decls.h"

void func_9A07_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A07_b4");
#endif
label_9A07:;
    /* $9A07: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9A08:;
    /* $9A08: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x4C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9A0A:;
    /* $9A0A: DE */ maybe_trigger_vblank(7); { uint16_t a=(0xBD99 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9A0D:;
    /* $9A0D: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x04); FLAG_NZ(g_cpu.A);
label_9A0F:;
    /* $9A0F: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x01; FLAG_NZ(g_cpu.A);
label_9A11:;
    /* $9A11: 9D */ maybe_trigger_vblank(5); nes_write((0x0405 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9A14:;
    /* $9A14: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9F54_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9F54_b4");
#endif
label_9F54:;
    /* $9F54: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0667 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9F57:;
    /* $9F57: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9F58:;
    /* $9F58: FC */ maybe_trigger_vblank(4); (void)nes_read((0x0004 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9F5B:;
    /* $9F5B: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0xC1; g_cpu.C=(g_cpu.Y>=0xC1)?1:0; FLAG_NZ(r&0xFF); }
label_9F5D:;
    /* $9F5D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0667 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9F60:;
    /* $9F60: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9F61:;
    /* $9F61: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE1; g_cpu.C=(g_cpu.X>=0xE1)?1:0; FLAG_NZ(r&0xFF); }
label_9F63:;
    /* $9F63: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xE0E2 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9F66:;
    /* $9F66: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xFF + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9F68:;
    /* $9F68: 67 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9F6A:;
    /* $9F6A: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9F6B:;
    /* $9F6B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0x9F5E); return; }
label_9F6D:;
    /* $9F6D: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF0E2 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9F70:;
    /* $9F70: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9F72:;
    /* $9F72: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_9F73:;
    /* $9F73: 0C */ maybe_trigger_vblank(4); (void)nes_read(0xCE08); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9F76:;
    /* $9F76: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFC00 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9F79:;
    /* $9F79: DE */ maybe_trigger_vblank(7); { uint16_t a=(0xDFEE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9F7C:;
    /* $9F7C: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xEE62 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9F7F:;
    /* $9F7F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0C28 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9F82:;
    /* $9F82: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9F83:;
    /* $9F83: CE */ maybe_trigger_vblank(6); { uint16_t a=0xEFCF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9F86:;
    /* $9F86: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0C28 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9F89:;
    /* $9F89: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9F8A:;
    /* $9F8A: CE */ maybe_trigger_vblank(6); { uint16_t a=0x62FD; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9F8D:;
    /* $9F8D: CF */ maybe_trigger_vblank(6); { uint16_t a=0xFFEF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_9F90:;
    /* $9F90: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9F92:;
    /* $9F92: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9F92); return;
}

void func_8AC7_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8AC7_b4");
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

void func_B3E4_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3E4_b4");
#endif
label_B3E4:;
    /* $B3E4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC0; FLAG_NZ(g_cpu.A);
label_B3E6:;
    /* $B3E6: 8D */ maybe_trigger_vblank(4); nes_write(0x4017, g_cpu.A);
label_B3E9:;
    /* $B3E9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0680); FLAG_NZ(g_cpu.A);
label_B3EC:;
    /* $B3EC: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B3ED:;
    /* $B3ED: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_B41B;
label_B3EF:;
    /* $B3EF: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1E); FLAG_NZ(g_cpu.A);
label_B3F1:;
    /* $B3F1: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_B3F3:;
    /* $B3F3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0xB3C9); return; }
label_B3F5:;
    /* $B3F5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B3F7:;
    /* $B3F7: 8D */ maybe_trigger_vblank(4); nes_write(0x0602, g_cpu.A);
label_B3FA:;
    /* $B3FA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFC; g_cpu.S--; func_B34B_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3FA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3FD:;
    /* $B3FD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFF; g_cpu.S--; func_B37B_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3FD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B400:;
    /* $B400: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x02; g_cpu.S--; func_B36D_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB400, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B403:;
    /* $B403: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x05; g_cpu.S--; func_BC66_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB403, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B406:;
    /* $B406: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B408:;
    /* $B408: 8D */ maybe_trigger_vblank(4); nes_write(0x0680, g_cpu.A);
label_B40B:;
    /* $B40B: 8D */ maybe_trigger_vblank(4); nes_write(0x0681, g_cpu.A);
label_B40E:;
    /* $B40E: 8D */ maybe_trigger_vblank(4); nes_write(0x0682, g_cpu.A);
label_B411:;
    /* $B411: 8D */ maybe_trigger_vblank(4); nes_write(0x0683, g_cpu.A);
label_B414:;
    /* $B414: 8D */ maybe_trigger_vblank(4); nes_write(0x0684, g_cpu.A);
label_B417:;
    /* $B417: 8D */ maybe_trigger_vblank(4); nes_write(0x0685, g_cpu.A);
label_B41A:;
    /* $B41A: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B41B:;
    /* $B41B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1D; g_cpu.S--; func_B434_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB41B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B41E:;
    /* $B41E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B406;
    }
label_B420:;
    /* $B420: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x062C); FLAG_NZ(g_cpu.A);
label_B423:;
    /* $B423: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_B434;
label_B425:;
    /* $B425: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x068D); FLAG_NZ(g_cpu.A);
label_B428:;
    /* $B428: 8D */ maybe_trigger_vblank(4); nes_write(0x065D, g_cpu.A);
label_B42B:;
    /* $B42B: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B42C:;
    /* $B42C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x068D); FLAG_NZ(g_cpu.A);
label_B42F:;
    /* $B42F: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x064D); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B432:;
    /* $B432: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_B43A;
label_B434:;
    /* $B434: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x36; g_cpu.S--; func_B44D_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB434, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B437:;
    /* $B437: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x39; g_cpu.S--; func_B46E_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB437, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B43A:;
    /* $B43A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3C; g_cpu.S--; func_B43E_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB43A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B43D:;
    /* $B43D: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_988A_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_988A_b4");
#endif
label_988A:;
    /* $988A: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xBC); FLAG_NZ(g_cpu.A);
label_988C:;
    /* $988C: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x9C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_988E:;
    /* $988E: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x0C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9890:;
    /* $9890: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x1C); FLAG_NZ(g_cpu.A);
label_9892:;
    /* $9892: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x3C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9894:;
    /* $9894: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x5C); FLAG_NZ(g_cpu.A);
label_9896:;
    /* $9896: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x6C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9898:;
    /* $9898: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) goto label_9916;
label_989A:;
    /* $989A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF202 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_989D:;
    /* $989D: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xE2); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_989F:;
    /* $989F: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xD2); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_98A1:;
    /* $98A1: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xB2); FLAG_NZ(g_cpu.A);
label_98A3:;
    /* $98A3: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x92 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_98A5:;
    /* $98A5: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x02); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_98A7:;
    /* $98A7: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x12); FLAG_NZ(g_cpu.A);
label_98A9:;
    /* $98A9: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x32 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_98AB:;
    /* $98AB: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x52); FLAG_NZ(g_cpu.A);
label_98AD:;
    /* $98AD: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x62); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_98AF:;
    /* $98AF: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { call_by_address(0x9923); return; }
label_98B1:;
    /* $98B1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFA02 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_98B4:;
    /* $98B4: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xEA); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_98B6:;
    /* $98B6: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xDA); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_98B8:;
    /* $98B8: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xBA); FLAG_NZ(g_cpu.A);
label_98BA:;
    /* $98BA: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x9A + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_98BC:;
    /* $98BC: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x0A); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_98BE:;
    /* $98BE: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x1A); FLAG_NZ(g_cpu.A);
label_98C0:;
    /* $98C0: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x3A + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_98C2:;
    /* $98C2: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x5A); FLAG_NZ(g_cpu.A);
label_98C4:;
    /* $98C4: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x6A); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_98C6:;
    /* $98C6: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { call_by_address(0x9942); return; }
label_98C8:;
    /* $98C8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xB304 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_98CB:;
    /* $98CB: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xA3); FLAG_NZ(g_cpu.A);
label_98CD:;
    /* $98CD: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x93; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_98CF:;
    /* $98CF: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_98D1:;
    /* $98D1: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x13; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_98D3:;
    /* $98D3: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x23); FLAG_NZ(g_cpu.A);
label_98D5:;
    /* $98D5: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { call_by_address(0x990A); return; }
label_98D7:;
    /* $98D7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xC209 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_98DA:;
    /* $98DA: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_98DB:;
    /* $98DB: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x07; FLAG_NZ(g_cpu.X);
label_98DD:;
    /* $98DD: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_98DE:;
    /* $98DE: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x12; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_98E0:;
    /* $98E0: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_98E1:;
    /* $98E1: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_98E2:;
    /* $98E2: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x42; FLAG_NZ(g_cpu.A);
label_98E4:;
    /* $98E4: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) goto label_9958;
label_98E6:;
    /* $98E6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xC207 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_98E9:;
    /* $98E9: 06 */ maybe_trigger_vblank(5); { uint16_t a=0xA2; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_98EB:;
    /* $98EB: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x92); FLAG_NZ(g_cpu.A);
label_98ED:;
    /* $98ED: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x12); FLAG_NZ(g_cpu.A);
label_98EF:;
    /* $98EF: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x22; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_98F1:;
    /* $98F1: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x42; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_98F3:;
    /* $98F3: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { call_by_address(0x9967); return; }
label_98F5:;
    /* $98F5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xC205 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_98F8:;
    /* $98F8: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xA2); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_98FA:;
    /* $98FA: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x92 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_98FC:;
    /* $98FC: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x12 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_98FE:;
    /* $98FE: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x22); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9900:;
    /* $9900: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x42); FLAG_NZ(g_cpu.A);
label_9902:;
    /* $9902: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) goto label_9976;
label_9904:;
    /* $9904: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x81A5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9907:;
    /* $9907: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_9909:;
    /* $9909: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9914;
label_990B:;
    /* $990B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_990D:;
    /* $990D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9919;
label_990F:;
    /* $990F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_9911:;
    /* $9911: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8000_b4(); return;
label_9914:;
    /* $9914: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_9916:;
    /* $9916: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8003_b4(); return;
label_9919:;
    /* $9919: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8006_b4(); return;
label_991C:;
    /* $991C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x09; FLAG_NZ(g_cpu.A);
label_991E:;
    /* $991E: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_9920:;
    /* $9920: 85 */ maybe_trigger_vblank(3); nes_write(0x86, g_cpu.A);
label_9922:;
    /* $9922: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9925:;
    /* $9925: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_9927:;
    /* $9927: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_992C;
label_9929:;
    /* $9929: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2B; g_cpu.S--; func_801B_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9929, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_992C:;
    /* $992C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_992E:;
    /* $992E: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_9930:;
    /* $9930: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_9932:;
    /* $9932: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_9934:;
    /* $9934: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_9905_b4(); return;
label_9937:;
    /* $9937: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_9939:;
    /* $9939: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_991E;
label_993C:;
    /* $993C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_993F:;
    /* $993F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_9941:;
    /* $9941: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9946;
label_9943:;
    /* $9943: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x45; g_cpu.S--; func_801E_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9943, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9946:;
    /* $9946: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_992C;
label_9949:;
    /* $9949: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x81); FLAG_NZ(g_cpu.A);
label_994B:;
    /* $994B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_994D:;
    /* $994D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9993;
label_994F:;
    /* $994F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_9951:;
    /* $9951: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9998;
label_9953:;
    /* $9953: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0406 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9956:;
    /* $9956: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0F; g_cpu.C=(g_cpu.A>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_9958:;
    /* $9958: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_998E;
label_995A:;
    /* $995A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x11; g_cpu.C=(g_cpu.A>=0x11)?1:0; FLAG_NZ(r&0xFF); }
label_995C:;
    /* $995C: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_9965;
label_995E:;
    /* $995E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3A; FLAG_NZ(g_cpu.A);
label_9960:;
    /* $9960: 9D */ maybe_trigger_vblank(5); nes_write((0x6B01 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9963:;
    /* $9963: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_998E;
label_9965:;
    /* $9965: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x6B01 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9968:;
    /* $9968: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_998E;
label_996A:;
    /* $996A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_996C:;
    /* $996C: 9D */ maybe_trigger_vblank(5); nes_write((0x6AF4 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_996F:;
    /* $996F: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0C; FLAG_NZ(g_cpu.Y);
label_9971:;
    /* $9971: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_9973:;
    /* $9973: 99 */ maybe_trigger_vblank(5); nes_write((0x00A0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9976:;
    /* $9976: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0400 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9979:;
    /* $9979: 99 */ maybe_trigger_vblank(5); nes_write((0x00A1 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_997C:;
    /* $997C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0401 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_997F:;
    /* $997F: 99 */ maybe_trigger_vblank(5); nes_write((0x00A2 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9982:;
    /* $9982: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AFB + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9985:;
    /* $9985: 99 */ maybe_trigger_vblank(5); nes_write((0x00A3 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9988:;
    /* $9988: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9989:;
    /* $9989: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_998A:;
    /* $998A: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_998B:;
    /* $998B: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_998C:;
    /* $998C: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9971;
    }
label_998E:;
    /* $998E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_9990:;
    /* $9990: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8000_b4(); return;
label_9993:;
    /* $9993: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_9995:;
    /* $9995: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8003_b4(); return;
label_9998:;
    /* $9998: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8006_b4(); return;
label_999B:; return;
label_999E:; return;
label_99A0:; return;
label_99A2:; return;
label_99A4:; return;
label_99A6:; return;
label_99A8:; return;
label_99AA:; return;
label_99AC:; return;
label_99AF:; return;
label_99B1:; return;
label_99B3:; return;
label_99B6:; return;
label_99B8:; return;
label_99BA:; return;
label_99BC:; return;
label_99BF:; return;
label_99C1:; return;
label_99C3:; return;
label_99C6:; return;
label_99C8:; return;
label_99CB:; return;
label_99CD:; return;
label_99D0:; return;
label_99D3:; return;
label_99D6:; return;
label_99D8:; return;
label_99DB:; return;
label_99DE:; return;
label_99E1:; return;
label_99E2:; return;
label_99E5:; return;
label_99E7:; return;
label_99E8:; return;
label_99E9:; return;
label_99EC:; return;
label_99EF:; return;
label_99F1:; return;
label_99F4:; return;
label_99F7:; return;
label_99F9:; return;
label_99FB:; return;
label_99FD:; return;
label_99FF:; return;
label_9A02:; return;
label_9A03:; return;
label_9A04:; return;
label_9A06:; return;
label_9A09:; return;
label_9A0C:; return;
label_9A0F:; return;
label_9A11:; return;
label_9A14:; return;
label_9A15:; return;
label_9A18:; return;
label_9A1B:; return;
label_9A1D:; return;
label_9A1F:; return;
label_9A22:; return;
label_9A25:; return;
label_9A28:; return;
label_9A29:; return;
label_9A2C:; return;
label_9A2D:; return;
label_9A2E:; return;
label_9A30:; return;
label_9A31:; return;
label_9A34:; return;
label_9A36:; return;
label_9A38:; return;
label_9A39:; return;
label_9A3A:; return;
label_9A3B:; return;
label_9A3E:; return;
label_9A3F:; return;
label_9A42:; return;
label_9A43:; return;
label_9A44:; return;
label_9A47:; return;
label_9A49:; return;
label_9A4B:; return;
label_9A4E:; return;
label_9A50:; return;
label_9A53:; return;
label_9A55:; return;
label_9A58:; return;
label_9A59:; return;
label_9A5C:; return;
label_9A5E:; return;
label_9A60:; return;
label_9A62:; return;
label_9A65:; return;
label_9A67:; return;
label_9A6A:; return;
label_9A6C:; return;
label_9A6E:; return;
label_9A71:; return;
label_9A74:; return;
label_9A77:; return;
label_9A7A:; return;
label_9A7C:; return;
label_9A7D:; return;
label_9A80:; return;
label_9A83:; return;
label_9A86:; return;
label_9A87:; return;
label_9A89:; return;
label_9A8C:; return;
label_9A8E:; return;
label_9A90:; return;
label_9A93:; return;
label_9A94:; return;
label_9A97:; return;
label_9A99:; return;
label_9A9A:; return;
label_9A9C:; return;
label_9A9F:; return;
label_9AA2:; return;
label_9AA4:; return;
label_9AA7:; return;
label_9AA9:; return;
label_9AAC:; return;
label_9AAE:; return;
label_9AB1:; return;
label_9AB2:; return;
label_9AB3:; return;
label_9AB4:; return;
label_9AB7:; return;
label_9AB9:; return;
label_9ABB:; return;
label_9ABD:; return;
label_9ABF:; return;
label_9AC1:; return;
label_9AC3:; return;
label_9AC6:; return;
label_9AC9:; return;
label_9ACC:; return;
label_9ACF:; return;
label_9AD2:; return;
label_9AD4:; return;
label_9AD7:; return;
label_9ADA:; return;
label_9ADD:; return;
label_9ADF:; return;
label_9AE1:; return;
label_9AE4:; return;
label_9AE7:; return;
label_9AE9:; return;
label_9AEB:; return;
label_9AEE:; return;
label_9AF0:; return;
label_9AF2:; return;
label_9AF4:; return;
label_9AF7:; return;
label_9AF9:; return;
label_9AFC:; return;
label_9AFD:; return;
label_9AFF:; return;
label_9B02:; return;
label_9B04:; return;
label_9B06:; return;
label_9B09:; return;
label_9B0B:; return;
label_9B0D:; return;
label_9B10:; return;
label_9B13:; return;
label_9B15:; return;
label_9B17:; return;
label_9B1A:; return;
label_9B1D:; return;
label_9B1F:; return;
label_9B21:; return;
label_9B24:; return;
label_9B26:; return;
label_9B29:; return;
label_9B2C:; return;
label_9B2F:; return;
label_9B31:; return;
label_9B34:; return;
label_9B35:; return;
label_9B36:; return;
label_9B38:; return;
label_9B39:; return;
label_9B3B:; return;
label_9B3C:; return;
label_9B3F:; return;
label_9B41:; return;
label_9B44:; return;
label_9B46:; return;
label_9B48:; return;
label_9B4A:; return;
label_9B4C:; return;
label_9B4F:; return;
label_9B51:; return;
label_9B53:; return;
label_9B54:; return;
label_9B56:; return;
label_9B58:; return;
label_9B5A:; return;
label_9B5C:; return;
label_9B5E:; return;
label_9B61:; return;
label_9B63:; return;
label_9B65:; return;
label_9B67:; return;
label_9B69:; return;
label_9B6C:; return;
label_9B6F:; return;
label_9B72:; return;
label_9B75:; return;
label_9B78:; return;
label_9B79:; return;
label_9B7A:; return;
label_9B7B:; return;
label_9B7C:; return;
label_9B7D:; return;
label_9B7E:; return;
label_9B7F:; return;
label_9B80:; return;
label_9B83:; return;
label_9B85:; return;
label_9B88:; return;
label_9B8B:; return;
label_9B8C:; return;
label_9B8D:; return;
label_9B8E:; return;
label_9B8F:; return;
label_9B92:; return;
label_9B94:; return;
label_9B95:; return;
label_9B96:; return;
label_9B98:; return;
label_9B9B:; return;
label_9B9C:; return;
label_9B9D:; return;
label_9BA0:; return;
label_9BA2:; return;
label_9BA5:; return;
label_9BA7:; return;
label_9BAA:; return;
label_9BAC:; return;
label_9BAF:; return;
label_9BB1:; return;
label_9BB4:; return;
label_9BB6:; return;
label_9BB8:; return;
label_9BBB:; return;
label_9BBC:; return;
label_9BBF:; return;
label_9BC1:; return;
label_9BC4:; return;
label_9BC6:; return;
label_9BC9:; return;
label_9BCB:; return;
label_9BCC:; return;
label_9BCE:; return;
label_9BD0:; return;
label_9BD3:; return;
label_9BD6:; return;
label_9BD7:; return;
label_9BD8:; return;
label_9BD9:; return;
label_9BDB:; return;
label_9BDD:; return;
label_9BDF:; return;
label_9BE0:; return;
label_9BE2:; return;
label_9BE4:; return;
label_9BE6:; return;
label_9BE8:; return;
label_9BEA:; return;
label_9BEC:; return;
label_9BED:; return;
label_9BEF:; return;
label_9BF0:; return;
label_9BF1:; return;
label_9BF3:; return;
label_9BF5:; return;
label_9BF7:; return;
label_9BF9:; return;
label_9BFB:; return;
label_9BFD:; return;
label_9C00:; return;
label_9C02:; return;
label_9C04:; return;
label_9C07:; return;
label_9C09:; return;
label_9C0B:; return;
label_9C0E:; return;
label_9C10:; return;
label_9C12:; return;
label_9C13:; return;
label_9C15:; return;
label_9C18:; return;
label_9C19:; return;
label_9C1B:; return;
label_9C1D:; return;
label_9C1F:; return;
label_9C21:; return;
label_9C23:; return;
label_9C25:; return;
label_9C26:; return;
label_9C28:; return;
label_9C29:; return;
label_9C2A:; return;
label_9C2C:; return;
label_9C2E:; return;
label_9C30:; return;
label_9C32:; return;
label_9C34:; return;
label_9C37:; return;
label_9C39:; return;
label_9C3B:; return;
label_9C3E:; return;
label_9C40:; return;
label_9C42:; return;
label_9C43:; return;
label_9C45:; return;
label_9C48:; return;
label_9C49:; return;
label_9C4A:; return;
label_9C4B:; return;
label_9C4E:; return;
label_9C51:; return;
label_9C53:; return;
label_9C55:; return;
label_9C57:; return;
label_9C59:; return;
label_9C5A:; return;
label_9C5B:; return;
label_9C5D:; return;
label_9C5F:; return;
label_9C62:; return;
label_9C65:; return;
label_9C67:; return;
label_9C69:; return;
label_9C6C:; return;
label_9C6F:; return;
label_9C72:; return;
label_9C73:; return;
label_9C75:; return;
label_9C76:; return;
label_9C78:; return;
label_9C7A:; return;
label_9C7B:; return;
label_9C7D:; return;
label_9C7F:; return;
label_9C81:; return;
label_9C82:; return;
label_9C83:; return;
label_9C86:; return;
label_9C87:; return;
label_9C89:; return;
label_9C8A:; return;
label_9C8D:; return;
label_9C90:; return;
label_9C93:; return;
label_9C96:; return;
label_9C99:; return;
label_9C9B:; return;
label_9C9E:; return;
label_9CA1:; return;
label_9CA4:; return;
label_9CA6:; return;
label_9CA9:; return;
label_9CAB:; return;
label_9CAD:; return;
label_9CAF:; return;
label_9CB0:; return;
label_9CB3:; return;
label_9CB4:; return;
label_9CB7:; return;
label_9CBA:; return;
label_9CBD:; return;
label_9CC0:; return;
label_9CC3:; return;
label_9CC6:; return;
label_9CC9:; return;
label_9CCB:; return;
label_9CCC:; return;
label_9CCE:; return;
label_9CD0:; return;
label_9CD3:; return;
label_9CD6:; return;
label_9CD8:; return;
label_9CDA:; return;
label_9CDC:; return;
label_9CDF:; return;
label_9CE2:; return;
label_9CE4:; return;
label_9CE7:; return;
label_9CE9:; return;
label_9CEC:; return;
label_9CEF:; return;
label_9CF2:; return;
label_9CF5:; return;
label_9CF7:; return;
label_9CFA:; return;
label_9CFD:; return;
label_9CFE:; return;
label_9D01:; return;
label_9D02:; return;
label_9D05:; return;
label_9D06:; return;
label_9D09:; return;
label_9D0A:; return;
label_9D0D:; return;
label_9D0E:; return;
label_9D11:; return;
label_9D12:; return;
label_9D15:; return;
label_9D16:; return;
label_9D19:; return;
label_9D1A:; return;
label_9D1D:; return;
label_9D1E:; return;
label_9D21:; return;
label_9D22:; return;
label_9D25:; return;
label_9D26:; return;
label_9D29:; return;
label_9D2A:; return;
label_9D2D:; return;
label_9D2F:; return;
label_9D31:; return;
label_9D34:; return;
label_9D37:; return;
label_9D39:; return;
label_9D3B:; return;
label_9D3D:; return;
label_9D40:; return;
label_9D43:; return;
label_9D44:; return;
label_9D47:; return;
label_9D49:; return;
label_9D4B:; return;
label_9D4D:; return;
label_9D4F:; return;
label_9D51:; return;
label_9D53:; return;
label_9D55:; return;
label_9D57:; return;
label_9D59:; return;
label_9D5B:; return;
label_9D5D:; return;
label_9D5F:; return;
label_9D61:; return;
label_9D63:; return;
label_9D65:; return;
label_9D67:; return;
label_9D69:; return;
label_9D6A:; return;
label_9D6D:; return;
label_9D70:; return;
label_9D73:; return;
label_9D75:; return;
label_9D77:; return;
label_9D79:; return;
label_9D7B:; return;
label_9D7D:; return;
label_9D7F:; return;
label_9D81:; return;
label_9D83:; return;
label_9D85:; return;
label_9D87:; return;
label_9D89:; return;
label_9D8B:; return;
label_9D8D:; return;
label_9D8F:; return;
label_9D91:; return;
label_9D93:; return;
label_9D95:; return;
label_9D97:; return;
label_9D99:; return;
label_9D9B:; return;
label_9D9D:; return;
label_9D9F:; return;
label_9DA1:; return;
label_9DA3:; return;
label_9DA5:; return;
label_9DA7:; return;
label_9DA9:; return;
label_9DAB:; return;
label_9DAE:; return;
label_9DB0:; return;
label_9DB2:; return;
label_9DB4:; return;
label_9DB6:; return;
label_9DB8:; return;
label_9DBA:; return;
label_9DBC:; return;
label_9DBE:; return;
label_9DC0:; return;
label_9DC2:; return;
label_9DC4:; return;
label_9DC6:; return;
label_9DC8:; return;
label_9DCA:; return;
label_9DCC:; return;
label_9DCE:; return;
label_9DD0:; return;
label_9DD2:; return;
label_9DD4:; return;
label_9DD6:; return;
label_9DD8:; return;
label_9DDA:; return;
label_9DDC:; return;
label_9DDE:; return;
label_9DE0:; return;
label_9DE2:; return;
label_9DE4:; return;
label_9DE6:; return;
label_9DE8:; return;
label_9DEA:; return;
label_9DEC:; return;
label_9DEE:; return;
label_9DF0:; return;
label_9DF2:; return;
label_9DF4:; return;
label_9DF6:; return;
label_9DF8:; return;
label_9DFA:; return;
label_9DFC:; return;
label_9DFE:; return;
label_9E00:; return;
label_9E02:; return;
label_9E04:; return;
label_9E06:; return;
label_9E08:; return;
label_9E0A:; return;
label_9E0C:; return;
label_9E0E:; return;
label_9E10:; return;
label_9E12:; return;
label_9E14:; return;
label_9E16:; return;
label_9E18:; return;
label_9E1A:; return;
label_9E1C:; return;
label_9E1E:; return;
label_9E20:; return;
label_9E22:; return;
label_9E24:; return;
label_9E26:; return;
label_9E29:; return;
label_9E2C:; return;
label_9E2F:; return;
label_9E31:; return;
label_9E33:; return;
label_9E35:; return;
label_9E38:; return;
label_9E3B:; return;
label_9E3D:; return;
label_9E3F:; return;
label_9E41:; return;
label_9E43:; return;
label_9E45:; return;
label_9E48:; return;
label_9E4A:; return;
label_9E4C:; return;
label_9E4E:; return;
label_9E50:; return;
label_9E52:; return;
label_9E54:; return;
label_9E55:; return;
label_9E57:; return;
label_9E5A:; return;
label_9E5B:; return;
label_9E5D:; return;
label_9E5F:; return;
label_9E61:; return;
label_9E63:; return;
label_9E65:; return;
label_9E66:; return;
label_9E68:; return;
label_9E6B:; return;
label_9E6C:; return;
label_9E6E:; return;
label_9E71:; return;
label_9E72:; return;
label_9E74:; return;
label_9E77:; return;
label_9E78:; return;
label_9E7A:; return;
label_9E7C:; return;
label_9E7F:; return;
label_9E81:; return;
label_9E84:; return;
label_9E86:; return;
label_9E88:; return;
label_9E8A:; return;
label_9E8C:; return;
label_9E8F:; return;
label_9E90:; return;
label_9E92:; return;
label_9E94:; return;
label_9E95:; return;
label_9E96:; return;
label_9E97:; return;
label_9E98:; return;
label_9E99:; return;
label_9E9A:; return;
label_9E9B:; return;
label_9E9D:; return;
label_9EA0:; return;
label_9EA3:; return;
label_9EA5:; return;
label_9EA8:; return;
label_9EA9:; return;
label_9EAA:; return;
label_9EAB:; return;
label_9EAC:; return;
label_9EAD:; return;
label_9EAE:; return;
label_9EAF:; return;
label_9EB1:; return;
label_9EB3:; return;
label_9EB4:; return;
label_9EB5:; return;
label_9EB7:; return;
label_9EB9:; return;
label_9EBA:; return;
label_9EBC:; return;
label_9EBE:; return;
label_9EC0:; return;
label_9EC1:; return;
label_9EC2:; return;
label_9EC3:; return;
label_9EC4:; return;
label_9EC5:; return;
label_9EC6:; return;
label_9EC7:; return;
label_9EC8:; return;
label_9ECB:; return;
label_9ECD:; return;
label_9ED0:; return;
label_9ED1:; return;
label_9ED3:; return;
label_9ED6:; return;
label_9ED7:; return;
label_9EDA:; return;
label_9EDB:; return;
label_9EDC:; return;
label_9EDE:; return;
label_9EDF:; return;
label_9EE0:; return;
label_9EE1:; return;
label_9EE3:; return;
label_9EE4:; return;
label_9EE5:; return;
label_9EE6:; return;
label_9EE8:; return;
label_9EEA:; return;
label_9EEB:; return;
label_9EED:; return;
label_9EEF:; return;
label_9EF2:; return;
label_9EF3:; return;
label_9EF5:; return;
label_9EF8:; return;
label_9EF9:; return;
label_9EFB:; return;
label_9EFE:; return;
label_9F00:; return;
label_9F01:; return;
label_9F03:; return;
label_9F06:; return;
label_9F07:; return;
label_9F09:; return;
label_9F0B:; return;
label_9F0E:; return;
label_9F0F:; return;
label_9F12:; return;
label_9F13:; return;
label_9F15:; return;
label_9F17:; return;
label_9F1A:; return;
label_9F1C:; return;
label_9F1D:; return;
label_9F20:; return;
label_9F21:; return;
label_9F23:; return;
label_9F26:; return;
label_9F28:; return;
label_9F2A:; return;
label_9F2B:; return;
label_9F2E:; return;
label_9F2F:; return;
label_9F31:; return;
label_9F33:; return;
label_9F36:; return;
label_9F37:; return;
label_9F3A:; return;
label_9F3B:; return;
label_9F3E:; return;
label_9F40:; return;
label_9F43:; return;
label_9F44:; return;
label_9F46:; return;
label_9F49:; return;
label_9F4B:; return;
label_9F4D:; return;
label_9F4E:; return;
label_9F50:; return;
label_9F53:; return;
label_9F55:; return;
label_9F57:; return;
label_9F58:; return;
label_9F5B:; return;
label_9F5D:; return;
label_9F60:; return;
label_9F61:; return;
label_9F63:; return;
label_9F66:; return;
label_9F68:; return;
label_9F6A:; return;
label_9F6B:; return;
label_9F6D:; return;
label_9F70:; return;
label_9F72:; return;
label_9F73:; return;
label_9F76:; return;
label_9F79:; return;
label_9F7C:; return;
label_9F7F:; return;
label_9F82:; return;
label_9F83:; return;
label_9F86:; return;
label_9F89:; return;
label_9F8A:; return;
label_9F8D:; return;
label_9F90:; return;
label_9F92:; return;
label_9F93:; return;
label_9F96:; return;
label_9F98:; return;
label_9F99:; return;
label_9F9A:; return;
label_9F9C:; return;
label_9F9D:; return;
label_9F9E:; return;
label_9F9F:; return;
label_9FA2:; return;
label_9FA3:; return;
label_9FA6:; return;
label_9FA7:; return;
label_9FAA:; return;
label_9FAB:; return;
label_9FAE:; return;
label_9FAF:; return;
label_9FB2:; return;
label_9FB4:; return;
label_9FB5:; return;
label_9FB6:; return;
label_9FB8:; return;
label_9FBA:; return;
label_9FBB:; return;
label_9FBE:; return;
label_9FC0:; return;
label_9FC2:; return;
label_9FC5:; return;
label_9FC6:; return;
label_9FC9:; return;
label_9FCB:; return;
label_9FCD:; return;
label_9FD0:; return;
label_9FD1:; return;
label_9FD4:; return;
label_9FD6:; return;
label_9FD9:; return;
label_9FDA:; return;
label_9FDD:; return;
label_9FDF:; return;
label_9FE2:; return;
label_9FE3:; return;
label_9FE6:; return;
label_9FE9:; return;
label_9FEC:; return;
label_9FED:; return;
label_9FEE:; return;
label_9FF1:; return;
label_9FF4:; return;
label_9FF5:; return;
label_9FF6:; return;
label_9FF9:; return;
label_9FFC:; return;
label_9FFD:; return;
label_9FFE:; return;
label_9FFF:; return;
label_A001:; return;
label_A004:; return;
label_A005:; return;
label_A006:; return;
label_A007:; return;
label_A009:; return;
label_A00C:; return;
label_A00D:; return;
label_A00E:; return;
label_A011:; return;
label_A014:; return;
label_A015:; return;
label_A016:; return;
label_A019:; return;
label_A01C:; return;
label_A01D:; return;
label_A01E:; return;
label_A01F:; return;
label_A021:; return;
label_A024:; return;
label_A025:; return;
label_A026:; return;
label_A027:; return;
label_A029:; return;
label_A02C:; return;
label_A02D:; return;
label_A02E:; return;
label_A031:; return;
label_A034:; return;
label_A035:; return;
label_A036:; return;
label_A038:; return;
label_A039:; return;
label_A03B:; return;
label_A03D:; return;
label_A040:; return;
label_A043:; return;
label_A044:; return;
label_A047:; return;
label_A04A:; return;
label_A04D:; return;
label_A050:; return;
label_A053:; return;
label_A056:; return;
label_A058:; return;
label_A05B:; return;
label_A05C:; return;
label_A05D:; return;
label_A05E:; return;
label_A060:; return;
label_A061:; return;
label_A063:; return;
label_A064:; return;
label_A065:; return;
label_A066:; return;
label_A068:; return;
label_A069:; return;
label_A06B:; return;
label_A06D:; return;
label_A06E:; return;
label_A070:; return;
label_A071:; return;
label_A073:; return;
label_A074:; return;
label_A075:; return;
label_A076:; return;
label_A078:; return;
label_A079:; return;
label_A07B:; return;
label_A07C:; return;
label_A07D:; return;
label_A07E:; return;
label_A080:; return;
label_A081:; return;
label_A083:; return;
label_A085:; return;
label_A086:; return;
label_A088:; return;
label_A089:; return;
label_A08B:; return;
label_A08E:; return;
label_A091:; return;
label_A092:; return;
label_A095:; return;
label_A097:; return;
label_A09A:; return;
label_A09D:; return;
label_A09E:; return;
label_A0A1:; return;
label_A0A4:; return;
label_A0A5:; return;
label_A0A6:; return;
label_A0A9:; return;
label_A0AA:; return;
label_A0AD:; return;
label_A0AE:; return;
label_A0B1:; return;
label_A0B4:; return;
label_A0B5:; return;
label_A0B6:; return;
label_A0B9:; return;
label_A0BA:; return;
label_A0BD:; return;
label_A0BE:; return;
label_A0C1:; return;
label_A0C4:; return;
label_A0C5:; return;
label_A0C6:; return;
label_A0C9:; return;
label_A0CA:; return;
label_A0CD:; return;
label_A0CE:; return;
label_A0D1:; return;
label_A0D4:; return;
label_A0D5:; return;
label_A0D6:; return;
label_A0D9:; return;
label_A0DA:; return;
label_A0DD:; return;
label_A0DF:; return;
label_A0E2:; return;
label_A0E5:; return;
label_A0E7:; return;
label_A0EA:; return;
label_A0EC:; return;
label_A0EF:; return;
label_A0F0:; return;
label_A0F3:; return;
label_A0F6:; return;
label_A0F9:; return;
label_A0FA:; return;
label_A0FD:; return;
label_A100:; return;
label_A103:; return;
label_A106:; return;
label_A108:; return;
label_A10A:; return;
label_A10C:; return;
label_A10E:; return;
label_A110:; return;
label_A113:; return;
label_A116:; return;
label_A118:; return;
label_A11A:; return;
label_A11C:; return;
label_A11E:; return;
label_A120:; return;
label_A123:; return;
label_A126:; return;
label_A128:; return;
label_A12A:; return;
label_A12C:; return;
label_A12E:; return;
label_A130:; return;
label_A133:; return;
label_A136:; return;
label_A138:; return;
label_A13A:; return;
label_A13C:; return;
label_A13E:; return;
label_A140:; return;
label_A143:; return;
label_A144:; return;
label_A146:; return;
label_A148:; return;
label_A14A:; return;
label_A14D:; return;
label_A14E:; return;
label_A150:; return;
label_A152:; return;
label_A154:; return;
label_A157:; return;
label_A15A:; return;
label_A15C:; return;
label_A15F:; return;
label_A160:; return;
label_A163:; return;
label_A165:; return;
label_A167:; return;
label_A168:; return;
label_A16B:; return;
label_A16D:; return;
label_A16E:; return;
label_A170:; return;
label_A173:; return;
label_A175:; return;
label_A177:; return;
label_A179:; return;
label_A17C:; return;
label_A17F:; return;
label_A182:; return;
label_A185:; return;
label_A188:; return;
label_A18B:; return;
label_A18E:; return;
label_A191:; return;
label_A194:; return;
label_A196:; return;
label_A198:; return;
label_A19B:; return;
label_A19D:; return;
label_A19F:; return;
label_A1A2:; return;
label_A1A4:; return;
label_A1A6:; return;
label_A1A9:; return;
label_A1AB:; return;
label_A1AD:; return;
label_A1B0:; return;
label_A1B3:; return;
label_A1B5:; return;
label_A1B8:; return;
label_A1BB:; return;
label_A1BD:; return;
label_A1C0:; return;
label_A1C3:; return;
label_A1C6:; return;
label_A1C8:; return;
label_A1CB:; return;
label_A1CC:; return;
label_A1CD:; return;
label_A1D0:; return;
label_A1D3:; return;
label_A1D5:; return;
label_A1D7:; return;
label_A1D9:; return;
label_A1DC:; return;
label_A1DE:; return;
label_A1E0:; return;
label_A1E2:; return;
label_A1E4:; return;
label_A1E6:; return;
label_A1E8:; return;
label_A1EA:; return;
label_A1EC:; return;
label_A1EE:; return;
label_A1F0:; return;
label_A1F2:; return;
label_A1F4:; return;
label_A1F6:; return;
label_A1F8:; return;
label_A1FA:; return;
label_A1FC:; return;
label_A1FE:; return;
label_A200:; return;
label_A202:; return;
label_A204:; return;
label_A206:; return;
label_A208:; return;
label_A20A:; return;
label_A20C:; return;
label_A20D:; return;
label_A20F:; return;
label_A211:; return;
label_A213:; return;
label_A216:; return;
label_A218:; return;
label_A21A:; return;
label_A21C:; return;
label_A21E:; return;
label_A21F:; return;
label_A221:; return;
label_A224:; return;
label_A225:; return;
label_A227:; return;
label_A229:; return;
label_A22C:; return;
label_A22D:; return;
label_A22E:; return;
label_A22F:; return;
label_A231:; return;
label_A233:; return;
label_A236:; return;
label_A237:; return;
label_A238:; return;
label_A239:; return;
label_A23C:; return;
label_A23E:; return;
label_A240:; return;
label_A242:; return;
label_A244:; return;
label_A246:; return;
label_A248:; return;
label_A24A:; return;
label_A24C:; return;
label_A24E:; return;
label_A250:; return;
label_A252:; return;
label_A254:; return;
label_A256:; return;
label_A258:; return;
label_A25A:; return;
label_A25C:; return;
label_A25E:; return;
label_A260:; return;
label_A262:; return;
label_A265:; return;
label_A268:; return;
label_A26B:; return;
label_A26D:; return;
label_A26E:; return;
label_A270:; return;
label_A272:; return;
label_A274:; return;
label_A275:; return;
label_A277:; return;
label_A279:; return;
label_A27C:; return;
label_A27D:; return;
label_A27F:; return;
label_A281:; return;
label_A283:; return;
label_A285:; return;
label_A286:; return;
label_A288:; return;
label_A289:; return;
label_A28B:; return;
label_A28C:; return;
label_A28E:; return;
label_A290:; return;
label_A293:; return;
label_A295:; return;
label_A298:; return;
label_A299:; return;
label_A29C:; return;
label_A29E:; return;
label_A2A1:; return;
label_A2A3:; return;
label_A2A4:; return;
label_A2A6:; return;
label_A2A7:; return;
label_A2AA:; return;
label_A2AC:; return;
label_A2AE:; return;
label_A2B1:; return;
label_A2B2:; return;
label_A2B5:; return;
label_A2B8:; return;
label_A2B9:; return;
label_A2BB:; return;
label_A2BC:; return;
label_A2BE:; return;
label_A2C0:; return;
label_A2C1:; return;
label_A2C4:; return;
label_A2C7:; return;
label_A2C8:; return;
label_A2C9:; return;
label_A2CB:; return;
label_A2CC:; return;
label_A2CF:; return;
label_A2D1:; return;
label_A2D3:; return;
label_A2D4:; return;
label_A2D5:; return;
label_A2D7:; return;
label_A2DA:; return;
label_A2DB:; return;
label_A2DD:; return;
label_A2DE:; return;
label_A2DF:; return;
label_A2E1:; return;
label_A2E3:; return;
label_A2E6:; return;
label_A2E8:; return;
label_A2E9:; return;
label_A2EA:; return;
label_A2ED:; return;
label_A2EF:; return;
label_A2F0:; return;
label_A2F3:; return;
label_A2F6:; return;
label_A2F9:; return;
label_A2FB:; return;
label_A2FD:; return;
label_A2FE:; return;
label_A300:; return;
label_A301:; return;
label_A303:; return;
label_A304:; return;
label_A307:; return;
label_A30A:; return;
label_A30C:; return;
label_A30D:; return;
label_A310:; return;
label_A312:; return;
label_A313:; return;
label_A314:; return;
label_A316:; return;
label_A318:; return;
label_A31A:; return;
label_A31B:; return;
label_A31D:; return;
label_A31E:; return;
label_A321:; return;
label_A323:; return;
label_A324:; return;
label_A325:; return;
label_A327:; return;
label_A32A:; return;
label_A32C:; return;
label_A32E:; return;
label_A330:; return;
label_A332:; return;
label_A333:; return;
label_A336:; return;
label_A339:; return;
label_A33B:; return;
label_A33C:; return;
label_A33F:; return;
label_A340:; return;
label_A342:; return;
label_A344:; return;
label_A347:; return;
label_A349:; return;
label_A34B:; return;
label_A34C:; return;
label_A34E:; return;
label_A34F:; return;
label_A352:; return;
label_A353:; return;
label_A354:; return;
label_A356:; return;
label_A358:; return;
label_A35A:; return;
label_A35B:; return;
label_A35D:; return;
label_A35E:; return;
label_A360:; return;
label_A361:; return;
label_A364:; return;
label_A366:; return;
label_A367:; return;
label_A36A:; return;
label_A36D:; return;
label_A36F:; return;
label_A370:; return;
label_A371:; return;
label_A372:; return;
label_A374:; return;
label_A376:; return;
label_A379:; return;
label_A37B:; return;
label_A37C:; return;
label_A37F:; return;
label_A380:; return;
label_A382:; return;
label_A384:; return;
label_A386:; return;
label_A387:; return;
label_A38A:; return;
label_A38C:; return;
label_A38F:; return;
label_A391:; return;
label_A393:; return;
label_A395:; return;
label_A398:; return;
label_A39A:; return;
label_A39C:; return;
label_A39E:; return;
label_A3A0:; return;
label_A3A1:; return;
label_A3A3:; return;
label_A3A5:; return;
label_A3A7:; return;
label_A3A9:; return;
label_A3AA:; return;
label_A3AD:; return;
label_A3B0:; return;
label_A3B2:; return;
label_A3B4:; return;
label_A3B6:; return;
label_A3B7:; return;
label_A3BA:; return;
label_A3BC:; return;
label_A3BF:; return;
label_A3C0:; return;
label_A3C1:; return;
label_A3C3:; return;
label_A3C6:; return;
label_A3C9:; return;
label_A3CC:; return;
label_A3CF:; return;
label_A3D1:; return;
label_A3D4:; return;
label_A3D6:; return;
label_A3D7:; return;
label_A3DA:; return;
label_A3DD:; return;
label_A3DF:; return;
label_A3E0:; return;
label_A3E2:; return;
label_A3E3:; return;
label_A3E4:; return;
label_A3E6:; return;
label_A3E9:; return;
label_A3EB:; return;
label_A3EC:; return;
label_A3EE:; return;
label_A3EF:; return;
label_A3F0:; return;
label_A3F2:; return;
label_A3F5:; return;
label_A3F8:; return;
label_A3F9:; return;
label_A3FB:; return;
label_A3FD:; return;
label_A3FF:; return;
label_A401:; return;
label_A402:; return;
label_A403:; return;
label_A405:; return;
label_A406:; return;
label_A408:; return;
label_A40B:; return;
label_A40D:; return;
label_A40F:; return;
label_A412:; return;
label_A414:; return;
label_A417:; return;
label_A418:; return;
label_A41A:; return;
label_A41C:; return;
label_A41D:; return;
label_A420:; return;
label_A422:; return;
label_A423:; return;
label_A426:; return;
label_A428:; return;
label_A429:; return;
label_A42A:; return;
label_A42C:; return;
label_A42E:; return;
label_A42F:; return;
label_A432:; return;
label_A434:; return;
label_A436:; return;
label_A437:; return;
label_A439:; return;
label_A43B:; return;
label_A43D:; return;
label_A43E:; return;
label_A440:; return;
label_A442:; return;
label_A443:; return;
label_A444:; return;
label_A446:; return;
label_A448:; return;
label_A449:; return;
label_A44A:; return;
label_A44C:; return;
label_A44F:; return;
label_A451:; return;
label_A453:; return;
label_A456:; return;
label_A458:; return;
label_A45A:; return;
label_A45C:; return;
label_A45E:; return;
label_A461:; return;
label_A463:; return;
label_A464:; return;
label_A467:; return;
label_A469:; return;
label_A46B:; return;
label_A46D:; return;
label_A46F:; return;
label_A470:; return;
label_A473:; return;
label_A475:; return;
label_A477:; return;
label_A479:; return;
label_A47A:; return;
label_A47C:; return;
label_A47E:; return;
label_A47F:; return;
label_A480:; return;
label_A482:; return;
label_A485:; return;
label_A488:; return;
label_A489:; return;
label_A48A:; return;
label_A48C:; return;
label_A48E:; return;
label_A491:; return;
label_A493:; return;
label_A494:; return;
label_A497:; return;
label_A49A:; return;
label_A49C:; return;
label_A49D:; return;
label_A49F:; return;
label_A4A0:; return;
label_A4A3:; return;
label_A4A6:; return;
label_A4A8:; return;
label_A4AA:; return;
label_A4AC:; return;
label_A4AF:; return;
label_A4B1:; return;
label_A4B4:; return;
label_A4B5:; return;
label_A4B6:; return;
label_A4B8:; return;
label_A4BA:; return;
label_A4BD:; return;
label_A4BE:; return;
label_A4BF:; return;
label_A4C1:; return;
label_A4C4:; return;
label_A4C7:; return;
label_A4C9:; return;
label_A4CB:; return;
label_A4CC:; return;
label_A4CF:; return;
label_A4D2:; return;
label_A4D4:; return;
label_A4D5:; return;
label_A4D7:; return;
label_A4D8:; return;
label_A4DB:; return;
label_A4DD:; return;
label_A4DE:; return;
label_A4E0:; return;
label_A4E1:; return;
label_A4E4:; return;
label_A4E6:; return;
label_A4E8:; return;
label_A4E9:; return;
label_A4EA:; return;
label_A4EC:; return;
label_A4EF:; return;
label_A4F0:; return;
label_A4F2:; return;
label_A4F4:; return;
label_A4F5:; return;
label_A4F6:; return;
label_A4F8:; return;
label_A4FB:; return;
label_A4FD:; return;
label_A4FE:; return;
label_A500:; return;
label_A501:; return;
label_A502:; return;
label_A504:; return;
label_A507:; return;
label_A509:; return;
label_A50A:; return;
label_A50C:; return;
label_A50D:; return;
label_A50E:; return;
label_A510:; return;
label_A513:; return;
label_A516:; return;
label_A518:; return;
label_A519:; return;
label_A51B:; return;
label_A51E:; return;
label_A520:; return;
label_A521:; return;
label_A522:; return;
label_A523:; return;
label_A525:; return;
label_A527:; return;
label_A529:; return;
label_A52A:; return;
label_A52D:; return;
label_A530:; return;
label_A532:; return;
label_A533:; return;
label_A535:; return;
label_A536:; return;
label_A538:; return;
label_A539:; return;
label_A53C:; return;
label_A53F:; return;
label_A542:; return;
label_A544:; return;
label_A546:; return;
label_A548:; return;
label_A54A:; return;
label_A54B:; return;
label_A54D:; return;
label_A54E:; return;
label_A551:; return;
label_A553:; return;
label_A556:; return;
label_A558:; return;
label_A559:; return;
label_A55A:; return;
label_A55C:; return;
label_A55D:; return;
label_A560:; return;
label_A562:; return;
label_A565:; return;
label_A566:; return;
label_A569:; return;
label_A56B:; return;
label_A56E:; return;
label_A570:; return;
label_A571:; return;
label_A573:; return;
label_A574:; return;
label_A575:; return;
label_A578:; return;
label_A57A:; return;
label_A57D:; return;
label_A57F:; return;
label_A580:; return;
label_A583:; return;
label_A585:; return;
label_A587:; return;
label_A58A:; return;
label_A58C:; return;
label_A58F:; return;
label_A592:; return;
label_A594:; return;
label_A595:; return;
label_A598:; return;
label_A59A:; return;
label_A59D:; return;
label_A59E:; return;
label_A59F:; return;
label_A5A1:; return;
label_A5A4:; return;
label_A5A6:; return;
label_A5A9:; return;
label_A5AA:; return;
label_A5AC:; return;
label_A5AD:; return;
label_A5B0:; return;
label_A5B1:; return;
label_A5B3:; return;
label_A5B5:; return;
label_A5B8:; return;
label_A5BB:; return;
label_A5BC:; return;
label_A5BF:; return;
label_A5C1:; return;
label_A5C4:; return;
label_A5C7:; return;
label_A5CA:; return;
label_A5CC:; return;
label_A5CF:; return;
label_A5D2:; return;
label_A5D4:; return;
label_A5D6:; return;
label_A5D9:; return;
label_A5DA:; return;
label_A5DB:; return;
label_A5DE:; return;
label_A5E0:; return;
label_A5E2:; return;
label_A5E4:; return;
label_A5E6:; return;
label_A5E7:; return;
label_A5EA:; return;
label_A5EB:; return;
label_A5EC:; return;
label_A5ED:; return;
label_A5EE:; return;
label_A5EF:; return;
label_A5F1:; return;
label_A5F2:; return;
label_A5F4:; return;
label_A5F5:; return;
label_A5F8:; return;
label_A5FA:; return;
label_A5FB:; return;
label_A5FE:; return;
label_A600:; return;
label_A601:; return;
label_A604:; return;
label_A607:; return;
label_A609:; return;
label_A60A:; return;
label_A60B:; return;
label_A60C:; return;
label_A60D:; return;
label_A610:; return;
label_A613:; return;
label_A615:; return;
label_A617:; return;
label_A61A:; return;
label_A61C:; return;
label_A61D:; return;
label_A61E:; return;
label_A620:; return;
label_A622:; return;
label_A625:; return;
label_A626:; return;
label_A629:; return;
label_A62B:; return;
label_A62E:; return;
label_A630:; return;
label_A631:; return;
label_A633:; return;
label_A634:; return;
label_A635:; return;
label_A637:; return;
label_A63A:; return;
label_A63C:; return;
label_A63D:; return;
label_A63F:; return;
label_A640:; return;
label_A641:; return;
label_A643:; return;
label_A646:; return;
label_A649:; return;
label_A64A:; return;
label_A64B:; return;
label_A64C:; return;
label_A64D:; return;
label_A64E:; return;
label_A650:; return;
label_A651:; return;
label_A653:; return;
label_A654:; return;
label_A656:; return;
label_A657:; return;
label_A658:; return;
label_A65B:; return;
label_A65E:; return;
label_A661:; return;
label_A664:; return;
label_A667:; return;
label_A669:; return;
label_A66B:; return;
label_A66D:; return;
label_A670:; return;
label_A673:; return;
label_A675:; return;
label_A677:; return;
label_A678:; return;
label_A67B:; return;
label_A67E:; return;
label_A681:; return;
label_A683:; return;
label_A685:; return;
label_A687:; return;
label_A688:; return;
label_A68A:; return;
label_A68C:; return;
label_A68E:; return;
label_A690:; return;
label_A691:; return;
label_A693:; return;
label_A695:; return;
label_A697:; return;
label_A699:; return;
label_A69B:; return;
label_A69D:; return;
label_A69F:; return;
label_A6A1:; return;
label_A6A3:; return;
label_A6A4:; return;
label_A6A5:; return;
label_A6A6:; return;
label_A6A7:; return;
label_A6A8:; return;
label_A6AB:; return;
label_A6AD:; return;
label_A6AF:; return;
label_A6B1:; return;
label_A6B3:; return;
label_A6B6:; return;
label_A6B7:; return;
label_A6B9:; return;
label_A6BA:; return;
label_A6BC:; return;
label_A6BD:; return;
label_A6BF:; return;
label_A6C1:; return;
label_A6C3:; return;
label_A6C5:; return;
label_A6C7:; return;
label_A6C8:; return;
label_A6C9:; return;
label_A6CA:; return;
label_A6CB:; return;
label_A6CE:; return;
label_A6D0:; return;
label_A6D2:; return;
label_A6D4:; return;
label_A6D7:; return;
label_A6D9:; return;
label_A6DB:; return;
label_A6DE:; return;
label_A6E1:; return;
label_A6E4:; return;
label_A6E7:; return;
label_A6E9:; return;
label_A6EC:; return;
label_A6EE:; return;
label_A6F0:; return;
label_A6F3:; return;
label_A6F6:; return;
label_A6F8:; return;
label_A6FA:; return;
label_A6FC:; return;
label_A6FE:; return;
label_A6FF:; return;
label_A702:; return;
label_A705:; return;
label_A707:; return;
label_A708:; return;
label_A70B:; return;
label_A70C:; return;
label_A70E:; return;
label_A710:; return;
label_A712:; return;
label_A715:; return;
label_A717:; return;
label_A718:; return;
label_A71A:; return;
label_A71D:; return;
label_A720:; return;
label_A722:; return;
label_A724:; return;
label_A726:; return;
label_A729:; return;
label_A72C:; return;
label_A72D:; return;
label_A72F:; return;
label_A732:; return;
label_A734:; return;
label_A735:; return;
label_A737:; return;
label_A738:; return;
label_A73B:; return;
label_A73D:; return;
label_A73F:; return;
label_A741:; return;
label_A743:; return;
label_A745:; return;
label_A747:; return;
label_A749:; return;
label_A74A:; return;
label_A74C:; return;
label_A74E:; return;
label_A750:; return;
label_A751:; return;
label_A753:; return;
label_A756:; return;
label_A759:; return;
label_A75B:; return;
label_A75D:; return;
label_A75F:; return;
label_A762:; return;
label_A765:; return;
label_A766:; return;
label_A768:; return;
label_A769:; return;
label_A76A:; return;
label_A76D:; return;
label_A770:; return;
label_A773:; return;
label_A776:; return;
label_A778:; return;
label_A77A:; return;
label_A77C:; return;
label_A77E:; return;
label_A77F:; return;
label_A782:; return;
label_A784:; return;
label_A785:; return;
label_A787:; return;
label_A78A:; return;
label_A78D:; return;
label_A790:; return;
label_A793:; return;
label_A796:; return;
label_A798:; return;
label_A79A:; return;
label_A79B:; return;
label_A79C:; return;
label_A79E:; return;
label_A7A0:; return;
label_A7A2:; return;
label_A7A5:; return;
label_A7A7:; return;
label_A7A9:; return;
label_A7AB:; return;
label_A7AD:; return;
label_A7AF:; return;
label_A7B1:; return;
label_A7B4:; return;
label_A7B7:; return;
label_A7BA:; return;
label_A7BD:; return;
label_A7C0:; return;
label_A7C3:; return;
label_A7C6:; return;
label_A7C9:; return;
label_A7CC:; return;
label_A7CF:; return;
label_A7D2:; return;
label_A7D5:; return;
label_A7D8:; return;
label_A7D9:; return;
label_A7DB:; return;
label_A7DC:; return;
label_A7DE:; return;
label_A7DF:; return;
label_A7E1:; return;
label_A7E2:; return;
label_A7E4:; return;
label_A7E5:; return;
label_A7E7:; return;
label_A7E8:; return;
label_A7EA:; return;
label_A7ED:; return;
label_A7F0:; return;
label_A7F3:; return;
label_A7F6:; return;
label_A7F8:; return;
label_A7FA:; return;
label_A7FC:; return;
label_A7FE:; return;
label_A800:; return;
label_A803:; return;
label_A805:; return;
label_A807:; return;
label_A809:; return;
label_A80A:; return;
label_A80C:; return;
label_A80F:; return;
label_A811:; return;
label_A812:; return;
label_A815:; return;
label_A817:; return;
label_A819:; return;
label_A81C:; return;
label_A81E:; return;
label_A81F:; return;
label_A821:; return;
label_A824:; return;
label_A826:; return;
label_A828:; return;
label_A82A:; return;
label_A82C:; return;
label_A82E:; return;
label_A830:; return;
label_A831:; return;
label_A833:; return;
label_A836:; return;
label_A839:; return;
label_A83A:; return;
label_A83C:; return;
label_A83E:; return;
label_A841:; return;
label_A844:; return;
label_A847:; return;
label_A849:; return;
label_A84C:; return;
label_A84E:; return;
label_A84F:; return;
label_A851:; return;
label_A853:; return;
label_A855:; return;
label_A856:; return;
label_A859:; return;
label_A85C:; return;
label_A85E:; return;
label_A85F:; return;
label_A861:; return;
label_A863:; return;
label_A864:; return;
label_A867:; return;
label_A869:; return;
label_A86A:; return;
label_A86C:; return;
label_A86D:; return;
label_A870:; return;
label_A873:; return;
label_A875:; return;
label_A876:; return;
label_A878:; return;
label_A87A:; return;
label_A87C:; return;
label_A87E:; return;
label_A880:; return;
label_A882:; return;
label_A883:; return;
label_A885:; return;
label_A888:; return;
label_A88B:; return;
label_A88C:; return;
label_A88E:; return;
label_A891:; return;
label_A893:; return;
label_A894:; return;
label_A896:; return;
label_A897:; return;
label_A89A:; return;
label_A89D:; return;
label_A89E:; return;
label_A8A0:; return;
label_A8A2:; return;
label_A8A5:; return;
label_A8A7:; return;
label_A8A8:; return;
label_A8AA:; return;
label_A8AC:; return;
label_A8AE:; return;
label_A8B0:; return;
label_A8B1:; return;
label_A8B2:; return;
label_A8B4:; return;
label_A8B5:; return;
label_A8B7:; return;
label_A8B8:; return;
label_A8BA:; return;
label_A8BC:; return;
label_A8BE:; return;
label_A8C0:; return;
label_A8C2:; return;
label_A8C5:; return;
label_A8C6:; return;
label_A8C9:; return;
label_A8CB:; return;
label_A8CC:; return;
label_A8CE:; return;
label_A8D0:; return;
label_A8D2:; return;
label_A8D4:; return;
label_A8D5:; return;
label_A8D7:; return;
label_A8DA:; return;
label_A8DD:; return;
label_A8E0:; return;
label_A8E1:; return;
label_A8E2:; return;
label_A8E3:; return;
}

void func_8000_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8000_b4");
#endif
label_8000:;
    /* $8000: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_F410(); return;
}

void func_B3C9_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3C9_b4");
#endif
label_B3C9:;
    /* $B3C9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0602); FLAG_NZ(g_cpu.A);
label_B3CC:;
    /* $B3CC: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0xB3BF); return; }
label_B3CE:;
    /* $B3CE: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0603); FLAG_NZ(g_cpu.A);
label_B3D1:;
    /* $B3D1: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x12; g_cpu.C=(g_cpu.A>=0x12)?1:0; FLAG_NZ(r&0xFF); }
label_B3D3:;
    /* $B3D3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_B3E3;
label_B3D5:;
    /* $B3D5: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_B3D7:;
    /* $B3D7: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_B3D9:;
    /* $B3D9: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B3E0;
label_B3DB:;
    /* $B3DB: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x3D; FLAG_NZ(g_cpu.Y);
label_B3DD:;
    /* $B3DD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDF; g_cpu.S--; func_B398_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3DD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3E0:;
    /* $B3E0: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0603; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B3E3:;
    /* $B3E3: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B34B_b4_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B367;
        case 2: goto label_B359;
    }
label_B34B:;
    /* $B34B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0680); FLAG_NZ(g_cpu.A);
label_B34E:;
    /* $B34E: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xB9; FLAG_NZ(g_cpu.X);
label_B350:;
    /* $B350: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B367;
label_B352:;
    /* $B352: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0688); FLAG_NZ(g_cpu.A);
label_B355:;
    /* $B355: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xBE; FLAG_NZ(g_cpu.X);
label_B357:;
    /* $B357: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B367;
label_B359:;
    /* $B359: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0681); FLAG_NZ(g_cpu.A);
label_B35C:;
    /* $B35C: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xC3; FLAG_NZ(g_cpu.X);
label_B35E:;
    /* $B35E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B367;
label_B360:;
    /* $B360: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0689); FLAG_NZ(g_cpu.A);
label_B363:;
    /* $B363: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xC8; FLAG_NZ(g_cpu.X);
label_B365:;
    /* $B365: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B367;
label_B367:;
    /* $B367: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x69; g_cpu.S--; func_B4ED_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB367, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B36A:;
    /* $B36A: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16zp(0xE2); maybe_trigger_vblank(2); call_by_address(_jt); return; }
}

void func_B34B_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B34B_b4");
#endif
    func_B34B_b4_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B367_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B367_b4");
#endif
    func_B34B_b4_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B359_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B359_b4");
#endif
    func_B34B_b4_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B37B_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B37B_b4");
#endif
label_B37B:;
    /* $B37B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0684); FLAG_NZ(g_cpu.A);
label_B37E:;
    /* $B37E: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xD7; FLAG_NZ(g_cpu.X);
label_B380:;
    /* $B380: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; func_B4ED_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB380, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B383:;
    /* $B383: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x85; g_cpu.S--; func_BC83_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB383, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B386:;
    /* $B386: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x88; g_cpu.S--; func_BC94_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB386, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B389:;
    /* $B389: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16zp(0xE2); maybe_trigger_vblank(2); call_by_address(_jt); return; }
}

void func_B36D_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B36D_b4");
#endif
label_B36D:;
    /* $B36D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0683); FLAG_NZ(g_cpu.A);
label_B370:;
    /* $B370: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xCD; FLAG_NZ(g_cpu.X);
label_B372:;
    /* $B372: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0xB367); return; }
label_B374:;
    /* $B374: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x068B); FLAG_NZ(g_cpu.A);
label_B377:;
    /* $B377: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xD2; FLAG_NZ(g_cpu.X);
label_B379:;
    /* $B379: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0xB367); return; }
label_B37B:;
    /* $B37B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0684); FLAG_NZ(g_cpu.A);
label_B37E:;
    /* $B37E: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xD7; FLAG_NZ(g_cpu.X);
label_B380:;
    /* $B380: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; func_B4ED_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB380, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B383:;
    /* $B383: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x85; g_cpu.S--; func_BC83_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB383, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B386:;
    /* $B386: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x88; g_cpu.S--; func_BC94_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB386, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B389:;
    /* $B389: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16zp(0xE2); maybe_trigger_vblank(2); call_by_address(_jt); return; }
}

void func_BC66_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC66_b4");
#endif
label_BC66:;
    /* $BC66: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x065D); FLAG_NZ(g_cpu.A);
label_BC69:;
    /* $BC69: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xE6; FLAG_NZ(g_cpu.X);
label_BC6B:;
    /* $BC6B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_BC72;
label_BC6D:;
    /* $BC6D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0685); FLAG_NZ(g_cpu.A);
label_BC70:;
    /* $BC70: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xE1; FLAG_NZ(g_cpu.X);
label_BC72:;
    /* $BC72: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x74; g_cpu.S--; func_B4ED_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC72, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC75:;
    /* $BC75: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x77; g_cpu.S--; func_BC83_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC75, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC78:;
    /* $BC78: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16zp(0xE2); maybe_trigger_vblank(2); call_by_address(_jt); return; }
}

void func_B434_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B434_b4");
#endif
label_B434:;
    /* $B434: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x36; g_cpu.S--; func_B44D_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB434, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B437:;
    /* $B437: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x39; g_cpu.S--; func_B46E_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB437, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B43A:;
    /* $B43A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3C; g_cpu.S--; func_B43E_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB43A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B43D:;
    /* $B43D: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B44D_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B44D_b4");
#endif
label_B44D:;
    /* $B44D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B44F:;
    /* $B44F: 8D */ maybe_trigger_vblank(4); nes_write(0x0653, g_cpu.A);
label_B452:;
    /* $B452: 8D */ maybe_trigger_vblank(4); nes_write(0x0654, g_cpu.A);
label_B455:;
    /* $B455: 8D */ maybe_trigger_vblank(4); nes_write(0x0655, g_cpu.A);
label_B458:;
    /* $B458: 8D */ maybe_trigger_vblank(4); nes_write(0x0607, g_cpu.A);
label_B45B:;
    /* $B45B: 8D */ maybe_trigger_vblank(4); nes_write(0x0688, g_cpu.A);
label_B45E:;
    /* $B45E: 8D */ maybe_trigger_vblank(4); nes_write(0x0689, g_cpu.A);
label_B461:;
    /* $B461: 8D */ maybe_trigger_vblank(4); nes_write(0x068A, g_cpu.A);
label_B464:;
    /* $B464: 8D */ maybe_trigger_vblank(4); nes_write(0x068B, g_cpu.A);
label_B467:;
    /* $B467: 8D */ maybe_trigger_vblank(4); nes_write(0x068C, g_cpu.A);
label_B46A:;
    /* $B46A: 8D */ maybe_trigger_vblank(4); nes_write(0x068D, g_cpu.A);
label_B46D:;
    /* $B46D: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B46E_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B46E_b4");
#endif
label_B46E:;
    /* $B46E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_B470:;
    /* $B470: 8D */ maybe_trigger_vblank(4); nes_write(0x4000, g_cpu.A);
label_B473:;
    /* $B473: 8D */ maybe_trigger_vblank(4); nes_write(0x4004, g_cpu.A);
label_B476:;
    /* $B476: 8D */ maybe_trigger_vblank(4); nes_write(0x400C, g_cpu.A);
label_B479:;
    /* $B479: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B47B:;
    /* $B47B: 8D */ maybe_trigger_vblank(4); nes_write(0x4008, g_cpu.A);
label_B47E:;
    /* $B47E: 8D */ maybe_trigger_vblank(4); nes_write(0x4011, g_cpu.A);
label_B481:;
    /* $B481: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B43E_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B43E_b4");
#endif
label_B43E:;
    /* $B43E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B440:;
    /* $B440: 8D */ maybe_trigger_vblank(4); nes_write(0x062D, g_cpu.A);
label_B443:;
    /* $B443: 8D */ maybe_trigger_vblank(4); nes_write(0x0602, g_cpu.A);
label_B446:;
    /* $B446: 8D */ maybe_trigger_vblank(4); nes_write(0x065D, g_cpu.A);
label_B449:;
    /* $B449: 8D */ maybe_trigger_vblank(4); nes_write(0x062C, g_cpu.A);
label_B44C:;
    /* $B44C: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8003_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8003_b4");
#endif
label_8003:;
    /* $8003: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_F438(); return;
}

void func_8006_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8006_b4");
#endif
label_8006:;
    /* $8006: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_F416(); return;
}

void func_801B_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_801B_b4");
#endif
label_801B:;
    /* $801B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_FB88(); return;
}

void func_9905_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9905_b4");
#endif
label_9905:;
    /* $9905: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x81); FLAG_NZ(g_cpu.A);
label_9907:;
    /* $9907: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_9909:;
    /* $9909: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9914;
label_990B:;
    /* $990B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_990D:;
    /* $990D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9919;
label_990F:;
    /* $990F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_9911:;
    /* $9911: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8000_b4(); return;
label_9914:;
    /* $9914: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_9916:;
    /* $9916: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8003_b4(); return;
label_9919:;
    /* $9919: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8006_b4(); return;
}

void func_991E_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_991E_b4");
#endif
label_991E:;
    /* $991E: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_9920:;
    /* $9920: 85 */ maybe_trigger_vblank(3); nes_write(0x86, g_cpu.A);
label_9922:;
    /* $9922: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9925:;
    /* $9925: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_9927:;
    /* $9927: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_992C;
label_9929:;
    /* $9929: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2B; g_cpu.S--; func_801B_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9929, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_992C:;
    /* $992C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_992E:;
    /* $992E: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_9930:;
    /* $9930: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_9932:;
    /* $9932: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_9934:;
    /* $9934: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_9905_b4(); return;
}

void func_801E_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_801E_b4");
#endif
label_801E:;
    /* $801E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_FBCA(); return;
}

void func_992C_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_992C_b4");
#endif
label_992C:;
    /* $992C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_992E:;
    /* $992E: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_9930:;
    /* $9930: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_9932:;
    /* $9932: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_9934:;
    /* $9934: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_9905_b4(); return;
}

void func_8009_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8009_b4");
#endif
label_8009:;
    /* $8009: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_F852(); return;
}

void func_9A31_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A31_b4");
#endif
label_9A31:;
    /* $9A31: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_9A34:;
    /* $9A34: 84 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.Y);
label_9A36:;
    /* $9A36: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_9A38:;
    /* $9A38: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_9A39:;
    /* $9A39: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9A3A:;
    /* $9A3A: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9A3B:;
    /* $9A3B: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8049 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A3E:;
    /* $9A3E: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9A3F:;
    /* $9A3F: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8048 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A42:;
    /* $9A42: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9A43:;
    /* $9A43: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _lo=g_ram[0x100+g_cpu.S]; g_cpu.S++; uint8_t _hi=g_ram[0x100+g_cpu.S]; call_by_address(((uint16_t)_hi<<8|_lo)+1); }
    
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_99F7_b4_body(int _entry) {
    switch (_entry) {
        case 1: goto label_9A0C;
    }
label_99F7:;
    /* $99F7: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_99F9:;
    /* $99F9: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_9A14;
label_99FB:;
    /* $99FB: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_99FD:;
    /* $99FD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9A0C;
label_99FF:;
    /* $99FF: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x040A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_9A02:;
    /* $9A02: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A03:;
    /* $9A03: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_9A04:;
    /* $9A04: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_9A06:;
    /* $9A06: 9D */ maybe_trigger_vblank(5); nes_write((0x040A + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9A09:;
    /* $9A09: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_99DE_b4(); return;
label_9A0C:;
    /* $9A0C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A0F:;
    /* $9A0F: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x01; FLAG_NZ(g_cpu.A);
label_9A11:;
    /* $9A11: 9D */ maybe_trigger_vblank(5); nes_write((0x0405 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9A14:;
    /* $9A14: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_99F7_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99F7_b4");
#endif
    func_99F7_b4_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9A0C_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A0C_b4");
#endif
    func_99F7_b4_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9A15_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A15_b4");
#endif
label_9A15:;
    /* $9A15: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x17; g_cpu.S--; func_9A29_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9A15, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9A18:;
    /* $9A18: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1A; g_cpu.S--; func_9A31_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9A18, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9A1B:;
    /* $9A1B: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_9A1D:;
    /* $9A1D: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_9A28;
label_9A1F:;
    /* $9A1F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x21; g_cpu.S--; func_9A29_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9A1F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9A22:;
    /* $9A22: 9D */ maybe_trigger_vblank(5); nes_write((0x040A + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9A25:;
    /* $9A25: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x27; g_cpu.S--; func_99DE_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9A25, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9A28:;
    /* $9A28: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_800C_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_800C_b4");
#endif
label_800C:;
    /* $800C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_E094(); return;
}

void func_800F_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_800F_b4");
#endif
label_800F:;
    /* $800F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_F68D(); return;
}

void func_99DE_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99DE_b4");
#endif
label_99DE:;
    /* $99DE: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_99E1:;
    /* $99E1: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_99E2:;
    /* $99E2: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x040A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_99E5:;
    /* $99E5: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_99E7:;
    /* $99E7: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_99E8:;
    /* $99E8: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_99E9:;
    /* $99E9: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x99EF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_99EC:;
    /* $99EC: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_800F_b4(); return;
}

void func_9A29_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A29_b4");
#endif
label_9A29:;
    /* $9A29: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x040A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_9A2C:;
    /* $9A2C: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A2D:;
    /* $9A2D: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_9A2E:;
    /* $9A2E: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_9A30:;
    /* $9A30: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8036_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8036_b4");
#endif
label_8036:;
    /* $8036: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_833F_b4(); return;
}

void func_8039_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8039_b4");
#endif
label_8039:;
    /* $8039: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8395_b4(); return;
}

void func_9BBC_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9BBC_b4");
#endif
label_9BBC:;
    /* $9BBC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0400 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9BBF:;
    /* $9BBF: 85 */ maybe_trigger_vblank(3); nes_write(0x08, g_cpu.A);
label_9BC1:;
    /* $9BC1: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0401 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9BC4:;
    /* $9BC4: 85 */ maybe_trigger_vblank(3); nes_write(0x09, g_cpu.A);
label_9BC6:;
    /* $9BC6: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AFB + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9BC9:;
    /* $9BC9: 85 */ maybe_trigger_vblank(3); nes_write(0x0B, g_cpu.A);
label_9BCB:;
    /* $9BCB: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8027_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8027_b4");
#endif
label_8027:;
    /* $8027: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_FD8F(); return;
}

void func_9B2F_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9B2F_b4");
#endif
label_9B2F:;
    /* $9B2F: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x50; FLAG_NZ(g_cpu.X);
label_9B31:;
    /* $9B31: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x33; g_cpu.S--; func_9B3C_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9B31, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9B34:;
    /* $9B34: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_9B35:;
    /* $9B35: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_9B36:;
    /* $9B36: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x10; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9B38:;
    /* $9B38: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_9B39:;
    /* $9B39: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9B31;
    }
label_9B3B:;
    /* $9B3B: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9BE0_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9BE0_b4");
#endif
label_9BE0:;
    /* $9BE0: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x7E); FLAG_NZ(g_cpu.Y);
label_9BE2:;
    /* $9BE2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9BE6;
label_9BE4:;
    /* $9BE4: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x80; FLAG_NZ(g_cpu.Y);
label_9BE6:;
    /* $9BE6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_9BE8:;
    /* $9BE8: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9BEA:;
    /* $9BEA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9C18;
label_9BEC:;
    /* $9BEC: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9BED:;
    /* $9BED: 84 */ maybe_trigger_vblank(3); nes_write(0x7E, g_cpu.Y);
label_9BEF:;
    /* $9BEF: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_9BF0:;
    /* $9BF0: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9BF1:;
    /* $9BF1: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_9C18;
label_9BF3:;
    /* $9BF3: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_9BF5:;
    /* $9BF5: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_9BF7:;
    /* $9BF7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9C18;
label_9BF9:;
    /* $9BF9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9BFB:;
    /* $9BFB: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x10; FLAG_NZ(g_cpu.X);
label_9BFD:;
    /* $9BFD: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9C00:;
    /* $9C00: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9C13;
label_9C02:;
    /* $9C02: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x20; FLAG_NZ(g_cpu.X);
label_9C04:;
    /* $9C04: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9C07:;
    /* $9C07: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9C13;
label_9C09:;
    /* $9C09: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x30; FLAG_NZ(g_cpu.X);
label_9C0B:;
    /* $9C0B: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9C0E:;
    /* $9C0E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9C13;
label_9C10:;
    /* $9C10: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x7E; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9C12:;
    /* $9C12: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9C13:;
    /* $9C13: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_9C15:;
    /* $9C15: 9D */ maybe_trigger_vblank(5); nes_write((0x0409 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9C18:;
    /* $9C18: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9C19_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9C19_b4");
#endif
label_9C19:;
    /* $9C19: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x7F); FLAG_NZ(g_cpu.Y);
label_9C1B:;
    /* $9C1B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9C1F;
label_9C1D:;
    /* $9C1D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x60; FLAG_NZ(g_cpu.Y);
label_9C1F:;
    /* $9C1F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_9C21:;
    /* $9C21: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9C23:;
    /* $9C23: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9C48;
label_9C25:;
    /* $9C25: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9C26:;
    /* $9C26: 84 */ maybe_trigger_vblank(3); nes_write(0x7F, g_cpu.Y);
label_9C28:;
    /* $9C28: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_9C29:;
    /* $9C29: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9C2A:;
    /* $9C2A: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_9C48;
label_9C2C:;
    /* $9C2C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_9C2E:;
    /* $9C2E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9C48;
label_9C30:;
    /* $9C30: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9C32:;
    /* $9C32: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x40; FLAG_NZ(g_cpu.X);
label_9C34:;
    /* $9C34: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9C37:;
    /* $9C37: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9C43;
label_9C39:;
    /* $9C39: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x50; FLAG_NZ(g_cpu.X);
label_9C3B:;
    /* $9C3B: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9C3E:;
    /* $9C3E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9C43;
label_9C40:;
    /* $9C40: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x7F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9C42:;
    /* $9C42: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9C43:;
    /* $9C43: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_9C45:;
    /* $9C45: 9D */ maybe_trigger_vblank(5); nes_write((0x0409 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9C48:;
    /* $9C48: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9930_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9930_b4");
#endif
label_9930:;
    /* $9930: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_9932:;
    /* $9932: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_9934:;
    /* $9934: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_9905_b4(); return;
}

void func_802D_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_802D_b4");
#endif
label_802D:;
    /* $802D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8244_b4(); return;
}

void func_8030_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8030_b4");
#endif
label_8030:;
    /* $8030: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8318_b4(); return;
}

void func_8033_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8033_b4");
#endif
label_8033:;
    /* $8033: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_FA1E(); return;
}

void func_9AE4_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9AE4_b4");
#endif
label_9AE4:;
    /* $9AE4: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9AE7:;
    /* $9AE7: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9AE9:;
    /* $9AE9: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9AF2;
label_9AEB:;
    /* $9AEB: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9AEE:;
    /* $9AEE: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_9AF0:;
    /* $9AF0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9AF9;
label_9AF2:;
    /* $9AF2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9AF4:;
    /* $9AF4: 9D */ maybe_trigger_vblank(5); nes_write((0x6AF4 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9AF7:;
    /* $9AF7: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9B24;
label_9AF9:;
    /* $9AF9: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9AFC:;
    /* $9AFC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9AFD:;
    /* $9AFD: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_9B24;
label_9AFF:;
    /* $9AFF: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B02:;
    /* $9B02: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_9B04:;
    /* $9B04: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9B24;
label_9B06:;
    /* $9B06: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x08; g_cpu.S--; func_802D_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9B06, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9B09:;
    /* $9B09: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_9B0B:;
    /* $9B0B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_9B0D:;
    /* $9B0D: 9D */ maybe_trigger_vblank(5); nes_write((0x0402 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9B10:;
    /* $9B10: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x12; g_cpu.S--; func_8030_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9B10, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9B13:;
    /* $9B13: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_9B15:;
    /* $9B15: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_9B17:;
    /* $9B17: 9D */ maybe_trigger_vblank(5); nes_write((0x0403 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9B1A:;
    /* $9B1A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1C; g_cpu.S--; func_8033_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9B1A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9B1D:;
    /* $9B1D: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_9B24;
label_9B1F:;
    /* $9B1F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_9B21:;
    /* $9B21: 9D */ maybe_trigger_vblank(5); nes_write((0x6AF4 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9B24:;
    /* $9B24: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9B26:;
    /* $9B26: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x28; g_cpu.S--; func_800C_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9B26, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9B29:;
    /* $9B29: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8006_b4(); return;
}

void func_9B3C_b4_body(int _entry) {
    switch (_entry) {
        case 1: goto label_9BAA;
    }
label_9B3C:;
    /* $9B3C: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_9B3F:;
    /* $9B3F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9B67;
label_9B41:;
    /* $9B41: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6B02 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B44:;
    /* $9B44: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_9B46:;
    /* $9B46: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9B4C;
label_9B48:;
    /* $9B48: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_9B4A:;
    /* $9B4A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9BBB;
label_9B4C:;
    /* $9B4C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B4F:;
    /* $9B4F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9B51:;
    /* $9B51: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9B67;
label_9B53:;
    /* $9B53: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9B54:;
    /* $9B54: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9B72;
label_9B56:;
    /* $9B56: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x02; g_cpu.C=(g_cpu.Y>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_9B58:;
    /* $9B58: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9B67;
label_9B5A:;
    /* $9B5A: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x03; g_cpu.C=(g_cpu.Y>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_9B5C:;
    /* $9B5C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9BBB;
label_9B5E:;
    /* $9B5E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x040C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B61:;
    /* $9B61: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_9B63:;
    /* $9B63: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9BBB;
label_9B65:;
    /* $9B65: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9B72;
label_9B67:;
    /* $9B67: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9B69:;
    /* $9B69: 9D */ maybe_trigger_vblank(5); nes_write((0x6AF4 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9B6C:;
    /* $9B6C: 9D */ maybe_trigger_vblank(5); nes_write((0x040F + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9B6F:;
    /* $9B6F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x71; g_cpu.S--; func_802A_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9B6F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9B72:;
    /* $9B72: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0405); FLAG_NZ(g_cpu.A);
label_9B75:;
    /* $9B75: 9D */ maybe_trigger_vblank(5); nes_write((0x0405 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9B78:;
    /* $9B78: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9B79:;
    /* $9B79: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9B7A:;
    /* $9B7A: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_9B7B:;
    /* $9B7B: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9B7C:;
    /* $9B7C: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9B7D:;
    /* $9B7D: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9B7E:;
    /* $9B7E: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9B7F:;
    /* $9B7F: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9B80:;
    /* $9B80: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9BCB + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B83:;
    /* $9B83: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_9B85:;
    /* $9B85: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9BDA + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B88:;
    /* $9B88: 9D */ maybe_trigger_vblank(5); nes_write((0x6B02 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9B8B:;
    /* $9B8B: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_9B8C:;
    /* $9B8C: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_9B8D:;
    /* $9B8D: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_9B8E:;
    /* $9B8E: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9B8F:;
    /* $9B8F: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9BCF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B92:;
    /* $9B92: 85 */ maybe_trigger_vblank(3); nes_write(0x05, g_cpu.A);
label_9B94:;
    /* $9B94: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_9B95:;
    /* $9B95: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9B96:;
    /* $9B96: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_9B98:;
    /* $9B98: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; func_9BBC_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9B98, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9B9B:;
    /* $9B9B: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9B9C:;
    /* $9B9C: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_9B9D:;
    /* $9B9D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x9F; g_cpu.S--; func_8027_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9B9D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9BA0:;
    /* $9BA0: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_9BBB;
label_9BA2:;
    /* $9BA2: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9BA5:;
    /* $9BA5: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9BAA;
label_9BA7:;
    /* $9BA7: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x6AF4 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9BAA:;
    /* $9BAA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x08); FLAG_NZ(g_cpu.A);
label_9BAC:;
    /* $9BAC: 9D */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9BAF:;
    /* $9BAF: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x09); FLAG_NZ(g_cpu.A);
label_9BB1:;
    /* $9BB1: 9D */ maybe_trigger_vblank(5); nes_write((0x0401 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9BB4:;
    /* $9BB4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x0B); FLAG_NZ(g_cpu.A);
label_9BB6:;
    /* $9BB6: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_9BB8:;
    /* $9BB8: 9D */ maybe_trigger_vblank(5); nes_write((0x6AFB + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9BBB:;
    /* $9BBB: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9B3C_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9B3C_b4");
#endif
    func_9B3C_b4_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9BAA_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9BAA_b4");
#endif
    func_9B3C_b4_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_802A_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_802A_b4");
#endif
label_802A:;
    /* $802A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_EB6E(); return;
}

void func_8801_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8801_b4");
#endif
label_8801:;
    /* $8801: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0F00 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8804:;
    /* $8804: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x09); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8806:;
    /* $8806: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0960 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8809:;
    /* $8809: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFE20 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_880C:;
    /* $880C: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xFD1A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_880F:;
    /* $880F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x88; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x11; g_cpu.S--; if (!nes_dispatch_call(0x2A29, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x880F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8812:;
    /* $8812: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFD39 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8815:;
    /* $8815: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8058_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8058_b4");
#endif
label_8058:;
    /* $8058: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_805A:;
    /* $805A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_805D:;
    /* $805D: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_805E:;
    /* $805E: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_80AF;
label_8060:;
    /* $8060: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8063:;
    /* $8063: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_8065:;
    /* $8065: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_80AF;
label_8067:;
    /* $8067: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x69; g_cpu.S--; func_8244_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8067, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_806A:;
    /* $806A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_806C:;
    /* $806C: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_807D;
label_806E:;
    /* $806E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x70; g_cpu.S--; func_C3D4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x806E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8071:;
    /* $8071: 85 */ maybe_trigger_vblank(3); nes_write(0x66, g_cpu.A);
label_8073:;
    /* $8073: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x75; g_cpu.S--; func_83F5_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8073, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8076:;
    /* $8076: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x78; g_cpu.S--; func_80B8_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8076, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8079:;
    /* $8079: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x66; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_807B:;
    /* $807B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8073;
    }
label_807D:;
    /* $807D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_808B;
label_807F:;
    /* $807F: 85 */ maybe_trigger_vblank(3); nes_write(0x66, g_cpu.A);
label_8081:;
    /* $8081: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x83; g_cpu.S--; func_844B_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8081, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8084:;
    /* $8084: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x86; g_cpu.S--; func_80FB_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8084, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8087:;
    /* $8087: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x66; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8089:;
    /* $8089: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8081;
    }
label_808B:;
    /* $808B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x8D; g_cpu.S--; func_8318_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x808B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_808E:;
    /* $808E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_8090:;
    /* $8090: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_80A1;
label_8092:;
    /* $8092: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x94; g_cpu.S--; func_C3D4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8092, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8095:;
    /* $8095: 85 */ maybe_trigger_vblank(3); nes_write(0x66, g_cpu.A);
label_8097:;
    /* $8097: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; func_84A7_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8097, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_809A:;
    /* $809A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x9C; g_cpu.S--; func_816E_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x809A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_809D:;
    /* $809D: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x66; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_809F:;
    /* $809F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8097;
    }
label_80A1:;
    /* $80A1: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_80AF;
label_80A3:;
    /* $80A3: 85 */ maybe_trigger_vblank(3); nes_write(0x66, g_cpu.A);
label_80A5:;
    /* $80A5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA7; g_cpu.S--; func_84FE_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x80A5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_80A8:;
    /* $80A8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAA; g_cpu.S--; func_8134_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x80A8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_80AB:;
    /* $80AB: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x66; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_80AD:;
    /* $80AD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_80A5;
    }
label_80AF:;
    /* $80AF: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B3BF_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3BF_b4");
#endif
label_B3BF:;
    /* $B3BF: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0602; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B3C2:;
    /* $B3C2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC4; g_cpu.S--; func_B46E_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3C2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3C5:;
    /* $B3C5: 8D */ maybe_trigger_vblank(4); nes_write(0x0603, g_cpu.A);
label_B3C8:;
    /* $B3C8: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B398_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B398_b4");
#endif
label_B398:;
    /* $B398: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B39A:;
    /* $B39A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_B3A6;
label_B39C:;
    /* $B39C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_B39E:;
    /* $B39E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B3A6;
label_B3A0:;
    /* $B3A0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_B3A2:;
    /* $B3A2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B3A6;
label_B3A4:;
    /* $B3A4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_B3A6:;
    /* $B3A6: 85 */ maybe_trigger_vblank(3); nes_write(0xE0, g_cpu.A);
label_B3A8:;
    /* $B3A8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_B3AA:;
    /* $B3AA: 85 */ maybe_trigger_vblank(3); nes_write(0xE1, g_cpu.A);
label_B3AC:;
    /* $B3AC: 84 */ maybe_trigger_vblank(3); nes_write(0xE2, g_cpu.Y);
label_B3AE:;
    /* $B3AE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B3B0:;
    /* $B3B0: 85 */ maybe_trigger_vblank(3); nes_write(0xE3, g_cpu.A);
label_B3B2:;
    /* $B3B2: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_B3B4:;
    /* $B3B4: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xE2) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B3B6:;
    /* $B3B6: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0xE0) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B3B8:;
    /* $B3B8: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B3B9:;
    /* $B3B9: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_B3BA:;
    /* $B3BA: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_B3BC:;
    /* $B3BC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B3B4;
    }
label_B3BE:;
    /* $B3BE: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B4ED_b4_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B51A;
        case 2: goto label_B503;
        case 3: goto label_B51E;
    }
label_B4ED:;
    /* $B4ED: 8D */ maybe_trigger_vblank(4); nes_write(0x064D, g_cpu.A);
label_B4F0:;
    /* $B4F0: 86 */ maybe_trigger_vblank(3); nes_write(0xE4, g_cpu.X);
label_B4F2:;
    /* $B4F2: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xB2; FLAG_NZ(g_cpu.Y);
label_B4F4:;
    /* $B4F4: 84 */ maybe_trigger_vblank(3); nes_write(0xE5, g_cpu.Y);
label_B4F6:;
    /* $B4F6: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_B4F8:;
    /* $B4F8: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xE4) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B4FA:;
    /* $B4FA: 99 */ maybe_trigger_vblank(5); nes_write((0x00E0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B4FD:;
    /* $B4FD: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B4FE:;
    /* $B4FE: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_B4FF:;
    /* $B4FF: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_B501:;
    /* $B501: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B4F8;
    }
label_B503:;
    /* $B503: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xE4) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B505:;
    /* $B505: 8D */ maybe_trigger_vblank(4); nes_write(0x065C, g_cpu.A);
label_B508:;
    /* $B508: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_B50A:;
    /* $B50A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x064D); FLAG_NZ(g_cpu.A);
label_B50D:;
    /* $B50D: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B50E:;
    /* $B50E: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x064D; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B511:;
    /* $B511: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_B51F;
label_B513:;
    /* $B513: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B514:;
    /* $B514: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B515:;
    /* $B515: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_B516:;
    /* $B516: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x10; g_cpu.C=(g_cpu.A>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_B518:;
    /* $B518: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B50E;
    }
label_B51A:;
    /* $B51A: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_B51B:;
    /* $B51B: 8D */ maybe_trigger_vblank(4); nes_write(0x064D, g_cpu.A);
label_B51E:;
    /* $B51E: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B51F:;
    /* $B51F: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xE0) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B521:;
    /* $B521: 85 */ maybe_trigger_vblank(3); nes_write(0xE2, g_cpu.A);
label_B523:;
    /* $B523: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B524:;
    /* $B524: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xE0) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B526:;
    /* $B526: 85 */ maybe_trigger_vblank(3); nes_write(0xE3, g_cpu.A);
label_B528:;
    /* $B528: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_B51A;
}

void func_B4ED_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4ED_b4");
#endif
    func_B4ED_b4_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B51A_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B51A_b4");
#endif
    func_B4ED_b4_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B503_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B503_b4");
#endif
    func_B4ED_b4_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B51E_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B51E_b4");
#endif
    func_B4ED_b4_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BC83_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC83_b4");
#endif
label_BC83:;
    /* $BC83: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_BC85:;
    /* $BC85: 8D */ maybe_trigger_vblank(4); nes_write(0x065E, g_cpu.A);
label_BC88:;
    /* $BC88: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x064D); FLAG_NZ(g_cpu.A);
label_BC8B:;
    /* $BC8B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_BC93;
label_BC8D:;
    /* $BC8D: EE */ maybe_trigger_vblank(6); { uint16_t a=0x065E; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BC90:;
    /* $BC90: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_BC91:;
    /* $BC91: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BC8D;
    }
label_BC93:;
    /* $BC93: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BC94_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC94_b4");
#endif
label_BC94:;
    /* $BC94: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x065E); FLAG_NZ(g_cpu.A);
label_BC97:;
    /* $BC97: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_BC98:;
    /* $BC98: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x08 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x08); g_cpu.A=r&0xFF; }
label_BC9A:;
    /* $BC9A: 8D */ maybe_trigger_vblank(4); nes_write(0x065E, g_cpu.A);
label_BC9D:;
    /* $BC9D: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_833F_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_833F_b4");
#endif
label_833F:;
    /* $833F: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0E; FLAG_NZ(g_cpu.Y);
label_8341:;
    /* $8341: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AFE + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8344:;
    /* $8344: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_835E;
label_8346:;
    /* $8346: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8347:;
    /* $8347: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0406 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_834A:;
    /* $834A: 9D */ maybe_trigger_vblank(5); nes_write((0x0406 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_834D:;
    /* $834D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0402 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8350:;
    /* $8350: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x00 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x00); g_cpu.A=r&0xFF; }
label_8352:;
    /* $8352: 9D */ maybe_trigger_vblank(5); nes_write((0x0402 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8355:;
    /* $8355: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_8376;
label_8357:;
    /* $8357: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x83; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x59; g_cpu.S--; func_C3D4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8357, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_835A:;
    /* $835A: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xF2; FLAG_NZ(g_cpu.Y);
label_835C:;
    /* $835C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8376;
label_835E:;
    /* $835E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x83; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x60; g_cpu.S--; func_C3D4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x835E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8361:;
    /* $8361: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8362:;
    /* $8362: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8364:;
    /* $8364: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0406 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8367:;
    /* $8367: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8369:;
    /* $8369: 9D */ maybe_trigger_vblank(5); nes_write((0x0406 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_836C:;
    /* $836C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0402 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_836F:;
    /* $836F: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x00; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8371:;
    /* $8371: 9D */ maybe_trigger_vblank(5); nes_write((0x0402 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8374:;
    /* $8374: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8357;
    }
label_8376:;
    /* $8376: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0E; g_cpu.C=(g_cpu.A>=0x0E)?1:0; FLAG_NZ(r&0xFF); }
label_8378:;
    /* $8378: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_8383;
label_837A:;
    /* $837A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_837C:;
    /* $837C: 9D */ maybe_trigger_vblank(5); nes_write((0x0406 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_837F:;
    /* $837F: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8380:;
    /* $8380: 9D */ maybe_trigger_vblank(5); nes_write((0x0402 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8383:;
    /* $8383: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AFC + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8386:;
    /* $8386: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8387:;
    /* $8387: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0406 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_838A:;
    /* $838A: 9D */ maybe_trigger_vblank(5); nes_write((0x6AFC + g_cpu.X) & 0xFFFF, g_cpu.A);
label_838D:;
    /* $838D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_838F:;
    /* $838F: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0402 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8392:;
    /* $8392: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8394:;
    /* $8394: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8395_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8395_b4");
#endif
label_8395:;
    /* $8395: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8397:;
    /* $8397: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8399:;
    /* $8399: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_839B:;
    /* $839B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0E; FLAG_NZ(g_cpu.A);
label_839D:;
    /* $839D: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_839F:;
    /* $839F: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_83A1:;
    /* $83A1: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0407 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_83A4:;
    /* $83A4: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_83A5:;
    /* $83A5: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x6AFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83A8:;
    /* $83A8: 9D */ maybe_trigger_vblank(5); nes_write((0x0407 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_83AB:;
    /* $83AB: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_83AD:;
    /* $83AD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_83AF:;
    /* $83AF: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x6AFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_83B2:;
    /* $83B2: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_83B6;
label_83B4:;
    /* $83B4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_83B6:;
    /* $83B6: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0403 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83B9:;
    /* $83B9: 9D */ maybe_trigger_vblank(5); nes_write((0x0403 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_83BC:;
    /* $83BC: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_83BD:;
    /* $83BD: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_83D0;
label_83BF:;
    /* $83BF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_83C1:;
    /* $83C1: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_83C2:;
    /* $83C2: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0407 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83C5:;
    /* $83C5: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_83C7:;
    /* $83C7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_83C9:;
    /* $83C9: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0403 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83CC:;
    /* $83CC: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_83CD:;
    /* $83CD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x83; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCF; g_cpu.S--; func_E449();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x83CD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_83D0:;
    /* $83D0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x04); FLAG_NZ(g_cpu.A);
label_83D2:;
    /* $83D2: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_83D4:;
    /* $83D4: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_83D5:;
    /* $83D5: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x03); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83D7:;
    /* $83D7: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_83E3;
label_83D9:;
    /* $83D9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_83DB:;
    /* $83DB: 9D */ maybe_trigger_vblank(5); nes_write((0x0407 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_83DE:;
    /* $83DE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_83E0:;
    /* $83E0: 9D */ maybe_trigger_vblank(5); nes_write((0x0403 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_83E3:;
    /* $83E3: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AFD + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_83E6:;
    /* $83E6: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_83E7:;
    /* $83E7: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0407 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83EA:;
    /* $83EA: 9D */ maybe_trigger_vblank(5); nes_write((0x6AFD + g_cpu.X) & 0xFFFF, g_cpu.A);
label_83ED:;
    /* $83ED: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_83EF:;
    /* $83EF: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0403 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83F2:;
    /* $83F2: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_83F4:;
    /* $83F4: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8244_b4_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8312;
        case 2: goto label_82C3;
        case 3: goto label_825B;
        case 4: goto label_82F4;
        case 5: goto label_8258;
        case 6: goto label_82A2;
        case 7: goto label_8296;
    }
label_8244:;
    /* $8244: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x46; g_cpu.S--; func_80B0_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8244, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8247:;
    /* $8247: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_824C;
label_8249:;
    /* $8249: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_833F_b4(); return;
label_824C:;
    /* $824C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_824F:;
    /* $824F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_8251:;
    /* $8251: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x20; FLAG_NZ(g_cpu.A);
label_8253:;
    /* $8253: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_82A2;
label_8255:;
    /* $8255: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x57; g_cpu.S--; func_822B_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8255, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8258:;
    /* $8258: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0406 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_825B:;
    /* $825B: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x81) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_825D:;
    /* $825D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xF0; g_cpu.C=(g_cpu.A>=0xF0)?1:0; FLAG_NZ(r&0xFF); }
label_825F:;
    /* $825F: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_827F;
label_8261:;
    /* $8261: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFA; g_cpu.C=(g_cpu.A>=0xFA)?1:0; FLAG_NZ(r&0xFF); }
label_8263:;
    /* $8263: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_827C;
label_8265:;
    /* $8265: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFB; g_cpu.C=(g_cpu.A>=0xFB)?1:0; FLAG_NZ(r&0xFF); }
label_8267:;
    /* $8267: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_82B0;
label_8269:;
    /* $8269: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFC; g_cpu.C=(g_cpu.A>=0xFC)?1:0; FLAG_NZ(r&0xFF); }
label_826B:;
    /* $826B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_82B3;
label_826D:;
    /* $826D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFD; g_cpu.C=(g_cpu.A>=0xFD)?1:0; FLAG_NZ(r&0xFF); }
label_826F:;
    /* $826F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_82A5;
label_8271:;
    /* $8271: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFE; g_cpu.C=(g_cpu.A>=0xFE)?1:0; FLAG_NZ(r&0xFF); }
label_8273:;
    /* $8273: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_82DE;
label_8275:;
    /* $8275: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8277:;
    /* $8277: 9D */ maybe_trigger_vblank(5); nes_write((0x0406 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_827A:;
    /* $827A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8258;
    }
label_827C:;
    /* $827C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8312_b4(); return;
label_827F:;
    /* $827F: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8280:;
    /* $8280: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0409 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8283:;
    /* $8283: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8290;
label_8285:;
    /* $8285: 9D */ maybe_trigger_vblank(5); nes_write((0x0409 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8288:;
    /* $8288: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8289:;
    /* $8289: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_828A:;
    /* $828A: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_828B:;
    /* $828B: 9D */ maybe_trigger_vblank(5); nes_write((0x0406 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_828E:;
    /* $828E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_825B;
    }
label_8290:;
    /* $8290: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0409 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8293:;
    /* $8293: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8294:;
    /* $8294: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x81) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8296:;
    /* $8296: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8297:;
    /* $8297: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8298:;
    /* $8298: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; func_C2BE();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8298, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_829B:;
    /* $829B: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_829C:;
    /* $829C: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_82A2;
label_829E:;
    /* $829E: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0xFF; FLAG_NZ(g_cpu.A);
label_82A0:;
    /* $82A0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x00 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x00); g_cpu.A=r&0xFF; }
label_82A2:;
    /* $82A2: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_82A4:;
    /* $82A4: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_82A5:;
    /* $82A5: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0406 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_82A8:;
    /* $82A8: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_82A9:;
    /* $82A9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_82AB:;
    /* $82AB: 9D */ maybe_trigger_vblank(5); nes_write((0x6B01 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_82AE:;
    /* $82AE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_825B;
    }
label_82B0:;
    /* $82B0: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_82B1:;
    /* $82B1: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_82B2:;
    /* $82B2: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_82B3:;
    /* $82B3: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6B03 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_82B6:;
    /* $82B6: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_82BE;
label_82B8:;
    /* $82B8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; func_E770();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x82B8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_82BB:;
    /* $82BB: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_82C3_b4(); return;
label_82BE:;
    /* $82BE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_82D2;
label_82C0:;
    /* $82C0: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC2; g_cpu.S--; func_E77B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x82C0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_82C3:;
    /* $82C3: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_82C5:;
    /* $82C5: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_82D2;
label_82C7:;
    /* $82C7: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0406 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_82CA:;
    /* $82CA: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_82CB:;
    /* $82CB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_82CD:;
    /* $82CD: 9D */ maybe_trigger_vblank(5); nes_write((0x6B03 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_82D0:;
    /* $82D0: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_82D7;
label_82D2:;
    /* $82D2: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0406 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_82D5:;
    /* $82D5: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_82D6:;
    /* $82D6: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_82D7:;
    /* $82D7: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_82D8:;
    /* $82D8: 9D */ maybe_trigger_vblank(5); nes_write((0x0406 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_82DB:;
    /* $82DB: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_825B;
label_82DE:;
    /* $82DE: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_82DF:;
    /* $82DF: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_82E0:;
    /* $82E0: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_82E1:;
    /* $82E1: 9D */ maybe_trigger_vblank(5); nes_write((0x0406 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_82E4:;
    /* $82E4: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6B03 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_82E7:;
    /* $82E7: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_82EF;
label_82E9:;
    /* $82E9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xEB; g_cpu.S--; func_E770();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x82E9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_82EC:;
    /* $82EC: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_82F4_b4(); return;
label_82EF:;
    /* $82EF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_82FB;
label_82F1:;
    /* $82F1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF3; g_cpu.S--; func_E77B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x82F1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_82F4:;
    /* $82F4: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_82F6:;
    /* $82F6: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_82FB;
label_82F8:;
    /* $82F8: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_8258;
label_82FB:;
    /* $82FB: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x6B02 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_82FE:;
    /* $82FE: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x968B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8301:;
    /* $8301: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_8303:;
    /* $8303: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8312;
label_8305:;
    /* $8305: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8308:;
    /* $8308: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x05; FLAG_NZ(g_cpu.A);
label_830A:;
    /* $830A: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x968B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_830D:;
    /* $830D: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x1F; FLAG_NZ(g_cpu.A);
label_830F:;
    /* $830F: 9D */ maybe_trigger_vblank(5); nes_write((0x0405 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8312:;
    /* $8312: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x83; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x14; g_cpu.S--; func_81B1_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8312, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8315:;
    /* $8315: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_82A2;
}

void func_8244_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8244_b4");
#endif
    func_8244_b4_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8312_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8312_b4");
#endif
    func_8244_b4_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_82C3_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_82C3_b4");
#endif
    func_8244_b4_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_825B_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_825B_b4");
#endif
    func_8244_b4_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_82F4_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_82F4_b4");
#endif
    func_8244_b4_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8258_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8258_b4");
#endif
    func_8244_b4_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_82A2_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_82A2_b4");
#endif
    func_8244_b4_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8296_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8296_b4");
#endif
    func_8244_b4_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8318_b4_body(int _entry) {
    switch (_entry) {
        case 1: goto label_832F;
    }
label_8318:;
    /* $8318: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x83; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1A; g_cpu.S--; func_80B0_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8318, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_831B:;
    /* $831B: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_8320;
label_831D:;
    /* $831D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8395_b4(); return;
label_8320:;
    /* $8320: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8323:;
    /* $8323: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_8325:;
    /* $8325: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x20; FLAG_NZ(g_cpu.A);
label_8327:;
    /* $8327: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_833C;
label_8329:;
    /* $8329: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0406 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_832C:;
    /* $832C: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_832D:;
    /* $832D: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x81) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_832F:;
    /* $832F: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8330:;
    /* $8330: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A);
label_8332:;
    /* $8332: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8333:;
    /* $8333: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8334:;
    /* $8334: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_8336:;
    /* $8336: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_8337:;
    /* $8337: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_833C;
label_8339:;
    /* $8339: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x83; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3B; g_cpu.S--; func_C3D4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8339, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_833C:;
    /* $833C: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_833E:;
    /* $833E: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8318_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8318_b4");
#endif
    func_8318_b4_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_832F_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_832F_b4");
#endif
    func_8318_b4_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_95AB_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95AB_b4");
#endif
label_95AB:;
    /* $95AB: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_95C3_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95C3_b4");
#endif
label_95C3:;
    /* $95C3: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_9C49_b4(); return;
}

void func_8B13_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8B13_b4");
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
    /* $8B56: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x58; g_cpu.S--; func_8B74_b4();
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
    /* $8B6D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6F; g_cpu.S--; func_8B53_b4();
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

void func_8B79_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8B79_b4");
#endif
label_8B79:;
    /* $8B79: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xB0; FLAG_NZ(g_cpu.X);
label_8B7B:;
    /* $8B7B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x7D; g_cpu.S--; func_8B87_b4();
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

void func_83F5_b4_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8400;
    }
label_83F5:;
    /* $83F5: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_83F7:;
    /* $83F7: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0400 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_83FA:;
    /* $83FA: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_83FB:;
    /* $83FB: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x6AF5 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83FE:;
    /* $83FE: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_8400:;
    /* $8400: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8401:;
    /* $8401: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8406;
label_8403:;
    /* $8403: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x05; g_cpu.S--; func_E770();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8403, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8406:;
    /* $8406: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_8408:;
    /* $8408: 84 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.Y);
label_840A:;
    /* $840A: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_840C:;
    /* $840C: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_844A;
label_840E:;
    /* $840E: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8410:;
    /* $8410: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0400 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_8413:;
    /* $8413: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8429;
label_8415:;
    /* $8415: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xF0; FLAG_NZ(g_cpu.Y);
label_8417:;
    /* $8417: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x49); FLAG_NZ(g_cpu.A);
label_8419:;
    /* $8419: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_841B:;
    /* $841B: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8429;
label_841D:;
    /* $841D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFC); FLAG_NZ(g_cpu.A);
label_841F:;
    /* $841F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_844A;
label_8421:;
    /* $8421: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x23; g_cpu.S--; func_8563_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8421, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8424:;
    /* $8424: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_844A;
label_8426:;
    /* $8426: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x28; g_cpu.S--; func_855A_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8426, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8429:;
    /* $8429: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_842A:;
    /* $842A: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_842B:;
    /* $842B: 9D */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_842E:;
    /* $842E: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x6AF5 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8431:;
    /* $8431: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8441;
label_8433:;
    /* $8433: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFC); FLAG_NZ(g_cpu.A);
label_8435:;
    /* $8435: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_843C;
label_8437:;
    /* $8437: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x39; g_cpu.S--; func_8563_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8437, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_843A:;
    /* $843A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8441;
label_843C:;
    /* $843C: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0400 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_843F:;
    /* $843F: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8440:;
    /* $8440: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8441:;
    /* $8441: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8444:;
    /* $8444: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_8449;
label_8446:;
    /* $8446: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x6B01 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8449:;
    /* $8449: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_844A:;
    /* $844A: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_83F5_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_83F5_b4");
#endif
    func_83F5_b4_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8400_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8400_b4");
#endif
    func_83F5_b4_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_80B8_b4_body(int _entry) {
    switch (_entry) {
        case 1: goto label_80F6;
    }
label_80B8:;
    /* $80B8: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_80BA:;
    /* $80BA: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_80FA;
label_80BC:;
    /* $80BC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_80BF:;
    /* $80BF: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_80C7;
label_80C1:;
    /* $80C1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC3; g_cpu.S--; func_81FC_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x80C1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_80C4:;
    /* $80C4: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_80F6_b4(); return;
label_80C7:;
    /* $80C7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC9; g_cpu.S--; func_80B0_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x80C7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_80CA:;
    /* $80CA: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_80EA;
label_80CC:;
    /* $80CC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6B03 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_80CF:;
    /* $80CF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_80C1;
    }
label_80D1:;
    /* $80D1: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_80D8;
label_80D3:;
    /* $80D3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD5; g_cpu.S--; func_81B1_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x80D3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_80D6:;
    /* $80D6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_80E2;
label_80D8:;
    /* $80D8: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_80D9:;
    /* $80D9: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0x0402 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_80DC:;
    /* $80DC: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0x0406 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_80DF:;
    /* $80DF: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_80F6_b4(); return;
label_80E2:;
    /* $80E2: 9D */ maybe_trigger_vblank(5); nes_write((0x0402 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_80E5:;
    /* $80E5: 9D */ maybe_trigger_vblank(5); nes_write((0x0406 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_80E8:;
    /* $80E8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_80F6;
label_80EA:;
    /* $80EA: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x977B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_80ED:;
    /* $80ED: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_80EE:;
    /* $80EE: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_80EF:;
    /* $80EF: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_80F6;
label_80F1:;
    /* $80F1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_80F3:;
    /* $80F3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF5; g_cpu.S--; func_856B_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x80F3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_80F6:;
    /* $80F6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_80F8:;
    /* $80F8: 85 */ maybe_trigger_vblank(3); nes_write(0x66, g_cpu.A);
label_80FA:;
    /* $80FA: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_80B8_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80B8_b4");
#endif
    func_80B8_b4_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_80F6_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80F6_b4");
#endif
    func_80B8_b4_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_844B_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_844B_b4");
#endif
label_844B:;
    /* $844B: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_844D:;
    /* $844D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0400 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8450:;
    /* $8450: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8451:;
    /* $8451: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x6AF5 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8454:;
    /* $8454: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_8456:;
    /* $8456: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8457:;
    /* $8457: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_845C;
label_8459:;
    /* $8459: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x5B; g_cpu.S--; func_E77B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8459, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_845C:;
    /* $845C: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_845E:;
    /* $845E: 84 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.Y);
label_8460:;
    /* $8460: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_8462:;
    /* $8462: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_84A6;
label_8464:;
    /* $8464: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8466:;
    /* $8466: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0400 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_8469:;
    /* $8469: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0xEF; g_cpu.C=(g_cpu.Y>=0xEF)?1:0; FLAG_NZ(r&0xFF); }
label_846B:;
    /* $846B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8481;
label_846D:;
    /* $846D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xFF; FLAG_NZ(g_cpu.Y);
label_846F:;
    /* $846F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x49); FLAG_NZ(g_cpu.A);
label_8471:;
    /* $8471: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_8473:;
    /* $8473: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8481;
label_8475:;
    /* $8475: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFC); FLAG_NZ(g_cpu.A);
label_8477:;
    /* $8477: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_84A6;
label_8479:;
    /* $8479: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x7B; g_cpu.S--; func_8563_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8479, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_847C:;
    /* $847C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_84A6;
label_847E:;
    /* $847E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; func_855A_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x847E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8481:;
    /* $8481: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8482:;
    /* $8482: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8483:;
    /* $8483: 9D */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8486:;
    /* $8486: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8487:;
    /* $8487: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x6AF5 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_848A:;
    /* $848A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xEF; g_cpu.C=(g_cpu.A>=0xEF)?1:0; FLAG_NZ(r&0xFF); }
label_848C:;
    /* $848C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_849D;
label_848E:;
    /* $848E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFC); FLAG_NZ(g_cpu.A);
label_8490:;
    /* $8490: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8497;
label_8492:;
    /* $8492: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x94; g_cpu.S--; func_8563_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8492, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8495:;
    /* $8495: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_849D;
label_8497:;
    /* $8497: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0400 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_849A:;
    /* $849A: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_849B:;
    /* $849B: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_84A6;
label_849D:;
    /* $849D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_84A0:;
    /* $84A0: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_84A5;
label_84A2:;
    /* $84A2: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x6B01 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_84A5:;
    /* $84A5: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_84A6:;
    /* $84A6: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_80FB_b4_body(int _entry) {
    switch (_entry) {
        case 1: goto label_812F;
    }
label_80FB:;
    /* $80FB: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_80FD:;
    /* $80FD: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8133;
label_80FF:;
    /* $80FF: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8102:;
    /* $8102: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_810A;
label_8104:;
    /* $8104: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x06; g_cpu.S--; func_81FC_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8104, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8107:;
    /* $8107: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_812F_b4(); return;
label_810A:;
    /* $810A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0C; g_cpu.S--; func_80B0_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x810A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_810D:;
    /* $810D: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_8123;
label_810F:;
    /* $810F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6B03 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8112:;
    /* $8112: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8104;
    }
label_8114:;
    /* $8114: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_8120;
label_8116:;
    /* $8116: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8117:;
    /* $8117: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0x0402 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_811A:;
    /* $811A: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0x0406 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_811D:;
    /* $811D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_812F_b4(); return;
label_8120:;
    /* $8120: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x22; g_cpu.S--; func_81B1_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8120, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8123:;
    /* $8123: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x977B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8126:;
    /* $8126: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8127:;
    /* $8127: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8128:;
    /* $8128: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_812F;
label_812A:;
    /* $812A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_812C:;
    /* $812C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2E; g_cpu.S--; func_856B_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x812C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_812F:;
    /* $812F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8131:;
    /* $8131: 85 */ maybe_trigger_vblank(3); nes_write(0x66, g_cpu.A);
label_8133:;
    /* $8133: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_80FB_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80FB_b4");
#endif
    func_80FB_b4_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_812F_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_812F_b4");
#endif
    func_80FB_b4_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_84A7_b4_body(int _entry) {
    switch (_entry) {
        case 1: goto label_84FD;
    }
label_84A7:;
    /* $84A7: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_84A9:;
    /* $84A9: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0401 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_84AC:;
    /* $84AC: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_84AD:;
    /* $84AD: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x6AF6 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_84B0:;
    /* $84B0: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_84B2:;
    /* $84B2: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_84B3:;
    /* $84B3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_84B8;
label_84B5:;
    /* $84B5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; func_E8F1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x84B5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_84B8:;
    /* $84B8: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_84BA:;
    /* $84BA: 84 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.Y);
label_84BC:;
    /* $84BC: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_84BE:;
    /* $84BE: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_84FD;
label_84C0:;
    /* $84C0: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_84C2:;
    /* $84C2: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0401 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_84C5:;
    /* $84C5: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_84DA;
label_84C7:;
    /* $84C7: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x49); FLAG_NZ(g_cpu.A);
label_84C9:;
    /* $84C9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_84CB:;
    /* $84CB: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_84DA;
label_84CD:;
    /* $84CD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFD); FLAG_NZ(g_cpu.A);
label_84CF:;
    /* $84CF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_84D4;
label_84D1:;
    /* $84D1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD3; g_cpu.S--; func_8563_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x84D1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_84D4:;
    /* $84D4: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_84D5:;
    /* $84D5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_84FD;
label_84D7:;
    /* $84D7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD9; g_cpu.S--; func_855A_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x84D7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_84DA:;
    /* $84DA: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0401 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_84DD:;
    /* $84DD: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0401 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_84E0:;
    /* $84E0: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x6AF6 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_84E3:;
    /* $84E3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_84F4;
label_84E5:;
    /* $84E5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFD); FLAG_NZ(g_cpu.A);
label_84E7:;
    /* $84E7: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_84EE;
label_84E9:;
    /* $84E9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xEB; g_cpu.S--; func_8563_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x84E9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_84EC:;
    /* $84EC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_84F4;
label_84EE:;
    /* $84EE: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0401 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_84F1:;
    /* $84F1: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_84F2:;
    /* $84F2: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_84FD;
label_84F4:;
    /* $84F4: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_84F7:;
    /* $84F7: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_84FC;
label_84F9:;
    /* $84F9: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x6B01 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_84FC:;
    /* $84FC: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_84FD:;
    /* $84FD: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_84A7_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_84A7_b4");
#endif
    func_84A7_b4_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_84FD_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_84FD_b4");
#endif
    func_84A7_b4_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_816E_b4_body(int _entry) {
    switch (_entry) {
        case 1: goto label_81AC;
    }
label_816E:;
    /* $816E: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_8170:;
    /* $8170: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_81B0;
label_8172:;
    /* $8172: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x74; g_cpu.S--; func_80B0_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8172, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8175:;
    /* $8175: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_81A0;
label_8177:;
    /* $8177: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_817A:;
    /* $817A: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_8182;
label_817C:;
    /* $817C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x7E; g_cpu.S--; func_81C7_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x817C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_817F:;
    /* $817F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_81AC_b4(); return;
label_8182:;
    /* $8182: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6B03 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8185:;
    /* $8185: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_817C;
    }
label_8187:;
    /* $8187: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_818E;
label_8189:;
    /* $8189: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; func_81C0_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8189, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_818C:;
    /* $818C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8198;
label_818E:;
    /* $818E: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_818F:;
    /* $818F: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0x0403 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8192:;
    /* $8192: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0x0407 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8195:;
    /* $8195: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_81AC_b4(); return;
label_8198:;
    /* $8198: 9D */ maybe_trigger_vblank(5); nes_write((0x0403 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_819B:;
    /* $819B: 9D */ maybe_trigger_vblank(5); nes_write((0x0407 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_819E:;
    /* $819E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_81AC;
label_81A0:;
    /* $81A0: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA2; g_cpu.S--; func_80B0_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x81A0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_81A3:;
    /* $81A3: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_81A4:;
    /* $81A4: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_81A5:;
    /* $81A5: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_81AC;
label_81A7:;
    /* $81A7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_81A9:;
    /* $81A9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAB; g_cpu.S--; func_856B_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x81A9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_81AC:;
    /* $81AC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_81AE:;
    /* $81AE: 85 */ maybe_trigger_vblank(3); nes_write(0x66, g_cpu.A);
label_81B0:;
    /* $81B0: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_816E_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_816E_b4");
#endif
    func_816E_b4_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_81AC_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81AC_b4");
#endif
    func_816E_b4_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_84FE_b4_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8500;
    }
label_84FE:;
    /* $84FE: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_8500:;
    /* $8500: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0401 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8503:;
    /* $8503: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8504:;
    /* $8504: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x6AF6 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8507:;
    /* $8507: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_8509:;
    /* $8509: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_850A:;
    /* $850A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_850F;
label_850C:;
    /* $850C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x85; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0E; g_cpu.S--; func_E8FC();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x850C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_850F:;
    /* $850F: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_8511:;
    /* $8511: 84 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.Y);
label_8513:;
    /* $8513: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_8515:;
    /* $8515: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_8559;
label_8517:;
    /* $8517: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8519:;
    /* $8519: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0401 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_851C:;
    /* $851C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8536;
label_851E:;
    /* $851E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x49); FLAG_NZ(g_cpu.A);
label_8520:;
    /* $8520: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_8522:;
    /* $8522: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_8536;
label_8524:;
    /* $8524: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFD); FLAG_NZ(g_cpu.A);
label_8526:;
    /* $8526: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_852D;
label_8528:;
    /* $8528: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x85; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2A; g_cpu.S--; func_8563_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8528, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_852B:;
    /* $852B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8533;
label_852D:;
    /* $852D: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0401 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8530:;
    /* $8530: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8531:;
    /* $8531: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_8559;
label_8533:;
    /* $8533: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x85; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x35; g_cpu.S--; func_855A_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8533, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8536:;
    /* $8536: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0401 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8539:;
    /* $8539: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_853A:;
    /* $853A: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x6AF6 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_853D:;
    /* $853D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_853F:;
    /* $853F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8550;
label_8541:;
    /* $8541: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFD); FLAG_NZ(g_cpu.A);
label_8543:;
    /* $8543: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_854A;
label_8545:;
    /* $8545: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x85; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x47; g_cpu.S--; func_8563_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8545, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8548:;
    /* $8548: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8550;
label_854A:;
    /* $854A: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0401 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_854D:;
    /* $854D: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_854E:;
    /* $854E: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_8559;
label_8550:;
    /* $8550: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8553:;
    /* $8553: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_8558;
label_8555:;
    /* $8555: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x6B01 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8558:;
    /* $8558: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8559:;
    /* $8559: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_84FE_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_84FE_b4");
#endif
    func_84FE_b4_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8500_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8500_b4");
#endif
    func_84FE_b4_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8134_b4_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8169;
    }
label_8134:;
    /* $8134: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_8136:;
    /* $8136: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_816D;
label_8138:;
    /* $8138: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3A; g_cpu.S--; func_80B0_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8138, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_813B:;
    /* $813B: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_815E;
label_813D:;
    /* $813D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8140:;
    /* $8140: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_8148;
label_8142:;
    /* $8142: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x44; g_cpu.S--; func_81C7_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8142, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8145:;
    /* $8145: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8169_b4(); return;
label_8148:;
    /* $8148: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6B03 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_814B:;
    /* $814B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8142;
    }
label_814D:;
    /* $814D: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_8159;
label_814F:;
    /* $814F: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8150:;
    /* $8150: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0x0403 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8153:;
    /* $8153: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0x0407 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8156:;
    /* $8156: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8169_b4(); return;
label_8159:;
    /* $8159: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x5B; g_cpu.S--; func_81C0_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8159, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_815C:;
    /* $815C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8169;
label_815E:;
    /* $815E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x977B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8161:;
    /* $8161: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8162:;
    /* $8162: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_8169;
label_8164:;
    /* $8164: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8166:;
    /* $8166: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x68; g_cpu.S--; func_856B_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8166, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8169:;
    /* $8169: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_816B:;
    /* $816B: 85 */ maybe_trigger_vblank(3); nes_write(0x66, g_cpu.A);
label_816D:;
    /* $816D: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8134_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8134_b4");
#endif
    func_8134_b4_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8169_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8169_b4");
#endif
    func_8134_b4_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_80B0_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80B0_b4");
#endif
label_80B0:;
    /* $80B0: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x6B02 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_80B3:;
    /* $80B3: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x977B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_80B6:;
    /* $80B6: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_80B7:;
    /* $80B7: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_822B_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_822B_b4");
#endif
label_822B:;
    /* $822B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_822E:;
    /* $822E: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_8232;
label_8230:;
    /* $8230: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8231:;
    /* $8231: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8232:;
    /* $8232: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8233:;
    /* $8233: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0408 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8236:;
    /* $8236: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_8237:;
    /* $8237: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8238:;
    /* $8238: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8239:;
    /* $8239: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x96DB + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_823C:;
    /* $823C: 85 */ maybe_trigger_vblank(3); nes_write(0x81, g_cpu.A);
label_823E:;
    /* $823E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x96DC + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8241:;
    /* $8241: 85 */ maybe_trigger_vblank(3); nes_write(0x82, g_cpu.A);
label_8243:;
    /* $8243: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_81B1_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81B1_b4");
#endif
label_81B1:;
    /* $81B1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; func_81B8_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x81B1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_81B4:;
    /* $81B4: 9D */ maybe_trigger_vblank(5); nes_write((0x6AFE + g_cpu.X) & 0xFFFF, g_cpu.A);
label_81B7:;
    /* $81B7: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_95AE_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95AE_b4");
#endif
label_95AE:;
    /* $95AE: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_95B1_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95B1_b4");
#endif
label_95B1:;
    /* $95B1: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_95B4_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95B4_b4");
#endif
label_95B4:;
    /* $95B4: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_95B7_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95B7_b4");
#endif
label_95B7:;
    /* $95B7: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_95BA_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95BA_b4");
#endif
label_95BA:;
    /* $95BA: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_95E5_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95E5_b4");
#endif
label_95E5:;
    /* $95E5: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6B02 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_95E8:;
    /* $95E8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x95; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xEA; g_cpu.S--; func_8024_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x95E8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_95EB:;
    /* $95EB: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x3799 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_95EE:;
    /* $95EE: 99 */ maybe_trigger_vblank(5); nes_write((0x95CB + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_95F1:;
    /* $95F1: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x4999 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_95F4:;
    /* $95F4: 99 */ maybe_trigger_vblank(5); nes_write((0x999B + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_95F7:;
    /* $95F7: CB */ maybe_trigger_vblank(2); { uint8_t t=(uint8_t)(g_cpu.A & g_cpu.X); g_cpu.C=(t>=0x95)?1:0; g_cpu.X=(t-0x95)&0xFF; FLAG_NZ(g_cpu.X); }
label_95F9:;
    /* $95F9: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x9A); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_95FB:;
    /* $95FB: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x9A + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_95FD:;
    /* $95FD: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x9A); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_95FF:;
    /* $95FF: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xCB9B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_9602:;
    /* $9602: 95 */ maybe_trigger_vblank(4); nes_write((0xCB + g_cpu.X) & 0xFF, g_cpu.A);
label_9604:;
    /* $9604: 95 */ maybe_trigger_vblank(4); nes_write((0xCB + g_cpu.X) & 0xFF, g_cpu.A);
label_9606:;
    /* $9606: 95 */ maybe_trigger_vblank(4); nes_write((0xCB + g_cpu.X) & 0xFF, g_cpu.A);
label_9608:;
    /* $9608: 95 */ maybe_trigger_vblank(4); nes_write((0xCB + g_cpu.X) & 0xFF, g_cpu.A);
label_960A:;
    /* $960A: 95 */ maybe_trigger_vblank(4); nes_write((0x27 + g_cpu.X) & 0xFF, g_cpu.A);
label_960C:;
    /* $960C: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x29; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_960E:;
    /* $960E: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x2D; FLAG_NZ(g_cpu.A);
label_9610:;
    /* $9610: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x31; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_9612:;
    /* $9612: 2F */ maybe_trigger_vblank(6); { uint16_t a=0x3333; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_9615:;
    /* $9615: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x41 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9617:;
    /* $9617: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9618:;
    /* $9618: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9619:;
    /* $9619: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) goto label_9669;
label_961B:;
    /* $961B: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x006F); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_961E:;
    /* $961E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x961E); return;
label_961F:;
    /* $961F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x961F); return;
label_9620:;
    /* $9620: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9620); return;
label_9621:;
    /* $9621: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x64); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9623:;
    /* $9623: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x64); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9625:;
    /* $9625: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9625); return;
label_9626:;
    /* $9626: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9626); return;
label_9627:;
    /* $9627: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9627); return;
label_9628:;
    /* $9628: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9628); return;
label_9629:;
    /* $9629: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9629); return;
label_962A:;
    /* $962A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x962A); return;
label_962B:;
    /* $962B: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_962C:;
    /* $962C: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_962D:;
    /* $962D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x962D); return;
label_962E:;
    /* $962E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0202 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9631:;
    /* $9631: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9631); return;
label_9632:;
    /* $9632: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x60 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9634:;
    /* $9634: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x00FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9637:;
    /* $9637: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9637); return;
label_9638:;
    /* $9638: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9638); return;
label_9639:;
    /* $9639: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9639); return;
label_963A:;
    /* $963A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x963A); return;
label_963B:;
    /* $963B: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_963D:;
    /* $963D: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_963F:;
    /* $963F: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x13 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9641:;
    /* $9641: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x2319 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9644:;
    /* $9644: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x35 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_9646:;
    /* $9646: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x48 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9648:;
    /* $9648: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9649:;
    /* $9649: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x52 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_964B:;
    /* $964B: 67 */ maybe_trigger_vblank(5); { uint16_t a=0x6A; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_964D:;
    /* $964D: 56 */ maybe_trigger_vblank(6); { uint16_t a=(0x58 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_964F:;
    /* $964F: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x6462 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9652:;
    /* $9652: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x64); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9654:;
    /* $9654: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9656:;
    /* $9656: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9656); return;
label_9657:;
    /* $9657: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9657); return;
label_9658:;
    /* $9658: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9658); return;
label_9659:;
    /* $9659: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9659); return;
label_965A:;
    /* $965A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x965A); return;
label_965B:;
    /* $965B: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_965D:;
    /* $965D: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_965F:;
    /* $965F: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x13 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9661:;
    /* $9661: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x2319 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9664:;
    /* $9664: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x35 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_9666:;
    /* $9666: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x48 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9668:;
    /* $9668: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9669:;
    /* $9669: 4B */ maybe_trigger_vblank(2); g_cpu.A &= 0x48; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_966B:;
    /* $966B: 67 */ maybe_trigger_vblank(5); { uint16_t a=0x6A; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_966D:;
    /* $966D: 56 */ maybe_trigger_vblank(6); { uint16_t a=(0x58 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_966F:;
    /* $966F: 5A */ maybe_trigger_vblank(2); /* NOP */
label_9670:;
    /* $9670: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x6464 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9673:;
    /* $9673: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x64); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9675:;
    /* $9675: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9675); return;
}

void func_95A8_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95A8_b4");
#endif
label_95A8:;
    /* $95A8: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9C49_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9C49_b4");
#endif
label_9C49:;
    /* $9C49: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8B74_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8B74_b4");
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

void func_8B53_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8B53_b4");
#endif
label_8B53:;
    /* $8B53: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8B54:;
    /* $8B54: 85 */ maybe_trigger_vblank(3); nes_write(0x57, g_cpu.A);
label_8B56:;
    /* $8B56: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x58; g_cpu.S--; func_8B74_b4();
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

void func_8B87_b4_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8B9D;
        case 2: goto label_8BB1;
    }
label_8B87:;
    /* $8B87: 86 */ maybe_trigger_vblank(3); nes_write(0x4B, g_cpu.X);
label_8B89:;
    /* $8B89: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8B8C:;
    /* $8B8C: 20 */ maybe_trigger_vblank(6); /* inline_dispatch $C27C: 7 entries (bank=4) */
switch(g_cpu.A) {
  case 0: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x5C); nes_write(0x000D, 0xC4); g_cpu.A = 0xC4; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_C45C(); return;
  case 1: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x9D); nes_write(0x000D, 0x8B); g_cpu.A = 0x8B; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_8B9D_b4(); return;
  case 2: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xD5); nes_write(0x000D, 0x8B); g_cpu.A = 0x8B; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_8BD5_b4(); return;
  case 3: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x01); nes_write(0x000D, 0x8C); g_cpu.A = 0x8C; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_8C01_b4(); return;
  case 4: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x84); nes_write(0x000D, 0x8C); g_cpu.A = 0x8C; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_8C84_b4(); return;
  case 5: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xC6); nes_write(0x000D, 0x8C); g_cpu.A = 0x8C; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_8CC6_b4(); return;
  case 6: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xF0); nes_write(0x000D, 0x8C); g_cpu.A = 0x8C; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_8CF0_b4(); return;
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
    /* $8BA5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA7; g_cpu.S--; func_8CFB_b4();
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

void func_8B87_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8B87_b4");
#endif
    func_8B87_b4_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8B9D_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8B9D_b4");
#endif
    func_8B87_b4_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8BB1_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8BB1_b4");
#endif
    func_8B87_b4_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8563_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8563_b4");
#endif
label_8563:;
    /* $8563: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AFB + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8566:;
    /* $8566: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_8568:;
    /* $8568: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_856A:;
    /* $856A: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_855A_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_855A_b4");
#endif
label_855A:;
    /* $855A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AFB + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_855D:;
    /* $855D: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x01; FLAG_NZ(g_cpu.A);
label_855F:;
    /* $855F: 9D */ maybe_trigger_vblank(5); nes_write((0x6AFB + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8562:;
    /* $8562: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_81FC_b4_body(int _entry) {
    switch (_entry) {
        case 1: goto label_820F;
        case 2: goto label_8206;
    }
label_81FC:;
    /* $81FC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFE; g_cpu.S--; func_81F6_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x81FC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_81FF:;
    /* $81FF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0x81F5); return; }
label_8201:;
    /* $8201: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_8203:;
    /* $8203: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x05; g_cpu.S--; func_856B_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8203, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8206:;
    /* $8206: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AFE + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8209:;
    /* $8209: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0B; g_cpu.S--; func_C3D4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8209, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_820C:;
    /* $820C: 9D */ maybe_trigger_vblank(5); nes_write((0x6AFE + g_cpu.X) & 0xFFFF, g_cpu.A);
label_820F:;
    /* $820F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x11; g_cpu.S--; func_81F6_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x820F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8212:;
    /* $8212: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_822A;
label_8214:;
    /* $8214: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x16; g_cpu.S--; func_80B0_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8214, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8217:;
    /* $8217: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8218:;
    /* $8218: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_8222;
label_821A:;
    /* $821A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_821C:;
    /* $821C: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0406 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_821F:;
    /* $821F: 9D */ maybe_trigger_vblank(5); nes_write((0x0406 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8222:;
    /* $8222: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8224:;
    /* $8224: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0402 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8227:;
    /* $8227: 9D */ maybe_trigger_vblank(5); nes_write((0x0402 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_822A:;
    /* $822A: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_81FC_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81FC_b4");
#endif
    func_81FC_b4_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_820F_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_820F_b4");
#endif
    func_81FC_b4_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8206_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8206_b4");
#endif
    func_81FC_b4_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_856B_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_856B_b4");
#endif
label_856B:;
    /* $856B: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_856E:;
    /* $856E: 9D */ maybe_trigger_vblank(5); nes_write((0x0405 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8571:;
    /* $8571: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_81C7_b4_body(int _entry) {
    switch (_entry) {
        case 1: goto label_81DA;
        case 2: goto label_81D1;
        case 3: goto label_81F5;
    }
label_81C7:;
    /* $81C7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC9; g_cpu.S--; func_81F6_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x81C7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_81CA:;
    /* $81CA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_81F5;
label_81CC:;
    /* $81CC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_81CE:;
    /* $81CE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD0; g_cpu.S--; func_856B_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x81CE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_81D1:;
    /* $81D1: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_81D4:;
    /* $81D4: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD6; g_cpu.S--; func_C3D4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x81D4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_81D7:;
    /* $81D7: 9D */ maybe_trigger_vblank(5); nes_write((0x6AFF + g_cpu.X) & 0xFFFF, g_cpu.A);
label_81DA:;
    /* $81DA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDC; g_cpu.S--; func_81F6_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x81DA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_81DD:;
    /* $81DD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_81F5;
label_81DF:;
    /* $81DF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE1; g_cpu.S--; func_80B0_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x81DF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_81E2:;
    /* $81E2: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_81E3:;
    /* $81E3: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_81ED;
label_81E5:;
    /* $81E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_81E7:;
    /* $81E7: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0407 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_81EA:;
    /* $81EA: 9D */ maybe_trigger_vblank(5); nes_write((0x0407 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_81ED:;
    /* $81ED: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_81EF:;
    /* $81EF: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0403 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_81F2:;
    /* $81F2: 9D */ maybe_trigger_vblank(5); nes_write((0x0403 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_81F5:;
    /* $81F5: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_81C7_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81C7_b4");
#endif
    func_81C7_b4_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_81DA_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81DA_b4");
#endif
    func_81C7_b4_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_81D1_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81D1_b4");
#endif
    func_81C7_b4_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_81F5_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81F5_b4");
#endif
    func_81C7_b4_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_81C0_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81C0_b4");
#endif
label_81C0:;
    /* $81C0: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC2; g_cpu.S--; func_81B8_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x81C0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_81C3:;
    /* $81C3: 9D */ maybe_trigger_vblank(5); nes_write((0x6AFF + g_cpu.X) & 0xFFFF, g_cpu.A);
label_81C6:;
    /* $81C6: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_81B8_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81B8_b4");
#endif
label_81B8:;
    /* $81B8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_81BA:;
    /* $81BA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; func_F744();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x81BA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_81BD:;
    /* $81BD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_81BF:;
    /* $81BF: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A29E_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A29E_b4");
#endif
label_A29E:;
    /* $A29E: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0xA2A7 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A2A1:;
    /* $A2A1: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_A2A3:;
    /* $A2A3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A2A4:;
    /* $A2A4: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x47; FLAG_NZ(g_cpu.A);
label_A2A6:;
    /* $A2A6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA2A6); return;
}

void func_8024_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8024_b4");
#endif
label_8024:;
    /* $8024: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_C27C(); return;
}

void func_81F6_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81F6_b4");
#endif
label_81F6:;
    /* $81F6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF8; g_cpu.S--; func_F74B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x81F6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_81F9:;
    /* $81F9: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_81FB:;
    /* $81FB: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_95C0_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95C0_b4");
#endif
label_95C0:;
    /* $95C0: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8420_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8420_b4");
#endif
label_8420:;
    /* $8420: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_8422:;
    /* $8422: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x85 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8424:;
    /* $8424: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_844A;
label_8426:;
    /* $8426: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x28; g_cpu.S--; func_855A_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8426, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8429:;
    /* $8429: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_842A:;
    /* $842A: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_842B:;
    /* $842B: 9D */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_842E:;
    /* $842E: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x6AF5 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8431:;
    /* $8431: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8441;
label_8433:;
    /* $8433: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFC); FLAG_NZ(g_cpu.A);
label_8435:;
    /* $8435: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_843C;
label_8437:;
    /* $8437: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x39; g_cpu.S--; func_8563_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8437, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_843A:;
    /* $843A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8441;
label_843C:;
    /* $843C: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0400 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_843F:;
    /* $843F: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8440:;
    /* $8440: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8441:;
    /* $8441: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8444:;
    /* $8444: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_8449;
label_8446:;
    /* $8446: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x6B01 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8449:;
    /* $8449: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_844A:;
    /* $844A: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8BD5_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8BD5_b4");
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
    /* $8BDF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0x8BB1); return; }
label_8BE1:;
    /* $8BE1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8BE3:;
    /* $8BE3: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0307 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8BE6:;
    /* $8BE6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8BEE;
label_8BE8:;
    /* $8BE8: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x010B); FLAG_NZ(g_cpu.Y);
label_8BEB:;
    /* $8BEB: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8BEC:;
    /* $8BEC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0x8BB1); return; }
label_8BEE:;
    /* $8BEE: 9D */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8BF1:;
    /* $8BF1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x50; FLAG_NZ(g_cpu.A);
label_8BF3:;
    /* $8BF3: 9D */ maybe_trigger_vblank(5); nes_write((0x030F + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8BF6:;
    /* $8BF6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x2C; FLAG_NZ(g_cpu.A);
label_8BF8:;
    /* $8BF8: 9D */ maybe_trigger_vblank(5); nes_write((0x0305 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8BFB:;
    /* $8BFB: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8BFC:;
    /* $8BFC: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x03; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8BFE:;
    /* $8BFE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8C7E_b4(); return;
}

void func_8C01_b4_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8C71;
        case 2: goto label_8C61;
    }
label_8C01:;
    /* $8C01: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x56); FLAG_NZ(g_cpu.A);
label_8C03:;
    /* $8C03: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8C1D;
label_8C05:;
    /* $8C05: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x030C); FLAG_NZ(g_cpu.A);
label_8C08:;
    /* $8C08: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x030C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8C0B:;
    /* $8C0B: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8C0C:;
    /* $8C0C: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8C1D;
label_8C0E:;
    /* $8C0E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x030E); FLAG_NZ(g_cpu.A);
label_8C11:;
    /* $8C11: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x030E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8C14:;
    /* $8C14: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_8C1D;
label_8C16:;
    /* $8C16: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_8C18:;
    /* $8C18: 9D */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8C1B:;
    /* $8C1B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8C73;
label_8C1D:;
    /* $8C1D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0306 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8C20:;
    /* $8C20: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0305 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8C23:;
    /* $8C23: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_8C73;
label_8C25:;
    /* $8C25: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x030F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8C28:;
    /* $8C28: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x50; g_cpu.C=(g_cpu.A>=0x50)?1:0; FLAG_NZ(r&0xFF); }
label_8C2A:;
    /* $8C2A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8C57;
label_8C2C:;
    /* $8C2C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2E; g_cpu.S--; func_8CF7_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8C2C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8C2F:;
    /* $8C2F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0307 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8C32:;
    /* $8C32: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_8C34:;
    /* $8C34: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8C57;
label_8C36:;
    /* $8C36: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_8C38:;
    /* $8C38: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8C57;
label_8C3A:;
    /* $8C3A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_8C3C:;
    /* $8C3C: 85 */ maybe_trigger_vblank(3); nes_write(0x09, g_cpu.A);
label_8C3E:;
    /* $8C3E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x030C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8C41:;
    /* $8C41: 85 */ maybe_trigger_vblank(3); nes_write(0x08, g_cpu.A);
label_8C43:;
    /* $8C43: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x50); FLAG_NZ(g_cpu.Y);
label_8C45:;
    /* $8C45: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8C46:;
    /* $8C46: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x48; g_cpu.S--; func_C2C5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8C46, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8C49:;
    /* $8C49: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_8C4C;
label_8C4B:;
    /* $8C4B: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8C4C:;
    /* $8C4C: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8C4D:;
    /* $8C4D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x4F; g_cpu.S--; func_DC1E();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8C4D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8C50:;
    /* $8C50: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8C52:;
    /* $8C52: 9D */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8C55:;
    /* $8C55: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8C73;
label_8C57:;
    /* $8C57: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_8C59:;
    /* $8C59: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8C5A:;
    /* $8C5A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8C73;
label_8C5C:;
    /* $8C5C: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x030F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C5F:;
    /* $8C5F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8C73;
label_8C61:;
    /* $8C61: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8C63:;
    /* $8C63: 9D */ maybe_trigger_vblank(5); nes_write((0x030F + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8C66:;
    /* $8C66: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x68; g_cpu.S--; func_8CFB_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8C66, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8C69:;
    /* $8C69: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_8C6B:;
    /* $8C6B: 9D */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8C6E:;
    /* $8C6E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x70; g_cpu.S--; func_8C76_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8C6E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8C71:;
    /* $8C71: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_8C73:;
    /* $8C73: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8BB1_b4(); return;
}

void func_8C01_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C01_b4");
#endif
    func_8C01_b4_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8C71_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C71_b4");
#endif
    func_8C01_b4_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8C61_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C61_b4");
#endif
    func_8C01_b4_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8C84_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C84_b4");
#endif
label_8C84:;
    /* $8C84: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x56); FLAG_NZ(g_cpu.A);
label_8C86:;
    /* $8C86: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_8C88:;
    /* $8C88: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8CC3;
label_8C8A:;
    /* $8C8A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; func_8CFB_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8C8A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8C8D:;
    /* $8C8D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; func_8C76_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8C8D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8C90:;
    /* $8C90: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_8C92:;
    /* $8C92: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x91); FLAG_NZ(g_cpu.A);
label_8C94:;
    /* $8C94: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8CA7;
label_8C96:;
    /* $8C96: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8C97:;
    /* $8C97: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; func_C2BF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8C97, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8C9A:;
    /* $8C9A: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x91); FLAG_NZ(g_cpu.A);
label_8C9C:;
    /* $8C9C: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8C9D:;
    /* $8C9D: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_8CA7;
label_8C9F:;
    /* $8C9F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x76); FLAG_NZ(g_cpu.A);
label_8CA1:;
    /* $8CA1: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x07; FLAG_NZ(g_cpu.A);
label_8CA3:;
    /* $8CA3: 85 */ maybe_trigger_vblank(3); nes_write(0x76, g_cpu.A);
label_8CA5:;
    /* $8CA5: 85 */ maybe_trigger_vblank(3); nes_write(0x1C, g_cpu.A);
label_8CA7:;
    /* $8CA7: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8CAA:;
    /* $8CAA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8CAC:;
    /* $8CAC: 85 */ maybe_trigger_vblank(3); nes_write(0x91, g_cpu.A);
label_8CAE:;
    /* $8CAE: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0307 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8CB1:;
    /* $8CB1: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_8CB3:;
    /* $8CB3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8CC3;
label_8CB5:;
    /* $8CB5: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8CB6:;
    /* $8CB6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; func_C2C5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8CB6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8CB9:;
    /* $8CB9: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8CC0;
label_8CBB:;
    /* $8CBB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBD; g_cpu.S--; func_CC07();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8CBB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8CBE:;
    /* $8CBE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8CC3;
label_8CC0:;
    /* $8CC0: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC2; g_cpu.S--; func_CC03();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8CC0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8CC3:;
    /* $8CC3: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8C71_b4(); return;
}

void func_8CC6_b4_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8CED;
        case 2: goto label_8CCF;
    }
label_8CC6:;
    /* $8CC6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x56); FLAG_NZ(g_cpu.A);
label_8CC8:;
    /* $8CC8: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_8CCA:;
    /* $8CCA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8CED;
label_8CCC:;
    /* $8CCC: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8CCD:;
    /* $8CCD: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x10; FLAG_NZ(g_cpu.A);
label_8CCF:;
    /* $8CCF: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8CD0:;
    /* $8CD0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_8CD2:;
    /* $8CD2: 9D */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8CD5:;
    /* $8CD5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x2C; FLAG_NZ(g_cpu.A);
label_8CD7:;
    /* $8CD7: 9D */ maybe_trigger_vblank(5); nes_write((0x0305 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8CDA:;
    /* $8CDA: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8CDB:;
    /* $8CDB: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x03; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8CDD:;
    /* $8CDD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDF; g_cpu.S--; func_D2FD();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8CDD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8CE0:;
    /* $8CE0: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE2; g_cpu.S--; func_CBDA();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8CE0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8CE3:;
    /* $8CE3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE5; g_cpu.S--; func_CB73();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8CE3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8CE6:;
    /* $8CE6: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_8CE8:;
    /* $8CE8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_8CEA:;
    /* $8CEA: 9D */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8CED:;
    /* $8CED: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8BB1_b4(); return;
}

void func_8CC6_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8CC6_b4");
#endif
    func_8CC6_b4_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8CED_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8CED_b4");
#endif
    func_8CC6_b4_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8CCF_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8CCF_b4");
#endif
    func_8CC6_b4_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8CF0_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8CF0_b4");
#endif
label_8CF0:;
    /* $8CF0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x56); FLAG_NZ(g_cpu.A);
label_8CF2:;
    /* $8CF2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0x8CED); return; }
label_8CF4:;
    /* $8CF4: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8C61_b4(); return;
}

void func_95BD_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95BD_b4");
#endif
label_95BD:;
    /* $95BD: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8CF7_b4_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8CFB;
    }
label_8CF7:;
    /* $8CF7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_8CF9:;
    /* $8CF9: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8CFD;
label_8CFB:;
    /* $8CFB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x4E; FLAG_NZ(g_cpu.A);
label_8CFD:;
    /* $8CFD: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_8CFE:;
    /* $8CFE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x50; FLAG_NZ(g_cpu.A);
label_8D00:;
    /* $8D00: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_8D02:;
    /* $8D02: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8D03:;
    /* $8D03: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8D; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x05; g_cpu.S--; func_C2BF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8D03, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8D06:;
    /* $8D06: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_8D08:;
    /* $8D08: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8D09:;
    /* $8D09: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8D3A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8D0C:;
    /* $8D0C: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_8D0E:;
    /* $8D0E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x030C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8D11:;
    /* $8D11: 85 */ maybe_trigger_vblank(3); nes_write(0x0B, g_cpu.A);
label_8D13:;
    /* $8D13: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8D; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x15; g_cpu.S--; func_E96A();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8D13, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8D16:;
    /* $8D16: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_8D18:;
    /* $8D18: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8D19:;
    /* $8D19: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x04) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8D1B:;
    /* $8D1B: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8D1C:;
    /* $8D1C: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8D1D:;
    /* $8D1D: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8D1E:;
    /* $8D1E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_8D20:;
    /* $8D20: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8D21:;
    /* $8D21: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8D22:;
    /* $8D22: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0xC0; g_cpu.C=(g_cpu.Y>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_8D24:;
    /* $8D24: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8D19;
    }
label_8D26:;
    /* $8D26: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_8D28:;
    /* $8D28: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8D29:;
    /* $8D29: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8D; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2B; g_cpu.S--; func_C2C0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8D29, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8D2C:;
    /* $8D2C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x06; FLAG_NZ(g_cpu.A);
label_8D2E:;
    /* $8D2E: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8D2F:;
    /* $8D2F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x04); FLAG_NZ(g_cpu.A);
label_8D31:;
    /* $8D31: 99 */ maybe_trigger_vblank(5); nes_write((0x005C + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8D34:;
    /* $8D34: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x05); FLAG_NZ(g_cpu.A);
label_8D36:;
    /* $8D36: 99 */ maybe_trigger_vblank(5); nes_write((0x005D + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8D39:;
    /* $8D39: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8CF7_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8CF7_b4");
#endif
    func_8CF7_b4_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8CFB_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8CFB_b4");
#endif
    func_8CF7_b4_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8C76_b4_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8C7E;
    }
label_8C76:;
    /* $8C76: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x30; FLAG_NZ(g_cpu.A);
label_8C78:;
    /* $8C78: 9D */ maybe_trigger_vblank(5); nes_write((0x0305 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8C7B:;
    /* $8C7B: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8C7C:;
    /* $8C7C: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x02; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8C7E:;
    /* $8C7E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; func_D2FD();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8C7E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8C81:;
    /* $8C81: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_CBDA(); return;
}

void func_8C76_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C76_b4");
#endif
    func_8C76_b4_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8C7E_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C7E_b4");
#endif
    func_8C76_b4_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B0E7_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B0E7_b4");
#endif
label_B0E7:;
    /* $B0E7: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B0EA:;
    /* $B0EA: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_B0EB:;
    /* $B0EB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xED; g_cpu.S--; func_BB22_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB0EB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B0EE:;
    /* $B0EE: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B0EF:;
    /* $B0EF: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x2226 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B0F2:;
    /* $B0F2: 26 */ maybe_trigger_vblank(5); { uint16_t a=0xBB; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B0F4:;
    /* $B0F4: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B0F5:;
    /* $B0F5: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x2628 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B0F8:;
    /* $B0F8: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_B0F9:;
    /* $B0F9: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B0FC:;
    /* $B0FC: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C28); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_B0FF:;
    /* $B0FF: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B102:;
    /* $B102: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_B103:;
    /* $B103: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x05; g_cpu.S--; func_BB22_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB103, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B106:;
    /* $B106: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B107:;
    /* $B107: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x2220 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B10A:;
    /* $B10A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0C; g_cpu.S--; if (!nes_dispatch_call(0x02BB, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB10A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B10D:;
    /* $B10D: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x1C22 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B110:;
    /* $B110: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_B111:;
    /* $B111: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B114:;
    /* $B114: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1C22 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B117:;
    /* $B117: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B11A:;
    /* $B11A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0xB0CE); return; }
label_B11C:;
    /* $B11C: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x3EB9 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B11F:;
    /* $B11F: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0xBB3E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B122:;
    /* $B122: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B123:;
    /* $B123: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xB2C2 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B126:;
    /* $B126: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B127:;
    /* $B127: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x122A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B12A:;
    /* $B12A: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B12B:;
    /* $B12B: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B12E:;
    /* $B12E: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B12F:;
    /* $B12F: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B130:;
    /* $B130: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B131:;
    /* $B131: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x2A2A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B134:;
    /* $B134: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B135:;
    /* $B135: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B138:;
    /* $B138: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B139:;
    /* $B139: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B13A:;
    /* $B13A: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B13B:;
    /* $B13B: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x2A2A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B13E:;
    /* $B13E: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B13F:;
    /* $B13F: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B142:;
    /* $B142: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B143:;
    /* $B143: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B144:;
    /* $B144: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B145:;
    /* $B145: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B146:;
    /* $B146: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B147:;
    /* $B147: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x122A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B14A:;
    /* $B14A: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B14B:;
    /* $B14B: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B14E:;
    /* $B14E: 26 */ maybe_trigger_vblank(5); { uint16_t a=0xB9; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B150:;
    /* $B150: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x2626; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B153:;
    /* $B153: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B156:;
    /* $B156: 26 */ maybe_trigger_vblank(5); { uint16_t a=0xB9; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B158:;
    /* $B158: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x2626; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B15B:;
    /* $B15B: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B15E:;
    /* $B15E: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_B15F:;
    /* $B15F: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x220A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B162:;
    /* $B162: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_B163:;
    /* $B163: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B166:;
    /* $B166: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_B167:;
    /* $B167: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x220A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B16A:;
    /* $B16A: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_B16B:;
    /* $B16B: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B16E:;
    /* $B16E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x70; g_cpu.S--; func_B920_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB16E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B171:;
    /* $B171: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x73; g_cpu.S--; if (!nes_dispatch_call(0x2020, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB171, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B174:;
    /* $B174: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B177:;
    /* $B177: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x79; g_cpu.S--; if (!nes_dispatch_call(0x34B9, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB177, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B17A:;
    /* $B17A: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_B1B0;
label_B17C:;
    /* $B17C: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B17F:;
    /* $B17F: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_B180:;
    /* $B180: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x38 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B182:;
    /* $B182: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B185:;
    /* $B185: 3A */ maybe_trigger_vblank(2); /* NOP */
label_B186:;
    /* $B186: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_B187:;
    /* $B187: 3A */ maybe_trigger_vblank(2); /* NOP */
label_B188:;
    /* $B188: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B18B:;
    /* $B18B: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x3E3A + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B18E:;
    /* $B18E: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B191:;
    /* $B191: C2 */ maybe_trigger_vblank(2); /* NOP */
label_B193:;
    /* $B193: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B194:;
    /* $B194: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { call_by_address(0xB1AE); return; }
label_B196:;
    /* $B196: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_B1B0;
label_B198:;
    /* $B198: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { call_by_address(0xB1B2); return; }
label_B19A:;
    /* $B19A: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_B1BE;
label_B19C:;
    /* $B19C: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_B19D:;
    /* $B19D: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x22) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B19F:;
    /* $B19F: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_B1A0:;
    /* $B1A0: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B1A1:;
    /* $B1A1: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_B1A2:;
    /* $B1A2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA4; g_cpu.S--; if (!nes_dispatch_call(0x181C, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB1A2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B1A5:;
    /* $B1A5: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x14 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B1A7:;
    /* $B1A7: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x14 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B1A9:;
    /* $B1A9: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2A2A); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_B1AC:;
    /* $B1AC: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x2A2A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1AF:;
    /* $B1AF: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B1B0:;
    /* $B1B0: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B1B3:;
    /* $B1B3: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B1B4:;
    /* $B1B4: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_B1B5:;
    /* $B1B5: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_B1B6:;
    /* $B1B6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x2828 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1B9:;
    /* $B1B9: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_B1BA:;
    /* $B1BA: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B1BB:;
    /* $B1BB: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_B1BC:;
    /* $B1BC: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x26; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B1BE:;
    /* $B1BE: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x2626 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1C1:;
    /* $B1C1: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x02BB + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B1C4:;
    /* $B1C4: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x2626 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1C7:;
    /* $B1C7: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x02BB + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B1CA:;
    /* $B1CA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xB2D0 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B1CD:;
    /* $B1CD: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x04 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B1CF:;
    /* $B1CF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xB2C8 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B1D2:;
    /* $B1D2: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B1D4:;
    /* $B1D4: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x04; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B1D6:;
    /* $B1D6: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B1D8:;
    /* $B1D8: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xB9; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B1DA:;
    /* $B1DA: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B1DC:;
    /* $B1DC: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xBB); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B1DE:;
    /* $B1DE: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFF + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B1E0:;
    /* $B1E0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B194;
    }
label_B1E2:;
    /* $B1E2: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x07); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B1E4:;
    /* $B1E4: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xB9); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B1E6:;
    /* $B1E6: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x04; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B1E8:;
    /* $B1E8: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xBB); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B1EA:;
    /* $B1EA: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFF + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B1EC:;
    /* $B1EC: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xBA; g_cpu.C=(g_cpu.X>=0xBA)?1:0; FLAG_NZ(r&0xFF); }
label_B1EE:;
    /* $B1EE: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B1EF:;
    /* $B1EF: 1A */ maybe_trigger_vblank(2); /* NOP */
label_B1F0:;
    /* $B1F0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B1F1:;
    /* $B1F1: 3A */ maybe_trigger_vblank(2); /* NOP */
label_B1F2:;
    /* $B1F2: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
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
label_B717:; return;
label_B719:; return;
label_B71B:; return;
label_B71D:; return;
label_B720:; return;
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
label_B76C:; return;
label_B76F:; return;
label_B771:; return;
label_B773:; return;
label_B775:; return;
label_B777:; return;
label_B779:; return;
label_B77B:; return;
label_B77D:; return;
label_B77F:; return;
label_B782:; return;
label_B783:; return;
label_B785:; return;
label_B788:; return;
label_B78A:; return;
label_B78D:; return;
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
label_B7B1:; return;
label_B7B4:; return;
label_B7B6:; return;
label_B7B9:; return;
label_B7BC:; return;
label_B7BF:; return;
label_B7C2:; return;
label_B7C4:; return;
label_B7C7:; return;
label_B7CA:; return;
label_B7CC:; return;
label_B7CD:; return;
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
label_B8C6:; return;
label_B8C8:; return;
label_B8CB:; return;
label_B8CE:; return;
label_B8D0:; return;
label_B8D3:; return;
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
label_BC83:; return;
label_BC85:; return;
label_BC88:; return;
label_BC8B:; return;
label_BC8D:; return;
label_BC90:; return;
label_BC91:; return;
label_BC93:; return;
label_BC94:; return;
label_BC97:; return;
label_BC98:; return;
label_BC9A:; return;
label_BC9D:; return;
label_BC9E:; return;
label_BCA1:; return;
label_BCA3:; return;
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
label_BE1E:; return;
label_BE20:; return;
label_BE21:; return;
label_BE24:; return;
label_BE26:; return;
label_BE27:; return;
label_BE29:; return;
label_BE2A:; return;
label_BE2B:; return;
label_BE2E:; return;
label_BE2F:; return;
label_BE32:; return;
label_BE34:; return;
label_BE36:; return;
label_BE39:; return;
label_BE3C:; return;
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
label_BEA3:; return;
label_BEA4:; return;
label_BEA6:; return;
label_BEA9:; return;
label_BEAA:; return;
label_BEAB:; return;
label_BEAD:; return;
label_BEAF:; return;
label_BEB1:; return;
label_BEB3:; return;
label_BEB5:; return;
label_BEB7:; return;
label_BEB9:; return;
label_BEBB:; return;
label_BEBD:; return;
label_BEBF:; return;
label_BEC1:; return;
label_BEC3:; return;
label_BEC4:; return;
label_BEC7:; return;
label_BEC8:; return;
label_BECA:; return;
label_BECC:; return;
label_BECF:; return;
label_BED0:; return;
label_BED1:; return;
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
}

void func_A903_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A903_b4");
#endif
label_A903:;
    /* $A903: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A905:;
    /* $A905: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x03); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A907:;
    /* $A907: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0012; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A90A:;
    /* $A90A: D1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A90C:;
    /* $A90C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A90D:;
    /* $A90D: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x24) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A90F:;
    /* $A90F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xDC + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A911:;
    /* $A911: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA911); return;
}

void func_A820_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A820_b4");
#endif
label_A820:;
    /* $A820: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x8C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A822:;
    /* $A822: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x03) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A824:;
    /* $A824: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x1C) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A826:;
    /* $A826: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A828:;
    /* $A828: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x03) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A82A:;
    /* $A82A: C1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x1C + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A82C:;
    /* $A82C: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC4 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A82E:;
    /* $A82E: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x03) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A830:;
    /* $A830: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A831:;
    /* $A831: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x03) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A833:;
    /* $A833: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0313); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A836:;
    /* $A836: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA002 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A839:;
    /* $A839: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A83A:;
    /* $A83A: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x31) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A83C:;
    /* $A83C: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x68 + g_cpu.X) & 0xFF), g_cpu.A);
label_A83E:;
    /* $A83E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0000 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A841:;
    /* $A841: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x0401 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A844:;
    /* $A844: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0701 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A847:;
    /* $A847: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A849:;
    /* $A849: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x011F); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A84C:;
    /* $A84C: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address(0xA85A); return; }
label_A84E:;
    /* $A84E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA84E); return;
label_A84F:; return;
label_A851:; return;
label_A853:; return;
label_A855:; return;
label_A856:; return;
label_A859:; return;
label_A85C:; return;
label_A85E:; return;
label_A85F:; return;
label_A861:; return;
label_A863:; return;
label_A864:; return;
label_A867:; return;
label_A869:; return;
label_A86A:; return;
label_A86C:; return;
label_A86D:; return;
label_A870:; return;
label_A873:; return;
label_A875:; return;
label_A876:; return;
label_A878:; return;
label_A87A:; return;
label_A87C:; return;
label_A87E:; return;
label_A880:; return;
label_A882:; return;
label_A883:; return;
label_A885:; return;
label_A888:; return;
label_A88B:; return;
label_A88C:; return;
label_A88E:; return;
label_A891:; return;
label_A893:; return;
label_A894:; return;
label_A896:; return;
label_A897:; return;
label_A89A:; return;
label_A89D:; return;
label_A89E:; return;
label_A8A0:; return;
label_A8A2:; return;
label_A8A5:; return;
label_A8A7:; return;
label_A8A8:; return;
label_A8AA:; return;
label_A8AC:; return;
label_A8AE:; return;
label_A8B0:; return;
label_A8B1:; return;
label_A8B2:; return;
label_A8B4:; return;
label_A8B5:; return;
label_A8B7:; return;
label_A8B8:; return;
label_A8BA:; return;
label_A8BC:; return;
label_A8BE:; return;
label_A8C0:; return;
label_A8C2:; return;
label_A8C5:; return;
label_A8C6:; return;
label_A8C9:; return;
label_A8CB:; return;
label_A8CC:; return;
label_A8CE:; return;
label_A8D0:; return;
label_A8D2:; return;
label_A8D4:; return;
label_A8D5:; return;
label_A8D7:; return;
label_A8DA:; return;
label_A8DD:; return;
label_A8E0:; return;
label_A8E1:; return;
label_A8E2:; return;
label_A8E3:; return;
label_A8E5:; return;
label_A8E6:; return;
label_A8E9:; return;
label_A8EA:; return;
label_A8EC:; return;
label_A8EF:; return;
label_A8F2:; return;
label_A8F4:; return;
label_A8F6:; return;
label_A8F8:; return;
label_A8FB:; return;
label_A8FD:; return;
label_A8FE:; return;
label_A901:; return;
label_A904:; return;
label_A906:; return;
label_A908:; return;
label_A909:; return;
label_A90A:; return;
label_A90C:; return;
label_A90D:; return;
label_A90F:; return;
label_A911:; return;
label_A912:; return;
label_A913:; return;
label_A916:; return;
label_A918:; return;
label_A91A:; return;
label_A91C:; return;
label_A91F:; return;
label_A921:; return;
label_A923:; return;
label_A925:; return;
label_A928:; return;
label_A92B:; return;
label_A92E:; return;
label_A931:; return;
label_A934:; return;
label_A936:; return;
label_A938:; return;
label_A939:; return;
label_A93B:; return;
label_A93D:; return;
label_A940:; return;
label_A943:; return;
label_A946:; return;
label_A949:; return;
label_A94A:; return;
label_A94C:; return;
label_A94E:; return;
label_A951:; return;
label_A954:; return;
label_A957:; return;
label_A95A:; return;
label_A95C:; return;
label_A95E:; return;
label_A960:; return;
label_A963:; return;
label_A966:; return;
label_A968:; return;
label_A96B:; return;
label_A96D:; return;
label_A96F:; return;
label_A971:; return;
label_A974:; return;
label_A977:; return;
label_A97A:; return;
label_A97D:; return;
label_A97F:; return;
label_A981:; return;
label_A983:; return;
label_A986:; return;
label_A988:; return;
label_A98B:; return;
label_A98E:; return;
label_A991:; return;
label_A992:; return;
label_A995:; return;
label_A998:; return;
label_A99B:; return;
label_A99E:; return;
label_A9A0:; return;
label_A9A3:; return;
label_A9A5:; return;
label_A9A7:; return;
label_A9AA:; return;
label_A9AD:; return;
label_A9B0:; return;
label_A9B3:; return;
label_A9B6:; return;
label_A9B7:; return;
label_A9B9:; return;
label_A9BB:; return;
label_A9BD:; return;
label_A9C0:; return;
label_A9C2:; return;
label_A9C4:; return;
label_A9C6:; return;
label_A9C8:; return;
label_A9CB:; return;
label_A9CD:; return;
label_A9CF:; return;
label_A9D1:; return;
label_A9D2:; return;
label_A9D4:; return;
label_A9D7:; return;
label_A9D9:; return;
label_A9DA:; return;
label_A9DD:; return;
label_A9DF:; return;
label_A9E1:; return;
label_A9E3:; return;
label_A9E4:; return;
label_A9E6:; return;
label_A9E9:; return;
label_A9EB:; return;
label_A9ED:; return;
label_A9EF:; return;
label_A9F0:; return;
label_A9F2:; return;
label_A9F5:; return;
label_A9F8:; return;
label_A9F9:; return;
label_A9FB:; return;
label_A9FD:; return;
label_AA00:; return;
label_AA02:; return;
label_AA05:; return;
label_AA07:; return;
label_AA08:; return;
label_AA0B:; return;
label_AA0D:; return;
label_AA0F:; return;
label_AA11:; return;
label_AA13:; return;
label_AA14:; return;
label_AA17:; return;
label_AA19:; return;
label_AA1A:; return;
label_AA1C:; return;
label_AA1D:; return;
label_AA1E:; return;
label_AA20:; return;
label_AA23:; return;
label_AA25:; return;
label_AA26:; return;
label_AA29:; return;
label_AA2B:; return;
label_AA2C:; return;
label_AA2F:; return;
label_AA31:; return;
label_AA32:; return;
label_AA35:; return;
label_AA37:; return;
label_AA3A:; return;
label_AA3D:; return;
label_AA40:; return;
label_AA41:; return;
label_AA42:; return;
label_AA44:; return;
label_AA46:; return;
label_AA48:; return;
label_AA49:; return;
label_AA4C:; return;
label_AA4E:; return;
label_AA4F:; return;
label_AA51:; return;
label_AA52:; return;
label_AA53:; return;
label_AA55:; return;
label_AA58:; return;
label_AA5A:; return;
label_AA5B:; return;
label_AA5E:; return;
label_AA61:; return;
label_AA63:; return;
label_AA65:; return;
label_AA66:; return;
label_AA67:; return;
label_AA69:; return;
label_AA6B:; return;
label_AA6C:; return;
label_AA6E:; return;
label_AA70:; return;
label_AA72:; return;
label_AA74:; return;
label_AA75:; return;
label_AA76:; return;
label_AA77:; return;
label_AA78:; return;
label_AA79:; return;
label_AA7A:; return;
label_AA7B:; return;
label_AA7C:; return;
label_AA7D:; return;
label_AA80:; return;
label_AA81:; return;
label_AA82:; return;
label_AA83:; return;
label_AA84:; return;
label_AA85:; return;
label_AA86:; return;
label_AA87:; return;
label_AA89:; return;
label_AA8B:; return;
label_AA8D:; return;
label_AA8E:; return;
label_AA8F:; return;
label_AA90:; return;
label_AA91:; return;
label_AA92:; return;
label_AA93:; return;
label_AA94:; return;
label_AA95:; return;
label_AA96:; return;
label_AA99:; return;
label_AA9B:; return;
label_AA9D:; return;
label_AA9E:; return;
label_AAA0:; return;
label_AAA1:; return;
label_AAA3:; return;
label_AAA4:; return;
label_AAA6:; return;
label_AAA7:; return;
label_AAA9:; return;
label_AAAA:; return;
label_AAAC:; return;
label_AAAD:; return;
label_AAAF:; return;
label_AAB2:; return;
label_AAB4:; return;
label_AAB6:; return;
label_AAB9:; return;
label_AABB:; return;
label_AABD:; return;
label_AAC0:; return;
label_AAC2:; return;
label_AAC3:; return;
label_AAC5:; return;
label_AAC6:; return;
label_AAC8:; return;
label_AAC9:; return;
label_AACB:; return;
label_AACC:; return;
label_AACF:; return;
label_AAD1:; return;
label_AAD4:; return;
label_AAD6:; return;
label_AAD8:; return;
label_AAD9:; return;
label_AADC:; return;
label_AADE:; return;
label_AADF:; return;
label_AAE0:; return;
label_AAE3:; return;
label_AAE4:; return;
label_AAE6:; return;
label_AAE9:; return;
label_AAEB:; return;
label_AAEE:; return;
label_AAF1:; return;
label_AAF4:; return;
label_AAF6:; return;
label_AAF8:; return;
label_AAFA:; return;
label_AAFC:; return;
label_AAFF:; return;
label_AB01:; return;
label_AB03:; return;
label_AB05:; return;
label_AB08:; return;
label_AB0A:; return;
label_AB0C:; return;
label_AB0E:; return;
label_AB10:; return;
label_AB13:; return;
label_AB15:; return;
label_AB17:; return;
label_AB1A:; return;
label_AB1C:; return;
label_AB1F:; return;
label_AB22:; return;
label_AB25:; return;
label_AB28:; return;
label_AB2B:; return;
label_AB2E:; return;
label_AB31:; return;
label_AB34:; return;
label_AB37:; return;
label_AB3A:; return;
label_AB3D:; return;
label_AB40:; return;
label_AB43:; return;
label_AB46:; return;
label_AB48:; return;
label_AB4B:; return;
label_AB4D:; return;
label_AB50:; return;
label_AB53:; return;
label_AB54:; return;
label_AB57:; return;
label_AB59:; return;
label_AB5B:; return;
label_AB5D:; return;
label_AB5F:; return;
label_AB61:; return;
label_AB63:; return;
label_AB65:; return;
label_AB67:; return;
label_AB6A:; return;
label_AB6C:; return;
label_AB6E:; return;
label_AB6F:; return;
label_AB71:; return;
label_AB72:; return;
label_AB74:; return;
label_AB77:; return;
label_AB7A:; return;
label_AB7D:; return;
label_AB80:; return;
label_AB83:; return;
label_AB86:; return;
label_AB88:; return;
label_AB89:; return;
label_AB8B:; return;
label_AB8D:; return;
label_AB8F:; return;
label_AB91:; return;
label_AB92:; return;
label_AB94:; return;
label_AB96:; return;
label_AB98:; return;
label_AB9A:; return;
label_AB9D:; return;
label_AB9F:; return;
label_ABA1:; return;
label_ABA3:; return;
label_ABA5:; return;
label_ABA7:; return;
label_ABA9:; return;
label_ABAB:; return;
label_ABAD:; return;
label_ABAF:; return;
label_ABB2:; return;
label_ABB3:; return;
label_ABB4:; return;
label_ABB5:; return;
label_ABB6:; return;
label_ABB7:; return;
label_ABB8:; return;
label_ABB9:; return;
label_ABBC:; return;
label_ABBF:; return;
label_ABC1:; return;
label_ABC3:; return;
label_ABC6:; return;
label_ABC8:; return;
label_ABCA:; return;
label_ABCC:; return;
label_ABCE:; return;
label_ABD0:; return;
label_ABD2:; return;
label_ABD4:; return;
label_ABD6:; return;
label_ABD7:; return;
label_ABD9:; return;
label_ABDB:; return;
label_ABDD:; return;
label_ABDF:; return;
label_ABE2:; return;
label_ABE4:; return;
label_ABE6:; return;
label_ABE8:; return;
label_ABEB:; return;
label_ABED:; return;
label_ABEF:; return;
label_ABF1:; return;
label_ABF3:; return;
label_ABF5:; return;
label_ABF7:; return;
label_ABF9:; return;
label_ABFB:; return;
label_ABFD:; return;
label_AC00:; return;
label_AC03:; return;
label_AC05:; return;
label_AC07:; return;
label_AC09:; return;
label_AC0C:; return;
label_AC0E:; return;
label_AC11:; return;
label_AC12:; return;
label_AC13:; return;
label_AC16:; return;
label_AC18:; return;
label_AC1A:; return;
label_AC1C:; return;
label_AC1E:; return;
label_AC20:; return;
label_AC22:; return;
label_AC24:; return;
label_AC26:; return;
label_AC29:; return;
label_AC2C:; return;
label_AC2E:; return;
label_AC31:; return;
label_AC34:; return;
label_AC36:; return;
label_AC39:; return;
label_AC3B:; return;
label_AC3D:; return;
label_AC3F:; return;
label_AC42:; return;
label_AC44:; return;
label_AC46:; return;
label_AC49:; return;
label_AC4B:; return;
label_AC4D:; return;
label_AC4F:; return;
label_AC51:; return;
label_AC53:; return;
label_AC56:; return;
label_AC58:; return;
label_AC5A:; return;
label_AC5B:; return;
label_AC5D:; return;
label_AC5F:; return;
label_AC61:; return;
label_AC63:; return;
label_AC66:; return;
label_AC69:; return;
label_AC6C:; return;
label_AC6D:; return;
label_AC6F:; return;
label_AC71:; return;
label_AC73:; return;
label_AC75:; return;
label_AC77:; return;
label_AC7A:; return;
label_AC7C:; return;
label_AC7E:; return;
label_AC81:; return;
label_AC84:; return;
label_AC87:; return;
label_AC8A:; return;
label_AC8C:; return;
label_AC8E:; return;
label_AC90:; return;
label_AC92:; return;
label_AC95:; return;
label_AC98:; return;
label_AC9B:; return;
label_AC9D:; return;
label_AC9F:; return;
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
label_B038:; return;
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
label_B717:; return;
label_B719:; return;
label_B71B:; return;
label_B71D:; return;
label_B720:; return;
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
label_B76C:; return;
label_B76F:; return;
label_B771:; return;
label_B773:; return;
label_B775:; return;
label_B777:; return;
label_B779:; return;
label_B77B:; return;
label_B77D:; return;
label_B77F:; return;
label_B782:; return;
label_B783:; return;
label_B785:; return;
label_B788:; return;
label_B78A:; return;
label_B78D:; return;
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
label_B7B1:; return;
label_B7B4:; return;
label_B7B6:; return;
label_B7B9:; return;
label_B7BC:; return;
label_B7BF:; return;
label_B7C2:; return;
label_B7C4:; return;
label_B7C7:; return;
label_B7CA:; return;
label_B7CC:; return;
label_B7CD:; return;
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
label_B8C6:; return;
label_B8C8:; return;
label_B8CB:; return;
label_B8CE:; return;
label_B8D0:; return;
label_B8D3:; return;
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
}

void func_84C8_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_84C8_b4");
#endif
label_84C8:;
    /* $84C8: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0xC9; FLAG_NZ(g_cpu.A);
label_84CA:;
    /* $84CA: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_84CB:;
    /* $84CB: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_84DA;
label_84CD:;
    /* $84CD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFD); FLAG_NZ(g_cpu.A);
label_84CF:;
    /* $84CF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_84D4;
label_84D1:;
    /* $84D1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD3; g_cpu.S--; func_8563_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x84D1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_84D4:;
    /* $84D4: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_84D5:;
    /* $84D5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_84FD;
label_84D7:;
    /* $84D7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD9; g_cpu.S--; func_855A_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x84D7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_84DA:;
    /* $84DA: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0401 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_84DD:;
    /* $84DD: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0401 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_84E0:;
    /* $84E0: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x6AF6 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_84E3:;
    /* $84E3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_84F4;
label_84E5:;
    /* $84E5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFD); FLAG_NZ(g_cpu.A);
label_84E7:;
    /* $84E7: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_84EE;
label_84E9:;
    /* $84E9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xEB; g_cpu.S--; func_8563_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x84E9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_84EC:;
    /* $84EC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_84F4;
label_84EE:;
    /* $84EE: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0401 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_84F1:;
    /* $84F1: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_84F2:;
    /* $84F2: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_84FD;
label_84F4:;
    /* $84F4: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_84F7:;
    /* $84F7: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_84FC;
label_84F9:;
    /* $84F9: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x6B01 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_84FC:;
    /* $84FC: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_84FD:;
    /* $84FD: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_83AD_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_83AD_b4");
#endif
label_83AD:;
    /* $83AD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_83AF:;
    /* $83AF: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x6AFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_83B2:;
    /* $83B2: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_83B6;
label_83B4:;
    /* $83B4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_83B6:;
    /* $83B6: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0403 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83B9:;
    /* $83B9: 9D */ maybe_trigger_vblank(5); nes_write((0x0403 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_83BC:;
    /* $83BC: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_83BD:;
    /* $83BD: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_83D0;
label_83BF:;
    /* $83BF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_83C1:;
    /* $83C1: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_83C2:;
    /* $83C2: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0407 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83C5:;
    /* $83C5: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_83C7:;
    /* $83C7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_83C9:;
    /* $83C9: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0403 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83CC:;
    /* $83CC: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_83CD:;
    /* $83CD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x83; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCF; g_cpu.S--; func_E449();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x83CD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_83D0:;
    /* $83D0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x04); FLAG_NZ(g_cpu.A);
label_83D2:;
    /* $83D2: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_83D4:;
    /* $83D4: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_83D5:;
    /* $83D5: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x03); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83D7:;
    /* $83D7: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_83E3;
label_83D9:;
    /* $83D9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_83DB:;
    /* $83DB: 9D */ maybe_trigger_vblank(5); nes_write((0x0407 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_83DE:;
    /* $83DE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_83E0:;
    /* $83E0: 9D */ maybe_trigger_vblank(5); nes_write((0x0403 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_83E3:;
    /* $83E3: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AFD + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_83E6:;
    /* $83E6: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_83E7:;
    /* $83E7: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0407 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83EA:;
    /* $83EA: 9D */ maybe_trigger_vblank(5); nes_write((0x6AFD + g_cpu.X) & 0xFFFF, g_cpu.A);
label_83ED:;
    /* $83ED: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_83EF:;
    /* $83EF: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0403 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83F2:;
    /* $83F2: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_83F4:;
    /* $83F4: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A203_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A203_b4");
#endif
label_A203:;
    /* $A203: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0xA7); FLAG_NZ(g_cpu.A);
label_A205:;
    /* $A205: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A207:;
    /* $A207: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_A208:;
    /* $A208: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0xF6); FLAG_NZ(g_cpu.A);
label_A20A:;
    /* $A20A: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0x3F); FLAG_NZ(g_cpu.A);
label_A20C:;
    /* $A20C: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A20D:;
    /* $A20D: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0xA8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A20F:;
    /* $A20F: C7 */ maybe_trigger_vblank(5); { uint16_t a=0xA8; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A211:;
    /* $A211: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xA9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A213:;
    /* $A213: 4F */ maybe_trigger_vblank(6); { uint16_t a=0x72A9; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A216:;
    /* $A216: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x90; FLAG_NZ(g_cpu.A);
label_A218:;
    /* $A218: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xBE; FLAG_NZ(g_cpu.A);
label_A21A:;
    /* $A21A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFE; FLAG_NZ(g_cpu.A);
label_A21C:;
    /* $A21C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x33; FLAG_NZ(g_cpu.A);
label_A21E:;
    /* $A21E: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A21F:;
    /* $A21F: 6B */ maybe_trigger_vblank(2); { g_cpu.A &= 0xAA; uint8_t c=g_cpu.C; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>6)&1; g_cpu.V=(((g_cpu.A>>6)&1)^((g_cpu.A>>5)&1)); }
label_A221:;
    /* $A221: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0x97AA + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A224:;
    /* $A224: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A225:;
    /* $A225: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { call_by_address(0xA1D1); return; }
label_A227:;
    /* $A227: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xAA + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_A229:;
    /* $A229: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xC2AA + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_A22C:;
    /* $A22C: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A22D:;
    /* $A22D: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_A22E:;
    /* $A22E: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A22F:;
    /* $A22F: E2 */ maybe_trigger_vblank(2); /* NOP */
label_A231:;
    /* $A231: E7 */ maybe_trigger_vblank(5); { uint16_t a=0xAA; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A233:;
    /* $A233: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xEFAA); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A236:;
    /* $A236: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A237:;
    /* $A237: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_A238:;
    /* $A238: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A239:;
    /* $A239: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x03AA + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A23C:;
    /* $A23C: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x08; FLAG_NZ(g_cpu.A);
label_A23E:;
    /* $A23E: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x11; FLAG_NZ(g_cpu.A);
label_A240:;
    /* $A240: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x26; FLAG_NZ(g_cpu.A);
label_A242:;
    /* $A242: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x29; FLAG_NZ(g_cpu.A);
label_A244:;
    /* $A244: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x3C; FLAG_NZ(g_cpu.A);
label_A246:;
    /* $A246: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x51; FLAG_NZ(g_cpu.A);
label_A248:;
    /* $A248: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x55; FLAG_NZ(g_cpu.A);
label_A24A:;
    /* $A24A: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x68; FLAG_NZ(g_cpu.A);
label_A24C:;
    /* $A24C: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x75; FLAG_NZ(g_cpu.A);
label_A24E:;
    /* $A24E: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x88; FLAG_NZ(g_cpu.A);
label_A250:;
    /* $A250: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x9B; FLAG_NZ(g_cpu.A);
label_A252:;
    /* $A252: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0xB0; FLAG_NZ(g_cpu.A);
label_A254:;
    /* $A254: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0xBA; FLAG_NZ(g_cpu.A);
label_A256:;
    /* $A256: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0xBD; FLAG_NZ(g_cpu.A);
label_A258:;
    /* $A258: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0xC4; FLAG_NZ(g_cpu.A);
label_A25A:;
    /* $A25A: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0xE0; FLAG_NZ(g_cpu.A);
label_A25C:;
    /* $A25C: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0xE9; FLAG_NZ(g_cpu.A);
label_A25E:;
    /* $A25E: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0xFE; FLAG_NZ(g_cpu.A);
label_A260:;
    /* $A260: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x01; FLAG_NZ(g_cpu.A);
label_A262:;
    /* $A262: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0xAC0A); FLAG_NZ(g_cpu.Y);
label_A265:;
    /* $A265: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x14AC; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A268:;
    /* $A268: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0xAC1E); FLAG_NZ(g_cpu.Y);
label_A26B:;
    /* $A26B: 27 */ maybe_trigger_vblank(5); { uint16_t a=0xAC; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A26D:;
    /* $A26D: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A26E:;
    /* $A26E: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA2 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A270:;
    /* $A270: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A272:;
    /* $A272: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x81); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A274:;
    /* $A274: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA274); return;
}

void func_BB22_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB22_b4");
#endif
label_BB22:;
    /* $BB22: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BDBB_b4(); return;
}

void func_B0CE_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B0CE_b4");
#endif
label_B0CE:;
    /* $B0CE: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_B0CF:;
    /* $B0CF: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B0D0:;
    /* $B0D0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xB3C2 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B0D3:;
    /* $B0D3: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xB2); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_B0D5:;
    /* $B0D5: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_B0D6:;
    /* $B0D6: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x34) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B0D8:;
    /* $B0D8: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B0D9:;
    /* $B0D9: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_B0DA:;
    /* $B0DA: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x1C) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B0DC:;
    /* $B0DC: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B0DD:;
    /* $B0DD: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B0DE:;
    /* $B0DE: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x2E) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B0E0:;
    /* $B0E0: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B0E1:;
    /* $B0E1: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_B0E2:;
    /* $B0E2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xB4C8 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B0E5:;
    /* $B0E5: 0C */ maybe_trigger_vblank(4); (void)nes_read(0xBBFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B0E8:;
    /* $B0E8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B0E9:;
    /* $B0E9: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x2022 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B0EC:;
    /* $B0EC: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_B0ED:;
    /* $B0ED: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B0F0:;
    /* $B0F0: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x22; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B0F2:;
    /* $B0F2: 26 */ maybe_trigger_vblank(5); { uint16_t a=0xBB; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B0F4:;
    /* $B0F4: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B0F5:;
    /* $B0F5: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x2628 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B0F8:;
    /* $B0F8: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_B0F9:;
    /* $B0F9: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B0FC:;
    /* $B0FC: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C28); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_B0FF:;
    /* $B0FF: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B102:;
    /* $B102: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_B103:;
    /* $B103: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x05; g_cpu.S--; func_BB22_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB103, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B106:;
    /* $B106: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B107:;
    /* $B107: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x2220 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B10A:;
    /* $B10A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0C; g_cpu.S--; if (!nes_dispatch_call(0x02BB, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB10A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B10D:;
    /* $B10D: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x1C22 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B110:;
    /* $B110: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_B111:;
    /* $B111: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B114:;
    /* $B114: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1C22 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B117:;
    /* $B117: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B11A:;
    /* $B11A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B0CE;
    }
label_B11C:;
    /* $B11C: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x3EB9 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B11F:;
    /* $B11F: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0xBB3E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B122:;
    /* $B122: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B123:;
    /* $B123: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xB2C2 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B126:;
    /* $B126: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B127:;
    /* $B127: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x122A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B12A:;
    /* $B12A: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B12B:;
    /* $B12B: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B12E:;
    /* $B12E: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B12F:;
    /* $B12F: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B130:;
    /* $B130: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B131:;
    /* $B131: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x2A2A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B134:;
    /* $B134: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B135:;
    /* $B135: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B138:;
    /* $B138: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B139:;
    /* $B139: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B13A:;
    /* $B13A: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B13B:;
    /* $B13B: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x2A2A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B13E:;
    /* $B13E: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B13F:;
    /* $B13F: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B142:;
    /* $B142: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B143:;
    /* $B143: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B144:;
    /* $B144: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B145:;
    /* $B145: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B146:;
    /* $B146: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B147:;
    /* $B147: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x122A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B14A:;
    /* $B14A: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B14B:;
    /* $B14B: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B14E:;
    /* $B14E: 26 */ maybe_trigger_vblank(5); { uint16_t a=0xB9; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B150:;
    /* $B150: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x2626; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B153:;
    /* $B153: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B156:;
    /* $B156: 26 */ maybe_trigger_vblank(5); { uint16_t a=0xB9; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B158:;
    /* $B158: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x2626; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B15B:;
    /* $B15B: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B15E:;
    /* $B15E: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_B15F:;
    /* $B15F: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x220A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B162:;
    /* $B162: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_B163:;
    /* $B163: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B166:;
    /* $B166: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_B167:;
    /* $B167: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x220A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B16A:;
    /* $B16A: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_B16B:;
    /* $B16B: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B16E:;
    /* $B16E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x70; g_cpu.S--; func_B920_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB16E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B171:;
    /* $B171: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x73; g_cpu.S--; if (!nes_dispatch_call(0x2020, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB171, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B174:;
    /* $B174: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B177:;
    /* $B177: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x79; g_cpu.S--; if (!nes_dispatch_call(0x34B9, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB177, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B17A:;
    /* $B17A: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_B1B0;
label_B17C:;
    /* $B17C: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B17F:;
    /* $B17F: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_B180:;
    /* $B180: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x38 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B182:;
    /* $B182: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B185:;
    /* $B185: 3A */ maybe_trigger_vblank(2); /* NOP */
label_B186:;
    /* $B186: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_B187:;
    /* $B187: 3A */ maybe_trigger_vblank(2); /* NOP */
label_B188:;
    /* $B188: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B18B:;
    /* $B18B: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x3E3A + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B18E:;
    /* $B18E: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B191:;
    /* $B191: C2 */ maybe_trigger_vblank(2); /* NOP */
label_B193:;
    /* $B193: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B194:;
    /* $B194: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { call_by_address(0xB1AE); return; }
label_B196:;
    /* $B196: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_B1B0;
label_B198:;
    /* $B198: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { call_by_address(0xB1B2); return; }
label_B19A:;
    /* $B19A: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_B1BE;
label_B19C:;
    /* $B19C: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_B19D:;
    /* $B19D: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x22) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B19F:;
    /* $B19F: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_B1A0:;
    /* $B1A0: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B1A1:;
    /* $B1A1: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_B1A2:;
    /* $B1A2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA4; g_cpu.S--; if (!nes_dispatch_call(0x181C, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB1A2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B1A5:;
    /* $B1A5: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x14 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B1A7:;
    /* $B1A7: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x14 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B1A9:;
    /* $B1A9: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2A2A); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_B1AC:;
    /* $B1AC: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x2A2A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1AF:;
    /* $B1AF: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B1B0:;
    /* $B1B0: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B1B3:;
    /* $B1B3: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B1B4:;
    /* $B1B4: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_B1B5:;
    /* $B1B5: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_B1B6:;
    /* $B1B6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x2828 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1B9:;
    /* $B1B9: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_B1BA:;
    /* $B1BA: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B1BB:;
    /* $B1BB: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_B1BC:;
    /* $B1BC: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x26; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B1BE:;
    /* $B1BE: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x2626 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1C1:;
    /* $B1C1: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x02BB + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B1C4:;
    /* $B1C4: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x2626 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1C7:;
    /* $B1C7: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x02BB + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B1CA:;
    /* $B1CA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xB2D0 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B1CD:;
    /* $B1CD: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x04 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B1CF:;
    /* $B1CF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xB2C8 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B1D2:;
    /* $B1D2: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B1D4:;
    /* $B1D4: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x04; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B1D6:;
    /* $B1D6: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B1D8:;
    /* $B1D8: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xB9; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B1DA:;
    /* $B1DA: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B1DC:;
    /* $B1DC: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xBB); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B1DE:;
    /* $B1DE: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFF + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B1E0:;
    /* $B1E0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B194;
    }
label_B1E2:;
    /* $B1E2: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x07); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B1E4:;
    /* $B1E4: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xB9); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B1E6:;
    /* $B1E6: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x04; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B1E8:;
    /* $B1E8: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xBB); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B1EA:;
    /* $B1EA: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFF + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B1EC:;
    /* $B1EC: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xBA; g_cpu.C=(g_cpu.X>=0xBA)?1:0; FLAG_NZ(r&0xFF); }
label_B1EE:;
    /* $B1EE: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B1EF:;
    /* $B1EF: 1A */ maybe_trigger_vblank(2); /* NOP */
label_B1F0:;
    /* $B1F0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B1F1:;
    /* $B1F1: 3A */ maybe_trigger_vblank(2); /* NOP */
label_B1F2:;
    /* $B1F2: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
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
label_B717:; return;
label_B719:; return;
label_B71B:; return;
label_B71D:; return;
label_B720:; return;
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
label_B76C:; return;
label_B76F:; return;
label_B771:; return;
label_B773:; return;
label_B775:; return;
label_B777:; return;
label_B779:; return;
label_B77B:; return;
label_B77D:; return;
label_B77F:; return;
label_B782:; return;
label_B783:; return;
label_B785:; return;
label_B788:; return;
label_B78A:; return;
label_B78D:; return;
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
label_B7B1:; return;
label_B7B4:; return;
label_B7B6:; return;
label_B7B9:; return;
label_B7BC:; return;
label_B7BF:; return;
label_B7C2:; return;
label_B7C4:; return;
label_B7C7:; return;
label_B7CA:; return;
label_B7CC:; return;
label_B7CD:; return;
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
label_B8C6:; return;
label_B8C8:; return;
label_B8CB:; return;
label_B8CE:; return;
label_B8D0:; return;
label_B8D3:; return;
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
label_BC83:; return;
label_BC85:; return;
label_BC88:; return;
label_BC8B:; return;
label_BC8D:; return;
label_BC90:; return;
label_BC91:; return;
label_BC93:; return;
label_BC94:; return;
label_BC97:; return;
label_BC98:; return;
label_BC9A:; return;
label_BC9D:; return;
label_BC9E:; return;
label_BCA1:; return;
label_BCA3:; return;
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
label_BE1E:; return;
label_BE20:; return;
label_BE21:; return;
label_BE24:; return;
label_BE26:; return;
label_BE27:; return;
label_BE29:; return;
label_BE2A:; return;
label_BE2B:; return;
label_BE2E:; return;
label_BE2F:; return;
label_BE32:; return;
label_BE34:; return;
label_BE36:; return;
label_BE39:; return;
label_BE3C:; return;
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
label_BEA3:; return;
label_BEA4:; return;
label_BEA6:; return;
label_BEA9:; return;
label_BEAA:; return;
label_BEAB:; return;
label_BEAD:; return;
label_BEAF:; return;
label_BEB1:; return;
label_BEB3:; return;
label_BEB5:; return;
label_BEB7:; return;
label_BEB9:; return;
label_BEBB:; return;
label_BEBD:; return;
label_BEBF:; return;
label_BEC1:; return;
label_BEC3:; return;
label_BEC4:; return;
label_BEC7:; return;
label_BEC8:; return;
label_BECA:; return;
label_BECC:; return;
label_BECF:; return;
label_BED0:; return;
label_BED1:; return;
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
}

void func_B920_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B920_b4");
#endif
label_B920:;
    /* $B920: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B93C;
label_B922:;
    /* $B922: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_B924:;
    /* $B924: 8D */ maybe_trigger_vblank(4); nes_write(0x0612, g_cpu.A);
label_B927:;
    /* $B927: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B929:;
    /* $B929: 8D */ maybe_trigger_vblank(4); nes_write(0x0613, g_cpu.A);
label_B92C:;
    /* $B92C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2E; g_cpu.S--; func_B9BC_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB92C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B92F:;
    /* $B92F: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0673; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B932:;
    /* $B932: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0673); FLAG_NZ(g_cpu.A);
label_B935:;
    /* $B935: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x06; g_cpu.C=(g_cpu.A>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_B937:;
    /* $B937: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0xB91C); return; }
label_B939:;
    /* $B939: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B8C6_b4(); return;
label_B93C:;
    /* $B93C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3E; g_cpu.S--; func_B9D0_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB93C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B93F:;
    /* $B93F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0614); FLAG_NZ(g_cpu.A);
label_B942:;
    /* $B942: 8D */ maybe_trigger_vblank(4); nes_write(0x0612, g_cpu.A);
label_B945:;
    /* $B945: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0615); FLAG_NZ(g_cpu.A);
label_B948:;
    /* $B948: 8D */ maybe_trigger_vblank(4); nes_write(0x0613, g_cpu.A);
label_B94B:;
    /* $B94B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x4D; g_cpu.S--; func_B9A8_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB94B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B94E:;
    /* $B94E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B899_b4(); return;
}

void func_B3A4_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3A4_b4");
#endif
label_B3A4:;
    /* $B3A4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_B3A6:;
    /* $B3A6: 85 */ maybe_trigger_vblank(3); nes_write(0xE0, g_cpu.A);
label_B3A8:;
    /* $B3A8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_B3AA:;
    /* $B3AA: 85 */ maybe_trigger_vblank(3); nes_write(0xE1, g_cpu.A);
label_B3AC:;
    /* $B3AC: 84 */ maybe_trigger_vblank(3); nes_write(0xE2, g_cpu.Y);
label_B3AE:;
    /* $B3AE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B3B0:;
    /* $B3B0: 85 */ maybe_trigger_vblank(3); nes_write(0xE3, g_cpu.A);
label_B3B2:;
    /* $B3B2: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_B3B4:;
    /* $B3B4: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xE2) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B3B6:;
    /* $B3B6: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0xE0) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B3B8:;
    /* $B3B8: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B3B9:;
    /* $B3B9: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_B3BA:;
    /* $B3BA: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_B3BC:;
    /* $B3BC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B3B4;
    }
label_B3BE:;
    /* $B3BE: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B39C_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B39C_b4");
#endif
label_B39C:;
    /* $B39C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_B39E:;
    /* $B39E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B3A6;
label_B3A0:;
    /* $B3A0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_B3A2:;
    /* $B3A2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B3A6;
label_B3A4:;
    /* $B3A4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_B3A6:;
    /* $B3A6: 85 */ maybe_trigger_vblank(3); nes_write(0xE0, g_cpu.A);
label_B3A8:;
    /* $B3A8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_B3AA:;
    /* $B3AA: 85 */ maybe_trigger_vblank(3); nes_write(0xE1, g_cpu.A);
label_B3AC:;
    /* $B3AC: 84 */ maybe_trigger_vblank(3); nes_write(0xE2, g_cpu.Y);
label_B3AE:;
    /* $B3AE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B3B0:;
    /* $B3B0: 85 */ maybe_trigger_vblank(3); nes_write(0xE3, g_cpu.A);
label_B3B2:;
    /* $B3B2: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_B3B4:;
    /* $B3B4: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xE2) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B3B6:;
    /* $B3B6: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0xE0) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B3B8:;
    /* $B3B8: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B3B9:;
    /* $B3B9: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_B3BA:;
    /* $B3BA: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_B3BC:;
    /* $B3BC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B3B4;
    }
label_B3BE:;
    /* $B3BE: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B3A0_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3A0_b4");
#endif
label_B3A0:;
    /* $B3A0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_B3A2:;
    /* $B3A2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B3A6;
label_B3A4:;
    /* $B3A4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_B3A6:;
    /* $B3A6: 85 */ maybe_trigger_vblank(3); nes_write(0xE0, g_cpu.A);
label_B3A8:;
    /* $B3A8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_B3AA:;
    /* $B3AA: 85 */ maybe_trigger_vblank(3); nes_write(0xE1, g_cpu.A);
label_B3AC:;
    /* $B3AC: 84 */ maybe_trigger_vblank(3); nes_write(0xE2, g_cpu.Y);
label_B3AE:;
    /* $B3AE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B3B0:;
    /* $B3B0: 85 */ maybe_trigger_vblank(3); nes_write(0xE3, g_cpu.A);
label_B3B2:;
    /* $B3B2: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_B3B4:;
    /* $B3B4: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xE2) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B3B6:;
    /* $B3B6: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0xE0) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B3B8:;
    /* $B3B8: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B3B9:;
    /* $B3B9: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_B3BA:;
    /* $B3BA: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_B3BC:;
    /* $B3BC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B3B4;
    }
label_B3BE:;
    /* $B3BE: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B4C3_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4C3_b4");
#endif
label_B4C3:;
    /* $B4C3: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x065C); FLAG_NZ(g_cpu.X);
label_B4C6:;
    /* $B4C6: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0688 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B4C9:;
    /* $B4C9: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x00; FLAG_NZ(g_cpu.A);
label_B4CB:;
    /* $B4CB: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x064D); FLAG_NZ(g_cpu.A);
label_B4CE:;
    /* $B4CE: 9D */ maybe_trigger_vblank(5); nes_write((0x0688 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B4D1:;
    /* $B4D1: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B482_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B482_b4");
#endif
label_B482:;
    /* $B482: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x065C); FLAG_NZ(g_cpu.X);
label_B485:;
    /* $B485: 9D */ maybe_trigger_vblank(5); nes_write((0x0660 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B488:;
    /* $B488: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_B489:;
    /* $B489: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_B4A7;
label_B48B:;
    /* $B48B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_B48D:;
    /* $B48D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_B498;
label_B48F:;
    /* $B48F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_B491:;
    /* $B491: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_B49D;
label_B493:;
    /* $B493: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_B495:;
    /* $B495: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_B4A2;
label_B497:;
    /* $B497: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B498:;
    /* $B498: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; func_B398_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB498, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B49B:;
    /* $B49B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_B4AA;
label_B49D:;
    /* $B49D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x9F; g_cpu.S--; func_B3A4_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB49D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B4A0:;
    /* $B4A0: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_B4AA;
label_B4A2:;
    /* $B4A2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA4; g_cpu.S--; func_B39C_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB4A2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B4A5:;
    /* $B4A5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_B4AA;
label_B4A7:;
    /* $B4A7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA9; g_cpu.S--; func_B3A0_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB4A7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B4AA:;
    /* $B4AA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAC; g_cpu.S--; func_B4C3_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB4AA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B4AD:;
    /* $B4AD: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_B4AE:;
    /* $B4AE: 9D */ maybe_trigger_vblank(5); nes_write((0x0652 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B4B1:;
    /* $B4B1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B4B3:;
    /* $B4B3: 9D */ maybe_trigger_vblank(5); nes_write((0x0665 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B4B6:;
    /* $B4B6: 9D */ maybe_trigger_vblank(5); nes_write((0x0670 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B4B9:;
    /* $B4B9: 9D */ maybe_trigger_vblank(5); nes_write((0x0674 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B4BC:;
    /* $B4BC: 9D */ maybe_trigger_vblank(5); nes_write((0x0678 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B4BF:;
    /* $B4BF: 8D */ maybe_trigger_vblank(4); nes_write(0x0607, g_cpu.A);
label_B4C2:;
    /* $B4C2: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B4D9_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4D9_b4");
#endif
label_B4D9:;
    /* $B4D9: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x065C); FLAG_NZ(g_cpu.X);
label_B4DC:;
    /* $B4DC: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0665 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B4DF:;
    /* $B4DF: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0665 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B4E2:;
    /* $B4E2: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0660 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B4E5:;
    /* $B4E5: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B4EC;
label_B4E7:;
    /* $B4E7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B4E9:;
    /* $B4E9: 9D */ maybe_trigger_vblank(5); nes_write((0x0665 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B4EC:;
    /* $B4EC: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B5BF_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5BF_b4");
#endif
label_B5BF:;
    /* $B5BF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC1; g_cpu.S--; func_B4D2_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB5BF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B5C2:;
    /* $B5C2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_B5C4:;
    /* $B5C4: 8D */ maybe_trigger_vblank(4); nes_write(0x400C, g_cpu.A);
label_B5C7:;
    /* $B5C7: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B5B7_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5B7_b4");
#endif
label_B5B7:;
    /* $B5B7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B482_b4(); return;
}

void func_B4D2_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4D2_b4");
#endif
label_B4D2:;
    /* $B4D2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B4D4:;
    /* $B4D4: 8D */ maybe_trigger_vblank(4); nes_write(0x064D, g_cpu.A);
label_B4D7:;
    /* $B4D7: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0xB4C3); return; }
label_B4D9:;
    /* $B4D9: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x065C); FLAG_NZ(g_cpu.X);
label_B4DC:;
    /* $B4DC: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0665 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B4DF:;
    /* $B4DF: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0665 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B4E2:;
    /* $B4E2: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0660 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B4E5:;
    /* $B4E5: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B4EC;
label_B4E7:;
    /* $B4E7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B4E9:;
    /* $B4E9: 9D */ maybe_trigger_vblank(5); nes_write((0x0665 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B4EC:;
    /* $B4EC: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B5D5_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5D5_b4");
#endif
label_B5D5:;
    /* $B5D5: 8D */ maybe_trigger_vblank(4); nes_write(0x0664, g_cpu.A);
label_B5D8:;
    /* $B5D8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDA; g_cpu.S--; func_B3A4_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB5D8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B5DB:;
    /* $B5DB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDD; g_cpu.S--; func_B4C3_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB5DB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B5DE:;
    /* $B5DE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_B5E0:;
    /* $B5E0: 8D */ maybe_trigger_vblank(4); nes_write(0x0653, g_cpu.A);
label_B5E3:;
    /* $B5E3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_B5E5:;
    /* $B5E5: 8D */ maybe_trigger_vblank(4); nes_write(0x0654, g_cpu.A);
label_B5E8:;
    /* $B5E8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B5EA:;
    /* $B5EA: 8D */ maybe_trigger_vblank(4); nes_write(0x0689, g_cpu.A);
label_B5ED:;
    /* $B5ED: 8D */ maybe_trigger_vblank(4); nes_write(0x0671, g_cpu.A);
label_B5F0:;
    /* $B5F0: 8D */ maybe_trigger_vblank(4); nes_write(0x0675, g_cpu.A);
label_B5F3:;
    /* $B5F3: 8D */ maybe_trigger_vblank(4); nes_write(0x0679, g_cpu.A);
label_B5F6:;
    /* $B5F6: 8D */ maybe_trigger_vblank(4); nes_write(0x0669, g_cpu.A);
label_B5F9:;
    /* $B5F9: 8D */ maybe_trigger_vblank(4); nes_write(0x0607, g_cpu.A);
label_B5FC:;
    /* $B5FC: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B65C_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B65C_b4");
#endif
label_B65C:;
    /* $B65C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0675); FLAG_NZ(g_cpu.A);
label_B65F:;
    /* $B65F: 8D */ maybe_trigger_vblank(4); nes_write(0x4006, g_cpu.A);
label_B662:;
    /* $B662: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0679); FLAG_NZ(g_cpu.A);
label_B665:;
    /* $B665: 8D */ maybe_trigger_vblank(4); nes_write(0x4002, g_cpu.A);
label_B668:;
    /* $B668: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B5FD_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5FD_b4");
#endif
label_B5FD:;
    /* $B5FD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_B5FF:;
    /* $B5FF: 8D */ maybe_trigger_vblank(4); nes_write(0x4000, g_cpu.A);
label_B602:;
    /* $B602: 8D */ maybe_trigger_vblank(4); nes_write(0x4004, g_cpu.A);
label_B605:;
    /* $B605: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x7F; FLAG_NZ(g_cpu.A);
label_B607:;
    /* $B607: 8D */ maybe_trigger_vblank(4); nes_write(0x4001, g_cpu.A);
label_B60A:;
    /* $B60A: 8D */ maybe_trigger_vblank(4); nes_write(0x4005, g_cpu.A);
label_B60D:;
    /* $B60D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0F; g_cpu.S--; func_B4D2_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB60D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B610:;
    /* $B610: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B612:;
    /* $B612: 8D */ maybe_trigger_vblank(4); nes_write(0x0653, g_cpu.A);
label_B615:;
    /* $B615: 8D */ maybe_trigger_vblank(4); nes_write(0x0654, g_cpu.A);
label_B618:;
    /* $B618: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0607; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B61B:;
    /* $B61B: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B722_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B722_b4");
#endif
label_B722:;
    /* $B722: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_B724:;
    /* $B724: 8D */ maybe_trigger_vblank(4); nes_write(0x4000, g_cpu.A);
label_B727:;
    /* $B727: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B729:;
    /* $B729: 8D */ maybe_trigger_vblank(4); nes_write(0x0653, g_cpu.A);
label_B72C:;
    /* $B72C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2E; g_cpu.S--; func_B4D2_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB72C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B72F:;
    /* $B72F: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0607; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B732:;
    /* $B732: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B8C6_b4_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B8D6;
    }
label_B8C6:;
    /* $B8C6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B8C8:;
    /* $B8C8: 8D */ maybe_trigger_vblank(4); nes_write(0x4008, g_cpu.A);
label_B8CB:;
    /* $B8CB: 8D */ maybe_trigger_vblank(4); nes_write(0x0655, g_cpu.A);
label_B8CE:;
    /* $B8CE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x18; FLAG_NZ(g_cpu.A);
label_B8D0:;
    /* $B8D0: 8D */ maybe_trigger_vblank(4); nes_write(0x400B, g_cpu.A);
label_B8D3:;
    /* $B8D3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD5; g_cpu.S--; func_B4D2_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB8D3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B8D6:;
    /* $B8D6: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B8C6_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8C6_b4");
#endif
    func_B8C6_b4_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B8D6_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8D6_b4");
#endif
    func_B8C6_b4_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B9BC_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9BC_b4");
#endif
label_B9BC:;
    /* $B9BC: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_B9BD:;
    /* $B9BD: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0610); FLAG_NZ(g_cpu.A);
label_B9C0:;
    /* $B9C0: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0612); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9C3:;
    /* $B9C3: 8D */ maybe_trigger_vblank(4); nes_write(0x0610, g_cpu.A);
label_B9C6:;
    /* $B9C6: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0611); FLAG_NZ(g_cpu.A);
label_B9C9:;
    /* $B9C9: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0613); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9CC:;
    /* $B9CC: 8D */ maybe_trigger_vblank(4); nes_write(0x0611, g_cpu.A);
label_B9CF:;
    /* $B9CF: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B899_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B899_b4");
#endif
label_B899:;
    /* $B899: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0610); FLAG_NZ(g_cpu.A);
label_B89C:;
    /* $B89C: 8D */ maybe_trigger_vblank(4); nes_write(0x400A, g_cpu.A);
label_B89F:;
    /* $B89F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0611); FLAG_NZ(g_cpu.A);
label_B8A2:;
    /* $B8A2: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x08; FLAG_NZ(g_cpu.A);
label_B8A4:;
    /* $B8A4: 8D */ maybe_trigger_vblank(4); nes_write(0x400B, g_cpu.A);
label_B8A7:;
    /* $B8A7: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B9A8_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9A8_b4");
#endif
label_B9A8:;
    /* $B9A8: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B9A9:;
    /* $B9A9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0610); FLAG_NZ(g_cpu.A);
label_B9AC:;
    /* $B9AC: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0612); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9AF:;
    /* $B9AF: 8D */ maybe_trigger_vblank(4); nes_write(0x0610, g_cpu.A);
label_B9B2:;
    /* $B9B2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0611); FLAG_NZ(g_cpu.A);
label_B9B5:;
    /* $B9B5: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0613); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9B8:;
    /* $B9B8: 8D */ maybe_trigger_vblank(4); nes_write(0x0611, g_cpu.A);
label_B9BB:;
    /* $B9BB: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B9D0_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9D0_b4");
#endif
label_B9D0:;
    /* $B9D0: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0610); FLAG_NZ(g_cpu.A);
label_B9D3:;
    /* $B9D3: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B9D4:;
    /* $B9D4: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0611); FLAG_NZ(g_cpu.A);
label_B9D7:;
    /* $B9D7: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B9D8:;
    /* $B9D8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B9DA:;
    /* $B9DA: 8D */ maybe_trigger_vblank(4); nes_write(0x0617, g_cpu.A);
label_B9DD:;
    /* $B9DD: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x10; FLAG_NZ(g_cpu.X);
label_B9DF:;
    /* $B9DF: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x0610; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9E2:;
    /* $B9E2: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x0611; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9E5:;
    /* $B9E5: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x0617; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9E8:;
    /* $B9E8: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0617); FLAG_NZ(g_cpu.A);
label_B9EB:;
    /* $B9EB: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0616); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B9EE:;
    /* $B9EE: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_B9F6;
label_B9F0:;
    /* $B9F0: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0616); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9F3:;
    /* $B9F3: 8D */ maybe_trigger_vblank(4); nes_write(0x0617, g_cpu.A);
label_B9F6:;
    /* $B9F6: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x0610; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9F9:;
    /* $B9F9: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x0611; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9FC:;
    /* $B9FC: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_B9FD:;
    /* $B9FD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B9E5;
    }
label_B9FF:;
    /* $B9FF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0610); FLAG_NZ(g_cpu.A);
label_BA02:;
    /* $BA02: 8D */ maybe_trigger_vblank(4); nes_write(0x0614, g_cpu.A);
label_BA05:;
    /* $BA05: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0611); FLAG_NZ(g_cpu.A);
label_BA08:;
    /* $BA08: 8D */ maybe_trigger_vblank(4); nes_write(0x0615, g_cpu.A);
label_BA0B:;
    /* $BA0B: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_BA0C:;
    /* $BA0C: 8D */ maybe_trigger_vblank(4); nes_write(0x0611, g_cpu.A);
label_BA0F:;
    /* $BA0F: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_BA10:;
    /* $BA10: 8D */ maybe_trigger_vblank(4); nes_write(0x0610, g_cpu.A);
label_BA13:;
    /* $BA13: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B8F3_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8F3_b4");
#endif
label_B8F3:;
    /* $B8F3: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_B8F5:;
    /* $B8F5: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x6C; FLAG_NZ(g_cpu.A);
label_B8F7:;
    /* $B8F7: 8D */ maybe_trigger_vblank(4); nes_write(0x400A, g_cpu.A);
label_B8FA:;
    /* $B8FA: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_B8FC:;
    /* $B8FC: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xF8; FLAG_NZ(g_cpu.A);
label_B8FE:;
    /* $B8FE: 8D */ maybe_trigger_vblank(4); nes_write(0x400B, g_cpu.A);
label_B901:;
    /* $B901: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BA71_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA71_b4");
#endif
label_BA71:;
    /* $BA71: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x062E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA74:;
    /* $BA74: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_BABB;
label_BA76:;
    /* $BA76: 85 */ maybe_trigger_vblank(3); nes_write(0xEB, g_cpu.A);
label_BA78:;
    /* $BA78: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x7A; g_cpu.S--; func_BA38_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBA78, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BA7B:;
    /* $BA7B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x066C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA7E:;
    /* $BA7E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x10; g_cpu.C=(g_cpu.A>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_BA80:;
    /* $BA80: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_BAC9;
label_BA82:;
    /* $BA82: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_BA84:;
    /* $BA84: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xEB; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA86:;
    /* $BA86: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_BA8C;
label_BA88:;
    /* $BA88: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_BA89:;
    /* $BA89: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_BA8A:;
    /* $BA8A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BA84;
    }
label_BA8C:;
    /* $BA8C: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBCE0 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA8F:;
    /* $BA8F: 85 */ maybe_trigger_vblank(3); nes_write(0xEC, g_cpu.A);
label_BA91:;
    /* $BA91: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBCE1 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA94:;
    /* $BA94: 85 */ maybe_trigger_vblank(3); nes_write(0xED, g_cpu.A);
label_BA96:;
    /* $BA96: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x066A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BA99:;
    /* $BA99: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xEC) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA9B:;
    /* $BA9B: 85 */ maybe_trigger_vblank(3); nes_write(0xEA, g_cpu.A);
label_BA9D:;
    /* $BA9D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_BA9F:;
    /* $BA9F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_BAC0;
label_BAA1:;
    /* $BAA1: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xF0; g_cpu.C=(g_cpu.A>=0xF0)?1:0; FLAG_NZ(r&0xFF); }
label_BAA3:;
    /* $BAA3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_BAC5;
label_BAA5:;
    /* $BAA5: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0628 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BAA8:;
    /* $BAA8: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xF0; FLAG_NZ(g_cpu.A);
label_BAAA:;
    /* $BAAA: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xEA); FLAG_NZ(g_cpu.A);
label_BAAC:;
    /* $BAAC: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BAAD:;
    /* $BAAD: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x066A + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BAB0:;
    /* $BAB0: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0653 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BAB3:;
    /* $BAB3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_BABB;
label_BAB5:;
    /* $BAB5: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BAB6:;
    /* $BAB6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_BABC;
label_BAB8:;
    /* $BAB8: 8C */ maybe_trigger_vblank(4); nes_write(0x4004, g_cpu.Y);
label_BABB:;
    /* $BABB: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_BABC:;
    /* $BABC: 8C */ maybe_trigger_vblank(4); nes_write(0x4000, g_cpu.Y);
label_BABF:;
    /* $BABF: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_BAC0:;
    /* $BAC0: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0628 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BAC3:;
    /* $BAC3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BAB0;
    }
label_BAC5:;
    /* $BAC5: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x10; FLAG_NZ(g_cpu.Y);
label_BAC7:;
    /* $BAC7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BAB0;
    }
label_BAC9:;
    /* $BAC9: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x10; FLAG_NZ(g_cpu.Y);
label_BACB:;
    /* $BACB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BAAD;
    }
label_BACD:;
    /* $BACD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCF; g_cpu.S--; func_B420_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBACD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BAD0:;
    /* $BAD0: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BA38_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA38_b4");
#endif
label_BA38:;
    /* $BA38: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0607); FLAG_NZ(g_cpu.A);
label_BA3B:;
    /* $BA3B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_BA66;
label_BA3D:;
    /* $BA3D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BA3F:;
    /* $BA3F: 8D */ maybe_trigger_vblank(4); nes_write(0x0607, g_cpu.A);
label_BA42:;
    /* $BA42: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0648); FLAG_NZ(g_cpu.A);
label_BA45:;
    /* $BA45: 8D */ maybe_trigger_vblank(4); nes_write(0x4001, g_cpu.A);
label_BA48:;
    /* $BA48: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0600); FLAG_NZ(g_cpu.A);
label_BA4B:;
    /* $BA4B: 8D */ maybe_trigger_vblank(4); nes_write(0x4002, g_cpu.A);
label_BA4E:;
    /* $BA4E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0601); FLAG_NZ(g_cpu.A);
label_BA51:;
    /* $BA51: 8D */ maybe_trigger_vblank(4); nes_write(0x4003, g_cpu.A);
label_BA54:;
    /* $BA54: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0649); FLAG_NZ(g_cpu.A);
label_BA57:;
    /* $BA57: 8D */ maybe_trigger_vblank(4); nes_write(0x4005, g_cpu.A);
label_BA5A:;
    /* $BA5A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0604); FLAG_NZ(g_cpu.A);
label_BA5D:;
    /* $BA5D: 8D */ maybe_trigger_vblank(4); nes_write(0x4006, g_cpu.A);
label_BA60:;
    /* $BA60: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0605); FLAG_NZ(g_cpu.A);
label_BA63:;
    /* $BA63: 8D */ maybe_trigger_vblank(4); nes_write(0x4007, g_cpu.A);
label_BA66:;
    /* $BA66: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B420_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B420_b4");
#endif
label_B420:;
    /* $B420: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x062C); FLAG_NZ(g_cpu.A);
label_B423:;
    /* $B423: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_B434;
label_B425:;
    /* $B425: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x068D); FLAG_NZ(g_cpu.A);
label_B428:;
    /* $B428: 8D */ maybe_trigger_vblank(4); nes_write(0x065D, g_cpu.A);
label_B42B:;
    /* $B42B: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B42C:;
    /* $B42C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x068D); FLAG_NZ(g_cpu.A);
label_B42F:;
    /* $B42F: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x064D); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B432:;
    /* $B432: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_B43A;
label_B434:;
    /* $B434: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x36; g_cpu.S--; func_B44D_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB434, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B437:;
    /* $B437: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x39; g_cpu.S--; func_B46E_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB437, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B43A:;
    /* $B43A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3C; g_cpu.S--; func_B43E_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB43A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B43D:;
    /* $B43D: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BA67_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA67_b4");
#endif
label_BA67:;
    /* $BA67: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_BA69:;
    /* $BA69: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6B; g_cpu.S--; func_BA71_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBA69, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BA6C:;
    /* $BA6C: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_BA6D:;
    /* $BA6D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6F; g_cpu.S--; func_BA71_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBA6D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BA70:;
    /* $BA70: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BA23_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA23_b4");
#endif
label_BA23:;
    /* $BA23: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0640); FLAG_NZ(g_cpu.A);
label_BA26:;
    /* $BA26: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_BA28:;
    /* $BA28: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_BA2D;
label_BA2A:;
    /* $BA2A: 8D */ maybe_trigger_vblank(4); nes_write(0x066A, g_cpu.A);
label_BA2D:;
    /* $BA2D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0641); FLAG_NZ(g_cpu.A);
label_BA30:;
    /* $BA30: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_BA32:;
    /* $BA32: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_BA37;
label_BA34:;
    /* $BA34: 8D */ maybe_trigger_vblank(4); nes_write(0x066B, g_cpu.A);
label_BA37:;
    /* $BA37: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BB4C_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB4C_b4");
#endif
label_BB4C:;
    /* $BB4C: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_BB4D:;
    /* $BB4D: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xB0; FLAG_NZ(g_cpu.A);
label_BB4F:;
    /* $BB4F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xB0; g_cpu.C=(g_cpu.A>=0xB0)?1:0; FLAG_NZ(r&0xFF); }
label_BB51:;
    /* $BB51: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_BB70;
label_BB53:;
    /* $BB53: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_BB54:;
    /* $BB54: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_BB56:;
    /* $BB56: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_BB57:;
    /* $BB57: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x062B); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BB5A:;
    /* $BB5A: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BB5B:;
    /* $BB5B: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBF27 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB5E:;
    /* $BB5E: 9D */ maybe_trigger_vblank(5); nes_write((0x0620 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB61:;
    /* $BB61: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BB62:;
    /* $BB62: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BB63:;
    /* $BB63: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_BB65:;
    /* $BB65: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0xBB49); return; }
label_BB67:;
    /* $BB67: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0638 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BB6A:;
    /* $BB6A: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0638 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB6D:;
    /* $BB6D: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xE6) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB6F:;
    /* $BB6F: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BB70:;
    /* $BB70: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BB71:;
    /* $BB71: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_BB73:;
    /* $BB73: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0xBB46); return; }
label_BB75:;
    /* $BB75: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_BB76:;
    /* $BB76: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x064B); FLAG_NZ(g_cpu.X);
label_BB79:;
    /* $BB79: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBEA8 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB7C:;
    /* $BB7C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_BB89;
label_BB7E:;
    /* $BB7E: 9D */ maybe_trigger_vblank(5); nes_write((0x0600 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB81:;
    /* $BB81: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBEA7 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB84:;
    /* $BB84: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x08; FLAG_NZ(g_cpu.A);
label_BB86:;
    /* $BB86: 9D */ maybe_trigger_vblank(5); nes_write((0x0601 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB89:;
    /* $BB89: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BB8A:;
    /* $BB8A: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_BB8B:;
    /* $BB8B: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BB8C:;
    /* $BB8C: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_BB8D:;
    /* $BB8D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_BB9E;
label_BB8F:;
    /* $BB8F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BB91:;
    /* $BB91: 85 */ maybe_trigger_vblank(3); nes_write(0xEA, g_cpu.A);
label_BB93:;
    /* $BB93: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BB94:;
    /* $BB94: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_BB96:;
    /* $BB96: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_BBA3;
label_BB98:;
    /* $BB98: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_BB9A:;
    /* $BB9A: 85 */ maybe_trigger_vblank(3); nes_write(0xEA, g_cpu.A);
label_BB9C:;
    /* $BB9C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_BBA3;
label_BB9E:;
    /* $BB9E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0628 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBA1:;
    /* $BBA1: 85 */ maybe_trigger_vblank(3); nes_write(0xEA, g_cpu.A);
label_BBA3:;
    /* $BBA3: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BBA4:;
    /* $BBA4: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0653 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BBA7:;
    /* $BBA7: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0653 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BBAA:;
    /* $BBAA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_BBE1;
label_BBAC:;
    /* $BBAC: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0653 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BBAF:;
    /* $BBAF: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x064B); FLAG_NZ(g_cpu.Y);
label_BBB2:;
    /* $BBB2: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BBB3:;
    /* $BBB3: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_BBB5:;
    /* $BBB5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_BBBC;
label_BBB7:;
    /* $BBB7: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x062E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBBA:;
    /* $BBBA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_BBC1;
label_BBBC:;
    /* $BBBC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xEA); FLAG_NZ(g_cpu.A);
label_BBBE:;
    /* $BBBE: 99 */ maybe_trigger_vblank(5); nes_write((0x4000 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BBC1:;
    /* $BBC1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xEA); FLAG_NZ(g_cpu.A);
label_BBC3:;
    /* $BBC3: 9D */ maybe_trigger_vblank(5); nes_write((0x066C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BBC6:;
    /* $BBC6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0600 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBC9:;
    /* $BBC9: 99 */ maybe_trigger_vblank(5); nes_write((0x4002 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BBCC:;
    /* $BBCC: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0601 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBCF:;
    /* $BBCF: 99 */ maybe_trigger_vblank(5); nes_write((0x4003 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BBD2:;
    /* $BBD2: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0648 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBD5:;
    /* $BBD5: 99 */ maybe_trigger_vblank(5); nes_write((0x4001 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BBD8:;
    /* $BBD8: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0620 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBDB:;
    /* $BBDB: 9D */ maybe_trigger_vblank(5); nes_write((0x0640 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BBDE:;
    /* $BBDE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BAE3_b4(); return;
label_BBE1:;
    /* $BBE1: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0653 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BBE4:;
    /* $BBE4: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_BBD8;
}

void func_BB0C_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB0C_b4");
#endif
label_BB0C:;
    /* $BB0C: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0638 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BB0F:;
    /* $BB0F: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0638 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB12:;
    /* $BB12: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xE6) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB14:;
    /* $BB14: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0xBACD); return; }
label_BB16:;
    /* $BB16: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BB17:;
    /* $BB17: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_BB19:;
    /* $BB19: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_BB24;
label_BB1B:;
    /* $BB1B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xC0; FLAG_NZ(g_cpu.A);
label_BB1D:;
    /* $BB1D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_BB1F:;
    /* $BB1F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_BB34;
label_BB21:;
    /* $BB21: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BB4C_b4(); return;
label_BB24:;
    /* $BB24: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0624 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB27:;
    /* $BB27: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_BB43;
label_BB29:;
    /* $BB29: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0624 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB2C:;
    /* $BB2C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x063C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB2F:;
    /* $BB2F: 9D */ maybe_trigger_vblank(5); nes_write((0x0638 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB32:;
    /* $BB32: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_BB43;
label_BB34:;
    /* $BB34: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_BB35:;
    /* $BB35: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x3F; FLAG_NZ(g_cpu.A);
label_BB37:;
    /* $BB37: 9D */ maybe_trigger_vblank(5); nes_write((0x0624 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB3A:;
    /* $BB3A: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0624 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB3D:;
    /* $BB3D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0638 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB40:;
    /* $BB40: 9D */ maybe_trigger_vblank(5); nes_write((0x063C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB43:;
    /* $BB43: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
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
label_BC83:; return;
label_BC85:; return;
label_BC88:; return;
label_BC8B:; return;
label_BC8D:; return;
label_BC90:; return;
label_BC91:; return;
label_BC93:; return;
label_BC94:; return;
label_BC97:; return;
label_BC98:; return;
label_BC9A:; return;
label_BC9D:; return;
label_BC9E:; return;
label_BCA1:; return;
label_BCA3:; return;
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
label_BE1E:; return;
label_BE20:; return;
label_BE21:; return;
label_BE24:; return;
label_BE26:; return;
label_BE27:; return;
label_BE29:; return;
label_BE2A:; return;
label_BE2B:; return;
label_BE2E:; return;
label_BE2F:; return;
label_BE32:; return;
label_BE34:; return;
label_BE36:; return;
label_BE39:; return;
label_BE3C:; return;
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
label_BEA3:; return;
label_BEA4:; return;
label_BEA6:; return;
label_BEA9:; return;
label_BEAA:; return;
label_BEAB:; return;
label_BEAD:; return;
label_BEAF:; return;
label_BEB1:; return;
label_BEB3:; return;
label_BEB5:; return;
label_BEB7:; return;
label_BEB9:; return;
label_BEBB:; return;
label_BEBD:; return;
label_BEBF:; return;
label_BEC1:; return;
label_BEC3:; return;
label_BEC4:; return;
label_BEC7:; return;
label_BEC8:; return;
label_BECA:; return;
label_BECC:; return;
label_BECF:; return;
label_BED0:; return;
label_BED1:; return;
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
label_C4E8:; return;
label_C4EA:; return;
label_C4EC:; return;
label_C4ED:; return;
label_C4EF:; return;
label_C4F0:; return;
label_C4F2:; return;
label_C4F4:; return;
label_C4F6:; return;
label_C4F8:; return;
label_C4FA:; return;
label_C4FD:; return;
label_C4FE:; return;
label_C501:; return;
label_C502:; return;
label_C505:; return;
label_C506:; return;
label_C509:; return;
label_C50A:; return;
label_C50D:; return;
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
}

void func_BC0E_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC0E_b4");
#endif
label_BC0E:;
    /* $BC0E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0688); FLAG_NZ(g_cpu.A);
label_BC11:;
    /* $BC11: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFC; FLAG_NZ(g_cpu.A);
label_BC13:;
    /* $BC13: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_BC27;
label_BC15:;
    /* $BC15: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB230 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BC18:;
    /* $BC18: 8D */ maybe_trigger_vblank(4); nes_write(0x400C, g_cpu.A);
label_BC1B:;
    /* $BC1B: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB231 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BC1E:;
    /* $BC1E: 8D */ maybe_trigger_vblank(4); nes_write(0x400E, g_cpu.A);
label_BC21:;
    /* $BC21: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB232 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BC24:;
    /* $BC24: 8D */ maybe_trigger_vblank(4); nes_write(0x400F, g_cpu.A);
label_BC27:;
    /* $BC27: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BBD8_b4(); return;
}

void func_BBE7_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BBE7_b4");
#endif
label_BBE7:;
    /* $BBE7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x062D); FLAG_NZ(g_cpu.A);
label_BBEA:;
    /* $BBEA: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_BBEC:;
    /* $BBEC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_BC08;
label_BBEE:;
    /* $BBEE: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x062D); FLAG_NZ(g_cpu.A);
label_BBF1:;
    /* $BBF1: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xF0; FLAG_NZ(g_cpu.A);
label_BBF3:;
    /* $BBF3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_BBF9;
label_BBF5:;
    /* $BBF5: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_BBF6:;
    /* $BBF6: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BBFD_b4(); return;
label_BBF9:;
    /* $BBF9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_BBFB:;
    /* $BBFB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_BC08;
label_BBFD:;
    /* $BBFD: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_BBFE:;
    /* $BBFE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xFF + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xFF); g_cpu.A=r&0xFF; }
label_BC00:;
    /* $BC00: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_BC01:;
    /* $BC01: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_BC02:;
    /* $BC02: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x3C; g_cpu.C=(g_cpu.A>=0x3C)?1:0; FLAG_NZ(r&0xFF); }
label_BC04:;
    /* $BC04: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_BC08;
label_BC06:;
    /* $BC06: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_BC08:;
    /* $BC08: 8D */ maybe_trigger_vblank(4); nes_write(0x062A, g_cpu.A);
label_BC0B:;
    /* $BC0B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BB67_b4(); return;
}

void func_BAE3_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BAE3_b4");
#endif
label_BAE3:;
    /* $BAE3: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_BAE4:;
    /* $BAE4: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BAE5:;
    /* $BAE5: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_BAE7:;
    /* $BAE7: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0xBAD1); return; }
label_BAE9:;
    /* $BAE9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x064B); FLAG_NZ(g_cpu.A);
label_BAEC:;
    /* $BAEC: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_BAED:;
    /* $BAED: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x04 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x04); g_cpu.A=r&0xFF; }
label_BAEF:;
    /* $BAEF: 8D */ maybe_trigger_vblank(4); nes_write(0x064B, g_cpu.A);
label_BAF2:;
    /* $BAF2: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BAF3:;
    /* $BAF3: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_BAF4:;
    /* $BAF4: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BAF5:;
    /* $BAF5: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0630 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BAF8:;
    /* $BAF8: 85 */ maybe_trigger_vblank(3); nes_write(0xE6, g_cpu.A);
label_BAFA:;
    /* $BAFA: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0631 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BAFD:;
    /* $BAFD: 85 */ maybe_trigger_vblank(3); nes_write(0xE7, g_cpu.A);
label_BAFF:;
    /* $BAFF: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0631 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB02:;
    /* $BB02: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0xBAE0); return; }
label_BB04:;
    /* $BB04: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BB05:;
    /* $BB05: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_BB06:;
    /* $BB06: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BB07:;
    /* $BB07: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0640 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB0A:;
    /* $BB0A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BAE3;
    }
label_BB0C:;
    /* $BB0C: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0638 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BB0F:;
    /* $BB0F: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0638 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB12:;
    /* $BB12: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xE6) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB14:;
    /* $BB14: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0xBACD); return; }
label_BB16:;
    /* $BB16: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BB17:;
    /* $BB17: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_BB19:;
    /* $BB19: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_BB24;
label_BB1B:;
    /* $BB1B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xC0; FLAG_NZ(g_cpu.A);
label_BB1D:;
    /* $BB1D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_BB1F:;
    /* $BB1F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_BB34;
label_BB21:;
    /* $BB21: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BB4C_b4(); return;
label_BB24:;
    /* $BB24: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0624 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB27:;
    /* $BB27: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_BB43;
label_BB29:;
    /* $BB29: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0624 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB2C:;
    /* $BB2C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x063C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB2F:;
    /* $BB2F: 9D */ maybe_trigger_vblank(5); nes_write((0x0638 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB32:;
    /* $BB32: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_BB43;
label_BB34:;
    /* $BB34: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_BB35:;
    /* $BB35: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x3F; FLAG_NZ(g_cpu.A);
label_BB37:;
    /* $BB37: 9D */ maybe_trigger_vblank(5); nes_write((0x0624 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB3A:;
    /* $BB3A: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0624 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB3D:;
    /* $BB3D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0638 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB40:;
    /* $BB40: 9D */ maybe_trigger_vblank(5); nes_write((0x063C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB43:;
    /* $BB43: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_BB0C;
}

void func_BBD8_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BBD8_b4");
#endif
label_BBD8:;
    /* $BBD8: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0620 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBDB:;
    /* $BBDB: 9D */ maybe_trigger_vblank(5); nes_write((0x0640 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BBDE:;
    /* $BBDE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BAE3_b4(); return;
}

void func_BBFD_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BBFD_b4");
#endif
label_BBFD:;
    /* $BBFD: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_BBFE:;
    /* $BBFE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xFF + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xFF); g_cpu.A=r&0xFF; }
label_BC00:;
    /* $BC00: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_BC01:;
    /* $BC01: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_BC02:;
    /* $BC02: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x3C; g_cpu.C=(g_cpu.A>=0x3C)?1:0; FLAG_NZ(r&0xFF); }
label_BC04:;
    /* $BC04: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_BC08;
label_BC06:;
    /* $BC06: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_BC08:;
    /* $BC08: 8D */ maybe_trigger_vblank(4); nes_write(0x062A, g_cpu.A);
label_BC0B:;
    /* $BC0B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BB67_b4(); return;
}

void func_BB67_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB67_b4");
#endif
label_BB67:;
    /* $BB67: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0638 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BB6A:;
    /* $BB6A: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0638 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB6D:;
    /* $BB6D: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xE6) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB6F:;
    /* $BB6F: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BB70:;
    /* $BB70: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BB71:;
    /* $BB71: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_BB73:;
    /* $BB73: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0xBB46); return; }
label_BB75:;
    /* $BB75: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_BB76:;
    /* $BB76: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x064B); FLAG_NZ(g_cpu.X);
label_BB79:;
    /* $BB79: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBEA8 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB7C:;
    /* $BB7C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_BB89;
label_BB7E:;
    /* $BB7E: 9D */ maybe_trigger_vblank(5); nes_write((0x0600 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB81:;
    /* $BB81: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBEA7 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB84:;
    /* $BB84: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x08; FLAG_NZ(g_cpu.A);
label_BB86:;
    /* $BB86: 9D */ maybe_trigger_vblank(5); nes_write((0x0601 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB89:;
    /* $BB89: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BB8A:;
    /* $BB8A: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_BB8B:;
    /* $BB8B: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BB8C:;
    /* $BB8C: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_BB8D:;
    /* $BB8D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_BB9E;
label_BB8F:;
    /* $BB8F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BB91:;
    /* $BB91: 85 */ maybe_trigger_vblank(3); nes_write(0xEA, g_cpu.A);
label_BB93:;
    /* $BB93: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BB94:;
    /* $BB94: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_BB96:;
    /* $BB96: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_BBA3;
label_BB98:;
    /* $BB98: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_BB9A:;
    /* $BB9A: 85 */ maybe_trigger_vblank(3); nes_write(0xEA, g_cpu.A);
label_BB9C:;
    /* $BB9C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_BBA3;
label_BB9E:;
    /* $BB9E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0628 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBA1:;
    /* $BBA1: 85 */ maybe_trigger_vblank(3); nes_write(0xEA, g_cpu.A);
label_BBA3:;
    /* $BBA3: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BBA4:;
    /* $BBA4: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0653 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BBA7:;
    /* $BBA7: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0653 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BBAA:;
    /* $BBAA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_BBE1;
label_BBAC:;
    /* $BBAC: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0653 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BBAF:;
    /* $BBAF: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x064B); FLAG_NZ(g_cpu.Y);
label_BBB2:;
    /* $BBB2: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BBB3:;
    /* $BBB3: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_BBB5:;
    /* $BBB5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_BBBC;
label_BBB7:;
    /* $BBB7: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x062E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBBA:;
    /* $BBBA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_BBC1;
label_BBBC:;
    /* $BBBC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xEA); FLAG_NZ(g_cpu.A);
label_BBBE:;
    /* $BBBE: 99 */ maybe_trigger_vblank(5); nes_write((0x4000 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BBC1:;
    /* $BBC1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xEA); FLAG_NZ(g_cpu.A);
label_BBC3:;
    /* $BBC3: 9D */ maybe_trigger_vblank(5); nes_write((0x066C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BBC6:;
    /* $BBC6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0600 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBC9:;
    /* $BBC9: 99 */ maybe_trigger_vblank(5); nes_write((0x4002 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BBCC:;
    /* $BBCC: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0601 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBCF:;
    /* $BBCF: 99 */ maybe_trigger_vblank(5); nes_write((0x4003 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BBD2:;
    /* $BBD2: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0648 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBD5:;
    /* $BBD5: 99 */ maybe_trigger_vblank(5); nes_write((0x4001 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BBD8:;
    /* $BBD8: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0620 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBDB:;
    /* $BBDB: 9D */ maybe_trigger_vblank(5); nes_write((0x0640 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BBDE:;
    /* $BBDE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BAE3_b4(); return;
label_BBE1:;
    /* $BBE1: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0653 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BBE4:;
    /* $BBE4: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_BBD8;
}

void func_BAD5_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BAD5_b4");
#endif
label_BAD5:;
    /* $BAD5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD7; g_cpu.S--; func_BA23_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBAD5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BAD8:;
    /* $BAD8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BADA:;
    /* $BADA: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BADB:;
    /* $BADB: 8D */ maybe_trigger_vblank(4); nes_write(0x064B, g_cpu.A);
label_BADE:;
    /* $BADE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_BAF2;
label_BAE0:;
    /* $BAE0: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BAE1:;
    /* $BAE1: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_BAE2:;
    /* $BAE2: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BAE3:;
    /* $BAE3: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_BAE4:;
    /* $BAE4: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BAE5:;
    /* $BAE5: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_BAE7:;
    /* $BAE7: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0xBAD1); return; }
label_BAE9:;
    /* $BAE9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x064B); FLAG_NZ(g_cpu.A);
label_BAEC:;
    /* $BAEC: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_BAED:;
    /* $BAED: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x04 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x04); g_cpu.A=r&0xFF; }
label_BAEF:;
    /* $BAEF: 8D */ maybe_trigger_vblank(4); nes_write(0x064B, g_cpu.A);
label_BAF2:;
    /* $BAF2: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BAF3:;
    /* $BAF3: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_BAF4:;
    /* $BAF4: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BAF5:;
    /* $BAF5: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0630 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BAF8:;
    /* $BAF8: 85 */ maybe_trigger_vblank(3); nes_write(0xE6, g_cpu.A);
label_BAFA:;
    /* $BAFA: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0631 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BAFD:;
    /* $BAFD: 85 */ maybe_trigger_vblank(3); nes_write(0xE7, g_cpu.A);
label_BAFF:;
    /* $BAFF: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0631 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB02:;
    /* $BB02: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BAE0;
    }
label_BB04:;
    /* $BB04: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BB05:;
    /* $BB05: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_BB06:;
    /* $BB06: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BB07:;
    /* $BB07: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0640 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB0A:;
    /* $BB0A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BAE3;
    }
label_BB0C:;
    /* $BB0C: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0638 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BB0F:;
    /* $BB0F: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0638 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB12:;
    /* $BB12: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xE6) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB14:;
    /* $BB14: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0xBACD); return; }
label_BB16:;
    /* $BB16: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BB17:;
    /* $BB17: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_BB19:;
    /* $BB19: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_BB24;
label_BB1B:;
    /* $BB1B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xC0; FLAG_NZ(g_cpu.A);
label_BB1D:;
    /* $BB1D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_BB1F:;
    /* $BB1F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_BB34;
label_BB21:;
    /* $BB21: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BB4C_b4(); return;
label_BB24:;
    /* $BB24: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0624 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB27:;
    /* $BB27: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_BB43;
label_BB29:;
    /* $BB29: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0624 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB2C:;
    /* $BB2C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x063C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB2F:;
    /* $BB2F: 9D */ maybe_trigger_vblank(5); nes_write((0x0638 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB32:;
    /* $BB32: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_BB43;
label_BB34:;
    /* $BB34: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_BB35:;
    /* $BB35: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x3F; FLAG_NZ(g_cpu.A);
label_BB37:;
    /* $BB37: 9D */ maybe_trigger_vblank(5); nes_write((0x0624 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB3A:;
    /* $BB3A: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0624 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB3D:;
    /* $BB3D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0638 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB40:;
    /* $BB40: 9D */ maybe_trigger_vblank(5); nes_write((0x063C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB43:;
    /* $BB43: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_BB0C;
}

void func_BCDA_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCDA_b4");
#endif
label_BCDA:;
    /* $BCDA: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x92; FLAG_NZ(g_cpu.X);
label_BCDC:;
    /* $BCDC: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x96; FLAG_NZ(g_cpu.Y);
label_BCDE:;
    /* $BCDE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0xBCBD); return; }
label_BCE0:;
    /* $BCE0: EA */ maybe_trigger_vblank(2); /* NOP */
label_BCE1:;
    /* $BCE1: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xBCF5 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BCE4:;
    /* $BCE4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0ABC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BCE7:;
    /* $BCE7: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBD33 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BCEA:;
    /* $BCEA: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BCEC:;
    /* $BCEC: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x04 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCEE:;
    /* $BCEE: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BCF0:;
    /* $BCF0: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCF2:;
    /* $BCF2: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x08; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCF4:;
    /* $BCF4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0402 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BCF7:;
    /* $BCF7: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_BCF9:;
    /* $BCF9: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x08; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCFB:;
    /* $BCFB: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCFD:;
    /* $BCFD: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_BCFF:;
    /* $BCFF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBCFF); return;
}

void func_BCD4_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCD4_b4");
#endif
label_BCD4:;
    /* $BCD4: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xB6; FLAG_NZ(g_cpu.X);
label_BCD6:;
    /* $BCD6: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xF6; FLAG_NZ(g_cpu.Y);
label_BCD8:;
    /* $BCD8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0xBCBD); return; }
label_BCDA:;
    /* $BCDA: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x92; FLAG_NZ(g_cpu.X);
label_BCDC:;
    /* $BCDC: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x96; FLAG_NZ(g_cpu.Y);
label_BCDE:;
    /* $BCDE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0xBCBD); return; }
label_BCE0:;
    /* $BCE0: EA */ maybe_trigger_vblank(2); /* NOP */
label_BCE1:;
    /* $BCE1: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xBCF5 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BCE4:;
    /* $BCE4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0ABC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BCE7:;
    /* $BCE7: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBD33 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BCEA:;
    /* $BCEA: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BCEC:;
    /* $BCEC: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x04 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCEE:;
    /* $BCEE: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BCF0:;
    /* $BCF0: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCF2:;
    /* $BCF2: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x08; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCF4:;
    /* $BCF4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0402 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BCF7:;
    /* $BCF7: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_BCF9:;
    /* $BCF9: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x08; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCFB:;
    /* $BCFB: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCFD:;
    /* $BCFD: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_BCFF:;
    /* $BCFF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBCFF); return;
}

void func_BCCA_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCCA_b4");
#endif
label_BCCA:;
    /* $BCCA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF4; FLAG_NZ(g_cpu.A);
label_BCCC:;
    /* $BCCC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0xBCBB); return; }
label_BCCE:;
    /* $BCCE: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xF5; FLAG_NZ(g_cpu.X);
label_BCD0:;
    /* $BCD0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xF6; FLAG_NZ(g_cpu.Y);
label_BCD2:;
    /* $BCD2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0xBCBD); return; }
label_BCD4:;
    /* $BCD4: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xB6; FLAG_NZ(g_cpu.X);
label_BCD6:;
    /* $BCD6: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xF6; FLAG_NZ(g_cpu.Y);
label_BCD8:;
    /* $BCD8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0xBCBD); return; }
label_BCDA:;
    /* $BCDA: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x92; FLAG_NZ(g_cpu.X);
label_BCDC:;
    /* $BCDC: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x96; FLAG_NZ(g_cpu.Y);
label_BCDE:;
    /* $BCDE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0xBCBD); return; }
label_BCE0:;
    /* $BCE0: EA */ maybe_trigger_vblank(2); /* NOP */
label_BCE1:;
    /* $BCE1: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xBCF5 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BCE4:;
    /* $BCE4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0ABC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BCE7:;
    /* $BCE7: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBD33 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BCEA:;
    /* $BCEA: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BCEC:;
    /* $BCEC: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x04 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCEE:;
    /* $BCEE: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BCF0:;
    /* $BCF0: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCF2:;
    /* $BCF2: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x08; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCF4:;
    /* $BCF4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0402 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BCF7:;
    /* $BCF7: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_BCF9:;
    /* $BCF9: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x08; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCFB:;
    /* $BCFB: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCFD:;
    /* $BCFD: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_BCFF:;
    /* $BCFF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBCFF); return;
}

void func_BCC6_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCC6_b4");
#endif
label_BCC6:;
    /* $BCC6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x34; FLAG_NZ(g_cpu.A);
label_BCC8:;
    /* $BCC8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0xBCBB); return; }
label_BCCA:;
    /* $BCCA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF4; FLAG_NZ(g_cpu.A);
label_BCCC:;
    /* $BCCC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0xBCBB); return; }
label_BCCE:;
    /* $BCCE: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xF5; FLAG_NZ(g_cpu.X);
label_BCD0:;
    /* $BCD0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xF6; FLAG_NZ(g_cpu.Y);
label_BCD2:;
    /* $BCD2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0xBCBD); return; }
label_BCD4:;
    /* $BCD4: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xB6; FLAG_NZ(g_cpu.X);
label_BCD6:;
    /* $BCD6: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xF6; FLAG_NZ(g_cpu.Y);
label_BCD8:;
    /* $BCD8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0xBCBD); return; }
label_BCDA:;
    /* $BCDA: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x92; FLAG_NZ(g_cpu.X);
label_BCDC:;
    /* $BCDC: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x96; FLAG_NZ(g_cpu.Y);
label_BCDE:;
    /* $BCDE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0xBCBD); return; }
label_BCE0:;
    /* $BCE0: EA */ maybe_trigger_vblank(2); /* NOP */
label_BCE1:;
    /* $BCE1: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xBCF5 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BCE4:;
    /* $BCE4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0ABC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BCE7:;
    /* $BCE7: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBD33 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BCEA:;
    /* $BCEA: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BCEC:;
    /* $BCEC: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x04 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCEE:;
    /* $BCEE: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BCF0:;
    /* $BCF0: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCF2:;
    /* $BCF2: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x08; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCF4:;
    /* $BCF4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0402 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BCF7:;
    /* $BCF7: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_BCF9:;
    /* $BCF9: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x08; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCFB:;
    /* $BCFB: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCFD:;
    /* $BCFD: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_BCFF:;
    /* $BCFF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBCFF); return;
}

void func_BCB9_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCB9_b4");
#endif
label_BCB9:;
    /* $BCB9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB3; FLAG_NZ(g_cpu.A);
label_BCBB:;
    /* $BCBB: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BCBC:;
    /* $BCBC: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BCBD:;
    /* $BCBD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBF; g_cpu.S--; func_BA14_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBCBD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BCC0:;
    /* $BCC0: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC2; g_cpu.S--; func_BF62_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBCC0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BCC3:;
    /* $BCC3: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BAD5_b4(); return;
}

void func_BCCE_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCCE_b4");
#endif
label_BCCE:;
    /* $BCCE: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xF5; FLAG_NZ(g_cpu.X);
label_BCD0:;
    /* $BCD0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xF6; FLAG_NZ(g_cpu.Y);
label_BCD2:;
    /* $BCD2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0xBCBD); return; }
label_BCD4:;
    /* $BCD4: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xB6; FLAG_NZ(g_cpu.X);
label_BCD6:;
    /* $BCD6: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xF6; FLAG_NZ(g_cpu.Y);
label_BCD8:;
    /* $BCD8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0xBCBD); return; }
label_BCDA:;
    /* $BCDA: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x92; FLAG_NZ(g_cpu.X);
label_BCDC:;
    /* $BCDC: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x96; FLAG_NZ(g_cpu.Y);
label_BCDE:;
    /* $BCDE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0xBCBD); return; }
label_BCE0:;
    /* $BCE0: EA */ maybe_trigger_vblank(2); /* NOP */
label_BCE1:;
    /* $BCE1: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xBCF5 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BCE4:;
    /* $BCE4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0ABC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BCE7:;
    /* $BCE7: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBD33 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BCEA:;
    /* $BCEA: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BCEC:;
    /* $BCEC: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x04 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCEE:;
    /* $BCEE: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BCF0:;
    /* $BCF0: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCF2:;
    /* $BCF2: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x08; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCF4:;
    /* $BCF4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0402 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BCF7:;
    /* $BCF7: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_BCF9:;
    /* $BCF9: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x08; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCFB:;
    /* $BCFB: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BCFD:;
    /* $BCFD: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_BCFF:;
    /* $BCFF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBCFF); return;
}

void func_BA14_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA14_b4");
#endif
label_BA14:;
    /* $BA14: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x7F; FLAG_NZ(g_cpu.A);
label_BA16:;
    /* $BA16: 8D */ maybe_trigger_vblank(4); nes_write(0x0648, g_cpu.A);
label_BA19:;
    /* $BA19: 8D */ maybe_trigger_vblank(4); nes_write(0x0649, g_cpu.A);
label_BA1C:;
    /* $BA1C: 8E */ maybe_trigger_vblank(4); nes_write(0x0628, g_cpu.X);
label_BA1F:;
    /* $BA1F: 8C */ maybe_trigger_vblank(4); nes_write(0x0629, g_cpu.Y);
label_BA22:;
    /* $BA22: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BF62_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BF62_b4");
#endif
label_BF62:;
    /* $BF62: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBF; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x64; g_cpu.S--; func_B42C_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBF62, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BF65:;
    /* $BF65: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x064D); FLAG_NZ(g_cpu.A);
label_BF68:;
    /* $BF68: 8D */ maybe_trigger_vblank(4); nes_write(0x068D, g_cpu.A);
label_BF6B:;
    /* $BF6B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x065E); FLAG_NZ(g_cpu.A);
label_BF6E:;
    /* $BF6E: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BF6F:;
    /* $BF6F: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBC2A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BF72:;
    /* $BF72: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BF73:;
    /* $BF73: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_BF75:;
    /* $BF75: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBD61 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BF78:;
    /* $BF78: 9D */ maybe_trigger_vblank(5); nes_write((0x062B + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BF7B:;
    /* $BF7B: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_BF7C:;
    /* $BF7C: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_BF7D:;
    /* $BF7D: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BF7E:;
    /* $BF7E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0D; g_cpu.C=(g_cpu.A>=0x0D)?1:0; FLAG_NZ(r&0xFF); }
label_BF80:;
    /* $BF80: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BF75;
    }
label_BF82:;
    /* $BF82: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_BF84:;
    /* $BF84: 8D */ maybe_trigger_vblank(4); nes_write(0x0640, g_cpu.A);
label_BF87:;
    /* $BF87: 8D */ maybe_trigger_vblank(4); nes_write(0x0641, g_cpu.A);
label_BF8A:;
    /* $BF8A: 8D */ maybe_trigger_vblank(4); nes_write(0x0642, g_cpu.A);
label_BF8D:;
    /* $BF8D: 8D */ maybe_trigger_vblank(4); nes_write(0x0643, g_cpu.A);
label_BF90:;
    /* $BF90: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BF92:;
    /* $BF92: 8D */ maybe_trigger_vblank(4); nes_write(0x0638, g_cpu.A);
label_BF95:;
    /* $BF95: 8D */ maybe_trigger_vblank(4); nes_write(0x0639, g_cpu.A);
label_BF98:;
    /* $BF98: 8D */ maybe_trigger_vblank(4); nes_write(0x063A, g_cpu.A);
label_BF9B:;
    /* $BF9B: 8D */ maybe_trigger_vblank(4); nes_write(0x063B, g_cpu.A);
label_BF9E:;
    /* $BF9E: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A1D1_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A1D1_b4");
#endif
label_A1D1:;
    /* $A1D1: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x34 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A1D3:;
    /* $A1D3: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x00; FLAG_NZ(g_cpu.A);
label_A1D5:;
    /* $A1D5: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xA2 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_A1D7:;
    /* $A1D7: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA2); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A1D9:;
    /* $A1D9: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x08A2); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A1DC:;
    /* $A1DC: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x45 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1DE:;
    /* $A1DE: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x88 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1E0:;
    /* $A1E0: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0xB8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1E2:;
    /* $A1E2: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1E4:;
    /* $A1E4: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x42); FLAG_NZ(g_cpu.Y);
label_A1E6:;
    /* $A1E6: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x7E); FLAG_NZ(g_cpu.Y);
label_A1E8:;
    /* $A1E8: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xAD); FLAG_NZ(g_cpu.Y);
label_A1EA:;
    /* $A1EA: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xE2); FLAG_NZ(g_cpu.Y);
label_A1EC:;
    /* $A1EC: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x14); FLAG_NZ(g_cpu.Y);
label_A1EE:;
    /* $A1EE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x58); FLAG_NZ(g_cpu.A);
label_A1F0:;
    /* $A1F0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x90); FLAG_NZ(g_cpu.A);
label_A1F2:;
    /* $A1F2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xBF); FLAG_NZ(g_cpu.A);
label_A1F4:;
    /* $A1F4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xE8); FLAG_NZ(g_cpu.A);
label_A1F6:;
    /* $A1F6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x47); FLAG_NZ(g_cpu.A);
label_A1F8:;
    /* $A1F8: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x47); FLAG_NZ(g_cpu.X);
label_A1FA:;
    /* $A1FA: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x83); FLAG_NZ(g_cpu.X);
label_A1FC:;
    /* $A1FC: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0xB5); FLAG_NZ(g_cpu.X);
label_A1FE:;
    /* $A1FE: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0xD9); FLAG_NZ(g_cpu.X);
label_A200:;
    /* $A200: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x13); FLAG_NZ(g_cpu.X);
label_A202:;
    /* $A202: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0x45); FLAG_NZ(g_cpu.A);
label_A204:;
    /* $A204: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0x80); FLAG_NZ(g_cpu.A);
label_A206:;
    /* $A206: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0xB2); FLAG_NZ(g_cpu.A);
label_A208:;
    /* $A208: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0xF6); FLAG_NZ(g_cpu.A);
label_A20A:;
    /* $A20A: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0x3F); FLAG_NZ(g_cpu.A);
label_A20C:;
    /* $A20C: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A20D:;
    /* $A20D: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0xA8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A20F:;
    /* $A20F: C7 */ maybe_trigger_vblank(5); { uint16_t a=0xA8; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A211:;
    /* $A211: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xA9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A213:;
    /* $A213: 4F */ maybe_trigger_vblank(6); { uint16_t a=0x72A9; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A216:;
    /* $A216: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x90; FLAG_NZ(g_cpu.A);
label_A218:;
    /* $A218: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xBE; FLAG_NZ(g_cpu.A);
label_A21A:;
    /* $A21A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFE; FLAG_NZ(g_cpu.A);
label_A21C:;
    /* $A21C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x33; FLAG_NZ(g_cpu.A);
label_A21E:;
    /* $A21E: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A21F:;
    /* $A21F: 6B */ maybe_trigger_vblank(2); { g_cpu.A &= 0xAA; uint8_t c=g_cpu.C; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>6)&1; g_cpu.V=(((g_cpu.A>>6)&1)^((g_cpu.A>>5)&1)); }
label_A221:;
    /* $A221: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0x97AA + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A224:;
    /* $A224: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A225:;
    /* $A225: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A1D1;
    }
label_A227:;
    /* $A227: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xAA + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_A229:;
    /* $A229: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xC2AA + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_A22C:;
    /* $A22C: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A22D:;
    /* $A22D: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_A22E:;
    /* $A22E: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A22F:;
    /* $A22F: E2 */ maybe_trigger_vblank(2); /* NOP */
label_A231:;
    /* $A231: E7 */ maybe_trigger_vblank(5); { uint16_t a=0xAA; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A233:;
    /* $A233: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xEFAA); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A236:;
    /* $A236: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A237:;
    /* $A237: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_A238:;
    /* $A238: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A239:;
    /* $A239: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x03AA + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A23C:;
    /* $A23C: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x08; FLAG_NZ(g_cpu.A);
label_A23E:;
    /* $A23E: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x11; FLAG_NZ(g_cpu.A);
label_A240:;
    /* $A240: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x26; FLAG_NZ(g_cpu.A);
label_A242:;
    /* $A242: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x29; FLAG_NZ(g_cpu.A);
label_A244:;
    /* $A244: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x3C; FLAG_NZ(g_cpu.A);
label_A246:;
    /* $A246: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x51; FLAG_NZ(g_cpu.A);
label_A248:;
    /* $A248: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x55; FLAG_NZ(g_cpu.A);
label_A24A:;
    /* $A24A: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x68; FLAG_NZ(g_cpu.A);
label_A24C:;
    /* $A24C: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x75; FLAG_NZ(g_cpu.A);
label_A24E:;
    /* $A24E: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x88; FLAG_NZ(g_cpu.A);
label_A250:;
    /* $A250: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x9B; FLAG_NZ(g_cpu.A);
label_A252:;
    /* $A252: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0xB0; FLAG_NZ(g_cpu.A);
label_A254:;
    /* $A254: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0xBA; FLAG_NZ(g_cpu.A);
label_A256:;
    /* $A256: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0xBD; FLAG_NZ(g_cpu.A);
label_A258:;
    /* $A258: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0xC4; FLAG_NZ(g_cpu.A);
label_A25A:;
    /* $A25A: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0xE0; FLAG_NZ(g_cpu.A);
label_A25C:;
    /* $A25C: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0xE9; FLAG_NZ(g_cpu.A);
label_A25E:;
    /* $A25E: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0xFE; FLAG_NZ(g_cpu.A);
label_A260:;
    /* $A260: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x01; FLAG_NZ(g_cpu.A);
label_A262:;
    /* $A262: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0xAC0A); FLAG_NZ(g_cpu.Y);
label_A265:;
    /* $A265: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x14AC; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A268:;
    /* $A268: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0xAC1E); FLAG_NZ(g_cpu.Y);
label_A26B:;
    /* $A26B: 27 */ maybe_trigger_vblank(5); { uint16_t a=0xAC; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A26D:;
    /* $A26D: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A26E:;
    /* $A26E: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA2 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A270:;
    /* $A270: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A272:;
    /* $A272: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x81); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A274:;
    /* $A274: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA274); return;
}

void func_BDBB_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BDBB_b4");
#endif
label_BDBB:;
    /* $BDBB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBDBB); return;
}

void func_B91C_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B91C_b4");
#endif
label_B91C:;
    /* $B91C: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BB49_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB49_b4");
#endif
label_BB49:;
    /* $BB49: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BBE7_b4(); return;
}

void func_BB46_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB46_b4");
#endif
label_BB46:;
    /* $BB46: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BC0E_b4(); return;
}

void func_BACD_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BACD_b4");
#endif
label_BACD:;
    /* $BACD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCF; g_cpu.S--; func_B420_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBACD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BAD0:;
    /* $BAD0: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BAD1_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BAD1_b4");
#endif
label_BAD1:;
    /* $BAD1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD3; g_cpu.S--; func_BA67_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBAD1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BAD4:;
    /* $BAD4: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BAE0_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BAE0_b4");
#endif
label_BAE0:;
    /* $BAE0: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BAE1:;
    /* $BAE1: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_BAE2:;
    /* $BAE2: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BAE3:;
    /* $BAE3: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_BAE4:;
    /* $BAE4: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BAE5:;
    /* $BAE5: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_BAE7:;
    /* $BAE7: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0xBAD1); return; }
label_BAE9:;
    /* $BAE9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x064B); FLAG_NZ(g_cpu.A);
label_BAEC:;
    /* $BAEC: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_BAED:;
    /* $BAED: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x04 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x04); g_cpu.A=r&0xFF; }
label_BAEF:;
    /* $BAEF: 8D */ maybe_trigger_vblank(4); nes_write(0x064B, g_cpu.A);
label_BAF2:;
    /* $BAF2: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BAF3:;
    /* $BAF3: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_BAF4:;
    /* $BAF4: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BAF5:;
    /* $BAF5: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0630 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BAF8:;
    /* $BAF8: 85 */ maybe_trigger_vblank(3); nes_write(0xE6, g_cpu.A);
label_BAFA:;
    /* $BAFA: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0631 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BAFD:;
    /* $BAFD: 85 */ maybe_trigger_vblank(3); nes_write(0xE7, g_cpu.A);
label_BAFF:;
    /* $BAFF: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0631 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB02:;
    /* $BB02: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BAE0;
    }
label_BB04:;
    /* $BB04: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BB05:;
    /* $BB05: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_BB06:;
    /* $BB06: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BB07:;
    /* $BB07: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0640 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB0A:;
    /* $BB0A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BAE3;
    }
label_BB0C:;
    /* $BB0C: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0638 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BB0F:;
    /* $BB0F: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0638 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB12:;
    /* $BB12: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xE6) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB14:;
    /* $BB14: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0xBACD); return; }
label_BB16:;
    /* $BB16: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BB17:;
    /* $BB17: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_BB19:;
    /* $BB19: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_BB24;
label_BB1B:;
    /* $BB1B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xC0; FLAG_NZ(g_cpu.A);
label_BB1D:;
    /* $BB1D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_BB1F:;
    /* $BB1F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_BB34;
label_BB21:;
    /* $BB21: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BB4C_b4(); return;
label_BB24:;
    /* $BB24: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0624 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB27:;
    /* $BB27: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_BB43;
label_BB29:;
    /* $BB29: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0624 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB2C:;
    /* $BB2C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x063C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB2F:;
    /* $BB2F: 9D */ maybe_trigger_vblank(5); nes_write((0x0638 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB32:;
    /* $BB32: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_BB43;
label_BB34:;
    /* $BB34: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_BB35:;
    /* $BB35: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x3F; FLAG_NZ(g_cpu.A);
label_BB37:;
    /* $BB37: 9D */ maybe_trigger_vblank(5); nes_write((0x0624 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB3A:;
    /* $BB3A: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0624 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB3D:;
    /* $BB3D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0638 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB40:;
    /* $BB40: 9D */ maybe_trigger_vblank(5); nes_write((0x063C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB43:;
    /* $BB43: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_BB0C;
}

void func_BCBD_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCBD_b4");
#endif
label_BCBD:;
    /* $BCBD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBF; g_cpu.S--; func_BA14_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBCBD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BCC0:;
    /* $BCC0: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC2; g_cpu.S--; func_BF62_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBCC0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BCC3:;
    /* $BCC3: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BAD5_b4(); return;
}

void func_BCBB_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCBB_b4");
#endif
label_BCBB:;
    /* $BCBB: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BCBC:;
    /* $BCBC: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BCBD:;
    /* $BCBD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBF; g_cpu.S--; func_BA14_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBCBD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BCC0:;
    /* $BCC0: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC2; g_cpu.S--; func_BF62_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBCC0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BCC3:;
    /* $BCC3: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BAD5_b4(); return;
}

void func_B42C_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B42C_b4");
#endif
label_B42C:;
    /* $B42C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x068D); FLAG_NZ(g_cpu.A);
label_B42F:;
    /* $B42F: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x064D); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B432:;
    /* $B432: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_B43A;
label_B434:;
    /* $B434: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x36; g_cpu.S--; func_B44D_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB434, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B437:;
    /* $B437: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x39; g_cpu.S--; func_B46E_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB437, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B43A:;
    /* $B43A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3C; g_cpu.S--; func_B43E_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB43A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B43D:;
    /* $B43D: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B1C8_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B1C8_b4");
#endif
label_B1C8:;
    /* $B1C8: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B1CB:;
    /* $B1CB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0xB17F); return; }
label_B1CD:;
    /* $B1CD: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x04 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B1CF:;
    /* $B1CF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xB2C8 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B1D2:;
    /* $B1D2: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B1D4:;
    /* $B1D4: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x04; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B1D6:;
    /* $B1D6: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B1D8:;
    /* $B1D8: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xB9; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B1DA:;
    /* $B1DA: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B1DC:;
    /* $B1DC: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xBB); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B1DE:;
    /* $B1DE: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFF + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B1E0:;
    /* $B1E0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0xB194); return; }
label_B1E2:;
    /* $B1E2: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x07); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B1E4:;
    /* $B1E4: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xB9); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B1E6:;
    /* $B1E6: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x04; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B1E8:;
    /* $B1E8: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xBB); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B1EA:;
    /* $B1EA: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFF + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B1EC:;
    /* $B1EC: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xBA; g_cpu.C=(g_cpu.X>=0xBA)?1:0; FLAG_NZ(r&0xFF); }
label_B1EE:;
    /* $B1EE: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B1EF:;
    /* $B1EF: 1A */ maybe_trigger_vblank(2); /* NOP */
label_B1F0:;
    /* $B1F0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B1F1:;
    /* $B1F1: 3A */ maybe_trigger_vblank(2); /* NOP */
label_B1F2:;
    /* $B1F2: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B17F_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B17F_b4");
#endif
label_B17F:;
    /* $B17F: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_B180:;
    /* $B180: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x38 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B182:;
    /* $B182: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B185:;
    /* $B185: 3A */ maybe_trigger_vblank(2); /* NOP */
label_B186:;
    /* $B186: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_B187:;
    /* $B187: 3A */ maybe_trigger_vblank(2); /* NOP */
label_B188:;
    /* $B188: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B18B:;
    /* $B18B: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x3E3A + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B18E:;
    /* $B18E: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B191:;
    /* $B191: C2 */ maybe_trigger_vblank(2); /* NOP */
label_B193:;
    /* $B193: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B194:;
    /* $B194: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { call_by_address(0xB1AE); return; }
label_B196:;
    /* $B196: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_B1B0;
label_B198:;
    /* $B198: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { call_by_address(0xB1B2); return; }
label_B19A:;
    /* $B19A: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_B1BE;
label_B19C:;
    /* $B19C: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_B19D:;
    /* $B19D: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x22) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B19F:;
    /* $B19F: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_B1A0:;
    /* $B1A0: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B1A1:;
    /* $B1A1: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_B1A2:;
    /* $B1A2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA4; g_cpu.S--; if (!nes_dispatch_call(0x181C, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB1A2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B1A5:;
    /* $B1A5: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x14 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B1A7:;
    /* $B1A7: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x14 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B1A9:;
    /* $B1A9: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2A2A); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_B1AC:;
    /* $B1AC: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x2A2A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1AF:;
    /* $B1AF: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B1B0:;
    /* $B1B0: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B1B3:;
    /* $B1B3: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B1B4:;
    /* $B1B4: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_B1B5:;
    /* $B1B5: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_B1B6:;
    /* $B1B6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x2828 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1B9:;
    /* $B1B9: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_B1BA:;
    /* $B1BA: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B1BB:;
    /* $B1BB: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_B1BC:;
    /* $B1BC: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x26; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B1BE:;
    /* $B1BE: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x2626 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1C1:;
    /* $B1C1: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x02BB + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B1C4:;
    /* $B1C4: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x2626 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1C7:;
    /* $B1C7: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x02BB + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B1CA:;
    /* $B1CA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xB2D0 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B1CD:;
    /* $B1CD: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x04 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B1CF:;
    /* $B1CF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xB2C8 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B1D2:;
    /* $B1D2: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B1D4:;
    /* $B1D4: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x04; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B1D6:;
    /* $B1D6: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B1D8:;
    /* $B1D8: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xB9; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B1DA:;
    /* $B1DA: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B1DC:;
    /* $B1DC: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xBB); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B1DE:;
    /* $B1DE: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFF + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B1E0:;
    /* $B1E0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B194;
    }
label_B1E2:;
    /* $B1E2: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x07); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B1E4:;
    /* $B1E4: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xB9); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B1E6:;
    /* $B1E6: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x04; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B1E8:;
    /* $B1E8: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xBB); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B1EA:;
    /* $B1EA: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFF + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B1EC:;
    /* $B1EC: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xBA; g_cpu.C=(g_cpu.X>=0xBA)?1:0; FLAG_NZ(r&0xFF); }
label_B1EE:;
    /* $B1EE: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B1EF:;
    /* $B1EF: 1A */ maybe_trigger_vblank(2); /* NOP */
label_B1F0:;
    /* $B1F0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B1F1:;
    /* $B1F1: 3A */ maybe_trigger_vblank(2); /* NOP */
label_B1F2:;
    /* $B1F2: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
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
label_B717:; return;
label_B719:; return;
label_B71B:; return;
label_B71D:; return;
label_B720:; return;
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
label_B76C:; return;
label_B76F:; return;
label_B771:; return;
label_B773:; return;
label_B775:; return;
label_B777:; return;
label_B779:; return;
label_B77B:; return;
label_B77D:; return;
label_B77F:; return;
label_B782:; return;
label_B783:; return;
label_B785:; return;
label_B788:; return;
label_B78A:; return;
label_B78D:; return;
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
label_B7B1:; return;
label_B7B4:; return;
label_B7B6:; return;
label_B7B9:; return;
label_B7BC:; return;
label_B7BF:; return;
label_B7C2:; return;
label_B7C4:; return;
label_B7C7:; return;
label_B7CA:; return;
label_B7CC:; return;
label_B7CD:; return;
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
label_B8C6:; return;
label_B8C8:; return;
label_B8CB:; return;
label_B8CE:; return;
label_B8D0:; return;
label_B8D3:; return;
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
label_BC83:; return;
label_BC85:; return;
label_BC88:; return;
label_BC8B:; return;
label_BC8D:; return;
label_BC90:; return;
label_BC91:; return;
label_BC93:; return;
label_BC94:; return;
label_BC97:; return;
label_BC98:; return;
label_BC9A:; return;
label_BC9D:; return;
label_BC9E:; return;
label_BCA1:; return;
label_BCA3:; return;
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
label_BE1E:; return;
label_BE20:; return;
label_BE21:; return;
label_BE24:; return;
label_BE26:; return;
label_BE27:; return;
label_BE29:; return;
label_BE2A:; return;
label_BE2B:; return;
label_BE2E:; return;
label_BE2F:; return;
label_BE32:; return;
label_BE34:; return;
label_BE36:; return;
label_BE39:; return;
label_BE3C:; return;
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
label_BEA3:; return;
label_BEA4:; return;
label_BEA6:; return;
label_BEA9:; return;
label_BEAA:; return;
label_BEAB:; return;
label_BEAD:; return;
label_BEAF:; return;
label_BEB1:; return;
label_BEB3:; return;
label_BEB5:; return;
label_BEB7:; return;
label_BEB9:; return;
label_BEBB:; return;
label_BEBD:; return;
label_BEBF:; return;
label_BEC1:; return;
label_BEC3:; return;
label_BEC4:; return;
label_BEC7:; return;
label_BEC8:; return;
label_BECA:; return;
label_BECC:; return;
label_BECF:; return;
label_BED0:; return;
label_BED1:; return;
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
}

void func_B194_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B194_b4");
#endif
label_B194:;
    /* $B194: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { call_by_address(0xB1AE); return; }
label_B196:;
    /* $B196: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_B1B0;
label_B198:;
    /* $B198: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { call_by_address(0xB1B2); return; }
label_B19A:;
    /* $B19A: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_B1BE;
label_B19C:;
    /* $B19C: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_B19D:;
    /* $B19D: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x22) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B19F:;
    /* $B19F: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_B1A0:;
    /* $B1A0: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B1A1:;
    /* $B1A1: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_B1A2:;
    /* $B1A2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB1; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA4; g_cpu.S--; if (!nes_dispatch_call(0x181C, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB1A2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B1A5:;
    /* $B1A5: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x14 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B1A7:;
    /* $B1A7: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x14 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B1A9:;
    /* $B1A9: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2A2A); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_B1AC:;
    /* $B1AC: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x2A2A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1AF:;
    /* $B1AF: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B1B0:;
    /* $B1B0: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B1B3:;
    /* $B1B3: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B1B4:;
    /* $B1B4: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_B1B5:;
    /* $B1B5: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_B1B6:;
    /* $B1B6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x2828 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1B9:;
    /* $B1B9: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_B1BA:;
    /* $B1BA: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B1BB:;
    /* $B1BB: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_B1BC:;
    /* $B1BC: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x26; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B1BE:;
    /* $B1BE: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x2626 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1C1:;
    /* $B1C1: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x02BB + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B1C4:;
    /* $B1C4: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x2626 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1C7:;
    /* $B1C7: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x02BB + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B1CA:;
    /* $B1CA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xB2D0 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B1CD:;
    /* $B1CD: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x04 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B1CF:;
    /* $B1CF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xB2C8 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B1D2:;
    /* $B1D2: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B1D4:;
    /* $B1D4: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x04; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B1D6:;
    /* $B1D6: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B1D8:;
    /* $B1D8: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xB9; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B1DA:;
    /* $B1DA: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B1DC:;
    /* $B1DC: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xBB); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B1DE:;
    /* $B1DE: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFF + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B1E0:;
    /* $B1E0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B194;
    }
label_B1E2:;
    /* $B1E2: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x07); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B1E4:;
    /* $B1E4: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xB9); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B1E6:;
    /* $B1E6: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x04; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B1E8:;
    /* $B1E8: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xBB); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B1EA:;
    /* $B1EA: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFF + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B1EC:;
    /* $B1EC: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xBA; g_cpu.C=(g_cpu.X>=0xBA)?1:0; FLAG_NZ(r&0xFF); }
label_B1EE:;
    /* $B1EE: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B1EF:;
    /* $B1EF: 1A */ maybe_trigger_vblank(2); /* NOP */
label_B1F0:;
    /* $B1F0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B1F1:;
    /* $B1F1: 3A */ maybe_trigger_vblank(2); /* NOP */
label_B1F2:;
    /* $B1F2: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
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
label_B717:; return;
label_B719:; return;
label_B71B:; return;
label_B71D:; return;
label_B720:; return;
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
label_B76C:; return;
label_B76F:; return;
label_B771:; return;
label_B773:; return;
label_B775:; return;
label_B777:; return;
label_B779:; return;
label_B77B:; return;
label_B77D:; return;
label_B77F:; return;
label_B782:; return;
label_B783:; return;
label_B785:; return;
label_B788:; return;
label_B78A:; return;
label_B78D:; return;
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
label_B7B1:; return;
label_B7B4:; return;
label_B7B6:; return;
label_B7B9:; return;
label_B7BC:; return;
label_B7BF:; return;
label_B7C2:; return;
label_B7C4:; return;
label_B7C7:; return;
label_B7CA:; return;
label_B7CC:; return;
label_B7CD:; return;
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
label_B8C6:; return;
label_B8C8:; return;
label_B8CB:; return;
label_B8CE:; return;
label_B8D0:; return;
label_B8D3:; return;
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
label_BC83:; return;
label_BC85:; return;
label_BC88:; return;
label_BC8B:; return;
label_BC8D:; return;
label_BC90:; return;
label_BC91:; return;
label_BC93:; return;
label_BC94:; return;
label_BC97:; return;
label_BC98:; return;
label_BC9A:; return;
label_BC9D:; return;
label_BC9E:; return;
label_BCA1:; return;
label_BCA3:; return;
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
label_BE1E:; return;
label_BE20:; return;
label_BE21:; return;
label_BE24:; return;
label_BE26:; return;
label_BE27:; return;
label_BE29:; return;
label_BE2A:; return;
label_BE2B:; return;
label_BE2E:; return;
label_BE2F:; return;
label_BE32:; return;
label_BE34:; return;
label_BE36:; return;
label_BE39:; return;
label_BE3C:; return;
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
label_BEA3:; return;
label_BEA4:; return;
label_BEA6:; return;
label_BEA9:; return;
label_BEAA:; return;
label_BEAB:; return;
label_BEAD:; return;
label_BEAF:; return;
label_BEB1:; return;
label_BEB3:; return;
label_BEB5:; return;
label_BEB7:; return;
label_BEB9:; return;
label_BEBB:; return;
label_BEBD:; return;
label_BEBF:; return;
label_BEC1:; return;
label_BEC3:; return;
label_BEC4:; return;
label_BEC7:; return;
label_BEC8:; return;
label_BECA:; return;
label_BECC:; return;
label_BECF:; return;
label_BED0:; return;
label_BED1:; return;
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
}

void func_B6E0_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6E0_b4");
#endif
label_B6E0:;
    /* $B6E0: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE2; g_cpu.S--; func_B4D9_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB6E0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B6E3:;
    /* $B6E3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B6FC;
label_B6E5:;
    /* $B6E5: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x0671); FLAG_NZ(g_cpu.Y);
label_B6E8:;
    /* $B6E8: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB6D9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B6EB:;
    /* $B6EB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B6F0;
label_B6ED:;
    /* $B6ED: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B722_b4(); return;
label_B6F0:;
    /* $B6F0: 8D */ maybe_trigger_vblank(4); nes_write(0x4002, g_cpu.A);
label_B6F3:;
    /* $B6F3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xB274); FLAG_NZ(g_cpu.A);
label_B6F6:;
    /* $B6F6: 8D */ maybe_trigger_vblank(4); nes_write(0x4003, g_cpu.A);
label_B6F9:;
    /* $B6F9: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0671; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B6FC:;
    /* $B6FC: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B703_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B703_b4");
#endif
label_B703:;
    /* $B703: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x05; g_cpu.S--; func_B4D9_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB703, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B706:;
    /* $B706: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0xB6FC); return; }
label_B708:;
    /* $B708: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0671; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B70B:;
    /* $B70B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0671); FLAG_NZ(g_cpu.A);
label_B70E:;
    /* $B70E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_B710:;
    /* $B710: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_B722;
label_B712:;
    /* $B712: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x6D; FLAG_NZ(g_cpu.Y);
label_B714:;
    /* $B714: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B398_b4(); return;
label_B717:;
    /* $B717: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_B719:;
    /* $B719: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x6D; FLAG_NZ(g_cpu.Y);
label_B71B:;
    /* $B71B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B769;
label_B71D:;
    /* $B71D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1F; g_cpu.S--; func_B4D9_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB71D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B720:;
    /* $B720: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0xB6FC); return; }
label_B722:;
    /* $B722: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_B724:;
    /* $B724: 8D */ maybe_trigger_vblank(4); nes_write(0x4000, g_cpu.A);
label_B727:;
    /* $B727: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B729:;
    /* $B729: 8D */ maybe_trigger_vblank(4); nes_write(0x0653, g_cpu.A);
label_B72C:;
    /* $B72C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2E; g_cpu.S--; func_B4D2_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB72C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B72F:;
    /* $B72F: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0607; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B732:;
    /* $B732: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B733:;
    /* $B733: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x068D); FLAG_NZ(g_cpu.A);
label_B736:;
    /* $B736: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_B738:;
    /* $B738: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0xB6FC); return; }
label_B73A:;
    /* $B73A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_B73C:;
    /* $B73C: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x81; FLAG_NZ(g_cpu.Y);
label_B73E:;
    /* $B73E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B769;
label_B740:;
    /* $B740: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_B742:;
    /* $B742: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x85; FLAG_NZ(g_cpu.Y);
label_B744:;
    /* $B744: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B769;
label_B746:;
    /* $B746: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x061F); FLAG_NZ(g_cpu.A);
label_B749:;
    /* $B749: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B74A:;
    /* $B74A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_B78E;
label_B74C:;
    /* $B74C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0689); FLAG_NZ(g_cpu.A);
label_B74F:;
    /* $B74F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xCC; FLAG_NZ(g_cpu.A);
label_B751:;
    /* $B751: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0xB6FC); return; }
label_B753:;
    /* $B753: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x061F); FLAG_NZ(g_cpu.A);
label_B756:;
    /* $B756: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_B757:;
    /* $B757: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_B75F;
label_B759:;
    /* $B759: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_B75B:;
    /* $B75B: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x7D; FLAG_NZ(g_cpu.Y);
label_B75D:;
    /* $B75D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B769;
label_B75F:;
    /* $B75F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_B761:;
    /* $B761: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x79; FLAG_NZ(g_cpu.Y);
label_B763:;
    /* $B763: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B769;
label_B765:;
    /* $B765: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0B; FLAG_NZ(g_cpu.A);
label_B767:;
    /* $B767: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x75; FLAG_NZ(g_cpu.Y);
label_B769:;
    /* $B769: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B482_b4(); return;
label_B76C:;
    /* $B76C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x068D); FLAG_NZ(g_cpu.A);
label_B76F:;
    /* $B76F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_B771:;
    /* $B771: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_B779;
label_B773:;
    /* $B773: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x16; FLAG_NZ(g_cpu.A);
label_B775:;
    /* $B775: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x89; FLAG_NZ(g_cpu.Y);
label_B777:;
    /* $B777: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B769;
    }
label_B779:;
    /* $B779: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_B77B:;
    /* $B77B: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x69; FLAG_NZ(g_cpu.Y);
label_B77D:;
    /* $B77D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B769;
    }
label_B77F:;
    /* $B77F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x061F); FLAG_NZ(g_cpu.A);
label_B782:;
    /* $B782: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B783:;
    /* $B783: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_B795;
label_B785:;
    /* $B785: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x87; g_cpu.S--; func_B4D9_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB785, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B788:;
    /* $B788: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B78D;
label_B78A:;
    /* $B78A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_B722;
label_B78D:;
    /* $B78D: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B78E:;
    /* $B78E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_B790:;
    /* $B790: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x91; FLAG_NZ(g_cpu.Y);
label_B792:;
    /* $B792: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B482_b4(); return;
label_B795:;
    /* $B795: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x97; g_cpu.S--; func_B4D9_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB795, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B798:;
    /* $B798: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B79D;
label_B79A:;
    /* $B79A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_B722;
label_B79D:;
    /* $B79D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0671); FLAG_NZ(g_cpu.A);
label_B7A0:;
    /* $B7A0: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_B7A2:;
    /* $B7A2: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B7A3:;
    /* $B7A3: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB7A8 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B7A6:;
    /* $B7A6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B7D0;
label_B7A8:;
    /* $B7A8: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_B7AA:;
    /* $B7AA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_B7AC:;
    /* $B7AC: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x8D; FLAG_NZ(g_cpu.Y);
label_B7AE:;
    /* $B7AE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B482_b4(); return;
label_B7B1:;
    /* $B7B1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; func_B4D9_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB7B1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B7B4:;
    /* $B7B4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B7C7;
label_B7B6:;
    /* $B7B6: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x0675); FLAG_NZ(g_cpu.Y);
label_B7B9:;
    /* $B7B9: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0675; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B7BC:;
    /* $B7BC: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB7D9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B7BF:;
    /* $B7BF: 8D */ maybe_trigger_vblank(4); nes_write(0x4000, g_cpu.A);
label_B7C2:;
    /* $B7C2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B7D6;
label_B7C4:;
    /* $B7C4: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_B722;
label_B7C7:;
    /* $B7C7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0671); FLAG_NZ(g_cpu.A);
label_B7CA:;
    /* $B7CA: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_B7CC:;
    /* $B7CC: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B7CD:;
    /* $B7CD: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB7D7 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B7D0:;
    /* $B7D0: 8D */ maybe_trigger_vblank(4); nes_write(0x4002, g_cpu.A);
label_B7D3:;
    /* $B7D3: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0671; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B7D6:;
    /* $B7D6: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B71D_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B71D_b4");
#endif
label_B71D:;
    /* $B71D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1F; g_cpu.S--; func_B4D9_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB71D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B720:;
    /* $B720: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0xB6FC); return; }
label_B722:;
    /* $B722: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_B724:;
    /* $B724: 8D */ maybe_trigger_vblank(4); nes_write(0x4000, g_cpu.A);
label_B727:;
    /* $B727: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B729:;
    /* $B729: 8D */ maybe_trigger_vblank(4); nes_write(0x0653, g_cpu.A);
label_B72C:;
    /* $B72C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2E; g_cpu.S--; func_B4D2_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB72C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B72F:;
    /* $B72F: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0607; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B732:;
    /* $B732: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B77F_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B77F_b4");
#endif
label_B77F:;
    /* $B77F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x061F); FLAG_NZ(g_cpu.A);
label_B782:;
    /* $B782: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B783:;
    /* $B783: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_B795;
label_B785:;
    /* $B785: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x87; g_cpu.S--; func_B4D9_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB785, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B788:;
    /* $B788: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B78D;
label_B78A:;
    /* $B78A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B722_b4(); return;
label_B78D:;
    /* $B78D: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B78E:;
    /* $B78E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_B790:;
    /* $B790: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x91; FLAG_NZ(g_cpu.Y);
label_B792:;
    /* $B792: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B482_b4(); return;
label_B795:;
    /* $B795: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x97; g_cpu.S--; func_B4D9_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB795, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B798:;
    /* $B798: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B79D;
label_B79A:;
    /* $B79A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B722_b4(); return;
label_B79D:;
    /* $B79D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0671); FLAG_NZ(g_cpu.A);
label_B7A0:;
    /* $B7A0: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_B7A2:;
    /* $B7A2: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B7A3:;
    /* $B7A3: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB7A8 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B7A6:;
    /* $B7A6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B7D0;
label_B7A8:;
    /* $B7A8: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_B7AA:;
    /* $B7AA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_B7AC:;
    /* $B7AC: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x8D; FLAG_NZ(g_cpu.Y);
label_B7AE:;
    /* $B7AE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B482_b4(); return;
label_B7B1:;
    /* $B7B1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; func_B4D9_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB7B1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B7B4:;
    /* $B7B4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B7C7;
label_B7B6:;
    /* $B7B6: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x0675); FLAG_NZ(g_cpu.Y);
label_B7B9:;
    /* $B7B9: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0675; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B7BC:;
    /* $B7BC: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB7D9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B7BF:;
    /* $B7BF: 8D */ maybe_trigger_vblank(4); nes_write(0x4000, g_cpu.A);
label_B7C2:;
    /* $B7C2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B7D6;
label_B7C4:;
    /* $B7C4: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B722_b4(); return;
label_B7C7:;
    /* $B7C7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0671); FLAG_NZ(g_cpu.A);
label_B7CA:;
    /* $B7CA: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_B7CC:;
    /* $B7CC: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B7CD:;
    /* $B7CD: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB7D7 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B7D0:;
    /* $B7D0: 8D */ maybe_trigger_vblank(4); nes_write(0x4002, g_cpu.A);
label_B7D3:;
    /* $B7D3: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0671; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B7D6:;
    /* $B7D6: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B7B1_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7B1_b4");
#endif
label_B7B1:;
    /* $B7B1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; func_B4D9_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB7B1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B7B4:;
    /* $B7B4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B7C7;
label_B7B6:;
    /* $B7B6: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x0675); FLAG_NZ(g_cpu.Y);
label_B7B9:;
    /* $B7B9: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0675; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B7BC:;
    /* $B7BC: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB7D9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B7BF:;
    /* $B7BF: 8D */ maybe_trigger_vblank(4); nes_write(0x4000, g_cpu.A);
label_B7C2:;
    /* $B7C2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B7D6;
label_B7C4:;
    /* $B7C4: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B722_b4(); return;
label_B7C7:;
    /* $B7C7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0671); FLAG_NZ(g_cpu.A);
label_B7CA:;
    /* $B7CA: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_B7CC:;
    /* $B7CC: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B7CD:;
    /* $B7CD: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB7D7 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B7D0:;
    /* $B7D0: 8D */ maybe_trigger_vblank(4); nes_write(0x4002, g_cpu.A);
label_B7D3:;
    /* $B7D3: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0671; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B7D6:;
    /* $B7D6: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B902_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B902_b4");
#endif
label_B902:;
    /* $B902: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x04; g_cpu.S--; func_B434_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB902, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B905:;
    /* $B905: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0E; FLAG_NZ(g_cpu.A);
label_B907:;
    /* $B907: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA5; FLAG_NZ(g_cpu.Y);
label_B909:;
    /* $B909: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0B; g_cpu.S--; func_B482_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB909, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B90C:;
    /* $B90C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x15; FLAG_NZ(g_cpu.A);
label_B90E:;
    /* $B90E: 8D */ maybe_trigger_vblank(4); nes_write(0x0616, g_cpu.A);
label_B911:;
    /* $B911: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xB2A7); FLAG_NZ(g_cpu.A);
label_B914:;
    /* $B914: 8D */ maybe_trigger_vblank(4); nes_write(0x0610, g_cpu.A);
label_B917:;
    /* $B917: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B919:;
    /* $B919: 8D */ maybe_trigger_vblank(4); nes_write(0x0611, g_cpu.A);
label_B91C:;
    /* $B91C: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B7DC_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7DC_b4");
#endif
label_B7DC:;
    /* $B7DC: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xB2B7); FLAG_NZ(g_cpu.A);
label_B7DF:;
    /* $B7DF: 8D */ maybe_trigger_vblank(4); nes_write(0x0610, g_cpu.A);
label_B7E2:;
    /* $B7E2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xB2B8); FLAG_NZ(g_cpu.A);
label_B7E5:;
    /* $B7E5: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_B7E7:;
    /* $B7E7: 8D */ maybe_trigger_vblank(4); nes_write(0x0611, g_cpu.A);
label_B7EA:;
    /* $B7EA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_B7EC:;
    /* $B7EC: 8D */ maybe_trigger_vblank(4); nes_write(0x0612, g_cpu.A);
label_B7EF:;
    /* $B7EF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B7F1:;
    /* $B7F1: 8D */ maybe_trigger_vblank(4); nes_write(0x0613, g_cpu.A);
label_B7F4:;
    /* $B7F4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1F; FLAG_NZ(g_cpu.A);
label_B7F6:;
    /* $B7F6: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xB5; FLAG_NZ(g_cpu.Y);
label_B7F8:;
    /* $B7F8: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B482_b4(); return;
}

void func_B8D7_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8D7_b4");
#endif
label_B8D7:;
    /* $B8D7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_B8D9:;
    /* $B8D9: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA1; FLAG_NZ(g_cpu.Y);
label_B8DB:;
    /* $B8DB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDD; g_cpu.S--; func_B482_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB8DB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B8DE:;
    /* $B8DE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B8F3_b4(); return;
}

void func_B951_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B951_b4");
#endif
label_B951:;
    /* $B951: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xB2B3); FLAG_NZ(g_cpu.A);
label_B954:;
    /* $B954: 8D */ maybe_trigger_vblank(4); nes_write(0x0610, g_cpu.A);
label_B957:;
    /* $B957: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xB2B4); FLAG_NZ(g_cpu.A);
label_B95A:;
    /* $B95A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_B95C:;
    /* $B95C: 8D */ maybe_trigger_vblank(4); nes_write(0x0611, g_cpu.A);
label_B95F:;
    /* $B95F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B961:;
    /* $B961: 8D */ maybe_trigger_vblank(4); nes_write(0x0613, g_cpu.A);
label_B964:;
    /* $B964: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0B; FLAG_NZ(g_cpu.A);
label_B966:;
    /* $B966: 8D */ maybe_trigger_vblank(4); nes_write(0x0612, g_cpu.A);
label_B969:;
    /* $B969: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_B96B:;
    /* $B96B: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xB1; FLAG_NZ(g_cpu.Y);
label_B96D:;
    /* $B96D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B482_b4(); return;
}

void func_B809_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B809_b4");
#endif
label_B809:;
    /* $B809: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x068B); FLAG_NZ(g_cpu.A);
label_B80C:;
    /* $B80C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x80; FLAG_NZ(g_cpu.A);
label_B80E:;
    /* $B80E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0xB7D6); return; }
label_B810:;
    /* $B810: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_B812:;
    /* $B812: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA9; FLAG_NZ(g_cpu.Y);
label_B814:;
    /* $B814: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B482_b4(); return;
}

void func_B81F_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B81F_b4");
#endif
label_B81F:;
    /* $B81F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x12; FLAG_NZ(g_cpu.A);
label_B821:;
    /* $B821: 8D */ maybe_trigger_vblank(4); nes_write(0x0612, g_cpu.A);
label_B824:;
    /* $B824: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B826:;
    /* $B826: 8D */ maybe_trigger_vblank(4); nes_write(0x0613, g_cpu.A);
label_B829:;
    /* $B829: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xB2AF); FLAG_NZ(g_cpu.A);
label_B82C:;
    /* $B82C: 8D */ maybe_trigger_vblank(4); nes_write(0x0610, g_cpu.A);
label_B82F:;
    /* $B82F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xB2B0); FLAG_NZ(g_cpu.A);
label_B832:;
    /* $B832: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_B834:;
    /* $B834: 8D */ maybe_trigger_vblank(4); nes_write(0x0611, g_cpu.A);
label_B837:;
    /* $B837: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_B839:;
    /* $B839: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xAD; FLAG_NZ(g_cpu.Y);
label_B83B:;
    /* $B83B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B482_b4(); return;
}

void func_B864_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B864_b4");
#endif
label_B864:;
    /* $B864: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_B866:;
    /* $B866: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x9D; FLAG_NZ(g_cpu.Y);
label_B868:;
    /* $B868: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6A; g_cpu.S--; func_B482_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB868, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B86B:;
    /* $B86B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_B86D:;
    /* $B86D: 8D */ maybe_trigger_vblank(4); nes_write(0x0616, g_cpu.A);
label_B870:;
    /* $B870: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xB29F); FLAG_NZ(g_cpu.A);
label_B873:;
    /* $B873: 8D */ maybe_trigger_vblank(4); nes_write(0x0610, g_cpu.A);
label_B876:;
    /* $B876: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xB2A0); FLAG_NZ(g_cpu.A);
label_B879:;
    /* $B879: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_B87B:;
    /* $B87B: 8D */ maybe_trigger_vblank(4); nes_write(0x0611, g_cpu.A);
label_B87E:;
    /* $B87E: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B8A8_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8A8_b4");
#endif
label_B8A8:;
    /* $B8A8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_B8AA:;
    /* $B8AA: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x95; FLAG_NZ(g_cpu.Y);
label_B8AC:;
    /* $B8AC: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B482_b4(); return;
}

void func_B91D_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B91D_b4");
#endif
label_B91D:;
    /* $B91D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1F; g_cpu.S--; func_B4D9_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB91D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B920:;
    /* $B920: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B93C;
label_B922:;
    /* $B922: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_B924:;
    /* $B924: 8D */ maybe_trigger_vblank(4); nes_write(0x0612, g_cpu.A);
label_B927:;
    /* $B927: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B929:;
    /* $B929: 8D */ maybe_trigger_vblank(4); nes_write(0x0613, g_cpu.A);
label_B92C:;
    /* $B92C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2E; g_cpu.S--; func_B9BC_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB92C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B92F:;
    /* $B92F: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0673; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B932:;
    /* $B932: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0673); FLAG_NZ(g_cpu.A);
label_B935:;
    /* $B935: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x06; g_cpu.C=(g_cpu.A>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_B937:;
    /* $B937: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0xB91C); return; }
label_B939:;
    /* $B939: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B8C6_b4(); return;
label_B93C:;
    /* $B93C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3E; g_cpu.S--; func_B9D0_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB93C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B93F:;
    /* $B93F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0614); FLAG_NZ(g_cpu.A);
label_B942:;
    /* $B942: 8D */ maybe_trigger_vblank(4); nes_write(0x0612, g_cpu.A);
label_B945:;
    /* $B945: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0615); FLAG_NZ(g_cpu.A);
label_B948:;
    /* $B948: 8D */ maybe_trigger_vblank(4); nes_write(0x0613, g_cpu.A);
label_B94B:;
    /* $B94B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x4D; g_cpu.S--; func_B9A8_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB94B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B94E:;
    /* $B94E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B899_b4(); return;
}

void func_B7FB_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7FB_b4");
#endif
label_B7FB:;
    /* $B7FB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFD; g_cpu.S--; func_B4D9_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB7FB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B7FE:;
    /* $B7FE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B803;
label_B800:;
    /* $B800: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B8C6_b4(); return;
label_B803:;
    /* $B803: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x05; g_cpu.S--; func_B9BC_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB803, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B806:;
    /* $B806: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B899_b4(); return;
}

void func_B8E1_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8E1_b4");
#endif
label_B8E1:;
    /* $B8E1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE3; g_cpu.S--; func_B4D9_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB8E1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B8E4:;
    /* $B8E4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_B8F3;
label_B8E6:;
    /* $B8E6: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0673; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B8E9:;
    /* $B8E9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0673); FLAG_NZ(g_cpu.A);
label_B8EC:;
    /* $B8EC: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_B8EE:;
    /* $B8EE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0xB8D6); return; }
label_B8F0:;
    /* $B8F0: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B8C6_b4(); return;
label_B8F3:;
    /* $B8F3: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_B8F5:;
    /* $B8F5: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x6C; FLAG_NZ(g_cpu.A);
label_B8F7:;
    /* $B8F7: 8D */ maybe_trigger_vblank(4); nes_write(0x400A, g_cpu.A);
label_B8FA:;
    /* $B8FA: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_B8FC:;
    /* $B8FC: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xF8; FLAG_NZ(g_cpu.A);
label_B8FE:;
    /* $B8FE: 8D */ maybe_trigger_vblank(4); nes_write(0x400B, g_cpu.A);
label_B901:;
    /* $B901: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B970_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B970_b4");
#endif
label_B970:;
    /* $B970: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x72; g_cpu.S--; func_B4D9_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB970, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B973:;
    /* $B973: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B9A2;
label_B975:;
    /* $B975: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0673; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B978:;
    /* $B978: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0673); FLAG_NZ(g_cpu.A);
label_B97B:;
    /* $B97B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_B97D:;
    /* $B97D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B982;
label_B97F:;
    /* $B97F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B8C6_b4(); return;
label_B982:;
    /* $B982: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0612); FLAG_NZ(g_cpu.A);
label_B985:;
    /* $B985: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B986:;
    /* $B986: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0613); FLAG_NZ(g_cpu.A);
label_B989:;
    /* $B989: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B98A:;
    /* $B98A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x25; FLAG_NZ(g_cpu.A);
label_B98C:;
    /* $B98C: 8D */ maybe_trigger_vblank(4); nes_write(0x0612, g_cpu.A);
label_B98F:;
    /* $B98F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B991:;
    /* $B991: 8D */ maybe_trigger_vblank(4); nes_write(0x0613, g_cpu.A);
label_B994:;
    /* $B994: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x96; g_cpu.S--; func_B9A8_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB994, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B997:;
    /* $B997: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_B998:;
    /* $B998: 8D */ maybe_trigger_vblank(4); nes_write(0x0613, g_cpu.A);
label_B99B:;
    /* $B99B: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_B99C:;
    /* $B99C: 8D */ maybe_trigger_vblank(4); nes_write(0x0612, g_cpu.A);
label_B99F:;
    /* $B99F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B899_b4(); return;
label_B9A2:;
    /* $B9A2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA4; g_cpu.S--; func_B9BC_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB9A2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B9A5:;
    /* $B9A5: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B899_b4(); return;
}

void func_B817_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B817_b4");
#endif
label_B817:;
    /* $B817: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x19; g_cpu.S--; func_B4D9_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB817, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B81A:;
    /* $B81A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0xB7D6); return; }
label_B81C:;
    /* $B81C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B8C6_b4(); return;
}

void func_B83E_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B83E_b4");
#endif
label_B83E:;
    /* $B83E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x40; g_cpu.S--; func_B4D9_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB83E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B841:;
    /* $B841: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B846;
label_B843:;
    /* $B843: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B8C6_b4(); return;
label_B846:;
    /* $B846: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x48; g_cpu.S--; func_B9A8_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB846, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B849:;
    /* $B849: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_B84B:;
    /* $B84B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x3C; FLAG_NZ(g_cpu.A);
label_B84D:;
    /* $B84D: 8D */ maybe_trigger_vblank(4); nes_write(0x0673, g_cpu.A);
label_B850:;
    /* $B850: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0610); FLAG_NZ(g_cpu.A);
label_B853:;
    /* $B853: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xC3; FLAG_NZ(g_cpu.A);
label_B855:;
    /* $B855: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0673); FLAG_NZ(g_cpu.A);
label_B858:;
    /* $B858: 8D */ maybe_trigger_vblank(4); nes_write(0x400A, g_cpu.A);
label_B85B:;
    /* $B85B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0611); FLAG_NZ(g_cpu.A);
label_B85E:;
    /* $B85E: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x40; FLAG_NZ(g_cpu.A);
label_B860:;
    /* $B860: 8D */ maybe_trigger_vblank(4); nes_write(0x400B, g_cpu.A);
label_B863:;
    /* $B863: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B87F_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B87F_b4");
#endif
label_B87F:;
    /* $B87F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; func_B4D9_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB87F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B882:;
    /* $B882: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B887;
label_B884:;
    /* $B884: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B8C6_b4(); return;
label_B887:;
    /* $B887: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x89; g_cpu.S--; func_B9D0_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB887, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B88A:;
    /* $B88A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0614); FLAG_NZ(g_cpu.A);
label_B88D:;
    /* $B88D: 8D */ maybe_trigger_vblank(4); nes_write(0x0612, g_cpu.A);
label_B890:;
    /* $B890: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0615); FLAG_NZ(g_cpu.A);
label_B893:;
    /* $B893: 8D */ maybe_trigger_vblank(4); nes_write(0x0613, g_cpu.A);
label_B896:;
    /* $B896: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x98; g_cpu.S--; func_B9BC_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB896, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B899:;
    /* $B899: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0610); FLAG_NZ(g_cpu.A);
label_B89C:;
    /* $B89C: 8D */ maybe_trigger_vblank(4); nes_write(0x400A, g_cpu.A);
label_B89F:;
    /* $B89F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0611); FLAG_NZ(g_cpu.A);
label_B8A2:;
    /* $B8A2: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x08; FLAG_NZ(g_cpu.A);
label_B8A4:;
    /* $B8A4: 8D */ maybe_trigger_vblank(4); nes_write(0x400B, g_cpu.A);
label_B8A7:;
    /* $B8A7: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B8AF_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8AF_b4");
#endif
label_B8AF:;
    /* $B8AF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB1; g_cpu.S--; func_B4D9_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB8AF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B8B2:;
    /* $B8B2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B8D6;
label_B8B4:;
    /* $B8B4: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0673; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B8B7:;
    /* $B8B7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0673); FLAG_NZ(g_cpu.A);
label_B8BA:;
    /* $B8BA: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_B8BC:;
    /* $B8BC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B8C1;
label_B8BE:;
    /* $B8BE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B8C6_b4(); return;
label_B8C1:;
    /* $B8C1: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x99; FLAG_NZ(g_cpu.Y);
label_B8C3:;
    /* $B8C3: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B39C_b4(); return;
label_B8C6:;
    /* $B8C6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B8C8:;
    /* $B8C8: 8D */ maybe_trigger_vblank(4); nes_write(0x4008, g_cpu.A);
label_B8CB:;
    /* $B8CB: 8D */ maybe_trigger_vblank(4); nes_write(0x0655, g_cpu.A);
label_B8CE:;
    /* $B8CE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x18; FLAG_NZ(g_cpu.A);
label_B8D0:;
    /* $B8D0: 8D */ maybe_trigger_vblank(4); nes_write(0x400B, g_cpu.A);
label_B8D3:;
    /* $B8D3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD5; g_cpu.S--; func_B4D2_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB8D3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B8D6:;
    /* $B8D6: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_80AD_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80AD_b4");
#endif
label_80AD:;
    /* $80AD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0x80A5); return; }
label_80AF:;
    /* $80AF: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BCAA_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCAA_b4");
#endif
label_BCAA:;
    /* $BCAA: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BCD4_b4(); return;
}

void func_B6A3_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6A3_b4");
#endif
label_B6A3:;
    /* $B6A3: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x55; FLAG_NZ(g_cpu.Y);
label_B6A5:;
    /* $B6A5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA7; g_cpu.S--; func_B398_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB6A5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B6A8:;
    /* $B6A8: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_B6AA:;
    /* $B6AA: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_B6AC:;
    /* $B6AC: 8D */ maybe_trigger_vblank(4); nes_write(0x4002, g_cpu.A);
label_B6AF:;
    /* $B6AF: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B6B0:;
    /* $B6B0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_B6B2:;
    /* $B6B2: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_B6B4:;
    /* $B6B4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_B6B6:;
    /* $B6B6: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x55; FLAG_NZ(g_cpu.Y);
label_B6B8:;
    /* $B6B8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; func_B5D5_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB6B8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B6BB:;
    /* $B6BB: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_B6BD:;
    /* $B6BD: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B6BE:;
    /* $B6BE: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B6BF:;
    /* $B6BF: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_B6C1:;
    /* $B6C1: 8D */ maybe_trigger_vblank(4); nes_write(0x4006, g_cpu.A);
label_B6C4:;
    /* $B6C4: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B61C_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B61C_b4");
#endif
label_B61C:;
    /* $B61C: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x5D; FLAG_NZ(g_cpu.Y);
label_B61E:;
    /* $B61E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x20; g_cpu.S--; func_B398_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB61E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B621:;
    /* $B621: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x59; FLAG_NZ(g_cpu.Y);
label_B623:;
    /* $B623: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B5D5_b4(); return;
}

void func_B6C5_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6C5_b4");
#endif
label_B6C5:;
    /* $B6C5: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x61; FLAG_NZ(g_cpu.Y);
label_B6C7:;
    /* $B6C7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC9; g_cpu.S--; func_B398_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB6C7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B6CA:;
    /* $B6CA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_B6CC:;
    /* $B6CC: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x65; FLAG_NZ(g_cpu.Y);
label_B6CE:;
    /* $B6CE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B5D5_b4(); return;
}

void func_B680_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B680_b4");
#endif
label_B680:;
    /* $B680: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; func_B4D9_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB680, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B683:;
    /* $B683: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B688;
label_B685:;
    /* $B685: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B5FD_b4(); return;
label_B688:;
    /* $B688: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x55; FLAG_NZ(g_cpu.Y);
label_B68A:;
    /* $B68A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; func_B398_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB68A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B68D:;
    /* $B68D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_B68F:;
    /* $B68F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_B691:;
    /* $B691: 8D */ maybe_trigger_vblank(4); nes_write(0x4002, g_cpu.A);
label_B694:;
    /* $B694: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x55; FLAG_NZ(g_cpu.Y);
label_B696:;
    /* $B696: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x98; g_cpu.S--; func_B3A4_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB696, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B699:;
    /* $B699: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_B69B:;
    /* $B69B: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B69C:;
    /* $B69C: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B69D:;
    /* $B69D: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_B69F:;
    /* $B69F: 8D */ maybe_trigger_vblank(4); nes_write(0x4006, g_cpu.A);
label_B6A2:;
    /* $B6A2: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B626_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B626_b4");
#endif
label_B626:;
    /* $B626: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0671; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B629:;
    /* $B629: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x0671); FLAG_NZ(g_cpu.Y);
label_B62C:;
    /* $B62C: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB66C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B62F:;
    /* $B62F: 8D */ maybe_trigger_vblank(4); nes_write(0x4000, g_cpu.A);
label_B632:;
    /* $B632: 8D */ maybe_trigger_vblank(4); nes_write(0x4004, g_cpu.A);
label_B635:;
    /* $B635: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0671); FLAG_NZ(g_cpu.A);
label_B638:;
    /* $B638: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x14; g_cpu.C=(g_cpu.A>=0x14)?1:0; FLAG_NZ(r&0xFF); }
label_B63A:;
    /* $B63A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_B669;
label_B63C:;
    /* $B63C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x06; g_cpu.C=(g_cpu.A>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_B63E:;
    /* $B63E: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_B650;
label_B640:;
    /* $B640: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_B642:;
    /* $B642: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x10; FLAG_NZ(g_cpu.A);
label_B644:;
    /* $B644: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x7F; FLAG_NZ(g_cpu.A);
label_B646:;
    /* $B646: 8D */ maybe_trigger_vblank(4); nes_write(0x0679, g_cpu.A);
label_B649:;
    /* $B649: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B64A:;
    /* $B64A: 8D */ maybe_trigger_vblank(4); nes_write(0x0675, g_cpu.A);
label_B64D:;
    /* $B64D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B65C_b4(); return;
label_B650:;
    /* $B650: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0675; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B653:;
    /* $B653: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0675; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B656:;
    /* $B656: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0679; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B659:;
    /* $B659: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0679; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B65C:;
    /* $B65C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0675); FLAG_NZ(g_cpu.A);
label_B65F:;
    /* $B65F: 8D */ maybe_trigger_vblank(4); nes_write(0x4006, g_cpu.A);
label_B662:;
    /* $B662: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0679); FLAG_NZ(g_cpu.A);
label_B665:;
    /* $B665: 8D */ maybe_trigger_vblank(4); nes_write(0x4002, g_cpu.A);
label_B668:;
    /* $B668: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B669:;
    /* $B669: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B5FD_b4(); return;
}

void func_B6D1_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6D1_b4");
#endif
label_B6D1:;
    /* $B6D1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD3; g_cpu.S--; func_B4D9_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB6D1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B6D4:;
    /* $B6D4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0xB6C4); return; }
label_B6D6:;
    /* $B6D6: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B5FD_b4(); return;
}

void func_B6FC_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6FC_b4");
#endif
label_B6FC:;
    /* $B6FC: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B7D6_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7D6_b4");
#endif
label_B7D6:;
    /* $B7D6: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_80A5_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80A5_b4");
#endif
label_80A5:;
    /* $80A5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA7; g_cpu.S--; func_84FE_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x80A5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_80A8:;
    /* $80A8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAA; g_cpu.S--; func_8134_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x80A8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_80AB:;
    /* $80AB: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x66; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_80AD:;
    /* $80AD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_80A5;
    }
label_80AF:;
    /* $80AF: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B6C4_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6C4_b4");
#endif
label_B6C4:;
    /* $B6C4: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A93E_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A93E_b4");
#endif
label_A93E:;
    /* $A93E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x8D + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A940:;
    /* $A940: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0xC001 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A943:;
    /* $A943: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xC801 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A946:;
    /* $A946: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xFD01 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A949:;
    /* $A949: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A94A:;
    /* $A94A: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0x11 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A94C:;
    /* $A94C: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x35 + g_cpu.X) & 0xFF), g_cpu.A);
label_A94E:;
    /* $A94E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0001 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A951:;
    /* $A951: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0801 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A954:;
    /* $A954: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1001 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A957:;
    /* $A957: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x5001 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A95A:;
    /* $A95A: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A95C:;
    /* $A95C: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A95E:;
    /* $A95E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A960:;
    /* $A960: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xC801 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A963:;
    /* $A963: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xCC01 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A966:;
    /* $A966: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x02); FLAG_NZ(g_cpu.A);
label_A968:;
    /* $A968: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xB102 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A96B:;
    /* $A96B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x88 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A96D:;
    /* $A96D: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x17; FLAG_NZ(g_cpu.A);
label_A96F:;
    /* $A96F: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xCD; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A971:;
    /* $A971: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0001 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A974:;
    /* $A974: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0801 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A977:;
    /* $A977: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x7801 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A97A:;
    /* $A97A: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x8800); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A97D:;
    /* $A97D: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A97F:;
    /* $A97F: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x1D; g_cpu.C=(g_cpu.Y>=0x1D)?1:0; FLAG_NZ(r&0xFF); }
label_A981:;
    /* $A981: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A983:;
    /* $A983: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xCD01 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A986:;
    /* $A986: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x02); FLAG_NZ(g_cpu.A);
label_A988:;
    /* $A988: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x8727 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A98B:;
    /* $A98B: CE */ maybe_trigger_vblank(6); { uint16_t a=0x8041; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A98E:;
    /* $A98E: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x01FF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_A991:;
    /* $A991: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA991); return;
}

void func_8042_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8042_b4");
#endif
label_8042:;
    /* $8042: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_CE92(); return;
}

void func_8021_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8021_b4");
#endif
label_8021:;
    /* $8021: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_F870(); return;
}

void func_803F_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_803F_b4");
#endif
label_803F:;
    /* $803F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_FEDC(); return;
}

void func_8045_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8045_b4");
#endif
label_8045:;
    /* $8045: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_C3FB(); return;
}

void func_803C_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_803C_b4");
#endif
label_803C:;
    /* $803C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_DD8B(); return;
}

void func_8001_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8001_b4");
#endif
label_8001:;
    /* $8001: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address(0x7FF7); return; }
label_8003:;
    /* $8003: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_F438(); return;
}

void func_847F_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_847F_b4");
#endif
label_847F:;
    /* $847F: 5A */ maybe_trigger_vblank(2); /* NOP */
label_8480:;
    /* $8480: 85 */ maybe_trigger_vblank(3); nes_write(0xC8, g_cpu.A);
label_8482:;
    /* $8482: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8483:;
    /* $8483: 9D */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8486:;
    /* $8486: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8487:;
    /* $8487: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x6AF5 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_848A:;
    /* $848A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xEF; g_cpu.C=(g_cpu.A>=0xEF)?1:0; FLAG_NZ(r&0xFF); }
label_848C:;
    /* $848C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_849D;
label_848E:;
    /* $848E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFC); FLAG_NZ(g_cpu.A);
label_8490:;
    /* $8490: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8497;
label_8492:;
    /* $8492: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x94; g_cpu.S--; func_8563_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8492, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8495:;
    /* $8495: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_849D;
label_8497:;
    /* $8497: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0400 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_849A:;
    /* $849A: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_849B:;
    /* $849B: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_84A6;
label_849D:;
    /* $849D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_84A0:;
    /* $84A0: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_84A5;
label_84A2:;
    /* $84A2: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x6B01 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_84A5:;
    /* $84A5: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_84A6:;
    /* $84A6: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B3F0_b4_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B40E;
    }
label_B3F0:;
    /* $B3F0: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x05C9 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B3F3:;
    /* $B3F3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0xB3C9); return; }
label_B3F5:;
    /* $B3F5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B3F7:;
    /* $B3F7: 8D */ maybe_trigger_vblank(4); nes_write(0x0602, g_cpu.A);
label_B3FA:;
    /* $B3FA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFC; g_cpu.S--; func_B34B_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3FA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3FD:;
    /* $B3FD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFF; g_cpu.S--; func_B37B_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3FD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B400:;
    /* $B400: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x02; g_cpu.S--; func_B36D_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB400, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B403:;
    /* $B403: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x05; g_cpu.S--; func_BC66_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB403, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B406:;
    /* $B406: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B408:;
    /* $B408: 8D */ maybe_trigger_vblank(4); nes_write(0x0680, g_cpu.A);
label_B40B:;
    /* $B40B: 8D */ maybe_trigger_vblank(4); nes_write(0x0681, g_cpu.A);
label_B40E:;
    /* $B40E: 8D */ maybe_trigger_vblank(4); nes_write(0x0682, g_cpu.A);
label_B411:;
    /* $B411: 8D */ maybe_trigger_vblank(4); nes_write(0x0683, g_cpu.A);
label_B414:;
    /* $B414: 8D */ maybe_trigger_vblank(4); nes_write(0x0684, g_cpu.A);
label_B417:;
    /* $B417: 8D */ maybe_trigger_vblank(4); nes_write(0x0685, g_cpu.A);
label_B41A:;
    /* $B41A: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B3F0_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3F0_b4");
#endif
    func_B3F0_b4_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B40E_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B40E_b4");
#endif
    func_B3F0_b4_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B3FC_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3FC_b4");
#endif
label_B3FC:;
    /* $B3FC: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x20) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B3FE:;
    /* $B3FE: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0x20B3 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B401:;
    /* $B401: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x20B3); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B404:;
    /* $B404: 66 */ maybe_trigger_vblank(5); { uint16_t a=0xBC; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B406:;
    /* $B406: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B408:;
    /* $B408: 8D */ maybe_trigger_vblank(4); nes_write(0x0680, g_cpu.A);
label_B40B:;
    /* $B40B: 8D */ maybe_trigger_vblank(4); nes_write(0x0681, g_cpu.A);
label_B40E:;
    /* $B40E: 8D */ maybe_trigger_vblank(4); nes_write(0x0682, g_cpu.A);
label_B411:;
    /* $B411: 8D */ maybe_trigger_vblank(4); nes_write(0x0683, g_cpu.A);
label_B414:;
    /* $B414: 8D */ maybe_trigger_vblank(4); nes_write(0x0684, g_cpu.A);
label_B417:;
    /* $B417: 8D */ maybe_trigger_vblank(4); nes_write(0x0685, g_cpu.A);
label_B41A:;
    /* $B41A: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B452_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B452_b4");
#endif
label_B452:;
    /* $B452: 8D */ maybe_trigger_vblank(4); nes_write(0x0654, g_cpu.A);
label_B455:;
    /* $B455: 8D */ maybe_trigger_vblank(4); nes_write(0x0655, g_cpu.A);
label_B458:;
    /* $B458: 8D */ maybe_trigger_vblank(4); nes_write(0x0607, g_cpu.A);
label_B45B:;
    /* $B45B: 8D */ maybe_trigger_vblank(4); nes_write(0x0688, g_cpu.A);
label_B45E:;
    /* $B45E: 8D */ maybe_trigger_vblank(4); nes_write(0x0689, g_cpu.A);
label_B461:;
    /* $B461: 8D */ maybe_trigger_vblank(4); nes_write(0x068A, g_cpu.A);
label_B464:;
    /* $B464: 8D */ maybe_trigger_vblank(4); nes_write(0x068B, g_cpu.A);
label_B467:;
    /* $B467: 8D */ maybe_trigger_vblank(4); nes_write(0x068C, g_cpu.A);
label_B46A:;
    /* $B46A: 8D */ maybe_trigger_vblank(4); nes_write(0x068D, g_cpu.A);
label_B46D:;
    /* $B46D: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B493_b4_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B4A2;
    }
label_B493:;
    /* $B493: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_B495:;
    /* $B495: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_B4A2;
label_B497:;
    /* $B497: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B498:;
    /* $B498: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; func_B398_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB498, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B49B:;
    /* $B49B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_B4AA;
label_B49D:;
    /* $B49D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x9F; g_cpu.S--; func_B3A4_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB49D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B4A0:;
    /* $B4A0: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_B4AA;
label_B4A2:;
    /* $B4A2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA4; g_cpu.S--; func_B39C_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB4A2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B4A5:;
    /* $B4A5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_B4AA;
label_B4A7:;
    /* $B4A7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA9; g_cpu.S--; func_B3A0_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB4A7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B4AA:;
    /* $B4AA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAC; g_cpu.S--; func_B4C3_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB4AA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B4AD:;
    /* $B4AD: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_B4AE:;
    /* $B4AE: 9D */ maybe_trigger_vblank(5); nes_write((0x0652 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B4B1:;
    /* $B4B1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B4B3:;
    /* $B4B3: 9D */ maybe_trigger_vblank(5); nes_write((0x0665 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B4B6:;
    /* $B4B6: 9D */ maybe_trigger_vblank(5); nes_write((0x0670 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B4B9:;
    /* $B4B9: 9D */ maybe_trigger_vblank(5); nes_write((0x0674 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B4BC:;
    /* $B4BC: 9D */ maybe_trigger_vblank(5); nes_write((0x0678 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B4BF:;
    /* $B4BF: 8D */ maybe_trigger_vblank(4); nes_write(0x0607, g_cpu.A);
label_B4C2:;
    /* $B4C2: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B493_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B493_b4");
#endif
    func_B493_b4_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B4A2_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4A2_b4");
#endif
    func_B493_b4_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B4A9_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4A9_b4");
#endif
label_B4A9:;
    /* $B4A9: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x20) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B4AB:;
    /* $B4AB: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB4 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B4AD:;
    /* $B4AD: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_B4AE:;
    /* $B4AE: 9D */ maybe_trigger_vblank(5); nes_write((0x0652 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B4B1:;
    /* $B4B1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B4B3:;
    /* $B4B3: 9D */ maybe_trigger_vblank(5); nes_write((0x0665 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B4B6:;
    /* $B4B6: 9D */ maybe_trigger_vblank(5); nes_write((0x0670 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B4B9:;
    /* $B4B9: 9D */ maybe_trigger_vblank(5); nes_write((0x0674 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B4BC:;
    /* $B4BC: 9D */ maybe_trigger_vblank(5); nes_write((0x0678 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B4BF:;
    /* $B4BF: 8D */ maybe_trigger_vblank(4); nes_write(0x0607, g_cpu.A);
label_B4C2:;
    /* $B4C2: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B4BD_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4BD_b4");
#endif
label_B4BD:;
    /* $B4BD: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_B4BE:;
    /* $B4BE: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x8D; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B4C0:;
    /* $B4C0: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B4C2:;
    /* $B4C2: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B587_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B587_b4");
#endif
label_B587:;
    /* $B587: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0674; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B58A:;
    /* $B58A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0674); FLAG_NZ(g_cpu.A);
label_B58D:;
    /* $B58D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0F; g_cpu.C=(g_cpu.A>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_B58F:;
    /* $B58F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0xB568); return; }
label_B591:;
    /* $B591: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B5BF_b4(); return;
}

void func_B5A5_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5A5_b4");
#endif
label_B5A5:;
    /* $B5A5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_B5A7:;
    /* $B5A7: 8D */ maybe_trigger_vblank(4); nes_write(0x0670, g_cpu.A);
label_B5AA:;
    /* $B5AA: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B978_b4_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B98C;
    }
label_B978:;
    /* $B978: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0673); FLAG_NZ(g_cpu.A);
label_B97B:;
    /* $B97B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_B97D:;
    /* $B97D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B982;
label_B97F:;
    /* $B97F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B8C6_b4(); return;
label_B982:;
    /* $B982: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0612); FLAG_NZ(g_cpu.A);
label_B985:;
    /* $B985: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B986:;
    /* $B986: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0613); FLAG_NZ(g_cpu.A);
label_B989:;
    /* $B989: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B98A:;
    /* $B98A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x25; FLAG_NZ(g_cpu.A);
label_B98C:;
    /* $B98C: 8D */ maybe_trigger_vblank(4); nes_write(0x0612, g_cpu.A);
label_B98F:;
    /* $B98F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B991:;
    /* $B991: 8D */ maybe_trigger_vblank(4); nes_write(0x0613, g_cpu.A);
label_B994:;
    /* $B994: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x96; g_cpu.S--; func_B9A8_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB994, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B997:;
    /* $B997: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_B998:;
    /* $B998: 8D */ maybe_trigger_vblank(4); nes_write(0x0613, g_cpu.A);
label_B99B:;
    /* $B99B: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_B99C:;
    /* $B99C: 8D */ maybe_trigger_vblank(4); nes_write(0x0612, g_cpu.A);
label_B99F:;
    /* $B99F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B899_b4(); return;
}

void func_B978_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B978_b4");
#endif
    func_B978_b4_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B98C_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B98C_b4");
#endif
    func_B978_b4_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B9A0_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9A0_b4");
#endif
label_B9A0:;
    /* $B9A0: 99 */ maybe_trigger_vblank(5); nes_write((0x20B8 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B9A3:;
    /* $B9A3: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x4CB9 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_B9A6:;
    /* $B9A6: 99 */ maybe_trigger_vblank(5); nes_write((0x18B8 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B9A9:;
    /* $B9A9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0610); FLAG_NZ(g_cpu.A);
label_B9AC:;
    /* $B9AC: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0612); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9AF:;
    /* $B9AF: 8D */ maybe_trigger_vblank(4); nes_write(0x0610, g_cpu.A);
label_B9B2:;
    /* $B9B2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0611); FLAG_NZ(g_cpu.A);
label_B9B5:;
    /* $B9B5: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0613); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9B8:;
    /* $B9B8: 8D */ maybe_trigger_vblank(4); nes_write(0x0611, g_cpu.A);
label_B9BB:;
    /* $B9BB: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B9E4_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9E4_b4");
#endif
label_B9E4:;
    /* $B9E4: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x2E; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9E6:;
    /* $B9E6: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x06 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B9E8:;
    /* $B9E8: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0617); FLAG_NZ(g_cpu.A);
label_B9EB:;
    /* $B9EB: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0616); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B9EE:;
    /* $B9EE: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_B9F6;
label_B9F0:;
    /* $B9F0: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0616); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9F3:;
    /* $B9F3: 8D */ maybe_trigger_vblank(4); nes_write(0x0617, g_cpu.A);
label_B9F6:;
    /* $B9F6: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x0610; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9F9:;
    /* $B9F9: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x0611; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9FC:;
    /* $B9FC: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_B9FD:;
    /* $B9FD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0xB9E5); return; }
label_B9FF:;
    /* $B9FF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0610); FLAG_NZ(g_cpu.A);
label_BA02:;
    /* $BA02: 8D */ maybe_trigger_vblank(4); nes_write(0x0614, g_cpu.A);
label_BA05:;
    /* $BA05: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0611); FLAG_NZ(g_cpu.A);
label_BA08:;
    /* $BA08: 8D */ maybe_trigger_vblank(4); nes_write(0x0615, g_cpu.A);
label_BA0B:;
    /* $BA0B: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_BA0C:;
    /* $BA0C: 8D */ maybe_trigger_vblank(4); nes_write(0x0611, g_cpu.A);
label_BA0F:;
    /* $BA0F: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_BA10:;
    /* $BA10: 8D */ maybe_trigger_vblank(4); nes_write(0x0610, g_cpu.A);
label_BA13:;
    /* $BA13: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B9E5_b4_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B9F3;
    }
label_B9E5:;
    /* $B9E5: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x0617; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9E8:;
    /* $B9E8: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0617); FLAG_NZ(g_cpu.A);
label_B9EB:;
    /* $B9EB: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0616); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B9EE:;
    /* $B9EE: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_B9F6;
label_B9F0:;
    /* $B9F0: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0616); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9F3:;
    /* $B9F3: 8D */ maybe_trigger_vblank(4); nes_write(0x0617, g_cpu.A);
label_B9F6:;
    /* $B9F6: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x0610; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9F9:;
    /* $B9F9: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x0611; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9FC:;
    /* $B9FC: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_B9FD:;
    /* $B9FD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B9E5;
    }
label_B9FF:;
    /* $B9FF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0610); FLAG_NZ(g_cpu.A);
label_BA02:;
    /* $BA02: 8D */ maybe_trigger_vblank(4); nes_write(0x0614, g_cpu.A);
label_BA05:;
    /* $BA05: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0611); FLAG_NZ(g_cpu.A);
label_BA08:;
    /* $BA08: 8D */ maybe_trigger_vblank(4); nes_write(0x0615, g_cpu.A);
label_BA0B:;
    /* $BA0B: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_BA0C:;
    /* $BA0C: 8D */ maybe_trigger_vblank(4); nes_write(0x0611, g_cpu.A);
label_BA0F:;
    /* $BA0F: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_BA10:;
    /* $BA10: 8D */ maybe_trigger_vblank(4); nes_write(0x0610, g_cpu.A);
label_BA13:;
    /* $BA13: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B9E5_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9E5_b4");
#endif
    func_B9E5_b4_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B9F3_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9F3_b4");
#endif
    func_B9E5_b4_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BA41_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA41_b4");
#endif
label_BA41:;
    /* $BA41: 06 */ maybe_trigger_vblank(5); { uint16_t a=0xAD; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA43:;
    /* $BA43: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_BA44:;
    /* $BA44: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x8D; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA46:;
    /* $BA46: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x40 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA48:;
    /* $BA48: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0600); FLAG_NZ(g_cpu.A);
label_BA4B:;
    /* $BA4B: 8D */ maybe_trigger_vblank(4); nes_write(0x4002, g_cpu.A);
label_BA4E:;
    /* $BA4E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0601); FLAG_NZ(g_cpu.A);
label_BA51:;
    /* $BA51: 8D */ maybe_trigger_vblank(4); nes_write(0x4003, g_cpu.A);
label_BA54:;
    /* $BA54: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0649); FLAG_NZ(g_cpu.A);
label_BA57:;
    /* $BA57: 8D */ maybe_trigger_vblank(4); nes_write(0x4005, g_cpu.A);
label_BA5A:;
    /* $BA5A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0604); FLAG_NZ(g_cpu.A);
label_BA5D:;
    /* $BA5D: 8D */ maybe_trigger_vblank(4); nes_write(0x4006, g_cpu.A);
label_BA60:;
    /* $BA60: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0605); FLAG_NZ(g_cpu.A);
label_BA63:;
    /* $BA63: 8D */ maybe_trigger_vblank(4); nes_write(0x4007, g_cpu.A);
label_BA66:;
    /* $BA66: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BC1C_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC1C_b4");
#endif
label_BC1C:;
    /* $BC1C: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0xB2) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BC1E:;
    /* $BC1E: 8D */ maybe_trigger_vblank(4); nes_write(0x400E, g_cpu.A);
label_BC21:;
    /* $BC21: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB232 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BC24:;
    /* $BC24: 8D */ maybe_trigger_vblank(4); nes_write(0x400F, g_cpu.A);
label_BC27:;
    /* $BC27: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BBD8_b4(); return;
}

void func_BC53_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC53_b4");
#endif
label_BC53:;
    /* $BC53: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xD1 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_BC55:;
    /* $BC55: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xB3 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_BC57:;
    /* $BC57: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xBCA7 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BC5A:;
    /* $BC5A: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0xBC); FLAG_NZ(g_cpu.A);
label_BC5C:;
    /* $BC5C: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0xBC); FLAG_NZ(g_cpu.A);
label_BC5E:;
    /* $BC5E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { call_by_address(0xBC1C); return; }
label_BC60:;
    /* $BC60: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xA7BC); FLAG_NZ(g_cpu.A);
label_BC63:;
    /* $BC63: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xBCB0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BC66:;
    /* $BC66: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x065D); FLAG_NZ(g_cpu.A);
label_BC69:;
    /* $BC69: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xE6; FLAG_NZ(g_cpu.X);
label_BC6B:;
    /* $BC6B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_BC72;
label_BC6D:;
    /* $BC6D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0685); FLAG_NZ(g_cpu.A);
label_BC70:;
    /* $BC70: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xE1; FLAG_NZ(g_cpu.X);
label_BC72:;
    /* $BC72: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x74; g_cpu.S--; func_B4ED_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC72, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC75:;
    /* $BC75: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x77; g_cpu.S--; func_BC83_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC75, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC78:;
    /* $BC78: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16zp(0xE2); maybe_trigger_vblank(2); call_by_address(_jt); return; }
}

void func_BC64_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC64_b4");
#endif
label_BC64:;
    /* $BC64: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { call_by_address(0xBC22); return; }
label_BC66:;
    /* $BC66: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x065D); FLAG_NZ(g_cpu.A);
label_BC69:;
    /* $BC69: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xE6; FLAG_NZ(g_cpu.X);
label_BC6B:;
    /* $BC6B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_BC72;
label_BC6D:;
    /* $BC6D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0685); FLAG_NZ(g_cpu.A);
label_BC70:;
    /* $BC70: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xE1; FLAG_NZ(g_cpu.X);
label_BC72:;
    /* $BC72: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x74; g_cpu.S--; func_B4ED_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC72, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC75:;
    /* $BC75: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x77; g_cpu.S--; func_BC83_b4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC75, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC78:;
    /* $BC78: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16zp(0xE2); maybe_trigger_vblank(2); call_by_address(_jt); return; }
}

void func_BF19_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BF19_b4");
#endif
label_BF19:;
    /* $BF19: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF19); return;
}

void func_C2BF_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C2BF_b4");
#endif
label_C2BF:;
    /* $C2BF: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_C2C0:;
    /* $C2C0: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_C2C1:;
    /* $C2C1: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_C2C2:;
    /* $C2C2: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_C2C3:;
    /* $C2C3: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C2C0_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C2C0_b4");
#endif
label_C2C0:;
    /* $C2C0: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_C2C1:;
    /* $C2C1: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_C2C2:;
    /* $C2C2: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_C2C3:;
    /* $C2C3: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C2C5_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C2C5_b4");
#endif
label_C2C5:;
    /* $C2C5: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_C2C6:;
    /* $C2C6: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_C2C7:;
    /* $C2C7: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_C2C8:;
    /* $C2C8: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_C2C9:;
    /* $C2C9: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C3D4_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C3D4_b4");
#endif
label_C3D4:;
    /* $C3D4: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0xFF; FLAG_NZ(g_cpu.A);
label_C3D6:;
    /* $C3D6: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_C3D7:;
    /* $C3D7: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_C3D9:;
    /* $C3D9: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_CB73_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CB73_b4");
#endif
label_CB73:;
    /* $CB73: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_CB74:;
    /* $CB74: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_CB75:;
    /* $CB75: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x6878); FLAG_NZ(g_cpu.A);
label_CB78:;
    /* $CB78: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_CB79:;
    /* $CB79: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_CB7A:;
    /* $CB7A: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_CB7B:;
    /* $CB7B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x010E); FLAG_NZ(g_cpu.A);
label_CB7E:;
    /* $CB7E: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_CB7F:;
    /* $CB7F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_CB81:;
    /* $CB81: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x69B3); FLAG_NZ(g_cpu.Y);
label_CB84:;
    /* $CB84: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_CB89;
label_CB86:;
    /* $CB86: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_CB87:;
    /* $CB87: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x17 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x17); g_cpu.A=r&0xFF; }
label_CB89:;
    /* $CB89: 85 */ maybe_trigger_vblank(3); nes_write(0x1C, g_cpu.A);
label_CB8B:;
    /* $CB8B: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_CB8C:;
    /* $CB8C: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_CB8D:;
    /* $CB8D: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_CBDA_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CBDA_b4");
#endif
label_CBDA:;
    /* $CBDA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_CBDC:;
    /* $CBDC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_CBF5;
label_CBDE:;
    /* $CBDE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_CBE0:;
    /* $CBE0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_CBFF;
label_CBE2:;
    /* $CBE2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_CBE4:;
    /* $CBE4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_CBF5;
label_CBE6:;
    /* $CBE6: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x02; FLAG_NZ(g_cpu.X);
label_CBE8:;
    /* $CBE8: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0680 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_CBEB:;
    /* $CBEB: 9D */ maybe_trigger_vblank(5); nes_write((0x0680 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_CBEE:;
    /* $CBEE: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_CBEF:;
    /* $CBEF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_CBF1:;
    /* $CBF1: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_CBF5;
label_CBF3:;
    /* $CBF3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_CBF5:;
    /* $CBF5: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x03; FLAG_NZ(g_cpu.X);
label_CBF7:;
    /* $CBF7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_CBE8;
    }
label_CBF9:;
    /* $CBF9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_CBFB:;
    /* $CBFB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_CBFF;
label_CBFD:;
    /* $CBFD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_CBFF:;
    /* $CBFF: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_CC01:;
    /* $CC01: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_CBE8;
    }
label_CC03:;
    /* $CC03: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_CC05:;
    /* $CC05: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_CC09;
label_CC07:;
    /* $CC07: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_CC09:;
    /* $CC09: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x05; FLAG_NZ(g_cpu.X);
label_CC0B:;
    /* $CC0B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_CBE8;
    }
label_CC0D:;
    /* $CC0D: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_CC0F:;
    /* $CC0F: 86 */ maybe_trigger_vblank(3); nes_write(0x4B, g_cpu.X);
label_CC11:;
    /* $CC11: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_CC12:;
    /* $CC12: 86 */ maybe_trigger_vblank(3); nes_write(0x55, g_cpu.X);
label_CC14:;
    /* $CC14: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xCC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x16; g_cpu.S--; func_CC1A();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCC14, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CC17:;
    /* $CC17: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x55; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_CC19:;
    /* $CC19: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_CC03_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CC03_b4");
#endif
label_CC03:;
    /* $CC03: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_CC05:;
    /* $CC05: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_CC09;
label_CC07:;
    /* $CC07: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_CC09:;
    /* $CC09: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x05; FLAG_NZ(g_cpu.X);
label_CC0B:;
    /* $CC0B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0xCBE8); return; }
label_CC0D:;
    /* $CC0D: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_CC0F:;
    /* $CC0F: 86 */ maybe_trigger_vblank(3); nes_write(0x4B, g_cpu.X);
label_CC11:;
    /* $CC11: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_CC12:;
    /* $CC12: 86 */ maybe_trigger_vblank(3); nes_write(0x55, g_cpu.X);
label_CC14:;
    /* $CC14: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xCC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x16; g_cpu.S--; func_CC1A();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCC14, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CC17:;
    /* $CC17: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x55; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_CC19:;
    /* $CC19: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_CC07_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CC07_b4");
#endif
label_CC07:;
    /* $CC07: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_CC09:;
    /* $CC09: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x05; FLAG_NZ(g_cpu.X);
label_CC0B:;
    /* $CC0B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0xCBE8); return; }
label_CC0D:;
    /* $CC0D: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_CC0F:;
    /* $CC0F: 86 */ maybe_trigger_vblank(3); nes_write(0x4B, g_cpu.X);
label_CC11:;
    /* $CC11: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_CC12:;
    /* $CC12: 86 */ maybe_trigger_vblank(3); nes_write(0x55, g_cpu.X);
label_CC14:;
    /* $CC14: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xCC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x16; g_cpu.S--; func_CC1A();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCC14, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CC17:;
    /* $CC17: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x55; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_CC19:;
    /* $CC19: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_D2FD_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D2FD_b4");
#endif
label_D2FD:;
    /* $D2FD: 9D */ maybe_trigger_vblank(5); nes_write((0x0306 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_D300:;
    /* $D300: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_D302:;
    /* $D302: 9D */ maybe_trigger_vblank(5); nes_write((0x0304 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_D305:;
    /* $D305: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_DC1E_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DC1E_b4");
#endif
label_DC1E:;
    /* $DC1E: 85 */ maybe_trigger_vblank(3); nes_write(0x07, g_cpu.A);
label_DC20:;
    /* $DC20: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x4F); FLAG_NZ(g_cpu.A);
label_DC22:;
    /* $DC22: 85 */ maybe_trigger_vblank(3); nes_write(0x06, g_cpu.A);
label_DC24:;
    /* $DC24: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x49); FLAG_NZ(g_cpu.A);
label_DC26:;
    /* $DC26: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_DC27:;
    /* $DC27: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_DC28:;
    /* $DC28: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_DC34;
label_DC2A:;
    /* $DC2A: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_DC3C;
label_DC2C:;
    /* $DC2C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFD); FLAG_NZ(g_cpu.A);
label_DC2E:;
    /* $DC2E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_DC3C;
label_DC30:;
    /* $DC30: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x07; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DC32:;
    /* $DC32: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_DC3C;
label_DC34:;
    /* $DC34: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_DC3C;
label_DC36:;
    /* $DC36: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFC); FLAG_NZ(g_cpu.A);
label_DC38:;
    /* $DC38: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_DC3C;
label_DC3A:;
    /* $DC3A: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DC3C:;
    /* $DC3C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_DC3E:;
    /* $DC3E: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x08); FLAG_NZ(g_cpu.A);
label_DC40:;
    /* $DC40: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_DC42:;
    /* $DC42: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_DC43:;
    /* $DC43: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_DC44:;
    /* $DC44: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_DC4D;
label_DC46:;
    /* $DC46: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x07); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_DC48:;
    /* $DC48: 85 */ maybe_trigger_vblank(3); nes_write(0x07, g_cpu.A);
label_DC4A:;
    /* $DC4A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_DC51(); return;
label_DC4D:;
    /* $DC4D: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x06); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_DC4F:;
    /* $DC4F: 85 */ maybe_trigger_vblank(3); nes_write(0x06, g_cpu.A);
label_DC51:;
    /* $DC51: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xDC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x53; g_cpu.S--; func_DC67();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDC51, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DC54:;
    /* $DC54: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x6886); FLAG_NZ(g_cpu.Y);
label_DC57:;
    /* $DC57: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x06); FLAG_NZ(g_cpu.A);
label_DC59:;
    /* $DC59: 99 */ maybe_trigger_vblank(5); nes_write((0x6887 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_DC5C:;
    /* $DC5C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x07); FLAG_NZ(g_cpu.A);
label_DC5E:;
    /* $DC5E: 99 */ maybe_trigger_vblank(5); nes_write((0x6888 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_DC61:;
    /* $DC61: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DC62:;
    /* $DC62: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DC63:;
    /* $DC63: 8C */ maybe_trigger_vblank(4); nes_write(0x6886, g_cpu.Y);
label_DC66:;
    /* $DC66: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E449_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E449_b4");
#endif
label_E449:;
    /* $E449: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E44B:;
    /* $E44B: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_E44C:;
    /* $E44C: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_E44E:;
    /* $E44E: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_E450:;
    /* $E450: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E452:;
    /* $E452: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x01); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_E454:;
    /* $E454: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_E456:;
    /* $E456: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E770_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E770_b4");
#endif
label_E770:;
    /* $E770: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_E772:;
    /* $E772: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AF5 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E775:;
    /* $E775: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_E776:;
    /* $E776: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x08 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x08); g_cpu.A=r&0xFF; }
label_E778:;
    /* $E778: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_E783(); return;
}

void func_E77B_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E77B_b4");
#endif
label_E77B:;
    /* $E77B: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_E77D:;
    /* $E77D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E77F:;
    /* $E77F: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_E780:;
    /* $E780: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x6AF5 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_E783:;
    /* $E783: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_E785:;
    /* $E785: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_E787:;
    /* $E787: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_E789:;
    /* $E789: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; func_E792();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE789, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E78C:;
    /* $E78C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AF6 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E78F:;
    /* $E78F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_E7BD(); return;
}

void func_E8F1_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E8F1_b4");
#endif
label_E8F1:;
    /* $E8F1: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_E8F3:;
    /* $E8F3: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AF6 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E8F6:;
    /* $E8F6: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_E8F7:;
    /* $E8F7: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x08 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x08); g_cpu.A=r&0xFF; }
label_E8F9:;
    /* $E8F9: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_E904(); return;
}

void func_E8FC_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E8FC_b4");
#endif
label_E8FC:;
    /* $E8FC: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_E8FE:;
    /* $E8FE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E900:;
    /* $E900: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_E901:;
    /* $E901: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x6AF6 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_E904:;
    /* $E904: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_E906:;
    /* $E906: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xE9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x08; g_cpu.S--; func_E792();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE906, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E909:;
    /* $E909: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x6AF5 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_E90C:;
    /* $E90C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_E89B(); return;
}

void func_E96A_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E96A_b4");
#endif
label_E96A:;
    /* $E96A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x18; FLAG_NZ(g_cpu.A);
label_E96C:;
    /* $E96C: 85 */ maybe_trigger_vblank(3); nes_write(0x05, g_cpu.A);
label_E96E:;
    /* $E96E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x02); FLAG_NZ(g_cpu.A);
label_E970:;
    /* $E970: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xF8; FLAG_NZ(g_cpu.A);
label_E972:;
    /* $E972: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_E973:;
    /* $E973: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x05; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E975:;
    /* $E975: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_E976:;
    /* $E976: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x05; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E978:;
    /* $E978: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_E97A:;
    /* $E97A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x03); FLAG_NZ(g_cpu.A);
label_E97C:;
    /* $E97C: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_E97D:;
    /* $E97D: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_E97E:;
    /* $E97E: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_E97F:;
    /* $E97F: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x04); FLAG_NZ(g_cpu.A);
label_E981:;
    /* $E981: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_E983:;
    /* $E983: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x0B); FLAG_NZ(g_cpu.A);
label_E985:;
    /* $E985: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_E986:;
    /* $E986: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_E987:;
    /* $E987: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A);
label_E989:;
    /* $E989: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_E98B:;
    /* $E98B: 85 */ maybe_trigger_vblank(3); nes_write(0x05, g_cpu.A);
label_E98D:;
    /* $E98D: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F744_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F744_b4");
#endif
label_F744:;
    /* $F744: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F747:;
    /* $F747: 9D */ maybe_trigger_vblank(5); nes_write((0x0405 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F74A:;
    /* $F74A: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F74B_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F74B_b4");
#endif
label_F74B:;
    /* $F74B: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x6B02 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_F74E:;
    /* $F74E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x968B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F751:;
    /* $F751: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B568_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B568_b4");
#endif
label_B568:;
    /* $B568: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BC22_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC22_b4");
#endif
label_BC22:;
    /* $BC22: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_BC23:;
    /* $BC23: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_BC24:;
    /* $BC24: 8D */ maybe_trigger_vblank(4); nes_write(0x400F, g_cpu.A);
label_BC27:;
    /* $BC27: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BBD8_b4(); return;
}

