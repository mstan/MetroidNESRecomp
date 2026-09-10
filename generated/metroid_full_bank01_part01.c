/* metroid_full_bank01_part01.c — PRG bank 1 function bodies (sub-part 1).
 * STANDALONE translation unit — compiled independently (in
 * parallel with every other bank part/sub-part and the
 * umbrella metroid_full.c). Do not compile as part of another TU or
 * edit directly; the source of truth is the recompiler's
 * code_generator.c. Renamed to drop the _partNN suffix if
 * this bank turned out to fit in a single sub-part. */

#include "metroid_full_decls.h"

void func_8A26_b1_body(int _entry) { /* ObjFrame4C */
    switch (_entry) {
        case 1: goto label_8A3C;
    }
label_8A26:; /* ObjFrame4C */
    /* $8A26: 08 */ nes_cpu_instruction_boundary(0x8A26, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8A27:;
    /* $8A27: 10 */ nes_cpu_instruction_boundary(0x8A27, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_8A39; }
label_8A29:;
    /* $8A29: 3D */ nes_cpu_instruction_boundary(0x8A29, 4); g_cpu.A &= nes_read((0x4E3E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8A2C:;
    /* $8A2C: FD */ nes_cpu_instruction_boundary(0x8A2C, 4); { uint8_t m=nes_read((0x3E60 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A2F:;
    /* $8A2F: 3D */ nes_cpu_instruction_boundary(0x8A2F, 4); g_cpu.A &= nes_read((0xFD4E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8A32:;
    /* $8A32: E0 */ nes_cpu_instruction_boundary(0x8A32, 2); { int r=g_cpu.X-0x4E; g_cpu.C=(g_cpu.X>=0x4E)?1:0; FLAG_NZ(r&0xFF); }
label_8A34:;
    /* $8A34: 3E */ nes_cpu_instruction_boundary(0x8A34, 7); { uint16_t a=(0xFD3D + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8A37:;
    /* $8A37: A0 */ nes_cpu_instruction_boundary(0x8A37, 2); g_cpu.Y = 0x4E; FLAG_NZ(g_cpu.Y);
label_8A39:;
    /* $8A39: 3D */ nes_cpu_instruction_boundary(0x8A39, 4); g_cpu.A &= nes_read((0xFF3E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8A3C:; /* ObjFrame_Bomb0 */
    /* $8A3C: 04 */ nes_cpu_instruction_boundary(0x8A3C, 3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8A3E:;
    /* $8A3E: 04 */ nes_cpu_instruction_boundary(0x8A3E, 3); (void)nes_read(0x70); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8A40:;
    /* $8A40: FF */ nes_cpu_instruction_boundary(0x8A40, 7); { uint16_t a=(0x0404 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A43:;
    /* $8A43: 04 */ nes_cpu_instruction_boundary(0x8A43, 3); (void)nes_read(0x71); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8A45:;
    /* $8A45: FF */ nes_cpu_instruction_boundary(0x8A45, 7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A48:;
    /* $8A48: 03 */ nes_cpu_instruction_boundary(0x8A48, 8); { uint16_t a=nes_read16zp((0x86 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A4A:;
    /* $8A4A: 87 */ nes_cpu_instruction_boundary(0x8A4A, 3); nes_write(0x96, g_cpu.A & g_cpu.X); /* SAX */
label_8A4C:;
    /* $8A4C: 97 */ nes_cpu_instruction_boundary(0x8A4C, 4); nes_write((0xFF + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_8A4E:; /* ObjFrame_HighJumpItem */
    /* $8A4E: 0D */ nes_cpu_instruction_boundary(0x8A4E, 4); g_cpu.A |= nes_read(0x0303); FLAG_NZ(g_cpu.A);
label_8A51:;
    /* $8A51: 7B */ nes_cpu_instruction_boundary(0x8A51, 7); { uint16_t a=(0x8B7C + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A54:;
    /* $8A54: 8C */ nes_cpu_instruction_boundary(0x8A54, 4); nes_write(0x0DFF, g_cpu.Y);
label_8A57:;
    /* $8A57: 03 */ nes_cpu_instruction_boundary(0x8A57, 8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A59:;
    /* $8A59: 88 */ nes_cpu_instruction_boundary(0x8A59, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8A5A:;
    /* $8A5A: 67 */ nes_cpu_instruction_boundary(0x8A5A, 5); { uint16_t a=0x98; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A5C:;
    /* $8A5C: 99 */ nes_cpu_instruction_boundary(0x8A5C, 5); nes_write((0x0DFF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8A5F:;
    /* $8A5F: 03 */ nes_cpu_instruction_boundary(0x8A5F, 8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A61:;
    /* $8A61: 80 */ nes_cpu_instruction_boundary(0x8A61, 2); /* NOP */
label_8A63:;
    /* $8A63: 90 */ nes_cpu_instruction_boundary(0x8A63, 2); if (!g_cpu.C) { maybe_trigger_vblank(2); call_by_address(0x89F6); return; }
label_8A65:;
    /* $8A65: FF */ nes_cpu_instruction_boundary(0x8A65, 7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A68:;
    /* $8A68: 03 */ nes_cpu_instruction_boundary(0x8A68, 8); { uint16_t a=nes_read16zp((0x7D + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A6A:;
    /* $8A6A: 7E */ nes_cpu_instruction_boundary(0x8A6A, 7); { uint16_t a=(0x8E8D + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8A6D:;
    /* $8A6D: FF */ nes_cpu_instruction_boundary(0x8A6D, 7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A70:;
    /* $8A70: 03 */ nes_cpu_instruction_boundary(0x8A70, 8); { uint16_t a=nes_read16zp((0x82 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A72:;
    /* $8A72: 83 */ nes_cpu_instruction_boundary(0x8A72, 6); nes_write(nes_read16zp((0x92 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_8A74:;
    /* $8A74: 93 */ nes_cpu_instruction_boundary(0x8A74, 6); /* ILLEGAL $93 — skip 2 */
label_8A76:; /* ObjFrame_WaveBeamItem */
    /* $8A76: 0D */ nes_cpu_instruction_boundary(0x8A76, 4); g_cpu.A |= nes_read(0x0303); FLAG_NZ(g_cpu.A);
label_8A79:;
    /* $8A79: 88 */ nes_cpu_instruction_boundary(0x8A79, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8A7A:;
    /* $8A7A: 89 */ nes_cpu_instruction_boundary(0x8A7A, 2); /* NOP */
label_8A7C:;
    /* $8A7C: 99 */ nes_cpu_instruction_boundary(0x8A7C, 5); nes_write((0x0DFF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8A7F:;
    /* $8A7F: 03 */ nes_cpu_instruction_boundary(0x8A7F, 8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A81:;
    /* $8A81: 88 */ nes_cpu_instruction_boundary(0x8A81, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8A82:;
    /* $8A82: 68 */ nes_cpu_instruction_boundary(0x8A82, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8A83:;
    /* $8A83: 98 */ nes_cpu_instruction_boundary(0x8A83, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8A84:;
    /* $8A84: 99 */ nes_cpu_instruction_boundary(0x8A84, 5); nes_write((0x0DFF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8A87:;
    /* $8A87: 03 */ nes_cpu_instruction_boundary(0x8A87, 8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A89:;
    /* $8A89: 84 */ nes_cpu_instruction_boundary(0x8A89, 3); nes_write(0x85, g_cpu.Y);
label_8A8B:;
    /* $8A8B: 94 */ nes_cpu_instruction_boundary(0x8A8B, 4); nes_write((0x95 + g_cpu.X) & 0xFF, g_cpu.Y);
label_8A8D:;
    /* $8A8D: FF */ nes_cpu_instruction_boundary(0x8A8D, 7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A90:;
    /* $8A90: 03 */ nes_cpu_instruction_boundary(0x8A90, 8); { uint16_t a=nes_read16zp((0x3F + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A92:;
    /* $8A92: FD */ nes_cpu_instruction_boundary(0x8A92, 4); { uint8_t m=nes_read((0x3F40 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A95:;
    /* $8A95: FD */ nes_cpu_instruction_boundary(0x8A95, 4); { uint8_t m=nes_read((0x4F00 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A98:;
    /* $8A98: FD */ nes_cpu_instruction_boundary(0x8A98, 4); { uint8_t m=nes_read((0x4F40 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A9B:;
    /* $8A9B: FF */ nes_cpu_instruction_boundary(0x8A9B, 7); { uint16_t a=(0x0434 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A9E:;
    /* $8A9E: 04 */ nes_cpu_instruction_boundary(0x8A9E, 3); (void)nes_read(0xF2); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8AA0:;
    /* $8AA0: FF */ nes_cpu_instruction_boundary(0x8AA0, 7); { uint16_t a=(0x0004 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8AA3:;
    /* $8AA3: 00 */ nes_cpu_instruction_boundary(0x8AA3, 7); nes_brk_executed(0x8AA3); return;
}

void func_8A26_b1(void) { /* ObjFrame4C */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A26_b1");
#endif
    func_8A26_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8A3C_b1(void) { /* ObjFrame_Bomb0 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A3C_b1");
#endif
    func_8A26_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8A41_b1_body(int _entry) { /* ObjFrame_Bomb1 */
    switch (_entry) {
        case 1: goto label_8A4E;
    }
label_8A41:; /* ObjFrame_Bomb1 */
    /* $8A41: 04 */ nes_cpu_instruction_boundary(0x8A41, 3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8A43:;
    /* $8A43: 04 */ nes_cpu_instruction_boundary(0x8A43, 3); (void)nes_read(0x71); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8A45:;
    /* $8A45: FF */ nes_cpu_instruction_boundary(0x8A45, 7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A48:;
    /* $8A48: 03 */ nes_cpu_instruction_boundary(0x8A48, 8); { uint16_t a=nes_read16zp((0x86 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A4A:;
    /* $8A4A: 87 */ nes_cpu_instruction_boundary(0x8A4A, 3); nes_write(0x96, g_cpu.A & g_cpu.X); /* SAX */
label_8A4C:;
    /* $8A4C: 97 */ nes_cpu_instruction_boundary(0x8A4C, 4); nes_write((0xFF + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_8A4E:; /* ObjFrame_HighJumpItem */
    /* $8A4E: 0D */ nes_cpu_instruction_boundary(0x8A4E, 4); g_cpu.A |= nes_read(0x0303); FLAG_NZ(g_cpu.A);
label_8A51:;
    /* $8A51: 7B */ nes_cpu_instruction_boundary(0x8A51, 7); { uint16_t a=(0x8B7C + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A54:;
    /* $8A54: 8C */ nes_cpu_instruction_boundary(0x8A54, 4); nes_write(0x0DFF, g_cpu.Y);
label_8A57:;
    /* $8A57: 03 */ nes_cpu_instruction_boundary(0x8A57, 8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A59:;
    /* $8A59: 88 */ nes_cpu_instruction_boundary(0x8A59, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8A5A:;
    /* $8A5A: 67 */ nes_cpu_instruction_boundary(0x8A5A, 5); { uint16_t a=0x98; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A5C:;
    /* $8A5C: 99 */ nes_cpu_instruction_boundary(0x8A5C, 5); nes_write((0x0DFF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8A5F:;
    /* $8A5F: 03 */ nes_cpu_instruction_boundary(0x8A5F, 8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A61:;
    /* $8A61: 80 */ nes_cpu_instruction_boundary(0x8A61, 2); /* NOP */
label_8A63:;
    /* $8A63: 90 */ nes_cpu_instruction_boundary(0x8A63, 2); if (!g_cpu.C) { maybe_trigger_vblank(2); call_by_address(0x89F6); return; }
label_8A65:;
    /* $8A65: FF */ nes_cpu_instruction_boundary(0x8A65, 7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A68:;
    /* $8A68: 03 */ nes_cpu_instruction_boundary(0x8A68, 8); { uint16_t a=nes_read16zp((0x7D + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A6A:;
    /* $8A6A: 7E */ nes_cpu_instruction_boundary(0x8A6A, 7); { uint16_t a=(0x8E8D + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8A6D:;
    /* $8A6D: FF */ nes_cpu_instruction_boundary(0x8A6D, 7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A70:;
    /* $8A70: 03 */ nes_cpu_instruction_boundary(0x8A70, 8); { uint16_t a=nes_read16zp((0x82 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A72:;
    /* $8A72: 83 */ nes_cpu_instruction_boundary(0x8A72, 6); nes_write(nes_read16zp((0x92 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_8A74:;
    /* $8A74: 93 */ nes_cpu_instruction_boundary(0x8A74, 6); /* ILLEGAL $93 — skip 2 */
label_8A76:; /* ObjFrame_WaveBeamItem */
    /* $8A76: 0D */ nes_cpu_instruction_boundary(0x8A76, 4); g_cpu.A |= nes_read(0x0303); FLAG_NZ(g_cpu.A);
label_8A79:;
    /* $8A79: 88 */ nes_cpu_instruction_boundary(0x8A79, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8A7A:;
    /* $8A7A: 89 */ nes_cpu_instruction_boundary(0x8A7A, 2); /* NOP */
label_8A7C:;
    /* $8A7C: 99 */ nes_cpu_instruction_boundary(0x8A7C, 5); nes_write((0x0DFF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8A7F:;
    /* $8A7F: 03 */ nes_cpu_instruction_boundary(0x8A7F, 8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A81:;
    /* $8A81: 88 */ nes_cpu_instruction_boundary(0x8A81, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8A82:;
    /* $8A82: 68 */ nes_cpu_instruction_boundary(0x8A82, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8A83:;
    /* $8A83: 98 */ nes_cpu_instruction_boundary(0x8A83, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8A84:;
    /* $8A84: 99 */ nes_cpu_instruction_boundary(0x8A84, 5); nes_write((0x0DFF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8A87:;
    /* $8A87: 03 */ nes_cpu_instruction_boundary(0x8A87, 8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A89:;
    /* $8A89: 84 */ nes_cpu_instruction_boundary(0x8A89, 3); nes_write(0x85, g_cpu.Y);
label_8A8B:;
    /* $8A8B: 94 */ nes_cpu_instruction_boundary(0x8A8B, 4); nes_write((0x95 + g_cpu.X) & 0xFF, g_cpu.Y);
label_8A8D:;
    /* $8A8D: FF */ nes_cpu_instruction_boundary(0x8A8D, 7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A90:;
    /* $8A90: 03 */ nes_cpu_instruction_boundary(0x8A90, 8); { uint16_t a=nes_read16zp((0x3F + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A92:;
    /* $8A92: FD */ nes_cpu_instruction_boundary(0x8A92, 4); { uint8_t m=nes_read((0x3F40 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A95:;
    /* $8A95: FD */ nes_cpu_instruction_boundary(0x8A95, 4); { uint8_t m=nes_read((0x4F00 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A98:;
    /* $8A98: FD */ nes_cpu_instruction_boundary(0x8A98, 4); { uint8_t m=nes_read((0x4F40 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A9B:;
    /* $8A9B: FF */ nes_cpu_instruction_boundary(0x8A9B, 7); { uint16_t a=(0x0434 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A9E:;
    /* $8A9E: 04 */ nes_cpu_instruction_boundary(0x8A9E, 3); (void)nes_read(0xF2); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8AA0:;
    /* $8AA0: FF */ nes_cpu_instruction_boundary(0x8AA0, 7); { uint16_t a=(0x0004 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8AA3:;
    /* $8AA3: 00 */ nes_cpu_instruction_boundary(0x8AA3, 7); nes_brk_executed(0x8AA3); return;
}

void func_8A41_b1(void) { /* ObjFrame_Bomb1 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A41_b1");
#endif
    func_8A41_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8A4E_b1(void) { /* ObjFrame_HighJumpItem */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A4E_b1");
#endif
    func_8A41_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8A46_b1(void) { /* ObjFrame_BombItem */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A46_b1");
#endif
label_8A46:; /* ObjFrame_BombItem */
    /* $8A46: 0D */ nes_cpu_instruction_boundary(0x8A46, 4); g_cpu.A |= nes_read(0x0303); FLAG_NZ(g_cpu.A);
label_8A49:;
    /* $8A49: 86 */ nes_cpu_instruction_boundary(0x8A49, 3); nes_write(0x87, g_cpu.X);
label_8A4B:;
    /* $8A4B: 96 */ nes_cpu_instruction_boundary(0x8A4B, 4); nes_write((0x97 + g_cpu.Y) & 0xFF, g_cpu.X);
label_8A4D:;
    /* $8A4D: FF */ nes_cpu_instruction_boundary(0x8A4D, 7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A50:;
    /* $8A50: 03 */ nes_cpu_instruction_boundary(0x8A50, 8); { uint16_t a=nes_read16zp((0x7B + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A52:;
    /* $8A52: 7C */ nes_cpu_instruction_boundary(0x8A52, 4); (void)nes_read((0x8C8B + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8A55:;
    /* $8A55: FF */ nes_cpu_instruction_boundary(0x8A55, 7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A58:;
    /* $8A58: 03 */ nes_cpu_instruction_boundary(0x8A58, 8); { uint16_t a=nes_read16zp((0x88 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A5A:;
    /* $8A5A: 67 */ nes_cpu_instruction_boundary(0x8A5A, 5); { uint16_t a=0x98; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A5C:;
    /* $8A5C: 99 */ nes_cpu_instruction_boundary(0x8A5C, 5); nes_write((0x0DFF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8A5F:;
    /* $8A5F: 03 */ nes_cpu_instruction_boundary(0x8A5F, 8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A61:;
    /* $8A61: 80 */ nes_cpu_instruction_boundary(0x8A61, 2); /* NOP */
label_8A63:;
    /* $8A63: 90 */ nes_cpu_instruction_boundary(0x8A63, 2); if (!g_cpu.C) { maybe_trigger_vblank(2); call_by_address(0x89F6); return; }
label_8A65:;
    /* $8A65: FF */ nes_cpu_instruction_boundary(0x8A65, 7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A68:;
    /* $8A68: 03 */ nes_cpu_instruction_boundary(0x8A68, 8); { uint16_t a=nes_read16zp((0x7D + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A6A:;
    /* $8A6A: 7E */ nes_cpu_instruction_boundary(0x8A6A, 7); { uint16_t a=(0x8E8D + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8A6D:;
    /* $8A6D: FF */ nes_cpu_instruction_boundary(0x8A6D, 7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A70:;
    /* $8A70: 03 */ nes_cpu_instruction_boundary(0x8A70, 8); { uint16_t a=nes_read16zp((0x82 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A72:;
    /* $8A72: 83 */ nes_cpu_instruction_boundary(0x8A72, 6); nes_write(nes_read16zp((0x92 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_8A74:;
    /* $8A74: 93 */ nes_cpu_instruction_boundary(0x8A74, 6); /* ILLEGAL $93 — skip 2 */
label_8A76:; /* ObjFrame_WaveBeamItem */
    /* $8A76: 0D */ nes_cpu_instruction_boundary(0x8A76, 4); g_cpu.A |= nes_read(0x0303); FLAG_NZ(g_cpu.A);
label_8A79:;
    /* $8A79: 88 */ nes_cpu_instruction_boundary(0x8A79, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8A7A:;
    /* $8A7A: 89 */ nes_cpu_instruction_boundary(0x8A7A, 2); /* NOP */
label_8A7C:;
    /* $8A7C: 99 */ nes_cpu_instruction_boundary(0x8A7C, 5); nes_write((0x0DFF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8A7F:;
    /* $8A7F: 03 */ nes_cpu_instruction_boundary(0x8A7F, 8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A81:;
    /* $8A81: 88 */ nes_cpu_instruction_boundary(0x8A81, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8A82:;
    /* $8A82: 68 */ nes_cpu_instruction_boundary(0x8A82, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8A83:;
    /* $8A83: 98 */ nes_cpu_instruction_boundary(0x8A83, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8A84:;
    /* $8A84: 99 */ nes_cpu_instruction_boundary(0x8A84, 5); nes_write((0x0DFF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8A87:;
    /* $8A87: 03 */ nes_cpu_instruction_boundary(0x8A87, 8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A89:;
    /* $8A89: 84 */ nes_cpu_instruction_boundary(0x8A89, 3); nes_write(0x85, g_cpu.Y);
label_8A8B:;
    /* $8A8B: 94 */ nes_cpu_instruction_boundary(0x8A8B, 4); nes_write((0x95 + g_cpu.X) & 0xFF, g_cpu.Y);
label_8A8D:;
    /* $8A8D: FF */ nes_cpu_instruction_boundary(0x8A8D, 7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A90:;
    /* $8A90: 03 */ nes_cpu_instruction_boundary(0x8A90, 8); { uint16_t a=nes_read16zp((0x3F + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A92:;
    /* $8A92: FD */ nes_cpu_instruction_boundary(0x8A92, 4); { uint8_t m=nes_read((0x3F40 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A95:;
    /* $8A95: FD */ nes_cpu_instruction_boundary(0x8A95, 4); { uint8_t m=nes_read((0x4F00 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A98:;
    /* $8A98: FD */ nes_cpu_instruction_boundary(0x8A98, 4); { uint8_t m=nes_read((0x4F40 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A9B:;
    /* $8A9B: FF */ nes_cpu_instruction_boundary(0x8A9B, 7); { uint16_t a=(0x0434 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A9E:;
    /* $8A9E: 04 */ nes_cpu_instruction_boundary(0x8A9E, 3); (void)nes_read(0xF2); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8AA0:;
    /* $8AA0: FF */ nes_cpu_instruction_boundary(0x8AA0, 7); { uint16_t a=(0x0004 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8AA3:;
    /* $8AA3: 00 */ nes_cpu_instruction_boundary(0x8AA3, 7); nes_brk_executed(0x8AA3); return;
}

void func_8A56_b1(void) { /* ObjFrame_LongBeamItem */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A56_b1");
#endif
label_8A56:; /* ObjFrame_LongBeamItem */
    /* $8A56: 0D */ nes_cpu_instruction_boundary(0x8A56, 4); g_cpu.A |= nes_read(0x0303); FLAG_NZ(g_cpu.A);
label_8A59:;
    /* $8A59: 88 */ nes_cpu_instruction_boundary(0x8A59, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8A5A:;
    /* $8A5A: 67 */ nes_cpu_instruction_boundary(0x8A5A, 5); { uint16_t a=0x98; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A5C:;
    /* $8A5C: 99 */ nes_cpu_instruction_boundary(0x8A5C, 5); nes_write((0x0DFF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8A5F:;
    /* $8A5F: 03 */ nes_cpu_instruction_boundary(0x8A5F, 8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A61:;
    /* $8A61: 80 */ nes_cpu_instruction_boundary(0x8A61, 2); /* NOP */
label_8A63:;
    /* $8A63: 90 */ nes_cpu_instruction_boundary(0x8A63, 2); if (!g_cpu.C) { maybe_trigger_vblank(2); call_by_address(0x89F6); return; }
label_8A65:;
    /* $8A65: FF */ nes_cpu_instruction_boundary(0x8A65, 7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A68:;
    /* $8A68: 03 */ nes_cpu_instruction_boundary(0x8A68, 8); { uint16_t a=nes_read16zp((0x7D + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A6A:;
    /* $8A6A: 7E */ nes_cpu_instruction_boundary(0x8A6A, 7); { uint16_t a=(0x8E8D + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8A6D:;
    /* $8A6D: FF */ nes_cpu_instruction_boundary(0x8A6D, 7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A70:;
    /* $8A70: 03 */ nes_cpu_instruction_boundary(0x8A70, 8); { uint16_t a=nes_read16zp((0x82 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A72:;
    /* $8A72: 83 */ nes_cpu_instruction_boundary(0x8A72, 6); nes_write(nes_read16zp((0x92 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_8A74:;
    /* $8A74: 93 */ nes_cpu_instruction_boundary(0x8A74, 6); /* ILLEGAL $93 — skip 2 */
label_8A76:; /* ObjFrame_WaveBeamItem */
    /* $8A76: 0D */ nes_cpu_instruction_boundary(0x8A76, 4); g_cpu.A |= nes_read(0x0303); FLAG_NZ(g_cpu.A);
label_8A79:;
    /* $8A79: 88 */ nes_cpu_instruction_boundary(0x8A79, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8A7A:;
    /* $8A7A: 89 */ nes_cpu_instruction_boundary(0x8A7A, 2); /* NOP */
label_8A7C:;
    /* $8A7C: 99 */ nes_cpu_instruction_boundary(0x8A7C, 5); nes_write((0x0DFF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8A7F:;
    /* $8A7F: 03 */ nes_cpu_instruction_boundary(0x8A7F, 8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A81:;
    /* $8A81: 88 */ nes_cpu_instruction_boundary(0x8A81, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8A82:;
    /* $8A82: 68 */ nes_cpu_instruction_boundary(0x8A82, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8A83:;
    /* $8A83: 98 */ nes_cpu_instruction_boundary(0x8A83, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8A84:;
    /* $8A84: 99 */ nes_cpu_instruction_boundary(0x8A84, 5); nes_write((0x0DFF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8A87:;
    /* $8A87: 03 */ nes_cpu_instruction_boundary(0x8A87, 8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A89:;
    /* $8A89: 84 */ nes_cpu_instruction_boundary(0x8A89, 3); nes_write(0x85, g_cpu.Y);
label_8A8B:;
    /* $8A8B: 94 */ nes_cpu_instruction_boundary(0x8A8B, 4); nes_write((0x95 + g_cpu.X) & 0xFF, g_cpu.Y);
label_8A8D:;
    /* $8A8D: FF */ nes_cpu_instruction_boundary(0x8A8D, 7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A90:;
    /* $8A90: 03 */ nes_cpu_instruction_boundary(0x8A90, 8); { uint16_t a=nes_read16zp((0x3F + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A92:;
    /* $8A92: FD */ nes_cpu_instruction_boundary(0x8A92, 4); { uint8_t m=nes_read((0x3F40 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A95:;
    /* $8A95: FD */ nes_cpu_instruction_boundary(0x8A95, 4); { uint8_t m=nes_read((0x4F00 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A98:;
    /* $8A98: FD */ nes_cpu_instruction_boundary(0x8A98, 4); { uint8_t m=nes_read((0x4F40 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A9B:;
    /* $8A9B: FF */ nes_cpu_instruction_boundary(0x8A9B, 7); { uint16_t a=(0x0434 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A9E:;
    /* $8A9E: 04 */ nes_cpu_instruction_boundary(0x8A9E, 3); (void)nes_read(0xF2); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8AA0:;
    /* $8AA0: FF */ nes_cpu_instruction_boundary(0x8AA0, 7); { uint16_t a=(0x0004 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8AA3:;
    /* $8AA3: 00 */ nes_cpu_instruction_boundary(0x8AA3, 7); nes_brk_executed(0x8AA3); return;
}

void func_8A5E_b1(void) { /* ObjFrame_ScrewAttackItem */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A5E_b1");
#endif
label_8A5E:; /* ObjFrame_ScrewAttackItem */
    /* $8A5E: 0D */ nes_cpu_instruction_boundary(0x8A5E, 4); g_cpu.A |= nes_read(0x0303); FLAG_NZ(g_cpu.A);
label_8A61:;
    /* $8A61: 80 */ nes_cpu_instruction_boundary(0x8A61, 2); /* NOP */
label_8A63:;
    /* $8A63: 90 */ nes_cpu_instruction_boundary(0x8A63, 2); if (!g_cpu.C) { maybe_trigger_vblank(2); call_by_address(0x89F6); return; }
label_8A65:;
    /* $8A65: FF */ nes_cpu_instruction_boundary(0x8A65, 7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A68:;
    /* $8A68: 03 */ nes_cpu_instruction_boundary(0x8A68, 8); { uint16_t a=nes_read16zp((0x7D + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A6A:;
    /* $8A6A: 7E */ nes_cpu_instruction_boundary(0x8A6A, 7); { uint16_t a=(0x8E8D + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8A6D:;
    /* $8A6D: FF */ nes_cpu_instruction_boundary(0x8A6D, 7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A70:;
    /* $8A70: 03 */ nes_cpu_instruction_boundary(0x8A70, 8); { uint16_t a=nes_read16zp((0x82 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A72:;
    /* $8A72: 83 */ nes_cpu_instruction_boundary(0x8A72, 6); nes_write(nes_read16zp((0x92 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_8A74:;
    /* $8A74: 93 */ nes_cpu_instruction_boundary(0x8A74, 6); /* ILLEGAL $93 — skip 2 */
label_8A76:; /* ObjFrame_WaveBeamItem */
    /* $8A76: 0D */ nes_cpu_instruction_boundary(0x8A76, 4); g_cpu.A |= nes_read(0x0303); FLAG_NZ(g_cpu.A);
label_8A79:;
    /* $8A79: 88 */ nes_cpu_instruction_boundary(0x8A79, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8A7A:;
    /* $8A7A: 89 */ nes_cpu_instruction_boundary(0x8A7A, 2); /* NOP */
label_8A7C:;
    /* $8A7C: 99 */ nes_cpu_instruction_boundary(0x8A7C, 5); nes_write((0x0DFF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8A7F:;
    /* $8A7F: 03 */ nes_cpu_instruction_boundary(0x8A7F, 8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A81:;
    /* $8A81: 88 */ nes_cpu_instruction_boundary(0x8A81, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8A82:;
    /* $8A82: 68 */ nes_cpu_instruction_boundary(0x8A82, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8A83:;
    /* $8A83: 98 */ nes_cpu_instruction_boundary(0x8A83, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8A84:;
    /* $8A84: 99 */ nes_cpu_instruction_boundary(0x8A84, 5); nes_write((0x0DFF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8A87:;
    /* $8A87: 03 */ nes_cpu_instruction_boundary(0x8A87, 8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A89:;
    /* $8A89: 84 */ nes_cpu_instruction_boundary(0x8A89, 3); nes_write(0x85, g_cpu.Y);
label_8A8B:;
    /* $8A8B: 94 */ nes_cpu_instruction_boundary(0x8A8B, 4); nes_write((0x95 + g_cpu.X) & 0xFF, g_cpu.Y);
label_8A8D:;
    /* $8A8D: FF */ nes_cpu_instruction_boundary(0x8A8D, 7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A90:;
    /* $8A90: 03 */ nes_cpu_instruction_boundary(0x8A90, 8); { uint16_t a=nes_read16zp((0x3F + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A92:;
    /* $8A92: FD */ nes_cpu_instruction_boundary(0x8A92, 4); { uint8_t m=nes_read((0x3F40 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A95:;
    /* $8A95: FD */ nes_cpu_instruction_boundary(0x8A95, 4); { uint8_t m=nes_read((0x4F00 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A98:;
    /* $8A98: FD */ nes_cpu_instruction_boundary(0x8A98, 4); { uint8_t m=nes_read((0x4F40 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A9B:;
    /* $8A9B: FF */ nes_cpu_instruction_boundary(0x8A9B, 7); { uint16_t a=(0x0434 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A9E:;
    /* $8A9E: 04 */ nes_cpu_instruction_boundary(0x8A9E, 3); (void)nes_read(0xF2); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8AA0:;
    /* $8AA0: FF */ nes_cpu_instruction_boundary(0x8AA0, 7); { uint16_t a=(0x0004 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8AA3:;
    /* $8AA3: 00 */ nes_cpu_instruction_boundary(0x8AA3, 7); nes_brk_executed(0x8AA3); return;
}

void func_8A66_b1(void) { /* ObjFrame_MaruMariItem */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A66_b1");
#endif
label_8A66:; /* ObjFrame_MaruMariItem */
    /* $8A66: 0D */ nes_cpu_instruction_boundary(0x8A66, 4); g_cpu.A |= nes_read(0x0303); FLAG_NZ(g_cpu.A);
label_8A69:;
    /* $8A69: 7D */ nes_cpu_instruction_boundary(0x8A69, 4); { uint8_t m=nes_read((0x8D7E + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A6C:;
    /* $8A6C: 8E */ nes_cpu_instruction_boundary(0x8A6C, 4); nes_write(0x0DFF, g_cpu.X);
label_8A6F:;
    /* $8A6F: 03 */ nes_cpu_instruction_boundary(0x8A6F, 8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A71:;
    /* $8A71: 82 */ nes_cpu_instruction_boundary(0x8A71, 2); /* NOP */
label_8A73:;
    /* $8A73: 92 */ nes_cpu_instruction_boundary(0x8A73, 2); /* ILLEGAL $92 — skip 1 */
label_8A74:;
    /* $8A74: 93 */ nes_cpu_instruction_boundary(0x8A74, 6); /* ILLEGAL $93 — skip 2 */
label_8A76:; /* ObjFrame_WaveBeamItem */
    /* $8A76: 0D */ nes_cpu_instruction_boundary(0x8A76, 4); g_cpu.A |= nes_read(0x0303); FLAG_NZ(g_cpu.A);
label_8A79:;
    /* $8A79: 88 */ nes_cpu_instruction_boundary(0x8A79, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8A7A:;
    /* $8A7A: 89 */ nes_cpu_instruction_boundary(0x8A7A, 2); /* NOP */
label_8A7C:;
    /* $8A7C: 99 */ nes_cpu_instruction_boundary(0x8A7C, 5); nes_write((0x0DFF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8A7F:;
    /* $8A7F: 03 */ nes_cpu_instruction_boundary(0x8A7F, 8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A81:;
    /* $8A81: 88 */ nes_cpu_instruction_boundary(0x8A81, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8A82:;
    /* $8A82: 68 */ nes_cpu_instruction_boundary(0x8A82, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8A83:;
    /* $8A83: 98 */ nes_cpu_instruction_boundary(0x8A83, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8A84:;
    /* $8A84: 99 */ nes_cpu_instruction_boundary(0x8A84, 5); nes_write((0x0DFF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8A87:;
    /* $8A87: 03 */ nes_cpu_instruction_boundary(0x8A87, 8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A89:;
    /* $8A89: 84 */ nes_cpu_instruction_boundary(0x8A89, 3); nes_write(0x85, g_cpu.Y);
label_8A8B:;
    /* $8A8B: 94 */ nes_cpu_instruction_boundary(0x8A8B, 4); nes_write((0x95 + g_cpu.X) & 0xFF, g_cpu.Y);
label_8A8D:;
    /* $8A8D: FF */ nes_cpu_instruction_boundary(0x8A8D, 7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A90:;
    /* $8A90: 03 */ nes_cpu_instruction_boundary(0x8A90, 8); { uint16_t a=nes_read16zp((0x3F + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A92:;
    /* $8A92: FD */ nes_cpu_instruction_boundary(0x8A92, 4); { uint8_t m=nes_read((0x3F40 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A95:;
    /* $8A95: FD */ nes_cpu_instruction_boundary(0x8A95, 4); { uint8_t m=nes_read((0x4F00 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A98:;
    /* $8A98: FD */ nes_cpu_instruction_boundary(0x8A98, 4); { uint8_t m=nes_read((0x4F40 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A9B:;
    /* $8A9B: FF */ nes_cpu_instruction_boundary(0x8A9B, 7); { uint16_t a=(0x0434 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A9E:;
    /* $8A9E: 04 */ nes_cpu_instruction_boundary(0x8A9E, 3); (void)nes_read(0xF2); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8AA0:;
    /* $8AA0: FF */ nes_cpu_instruction_boundary(0x8AA0, 7); { uint16_t a=(0x0004 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8AA3:;
    /* $8AA3: 00 */ nes_cpu_instruction_boundary(0x8AA3, 7); nes_brk_executed(0x8AA3); return;
}

void func_8A6E_b1_body(int _entry) { /* ObjFrame_VariaSuitItem */
    switch (_entry) {
        case 1: goto label_8A76;
    }
label_8A6E:; /* ObjFrame_VariaSuitItem */
    /* $8A6E: 0D */ nes_cpu_instruction_boundary(0x8A6E, 4); g_cpu.A |= nes_read(0x0303); FLAG_NZ(g_cpu.A);
label_8A71:;
    /* $8A71: 82 */ nes_cpu_instruction_boundary(0x8A71, 2); /* NOP */
label_8A73:;
    /* $8A73: 92 */ nes_cpu_instruction_boundary(0x8A73, 2); /* ILLEGAL $92 — skip 1 */
label_8A74:;
    /* $8A74: 93 */ nes_cpu_instruction_boundary(0x8A74, 6); /* ILLEGAL $93 — skip 2 */
label_8A76:; /* ObjFrame_WaveBeamItem */
    /* $8A76: 0D */ nes_cpu_instruction_boundary(0x8A76, 4); g_cpu.A |= nes_read(0x0303); FLAG_NZ(g_cpu.A);
label_8A79:;
    /* $8A79: 88 */ nes_cpu_instruction_boundary(0x8A79, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8A7A:;
    /* $8A7A: 89 */ nes_cpu_instruction_boundary(0x8A7A, 2); /* NOP */
label_8A7C:;
    /* $8A7C: 99 */ nes_cpu_instruction_boundary(0x8A7C, 5); nes_write((0x0DFF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8A7F:;
    /* $8A7F: 03 */ nes_cpu_instruction_boundary(0x8A7F, 8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A81:;
    /* $8A81: 88 */ nes_cpu_instruction_boundary(0x8A81, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8A82:;
    /* $8A82: 68 */ nes_cpu_instruction_boundary(0x8A82, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8A83:;
    /* $8A83: 98 */ nes_cpu_instruction_boundary(0x8A83, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8A84:;
    /* $8A84: 99 */ nes_cpu_instruction_boundary(0x8A84, 5); nes_write((0x0DFF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8A87:;
    /* $8A87: 03 */ nes_cpu_instruction_boundary(0x8A87, 8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A89:;
    /* $8A89: 84 */ nes_cpu_instruction_boundary(0x8A89, 3); nes_write(0x85, g_cpu.Y);
label_8A8B:;
    /* $8A8B: 94 */ nes_cpu_instruction_boundary(0x8A8B, 4); nes_write((0x95 + g_cpu.X) & 0xFF, g_cpu.Y);
label_8A8D:;
    /* $8A8D: FF */ nes_cpu_instruction_boundary(0x8A8D, 7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A90:;
    /* $8A90: 03 */ nes_cpu_instruction_boundary(0x8A90, 8); { uint16_t a=nes_read16zp((0x3F + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A92:;
    /* $8A92: FD */ nes_cpu_instruction_boundary(0x8A92, 4); { uint8_t m=nes_read((0x3F40 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A95:;
    /* $8A95: FD */ nes_cpu_instruction_boundary(0x8A95, 4); { uint8_t m=nes_read((0x4F00 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A98:;
    /* $8A98: FD */ nes_cpu_instruction_boundary(0x8A98, 4); { uint8_t m=nes_read((0x4F40 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A9B:;
    /* $8A9B: FF */ nes_cpu_instruction_boundary(0x8A9B, 7); { uint16_t a=(0x0434 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A9E:;
    /* $8A9E: 04 */ nes_cpu_instruction_boundary(0x8A9E, 3); (void)nes_read(0xF2); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8AA0:;
    /* $8AA0: FF */ nes_cpu_instruction_boundary(0x8AA0, 7); { uint16_t a=(0x0004 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8AA3:;
    /* $8AA3: 00 */ nes_cpu_instruction_boundary(0x8AA3, 7); nes_brk_executed(0x8AA3); return;
}

void func_8A6E_b1(void) { /* ObjFrame_VariaSuitItem */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A6E_b1");
#endif
    func_8A6E_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8A76_b1(void) { /* ObjFrame_WaveBeamItem */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A76_b1");
#endif
    func_8A6E_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8A7E_b1(void) { /* ObjFrame_IceBeamItem */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A7E_b1");
#endif
label_8A7E:; /* ObjFrame_IceBeamItem */
    /* $8A7E: 0D */ nes_cpu_instruction_boundary(0x8A7E, 4); g_cpu.A |= nes_read(0x0303); FLAG_NZ(g_cpu.A);
label_8A81:;
    /* $8A81: 88 */ nes_cpu_instruction_boundary(0x8A81, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8A82:;
    /* $8A82: 68 */ nes_cpu_instruction_boundary(0x8A82, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8A83:;
    /* $8A83: 98 */ nes_cpu_instruction_boundary(0x8A83, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8A84:;
    /* $8A84: 99 */ nes_cpu_instruction_boundary(0x8A84, 5); nes_write((0x0DFF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8A87:;
    /* $8A87: 03 */ nes_cpu_instruction_boundary(0x8A87, 8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A89:;
    /* $8A89: 84 */ nes_cpu_instruction_boundary(0x8A89, 3); nes_write(0x85, g_cpu.Y);
label_8A8B:;
    /* $8A8B: 94 */ nes_cpu_instruction_boundary(0x8A8B, 4); nes_write((0x95 + g_cpu.X) & 0xFF, g_cpu.Y);
label_8A8D:;
    /* $8A8D: FF */ nes_cpu_instruction_boundary(0x8A8D, 7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A90:;
    /* $8A90: 03 */ nes_cpu_instruction_boundary(0x8A90, 8); { uint16_t a=nes_read16zp((0x3F + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A92:;
    /* $8A92: FD */ nes_cpu_instruction_boundary(0x8A92, 4); { uint8_t m=nes_read((0x3F40 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A95:;
    /* $8A95: FD */ nes_cpu_instruction_boundary(0x8A95, 4); { uint8_t m=nes_read((0x4F00 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A98:;
    /* $8A98: FD */ nes_cpu_instruction_boundary(0x8A98, 4); { uint8_t m=nes_read((0x4F40 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A9B:;
    /* $8A9B: FF */ nes_cpu_instruction_boundary(0x8A9B, 7); { uint16_t a=(0x0434 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A9E:;
    /* $8A9E: 04 */ nes_cpu_instruction_boundary(0x8A9E, 3); (void)nes_read(0xF2); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8AA0:;
    /* $8AA0: FF */ nes_cpu_instruction_boundary(0x8AA0, 7); { uint16_t a=(0x0004 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8AA3:;
    /* $8AA3: 00 */ nes_cpu_instruction_boundary(0x8AA3, 7); nes_brk_executed(0x8AA3); return;
}

void func_8A86_b1(void) { /* ObjFrame_EnergyTankItem */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A86_b1");
#endif
label_8A86:; /* ObjFrame_EnergyTankItem */
    /* $8A86: 0D */ nes_cpu_instruction_boundary(0x8A86, 4); g_cpu.A |= nes_read(0x0303); FLAG_NZ(g_cpu.A);
label_8A89:;
    /* $8A89: 84 */ nes_cpu_instruction_boundary(0x8A89, 3); nes_write(0x85, g_cpu.Y);
label_8A8B:;
    /* $8A8B: 94 */ nes_cpu_instruction_boundary(0x8A8B, 4); nes_write((0x95 + g_cpu.X) & 0xFF, g_cpu.Y);
label_8A8D:;
    /* $8A8D: FF */ nes_cpu_instruction_boundary(0x8A8D, 7); { uint16_t a=(0x030D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A90:;
    /* $8A90: 03 */ nes_cpu_instruction_boundary(0x8A90, 8); { uint16_t a=nes_read16zp((0x3F + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A92:;
    /* $8A92: FD */ nes_cpu_instruction_boundary(0x8A92, 4); { uint8_t m=nes_read((0x3F40 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A95:;
    /* $8A95: FD */ nes_cpu_instruction_boundary(0x8A95, 4); { uint8_t m=nes_read((0x4F00 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A98:;
    /* $8A98: FD */ nes_cpu_instruction_boundary(0x8A98, 4); { uint8_t m=nes_read((0x4F40 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A9B:;
    /* $8A9B: FF */ nes_cpu_instruction_boundary(0x8A9B, 7); { uint16_t a=(0x0434 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A9E:;
    /* $8A9E: 04 */ nes_cpu_instruction_boundary(0x8A9E, 3); (void)nes_read(0xF2); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8AA0:;
    /* $8AA0: FF */ nes_cpu_instruction_boundary(0x8AA0, 7); { uint16_t a=(0x0004 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8AA3:;
    /* $8AA3: 00 */ nes_cpu_instruction_boundary(0x8AA3, 7); nes_brk_executed(0x8AA3); return;
}

void func_8A8E_b1(void) { /* ObjFrame_MissileItem */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A8E_b1");
#endif
label_8A8E:; /* ObjFrame_MissileItem */
    /* $8A8E: 0D */ nes_cpu_instruction_boundary(0x8A8E, 4); g_cpu.A |= nes_read(0x0303); FLAG_NZ(g_cpu.A);
label_8A91:;
    /* $8A91: 3F */ nes_cpu_instruction_boundary(0x8A91, 7); { uint16_t a=(0x40FD + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8A94:;
    /* $8A94: 3F */ nes_cpu_instruction_boundary(0x8A94, 7); { uint16_t a=(0x00FD + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8A97:;
    /* $8A97: 4F */ nes_cpu_instruction_boundary(0x8A97, 6); { uint16_t a=0x40FD; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8A9A:;
    /* $8A9A: 4F */ nes_cpu_instruction_boundary(0x8A9A, 6); { uint16_t a=0x34FF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8A9D:;
    /* $8A9D: 04 */ nes_cpu_instruction_boundary(0x8A9D, 3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8A9F:;
    /* $8A9F: F2 */ nes_cpu_instruction_boundary(0x8A9F, 2); /* ILLEGAL $F2 — skip 1 */
label_8AA0:;
    /* $8AA0: FF */ nes_cpu_instruction_boundary(0x8AA0, 7); { uint16_t a=(0x0004 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8AA3:;
    /* $8AA3: 00 */ nes_cpu_instruction_boundary(0x8AA3, 7); nes_brk_executed(0x8AA3); return;
}

void func_8A9C_b1(void) { /* ObjFrame_SkreeProjectile */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A9C_b1");
#endif
label_8A9C:; /* ObjFrame_SkreeProjectile */
    /* $8A9C: 34 */ nes_cpu_instruction_boundary(0x8A9C, 4); (void)nes_read((0x04 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8A9E:;
    /* $8A9E: 04 */ nes_cpu_instruction_boundary(0x8A9E, 3); (void)nes_read(0xF2); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8AA0:;
    /* $8AA0: FF */ nes_cpu_instruction_boundary(0x8AA0, 7); { uint16_t a=(0x0004 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8AA3:;
    /* $8AA3: 00 */ nes_cpu_instruction_boundary(0x8AA3, 7); nes_brk_executed(0x8AA3); return;
}

void func_8AA1_b1(void) { /* ObjFrame5B */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8AA1_b1");
#endif
label_8AA1:; /* ObjFrame5B */
    /* $8AA1: 04 */ nes_cpu_instruction_boundary(0x8AA1, 3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8AA3:;
    /* $8AA3: 00 */ nes_cpu_instruction_boundary(0x8AA3, 7); nes_brk_executed(0x8AA3); return;
}

void func_8AA6_b1(void) { /* ObjFrame5C */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8AA6_b1");
#endif
label_8AA6:; /* ObjFrame5C */
    /* $8AA6: 13 */ nes_cpu_instruction_boundary(0x8AA6, 8); { uint16_t a=(nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8AA8:;
    /* $8AA8: 00 */ nes_cpu_instruction_boundary(0x8AA8, 7); nes_brk_executed(0x8AA8); return;
}

void func_8AC4_b1_body(int _entry) { /* ObjFrame5F */
    switch (_entry) {
        case 1: goto label_8AD8;
        case 2: goto label_8AE9;
    }
label_8AC4:; /* ObjFrame5F */
    /* $8AC4: 1E */ nes_cpu_instruction_boundary(0x8AC4, 7); { uint16_t a=(0x0800 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8AC7:;
    /* $8AC7: FA */ nes_cpu_instruction_boundary(0x8AC7, 2); /* NOP */
label_8AC8:;
    /* $8AC8: FB */ nes_cpu_instruction_boundary(0x8AC8, 7); { uint16_t a=(0xFBFA + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8ACB:;
    /* $8ACB: FC */ nes_cpu_instruction_boundary(0x8ACB, 4); (void)nes_read((0x0400 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8ACE:;
    /* $8ACE: C5 */ nes_cpu_instruction_boundary(0x8ACE, 3); { uint8_t m=nes_read(0xC6); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8AD0:;
    /* $8AD0: C7 */ nes_cpu_instruction_boundary(0x8AD0, 5); { uint16_t a=0xD5; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8AD2:;
    /* $8AD2: D6 */ nes_cpu_instruction_boundary(0x8AD2, 6); { uint16_t a=(0xD7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8AD4:;
    /* $8AD4: E5 */ nes_cpu_instruction_boundary(0x8AD4, 3); { uint8_t m=nes_read(0xE6); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8AD6:;
    /* $8AD6: E7 */ nes_cpu_instruction_boundary(0x8AD6, 5); { uint16_t a=0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8AD8:; /* ObjFrame_RidleyStatue */
    /* $8AD8: 1E */ nes_cpu_instruction_boundary(0x8AD8, 7); { uint16_t a=(0x0800 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8ADB:;
    /* $8ADB: FA */ nes_cpu_instruction_boundary(0x8ADB, 2); /* NOP */
label_8ADC:;
    /* $8ADC: FB */ nes_cpu_instruction_boundary(0x8ADC, 7); { uint16_t a=(0xFBFA + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8ADF:;
    /* $8ADF: FE */ nes_cpu_instruction_boundary(0x8ADF, 7); { uint16_t a=(0xC9C8 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8AE2:;
    /* $8AE2: EB */ nes_cpu_instruction_boundary(0x8AE2, 2); { uint8_t m=0xD8; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8AE4:;
    /* $8AE4: D9 */ nes_cpu_instruction_boundary(0x8AE4, 4); { uint8_t m=nes_read((0xE8EA + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8AE7:;
    /* $8AE7: E9 */ nes_cpu_instruction_boundary(0x8AE7, 2); { uint8_t m=0xFF; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8AE9:; /* ObjFrame_MissileExplode0 */
    /* $8AE9: 0A */ nes_cpu_instruction_boundary(0x8AE9, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8AEA:;
    /* $8AEA: 04 */ nes_cpu_instruction_boundary(0x8AEA, 3); (void)nes_read(0x08); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8AEC:;
    /* $8AEC: FD */ nes_cpu_instruction_boundary(0x8AEC, 4); { uint8_t m=nes_read((0x5700 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8AEF:;
    /* $8AEF: FD */ nes_cpu_instruction_boundary(0x8AEF, 4); { uint8_t m=nes_read((0x5740 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8AF2:;
    /* $8AF2: FF */ nes_cpu_instruction_boundary(0x8AF2, 7); { uint16_t a=(0x040B + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8AF5:;
    /* $8AF5: 0C */ nes_cpu_instruction_boundary(0x8AF5, 4); (void)nes_read(0x00FD); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8AF8:;
    /* $8AF8: 57 */ nes_cpu_instruction_boundary(0x8AF8, 6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8AFA:;
    /* $8AFA: FD */ nes_cpu_instruction_boundary(0x8AFA, 4); { uint8_t m=nes_read((0x1840 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8AFD:;
    /* $8AFD: 57 */ nes_cpu_instruction_boundary(0x8AFD, 6); { uint16_t a=(0xFD + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8AFF:;
    /* $8AFF: C0 */ nes_cpu_instruction_boundary(0x8AFF, 2); { int r=g_cpu.Y-0x18; g_cpu.C=(g_cpu.Y>=0x18)?1:0; FLAG_NZ(r&0xFF); }
label_8B01:;
    /* $8B01: 18 */ nes_cpu_instruction_boundary(0x8B01, 2); g_cpu.C = 0;
label_8B02:;
    /* $8B02: FF */ nes_cpu_instruction_boundary(0x8B02, 7); { uint16_t a=(0x040C + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8B05:;
    /* $8B05: 10 */ nes_cpu_instruction_boundary(0x8B05, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0x8B04); return; }
label_8B07:;
    /* $8B07: 00 */ nes_cpu_instruction_boundary(0x8B07, 7); nes_brk_executed(0x8B07); return;
}

void func_8AC4_b1(void) { /* ObjFrame5F */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8AC4_b1");
#endif
    func_8AC4_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8AD8_b1(void) { /* ObjFrame_RidleyStatue */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8AD8_b1");
#endif
    func_8AC4_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8AE9_b1(void) { /* ObjFrame_MissileExplode0 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8AE9_b1");
#endif
    func_8AC4_b1_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8AF3_b1(void) { /* ObjFrame_MissileExplode1 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8AF3_b1");
#endif
label_8AF3:; /* ObjFrame_MissileExplode1 */
    /* $8AF3: 0B */ nes_cpu_instruction_boundary(0x8AF3, 2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_8AF5:;
    /* $8AF5: 0C */ nes_cpu_instruction_boundary(0x8AF5, 4); (void)nes_read(0x00FD); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8AF8:;
    /* $8AF8: 57 */ nes_cpu_instruction_boundary(0x8AF8, 6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8AFA:;
    /* $8AFA: FD */ nes_cpu_instruction_boundary(0x8AFA, 4); { uint8_t m=nes_read((0x1840 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8AFD:;
    /* $8AFD: 57 */ nes_cpu_instruction_boundary(0x8AFD, 6); { uint16_t a=(0xFD + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8AFF:;
    /* $8AFF: C0 */ nes_cpu_instruction_boundary(0x8AFF, 2); { int r=g_cpu.Y-0x18; g_cpu.C=(g_cpu.Y>=0x18)?1:0; FLAG_NZ(r&0xFF); }
label_8B01:;
    /* $8B01: 18 */ nes_cpu_instruction_boundary(0x8B01, 2); g_cpu.C = 0;
label_8B02:;
    /* $8B02: FF */ nes_cpu_instruction_boundary(0x8B02, 7); { uint16_t a=(0x040C + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8B05:;
    /* $8B05: 10 */ nes_cpu_instruction_boundary(0x8B05, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0x8B04); return; }
label_8B07:;
    /* $8B07: 00 */ nes_cpu_instruction_boundary(0x8B07, 7); nes_brk_executed(0x8B07); return;
}

void func_8B03_b1(void) { /* ObjFrame_MissileExplode2 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8B03_b1");
#endif
label_8B03:; /* ObjFrame_MissileExplode2 */
    /* $8B03: 0C */ nes_cpu_instruction_boundary(0x8B03, 4); (void)nes_read(0x1004); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8B06:;
    /* $8B06: FD */ nes_cpu_instruction_boundary(0x8B06, 4); { uint8_t m=nes_read((0x5700 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8B09:;
    /* $8B09: 18 */ nes_cpu_instruction_boundary(0x8B09, 2); g_cpu.C = 0;
label_8B0A:;
    /* $8B0A: FD */ nes_cpu_instruction_boundary(0x8B0A, 4); { uint8_t m=nes_read((0x1840 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8B0D:;
    /* $8B0D: 57 */ nes_cpu_instruction_boundary(0x8B0D, 6); { uint16_t a=(0xFD + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8B0F:;
    /* $8B0F: C0 */ nes_cpu_instruction_boundary(0x8B0F, 2); { int r=g_cpu.Y-0x18; g_cpu.C=(g_cpu.Y>=0x18)?1:0; FLAG_NZ(r&0xFF); }
label_8B11:;
    /* $8B11: 18 */ nes_cpu_instruction_boundary(0x8B11, 2); g_cpu.C = 0;
label_8B12:;
    /* $8B12: FF */ nes_cpu_instruction_boundary(0x8B12, 7); { uint16_t a=(0x56A5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
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
    /* $8B56: 20 */ nes_cpu_instruction_boundary(0x8B56, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x58; g_cpu.S--; func_8B74_b1();
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
    /* $8B6D: 20 */ nes_cpu_instruction_boundary(0x8B6D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6F; g_cpu.S--; func_8B53_b1();
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

void func_95C6_b1(void) { /* TwosComplement_ */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95C6_b1");
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

void func_99B8_b1(void) { /* SidehopperFloorAIRoutine_BANK1 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99B8_b1");
#endif
label_99B8:; /* SidehopperFloorAIRoutine_BANK1 */
    /* $99B8: A9 */ nes_cpu_instruction_boundary(0x99B8, 2); g_cpu.A = 0x09; FLAG_NZ(g_cpu.A);
label_99BA:; /* Sidehopper_Common_BANK1 */
    /* $99BA: 85 */ nes_cpu_instruction_boundary(0x99BA, 3); nes_write(0x85, g_cpu.A);
label_99BC:;
    /* $99BC: 85 */ nes_cpu_instruction_boundary(0x99BC, 3); nes_write(0x86, g_cpu.A);
label_99BE:;
    /* $99BE: BD */ nes_cpu_instruction_boundary(0x99BE, 4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_99C1:;
    /* $99C1: C9 */ nes_cpu_instruction_boundary(0x99C1, 2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_99C3:;
    /* $99C3: F0 */ nes_cpu_instruction_boundary(0x99C3, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_99C8; }
label_99C5:;
    /* $99C5: 20 */ nes_cpu_instruction_boundary(0x99C5, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC7; g_cpu.S--; func_801B_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x99C5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_99C8:; /* CommonEnemyStub2_BANK1 */
    /* $99C8: A9 */ nes_cpu_instruction_boundary(0x99C8, 2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_99CA:;
    /* $99CA: 85 */ nes_cpu_instruction_boundary(0x99CA, 3); nes_write(0x00, g_cpu.A);
label_99CC:; /* CommonEnemyStub_BANK1 */
    /* $99CC: A9 */ nes_cpu_instruction_boundary(0x99CC, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_99CE:;
    /* $99CE: 85 */ nes_cpu_instruction_boundary(0x99CE, 3); nes_write(0x01, g_cpu.A);
label_99D0:;
    /* $99D0: 4C */ nes_cpu_instruction_boundary(0x99D0, 3); nes_cpu_instruction_boundary(0x99A1, 2); func_99A1_b1(); return;
}

void func_99FA_b1_body(int _entry) { /* SkreeAIRoutine_BANK1 */
    switch (_entry) {
        case 1: goto label_9A44;
        case 2: goto label_9A49;
    }
label_99FA:; /* SkreeAIRoutine_BANK1 */
    /* $99FA: A5 */ nes_cpu_instruction_boundary(0x99FA, 3); g_cpu.A = nes_read(0x81); FLAG_NZ(g_cpu.A);
label_99FC:;
    /* $99FC: C9 */ nes_cpu_instruction_boundary(0x99FC, 2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_99FE:;
    /* $99FE: F0 */ nes_cpu_instruction_boundary(0x99FE, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A44; }
label_9A00:;
    /* $9A00: C9 */ nes_cpu_instruction_boundary(0x9A00, 2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_9A02:;
    /* $9A02: F0 */ nes_cpu_instruction_boundary(0x9A02, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A49; }
label_9A04:;
    /* $9A04: BD */ nes_cpu_instruction_boundary(0x9A04, 4); g_cpu.A = nes_read((0x0406 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A07:;
    /* $9A07: C9 */ nes_cpu_instruction_boundary(0x9A07, 2); { int r=g_cpu.A-0x0F; g_cpu.C=(g_cpu.A>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_9A09:;
    /* $9A09: 90 */ nes_cpu_instruction_boundary(0x9A09, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9A3F; }
label_9A0B:;
    /* $9A0B: C9 */ nes_cpu_instruction_boundary(0x9A0B, 2); { int r=g_cpu.A-0x11; g_cpu.C=(g_cpu.A>=0x11)?1:0; FLAG_NZ(r&0xFF); }
label_9A0D:;
    /* $9A0D: B0 */ nes_cpu_instruction_boundary(0x9A0D, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9A16; }
label_9A0F:;
    /* $9A0F: A9 */ nes_cpu_instruction_boundary(0x9A0F, 2); g_cpu.A = 0x3A; FLAG_NZ(g_cpu.A);
label_9A11:;
    /* $9A11: 9D */ nes_cpu_instruction_boundary(0x9A11, 5); nes_write((0x6B01 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9A14:;
    /* $9A14: D0 */ nes_cpu_instruction_boundary(0x9A14, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A3F; }
label_9A16:; /* SkreeBlowUpIntoProjectiles_BANK1 */
    /* $9A16: DE */ nes_cpu_instruction_boundary(0x9A16, 7); { uint16_t a=(0x6B01 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9A19:;
    /* $9A19: D0 */ nes_cpu_instruction_boundary(0x9A19, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A3F; }
label_9A1B:;
    /* $9A1B: A9 */ nes_cpu_instruction_boundary(0x9A1B, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9A1D:;
    /* $9A1D: 9D */ nes_cpu_instruction_boundary(0x9A1D, 5); nes_write((0x6AF4 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9A20:;
    /* $9A20: A0 */ nes_cpu_instruction_boundary(0x9A20, 2); g_cpu.Y = 0x0C; FLAG_NZ(g_cpu.Y);
label_9A22:; /* SkreeBlowUpIntoProjectiles_BANK1_loop */
    /* $9A22: A9 */ nes_cpu_instruction_boundary(0x9A22, 2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_9A24:;
    /* $9A24: 99 */ nes_cpu_instruction_boundary(0x9A24, 5); nes_write((0x00A0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A27:;
    /* $9A27: BD */ nes_cpu_instruction_boundary(0x9A27, 4); g_cpu.A = nes_read((0x0400 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A2A:;
    /* $9A2A: 99 */ nes_cpu_instruction_boundary(0x9A2A, 5); nes_write((0x00A1 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A2D:;
    /* $9A2D: BD */ nes_cpu_instruction_boundary(0x9A2D, 4); g_cpu.A = nes_read((0x0401 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A30:;
    /* $9A30: 99 */ nes_cpu_instruction_boundary(0x9A30, 5); nes_write((0x00A2 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A33:;
    /* $9A33: BD */ nes_cpu_instruction_boundary(0x9A33, 4); g_cpu.A = nes_read((0x6AFB + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A36:;
    /* $9A36: 99 */ nes_cpu_instruction_boundary(0x9A36, 5); nes_write((0x00A3 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A39:;
    /* $9A39: 88 */ nes_cpu_instruction_boundary(0x9A39, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A3A:;
    /* $9A3A: 88 */ nes_cpu_instruction_boundary(0x9A3A, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A3B:;
    /* $9A3B: 88 */ nes_cpu_instruction_boundary(0x9A3B, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A3C:;
    /* $9A3C: 88 */ nes_cpu_instruction_boundary(0x9A3C, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A3D:;
    /* $9A3D: 10 */ nes_cpu_instruction_boundary(0x9A3D, 2); if (!g_cpu.N) {
    nes_cpu_instruction_boundary(0x9A22, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9A22;
    }
label_9A3F:; /* SkreeExit_Active_BANK1 */
    /* $9A3F: A9 */ nes_cpu_instruction_boundary(0x9A3F, 2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_9A41:;
    /* $9A41: 4C */ nes_cpu_instruction_boundary(0x9A41, 3); nes_cpu_instruction_boundary(0x8000, 2); func_8000_b1(); return;
label_9A44:; /* SkreeExit_Resting_BANK1 */
    /* $9A44: A9 */ nes_cpu_instruction_boundary(0x9A44, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_9A46:;
    /* $9A46: 4C */ nes_cpu_instruction_boundary(0x9A46, 3); nes_cpu_instruction_boundary(0x8003, 2); func_8003_b1(); return;
label_9A49:; /* SkreeExit_Explode_BANK1 */
    /* $9A49: 4C */ nes_cpu_instruction_boundary(0x9A49, 3); nes_cpu_instruction_boundary(0x8006, 2); func_8006_b1(); return;
}

void func_99FA_b1(void) { /* SkreeAIRoutine_BANK1 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99FA_b1");
#endif
    func_99FA_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9A44_b1(void) { /* SkreeExit_Resting_BANK1 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A44_b1");
#endif
    func_99FA_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9A49_b1(void) { /* SkreeExit_Explode_BANK1 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A49_b1");
#endif
    func_99FA_b1_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9A4C_b1(void) { /* CrawlerAIRoutine_BANK1 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A4C_b1");
#endif
label_9A4C:; /* CrawlerAIRoutine_BANK1 */
    /* $9A4C: 20 */ nes_cpu_instruction_boundary(0x9A4C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x4E; g_cpu.S--; func_8009_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9A4C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9A4F:;
    /* $9A4F: 29 */ nes_cpu_instruction_boundary(0x9A4F, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_9A51:;
    /* $9A51: F0 */ nes_cpu_instruction_boundary(0x9A51, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A87; }
label_9A53:;
    /* $9A53: A5 */ nes_cpu_instruction_boundary(0x9A53, 3); g_cpu.A = nes_read(0x81); FLAG_NZ(g_cpu.A);
label_9A55:;
    /* $9A55: C9 */ nes_cpu_instruction_boundary(0x9A55, 2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_9A57:;
    /* $9A57: F0 */ nes_cpu_instruction_boundary(0x9A57, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0x9A44); return; }
label_9A59:;
    /* $9A59: C9 */ nes_cpu_instruction_boundary(0x9A59, 2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_9A5B:;
    /* $9A5B: F0 */ nes_cpu_instruction_boundary(0x9A5B, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0x9A49); return; }
label_9A5D:;
    /* $9A5D: BD */ nes_cpu_instruction_boundary(0x9A5D, 4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A60:;
    /* $9A60: C9 */ nes_cpu_instruction_boundary(0x9A60, 2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_9A62:;
    /* $9A62: F0 */ nes_cpu_instruction_boundary(0x9A62, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A87; }
label_9A64:;
    /* $9A64: BD */ nes_cpu_instruction_boundary(0x9A64, 4); g_cpu.A = nes_read((0x040A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A67:;
    /* $9A67: 29 */ nes_cpu_instruction_boundary(0x9A67, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_9A69:;
    /* $9A69: C9 */ nes_cpu_instruction_boundary(0x9A69, 2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_9A6B:;
    /* $9A6B: D0 */ nes_cpu_instruction_boundary(0x9A6B, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A7E; }
label_9A6D:;
    /* $9A6D: BC */ nes_cpu_instruction_boundary(0x9A6D, 4); g_cpu.Y = nes_read((0x0400 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_9A70:;
    /* $9A70: C0 */ nes_cpu_instruction_boundary(0x9A70, 2); { int r=g_cpu.Y-0xE4; g_cpu.C=(g_cpu.Y>=0xE4)?1:0; FLAG_NZ(r&0xFF); }
label_9A72:;
    /* $9A72: D0 */ nes_cpu_instruction_boundary(0x9A72, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A7E; }
label_9A74:;
    /* $9A74: 20 */ nes_cpu_instruction_boundary(0x9A74, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x76; g_cpu.S--; func_9ABD_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9A74, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9A77:;
    /* $9A77: A9 */ nes_cpu_instruction_boundary(0x9A77, 2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_9A79:;
    /* $9A79: 9D */ nes_cpu_instruction_boundary(0x9A79, 5); nes_write((0x040A + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9A7C:;
    /* $9A7C: D0 */ nes_cpu_instruction_boundary(0x9A7C, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A84; }
label_9A7E:; /* CrawlerAIRoutine_BANK1_move */
    /* $9A7E: 20 */ nes_cpu_instruction_boundary(0x9A7E, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; func_9AE2_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9A7E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9A81:;
    /* $9A81: 20 */ nes_cpu_instruction_boundary(0x9A81, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x83; g_cpu.S--; func_9AA8_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9A81, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9A84:; /* CrawlerAIRoutine_BANK1_afterLavaTurnAround */
    /* $9A84: 20 */ nes_cpu_instruction_boundary(0x9A84, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x86; g_cpu.S--; func_9AC6_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9A84, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9A87:; /* CrawlerAIRoutine_BANK1_exit */
    /* $9A87: A9 */ nes_cpu_instruction_boundary(0x9A87, 2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_9A89:;
    /* $9A89: 20 */ nes_cpu_instruction_boundary(0x9A89, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; func_800C_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9A89, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9A8C:; /* CrawlerExit_Explode_BANK1 */
    /* $9A8C: 4C */ nes_cpu_instruction_boundary(0x9A8C, 3); nes_cpu_instruction_boundary(0x8006, 2); func_8006_b1(); return;
}

void func_9A8F_b1(void) { /* CrawlerReorientSprite_BANK1 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A8F_b1");
#endif
label_9A8F:; /* CrawlerReorientSprite_BANK1 */
    /* $9A8F: BD */ nes_cpu_instruction_boundary(0x9A8F, 4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A92:;
    /* $9A92: 4A */ nes_cpu_instruction_boundary(0x9A92, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9A93:;
    /* $9A93: BD */ nes_cpu_instruction_boundary(0x9A93, 4); g_cpu.A = nes_read((0x040A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A96:;
    /* $9A96: 29 */ nes_cpu_instruction_boundary(0x9A96, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_9A98:;
    /* $9A98: 2A */ nes_cpu_instruction_boundary(0x9A98, 2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_9A99:;
    /* $9A99: A8 */ nes_cpu_instruction_boundary(0x9A99, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9A9A:;
    /* $9A9A: B9 */ nes_cpu_instruction_boundary(0x9A9A, 4); g_cpu.A = nes_read((0x9AA0 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A9D:;
    /* $9A9D: 4C */ nes_cpu_instruction_boundary(0x9A9D, 3); nes_cpu_instruction_boundary(0x800F, 2); func_800F_b1(); return;
}

void func_9AA8_b1_body(int _entry) { /* CrawlerInsideCornerCheck_BANK1 */
    switch (_entry) {
        case 1: goto label_9ABD;
    }
label_9AA8:; /* CrawlerInsideCornerCheck_BANK1 */
    /* $9AA8: A6 */ nes_cpu_instruction_boundary(0x9AA8, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_9AAA:;
    /* $9AAA: B0 */ nes_cpu_instruction_boundary(0x9AAA, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9AC5; }
label_9AAC:;
    /* $9AAC: A5 */ nes_cpu_instruction_boundary(0x9AAC, 3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_9AAE:;
    /* $9AAE: D0 */ nes_cpu_instruction_boundary(0x9AAE, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9ABD; }
label_9AB0:;
    /* $9AB0: BC */ nes_cpu_instruction_boundary(0x9AB0, 4); g_cpu.Y = nes_read((0x040A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_9AB3:;
    /* $9AB3: 88 */ nes_cpu_instruction_boundary(0x9AB3, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9AB4:;
    /* $9AB4: 98 */ nes_cpu_instruction_boundary(0x9AB4, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_9AB5:;
    /* $9AB5: 29 */ nes_cpu_instruction_boundary(0x9AB5, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_9AB7:;
    /* $9AB7: 9D */ nes_cpu_instruction_boundary(0x9AB7, 5); nes_write((0x040A + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9ABA:;
    /* $9ABA: 4C */ nes_cpu_instruction_boundary(0x9ABA, 3); nes_cpu_instruction_boundary(0x9A8F, 2); func_9A8F_b1(); return;
label_9ABD:; /* CrawlerFlipDirection_BANK1 */
    /* $9ABD: BD */ nes_cpu_instruction_boundary(0x9ABD, 4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9AC0:;
    /* $9AC0: 49 */ nes_cpu_instruction_boundary(0x9AC0, 2); g_cpu.A ^= 0x01; FLAG_NZ(g_cpu.A);
label_9AC2:;
    /* $9AC2: 9D */ nes_cpu_instruction_boundary(0x9AC2, 5); nes_write((0x0405 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9AC5:; /* RTS_Crawler06_BANK1 */
    /* $9AC5: 60 */ nes_cpu_instruction_boundary(0x9AC5, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9AA8_b1(void) { /* CrawlerInsideCornerCheck_BANK1 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9AA8_b1");
#endif
    func_9AA8_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9ABD_b1(void) { /* CrawlerFlipDirection_BANK1 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9ABD_b1");
#endif
    func_9AA8_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9AC6_b1(void) { /* CrawlerOutsideCornerCheck_BANK1 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9AC6_b1");
#endif
label_9AC6:; /* CrawlerOutsideCornerCheck_BANK1 */
    /* $9AC6: 20 */ nes_cpu_instruction_boundary(0x9AC6, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC8; g_cpu.S--; func_9ADA_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9AC6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9AC9:;
    /* $9AC9: 20 */ nes_cpu_instruction_boundary(0x9AC9, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCB; g_cpu.S--; func_9AE2_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9AC9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9ACC:;
    /* $9ACC: A6 */ nes_cpu_instruction_boundary(0x9ACC, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_9ACE:;
    /* $9ACE: 90 */ nes_cpu_instruction_boundary(0x9ACE, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9AD9; }
label_9AD0:;
    /* $9AD0: 20 */ nes_cpu_instruction_boundary(0x9AD0, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD2; g_cpu.S--; func_9ADA_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9AD0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9AD3:;
    /* $9AD3: 9D */ nes_cpu_instruction_boundary(0x9AD3, 5); nes_write((0x040A + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9AD6:;
    /* $9AD6: 20 */ nes_cpu_instruction_boundary(0x9AD6, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD8; g_cpu.S--; func_9A8F_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9AD6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9AD9:; /* CrawlerOutsideCornerCheck_BANK1_RTS */
    /* $9AD9: 60 */ nes_cpu_instruction_boundary(0x9AD9, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9ADA_b1(void) { /* CrawlerOutsideCornerGetNextOrientation_BANK1 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9ADA_b1");
#endif
label_9ADA:; /* CrawlerOutsideCornerGetNextOrientation_BANK1 */
    /* $9ADA: BC */ nes_cpu_instruction_boundary(0x9ADA, 4); g_cpu.Y = nes_read((0x040A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_9ADD:;
    /* $9ADD: C8 */ nes_cpu_instruction_boundary(0x9ADD, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9ADE:;
    /* $9ADE: 98 */ nes_cpu_instruction_boundary(0x9ADE, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_9ADF:;
    /* $9ADF: 29 */ nes_cpu_instruction_boundary(0x9ADF, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_9AE1:;
    /* $9AE1: 60 */ nes_cpu_instruction_boundary(0x9AE1, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9AE2_b1(void) { /* JumpByRTSToMovementRoutine_BANK1 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9AE2_b1");
#endif
label_9AE2:; /* JumpByRTSToMovementRoutine_BANK1 */
    /* $9AE2: BC */ nes_cpu_instruction_boundary(0x9AE2, 4); g_cpu.Y = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_9AE5:;
    /* $9AE5: 84 */ nes_cpu_instruction_boundary(0x9AE5, 3); nes_write(0x00, g_cpu.Y);
label_9AE7:;
    /* $9AE7: 46 */ nes_cpu_instruction_boundary(0x9AE7, 5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_9AE9:;
    /* $9AE9: 2A */ nes_cpu_instruction_boundary(0x9AE9, 2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_9AEA:;
    /* $9AEA: 0A */ nes_cpu_instruction_boundary(0x9AEA, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9AEB:;
    /* $9AEB: A8 */ nes_cpu_instruction_boundary(0x9AEB, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9AEC:;
    /* $9AEC: B9 */ nes_cpu_instruction_boundary(0x9AEC, 4); g_cpu.A = nes_read((0x8049 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9AEF:;
    /* $9AEF: 48 */ nes_cpu_instruction_boundary(0x9AEF, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9AF0:;
    /* $9AF0: B9 */ nes_cpu_instruction_boundary(0x9AF0, 4); g_cpu.A = nes_read((0x8048 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9AF3:;
    /* $9AF3: 48 */ nes_cpu_instruction_boundary(0x9AF3, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9AF4:;
    /* $9AF4: 60 */ nes_cpu_instruction_boundary(0x9AF4, 6); { g_cpu.S++; uint8_t _lo=g_ram[0x100+g_cpu.S]; g_cpu.S++; uint8_t _hi=g_ram[0x100+g_cpu.S]; call_by_address_tail(((uint16_t)_hi<<8|_lo)+1, -1); }
    
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9AF5_b1(void) { /* RioAIRoutine_BANK1 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9AF5_b1");
#endif
label_9AF5:; /* RioAIRoutine_BANK1 */
    /* $9AF5: A5 */ nes_cpu_instruction_boundary(0x9AF5, 3); g_cpu.A = nes_read(0x81); FLAG_NZ(g_cpu.A);
label_9AF7:;
    /* $9AF7: C9 */ nes_cpu_instruction_boundary(0x9AF7, 2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_9AF9:;
    /* $9AF9: F0 */ nes_cpu_instruction_boundary(0x9AF9, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_9B2D; }
label_9AFB:;
    /* $9AFB: C9 */ nes_cpu_instruction_boundary(0x9AFB, 2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_9AFD:;
    /* $9AFD: F0 */ nes_cpu_instruction_boundary(0x9AFD, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_9B2A; }
label_9AFF:;
    /* $9AFF: A9 */ nes_cpu_instruction_boundary(0x9AFF, 2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_9B01:;
    /* $9B01: 9D */ nes_cpu_instruction_boundary(0x9B01, 5); nes_write((0x6AFE + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9B04:;
    /* $9B04: BD */ nes_cpu_instruction_boundary(0x9B04, 4); g_cpu.A = nes_read((0x0402 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B07:;
    /* $9B07: 30 */ nes_cpu_instruction_boundary(0x9B07, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_9B25; }
label_9B09:;
    /* $9B09: BD */ nes_cpu_instruction_boundary(0x9B09, 4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B0C:;
    /* $9B0C: 29 */ nes_cpu_instruction_boundary(0x9B0C, 2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_9B0E:;
    /* $9B0E: F0 */ nes_cpu_instruction_boundary(0x9B0E, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9B25; }
label_9B10:;
    /* $9B10: BD */ nes_cpu_instruction_boundary(0x9B10, 4); g_cpu.A = nes_read((0x0400 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B13:;
    /* $9B13: 38 */ nes_cpu_instruction_boundary(0x9B13, 2); g_cpu.C = 1;
label_9B14:;
    /* $9B14: ED */ nes_cpu_instruction_boundary(0x9B14, 4); { uint8_t m=nes_read(0x030D); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9B17:;
    /* $9B17: 10 */ nes_cpu_instruction_boundary(0x9B17, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_9B1C; }
label_9B19:;
    /* $9B19: 20 */ nes_cpu_instruction_boundary(0x9B19, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1B; g_cpu.S--; func_95C6_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9B19, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9B1C:; /* RioAIRoutine_BANK1_endIf_A */
    /* $9B1C: C9 */ nes_cpu_instruction_boundary(0x9B1C, 2); { int r=g_cpu.A-0x10; g_cpu.C=(g_cpu.A>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_9B1E:;
    /* $9B1E: B0 */ nes_cpu_instruction_boundary(0x9B1E, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9B25; }
label_9B20:;
    /* $9B20: A9 */ nes_cpu_instruction_boundary(0x9B20, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9B22:;
    /* $9B22: 9D */ nes_cpu_instruction_boundary(0x9B22, 5); nes_write((0x6AFE + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9B25:; /* RioExit_Active_BANK1 */
    /* $9B25: A9 */ nes_cpu_instruction_boundary(0x9B25, 2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_9B27:;
    /* $9B27: 4C */ nes_cpu_instruction_boundary(0x9B27, 3); nes_cpu_instruction_boundary(0x8000, 2); func_8000_b1(); return;
label_9B2A:; /* RioExit_Explode_BANK1 */
    /* $9B2A: 4C */ nes_cpu_instruction_boundary(0x9B2A, 3); nes_cpu_instruction_boundary(0x8006, 2); func_8006_b1(); return;
label_9B2D:; /* RioExit_Resting_BANK1 */
    /* $9B2D: A9 */ nes_cpu_instruction_boundary(0x9B2D, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_9B2F:;
    /* $9B2F: 4C */ nes_cpu_instruction_boundary(0x9B2F, 3); nes_cpu_instruction_boundary(0x8003, 2); func_8003_b1(); return;
}

void func_9C1D_b1(void) { /* KraidUpdateAllProjectiles_BANK1 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9C1D_b1");
#endif
label_9C1D:; /* KraidUpdateAllProjectiles_BANK1 */
    /* $9C1D: A2 */ nes_cpu_instruction_boundary(0x9C1D, 2); g_cpu.X = 0x50; FLAG_NZ(g_cpu.X);
label_9C1F:; /* KraidUpdateAllProjectiles_BANK1_loop */
    /* $9C1F: 20 */ nes_cpu_instruction_boundary(0x9C1F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x21; g_cpu.S--; func_9C2A_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9C1F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9C22:;
    /* $9C22: 8A */ nes_cpu_instruction_boundary(0x9C22, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_9C23:;
    /* $9C23: 38 */ nes_cpu_instruction_boundary(0x9C23, 2); g_cpu.C = 1;
label_9C24:;
    /* $9C24: E9 */ nes_cpu_instruction_boundary(0x9C24, 2); { uint8_t m=0x10; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9C26:;
    /* $9C26: AA */ nes_cpu_instruction_boundary(0x9C26, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_9C27:;
    /* $9C27: D0 */ nes_cpu_instruction_boundary(0x9C27, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0x9C1F, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9C1F;
    }
label_9C29:;
    /* $9C29: 60 */ nes_cpu_instruction_boundary(0x9C29, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9C2A_b1_body(int _entry) { /* KraidUpdateProjectile_BANK1 */
    switch (_entry) {
        case 1: goto label_9C96;
    }
label_9C2A:; /* KraidUpdateProjectile_BANK1 */
    /* $9C2A: BC */ nes_cpu_instruction_boundary(0x9C2A, 4); g_cpu.Y = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_9C2D:;
    /* $9C2D: F0 */ nes_cpu_instruction_boundary(0x9C2D, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9C55; }
label_9C2F:;
    /* $9C2F: BD */ nes_cpu_instruction_boundary(0x9C2F, 4); g_cpu.A = nes_read((0x6B02 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C32:;
    /* $9C32: C9 */ nes_cpu_instruction_boundary(0x9C32, 2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_9C34:;
    /* $9C34: F0 */ nes_cpu_instruction_boundary(0x9C34, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9C3A; }
label_9C36:;
    /* $9C36: C9 */ nes_cpu_instruction_boundary(0x9C36, 2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_9C38:;
    /* $9C38: D0 */ nes_cpu_instruction_boundary(0x9C38, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9CA7; }
label_9C3A:; /* KraidUpdateProjectile_BANK1_branchA */
    /* $9C3A: BD */ nes_cpu_instruction_boundary(0x9C3A, 4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C3D:;
    /* $9C3D: 29 */ nes_cpu_instruction_boundary(0x9C3D, 2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9C3F:;
    /* $9C3F: F0 */ nes_cpu_instruction_boundary(0x9C3F, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9C55; }
label_9C41:;
    /* $9C41: 88 */ nes_cpu_instruction_boundary(0x9C41, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9C42:;
    /* $9C42: F0 */ nes_cpu_instruction_boundary(0x9C42, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9C60; }
label_9C44:;
    /* $9C44: C0 */ nes_cpu_instruction_boundary(0x9C44, 2); { int r=g_cpu.Y-0x02; g_cpu.C=(g_cpu.Y>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_9C46:;
    /* $9C46: F0 */ nes_cpu_instruction_boundary(0x9C46, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9C55; }
label_9C48:;
    /* $9C48: C0 */ nes_cpu_instruction_boundary(0x9C48, 2); { int r=g_cpu.Y-0x03; g_cpu.C=(g_cpu.Y>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_9C4A:;
    /* $9C4A: D0 */ nes_cpu_instruction_boundary(0x9C4A, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9CA7; }
label_9C4C:;
    /* $9C4C: BD */ nes_cpu_instruction_boundary(0x9C4C, 4); g_cpu.A = nes_read((0x040C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C4F:;
    /* $9C4F: C9 */ nes_cpu_instruction_boundary(0x9C4F, 2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_9C51:;
    /* $9C51: D0 */ nes_cpu_instruction_boundary(0x9C51, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9CA7; }
label_9C53:;
    /* $9C53: F0 */ nes_cpu_instruction_boundary(0x9C53, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9C60; }
label_9C55:; /* KraidUpdateProjectile_BANK1_remove */
    /* $9C55: A9 */ nes_cpu_instruction_boundary(0x9C55, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9C57:;
    /* $9C57: 9D */ nes_cpu_instruction_boundary(0x9C57, 5); nes_write((0x6AF4 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9C5A:;
    /* $9C5A: 9D */ nes_cpu_instruction_boundary(0x9C5A, 5); nes_write((0x040F + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9C5D:;
    /* $9C5D: 20 */ nes_cpu_instruction_boundary(0x9C5D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x5F; g_cpu.S--; func_802A_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9C5D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9C60:; /* KraidUpdateProjectile_BANK1_resting */
    /* $9C60: AD */ nes_cpu_instruction_boundary(0x9C60, 4); g_cpu.A = nes_read(0x0405); FLAG_NZ(g_cpu.A);
label_9C63:;
    /* $9C63: 9D */ nes_cpu_instruction_boundary(0x9C63, 5); nes_write((0x0405 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9C66:;
    /* $9C66: 4A */ nes_cpu_instruction_boundary(0x9C66, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9C67:;
    /* $9C67: 08 */ nes_cpu_instruction_boundary(0x9C67, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9C68:;
    /* $9C68: 8A */ nes_cpu_instruction_boundary(0x9C68, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_9C69:;
    /* $9C69: 4A */ nes_cpu_instruction_boundary(0x9C69, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9C6A:;
    /* $9C6A: 4A */ nes_cpu_instruction_boundary(0x9C6A, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9C6B:;
    /* $9C6B: 4A */ nes_cpu_instruction_boundary(0x9C6B, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9C6C:;
    /* $9C6C: 4A */ nes_cpu_instruction_boundary(0x9C6C, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9C6D:;
    /* $9C6D: A8 */ nes_cpu_instruction_boundary(0x9C6D, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9C6E:;
    /* $9C6E: B9 */ nes_cpu_instruction_boundary(0x9C6E, 4); g_cpu.A = nes_read((0x9CB7 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C71:;
    /* $9C71: 85 */ nes_cpu_instruction_boundary(0x9C71, 3); nes_write(0x04, g_cpu.A);
label_9C73:;
    /* $9C73: B9 */ nes_cpu_instruction_boundary(0x9C73, 4); g_cpu.A = nes_read((0x9CC6 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C76:;
    /* $9C76: 9D */ nes_cpu_instruction_boundary(0x9C76, 5); nes_write((0x6B02 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9C79:;
    /* $9C79: 98 */ nes_cpu_instruction_boundary(0x9C79, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_9C7A:;
    /* $9C7A: 28 */ nes_cpu_instruction_boundary(0x9C7A, 4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_9C7B:;
    /* $9C7B: 2A */ nes_cpu_instruction_boundary(0x9C7B, 2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_9C7C:;
    /* $9C7C: A8 */ nes_cpu_instruction_boundary(0x9C7C, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9C7D:;
    /* $9C7D: B9 */ nes_cpu_instruction_boundary(0x9C7D, 4); g_cpu.A = nes_read((0x9CBB + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C80:;
    /* $9C80: 85 */ nes_cpu_instruction_boundary(0x9C80, 3); nes_write(0x05, g_cpu.A);
label_9C82:;
    /* $9C82: A2 */ nes_cpu_instruction_boundary(0x9C82, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_9C84:;
    /* $9C84: 20 */ nes_cpu_instruction_boundary(0x9C84, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x86; g_cpu.S--; func_9CA8_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9C84, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9C87:;
    /* $9C87: 20 */ nes_cpu_instruction_boundary(0x9C87, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x89; g_cpu.S--; func_8027_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9C87, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9C8A:;
    /* $9C8A: A6 */ nes_cpu_instruction_boundary(0x9C8A, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_9C8C:;
    /* $9C8C: 90 */ nes_cpu_instruction_boundary(0x9C8C, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9CA7; }
label_9C8E:;
    /* $9C8E: BD */ nes_cpu_instruction_boundary(0x9C8E, 4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C91:;
    /* $9C91: D0 */ nes_cpu_instruction_boundary(0x9C91, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9C96; }
label_9C93:;
    /* $9C93: FE */ nes_cpu_instruction_boundary(0x9C93, 7); { uint16_t a=(0x6AF4 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9C96:; /* LoadEnemyPositionFromTemp__BANK1 */
    /* $9C96: A5 */ nes_cpu_instruction_boundary(0x9C96, 3); g_cpu.A = nes_read(0x08); FLAG_NZ(g_cpu.A);
label_9C98:;
    /* $9C98: 9D */ nes_cpu_instruction_boundary(0x9C98, 5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9C9B:;
    /* $9C9B: A5 */ nes_cpu_instruction_boundary(0x9C9B, 3); g_cpu.A = nes_read(0x09); FLAG_NZ(g_cpu.A);
label_9C9D:;
    /* $9C9D: 9D */ nes_cpu_instruction_boundary(0x9C9D, 5); nes_write((0x0401 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CA0:;
    /* $9CA0: A5 */ nes_cpu_instruction_boundary(0x9CA0, 3); g_cpu.A = nes_read(0x0B); FLAG_NZ(g_cpu.A);
label_9CA2:;
    /* $9CA2: 29 */ nes_cpu_instruction_boundary(0x9CA2, 2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_9CA4:;
    /* $9CA4: 9D */ nes_cpu_instruction_boundary(0x9CA4, 5); nes_write((0x6AFB + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CA7:; /* KraidUpdateProjectile_Exit_BANK1 */
    /* $9CA7: 60 */ nes_cpu_instruction_boundary(0x9CA7, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9C2A_b1(void) { /* KraidUpdateProjectile_BANK1 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9C2A_b1");
#endif
    func_9C2A_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9C96_b1(void) { /* LoadEnemyPositionFromTemp__BANK1 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9C96_b1");
#endif
    func_9C2A_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9CA8_b1(void) { /* StoreEnemyPositionToTemp__BANK1 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9CA8_b1");
#endif
label_9CA8:; /* StoreEnemyPositionToTemp__BANK1 */
    /* $9CA8: BD */ nes_cpu_instruction_boundary(0x9CA8, 4); g_cpu.A = nes_read((0x0400 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CAB:;
    /* $9CAB: 85 */ nes_cpu_instruction_boundary(0x9CAB, 3); nes_write(0x08, g_cpu.A);
label_9CAD:;
    /* $9CAD: BD */ nes_cpu_instruction_boundary(0x9CAD, 4); g_cpu.A = nes_read((0x0401 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CB0:;
    /* $9CB0: 85 */ nes_cpu_instruction_boundary(0x9CB0, 3); nes_write(0x09, g_cpu.A);
label_9CB2:;
    /* $9CB2: BD */ nes_cpu_instruction_boundary(0x9CB2, 4); g_cpu.A = nes_read((0x6AFB + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CB5:;
    /* $9CB5: 85 */ nes_cpu_instruction_boundary(0x9CB5, 3); nes_write(0x0B, g_cpu.A);
label_9CB7:;
    /* $9CB7: 60 */ nes_cpu_instruction_boundary(0x9CB7, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9CCC_b1(void) { /* KraidTryToLaunchLint_BANK1 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9CCC_b1");
#endif
label_9CCC:; /* KraidTryToLaunchLint_BANK1 */
    /* $9CCC: A4 */ nes_cpu_instruction_boundary(0x9CCC, 3); g_cpu.Y = nes_read(0x7E); FLAG_NZ(g_cpu.Y);
label_9CCE:;
    /* $9CCE: D0 */ nes_cpu_instruction_boundary(0x9CCE, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9CD2; }
label_9CD0:;
    /* $9CD0: A0 */ nes_cpu_instruction_boundary(0x9CD0, 2); g_cpu.Y = 0x80; FLAG_NZ(g_cpu.Y);
label_9CD2:; /* KraidTryToLaunchLint_BANK1_endIf_A */
    /* $9CD2: A5 */ nes_cpu_instruction_boundary(0x9CD2, 3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_9CD4:;
    /* $9CD4: 29 */ nes_cpu_instruction_boundary(0x9CD4, 2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9CD6:;
    /* $9CD6: D0 */ nes_cpu_instruction_boundary(0x9CD6, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_9D04; }
label_9CD8:;
    /* $9CD8: 88 */ nes_cpu_instruction_boundary(0x9CD8, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9CD9:;
    /* $9CD9: 84 */ nes_cpu_instruction_boundary(0x9CD9, 3); nes_write(0x7E, g_cpu.Y);
label_9CDB:;
    /* $9CDB: 98 */ nes_cpu_instruction_boundary(0x9CDB, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_9CDC:;
    /* $9CDC: 0A */ nes_cpu_instruction_boundary(0x9CDC, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9CDD:;
    /* $9CDD: 30 */ nes_cpu_instruction_boundary(0x9CDD, 2); if (g_cpu.N) { maybe_trigger_vblank(2); goto label_9D04; }
label_9CDF:;
    /* $9CDF: 29 */ nes_cpu_instruction_boundary(0x9CDF, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_9CE1:;
    /* $9CE1: C9 */ nes_cpu_instruction_boundary(0x9CE1, 2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_9CE3:;
    /* $9CE3: D0 */ nes_cpu_instruction_boundary(0x9CE3, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_9D04; }
label_9CE5:;
    /* $9CE5: A9 */ nes_cpu_instruction_boundary(0x9CE5, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9CE7:;
    /* $9CE7: A2 */ nes_cpu_instruction_boundary(0x9CE7, 2); g_cpu.X = 0x10; FLAG_NZ(g_cpu.X);
label_9CE9:;
    /* $9CE9: DD */ nes_cpu_instruction_boundary(0x9CE9, 4); { uint8_t m=nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9CEC:;
    /* $9CEC: F0 */ nes_cpu_instruction_boundary(0x9CEC, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9CFF; }
label_9CEE:;
    /* $9CEE: A2 */ nes_cpu_instruction_boundary(0x9CEE, 2); g_cpu.X = 0x20; FLAG_NZ(g_cpu.X);
label_9CF0:;
    /* $9CF0: DD */ nes_cpu_instruction_boundary(0x9CF0, 4); { uint8_t m=nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9CF3:;
    /* $9CF3: F0 */ nes_cpu_instruction_boundary(0x9CF3, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9CFF; }
label_9CF5:;
    /* $9CF5: A2 */ nes_cpu_instruction_boundary(0x9CF5, 2); g_cpu.X = 0x30; FLAG_NZ(g_cpu.X);
label_9CF7:;
    /* $9CF7: DD */ nes_cpu_instruction_boundary(0x9CF7, 4); { uint8_t m=nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9CFA:;
    /* $9CFA: F0 */ nes_cpu_instruction_boundary(0x9CFA, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9CFF; }
label_9CFC:;
    /* $9CFC: E6 */ nes_cpu_instruction_boundary(0x9CFC, 5); { uint16_t a=0x7E; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9CFE:;
    /* $9CFE: 60 */ nes_cpu_instruction_boundary(0x9CFE, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9CFF:; /* KraidTryToLaunchLint_BANK1_primeForLaunch */
    /* $9CFF: A9 */ nes_cpu_instruction_boundary(0x9CFF, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_9D01:;
    /* $9D01: 9D */ nes_cpu_instruction_boundary(0x9D01, 5); nes_write((0x0409 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D04:; /* KraidTryToLaunchLint_BANK1_RTS */
    /* $9D04: 60 */ nes_cpu_instruction_boundary(0x9D04, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9D05_b1(void) { /* KraidTryToLaunchNail_BANK1 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9D05_b1");
#endif
label_9D05:; /* KraidTryToLaunchNail_BANK1 */
    /* $9D05: A4 */ nes_cpu_instruction_boundary(0x9D05, 3); g_cpu.Y = nes_read(0x7F); FLAG_NZ(g_cpu.Y);
label_9D07:;
    /* $9D07: D0 */ nes_cpu_instruction_boundary(0x9D07, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9D0B; }
label_9D09:;
    /* $9D09: A0 */ nes_cpu_instruction_boundary(0x9D09, 2); g_cpu.Y = 0x60; FLAG_NZ(g_cpu.Y);
label_9D0B:; /* KraidTryToLaunchNail_BANK1_endIf_A */
    /* $9D0B: A5 */ nes_cpu_instruction_boundary(0x9D0B, 3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_9D0D:;
    /* $9D0D: 29 */ nes_cpu_instruction_boundary(0x9D0D, 2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9D0F:;
    /* $9D0F: D0 */ nes_cpu_instruction_boundary(0x9D0F, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9D34; }
label_9D11:;
    /* $9D11: 88 */ nes_cpu_instruction_boundary(0x9D11, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9D12:;
    /* $9D12: 84 */ nes_cpu_instruction_boundary(0x9D12, 3); nes_write(0x7F, g_cpu.Y);
label_9D14:;
    /* $9D14: 98 */ nes_cpu_instruction_boundary(0x9D14, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_9D15:;
    /* $9D15: 0A */ nes_cpu_instruction_boundary(0x9D15, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9D16:;
    /* $9D16: 30 */ nes_cpu_instruction_boundary(0x9D16, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_9D34; }
label_9D18:;
    /* $9D18: 29 */ nes_cpu_instruction_boundary(0x9D18, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_9D1A:;
    /* $9D1A: D0 */ nes_cpu_instruction_boundary(0x9D1A, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9D34; }
label_9D1C:;
    /* $9D1C: A9 */ nes_cpu_instruction_boundary(0x9D1C, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9D1E:;
    /* $9D1E: A2 */ nes_cpu_instruction_boundary(0x9D1E, 2); g_cpu.X = 0x40; FLAG_NZ(g_cpu.X);
label_9D20:;
    /* $9D20: DD */ nes_cpu_instruction_boundary(0x9D20, 4); { uint8_t m=nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9D23:;
    /* $9D23: F0 */ nes_cpu_instruction_boundary(0x9D23, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9D2F; }
label_9D25:;
    /* $9D25: A2 */ nes_cpu_instruction_boundary(0x9D25, 2); g_cpu.X = 0x50; FLAG_NZ(g_cpu.X);
label_9D27:;
    /* $9D27: DD */ nes_cpu_instruction_boundary(0x9D27, 4); { uint8_t m=nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9D2A:;
    /* $9D2A: F0 */ nes_cpu_instruction_boundary(0x9D2A, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9D2F; }
label_9D2C:;
    /* $9D2C: E6 */ nes_cpu_instruction_boundary(0x9D2C, 5); { uint16_t a=0x7F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9D2E:;
    /* $9D2E: 60 */ nes_cpu_instruction_boundary(0x9D2E, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9D2F:; /* KraidTryToLaunchNail_BANK1_primeForLaunch */
    /* $9D2F: A9 */ nes_cpu_instruction_boundary(0x9D2F, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_9D31:;
    /* $9D31: 9D */ nes_cpu_instruction_boundary(0x9D31, 5); nes_write((0x0409 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D34:; /* KraidTryToLaunchNail_BANK1_RTS */
    /* $9D34: 60 */ nes_cpu_instruction_boundary(0x9D34, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B3C0_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3C0_b1");
#endif
label_B3C0:;
    /* $B3C0: 1E */ nes_cpu_instruction_boundary(0xB3C0, 7); { uint16_t a=(0x05C9 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B3C3:;
    /* $B3C3: F0 */ nes_cpu_instruction_boundary(0xB3C3, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB399); return; }
label_B3C5:;
    /* $B3C5: A9 */ nes_cpu_instruction_boundary(0xB3C5, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B3C7:;
    /* $B3C7: 8D */ nes_cpu_instruction_boundary(0xB3C7, 4); nes_write(0x0602, g_cpu.A);
label_B3CA:;
    /* $B3CA: 20 */ nes_cpu_instruction_boundary(0xB3CA, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCC; g_cpu.S--; func_B31B_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3CA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3CD:;
    /* $B3CD: 20 */ nes_cpu_instruction_boundary(0xB3CD, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCF; g_cpu.S--; func_B34B_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3CD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3D0:;
    /* $B3D0: 20 */ nes_cpu_instruction_boundary(0xB3D0, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD2; g_cpu.S--; func_B33D_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3D0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3D3:;
    /* $B3D3: 20 */ nes_cpu_instruction_boundary(0xB3D3, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD5; g_cpu.S--; func_BC36_b1();
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

void func_B3CC_b1_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B3DE;
    }
label_B3CC:;
    /* $B3CC: B3 */ nes_cpu_instruction_boundary(0xB3CC, 5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x20) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B3CE:;
    /* $B3CE: 4B */ nes_cpu_instruction_boundary(0xB3CE, 2); g_cpu.A &= 0xB3; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_B3D0:;
    /* $B3D0: 20 */ nes_cpu_instruction_boundary(0xB3D0, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD2; g_cpu.S--; func_B33D_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3D0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3D3:;
    /* $B3D3: 20 */ nes_cpu_instruction_boundary(0xB3D3, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD5; g_cpu.S--; func_BC36_b1();
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

void func_B3CC_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3CC_b1");
#endif
    func_B3CC_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B3DE_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3DE_b1");
#endif
    func_B3CC_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B479_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B479_b1");
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

void func_B48D_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B48D_b1");
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

void func_B50F_b1(void) { /* SpitFlameSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B50F_b1");
#endif
label_B50F:; /* SpitFlameSFXInit */
    /* $B50F: A9 */ nes_cpu_instruction_boundary(0xB50F, 2); g_cpu.A = 0x14; FLAG_NZ(g_cpu.A);
label_B511:;
    /* $B511: A0 */ nes_cpu_instruction_boundary(0xB511, 2); g_cpu.Y = 0x21; FLAG_NZ(g_cpu.Y);
label_B513:;
    /* $B513: 4C */ nes_cpu_instruction_boundary(0xB513, 3); nes_cpu_instruction_boundary(0xB452, 2); func_B452_b1(); return;
}

void func_B516_b1(void) { /* SpitFlameSFXCont */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B516_b1");
#endif
label_B516:; /* SpitFlameSFXCont */
    /* $B516: 20 */ nes_cpu_instruction_boundary(0xB516, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x18; g_cpu.S--; func_B4A9_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB516, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B519:;
    /* $B519: D0 */ nes_cpu_instruction_boundary(0xB519, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B51E; }
label_B51B:;
    /* $B51B: 4C */ nes_cpu_instruction_boundary(0xB51B, 3); nes_cpu_instruction_boundary(0xB58F, 2); func_B58F_b1(); return;
label_B51E:; /* SpitFlameSFXCont_endIf_A */
    /* $B51E: AC */ nes_cpu_instruction_boundary(0xB51E, 4); g_cpu.Y = nes_read(0x0670); FLAG_NZ(g_cpu.Y);
label_B521:;
    /* $B521: B9 */ nes_cpu_instruction_boundary(0xB521, 4); g_cpu.A = nes_read((0xB4FB + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B524:;
    /* $B524: 8D */ nes_cpu_instruction_boundary(0xB524, 4); nes_write(0x400C, g_cpu.A);
label_B527:;
    /* $B527: EE */ nes_cpu_instruction_boundary(0xB527, 6); { uint16_t a=0x0670; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B52A:;
    /* $B52A: 60 */ nes_cpu_instruction_boundary(0xB52A, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B52B_b1(void) { /* ScrewAttackSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B52B_b1");
#endif
label_B52B:; /* ScrewAttackSFXInit */
    /* $B52B: A9 */ nes_cpu_instruction_boundary(0xB52B, 2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_B52D:;
    /* $B52D: A0 */ nes_cpu_instruction_boundary(0xB52D, 2); g_cpu.Y = 0x11; FLAG_NZ(g_cpu.Y);
label_B52F:;
    /* $B52F: 20 */ nes_cpu_instruction_boundary(0xB52F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x31; g_cpu.S--; func_B452_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB52F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B532:;
    /* $B532: AD */ nes_cpu_instruction_boundary(0xB532, 4); g_cpu.A = nes_read(0xB213); FLAG_NZ(g_cpu.A);
label_B535:;
    /* $B535: 8D */ nes_cpu_instruction_boundary(0xB535, 4); nes_write(0x0670, g_cpu.A);
label_B538:; /* ScrewAttackSFXInit_RTS */
    /* $B538: 60 */ nes_cpu_instruction_boundary(0xB538, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B539_b1_body(int _entry) { /* ScrewAttackSFXCont */
    switch (_entry) {
        case 1: goto label_B557;
    }
label_B539:; /* ScrewAttackSFXCont */
    /* $B539: AD */ nes_cpu_instruction_boundary(0xB539, 4); g_cpu.A = nes_read(0x0678); FLAG_NZ(g_cpu.A);
label_B53C:;
    /* $B53C: C9 */ nes_cpu_instruction_boundary(0xB53C, 2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_B53E:;
    /* $B53E: F0 */ nes_cpu_instruction_boundary(0xB53E, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B549; }
label_B540:;
    /* $B540: 20 */ nes_cpu_instruction_boundary(0xB540, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x42; g_cpu.S--; func_B4A9_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB540, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B543:;
    /* $B543: D0 */ nes_cpu_instruction_boundary(0xB543, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB538); return; }
label_B545:;
    /* $B545: EE */ nes_cpu_instruction_boundary(0xB545, 6); { uint16_t a=0x0678; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B548:;
    /* $B548: 60 */ nes_cpu_instruction_boundary(0xB548, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B549:; /* ScrewAttackSFXCont_part2 */
    /* $B549: 20 */ nes_cpu_instruction_boundary(0xB549, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x4B; g_cpu.S--; func_B4A9_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB549, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B54C:;
    /* $B54C: D0 */ nes_cpu_instruction_boundary(0xB54C, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B564; }
label_B54E:;
    /* $B54E: CE */ nes_cpu_instruction_boundary(0xB54E, 6); { uint16_t a=0x0670; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B551:;
    /* $B551: CE */ nes_cpu_instruction_boundary(0xB551, 6); { uint16_t a=0x0670; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B554:;
    /* $B554: CE */ nes_cpu_instruction_boundary(0xB554, 6); { uint16_t a=0x0670; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B557:;
    /* $B557: EE */ nes_cpu_instruction_boundary(0xB557, 6); { uint16_t a=0x0674; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B55A:;
    /* $B55A: AD */ nes_cpu_instruction_boundary(0xB55A, 4); g_cpu.A = nes_read(0x0674); FLAG_NZ(g_cpu.A);
label_B55D:;
    /* $B55D: C9 */ nes_cpu_instruction_boundary(0xB55D, 2); { int r=g_cpu.A-0x0F; g_cpu.C=(g_cpu.A>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_B55F:;
    /* $B55F: D0 */ nes_cpu_instruction_boundary(0xB55F, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB538); return; }
label_B561:;
    /* $B561: 4C */ nes_cpu_instruction_boundary(0xB561, 3); nes_cpu_instruction_boundary(0xB58F, 2); func_B58F_b1(); return;
label_B564:; /* IncrementNoisePeriod */
    /* $B564: EE */ nes_cpu_instruction_boundary(0xB564, 6); { uint16_t a=0x0670; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B567:;
    /* $B567: AD */ nes_cpu_instruction_boundary(0xB567, 4); g_cpu.A = nes_read(0x0670); FLAG_NZ(g_cpu.A);
label_B56A:;
    /* $B56A: 8D */ nes_cpu_instruction_boundary(0xB56A, 4); nes_write(0x400E, g_cpu.A);
label_B56D:;
    /* $B56D: 60 */ nes_cpu_instruction_boundary(0xB56D, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B539_b1(void) { /* ScrewAttackSFXCont */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B539_b1");
#endif
    func_B539_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B557_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B557_b1");
#endif
    func_B539_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B56E_b1_body(int _entry) { /* MissileLaunchSFXInit */
    switch (_entry) {
        case 1: goto label_B575;
    }
label_B56E:; /* MissileLaunchSFXInit */
    /* $B56E: A9 */ nes_cpu_instruction_boundary(0xB56E, 2); g_cpu.A = 0x18; FLAG_NZ(g_cpu.A);
label_B570:;
    /* $B570: A0 */ nes_cpu_instruction_boundary(0xB570, 2); g_cpu.Y = 0x15; FLAG_NZ(g_cpu.Y);
label_B572:;
    /* $B572: 20 */ nes_cpu_instruction_boundary(0xB572, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x74; g_cpu.S--; func_B587_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB572, _cbs);
    recomp_stack_pop();
#endif
    return; } }
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

void func_B56E_b1(void) { /* MissileLaunchSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B56E_b1");
#endif
    func_B56E_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B575_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B575_b1");
#endif
    func_B56E_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B57B_b1(void) { /* MissileLaunchSFXCont */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B57B_b1");
#endif
label_B57B:; /* MissileLaunchSFXCont */
    /* $B57B: 20 */ nes_cpu_instruction_boundary(0xB57B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x7D; g_cpu.S--; func_B4A9_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB57B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B57E:;
    /* $B57E: D0 */ nes_cpu_instruction_boundary(0xB57E, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB564); return; }
label_B580:;
    /* $B580: 4C */ nes_cpu_instruction_boundary(0xB580, 3); nes_cpu_instruction_boundary(0xB58F, 2); func_B58F_b1(); return;
}

void func_B583_b1(void) { /* BombExplodeSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B583_b1");
#endif
label_B583:; /* BombExplodeSFXInit */
    /* $B583: A9 */ nes_cpu_instruction_boundary(0xB583, 2); g_cpu.A = 0x30; FLAG_NZ(g_cpu.A);
label_B585:;
    /* $B585: A0 */ nes_cpu_instruction_boundary(0xB585, 2); g_cpu.Y = 0x19; FLAG_NZ(g_cpu.Y);
label_B587:; /* GotoInitSFXData */
    /* $B587: 4C */ nes_cpu_instruction_boundary(0xB587, 3); nes_cpu_instruction_boundary(0xB452, 2); func_B452_b1(); return;
}

void func_B58A_b1(void) { /* NoiseSFXCont */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B58A_b1");
#endif
label_B58A:; /* NoiseSFXCont */
    /* $B58A: 20 */ nes_cpu_instruction_boundary(0xB58A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; func_B4A9_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB58A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B58D:;
    /* $B58D: D0 */ nes_cpu_instruction_boundary(0xB58D, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B597; }
label_B58F:; /* EndNoiseSFX */
    /* $B58F: 20 */ nes_cpu_instruction_boundary(0xB58F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x91; g_cpu.S--; func_B4A2_b1();
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

void func_B598_b1(void) { /* SamusWalkSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B598_b1");
#endif
label_B598:; /* SamusWalkSFXInit */
    /* $B598: AD */ nes_cpu_instruction_boundary(0xB598, 4); g_cpu.A = nes_read(0x0688); FLAG_NZ(g_cpu.A);
label_B59B:;
    /* $B59B: 29 */ nes_cpu_instruction_boundary(0xB59B, 2); g_cpu.A &= 0x34; FLAG_NZ(g_cpu.A);
label_B59D:;
    /* $B59D: D0 */ nes_cpu_instruction_boundary(0xB59D, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB597); return; }
label_B59F:;
    /* $B59F: A9 */ nes_cpu_instruction_boundary(0xB59F, 2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_B5A1:;
    /* $B5A1: A0 */ nes_cpu_instruction_boundary(0xB5A1, 2); g_cpu.Y = 0x1D; FLAG_NZ(g_cpu.Y);
label_B5A3:;
    /* $B5A3: D0 */ nes_cpu_instruction_boundary(0xB5A3, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB587); return; }
label_B5A5:; /* MultiSFXInit */
    /* $B5A5: 8D */ nes_cpu_instruction_boundary(0xB5A5, 4); nes_write(0x0664, g_cpu.A);
label_B5A8:;
    /* $B5A8: 20 */ nes_cpu_instruction_boundary(0xB5A8, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAA; g_cpu.S--; func_B374_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB5A8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B5AB:;
    /* $B5AB: 20 */ nes_cpu_instruction_boundary(0xB5AB, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAD; g_cpu.S--; func_B493_b1();
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

void func_B5EC_b1(void) { /* BossHitSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5EC_b1");
#endif
label_B5EC:; /* BossHitSFXInit */
    /* $B5EC: A0 */ nes_cpu_instruction_boundary(0xB5EC, 2); g_cpu.Y = 0x2D; FLAG_NZ(g_cpu.Y);
label_B5EE:;
    /* $B5EE: 20 */ nes_cpu_instruction_boundary(0xB5EE, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; func_B368_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB5EE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B5F1:;
    /* $B5F1: A0 */ nes_cpu_instruction_boundary(0xB5F1, 2); g_cpu.Y = 0x29; FLAG_NZ(g_cpu.Y);
label_B5F3:;
    /* $B5F3: 4C */ nes_cpu_instruction_boundary(0xB5F3, 3); nes_cpu_instruction_boundary(0xB5A5, 2); func_B5A5_b1(); return;
}

void func_B5F6_b1(void) { /* BossHitSFXCont */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5F6_b1");
#endif
label_B5F6:; /* BossHitSFXCont */
    /* $B5F6: EE */ nes_cpu_instruction_boundary(0xB5F6, 6); { uint16_t a=0x0671; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B5F9:;
    /* $B5F9: AC */ nes_cpu_instruction_boundary(0xB5F9, 4); g_cpu.Y = nes_read(0x0671); FLAG_NZ(g_cpu.Y);
label_B5FC:;
    /* $B5FC: B9 */ nes_cpu_instruction_boundary(0xB5FC, 4); g_cpu.A = nes_read((0xB63C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B5FF:;
    /* $B5FF: 8D */ nes_cpu_instruction_boundary(0xB5FF, 4); nes_write(0x4000, g_cpu.A);
label_B602:;
    /* $B602: 8D */ nes_cpu_instruction_boundary(0xB602, 4); nes_write(0x4004, g_cpu.A);
label_B605:;
    /* $B605: AD */ nes_cpu_instruction_boundary(0xB605, 4); g_cpu.A = nes_read(0x0671); FLAG_NZ(g_cpu.A);
label_B608:;
    /* $B608: C9 */ nes_cpu_instruction_boundary(0xB608, 2); { int r=g_cpu.A-0x14; g_cpu.C=(g_cpu.A>=0x14)?1:0; FLAG_NZ(r&0xFF); }
label_B60A:;
    /* $B60A: F0 */ nes_cpu_instruction_boundary(0xB60A, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B639; }
label_B60C:;
    /* $B60C: C9 */ nes_cpu_instruction_boundary(0xB60C, 2); { int r=g_cpu.A-0x06; g_cpu.C=(g_cpu.A>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_B60E:;
    /* $B60E: 90 */ nes_cpu_instruction_boundary(0xB60E, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_B620; }
label_B610:;
    /* $B610: A5 */ nes_cpu_instruction_boundary(0xB610, 3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_B612:;
    /* $B612: 09 */ nes_cpu_instruction_boundary(0xB612, 2); g_cpu.A |= 0x10; FLAG_NZ(g_cpu.A);
label_B614:;
    /* $B614: 29 */ nes_cpu_instruction_boundary(0xB614, 2); g_cpu.A &= 0x7F; FLAG_NZ(g_cpu.A);
label_B616:;
    /* $B616: 8D */ nes_cpu_instruction_boundary(0xB616, 4); nes_write(0x0679, g_cpu.A);
label_B619:;
    /* $B619: 2A */ nes_cpu_instruction_boundary(0xB619, 2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B61A:;
    /* $B61A: 8D */ nes_cpu_instruction_boundary(0xB61A, 4); nes_write(0x0675, g_cpu.A);
label_B61D:;
    /* $B61D: 4C */ nes_cpu_instruction_boundary(0xB61D, 3); nes_cpu_instruction_boundary(0xB62C, 2); func_B62C_b1(); return;
label_B620:; /* BossHitSFXCont_endIf_A */
    /* $B620: EE */ nes_cpu_instruction_boundary(0xB620, 6); { uint16_t a=0x0675; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
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
label_B639:; /* GotoEndMultiSFX */
    /* $B639: 4C */ nes_cpu_instruction_boundary(0xB639, 3); nes_cpu_instruction_boundary(0xB5CD, 2); func_B5CD_b1(); return;
}

void func_B650_b1(void) { /* SamusHitSFXCont */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B650_b1");
#endif
label_B650:; /* SamusHitSFXCont */
    /* $B650: 20 */ nes_cpu_instruction_boundary(0xB650, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x52; g_cpu.S--; func_B4A9_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB650, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B653:;
    /* $B653: D0 */ nes_cpu_instruction_boundary(0xB653, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B658; }
label_B655:;
    /* $B655: 4C */ nes_cpu_instruction_boundary(0xB655, 3); nes_cpu_instruction_boundary(0xB5CD, 2); func_B5CD_b1(); return;
label_B658:; /* SamusHitSFXCont_endIf_A */
    /* $B658: A0 */ nes_cpu_instruction_boundary(0xB658, 2); g_cpu.Y = 0x25; FLAG_NZ(g_cpu.Y);
label_B65A:;
    /* $B65A: 20 */ nes_cpu_instruction_boundary(0xB65A, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x5C; g_cpu.S--; func_B368_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB65A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B65D:;
    /* $B65D: A5 */ nes_cpu_instruction_boundary(0xB65D, 3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_B65F:;
    /* $B65F: 29 */ nes_cpu_instruction_boundary(0xB65F, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_B661:;
    /* $B661: 8D */ nes_cpu_instruction_boundary(0xB661, 4); nes_write(0x4002, g_cpu.A);
label_B664:;
    /* $B664: A0 */ nes_cpu_instruction_boundary(0xB664, 2); g_cpu.Y = 0x25; FLAG_NZ(g_cpu.Y);
label_B666:;
    /* $B666: 20 */ nes_cpu_instruction_boundary(0xB666, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x68; g_cpu.S--; func_B374_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB666, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B669:;
    /* $B669: A5 */ nes_cpu_instruction_boundary(0xB669, 3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_B66B:;
    /* $B66B: 4A */ nes_cpu_instruction_boundary(0xB66B, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B66C:;
    /* $B66C: 4A */ nes_cpu_instruction_boundary(0xB66C, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B66D:;
    /* $B66D: 29 */ nes_cpu_instruction_boundary(0xB66D, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_B66F:;
    /* $B66F: 8D */ nes_cpu_instruction_boundary(0xB66F, 4); nes_write(0x4006, g_cpu.A);
label_B672:;
    /* $B672: 60 */ nes_cpu_instruction_boundary(0xB672, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B673_b1(void) { /* SamusHitSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B673_b1");
#endif
label_B673:; /* SamusHitSFXInit */
    /* $B673: A0 */ nes_cpu_instruction_boundary(0xB673, 2); g_cpu.Y = 0x25; FLAG_NZ(g_cpu.Y);
label_B675:;
    /* $B675: 20 */ nes_cpu_instruction_boundary(0xB675, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x77; g_cpu.S--; func_B368_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB675, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B678:;
    /* $B678: A5 */ nes_cpu_instruction_boundary(0xB678, 3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_B67A:;
    /* $B67A: 29 */ nes_cpu_instruction_boundary(0xB67A, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_B67C:;
    /* $B67C: 8D */ nes_cpu_instruction_boundary(0xB67C, 4); nes_write(0x4002, g_cpu.A);
label_B67F:;
    /* $B67F: 18 */ nes_cpu_instruction_boundary(0xB67F, 2); g_cpu.C = 0;
label_B680:;
    /* $B680: A5 */ nes_cpu_instruction_boundary(0xB680, 3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_B682:;
    /* $B682: 29 */ nes_cpu_instruction_boundary(0xB682, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_B684:;
    /* $B684: 69 */ nes_cpu_instruction_boundary(0xB684, 2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_B686:;
    /* $B686: A0 */ nes_cpu_instruction_boundary(0xB686, 2); g_cpu.Y = 0x25; FLAG_NZ(g_cpu.Y);
label_B688:;
    /* $B688: 20 */ nes_cpu_instruction_boundary(0xB688, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x8A; g_cpu.S--; func_B5A5_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB688, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B68B:;
    /* $B68B: A5 */ nes_cpu_instruction_boundary(0xB68B, 3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_B68D:;
    /* $B68D: 4A */ nes_cpu_instruction_boundary(0xB68D, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B68E:;
    /* $B68E: 4A */ nes_cpu_instruction_boundary(0xB68E, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B68F:;
    /* $B68F: 29 */ nes_cpu_instruction_boundary(0xB68F, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_B691:;
    /* $B691: 8D */ nes_cpu_instruction_boundary(0xB691, 4); nes_write(0x4006, g_cpu.A);
label_B694:; /* SamusHitSFXInit_RTS */
    /* $B694: 60 */ nes_cpu_instruction_boundary(0xB694, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B695_b1(void) { /* IncorrectPasswordSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B695_b1");
#endif
label_B695:; /* IncorrectPasswordSFXInit */
    /* $B695: A0 */ nes_cpu_instruction_boundary(0xB695, 2); g_cpu.Y = 0x31; FLAG_NZ(g_cpu.Y);
label_B697:;
    /* $B697: 20 */ nes_cpu_instruction_boundary(0xB697, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; func_B368_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB697, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B69A:;
    /* $B69A: A9 */ nes_cpu_instruction_boundary(0xB69A, 2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_B69C:;
    /* $B69C: A0 */ nes_cpu_instruction_boundary(0xB69C, 2); g_cpu.Y = 0x35; FLAG_NZ(g_cpu.Y);
label_B69E:;
    /* $B69E: 4C */ nes_cpu_instruction_boundary(0xB69E, 3); nes_cpu_instruction_boundary(0xB5A5, 2); func_B5A5_b1(); return;
}

void func_B6A1_b1(void) { /* IncorrectPasswordSFXCont */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6A1_b1");
#endif
label_B6A1:; /* IncorrectPasswordSFXCont */
    /* $B6A1: 20 */ nes_cpu_instruction_boundary(0xB6A1, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA3; g_cpu.S--; func_B4A9_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB6A1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B6A4:;
    /* $B6A4: D0 */ nes_cpu_instruction_boundary(0xB6A4, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB694); return; }
label_B6A6:;
    /* $B6A6: 4C */ nes_cpu_instruction_boundary(0xB6A6, 3); nes_cpu_instruction_boundary(0xB5CD, 2); func_B5CD_b1(); return;
}

void func_B6B0_b1(void) { /* MissilePickupSFXCont */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6B0_b1");
#endif
label_B6B0:; /* MissilePickupSFXCont */
    /* $B6B0: 20 */ nes_cpu_instruction_boundary(0xB6B0, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB2; g_cpu.S--; func_B4A9_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB6B0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B6B3:;
    /* $B6B3: D0 */ nes_cpu_instruction_boundary(0xB6B3, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B6CC; }
label_B6B5:;
    /* $B6B5: AC */ nes_cpu_instruction_boundary(0xB6B5, 4); g_cpu.Y = nes_read(0x0671); FLAG_NZ(g_cpu.Y);
label_B6B8:;
    /* $B6B8: B9 */ nes_cpu_instruction_boundary(0xB6B8, 4); g_cpu.A = nes_read((0xB6A9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B6BB:;
    /* $B6BB: D0 */ nes_cpu_instruction_boundary(0xB6BB, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B6C0; }
label_B6BD:;
    /* $B6BD: 4C */ nes_cpu_instruction_boundary(0xB6BD, 3); nes_cpu_instruction_boundary(0xB6F2, 2); func_B6F2_b1(); return;
label_B6C0:; /* MissilePickupSFXCont_endIf_A */
    /* $B6C0: 8D */ nes_cpu_instruction_boundary(0xB6C0, 4); nes_write(0x4002, g_cpu.A);
label_B6C3:;
    /* $B6C3: AD */ nes_cpu_instruction_boundary(0xB6C3, 4); g_cpu.A = nes_read(0xB244); FLAG_NZ(g_cpu.A);
label_B6C6:;
    /* $B6C6: 8D */ nes_cpu_instruction_boundary(0xB6C6, 4); nes_write(0x4003, g_cpu.A);
label_B6C9:;
    /* $B6C9: EE */ nes_cpu_instruction_boundary(0xB6C9, 6); { uint16_t a=0x0671; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B6CC:; /* MissilePickupSFXCont_RTS */
    /* $B6CC: 60 */ nes_cpu_instruction_boundary(0xB6CC, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B6CD_b1_body(int _entry) { /* MissilePickupSFXInit */
    switch (_entry) {
        case 1: goto label_B6D3;
    }
label_B6CD:; /* MissilePickupSFXInit */
    /* $B6CD: A9 */ nes_cpu_instruction_boundary(0xB6CD, 2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_B6CF:;
    /* $B6CF: A0 */ nes_cpu_instruction_boundary(0xB6CF, 2); g_cpu.Y = 0x41; FLAG_NZ(g_cpu.Y);
label_B6D1:;
    /* $B6D1: D0 */ nes_cpu_instruction_boundary(0xB6D1, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_B739; }
label_B6D3:; /* EnergyPickupSFXCont */
    /* $B6D3: 20 */ nes_cpu_instruction_boundary(0xB6D3, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD5; g_cpu.S--; func_B4A9_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB6D3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B6D6:;
    /* $B6D6: D0 */ nes_cpu_instruction_boundary(0xB6D6, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB6CC); return; }
label_B6D8:;
    /* $B6D8: EE */ nes_cpu_instruction_boundary(0xB6D8, 6); { uint16_t a=0x0671; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B6DB:;
    /* $B6DB: AD */ nes_cpu_instruction_boundary(0xB6DB, 4); g_cpu.A = nes_read(0x0671); FLAG_NZ(g_cpu.A);
label_B6DE:;
    /* $B6DE: C9 */ nes_cpu_instruction_boundary(0xB6DE, 2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_B6E0:;
    /* $B6E0: F0 */ nes_cpu_instruction_boundary(0xB6E0, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B6F2; }
label_B6E2:;
    /* $B6E2: A0 */ nes_cpu_instruction_boundary(0xB6E2, 2); g_cpu.Y = 0x3D; FLAG_NZ(g_cpu.Y);
label_B6E4:;
    /* $B6E4: 4C */ nes_cpu_instruction_boundary(0xB6E4, 3); nes_cpu_instruction_boundary(0xB368, 2); func_B368_b1(); return;
label_B6F2:; /* EndSQ1SFX */
    /* $B6F2: A9 */ nes_cpu_instruction_boundary(0xB6F2, 2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_B6F4:;
    /* $B6F4: 8D */ nes_cpu_instruction_boundary(0xB6F4, 4); nes_write(0x4000, g_cpu.A);
label_B6F7:;
    /* $B6F7: A9 */ nes_cpu_instruction_boundary(0xB6F7, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B6F9:;
    /* $B6F9: 8D */ nes_cpu_instruction_boundary(0xB6F9, 4); nes_write(0x0653, g_cpu.A);
label_B6FC:;
    /* $B6FC: 20 */ nes_cpu_instruction_boundary(0xB6FC, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFE; g_cpu.S--; func_B4A2_b1();
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
label_B703:; /* SamusJumpSFXInit */
    /* $B703: AD */ nes_cpu_instruction_boundary(0xB703, 4); g_cpu.A = nes_read(0x068D); FLAG_NZ(g_cpu.A);
label_B706:;
    /* $B706: C9 */ nes_cpu_instruction_boundary(0xB706, 2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_B708:;
    /* $B708: F0 */ nes_cpu_instruction_boundary(0xB708, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xB6CC); return; }
label_B70A:;
    /* $B70A: A9 */ nes_cpu_instruction_boundary(0xB70A, 2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_B70C:;
    /* $B70C: A0 */ nes_cpu_instruction_boundary(0xB70C, 2); g_cpu.Y = 0x51; FLAG_NZ(g_cpu.Y);
label_B70E:;
    /* $B70E: D0 */ nes_cpu_instruction_boundary(0xB70E, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B739; }
label_B710:; /* EnemyHitSFXInit */
    /* $B710: A9 */ nes_cpu_instruction_boundary(0xB710, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_B712:;
    /* $B712: A0 */ nes_cpu_instruction_boundary(0xB712, 2); g_cpu.Y = 0x55; FLAG_NZ(g_cpu.Y);
label_B714:;
    /* $B714: D0 */ nes_cpu_instruction_boundary(0xB714, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B739; }
label_B716:; /* BulletFireSFXInit */
    /* $B716: AD */ nes_cpu_instruction_boundary(0xB716, 4); g_cpu.A = nes_read(0x061F); FLAG_NZ(g_cpu.A);
label_B719:;
    /* $B719: 4A */ nes_cpu_instruction_boundary(0xB719, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B71A:;
    /* $B71A: B0 */ nes_cpu_instruction_boundary(0xB71A, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B75E; }
label_B71C:;
    /* $B71C: AD */ nes_cpu_instruction_boundary(0xB71C, 4); g_cpu.A = nes_read(0x0689); FLAG_NZ(g_cpu.A);
label_B71F:;
    /* $B71F: 29 */ nes_cpu_instruction_boundary(0xB71F, 2); g_cpu.A &= 0xCC; FLAG_NZ(g_cpu.A);
label_B721:;
    /* $B721: D0 */ nes_cpu_instruction_boundary(0xB721, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xB6CC); return; }
label_B723:;
    /* $B723: AD */ nes_cpu_instruction_boundary(0xB723, 4); g_cpu.A = nes_read(0x061F); FLAG_NZ(g_cpu.A);
label_B726:;
    /* $B726: 0A */ nes_cpu_instruction_boundary(0xB726, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_B727:;
    /* $B727: B0 */ nes_cpu_instruction_boundary(0xB727, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B72F; }
label_B729:;
    /* $B729: A9 */ nes_cpu_instruction_boundary(0xB729, 2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_B72B:;
    /* $B72B: A0 */ nes_cpu_instruction_boundary(0xB72B, 2); g_cpu.Y = 0x4D; FLAG_NZ(g_cpu.Y);
label_B72D:;
    /* $B72D: D0 */ nes_cpu_instruction_boundary(0xB72D, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B739; }
label_B72F:; /* HasLongBeamSFXInit */
    /* $B72F: A9 */ nes_cpu_instruction_boundary(0xB72F, 2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_B731:;
    /* $B731: A0 */ nes_cpu_instruction_boundary(0xB731, 2); g_cpu.Y = 0x49; FLAG_NZ(g_cpu.Y);
label_B733:;
    /* $B733: D0 */ nes_cpu_instruction_boundary(0xB733, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B739; }
label_B735:; /* MetalSFXInit */
    /* $B735: A9 */ nes_cpu_instruction_boundary(0xB735, 2); g_cpu.A = 0x0B; FLAG_NZ(g_cpu.A);
label_B737:;
    /* $B737: A0 */ nes_cpu_instruction_boundary(0xB737, 2); g_cpu.Y = 0x45; FLAG_NZ(g_cpu.Y);
label_B739:; /* GotoInitSFXData2 */
    /* $B739: 4C */ nes_cpu_instruction_boundary(0xB739, 3); nes_cpu_instruction_boundary(0xB452, 2); func_B452_b1(); return;
label_B75E:; /* HasIceBeamSFXInit */
    /* $B75E: A9 */ nes_cpu_instruction_boundary(0xB75E, 2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_B760:;
    /* $B760: A0 */ nes_cpu_instruction_boundary(0xB760, 2); g_cpu.Y = 0x61; FLAG_NZ(g_cpu.Y);
label_B762:;
    /* $B762: 4C */ nes_cpu_instruction_boundary(0xB762, 3); nes_cpu_instruction_boundary(0xB452, 2); func_B452_b1(); return;
}

void func_B6CD_b1(void) { /* MissilePickupSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6CD_b1");
#endif
    func_B6CD_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B6D3_b1(void) { /* EnergyPickupSFXCont */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6D3_b1");
#endif
    func_B6CD_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B6E7_b1_body(int _entry) { /* EnergyPickupSFXInit */
    switch (_entry) {
        case 1: goto label_B6ED;
        case 2: goto label_B703;
        case 3: goto label_B710;
        case 4: goto label_B716;
        case 5: goto label_B735;
    }
label_B6E7:; /* EnergyPickupSFXInit */
    /* $B6E7: A9 */ nes_cpu_instruction_boundary(0xB6E7, 2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_B6E9:;
    /* $B6E9: A0 */ nes_cpu_instruction_boundary(0xB6E9, 2); g_cpu.Y = 0x3D; FLAG_NZ(g_cpu.Y);
label_B6EB:;
    /* $B6EB: D0 */ nes_cpu_instruction_boundary(0xB6EB, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_B739; }
label_B6ED:; /* SQ1SFXCont */
    /* $B6ED: 20 */ nes_cpu_instruction_boundary(0xB6ED, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xEF; g_cpu.S--; func_B4A9_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB6ED, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B6F0:;
    /* $B6F0: D0 */ nes_cpu_instruction_boundary(0xB6F0, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB6CC); return; }
label_B6F2:; /* EndSQ1SFX */
    /* $B6F2: A9 */ nes_cpu_instruction_boundary(0xB6F2, 2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_B6F4:;
    /* $B6F4: 8D */ nes_cpu_instruction_boundary(0xB6F4, 4); nes_write(0x4000, g_cpu.A);
label_B6F7:;
    /* $B6F7: A9 */ nes_cpu_instruction_boundary(0xB6F7, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B6F9:;
    /* $B6F9: 8D */ nes_cpu_instruction_boundary(0xB6F9, 4); nes_write(0x0653, g_cpu.A);
label_B6FC:;
    /* $B6FC: 20 */ nes_cpu_instruction_boundary(0xB6FC, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFE; g_cpu.S--; func_B4A2_b1();
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
label_B703:; /* SamusJumpSFXInit */
    /* $B703: AD */ nes_cpu_instruction_boundary(0xB703, 4); g_cpu.A = nes_read(0x068D); FLAG_NZ(g_cpu.A);
label_B706:;
    /* $B706: C9 */ nes_cpu_instruction_boundary(0xB706, 2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_B708:;
    /* $B708: F0 */ nes_cpu_instruction_boundary(0xB708, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xB6CC); return; }
label_B70A:;
    /* $B70A: A9 */ nes_cpu_instruction_boundary(0xB70A, 2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_B70C:;
    /* $B70C: A0 */ nes_cpu_instruction_boundary(0xB70C, 2); g_cpu.Y = 0x51; FLAG_NZ(g_cpu.Y);
label_B70E:;
    /* $B70E: D0 */ nes_cpu_instruction_boundary(0xB70E, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B739; }
label_B710:; /* EnemyHitSFXInit */
    /* $B710: A9 */ nes_cpu_instruction_boundary(0xB710, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_B712:;
    /* $B712: A0 */ nes_cpu_instruction_boundary(0xB712, 2); g_cpu.Y = 0x55; FLAG_NZ(g_cpu.Y);
label_B714:;
    /* $B714: D0 */ nes_cpu_instruction_boundary(0xB714, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B739; }
label_B716:; /* BulletFireSFXInit */
    /* $B716: AD */ nes_cpu_instruction_boundary(0xB716, 4); g_cpu.A = nes_read(0x061F); FLAG_NZ(g_cpu.A);
label_B719:;
    /* $B719: 4A */ nes_cpu_instruction_boundary(0xB719, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B71A:;
    /* $B71A: B0 */ nes_cpu_instruction_boundary(0xB71A, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B75E; }
label_B71C:;
    /* $B71C: AD */ nes_cpu_instruction_boundary(0xB71C, 4); g_cpu.A = nes_read(0x0689); FLAG_NZ(g_cpu.A);
label_B71F:;
    /* $B71F: 29 */ nes_cpu_instruction_boundary(0xB71F, 2); g_cpu.A &= 0xCC; FLAG_NZ(g_cpu.A);
label_B721:;
    /* $B721: D0 */ nes_cpu_instruction_boundary(0xB721, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xB6CC); return; }
label_B723:;
    /* $B723: AD */ nes_cpu_instruction_boundary(0xB723, 4); g_cpu.A = nes_read(0x061F); FLAG_NZ(g_cpu.A);
label_B726:;
    /* $B726: 0A */ nes_cpu_instruction_boundary(0xB726, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_B727:;
    /* $B727: B0 */ nes_cpu_instruction_boundary(0xB727, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B72F; }
label_B729:;
    /* $B729: A9 */ nes_cpu_instruction_boundary(0xB729, 2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_B72B:;
    /* $B72B: A0 */ nes_cpu_instruction_boundary(0xB72B, 2); g_cpu.Y = 0x4D; FLAG_NZ(g_cpu.Y);
label_B72D:;
    /* $B72D: D0 */ nes_cpu_instruction_boundary(0xB72D, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B739; }
label_B72F:; /* HasLongBeamSFXInit */
    /* $B72F: A9 */ nes_cpu_instruction_boundary(0xB72F, 2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_B731:;
    /* $B731: A0 */ nes_cpu_instruction_boundary(0xB731, 2); g_cpu.Y = 0x49; FLAG_NZ(g_cpu.Y);
label_B733:;
    /* $B733: D0 */ nes_cpu_instruction_boundary(0xB733, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B739; }
label_B735:; /* MetalSFXInit */
    /* $B735: A9 */ nes_cpu_instruction_boundary(0xB735, 2); g_cpu.A = 0x0B; FLAG_NZ(g_cpu.A);
label_B737:;
    /* $B737: A0 */ nes_cpu_instruction_boundary(0xB737, 2); g_cpu.Y = 0x45; FLAG_NZ(g_cpu.Y);
label_B739:; /* GotoInitSFXData2 */
    /* $B739: 4C */ nes_cpu_instruction_boundary(0xB739, 3); nes_cpu_instruction_boundary(0xB452, 2); func_B452_b1(); return;
label_B75E:; /* HasIceBeamSFXInit */
    /* $B75E: A9 */ nes_cpu_instruction_boundary(0xB75E, 2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_B760:;
    /* $B760: A0 */ nes_cpu_instruction_boundary(0xB760, 2); g_cpu.Y = 0x61; FLAG_NZ(g_cpu.Y);
label_B762:;
    /* $B762: 4C */ nes_cpu_instruction_boundary(0xB762, 3); nes_cpu_instruction_boundary(0xB452, 2); func_B452_b1(); return;
}

void func_B6E7_b1(void) { /* EnergyPickupSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6E7_b1");
#endif
    func_B6E7_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B6ED_b1(void) { /* SQ1SFXCont */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6ED_b1");
#endif
    func_B6E7_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B703_b1(void) { /* SamusJumpSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B703_b1");
#endif
    func_B6E7_b1_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B710_b1(void) { /* EnemyHitSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B710_b1");
#endif
    func_B6E7_b1_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B716_b1(void) { /* BulletFireSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B716_b1");
#endif
    func_B6E7_b1_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B735_b1(void) { /* MetalSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B735_b1");
#endif
    func_B6E7_b1_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B73C_b1_body(int _entry) { /* OutOfPipeSFXInit */
    switch (_entry) {
        case 1: goto label_B74F;
        case 2: goto label_B77A;
    }
label_B73C:; /* OutOfPipeSFXInit */
    /* $B73C: AD */ nes_cpu_instruction_boundary(0xB73C, 4); g_cpu.A = nes_read(0x068D); FLAG_NZ(g_cpu.A);
label_B73F:;
    /* $B73F: C9 */ nes_cpu_instruction_boundary(0xB73F, 2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_B741:;
    /* $B741: F0 */ nes_cpu_instruction_boundary(0xB741, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B749; }
label_B743:;
    /* $B743: A9 */ nes_cpu_instruction_boundary(0xB743, 2); g_cpu.A = 0x16; FLAG_NZ(g_cpu.A);
label_B745:;
    /* $B745: A0 */ nes_cpu_instruction_boundary(0xB745, 2); g_cpu.Y = 0x59; FLAG_NZ(g_cpu.Y);
label_B747:;
    /* $B747: D0 */ nes_cpu_instruction_boundary(0xB747, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB739); return; }
label_B749:; /* OutOfPipeSFXInit_timeBombTickSFXInit */
    /* $B749: A9 */ nes_cpu_instruction_boundary(0xB749, 2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_B74B:;
    /* $B74B: A0 */ nes_cpu_instruction_boundary(0xB74B, 2); g_cpu.Y = 0x39; FLAG_NZ(g_cpu.Y);
label_B74D:;
    /* $B74D: D0 */ nes_cpu_instruction_boundary(0xB74D, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB739); return; }
label_B74F:; /* BulletFireSFXCont */
    /* $B74F: AD */ nes_cpu_instruction_boundary(0xB74F, 4); g_cpu.A = nes_read(0x061F); FLAG_NZ(g_cpu.A);
label_B752:;
    /* $B752: 4A */ nes_cpu_instruction_boundary(0xB752, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B753:;
    /* $B753: B0 */ nes_cpu_instruction_boundary(0xB753, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B765; }
label_B755:;
    /* $B755: 20 */ nes_cpu_instruction_boundary(0xB755, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x57; g_cpu.S--; func_B4A9_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB755, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B758:;
    /* $B758: D0 */ nes_cpu_instruction_boundary(0xB758, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B75D; }
label_B75A:;
    /* $B75A: 4C */ nes_cpu_instruction_boundary(0xB75A, 3); nes_cpu_instruction_boundary(0xB6F2, 2); func_B6F2_b1(); return;
label_B75D:; /* BulletFireSFXCont_RTS */
    /* $B75D: 60 */ nes_cpu_instruction_boundary(0xB75D, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B75E:; /* HasIceBeamSFXInit */
    /* $B75E: A9 */ nes_cpu_instruction_boundary(0xB75E, 2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_B760:;
    /* $B760: A0 */ nes_cpu_instruction_boundary(0xB760, 2); g_cpu.Y = 0x61; FLAG_NZ(g_cpu.Y);
label_B762:;
    /* $B762: 4C */ nes_cpu_instruction_boundary(0xB762, 3); nes_cpu_instruction_boundary(0xB452, 2); func_B452_b1(); return;
label_B765:; /* HasIceBeamSFXCont */
    /* $B765: 20 */ nes_cpu_instruction_boundary(0xB765, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x67; g_cpu.S--; func_B4A9_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB765, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B768:;
    /* $B768: D0 */ nes_cpu_instruction_boundary(0xB768, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B76D; }
label_B76A:;
    /* $B76A: 4C */ nes_cpu_instruction_boundary(0xB76A, 3); nes_cpu_instruction_boundary(0xB6F2, 2); func_B6F2_b1(); return;
label_B76D:; /* HasIceBeamSFXCont_endIf_A */
    /* $B76D: AD */ nes_cpu_instruction_boundary(0xB76D, 4); g_cpu.A = nes_read(0x0671); FLAG_NZ(g_cpu.A);
label_B770:;
    /* $B770: 29 */ nes_cpu_instruction_boundary(0xB770, 2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_B772:;
    /* $B772: A8 */ nes_cpu_instruction_boundary(0xB772, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B773:;
    /* $B773: B9 */ nes_cpu_instruction_boundary(0xB773, 4); g_cpu.A = nes_read((0xB778 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B776:;
    /* $B776: D0 */ nes_cpu_instruction_boundary(0xB776, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B7A0; }
label_B778:; /* HasIceBeamSFXCont_IceBeamTbl */
    /* $B778: 93 */ nes_cpu_instruction_boundary(0xB778, 6); /* ILLEGAL $93 — skip 2 */
label_B77A:; /* WaveBeamSFXInit */
    /* $B77A: A9 */ nes_cpu_instruction_boundary(0xB77A, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_B77C:;
    /* $B77C: A0 */ nes_cpu_instruction_boundary(0xB77C, 2); g_cpu.Y = 0x5D; FLAG_NZ(g_cpu.Y);
label_B77E:;
    /* $B77E: 4C */ nes_cpu_instruction_boundary(0xB77E, 3); nes_cpu_instruction_boundary(0xB452, 2); func_B452_b1(); return;
label_B7A0:; /* LoadSQ1PeriodLow */
    /* $B7A0: 8D */ nes_cpu_instruction_boundary(0xB7A0, 4); nes_write(0x4002, g_cpu.A);
label_B7A3:;
    /* $B7A3: EE */ nes_cpu_instruction_boundary(0xB7A3, 6); { uint16_t a=0x0671; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B7A6:; /* LoadSQ1PeriodLow_RTS */
    /* $B7A6: 60 */ nes_cpu_instruction_boundary(0xB7A6, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B73C_b1(void) { /* OutOfPipeSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B73C_b1");
#endif
    func_B73C_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B74F_b1(void) { /* BulletFireSFXCont */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B74F_b1");
#endif
    func_B73C_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B77A_b1(void) { /* WaveBeamSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B77A_b1");
#endif
    func_B73C_b1_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B781_b1_body(int _entry) { /* WaveBeamSFXCont */
    switch (_entry) {
        case 1: goto label_B7A6;
    }
label_B781:; /* WaveBeamSFXCont */
    /* $B781: 20 */ nes_cpu_instruction_boundary(0xB781, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x83; g_cpu.S--; func_B4A9_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB781, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B784:;
    /* $B784: D0 */ nes_cpu_instruction_boundary(0xB784, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B797; }
label_B786:;
    /* $B786: AC */ nes_cpu_instruction_boundary(0xB786, 4); g_cpu.Y = nes_read(0x0675); FLAG_NZ(g_cpu.Y);
label_B789:;
    /* $B789: EE */ nes_cpu_instruction_boundary(0xB789, 6); { uint16_t a=0x0675; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B78C:;
    /* $B78C: B9 */ nes_cpu_instruction_boundary(0xB78C, 4); g_cpu.A = nes_read((0xB7A9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B78F:;
    /* $B78F: 8D */ nes_cpu_instruction_boundary(0xB78F, 4); nes_write(0x4000, g_cpu.A);
label_B792:;
    /* $B792: D0 */ nes_cpu_instruction_boundary(0xB792, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B7A6; }
label_B794:;
    /* $B794: 4C */ nes_cpu_instruction_boundary(0xB794, 3); nes_cpu_instruction_boundary(0xB6F2, 2); func_B6F2_b1(); return;
label_B797:; /* WaveBeamSFXCont_endIf_A */
    /* $B797: AD */ nes_cpu_instruction_boundary(0xB797, 4); g_cpu.A = nes_read(0x0671); FLAG_NZ(g_cpu.A);
label_B79A:;
    /* $B79A: 29 */ nes_cpu_instruction_boundary(0xB79A, 2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_B79C:;
    /* $B79C: A8 */ nes_cpu_instruction_boundary(0xB79C, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B79D:;
    /* $B79D: B9 */ nes_cpu_instruction_boundary(0xB79D, 4); g_cpu.A = nes_read((0xB7A7 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B7A0:; /* LoadSQ1PeriodLow */
    /* $B7A0: 8D */ nes_cpu_instruction_boundary(0xB7A0, 4); nes_write(0x4002, g_cpu.A);
label_B7A3:;
    /* $B7A3: EE */ nes_cpu_instruction_boundary(0xB7A3, 6); { uint16_t a=0x0671; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B7A6:; /* LoadSQ1PeriodLow_RTS */
    /* $B7A6: 60 */ nes_cpu_instruction_boundary(0xB7A6, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B781_b1(void) { /* WaveBeamSFXCont */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B781_b1");
#endif
    func_B781_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B7A6_b1(void) { /* LoadSQ1PeriodLow_RTS */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7A6_b1");
#endif
    func_B781_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B7AC_b1(void) { /* DoorOpenCloseSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7AC_b1");
#endif
label_B7AC:; /* DoorOpenCloseSFXInit */
    /* $B7AC: AD */ nes_cpu_instruction_boundary(0xB7AC, 4); g_cpu.A = nes_read(0xB287); FLAG_NZ(g_cpu.A);
label_B7AF:;
    /* $B7AF: 8D */ nes_cpu_instruction_boundary(0xB7AF, 4); nes_write(0x0610, g_cpu.A);
label_B7B2:;
    /* $B7B2: AD */ nes_cpu_instruction_boundary(0xB7B2, 4); g_cpu.A = nes_read(0xB288); FLAG_NZ(g_cpu.A);
label_B7B5:;
    /* $B7B5: 29 */ nes_cpu_instruction_boundary(0xB7B5, 2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_B7B7:;
    /* $B7B7: 8D */ nes_cpu_instruction_boundary(0xB7B7, 4); nes_write(0x0611, g_cpu.A);
label_B7BA:;
    /* $B7BA: A9 */ nes_cpu_instruction_boundary(0xB7BA, 2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_B7BC:;
    /* $B7BC: 8D */ nes_cpu_instruction_boundary(0xB7BC, 4); nes_write(0x0612, g_cpu.A);
label_B7BF:;
    /* $B7BF: A9 */ nes_cpu_instruction_boundary(0xB7BF, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B7C1:;
    /* $B7C1: 8D */ nes_cpu_instruction_boundary(0xB7C1, 4); nes_write(0x0613, g_cpu.A);
label_B7C4:;
    /* $B7C4: A9 */ nes_cpu_instruction_boundary(0xB7C4, 2); g_cpu.A = 0x1F; FLAG_NZ(g_cpu.A);
label_B7C6:;
    /* $B7C6: A0 */ nes_cpu_instruction_boundary(0xB7C6, 2); g_cpu.Y = 0x85; FLAG_NZ(g_cpu.Y);
label_B7C8:;
    /* $B7C8: 4C */ nes_cpu_instruction_boundary(0xB7C8, 3); nes_cpu_instruction_boundary(0xB452, 2); func_B452_b1(); return;
}

void func_B7CB_b1(void) { /* DoorOpenCloseSFXCont */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7CB_b1");
#endif
label_B7CB:; /* DoorOpenCloseSFXCont */
    /* $B7CB: 20 */ nes_cpu_instruction_boundary(0xB7CB, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCD; g_cpu.S--; func_B4A9_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB7CB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B7CE:;
    /* $B7CE: D0 */ nes_cpu_instruction_boundary(0xB7CE, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B7D3; }
label_B7D0:;
    /* $B7D0: 4C */ nes_cpu_instruction_boundary(0xB7D0, 3); nes_cpu_instruction_boundary(0xB896, 2); func_B896_b1(); return;
label_B7D3:; /* DoorOpenCloseSFXCont_endIf_A */
    /* $B7D3: 20 */ nes_cpu_instruction_boundary(0xB7D3, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD5; g_cpu.S--; func_B98C_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB7D3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B7D6:;
    /* $B7D6: 4C */ nes_cpu_instruction_boundary(0xB7D6, 3); nes_cpu_instruction_boundary(0xB869, 2); func_B869_b1(); return;
}

void func_B7D9_b1(void) { /* BeepSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7D9_b1");
#endif
label_B7D9:; /* BeepSFXInit */
    /* $B7D9: AD */ nes_cpu_instruction_boundary(0xB7D9, 4); g_cpu.A = nes_read(0x068B); FLAG_NZ(g_cpu.A);
label_B7DC:;
    /* $B7DC: 29 */ nes_cpu_instruction_boundary(0xB7DC, 2); g_cpu.A &= 0x80; FLAG_NZ(g_cpu.A);
label_B7DE:;
    /* $B7DE: D0 */ nes_cpu_instruction_boundary(0xB7DE, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB7A6); return; }
label_B7E0:;
    /* $B7E0: A9 */ nes_cpu_instruction_boundary(0xB7E0, 2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_B7E2:;
    /* $B7E2: A0 */ nes_cpu_instruction_boundary(0xB7E2, 2); g_cpu.Y = 0x79; FLAG_NZ(g_cpu.Y);
label_B7E4:;
    /* $B7E4: 4C */ nes_cpu_instruction_boundary(0xB7E4, 3); nes_cpu_instruction_boundary(0xB452, 2); func_B452_b1(); return;
}

void func_B7E7_b1(void) { /* BeepSFXCont */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7E7_b1");
#endif
label_B7E7:; /* BeepSFXCont */
    /* $B7E7: 20 */ nes_cpu_instruction_boundary(0xB7E7, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE9; g_cpu.S--; func_B4A9_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB7E7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B7EA:;
    /* $B7EA: D0 */ nes_cpu_instruction_boundary(0xB7EA, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB7A6); return; }
label_B7EC:;
    /* $B7EC: 4C */ nes_cpu_instruction_boundary(0xB7EC, 3); nes_cpu_instruction_boundary(0xB896, 2); func_B896_b1(); return;
}

void func_B7EF_b1(void) { /* BigEnemyHitSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7EF_b1");
#endif
label_B7EF:; /* BigEnemyHitSFXInit */
    /* $B7EF: A9 */ nes_cpu_instruction_boundary(0xB7EF, 2); g_cpu.A = 0x12; FLAG_NZ(g_cpu.A);
label_B7F1:;
    /* $B7F1: 8D */ nes_cpu_instruction_boundary(0xB7F1, 4); nes_write(0x0612, g_cpu.A);
label_B7F4:;
    /* $B7F4: A9 */ nes_cpu_instruction_boundary(0xB7F4, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B7F6:;
    /* $B7F6: 8D */ nes_cpu_instruction_boundary(0xB7F6, 4); nes_write(0x0613, g_cpu.A);
label_B7F9:;
    /* $B7F9: AD */ nes_cpu_instruction_boundary(0xB7F9, 4); g_cpu.A = nes_read(0xB27F); FLAG_NZ(g_cpu.A);
label_B7FC:;
    /* $B7FC: 8D */ nes_cpu_instruction_boundary(0xB7FC, 4); nes_write(0x0610, g_cpu.A);
label_B7FF:;
    /* $B7FF: AD */ nes_cpu_instruction_boundary(0xB7FF, 4); g_cpu.A = nes_read(0xB280); FLAG_NZ(g_cpu.A);
label_B802:;
    /* $B802: 29 */ nes_cpu_instruction_boundary(0xB802, 2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_B804:;
    /* $B804: 8D */ nes_cpu_instruction_boundary(0xB804, 4); nes_write(0x0611, g_cpu.A);
label_B807:;
    /* $B807: A9 */ nes_cpu_instruction_boundary(0xB807, 2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_B809:;
    /* $B809: A0 */ nes_cpu_instruction_boundary(0xB809, 2); g_cpu.Y = 0x7D; FLAG_NZ(g_cpu.Y);
label_B80B:;
    /* $B80B: 4C */ nes_cpu_instruction_boundary(0xB80B, 3); nes_cpu_instruction_boundary(0xB452, 2); func_B452_b1(); return;
}

void func_B80E_b1(void) { /* BigEnemyHitSFXCont */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B80E_b1");
#endif
label_B80E:; /* BigEnemyHitSFXCont */
    /* $B80E: 20 */ nes_cpu_instruction_boundary(0xB80E, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x10; g_cpu.S--; func_B4A9_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB80E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B811:;
    /* $B811: D0 */ nes_cpu_instruction_boundary(0xB811, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B816; }
label_B813:;
    /* $B813: 4C */ nes_cpu_instruction_boundary(0xB813, 3); nes_cpu_instruction_boundary(0xB896, 2); func_B896_b1(); return;
label_B816:; /* BigEnemyHitSFXCont_dontEnd */
    /* $B816: 20 */ nes_cpu_instruction_boundary(0xB816, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x18; g_cpu.S--; func_B978_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB816, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B819:;
    /* $B819: A5 */ nes_cpu_instruction_boundary(0xB819, 3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_B81B:;
    /* $B81B: 29 */ nes_cpu_instruction_boundary(0xB81B, 2); g_cpu.A &= 0x3C; FLAG_NZ(g_cpu.A);
label_B81D:;
    /* $B81D: 8D */ nes_cpu_instruction_boundary(0xB81D, 4); nes_write(0x0673, g_cpu.A);
label_B820:;
    /* $B820: AD */ nes_cpu_instruction_boundary(0xB820, 4); g_cpu.A = nes_read(0x0610); FLAG_NZ(g_cpu.A);
label_B823:;
    /* $B823: 29 */ nes_cpu_instruction_boundary(0xB823, 2); g_cpu.A &= 0xC3; FLAG_NZ(g_cpu.A);
label_B825:;
    /* $B825: 0D */ nes_cpu_instruction_boundary(0xB825, 4); g_cpu.A |= nes_read(0x0673); FLAG_NZ(g_cpu.A);
label_B828:;
    /* $B828: 8D */ nes_cpu_instruction_boundary(0xB828, 4); nes_write(0x400A, g_cpu.A);
label_B82B:;
    /* $B82B: AD */ nes_cpu_instruction_boundary(0xB82B, 4); g_cpu.A = nes_read(0x0611); FLAG_NZ(g_cpu.A);
label_B82E:;
    /* $B82E: 09 */ nes_cpu_instruction_boundary(0xB82E, 2); g_cpu.A |= 0x40; FLAG_NZ(g_cpu.A);
label_B830:;
    /* $B830: 8D */ nes_cpu_instruction_boundary(0xB830, 4); nes_write(0x400B, g_cpu.A);
label_B833:;
    /* $B833: 60 */ nes_cpu_instruction_boundary(0xB833, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B834_b1(void) { /* SamusToBallSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B834_b1");
#endif
label_B834:; /* SamusToBallSFXInit */
    /* $B834: A9 */ nes_cpu_instruction_boundary(0xB834, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_B836:;
    /* $B836: A0 */ nes_cpu_instruction_boundary(0xB836, 2); g_cpu.Y = 0x6D; FLAG_NZ(g_cpu.Y);
label_B838:;
    /* $B838: 20 */ nes_cpu_instruction_boundary(0xB838, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3A; g_cpu.S--; func_B452_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB838, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B83B:;
    /* $B83B: A9 */ nes_cpu_instruction_boundary(0xB83B, 2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_B83D:;
    /* $B83D: 8D */ nes_cpu_instruction_boundary(0xB83D, 4); nes_write(0x0616, g_cpu.A);
label_B840:;
    /* $B840: AD */ nes_cpu_instruction_boundary(0xB840, 4); g_cpu.A = nes_read(0xB26F); FLAG_NZ(g_cpu.A);
label_B843:;
    /* $B843: 8D */ nes_cpu_instruction_boundary(0xB843, 4); nes_write(0x0610, g_cpu.A);
label_B846:;
    /* $B846: AD */ nes_cpu_instruction_boundary(0xB846, 4); g_cpu.A = nes_read(0xB270); FLAG_NZ(g_cpu.A);
label_B849:;
    /* $B849: 29 */ nes_cpu_instruction_boundary(0xB849, 2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_B84B:;
    /* $B84B: 8D */ nes_cpu_instruction_boundary(0xB84B, 4); nes_write(0x0611, g_cpu.A);
label_B84E:;
    /* $B84E: 60 */ nes_cpu_instruction_boundary(0xB84E, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B84F_b1(void) { /* SamusToBallSFXCont */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B84F_b1");
#endif
label_B84F:; /* SamusToBallSFXCont */
    /* $B84F: 20 */ nes_cpu_instruction_boundary(0xB84F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x51; g_cpu.S--; func_B4A9_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB84F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B852:;
    /* $B852: D0 */ nes_cpu_instruction_boundary(0xB852, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B857; }
label_B854:;
    /* $B854: 4C */ nes_cpu_instruction_boundary(0xB854, 3); nes_cpu_instruction_boundary(0xB896, 2); func_B896_b1(); return;
label_B857:;
    /* $B857: 20 */ nes_cpu_instruction_boundary(0xB857, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x59; g_cpu.S--; func_B9A0_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB857, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B85A:;
    /* $B85A: AD */ nes_cpu_instruction_boundary(0xB85A, 4); g_cpu.A = nes_read(0x0614); FLAG_NZ(g_cpu.A);
label_B85D:;
    /* $B85D: 8D */ nes_cpu_instruction_boundary(0xB85D, 4); nes_write(0x0612, g_cpu.A);
label_B860:;
    /* $B860: AD */ nes_cpu_instruction_boundary(0xB860, 4); g_cpu.A = nes_read(0x0615); FLAG_NZ(g_cpu.A);
label_B863:;
    /* $B863: 8D */ nes_cpu_instruction_boundary(0xB863, 4); nes_write(0x0613, g_cpu.A);
label_B866:;
    /* $B866: 20 */ nes_cpu_instruction_boundary(0xB866, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x68; g_cpu.S--; func_B98C_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB866, _cbs);
    recomp_stack_pop();
#endif
    return; } }
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

void func_B878_b1(void) { /* BombLaunchSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B878_b1");
#endif
label_B878:; /* BombLaunchSFXInit */
    /* $B878: A9 */ nes_cpu_instruction_boundary(0xB878, 2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_B87A:;
    /* $B87A: A0 */ nes_cpu_instruction_boundary(0xB87A, 2); g_cpu.Y = 0x65; FLAG_NZ(g_cpu.Y);
label_B87C:;
    /* $B87C: 4C */ nes_cpu_instruction_boundary(0xB87C, 3); nes_cpu_instruction_boundary(0xB452, 2); func_B452_b1(); return;
}

void func_B87F_b1(void) { /* BombLaunchSFXCont */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B87F_b1");
#endif
label_B87F:; /* BombLaunchSFXCont */
    /* $B87F: 20 */ nes_cpu_instruction_boundary(0xB87F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; func_B4A9_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB87F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B882:;
    /* $B882: D0 */ nes_cpu_instruction_boundary(0xB882, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B8A6; }
label_B884:;
    /* $B884: EE */ nes_cpu_instruction_boundary(0xB884, 6); { uint16_t a=0x0673; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B887:;
    /* $B887: AD */ nes_cpu_instruction_boundary(0xB887, 4); g_cpu.A = nes_read(0x0673); FLAG_NZ(g_cpu.A);
label_B88A:;
    /* $B88A: C9 */ nes_cpu_instruction_boundary(0xB88A, 2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_B88C:;
    /* $B88C: D0 */ nes_cpu_instruction_boundary(0xB88C, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B891; }
label_B88E:;
    /* $B88E: 4C */ nes_cpu_instruction_boundary(0xB88E, 3); nes_cpu_instruction_boundary(0xB896, 2); func_B896_b1(); return;
label_B891:; /* BombLaunchSFXCont_endIf_A */
    /* $B891: A0 */ nes_cpu_instruction_boundary(0xB891, 2); g_cpu.Y = 0x69; FLAG_NZ(g_cpu.Y);
label_B893:;
    /* $B893: 4C */ nes_cpu_instruction_boundary(0xB893, 3); nes_cpu_instruction_boundary(0xB36C, 2); func_B36C_b1(); return;
label_B8A6:; /* EndTriSFX_RTS */
    /* $B8A6: 60 */ nes_cpu_instruction_boundary(0xB8A6, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B8A7_b1(void) { /* MetroidHitSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8A7_b1");
#endif
label_B8A7:; /* MetroidHitSFXInit */
    /* $B8A7: A9 */ nes_cpu_instruction_boundary(0xB8A7, 2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_B8A9:;
    /* $B8A9: A0 */ nes_cpu_instruction_boundary(0xB8A9, 2); g_cpu.Y = 0x71; FLAG_NZ(g_cpu.Y);
label_B8AB:;
    /* $B8AB: 20 */ nes_cpu_instruction_boundary(0xB8AB, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAD; g_cpu.S--; func_B452_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB8AB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B8AE:;
    /* $B8AE: 4C */ nes_cpu_instruction_boundary(0xB8AE, 3); nes_cpu_instruction_boundary(0xB8C3, 2); func_B8C3_b1(); return;
}

void func_B8B1_b1(void) { /* MetroidHitSFXCont */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8B1_b1");
#endif
label_B8B1:; /* MetroidHitSFXCont */
    /* $B8B1: 20 */ nes_cpu_instruction_boundary(0xB8B1, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; func_B4A9_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB8B1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B8B4:;
    /* $B8B4: F0 */ nes_cpu_instruction_boundary(0xB8B4, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B8C3; }
label_B8B6:;
    /* $B8B6: EE */ nes_cpu_instruction_boundary(0xB8B6, 6); { uint16_t a=0x0673; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B8B9:;
    /* $B8B9: AD */ nes_cpu_instruction_boundary(0xB8B9, 4); g_cpu.A = nes_read(0x0673); FLAG_NZ(g_cpu.A);
label_B8BC:;
    /* $B8BC: C9 */ nes_cpu_instruction_boundary(0xB8BC, 2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_B8BE:;
    /* $B8BE: D0 */ nes_cpu_instruction_boundary(0xB8BE, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB8A6); return; }
label_B8C0:;
    /* $B8C0: 4C */ nes_cpu_instruction_boundary(0xB8C0, 3); nes_cpu_instruction_boundary(0xB896, 2); func_B896_b1(); return;
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

void func_B8D2_b1(void) { /* SamusDieSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8D2_b1");
#endif
label_B8D2:; /* SamusDieSFXInit */
    /* $B8D2: 20 */ nes_cpu_instruction_boundary(0xB8D2, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD4; g_cpu.S--; func_B404_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB8D2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B8D5:;
    /* $B8D5: A9 */ nes_cpu_instruction_boundary(0xB8D5, 2); g_cpu.A = 0x0E; FLAG_NZ(g_cpu.A);
label_B8D7:;
    /* $B8D7: A0 */ nes_cpu_instruction_boundary(0xB8D7, 2); g_cpu.Y = 0x75; FLAG_NZ(g_cpu.Y);
label_B8D9:;
    /* $B8D9: 20 */ nes_cpu_instruction_boundary(0xB8D9, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDB; g_cpu.S--; func_B452_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB8D9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B8DC:;
    /* $B8DC: A9 */ nes_cpu_instruction_boundary(0xB8DC, 2); g_cpu.A = 0x15; FLAG_NZ(g_cpu.A);
label_B8DE:;
    /* $B8DE: 8D */ nes_cpu_instruction_boundary(0xB8DE, 4); nes_write(0x0616, g_cpu.A);
label_B8E1:;
    /* $B8E1: AD */ nes_cpu_instruction_boundary(0xB8E1, 4); g_cpu.A = nes_read(0xB277); FLAG_NZ(g_cpu.A);
label_B8E4:;
    /* $B8E4: 8D */ nes_cpu_instruction_boundary(0xB8E4, 4); nes_write(0x0610, g_cpu.A);
label_B8E7:;
    /* $B8E7: A9 */ nes_cpu_instruction_boundary(0xB8E7, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B8E9:;
    /* $B8E9: 8D */ nes_cpu_instruction_boundary(0xB8E9, 4); nes_write(0x0611, g_cpu.A);
label_B8EC:; /* SamusDieSFXInit_RTS */
    /* $B8EC: 60 */ nes_cpu_instruction_boundary(0xB8EC, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B8ED_b1(void) { /* SamusDieSFXCont */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8ED_b1");
#endif
label_B8ED:; /* SamusDieSFXCont */
    /* $B8ED: 20 */ nes_cpu_instruction_boundary(0xB8ED, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xEF; g_cpu.S--; func_B4A9_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB8ED, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B8F0:;
    /* $B8F0: D0 */ nes_cpu_instruction_boundary(0xB8F0, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_B90C; }
label_B8F2:;
    /* $B8F2: A9 */ nes_cpu_instruction_boundary(0xB8F2, 2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_B8F4:;
    /* $B8F4: 8D */ nes_cpu_instruction_boundary(0xB8F4, 4); nes_write(0x0612, g_cpu.A);
label_B8F7:;
    /* $B8F7: A9 */ nes_cpu_instruction_boundary(0xB8F7, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B8F9:;
    /* $B8F9: 8D */ nes_cpu_instruction_boundary(0xB8F9, 4); nes_write(0x0613, g_cpu.A);
label_B8FC:;
    /* $B8FC: 20 */ nes_cpu_instruction_boundary(0xB8FC, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFE; g_cpu.S--; func_B98C_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB8FC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B8FF:;
    /* $B8FF: EE */ nes_cpu_instruction_boundary(0xB8FF, 6); { uint16_t a=0x0673; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B902:;
    /* $B902: AD */ nes_cpu_instruction_boundary(0xB902, 4); g_cpu.A = nes_read(0x0673); FLAG_NZ(g_cpu.A);
label_B905:;
    /* $B905: C9 */ nes_cpu_instruction_boundary(0xB905, 2); { int r=g_cpu.A-0x06; g_cpu.C=(g_cpu.A>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_B907:;
    /* $B907: D0 */ nes_cpu_instruction_boundary(0xB907, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xB8EC); return; }
label_B909:;
    /* $B909: 4C */ nes_cpu_instruction_boundary(0xB909, 3); nes_cpu_instruction_boundary(0xB896, 2); func_B896_b1(); return;
label_B90C:;
    /* $B90C: 20 */ nes_cpu_instruction_boundary(0xB90C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0E; g_cpu.S--; func_B9A0_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB90C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B90F:;
    /* $B90F: AD */ nes_cpu_instruction_boundary(0xB90F, 4); g_cpu.A = nes_read(0x0614); FLAG_NZ(g_cpu.A);
label_B912:;
    /* $B912: 8D */ nes_cpu_instruction_boundary(0xB912, 4); nes_write(0x0612, g_cpu.A);
label_B915:;
    /* $B915: AD */ nes_cpu_instruction_boundary(0xB915, 4); g_cpu.A = nes_read(0x0615); FLAG_NZ(g_cpu.A);
label_B918:;
    /* $B918: 8D */ nes_cpu_instruction_boundary(0xB918, 4); nes_write(0x0613, g_cpu.A);
label_B91B:;
    /* $B91B: 20 */ nes_cpu_instruction_boundary(0xB91B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1D; g_cpu.S--; func_B978_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB91B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B91E:;
    /* $B91E: 4C */ nes_cpu_instruction_boundary(0xB91E, 3); nes_cpu_instruction_boundary(0xB869, 2); func_B869_b1(); return;
}

void func_B940_b1_body(int _entry) { /* StatueRaiseSFXCont */
    switch (_entry) {
        case 1: goto label_B948;
    }
label_B940:; /* StatueRaiseSFXCont */
    /* $B940: 20 */ nes_cpu_instruction_boundary(0xB940, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x42; g_cpu.S--; func_B4A9_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB940, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B943:;
    /* $B943: D0 */ nes_cpu_instruction_boundary(0xB943, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B972; }
label_B945:;
    /* $B945: EE */ nes_cpu_instruction_boundary(0xB945, 6); { uint16_t a=0x0673; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B948:;
    /* $B948: AD */ nes_cpu_instruction_boundary(0xB948, 4); g_cpu.A = nes_read(0x0673); FLAG_NZ(g_cpu.A);
label_B94B:;
    /* $B94B: C9 */ nes_cpu_instruction_boundary(0xB94B, 2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_B94D:;
    /* $B94D: D0 */ nes_cpu_instruction_boundary(0xB94D, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B952; }
label_B94F:;
    /* $B94F: 4C */ nes_cpu_instruction_boundary(0xB94F, 3); nes_cpu_instruction_boundary(0xB896, 2); func_B896_b1(); return;
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
    /* $B964: 20 */ nes_cpu_instruction_boundary(0xB964, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x66; g_cpu.S--; func_B978_b1();
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
    /* $B96F: 4C */ nes_cpu_instruction_boundary(0xB96F, 3); nes_cpu_instruction_boundary(0xB869, 2); func_B869_b1(); return;
label_B972:; /* StatueRaiseSFXCont_endIf_A */
    /* $B972: 20 */ nes_cpu_instruction_boundary(0xB972, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x74; g_cpu.S--; func_B98C_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB972, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B975:;
    /* $B975: 4C */ nes_cpu_instruction_boundary(0xB975, 3); nes_cpu_instruction_boundary(0xB869, 2); func_B869_b1(); return;
}

void func_B940_b1(void) { /* StatueRaiseSFXCont */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B940_b1");
#endif
    func_B940_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B948_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B948_b1");
#endif
    func_B940_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B95C_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B95C_b1");
#endif
label_B95C:;
    /* $B95C: 8D */ nes_cpu_instruction_boundary(0xB95C, 4); nes_write(0x0612, g_cpu.A);
label_B95F:;
    /* $B95F: A9 */ nes_cpu_instruction_boundary(0xB95F, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B961:;
    /* $B961: 8D */ nes_cpu_instruction_boundary(0xB961, 4); nes_write(0x0613, g_cpu.A);
label_B964:;
    /* $B964: 20 */ nes_cpu_instruction_boundary(0xB964, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x66; g_cpu.S--; func_B978_b1();
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
    /* $B96F: 4C */ nes_cpu_instruction_boundary(0xB96F, 3); nes_cpu_instruction_boundary(0xB869, 2); func_B869_b1(); return;
}

void func_B970_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B970_b1");
#endif
label_B970:;
    /* $B970: 69 */ nes_cpu_instruction_boundary(0xB970, 2); { uint16_t r = g_cpu.A + 0xB8 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xB8); g_cpu.A=r&0xFF; }
label_B972:; /* StatueRaiseSFXCont_endIf_A */
    /* $B972: 20 */ nes_cpu_instruction_boundary(0xB972, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x74; g_cpu.S--; func_B98C_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB972, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B975:;
    /* $B975: 4C */ nes_cpu_instruction_boundary(0xB975, 3); nes_cpu_instruction_boundary(0xB869, 2); func_B869_b1(); return;
}

void func_B9B4_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9B4_b1");
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

void func_B9B5_b1_body(int _entry) { /* DivideSFXTriPeriod_loop */
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

void func_B9B5_b1(void) { /* DivideSFXTriPeriod_loop */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9B5_b1");
#endif
    func_B9B5_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B9C3_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9C3_b1");
#endif
    func_B9B5_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BA11_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA11_b1");
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

void func_BC77_b1(void) { /* GotoMusic00Init */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC77_b1");
#endif
label_BC77:; /* GotoMusic00Init */
    /* $BC77: 4C */ nes_cpu_instruction_boundary(0xBC77, 3); nes_cpu_instruction_boundary(0xBCAA, 2); func_BCAA_b1(); return;
}

void func_BC7D_b1(void) { /* GotoMusic02Init */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC7D_b1");
#endif
label_BC7D:; /* GotoMusic02Init */
    /* $BC7D: 4C */ nes_cpu_instruction_boundary(0xBC7D, 3); nes_cpu_instruction_boundary(0xBC9A, 2); func_BC9A_b1(); return;
}

void func_BC80_b1(void) { /* GotoMusic03Init */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC80_b1");
#endif
label_BC80:; /* GotoMusic03Init */
    /* $BC80: 4C */ nes_cpu_instruction_boundary(0xBC80, 3); nes_cpu_instruction_boundary(0xBC96, 2); func_BC96_b1(); return;
}

void func_BC83_b1(void) { /* GotoMusic04Init */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC83_b1");
#endif
label_BC83:; /* GotoMusic04Init */
    /* $BC83: 4C */ nes_cpu_instruction_boundary(0xBC83, 3); nes_cpu_instruction_boundary(0xBC89, 2); func_BC89_b1(); return;
}

void func_BBEC_b1_body(int _entry) {
    switch (_entry) {
        case 1: goto label_BBF7;
    }
label_BBEC:;
    /* $BBEC: 01 */ nes_cpu_instruction_boundary(0xBBEC, 6); g_cpu.A |= nes_read(nes_read16zp((0xB2 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BBEE:;
    /* $BBEE: 8D */ nes_cpu_instruction_boundary(0xBBEE, 4); nes_write(0x400E, g_cpu.A);
label_BBF1:;
    /* $BBF1: B9 */ nes_cpu_instruction_boundary(0xBBF1, 4); g_cpu.A = nes_read((0xB202 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBF4:;
    /* $BBF4: 8D */ nes_cpu_instruction_boundary(0xBBF4, 4); nes_write(0x400F, g_cpu.A);
label_BBF7:; /* MusicChannelInstr_SongNoteNoise_endIf_A */
    /* $BBF7: 4C */ nes_cpu_instruction_boundary(0xBBF7, 3); nes_cpu_instruction_boundary(0xBBA8, 2); func_BBA8_b1(); return;
}

void func_BBEC_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BBEC_b1");
#endif
    func_BBEC_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BBF7_b1(void) { /* MusicChannelInstr_SongNoteNoise_endIf_A */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BBF7_b1");
#endif
    func_BBEC_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BC23_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC23_b1");
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
    /* $BC42: 20 */ nes_cpu_instruction_boundary(0xBC42, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x44; g_cpu.S--; func_B4BD_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC42, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC45:;
    /* $BC45: 20 */ nes_cpu_instruction_boundary(0xBC45, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x47; g_cpu.S--; func_BC53_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC45, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC48:;
    /* $BC48: 6C */ nes_cpu_instruction_boundary(0xBC48, 5); { uint16_t _jt = nes_read16zp(0xE2); nes_cpu_instruction_boundary(_jt, 2); call_by_address_tail(_jt, -1); return; }
}

void func_BC34_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC34_b1");
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
    /* $BC42: 20 */ nes_cpu_instruction_boundary(0xBC42, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x44; g_cpu.S--; func_B4BD_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC42, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC45:;
    /* $BC45: 20 */ nes_cpu_instruction_boundary(0xBC45, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x47; g_cpu.S--; func_BC53_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC45, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC48:;
    /* $BC48: 6C */ nes_cpu_instruction_boundary(0xBC48, 5); { uint16_t _jt = nes_read16zp(0xE2); nes_cpu_instruction_boundary(_jt, 2); call_by_address_tail(_jt, -1); return; }
}

void func_BEE9_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BEE9_b1");
#endif
label_BEE9:;
    /* $BEE9: 00 */ nes_cpu_instruction_boundary(0xBEE9, 7); nes_brk_executed(0xBEE9); return;
}

void func_C2BF_b1_body(int _entry) { /* Adiv16 */
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

void func_C2BF_b1(void) { /* Adiv16 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C2BF_b1");
#endif
    func_C2BF_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C2C0_b1(void) { /* Adiv8 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C2C0_b1");
#endif
    func_C2BF_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C2C5_b1(void) { /* Amul16 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C2C5_b1");
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

void func_C3D4_b1(void) { /* TwosComplement */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C3D4_b1");
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

void func_CB73_b1(void) { /* SelectSamusPalette */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CB73_b1");
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

void func_CBDA_b1_body(int _entry) { /* SFX_Door */
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

void func_CBDA_b1(void) { /* SFX_Door */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CBDA_b1");
#endif
    func_CBDA_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_CC03_b1(void) { /* MotherBrainMusic */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CC03_b1");
#endif
    func_CBDA_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_CC07_b1(void) { /* TourianMusic */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CC07_b1");
#endif
    func_CBDA_b1_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D2FD_b1(void) { /* SetObjAnimIndex */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D2FD_b1");
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

void func_DC1E_b1(void) { /* MapScrollRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DC1E_b1");
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

void func_E449_b1(void) { /* NegateTemp00Temp01 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E449_b1");
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

void func_E770_b1(void) { /* EnemyCheckMoveUp */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E770_b1");
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

void func_E77B_b1(void) { /* EnemyCheckMoveDown */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E77B_b1");
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

void func_E8F1_b1(void) { /* EnemyCheckMoveLeft */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E8F1_b1");
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

void func_E8FC_b1(void) { /* EnemyCheckMoveRight */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E8FC_b1");
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

void func_E96A_b1(void) { /* MakeRoomRAMPtr */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E96A_b1");
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

void func_F744_b1(void) { /* OrEnData05 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F744_b1");
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

void func_F74B_b1(void) { /* ReadTableAt968B */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F74B_b1");
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

void func_86FB_b1_body(int _entry) {
    switch (_entry) {
        case 1: goto label_86FD;
        case 2: goto label_8701;
    }
label_86FB:;
    /* $86FB: B1 */ nes_cpu_instruction_boundary(0x86FB, 5); g_cpu.A = nes_read((nes_read16zp(0x87) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_86FD:; /* ObjPlace6 */
    /* $86FD: E8 */ nes_cpu_instruction_boundary(0x86FD, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_86FE:;
    /* $86FE: FC */ nes_cpu_instruction_boundary(0x86FE, 4); (void)nes_read((0xFCEA + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8701:; /* ObjPlace0 */
    /* $8701: F0 */ nes_cpu_instruction_boundary(0x8701, 2); if (g_cpu.Z) {
    nes_cpu_instruction_boundary(0x86FB, 2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_86FB;
    }
label_8703:;
    /* $8703: F0 */ nes_cpu_instruction_boundary(0x8703, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8705; }
label_8705:;
    /* $8705: F8 */ nes_cpu_instruction_boundary(0x8705, 2); g_cpu.D = 1;
label_8706:;
    /* $8706: F0 */ nes_cpu_instruction_boundary(0x8706, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0x8700); return; }
label_8708:;
    /* $8708: F8 */ nes_cpu_instruction_boundary(0x8708, 2); g_cpu.D = 1;
label_8709:;
    /* $8709: F8 */ nes_cpu_instruction_boundary(0x8709, 2); g_cpu.D = 1;
label_870A:;
    /* $870A: 00 */ nes_cpu_instruction_boundary(0x870A, 7); nes_brk_executed(0x870A); return;
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

void func_86FD_b1(void) { /* ObjPlace6 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_86FD_b1");
#endif
    func_86FB_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8701_b1(void) { /* ObjPlace0 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8701_b1");
#endif
    func_86FB_b1_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9144_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9144_b1");
#endif
label_9144:;
    /* $9144: 60 */ nes_cpu_instruction_boundary(0x9144, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_914A_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_914A_b1");
#endif
label_914A:;
    /* $914A: 30 */ nes_cpu_instruction_boundary(0x914A, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_91AC; }
label_914C:;
    /* $914C: 60 */ nes_cpu_instruction_boundary(0x914C, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_914D:;
    /* $914D: 70 */ nes_cpu_instruction_boundary(0x914D, 2); if (g_cpu.V) { maybe_trigger_vblank(1); call_by_address(0x913F); return; }
label_914F:;
    /* $914F: F8 */ nes_cpu_instruction_boundary(0x914F, 2); g_cpu.D = 1;
label_9150:;
    /* $9150: 10 */ nes_cpu_instruction_boundary(0x9150, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_9162; }
label_9152:;
    /* $9152: 10 */ nes_cpu_instruction_boundary(0x9152, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_9164; }
label_9154:;
    /* $9154: 10 */ nes_cpu_instruction_boundary(0x9154, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_9166; }
label_9156:;
    /* $9156: 00 */ nes_cpu_instruction_boundary(0x9156, 7); nes_brk_executed(0x9156); return;
label_9157:;
    /* $9157: 10 */ nes_cpu_instruction_boundary(0x9157, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_9159; }
label_9159:;
    /* $9159: 00 */ nes_cpu_instruction_boundary(0x9159, 7); nes_brk_executed(0x9159); return;
label_915A:;
    /* $915A: 00 */ nes_cpu_instruction_boundary(0x915A, 7); nes_brk_executed(0x915A); return;
label_915B:;
    /* $915B: 00 */ nes_cpu_instruction_boundary(0x915B, 7); nes_brk_executed(0x915B); return;
label_915C:;
    /* $915C: 00 */ nes_cpu_instruction_boundary(0x915C, 7); nes_brk_executed(0x915C); return;
label_915D:;
    /* $915D: 00 */ nes_cpu_instruction_boundary(0x915D, 7); nes_brk_executed(0x915D); return;
label_915E:;
    /* $915E: 00 */ nes_cpu_instruction_boundary(0x915E, 7); nes_brk_executed(0x915E); return;
label_915F:;
    /* $915F: 00 */ nes_cpu_instruction_boundary(0x915F, 7); nes_brk_executed(0x915F); return;
label_9160:; /* GFX_BrinstarSprites */
    /* $9160: 03 */ nes_cpu_instruction_boundary(0x9160, 8); { uint16_t a=nes_read16zp((0x0F + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9162:;
    /* $9162: 05 */ nes_cpu_instruction_boundary(0x9162, 3); g_cpu.A |= nes_read(0x32); FLAG_NZ(g_cpu.A);
label_9164:;
    /* $9164: D1 */ nes_cpu_instruction_boundary(0x9164, 5); { uint8_t m=nes_read((nes_read16zp(0x48) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9166:;
    /* $9166: 12 */ nes_cpu_instruction_boundary(0x9166, 2); /* ILLEGAL $12 — skip 1 */
label_9167:;
    /* $9167: 24 */ nes_cpu_instruction_boundary(0x9167, 3); { uint8_t m=nes_read(0x01); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_9169:;
    /* $9169: 02 */ nes_cpu_instruction_boundary(0x9169, 2); /* ILLEGAL $02 — skip 1 */
label_916A:;
    /* $916A: 02 */ nes_cpu_instruction_boundary(0x916A, 2); /* ILLEGAL $02 — skip 1 */
label_916B:;
    /* $916B: 11 */ nes_cpu_instruction_boundary(0x916B, 5); g_cpu.A |= nes_read((nes_read16zp(0x48) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_916D:;
    /* $916D: 20 */ nes_cpu_instruction_boundary(0x916D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x91; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6F; g_cpu.S--; if (!nes_dispatch_call(0x0000, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x916D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9170:;
    /* $9170: E0 */ nes_cpu_instruction_boundary(0x9170, 2); { int r=g_cpu.X-0xF0; g_cpu.C=(g_cpu.X>=0xF0)?1:0; FLAG_NZ(r&0xFF); }
label_9172:;
    /* $9172: EC */ nes_cpu_instruction_boundary(0x9172, 4); { uint8_t m=nes_read(0x92DE); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9175:;
    /* $9175: 8D */ nes_cpu_instruction_boundary(0x9175, 4); nes_write(0x3CA0, g_cpu.A);
label_9178:;
    /* $9178: C0 */ nes_cpu_instruction_boundary(0x9178, 2); { int r=g_cpu.Y-0x00; g_cpu.C=(g_cpu.Y>=0x00)?1:0; FLAG_NZ(r&0xFF); }
label_917A:;
    /* $917A: 0C */ nes_cpu_instruction_boundary(0x917A, 4); (void)nes_read(0x0102); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_917D:;
    /* $917D: 0C */ nes_cpu_instruction_boundary(0x917D, 4); (void)nes_read(0x0002); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9180:;
    /* $9180: 00 */ nes_cpu_instruction_boundary(0x9180, 7); nes_brk_executed(0x9180); return;
label_9181:;
    /* $9181: 00 */ nes_cpu_instruction_boundary(0x9181, 7); nes_brk_executed(0x9181); return;
label_9182:;
    /* $9182: F8 */ nes_cpu_instruction_boundary(0x9182, 2); g_cpu.D = 1;
label_9183:;
    /* $9183: 3E */ nes_cpu_instruction_boundary(0x9183, 7); { uint16_t a=(0x0F1F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9186:;
    /* $9186: 0F */ nes_cpu_instruction_boundary(0x9186, 6); { uint16_t a=0x000E; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9189:;
    /* $9189: 00 */ nes_cpu_instruction_boundary(0x9189, 7); nes_brk_executed(0x9189); return;
label_918A:;
    /* $918A: 00 */ nes_cpu_instruction_boundary(0x918A, 7); nes_brk_executed(0x918A); return;
label_918B:;
    /* $918B: 08 */ nes_cpu_instruction_boundary(0x918B, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_918C:;
    /* $918C: 04 */ nes_cpu_instruction_boundary(0x918C, 3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_918E:;
    /* $918E: 00 */ nes_cpu_instruction_boundary(0x918E, 7); nes_brk_executed(0x918E); return;
label_918F:;
    /* $918F: 00 */ nes_cpu_instruction_boundary(0x918F, 7); nes_brk_executed(0x918F); return;
label_9190:;
    /* $9190: 18 */ nes_cpu_instruction_boundary(0x9190, 2); g_cpu.C = 0;
label_9191:;
    /* $9191: 30 */ nes_cpu_instruction_boundary(0x9191, 2); if (g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0x91FF); return; }
label_9193:;
    /* $9193: 7C */ nes_cpu_instruction_boundary(0x9193, 4); (void)nes_read((0x785C + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9196:;
    /* $9196: 70 */ nes_cpu_instruction_boundary(0x9196, 2); if (g_cpu.V) { maybe_trigger_vblank(1); call_by_address(0x91B9); return; }
label_9198:;
    /* $9198: 00 */ nes_cpu_instruction_boundary(0x9198, 7); nes_brk_executed(0x9198); return;
label_9199:;
    /* $9199: 00 */ nes_cpu_instruction_boundary(0x9199, 7); nes_brk_executed(0x9199); return;
label_919A:;
    /* $919A: 0C */ nes_cpu_instruction_boundary(0x919A, 4); (void)nes_read(0x1C1C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_919D:;
    /* $919D: 38 */ nes_cpu_instruction_boundary(0x919D, 2); g_cpu.C = 1;
label_919E:;
    /* $919E: 30 */ nes_cpu_instruction_boundary(0x919E, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_91DC; }
label_91A0:;
    /* $91A0: 18 */ nes_cpu_instruction_boundary(0x91A0, 2); g_cpu.C = 0;
label_91A1:;
    /* $91A1: 30 */ nes_cpu_instruction_boundary(0x91A1, 2); if (g_cpu.N) { maybe_trigger_vblank(2); call_by_address(0x9203); return; }
label_91A3:;
    /* $91A3: 60 */ nes_cpu_instruction_boundary(0x91A3, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_91A4:;
    /* $91A4: 40 */ nes_cpu_instruction_boundary(0x91A4, 6); /* RTI */ g_rti_source = 0x91A4; g_rti_bank = 1; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_91A5:;
    /* $91A5: 40 */ nes_cpu_instruction_boundary(0x91A5, 6); /* RTI */ g_rti_source = 0x91A5; g_rti_bank = 1; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_91A6:;
    /* $91A6: 40 */ nes_cpu_instruction_boundary(0x91A6, 6); /* RTI */ g_rti_source = 0x91A6; g_rti_bank = 1; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_91A7:;
    /* $91A7: 01 */ nes_cpu_instruction_boundary(0x91A7, 6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_91A9:;
    /* $91A9: 00 */ nes_cpu_instruction_boundary(0x91A9, 7); nes_brk_executed(0x91A9); return;
label_91AA:;
    /* $91AA: 00 */ nes_cpu_instruction_boundary(0x91AA, 7); nes_brk_executed(0x91AA); return;
label_91AB:;
    /* $91AB: 00 */ nes_cpu_instruction_boundary(0x91AB, 7); nes_brk_executed(0x91AB); return;
label_91AC:;
    /* $91AC: 00 */ nes_cpu_instruction_boundary(0x91AC, 7); nes_brk_executed(0x91AC); return;
label_91AD:;
    /* $91AD: 00 */ nes_cpu_instruction_boundary(0x91AD, 7); nes_brk_executed(0x91AD); return;
label_91AE:;
    /* $91AE: 00 */ nes_cpu_instruction_boundary(0x91AE, 7); nes_brk_executed(0x91AE); return;
label_91AF:;
    /* $91AF: 3C */ nes_cpu_instruction_boundary(0x91AF, 4); (void)nes_read((0x0100 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_91B2:;
    /* $91B2: 00 */ nes_cpu_instruction_boundary(0x91B2, 7); nes_brk_executed(0x91B2); return;
label_91B3:;
    /* $91B3: 00 */ nes_cpu_instruction_boundary(0x91B3, 7); nes_brk_executed(0x91B3); return;
label_91B4:;
    /* $91B4: 03 */ nes_cpu_instruction_boundary(0x91B4, 8); { uint16_t a=nes_read16zp((0x04 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_91B6:;
    /* $91B6: 48 */ nes_cpu_instruction_boundary(0x91B6, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_91B7:;
    /* $91B7: 3C */ nes_cpu_instruction_boundary(0x91B7, 4); (void)nes_read((0x0100 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_91BA:;
    /* $91BA: 00 */ nes_cpu_instruction_boundary(0x91BA, 7); nes_brk_executed(0x91BA); return;
label_91BB:;
    /* $91BB: 03 */ nes_cpu_instruction_boundary(0x91BB, 8); { uint16_t a=nes_read16zp((0x0C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_91BD:;
    /* $91BD: 08 */ nes_cpu_instruction_boundary(0x91BD, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_91BE:;
    /* $91BE: 10 */ nes_cpu_instruction_boundary(0x91BE, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0x91C3); return; }
label_91C0:;
    /* $91C0: 48 */ nes_cpu_instruction_boundary(0x91C0, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_91C1:;
    /* $91C1: 2F */ nes_cpu_instruction_boundary(0x91C1, 6); { uint16_t a=0x4DB3; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_91C4:;
    /* $91C4: 32 */ nes_cpu_instruction_boundary(0x91C4, 2); /* ILLEGAL $32 — skip 1 */
label_91C5:;
    /* $91C5: CC */ nes_cpu_instruction_boundary(0x91C5, 4); { uint8_t m=nes_read(0x6F84); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_91C8:;
    /* $91C8: 48 */ nes_cpu_instruction_boundary(0x91C8, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_91C9:;
    /* $91C9: 28 */ nes_cpu_instruction_boundary(0x91C9, 4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_91CA:;
    /* $91CA: AF */ nes_cpu_instruction_boundary(0x91CA, 4); g_cpu.A = g_cpu.X = nes_read(0x783D); FLAG_NZ(g_cpu.A);
label_91CD:;
    /* $91CD: CD */ nes_cpu_instruction_boundary(0x91CD, 4); { uint8_t m=nes_read(0x6FB6); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_91D0:;
    /* $91D0: 00 */ nes_cpu_instruction_boundary(0x91D0, 7); nes_brk_executed(0x91D0); return;
label_91D1:;
    /* $91D1: 50 */ nes_cpu_instruction_boundary(0x91D1, 2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_91D3; }
label_91D3:;
    /* $91D3: C8 */ nes_cpu_instruction_boundary(0x91D3, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_91D4:;
    /* $91D4: 74 */ nes_cpu_instruction_boundary(0x91D4, 4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_91D6:;
    /* $91D6: 90 */ nes_cpu_instruction_boundary(0x91D6, 2); if (!g_cpu.C) { maybe_trigger_vblank(2); call_by_address(0x9210); return; }
label_91D8:;
    /* $91D8: 00 */ nes_cpu_instruction_boundary(0x91D8, 7); nes_brk_executed(0x91D8); return;
label_91D9:;
    /* $91D9: 00 */ nes_cpu_instruction_boundary(0x91D9, 7); nes_brk_executed(0x91D9); return;
label_91DA:;
    /* $91DA: B0 */ nes_cpu_instruction_boundary(0x91DA, 2); if (g_cpu.C) {
    nes_cpu_instruction_boundary(0x91C4, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_91C4;
    }
label_91DC:;
    /* $91DC: 74 */ nes_cpu_instruction_boundary(0x91DC, 4); (void)nes_read((0xBC + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_91DE:;
    /* $91DE: 18 */ nes_cpu_instruction_boundary(0x91DE, 2); g_cpu.C = 0;
label_91DF:;
    /* $91DF: 18 */ nes_cpu_instruction_boundary(0x91DF, 2); g_cpu.C = 0;
label_91E0:;
    /* $91E0: 3C */ nes_cpu_instruction_boundary(0x91E0, 4); (void)nes_read((0xFF7F + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_91E3:;
    /* $91E3: FF */ nes_cpu_instruction_boundary(0x91E3, 7); { uint16_t a=(0x7EFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_91E6:;
    /* $91E6: 7B */ nes_cpu_instruction_boundary(0x91E6, 7); { uint16_t a=(0x3C3D + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_91E9:;
    /* $91E9: 7F */ nes_cpu_instruction_boundary(0x91E9, 7); { uint16_t a=(0xFCFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_91EC:;
    /* $91EC: D1 */ nes_cpu_instruction_boundary(0x91EC, 5); { uint8_t m=nes_read((nes_read16zp(0x50) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_91EE:;
    /* $91EE: 69 */ nes_cpu_instruction_boundary(0x91EE, 2); { uint16_t r = g_cpu.A + 0x0E + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0E); g_cpu.A=r&0xFF; }
label_91F0:;
    /* $91F0: 00 */ nes_cpu_instruction_boundary(0x91F0, 7); nes_brk_executed(0x91F0); return;
label_91F1:; return;
label_91F2:; return;
label_91F4:; return;
label_91F6:; return;
label_91F8:; return;
label_91F9:; return;
label_91FA:; return;
label_91FC:; return;
label_91FE:; return;
label_9200:; return;
label_9202:; return;
label_9205:; return;
label_9207:; return;
label_920A:; return;
label_920C:; return;
label_920E:; return;
label_920F:; return;
label_9212:; return;
label_9213:; return;
label_9214:; return;
label_9215:; return;
label_9216:; return;
label_9218:; return;
label_921B:; return;
label_921D:; return;
label_921E:; return;
label_9220:; return;
label_9221:; return;
label_9223:; return;
label_9225:; return;
label_9228:; return;
label_9229:; return;
label_922B:; return;
label_922C:; return;
label_922D:; return;
label_922E:; return;
label_9230:; return;
label_9231:; return;
label_9232:; return;
label_9233:; return;
label_9234:; return;
label_9235:; return;
label_9237:; return;
label_923A:; return;
label_923B:; return;
label_923D:; return;
label_923E:; return;
label_923F:; return;
label_9241:; return;
label_9243:; return;
label_9244:; return;
label_9245:; return;
label_9247:; return;
label_9249:; return;
label_924B:; return;
label_924C:; return;
label_924E:; return;
label_9250:; return;
label_9251:; return;
label_9253:; return;
label_9256:; return;
label_9259:; return;
label_925C:; return;
label_925E:; return;
label_9260:; return;
label_9261:; return;
label_9264:; return;
label_9267:; return;
label_9268:; return;
label_9269:; return;
label_926C:; return;
label_926E:; return;
label_9271:; return;
label_9272:; return;
label_9273:; return;
label_9274:; return;
label_9276:; return;
label_9277:; return;
label_9278:; return;
label_9279:; return;
label_927A:; return;
label_927B:; return;
label_927E:; return;
label_927F:; return;
label_9280:; return;
label_9283:; return;
label_9284:; return;
label_9286:; return;
label_9287:; return;
label_9288:; return;
label_9289:; return;
label_928A:; return;
label_928B:; return;
label_928C:; return;
label_928E:; return;
label_9290:; return;
label_9292:; return;
label_9295:; return;
label_9297:; return;
label_929A:; return;
label_929B:; return;
label_929C:; return;
label_929E:; return;
label_92A1:; return;
label_92A4:; return;
label_92A6:; return;
label_92A8:; return;
label_92A9:; return;
label_92AC:; return;
label_92AE:; return;
label_92B1:; return;
label_92B2:; return;
label_92B4:; return;
label_92B6:; return;
label_9332:; return;
label_9334:; return;
label_9335:; return;
label_9336:; return;
label_9339:; return;
label_933A:; return;
label_933C:; return;
label_933E:; return;
label_9340:; return;
label_9341:; return;
label_9342:; return;
label_9345:; return;
label_9346:; return;
label_9349:; return;
label_934B:; return;
label_934D:; return;
label_934F:; return;
label_9352:; return;
label_9354:; return;
label_9356:; return;
label_9358:; return;
label_935A:; return;
label_935D:; return;
label_935F:; return;
label_9361:; return;
label_9362:; return;
label_9363:; return;
label_9364:; return;
label_9365:; return;
label_9368:; return;
label_9369:; return;
label_936A:; return;
label_936B:; return;
label_936E:; return;
label_9370:; return;
label_9371:; return;
label_9372:; return;
label_9373:; return;
label_9374:; return;
label_9375:; return;
label_9376:; return;
label_9377:; return;
label_9379:; return;
label_937A:; return;
label_937B:; return;
label_937C:; return;
label_937D:; return;
label_9380:; return;
label_9382:; return;
label_9383:; return;
label_9386:; return;
label_9387:; return;
label_9389:; return;
label_938A:; return;
label_938B:; return;
label_938D:; return;
label_938E:; return;
label_938F:; return;
label_9390:; return;
label_9391:; return;
label_9392:; return;
label_9394:; return;
label_9395:; return;
label_9397:; return;
label_9398:; return;
label_939A:; return;
label_939C:; return;
label_939D:; return;
label_939F:; return;
label_93A0:; return;
label_93A1:; return;
label_93A2:; return;
label_93A5:; return;
label_93A6:; return;
label_93A9:; return;
label_93AB:; return;
label_93AC:; return;
label_93AF:; return;
label_93B0:; return;
label_93B1:; return;
label_93B2:; return;
label_93B4:; return;
label_93B5:; return;
label_93B8:; return;
label_93B9:; return;
label_93BB:; return;
label_93BD:; return;
label_93BF:; return;
label_93C0:; return;
label_93C2:; return;
label_93C5:; return;
label_93C7:; return;
label_93C8:; return;
label_93CA:; return;
label_93CD:; return;
label_93CE:; return;
label_93D0:; return;
label_93D2:; return;
label_93D5:; return;
label_93D6:; return;
label_93D9:; return;
label_93DA:; return;
label_93DD:; return;
label_93DE:; return;
label_93E1:; return;
label_93E4:; return;
label_93E7:; return;
label_93E8:; return;
label_93EA:; return;
label_93ED:; return;
label_93EF:; return;
label_93F0:; return;
label_93F3:; return;
label_93F5:; return;
label_93F8:; return;
label_93FB:; return;
label_93FC:; return;
label_93FF:; return;
label_9400:; return;
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
label_9413:; return;
label_9414:; return;
label_9415:; return;
label_9416:; return;
label_9417:; return;
label_9418:; return;
label_9419:; return;
label_941A:; return;
label_941B:; return;
label_941C:; return;
label_941D:; return;
label_941E:; return;
label_941F:; return;
label_9420:; return;
label_9421:; return;
label_9423:; return;
label_9424:; return;
label_9427:; return;
label_9428:; return;
label_9429:; return;
label_942A:; return;
label_942C:; return;
label_942E:; return;
label_9430:; return;
label_9431:; return;
label_9433:; return;
label_9434:; return;
label_9437:; return;
label_9438:; return;
label_9439:; return;
label_943A:; return;
label_943C:; return;
label_943E:; return;
label_9440:; return;
label_9442:; return;
label_9444:; return;
label_9445:; return;
label_9448:; return;
label_944A:; return;
label_944B:; return;
label_944C:; return;
label_944F:; return;
label_9450:; return;
label_9453:; return;
label_9456:; return;
label_9457:; return;
label_9458:; return;
label_945A:; return;
label_945B:; return;
label_945C:; return;
label_945D:; return;
label_945F:; return;
label_9461:; return;
label_9462:; return;
label_9463:; return;
label_9464:; return;
label_9466:; return;
label_9468:; return;
label_9469:; return;
label_946C:; return;
label_946E:; return;
label_9470:; return;
label_9471:; return;
label_9472:; return;
label_9473:; return;
label_9474:; return;
label_9475:; return;
label_9478:; return;
label_9479:; return;
label_947A:; return;
label_947B:; return;
label_947E:; return;
label_9480:; return;
label_9481:; return;
label_9482:; return;
label_9485:; return;
label_9488:; return;
label_9489:; return;
label_948C:; return;
label_948E:; return;
label_948F:; return;
label_9492:; return;
label_9493:; return;
label_9494:; return;
label_9495:; return;
label_9496:; return;
label_9497:; return;
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
label_94A2:; return;
label_94A3:; return;
label_94A4:; return;
label_94A5:; return;
label_94A6:; return;
label_94A7:; return;
label_94A8:; return;
label_94A9:; return;
label_94AA:; return;
label_94AB:; return;
label_94AC:; return;
label_94AD:; return;
label_94AE:; return;
label_94AF:; return;
label_94B0:; return;
label_94B1:; return;
label_94B2:; return;
label_94B3:; return;
label_94B4:; return;
label_94B5:; return;
label_94B6:; return;
label_94B7:; return;
label_94B8:; return;
label_94B9:; return;
label_94BA:; return;
label_94BB:; return;
label_94BC:; return;
label_94BD:; return;
label_94BE:; return;
label_94BF:; return;
label_94C0:; return;
label_94C1:; return;
label_94C2:; return;
label_94C3:; return;
label_94C4:; return;
label_94C5:; return;
label_94C6:; return;
label_94C7:; return;
label_94C8:; return;
label_94C9:; return;
label_94CA:; return;
label_94CB:; return;
label_94CC:; return;
label_94CD:; return;
label_94CE:; return;
label_94CF:; return;
label_94D0:; return;
label_94D1:; return;
label_94D2:; return;
label_94D3:; return;
label_94D4:; return;
label_94D5:; return;
label_94D6:; return;
label_94D7:; return;
label_94D8:; return;
label_94D9:; return;
label_94DA:; return;
label_94DB:; return;
label_94DC:; return;
label_94DD:; return;
label_94DE:; return;
label_94DF:; return;
label_94E0:; return;
label_94E1:; return;
label_94E2:; return;
label_94E3:; return;
label_94E4:; return;
label_94E5:; return;
label_94E6:; return;
label_94E7:; return;
label_94E8:; return;
label_94E9:; return;
label_94EA:; return;
label_94EB:; return;
label_94EC:; return;
label_94ED:; return;
label_94EE:; return;
label_94EF:; return;
label_94F0:; return;
label_94F1:; return;
label_94F2:; return;
label_94F3:; return;
label_94F4:; return;
label_94F5:; return;
label_94F6:; return;
label_94F7:; return;
label_94F8:; return;
label_94F9:; return;
label_94FA:; return;
label_94FB:; return;
label_94FC:; return;
label_94FD:; return;
label_94FE:; return;
label_94FF:; return;
label_9500:; return;
label_9503:; return;
label_9506:; return;
label_9509:; return;
label_950C:; return;
label_950F:; return;
label_9512:; return;
label_9513:; return;
label_9514:; return;
label_9515:; return;
label_9516:; return;
label_9517:; return;
label_9518:; return;
label_951A:; return;
label_951C:; return;
label_951E:; return;
label_9520:; return;
label_9523:; return;
label_9526:; return;
label_9529:; return;
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
label_9564:; return;
label_9566:; return;
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
label_9589:; return;
label_958B:; return;
label_958D:; return;
label_958F:; return;
label_9591:; return;
label_9593:; return;
label_9595:; return;
label_9597:; return;
label_9599:; return;
label_959B:; return;
label_959D:; return;
label_959F:; return;
label_95A2:; return;
label_95A4:; return;
label_95A7:; return;
label_95AA:; return;
label_95AB:; return;
label_95AC:; return;
label_95AD:; return;
label_95AE:; return;
label_95AF:; return;
label_95B0:; return;
label_95B1:; return;
label_95B2:; return;
label_95B3:; return;
label_95B4:; return;
label_95B5:; return;
label_95B6:; return;
label_95B7:; return;
label_95B8:; return;
label_95B9:; return;
label_95BA:; return;
label_95BB:; return;
label_95BC:; return;
label_95BD:; return;
label_95BE:; return;
label_95BF:; return;
label_95C0:; return;
label_95C1:; return;
label_95C2:; return;
label_95C3:; return;
label_95C6:; return;
label_95C8:; return;
label_95C9:; return;
label_95CB:; return;
label_95CC:; return;
label_95CF:; return;
label_95D0:; return;
label_95D2:; return;
label_95D3:; return;
label_95D5:; return;
label_95D6:; return;
label_95D7:; return;
label_95D9:; return;
label_95DB:; return;
label_95DC:; return;
label_95DE:; return;
label_95DF:; return;
label_95E0:; return;
label_95E1:; return;
label_95E2:; return;
label_95E3:; return;
label_95E4:; return;
label_95E6:; return;
label_95E7:; return;
label_95E9:; return;
label_95EB:; return;
label_95EC:; return;
label_95EF:; return;
label_95F1:; return;
label_95F2:; return;
label_95F5:; return;
label_95F8:; return;
label_95F9:; return;
label_95FA:; return;
label_95FD:; return;
label_95FE:; return;
label_9601:; return;
label_9602:; return;
label_9603:; return;
label_9604:; return;
label_9605:; return;
label_9606:; return;
label_9607:; return;
label_9608:; return;
label_9609:; return;
label_960A:; return;
label_960B:; return;
label_960D:; return;
label_960F:; return;
label_9612:; return;
label_9615:; return;
label_9617:; return;
label_9619:; return;
label_961B:; return;
label_961C:; return;
label_961E:; return;
label_961F:; return;
label_9620:; return;
label_9621:; return;
label_9623:; return;
label_9625:; return;
label_9626:; return;
label_9627:; return;
label_9628:; return;
label_9629:; return;
label_962A:; return;
label_962B:; return;
label_962C:; return;
label_962D:; return;
label_962F:; return;
label_9630:; return;
label_9631:; return;
label_9633:; return;
label_9636:; return;
label_9638:; return;
label_9639:; return;
label_963A:; return;
label_963B:; return;
label_963D:; return;
label_963F:; return;
label_9641:; return;
label_9644:; return;
label_9646:; return;
label_9648:; return;
label_9649:; return;
label_964C:; return;
label_964F:; return;
label_9650:; return;
label_9652:; return;
label_9654:; return;
label_9656:; return;
label_9657:; return;
label_9658:; return;
label_9659:; return;
label_965A:; return;
label_965B:; return;
label_965D:; return;
label_965F:; return;
label_9661:; return;
label_9664:; return;
label_9666:; return;
label_9668:; return;
label_9669:; return;
label_966B:; return;
label_96B8:; return;
label_96B9:; return;
label_96BA:; return;
label_96BB:; return;
label_96BC:; return;
label_96BD:; return;
label_96BF:; return;
label_96C1:; return;
label_96C3:; return;
label_96C5:; return;
label_96C6:; return;
label_96C8:; return;
label_96C9:; return;
label_96CA:; return;
label_96CB:; return;
label_96CC:; return;
label_96CE:; return;
label_96CF:; return;
label_96D0:; return;
label_96D2:; return;
label_96D5:; return;
label_96D8:; return;
label_96D9:; return;
label_96DA:; return;
label_96DB:; return;
label_96DE:; return;
label_96E0:; return;
label_96E2:; return;
label_96E4:; return;
label_96E6:; return;
label_96E8:; return;
label_96EA:; return;
label_96EC:; return;
label_96EE:; return;
label_96F0:; return;
label_96F2:; return;
label_96F3:; return;
label_96F5:; return;
label_96F8:; return;
label_96F9:; return;
label_96FB:; return;
label_96FE:; return;
label_96FF:; return;
label_9702:; return;
label_9703:; return;
label_9706:; return;
label_9707:; return;
label_970A:; return;
label_970B:; return;
label_970E:; return;
label_970F:; return;
label_9711:; return;
label_9714:; return;
label_9715:; return;
label_9716:; return;
label_9717:; return;
label_971A:; return;
label_971B:; return;
label_971D:; return;
label_9720:; return;
label_9723:; return;
label_9724:; return;
label_9725:; return;
label_9726:; return;
label_9727:; return;
label_9728:; return;
label_9729:; return;
label_972A:; return;
label_972B:; return;
label_972E:; return;
label_9730:; return;
label_9731:; return;
label_9732:; return;
label_9735:; return;
label_9737:; return;
label_9738:; return;
label_9739:; return;
label_973A:; return;
label_973B:; return;
label_973C:; return;
label_973D:; return;
label_973E:; return;
label_973F:; return;
label_9740:; return;
label_9741:; return;
label_9742:; return;
label_9743:; return;
label_9744:; return;
label_9745:; return;
label_9746:; return;
label_9747:; return;
label_9748:; return;
label_9749:; return;
label_974A:; return;
label_974B:; return;
label_974C:; return;
label_974D:; return;
label_974E:; return;
label_974F:; return;
label_9750:; return;
label_9751:; return;
label_9752:; return;
label_9753:; return;
label_9755:; return;
label_9758:; return;
label_9759:; return;
label_975A:; return;
label_975B:; return;
label_975E:; return;
label_975F:; return;
label_9760:; return;
label_9761:; return;
label_9762:; return;
label_9763:; return;
label_9764:; return;
label_9765:; return;
label_9766:; return;
label_9767:; return;
label_9768:; return;
label_9769:; return;
label_976A:; return;
label_976B:; return;
label_976C:; return;
label_976D:; return;
label_976E:; return;
label_976F:; return;
label_9770:; return;
label_9771:; return;
label_9772:; return;
label_9773:; return;
label_9774:; return;
label_9775:; return;
label_9776:; return;
label_9777:; return;
label_9778:; return;
label_9779:; return;
label_977A:; return;
label_977B:; return;
label_977D:; return;
label_977F:; return;
label_9781:; return;
label_9784:; return;
label_9785:; return;
label_9786:; return;
label_9787:; return;
label_9788:; return;
label_9789:; return;
label_978A:; return;
label_978B:; return;
label_978C:; return;
label_978D:; return;
label_978F:; return;
label_9791:; return;
label_9792:; return;
label_9793:; return;
label_9794:; return;
label_9795:; return;
label_9796:; return;
label_9797:; return;
label_9798:; return;
label_9799:; return;
label_979A:; return;
label_979B:; return;
label_979E:; return;
label_979F:; return;
label_97A0:; return;
label_97A1:; return;
label_97A2:; return;
label_97A3:; return;
label_97A5:; return;
label_97A6:; return;
label_97A7:; return;
label_97A9:; return;
label_97AB:; return;
label_97AD:; return;
label_97AE:; return;
label_97B1:; return;
label_97B4:; return;
label_97B7:; return;
label_97B8:; return;
label_97BB:; return;
label_97BD:; return;
label_97C0:; return;
label_97C3:; return;
label_97C4:; return;
label_97C7:; return;
label_97C8:; return;
label_97CB:; return;
label_97CC:; return;
label_97CF:; return;
label_97D0:; return;
label_97D3:; return;
label_97D4:; return;
label_97D6:; return;
label_97D8:; return;
label_97DA:; return;
label_97DC:; return;
label_97DE:; return;
label_97DF:; return;
label_97E0:; return;
label_97E2:; return;
label_97E3:; return;
label_97E4:; return;
label_97E6:; return;
label_97E9:; return;
label_97EC:; return;
label_97EE:; return;
label_97F1:; return;
label_97F4:; return;
label_97F7:; return;
label_97F9:; return;
label_97FB:; return;
label_97FD:; return;
label_97FF:; return;
label_9801:; return;
label_9803:; return;
label_9805:; return;
label_9807:; return;
label_9809:; return;
label_980A:; return;
label_980B:; return;
label_980C:; return;
label_980D:; return;
label_980F:; return;
label_9811:; return;
label_9813:; return;
label_9815:; return;
label_9817:; return;
label_9819:; return;
label_981B:; return;
label_981D:; return;
label_981F:; return;
label_9820:; return;
label_9821:; return;
label_9824:; return;
label_9826:; return;
label_9827:; return;
label_9828:; return;
label_982A:; return;
label_982C:; return;
label_982E:; return;
label_9830:; return;
label_9832:; return;
label_9834:; return;
label_9835:; return;
label_9836:; return;
label_9838:; return;
label_983A:; return;
label_983C:; return;
label_983E:; return;
label_9841:; return;
label_9842:; return;
label_9844:; return;
label_9846:; return;
label_9848:; return;
label_984A:; return;
label_984C:; return;
label_984E:; return;
label_9850:; return;
label_9852:; return;
label_9854:; return;
label_9855:; return;
label_9856:; return;
label_9857:; return;
label_9858:; return;
label_985A:; return;
label_985C:; return;
label_985E:; return;
label_9860:; return;
label_9862:; return;
label_9864:; return;
label_9866:; return;
label_9868:; return;
label_986A:; return;
label_986B:; return;
label_986C:; return;
label_986F:; return;
label_9871:; return;
label_9872:; return;
label_9873:; return;
label_9875:; return;
label_9877:; return;
label_9879:; return;
label_987B:; return;
label_987D:; return;
label_987F:; return;
label_9880:; return;
label_9881:; return;
label_9883:; return;
label_9885:; return;
label_9887:; return;
label_9889:; return;
label_988C:; return;
label_988E:; return;
label_9890:; return;
label_9893:; return;
label_9895:; return;
label_9897:; return;
label_9899:; return;
label_989B:; return;
label_989D:; return;
label_989F:; return;
label_98A2:; return;
label_98A4:; return;
label_98A7:; return;
label_98A9:; return;
label_98AB:; return;
label_98AD:; return;
label_98AF:; return;
label_98B1:; return;
label_98B3:; return;
label_98B6:; return;
label_98B8:; return;
label_98BB:; return;
label_98BC:; return;
label_98BD:; return;
label_98BF:; return;
label_98C2:; return;
label_98C3:; return;
label_98C4:; return;
label_98C6:; return;
label_98C9:; return;
label_98CA:; return;
label_98CB:; return;
label_98CE:; return;
label_98D1:; return;
label_98D2:; return;
label_98D5:; return;
label_98D7:; return;
label_98DA:; return;
label_98DD:; return;
label_98DF:; return;
label_98E1:; return;
label_98E3:; return;
label_98E5:; return;
label_98E7:; return;
label_98E9:; return;
label_98EB:; return;
label_98ED:; return;
label_98EF:; return;
label_98F1:; return;
label_98F4:; return;
label_98F6:; return;
label_98F8:; return;
label_98FA:; return;
label_98FC:; return;
label_98FE:; return;
label_9900:; return;
label_9902:; return;
label_9904:; return;
label_9906:; return;
label_9908:; return;
label_990B:; return;
label_990D:; return;
label_990F:; return;
label_9911:; return;
label_9913:; return;
label_9915:; return;
label_9917:; return;
label_9919:; return;
label_991B:; return;
label_991D:; return;
label_991F:; return;
label_9922:; return;
label_9924:; return;
label_9926:; return;
label_9928:; return;
label_992A:; return;
label_992C:; return;
label_992E:; return;
label_9930:; return;
label_9932:; return;
label_9934:; return;
label_9936:; return;
label_9939:; return;
label_993B:; return;
label_993D:; return;
label_993F:; return;
label_9941:; return;
label_9943:; return;
label_9945:; return;
label_9947:; return;
label_9949:; return;
label_994B:; return;
label_994D:; return;
label_9950:; return;
label_9952:; return;
label_9954:; return;
label_9956:; return;
label_9958:; return;
label_995A:; return;
label_995C:; return;
label_995E:; return;
label_9960:; return;
label_9962:; return;
label_9964:; return;
label_9967:; return;
label_9969:; return;
label_996B:; return;
label_996D:; return;
label_996F:; return;
label_9971:; return;
label_9973:; return;
label_9976:; return;
label_9977:; return;
label_9979:; return;
label_997A:; return;
label_997C:; return;
label_997D:; return;
label_997E:; return;
label_9980:; return;
label_9982:; return;
label_9985:; return;
label_9987:; return;
label_9989:; return;
label_998B:; return;
label_998D:; return;
label_998F:; return;
label_9991:; return;
label_9994:; return;
label_9996:; return;
label_9998:; return;
label_999A:; return;
label_999C:; return;
label_999E:; return;
label_99A0:; return;
label_99A3:; return;
label_99A5:; return;
label_99A7:; return;
label_99A9:; return;
label_99AB:; return;
label_99AD:; return;
label_99B0:; return;
label_99B2:; return;
label_99B5:; return;
label_99BF:; return;
label_99C1:; return;
label_99C3:; return;
label_99C5:; return;
label_99C8:; return;
label_99CA:; return;
label_99CC:; return;
label_99CE:; return;
label_99D0:; return;
label_99DE:; return;
label_99E0:; return;
label_99E3:; return;
label_99E4:; return;
label_99E7:; return;
label_99E9:; return;
label_99EB:; return;
label_99ED:; return;
label_99F0:; return;
label_99F2:; return;
label_99F4:; return;
label_99F7:; return;
label_9A03:; return;
label_9A05:; return;
label_9A07:; return;
label_9A09:; return;
label_9A0B:; return;
label_9A0D:; return;
label_9A0F:; return;
label_9A11:; return;
label_9A14:; return;
label_9A16:; return;
label_9A19:; return;
label_9A1B:; return;
label_9A1D:; return;
label_9A20:; return;
label_9A22:; return;
label_9A24:; return;
label_9A27:; return;
label_9A2A:; return;
label_9A2D:; return;
label_9A30:; return;
label_9A33:; return;
label_9A36:; return;
label_9A39:; return;
label_9A3A:; return;
label_9A3B:; return;
label_9A3C:; return;
label_9A3D:; return;
label_9A3F:; return;
label_9A41:; return;
label_9A44:; return;
label_9A46:; return;
label_9A49:; return;
label_9A4C:; return;
label_9A4F:; return;
label_9A51:; return;
label_9A53:; return;
label_9A55:; return;
label_9A57:; return;
label_9A59:; return;
label_9A5B:; return;
label_9A5D:; return;
label_9A60:; return;
label_9A62:; return;
label_9A64:; return;
label_9A67:; return;
label_9A69:; return;
label_9A6B:; return;
label_9A6D:; return;
label_9A70:; return;
label_9A72:; return;
label_9A74:; return;
label_9A77:; return;
label_9A79:; return;
label_9A7C:; return;
label_9A7E:; return;
label_9A81:; return;
label_9A84:; return;
label_9A87:; return;
label_9A89:; return;
label_9A8C:; return;
label_9A8F:; return;
label_9A92:; return;
label_9A93:; return;
label_9A96:; return;
label_9A98:; return;
label_9A99:; return;
label_9A9A:; return;
label_9A9D:; return;
label_9AA0:; return;
label_9AA2:; return;
label_9AA5:; return;
label_9AA8:; return;
label_9AAA:; return;
label_9AAC:; return;
label_9AAE:; return;
label_9AB0:; return;
label_9AB3:; return;
label_9AB4:; return;
label_9AB5:; return;
label_9AB7:; return;
label_9ABA:; return;
label_9ABD:; return;
label_9AC0:; return;
label_9AC2:; return;
label_9AC5:; return;
label_9AC6:; return;
label_9AC9:; return;
label_9ACC:; return;
label_9ACE:; return;
label_9AD0:; return;
label_9AD3:; return;
label_9AD6:; return;
label_9AD9:; return;
label_9ADA:; return;
label_9ADD:; return;
label_9ADE:; return;
label_9ADF:; return;
label_9AE1:; return;
label_9AE2:; return;
label_9AE5:; return;
label_9AE7:; return;
label_9AE9:; return;
label_9AEA:; return;
label_9AEB:; return;
label_9AEC:; return;
label_9AEF:; return;
label_9AF0:; return;
label_9AF3:; return;
label_9AF4:; return;
label_9AF5:; return;
label_9AF7:; return;
label_9AF9:; return;
label_9AFB:; return;
label_9AFD:; return;
label_9AFF:; return;
label_9B01:; return;
label_9B04:; return;
label_9B07:; return;
label_9B09:; return;
label_9B0C:; return;
label_9B0E:; return;
label_9B10:; return;
label_9B13:; return;
label_9B14:; return;
label_9B17:; return;
label_9B19:; return;
label_9B1C:; return;
label_9B1E:; return;
label_9B20:; return;
label_9B22:; return;
label_9B25:; return;
label_9B27:; return;
label_9B2A:; return;
label_9B2D:; return;
label_9B2F:; return;
label_9B32:; return;
label_9B35:; return;
label_9B37:; return;
label_9B39:; return;
label_9B3C:; return;
label_9B3E:; return;
label_9B41:; return;
label_9B43:; return;
label_9B46:; return;
label_9B47:; return;
label_9B4A:; return;
label_9B4C:; return;
label_9B4E:; return;
label_9B50:; return;
label_9B53:; return;
label_9B55:; return;
label_9B58:; return;
label_9B5A:; return;
label_9B5C:; return;
label_9B5F:; return;
label_9B62:; return;
label_9B65:; return;
label_9B68:; return;
label_9B6A:; return;
label_9B6B:; return;
label_9B6E:; return;
label_9B71:; return;
label_9B74:; return;
label_9B75:; return;
label_9B77:; return;
label_9B7A:; return;
label_9B7C:; return;
label_9B7E:; return;
label_9B81:; return;
label_9B82:; return;
label_9B85:; return;
label_9B87:; return;
label_9B88:; return;
label_9B8A:; return;
label_9B8D:; return;
label_9B90:; return;
label_9B92:; return;
label_9B95:; return;
label_9B97:; return;
label_9B9A:; return;
label_9B9C:; return;
label_9B9F:; return;
label_9BA0:; return;
label_9BA2:; return;
label_9BA5:; return;
label_9BA7:; return;
label_9BA9:; return;
label_9BAB:; return;
label_9BAD:; return;
label_9BAF:; return;
label_9BB1:; return;
label_9BB4:; return;
label_9BB7:; return;
label_9BBA:; return;
label_9BBD:; return;
label_9BC0:; return;
label_9BC2:; return;
label_9BC5:; return;
label_9BC8:; return;
label_9BCB:; return;
label_9BCD:; return;
label_9BCF:; return;
label_9BD2:; return;
label_9BD5:; return;
label_9BD7:; return;
label_9BD9:; return;
label_9BDC:; return;
label_9BDE:; return;
label_9BE0:; return;
label_9BE2:; return;
label_9BE5:; return;
label_9BE7:; return;
label_9BEA:; return;
label_9BEB:; return;
label_9BED:; return;
label_9BF0:; return;
label_9BF2:; return;
label_9BF4:; return;
label_9BF7:; return;
label_9BF9:; return;
label_9BFB:; return;
label_9BFE:; return;
label_9C01:; return;
label_9C03:; return;
label_9C05:; return;
label_9C08:; return;
label_9C0B:; return;
label_9C0D:; return;
label_9C0F:; return;
label_9C12:; return;
label_9C14:; return;
label_9C17:; return;
label_9C1A:; return;
label_9C1D:; return;
label_9C1F:; return;
label_9C22:; return;
label_9C23:; return;
label_9C24:; return;
label_9C26:; return;
label_9C27:; return;
label_9C29:; return;
label_9C2A:; return;
label_9C2D:; return;
label_9C2F:; return;
label_9C32:; return;
label_9C34:; return;
label_9C36:; return;
label_9C38:; return;
label_9C3A:; return;
label_9C3D:; return;
label_9C3F:; return;
label_9C41:; return;
label_9C42:; return;
label_9C44:; return;
label_9C46:; return;
label_9C48:; return;
label_9C4A:; return;
label_9C4C:; return;
label_9C4F:; return;
label_9C51:; return;
label_9C53:; return;
label_9C55:; return;
label_9C57:; return;
label_9C5A:; return;
label_9C5D:; return;
label_9C60:; return;
label_9C63:; return;
label_9C66:; return;
label_9C67:; return;
label_9C68:; return;
label_9C69:; return;
label_9C6A:; return;
label_9C6B:; return;
label_9C6C:; return;
label_9C6D:; return;
label_9C6E:; return;
label_9C71:; return;
label_9C73:; return;
label_9C76:; return;
label_9C79:; return;
label_9C7A:; return;
label_9C7B:; return;
label_9C7C:; return;
label_9C7D:; return;
label_9C80:; return;
label_9C82:; return;
label_9C84:; return;
label_9C87:; return;
label_9C8A:; return;
label_9C8C:; return;
label_9C8E:; return;
label_9C91:; return;
label_9C93:; return;
label_9C96:; return;
label_9C98:; return;
label_9C9B:; return;
label_9C9D:; return;
label_9CA0:; return;
label_9CA2:; return;
label_9CA4:; return;
label_9CA7:; return;
label_9CA8:; return;
label_9CAB:; return;
label_9CAD:; return;
label_9CB0:; return;
label_9CB2:; return;
label_9CB5:; return;
label_9CB7:; return;
label_9CB8:; return;
label_9CBA:; return;
label_9CBC:; return;
label_9CBF:; return;
label_9CC2:; return;
label_9CC3:; return;
label_9CC4:; return;
label_9CC5:; return;
label_9CC7:; return;
label_9CC9:; return;
label_9CCB:; return;
label_9CCC:; return;
label_9CCE:; return;
label_9CD0:; return;
label_9CD2:; return;
label_9CD4:; return;
label_9CD6:; return;
label_9CD8:; return;
label_9CD9:; return;
label_9CDB:; return;
label_9CDC:; return;
label_9CDD:; return;
label_9CDF:; return;
label_9CE1:; return;
label_9CE3:; return;
label_9CE5:; return;
label_9CE7:; return;
label_9CE9:; return;
label_9CEC:; return;
label_9CEE:; return;
label_9CF0:; return;
label_9CF3:; return;
label_9CF5:; return;
label_9CF7:; return;
label_9CFA:; return;
label_9CFC:; return;
label_9CFE:; return;
label_9CFF:; return;
label_9D01:; return;
label_9D04:; return;
label_9D05:; return;
label_9D07:; return;
label_9D09:; return;
label_9D0B:; return;
label_9D0D:; return;
label_9D0F:; return;
label_9D11:; return;
label_9D12:; return;
label_9D14:; return;
label_9D15:; return;
label_9D16:; return;
label_9D18:; return;
label_9D1A:; return;
label_9D1C:; return;
label_9D1E:; return;
label_9D20:; return;
label_9D23:; return;
label_9D25:; return;
label_9D27:; return;
label_9D2A:; return;
label_9D2C:; return;
label_9D2E:; return;
label_9D2F:; return;
label_9D31:; return;
label_9D34:; return;
label_9D35:; return;
label_9D36:; return;
label_9D37:; return;
label_9D3A:; return;
label_9D3D:; return;
label_9D3F:; return;
label_9D41:; return;
label_9D43:; return;
label_9D45:; return;
label_9D46:; return;
label_9D47:; return;
label_9D49:; return;
label_9D4B:; return;
label_9D4E:; return;
label_9D51:; return;
label_9D53:; return;
label_9D55:; return;
label_9D58:; return;
label_9D5B:; return;
label_9D5E:; return;
label_9D5F:; return;
label_9D61:; return;
label_9D62:; return;
label_9D64:; return;
label_9D67:; return;
label_9D6A:; return;
label_9D6B:; return;
label_9D6D:; return;
label_9D6E:; return;
label_9D71:; return;
label_9D74:; return;
label_9D77:; return;
label_9D7A:; return;
label_9D7D:; return;
label_9D7F:; return;
label_9D82:; return;
label_9D85:; return;
label_9D88:; return;
label_9D8A:; return;
label_9D8D:; return;
label_9D8F:; return;
label_9D91:; return;
label_9D93:; return;
label_9D94:; return;
label_9D97:; return;
label_9D98:; return;
label_9D9B:; return;
label_9D9E:; return;
label_9DA1:; return;
label_9DA4:; return;
label_9DA7:; return;
label_9DAA:; return;
label_9DAD:; return;
label_9DAF:; return;
label_9DB0:; return;
label_9DB2:; return;
label_9DB4:; return;
label_9DB7:; return;
label_9DB9:; return;
label_9DBC:; return;
label_9DBF:; return;
label_9DC1:; return;
label_9DC3:; return;
label_9DC5:; return;
label_9DC8:; return;
label_9DCB:; return;
label_9DCD:; return;
label_9DD0:; return;
label_9DD2:; return;
label_9DD5:; return;
label_9DD8:; return;
label_9DDB:; return;
label_9DDE:; return;
label_9DE0:; return;
label_9DE2:; return;
label_9DE4:; return;
label_9DE7:; return;
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
label_9E19:; return;
label_9E1B:; return;
label_9E1D:; return;
label_9E1F:; return;
label_9E21:; return;
label_9E23:; return;
label_9E25:; return;
label_9E27:; return;
label_9E29:; return;
label_9E2B:; return;
label_9E2D:; return;
label_9E2F:; return;
label_9E31:; return;
label_9E33:; return;
label_9E35:; return;
label_9E37:; return;
label_9E39:; return;
label_9E3B:; return;
label_9E3D:; return;
label_9E3F:; return;
label_9E41:; return;
label_9E43:; return;
label_9E45:; return;
label_9E47:; return;
label_9E49:; return;
label_9E4B:; return;
label_9E4D:; return;
label_9E4F:; return;
label_9E51:; return;
label_9E53:; return;
label_9E55:; return;
label_9E57:; return;
label_9E59:; return;
label_9E5B:; return;
label_9E5D:; return;
label_9E5F:; return;
label_9E61:; return;
label_9E63:; return;
label_9E65:; return;
label_9E67:; return;
label_9E69:; return;
label_9E6B:; return;
label_9E6D:; return;
label_9E6F:; return;
label_9E71:; return;
label_9E73:; return;
label_9E75:; return;
label_9E77:; return;
label_9E79:; return;
label_9E7B:; return;
label_9E7D:; return;
label_9E7F:; return;
label_9E81:; return;
label_9E83:; return;
label_9E85:; return;
label_9E87:; return;
label_9E89:; return;
label_9E8B:; return;
label_9E8D:; return;
label_9E8F:; return;
label_9E91:; return;
label_9E93:; return;
label_9E95:; return;
label_9E97:; return;
label_9E99:; return;
label_9E9B:; return;
label_9E9D:; return;
label_9E9F:; return;
label_9EA1:; return;
label_9EA3:; return;
label_9EA5:; return;
label_9EA7:; return;
label_9EA9:; return;
label_9EAB:; return;
label_9EAD:; return;
label_9EAF:; return;
label_9EB1:; return;
label_9EB3:; return;
label_9EB5:; return;
label_9EB7:; return;
label_9EB9:; return;
label_9EBB:; return;
label_9EBD:; return;
label_9EBF:; return;
label_9EC1:; return;
label_9EC3:; return;
label_9EC5:; return;
label_9EC7:; return;
label_9EC9:; return;
label_9ECB:; return;
label_9ECD:; return;
label_9ECF:; return;
label_9ED1:; return;
label_9ED3:; return;
label_9ED5:; return;
label_9ED7:; return;
label_9ED9:; return;
label_9EDB:; return;
label_9EDD:; return;
label_9EDF:; return;
label_9EE1:; return;
label_9EE3:; return;
label_9EE5:; return;
label_9EE7:; return;
label_9EE9:; return;
label_9EEB:; return;
label_9EED:; return;
label_9EEF:; return;
label_9EF1:; return;
label_9EF3:; return;
label_9EF5:; return;
label_9EF7:; return;
label_9EF9:; return;
label_9EFB:; return;
label_9EFD:; return;
label_9EFF:; return;
label_9F01:; return;
label_9F03:; return;
label_9F05:; return;
label_9F07:; return;
label_9F09:; return;
label_9F0B:; return;
label_9F0D:; return;
label_9F0F:; return;
label_9F12:; return;
label_9F13:; return;
label_9F16:; return;
label_9F17:; return;
label_9F1A:; return;
label_9F1C:; return;
label_9F1F:; return;
label_9F22:; return;
label_9F24:; return;
label_9F26:; return;
label_9F29:; return;
label_9F2C:; return;
label_9F2F:; return;
label_9F32:; return;
label_9F34:; return;
label_9F36:; return;
label_9F38:; return;
label_9F3A:; return;
label_9F3C:; return;
label_9F3E:; return;
label_9F40:; return;
label_9F43:; return;
label_9F44:; return;
label_9F46:; return;
label_9F48:; return;
label_9F4A:; return;
label_9F4C:; return;
label_9F4E:; return;
label_9F4F:; return;
label_9F51:; return;
label_9F54:; return;
label_9F55:; return;
label_9F57:; return;
label_9F5A:; return;
label_9F5B:; return;
label_9F5D:; return;
label_9F60:; return;
label_9F61:; return;
label_9F63:; return;
label_9F65:; return;
label_9F68:; return;
label_9F6A:; return;
label_9F6D:; return;
label_9F6F:; return;
label_9F71:; return;
label_9F73:; return;
label_9F75:; return;
label_9F78:; return;
label_9F79:; return;
label_9F7B:; return;
label_9F7D:; return;
label_9F7E:; return;
label_9F7F:; return;
label_9F80:; return;
label_9F81:; return;
label_9F82:; return;
label_9F83:; return;
label_9F84:; return;
label_9F86:; return;
label_9F89:; return;
label_9F8C:; return;
label_9F8E:; return;
label_9F91:; return;
label_9F92:; return;
label_9F93:; return;
label_9F94:; return;
label_9F95:; return;
label_9F96:; return;
label_9F97:; return;
label_9F98:; return;
label_9F9A:; return;
label_9F9C:; return;
label_9F9D:; return;
label_9F9E:; return;
label_9FA0:; return;
label_9FA2:; return;
label_9FA3:; return;
label_9FA5:; return;
label_9FA7:; return;
label_9FA9:; return;
label_9FAA:; return;
label_9FAB:; return;
label_9FAC:; return;
label_9FAD:; return;
label_9FAE:; return;
label_9FAF:; return;
label_9FB0:; return;
label_9FB1:; return;
label_9FB4:; return;
label_9FB6:; return;
label_9FB9:; return;
label_9FBA:; return;
label_9FBC:; return;
label_9FBF:; return;
label_9FC0:; return;
label_9FC3:; return;
label_9FC4:; return;
label_9FC5:; return;
label_9FC7:; return;
label_9FC8:; return;
label_9FC9:; return;
label_9FCA:; return;
label_9FCC:; return;
label_9FCD:; return;
label_9FCE:; return;
label_9FCF:; return;
label_9FD1:; return;
label_9FD3:; return;
label_9FD4:; return;
label_9FD7:; return;
label_9FD9:; return;
label_9FDC:; return;
label_9FDD:; return;
label_9FE0:; return;
label_9FE2:; return;
label_9FE5:; return;
label_9FE6:; return;
label_9FE8:; return;
label_9FEA:; return;
label_9FED:; return;
label_9FEE:; return;
label_9FF0:; return;
label_9FF3:; return;
label_9FF4:; return;
label_9FF6:; return;
label_9FF9:; return;
label_9FFB:; return;
label_9FFC:; return;
label_9FFE:; return;
label_A001:; return;
label_A002:; return;
label_A004:; return;
label_A006:; return;
label_A009:; return;
label_A00B:; return;
label_A00D:; return;
label_A00E:; return;
label_A010:; return;
label_A012:; return;
label_A015:; return;
label_A017:; return;
label_A019:; return;
label_A01B:; return;
label_A01C:; return;
label_A01E:; return;
label_A021:; return;
label_A023:; return;
label_A025:; return;
label_A027:; return;
label_A029:; return;
label_A02A:; return;
label_A02C:; return;
label_A02E:; return;
label_A031:; return;
label_A033:; return;
label_A035:; return;
label_A036:; return;
label_A039:; return;
label_A03B:; return;
label_A03E:; return;
label_A03F:; return;
label_A041:; return;
label_A044:; return;
label_A046:; return;
label_A048:; return;
label_A049:; return;
label_A04B:; return;
label_A04E:; return;
label_A050:; return;
label_A052:; return;
label_A053:; return;
label_A056:; return;
label_A058:; return;
label_A05B:; return;
label_A05C:; return;
label_A05E:; return;
label_A061:; return;
label_A063:; return;
label_A065:; return;
label_A066:; return;
label_A068:; return;
label_A06B:; return;
label_A06D:; return;
label_A06E:; return;
label_A071:; return;
label_A074:; return;
label_A077:; return;
label_A07A:; return;
label_A07D:; return;
label_A07E:; return;
label_A081:; return;
label_A084:; return;
label_A085:; return;
label_A088:; return;
label_A08B:; return;
label_A08D:; return;
label_A08E:; return;
label_A091:; return;
label_A093:; return;
label_A094:; return;
label_A095:; return;
label_A097:; return;
label_A098:; return;
label_A099:; return;
label_A09B:; return;
label_A09C:; return;
label_A09D:; return;
label_A09F:; return;
label_A0A1:; return;
label_A0A2:; return;
label_A0A5:; return;
label_A0A7:; return;
label_A0A8:; return;
label_A0A9:; return;
label_A0AB:; return;
label_A0AC:; return;
label_A0AD:; return;
label_A0AF:; return;
label_A0B0:; return;
label_A0B1:; return;
label_A0B3:; return;
label_A0B5:; return;
label_A0B6:; return;
label_A0B9:; return;
label_A0BB:; return;
label_A0BD:; return;
label_A0C0:; return;
label_A0C1:; return;
label_A0C4:; return;
label_A0C6:; return;
label_A0C8:; return;
label_A0CB:; return;
}

void func_8796_b1_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8799;
        case 2: goto label_87A5;
        case 3: goto label_87B1;
    }
label_8796:;
    /* $8796: 10 */ nes_cpu_instruction_boundary(0x8796, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0x8794); return; }
label_8798:;
    /* $8798: 18 */ nes_cpu_instruction_boundary(0x8798, 2); g_cpu.C = 0;
label_8799:; /* ObjPlaceB */
    /* $8799: FC */ nes_cpu_instruction_boundary(0x8799, 4); (void)nes_read((0xF4F0 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_879C:;
    /* $879C: F8 */ nes_cpu_instruction_boundary(0x879C, 2); g_cpu.D = 1;
label_879D:;
    /* $879D: F4 */ nes_cpu_instruction_boundary(0x879D, 4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_879F:;
    /* $879F: FC */ nes_cpu_instruction_boundary(0x879F, 4); (void)nes_read((0x0408 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_87A2:;
    /* $87A2: F8 */ nes_cpu_instruction_boundary(0x87A2, 2); g_cpu.D = 1;
label_87A3:;
    /* $87A3: 04 */ nes_cpu_instruction_boundary(0x87A3, 3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_87A5:; /* ObjPlaceC */
    /* $87A5: FC */ nes_cpu_instruction_boundary(0x87A5, 4); (void)nes_read((0xECE8 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_87A8:;
    /* $87A8: F0 */ nes_cpu_instruction_boundary(0x87A8, 2); if (g_cpu.Z) {
    nes_cpu_instruction_boundary(0x8796, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8796;
    }
label_87AA:;
    /* $87AA: 08 */ nes_cpu_instruction_boundary(0x87AA, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_87AB:;
    /* $87AB: FC */ nes_cpu_instruction_boundary(0x87AB, 4); (void)nes_read((0x0C10 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_87AE:;
    /* $87AE: F0 */ nes_cpu_instruction_boundary(0x87AE, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_87BC; }
label_87B0:;
    /* $87B0: 08 */ nes_cpu_instruction_boundary(0x87B0, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_87B1:; /* ObjPlaceE */
    /* $87B1: 00 */ nes_cpu_instruction_boundary(0x87B1, 7); nes_brk_executed(0x87B1); return;
label_87B2:;
    /* $87B2: F8 */ nes_cpu_instruction_boundary(0x87B2, 2); g_cpu.D = 1;
label_87B3:;
    /* $87B3: 00 */ nes_cpu_instruction_boundary(0x87B3, 7); nes_brk_executed(0x87B3); return;
label_87B4:;
    /* $87B4: 00 */ nes_cpu_instruction_boundary(0x87B4, 7); nes_brk_executed(0x87B4); return;
label_87B5:;
    /* $87B5: 08 */ nes_cpu_instruction_boundary(0x87B5, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_87B6:;
    /* $87B6: F8 */ nes_cpu_instruction_boundary(0x87B6, 2); g_cpu.D = 1;
label_87B7:;
    /* $87B7: 08 */ nes_cpu_instruction_boundary(0x87B7, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_87B8:;
    /* $87B8: 00 */ nes_cpu_instruction_boundary(0x87B8, 7); nes_brk_executed(0x87B8); return;
label_87B9:;
    /* $87B9: E8 */ nes_cpu_instruction_boundary(0x87B9, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_87BA:;
    /* $87BA: F0 */ nes_cpu_instruction_boundary(0x87BA, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0x87A4); return; }
label_87BC:;
    /* $87BC: F8 */ nes_cpu_instruction_boundary(0x87BC, 2); g_cpu.D = 1;
label_87BD:;
    /* $87BD: E8 */ nes_cpu_instruction_boundary(0x87BD, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_87BE:;
    /* $87BE: 00 */ nes_cpu_instruction_boundary(0x87BE, 7); nes_brk_executed(0x87BE); return;
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

void func_8799_b1(void) { /* ObjPlaceB */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8799_b1");
#endif
    func_8796_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_87A5_b1(void) { /* ObjPlaceC */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_87A5_b1");
#endif
    func_8796_b1_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_87B1_b1(void) { /* ObjPlaceE */
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
    /* $89F6: FE */ nes_cpu_instruction_boundary(0x89F6, 7); { uint16_t a=(0x3332 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_89F9:;
    /* $89F9: 34 */ nes_cpu_instruction_boundary(0x89F9, 4); (void)nes_read((0xFF + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_89FB:; /* ObjFrame_SamusRunPntUpFire2 */
    /* $89FB: 46 */ nes_cpu_instruction_boundary(0x89FB, 5); { uint16_t a=0x0F; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_89FD:;
    /* $89FD: 04 */ nes_cpu_instruction_boundary(0x89FD, 3); (void)nes_read(0xFE); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_89FF:;
    /* $89FF: 69 */ nes_cpu_instruction_boundary(0x89FF, 2); { uint16_t r = g_cpu.A + 0xFD + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xFD); g_cpu.A=r&0xFF; }
label_8A01:;
    /* $8A01: 20 */ nes_cpu_instruction_boundary(0x8A01, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x03; g_cpu.S--; if (!nes_dispatch_call(0x797A, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8A01, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8A04:;
    /* $8A04: FE */ nes_cpu_instruction_boundary(0x8A04, 7); { uint16_t a=(0x7778 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8A07:;
    /* $8A07: FD */ nes_cpu_instruction_boundary(0x8A07, 4); { uint8_t m=nes_read((0x2560 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A0A:;
    /* $8A0A: 26 */ nes_cpu_instruction_boundary(0x8A0A, 5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8A0C:;
    /* $8A0C: 35 */ nes_cpu_instruction_boundary(0x8A0C, 4); g_cpu.A &= nes_read((0x36 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8A0E:;
    /* $8A0E: FF */ nes_cpu_instruction_boundary(0x8A0E, 7); { uint16_t a=(0x0C0D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A11:;
    /* $8A11: 0C */ nes_cpu_instruction_boundary(0x8A11, 4); (void)nes_read(0xFD75); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8A14:;
    /* $8A14: 60 */ nes_cpu_instruction_boundary(0x8A14, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

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

void func_89FB_b1(void) { /* ObjFrame_SamusRunPntUpFire2 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_89FB_b1");
#endif
    func_89F6_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_99A1_b1(void) { /* UpdateEnemyCommon_Decide_BANK1 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99A1_b1");
#endif
label_99A1:; /* UpdateEnemyCommon_Decide_BANK1 */
    /* $99A1: A5 */ nes_cpu_instruction_boundary(0x99A1, 3); g_cpu.A = nes_read(0x81); FLAG_NZ(g_cpu.A);
label_99A3:;
    /* $99A3: C9 */ nes_cpu_instruction_boundary(0x99A3, 2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_99A5:;
    /* $99A5: F0 */ nes_cpu_instruction_boundary(0x99A5, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_99B0; }
label_99A7:;
    /* $99A7: C9 */ nes_cpu_instruction_boundary(0x99A7, 2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_99A9:;
    /* $99A9: F0 */ nes_cpu_instruction_boundary(0x99A9, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_99B5; }
label_99AB:;
    /* $99AB: A5 */ nes_cpu_instruction_boundary(0x99AB, 3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_99AD:;
    /* $99AD: 4C */ nes_cpu_instruction_boundary(0x99AD, 3); nes_cpu_instruction_boundary(0x8000, 2); func_8000_b1(); return;
label_99B0:; /* UpdateEnemyCommon_Decide_BANK1_resting */
    /* $99B0: A5 */ nes_cpu_instruction_boundary(0x99B0, 3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_99B2:;
    /* $99B2: 4C */ nes_cpu_instruction_boundary(0x99B2, 3); nes_cpu_instruction_boundary(0x8003, 2); func_8003_b1(); return;
label_99B5:; /* UpdateEnemyCommon_Decide_BANK1_explode */
    /* $99B5: 4C */ nes_cpu_instruction_boundary(0x99B5, 3); nes_cpu_instruction_boundary(0x8006, 2); func_8006_b1(); return;
}

void func_B538_b1(void) { /* ScrewAttackSFXInit_RTS */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B538_b1");
#endif
label_B538:; /* ScrewAttackSFXInit_RTS */
    /* $B538: 60 */ nes_cpu_instruction_boundary(0xB538, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B564_b1(void) { /* IncrementNoisePeriod */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B564_b1");
#endif
label_B564:; /* IncrementNoisePeriod */
    /* $B564: EE */ nes_cpu_instruction_boundary(0xB564, 6); { uint16_t a=0x0670; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B567:;
    /* $B567: AD */ nes_cpu_instruction_boundary(0xB567, 4); g_cpu.A = nes_read(0x0670); FLAG_NZ(g_cpu.A);
label_B56A:;
    /* $B56A: 8D */ nes_cpu_instruction_boundary(0xB56A, 4); nes_write(0x400E, g_cpu.A);
label_B56D:;
    /* $B56D: 60 */ nes_cpu_instruction_boundary(0xB56D, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B694_b1(void) { /* SamusHitSFXInit_RTS */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B694_b1");
#endif
label_B694:; /* SamusHitSFXInit_RTS */
    /* $B694: 60 */ nes_cpu_instruction_boundary(0xB694, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B6CC_b1(void) { /* MissilePickupSFXCont_RTS */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6CC_b1");
#endif
label_B6CC:; /* MissilePickupSFXCont_RTS */
    /* $B6CC: 60 */ nes_cpu_instruction_boundary(0xB6CC, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B739_b1(void) { /* GotoInitSFXData2 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B739_b1");
#endif
label_B739:; /* GotoInitSFXData2 */
    /* $B739: 4C */ nes_cpu_instruction_boundary(0xB739, 3); nes_cpu_instruction_boundary(0xB452, 2); func_B452_b1(); return;
}

void func_B8A6_b1(void) { /* EndTriSFX_RTS */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8A6_b1");
#endif
label_B8A6:; /* EndTriSFX_RTS */
    /* $B8A6: 60 */ nes_cpu_instruction_boundary(0xB8A6, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B8EC_b1(void) { /* SamusDieSFXInit_RTS */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8EC_b1");
#endif
label_B8EC:; /* SamusDieSFXInit_RTS */
    /* $B8EC: 60 */ nes_cpu_instruction_boundary(0xB8EC, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_913F_b1_body(int _entry) {
    switch (_entry) {
        case 1: goto label_9A07;
        case 2: goto label_9F54;
        case 3: goto label_95AB;
        case 4: goto label_95C3;
        case 5: goto label_95AE;
        case 6: goto label_95B1;
        case 7: goto label_95B4;
        case 8: goto label_95B7;
        case 9: goto label_95BA;
        case 10: goto label_95C0;
        case 11: goto label_95BD;
    }
label_913F:;
    /* $913F: 30 */ nes_cpu_instruction_boundary(0x913F, 2); if (g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0x9161); return; }
label_9141:;
    /* $9141: 30 */ nes_cpu_instruction_boundary(0x9141, 2); if (g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0x9173); return; }
label_9143:;
    /* $9143: 20 */ nes_cpu_instruction_boundary(0x9143, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x91; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x45; g_cpu.S--; if (!nes_dispatch_call(0x3060, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9143, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9146:;
    /* $9146: 70 */ nes_cpu_instruction_boundary(0x9146, 2); if (g_cpu.V) { maybe_trigger_vblank(1); call_by_address(0x9140); return; }
label_9148:;
    /* $9148: 20 */ nes_cpu_instruction_boundary(0x9148, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x91; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x4A; g_cpu.S--; if (!nes_dispatch_call(0x3030, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9148, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_914B:;
    /* $914B: 60 */ nes_cpu_instruction_boundary(0x914B, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_914C:;
    /* $914C: 60 */ nes_cpu_instruction_boundary(0x914C, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_914D:;
    /* $914D: 70 */ nes_cpu_instruction_boundary(0x914D, 2); if (g_cpu.V) {
    nes_cpu_instruction_boundary(0x913F, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_913F;
    }
label_914F:;
    /* $914F: F8 */ nes_cpu_instruction_boundary(0x914F, 2); g_cpu.D = 1;
label_9150:;
    /* $9150: 10 */ nes_cpu_instruction_boundary(0x9150, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_9162; }
label_9152:;
    /* $9152: 10 */ nes_cpu_instruction_boundary(0x9152, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_9164; }
label_9154:;
    /* $9154: 10 */ nes_cpu_instruction_boundary(0x9154, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_9166; }
label_9156:;
    /* $9156: 00 */ nes_cpu_instruction_boundary(0x9156, 7); nes_brk_executed(0x9156); return;
label_9157:;
    /* $9157: 10 */ nes_cpu_instruction_boundary(0x9157, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_9159; }
label_9159:;
    /* $9159: 00 */ nes_cpu_instruction_boundary(0x9159, 7); nes_brk_executed(0x9159); return;
label_915A:;
    /* $915A: 00 */ nes_cpu_instruction_boundary(0x915A, 7); nes_brk_executed(0x915A); return;
label_915B:;
    /* $915B: 00 */ nes_cpu_instruction_boundary(0x915B, 7); nes_brk_executed(0x915B); return;
label_915C:;
    /* $915C: 00 */ nes_cpu_instruction_boundary(0x915C, 7); nes_brk_executed(0x915C); return;
label_915D:;
    /* $915D: 00 */ nes_cpu_instruction_boundary(0x915D, 7); nes_brk_executed(0x915D); return;
label_915E:;
    /* $915E: 00 */ nes_cpu_instruction_boundary(0x915E, 7); nes_brk_executed(0x915E); return;
label_915F:;
    /* $915F: 00 */ nes_cpu_instruction_boundary(0x915F, 7); nes_brk_executed(0x915F); return;
label_9160:; /* GFX_BrinstarSprites */
    /* $9160: 03 */ nes_cpu_instruction_boundary(0x9160, 8); { uint16_t a=nes_read16zp((0x0F + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9162:;
    /* $9162: 05 */ nes_cpu_instruction_boundary(0x9162, 3); g_cpu.A |= nes_read(0x32); FLAG_NZ(g_cpu.A);
label_9164:;
    /* $9164: D1 */ nes_cpu_instruction_boundary(0x9164, 5); { uint8_t m=nes_read((nes_read16zp(0x48) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9166:;
    /* $9166: 12 */ nes_cpu_instruction_boundary(0x9166, 2); /* ILLEGAL $12 — skip 1 */
label_9167:;
    /* $9167: 24 */ nes_cpu_instruction_boundary(0x9167, 3); { uint8_t m=nes_read(0x01); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_9169:;
    /* $9169: 02 */ nes_cpu_instruction_boundary(0x9169, 2); /* ILLEGAL $02 — skip 1 */
label_916A:;
    /* $916A: 02 */ nes_cpu_instruction_boundary(0x916A, 2); /* ILLEGAL $02 — skip 1 */
label_916B:;
    /* $916B: 11 */ nes_cpu_instruction_boundary(0x916B, 5); g_cpu.A |= nes_read((nes_read16zp(0x48) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_916D:;
    /* $916D: 20 */ nes_cpu_instruction_boundary(0x916D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x91; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6F; g_cpu.S--; if (!nes_dispatch_call(0x0000, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x916D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9170:;
    /* $9170: E0 */ nes_cpu_instruction_boundary(0x9170, 2); { int r=g_cpu.X-0xF0; g_cpu.C=(g_cpu.X>=0xF0)?1:0; FLAG_NZ(r&0xFF); }
label_9172:;
    /* $9172: EC */ nes_cpu_instruction_boundary(0x9172, 4); { uint8_t m=nes_read(0x92DE); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9175:;
    /* $9175: 8D */ nes_cpu_instruction_boundary(0x9175, 4); nes_write(0x3CA0, g_cpu.A);
label_9178:;
    /* $9178: C0 */ nes_cpu_instruction_boundary(0x9178, 2); { int r=g_cpu.Y-0x00; g_cpu.C=(g_cpu.Y>=0x00)?1:0; FLAG_NZ(r&0xFF); }
label_917A:;
    /* $917A: 0C */ nes_cpu_instruction_boundary(0x917A, 4); (void)nes_read(0x0102); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_917D:;
    /* $917D: 0C */ nes_cpu_instruction_boundary(0x917D, 4); (void)nes_read(0x0002); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9180:;
    /* $9180: 00 */ nes_cpu_instruction_boundary(0x9180, 7); nes_brk_executed(0x9180); return;
label_9181:;
    /* $9181: 00 */ nes_cpu_instruction_boundary(0x9181, 7); nes_brk_executed(0x9181); return;
label_9182:;
    /* $9182: F8 */ nes_cpu_instruction_boundary(0x9182, 2); g_cpu.D = 1;
label_9183:;
    /* $9183: 3E */ nes_cpu_instruction_boundary(0x9183, 7); { uint16_t a=(0x0F1F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9186:;
    /* $9186: 0F */ nes_cpu_instruction_boundary(0x9186, 6); { uint16_t a=0x000E; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9189:;
    /* $9189: 00 */ nes_cpu_instruction_boundary(0x9189, 7); nes_brk_executed(0x9189); return;
label_918A:;
    /* $918A: 00 */ nes_cpu_instruction_boundary(0x918A, 7); nes_brk_executed(0x918A); return;
label_918B:;
    /* $918B: 08 */ nes_cpu_instruction_boundary(0x918B, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_918C:;
    /* $918C: 04 */ nes_cpu_instruction_boundary(0x918C, 3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_918E:;
    /* $918E: 00 */ nes_cpu_instruction_boundary(0x918E, 7); nes_brk_executed(0x918E); return;
label_918F:;
    /* $918F: 00 */ nes_cpu_instruction_boundary(0x918F, 7); nes_brk_executed(0x918F); return;
label_9190:;
    /* $9190: 18 */ nes_cpu_instruction_boundary(0x9190, 2); g_cpu.C = 0;
label_9191:;
    /* $9191: 30 */ nes_cpu_instruction_boundary(0x9191, 2); if (g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0x91FF); return; }
label_9193:;
    /* $9193: 7C */ nes_cpu_instruction_boundary(0x9193, 4); (void)nes_read((0x785C + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9196:;
    /* $9196: 70 */ nes_cpu_instruction_boundary(0x9196, 2); if (g_cpu.V) { maybe_trigger_vblank(1); call_by_address(0x91B9); return; }
label_9198:;
    /* $9198: 00 */ nes_cpu_instruction_boundary(0x9198, 7); nes_brk_executed(0x9198); return;
label_9199:;
    /* $9199: 00 */ nes_cpu_instruction_boundary(0x9199, 7); nes_brk_executed(0x9199); return;
label_919A:;
    /* $919A: 0C */ nes_cpu_instruction_boundary(0x919A, 4); (void)nes_read(0x1C1C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_919D:;
    /* $919D: 38 */ nes_cpu_instruction_boundary(0x919D, 2); g_cpu.C = 1;
label_919E:;
    /* $919E: 30 */ nes_cpu_instruction_boundary(0x919E, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_91DC; }
label_91A0:;
    /* $91A0: 18 */ nes_cpu_instruction_boundary(0x91A0, 2); g_cpu.C = 0;
label_91A1:;
    /* $91A1: 30 */ nes_cpu_instruction_boundary(0x91A1, 2); if (g_cpu.N) { maybe_trigger_vblank(2); call_by_address(0x9203); return; }
label_91A3:;
    /* $91A3: 60 */ nes_cpu_instruction_boundary(0x91A3, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_91A4:;
    /* $91A4: 40 */ nes_cpu_instruction_boundary(0x91A4, 6); /* RTI */ g_rti_source = 0x91A4; g_rti_bank = 1; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_91A5:;
    /* $91A5: 40 */ nes_cpu_instruction_boundary(0x91A5, 6); /* RTI */ g_rti_source = 0x91A5; g_rti_bank = 1; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_91A6:;
    /* $91A6: 40 */ nes_cpu_instruction_boundary(0x91A6, 6); /* RTI */ g_rti_source = 0x91A6; g_rti_bank = 1; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_91A7:;
    /* $91A7: 01 */ nes_cpu_instruction_boundary(0x91A7, 6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_91A9:;
    /* $91A9: 00 */ nes_cpu_instruction_boundary(0x91A9, 7); nes_brk_executed(0x91A9); return;
label_91AA:;
    /* $91AA: 00 */ nes_cpu_instruction_boundary(0x91AA, 7); nes_brk_executed(0x91AA); return;
label_91AB:;
    /* $91AB: 00 */ nes_cpu_instruction_boundary(0x91AB, 7); nes_brk_executed(0x91AB); return;
label_91AC:;
    /* $91AC: 00 */ nes_cpu_instruction_boundary(0x91AC, 7); nes_brk_executed(0x91AC); return;
label_91AD:;
    /* $91AD: 00 */ nes_cpu_instruction_boundary(0x91AD, 7); nes_brk_executed(0x91AD); return;
label_91AE:;
    /* $91AE: 00 */ nes_cpu_instruction_boundary(0x91AE, 7); nes_brk_executed(0x91AE); return;
label_91AF:;
    /* $91AF: 3C */ nes_cpu_instruction_boundary(0x91AF, 4); (void)nes_read((0x0100 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_91B2:;
    /* $91B2: 00 */ nes_cpu_instruction_boundary(0x91B2, 7); nes_brk_executed(0x91B2); return;
label_91B3:;
    /* $91B3: 00 */ nes_cpu_instruction_boundary(0x91B3, 7); nes_brk_executed(0x91B3); return;
label_91B4:;
    /* $91B4: 03 */ nes_cpu_instruction_boundary(0x91B4, 8); { uint16_t a=nes_read16zp((0x04 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_91B6:;
    /* $91B6: 48 */ nes_cpu_instruction_boundary(0x91B6, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_91B7:;
    /* $91B7: 3C */ nes_cpu_instruction_boundary(0x91B7, 4); (void)nes_read((0x0100 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_91BA:;
    /* $91BA: 00 */ nes_cpu_instruction_boundary(0x91BA, 7); nes_brk_executed(0x91BA); return;
label_91BB:;
    /* $91BB: 03 */ nes_cpu_instruction_boundary(0x91BB, 8); { uint16_t a=nes_read16zp((0x0C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_91BD:;
    /* $91BD: 08 */ nes_cpu_instruction_boundary(0x91BD, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_91BE:;
    /* $91BE: 10 */ nes_cpu_instruction_boundary(0x91BE, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0x91C3); return; }
label_91C0:;
    /* $91C0: 48 */ nes_cpu_instruction_boundary(0x91C0, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_91C1:;
    /* $91C1: 2F */ nes_cpu_instruction_boundary(0x91C1, 6); { uint16_t a=0x4DB3; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_91C4:;
    /* $91C4: 32 */ nes_cpu_instruction_boundary(0x91C4, 2); /* ILLEGAL $32 — skip 1 */
label_91C5:;
    /* $91C5: CC */ nes_cpu_instruction_boundary(0x91C5, 4); { uint8_t m=nes_read(0x6F84); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_91C8:;
    /* $91C8: 48 */ nes_cpu_instruction_boundary(0x91C8, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_91C9:;
    /* $91C9: 28 */ nes_cpu_instruction_boundary(0x91C9, 4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_91CA:;
    /* $91CA: AF */ nes_cpu_instruction_boundary(0x91CA, 4); g_cpu.A = g_cpu.X = nes_read(0x783D); FLAG_NZ(g_cpu.A);
label_91CD:;
    /* $91CD: CD */ nes_cpu_instruction_boundary(0x91CD, 4); { uint8_t m=nes_read(0x6FB6); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_91D0:;
    /* $91D0: 00 */ nes_cpu_instruction_boundary(0x91D0, 7); nes_brk_executed(0x91D0); return;
label_91D1:;
    /* $91D1: 50 */ nes_cpu_instruction_boundary(0x91D1, 2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_91D3; }
label_91D3:;
    /* $91D3: C8 */ nes_cpu_instruction_boundary(0x91D3, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_91D4:;
    /* $91D4: 74 */ nes_cpu_instruction_boundary(0x91D4, 4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_91D6:;
    /* $91D6: 90 */ nes_cpu_instruction_boundary(0x91D6, 2); if (!g_cpu.C) { maybe_trigger_vblank(2); call_by_address(0x9210); return; }
label_91D8:;
    /* $91D8: 00 */ nes_cpu_instruction_boundary(0x91D8, 7); nes_brk_executed(0x91D8); return;
label_91D9:;
    /* $91D9: 00 */ nes_cpu_instruction_boundary(0x91D9, 7); nes_brk_executed(0x91D9); return;
label_91DA:;
    /* $91DA: B0 */ nes_cpu_instruction_boundary(0x91DA, 2); if (g_cpu.C) {
    nes_cpu_instruction_boundary(0x91C4, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_91C4;
    }
label_91DC:;
    /* $91DC: 74 */ nes_cpu_instruction_boundary(0x91DC, 4); (void)nes_read((0xBC + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_91DE:;
    /* $91DE: 18 */ nes_cpu_instruction_boundary(0x91DE, 2); g_cpu.C = 0;
label_91DF:;
    /* $91DF: 18 */ nes_cpu_instruction_boundary(0x91DF, 2); g_cpu.C = 0;
label_91E0:;
    /* $91E0: 3C */ nes_cpu_instruction_boundary(0x91E0, 4); (void)nes_read((0xFF7F + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_91E3:;
    /* $91E3: FF */ nes_cpu_instruction_boundary(0x91E3, 7); { uint16_t a=(0x7EFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_91E6:;
    /* $91E6: 7B */ nes_cpu_instruction_boundary(0x91E6, 7); { uint16_t a=(0x3C3D + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_91E9:;
    /* $91E9: 7F */ nes_cpu_instruction_boundary(0x91E9, 7); { uint16_t a=(0xFCFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_91EC:;
    /* $91EC: D1 */ nes_cpu_instruction_boundary(0x91EC, 5); { uint8_t m=nes_read((nes_read16zp(0x50) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_91EE:;
    /* $91EE: 69 */ nes_cpu_instruction_boundary(0x91EE, 2); { uint16_t r = g_cpu.A + 0x0E + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0E); g_cpu.A=r&0xFF; }
label_91F0:;
    /* $91F0: 00 */ nes_cpu_instruction_boundary(0x91F0, 7); nes_brk_executed(0x91F0); return;
label_91F1:;
    /* $91F1: 00 */ nes_cpu_instruction_boundary(0x91F1, 7); nes_brk_executed(0x91F1); return;
label_91F2:;
    /* $91F2: C0 */ nes_cpu_instruction_boundary(0x91F2, 2); { int r=g_cpu.Y-0xE0; g_cpu.C=(g_cpu.Y>=0xE0)?1:0; FLAG_NZ(r&0xFF); }
label_91F4:;
    /* $91F4: B0 */ nes_cpu_instruction_boundary(0x91F4, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_91FE; }
label_91F6:;
    /* $91F6: 07 */ nes_cpu_instruction_boundary(0x91F6, 5); { uint16_t a=0x87; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_91F8:;
    /* $91F8: 00 */ nes_cpu_instruction_boundary(0x91F8, 7); nes_brk_executed(0x91F8); return;
label_91F9:;
    /* $91F9: 00 */ nes_cpu_instruction_boundary(0x91F9, 7); nes_brk_executed(0x91F9); return;
label_91FA:;
    /* $91FA: C0 */ nes_cpu_instruction_boundary(0x91FA, 2); { int r=g_cpu.Y-0x60; g_cpu.C=(g_cpu.Y>=0x60)?1:0; FLAG_NZ(r&0xFF); }
label_91FC:;
    /* $91FC: B0 */ nes_cpu_instruction_boundary(0x91FC, 2); if (g_cpu.C) { maybe_trigger_vblank(2); call_by_address(0x9266); return; }
label_91FE:;
    /* $91FE: 73 */ nes_cpu_instruction_boundary(0x91FE, 8); { uint16_t a=(nes_read16zp(0xB2) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9200:;
    /* $9200: 01 */ nes_cpu_instruction_boundary(0x9200, 6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9202:;
    /* $9202: 1C */ nes_cpu_instruction_boundary(0x9202, 4); (void)nes_read((0x070F + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9205:;
    /* $9205: 03 */ nes_cpu_instruction_boundary(0x9205, 8); { uint16_t a=nes_read16zp((0x0F + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9207:;
    /* $9207: 3F */ nes_cpu_instruction_boundary(0x9207, 7); { uint16_t a=(0x0001 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_920A:;
    /* $920A: 10 */ nes_cpu_instruction_boundary(0x920A, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_9214; }
label_920C:;
    /* $920C: 04 */ nes_cpu_instruction_boundary(0x920C, 3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_920E:;
    /* $920E: 08 */ nes_cpu_instruction_boundary(0x920E, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_920F:;
    /* $920F: 20 */ nes_cpu_instruction_boundary(0x920F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x92; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x11; g_cpu.S--; func_C080();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x920F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9212:;
    /* $9212: F8 */ nes_cpu_instruction_boundary(0x9212, 2); g_cpu.D = 1;
label_9213:;
    /* $9213: C8 */ nes_cpu_instruction_boundary(0x9213, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9214:;
    /* $9214: 88 */ nes_cpu_instruction_boundary(0x9214, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9215:;
    /* $9215: 32 */ nes_cpu_instruction_boundary(0x9215, 2); /* ILLEGAL $32 — skip 1 */
label_9216:;
    /* $9216: 51 */ nes_cpu_instruction_boundary(0x9216, 5); g_cpu.A ^= nes_read((nes_read16zp(0x68) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9218:;
    /* $9218: 0C */ nes_cpu_instruction_boundary(0x9218, 4); (void)nes_read(0xA010); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_921B:;
    /* $921B: 06 */ nes_cpu_instruction_boundary(0x921B, 5); { uint16_t a=0x01; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_921D:;
    /* $921D: 32 */ nes_cpu_instruction_boundary(0x921D, 2); /* ILLEGAL $32 — skip 1 */
label_921E:;
    /* $921E: 11 */ nes_cpu_instruction_boundary(0x921E, 5); g_cpu.A |= nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9220:;
    /* $9220: 00 */ nes_cpu_instruction_boundary(0x9220, 7); nes_brk_executed(0x9220); return;
label_9221:;
    /* $9221: 01 */ nes_cpu_instruction_boundary(0x9221, 6); g_cpu.A |= nes_read(nes_read16zp((0x21 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9223:;
    /* $9223: 33 */ nes_cpu_instruction_boundary(0x9223, 8); { uint16_t a=(nes_read16zp(0x3B) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_9225:;
    /* $9225: 1F */ nes_cpu_instruction_boundary(0x9225, 7); { uint16_t a=(0xFF9F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9228:;
    /* $9228: 00 */ nes_cpu_instruction_boundary(0x9228, 7); nes_brk_executed(0x9228); return;
label_9229:;
    /* $9229: 01 */ nes_cpu_instruction_boundary(0x9229, 6); g_cpu.A |= nes_read(nes_read16zp((0x20 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_922B:;
    /* $922B: 12 */ nes_cpu_instruction_boundary(0x922B, 2); /* ILLEGAL $12 — skip 1 */
label_922C:;
    /* $922C: 08 */ nes_cpu_instruction_boundary(0x922C, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_922D:;
    /* $922D: 00 */ nes_cpu_instruction_boundary(0x922D, 7); nes_brk_executed(0x922D); return;
label_922E:;
    /* $922E: 80 */ nes_cpu_instruction_boundary(0x922E, 2); /* NOP */
label_9230:;
    /* $9230: 00 */ nes_cpu_instruction_boundary(0x9230, 7); nes_brk_executed(0x9230); return;
label_9231:;
    /* $9231: 00 */ nes_cpu_instruction_boundary(0x9231, 7); nes_brk_executed(0x9231); return;
label_9232:;
    /* $9232: 08 */ nes_cpu_instruction_boundary(0x9232, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9233:;
    /* $9233: 98 */ nes_cpu_instruction_boundary(0x9233, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_9234:;
    /* $9234: B8 */ nes_cpu_instruction_boundary(0x9234, 2); g_cpu.V = 0;
label_9235:;
    /* $9235: F0 */ nes_cpu_instruction_boundary(0x9235, 2); if (g_cpu.Z) {
    nes_cpu_instruction_boundary(0x9229, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9229;
    }
label_9237:;
    /* $9237: FE */ nes_cpu_instruction_boundary(0x9237, 7); { uint16_t a=(0x0000 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_923A:;
    /* $923A: 08 */ nes_cpu_instruction_boundary(0x923A, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_923B:;
    /* $923B: 90 */ nes_cpu_instruction_boundary(0x923B, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0x925D); return; }
label_923D:;
    /* $923D: 00 */ nes_cpu_instruction_boundary(0x923D, 7); nes_brk_executed(0x923D); return;
label_923E:;
    /* $923E: 02 */ nes_cpu_instruction_boundary(0x923E, 2); /* ILLEGAL $02 — skip 1 */
label_923F:;
    /* $923F: 04 */ nes_cpu_instruction_boundary(0x923F, 3); (void)nes_read(0x81); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9241:;
    /* $9241: A5 */ nes_cpu_instruction_boundary(0x9241, 3); g_cpu.A = nes_read(0xE7); FLAG_NZ(g_cpu.A);
label_9243:;
    /* $9243: 00 */ nes_cpu_instruction_boundary(0x9243, 7); nes_brk_executed(0x9243); return;
label_9244:;
    /* $9244: 00 */ nes_cpu_instruction_boundary(0x9244, 7); nes_brk_executed(0x9244); return;
label_9245:;
    /* $9245: 24 */ nes_cpu_instruction_boundary(0x9245, 3); { uint8_t m=nes_read(0x18); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_9247:;
    /* $9247: 24 */ nes_cpu_instruction_boundary(0x9247, 3); { uint8_t m=nes_read(0x81); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_9249:;
    /* $9249: A5 */ nes_cpu_instruction_boundary(0x9249, 3); g_cpu.A = nes_read(0xE7); FLAG_NZ(g_cpu.A);
label_924B:;
    /* $924B: 42 */ nes_cpu_instruction_boundary(0x924B, 2); /* ILLEGAL $42 — skip 1 */
label_924C:;
    /* $924C: 66 */ nes_cpu_instruction_boundary(0x924C, 5); { uint16_t a=0xC3; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_924E:;
    /* $924E: 66 */ nes_cpu_instruction_boundary(0x924E, 5); { uint16_t a=0x18; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9250:;
    /* $9250: 00 */ nes_cpu_instruction_boundary(0x9250, 7); nes_brk_executed(0x9250); return;
label_9251:;
    /* $9251: 24 */ nes_cpu_instruction_boundary(0x9251, 3); { uint8_t m=nes_read(0x1B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_9253:;
    /* $9253: 1F */ nes_cpu_instruction_boundary(0x9253, 7); { uint16_t a=(0x443B + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9256:;
    /* $9256: 5B */ nes_cpu_instruction_boundary(0x9256, 7); { uint16_t a=(0xBD3F + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9259:;
    /* $9259: 9B */ nes_cpu_instruction_boundary(0x9259, 5); /* ILLEGAL $9B — skip 3 */
label_925C:;
    /* $925C: C4 */ nes_cpu_instruction_boundary(0x925C, 3); { uint8_t m=nes_read(0x98); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_925E:;
    /* $925E: 83 */ nes_cpu_instruction_boundary(0x925E, 6); nes_write(nes_read16zp((0xC7 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_9260:;
    /* $9260: 00 */ nes_cpu_instruction_boundary(0x9260, 7); nes_brk_executed(0x9260); return;
label_9261:;
    /* $9261: 20 */ nes_cpu_instruction_boundary(0x9261, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x92; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x63; g_cpu.S--; func_C360();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9261, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9264:;
    /* $9264: CC */ nes_cpu_instruction_boundary(0x9264, 4); { uint8_t m=nes_read(0x2060); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9267:;
    /* $9267: 00 */ nes_cpu_instruction_boundary(0x9267, 7); nes_brk_executed(0x9267); return;
label_9268:;
    /* $9268: 0A */ nes_cpu_instruction_boundary(0x9268, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9269:;
    /* $9269: 0F */ nes_cpu_instruction_boundary(0x9269, 6); { uint16_t a=0x1C0F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_926C:;
    /* $926C: 13 */ nes_cpu_instruction_boundary(0x926C, 8); { uint16_t a=(nes_read16zp(0x0F) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_926E:;
    /* $926E: 0F */ nes_cpu_instruction_boundary(0x926E, 6); { uint16_t a=0x000A; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9271:;
    /* $9271: 00 */ nes_cpu_instruction_boundary(0x9271, 7); nes_brk_executed(0x9271); return;
label_9272:;
    /* $9272: 00 */ nes_cpu_instruction_boundary(0x9272, 7); nes_brk_executed(0x9272); return;
label_9273:;
    /* $9273: 00 */ nes_cpu_instruction_boundary(0x9273, 7); nes_brk_executed(0x9273); return;
label_9274:;
    /* $9274: E0 */ nes_cpu_instruction_boundary(0x9274, 2); { int r=g_cpu.X-0x00; g_cpu.C=(g_cpu.X>=0x00)?1:0; FLAG_NZ(r&0xFF); }
label_9276:;
    /* $9276: 00 */ nes_cpu_instruction_boundary(0x9276, 7); nes_brk_executed(0x9276); return;
label_9277:;
    /* $9277: 00 */ nes_cpu_instruction_boundary(0x9277, 7); nes_brk_executed(0x9277); return;
label_9278:;
    /* $9278: 40 */ nes_cpu_instruction_boundary(0x9278, 6); /* RTI */ g_rti_source = 0x9278; g_rti_bank = 1; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9279:;
    /* $9279: E8 */ nes_cpu_instruction_boundary(0x9279, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_927A:;
    /* $927A: FA */ nes_cpu_instruction_boundary(0x927A, 2); /* NOP */
label_927B:;
    /* $927B: FF */ nes_cpu_instruction_boundary(0x927B, 7); { uint16_t a=(0xFA1F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_927E:;
    /* $927E: E8 */ nes_cpu_instruction_boundary(0x927E, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_927F:;
    /* $927F: 40 */ nes_cpu_instruction_boundary(0x927F, 6); /* RTI */ g_rti_source = 0x927F; g_rti_bank = 1; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9280:;
    /* $9280: 1E */ nes_cpu_instruction_boundary(0x9280, 7); { uint16_t a=(0x181C + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9283:;
    /* $9283: 3A */ nes_cpu_instruction_boundary(0x9283, 2); /* NOP */
label_9284:;
    /* $9284: 36 */ nes_cpu_instruction_boundary(0x9284, 6); { uint16_t a=(0x60 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9286:;
    /* $9286: 00 */ nes_cpu_instruction_boundary(0x9286, 7); nes_brk_executed(0x9286); return;
label_9287:;
    /* $9287: 00 */ nes_cpu_instruction_boundary(0x9287, 7); nes_brk_executed(0x9287); return;
label_9288:;
    /* $9288: 00 */ nes_cpu_instruction_boundary(0x9288, 7); nes_brk_executed(0x9288); return;
label_9289:;
    /* $9289: 00 */ nes_cpu_instruction_boundary(0x9289, 7); nes_brk_executed(0x9289); return;
label_928A:;
    /* $928A: 00 */ nes_cpu_instruction_boundary(0x928A, 7); nes_brk_executed(0x928A); return;
label_928B:;
    /* $928B: 02 */ nes_cpu_instruction_boundary(0x928B, 2); /* ILLEGAL $02 — skip 1 */
label_928C:;
    /* $928C: 06 */ nes_cpu_instruction_boundary(0x928C, 5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_928E:;
    /* $928E: 03 */ nes_cpu_instruction_boundary(0x928E, 8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9290:;
    /* $9290: 43 */ nes_cpu_instruction_boundary(0x9290, 8); { uint16_t a=nes_read16zp((0xC6 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9292:;
    /* $9292: FE */ nes_cpu_instruction_boundary(0x9292, 7); { uint16_t a=(0xF6F8 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9295:;
    /* $9295: A9 */ nes_cpu_instruction_boundary(0x9295, 2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_9297:;
    /* $9297: 20 */ nes_cpu_instruction_boundary(0x9297, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x92; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; if (!nes_dispatch_call(0x0038, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9297, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_929A:;
    /* $929A: 00 */ nes_cpu_instruction_boundary(0x929A, 7); nes_brk_executed(0x929A); return;
label_929B:;
    /* $929B: 00 */ nes_cpu_instruction_boundary(0x929B, 7); nes_brk_executed(0x929B); return;
label_929C:;
    /* $929C: 66 */ nes_cpu_instruction_boundary(0x929C, 5); { uint16_t a=0xAD; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_929E:;
    /* $929E: F9 */ nes_cpu_instruction_boundary(0x929E, 4); { uint8_t m=nes_read((0x7320 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_92A1:;
    /* $92A1: DE */ nes_cpu_instruction_boundary(0x92A1, 7); { uint16_t a=(0xF8EF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_92A4:;
    /* $92A4: F6 */ nes_cpu_instruction_boundary(0x92A4, 6); { uint16_t a=(0xA9 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_92A6:;
    /* $92A6: 21 */ nes_cpu_instruction_boundary(0x92A6, 6); g_cpu.A &= nes_read(nes_read16zp((0x20 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_92A8:;
    /* $92A8: 38 */ nes_cpu_instruction_boundary(0x92A8, 2); g_cpu.C = 1;
label_92A9:;
    /* $92A9: 1E */ nes_cpu_instruction_boundary(0x92A9, 7); { uint16_t a=(0x000F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_92AC:;
    /* $92AC: 66 */ nes_cpu_instruction_boundary(0x92AC, 5); { uint16_t a=0xAD; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_92AE:;
    /* $92AE: F9 */ nes_cpu_instruction_boundary(0x92AE, 4); { uint8_t m=nes_read((0x0320 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_92B1:;
    /* $92B1: 02 */ nes_cpu_instruction_boundary(0x92B1, 2); /* ILLEGAL $02 — skip 1 */
label_92B2:;
    /* $92B2: 30 */ nes_cpu_instruction_boundary(0x92B2, 2); if (g_cpu.N) { maybe_trigger_vblank(2); goto label_9332; }
label_92B4:;
    /* $92B4: 70 */ nes_cpu_instruction_boundary(0x92B4, 2); if (g_cpu.V) {
    nes_cpu_instruction_boundary(0x9286, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9286;
    }
label_92B6:;
    /* $92B6: 6C */ nes_cpu_instruction_boundary(0x92B6, 5); { uint16_t _jt = nes_read16_jmpbug(0x041D); nes_cpu_instruction_boundary(_jt, 2); call_by_address_tail(_jt, -1); return; }
label_9332:;
    /* $9332: A4 */ nes_cpu_instruction_boundary(0x9332, 3); g_cpu.Y = nes_read(0x64); FLAG_NZ(g_cpu.Y);
label_9334:;
    /* $9334: 18 */ nes_cpu_instruction_boundary(0x9334, 2); g_cpu.C = 0;
label_9335:;
    /* $9335: 00 */ nes_cpu_instruction_boundary(0x9335, 7); nes_brk_executed(0x9335); return;
label_9336:;
    /* $9336: 20 */ nes_cpu_instruction_boundary(0x9336, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x38; g_cpu.S--; if (!nes_dispatch_call(0x0040, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9336, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9339:;
    /* $9339: 00 */ nes_cpu_instruction_boundary(0x9339, 7); nes_brk_executed(0x9339); return;
label_933A:;
    /* $933A: 25 */ nes_cpu_instruction_boundary(0x933A, 3); g_cpu.A &= nes_read(0x62); FLAG_NZ(g_cpu.A);
label_933C:;
    /* $933C: 80 */ nes_cpu_instruction_boundary(0x933C, 2); /* NOP */
label_933E:;
    /* $933E: 26 */ nes_cpu_instruction_boundary(0x933E, 5); { uint16_t a=0x40; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9340:;
    /* $9340: 00 */ nes_cpu_instruction_boundary(0x9340, 7); nes_brk_executed(0x9340); return;
label_9341:;
    /* $9341: 02 */ nes_cpu_instruction_boundary(0x9341, 2); /* ILLEGAL $02 — skip 1 */
label_9342:;
    /* $9342: 0D */ nes_cpu_instruction_boundary(0x9342, 4); g_cpu.A |= nes_read(0x2D17); FLAG_NZ(g_cpu.A);
label_9345:;
    /* $9345: 62 */ nes_cpu_instruction_boundary(0x9345, 2); /* ILLEGAL $62 — skip 1 */
label_9346:;
    /* $9346: 6D */ nes_cpu_instruction_boundary(0x9346, 4); { uint8_t m=nes_read(0x832E); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9349:;
    /* $9349: C5 */ nes_cpu_instruction_boundary(0x9349, 3); { uint8_t m=nes_read(0xF2); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_934B:;
    /* $934B: E0 */ nes_cpu_instruction_boundary(0x934B, 2); { int r=g_cpu.X-0xC2; g_cpu.C=(g_cpu.X>=0xC2)?1:0; FLAG_NZ(r&0xFF); }
label_934D:;
    /* $934D: 81 */ nes_cpu_instruction_boundary(0x934D, 6); nes_write(nes_read16zp((0x8C + g_cpu.X) & 0xFF), g_cpu.A);
label_934F:;
    /* $934F: CE */ nes_cpu_instruction_boundary(0x934F, 6); { uint16_t a=0x4000; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9352:;
    /* $9352: B0 */ nes_cpu_instruction_boundary(0x9352, 2); if (g_cpu.C) {
    nes_cpu_instruction_boundary(0x933C, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_933C;
    }
label_9354:;
    /* $9354: B4 */ nes_cpu_instruction_boundary(0x9354, 4); g_cpu.Y = nes_read((0x46 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_9356:;
    /* $9356: B6 */ nes_cpu_instruction_boundary(0x9356, 4); g_cpu.X = nes_read((0x74 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_9358:;
    /* $9358: C1 */ nes_cpu_instruction_boundary(0x9358, 6); { uint8_t m=nes_read(nes_read16zp((0xA3 + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_935A:;
    /* $935A: 4F */ nes_cpu_instruction_boundary(0x935A, 6); { uint16_t a=0x4307; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_935D:;
    /* $935D: 81 */ nes_cpu_instruction_boundary(0x935D, 6); nes_write(nes_read16zp((0x31 + g_cpu.X) & 0xFF), g_cpu.A);
label_935F:;
    /* $935F: 73 */ nes_cpu_instruction_boundary(0x935F, 8); { uint16_t a=(nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9361:;
    /* $9361: 00 */ nes_cpu_instruction_boundary(0x9361, 7); nes_brk_executed(0x9361); return;
label_9362:;
    /* $9362: 00 */ nes_cpu_instruction_boundary(0x9362, 7); nes_brk_executed(0x9362); return;
label_9363:;
    /* $9363: 00 */ nes_cpu_instruction_boundary(0x9363, 7); nes_brk_executed(0x9363); return;
label_9364:;
    /* $9364: 00 */ nes_cpu_instruction_boundary(0x9364, 7); nes_brk_executed(0x9364); return;
label_9365:;
    /* $9365: 20 */ nes_cpu_instruction_boundary(0x9365, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x67; g_cpu.S--; func_DF73();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9365, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9368:;
    /* $9368: 00 */ nes_cpu_instruction_boundary(0x9368, 7); nes_brk_executed(0x9368); return;
label_9369:;
    /* $9369: 00 */ nes_cpu_instruction_boundary(0x9369, 7); nes_brk_executed(0x9369); return;
label_936A:;
    /* $936A: 0A */ nes_cpu_instruction_boundary(0x936A, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_936B:;
    /* $936B: 0F */ nes_cpu_instruction_boundary(0x936B, 6); { uint16_t a=0x141F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_936E:;
    /* $936E: 11 */ nes_cpu_instruction_boundary(0x936E, 5); g_cpu.A |= nes_read((nes_read16zp(0x18) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9370:;
    /* $9370: 00 */ nes_cpu_instruction_boundary(0x9370, 7); nes_brk_executed(0x9370); return;
label_9371:;
    /* $9371: 00 */ nes_cpu_instruction_boundary(0x9371, 7); nes_brk_executed(0x9371); return;
label_9372:;
    /* $9372: 00 */ nes_cpu_instruction_boundary(0x9372, 7); nes_brk_executed(0x9372); return;
label_9373:;
    /* $9373: 00 */ nes_cpu_instruction_boundary(0x9373, 7); nes_brk_executed(0x9373); return;
label_9374:;
    /* $9374: 00 */ nes_cpu_instruction_boundary(0x9374, 7); nes_brk_executed(0x9374); return;
label_9375:;
    /* $9375: 00 */ nes_cpu_instruction_boundary(0x9375, 7); nes_brk_executed(0x9375); return;
label_9376:;
    /* $9376: 12 */ nes_cpu_instruction_boundary(0x9376, 2); /* ILLEGAL $12 — skip 1 */
label_9377:;
    /* $9377: C0 */ nes_cpu_instruction_boundary(0x9377, 2); { int r=g_cpu.Y-0x00; g_cpu.C=(g_cpu.Y>=0x00)?1:0; FLAG_NZ(r&0xFF); }
label_9379:;
    /* $9379: 00 */ nes_cpu_instruction_boundary(0x9379, 7); nes_brk_executed(0x9379); return;
label_937A:;
    /* $937A: 40 */ nes_cpu_instruction_boundary(0x937A, 6); /* RTI */ g_rti_source = 0x937A; g_rti_bank = 1; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_937B:;
    /* $937B: E8 */ nes_cpu_instruction_boundary(0x937B, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_937C:;
    /* $937C: FA */ nes_cpu_instruction_boundary(0x937C, 2); /* NOP */
label_937D:;
    /* $937D: FF */ nes_cpu_instruction_boundary(0x937D, 7); { uint16_t a=(0x0070 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9380:;
    /* $9380: 24 */ nes_cpu_instruction_boundary(0x9380, 3); { uint8_t m=nes_read(0x3C); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_9382:;
    /* $9382: 5A */ nes_cpu_instruction_boundary(0x9382, 2); /* NOP */
label_9383:;
    /* $9383: DB */ nes_cpu_instruction_boundary(0x9383, 7); { uint16_t a=(0x9966 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_9386:;
    /* $9386: 5A */ nes_cpu_instruction_boundary(0x9386, 2); /* NOP */
label_9387:;
    /* $9387: 24 */ nes_cpu_instruction_boundary(0x9387, 3); { uint8_t m=nes_read(0x00); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_9389:;
    /* $9389: 00 */ nes_cpu_instruction_boundary(0x9389, 7); nes_brk_executed(0x9389); return;
label_938A:;
    /* $938A: 42 */ nes_cpu_instruction_boundary(0x938A, 2); /* ILLEGAL $42 — skip 1 */
label_938B:;
    /* $938B: C3 */ nes_cpu_instruction_boundary(0x938B, 8); { uint16_t a=nes_read16zp((0x66 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_938D:;
    /* $938D: 00 */ nes_cpu_instruction_boundary(0x938D, 7); nes_brk_executed(0x938D); return;
label_938E:;
    /* $938E: 00 */ nes_cpu_instruction_boundary(0x938E, 7); nes_brk_executed(0x938E); return;
label_938F:;
    /* $938F: 42 */ nes_cpu_instruction_boundary(0x938F, 2); /* ILLEGAL $42 — skip 1 */
label_9390:;
    /* $9390: 00 */ nes_cpu_instruction_boundary(0x9390, 7); nes_brk_executed(0x9390); return;
label_9391:;
    /* $9391: 00 */ nes_cpu_instruction_boundary(0x9391, 7); nes_brk_executed(0x9391); return;
label_9392:;
    /* $9392: 44 */ nes_cpu_instruction_boundary(0x9392, 3); (void)nes_read(0xEE); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9394:;
    /* $9394: B2 */ nes_cpu_instruction_boundary(0x9394, 2); /* ILLEGAL $B2 — skip 1 */
label_9395:;
    /* $9395: 82 */ nes_cpu_instruction_boundary(0x9395, 2); /* NOP */
label_9397:;
    /* $9397: 40 */ nes_cpu_instruction_boundary(0x9397, 6); /* RTI */ g_rti_source = 0x9397; g_rti_bank = 1; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9398:;
    /* $9398: 04 */ nes_cpu_instruction_boundary(0x9398, 3); (void)nes_read(0x38); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_939A:;
    /* $939A: 54 */ nes_cpu_instruction_boundary(0x939A, 4); (void)nes_read((0xEE + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_939C:;
    /* $939C: B2 */ nes_cpu_instruction_boundary(0x939C, 2); /* ILLEGAL $B2 — skip 1 */
label_939D:;
    /* $939D: 80 */ nes_cpu_instruction_boundary(0x939D, 2); /* NOP */
label_939F:;
    /* $939F: 00 */ nes_cpu_instruction_boundary(0x939F, 7); nes_brk_executed(0x939F); return;
label_93A0:;
    /* $93A0: 00 */ nes_cpu_instruction_boundary(0x93A0, 7); nes_brk_executed(0x93A0); return;
label_93A1:;
    /* $93A1: 00 */ nes_cpu_instruction_boundary(0x93A1, 7); nes_brk_executed(0x93A1); return;
label_93A2:;
    /* $93A2: 0C */ nes_cpu_instruction_boundary(0x93A2, 4); (void)nes_read(0x6204); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_93A5:;
    /* $93A5: 12 */ nes_cpu_instruction_boundary(0x93A5, 2); /* ILLEGAL $12 — skip 1 */
label_93A6:;
    /* $93A6: 1F */ nes_cpu_instruction_boundary(0x93A6, 7); { uint16_t a=(0x0001 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_93A9:;
    /* $93A9: B0 */ nes_cpu_instruction_boundary(0x93A9, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_93FB; }
label_93AB:;
    /* $93AB: 78 */ nes_cpu_instruction_boundary(0x93AB, 2); g_cpu.I = 1;
label_93AC:;
    /* $93AC: 9C */ nes_cpu_instruction_boundary(0x93AC, 5); /* ILLEGAL $9C — skip 3 */
label_93AF:;
    /* $93AF: 00 */ nes_cpu_instruction_boundary(0x93AF, 7); nes_brk_executed(0x93AF); return;
label_93B0:;
    /* $93B0: 38 */ nes_cpu_instruction_boundary(0x93B0, 2); g_cpu.C = 1;
label_93B1:;
    /* $93B1: 72 */ nes_cpu_instruction_boundary(0x93B1, 2); /* ILLEGAL $72 — skip 1 */
label_93B2:;
    /* $93B2: C5 */ nes_cpu_instruction_boundary(0x93B2, 3); { uint8_t m=nes_read(0x73); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_93B4:;
    /* $93B4: 72 */ nes_cpu_instruction_boundary(0x93B4, 2); /* ILLEGAL $72 — skip 1 */
label_93B5:;
    /* $93B5: 6F */ nes_cpu_instruction_boundary(0x93B5, 6); { uint16_t a=0x0022; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_93B8:;
    /* $93B8: 40 */ nes_cpu_instruction_boundary(0x93B8, 6); /* RTI */ g_rti_source = 0x93B8; g_rti_bank = 1; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_93B9:;
    /* $93B9: 82 */ nes_cpu_instruction_boundary(0x93B9, 2); /* NOP */
label_93BB:;
    /* $93BB: 23 */ nes_cpu_instruction_boundary(0x93BB, 8); { uint16_t a=nes_read16zp((0x42 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_93BD:;
    /* $93BD: 07 */ nes_cpu_instruction_boundary(0x93BD, 5); { uint16_t a=0x1E; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_93BF:;
    /* $93BF: 00 */ nes_cpu_instruction_boundary(0x93BF, 7); nes_brk_executed(0x93BF); return;
label_93C0:;
    /* $93C0: C3 */ nes_cpu_instruction_boundary(0x93C0, 8); { uint16_t a=nes_read16zp((0xE0 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_93C2:;
    /* $93C2: 7C */ nes_cpu_instruction_boundary(0x93C2, 4); (void)nes_read((0xC78F + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_93C5:;
    /* $93C5: F3 */ nes_cpu_instruction_boundary(0x93C5, 8); { uint16_t a=(nes_read16zp(0x72) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_93C7:;
    /* $93C7: 00 */ nes_cpu_instruction_boundary(0x93C7, 7); nes_brk_executed(0x93C7); return;
label_93C8:;
    /* $93C8: E3 */ nes_cpu_instruction_boundary(0x93C8, 8); { uint16_t a=nes_read16zp((0xF0 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_93CA:;
    /* $93CA: 7E */ nes_cpu_instruction_boundary(0x93CA, 7); { uint16_t a=(0xC78F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_93CD:;
    /* $93CD: F2 */ nes_cpu_instruction_boundary(0x93CD, 2); /* ILLEGAL $F2 — skip 1 */
label_93CE:;
    /* $93CE: 71 */ nes_cpu_instruction_boundary(0x93CE, 5); { uint8_t m=nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_93D0:;
    /* $93D0: F0 */ nes_cpu_instruction_boundary(0x93D0, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0x93BA); return; }
label_93D2:;
    /* $93D2: 3C */ nes_cpu_instruction_boundary(0x93D2, 4); (void)nes_read((0x809C + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_93D5:;
    /* $93D5: 18 */ nes_cpu_instruction_boundary(0x93D5, 2); g_cpu.C = 0;
label_93D6:;
    /* $93D6: 1C */ nes_cpu_instruction_boundary(0x93D6, 4); (void)nes_read((0xF000 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_93D9:;
    /* $93D9: E8 */ nes_cpu_instruction_boundary(0x93D9, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_93DA:;
    /* $93DA: 3C */ nes_cpu_instruction_boundary(0x93DA, 4); (void)nes_read((0x429E + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_93DD:;
    /* $93DD: 5A */ nes_cpu_instruction_boundary(0x93DD, 2); /* NOP */
label_93DE:;
    /* $93DE: 5C */ nes_cpu_instruction_boundary(0x93DE, 4); (void)nes_read((0x3B00 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_93E1:;
    /* $93E1: 7D */ nes_cpu_instruction_boundary(0x93E1, 4); { uint8_t m=nes_read((0x7D7B + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_93E4:;
    /* $93E4: 7E */ nes_cpu_instruction_boundary(0x93E4, 7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_93E7:;
    /* $93E7: 00 */ nes_cpu_instruction_boundary(0x93E7, 7); nes_brk_executed(0x93E7); return;
label_93E8:;
    /* $93E8: 31 */ nes_cpu_instruction_boundary(0x93E8, 5); g_cpu.A &= nes_read((nes_read16zp(0x3D) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_93EA:;
    /* $93EA: 3B */ nes_cpu_instruction_boundary(0x93EA, 7); { uint16_t a=(0x6E1C + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_93ED:;
    /* $93ED: 37 */ nes_cpu_instruction_boundary(0x93ED, 6); { uint16_t a=(0x79 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_93EF:;
    /* $93EF: 00 */ nes_cpu_instruction_boundary(0x93EF, 7); nes_brk_executed(0x93EF); return;
label_93F0:;
    /* $93F0: F9 */ nes_cpu_instruction_boundary(0x93F0, 4); { uint8_t m=nes_read((0x50B9 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_93F3:;
    /* $93F3: E0 */ nes_cpu_instruction_boundary(0x93F3, 2); { int r=g_cpu.X-0x7C; g_cpu.C=(g_cpu.X>=0x7C)?1:0; FLAG_NZ(r&0xFF); }
label_93F5:;
    /* $93F5: 8C */ nes_cpu_instruction_boundary(0x93F5, 4); nes_write(0x00E0, g_cpu.Y);
label_93F8:;
    /* $93F8: F9 */ nes_cpu_instruction_boundary(0x93F8, 4); { uint8_t m=nes_read((0x40B1 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
    { g_cpu.S++; uint8_t _lo=g_ram[0x100+g_cpu.S]; g_cpu.S++; uint8_t _hi=g_ram[0x100+g_cpu.S]; call_by_address_tail(((uint16_t)_hi<<8|_lo)+1, -1); }
    return;
label_93FB:;
    /* $93FB: 60 */ nes_cpu_instruction_boundary(0x93FB, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_93FC:;
    /* $93FC: 3C */ nes_cpu_instruction_boundary(0x93FC, 4); (void)nes_read((0xC28E + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_93FF:;
    /* $93FF: 02 */ nes_cpu_instruction_boundary(0x93FF, 2); /* ILLEGAL $02 — skip 1 */
label_9400:;
    /* $9400: 00 */ nes_cpu_instruction_boundary(0x9400, 7); nes_brk_executed(0x9400); return;
label_9401:;
    /* $9401: 00 */ nes_cpu_instruction_boundary(0x9401, 7); nes_brk_executed(0x9401); return;
label_9402:;
    /* $9402: 00 */ nes_cpu_instruction_boundary(0x9402, 7); nes_brk_executed(0x9402); return;
label_9403:;
    /* $9403: 00 */ nes_cpu_instruction_boundary(0x9403, 7); nes_brk_executed(0x9403); return;
label_9404:;
    /* $9404: 00 */ nes_cpu_instruction_boundary(0x9404, 7); nes_brk_executed(0x9404); return;
label_9405:;
    /* $9405: 00 */ nes_cpu_instruction_boundary(0x9405, 7); nes_brk_executed(0x9405); return;
label_9406:;
    /* $9406: 00 */ nes_cpu_instruction_boundary(0x9406, 7); nes_brk_executed(0x9406); return;
label_9407:;
    /* $9407: 00 */ nes_cpu_instruction_boundary(0x9407, 7); nes_brk_executed(0x9407); return;
label_9408:;
    /* $9408: 00 */ nes_cpu_instruction_boundary(0x9408, 7); nes_brk_executed(0x9408); return;
label_9409:;
    /* $9409: 00 */ nes_cpu_instruction_boundary(0x9409, 7); nes_brk_executed(0x9409); return;
label_940A:;
    /* $940A: 00 */ nes_cpu_instruction_boundary(0x940A, 7); nes_brk_executed(0x940A); return;
label_940B:;
    /* $940B: 00 */ nes_cpu_instruction_boundary(0x940B, 7); nes_brk_executed(0x940B); return;
label_940C:;
    /* $940C: 00 */ nes_cpu_instruction_boundary(0x940C, 7); nes_brk_executed(0x940C); return;
label_940D:;
    /* $940D: 00 */ nes_cpu_instruction_boundary(0x940D, 7); nes_brk_executed(0x940D); return;
label_940E:;
    /* $940E: 00 */ nes_cpu_instruction_boundary(0x940E, 7); nes_brk_executed(0x940E); return;
label_940F:;
    /* $940F: 00 */ nes_cpu_instruction_boundary(0x940F, 7); nes_brk_executed(0x940F); return;
label_9410:;
    /* $9410: 00 */ nes_cpu_instruction_boundary(0x9410, 7); nes_brk_executed(0x9410); return;
label_9411:;
    /* $9411: 00 */ nes_cpu_instruction_boundary(0x9411, 7); nes_brk_executed(0x9411); return;
label_9412:;
    /* $9412: 00 */ nes_cpu_instruction_boundary(0x9412, 7); nes_brk_executed(0x9412); return;
label_9413:;
    /* $9413: 00 */ nes_cpu_instruction_boundary(0x9413, 7); nes_brk_executed(0x9413); return;
label_9414:;
    /* $9414: 00 */ nes_cpu_instruction_boundary(0x9414, 7); nes_brk_executed(0x9414); return;
label_9415:;
    /* $9415: 00 */ nes_cpu_instruction_boundary(0x9415, 7); nes_brk_executed(0x9415); return;
label_9416:;
    /* $9416: 00 */ nes_cpu_instruction_boundary(0x9416, 7); nes_brk_executed(0x9416); return;
label_9417:;
    /* $9417: 00 */ nes_cpu_instruction_boundary(0x9417, 7); nes_brk_executed(0x9417); return;
label_9418:;
    /* $9418: 00 */ nes_cpu_instruction_boundary(0x9418, 7); nes_brk_executed(0x9418); return;
label_9419:;
    /* $9419: 00 */ nes_cpu_instruction_boundary(0x9419, 7); nes_brk_executed(0x9419); return;
label_941A:;
    /* $941A: 00 */ nes_cpu_instruction_boundary(0x941A, 7); nes_brk_executed(0x941A); return;
label_941B:;
    /* $941B: 00 */ nes_cpu_instruction_boundary(0x941B, 7); nes_brk_executed(0x941B); return;
label_941C:;
    /* $941C: 00 */ nes_cpu_instruction_boundary(0x941C, 7); nes_brk_executed(0x941C); return;
label_941D:;
    /* $941D: 00 */ nes_cpu_instruction_boundary(0x941D, 7); nes_brk_executed(0x941D); return;
label_941E:;
    /* $941E: 00 */ nes_cpu_instruction_boundary(0x941E, 7); nes_brk_executed(0x941E); return;
label_941F:;
    /* $941F: 00 */ nes_cpu_instruction_boundary(0x941F, 7); nes_brk_executed(0x941F); return;
label_9420:;
    /* $9420: 60 */ nes_cpu_instruction_boundary(0x9420, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9421:;
    /* $9421: 71 */ nes_cpu_instruction_boundary(0x9421, 5); { uint8_t m=nes_read((nes_read16zp(0x30) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9423:;
    /* $9423: 18 */ nes_cpu_instruction_boundary(0x9423, 2); g_cpu.C = 0;
label_9424:;
    /* $9424: 0C */ nes_cpu_instruction_boundary(0x9424, 4); (void)nes_read(0x0000); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9427:;
    /* $9427: 00 */ nes_cpu_instruction_boundary(0x9427, 7); nes_brk_executed(0x9427); return;
label_9428:;
    /* $9428: 62 */ nes_cpu_instruction_boundary(0x9428, 2); /* ILLEGAL $62 — skip 1 */
label_9429:;
    /* $9429: 72 */ nes_cpu_instruction_boundary(0x9429, 2); /* ILLEGAL $72 — skip 1 */
label_942A:;
    /* $942A: 37 */ nes_cpu_instruction_boundary(0x942A, 6); { uint16_t a=(0x93 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_942C:;
    /* $942C: 81 */ nes_cpu_instruction_boundary(0x942C, 6); nes_write(nes_read16zp((0x7E + g_cpu.X) & 0xFF), g_cpu.A);
label_942E:;
    /* $942E: 34 */ nes_cpu_instruction_boundary(0x942E, 4); (void)nes_read((0x06 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9430:;
    /* $9430: 00 */ nes_cpu_instruction_boundary(0x9430, 7); nes_brk_executed(0x9430); return;
label_9431:;
    /* $9431: 01 */ nes_cpu_instruction_boundary(0x9431, 6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9433:;
    /* $9433: 08 */ nes_cpu_instruction_boundary(0x9433, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9434:;
    /* $9434: 1C */ nes_cpu_instruction_boundary(0x9434, 4); (void)nes_read((0x7030 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9437:;
    /* $9437: 60 */ nes_cpu_instruction_boundary(0x9437, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9438:;
    /* $9438: 02 */ nes_cpu_instruction_boundary(0x9438, 2); /* ILLEGAL $02 — skip 1 */
label_9439:;
    /* $9439: 02 */ nes_cpu_instruction_boundary(0x9439, 2); /* ILLEGAL $02 — skip 1 */
label_943A:;
    /* $943A: 07 */ nes_cpu_instruction_boundary(0x943A, 5); { uint16_t a=0x83; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_943C:;
    /* $943C: 91 */ nes_cpu_instruction_boundary(0x943C, 6); nes_write((nes_read16zp(0x7E) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_943E:;
    /* $943E: 74 */ nes_cpu_instruction_boundary(0x943E, 4); (void)nes_read((0x66 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9440:;
    /* $9440: 26 */ nes_cpu_instruction_boundary(0x9440, 5); { uint16_t a=0x31; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9442:;
    /* $9442: 10 */ nes_cpu_instruction_boundary(0x9442, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0x9460); return; }
label_9444:;
    /* $9444: 18 */ nes_cpu_instruction_boundary(0x9444, 2); g_cpu.C = 0;
label_9445:;
    /* $9445: 0C */ nes_cpu_instruction_boundary(0x9445, 4); (void)nes_read(0x0000); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9448:;
    /* $9448: C6 */ nes_cpu_instruction_boundary(0x9448, 5); { uint16_t a=0xC0; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_944A:;
    /* $944A: 60 */ nes_cpu_instruction_boundary(0x944A, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_944B:;
    /* $944B: 60 */ nes_cpu_instruction_boundary(0x944B, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_944C:;
    /* $944C: 20 */ nes_cpu_instruction_boundary(0x944C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x94; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x4E; g_cpu.S--; if (!nes_dispatch_call(0x1830, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x944C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_944F:;
    /* $944F: 08 */ nes_cpu_instruction_boundary(0x944F, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9450:;
    /* $9450: 5E */ nes_cpu_instruction_boundary(0x9450, 7); { uint16_t a=(0x202C + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_9453:;
    /* $9453: 3C */ nes_cpu_instruction_boundary(0x9453, 4); (void)nes_read((0x1824 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9456:;
    /* $9456: 00 */ nes_cpu_instruction_boundary(0x9456, 7); nes_brk_executed(0x9456); return;
label_9457:;
    /* $9457: 00 */ nes_cpu_instruction_boundary(0x9457, 7); nes_brk_executed(0x9457); return;
label_9458:;
    /* $9458: 87 */ nes_cpu_instruction_boundary(0x9458, 3); nes_write(0xC3, g_cpu.A & g_cpu.X); /* SAX */
label_945A:;
    /* $945A: 42 */ nes_cpu_instruction_boundary(0x945A, 2); /* ILLEGAL $42 — skip 1 */
label_945B:;
    /* $945B: 42 */ nes_cpu_instruction_boundary(0x945B, 2); /* ILLEGAL $42 — skip 1 */
label_945C:;
    /* $945C: 42 */ nes_cpu_instruction_boundary(0x945C, 2); /* ILLEGAL $42 — skip 1 */
label_945D:;
    /* $945D: 66 */ nes_cpu_instruction_boundary(0x945D, 5); { uint16_t a=0x24; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_945F:;
    /* $945F: 24 */ nes_cpu_instruction_boundary(0x945F, 3); { uint8_t m=nes_read(0x00); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_9461:;
    /* $9461: 00 */ nes_cpu_instruction_boundary(0x9461, 7); nes_brk_executed(0x9461); return;
label_9462:;
    /* $9462: 00 */ nes_cpu_instruction_boundary(0x9462, 7); nes_brk_executed(0x9462); return;
label_9463:;
    /* $9463: 00 */ nes_cpu_instruction_boundary(0x9463, 7); nes_brk_executed(0x9463); return;
label_9464:;
    /* $9464: 0B */ nes_cpu_instruction_boundary(0x9464, 2); g_cpu.A &= 0x27; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_9466:;
    /* $9466: 73 */ nes_cpu_instruction_boundary(0x9466, 8); { uint16_t a=(nes_read16zp(0xDF) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9468:;
    /* $9468: 0A */ nes_cpu_instruction_boundary(0x9468, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9469:;
    /* $9469: 0F */ nes_cpu_instruction_boundary(0x9469, 6); { uint16_t a=0x341F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_946C:;
    /* $946C: 0B */ nes_cpu_instruction_boundary(0x946C, 2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_946E:;
    /* $946E: 11 */ nes_cpu_instruction_boundary(0x946E, 5); g_cpu.A |= nes_read((nes_read16zp(0x18) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9470:;
    /* $9470: 00 */ nes_cpu_instruction_boundary(0x9470, 7); nes_brk_executed(0x9470); return;
label_9471:;
    /* $9471: 00 */ nes_cpu_instruction_boundary(0x9471, 7); nes_brk_executed(0x9471); return;
label_9472:;
    /* $9472: 00 */ nes_cpu_instruction_boundary(0x9472, 7); nes_brk_executed(0x9472); return;
label_9473:;
    /* $9473: 00 */ nes_cpu_instruction_boundary(0x9473, 7); nes_brk_executed(0x9473); return;
label_9474:;
    /* $9474: 00 */ nes_cpu_instruction_boundary(0x9474, 7); nes_brk_executed(0x9474); return;
label_9475:;
    /* $9475: 8C */ nes_cpu_instruction_boundary(0x9475, 4); nes_write(0xE0F2, g_cpu.Y);
label_9478:;
    /* $9478: 40 */ nes_cpu_instruction_boundary(0x9478, 6); /* RTI */ g_rti_source = 0x9478; g_rti_bank = 1; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9479:;
    /* $9479: E8 */ nes_cpu_instruction_boundary(0x9479, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_947A:;
    /* $947A: FA */ nes_cpu_instruction_boundary(0x947A, 2); /* NOP */
label_947B:;
    /* $947B: FF */ nes_cpu_instruction_boundary(0x947B, 7); { uint16_t a=(0x8060 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_947E:;
    /* $947E: 30 */ nes_cpu_instruction_boundary(0x947E, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_9480; }
label_9480:;
    /* $9480: 00 */ nes_cpu_instruction_boundary(0x9480, 7); nes_brk_executed(0x9480); return;
label_9481:;
    /* $9481: 00 */ nes_cpu_instruction_boundary(0x9481, 7); nes_brk_executed(0x9481); return;
label_9482:;
    /* $9482: 1C */ nes_cpu_instruction_boundary(0x9482, 4); (void)nes_read((0x3E3E + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9485:;
    /* $9485: 3E */ nes_cpu_instruction_boundary(0x9485, 7); { uint16_t a=(0x001C + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9488:;
    /* $9488: 00 */ nes_cpu_instruction_boundary(0x9488, 7); nes_brk_executed(0x9488); return;
label_9489:;
    /* $9489: 1C */ nes_cpu_instruction_boundary(0x9489, 4); (void)nes_read((0x6926 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_948C:;
    /* $948C: 55 */ nes_cpu_instruction_boundary(0x948C, 4); g_cpu.A ^= nes_read((0x53 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_948E:;
    /* $948E: 32 */ nes_cpu_instruction_boundary(0x948E, 2); /* ILLEGAL $32 — skip 1 */
label_948F:;
    /* $948F: 1C */ nes_cpu_instruction_boundary(0x948F, 4); (void)nes_read((0x0000 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9492:;
    /* $9492: 00 */ nes_cpu_instruction_boundary(0x9492, 7); nes_brk_executed(0x9492); return;
label_9493:;
    /* $9493: 00 */ nes_cpu_instruction_boundary(0x9493, 7); nes_brk_executed(0x9493); return;
label_9494:;
    /* $9494: 00 */ nes_cpu_instruction_boundary(0x9494, 7); nes_brk_executed(0x9494); return;
label_9495:;
    /* $9495: 00 */ nes_cpu_instruction_boundary(0x9495, 7); nes_brk_executed(0x9495); return;
label_9496:;
    /* $9496: 00 */ nes_cpu_instruction_boundary(0x9496, 7); nes_brk_executed(0x9496); return;
label_9497:;
    /* $9497: 00 */ nes_cpu_instruction_boundary(0x9497, 7); nes_brk_executed(0x9497); return;
label_9498:;
    /* $9498: 00 */ nes_cpu_instruction_boundary(0x9498, 7); nes_brk_executed(0x9498); return;
label_9499:;
    /* $9499: 00 */ nes_cpu_instruction_boundary(0x9499, 7); nes_brk_executed(0x9499); return;
label_949A:;
    /* $949A: 00 */ nes_cpu_instruction_boundary(0x949A, 7); nes_brk_executed(0x949A); return;
label_949B:;
    /* $949B: 00 */ nes_cpu_instruction_boundary(0x949B, 7); nes_brk_executed(0x949B); return;
label_949C:;
    /* $949C: 00 */ nes_cpu_instruction_boundary(0x949C, 7); nes_brk_executed(0x949C); return;
label_949D:;
    /* $949D: 00 */ nes_cpu_instruction_boundary(0x949D, 7); nes_brk_executed(0x949D); return;
label_949E:;
    /* $949E: 00 */ nes_cpu_instruction_boundary(0x949E, 7); nes_brk_executed(0x949E); return;
label_949F:;
    /* $949F: 00 */ nes_cpu_instruction_boundary(0x949F, 7); nes_brk_executed(0x949F); return;
label_94A0:;
    /* $94A0: 00 */ nes_cpu_instruction_boundary(0x94A0, 7); nes_brk_executed(0x94A0); return;
label_94A1:;
    /* $94A1: 00 */ nes_cpu_instruction_boundary(0x94A1, 7); nes_brk_executed(0x94A1); return;
label_94A2:;
    /* $94A2: 00 */ nes_cpu_instruction_boundary(0x94A2, 7); nes_brk_executed(0x94A2); return;
label_94A3:;
    /* $94A3: 00 */ nes_cpu_instruction_boundary(0x94A3, 7); nes_brk_executed(0x94A3); return;
label_94A4:;
    /* $94A4: 00 */ nes_cpu_instruction_boundary(0x94A4, 7); nes_brk_executed(0x94A4); return;
label_94A5:;
    /* $94A5: 00 */ nes_cpu_instruction_boundary(0x94A5, 7); nes_brk_executed(0x94A5); return;
label_94A6:;
    /* $94A6: 00 */ nes_cpu_instruction_boundary(0x94A6, 7); nes_brk_executed(0x94A6); return;
label_94A7:;
    /* $94A7: 00 */ nes_cpu_instruction_boundary(0x94A7, 7); nes_brk_executed(0x94A7); return;
label_94A8:;
    /* $94A8: 00 */ nes_cpu_instruction_boundary(0x94A8, 7); nes_brk_executed(0x94A8); return;
label_94A9:;
    /* $94A9: 00 */ nes_cpu_instruction_boundary(0x94A9, 7); nes_brk_executed(0x94A9); return;
label_94AA:;
    /* $94AA: 00 */ nes_cpu_instruction_boundary(0x94AA, 7); nes_brk_executed(0x94AA); return;
label_94AB:;
    /* $94AB: 00 */ nes_cpu_instruction_boundary(0x94AB, 7); nes_brk_executed(0x94AB); return;
label_94AC:;
    /* $94AC: 00 */ nes_cpu_instruction_boundary(0x94AC, 7); nes_brk_executed(0x94AC); return;
label_94AD:;
    /* $94AD: 00 */ nes_cpu_instruction_boundary(0x94AD, 7); nes_brk_executed(0x94AD); return;
label_94AE:;
    /* $94AE: 00 */ nes_cpu_instruction_boundary(0x94AE, 7); nes_brk_executed(0x94AE); return;
label_94AF:;
    /* $94AF: 00 */ nes_cpu_instruction_boundary(0x94AF, 7); nes_brk_executed(0x94AF); return;
label_94B0:;
    /* $94B0: 00 */ nes_cpu_instruction_boundary(0x94B0, 7); nes_brk_executed(0x94B0); return;
label_94B1:;
    /* $94B1: 00 */ nes_cpu_instruction_boundary(0x94B1, 7); nes_brk_executed(0x94B1); return;
label_94B2:;
    /* $94B2: 00 */ nes_cpu_instruction_boundary(0x94B2, 7); nes_brk_executed(0x94B2); return;
label_94B3:;
    /* $94B3: 00 */ nes_cpu_instruction_boundary(0x94B3, 7); nes_brk_executed(0x94B3); return;
label_94B4:;
    /* $94B4: 00 */ nes_cpu_instruction_boundary(0x94B4, 7); nes_brk_executed(0x94B4); return;
label_94B5:;
    /* $94B5: 00 */ nes_cpu_instruction_boundary(0x94B5, 7); nes_brk_executed(0x94B5); return;
label_94B6:;
    /* $94B6: 00 */ nes_cpu_instruction_boundary(0x94B6, 7); nes_brk_executed(0x94B6); return;
label_94B7:;
    /* $94B7: 00 */ nes_cpu_instruction_boundary(0x94B7, 7); nes_brk_executed(0x94B7); return;
label_94B8:;
    /* $94B8: 00 */ nes_cpu_instruction_boundary(0x94B8, 7); nes_brk_executed(0x94B8); return;
label_94B9:;
    /* $94B9: 00 */ nes_cpu_instruction_boundary(0x94B9, 7); nes_brk_executed(0x94B9); return;
label_94BA:;
    /* $94BA: 00 */ nes_cpu_instruction_boundary(0x94BA, 7); nes_brk_executed(0x94BA); return;
label_94BB:;
    /* $94BB: 00 */ nes_cpu_instruction_boundary(0x94BB, 7); nes_brk_executed(0x94BB); return;
label_94BC:;
    /* $94BC: 00 */ nes_cpu_instruction_boundary(0x94BC, 7); nes_brk_executed(0x94BC); return;
label_94BD:;
    /* $94BD: 00 */ nes_cpu_instruction_boundary(0x94BD, 7); nes_brk_executed(0x94BD); return;
label_94BE:;
    /* $94BE: 00 */ nes_cpu_instruction_boundary(0x94BE, 7); nes_brk_executed(0x94BE); return;
label_94BF:;
    /* $94BF: 00 */ nes_cpu_instruction_boundary(0x94BF, 7); nes_brk_executed(0x94BF); return;
label_94C0:;
    /* $94C0: 00 */ nes_cpu_instruction_boundary(0x94C0, 7); nes_brk_executed(0x94C0); return;
label_94C1:;
    /* $94C1: 00 */ nes_cpu_instruction_boundary(0x94C1, 7); nes_brk_executed(0x94C1); return;
label_94C2:;
    /* $94C2: 00 */ nes_cpu_instruction_boundary(0x94C2, 7); nes_brk_executed(0x94C2); return;
label_94C3:;
    /* $94C3: 00 */ nes_cpu_instruction_boundary(0x94C3, 7); nes_brk_executed(0x94C3); return;
label_94C4:;
    /* $94C4: 00 */ nes_cpu_instruction_boundary(0x94C4, 7); nes_brk_executed(0x94C4); return;
label_94C5:;
    /* $94C5: 00 */ nes_cpu_instruction_boundary(0x94C5, 7); nes_brk_executed(0x94C5); return;
label_94C6:;
    /* $94C6: 00 */ nes_cpu_instruction_boundary(0x94C6, 7); nes_brk_executed(0x94C6); return;
label_94C7:;
    /* $94C7: 00 */ nes_cpu_instruction_boundary(0x94C7, 7); nes_brk_executed(0x94C7); return;
label_94C8:;
    /* $94C8: 00 */ nes_cpu_instruction_boundary(0x94C8, 7); nes_brk_executed(0x94C8); return;
label_94C9:;
    /* $94C9: 00 */ nes_cpu_instruction_boundary(0x94C9, 7); nes_brk_executed(0x94C9); return;
label_94CA:;
    /* $94CA: 00 */ nes_cpu_instruction_boundary(0x94CA, 7); nes_brk_executed(0x94CA); return;
label_94CB:;
    /* $94CB: 00 */ nes_cpu_instruction_boundary(0x94CB, 7); nes_brk_executed(0x94CB); return;
label_94CC:;
    /* $94CC: 00 */ nes_cpu_instruction_boundary(0x94CC, 7); nes_brk_executed(0x94CC); return;
label_94CD:;
    /* $94CD: 00 */ nes_cpu_instruction_boundary(0x94CD, 7); nes_brk_executed(0x94CD); return;
label_94CE:;
    /* $94CE: 00 */ nes_cpu_instruction_boundary(0x94CE, 7); nes_brk_executed(0x94CE); return;
label_94CF:;
    /* $94CF: 00 */ nes_cpu_instruction_boundary(0x94CF, 7); nes_brk_executed(0x94CF); return;
label_94D0:;
    /* $94D0: 00 */ nes_cpu_instruction_boundary(0x94D0, 7); nes_brk_executed(0x94D0); return;
label_94D1:;
    /* $94D1: 00 */ nes_cpu_instruction_boundary(0x94D1, 7); nes_brk_executed(0x94D1); return;
label_94D2:;
    /* $94D2: 00 */ nes_cpu_instruction_boundary(0x94D2, 7); nes_brk_executed(0x94D2); return;
label_94D3:;
    /* $94D3: 00 */ nes_cpu_instruction_boundary(0x94D3, 7); nes_brk_executed(0x94D3); return;
label_94D4:;
    /* $94D4: 00 */ nes_cpu_instruction_boundary(0x94D4, 7); nes_brk_executed(0x94D4); return;
label_94D5:;
    /* $94D5: 00 */ nes_cpu_instruction_boundary(0x94D5, 7); nes_brk_executed(0x94D5); return;
label_94D6:;
    /* $94D6: 00 */ nes_cpu_instruction_boundary(0x94D6, 7); nes_brk_executed(0x94D6); return;
label_94D7:;
    /* $94D7: 00 */ nes_cpu_instruction_boundary(0x94D7, 7); nes_brk_executed(0x94D7); return;
label_94D8:;
    /* $94D8: 00 */ nes_cpu_instruction_boundary(0x94D8, 7); nes_brk_executed(0x94D8); return;
label_94D9:;
    /* $94D9: 00 */ nes_cpu_instruction_boundary(0x94D9, 7); nes_brk_executed(0x94D9); return;
label_94DA:;
    /* $94DA: 00 */ nes_cpu_instruction_boundary(0x94DA, 7); nes_brk_executed(0x94DA); return;
label_94DB:;
    /* $94DB: 00 */ nes_cpu_instruction_boundary(0x94DB, 7); nes_brk_executed(0x94DB); return;
label_94DC:;
    /* $94DC: 00 */ nes_cpu_instruction_boundary(0x94DC, 7); nes_brk_executed(0x94DC); return;
label_94DD:;
    /* $94DD: 00 */ nes_cpu_instruction_boundary(0x94DD, 7); nes_brk_executed(0x94DD); return;
label_94DE:;
    /* $94DE: 00 */ nes_cpu_instruction_boundary(0x94DE, 7); nes_brk_executed(0x94DE); return;
label_94DF:;
    /* $94DF: 00 */ nes_cpu_instruction_boundary(0x94DF, 7); nes_brk_executed(0x94DF); return;
label_94E0:;
    /* $94E0: 00 */ nes_cpu_instruction_boundary(0x94E0, 7); nes_brk_executed(0x94E0); return;
label_94E1:;
    /* $94E1: 00 */ nes_cpu_instruction_boundary(0x94E1, 7); nes_brk_executed(0x94E1); return;
label_94E2:;
    /* $94E2: 00 */ nes_cpu_instruction_boundary(0x94E2, 7); nes_brk_executed(0x94E2); return;
label_94E3:;
    /* $94E3: 00 */ nes_cpu_instruction_boundary(0x94E3, 7); nes_brk_executed(0x94E3); return;
label_94E4:;
    /* $94E4: 00 */ nes_cpu_instruction_boundary(0x94E4, 7); nes_brk_executed(0x94E4); return;
label_94E5:;
    /* $94E5: 00 */ nes_cpu_instruction_boundary(0x94E5, 7); nes_brk_executed(0x94E5); return;
label_94E6:;
    /* $94E6: 00 */ nes_cpu_instruction_boundary(0x94E6, 7); nes_brk_executed(0x94E6); return;
label_94E7:;
    /* $94E7: 00 */ nes_cpu_instruction_boundary(0x94E7, 7); nes_brk_executed(0x94E7); return;
label_94E8:;
    /* $94E8: 00 */ nes_cpu_instruction_boundary(0x94E8, 7); nes_brk_executed(0x94E8); return;
label_94E9:;
    /* $94E9: 00 */ nes_cpu_instruction_boundary(0x94E9, 7); nes_brk_executed(0x94E9); return;
label_94EA:;
    /* $94EA: 00 */ nes_cpu_instruction_boundary(0x94EA, 7); nes_brk_executed(0x94EA); return;
label_94EB:;
    /* $94EB: 00 */ nes_cpu_instruction_boundary(0x94EB, 7); nes_brk_executed(0x94EB); return;
label_94EC:;
    /* $94EC: 00 */ nes_cpu_instruction_boundary(0x94EC, 7); nes_brk_executed(0x94EC); return;
label_94ED:;
    /* $94ED: 00 */ nes_cpu_instruction_boundary(0x94ED, 7); nes_brk_executed(0x94ED); return;
label_94EE:;
    /* $94EE: 00 */ nes_cpu_instruction_boundary(0x94EE, 7); nes_brk_executed(0x94EE); return;
label_94EF:;
    /* $94EF: 00 */ nes_cpu_instruction_boundary(0x94EF, 7); nes_brk_executed(0x94EF); return;
label_94F0:;
    /* $94F0: 00 */ nes_cpu_instruction_boundary(0x94F0, 7); nes_brk_executed(0x94F0); return;
label_94F1:;
    /* $94F1: 00 */ nes_cpu_instruction_boundary(0x94F1, 7); nes_brk_executed(0x94F1); return;
label_94F2:;
    /* $94F2: 00 */ nes_cpu_instruction_boundary(0x94F2, 7); nes_brk_executed(0x94F2); return;
label_94F3:;
    /* $94F3: 00 */ nes_cpu_instruction_boundary(0x94F3, 7); nes_brk_executed(0x94F3); return;
label_94F4:;
    /* $94F4: 00 */ nes_cpu_instruction_boundary(0x94F4, 7); nes_brk_executed(0x94F4); return;
label_94F5:;
    /* $94F5: 00 */ nes_cpu_instruction_boundary(0x94F5, 7); nes_brk_executed(0x94F5); return;
label_94F6:;
    /* $94F6: 00 */ nes_cpu_instruction_boundary(0x94F6, 7); nes_brk_executed(0x94F6); return;
label_94F7:;
    /* $94F7: 00 */ nes_cpu_instruction_boundary(0x94F7, 7); nes_brk_executed(0x94F7); return;
label_94F8:;
    /* $94F8: 00 */ nes_cpu_instruction_boundary(0x94F8, 7); nes_brk_executed(0x94F8); return;
label_94F9:;
    /* $94F9: 00 */ nes_cpu_instruction_boundary(0x94F9, 7); nes_brk_executed(0x94F9); return;
label_94FA:;
    /* $94FA: 00 */ nes_cpu_instruction_boundary(0x94FA, 7); nes_brk_executed(0x94FA); return;
label_94FB:;
    /* $94FB: 00 */ nes_cpu_instruction_boundary(0x94FB, 7); nes_brk_executed(0x94FB); return;
label_94FC:;
    /* $94FC: 00 */ nes_cpu_instruction_boundary(0x94FC, 7); nes_brk_executed(0x94FC); return;
label_94FD:;
    /* $94FD: 00 */ nes_cpu_instruction_boundary(0x94FD, 7); nes_brk_executed(0x94FD); return;
label_94FE:;
    /* $94FE: 00 */ nes_cpu_instruction_boundary(0x94FE, 7); nes_brk_executed(0x94FE); return;
label_94FF:;
    /* $94FF: 00 */ nes_cpu_instruction_boundary(0x94FF, 7); nes_brk_executed(0x94FF); return;
label_9500:;
    /* $9500: 1D */ nes_cpu_instruction_boundary(0x9500, 4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9503:;
    /* $9503: 1D */ nes_cpu_instruction_boundary(0x9503, 4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9506:;
    /* $9506: 1D */ nes_cpu_instruction_boundary(0x9506, 4); g_cpu.A |= nes_read((0x0F1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9509:;
    /* $9509: 0F */ nes_cpu_instruction_boundary(0x9509, 6); { uint16_t a=0x0F0F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_950C:;
    /* $950C: 0F */ nes_cpu_instruction_boundary(0x950C, 6); { uint16_t a=0x0F0F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_950F:;
    /* $950F: 0F */ nes_cpu_instruction_boundary(0x950F, 6); { uint16_t a=0xF8F8; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9512:;
    /* $9512: F8 */ nes_cpu_instruction_boundary(0x9512, 2); g_cpu.D = 1;
label_9513:;
    /* $9513: F8 */ nes_cpu_instruction_boundary(0x9513, 2); g_cpu.D = 1;
label_9514:;
    /* $9514: F8 */ nes_cpu_instruction_boundary(0x9514, 2); g_cpu.D = 1;
label_9515:;
    /* $9515: F8 */ nes_cpu_instruction_boundary(0x9515, 2); g_cpu.D = 1;
label_9516:;
    /* $9516: F8 */ nes_cpu_instruction_boundary(0x9516, 2); g_cpu.D = 1;
label_9517:;
    /* $9517: F8 */ nes_cpu_instruction_boundary(0x9517, 2); g_cpu.D = 1;
label_9518:;
    /* $9518: A0 */ nes_cpu_instruction_boundary(0x9518, 2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_951A:;
    /* $951A: A0 */ nes_cpu_instruction_boundary(0x951A, 2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_951C:;
    /* $951C: A0 */ nes_cpu_instruction_boundary(0x951C, 2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_951E:;
    /* $951E: A0 */ nes_cpu_instruction_boundary(0x951E, 2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_9520:;
    /* $9520: FF */ nes_cpu_instruction_boundary(0x9520, 7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9523:;
    /* $9523: FF */ nes_cpu_instruction_boundary(0x9523, 7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9526:;
    /* $9526: FF */ nes_cpu_instruction_boundary(0x9526, 7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9529:;
    /* $9529: FF */ nes_cpu_instruction_boundary(0x9529, 7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_952C:;
    /* $952C: FF */ nes_cpu_instruction_boundary(0x952C, 7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_952F:;
    /* $952F: FF */ nes_cpu_instruction_boundary(0x952F, 7); { uint16_t a=(0x0000 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9532:;
    /* $9532: 00 */ nes_cpu_instruction_boundary(0x9532, 7); nes_brk_executed(0x9532); return;
label_9533:;
    /* $9533: 00 */ nes_cpu_instruction_boundary(0x9533, 7); nes_brk_executed(0x9533); return;
label_9534:;
    /* $9534: 00 */ nes_cpu_instruction_boundary(0x9534, 7); nes_brk_executed(0x9534); return;
label_9535:;
    /* $9535: 00 */ nes_cpu_instruction_boundary(0x9535, 7); nes_brk_executed(0x9535); return;
label_9536:;
    /* $9536: 00 */ nes_cpu_instruction_boundary(0x9536, 7); nes_brk_executed(0x9536); return;
label_9537:;
    /* $9537: 00 */ nes_cpu_instruction_boundary(0x9537, 7); nes_brk_executed(0x9537); return;
label_9538:;
    /* $9538: FF */ nes_cpu_instruction_boundary(0x9538, 7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_953B:;
    /* $953B: FF */ nes_cpu_instruction_boundary(0x953B, 7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_953E:;
    /* $953E: FF */ nes_cpu_instruction_boundary(0x953E, 7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9541:;
    /* $9541: FF */ nes_cpu_instruction_boundary(0x9541, 7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9544:;
    /* $9544: FF */ nes_cpu_instruction_boundary(0x9544, 7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9547:;
    /* $9547: FF */ nes_cpu_instruction_boundary(0x9547, 7); { uint16_t a=(0x0000 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_954A:;
    /* $954A: 00 */ nes_cpu_instruction_boundary(0x954A, 7); nes_brk_executed(0x954A); return;
label_954B:;
    /* $954B: 00 */ nes_cpu_instruction_boundary(0x954B, 7); nes_brk_executed(0x954B); return;
label_954C:;
    /* $954C: 00 */ nes_cpu_instruction_boundary(0x954C, 7); nes_brk_executed(0x954C); return;
label_954D:;
    /* $954D: 00 */ nes_cpu_instruction_boundary(0x954D, 7); nes_brk_executed(0x954D); return;
label_954E:;
    /* $954E: 00 */ nes_cpu_instruction_boundary(0x954E, 7); nes_brk_executed(0x954E); return;
label_954F:;
    /* $954F: 00 */ nes_cpu_instruction_boundary(0x954F, 7); nes_brk_executed(0x954F); return;
label_9550:;
    /* $9550: 00 */ nes_cpu_instruction_boundary(0x9550, 7); nes_brk_executed(0x9550); return;
label_9551:;
    /* $9551: 00 */ nes_cpu_instruction_boundary(0x9551, 7); nes_brk_executed(0x9551); return;
label_9552:;
    /* $9552: 00 */ nes_cpu_instruction_boundary(0x9552, 7); nes_brk_executed(0x9552); return;
label_9553:;
    /* $9553: 00 */ nes_cpu_instruction_boundary(0x9553, 7); nes_brk_executed(0x9553); return;
label_9554:;
    /* $9554: 00 */ nes_cpu_instruction_boundary(0x9554, 7); nes_brk_executed(0x9554); return;
label_9555:;
    /* $9555: 00 */ nes_cpu_instruction_boundary(0x9555, 7); nes_brk_executed(0x9555); return;
label_9556:;
    /* $9556: 00 */ nes_cpu_instruction_boundary(0x9556, 7); nes_brk_executed(0x9556); return;
label_9557:;
    /* $9557: 00 */ nes_cpu_instruction_boundary(0x9557, 7); nes_brk_executed(0x9557); return;
label_9558:;
    /* $9558: 00 */ nes_cpu_instruction_boundary(0x9558, 7); nes_brk_executed(0x9558); return;
label_9559:;
    /* $9559: 00 */ nes_cpu_instruction_boundary(0x9559, 7); nes_brk_executed(0x9559); return;
label_955A:;
    /* $955A: 00 */ nes_cpu_instruction_boundary(0x955A, 7); nes_brk_executed(0x955A); return;
label_955B:;
    /* $955B: 00 */ nes_cpu_instruction_boundary(0x955B, 7); nes_brk_executed(0x955B); return;
label_955C:;
    /* $955C: 00 */ nes_cpu_instruction_boundary(0x955C, 7); nes_brk_executed(0x955C); return;
label_955D:;
    /* $955D: 00 */ nes_cpu_instruction_boundary(0x955D, 7); nes_brk_executed(0x955D); return;
label_955E:;
    /* $955E: 00 */ nes_cpu_instruction_boundary(0x955E, 7); nes_brk_executed(0x955E); return;
label_955F:;
    /* $955F: 00 */ nes_cpu_instruction_boundary(0x955F, 7); nes_brk_executed(0x955F); return;
label_9560:; /* PalettePtrTable */
    /* $9560: 71 */ nes_cpu_instruction_boundary(0x9560, 5); { uint8_t m=nes_read((nes_read16zp(0xA2) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9562:;
    /* $9562: 95 */ nes_cpu_instruction_boundary(0x9562, 4); nes_write((0xA2 + g_cpu.X) & 0xFF, g_cpu.A);
label_9564:;
    /* $9564: A1 */ nes_cpu_instruction_boundary(0x9564, 6); g_cpu.A = nes_read(nes_read16zp((0xA2 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9566:;
    /* $9566: 9B */ nes_cpu_instruction_boundary(0x9566, 5); /* ILLEGAL $9B — skip 3 */
label_9569:;
    /* $9569: A2 */ nes_cpu_instruction_boundary(0x9569, 2); g_cpu.X = 0xAD; FLAG_NZ(g_cpu.X);
label_956B:;
    /* $956B: A2 */ nes_cpu_instruction_boundary(0x956B, 2); g_cpu.X = 0xD0; FLAG_NZ(g_cpu.X);
label_956D:;
    /* $956D: A2 */ nes_cpu_instruction_boundary(0x956D, 2); g_cpu.X = 0xD0; FLAG_NZ(g_cpu.X);
label_956F:;
    /* $956F: A2 */ nes_cpu_instruction_boundary(0x956F, 2); g_cpu.X = 0xD0; FLAG_NZ(g_cpu.X);
label_9571:;
    /* $9571: A2 */ nes_cpu_instruction_boundary(0x9571, 2); g_cpu.X = 0xD0; FLAG_NZ(g_cpu.X);
label_9573:;
    /* $9573: A2 */ nes_cpu_instruction_boundary(0x9573, 2); g_cpu.X = 0xD0; FLAG_NZ(g_cpu.X);
label_9575:;
    /* $9575: A2 */ nes_cpu_instruction_boundary(0x9575, 2); g_cpu.X = 0xD0; FLAG_NZ(g_cpu.X);
label_9577:;
    /* $9577: A2 */ nes_cpu_instruction_boundary(0x9577, 2); g_cpu.X = 0xD0; FLAG_NZ(g_cpu.X);
label_9579:;
    /* $9579: A2 */ nes_cpu_instruction_boundary(0x9579, 2); g_cpu.X = 0xD0; FLAG_NZ(g_cpu.X);
label_957B:;
    /* $957B: A2 */ nes_cpu_instruction_boundary(0x957B, 2); g_cpu.X = 0xD0; FLAG_NZ(g_cpu.X);
label_957D:;
    /* $957D: A2 */ nes_cpu_instruction_boundary(0x957D, 2); g_cpu.X = 0xD0; FLAG_NZ(g_cpu.X);
label_957F:;
    /* $957F: A2 */ nes_cpu_instruction_boundary(0x957F, 2); g_cpu.X = 0xD0; FLAG_NZ(g_cpu.X);
label_9581:;
    /* $9581: A2 */ nes_cpu_instruction_boundary(0x9581, 2); g_cpu.X = 0xD0; FLAG_NZ(g_cpu.X);
label_9583:;
    /* $9583: A2 */ nes_cpu_instruction_boundary(0x9583, 2); g_cpu.X = 0xD0; FLAG_NZ(g_cpu.X);
label_9585:;
    /* $9585: A2 */ nes_cpu_instruction_boundary(0x9585, 2); g_cpu.X = 0xD0; FLAG_NZ(g_cpu.X);
label_9587:;
    /* $9587: A2 */ nes_cpu_instruction_boundary(0x9587, 2); g_cpu.X = 0xD7; FLAG_NZ(g_cpu.X);
label_9589:;
    /* $9589: A2 */ nes_cpu_instruction_boundary(0x9589, 2); g_cpu.X = 0xDE; FLAG_NZ(g_cpu.X);
label_958B:;
    /* $958B: A2 */ nes_cpu_instruction_boundary(0x958B, 2); g_cpu.X = 0xE5; FLAG_NZ(g_cpu.X);
label_958D:;
    /* $958D: A2 */ nes_cpu_instruction_boundary(0x958D, 2); g_cpu.X = 0xEC; FLAG_NZ(g_cpu.X);
label_958F:;
    /* $958F: A2 */ nes_cpu_instruction_boundary(0x958F, 2); g_cpu.X = 0xF4; FLAG_NZ(g_cpu.X);
label_9591:;
    /* $9591: A2 */ nes_cpu_instruction_boundary(0x9591, 2); g_cpu.X = 0xFC; FLAG_NZ(g_cpu.X);
label_9593:;
    /* $9593: A2 */ nes_cpu_instruction_boundary(0x9593, 2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_9595:;
    /* $9595: A3 */ nes_cpu_instruction_boundary(0x9595, 6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x0C + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9597:;
    /* $9597: A3 */ nes_cpu_instruction_boundary(0x9597, 6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0xD6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9599:;
    /* $9599: A3 */ nes_cpu_instruction_boundary(0x9599, 6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x14 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_959B:;
    /* $959B: A3 */ nes_cpu_instruction_boundary(0x959B, 6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x72 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_959D:;
    /* $959D: A3 */ nes_cpu_instruction_boundary(0x959D, 6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0xF0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_959F:;
    /* $959F: AE */ nes_cpu_instruction_boundary(0x959F, 4); g_cpu.X = nes_read(0x9DE0); FLAG_NZ(g_cpu.X);
label_95A2:; /* AreaPointers_ROM_EnFramePtrTable2 */
    /* $95A2: E0 */ nes_cpu_instruction_boundary(0x95A2, 2); { int r=g_cpu.X-0x9E; g_cpu.C=(g_cpu.X>=0x9E)?1:0; FLAG_NZ(r&0xFF); }
label_95A4:; /* AreaPointers_ROM_EnPlacePtrTable */
    /* $95A4: 0E */ nes_cpu_instruction_boundary(0x95A4, 6); { uint16_t a=0x6A9F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_95A7:;
    /* $95A7: 9D */ nes_cpu_instruction_boundary(0x95A7, 5); nes_write((0xEA60 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_95AA:;
    /* $95AA: EA */ nes_cpu_instruction_boundary(0x95AA, 2); /* NOP */
label_95AB:;
    /* $95AB: 60 */ nes_cpu_instruction_boundary(0x95AB, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_95AC:;
    /* $95AC: EA */ nes_cpu_instruction_boundary(0x95AC, 2); /* NOP */
label_95AD:;
    /* $95AD: EA */ nes_cpu_instruction_boundary(0x95AD, 2); /* NOP */
label_95AE:;
    /* $95AE: 60 */ nes_cpu_instruction_boundary(0x95AE, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_95AF:;
    /* $95AF: EA */ nes_cpu_instruction_boundary(0x95AF, 2); /* NOP */
label_95B0:;
    /* $95B0: EA */ nes_cpu_instruction_boundary(0x95B0, 2); /* NOP */
label_95B1:;
    /* $95B1: 60 */ nes_cpu_instruction_boundary(0x95B1, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_95B2:;
    /* $95B2: EA */ nes_cpu_instruction_boundary(0x95B2, 2); /* NOP */
label_95B3:;
    /* $95B3: EA */ nes_cpu_instruction_boundary(0x95B3, 2); /* NOP */
label_95B4:;
    /* $95B4: 60 */ nes_cpu_instruction_boundary(0x95B4, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_95B5:;
    /* $95B5: EA */ nes_cpu_instruction_boundary(0x95B5, 2); /* NOP */
label_95B6:;
    /* $95B6: EA */ nes_cpu_instruction_boundary(0x95B6, 2); /* NOP */
label_95B7:;
    /* $95B7: 60 */ nes_cpu_instruction_boundary(0x95B7, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_95B8:;
    /* $95B8: EA */ nes_cpu_instruction_boundary(0x95B8, 2); /* NOP */
label_95B9:;
    /* $95B9: EA */ nes_cpu_instruction_boundary(0x95B9, 2); /* NOP */
label_95BA:;
    /* $95BA: 60 */ nes_cpu_instruction_boundary(0x95BA, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_95BB:;
    /* $95BB: EA */ nes_cpu_instruction_boundary(0x95BB, 2); /* NOP */
label_95BC:;
    /* $95BC: EA */ nes_cpu_instruction_boundary(0x95BC, 2); /* NOP */
label_95BD:;
    /* $95BD: 60 */ nes_cpu_instruction_boundary(0x95BD, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_95BE:;
    /* $95BE: EA */ nes_cpu_instruction_boundary(0x95BE, 2); /* NOP */
label_95BF:;
    /* $95BF: EA */ nes_cpu_instruction_boundary(0x95BF, 2); /* NOP */
label_95C0:;
    /* $95C0: 60 */ nes_cpu_instruction_boundary(0x95C0, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_95C1:;
    /* $95C1: EA */ nes_cpu_instruction_boundary(0x95C1, 2); /* NOP */
label_95C2:;
    /* $95C2: EA */ nes_cpu_instruction_boundary(0x95C2, 2); /* NOP */
label_95C3:; /* AreaRoutine */
    /* $95C3: 4C */ nes_cpu_instruction_boundary(0x95C3, 3); nes_cpu_instruction_boundary(0x9D35, 2); func_9D35_b1(); return;
label_9A07:;
    /* $9A07: C9 */ nes_cpu_instruction_boundary(0x9A07, 2); { int r=g_cpu.A-0x0F; g_cpu.C=(g_cpu.A>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_9A09:;
    /* $9A09: 90 */ nes_cpu_instruction_boundary(0x9A09, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9A3F; }
label_9A0B:;
    /* $9A0B: C9 */ nes_cpu_instruction_boundary(0x9A0B, 2); { int r=g_cpu.A-0x11; g_cpu.C=(g_cpu.A>=0x11)?1:0; FLAG_NZ(r&0xFF); }
label_9A0D:;
    /* $9A0D: B0 */ nes_cpu_instruction_boundary(0x9A0D, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9A16; }
label_9A0F:;
    /* $9A0F: A9 */ nes_cpu_instruction_boundary(0x9A0F, 2); g_cpu.A = 0x3A; FLAG_NZ(g_cpu.A);
label_9A11:;
    /* $9A11: 9D */ nes_cpu_instruction_boundary(0x9A11, 5); nes_write((0x6B01 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9A14:;
    /* $9A14: D0 */ nes_cpu_instruction_boundary(0x9A14, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A3F; }
label_9A16:; /* SkreeBlowUpIntoProjectiles_BANK1 */
    /* $9A16: DE */ nes_cpu_instruction_boundary(0x9A16, 7); { uint16_t a=(0x6B01 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9A19:;
    /* $9A19: D0 */ nes_cpu_instruction_boundary(0x9A19, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A3F; }
label_9A1B:;
    /* $9A1B: A9 */ nes_cpu_instruction_boundary(0x9A1B, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9A1D:;
    /* $9A1D: 9D */ nes_cpu_instruction_boundary(0x9A1D, 5); nes_write((0x6AF4 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9A20:;
    /* $9A20: A0 */ nes_cpu_instruction_boundary(0x9A20, 2); g_cpu.Y = 0x0C; FLAG_NZ(g_cpu.Y);
label_9A22:; /* SkreeBlowUpIntoProjectiles_BANK1_loop */
    /* $9A22: A9 */ nes_cpu_instruction_boundary(0x9A22, 2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_9A24:;
    /* $9A24: 99 */ nes_cpu_instruction_boundary(0x9A24, 5); nes_write((0x00A0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A27:;
    /* $9A27: BD */ nes_cpu_instruction_boundary(0x9A27, 4); g_cpu.A = nes_read((0x0400 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A2A:;
    /* $9A2A: 99 */ nes_cpu_instruction_boundary(0x9A2A, 5); nes_write((0x00A1 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A2D:;
    /* $9A2D: BD */ nes_cpu_instruction_boundary(0x9A2D, 4); g_cpu.A = nes_read((0x0401 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A30:;
    /* $9A30: 99 */ nes_cpu_instruction_boundary(0x9A30, 5); nes_write((0x00A2 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A33:;
    /* $9A33: BD */ nes_cpu_instruction_boundary(0x9A33, 4); g_cpu.A = nes_read((0x6AFB + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A36:;
    /* $9A36: 99 */ nes_cpu_instruction_boundary(0x9A36, 5); nes_write((0x00A3 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A39:;
    /* $9A39: 88 */ nes_cpu_instruction_boundary(0x9A39, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A3A:;
    /* $9A3A: 88 */ nes_cpu_instruction_boundary(0x9A3A, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A3B:;
    /* $9A3B: 88 */ nes_cpu_instruction_boundary(0x9A3B, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A3C:;
    /* $9A3C: 88 */ nes_cpu_instruction_boundary(0x9A3C, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A3D:;
    /* $9A3D: 10 */ nes_cpu_instruction_boundary(0x9A3D, 2); if (!g_cpu.N) {
    nes_cpu_instruction_boundary(0x9A22, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9A22;
    }
label_9A3F:; /* SkreeExit_Active_BANK1 */
    /* $9A3F: A9 */ nes_cpu_instruction_boundary(0x9A3F, 2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_9A41:;
    /* $9A41: 4C */ nes_cpu_instruction_boundary(0x9A41, 3); nes_cpu_instruction_boundary(0x8000, 2); func_8000_b1(); return;
label_9F54:;
    /* $9F54: 00 */ nes_cpu_instruction_boundary(0x9F54, 7); nes_brk_executed(0x9F54); return;
label_95C6:; return;
label_95C8:; return;
label_95C9:; return;
label_95CB:; return;
label_95CC:; return;
label_95CF:; return;
label_95D0:; return;
label_95D2:; return;
label_95D3:; return;
label_95D5:; return;
label_95D6:; return;
label_95D7:; return;
label_95D9:; return;
label_95DB:; return;
label_95DC:; return;
label_95DE:; return;
label_95DF:; return;
label_95E0:; return;
label_95E1:; return;
label_95E2:; return;
label_95E3:; return;
label_95E4:; return;
label_95E6:; return;
label_95E7:; return;
label_95E9:; return;
label_95EB:; return;
label_95EC:; return;
label_95EF:; return;
label_95F1:; return;
label_95F2:; return;
label_95F5:; return;
label_95F8:; return;
label_95F9:; return;
label_95FA:; return;
label_95FD:; return;
label_95FE:; return;
label_9601:; return;
label_9602:; return;
label_9603:; return;
label_9604:; return;
label_9605:; return;
label_9606:; return;
label_9607:; return;
label_9608:; return;
label_9609:; return;
label_960A:; return;
label_960B:; return;
label_960D:; return;
label_960F:; return;
label_9612:; return;
label_9615:; return;
label_9617:; return;
label_9619:; return;
label_961B:; return;
label_961C:; return;
label_961E:; return;
label_961F:; return;
label_9620:; return;
label_9621:; return;
label_9623:; return;
label_9625:; return;
label_9626:; return;
label_9627:; return;
label_9628:; return;
label_9629:; return;
label_962A:; return;
label_962B:; return;
label_962C:; return;
label_962D:; return;
label_962F:; return;
label_9630:; return;
label_9631:; return;
label_9633:; return;
label_9636:; return;
label_9638:; return;
label_9639:; return;
label_963A:; return;
label_963B:; return;
label_963D:; return;
label_963F:; return;
label_9641:; return;
label_9644:; return;
label_9646:; return;
label_9648:; return;
label_9649:; return;
label_964C:; return;
label_964F:; return;
label_9650:; return;
label_9652:; return;
label_9654:; return;
label_9656:; return;
label_9657:; return;
label_9658:; return;
label_9659:; return;
label_965A:; return;
label_965B:; return;
label_965D:; return;
label_965F:; return;
label_9661:; return;
label_9664:; return;
label_9666:; return;
label_9668:; return;
label_9669:; return;
label_966B:; return;
label_96B8:; return;
label_96B9:; return;
label_96BA:; return;
label_96BB:; return;
label_96BC:; return;
label_96BD:; return;
label_96BF:; return;
label_96C1:; return;
label_96C3:; return;
label_96C5:; return;
label_96C6:; return;
label_96C8:; return;
label_96C9:; return;
label_96CA:; return;
label_96CB:; return;
label_96CC:; return;
label_96CE:; return;
label_96CF:; return;
label_96D0:; return;
label_96D2:; return;
label_96D5:; return;
label_96D8:; return;
label_96D9:; return;
label_96DA:; return;
label_96DB:; return;
label_96DE:; return;
label_96E0:; return;
label_96E2:; return;
label_96E4:; return;
label_96E6:; return;
label_96E8:; return;
label_96EA:; return;
label_96EC:; return;
label_96EE:; return;
label_96F0:; return;
label_96F2:; return;
label_96F3:; return;
label_96F5:; return;
label_96F8:; return;
label_96F9:; return;
label_96FB:; return;
label_96FE:; return;
label_96FF:; return;
label_9702:; return;
label_9703:; return;
label_9706:; return;
label_9707:; return;
label_970A:; return;
label_970B:; return;
label_970E:; return;
label_970F:; return;
label_9711:; return;
label_9714:; return;
label_9715:; return;
label_9716:; return;
label_9717:; return;
label_971A:; return;
label_971B:; return;
label_971D:; return;
label_9720:; return;
label_9723:; return;
label_9724:; return;
label_9725:; return;
label_9726:; return;
label_9727:; return;
label_9728:; return;
label_9729:; return;
label_972A:; return;
label_972B:; return;
label_972E:; return;
label_9730:; return;
label_9731:; return;
label_9732:; return;
label_9735:; return;
label_9737:; return;
label_9738:; return;
label_9739:; return;
label_973A:; return;
label_973B:; return;
label_973C:; return;
label_973D:; return;
label_973E:; return;
label_973F:; return;
label_9740:; return;
label_9741:; return;
label_9742:; return;
label_9743:; return;
label_9744:; return;
label_9745:; return;
label_9746:; return;
label_9747:; return;
label_9748:; return;
label_9749:; return;
label_974A:; return;
label_974B:; return;
label_974C:; return;
label_974D:; return;
label_974E:; return;
label_974F:; return;
label_9750:; return;
label_9751:; return;
label_9752:; return;
label_9753:; return;
label_9755:; return;
label_9758:; return;
label_9759:; return;
label_975A:; return;
label_975B:; return;
label_975E:; return;
label_975F:; return;
label_9760:; return;
label_9761:; return;
label_9762:; return;
label_9763:; return;
label_9764:; return;
label_9765:; return;
label_9766:; return;
label_9767:; return;
label_9768:; return;
label_9769:; return;
label_976A:; return;
label_976B:; return;
label_976C:; return;
label_976D:; return;
label_976E:; return;
label_976F:; return;
label_9770:; return;
label_9771:; return;
label_9772:; return;
label_9773:; return;
label_9774:; return;
label_9775:; return;
label_9776:; return;
label_9777:; return;
label_9778:; return;
label_9779:; return;
label_977A:; return;
label_977B:; return;
label_977D:; return;
label_977F:; return;
label_9781:; return;
label_9784:; return;
label_9785:; return;
label_9786:; return;
label_9787:; return;
label_9788:; return;
label_9789:; return;
label_978A:; return;
label_978B:; return;
label_978C:; return;
label_978D:; return;
label_978F:; return;
label_9791:; return;
label_9792:; return;
label_9793:; return;
label_9794:; return;
label_9795:; return;
label_9796:; return;
label_9797:; return;
label_9798:; return;
label_9799:; return;
label_979A:; return;
label_979B:; return;
label_979E:; return;
label_979F:; return;
label_97A0:; return;
label_97A1:; return;
label_97A2:; return;
label_97A3:; return;
label_97A5:; return;
label_97A6:; return;
label_97A7:; return;
label_97A9:; return;
label_97AB:; return;
label_97AD:; return;
label_97AE:; return;
label_97B1:; return;
label_97B4:; return;
label_97B7:; return;
label_97B8:; return;
label_97BB:; return;
label_97BD:; return;
label_97C0:; return;
label_97C3:; return;
label_97C4:; return;
label_97C7:; return;
label_97C8:; return;
label_97CB:; return;
label_97CC:; return;
label_97CF:; return;
label_97D0:; return;
label_97D3:; return;
label_97D4:; return;
label_97D6:; return;
label_97D8:; return;
label_97DA:; return;
label_97DC:; return;
label_97DE:; return;
label_97DF:; return;
label_97E0:; return;
label_97E2:; return;
label_97E3:; return;
label_97E4:; return;
label_97E6:; return;
label_97E9:; return;
label_97EC:; return;
label_97EE:; return;
label_97F1:; return;
label_97F4:; return;
label_97F7:; return;
label_97F9:; return;
label_97FB:; return;
label_97FD:; return;
label_97FF:; return;
label_9801:; return;
label_9803:; return;
label_9805:; return;
label_9807:; return;
label_9809:; return;
label_980A:; return;
label_980B:; return;
label_980C:; return;
label_980D:; return;
label_980F:; return;
label_9811:; return;
label_9813:; return;
label_9815:; return;
label_9817:; return;
label_9819:; return;
label_981B:; return;
label_981D:; return;
label_981F:; return;
label_9820:; return;
label_9821:; return;
label_9824:; return;
label_9826:; return;
label_9827:; return;
label_9828:; return;
label_982A:; return;
label_982C:; return;
label_982E:; return;
label_9830:; return;
label_9832:; return;
label_9834:; return;
label_9835:; return;
label_9836:; return;
label_9838:; return;
label_983A:; return;
label_983C:; return;
label_983E:; return;
label_9841:; return;
label_9842:; return;
label_9844:; return;
label_9846:; return;
label_9848:; return;
label_984A:; return;
label_984C:; return;
label_984E:; return;
label_9850:; return;
label_9852:; return;
label_9854:; return;
label_9855:; return;
label_9856:; return;
label_9857:; return;
label_9858:; return;
label_985A:; return;
label_985C:; return;
label_985E:; return;
label_9860:; return;
label_9862:; return;
label_9864:; return;
label_9866:; return;
label_9868:; return;
label_986A:; return;
label_986B:; return;
label_986C:; return;
label_986F:; return;
label_9871:; return;
label_9872:; return;
label_9873:; return;
label_9875:; return;
label_9877:; return;
label_9879:; return;
label_987B:; return;
label_987D:; return;
label_987F:; return;
label_9880:; return;
label_9881:; return;
label_9883:; return;
label_9885:; return;
label_9887:; return;
label_9889:; return;
label_988C:; return;
label_988E:; return;
label_9890:; return;
label_9893:; return;
label_9895:; return;
label_9897:; return;
label_9899:; return;
label_989B:; return;
label_989D:; return;
label_989F:; return;
label_98A2:; return;
label_98A4:; return;
label_98A7:; return;
label_98A9:; return;
label_98AB:; return;
label_98AD:; return;
label_98AF:; return;
label_98B1:; return;
label_98B3:; return;
label_98B6:; return;
label_98B8:; return;
label_98BB:; return;
label_98BC:; return;
label_98BD:; return;
label_98BF:; return;
label_98C2:; return;
label_98C3:; return;
label_98C4:; return;
label_98C6:; return;
label_98C9:; return;
label_98CA:; return;
label_98CB:; return;
label_98CE:; return;
label_98D1:; return;
label_98D2:; return;
label_98D5:; return;
label_98D7:; return;
label_98DA:; return;
label_98DD:; return;
label_98DF:; return;
label_98E1:; return;
label_98E3:; return;
label_98E5:; return;
label_98E7:; return;
label_98E9:; return;
label_98EB:; return;
label_98ED:; return;
label_98EF:; return;
label_98F1:; return;
label_98F4:; return;
label_98F6:; return;
label_98F8:; return;
label_98FA:; return;
label_98FC:; return;
label_98FE:; return;
label_9900:; return;
label_9902:; return;
label_9904:; return;
label_9906:; return;
label_9908:; return;
label_990B:; return;
label_990D:; return;
label_990F:; return;
label_9911:; return;
label_9913:; return;
label_9915:; return;
label_9917:; return;
label_9919:; return;
label_991B:; return;
label_991D:; return;
label_991F:; return;
label_9922:; return;
label_9924:; return;
label_9926:; return;
label_9928:; return;
label_992A:; return;
label_992C:; return;
label_992E:; return;
label_9930:; return;
label_9932:; return;
label_9934:; return;
label_9936:; return;
label_9939:; return;
label_993B:; return;
label_993D:; return;
label_993F:; return;
label_9941:; return;
label_9943:; return;
label_9945:; return;
label_9947:; return;
label_9949:; return;
label_994B:; return;
label_994D:; return;
label_9950:; return;
label_9952:; return;
label_9954:; return;
label_9956:; return;
label_9958:; return;
label_995A:; return;
label_995C:; return;
label_995E:; return;
label_9960:; return;
label_9962:; return;
label_9964:; return;
label_9967:; return;
label_9969:; return;
label_996B:; return;
label_996D:; return;
label_996F:; return;
label_9971:; return;
label_9973:; return;
label_9976:; return;
label_9977:; return;
label_9979:; return;
label_997A:; return;
label_997C:; return;
label_997D:; return;
label_997E:; return;
label_9980:; return;
label_9982:; return;
label_9985:; return;
label_9987:; return;
label_9989:; return;
label_998B:; return;
label_998D:; return;
label_998F:; return;
label_9991:; return;
label_9994:; return;
label_9996:; return;
label_9998:; return;
label_999A:; return;
label_999C:; return;
label_999E:; return;
label_99A0:; return;
label_99A3:; return;
label_99A5:; return;
label_99A7:; return;
label_99A9:; return;
label_99AB:; return;
label_99AD:; return;
label_99B0:; return;
label_99B2:; return;
label_99B5:; return;
label_99BF:; return;
label_99C1:; return;
label_99C3:; return;
label_99C5:; return;
label_99C8:; return;
label_99CA:; return;
label_99CC:; return;
label_99CE:; return;
label_99D0:; return;
label_99DE:; return;
label_99E0:; return;
label_99E3:; return;
label_99E4:; return;
label_99E7:; return;
label_99E9:; return;
label_99EB:; return;
label_99ED:; return;
label_99F0:; return;
label_99F2:; return;
label_99F4:; return;
label_99F7:; return;
label_9A03:; return;
label_9A05:; return;
label_9A44:; return;
label_9A46:; return;
label_9A49:; return;
label_9A4C:; return;
label_9A4F:; return;
label_9A51:; return;
label_9A53:; return;
label_9A55:; return;
label_9A57:; return;
label_9A59:; return;
label_9A5B:; return;
label_9A5D:; return;
label_9A60:; return;
label_9A62:; return;
label_9A64:; return;
label_9A67:; return;
label_9A69:; return;
label_9A6B:; return;
label_9A6D:; return;
label_9A70:; return;
label_9A72:; return;
label_9A74:; return;
label_9A77:; return;
label_9A79:; return;
label_9A7C:; return;
label_9A7E:; return;
label_9A81:; return;
label_9A84:; return;
label_9A87:; return;
label_9A89:; return;
label_9A8C:; return;
label_9A8F:; return;
label_9A92:; return;
label_9A93:; return;
label_9A96:; return;
label_9A98:; return;
label_9A99:; return;
label_9A9A:; return;
label_9A9D:; return;
label_9AA0:; return;
label_9AA2:; return;
label_9AA5:; return;
label_9AA8:; return;
label_9AAA:; return;
label_9AAC:; return;
label_9AAE:; return;
label_9AB0:; return;
label_9AB3:; return;
label_9AB4:; return;
label_9AB5:; return;
label_9AB7:; return;
label_9ABA:; return;
label_9ABD:; return;
label_9AC0:; return;
label_9AC2:; return;
label_9AC5:; return;
label_9AC6:; return;
label_9AC9:; return;
label_9ACC:; return;
label_9ACE:; return;
label_9AD0:; return;
label_9AD3:; return;
label_9AD6:; return;
label_9AD9:; return;
label_9ADA:; return;
label_9ADD:; return;
label_9ADE:; return;
label_9ADF:; return;
label_9AE1:; return;
label_9AE2:; return;
label_9AE5:; return;
label_9AE7:; return;
label_9AE9:; return;
label_9AEA:; return;
label_9AEB:; return;
label_9AEC:; return;
label_9AEF:; return;
label_9AF0:; return;
label_9AF3:; return;
label_9AF4:; return;
label_9AF5:; return;
label_9AF7:; return;
label_9AF9:; return;
label_9AFB:; return;
label_9AFD:; return;
label_9AFF:; return;
label_9B01:; return;
label_9B04:; return;
label_9B07:; return;
label_9B09:; return;
label_9B0C:; return;
label_9B0E:; return;
label_9B10:; return;
label_9B13:; return;
label_9B14:; return;
label_9B17:; return;
label_9B19:; return;
label_9B1C:; return;
label_9B1E:; return;
label_9B20:; return;
label_9B22:; return;
label_9B25:; return;
label_9B27:; return;
label_9B2A:; return;
label_9B2D:; return;
label_9B2F:; return;
label_9B32:; return;
label_9B35:; return;
label_9B37:; return;
label_9B39:; return;
label_9B3C:; return;
label_9B3E:; return;
label_9B41:; return;
label_9B43:; return;
label_9B46:; return;
label_9B47:; return;
label_9B4A:; return;
label_9B4C:; return;
label_9B4E:; return;
label_9B50:; return;
label_9B53:; return;
label_9B55:; return;
label_9B58:; return;
label_9B5A:; return;
label_9B5C:; return;
label_9B5F:; return;
label_9B62:; return;
label_9B65:; return;
label_9B68:; return;
label_9B6A:; return;
label_9B6B:; return;
label_9B6E:; return;
label_9B71:; return;
label_9B74:; return;
label_9B75:; return;
label_9B77:; return;
label_9B7A:; return;
label_9B7C:; return;
label_9B7E:; return;
label_9B81:; return;
label_9B82:; return;
label_9B85:; return;
label_9B87:; return;
label_9B88:; return;
label_9B8A:; return;
label_9B8D:; return;
label_9B90:; return;
label_9B92:; return;
label_9B95:; return;
label_9B97:; return;
label_9B9A:; return;
label_9B9C:; return;
label_9B9F:; return;
label_9BA0:; return;
label_9BA2:; return;
label_9BA5:; return;
label_9BA7:; return;
label_9BA9:; return;
label_9BAB:; return;
label_9BAD:; return;
label_9BAF:; return;
label_9BB1:; return;
label_9BB4:; return;
label_9BB7:; return;
label_9BBA:; return;
label_9BBD:; return;
label_9BC0:; return;
label_9BC2:; return;
label_9BC5:; return;
label_9BC8:; return;
label_9BCB:; return;
label_9BCD:; return;
label_9BCF:; return;
label_9BD2:; return;
label_9BD5:; return;
label_9BD7:; return;
label_9BD9:; return;
label_9BDC:; return;
label_9BDE:; return;
label_9BE0:; return;
label_9BE2:; return;
label_9BE5:; return;
label_9BE7:; return;
label_9BEA:; return;
label_9BEB:; return;
label_9BED:; return;
label_9BF0:; return;
label_9BF2:; return;
label_9BF4:; return;
label_9BF7:; return;
label_9BF9:; return;
label_9BFB:; return;
label_9BFE:; return;
label_9C01:; return;
label_9C03:; return;
label_9C05:; return;
label_9C08:; return;
label_9C0B:; return;
label_9C0D:; return;
label_9C0F:; return;
label_9C12:; return;
label_9C14:; return;
label_9C17:; return;
label_9C1A:; return;
label_9C1D:; return;
label_9C1F:; return;
label_9C22:; return;
label_9C23:; return;
label_9C24:; return;
label_9C26:; return;
label_9C27:; return;
label_9C29:; return;
label_9C2A:; return;
label_9C2D:; return;
label_9C2F:; return;
label_9C32:; return;
label_9C34:; return;
label_9C36:; return;
label_9C38:; return;
label_9C3A:; return;
label_9C3D:; return;
label_9C3F:; return;
label_9C41:; return;
label_9C42:; return;
label_9C44:; return;
label_9C46:; return;
label_9C48:; return;
label_9C4A:; return;
label_9C4C:; return;
label_9C4F:; return;
label_9C51:; return;
label_9C53:; return;
label_9C55:; return;
label_9C57:; return;
label_9C5A:; return;
label_9C5D:; return;
label_9C60:; return;
label_9C63:; return;
label_9C66:; return;
label_9C67:; return;
label_9C68:; return;
label_9C69:; return;
label_9C6A:; return;
label_9C6B:; return;
label_9C6C:; return;
label_9C6D:; return;
label_9C6E:; return;
label_9C71:; return;
label_9C73:; return;
label_9C76:; return;
label_9C79:; return;
label_9C7A:; return;
label_9C7B:; return;
label_9C7C:; return;
label_9C7D:; return;
label_9C80:; return;
label_9C82:; return;
label_9C84:; return;
label_9C87:; return;
label_9C8A:; return;
label_9C8C:; return;
label_9C8E:; return;
label_9C91:; return;
label_9C93:; return;
label_9C96:; return;
label_9C98:; return;
label_9C9B:; return;
label_9C9D:; return;
label_9CA0:; return;
label_9CA2:; return;
label_9CA4:; return;
label_9CA7:; return;
label_9CA8:; return;
label_9CAB:; return;
label_9CAD:; return;
label_9CB0:; return;
label_9CB2:; return;
label_9CB5:; return;
label_9CB7:; return;
label_9CB8:; return;
label_9CBA:; return;
label_9CBC:; return;
label_9CBF:; return;
label_9CC2:; return;
label_9CC3:; return;
label_9CC4:; return;
label_9CC5:; return;
label_9CC7:; return;
label_9CC9:; return;
label_9CCB:; return;
label_9CCC:; return;
label_9CCE:; return;
label_9CD0:; return;
label_9CD2:; return;
label_9CD4:; return;
label_9CD6:; return;
label_9CD8:; return;
label_9CD9:; return;
label_9CDB:; return;
label_9CDC:; return;
label_9CDD:; return;
label_9CDF:; return;
label_9CE1:; return;
label_9CE3:; return;
label_9CE5:; return;
label_9CE7:; return;
label_9CE9:; return;
label_9CEC:; return;
label_9CEE:; return;
label_9CF0:; return;
label_9CF3:; return;
label_9CF5:; return;
label_9CF7:; return;
label_9CFA:; return;
label_9CFC:; return;
label_9CFE:; return;
label_9CFF:; return;
label_9D01:; return;
label_9D04:; return;
label_9D05:; return;
label_9D07:; return;
label_9D09:; return;
label_9D0B:; return;
label_9D0D:; return;
label_9D0F:; return;
label_9D11:; return;
label_9D12:; return;
label_9D14:; return;
label_9D15:; return;
label_9D16:; return;
label_9D18:; return;
label_9D1A:; return;
label_9D1C:; return;
label_9D1E:; return;
label_9D20:; return;
label_9D23:; return;
label_9D25:; return;
label_9D27:; return;
label_9D2A:; return;
label_9D2C:; return;
label_9D2E:; return;
label_9D2F:; return;
label_9D31:; return;
label_9D34:; return;
label_9D35:; return;
label_9D36:; return;
label_9D37:; return;
label_9D3A:; return;
label_9D3D:; return;
label_9D3F:; return;
label_9D41:; return;
label_9D43:; return;
label_9D45:; return;
label_9D46:; return;
label_9D47:; return;
label_9D49:; return;
label_9D4B:; return;
label_9D4E:; return;
label_9D51:; return;
label_9D53:; return;
label_9D55:; return;
label_9D58:; return;
label_9D5B:; return;
label_9D5E:; return;
label_9D5F:; return;
label_9D61:; return;
label_9D62:; return;
label_9D64:; return;
label_9D67:; return;
label_9D6A:; return;
label_9D6B:; return;
label_9D6D:; return;
label_9D6E:; return;
label_9D71:; return;
label_9D74:; return;
label_9D77:; return;
label_9D7A:; return;
label_9D7D:; return;
label_9D7F:; return;
label_9D82:; return;
label_9D85:; return;
label_9D88:; return;
label_9D8A:; return;
label_9D8D:; return;
label_9D8F:; return;
label_9D91:; return;
label_9D93:; return;
label_9D94:; return;
label_9D97:; return;
label_9D98:; return;
label_9D9B:; return;
label_9D9E:; return;
label_9DA1:; return;
label_9DA4:; return;
label_9DA7:; return;
label_9DAA:; return;
label_9DAD:; return;
label_9DAF:; return;
label_9DB0:; return;
label_9DB2:; return;
label_9DB4:; return;
label_9DB7:; return;
label_9DB9:; return;
label_9DBC:; return;
label_9DBF:; return;
label_9DC1:; return;
label_9DC3:; return;
label_9DC5:; return;
label_9DC8:; return;
label_9DCB:; return;
label_9DCD:; return;
label_9DD0:; return;
label_9DD2:; return;
label_9DD5:; return;
label_9DD8:; return;
label_9DDB:; return;
label_9DDE:; return;
label_9DE0:; return;
label_9DE2:; return;
label_9DE4:; return;
label_9DE7:; return;
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
label_9E19:; return;
label_9E1B:; return;
label_9E1D:; return;
label_9E1F:; return;
label_9E21:; return;
label_9E23:; return;
label_9E25:; return;
label_9E27:; return;
label_9E29:; return;
label_9E2B:; return;
label_9E2D:; return;
label_9E2F:; return;
label_9E31:; return;
label_9E33:; return;
label_9E35:; return;
label_9E37:; return;
label_9E39:; return;
label_9E3B:; return;
label_9E3D:; return;
label_9E3F:; return;
label_9E41:; return;
label_9E43:; return;
label_9E45:; return;
label_9E47:; return;
label_9E49:; return;
label_9E4B:; return;
label_9E4D:; return;
label_9E4F:; return;
label_9E51:; return;
label_9E53:; return;
label_9E55:; return;
label_9E57:; return;
label_9E59:; return;
label_9E5B:; return;
label_9E5D:; return;
label_9E5F:; return;
label_9E61:; return;
label_9E63:; return;
label_9E65:; return;
label_9E67:; return;
label_9E69:; return;
label_9E6B:; return;
label_9E6D:; return;
label_9E6F:; return;
label_9E71:; return;
label_9E73:; return;
label_9E75:; return;
label_9E77:; return;
label_9E79:; return;
label_9E7B:; return;
label_9E7D:; return;
label_9E7F:; return;
label_9E81:; return;
label_9E83:; return;
label_9E85:; return;
label_9E87:; return;
label_9E89:; return;
label_9E8B:; return;
label_9E8D:; return;
label_9E8F:; return;
label_9E91:; return;
label_9E93:; return;
label_9E95:; return;
label_9E97:; return;
label_9E99:; return;
label_9E9B:; return;
label_9E9D:; return;
label_9E9F:; return;
label_9EA1:; return;
label_9EA3:; return;
label_9EA5:; return;
label_9EA7:; return;
label_9EA9:; return;
label_9EAB:; return;
label_9EAD:; return;
label_9EAF:; return;
label_9EB1:; return;
label_9EB3:; return;
label_9EB5:; return;
label_9EB7:; return;
label_9EB9:; return;
label_9EBB:; return;
label_9EBD:; return;
label_9EBF:; return;
label_9EC1:; return;
label_9EC3:; return;
label_9EC5:; return;
label_9EC7:; return;
label_9EC9:; return;
label_9ECB:; return;
label_9ECD:; return;
label_9ECF:; return;
label_9ED1:; return;
label_9ED3:; return;
label_9ED5:; return;
label_9ED7:; return;
label_9ED9:; return;
label_9EDB:; return;
label_9EDD:; return;
label_9EDF:; return;
label_9EE1:; return;
label_9EE3:; return;
label_9EE5:; return;
label_9EE7:; return;
label_9EE9:; return;
label_9EEB:; return;
label_9EED:; return;
label_9EEF:; return;
label_9EF1:; return;
label_9EF3:; return;
label_9EF5:; return;
label_9EF7:; return;
label_9EF9:; return;
label_9EFB:; return;
label_9EFD:; return;
label_9EFF:; return;
label_9F01:; return;
label_9F03:; return;
label_9F05:; return;
label_9F07:; return;
label_9F09:; return;
label_9F0B:; return;
label_9F0D:; return;
label_9F0F:; return;
label_9F12:; return;
label_9F13:; return;
label_9F16:; return;
label_9F17:; return;
label_9F1A:; return;
label_9F1C:; return;
label_9F1F:; return;
label_9F22:; return;
label_9F24:; return;
label_9F26:; return;
label_9F29:; return;
label_9F2C:; return;
label_9F2F:; return;
label_9F32:; return;
label_9F34:; return;
label_9F36:; return;
label_9F38:; return;
label_9F3A:; return;
label_9F3C:; return;
label_9F3E:; return;
label_9F40:; return;
label_9F43:; return;
label_9F44:; return;
label_9F46:; return;
label_9F48:; return;
label_9F4A:; return;
label_9F4C:; return;
label_9F4E:; return;
label_9F4F:; return;
label_9F51:; return;
label_9F55:; return;
label_9F57:; return;
label_9F5A:; return;
label_9F5B:; return;
label_9F5D:; return;
label_9F60:; return;
label_9F61:; return;
label_9F63:; return;
label_9F65:; return;
label_9F68:; return;
label_9F6A:; return;
label_9F6D:; return;
label_9F6F:; return;
label_9F71:; return;
label_9F73:; return;
label_9F75:; return;
label_9F78:; return;
label_9F79:; return;
label_9F7B:; return;
label_9F7D:; return;
label_9F7E:; return;
label_9F7F:; return;
label_9F80:; return;
label_9F81:; return;
label_9F82:; return;
label_9F83:; return;
label_9F84:; return;
label_9F86:; return;
label_9F89:; return;
label_9F8C:; return;
label_9F8E:; return;
label_9F91:; return;
label_9F92:; return;
label_9F93:; return;
label_9F94:; return;
label_9F95:; return;
label_9F96:; return;
label_9F97:; return;
label_9F98:; return;
label_9F9A:; return;
label_9F9C:; return;
label_9F9D:; return;
label_9F9E:; return;
label_9FA0:; return;
label_9FA2:; return;
label_9FA3:; return;
label_9FA5:; return;
label_9FA7:; return;
label_9FA9:; return;
label_9FAA:; return;
label_9FAB:; return;
label_9FAC:; return;
label_9FAD:; return;
label_9FAE:; return;
label_9FAF:; return;
label_9FB0:; return;
label_9FB1:; return;
label_9FB4:; return;
label_9FB6:; return;
label_9FB9:; return;
label_9FBA:; return;
label_9FBC:; return;
label_9FBF:; return;
label_9FC0:; return;
label_9FC3:; return;
label_9FC4:; return;
label_9FC5:; return;
label_9FC7:; return;
label_9FC8:; return;
label_9FC9:; return;
label_9FCA:; return;
label_9FCC:; return;
label_9FCD:; return;
label_9FCE:; return;
label_9FCF:; return;
label_9FD1:; return;
label_9FD3:; return;
label_9FD4:; return;
label_9FD7:; return;
label_9FD9:; return;
label_9FDC:; return;
label_9FDD:; return;
label_9FE0:; return;
label_9FE2:; return;
label_9FE5:; return;
label_9FE6:; return;
label_9FE8:; return;
label_9FEA:; return;
label_9FED:; return;
label_9FEE:; return;
label_9FF0:; return;
label_9FF3:; return;
label_9FF4:; return;
label_9FF6:; return;
label_9FF9:; return;
label_9FFB:; return;
label_9FFC:; return;
label_9FFE:; return;
label_A001:; return;
label_A002:; return;
label_A004:; return;
label_A006:; return;
label_A009:; return;
label_A00B:; return;
label_A00D:; return;
label_A00E:; return;
label_A010:; return;
label_A012:; return;
label_A015:; return;
label_A017:; return;
label_A019:; return;
label_A01B:; return;
label_A01C:; return;
label_A01E:; return;
label_A021:; return;
label_A023:; return;
label_A025:; return;
label_A027:; return;
label_A029:; return;
label_A02A:; return;
label_A02C:; return;
label_A02E:; return;
label_A031:; return;
label_A033:; return;
label_A035:; return;
label_A036:; return;
label_A039:; return;
label_A03B:; return;
label_A03E:; return;
label_A03F:; return;
label_A041:; return;
label_A044:; return;
label_A046:; return;
label_A048:; return;
label_A049:; return;
label_A04B:; return;
label_A04E:; return;
label_A050:; return;
label_A052:; return;
label_A053:; return;
label_A056:; return;
label_A058:; return;
label_A05B:; return;
label_A05C:; return;
label_A05E:; return;
label_A061:; return;
label_A063:; return;
label_A065:; return;
label_A066:; return;
label_A068:; return;
label_A06B:; return;
label_A06D:; return;
label_A06E:; return;
label_A071:; return;
label_A074:; return;
label_A077:; return;
label_A07A:; return;
label_A07D:; return;
label_A07E:; return;
label_A081:; return;
label_A084:; return;
label_A085:; return;
label_A088:; return;
label_A08B:; return;
label_A08D:; return;
label_A08E:; return;
label_A091:; return;
label_A093:; return;
label_A094:; return;
label_A095:; return;
label_A097:; return;
label_A098:; return;
label_A099:; return;
label_A09B:; return;
label_A09C:; return;
label_A09D:; return;
label_A09F:; return;
label_A0A1:; return;
label_A0A2:; return;
label_A0A5:; return;
label_A0A7:; return;
label_A0A8:; return;
label_A0A9:; return;
label_A0AB:; return;
label_A0AC:; return;
label_A0AD:; return;
label_A0AF:; return;
label_A0B0:; return;
label_A0B1:; return;
label_A0B3:; return;
label_A0B5:; return;
label_A0B6:; return;
label_A0B9:; return;
label_A0BB:; return;
label_A0BD:; return;
label_A0C0:; return;
}

void func_913F_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_913F_b1");
#endif
    func_913F_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9A07_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A07_b1");
#endif
    func_913F_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9F54_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9F54_b1");
#endif
    func_913F_b1_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_95AB_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95AB_b1");
#endif
    func_913F_b1_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_95C3_b1(void) { /* AreaRoutine */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95C3_b1");
#endif
    func_913F_b1_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_95AE_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95AE_b1");
#endif
    func_913F_b1_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_95B1_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95B1_b1");
#endif
    func_913F_b1_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_95B4_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95B4_b1");
#endif
    func_913F_b1_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_95B7_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95B7_b1");
#endif
    func_913F_b1_body(8);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_95BA_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95BA_b1");
#endif
    func_913F_b1_body(9);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_95C0_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95C0_b1");
#endif
    func_913F_b1_body(10);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_95BD_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95BD_b1");
#endif
    func_913F_b1_body(11);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_99BF_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99BF_b1");
#endif
label_99BF:;
    /* $99BF: F4 */ nes_cpu_instruction_boundary(0x99BF, 4); (void)nes_read((0x6A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_99C1:;
    /* $99C1: C9 */ nes_cpu_instruction_boundary(0x99C1, 2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_99C3:;
    /* $99C3: F0 */ nes_cpu_instruction_boundary(0x99C3, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_99C8; }
label_99C5:;
    /* $99C5: 20 */ nes_cpu_instruction_boundary(0x99C5, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC7; g_cpu.S--; func_801B_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x99C5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_99C8:; /* CommonEnemyStub2_BANK1 */
    /* $99C8: A9 */ nes_cpu_instruction_boundary(0x99C8, 2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_99CA:;
    /* $99CA: 85 */ nes_cpu_instruction_boundary(0x99CA, 3); nes_write(0x00, g_cpu.A);
label_99CC:; /* CommonEnemyStub_BANK1 */
    /* $99CC: A9 */ nes_cpu_instruction_boundary(0x99CC, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_99CE:;
    /* $99CE: 85 */ nes_cpu_instruction_boundary(0x99CE, 3); nes_write(0x01, g_cpu.A);
label_99D0:;
    /* $99D0: 4C */ nes_cpu_instruction_boundary(0x99D0, 3); nes_cpu_instruction_boundary(0x99A1, 2); func_99A1_b1(); return;
}

void func_9A03_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A03_b1");
#endif
label_9A03:;
    /* $9A03: 45 */ nes_cpu_instruction_boundary(0x9A03, 3); g_cpu.A ^= nes_read(0xBD); FLAG_NZ(g_cpu.A);
label_9A05:;
    /* $9A05: 06 */ nes_cpu_instruction_boundary(0x9A05, 5); { uint16_t a=0x04; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9A07:;
    /* $9A07: C9 */ nes_cpu_instruction_boundary(0x9A07, 2); { int r=g_cpu.A-0x0F; g_cpu.C=(g_cpu.A>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_9A09:;
    /* $9A09: 90 */ nes_cpu_instruction_boundary(0x9A09, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9A3F; }
label_9A0B:;
    /* $9A0B: C9 */ nes_cpu_instruction_boundary(0x9A0B, 2); { int r=g_cpu.A-0x11; g_cpu.C=(g_cpu.A>=0x11)?1:0; FLAG_NZ(r&0xFF); }
label_9A0D:;
    /* $9A0D: B0 */ nes_cpu_instruction_boundary(0x9A0D, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9A16; }
label_9A0F:;
    /* $9A0F: A9 */ nes_cpu_instruction_boundary(0x9A0F, 2); g_cpu.A = 0x3A; FLAG_NZ(g_cpu.A);
label_9A11:;
    /* $9A11: 9D */ nes_cpu_instruction_boundary(0x9A11, 5); nes_write((0x6B01 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9A14:;
    /* $9A14: D0 */ nes_cpu_instruction_boundary(0x9A14, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A3F; }
label_9A16:; /* SkreeBlowUpIntoProjectiles_BANK1 */
    /* $9A16: DE */ nes_cpu_instruction_boundary(0x9A16, 7); { uint16_t a=(0x6B01 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9A19:;
    /* $9A19: D0 */ nes_cpu_instruction_boundary(0x9A19, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A3F; }
label_9A1B:;
    /* $9A1B: A9 */ nes_cpu_instruction_boundary(0x9A1B, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9A1D:;
    /* $9A1D: 9D */ nes_cpu_instruction_boundary(0x9A1D, 5); nes_write((0x6AF4 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9A20:;
    /* $9A20: A0 */ nes_cpu_instruction_boundary(0x9A20, 2); g_cpu.Y = 0x0C; FLAG_NZ(g_cpu.Y);
label_9A22:; /* SkreeBlowUpIntoProjectiles_BANK1_loop */
    /* $9A22: A9 */ nes_cpu_instruction_boundary(0x9A22, 2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_9A24:;
    /* $9A24: 99 */ nes_cpu_instruction_boundary(0x9A24, 5); nes_write((0x00A0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A27:;
    /* $9A27: BD */ nes_cpu_instruction_boundary(0x9A27, 4); g_cpu.A = nes_read((0x0400 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A2A:;
    /* $9A2A: 99 */ nes_cpu_instruction_boundary(0x9A2A, 5); nes_write((0x00A1 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A2D:;
    /* $9A2D: BD */ nes_cpu_instruction_boundary(0x9A2D, 4); g_cpu.A = nes_read((0x0401 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A30:;
    /* $9A30: 99 */ nes_cpu_instruction_boundary(0x9A30, 5); nes_write((0x00A2 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A33:;
    /* $9A33: BD */ nes_cpu_instruction_boundary(0x9A33, 4); g_cpu.A = nes_read((0x6AFB + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A36:;
    /* $9A36: 99 */ nes_cpu_instruction_boundary(0x9A36, 5); nes_write((0x00A3 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A39:;
    /* $9A39: 88 */ nes_cpu_instruction_boundary(0x9A39, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A3A:;
    /* $9A3A: 88 */ nes_cpu_instruction_boundary(0x9A3A, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A3B:;
    /* $9A3B: 88 */ nes_cpu_instruction_boundary(0x9A3B, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A3C:;
    /* $9A3C: 88 */ nes_cpu_instruction_boundary(0x9A3C, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A3D:;
    /* $9A3D: 10 */ nes_cpu_instruction_boundary(0x9A3D, 2); if (!g_cpu.N) {
    nes_cpu_instruction_boundary(0x9A22, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9A22;
    }
label_9A3F:; /* SkreeExit_Active_BANK1 */
    /* $9A3F: A9 */ nes_cpu_instruction_boundary(0x9A3F, 2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_9A41:;
    /* $9A41: 4C */ nes_cpu_instruction_boundary(0x9A41, 3); nes_cpu_instruction_boundary(0x8000, 2); func_8000_b1(); return;
}

void func_9A12_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A12_b1");
#endif
label_9A12:;
    /* $9A12: 01 */ nes_cpu_instruction_boundary(0x9A12, 6); g_cpu.A |= nes_read(nes_read16zp((0x6B + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9A14:;
    /* $9A14: D0 */ nes_cpu_instruction_boundary(0x9A14, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A3F; }
label_9A16:; /* SkreeBlowUpIntoProjectiles_BANK1 */
    /* $9A16: DE */ nes_cpu_instruction_boundary(0x9A16, 7); { uint16_t a=(0x6B01 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9A19:;
    /* $9A19: D0 */ nes_cpu_instruction_boundary(0x9A19, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A3F; }
label_9A1B:;
    /* $9A1B: A9 */ nes_cpu_instruction_boundary(0x9A1B, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9A1D:;
    /* $9A1D: 9D */ nes_cpu_instruction_boundary(0x9A1D, 5); nes_write((0x6AF4 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9A20:;
    /* $9A20: A0 */ nes_cpu_instruction_boundary(0x9A20, 2); g_cpu.Y = 0x0C; FLAG_NZ(g_cpu.Y);
label_9A22:; /* SkreeBlowUpIntoProjectiles_BANK1_loop */
    /* $9A22: A9 */ nes_cpu_instruction_boundary(0x9A22, 2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_9A24:;
    /* $9A24: 99 */ nes_cpu_instruction_boundary(0x9A24, 5); nes_write((0x00A0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A27:;
    /* $9A27: BD */ nes_cpu_instruction_boundary(0x9A27, 4); g_cpu.A = nes_read((0x0400 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A2A:;
    /* $9A2A: 99 */ nes_cpu_instruction_boundary(0x9A2A, 5); nes_write((0x00A1 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A2D:;
    /* $9A2D: BD */ nes_cpu_instruction_boundary(0x9A2D, 4); g_cpu.A = nes_read((0x0401 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A30:;
    /* $9A30: 99 */ nes_cpu_instruction_boundary(0x9A30, 5); nes_write((0x00A2 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A33:;
    /* $9A33: BD */ nes_cpu_instruction_boundary(0x9A33, 4); g_cpu.A = nes_read((0x6AFB + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A36:;
    /* $9A36: 99 */ nes_cpu_instruction_boundary(0x9A36, 5); nes_write((0x00A3 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A39:;
    /* $9A39: 88 */ nes_cpu_instruction_boundary(0x9A39, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A3A:;
    /* $9A3A: 88 */ nes_cpu_instruction_boundary(0x9A3A, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A3B:;
    /* $9A3B: 88 */ nes_cpu_instruction_boundary(0x9A3B, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A3C:;
    /* $9A3C: 88 */ nes_cpu_instruction_boundary(0x9A3C, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A3D:;
    /* $9A3D: 10 */ nes_cpu_instruction_boundary(0x9A3D, 2); if (!g_cpu.N) {
    nes_cpu_instruction_boundary(0x9A22, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9A22;
    }
label_9A3F:; /* SkreeExit_Active_BANK1 */
    /* $9A3F: A9 */ nes_cpu_instruction_boundary(0x9A3F, 2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_9A41:;
    /* $9A41: 4C */ nes_cpu_instruction_boundary(0x9A41, 3); nes_cpu_instruction_boundary(0x8000, 2); func_8000_b1(); return;
}

void func_99BA_b1(void) { /* Sidehopper_Common_BANK1 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99BA_b1");
#endif
label_99BA:; /* Sidehopper_Common_BANK1 */
    /* $99BA: 85 */ nes_cpu_instruction_boundary(0x99BA, 3); nes_write(0x85, g_cpu.A);
label_99BC:;
    /* $99BC: 85 */ nes_cpu_instruction_boundary(0x99BC, 3); nes_write(0x86, g_cpu.A);
label_99BE:;
    /* $99BE: BD */ nes_cpu_instruction_boundary(0x99BE, 4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_99C1:;
    /* $99C1: C9 */ nes_cpu_instruction_boundary(0x99C1, 2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_99C3:;
    /* $99C3: F0 */ nes_cpu_instruction_boundary(0x99C3, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_99C8; }
label_99C5:;
    /* $99C5: 20 */ nes_cpu_instruction_boundary(0x99C5, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC7; g_cpu.S--; func_801B_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x99C5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_99C8:; /* CommonEnemyStub2_BANK1 */
    /* $99C8: A9 */ nes_cpu_instruction_boundary(0x99C8, 2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_99CA:;
    /* $99CA: 85 */ nes_cpu_instruction_boundary(0x99CA, 3); nes_write(0x00, g_cpu.A);
label_99CC:; /* CommonEnemyStub_BANK1 */
    /* $99CC: A9 */ nes_cpu_instruction_boundary(0x99CC, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_99CE:;
    /* $99CE: 85 */ nes_cpu_instruction_boundary(0x99CE, 3); nes_write(0x01, g_cpu.A);
label_99D0:;
    /* $99D0: 4C */ nes_cpu_instruction_boundary(0x99D0, 3); nes_cpu_instruction_boundary(0x99A1, 2); func_99A1_b1(); return;
}

void func_99C8_b1(void) { /* CommonEnemyStub2_BANK1 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99C8_b1");
#endif
label_99C8:; /* CommonEnemyStub2_BANK1 */
    /* $99C8: A9 */ nes_cpu_instruction_boundary(0x99C8, 2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_99CA:;
    /* $99CA: 85 */ nes_cpu_instruction_boundary(0x99CA, 3); nes_write(0x00, g_cpu.A);
label_99CC:; /* CommonEnemyStub_BANK1 */
    /* $99CC: A9 */ nes_cpu_instruction_boundary(0x99CC, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_99CE:;
    /* $99CE: 85 */ nes_cpu_instruction_boundary(0x99CE, 3); nes_write(0x01, g_cpu.A);
label_99D0:;
    /* $99D0: 4C */ nes_cpu_instruction_boundary(0x99D0, 3); nes_cpu_instruction_boundary(0x99A1, 2); func_99A1_b1(); return;
}

void func_99CC_b1(void) { /* CommonEnemyStub_BANK1 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99CC_b1");
#endif
label_99CC:; /* CommonEnemyStub_BANK1 */
    /* $99CC: A9 */ nes_cpu_instruction_boundary(0x99CC, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_99CE:;
    /* $99CE: 85 */ nes_cpu_instruction_boundary(0x99CE, 3); nes_write(0x01, g_cpu.A);
label_99D0:;
    /* $99D0: 4C */ nes_cpu_instruction_boundary(0x99D0, 3); nes_cpu_instruction_boundary(0x99A1, 2); func_99A1_b1(); return;
}

void func_9BD2_b1(void) { /* KraidLintAIRoutine_BANK1 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9BD2_b1");
#endif
label_9BD2:; /* KraidLintAIRoutine_BANK1 */
    /* $9BD2: BD */ nes_cpu_instruction_boundary(0x9BD2, 4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9BD5:;
    /* $9BD5: 29 */ nes_cpu_instruction_boundary(0x9BD5, 2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9BD7:;
    /* $9BD7: F0 */ nes_cpu_instruction_boundary(0x9BD7, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9BE0; }
label_9BD9:;
    /* $9BD9: BD */ nes_cpu_instruction_boundary(0x9BD9, 4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9BDC:;
    /* $9BDC: C9 */ nes_cpu_instruction_boundary(0x9BDC, 2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_9BDE:;
    /* $9BDE: D0 */ nes_cpu_instruction_boundary(0x9BDE, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9BE7; }
label_9BE0:; /* KraidLintRemove_BANK1 */
    /* $9BE0: A9 */ nes_cpu_instruction_boundary(0x9BE0, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9BE2:;
    /* $9BE2: 9D */ nes_cpu_instruction_boundary(0x9BE2, 5); nes_write((0x6AF4 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9BE5:;
    /* $9BE5: F0 */ nes_cpu_instruction_boundary(0x9BE5, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_9C12; }
label_9BE7:; /* KraidLintMain_BANK1 */
    /* $9BE7: BD */ nes_cpu_instruction_boundary(0x9BE7, 4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9BEA:;
    /* $9BEA: 0A */ nes_cpu_instruction_boundary(0x9BEA, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9BEB:;
    /* $9BEB: 30 */ nes_cpu_instruction_boundary(0x9BEB, 2); if (g_cpu.N) { maybe_trigger_vblank(2); goto label_9C12; }
label_9BED:;
    /* $9BED: BD */ nes_cpu_instruction_boundary(0x9BED, 4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9BF0:;
    /* $9BF0: C9 */ nes_cpu_instruction_boundary(0x9BF0, 2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_9BF2:;
    /* $9BF2: D0 */ nes_cpu_instruction_boundary(0x9BF2, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_9C12; }
label_9BF4:;
    /* $9BF4: 20 */ nes_cpu_instruction_boundary(0x9BF4, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF6; g_cpu.S--; func_802D_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9BF4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9BF7:;
    /* $9BF7: A6 */ nes_cpu_instruction_boundary(0x9BF7, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_9BF9:;
    /* $9BF9: A5 */ nes_cpu_instruction_boundary(0x9BF9, 3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_9BFB:;
    /* $9BFB: 9D */ nes_cpu_instruction_boundary(0x9BFB, 5); nes_write((0x0402 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9BFE:;
    /* $9BFE: 20 */ nes_cpu_instruction_boundary(0x9BFE, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x00; g_cpu.S--; func_8030_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9BFE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9C01:;
    /* $9C01: A6 */ nes_cpu_instruction_boundary(0x9C01, 3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_9C03:;
    /* $9C03: A5 */ nes_cpu_instruction_boundary(0x9C03, 3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_9C05:;
    /* $9C05: 9D */ nes_cpu_instruction_boundary(0x9C05, 5); nes_write((0x0403 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9C08:;
    /* $9C08: 20 */ nes_cpu_instruction_boundary(0x9C08, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0A; g_cpu.S--; func_8033_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9C08, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9C0B:;
    /* $9C0B: B0 */ nes_cpu_instruction_boundary(0x9C0B, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9C12; }
label_9C0D:;
    /* $9C0D: A9 */ nes_cpu_instruction_boundary(0x9C0D, 2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_9C0F:;
    /* $9C0F: 9D */ nes_cpu_instruction_boundary(0x9C0F, 5); nes_write((0x6AF4 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9C12:; /* KraidLintDraw_BANK1 */
    /* $9C12: A9 */ nes_cpu_instruction_boundary(0x9C12, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9C14:;
    /* $9C14: 20 */ nes_cpu_instruction_boundary(0x9C14, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x16; g_cpu.S--; func_800C_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9C14, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9C17:;
    /* $9C17: 4C */ nes_cpu_instruction_boundary(0x9C17, 3); nes_cpu_instruction_boundary(0x8006, 2); func_8006_b1(); return;
}

void func_9F52_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9F52_b1");
#endif
label_9F52:;
    /* $9F52: F8 */ nes_cpu_instruction_boundary(0x9F52, 2); g_cpu.D = 1;
label_9F53:;
    /* $9F53: 04 */ nes_cpu_instruction_boundary(0x9F53, 3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9F55:;
    /* $9F55: F4 */ nes_cpu_instruction_boundary(0x9F55, 4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9F57:;
    /* $9F57: FC */ nes_cpu_instruction_boundary(0x9F57, 4); (void)nes_read((0x0400 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9F5A:;
    /* $9F5A: 08 */ nes_cpu_instruction_boundary(0x9F5A, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9F5B:;
    /* $9F5B: F4 */ nes_cpu_instruction_boundary(0x9F5B, 4); (void)nes_read((0x08 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9F5D:;
    /* $9F5D: FC */ nes_cpu_instruction_boundary(0x9F5D, 4); (void)nes_read((0x0408 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9F60:; /* EnPlace3_BANK1 */
    /* $9F60: F8 */ nes_cpu_instruction_boundary(0x9F60, 2); g_cpu.D = 1;
label_9F61:;
    /* $9F61: F4 */ nes_cpu_instruction_boundary(0x9F61, 4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9F63:;
    /* $9F63: F4 */ nes_cpu_instruction_boundary(0x9F63, 4); (void)nes_read((0xF8 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9F65:;
    /* $9F65: FC */ nes_cpu_instruction_boundary(0x9F65, 4); (void)nes_read((0xFC00 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9F68:;
    /* $9F68: F4 */ nes_cpu_instruction_boundary(0x9F68, 4); (void)nes_read((0xFC + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9F6A:;
    /* $9F6A: FC */ nes_cpu_instruction_boundary(0x9F6A, 4); (void)nes_read((0xF8FC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9F6D:;
    /* $9F6D: 04 */ nes_cpu_instruction_boundary(0x9F6D, 3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9F6F:;
    /* $9F6F: 04 */ nes_cpu_instruction_boundary(0x9F6F, 3); (void)nes_read(0x02); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9F71:;
    /* $9F71: F4 */ nes_cpu_instruction_boundary(0x9F71, 4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9F73:;
    /* $9F73: F4 */ nes_cpu_instruction_boundary(0x9F73, 4); (void)nes_read((0xF8 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9F75:;
    /* $9F75: FC */ nes_cpu_instruction_boundary(0x9F75, 4); (void)nes_read((0xFC00 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9F78:;
    /* $9F78: 02 */ nes_cpu_instruction_boundary(0x9F78, 2); /* ILLEGAL $02 — skip 1 */
label_9F79:;
    /* $9F79: 04 */ nes_cpu_instruction_boundary(0x9F79, 3); (void)nes_read(0x0A); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9F7B:;
    /* $9F7B: 04 */ nes_cpu_instruction_boundary(0x9F7B, 3); (void)nes_read(0xF8); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9F7D:;
    /* $9F7D: F8 */ nes_cpu_instruction_boundary(0x9F7D, 2); g_cpu.D = 1;
label_9F7E:;
    /* $9F7E: F8 */ nes_cpu_instruction_boundary(0x9F7E, 2); g_cpu.D = 1;
label_9F7F:;
    /* $9F7F: 00 */ nes_cpu_instruction_boundary(0x9F7F, 7); nes_brk_executed(0x9F7F); return;
}

void func_A7AD_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A7AD_b1");
#endif
label_A7AD:;
    /* $A7AD: 96 */ nes_cpu_instruction_boundary(0xA7AD, 4); nes_write((0x1F + g_cpu.Y) & 0xFF, g_cpu.X);
label_A7AF:;
    /* $A7AF: 01 */ nes_cpu_instruction_boundary(0xA7AF, 6); g_cpu.A |= nes_read(nes_read16zp((0xAA + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A7B1:;
    /* $A7B1: 05 */ nes_cpu_instruction_boundary(0xA7B1, 3); g_cpu.A |= nes_read(0x03); FLAG_NZ(g_cpu.A);
label_A7B3:;
    /* $A7B3: AC */ nes_cpu_instruction_boundary(0xA7B3, 4); g_cpu.Y = nes_read(0x011F); FLAG_NZ(g_cpu.Y);
label_A7B6:;
    /* $A7B6: BA */ nes_cpu_instruction_boundary(0xA7B6, 2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_A7B7:;
    /* $A7B7: 10 */ nes_cpu_instruction_boundary(0xA7B7, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xA7BC); return; }
label_A7B9:;
    /* $A7B9: C4 */ nes_cpu_instruction_boundary(0xA7B9, 3); { uint8_t m=nes_read(0x05); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A7BB:;
    /* $A7BB: 03 */ nes_cpu_instruction_boundary(0xA7BB, 8); { uint16_t a=nes_read16zp((0xD0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A7BD:;
    /* $A7BD: 10 */ nes_cpu_instruction_boundary(0xA7BD, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A7C2; }
label_A7BF:;
    /* $A7BF: D8 */ nes_cpu_instruction_boundary(0xA7BF, 2); g_cpu.D = 0;
label_A7C0:;
    /* $A7C0: 10 */ nes_cpu_instruction_boundary(0xA7C0, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A7C5; }
label_A7C2:;
    /* $A7C2: FD */ nes_cpu_instruction_boundary(0xA7C2, 4); { uint8_t m=nes_read((0x0551 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7C5:;
    /* $A7C5: 89 */ nes_cpu_instruction_boundary(0xA7C5, 2); /* NOP */
label_A7C7:;
    /* $A7C7: 87 */ nes_cpu_instruction_boundary(0xA7C7, 3); nes_write(0xAB, g_cpu.A & g_cpu.X); /* SAX */
label_A7C9:;
    /* $A7C9: 21 */ nes_cpu_instruction_boundary(0xA7C9, 6); g_cpu.A &= nes_read(nes_read16zp((0x06 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A7CB:;
    /* $A7CB: 23 */ nes_cpu_instruction_boundary(0xA7CB, 8); { uint16_t a=nes_read16zp((0x17 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A7CD:;
    /* $A7CD: 07 */ nes_cpu_instruction_boundary(0xA7CD, 5); { uint16_t a=0xC5; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A7CF:;
    /* $A7CF: FF */ nes_cpu_instruction_boundary(0xA7CF, 7); { uint16_t a=(0x0001 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7D2:;
    /* $A7D2: 11 */ nes_cpu_instruction_boundary(0xA7D2, 5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7D4:;
    /* $A7D4: 08 */ nes_cpu_instruction_boundary(0xA7D4, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A7D5:;
    /* $A7D5: 11 */ nes_cpu_instruction_boundary(0xA7D5, 5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7D7:;
    /* $A7D7: B0 */ nes_cpu_instruction_boundary(0xA7D7, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A7F8; }
label_A7D9:;
    /* $A7D9: 01 */ nes_cpu_instruction_boundary(0xA7D9, 6); g_cpu.A |= nes_read(nes_read16zp((0xB6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A7DB:;
    /* $A7DB: 05 */ nes_cpu_instruction_boundary(0xA7DB, 3); g_cpu.A |= nes_read(0x03); FLAG_NZ(g_cpu.A);
label_A7DD:;
    /* $A7DD: B8 */ nes_cpu_instruction_boundary(0xA7DD, 2); g_cpu.V = 0;
label_A7DE:;
    /* $A7DE: 05 */ nes_cpu_instruction_boundary(0xA7DE, 3); g_cpu.A |= nes_read(0x03); FLAG_NZ(g_cpu.A);
label_A7E0:;
    /* $A7E0: BC */ nes_cpu_instruction_boundary(0xA7E0, 4); g_cpu.Y = nes_read((0x011F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_A7E3:;
    /* $A7E3: C6 */ nes_cpu_instruction_boundary(0xA7E3, 5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A7E5:;
    /* $A7E5: 01 */ nes_cpu_instruction_boundary(0xA7E5, 6); g_cpu.A |= nes_read(nes_read16zp((0xD4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A7E7:;
    /* $A7E7: 00 */ nes_cpu_instruction_boundary(0xA7E7, 7); nes_brk_executed(0xA7E7); return;
label_A7E8:;
    /* $A7E8: 02 */ nes_cpu_instruction_boundary(0xA7E8, 2); /* ILLEGAL $02 — skip 1 */
label_A7E9:;
    /* $A7E9: FD */ nes_cpu_instruction_boundary(0xA7E9, 4); { uint8_t m=nes_read((0x0707 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7EC:;
    /* $A7EC: B7 */ nes_cpu_instruction_boundary(0xA7EC, 4); g_cpu.A = g_cpu.X = nes_read((0x47 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_A7EE:;
    /* $A7EE: 87 */ nes_cpu_instruction_boundary(0xA7EE, 3); nes_write(0xB9, g_cpu.A & g_cpu.X); /* SAX */
label_A7F0:;
    /* $A7F0: FF */ nes_cpu_instruction_boundary(0xA7F0, 7); { uint16_t a=(0x0003 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7F3:;
    /* $A7F3: 11 */ nes_cpu_instruction_boundary(0xA7F3, 5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7F5:;
    /* $A7F5: 08 */ nes_cpu_instruction_boundary(0xA7F5, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A7F6:;
    /* $A7F6: 10 */ nes_cpu_instruction_boundary(0xA7F6, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xA7FB); return; }
label_A7F8:;
    /* $A7F8: 4A */ nes_cpu_instruction_boundary(0xA7F8, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A7F9:;
    /* $A7F9: 1E */ nes_cpu_instruction_boundary(0xA7F9, 7); { uint16_t a=(0x6B03 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A7FC:;
    /* $A7FC: 1E */ nes_cpu_instruction_boundary(0xA7FC, 7); { uint16_t a=(0x8C03 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A7FF:;
    /* $A7FF: 1E */ nes_cpu_instruction_boundary(0xA7FF, 7); { uint16_t a=(0xA603 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A802:;
    /* $A802: 15 */ nes_cpu_instruction_boundary(0xA802, 4); g_cpu.A |= nes_read((0x00 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A804:;
    /* $A804: B3 */ nes_cpu_instruction_boundary(0xA804, 5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x1D) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A806:;
    /* $A806: 03 */ nes_cpu_instruction_boundary(0xA806, 8); { uint16_t a=nes_read16zp((0xB9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A808:;
    /* $A808: 1D */ nes_cpu_instruction_boundary(0xA808, 4); g_cpu.A |= nes_read((0xC303 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A80B:;
    /* $A80B: 0C */ nes_cpu_instruction_boundary(0xA80B, 4); (void)nes_read(0xC800); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A80E:;
    /* $A80E: 0C */ nes_cpu_instruction_boundary(0xA80E, 4); (void)nes_read(0xD000); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A811:;
    /* $A811: 10 */ nes_cpu_instruction_boundary(0xA811, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A816; }
label_A813:;
    /* $A813: D8 */ nes_cpu_instruction_boundary(0xA813, 2); g_cpu.D = 0;
label_A814:;
    /* $A814: 10 */ nes_cpu_instruction_boundary(0xA814, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A819; }
label_A816:;
    /* $A816: FD */ nes_cpu_instruction_boundary(0xA816, 4); { uint8_t m=nes_read((0x0541 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A819:;
    /* $A819: B4 */ nes_cpu_instruction_boundary(0xA819, 4); g_cpu.Y = nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_A81B:; /* Room18_BANK1 */
    /* $A81B: 01 */ nes_cpu_instruction_boundary(0xA81B, 6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A81D:;
    /* $A81D: 0B */ nes_cpu_instruction_boundary(0xA81D, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A81F:;
    /* $A81F: 01 */ nes_cpu_instruction_boundary(0xA81F, 6); g_cpu.A |= nes_read(nes_read16zp((0x11 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A821:;
    /* $A821: 01 */ nes_cpu_instruction_boundary(0xA821, 6); g_cpu.A |= nes_read(nes_read16zp((0x09 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A823:;
    /* $A823: 11 */ nes_cpu_instruction_boundary(0xA823, 5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A825:;
    /* $A825: 0E */ nes_cpu_instruction_boundary(0xA825, 6); { uint16_t a=0x030B; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A828:;
    /* $A828: 50 */ nes_cpu_instruction_boundary(0xA828, 2); if (!g_cpu.V) { maybe_trigger_vblank(1); call_by_address(0xA82D); return; }
label_A82A:;
    /* $A82A: 02 */ nes_cpu_instruction_boundary(0xA82A, 2); /* ILLEGAL $02 — skip 1 */
label_A82B:;
    /* $A82B: 5F */ nes_cpu_instruction_boundary(0xA82B, 7); { uint16_t a=(0x0203 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A82E:;
    /* $A82E: 64 */ nes_cpu_instruction_boundary(0xA82E, 3); (void)nes_read(0x0D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A830:;
    /* $A830: 03 */ nes_cpu_instruction_boundary(0xA830, 8); { uint16_t a=nes_read16zp((0x66 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A832:;
    /* $A832: 20 */ nes_cpu_instruction_boundary(0xA832, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x34; g_cpu.S--; func_8001_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA832, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A835:;
    /* $A835: 1F */ nes_cpu_instruction_boundary(0xA835, 7); { uint16_t a=(0x8401 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A838:;
    /* $A838: 20 */ nes_cpu_instruction_boundary(0xA838, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3A; g_cpu.S--; func_8801_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA838, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A83B:;
    /* $A83B: 20 */ nes_cpu_instruction_boundary(0xA83B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3D; g_cpu.S--; func_8C01_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA83B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A83E:;
    /* $A83E: 1E */ nes_cpu_instruction_boundary(0xA83E, 7); { uint16_t a=(0xA603 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A841:;
    /* $A841: 20 */ nes_cpu_instruction_boundary(0xA841, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x43; g_cpu.S--; func_B001_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA841, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A844:;
    /* $A844: 0B */ nes_cpu_instruction_boundary(0xA844, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A846:;
    /* $A846: BE */ nes_cpu_instruction_boundary(0xA846, 4); g_cpu.X = nes_read((0x030B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_A849:;
    /* $A849: E6 */ nes_cpu_instruction_boundary(0xA849, 5); { uint16_t a=0x20; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A84B:;
    /* $A84B: 01 */ nes_cpu_instruction_boundary(0xA84B, 6); g_cpu.A |= nes_read(nes_read16zp((0xFD + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A84D:;
    /* $A84D: 02 */ nes_cpu_instruction_boundary(0xA84D, 2); /* ILLEGAL $02 — skip 1 */
label_A84E:;
    /* $A84E: A1 */ nes_cpu_instruction_boundary(0xA84E, 6); g_cpu.A = nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A850:;
    /* $A850: B1 */ nes_cpu_instruction_boundary(0xA850, 5); g_cpu.A = nes_read((nes_read16zp(0x31) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A852:;
    /* $A852: 05 */ nes_cpu_instruction_boundary(0xA852, 3); g_cpu.A |= nes_read(0x56); FLAG_NZ(g_cpu.A);
label_A854:;
    /* $A854: 01 */ nes_cpu_instruction_boundary(0xA854, 6); g_cpu.A |= nes_read(nes_read16zp((0x85 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A856:;
    /* $A856: 5A */ nes_cpu_instruction_boundary(0xA856, 2); /* NOP */
label_A857:;
    /* $A857: 21 */ nes_cpu_instruction_boundary(0xA857, 6); g_cpu.A &= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A859:;
    /* $A859: D9 */ nes_cpu_instruction_boundary(0xA859, 4); { uint8_t m=nes_read((0x01FF + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A85C:;
    /* $A85C: 00 */ nes_cpu_instruction_boundary(0xA85C, 7); nes_brk_executed(0xA85C); return;
label_A85D:; return;
label_A85F:; return;
label_A861:; return;
label_A863:; return;
label_A866:; return;
label_A868:; return;
label_A869:; return;
label_A86B:; return;
label_A86D:; return;
label_A86F:; return;
label_A872:; return;
label_A875:; return;
label_A878:; return;
label_A87B:; return;
label_A87E:; return;
label_A880:; return;
label_A883:; return;
label_A885:; return;
label_A887:; return;
label_A889:; return;
label_A88C:; return;
label_A88D:; return;
label_A88E:; return;
label_A88F:; return;
label_A891:; return;
label_A892:; return;
label_A894:; return;
label_A895:; return;
label_A897:; return;
label_A898:; return;
label_A89A:; return;
label_A89B:; return;
label_A89D:; return;
label_A89E:; return;
label_A8A0:; return;
label_A8A1:; return;
label_A8A3:; return;
label_A8A4:; return;
label_A8A5:; return;
label_A8A8:; return;
label_A8A9:; return;
label_A8AB:; return;
label_A8AD:; return;
label_A8AF:; return;
label_A8B0:; return;
label_A8B3:; return;
label_A8B5:; return;
label_A8B7:; return;
label_A8B8:; return;
label_A8B9:; return;
label_A8BB:; return;
label_A8BC:; return;
label_A8BE:; return;
label_A8C0:; return;
label_A8C2:; return;
label_A8C4:; return;
label_A8C6:; return;
label_A8C7:; return;
label_A8C8:; return;
label_A8CA:; return;
label_A8CD:; return;
label_A8CF:; return;
label_A8D1:; return;
label_A8D3:; return;
label_A8D5:; return;
label_A8D7:; return;
label_A8D8:; return;
label_A8D9:; return;
label_A8DB:; return;
label_A8DC:; return;
label_A8DF:; return;
label_A8E0:; return;
label_A8E2:; return;
label_A8E4:; return;
label_A8E6:; return;
label_A8E9:; return;
label_A8EB:; return;
label_A8ED:; return;
label_A8EF:; return;
label_A8F2:; return;
label_A8F4:; return;
label_A8F6:; return;
label_A8F8:; return;
label_A8FB:; return;
label_A8FD:; return;
label_A8FE:; return;
label_A900:; return;
label_A903:; return;
label_A905:; return;
label_A906:; return;
label_A908:; return;
label_A909:; return;
label_A90B:; return;
label_A90C:; return;
label_A90F:; return;
label_A912:; return;
label_A915:; return;
label_A918:; return;
label_A91B:; return;
label_A91E:; return;
label_A921:; return;
label_A924:; return;
label_A927:; return;
label_A929:; return;
label_A92A:; return;
label_A92D:; return;
label_A930:; return;
label_A931:; return;
label_A933:; return;
label_A935:; return;
label_A936:; return;
label_A939:; return;
label_A93C:; return;
label_A93D:; return;
label_A93F:; return;
label_A941:; return;
label_A942:; return;
label_A945:; return;
label_A947:; return;
label_A94A:; return;
label_A94C:; return;
label_A94E:; return;
label_A950:; return;
label_A952:; return;
label_A954:; return;
label_A957:; return;
label_A959:; return;
label_A95C:; return;
label_A95E:; return;
label_A95F:; return;
label_A962:; return;
label_A963:; return;
label_A965:; return;
label_A966:; return;
label_A967:; return;
label_A969:; return;
label_A96A:; return;
label_A96D:; return;
label_A96F:; return;
label_A970:; return;
label_A972:; return;
label_A974:; return;
label_A976:; return;
label_A978:; return;
label_A97A:; return;
label_A97C:; return;
label_A97E:; return;
label_A980:; return;
label_A982:; return;
label_A984:; return;
label_A985:; return;
label_A988:; return;
label_A989:; return;
label_A98B:; return;
label_A98C:; return;
label_A98E:; return;
label_A98F:; return;
label_A992:; return;
label_A995:; return;
label_A997:; return;
label_A999:; return;
label_A99B:; return;
label_A99C:; return;
label_A99E:; return;
label_A9A1:; return;
label_A9A4:; return;
label_A9A7:; return;
label_A9AA:; return;
label_A9AB:; return;
label_A9AD:; return;
label_A9AF:; return;
label_A9B1:; return;
label_A9B4:; return;
label_A9B7:; return;
label_A9B8:; return;
label_A9BA:; return;
label_A9BB:; return;
label_A9BD:; return;
label_A9BE:; return;
label_A9C0:; return;
label_A9C2:; return;
label_A9C4:; return;
label_A9C6:; return;
label_A9C8:; return;
label_A9CB:; return;
label_A9CE:; return;
label_A9D1:; return;
label_A9D4:; return;
label_A9D6:; return;
label_A9D8:; return;
label_A9DA:; return;
label_A9DC:; return;
label_A9DF:; return;
label_A9E1:; return;
label_A9E3:; return;
label_A9E5:; return;
label_A9E6:; return;
label_A9E7:; return;
label_A9E8:; return;
label_A9EB:; return;
label_A9ED:; return;
label_A9EF:; return;
label_A9F1:; return;
label_A9F2:; return;
label_A9F4:; return;
label_A9F5:; return;
label_A9F8:; return;
label_A9FB:; return;
label_A9FE:; return;
label_AA01:; return;
label_AA03:; return;
label_AA04:; return;
label_AA05:; return;
label_AA07:; return;
label_AA08:; return;
label_AA0A:; return;
label_AA0D:; return;
label_AA10:; return;
label_AA12:; return;
label_AA14:; return;
label_AA16:; return;
label_AA19:; return;
label_AA1B:; return;
label_AA1D:; return;
label_AA1F:; return;
label_AA22:; return;
label_AA24:; return;
label_AA25:; return;
label_AA27:; return;
label_AA29:; return;
label_AA2B:; return;
label_AA2C:; return;
label_AA2D:; return;
label_AA2F:; return;
label_AA31:; return;
label_AA32:; return;
label_AA33:; return;
label_AA35:; return;
label_AA37:; return;
label_AA39:; return;
label_AA3B:; return;
label_AA3D:; return;
label_AA3E:; return;
label_AA3F:; return;
label_AA42:; return;
label_AA45:; return;
label_AA48:; return;
label_AA4A:; return;
label_AA4C:; return;
label_AA4E:; return;
label_AA51:; return;
label_AA54:; return;
label_AA55:; return;
label_AA58:; return;
label_AA5B:; return;
label_AA5E:; return;
label_AA60:; return;
label_AA61:; return;
label_AA63:; return;
label_AA65:; return;
label_AA67:; return;
label_AA6A:; return;
label_AA6D:; return;
label_AA70:; return;
label_AA72:; return;
label_AA73:; return;
label_AA75:; return;
label_AA77:; return;
label_AA79:; return;
label_AA7B:; return;
label_AA7D:; return;
label_AA7E:; return;
label_AA7F:; return;
label_AA81:; return;
label_AA83:; return;
label_AA85:; return;
label_AA87:; return;
label_AA89:; return;
label_AA8A:; return;
label_AA8B:; return;
label_AA8D:; return;
label_AA8F:; return;
label_AA91:; return;
label_AA94:; return;
label_AA96:; return;
label_AA99:; return;
label_AA9D:; return;
label_AA9F:; return;
label_AAA2:; return;
label_AAA4:; return;
label_AAA5:; return;
label_AAA6:; return;
label_AAA8:; return;
label_AAAA:; return;
label_AAAC:; return;
label_AAAF:; return;
label_AAB1:; return;
label_AAB2:; return;
label_AAB4:; return;
label_AAB5:; return;
label_AAB7:; return;
label_AABA:; return;
label_AABB:; return;
label_AABE:; return;
label_AAC0:; return;
label_AAC3:; return;
label_AAC5:; return;
label_AAC6:; return;
label_AAC8:; return;
label_AAC9:; return;
label_AACB:; return;
label_AACD:; return;
label_AAD0:; return;
label_AAD2:; return;
label_AAD4:; return;
label_AAD6:; return;
label_AAD9:; return;
label_AADB:; return;
label_AADE:; return;
label_AAE1:; return;
label_AAE4:; return;
label_AAE5:; return;
label_AAE8:; return;
label_AAEB:; return;
label_AAED:; return;
label_AAEE:; return;
label_AAF0:; return;
label_AAF2:; return;
label_AAF4:; return;
label_AAF7:; return;
label_AAF9:; return;
label_AAFA:; return;
label_AAFD:; return;
label_AAFF:; return;
label_AB01:; return;
label_AB03:; return;
label_AB04:; return;
label_AB05:; return;
label_AB06:; return;
label_AB07:; return;
label_AB08:; return;
label_AB0B:; return;
label_AB0D:; return;
label_AB0F:; return;
label_AB11:; return;
label_AB14:; return;
label_AB16:; return;
label_AB17:; return;
label_AB19:; return;
label_AB1B:; return;
label_AB1D:; return;
label_AB1E:; return;
label_AB20:; return;
label_AB22:; return;
label_AB24:; return;
label_AB26:; return;
label_AB28:; return;
label_AB2A:; return;
label_AB2D:; return;
label_AB30:; return;
label_AB33:; return;
label_AB35:; return;
label_AB36:; return;
label_AB39:; return;
label_AB3B:; return;
label_AB3C:; return;
label_AB3E:; return;
label_AB41:; return;
label_AB43:; return;
label_AB44:; return;
label_AB46:; return;
label_AB48:; return;
label_AB49:; return;
label_AB4A:; return;
label_AB4D:; return;
label_AB50:; return;
label_AB51:; return;
label_AB52:; return;
label_AB55:; return;
label_AB57:; return;
label_AB58:; return;
label_AB5B:; return;
label_AB5C:; return;
label_AB5E:; return;
label_AB60:; return;
label_AB62:; return;
label_AB65:; return;
label_AB68:; return;
label_AB69:; return;
label_AB6B:; return;
label_AB6D:; return;
label_AB6F:; return;
label_AB72:; return;
label_AB73:; return;
label_AB76:; return;
label_AB79:; return;
label_AB7B:; return;
label_AB7D:; return;
label_AB7F:; return;
label_AB81:; return;
label_AB83:; return;
label_AB84:; return;
label_AB85:; return;
label_AB88:; return;
label_AB8A:; return;
label_AB8C:; return;
label_AB8E:; return;
label_AB90:; return;
label_AB92:; return;
label_AB93:; return;
label_AB94:; return;
label_AB96:; return;
label_AB97:; return;
label_AB99:; return;
label_AB9A:; return;
label_AB9C:; return;
label_AB9D:; return;
label_AB9F:; return;
label_ABA1:; return;
label_ABA2:; return;
label_ABA4:; return;
label_ABA6:; return;
label_ABA8:; return;
label_ABAB:; return;
label_ABAD:; return;
label_ABAF:; return;
label_ABB0:; return;
label_ABB1:; return;
label_ABB3:; return;
label_ABB4:; return;
label_ABB7:; return;
label_ABB8:; return;
label_ABBA:; return;
label_ABBC:; return;
label_ABBE:; return;
label_ABC1:; return;
label_ABC3:; return;
label_ABC5:; return;
label_ABC6:; return;
label_ABC7:; return;
label_ABC9:; return;
label_ABCB:; return;
label_ABCC:; return;
label_ABCE:; return;
label_ABCF:; return;
label_ABD0:; return;
label_ABD3:; return;
label_ABD5:; return;
label_ABD7:; return;
label_ABD8:; return;
label_ABDA:; return;
label_ABDB:; return;
label_ABDE:; return;
label_ABE1:; return;
label_ABE3:; return;
label_ABE4:; return;
label_ABE6:; return;
label_ABE7:; return;
label_ABE9:; return;
label_ABEA:; return;
label_ABEC:; return;
label_ABED:; return;
label_ABEF:; return;
label_ABF0:; return;
label_ABF2:; return;
label_ABF3:; return;
label_ABF5:; return;
label_ABF6:; return;
label_ABF9:; return;
label_ABFB:; return;
label_ABFC:; return;
label_ABFE:; return;
label_ABFF:; return;
label_AC00:; return;
label_AC03:; return;
label_AC05:; return;
label_AC07:; return;
label_AC08:; return;
label_AC0B:; return;
label_AC0E:; return;
label_AC11:; return;
label_AC13:; return;
label_AC14:; return;
label_AC16:; return;
label_AC17:; return;
label_AC19:; return;
label_AC1A:; return;
label_AC1D:; return;
label_AC20:; return;
label_AC21:; return;
label_AC23:; return;
label_AC26:; return;
label_AC28:; return;
label_AC2A:; return;
label_AC2B:; return;
label_AC2E:; return;
label_AC31:; return;
label_AC34:; return;
label_AC35:; return;
label_AC37:; return;
label_AC3A:; return;
label_AC3C:; return;
label_AC3D:; return;
label_AC3F:; return;
label_AC40:; return;
label_AC42:; return;
label_AC43:; return;
label_AC45:; return;
label_AC46:; return;
label_AC49:; return;
label_AC4C:; return;
label_AC4F:; return;
label_AC51:; return;
label_AC52:; return;
label_AC54:; return;
label_AC57:; return;
label_AC5A:; return;
label_AC5C:; return;
label_AC5E:; return;
label_AC60:; return;
label_AC62:; return;
label_AC64:; return;
label_AC66:; return;
label_AC69:; return;
label_AC6C:; return;
label_AC6E:; return;
label_AC71:; return;
label_AC73:; return;
label_AC74:; return;
label_AC77:; return;
label_AC79:; return;
label_AC7B:; return;
label_AC7D:; return;
label_AC7F:; return;
label_AC81:; return;
label_AC82:; return;
label_AC84:; return;
label_AC85:; return;
label_AC87:; return;
label_AC89:; return;
label_AC8B:; return;
label_AC8D:; return;
label_AC8E:; return;
label_AC8F:; return;
label_AC90:; return;
label_AC91:; return;
label_AC92:; return;
label_AC93:; return;
label_AC94:; return;
label_AC95:; return;
label_AC96:; return;
label_AC99:; return;
label_AC9A:; return;
label_AC9B:; return;
label_AC9C:; return;
label_AC9D:; return;
label_AC9E:; return;
label_AC9F:; return;
label_ACA0:; return;
label_ACA2:; return;
label_ACA4:; return;
label_ACA6:; return;
label_ACA7:; return;
label_ACA8:; return;
label_ACA9:; return;
label_ACAA:; return;
label_ACAB:; return;
label_ACAC:; return;
label_ACAD:; return;
label_ACAE:; return;
label_ACAF:; return;
label_ACB2:; return;
label_ACB4:; return;
label_ACB6:; return;
label_ACB7:; return;
label_ACB9:; return;
label_ACBA:; return;
label_ACBC:; return;
label_ACBD:; return;
label_ACBF:; return;
label_ACC0:; return;
label_ACC2:; return;
label_ACC3:; return;
label_ACC5:; return;
label_ACC6:; return;
label_ACC8:; return;
label_ACCB:; return;
label_ACCD:; return;
label_ACCF:; return;
label_ACD2:; return;
label_ACD4:; return;
label_ACD6:; return;
label_ACD9:; return;
label_ACDA:; return;
label_ACDD:; return;
label_ACDF:; return;
label_ACE1:; return;
label_ACE3:; return;
label_ACE5:; return;
label_ACE8:; return;
label_ACEA:; return;
label_ACEC:; return;
label_ACEE:; return;
label_ACF0:; return;
label_ACF2:; return;
label_ACF5:; return;
label_ACF7:; return;
label_ACFA:; return;
label_ACFC:; return;
label_ACFE:; return;
label_AD01:; return;
label_AD03:; return;
label_AD04:; return;
label_AD07:; return;
label_AD09:; return;
label_AD0C:; return;
label_AD0E:; return;
label_AD11:; return;
label_AD12:; return;
label_AD14:; return;
label_AD16:; return;
label_AD17:; return;
label_AD18:; return;
label_AD19:; return;
label_AD1C:; return;
label_AD1F:; return;
label_AD20:; return;
label_AD23:; return;
label_AD24:; return;
label_AD26:; return;
label_AD27:; return;
label_AD2A:; return;
label_AD2D:; return;
label_AD30:; return;
label_AD33:; return;
label_AD36:; return;
label_AD39:; return;
label_AD3C:; return;
label_AD3F:; return;
label_AD42:; return;
label_AD45:; return;
label_AD48:; return;
label_AD4B:; return;
label_AD4E:; return;
label_AD51:; return;
label_AD54:; return;
label_AD57:; return;
label_AD58:; return;
label_AD59:; return;
label_AD5B:; return;
label_AD5D:; return;
label_AD5E:; return;
label_AD60:; return;
label_AD61:; return;
label_AD62:; return;
label_AD63:; return;
label_AD66:; return;
label_AD67:; return;
label_AD6A:; return;
label_AD6B:; return;
label_AD6E:; return;
label_AD6F:; return;
label_AD70:; return;
label_AD71:; return;
label_AD72:; return;
label_AD75:; return;
label_AD76:; return;
label_AD78:; return;
label_AD79:; return;
label_AD7A:; return;
label_AD7B:; return;
label_AD7C:; return;
label_AD7E:; return;
label_AD81:; return;
label_AD84:; return;
label_AD86:; return;
label_AD88:; return;
label_AD8B:; return;
label_AD8D:; return;
label_AD90:; return;
label_AD92:; return;
label_AD94:; return;
label_AD96:; return;
label_AD98:; return;
label_AD99:; return;
label_AD9A:; return;
label_AD9B:; return;
label_AD9C:; return;
label_AD9D:; return;
label_AD9E:; return;
label_AD9F:; return;
label_ADA0:; return;
label_ADA1:; return;
label_ADA4:; return;
label_ADA6:; return;
label_ADA8:; return;
label_ADAA:; return;
label_ADAC:; return;
label_ADAF:; return;
label_ADB2:; return;
label_ADB5:; return;
label_ADB7:; return;
label_ADB8:; return;
label_ADBB:; return;
label_ADBC:; return;
label_ADBF:; return;
label_ADC2:; return;
label_ADC5:; return;
label_ADC8:; return;
label_ADCB:; return;
label_ADCE:; return;
label_ADD1:; return;
label_ADD4:; return;
label_ADD7:; return;
label_ADDA:; return;
label_ADDD:; return;
label_ADE0:; return;
label_ADE3:; return;
label_ADE5:; return;
label_ADE8:; return;
label_ADEB:; return;
label_ADEE:; return;
label_ADF1:; return;
label_ADF4:; return;
label_ADF7:; return;
label_ADFA:; return;
label_ADFD:; return;
label_AE00:; return;
label_AE03:; return;
label_AE05:; return;
label_AE08:; return;
label_AE0B:; return;
label_AE0E:; return;
label_AE11:; return;
label_AE14:; return;
label_AE17:; return;
label_AE1A:; return;
label_AE1C:; return;
label_AE1D:; return;
label_AE1F:; return;
label_AE22:; return;
label_AE24:; return;
label_AE25:; return;
label_AE26:; return;
label_AE27:; return;
label_AE29:; return;
label_AE2A:; return;
label_AE2D:; return;
label_AE2F:; return;
label_AE32:; return;
label_AE34:; return;
label_AE37:; return;
label_AE39:; return;
label_AE3C:; return;
label_AE3E:; return;
label_AE41:; return;
label_AE44:; return;
label_AE46:; return;
label_AE48:; return;
label_AE4A:; return;
label_AE4D:; return;
label_AE50:; return;
label_AE52:; return;
label_AE55:; return;
label_AE58:; return;
label_AE59:; return;
label_AE5A:; return;
label_AE5B:; return;
label_AE5C:; return;
label_AE5F:; return;
label_AE61:; return;
label_AE64:; return;
label_AE67:; return;
label_AE69:; return;
label_AE6B:; return;
label_AE6D:; return;
label_AE6F:; return;
label_AE72:; return;
label_AE75:; return;
label_AE77:; return;
label_AE7A:; return;
label_AE7C:; return;
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
label_AE9F:; return;
label_AEA2:; return;
label_AEA5:; return;
label_AEA7:; return;
label_AEA9:; return;
label_AEAB:; return;
label_AEAD:; return;
label_AEAF:; return;
label_AEB2:; return;
label_AEB5:; return;
label_AEB6:; return;
label_AEB9:; return;
label_AEBC:; return;
label_AEBD:; return;
label_AEC0:; return;
label_AEC2:; return;
label_AEC4:; return;
label_AEC6:; return;
label_AEC8:; return;
label_AECA:; return;
label_AECD:; return;
label_AED0:; return;
label_AED3:; return;
label_AED6:; return;
label_AED9:; return;
label_AEDC:; return;
label_AEDF:; return;
label_AEE2:; return;
label_AEE5:; return;
label_AEE7:; return;
label_AEE9:; return;
label_AEEB:; return;
label_AEED:; return;
label_AEEF:; return;
label_AEF2:; return;
label_AEF4:; return;
label_AEF7:; return;
label_AEF9:; return;
label_AEFB:; return;
label_AEFD:; return;
label_AEFF:; return;
label_AF02:; return;
label_AF04:; return;
label_AF07:; return;
label_AF09:; return;
label_AF0B:; return;
label_AF0D:; return;
label_AF0F:; return;
label_AF11:; return;
label_AF13:; return;
label_AF15:; return;
label_AF16:; return;
label_AF19:; return;
label_AF1A:; return;
label_AF1B:; return;
label_AF1E:; return;
label_AF1F:; return;
label_AF21:; return;
label_AF24:; return;
label_AF25:; return;
label_AF27:; return;
label_AF2A:; return;
label_AF2D:; return;
label_AF2F:; return;
label_AF31:; return;
label_AF34:; return;
label_AF37:; return;
label_AF38:; return;
label_AF3A:; return;
label_AF3C:; return;
label_AF3D:; return;
label_AF40:; return;
label_AF43:; return;
label_AF44:; return;
label_AF47:; return;
label_AF49:; return;
label_AF4B:; return;
label_AF4D:; return;
label_AF4F:; return;
label_AF51:; return;
label_AF53:; return;
label_AF54:; return;
label_AF55:; return;
label_AF58:; return;
label_AF59:; return;
label_AF5B:; return;
label_AF5C:; return;
label_AF5E:; return;
label_AF5F:; return;
label_AF60:; return;
label_AF62:; return;
label_AF65:; return;
label_AF66:; return;
label_AF68:; return;
label_AF6A:; return;
label_AF6C:; return;
label_AF6F:; return;
label_AF72:; return;
label_AF75:; return;
label_AF78:; return;
label_AF79:; return;
label_AF7B:; return;
label_AF7D:; return;
label_AF7F:; return;
label_AF81:; return;
label_AF84:; return;
label_AF87:; return;
label_AF8A:; return;
label_AF8D:; return;
label_AF90:; return;
label_AF93:; return;
label_AF96:; return;
label_AF97:; return;
label_AF99:; return;
label_AF9B:; return;
label_AF9D:; return;
label_AF9E:; return;
label_AFA1:; return;
label_AFA4:; return;
label_AFA7:; return;
label_AFAA:; return;
label_AFAC:; return;
label_AFAE:; return;
label_AFB0:; return;
label_AFB3:; return;
label_AFB6:; return;
label_AFB9:; return;
label_AFBC:; return;
label_AFBE:; return;
label_AFC0:; return;
label_AFC2:; return;
label_AFC4:; return;
label_AFC6:; return;
label_AFC8:; return;
label_AFC9:; return;
label_AFCB:; return;
label_AFCD:; return;
label_AFCE:; return;
label_AFCF:; return;
label_AFD0:; return;
label_AFD2:; return;
label_AFD5:; return;
label_AFD7:; return;
label_AFD9:; return;
label_AFDB:; return;
label_AFDD:; return;
label_AFDF:; return;
label_AFE2:; return;
label_AFE5:; return;
label_AFE6:; return;
label_AFE9:; return;
label_AFEC:; return;
label_AFEE:; return;
label_AFF0:; return;
label_AFF2:; return;
label_AFF3:; return;
label_AFF5:; return;
label_AFF8:; return;
label_AFFA:; return;
label_AFFC:; return;
label_AFFE:; return;
label_B000:; return;
label_B002:; return;
label_B005:; return;
label_B007:; return;
label_B00A:; return;
label_B00B:; return;
label_B00E:; return;
label_B010:; return;
label_B012:; return;
label_B014:; return;
label_B017:; return;
label_B019:; return;
label_B01A:; return;
label_B01C:; return;
label_B01E:; return;
label_B01F:; return;
label_B020:; return;
label_B021:; return;
label_B023:; return;
label_B026:; return;
label_B028:; return;
label_B02A:; return;
label_B02C:; return;
label_B02D:; return;
label_B02F:; return;
label_B030:; return;
label_B033:; return;
label_B034:; return;
label_B035:; return;
label_B038:; return;
label_B03B:; return;
label_B03C:; return;
label_B03E:; return;
label_B03F:; return;
label_B041:; return;
label_B042:; return;
label_B044:; return;
label_B045:; return;
label_B048:; return;
label_B04B:; return;
label_B04E:; return;
label_B04F:; return;
label_B051:; return;
label_B053:; return;
label_B055:; return;
label_B057:; return;
label_B059:; return;
label_B05C:; return;
label_B05E:; return;
label_B05F:; return;
label_B062:; return;
label_B064:; return;
label_B065:; return;
label_B067:; return;
label_B069:; return;
label_B06B:; return;
label_B06D:; return;
label_B06F:; return;
label_B071:; return;
label_B073:; return;
label_B076:; return;
label_B078:; return;
label_B07A:; return;
label_B07B:; return;
label_B07E:; return;
label_B081:; return;
label_B082:; return;
label_B083:; return;
label_B086:; return;
label_B088:; return;
label_B08A:; return;
label_B08B:; return;
label_B08E:; return;
label_B090:; return;
label_B091:; return;
label_B094:; return;
label_B095:; return;
label_B097:; return;
label_B098:; return;
label_B099:; return;
label_B09C:; return;
label_B09F:; return;
label_B0A2:; return;
label_B0A3:; return;
label_B0A5:; return;
label_B0A6:; return;
label_B0A7:; return;
label_B0AA:; return;
label_B0AB:; return;
label_B0AD:; return;
label_B0AF:; return;
label_B0B1:; return;
label_B0B2:; return;
label_B0B5:; return;
label_B0B6:; return;
label_B0B8:; return;
label_B0B9:; return;
label_B0BB:; return;
label_B0BD:; return;
label_B0BE:; return;
label_B0C0:; return;
label_B0C2:; return;
label_B0C4:; return;
label_B0C7:; return;
label_B0C9:; return;
label_B0CB:; return;
label_B0CD:; return;
label_B0CF:; return;
label_B0D1:; return;
label_B0D3:; return;
label_B0D6:; return;
label_B0D7:; return;
label_B0DA:; return;
label_B0DD:; return;
label_B0E0:; return;
label_B0E1:; return;
label_B0E3:; return;
label_B0E5:; return;
label_B0E7:; return;
label_B0E9:; return;
label_B0EA:; return;
label_B0EC:; return;
label_B0ED:; return;
label_B0EE:; return;
label_B0F1:; return;
label_B0F4:; return;
label_B0F5:; return;
label_B0F8:; return;
label_B0FB:; return;
label_B0FE:; return;
label_B101:; return;
label_B104:; return;
label_B107:; return;
label_B10A:; return;
label_B10C:; return;
label_B10E:; return;
label_B111:; return;
label_B113:; return;
label_B114:; return;
label_B117:; return;
label_B118:; return;
label_B119:; return;
label_B11B:; return;
label_B11D:; return;
label_B11E:; return;
label_B11F:; return;
label_B122:; return;
label_B124:; return;
label_B125:; return;
label_B126:; return;
label_B127:; return;
label_B12A:; return;
label_B12D:; return;
label_B12F:; return;
label_B131:; return;
label_B133:; return;
label_B135:; return;
label_B137:; return;
label_B139:; return;
label_B13A:; return;
label_B13B:; return;
label_B13C:; return;
label_B13D:; return;
label_B13E:; return;
label_B13F:; return;
label_B140:; return;
label_B142:; return;
label_B143:; return;
label_B144:; return;
label_B146:; return;
label_B147:; return;
label_B149:; return;
label_B14A:; return;
label_B14B:; return;
label_B14D:; return;
label_B14F:; return;
label_B151:; return;
label_B154:; return;
label_B156:; return;
label_B158:; return;
label_B159:; return;
label_B15A:; return;
label_B15B:; return;
label_B15C:; return;
label_B15D:; return;
label_B15F:; return;
label_B161:; return;
label_B162:; return;
label_B163:; return;
label_B164:; return;
label_B166:; return;
label_B167:; return;
label_B16A:; return;
label_B16B:; return;
label_B16C:; return;
label_B16D:; return;
label_B16E:; return;
label_B16F:; return;
label_B170:; return;
label_B172:; return;
label_B174:; return;
label_B176:; return;
label_B178:; return;
label_B179:; return;
label_B17A:; return;
label_B17B:; return;
label_B17C:; return;
label_B17D:; return;
label_B17E:; return;
label_B17F:; return;
label_B181:; return;
label_B183:; return;
label_B185:; return;
label_B188:; return;
label_B189:; return;
label_B18B:; return;
label_B18C:; return;
label_B18E:; return;
label_B190:; return;
label_B192:; return;
label_B195:; return;
label_B198:; return;
label_B19A:; return;
label_B19C:; return;
label_B19E:; return;
label_B1A0:; return;
label_B1A2:; return;
label_B1A5:; return;
label_B1A7:; return;
label_B1A9:; return;
label_B1AC:; return;
label_B1AE:; return;
label_B1B0:; return;
label_B1B3:; return;
label_B1B6:; return;
label_B1B9:; return;
label_B1BA:; return;
label_B1BB:; return;
label_B1BC:; return;
label_B1BD:; return;
label_B1BE:; return;
label_B1BF:; return;
label_B1C1:; return;
label_B1C3:; return;
label_B1C5:; return;
label_B1C7:; return;
label_B1C9:; return;
label_B1CA:; return;
label_B1CB:; return;
label_B1CC:; return;
label_B1CD:; return;
label_B1CE:; return;
label_B1CF:; return;
label_B1D0:; return;
label_B1D2:; return;
label_B1D3:; return;
label_B1D4:; return;
label_B1D5:; return;
label_B1D6:; return;
label_B1D7:; return;
label_B1D8:; return;
label_B1DA:; return;
label_B1DC:; return;
label_B1E0:; return;
label_B1E2:; return;
label_B1E4:; return;
label_B1E7:; return;
label_B1E8:; return;
label_B1E9:; return;
label_B1EB:; return;
label_B1ED:; return;
label_B1EF:; return;
label_B1F1:; return;
label_B1F3:; return;
label_B1F6:; return;
label_B1F7:; return;
label_B1F9:; return;
label_B1FA:; return;
label_B1FB:; return;
label_B1FD:; return;
label_B1FE:; return;
label_B1FF:; return;
label_B200:; return;
label_B201:; return;
label_B203:; return;
label_B204:; return;
label_B205:; return;
label_B207:; return;
label_B209:; return;
label_B20A:; return;
label_B20B:; return;
label_B20D:; return;
label_B20F:; return;
label_B211:; return;
label_B213:; return;
label_B214:; return;
label_B216:; return;
label_B219:; return;
label_B21C:; return;
label_B21D:; return;
label_B21F:; return;
label_B221:; return;
label_B223:; return;
label_B226:; return;
label_B228:; return;
label_B22B:; return;
label_B22D:; return;
label_B22F:; return;
label_B232:; return;
label_B235:; return;
label_B237:; return;
label_B239:; return;
label_B23B:; return;
label_B23D:; return;
label_B23F:; return;
label_B241:; return;
label_B243:; return;
label_B246:; return;
label_B249:; return;
label_B24B:; return;
label_B24C:; return;
label_B24D:; return;
label_B24F:; return;
label_B250:; return;
label_B251:; return;
label_B253:; return;
label_B254:; return;
label_B257:; return;
label_B25A:; return;
label_B25D:; return;
label_B260:; return;
label_B261:; return;
label_B262:; return;
label_B265:; return;
label_B267:; return;
label_B268:; return;
label_B269:; return;
label_B26B:; return;
label_B26D:; return;
label_B270:; return;
label_B273:; return;
label_B276:; return;
label_B279:; return;
label_B27B:; return;
label_B27D:; return;
label_B27F:; return;
label_B280:; return;
label_B281:; return;
label_B283:; return;
label_B285:; return;
label_B288:; return;
label_B289:; return;
label_B28C:; return;
label_B28E:; return;
label_B290:; return;
label_B293:; return;
label_B296:; return;
label_B298:; return;
label_B29A:; return;
label_B29D:; return;
label_B2A0:; return;
label_B2A2:; return;
label_B2A4:; return;
label_B2A7:; return;
label_B2A9:; return;
label_B2AC:; return;
label_B2AE:; return;
label_B2B0:; return;
label_B2B2:; return;
label_B2B5:; return;
label_B2B6:; return;
label_B2B8:; return;
label_B2BB:; return;
label_B2BE:; return;
label_B2C0:; return;
label_B2C2:; return;
label_B2C4:; return;
label_B2C6:; return;
label_B2C8:; return;
label_B2CA:; return;
label_B2CC:; return;
label_B2CE:; return;
label_B2D0:; return;
label_B2D2:; return;
label_B2D4:; return;
label_B2D6:; return;
label_B2D8:; return;
label_B2DA:; return;
label_B2DC:; return;
label_B2DE:; return;
label_B2E0:; return;
label_B2E2:; return;
label_B2E4:; return;
label_B2E6:; return;
label_B2E8:; return;
label_B2EA:; return;
label_B2EC:; return;
label_B2EE:; return;
label_B2F0:; return;
label_B2F2:; return;
label_B2F4:; return;
label_B2F6:; return;
label_B2F8:; return;
label_B2FA:; return;
label_B2FC:; return;
label_B2FD:; return;
label_B300:; return;
label_B301:; return;
label_B303:; return;
label_B306:; return;
label_B308:; return;
label_B309:; return;
label_B30A:; return;
label_B30B:; return;
label_B30E:; return;
label_B310:; return;
label_B311:; return;
label_B312:; return;
label_B315:; return;
label_B318:; return;
label_B319:; return;
label_B31C:; return;
label_B31E:; return;
label_B320:; return;
label_B322:; return;
label_B325:; return;
label_B327:; return;
label_B329:; return;
label_B32C:; return;
label_B32E:; return;
label_B330:; return;
label_B333:; return;
label_B335:; return;
label_B337:; return;
label_B33A:; return;
label_B33D:; return;
label_B340:; return;
label_B342:; return;
label_B344:; return;
label_B347:; return;
label_B349:; return;
label_B34B:; return;
label_B34E:; return;
label_B350:; return;
label_B353:; return;
label_B356:; return;
label_B359:; return;
label_B35C:; return;
label_B35F:; return;
label_B361:; return;
label_B364:; return;
label_B367:; return;
label_B368:; return;
label_B36A:; return;
label_B36C:; return;
label_B36E:; return;
label_B370:; return;
label_B372:; return;
label_B374:; return;
label_B376:; return;
label_B378:; return;
label_B37A:; return;
label_B37C:; return;
label_B37E:; return;
label_B380:; return;
label_B382:; return;
label_B384:; return;
label_B386:; return;
label_B388:; return;
label_B389:; return;
label_B38A:; return;
label_B38C:; return;
label_B38E:; return;
label_B38F:; return;
label_B392:; return;
label_B395:; return;
label_B398:; return;
label_B399:; return;
label_B39C:; return;
label_B39E:; return;
label_B3A1:; return;
label_B3A3:; return;
label_B3A5:; return;
label_B3A7:; return;
label_B3A9:; return;
label_B3AB:; return;
label_B3AD:; return;
label_B3B0:; return;
label_B3B3:; return;
label_B3B4:; return;
label_B3B6:; return;
label_B3B9:; return;
label_B3BC:; return;
label_B3BD:; return;
label_B3BF:; return;
label_B3C1:; return;
label_B3C3:; return;
label_B3C5:; return;
label_B3C7:; return;
label_B3CA:; return;
label_B3CD:; return;
label_B3D0:; return;
label_B3D3:; return;
label_B3D6:; return;
label_B3D8:; return;
label_B3DB:; return;
label_B3DE:; return;
label_B3E1:; return;
label_B3E4:; return;
label_B3E7:; return;
label_B3EA:; return;
label_B3EB:; return;
label_B3EE:; return;
label_B3F0:; return;
label_B3F3:; return;
label_B3F5:; return;
label_B3F8:; return;
label_B3FB:; return;
label_B3FC:; return;
label_B3FF:; return;
label_B402:; return;
label_B404:; return;
label_B407:; return;
label_B40A:; return;
label_B40D:; return;
label_B40E:; return;
label_B410:; return;
label_B413:; return;
label_B416:; return;
label_B419:; return;
label_B41C:; return;
label_B41D:; return;
label_B41F:; return;
label_B422:; return;
label_B425:; return;
label_B428:; return;
label_B42B:; return;
label_B42E:; return;
label_B431:; return;
label_B434:; return;
label_B437:; return;
label_B43A:; return;
label_B43D:; return;
label_B43E:; return;
label_B440:; return;
label_B443:; return;
label_B446:; return;
label_B449:; return;
label_B44B:; return;
label_B44E:; return;
label_B451:; return;
label_B452:; return;
label_B455:; return;
label_B458:; return;
label_B459:; return;
label_B45B:; return;
label_B45D:; return;
label_B45F:; return;
label_B461:; return;
label_B463:; return;
label_B465:; return;
label_B467:; return;
label_B468:; return;
label_B46B:; return;
label_B46D:; return;
label_B470:; return;
label_B472:; return;
label_B475:; return;
label_B477:; return;
label_B47A:; return;
label_B47D:; return;
label_B47E:; return;
label_B481:; return;
label_B483:; return;
label_B486:; return;
label_B489:; return;
label_B48C:; return;
label_B48F:; return;
label_B492:; return;
label_B493:; return;
label_B496:; return;
label_B499:; return;
label_B49B:; return;
label_B49E:; return;
label_B4A1:; return;
label_B4A2:; return;
label_B4A4:; return;
label_B4A7:; return;
label_B4A9:; return;
label_B4AC:; return;
label_B4AF:; return;
label_B4B2:; return;
label_B4B5:; return;
label_B4B7:; return;
label_B4B9:; return;
label_B4BC:; return;
label_B4BD:; return;
label_B4C0:; return;
label_B4C2:; return;
label_B4C4:; return;
label_B4C6:; return;
label_B4C8:; return;
label_B4CA:; return;
label_B4CD:; return;
label_B4CE:; return;
label_B4CF:; return;
label_B4D1:; return;
label_B4D3:; return;
label_B4D5:; return;
label_B4D8:; return;
label_B4DA:; return;
label_B4DD:; return;
label_B4DE:; return;
label_B4E1:; return;
label_B4E3:; return;
label_B4E4:; return;
label_B4E5:; return;
label_B4E6:; return;
label_B4E8:; return;
label_B4EA:; return;
label_B4EB:; return;
label_B4EE:; return;
label_B4EF:; return;
label_B4F1:; return;
label_B4F3:; return;
label_B4F4:; return;
label_B4F6:; return;
label_B4F8:; return;
label_B4FB:; return;
label_B4FC:; return;
label_B4FE:; return;
label_B500:; return;
label_B502:; return;
label_B505:; return;
label_B508:; return;
label_B509:; return;
label_B50C:; return;
label_B50E:; return;
label_B50F:; return;
label_B511:; return;
label_B513:; return;
label_B516:; return;
label_B519:; return;
label_B51B:; return;
label_B51E:; return;
label_B521:; return;
label_B524:; return;
label_B527:; return;
label_B52A:; return;
label_B52B:; return;
label_B52D:; return;
label_B52F:; return;
label_B532:; return;
label_B535:; return;
label_B538:; return;
label_B539:; return;
label_B53C:; return;
label_B53E:; return;
label_B540:; return;
label_B543:; return;
label_B545:; return;
label_B548:; return;
label_B549:; return;
label_B54C:; return;
label_B54E:; return;
label_B551:; return;
label_B554:; return;
label_B557:; return;
label_B55A:; return;
label_B55D:; return;
label_B55F:; return;
label_B561:; return;
label_B564:; return;
label_B567:; return;
label_B56A:; return;
label_B56D:; return;
label_B56E:; return;
label_B570:; return;
label_B572:; return;
label_B575:; return;
label_B577:; return;
label_B57A:; return;
label_B57B:; return;
label_B57E:; return;
label_B580:; return;
label_B583:; return;
label_B585:; return;
label_B587:; return;
label_B58A:; return;
label_B58D:; return;
label_B58F:; return;
label_B592:; return;
label_B594:; return;
label_B597:; return;
label_B598:; return;
label_B59B:; return;
label_B59D:; return;
label_B59F:; return;
label_B5A1:; return;
label_B5A3:; return;
label_B5A5:; return;
label_B5A8:; return;
label_B5AB:; return;
label_B5AE:; return;
label_B5B0:; return;
label_B5B3:; return;
label_B5B5:; return;
label_B5B8:; return;
label_B5BA:; return;
label_B5BD:; return;
label_B5C0:; return;
label_B5C3:; return;
label_B5C6:; return;
label_B5C9:; return;
label_B5CC:; return;
label_B5CD:; return;
label_B5CF:; return;
label_B5D2:; return;
label_B5D5:; return;
label_B5D7:; return;
label_B5DA:; return;
label_B5DD:; return;
label_B5E0:; return;
label_B5E2:; return;
label_B5E5:; return;
label_B5E8:; return;
label_B5EB:; return;
label_B5EC:; return;
label_B5EE:; return;
label_B5F1:; return;
label_B5F3:; return;
label_B5F6:; return;
label_B5F9:; return;
label_B5FC:; return;
label_B5FF:; return;
label_B602:; return;
label_B605:; return;
label_B608:; return;
label_B60A:; return;
label_B60C:; return;
label_B60E:; return;
label_B610:; return;
label_B612:; return;
label_B614:; return;
label_B616:; return;
label_B619:; return;
label_B61A:; return;
label_B61D:; return;
label_B620:; return;
label_B623:; return;
label_B626:; return;
label_B629:; return;
label_B62C:; return;
label_B62F:; return;
label_B632:; return;
label_B635:; return;
label_B638:; return;
label_B639:; return;
label_B63C:; return;
label_B63D:; return;
label_B640:; return;
label_B643:; return;
label_B646:; return;
label_B649:; return;
label_B64C:; return;
label_B64F:; return;
label_B652:; return;
label_B654:; return;
label_B656:; return;
label_B659:; return;
label_B65B:; return;
label_B65C:; return;
label_B65E:; return;
label_B661:; return;
label_B664:; return;
label_B666:; return;
label_B669:; return;
label_B66B:; return;
label_B66C:; return;
label_B66D:; return;
label_B66F:; return;
label_B672:; return;
label_B673:; return;
label_B675:; return;
label_B678:; return;
label_B67A:; return;
label_B67C:; return;
label_B67F:; return;
label_B680:; return;
label_B682:; return;
label_B684:; return;
label_B686:; return;
label_B688:; return;
label_B68B:; return;
label_B68D:; return;
label_B68E:; return;
label_B68F:; return;
label_B691:; return;
label_B694:; return;
label_B695:; return;
label_B697:; return;
label_B69A:; return;
label_B69C:; return;
label_B69E:; return;
label_B6A1:; return;
label_B6A4:; return;
label_B6A6:; return;
label_B6A9:; return;
label_B6AC:; return;
label_B6AF:; return;
label_B6B0:; return;
label_B6B3:; return;
label_B6B5:; return;
label_B6B8:; return;
label_B6BB:; return;
label_B6BD:; return;
label_B6C0:; return;
label_B6C3:; return;
label_B6C6:; return;
label_B6C9:; return;
label_B6CC:; return;
label_B6CD:; return;
label_B6CF:; return;
label_B6D1:; return;
label_B6D3:; return;
label_B6D6:; return;
label_B6D8:; return;
label_B6DB:; return;
label_B6DE:; return;
label_B6E0:; return;
label_B6E2:; return;
label_B6E4:; return;
label_B6F2:; return;
label_B6F4:; return;
label_B6F7:; return;
label_B6F9:; return;
label_B6FC:; return;
label_B6FF:; return;
label_B702:; return;
label_B703:; return;
label_B706:; return;
label_B708:; return;
label_B70A:; return;
label_B70C:; return;
label_B70E:; return;
label_B710:; return;
label_B712:; return;
label_B714:; return;
label_B716:; return;
label_B719:; return;
label_B71A:; return;
label_B71C:; return;
label_B71F:; return;
label_B721:; return;
label_B723:; return;
label_B726:; return;
label_B727:; return;
label_B729:; return;
label_B72B:; return;
label_B72D:; return;
label_B72F:; return;
label_B731:; return;
label_B733:; return;
label_B735:; return;
label_B737:; return;
label_B739:; return;
label_B75E:; return;
label_B760:; return;
label_B762:; return;
label_B765:; return;
label_B768:; return;
label_B76A:; return;
label_B76D:; return;
label_B770:; return;
label_B772:; return;
label_B773:; return;
label_B776:; return;
label_B778:; return;
label_B77A:; return;
label_B77C:; return;
label_B77E:; return;
label_B7A0:; return;
label_B7A3:; return;
label_B7A6:; return;
label_B7A7:; return;
label_B7A8:; return;
label_B7AB:; return;
label_B7AC:; return;
label_B7AF:; return;
label_B7B2:; return;
label_B7B5:; return;
label_B7B7:; return;
label_B7BA:; return;
label_B7BC:; return;
label_B7BF:; return;
label_B7C1:; return;
label_B7C4:; return;
label_B7C6:; return;
label_B7C8:; return;
label_B7CB:; return;
label_B7CE:; return;
label_B7D0:; return;
label_B7D3:; return;
label_B7D6:; return;
label_B7D9:; return;
label_B7DC:; return;
label_B7DE:; return;
label_B7E0:; return;
label_B7E2:; return;
label_B7E4:; return;
label_B7E7:; return;
label_B7EA:; return;
label_B7EC:; return;
label_B7EF:; return;
label_B7F1:; return;
label_B7F4:; return;
label_B7F6:; return;
label_B7F9:; return;
label_B7FC:; return;
label_B7FF:; return;
label_B802:; return;
label_B804:; return;
label_B807:; return;
label_B809:; return;
label_B80B:; return;
label_B80E:; return;
label_B811:; return;
label_B813:; return;
label_B816:; return;
label_B819:; return;
label_B81B:; return;
label_B81D:; return;
label_B820:; return;
label_B823:; return;
label_B825:; return;
label_B828:; return;
label_B82B:; return;
label_B82E:; return;
label_B830:; return;
label_B833:; return;
label_B834:; return;
label_B836:; return;
label_B838:; return;
label_B83B:; return;
label_B83D:; return;
label_B840:; return;
label_B843:; return;
label_B846:; return;
label_B849:; return;
label_B84B:; return;
label_B84E:; return;
label_B84F:; return;
label_B852:; return;
label_B854:; return;
label_B857:; return;
label_B85A:; return;
label_B85D:; return;
label_B860:; return;
label_B863:; return;
label_B866:; return;
label_B869:; return;
label_B86C:; return;
label_B86F:; return;
label_B872:; return;
label_B874:; return;
label_B877:; return;
label_B878:; return;
label_B87A:; return;
label_B87C:; return;
label_B87F:; return;
label_B882:; return;
label_B884:; return;
label_B887:; return;
label_B88A:; return;
label_B88C:; return;
label_B88E:; return;
label_B891:; return;
label_B893:; return;
label_B8A6:; return;
label_B8A7:; return;
label_B8A9:; return;
label_B8AB:; return;
label_B8AE:; return;
label_B8B1:; return;
label_B8B4:; return;
label_B8B6:; return;
label_B8B9:; return;
label_B8BC:; return;
label_B8BE:; return;
label_B8C0:; return;
label_B8C3:; return;
label_B8C5:; return;
label_B8C7:; return;
label_B8CA:; return;
label_B8CC:; return;
label_B8CE:; return;
label_B8D1:; return;
label_B8D2:; return;
label_B8D5:; return;
label_B8D7:; return;
label_B8D9:; return;
label_B8DC:; return;
label_B8DE:; return;
label_B8E1:; return;
label_B8E4:; return;
label_B8E7:; return;
label_B8E9:; return;
label_B8EC:; return;
label_B8ED:; return;
label_B8F0:; return;
}

void func_A7CE_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A7CE_b1");
#endif
label_A7CE:;
    /* $A7CE: C5 */ nes_cpu_instruction_boundary(0xA7CE, 3); { uint8_t m=nes_read(0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A7D0:; /* Room16_BANK1 */
    /* $A7D0: 01 */ nes_cpu_instruction_boundary(0xA7D0, 6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A7D2:;
    /* $A7D2: 11 */ nes_cpu_instruction_boundary(0xA7D2, 5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7D4:;
    /* $A7D4: 08 */ nes_cpu_instruction_boundary(0xA7D4, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A7D5:;
    /* $A7D5: 11 */ nes_cpu_instruction_boundary(0xA7D5, 5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7D7:;
    /* $A7D7: B0 */ nes_cpu_instruction_boundary(0xA7D7, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A7F8; }
label_A7D9:;
    /* $A7D9: 01 */ nes_cpu_instruction_boundary(0xA7D9, 6); g_cpu.A |= nes_read(nes_read16zp((0xB6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A7DB:;
    /* $A7DB: 05 */ nes_cpu_instruction_boundary(0xA7DB, 3); g_cpu.A |= nes_read(0x03); FLAG_NZ(g_cpu.A);
label_A7DD:;
    /* $A7DD: B8 */ nes_cpu_instruction_boundary(0xA7DD, 2); g_cpu.V = 0;
label_A7DE:;
    /* $A7DE: 05 */ nes_cpu_instruction_boundary(0xA7DE, 3); g_cpu.A |= nes_read(0x03); FLAG_NZ(g_cpu.A);
label_A7E0:;
    /* $A7E0: BC */ nes_cpu_instruction_boundary(0xA7E0, 4); g_cpu.Y = nes_read((0x011F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_A7E3:;
    /* $A7E3: C6 */ nes_cpu_instruction_boundary(0xA7E3, 5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A7E5:;
    /* $A7E5: 01 */ nes_cpu_instruction_boundary(0xA7E5, 6); g_cpu.A |= nes_read(nes_read16zp((0xD4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A7E7:;
    /* $A7E7: 00 */ nes_cpu_instruction_boundary(0xA7E7, 7); nes_brk_executed(0xA7E7); return;
label_A7E8:;
    /* $A7E8: 02 */ nes_cpu_instruction_boundary(0xA7E8, 2); /* ILLEGAL $02 — skip 1 */
label_A7E9:;
    /* $A7E9: FD */ nes_cpu_instruction_boundary(0xA7E9, 4); { uint8_t m=nes_read((0x0707 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7EC:;
    /* $A7EC: B7 */ nes_cpu_instruction_boundary(0xA7EC, 4); g_cpu.A = g_cpu.X = nes_read((0x47 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_A7EE:;
    /* $A7EE: 87 */ nes_cpu_instruction_boundary(0xA7EE, 3); nes_write(0xB9, g_cpu.A & g_cpu.X); /* SAX */
label_A7F0:;
    /* $A7F0: FF */ nes_cpu_instruction_boundary(0xA7F0, 7); { uint16_t a=(0x0003 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7F3:;
    /* $A7F3: 11 */ nes_cpu_instruction_boundary(0xA7F3, 5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7F5:;
    /* $A7F5: 08 */ nes_cpu_instruction_boundary(0xA7F5, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A7F6:;
    /* $A7F6: 10 */ nes_cpu_instruction_boundary(0xA7F6, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xA7FB); return; }
label_A7F8:;
    /* $A7F8: 4A */ nes_cpu_instruction_boundary(0xA7F8, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A7F9:;
    /* $A7F9: 1E */ nes_cpu_instruction_boundary(0xA7F9, 7); { uint16_t a=(0x6B03 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A7FC:;
    /* $A7FC: 1E */ nes_cpu_instruction_boundary(0xA7FC, 7); { uint16_t a=(0x8C03 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A7FF:;
    /* $A7FF: 1E */ nes_cpu_instruction_boundary(0xA7FF, 7); { uint16_t a=(0xA603 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A802:;
    /* $A802: 15 */ nes_cpu_instruction_boundary(0xA802, 4); g_cpu.A |= nes_read((0x00 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A804:;
    /* $A804: B3 */ nes_cpu_instruction_boundary(0xA804, 5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x1D) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A806:;
    /* $A806: 03 */ nes_cpu_instruction_boundary(0xA806, 8); { uint16_t a=nes_read16zp((0xB9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A808:;
    /* $A808: 1D */ nes_cpu_instruction_boundary(0xA808, 4); g_cpu.A |= nes_read((0xC303 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A80B:;
    /* $A80B: 0C */ nes_cpu_instruction_boundary(0xA80B, 4); (void)nes_read(0xC800); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A80E:;
    /* $A80E: 0C */ nes_cpu_instruction_boundary(0xA80E, 4); (void)nes_read(0xD000); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A811:;
    /* $A811: 10 */ nes_cpu_instruction_boundary(0xA811, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A816; }
label_A813:;
    /* $A813: D8 */ nes_cpu_instruction_boundary(0xA813, 2); g_cpu.D = 0;
label_A814:;
    /* $A814: 10 */ nes_cpu_instruction_boundary(0xA814, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A819; }
label_A816:;
    /* $A816: FD */ nes_cpu_instruction_boundary(0xA816, 4); { uint8_t m=nes_read((0x0541 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A819:;
    /* $A819: B4 */ nes_cpu_instruction_boundary(0xA819, 4); g_cpu.Y = nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_A81B:; /* Room18_BANK1 */
    /* $A81B: 01 */ nes_cpu_instruction_boundary(0xA81B, 6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A81D:;
    /* $A81D: 0B */ nes_cpu_instruction_boundary(0xA81D, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A81F:;
    /* $A81F: 01 */ nes_cpu_instruction_boundary(0xA81F, 6); g_cpu.A |= nes_read(nes_read16zp((0x11 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A821:;
    /* $A821: 01 */ nes_cpu_instruction_boundary(0xA821, 6); g_cpu.A |= nes_read(nes_read16zp((0x09 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A823:;
    /* $A823: 11 */ nes_cpu_instruction_boundary(0xA823, 5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A825:;
    /* $A825: 0E */ nes_cpu_instruction_boundary(0xA825, 6); { uint16_t a=0x030B; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A828:;
    /* $A828: 50 */ nes_cpu_instruction_boundary(0xA828, 2); if (!g_cpu.V) { maybe_trigger_vblank(1); call_by_address(0xA82D); return; }
label_A82A:;
    /* $A82A: 02 */ nes_cpu_instruction_boundary(0xA82A, 2); /* ILLEGAL $02 — skip 1 */
label_A82B:;
    /* $A82B: 5F */ nes_cpu_instruction_boundary(0xA82B, 7); { uint16_t a=(0x0203 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A82E:;
    /* $A82E: 64 */ nes_cpu_instruction_boundary(0xA82E, 3); (void)nes_read(0x0D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A830:;
    /* $A830: 03 */ nes_cpu_instruction_boundary(0xA830, 8); { uint16_t a=nes_read16zp((0x66 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A832:;
    /* $A832: 20 */ nes_cpu_instruction_boundary(0xA832, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x34; g_cpu.S--; func_8001_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA832, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A835:;
    /* $A835: 1F */ nes_cpu_instruction_boundary(0xA835, 7); { uint16_t a=(0x8401 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A838:;
    /* $A838: 20 */ nes_cpu_instruction_boundary(0xA838, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3A; g_cpu.S--; func_8801_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA838, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A83B:;
    /* $A83B: 20 */ nes_cpu_instruction_boundary(0xA83B, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3D; g_cpu.S--; func_8C01_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA83B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A83E:;
    /* $A83E: 1E */ nes_cpu_instruction_boundary(0xA83E, 7); { uint16_t a=(0xA603 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A841:;
    /* $A841: 20 */ nes_cpu_instruction_boundary(0xA841, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x43; g_cpu.S--; func_B001_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA841, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A844:;
    /* $A844: 0B */ nes_cpu_instruction_boundary(0xA844, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A846:;
    /* $A846: BE */ nes_cpu_instruction_boundary(0xA846, 4); g_cpu.X = nes_read((0x030B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_A849:;
    /* $A849: E6 */ nes_cpu_instruction_boundary(0xA849, 5); { uint16_t a=0x20; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A84B:;
    /* $A84B: 01 */ nes_cpu_instruction_boundary(0xA84B, 6); g_cpu.A |= nes_read(nes_read16zp((0xFD + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A84D:;
    /* $A84D: 02 */ nes_cpu_instruction_boundary(0xA84D, 2); /* ILLEGAL $02 — skip 1 */
label_A84E:;
    /* $A84E: A1 */ nes_cpu_instruction_boundary(0xA84E, 6); g_cpu.A = nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A850:;
    /* $A850: B1 */ nes_cpu_instruction_boundary(0xA850, 5); g_cpu.A = nes_read((nes_read16zp(0x31) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A852:;
    /* $A852: 05 */ nes_cpu_instruction_boundary(0xA852, 3); g_cpu.A |= nes_read(0x56); FLAG_NZ(g_cpu.A);
label_A854:;
    /* $A854: 01 */ nes_cpu_instruction_boundary(0xA854, 6); g_cpu.A |= nes_read(nes_read16zp((0x85 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A856:;
    /* $A856: 5A */ nes_cpu_instruction_boundary(0xA856, 2); /* NOP */
label_A857:;
    /* $A857: 21 */ nes_cpu_instruction_boundary(0xA857, 6); g_cpu.A &= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A859:;
    /* $A859: D9 */ nes_cpu_instruction_boundary(0xA859, 4); { uint8_t m=nes_read((0x01FF + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A85C:;
    /* $A85C: 00 */ nes_cpu_instruction_boundary(0xA85C, 7); nes_brk_executed(0xA85C); return;
label_A85D:; return;
label_A85F:; return;
label_A861:; return;
label_A863:; return;
label_A866:; return;
label_A868:; return;
label_A869:; return;
label_A86B:; return;
label_A86D:; return;
label_A86F:; return;
label_A872:; return;
label_A875:; return;
label_A878:; return;
label_A87B:; return;
label_A87E:; return;
label_A880:; return;
label_A883:; return;
label_A885:; return;
label_A887:; return;
label_A889:; return;
label_A88C:; return;
label_A88D:; return;
label_A88E:; return;
label_A88F:; return;
label_A891:; return;
label_A892:; return;
label_A894:; return;
label_A895:; return;
label_A897:; return;
label_A898:; return;
label_A89A:; return;
label_A89B:; return;
label_A89D:; return;
label_A89E:; return;
label_A8A0:; return;
label_A8A1:; return;
label_A8A3:; return;
label_A8A4:; return;
label_A8A5:; return;
label_A8A8:; return;
label_A8A9:; return;
label_A8AB:; return;
label_A8AD:; return;
label_A8AF:; return;
label_A8B0:; return;
label_A8B3:; return;
label_A8B5:; return;
label_A8B7:; return;
label_A8B8:; return;
label_A8B9:; return;
label_A8BB:; return;
label_A8BC:; return;
label_A8BE:; return;
label_A8C0:; return;
label_A8C2:; return;
label_A8C4:; return;
label_A8C6:; return;
label_A8C7:; return;
label_A8C8:; return;
label_A8CA:; return;
label_A8CD:; return;
label_A8CF:; return;
label_A8D1:; return;
label_A8D3:; return;
label_A8D5:; return;
label_A8D7:; return;
label_A8D8:; return;
label_A8D9:; return;
label_A8DB:; return;
label_A8DC:; return;
label_A8DF:; return;
label_A8E0:; return;
label_A8E2:; return;
label_A8E4:; return;
label_A8E6:; return;
label_A8E9:; return;
label_A8EB:; return;
label_A8ED:; return;
label_A8EF:; return;
label_A8F2:; return;
label_A8F4:; return;
label_A8F6:; return;
label_A8F8:; return;
label_A8FB:; return;
label_A8FD:; return;
label_A8FE:; return;
label_A900:; return;
label_A903:; return;
label_A905:; return;
label_A906:; return;
label_A908:; return;
label_A909:; return;
label_A90B:; return;
label_A90C:; return;
label_A90F:; return;
label_A912:; return;
label_A915:; return;
label_A918:; return;
label_A91B:; return;
label_A91E:; return;
label_A921:; return;
label_A924:; return;
label_A927:; return;
label_A929:; return;
label_A92A:; return;
label_A92D:; return;
label_A930:; return;
label_A931:; return;
label_A933:; return;
label_A935:; return;
label_A936:; return;
label_A939:; return;
label_A93C:; return;
label_A93D:; return;
label_A93F:; return;
label_A941:; return;
label_A942:; return;
label_A945:; return;
label_A947:; return;
label_A94A:; return;
label_A94C:; return;
label_A94E:; return;
label_A950:; return;
label_A952:; return;
label_A954:; return;
label_A957:; return;
label_A959:; return;
label_A95C:; return;
label_A95E:; return;
label_A95F:; return;
label_A962:; return;
label_A963:; return;
label_A965:; return;
label_A966:; return;
label_A967:; return;
label_A969:; return;
label_A96A:; return;
label_A96D:; return;
label_A96F:; return;
label_A970:; return;
label_A972:; return;
label_A974:; return;
label_A976:; return;
label_A978:; return;
label_A97A:; return;
label_A97C:; return;
label_A97E:; return;
label_A980:; return;
label_A982:; return;
label_A984:; return;
label_A985:; return;
label_A988:; return;
label_A989:; return;
label_A98B:; return;
label_A98C:; return;
label_A98E:; return;
label_A98F:; return;
label_A992:; return;
label_A995:; return;
label_A997:; return;
label_A999:; return;
label_A99B:; return;
label_A99C:; return;
label_A99E:; return;
label_A9A1:; return;
label_A9A4:; return;
label_A9A7:; return;
label_A9AA:; return;
label_A9AB:; return;
label_A9AD:; return;
label_A9AF:; return;
label_A9B1:; return;
label_A9B4:; return;
label_A9B7:; return;
label_A9B8:; return;
label_A9BA:; return;
label_A9BB:; return;
label_A9BD:; return;
label_A9BE:; return;
label_A9C0:; return;
label_A9C2:; return;
label_A9C4:; return;
label_A9C6:; return;
label_A9C8:; return;
label_A9CB:; return;
label_A9CE:; return;
label_A9D1:; return;
label_A9D4:; return;
label_A9D6:; return;
label_A9D8:; return;
label_A9DA:; return;
label_A9DC:; return;
label_A9DF:; return;
label_A9E1:; return;
label_A9E3:; return;
label_A9E5:; return;
label_A9E6:; return;
label_A9E7:; return;
label_A9E8:; return;
label_A9EB:; return;
label_A9ED:; return;
label_A9EF:; return;
label_A9F1:; return;
label_A9F2:; return;
label_A9F4:; return;
label_A9F5:; return;
label_A9F8:; return;
label_A9FB:; return;
label_A9FE:; return;
label_AA01:; return;
label_AA03:; return;
label_AA04:; return;
label_AA05:; return;
label_AA07:; return;
label_AA08:; return;
label_AA0A:; return;
label_AA0D:; return;
label_AA10:; return;
label_AA12:; return;
label_AA14:; return;
label_AA16:; return;
label_AA19:; return;
label_AA1B:; return;
label_AA1D:; return;
label_AA1F:; return;
label_AA22:; return;
label_AA24:; return;
label_AA25:; return;
label_AA27:; return;
label_AA29:; return;
label_AA2B:; return;
label_AA2C:; return;
label_AA2D:; return;
label_AA2F:; return;
label_AA31:; return;
label_AA32:; return;
label_AA33:; return;
label_AA35:; return;
label_AA37:; return;
label_AA39:; return;
label_AA3B:; return;
label_AA3D:; return;
label_AA3E:; return;
label_AA3F:; return;
label_AA42:; return;
label_AA45:; return;
label_AA48:; return;
label_AA4A:; return;
label_AA4C:; return;
label_AA4E:; return;
label_AA51:; return;
label_AA54:; return;
label_AA55:; return;
label_AA58:; return;
label_AA5B:; return;
label_AA5E:; return;
label_AA60:; return;
label_AA61:; return;
label_AA63:; return;
label_AA65:; return;
label_AA67:; return;
label_AA6A:; return;
label_AA6D:; return;
label_AA70:; return;
label_AA72:; return;
label_AA73:; return;
label_AA75:; return;
label_AA77:; return;
label_AA79:; return;
label_AA7B:; return;
label_AA7D:; return;
label_AA7E:; return;
label_AA7F:; return;
label_AA81:; return;
label_AA83:; return;
label_AA85:; return;
label_AA87:; return;
label_AA89:; return;
label_AA8A:; return;
label_AA8B:; return;
label_AA8D:; return;
label_AA8F:; return;
label_AA91:; return;
label_AA94:; return;
label_AA96:; return;
label_AA99:; return;
label_AA9D:; return;
label_AA9F:; return;
label_AAA2:; return;
label_AAA4:; return;
label_AAA5:; return;
label_AAA6:; return;
label_AAA8:; return;
label_AAAA:; return;
label_AAAC:; return;
label_AAAF:; return;
label_AAB1:; return;
label_AAB2:; return;
label_AAB4:; return;
label_AAB5:; return;
label_AAB7:; return;
label_AABA:; return;
label_AABB:; return;
label_AABE:; return;
label_AAC0:; return;
label_AAC3:; return;
label_AAC5:; return;
label_AAC6:; return;
label_AAC8:; return;
label_AAC9:; return;
label_AACB:; return;
label_AACD:; return;
label_AAD0:; return;
label_AAD2:; return;
label_AAD4:; return;
label_AAD6:; return;
label_AAD9:; return;
label_AADB:; return;
label_AADE:; return;
label_AAE1:; return;
label_AAE4:; return;
label_AAE5:; return;
label_AAE8:; return;
label_AAEB:; return;
label_AAED:; return;
label_AAEE:; return;
label_AAF0:; return;
label_AAF2:; return;
label_AAF4:; return;
label_AAF7:; return;
label_AAF9:; return;
label_AAFA:; return;
label_AAFD:; return;
label_AAFF:; return;
label_AB01:; return;
label_AB03:; return;
label_AB04:; return;
label_AB05:; return;
label_AB06:; return;
label_AB07:; return;
label_AB08:; return;
label_AB0B:; return;
label_AB0D:; return;
label_AB0F:; return;
label_AB11:; return;
label_AB14:; return;
label_AB16:; return;
label_AB17:; return;
label_AB19:; return;
label_AB1B:; return;
label_AB1D:; return;
label_AB1E:; return;
label_AB20:; return;
label_AB22:; return;
label_AB24:; return;
label_AB26:; return;
label_AB28:; return;
label_AB2A:; return;
label_AB2D:; return;
label_AB30:; return;
label_AB33:; return;
label_AB35:; return;
label_AB36:; return;
label_AB39:; return;
label_AB3B:; return;
label_AB3C:; return;
label_AB3E:; return;
label_AB41:; return;
label_AB43:; return;
label_AB44:; return;
label_AB46:; return;
label_AB48:; return;
label_AB49:; return;
label_AB4A:; return;
label_AB4D:; return;
label_AB50:; return;
label_AB51:; return;
label_AB52:; return;
label_AB55:; return;
label_AB57:; return;
label_AB58:; return;
label_AB5B:; return;
label_AB5C:; return;
label_AB5E:; return;
label_AB60:; return;
label_AB62:; return;
label_AB65:; return;
label_AB68:; return;
label_AB69:; return;
label_AB6B:; return;
label_AB6D:; return;
label_AB6F:; return;
label_AB72:; return;
label_AB73:; return;
label_AB76:; return;
label_AB79:; return;
label_AB7B:; return;
label_AB7D:; return;
label_AB7F:; return;
label_AB81:; return;
label_AB83:; return;
label_AB84:; return;
label_AB85:; return;
label_AB88:; return;
label_AB8A:; return;
label_AB8C:; return;
label_AB8E:; return;
label_AB90:; return;
label_AB92:; return;
label_AB93:; return;
label_AB94:; return;
label_AB96:; return;
label_AB97:; return;
label_AB99:; return;
label_AB9A:; return;
label_AB9C:; return;
label_AB9D:; return;
label_AB9F:; return;
label_ABA1:; return;
label_ABA2:; return;
label_ABA4:; return;
label_ABA6:; return;
label_ABA8:; return;
label_ABAB:; return;
label_ABAD:; return;
label_ABAF:; return;
label_ABB0:; return;
label_ABB1:; return;
label_ABB3:; return;
label_ABB4:; return;
label_ABB7:; return;
label_ABB8:; return;
label_ABBA:; return;
label_ABBC:; return;
label_ABBE:; return;
label_ABC1:; return;
label_ABC3:; return;
label_ABC5:; return;
label_ABC6:; return;
label_ABC7:; return;
label_ABC9:; return;
label_ABCB:; return;
label_ABCC:; return;
label_ABCE:; return;
label_ABCF:; return;
label_ABD0:; return;
label_ABD3:; return;
label_ABD5:; return;
label_ABD7:; return;
label_ABD8:; return;
label_ABDA:; return;
label_ABDB:; return;
label_ABDE:; return;
label_ABE1:; return;
label_ABE3:; return;
label_ABE4:; return;
label_ABE6:; return;
label_ABE7:; return;
label_ABE9:; return;
label_ABEA:; return;
label_ABEC:; return;
label_ABED:; return;
label_ABEF:; return;
label_ABF0:; return;
label_ABF2:; return;
label_ABF3:; return;
label_ABF5:; return;
label_ABF6:; return;
label_ABF9:; return;
label_ABFB:; return;
label_ABFC:; return;
label_ABFE:; return;
label_ABFF:; return;
label_AC00:; return;
label_AC03:; return;
label_AC05:; return;
label_AC07:; return;
label_AC08:; return;
label_AC0B:; return;
label_AC0E:; return;
label_AC11:; return;
label_AC13:; return;
label_AC14:; return;
label_AC16:; return;
label_AC17:; return;
label_AC19:; return;
label_AC1A:; return;
label_AC1D:; return;
label_AC20:; return;
label_AC21:; return;
label_AC23:; return;
label_AC26:; return;
label_AC28:; return;
label_AC2A:; return;
label_AC2B:; return;
label_AC2E:; return;
label_AC31:; return;
label_AC34:; return;
label_AC35:; return;
label_AC37:; return;
label_AC3A:; return;
label_AC3C:; return;
label_AC3D:; return;
label_AC3F:; return;
label_AC40:; return;
label_AC42:; return;
label_AC43:; return;
label_AC45:; return;
label_AC46:; return;
label_AC49:; return;
label_AC4C:; return;
label_AC4F:; return;
label_AC51:; return;
label_AC52:; return;
label_AC54:; return;
label_AC57:; return;
label_AC5A:; return;
label_AC5C:; return;
label_AC5E:; return;
label_AC60:; return;
label_AC62:; return;
label_AC64:; return;
label_AC66:; return;
label_AC69:; return;
label_AC6C:; return;
label_AC6E:; return;
label_AC71:; return;
label_AC73:; return;
label_AC74:; return;
label_AC77:; return;
label_AC79:; return;
label_AC7B:; return;
label_AC7D:; return;
label_AC7F:; return;
label_AC81:; return;
label_AC82:; return;
label_AC84:; return;
label_AC85:; return;
label_AC87:; return;
label_AC89:; return;
label_AC8B:; return;
label_AC8D:; return;
label_AC8E:; return;
label_AC8F:; return;
label_AC90:; return;
label_AC91:; return;
label_AC92:; return;
label_AC93:; return;
label_AC94:; return;
label_AC95:; return;
label_AC96:; return;
label_AC99:; return;
label_AC9A:; return;
label_AC9B:; return;
label_AC9C:; return;
label_AC9D:; return;
label_AC9E:; return;
label_AC9F:; return;
label_ACA0:; return;
label_ACA2:; return;
label_ACA4:; return;
label_ACA6:; return;
label_ACA7:; return;
label_ACA8:; return;
label_ACA9:; return;
label_ACAA:; return;
label_ACAB:; return;
label_ACAC:; return;
label_ACAD:; return;
label_ACAE:; return;
label_ACAF:; return;
label_ACB2:; return;
label_ACB4:; return;
label_ACB6:; return;
label_ACB7:; return;
label_ACB9:; return;
label_ACBA:; return;
label_ACBC:; return;
label_ACBD:; return;
label_ACBF:; return;
label_ACC0:; return;
label_ACC2:; return;
label_ACC3:; return;
label_ACC5:; return;
label_ACC6:; return;
label_ACC8:; return;
label_ACCB:; return;
label_ACCD:; return;
label_ACCF:; return;
label_ACD2:; return;
label_ACD4:; return;
label_ACD6:; return;
label_ACD9:; return;
label_ACDA:; return;
label_ACDD:; return;
label_ACDF:; return;
label_ACE1:; return;
label_ACE3:; return;
label_ACE5:; return;
label_ACE8:; return;
label_ACEA:; return;
label_ACEC:; return;
label_ACEE:; return;
label_ACF0:; return;
label_ACF2:; return;
label_ACF5:; return;
label_ACF7:; return;
label_ACFA:; return;
label_ACFC:; return;
label_ACFE:; return;
label_AD01:; return;
label_AD03:; return;
label_AD04:; return;
label_AD07:; return;
label_AD09:; return;
label_AD0C:; return;
label_AD0E:; return;
label_AD11:; return;
label_AD12:; return;
label_AD14:; return;
label_AD16:; return;
label_AD17:; return;
label_AD18:; return;
label_AD19:; return;
label_AD1C:; return;
label_AD1F:; return;
label_AD20:; return;
label_AD23:; return;
label_AD24:; return;
label_AD26:; return;
label_AD27:; return;
label_AD2A:; return;
label_AD2D:; return;
label_AD30:; return;
label_AD33:; return;
label_AD36:; return;
label_AD39:; return;
label_AD3C:; return;
label_AD3F:; return;
label_AD42:; return;
label_AD45:; return;
label_AD48:; return;
label_AD4B:; return;
label_AD4E:; return;
label_AD51:; return;
label_AD54:; return;
label_AD57:; return;
label_AD58:; return;
label_AD59:; return;
label_AD5B:; return;
label_AD5D:; return;
label_AD5E:; return;
label_AD60:; return;
label_AD61:; return;
label_AD62:; return;
label_AD63:; return;
label_AD66:; return;
label_AD67:; return;
label_AD6A:; return;
label_AD6B:; return;
label_AD6E:; return;
label_AD6F:; return;
label_AD70:; return;
label_AD71:; return;
label_AD72:; return;
label_AD75:; return;
label_AD76:; return;
label_AD78:; return;
label_AD79:; return;
label_AD7A:; return;
label_AD7B:; return;
label_AD7C:; return;
label_AD7E:; return;
label_AD81:; return;
label_AD84:; return;
label_AD86:; return;
label_AD88:; return;
label_AD8B:; return;
label_AD8D:; return;
label_AD90:; return;
label_AD92:; return;
label_AD94:; return;
label_AD96:; return;
label_AD98:; return;
label_AD99:; return;
label_AD9A:; return;
label_AD9B:; return;
label_AD9C:; return;
label_AD9D:; return;
label_AD9E:; return;
label_AD9F:; return;
label_ADA0:; return;
label_ADA1:; return;
label_ADA4:; return;
label_ADA6:; return;
label_ADA8:; return;
label_ADAA:; return;
label_ADAC:; return;
label_ADAF:; return;
label_ADB2:; return;
label_ADB5:; return;
label_ADB7:; return;
label_ADB8:; return;
label_ADBB:; return;
label_ADBC:; return;
label_ADBF:; return;
label_ADC2:; return;
label_ADC5:; return;
label_ADC8:; return;
label_ADCB:; return;
label_ADCE:; return;
label_ADD1:; return;
label_ADD4:; return;
label_ADD7:; return;
label_ADDA:; return;
label_ADDD:; return;
label_ADE0:; return;
label_ADE3:; return;
label_ADE5:; return;
label_ADE8:; return;
label_ADEB:; return;
label_ADEE:; return;
label_ADF1:; return;
label_ADF4:; return;
label_ADF7:; return;
label_ADFA:; return;
label_ADFD:; return;
label_AE00:; return;
label_AE03:; return;
label_AE05:; return;
label_AE08:; return;
label_AE0B:; return;
label_AE0E:; return;
label_AE11:; return;
label_AE14:; return;
label_AE17:; return;
label_AE1A:; return;
label_AE1C:; return;
label_AE1D:; return;
label_AE1F:; return;
label_AE22:; return;
label_AE24:; return;
label_AE25:; return;
label_AE26:; return;
label_AE27:; return;
label_AE29:; return;
label_AE2A:; return;
label_AE2D:; return;
label_AE2F:; return;
label_AE32:; return;
label_AE34:; return;
label_AE37:; return;
label_AE39:; return;
label_AE3C:; return;
label_AE3E:; return;
label_AE41:; return;
label_AE44:; return;
label_AE46:; return;
label_AE48:; return;
label_AE4A:; return;
label_AE4D:; return;
label_AE50:; return;
label_AE52:; return;
label_AE55:; return;
label_AE58:; return;
label_AE59:; return;
label_AE5A:; return;
label_AE5B:; return;
label_AE5C:; return;
label_AE5F:; return;
label_AE61:; return;
label_AE64:; return;
label_AE67:; return;
label_AE69:; return;
label_AE6B:; return;
label_AE6D:; return;
label_AE6F:; return;
label_AE72:; return;
label_AE75:; return;
label_AE77:; return;
label_AE7A:; return;
label_AE7C:; return;
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
label_AE9F:; return;
label_AEA2:; return;
label_AEA5:; return;
label_AEA7:; return;
label_AEA9:; return;
label_AEAB:; return;
label_AEAD:; return;
label_AEAF:; return;
label_AEB2:; return;
label_AEB5:; return;
label_AEB6:; return;
label_AEB9:; return;
label_AEBC:; return;
label_AEBD:; return;
label_AEC0:; return;
label_AEC2:; return;
label_AEC4:; return;
label_AEC6:; return;
label_AEC8:; return;
label_AECA:; return;
label_AECD:; return;
label_AED0:; return;
label_AED3:; return;
label_AED6:; return;
label_AED9:; return;
label_AEDC:; return;
label_AEDF:; return;
label_AEE2:; return;
label_AEE5:; return;
label_AEE7:; return;
label_AEE9:; return;
label_AEEB:; return;
label_AEED:; return;
label_AEEF:; return;
label_AEF2:; return;
label_AEF4:; return;
label_AEF7:; return;
label_AEF9:; return;
label_AEFB:; return;
label_AEFD:; return;
label_AEFF:; return;
label_AF02:; return;
label_AF04:; return;
label_AF07:; return;
label_AF09:; return;
label_AF0B:; return;
label_AF0D:; return;
label_AF0F:; return;
label_AF11:; return;
label_AF13:; return;
label_AF15:; return;
label_AF16:; return;
label_AF19:; return;
label_AF1A:; return;
label_AF1B:; return;
label_AF1E:; return;
label_AF1F:; return;
label_AF21:; return;
label_AF24:; return;
label_AF25:; return;
label_AF27:; return;
label_AF2A:; return;
label_AF2D:; return;
label_AF2F:; return;
label_AF31:; return;
label_AF34:; return;
label_AF37:; return;
label_AF38:; return;
label_AF3A:; return;
label_AF3C:; return;
label_AF3D:; return;
label_AF40:; return;
label_AF43:; return;
label_AF44:; return;
label_AF47:; return;
label_AF49:; return;
label_AF4B:; return;
label_AF4D:; return;
label_AF4F:; return;
label_AF51:; return;
label_AF53:; return;
label_AF54:; return;
label_AF55:; return;
label_AF58:; return;
label_AF59:; return;
label_AF5B:; return;
label_AF5C:; return;
label_AF5E:; return;
label_AF5F:; return;
label_AF60:; return;
label_AF62:; return;
label_AF65:; return;
label_AF66:; return;
label_AF68:; return;
label_AF6A:; return;
label_AF6C:; return;
label_AF6F:; return;
label_AF72:; return;
label_AF75:; return;
label_AF78:; return;
label_AF79:; return;
label_AF7B:; return;
label_AF7D:; return;
label_AF7F:; return;
label_AF81:; return;
label_AF84:; return;
label_AF87:; return;
label_AF8A:; return;
label_AF8D:; return;
label_AF90:; return;
label_AF93:; return;
label_AF96:; return;
label_AF97:; return;
label_AF99:; return;
label_AF9B:; return;
label_AF9D:; return;
label_AF9E:; return;
label_AFA1:; return;
label_AFA4:; return;
label_AFA7:; return;
label_AFAA:; return;
label_AFAC:; return;
label_AFAE:; return;
label_AFB0:; return;
label_AFB3:; return;
label_AFB6:; return;
label_AFB9:; return;
label_AFBC:; return;
label_AFBE:; return;
label_AFC0:; return;
label_AFC2:; return;
label_AFC4:; return;
label_AFC6:; return;
label_AFC8:; return;
label_AFC9:; return;
label_AFCB:; return;
label_AFCD:; return;
label_AFCE:; return;
label_AFCF:; return;
label_AFD0:; return;
label_AFD2:; return;
label_AFD5:; return;
label_AFD7:; return;
label_AFD9:; return;
label_AFDB:; return;
label_AFDD:; return;
label_AFDF:; return;
label_AFE2:; return;
label_AFE5:; return;
label_AFE6:; return;
label_AFE9:; return;
label_AFEC:; return;
label_AFEE:; return;
label_AFF0:; return;
label_AFF2:; return;
label_AFF3:; return;
label_AFF5:; return;
label_AFF8:; return;
label_AFFA:; return;
label_AFFC:; return;
label_AFFE:; return;
label_B000:; return;
label_B002:; return;
label_B005:; return;
label_B007:; return;
label_B00A:; return;
label_B00B:; return;
label_B00E:; return;
label_B010:; return;
label_B012:; return;
label_B014:; return;
label_B017:; return;
label_B019:; return;
label_B01A:; return;
label_B01C:; return;
label_B01E:; return;
label_B01F:; return;
label_B020:; return;
label_B021:; return;
label_B023:; return;
label_B026:; return;
label_B028:; return;
label_B02A:; return;
label_B02C:; return;
label_B02D:; return;
label_B02F:; return;
label_B030:; return;
label_B033:; return;
label_B034:; return;
label_B035:; return;
label_B038:; return;
label_B03B:; return;
label_B03C:; return;
label_B03E:; return;
label_B03F:; return;
label_B041:; return;
label_B042:; return;
label_B044:; return;
label_B045:; return;
label_B048:; return;
label_B04B:; return;
label_B04E:; return;
label_B04F:; return;
label_B051:; return;
label_B053:; return;
label_B055:; return;
label_B057:; return;
label_B059:; return;
label_B05C:; return;
label_B05E:; return;
label_B05F:; return;
label_B062:; return;
label_B064:; return;
label_B065:; return;
label_B067:; return;
label_B069:; return;
label_B06B:; return;
label_B06D:; return;
label_B06F:; return;
label_B071:; return;
label_B073:; return;
label_B076:; return;
label_B078:; return;
label_B07A:; return;
label_B07B:; return;
label_B07E:; return;
label_B081:; return;
label_B082:; return;
label_B083:; return;
label_B086:; return;
label_B088:; return;
label_B08A:; return;
label_B08B:; return;
label_B08E:; return;
label_B090:; return;
label_B091:; return;
label_B094:; return;
label_B095:; return;
label_B097:; return;
label_B098:; return;
label_B099:; return;
label_B09C:; return;
label_B09F:; return;
label_B0A2:; return;
label_B0A3:; return;
label_B0A5:; return;
label_B0A6:; return;
label_B0A7:; return;
label_B0AA:; return;
label_B0AB:; return;
label_B0AD:; return;
label_B0AF:; return;
label_B0B1:; return;
label_B0B2:; return;
label_B0B5:; return;
label_B0B6:; return;
label_B0B8:; return;
label_B0B9:; return;
label_B0BB:; return;
label_B0BD:; return;
label_B0BE:; return;
label_B0C0:; return;
label_B0C2:; return;
label_B0C4:; return;
label_B0C7:; return;
label_B0C9:; return;
label_B0CB:; return;
label_B0CD:; return;
label_B0CF:; return;
label_B0D1:; return;
label_B0D3:; return;
label_B0D6:; return;
label_B0D7:; return;
label_B0DA:; return;
label_B0DD:; return;
label_B0E0:; return;
label_B0E1:; return;
label_B0E3:; return;
label_B0E5:; return;
label_B0E7:; return;
label_B0E9:; return;
label_B0EA:; return;
label_B0EC:; return;
label_B0ED:; return;
label_B0EE:; return;
label_B0F1:; return;
label_B0F4:; return;
label_B0F5:; return;
label_B0F8:; return;
label_B0FB:; return;
label_B0FE:; return;
label_B101:; return;
label_B104:; return;
label_B107:; return;
label_B10A:; return;
label_B10C:; return;
label_B10E:; return;
label_B111:; return;
label_B113:; return;
label_B114:; return;
label_B117:; return;
label_B118:; return;
label_B119:; return;
label_B11B:; return;
label_B11D:; return;
label_B11E:; return;
label_B11F:; return;
label_B122:; return;
label_B124:; return;
label_B125:; return;
label_B126:; return;
label_B127:; return;
label_B12A:; return;
label_B12D:; return;
label_B12F:; return;
label_B131:; return;
label_B133:; return;
label_B135:; return;
label_B137:; return;
label_B139:; return;
label_B13A:; return;
label_B13B:; return;
label_B13C:; return;
label_B13D:; return;
label_B13E:; return;
label_B13F:; return;
label_B140:; return;
label_B142:; return;
label_B143:; return;
label_B144:; return;
label_B146:; return;
label_B147:; return;
label_B149:; return;
label_B14A:; return;
label_B14B:; return;
label_B14D:; return;
label_B14F:; return;
label_B151:; return;
label_B154:; return;
label_B156:; return;
label_B158:; return;
label_B159:; return;
label_B15A:; return;
label_B15B:; return;
label_B15C:; return;
label_B15D:; return;
label_B15F:; return;
label_B161:; return;
label_B162:; return;
label_B163:; return;
label_B164:; return;
label_B166:; return;
label_B167:; return;
label_B16A:; return;
label_B16B:; return;
label_B16C:; return;
label_B16D:; return;
label_B16E:; return;
label_B16F:; return;
label_B170:; return;
label_B172:; return;
label_B174:; return;
label_B176:; return;
label_B178:; return;
label_B179:; return;
label_B17A:; return;
label_B17B:; return;
label_B17C:; return;
label_B17D:; return;
label_B17E:; return;
label_B17F:; return;
label_B181:; return;
label_B183:; return;
label_B185:; return;
label_B188:; return;
label_B189:; return;
label_B18B:; return;
label_B18C:; return;
label_B18E:; return;
label_B190:; return;
label_B192:; return;
label_B195:; return;
label_B198:; return;
label_B19A:; return;
label_B19C:; return;
label_B19E:; return;
label_B1A0:; return;
label_B1A2:; return;
label_B1A5:; return;
label_B1A7:; return;
label_B1A9:; return;
label_B1AC:; return;
label_B1AE:; return;
label_B1B0:; return;
label_B1B3:; return;
label_B1B6:; return;
label_B1B9:; return;
label_B1BA:; return;
label_B1BB:; return;
label_B1BC:; return;
label_B1BD:; return;
label_B1BE:; return;
label_B1BF:; return;
label_B1C1:; return;
label_B1C3:; return;
label_B1C5:; return;
label_B1C7:; return;
label_B1C9:; return;
label_B1CA:; return;
label_B1CB:; return;
label_B1CC:; return;
label_B1CD:; return;
label_B1CE:; return;
label_B1CF:; return;
label_B1D0:; return;
label_B1D2:; return;
label_B1D3:; return;
label_B1D4:; return;
label_B1D5:; return;
label_B1D6:; return;
label_B1D7:; return;
label_B1D8:; return;
label_B1DA:; return;
label_B1DC:; return;
label_B1E0:; return;
label_B1E2:; return;
label_B1E4:; return;
label_B1E7:; return;
label_B1E8:; return;
label_B1E9:; return;
label_B1EB:; return;
label_B1ED:; return;
label_B1EF:; return;
label_B1F1:; return;
label_B1F3:; return;
label_B1F6:; return;
label_B1F7:; return;
label_B1F9:; return;
label_B1FA:; return;
label_B1FB:; return;
label_B1FD:; return;
label_B1FE:; return;
label_B1FF:; return;
label_B200:; return;
label_B201:; return;
label_B203:; return;
label_B204:; return;
label_B205:; return;
label_B207:; return;
label_B209:; return;
label_B20A:; return;
label_B20B:; return;
label_B20D:; return;
label_B20F:; return;
label_B211:; return;
label_B213:; return;
label_B214:; return;
label_B216:; return;
label_B219:; return;
label_B21C:; return;
label_B21D:; return;
label_B21F:; return;
label_B221:; return;
label_B223:; return;
label_B226:; return;
label_B228:; return;
label_B22B:; return;
label_B22D:; return;
label_B22F:; return;
label_B232:; return;
label_B235:; return;
label_B237:; return;
label_B239:; return;
label_B23B:; return;
label_B23D:; return;
label_B23F:; return;
label_B241:; return;
label_B243:; return;
label_B246:; return;
label_B249:; return;
label_B24B:; return;
label_B24C:; return;
label_B24D:; return;
label_B24F:; return;
label_B250:; return;
label_B251:; return;
label_B253:; return;
label_B254:; return;
label_B257:; return;
label_B25A:; return;
label_B25D:; return;
label_B260:; return;
label_B261:; return;
label_B262:; return;
label_B265:; return;
label_B267:; return;
label_B268:; return;
label_B269:; return;
label_B26B:; return;
label_B26D:; return;
label_B270:; return;
label_B273:; return;
label_B276:; return;
label_B279:; return;
label_B27B:; return;
label_B27D:; return;
label_B27F:; return;
label_B280:; return;
label_B281:; return;
label_B283:; return;
label_B285:; return;
label_B288:; return;
label_B289:; return;
label_B28C:; return;
label_B28E:; return;
label_B290:; return;
label_B293:; return;
label_B296:; return;
label_B298:; return;
label_B29A:; return;
label_B29D:; return;
label_B2A0:; return;
label_B2A2:; return;
label_B2A4:; return;
label_B2A7:; return;
label_B2A9:; return;
label_B2AC:; return;
label_B2AE:; return;
label_B2B0:; return;
label_B2B2:; return;
label_B2B5:; return;
label_B2B6:; return;
label_B2B8:; return;
label_B2BB:; return;
label_B2BE:; return;
label_B2C0:; return;
label_B2C2:; return;
label_B2C4:; return;
label_B2C6:; return;
label_B2C8:; return;
label_B2CA:; return;
label_B2CC:; return;
label_B2CE:; return;
label_B2D0:; return;
label_B2D2:; return;
label_B2D4:; return;
label_B2D6:; return;
label_B2D8:; return;
label_B2DA:; return;
label_B2DC:; return;
label_B2DE:; return;
label_B2E0:; return;
label_B2E2:; return;
label_B2E4:; return;
label_B2E6:; return;
label_B2E8:; return;
label_B2EA:; return;
label_B2EC:; return;
label_B2EE:; return;
label_B2F0:; return;
label_B2F2:; return;
label_B2F4:; return;
label_B2F6:; return;
label_B2F8:; return;
label_B2FA:; return;
label_B2FC:; return;
label_B2FD:; return;
label_B300:; return;
label_B301:; return;
label_B303:; return;
label_B306:; return;
label_B308:; return;
label_B309:; return;
label_B30A:; return;
label_B30B:; return;
label_B30E:; return;
label_B310:; return;
label_B311:; return;
label_B312:; return;
label_B315:; return;
label_B318:; return;
label_B319:; return;
label_B31C:; return;
label_B31E:; return;
label_B320:; return;
label_B322:; return;
label_B325:; return;
label_B327:; return;
label_B329:; return;
label_B32C:; return;
label_B32E:; return;
label_B330:; return;
label_B333:; return;
label_B335:; return;
label_B337:; return;
label_B33A:; return;
label_B33D:; return;
label_B340:; return;
label_B342:; return;
label_B344:; return;
label_B347:; return;
label_B349:; return;
label_B34B:; return;
label_B34E:; return;
label_B350:; return;
label_B353:; return;
label_B356:; return;
label_B359:; return;
label_B35C:; return;
label_B35F:; return;
label_B361:; return;
label_B364:; return;
label_B367:; return;
label_B368:; return;
label_B36A:; return;
label_B36C:; return;
label_B36E:; return;
label_B370:; return;
label_B372:; return;
label_B374:; return;
label_B376:; return;
label_B378:; return;
label_B37A:; return;
label_B37C:; return;
label_B37E:; return;
label_B380:; return;
label_B382:; return;
label_B384:; return;
label_B386:; return;
label_B388:; return;
label_B389:; return;
label_B38A:; return;
label_B38C:; return;
label_B38E:; return;
label_B38F:; return;
label_B392:; return;
label_B395:; return;
label_B398:; return;
label_B399:; return;
label_B39C:; return;
label_B39E:; return;
label_B3A1:; return;
label_B3A3:; return;
label_B3A5:; return;
label_B3A7:; return;
label_B3A9:; return;
label_B3AB:; return;
label_B3AD:; return;
label_B3B0:; return;
label_B3B3:; return;
label_B3B4:; return;
label_B3B6:; return;
label_B3B9:; return;
label_B3BC:; return;
label_B3BD:; return;
label_B3BF:; return;
label_B3C1:; return;
label_B3C3:; return;
label_B3C5:; return;
label_B3C7:; return;
label_B3CA:; return;
label_B3CD:; return;
label_B3D0:; return;
label_B3D3:; return;
label_B3D6:; return;
label_B3D8:; return;
label_B3DB:; return;
label_B3DE:; return;
label_B3E1:; return;
label_B3E4:; return;
label_B3E7:; return;
label_B3EA:; return;
label_B3EB:; return;
label_B3EE:; return;
label_B3F0:; return;
label_B3F3:; return;
label_B3F5:; return;
label_B3F8:; return;
label_B3FB:; return;
label_B3FC:; return;
label_B3FF:; return;
label_B402:; return;
label_B404:; return;
label_B407:; return;
label_B40A:; return;
label_B40D:; return;
label_B40E:; return;
label_B410:; return;
label_B413:; return;
label_B416:; return;
label_B419:; return;
label_B41C:; return;
label_B41D:; return;
label_B41F:; return;
label_B422:; return;
label_B425:; return;
label_B428:; return;
label_B42B:; return;
label_B42E:; return;
label_B431:; return;
label_B434:; return;
label_B437:; return;
label_B43A:; return;
label_B43D:; return;
label_B43E:; return;
label_B440:; return;
label_B443:; return;
label_B446:; return;
label_B449:; return;
label_B44B:; return;
label_B44E:; return;
label_B451:; return;
label_B452:; return;
label_B455:; return;
label_B458:; return;
label_B459:; return;
label_B45B:; return;
label_B45D:; return;
label_B45F:; return;
label_B461:; return;
label_B463:; return;
label_B465:; return;
label_B467:; return;
label_B468:; return;
label_B46B:; return;
label_B46D:; return;
label_B470:; return;
label_B472:; return;
label_B475:; return;
label_B477:; return;
label_B47A:; return;
label_B47D:; return;
label_B47E:; return;
label_B481:; return;
label_B483:; return;
label_B486:; return;
label_B489:; return;
label_B48C:; return;
label_B48F:; return;
label_B492:; return;
label_B493:; return;
label_B496:; return;
label_B499:; return;
label_B49B:; return;
label_B49E:; return;
label_B4A1:; return;
label_B4A2:; return;
label_B4A4:; return;
label_B4A7:; return;
label_B4A9:; return;
label_B4AC:; return;
label_B4AF:; return;
label_B4B2:; return;
label_B4B5:; return;
label_B4B7:; return;
label_B4B9:; return;
label_B4BC:; return;
label_B4BD:; return;
label_B4C0:; return;
label_B4C2:; return;
label_B4C4:; return;
label_B4C6:; return;
label_B4C8:; return;
label_B4CA:; return;
label_B4CD:; return;
label_B4CE:; return;
label_B4CF:; return;
label_B4D1:; return;
label_B4D3:; return;
label_B4D5:; return;
label_B4D8:; return;
label_B4DA:; return;
label_B4DD:; return;
label_B4DE:; return;
label_B4E1:; return;
label_B4E3:; return;
label_B4E4:; return;
label_B4E5:; return;
label_B4E6:; return;
label_B4E8:; return;
label_B4EA:; return;
label_B4EB:; return;
label_B4EE:; return;
label_B4EF:; return;
label_B4F1:; return;
label_B4F3:; return;
label_B4F4:; return;
label_B4F6:; return;
label_B4F8:; return;
label_B4FB:; return;
label_B4FC:; return;
label_B4FE:; return;
label_B500:; return;
label_B502:; return;
label_B505:; return;
label_B508:; return;
label_B509:; return;
label_B50C:; return;
label_B50E:; return;
label_B50F:; return;
label_B511:; return;
label_B513:; return;
label_B516:; return;
label_B519:; return;
label_B51B:; return;
label_B51E:; return;
label_B521:; return;
label_B524:; return;
label_B527:; return;
label_B52A:; return;
label_B52B:; return;
label_B52D:; return;
label_B52F:; return;
label_B532:; return;
label_B535:; return;
label_B538:; return;
label_B539:; return;
label_B53C:; return;
label_B53E:; return;
label_B540:; return;
label_B543:; return;
label_B545:; return;
label_B548:; return;
label_B549:; return;
label_B54C:; return;
label_B54E:; return;
label_B551:; return;
label_B554:; return;
label_B557:; return;
label_B55A:; return;
label_B55D:; return;
label_B55F:; return;
label_B561:; return;
label_B564:; return;
label_B567:; return;
label_B56A:; return;
label_B56D:; return;
label_B56E:; return;
label_B570:; return;
label_B572:; return;
label_B575:; return;
label_B577:; return;
label_B57A:; return;
label_B57B:; return;
label_B57E:; return;
label_B580:; return;
label_B583:; return;
label_B585:; return;
label_B587:; return;
label_B58A:; return;
label_B58D:; return;
label_B58F:; return;
label_B592:; return;
label_B594:; return;
label_B597:; return;
label_B598:; return;
label_B59B:; return;
label_B59D:; return;
label_B59F:; return;
label_B5A1:; return;
label_B5A3:; return;
label_B5A5:; return;
label_B5A8:; return;
label_B5AB:; return;
label_B5AE:; return;
label_B5B0:; return;
label_B5B3:; return;
label_B5B5:; return;
label_B5B8:; return;
label_B5BA:; return;
label_B5BD:; return;
label_B5C0:; return;
label_B5C3:; return;
label_B5C6:; return;
label_B5C9:; return;
label_B5CC:; return;
label_B5CD:; return;
label_B5CF:; return;
label_B5D2:; return;
label_B5D5:; return;
label_B5D7:; return;
label_B5DA:; return;
label_B5DD:; return;
label_B5E0:; return;
label_B5E2:; return;
label_B5E5:; return;
label_B5E8:; return;
label_B5EB:; return;
label_B5EC:; return;
label_B5EE:; return;
label_B5F1:; return;
label_B5F3:; return;
label_B5F6:; return;
label_B5F9:; return;
label_B5FC:; return;
label_B5FF:; return;
label_B602:; return;
label_B605:; return;
label_B608:; return;
label_B60A:; return;
label_B60C:; return;
label_B60E:; return;
label_B610:; return;
label_B612:; return;
label_B614:; return;
label_B616:; return;
label_B619:; return;
label_B61A:; return;
label_B61D:; return;
label_B620:; return;
label_B623:; return;
label_B626:; return;
label_B629:; return;
label_B62C:; return;
label_B62F:; return;
label_B632:; return;
label_B635:; return;
label_B638:; return;
label_B639:; return;
label_B63C:; return;
label_B63D:; return;
label_B640:; return;
label_B643:; return;
label_B646:; return;
label_B649:; return;
label_B64C:; return;
label_B64F:; return;
label_B652:; return;
label_B654:; return;
label_B656:; return;
label_B659:; return;
label_B65B:; return;
label_B65C:; return;
label_B65E:; return;
label_B661:; return;
label_B664:; return;
label_B666:; return;
label_B669:; return;
label_B66B:; return;
label_B66C:; return;
label_B66D:; return;
label_B66F:; return;
label_B672:; return;
label_B673:; return;
label_B675:; return;
label_B678:; return;
label_B67A:; return;
label_B67C:; return;
label_B67F:; return;
label_B680:; return;
label_B682:; return;
label_B684:; return;
label_B686:; return;
label_B688:; return;
label_B68B:; return;
label_B68D:; return;
label_B68E:; return;
label_B68F:; return;
label_B691:; return;
label_B694:; return;
label_B695:; return;
label_B697:; return;
label_B69A:; return;
label_B69C:; return;
label_B69E:; return;
label_B6A1:; return;
label_B6A4:; return;
label_B6A6:; return;
label_B6A9:; return;
label_B6AC:; return;
label_B6AF:; return;
label_B6B0:; return;
label_B6B3:; return;
label_B6B5:; return;
label_B6B8:; return;
label_B6BB:; return;
label_B6BD:; return;
label_B6C0:; return;
label_B6C3:; return;
label_B6C6:; return;
label_B6C9:; return;
label_B6CC:; return;
label_B6CD:; return;
label_B6CF:; return;
label_B6D1:; return;
label_B6D3:; return;
label_B6D6:; return;
label_B6D8:; return;
label_B6DB:; return;
label_B6DE:; return;
label_B6E0:; return;
label_B6E2:; return;
label_B6E4:; return;
label_B6F2:; return;
label_B6F4:; return;
label_B6F7:; return;
label_B6F9:; return;
label_B6FC:; return;
label_B6FF:; return;
label_B702:; return;
label_B703:; return;
label_B706:; return;
label_B708:; return;
label_B70A:; return;
label_B70C:; return;
label_B70E:; return;
label_B710:; return;
label_B712:; return;
label_B714:; return;
label_B716:; return;
label_B719:; return;
label_B71A:; return;
label_B71C:; return;
label_B71F:; return;
label_B721:; return;
label_B723:; return;
label_B726:; return;
label_B727:; return;
label_B729:; return;
label_B72B:; return;
label_B72D:; return;
label_B72F:; return;
label_B731:; return;
label_B733:; return;
label_B735:; return;
label_B737:; return;
label_B739:; return;
label_B75E:; return;
label_B760:; return;
label_B762:; return;
label_B765:; return;
label_B768:; return;
label_B76A:; return;
label_B76D:; return;
label_B770:; return;
label_B772:; return;
label_B773:; return;
label_B776:; return;
label_B778:; return;
label_B77A:; return;
label_B77C:; return;
label_B77E:; return;
label_B7A0:; return;
label_B7A3:; return;
label_B7A6:; return;
label_B7A7:; return;
label_B7A8:; return;
label_B7AB:; return;
label_B7AC:; return;
label_B7AF:; return;
label_B7B2:; return;
label_B7B5:; return;
label_B7B7:; return;
label_B7BA:; return;
label_B7BC:; return;
label_B7BF:; return;
label_B7C1:; return;
label_B7C4:; return;
label_B7C6:; return;
label_B7C8:; return;
label_B7CB:; return;
label_B7CE:; return;
label_B7D0:; return;
label_B7D3:; return;
label_B7D6:; return;
label_B7D9:; return;
label_B7DC:; return;
label_B7DE:; return;
label_B7E0:; return;
label_B7E2:; return;
label_B7E4:; return;
label_B7E7:; return;
label_B7EA:; return;
label_B7EC:; return;
label_B7EF:; return;
label_B7F1:; return;
label_B7F4:; return;
label_B7F6:; return;
label_B7F9:; return;
label_B7FC:; return;
label_B7FF:; return;
label_B802:; return;
label_B804:; return;
label_B807:; return;
label_B809:; return;
label_B80B:; return;
label_B80E:; return;
label_B811:; return;
label_B813:; return;
label_B816:; return;
label_B819:; return;
label_B81B:; return;
label_B81D:; return;
label_B820:; return;
label_B823:; return;
label_B825:; return;
label_B828:; return;
label_B82B:; return;
label_B82E:; return;
label_B830:; return;
label_B833:; return;
label_B834:; return;
label_B836:; return;
label_B838:; return;
label_B83B:; return;
label_B83D:; return;
label_B840:; return;
label_B843:; return;
label_B846:; return;
label_B849:; return;
label_B84B:; return;
label_B84E:; return;
label_B84F:; return;
label_B852:; return;
label_B854:; return;
label_B857:; return;
label_B85A:; return;
label_B85D:; return;
label_B860:; return;
label_B863:; return;
label_B866:; return;
label_B869:; return;
label_B86C:; return;
label_B86F:; return;
label_B872:; return;
label_B874:; return;
label_B877:; return;
label_B878:; return;
label_B87A:; return;
label_B87C:; return;
label_B87F:; return;
label_B882:; return;
label_B884:; return;
label_B887:; return;
label_B88A:; return;
label_B88C:; return;
label_B88E:; return;
label_B891:; return;
label_B893:; return;
label_B8A6:; return;
label_B8A7:; return;
label_B8A9:; return;
label_B8AB:; return;
label_B8AE:; return;
label_B8B1:; return;
label_B8B4:; return;
label_B8B6:; return;
label_B8B9:; return;
label_B8BC:; return;
label_B8BE:; return;
label_B8C0:; return;
label_B8C3:; return;
label_B8C5:; return;
label_B8C7:; return;
label_B8CA:; return;
label_B8CC:; return;
label_B8CE:; return;
label_B8D1:; return;
label_B8D2:; return;
label_B8D5:; return;
label_B8D7:; return;
label_B8D9:; return;
label_B8DC:; return;
label_B8DE:; return;
label_B8E1:; return;
label_B8E4:; return;
label_B8E7:; return;
label_B8E9:; return;
label_B8EC:; return;
label_B8ED:; return;
label_B8F0:; return;
label_B8F2:; return;
label_B8F4:; return;
label_B8F7:; return;
label_B8F9:; return;
label_B8FC:; return;
label_B8FF:; return;
label_B902:; return;
label_B905:; return;
label_B907:; return;
label_B909:; return;
label_B90C:; return;
label_B90F:; return;
label_B912:; return;
label_B915:; return;
label_B918:; return;
label_B91B:; return;
}

