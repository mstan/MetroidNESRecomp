/* metroid_full_bank01_part01.c — PRG bank 1 function bodies (sub-part 1).
 * STANDALONE translation unit — compiled independently (in
 * parallel with every other bank part/sub-part and the
 * umbrella metroid_full.c). Do not compile as part of another TU or
 * edit directly; the source of truth is the recompiler's
 * code_generator.c. Renamed to drop the _partNN suffix if
 * this bank turned out to fit in a single sub-part. */

#include "metroid_full_decls.h"

void func_8A26_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A26_b1");
#endif
label_8A26:;
    /* $8A26: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8A27:;
    /* $8A27: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_8A39;
label_8A29:;
    /* $8A29: 3D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x4E3E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8A2C:;
    /* $8A2C: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x3E60 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A2F:;
    /* $8A2F: 3D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0xFD4E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8A32:;
    /* $8A32: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x4E; g_cpu.C=(g_cpu.X>=0x4E)?1:0; FLAG_NZ(r&0xFF); }
label_8A34:;
    /* $8A34: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0xFD3D + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8A37:;
    /* $8A37: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x4E; FLAG_NZ(g_cpu.Y);
label_8A39:;
    /* $8A39: 3D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0xFF3E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8A3C:;
    /* $8A3C: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8A3E:;
    /* $8A3E: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x70); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8A40:;
    /* $8A40: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0404 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A43:;
    /* $8A43: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x71); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8A45:;
    /* $8A45: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A48:;
    /* $8A48: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x86 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A4A:;
    /* $8A4A: 87 */ maybe_trigger_vblank(3); nes_write(0x96, g_cpu.A & g_cpu.X); /* SAX */
