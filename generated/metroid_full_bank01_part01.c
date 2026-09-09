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

void func_B3F0_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3F0_b1");
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
    /* $B3FA: 20 */ nes_cpu_instruction_boundary(0xB3FA, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFC; g_cpu.S--; func_B34B_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3FA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3FD:;
    /* $B3FD: 20 */ nes_cpu_instruction_boundary(0xB3FD, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFF; g_cpu.S--; func_B37B_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3FD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B400:;
    /* $B400: 20 */ nes_cpu_instruction_boundary(0xB400, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x02; g_cpu.S--; func_B36D_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB400, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B403:;
    /* $B403: 20 */ nes_cpu_instruction_boundary(0xB403, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x05; g_cpu.S--; func_BC66_b1();
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

void func_B3FC_b1_body(int _entry) {
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

void func_B3FC_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3FC_b1");
#endif
    func_B3FC_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B40E_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B40E_b1");
#endif
    func_B3FC_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B4A9_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4A9_b1");
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

void func_B4BD_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4BD_b1");
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

void func_B53F_b1(void) { /* SpitFlameSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B53F_b1");
#endif
label_B53F:; /* SpitFlameSFXInit */
    /* $B53F: A9 */ nes_cpu_instruction_boundary(0xB53F, 2); g_cpu.A = 0x14; FLAG_NZ(g_cpu.A);
label_B541:;
    /* $B541: A0 */ nes_cpu_instruction_boundary(0xB541, 2); g_cpu.Y = 0x51; FLAG_NZ(g_cpu.Y);
label_B543:;
    /* $B543: 4C */ nes_cpu_instruction_boundary(0xB543, 3); nes_cpu_instruction_boundary(0xB482, 2); func_B482_b1(); return;
}

void func_B546_b1(void) { /* SpitFlameSFXCont */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B546_b1");
#endif
label_B546:; /* SpitFlameSFXCont */
    /* $B546: 20 */ nes_cpu_instruction_boundary(0xB546, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x48; g_cpu.S--; func_B4D9_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB546, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B549:;
    /* $B549: D0 */ nes_cpu_instruction_boundary(0xB549, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B54E; }
label_B54B:;
    /* $B54B: 4C */ nes_cpu_instruction_boundary(0xB54B, 3); nes_cpu_instruction_boundary(0xB5BF, 2); func_B5BF_b1(); return;
label_B54E:; /* SpitFlameSFXCont_endIf_A */
    /* $B54E: AC */ nes_cpu_instruction_boundary(0xB54E, 4); g_cpu.Y = nes_read(0x0670); FLAG_NZ(g_cpu.Y);
label_B551:;
    /* $B551: B9 */ nes_cpu_instruction_boundary(0xB551, 4); g_cpu.A = nes_read((0xB52B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B554:;
    /* $B554: 8D */ nes_cpu_instruction_boundary(0xB554, 4); nes_write(0x400C, g_cpu.A);
label_B557:;
    /* $B557: EE */ nes_cpu_instruction_boundary(0xB557, 6); { uint16_t a=0x0670; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B55A:;
    /* $B55A: 60 */ nes_cpu_instruction_boundary(0xB55A, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B55B_b1(void) { /* ScrewAttackSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B55B_b1");
#endif
label_B55B:; /* ScrewAttackSFXInit */
    /* $B55B: A9 */ nes_cpu_instruction_boundary(0xB55B, 2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_B55D:;
    /* $B55D: A0 */ nes_cpu_instruction_boundary(0xB55D, 2); g_cpu.Y = 0x41; FLAG_NZ(g_cpu.Y);
label_B55F:;
    /* $B55F: 20 */ nes_cpu_instruction_boundary(0xB55F, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x61; g_cpu.S--; func_B482_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB55F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B562:;
    /* $B562: AD */ nes_cpu_instruction_boundary(0xB562, 4); g_cpu.A = nes_read(0xB243); FLAG_NZ(g_cpu.A);
label_B565:;
    /* $B565: 8D */ nes_cpu_instruction_boundary(0xB565, 4); nes_write(0x0670, g_cpu.A);
label_B568:; /* ScrewAttackSFXInit_RTS */
    /* $B568: 60 */ nes_cpu_instruction_boundary(0xB568, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B569_b1_body(int _entry) { /* ScrewAttackSFXCont */
    switch (_entry) {
        case 1: goto label_B587;
    }
label_B569:; /* ScrewAttackSFXCont */
    /* $B569: AD */ nes_cpu_instruction_boundary(0xB569, 4); g_cpu.A = nes_read(0x0678); FLAG_NZ(g_cpu.A);
label_B56C:;
    /* $B56C: C9 */ nes_cpu_instruction_boundary(0xB56C, 2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_B56E:;
    /* $B56E: F0 */ nes_cpu_instruction_boundary(0xB56E, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B579; }
label_B570:;
    /* $B570: 20 */ nes_cpu_instruction_boundary(0xB570, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x72; g_cpu.S--; func_B4D9_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB570, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B573:;
    /* $B573: D0 */ nes_cpu_instruction_boundary(0xB573, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB568); return; }
label_B575:;
    /* $B575: EE */ nes_cpu_instruction_boundary(0xB575, 6); { uint16_t a=0x0678; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B578:;
    /* $B578: 60 */ nes_cpu_instruction_boundary(0xB578, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B579:; /* ScrewAttackSFXCont_part2 */
    /* $B579: 20 */ nes_cpu_instruction_boundary(0xB579, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x7B; g_cpu.S--; func_B4D9_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB579, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B57C:;
    /* $B57C: D0 */ nes_cpu_instruction_boundary(0xB57C, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B594; }
label_B57E:;
    /* $B57E: CE */ nes_cpu_instruction_boundary(0xB57E, 6); { uint16_t a=0x0670; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B581:;
    /* $B581: CE */ nes_cpu_instruction_boundary(0xB581, 6); { uint16_t a=0x0670; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B584:;
    /* $B584: CE */ nes_cpu_instruction_boundary(0xB584, 6); { uint16_t a=0x0670; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B587:;
    /* $B587: EE */ nes_cpu_instruction_boundary(0xB587, 6); { uint16_t a=0x0674; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B58A:;
    /* $B58A: AD */ nes_cpu_instruction_boundary(0xB58A, 4); g_cpu.A = nes_read(0x0674); FLAG_NZ(g_cpu.A);
label_B58D:;
    /* $B58D: C9 */ nes_cpu_instruction_boundary(0xB58D, 2); { int r=g_cpu.A-0x0F; g_cpu.C=(g_cpu.A>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_B58F:;
    /* $B58F: D0 */ nes_cpu_instruction_boundary(0xB58F, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB568); return; }
label_B591:;
    /* $B591: 4C */ nes_cpu_instruction_boundary(0xB591, 3); nes_cpu_instruction_boundary(0xB5BF, 2); func_B5BF_b1(); return;
label_B594:; /* IncrementNoisePeriod */
    /* $B594: EE */ nes_cpu_instruction_boundary(0xB594, 6); { uint16_t a=0x0670; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B597:;
    /* $B597: AD */ nes_cpu_instruction_boundary(0xB597, 4); g_cpu.A = nes_read(0x0670); FLAG_NZ(g_cpu.A);
label_B59A:;
    /* $B59A: 8D */ nes_cpu_instruction_boundary(0xB59A, 4); nes_write(0x400E, g_cpu.A);
label_B59D:;
    /* $B59D: 60 */ nes_cpu_instruction_boundary(0xB59D, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B569_b1(void) { /* ScrewAttackSFXCont */
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

void func_B59E_b1_body(int _entry) { /* MissileLaunchSFXInit */
    switch (_entry) {
        case 1: goto label_B5A5;
    }
label_B59E:; /* MissileLaunchSFXInit */
    /* $B59E: A9 */ nes_cpu_instruction_boundary(0xB59E, 2); g_cpu.A = 0x18; FLAG_NZ(g_cpu.A);
label_B5A0:;
    /* $B5A0: A0 */ nes_cpu_instruction_boundary(0xB5A0, 2); g_cpu.Y = 0x45; FLAG_NZ(g_cpu.Y);
label_B5A2:;
    /* $B5A2: 20 */ nes_cpu_instruction_boundary(0xB5A2, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA4; g_cpu.S--; func_B5B7_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB5A2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
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

void func_B59E_b1(void) { /* MissileLaunchSFXInit */
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

void func_B5AB_b1(void) { /* MissileLaunchSFXCont */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5AB_b1");
#endif
label_B5AB:; /* MissileLaunchSFXCont */
    /* $B5AB: 20 */ nes_cpu_instruction_boundary(0xB5AB, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAD; g_cpu.S--; func_B4D9_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB5AB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B5AE:;
    /* $B5AE: D0 */ nes_cpu_instruction_boundary(0xB5AE, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB594); return; }
label_B5B0:;
    /* $B5B0: 4C */ nes_cpu_instruction_boundary(0xB5B0, 3); nes_cpu_instruction_boundary(0xB5BF, 2); func_B5BF_b1(); return;
}

void func_B5B3_b1(void) { /* BombExplodeSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5B3_b1");
#endif
label_B5B3:; /* BombExplodeSFXInit */
    /* $B5B3: A9 */ nes_cpu_instruction_boundary(0xB5B3, 2); g_cpu.A = 0x30; FLAG_NZ(g_cpu.A);
label_B5B5:;
    /* $B5B5: A0 */ nes_cpu_instruction_boundary(0xB5B5, 2); g_cpu.Y = 0x49; FLAG_NZ(g_cpu.Y);
label_B5B7:; /* GotoInitSFXData */
    /* $B5B7: 4C */ nes_cpu_instruction_boundary(0xB5B7, 3); nes_cpu_instruction_boundary(0xB482, 2); func_B482_b1(); return;
}

void func_B5BA_b1(void) { /* NoiseSFXCont */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5BA_b1");
#endif
label_B5BA:; /* NoiseSFXCont */
    /* $B5BA: 20 */ nes_cpu_instruction_boundary(0xB5BA, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; func_B4D9_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB5BA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B5BD:;
    /* $B5BD: D0 */ nes_cpu_instruction_boundary(0xB5BD, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B5C7; }
label_B5BF:; /* EndNoiseSFX */
    /* $B5BF: 20 */ nes_cpu_instruction_boundary(0xB5BF, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC1; g_cpu.S--; func_B4D2_b1();
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

void func_B5C8_b1(void) { /* SamusWalkSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5C8_b1");
#endif
label_B5C8:; /* SamusWalkSFXInit */
    /* $B5C8: AD */ nes_cpu_instruction_boundary(0xB5C8, 4); g_cpu.A = nes_read(0x0688); FLAG_NZ(g_cpu.A);
label_B5CB:;
    /* $B5CB: 29 */ nes_cpu_instruction_boundary(0xB5CB, 2); g_cpu.A &= 0x34; FLAG_NZ(g_cpu.A);
label_B5CD:;
    /* $B5CD: D0 */ nes_cpu_instruction_boundary(0xB5CD, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB5C7); return; }
label_B5CF:;
    /* $B5CF: A9 */ nes_cpu_instruction_boundary(0xB5CF, 2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_B5D1:;
    /* $B5D1: A0 */ nes_cpu_instruction_boundary(0xB5D1, 2); g_cpu.Y = 0x4D; FLAG_NZ(g_cpu.Y);
label_B5D3:;
    /* $B5D3: D0 */ nes_cpu_instruction_boundary(0xB5D3, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB5B7); return; }
label_B5D5:; /* MultiSFXInit */
    /* $B5D5: 8D */ nes_cpu_instruction_boundary(0xB5D5, 4); nes_write(0x0664, g_cpu.A);
label_B5D8:;
    /* $B5D8: 20 */ nes_cpu_instruction_boundary(0xB5D8, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDA; g_cpu.S--; func_B3A4_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB5D8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B5DB:;
    /* $B5DB: 20 */ nes_cpu_instruction_boundary(0xB5DB, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDD; g_cpu.S--; func_B4C3_b1();
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

void func_B6FD_b1_body(int _entry) { /* MissilePickupSFXInit */
    switch (_entry) {
        case 1: goto label_B703;
    }
label_B6FD:; /* MissilePickupSFXInit */
    /* $B6FD: A9 */ nes_cpu_instruction_boundary(0xB6FD, 2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_B6FF:;
    /* $B6FF: A0 */ nes_cpu_instruction_boundary(0xB6FF, 2); g_cpu.Y = 0x71; FLAG_NZ(g_cpu.Y);
label_B701:;
    /* $B701: D0 */ nes_cpu_instruction_boundary(0xB701, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B769; }
label_B703:; /* EnergyPickupSFXCont */
    /* $B703: 20 */ nes_cpu_instruction_boundary(0xB703, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x05; g_cpu.S--; func_B4D9_b1();
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
    /* $B714: 4C */ nes_cpu_instruction_boundary(0xB714, 3); nes_cpu_instruction_boundary(0xB398, 2); func_B398_b1(); return;
label_B722:; /* EndSQ1SFX */
    /* $B722: A9 */ nes_cpu_instruction_boundary(0xB722, 2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_B724:;
    /* $B724: 8D */ nes_cpu_instruction_boundary(0xB724, 4); nes_write(0x4000, g_cpu.A);
label_B727:;
    /* $B727: A9 */ nes_cpu_instruction_boundary(0xB727, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B729:;
    /* $B729: 8D */ nes_cpu_instruction_boundary(0xB729, 4); nes_write(0x0653, g_cpu.A);
label_B72C:;
    /* $B72C: 20 */ nes_cpu_instruction_boundary(0xB72C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2E; g_cpu.S--; func_B4D2_b1();
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
label_B733:; /* SamusJumpSFXInit */
    /* $B733: AD */ nes_cpu_instruction_boundary(0xB733, 4); g_cpu.A = nes_read(0x068D); FLAG_NZ(g_cpu.A);
label_B736:;
    /* $B736: C9 */ nes_cpu_instruction_boundary(0xB736, 2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_B738:;
    /* $B738: F0 */ nes_cpu_instruction_boundary(0xB738, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xB6FC); return; }
label_B73A:;
    /* $B73A: A9 */ nes_cpu_instruction_boundary(0xB73A, 2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_B73C:;
    /* $B73C: A0 */ nes_cpu_instruction_boundary(0xB73C, 2); g_cpu.Y = 0x81; FLAG_NZ(g_cpu.Y);
label_B73E:;
    /* $B73E: D0 */ nes_cpu_instruction_boundary(0xB73E, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B769; }
label_B740:; /* EnemyHitSFXInit */
    /* $B740: A9 */ nes_cpu_instruction_boundary(0xB740, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_B742:;
    /* $B742: A0 */ nes_cpu_instruction_boundary(0xB742, 2); g_cpu.Y = 0x85; FLAG_NZ(g_cpu.Y);
label_B744:;
    /* $B744: D0 */ nes_cpu_instruction_boundary(0xB744, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B769; }
label_B746:; /* BulletFireSFXInit */
    /* $B746: AD */ nes_cpu_instruction_boundary(0xB746, 4); g_cpu.A = nes_read(0x061F); FLAG_NZ(g_cpu.A);
label_B749:;
    /* $B749: 4A */ nes_cpu_instruction_boundary(0xB749, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B74A:;
    /* $B74A: B0 */ nes_cpu_instruction_boundary(0xB74A, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B78E; }
label_B74C:;
    /* $B74C: AD */ nes_cpu_instruction_boundary(0xB74C, 4); g_cpu.A = nes_read(0x0689); FLAG_NZ(g_cpu.A);
label_B74F:;
    /* $B74F: 29 */ nes_cpu_instruction_boundary(0xB74F, 2); g_cpu.A &= 0xCC; FLAG_NZ(g_cpu.A);
label_B751:;
    /* $B751: D0 */ nes_cpu_instruction_boundary(0xB751, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xB6FC); return; }
label_B753:;
    /* $B753: AD */ nes_cpu_instruction_boundary(0xB753, 4); g_cpu.A = nes_read(0x061F); FLAG_NZ(g_cpu.A);
label_B756:;
    /* $B756: 0A */ nes_cpu_instruction_boundary(0xB756, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_B757:;
    /* $B757: B0 */ nes_cpu_instruction_boundary(0xB757, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B75F; }
label_B759:;
    /* $B759: A9 */ nes_cpu_instruction_boundary(0xB759, 2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_B75B:;
    /* $B75B: A0 */ nes_cpu_instruction_boundary(0xB75B, 2); g_cpu.Y = 0x7D; FLAG_NZ(g_cpu.Y);
label_B75D:;
    /* $B75D: D0 */ nes_cpu_instruction_boundary(0xB75D, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B769; }
label_B75F:; /* HasLongBeamSFXInit */
    /* $B75F: A9 */ nes_cpu_instruction_boundary(0xB75F, 2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_B761:;
    /* $B761: A0 */ nes_cpu_instruction_boundary(0xB761, 2); g_cpu.Y = 0x79; FLAG_NZ(g_cpu.Y);
label_B763:;
    /* $B763: D0 */ nes_cpu_instruction_boundary(0xB763, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B769; }
label_B765:; /* MetalSFXInit */
    /* $B765: A9 */ nes_cpu_instruction_boundary(0xB765, 2); g_cpu.A = 0x0B; FLAG_NZ(g_cpu.A);
label_B767:;
    /* $B767: A0 */ nes_cpu_instruction_boundary(0xB767, 2); g_cpu.Y = 0x75; FLAG_NZ(g_cpu.Y);
label_B769:; /* GotoInitSFXData2 */
    /* $B769: 4C */ nes_cpu_instruction_boundary(0xB769, 3); nes_cpu_instruction_boundary(0xB482, 2); func_B482_b1(); return;
label_B78E:; /* HasIceBeamSFXInit */
    /* $B78E: A9 */ nes_cpu_instruction_boundary(0xB78E, 2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_B790:;
    /* $B790: A0 */ nes_cpu_instruction_boundary(0xB790, 2); g_cpu.Y = 0x91; FLAG_NZ(g_cpu.Y);
label_B792:;
    /* $B792: 4C */ nes_cpu_instruction_boundary(0xB792, 3); nes_cpu_instruction_boundary(0xB482, 2); func_B482_b1(); return;
}

void func_B6FD_b1(void) { /* MissilePickupSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6FD_b1");
#endif
    func_B6FD_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B703_b1(void) { /* EnergyPickupSFXCont */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B703_b1");
#endif
    func_B6FD_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B717_b1_body(int _entry) { /* EnergyPickupSFXInit */
    switch (_entry) {
        case 1: goto label_B71D;
        case 2: goto label_B733;
        case 3: goto label_B740;
        case 4: goto label_B746;
        case 5: goto label_B765;
    }
label_B717:; /* EnergyPickupSFXInit */
    /* $B717: A9 */ nes_cpu_instruction_boundary(0xB717, 2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_B719:;
    /* $B719: A0 */ nes_cpu_instruction_boundary(0xB719, 2); g_cpu.Y = 0x6D; FLAG_NZ(g_cpu.Y);
label_B71B:;
    /* $B71B: D0 */ nes_cpu_instruction_boundary(0xB71B, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B769; }
label_B71D:; /* SQ1SFXCont */
    /* $B71D: 20 */ nes_cpu_instruction_boundary(0xB71D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1F; g_cpu.S--; func_B4D9_b1();
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
    /* $B72C: 20 */ nes_cpu_instruction_boundary(0xB72C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2E; g_cpu.S--; func_B4D2_b1();
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
label_B733:; /* SamusJumpSFXInit */
    /* $B733: AD */ nes_cpu_instruction_boundary(0xB733, 4); g_cpu.A = nes_read(0x068D); FLAG_NZ(g_cpu.A);
label_B736:;
    /* $B736: C9 */ nes_cpu_instruction_boundary(0xB736, 2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_B738:;
    /* $B738: F0 */ nes_cpu_instruction_boundary(0xB738, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xB6FC); return; }
label_B73A:;
    /* $B73A: A9 */ nes_cpu_instruction_boundary(0xB73A, 2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_B73C:;
    /* $B73C: A0 */ nes_cpu_instruction_boundary(0xB73C, 2); g_cpu.Y = 0x81; FLAG_NZ(g_cpu.Y);
label_B73E:;
    /* $B73E: D0 */ nes_cpu_instruction_boundary(0xB73E, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B769; }
label_B740:; /* EnemyHitSFXInit */
    /* $B740: A9 */ nes_cpu_instruction_boundary(0xB740, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_B742:;
    /* $B742: A0 */ nes_cpu_instruction_boundary(0xB742, 2); g_cpu.Y = 0x85; FLAG_NZ(g_cpu.Y);
label_B744:;
    /* $B744: D0 */ nes_cpu_instruction_boundary(0xB744, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B769; }
label_B746:; /* BulletFireSFXInit */
    /* $B746: AD */ nes_cpu_instruction_boundary(0xB746, 4); g_cpu.A = nes_read(0x061F); FLAG_NZ(g_cpu.A);
label_B749:;
    /* $B749: 4A */ nes_cpu_instruction_boundary(0xB749, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B74A:;
    /* $B74A: B0 */ nes_cpu_instruction_boundary(0xB74A, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B78E; }
label_B74C:;
    /* $B74C: AD */ nes_cpu_instruction_boundary(0xB74C, 4); g_cpu.A = nes_read(0x0689); FLAG_NZ(g_cpu.A);
label_B74F:;
    /* $B74F: 29 */ nes_cpu_instruction_boundary(0xB74F, 2); g_cpu.A &= 0xCC; FLAG_NZ(g_cpu.A);
label_B751:;
    /* $B751: D0 */ nes_cpu_instruction_boundary(0xB751, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xB6FC); return; }
label_B753:;
    /* $B753: AD */ nes_cpu_instruction_boundary(0xB753, 4); g_cpu.A = nes_read(0x061F); FLAG_NZ(g_cpu.A);
label_B756:;
    /* $B756: 0A */ nes_cpu_instruction_boundary(0xB756, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_B757:;
    /* $B757: B0 */ nes_cpu_instruction_boundary(0xB757, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B75F; }
label_B759:;
    /* $B759: A9 */ nes_cpu_instruction_boundary(0xB759, 2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_B75B:;
    /* $B75B: A0 */ nes_cpu_instruction_boundary(0xB75B, 2); g_cpu.Y = 0x7D; FLAG_NZ(g_cpu.Y);
label_B75D:;
    /* $B75D: D0 */ nes_cpu_instruction_boundary(0xB75D, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B769; }
label_B75F:; /* HasLongBeamSFXInit */
    /* $B75F: A9 */ nes_cpu_instruction_boundary(0xB75F, 2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_B761:;
    /* $B761: A0 */ nes_cpu_instruction_boundary(0xB761, 2); g_cpu.Y = 0x79; FLAG_NZ(g_cpu.Y);
label_B763:;
    /* $B763: D0 */ nes_cpu_instruction_boundary(0xB763, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B769; }
label_B765:; /* MetalSFXInit */
    /* $B765: A9 */ nes_cpu_instruction_boundary(0xB765, 2); g_cpu.A = 0x0B; FLAG_NZ(g_cpu.A);
label_B767:;
    /* $B767: A0 */ nes_cpu_instruction_boundary(0xB767, 2); g_cpu.Y = 0x75; FLAG_NZ(g_cpu.Y);
label_B769:; /* GotoInitSFXData2 */
    /* $B769: 4C */ nes_cpu_instruction_boundary(0xB769, 3); nes_cpu_instruction_boundary(0xB482, 2); func_B482_b1(); return;
label_B78E:; /* HasIceBeamSFXInit */
    /* $B78E: A9 */ nes_cpu_instruction_boundary(0xB78E, 2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_B790:;
    /* $B790: A0 */ nes_cpu_instruction_boundary(0xB790, 2); g_cpu.Y = 0x91; FLAG_NZ(g_cpu.Y);
label_B792:;
    /* $B792: 4C */ nes_cpu_instruction_boundary(0xB792, 3); nes_cpu_instruction_boundary(0xB482, 2); func_B482_b1(); return;
}

void func_B717_b1(void) { /* EnergyPickupSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B717_b1");
#endif
    func_B717_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B71D_b1(void) { /* SQ1SFXCont */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B71D_b1");
#endif
    func_B717_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B733_b1(void) { /* SamusJumpSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B733_b1");
#endif
    func_B717_b1_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B740_b1(void) { /* EnemyHitSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B740_b1");
#endif
    func_B717_b1_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B746_b1(void) { /* BulletFireSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B746_b1");
#endif
    func_B717_b1_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B765_b1(void) { /* MetalSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B765_b1");
#endif
    func_B717_b1_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B76C_b1_body(int _entry) { /* OutOfPipeSFXInit */
    switch (_entry) {
        case 1: goto label_B77F;
        case 2: goto label_B7AA;
    }
label_B76C:; /* OutOfPipeSFXInit */
    /* $B76C: AD */ nes_cpu_instruction_boundary(0xB76C, 4); g_cpu.A = nes_read(0x068D); FLAG_NZ(g_cpu.A);
label_B76F:;
    /* $B76F: C9 */ nes_cpu_instruction_boundary(0xB76F, 2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_B771:;
    /* $B771: F0 */ nes_cpu_instruction_boundary(0xB771, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B779; }
label_B773:;
    /* $B773: A9 */ nes_cpu_instruction_boundary(0xB773, 2); g_cpu.A = 0x16; FLAG_NZ(g_cpu.A);
label_B775:;
    /* $B775: A0 */ nes_cpu_instruction_boundary(0xB775, 2); g_cpu.Y = 0x89; FLAG_NZ(g_cpu.Y);
label_B777:;
    /* $B777: D0 */ nes_cpu_instruction_boundary(0xB777, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB769); return; }
label_B779:; /* OutOfPipeSFXInit_timeBombTickSFXInit */
    /* $B779: A9 */ nes_cpu_instruction_boundary(0xB779, 2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_B77B:;
    /* $B77B: A0 */ nes_cpu_instruction_boundary(0xB77B, 2); g_cpu.Y = 0x69; FLAG_NZ(g_cpu.Y);
label_B77D:;
    /* $B77D: D0 */ nes_cpu_instruction_boundary(0xB77D, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB769); return; }
label_B77F:; /* BulletFireSFXCont */
    /* $B77F: AD */ nes_cpu_instruction_boundary(0xB77F, 4); g_cpu.A = nes_read(0x061F); FLAG_NZ(g_cpu.A);
label_B782:;
    /* $B782: 4A */ nes_cpu_instruction_boundary(0xB782, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B783:;
    /* $B783: B0 */ nes_cpu_instruction_boundary(0xB783, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B795; }
label_B785:;
    /* $B785: 20 */ nes_cpu_instruction_boundary(0xB785, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x87; g_cpu.S--; func_B4D9_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB785, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B788:;
    /* $B788: D0 */ nes_cpu_instruction_boundary(0xB788, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B78D; }
label_B78A:;
    /* $B78A: 4C */ nes_cpu_instruction_boundary(0xB78A, 3); nes_cpu_instruction_boundary(0xB722, 2); func_B722_b1(); return;
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
    /* $B792: 4C */ nes_cpu_instruction_boundary(0xB792, 3); nes_cpu_instruction_boundary(0xB482, 2); func_B482_b1(); return;
label_B795:; /* HasIceBeamSFXCont */
    /* $B795: 20 */ nes_cpu_instruction_boundary(0xB795, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x97; g_cpu.S--; func_B4D9_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB795, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B798:;
    /* $B798: D0 */ nes_cpu_instruction_boundary(0xB798, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B79D; }
label_B79A:;
    /* $B79A: 4C */ nes_cpu_instruction_boundary(0xB79A, 3); nes_cpu_instruction_boundary(0xB722, 2); func_B722_b1(); return;
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
    /* $B7AE: 4C */ nes_cpu_instruction_boundary(0xB7AE, 3); nes_cpu_instruction_boundary(0xB482, 2); func_B482_b1(); return;
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

void func_B76C_b1(void) { /* OutOfPipeSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B76C_b1");
#endif
    func_B76C_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B77F_b1(void) { /* BulletFireSFXCont */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B77F_b1");
#endif
    func_B76C_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B7AA_b1(void) { /* WaveBeamSFXInit */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7AA_b1");
#endif
    func_B76C_b1_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B98C_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B98C_b1");
#endif
label_B98C:;
    /* $B98C: 8D */ nes_cpu_instruction_boundary(0xB98C, 4); nes_write(0x0612, g_cpu.A);
label_B98F:;
    /* $B98F: A9 */ nes_cpu_instruction_boundary(0xB98F, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B991:;
    /* $B991: 8D */ nes_cpu_instruction_boundary(0xB991, 4); nes_write(0x0613, g_cpu.A);
label_B994:;
    /* $B994: 20 */ nes_cpu_instruction_boundary(0xB994, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x96; g_cpu.S--; func_B9A8_b1();
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
    /* $B99F: 4C */ nes_cpu_instruction_boundary(0xB99F, 3); nes_cpu_instruction_boundary(0xB899, 2); func_B899_b1(); return;
}

void func_B9A0_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9A0_b1");
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

void func_B9E4_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9E4_b1");
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

void func_B9E5_b1_body(int _entry) { /* DivideSFXTriPeriod_loop */
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

void func_B9E5_b1(void) { /* DivideSFXTriPeriod_loop */
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

void func_BCA7_b1(void) { /* GotoMusic00Init */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCA7_b1");
#endif
label_BCA7:; /* GotoMusic00Init */
    /* $BCA7: 4C */ nes_cpu_instruction_boundary(0xBCA7, 3); nes_cpu_instruction_boundary(0xBCDA, 2); func_BCDA_b1(); return;
}

void func_BCAD_b1(void) { /* GotoMusic02Init */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCAD_b1");
#endif
label_BCAD:; /* GotoMusic02Init */
    /* $BCAD: 4C */ nes_cpu_instruction_boundary(0xBCAD, 3); nes_cpu_instruction_boundary(0xBCCA, 2); func_BCCA_b1(); return;
}

void func_BCB0_b1(void) { /* GotoMusic03Init */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCB0_b1");
#endif
label_BCB0:; /* GotoMusic03Init */
    /* $BCB0: 4C */ nes_cpu_instruction_boundary(0xBCB0, 3); nes_cpu_instruction_boundary(0xBCC6, 2); func_BCC6_b1(); return;
}

void func_BCB3_b1(void) { /* GotoMusic04Init */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCB3_b1");
#endif
label_BCB3:; /* GotoMusic04Init */
    /* $BCB3: 4C */ nes_cpu_instruction_boundary(0xBCB3, 3); nes_cpu_instruction_boundary(0xBCB9, 2); func_BCB9_b1(); return;
}

void func_BC1C_b1_body(int _entry) {
    switch (_entry) {
        case 1: goto label_BC27;
    }
label_BC1C:;
    /* $BC1C: 31 */ nes_cpu_instruction_boundary(0xBC1C, 5); g_cpu.A &= nes_read((nes_read16zp(0xB2) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BC1E:;
    /* $BC1E: 8D */ nes_cpu_instruction_boundary(0xBC1E, 4); nes_write(0x400E, g_cpu.A);
label_BC21:;
    /* $BC21: B9 */ nes_cpu_instruction_boundary(0xBC21, 4); g_cpu.A = nes_read((0xB232 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BC24:;
    /* $BC24: 8D */ nes_cpu_instruction_boundary(0xBC24, 4); nes_write(0x400F, g_cpu.A);
label_BC27:; /* MusicChannelInstr_SongNoteNoise_endIf_A */
    /* $BC27: 4C */ nes_cpu_instruction_boundary(0xBC27, 3); nes_cpu_instruction_boundary(0xBBD8, 2); func_BBD8_b1(); return;
}

void func_BC1C_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC1C_b1");
#endif
    func_BC1C_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BC27_b1(void) { /* MusicChannelInstr_SongNoteNoise_endIf_A */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC27_b1");
#endif
    func_BC1C_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BC53_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC53_b1");
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
    /* $BC72: 20 */ nes_cpu_instruction_boundary(0xBC72, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x74; g_cpu.S--; func_B4ED_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC72, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC75:;
    /* $BC75: 20 */ nes_cpu_instruction_boundary(0xBC75, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x77; g_cpu.S--; func_BC83_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC75, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC78:;
    /* $BC78: 6C */ nes_cpu_instruction_boundary(0xBC78, 5); { uint16_t _jt = nes_read16zp(0xE2); nes_cpu_instruction_boundary(_jt, 2); call_by_address_tail(_jt, -1); return; }
}

void func_BC64_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC64_b1");
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
    /* $BC72: 20 */ nes_cpu_instruction_boundary(0xBC72, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x74; g_cpu.S--; func_B4ED_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC72, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC75:;
    /* $BC75: 20 */ nes_cpu_instruction_boundary(0xBC75, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x77; g_cpu.S--; func_BC83_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC75, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC78:;
    /* $BC78: 6C */ nes_cpu_instruction_boundary(0xBC78, 5); { uint16_t _jt = nes_read16zp(0xE2); nes_cpu_instruction_boundary(_jt, 2); call_by_address_tail(_jt, -1); return; }
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

void func_B568_b1(void) { /* ScrewAttackSFXInit_RTS */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B568_b1");
#endif
label_B568:; /* ScrewAttackSFXInit_RTS */
    /* $B568: 60 */ nes_cpu_instruction_boundary(0xB568, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B594_b1(void) { /* IncrementNoisePeriod */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B594_b1");
#endif
label_B594:; /* IncrementNoisePeriod */
    /* $B594: EE */ nes_cpu_instruction_boundary(0xB594, 6); { uint16_t a=0x0670; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B597:;
    /* $B597: AD */ nes_cpu_instruction_boundary(0xB597, 4); g_cpu.A = nes_read(0x0670); FLAG_NZ(g_cpu.A);
label_B59A:;
    /* $B59A: 8D */ nes_cpu_instruction_boundary(0xB59A, 4); nes_write(0x400E, g_cpu.A);
label_B59D:;
    /* $B59D: 60 */ nes_cpu_instruction_boundary(0xB59D, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B769_b1(void) { /* GotoInitSFXData2 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B769_b1");
#endif
label_B769:; /* GotoInitSFXData2 */
    /* $B769: 4C */ nes_cpu_instruction_boundary(0xB769, 3); nes_cpu_instruction_boundary(0xB482, 2); func_B482_b1(); return;
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

void func_A7AD_b1_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B503;
        case 2: goto label_B91C;
        case 3: goto label_B8D6;
        case 4: goto label_B6C4;
        case 5: goto label_B920;
    }
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
label_A85D:;
    /* $A85D: 10 */ nes_cpu_instruction_boundary(0xA85D, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xA862); return; }
label_A85F:;
    /* $A85F: 04 */ nes_cpu_instruction_boundary(0xA85F, 3); (void)nes_read(0x1F); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A861:;
    /* $A861: 01 */ nes_cpu_instruction_boundary(0xA861, 6); g_cpu.A |= nes_read(nes_read16zp((0x08 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A863:;
    /* $A863: 1F */ nes_cpu_instruction_boundary(0xA863, 7); { uint16_t a=(0x0C01 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A866:;
    /* $A866: 11 */ nes_cpu_instruction_boundary(0xA866, 5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A868:;
    /* $A868: 12 */ nes_cpu_instruction_boundary(0xA868, 2); /* ILLEGAL $12 — skip 1 */
label_A869:;
    /* $A869: 31 */ nes_cpu_instruction_boundary(0xA869, 5); g_cpu.A &= nes_read((nes_read16zp(0x03) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A86B:;
    /* $A86B: 44 */ nes_cpu_instruction_boundary(0xA86B, 3); (void)nes_read(0x1F); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A86D:;
    /* $A86D: 01 */ nes_cpu_instruction_boundary(0xA86D, 6); g_cpu.A |= nes_read(nes_read16zp((0x48 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A86F:;
    /* $A86F: 1F */ nes_cpu_instruction_boundary(0xA86F, 7); { uint16_t a=(0x8401 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A872:;
    /* $A872: 1F */ nes_cpu_instruction_boundary(0xA872, 7); { uint16_t a=(0x8801 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A875:;
    /* $A875: 1F */ nes_cpu_instruction_boundary(0xA875, 7); { uint16_t a=(0xD001 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A878:;
    /* $A878: 1F */ nes_cpu_instruction_boundary(0xA878, 7); { uint16_t a=(0xD401 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A87B:;
    /* $A87B: 1F */ nes_cpu_instruction_boundary(0xA87B, 7); { uint16_t a=(0xD801 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A87E:;
    /* $A87E: 10 */ nes_cpu_instruction_boundary(0xA87E, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A883; }
label_A880:;
    /* $A880: FD */ nes_cpu_instruction_boundary(0xA880, 4); { uint8_t m=nes_read((0x0551 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A883:;
    /* $A883: C0 */ nes_cpu_instruction_boundary(0xA883, 2); { int r=g_cpu.Y-0x41; g_cpu.C=(g_cpu.Y>=0x41)?1:0; FLAG_NZ(r&0xFF); }
label_A885:;
    /* $A885: 05 */ nes_cpu_instruction_boundary(0xA885, 3); g_cpu.A |= nes_read(0xCA); FLAG_NZ(g_cpu.A);
label_A887:;
    /* $A887: 31 */ nes_cpu_instruction_boundary(0xA887, 5); g_cpu.A &= nes_read((nes_read16zp(0x06) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A889:;
    /* $A889: 3C */ nes_cpu_instruction_boundary(0xA889, 4); (void)nes_read((0x02FF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A88C:;
    /* $A88C: 00 */ nes_cpu_instruction_boundary(0xA88C, 7); nes_brk_executed(0xA88C); return;
label_A88D:;
    /* $A88D: 28 */ nes_cpu_instruction_boundary(0xA88D, 4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_A88E:;
    /* $A88E: 02 */ nes_cpu_instruction_boundary(0xA88E, 2); /* ILLEGAL $02 — skip 1 */
label_A88F:;
    /* $A88F: 01 */ nes_cpu_instruction_boundary(0xA88F, 6); g_cpu.A |= nes_read(nes_read16zp((0x2D + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A891:;
    /* $A891: 02 */ nes_cpu_instruction_boundary(0xA891, 2); /* ILLEGAL $02 — skip 1 */
label_A892:;
    /* $A892: 09 */ nes_cpu_instruction_boundary(0xA892, 2); g_cpu.A |= 0x2D; FLAG_NZ(g_cpu.A);
label_A894:;
    /* $A894: 02 */ nes_cpu_instruction_boundary(0xA894, 2); /* ILLEGAL $02 — skip 1 */
label_A895:;
    /* $A895: 50 */ nes_cpu_instruction_boundary(0xA895, 2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_A89B; }
label_A897:;
    /* $A897: 02 */ nes_cpu_instruction_boundary(0xA897, 2); /* ILLEGAL $02 — skip 1 */
label_A898:;
    /* $A898: 80 */ nes_cpu_instruction_boundary(0xA898, 2); /* NOP */
label_A89A:;
    /* $A89A: 02 */ nes_cpu_instruction_boundary(0xA89A, 2); /* ILLEGAL $02 — skip 1 */
label_A89B:;
    /* $A89B: 81 */ nes_cpu_instruction_boundary(0xA89B, 6); nes_write(nes_read16zp((0x14 + g_cpu.X) & 0xFF), g_cpu.A);
label_A89D:;
    /* $A89D: 00 */ nes_cpu_instruction_boundary(0xA89D, 7); nes_brk_executed(0xA89D); return;
label_A89E:;
    /* $A89E: 95 */ nes_cpu_instruction_boundary(0xA89E, 4); nes_write((0x15 + g_cpu.X) & 0xFF, g_cpu.A);
label_A8A0:;
    /* $A8A0: 00 */ nes_cpu_instruction_boundary(0xA8A0, 7); nes_brk_executed(0xA8A0); return;
label_A8A1:;
    /* $A8A1: D0 */ nes_cpu_instruction_boundary(0xA8A1, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xA8D0); return; }
label_A8A3:;
    /* $A8A3: 02 */ nes_cpu_instruction_boundary(0xA8A3, 2); /* ILLEGAL $02 — skip 1 */
label_A8A4:;
    /* $A8A4: D8 */ nes_cpu_instruction_boundary(0xA8A4, 2); g_cpu.D = 0;
label_A8A5:;
    /* $A8A5: 2D */ nes_cpu_instruction_boundary(0xA8A5, 4); g_cpu.A &= nes_read(0xFD02); FLAG_NZ(g_cpu.A);
label_A8A8:;
    /* $A8A8: 02 */ nes_cpu_instruction_boundary(0xA8A8, 2); /* ILLEGAL $02 — skip 1 */
label_A8A9:;
    /* $A8A9: B0 */ nes_cpu_instruction_boundary(0xA8A9, 2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xA8AC); return; }
label_A8AB:;
    /* $A8AB: 05 */ nes_cpu_instruction_boundary(0xA8AB, 3); g_cpu.A |= nes_read(0xC7); FLAG_NZ(g_cpu.A);
label_A8AD:;
    /* $A8AD: 11 */ nes_cpu_instruction_boundary(0xA8AD, 5); g_cpu.A |= nes_read((nes_read16zp(0x85) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8AF:;
    /* $A8AF: CA */ nes_cpu_instruction_boundary(0xA8AF, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A8B0:;
    /* $A8B0: FF */ nes_cpu_instruction_boundary(0xA8B0, 7); { uint16_t a=(0x0000 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A8B3:;
    /* $A8B3: 14 */ nes_cpu_instruction_boundary(0xA8B3, 4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A8B5:;
    /* $A8B5: 04 */ nes_cpu_instruction_boundary(0xA8B5, 3); (void)nes_read(0x15); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A8B7:;
    /* $A8B7: 00 */ nes_cpu_instruction_boundary(0xA8B7, 7); nes_brk_executed(0xA8B7); return;
label_A8B8:;
    /* $A8B8: 08 */ nes_cpu_instruction_boundary(0xA8B8, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A8B9:;
    /* $A8B9: 14 */ nes_cpu_instruction_boundary(0xA8B9, 4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A8BB:;
    /* $A8BB: 0A */ nes_cpu_instruction_boundary(0xA8BB, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A8BC:;
    /* $A8BC: 15 */ nes_cpu_instruction_boundary(0xA8BC, 4); g_cpu.A |= nes_read((0x00 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A8BE:;
    /* $A8BE: 97 */ nes_cpu_instruction_boundary(0xA8BE, 4); nes_write((0x06 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_A8C0:;
    /* $A8C0: 03 */ nes_cpu_instruction_boundary(0xA8C0, 8); { uint16_t a=nes_read16zp((0xA0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A8C2:;
    /* $A8C2: 0B */ nes_cpu_instruction_boundary(0xA8C2, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A8C4:;
    /* $A8C4: A6 */ nes_cpu_instruction_boundary(0xA8C4, 3); g_cpu.X = nes_read(0x15); FLAG_NZ(g_cpu.X);
label_A8C6:;
    /* $A8C6: 00 */ nes_cpu_instruction_boundary(0xA8C6, 7); nes_brk_executed(0xA8C6); return;
label_A8C7:;
    /* $A8C7: A8 */ nes_cpu_instruction_boundary(0xA8C7, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A8C8:;
    /* $A8C8: 15 */ nes_cpu_instruction_boundary(0xA8C8, 4); g_cpu.A |= nes_read((0x00 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A8CA:;
    /* $A8CA: AE */ nes_cpu_instruction_boundary(0xA8CA, 4); g_cpu.X = nes_read(0x030B); FLAG_NZ(g_cpu.X);
label_A8CD:;
    /* $A8CD: B4 */ nes_cpu_instruction_boundary(0xA8CD, 4); g_cpu.Y = nes_read((0x06 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_A8CF:;
    /* $A8CF: 03 */ nes_cpu_instruction_boundary(0xA8CF, 8); { uint16_t a=nes_read16zp((0xBA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A8D1:;
    /* $A8D1: 06 */ nes_cpu_instruction_boundary(0xA8D1, 5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8D3:;
    /* $A8D3: C2 */ nes_cpu_instruction_boundary(0xA8D3, 2); /* NOP */
label_A8D5:;
    /* $A8D5: 03 */ nes_cpu_instruction_boundary(0xA8D5, 8); { uint16_t a=nes_read16zp((0xD2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A8D7:;
    /* $A8D7: 00 */ nes_cpu_instruction_boundary(0xA8D7, 7); nes_brk_executed(0xA8D7); return;
label_A8D8:;
    /* $A8D8: 02 */ nes_cpu_instruction_boundary(0xA8D8, 2); /* ILLEGAL $02 — skip 1 */
label_A8D9:;
    /* $A8D9: D6 */ nes_cpu_instruction_boundary(0xA8D9, 6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8DB:;
    /* $A8DB: 02 */ nes_cpu_instruction_boundary(0xA8DB, 2); /* ILLEGAL $02 — skip 1 */
label_A8DC:;
    /* $A8DC: FD */ nes_cpu_instruction_boundary(0xA8DC, 4); { uint8_t m=nes_read((0x0541 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A8DF:;
    /* $A8DF: AA */ nes_cpu_instruction_boundary(0xA8DF, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A8E0:;
    /* $A8E0: 21 */ nes_cpu_instruction_boundary(0xA8E0, 6); g_cpu.A &= nes_read(nes_read16zp((0x06 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A8E2:;
    /* $A8E2: 17 */ nes_cpu_instruction_boundary(0xA8E2, 6); { uint16_t a=(0x11 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A8E4:;
    /* $A8E4: 05 */ nes_cpu_instruction_boundary(0xA8E4, 3); g_cpu.A |= nes_read(0xA4); FLAG_NZ(g_cpu.A);
label_A8E6:;
    /* $A8E6: FF */ nes_cpu_instruction_boundary(0xA8E6, 7); { uint16_t a=(0x0000 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A8E9:;
    /* $A8E9: 15 */ nes_cpu_instruction_boundary(0xA8E9, 4); g_cpu.A |= nes_read((0x00 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A8EB:;
    /* $A8EB: 01 */ nes_cpu_instruction_boundary(0xA8EB, 6); g_cpu.A |= nes_read(nes_read16zp((0x0D + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A8ED:;
    /* $A8ED: 03 */ nes_cpu_instruction_boundary(0xA8ED, 8); { uint16_t a=nes_read16zp((0x09 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A8EF:;
    /* $A8EF: 0E */ nes_cpu_instruction_boundary(0xA8EF, 6); { uint16_t a=0x2A01; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8F2:;
    /* $A8F2: 23 */ nes_cpu_instruction_boundary(0xA8F2, 8); { uint16_t a=nes_read16zp((0x01 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A8F4:;
    /* $A8F4: 37 */ nes_cpu_instruction_boundary(0xA8F4, 6); { uint16_t a=(0x22 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A8F6:;
    /* $A8F6: 03 */ nes_cpu_instruction_boundary(0xA8F6, 8); { uint16_t a=nes_read16zp((0x4D + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A8F8:;
    /* $A8F8: 0E */ nes_cpu_instruction_boundary(0xA8F8, 6); { uint16_t a=0x5001; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8FB:;
    /* $A8FB: 03 */ nes_cpu_instruction_boundary(0xA8FB, 8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A8FD:;
    /* $A8FD: 6A */ nes_cpu_instruction_boundary(0xA8FD, 2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_A8FE:;
    /* $A8FE: 16 */ nes_cpu_instruction_boundary(0xA8FE, 6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A900:;
    /* $A900: 6D */ nes_cpu_instruction_boundary(0xA900, 4); { uint8_t m=nes_read(0x010E); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A903:;
    /* $A903: 80 */ nes_cpu_instruction_boundary(0xA903, 2); /* NOP */
label_A905:;
    /* $A905: 00 */ nes_cpu_instruction_boundary(0xA905, 7); nes_brk_executed(0xA905); return;
label_A906:;
    /* $A906: 87 */ nes_cpu_instruction_boundary(0xA906, 3); nes_write(0x02, g_cpu.A & g_cpu.X); /* SAX */
label_A908:;
    /* $A908: 02 */ nes_cpu_instruction_boundary(0xA908, 2); /* ILLEGAL $02 — skip 1 */
label_A909:;
    /* $A909: 89 */ nes_cpu_instruction_boundary(0xA909, 2); /* NOP */
label_A90B:;
    /* $A90B: 00 */ nes_cpu_instruction_boundary(0xA90B, 7); nes_brk_executed(0xA90B); return;
label_A90C:;
    /* $A90C: FD */ nes_cpu_instruction_boundary(0xA90C, 4); { uint8_t m=nes_read((0xB102 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A90F:;
    /* $A90F: FF */ nes_cpu_instruction_boundary(0xA90F, 7); { uint16_t a=(0x0001 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A912:;
    /* $A912: 0E */ nes_cpu_instruction_boundary(0xA912, 6); { uint16_t a=0x0801; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A915:;
    /* $A915: 0E */ nes_cpu_instruction_boundary(0xA915, 6); { uint16_t a=0x4401; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A918:;
    /* $A918: 0E */ nes_cpu_instruction_boundary(0xA918, 6); { uint16_t a=0x8401; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A91B:;
    /* $A91B: 0F */ nes_cpu_instruction_boundary(0xA91B, 6); { uint16_t a=0x9401; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A91E:;
    /* $A91E: 0E */ nes_cpu_instruction_boundary(0xA91E, 6); { uint16_t a=0xB001; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A921:;
    /* $A921: 0E */ nes_cpu_instruction_boundary(0xA921, 6); { uint16_t a=0xB801; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A924:;
    /* $A924: 0E */ nes_cpu_instruction_boundary(0xA924, 6); { uint16_t a=0xFD01; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A927:;
    /* $A927: 31 */ nes_cpu_instruction_boundary(0xA927, 5); g_cpu.A &= nes_read((nes_read16zp(0x06) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A929:;
    /* $A929: 42 */ nes_cpu_instruction_boundary(0xA929, 2); /* ILLEGAL $42 — skip 1 */
label_A92A:;
    /* $A92A: FF */ nes_cpu_instruction_boundary(0xA92A, 7); { uint16_t a=(0x0001 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A92D:;
    /* $A92D: 0E */ nes_cpu_instruction_boundary(0xA92D, 6); { uint16_t a=0x0201; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A930:;
    /* $A930: 2A */ nes_cpu_instruction_boundary(0xA930, 2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_A931:;
    /* $A931: 01 */ nes_cpu_instruction_boundary(0xA931, 6); g_cpu.A |= nes_read(nes_read16zp((0x07 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A933:;
    /* $A933: 25 */ nes_cpu_instruction_boundary(0xA933, 3); g_cpu.A &= nes_read(0x01); FLAG_NZ(g_cpu.A);
label_A935:;
    /* $A935: 08 */ nes_cpu_instruction_boundary(0xA935, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A936:;
    /* $A936: 0E */ nes_cpu_instruction_boundary(0xA936, 6); { uint16_t a=0x1001; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A939:;
    /* $A939: 0E */ nes_cpu_instruction_boundary(0xA939, 6); { uint16_t a=0x1201; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A93C:;
    /* $A93C: 2A */ nes_cpu_instruction_boundary(0xA93C, 2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_A93D:;
    /* $A93D: 01 */ nes_cpu_instruction_boundary(0xA93D, 6); g_cpu.A |= nes_read(nes_read16zp((0x17 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A93F:;
    /* $A93F: 25 */ nes_cpu_instruction_boundary(0xA93F, 3); g_cpu.A &= nes_read(0x01); FLAG_NZ(g_cpu.A);
label_A941:;
    /* $A941: 18 */ nes_cpu_instruction_boundary(0xA941, 2); g_cpu.C = 0;
label_A942:;
    /* $A942: 0E */ nes_cpu_instruction_boundary(0xA942, 6); { uint16_t a=0x5001; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A945:;
    /* $A945: 03 */ nes_cpu_instruction_boundary(0xA945, 8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A947:;
    /* $A947: 5F */ nes_cpu_instruction_boundary(0xA947, 7); { uint16_t a=(0x0203 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A94A:;
    /* $A94A: 74 */ nes_cpu_instruction_boundary(0xA94A, 4); (void)nes_read((0x26 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A94C:;
    /* $A94C: 01 */ nes_cpu_instruction_boundary(0xA94C, 6); g_cpu.A |= nes_read(nes_read16zp((0x78 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A94E:;
    /* $A94E: 26 */ nes_cpu_instruction_boundary(0xA94E, 5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A950:;
    /* $A950: 80 */ nes_cpu_instruction_boundary(0xA950, 2); /* NOP */
label_A952:;
    /* $A952: 01 */ nes_cpu_instruction_boundary(0xA952, 6); g_cpu.A |= nes_read(nes_read16zp((0x88 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A954:;
    /* $A954: 0E */ nes_cpu_instruction_boundary(0xA954, 6); { uint16_t a=0xC001; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A957:;
    /* $A957: 24 */ nes_cpu_instruction_boundary(0xA957, 3); { uint8_t m=nes_read(0x01); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A959:;
    /* $A959: CC */ nes_cpu_instruction_boundary(0xA959, 4); { uint8_t m=nes_read(0x0124); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A95C:;
    /* $A95C: D4 */ nes_cpu_instruction_boundary(0xA95C, 4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A95E:;
    /* $A95E: 02 */ nes_cpu_instruction_boundary(0xA95E, 2); /* ILLEGAL $02 — skip 1 */
label_A95F:;
    /* $A95F: FD */ nes_cpu_instruction_boundary(0xA95F, 4); { uint8_t m=nes_read((0xA102 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A962:;
    /* $A962: 02 */ nes_cpu_instruction_boundary(0xA962, 2); /* ILLEGAL $02 — skip 1 */
label_A963:;
    /* $A963: B1 */ nes_cpu_instruction_boundary(0xA963, 5); g_cpu.A = nes_read((nes_read16zp(0x11) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A965:;
    /* $A965: 02 */ nes_cpu_instruction_boundary(0xA965, 2); /* ILLEGAL $02 — skip 1 */
label_A966:;
    /* $A966: 52 */ nes_cpu_instruction_boundary(0xA966, 2); /* ILLEGAL $52 — skip 1 */
label_A967:;
    /* $A967: 01 */ nes_cpu_instruction_boundary(0xA967, 6); g_cpu.A |= nes_read(nes_read16zp((0x03 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A969:;
    /* $A969: C8 */ nes_cpu_instruction_boundary(0xA969, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A96A:;
    /* $A96A: FF */ nes_cpu_instruction_boundary(0xA96A, 7); { uint16_t a=(0x0001 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A96D:;
    /* $A96D: 27 */ nes_cpu_instruction_boundary(0xA96D, 5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A96F:;
    /* $A96F: 08 */ nes_cpu_instruction_boundary(0xA96F, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A970:;
    /* $A970: 27 */ nes_cpu_instruction_boundary(0xA970, 5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A972:;
    /* $A972: 10 */ nes_cpu_instruction_boundary(0xA972, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xA998); return; }
label_A974:;
    /* $A974: 01 */ nes_cpu_instruction_boundary(0xA974, 6); g_cpu.A |= nes_read(nes_read16zp((0x50 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A976:;
    /* $A976: 03 */ nes_cpu_instruction_boundary(0xA976, 8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A978:;
    /* $A978: 80 */ nes_cpu_instruction_boundary(0xA978, 2); /* NOP */
label_A97A:;
    /* $A97A: 01 */ nes_cpu_instruction_boundary(0xA97A, 6); g_cpu.A |= nes_read(nes_read16zp((0xA6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A97C:;
    /* $A97C: 26 */ nes_cpu_instruction_boundary(0xA97C, 5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A97E:;
    /* $A97E: B0 */ nes_cpu_instruction_boundary(0xA97E, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A98E; }
label_A980:;
    /* $A980: 01 */ nes_cpu_instruction_boundary(0xA980, 6); g_cpu.A |= nes_read(nes_read16zp((0xCA + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A982:;
    /* $A982: 26 */ nes_cpu_instruction_boundary(0xA982, 5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A984:;
    /* $A984: D8 */ nes_cpu_instruction_boundary(0xA984, 2); g_cpu.D = 0;
label_A985:;
    /* $A985: 0E */ nes_cpu_instruction_boundary(0xA985, 6); { uint16_t a=0xFD01; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A988:;
    /* $A988: 02 */ nes_cpu_instruction_boundary(0xA988, 2); /* ILLEGAL $02 — skip 1 */
label_A989:;
    /* $A989: B1 */ nes_cpu_instruction_boundary(0xA989, 5); g_cpu.A = nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A98B:;
    /* $A98B: 02 */ nes_cpu_instruction_boundary(0xA98B, 2); /* ILLEGAL $02 — skip 1 */
label_A98C:;
    /* $A98C: 2B */ nes_cpu_instruction_boundary(0xA98C, 2); g_cpu.A &= 0x11; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A98E:;
    /* $A98E: 02 */ nes_cpu_instruction_boundary(0xA98E, 2); /* ILLEGAL $02 — skip 1 */
label_A98F:;
    /* $A98F: BB */ nes_cpu_instruction_boundary(0xA98F, 4); /* ILLEGAL $BB — skip 3 */
label_A992:;
    /* $A992: 5B */ nes_cpu_instruction_boundary(0xA992, 7); { uint16_t a=(0x0231 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A995:;
    /* $A995: 8B */ nes_cpu_instruction_boundary(0xA995, 2); /* ILLEGAL $8B — skip 2 */
label_A997:; /* Room20_BANK1 */
    /* $A997: 01 */ nes_cpu_instruction_boundary(0xA997, 6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A999:;
    /* $A999: 27 */ nes_cpu_instruction_boundary(0xA999, 5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A99B:;
    /* $A99B: 08 */ nes_cpu_instruction_boundary(0xA99B, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A99C:;
    /* $A99C: 27 */ nes_cpu_instruction_boundary(0xA99C, 5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A99E:;
    /* $A99E: 1C */ nes_cpu_instruction_boundary(0xA99E, 4); (void)nes_read((0x0124 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A9A1:;
    /* $A9A1: 20 */ nes_cpu_instruction_boundary(0xA9A1, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA3; g_cpu.S--; if (!nes_dispatch_call(0x0124, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA9A1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A9A4:;
    /* $A9A4: 5F */ nes_cpu_instruction_boundary(0xA9A4, 7); { uint16_t a=(0x0203 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A9A7:;
    /* $A9A7: 8C */ nes_cpu_instruction_boundary(0xA9A7, 4); nes_write(0x0124, g_cpu.Y);
label_A9AA:;
    /* $A9AA: BA */ nes_cpu_instruction_boundary(0xA9AA, 2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_A9AB:;
    /* $A9AB: 26 */ nes_cpu_instruction_boundary(0xA9AB, 5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9AD:;
    /* $A9AD: C4 */ nes_cpu_instruction_boundary(0xA9AD, 3); { uint8_t m=nes_read(0x26); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A9AF:;
    /* $A9AF: 01 */ nes_cpu_instruction_boundary(0xA9AF, 6); g_cpu.A |= nes_read(nes_read16zp((0xC8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A9B1:;
    /* $A9B1: 0E */ nes_cpu_instruction_boundary(0xA9B1, 6); { uint16_t a=0xD001; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9B4:;
    /* $A9B4: 0E */ nes_cpu_instruction_boundary(0xA9B4, 6); { uint16_t a=0xFD01; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9B7:;
    /* $A9B7: 02 */ nes_cpu_instruction_boundary(0xA9B7, 2); /* ILLEGAL $02 — skip 1 */
label_A9B8:;
    /* $A9B8: A1 */ nes_cpu_instruction_boundary(0xA9B8, 6); g_cpu.A = nes_read(nes_read16zp((0x51 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A9BA:;
    /* $A9BA: 02 */ nes_cpu_instruction_boundary(0xA9BA, 2); /* ILLEGAL $02 — skip 1 */
label_A9BB:;
    /* $A9BB: 85 */ nes_cpu_instruction_boundary(0xA9BB, 3); nes_write(0x41, g_cpu.A);
label_A9BD:;
    /* $A9BD: 02 */ nes_cpu_instruction_boundary(0xA9BD, 2); /* ILLEGAL $02 — skip 1 */
label_A9BE:;
    /* $A9BE: C5 */ nes_cpu_instruction_boundary(0xA9BE, 3); { uint8_t m=nes_read(0x31); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A9C0:;
    /* $A9C0: 05 */ nes_cpu_instruction_boundary(0xA9C0, 3); g_cpu.A |= nes_read(0xBA); FLAG_NZ(g_cpu.A);
label_A9C2:;
    /* $A9C2: 21 */ nes_cpu_instruction_boundary(0xA9C2, 6); g_cpu.A &= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A9C4:;
    /* $A9C4: C5 */ nes_cpu_instruction_boundary(0xA9C4, 3); { uint8_t m=nes_read(0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A9C6:; /* Room21_BANK1 */
    /* $A9C6: 01 */ nes_cpu_instruction_boundary(0xA9C6, 6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A9C8:;
    /* $A9C8: 0E */ nes_cpu_instruction_boundary(0xA9C8, 6); { uint16_t a=0x0801; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9CB:;
    /* $A9CB: 0E */ nes_cpu_instruction_boundary(0xA9CB, 6); { uint16_t a=0x3001; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9CE:;
    /* $A9CE: 0E */ nes_cpu_instruction_boundary(0xA9CE, 6); { uint16_t a=0x3801; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9D1:;
    /* $A9D1: 0E */ nes_cpu_instruction_boundary(0xA9D1, 6); { uint16_t a=0xA701; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9D4:;
    /* $A9D4: 26 */ nes_cpu_instruction_boundary(0xA9D4, 5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9D6:;
    /* $A9D6: B0 */ nes_cpu_instruction_boundary(0xA9D6, 2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xA9FC); return; }
label_A9D8:;
    /* $A9D8: 01 */ nes_cpu_instruction_boundary(0xA9D8, 6); g_cpu.A |= nes_read(nes_read16zp((0xB6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A9DA:;
    /* $A9DA: 24 */ nes_cpu_instruction_boundary(0xA9DA, 3); { uint8_t m=nes_read(0x01); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A9DC:;
    /* $A9DC: BC */ nes_cpu_instruction_boundary(0xA9DC, 4); g_cpu.Y = nes_read((0x0124 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_A9DF:;
    /* $A9DF: C4 */ nes_cpu_instruction_boundary(0xA9DF, 3); { uint8_t m=nes_read(0x05); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A9E1:;
    /* $A9E1: 03 */ nes_cpu_instruction_boundary(0xA9E1, 8); { uint16_t a=nes_read16zp((0xD4 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A9E3:;
    /* $A9E3: 27 */ nes_cpu_instruction_boundary(0xA9E3, 5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A9E5:;
    /* $A9E5: DA */ nes_cpu_instruction_boundary(0xA9E5, 2); /* NOP */
label_A9E6:;
    /* $A9E6: 00 */ nes_cpu_instruction_boundary(0xA9E6, 7); nes_brk_executed(0xA9E6); return;
label_A9E7:;
    /* $A9E7: 02 */ nes_cpu_instruction_boundary(0xA9E7, 2); /* ILLEGAL $02 — skip 1 */
label_A9E8:;
    /* $A9E8: FD */ nes_cpu_instruction_boundary(0xA9E8, 4); { uint8_t m=nes_read((0x0707 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A9EB:;
    /* $A9EB: C5 */ nes_cpu_instruction_boundary(0xA9EB, 3); { uint8_t m=nes_read(0x11); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A9ED:;
    /* $A9ED: 05 */ nes_cpu_instruction_boundary(0xA9ED, 3); g_cpu.A |= nes_read(0xAC); FLAG_NZ(g_cpu.A);
label_A9EF:;
    /* $A9EF: 21 */ nes_cpu_instruction_boundary(0xA9EF, 6); g_cpu.A &= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A9F1:;
    /* $A9F1: A8 */ nes_cpu_instruction_boundary(0xA9F1, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A9F2:;
    /* $A9F2: 51 */ nes_cpu_instruction_boundary(0xA9F2, 5); g_cpu.A ^= nes_read((nes_read16zp(0x06) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9F4:;
    /* $A9F4: 7A */ nes_cpu_instruction_boundary(0xA9F4, 2); /* NOP */
label_A9F5:;
    /* $A9F5: FF */ nes_cpu_instruction_boundary(0xA9F5, 7); { uint16_t a=(0x0001 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A9F8:;
    /* $A9F8: 0E */ nes_cpu_instruction_boundary(0xA9F8, 6); { uint16_t a=0x0801; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9FB:;
    /* $A9FB: 0E */ nes_cpu_instruction_boundary(0xA9FB, 6); { uint16_t a=0x3001; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9FE:;
    /* $A9FE: 0E */ nes_cpu_instruction_boundary(0xA9FE, 6); { uint16_t a=0x3701; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA01:;
    /* $AA01: 25 */ nes_cpu_instruction_boundary(0xAA01, 3); g_cpu.A &= nes_read(0x01); FLAG_NZ(g_cpu.A);
label_AA03:;
    /* $AA03: 48 */ nes_cpu_instruction_boundary(0xAA03, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AA04:;
    /* $AA04: 2A */ nes_cpu_instruction_boundary(0xAA04, 2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_AA05:;
    /* $AA05: 01 */ nes_cpu_instruction_boundary(0xAA05, 6); g_cpu.A |= nes_read(nes_read16zp((0x4C + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA07:;
    /* $AA07: 2A */ nes_cpu_instruction_boundary(0xAA07, 2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_AA08:;
    /* $AA08: 01 */ nes_cpu_instruction_boundary(0xAA08, 6); g_cpu.A |= nes_read(nes_read16zp((0x68 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA0A:;
    /* $AA0A: 0E */ nes_cpu_instruction_boundary(0xAA0A, 6); { uint16_t a=0x7801; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA0D:;
    /* $AA0D: 0E */ nes_cpu_instruction_boundary(0xAA0D, 6); { uint16_t a=0xA301; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA10:;
    /* $AA10: 26 */ nes_cpu_instruction_boundary(0xAA10, 5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA12:;
    /* $AA12: B0 */ nes_cpu_instruction_boundary(0xAA12, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_AA22; }
label_AA14:;
    /* $AA14: 01 */ nes_cpu_instruction_boundary(0xAA14, 6); g_cpu.A |= nes_read(nes_read16zp((0xB8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA16:;
    /* $AA16: 0E */ nes_cpu_instruction_boundary(0xAA16, 6); { uint16_t a=0xFD01; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA19:;
    /* $AA19: 41 */ nes_cpu_instruction_boundary(0xAA19, 6); g_cpu.A ^= nes_read(nes_read16zp((0x06 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA1B:;
    /* $AA1B: 75 */ nes_cpu_instruction_boundary(0xAA1B, 4); { uint8_t m=nes_read((0x21 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AA1D:;
    /* $AA1D: 03 */ nes_cpu_instruction_boundary(0xAA1D, 8); { uint16_t a=nes_read16zp((0x85 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AA1F:;
    /* $AA1F: FF */ nes_cpu_instruction_boundary(0xAA1F, 7); { uint16_t a=(0x0002 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AA22:;
    /* $AA22: 27 */ nes_cpu_instruction_boundary(0xAA22, 5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AA24:;
    /* $AA24: 08 */ nes_cpu_instruction_boundary(0xAA24, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AA25:;
    /* $AA25: 27 */ nes_cpu_instruction_boundary(0xAA25, 5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AA27:;
    /* $AA27: 63 */ nes_cpu_instruction_boundary(0xAA27, 8); { uint16_t a=nes_read16zp((0x29 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AA29:;
    /* $AA29: 01 */ nes_cpu_instruction_boundary(0xAA29, 6); g_cpu.A |= nes_read(nes_read16zp((0x73 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA2B:;
    /* $AA2B: 28 */ nes_cpu_instruction_boundary(0xAA2B, 4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AA2C:;
    /* $AA2C: 02 */ nes_cpu_instruction_boundary(0xAA2C, 2); /* ILLEGAL $02 — skip 1 */
label_AA2D:;
    /* $AA2D: 8B */ nes_cpu_instruction_boundary(0xAA2D, 2); /* ILLEGAL $8B — skip 2 */
label_AA2F:;
    /* $AA2F: 01 */ nes_cpu_instruction_boundary(0xAA2F, 6); g_cpu.A |= nes_read(nes_read16zp((0x9B + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA31:;
    /* $AA31: 28 */ nes_cpu_instruction_boundary(0xAA31, 4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AA32:;
    /* $AA32: 02 */ nes_cpu_instruction_boundary(0xAA32, 2); /* ILLEGAL $02 — skip 1 */
label_AA33:;
    /* $AA33: C0 */ nes_cpu_instruction_boundary(0xAA33, 2); { int r=g_cpu.Y-0x26; g_cpu.C=(g_cpu.Y>=0x26)?1:0; FLAG_NZ(r&0xFF); }
label_AA35:;
    /* $AA35: 01 */ nes_cpu_instruction_boundary(0xAA35, 6); g_cpu.A |= nes_read(nes_read16zp((0xC6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA37:;
    /* $AA37: 26 */ nes_cpu_instruction_boundary(0xAA37, 5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA39:;
    /* $AA39: D0 */ nes_cpu_instruction_boundary(0xAA39, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xAA49); return; }
label_AA3B:;
    /* $AA3B: 01 */ nes_cpu_instruction_boundary(0xAA3B, 6); g_cpu.A |= nes_read(nes_read16zp((0xD8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA3D:;
    /* $AA3D: 00 */ nes_cpu_instruction_boundary(0xAA3D, 7); nes_brk_executed(0xAA3D); return;
label_AA3E:;
    /* $AA3E: 02 */ nes_cpu_instruction_boundary(0xAA3E, 2); /* ILLEGAL $02 — skip 1 */
label_AA3F:;
    /* $AA3F: D9 */ nes_cpu_instruction_boundary(0xAA3F, 4); { uint8_t m=nes_read((0x010E + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_AA42:;
    /* $AA42: DE */ nes_cpu_instruction_boundary(0xAA42, 7); { uint16_t a=(0x0305 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA45:;
    /* $AA45: FD */ nes_cpu_instruction_boundary(0xAA45, 4); { uint8_t m=nes_read((0x8501 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AA48:;
    /* $AA48: 63 */ nes_cpu_instruction_boundary(0xAA48, 8); { uint16_t a=nes_read16zp((0x11 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AA4A:;
    /* $AA4A: 05 */ nes_cpu_instruction_boundary(0xAA4A, 3); g_cpu.A |= nes_read(0x8B); FLAG_NZ(g_cpu.A);
label_AA4C:;
    /* $AA4C: 21 */ nes_cpu_instruction_boundary(0xAA4C, 6); g_cpu.A &= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA4E:;
    /* $AA4E: 6E */ nes_cpu_instruction_boundary(0xAA4E, 6); { uint16_t a=0x0747; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA51:;
    /* $AA51: DF */ nes_cpu_instruction_boundary(0xAA51, 7); { uint16_t a=(0x8331 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_AA54:;
    /* $AA54: A8 */ nes_cpu_instruction_boundary(0xAA54, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AA55:;
    /* $AA55: FF */ nes_cpu_instruction_boundary(0xAA55, 7); { uint16_t a=(0x0001 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AA58:;
    /* $AA58: 0E */ nes_cpu_instruction_boundary(0xAA58, 6); { uint16_t a=0x0801; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA5B:;
    /* $AA5B: 0E */ nes_cpu_instruction_boundary(0xAA5B, 6); { uint16_t a=0x4001; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA5E:;
    /* $AA5E: 2B */ nes_cpu_instruction_boundary(0xAA5E, 2); g_cpu.A &= 0x00; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AA60:;
    /* $AA60: 48 */ nes_cpu_instruction_boundary(0xAA60, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AA61:;
    /* $AA61: 2B */ nes_cpu_instruction_boundary(0xAA61, 2); g_cpu.A &= 0x00; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AA63:;
    /* $AA63: 50 */ nes_cpu_instruction_boundary(0xAA63, 2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_AA73; }
label_AA65:;
    /* $AA65: 01 */ nes_cpu_instruction_boundary(0xAA65, 6); g_cpu.A |= nes_read(nes_read16zp((0x53 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA67:;
    /* $AA67: 20 */ nes_cpu_instruction_boundary(0xAA67, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xAA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x69; g_cpu.S--; if (!nes_dispatch_call(0x5801, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAA67, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AA6A:;
    /* $AA6A: 0E */ nes_cpu_instruction_boundary(0xAA6A, 6); { uint16_t a=0x5B01; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA6D:;
    /* $AA6D: 20 */ nes_cpu_instruction_boundary(0xAA6D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xAA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6F; g_cpu.S--; if (!nes_dispatch_call(0x6001, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAA6D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AA70:;
    /* $AA70: 2B */ nes_cpu_instruction_boundary(0xAA70, 2); g_cpu.A &= 0x00; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AA72:;
    /* $AA72: 68 */ nes_cpu_instruction_boundary(0xAA72, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_AA73:;
    /* $AA73: 13 */ nes_cpu_instruction_boundary(0xAA73, 8); { uint16_t a=(nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AA75:;
    /* $AA75: 70 */ nes_cpu_instruction_boundary(0xAA75, 2); if (g_cpu.V) { maybe_trigger_vblank(1); call_by_address(0xAA9E); return; }
label_AA77:;
    /* $AA77: 01 */ nes_cpu_instruction_boundary(0xAA77, 6); g_cpu.A |= nes_read(nes_read16zp((0x78 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA79:;
    /* $AA79: 27 */ nes_cpu_instruction_boundary(0xAA79, 5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AA7B:;
    /* $AA7B: 80 */ nes_cpu_instruction_boundary(0xAA7B, 2); /* NOP */
label_AA7D:;
    /* $AA7D: 00 */ nes_cpu_instruction_boundary(0xAA7D, 7); nes_brk_executed(0xAA7D); return;
label_AA7E:;
    /* $AA7E: 88 */ nes_cpu_instruction_boundary(0xAA7E, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AA7F:;
    /* $AA7F: 2B */ nes_cpu_instruction_boundary(0xAA7F, 2); g_cpu.A &= 0x00; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AA81:;
    /* $AA81: 90 */ nes_cpu_instruction_boundary(0xAA81, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_AAAA; }
label_AA83:;
    /* $AA83: 01 */ nes_cpu_instruction_boundary(0xAA83, 6); g_cpu.A |= nes_read(nes_read16zp((0x98 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA85:;
    /* $AA85: 27 */ nes_cpu_instruction_boundary(0xAA85, 5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AA87:;
    /* $AA87: A0 */ nes_cpu_instruction_boundary(0xAA87, 2); g_cpu.Y = 0x13; FLAG_NZ(g_cpu.Y);
label_AA89:;
    /* $AA89: 00 */ nes_cpu_instruction_boundary(0xAA89, 7); nes_brk_executed(0xAA89); return;
label_AA8A:;
    /* $AA8A: A8 */ nes_cpu_instruction_boundary(0xAA8A, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AA8B:;
    /* $AA8B: 2B */ nes_cpu_instruction_boundary(0xAA8B, 2); g_cpu.A &= 0x00; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AA8D:;
    /* $AA8D: B0 */ nes_cpu_instruction_boundary(0xAA8D, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_AA9D; }
label_AA8F:;
    /* $AA8F: 01 */ nes_cpu_instruction_boundary(0xAA8F, 6); g_cpu.A |= nes_read(nes_read16zp((0xB8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA91:;
    /* $AA91: 0E */ nes_cpu_instruction_boundary(0xAA91, 6); { uint16_t a=0xFD01; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA94:;
    /* $AA94: 01 */ nes_cpu_instruction_boundary(0xAA94, 6); g_cpu.A |= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA96:;
    /* $AA96: 4D */ nes_cpu_instruction_boundary(0xAA96, 4); g_cpu.A ^= nes_read(0x8511); FLAG_NZ(g_cpu.A);
label_AA99:;
    /* $AA99: 6C */ nes_cpu_instruction_boundary(0xAA99, 5); { uint16_t _jt = nes_read16_jmpbug(0x0521); nes_cpu_instruction_boundary(_jt, 2); call_by_address_tail(_jt, -1); return; }
label_AA9D:;
    /* $AA9D: 31 */ nes_cpu_instruction_boundary(0xAA9D, 5); g_cpu.A &= nes_read((nes_read16zp(0x85) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AA9F:;
    /* $AA9F: AF */ nes_cpu_instruction_boundary(0xAA9F, 4); g_cpu.A = g_cpu.X = nes_read(0x0541); FLAG_NZ(g_cpu.A);
label_AAA2:;
    /* $AAA2: 47 */ nes_cpu_instruction_boundary(0xAAA2, 5); { uint16_t a=0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AAA4:; /* Room25_BANK1 */
    /* $AAA4: 02 */ nes_cpu_instruction_boundary(0xAAA4, 2); /* ILLEGAL $02 — skip 1 */
label_AAA5:;
    /* $AAA5: 00 */ nes_cpu_instruction_boundary(0xAAA5, 7); nes_brk_executed(0xAAA5); return;
label_AAA6:;
    /* $AAA6: 27 */ nes_cpu_instruction_boundary(0xAAA6, 5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AAA8:;
    /* $AAA8: 05 */ nes_cpu_instruction_boundary(0xAAA8, 3); g_cpu.A |= nes_read(0x27); FLAG_NZ(g_cpu.A);
label_AAAA:;
    /* $AAAA: 01 */ nes_cpu_instruction_boundary(0xAAAA, 6); g_cpu.A |= nes_read(nes_read16zp((0x0A + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AAAC:;
    /* $AAAC: 0E */ nes_cpu_instruction_boundary(0xAAAC, 6); { uint16_t a=0x2301; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AAAF:;
    /* $AAAF: 24 */ nes_cpu_instruction_boundary(0xAAAF, 3); { uint8_t m=nes_read(0x01); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AAB1:;
    /* $AAB1: 4A */ nes_cpu_instruction_boundary(0xAAB1, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AAB2:;
    /* $AAB2: 13 */ nes_cpu_instruction_boundary(0xAAB2, 8); { uint16_t a=(nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AAB4:;
    /* $AAB4: 52 */ nes_cpu_instruction_boundary(0xAAB4, 2); /* ILLEGAL $52 — skip 1 */
label_AAB5:;
    /* $AAB5: 24 */ nes_cpu_instruction_boundary(0xAAB5, 3); { uint8_t m=nes_read(0x01); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AAB7:;
    /* $AAB7: 59 */ nes_cpu_instruction_boundary(0xAAB7, 4); g_cpu.A ^= nes_read((0x0120 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AABA:;
    /* $AABA: 5A */ nes_cpu_instruction_boundary(0xAABA, 2); /* NOP */
label_AABB:;
    /* $AABB: 0E */ nes_cpu_instruction_boundary(0xAABB, 6); { uint16_t a=0x6A01; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AABE:;
    /* $AABE: 2B */ nes_cpu_instruction_boundary(0xAABE, 2); g_cpu.A &= 0x00; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AAC0:;
    /* $AAC0: 79 */ nes_cpu_instruction_boundary(0xAAC0, 4); { uint8_t m=nes_read((0x010E + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AAC3:;
    /* $AAC3: 89 */ nes_cpu_instruction_boundary(0xAAC3, 2); /* NOP */
label_AAC5:;
    /* $AAC5: 00 */ nes_cpu_instruction_boundary(0xAAC5, 7); nes_brk_executed(0xAAC5); return;
label_AAC6:;
    /* $AAC6: 90 */ nes_cpu_instruction_boundary(0xAAC6, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_AAF0; }
label_AAC8:;
    /* $AAC8: 02 */ nes_cpu_instruction_boundary(0xAAC8, 2); /* ILLEGAL $02 — skip 1 */
label_AAC9:;
    /* $AAC9: 94 */ nes_cpu_instruction_boundary(0xAAC9, 4); nes_write((0x06 + g_cpu.X) & 0xFF, g_cpu.Y);
label_AACB:;
    /* $AACB: 03 */ nes_cpu_instruction_boundary(0xAACB, 8); { uint16_t a=nes_read16zp((0x98 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AACD:;
    /* $AACD: 0E */ nes_cpu_instruction_boundary(0xAACD, 6); { uint16_t a=0xA801; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AAD0:;
    /* $AAD0: 13 */ nes_cpu_instruction_boundary(0xAAD0, 8); { uint16_t a=(nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AAD2:;
    /* $AAD2: B0 */ nes_cpu_instruction_boundary(0xAAD2, 2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xAAE2); return; }
label_AAD4:;
    /* $AAD4: 01 */ nes_cpu_instruction_boundary(0xAAD4, 6); g_cpu.A |= nes_read(nes_read16zp((0xB8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AAD6:;
    /* $AAD6: 0E */ nes_cpu_instruction_boundary(0xAAD6, 6); { uint16_t a=0xFD01; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AAD9:;
    /* $AAD9: 51 */ nes_cpu_instruction_boundary(0xAAD9, 5); g_cpu.A ^= nes_read((nes_read16zp(0x05) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AADB:;
    /* $AADB: 4F */ nes_cpu_instruction_boundary(0xAADB, 6); { uint16_t a=0x0541; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AADE:;
    /* $AADE: 6E */ nes_cpu_instruction_boundary(0xAADE, 6); { uint16_t a=0x0531; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AAE1:;
    /* $AAE1: 8E */ nes_cpu_instruction_boundary(0xAAE1, 4); nes_write(0x0221, g_cpu.X);
label_AAE4:;
    /* $AAE4: 48 */ nes_cpu_instruction_boundary(0xAAE4, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AAE5:;
    /* $AAE5: FF */ nes_cpu_instruction_boundary(0xAAE5, 7); { uint16_t a=(0x0001 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AAE8:;
    /* $AAE8: 0E */ nes_cpu_instruction_boundary(0xAAE8, 6); { uint16_t a=0x0801; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AAEB:;
    /* $AAEB: 27 */ nes_cpu_instruction_boundary(0xAAEB, 5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AAED:;
    /* $AAED: 40 */ nes_cpu_instruction_boundary(0xAAED, 6); /* RTI */ g_rti_source = 0xAAED; g_rti_bank = 1; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AAEE:;
    /* $AAEE: 2B */ nes_cpu_instruction_boundary(0xAAEE, 2); g_cpu.A &= 0x00; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AAF0:;
    /* $AAF0: 50 */ nes_cpu_instruction_boundary(0xAAF0, 2); if (!g_cpu.V) { maybe_trigger_vblank(2); call_by_address(0xAB00); return; }
label_AAF2:;
    /* $AAF2: 01 */ nes_cpu_instruction_boundary(0xAAF2, 6); g_cpu.A |= nes_read(nes_read16zp((0x56 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AAF4:;
    /* $AAF4: 20 */ nes_cpu_instruction_boundary(0xAAF4, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xAA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF6; g_cpu.S--; if (!nes_dispatch_call(0x6001, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAAF4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AAF7:;
    /* $AAF7: 2B */ nes_cpu_instruction_boundary(0xAAF7, 2); g_cpu.A &= 0x00; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AAF9:;
    /* $AAF9: 68 */ nes_cpu_instruction_boundary(0xAAF9, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_AAFA:;
    /* $AAFA: 2C */ nes_cpu_instruction_boundary(0xAAFA, 4); { uint8_t m=nes_read(0x8000); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AAFD:;
    /* $AAFD: 27 */ nes_cpu_instruction_boundary(0xAAFD, 5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AAFF:;
    /* $AAFF: 8B */ nes_cpu_instruction_boundary(0xAAFF, 2); /* ILLEGAL $8B — skip 2 */
label_AB01:;
    /* $AB01: 01 */ nes_cpu_instruction_boundary(0xAB01, 6); g_cpu.A |= nes_read(nes_read16zp((0xD0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AB03:;
    /* $AB03: 00 */ nes_cpu_instruction_boundary(0xAB03, 7); nes_brk_executed(0xAB03); return;
label_AB04:;
    /* $AB04: 02 */ nes_cpu_instruction_boundary(0xAB04, 2); /* ILLEGAL $02 — skip 1 */
label_AB05:;
    /* $AB05: D8 */ nes_cpu_instruction_boundary(0xAB05, 2); g_cpu.D = 0;
label_AB06:;
    /* $AB06: 00 */ nes_cpu_instruction_boundary(0xAB06, 7); nes_brk_executed(0xAB06); return;
label_AB07:;
    /* $AB07: 02 */ nes_cpu_instruction_boundary(0xAB07, 2); /* ILLEGAL $02 — skip 1 */
label_AB08:;
    /* $AB08: FD */ nes_cpu_instruction_boundary(0xAB08, 4); { uint8_t m=nes_read((0x0551 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AB0B:;
    /* $AB0B: 67 */ nes_cpu_instruction_boundary(0xAB0B, 5); { uint16_t a=0x41; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AB0D:;
    /* $AB0D: 05 */ nes_cpu_instruction_boundary(0xAB0D, 3); g_cpu.A |= nes_read(0x7E); FLAG_NZ(g_cpu.A);
label_AB0F:;
    /* $AB0F: 21 */ nes_cpu_instruction_boundary(0xAB0F, 6); g_cpu.A &= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AB11:;
    /* $AB11: 7B */ nes_cpu_instruction_boundary(0xAB11, 7); { uint16_t a=(0x0331 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AB14:;
    /* $AB14: 49 */ nes_cpu_instruction_boundary(0xAB14, 2); g_cpu.A ^= 0x11; FLAG_NZ(g_cpu.A);
label_AB16:;
    /* $AB16: 02 */ nes_cpu_instruction_boundary(0xAB16, 2); /* ILLEGAL $02 — skip 1 */
label_AB17:;
    /* $AB17: C6 */ nes_cpu_instruction_boundary(0xAB17, 5); { uint16_t a=0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AB19:; /* Room27_BANK1 */
    /* $AB19: 03 */ nes_cpu_instruction_boundary(0xAB19, 8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AB1B:;
    /* $AB1B: 0B */ nes_cpu_instruction_boundary(0xAB1B, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AB1D:;
    /* $AB1D: 02 */ nes_cpu_instruction_boundary(0xAB1D, 2); /* ILLEGAL $02 — skip 1 */
label_AB1E:;
    /* $AB1E: 11 */ nes_cpu_instruction_boundary(0xAB1E, 5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB20:;
    /* $AB20: 09 */ nes_cpu_instruction_boundary(0xAB20, 2); g_cpu.A |= 0x11; FLAG_NZ(g_cpu.A);
label_AB22:;
    /* $AB22: 01 */ nes_cpu_instruction_boundary(0xAB22, 6); g_cpu.A |= nes_read(nes_read16zp((0x50 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AB24:;
    /* $AB24: 04 */ nes_cpu_instruction_boundary(0xAB24, 3); (void)nes_read(0x02); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AB26:;
    /* $AB26: 80 */ nes_cpu_instruction_boundary(0xAB26, 2); /* NOP */
label_AB28:;
    /* $AB28: 03 */ nes_cpu_instruction_boundary(0xAB28, 8); { uint16_t a=nes_read16zp((0x82 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AB2A:;
    /* $AB2A: 1E */ nes_cpu_instruction_boundary(0xAB2A, 7); { uint16_t a=(0xB603 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AB2D:;
    /* $AB2D: 1D */ nes_cpu_instruction_boundary(0xAB2D, 4); g_cpu.A |= nes_read((0xB703 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB30:;
    /* $AB30: 1D */ nes_cpu_instruction_boundary(0xAB30, 4); g_cpu.A |= nes_read((0xC203 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB33:;
    /* $AB33: 09 */ nes_cpu_instruction_boundary(0xAB33, 2); g_cpu.A |= 0x03; FLAG_NZ(g_cpu.A);
label_AB35:;
    /* $AB35: C8 */ nes_cpu_instruction_boundary(0xAB35, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AB36:;
    /* $AB36: 1D */ nes_cpu_instruction_boundary(0xAB36, 4); g_cpu.A |= nes_read((0xD003 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB39:;
    /* $AB39: 10 */ nes_cpu_instruction_boundary(0xAB39, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AB3E; }
label_AB3B:;
    /* $AB3B: D8 */ nes_cpu_instruction_boundary(0xAB3B, 2); g_cpu.D = 0;
label_AB3C:;
    /* $AB3C: 10 */ nes_cpu_instruction_boundary(0xAB3C, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AB41; }
label_AB3E:;
    /* $AB3E: FD */ nes_cpu_instruction_boundary(0xAB3E, 4); { uint8_t m=nes_read((0xB002 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AB41:;
    /* $AB41: 11 */ nes_cpu_instruction_boundary(0xAB41, 5); g_cpu.A |= nes_read((nes_read16zp(0x04) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB43:;
    /* $AB43: 38 */ nes_cpu_instruction_boundary(0xAB43, 2); g_cpu.C = 1;
label_AB44:;
    /* $AB44: 31 */ nes_cpu_instruction_boundary(0xAB44, 5); g_cpu.A &= nes_read((nes_read16zp(0x06) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB46:;
    /* $AB46: 27 */ nes_cpu_instruction_boundary(0xAB46, 5); { uint16_t a=0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AB48:; /* Room28_BANK1 */
    /* $AB48: 00 */ nes_cpu_instruction_boundary(0xAB48, 7); nes_brk_executed(0xAB48); return;
label_AB49:;
    /* $AB49: 00 */ nes_cpu_instruction_boundary(0xAB49, 7); nes_brk_executed(0xAB49); return;
label_AB4A:;
    /* $AB4A: 2D */ nes_cpu_instruction_boundary(0xAB4A, 4); g_cpu.A &= nes_read(0x0802); FLAG_NZ(g_cpu.A);
label_AB4D:;
    /* $AB4D: 2D */ nes_cpu_instruction_boundary(0xAB4D, 4); g_cpu.A &= nes_read(0x0F02); FLAG_NZ(g_cpu.A);
label_AB50:;
    /* $AB50: 28 */ nes_cpu_instruction_boundary(0xAB50, 4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AB51:;
    /* $AB51: 02 */ nes_cpu_instruction_boundary(0xAB51, 2); /* ILLEGAL $02 — skip 1 */
label_AB52:;
    /* $AB52: 5F */ nes_cpu_instruction_boundary(0xAB52, 7); { uint16_t a=(0x0203 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AB55:;
    /* $AB55: 87 */ nes_cpu_instruction_boundary(0xAB55, 3); nes_write(0x14, g_cpu.A & g_cpu.X); /* SAX */
label_AB57:;
    /* $AB57: 00 */ nes_cpu_instruction_boundary(0xAB57, 7); nes_brk_executed(0xAB57); return;
label_AB58:;
    /* $AB58: 8F */ nes_cpu_instruction_boundary(0xAB58, 4); nes_write(0x0228, g_cpu.A & g_cpu.X); /* SAX */
label_AB5B:;
    /* $AB5B: 9A */ nes_cpu_instruction_boundary(0xAB5B, 2); g_cpu.S = g_cpu.X;
label_AB5C:;
    /* $AB5C: 15 */ nes_cpu_instruction_boundary(0xAB5C, 4); g_cpu.A |= nes_read((0x00 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AB5E:;
    /* $AB5E: C3 */ nes_cpu_instruction_boundary(0xAB5E, 8); { uint16_t a=nes_read16zp((0x26 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_AB60:;
    /* $AB60: 01 */ nes_cpu_instruction_boundary(0xAB60, 6); g_cpu.A |= nes_read(nes_read16zp((0xD0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AB62:;
    /* $AB62: 2D */ nes_cpu_instruction_boundary(0xAB62, 4); g_cpu.A &= nes_read(0xD802); FLAG_NZ(g_cpu.A);
label_AB65:;
    /* $AB65: 2D */ nes_cpu_instruction_boundary(0xAB65, 4); g_cpu.A &= nes_read(0xFD02); FLAG_NZ(g_cpu.A);
label_AB68:;
    /* $AB68: 02 */ nes_cpu_instruction_boundary(0xAB68, 2); /* ILLEGAL $02 — skip 1 */
label_AB69:;
    /* $AB69: A1 */ nes_cpu_instruction_boundary(0xAB69, 6); g_cpu.A = nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AB6B:;
    /* $AB6B: 06 */ nes_cpu_instruction_boundary(0xAB6B, 5); { uint16_t a=0x23; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AB6D:;
    /* $AB6D: 31 */ nes_cpu_instruction_boundary(0xAB6D, 5); g_cpu.A &= nes_read((nes_read16zp(0x05) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB6F:;
    /* $AB6F: 7D */ nes_cpu_instruction_boundary(0xAB6F, 4); { uint8_t m=nes_read((0x02FF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AB72:;
    /* $AB72: 00 */ nes_cpu_instruction_boundary(0xAB72, 7); nes_brk_executed(0xAB72); return;
label_AB73:;
    /* $AB73: 2D */ nes_cpu_instruction_boundary(0xAB73, 4); g_cpu.A &= nes_read(0x0802); FLAG_NZ(g_cpu.A);
label_AB76:;
    /* $AB76: 2D */ nes_cpu_instruction_boundary(0xAB76, 4); g_cpu.A &= nes_read(0xC202); FLAG_NZ(g_cpu.A);
label_AB79:;
    /* $AB79: 26 */ nes_cpu_instruction_boundary(0xAB79, 5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AB7B:;
    /* $AB7B: C7 */ nes_cpu_instruction_boundary(0xAB7B, 5); { uint16_t a=0x26; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_AB7D:;
    /* $AB7D: 01 */ nes_cpu_instruction_boundary(0xAB7D, 6); g_cpu.A |= nes_read(nes_read16zp((0xC9 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AB7F:;
    /* $AB7F: 26 */ nes_cpu_instruction_boundary(0xAB7F, 5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AB81:;
    /* $AB81: D0 */ nes_cpu_instruction_boundary(0xAB81, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_ABB0; }
label_AB83:;
    /* $AB83: 02 */ nes_cpu_instruction_boundary(0xAB83, 2); /* ILLEGAL $02 — skip 1 */
label_AB84:;
    /* $AB84: D8 */ nes_cpu_instruction_boundary(0xAB84, 2); g_cpu.D = 0;
label_AB85:;
    /* $AB85: 2D */ nes_cpu_instruction_boundary(0xAB85, 4); g_cpu.A &= nes_read(0xFD02); FLAG_NZ(g_cpu.A);
label_AB88:;
    /* $AB88: 41 */ nes_cpu_instruction_boundary(0xAB88, 6); g_cpu.A ^= nes_read(nes_read16zp((0x86 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AB8A:;
    /* $AB8A: 25 */ nes_cpu_instruction_boundary(0xAB8A, 3); g_cpu.A &= nes_read(0x51); FLAG_NZ(g_cpu.A);
label_AB8C:;
    /* $AB8C: 06 */ nes_cpu_instruction_boundary(0xAB8C, 5); { uint16_t a=0x2A; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AB8E:;
    /* $AB8E: 21 */ nes_cpu_instruction_boundary(0xAB8E, 6); g_cpu.A &= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AB90:;
    /* $AB90: CB */ nes_cpu_instruction_boundary(0xAB90, 2); { uint8_t t=(uint8_t)(g_cpu.A & g_cpu.X); g_cpu.C=(t>=0xFF)?1:0; g_cpu.X=(t-0xFF)&0xFF; FLAG_NZ(g_cpu.X); }
label_AB92:; /* Room2A_BANK1 */
    /* $AB92: 00 */ nes_cpu_instruction_boundary(0xAB92, 7); nes_brk_executed(0xAB92); return;
label_AB93:;
    /* $AB93: 00 */ nes_cpu_instruction_boundary(0xAB93, 7); nes_brk_executed(0xAB93); return;
label_AB94:;
    /* $AB94: 11 */ nes_cpu_instruction_boundary(0xAB94, 5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB96:;
    /* $AB96: 08 */ nes_cpu_instruction_boundary(0xAB96, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AB97:;
    /* $AB97: 11 */ nes_cpu_instruction_boundary(0xAB97, 5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB99:;
    /* $AB99: 68 */ nes_cpu_instruction_boundary(0xAB99, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_AB9A:;
    /* $AB9A: 21 */ nes_cpu_instruction_boundary(0xAB9A, 6); g_cpu.A &= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AB9C:;
    /* $AB9C: 78 */ nes_cpu_instruction_boundary(0xAB9C, 2); g_cpu.I = 1;
label_AB9D:;
    /* $AB9D: 15 */ nes_cpu_instruction_boundary(0xAB9D, 4); g_cpu.A |= nes_read((0x00 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AB9F:;
    /* $AB9F: 95 */ nes_cpu_instruction_boundary(0xAB9F, 4); nes_write((0x15 + g_cpu.X) & 0xFF, g_cpu.A);
label_ABA1:;
    /* $ABA1: 00 */ nes_cpu_instruction_boundary(0xABA1, 7); nes_brk_executed(0xABA1); return;
label_ABA2:;
    /* $ABA2: A0 */ nes_cpu_instruction_boundary(0xABA2, 2); g_cpu.Y = 0x0B; FLAG_NZ(g_cpu.Y);
label_ABA4:;
    /* $ABA4: 03 */ nes_cpu_instruction_boundary(0xABA4, 8); { uint16_t a=nes_read16zp((0xAE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_ABA6:;
    /* $ABA6: 0B */ nes_cpu_instruction_boundary(0xABA6, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_ABA8:;
    /* $ABA8: BB */ nes_cpu_instruction_boundary(0xABA8, 4); /* ILLEGAL $BB — skip 3 */
label_ABAB:;
    /* $ABAB: C2 */ nes_cpu_instruction_boundary(0xABAB, 2); /* NOP */
label_ABAD:;
    /* $ABAD: 03 */ nes_cpu_instruction_boundary(0xABAD, 8); { uint16_t a=nes_read16zp((0xD2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_ABAF:;
    /* $ABAF: 00 */ nes_cpu_instruction_boundary(0xABAF, 7); nes_brk_executed(0xABAF); return;
label_ABB0:;
    /* $ABB0: 02 */ nes_cpu_instruction_boundary(0xABB0, 2); /* ILLEGAL $02 — skip 1 */
label_ABB1:;
    /* $ABB1: D6 */ nes_cpu_instruction_boundary(0xABB1, 6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_ABB3:;
    /* $ABB3: 02 */ nes_cpu_instruction_boundary(0xABB3, 2); /* ILLEGAL $02 — skip 1 */
label_ABB4:;
    /* $ABB4: FD */ nes_cpu_instruction_boundary(0xABB4, 4); { uint8_t m=nes_read((0x0501 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_ABB7:;
    /* $ABB7: 58 */ nes_cpu_instruction_boundary(0xABB7, 2); g_cpu.I = 0;
label_ABB8:;
    /* $ABB8: 11 */ nes_cpu_instruction_boundary(0xABB8, 5); g_cpu.A |= nes_read((nes_read16zp(0x05) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ABBA:;
    /* $ABBA: 85 */ nes_cpu_instruction_boundary(0xABBA, 3); nes_write(0x31, g_cpu.A);
label_ABBC:;
    /* $ABBC: 06 */ nes_cpu_instruction_boundary(0xABBC, 5); { uint16_t a=0x26; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_ABBE:;
    /* $ABBE: FF */ nes_cpu_instruction_boundary(0xABBE, 7); { uint16_t a=(0x0002 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ABC1:;
    /* $ABC1: 30 */ nes_cpu_instruction_boundary(0xABC1, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_ABC3; }
label_ABC3:;
    /* $ABC3: 01 */ nes_cpu_instruction_boundary(0xABC3, 6); g_cpu.A |= nes_read(nes_read16zp((0x1A + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ABC5:;
    /* $ABC5: 02 */ nes_cpu_instruction_boundary(0xABC5, 2); /* ILLEGAL $02 — skip 1 */
label_ABC6:;
    /* $ABC6: 02 */ nes_cpu_instruction_boundary(0xABC6, 2); /* ILLEGAL $02 — skip 1 */
label_ABC7:;
    /* $ABC7: 30 */ nes_cpu_instruction_boundary(0xABC7, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_ABC9; }
label_ABC9:;
    /* $ABC9: 03 */ nes_cpu_instruction_boundary(0xABC9, 8); { uint16_t a=nes_read16zp((0x1A + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_ABCB:;
    /* $ABCB: 02 */ nes_cpu_instruction_boundary(0xABCB, 2); /* ILLEGAL $02 — skip 1 */
label_ABCC:;
    /* $ABCC: 05 */ nes_cpu_instruction_boundary(0xABCC, 3); g_cpu.A |= nes_read(0x1C); FLAG_NZ(g_cpu.A);
label_ABCE:;
    /* $ABCE: 02 */ nes_cpu_instruction_boundary(0xABCE, 2); /* ILLEGAL $02 — skip 1 */
label_ABCF:;
    /* $ABCF: 0A */ nes_cpu_instruction_boundary(0xABCF, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_ABD0:;
    /* $ABD0: 1B */ nes_cpu_instruction_boundary(0xABD0, 7); { uint16_t a=(0x0F02 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_ABD3:;
    /* $ABD3: 30 */ nes_cpu_instruction_boundary(0xABD3, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_ABD5; }
label_ABD5:;
    /* $ABD5: 10 */ nes_cpu_instruction_boundary(0xABD5, 2); if (!g_cpu.N) { maybe_trigger_vblank(2); goto label_AC07; }
label_ABD7:;
    /* $ABD7: 00 */ nes_cpu_instruction_boundary(0xABD7, 7); nes_brk_executed(0xABD7); return;
label_ABD8:;
    /* $ABD8: 14 */ nes_cpu_instruction_boundary(0xABD8, 4); (void)nes_read((0x30 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ABDA:;
    /* $ABDA: 00 */ nes_cpu_instruction_boundary(0xABDA, 7); nes_brk_executed(0xABDA); return;
label_ABDB:;
    /* $ABDB: 1F */ nes_cpu_instruction_boundary(0xABDB, 7); { uint16_t a=(0x0030 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_ABDE:;
    /* $ABDE: 2C */ nes_cpu_instruction_boundary(0xABDE, 4); { uint8_t m=nes_read(0x0218); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_ABE1:;
    /* $ABE1: 35 */ nes_cpu_instruction_boundary(0xABE1, 4); g_cpu.A &= nes_read((0x18 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_ABE3:;
    /* $ABE3: 02 */ nes_cpu_instruction_boundary(0xABE3, 2); /* ILLEGAL $02 — skip 1 */
label_ABE4:;
    /* $ABE4: 41 */ nes_cpu_instruction_boundary(0xABE4, 6); g_cpu.A ^= nes_read(nes_read16zp((0x19 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ABE6:;
    /* $ABE6: 02 */ nes_cpu_instruction_boundary(0xABE6, 2); /* ILLEGAL $02 — skip 1 */
label_ABE7:;
    /* $ABE7: 44 */ nes_cpu_instruction_boundary(0xABE7, 3); (void)nes_read(0x2F); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ABE9:;
    /* $ABE9: 02 */ nes_cpu_instruction_boundary(0xABE9, 2); /* ILLEGAL $02 — skip 1 */
label_ABEA:;
    /* $ABEA: 45 */ nes_cpu_instruction_boundary(0xABEA, 3); g_cpu.A ^= nes_read(0x18); FLAG_NZ(g_cpu.A);
label_ABEC:;
    /* $ABEC: 02 */ nes_cpu_instruction_boundary(0xABEC, 2); /* ILLEGAL $02 — skip 1 */
label_ABED:;
    /* $ABED: 46 */ nes_cpu_instruction_boundary(0xABED, 5); { uint16_t a=0x2F; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_ABEF:;
    /* $ABEF: 02 */ nes_cpu_instruction_boundary(0xABEF, 2); /* ILLEGAL $02 — skip 1 */
label_ABF0:;
    /* $ABF0: 50 */ nes_cpu_instruction_boundary(0xABF0, 2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_ABF6; }
label_ABF2:;
    /* $ABF2: 02 */ nes_cpu_instruction_boundary(0xABF2, 2); /* ILLEGAL $02 — skip 1 */
label_ABF3:;
    /* $ABF3: 53 */ nes_cpu_instruction_boundary(0xABF3, 8); { uint16_t a=(nes_read16zp(0x19) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_ABF5:;
    /* $ABF5: 02 */ nes_cpu_instruction_boundary(0xABF5, 2); /* ILLEGAL $02 — skip 1 */
label_ABF6:;
    /* $ABF6: 5F */ nes_cpu_instruction_boundary(0xABF6, 7); { uint16_t a=(0x0204 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_ABF9:;
    /* $ABF9: 64 */ nes_cpu_instruction_boundary(0xABF9, 3); (void)nes_read(0x1C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ABFB:;
    /* $ABFB: 02 */ nes_cpu_instruction_boundary(0xABFB, 2); /* ILLEGAL $02 — skip 1 */
label_ABFC:;
    /* $ABFC: 65 */ nes_cpu_instruction_boundary(0xABFC, 3); { uint8_t m=nes_read(0x1C); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_ABFE:;
    /* $ABFE: 02 */ nes_cpu_instruction_boundary(0xABFE, 2); /* ILLEGAL $02 — skip 1 */
label_ABFF:;
    /* $ABFF: 68 */ nes_cpu_instruction_boundary(0xABFF, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_AC00:;
    /* $AC00: 2F */ nes_cpu_instruction_boundary(0xAC00, 6); { uint16_t a=0x8002; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AC03:;
    /* $AC03: 15 */ nes_cpu_instruction_boundary(0xAC03, 4); g_cpu.A |= nes_read((0x00 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AC05:;
    /* $AC05: 81 */ nes_cpu_instruction_boundary(0xAC05, 6); nes_write(nes_read16zp((0x19 + g_cpu.X) & 0xFF), g_cpu.A);
label_AC07:;
    /* $AC07: 02 */ nes_cpu_instruction_boundary(0xAC07, 2); /* ILLEGAL $02 — skip 1 */
label_AC08:;
    /* $AC08: 8D */ nes_cpu_instruction_boundary(0xAC08, 4); nes_write(0x0219, g_cpu.A);
label_AC0B:;
    /* $AC0B: 9C */ nes_cpu_instruction_boundary(0xAC0B, 5); /* ILLEGAL $9C — skip 3 */
label_AC0E:;
    /* $AC0E: 9F */ nes_cpu_instruction_boundary(0xAC0E, 5); /* ILLEGAL $9F — skip 3 */
label_AC11:;
    /* $AC11: C0 */ nes_cpu_instruction_boundary(0xAC11, 2); { int r=g_cpu.Y-0x30; g_cpu.C=(g_cpu.Y>=0x30)?1:0; FLAG_NZ(r&0xFF); }
label_AC13:;
    /* $AC13: 00 */ nes_cpu_instruction_boundary(0xAC13, 7); nes_brk_executed(0xAC13); return;
label_AC14:;
    /* $AC14: D1 */ nes_cpu_instruction_boundary(0xAC14, 5); { uint8_t m=nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_AC16:;
    /* $AC16: 02 */ nes_cpu_instruction_boundary(0xAC16, 2); /* ILLEGAL $02 — skip 1 */
label_AC17:;
    /* $AC17: D7 */ nes_cpu_instruction_boundary(0xAC17, 6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_AC19:;
    /* $AC19: 02 */ nes_cpu_instruction_boundary(0xAC19, 2); /* ILLEGAL $02 — skip 1 */
label_AC1A:;
    /* $AC1A: DF */ nes_cpu_instruction_boundary(0xAC1A, 7); { uint16_t a=(0x0030 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_AC1D:;
    /* $AC1D: FD */ nes_cpu_instruction_boundary(0xAC1D, 4); { uint8_t m=nes_read((0xA002 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AC20:;
    /* $AC20: 02 */ nes_cpu_instruction_boundary(0xAC20, 2); /* ILLEGAL $02 — skip 1 */
label_AC21:;
    /* $AC21: B1 */ nes_cpu_instruction_boundary(0xAC21, 5); g_cpu.A = nes_read((nes_read16zp(0x06) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AC23:;
    /* $AC23: FF */ nes_cpu_instruction_boundary(0xAC23, 7); { uint16_t a=(0x0000 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AC26:;
    /* $AC26: 16 */ nes_cpu_instruction_boundary(0xAC26, 6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AC28:;
    /* $AC28: 07 */ nes_cpu_instruction_boundary(0xAC28, 5); { uint16_t a=0x16; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AC2A:;
    /* $AC2A: 00 */ nes_cpu_instruction_boundary(0xAC2A, 7); nes_brk_executed(0xAC2A); return;
label_AC2B:;
    /* $AC2B: 0E */ nes_cpu_instruction_boundary(0xAC2B, 6); { uint16_t a=0x0016; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AC2E:;
    /* $AC2E: 1F */ nes_cpu_instruction_boundary(0xAC2E, 7); { uint16_t a=(0x0015 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AC31:;
    /* $AC31: 20 */ nes_cpu_instruction_boundary(0xAC31, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xAC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x33; g_cpu.S--; if (!nes_dispatch_call(0x0015, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAC31, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AC34:;
    /* $AC34: 40 */ nes_cpu_instruction_boundary(0xAC34, 6); /* RTI */ g_rti_source = 0xAC34; g_rti_bank = 1; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AC35:;
    /* $AC35: 30 */ nes_cpu_instruction_boundary(0xAC35, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_AC37; }
label_AC37:;
    /* $AC37: 5F */ nes_cpu_instruction_boundary(0xAC37, 7); { uint16_t a=(0x0204 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AC3A:;
    /* $AC3A: 80 */ nes_cpu_instruction_boundary(0xAC3A, 2); /* NOP */
label_AC3C:;
    /* $AC3C: 00 */ nes_cpu_instruction_boundary(0xAC3C, 7); nes_brk_executed(0xAC3C); return;
label_AC3D:;
    /* $AC3D: 87 */ nes_cpu_instruction_boundary(0xAC3D, 3); nes_write(0x02, g_cpu.A & g_cpu.X); /* SAX */
label_AC3F:;
    /* $AC3F: 02 */ nes_cpu_instruction_boundary(0xAC3F, 2); /* ILLEGAL $02 — skip 1 */
label_AC40:;
    /* $AC40: 89 */ nes_cpu_instruction_boundary(0xAC40, 2); /* NOP */
label_AC42:;
    /* $AC42: 00 */ nes_cpu_instruction_boundary(0xAC42, 7); nes_brk_executed(0xAC42); return;
label_AC43:;
    /* $AC43: A0 */ nes_cpu_instruction_boundary(0xAC43, 2); g_cpu.Y = 0x15; FLAG_NZ(g_cpu.Y);
label_AC45:;
    /* $AC45: 00 */ nes_cpu_instruction_boundary(0xAC45, 7); nes_brk_executed(0xAC45); return;
label_AC46:;
    /* $AC46: AF */ nes_cpu_instruction_boundary(0xAC46, 4); g_cpu.A = g_cpu.X = nes_read(0x0015); FLAG_NZ(g_cpu.A);
label_AC49:;
    /* $AC49: FD */ nes_cpu_instruction_boundary(0xAC49, 4); { uint8_t m=nes_read((0xA102 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AC4C:;
    /* $AC4C: FF */ nes_cpu_instruction_boundary(0xAC4C, 7); { uint16_t a=(0x0003 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AC4F:;
    /* $AC4F: 11 */ nes_cpu_instruction_boundary(0xAC4F, 5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AC51:;
    /* $AC51: 08 */ nes_cpu_instruction_boundary(0xAC51, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AC52:;
    /* $AC52: 11 */ nes_cpu_instruction_boundary(0xAC52, 5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AC54:;
    /* $AC54: 1E */ nes_cpu_instruction_boundary(0xAC54, 7); { uint16_t a=(0x031E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AC57:;
    /* $AC57: 5F */ nes_cpu_instruction_boundary(0xAC57, 7); { uint16_t a=(0x0204 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AC5A:;
    /* $AC5A: 8B */ nes_cpu_instruction_boundary(0xAC5A, 2); /* ILLEGAL $8B — skip 2 */
label_AC5C:;
    /* $AC5C: 03 */ nes_cpu_instruction_boundary(0xAC5C, 8); { uint16_t a=nes_read16zp((0x9E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AC5E:;
    /* $AC5E: 0B */ nes_cpu_instruction_boundary(0xAC5E, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AC60:;
    /* $AC60: D0 */ nes_cpu_instruction_boundary(0xAC60, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xAC72); return; }
label_AC62:;
    /* $AC62: 03 */ nes_cpu_instruction_boundary(0xAC62, 8); { uint16_t a=nes_read16zp((0xD8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AC64:;
    /* $AC64: 10 */ nes_cpu_instruction_boundary(0xAC64, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AC69; }
label_AC66:;
    /* $AC66: FD */ nes_cpu_instruction_boundary(0xAC66, 4); { uint8_t m=nes_read((0xA102 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AC69:;
    /* $AC69: FF */ nes_cpu_instruction_boundary(0xAC69, 7); { uint16_t a=(0x0003 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AC6C:;
    /* $AC6C: 0B */ nes_cpu_instruction_boundary(0xAC6C, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AC6E:;
    /* $AC6E: 0E */ nes_cpu_instruction_boundary(0xAC6E, 6); { uint16_t a=0x030B; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AC71:;
    /* $AC71: 50 */ nes_cpu_instruction_boundary(0xAC71, 2); if (!g_cpu.V) { maybe_trigger_vblank(1); call_by_address(0xAC76); return; }
label_AC73:;
    /* $AC73: 02 */ nes_cpu_instruction_boundary(0xAC73, 2); /* ILLEGAL $02 — skip 1 */
label_AC74:;
    /* $AC74: 5E */ nes_cpu_instruction_boundary(0xAC74, 7); { uint16_t a=(0x030B + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_AC77:;
    /* $AC77: 80 */ nes_cpu_instruction_boundary(0xAC77, 2); /* NOP */
label_AC79:;
    /* $AC79: 03 */ nes_cpu_instruction_boundary(0xAC79, 8); { uint16_t a=nes_read16zp((0xAE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AC7B:;
    /* $AC7B: 0B */ nes_cpu_instruction_boundary(0xAC7B, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AC7D:;
    /* $AC7D: D0 */ nes_cpu_instruction_boundary(0xAC7D, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xAC8A); return; }
label_AC7F:;
    /* $AC7F: 03 */ nes_cpu_instruction_boundary(0xAC7F, 8); { uint16_t a=nes_read16zp((0xFD + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AC81:;
    /* $AC81: 02 */ nes_cpu_instruction_boundary(0xAC81, 2); /* ILLEGAL $02 — skip 1 */
label_AC82:;
    /* $AC82: B1 */ nes_cpu_instruction_boundary(0xAC82, 5); g_cpu.A = nes_read((nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AC84:; /* Structure00_BANK1 */
    /* $AC84: 08 */ nes_cpu_instruction_boundary(0xAC84, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AC85:;
    /* $AC85: 01 */ nes_cpu_instruction_boundary(0xAC85, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AC87:;
    /* $AC87: 01 */ nes_cpu_instruction_boundary(0xAC87, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AC89:;
    /* $AC89: 01 */ nes_cpu_instruction_boundary(0xAC89, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AC8B:;
    /* $AC8B: 01 */ nes_cpu_instruction_boundary(0xAC8B, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AC8D:;
    /* $AC8D: 08 */ nes_cpu_instruction_boundary(0xAC8D, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AC8E:;
    /* $AC8E: 00 */ nes_cpu_instruction_boundary(0xAC8E, 7); nes_brk_executed(0xAC8E); return;
label_AC8F:;
    /* $AC8F: 00 */ nes_cpu_instruction_boundary(0xAC8F, 7); nes_brk_executed(0xAC8F); return;
label_AC90:;
    /* $AC90: 00 */ nes_cpu_instruction_boundary(0xAC90, 7); nes_brk_executed(0xAC90); return;
label_AC91:;
    /* $AC91: 00 */ nes_cpu_instruction_boundary(0xAC91, 7); nes_brk_executed(0xAC91); return;
label_AC92:;
    /* $AC92: 00 */ nes_cpu_instruction_boundary(0xAC92, 7); nes_brk_executed(0xAC92); return;
label_AC93:;
    /* $AC93: 00 */ nes_cpu_instruction_boundary(0xAC93, 7); nes_brk_executed(0xAC93); return;
label_AC94:;
    /* $AC94: 00 */ nes_cpu_instruction_boundary(0xAC94, 7); nes_brk_executed(0xAC94); return;
label_AC95:;
    /* $AC95: 00 */ nes_cpu_instruction_boundary(0xAC95, 7); nes_brk_executed(0xAC95); return;
label_AC96:;
    /* $AC96: FF */ nes_cpu_instruction_boundary(0xAC96, 7); { uint16_t a=(0x0208 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AC99:;
    /* $AC99: 02 */ nes_cpu_instruction_boundary(0xAC99, 2); /* ILLEGAL $02 — skip 1 */
label_AC9A:;
    /* $AC9A: 02 */ nes_cpu_instruction_boundary(0xAC9A, 2); /* ILLEGAL $02 — skip 1 */
label_AC9B:;
    /* $AC9B: 02 */ nes_cpu_instruction_boundary(0xAC9B, 2); /* ILLEGAL $02 — skip 1 */
label_AC9C:;
    /* $AC9C: 02 */ nes_cpu_instruction_boundary(0xAC9C, 2); /* ILLEGAL $02 — skip 1 */
label_AC9D:;
    /* $AC9D: 02 */ nes_cpu_instruction_boundary(0xAC9D, 2); /* ILLEGAL $02 — skip 1 */
label_AC9E:;
    /* $AC9E: 02 */ nes_cpu_instruction_boundary(0xAC9E, 2); /* ILLEGAL $02 — skip 1 */
label_AC9F:;
    /* $AC9F: 02 */ nes_cpu_instruction_boundary(0xAC9F, 2); /* ILLEGAL $02 — skip 1 */
label_ACA0:;
    /* $ACA0: 01 */ nes_cpu_instruction_boundary(0xACA0, 6); g_cpu.A |= nes_read(nes_read16zp((0x28 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACA2:;
    /* $ACA2: 01 */ nes_cpu_instruction_boundary(0xACA2, 6); g_cpu.A |= nes_read(nes_read16zp((0x28 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACA4:;
    /* $ACA4: 01 */ nes_cpu_instruction_boundary(0xACA4, 6); g_cpu.A |= nes_read(nes_read16zp((0x28 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACA6:;
    /* $ACA6: 08 */ nes_cpu_instruction_boundary(0xACA6, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_ACA7:;
    /* $ACA7: 02 */ nes_cpu_instruction_boundary(0xACA7, 2); /* ILLEGAL $02 — skip 1 */
label_ACA8:;
    /* $ACA8: 02 */ nes_cpu_instruction_boundary(0xACA8, 2); /* ILLEGAL $02 — skip 1 */
label_ACA9:;
    /* $ACA9: 02 */ nes_cpu_instruction_boundary(0xACA9, 2); /* ILLEGAL $02 — skip 1 */
label_ACAA:;
    /* $ACAA: 02 */ nes_cpu_instruction_boundary(0xACAA, 2); /* ILLEGAL $02 — skip 1 */
label_ACAB:;
    /* $ACAB: 02 */ nes_cpu_instruction_boundary(0xACAB, 2); /* ILLEGAL $02 — skip 1 */
label_ACAC:;
    /* $ACAC: 02 */ nes_cpu_instruction_boundary(0xACAC, 2); /* ILLEGAL $02 — skip 1 */
label_ACAD:;
    /* $ACAD: 02 */ nes_cpu_instruction_boundary(0xACAD, 2); /* ILLEGAL $02 — skip 1 */
label_ACAE:;
    /* $ACAE: 02 */ nes_cpu_instruction_boundary(0xACAE, 2); /* ILLEGAL $02 — skip 1 */
label_ACAF:;
    /* $ACAF: FF */ nes_cpu_instruction_boundary(0xACAF, 7); { uint16_t a=(0x0402 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ACB2:;
    /* $ACB2: 05 */ nes_cpu_instruction_boundary(0xACB2, 3); g_cpu.A |= nes_read(0x02); FLAG_NZ(g_cpu.A);
label_ACB4:;
    /* $ACB4: 04 */ nes_cpu_instruction_boundary(0xACB4, 3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ACB6:;
    /* $ACB6: 02 */ nes_cpu_instruction_boundary(0xACB6, 2); /* ILLEGAL $02 — skip 1 */
label_ACB7:;
    /* $ACB7: 04 */ nes_cpu_instruction_boundary(0xACB7, 3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ACB9:;
    /* $ACB9: 02 */ nes_cpu_instruction_boundary(0xACB9, 2); /* ILLEGAL $02 — skip 1 */
label_ACBA:;
    /* $ACBA: 04 */ nes_cpu_instruction_boundary(0xACBA, 3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ACBC:;
    /* $ACBC: 02 */ nes_cpu_instruction_boundary(0xACBC, 2); /* ILLEGAL $02 — skip 1 */
label_ACBD:;
    /* $ACBD: 04 */ nes_cpu_instruction_boundary(0xACBD, 3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ACBF:;
    /* $ACBF: 02 */ nes_cpu_instruction_boundary(0xACBF, 2); /* ILLEGAL $02 — skip 1 */
label_ACC0:;
    /* $ACC0: 04 */ nes_cpu_instruction_boundary(0xACC0, 3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ACC2:;
    /* $ACC2: 02 */ nes_cpu_instruction_boundary(0xACC2, 2); /* ILLEGAL $02 — skip 1 */
label_ACC3:;
    /* $ACC3: 04 */ nes_cpu_instruction_boundary(0xACC3, 3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ACC5:;
    /* $ACC5: 02 */ nes_cpu_instruction_boundary(0xACC5, 2); /* ILLEGAL $02 — skip 1 */
label_ACC6:;
    /* $ACC6: 04 */ nes_cpu_instruction_boundary(0xACC6, 3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ACC8:;
    /* $ACC8: FF */ nes_cpu_instruction_boundary(0xACC8, 7); { uint16_t a=(0x0601 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ACCB:;
    /* $ACCB: 01 */ nes_cpu_instruction_boundary(0xACCB, 6); g_cpu.A |= nes_read(nes_read16zp((0x06 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACCD:;
    /* $ACCD: 01 */ nes_cpu_instruction_boundary(0xACCD, 6); g_cpu.A |= nes_read(nes_read16zp((0x06 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACCF:;
    /* $ACCF: FF */ nes_cpu_instruction_boundary(0xACCF, 7); { uint16_t a=(0x0701 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ACD2:;
    /* $ACD2: 01 */ nes_cpu_instruction_boundary(0xACD2, 6); g_cpu.A |= nes_read(nes_read16zp((0x07 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACD4:;
    /* $ACD4: 01 */ nes_cpu_instruction_boundary(0xACD4, 6); g_cpu.A |= nes_read(nes_read16zp((0x07 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACD6:;
    /* $ACD6: FF */ nes_cpu_instruction_boundary(0xACD6, 7); { uint16_t a=(0x3102 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ACD9:;
    /* $ACD9: 32 */ nes_cpu_instruction_boundary(0xACD9, 2); /* ILLEGAL $32 — skip 1 */
label_ACDA:;
    /* $ACDA: FF */ nes_cpu_instruction_boundary(0xACDA, 7); { uint16_t a=(0x0801 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ACDD:;
    /* $ACDD: 01 */ nes_cpu_instruction_boundary(0xACDD, 6); g_cpu.A |= nes_read(nes_read16zp((0x33 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACDF:;
    /* $ACDF: 01 */ nes_cpu_instruction_boundary(0xACDF, 6); g_cpu.A |= nes_read(nes_read16zp((0x33 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACE1:;
    /* $ACE1: 01 */ nes_cpu_instruction_boundary(0xACE1, 6); g_cpu.A |= nes_read(nes_read16zp((0x33 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACE3:;
    /* $ACE3: 01 */ nes_cpu_instruction_boundary(0xACE3, 6); g_cpu.A |= nes_read(nes_read16zp((0x33 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACE5:;
    /* $ACE5: FF */ nes_cpu_instruction_boundary(0xACE5, 7); { uint16_t a=(0x2801 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ACE8:;
    /* $ACE8: 01 */ nes_cpu_instruction_boundary(0xACE8, 6); g_cpu.A |= nes_read(nes_read16zp((0x08 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACEA:;
    /* $ACEA: 01 */ nes_cpu_instruction_boundary(0xACEA, 6); g_cpu.A |= nes_read(nes_read16zp((0x1F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACEC:;
    /* $ACEC: 01 */ nes_cpu_instruction_boundary(0xACEC, 6); g_cpu.A |= nes_read(nes_read16zp((0x17 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACEE:;
    /* $ACEE: 01 */ nes_cpu_instruction_boundary(0xACEE, 6); g_cpu.A |= nes_read(nes_read16zp((0x17 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACF0:;
    /* $ACF0: 01 */ nes_cpu_instruction_boundary(0xACF0, 6); g_cpu.A |= nes_read(nes_read16zp((0x1F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACF2:;
    /* $ACF2: FF */ nes_cpu_instruction_boundary(0xACF2, 7); { uint16_t a=(0x0E02 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ACF5:;
    /* $ACF5: 11 */ nes_cpu_instruction_boundary(0xACF5, 5); g_cpu.A |= nes_read((nes_read16zp(0x03) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ACF7:;
    /* $ACF7: 0F */ nes_cpu_instruction_boundary(0xACF7, 6); { uint16_t a=0x2212; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_ACFA:;
    /* $ACFA: 03 */ nes_cpu_instruction_boundary(0xACFA, 8); { uint16_t a=nes_read16zp((0x10 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_ACFC:;
    /* $ACFC: 13 */ nes_cpu_instruction_boundary(0xACFC, 8); { uint16_t a=(nes_read16zp(0x14) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_ACFE:;
    /* $ACFE: FF */ nes_cpu_instruction_boundary(0xACFE, 7); { uint16_t a=(0x0804 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD01:;
    /* $AD01: 35 */ nes_cpu_instruction_boundary(0xAD01, 4); g_cpu.A &= nes_read((0x35 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AD03:;
    /* $AD03: 08 */ nes_cpu_instruction_boundary(0xAD03, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD04:;
    /* $AD04: FF */ nes_cpu_instruction_boundary(0xAD04, 7); { uint16_t a=(0x0803 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD07:;
    /* $AD07: 35 */ nes_cpu_instruction_boundary(0xAD07, 4); g_cpu.A &= nes_read((0x08 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AD09:;
    /* $AD09: FF */ nes_cpu_instruction_boundary(0xAD09, 7); { uint16_t a=(0x3602 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD0C:;
    /* $AD0C: 36 */ nes_cpu_instruction_boundary(0xAD0C, 6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD0E:;
    /* $AD0E: 1C */ nes_cpu_instruction_boundary(0xAD0E, 4); (void)nes_read((0x0208 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD11:;
    /* $AD11: 08 */ nes_cpu_instruction_boundary(0xAD11, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD12:;
    /* $AD12: 34 */ nes_cpu_instruction_boundary(0xAD12, 4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD14:;
    /* $AD14: 34 */ nes_cpu_instruction_boundary(0xAD14, 4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD16:;
    /* $AD16: 02 */ nes_cpu_instruction_boundary(0xAD16, 2); /* ILLEGAL $02 — skip 1 */
label_AD17:;
    /* $AD17: 08 */ nes_cpu_instruction_boundary(0xAD17, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD18:;
    /* $AD18: 08 */ nes_cpu_instruction_boundary(0xAD18, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD19:;
    /* $AD19: FF */ nes_cpu_instruction_boundary(0xAD19, 7); { uint16_t a=(0x2002 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD1C:;
    /* $AD1C: 20 */ nes_cpu_instruction_boundary(0xAD1C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xAD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1E; g_cpu.S--; if (!nes_dispatch_call(0x08FF, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAD1C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AD1F:;
    /* $AD1F: 08 */ nes_cpu_instruction_boundary(0xAD1F, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD20:;
    /* $AD20: 1C */ nes_cpu_instruction_boundary(0xAD20, 4); (void)nes_read((0x3508 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD23:;
    /* $AD23: 08 */ nes_cpu_instruction_boundary(0xAD23, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD24:;
    /* $AD24: 35 */ nes_cpu_instruction_boundary(0xAD24, 4); g_cpu.A &= nes_read((0x1C + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AD26:;
    /* $AD26: 08 */ nes_cpu_instruction_boundary(0xAD26, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD27:;
    /* $AD27: FF */ nes_cpu_instruction_boundary(0xAD27, 7); { uint16_t a=(0x1E08 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD2A:;
    /* $AD2A: 1E */ nes_cpu_instruction_boundary(0xAD2A, 7); { uint16_t a=(0x1C1C + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD2D:;
    /* $AD2D: 1E */ nes_cpu_instruction_boundary(0xAD2D, 7); { uint16_t a=(0x1E1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD30:;
    /* $AD30: 1E */ nes_cpu_instruction_boundary(0xAD30, 7); { uint16_t a=(0x1E08 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD33:;
    /* $AD33: 1E */ nes_cpu_instruction_boundary(0xAD33, 7); { uint16_t a=(0x1E1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD36:;
    /* $AD36: 1C */ nes_cpu_instruction_boundary(0xAD36, 4); (void)nes_read((0x1E1E + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD39:;
    /* $AD39: 1E */ nes_cpu_instruction_boundary(0xAD39, 7); { uint16_t a=(0x1C08 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD3C:;
    /* $AD3C: 1E */ nes_cpu_instruction_boundary(0xAD3C, 7); { uint16_t a=(0x1E1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD3F:;
    /* $AD3F: 1E */ nes_cpu_instruction_boundary(0xAD3F, 7); { uint16_t a=(0x1C1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD42:;
    /* $AD42: 1E */ nes_cpu_instruction_boundary(0xAD42, 7); { uint16_t a=(0x1E08 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD45:;
    /* $AD45: 1E */ nes_cpu_instruction_boundary(0xAD45, 7); { uint16_t a=(0x1C1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD48:;
    /* $AD48: 1E */ nes_cpu_instruction_boundary(0xAD48, 7); { uint16_t a=(0x1C1C + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD4B:;
    /* $AD4B: 1E */ nes_cpu_instruction_boundary(0xAD4B, 7); { uint16_t a=(0x08FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD4E:;
    /* $AD4E: 2E */ nes_cpu_instruction_boundary(0xAD4E, 6); { uint16_t a=0x2E2E; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD51:;
    /* $AD51: 2E */ nes_cpu_instruction_boundary(0xAD51, 6); { uint16_t a=0x2E2E; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD54:;
    /* $AD54: 2E */ nes_cpu_instruction_boundary(0xAD54, 6); { uint16_t a=0xFF2E; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD57:; /* Structure10_BANK1 */
    /* $AD57: 08 */ nes_cpu_instruction_boundary(0xAD57, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD58:;
    /* $AD58: 08 */ nes_cpu_instruction_boundary(0xAD58, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD59:;
    /* $AD59: 0B */ nes_cpu_instruction_boundary(0xAD59, 2); g_cpu.A &= 0x0B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AD5B:;
    /* $AD5B: 0B */ nes_cpu_instruction_boundary(0xAD5B, 2); g_cpu.A &= 0x0B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AD5D:;
    /* $AD5D: 08 */ nes_cpu_instruction_boundary(0xAD5D, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD5E:;
    /* $AD5E: 0B */ nes_cpu_instruction_boundary(0xAD5E, 2); g_cpu.A &= 0x0B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AD60:;
    /* $AD60: 08 */ nes_cpu_instruction_boundary(0xAD60, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD61:;
    /* $AD61: 08 */ nes_cpu_instruction_boundary(0xAD61, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD62:;
    /* $AD62: 08 */ nes_cpu_instruction_boundary(0xAD62, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD63:;
    /* $AD63: 1C */ nes_cpu_instruction_boundary(0xAD63, 4); (void)nes_read((0x081C + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD66:;
    /* $AD66: 08 */ nes_cpu_instruction_boundary(0xAD66, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD67:;
    /* $AD67: 1C */ nes_cpu_instruction_boundary(0xAD67, 4); (void)nes_read((0xFF08 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD6A:; /* Structure11_BANK1 */
    /* $AD6A: 08 */ nes_cpu_instruction_boundary(0xAD6A, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD6B:;
    /* $AD6B: 1C */ nes_cpu_instruction_boundary(0xAD6B, 4); (void)nes_read((0x0808 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD6E:;
    /* $AD6E: 08 */ nes_cpu_instruction_boundary(0xAD6E, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD6F:;
    /* $AD6F: 08 */ nes_cpu_instruction_boundary(0xAD6F, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD70:;
    /* $AD70: 0A */ nes_cpu_instruction_boundary(0xAD70, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AD71:;
    /* $AD71: 08 */ nes_cpu_instruction_boundary(0xAD71, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD72:;
    /* $AD72: 1C */ nes_cpu_instruction_boundary(0xAD72, 4); (void)nes_read((0x0808 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD75:;
    /* $AD75: 0A */ nes_cpu_instruction_boundary(0xAD75, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AD76:;
    /* $AD76: 09 */ nes_cpu_instruction_boundary(0xAD76, 2); g_cpu.A |= 0x0A; FLAG_NZ(g_cpu.A);
label_AD78:;
    /* $AD78: 28 */ nes_cpu_instruction_boundary(0xAD78, 4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AD79:;
    /* $AD79: 28 */ nes_cpu_instruction_boundary(0xAD79, 4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AD7A:;
    /* $AD7A: 08 */ nes_cpu_instruction_boundary(0xAD7A, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD7B:;
    /* $AD7B: 08 */ nes_cpu_instruction_boundary(0xAD7B, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD7C:;
    /* $AD7C: 01 */ nes_cpu_instruction_boundary(0xAD7C, 6); g_cpu.A |= nes_read(nes_read16zp((0x08 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD7E:;
    /* $AD7E: FF */ nes_cpu_instruction_boundary(0xAD7E, 7); { uint16_t a=(0x2C06 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD81:;
    /* $AD81: 2C */ nes_cpu_instruction_boundary(0xAD81, 4); { uint8_t m=nes_read(0x2C2C); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AD84:;
    /* $AD84: 15 */ nes_cpu_instruction_boundary(0xAD84, 4); g_cpu.A |= nes_read((0x2C + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AD86:;
    /* $AD86: 06 */ nes_cpu_instruction_boundary(0xAD86, 5); { uint16_t a=0x2D; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD88:;
    /* $AD88: 2D */ nes_cpu_instruction_boundary(0xAD88, 4); g_cpu.A &= nes_read(0x2D2D); FLAG_NZ(g_cpu.A);
label_AD8B:;
    /* $AD8B: 16 */ nes_cpu_instruction_boundary(0xAD8B, 6); { uint16_t a=(0x2D + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD8D:;
    /* $AD8D: FF */ nes_cpu_instruction_boundary(0xAD8D, 7); { uint16_t a=(0x2B08 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD90:;
    /* $AD90: 2B */ nes_cpu_instruction_boundary(0xAD90, 2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AD92:;
    /* $AD92: 2B */ nes_cpu_instruction_boundary(0xAD92, 2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AD94:;
    /* $AD94: 2B */ nes_cpu_instruction_boundary(0xAD94, 2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AD96:;
    /* $AD96: 2B */ nes_cpu_instruction_boundary(0xAD96, 2); g_cpu.A &= 0xFF; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AD98:; /* Structure14_BANK1 */
    /* $AD98: 08 */ nes_cpu_instruction_boundary(0xAD98, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD99:;
    /* $AD99: 1A */ nes_cpu_instruction_boundary(0xAD99, 2); /* NOP */
label_AD9A:;
    /* $AD9A: 1A */ nes_cpu_instruction_boundary(0xAD9A, 2); /* NOP */
label_AD9B:;
    /* $AD9B: 1A */ nes_cpu_instruction_boundary(0xAD9B, 2); /* NOP */
label_AD9C:;
    /* $AD9C: 1A */ nes_cpu_instruction_boundary(0xAD9C, 2); /* NOP */
label_AD9D:;
    /* $AD9D: 1A */ nes_cpu_instruction_boundary(0xAD9D, 2); /* NOP */
label_AD9E:;
    /* $AD9E: 1A */ nes_cpu_instruction_boundary(0xAD9E, 2); /* NOP */
label_AD9F:;
    /* $AD9F: 1A */ nes_cpu_instruction_boundary(0xAD9F, 2); /* NOP */
label_ADA0:;
    /* $ADA0: 1A */ nes_cpu_instruction_boundary(0xADA0, 2); /* NOP */
label_ADA1:;
    /* $ADA1: FF */ nes_cpu_instruction_boundary(0xADA1, 7); { uint16_t a=(0x2001 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ADA4:;
    /* $ADA4: 01 */ nes_cpu_instruction_boundary(0xADA4, 6); g_cpu.A |= nes_read(nes_read16zp((0x20 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ADA6:;
    /* $ADA6: 01 */ nes_cpu_instruction_boundary(0xADA6, 6); g_cpu.A |= nes_read(nes_read16zp((0x17 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ADA8:;
    /* $ADA8: 01 */ nes_cpu_instruction_boundary(0xADA8, 6); g_cpu.A |= nes_read(nes_read16zp((0x17 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ADAA:;
    /* $ADAA: 01 */ nes_cpu_instruction_boundary(0xADAA, 6); g_cpu.A |= nes_read(nes_read16zp((0x20 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ADAC:;
    /* $ADAC: FF */ nes_cpu_instruction_boundary(0xADAC, 7); { uint16_t a=(0x2007 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ADAF:;
    /* $ADAF: 20 */ nes_cpu_instruction_boundary(0xADAF, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xAD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB1; g_cpu.S--; if (!nes_dispatch_call(0x2020, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xADAF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_ADB2:;
    /* $ADB2: 20 */ nes_cpu_instruction_boundary(0xADB2, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xAD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; if (!nes_dispatch_call(0x2020, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xADB2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_ADB5:;
    /* $ADB5: 07 */ nes_cpu_instruction_boundary(0xADB5, 5); { uint16_t a=0x20; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_ADB7:;
    /* $ADB7: 1A */ nes_cpu_instruction_boundary(0xADB7, 2); /* NOP */
label_ADB8:;
    /* $ADB8: 20 */ nes_cpu_instruction_boundary(0xADB8, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xAD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; if (!nes_dispatch_call(0x201F, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xADB8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_ADBB:;
    /* $ADBB: 1A */ nes_cpu_instruction_boundary(0xADBB, 2); /* NOP */
label_ADBC:;
    /* $ADBC: 20 */ nes_cpu_instruction_boundary(0xADBC, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xAD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBE; g_cpu.S--; if (!nes_dispatch_call(0x08FF, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xADBC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_ADBF:;
    /* $ADBF: 0D */ nes_cpu_instruction_boundary(0xADBF, 4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_ADC2:;
    /* $ADC2: 0D */ nes_cpu_instruction_boundary(0xADC2, 4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_ADC5:;
    /* $ADC5: 0D */ nes_cpu_instruction_boundary(0xADC5, 4); g_cpu.A |= nes_read(0x080D); FLAG_NZ(g_cpu.A);
label_ADC8:;
    /* $ADC8: 0D */ nes_cpu_instruction_boundary(0xADC8, 4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_ADCB:;
    /* $ADCB: 0D */ nes_cpu_instruction_boundary(0xADCB, 4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_ADCE:;
    /* $ADCE: 0D */ nes_cpu_instruction_boundary(0xADCE, 4); g_cpu.A |= nes_read(0x080D); FLAG_NZ(g_cpu.A);
label_ADD1:;
    /* $ADD1: 0D */ nes_cpu_instruction_boundary(0xADD1, 4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_ADD4:;
    /* $ADD4: 0D */ nes_cpu_instruction_boundary(0xADD4, 4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_ADD7:;
    /* $ADD7: 0D */ nes_cpu_instruction_boundary(0xADD7, 4); g_cpu.A |= nes_read(0x080D); FLAG_NZ(g_cpu.A);
label_ADDA:;
    /* $ADDA: 0D */ nes_cpu_instruction_boundary(0xADDA, 4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_ADDD:;
    /* $ADDD: 0D */ nes_cpu_instruction_boundary(0xADDD, 4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_ADE0:;
    /* $ADE0: 0D */ nes_cpu_instruction_boundary(0xADE0, 4); g_cpu.A |= nes_read(0xFF0D); FLAG_NZ(g_cpu.A);
label_ADE3:; /* Structure18_BANK1 */
    /* $ADE3: 01 */ nes_cpu_instruction_boundary(0xADE3, 6); g_cpu.A |= nes_read(nes_read16zp((0x0D + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ADE5:;
    /* $ADE5: FF */ nes_cpu_instruction_boundary(0xADE5, 7); { uint16_t a=(0x0D04 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ADE8:;
    /* $ADE8: 0D */ nes_cpu_instruction_boundary(0xADE8, 4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_ADEB:;
    /* $ADEB: FF */ nes_cpu_instruction_boundary(0xADEB, 7); { uint16_t a=(0x0D02 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ADEE:;
    /* $ADEE: 0D */ nes_cpu_instruction_boundary(0xADEE, 4); g_cpu.A |= nes_read(0x0D02); FLAG_NZ(g_cpu.A);
label_ADF1:;
    /* $ADF1: 0D */ nes_cpu_instruction_boundary(0xADF1, 4); g_cpu.A |= nes_read(0x0D02); FLAG_NZ(g_cpu.A);
label_ADF4:;
    /* $ADF4: 0D */ nes_cpu_instruction_boundary(0xADF4, 4); g_cpu.A |= nes_read(0x0D02); FLAG_NZ(g_cpu.A);
label_ADF7:;
    /* $ADF7: 0D */ nes_cpu_instruction_boundary(0xADF7, 4); g_cpu.A |= nes_read(0x08FF); FLAG_NZ(g_cpu.A);
label_ADFA:;
    /* $ADFA: 0D */ nes_cpu_instruction_boundary(0xADFA, 4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_ADFD:;
    /* $ADFD: 0D */ nes_cpu_instruction_boundary(0xADFD, 4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_AE00:;
    /* $AE00: 0D */ nes_cpu_instruction_boundary(0xAE00, 4); g_cpu.A |= nes_read(0x050D); FLAG_NZ(g_cpu.A);
label_AE03:;
    /* $AE03: 27 */ nes_cpu_instruction_boundary(0xAE03, 5); { uint16_t a=0x30; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE05:;
    /* $AE05: 0D */ nes_cpu_instruction_boundary(0xAE05, 4); g_cpu.A |= nes_read(0x300D); FLAG_NZ(g_cpu.A);
label_AE08:;
    /* $AE08: FF */ nes_cpu_instruction_boundary(0xAE08, 7); { uint16_t a=(0x0D08 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE0B:;
    /* $AE0B: 0D */ nes_cpu_instruction_boundary(0xAE0B, 4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_AE0E:;
    /* $AE0E: 0D */ nes_cpu_instruction_boundary(0xAE0E, 4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_AE11:;
    /* $AE11: 0D */ nes_cpu_instruction_boundary(0xAE11, 4); g_cpu.A |= nes_read(0x01FF); FLAG_NZ(g_cpu.A);
label_AE14:;
    /* $AE14: 0C */ nes_cpu_instruction_boundary(0xAE14, 4); (void)nes_read(0x1F01); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE17:;
    /* $AE17: FF */ nes_cpu_instruction_boundary(0xAE17, 7); { uint16_t a=(0x0804 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE1A:;
    /* $AE1A: 35 */ nes_cpu_instruction_boundary(0xAE1A, 4); g_cpu.A &= nes_read((0x08 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AE1C:;
    /* $AE1C: 08 */ nes_cpu_instruction_boundary(0xAE1C, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AE1D:;
    /* $AE1D: 04 */ nes_cpu_instruction_boundary(0xAE1D, 3); (void)nes_read(0x08); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE1F:;
    /* $AE1F: 1C */ nes_cpu_instruction_boundary(0xAE1F, 4); (void)nes_read((0x3408 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE22:;
    /* $AE22: 04 */ nes_cpu_instruction_boundary(0xAE22, 3); (void)nes_read(0x34); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE24:;
    /* $AE24: 08 */ nes_cpu_instruction_boundary(0xAE24, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AE25:;
    /* $AE25: 08 */ nes_cpu_instruction_boundary(0xAE25, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AE26:;
    /* $AE26: 08 */ nes_cpu_instruction_boundary(0xAE26, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AE27:;
    /* $AE27: 04 */ nes_cpu_instruction_boundary(0xAE27, 3); (void)nes_read(0x08); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE29:;
    /* $AE29: 08 */ nes_cpu_instruction_boundary(0xAE29, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AE2A:;
    /* $AE2A: 1C */ nes_cpu_instruction_boundary(0xAE2A, 4); (void)nes_read((0xFF08 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE2D:; /* Structure1F_BANK1 */
    /* $AE2D: 04 */ nes_cpu_instruction_boundary(0xAE2D, 3); (void)nes_read(0x1D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE2F:;
    /* $AE2F: 1D */ nes_cpu_instruction_boundary(0xAE2F, 4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE32:;
    /* $AE32: 04 */ nes_cpu_instruction_boundary(0xAE32, 3); (void)nes_read(0x1D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE34:;
    /* $AE34: 1C */ nes_cpu_instruction_boundary(0xAE34, 4); (void)nes_read((0x1D1C + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE37:;
    /* $AE37: 04 */ nes_cpu_instruction_boundary(0xAE37, 3); (void)nes_read(0x1C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE39:;
    /* $AE39: 1D */ nes_cpu_instruction_boundary(0xAE39, 4); g_cpu.A |= nes_read((0x1C1C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE3C:;
    /* $AE3C: 04 */ nes_cpu_instruction_boundary(0xAE3C, 3); (void)nes_read(0x1D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE3E:;
    /* $AE3E: 1C */ nes_cpu_instruction_boundary(0xAE3E, 4); (void)nes_read((0x1D1D + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE41:;
    /* $AE41: FF */ nes_cpu_instruction_boundary(0xAE41, 7); { uint16_t a=(0x3304 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE44:;
    /* $AE44: 33 */ nes_cpu_instruction_boundary(0xAE44, 8); { uint16_t a=(nes_read16zp(0x33) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE46:;
    /* $AE46: 33 */ nes_cpu_instruction_boundary(0xAE46, 8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE48:; /* Structure21_BANK1 */
    /* $AE48: 01 */ nes_cpu_instruction_boundary(0xAE48, 6); g_cpu.A |= nes_read(nes_read16zp((0x22 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE4A:;
    /* $AE4A: FF */ nes_cpu_instruction_boundary(0xAE4A, 7); { uint16_t a=(0x2803 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE4D:;
    /* $AE4D: 0E */ nes_cpu_instruction_boundary(0xAE4D, 6); { uint16_t a=0x0308; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE50:;
    /* $AE50: 37 */ nes_cpu_instruction_boundary(0xAE50, 6); { uint16_t a=(0x08 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE52:;
    /* $AE52: 39 */ nes_cpu_instruction_boundary(0xAE52, 4); g_cpu.A &= nes_read((0x3803 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE55:;
    /* $AE55: 39 */ nes_cpu_instruction_boundary(0xAE55, 4); g_cpu.A &= nes_read((0x0339 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE58:;
    /* $AE58: 28 */ nes_cpu_instruction_boundary(0xAE58, 4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AE59:;
    /* $AE59: 3A */ nes_cpu_instruction_boundary(0xAE59, 2); /* NOP */
label_AE5A:;
    /* $AE5A: 0A */ nes_cpu_instruction_boundary(0xAE5A, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AE5B:;
    /* $AE5B: 02 */ nes_cpu_instruction_boundary(0xAE5B, 2); /* ILLEGAL $02 — skip 1 */
label_AE5C:;
    /* $AE5C: 3B */ nes_cpu_instruction_boundary(0xAE5C, 7); { uint16_t a=(0xFF3C + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE5F:; /* Structure23_BANK1 */
    /* $AE5F: 03 */ nes_cpu_instruction_boundary(0xAE5F, 8); { uint16_t a=nes_read16zp((0x1E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AE61:;
    /* $AE61: 1E */ nes_cpu_instruction_boundary(0xAE61, 7); { uint16_t a=(0x031C + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE64:;
    /* $AE64: 39 */ nes_cpu_instruction_boundary(0xAE64, 4); g_cpu.A &= nes_read((0x1E08 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE67:;
    /* $AE67: 03 */ nes_cpu_instruction_boundary(0xAE67, 8); { uint16_t a=nes_read16zp((0x0A + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AE69:;
    /* $AE69: 09 */ nes_cpu_instruction_boundary(0xAE69, 2); g_cpu.A |= 0x1E; FLAG_NZ(g_cpu.A);
label_AE6B:;
    /* $AE6B: 03 */ nes_cpu_instruction_boundary(0xAE6B, 8); { uint16_t a=nes_read16zp((0x3D + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AE6D:;
    /* $AE6D: 0B */ nes_cpu_instruction_boundary(0xAE6D, 2); g_cpu.A &= 0x0A; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AE6F:;
    /* $AE6F: FF */ nes_cpu_instruction_boundary(0xAE6F, 7); { uint16_t a=(0x1E04 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE72:;
    /* $AE72: 1E */ nes_cpu_instruction_boundary(0xAE72, 7); { uint16_t a=(0x1E1C + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE75:;
    /* $AE75: 04 */ nes_cpu_instruction_boundary(0xAE75, 3); (void)nes_read(0x1E); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE77:;
    /* $AE77: 1E */ nes_cpu_instruction_boundary(0xAE77, 7); { uint16_t a=(0x1E1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE7A:;
    /* $AE7A: 04 */ nes_cpu_instruction_boundary(0xAE7A, 3); (void)nes_read(0x1C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE7C:;
    /* $AE7C: 1E */ nes_cpu_instruction_boundary(0xAE7C, 7); { uint16_t a=(0x1E1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE7F:;
    /* $AE7F: 04 */ nes_cpu_instruction_boundary(0xAE7F, 3); (void)nes_read(0x1E); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE81:;
    /* $AE81: 1E */ nes_cpu_instruction_boundary(0xAE81, 7); { uint16_t a=(0x1E1C + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE84:;
    /* $AE84: FF */ nes_cpu_instruction_boundary(0xAE84, 7); { uint16_t a=(0x2301 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE87:;
    /* $AE87: 01 */ nes_cpu_instruction_boundary(0xAE87, 6); g_cpu.A |= nes_read(nes_read16zp((0x23 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE89:;
    /* $AE89: 01 */ nes_cpu_instruction_boundary(0xAE89, 6); g_cpu.A |= nes_read(nes_read16zp((0x23 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE8B:;
    /* $AE8B: 01 */ nes_cpu_instruction_boundary(0xAE8B, 6); g_cpu.A |= nes_read(nes_read16zp((0x23 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE8D:;
    /* $AE8D: FF */ nes_cpu_instruction_boundary(0xAE8D, 7); { uint16_t a=(0x3E02 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE90:;
    /* $AE90: 3F */ nes_cpu_instruction_boundary(0xAE90, 7); { uint16_t a=(0x08FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE93:;
    /* $AE93: 1E */ nes_cpu_instruction_boundary(0xAE93, 7); { uint16_t a=(0x1E1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE96:;
    /* $AE96: 1E */ nes_cpu_instruction_boundary(0xAE96, 7); { uint16_t a=(0x1E1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE99:;
    /* $AE99: 1E */ nes_cpu_instruction_boundary(0xAE99, 7); { uint16_t a=(0x081E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE9C:;
    /* $AE9C: 1E */ nes_cpu_instruction_boundary(0xAE9C, 7); { uint16_t a=(0x1E1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE9F:;
    /* $AE9F: 1E */ nes_cpu_instruction_boundary(0xAE9F, 7); { uint16_t a=(0x1E1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AEA2:;
    /* $AEA2: 1E */ nes_cpu_instruction_boundary(0xAEA2, 7); { uint16_t a=(0xFF1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AEA5:; /* Structure28_BANK1 */
    /* $AEA5: 01 */ nes_cpu_instruction_boundary(0xAEA5, 6); g_cpu.A |= nes_read(nes_read16zp((0x1F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AEA7:;
    /* $AEA7: 01 */ nes_cpu_instruction_boundary(0xAEA7, 6); g_cpu.A |= nes_read(nes_read16zp((0x1F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AEA9:;
    /* $AEA9: 01 */ nes_cpu_instruction_boundary(0xAEA9, 6); g_cpu.A |= nes_read(nes_read16zp((0x1F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AEAB:;
    /* $AEAB: 01 */ nes_cpu_instruction_boundary(0xAEAB, 6); g_cpu.A |= nes_read(nes_read16zp((0x1F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AEAD:;
    /* $AEAD: 01 */ nes_cpu_instruction_boundary(0xAEAD, 6); g_cpu.A |= nes_read(nes_read16zp((0x1F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AEAF:;
    /* $AEAF: FF */ nes_cpu_instruction_boundary(0xAEAF, 7); { uint16_t a=(0x3E01 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AEB2:;
    /* $AEB2: FF */ nes_cpu_instruction_boundary(0xAEB2, 7); { uint16_t a=(0x2E04 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AEB5:;
    /* $AEB5: 2A */ nes_cpu_instruction_boundary(0xAEB5, 2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_AEB6:;
    /* $AEB6: 2E */ nes_cpu_instruction_boundary(0xAEB6, 6); { uint16_t a=0x042E; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AEB9:;
    /* $AEB9: 2E */ nes_cpu_instruction_boundary(0xAEB9, 6); { uint16_t a=0x2E2E; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AEBC:;
    /* $AEBC: 2A */ nes_cpu_instruction_boundary(0xAEBC, 2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_AEBD:;
    /* $AEBD: FF */ nes_cpu_instruction_boundary(0xAEBD, 7); { uint16_t a=(0x2B08 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AEC0:;
    /* $AEC0: 03 */ nes_cpu_instruction_boundary(0xAEC0, 8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AEC2:;
    /* $AEC2: 2B */ nes_cpu_instruction_boundary(0xAEC2, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AEC4:;
    /* $AEC4: 03 */ nes_cpu_instruction_boundary(0xAEC4, 8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AEC6:;
    /* $AEC6: 2B */ nes_cpu_instruction_boundary(0xAEC6, 2); g_cpu.A &= 0xFF; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AEC8:; /* Structure2C_BANK1 */
    /* $AEC8: 01 */ nes_cpu_instruction_boundary(0xAEC8, 6); g_cpu.A |= nes_read(nes_read16zp((0x1B + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AECA:;
    /* $AECA: FF */ nes_cpu_instruction_boundary(0xAECA, 7); { uint16_t a=(0x1F08 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AECD:;
    /* $AECD: 1F */ nes_cpu_instruction_boundary(0xAECD, 7); { uint16_t a=(0x1F1F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AED0:;
    /* $AED0: 1F */ nes_cpu_instruction_boundary(0xAED0, 7); { uint16_t a=(0x1F1F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AED3:;
    /* $AED3: 1F */ nes_cpu_instruction_boundary(0xAED3, 7); { uint16_t a=(0x1F08 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AED6:;
    /* $AED6: 1F */ nes_cpu_instruction_boundary(0xAED6, 7); { uint16_t a=(0x1F1F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AED9:;
    /* $AED9: 1F */ nes_cpu_instruction_boundary(0xAED9, 7); { uint16_t a=(0x1F1F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AEDC:;
    /* $AEDC: 1F */ nes_cpu_instruction_boundary(0xAEDC, 7); { uint16_t a=(0x01FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AEDF:;
    /* $AEDF: 2F */ nes_cpu_instruction_boundary(0xAEDF, 6); { uint16_t a=0x01FF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AEE2:;
    /* $AEE2: 1F */ nes_cpu_instruction_boundary(0xAEE2, 7); { uint16_t a=(0x01FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AEE5:;
    /* $AEE5: 17 */ nes_cpu_instruction_boundary(0xAEE5, 6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AEE7:;
    /* $AEE7: 17 */ nes_cpu_instruction_boundary(0xAEE7, 6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AEE9:;
    /* $AEE9: 17 */ nes_cpu_instruction_boundary(0xAEE9, 6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AEEB:;
    /* $AEEB: 17 */ nes_cpu_instruction_boundary(0xAEEB, 6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AEED:; /* Structure31_BANK1 */
    /* $AEED: 01 */ nes_cpu_instruction_boundary(0xAEED, 6); g_cpu.A |= nes_read(nes_read16zp((0x24 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AEEF:;
    /* $AEEF: FF */ nes_cpu_instruction_boundary(0xAEEF, 7); { uint16_t a=(0xF1F1 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AEF2:;
    /* $AEF2: F1 */ nes_cpu_instruction_boundary(0xAEF2, 5); { uint8_t m=nes_read((nes_read16zp(0xF1) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AEF4:;
    /* $AEF4: FF */ nes_cpu_instruction_boundary(0xAEF4, 7); { uint16_t a=(0xF0FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AEF7:;
    /* $AEF7: F0 */ nes_cpu_instruction_boundary(0xAEF7, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xAF5D); return; }
label_AEF9:;
    /* $AEF9: 64 */ nes_cpu_instruction_boundary(0xAEF9, 3); (void)nes_read(0x64); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEFB:;
    /* $AEFB: 64 */ nes_cpu_instruction_boundary(0xAEFB, 3); (void)nes_read(0xD5); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEFD:;
    /* $AEFD: D6 */ nes_cpu_instruction_boundary(0xAEFD, 6); { uint16_t a=(0xCB + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AEFF:;
    /* $AEFF: CC */ nes_cpu_instruction_boundary(0xAEFF, 4); { uint8_t m=nes_read(0xFFA4); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_AF02:;
    /* $AF02: A4 */ nes_cpu_instruction_boundary(0xAF02, 3); g_cpu.Y = nes_read(0xFF); FLAG_NZ(g_cpu.Y);
label_AF04:;
    /* $AF04: FF */ nes_cpu_instruction_boundary(0xAF04, 7); { uint16_t a=(0xFFA5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF07:;
    /* $AF07: A5 */ nes_cpu_instruction_boundary(0xAF07, 3); g_cpu.A = nes_read(0xA0); FLAG_NZ(g_cpu.A);
label_AF09:;
    /* $AF09: A0 */ nes_cpu_instruction_boundary(0xAF09, 2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_AF0B:;
    /* $AF0B: A0 */ nes_cpu_instruction_boundary(0xAF0B, 2); g_cpu.Y = 0xA1; FLAG_NZ(g_cpu.Y);
label_AF0D:;
    /* $AF0D: A1 */ nes_cpu_instruction_boundary(0xAF0D, 6); g_cpu.A = nes_read(nes_read16zp((0xA1 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AF0F:;
    /* $AF0F: A1 */ nes_cpu_instruction_boundary(0xAF0F, 6); g_cpu.A = nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AF11:;
    /* $AF11: 01 */ nes_cpu_instruction_boundary(0xAF11, 6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AF13:;
    /* $AF13: 03 */ nes_cpu_instruction_boundary(0xAF13, 8); { uint16_t a=nes_read16zp((0x0B + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF15:;
    /* $AF15: 00 */ nes_cpu_instruction_boundary(0xAF15, 7); nes_brk_executed(0xAF15); return;
label_AF16:;
    /* $AF16: FF */ nes_cpu_instruction_boundary(0xAF16, 7); { uint16_t a=(0x030B + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF19:;
    /* $AF19: 0A */ nes_cpu_instruction_boundary(0xAF19, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AF1A:;
    /* $AF1A: 0A */ nes_cpu_instruction_boundary(0xAF1A, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AF1B:;
    /* $AF1B: FF */ nes_cpu_instruction_boundary(0xAF1B, 7); { uint16_t a=(0x0908 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF1E:;
    /* $AF1E: 02 */ nes_cpu_instruction_boundary(0xAF1E, 2); /* ILLEGAL $02 — skip 1 */
label_AF1F:;
    /* $AF1F: 03 */ nes_cpu_instruction_boundary(0xAF1F, 8); { uint16_t a=nes_read16zp((0x0E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF21:;
    /* $AF21: 0F */ nes_cpu_instruction_boundary(0xAF21, 6); { uint16_t a=0x1110; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF24:;
    /* $AF24: 12 */ nes_cpu_instruction_boundary(0xAF24, 2); /* ILLEGAL $12 — skip 1 */
label_AF25:;
    /* $AF25: 13 */ nes_cpu_instruction_boundary(0xAF25, 8); { uint16_t a=(nes_read16zp(0x14) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF27:;
    /* $AF27: 0C */ nes_cpu_instruction_boundary(0xAF27, 4); (void)nes_read(0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF2A:;
    /* $AF2A: FF */ nes_cpu_instruction_boundary(0xAF2A, 7); { uint16_t a=(0xFF30 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF2D:;
    /* $AF2D: 33 */ nes_cpu_instruction_boundary(0xAF2D, 8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AF2F:;
    /* $AF2F: 36 */ nes_cpu_instruction_boundary(0xAF2F, 6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AF31:;
    /* $AF31: 39 */ nes_cpu_instruction_boundary(0xAF31, 4); g_cpu.A &= nes_read((0x3DFF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF34:;
    /* $AF34: FF */ nes_cpu_instruction_boundary(0xAF34, 7); { uint16_t a=(0x31FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF37:;
    /* $AF37: 32 */ nes_cpu_instruction_boundary(0xAF37, 2); /* ILLEGAL $32 — skip 1 */
label_AF38:;
    /* $AF38: 34 */ nes_cpu_instruction_boundary(0xAF38, 4); (void)nes_read((0x35 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF3A:;
    /* $AF3A: 37 */ nes_cpu_instruction_boundary(0xAF3A, 6); { uint16_t a=(0x38 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AF3C:;
    /* $AF3C: 3A */ nes_cpu_instruction_boundary(0xAF3C, 2); /* NOP */
label_AF3D:;
    /* $AF3D: 3B */ nes_cpu_instruction_boundary(0xAF3D, 7); { uint16_t a=(0x3F3E + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AF40:;
    /* $AF40: 3C */ nes_cpu_instruction_boundary(0xAF40, 4); (void)nes_read((0x4041 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF43:;
    /* $AF43: 42 */ nes_cpu_instruction_boundary(0xAF43, 2); /* ILLEGAL $42 — skip 1 */
label_AF44:;
    /* $AF44: FF */ nes_cpu_instruction_boundary(0xAF44, 7); { uint16_t a=(0x43FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF47:;
    /* $AF47: 43 */ nes_cpu_instruction_boundary(0xAF47, 8); { uint16_t a=nes_read16zp((0x44 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AF49:;
    /* $AF49: 44 */ nes_cpu_instruction_boundary(0xAF49, 3); (void)nes_read(0x44); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF4B:;
    /* $AF4B: 44 */ nes_cpu_instruction_boundary(0xAF4B, 3); (void)nes_read(0x45); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF4D:;
    /* $AF4D: 46 */ nes_cpu_instruction_boundary(0xAF4D, 5); { uint16_t a=0x45; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_AF4F:;
    /* $AF4F: 46 */ nes_cpu_instruction_boundary(0xAF4F, 5); { uint16_t a=0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_AF51:;
    /* $AF51: 47 */ nes_cpu_instruction_boundary(0xAF51, 5); { uint16_t a=0x47; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AF53:;
    /* $AF53: 48 */ nes_cpu_instruction_boundary(0xAF53, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AF54:;
    /* $AF54: 48 */ nes_cpu_instruction_boundary(0xAF54, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AF55:;
    /* $AF55: FF */ nes_cpu_instruction_boundary(0xAF55, 7); { uint16_t a=(0x4847 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF58:;
    /* $AF58: 48 */ nes_cpu_instruction_boundary(0xAF58, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AF59:;
    /* $AF59: 47 */ nes_cpu_instruction_boundary(0xAF59, 5); { uint16_t a=0x47; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AF5B:;
    /* $AF5B: 48 */ nes_cpu_instruction_boundary(0xAF5B, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AF5C:;
    /* $AF5C: 49 */ nes_cpu_instruction_boundary(0xAF5C, 2); g_cpu.A ^= 0x49; FLAG_NZ(g_cpu.A);
label_AF5E:;
    /* $AF5E: 4A */ nes_cpu_instruction_boundary(0xAF5E, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AF5F:;
    /* $AF5F: 4A */ nes_cpu_instruction_boundary(0xAF5F, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AF60:;
    /* $AF60: 4B */ nes_cpu_instruction_boundary(0xAF60, 2); g_cpu.A &= 0x4C; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_AF62:;
    /* $AF62: 4D */ nes_cpu_instruction_boundary(0xAF62, 4); g_cpu.A ^= nes_read(0x5150); FLAG_NZ(g_cpu.A);
label_AF65:;
    /* $AF65: 52 */ nes_cpu_instruction_boundary(0xAF65, 2); /* ILLEGAL $52 — skip 1 */
label_AF66:;
    /* $AF66: 53 */ nes_cpu_instruction_boundary(0xAF66, 8); { uint16_t a=(nes_read16zp(0x54) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AF68:;
    /* $AF68: 55 */ nes_cpu_instruction_boundary(0xAF68, 4); g_cpu.A ^= nes_read((0x56 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AF6A:;
    /* $AF6A: 57 */ nes_cpu_instruction_boundary(0xAF6A, 6); { uint16_t a=(0x58 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AF6C:;
    /* $AF6C: 59 */ nes_cpu_instruction_boundary(0xAF6C, 4); g_cpu.A ^= nes_read((0x595B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF6F:;
    /* $AF6F: 5B */ nes_cpu_instruction_boundary(0xAF6F, 7); { uint16_t a=(0x5D5C + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AF72:;
    /* $AF72: 5E */ nes_cpu_instruction_boundary(0xAF72, 7); { uint16_t a=(0x4F5F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_AF75:;
    /* $AF75: 4F */ nes_cpu_instruction_boundary(0xAF75, 6); { uint16_t a=0x4F4F; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AF78:;
    /* $AF78: 88 */ nes_cpu_instruction_boundary(0xAF78, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AF79:;
    /* $AF79: 89 */ nes_cpu_instruction_boundary(0xAF79, 2); /* NOP */
label_AF7B:;
    /* $AF7B: 8B */ nes_cpu_instruction_boundary(0xAF7B, 2); /* ILLEGAL $8B — skip 2 */
label_AF7D:;
    /* $AF7D: 85 */ nes_cpu_instruction_boundary(0xAF7D, 3); nes_write(0x86, g_cpu.A);
label_AF7F:;
    /* $AF7F: 87 */ nes_cpu_instruction_boundary(0xAF7F, 3); nes_write(0x8C, g_cpu.A & g_cpu.X); /* SAX */
label_AF81:;
    /* $AF81: 8D */ nes_cpu_instruction_boundary(0xAF81, 4); nes_write(0x8F8E, g_cpu.A);
label_AF84:;
    /* $AF84: FF */ nes_cpu_instruction_boundary(0xAF84, 7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF87:;
    /* $AF87: FF */ nes_cpu_instruction_boundary(0xAF87, 7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF8A:;
    /* $AF8A: FF */ nes_cpu_instruction_boundary(0xAF8A, 7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF8D:;
    /* $AF8D: FF */ nes_cpu_instruction_boundary(0xAF8D, 7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF90:;
    /* $AF90: FF */ nes_cpu_instruction_boundary(0xAF90, 7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF93:;
    /* $AF93: FF */ nes_cpu_instruction_boundary(0xAF93, 7); { uint16_t a=(0xB1B0 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF96:;
    /* $AF96: B2 */ nes_cpu_instruction_boundary(0xAF96, 2); /* ILLEGAL $B2 — skip 1 */
label_AF97:;
    /* $AF97: B3 */ nes_cpu_instruction_boundary(0xAF97, 5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0xB4) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF99:;
    /* $AF99: B5 */ nes_cpu_instruction_boundary(0xAF99, 4); g_cpu.A = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AF9B:;
    /* $AF9B: B7 */ nes_cpu_instruction_boundary(0xAF9B, 4); g_cpu.A = g_cpu.X = nes_read((0xB8 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_AF9D:;
    /* $AF9D: B8 */ nes_cpu_instruction_boundary(0xAF9D, 2); g_cpu.V = 0;
label_AF9E:;
    /* $AF9E: B9 */ nes_cpu_instruction_boundary(0xAF9E, 4); g_cpu.A = nes_read((0xFFB9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AFA1:;
    /* $AFA1: FF */ nes_cpu_instruction_boundary(0xAFA1, 7); { uint16_t a=(0xBABA + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AFA4:;
    /* $AFA4: BB */ nes_cpu_instruction_boundary(0xAFA4, 4); /* ILLEGAL $BB — skip 3 */
label_AFA7:;
    /* $AFA7: BB */ nes_cpu_instruction_boundary(0xAFA7, 4); /* ILLEGAL $BB — skip 3 */
label_AFAA:;
    /* $AFAA: C9 */ nes_cpu_instruction_boundary(0xAFAA, 2); { int r=g_cpu.A-0xCA; g_cpu.C=(g_cpu.A>=0xCA)?1:0; FLAG_NZ(r&0xFF); }
label_AFAC:;
    /* $AFAC: 94 */ nes_cpu_instruction_boundary(0xAFAC, 4); nes_write((0x95 + g_cpu.X) & 0xFF, g_cpu.Y);
label_AFAE:;
    /* $AFAE: 96 */ nes_cpu_instruction_boundary(0xAFAE, 4); nes_write((0x97 + g_cpu.Y) & 0xFF, g_cpu.X);
label_AFB0:;
    /* $AFB0: 0D */ nes_cpu_instruction_boundary(0xAFB0, 4); g_cpu.A |= nes_read(0xFFFF); FLAG_NZ(g_cpu.A);
label_AFB3:;
    /* $AFB3: FF */ nes_cpu_instruction_boundary(0xAFB3, 7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AFB6:;
    /* $AFB6: 59 */ nes_cpu_instruction_boundary(0xAFB6, 4); g_cpu.A ^= nes_read((0xFF5A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AFB9:;
    /* $AFB9: FF */ nes_cpu_instruction_boundary(0xAFB9, 7); { uint16_t a=(0x5B5A + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AFBC:;
    /* $AFBC: 80 */ nes_cpu_instruction_boundary(0xAFBC, 2); /* NOP */
label_AFBE:;
    /* $AFBE: 82 */ nes_cpu_instruction_boundary(0xAFBE, 2); /* NOP */
label_AFC0:;
    /* $AFC0: 04 */ nes_cpu_instruction_boundary(0xAFC0, 3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AFC2:;
    /* $AFC2: 04 */ nes_cpu_instruction_boundary(0xAFC2, 3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AFC4:;
    /* $AFC4: 06 */ nes_cpu_instruction_boundary(0xAFC4, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AFC6:;
    /* $AFC6: 07 */ nes_cpu_instruction_boundary(0xAFC6, 5); { uint16_t a=0x07; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AFC8:;
    /* $AFC8: 60 */ nes_cpu_instruction_boundary(0xAFC8, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AFC9:;
    /* $AFC9: 61 */ nes_cpu_instruction_boundary(0xAFC9, 6); { uint8_t m=nes_read(nes_read16zp((0x62 + g_cpu.X) & 0xFF)); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AFCB:;
    /* $AFCB: 63 */ nes_cpu_instruction_boundary(0xAFCB, 8); { uint16_t a=nes_read16zp((0xC1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AFCD:;
    /* $AFCD: 00 */ nes_cpu_instruction_boundary(0xAFCD, 7); nes_brk_executed(0xAFCD); return;
label_AFCE:;
    /* $AFCE: 00 */ nes_cpu_instruction_boundary(0xAFCE, 7); nes_brk_executed(0xAFCE); return;
label_AFCF:;
    /* $AFCF: 08 */ nes_cpu_instruction_boundary(0xAFCF, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AFD0:;
    /* $AFD0: 0B */ nes_cpu_instruction_boundary(0xAFD0, 2); g_cpu.A &= 0xBE; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AFD2:;
    /* $AFD2: BC */ nes_cpu_instruction_boundary(0xAFD2, 4); g_cpu.Y = nes_read((0xBFBD + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_AFD5:;
    /* $AFD5: 01 */ nes_cpu_instruction_boundary(0xAFD5, 6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AFD7:;
    /* $AFD7: 03 */ nes_cpu_instruction_boundary(0xAFD7, 8); { uint16_t a=nes_read16zp((0xC0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AFD9:;
    /* $AFD9: 01 */ nes_cpu_instruction_boundary(0xAFD9, 6); g_cpu.A |= nes_read(nes_read16zp((0xC0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AFDB:;
    /* $AFDB: 03 */ nes_cpu_instruction_boundary(0xAFDB, 8); { uint16_t a=nes_read16zp((0xFF + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AFDD:;
    /* $AFDD: C1 */ nes_cpu_instruction_boundary(0xAFDD, 6); { uint8_t m=nes_read(nes_read16zp((0xFF + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_AFDF:;
    /* $AFDF: FF */ nes_cpu_instruction_boundary(0xAFDF, 7); { uint16_t a=(0x01C2 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AFE2:;
    /* $AFE2: FF */ nes_cpu_instruction_boundary(0xAFE2, 7); { uint16_t a=(0x30FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AFE5:;
    /* $AFE5: 00 */ nes_cpu_instruction_boundary(0xAFE5, 7); nes_brk_executed(0xAFE5); return;
label_AFE6:;
    /* $AFE6: BC */ nes_cpu_instruction_boundary(0xAFE6, 4); g_cpu.Y = nes_read((0xCDBD + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_AFE9:;
    /* $AFE9: CE */ nes_cpu_instruction_boundary(0xAFE9, 6); { uint16_t a=0xD0CF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AFEC:;
    /* $AFEC: D1 */ nes_cpu_instruction_boundary(0xAFEC, 5); { uint8_t m=nes_read((nes_read16zp(0xD2) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_AFEE:;
    /* $AFEE: D3 */ nes_cpu_instruction_boundary(0xAFEE, 8); { uint16_t a=(nes_read16zp(0xD4) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_AFF0:;
    /* $AFF0: 90 */ nes_cpu_instruction_boundary(0xAFF0, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xAF83); return; }
label_AFF2:;
    /* $AFF2: 92 */ nes_cpu_instruction_boundary(0xAFF2, 2); /* ILLEGAL $92 — skip 1 */
label_AFF3:;
    /* $AFF3: 93 */ nes_cpu_instruction_boundary(0xAFF3, 6); /* ILLEGAL $93 — skip 2 */
label_AFF5:;
    /* $AFF5: 85 */ nes_cpu_instruction_boundary(0xAFF5, 3); nes_write(0x72, g_cpu.A);
label_AFF7:;
    /* $AFF7: A9 */ nes_cpu_instruction_boundary(0xAFF7, 2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_AFF9:;
    /* $AFF9: 85 */ nes_cpu_instruction_boundary(0xAFF9, 3); nes_write(0x73, g_cpu.A);
label_AFFB:;
    /* $AFFB: 60 */ nes_cpu_instruction_boundary(0xAFFB, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AFFC:;
    /* $AFFC: C6 */ nes_cpu_instruction_boundary(0xAFFC, 5); { uint16_t a=0x72; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AFFE:;
    /* $AFFE: D0 */ nes_cpu_instruction_boundary(0xAFFE, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B017; }
label_B000:; /* SongBrinstarSQ1 */
    /* $B000: C2 */ nes_cpu_instruction_boundary(0xB000, 2); /* NOP */
label_B002:;
    /* $B002: 2E */ nes_cpu_instruction_boundary(0xB002, 6); { uint16_t a=0xFF30; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B005:;
    /* $B005: C3 */ nes_cpu_instruction_boundary(0xB005, 8); { uint16_t a=nes_read16zp((0xB3 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B007:;
    /* $B007: 2E */ nes_cpu_instruction_boundary(0xB007, 6); { uint16_t a=0x3034; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B00A:;
    /* $B00A: 3A */ nes_cpu_instruction_boundary(0xB00A, 2); /* NOP */
label_B00B:;
    /* $B00B: FF */ nes_cpu_instruction_boundary(0xB00B, 7); { uint16_t a=(0x2EB4 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B00E:;
    /* $B00E: B3 */ nes_cpu_instruction_boundary(0xB00E, 5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x30) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B010:;
    /* $B010: 34 */ nes_cpu_instruction_boundary(0xB010, 4); (void)nes_read((0xC3 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B012:;
    /* $B012: B6 */ nes_cpu_instruction_boundary(0xB012, 4); g_cpu.X = nes_read((0x38 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_B014:;
    /* $B014: B9 */ nes_cpu_instruction_boundary(0xB014, 4); g_cpu.A = nes_read((0x2630 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B017:;
    /* $B017: 30 */ nes_cpu_instruction_boundary(0xB017, 2); if (g_cpu.N) { maybe_trigger_vblank(2); call_by_address(0xAFD4); return; }
label_B019:;
    /* $B019: 02 */ nes_cpu_instruction_boundary(0xB019, 2); /* ILLEGAL $02 — skip 1 */
label_B01A:;
    /* $B01A: B3 */ nes_cpu_instruction_boundary(0xB01A, 5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x3A) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B01C:;
    /* $B01C: 34 */ nes_cpu_instruction_boundary(0xB01C, 4); (void)nes_read((0xFF + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B01E:;
    /* $B01E: B4 */ nes_cpu_instruction_boundary(0xB01E, 4); g_cpu.Y = nes_read((0x38 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_B020:;
    /* $B020: 38 */ nes_cpu_instruction_boundary(0xB020, 2); g_cpu.C = 1;
label_B021:;
    /* $B021: B2 */ nes_cpu_instruction_boundary(0xB021, 2); /* ILLEGAL $B2 — skip 1 */
label_B022:;
    /* $B022: 3A */ nes_cpu_instruction_boundary(0xB022, 2); /* NOP */
label_B023:;
    /* $B023: 30 */ nes_cpu_instruction_boundary(0xB023, 2); if (g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xB04F); return; }
label_B025:;
    /* $B025: B9 */ nes_cpu_instruction_boundary(0xB025, 4); g_cpu.A = nes_read((0x2C30 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B028:;
    /* $B028: 30 */ nes_cpu_instruction_boundary(0xB028, 2); if (g_cpu.N) {
    nes_cpu_instruction_boundary(0xAFE5, 2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AFE5;
    }
label_B02A:;
    /* $B02A: 02 */ nes_cpu_instruction_boundary(0xB02A, 2); /* ILLEGAL $02 — skip 1 */
label_B02B:;
    /* $B02B: B2 */ nes_cpu_instruction_boundary(0xB02B, 2); /* ILLEGAL $B2 — skip 1 */
label_B02C:;
    /* $B02C: 34 */ nes_cpu_instruction_boundary(0xB02C, 4); (void)nes_read((0x3A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B02E:;
    /* $B02E: B3 */ nes_cpu_instruction_boundary(0xB02E, 5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x30) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B030:;
    /* $B030: B2 */ nes_cpu_instruction_boundary(0xB030, 2); /* ILLEGAL $B2 — skip 1 */
label_B031:;
    /* $B031: 36 */ nes_cpu_instruction_boundary(0xB031, 6); { uint16_t a=(0x2A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B033:;
    /* $B033: 22 */ nes_cpu_instruction_boundary(0xB033, 2); /* ILLEGAL $22 — skip 1 */
label_B034:;
    /* $B034: B9 */ nes_cpu_instruction_boundary(0xB034, 4); g_cpu.A = nes_read((0x2C18 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B037:;
    /* $B037: 18 */ nes_cpu_instruction_boundary(0xB037, 2); g_cpu.C = 0;
label_B038:;
    /* $B038: BB */ nes_cpu_instruction_boundary(0xB038, 4); /* ILLEGAL $BB — skip 3 */
label_B03B:;
    /* $B03B: 1C */ nes_cpu_instruction_boundary(0xB03B, 4); (void)nes_read((0x2C22 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B03E:;
    /* $B03E: B9 */ nes_cpu_instruction_boundary(0xB03E, 4); g_cpu.A = nes_read((0x2218 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B041:;
    /* $B041: 2A */ nes_cpu_instruction_boundary(0xB041, 2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B042:;
    /* $B042: BB */ nes_cpu_instruction_boundary(0xB042, 4); /* ILLEGAL $BB — skip 3 */
label_B045:;
    /* $B045: 2E */ nes_cpu_instruction_boundary(0xB045, 6); { uint16_t a=0x262A; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B048:;
    /* $B048: 34 */ nes_cpu_instruction_boundary(0xB048, 4); (void)nes_read((0xB2 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B04A:;
    /* $B04A: 36 */ nes_cpu_instruction_boundary(0xB04A, 6); { uint16_t a=(0x3A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B04C:;
    /* $B04C: 28 */ nes_cpu_instruction_boundary(0xB04C, 4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_B04D:;
    /* $B04D: B9 */ nes_cpu_instruction_boundary(0xB04D, 4); g_cpu.A = nes_read((0x2226 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B050:;
    /* $B050: 1E */ nes_cpu_instruction_boundary(0xB050, 7); { uint16_t a=(0x02BB + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B053:;
    /* $B053: B2 */ nes_cpu_instruction_boundary(0xB053, 2); /* ILLEGAL $B2 — skip 1 */
label_B054:;
    /* $B054: 22 */ nes_cpu_instruction_boundary(0xB054, 2); /* ILLEGAL $22 — skip 1 */
label_B055:;
    /* $B055: 2C */ nes_cpu_instruction_boundary(0xB055, 4); { uint8_t m=nes_read(0xB926); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_B058:;
    /* $B058: 22 */ nes_cpu_instruction_boundary(0xB058, 2); /* ILLEGAL $22 — skip 1 */
label_B059:;
    /* $B059: 44 */ nes_cpu_instruction_boundary(0xB059, 3); (void)nes_read(0x34); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B05B:;
    /* $B05B: BB */ nes_cpu_instruction_boundary(0xB05B, 4); /* ILLEGAL $BB — skip 3 */
label_B05E:;
    /* $B05E: 34 */ nes_cpu_instruction_boundary(0xB05E, 4); (void)nes_read((0xB3 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B060:;
    /* $B060: 2E */ nes_cpu_instruction_boundary(0xB060, 6); { uint16_t a=0x0026; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B063:; /* SongBrinstarSQ2 */
    /* $B063: C2 */ nes_cpu_instruction_boundary(0xB063, 2); /* NOP */
label_B065:;
    /* $B065: 0E */ nes_cpu_instruction_boundary(0xB065, 6); { uint16_t a=0x0EB9; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B068:;
    /* $B068: 06 */ nes_cpu_instruction_boundary(0xB068, 5); { uint16_t a=0x0E; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B06A:;
    /* $B06A: BB */ nes_cpu_instruction_boundary(0xB06A, 4); /* ILLEGAL $BB — skip 3 */
label_B06D:;
    /* $B06D: 0E */ nes_cpu_instruction_boundary(0xB06D, 6); { uint16_t a=0x0EB9; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B070:;
    /* $B070: 06 */ nes_cpu_instruction_boundary(0xB070, 5); { uint16_t a=0x0E; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B072:;
    /* $B072: BB */ nes_cpu_instruction_boundary(0xB072, 4); /* ILLEGAL $BB — skip 3 */
label_B075:;
    /* $B075: 14 */ nes_cpu_instruction_boundary(0xB075, 4); (void)nes_read((0xB9 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B077:;
    /* $B077: 14 */ nes_cpu_instruction_boundary(0xB077, 4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B079:;
    /* $B079: 14 */ nes_cpu_instruction_boundary(0xB079, 4); (void)nes_read((0xBB + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B07B:;
    /* $B07B: 02 */ nes_cpu_instruction_boundary(0xB07B, 2); /* ILLEGAL $02 — skip 1 */
label_B07C:;
    /* $B07C: B2 */ nes_cpu_instruction_boundary(0xB07C, 2); /* ILLEGAL $B2 — skip 1 */
label_B07D:;
    /* $B07D: 14 */ nes_cpu_instruction_boundary(0xB07D, 4); (void)nes_read((0xB9 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B07F:;
    /* $B07F: 14 */ nes_cpu_instruction_boundary(0xB07F, 4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B081:;
    /* $B081: 14 */ nes_cpu_instruction_boundary(0xB081, 4); (void)nes_read((0xBB + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B083:;
    /* $B083: 02 */ nes_cpu_instruction_boundary(0xB083, 2); /* ILLEGAL $02 — skip 1 */
label_B084:;
    /* $B084: FF */ nes_cpu_instruction_boundary(0xB084, 7); { uint16_t a=(0xB4C3 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B087:;
    /* $B087: 3E */ nes_cpu_instruction_boundary(0xB087, 7); { uint16_t a=(0x44B6 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B08A:;
    /* $B08A: B0 */ nes_cpu_instruction_boundary(0xB08A, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B0CE; }
label_B08C:;
    /* $B08C: 44 */ nes_cpu_instruction_boundary(0xB08C, 3); (void)nes_read(0x42); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B08E:;
    /* $B08E: 3A */ nes_cpu_instruction_boundary(0xB08E, 2); /* NOP */
label_B08F:;
    /* $B08F: FF */ nes_cpu_instruction_boundary(0xB08F, 7); { uint16_t a=(0x3EB4 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B092:;
    /* $B092: 3E */ nes_cpu_instruction_boundary(0xB092, 7); { uint16_t a=(0xB6C3 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B095:;
    /* $B095: 48 */ nes_cpu_instruction_boundary(0xB095, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B096:;
    /* $B096: B2 */ nes_cpu_instruction_boundary(0xB096, 2); /* ILLEGAL $B2 — skip 1 */
label_B097:;
    /* $B097: 3E */ nes_cpu_instruction_boundary(0xB097, 7); { uint16_t a=(0x44B6 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B09A:;
    /* $B09A: B0 */ nes_cpu_instruction_boundary(0xB09A, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B0DE; }
label_B09C:;
    /* $B09C: 44 */ nes_cpu_instruction_boundary(0xB09C, 3); (void)nes_read(0x42); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B09E:;
    /* $B09E: 3A */ nes_cpu_instruction_boundary(0xB09E, 2); /* NOP */
label_B09F:;
    /* $B09F: FF */ nes_cpu_instruction_boundary(0xB09F, 7); { uint16_t a=(0x3EB4 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B0A2:;
    /* $B0A2: 26 */ nes_cpu_instruction_boundary(0xB0A2, 5); { uint16_t a=0xB6; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B0A4:;
    /* $B0A4: 42 */ nes_cpu_instruction_boundary(0xB0A4, 2); /* ILLEGAL $42 — skip 1 */
label_B0A5:;
    /* $B0A5: B9 */ nes_cpu_instruction_boundary(0xB0A5, 4); g_cpu.A = nes_read((0x3E42 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B0A8:;
    /* $B0A8: 42 */ nes_cpu_instruction_boundary(0xB0A8, 2); /* ILLEGAL $42 — skip 1 */
label_B0A9:;
    /* $B0A9: BB */ nes_cpu_instruction_boundary(0xB0A9, 4); /* ILLEGAL $BB — skip 3 */
label_B0AC:;
    /* $B0AC: 44 */ nes_cpu_instruction_boundary(0xB0AC, 3); (void)nes_read(0xB2); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B0AE:;
    /* $B0AE: 3A */ nes_cpu_instruction_boundary(0xB0AE, 2); /* NOP */
label_B0AF:;
    /* $B0AF: B9 */ nes_cpu_instruction_boundary(0xB0AF, 4); g_cpu.A = nes_read((0x3A30 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B0B2:;
    /* $B0B2: 3E */ nes_cpu_instruction_boundary(0xB0B2, 7); { uint16_t a=(0x02BB + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B0B5:;
    /* $B0B5: B6 */ nes_cpu_instruction_boundary(0xB0B5, 4); g_cpu.X = nes_read((0x42 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_B0B7:;
    /* $B0B7: B9 */ nes_cpu_instruction_boundary(0xB0B7, 4); g_cpu.A = nes_read((0x3E42 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B0BA:;
    /* $B0BA: 42 */ nes_cpu_instruction_boundary(0xB0BA, 2); /* ILLEGAL $42 — skip 1 */
label_B0BB:;
    /* $B0BB: BB */ nes_cpu_instruction_boundary(0xB0BB, 4); /* ILLEGAL $BB — skip 3 */
label_B0BE:;
    /* $B0BE: 44 */ nes_cpu_instruction_boundary(0xB0BE, 3); (void)nes_read(0xB2); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B0C0:;
    /* $B0C0: 3A */ nes_cpu_instruction_boundary(0xB0C0, 2); /* NOP */
label_B0C1:;
    /* $B0C1: B9 */ nes_cpu_instruction_boundary(0xB0C1, 4); g_cpu.A = nes_read((0x443A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B0C4:;
    /* $B0C4: 48 */ nes_cpu_instruction_boundary(0xB0C4, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B0C5:;
    /* $B0C5: BB */ nes_cpu_instruction_boundary(0xB0C5, 4); /* ILLEGAL $BB — skip 3 */
label_B0C8:;
    /* $B0C8: 4C */ nes_cpu_instruction_boundary(0xB0C8, 3); nes_cpu_instruction_boundary(0x48B3, 2); call_by_address_tail(0x48B3, -1); return;
label_B0CE:;
    /* $B0CE: B9 */ nes_cpu_instruction_boundary(0xB0CE, 4); g_cpu.A = nes_read((0x4C4E + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B0D1:;
    /* $B0D1: 48 */ nes_cpu_instruction_boundary(0xB0D1, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B0D2:;
    /* $B0D2: BB */ nes_cpu_instruction_boundary(0xB0D2, 4); /* ILLEGAL $BB — skip 3 */
label_B0D5:;
    /* $B0D5: 4C */ nes_cpu_instruction_boundary(0xB0D5, 3); nes_cpu_instruction_boundary(0x44B2, 2); call_by_address_tail(0x44B2, -1); return;
label_B0DE:;
    /* $B0DE: B4 */ nes_cpu_instruction_boundary(0xB0DE, 4); g_cpu.Y = nes_read((0x54 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_B0E0:;
    /* $B0E0: 54 */ nes_cpu_instruction_boundary(0xB0E0, 4); (void)nes_read((0xC4 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B0E2:;
    /* $B0E2: B4 */ nes_cpu_instruction_boundary(0xB0E2, 4); g_cpu.Y = nes_read((0x02 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_B0E4:;
    /* $B0E4: FF */ nes_cpu_instruction_boundary(0xB0E4, 7); { uint16_t a=(0xB2C3 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B0E7:;
    /* $B0E7: 26 */ nes_cpu_instruction_boundary(0xB0E7, 5); { uint16_t a=0xB9; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B0E9:;
    /* $B0E9: 26 */ nes_cpu_instruction_boundary(0xB0E9, 5); { uint16_t a=0x3E; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B0EB:;
    /* $B0EB: 34 */ nes_cpu_instruction_boundary(0xB0EB, 4); (void)nes_read((0xBB + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B0ED:;
    /* $B0ED: 02 */ nes_cpu_instruction_boundary(0xB0ED, 2); /* ILLEGAL $02 — skip 1 */
label_B0EE:;
    /* $B0EE: B2 */ nes_cpu_instruction_boundary(0xB0EE, 2); /* ILLEGAL $B2 — skip 1 */
label_B0EF:;
    /* $B0EF: 26 */ nes_cpu_instruction_boundary(0xB0EF, 5); { uint16_t a=0xB9; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B0F1:;
    /* $B0F1: 26 */ nes_cpu_instruction_boundary(0xB0F1, 5); { uint16_t a=0x34; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B0F3:;
    /* $B0F3: 26 */ nes_cpu_instruction_boundary(0xB0F3, 5); { uint16_t a=0xBB; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B0F5:;
    /* $B0F5: 02 */ nes_cpu_instruction_boundary(0xB0F5, 2); /* ILLEGAL $02 — skip 1 */
label_B0F6:;
    /* $B0F6: B2 */ nes_cpu_instruction_boundary(0xB0F6, 2); /* ILLEGAL $B2 — skip 1 */
label_B0F7:;
    /* $B0F7: 2C */ nes_cpu_instruction_boundary(0xB0F7, 4); { uint8_t m=nes_read(0x2CB9); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_B0FA:;
    /* $B0FA: 3A */ nes_cpu_instruction_boundary(0xB0FA, 2); /* NOP */
label_B0FB:;
    /* $B0FB: 2C */ nes_cpu_instruction_boundary(0xB0FB, 4); { uint8_t m=nes_read(0x02BB); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_B0FE:;
    /* $B0FE: B2 */ nes_cpu_instruction_boundary(0xB0FE, 2); /* ILLEGAL $B2 — skip 1 */
label_B0FF:;
    /* $B0FF: 2C */ nes_cpu_instruction_boundary(0xB0FF, 4); { uint8_t m=nes_read(0x2CB9); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_B102:;
    /* $B102: 3A */ nes_cpu_instruction_boundary(0xB102, 2); /* NOP */
label_B103:;
    /* $B103: 2C */ nes_cpu_instruction_boundary(0xB103, 4); { uint8_t m=nes_read(0x02BB); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_B106:;
    /* $B106: FF */ nes_cpu_instruction_boundary(0xB106, 7); { uint16_t a=(0xB2C4 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B109:;
    /* $B109: 26 */ nes_cpu_instruction_boundary(0xB109, 5); { uint16_t a=0xB9; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B10B:;
    /* $B10B: 34 */ nes_cpu_instruction_boundary(0xB10B, 4); (void)nes_read((0x26 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B10D:;
    /* $B10D: 26 */ nes_cpu_instruction_boundary(0xB10D, 5); { uint16_t a=0xBB; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B10F:;
    /* $B10F: 02 */ nes_cpu_instruction_boundary(0xB10F, 2); /* ILLEGAL $02 — skip 1 */
label_B110:;
    /* $B110: FF */ nes_cpu_instruction_boundary(0xB110, 7); { uint16_t a=(0xB9D0 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B113:;
    /* $B113: 18 */ nes_cpu_instruction_boundary(0xB113, 2); g_cpu.C = 0;
label_B114:;
    /* $B114: 26 */ nes_cpu_instruction_boundary(0xB114, 5); { uint16_t a=0x18; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B116:;
    /* $B116: BB */ nes_cpu_instruction_boundary(0xB116, 4); /* ILLEGAL $BB — skip 3 */
label_B119:;
    /* $B119: 18 */ nes_cpu_instruction_boundary(0xB119, 2); g_cpu.C = 0;
label_B11A:;
    /* $B11A: FF */ nes_cpu_instruction_boundary(0xB11A, 7); { uint16_t a=(0xB2C2 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B11D:;
    /* $B11D: 1E */ nes_cpu_instruction_boundary(0xB11D, 7); { uint16_t a=(0x1EB9 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B120:;
    /* $B120: 18 */ nes_cpu_instruction_boundary(0xB120, 2); g_cpu.C = 0;
label_B121:;
    /* $B121: 1E */ nes_cpu_instruction_boundary(0xB121, 7); { uint16_t a=(0x02BB + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B124:;
    /* $B124: B2 */ nes_cpu_instruction_boundary(0xB124, 2); /* ILLEGAL $B2 — skip 1 */
label_B125:;
    /* $B125: 1E */ nes_cpu_instruction_boundary(0xB125, 7); { uint16_t a=(0x1EB9 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B128:;
    /* $B128: 18 */ nes_cpu_instruction_boundary(0xB128, 2); g_cpu.C = 0;
label_B129:;
    /* $B129: 1E */ nes_cpu_instruction_boundary(0xB129, 7); { uint16_t a=(0x02BB + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B12C:;
    /* $B12C: B2 */ nes_cpu_instruction_boundary(0xB12C, 2); /* ILLEGAL $B2 — skip 1 */
label_B12D:;
    /* $B12D: 1C */ nes_cpu_instruction_boundary(0xB12D, 4); (void)nes_read((0x1CB9 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B130:;
    /* $B130: 14 */ nes_cpu_instruction_boundary(0xB130, 4); (void)nes_read((0x1C + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B132:;
    /* $B132: BB */ nes_cpu_instruction_boundary(0xB132, 4); /* ILLEGAL $BB — skip 3 */
label_B135:;
    /* $B135: 1C */ nes_cpu_instruction_boundary(0xB135, 4); (void)nes_read((0x1CB9 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B138:;
    /* $B138: 14 */ nes_cpu_instruction_boundary(0xB138, 4); (void)nes_read((0x1C + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B13A:;
    /* $B13A: BB */ nes_cpu_instruction_boundary(0xB13A, 4); /* ILLEGAL $BB — skip 3 */
label_B13D:;
    /* $B13D: B2 */ nes_cpu_instruction_boundary(0xB13D, 2); /* ILLEGAL $B2 — skip 1 */
label_B13E:;
    /* $B13E: 26 */ nes_cpu_instruction_boundary(0xB13E, 5); { uint16_t a=0x12; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B140:;
    /* $B140: 16 */ nes_cpu_instruction_boundary(0xB140, 6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B142:;
    /* $B142: 1C */ nes_cpu_instruction_boundary(0xB142, 4); (void)nes_read((0x2420 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B145:;
    /* $B145: 26 */ nes_cpu_instruction_boundary(0xB145, 5); { uint16_t a=0xB2; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B147:;
    /* $B147: 28 */ nes_cpu_instruction_boundary(0xB147, 4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_B148:;
    /* $B148: B9 */ nes_cpu_instruction_boundary(0xB148, 4); g_cpu.A = nes_read((0x1E28 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B14B:;
    /* $B14B: 18 */ nes_cpu_instruction_boundary(0xB14B, 2); g_cpu.C = 0;
label_B14C:;
    /* $B14C: BB */ nes_cpu_instruction_boundary(0xB14C, 4); /* ILLEGAL $BB — skip 3 */
label_B14F:;
    /* $B14F: 10 */ nes_cpu_instruction_boundary(0xB14F, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xB10A); return; }
label_B151:;
    /* $B151: 30 */ nes_cpu_instruction_boundary(0xB151, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_B17F; }
label_B153:;
    /* $B153: 28 */ nes_cpu_instruction_boundary(0xB153, 4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_B154:;
    /* $B154: BB */ nes_cpu_instruction_boundary(0xB154, 4); /* ILLEGAL $BB — skip 3 */
label_B157:;
    /* $B157: 1E */ nes_cpu_instruction_boundary(0xB157, 7); { uint16_t a=(0x181C + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B15A:;
    /* $B15A: 14 */ nes_cpu_instruction_boundary(0xB15A, 4); (void)nes_read((0x2A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B15C:;
    /* $B15C: 2A */ nes_cpu_instruction_boundary(0xB15C, 2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B15D:;
    /* $B15D: 2A */ nes_cpu_instruction_boundary(0xB15D, 2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B15E:;
    /* $B15E: 2A */ nes_cpu_instruction_boundary(0xB15E, 2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B15F:;
    /* $B15F: C3 */ nes_cpu_instruction_boundary(0xB15F, 8); { uint16_t a=nes_read16zp((0xB9 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B161:;
    /* $B161: 2A */ nes_cpu_instruction_boundary(0xB161, 2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B162:;
    /* $B162: FF */ nes_cpu_instruction_boundary(0xB162, 7); { uint16_t a=(0x02BB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B165:;
    /* $B165: C3 */ nes_cpu_instruction_boundary(0xB165, 8); { uint16_t a=nes_read16zp((0xB9 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B167:;
    /* $B167: 2A */ nes_cpu_instruction_boundary(0xB167, 2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B168:;
    /* $B168: FF */ nes_cpu_instruction_boundary(0xB168, 7); { uint16_t a=(0x02BB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B16B:;
    /* $B16B: C3 */ nes_cpu_instruction_boundary(0xB16B, 8); { uint16_t a=nes_read16zp((0xB9 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B16D:;
    /* $B16D: 2A */ nes_cpu_instruction_boundary(0xB16D, 2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B16E:;
    /* $B16E: FF */ nes_cpu_instruction_boundary(0xB16E, 7); { uint16_t a=(0x02BB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B171:;
    /* $B171: C3 */ nes_cpu_instruction_boundary(0xB171, 8); { uint16_t a=nes_read16zp((0xB9 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B173:;
    /* $B173: 2A */ nes_cpu_instruction_boundary(0xB173, 2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B174:;
    /* $B174: FF */ nes_cpu_instruction_boundary(0xB174, 7); { uint16_t a=(0x02BB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B177:; /* SongBrinstarNoise */
    /* $B177: E8 */ nes_cpu_instruction_boundary(0xB177, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B178:;
    /* $B178: B2 */ nes_cpu_instruction_boundary(0xB178, 2); /* ILLEGAL $B2 — skip 1 */
label_B179:;
    /* $B179: 04 */ nes_cpu_instruction_boundary(0xB179, 3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B17B:;
    /* $B17B: 04 */ nes_cpu_instruction_boundary(0xB17B, 3); (void)nes_read(0xB9); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B17D:;
    /* $B17D: 04 */ nes_cpu_instruction_boundary(0xB17D, 3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B17F:;
    /* $B17F: 04 */ nes_cpu_instruction_boundary(0xB17F, 3); (void)nes_read(0xBB); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B181:;
    /* $B181: 01 */ nes_cpu_instruction_boundary(0xB181, 6); g_cpu.A |= nes_read(nes_read16zp((0xFF + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B183:;
    /* $B183: 85 */ nes_cpu_instruction_boundary(0xB183, 3); nes_write(0x03, g_cpu.A);
label_B185:;
    /* $B185: A9 */ nes_cpu_instruction_boundary(0xB185, 2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_B187:;
    /* $B187: 85 */ nes_cpu_instruction_boundary(0xB187, 3); nes_write(0x11, g_cpu.A);
label_B189:;
    /* $B189: B1 */ nes_cpu_instruction_boundary(0xB189, 5); g_cpu.A = nes_read((nes_read16zp(0x75) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B18B:;
    /* $B18B: 10 */ nes_cpu_instruction_boundary(0xB18B, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_B1A1; }
label_B18D:;
    /* $B18D: C9 */ nes_cpu_instruction_boundary(0xB18D, 2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_B18F:;
    /* $B18F: D0 */ nes_cpu_instruction_boundary(0xB18F, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B196; }
label_B191:;
    /* $B191: 85 */ nes_cpu_instruction_boundary(0xB191, 3); nes_write(0x74, g_cpu.A);
label_B193:;
    /* $B193: 4C */ nes_cpu_instruction_boundary(0xB193, 3); nes_cpu_instruction_boundary(0xF049, 2); func_F049(); return;
label_B196:;
    /* $B196: C8 */ nes_cpu_instruction_boundary(0xB196, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B197:;
    /* $B197: E6 */ nes_cpu_instruction_boundary(0xB197, 5); { uint16_t a=0x59; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B199:;
    /* $B199: 29 */ nes_cpu_instruction_boundary(0xB199, 2); g_cpu.A &= 0x7F; FLAG_NZ(g_cpu.A);
label_B19B:;
    /* $B19B: 85 */ nes_cpu_instruction_boundary(0xB19B, 3); nes_write(0x0F, g_cpu.A);
label_B19D:;
    /* $B19D: B1 */ nes_cpu_instruction_boundary(0xB19D, 5); g_cpu.A = nes_read((nes_read16zp(0x75) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B19F:;
    /* $B19F: D0 */ nes_cpu_instruction_boundary(0xB19F, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B1A5; }
label_B1A1:;
    /* $B1A1: 85 */ nes_cpu_instruction_boundary(0xB1A1, 3); nes_write(0x0F, g_cpu.A);
label_B1A3:;
    /* $B1A3: A9 */ nes_cpu_instruction_boundary(0xB1A3, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_B1A5:;
    /* $B1A5: 85 */ nes_cpu_instruction_boundary(0xB1A5, 3); nes_write(0x10, g_cpu.A);
label_B1A7:;
    /* $B1A7: C8 */ nes_cpu_instruction_boundary(0xB1A7, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B1A8:;
    /* $B1A8: E6 */ nes_cpu_instruction_boundary(0xB1A8, 5); { uint16_t a=0x59; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B1AA:;
    /* $B1AA: A9 */ nes_cpu_instruction_boundary(0xB1AA, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B1AC:;
    /* $B1AC: 85 */ nes_cpu_instruction_boundary(0xB1AC, 3); nes_write(0x08, g_cpu.A);
label_B1AE:;
    /* $B1AE: A5 */ nes_cpu_instruction_boundary(0xB1AE, 3); g_cpu.A = nes_read(0x0F); FLAG_NZ(g_cpu.A);
label_B1B0:;
    /* $B1B0: 48 */ nes_cpu_instruction_boundary(0xB1B0, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B1B1:;
    /* $B1B1: 0A */ nes_cpu_instruction_boundary(0xB1B1, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_B1B2:;
    /* $B1B2: AA */ nes_cpu_instruction_boundary(0xB1B2, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_B1B3:;
    /* $B1B3: A5 */ nes_cpu_instruction_boundary(0xB1B3, 3); g_cpu.A = nes_read(0x38); FLAG_NZ(g_cpu.A);
label_B1B5:;
    /* $B1B5: 4A */ nes_cpu_instruction_boundary(0xB1B5, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B1B6:;
    /* $B1B6: A5 */ nes_cpu_instruction_boundary(0xB1B6, 3); g_cpu.A = nes_read(0x6D); FLAG_NZ(g_cpu.A);
label_B1B8:;
    /* $B1B8: D0 */ nes_cpu_instruction_boundary(0xB1B8, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B1D0; }
label_B1BA:;
    /* $B1BA: 90 */ nes_cpu_instruction_boundary(0xB1BA, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_B1C6; }
label_B1BC:;
    /* $B1BC: BD */ nes_cpu_instruction_boundary(0xB1BC, 4); g_cpu.A = nes_read((0xF377 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1BF:;
    /* $B1BF: 48 */ nes_cpu_instruction_boundary(0xB1BF, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B1C0:;
    /* $B1C0: BD */ nes_cpu_instruction_boundary(0xB1C0, 4); g_cpu.A = nes_read((0xF376 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1C3:;
    /* $B1C3: 4C */ nes_cpu_instruction_boundary(0xB1C3, 3); nes_cpu_instruction_boundary(0xF1FB, 2); func_F1FB(); return;
label_B1C6:;
    /* $B1C6: BD */ nes_cpu_instruction_boundary(0xB1C6, 4); g_cpu.A = nes_read((0xF2F3 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1C9:;
    /* $B1C9: 48 */ nes_cpu_instruction_boundary(0xB1C9, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B1CA:;
    /* $B1CA: BD */ nes_cpu_instruction_boundary(0xB1CA, 4); g_cpu.A = nes_read((0xF2F2 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1CD:;
    /* $B1CD: 4C */ nes_cpu_instruction_boundary(0xB1CD, 3); nes_cpu_instruction_boundary(0xF1FB, 2); func_F1FB(); return;
label_B1D0:;
    /* $B1D0: 30 */ nes_cpu_instruction_boundary(0xB1D0, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_B1E8; }
label_B1D2:;
    /* $B1D2: 90 */ nes_cpu_instruction_boundary(0xB1D2, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_B1DE; }
label_B1D4:;
    /* $B1D4: BD */ nes_cpu_instruction_boundary(0xB1D4, 4); g_cpu.A = nes_read((0x96B3 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1D7:;
    /* $B1D7: 48 */ nes_cpu_instruction_boundary(0xB1D7, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B1D8:;
    /* $B1D8: BD */ nes_cpu_instruction_boundary(0xB1D8, 4); g_cpu.A = nes_read((0x96B2 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1DB:;
    /* $B1DB: 4C */ nes_cpu_instruction_boundary(0xB1DB, 3); nes_cpu_instruction_boundary(0xF1FB, 2); func_F1FB(); return;
label_B1DE:;
    /* $B1DE: BD */ nes_cpu_instruction_boundary(0xB1DE, 4); g_cpu.A = nes_read((0x95CD + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1E1:;
    /* $B1E1: 48 */ nes_cpu_instruction_boundary(0xB1E1, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B1E2:;
    /* $B1E2: BD */ nes_cpu_instruction_boundary(0xB1E2, 4); g_cpu.A = nes_read((0x95CC + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1E5:;
    /* $B1E5: 4C */ nes_cpu_instruction_boundary(0xB1E5, 3); nes_cpu_instruction_boundary(0xF1FB, 2); func_F1FB(); return;
label_B1E8:;
    /* $B1E8: 90 */ nes_cpu_instruction_boundary(0xB1E8, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_B1F4; }
label_B1EA:;
    /* $B1EA: BD */ nes_cpu_instruction_boundary(0xB1EA, 4); g_cpu.A = nes_read((0xF4C9 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1ED:;
    /* $B1ED: 48 */ nes_cpu_instruction_boundary(0xB1ED, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B1EE:;
    /* $B1EE: BD */ nes_cpu_instruction_boundary(0xB1EE, 4); g_cpu.A = nes_read((0xF4C8 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1F1:;
    /* $B1F1: 4C */ nes_cpu_instruction_boundary(0xB1F1, 3); nes_cpu_instruction_boundary(0xF1FB, 2); func_F1FB(); return;
label_B1F4:;
    /* $B1F4: BD */ nes_cpu_instruction_boundary(0xB1F4, 4); g_cpu.A = nes_read((0xF44D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1F7:;
    /* $B1F7: 48 */ nes_cpu_instruction_boundary(0xB1F7, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B1F8:;
    /* $B1F8: BD */ nes_cpu_instruction_boundary(0xB1F8, 4); g_cpu.A = nes_read((0xF44C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1FB:;
    /* $B1FB: A6 */ nes_cpu_instruction_boundary(0xB1FB, 3); g_cpu.X = nes_read(0x02); FLAG_NZ(g_cpu.X);
label_B1FD:;
    /* $B1FD: 95 */ nes_cpu_instruction_boundary(0xB1FD, 4); nes_write((0xE0 + g_cpu.X) & 0xFF, g_cpu.A);
label_B1FF:;
    /* $B1FF: E8 */ nes_cpu_instruction_boundary(0xB1FF, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B200:;
    /* $B200: 68 */ nes_cpu_instruction_boundary(0xB200, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_B201:;
    /* $B201: 95 */ nes_cpu_instruction_boundary(0xB201, 4); nes_write((0xE0 + g_cpu.X) & 0xFF, g_cpu.A);
label_B203:;
    /* $B203: E8 */ nes_cpu_instruction_boundary(0xB203, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B204:;
    /* $B204: 86 */ nes_cpu_instruction_boundary(0xB204, 3); nes_write(0x02, g_cpu.X);
label_B206:;
    /* $B206: 68 */ nes_cpu_instruction_boundary(0xB206, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_B207:;
    /* $B207: 85 */ nes_cpu_instruction_boundary(0xB207, 3); nes_write(0x05, g_cpu.A);
label_B209:;
    /* $B209: 48 */ nes_cpu_instruction_boundary(0xB209, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B20A:;
    /* $B20A: 4A */ nes_cpu_instruction_boundary(0xB20A, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B20B:;
    /* $B20B: 4A */ nes_cpu_instruction_boundary(0xB20B, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B20C:;
    /* $B20C: AA */ nes_cpu_instruction_boundary(0xB20C, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_B20D:;
    /* $B20D: A5 */ nes_cpu_instruction_boundary(0xB20D, 3); g_cpu.A = nes_read(0x6D); FLAG_NZ(g_cpu.A);
label_B20F:;
    /* $B20F: D0 */ nes_cpu_instruction_boundary(0xB20F, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B217; }
label_B211:;
    /* $B211: BD */ nes_cpu_instruction_boundary(0xB211, 4); g_cpu.A = nes_read((0xF2E1 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B214:;
    /* $B214: 4C */ nes_cpu_instruction_boundary(0xB214, 3); nes_cpu_instruction_boundary(0xF222, 2); func_F222(); return;
label_B217:;
    /* $B217: 30 */ nes_cpu_instruction_boundary(0xB217, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_B21F; }
label_B219:;
    /* $B219: BD */ nes_cpu_instruction_boundary(0xB219, 4); g_cpu.A = nes_read((0x95AF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B21C:;
    /* $B21C: 4C */ nes_cpu_instruction_boundary(0xB21C, 3); nes_cpu_instruction_boundary(0xF222, 2); func_F222(); return;
label_B21F:;
    /* $B21F: BD */ nes_cpu_instruction_boundary(0xB21F, 4); g_cpu.A = nes_read((0xF43C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B222:;
    /* $B222: 85 */ nes_cpu_instruction_boundary(0xB222, 3); nes_write(0x04, g_cpu.A);
label_B224:;
    /* $B224: 68 */ nes_cpu_instruction_boundary(0xB224, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_B225:;
    /* $B225: 29 */ nes_cpu_instruction_boundary(0xB225, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_B227:;
    /* $B227: AA */ nes_cpu_instruction_boundary(0xB227, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_B228:;
    /* $B228: E8 */ nes_cpu_instruction_boundary(0xB228, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B229:;
    /* $B229: A5 */ nes_cpu_instruction_boundary(0xB229, 3); g_cpu.A = nes_read(0x04); FLAG_NZ(g_cpu.A);
label_B22B:;
    /* $B22B: CA */ nes_cpu_instruction_boundary(0xB22B, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_B22C:;
    /* $B22C: F0 */ nes_cpu_instruction_boundary(0xB22C, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B233; }
label_B22E:;
    /* $B22E: 4A */ nes_cpu_instruction_boundary(0xB22E, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B22F:;
    /* $B22F: 4A */ nes_cpu_instruction_boundary(0xB22F, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B230:; /* SFXData */
    /* $B230: 00 */ nes_cpu_instruction_boundary(0xB230, 7); nes_brk_executed(0xB230); return;
label_B231:; /* SFXData_DrumBeat00 */
    /* $B231: 10 */ nes_cpu_instruction_boundary(0xB231, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_B234; }
label_B233:;
    /* $B233: 18 */ nes_cpu_instruction_boundary(0xB233, 2); g_cpu.C = 0;
label_B234:; /* SFXData_DrumBeat01 */
    /* $B234: 00 */ nes_cpu_instruction_boundary(0xB234, 7); nes_brk_executed(0xB234); return;
label_B235:;
    /* $B235: 01 */ nes_cpu_instruction_boundary(0xB235, 6); g_cpu.A |= nes_read(nes_read16zp((0x38 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B237:; /* SFXData_DrumBeat02 */
    /* $B237: 01 */ nes_cpu_instruction_boundary(0xB237, 6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B239:;
    /* $B239: 40 */ nes_cpu_instruction_boundary(0xB239, 6); /* RTI */ g_rti_source = 0xB239; g_rti_bank = 1; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B23A:; /* SFXData_DrumBeat03 */
    /* $B23A: 00 */ nes_cpu_instruction_boundary(0xB23A, 7); nes_brk_executed(0xB23A); return;
label_B23B:;
    /* $B23B: 09 */ nes_cpu_instruction_boundary(0xB23B, 2); g_cpu.A |= 0x58; FLAG_NZ(g_cpu.A);
label_B23D:; /* SFXData_GamePaused */
    /* $B23D: 80 */ nes_cpu_instruction_boundary(0xB23D, 2); /* NOP */
label_B23F:;
    /* $B23F: 80 */ nes_cpu_instruction_boundary(0xB23F, 2); /* NOP */
label_B241:; /* SFXData_ScrewAttack */
    /* $B241: 35 */ nes_cpu_instruction_boundary(0xB241, 4); g_cpu.A &= nes_read((0x7F + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B243:;
    /* $B243: 00 */ nes_cpu_instruction_boundary(0xB243, 7); nes_brk_executed(0xB243); return;
label_B244:;
    /* $B244: B0 */ nes_cpu_instruction_boundary(0xB244, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B25F; }
label_B246:;
    /* $B246: 7F */ nes_cpu_instruction_boundary(0xB246, 7); { uint16_t a=(0xA00E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B249:; /* SFXData_BombExplode */
    /* $B249: 0D */ nes_cpu_instruction_boundary(0xB249, 4); g_cpu.A |= nes_read(0x0F7F); FLAG_NZ(g_cpu.A);
label_B24C:;
    /* $B24C: 08 */ nes_cpu_instruction_boundary(0xB24C, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_B24D:; /* SFXData_SamusWalk */
    /* $B24D: 16 */ nes_cpu_instruction_boundary(0xB24D, 6); { uint16_t a=(0x7F + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B24F:;
    /* $B24F: 0B */ nes_cpu_instruction_boundary(0xB24F, 2); g_cpu.A &= 0x18; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_B251:; /* SFXData_SpitFlame */
    /* $B251: 13 */ nes_cpu_instruction_boundary(0xB251, 8); { uint16_t a=(nes_read16zp(0x7F) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B253:;
    /* $B253: 0E */ nes_cpu_instruction_boundary(0xB253, 6); { uint16_t a=0xC1F8; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B256:;
    /* $B256: 89 */ nes_cpu_instruction_boundary(0xB256, 2); /* NOP */
label_B258:;
    /* $B258: 0F */ nes_cpu_instruction_boundary(0xB258, 6); { uint16_t a=0xBA34; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B25B:;
    /* $B25B: E0 */ nes_cpu_instruction_boundary(0xB25B, 2); { int r=g_cpu.X-0x05; g_cpu.C=(g_cpu.X>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_B25D:; /* SFXData_BossHitSQ1 */
    /* $B25D: 34 */ nes_cpu_instruction_boundary(0xB25D, 4); (void)nes_read((0xBB + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B25F:;
    /* $B25F: CE */ nes_cpu_instruction_boundary(0xB25F, 6); { uint16_t a=0xB605; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B262:;
    /* $B262: 7F */ nes_cpu_instruction_boundary(0xB262, 7); { uint16_t a=(0xC200 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B265:; /* SFXData_IncorrectPasswordSQ2 */
    /* $B265: B6 */ nes_cpu_instruction_boundary(0xB265, 4); g_cpu.X = nes_read((0x7F + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_B267:;
    /* $B267: 04 */ nes_cpu_instruction_boundary(0xB267, 3); (void)nes_read(0xC2); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B269:; /* SFXData_TimeBombTick */
    /* $B269: 17 */ nes_cpu_instruction_boundary(0xB269, 6); { uint16_t a=(0x7F + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B26B:;
    /* $B26B: 66 */ nes_cpu_instruction_boundary(0xB26B, 5); { uint16_t a=0x89; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B26D:; /* SFXData_EnergyPickup */
    /* $B26D: 89 */ nes_cpu_instruction_boundary(0xB26D, 2); /* NOP */
label_B26F:;
    /* $B26F: 67 */ nes_cpu_instruction_boundary(0xB26F, 5); { uint16_t a=0x18; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B271:; /* SFXData_MissilePickup */
    /* $B271: 8B */ nes_cpu_instruction_boundary(0xB271, 2); /* ILLEGAL $8B — skip 2 */
label_B273:;
    /* $B273: FD */ nes_cpu_instruction_boundary(0xB273, 4); { uint8_t m=nes_read((0x0228 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B276:;
    /* $B276: 7F */ nes_cpu_instruction_boundary(0xB276, 7); { uint16_t a=(0xF8A8 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B279:; /* SFXData_LongRangeShot */
    /* $B279: D7 */ nes_cpu_instruction_boundary(0xB279, 6); { uint16_t a=(0x83 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B27B:;
    /* $B27B: 58 */ nes_cpu_instruction_boundary(0xB27B, 2); g_cpu.I = 0;
label_B27C:;
    /* $B27C: F8 */ nes_cpu_instruction_boundary(0xB27C, 2); g_cpu.D = 1;
label_B27D:; /* SFXData_ShortRangeShot */
    /* $B27D: D6 */ nes_cpu_instruction_boundary(0xB27D, 6); { uint16_t a=(0x82 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B27F:;
    /* $B27F: 58 */ nes_cpu_instruction_boundary(0xB27F, 2); g_cpu.I = 0;
label_B280:;
    /* $B280: F8 */ nes_cpu_instruction_boundary(0xB280, 2); g_cpu.D = 1;
label_B281:; /* SFXData_SamusJump */
    /* $B281: 95 */ nes_cpu_instruction_boundary(0xB281, 4); nes_write((0x8C + g_cpu.X) & 0xFF, g_cpu.A);
label_B283:;
    /* $B283: 40 */ nes_cpu_instruction_boundary(0xB283, 6); /* RTI */ g_rti_source = 0xB283; g_rti_bank = 1; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B284:;
    /* $B284: B9 */ nes_cpu_instruction_boundary(0xB284, 4); g_cpu.A = nes_read((0x9A1D + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B287:;
    /* $B287: 20 */ nes_cpu_instruction_boundary(0xB287, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB2; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x89; g_cpu.S--; if (!nes_dispatch_call(0x168F, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB287, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B28A:;
    /* $B28A: 8D */ nes_cpu_instruction_boundary(0xB28A, 4); nes_write(0x42E0, g_cpu.A);
label_B28D:; /* SFXData_WaveBeam */
    /* $B28D: 19 */ nes_cpu_instruction_boundary(0xB28D, 4); g_cpu.A |= nes_read((0x6F7F + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B290:;
    /* $B290: 40 */ nes_cpu_instruction_boundary(0xB290, 6); /* RTI */ g_rti_source = 0xB290; g_rti_bank = 1; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B291:; /* SFXData_IceBeam */
    /* $B291: 18 */ nes_cpu_instruction_boundary(0xB291, 2); g_cpu.C = 0;
label_B292:;
    /* $B292: 7F */ nes_cpu_instruction_boundary(0xB292, 7); { uint16_t a=(0x4080 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B295:; /* SFXData_BombLaunch1 */
    /* $B295: 07 */ nes_cpu_instruction_boundary(0xB295, 5); { uint16_t a=0x7F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B297:;
    /* $B297: 40 */ nes_cpu_instruction_boundary(0xB297, 6); /* RTI */ g_rti_source = 0xB297; g_rti_bank = 1; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B298:;
    /* $B298: 28 */ nes_cpu_instruction_boundary(0xB298, 4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_B299:; /* SFXData_BombLaunch2 */
    /* $B299: 07 */ nes_cpu_instruction_boundary(0xB299, 5); { uint16_t a=0x7F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B29B:;
    /* $B29B: 45 */ nes_cpu_instruction_boundary(0xB29B, 3); g_cpu.A ^= nes_read(0x28); FLAG_NZ(g_cpu.A);
label_B29D:; /* SFXData_SamusBall */
    /* $B29D: 7F */ nes_cpu_instruction_boundary(0xB29D, 7); { uint16_t a=(0xDD7F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B2A0:;
    /* $B2A0: 3B */ nes_cpu_instruction_boundary(0xB2A0, 7); { uint16_t a=(0x7F7F + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_B2A3:;
    /* $B2A3: FF */ nes_cpu_instruction_boundary(0xB2A3, 7); { uint16_t a=(0x7F98 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B2A6:;
    /* $B2A6: 7F */ nes_cpu_instruction_boundary(0xB2A6, 7); { uint16_t a=(0x0840 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B2A9:; /* SFXData_Beep */
    /* $B2A9: 09 */ nes_cpu_instruction_boundary(0xB2A9, 2); g_cpu.A |= 0x7F; FLAG_NZ(g_cpu.A);
label_B2AB:;
    /* $B2AB: 30 */ nes_cpu_instruction_boundary(0xB2AB, 2); if (g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xB2F5); return; }
label_B2AD:; /* SFXData_BigEnemyHit */
    /* $B2AD: 03 */ nes_cpu_instruction_boundary(0xB2AD, 8); { uint16_t a=nes_read16zp((0x7F + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B2AF:;
    /* $B2AF: 42 */ nes_cpu_instruction_boundary(0xB2AF, 2); /* ILLEGAL $42 — skip 1 */
label_B2B0:;
    /* $B2B0: 18 */ nes_cpu_instruction_boundary(0xB2B0, 2); g_cpu.C = 0;
label_B2B1:; /* SFXData_StatueRaise */
    /* $B2B1: 03 */ nes_cpu_instruction_boundary(0xB2B1, 8); { uint16_t a=nes_read16zp((0x7F + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B2B3:;
    /* $B2B3: 11 */ nes_cpu_instruction_boundary(0xB2B3, 5); g_cpu.A |= nes_read((nes_read16zp(0x09) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B2B5:; /* SFXData_Door */
    /* $B2B5: 7F */ nes_cpu_instruction_boundary(0xB2B5, 7); { uint16_t a=(0x307F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B2B8:;
    /* $B2B8: B2 */ nes_cpu_instruction_boundary(0xB2B8, 2); /* ILLEGAL $B2 — skip 1 */
label_B2B9:; /* GetSoundRoutineData */
    /* $B2B9: EB */ nes_cpu_instruction_boundary(0xB2B9, 2); { uint8_t m=0xB2; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B2BB:;
    /* $B2BB: 52 */ nes_cpu_instruction_boundary(0xB2BB, 2); /* ILLEGAL $52 — skip 1 */
label_B2BC:;
    /* $B2BC: B3 */ nes_cpu_instruction_boundary(0xB2BC, 5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B2BE:; /* GetSoundRoutineData_SFXNoiseCont */
    /* $B2BE: FB */ nes_cpu_instruction_boundary(0xB2BE, 7); { uint16_t a=(0x1EB2 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B2C1:;
    /* $B2C1: B5 */ nes_cpu_instruction_boundary(0xB2C1, 4); g_cpu.A = nes_read((0x00 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B2C3:; /* GetSoundRoutineData_SFXSQ1Init */
    /* $B2C3: 0B */ nes_cpu_instruction_boundary(0xB2C3, 2); g_cpu.A &= 0xB3; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_B2C5:;
    /* $B2C5: 60 */ nes_cpu_instruction_boundary(0xB2C5, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B2C6:;
    /* $B2C6: B3 */ nes_cpu_instruction_boundary(0xB2C6, 5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B2C8:; /* GetSoundRoutineData_SFXSQ1Cont */
    /* $B2C8: 1B */ nes_cpu_instruction_boundary(0xB2C8, 7); { uint16_t a=(0x1EB3 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B2CB:;
    /* $B2CB: B5 */ nes_cpu_instruction_boundary(0xB2CB, 4); g_cpu.A = nes_read((0x01 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B2CD:; /* GetSoundRoutineData_SFXTriInit */
    /* $B2CD: 2B */ nes_cpu_instruction_boundary(0xB2CD, 2); g_cpu.A &= 0xB3; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_B2CF:;
    /* $B2CF: 74 */ nes_cpu_instruction_boundary(0xB2CF, 4); (void)nes_read((0xB3 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B2D1:;
    /* $B2D1: 03 */ nes_cpu_instruction_boundary(0xB2D1, 8); { uint16_t a=nes_read16zp((0x3B + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B2D3:;
    /* $B2D3: B3 */ nes_cpu_instruction_boundary(0xB2D3, 5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x1E) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B2D5:;
    /* $B2D5: B5 */ nes_cpu_instruction_boundary(0xB2D5, 4); g_cpu.A = nes_read((0x03 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B2D7:; /* GetSoundRoutineData_SFXMultiInit */
    /* $B2D7: 36 */ nes_cpu_instruction_boundary(0xB2D7, 6); { uint16_t a=(0xBC + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B2D9:;
    /* $B2D9: 8C */ nes_cpu_instruction_boundary(0xB2D9, 4); nes_write(0x04B3, g_cpu.Y);
label_B2DC:; /* GetSoundRoutineData_SFXMultiCont */
    /* $B2DC: 46 */ nes_cpu_instruction_boundary(0xB2DC, 5); { uint16_t a=0xBC; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_B2DE:;
    /* $B2DE: 94 */ nes_cpu_instruction_boundary(0xB2DE, 4); nes_write((0xB3 + g_cpu.X) & 0xFF, g_cpu.Y);
label_B2E0:;
    /* $B2E0: 04 */ nes_cpu_instruction_boundary(0xB2E0, 3); (void)nes_read(0x56); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B2E2:;
    /* $B2E2: BC */ nes_cpu_instruction_boundary(0xB2E2, 4); g_cpu.Y = nes_read((0xBC7B + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_B2E5:;
    /* $B2E5: 00 */ nes_cpu_instruction_boundary(0xB2E5, 7); nes_brk_executed(0xB2E5); return;
label_B2E6:; /* GetSoundRoutineData_MusicLoop */
    /* $B2E6: 56 */ nes_cpu_instruction_boundary(0xB2E6, 6); { uint16_t a=(0xBC + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_B2E8:;
    /* $B2E8: 6D */ nes_cpu_instruction_boundary(0xB2E8, 4); { uint8_t m=nes_read(0x00BC); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B2EB:; /* SFXNoiseInitRoutineTbl */
    /* $B2EB: 1E */ nes_cpu_instruction_boundary(0xB2EB, 7); { uint16_t a=(0x5BB5 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B2EE:;
    /* $B2EE: B5 */ nes_cpu_instruction_boundary(0xB2EE, 4); g_cpu.A = nes_read((0x9E + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B2F0:;
    /* $B2F0: B5 */ nes_cpu_instruction_boundary(0xB2F0, 4); g_cpu.A = nes_read((0xB3 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B2F2:;
    /* $B2F2: B5 */ nes_cpu_instruction_boundary(0xB2F2, 4); g_cpu.A = nes_read((0xC8 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B2F4:;
    /* $B2F4: B5 */ nes_cpu_instruction_boundary(0xB2F4, 4); g_cpu.A = nes_read((0x3F + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B2F6:;
    /* $B2F6: B5 */ nes_cpu_instruction_boundary(0xB2F6, 4); g_cpu.A = nes_read((0x1E + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B2F8:;
    /* $B2F8: B5 */ nes_cpu_instruction_boundary(0xB2F8, 4); g_cpu.A = nes_read((0x1E + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B2FA:;
    /* $B2FA: B5 */ nes_cpu_instruction_boundary(0xB2FA, 4); g_cpu.A = nes_read((0x1E + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B2FC:;
    /* $B2FC: B5 */ nes_cpu_instruction_boundary(0xB2FC, 4); g_cpu.A = nes_read((0x69 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B2FE:;
    /* $B2FE: B5 */ nes_cpu_instruction_boundary(0xB2FE, 4); g_cpu.A = nes_read((0xAB + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B300:;
    /* $B300: B5 */ nes_cpu_instruction_boundary(0xB300, 4); g_cpu.A = nes_read((0xBA + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B302:;
    /* $B302: B5 */ nes_cpu_instruction_boundary(0xB302, 4); g_cpu.A = nes_read((0xBA + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B304:;
    /* $B304: B5 */ nes_cpu_instruction_boundary(0xB304, 4); g_cpu.A = nes_read((0x46 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B306:;
    /* $B306: B5 */ nes_cpu_instruction_boundary(0xB306, 4); g_cpu.A = nes_read((0x1E + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B308:;
    /* $B308: B5 */ nes_cpu_instruction_boundary(0xB308, 4); g_cpu.A = nes_read((0x1E + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B30A:;
    /* $B30A: B5 */ nes_cpu_instruction_boundary(0xB30A, 4); g_cpu.A = nes_read((0xFD + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B30C:;
    /* $B30C: B6 */ nes_cpu_instruction_boundary(0xB30C, 4); g_cpu.X = nes_read((0x17 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_B30E:;
    /* $B30E: B7 */ nes_cpu_instruction_boundary(0xB30E, 4); g_cpu.A = g_cpu.X = nes_read((0x65 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_B310:;
    /* $B310: B7 */ nes_cpu_instruction_boundary(0xB310, 4); g_cpu.A = g_cpu.X = nes_read((0x46 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_B312:;
    /* $B312: B7 */ nes_cpu_instruction_boundary(0xB312, 4); g_cpu.A = g_cpu.X = nes_read((0x6C + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_B314:;
    /* $B314: B7 */ nes_cpu_instruction_boundary(0xB314, 4); g_cpu.A = g_cpu.X = nes_read((0x40 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_B316:;
    /* $B316: B7 */ nes_cpu_instruction_boundary(0xB316, 4); g_cpu.A = g_cpu.X = nes_read((0x33 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_B318:;
    /* $B318: B7 */ nes_cpu_instruction_boundary(0xB318, 4); g_cpu.A = g_cpu.X = nes_read((0xAA + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_B31A:;
    /* $B31A: B7 */ nes_cpu_instruction_boundary(0xB31A, 4); g_cpu.A = g_cpu.X = nes_read((0xE0 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_B31C:;
    /* $B31C: B6 */ nes_cpu_instruction_boundary(0xB31C, 4); g_cpu.X = nes_read((0x03 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_B31E:;
    /* $B31E: B7 */ nes_cpu_instruction_boundary(0xB31E, 4); g_cpu.A = g_cpu.X = nes_read((0x1D + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_B320:;
    /* $B320: B7 */ nes_cpu_instruction_boundary(0xB320, 4); g_cpu.A = g_cpu.X = nes_read((0x7F + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_B322:;
    /* $B322: B7 */ nes_cpu_instruction_boundary(0xB322, 4); g_cpu.A = g_cpu.X = nes_read((0x1D + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_B324:;
    /* $B324: B7 */ nes_cpu_instruction_boundary(0xB324, 4); g_cpu.A = g_cpu.X = nes_read((0x1D + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_B326:;
    /* $B326: B7 */ nes_cpu_instruction_boundary(0xB326, 4); g_cpu.A = g_cpu.X = nes_read((0x1D + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_B328:;
    /* $B328: B7 */ nes_cpu_instruction_boundary(0xB328, 4); g_cpu.A = g_cpu.X = nes_read((0xB1 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_B32A:;
    /* $B32A: B7 */ nes_cpu_instruction_boundary(0xB32A, 4); g_cpu.A = g_cpu.X = nes_read((0x02 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_B32C:;
    /* $B32C: B9 */ nes_cpu_instruction_boundary(0xB32C, 4); g_cpu.A = nes_read((0xB7DC + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B32F:;
    /* $B32F: D7 */ nes_cpu_instruction_boundary(0xB32F, 6); { uint16_t a=(0xB8 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B331:;
    /* $B331: 51 */ nes_cpu_instruction_boundary(0xB331, 5); g_cpu.A ^= nes_read((nes_read16zp(0xB9) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B333:;
    /* $B333: 09 */ nes_cpu_instruction_boundary(0xB333, 2); g_cpu.A |= 0xB8; FLAG_NZ(g_cpu.A);
label_B335:;
    /* $B335: 1F */ nes_cpu_instruction_boundary(0xB335, 7); { uint16_t a=(0x64B8 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B338:;
    /* $B338: B8 */ nes_cpu_instruction_boundary(0xB338, 2); g_cpu.V = 0;
label_B339:;
    /* $B339: A8 */ nes_cpu_instruction_boundary(0xB339, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B33A:;
    /* $B33A: B8 */ nes_cpu_instruction_boundary(0xB33A, 2); g_cpu.V = 0;
label_B33B:; /* SFXTriContRoutineTbl */
    /* $B33B: 1D */ nes_cpu_instruction_boundary(0xB33B, 4); g_cpu.A |= nes_read((0xFBB9 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B33E:;
    /* $B33E: B7 */ nes_cpu_instruction_boundary(0xB33E, 4); g_cpu.A = g_cpu.X = nes_read((0xE1 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_B340:;
    /* $B340: B8 */ nes_cpu_instruction_boundary(0xB340, 2); g_cpu.V = 0;
label_B341:;
    /* $B341: 70 */ nes_cpu_instruction_boundary(0xB341, 2); if (g_cpu.V) {
    nes_cpu_instruction_boundary(0xB2FC, 2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B2FC;
    }
label_B343:;
    /* $B343: 17 */ nes_cpu_instruction_boundary(0xB343, 6); { uint16_t a=(0xB8 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B345:;
    /* $B345: 3E */ nes_cpu_instruction_boundary(0xB345, 7); { uint16_t a=(0x7FB8 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B348:;
    /* $B348: B8 */ nes_cpu_instruction_boundary(0xB348, 2); g_cpu.V = 0;
label_B349:;
    /* $B349: AF */ nes_cpu_instruction_boundary(0xB349, 4); g_cpu.A = g_cpu.X = nes_read(0xADB8); FLAG_NZ(g_cpu.A);
label_B34C:;
    /* $B34C: 80 */ nes_cpu_instruction_boundary(0xB34C, 2); /* NOP */
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
    /* $B367: 20 */ nes_cpu_instruction_boundary(0xB367, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x69; g_cpu.S--; func_B4ED_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB367, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B36A:;
    /* $B36A: 6C */ nes_cpu_instruction_boundary(0xB36A, 5); { uint16_t _jt = nes_read16zp(0xE2); nes_cpu_instruction_boundary(_jt, 2); call_by_address_tail(_jt, -1); return; }
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
label_B6C4:; /* SamusHitSFXInit_RTS */
    /* $B6C4: 60 */ nes_cpu_instruction_boundary(0xB6C4, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B6C5:; /* IncorrectPasswordSFXInit */
    /* $B6C5: A0 */ nes_cpu_instruction_boundary(0xB6C5, 2); g_cpu.Y = 0x61; FLAG_NZ(g_cpu.Y);
label_B6C7:;
    /* $B6C7: 20 */ nes_cpu_instruction_boundary(0xB6C7, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC9; g_cpu.S--; func_B398_b1();
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
    /* $B6CE: 4C */ nes_cpu_instruction_boundary(0xB6CE, 3); nes_cpu_instruction_boundary(0xB5D5, 2); func_B5D5_b1(); return;
label_B8D6:; /* EndTriSFX_RTS */
    /* $B8D6: 60 */ nes_cpu_instruction_boundary(0xB8D6, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B8D7:; /* MetroidHitSFXInit */
    /* $B8D7: A9 */ nes_cpu_instruction_boundary(0xB8D7, 2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_B8D9:;
    /* $B8D9: A0 */ nes_cpu_instruction_boundary(0xB8D9, 2); g_cpu.Y = 0xA1; FLAG_NZ(g_cpu.Y);
label_B8DB:;
    /* $B8DB: 20 */ nes_cpu_instruction_boundary(0xB8DB, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDD; g_cpu.S--; func_B482_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB8DB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B8DE:;
    /* $B8DE: 4C */ nes_cpu_instruction_boundary(0xB8DE, 3); nes_cpu_instruction_boundary(0xB8F3, 2); func_B8F3_b1(); return;
label_B91C:; /* SamusDieSFXInit_RTS */
    /* $B91C: 60 */ nes_cpu_instruction_boundary(0xB91C, 6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B91D:; /* SamusDieSFXCont */
    /* $B91D: 20 */ nes_cpu_instruction_boundary(0xB91D, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1F; g_cpu.S--; func_B4D9_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB91D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B920:;
    /* $B920: D0 */ nes_cpu_instruction_boundary(0xB920, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB93C); return; }
label_B922:;
    /* $B922: A9 */ nes_cpu_instruction_boundary(0xB922, 2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_B924:;
    /* $B924: 8D */ nes_cpu_instruction_boundary(0xB924, 4); nes_write(0x0612, g_cpu.A);
label_B927:;
    /* $B927: A9 */ nes_cpu_instruction_boundary(0xB927, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B929:;
    /* $B929: 8D */ nes_cpu_instruction_boundary(0xB929, 4); nes_write(0x0613, g_cpu.A);
label_B92C:;
    /* $B92C: 20 */ nes_cpu_instruction_boundary(0xB92C, 6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2E; g_cpu.S--; func_B9BC_b1();
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
    /* $B937: D0 */ nes_cpu_instruction_boundary(0xB937, 2); if (!g_cpu.Z) {
    nes_cpu_instruction_boundary(0xB91C, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B91C;
    }
label_B939:;
    /* $B939: 4C */ nes_cpu_instruction_boundary(0xB939, 3); nes_cpu_instruction_boundary(0xB8C6, 2); func_B8C6_b1(); return;
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
}

void func_A7AD_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A7AD_b1");
#endif
    func_A7AD_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B503_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B503_b1");
#endif
    func_A7AD_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B91C_b1(void) { /* SamusDieSFXInit_RTS */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B91C_b1");
#endif
    func_A7AD_b1_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B8D6_b1(void) { /* EndTriSFX_RTS */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8D6_b1");
#endif
    func_A7AD_b1_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B6C4_b1(void) { /* SamusHitSFXInit_RTS */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6C4_b1");
#endif
    func_A7AD_b1_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B920_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B920_b1");
#endif
    func_A7AD_b1_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
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
label_AFF7:; return;
label_AFF9:; return;
label_AFFB:; return;
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
label_B020:; return;
label_B021:; return;
label_B022:; return;
label_B023:; return;
label_B025:; return;
label_B028:; return;
label_B02A:; return;
label_B02B:; return;
label_B02C:; return;
label_B02E:; return;
label_B030:; return;
label_B031:; return;
label_B033:; return;
label_B034:; return;
label_B037:; return;
label_B038:; return;
label_B03B:; return;
label_B03E:; return;
label_B041:; return;
label_B042:; return;
label_B045:; return;
label_B048:; return;
label_B04A:; return;
label_B04C:; return;
label_B04D:; return;
label_B050:; return;
label_B053:; return;
label_B054:; return;
label_B055:; return;
label_B058:; return;
label_B059:; return;
label_B05B:; return;
label_B05E:; return;
label_B060:; return;
label_B063:; return;
label_B065:; return;
label_B068:; return;
label_B06A:; return;
label_B06D:; return;
label_B070:; return;
label_B072:; return;
label_B075:; return;
label_B077:; return;
label_B079:; return;
label_B07B:; return;
label_B07C:; return;
label_B07D:; return;
label_B07F:; return;
label_B081:; return;
label_B083:; return;
label_B084:; return;
label_B087:; return;
label_B08A:; return;
label_B08C:; return;
label_B08E:; return;
label_B08F:; return;
label_B092:; return;
label_B095:; return;
label_B096:; return;
label_B097:; return;
label_B09A:; return;
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
label_B0CE:; return;
label_B0D1:; return;
label_B0D2:; return;
label_B0D5:; return;
label_B0DE:; return;
label_B0E0:; return;
label_B0E2:; return;
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
}

