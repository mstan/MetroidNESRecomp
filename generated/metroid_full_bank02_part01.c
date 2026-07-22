/* metroid_full_bank02_part01.c — PRG bank 2 function bodies (sub-part 1).
 * STANDALONE translation unit — compiled independently (in
 * parallel with every other bank part/sub-part and the
 * umbrella metroid_full.c). Do not compile as part of another TU or
 * edit directly; the source of truth is the recompiler's
 * code_generator.c. Renamed to drop the _partNN suffix if
 * this bank turned out to fit in a single sub-part. */

#include "metroid_full_decls.h"

void func_AE36_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AE36_b2");
#endif
label_AE36:;
    /* $AE36: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE38:;
    /* $AE38: 34 */ maybe_trigger_vblank(4); (void)nes_read((0xFF + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE3A:;
    /* $AE3A: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x35); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE3C:;
    /* $AE3C: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x35 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AE3E:;
    /* $AE3E: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AE40:;
    /* $AE40: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x37); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE42:;
    /* $AE42: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x37 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE44:;
    /* $AE44: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x04 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE46:;
    /* $AE46: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x36 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE48:;
    /* $AE48: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x36 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE4A:;
    /* $AE4A: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x36); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE4C:;
    /* $AE4C: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x36 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE4E:;
    /* $AE4E: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x04 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE50:;
    /* $AE50: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x37 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE52:;
    /* $AE52: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0x37 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE54:;
    /* $AE54: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x3202 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE57:;
    /* $AE57: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE59:;
    /* $AE59: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x2B); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE5B:;
    /* $AE5B: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AE5D:;
    /* $AE5D: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AE5F:;
    /* $AE5F: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AE61:;
    /* $AE61: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AE63:;
    /* $AE63: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2B01 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE66:;
    /* $AE66: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x2B + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE68:;
    /* $AE68: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x2B + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE6A:;
    /* $AE6A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x2B + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE6C:;
    /* $AE6C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2B04 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE6F:;
    /* $AE6F: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AE71:;
    /* $AE71: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AE73:;
    /* $AE73: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AE75:;
    /* $AE75: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AE77:;
    /* $AE77: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x2B); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE79:;
    /* $AE79: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AE7B:;
    /* $AE7B: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AE7D:;
    /* $AE7D: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AE7F:;
    /* $AE7F: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AE81:;
    /* $AE81: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x1401 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE84:;
    /* $AE84: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2B01 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE87:;
    /* $AE87: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x2B + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE89:;
    /* $AE89: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x2B + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE8B:;
    /* $AE8B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x2B + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE8D:;
    /* $AE8D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x3901 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE90:;
    /* $AE90: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x3801 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE93:;
    /* $AE93: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x3A04 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE96:;
    /* $AE96: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0x3C3B + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE99:;
    /* $AE99: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x3402 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE9C:;
    /* $AE9C: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE9E:;
    /* $AE9E: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEA0:;
    /* $AEA0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AEA1:;
    /* $AEA1: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEA3:;
    /* $AEA3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AEA4:;
    /* $AEA4: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEA6:;
    /* $AEA6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x3008 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AEA9:;
    /* $AEA9: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x30) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AEAB:;
    /* $AEAB: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x30) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AEAD:;
    /* $AEAD: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xAEE0); return; }
label_AEAF:;
    /* $AEAF: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xAEB0); return; }
label_AEB1:;
    /* $AEB1: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x34); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEB3:;
    /* $AEB3: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEB5:;
    /* $AEB5: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x04 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEB7:;
    /* $AEB7: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEB9:;
    /* $AEB9: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEBB:;
    /* $AEBB: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x34); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEBD:;
    /* $AEBD: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEBF:;
    /* $AEBF: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x04 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEC1:;
    /* $AEC1: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEC3:;
    /* $AEC3: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEC5:;
    /* $AEC5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2B08 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AEC8:;
    /* $AEC8: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AECA:;
    /* $AECA: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AECC:;
    /* $AECC: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AECE:;
    /* $AECE: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AED0:;
    /* $AED0: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AED2:;
    /* $AED2: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AED4:;
    /* $AED4: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AED6:;
    /* $AED6: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AED8:;
    /* $AED8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x3408 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AEDB:;
    /* $AEDB: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEDD:;
    /* $AEDD: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEDF:;
    /* $AEDF: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEE1:;
    /* $AEE1: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x08 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEE3:;
    /* $AEE3: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEE5:;
    /* $AEE5: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEE7:;
    /* $AEE7: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEE9:;
    /* $AEE9: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEEB:;
    /* $AEEB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF1F1 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AEEE:;
    /* $AEEE: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xF1) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AEF0:;
    /* $AEF0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF0FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AEF3:;
    /* $AEF3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xAF59); return; }
label_AEF5:;
    /* $AEF5: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x64); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEF7:;
    /* $AEF7: 64 */ maybe_trigger_vblank(3); (void)nes_read(0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEF9:;
    /* $AEF9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x6464 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AEFC:;
    /* $AEFC: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xFF); FLAG_NZ(g_cpu.Y);
label_AEFE:;
    /* $AEFE: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xFF); FLAG_NZ(g_cpu.Y);
label_AF00:;
    /* $AF00: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFA5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF03:;
    /* $AF03: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA0); FLAG_NZ(g_cpu.A);
label_AF05:;
    /* $AF05: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_AF07:;
    /* $AF07: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA1; FLAG_NZ(g_cpu.Y);
label_AF09:;
    /* $AF09: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xA1 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AF0B:;
    /* $AF0B: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xFF + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AF0D:;
    /* $AF0D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x5A59 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF10:;
    /* $AF10: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x5AFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF13:;
    /* $AF13: 5B */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AF16:;
    /* $AF16: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x10FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF19:;
    /* $AF19: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xAF2B); return; }
label_AF1B:;
    /* $AF1B: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AF40; }
label_AF1D:;
    /* $AF1D: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x25); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AF1F:;
    /* $AF1F: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x1B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AF21:;
    /* $AF21: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1E1D + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF24:;
    /* $AF24: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF26:;
    /* $AF26: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1F1A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF29:;
    /* $AF29: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xAF; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2B; g_cpu.S--; if (!nes_dispatch_call(0x2221, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAF29, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AF2C:;
    /* $AF2C: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AF2D:;
    /* $AF2D: 61 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x62 + g_cpu.X) & 0xFF)); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AF2F:;
    /* $AF2F: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x0E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF31:;
    /* $AF31: 0F */ maybe_trigger_vblank(6); { uint16_t a=0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF34:;
    /* $AF34: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0D0D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF37:;
    /* $AF37: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D10); FLAG_NZ(g_cpu.A);
label_AF3A:;
    /* $AF3A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x1010 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF3D:;
    /* $AF3D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF40:;
    /* $AF40: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF43:;
    /* $AF43: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xAF44); return; }
label_AF45:;
    /* $AF45: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AF47:;
    /* $AF47: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AF49:;
    /* $AF49: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3DFF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF4C:;
    /* $AF4C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x31FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF4F:;
    /* $AF4F: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_AF50:;
    /* $AF50: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x35 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF52:;
    /* $AF52: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x38 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AF54:;
    /* $AF54: 3A */ maybe_trigger_vblank(2); /* NOP */
label_AF55:;
    /* $AF55: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0x3F3E + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AF58:;
    /* $AF58: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x4041 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF5B:;
    /* $AF5B: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_AF5C:;
    /* $AF5C: 84 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.Y);
label_AF5E:;
    /* $AF5E: 86 */ maybe_trigger_vblank(3); nes_write(0x87, g_cpu.X);
label_AF60:;
    /* $AF60: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AF62:;
    /* $AF62: 82 */ maybe_trigger_vblank(2); /* NOP */
label_AF64:;
    /* $AF64: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AF65:;
    /* $AF65: 89 */ maybe_trigger_vblank(2); /* NOP */
label_AF67:;
    /* $AF67: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_AF69:;
    /* $AF69: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x45; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_AF6B:;
    /* $AF6B: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x47; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_AF6D:;
    /* $AF6D: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AF6E:;
    /* $AF6E: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AF6F:;
    /* $AF6F: 47 */ maybe_trigger_vblank(5); { uint16_t a=0x5C; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AF71:;
    /* $AF71: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x5F5E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF74:;
    /* $AF74: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_AF75:;
    /* $AF75: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_AF76:;
    /* $AF76: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x74B9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF79:;
    /* $AF79: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x75 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AF7B:;
    /* $AF7B: 74 */ maybe_trigger_vblank(4); (void)nes_read((0xC1 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF7D:;
    /* $AF7D: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x13) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF7F:;
    /* $AF7F: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x36) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF81:;
    /* $AF81: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xBDBC + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_AF84:;
    /* $AF84: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x1514 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF87:;
    /* $AF87: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xC0 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF89:;
    /* $AF89: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xC0 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF8B:;
    /* $AF8B: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AF8D:;
    /* $AF8D: C1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xFF + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_AF8F:;
    /* $AF8F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x14C2 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF92:;
    /* $AF92: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x30FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF95:;
    /* $AF95: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xBC) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF97:;
    /* $AF97: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x1413 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF9A:;
    /* $AF9A: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x16 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AF9C:;
    /* $AF9C: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xD7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_AF9E:;
    /* $AF9E: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xD7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_AFA0:;
    /* $AFA0: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x76 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AFA2:;
    /* $AFA2: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x76 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AFA4:;
    /* $AFA4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBAFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AFA7:;
    /* $AFA7: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_AFA8:;
    /* $AFA8: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_AFAB:;
    /* $AFAB: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_AFAE:;
    /* $AFAE: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AFAF:;
    /* $AFAF: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x04 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AFB1:;
    /* $AFB1: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_AFB3:;
    /* $AFB3: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AFB5:;
    /* $AFB5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0908 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AFB8:;
    /* $AFB8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x09FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AFBB:;
    /* $AFBB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AFBC:;
    /* $AFBC: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x56 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AFBE:;
    /* $AFBE: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0x58 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AFC0:;
    /* $AFC0: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xAF53); return; }
label_AFC2:;
    /* $AFC2: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_AFC3:;
    /* $AFC3: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_AFC5:;
    /* $AFC5: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x504D, -1); return;
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
label_B004:; return;
label_B005:; return;
label_B006:; return;
label_B009:; return;
label_B00B:; return;
label_B00E:; return;
label_B010:; return;
label_B012:; return;
label_B014:; return;
label_B016:; return;
label_B017:; return;
label_B01A:; return;
label_B01B:; return;
label_B01C:; return;
label_B01F:; return;
label_B020:; return;
label_B021:; return;
label_B023:; return;
label_B024:; return;
label_B027:; return;
label_B029:; return;
label_B02B:; return;
label_B02C:; return;
label_B02E:; return;
label_B031:; return;
label_B034:; return;
label_B036:; return;
label_B038:; return;
label_B03B:; return;
label_B03E:; return;
label_B040:; return;
label_B041:; return;
label_B043:; return;
label_B044:; return;
label_B046:; return;
label_B049:; return;
label_B04C:; return;
label_B04E:; return;
label_B04F:; return;
label_B051:; return;
label_B053:; return;
label_B054:; return;
label_B056:; return;
label_B059:; return;
label_B05B:; return;
label_B05E:; return;
label_B05F:; return;
label_B061:; return;
label_B063:; return;
label_B064:; return;
label_B065:; return;
label_B067:; return;
label_B068:; return;
label_B06A:; return;
label_B06D:; return;
label_B06E:; return;
label_B070:; return;
label_B072:; return;
label_B073:; return;
label_B076:; return;
label_B078:; return;
label_B079:; return;
label_B07A:; return;
label_B07B:; return;
label_B07E:; return;
label_B081:; return;
label_B083:; return;
label_B084:; return;
label_B087:; return;
label_B088:; return;
label_B08A:; return;
label_B08D:; return;
label_B08F:; return;
label_B091:; return;
label_B093:; return;
label_B095:; return;
label_B097:; return;
label_B099:; return;
label_B09B:; return;
label_B09C:; return;
label_B09E:; return;
label_B09F:; return;
label_B0A2:; return;
label_B0A4:; return;
label_B0A5:; return;
label_B0A8:; return;
label_B0A9:; return;
label_B0AC:; return;
label_B0AE:; return;
label_B0AF:; return;
label_B0B2:; return;
label_B0B5:; return;
label_B0B7:; return;
label_B0BA:; return;
label_B0BB:; return;
label_B0BE:; return;
label_B0C0:; return;
label_B0C1:; return;
label_B0C4:; return;
label_B0C5:; return;
label_B0C8:; return;
label_B0CB:; return;
label_B0CD:; return;
label_B0CE:; return;
label_B0D1:; return;
label_B0D2:; return;
label_B0D5:; return;
label_B0D8:; return;
label_B0DB:; return;
label_B0DC:; return;
label_B0DF:; return;
label_B0E1:; return;
label_B0E3:; return;
label_B0E4:; return;
label_B0E7:; return;
label_B0E9:; return;
label_B0EB:; return;
label_B0ED:; return;
label_B0EE:; return;
label_B0EF:; return;
label_B0F1:; return;
label_B0F3:; return;
label_B0F5:; return;
label_B0F6:; return;
label_B0F7:; return;
label_B0FA:; return;
label_B0FB:; return;
label_B0FE:; return;
label_B0FF:; return;
label_B102:; return;
label_B103:; return;
label_B106:; return;
label_B109:; return;
label_B10B:; return;
label_B10D:; return;
label_B10F:; return;
label_B110:; return;
label_B113:; return;
label_B114:; return;
label_B116:; return;
label_B119:; return;
label_B11A:; return;
label_B11D:; return;
label_B120:; return;
label_B121:; return;
label_B124:; return;
label_B125:; return;
label_B128:; return;
label_B129:; return;
label_B12C:; return;
label_B12D:; return;
label_B130:; return;
label_B132:; return;
label_B135:; return;
label_B138:; return;
label_B13A:; return;
label_B13D:; return;
label_B13E:; return;
label_B140:; return;
label_B142:; return;
label_B145:; return;
label_B147:; return;
label_B148:; return;
label_B14B:; return;
label_B14C:; return;
label_B14F:; return;
label_B151:; return;
label_B153:; return;
label_B154:; return;
label_B157:; return;
label_B15A:; return;
label_B15C:; return;
label_B15D:; return;
label_B15E:; return;
label_B15F:; return;
label_B161:; return;
label_B162:; return;
label_B165:; return;
label_B167:; return;
label_B168:; return;
label_B16B:; return;
label_B16D:; return;
label_B16E:; return;
label_B171:; return;
label_B173:; return;
label_B174:; return;
label_B177:; return;
label_B178:; return;
label_B179:; return;
label_B17B:; return;
label_B17D:; return;
label_B17F:; return;
label_B181:; return;
label_B183:; return;
label_B185:; return;
label_B187:; return;
label_B189:; return;
label_B18B:; return;
label_B18D:; return;
label_B18F:; return;
label_B191:; return;
label_B193:; return;
label_B196:; return;
label_B197:; return;
label_B199:; return;
label_B19B:; return;
label_B19D:; return;
label_B19F:; return;
label_B1A1:; return;
label_B1A3:; return;
label_B1A5:; return;
label_B1A7:; return;
label_B1A8:; return;
label_B1AA:; return;
label_B1AC:; return;
label_B1AE:; return;
label_B1B0:; return;
label_B1B1:; return;
label_B1B2:; return;
label_B1B3:; return;
label_B1B5:; return;
label_B1B6:; return;
label_B1B8:; return;
label_B1BA:; return;
label_B1BC:; return;
label_B1BF:; return;
label_B1C0:; return;
label_B1C3:; return;
label_B1C6:; return;
label_B1C9:; return;
label_B1CA:; return;
label_B1CD:; return;
label_B1D0:; return;
label_B1D2:; return;
label_B1D4:; return;
label_B1D7:; return;
label_B1D8:; return;
label_B1DB:; return;
label_B1DE:; return;
label_B1E1:; return;
label_B1E2:; return;
label_B1E5:; return;
label_B1E8:; return;
label_B1EA:; return;
label_B1ED:; return;
label_B1EE:; return;
label_B1F1:; return;
label_B1F4:; return;
label_B1F7:; return;
label_B1F8:; return;
label_B1FB:; return;
label_B1FD:; return;
label_B1FF:; return;
label_B200:; return;
label_B201:; return;
label_B203:; return;
label_B204:; return;
label_B206:; return;
label_B207:; return;
label_B209:; return;
label_B20A:; return;
label_B20B:; return;
label_B20C:; return;
label_B20D:; return;
label_B20F:; return;
label_B211:; return;
label_B214:; return;
label_B217:; return;
label_B219:; return;
label_B21C:; return;
label_B21F:; return;
label_B222:; return;
label_B224:; return;
label_B225:; return;
label_B227:; return;
label_B228:; return;
label_B229:; return;
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
label_BD83:; return;
label_BD85:; return;
label_BD87:; return;
label_BD89:; return;
label_BD8C:; return;
label_BD8D:; return;
label_BD8E:; return;
label_BD8F:; return;
label_BD90:; return;
label_BD91:; return;
label_BD92:; return;
label_BD93:; return;
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
label_BDA9:; return;
label_BDAA:; return;
label_BDAB:; return;
label_BDAC:; return;
label_BDAD:; return;
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
}

void func_AE3A_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AE3A_b2");
#endif
label_AE3A:;
    /* $AE3A: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x35); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE3C:;
    /* $AE3C: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x35 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AE3E:;
    /* $AE3E: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AE40:;
    /* $AE40: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x37); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE42:;
    /* $AE42: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x37 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE44:;
    /* $AE44: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x04 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE46:;
    /* $AE46: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x36 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE48:;
    /* $AE48: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x36 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE4A:;
    /* $AE4A: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x36); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE4C:;
    /* $AE4C: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x36 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE4E:;
    /* $AE4E: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x04 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE50:;
    /* $AE50: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x37 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE52:;
    /* $AE52: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0x37 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE54:;
    /* $AE54: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x3202 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE57:;
    /* $AE57: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE59:;
    /* $AE59: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x2B); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE5B:;
    /* $AE5B: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AE5D:;
    /* $AE5D: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AE5F:;
    /* $AE5F: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AE61:;
    /* $AE61: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AE63:;
    /* $AE63: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2B01 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE66:;
    /* $AE66: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x2B + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE68:;
    /* $AE68: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x2B + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE6A:;
    /* $AE6A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x2B + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE6C:;
    /* $AE6C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2B04 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE6F:;
    /* $AE6F: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AE71:;
    /* $AE71: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AE73:;
    /* $AE73: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AE75:;
    /* $AE75: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AE77:;
    /* $AE77: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x2B); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE79:;
    /* $AE79: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AE7B:;
    /* $AE7B: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AE7D:;
    /* $AE7D: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AE7F:;
    /* $AE7F: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AE81:;
    /* $AE81: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x1401 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE84:;
    /* $AE84: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2B01 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE87:;
    /* $AE87: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x2B + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE89:;
    /* $AE89: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x2B + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE8B:;
    /* $AE8B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x2B + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE8D:;
    /* $AE8D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x3901 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE90:;
    /* $AE90: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x3801 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE93:;
    /* $AE93: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x3A04 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE96:;
    /* $AE96: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0x3C3B + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE99:;
    /* $AE99: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x3402 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE9C:;
    /* $AE9C: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE9E:;
    /* $AE9E: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEA0:;
    /* $AEA0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AEA1:;
    /* $AEA1: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEA3:;
    /* $AEA3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AEA4:;
    /* $AEA4: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEA6:;
    /* $AEA6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x3008 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AEA9:;
    /* $AEA9: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x30) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AEAB:;
    /* $AEAB: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x30) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AEAD:;
    /* $AEAD: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xAEE0); return; }
label_AEAF:;
    /* $AEAF: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xAEB0); return; }
label_AEB1:;
    /* $AEB1: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x34); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEB3:;
    /* $AEB3: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEB5:;
    /* $AEB5: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x04 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEB7:;
    /* $AEB7: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEB9:;
    /* $AEB9: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEBB:;
    /* $AEBB: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x34); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEBD:;
    /* $AEBD: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEBF:;
    /* $AEBF: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x04 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEC1:;
    /* $AEC1: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEC3:;
    /* $AEC3: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEC5:;
    /* $AEC5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2B08 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AEC8:;
    /* $AEC8: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AECA:;
    /* $AECA: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AECC:;
    /* $AECC: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AECE:;
    /* $AECE: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AED0:;
    /* $AED0: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AED2:;
    /* $AED2: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AED4:;
    /* $AED4: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AED6:;
    /* $AED6: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AED8:;
    /* $AED8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x3408 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AEDB:;
    /* $AEDB: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEDD:;
    /* $AEDD: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEDF:;
    /* $AEDF: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEE1:;
    /* $AEE1: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x08 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEE3:;
    /* $AEE3: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEE5:;
    /* $AEE5: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEE7:;
    /* $AEE7: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEE9:;
    /* $AEE9: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEEB:;
    /* $AEEB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF1F1 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AEEE:;
    /* $AEEE: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xF1) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AEF0:;
    /* $AEF0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF0FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AEF3:;
    /* $AEF3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xAF59); return; }
label_AEF5:;
    /* $AEF5: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x64); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEF7:;
    /* $AEF7: 64 */ maybe_trigger_vblank(3); (void)nes_read(0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEF9:;
    /* $AEF9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x6464 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AEFC:;
    /* $AEFC: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xFF); FLAG_NZ(g_cpu.Y);
label_AEFE:;
    /* $AEFE: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xFF); FLAG_NZ(g_cpu.Y);
label_AF00:;
    /* $AF00: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFA5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF03:;
    /* $AF03: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA0); FLAG_NZ(g_cpu.A);
label_AF05:;
    /* $AF05: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_AF07:;
    /* $AF07: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA1; FLAG_NZ(g_cpu.Y);
label_AF09:;
    /* $AF09: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xA1 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AF0B:;
    /* $AF0B: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xFF + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AF0D:;
    /* $AF0D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x5A59 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF10:;
    /* $AF10: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x5AFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF13:;
    /* $AF13: 5B */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AF16:;
    /* $AF16: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x10FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF19:;
    /* $AF19: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xAF2B); return; }
label_AF1B:;
    /* $AF1B: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AF40; }
label_AF1D:;
    /* $AF1D: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x25); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AF1F:;
    /* $AF1F: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x1B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AF21:;
    /* $AF21: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1E1D + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF24:;
    /* $AF24: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF26:;
    /* $AF26: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1F1A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF29:;
    /* $AF29: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xAF; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2B; g_cpu.S--; if (!nes_dispatch_call(0x2221, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAF29, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AF2C:;
    /* $AF2C: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AF2D:;
    /* $AF2D: 61 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x62 + g_cpu.X) & 0xFF)); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AF2F:;
    /* $AF2F: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x0E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF31:;
    /* $AF31: 0F */ maybe_trigger_vblank(6); { uint16_t a=0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF34:;
    /* $AF34: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0D0D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF37:;
    /* $AF37: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D10); FLAG_NZ(g_cpu.A);
label_AF3A:;
    /* $AF3A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x1010 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF3D:;
    /* $AF3D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF40:;
    /* $AF40: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF43:;
    /* $AF43: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xAF44); return; }
label_AF45:;
    /* $AF45: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AF47:;
    /* $AF47: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AF49:;
    /* $AF49: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3DFF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF4C:;
    /* $AF4C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x31FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF4F:;
    /* $AF4F: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_AF50:;
    /* $AF50: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x35 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF52:;
    /* $AF52: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x38 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AF54:;
    /* $AF54: 3A */ maybe_trigger_vblank(2); /* NOP */
label_AF55:;
    /* $AF55: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0x3F3E + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AF58:;
    /* $AF58: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x4041 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF5B:;
    /* $AF5B: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_AF5C:;
    /* $AF5C: 84 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.Y);
label_AF5E:;
    /* $AF5E: 86 */ maybe_trigger_vblank(3); nes_write(0x87, g_cpu.X);
label_AF60:;
    /* $AF60: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AF62:;
    /* $AF62: 82 */ maybe_trigger_vblank(2); /* NOP */
label_AF64:;
    /* $AF64: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AF65:;
    /* $AF65: 89 */ maybe_trigger_vblank(2); /* NOP */
label_AF67:;
    /* $AF67: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_AF69:;
    /* $AF69: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x45; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_AF6B:;
    /* $AF6B: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x47; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_AF6D:;
    /* $AF6D: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AF6E:;
    /* $AF6E: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AF6F:;
    /* $AF6F: 47 */ maybe_trigger_vblank(5); { uint16_t a=0x5C; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AF71:;
    /* $AF71: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x5F5E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF74:;
    /* $AF74: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_AF75:;
    /* $AF75: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_AF76:;
    /* $AF76: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x74B9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF79:;
    /* $AF79: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x75 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AF7B:;
    /* $AF7B: 74 */ maybe_trigger_vblank(4); (void)nes_read((0xC1 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF7D:;
    /* $AF7D: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x13) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF7F:;
    /* $AF7F: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x36) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF81:;
    /* $AF81: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xBDBC + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_AF84:;
    /* $AF84: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x1514 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF87:;
    /* $AF87: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xC0 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF89:;
    /* $AF89: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xC0 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF8B:;
    /* $AF8B: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AF8D:;
    /* $AF8D: C1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xFF + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_AF8F:;
    /* $AF8F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x14C2 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF92:;
    /* $AF92: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x30FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF95:;
    /* $AF95: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xBC) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF97:;
    /* $AF97: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x1413 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF9A:;
    /* $AF9A: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x16 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AF9C:;
    /* $AF9C: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xD7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_AF9E:;
    /* $AF9E: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xD7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_AFA0:;
    /* $AFA0: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x76 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AFA2:;
    /* $AFA2: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x76 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AFA4:;
    /* $AFA4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBAFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AFA7:;
    /* $AFA7: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_AFA8:;
    /* $AFA8: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_AFAB:;
    /* $AFAB: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_AFAE:;
    /* $AFAE: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AFAF:;
    /* $AFAF: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x04 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AFB1:;
    /* $AFB1: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_AFB3:;
    /* $AFB3: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AFB5:;
    /* $AFB5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0908 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AFB8:;
    /* $AFB8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x09FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AFBB:;
    /* $AFBB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AFBC:;
    /* $AFBC: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x56 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AFBE:;
    /* $AFBE: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0x58 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AFC0:;
    /* $AFC0: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xAF53); return; }
label_AFC2:;
    /* $AFC2: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_AFC3:;
    /* $AFC3: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_AFC5:;
    /* $AFC5: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x504D, -1); return;
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
label_B004:; return;
label_B005:; return;
label_B006:; return;
label_B009:; return;
label_B00B:; return;
label_B00E:; return;
label_B010:; return;
label_B012:; return;
label_B014:; return;
label_B016:; return;
label_B017:; return;
label_B01A:; return;
label_B01B:; return;
label_B01C:; return;
label_B01F:; return;
label_B020:; return;
label_B021:; return;
label_B023:; return;
label_B024:; return;
label_B027:; return;
label_B029:; return;
label_B02B:; return;
label_B02C:; return;
label_B02E:; return;
label_B031:; return;
label_B034:; return;
label_B036:; return;
label_B038:; return;
label_B03B:; return;
label_B03E:; return;
label_B040:; return;
label_B041:; return;
label_B043:; return;
label_B044:; return;
label_B046:; return;
label_B049:; return;
label_B04C:; return;
label_B04E:; return;
label_B04F:; return;
label_B051:; return;
label_B053:; return;
label_B054:; return;
label_B056:; return;
label_B059:; return;
label_B05B:; return;
label_B05E:; return;
label_B05F:; return;
label_B061:; return;
label_B063:; return;
label_B064:; return;
label_B065:; return;
label_B067:; return;
label_B068:; return;
label_B06A:; return;
label_B06D:; return;
label_B06E:; return;
label_B070:; return;
label_B072:; return;
label_B073:; return;
label_B076:; return;
label_B078:; return;
label_B079:; return;
label_B07A:; return;
label_B07B:; return;
label_B07E:; return;
label_B081:; return;
label_B083:; return;
label_B084:; return;
label_B087:; return;
label_B088:; return;
label_B08A:; return;
label_B08D:; return;
label_B08F:; return;
label_B091:; return;
label_B093:; return;
label_B095:; return;
label_B097:; return;
label_B099:; return;
label_B09B:; return;
label_B09C:; return;
label_B09E:; return;
label_B09F:; return;
label_B0A2:; return;
label_B0A4:; return;
label_B0A5:; return;
label_B0A8:; return;
label_B0A9:; return;
label_B0AC:; return;
label_B0AE:; return;
label_B0AF:; return;
label_B0B2:; return;
label_B0B5:; return;
label_B0B7:; return;
label_B0BA:; return;
label_B0BB:; return;
label_B0BE:; return;
label_B0C0:; return;
label_B0C1:; return;
label_B0C4:; return;
label_B0C5:; return;
label_B0C8:; return;
label_B0CB:; return;
label_B0CD:; return;
label_B0CE:; return;
label_B0D1:; return;
label_B0D2:; return;
label_B0D5:; return;
label_B0D8:; return;
label_B0DB:; return;
label_B0DC:; return;
label_B0DF:; return;
label_B0E1:; return;
label_B0E3:; return;
label_B0E4:; return;
label_B0E7:; return;
label_B0E9:; return;
label_B0EB:; return;
label_B0ED:; return;
label_B0EE:; return;
label_B0EF:; return;
label_B0F1:; return;
label_B0F3:; return;
label_B0F5:; return;
label_B0F6:; return;
label_B0F7:; return;
label_B0FA:; return;
label_B0FB:; return;
label_B0FE:; return;
label_B0FF:; return;
label_B102:; return;
label_B103:; return;
label_B106:; return;
label_B109:; return;
label_B10B:; return;
label_B10D:; return;
label_B10F:; return;
label_B110:; return;
label_B113:; return;
label_B114:; return;
label_B116:; return;
label_B119:; return;
label_B11A:; return;
label_B11D:; return;
label_B120:; return;
label_B121:; return;
label_B124:; return;
label_B125:; return;
label_B128:; return;
label_B129:; return;
label_B12C:; return;
label_B12D:; return;
label_B130:; return;
label_B132:; return;
label_B135:; return;
label_B138:; return;
label_B13A:; return;
label_B13D:; return;
label_B13E:; return;
label_B140:; return;
label_B142:; return;
label_B145:; return;
label_B147:; return;
label_B148:; return;
label_B14B:; return;
label_B14C:; return;
label_B14F:; return;
label_B151:; return;
label_B153:; return;
label_B154:; return;
label_B157:; return;
label_B15A:; return;
label_B15C:; return;
label_B15D:; return;
label_B15E:; return;
label_B15F:; return;
label_B161:; return;
label_B162:; return;
label_B165:; return;
label_B167:; return;
label_B168:; return;
label_B16B:; return;
label_B16D:; return;
label_B16E:; return;
label_B171:; return;
label_B173:; return;
label_B174:; return;
label_B177:; return;
label_B178:; return;
label_B179:; return;
label_B17B:; return;
label_B17D:; return;
label_B17F:; return;
label_B181:; return;
label_B183:; return;
label_B185:; return;
label_B187:; return;
label_B189:; return;
label_B18B:; return;
label_B18D:; return;
label_B18F:; return;
label_B191:; return;
label_B193:; return;
label_B196:; return;
label_B197:; return;
label_B199:; return;
label_B19B:; return;
label_B19D:; return;
label_B19F:; return;
label_B1A1:; return;
label_B1A3:; return;
label_B1A5:; return;
label_B1A7:; return;
label_B1A8:; return;
label_B1AA:; return;
label_B1AC:; return;
label_B1AE:; return;
label_B1B0:; return;
label_B1B1:; return;
label_B1B2:; return;
label_B1B3:; return;
label_B1B5:; return;
label_B1B6:; return;
label_B1B8:; return;
label_B1BA:; return;
label_B1BC:; return;
label_B1BF:; return;
label_B1C0:; return;
label_B1C3:; return;
label_B1C6:; return;
label_B1C9:; return;
label_B1CA:; return;
label_B1CD:; return;
label_B1D0:; return;
label_B1D2:; return;
label_B1D4:; return;
label_B1D7:; return;
label_B1D8:; return;
label_B1DB:; return;
label_B1DE:; return;
label_B1E1:; return;
label_B1E2:; return;
label_B1E5:; return;
label_B1E8:; return;
label_B1EA:; return;
label_B1ED:; return;
label_B1EE:; return;
label_B1F1:; return;
label_B1F4:; return;
label_B1F7:; return;
label_B1F8:; return;
label_B1FB:; return;
label_B1FD:; return;
label_B1FF:; return;
label_B200:; return;
label_B201:; return;
label_B203:; return;
label_B204:; return;
label_B206:; return;
label_B207:; return;
label_B209:; return;
label_B20A:; return;
label_B20B:; return;
label_B20C:; return;
label_B20D:; return;
label_B20F:; return;
label_B211:; return;
label_B214:; return;
label_B217:; return;
label_B219:; return;
label_B21C:; return;
label_B21F:; return;
label_B222:; return;
label_B224:; return;
label_B225:; return;
label_B227:; return;
label_B228:; return;
label_B229:; return;
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
label_BD83:; return;
label_BD85:; return;
label_BD87:; return;
label_BD89:; return;
label_BD8C:; return;
label_BD8D:; return;
label_BD8E:; return;
label_BD8F:; return;
label_BD90:; return;
label_BD91:; return;
label_BD92:; return;
label_BD93:; return;
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
label_BDA9:; return;
label_BDAA:; return;
label_BDAB:; return;
label_BDAC:; return;
label_BDAD:; return;
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
}

void func_AE3B_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AE3B_b2");
#endif
label_AE3B:;
    /* $AE3B: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x35 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AE3D:;
    /* $AE3D: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x35 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AE3F:;
    /* $AE3F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x3704 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE42:;
    /* $AE42: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x37 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE44:;
    /* $AE44: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x04 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE46:;
    /* $AE46: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x36 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE48:;
    /* $AE48: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x36 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE4A:;
    /* $AE4A: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x36); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE4C:;
    /* $AE4C: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x36 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE4E:;
    /* $AE4E: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x04 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE50:;
    /* $AE50: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x37 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE52:;
    /* $AE52: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0x37 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE54:;
    /* $AE54: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x3202 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE57:;
    /* $AE57: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE59:;
    /* $AE59: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x2B); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE5B:;
    /* $AE5B: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AE5D:;
    /* $AE5D: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AE5F:;
    /* $AE5F: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AE61:;
    /* $AE61: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AE63:;
    /* $AE63: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2B01 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE66:;
    /* $AE66: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x2B + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE68:;
    /* $AE68: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x2B + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE6A:;
    /* $AE6A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x2B + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE6C:;
    /* $AE6C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2B04 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE6F:;
    /* $AE6F: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AE71:;
    /* $AE71: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AE73:;
    /* $AE73: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AE75:;
    /* $AE75: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AE77:;
    /* $AE77: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x2B); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE79:;
    /* $AE79: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AE7B:;
    /* $AE7B: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AE7D:;
    /* $AE7D: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AE7F:;
    /* $AE7F: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AE81:;
    /* $AE81: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x1401 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE84:;
    /* $AE84: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2B01 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE87:;
    /* $AE87: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x2B + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE89:;
    /* $AE89: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x2B + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE8B:;
    /* $AE8B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x2B + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE8D:;
    /* $AE8D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x3901 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE90:;
    /* $AE90: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x3801 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE93:;
    /* $AE93: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x3A04 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE96:;
    /* $AE96: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0x3C3B + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE99:;
    /* $AE99: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x3402 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE9C:;
    /* $AE9C: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE9E:;
    /* $AE9E: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEA0:;
    /* $AEA0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AEA1:;
    /* $AEA1: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEA3:;
    /* $AEA3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AEA4:;
    /* $AEA4: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEA6:;
    /* $AEA6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x3008 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AEA9:;
    /* $AEA9: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x30) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AEAB:;
    /* $AEAB: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x30) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AEAD:;
    /* $AEAD: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xAEE0); return; }
label_AEAF:;
    /* $AEAF: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xAEB0); return; }
label_AEB1:;
    /* $AEB1: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x34); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEB3:;
    /* $AEB3: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEB5:;
    /* $AEB5: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x04 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEB7:;
    /* $AEB7: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEB9:;
    /* $AEB9: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEBB:;
    /* $AEBB: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x34); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEBD:;
    /* $AEBD: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEBF:;
    /* $AEBF: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x04 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEC1:;
    /* $AEC1: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEC3:;
    /* $AEC3: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEC5:;
    /* $AEC5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2B08 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AEC8:;
    /* $AEC8: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AECA:;
    /* $AECA: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AECC:;
    /* $AECC: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AECE:;
    /* $AECE: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AED0:;
    /* $AED0: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AED2:;
    /* $AED2: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AED4:;
    /* $AED4: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AED6:;
    /* $AED6: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AED8:;
    /* $AED8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x3408 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AEDB:;
    /* $AEDB: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEDD:;
    /* $AEDD: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEDF:;
    /* $AEDF: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEE1:;
    /* $AEE1: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x08 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEE3:;
    /* $AEE3: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEE5:;
    /* $AEE5: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEE7:;
    /* $AEE7: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEE9:;
    /* $AEE9: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEEB:;
    /* $AEEB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF1F1 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AEEE:;
    /* $AEEE: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xF1) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AEF0:;
    /* $AEF0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF0FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AEF3:;
    /* $AEF3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xAF59); return; }
label_AEF5:;
    /* $AEF5: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x64); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEF7:;
    /* $AEF7: 64 */ maybe_trigger_vblank(3); (void)nes_read(0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEF9:;
    /* $AEF9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x6464 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AEFC:;
    /* $AEFC: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xFF); FLAG_NZ(g_cpu.Y);
label_AEFE:;
    /* $AEFE: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xFF); FLAG_NZ(g_cpu.Y);
label_AF00:;
    /* $AF00: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFA5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF03:;
    /* $AF03: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA0); FLAG_NZ(g_cpu.A);
label_AF05:;
    /* $AF05: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_AF07:;
    /* $AF07: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA1; FLAG_NZ(g_cpu.Y);
label_AF09:;
    /* $AF09: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xA1 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AF0B:;
    /* $AF0B: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xFF + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AF0D:;
    /* $AF0D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x5A59 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF10:;
    /* $AF10: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x5AFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF13:;
    /* $AF13: 5B */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AF16:;
    /* $AF16: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x10FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF19:;
    /* $AF19: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xAF2B); return; }
label_AF1B:;
    /* $AF1B: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AF40; }
label_AF1D:;
    /* $AF1D: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x25); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AF1F:;
    /* $AF1F: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x1B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AF21:;
    /* $AF21: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1E1D + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF24:;
    /* $AF24: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF26:;
    /* $AF26: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1F1A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF29:;
    /* $AF29: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xAF; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2B; g_cpu.S--; if (!nes_dispatch_call(0x2221, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAF29, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AF2C:;
    /* $AF2C: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AF2D:;
    /* $AF2D: 61 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x62 + g_cpu.X) & 0xFF)); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AF2F:;
    /* $AF2F: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x0E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF31:;
    /* $AF31: 0F */ maybe_trigger_vblank(6); { uint16_t a=0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF34:;
    /* $AF34: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0D0D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF37:;
    /* $AF37: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D10); FLAG_NZ(g_cpu.A);
label_AF3A:;
    /* $AF3A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x1010 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF3D:;
    /* $AF3D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF40:;
    /* $AF40: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF43:;
    /* $AF43: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xAF44); return; }
label_AF45:;
    /* $AF45: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AF47:;
    /* $AF47: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AF49:;
    /* $AF49: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3DFF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF4C:;
    /* $AF4C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x31FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF4F:;
    /* $AF4F: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_AF50:;
    /* $AF50: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x35 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF52:;
    /* $AF52: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x38 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AF54:;
    /* $AF54: 3A */ maybe_trigger_vblank(2); /* NOP */
label_AF55:;
    /* $AF55: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0x3F3E + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AF58:;
    /* $AF58: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x4041 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF5B:;
    /* $AF5B: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_AF5C:;
    /* $AF5C: 84 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.Y);
label_AF5E:;
    /* $AF5E: 86 */ maybe_trigger_vblank(3); nes_write(0x87, g_cpu.X);
label_AF60:;
    /* $AF60: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AF62:;
    /* $AF62: 82 */ maybe_trigger_vblank(2); /* NOP */
label_AF64:;
    /* $AF64: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AF65:;
    /* $AF65: 89 */ maybe_trigger_vblank(2); /* NOP */
label_AF67:;
    /* $AF67: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_AF69:;
    /* $AF69: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x45; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_AF6B:;
    /* $AF6B: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x47; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_AF6D:;
    /* $AF6D: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AF6E:;
    /* $AF6E: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AF6F:;
    /* $AF6F: 47 */ maybe_trigger_vblank(5); { uint16_t a=0x5C; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AF71:;
    /* $AF71: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x5F5E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF74:;
    /* $AF74: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_AF75:;
    /* $AF75: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_AF76:;
    /* $AF76: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x74B9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF79:;
    /* $AF79: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x75 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AF7B:;
    /* $AF7B: 74 */ maybe_trigger_vblank(4); (void)nes_read((0xC1 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF7D:;
    /* $AF7D: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x13) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF7F:;
    /* $AF7F: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x36) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF81:;
    /* $AF81: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xBDBC + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_AF84:;
    /* $AF84: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x1514 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF87:;
    /* $AF87: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xC0 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF89:;
    /* $AF89: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xC0 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF8B:;
    /* $AF8B: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AF8D:;
    /* $AF8D: C1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xFF + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_AF8F:;
    /* $AF8F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x14C2 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF92:;
    /* $AF92: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x30FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF95:;
    /* $AF95: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xBC) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF97:;
    /* $AF97: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x1413 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF9A:;
    /* $AF9A: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x16 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AF9C:;
    /* $AF9C: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xD7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_AF9E:;
    /* $AF9E: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xD7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_AFA0:;
    /* $AFA0: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x76 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AFA2:;
    /* $AFA2: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x76 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AFA4:;
    /* $AFA4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBAFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AFA7:;
    /* $AFA7: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_AFA8:;
    /* $AFA8: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_AFAB:;
    /* $AFAB: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_AFAE:;
    /* $AFAE: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AFAF:;
    /* $AFAF: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x04 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AFB1:;
    /* $AFB1: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_AFB3:;
    /* $AFB3: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AFB5:;
    /* $AFB5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0908 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AFB8:;
    /* $AFB8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x09FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AFBB:;
    /* $AFBB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AFBC:;
    /* $AFBC: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x56 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AFBE:;
    /* $AFBE: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0x58 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AFC0:;
    /* $AFC0: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xAF53); return; }
label_AFC2:;
    /* $AFC2: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_AFC3:;
    /* $AFC3: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_AFC5:;
    /* $AFC5: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x504D, -1); return;
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
label_B004:; return;
label_B005:; return;
label_B006:; return;
label_B009:; return;
label_B00B:; return;
label_B00E:; return;
label_B010:; return;
label_B012:; return;
label_B014:; return;
label_B016:; return;
label_B017:; return;
label_B01A:; return;
label_B01B:; return;
label_B01C:; return;
label_B01F:; return;
label_B020:; return;
label_B021:; return;
label_B023:; return;
label_B024:; return;
label_B027:; return;
label_B029:; return;
label_B02B:; return;
label_B02C:; return;
label_B02E:; return;
label_B031:; return;
label_B034:; return;
label_B036:; return;
label_B038:; return;
label_B03B:; return;
label_B03E:; return;
label_B040:; return;
label_B041:; return;
label_B043:; return;
label_B044:; return;
label_B046:; return;
label_B049:; return;
label_B04C:; return;
label_B04E:; return;
label_B04F:; return;
label_B051:; return;
label_B053:; return;
label_B054:; return;
label_B056:; return;
label_B059:; return;
label_B05B:; return;
label_B05E:; return;
label_B05F:; return;
label_B061:; return;
label_B063:; return;
label_B064:; return;
label_B065:; return;
label_B067:; return;
label_B068:; return;
label_B06A:; return;
label_B06D:; return;
label_B06E:; return;
label_B070:; return;
label_B072:; return;
label_B073:; return;
label_B076:; return;
label_B078:; return;
label_B079:; return;
label_B07A:; return;
label_B07B:; return;
label_B07E:; return;
label_B081:; return;
label_B083:; return;
label_B084:; return;
label_B087:; return;
label_B088:; return;
label_B08A:; return;
label_B08D:; return;
label_B08F:; return;
label_B091:; return;
label_B093:; return;
label_B095:; return;
label_B097:; return;
label_B099:; return;
label_B09B:; return;
label_B09C:; return;
label_B09E:; return;
label_B09F:; return;
label_B0A2:; return;
label_B0A4:; return;
label_B0A5:; return;
label_B0A8:; return;
label_B0A9:; return;
label_B0AC:; return;
label_B0AE:; return;
label_B0AF:; return;
label_B0B2:; return;
label_B0B5:; return;
label_B0B7:; return;
label_B0BA:; return;
label_B0BB:; return;
label_B0BE:; return;
label_B0C0:; return;
label_B0C1:; return;
label_B0C4:; return;
label_B0C5:; return;
label_B0C8:; return;
label_B0CB:; return;
label_B0CD:; return;
label_B0CE:; return;
label_B0D1:; return;
label_B0D2:; return;
label_B0D5:; return;
label_B0D8:; return;
label_B0DB:; return;
label_B0DC:; return;
label_B0DF:; return;
label_B0E1:; return;
label_B0E3:; return;
label_B0E4:; return;
label_B0E7:; return;
label_B0E9:; return;
label_B0EB:; return;
label_B0ED:; return;
label_B0EE:; return;
label_B0EF:; return;
label_B0F1:; return;
label_B0F3:; return;
label_B0F5:; return;
label_B0F6:; return;
label_B0F7:; return;
label_B0FA:; return;
label_B0FB:; return;
label_B0FE:; return;
label_B0FF:; return;
label_B102:; return;
label_B103:; return;
label_B106:; return;
label_B109:; return;
label_B10B:; return;
label_B10D:; return;
label_B10F:; return;
label_B110:; return;
label_B113:; return;
label_B114:; return;
label_B116:; return;
label_B119:; return;
label_B11A:; return;
label_B11D:; return;
label_B120:; return;
label_B121:; return;
label_B124:; return;
label_B125:; return;
label_B128:; return;
label_B129:; return;
label_B12C:; return;
label_B12D:; return;
label_B130:; return;
label_B132:; return;
label_B135:; return;
label_B138:; return;
label_B13A:; return;
label_B13D:; return;
label_B13E:; return;
label_B140:; return;
label_B142:; return;
label_B145:; return;
label_B147:; return;
label_B148:; return;
label_B14B:; return;
label_B14C:; return;
label_B14F:; return;
label_B151:; return;
label_B153:; return;
label_B154:; return;
label_B157:; return;
label_B15A:; return;
label_B15C:; return;
label_B15D:; return;
label_B15E:; return;
label_B15F:; return;
label_B161:; return;
label_B162:; return;
label_B165:; return;
label_B167:; return;
label_B168:; return;
label_B16B:; return;
label_B16D:; return;
label_B16E:; return;
label_B171:; return;
label_B173:; return;
label_B174:; return;
label_B177:; return;
label_B178:; return;
label_B179:; return;
label_B17B:; return;
label_B17D:; return;
label_B17F:; return;
label_B181:; return;
label_B183:; return;
label_B185:; return;
label_B187:; return;
label_B189:; return;
label_B18B:; return;
label_B18D:; return;
label_B18F:; return;
label_B191:; return;
label_B193:; return;
label_B196:; return;
label_B197:; return;
label_B199:; return;
label_B19B:; return;
label_B19D:; return;
label_B19F:; return;
label_B1A1:; return;
label_B1A3:; return;
label_B1A5:; return;
label_B1A7:; return;
label_B1A8:; return;
label_B1AA:; return;
label_B1AC:; return;
label_B1AE:; return;
label_B1B0:; return;
label_B1B1:; return;
label_B1B2:; return;
label_B1B3:; return;
label_B1B5:; return;
label_B1B6:; return;
label_B1B8:; return;
label_B1BA:; return;
label_B1BC:; return;
label_B1BF:; return;
label_B1C0:; return;
label_B1C3:; return;
label_B1C6:; return;
label_B1C9:; return;
label_B1CA:; return;
label_B1CD:; return;
label_B1D0:; return;
label_B1D2:; return;
label_B1D4:; return;
label_B1D7:; return;
label_B1D8:; return;
label_B1DB:; return;
label_B1DE:; return;
label_B1E1:; return;
label_B1E2:; return;
label_B1E5:; return;
label_B1E8:; return;
label_B1EA:; return;
label_B1ED:; return;
label_B1EE:; return;
label_B1F1:; return;
label_B1F4:; return;
label_B1F7:; return;
label_B1F8:; return;
label_B1FB:; return;
label_B1FD:; return;
label_B1FF:; return;
label_B200:; return;
label_B201:; return;
label_B203:; return;
label_B204:; return;
label_B206:; return;
label_B207:; return;
label_B209:; return;
label_B20A:; return;
label_B20B:; return;
label_B20C:; return;
label_B20D:; return;
label_B20F:; return;
label_B211:; return;
label_B214:; return;
label_B217:; return;
label_B219:; return;
label_B21C:; return;
label_B21F:; return;
label_B222:; return;
label_B224:; return;
label_B225:; return;
label_B227:; return;
label_B228:; return;
label_B229:; return;
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
label_BD83:; return;
label_BD85:; return;
label_BD87:; return;
label_BD89:; return;
label_BD8C:; return;
label_BD8D:; return;
label_BD8E:; return;
label_BD8F:; return;
label_BD90:; return;
label_BD91:; return;
label_BD92:; return;
label_BD93:; return;
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
label_BDA9:; return;
label_BDAA:; return;
label_BDAB:; return;
label_BDAC:; return;
label_BDAD:; return;
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
}

void func_AEE0_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AEE0_b2");
#endif
label_AEE0:;
    /* $AEE0: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEE2:;
    /* $AEE2: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AEE3:;
    /* $AEE3: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEE5:;
    /* $AEE5: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEE7:;
    /* $AEE7: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEE9:;
    /* $AEE9: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEEB:;
    /* $AEEB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF1F1 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AEEE:;
    /* $AEEE: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xF1) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AEF0:;
    /* $AEF0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF0FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AEF3:;
    /* $AEF3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xAF59); return; }
label_AEF5:;
    /* $AEF5: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x64); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEF7:;
    /* $AEF7: 64 */ maybe_trigger_vblank(3); (void)nes_read(0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEF9:;
    /* $AEF9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x6464 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AEFC:;
    /* $AEFC: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xFF); FLAG_NZ(g_cpu.Y);
label_AEFE:;
    /* $AEFE: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xFF); FLAG_NZ(g_cpu.Y);
label_AF00:;
    /* $AF00: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFA5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF03:;
    /* $AF03: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA0); FLAG_NZ(g_cpu.A);
label_AF05:;
    /* $AF05: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_AF07:;
    /* $AF07: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA1; FLAG_NZ(g_cpu.Y);
label_AF09:;
    /* $AF09: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xA1 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AF0B:;
    /* $AF0B: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xFF + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AF0D:;
    /* $AF0D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x5A59 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF10:;
    /* $AF10: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x5AFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF13:;
    /* $AF13: 5B */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AF16:;
    /* $AF16: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x10FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF19:;
    /* $AF19: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xAF2B); return; }
label_AF1B:;
    /* $AF1B: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AF40; }
label_AF1D:;
    /* $AF1D: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x25); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AF1F:;
    /* $AF1F: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x1B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AF21:;
    /* $AF21: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1E1D + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF24:;
    /* $AF24: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF26:;
    /* $AF26: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1F1A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF29:;
    /* $AF29: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xAF; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2B; g_cpu.S--; if (!nes_dispatch_call(0x2221, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAF29, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AF2C:;
    /* $AF2C: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AF2D:;
    /* $AF2D: 61 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x62 + g_cpu.X) & 0xFF)); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AF2F:;
    /* $AF2F: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x0E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF31:;
    /* $AF31: 0F */ maybe_trigger_vblank(6); { uint16_t a=0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF34:;
    /* $AF34: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0D0D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF37:;
    /* $AF37: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D10); FLAG_NZ(g_cpu.A);
label_AF3A:;
    /* $AF3A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x1010 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF3D:;
    /* $AF3D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF40:;
    /* $AF40: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF43:;
    /* $AF43: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xAF44); return; }
label_AF45:;
    /* $AF45: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AF47:;
    /* $AF47: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AF49:;
    /* $AF49: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3DFF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF4C:;
    /* $AF4C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x31FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF4F:;
    /* $AF4F: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_AF50:;
    /* $AF50: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x35 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF52:;
    /* $AF52: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x38 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AF54:;
    /* $AF54: 3A */ maybe_trigger_vblank(2); /* NOP */
label_AF55:;
    /* $AF55: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0x3F3E + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AF58:;
    /* $AF58: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x4041 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF5B:;
    /* $AF5B: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_AF5C:;
    /* $AF5C: 84 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.Y);
label_AF5E:;
    /* $AF5E: 86 */ maybe_trigger_vblank(3); nes_write(0x87, g_cpu.X);
label_AF60:;
    /* $AF60: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AF62:;
    /* $AF62: 82 */ maybe_trigger_vblank(2); /* NOP */
label_AF64:;
    /* $AF64: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AF65:;
    /* $AF65: 89 */ maybe_trigger_vblank(2); /* NOP */
label_AF67:;
    /* $AF67: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_AF69:;
    /* $AF69: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x45; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_AF6B:;
    /* $AF6B: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x47; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_AF6D:;
    /* $AF6D: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AF6E:;
    /* $AF6E: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AF6F:;
    /* $AF6F: 47 */ maybe_trigger_vblank(5); { uint16_t a=0x5C; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AF71:;
    /* $AF71: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x5F5E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF74:;
    /* $AF74: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_AF75:;
    /* $AF75: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_AF76:;
    /* $AF76: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x74B9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF79:;
    /* $AF79: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x75 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AF7B:;
    /* $AF7B: 74 */ maybe_trigger_vblank(4); (void)nes_read((0xC1 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF7D:;
    /* $AF7D: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x13) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF7F:;
    /* $AF7F: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x36) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF81:;
    /* $AF81: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xBDBC + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_AF84:;
    /* $AF84: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x1514 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF87:;
    /* $AF87: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xC0 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF89:;
    /* $AF89: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xC0 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF8B:;
    /* $AF8B: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AF8D:;
    /* $AF8D: C1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xFF + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_AF8F:;
    /* $AF8F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x14C2 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF92:;
    /* $AF92: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x30FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF95:;
    /* $AF95: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xBC) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF97:;
    /* $AF97: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x1413 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF9A:;
    /* $AF9A: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x16 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AF9C:;
    /* $AF9C: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xD7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_AF9E:;
    /* $AF9E: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xD7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_AFA0:;
    /* $AFA0: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x76 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AFA2:;
    /* $AFA2: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x76 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AFA4:;
    /* $AFA4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBAFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AFA7:;
    /* $AFA7: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_AFA8:;
    /* $AFA8: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_AFAB:;
    /* $AFAB: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_AFAE:;
    /* $AFAE: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AFAF:;
    /* $AFAF: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x04 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AFB1:;
    /* $AFB1: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_AFB3:;
    /* $AFB3: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AFB5:;
    /* $AFB5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0908 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AFB8:;
    /* $AFB8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x09FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AFBB:;
    /* $AFBB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AFBC:;
    /* $AFBC: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x56 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AFBE:;
    /* $AFBE: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0x58 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AFC0:;
    /* $AFC0: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xAF53); return; }
label_AFC2:;
    /* $AFC2: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_AFC3:;
    /* $AFC3: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_AFC5:;
    /* $AFC5: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x504D, -1); return;
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
label_B004:; return;
label_B005:; return;
label_B006:; return;
label_B009:; return;
label_B00B:; return;
label_B00E:; return;
label_B010:; return;
label_B012:; return;
label_B014:; return;
label_B016:; return;
label_B017:; return;
label_B01A:; return;
label_B01B:; return;
label_B01C:; return;
label_B01F:; return;
label_B020:; return;
label_B021:; return;
label_B023:; return;
label_B024:; return;
label_B027:; return;
label_B029:; return;
label_B02B:; return;
label_B02C:; return;
label_B02E:; return;
label_B031:; return;
label_B034:; return;
label_B036:; return;
label_B038:; return;
label_B03B:; return;
label_B03E:; return;
label_B040:; return;
label_B041:; return;
label_B043:; return;
label_B044:; return;
label_B046:; return;
label_B049:; return;
label_B04C:; return;
label_B04E:; return;
label_B04F:; return;
label_B051:; return;
label_B053:; return;
label_B054:; return;
label_B056:; return;
label_B059:; return;
label_B05B:; return;
label_B05E:; return;
label_B05F:; return;
label_B061:; return;
label_B063:; return;
label_B064:; return;
label_B065:; return;
label_B067:; return;
label_B068:; return;
label_B06A:; return;
label_B06D:; return;
label_B06E:; return;
label_B070:; return;
label_B072:; return;
label_B073:; return;
label_B076:; return;
label_B078:; return;
label_B079:; return;
label_B07A:; return;
label_B07B:; return;
label_B07E:; return;
label_B081:; return;
label_B083:; return;
label_B084:; return;
label_B087:; return;
label_B088:; return;
label_B08A:; return;
label_B08D:; return;
label_B08F:; return;
label_B091:; return;
label_B093:; return;
label_B095:; return;
label_B097:; return;
label_B099:; return;
label_B09B:; return;
label_B09C:; return;
label_B09E:; return;
label_B09F:; return;
label_B0A2:; return;
label_B0A4:; return;
label_B0A5:; return;
label_B0A8:; return;
label_B0A9:; return;
label_B0AC:; return;
label_B0AE:; return;
label_B0AF:; return;
label_B0B2:; return;
label_B0B5:; return;
label_B0B7:; return;
label_B0BA:; return;
label_B0BB:; return;
label_B0BE:; return;
label_B0C0:; return;
label_B0C1:; return;
label_B0C4:; return;
label_B0C5:; return;
label_B0C8:; return;
label_B0CB:; return;
label_B0CD:; return;
label_B0CE:; return;
label_B0D1:; return;
label_B0D2:; return;
label_B0D5:; return;
label_B0D8:; return;
label_B0DB:; return;
label_B0DC:; return;
label_B0DF:; return;
label_B0E1:; return;
label_B0E3:; return;
label_B0E4:; return;
label_B0E7:; return;
label_B0E9:; return;
label_B0EB:; return;
label_B0ED:; return;
label_B0EE:; return;
label_B0EF:; return;
label_B0F1:; return;
label_B0F3:; return;
label_B0F5:; return;
label_B0F6:; return;
label_B0F7:; return;
label_B0FA:; return;
label_B0FB:; return;
label_B0FE:; return;
label_B0FF:; return;
label_B102:; return;
label_B103:; return;
label_B106:; return;
label_B109:; return;
label_B10B:; return;
label_B10D:; return;
label_B10F:; return;
label_B110:; return;
label_B113:; return;
label_B114:; return;
label_B116:; return;
label_B119:; return;
label_B11A:; return;
label_B11D:; return;
label_B120:; return;
label_B121:; return;
label_B124:; return;
label_B125:; return;
label_B128:; return;
label_B129:; return;
label_B12C:; return;
label_B12D:; return;
label_B130:; return;
label_B132:; return;
label_B135:; return;
label_B138:; return;
label_B13A:; return;
label_B13D:; return;
label_B13E:; return;
label_B140:; return;
label_B142:; return;
label_B145:; return;
label_B147:; return;
label_B148:; return;
label_B14B:; return;
label_B14C:; return;
label_B14F:; return;
label_B151:; return;
label_B153:; return;
label_B154:; return;
label_B157:; return;
label_B15A:; return;
label_B15C:; return;
label_B15D:; return;
label_B15E:; return;
label_B15F:; return;
label_B161:; return;
label_B162:; return;
label_B165:; return;
label_B167:; return;
label_B168:; return;
label_B16B:; return;
label_B16D:; return;
label_B16E:; return;
label_B171:; return;
label_B173:; return;
label_B174:; return;
label_B177:; return;
label_B178:; return;
label_B179:; return;
label_B17B:; return;
label_B17D:; return;
label_B17F:; return;
label_B181:; return;
label_B183:; return;
label_B185:; return;
label_B187:; return;
label_B189:; return;
label_B18B:; return;
label_B18D:; return;
label_B18F:; return;
label_B191:; return;
label_B193:; return;
label_B196:; return;
label_B197:; return;
label_B199:; return;
label_B19B:; return;
label_B19D:; return;
label_B19F:; return;
label_B1A1:; return;
label_B1A3:; return;
label_B1A5:; return;
label_B1A7:; return;
label_B1A8:; return;
label_B1AA:; return;
label_B1AC:; return;
label_B1AE:; return;
label_B1B0:; return;
label_B1B1:; return;
label_B1B2:; return;
label_B1B3:; return;
label_B1B5:; return;
label_B1B6:; return;
label_B1B8:; return;
label_B1BA:; return;
label_B1BC:; return;
label_B1BF:; return;
label_B1C0:; return;
label_B1C3:; return;
label_B1C6:; return;
label_B1C9:; return;
label_B1CA:; return;
label_B1CD:; return;
label_B1D0:; return;
label_B1D2:; return;
label_B1D4:; return;
label_B1D7:; return;
label_B1D8:; return;
label_B1DB:; return;
label_B1DE:; return;
label_B1E1:; return;
label_B1E2:; return;
label_B1E5:; return;
label_B1E8:; return;
label_B1EA:; return;
label_B1ED:; return;
label_B1EE:; return;
label_B1F1:; return;
label_B1F4:; return;
label_B1F7:; return;
label_B1F8:; return;
label_B1FB:; return;
label_B1FD:; return;
label_B1FF:; return;
label_B200:; return;
label_B201:; return;
label_B203:; return;
label_B204:; return;
label_B206:; return;
label_B207:; return;
label_B209:; return;
label_B20A:; return;
label_B20B:; return;
label_B20C:; return;
label_B20D:; return;
label_B20F:; return;
label_B211:; return;
label_B214:; return;
label_B217:; return;
label_B219:; return;
label_B21C:; return;
label_B21F:; return;
label_B222:; return;
label_B224:; return;
label_B225:; return;
label_B227:; return;
label_B228:; return;
label_B229:; return;
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
label_BD83:; return;
label_BD85:; return;
label_BD87:; return;
label_BD89:; return;
label_BD8C:; return;
label_BD8D:; return;
label_BD8E:; return;
label_BD8F:; return;
label_BD90:; return;
label_BD91:; return;
label_BD92:; return;
label_BD93:; return;
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
label_BDA9:; return;
label_BDAA:; return;
label_BDAB:; return;
label_BDAC:; return;
label_BDAD:; return;
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
}

void func_AF59_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AF59_b2");
#endif
label_AF59:;
    /* $AF59: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x40 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AF5B:;
    /* $AF5B: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_AF5C:;
    /* $AF5C: 84 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.Y);
label_AF5E:;
    /* $AF5E: 86 */ maybe_trigger_vblank(3); nes_write(0x87, g_cpu.X);
label_AF60:;
    /* $AF60: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AF62:;
    /* $AF62: 82 */ maybe_trigger_vblank(2); /* NOP */
label_AF64:;
    /* $AF64: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AF65:;
    /* $AF65: 89 */ maybe_trigger_vblank(2); /* NOP */
label_AF67:;
    /* $AF67: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_AF69:;
    /* $AF69: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x45; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_AF6B:;
    /* $AF6B: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x47; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_AF6D:;
    /* $AF6D: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AF6E:;
    /* $AF6E: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AF6F:;
    /* $AF6F: 47 */ maybe_trigger_vblank(5); { uint16_t a=0x5C; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AF71:;
    /* $AF71: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x5F5E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF74:;
    /* $AF74: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_AF75:;
    /* $AF75: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_AF76:;
    /* $AF76: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x74B9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF79:;
    /* $AF79: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x75 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AF7B:;
    /* $AF7B: 74 */ maybe_trigger_vblank(4); (void)nes_read((0xC1 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF7D:;
    /* $AF7D: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x13) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF7F:;
    /* $AF7F: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x36) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF81:;
    /* $AF81: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xBDBC + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_AF84:;
    /* $AF84: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x1514 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF87:;
    /* $AF87: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xC0 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF89:;
    /* $AF89: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xC0 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF8B:;
    /* $AF8B: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AF8D:;
    /* $AF8D: C1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xFF + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_AF8F:;
    /* $AF8F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x14C2 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF92:;
    /* $AF92: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x30FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF95:;
    /* $AF95: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xBC) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF97:;
    /* $AF97: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x1413 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF9A:;
    /* $AF9A: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x16 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AF9C:;
    /* $AF9C: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xD7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_AF9E:;
    /* $AF9E: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xD7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_AFA0:;
    /* $AFA0: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x76 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AFA2:;
    /* $AFA2: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x76 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AFA4:;
    /* $AFA4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBAFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AFA7:;
    /* $AFA7: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_AFA8:;
    /* $AFA8: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_AFAB:;
    /* $AFAB: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_AFAE:;
    /* $AFAE: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AFAF:;
    /* $AFAF: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x04 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AFB1:;
    /* $AFB1: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_AFB3:;
    /* $AFB3: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AFB5:;
    /* $AFB5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0908 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AFB8:;
    /* $AFB8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x09FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AFBB:;
    /* $AFBB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AFBC:;
    /* $AFBC: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x56 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AFBE:;
    /* $AFBE: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0x58 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AFC0:;
    /* $AFC0: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xAF53); return; }
label_AFC2:;
    /* $AFC2: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_AFC3:;
    /* $AFC3: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_AFC5:;
    /* $AFC5: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x504D, -1); return;
}

void func_AF2B_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AF2B_b2");
#endif
label_AF2B:;
    /* $AF2B: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_AF2C:;
    /* $AF2C: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B03F_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B03F_b2");
#endif
label_B03F:;
    /* $B03F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x41; g_cpu.S--; if (!nes_dispatch_call(0x1612, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB03F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B042:;
    /* $B042: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x44; g_cpu.S--; if (!nes_dispatch_call(0x24B2, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB042, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B045:;
    /* $B045: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x1C) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B047:;
    /* $B047: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1C12; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B04A:;
    /* $B04A: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B04B:;
    /* $B04B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB0; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x4D; g_cpu.S--; if (!nes_dispatch_call(0x18B1, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB04B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B04E:;
    /* $B04E: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_B04F:;
    /* $B04F: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x18 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B051:;
    /* $B051: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xB6 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B053:;
    /* $B053: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_B054:;
    /* $B054: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B056:;
    /* $B056: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xB1C3 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B059:;
    /* $B059: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B05B:;
    /* $B05B: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x4202 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B05E:;
    /* $B05E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B05F:;
    /* $B05F: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x30) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B061:;
    /* $B061: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x3A) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B063:;
    /* $B063: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B064:;
    /* $B064: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B065:;
    /* $B065: 34 */ maybe_trigger_vblank(4); (void)nes_read((0xB3 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B067:;
    /* $B067: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B068:;
    /* $B068: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xB06C); return; }
label_B06A:;
    /* $B06A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xB2C2 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B06D:;
    /* $B06D: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_B06E:;
    /* $B06E: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_B0A4; }
label_B070:;
    /* $B070: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x34; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B072:;
    /* $B072: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_B073:;
    /* $B073: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x3A34); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_B076:;
    /* $B076: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x18) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B078:;
    /* $B078: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B079:;
    /* $B079: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B07A:;
    /* $B07A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B07B:;
    /* $B07B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xB3C2 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B07E:;
    /* $B07E: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x20B2 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B081:;
    /* $B081: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x18) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B083:;
    /* $B083: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B084:;
    /* $B084: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1414 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B087:;
    /* $B087: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B088:;
    /* $B088: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x02 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_B08A:;
    /* $B08A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xB2E0 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B08D:;
    /* $B08D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x04 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B08F:;
    /* $B08F: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x01); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B091:;
    /* $B091: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B093:;
    /* $B093: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x04 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_B095:;
    /* $B095: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xB2); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B097:;
    /* $B097: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFF + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B099:;
    /* $B099: 44 */ maybe_trigger_vblank(3); (void)nes_read(0xB0); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B09B:;
    /* $B09B: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_B09C:;
    /* $B09C: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x42); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B09E:;
    /* $B09E: 3A */ maybe_trigger_vblank(2); /* NOP */
label_B09F:;
    /* $B09F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x3EB4 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B0A2:;
    /* $B0A2: 26 */ maybe_trigger_vblank(5); { uint16_t a=0xB6; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B0A4:;
    /* $B0A4: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_B0A5:;
    /* $B0A5: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x3E42 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B0A8:;
    /* $B0A8: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_B0A9:;
    /* $B0A9: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B0AC:;
    /* $B0AC: 44 */ maybe_trigger_vblank(3); (void)nes_read(0xB2); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B0AE:;
    /* $B0AE: 3A */ maybe_trigger_vblank(2); /* NOP */
label_B0AF:;
    /* $B0AF: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x3A30 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B0B2:;
    /* $B0B2: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x02BB + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B0B5:;
    /* $B0B5: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x42 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_B0B7:;
    /* $B0B7: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x3E42 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B0BA:;
    /* $B0BA: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_B0BB:;
    /* $B0BB: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B0BE:;
    /* $B0BE: 44 */ maybe_trigger_vblank(3); (void)nes_read(0xB2); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B0C0:;
    /* $B0C0: 3A */ maybe_trigger_vblank(2); /* NOP */
label_B0C1:;
    /* $B0C1: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x443A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B0C4:;
    /* $B0C4: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B0C5:;
    /* $B0C5: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B0C8:;
    /* $B0C8: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x48B3, -1); return;
label_B0CB:; return;
label_B0CD:; return;
label_B0CE:; return;
label_B0D1:; return;
label_B0D2:; return;
label_B0D5:; return;
label_B0D8:; return;
label_B0DB:; return;
label_B0DC:; return;
label_B0DF:; return;
label_B0E1:; return;
label_B0E3:; return;
label_B0E4:; return;
label_B0E7:; return;
label_B0E9:; return;
label_B0EB:; return;
label_B0ED:; return;
label_B0EE:; return;
label_B0EF:; return;
label_B0F1:; return;
label_B0F3:; return;
label_B0F5:; return;
label_B0F6:; return;
label_B0F7:; return;
label_B0FA:; return;
label_B0FB:; return;
label_B0FE:; return;
label_B0FF:; return;
label_B102:; return;
label_B103:; return;
label_B106:; return;
label_B109:; return;
label_B10B:; return;
label_B10D:; return;
label_B10F:; return;
label_B110:; return;
label_B113:; return;
label_B114:; return;
label_B116:; return;
label_B119:; return;
label_B11A:; return;
label_B11D:; return;
label_B120:; return;
label_B121:; return;
label_B124:; return;
label_B125:; return;
label_B128:; return;
label_B129:; return;
label_B12C:; return;
label_B12D:; return;
label_B130:; return;
label_B132:; return;
label_B135:; return;
label_B138:; return;
label_B13A:; return;
label_B13D:; return;
label_B13E:; return;
label_B140:; return;
label_B142:; return;
label_B145:; return;
label_B147:; return;
label_B148:; return;
label_B14B:; return;
label_B14C:; return;
label_B14F:; return;
label_B151:; return;
label_B153:; return;
label_B154:; return;
label_B157:; return;
label_B15A:; return;
label_B15C:; return;
label_B15D:; return;
label_B15E:; return;
label_B15F:; return;
label_B161:; return;
label_B162:; return;
label_B165:; return;
label_B167:; return;
label_B168:; return;
label_B16B:; return;
label_B16D:; return;
label_B16E:; return;
label_B171:; return;
label_B173:; return;
label_B174:; return;
label_B177:; return;
label_B178:; return;
label_B179:; return;
label_B17B:; return;
label_B17D:; return;
label_B17F:; return;
label_B181:; return;
label_B183:; return;
label_B185:; return;
label_B187:; return;
label_B189:; return;
label_B18B:; return;
label_B18D:; return;
label_B18F:; return;
label_B191:; return;
label_B193:; return;
label_B196:; return;
label_B197:; return;
label_B199:; return;
label_B19B:; return;
label_B19D:; return;
label_B19F:; return;
label_B1A1:; return;
label_B1A3:; return;
label_B1A5:; return;
label_B1A7:; return;
label_B1A8:; return;
label_B1AA:; return;
label_B1AC:; return;
label_B1AE:; return;
label_B1B0:; return;
label_B1B1:; return;
label_B1B2:; return;
label_B1B3:; return;
label_B1B5:; return;
label_B1B6:; return;
label_B1B8:; return;
label_B1BA:; return;
label_B1BC:; return;
label_B1BF:; return;
label_B1C0:; return;
label_B1C3:; return;
label_B1C6:; return;
label_B1C9:; return;
label_B1CA:; return;
label_B1CD:; return;
label_B1D0:; return;
label_B1D2:; return;
label_B1D4:; return;
label_B1D7:; return;
label_B1D8:; return;
label_B1DB:; return;
label_B1DE:; return;
label_B1E1:; return;
label_B1E2:; return;
label_B1E5:; return;
label_B1E8:; return;
label_B1EA:; return;
label_B1ED:; return;
label_B1EE:; return;
label_B1F1:; return;
label_B1F4:; return;
label_B1F7:; return;
label_B1F8:; return;
label_B1FB:; return;
label_B1FD:; return;
label_B1FF:; return;
label_B200:; return;
label_B201:; return;
label_B203:; return;
label_B204:; return;
label_B206:; return;
label_B207:; return;
label_B209:; return;
label_B20A:; return;
label_B20B:; return;
label_B20C:; return;
label_B20D:; return;
label_B20F:; return;
label_B211:; return;
label_B214:; return;
label_B217:; return;
label_B219:; return;
label_B21C:; return;
label_B21F:; return;
label_B222:; return;
label_B224:; return;
label_B225:; return;
label_B227:; return;
label_B228:; return;
label_B229:; return;
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
label_BD83:; return;
label_BD85:; return;
label_BD87:; return;
label_BD89:; return;
label_BD8C:; return;
label_BD8D:; return;
label_BD8E:; return;
label_BD8F:; return;
label_BD90:; return;
label_BD91:; return;
label_BD92:; return;
label_BD93:; return;
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
label_BDA9:; return;
label_BDAA:; return;
label_BDAB:; return;
label_BDAC:; return;
label_BDAD:; return;
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
}

void func_B61C_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B61C_b2");
#endif
label_B61C:;
    /* $B61C: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x5D; FLAG_NZ(g_cpu.Y);
label_B61E:;
    /* $B61E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x20; g_cpu.S--; func_B398_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB61E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B621:;
    /* $B621: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x59; FLAG_NZ(g_cpu.Y);
label_B623:;
    /* $B623: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B5D5_b2(); return;
}

void func_B06C_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B06C_b2");
#endif
label_B06C:;
    /* $B06C: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B06D:;
    /* $B06D: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_B06E:;
    /* $B06E: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_B0A4; }
label_B070:;
    /* $B070: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x34; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B072:;
    /* $B072: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_B073:;
    /* $B073: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x3A34); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_B076:;
    /* $B076: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x18) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B078:;
    /* $B078: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B079:;
    /* $B079: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B07A:;
    /* $B07A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B07B:;
    /* $B07B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xB3C2 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B07E:;
    /* $B07E: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x20B2 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B081:;
    /* $B081: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x18) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B083:;
    /* $B083: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B084:;
    /* $B084: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1414 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B087:;
    /* $B087: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B088:;
    /* $B088: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x02 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_B08A:;
    /* $B08A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xB2E0 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B08D:;
    /* $B08D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x04 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B08F:;
    /* $B08F: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x01); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B091:;
    /* $B091: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B093:;
    /* $B093: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x04 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_B095:;
    /* $B095: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xB2); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B097:;
    /* $B097: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFF + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B099:;
    /* $B099: 44 */ maybe_trigger_vblank(3); (void)nes_read(0xB0); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B09B:;
    /* $B09B: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_B09C:;
    /* $B09C: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x42); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B09E:;
    /* $B09E: 3A */ maybe_trigger_vblank(2); /* NOP */
label_B09F:;
    /* $B09F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x3EB4 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B0A2:;
    /* $B0A2: 26 */ maybe_trigger_vblank(5); { uint16_t a=0xB6; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B0A4:;
    /* $B0A4: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_B0A5:;
    /* $B0A5: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x3E42 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B0A8:;
    /* $B0A8: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_B0A9:;
    /* $B0A9: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B0AC:;
    /* $B0AC: 44 */ maybe_trigger_vblank(3); (void)nes_read(0xB2); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B0AE:;
    /* $B0AE: 3A */ maybe_trigger_vblank(2); /* NOP */
label_B0AF:;
    /* $B0AF: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x3A30 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B0B2:;
    /* $B0B2: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x02BB + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B0B5:;
    /* $B0B5: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x42 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_B0B7:;
    /* $B0B7: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x3E42 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B0BA:;
    /* $B0BA: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_B0BB:;
    /* $B0BB: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B0BE:;
    /* $B0BE: 44 */ maybe_trigger_vblank(3); (void)nes_read(0xB2); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B0C0:;
    /* $B0C0: 3A */ maybe_trigger_vblank(2); /* NOP */
label_B0C1:;
    /* $B0C1: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x443A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B0C4:;
    /* $B0C4: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B0C5:;
    /* $B0C5: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B0C8:;
    /* $B0C8: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x48B3, -1); return;
}

void func_B2F5_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B2F5_b2");
#endif
label_B2F5:;
    /* $B2F5: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x1EB5 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_B2F8:;
    /* $B2F8: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x1E + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B2FA:;
    /* $B2FA: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x1E + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B2FC:;
    /* $B2FC: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x69 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B2FE:;
    /* $B2FE: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAB + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B300:;
    /* $B300: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBA + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B302:;
    /* $B302: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBA + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B304:;
    /* $B304: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x46 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B306:;
    /* $B306: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x1E + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B308:;
    /* $B308: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x1E + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B30A:;
    /* $B30A: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xFD + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B30C:;
    /* $B30C: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x17 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_B30E:;
    /* $B30E: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x65 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_B310:;
    /* $B310: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x46 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_B312:;
    /* $B312: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x6C + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_B314:;
    /* $B314: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x40 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_B316:;
    /* $B316: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x33 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_B318:;
    /* $B318: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xAA + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_B31A:;
    /* $B31A: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xE0 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_B31C:;
    /* $B31C: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x03 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_B31E:;
    /* $B31E: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x1D + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_B320:;
    /* $B320: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x7F + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_B322:;
    /* $B322: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x1D + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_B324:;
    /* $B324: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x1D + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_B326:;
    /* $B326: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x1D + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_B328:;
    /* $B328: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xB1 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_B32A:;
    /* $B32A: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x02 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_B32C:;
    /* $B32C: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB7DC + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B32F:;
    /* $B32F: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xB8 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B331:;
    /* $B331: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0xB9) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B333:;
    /* $B333: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xB8; FLAG_NZ(g_cpu.A);
label_B335:;
    /* $B335: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x64B8 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B338:;
    /* $B338: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_B339:;
    /* $B339: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B33A:;
    /* $B33A: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_B33B:;
    /* $B33B: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xFBB9 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B33E:;
    /* $B33E: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xE1 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_B340:;
    /* $B340: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_B341:;
    /* $B341: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B2FC;
    }
label_B343:;
    /* $B343: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0xB8 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B345:;
    /* $B345: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x7FB8 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B348:;
    /* $B348: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_B349:;
    /* $B349: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0xADB8); FLAG_NZ(g_cpu.A);
label_B34C:;
    /* $B34C: 80 */ maybe_trigger_vblank(2); /* NOP */
label_B34E:;
    /* $B34E: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xB9; FLAG_NZ(g_cpu.X);
label_B350:;
    /* $B350: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B367; }
label_B352:;
    /* $B352: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0688); FLAG_NZ(g_cpu.A);
label_B355:;
    /* $B355: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xBE; FLAG_NZ(g_cpu.X);
label_B357:;
    /* $B357: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B367; }
label_B359:;
    /* $B359: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0681); FLAG_NZ(g_cpu.A);
label_B35C:;
    /* $B35C: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xC3; FLAG_NZ(g_cpu.X);
label_B35E:;
    /* $B35E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B367; }
label_B360:;
    /* $B360: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0689); FLAG_NZ(g_cpu.A);
label_B363:;
    /* $B363: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xC8; FLAG_NZ(g_cpu.X);
label_B365:;
    /* $B365: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B367; }
label_B367:;
    /* $B367: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x69; g_cpu.S--; func_B4ED_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB367, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B36A:;
    /* $B36A: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16zp(0xE2); nes_trace_indirect_jump(0xB36A, _jt); maybe_trigger_vblank(2); call_by_address_tail(_jt, -1); return; }
}

void func_B3A4_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3A4_b2");
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
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B3B4;
    }
label_B3BE:;
    /* $B3BE: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B39C_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B39C_b2");
#endif
label_B39C:;
    /* $B39C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_B39E:;
    /* $B39E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B3A6; }
label_B3A0:;
    /* $B3A0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_B3A2:;
    /* $B3A2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B3A6; }
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
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B3B4;
    }
label_B3BE:;
    /* $B3BE: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B3A0_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3A0_b2");
#endif
label_B3A0:;
    /* $B3A0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_B3A2:;
    /* $B3A2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B3A6; }
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
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B3B4;
    }
label_B3BE:;
    /* $B3BE: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B4C3_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4C3_b2");
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
    /* $B4D1: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B482_b2_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B493;
        case 2: goto label_B4A2;
    }
label_B482:;
    /* $B482: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x065C); FLAG_NZ(g_cpu.X);
label_B485:;
    /* $B485: 9D */ maybe_trigger_vblank(5); nes_write((0x0660 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B488:;
    /* $B488: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_B489:;
    /* $B489: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B4A7; }
label_B48B:;
    /* $B48B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_B48D:;
    /* $B48D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B498; }
label_B48F:;
    /* $B48F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_B491:;
    /* $B491: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B49D; }
label_B493:;
    /* $B493: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_B495:;
    /* $B495: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B4A2; }
label_B497:;
    /* $B497: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B498:;
    /* $B498: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; func_B398_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB498, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B49B:;
    /* $B49B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B4AA; }
label_B49D:;
    /* $B49D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x9F; g_cpu.S--; func_B3A4_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB49D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B4A0:;
    /* $B4A0: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B4AA; }
label_B4A2:;
    /* $B4A2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA4; g_cpu.S--; func_B39C_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB4A2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B4A5:;
    /* $B4A5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B4AA; }
label_B4A7:;
    /* $B4A7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA9; g_cpu.S--; func_B3A0_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB4A7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B4AA:;
    /* $B4AA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAC; g_cpu.S--; func_B4C3_b2();
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
    /* $B4C2: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B482_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B482_b2");
#endif
    func_B482_b2_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B493_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B493_b2");
#endif
    func_B482_b2_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B4A2_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4A2_b2");
#endif
    func_B482_b2_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B4D9_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4D9_b2");
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
    /* $B4E5: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B4EC; }
label_B4E7:;
    /* $B4E7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B4E9:;
    /* $B4E9: 9D */ maybe_trigger_vblank(5); nes_write((0x0665 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B4EC:;
    /* $B4EC: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B5BF_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5BF_b2");
#endif
label_B5BF:;
    /* $B5BF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC1; g_cpu.S--; func_B4D2_b2();
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
    /* $B5C7: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_95BD_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95BD_b2");
#endif
label_95BD:;
    /* $95BD: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8CF7_b2_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8CFB;
    }
label_8CF7:;
    /* $8CF7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_8CF9:;
    /* $8CF9: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8CFD; }
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
    maybe_trigger_vblank(1);
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
    /* $8D39: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8CF7_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8CF7_b2");
#endif
    func_8CF7_b2_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8CFB_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8CFB_b2");
#endif
    func_8CF7_b2_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8C76_b2_body(int _entry) {
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

void func_8C76_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C76_b2");
#endif
    func_8C76_b2_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8C7E_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C7E_b2");
#endif
    func_8C76_b2_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B5B7_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5B7_b2");
#endif
label_B5B7:;
    /* $B5B7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B482_b2(); return;
}

void func_B4D2_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4D2_b2");
#endif
label_B4D2:;
    /* $B4D2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B4D4:;
    /* $B4D4: 8D */ maybe_trigger_vblank(4); nes_write(0x064D, g_cpu.A);
label_B4D7:;
    /* $B4D7: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB4C3); return; }
label_B4D9:;
    /* $B4D9: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x065C); FLAG_NZ(g_cpu.X);
label_B4DC:;
    /* $B4DC: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0665 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B4DF:;
    /* $B4DF: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0665 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B4E2:;
    /* $B4E2: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0660 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B4E5:;
    /* $B4E5: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B4EC; }
label_B4E7:;
    /* $B4E7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B4E9:;
    /* $B4E9: 9D */ maybe_trigger_vblank(5); nes_write((0x0665 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B4EC:;
    /* $B4EC: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B5D5_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5D5_b2");
#endif
label_B5D5:;
    /* $B5D5: 8D */ maybe_trigger_vblank(4); nes_write(0x0664, g_cpu.A);
label_B5D8:;
    /* $B5D8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDA; g_cpu.S--; func_B3A4_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB5D8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B5DB:;
    /* $B5DB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDD; g_cpu.S--; func_B4C3_b2();
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
    /* $B5FC: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B65C_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B65C_b2");
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
    /* $B668: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B5FD_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5FD_b2");
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
    /* $B60D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0F; g_cpu.S--; func_B4D2_b2();
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
    /* $B61B: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B722_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B722_b2");
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
    /* $B72C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2E; g_cpu.S--; func_B4D2_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB72C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B72F:;
    /* $B72F: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0607; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B732:;
    /* $B732: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9416_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9416_b2");
#endif
label_9416:;
    /* $9416: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9418:;
    /* $9418: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9418); return;
}

void func_9431_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9431_b2");
#endif
label_9431:;
    /* $9431: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9434:;
    /* $9434: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7EFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9437:;
    /* $9437: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x2000 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_943A:;
    /* $943A: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0x943A; g_rti_bank = 2; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_94EE_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_94EE_b2");
#endif
label_94EE:;
    /* $94EE: 80 */ maybe_trigger_vblank(2); /* NOP */
label_94F0:;
    /* $94F0: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x41 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_94F2:;
    /* $94F2: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0xC2 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_94F4:;
    /* $94F4: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x03 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_94F6:;
    /* $94F6: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x04 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_94F8:;
    /* $94F8: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9E9C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_94FB:;
    /* $94FB: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x7C3D + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_94FE:;
    /* $94FE: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94FF:;
    /* $94FF: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x4200); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_9502:;
    /* $9502: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x3C3C + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9505:;
    /* $9505: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x0042 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9508:;
    /* $9508: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9508); return;
}

void func_9526_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9526_b2");
#endif
label_9526:;
    /* $9526: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9529:;
    /* $9529: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_952C:;
    /* $952C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_952F:;
    /* $952F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0000 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9532:;
    /* $9532: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9532); return;
}

void func_94E2_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_94E2_b2");
#endif
label_94E2:;
    /* $94E2: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x70; g_cpu.C=(g_cpu.Y>=0x70)?1:0; FLAG_NZ(r&0xFF); }
label_94E4:;
    /* $94E4: 59 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x80CF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_94E7:;
    /* $94E7: 80 */ maybe_trigger_vblank(2); /* NOP */
label_94E9:;
    /* $94E9: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x43); FLAG_NZ(g_cpu.A);
label_94EB:;
    /* $94EB: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x41) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_94ED:;
    /* $94ED: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x80); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_94EF:;
    /* $94EF: 80 */ maybe_trigger_vblank(2); /* NOP */
label_94F1:;
    /* $94F1: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x41 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_94F3:;
    /* $94F3: C2 */ maybe_trigger_vblank(2); /* NOP */
label_94F5:;
    /* $94F5: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_94F7:;
    /* $94F7: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xBD); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_94F9:;
    /* $94F9: 9C */ maybe_trigger_vblank(5); /* ILLEGAL $9C — skip 3 */
label_94FC:;
    /* $94FC: 3D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0xB87C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_94FF:;
    /* $94FF: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x4200); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_9502:;
    /* $9502: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x3C3C + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9505:;
    /* $9505: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x0042 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9508:;
    /* $9508: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9508); return;
}

void func_9564_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9564_b2");
#endif
label_9564:;
    /* $9564: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9565:;
    /* $9565: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xA2 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9567:;
    /* $9567: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xAE + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9569:;
    /* $9569: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xB4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_956B:;
    /* $956B: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xD7 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_956D:;
    /* $956D: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xD7 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_956F:;
    /* $956F: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xD7 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9571:;
    /* $9571: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xD7 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9573:;
    /* $9573: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xD7 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9575:;
    /* $9575: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xD7 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9577:;
    /* $9577: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xD7 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9579:;
    /* $9579: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xD7 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_957B:;
    /* $957B: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xD7 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_957D:;
    /* $957D: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xD7 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_957F:;
    /* $957F: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xD7 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9581:;
    /* $9581: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xD7 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9583:;
    /* $9583: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xD7 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9585:;
    /* $9585: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xD7 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9587:;
    /* $9587: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xDE + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9589:;
    /* $9589: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xE5 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_958B:;
    /* $958B: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xEC + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_958D:;
    /* $958D: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xF3 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_958F:;
    /* $958F: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xFB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9591:;
    /* $9591: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0x03 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9593:;
    /* $9593: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x0B; FLAG_NZ(g_cpu.X);
label_9595:;
    /* $9595: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x13; FLAG_NZ(g_cpu.X);
label_9597:;
    /* $9597: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xD9; FLAG_NZ(g_cpu.X);
label_9599:;
    /* $9599: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x1B; FLAG_NZ(g_cpu.X);
label_959B:;
    /* $959B: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x77; FLAG_NZ(g_cpu.X);
label_959D:;
    /* $959D: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xEC; FLAG_NZ(g_cpu.X);
label_959F:;
    /* $959F: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x9C64); FLAG_NZ(g_cpu.X);
label_95A2:;
    /* $95A2: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x9D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_95A4:;
    /* $95A4: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_95A5:;
    /* $95A5: 9D */ maybe_trigger_vblank(5); nes_write((0x9BDA + g_cpu.X) & 0xFFFF, g_cpu.A);
label_95A8:;
    /* $95A8: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B8C6_b2_body(int _entry) {
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
    /* $B8D3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD5; g_cpu.S--; func_B4D2_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB8D3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B8D6:;
    /* $B8D6: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B8C6_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8C6_b2");
#endif
    func_B8C6_b2_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B8D6_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8D6_b2");
#endif
    func_B8C6_b2_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B9BC_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9BC_b2");
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
    /* $B9CF: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B899_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B899_b2");
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
    /* $B8A7: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B9A8_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9A8_b2");
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
    /* $B9BB: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B9D0_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9D0_b2");
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
    /* $B9EE: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_B9F6; }
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
    maybe_trigger_vblank(1);
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
    /* $BA13: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B8F3_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8F3_b2");
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
    /* $B901: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BA71_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA71_b2");
#endif
label_BA71:;
    /* $BA71: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x062E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA74:;
    /* $BA74: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BABB; }
label_BA76:;
    /* $BA76: 85 */ maybe_trigger_vblank(3); nes_write(0xEB, g_cpu.A);
label_BA78:;
    /* $BA78: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x7A; g_cpu.S--; func_BA38_b2();
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
    /* $BA80: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BAC9; }
label_BA82:;
    /* $BA82: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_BA84:;
    /* $BA84: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xEB; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA86:;
    /* $BA86: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BA8C; }
label_BA88:;
    /* $BA88: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_BA89:;
    /* $BA89: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_BA8A:;
    /* $BA8A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
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
    /* $BA9F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BAC0; }
label_BAA1:;
    /* $BAA1: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xF0; g_cpu.C=(g_cpu.A>=0xF0)?1:0; FLAG_NZ(r&0xFF); }
label_BAA3:;
    /* $BAA3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BAC5; }
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
    /* $BAB3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BABB; }
label_BAB5:;
    /* $BAB5: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BAB6:;
    /* $BAB6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BABC; }
label_BAB8:;
    /* $BAB8: 8C */ maybe_trigger_vblank(4); nes_write(0x4004, g_cpu.Y);
label_BABB:;
    /* $BABB: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_BABC:;
    /* $BABC: 8C */ maybe_trigger_vblank(4); nes_write(0x4000, g_cpu.Y);
label_BABF:;
    /* $BABF: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_BAC0:;
    /* $BAC0: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0628 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BAC3:;
    /* $BAC3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BAB0;
    }
label_BAC5:;
    /* $BAC5: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x10; FLAG_NZ(g_cpu.Y);
label_BAC7:;
    /* $BAC7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BAB0;
    }
label_BAC9:;
    /* $BAC9: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x10; FLAG_NZ(g_cpu.Y);
label_BACB:;
    /* $BACB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BAAD;
    }
label_BACD:;
    /* $BACD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCF; g_cpu.S--; func_B420_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBACD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BAD0:;
    /* $BAD0: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BA38_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA38_b2");
#endif
label_BA38:;
    /* $BA38: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0607); FLAG_NZ(g_cpu.A);
label_BA3B:;
    /* $BA3B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BA66; }
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
    /* $BA66: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B420_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B420_b2");
#endif
label_B420:;
    /* $B420: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x062C); FLAG_NZ(g_cpu.A);
label_B423:;
    /* $B423: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B434; }
label_B425:;
    /* $B425: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x068D); FLAG_NZ(g_cpu.A);
label_B428:;
    /* $B428: 8D */ maybe_trigger_vblank(4); nes_write(0x065D, g_cpu.A);
label_B42B:;
    /* $B42B: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B42C:;
    /* $B42C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x068D); FLAG_NZ(g_cpu.A);
label_B42F:;
    /* $B42F: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x064D); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B432:;
    /* $B432: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B43A; }
label_B434:;
    /* $B434: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x36; g_cpu.S--; func_B44D_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB434, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B437:;
    /* $B437: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x39; g_cpu.S--; func_B46E_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB437, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B43A:;
    /* $B43A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3C; g_cpu.S--; func_B43E_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB43A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B43D:;
    /* $B43D: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BA67_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA67_b2");
#endif
label_BA67:;
    /* $BA67: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_BA69:;
    /* $BA69: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6B; g_cpu.S--; func_BA71_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBA69, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BA6C:;
    /* $BA6C: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_BA6D:;
    /* $BA6D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6F; g_cpu.S--; func_BA71_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBA6D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BA70:;
    /* $BA70: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BA23_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA23_b2");
#endif
label_BA23:;
    /* $BA23: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0640); FLAG_NZ(g_cpu.A);
label_BA26:;
    /* $BA26: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_BA28:;
    /* $BA28: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BA2D; }
label_BA2A:;
    /* $BA2A: 8D */ maybe_trigger_vblank(4); nes_write(0x066A, g_cpu.A);
label_BA2D:;
    /* $BA2D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0641); FLAG_NZ(g_cpu.A);
label_BA30:;
    /* $BA30: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_BA32:;
    /* $BA32: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BA37; }
label_BA34:;
    /* $BA34: 8D */ maybe_trigger_vblank(4); nes_write(0x066B, g_cpu.A);
label_BA37:;
    /* $BA37: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BB4C_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB4C_b2");
#endif
label_BB4C:;
    /* $BB4C: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_BB4D:;
    /* $BB4D: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xB0; FLAG_NZ(g_cpu.A);
label_BB4F:;
    /* $BB4F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xB0; g_cpu.C=(g_cpu.A>=0xB0)?1:0; FLAG_NZ(r&0xFF); }
label_BB51:;
    /* $BB51: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB70; }
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
    /* $BB65: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBB49); return; }
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
    /* $BB73: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBB46); return; }
label_BB75:;
    /* $BB75: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_BB76:;
    /* $BB76: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x064B); FLAG_NZ(g_cpu.X);
label_BB79:;
    /* $BB79: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBEA8 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB7C:;
    /* $BB7C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB89; }
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
    /* $BB8D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB9E; }
label_BB8F:;
    /* $BB8F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BB91:;
    /* $BB91: 85 */ maybe_trigger_vblank(3); nes_write(0xEA, g_cpu.A);
label_BB93:;
    /* $BB93: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BB94:;
    /* $BB94: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_BB96:;
    /* $BB96: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BBA3; }
label_BB98:;
    /* $BB98: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_BB9A:;
    /* $BB9A: 85 */ maybe_trigger_vblank(3); nes_write(0xEA, g_cpu.A);
label_BB9C:;
    /* $BB9C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BBA3; }
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
    /* $BBAA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BBE1; }
label_BBAC:;
    /* $BBAC: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0653 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BBAF:;
    /* $BBAF: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x064B); FLAG_NZ(g_cpu.Y);
label_BBB2:;
    /* $BBB2: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BBB3:;
    /* $BBB3: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_BBB5:;
    /* $BBB5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BBBC; }
label_BBB7:;
    /* $BBB7: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x062E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBBA:;
    /* $BBBA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BBC1; }
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
    /* $BBDE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BAE3_b2(); return;
label_BBE1:;
    /* $BBE1: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0653 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BBE4:;
    /* $BBE4: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_BBD8;
}

void func_BB0C_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB0C_b2");
#endif
label_BB0C:;
    /* $BB0C: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0638 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BB0F:;
    /* $BB0F: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0638 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB12:;
    /* $BB12: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xE6) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB14:;
    /* $BB14: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xBACD); return; }
label_BB16:;
    /* $BB16: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BB17:;
    /* $BB17: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_BB19:;
    /* $BB19: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB24; }
label_BB1B:;
    /* $BB1B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xC0; FLAG_NZ(g_cpu.A);
label_BB1D:;
    /* $BB1D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_BB1F:;
    /* $BB1F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB34; }
label_BB21:;
    /* $BB21: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BB4C_b2(); return;
label_BB24:;
    /* $BB24: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0624 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB27:;
    /* $BB27: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB43; }
label_BB29:;
    /* $BB29: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0624 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB2C:;
    /* $BB2C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x063C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB2F:;
    /* $BB2F: 9D */ maybe_trigger_vblank(5); nes_write((0x0638 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB32:;
    /* $BB32: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB43; }
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
label_BD83:; return;
label_BD85:; return;
label_BD87:; return;
label_BD89:; return;
label_BD8C:; return;
label_BD8D:; return;
label_BD8E:; return;
label_BD8F:; return;
label_BD90:; return;
label_BD91:; return;
label_BD92:; return;
label_BD93:; return;
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
label_BDA9:; return;
label_BDAA:; return;
label_BDAB:; return;
label_BDAC:; return;
label_BDAD:; return;
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
}

void func_BC0E_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC0E_b2");
#endif
label_BC0E:;
    /* $BC0E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0688); FLAG_NZ(g_cpu.A);
label_BC11:;
    /* $BC11: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFC; FLAG_NZ(g_cpu.A);
label_BC13:;
    /* $BC13: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BC27; }
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
    /* $BC27: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BBD8_b2(); return;
}

void func_BBE7_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BBE7_b2");
#endif
label_BBE7:;
    /* $BBE7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x062D); FLAG_NZ(g_cpu.A);
label_BBEA:;
    /* $BBEA: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_BBEC:;
    /* $BBEC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_BC08; }
label_BBEE:;
    /* $BBEE: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x062D); FLAG_NZ(g_cpu.A);
label_BBF1:;
    /* $BBF1: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xF0; FLAG_NZ(g_cpu.A);
label_BBF3:;
    /* $BBF3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BBF9; }
label_BBF5:;
    /* $BBF5: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_BBF6:;
    /* $BBF6: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BBFD_b2(); return;
label_BBF9:;
    /* $BBF9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_BBFB:;
    /* $BBFB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_BC08; }
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
    /* $BC04: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_BC08; }
label_BC06:;
    /* $BC06: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_BC08:;
    /* $BC08: 8D */ maybe_trigger_vblank(4); nes_write(0x062A, g_cpu.A);
label_BC0B:;
    /* $BC0B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BB67_b2(); return;
}

void func_BAE3_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BAE3_b2");
#endif
label_BAE3:;
    /* $BAE3: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_BAE4:;
    /* $BAE4: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BAE5:;
    /* $BAE5: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_BAE7:;
    /* $BAE7: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBAD1); return; }
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
    /* $BB02: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xBAE0); return; }
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
    /* $BB14: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xBACD); return; }
label_BB16:;
    /* $BB16: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BB17:;
    /* $BB17: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_BB19:;
    /* $BB19: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB24; }
label_BB1B:;
    /* $BB1B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xC0; FLAG_NZ(g_cpu.A);
label_BB1D:;
    /* $BB1D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_BB1F:;
    /* $BB1F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB34; }
label_BB21:;
    /* $BB21: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BB4C_b2(); return;
label_BB24:;
    /* $BB24: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0624 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB27:;
    /* $BB27: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB43; }
label_BB29:;
    /* $BB29: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0624 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB2C:;
    /* $BB2C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x063C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB2F:;
    /* $BB2F: 9D */ maybe_trigger_vblank(5); nes_write((0x0638 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB32:;
    /* $BB32: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB43; }
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

void func_BBD8_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BBD8_b2");
#endif
label_BBD8:;
    /* $BBD8: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0620 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBDB:;
    /* $BBDB: 9D */ maybe_trigger_vblank(5); nes_write((0x0640 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BBDE:;
    /* $BBDE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BAE3_b2(); return;
}

void func_BBFD_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BBFD_b2");
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
    /* $BC04: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_BC08; }
label_BC06:;
    /* $BC06: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_BC08:;
    /* $BC08: 8D */ maybe_trigger_vblank(4); nes_write(0x062A, g_cpu.A);
label_BC0B:;
    /* $BC0B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BB67_b2(); return;
}

void func_BB67_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB67_b2");
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
    /* $BB73: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBB46); return; }
label_BB75:;
    /* $BB75: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_BB76:;
    /* $BB76: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x064B); FLAG_NZ(g_cpu.X);
label_BB79:;
    /* $BB79: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBEA8 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB7C:;
    /* $BB7C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB89; }
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
    /* $BB8D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB9E; }
label_BB8F:;
    /* $BB8F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BB91:;
    /* $BB91: 85 */ maybe_trigger_vblank(3); nes_write(0xEA, g_cpu.A);
label_BB93:;
    /* $BB93: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BB94:;
    /* $BB94: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_BB96:;
    /* $BB96: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BBA3; }
label_BB98:;
    /* $BB98: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_BB9A:;
    /* $BB9A: 85 */ maybe_trigger_vblank(3); nes_write(0xEA, g_cpu.A);
label_BB9C:;
    /* $BB9C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BBA3; }
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
    /* $BBAA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BBE1; }
label_BBAC:;
    /* $BBAC: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0653 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BBAF:;
    /* $BBAF: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x064B); FLAG_NZ(g_cpu.Y);
label_BBB2:;
    /* $BBB2: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BBB3:;
    /* $BBB3: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_BBB5:;
    /* $BBB5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BBBC; }
label_BBB7:;
    /* $BBB7: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x062E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBBA:;
    /* $BBBA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BBC1; }
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
    /* $BBDE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BAE3_b2(); return;
label_BBE1:;
    /* $BBE1: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0653 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BBE4:;
    /* $BBE4: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_BBD8;
}

void func_BAD5_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BAD5_b2");
#endif
label_BAD5:;
    /* $BAD5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD7; g_cpu.S--; func_BA23_b2();
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
    /* $BADE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BAF2; }
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
    /* $BAE7: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBAD1); return; }
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
    /* $BB14: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xBACD); return; }
label_BB16:;
    /* $BB16: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BB17:;
    /* $BB17: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_BB19:;
    /* $BB19: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB24; }
label_BB1B:;
    /* $BB1B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xC0; FLAG_NZ(g_cpu.A);
label_BB1D:;
    /* $BB1D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_BB1F:;
    /* $BB1F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB34; }
label_BB21:;
    /* $BB21: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BB4C_b2(); return;
label_BB24:;
    /* $BB24: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0624 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB27:;
    /* $BB27: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB43; }
label_BB29:;
    /* $BB29: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0624 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB2C:;
    /* $BB2C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x063C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB2F:;
    /* $BB2F: 9D */ maybe_trigger_vblank(5); nes_write((0x0638 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB32:;
    /* $BB32: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB43; }
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

void func_BCDA_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCDA_b2");
#endif
label_BCDA:;
    /* $BCDA: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x92; FLAG_NZ(g_cpu.X);
label_BCDC:;
    /* $BCDC: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x96; FLAG_NZ(g_cpu.Y);
label_BCDE:;
    /* $BCDE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBCBD); return; }
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

void func_BCD4_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCD4_b2");
#endif
label_BCD4:;
    /* $BCD4: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xB6; FLAG_NZ(g_cpu.X);
label_BCD6:;
    /* $BCD6: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xF6; FLAG_NZ(g_cpu.Y);
label_BCD8:;
    /* $BCD8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBCBD); return; }
label_BCDA:;
    /* $BCDA: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x92; FLAG_NZ(g_cpu.X);
label_BCDC:;
    /* $BCDC: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x96; FLAG_NZ(g_cpu.Y);
label_BCDE:;
    /* $BCDE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBCBD); return; }
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

void func_BCCA_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCCA_b2");
#endif
label_BCCA:;
    /* $BCCA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF4; FLAG_NZ(g_cpu.A);
label_BCCC:;
    /* $BCCC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBCBB); return; }
label_BCCE:;
    /* $BCCE: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xF5; FLAG_NZ(g_cpu.X);
label_BCD0:;
    /* $BCD0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xF6; FLAG_NZ(g_cpu.Y);
label_BCD2:;
    /* $BCD2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBCBD); return; }
label_BCD4:;
    /* $BCD4: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xB6; FLAG_NZ(g_cpu.X);
label_BCD6:;
    /* $BCD6: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xF6; FLAG_NZ(g_cpu.Y);
label_BCD8:;
    /* $BCD8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBCBD); return; }
label_BCDA:;
    /* $BCDA: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x92; FLAG_NZ(g_cpu.X);
label_BCDC:;
    /* $BCDC: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x96; FLAG_NZ(g_cpu.Y);
label_BCDE:;
    /* $BCDE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBCBD); return; }
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

void func_BCC6_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCC6_b2");
#endif
label_BCC6:;
    /* $BCC6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x34; FLAG_NZ(g_cpu.A);
label_BCC8:;
    /* $BCC8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBCBB); return; }
label_BCCA:;
    /* $BCCA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF4; FLAG_NZ(g_cpu.A);
label_BCCC:;
    /* $BCCC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBCBB); return; }
label_BCCE:;
    /* $BCCE: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xF5; FLAG_NZ(g_cpu.X);
label_BCD0:;
    /* $BCD0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xF6; FLAG_NZ(g_cpu.Y);
label_BCD2:;
    /* $BCD2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBCBD); return; }
label_BCD4:;
    /* $BCD4: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xB6; FLAG_NZ(g_cpu.X);
label_BCD6:;
    /* $BCD6: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xF6; FLAG_NZ(g_cpu.Y);
label_BCD8:;
    /* $BCD8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBCBD); return; }
label_BCDA:;
    /* $BCDA: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x92; FLAG_NZ(g_cpu.X);
label_BCDC:;
    /* $BCDC: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x96; FLAG_NZ(g_cpu.Y);
label_BCDE:;
    /* $BCDE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBCBD); return; }
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

void func_BCB9_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCB9_b2");
#endif
label_BCB9:;
    /* $BCB9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB3; FLAG_NZ(g_cpu.A);
label_BCBB:;
    /* $BCBB: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BCBC:;
    /* $BCBC: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BCBD:;
    /* $BCBD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBF; g_cpu.S--; func_BA14_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBCBD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BCC0:;
    /* $BCC0: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC2; g_cpu.S--; func_BF62_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBCC0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BCC3:;
    /* $BCC3: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BAD5_b2(); return;
}

void func_BCCE_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCCE_b2");
#endif
label_BCCE:;
    /* $BCCE: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xF5; FLAG_NZ(g_cpu.X);
label_BCD0:;
    /* $BCD0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xF6; FLAG_NZ(g_cpu.Y);
label_BCD2:;
    /* $BCD2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBCBD); return; }
label_BCD4:;
    /* $BCD4: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xB6; FLAG_NZ(g_cpu.X);
label_BCD6:;
    /* $BCD6: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xF6; FLAG_NZ(g_cpu.Y);
label_BCD8:;
    /* $BCD8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBCBD); return; }
label_BCDA:;
    /* $BCDA: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x92; FLAG_NZ(g_cpu.X);
label_BCDC:;
    /* $BCDC: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x96; FLAG_NZ(g_cpu.Y);
label_BCDE:;
    /* $BCDE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBCBD); return; }
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

void func_BA14_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA14_b2");
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
    /* $BA22: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BF62_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BF62_b2");
#endif
label_BF62:;
    /* $BF62: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBF; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x64; g_cpu.S--; func_B42C_b2();
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
    maybe_trigger_vblank(1);
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
    /* $BF9E: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BDDC_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BDDC_b2");
#endif
label_BDDC:;
    /* $BDDC: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xBE3D + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_BDDF:;
    /* $BDDF: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_BDE0:;
    /* $BDE0: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x0000 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_BDE3:;
    /* $BDE3: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_BDE4:;
    /* $BDE4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0200 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BDE7:;
    /* $BDE7: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BDE9:;
    /* $BDE9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBDE9); return;
}

void func_BDCF_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BDCF_b2");
#endif
label_BDCF:;
    /* $BDCF: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xBE4D + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_BDD2:;
    /* $BDD2: 66 */ maybe_trigger_vblank(5); { uint16_t a=0xBE; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BDD4:;
    /* $BDD4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBDD4); return;
}

void func_BE38_b2_body(int _entry) {
    switch (_entry) {
        case 1: goto label_BF19;
        case 2: goto label_C2BF;
        case 3: goto label_C2C0;
        case 4: goto label_C2C5;
        case 5: goto label_C3D4;
        case 6: goto label_CB73;
        case 7: goto label_CBDA;
        case 8: goto label_CC03;
        case 9: goto label_CC07;
    }
label_BE38:;
    /* $BE38: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x2C + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_BE3A:;
    /* $BE3A: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_BE3B:;
    /* $BE3B: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0xB21C + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BE3E:;
    /* $BE3E: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_BE3F:;
    /* $BE3F: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x3430); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BE42:;
    /* $BE42: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_BE43:;
    /* $BE43: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_BE6B; }
label_BE45:;
    /* $BE45: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_BE81; }
label_BE47:;
    /* $BE47: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x2C + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BE49:;
    /* $BE49: 26 */ maybe_trigger_vblank(5); { uint16_t a=0xB4; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BE4B:;
    /* $BE4B: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_BE4C:;
    /* $BE4C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBE4C); return;
label_BE4D:;
    /* $BE4D: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xB0); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BE4F:;
    /* $BE4F: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0xFF30 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BE52:;
    /* $BE52: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x42); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BE54:;
    /* $BE54: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xBE55); return; }
label_BE56:;
    /* $BE56: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x3A); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BE58:;
    /* $BE58: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xC4FF); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BE5B:;
    /* $BE5B: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_BE5C:;
    /* $BE5C: 26 */ maybe_trigger_vblank(5); { uint16_t a=0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BE5E:;
    /* $BE5E: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x34); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BE60:;
    /* $BE60: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBE; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x62; g_cpu.S--; func_E0FF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBE60, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BE63:;
    /* $BE63: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x24 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BE65:;
    /* $BE65: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x36B3 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BE68:;
    /* $BE68: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x30 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BE6A:;
    /* $BE6A: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_BE6B:;
    /* $BE6B: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x1C + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_BE6D:;
    /* $BE6D: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x34B3 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BE70:;
    /* $BE70: 3A */ maybe_trigger_vblank(2); /* NOP */
label_BE71:;
    /* $BE71: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x30 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BE73:;
    /* $BE73: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x2A + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_BE75:;
    /* $BE75: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_BE76:;
    /* $BE76: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBE76); return;
label_BE77:;
    /* $BE77: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x12 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_BE79:;
    /* $BE79: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x10) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BE7B:;
    /* $BE7B: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_BE7C:;
    /* $BE7C: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x0A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BE7E:;
    /* $BE7E: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x14 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_BE80:;
    /* $BE80: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_BE81:;
    /* $BE81: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x10) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BE83:;
    /* $BE83: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x0E; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BE85:;
    /* $BE85: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xB4); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BE87:;
    /* $BE87: 0C */ maybe_trigger_vblank(4); (void)nes_read(0xE000); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BE8A:;
    /* $BE8A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xBEE0); return; }
label_BE8C:;
    /* $BE8C: 4E */ maybe_trigger_vblank(6); { uint16_t a=0x4248; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_BE8F:;
    /* $BE8F: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_BE90:;
    /* $BE90: 4E */ maybe_trigger_vblank(6); { uint16_t a=0xE0FF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_BE93:;
    /* $BE93: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BE95:;
    /* $BE95: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_BED3; }
label_BE97:;
    /* $BE97: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xBE97; g_rti_bank = 2; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_BE98:;
    /* $BE98: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x4A); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BE9A:;
    /* $BE9A: 4E */ maybe_trigger_vblank(6); { uint16_t a=0x5854; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_BE9D:;
    /* $BE9D: 5C */ maybe_trigger_vblank(4); (void)nes_read((0x6662 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BEA0:;
    /* $BEA0: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0x7470); nes_trace_indirect_jump(0xBEA0, _jt); maybe_trigger_vblank(2); call_by_address_tail(_jt, -1); return; }
label_BED3:;
    /* $BED3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xDF + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BED5:;
    /* $BED5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BED7:;
    /* $BED7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xAB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BED9:;
    /* $BED9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x93 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BEDB:;
    /* $BEDB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x7C + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BEDD:;
    /* $BEDD: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x67 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BEDF:;
    /* $BEDF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x52 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BEE1:;
    /* $BEE1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x3F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BEE3:;
    /* $BEE3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x2D + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BEE5:;
    /* $BEE5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x1C + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BEE7:;
    /* $BEE7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x0C + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BEE9:;
    /* $BEE9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBEE9); return;
label_BEEA:;
    /* $BEEA: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xEE00 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BEED:;
    /* $BEED: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBEED); return;
label_BEEE:;
    /* $BEEE: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BEF0:;
    /* $BEF0: D4 */ maybe_trigger_vblank(4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BEF2:;
    /* $BEF2: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_BEF3:;
    /* $BEF3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBEF3); return;
label_BEF4:;
    /* $BEF4: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB200 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BEF7:;
    /* $BEF7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBEF7); return;
label_BEF8:;
    /* $BEF8: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BEF9:;
    /* $BEF9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBEF9); return;
label_BEFA:;
    /* $BEFA: 9F */ maybe_trigger_vblank(5); /* ILLEGAL $9F — skip 3 */
label_BEFD:;
    /* $BEFD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBEFD); return;
label_BEFE:;
    /* $BEFE: 8D */ maybe_trigger_vblank(4); nes_write(0x8500, g_cpu.A);
label_BF01:;
    /* $BF01: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF01); return;
label_BF02:;
    /* $BF02: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0x7600 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BF05:;
    /* $BF05: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF05); return;
label_BF06:;
    /* $BF06: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(1); goto label_BF08; }
label_BF08:;
    /* $BF08: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x00 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x00); g_cpu.A=r&0xFF; }
label_BF0A:;
    /* $BF0A: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BF0C:;
    /* $BF0C: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0x5800 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_BF0F:;
    /* $BF0F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF0F); return;
label_BF10:;
    /* $BF10: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_BF12:;
    /* $BF12: 4F */ maybe_trigger_vblank(6); { uint16_t a=0x4A00; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_BF15:;
    /* $BF15: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF15); return;
label_BF16:;
    /* $BF16: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_BF18:;
    /* $BF18: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_BF19:;
    /* $BF19: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF19); return;
label_BF1A:;
    /* $BF1A: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x3A00 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BF1D:;
    /* $BF1D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF1D); return;
label_BF1E:;
    /* $BF1E: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_BF20:;
    /* $BF20: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BF22:;
    /* $BF22: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BF24:;
    /* $BF24: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x2700; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BF27:;
    /* $BF27: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x06 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BF29:;
    /* $BF29: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x3018); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BF2C:;
    /* $BF2C: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_BF2D:;
    /* $BF2D: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x09); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BF2F:;
    /* $BF2F: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_BF30:;
    /* $BF30: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x02); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BF32:;
    /* $BF32: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x04 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BF34:;
    /* $BF34: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_BF35:;
    /* $BF35: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_BF57; }
label_BF37:;
    /* $BF37: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xBF37; g_rti_bank = 2; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_BF38:;
    /* $BF38: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_BF39:;
    /* $BF39: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xBF47); return; }
label_BF3B:;
    /* $BF3B: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x05; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_BF3D:;
    /* $BF3D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF3E:;
    /* $BF3E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BF40:;
    /* $BF40: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_BF41:;
    /* $BF41: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x28 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BF43:;
    /* $BF43: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_BF63; }
label_BF45:;
    /* $BF45: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x0C0F + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BF48:;
    /* $BF48: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BF4A:;
    /* $BF4A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF4B:;
    /* $BF4B: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x0C; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BF4D:;
    /* $BF4D: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_BF4E:;
    /* $BF4E: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_BFB0; }
label_BF50:;
    /* $BF50: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x48); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BF52:;
    /* $BF52: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_BF53:;
    /* $BF53: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_BF5D; }
label_BF55:;
    /* $BF55: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x10 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BF57:;
    /* $BF57: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x0E; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BF59:;
    /* $BF59: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x7038 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BF5C:;
    /* $BF5C: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_BF5D:;
    /* $BF5D: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x15 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BF5F:;
    /* $BF5F: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_BF60:;
    /* $BF60: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF61:;
    /* $BF61: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x20 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BF63:;
    /* $BF63: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xADB4); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BF66:;
    /* $BF66: 4D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read(0x8D06); FLAG_NZ(g_cpu.A);
label_BF69:;
    /* $BF69: 8D */ maybe_trigger_vblank(4); nes_write(0xAD06, g_cpu.A);
label_BF6C:;
    /* $BF6C: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0xA806 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
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
    maybe_trigger_vblank(1);
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
    /* $BF9E: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_BF9F:;
    /* $BF9F: 99 */ maybe_trigger_vblank(5); nes_write((0x0490 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BFA2:;
    /* $BFA2: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x99); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BFA4:;
    /* $BFA4: 85 */ maybe_trigger_vblank(3); nes_write(0x9A, g_cpu.A);
label_BFA6:;
    /* $BFA6: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x97; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BFA8:;
    /* $BFA8: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x98; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BFAA:;
    /* $BFAA: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_BFAB:;
    /* $BFAB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBF9A); return; }
label_BFAD:;
    /* $BFAD: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_BFAE:;
    /* $BFAE: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BFB0:;
    /* $BFB0: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_BFB1:;
    /* $BFB1: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_BFB2:;
    /* $BFB2: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_BFB4:;
    /* $BFB4: 8E */ maybe_trigger_vblank(4); nes_write(0x2000, g_cpu.X);
label_BFB7:;
    /* $BFB7: 8E */ maybe_trigger_vblank(4); nes_write(0x2001, g_cpu.X);
label_BFBA:;
    /* $BFBA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_BFBD:;
    /* $BFBD: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BFBA;
    }
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
label_C2BF:;
    /* $C2BF: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_C2C0:;
    /* $C2C0: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_C2C1:;
    /* $C2C1: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_C2C2:;
    /* $C2C2: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_C2C3:;
    /* $C2C3: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_C2C4:;
    /* $C2C4: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_C2C5:;
    /* $C2C5: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_C2C6:;
    /* $C2C6: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_C2C7:;
    /* $C2C7: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_C2C8:;
    /* $C2C8: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_C2C9:;
    /* $C2C9: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_C2CA:;
    /* $C2CA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1B); FLAG_NZ(g_cpu.A);
label_C2CC:;
    /* $C2CC: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C2E3; }
label_C2CE:;
    /* $C2CE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA1; FLAG_NZ(g_cpu.A);
label_C2D0:;
    /* $C2D0: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_C2D2:;
    /* $C2D2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_C2D4:;
    /* $C2D4: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_C2D6:;
    /* $C2D6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC2; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD8; g_cpu.S--; func_C30C();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC2D6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C2D9:;
    /* $C2D9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C2DB:;
    /* $C2DB: 8D */ maybe_trigger_vblank(4); nes_write(0x07A0, g_cpu.A);
label_C2DE:;
    /* $C2DE: 8D */ maybe_trigger_vblank(4); nes_write(0x07A1, g_cpu.A);
label_C2E1:;
    /* $C2E1: 85 */ maybe_trigger_vblank(3); nes_write(0x1B, g_cpu.A);
label_C2E3:;
    /* $C2E3: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_C2E4:;
    /* $C2E4: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_C2E7:;
    /* $C2E7: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_C2E8:;
    /* $C2E8: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_C2EA:;
    /* $C2EA: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_C2ED:;
    /* $C2ED: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_C2EE:;
    /* $C2EE: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_C2F0:;
    /* $C2F0: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_C2F1:;
    /* $C2F1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC2; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF3; g_cpu.S--; func_C318();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC2F1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C2F4:;
    /* $C2F4: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_C2F5:;
    /* $C2F5: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_C2F7:;
    /* $C2F7: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x3F; FLAG_NZ(g_cpu.A);
label_C2F9:;
    /* $C2F9: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_C2FA:;
    /* $C2FA: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_C2FD; }
label_C2FC:;
    /* $C2FC: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_C2FD:;
    /* $C2FD: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_C300; }
label_C2FF:;
    /* $C2FF: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_C300:;
    /* $C300: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_C302:;
    /* $C302: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_C305:;
    /* $C305: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_C306:;
    /* $C306: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_C2FD;
    }
label_C308:;
    /* $C308: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_C309:;
    /* $C309: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0B; g_cpu.S--; func_C2A8();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC309, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C30C:;
    /* $C30C: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x2002); FLAG_NZ(g_cpu.X);
label_C30F:;
    /* $C30F: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_C311:;
    /* $C311: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_C313:;
    /* $C313: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_C2E4;
    }
label_C315:;
    /* $C315: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_C29A(); return;
label_C3D4:;
    /* $C3D4: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0xFF; FLAG_NZ(g_cpu.A);
label_C3D6:;
    /* $C3D6: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_C3D7:;
    /* $C3D7: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_C3D9:;
    /* $C3D9: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_C3DA:;
    /* $C3DA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDC; g_cpu.S--; func_C41D();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC3DA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C3DD:;
    /* $C3DD: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x01); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C3DF:;
    /* $C3DF: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_C3E1:;
    /* $C3E1: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_C3E5; }
label_C3E3:;
    /* $C3E3: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x05 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x05); g_cpu.A=r&0xFF; }
label_C3E5:;
    /* $C3E5: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_C3E6:;
    /* $C3E6: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C3E8:;
    /* $C3E8: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_C3EA:;
    /* $C3EA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x03); FLAG_NZ(g_cpu.A);
label_C3EC:;
    /* $C3EC: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xF0; FLAG_NZ(g_cpu.A);
label_C3EE:;
    /* $C3EE: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C3F0:;
    /* $C3F0: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_C3F6; }
label_C3F2:;
    /* $C3F2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x5F + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x5F); g_cpu.A=r&0xFF; }
label_C3F4:;
    /* $C3F4: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_C3F5:;
    /* $C3F5: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_C3F6:;
    /* $C3F6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xA0; g_cpu.C=(g_cpu.A>=0xA0)?1:0; FLAG_NZ(r&0xFF); }
label_C3F8:;
    /* $C3F8: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_C3F2;
    }
label_C3FA:;
    /* $C3FA: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_C3FB:;
    /* $C3FB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFD; g_cpu.S--; func_C41D();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC3FB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C3FE:;
    /* $C3FE: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x01); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C400:;
    /* $C400: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_C402:;
    /* $C402: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_C40E; }
label_C404:;
    /* $C404: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_C406:;
    /* $C406: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_C408:;
    /* $C408: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x02); FLAG_NZ(g_cpu.A);
label_C40A:;
    /* $C40A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0F + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0F); g_cpu.A=r&0xFF; }
label_C40C:;
    /* $C40C: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_C40E:;
    /* $C40E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x03); FLAG_NZ(g_cpu.A);
label_C410:;
    /* $C410: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xF0; FLAG_NZ(g_cpu.A);
label_C412:;
    /* $C412: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_C413:;
    /* $C413: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C415:;
    /* $C415: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_C41A; }
label_C417:;
    /* $C417: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xA0 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xA0); g_cpu.A=r&0xFF; }
label_C419:;
    /* $C419: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_C41A:;
    /* $C41A: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x01); FLAG_NZ(g_cpu.A);
label_C41C:;
    /* $C41C: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_C41D:;
    /* $C41D: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_C41E:;
    /* $C41E: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_C420:;
    /* $C420: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_C422:;
    /* $C422: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_C423:;
    /* $C423: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xF0; FLAG_NZ(g_cpu.A);
label_C425:;
    /* $C425: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_C427:;
    /* $C427: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x03); FLAG_NZ(g_cpu.A);
label_C429:;
    /* $C429: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_C42B:;
    /* $C42B: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_C42C:;
    /* $C42C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2E; g_cpu.S--; func_C434();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC42C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C42F:;
    /* $C42F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1A); FLAG_NZ(g_cpu.A);
label_C431:;
    /* $C431: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_C42F;
    }
label_C433:;
    /* $C433: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_C434:;
    /* $C434: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C436:;
    /* $C436: 85 */ maybe_trigger_vblank(3); nes_write(0x1A, g_cpu.A);
label_C438:;
    /* $C438: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_C439:;
    /* $C439: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFE); FLAG_NZ(g_cpu.A);
label_C43B:;
    /* $C43B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xE7; FLAG_NZ(g_cpu.A);
label_C43D:;
    /* $C43D: 85 */ maybe_trigger_vblank(3); nes_write(0xFE, g_cpu.A);
label_C43F:;
    /* $C43F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x41; g_cpu.S--; func_C434();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC43F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C442:;
    /* $C442: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1A); FLAG_NZ(g_cpu.A);
label_C444:;
    /* $C444: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_C442;
    }
label_C446:;
    /* $C446: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_C447:;
    /* $C447: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFE); FLAG_NZ(g_cpu.A);
label_C449:;
    /* $C449: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x1E; FLAG_NZ(g_cpu.A);
label_C44B:;
    /* $C44B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_C43D;
    }
label_C44D:;
    /* $C44D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_C44F:;
    /* $C44F: 8D */ maybe_trigger_vblank(4); nes_write(0x2000, g_cpu.A);
label_C452:;
    /* $C452: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFE); FLAG_NZ(g_cpu.A);
label_C454:;
    /* $C454: 8D */ maybe_trigger_vblank(4); nes_write(0x2001, g_cpu.A);
label_C457:;
    /* $C457: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFA); FLAG_NZ(g_cpu.A);
label_C459:;
    /* $C459: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x5B; g_cpu.S--; func_C4D9();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC459, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C45C:;
    /* $C45C: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_C45D:;
    /* $C45D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFE); FLAG_NZ(g_cpu.A);
label_C45F:;
    /* $C45F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xE7; FLAG_NZ(g_cpu.A);
label_C461:;
    /* $C461: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x63; g_cpu.S--; func_C43D();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC461, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C464:;
    /* $C464: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_C466:;
    /* $C466: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x7F; FLAG_NZ(g_cpu.A);
label_C468:;
    /* $C468: 85 */ maybe_trigger_vblank(3); nes_write(0xFF, g_cpu.A);
label_C46A:;
    /* $C46A: 8D */ maybe_trigger_vblank(4); nes_write(0x2000, g_cpu.A);
label_C46D:;
    /* $C46D: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_C46E:;
    /* $C46E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_C470:;
    /* $C470: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_C472:;
    /* $C472: 85 */ maybe_trigger_vblank(3); nes_write(0xFF, g_cpu.A);
label_C474:;
    /* $C474: 8D */ maybe_trigger_vblank(4); nes_write(0x2000, g_cpu.A);
label_C477:;
    /* $C477: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFE); FLAG_NZ(g_cpu.A);
label_C479:;
    /* $C479: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x1E; FLAG_NZ(g_cpu.A);
label_C47B:;
    /* $C47B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_C43D;
    }
label_C47D:;
    /* $C47D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_C47F:;
    /* $C47F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x7B; FLAG_NZ(g_cpu.A);
label_C481:;
    /* $C481: 8D */ maybe_trigger_vblank(4); nes_write(0x2000, g_cpu.A);
label_C484:;
    /* $C484: 85 */ maybe_trigger_vblank(3); nes_write(0xFF, g_cpu.A);
label_C486:;
    /* $C486: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_C487:;
    /* $C487: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_C48A:;
    /* $C48A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x80; FLAG_NZ(g_cpu.A);
label_C48C:;
    /* $C48C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_C487;
    }
label_C48E:;
    /* $C48E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_C490:;
    /* $C490: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_C492:;
    /* $C492: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_C481;
    }
label_C494:;
    /* $C494: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_C496:;
    /* $C496: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_C4A9; }
label_C498:;
    /* $C498: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x20); FLAG_NZ(g_cpu.A);
label_C49A:;
    /* $C49A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_C49C:;
    /* $C49C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C4A7; }
label_C49E:;
    /* $C49E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x06; g_cpu.C=(g_cpu.A>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_C4A0:;
    /* $C4A0: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C4A7; }
label_C4A2:;
    /* $C4A2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xC4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA4; g_cpu.S--; func_D92C();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC4A2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C4A5:;
    /* $C4A5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x20); FLAG_NZ(g_cpu.A);
label_C4A7:;
    /* $C4A7: 85 */ maybe_trigger_vblank(3); nes_write(0x1E, g_cpu.A);
label_C4A9:;
    /* $C4A9: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_C4AA:;
    /* $C4AA: 85 */ maybe_trigger_vblank(3); nes_write(0x2C, g_cpu.A);
label_C4AC:;
    /* $C4AC: 86 */ maybe_trigger_vblank(3); nes_write(0x20, g_cpu.X);
label_C4AE:;
    /* $C4AE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x09; FLAG_NZ(g_cpu.A);
label_C4B0:;
    /* $C4B0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_C4A7;
    }
label_C4B2:;
    /* $C4B2: EA */ maybe_trigger_vblank(2); /* NOP */
label_C4B3:;
    /* $C4B3: EA */ maybe_trigger_vblank(2); /* NOP */
label_C4B4:;
    /* $C4B4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x47; FLAG_NZ(g_cpu.A);
label_C4B6:;
    /* $C4B6: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_C4B7:;
    /* $C4B7: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_C4B8:;
    /* $C4B8: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_C4B9:;
    /* $C4B9: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_C4BB:;
    /* $C4BB: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_C4BD:;
    /* $C4BD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x25); FLAG_NZ(g_cpu.A);
label_C4BF:;
    /* $C4BF: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFE; FLAG_NZ(g_cpu.A);
label_C4C1:;
    /* $C4C1: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x00); FLAG_NZ(g_cpu.A);
label_C4C3:;
    /* $C4C3: 85 */ maybe_trigger_vblank(3); nes_write(0x25, g_cpu.A);
label_C4C5:;
    /* $C4C5: 8D */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.A);
label_C4C8:;
    /* $C4C8: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_C4C9:;
    /* $C4C9: 8D */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.A);
label_C4CC:;
    /* $C4CC: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_C4CD:;
    /* $C4CD: 8D */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.A);
label_C4D0:;
    /* $C4D0: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_C4D1:;
    /* $C4D1: 8D */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.A);
label_C4D4:;
    /* $C4D4: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_C4D5:;
    /* $C4D5: 8D */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.A);
label_C4D8:;
    /* $C4D8: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_C4D9:;
    /* $C4D9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFA); FLAG_NZ(g_cpu.A);
label_C4DB:;
    /* $C4DB: 4C */ maybe_trigger_vblank(3); goto label_C4B6;
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
    /* $CB84: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_CB89; }
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
    /* $CB8D: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_CB8E:;
    /* $CB8E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_CB90:;
    /* $CB90: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_CBA0; }
label_CB92:;
    /* $CB92: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_CB94:;
    /* $CB94: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_CBA0; }
label_CB96:;
    /* $CB96: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_CB98:;
    /* $CB98: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_CBA0; }
label_CB9A:;
    /* $CB9A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_CB9C:;
    /* $CB9C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_CBA0; }
label_CB9E:;
    /* $CB9E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_CBA0:;
    /* $CBA0: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_CBA2:;
    /* $CBA2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_CBE8; }
label_CBA4:;
    /* $CBA4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_CBA6:;
    /* $CBA6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_CBC2; }
label_CBA8:;
    /* $CBA8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_CBAA:;
    /* $CBAA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_CBF5; }
label_CBAC:;
    /* $CBAC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_CBAE:;
    /* $CBAE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_CBC2; }
label_CBB0:;
    /* $CBB0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_CBB2:;
    /* $CBB2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_CBC2; }
label_CBB4:;
    /* $CBB4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_CBB6:;
    /* $CBB6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_CBC2; }
label_CBB8:;
    /* $CBB8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_CBBA:;
    /* $CBBA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_CBC2; }
label_CBBC:;
    /* $CBBC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_CBBE:;
    /* $CBBE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_CBC2; }
label_CBC0:;
    /* $CBC0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_CBC2:;
    /* $CBC2: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x01; FLAG_NZ(g_cpu.X);
label_CBC4:;
    /* $CBC4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_CBE8; }
label_CBC6:;
    /* $CBC6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_CBC8:;
    /* $CBC8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_CBC2;
    }
label_CBCA:;
    /* $CBCA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_CBCC:;
    /* $CBCC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_CBA0;
    }
label_CBCE:;
    /* $CBCE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_CBD0:;
    /* $CBD0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_CBF5; }
label_CBD2:;
    /* $CBD2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_CBD4:;
    /* $CBD4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_CBF5; }
label_CBD6:;
    /* $CBD6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_CBD8:;
    /* $CBD8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_CBFF; }
label_CBDA:;
    /* $CBDA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_CBDC:;
    /* $CBDC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_CBF5; }
label_CBDE:;
    /* $CBDE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_CBE0:;
    /* $CBE0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_CBFF; }
label_CBE2:;
    /* $CBE2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_CBE4:;
    /* $CBE4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_CBF5; }
label_CBE6:;
    /* $CBE6: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x02; FLAG_NZ(g_cpu.X);
label_CBE8:;
    /* $CBE8: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0680 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_CBEB:;
    /* $CBEB: 9D */ maybe_trigger_vblank(5); nes_write((0x0680 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_CBEE:;
    /* $CBEE: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_CBEF:;
    /* $CBEF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_CBF1:;
    /* $CBF1: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_CBF5; }
label_CBF3:;
    /* $CBF3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_CBF5:;
    /* $CBF5: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x03; FLAG_NZ(g_cpu.X);
label_CBF7:;
    /* $CBF7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_CBE8;
    }
label_CBF9:;
    /* $CBF9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_CBFB:;
    /* $CBFB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_CBFF; }
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
    /* $CC05: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_CC09; }
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
    /* $CC19: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
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
label_CC1A:; return;
label_CC1D:; return;
label_CC1F:; return;
label_CC36:; return;
label_CC38:; return;
label_CC3A:; return;
label_CC3C:; return;
label_CC3F:; return;
label_CC41:; return;
label_CC43:; return;
label_CC45:; return;
label_CC47:; return;
label_CC49:; return;
label_CC4B:; return;
label_CC4E:; return;
label_CC50:; return;
label_CC52:; return;
label_CC54:; return;
label_CC55:; return;
label_CC58:; return;
label_CC5B:; return;
label_CC5D:; return;
label_CC5F:; return;
label_CC60:; return;
label_CC62:; return;
label_CC65:; return;
label_CC67:; return;
label_CC69:; return;
label_CC6B:; return;
label_CC6E:; return;
label_CC70:; return;
label_CC73:; return;
label_CC76:; return;
label_CC78:; return;
label_CC7A:; return;
label_CC87:; return;
label_CC89:; return;
label_CC8B:; return;
label_CC8D:; return;
label_CC90:; return;
label_CC92:; return;
label_CC95:; return;
label_CC97:; return;
label_CC98:; return;
label_CC9A:; return;
label_CC9C:; return;
label_CC9E:; return;
label_CCA1:; return;
label_CCA3:; return;
label_CCA5:; return;
label_CCA6:; return;
label_CCA8:; return;
label_CCAA:; return;
label_CCAC:; return;
label_CCAF:; return;
label_CCB2:; return;
label_CCB5:; return;
label_CCB7:; return;
label_CCBA:; return;
label_CCBD:; return;
label_CCBE:; return;
label_CCBF:; return;
label_CCC1:; return;
label_CCC3:; return;
label_CCC6:; return;
label_CCC8:; return;
label_CCC9:; return;
label_CCCC:; return;
label_CCCF:; return;
label_CCD1:; return;
label_CCD3:; return;
label_CCD5:; return;
label_CCD7:; return;
label_CCDA:; return;
label_CCDC:; return;
label_CCDE:; return;
label_CCE0:; return;
label_CCE3:; return;
label_CCE5:; return;
label_CCE7:; return;
label_CCE9:; return;
label_CCEC:; return;
label_CCEE:; return;
label_CCF0:; return;
label_CCF2:; return;
label_CCF4:; return;
label_CCF6:; return;
label_CCF8:; return;
label_CCFB:; return;
label_CCFD:; return;
label_CCFF:; return;
label_CD02:; return;
label_CD04:; return;
label_CD07:; return;
label_CD09:; return;
label_CD0B:; return;
label_CD0E:; return;
label_CD10:; return;
label_CD12:; return;
label_CD14:; return;
label_CD16:; return;
label_CD19:; return;
label_CD1C:; return;
label_CD1F:; return;
label_CD21:; return;
label_CD23:; return;
label_CD26:; return;
label_CD28:; return;
label_CD2B:; return;
label_CD2E:; return;
label_CD30:; return;
label_CD32:; return;
label_CD34:; return;
label_CD36:; return;
label_CD39:; return;
label_CD3C:; return;
label_CD3E:; return;
label_CD40:; return;
label_CD43:; return;
label_CD45:; return;
label_CD48:; return;
label_CD4B:; return;
label_CD4D:; return;
label_CD4E:; return;
label_CD50:; return;
label_CD53:; return;
label_CD55:; return;
label_CD57:; return;
label_CD59:; return;
label_CD5C:; return;
label_CD5F:; return;
label_CD62:; return;
label_CD64:; return;
label_CD66:; return;
label_CD68:; return;
label_CD6B:; return;
label_CD6D:; return;
label_CD70:; return;
label_CD73:; return;
label_CD75:; return;
label_CD77:; return;
label_CD78:; return;
label_CD7A:; return;
label_CD7C:; return;
label_CD7E:; return;
label_CD81:; return;
label_CD84:; return;
label_CD86:; return;
label_CD88:; return;
label_CD8A:; return;
label_CD8C:; return;
label_CD8F:; return;
label_CD92:; return;
label_CD94:; return;
label_CD97:; return;
label_CD99:; return;
label_CD9B:; return;
label_CD9C:; return;
label_CD9D:; return;
label_CDA0:; return;
label_CDA1:; return;
label_CDA3:; return;
label_CDA6:; return;
label_CDA8:; return;
label_CDAA:; return;
label_CDAD:; return;
label_CDAF:; return;
label_CDB1:; return;
label_CDB3:; return;
label_CDB4:; return;
label_CDB6:; return;
label_CDB9:; return;
label_CDBB:; return;
label_CDBE:; return;
label_CDBF:; return;
label_CDC1:; return;
label_CDC3:; return;
label_CDC4:; return;
label_CDC5:; return;
label_CDC6:; return;
label_CDC7:; return;
label_CDCA:; return;
label_CDCD:; return;
label_CDCF:; return;
label_CDD2:; return;
label_CDD3:; return;
label_CDD4:; return;
label_CDD7:; return;
label_CDDA:; return;
label_CDDC:; return;
label_CDDE:; return;
label_CDE0:; return;
label_CDE2:; return;
label_CDE5:; return;
label_CDE6:; return;
label_CDE9:; return;
label_CDEA:; return;
label_CDED:; return;
label_CDEF:; return;
label_CDF0:; return;
label_CDF3:; return;
label_CDF6:; return;
label_CDF9:; return;
label_CDFC:; return;
label_CDFE:; return;
label_CE01:; return;
label_CE03:; return;
label_CE05:; return;
label_CE07:; return;
label_CE09:; return;
label_CE0B:; return;
label_CE0D:; return;
label_CE0F:; return;
label_CE11:; return;
label_CE14:; return;
label_CE17:; return;
label_CE19:; return;
label_CE1A:; return;
label_CE1B:; return;
label_CE1C:; return;
label_CE1E:; return;
label_CE20:; return;
label_CE23:; return;
label_CE25:; return;
label_CE28:; return;
label_CE2B:; return;
label_CE2D:; return;
label_CE30:; return;
label_CE32:; return;
label_CE34:; return;
label_CE36:; return;
label_CE38:; return;
label_CE39:; return;
label_CE3B:; return;
label_CE3E:; return;
label_CE40:; return;
label_CE42:; return;
label_CE45:; return;
label_CE47:; return;
label_CE4A:; return;
label_CE4B:; return;
label_CE4D:; return;
label_CE50:; return;
label_CE53:; return;
label_CE55:; return;
label_CE57:; return;
label_CE59:; return;
label_CE5B:; return;
label_CE5D:; return;
label_CE5E:; return;
label_CE61:; return;
label_CE63:; return;
label_CE66:; return;
label_CE69:; return;
label_CE6A:; return;
label_CE6C:; return;
label_CE6E:; return;
label_CE71:; return;
label_CE73:; return;
label_CE75:; return;
label_CE77:; return;
label_CE79:; return;
label_CE7B:; return;
label_CE7E:; return;
label_CE80:; return;
label_CE83:; return;
label_CE84:; return;
label_CE87:; return;
label_CE89:; return;
label_CE8B:; return;
label_CE8D:; return;
label_CE8F:; return;
label_CE91:; return;
label_CE92:; return;
label_CE94:; return;
label_CE96:; return;
label_CE98:; return;
label_CE9B:; return;
label_CE9D:; return;
label_CEA0:; return;
label_CEA1:; return;
label_CEA3:; return;
label_CEA6:; return;
label_CEA8:; return;
label_CEAA:; return;
label_CEAC:; return;
label_CEAF:; return;
label_CEB1:; return;
label_CEB3:; return;
label_CEB5:; return;
label_CEB7:; return;
label_CEB9:; return;
label_CEBB:; return;
label_CEBD:; return;
label_CEBF:; return;
label_CEC2:; return;
label_CEC4:; return;
label_CEC6:; return;
label_CEC7:; return;
label_CECA:; return;
label_CECD:; return;
label_CED0:; return;
label_CED2:; return;
label_CED4:; return;
label_CED7:; return;
label_CEDA:; return;
label_CEDD:; return;
label_CEDF:; return;
label_CEE2:; return;
label_CEE4:; return;
label_CEE6:; return;
label_CEE8:; return;
label_CEEB:; return;
label_CEEE:; return;
label_CEF0:; return;
label_CEF3:; return;
label_CEF6:; return;
label_CF2B:; return;
label_CF2E:; return;
label_CF31:; return;
label_CF32:; return;
label_CF34:; return;
label_CF36:; return;
label_CF38:; return;
label_CF3B:; return;
label_CF3D:; return;
label_CF3F:; return;
label_CF42:; return;
label_CF44:; return;
label_CF46:; return;
label_CF49:; return;
label_CF4C:; return;
label_CF4E:; return;
label_CF51:; return;
label_CF54:; return;
label_CF55:; return;
label_CF58:; return;
label_CF5A:; return;
label_CF5D:; return;
label_CF60:; return;
label_CF63:; return;
label_CF65:; return;
label_CF67:; return;
label_CF69:; return;
label_CF6B:; return;
label_CF6E:; return;
label_CF71:; return;
label_CF73:; return;
label_CF76:; return;
label_CF77:; return;
label_CF79:; return;
label_CF7C:; return;
label_CF7E:; return;
label_CF81:; return;
label_CF84:; return;
label_CF87:; return;
label_CF88:; return;
label_CF8A:; return;
label_CF8C:; return;
label_CF8E:; return;
label_CF91:; return;
label_CF92:; return;
label_CF95:; return;
label_CF98:; return;
label_CF9A:; return;
label_CF9D:; return;
label_CF9F:; return;
label_CFA1:; return;
label_CFA3:; return;
label_CFA6:; return;
label_CFA9:; return;
label_CFAC:; return;
label_CFAE:; return;
}

void func_BE38_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BE38_b2");
#endif
    func_BE38_b2_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BF19_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BF19_b2");
#endif
    func_BE38_b2_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C2BF_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C2BF_b2");
#endif
    func_BE38_b2_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C2C0_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C2C0_b2");
#endif
    func_BE38_b2_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C2C5_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C2C5_b2");
#endif
    func_BE38_b2_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C3D4_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C3D4_b2");
#endif
    func_BE38_b2_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_CB73_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CB73_b2");
#endif
    func_BE38_b2_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_CBDA_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CBDA_b2");
#endif
    func_BE38_b2_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_CC03_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CC03_b2");
#endif
    func_BE38_b2_body(8);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_CC07_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CC07_b2");
#endif
    func_BE38_b2_body(9);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BE6E_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BE6E_b2");
#endif
label_BE6E:;
    /* $BE6E: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x34) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BE70:;
    /* $BE70: 3A */ maybe_trigger_vblank(2); /* NOP */
label_BE71:;
    /* $BE71: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x30 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BE73:;
    /* $BE73: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x2A + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_BE75:;
    /* $BE75: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_BE76:;
    /* $BE76: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBE76); return;
}

void func_BEE0_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BEE0_b2");
#endif
label_BEE0:;
    /* $BEE0: 52 */ maybe_trigger_vblank(2); /* ILLEGAL $52 — skip 1 */
label_BEE1:;
    /* $BEE1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x3F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BEE3:;
    /* $BEE3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x2D + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BEE5:;
    /* $BEE5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x1C + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BEE7:;
    /* $BEE7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x0C + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BEE9:;
    /* $BEE9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBEE9); return;
}

void func_BF47_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BF47_b2");
#endif
label_BF47:;
    /* $BF47: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0306); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BF4A:;
    /* $BF4A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF4B:;
    /* $BF4B: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x0C; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BF4D:;
    /* $BF4D: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_BF4E:;
    /* $BF4E: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_BFB0; }
label_BF50:;
    /* $BF50: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x48); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BF52:;
    /* $BF52: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_BF53:;
    /* $BF53: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_BF5D; }
label_BF55:;
    /* $BF55: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x10 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BF57:;
    /* $BF57: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x0E; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BF59:;
    /* $BF59: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x7038 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BF5C:;
    /* $BF5C: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_BF5D:;
    /* $BF5D: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x15 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BF5F:;
    /* $BF5F: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_BF60:;
    /* $BF60: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF61:;
    /* $BF61: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x20 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BF63:;
    /* $BF63: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xADB4); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BF66:;
    /* $BF66: 4D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read(0x8D06); FLAG_NZ(g_cpu.A);
label_BF69:;
    /* $BF69: 8D */ maybe_trigger_vblank(4); nes_write(0xAD06, g_cpu.A);
label_BF6C:;
    /* $BF6C: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0xA806 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
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
    maybe_trigger_vblank(1);
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
    /* $BF9E: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_BF9F:;
    /* $BF9F: 99 */ maybe_trigger_vblank(5); nes_write((0x0490 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BFA2:;
    /* $BFA2: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x99); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BFA4:;
    /* $BFA4: 85 */ maybe_trigger_vblank(3); nes_write(0x9A, g_cpu.A);
label_BFA6:;
    /* $BFA6: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x97; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BFA8:;
    /* $BFA8: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x98; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BFAA:;
    /* $BFAA: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_BFAB:;
    /* $BFAB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBF9A); return; }
label_BFAD:;
    /* $BFAD: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_BFAE:;
    /* $BFAE: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BFB0:;
    /* $BFB0: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_BFB1:;
    /* $BFB1: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_BFB2:;
    /* $BFB2: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_BFB4:;
    /* $BFB4: 8E */ maybe_trigger_vblank(4); nes_write(0x2000, g_cpu.X);
label_BFB7:;
    /* $BFB7: 8E */ maybe_trigger_vblank(4); nes_write(0x2001, g_cpu.X);
label_BFBA:;
    /* $BFBA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_BFBD:;
    /* $BFBD: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BFBA;
    }
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

void func_AF53_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AF53_b2");
#endif
label_AF53:;
    /* $AF53: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_AF54:;
    /* $AF54: 3A */ maybe_trigger_vblank(2); /* NOP */
label_AF55:;
    /* $AF55: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0x3F3E + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AF58:;
    /* $AF58: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x4041 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF5B:;
    /* $AF5B: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_AF5C:;
    /* $AF5C: 84 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.Y);
label_AF5E:;
    /* $AF5E: 86 */ maybe_trigger_vblank(3); nes_write(0x87, g_cpu.X);
label_AF60:;
    /* $AF60: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AF62:;
    /* $AF62: 82 */ maybe_trigger_vblank(2); /* NOP */
label_AF64:;
    /* $AF64: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AF65:;
    /* $AF65: 89 */ maybe_trigger_vblank(2); /* NOP */
label_AF67:;
    /* $AF67: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_AF69:;
    /* $AF69: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x45; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_AF6B:;
    /* $AF6B: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x47; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_AF6D:;
    /* $AF6D: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AF6E:;
    /* $AF6E: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AF6F:;
    /* $AF6F: 47 */ maybe_trigger_vblank(5); { uint16_t a=0x5C; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AF71:;
    /* $AF71: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x5F5E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF74:;
    /* $AF74: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_AF75:;
    /* $AF75: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_AF76:;
    /* $AF76: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x74B9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF79:;
    /* $AF79: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x75 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AF7B:;
    /* $AF7B: 74 */ maybe_trigger_vblank(4); (void)nes_read((0xC1 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF7D:;
    /* $AF7D: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x13) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF7F:;
    /* $AF7F: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x36) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF81:;
    /* $AF81: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xBDBC + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_AF84:;
    /* $AF84: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x1514 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF87:;
    /* $AF87: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xC0 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF89:;
    /* $AF89: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xC0 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF8B:;
    /* $AF8B: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AF8D:;
    /* $AF8D: C1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xFF + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_AF8F:;
    /* $AF8F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x14C2 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF92:;
    /* $AF92: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x30FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF95:;
    /* $AF95: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xBC) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF97:;
    /* $AF97: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x1413 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF9A:;
    /* $AF9A: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x16 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AF9C:;
    /* $AF9C: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xD7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_AF9E:;
    /* $AF9E: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xD7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_AFA0:;
    /* $AFA0: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x76 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AFA2:;
    /* $AFA2: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x76 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AFA4:;
    /* $AFA4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBAFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AFA7:;
    /* $AFA7: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_AFA8:;
    /* $AFA8: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_AFAB:;
    /* $AFAB: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_AFAE:;
    /* $AFAE: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AFAF:;
    /* $AFAF: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x04 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AFB1:;
    /* $AFB1: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_AFB3:;
    /* $AFB3: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AFB5:;
    /* $AFB5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0908 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AFB8:;
    /* $AFB8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x09FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AFBB:;
    /* $AFBB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AFBC:;
    /* $AFBC: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x56 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AFBE:;
    /* $AFBE: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0x58 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AFC0:;
    /* $AFC0: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AF53;
    }
label_AFC2:;
    /* $AFC2: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_AFC3:;
    /* $AFC3: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_AFC5:;
    /* $AFC5: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x504D, -1); return;
}

void func_BB49_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB49_b2");
#endif
label_BB49:;
    /* $BB49: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BBE7_b2(); return;
}

void func_BB46_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB46_b2");
#endif
label_BB46:;
    /* $BB46: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BC0E_b2(); return;
}

void func_BACD_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BACD_b2");
#endif
label_BACD:;
    /* $BACD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCF; g_cpu.S--; func_B420_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBACD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BAD0:;
    /* $BAD0: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BAD1_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BAD1_b2");
#endif
label_BAD1:;
    /* $BAD1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD3; g_cpu.S--; func_BA67_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBAD1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BAD4:;
    /* $BAD4: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BAE0_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BAE0_b2");
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
    /* $BAE7: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xBAD1); return; }
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
    /* $BB14: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xBACD); return; }
label_BB16:;
    /* $BB16: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BB17:;
    /* $BB17: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_BB19:;
    /* $BB19: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB24; }
label_BB1B:;
    /* $BB1B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xC0; FLAG_NZ(g_cpu.A);
label_BB1D:;
    /* $BB1D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_BB1F:;
    /* $BB1F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB34; }
label_BB21:;
    /* $BB21: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BB4C_b2(); return;
label_BB24:;
    /* $BB24: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0624 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB27:;
    /* $BB27: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB43; }
label_BB29:;
    /* $BB29: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0624 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB2C:;
    /* $BB2C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x063C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB2F:;
    /* $BB2F: 9D */ maybe_trigger_vblank(5); nes_write((0x0638 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB32:;
    /* $BB32: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB43; }
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

void func_BCBD_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCBD_b2");
#endif
label_BCBD:;
    /* $BCBD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBF; g_cpu.S--; func_BA14_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBCBD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BCC0:;
    /* $BCC0: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC2; g_cpu.S--; func_BF62_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBCC0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BCC3:;
    /* $BCC3: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BAD5_b2(); return;
}

void func_BCBB_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCBB_b2");
#endif
label_BCBB:;
    /* $BCBB: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BCBC:;
    /* $BCBC: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BCBD:;
    /* $BCBD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBF; g_cpu.S--; func_BA14_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBCBD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BCC0:;
    /* $BCC0: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC2; g_cpu.S--; func_BF62_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBCC0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BCC3:;
    /* $BCC3: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BAD5_b2(); return;
}

void func_B42C_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B42C_b2");
#endif
label_B42C:;
    /* $B42C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x068D); FLAG_NZ(g_cpu.A);
label_B42F:;
    /* $B42F: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x064D); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B432:;
    /* $B432: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B43A; }
label_B434:;
    /* $B434: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x36; g_cpu.S--; func_B44D_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB434, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B437:;
    /* $B437: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x39; g_cpu.S--; func_B46E_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB437, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B43A:;
    /* $B43A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3C; g_cpu.S--; func_B43E_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB43A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B43D:;
    /* $B43D: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A93E_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A93E_b2");
#endif
label_A93E:;
    /* $A93E: 8C */ maybe_trigger_vblank(4); nes_write(0x113A, g_cpu.Y);
label_A941:;
    /* $A941: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x4138); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A944:;
    /* $A944: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_A946:;
    /* $A946: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0002 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A949:;
    /* $A949: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A94A:;
    /* $A94A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A94B:;
    /* $A94B: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x22); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A94D:;
    /* $A94D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A94E:;
    /* $A94E: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A94F:;
    /* $A94F: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A950:;
    /* $A950: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A951:;
    /* $A951: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0222); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A954:;
    /* $A954: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x0222 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A957:;
    /* $A957: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x0203 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A95A:;
    /* $A95A: 8C */ maybe_trigger_vblank(4); nes_write(0x0222, g_cpu.Y);
label_A95D:;
    /* $A95D: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A95E:;
    /* $A95E: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A95F:;
    /* $A95F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A960:;
    /* $A960: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xA984); return; }
label_A962:;
    /* $A962: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A963:;
    /* $A963: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x23) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A965:;
    /* $A965: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xB4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A967:;
    /* $A967: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A968:;
    /* $A968: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A969:;
    /* $A969: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A96B; }
label_A96B:;
    /* $A96B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A96C:;
    /* $A96C: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_A96D:;
    /* $A96D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA96D); return;
label_A96E:; return;
label_A96F:; return;
label_A972:; return;
label_A974:; return;
label_A976:; return;
label_A977:; return;
label_A979:; return;
label_A97A:; return;
label_A97B:; return;
label_A97C:; return;
label_A97D:; return;
label_A97F:; return;
label_A980:; return;
label_A981:; return;
label_A982:; return;
label_A983:; return;
label_A986:; return;
label_A988:; return;
label_A989:; return;
label_A98B:; return;
label_A98C:; return;
label_A98E:; return;
label_A98F:; return;
label_A991:; return;
label_A992:; return;
label_A993:; return;
label_A994:; return;
label_A995:; return;
label_A998:; return;
label_A99B:; return;
label_A99D:; return;
label_A99E:; return;
label_A99F:; return;
label_A9A0:; return;
label_A9A1:; return;
label_A9A4:; return;
label_A9A6:; return;
label_A9A9:; return;
label_A9AB:; return;
label_A9AC:; return;
label_A9AD:; return;
label_A9AE:; return;
label_A9AF:; return;
label_A9B1:; return;
label_A9B2:; return;
label_A9B3:; return;
label_A9B4:; return;
label_A9B5:; return;
label_A9B8:; return;
label_A9BA:; return;
label_A9BB:; return;
label_A9BD:; return;
label_A9BF:; return;
label_A9C0:; return;
label_A9C1:; return;
label_A9C3:; return;
label_A9C4:; return;
label_A9C6:; return;
label_A9C7:; return;
label_A9C8:; return;
label_A9C9:; return;
label_A9CA:; return;
label_A9CD:; return;
label_A9CF:; return;
label_A9D1:; return;
label_A9D3:; return;
label_A9D5:; return;
label_A9D6:; return;
label_A9D7:; return;
label_A9D8:; return;
label_A9D9:; return;
label_A9DB:; return;
label_A9DC:; return;
label_A9DD:; return;
label_A9DE:; return;
label_A9DF:; return;
label_A9E2:; return;
label_A9E4:; return;
label_A9E5:; return;
label_A9E8:; return;
label_A9EA:; return;
label_A9EC:; return;
label_A9ED:; return;
label_A9EE:; return;
label_A9EF:; return;
label_A9F0:; return;
label_A9F1:; return;
label_A9F3:; return;
label_A9F4:; return;
label_A9F5:; return;
label_A9F6:; return;
label_A9F7:; return;
label_A9FA:; return;
label_A9FC:; return;
label_A9FD:; return;
label_AA00:; return;
label_AA01:; return;
label_AA04:; return;
label_AA07:; return;
label_AA09:; return;
label_AA0C:; return;
label_AA0E:; return;
label_AA10:; return;
label_AA12:; return;
label_AA15:; return;
label_AA18:; return;
label_AA1A:; return;
label_AA1C:; return;
label_AA1E:; return;
label_AA20:; return;
label_AA22:; return;
label_AA24:; return;
label_AA27:; return;
label_AA29:; return;
label_AA2A:; return;
label_AA2C:; return;
label_AA2D:; return;
label_AA30:; return;
label_AA32:; return;
label_AA34:; return;
label_AA36:; return;
label_AA38:; return;
label_AA3A:; return;
label_AA3C:; return;
label_AA3F:; return;
label_AA42:; return;
label_AA45:; return;
label_AA47:; return;
label_AA4A:; return;
label_AA4C:; return;
label_AA4D:; return;
label_AA4F:; return;
label_AA51:; return;
label_AA53:; return;
label_AA55:; return;
label_AA57:; return;
label_AA59:; return;
label_AA5B:; return;
label_AA5C:; return;
label_AA5D:; return;
label_AA5E:; return;
label_AA5F:; return;
label_AA62:; return;
label_AA64:; return;
label_AA67:; return;
label_AA68:; return;
label_AA6A:; return;
label_AA6C:; return;
label_AA6F:; return;
label_AA71:; return;
label_AA74:; return;
label_AA77:; return;
label_AA79:; return;
label_AA7B:; return;
label_AA7D:; return;
label_AA7F:; return;
label_AA81:; return;
label_AA83:; return;
label_AA85:; return;
label_AA88:; return;
label_AA8A:; return;
label_AA8C:; return;
label_AA8E:; return;
label_AA91:; return;
label_AA93:; return;
label_AA94:; return;
label_AA96:; return;
label_AA97:; return;
label_AA9A:; return;
label_AA9C:; return;
label_AA9E:; return;
label_AAA0:; return;
label_AAA2:; return;
label_AAA5:; return;
label_AAA7:; return;
label_AAA9:; return;
label_AAAC:; return;
label_AAAF:; return;
label_AAB1:; return;
label_AAB4:; return;
label_AAB7:; return;
label_AAB9:; return;
label_AABB:; return;
label_AABD:; return;
label_AABE:; return;
label_AAC0:; return;
label_AAC2:; return;
label_AAC3:; return;
label_AAC4:; return;
label_AAC5:; return;
label_AAC6:; return;
label_AAC9:; return;
label_AACA:; return;
label_AACC:; return;
label_AACF:; return;
label_AAD1:; return;
label_AAD3:; return;
label_AAD6:; return;
label_AAD9:; return;
label_AADC:; return;
label_AADD:; return;
label_AADF:; return;
label_AAE0:; return;
label_AAE2:; return;
label_AAE3:; return;
label_AAE5:; return;
label_AAE6:; return;
label_AAE8:; return;
label_AAE9:; return;
label_AAEB:; return;
label_AAEC:; return;
label_AAEE:; return;
label_AAEF:; return;
label_AAF1:; return;
label_AAF2:; return;
label_AAF4:; return;
label_AAF5:; return;
label_AAF7:; return;
label_AAF8:; return;
label_AAFA:; return;
label_AAFB:; return;
label_AAFD:; return;
label_AAFE:; return;
label_AAFF:; return;
label_AB00:; return;
label_AB01:; return;
label_AB02:; return;
label_AB05:; return;
label_AB06:; return;
label_AB08:; return;
label_AB0B:; return;
label_AB0D:; return;
label_AB0E:; return;
label_AB0F:; return;
label_AB12:; return;
label_AB15:; return;
label_AB17:; return;
label_AB19:; return;
label_AB1B:; return;
label_AB1D:; return;
label_AB20:; return;
label_AB23:; return;
label_AB25:; return;
label_AB27:; return;
label_AB28:; return;
label_AB29:; return;
label_AB2A:; return;
label_AB2B:; return;
label_AB2C:; return;
label_AB2F:; return;
label_AB31:; return;
label_AB33:; return;
label_AB36:; return;
label_AB39:; return;
label_AB3C:; return;
label_AB3F:; return;
label_AB42:; return;
label_AB45:; return;
label_AB48:; return;
label_AB49:; return;
label_AB4B:; return;
label_AB4E:; return;
label_AB50:; return;
label_AB53:; return;
label_AB56:; return;
label_AB58:; return;
label_AB59:; return;
label_AB5B:; return;
label_AB5C:; return;
label_AB5E:; return;
label_AB5F:; return;
label_AB60:; return;
label_AB61:; return;
label_AB62:; return;
label_AB65:; return;
label_AB67:; return;
label_AB69:; return;
label_AB6B:; return;
label_AB6D:; return;
label_AB6F:; return;
label_AB72:; return;
label_AB75:; return;
label_AB78:; return;
label_AB7B:; return;
label_AB7E:; return;
label_AB81:; return;
label_AB83:; return;
label_AB85:; return;
label_AB87:; return;
label_AB89:; return;
label_AB8B:; return;
label_AB8D:; return;
label_AB8F:; return;
label_AB92:; return;
label_AB95:; return;
label_AB97:; return;
label_AB99:; return;
label_AB9A:; return;
label_AB9B:; return;
label_AB9C:; return;
label_AB9D:; return;
label_AB9E:; return;
label_ABA1:; return;
label_ABA3:; return;
label_ABA5:; return;
label_ABA6:; return;
label_ABA7:; return;
label_ABA9:; return;
label_ABAA:; return;
label_ABAC:; return;
label_ABAE:; return;
label_ABB0:; return;
label_ABB2:; return;
label_ABB4:; return;
label_ABB5:; return;
label_ABB7:; return;
label_ABB9:; return;
label_ABBB:; return;
label_ABBC:; return;
label_ABBE:; return;
label_ABC0:; return;
label_ABC2:; return;
label_ABC4:; return;
label_ABC5:; return;
label_ABC6:; return;
label_ABC7:; return;
label_ABC8:; return;
label_ABC9:; return;
label_ABCA:; return;
label_ABCC:; return;
label_ABCE:; return;
label_ABCF:; return;
label_ABD1:; return;
label_ABD3:; return;
label_ABD5:; return;
label_ABD8:; return;
label_ABD9:; return;
label_ABDC:; return;
label_ABDE:; return;
label_ABE0:; return;
label_ABE2:; return;
label_ABE4:; return;
label_ABE6:; return;
label_ABE7:; return;
label_ABE9:; return;
label_ABEA:; return;
label_ABEC:; return;
label_ABED:; return;
label_ABEF:; return;
label_ABF0:; return;
label_ABF1:; return;
label_ABF3:; return;
label_ABF5:; return;
label_ABF6:; return;
label_ABF9:; return;
label_ABFB:; return;
label_ABFC:; return;
label_ABFD:; return;
label_ABFE:; return;
label_ABFF:; return;
label_AC02:; return;
label_AC04:; return;
label_AC06:; return;
label_AC08:; return;
label_AC0A:; return;
label_AC0C:; return;
label_AC0F:; return;
label_AC11:; return;
label_AC12:; return;
label_AC14:; return;
label_AC16:; return;
label_AC18:; return;
label_AC1B:; return;
label_AC1D:; return;
label_AC20:; return;
label_AC22:; return;
label_AC23:; return;
label_AC26:; return;
label_AC28:; return;
label_AC29:; return;
label_AC2B:; return;
label_AC2C:; return;
label_AC2E:; return;
label_AC2F:; return;
label_AC32:; return;
label_AC35:; return;
label_AC37:; return;
label_AC38:; return;
label_AC3A:; return;
label_AC3C:; return;
label_AC3E:; return;
label_AC40:; return;
label_AC42:; return;
label_AC43:; return;
label_AC44:; return;
label_AC46:; return;
label_AC47:; return;
label_AC49:; return;
label_AC4B:; return;
label_AC4D:; return;
label_AC4E:; return;
label_AC50:; return;
label_AC51:; return;
label_AC53:; return;
label_AC54:; return;
label_AC56:; return;
label_AC59:; return;
label_AC5C:; return;
label_AC5F:; return;
label_AC60:; return;
label_AC61:; return;
label_AC62:; return;
label_AC63:; return;
label_AC64:; return;
label_AC67:; return;
label_AC69:; return;
label_AC6B:; return;
label_AC6D:; return;
label_AC70:; return;
label_AC72:; return;
label_AC73:; return;
label_AC74:; return;
label_AC76:; return;
label_AC77:; return;
label_AC79:; return;
label_AC7B:; return;
label_AC7D:; return;
label_AC80:; return;
label_AC83:; return;
label_AC86:; return;
label_AC88:; return;
label_AC8A:; return;
label_AC8C:; return;
label_AC8D:; return;
label_AC8E:; return;
label_AC90:; return;
label_AC92:; return;
label_AC93:; return;
label_AC94:; return;
label_AC97:; return;
label_AC9A:; return;
label_AC9B:; return;
label_AC9D:; return;
label_ACA0:; return;
label_ACA3:; return;
label_ACA5:; return;
label_ACA7:; return;
label_ACA9:; return;
label_ACAC:; return;
label_ACAE:; return;
label_ACB0:; return;
label_ACB2:; return;
label_ACB5:; return;
label_ACB7:; return;
label_ACB9:; return;
label_ACBA:; return;
label_ACBC:; return;
label_ACBE:; return;
label_ACC0:; return;
label_ACC2:; return;
label_ACC3:; return;
label_ACC4:; return;
label_ACC5:; return;
label_ACC6:; return;
label_ACC7:; return;
label_ACC8:; return;
label_ACC9:; return;
label_ACCA:; return;
label_ACCB:; return;
label_ACCE:; return;
label_ACCF:; return;
label_ACD0:; return;
label_ACD1:; return;
label_ACD2:; return;
label_ACD3:; return;
label_ACD4:; return;
label_ACD5:; return;
label_ACD7:; return;
label_ACD9:; return;
label_ACDB:; return;
label_ACDC:; return;
label_ACDD:; return;
label_ACDE:; return;
label_ACDF:; return;
label_ACE0:; return;
label_ACE1:; return;
label_ACE2:; return;
label_ACE3:; return;
label_ACE4:; return;
label_ACE7:; return;
label_ACE9:; return;
label_ACEB:; return;
label_ACEC:; return;
label_ACEE:; return;
label_ACEF:; return;
label_ACF1:; return;
label_ACF2:; return;
label_ACF4:; return;
label_ACF5:; return;
label_ACF7:; return;
label_ACF8:; return;
label_ACFA:; return;
label_ACFB:; return;
label_ACFD:; return;
label_AD00:; return;
label_AD02:; return;
label_AD04:; return;
label_AD07:; return;
label_AD09:; return;
label_AD0B:; return;
label_AD0E:; return;
label_AD10:; return;
label_AD12:; return;
label_AD14:; return;
label_AD16:; return;
label_AD17:; return;
label_AD19:; return;
label_AD1A:; return;
label_AD1D:; return;
label_AD20:; return;
label_AD22:; return;
label_AD23:; return;
label_AD26:; return;
label_AD28:; return;
label_AD2A:; return;
label_AD2D:; return;
label_AD2F:; return;
label_AD31:; return;
label_AD33:; return;
label_AD35:; return;
label_AD37:; return;
label_AD39:; return;
label_AD3B:; return;
label_AD3E:; return;
label_AD40:; return;
label_AD43:; return;
label_AD45:; return;
label_AD48:; return;
label_AD4A:; return;
label_AD4C:; return;
label_AD4F:; return;
label_AD52:; return;
label_AD54:; return;
label_AD56:; return;
label_AD59:; return;
label_AD5C:; return;
label_AD5F:; return;
label_AD62:; return;
label_AD64:; return;
label_AD66:; return;
label_AD68:; return;
label_AD6A:; return;
label_AD6C:; return;
label_AD6D:; return;
label_AD6F:; return;
label_AD71:; return;
label_AD74:; return;
label_AD76:; return;
label_AD79:; return;
label_AD7C:; return;
label_AD7D:; return;
label_AD7E:; return;
label_AD7F:; return;
label_AD80:; return;
label_AD81:; return;
label_AD82:; return;
label_AD83:; return;
label_AD84:; return;
label_AD87:; return;
label_AD8A:; return;
label_AD8C:; return;
label_AD8E:; return;
label_AD90:; return;
label_AD92:; return;
label_AD94:; return;
label_AD96:; return;
label_AD98:; return;
label_AD9A:; return;
label_AD9B:; return;
label_AD9E:; return;
label_ADA0:; return;
label_ADA2:; return;
label_ADA4:; return;
label_ADA6:; return;
label_ADA8:; return;
label_ADAA:; return;
label_ADAC:; return;
label_ADAE:; return;
label_ADB0:; return;
label_ADB3:; return;
label_ADB6:; return;
label_ADB9:; return;
label_ADBC:; return;
label_ADBF:; return;
label_ADC1:; return;
label_ADC3:; return;
label_ADC5:; return;
label_ADC8:; return;
label_ADCA:; return;
label_ADCC:; return;
label_ADCE:; return;
label_ADD1:; return;
label_ADD4:; return;
label_ADD7:; return;
label_ADDA:; return;
label_ADDD:; return;
label_ADE0:; return;
label_ADE3:; return;
label_ADE6:; return;
label_ADE9:; return;
label_ADEC:; return;
label_ADEE:; return;
label_ADF1:; return;
label_ADF3:; return;
label_ADF6:; return;
label_ADF9:; return;
label_ADFB:; return;
label_ADFD:; return;
label_ADFF:; return;
label_AE01:; return;
label_AE03:; return;
label_AE05:; return;
label_AE07:; return;
label_AE09:; return;
label_AE0B:; return;
label_AE0E:; return;
label_AE10:; return;
label_AE12:; return;
label_AE14:; return;
label_AE16:; return;
label_AE18:; return;
label_AE1A:; return;
label_AE1C:; return;
label_AE1F:; return;
label_AE21:; return;
label_AE23:; return;
label_AE25:; return;
label_AE28:; return;
label_AE2A:; return;
label_AE2C:; return;
label_AE2E:; return;
label_AE31:; return;
label_AE33:; return;
label_AE35:; return;
label_AE37:; return;
label_AE39:; return;
label_AE3C:; return;
label_AE3E:; return;
label_AE40:; return;
label_AE42:; return;
label_AE44:; return;
label_AE46:; return;
label_AE48:; return;
label_AE4A:; return;
label_AE4C:; return;
label_AE4E:; return;
label_AE50:; return;
label_AE52:; return;
label_AE54:; return;
label_AE57:; return;
label_AE59:; return;
label_AE5B:; return;
label_AE5D:; return;
label_AE5F:; return;
label_AE61:; return;
label_AE63:; return;
label_AE66:; return;
label_AE68:; return;
label_AE6A:; return;
label_AE6C:; return;
label_AE6F:; return;
label_AE71:; return;
label_AE73:; return;
label_AE75:; return;
label_AE77:; return;
label_AE79:; return;
label_AE7B:; return;
label_AE7D:; return;
label_AE7F:; return;
label_AE81:; return;
label_AE84:; return;
label_AE87:; return;
label_AE89:; return;
label_AE8B:; return;
label_AE8D:; return;
label_AE90:; return;
label_AE93:; return;
label_AE96:; return;
label_AE99:; return;
label_AE9C:; return;
label_AE9E:; return;
label_AEA0:; return;
label_AEA1:; return;
label_AEA3:; return;
label_AEA4:; return;
label_AEA6:; return;
label_AEA9:; return;
label_AEAB:; return;
label_AEAD:; return;
label_AEAF:; return;
label_AEB1:; return;
label_AEB3:; return;
label_AEB5:; return;
label_AEB7:; return;
label_AEB9:; return;
label_AEBB:; return;
label_AEBD:; return;
label_AEBF:; return;
label_AEC1:; return;
label_AEC3:; return;
label_AEC5:; return;
label_AEC8:; return;
label_AECA:; return;
label_AECC:; return;
label_AECE:; return;
label_AED0:; return;
label_AED2:; return;
label_AED4:; return;
label_AED6:; return;
label_AED8:; return;
label_AEDB:; return;
label_AEDD:; return;
label_AEDF:; return;
label_AEE1:; return;
label_AEE3:; return;
label_AEE5:; return;
label_AEE7:; return;
label_AEE9:; return;
label_AEEB:; return;
label_AEEE:; return;
label_AEF0:; return;
label_AEF3:; return;
label_AEF5:; return;
label_AEF7:; return;
label_AEF9:; return;
label_AEFC:; return;
label_AEFE:; return;
label_AF00:; return;
label_AF03:; return;
label_AF05:; return;
label_AF07:; return;
label_AF09:; return;
label_AF0B:; return;
label_AF0D:; return;
label_AF10:; return;
label_AF13:; return;
label_AF16:; return;
label_AF19:; return;
label_AF1B:; return;
label_AF1D:; return;
label_AF1F:; return;
label_AF21:; return;
label_AF24:; return;
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
label_B004:; return;
label_B005:; return;
label_B006:; return;
label_B009:; return;
label_B00B:; return;
label_B00E:; return;
label_B010:; return;
label_B012:; return;
label_B014:; return;
label_B016:; return;
label_B017:; return;
label_B01A:; return;
label_B01B:; return;
label_B01C:; return;
label_B01F:; return;
label_B020:; return;
label_B021:; return;
label_B023:; return;
label_B024:; return;
label_B027:; return;
label_B029:; return;
label_B02B:; return;
label_B02C:; return;
label_B02E:; return;
label_B031:; return;
label_B034:; return;
label_B036:; return;
label_B038:; return;
label_B03B:; return;
label_B03E:; return;
label_B040:; return;
label_B041:; return;
label_B043:; return;
label_B044:; return;
label_B046:; return;
label_B049:; return;
label_B04C:; return;
label_B04E:; return;
label_B04F:; return;
label_B051:; return;
label_B053:; return;
label_B054:; return;
label_B056:; return;
label_B059:; return;
label_B05B:; return;
label_B05E:; return;
label_B05F:; return;
label_B061:; return;
label_B063:; return;
label_B064:; return;
label_B065:; return;
label_B067:; return;
label_B068:; return;
label_B06A:; return;
label_B06D:; return;
label_B06E:; return;
label_B070:; return;
label_B072:; return;
label_B073:; return;
label_B076:; return;
label_B078:; return;
label_B079:; return;
label_B07A:; return;
label_B07B:; return;
label_B07E:; return;
label_B081:; return;
label_B083:; return;
label_B084:; return;
label_B087:; return;
label_B088:; return;
label_B08A:; return;
label_B08D:; return;
label_B08F:; return;
label_B091:; return;
label_B093:; return;
label_B095:; return;
label_B097:; return;
label_B099:; return;
label_B09B:; return;
label_B09C:; return;
label_B09E:; return;
label_B09F:; return;
label_B0A2:; return;
label_B0A4:; return;
label_B0A5:; return;
label_B0A8:; return;
label_B0A9:; return;
label_B0AC:; return;
label_B0AE:; return;
label_B0AF:; return;
label_B0B2:; return;
label_B0B5:; return;
label_B0B7:; return;
label_B0BA:; return;
label_B0BB:; return;
label_B0BE:; return;
label_B0C0:; return;
label_B0C1:; return;
label_B0C4:; return;
label_B0C5:; return;
label_B0C8:; return;
label_B0CB:; return;
label_B0CD:; return;
label_B0CE:; return;
label_B0D1:; return;
label_B0D2:; return;
label_B0D5:; return;
label_B0D8:; return;
label_B0DB:; return;
label_B0DC:; return;
label_B0DF:; return;
label_B0E1:; return;
label_B0E3:; return;
label_B0E4:; return;
label_B0E7:; return;
label_B0E9:; return;
label_B0EB:; return;
label_B0ED:; return;
label_B0EE:; return;
label_B0EF:; return;
label_B0F1:; return;
label_B0F3:; return;
label_B0F5:; return;
label_B0F6:; return;
label_B0F7:; return;
label_B0FA:; return;
label_B0FB:; return;
label_B0FE:; return;
label_B0FF:; return;
label_B102:; return;
label_B103:; return;
label_B106:; return;
label_B109:; return;
label_B10B:; return;
label_B10D:; return;
label_B10F:; return;
label_B110:; return;
label_B113:; return;
label_B114:; return;
label_B116:; return;
label_B119:; return;
label_B11A:; return;
label_B11D:; return;
label_B120:; return;
label_B121:; return;
label_B124:; return;
label_B125:; return;
label_B128:; return;
label_B129:; return;
label_B12C:; return;
label_B12D:; return;
label_B130:; return;
label_B132:; return;
label_B135:; return;
label_B138:; return;
label_B13A:; return;
label_B13D:; return;
label_B13E:; return;
label_B140:; return;
label_B142:; return;
label_B145:; return;
label_B147:; return;
label_B148:; return;
label_B14B:; return;
label_B14C:; return;
label_B14F:; return;
label_B151:; return;
label_B153:; return;
label_B154:; return;
label_B157:; return;
label_B15A:; return;
label_B15C:; return;
label_B15D:; return;
label_B15E:; return;
label_B15F:; return;
label_B161:; return;
label_B162:; return;
label_B165:; return;
label_B167:; return;
label_B168:; return;
label_B16B:; return;
label_B16D:; return;
label_B16E:; return;
label_B171:; return;
label_B173:; return;
label_B174:; return;
label_B177:; return;
label_B178:; return;
label_B179:; return;
label_B17B:; return;
label_B17D:; return;
label_B17F:; return;
label_B181:; return;
label_B183:; return;
label_B185:; return;
label_B187:; return;
label_B189:; return;
label_B18B:; return;
label_B18D:; return;
label_B18F:; return;
label_B191:; return;
label_B193:; return;
label_B196:; return;
label_B197:; return;
label_B199:; return;
label_B19B:; return;
label_B19D:; return;
label_B19F:; return;
label_B1A1:; return;
label_B1A3:; return;
label_B1A5:; return;
label_B1A7:; return;
label_B1A8:; return;
label_B1AA:; return;
label_B1AC:; return;
label_B1AE:; return;
label_B1B0:; return;
label_B1B1:; return;
label_B1B2:; return;
label_B1B3:; return;
label_B1B5:; return;
label_B1B6:; return;
label_B1B8:; return;
label_B1BA:; return;
label_B1BC:; return;
label_B1BF:; return;
label_B1C0:; return;
label_B1C3:; return;
label_B1C6:; return;
label_B1C9:; return;
label_B1CA:; return;
label_B1CD:; return;
label_B1D0:; return;
label_B1D2:; return;
label_B1D4:; return;
label_B1D7:; return;
label_B1D8:; return;
label_B1DB:; return;
label_B1DE:; return;
label_B1E1:; return;
label_B1E2:; return;
label_B1E5:; return;
label_B1E8:; return;
label_B1EA:; return;
label_B1ED:; return;
label_B1EE:; return;
label_B1F1:; return;
label_B1F4:; return;
label_B1F7:; return;
label_B1F8:; return;
label_B1FB:; return;
label_B1FD:; return;
label_B1FF:; return;
label_B200:; return;
label_B201:; return;
label_B203:; return;
label_B204:; return;
label_B206:; return;
label_B207:; return;
label_B209:; return;
label_B20A:; return;
label_B20B:; return;
label_B20C:; return;
label_B20D:; return;
label_B20F:; return;
label_B211:; return;
label_B214:; return;
label_B217:; return;
label_B219:; return;
label_B21C:; return;
label_B21F:; return;
label_B222:; return;
label_B224:; return;
label_B225:; return;
label_B227:; return;
label_B228:; return;
label_B229:; return;
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
}

void func_84C8_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_84C8_b2");
#endif
label_84C8:;
    /* $84C8: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0xC9; FLAG_NZ(g_cpu.A);
label_84CA:;
    /* $84CA: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_84CB:;
    /* $84CB: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_84DA; }
label_84CD:;
    /* $84CD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFD); FLAG_NZ(g_cpu.A);
label_84CF:;
    /* $84CF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_84D4; }
label_84D1:;
    /* $84D1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD3; g_cpu.S--; func_8563_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x84D1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_84D4:;
    /* $84D4: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_84D5:;
    /* $84D5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_84FD; }
label_84D7:;
    /* $84D7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD9; g_cpu.S--; func_855A_b2();
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
    /* $84E3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_84F4; }
label_84E5:;
    /* $84E5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFD); FLAG_NZ(g_cpu.A);
label_84E7:;
    /* $84E7: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_84EE; }
label_84E9:;
    /* $84E9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xEB; g_cpu.S--; func_8563_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x84E9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_84EC:;
    /* $84EC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_84F4; }
label_84EE:;
    /* $84EE: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0401 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_84F1:;
    /* $84F1: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_84F2:;
    /* $84F2: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_84FD; }
label_84F4:;
    /* $84F4: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_84F7:;
    /* $84F7: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_84FC; }
label_84F9:;
    /* $84F9: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x6B01 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_84FC:;
    /* $84FC: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_84FD:;
    /* $84FD: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B0E7_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B0E7_b2");
#endif
label_B0E7:;
    /* $B0E7: 26 */ maybe_trigger_vblank(5); { uint16_t a=0xB9; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B0E9:;
    /* $B0E9: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x3E; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B0EB:;
    /* $B0EB: 34 */ maybe_trigger_vblank(4); (void)nes_read((0xBB + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B0ED:;
    /* $B0ED: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B0EE:;
    /* $B0EE: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B0EF:;
    /* $B0EF: 26 */ maybe_trigger_vblank(5); { uint16_t a=0xB9; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B0F1:;
    /* $B0F1: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x34; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B0F3:;
    /* $B0F3: 26 */ maybe_trigger_vblank(5); { uint16_t a=0xBB; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B0F5:;
    /* $B0F5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B0F6:;
    /* $B0F6: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B0F7:;
    /* $B0F7: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2CB9); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_B0FA:;
    /* $B0FA: 3A */ maybe_trigger_vblank(2); /* NOP */
label_B0FB:;
    /* $B0FB: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x02BB); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_B0FE:;
    /* $B0FE: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B0FF:;
    /* $B0FF: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2CB9); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_B102:;
    /* $B102: 3A */ maybe_trigger_vblank(2); /* NOP */
label_B103:;
    /* $B103: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x02BB); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_B106:;
    /* $B106: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xB2C4 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B109:;
    /* $B109: 26 */ maybe_trigger_vblank(5); { uint16_t a=0xB9; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B10B:;
    /* $B10B: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x26 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B10D:;
    /* $B10D: 26 */ maybe_trigger_vblank(5); { uint16_t a=0xBB; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B10F:;
    /* $B10F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B110:;
    /* $B110: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xB9D0 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B113:;
    /* $B113: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B114:;
    /* $B114: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x18; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B116:;
    /* $B116: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B119:;
    /* $B119: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B11A:;
    /* $B11A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xB2C2 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B11D:;
    /* $B11D: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1EB9 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B120:;
    /* $B120: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B121:;
    /* $B121: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x02BB + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B124:;
    /* $B124: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B125:;
    /* $B125: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1EB9 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B128:;
    /* $B128: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B129:;
    /* $B129: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x02BB + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B12C:;
    /* $B12C: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B12D:;
    /* $B12D: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1CB9 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B130:;
    /* $B130: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x1C + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B132:;
    /* $B132: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B135:;
    /* $B135: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1CB9 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B138:;
    /* $B138: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x1C + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B13A:;
    /* $B13A: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B13D:;
    /* $B13D: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B13E:;
    /* $B13E: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x12; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B140:;
    /* $B140: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B142:;
    /* $B142: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x2420 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B145:;
    /* $B145: 26 */ maybe_trigger_vblank(5); { uint16_t a=0xB2; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B147:;
    /* $B147: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_B148:;
    /* $B148: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x1E28 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B14B:;
    /* $B14B: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B14C:;
    /* $B14C: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B14F:;
    /* $B14F: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xB10A); return; }
label_B151:;
    /* $B151: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_B17F; }
label_B153:;
    /* $B153: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_B154:;
    /* $B154: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B157:;
    /* $B157: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x181C + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B15A:;
    /* $B15A: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x2A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B15C:;
    /* $B15C: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B15D:;
    /* $B15D: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B15E:;
    /* $B15E: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B15F:;
    /* $B15F: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB9 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B161:;
    /* $B161: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B162:;
    /* $B162: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x02BB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B165:;
    /* $B165: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB9 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B167:;
    /* $B167: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B168:;
    /* $B168: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x02BB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B16B:;
    /* $B16B: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB9 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B16D:;
    /* $B16D: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B16E:;
    /* $B16E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x02BB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B171:;
    /* $B171: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB9 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B173:;
    /* $B173: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B174:;
    /* $B174: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x02BB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B177:;
    /* $B177: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B178:;
    /* $B178: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B179:;
    /* $B179: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B17B:;
    /* $B17B: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xB9); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B17D:;
    /* $B17D: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B17F:;
    /* $B17F: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xBB); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B181:;
    /* $B181: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFF + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B183:;
    /* $B183: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_B185:;
    /* $B185: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_B187:;
    /* $B187: 85 */ maybe_trigger_vblank(3); nes_write(0x11, g_cpu.A);
label_B189:;
    /* $B189: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x75) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B18B:;
    /* $B18B: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_B1A1; }
label_B18D:;
    /* $B18D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_B18F:;
    /* $B18F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B196; }
label_B191:;
    /* $B191: 85 */ maybe_trigger_vblank(3); nes_write(0x74, g_cpu.A);
label_B193:;
    /* $B193: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_F049(); return;
label_B196:;
    /* $B196: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B197:;
    /* $B197: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x59; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B199:;
    /* $B199: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x7F; FLAG_NZ(g_cpu.A);
label_B19B:;
    /* $B19B: 85 */ maybe_trigger_vblank(3); nes_write(0x0F, g_cpu.A);
label_B19D:;
    /* $B19D: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x75) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B19F:;
    /* $B19F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B1A5; }
label_B1A1:;
    /* $B1A1: 85 */ maybe_trigger_vblank(3); nes_write(0x0F, g_cpu.A);
label_B1A3:;
    /* $B1A3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_B1A5:;
    /* $B1A5: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_B1A7:;
    /* $B1A7: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B1A8:;
    /* $B1A8: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x59; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B1AA:;
    /* $B1AA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B1AC:;
    /* $B1AC: 85 */ maybe_trigger_vblank(3); nes_write(0x08, g_cpu.A);
label_B1AE:;
    /* $B1AE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x0F); FLAG_NZ(g_cpu.A);
label_B1B0:;
    /* $B1B0: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B1B1:;
    /* $B1B1: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_B1B2:;
    /* $B1B2: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_B1B3:;
    /* $B1B3: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x38); FLAG_NZ(g_cpu.A);
label_B1B5:;
    /* $B1B5: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B1B6:;
    /* $B1B6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x6D); FLAG_NZ(g_cpu.A);
label_B1B8:;
    /* $B1B8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B1D0; }
label_B1BA:;
    /* $B1BA: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_B1C6; }
label_B1BC:;
    /* $B1BC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xF377 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1BF:;
    /* $B1BF: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B1C0:;
    /* $B1C0: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xF376 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1C3:;
    /* $B1C3: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_F1FB(); return;
label_B1C6:;
    /* $B1C6: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xF2F3 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1C9:;
    /* $B1C9: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B1CA:;
    /* $B1CA: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xF2F2 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1CD:;
    /* $B1CD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_F1FB(); return;
label_B1D0:;
    /* $B1D0: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_B1E8; }
label_B1D2:;
    /* $B1D2: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_B1DE; }
label_B1D4:;
    /* $B1D4: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x96B3 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1D7:;
    /* $B1D7: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B1D8:;
    /* $B1D8: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x96B2 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1DB:;
    /* $B1DB: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_F1FB(); return;
label_B1DE:;
    /* $B1DE: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x95CD + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1E1:;
    /* $B1E1: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B1E2:;
    /* $B1E2: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x95CC + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1E5:;
    /* $B1E5: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_F1FB(); return;
label_B1E8:;
    /* $B1E8: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_B1F4; }
label_B1EA:;
    /* $B1EA: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xF4C9 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1ED:;
    /* $B1ED: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B1EE:;
    /* $B1EE: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xF4C8 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1F1:;
    /* $B1F1: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_F1FB(); return;
label_B1F4:;
    /* $B1F4: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xF44D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1F7:;
    /* $B1F7: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B1F8:;
    /* $B1F8: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xF44C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1FB:;
    /* $B1FB: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x02); FLAG_NZ(g_cpu.X);
label_B1FD:;
    /* $B1FD: 95 */ maybe_trigger_vblank(4); nes_write((0xE0 + g_cpu.X) & 0xFF, g_cpu.A);
label_B1FF:;
    /* $B1FF: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B200:;
    /* $B200: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_B201:;
    /* $B201: 95 */ maybe_trigger_vblank(4); nes_write((0xE0 + g_cpu.X) & 0xFF, g_cpu.A);
label_B203:;
    /* $B203: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B204:;
    /* $B204: 86 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.X);
label_B206:;
    /* $B206: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_B207:;
    /* $B207: 85 */ maybe_trigger_vblank(3); nes_write(0x05, g_cpu.A);
label_B209:;
    /* $B209: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B20A:;
    /* $B20A: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B20B:;
    /* $B20B: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B20C:;
    /* $B20C: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_B20D:;
    /* $B20D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x6D); FLAG_NZ(g_cpu.A);
label_B20F:;
    /* $B20F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B217; }
label_B211:;
    /* $B211: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xF2E1 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B214:;
    /* $B214: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_F222(); return;
label_B217:;
    /* $B217: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_B21F; }
label_B219:;
    /* $B219: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x95AF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B21C:;
    /* $B21C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_F222(); return;
label_B21F:;
    /* $B21F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xF43C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B222:;
    /* $B222: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_B224:;
    /* $B224: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_B225:;
    /* $B225: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_B227:;
    /* $B227: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_B228:;
    /* $B228: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B229:;
    /* $B229: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x04); FLAG_NZ(g_cpu.A);
label_B22B:;
    /* $B22B: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_B22C:;
    /* $B22C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B233; }
label_B22E:;
    /* $B22E: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B22F:;
    /* $B22F: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B230:;
    /* $B230: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB230); return;
label_B231:;
    /* $B231: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_B234; }
label_B233:;
    /* $B233: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B234:;
    /* $B234: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB234); return;
}

void func_A903_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A903_b2");
#endif
label_A903:;
    /* $A903: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA903); return;
}

void func_A820_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A820_b2");
#endif
label_A820:;
    /* $A820: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x8601 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A823:;
    /* $A823: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x21 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A825:;
    /* $A825: 86 */ maybe_trigger_vblank(3); nes_write(0x48, g_cpu.X);
label_A827:;
    /* $A827: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x06) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A829:;
    /* $A829: 7C */ maybe_trigger_vblank(4); (void)nes_read((0x03FF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A82C:;
    /* $A82C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA82C); return;
}

void func_83AD_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_83AD_b2");
#endif
label_83AD:;
    /* $83AD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_83AF:;
    /* $83AF: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x6AFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_83B2:;
    /* $83B2: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_83B6; }
label_83B4:;
    /* $83B4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_83B6:;
    /* $83B6: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0403 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83B9:;
    /* $83B9: 9D */ maybe_trigger_vblank(5); nes_write((0x0403 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_83BC:;
    /* $83BC: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_83BD:;
    /* $83BD: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_83D0; }
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
    /* $83D7: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_83E3; }
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
    /* $83F4: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A203_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A203_b2");
#endif
label_A203:;
    /* $A203: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x0410 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A206:;
    /* $A206: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x3415; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A209:;
    /* $A209: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x3F00 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A20C:;
    /* $A20C: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A212; }
label_A20E:;
    /* $A20E: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x3415; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A211:;
    /* $A211: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_A212:;
    /* $A212: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA212); return;
}

void func_B1C8_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B1C8_b2");
#endif
label_B1C8:;
    /* $B1C8: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_B1C9:;
    /* $B1C9: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B1CA:;
    /* $B1CA: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xF2F2 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1CD:;
    /* $B1CD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_F1FB(); return;
}

void func_B6E0_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6E0_b2");
#endif
label_B6E0:;
    /* $B6E0: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE2; g_cpu.S--; func_B4D9_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB6E0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B6E3:;
    /* $B6E3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B6FC; }
label_B6E5:;
    /* $B6E5: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x0671); FLAG_NZ(g_cpu.Y);
label_B6E8:;
    /* $B6E8: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB6D9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B6EB:;
    /* $B6EB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B6F0; }
label_B6ED:;
    /* $B6ED: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B722_b2(); return;
label_B6F0:;
    /* $B6F0: 8D */ maybe_trigger_vblank(4); nes_write(0x4002, g_cpu.A);
label_B6F3:;
    /* $B6F3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xB274); FLAG_NZ(g_cpu.A);
label_B6F6:;
    /* $B6F6: 8D */ maybe_trigger_vblank(4); nes_write(0x4003, g_cpu.A);
label_B6F9:;
    /* $B6F9: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0671; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B6FC:;
    /* $B6FC: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B703_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B703_b2");
#endif
label_B703:;
    /* $B703: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x05; g_cpu.S--; func_B4D9_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB703, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B706:;
    /* $B706: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xB6FC); return; }
label_B708:;
    /* $B708: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0671; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B70B:;
    /* $B70B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0671); FLAG_NZ(g_cpu.A);
label_B70E:;
    /* $B70E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_B710:;
    /* $B710: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B722; }
label_B712:;
    /* $B712: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x6D; FLAG_NZ(g_cpu.Y);
label_B714:;
    /* $B714: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B398_b2(); return;
label_B722:;
    /* $B722: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_B724:;
    /* $B724: 8D */ maybe_trigger_vblank(4); nes_write(0x4000, g_cpu.A);
label_B727:;
    /* $B727: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B729:;
    /* $B729: 8D */ maybe_trigger_vblank(4); nes_write(0x0653, g_cpu.A);
label_B72C:;
    /* $B72C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2E; g_cpu.S--; func_B4D2_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB72C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B72F:;
    /* $B72F: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0607; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B732:;
    /* $B732: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B71D_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B71D_b2");
#endif
label_B71D:;
    /* $B71D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1F; g_cpu.S--; func_B4D9_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB71D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B720:;
    /* $B720: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xB6FC); return; }
label_B722:;
    /* $B722: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_B724:;
    /* $B724: 8D */ maybe_trigger_vblank(4); nes_write(0x4000, g_cpu.A);
label_B727:;
    /* $B727: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B729:;
    /* $B729: 8D */ maybe_trigger_vblank(4); nes_write(0x0653, g_cpu.A);
label_B72C:;
    /* $B72C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2E; g_cpu.S--; func_B4D2_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB72C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B72F:;
    /* $B72F: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0607; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B732:;
    /* $B732: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B77F_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B77F_b2");
#endif
label_B77F:;
    /* $B77F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x061F); FLAG_NZ(g_cpu.A);
label_B782:;
    /* $B782: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B783:;
    /* $B783: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B795; }
label_B785:;
    /* $B785: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x87; g_cpu.S--; func_B4D9_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB785, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B788:;
    /* $B788: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B78D; }
label_B78A:;
    /* $B78A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B722_b2(); return;
label_B78D:;
    /* $B78D: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B78E:;
    /* $B78E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_B790:;
    /* $B790: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x91; FLAG_NZ(g_cpu.Y);
label_B792:;
    /* $B792: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B482_b2(); return;
label_B795:;
    /* $B795: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x97; g_cpu.S--; func_B4D9_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB795, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B798:;
    /* $B798: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B79D; }
label_B79A:;
    /* $B79A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B722_b2(); return;
label_B79D:;
    /* $B79D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0671); FLAG_NZ(g_cpu.A);
label_B7A0:;
    /* $B7A0: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_B7A2:;
    /* $B7A2: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B7A3:;
    /* $B7A3: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB7A8 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B7A6:;
    /* $B7A6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B7D0; }
label_B7A8:;
    /* $B7A8: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_B7AA:;
    /* $B7AA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_B7AC:;
    /* $B7AC: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x8D; FLAG_NZ(g_cpu.Y);
label_B7AE:;
    /* $B7AE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B482_b2(); return;
label_B7D0:;
    /* $B7D0: 8D */ maybe_trigger_vblank(4); nes_write(0x4002, g_cpu.A);
label_B7D3:;
    /* $B7D3: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0671; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B7D6:;
    /* $B7D6: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B7B1_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7B1_b2");
#endif
label_B7B1:;
    /* $B7B1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; func_B4D9_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB7B1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B7B4:;
    /* $B7B4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B7C7; }
label_B7B6:;
    /* $B7B6: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x0675); FLAG_NZ(g_cpu.Y);
label_B7B9:;
    /* $B7B9: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0675; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B7BC:;
    /* $B7BC: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB7D9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B7BF:;
    /* $B7BF: 8D */ maybe_trigger_vblank(4); nes_write(0x4000, g_cpu.A);
label_B7C2:;
    /* $B7C2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B7D6; }
label_B7C4:;
    /* $B7C4: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B722_b2(); return;
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
    /* $B7D6: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B902_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B902_b2");
#endif
label_B902:;
    /* $B902: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x04; g_cpu.S--; func_B434_b2();
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
    /* $B909: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0B; g_cpu.S--; func_B482_b2();
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
    /* $B91C: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B7DC_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7DC_b2");
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
    /* $B7F8: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B482_b2(); return;
}

void func_B8D7_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8D7_b2");
#endif
label_B8D7:;
    /* $B8D7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_B8D9:;
    /* $B8D9: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA1; FLAG_NZ(g_cpu.Y);
label_B8DB:;
    /* $B8DB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDD; g_cpu.S--; func_B482_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB8DB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B8DE:;
    /* $B8DE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B8F3_b2(); return;
}

void func_B951_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B951_b2");
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
    /* $B96D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B482_b2(); return;
}

void func_B809_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B809_b2");
#endif
label_B809:;
    /* $B809: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x068B); FLAG_NZ(g_cpu.A);
label_B80C:;
    /* $B80C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x80; FLAG_NZ(g_cpu.A);
label_B80E:;
    /* $B80E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xB7D6); return; }
label_B810:;
    /* $B810: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_B812:;
    /* $B812: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA9; FLAG_NZ(g_cpu.Y);
label_B814:;
    /* $B814: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B482_b2(); return;
}

void func_B81F_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B81F_b2");
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
    /* $B83B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B482_b2(); return;
}

void func_B864_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B864_b2");
#endif
label_B864:;
    /* $B864: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_B866:;
    /* $B866: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x9D; FLAG_NZ(g_cpu.Y);
label_B868:;
    /* $B868: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6A; g_cpu.S--; func_B482_b2();
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
    /* $B87E: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B8A8_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8A8_b2");
#endif
label_B8A8:;
    /* $B8A8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_B8AA:;
    /* $B8AA: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x95; FLAG_NZ(g_cpu.Y);
label_B8AC:;
    /* $B8AC: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B482_b2(); return;
}

void func_B91D_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B91D_b2");
#endif
label_B91D:;
    /* $B91D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1F; g_cpu.S--; func_B4D9_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB91D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B920:;
    /* $B920: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B93C; }
label_B922:;
    /* $B922: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_B924:;
    /* $B924: 8D */ maybe_trigger_vblank(4); nes_write(0x0612, g_cpu.A);
label_B927:;
    /* $B927: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B929:;
    /* $B929: 8D */ maybe_trigger_vblank(4); nes_write(0x0613, g_cpu.A);
label_B92C:;
    /* $B92C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2E; g_cpu.S--; func_B9BC_b2();
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
    /* $B937: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB91C); return; }
label_B939:;
    /* $B939: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B8C6_b2(); return;
label_B93C:;
    /* $B93C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3E; g_cpu.S--; func_B9D0_b2();
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
    /* $B94B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x4D; g_cpu.S--; func_B9A8_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB94B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B94E:;
    /* $B94E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B899_b2(); return;
}

void func_B7FB_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7FB_b2");
#endif
label_B7FB:;
    /* $B7FB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFD; g_cpu.S--; func_B4D9_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB7FB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B7FE:;
    /* $B7FE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B803; }
label_B800:;
    /* $B800: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B8C6_b2(); return;
label_B803:;
    /* $B803: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x05; g_cpu.S--; func_B9BC_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB803, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B806:;
    /* $B806: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B899_b2(); return;
}

void func_B8E1_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8E1_b2");
#endif
label_B8E1:;
    /* $B8E1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE3; g_cpu.S--; func_B4D9_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB8E1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B8E4:;
    /* $B8E4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B8F3; }
label_B8E6:;
    /* $B8E6: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0673; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B8E9:;
    /* $B8E9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0673); FLAG_NZ(g_cpu.A);
label_B8EC:;
    /* $B8EC: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_B8EE:;
    /* $B8EE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB8D6); return; }
label_B8F0:;
    /* $B8F0: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B8C6_b2(); return;
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
    /* $B901: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B970_b2_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B978;
    }
label_B970:;
    /* $B970: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x72; g_cpu.S--; func_B4D9_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB970, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B973:;
    /* $B973: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B9A2; }
label_B975:;
    /* $B975: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0673; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B978:;
    /* $B978: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0673); FLAG_NZ(g_cpu.A);
label_B97B:;
    /* $B97B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_B97D:;
    /* $B97D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B982; }
label_B97F:;
    /* $B97F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B8C6_b2(); return;
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
    /* $B994: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x96; g_cpu.S--; func_B9A8_b2();
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
    /* $B99F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B899_b2(); return;
label_B9A2:;
    /* $B9A2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA4; g_cpu.S--; func_B9BC_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB9A2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B9A5:;
    /* $B9A5: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B899_b2(); return;
}

void func_B970_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B970_b2");
#endif
    func_B970_b2_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B978_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B978_b2");
#endif
    func_B970_b2_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B817_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B817_b2");
#endif
label_B817:;
    /* $B817: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x19; g_cpu.S--; func_B4D9_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB817, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B81A:;
    /* $B81A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xB7D6); return; }
label_B81C:;
    /* $B81C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B8C6_b2(); return;
}

void func_B83E_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B83E_b2");
#endif
label_B83E:;
    /* $B83E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x40; g_cpu.S--; func_B4D9_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB83E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B841:;
    /* $B841: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B846; }
label_B843:;
    /* $B843: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B8C6_b2(); return;
label_B846:;
    /* $B846: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x48; g_cpu.S--; func_B9A8_b2();
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
    /* $B863: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B87F_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B87F_b2");
#endif
label_B87F:;
    /* $B87F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; func_B4D9_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB87F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B882:;
    /* $B882: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B887; }
label_B884:;
    /* $B884: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B8C6_b2(); return;
label_B887:;
    /* $B887: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x89; g_cpu.S--; func_B9D0_b2();
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
    /* $B896: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x98; g_cpu.S--; func_B9BC_b2();
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
    /* $B8A7: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B8AF_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8AF_b2");
#endif
label_B8AF:;
    /* $B8AF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB1; g_cpu.S--; func_B4D9_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB8AF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B8B2:;
    /* $B8B2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B8D6; }
label_B8B4:;
    /* $B8B4: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0673; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B8B7:;
    /* $B8B7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0673); FLAG_NZ(g_cpu.A);
label_B8BA:;
    /* $B8BA: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_B8BC:;
    /* $B8BC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B8C1; }
label_B8BE:;
    /* $B8BE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B8C6_b2(); return;
label_B8C1:;
    /* $B8C1: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x99; FLAG_NZ(g_cpu.Y);
label_B8C3:;
    /* $B8C3: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B39C_b2(); return;
label_B8D6:;
    /* $B8D6: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_80AD_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80AD_b2");
#endif
label_80AD:;
    /* $80AD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0x80A5); return; }
label_80AF:;
    /* $80AF: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BCAA_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCAA_b2");
#endif
label_BCAA:;
    /* $BCAA: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BCD4_b2(); return;
}

void func_B6A3_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6A3_b2");
#endif
label_B6A3:;
    /* $B6A3: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x55; FLAG_NZ(g_cpu.Y);
label_B6A5:;
    /* $B6A5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA7; g_cpu.S--; func_B398_b2();
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
    /* $B6B8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; func_B5D5_b2();
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
    /* $B6C4: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B6C5_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6C5_b2");
#endif
label_B6C5:;
    /* $B6C5: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x61; FLAG_NZ(g_cpu.Y);
label_B6C7:;
    /* $B6C7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC9; g_cpu.S--; func_B398_b2();
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
    /* $B6CE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B5D5_b2(); return;
}

void func_B680_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B680_b2");
#endif
label_B680:;
    /* $B680: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; func_B4D9_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB680, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B683:;
    /* $B683: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B688; }
label_B685:;
    /* $B685: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B5FD_b2(); return;
label_B688:;
    /* $B688: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x55; FLAG_NZ(g_cpu.Y);
label_B68A:;
    /* $B68A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; func_B398_b2();
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
    /* $B696: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x98; g_cpu.S--; func_B3A4_b2();
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
    /* $B6A2: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B626_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B626_b2");
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
    /* $B63A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B669; }
label_B63C:;
    /* $B63C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x06; g_cpu.C=(g_cpu.A>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_B63E:;
    /* $B63E: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_B650; }
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
    /* $B64D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B65C_b2(); return;
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
    /* $B668: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B669:;
    /* $B669: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B5FD_b2(); return;
}

void func_B6D1_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6D1_b2");
#endif
label_B6D1:;
    /* $B6D1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD3; g_cpu.S--; func_B4D9_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB6D1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B6D4:;
    /* $B6D4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB6C4); return; }
label_B6D6:;
    /* $B6D6: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B5FD_b2(); return;
}

void func_B6FC_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6FC_b2");
#endif
label_B6FC:;
    /* $B6FC: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B7D6_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7D6_b2");
#endif
label_B7D6:;
    /* $B7D6: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B91C_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B91C_b2");
#endif
label_B91C:;
    /* $B91C: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_80A5_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80A5_b2");
#endif
label_80A5:;
    /* $80A5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA7; g_cpu.S--; func_84FE_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x80A5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_80A8:;
    /* $80A8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAA; g_cpu.S--; func_8134_b2();
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
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_80A5;
    }
label_80AF:;
    /* $80AF: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B6C4_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6C4_b2");
#endif
label_B6C4:;
    /* $B6C4: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8042_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8042_b2");
#endif
label_8042:;
    /* $8042: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_CE92(); return;
}

void func_802D_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_802D_b2");
#endif
label_802D:;
    /* $802D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8244_b2(); return;
}

void func_8030_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8030_b2");
#endif
label_8030:;
    /* $8030: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8318_b2(); return;
}

void func_8033_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8033_b2");
#endif
label_8033:;
    /* $8033: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_FA1E(); return;
}

void func_BB22_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB22_b2");
#endif
label_BB22:;
    /* $BB22: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BDBB_b2(); return;
}

void func_B920_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B920_b2");
#endif
label_B920:;
    /* $B920: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B93C; }
label_B922:;
    /* $B922: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_B924:;
    /* $B924: 8D */ maybe_trigger_vblank(4); nes_write(0x0612, g_cpu.A);
label_B927:;
    /* $B927: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B929:;
    /* $B929: 8D */ maybe_trigger_vblank(4); nes_write(0x0613, g_cpu.A);
label_B92C:;
    /* $B92C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2E; g_cpu.S--; func_B9BC_b2();
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
    /* $B937: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB91C); return; }
label_B939:;
    /* $B939: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B8C6_b2(); return;
label_B93C:;
    /* $B93C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3E; g_cpu.S--; func_B9D0_b2();
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
    /* $B94B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x4D; g_cpu.S--; func_B9A8_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB94B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B94E:;
    /* $B94E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B899_b2(); return;
}

void func_803F_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_803F_b2");
#endif
label_803F:;
    /* $803F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_FEDC(); return;
}

void func_8045_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8045_b2");
#endif
label_8045:;
    /* $8045: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_C3FB(); return;
}

void func_803C_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_803C_b2");
#endif
label_803C:;
    /* $803C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_DD8B(); return;
}

void func_8001_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8001_b2");
#endif
label_8001:;
    /* $8001: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(2); call_by_address(0x7FF7); return; }
label_8003:;
    /* $8003: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_F438(); return;
}

void func_847F_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_847F_b2");
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
    /* $848C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_849D; }
label_848E:;
    /* $848E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFC); FLAG_NZ(g_cpu.A);
label_8490:;
    /* $8490: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8497; }
label_8492:;
    /* $8492: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x94; g_cpu.S--; func_8563_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8492, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8495:;
    /* $8495: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_849D; }
label_8497:;
    /* $8497: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0400 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_849A:;
    /* $849A: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_849B:;
    /* $849B: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_84A6; }
label_849D:;
    /* $849D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_84A0:;
    /* $84A0: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_84A5; }
label_84A2:;
    /* $84A2: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x6B01 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_84A5:;
    /* $84A5: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_84A6:;
    /* $84A6: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BDBB_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BDBB_b2");
#endif
label_BDBB:;
    /* $BDBB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBDBB); return;
}

void func_B3F0_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3F0_b2");
#endif
label_B3F0:;
    /* $B3F0: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x05C9 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B3F3:;
    /* $B3F3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB3C9); return; }
label_B3F5:;
    /* $B3F5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B3F7:;
    /* $B3F7: 8D */ maybe_trigger_vblank(4); nes_write(0x0602, g_cpu.A);
label_B3FA:;
    /* $B3FA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFC; g_cpu.S--; func_B34B_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3FA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3FD:;
    /* $B3FD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFF; g_cpu.S--; func_B37B_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3FD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B400:;
    /* $B400: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x02; g_cpu.S--; func_B36D_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB400, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B403:;
    /* $B403: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x05; g_cpu.S--; func_BC66_b2();
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
    /* $B41A: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B3FC_b2_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B40E;
    }
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
    /* $B41A: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B3FC_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3FC_b2");
#endif
    func_B3FC_b2_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B40E_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B40E_b2");
#endif
    func_B3FC_b2_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B4A9_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4A9_b2");
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
    /* $B4C2: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B4BD_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4BD_b2");
#endif
label_B4BD:;
    /* $B4BD: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_B4BE:;
    /* $B4BE: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x8D; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B4C0:;
    /* $B4C0: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B4C2:;
    /* $B4C2: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B587_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B587_b2");
#endif
label_B587:;
    /* $B587: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0674; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B58A:;
    /* $B58A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0674); FLAG_NZ(g_cpu.A);
label_B58D:;
    /* $B58D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0F; g_cpu.C=(g_cpu.A>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_B58F:;
    /* $B58F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB568); return; }
label_B591:;
    /* $B591: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B5BF_b2(); return;
}

void func_B5A5_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5A5_b2");
#endif
label_B5A5:;
    /* $B5A5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_B5A7:;
    /* $B5A7: 8D */ maybe_trigger_vblank(4); nes_write(0x0670, g_cpu.A);
label_B5AA:;
    /* $B5AA: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B98C_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B98C_b2");
#endif
label_B98C:;
    /* $B98C: 8D */ maybe_trigger_vblank(4); nes_write(0x0612, g_cpu.A);
label_B98F:;
    /* $B98F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B991:;
    /* $B991: 8D */ maybe_trigger_vblank(4); nes_write(0x0613, g_cpu.A);
label_B994:;
    /* $B994: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x96; g_cpu.S--; func_B9A8_b2();
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
    /* $B99F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B899_b2(); return;
}

void func_B9A0_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9A0_b2");
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
    /* $B9BB: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B9E4_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9E4_b2");
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
    /* $B9EE: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_B9F6; }
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
    /* $B9FD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB9E5); return; }
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
    /* $BA13: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B9E5_b2_body(int _entry) {
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
    /* $B9EE: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_B9F6; }
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
    maybe_trigger_vblank(1);
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
    /* $BA13: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B9E5_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9E5_b2");
#endif
    func_B9E5_b2_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B9F3_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9F3_b2");
#endif
    func_B9E5_b2_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BA41_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA41_b2");
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
    /* $BA66: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BC1C_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC1C_b2");
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
    /* $BC27: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BBD8_b2(); return;
}

void func_BC53_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC53_b2");
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
    /* $BC5E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xBC1C); return; }
label_BC60:;
    /* $BC60: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xA7BC); FLAG_NZ(g_cpu.A);
label_BC63:;
    /* $BC63: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xBCB0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BC66:;
    /* $BC66: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x065D); FLAG_NZ(g_cpu.A);
label_BC69:;
    /* $BC69: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xE6; FLAG_NZ(g_cpu.X);
label_BC6B:;
    /* $BC6B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BC72; }
label_BC6D:;
    /* $BC6D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0685); FLAG_NZ(g_cpu.A);
label_BC70:;
    /* $BC70: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xE1; FLAG_NZ(g_cpu.X);
label_BC72:;
    /* $BC72: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x74; g_cpu.S--; func_B4ED_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC72, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC75:;
    /* $BC75: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x77; g_cpu.S--; func_BC83_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC75, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC78:;
    /* $BC78: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16zp(0xE2); nes_trace_indirect_jump(0xBC78, _jt); maybe_trigger_vblank(2); call_by_address_tail(_jt, -1); return; }
}

void func_BC64_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC64_b2");
#endif
label_BC64:;
    /* $BC64: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xBC22); return; }
label_BC66:;
    /* $BC66: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x065D); FLAG_NZ(g_cpu.A);
label_BC69:;
    /* $BC69: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xE6; FLAG_NZ(g_cpu.X);
label_BC6B:;
    /* $BC6B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BC72; }
label_BC6D:;
    /* $BC6D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0685); FLAG_NZ(g_cpu.A);
label_BC70:;
    /* $BC70: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xE1; FLAG_NZ(g_cpu.X);
label_BC72:;
    /* $BC72: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x74; g_cpu.S--; func_B4ED_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC72, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC75:;
    /* $BC75: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x77; g_cpu.S--; func_BC83_b2();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC75, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC78:;
    /* $BC78: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16zp(0xE2); nes_trace_indirect_jump(0xBC78, _jt); maybe_trigger_vblank(2); call_by_address_tail(_jt, -1); return; }
}

void func_D2FD_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D2FD_b2");
#endif
label_D2FD:;
    /* $D2FD: 9D */ maybe_trigger_vblank(5); nes_write((0x0306 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_D300:;
    /* $D300: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_D302:;
    /* $D302: 9D */ maybe_trigger_vblank(5); nes_write((0x0304 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_D305:;
    /* $D305: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_DC1E_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DC1E_b2");
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
    /* $DC28: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DC34; }
label_DC2A:;
    /* $DC2A: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DC3C; }
label_DC2C:;
    /* $DC2C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFD); FLAG_NZ(g_cpu.A);
label_DC2E:;
    /* $DC2E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DC3C; }
label_DC30:;
    /* $DC30: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x07; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DC32:;
    /* $DC32: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_DC3C; }
label_DC34:;
    /* $DC34: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DC3C; }
label_DC36:;
    /* $DC36: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFC); FLAG_NZ(g_cpu.A);
label_DC38:;
    /* $DC38: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DC3C; }
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
    /* $DC44: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DC4D; }
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
    /* $DC66: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E449_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E449_b2");
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
    /* $E456: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E770_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E770_b2");
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

void func_E77B_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E77B_b2");
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

void func_E8F1_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E8F1_b2");
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

void func_E8FC_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E8FC_b2");
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

void func_E96A_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E96A_b2");
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
    /* $E98D: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F744_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F744_b2");
#endif
label_F744:;
    /* $F744: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F747:;
    /* $F747: 9D */ maybe_trigger_vblank(5); nes_write((0x0405 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F74A:;
    /* $F74A: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F74B_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F74B_b2");
#endif
label_F74B:;
    /* $F74B: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x6B02 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_F74E:;
    /* $F74E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x968B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F751:;
    /* $F751: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B568_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B568_b2");
#endif
label_B568:;
    /* $B568: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BC22_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC22_b2");
#endif
label_BC22:;
    /* $BC22: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_BC23:;
    /* $BC23: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_BC24:;
    /* $BC24: 8D */ maybe_trigger_vblank(4); nes_write(0x400F, g_cpu.A);
label_BC27:;
    /* $BC27: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BBD8_b2(); return;
}