label_8A4C:;
    /* $8A4C: 97 */ maybe_trigger_vblank(4); nes_write((0xFF + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_8A4E:;
    /* $8A4E: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0303); FLAG_NZ(g_cpu.A);
label_8A51:;
    /* $8A51: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0x8B7C + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A54:;
    /* $8A54: 8C */ maybe_trigger_vblank(4); nes_write(0x0DFF, g_cpu.Y);
label_8A57:;
    /* $8A57: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A59:;
    /* $8A59: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8A5A:;
    /* $8A5A: 67 */ maybe_trigger_vblank(5); { uint16_t a=0x98; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A5C:;
    /* $8A5C: 99 */ maybe_trigger_vblank(5); nes_write((0x0DFF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8A5F:;
    /* $8A5F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A61:;
    /* $8A61: 80 */ maybe_trigger_vblank(2); /* NOP */
label_8A63:;
    /* $8A63: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { call_by_address(0x89F6); return; }
label_8A65:;
    /* $8A65: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A68:;
    /* $8A68: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x7D + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A6A:;
    /* $8A6A: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0x8E8D + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8A6D:;
    /* $8A6D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A70:;
    /* $8A70: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x82 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A72:;
    /* $8A72: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x92 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_8A74:;
    /* $8A74: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_8A76:;
    /* $8A76: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0303); FLAG_NZ(g_cpu.A);
label_8A79:;
    /* $8A79: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8A7A:;
    /* $8A7A: 89 */ maybe_trigger_vblank(2); /* NOP */
label_8A7C:;
    /* $8A7C: 99 */ maybe_trigger_vblank(5); nes_write((0x0DFF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8A7F:;
    /* $8A7F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A81:;
    /* $8A81: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8A82:;
    /* $8A82: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8A83:;
    /* $8A83: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8A84:;
    /* $8A84: 99 */ maybe_trigger_vblank(5); nes_write((0x0DFF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8A87:;
    /* $8A87: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A89:;
    /* $8A89: 84 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.Y);
label_8A8B:;
    /* $8A8B: 94 */ maybe_trigger_vblank(4); nes_write((0x95 + g_cpu.X) & 0xFF, g_cpu.Y);
label_8A8D:;
    /* $8A8D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A90:;
    /* $8A90: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x3F + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A92:;
    /* $8A92: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x3F40 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A95:;
    /* $8A95: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x4F00 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A98:;
    /* $8A98: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x4F40 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A9B:;
    /* $8A9B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0434 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A9E:;
    /* $8A9E: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xF2); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8AA0:;
    /* $8AA0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0004 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8AA3:;
    /* $8AA3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8AA3); return;
}

void func_8A41_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A41_b1");
#endif
label_8A41:;
    /* $8A41: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8A43:;
    /* $8A43: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x71); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8A45:;
    /* $8A45: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A48:;
    /* $8A48: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x86 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A4A:;
    /* $8A4A: 87 */ maybe_trigger_vblank(3); nes_write(0x96, g_cpu.A & g_cpu.X); /* SAX */
label_8A4C:;
    /* $8A4C: 97 */ maybe_trigger_vblank(4); nes_write((0xFF + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_8A4E:;
    /* $8A4E: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0303); FLAG_NZ(g_cpu.A);
label_8A51:;
    /* $8A51: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0x8B7C + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A54:;
    /* $8A54: 8C */ maybe_trigger_vblank(4); nes_write(0x0DFF, g_cpu.Y);
label_8A57:;
    /* $8A57: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A59:;
    /* $8A59: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8A5A:;
    /* $8A5A: 67 */ maybe_trigger_vblank(5); { uint16_t a=0x98; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A5C:;
    /* $8A5C: 99 */ maybe_trigger_vblank(5); nes_write((0x0DFF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8A5F:;
    /* $8A5F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A61:;
    /* $8A61: 80 */ maybe_trigger_vblank(2); /* NOP */
label_8A63:;
    /* $8A63: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { call_by_address(0x89F6); return; }
label_8A65:;
    /* $8A65: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A68:;
    /* $8A68: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x7D + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A6A:;
    /* $8A6A: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0x8E8D + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8A6D:;
    /* $8A6D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A70:;
    /* $8A70: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x82 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A72:;
    /* $8A72: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x92 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_8A74:;
    /* $8A74: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_8A76:;
    /* $8A76: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0303); FLAG_NZ(g_cpu.A);
label_8A79:;
    /* $8A79: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8A7A:;
    /* $8A7A: 89 */ maybe_trigger_vblank(2); /* NOP */
label_8A7C:;
    /* $8A7C: 99 */ maybe_trigger_vblank(5); nes_write((0x0DFF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8A7F:;
    /* $8A7F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A81:;
    /* $8A81: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8A82:;
    /* $8A82: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8A83:;
    /* $8A83: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8A84:;
    /* $8A84: 99 */ maybe_trigger_vblank(5); nes_write((0x0DFF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8A87:;
    /* $8A87: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A89:;
    /* $8A89: 84 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.Y);
label_8A8B:;
    /* $8A8B: 94 */ maybe_trigger_vblank(4); nes_write((0x95 + g_cpu.X) & 0xFF, g_cpu.Y);
label_8A8D:;
    /* $8A8D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A90:;
    /* $8A90: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x3F + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A92:;
    /* $8A92: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x3F40 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A95:;
    /* $8A95: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x4F00 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A98:;
    /* $8A98: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x4F40 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A9B:;
    /* $8A9B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0434 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A9E:;
    /* $8A9E: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xF2); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8AA0:;
    /* $8AA0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0004 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8AA3:;
    /* $8AA3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8AA3); return;
}

void func_8A46_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A46_b1");
#endif
label_8A46:;
    /* $8A46: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0303); FLAG_NZ(g_cpu.A);
label_8A49:;
    /* $8A49: 86 */ maybe_trigger_vblank(3); nes_write(0x87, g_cpu.X);
label_8A4B:;
    /* $8A4B: 96 */ maybe_trigger_vblank(4); nes_write((0x97 + g_cpu.Y) & 0xFF, g_cpu.X);
label_8A4D:;
    /* $8A4D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A50:;
    /* $8A50: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x7B + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A52:;
    /* $8A52: 7C */ maybe_trigger_vblank(4); (void)nes_read((0x8C8B + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8A55:;
    /* $8A55: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A58:;
    /* $8A58: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x88 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A5A:;
    /* $8A5A: 67 */ maybe_trigger_vblank(5); { uint16_t a=0x98; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A5C:;
    /* $8A5C: 99 */ maybe_trigger_vblank(5); nes_write((0x0DFF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8A5F:;
    /* $8A5F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A61:;
    /* $8A61: 80 */ maybe_trigger_vblank(2); /* NOP */
label_8A63:;
    /* $8A63: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { call_by_address(0x89F6); return; }
label_8A65:;
    /* $8A65: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A68:;
    /* $8A68: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x7D + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A6A:;
    /* $8A6A: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0x8E8D + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8A6D:;
    /* $8A6D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A70:;
    /* $8A70: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x82 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A72:;
    /* $8A72: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x92 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_8A74:;
    /* $8A74: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_8A76:;
    /* $8A76: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0303); FLAG_NZ(g_cpu.A);
label_8A79:;
    /* $8A79: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8A7A:;
    /* $8A7A: 89 */ maybe_trigger_vblank(2); /* NOP */
label_8A7C:;
    /* $8A7C: 99 */ maybe_trigger_vblank(5); nes_write((0x0DFF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8A7F:;
    /* $8A7F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A81:;
    /* $8A81: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8A82:;
    /* $8A82: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8A83:;
    /* $8A83: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8A84:;
    /* $8A84: 99 */ maybe_trigger_vblank(5); nes_write((0x0DFF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8A87:;
    /* $8A87: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A89:;
    /* $8A89: 84 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.Y);
label_8A8B:;
    /* $8A8B: 94 */ maybe_trigger_vblank(4); nes_write((0x95 + g_cpu.X) & 0xFF, g_cpu.Y);
label_8A8D:;
    /* $8A8D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A90:;
    /* $8A90: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x3F + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A92:;
    /* $8A92: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x3F40 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A95:;
    /* $8A95: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x4F00 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A98:;
    /* $8A98: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x4F40 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A9B:;
    /* $8A9B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0434 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A9E:;
    /* $8A9E: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xF2); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8AA0:;
    /* $8AA0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0004 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8AA3:;
    /* $8AA3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8AA3); return;
}

void func_8A56_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A56_b1");
#endif
label_8A56:;
    /* $8A56: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0303); FLAG_NZ(g_cpu.A);
label_8A59:;
    /* $8A59: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8A5A:;
    /* $8A5A: 67 */ maybe_trigger_vblank(5); { uint16_t a=0x98; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A5C:;
    /* $8A5C: 99 */ maybe_trigger_vblank(5); nes_write((0x0DFF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8A5F:;
    /* $8A5F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A61:;
    /* $8A61: 80 */ maybe_trigger_vblank(2); /* NOP */
label_8A63:;
    /* $8A63: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { call_by_address(0x89F6); return; }
label_8A65:;
    /* $8A65: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A68:;
    /* $8A68: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x7D + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A6A:;
    /* $8A6A: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0x8E8D + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8A6D:;
    /* $8A6D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A70:;
    /* $8A70: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x82 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A72:;
    /* $8A72: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x92 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_8A74:;
    /* $8A74: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_8A76:;
    /* $8A76: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0303); FLAG_NZ(g_cpu.A);
label_8A79:;
    /* $8A79: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8A7A:;
    /* $8A7A: 89 */ maybe_trigger_vblank(2); /* NOP */
label_8A7C:;
    /* $8A7C: 99 */ maybe_trigger_vblank(5); nes_write((0x0DFF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8A7F:;
    /* $8A7F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A81:;
    /* $8A81: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8A82:;
    /* $8A82: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8A83:;
    /* $8A83: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8A84:;
    /* $8A84: 99 */ maybe_trigger_vblank(5); nes_write((0x0DFF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8A87:;
    /* $8A87: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A89:;
    /* $8A89: 84 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.Y);
label_8A8B:;
    /* $8A8B: 94 */ maybe_trigger_vblank(4); nes_write((0x95 + g_cpu.X) & 0xFF, g_cpu.Y);
label_8A8D:;
    /* $8A8D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A90:;
    /* $8A90: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x3F + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A92:;
    /* $8A92: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x3F40 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A95:;
    /* $8A95: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x4F00 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A98:;
    /* $8A98: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x4F40 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A9B:;
    /* $8A9B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0434 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A9E:;
    /* $8A9E: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xF2); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8AA0:;
    /* $8AA0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0004 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8AA3:;
    /* $8AA3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8AA3); return;
}

void func_8A5E_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A5E_b1");
#endif
label_8A5E:;
    /* $8A5E: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0303); FLAG_NZ(g_cpu.A);
label_8A61:;
    /* $8A61: 80 */ maybe_trigger_vblank(2); /* NOP */
label_8A63:;
    /* $8A63: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { call_by_address(0x89F6); return; }
label_8A65:;
    /* $8A65: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A68:;
    /* $8A68: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x7D + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A6A:;
    /* $8A6A: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0x8E8D + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8A6D:;
    /* $8A6D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A70:;
    /* $8A70: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x82 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A72:;
    /* $8A72: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x92 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_8A74:;
    /* $8A74: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_8A76:;
    /* $8A76: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0303); FLAG_NZ(g_cpu.A);
label_8A79:;
    /* $8A79: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8A7A:;
    /* $8A7A: 89 */ maybe_trigger_vblank(2); /* NOP */
label_8A7C:;
    /* $8A7C: 99 */ maybe_trigger_vblank(5); nes_write((0x0DFF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8A7F:;
    /* $8A7F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A81:;
    /* $8A81: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8A82:;
    /* $8A82: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8A83:;
    /* $8A83: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8A84:;
    /* $8A84: 99 */ maybe_trigger_vblank(5); nes_write((0x0DFF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8A87:;
    /* $8A87: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A89:;
    /* $8A89: 84 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.Y);
label_8A8B:;
    /* $8A8B: 94 */ maybe_trigger_vblank(4); nes_write((0x95 + g_cpu.X) & 0xFF, g_cpu.Y);
label_8A8D:;
    /* $8A8D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A90:;
    /* $8A90: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x3F + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A92:;
    /* $8A92: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x3F40 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A95:;
    /* $8A95: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x4F00 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A98:;
    /* $8A98: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x4F40 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A9B:;
    /* $8A9B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0434 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A9E:;
    /* $8A9E: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xF2); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8AA0:;
    /* $8AA0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0004 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8AA3:;
    /* $8AA3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8AA3); return;
}

void func_8A66_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A66_b1");
#endif
label_8A66:;
    /* $8A66: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0303); FLAG_NZ(g_cpu.A);
label_8A69:;
    /* $8A69: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x8D7E + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A6C:;
    /* $8A6C: 8E */ maybe_trigger_vblank(4); nes_write(0x0DFF, g_cpu.X);
label_8A6F:;
    /* $8A6F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A71:;
    /* $8A71: 82 */ maybe_trigger_vblank(2); /* NOP */
label_8A73:;
    /* $8A73: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_8A74:;
    /* $8A74: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_8A76:;
    /* $8A76: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0303); FLAG_NZ(g_cpu.A);
label_8A79:;
    /* $8A79: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8A7A:;
    /* $8A7A: 89 */ maybe_trigger_vblank(2); /* NOP */
label_8A7C:;
    /* $8A7C: 99 */ maybe_trigger_vblank(5); nes_write((0x0DFF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8A7F:;
    /* $8A7F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A81:;
    /* $8A81: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8A82:;
    /* $8A82: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8A83:;
    /* $8A83: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8A84:;
    /* $8A84: 99 */ maybe_trigger_vblank(5); nes_write((0x0DFF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8A87:;
    /* $8A87: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A89:;
    /* $8A89: 84 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.Y);
label_8A8B:;
    /* $8A8B: 94 */ maybe_trigger_vblank(4); nes_write((0x95 + g_cpu.X) & 0xFF, g_cpu.Y);
label_8A8D:;
    /* $8A8D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A90:;
    /* $8A90: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x3F + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A92:;
    /* $8A92: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x3F40 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A95:;
    /* $8A95: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x4F00 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A98:;
    /* $8A98: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x4F40 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A9B:;
    /* $8A9B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0434 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A9E:;
    /* $8A9E: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xF2); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8AA0:;
    /* $8AA0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0004 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8AA3:;
    /* $8AA3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8AA3); return;
}

void func_8A6E_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A6E_b1");
#endif
label_8A6E:;
    /* $8A6E: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0303); FLAG_NZ(g_cpu.A);
label_8A71:;
    /* $8A71: 82 */ maybe_trigger_vblank(2); /* NOP */
label_8A73:;
    /* $8A73: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_8A74:;
    /* $8A74: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_8A76:;
    /* $8A76: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0303); FLAG_NZ(g_cpu.A);
label_8A79:;
    /* $8A79: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8A7A:;
    /* $8A7A: 89 */ maybe_trigger_vblank(2); /* NOP */
label_8A7C:;
    /* $8A7C: 99 */ maybe_trigger_vblank(5); nes_write((0x0DFF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8A7F:;
    /* $8A7F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A81:;
    /* $8A81: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8A82:;
    /* $8A82: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8A83:;
    /* $8A83: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8A84:;
    /* $8A84: 99 */ maybe_trigger_vblank(5); nes_write((0x0DFF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8A87:;
    /* $8A87: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A89:;
    /* $8A89: 84 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.Y);
label_8A8B:;
    /* $8A8B: 94 */ maybe_trigger_vblank(4); nes_write((0x95 + g_cpu.X) & 0xFF, g_cpu.Y);
label_8A8D:;
    /* $8A8D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A90:;
    /* $8A90: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x3F + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A92:;
    /* $8A92: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x3F40 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A95:;
    /* $8A95: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x4F00 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A98:;
    /* $8A98: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x4F40 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A9B:;
    /* $8A9B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0434 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A9E:;
    /* $8A9E: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xF2); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8AA0:;
    /* $8AA0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0004 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8AA3:;
    /* $8AA3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8AA3); return;
}

void func_8A7E_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A7E_b1");
#endif
label_8A7E:;
    /* $8A7E: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0303); FLAG_NZ(g_cpu.A);
label_8A81:;
    /* $8A81: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8A82:;
    /* $8A82: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8A83:;
    /* $8A83: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8A84:;
    /* $8A84: 99 */ maybe_trigger_vblank(5); nes_write((0x0DFF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8A87:;
    /* $8A87: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A89:;
    /* $8A89: 84 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.Y);
label_8A8B:;
    /* $8A8B: 94 */ maybe_trigger_vblank(4); nes_write((0x95 + g_cpu.X) & 0xFF, g_cpu.Y);
label_8A8D:;
    /* $8A8D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A90:;
    /* $8A90: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x3F + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A92:;
    /* $8A92: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x3F40 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A95:;
    /* $8A95: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x4F00 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A98:;
    /* $8A98: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x4F40 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A9B:;
    /* $8A9B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0434 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A9E:;
    /* $8A9E: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xF2); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8AA0:;
    /* $8AA0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0004 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8AA3:;
    /* $8AA3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8AA3); return;
}

void func_8A86_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A86_b1");
#endif
label_8A86:;
    /* $8A86: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0303); FLAG_NZ(g_cpu.A);
label_8A89:;
    /* $8A89: 84 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.Y);
label_8A8B:;
    /* $8A8B: 94 */ maybe_trigger_vblank(4); nes_write((0x95 + g_cpu.X) & 0xFF, g_cpu.Y);
label_8A8D:;
    /* $8A8D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A90:;
    /* $8A90: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x3F + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A92:;
    /* $8A92: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x3F40 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A95:;
    /* $8A95: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x4F00 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A98:;
    /* $8A98: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x4F40 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A9B:;
    /* $8A9B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0434 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A9E:;
    /* $8A9E: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xF2); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8AA0:;
    /* $8AA0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0004 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8AA3:;
    /* $8AA3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8AA3); return;
}

void func_8A8E_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A8E_b1");
#endif
label_8A8E:;
    /* $8A8E: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0303); FLAG_NZ(g_cpu.A);
label_8A91:;
    /* $8A91: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x40FD + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8A94:;
    /* $8A94: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x00FD + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8A97:;
    /* $8A97: 4F */ maybe_trigger_vblank(6); { uint16_t a=0x40FD; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8A9A:;
    /* $8A9A: 4F */ maybe_trigger_vblank(6); { uint16_t a=0x34FF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8A9D:;
    /* $8A9D: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8A9F:;
    /* $8A9F: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_8AA0:;
    /* $8AA0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0004 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8AA3:;
    /* $8AA3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8AA3); return;
}

void func_8A9C_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A9C_b1");
#endif
label_8A9C:;
    /* $8A9C: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x04 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8A9E:;
    /* $8A9E: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xF2); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8AA0:;
    /* $8AA0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0004 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8AA3:;
    /* $8AA3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8AA3); return;
}

void func_8AA1_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8AA1_b1");
#endif
label_8AA1:;
    /* $8AA1: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8AA3:;
    /* $8AA3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8AA3); return;
}

void func_8AA6_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8AA6_b1");
#endif
label_8AA6:;
    /* $8AA6: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8AA8:;
    /* $8AA8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8AA8); return;
}

void func_8AC4_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8AC4_b1");
#endif
label_8AC4:;
    /* $8AC4: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0800 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
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

void func_8AF3_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8AF3_b1");
#endif
label_8AF3:;
    /* $8AF3: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
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

void func_8B03_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8B03_b1");
#endif
label_8B03:;
    /* $8B03: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x1004); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8B06:;
    /* $8B06: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x5700 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8B09:;
    /* $8B09: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8B0A:;
    /* $8B0A: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x1840 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8B0D:;
    /* $8B0D: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xFD + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8B0F:;
    /* $8B0F: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x18; g_cpu.C=(g_cpu.Y>=0x18)?1:0; FLAG_NZ(r&0xFF); }
label_8B11:;
    /* $8B11: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8B12:;
    /* $8B12: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x56A5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
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
    /* $8B56: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x58; g_cpu.S--; func_8B74_b1();
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
    /* $8B6D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6F; g_cpu.S--; func_8B53_b1();
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

void func_99B8_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99B8_b1");
#endif
label_99B8:;
    /* $99B8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x09; FLAG_NZ(g_cpu.A);
label_99BA:;
    /* $99BA: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_99BC:;
    /* $99BC: 85 */ maybe_trigger_vblank(3); nes_write(0x86, g_cpu.A);
label_99BE:;
    /* $99BE: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_99C1:;
    /* $99C1: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_99C3:;
    /* $99C3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_99C8;
label_99C5:;
    /* $99C5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC7; g_cpu.S--; func_801B_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x99C5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_99C8:;
    /* $99C8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_99CA:;
    /* $99CA: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_99CC:;
    /* $99CC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_99CE:;
    /* $99CE: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_99D0:;
    /* $99D0: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_99A1_b1(); return;
}

void func_99FA_b1_body(int _entry) {
    switch (_entry) {
        case 1: goto label_9A07;
    }
label_99FA:;
    /* $99FA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x81); FLAG_NZ(g_cpu.A);
label_99FC:;
    /* $99FC: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_99FE:;
    /* $99FE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9A44;
label_9A00:;
    /* $9A00: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_9A02:;
    /* $9A02: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9A49;
label_9A04:;
    /* $9A04: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0406 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A07:;
    /* $9A07: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0F; g_cpu.C=(g_cpu.A>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_9A09:;
    /* $9A09: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_9A3F;
label_9A0B:;
    /* $9A0B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x11; g_cpu.C=(g_cpu.A>=0x11)?1:0; FLAG_NZ(r&0xFF); }
label_9A0D:;
    /* $9A0D: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_9A16;
label_9A0F:;
    /* $9A0F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3A; FLAG_NZ(g_cpu.A);
label_9A11:;
    /* $9A11: 9D */ maybe_trigger_vblank(5); nes_write((0x6B01 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9A14:;
    /* $9A14: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9A3F;
label_9A16:;
    /* $9A16: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x6B01 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9A19:;
    /* $9A19: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9A3F;
label_9A1B:;
    /* $9A1B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9A1D:;
    /* $9A1D: 9D */ maybe_trigger_vblank(5); nes_write((0x6AF4 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9A20:;
    /* $9A20: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0C; FLAG_NZ(g_cpu.Y);
label_9A22:;
    /* $9A22: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_9A24:;
    /* $9A24: 99 */ maybe_trigger_vblank(5); nes_write((0x00A0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A27:;
    /* $9A27: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0400 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A2A:;
    /* $9A2A: 99 */ maybe_trigger_vblank(5); nes_write((0x00A1 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A2D:;
    /* $9A2D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0401 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A30:;
    /* $9A30: 99 */ maybe_trigger_vblank(5); nes_write((0x00A2 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A33:;
    /* $9A33: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AFB + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A36:;
    /* $9A36: 99 */ maybe_trigger_vblank(5); nes_write((0x00A3 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A39:;
    /* $9A39: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A3A:;
    /* $9A3A: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A3B:;
    /* $9A3B: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A3C:;
    /* $9A3C: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A3D:;
    /* $9A3D: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9A22;
    }
label_9A3F:;
    /* $9A3F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_9A41:;
    /* $9A41: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8000_b1(); return;
label_9A44:;
    /* $9A44: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_9A46:;
    /* $9A46: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8003_b1(); return;
label_9A49:;
    /* $9A49: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8006_b1(); return;
}

void func_99FA_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99FA_b1");
#endif
    func_99FA_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9A07_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A07_b1");
#endif
    func_99FA_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9A44_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A44_b1");
#endif
label_9A44:;
    /* $9A44: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_9A46:;
    /* $9A46: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8003_b1(); return;
}

void func_9A49_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A49_b1");
#endif
label_9A49:;
    /* $9A49: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8006_b1(); return;
}

void func_9A4C_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A4C_b1");
#endif
label_9A4C:;
    /* $9A4C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x4E; g_cpu.S--; func_8009_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9A4C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9A4F:;
    /* $9A4F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_9A51:;
    /* $9A51: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9A87;
label_9A53:;
    /* $9A53: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x81); FLAG_NZ(g_cpu.A);
label_9A55:;
    /* $9A55: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_9A57:;
    /* $9A57: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0x9A44); return; }
label_9A59:;
    /* $9A59: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_9A5B:;
    /* $9A5B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0x9A49); return; }
label_9A5D:;
    /* $9A5D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A60:;
    /* $9A60: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_9A62:;
    /* $9A62: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9A87;
label_9A64:;
    /* $9A64: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x040A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A67:;
    /* $9A67: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_9A69:;
    /* $9A69: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_9A6B:;
    /* $9A6B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9A7E;
label_9A6D:;
    /* $9A6D: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0400 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_9A70:;
    /* $9A70: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0xE4; g_cpu.C=(g_cpu.Y>=0xE4)?1:0; FLAG_NZ(r&0xFF); }
label_9A72:;
    /* $9A72: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9A7E;
label_9A74:;
    /* $9A74: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x76; g_cpu.S--; func_9ABD_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9A74, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9A77:;
    /* $9A77: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_9A79:;
    /* $9A79: 9D */ maybe_trigger_vblank(5); nes_write((0x040A + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9A7C:;
    /* $9A7C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9A84;
label_9A7E:;
    /* $9A7E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; func_9AE2_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9A7E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9A81:;
    /* $9A81: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x83; g_cpu.S--; func_9AA8_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9A81, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9A84:;
    /* $9A84: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x86; g_cpu.S--; func_9AC6_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9A84, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9A87:;
    /* $9A87: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_9A89:;
    /* $9A89: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; func_800C_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9A89, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9A8C:;
    /* $9A8C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8006_b1(); return;
}

void func_9A8F_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A8F_b1");
#endif
label_9A8F:;
    /* $9A8F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A92:;
    /* $9A92: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9A93:;
    /* $9A93: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x040A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A96:;
    /* $9A96: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_9A98:;
    /* $9A98: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_9A99:;
    /* $9A99: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9A9A:;
    /* $9A9A: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9AA0 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A9D:;
    /* $9A9D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_800F_b1(); return;
}

void func_9AA8_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9AA8_b1");
#endif
label_9AA8:;
    /* $9AA8: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_9AAA:;
    /* $9AAA: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_9AC5;
label_9AAC:;
    /* $9AAC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_9AAE:;
    /* $9AAE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9ABD;
label_9AB0:;
    /* $9AB0: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x040A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_9AB3:;
    /* $9AB3: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9AB4:;
    /* $9AB4: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_9AB5:;
    /* $9AB5: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_9AB7:;
    /* $9AB7: 9D */ maybe_trigger_vblank(5); nes_write((0x040A + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9ABA:;
    /* $9ABA: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_9A8F_b1(); return;
label_9ABD:;
    /* $9ABD: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9AC0:;
    /* $9AC0: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x01; FLAG_NZ(g_cpu.A);
label_9AC2:;
    /* $9AC2: 9D */ maybe_trigger_vblank(5); nes_write((0x0405 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9AC5:;
    /* $9AC5: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9ABD_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9ABD_b1");
#endif
label_9ABD:;
    /* $9ABD: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9AC0:;
    /* $9AC0: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x01; FLAG_NZ(g_cpu.A);
label_9AC2:;
    /* $9AC2: 9D */ maybe_trigger_vblank(5); nes_write((0x0405 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9AC5:;
    /* $9AC5: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9AC6_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9AC6_b1");
#endif
label_9AC6:;
    /* $9AC6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC8; g_cpu.S--; func_9ADA_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9AC6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9AC9:;
    /* $9AC9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCB; g_cpu.S--; func_9AE2_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9AC9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9ACC:;
    /* $9ACC: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_9ACE:;
    /* $9ACE: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_9AD9;
label_9AD0:;
    /* $9AD0: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD2; g_cpu.S--; func_9ADA_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9AD0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9AD3:;
    /* $9AD3: 9D */ maybe_trigger_vblank(5); nes_write((0x040A + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9AD6:;
    /* $9AD6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD8; g_cpu.S--; func_9A8F_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9AD6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9AD9:;
    /* $9AD9: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9ADA_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9ADA_b1");
#endif
label_9ADA:;
    /* $9ADA: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x040A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_9ADD:;
    /* $9ADD: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9ADE:;
    /* $9ADE: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_9ADF:;
    /* $9ADF: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_9AE1:;
    /* $9AE1: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9AE2_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9AE2_b1");
#endif
label_9AE2:;
    /* $9AE2: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_9AE5:;
    /* $9AE5: 84 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.Y);
label_9AE7:;
    /* $9AE7: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_9AE9:;
    /* $9AE9: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_9AEA:;
    /* $9AEA: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9AEB:;
    /* $9AEB: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9AEC:;
    /* $9AEC: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8049 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9AEF:;
    /* $9AEF: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9AF0:;
    /* $9AF0: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8048 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9AF3:;
    /* $9AF3: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9AF4:;
    /* $9AF4: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _lo=g_ram[0x100+g_cpu.S]; g_cpu.S++; uint8_t _hi=g_ram[0x100+g_cpu.S]; call_by_address(((uint16_t)_hi<<8|_lo)+1); }
    
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9C1D_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9C1D_b1");
#endif
label_9C1D:;
    /* $9C1D: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x50; FLAG_NZ(g_cpu.X);
label_9C1F:;
    /* $9C1F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x21; g_cpu.S--; func_9C2A_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9C1F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9C22:;
    /* $9C22: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_9C23:;
    /* $9C23: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_9C24:;
    /* $9C24: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x10; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9C26:;
    /* $9C26: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_9C27:;
    /* $9C27: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9C1F;
    }
label_9C29:;
    /* $9C29: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9C2A_b1_body(int _entry) {
    switch (_entry) {
        case 1: goto label_9C96;
    }
label_9C2A:;
    /* $9C2A: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_9C2D:;
    /* $9C2D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9C55;
label_9C2F:;
    /* $9C2F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6B02 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C32:;
    /* $9C32: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_9C34:;
    /* $9C34: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9C3A;
label_9C36:;
    /* $9C36: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_9C38:;
    /* $9C38: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9CA7;
label_9C3A:;
    /* $9C3A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C3D:;
    /* $9C3D: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9C3F:;
    /* $9C3F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9C55;
label_9C41:;
    /* $9C41: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9C42:;
    /* $9C42: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9C60;
label_9C44:;
    /* $9C44: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x02; g_cpu.C=(g_cpu.Y>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_9C46:;
    /* $9C46: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9C55;
label_9C48:;
    /* $9C48: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x03; g_cpu.C=(g_cpu.Y>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_9C4A:;
    /* $9C4A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9CA7;
label_9C4C:;
    /* $9C4C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x040C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C4F:;
    /* $9C4F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_9C51:;
    /* $9C51: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9CA7;
label_9C53:;
    /* $9C53: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9C60;
label_9C55:;
    /* $9C55: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9C57:;
    /* $9C57: 9D */ maybe_trigger_vblank(5); nes_write((0x6AF4 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9C5A:;
    /* $9C5A: 9D */ maybe_trigger_vblank(5); nes_write((0x040F + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9C5D:;
    /* $9C5D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x5F; g_cpu.S--; func_802A_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9C5D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9C60:;
    /* $9C60: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0405); FLAG_NZ(g_cpu.A);
label_9C63:;
    /* $9C63: 9D */ maybe_trigger_vblank(5); nes_write((0x0405 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9C66:;
    /* $9C66: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9C67:;
    /* $9C67: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9C68:;
    /* $9C68: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_9C69:;
    /* $9C69: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9C6A:;
    /* $9C6A: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9C6B:;
    /* $9C6B: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9C6C:;
    /* $9C6C: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9C6D:;
    /* $9C6D: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9C6E:;
    /* $9C6E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9CB7 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C71:;
    /* $9C71: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_9C73:;
    /* $9C73: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9CC6 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C76:;
    /* $9C76: 9D */ maybe_trigger_vblank(5); nes_write((0x6B02 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9C79:;
    /* $9C79: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_9C7A:;
    /* $9C7A: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_9C7B:;
    /* $9C7B: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_9C7C:;
    /* $9C7C: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9C7D:;
    /* $9C7D: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9CBB + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C80:;
    /* $9C80: 85 */ maybe_trigger_vblank(3); nes_write(0x05, g_cpu.A);
label_9C82:;
    /* $9C82: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_9C84:;
    /* $9C84: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x86; g_cpu.S--; func_9CA8_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9C84, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9C87:;
    /* $9C87: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x89; g_cpu.S--; func_8027_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9C87, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9C8A:;
    /* $9C8A: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_9C8C:;
    /* $9C8C: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_9CA7;
label_9C8E:;
    /* $9C8E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C91:;
    /* $9C91: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9C96;
label_9C93:;
    /* $9C93: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x6AF4 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9C96:;
    /* $9C96: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x08); FLAG_NZ(g_cpu.A);
label_9C98:;
    /* $9C98: 9D */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9C9B:;
    /* $9C9B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x09); FLAG_NZ(g_cpu.A);
label_9C9D:;
    /* $9C9D: 9D */ maybe_trigger_vblank(5); nes_write((0x0401 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CA0:;
    /* $9CA0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x0B); FLAG_NZ(g_cpu.A);
label_9CA2:;
    /* $9CA2: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_9CA4:;
    /* $9CA4: 9D */ maybe_trigger_vblank(5); nes_write((0x6AFB + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CA7:;
    /* $9CA7: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9C2A_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9C2A_b1");
#endif
    func_9C2A_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9C96_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9C96_b1");
#endif
    func_9C2A_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9CA8_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9CA8_b1");
#endif
label_9CA8:;
    /* $9CA8: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0400 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CAB:;
    /* $9CAB: 85 */ maybe_trigger_vblank(3); nes_write(0x08, g_cpu.A);
label_9CAD:;
    /* $9CAD: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0401 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CB0:;
    /* $9CB0: 85 */ maybe_trigger_vblank(3); nes_write(0x09, g_cpu.A);
label_9CB2:;
    /* $9CB2: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AFB + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CB5:;
    /* $9CB5: 85 */ maybe_trigger_vblank(3); nes_write(0x0B, g_cpu.A);
label_9CB7:;
    /* $9CB7: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9CCC_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9CCC_b1");
#endif
label_9CCC:;
    /* $9CCC: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x7E); FLAG_NZ(g_cpu.Y);
label_9CCE:;
    /* $9CCE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9CD2;
label_9CD0:;
    /* $9CD0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x80; FLAG_NZ(g_cpu.Y);
label_9CD2:;
    /* $9CD2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_9CD4:;
    /* $9CD4: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9CD6:;
    /* $9CD6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9D04;
label_9CD8:;
    /* $9CD8: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9CD9:;
    /* $9CD9: 84 */ maybe_trigger_vblank(3); nes_write(0x7E, g_cpu.Y);
label_9CDB:;
    /* $9CDB: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_9CDC:;
    /* $9CDC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9CDD:;
    /* $9CDD: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_9D04;
label_9CDF:;
    /* $9CDF: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_9CE1:;
    /* $9CE1: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_9CE3:;
    /* $9CE3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9D04;
label_9CE5:;
    /* $9CE5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9CE7:;
    /* $9CE7: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x10; FLAG_NZ(g_cpu.X);
label_9CE9:;
    /* $9CE9: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9CEC:;
    /* $9CEC: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9CFF;
label_9CEE:;
    /* $9CEE: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x20; FLAG_NZ(g_cpu.X);
label_9CF0:;
    /* $9CF0: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9CF3:;
    /* $9CF3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9CFF;
label_9CF5:;
    /* $9CF5: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x30; FLAG_NZ(g_cpu.X);
label_9CF7:;
    /* $9CF7: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9CFA:;
    /* $9CFA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9CFF;
label_9CFC:;
    /* $9CFC: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x7E; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9CFE:;
    /* $9CFE: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9CFF:;
    /* $9CFF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_9D01:;
    /* $9D01: 9D */ maybe_trigger_vblank(5); nes_write((0x0409 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D04:;
    /* $9D04: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9D05_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9D05_b1");
#endif
label_9D05:;
    /* $9D05: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x7F); FLAG_NZ(g_cpu.Y);
label_9D07:;
    /* $9D07: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9D0B;
label_9D09:;
    /* $9D09: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x60; FLAG_NZ(g_cpu.Y);
label_9D0B:;
    /* $9D0B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_9D0D:;
    /* $9D0D: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9D0F:;
    /* $9D0F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9D34;
label_9D11:;
    /* $9D11: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9D12:;
    /* $9D12: 84 */ maybe_trigger_vblank(3); nes_write(0x7F, g_cpu.Y);
label_9D14:;
    /* $9D14: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_9D15:;
    /* $9D15: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9D16:;
    /* $9D16: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_9D34;
label_9D18:;
    /* $9D18: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_9D1A:;
    /* $9D1A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9D34;
label_9D1C:;
    /* $9D1C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9D1E:;
    /* $9D1E: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x40; FLAG_NZ(g_cpu.X);
label_9D20:;
    /* $9D20: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9D23:;
    /* $9D23: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9D2F;
label_9D25:;
    /* $9D25: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x50; FLAG_NZ(g_cpu.X);
label_9D27:;
    /* $9D27: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9D2A:;
    /* $9D2A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9D2F;
label_9D2C:;
    /* $9D2C: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x7F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9D2E:;
    /* $9D2E: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9D2F:;
    /* $9D2F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_9D31:;
    /* $9D31: 9D */ maybe_trigger_vblank(5); nes_write((0x0409 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D34:;
    /* $9D34: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B3F0_b1_body(int _entry) {
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
    /* $B3FA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFC; g_cpu.S--; func_B34B_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3FA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3FD:;
    /* $B3FD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFF; g_cpu.S--; func_B37B_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3FD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B400:;
    /* $B400: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x02; g_cpu.S--; func_B36D_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB400, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B403:;
    /* $B403: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x05; g_cpu.S--; func_BC66_b1();
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

void func_B3F0_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3F0_b1");
#endif
    func_B3F0_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B40E_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B40E_b1");
#endif
    func_B3F0_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B3FC_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3FC_b1");
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

void func_B452_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B452_b1");
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

void func_B4A9_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4A9_b1");
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

void func_B4BD_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4BD_b1");
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

void func_B53F_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B53F_b1");
#endif
label_B53F:;
    /* $B53F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x14; FLAG_NZ(g_cpu.A);
label_B541:;
    /* $B541: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x51; FLAG_NZ(g_cpu.Y);
label_B543:;
    /* $B543: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B482_b1(); return;
}

void func_B546_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B546_b1");
#endif
label_B546:;
    /* $B546: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x48; g_cpu.S--; func_B4D9_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB546, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B549:;
    /* $B549: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B54E;
label_B54B:;
    /* $B54B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B5BF_b1(); return;
label_B54E:;
    /* $B54E: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x0670); FLAG_NZ(g_cpu.Y);
label_B551:;
    /* $B551: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB52B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B554:;
    /* $B554: 8D */ maybe_trigger_vblank(4); nes_write(0x400C, g_cpu.A);
label_B557:;
    /* $B557: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0670; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B55A:;
    /* $B55A: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B55B_b1_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B568;
    }
label_B55B:;
    /* $B55B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_B55D:;
    /* $B55D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x41; FLAG_NZ(g_cpu.Y);
label_B55F:;
    /* $B55F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x61; g_cpu.S--; func_B482_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB55F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B562:;
    /* $B562: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xB243); FLAG_NZ(g_cpu.A);
label_B565:;
    /* $B565: 8D */ maybe_trigger_vblank(4); nes_write(0x0670, g_cpu.A);
label_B568:;
    /* $B568: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B55B_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B55B_b1");
#endif
    func_B55B_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B568_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B568_b1");
#endif
    func_B55B_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B569_b1_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B587;
    }
label_B569:;
    /* $B569: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0678); FLAG_NZ(g_cpu.A);
label_B56C:;
    /* $B56C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_B56E:;
    /* $B56E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_B579;
label_B570:;
    /* $B570: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x72; g_cpu.S--; func_B4D9_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB570, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B573:;
    /* $B573: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0xB568); return; }
label_B575:;
    /* $B575: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0678; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B578:;
    /* $B578: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B579:;
    /* $B579: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x7B; g_cpu.S--; func_B4D9_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB579, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B57C:;
    /* $B57C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B594;
label_B57E:;
    /* $B57E: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0670; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B581:;
    /* $B581: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0670; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B584:;
    /* $B584: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0670; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B587:;
    /* $B587: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0674; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B58A:;
    /* $B58A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0674); FLAG_NZ(g_cpu.A);
label_B58D:;
    /* $B58D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0F; g_cpu.C=(g_cpu.A>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_B58F:;
    /* $B58F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0xB568); return; }
label_B591:;
    /* $B591: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B5BF_b1(); return;
label_B594:;
    /* $B594: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0670; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B597:;
    /* $B597: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0670); FLAG_NZ(g_cpu.A);
label_B59A:;
    /* $B59A: 8D */ maybe_trigger_vblank(4); nes_write(0x400E, g_cpu.A);
label_B59D:;
    /* $B59D: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B569_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B569_b1");
#endif
    func_B569_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B587_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B587_b1");
#endif
    func_B569_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B59E_b1_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B5A5;
    }
label_B59E:;
    /* $B59E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x18; FLAG_NZ(g_cpu.A);
label_B5A0:;
    /* $B5A0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x45; FLAG_NZ(g_cpu.Y);
label_B5A2:;
    /* $B5A2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA4; g_cpu.S--; func_B5B7_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB5A2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
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

void func_B59E_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B59E_b1");
#endif
    func_B59E_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B5A5_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5A5_b1");
#endif
    func_B59E_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B5AB_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5AB_b1");
#endif
label_B5AB:;
    /* $B5AB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAD; g_cpu.S--; func_B4D9_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB5AB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B5AE:;
    /* $B5AE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0xB594); return; }
label_B5B0:;
    /* $B5B0: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B5BF_b1(); return;
}

void func_B5B3_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5B3_b1");
#endif
label_B5B3:;
    /* $B5B3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x30; FLAG_NZ(g_cpu.A);
label_B5B5:;
    /* $B5B5: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x49; FLAG_NZ(g_cpu.Y);
label_B5B7:;
    /* $B5B7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B482_b1(); return;
}

void func_B5BA_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5BA_b1");
#endif
label_B5BA:;
    /* $B5BA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; func_B4D9_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB5BA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B5BD:;
    /* $B5BD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B5C7;
label_B5BF:;
    /* $B5BF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC1; g_cpu.S--; func_B4D2_b1();
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

void func_B5C8_b1_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B5D5;
    }
label_B5C8:;
    /* $B5C8: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0688); FLAG_NZ(g_cpu.A);
label_B5CB:;
    /* $B5CB: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x34; FLAG_NZ(g_cpu.A);
label_B5CD:;
    /* $B5CD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0xB5C7); return; }
label_B5CF:;
    /* $B5CF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_B5D1:;
    /* $B5D1: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x4D; FLAG_NZ(g_cpu.Y);
label_B5D3:;
    /* $B5D3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0xB5B7); return; }
label_B5D5:;
    /* $B5D5: 8D */ maybe_trigger_vblank(4); nes_write(0x0664, g_cpu.A);
label_B5D8:;
    /* $B5D8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDA; g_cpu.S--; func_B3A4_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB5D8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B5DB:;
    /* $B5DB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDD; g_cpu.S--; func_B4C3_b1();
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

void func_B5C8_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5C8_b1");
#endif
    func_B5C8_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B5D5_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5D5_b1");
#endif
    func_B5C8_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B6FD_b1_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B703;
        case 2: goto label_B71D;
        case 3: goto label_B77F;
        case 4: goto label_B7B1;
        case 5: goto label_B7D6;
        case 6: goto label_B717;
        case 7: goto label_B733;
        case 8: goto label_B740;
        case 9: goto label_B746;
        case 10: goto label_B765;
        case 11: goto label_B76C;
        case 12: goto label_B7AA;
    }
label_B6FD:;
    /* $B6FD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_B6FF:;
    /* $B6FF: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x71; FLAG_NZ(g_cpu.Y);
label_B701:;
    /* $B701: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B769;
label_B703:;
    /* $B703: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x05; g_cpu.S--; func_B4D9_b1();
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
    /* $B714: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B398_b1(); return;
label_B717:;
    /* $B717: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_B719:;
    /* $B719: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x6D; FLAG_NZ(g_cpu.Y);
label_B71B:;
    /* $B71B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B769;
label_B71D:;
    /* $B71D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1F; g_cpu.S--; func_B4D9_b1();
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
    /* $B72C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2E; g_cpu.S--; func_B4D2_b1();
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
    /* $B769: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B482_b1(); return;
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
    /* $B785: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x87; g_cpu.S--; func_B4D9_b1();
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
    /* $B792: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B482_b1(); return;
label_B795:;
    /* $B795: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x97; g_cpu.S--; func_B4D9_b1();
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
    /* $B7AE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B482_b1(); return;
label_B7B1:;
    /* $B7B1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; func_B4D9_b1();
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

void func_B6FD_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6FD_b1");
#endif
    func_B6FD_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B703_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B703_b1");
#endif
    func_B6FD_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B71D_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B71D_b1");
#endif
    func_B6FD_b1_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B77F_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B77F_b1");
#endif
    func_B6FD_b1_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B7B1_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7B1_b1");
#endif
    func_B6FD_b1_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B7D6_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7D6_b1");
#endif
    func_B6FD_b1_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B717_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B717_b1");
#endif
    func_B6FD_b1_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B733_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B733_b1");
#endif
    func_B6FD_b1_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B740_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B740_b1");
#endif
    func_B6FD_b1_body(8);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B746_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B746_b1");
#endif
    func_B6FD_b1_body(9);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B765_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B765_b1");
#endif
    func_B6FD_b1_body(10);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B76C_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B76C_b1");
#endif
    func_B6FD_b1_body(11);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B7AA_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7AA_b1");
#endif
    func_B6FD_b1_body(12);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B9A0_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9A0_b1");
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

void func_B9E4_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9E4_b1");
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

void func_B9E5_b1_body(int _entry) {
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

void func_B9E5_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9E5_b1");
#endif
    func_B9E5_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B9F3_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9F3_b1");
#endif
    func_B9E5_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BA41_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA41_b1");
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

void func_BCA7_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCA7_b1");
#endif
label_BCA7:;
    /* $BCA7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BCDA_b1(); return;
}

void func_BCAD_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCAD_b1");
#endif
label_BCAD:;
    /* $BCAD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BCCA_b1(); return;
}

void func_BCB0_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCB0_b1");
#endif
label_BCB0:;
    /* $BCB0: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BCC6_b1(); return;
}

void func_BCB3_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCB3_b1");
#endif
label_BCB3:;
    /* $BCB3: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BCB9_b1(); return;
}

void func_BC1C_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC1C_b1");
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
    /* $BC27: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BBD8_b1(); return;
}

void func_BC53_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC53_b1");
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
    /* $BC72: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x74; g_cpu.S--; func_B4ED_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC72, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC75:;
    /* $BC75: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x77; g_cpu.S--; func_BC83_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC75, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC78:;
    /* $BC78: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16zp(0xE2); maybe_trigger_vblank(2); call_by_address(_jt); return; }
}

void func_BC64_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC64_b1");
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
    /* $BC72: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x74; g_cpu.S--; func_B4ED_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC72, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC75:;
    /* $BC75: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x77; g_cpu.S--; func_BC83_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC75, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC78:;
    /* $BC78: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16zp(0xE2); maybe_trigger_vblank(2); call_by_address(_jt); return; }
}

void func_BF19_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BF19_b1");
#endif
label_BF19:;
    /* $BF19: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF19); return;
}

void func_C2BF_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C2BF_b1");
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

void func_C2C0_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C2C0_b1");
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

void func_C2C5_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C2C5_b1");
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

void func_C3D4_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C3D4_b1");
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

void func_CB73_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CB73_b1");
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

void func_CBDA_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CBDA_b1");
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

void func_CC03_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CC03_b1");
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

void func_CC07_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CC07_b1");
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

void func_D2FD_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D2FD_b1");
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

void func_DC1E_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DC1E_b1");
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

void func_E449_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E449_b1");
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

void func_E770_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E770_b1");
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

void func_E77B_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E77B_b1");
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

void func_E8F1_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E8F1_b1");
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

void func_E8FC_b1_body(int _entry) {
    switch (_entry) {
        case 1: goto label_E900;
        case 2: goto label_E901;
    }
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

void func_E8FC_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E8FC_b1");
#endif
    func_E8FC_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_E900_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E900_b1");
#endif
    func_E8FC_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_E901_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E901_b1");
#endif
    func_E8FC_b1_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_E96A_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E96A_b1");
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

void func_F744_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F744_b1");
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

void func_F74B_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F74B_b1");
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

void func_86FB_b1_body(int _entry) {
    switch (_entry) {
        case 1: goto label_86FD;
        case 2: goto label_8701;
    }
label_86FB:;
    /* $86FB: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x87) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_86FD:;
    /* $86FD: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_86FE:;
    /* $86FE: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCEA + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8701:;
    /* $8701: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_86FB;
    }
label_8703:;
    /* $8703: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8705;
label_8705:;
    /* $8705: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_8706:;
    /* $8706: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0x8700); return; }
label_8708:;
    /* $8708: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_8709:;
    /* $8709: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_870A:;
    /* $870A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x870A); return;
}

void func_86FB_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_86FB_b1");
#endif
    func_86FB_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_86FD_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_86FD_b1");
#endif
    func_86FB_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8701_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8701_b1");
#endif
    func_86FB_b1_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8700_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8700_b1");
#endif
label_8700:;
    /* $8700: FC */ maybe_trigger_vblank(4); (void)nes_read((0xF8F0 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8703:;
    /* $8703: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8705;
label_8705:;
    /* $8705: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_8706:;
    /* $8706: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8700;
    }
label_8708:;
    /* $8708: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_8709:;
    /* $8709: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_870A:;
    /* $870A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x870A); return;
}

void func_876D_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_876D_b1");
#endif
label_876D:;
    /* $876D: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCF8 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8770:;
    /* $8770: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8770); return;
}

void func_A0C7_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A0C7_b1");
#endif
label_A0C7:;
    /* $A0C7: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A0C9:;
    /* $A0C9: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0CB:;
    /* $A0CB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA0CB); return;
}

void func_8796_b1_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8799;
        case 2: goto label_87A5;
        case 3: goto label_87B1;
    }
label_8796:;
    /* $8796: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address(0x8794); return; }
label_8798:;
    /* $8798: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8799:;
    /* $8799: FC */ maybe_trigger_vblank(4); (void)nes_read((0xF4F0 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_879C:;
    /* $879C: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_879D:;
    /* $879D: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_879F:;
    /* $879F: FC */ maybe_trigger_vblank(4); (void)nes_read((0x0408 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_87A2:;
    /* $87A2: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_87A3:;
    /* $87A3: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_87A5:;
    /* $87A5: FC */ maybe_trigger_vblank(4); (void)nes_read((0xECE8 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_87A8:;
    /* $87A8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8796;
    }
label_87AA:;
    /* $87AA: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_87AB:;
    /* $87AB: FC */ maybe_trigger_vblank(4); (void)nes_read((0x0C10 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_87AE:;
    /* $87AE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_87BC;
label_87B0:;
    /* $87B0: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_87B1:;
    /* $87B1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x87B1); return;
label_87B2:;
    /* $87B2: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_87B3:;
    /* $87B3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x87B3); return;
label_87B4:;
    /* $87B4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x87B4); return;
label_87B5:;
    /* $87B5: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_87B6:;
    /* $87B6: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_87B7:;
    /* $87B7: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_87B8:;
    /* $87B8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x87B8); return;
label_87B9:;
    /* $87B9: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_87BA:;
    /* $87BA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0x87A4); return; }
label_87BC:;
    /* $87BC: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_87BD:;
    /* $87BD: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_87BE:;
    /* $87BE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x87BE); return;
}

void func_8796_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8796_b1");
#endif
    func_8796_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8799_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8799_b1");
#endif
    func_8796_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_87A5_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_87A5_b1");
#endif
    func_8796_b1_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_87B1_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_87B1_b1");
#endif
    func_8796_b1_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_89F6_b1_body(int _entry) {
    switch (_entry) {
        case 1: goto label_89FB;
    }
label_89F6:;
    /* $89F6: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x3332 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_89F9:;
    /* $89F9: 34 */ maybe_trigger_vblank(4); (void)nes_read((0xFF + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_89FB:;
    /* $89FB: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x0F; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_89FD:;
    /* $89FD: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xFE); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_89FF:;
    /* $89FF: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xFD + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xFD); g_cpu.A=r&0xFF; }
label_8A01:;
    /* $8A01: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x03; g_cpu.S--; if (!nes_dispatch_call(0x797A, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8A01, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8A04:;
    /* $8A04: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x7778 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8A07:;
    /* $8A07: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x2560 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A0A:;
    /* $8A0A: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8A0C:;
    /* $8A0C: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x36 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8A0E:;
    /* $8A0E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0C0D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A11:;
    /* $8A11: 0C */ maybe_trigger_vblank(4); (void)nes_read(0xFD75); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8A14:;
    /* $8A14: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_89F6_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_89F6_b1");
#endif
    func_89F6_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_89FB_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_89FB_b1");
#endif
    func_89F6_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_99A1_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99A1_b1");
#endif
label_99A1:;
    /* $99A1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x81); FLAG_NZ(g_cpu.A);
label_99A3:;
    /* $99A3: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_99A5:;
    /* $99A5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_99B0;
label_99A7:;
    /* $99A7: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_99A9:;
    /* $99A9: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_99B5;
label_99AB:;
    /* $99AB: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_99AD:;
    /* $99AD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8000_b1(); return;
label_99B0:;
    /* $99B0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_99B2:;
    /* $99B2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8003_b1(); return;
label_99B5:;
    /* $99B5: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8006_b1(); return;
}

void func_B594_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B594_b1");
#endif
label_B594:;
    /* $B594: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0670; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B597:;
    /* $B597: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0670); FLAG_NZ(g_cpu.A);
label_B59A:;
    /* $B59A: 8D */ maybe_trigger_vblank(4); nes_write(0x400E, g_cpu.A);
label_B59D:;
    /* $B59D: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B769_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B769_b1");
#endif
label_B769:;
    /* $B769: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B482_b1(); return;
}

void func_BC22_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC22_b1");
#endif
label_BC22:;
    /* $BC22: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_BC23:;
    /* $BC23: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_BC24:;
    /* $BC24: 8D */ maybe_trigger_vblank(4); nes_write(0x400F, g_cpu.A);
label_BC27:;
    /* $BC27: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BBD8_b1(); return;
}

