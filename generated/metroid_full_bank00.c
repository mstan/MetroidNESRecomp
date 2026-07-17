/* metroid_full_bank00.c — PRG bank 0 function bodies.
 * Generated part of metroid_full.c: #included by the umbrella; NOT a
 * standalone translation unit. Do not compile or edit directly. */

void func_9A07_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A07_b0");
#endif
label_9A07:;
    /* $9A07: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_9A09:;
    /* $9A09: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1D; g_cpu.C=(g_cpu.A>=0x1D)?1:0; FLAG_NZ(r&0xFF); }
label_9A0B:;
    /* $9A0B: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_9A38;
label_9A0D:;
    /* $9A0D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0F; g_cpu.S--; func_9C45_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9A0D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9A10:;
    /* $9A10: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x7A); FLAG_NZ(g_cpu.A);
label_9A12:;
    /* $9A12: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9A24;
label_9A14:;
    /* $9A14: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_9A16:;
    /* $9A16: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_9A24;
label_9A18:;
    /* $9A18: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9A19:;
    /* $9A19: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9A1A:;
    /* $9A1A: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xA1B8 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_9A1D:;
    /* $9A1D: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA1B9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A20:;
    /* $9A20: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9A21:;
    /* $9A21: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x23; g_cpu.S--; func_C20E();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9A21, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9A24:;
    /* $9A24: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x81); FLAG_NZ(g_cpu.A);
label_9A26:;
    /* $9A26: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9A38;
label_9A28:;
    /* $9A28: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_9A2A:;
    /* $9A2A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_9A38;
label_9A2C:;
    /* $9A2C: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9A2D:;
    /* $9A2D: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9A2E:;
    /* $9A2E: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xA263 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_9A31:;
    /* $9A31: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA264 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A34:;
    /* $9A34: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9A35:;
    /* $9A35: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_C20E(); return;
label_9A38:;
    /* $9A38: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9C45_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9C45_b0");
#endif
label_9C45:;
    /* $9C45: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x80); FLAG_NZ(g_cpu.Y);
label_9C47:;
    /* $9C47: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9C7E;
label_9C49:;
    /* $9C49: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x07; g_cpu.C=(g_cpu.Y>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_9C4B:;
    /* $9C4B: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_9C7E;
label_9C4D:;
    /* $9C4D: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_9C4F:;
    /* $9C4F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFC); FLAG_NZ(g_cpu.A);
label_9C51:;
    /* $9C51: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_9C57;
label_9C53:;
    /* $9C53: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9C54:;
    /* $9C54: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_9C55:;
    /* $9C55: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x80; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9C57:;
    /* $9C57: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_9C59:;
    /* $9C59: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_9C7E;
label_9C5B:;
    /* $9C5B: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_9C5D:;
    /* $9C5D: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9C5E:;
    /* $9C5E: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_9C5F:;
    /* $9C5F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9C6C;
label_9C61:;
    /* $9C61: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9C62:;
    /* $9C62: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_9C7E;
label_9C64:;
    /* $9C64: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_9C65:;
    /* $9C65: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9C66:;
    /* $9C66: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9C67:;
    /* $9C67: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9C68:;
    /* $9C68: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x04 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x04); g_cpu.A=r&0xFF; }
label_9C6A:;
    /* $9C6A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9C70;
label_9C6C:;
    /* $9C6C: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_9C6D:;
    /* $9C6D: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9C6E:;
    /* $9C6E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9C6F:;
    /* $9C6F: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9C70:;
    /* $9C70: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x01); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9C72:;
    /* $9C72: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9C73:;
    /* $9C73: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9C74:;
    /* $9C74: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xA291 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_9C77:;
    /* $9C77: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA292 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C7A:;
    /* $9C7A: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9C7B:;
    /* $9C7B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_C20E(); return;
label_9C7E:;
    /* $9C7E: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9F54_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9F54_b0");
#endif
label_9F54:;
    /* $9F54: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1C); FLAG_NZ(g_cpu.A);
label_9F56:;
    /* $9F56: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9F80;
label_9F58:;
    /* $9F58: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0C; g_cpu.C=(g_cpu.A>=0x0C)?1:0; FLAG_NZ(r&0xFF); }
label_9F5A:;
    /* $9F5A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9F80;
label_9F5C:;
    /* $9F5C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0D; g_cpu.C=(g_cpu.A>=0x0D)?1:0; FLAG_NZ(r&0xFF); }
label_9F5E:;
    /* $9F5E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9F64;
label_9F60:;
    /* $9F60: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_9F62:;
    /* $9F62: 84 */ maybe_trigger_vblank(3); nes_write(0x1C, g_cpu.Y);
label_9F64:;
    /* $9F64: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9F65:;
    /* $9F65: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9F66:;
    /* $9F66: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9F80 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9F69:;
    /* $9F69: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x9F7F + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_9F6C:;
    /* $9F6C: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9F6D:;
    /* $9F6D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6F; g_cpu.S--; func_C20E();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9F6D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9F70:;
    /* $9F70: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3F; FLAG_NZ(g_cpu.A);
label_9F72:;
    /* $9F72: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_9F75:;
    /* $9F75: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9F77:;
    /* $9F77: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_9F7A:;
    /* $9F7A: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_9F7D:;
    /* $9F7D: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_9F80:;
    /* $9F80: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8AC7_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8AC7_b0");
#endif
label_8AC7:;
    /* $8AC7: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_8AC9:;
    /* $8AC9: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_8ACB:;
    /* $8ACB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8AD2;
label_8ACD:;
    /* $8ACD: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x07A0); FLAG_NZ(g_cpu.A);
label_8AD0:;
    /* $8AD0: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8AD3;
label_8AD2:;
    /* $8AD2: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8AD3:;
    /* $8AD3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x19; FLAG_NZ(g_cpu.A);
label_8AD5:;
    /* $8AD5: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8AD7:;
    /* $8AD7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3F; FLAG_NZ(g_cpu.A);
label_8AD9:;
    /* $8AD9: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_8ADB:;
    /* $8ADB: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC3); FLAG_NZ(g_cpu.A);
label_8ADD:;
    /* $8ADD: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_8ADF:;
    /* $8ADF: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8AE0:;
    /* $8AE0: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8AE1:;
    /* $8AE1: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8AFF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8AE4:;
    /* $8AE4: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_8AE6:;
    /* $8AE6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8B00 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8AE9:;
    /* $8AE9: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_8AEB:;
    /* $8AEB: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xC3; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8AED:;
    /* $8AED: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xEF; g_cpu.S--; func_C37E();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8AED, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8AF0:;
    /* $8AF0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1D; FLAG_NZ(g_cpu.A);
label_8AF2:;
    /* $8AF2: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8AF4:;
    /* $8AF4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3F; FLAG_NZ(g_cpu.A);
label_8AF6:;
    /* $8AF6: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_8AF8:;
    /* $8AF8: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8AF9:;
    /* $8AF9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFB; g_cpu.S--; func_C2B3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8AF9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8AFC:;
    /* $8AFC: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_C37E(); return;
}

void func_B3E4_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3E4_b0");
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
    /* $B3FA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFC; g_cpu.S--; func_B34B_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3FA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3FD:;
    /* $B3FD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFF; g_cpu.S--; func_B37B_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3FD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B400:;
    /* $B400: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x02; g_cpu.S--; func_B36D_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB400, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B403:;
    /* $B403: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x05; g_cpu.S--; func_BC66_b0();
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
    /* $B41B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1D; g_cpu.S--; func_B434_b0();
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
    /* $B434: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x36; g_cpu.S--; func_B44D_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB434, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B437:;
    /* $B437: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x39; g_cpu.S--; func_B46E_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB437, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B43A:;
    /* $B43A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3C; g_cpu.S--; func_B43E_b0();
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

void func_988A_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_988A_b0");
#endif
label_988A:;
    /* $988A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_988C:;
    /* $988C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1D; g_cpu.C=(g_cpu.A>=0x1D)?1:0; FLAG_NZ(r&0xFF); }
label_988E:;
    /* $988E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_98AD;
label_9890:;
    /* $9890: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC8); FLAG_NZ(g_cpu.A);
label_9892:;
    /* $9892: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_98AD;
label_9894:;
    /* $9894: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_9896:;
    /* $9896: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9897:;
    /* $9897: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_98AD;
label_9899:;
    /* $9899: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x9F; FLAG_NZ(g_cpu.X);
label_989B:;
    /* $989B: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x6E00 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_989E:;
    /* $989E: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0260 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_98A1:;
    /* $98A1: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_98A2:;
    /* $98A2: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_98A3:;
    /* $98A3: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_98A4:;
    /* $98A4: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_98A5:;
    /* $98A5: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xFF; g_cpu.C=(g_cpu.X>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_98A7:;
    /* $98A7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_989B;
    }
label_98A9:;
    /* $98A9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_98AB:;
    /* $98AB: 85 */ maybe_trigger_vblank(3); nes_write(0xC8, g_cpu.A);
label_98AD:;
    /* $98AD: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8000_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8000_b0");
#endif
label_8000:;
    /* $8000: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_8002:;
    /* $8002: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x15; g_cpu.C=(g_cpu.A>=0x15)?1:0; FLAG_NZ(r&0xFF); }
label_8004:;
    /* $8004: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8027;
label_8006:;
    /* $8006: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x12); FLAG_NZ(g_cpu.A);
label_8008:;
    /* $8008: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_800A:;
    /* $800A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8022;
label_800C:;
    /* $800C: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_800E:;
    /* $800E: 84 */ maybe_trigger_vblank(3); nes_write(0xD1, g_cpu.Y);
label_8010:;
    /* $8010: 84 */ maybe_trigger_vblank(3); nes_write(0xBB, g_cpu.Y);
label_8012:;
    /* $8012: 84 */ maybe_trigger_vblank(3); nes_write(0xB7, g_cpu.Y);
label_8014:;
    /* $8014: 84 */ maybe_trigger_vblank(3); nes_write(0xB8, g_cpu.Y);
label_8016:;
    /* $8016: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_8018:;
    /* $8018: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFC; FLAG_NZ(g_cpu.A);
label_801A:;
    /* $801A: 85 */ maybe_trigger_vblank(3); nes_write(0xFF, g_cpu.A);
label_801C:;
    /* $801C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1B; FLAG_NZ(g_cpu.A);
label_801E:;
    /* $801E: 85 */ maybe_trigger_vblank(3); nes_write(0x1F, g_cpu.A);
label_8020:;
    /* $8020: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8027;
label_8022:;
    /* $8022: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x24; g_cpu.S--; func_C1BC();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8022, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8025:;
    /* $8025: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_8027:;
    /* $8027: 20 */ maybe_trigger_vblank(6); /* inline_dispatch $C27C: 31 entries (bank=0) */
switch(g_cpu.A) {
  case 0: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x71); nes_write(0x000D, 0x80); g_cpu.A = 0x80; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_8071_b0(); return;
  case 1: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xD0); nes_write(0x000D, 0x80); g_cpu.A = 0x80; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_80D0_b0(); return;
  case 2: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xF9); nes_write(0x000D, 0x80); g_cpu.A = 0x80; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_80F9_b0(); return;
  case 3: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x2C); nes_write(0x000D, 0x81); g_cpu.A = 0x81; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_812C_b0(); return;
  case 4: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x42); nes_write(0x000D, 0x81); g_cpu.A = 0x81; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_8142_b0(); return;
  case 5: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x09); nes_write(0x000D, 0x81); g_cpu.A = 0x81; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_8109_b0(); return;
  case 6: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x4D); nes_write(0x000D, 0x81); g_cpu.A = 0x81; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_814D_b0(); return;
  case 7: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x63); nes_write(0x000D, 0x81); g_cpu.A = 0x81; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_8163_b0(); return;
  case 8: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x82); nes_write(0x000D, 0x81); g_cpu.A = 0x81; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_8182_b0(); return;
  case 9: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xD1); nes_write(0x000D, 0x81); g_cpu.A = 0x81; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_81D1_b0(); return;
  case 10: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x6E); nes_write(0x000D, 0x80); g_cpu.A = 0x80; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_806E_b0(); return;
  case 11: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x6E); nes_write(0x000D, 0x80); g_cpu.A = 0x80; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_806E_b0(); return;
  case 12: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x2E); nes_write(0x000D, 0x82); g_cpu.A = 0x82; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_822E_b0(); return;
  case 13: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x43); nes_write(0x000D, 0x82); g_cpu.A = 0x82; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_8243_b0(); return;
  case 14: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x63); nes_write(0x000D, 0x82); g_cpu.A = 0x82; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_8263_b0(); return;
  case 15: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x83); nes_write(0x000D, 0x82); g_cpu.A = 0x82; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_8283_b0(); return;
  case 16: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x68); nes_write(0x000D, 0x80); g_cpu.A = 0x80; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_8068_b0(); return;
  case 17: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xA3); nes_write(0x000D, 0x82); g_cpu.A = 0x82; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_82A3_b0(); return;
  case 18: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xED); nes_write(0x000D, 0x82); g_cpu.A = 0x82; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_82ED_b0(); return;
  case 19: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xF3); nes_write(0x000D, 0x82); g_cpu.A = 0x82; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_82F3_b0(); return;
  case 20: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xF3); nes_write(0x000D, 0x82); g_cpu.A = 0x82; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_82F3_b0(); return;
  case 21: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xBA); nes_write(0x000D, 0x90); g_cpu.A = 0x90; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_90BA_b0(); return;
  case 22: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xD7); nes_write(0x000D, 0x90); g_cpu.A = 0x90; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_90D7_b0(); return;
  case 23: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x1A); nes_write(0x000D, 0x91); g_cpu.A = 0x91; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_911A_b0(); return;
  case 24: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x47); nes_write(0x000D, 0x91); g_cpu.A = 0x91; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_9147_b0(); return;
  case 25: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x59); nes_write(0x000D, 0x93); g_cpu.A = 0x93; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_9359_b0(); return;
  case 26: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x94); nes_write(0x000D, 0x93); g_cpu.A = 0x93; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_9394_b0(); return;
  case 27: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xBA); nes_write(0x000D, 0x90); g_cpu.A = 0x90; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_90BA_b0(); return;
  case 28: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x9E); nes_write(0x000D, 0x93); g_cpu.A = 0x93; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_939E_b0(); return;
  case 29: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xA7); nes_write(0x000D, 0x9A); g_cpu.A = 0x9A; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_9AA7_b0(); return;
  case 30: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xAA); nes_write(0x000D, 0xC4); g_cpu.A = 0xC4; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_C4AA(); return;
  default: nes_log_inline_miss(0x8027, g_cpu.A); return;
}
label_8068:;
    /* $8068: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_806A:;
    /* $806A: 85 */ maybe_trigger_vblank(3); nes_write(0xCB, g_cpu.A);
label_806C:;
    /* $806C: 85 */ maybe_trigger_vblank(3); nes_write(0xC9, g_cpu.A);
label_806E:;
    /* $806E: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8070:;
    /* $8070: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B3C9_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3C9_b0");
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
    /* $B3DD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDF; g_cpu.S--; func_B398_b0();
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

void func_B34B_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B34B_b0");
#endif
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
    /* $B367: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x69; g_cpu.S--; func_B4ED_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB367, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B36A:;
    /* $B36A: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16zp(0xE2); maybe_trigger_vblank(2); call_by_address(_jt); return; }
}

void func_B37B_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B37B_b0");
#endif
label_B37B:;
    /* $B37B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0684); FLAG_NZ(g_cpu.A);
label_B37E:;
    /* $B37E: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xD7; FLAG_NZ(g_cpu.X);
label_B380:;
    /* $B380: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; func_B4ED_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB380, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B383:;
    /* $B383: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x85; g_cpu.S--; func_BC83_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB383, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B386:;
    /* $B386: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x88; g_cpu.S--; func_BC94_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB386, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B389:;
    /* $B389: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16zp(0xE2); maybe_trigger_vblank(2); call_by_address(_jt); return; }
}

static void func_B36D_b0_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B374;
    }
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
    /* $B380: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; func_B4ED_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB380, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B383:;
    /* $B383: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x85; g_cpu.S--; func_BC83_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB383, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B386:;
    /* $B386: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x88; g_cpu.S--; func_BC94_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB386, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B389:;
    /* $B389: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16zp(0xE2); maybe_trigger_vblank(2); call_by_address(_jt); return; }
}

void func_B36D_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B36D_b0");
#endif
    func_B36D_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B374_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B374_b0");
#endif
    func_B36D_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

static void func_BC66_b0_body(int _entry) {
    switch (_entry) {
        case 1: goto label_BC6D;
    }
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
    /* $BC72: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x74; g_cpu.S--; func_B4ED_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC72, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC75:;
    /* $BC75: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x77; g_cpu.S--; func_BC83_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC75, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC78:;
    /* $BC78: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16zp(0xE2); maybe_trigger_vblank(2); call_by_address(_jt); return; }
}

void func_BC66_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC66_b0");
#endif
    func_BC66_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BC6D_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC6D_b0");
#endif
    func_BC66_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B434_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B434_b0");
#endif
label_B434:;
    /* $B434: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x36; g_cpu.S--; func_B44D_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB434, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B437:;
    /* $B437: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x39; g_cpu.S--; func_B46E_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB437, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B43A:;
    /* $B43A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3C; g_cpu.S--; func_B43E_b0();
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

void func_B44D_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B44D_b0");
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

void func_B46E_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B46E_b0");
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

void func_B43E_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B43E_b0");
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

static void func_8071_b0_body(int _entry) {
    switch (_entry) {
        case 1: goto label_80AC;
        case 2: goto label_809E;
    }
label_8071:;
    /* $8071: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x02; FLAG_NZ(g_cpu.Y);
label_8073:;
    /* $8073: 84 */ maybe_trigger_vblank(3); nes_write(0xCF, g_cpu.Y);
label_8075:;
    /* $8075: 84 */ maybe_trigger_vblank(3); nes_write(0xCC, g_cpu.Y);
label_8077:;
    /* $8077: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8078:;
    /* $8078: 84 */ maybe_trigger_vblank(3); nes_write(0xCE, g_cpu.Y);
label_807A:;
    /* $807A: 84 */ maybe_trigger_vblank(3); nes_write(0xD1, g_cpu.Y);
label_807C:;
    /* $807C: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_807D:;
    /* $807D: 84 */ maybe_trigger_vblank(3); nes_write(0xD0, g_cpu.Y);
label_807F:;
    /* $807F: 84 */ maybe_trigger_vblank(3); nes_write(0xCD, g_cpu.Y);
label_8081:;
    /* $8081: 84 */ maybe_trigger_vblank(3); nes_write(0xD3, g_cpu.Y);
label_8083:;
    /* $8083: 8C */ maybe_trigger_vblank(4); nes_write(0x69B2, g_cpu.Y);
label_8086:;
    /* $8086: 84 */ maybe_trigger_vblank(3); nes_write(0xCB, g_cpu.Y);
label_8088:;
    /* $8088: 84 */ maybe_trigger_vblank(3); nes_write(0xC9, g_cpu.Y);
label_808A:;
    /* $808A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_808C:;
    /* $808C: 85 */ maybe_trigger_vblank(3); nes_write(0xD8, g_cpu.A);
label_808E:;
    /* $808E: 84 */ maybe_trigger_vblank(3); nes_write(0xB7, g_cpu.Y);
label_8090:;
    /* $8090: 84 */ maybe_trigger_vblank(3); nes_write(0xB8, g_cpu.Y);
label_8092:;
    /* $8092: 84 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.Y);
label_8094:;
    /* $8094: 84 */ maybe_trigger_vblank(3); nes_write(0xC2, g_cpu.Y);
label_8096:;
    /* $8096: 84 */ maybe_trigger_vblank(3); nes_write(0xC3, g_cpu.Y);
label_8098:;
    /* $8098: 84 */ maybe_trigger_vblank(3); nes_write(0xC4, g_cpu.Y);
label_809A:;
    /* $809A: 84 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.Y);
label_809C:;
    /* $809C: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x60; FLAG_NZ(g_cpu.X);
label_809E:;
    /* $809E: 86 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.X);
label_80A0:;
    /* $80A0: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_80A1:;
    /* $80A1: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_80A3:;
    /* $80A3: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_80A4:;
    /* $80A4: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_80A5:;
    /* $80A5: 84 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.Y);
label_80A7:;
    /* $80A7: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x80C8 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_80AA:;
    /* $80AA: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_80AC:;
    /* $80AC: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_80AE:;
    /* $80AE: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_80AF:;
    /* $80AF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_80BE;
label_80B1:;
    /* $80B1: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x40; g_cpu.C=(g_cpu.Y>=0x40)?1:0; FLAG_NZ(r&0xFF); }
label_80B3:;
    /* $80B3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_80AC;
    }
label_80B5:;
    /* $80B5: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x02); FLAG_NZ(g_cpu.Y);
label_80B7:;
    /* $80B7: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x80C9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_80BA:;
    /* $80BA: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x40; FLAG_NZ(g_cpu.Y);
label_80BC:;
    /* $80BC: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_80AC;
    }
label_80BE:;
    /* $80BE: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_80BF:;
    /* $80BF: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x68; g_cpu.C=(g_cpu.X>=0x68)?1:0; FLAG_NZ(r&0xFF); }
label_80C1:;
    /* $80C1: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_809E;
    }
label_80C3:;
    /* $80C3: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_80C5:;
    /* $80C5: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_98AE_b0(); return;
}

void func_8071_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8071_b0");
#endif
    func_8071_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_80AC_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80AC_b0");
#endif
    func_8071_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_809E_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_809E_b0");
#endif
    func_8071_b0_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_80D0_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80D0_b0");
#endif
label_80D0:;
    /* $80D0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_80D2:;
    /* $80D2: 85 */ maybe_trigger_vblank(3); nes_write(0xF0, g_cpu.A);
label_80D4:;
    /* $80D4: 8D */ maybe_trigger_vblank(4); nes_write(0x0684, g_cpu.A);
label_80D7:;
    /* $80D7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD9; g_cpu.S--; func_C439();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x80D7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_80DA:;
    /* $80DA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDC; g_cpu.S--; func_C158();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x80DA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_80DD:;
    /* $80DD: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xF4; FLAG_NZ(g_cpu.X);
label_80DF:;
    /* $80DF: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x82; FLAG_NZ(g_cpu.Y);
label_80E1:;
    /* $80E1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE3; g_cpu.S--; func_C20E();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x80E1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_80E4:;
    /* $80E4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_80E6:;
    /* $80E6: 85 */ maybe_trigger_vblank(3); nes_write(0x1C, g_cpu.A);
label_80E8:;
    /* $80E8: 85 */ maybe_trigger_vblank(3); nes_write(0xC5, g_cpu.A);
label_80EA:;
    /* $80EA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_80EC:;
    /* $80EC: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFC; FLAG_NZ(g_cpu.A);
label_80EE:;
    /* $80EE: 85 */ maybe_trigger_vblank(3); nes_write(0xFF, g_cpu.A);
label_80F0:;
    /* $80F0: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_80F2:;
    /* $80F2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_80F4:;
    /* $80F4: 85 */ maybe_trigger_vblank(3); nes_write(0xD7, g_cpu.A);
label_80F6:;
    /* $80F6: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_C447(); return;
}

void func_80F9_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80F9_b0");
#endif
label_80F9:;
    /* $80F9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_80FB:;
    /* $80FB: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFE; FLAG_NZ(g_cpu.A);
label_80FD:;
    /* $80FD: 85 */ maybe_trigger_vblank(3); nes_write(0xFF, g_cpu.A);
label_80FF:;
    /* $80FF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_8101:;
    /* $8101: 85 */ maybe_trigger_vblank(3); nes_write(0x2C, g_cpu.A);
label_8103:;
    /* $8103: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8104:;
    /* $8104: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_8106:;
    /* $8106: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8108:;
    /* $8108: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

static void func_812C_b0_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8141;
    }
label_812C:;
    /* $812C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_812E:;
    /* $812E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8141;
label_8130:;
    /* $8130: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_8132:;
    /* $8132: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_8134:;
    /* $8134: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8141;
label_8136:;
    /* $8136: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x38; g_cpu.S--; func_8A8C_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8136, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8139:;
    /* $8139: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8141;
label_813B:;
    /* $813B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_813D:;
    /* $813D: 85 */ maybe_trigger_vblank(3); nes_write(0x2C, g_cpu.A);
label_813F:;
    /* $813F: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8141:;
    /* $8141: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_812C_b0(void) {
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

void func_8142_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8142_b0");
#endif
label_8142:;
    /* $8142: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_8144:;
    /* $8144: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0x8141); return; }
label_8146:;
    /* $8146: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_8148:;
    /* $8148: 85 */ maybe_trigger_vblank(3); nes_write(0x2C, g_cpu.A);
label_814A:;
    /* $814A: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_814C:;
    /* $814C: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8109_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8109_b0");
#endif
label_8109:;
    /* $8109: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_810B:;
    /* $810B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_810D:;
    /* $810D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_812B;
label_810F:;
    /* $810F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC1); FLAG_NZ(g_cpu.A);
label_8111:;
    /* $8111: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_8113:;
    /* $8113: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_8115:;
    /* $8115: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x17; g_cpu.S--; func_8A8C_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8115, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8118:;
    /* $8118: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_811A:;
    /* $811A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_812B;
label_811C:;
    /* $811C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC1); FLAG_NZ(g_cpu.A);
label_811E:;
    /* $811E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_8120:;
    /* $8120: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_812B;
label_8122:;
    /* $8122: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8124:;
    /* $8124: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x26; g_cpu.S--; func_87AB_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8124, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8127:;
    /* $8127: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x18; FLAG_NZ(g_cpu.A);
label_8129:;
    /* $8129: 85 */ maybe_trigger_vblank(3); nes_write(0x2C, g_cpu.A);
label_812B:;
    /* $812B: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_814D_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_814D_b0");
#endif
label_814D:;
    /* $814D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_814F:;
    /* $814F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8162;
label_8151:;
    /* $8151: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x6EAA); FLAG_NZ(g_cpu.A);
label_8154:;
    /* $8154: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x6EBA); FLAG_NZ(g_cpu.A);
label_8157:;
    /* $8157: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_8159:;
    /* $8159: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_815F;
label_815B:;
    /* $815B: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_815D:;
    /* $815D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8162;
label_815F:;
    /* $815F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x61; g_cpu.S--; func_87CF_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x815F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8162:;
    /* $8162: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8163_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8163_b0");
#endif
label_8163:;
    /* $8163: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_8165:;
    /* $8165: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_8167:;
    /* $8167: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8181;
label_8169:;
    /* $8169: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC4); FLAG_NZ(g_cpu.A);
label_816B:;
    /* $816B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_816D:;
    /* $816D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_817E;
label_816F:;
    /* $816F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x71; g_cpu.S--; func_8897_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x816F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8172:;
    /* $8172: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_8174:;
    /* $8174: 85 */ maybe_trigger_vblank(3); nes_write(0x2C, g_cpu.A);
label_8176:;
    /* $8176: 85 */ maybe_trigger_vblank(3); nes_write(0xBC, g_cpu.A);
label_8178:;
    /* $8178: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_817A:;
    /* $817A: 85 */ maybe_trigger_vblank(3); nes_write(0xBF, g_cpu.A);
label_817C:;
    /* $817C: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_817E:;
    /* $817E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; func_8B5F_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x817E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8181:;
    /* $8181: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_81D1_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81D1_b0");
#endif
label_81D1:;
    /* $81D1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC0); FLAG_NZ(g_cpu.A);
label_81D3:;
    /* $81D3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_81DB;
label_81D5:;
    /* $81D5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD7; g_cpu.S--; func_8976_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x81D5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_81D8:;
    /* $81D8: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8AA7_b0(); return;
label_81DB:;
    /* $81DB: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_81DD:;
    /* $81DD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x60; FLAG_NZ(g_cpu.A);
label_81DF:;
    /* $81DF: 8D */ maybe_trigger_vblank(4); nes_write(0x030D, g_cpu.A);
label_81E2:;
    /* $81E2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x7C; FLAG_NZ(g_cpu.A);
label_81E4:;
    /* $81E4: 8D */ maybe_trigger_vblank(4); nes_write(0x030E, g_cpu.A);
label_81E7:;
    /* $81E7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0305); FLAG_NZ(g_cpu.A);
label_81EA:;
    /* $81EA: 8D */ maybe_trigger_vblank(4); nes_write(0x0306, g_cpu.A);
label_81ED:;
    /* $81ED: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_822E_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_822E_b0");
#endif
label_822E:;
    /* $822E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_8230:;
    /* $8230: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x01; FLAG_NZ(g_cpu.A);
label_8232:;
    /* $8232: 85 */ maybe_trigger_vblank(3); nes_write(0xFF, g_cpu.A);
label_8234:;
    /* $8234: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8236:;
    /* $8236: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_8238:;
    /* $8238: 85 */ maybe_trigger_vblank(3); nes_write(0x2C, g_cpu.A);
label_823A:;
    /* $823A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_823C:;
    /* $823C: 85 */ maybe_trigger_vblank(3); nes_write(0xC4, g_cpu.A);
label_823E:;
    /* $823E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8240:;
    /* $8240: 85 */ maybe_trigger_vblank(3); nes_write(0xC9, g_cpu.A);
label_8242:;
    /* $8242: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8243_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8243_b0");
#endif
label_8243:;
    /* $8243: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_8245:;
    /* $8245: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8262;
label_8247:;
    /* $8247: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_8249:;
    /* $8249: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_824B:;
    /* $824B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8262;
label_824D:;
    /* $824D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC4); FLAG_NZ(g_cpu.A);
label_824F:;
    /* $824F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0B; g_cpu.C=(g_cpu.A>=0x0B)?1:0; FLAG_NZ(r&0xFF); }
label_8251:;
    /* $8251: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_825F;
label_8253:;
    /* $8253: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8255:;
    /* $8255: 85 */ maybe_trigger_vblank(3); nes_write(0xC4, g_cpu.A);
label_8257:;
    /* $8257: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x30; FLAG_NZ(g_cpu.A);
label_8259:;
    /* $8259: 85 */ maybe_trigger_vblank(3); nes_write(0x2C, g_cpu.A);
label_825B:;
    /* $825B: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_825D:;
    /* $825D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8262;
label_825F:;
    /* $825F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x61; g_cpu.S--; func_8B5F_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x825F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8262:;
    /* $8262: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8263_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8263_b0");
#endif
label_8263:;
    /* $8263: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_8265:;
    /* $8265: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8282;
label_8267:;
    /* $8267: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_8269:;
    /* $8269: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_826B:;
    /* $826B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8282;
label_826D:;
    /* $826D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC4); FLAG_NZ(g_cpu.A);
label_826F:;
    /* $826F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_8271:;
    /* $8271: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_827F;
label_8273:;
    /* $8273: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_8275:;
    /* $8275: 85 */ maybe_trigger_vblank(3); nes_write(0xC4, g_cpu.A);
label_8277:;
    /* $8277: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8279:;
    /* $8279: 85 */ maybe_trigger_vblank(3); nes_write(0xCB, g_cpu.A);
label_827B:;
    /* $827B: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_827D:;
    /* $827D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8282;
label_827F:;
    /* $827F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; func_8B5F_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x827F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8282:;
    /* $8282: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8283_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8283_b0");
#endif
label_8283:;
    /* $8283: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8285:;
    /* $8285: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_8287:;
    /* $8287: 85 */ maybe_trigger_vblank(3); nes_write(0x2C, g_cpu.A);
label_8289:;
    /* $8289: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

static void func_8068_b0_body(int _entry) {
    switch (_entry) {
        case 1: goto label_806E;
    }
label_8068:;
    /* $8068: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_806A:;
    /* $806A: 85 */ maybe_trigger_vblank(3); nes_write(0xCB, g_cpu.A);
label_806C:;
    /* $806C: 85 */ maybe_trigger_vblank(3); nes_write(0xC9, g_cpu.A);
label_806E:;
    /* $806E: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8070:;
    /* $8070: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8068_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8068_b0");
#endif
    func_8068_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_806E_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_806E_b0");
#endif
    func_8068_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_82A3_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_82A3_b0");
#endif
label_82A3:;
    /* $82A3: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_82A5:;
    /* $82A5: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_82E9;
label_82A7:;
    /* $82A7: 85 */ maybe_trigger_vblank(3); nes_write(0xD2, g_cpu.A);
label_82A9:;
    /* $82A9: 85 */ maybe_trigger_vblank(3); nes_write(0xBB, g_cpu.A);
label_82AB:;
    /* $82AB: 85 */ maybe_trigger_vblank(3); nes_write(0x55, g_cpu.A);
label_82AD:;
    /* $82AD: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1F; FLAG_NZ(g_cpu.Y);
label_82AF:;
    /* $82AF: 99 */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_82B2:;
    /* $82B2: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_82B3:;
    /* $82B3: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_82AF;
    }
label_82B5:;
    /* $82B5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_82B7:;
    /* $82B7: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFC; FLAG_NZ(g_cpu.A);
label_82B9:;
    /* $82B9: 85 */ maybe_trigger_vblank(3); nes_write(0xFF, g_cpu.A);
label_82BB:;
    /* $82BB: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_82BC:;
    /* $82BC: 84 */ maybe_trigger_vblank(3); nes_write(0xB7, g_cpu.Y);
label_82BE:;
    /* $82BE: 84 */ maybe_trigger_vblank(3); nes_write(0xB8, g_cpu.Y);
label_82C0:;
    /* $82C0: 84 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.Y);
label_82C2:;
    /* $82C2: 84 */ maybe_trigger_vblank(3); nes_write(0xC2, g_cpu.Y);
label_82C4:;
    /* $82C4: 84 */ maybe_trigger_vblank(3); nes_write(0xC3, g_cpu.Y);
label_82C6:;
    /* $82C6: 84 */ maybe_trigger_vblank(3); nes_write(0xC4, g_cpu.Y);
label_82C8:;
    /* $82C8: 84 */ maybe_trigger_vblank(3); nes_write(0xCD, g_cpu.Y);
label_82CA:;
    /* $82CA: 84 */ maybe_trigger_vblank(3); nes_write(0x12, g_cpu.Y);
label_82CC:;
    /* $82CC: 84 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.Y);
label_82CE:;
    /* $82CE: 84 */ maybe_trigger_vblank(3); nes_write(0x16, g_cpu.Y);
label_82D0:;
    /* $82D0: 84 */ maybe_trigger_vblank(3); nes_write(0xD7, g_cpu.Y);
label_82D2:;
    /* $82D2: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_82D3:;
    /* $82D3: 84 */ maybe_trigger_vblank(3); nes_write(0xCE, g_cpu.Y);
label_82D5:;
    /* $82D5: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_82D6:;
    /* $82D6: 84 */ maybe_trigger_vblank(3); nes_write(0xCC, g_cpu.Y);
label_82D8:;
    /* $82D8: 84 */ maybe_trigger_vblank(3); nes_write(0xCF, g_cpu.Y);
label_82DA:;
    /* $82DA: 84 */ maybe_trigger_vblank(3); nes_write(0x1F, g_cpu.Y);
label_82DC:;
    /* $82DC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xD8); FLAG_NZ(g_cpu.A);
label_82DE:;
    /* $82DE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_82EA;
label_82E0:;
    /* $82E0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_82E2:;
    /* $82E2: 8D */ maybe_trigger_vblank(4); nes_write(0x0684, g_cpu.A);
label_82E5:;
    /* $82E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_82E7:;
    /* $82E7: 85 */ maybe_trigger_vblank(3); nes_write(0xD8, g_cpu.A);
label_82E9:;
    /* $82E9: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_82EA:;
    /* $82EA: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xD8; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_82EC:;
    /* $82EC: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_82ED_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_82ED_b0");
#endif
label_82ED:;
    /* $82ED: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xEF; g_cpu.S--; func_C439();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x82ED, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_82F0:;
    /* $82F0: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_82F2:;
    /* $82F2: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_82F3_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_82F3_b0");
#endif
label_82F3:;
    /* $82F3: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

static void func_90BA_b0_body(int _entry) {
    switch (_entry) {
        case 1: goto label_90D1;
    }
label_90BA:;
    /* $90BA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x90; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; func_909F_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x90BA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_90BD:;
    /* $90BD: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x84; FLAG_NZ(g_cpu.X);
label_90BF:;
    /* $90BF: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x99; FLAG_NZ(g_cpu.Y);
label_90C1:;
    /* $90C1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x90; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC3; g_cpu.S--; func_9449_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x90C1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_90C4:;
    /* $90C4: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_90C6:;
    /* $90C6: 8C */ maybe_trigger_vblank(4); nes_write(0x0325, g_cpu.Y);
label_90C9:;
    /* $90C9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_90CB:;
    /* $90CB: 85 */ maybe_trigger_vblank(3); nes_write(0x1C, g_cpu.A);
label_90CD:;
    /* $90CD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x16; FLAG_NZ(g_cpu.A);
label_90CF:;
    /* $90CF: 85 */ maybe_trigger_vblank(3); nes_write(0x1F, g_cpu.A);
label_90D1:;
    /* $90D1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x90; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD3; g_cpu.S--; func_C487();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x90D1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_90D4:;
    /* $90D4: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_C447(); return;
}

void func_90BA_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_90BA_b0");
#endif
    func_90BA_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_90D1_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_90D1_b0");
#endif
    func_90BA_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_90D7_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_90D7_b0");
#endif
label_90D7:;
    /* $90D7: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x12); FLAG_NZ(g_cpu.A);
label_90D9:;
    /* $90D9: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x30; FLAG_NZ(g_cpu.A);
label_90DB:;
    /* $90DB: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x10; g_cpu.C=(g_cpu.A>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_90DD:;
    /* $90DD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_90EB;
label_90DF:;
    /* $90DF: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x0325); FLAG_NZ(g_cpu.Y);
label_90E2:;
    /* $90E2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_90E7;
label_90E4:;
    /* $90E4: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_932B_b0(); return;
label_90E7:;
    /* $90E7: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x17; FLAG_NZ(g_cpu.Y);
label_90E9:;
    /* $90E9: 84 */ maybe_trigger_vblank(3); nes_write(0x1F, g_cpu.Y);
label_90EB:;
    /* $90EB: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x20; g_cpu.C=(g_cpu.A>=0x20)?1:0; FLAG_NZ(r&0xFF); }
label_90ED:;
    /* $90ED: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_90FF;
label_90EF:;
    /* $90EF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0325); FLAG_NZ(g_cpu.A);
label_90F2:;
    /* $90F2: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x01; FLAG_NZ(g_cpu.A);
label_90F4:;
    /* $90F4: 8D */ maybe_trigger_vblank(4); nes_write(0x0325, g_cpu.A);
label_90F7:;
    /* $90F7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0683); FLAG_NZ(g_cpu.A);
label_90FA:;
    /* $90FA: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x08; FLAG_NZ(g_cpu.A);
label_90FC:;
    /* $90FC: 8D */ maybe_trigger_vblank(4); nes_write(0x0683, g_cpu.A);
label_90FF:;
    /* $90FF: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x0325); FLAG_NZ(g_cpu.Y);
label_9102:;
    /* $9102: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9118 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9105:;
    /* $9105: 8D */ maybe_trigger_vblank(4); nes_write(0x0200, g_cpu.A);
label_9108:;
    /* $9108: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x6E; FLAG_NZ(g_cpu.A);
label_910A:;
    /* $910A: 8D */ maybe_trigger_vblank(4); nes_write(0x0201, g_cpu.A);
label_910D:;
    /* $910D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_910F:;
    /* $910F: 8D */ maybe_trigger_vblank(4); nes_write(0x0202, g_cpu.A);
label_9112:;
    /* $9112: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x50; FLAG_NZ(g_cpu.A);
label_9114:;
    /* $9114: 8D */ maybe_trigger_vblank(4); nes_write(0x0203, g_cpu.A);
label_9117:;
    /* $9117: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_911A_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_911A_b0");
#endif
label_911A:;
    /* $911A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x91; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1C; g_cpu.S--; func_909F_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x911A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_911D:;
    /* $911D: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xE3; FLAG_NZ(g_cpu.X);
label_911F:;
    /* $911F: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x99; FLAG_NZ(g_cpu.Y);
label_9121:;
    /* $9121: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x91; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x23; g_cpu.S--; func_9449_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9121, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9124:;
    /* $9124: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x91; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x26; g_cpu.S--; func_C6D6();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9124, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9127:;
    /* $9127: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x91; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x29; g_cpu.S--; func_940B_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9127, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_912A:;
    /* $912A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x13; FLAG_NZ(g_cpu.A);
label_912C:;
    /* $912C: 85 */ maybe_trigger_vblank(3); nes_write(0x1C, g_cpu.A);
label_912E:;
    /* $912E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9130:;
    /* $9130: 8D */ maybe_trigger_vblank(4); nes_write(0x0321, g_cpu.A);
label_9133:;
    /* $9133: 8D */ maybe_trigger_vblank(4); nes_write(0x0322, g_cpu.A);
label_9136:;
    /* $9136: 85 */ maybe_trigger_vblank(3); nes_write(0x2C, g_cpu.A);
label_9138:;
    /* $9138: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_913A:;
    /* $913A: 8D */ maybe_trigger_vblank(4); nes_write(0x0320, g_cpu.A);
label_913D:;
    /* $913D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_913F:;
    /* $913F: 8C */ maybe_trigger_vblank(4); nes_write(0x0324, g_cpu.Y);
label_9142:;
    /* $9142: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9144:;
    /* $9144: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_90D1_b0(); return;
}

static void func_9147_b0_body(int _entry) {
    switch (_entry) {
        case 1: goto label_9180;
        case 2: goto label_91FB;
        case 3: goto label_91BF;
    }
label_9147:;
    /* $9147: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x91; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x49; g_cpu.S--; func_C1A3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9147, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_914A:;
    /* $914A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x12); FLAG_NZ(g_cpu.A);
label_914C:;
    /* $914C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_914E:;
    /* $914E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9153;
label_9150:;
    /* $9150: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8C5E_b0(); return;
label_9153:;
    /* $9153: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x01; FLAG_NZ(g_cpu.X);
label_9155:;
    /* $9155: 86 */ maybe_trigger_vblank(3); nes_write(0x1B, g_cpu.X);
label_9157:;
    /* $9157: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x07A0); FLAG_NZ(g_cpu.X);
label_915A:;
    /* $915A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_915C:;
    /* $915C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x91; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x5E; g_cpu.S--; func_C36B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x915C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_915F:;
    /* $915F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA8; FLAG_NZ(g_cpu.A);
label_9161:;
    /* $9161: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x91; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x63; g_cpu.S--; func_C36B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9161, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9164:;
    /* $9164: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_9166:;
    /* $9166: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x91; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x68; g_cpu.S--; func_C36B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9166, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9169:;
    /* $9169: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_916B:;
    /* $916B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9178;
label_916D:;
    /* $916D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x59; FLAG_NZ(g_cpu.A);
label_916F:;
    /* $916F: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_9171:;
    /* $9171: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x87; FLAG_NZ(g_cpu.A);
label_9173:;
    /* $9173: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_9175:;
    /* $9175: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_9180_b0(); return;
label_9178:;
    /* $9178: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x68; FLAG_NZ(g_cpu.A);
label_917A:;
    /* $917A: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_917C:;
    /* $917C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x87; FLAG_NZ(g_cpu.A);
label_917E:;
    /* $917E: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_9180:;
    /* $9180: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_9182:;
    /* $9182: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9184:;
    /* $9184: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x91; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x86; g_cpu.S--; func_C36B();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9184, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9187:;
    /* $9187: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9188:;
    /* $9188: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x0F; g_cpu.C=(g_cpu.Y>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_918A:;
    /* $918A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9182;
    }
label_918C:;
    /* $918C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x12); FLAG_NZ(g_cpu.A);
label_918E:;
    /* $918E: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_9193;
label_9190:;
    /* $9190: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_91FB_b0(); return;
label_9193:;
    /* $9193: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0683); FLAG_NZ(g_cpu.A);
label_9196:;
    /* $9196: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x01; FLAG_NZ(g_cpu.A);
label_9198:;
    /* $9198: 8D */ maybe_trigger_vblank(4); nes_write(0x0683, g_cpu.A);
label_919B:;
    /* $919B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0320); FLAG_NZ(g_cpu.A);
label_919E:;
    /* $919E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x12; g_cpu.C=(g_cpu.A>=0x12)?1:0; FLAG_NZ(r&0xFF); }
label_91A0:;
    /* $91A0: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_91A8;
label_91A2:;
    /* $91A2: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_91A3:;
    /* $91A3: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x3E + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x3E); g_cpu.A=r&0xFF; }
label_91A5:;
    /* $91A5: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_91BF_b0(); return;
label_91A8:;
    /* $91A8: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0C; g_cpu.C=(g_cpu.A>=0x0C)?1:0; FLAG_NZ(r&0xFF); }
label_91AA:;
    /* $91AA: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_91B2;
label_91AC:;
    /* $91AC: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_91AD:;
    /* $91AD: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x3D + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x3D); g_cpu.A=r&0xFF; }
label_91AF:;
    /* $91AF: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_91BF_b0(); return;
label_91B2:;
    /* $91B2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x06; g_cpu.C=(g_cpu.A>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_91B4:;
    /* $91B4: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_91BC;
label_91B6:;
    /* $91B6: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_91B7:;
    /* $91B7: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_91B9:;
    /* $91B9: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_91BF_b0(); return;
label_91BC:;
    /* $91BC: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_91BD:;
    /* $91BD: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x09 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x09); g_cpu.A=r&0xFF; }
label_91BF:;
    /* $91BF: 85 */ maybe_trigger_vblank(3); nes_write(0x06, g_cpu.A);
label_91C1:;
    /* $91C1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0321); FLAG_NZ(g_cpu.A);
label_91C4:;
    /* $91C4: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_91C5:;
    /* $91C5: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_91C6:;
    /* $91C6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9998 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_91C9:;
    /* $91C9: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_91CB:;
    /* $91CB: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9999 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_91CE:;
    /* $91CE: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_91D0:;
    /* $91D0: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x0322); FLAG_NZ(g_cpu.Y);
label_91D3:;
    /* $91D3: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_91D5:;
    /* $91D5: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_91D6:;
    /* $91D6: 8D */ maybe_trigger_vblank(4); nes_write(0x0781, g_cpu.A);
label_91D9:;
    /* $91D9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x11; FLAG_NZ(g_cpu.A);
label_91DB:;
    /* $91DB: 8D */ maybe_trigger_vblank(4); nes_write(0x0780, g_cpu.A);
label_91DE:;
    /* $91DE: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x06); FLAG_NZ(g_cpu.X);
label_91E0:;
    /* $91E0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x21; FLAG_NZ(g_cpu.Y);
label_91E2:;
    /* $91E2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x91; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE4; g_cpu.S--; func_9450_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x91E2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_91E5:;
    /* $91E5: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0320); FLAG_NZ(g_cpu.X);
label_91E8:;
    /* $91E8: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_91E9:;
    /* $91E9: 9D */ maybe_trigger_vblank(5); nes_write((0x699A + g_cpu.X) & 0xFFFF, g_cpu.A);
label_91EC:;
    /* $91EC: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0320); FLAG_NZ(g_cpu.A);
label_91EF:;
    /* $91EF: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_91F0:;
    /* $91F0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_91F2:;
    /* $91F2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x18; g_cpu.C=(g_cpu.A>=0x18)?1:0; FLAG_NZ(r&0xFF); }
label_91F4:;
    /* $91F4: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_91F8;
label_91F6:;
    /* $91F6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_91F8:;
    /* $91F8: 8D */ maybe_trigger_vblank(4); nes_write(0x0320, g_cpu.A);
label_91FB:;
    /* $91FB: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x12); FLAG_NZ(g_cpu.A);
label_91FD:;
    /* $91FD: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x40; FLAG_NZ(g_cpu.A);
label_91FF:;
    /* $91FF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_920E;
label_9201:;
    /* $9201: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0320); FLAG_NZ(g_cpu.A);
label_9204:;
    /* $9204: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_9205:;
    /* $9205: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9207:;
    /* $9207: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_920B;
label_9209:;
    /* $9209: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x17; FLAG_NZ(g_cpu.A);
label_920B:;
    /* $920B: 8D */ maybe_trigger_vblank(4); nes_write(0x0320, g_cpu.A);
label_920E:;
    /* $920E: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x0324); FLAG_NZ(g_cpu.Y);
label_9211:;
    /* $9211: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_9213:;
    /* $9213: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A);
label_9215:;
    /* $9215: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_923F;
label_9217:;
    /* $9217: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3F; FLAG_NZ(g_cpu.A);
label_9219:;
    /* $9219: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0320); FLAG_NZ(g_cpu.X);
label_921C:;
    /* $921C: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x0C; g_cpu.C=(g_cpu.X>=0x0C)?1:0; FLAG_NZ(r&0xFF); }
label_921E:;
    /* $921E: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_9222;
label_9220:;
    /* $9220: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x4F; FLAG_NZ(g_cpu.A);
label_9222:;
    /* $9222: 8D */ maybe_trigger_vblank(4); nes_write(0x0204, g_cpu.A);
label_9225:;
    /* $9225: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x6E; FLAG_NZ(g_cpu.A);
label_9227:;
    /* $9227: 8D */ maybe_trigger_vblank(4); nes_write(0x0205, g_cpu.A);
label_922A:;
    /* $922A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_922C:;
    /* $922C: 8D */ maybe_trigger_vblank(4); nes_write(0x0206, g_cpu.A);
label_922F:;
    /* $922F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0320); FLAG_NZ(g_cpu.A);
label_9232:;
    /* $9232: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0C; g_cpu.C=(g_cpu.A>=0x0C)?1:0; FLAG_NZ(r&0xFF); }
label_9234:;
    /* $9234: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_9238;
label_9236:;
    /* $9236: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x0C; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9238:;
    /* $9238: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_9239:;
    /* $9239: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x92C8 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_923C:;
    /* $923C: 8D */ maybe_trigger_vblank(4); nes_write(0x0207, g_cpu.A);
label_923F:;
    /* $923F: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0321); FLAG_NZ(g_cpu.X);
label_9242:;
    /* $9242: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x0322); FLAG_NZ(g_cpu.Y);
label_9245:;
    /* $9245: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x16); FLAG_NZ(g_cpu.A);
label_9247:;
    /* $9247: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_9249:;
    /* $9249: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9297;
label_924B:;
    /* $924B: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_924C:;
    /* $924C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0683); FLAG_NZ(g_cpu.A);
label_924F:;
    /* $924F: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x08; FLAG_NZ(g_cpu.A);
label_9251:;
    /* $9251: 8D */ maybe_trigger_vblank(4); nes_write(0x0683, g_cpu.A);
label_9254:;
    /* $9254: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9255:;
    /* $9255: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9256:;
    /* $9256: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_926C;
label_9258:;
    /* $9258: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9259:;
    /* $9259: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x0D; g_cpu.C=(g_cpu.Y>=0x0D)?1:0; FLAG_NZ(r&0xFF); }
label_925B:;
    /* $925B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9269;
label_925D:;
    /* $925D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_925E:;
    /* $925E: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x05; g_cpu.C=(g_cpu.X>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_9260:;
    /* $9260: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9264;
label_9262:;
    /* $9262: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_9264:;
    /* $9264: 8E */ maybe_trigger_vblank(4); nes_write(0x0321, g_cpu.X);
label_9267:;
    /* $9267: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_9269:;
    /* $9269: 8C */ maybe_trigger_vblank(4); nes_write(0x0322, g_cpu.Y);
label_926C:;
    /* $926C: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_926D:;
    /* $926D: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_927F;
label_926F:;
    /* $926F: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9270:;
    /* $9270: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_927C;
label_9272:;
    /* $9272: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_9273:;
    /* $9273: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_9277;
label_9275:;
    /* $9275: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_9277:;
    /* $9277: 8E */ maybe_trigger_vblank(4); nes_write(0x0321, g_cpu.X);
label_927A:;
    /* $927A: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0C; FLAG_NZ(g_cpu.Y);
label_927C:;
    /* $927C: 8C */ maybe_trigger_vblank(4); nes_write(0x0322, g_cpu.Y);
label_927F:;
    /* $927F: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9280:;
    /* $9280: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_928C;
label_9282:;
    /* $9282: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9283:;
    /* $9283: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x05; g_cpu.C=(g_cpu.X>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_9285:;
    /* $9285: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9289;
label_9287:;
    /* $9287: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_9289:;
    /* $9289: 8E */ maybe_trigger_vblank(4); nes_write(0x0321, g_cpu.X);
label_928C:;
    /* $928C: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_928D:;
    /* $928D: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_9297;
label_928F:;
    /* $928F: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_9290:;
    /* $9290: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_9294;
label_9292:;
    /* $9292: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_9294:;
    /* $9294: 8E */ maybe_trigger_vblank(4); nes_write(0x0321, g_cpu.X);
label_9297:;
    /* $9297: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_9299:;
    /* $9299: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A);
label_929B:;
    /* $929B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_92B3;
label_929D:;
    /* $929D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x92B6 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_92A0:;
    /* $92A0: 8D */ maybe_trigger_vblank(4); nes_write(0x0208, g_cpu.A);
label_92A3:;
    /* $92A3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x6E; FLAG_NZ(g_cpu.A);
label_92A5:;
    /* $92A5: 8D */ maybe_trigger_vblank(4); nes_write(0x0209, g_cpu.A);
label_92A8:;
    /* $92A8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_92AA:;
    /* $92AA: 8D */ maybe_trigger_vblank(4); nes_write(0x020A, g_cpu.A);
label_92AD:;
    /* $92AD: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x92BB + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_92B0:;
    /* $92B0: 8D */ maybe_trigger_vblank(4); nes_write(0x020B, g_cpu.A);
label_92B3:;
    /* $92B3: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9147_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9147_b0");
#endif
    func_9147_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9180_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9180_b0");
#endif
    func_9147_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_91FB_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_91FB_b0");
#endif
    func_9147_b0_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_91BF_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_91BF_b0");
#endif
    func_9147_b0_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9359_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9359_b0");
#endif
label_9359:;
    /* $9359: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_935B:;
    /* $935B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0x9324); return; }
label_935D:;
    /* $935D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x5F; g_cpu.S--; func_909F_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x935D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9360:;
    /* $9360: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x7F; FLAG_NZ(g_cpu.X);
label_9362:;
    /* $9362: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x93; FLAG_NZ(g_cpu.Y);
label_9364:;
    /* $9364: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x66; g_cpu.S--; func_9449_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9364, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9367:;
    /* $9367: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x69; g_cpu.S--; func_C6D6();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9367, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_936A:;
    /* $936A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6C; g_cpu.S--; func_8C7A_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x936A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_936D:;
    /* $936D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6F; g_cpu.S--; func_C487();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x936D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9370:;
    /* $9370: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x72; g_cpu.S--; func_93C6_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9370, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9373:;
    /* $9373: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x75; g_cpu.S--; func_C42C();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9373, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9376:;
    /* $9376: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x13; FLAG_NZ(g_cpu.A);
label_9378:;
    /* $9378: 85 */ maybe_trigger_vblank(3); nes_write(0x1C, g_cpu.A);
label_937A:;
    /* $937A: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_937C:;
    /* $937C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_C447(); return;
}

void func_9394_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9394_b0");
#endif
label_9394:;
    /* $9394: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x12); FLAG_NZ(g_cpu.A);
label_9396:;
    /* $9396: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_9398:;
    /* $9398: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_939D;
label_939A:;
    /* $939A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8C5E_b0(); return;
label_939D:;
    /* $939D: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_939E_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_939E_b0");
#endif
label_939E:;
    /* $939E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA0; g_cpu.S--; func_909F_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x939E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_93A1:;
    /* $93A1: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xB9; FLAG_NZ(g_cpu.X);
label_93A3:;
    /* $93A3: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x93; FLAG_NZ(g_cpu.Y);
label_93A5:;
    /* $93A5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA7; g_cpu.S--; func_9449_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x93A5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_93A8:;
    /* $93A8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAA; g_cpu.S--; func_C6D6();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x93A8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_93AB:;
    /* $93AB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAD; g_cpu.S--; func_C487();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x93AB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_93AE:;
    /* $93AE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_93B0:;
    /* $93B0: 85 */ maybe_trigger_vblank(3); nes_write(0x2C, g_cpu.A);
label_93B2:;
    /* $93B2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x19; FLAG_NZ(g_cpu.A);
label_93B4:;
    /* $93B4: 85 */ maybe_trigger_vblank(3); nes_write(0x1F, g_cpu.A);
label_93B6:;
    /* $93B6: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_C447(); return;
}

void func_9AA7_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9AA7_b0");
#endif
label_9AA7:;
    /* $9AA7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA9; g_cpu.S--; func_9EAA_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9AA7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9AAA:;
    /* $9AAA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x7B); FLAG_NZ(g_cpu.A);
label_9AAC:;
    /* $9AAC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9AC0;
label_9AAE:;
    /* $9AAE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_9AB0:;
    /* $9AB0: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_9AB2:;
    /* $9AB2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9AC0;
label_9AB4:;
    /* $9AB4: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1C; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9AB6:;
    /* $9AB6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1C); FLAG_NZ(g_cpu.A);
label_9AB8:;
    /* $9AB8: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_9ABA:;
    /* $9ABA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9AC0;
label_9ABC:;
    /* $9ABC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9ABE:;
    /* $9ABE: 85 */ maybe_trigger_vblank(3); nes_write(0x1C, g_cpu.A);
label_9AC0:;
    /* $9AC0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x33); FLAG_NZ(g_cpu.A);
label_9AC2:;
    /* $9AC2: 20 */ maybe_trigger_vblank(6); /* inline_dispatch $C27C: 9 entries (bank=0) */
switch(g_cpu.A) {
  case 0: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xD5); nes_write(0x000D, 0x9A); g_cpu.A = 0x9A; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_9AD5_b0(); return;
  case 1: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x1C); nes_write(0x000D, 0x9B); g_cpu.A = 0x9B; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_9B1C_b0(); return;
  case 2: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x34); nes_write(0x000D, 0x9B); g_cpu.A = 0x9B; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_9B34_b0(); return;
  case 3: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x93); nes_write(0x000D, 0x9B); g_cpu.A = 0x9B; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_9B93_b0(); return;
  case 4: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xCD); nes_write(0x000D, 0x9B); g_cpu.A = 0x9B; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_9BCD_b0(); return;
  case 5: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xFC); nes_write(0x000D, 0x9B); g_cpu.A = 0x9B; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_9BFC_b0(); return;
  case 6: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x39); nes_write(0x000D, 0x9A); g_cpu.A = 0x9A; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_9A39_b0(); return;
  case 7: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x5C); nes_write(0x000D, 0xC4); g_cpu.A = 0xC4; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_C45C(); return;
  case 8: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x20); nes_write(0x000D, 0x9F); g_cpu.A = 0x9F; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_9F20_b0(); return;
  default: nes_log_inline_miss(0x9AC2, g_cpu.A); return;
}
label_9AD7:;
    /* $9AD7: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_9AF9;
label_9AD9:;
    /* $9AD9: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0x9AA0); return; }
label_9ADB:;
    /* $9ADB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_9ADD:;
    /* $9ADD: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x69B3); FLAG_NZ(g_cpu.Y);
label_9AE0:;
    /* $9AE0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9AE4;
label_9AE2:;
    /* $9AE2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9AE4:;
    /* $9AE4: 8D */ maybe_trigger_vblank(4); nes_write(0x6872, g_cpu.A);
label_9AE7:;
    /* $9AE7: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9AE8:;
    /* $9AE8: 85 */ maybe_trigger_vblank(3); nes_write(0x7D, g_cpu.A);
label_9AEA:;
    /* $9AEA: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x52; FLAG_NZ(g_cpu.X);
label_9AEC:;
    /* $9AEC: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_9AEE:;
    /* $9AEE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; func_C20E();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9AEE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9AF1:;
    /* $9AF1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF3; g_cpu.S--; func_C487();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9AF1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9AF4:;
    /* $9AF4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_9AF6:;
    /* $9AF6: 8D */ maybe_trigger_vblank(4); nes_write(0x0684, g_cpu.A);
label_9AF9:;
    /* $9AF9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x38; FLAG_NZ(g_cpu.A);
label_9AFB:;
    /* $9AFB: 85 */ maybe_trigger_vblank(3); nes_write(0x2C, g_cpu.A);
label_9AFD:;
    /* $9AFD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x36; FLAG_NZ(g_cpu.A);
label_9AFF:;
    /* $9AFF: 85 */ maybe_trigger_vblank(3); nes_write(0x7C, g_cpu.A);
label_9B01:;
    /* $9B01: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9B03:;
    /* $9B03: 85 */ maybe_trigger_vblank(3); nes_write(0x7E, g_cpu.A);
label_9B05:;
    /* $9B05: 85 */ maybe_trigger_vblank(3); nes_write(0x7F, g_cpu.A);
label_9B07:;
    /* $9B07: 85 */ maybe_trigger_vblank(3); nes_write(0x7B, g_cpu.A);
label_9B09:;
    /* $9B09: 85 */ maybe_trigger_vblank(3); nes_write(0x7A, g_cpu.A);
label_9B0B:;
    /* $9B0B: 85 */ maybe_trigger_vblank(3); nes_write(0x81, g_cpu.A);
label_9B0D:;
    /* $9B0D: 85 */ maybe_trigger_vblank(3); nes_write(0x80, g_cpu.A);
label_9B0F:;
    /* $9B0F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9B11:;
    /* $9B11: 85 */ maybe_trigger_vblank(3); nes_write(0x1C, g_cpu.A);
label_9B13:;
    /* $9B13: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_9B15:;
    /* $9B15: 85 */ maybe_trigger_vblank(3); nes_write(0x82, g_cpu.A);
label_9B17:;
    /* $9B17: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x33; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9B19:;
    /* $9B19: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_C447(); return;
}

void func_8058_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8058_b0");
#endif
label_8058:;
    /* $8058: 1A */ maybe_trigger_vblank(2); /* NOP */
label_8059:;
    /* $8059: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x47) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_805B:;
    /* $805B: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x59) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_805D:;
    /* $805D: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_805F:;
    /* $805F: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_8061:;
    /* $8061: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { call_by_address(0x8001); return; }
label_8063:;
    /* $8063: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_8065:;
    /* $8065: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_8066:;
    /* $8066: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8067:;
    /* $8067: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA9); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8069:;
    /* $8069: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8069); return;
}

void func_B3BF_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3BF_b0");
#endif
label_B3BF:;
    /* $B3BF: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0602; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B3C2:;
    /* $B3C2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC4; g_cpu.S--; func_B46E_b0();
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

void func_B398_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B398_b0");
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

static void func_B4ED_b0_body(int _entry) {
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

void func_B4ED_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4ED_b0");
#endif
    func_B4ED_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B51A_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B51A_b0");
#endif
    func_B4ED_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B503_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B503_b0");
#endif
    func_B4ED_b0_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B51E_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B51E_b0");
#endif
    func_B4ED_b0_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BC83_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC83_b0");
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

void func_BC94_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC94_b0");
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

void func_B367_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B367_b0");
#endif
label_B367:;
    /* $B367: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x69; g_cpu.S--; func_B4ED_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB367, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B36A:;
    /* $B36A: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16zp(0xE2); maybe_trigger_vblank(2); call_by_address(_jt); return; }
}

void func_98AE_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_98AE_b0");
#endif
label_98AE:;
    /* $98AE: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x9F; FLAG_NZ(g_cpu.Y);
label_98B0:;
    /* $98B0: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6E00 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_98B3:;
    /* $98B3: 99 */ maybe_trigger_vblank(5); nes_write((0x0260 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_98B6:;
    /* $98B6: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_98B7:;
    /* $98B7: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0xFF; g_cpu.C=(g_cpu.Y>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_98B9:;
    /* $98B9: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_98B0;
    }
label_98BB:;
    /* $98BB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_98BD:;
    /* $98BD: 85 */ maybe_trigger_vblank(3); nes_write(0xC8, g_cpu.A);
label_98BF:;
    /* $98BF: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8A8C_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A8C_b0");
#endif
label_8A8C:;
    /* $8A8C: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xC1); FLAG_NZ(g_cpu.Y);
label_8A8E:;
    /* $8A8E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8A9A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8A91:;
    /* $8A91: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_8A93:;
    /* $8A93: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8A99;
label_8A95:;
    /* $8A95: 85 */ maybe_trigger_vblank(3); nes_write(0x1C, g_cpu.A);
label_8A97:;
    /* $8A97: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xC1; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8A99:;
    /* $8A99: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_87AB_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_87AB_b0");
#endif
label_87AB:;
    /* $87AB: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x0A; FLAG_NZ(g_cpu.X);
label_87AD:;
    /* $87AD: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x87C4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_87B0:;
    /* $87B0: 9D */ maybe_trigger_vblank(5); nes_write((0x6EA0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_87B3:;
    /* $87B3: 9D */ maybe_trigger_vblank(5); nes_write((0x6EB0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_87B6:;
    /* $87B6: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_87B7:;
    /* $87B7: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_87AD;
    }
label_87B9:;
    /* $87B9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x6B; FLAG_NZ(g_cpu.A);
label_87BB:;
    /* $87BB: 8D */ maybe_trigger_vblank(4); nes_write(0x6EB0, g_cpu.A);
label_87BE:;
    /* $87BE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xDC; FLAG_NZ(g_cpu.A);
label_87C0:;
    /* $87C0: 8D */ maybe_trigger_vblank(4); nes_write(0x6EB3, g_cpu.A);
label_87C3:;
    /* $87C3: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

static void func_87CF_b0_body(int _entry) {
    switch (_entry) {
        case 1: goto label_87D6;
        case 2: goto label_87D9;
    }
label_87CF:;
    /* $87CF: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_87D1:;
    /* $87D1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x87; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD3; g_cpu.S--; func_87D6_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x87D1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_87D4:;
    /* $87D4: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x10; FLAG_NZ(g_cpu.X);
label_87D6:;
    /* $87D6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x87; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD8; g_cpu.S--; func_87D9_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x87D6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_87D9:;
    /* $87D9: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6EA5 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_87DC:;
    /* $87DC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_87E1;
label_87DE:;
    /* $87DE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x87; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE0; g_cpu.S--; func_881A_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x87DE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_87E1:;
    /* $87E1: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6EAA + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_87E4:;
    /* $87E4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8819;
label_87E6:;
    /* $87E6: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x6EA5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_87E9:;
    /* $87E9: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6EA6 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_87EC:;
    /* $87EC: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_87ED:;
    /* $87ED: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x6EA0 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_87F0:;
    /* $87F0: 9D */ maybe_trigger_vblank(5); nes_write((0x6EA0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_87F3:;
    /* $87F3: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6EA7 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_87F6:;
    /* $87F6: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_87F7:;
    /* $87F7: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x6EA3 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_87FA:;
    /* $87FA: 9D */ maybe_trigger_vblank(5); nes_write((0x6EA3 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_87FD:;
    /* $87FD: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x6EA8 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8800:;
    /* $8800: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8816;
label_8802:;
    /* $8802: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6EA1 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8805:;
    /* $8805: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x03; FLAG_NZ(g_cpu.A);
label_8807:;
    /* $8807: 9D */ maybe_trigger_vblank(5); nes_write((0x6EA1 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_880A:;
    /* $880A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_880C:;
    /* $880C: 9D */ maybe_trigger_vblank(5); nes_write((0x6EA8 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_880F:;
    /* $880F: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8810:;
    /* $8810: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x6EA2 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8813:;
    /* $8813: 9D */ maybe_trigger_vblank(5); nes_write((0x6EA2 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8816:;
    /* $8816: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_887B_b0(); return;
label_8819:;
    /* $8819: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_87CF_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_87CF_b0");
#endif
    func_87CF_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_87D6_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_87D6_b0");
#endif
    func_87CF_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_87D9_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_87D9_b0");
#endif
    func_87CF_b0_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8897_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8897_b0");
#endif
label_8897:;
    /* $8897: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_8899:;
    /* $8899: 85 */ maybe_trigger_vblank(3); nes_write(0xBD, g_cpu.A);
label_889B:;
    /* $889B: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x3F; FLAG_NZ(g_cpu.X);
label_889D:;
    /* $889D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x88BE + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_88A0:;
    /* $88A0: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_88A2:;
    /* $88A2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_88AA;
label_88A4:;
    /* $88A4: 9D */ maybe_trigger_vblank(5); nes_write((0x6EA0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_88A7:;
    /* $88A7: 9D */ maybe_trigger_vblank(5); nes_write((0x6EE0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_88AA:;
    /* $88AA: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_88AB:;
    /* $88AB: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_889D;
    }
label_88AD:;
    /* $88AD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB8; FLAG_NZ(g_cpu.A);
label_88AF:;
    /* $88AF: 8D */ maybe_trigger_vblank(4); nes_write(0x6F00, g_cpu.A);
label_88B2:;
    /* $88B2: 8D */ maybe_trigger_vblank(4); nes_write(0x6F10, g_cpu.A);
label_88B5:;
    /* $88B5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x16; FLAG_NZ(g_cpu.A);
label_88B7:;
    /* $88B7: 8D */ maybe_trigger_vblank(4); nes_write(0x6F0D, g_cpu.A);
label_88BA:;
    /* $88BA: 8D */ maybe_trigger_vblank(4); nes_write(0x6F1D, g_cpu.A);
label_88BD:;
    /* $88BD: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8B5F_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8B5F_b0");
#endif
label_8B5F:;
    /* $8B5F: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xC4); FLAG_NZ(g_cpu.Y);
label_8B61:;
    /* $8B61: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8B6D + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8B64:;
    /* $8B64: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_8B66:;
    /* $8B66: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8B6C;
label_8B68:;
    /* $8B68: 85 */ maybe_trigger_vblank(3); nes_write(0x1C, g_cpu.A);
label_8B6A:;
    /* $8B6A: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xC4; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8B6C:;
    /* $8B6C: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8AA7_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8AA7_b0");
#endif
label_8AA7:;
    /* $8AA7: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xC2); FLAG_NZ(g_cpu.Y);
label_8AA9:;
    /* $8AA9: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8ABD + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8AAC:;
    /* $8AAC: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_8AAE:;
    /* $8AAE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8AB8;
label_8AB0:;
    /* $8AB0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8AB2:;
    /* $8AB2: 85 */ maybe_trigger_vblank(3); nes_write(0xC2, g_cpu.A);
label_8AB4:;
    /* $8AB4: 85 */ maybe_trigger_vblank(3); nes_write(0xC0, g_cpu.A);
label_8AB6:;
    /* $8AB6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8ABC;
label_8AB8:;
    /* $8AB8: 85 */ maybe_trigger_vblank(3); nes_write(0x1C, g_cpu.A);
label_8ABA:;
    /* $8ABA: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xC2; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8ABC:;
    /* $8ABC: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

static void func_88FE_b0_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8963;
    }
label_88FE:;
    /* $88FE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xBC); FLAG_NZ(g_cpu.A);
label_8900:;
    /* $8900: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8936;
label_8902:;
    /* $8902: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xBC; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8904:;
    /* $8904: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8936;
label_8906:;
    /* $8906: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x6EAC; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8909:;
    /* $8909: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x6EAD; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_890C:;
    /* $890C: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x6EBC; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_890F:;
    /* $890F: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x6EBD; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8912:;
    /* $8912: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x6ECC; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8915:;
    /* $8915: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x6ECD; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8918:;
    /* $8918: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x6EDC; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_891B:;
    /* $891B: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x6EDD; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_891E:;
    /* $891E: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x6EEC; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8921:;
    /* $8921: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x6EED; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8924:;
    /* $8924: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x6EFC; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8927:;
    /* $8927: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x6EFD; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_892A:;
    /* $892A: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x6F0C; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_892D:;
    /* $892D: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x6F0D; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8930:;
    /* $8930: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x6F1C; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8933:;
    /* $8933: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x6F1D; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8936:;
    /* $8936: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_8938:;
    /* $8938: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x89; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3A; g_cpu.S--; func_8963_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8938, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_893B:;
    /* $893B: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x10; FLAG_NZ(g_cpu.X);
label_893D:;
    /* $893D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x89; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3F; g_cpu.S--; func_8963_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x893D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8940:;
    /* $8940: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x20; FLAG_NZ(g_cpu.X);
label_8942:;
    /* $8942: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x89; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x44; g_cpu.S--; func_8963_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8942, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8945:;
    /* $8945: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x30; FLAG_NZ(g_cpu.X);
label_8947:;
    /* $8947: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xBD); FLAG_NZ(g_cpu.A);
label_8949:;
    /* $8949: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_894F;
label_894B:;
    /* $894B: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xBD; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_894D:;
    /* $894D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8963;
label_894F:;
    /* $894F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x89; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x51; g_cpu.S--; func_8963_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x894F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8952:;
    /* $8952: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x40; FLAG_NZ(g_cpu.X);
label_8954:;
    /* $8954: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x89; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x56; g_cpu.S--; func_8963_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8954, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8957:;
    /* $8957: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x50; FLAG_NZ(g_cpu.X);
label_8959:;
    /* $8959: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x89; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x5B; g_cpu.S--; func_8963_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8959, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_895C:;
    /* $895C: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x60; FLAG_NZ(g_cpu.X);
label_895E:;
    /* $895E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x89; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x60; g_cpu.S--; func_8963_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x895E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8961:;
    /* $8961: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x70; FLAG_NZ(g_cpu.X);
label_8963:;
    /* $8963: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6EAA + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8966:;
    /* $8966: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8975;
label_8968:;
    /* $8968: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x89; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6A; g_cpu.S--; func_981E_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8968, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_896B:;
    /* $896B: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8972;
label_896D:;
    /* $896D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_896F:;
    /* $896F: 9D */ maybe_trigger_vblank(5); nes_write((0x6EAA + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8972:;
    /* $8972: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_887B_b0(); return;
label_8975:;
    /* $8975: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_88FE_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_88FE_b0");
#endif
    func_88FE_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8963_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8963_b0");
#endif
    func_88FE_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8976_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8976_b0");
#endif
label_8976:;
    /* $8976: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC7); FLAG_NZ(g_cpu.A);
label_8978:;
    /* $8978: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_89A9;
label_897A:;
    /* $897A: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xC6); FLAG_NZ(g_cpu.Y);
label_897C:;
    /* $897C: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x04; g_cpu.C=(g_cpu.Y>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_897E:;
    /* $897E: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_8986;
label_8980:;
    /* $8980: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_89A9;
label_8982:;
    /* $8982: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8984:;
    /* $8984: 85 */ maybe_trigger_vblank(3); nes_write(0xC7, g_cpu.A);
label_8986:;
    /* $8986: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x89AA + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8989:;
    /* $8989: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_898B:;
    /* $898B: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_898D:;
    /* $898D: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x8A4B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_8990:;
    /* $8990: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8991:;
    /* $8991: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8A4B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8994:;
    /* $8994: 9D */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8997:;
    /* $8997: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8998:;
    /* $8998: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8999:;
    /* $8999: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_899A:;
    /* $899A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_899C:;
    /* $899C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8991;
    }
label_899E:;
    /* $899E: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_89A0:;
    /* $89A0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_898D;
    }
label_89A2:;
    /* $89A2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_89A4:;
    /* $89A4: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_89A5:;
    /* $89A5: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_89A9;
label_89A7:;
    /* $89A7: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xC6; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_89A9:;
    /* $89A9: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_909F_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_909F_b0");
#endif
label_909F:;
    /* $909F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x90; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA1; g_cpu.S--; func_C439();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x909F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_90A2:;
    /* $90A2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x90; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA4; g_cpu.S--; func_C158();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x90A2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_90A5:;
    /* $90A5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x90; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA7; g_cpu.S--; func_C1A3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x90A5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_90A8:;
    /* $90A8: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_90AA:;
    /* $90AA: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFC; FLAG_NZ(g_cpu.A);
label_90AC:;
    /* $90AC: 85 */ maybe_trigger_vblank(3); nes_write(0xFF, g_cpu.A);
label_90AE:;
    /* $90AE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_90B0:;
    /* $90B0: 85 */ maybe_trigger_vblank(3); nes_write(0xFC, g_cpu.A);
label_90B2:;
    /* $90B2: 85 */ maybe_trigger_vblank(3); nes_write(0xFD, g_cpu.A);
label_90B4:;
    /* $90B4: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x90; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; func_C42C();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x90B4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_90B7:;
    /* $90B7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_C47D(); return;
}

void func_9449_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9449_b0");
#endif
label_9449:;
    /* $9449: 86 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.X);
label_944B:;
    /* $944B: 84 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.Y);
label_944D:;
    /* $944D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_C30C(); return;
}

void func_932B_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_932B_b0");
#endif
label_932B:;
    /* $932B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_932D:;
    /* $932D: 8D */ maybe_trigger_vblank(4); nes_write(0x6876, g_cpu.A);
label_9330:;
    /* $9330: 8D */ maybe_trigger_vblank(4); nes_write(0x6877, g_cpu.A);
label_9333:;
    /* $9333: 8D */ maybe_trigger_vblank(4); nes_write(0x6878, g_cpu.A);
label_9336:;
    /* $9336: 8D */ maybe_trigger_vblank(4); nes_write(0x6879, g_cpu.A);
label_9339:;
    /* $9339: 8D */ maybe_trigger_vblank(4); nes_write(0x687A, g_cpu.A);
label_933C:;
    /* $933C: 8D */ maybe_trigger_vblank(4); nes_write(0x687B, g_cpu.A);
label_933F:;
    /* $933F: 8D */ maybe_trigger_vblank(4); nes_write(0x687C, g_cpu.A);
label_9342:;
    /* $9342: 8D */ maybe_trigger_vblank(4); nes_write(0x687D, g_cpu.A);
label_9345:;
    /* $9345: 8D */ maybe_trigger_vblank(4); nes_write(0x687E, g_cpu.A);
label_9348:;
    /* $9348: 8D */ maybe_trigger_vblank(4); nes_write(0x687F, g_cpu.A);
label_934B:;
    /* $934B: 8D */ maybe_trigger_vblank(4); nes_write(0x6880, g_cpu.A);
label_934E:;
    /* $934E: 8D */ maybe_trigger_vblank(4); nes_write(0x6883, g_cpu.A);
label_9351:;
    /* $9351: 8D */ maybe_trigger_vblank(4); nes_write(0x69B3, g_cpu.A);
label_9354:;
    /* $9354: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_9356:;
    /* $9356: 85 */ maybe_trigger_vblank(3); nes_write(0x24, g_cpu.A);
label_9358:;
    /* $9358: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_940B_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_940B_b0");
#endif
label_940B:;
    /* $940B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_940E:;
    /* $940E: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_9410:;
    /* $9410: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_9411:;
    /* $9411: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_9413:;
    /* $9413: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_9415:;
    /* $9415: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9416:;
    /* $9416: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_9417:;
    /* $9417: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x943F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_941A:;
    /* $941A: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_941D:;
    /* $941D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9440 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9420:;
    /* $9420: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_9423:;
    /* $9423: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_9425:;
    /* $9425: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x99A2 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9428:;
    /* $9428: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_942B:;
    /* $942B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_942D:;
    /* $942D: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_9430:;
    /* $9430: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9431:;
    /* $9431: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9432:;
    /* $9432: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x0D; g_cpu.C=(g_cpu.X>=0x0D)?1:0; FLAG_NZ(r&0xFF); }
label_9434:;
    /* $9434: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9425;
    }
label_9436:;
    /* $9436: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9438:;
    /* $9438: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_943A:;
    /* $943A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_943C:;
    /* $943C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9415;
    }
label_943E:;
    /* $943E: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8C5E_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C5E_b0");
#endif
label_8C5E:;
    /* $8C5E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x60; g_cpu.S--; func_8F60_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8C5E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8C61:;
    /* $8C61: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x63; g_cpu.S--; func_8DDE_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8C61, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8C64:;
    /* $8C64: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8C69;
label_8C66:;
    /* $8C66: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_92D4_b0(); return;
label_8C69:;
    /* $8C69: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0684); FLAG_NZ(g_cpu.A);
label_8C6C:;
    /* $8C6C: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x01; FLAG_NZ(g_cpu.A);
label_8C6E:;
    /* $8C6E: 8D */ maybe_trigger_vblank(4); nes_write(0x0684, g_cpu.A);
label_8C71:;
    /* $8C71: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_8C73:;
    /* $8C73: 85 */ maybe_trigger_vblank(3); nes_write(0x2C, g_cpu.A);
label_8C75:;
    /* $8C75: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x18; FLAG_NZ(g_cpu.A);
label_8C77:;
    /* $8C77: 85 */ maybe_trigger_vblank(3); nes_write(0x1F, g_cpu.A);
label_8C79:;
    /* $8C79: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9450_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9450_b0");
#endif
label_9450:;
    /* $9450: 86 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.X);
label_9452:;
    /* $9452: 84 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.Y);
label_9454:;
    /* $9454: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x80; FLAG_NZ(g_cpu.X);
label_9456:;
    /* $9456: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x07; FLAG_NZ(g_cpu.Y);
label_9458:;
    /* $9458: 86 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.X);
label_945A:;
    /* $945A: 84 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.Y);
label_945C:;
    /* $945C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_C328(); return;
}

void func_9324_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9324_b0");
#endif
label_9324:;
    /* $9324: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8C7A_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C7A_b0");
#endif
label_8C7A:;
    /* $8C7A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8C7C:;
    /* $8C7C: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0F; FLAG_NZ(g_cpu.Y);
label_8C7E:;
    /* $8C7E: 99 */ maybe_trigger_vblank(5); nes_write((0x6988 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8C81:;
    /* $8C81: 99 */ maybe_trigger_vblank(5); nes_write((0x699A + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8C84:;
    /* $8C84: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8C85:;
    /* $8C85: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8C7E;
    }
label_8C87:;
    /* $8C87: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x89; g_cpu.S--; func_8B79_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8C87, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8C8A:;
    /* $8C8A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x698F); FLAG_NZ(g_cpu.A);
label_8C8D:;
    /* $8C8D: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A);
label_8C8F:;
    /* $8C8F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8C9E;
label_8C91:;
    /* $8C91: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8C93:;
    /* $8C93: 8D */ maybe_trigger_vblank(4); nes_write(0x698F, g_cpu.A);
label_8C96:;
    /* $8C96: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x698E); FLAG_NZ(g_cpu.A);
label_8C99:;
    /* $8C99: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_8C9B:;
    /* $8C9B: 8D */ maybe_trigger_vblank(4); nes_write(0x698E, g_cpu.A);
label_8C9E:;
    /* $8C9E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x74); FLAG_NZ(g_cpu.A);
label_8CA0:;
    /* $8CA0: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x3F; FLAG_NZ(g_cpu.A);
label_8CA2:;
    /* $8CA2: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x69B3); FLAG_NZ(g_cpu.Y);
label_8CA5:;
    /* $8CA5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8CA9;
label_8CA7:;
    /* $8CA7: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_8CA9:;
    /* $8CA9: 8D */ maybe_trigger_vblank(4); nes_write(0x6990, g_cpu.A);
label_8CAC:;
    /* $8CAC: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x6878); FLAG_NZ(g_cpu.A);
label_8CAF:;
    /* $8CAF: 8D */ maybe_trigger_vblank(4); nes_write(0x6991, g_cpu.A);
label_8CB2:;
    /* $8CB2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x6879); FLAG_NZ(g_cpu.A);
label_8CB5:;
    /* $8CB5: 8D */ maybe_trigger_vblank(4); nes_write(0x6992, g_cpu.A);
label_8CB8:;
    /* $8CB8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8CBA:;
    /* $8CBA: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8CBC:;
    /* $8CBC: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x687B); FLAG_NZ(g_cpu.A);
label_8CBF:;
    /* $8CBF: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x80; FLAG_NZ(g_cpu.A);
label_8CC1:;
    /* $8CC1: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8CC9;
label_8CC3:;
    /* $8CC3: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_8CC5:;
    /* $8CC5: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_8CC7:;
    /* $8CC7: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8CC9:;
    /* $8CC9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x687B); FLAG_NZ(g_cpu.A);
label_8CCC:;
    /* $8CCC: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_8CCE:;
    /* $8CCE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8CD6;
label_8CD0:;
    /* $8CD0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_8CD2:;
    /* $8CD2: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x40; FLAG_NZ(g_cpu.A);
label_8CD4:;
    /* $8CD4: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8CD6:;
    /* $8CD6: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x687C); FLAG_NZ(g_cpu.A);
label_8CD9:;
    /* $8CD9: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x80; FLAG_NZ(g_cpu.A);
label_8CDB:;
    /* $8CDB: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8CE3;
label_8CDD:;
    /* $8CDD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_8CDF:;
    /* $8CDF: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x20; FLAG_NZ(g_cpu.A);
label_8CE1:;
    /* $8CE1: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8CE3:;
    /* $8CE3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x687C); FLAG_NZ(g_cpu.A);
label_8CE6:;
    /* $8CE6: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_8CE8:;
    /* $8CE8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8CF0;
label_8CEA:;
    /* $8CEA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_8CEC:;
    /* $8CEC: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x10; FLAG_NZ(g_cpu.A);
label_8CEE:;
    /* $8CEE: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8CF0:;
    /* $8CF0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_8CF2:;
    /* $8CF2: 8D */ maybe_trigger_vblank(4); nes_write(0x6997, g_cpu.A);
label_8CF5:;
    /* $8CF5: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x03; FLAG_NZ(g_cpu.Y);
label_8CF7:;
    /* $8CF7: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x687D + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8CFA:;
    /* $8CFA: 99 */ maybe_trigger_vblank(5); nes_write((0x6993 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8CFD:;
    /* $8CFD: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8CFE:;
    /* $8CFE: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8CF7;
    }
label_8D00:;
    /* $8D00: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8D; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x02; g_cpu.S--; func_C000();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8D00, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8D03:;
    /* $8D03: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_8D05:;
    /* $8D05: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_8D07:;
    /* $8D07: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8D00;
    }
label_8D09:;
    /* $8D09: 8D */ maybe_trigger_vblank(4); nes_write(0x6998, g_cpu.A);
label_8D0C:;
    /* $8D0C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8D; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0E; g_cpu.S--; func_8E17_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8D0C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8D0F:;
    /* $8D0F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8E6C_b0(); return;
}

void func_93C6_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_93C6_b0");
#endif
label_93C6:;
    /* $93C6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC8; g_cpu.S--; func_C42C();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x93C6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_93C9:;
    /* $93C9: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x05; FLAG_NZ(g_cpu.Y);
label_93CB:;
    /* $93CB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCD; g_cpu.S--; func_93F9_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x93CB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_93CE:;
    /* $93CE: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xA9; FLAG_NZ(g_cpu.X);
label_93D0:;
    /* $93D0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x21; FLAG_NZ(g_cpu.Y);
label_93D2:;
    /* $93D2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD4; g_cpu.S--; func_9450_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x93D2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_93D5:;
    /* $93D5: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0B; FLAG_NZ(g_cpu.Y);
label_93D7:;
    /* $93D7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD9; g_cpu.S--; func_93F9_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x93D7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_93DA:;
    /* $93DA: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xB0; FLAG_NZ(g_cpu.X);
label_93DC:;
    /* $93DC: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x21; FLAG_NZ(g_cpu.Y);
label_93DE:;
    /* $93DE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE0; g_cpu.S--; func_9450_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x93DE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_93E1:;
    /* $93E1: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x11; FLAG_NZ(g_cpu.Y);
label_93E3:;
    /* $93E3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE5; g_cpu.S--; func_93F9_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x93E3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_93E6:;
    /* $93E6: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xE9; FLAG_NZ(g_cpu.X);
label_93E8:;
    /* $93E8: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x21; FLAG_NZ(g_cpu.Y);
label_93EA:;
    /* $93EA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xEC; g_cpu.S--; func_9450_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x93EA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_93ED:;
    /* $93ED: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x17; FLAG_NZ(g_cpu.Y);
label_93EF:;
    /* $93EF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF1; g_cpu.S--; func_93F9_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x93EF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_93F2:;
    /* $93F2: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xF0; FLAG_NZ(g_cpu.X);
label_93F4:;
    /* $93F4: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x21; FLAG_NZ(g_cpu.Y);
label_93F6:;
    /* $93F6: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_9450_b0(); return;
}

void func_9EAA_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9EAA_b0");
#endif
label_9EAA:;
    /* $9EAA: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_9EAC:;
    /* $9EAC: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9EB8 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9EAF:;
    /* $9EAF: 99 */ maybe_trigger_vblank(5); nes_write((0x0270 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9EB2:;
    /* $9EB2: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9EB3:;
    /* $9EB3: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x9C; g_cpu.C=(g_cpu.Y>=0x9C)?1:0; FLAG_NZ(r&0xFF); }
label_9EB5:;
    /* $9EB5: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9EAC;
    }
label_9EB7:;
    /* $9EB7: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9AD5_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9AD5_b0");
#endif
label_9AD5:;
    /* $9AD5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD7; g_cpu.S--; func_909F_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9AD5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9AD8:;
    /* $9AD8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDA; g_cpu.S--; func_C5D0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9AD8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9ADB:;
    /* $9ADB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_9ADD:;
    /* $9ADD: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x69B3); FLAG_NZ(g_cpu.Y);
label_9AE0:;
    /* $9AE0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9AE4;
label_9AE2:;
    /* $9AE2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9AE4:;
    /* $9AE4: 8D */ maybe_trigger_vblank(4); nes_write(0x6872, g_cpu.A);
label_9AE7:;
    /* $9AE7: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9AE8:;
    /* $9AE8: 85 */ maybe_trigger_vblank(3); nes_write(0x7D, g_cpu.A);
label_9AEA:;
    /* $9AEA: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x52; FLAG_NZ(g_cpu.X);
label_9AEC:;
    /* $9AEC: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_9AEE:;
    /* $9AEE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; func_C20E();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9AEE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9AF1:;
    /* $9AF1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF3; g_cpu.S--; func_C487();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9AF1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9AF4:;
    /* $9AF4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_9AF6:;
    /* $9AF6: 8D */ maybe_trigger_vblank(4); nes_write(0x0684, g_cpu.A);
label_9AF9:;
    /* $9AF9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x38; FLAG_NZ(g_cpu.A);
label_9AFB:;
    /* $9AFB: 85 */ maybe_trigger_vblank(3); nes_write(0x2C, g_cpu.A);
label_9AFD:;
    /* $9AFD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x36; FLAG_NZ(g_cpu.A);
label_9AFF:;
    /* $9AFF: 85 */ maybe_trigger_vblank(3); nes_write(0x7C, g_cpu.A);
label_9B01:;
    /* $9B01: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9B03:;
    /* $9B03: 85 */ maybe_trigger_vblank(3); nes_write(0x7E, g_cpu.A);
label_9B05:;
    /* $9B05: 85 */ maybe_trigger_vblank(3); nes_write(0x7F, g_cpu.A);
label_9B07:;
    /* $9B07: 85 */ maybe_trigger_vblank(3); nes_write(0x7B, g_cpu.A);
label_9B09:;
    /* $9B09: 85 */ maybe_trigger_vblank(3); nes_write(0x7A, g_cpu.A);
label_9B0B:;
    /* $9B0B: 85 */ maybe_trigger_vblank(3); nes_write(0x81, g_cpu.A);
label_9B0D:;
    /* $9B0D: 85 */ maybe_trigger_vblank(3); nes_write(0x80, g_cpu.A);
label_9B0F:;
    /* $9B0F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9B11:;
    /* $9B11: 85 */ maybe_trigger_vblank(3); nes_write(0x1C, g_cpu.A);
label_9B13:;
    /* $9B13: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_9B15:;
    /* $9B15: 85 */ maybe_trigger_vblank(3); nes_write(0x82, g_cpu.A);
label_9B17:;
    /* $9B17: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x33; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9B19:;
    /* $9B19: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_C447(); return;
}

void func_9B1C_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9B1C_b0");
#endif
label_9B1C:;
    /* $9B1C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1E; g_cpu.S--; func_9C9A_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9B1C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9B1F:;
    /* $9B1F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_9B21:;
    /* $9B21: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9B26;
label_9B23:;
    /* $9B23: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x33; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9B25:;
    /* $9B25: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9B26:;
    /* $9B26: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x30; g_cpu.C=(g_cpu.A>=0x30)?1:0; FLAG_NZ(r&0xFF); }
label_9B28:;
    /* $9B28: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9B2D;
label_9B2A:;
    /* $9B2A: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x7A; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9B2C:;
    /* $9B2C: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9B2D:;
    /* $9B2D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_9B2F:;
    /* $9B2F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9B33;
label_9B31:;
    /* $9B31: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x81; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9B33:;
    /* $9B33: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9B34_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9B34_b0");
#endif
label_9B34:;
    /* $9B34: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_9B36:;
    /* $9B36: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x1F; FLAG_NZ(g_cpu.A);
label_9B38:;
    /* $9B38: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9B69;
label_9B3A:;
    /* $9B3A: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x7F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9B3C:;
    /* $9B3C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x7F); FLAG_NZ(g_cpu.A);
label_9B3E:;
    /* $9B3E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_9B40:;
    /* $9B40: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9B52;
label_9B42:;
    /* $9B42: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x44; g_cpu.S--; func_CAF5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9B42, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9B45:;
    /* $9B45: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x47; g_cpu.S--; func_8C7A_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9B45, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9B48:;
    /* $9B48: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x6872); FLAG_NZ(g_cpu.A);
label_9B4B:;
    /* $9B4B: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9B4C:;
    /* $9B4C: 85 */ maybe_trigger_vblank(3); nes_write(0x7D, g_cpu.A);
label_9B4E:;
    /* $9B4E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x36; FLAG_NZ(g_cpu.A);
label_9B50:;
    /* $9B50: 85 */ maybe_trigger_vblank(3); nes_write(0x7C, g_cpu.A);
label_9B52:;
    /* $9B52: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x10; g_cpu.C=(g_cpu.A>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_9B54:;
    /* $9B54: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9B69;
label_9B56:;
    /* $9B56: 85 */ maybe_trigger_vblank(3); nes_write(0x2C, g_cpu.A);
label_9B58:;
    /* $9B58: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_9B5A:;
    /* $9B5A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x6872); FLAG_NZ(g_cpu.A);
label_9B5D:;
    /* $9B5D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_9B5F:;
    /* $9B5F: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_9B62;
label_9B61:;
    /* $9B61: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9B62:;
    /* $9B62: 84 */ maybe_trigger_vblank(3); nes_write(0x7E, g_cpu.Y);
label_9B64:;
    /* $9B64: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x33; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9B66:;
    /* $9B66: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_C1A3(); return;
label_9B69:;
    /* $9B69: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x82; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9B6B:;
    /* $9B6B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9B80;
label_9B6D:;
    /* $9B6D: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x7F); FLAG_NZ(g_cpu.Y);
label_9B6F:;
    /* $9B6F: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9B83 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B72:;
    /* $9B72: 85 */ maybe_trigger_vblank(3); nes_write(0x82, g_cpu.A);
label_9B74:;
    /* $9B74: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x7E; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9B76:;
    /* $9B76: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x7E); FLAG_NZ(g_cpu.A);
label_9B78:;
    /* $9B78: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_9B7A:;
    /* $9B7A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9B80;
label_9B7C:;
    /* $9B7C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9B7E:;
    /* $9B7E: 85 */ maybe_trigger_vblank(3); nes_write(0x7E, g_cpu.A);
label_9B80:;
    /* $9B80: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_9C9A_b0(); return;
}

void func_9B93_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9B93_b0");
#endif
label_9B93:;
    /* $9B93: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_9B95:;
    /* $9B95: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9BA2;
label_9B97:;
    /* $9B97: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_9B99:;
    /* $9B99: 85 */ maybe_trigger_vblank(3); nes_write(0x2C, g_cpu.A);
label_9B9B:;
    /* $9B9B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_9B9D:;
    /* $9B9D: 85 */ maybe_trigger_vblank(3); nes_write(0x1C, g_cpu.A);
label_9B9F:;
    /* $9B9F: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x33; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9BA1:;
    /* $9BA1: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9BA2:;
    /* $9BA2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x6872); FLAG_NZ(g_cpu.A);
label_9BA5:;
    /* $9BA5: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_9BA7:;
    /* $9BA7: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_9BAC;
label_9BA9:;
    /* $9BA9: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_9C9A_b0(); return;
label_9BAC:;
    /* $9BAC: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x04; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9BAE:;
    /* $9BAE: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9BAF:;
    /* $9BAF: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9BB0:;
    /* $9BB0: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_9BB2:;
    /* $9BB2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_9BB4:;
    /* $9BB4: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A);
label_9BB6:;
    /* $9BB6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9BBE;
label_9BB8:;
    /* $9BB8: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x10; FLAG_NZ(g_cpu.Y);
label_9BBA:;
    /* $9BBA: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_9BBC:;
    /* $9BBC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9BC6;
label_9BBE:;
    /* $9BBE: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x83; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9BC0:;
    /* $9BC0: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x83; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9BC2:;
    /* $9BC2: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x10; FLAG_NZ(g_cpu.Y);
label_9BC4:;
    /* $9BC4: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_9BC6:;
    /* $9BC6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x2D; FLAG_NZ(g_cpu.A);
label_9BC8:;
    /* $9BC8: 85 */ maybe_trigger_vblank(3); nes_write(0x7C, g_cpu.A);
label_9BCA:;
    /* $9BCA: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_9C7F_b0(); return;
}

void func_9BCD_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9BCD_b0");
#endif
label_9BCD:;
    /* $9BCD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_9BCF:;
    /* $9BCF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9BEF;
label_9BD1:;
    /* $9BD1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x7B); FLAG_NZ(g_cpu.A);
label_9BD3:;
    /* $9BD3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9BDB;
label_9BD5:;
    /* $9BD5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_9BD7:;
    /* $9BD7: 85 */ maybe_trigger_vblank(3); nes_write(0x1C, g_cpu.A);
label_9BD9:;
    /* $9BD9: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x7B; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9BDB:;
    /* $9BDB: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_9BDD:;
    /* $9BDD: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_9BDF:;
    /* $9BDF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9BEF;
label_9BE1:;
    /* $9BE1: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1C; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9BE3:;
    /* $9BE3: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1C); FLAG_NZ(g_cpu.A);
label_9BE5:;
    /* $9BE5: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0C; g_cpu.C=(g_cpu.A>=0x0C)?1:0; FLAG_NZ(r&0xFF); }
label_9BE7:;
    /* $9BE7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9BEF;
label_9BE9:;
    /* $9BE9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_9BEB:;
    /* $9BEB: 85 */ maybe_trigger_vblank(3); nes_write(0x2C, g_cpu.A);
label_9BED:;
    /* $9BED: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x33; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9BEF:;
    /* $9BEF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x6872); FLAG_NZ(g_cpu.A);
label_9BF2:;
    /* $9BF2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_9BF4:;
    /* $9BF4: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_9BF9;
label_9BF6:;
    /* $9BF6: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_9C9A_b0(); return;
label_9BF9:;
    /* $9BF9: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_9C7F_b0(); return;
}

void func_9BFC_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9BFC_b0");
#endif
label_9BFC:;
    /* $9BFC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_9BFE:;
    /* $9BFE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9C17;
label_9C00:;
    /* $9C00: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_9C02:;
    /* $9C02: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9C44;
label_9C04:;
    /* $9C04: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x06; g_cpu.S--; func_C439();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9C04, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9C07:;
    /* $9C07: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x09; g_cpu.S--; func_C16D();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9C07, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9C0A:;
    /* $9C0A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0C; g_cpu.S--; func_C1A3();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9C0A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9C0D:;
    /* $9C0D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_9C0F:;
    /* $9C0F: 85 */ maybe_trigger_vblank(3); nes_write(0x1C, g_cpu.A);
label_9C11:;
    /* $9C11: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x13; g_cpu.S--; func_C447();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9C11, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9C14:;
    /* $9C14: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_C43F(); return;
label_9C17:;
    /* $9C17: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x80); FLAG_NZ(g_cpu.A);
label_9C19:;
    /* $9C19: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9C1D;
label_9C1B:;
    /* $9C1B: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x80; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9C1D:;
    /* $9C1D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x06; g_cpu.C=(g_cpu.A>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_9C1F:;
    /* $9C1F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9C2A;
label_9C21:;
    /* $9C21: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFC); FLAG_NZ(g_cpu.A);
label_9C23:;
    /* $9C23: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x88; g_cpu.C=(g_cpu.A>=0x88)?1:0; FLAG_NZ(r&0xFF); }
label_9C25:;
    /* $9C25: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_9C2A;
label_9C27:;
    /* $9C27: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x33; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9C29:;
    /* $9C29: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9C2A:;
    /* $9C2A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_9C2C:;
    /* $9C2C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_9C2E:;
    /* $9C2E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9C44;
label_9C30:;
    /* $9C30: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xFC; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9C32:;
    /* $9C32: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFC); FLAG_NZ(g_cpu.A);
label_9C34:;
    /* $9C34: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xF0; g_cpu.C=(g_cpu.A>=0xF0)?1:0; FLAG_NZ(r&0xFF); }
label_9C36:;
    /* $9C36: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9C44;
label_9C38:;
    /* $9C38: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x80; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9C3A:;
    /* $9C3A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9C3C:;
    /* $9C3C: 85 */ maybe_trigger_vblank(3); nes_write(0xFC, g_cpu.A);
label_9C3E:;
    /* $9C3E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_9C40:;
    /* $9C40: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x02; FLAG_NZ(g_cpu.A);
label_9C42:;
    /* $9C42: 85 */ maybe_trigger_vblank(3); nes_write(0xFF, g_cpu.A);
label_9C44:;
    /* $9C44: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9A39_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A39_b0");
#endif
label_9A39:;
    /* $9A39: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_9A3B:;
    /* $9A3B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_9A3D:;
    /* $9A3D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0x9A38); return; }
label_9A3F:;
    /* $9A3F: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x11; FLAG_NZ(g_cpu.Y);
label_9A41:;
    /* $9A41: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9A43:;
    /* $9A43: 99 */ maybe_trigger_vblank(5); nes_write((0x6988 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A46:;
    /* $9A46: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A47:;
    /* $9A47: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9A43;
    }
label_9A49:;
    /* $9A49: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A4A:;
    /* $9A4A: 99 */ maybe_trigger_vblank(5); nes_write((0x6887 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A4D:;
    /* $9A4D: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A4E:;
    /* $9A4E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9A4A;
    }
label_9A50:;
    /* $9A50: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x6878); FLAG_NZ(g_cpu.A);
label_9A53:;
    /* $9A53: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_9A55:;
    /* $9A55: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9A5C;
label_9A57:;
    /* $9A57: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9A59:;
    /* $9A59: 8D */ maybe_trigger_vblank(4); nes_write(0x6988, g_cpu.A);
label_9A5C:;
    /* $9A5C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x6878); FLAG_NZ(g_cpu.A);
label_9A5F:;
    /* $9A5F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_9A61:;
    /* $9A61: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9A6B;
label_9A63:;
    /* $9A63: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x6988); FLAG_NZ(g_cpu.A);
label_9A66:;
    /* $9A66: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x40; FLAG_NZ(g_cpu.A);
label_9A68:;
    /* $9A68: 8D */ maybe_trigger_vblank(4); nes_write(0x6988, g_cpu.A);
label_9A6B:;
    /* $9A6B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x6878); FLAG_NZ(g_cpu.A);
label_9A6E:;
    /* $9A6E: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_9A70:;
    /* $9A70: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9A77;
label_9A72:;
    /* $9A72: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_9A74:;
    /* $9A74: 8D */ maybe_trigger_vblank(4); nes_write(0x6989, g_cpu.A);
label_9A77:;
    /* $9A77: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x6878); FLAG_NZ(g_cpu.A);
label_9A7A:;
    /* $9A7A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9A7C:;
    /* $9A7C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9A83;
label_9A7E:;
    /* $9A7E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9A80:;
    /* $9A80: 8D */ maybe_trigger_vblank(4); nes_write(0x698B, g_cpu.A);
label_9A83:;
    /* $9A83: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x6878); FLAG_NZ(g_cpu.A);
label_9A86:;
    /* $9A86: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_9A88:;
    /* $9A88: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9A92;
label_9A8A:;
    /* $9A8A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x698B); FLAG_NZ(g_cpu.A);
label_9A8D:;
    /* $9A8D: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x04; FLAG_NZ(g_cpu.A);
label_9A8F:;
    /* $9A8F: 8D */ maybe_trigger_vblank(4); nes_write(0x698B, g_cpu.A);
label_9A92:;
    /* $9A92: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x6878); FLAG_NZ(g_cpu.A);
label_9A95:;
    /* $9A95: 8D */ maybe_trigger_vblank(4); nes_write(0x6991, g_cpu.A);
label_9A98:;
    /* $9A98: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9A9A:;
    /* $9A9A: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x69B3); FLAG_NZ(g_cpu.Y);
label_9A9D:;
    /* $9A9D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9AA1;
label_9A9F:;
    /* $9A9F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_9AA1:;
    /* $9AA1: 8D */ maybe_trigger_vblank(4); nes_write(0x6990, g_cpu.A);
label_9AA4:;
    /* $9AA4: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_92D4_b0(); return;
}

void func_9F20_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9F20_b0");
#endif
label_9F20:;
    /* $9F20: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x2225 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9F23:;
    /* $9F23: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x53; g_cpu.C=(g_cpu.Y>=0x53)?1:0; FLAG_NZ(r&0xFF); }
label_9F25:;
    /* $9F25: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x23); FLAG_NZ(g_cpu.A);
label_9F27:;
    /* $9F27: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_9F28:;
    /* $9F28: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x25); FLAG_NZ(g_cpu.Y);
label_9F2A:;
    /* $9F2A: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_9F2B:;
    /* $9F2B: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0x98 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9F2D:;
    /* $9F2D: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x23); FLAG_NZ(g_cpu.A);
label_9F2F:;
    /* $9F2F: 1A */ maybe_trigger_vblank(2); /* NOP */
label_9F30:;
    /* $9F30: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9F31:;
    /* $9F31: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x22); FLAG_NZ(g_cpu.A);
label_9F33:;
    /* $9F33: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x2597); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9F36:;
    /* $9F36: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_9F38:;
    /* $9F38: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x25) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_9F3A:;
    /* $9F3A: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_9F3B:;
    /* $9F3B: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_9F3C:;
    /* $9F3C: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x25 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9F3E:;
    /* $9F3E: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x65 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_9F40:;
    /* $9F40: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x2225); FLAG_NZ(g_cpu.Y);
label_9F43:;
    /* $9F43: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9F44:;
    /* $9F44: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_9F45:;
    /* $9F45: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x23); FLAG_NZ(g_cpu.A);
label_9F47:;
    /* $9F47: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x7C) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9F49:;
    /* $9F49: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x22; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9F4B:;
    /* $9F4B: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_9F4C:;
    /* $9F4C: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x26) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9F4E:;
    /* $9F4E: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE7 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_9F50:;
    /* $9F50: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x2226); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9F53:;
    /* $9F53: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_9F54:;
    /* $9F54: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1C); FLAG_NZ(g_cpu.A);
label_9F56:;
    /* $9F56: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9F80;
label_9F58:;
    /* $9F58: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0C; g_cpu.C=(g_cpu.A>=0x0C)?1:0; FLAG_NZ(r&0xFF); }
label_9F5A:;
    /* $9F5A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9F80;
label_9F5C:;
    /* $9F5C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0D; g_cpu.C=(g_cpu.A>=0x0D)?1:0; FLAG_NZ(r&0xFF); }
label_9F5E:;
    /* $9F5E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9F64;
label_9F60:;
    /* $9F60: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_9F62:;
    /* $9F62: 84 */ maybe_trigger_vblank(3); nes_write(0x1C, g_cpu.Y);
label_9F64:;
    /* $9F64: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9F65:;
    /* $9F65: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9F66:;
    /* $9F66: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9F80 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9F69:;
    /* $9F69: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x9F7F + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_9F6C:;
    /* $9F6C: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9F6D:;
    /* $9F6D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6F; g_cpu.S--; func_C20E();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9F6D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9F70:;
    /* $9F70: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3F; FLAG_NZ(g_cpu.A);
label_9F72:;
    /* $9F72: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_9F75:;
    /* $9F75: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9F77:;
    /* $9F77: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_9F7A:;
    /* $9F7A: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_9F7D:;
    /* $9F7D: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_9F80:;
    /* $9F80: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9AA0_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9AA0_b0");
#endif
label_9AA0:;
    /* $9AA0: 80 */ maybe_trigger_vblank(2); /* NOP */
label_9AA2:;
    /* $9AA2: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_9B0D;
label_9AA4:;
    /* $9AA4: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_92D4_b0(); return;
label_9AA7:;
    /* $9AA7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA9; g_cpu.S--; func_9EAA_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9AA7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9AAA:;
    /* $9AAA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x7B); FLAG_NZ(g_cpu.A);
label_9AAC:;
    /* $9AAC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9AC0;
label_9AAE:;
    /* $9AAE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_9AB0:;
    /* $9AB0: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_9AB2:;
    /* $9AB2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9AC0;
label_9AB4:;
    /* $9AB4: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1C; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9AB6:;
    /* $9AB6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1C); FLAG_NZ(g_cpu.A);
label_9AB8:;
    /* $9AB8: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_9ABA:;
    /* $9ABA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9AC0;
label_9ABC:;
    /* $9ABC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9ABE:;
    /* $9ABE: 85 */ maybe_trigger_vblank(3); nes_write(0x1C, g_cpu.A);
label_9AC0:;
    /* $9AC0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x33); FLAG_NZ(g_cpu.A);
label_9AC2:;
    /* $9AC2: 20 */ maybe_trigger_vblank(6); /* inline_dispatch $C27C: 9 entries (bank=0) */
switch(g_cpu.A) {
  case 0: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xD5); nes_write(0x000D, 0x9A); g_cpu.A = 0x9A; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_9AD5_b0(); return;
  case 1: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x1C); nes_write(0x000D, 0x9B); g_cpu.A = 0x9B; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_9B1C_b0(); return;
  case 2: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x34); nes_write(0x000D, 0x9B); g_cpu.A = 0x9B; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_9B34_b0(); return;
  case 3: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x93); nes_write(0x000D, 0x9B); g_cpu.A = 0x9B; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_9B93_b0(); return;
  case 4: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xCD); nes_write(0x000D, 0x9B); g_cpu.A = 0x9B; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_9BCD_b0(); return;
  case 5: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xFC); nes_write(0x000D, 0x9B); g_cpu.A = 0x9B; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_9BFC_b0(); return;
  case 6: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x39); nes_write(0x000D, 0x9A); g_cpu.A = 0x9A; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_9A39_b0(); return;
  case 7: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x5C); nes_write(0x000D, 0xC4); g_cpu.A = 0xC4; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_C45C(); return;
  case 8: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x20); nes_write(0x000D, 0x9F); g_cpu.A = 0x9F; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_9F20_b0(); return;
  default: nes_log_inline_miss(0x9AC2, g_cpu.A); return;
}
label_9AD7:;
    /* $9AD7: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_9AF9;
label_9AD9:;
    /* $9AD9: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9AA0;
    }
label_9ADB:;
    /* $9ADB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_9ADD:;
    /* $9ADD: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x69B3); FLAG_NZ(g_cpu.Y);
label_9AE0:;
    /* $9AE0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9AE4;
label_9AE2:;
    /* $9AE2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9AE4:;
    /* $9AE4: 8D */ maybe_trigger_vblank(4); nes_write(0x6872, g_cpu.A);
label_9AE7:;
    /* $9AE7: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9AE8:;
    /* $9AE8: 85 */ maybe_trigger_vblank(3); nes_write(0x7D, g_cpu.A);
label_9AEA:;
    /* $9AEA: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x52; FLAG_NZ(g_cpu.X);
label_9AEC:;
    /* $9AEC: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_9AEE:;
    /* $9AEE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; func_C20E();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9AEE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9AF1:;
    /* $9AF1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF3; g_cpu.S--; func_C487();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9AF1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9AF4:;
    /* $9AF4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_9AF6:;
    /* $9AF6: 8D */ maybe_trigger_vblank(4); nes_write(0x0684, g_cpu.A);
label_9AF9:;
    /* $9AF9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x38; FLAG_NZ(g_cpu.A);
label_9AFB:;
    /* $9AFB: 85 */ maybe_trigger_vblank(3); nes_write(0x2C, g_cpu.A);
label_9AFD:;
    /* $9AFD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x36; FLAG_NZ(g_cpu.A);
label_9AFF:;
    /* $9AFF: 85 */ maybe_trigger_vblank(3); nes_write(0x7C, g_cpu.A);
label_9B01:;
    /* $9B01: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9B03:;
    /* $9B03: 85 */ maybe_trigger_vblank(3); nes_write(0x7E, g_cpu.A);
label_9B05:;
    /* $9B05: 85 */ maybe_trigger_vblank(3); nes_write(0x7F, g_cpu.A);
label_9B07:;
    /* $9B07: 85 */ maybe_trigger_vblank(3); nes_write(0x7B, g_cpu.A);
label_9B09:;
    /* $9B09: 85 */ maybe_trigger_vblank(3); nes_write(0x7A, g_cpu.A);
label_9B0B:;
    /* $9B0B: 85 */ maybe_trigger_vblank(3); nes_write(0x81, g_cpu.A);
label_9B0D:;
    /* $9B0D: 85 */ maybe_trigger_vblank(3); nes_write(0x80, g_cpu.A);
label_9B0F:;
    /* $9B0F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9B11:;
    /* $9B11: 85 */ maybe_trigger_vblank(3); nes_write(0x1C, g_cpu.A);
label_9B13:;
    /* $9B13: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_9B15:;
    /* $9B15: 85 */ maybe_trigger_vblank(3); nes_write(0x82, g_cpu.A);
label_9B17:;
    /* $9B17: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x33; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9B19:;
    /* $9B19: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_C447(); return;
}

void func_95AB_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95AB_b0");
#endif
label_95AB:;
    /* $95AB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x95AB); return;
}

void func_95C3_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95C3_b0");
#endif
label_95C3:;
    /* $95C3: 3A */ maybe_trigger_vblank(2); /* NOP */
label_95C4:;
    /* $95C4: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x170F + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_95C7:;
    /* $95C7: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x37) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_95C9:;
    /* $95C9: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x2232; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_95CC:;
    /* $95CC: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_95CD:;
    /* $95CD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x95CD); return;
}

void func_8B13_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8B13_b0");
#endif
label_8B13:;
    /* $8B13: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8B13); return;
}

void func_8B79_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8B79_b0");
#endif
label_8B79:;
    /* $8B79: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x6886); FLAG_NZ(g_cpu.A);
label_8B7C:;
    /* $8B7C: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_8B7E:;
    /* $8B7E: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_8B80:;
    /* $8B80: 84 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.Y);
label_8B82:;
    /* $8B82: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x04); FLAG_NZ(g_cpu.Y);
label_8B84:;
    /* $8B84: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8B85:;
    /* $8B85: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6886 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8B88:;
    /* $8B88: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8B8A:;
    /* $8B8A: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8B8B:;
    /* $8B8B: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6886 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8B8E:;
    /* $8B8E: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_8B90:;
    /* $8B90: 84 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.Y);
label_8B92:;
    /* $8B92: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x94; g_cpu.S--; func_8B9C_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8B92, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8B95:;
    /* $8B95: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x04); FLAG_NZ(g_cpu.Y);
label_8B97:;
    /* $8B97: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x03); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8B99:;
    /* $8B99: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8B82;
    }
label_8B9B:;
    /* $8B9B: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8001_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8001_b0");
#endif
label_8001:;
    /* $8001: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x15C9 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8004:;
    /* $8004: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8027;
label_8006:;
    /* $8006: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x12); FLAG_NZ(g_cpu.A);
label_8008:;
    /* $8008: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_800A:;
    /* $800A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8022;
label_800C:;
    /* $800C: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_800E:;
    /* $800E: 84 */ maybe_trigger_vblank(3); nes_write(0xD1, g_cpu.Y);
label_8010:;
    /* $8010: 84 */ maybe_trigger_vblank(3); nes_write(0xBB, g_cpu.Y);
label_8012:;
    /* $8012: 84 */ maybe_trigger_vblank(3); nes_write(0xB7, g_cpu.Y);
label_8014:;
    /* $8014: 84 */ maybe_trigger_vblank(3); nes_write(0xB8, g_cpu.Y);
label_8016:;
    /* $8016: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_8018:;
    /* $8018: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFC; FLAG_NZ(g_cpu.A);
label_801A:;
    /* $801A: 85 */ maybe_trigger_vblank(3); nes_write(0xFF, g_cpu.A);
label_801C:;
    /* $801C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1B; FLAG_NZ(g_cpu.A);
label_801E:;
    /* $801E: 85 */ maybe_trigger_vblank(3); nes_write(0x1F, g_cpu.A);
label_8020:;
    /* $8020: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8027;
label_8022:;
    /* $8022: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x24; g_cpu.S--; func_C1BC();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8022, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8025:;
    /* $8025: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_8027:;
    /* $8027: 20 */ maybe_trigger_vblank(6); /* inline_dispatch $C27C: 31 entries (bank=0) */
switch(g_cpu.A) {
  case 0: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x71); nes_write(0x000D, 0x80); g_cpu.A = 0x80; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_8071_b0(); return;
  case 1: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xD0); nes_write(0x000D, 0x80); g_cpu.A = 0x80; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_80D0_b0(); return;
  case 2: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xF9); nes_write(0x000D, 0x80); g_cpu.A = 0x80; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_80F9_b0(); return;
  case 3: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x2C); nes_write(0x000D, 0x81); g_cpu.A = 0x81; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_812C_b0(); return;
  case 4: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x42); nes_write(0x000D, 0x81); g_cpu.A = 0x81; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_8142_b0(); return;
  case 5: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x09); nes_write(0x000D, 0x81); g_cpu.A = 0x81; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_8109_b0(); return;
  case 6: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x4D); nes_write(0x000D, 0x81); g_cpu.A = 0x81; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_814D_b0(); return;
  case 7: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x63); nes_write(0x000D, 0x81); g_cpu.A = 0x81; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_8163_b0(); return;
  case 8: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x82); nes_write(0x000D, 0x81); g_cpu.A = 0x81; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_8182_b0(); return;
  case 9: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xD1); nes_write(0x000D, 0x81); g_cpu.A = 0x81; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_81D1_b0(); return;
  case 10: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x6E); nes_write(0x000D, 0x80); g_cpu.A = 0x80; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_806E_b0(); return;
  case 11: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x6E); nes_write(0x000D, 0x80); g_cpu.A = 0x80; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_806E_b0(); return;
  case 12: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x2E); nes_write(0x000D, 0x82); g_cpu.A = 0x82; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_822E_b0(); return;
  case 13: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x43); nes_write(0x000D, 0x82); g_cpu.A = 0x82; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_8243_b0(); return;
  case 14: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x63); nes_write(0x000D, 0x82); g_cpu.A = 0x82; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_8263_b0(); return;
  case 15: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x83); nes_write(0x000D, 0x82); g_cpu.A = 0x82; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_8283_b0(); return;
  case 16: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x68); nes_write(0x000D, 0x80); g_cpu.A = 0x80; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_8068_b0(); return;
  case 17: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xA3); nes_write(0x000D, 0x82); g_cpu.A = 0x82; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_82A3_b0(); return;
  case 18: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xED); nes_write(0x000D, 0x82); g_cpu.A = 0x82; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_82ED_b0(); return;
  case 19: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xF3); nes_write(0x000D, 0x82); g_cpu.A = 0x82; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_82F3_b0(); return;
  case 20: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xF3); nes_write(0x000D, 0x82); g_cpu.A = 0x82; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_82F3_b0(); return;
  case 21: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xBA); nes_write(0x000D, 0x90); g_cpu.A = 0x90; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_90BA_b0(); return;
  case 22: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xD7); nes_write(0x000D, 0x90); g_cpu.A = 0x90; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_90D7_b0(); return;
  case 23: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x1A); nes_write(0x000D, 0x91); g_cpu.A = 0x91; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_911A_b0(); return;
  case 24: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x47); nes_write(0x000D, 0x91); g_cpu.A = 0x91; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_9147_b0(); return;
  case 25: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x59); nes_write(0x000D, 0x93); g_cpu.A = 0x93; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_9359_b0(); return;
  case 26: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x94); nes_write(0x000D, 0x93); g_cpu.A = 0x93; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_9394_b0(); return;
  case 27: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xBA); nes_write(0x000D, 0x90); g_cpu.A = 0x90; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_90BA_b0(); return;
  case 28: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0x9E); nes_write(0x000D, 0x93); g_cpu.A = 0x93; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_939E_b0(); return;
  case 29: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xA7); nes_write(0x000D, 0x9A); g_cpu.A = 0x9A; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_9AA7_b0(); return;
  case 30: nes_write(0x006A, g_cpu.Y); nes_write(0x0069, g_cpu.X); nes_write(0x000C, 0xAA); nes_write(0x000D, 0xC4); g_cpu.A = 0xC4; g_cpu.C = 0; FLAG_NZ(g_cpu.Y); maybe_trigger_vblank(57); func_C4AA(); return;
  default: nes_log_inline_miss(0x8027, g_cpu.A); return;
}
label_8068:;
    /* $8068: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_806A:;
    /* $806A: 85 */ maybe_trigger_vblank(3); nes_write(0xCB, g_cpu.A);
label_806C:;
    /* $806C: 85 */ maybe_trigger_vblank(3); nes_write(0xC9, g_cpu.A);
label_806E:;
    /* $806E: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8070:;
    /* $8070: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_881A_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_881A_b0");
#endif
label_881A:;
    /* $881A: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_881B:;
    /* $881B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x88; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1D; g_cpu.S--; func_C2C0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x881B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_881E:;
    /* $881E: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_881F:;
    /* $881F: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x89AF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8822:;
    /* $8822: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8824:;
    /* $8824: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x89B0 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8827:;
    /* $8827: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_8829:;
    /* $8829: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x6EA4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_882C:;
    /* $882C: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_882E:;
    /* $882E: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_8835;
label_8830:;
    /* $8830: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8832:;
    /* $8832: 9D */ maybe_trigger_vblank(5); nes_write((0x6EA9 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8835:;
    /* $8835: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_883C;
label_8837:;
    /* $8837: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8839:;
    /* $8839: 9D */ maybe_trigger_vblank(5); nes_write((0x6EAA + g_cpu.X) & 0xFFFF, g_cpu.A);
label_883C:;
    /* $883C: 9D */ maybe_trigger_vblank(5); nes_write((0x6EA5 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_883F:;
    /* $883F: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8840:;
    /* $8840: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8842:;
    /* $8842: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x6EA9 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8845:;
    /* $8845: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_8850;
label_8847:;
    /* $8847: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8849:;
    /* $8849: 9D */ maybe_trigger_vblank(5); nes_write((0x6EA6 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_884C:;
    /* $884C: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_884E:;
    /* $884E: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_8867;
label_8850:;
    /* $8850: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_8851:;
    /* $8851: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_8852:;
    /* $8852: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8854:;
    /* $8854: 9D */ maybe_trigger_vblank(5); nes_write((0x6EA9 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8857:;
    /* $8857: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8858:;
    /* $8858: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x88; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x5A; g_cpu.S--; func_C2BF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8858, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_885B:;
    /* $885B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x88; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x5D; g_cpu.S--; func_8871_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x885B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_885E:;
    /* $885E: 9D */ maybe_trigger_vblank(5); nes_write((0x6EA6 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8861:;
    /* $8861: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8862:;
    /* $8862: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_8864:;
    /* $8864: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x88; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x66; g_cpu.S--; func_8871_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8864, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8867:;
    /* $8867: 9D */ maybe_trigger_vblank(5); nes_write((0x6EA7 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_886A:;
    /* $886A: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x6EA4 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_886D:;
    /* $886D: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x6EA4 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8870:;
    /* $8870: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_887B_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_887B_b0");
#endif
label_887B:;
    /* $887B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6EA0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_887E:;
    /* $887E: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_887F:;
    /* $887F: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8881:;
    /* $8881: 9D */ maybe_trigger_vblank(5); nes_write((0x0210 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8884:;
    /* $8884: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6EA1 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8887:;
    /* $8887: 9D */ maybe_trigger_vblank(5); nes_write((0x0211 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_888A:;
    /* $888A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6EA2 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_888D:;
    /* $888D: 9D */ maybe_trigger_vblank(5); nes_write((0x0212 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8890:;
    /* $8890: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6EA3 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8893:;
    /* $8893: 9D */ maybe_trigger_vblank(5); nes_write((0x0213 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8896:;
    /* $8896: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_981E_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_981E_b0");
#endif
label_981E:;
    /* $981E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6EAC + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9821:;
    /* $9821: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x98; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x23; g_cpu.S--; func_9871_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9821, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9824:;
    /* $9824: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x6EAE + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_9827:;
    /* $9827: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_982E;
label_9829:;
    /* $9829: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0xFF; FLAG_NZ(g_cpu.A);
label_982B:;
    /* $982B: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_982C:;
    /* $982C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_982E:;
    /* $982E: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_982F:;
    /* $982F: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x6EA3 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9832:;
    /* $9832: 9D */ maybe_trigger_vblank(5); nes_write((0x6EA3 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9835:;
    /* $9835: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_9836:;
    /* $9836: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x6EA6 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9839:;
    /* $9839: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_983A:;
    /* $983A: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_983B:;
    /* $983B: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x6EAE + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_983E:;
    /* $983E: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_983F:;
    /* $983F: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_9864;
label_9841:;
    /* $9841: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6EAD + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9844:;
    /* $9844: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x98; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x46; g_cpu.S--; func_9871_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9844, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9847:;
    /* $9847: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x6EAF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_984A:;
    /* $984A: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_9851;
label_984C:;
    /* $984C: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0xFF; FLAG_NZ(g_cpu.A);
label_984E:;
    /* $984E: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_984F:;
    /* $984F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_9851:;
    /* $9851: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9852:;
    /* $9852: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x6EA0 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9855:;
    /* $9855: 9D */ maybe_trigger_vblank(5); nes_write((0x6EA0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9858:;
    /* $9858: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_9859:;
    /* $9859: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x6EA7 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_985C:;
    /* $985C: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_985D:;
    /* $985D: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_985E:;
    /* $985E: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x6EAF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9861:;
    /* $9861: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9862:;
    /* $9862: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_9870;
label_9864:;
    /* $9864: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6EA7 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9867:;
    /* $9867: 9D */ maybe_trigger_vblank(5); nes_write((0x6EA0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_986A:;
    /* $986A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6EA6 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_986D:;
    /* $986D: 9D */ maybe_trigger_vblank(5); nes_write((0x6EA3 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9870:;
    /* $9870: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8F60_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8F60_b0");
#endif
label_8F60:;
    /* $8F60: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_8F62:;
    /* $8F62: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x64; g_cpu.S--; func_8FF1_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8F62, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8F65:;
    /* $8F65: 8D */ maybe_trigger_vblank(4); nes_write(0x6988, g_cpu.A);
label_8F68:;
    /* $8F68: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_8F6A:;
    /* $8F6A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6C; g_cpu.S--; func_9001_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8F6A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8F6D:;
    /* $8F6D: 8D */ maybe_trigger_vblank(4); nes_write(0x6989, g_cpu.A);
label_8F70:;
    /* $8F70: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x02; FLAG_NZ(g_cpu.Y);
label_8F72:;
    /* $8F72: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x74; g_cpu.S--; func_9011_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8F72, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8F75:;
    /* $8F75: 8D */ maybe_trigger_vblank(4); nes_write(0x698A, g_cpu.A);
label_8F78:;
    /* $8F78: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x04; FLAG_NZ(g_cpu.Y);
label_8F7A:;
    /* $8F7A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x7C; g_cpu.S--; func_8FF1_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8F7A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8F7D:;
    /* $8F7D: 8D */ maybe_trigger_vblank(4); nes_write(0x698B, g_cpu.A);
label_8F80:;
    /* $8F80: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x05; FLAG_NZ(g_cpu.Y);
label_8F82:;
    /* $8F82: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x84; g_cpu.S--; func_9001_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8F82, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8F85:;
    /* $8F85: 8D */ maybe_trigger_vblank(4); nes_write(0x698C, g_cpu.A);
label_8F88:;
    /* $8F88: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x06; FLAG_NZ(g_cpu.Y);
label_8F8A:;
    /* $8F8A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; func_9011_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8F8A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8F8D:;
    /* $8F8D: 8D */ maybe_trigger_vblank(4); nes_write(0x698D, g_cpu.A);
label_8F90:;
    /* $8F90: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x08; FLAG_NZ(g_cpu.Y);
label_8F92:;
    /* $8F92: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x94; g_cpu.S--; func_8FF1_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8F92, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8F95:;
    /* $8F95: 8D */ maybe_trigger_vblank(4); nes_write(0x698E, g_cpu.A);
label_8F98:;
    /* $8F98: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x09; FLAG_NZ(g_cpu.Y);
label_8F9A:;
    /* $8F9A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x9C; g_cpu.S--; func_9001_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8F9A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8F9D:;
    /* $8F9D: 8D */ maybe_trigger_vblank(4); nes_write(0x698F, g_cpu.A);
label_8FA0:;
    /* $8FA0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0A; FLAG_NZ(g_cpu.Y);
label_8FA2:;
    /* $8FA2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA4; g_cpu.S--; func_9011_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8FA2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8FA5:;
    /* $8FA5: 8D */ maybe_trigger_vblank(4); nes_write(0x6990, g_cpu.A);
label_8FA8:;
    /* $8FA8: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0C; FLAG_NZ(g_cpu.Y);
label_8FAA:;
    /* $8FAA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAC; g_cpu.S--; func_8FF1_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8FAA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8FAD:;
    /* $8FAD: 8D */ maybe_trigger_vblank(4); nes_write(0x6991, g_cpu.A);
label_8FB0:;
    /* $8FB0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0D; FLAG_NZ(g_cpu.Y);
label_8FB2:;
    /* $8FB2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; func_9001_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8FB2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8FB5:;
    /* $8FB5: 8D */ maybe_trigger_vblank(4); nes_write(0x6992, g_cpu.A);
label_8FB8:;
    /* $8FB8: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0E; FLAG_NZ(g_cpu.Y);
label_8FBA:;
    /* $8FBA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; func_9011_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8FBA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8FBD:;
    /* $8FBD: 8D */ maybe_trigger_vblank(4); nes_write(0x6993, g_cpu.A);
label_8FC0:;
    /* $8FC0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x10; FLAG_NZ(g_cpu.Y);
label_8FC2:;
    /* $8FC2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC4; g_cpu.S--; func_8FF1_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8FC2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8FC5:;
    /* $8FC5: 8D */ maybe_trigger_vblank(4); nes_write(0x6994, g_cpu.A);
label_8FC8:;
    /* $8FC8: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x11; FLAG_NZ(g_cpu.Y);
label_8FCA:;
    /* $8FCA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCC; g_cpu.S--; func_9001_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8FCA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8FCD:;
    /* $8FCD: 8D */ maybe_trigger_vblank(4); nes_write(0x6995, g_cpu.A);
label_8FD0:;
    /* $8FD0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x12; FLAG_NZ(g_cpu.Y);
label_8FD2:;
    /* $8FD2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD4; g_cpu.S--; func_9011_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8FD2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8FD5:;
    /* $8FD5: 8D */ maybe_trigger_vblank(4); nes_write(0x6996, g_cpu.A);
label_8FD8:;
    /* $8FD8: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x14; FLAG_NZ(g_cpu.Y);
label_8FDA:;
    /* $8FDA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDC; g_cpu.S--; func_8FF1_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8FDA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8FDD:;
    /* $8FDD: 8D */ maybe_trigger_vblank(4); nes_write(0x6997, g_cpu.A);
label_8FE0:;
    /* $8FE0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x15; FLAG_NZ(g_cpu.Y);
label_8FE2:;
    /* $8FE2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE4; g_cpu.S--; func_9001_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8FE2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8FE5:;
    /* $8FE5: 8D */ maybe_trigger_vblank(4); nes_write(0x6998, g_cpu.A);
label_8FE8:;
    /* $8FE8: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x16; FLAG_NZ(g_cpu.Y);
label_8FEA:;
    /* $8FEA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xEC; g_cpu.S--; func_9011_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8FEA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8FED:;
    /* $8FED: 8D */ maybe_trigger_vblank(4); nes_write(0x6999, g_cpu.A);
label_8FF0:;
    /* $8FF0: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8DDE_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8DDE_b0");
#endif
label_8DDE:;
    /* $8DDE: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x69B2); FLAG_NZ(g_cpu.A);
label_8DE1:;
    /* $8DE1: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8DF7;
label_8DE3:;
    /* $8DE3: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0F; FLAG_NZ(g_cpu.Y);
label_8DE5:;
    /* $8DE5: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x699A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8DE8:;
    /* $8DE8: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x8E07 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8DEB:;
    /* $8DEB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8DF7;
label_8DED:;
    /* $8DED: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8DEE:;
    /* $8DEE: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8DE5;
    }
label_8DF0:;
    /* $8DF0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8DF2:;
    /* $8DF2: 8D */ maybe_trigger_vblank(4); nes_write(0x69B2, g_cpu.A);
label_8DF5:;
    /* $8DF5: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8E05;
label_8DF7:;
    /* $8DF7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8D; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF9; g_cpu.S--; func_8E4E_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8DF7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8DFA:;
    /* $8DFA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8D; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFC; g_cpu.S--; func_8E21_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8DFA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8DFD:;
    /* $8DFD: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x6999); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8E00:;
    /* $8E00: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8E05;
label_8E02:;
    /* $8E02: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8E03:;
    /* $8E03: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8E06;
label_8E05:;
    /* $8E05: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8E06:;
    /* $8E06: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_92D4_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_92D4_b0");
#endif
label_92D4:;
    /* $92D4: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x92; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD6; g_cpu.S--; func_C1D4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x92D4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_92D7:;
    /* $92D7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x92; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD9; g_cpu.S--; func_C578();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x92D7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_92DA:;
    /* $92DA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x92; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDC; g_cpu.S--; func_8D12_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x92DA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_92DD:;
    /* $92DD: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_92DF:;
    /* $92DF: 84 */ maybe_trigger_vblank(3); nes_write(0x5B, g_cpu.Y);
label_92E1:;
    /* $92E1: 84 */ maybe_trigger_vblank(3); nes_write(0x4B, g_cpu.Y);
label_92E3:;
    /* $92E3: 84 */ maybe_trigger_vblank(3); nes_write(0x6B, g_cpu.Y);
label_92E5:;
    /* $92E5: 8C */ maybe_trigger_vblank(4); nes_write(0x030C, g_cpu.Y);
label_92E8:;
    /* $92E8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x92; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xEA; g_cpu.S--; func_CB8E();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x92E8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_92EB:;
    /* $92EB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5A; FLAG_NZ(g_cpu.A);
label_92ED:;
    /* $92ED: 8D */ maybe_trigger_vblank(4); nes_write(0x0303, g_cpu.A);
label_92F0:;
    /* $92F0: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x01; FLAG_NZ(g_cpu.X);
label_92F2:;
    /* $92F2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x74); FLAG_NZ(g_cpu.A);
label_92F4:;
    /* $92F4: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_92F6:;
    /* $92F6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_92F9;
label_92F8:;
    /* $92F8: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_92F9:;
    /* $92F9: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9325 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_92FC:;
    /* $92FC: 8D */ maybe_trigger_vblank(4); nes_write(0x030D, g_cpu.A);
label_92FF:;
    /* $92FF: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9328 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9302:;
    /* $9302: 8D */ maybe_trigger_vblank(4); nes_write(0x030E, g_cpu.A);
label_9305:;
    /* $9305: EE */ maybe_trigger_vblank(6); { uint16_t a=0x6881; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9308:;
    /* $9308: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_930D;
label_930A:;
    /* $930A: EE */ maybe_trigger_vblank(6); { uint16_t a=0x6882; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_930D:;
    /* $930D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_930F:;
    /* $930F: 85 */ maybe_trigger_vblank(3); nes_write(0x1E, g_cpu.A);
label_9311:;
    /* $9311: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x13; g_cpu.S--; func_C45D();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9311, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9314:;
    /* $9314: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x16; g_cpu.S--; func_C5DC();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9314, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9317:;
    /* $9317: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x93; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x19; g_cpu.S--; func_C487();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9317, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_931A:;
    /* $931A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x74); FLAG_NZ(g_cpu.A);
label_931C:;
    /* $931C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_931E:;
    /* $931E: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_931F:;
    /* $931F: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xCA30 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9322:;
    /* $9322: 85 */ maybe_trigger_vblank(3); nes_write(0x24, g_cpu.A);
label_9324:;
    /* $9324: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8E17_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8E17_b0");
#endif
label_8E17:;
    /* $8E17: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8E; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x19; g_cpu.S--; func_8E21_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8E17, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8E1A:;
    /* $8E1A: 8D */ maybe_trigger_vblank(4); nes_write(0x6999, g_cpu.A);
label_8E1D:;
    /* $8E1D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8E; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1F; g_cpu.S--; func_8E2D_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8E1D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8E20:;
    /* $8E20: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8E6C_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8E6C_b0");
#endif
label_8E6C:;
    /* $8E6C: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_8E6E:;
    /* $8E6E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8E; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x70; g_cpu.S--; func_8F2D_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8E6E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8E71:;
    /* $8E71: 8D */ maybe_trigger_vblank(4); nes_write(0x699A, g_cpu.A);
label_8E74:;
    /* $8E74: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_8E76:;
    /* $8E76: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8E; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x78; g_cpu.S--; func_8F33_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8E76, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8E79:;
    /* $8E79: 8D */ maybe_trigger_vblank(4); nes_write(0x699B, g_cpu.A);
label_8E7C:;
    /* $8E7C: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_8E7E:;
    /* $8E7E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8E; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x80; g_cpu.S--; func_8F46_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8E7E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8E81:;
    /* $8E81: 8D */ maybe_trigger_vblank(4); nes_write(0x699C, g_cpu.A);
label_8E84:;
    /* $8E84: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x02; FLAG_NZ(g_cpu.Y);
label_8E86:;
    /* $8E86: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8E; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x88; g_cpu.S--; func_8F5A_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8E86, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8E89:;
    /* $8E89: 8D */ maybe_trigger_vblank(4); nes_write(0x699D, g_cpu.A);
label_8E8C:;
    /* $8E8C: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x03; FLAG_NZ(g_cpu.Y);
label_8E8E:;
    /* $8E8E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8E; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x90; g_cpu.S--; func_8F2D_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8E8E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8E91:;
    /* $8E91: 8D */ maybe_trigger_vblank(4); nes_write(0x699E, g_cpu.A);
label_8E94:;
    /* $8E94: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x03; FLAG_NZ(g_cpu.Y);
label_8E96:;
    /* $8E96: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8E; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x98; g_cpu.S--; func_8F33_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8E96, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8E99:;
    /* $8E99: 8D */ maybe_trigger_vblank(4); nes_write(0x699F, g_cpu.A);
label_8E9C:;
    /* $8E9C: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x04; FLAG_NZ(g_cpu.Y);
label_8E9E:;
    /* $8E9E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8E; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA0; g_cpu.S--; func_8F46_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8E9E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8EA1:;
    /* $8EA1: 8D */ maybe_trigger_vblank(4); nes_write(0x69A0, g_cpu.A);
label_8EA4:;
    /* $8EA4: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x05; FLAG_NZ(g_cpu.Y);
label_8EA6:;
    /* $8EA6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8E; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA8; g_cpu.S--; func_8F5A_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8EA6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8EA9:;
    /* $8EA9: 8D */ maybe_trigger_vblank(4); nes_write(0x69A1, g_cpu.A);
label_8EAC:;
    /* $8EAC: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x06; FLAG_NZ(g_cpu.Y);
label_8EAE:;
    /* $8EAE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8E; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB0; g_cpu.S--; func_8F2D_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8EAE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8EB1:;
    /* $8EB1: 8D */ maybe_trigger_vblank(4); nes_write(0x69A2, g_cpu.A);
label_8EB4:;
    /* $8EB4: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x06; FLAG_NZ(g_cpu.Y);
label_8EB6:;
    /* $8EB6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8E; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; func_8F33_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8EB6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8EB9:;
    /* $8EB9: 8D */ maybe_trigger_vblank(4); nes_write(0x69A3, g_cpu.A);
label_8EBC:;
    /* $8EBC: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x07; FLAG_NZ(g_cpu.Y);
label_8EBE:;
    /* $8EBE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8E; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC0; g_cpu.S--; func_8F46_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8EBE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8EC1:;
    /* $8EC1: 8D */ maybe_trigger_vblank(4); nes_write(0x69A4, g_cpu.A);
label_8EC4:;
    /* $8EC4: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x08; FLAG_NZ(g_cpu.Y);
label_8EC6:;
    /* $8EC6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8E; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC8; g_cpu.S--; func_8F5A_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8EC6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8EC9:;
    /* $8EC9: 8D */ maybe_trigger_vblank(4); nes_write(0x69A5, g_cpu.A);
label_8ECC:;
    /* $8ECC: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x09; FLAG_NZ(g_cpu.Y);
label_8ECE:;
    /* $8ECE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8E; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD0; g_cpu.S--; func_8F2D_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8ECE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8ED1:;
    /* $8ED1: 8D */ maybe_trigger_vblank(4); nes_write(0x69A6, g_cpu.A);
label_8ED4:;
    /* $8ED4: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x09; FLAG_NZ(g_cpu.Y);
label_8ED6:;
    /* $8ED6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8E; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD8; g_cpu.S--; func_8F33_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8ED6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8ED9:;
    /* $8ED9: 8D */ maybe_trigger_vblank(4); nes_write(0x69A7, g_cpu.A);
label_8EDC:;
    /* $8EDC: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0A; FLAG_NZ(g_cpu.Y);
label_8EDE:;
    /* $8EDE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8E; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE0; g_cpu.S--; func_8F46_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8EDE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8EE1:;
    /* $8EE1: 8D */ maybe_trigger_vblank(4); nes_write(0x69A8, g_cpu.A);
label_8EE4:;
    /* $8EE4: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0B; FLAG_NZ(g_cpu.Y);
label_8EE6:;
    /* $8EE6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8E; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE8; g_cpu.S--; func_8F5A_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8EE6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8EE9:;
    /* $8EE9: 8D */ maybe_trigger_vblank(4); nes_write(0x69A9, g_cpu.A);
label_8EEC:;
    /* $8EEC: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0C; FLAG_NZ(g_cpu.Y);
label_8EEE:;
    /* $8EEE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8E; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF0; g_cpu.S--; func_8F2D_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8EEE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8EF1:;
    /* $8EF1: 8D */ maybe_trigger_vblank(4); nes_write(0x69AA, g_cpu.A);
label_8EF4:;
    /* $8EF4: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0C; FLAG_NZ(g_cpu.Y);
label_8EF6:;
    /* $8EF6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8E; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF8; g_cpu.S--; func_8F33_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8EF6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8EF9:;
    /* $8EF9: 8D */ maybe_trigger_vblank(4); nes_write(0x69AB, g_cpu.A);
label_8EFC:;
    /* $8EFC: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0D; FLAG_NZ(g_cpu.Y);
label_8EFE:;
    /* $8EFE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x00; g_cpu.S--; func_8F46_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8EFE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8F01:;
    /* $8F01: 8D */ maybe_trigger_vblank(4); nes_write(0x69AC, g_cpu.A);
label_8F04:;
    /* $8F04: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0E; FLAG_NZ(g_cpu.Y);
label_8F06:;
    /* $8F06: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x08; g_cpu.S--; func_8F5A_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8F06, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8F09:;
    /* $8F09: 8D */ maybe_trigger_vblank(4); nes_write(0x69AD, g_cpu.A);
label_8F0C:;
    /* $8F0C: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0F; FLAG_NZ(g_cpu.Y);
label_8F0E:;
    /* $8F0E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x10; g_cpu.S--; func_8F2D_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8F0E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8F11:;
    /* $8F11: 8D */ maybe_trigger_vblank(4); nes_write(0x69AE, g_cpu.A);
label_8F14:;
    /* $8F14: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0F; FLAG_NZ(g_cpu.Y);
label_8F16:;
    /* $8F16: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x18; g_cpu.S--; func_8F33_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8F16, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8F19:;
    /* $8F19: 8D */ maybe_trigger_vblank(4); nes_write(0x69AF, g_cpu.A);
label_8F1C:;
    /* $8F1C: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x10; FLAG_NZ(g_cpu.Y);
label_8F1E:;
    /* $8F1E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x20; g_cpu.S--; func_8F46_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8F1E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8F21:;
    /* $8F21: 8D */ maybe_trigger_vblank(4); nes_write(0x69B0, g_cpu.A);
label_8F24:;
    /* $8F24: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x11; FLAG_NZ(g_cpu.Y);
label_8F26:;
    /* $8F26: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x28; g_cpu.S--; func_8F5A_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8F26, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8F29:;
    /* $8F29: 8D */ maybe_trigger_vblank(4); nes_write(0x69B1, g_cpu.A);
label_8F2C:;
    /* $8F2C: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_93F9_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_93F9_b0");
#endif
label_93F9:;
    /* $93F9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x16; FLAG_NZ(g_cpu.A);
label_93FB:;
    /* $93FB: 8D */ maybe_trigger_vblank(4); nes_write(0x0780, g_cpu.A);
label_93FE:;
    /* $93FE: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x05; FLAG_NZ(g_cpu.X);
label_9400:;
    /* $9400: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x699A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9403:;
    /* $9403: 9D */ maybe_trigger_vblank(5); nes_write((0x0781 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9406:;
    /* $9406: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9407:;
    /* $9407: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_9408:;
    /* $9408: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9400;
    }
label_940A:;
    /* $940A: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9C9A_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9C9A_b0");
#endif
label_9C9A:;
    /* $9C9A: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x30; FLAG_NZ(g_cpu.X);
label_9C9C:;
    /* $9C9C: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x7D); FLAG_NZ(g_cpu.Y);
label_9C9E:;
    /* $9C9E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9D5A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CA1:;
    /* $9CA1: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_9CA3:;
    /* $9CA3: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9D5B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CA6:;
    /* $9CA6: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_9CA8:;
    /* $9CA8: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_9CAA:;
    /* $9CAA: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CAC:;
    /* $9CAC: 9D */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CAF:;
    /* $9CAF: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9CB0:;
    /* $9CB0: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9CB1:;
    /* $9CB1: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CB3:;
    /* $9CB3: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_9CC0;
label_9CB5:;
    /* $9CB5: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x7F; FLAG_NZ(g_cpu.A);
label_9CB7:;
    /* $9CB7: 9D */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CBA:;
    /* $9CBA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x7E); FLAG_NZ(g_cpu.A);
label_9CBC:;
    /* $9CBC: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x40; FLAG_NZ(g_cpu.A);
label_9CBE:;
    /* $9CBE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9CC5;
label_9CC0:;
    /* $9CC0: 9D */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CC3:;
    /* $9CC3: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x7E); FLAG_NZ(g_cpu.A);
label_9CC5:;
    /* $9CC5: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9CC6:;
    /* $9CC6: 9D */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CC9:;
    /* $9CC9: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9CCA:;
    /* $9CCA: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9CCB:;
    /* $9CCB: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CCD:;
    /* $9CCD: 9D */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CD0:;
    /* $9CD0: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9CD1:;
    /* $9CD1: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9CD2:;
    /* $9CD2: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x7C); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9CD4:;
    /* $9CD4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9CAA;
    }
label_9CD6:;
    /* $9CD6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x33); FLAG_NZ(g_cpu.A);
label_9CD8:;
    /* $9CD8: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_9CDA:;
    /* $9CDA: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_9CF9;
label_9CDC:;
    /* $9CDC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x7F); FLAG_NZ(g_cpu.A);
label_9CDE:;
    /* $9CDE: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_9CE0:;
    /* $9CE0: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_9CF9;
label_9CE2:;
    /* $9CE2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x6872); FLAG_NZ(g_cpu.A);
label_9CE5:;
    /* $9CE5: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_9CE7:;
    /* $9CE7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9CF9;
label_9CE9:;
    /* $9CE9: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_9CEB:;
    /* $9CEB: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_9CED:;
    /* $9CED: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9CFA + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CF0:;
    /* $9CF0: 9D */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CF3:;
    /* $9CF3: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9CF4:;
    /* $9CF4: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9CF5:;
    /* $9CF5: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x18; g_cpu.C=(g_cpu.Y>=0x18)?1:0; FLAG_NZ(r&0xFF); }
label_9CF7:;
    /* $9CF7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9CED;
    }
label_9CF9:;
    /* $9CF9: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9C7F_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9C7F_b0");
#endif
label_9C7F:;
    /* $9C7F: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x83); FLAG_NZ(g_cpu.X);
label_9C81:;
    /* $9C81: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9D12 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C84:;
    /* $9C84: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_9C86:;
    /* $9C86: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9D13 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C89:;
    /* $9C89: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_9C8B:;
    /* $9C8B: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x20; FLAG_NZ(g_cpu.X);
label_9C8D:;
    /* $9C8D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_9C8F:;
    /* $9C8F: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C91:;
    /* $9C91: 9D */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9C94:;
    /* $9C94: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9C95:;
    /* $9C95: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9C96:;
    /* $9C96: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x84); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9C98:;
    /* $9C98: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9C8F;
    }
label_9C9A:;
    /* $9C9A: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x30; FLAG_NZ(g_cpu.X);
label_9C9C:;
    /* $9C9C: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x7D); FLAG_NZ(g_cpu.Y);
label_9C9E:;
    /* $9C9E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9D5A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CA1:;
    /* $9CA1: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_9CA3:;
    /* $9CA3: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9D5B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CA6:;
    /* $9CA6: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_9CA8:;
    /* $9CA8: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_9CAA:;
    /* $9CAA: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CAC:;
    /* $9CAC: 9D */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CAF:;
    /* $9CAF: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9CB0:;
    /* $9CB0: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9CB1:;
    /* $9CB1: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CB3:;
    /* $9CB3: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_9CC0;
label_9CB5:;
    /* $9CB5: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x7F; FLAG_NZ(g_cpu.A);
label_9CB7:;
    /* $9CB7: 9D */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CBA:;
    /* $9CBA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x7E); FLAG_NZ(g_cpu.A);
label_9CBC:;
    /* $9CBC: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x40; FLAG_NZ(g_cpu.A);
label_9CBE:;
    /* $9CBE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9CC5;
label_9CC0:;
    /* $9CC0: 9D */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CC3:;
    /* $9CC3: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x7E); FLAG_NZ(g_cpu.A);
label_9CC5:;
    /* $9CC5: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9CC6:;
    /* $9CC6: 9D */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CC9:;
    /* $9CC9: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9CCA:;
    /* $9CCA: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9CCB:;
    /* $9CCB: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CCD:;
    /* $9CCD: 9D */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CD0:;
    /* $9CD0: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9CD1:;
    /* $9CD1: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9CD2:;
    /* $9CD2: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x7C); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9CD4:;
    /* $9CD4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9CAA;
    }
label_9CD6:;
    /* $9CD6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x33); FLAG_NZ(g_cpu.A);
label_9CD8:;
    /* $9CD8: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_9CDA:;
    /* $9CDA: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_9CF9;
label_9CDC:;
    /* $9CDC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x7F); FLAG_NZ(g_cpu.A);
label_9CDE:;
    /* $9CDE: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_9CE0:;
    /* $9CE0: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_9CF9;
label_9CE2:;
    /* $9CE2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x6872); FLAG_NZ(g_cpu.A);
label_9CE5:;
    /* $9CE5: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_9CE7:;
    /* $9CE7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9CF9;
label_9CE9:;
    /* $9CE9: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_9CEB:;
    /* $9CEB: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_9CED:;
    /* $9CED: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9CFA + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CF0:;
    /* $9CF0: 9D */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CF3:;
    /* $9CF3: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9CF4:;
    /* $9CF4: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9CF5:;
    /* $9CF5: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x18; g_cpu.C=(g_cpu.Y>=0x18)?1:0; FLAG_NZ(r&0xFF); }
label_9CF7:;
    /* $9CF7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9CED;
    }
label_9CF9:;
    /* $9CF9: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9A38_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A38_b0");
#endif
label_9A38:;
    /* $9A38: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_95AE_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95AE_b0");
#endif
label_95AE:;
    /* $95AE: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_95AF:;
    /* $95AF: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_95B0:;
    /* $95B0: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_95B1:;
    /* $95B1: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x1B29; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_95B4:;
    /* $95B4: 1A */ maybe_trigger_vblank(2); /* NOP */
label_95B5:;
    /* $95B5: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x3535; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_95B8:;
    /* $95B8: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x0F); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_95BA:;
    /* $95BA: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x14 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_95BC:;
    /* $95BC: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x0F); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_95BE:;
    /* $95BE: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x1A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_95C0:;
    /* $95C0: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x0F; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_95C2:;
    /* $95C2: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x3A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_95C4:;
    /* $95C4: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x170F + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_95C7:;
    /* $95C7: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x37) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_95C9:;
    /* $95C9: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x2232; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_95CC:;
    /* $95CC: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_95CD:;
    /* $95CD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x95CD); return;
}

void func_95B1_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95B1_b0");
#endif
label_95B1:;
    /* $95B1: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x1B29; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_95B4:;
    /* $95B4: 1A */ maybe_trigger_vblank(2); /* NOP */
label_95B5:;
    /* $95B5: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x3535; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_95B8:;
    /* $95B8: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x0F); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_95BA:;
    /* $95BA: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x14 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_95BC:;
    /* $95BC: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x0F); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_95BE:;
    /* $95BE: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x1A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_95C0:;
    /* $95C0: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x0F; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_95C2:;
    /* $95C2: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x3A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_95C4:;
    /* $95C4: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x170F + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_95C7:;
    /* $95C7: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x37) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_95C9:;
    /* $95C9: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x2232; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_95CC:;
    /* $95CC: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_95CD:;
    /* $95CD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x95CD); return;
}

void func_95B4_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95B4_b0");
#endif
label_95B4:;
    /* $95B4: 1A */ maybe_trigger_vblank(2); /* NOP */
label_95B5:;
    /* $95B5: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x3535; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_95B8:;
    /* $95B8: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x0F); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_95BA:;
    /* $95BA: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x14 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_95BC:;
    /* $95BC: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x0F); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_95BE:;
    /* $95BE: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x1A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_95C0:;
    /* $95C0: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x0F; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_95C2:;
    /* $95C2: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x3A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_95C4:;
    /* $95C4: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x170F + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_95C7:;
    /* $95C7: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x37) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_95C9:;
    /* $95C9: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x2232; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_95CC:;
    /* $95CC: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_95CD:;
    /* $95CD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x95CD); return;
}

void func_95B7_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95B7_b0");
#endif
label_95B7:;
    /* $95B7: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x04 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_95B9:;
    /* $95B9: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x1435; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_95BC:;
    /* $95BC: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x0F); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_95BE:;
    /* $95BE: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x1A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_95C0:;
    /* $95C0: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x0F; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_95C2:;
    /* $95C2: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x3A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_95C4:;
    /* $95C4: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x170F + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_95C7:;
    /* $95C7: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x37) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_95C9:;
    /* $95C9: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x2232; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_95CC:;
    /* $95CC: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_95CD:;
    /* $95CD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x95CD); return;
}

void func_95BA_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95BA_b0");
#endif
label_95BA:;
    /* $95BA: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x14 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_95BC:;
    /* $95BC: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x0F); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_95BE:;
    /* $95BE: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x1A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_95C0:;
    /* $95C0: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x0F; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_95C2:;
    /* $95C2: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x3A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_95C4:;
    /* $95C4: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x170F + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_95C7:;
    /* $95C7: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x37) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_95C9:;
    /* $95C9: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x2232; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_95CC:;
    /* $95CC: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_95CD:;
    /* $95CD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x95CD); return;
}

void func_95E5_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95E5_b0");
#endif
label_95E5:;
    /* $95E5: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x3A37; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_95E8:;
    /* $95E8: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x170F + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_95EB:;
    /* $95EB: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x37) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_95ED:;
    /* $95ED: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x2232; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_95F0:;
    /* $95F0: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_95F1:;
    /* $95F1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x95F1); return;
}

void func_80B0_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80B0_b0");
#endif
label_80B0:;
    /* $80B0: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x40C0); FLAG_NZ(g_cpu.A);
label_80B3:;
    /* $80B3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0x80AC); return; }
label_80B5:;
    /* $80B5: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x02); FLAG_NZ(g_cpu.Y);
label_80B7:;
    /* $80B7: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x80C9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_80BA:;
    /* $80BA: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x40; FLAG_NZ(g_cpu.Y);
label_80BC:;
    /* $80BC: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address(0x80AC); return; }
label_80BE:;
    /* $80BE: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_80BF:;
    /* $80BF: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x68; g_cpu.C=(g_cpu.X>=0x68)?1:0; FLAG_NZ(r&0xFF); }
label_80C1:;
    /* $80C1: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0x809E); return; }
label_80C3:;
    /* $80C3: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_80C5:;
    /* $80C5: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_98AE_b0(); return;
}

void func_95A8_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95A8_b0");
#endif
label_95A8:;
    /* $95A8: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_95A9:;
    /* $95A9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x95A9); return;
}

void func_81DA_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81DA_b0");
#endif
label_81DA:;
    /* $81DA: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_81DB:;
    /* $81DB: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_81DD:;
    /* $81DD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x60; FLAG_NZ(g_cpu.A);
label_81DF:;
    /* $81DF: 8D */ maybe_trigger_vblank(4); nes_write(0x030D, g_cpu.A);
label_81E2:;
    /* $81E2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x7C; FLAG_NZ(g_cpu.A);
label_81E4:;
    /* $81E4: 8D */ maybe_trigger_vblank(4); nes_write(0x030E, g_cpu.A);
label_81E7:;
    /* $81E7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0305); FLAG_NZ(g_cpu.A);
label_81EA:;
    /* $81EA: 8D */ maybe_trigger_vblank(4); nes_write(0x0306, g_cpu.A);
label_81ED:;
    /* $81ED: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

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
    /* $820F: 8D */ maybe_trigger_vblank(4); nes_write(0x0300, g_cpu.A);
label_8212:;
    /* $8212: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0B; FLAG_NZ(g_cpu.A);
label_8214:;
    /* $8214: 8D */ maybe_trigger_vblank(4); nes_write(0x0305, g_cpu.A);
label_8217:;
    /* $8217: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_8219:;
    /* $8219: 8D */ maybe_trigger_vblank(4); nes_write(0x0306, g_cpu.A);
label_821C:;
    /* $821C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_821E:;
    /* $821E: 8D */ maybe_trigger_vblank(4); nes_write(0x0303, g_cpu.A);
label_8221:;
    /* $8221: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_8223:;
    /* $8223: 85 */ maybe_trigger_vblank(3); nes_write(0x2C, g_cpu.A);
label_8225:;
    /* $8225: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8227:;
    /* $8227: 85 */ maybe_trigger_vblank(3); nes_write(0xC9, g_cpu.A);
label_8229:;
    /* $8229: 85 */ maybe_trigger_vblank(3); nes_write(0xCB, g_cpu.A);
label_822B:;
    /* $822B: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_822D:;
    /* $822D: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8206_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8206_b0");
#endif
label_8206:;
    /* $8206: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0300); FLAG_NZ(g_cpu.A);
label_8209:;
    /* $8209: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_820B:;
    /* $820B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_822D;
label_820D:;
    /* $820D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_820F:;
    /* $820F: 8D */ maybe_trigger_vblank(4); nes_write(0x0300, g_cpu.A);
label_8212:;
    /* $8212: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0B; FLAG_NZ(g_cpu.A);
label_8214:;
    /* $8214: 8D */ maybe_trigger_vblank(4); nes_write(0x0305, g_cpu.A);
label_8217:;
    /* $8217: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_8219:;
    /* $8219: 8D */ maybe_trigger_vblank(4); nes_write(0x0306, g_cpu.A);
label_821C:;
    /* $821C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_821E:;
    /* $821E: 8D */ maybe_trigger_vblank(4); nes_write(0x0303, g_cpu.A);
label_8221:;
    /* $8221: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_8223:;
    /* $8223: 85 */ maybe_trigger_vblank(3); nes_write(0x2C, g_cpu.A);
label_8225:;
    /* $8225: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8227:;
    /* $8227: 85 */ maybe_trigger_vblank(3); nes_write(0xC9, g_cpu.A);
label_8229:;
    /* $8229: 85 */ maybe_trigger_vblank(3); nes_write(0xCB, g_cpu.A);
label_822B:;
    /* $822B: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_822D:;
    /* $822D: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

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
    /* $8296: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_82A2;
label_8298:;
    /* $8298: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_829A:;
    /* $829A: 85 */ maybe_trigger_vblank(3); nes_write(0xD2, g_cpu.A);
label_829C:;
    /* $829C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_829E:;
    /* $829E: 85 */ maybe_trigger_vblank(3); nes_write(0x2C, g_cpu.A);
label_82A0:;
    /* $82A0: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_82A2:;
    /* $82A2: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_832F_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_832F_b0");
#endif
label_832F:;
    /* $832F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x832F); return;
}

void func_8B9C_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8B9C_b0");
#endif
label_8B9C:;
    /* $8B9C: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_8B9E:;
    /* $8B9E: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8B9F:;
    /* $8B9F: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8BA0:;
    /* $8BA0: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8BA1:;
    /* $8BA1: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9029 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8BA4:;
    /* $8BA4: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8BA6:;
    /* $8BA6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8BAF;
label_8BA8:;
    /* $8BA8: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x902A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8BAB:;
    /* $8BAB: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x01); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8BAD:;
    /* $8BAD: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8BB5;
label_8BAF:;
    /* $8BAF: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8BB0:;
    /* $8BB0: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x3C; g_cpu.C=(g_cpu.X>=0x3C)?1:0; FLAG_NZ(r&0xFF); }
label_8BB2:;
    /* $8BB2: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8B9E;
    }
label_8BB4:;
    /* $8BB4: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8BB5:;
    /* $8BB5: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8BB6:;
    /* $8BB6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; func_C2C0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8BB6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8BB9:;
    /* $8BB9: 85 */ maybe_trigger_vblank(3); nes_write(0x05, g_cpu.A);
label_8BBB:;
    /* $8BBB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBD; g_cpu.S--; func_C2C6();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8BBB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8BBE:;
    /* $8BBE: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_8BC0:;
    /* $8BC0: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8BC1:;
    /* $8BC1: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8BC2:;
    /* $8BC2: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8BC4:;
    /* $8BC4: 85 */ maybe_trigger_vblank(3); nes_write(0x06, g_cpu.A);
label_8BC6:;
    /* $8BC6: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x05); FLAG_NZ(g_cpu.X);
label_8BC8:;
    /* $8BC8: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6988 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8BCB:;
    /* $8BCB: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x06); FLAG_NZ(g_cpu.Y);
label_8BCD:;
    /* $8BCD: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x9021 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8BD0:;
    /* $8BD0: 9D */ maybe_trigger_vblank(5); nes_write((0x6988 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8BD3:;
    /* $8BD3: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8871_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8871_b0");
#endif
label_8871:;
    /* $8871: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_8873:;
    /* $8873: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_887A;
label_8875:;
    /* $8875: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_8877:;
    /* $8877: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x88; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x79; g_cpu.S--; func_C3D4();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8877, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_887A:;
    /* $887A: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9871_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9871_b0");
#endif
label_9871:;
    /* $9871: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_9873:;
    /* $9873: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_9875:;
    /* $9875: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_9877:;
    /* $9877: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x04; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_9879:;
    /* $9879: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_9883;
label_987B:;
    /* $987B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_987D:;
    /* $987D: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x00); FLAG_NZ(g_cpu.A);
label_987F:;
    /* $987F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9883;
label_9881:;
    /* $9881: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x04; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9883:;
    /* $9883: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_9885:;
    /* $9885: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9877;
    }
label_9887:;
    /* $9887: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x04); FLAG_NZ(g_cpu.A);
label_9889:;
    /* $9889: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8FF1_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8FF1_b0");
#endif
label_8FF1:;
    /* $8FF1: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x699A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8FF4:;
    /* $8FF4: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8FF5:;
    /* $8FF5: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8FF6:;
    /* $8FF6: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8FF8:;
    /* $8FF8: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x699B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8FFB:;
    /* $8FFB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFD; g_cpu.S--; func_C2BF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8FFB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8FFE:;
    /* $8FFE: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x00); FLAG_NZ(g_cpu.A);
label_9000:;
    /* $9000: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9001_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9001_b0");
#endif
label_9001:;
    /* $9001: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x699A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9004:;
    /* $9004: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x90; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x06; g_cpu.S--; func_C2C5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9004, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9007:;
    /* $9007: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_9009:;
    /* $9009: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x699B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_900C:;
    /* $900C: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_900D:;
    /* $900D: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_900E:;
    /* $900E: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x00); FLAG_NZ(g_cpu.A);
label_9010:;
    /* $9010: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9011_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9011_b0");
#endif
label_9011:;
    /* $9011: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x699A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9014:;
    /* $9014: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_9015:;
    /* $9015: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_9016:;
    /* $9016: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_9017:;
    /* $9017: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xC0; FLAG_NZ(g_cpu.A);
label_9019:;
    /* $9019: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_901B:;
    /* $901B: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x699B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_901E:;
    /* $901E: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x00); FLAG_NZ(g_cpu.A);
label_9020:;
    /* $9020: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8E4E_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8E4E_b0");
#endif
label_8E4E:;
    /* $8E4E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x6998); FLAG_NZ(g_cpu.A);
label_8E51:;
    /* $8E51: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_8E53:;
    /* $8E53: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x6997); FLAG_NZ(g_cpu.A);
label_8E56:;
    /* $8E56: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8E58:;
    /* $8E58: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x0F; FLAG_NZ(g_cpu.X);
label_8E5A:;
    /* $8E5A: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x6988 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8E5D:;
    /* $8E5D: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_8E5E:;
    /* $8E5E: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8E5A;
    }
label_8E60:;
    /* $8E60: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8E62:;
    /* $8E62: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_8E64:;
    /* $8E64: 8D */ maybe_trigger_vblank(4); nes_write(0x6997, g_cpu.A);
label_8E67:;
    /* $8E67: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8E69:;
    /* $8E69: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8E53;
    }
label_8E6B:;
    /* $8E6B: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8E21_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8E21_b0");
#endif
label_8E21:;
    /* $8E21: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x10; FLAG_NZ(g_cpu.Y);
label_8E23:;
    /* $8E23: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8E25:;
    /* $8E25: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8E26:;
    /* $8E26: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x6988 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8E29:;
    /* $8E29: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8E2A:;
    /* $8E2A: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8E25;
    }
label_8E2C:;
    /* $8E2C: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8D12_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D12_b0");
#endif
label_8D12:;
    /* $8D12: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x69B2); FLAG_NZ(g_cpu.A);
label_8D15:;
    /* $8D15: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8D3C;
label_8D17:;
    /* $8D17: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8D; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x19; g_cpu.S--; func_8BD4_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8D17, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8D1A:;
    /* $8D1A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8D; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1C; g_cpu.S--; func_8D3D_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8D1A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8D1D:;
    /* $8D1D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_8D1F:;
    /* $8D1F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x6990); FLAG_NZ(g_cpu.A);
label_8D22:;
    /* $8D22: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x80; FLAG_NZ(g_cpu.A);
label_8D24:;
    /* $8D24: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8D27;
label_8D26:;
    /* $8D26: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8D27:;
    /* $8D27: 8C */ maybe_trigger_vblank(4); nes_write(0x69B3, g_cpu.Y);
label_8D2A:;
    /* $8D2A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x6990); FLAG_NZ(g_cpu.A);
label_8D2D:;
    /* $8D2D: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x3F; FLAG_NZ(g_cpu.A);
label_8D2F:;
    /* $8D2F: 85 */ maybe_trigger_vblank(3); nes_write(0x74, g_cpu.A);
label_8D31:;
    /* $8D31: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x03; FLAG_NZ(g_cpu.Y);
label_8D33:;
    /* $8D33: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6993 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8D36:;
    /* $8D36: 99 */ maybe_trigger_vblank(5); nes_write((0x687D + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8D39:;
    /* $8D39: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8D3A:;
    /* $8D3A: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8D33;
    }
label_8D3C:;
    /* $8D3C: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8E2D_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8E2D_b0");
#endif
label_8E2D:;
    /* $8E2D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x6998); FLAG_NZ(g_cpu.A);
label_8E30:;
    /* $8E30: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_8E32:;
    /* $8E32: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x6988); FLAG_NZ(g_cpu.A);
label_8E35:;
    /* $8E35: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8E37:;
    /* $8E37: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_8E39:;
    /* $8E39: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0F; FLAG_NZ(g_cpu.Y);
label_8E3B:;
    /* $8E3B: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0x6988 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8E3E:;
    /* $8E3E: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8E3F:;
    /* $8E3F: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8E40:;
    /* $8E40: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8E3B;
    }
label_8E42:;
    /* $8E42: 66 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8E44:;
    /* $8E44: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_8E46:;
    /* $8E46: 8D */ maybe_trigger_vblank(4); nes_write(0x6988, g_cpu.A);
label_8E49:;
    /* $8E49: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8E4B:;
    /* $8E4B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8E32;
    }
label_8E4D:;
    /* $8E4D: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8F2D_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8F2D_b0");
#endif
label_8F2D:;
    /* $8F2D: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6988 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8F30:;
    /* $8F30: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8F31:;
    /* $8F31: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8F32:;
    /* $8F32: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8F33_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8F33_b0");
#endif
label_8F33:;
    /* $8F33: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6988 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8F36:;
    /* $8F36: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_8F38:;
    /* $8F38: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3A; g_cpu.S--; func_C2C5();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8F38, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8F3B:;
    /* $8F3B: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8F3D:;
    /* $8F3D: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6989 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8F40:;
    /* $8F40: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8F; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x42; g_cpu.S--; func_C2BF();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8F40, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8F43:;
    /* $8F43: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x00); FLAG_NZ(g_cpu.A);
label_8F45:;
    /* $8F45: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8F46_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8F46_b0");
#endif
label_8F46:;
    /* $8F46: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6988 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8F49:;
    /* $8F49: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_8F4B:;
    /* $8F4B: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8F4C:;
    /* $8F4C: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8F4D:;
    /* $8F4D: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8F4F:;
    /* $8F4F: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6989 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8F52:;
    /* $8F52: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_8F53:;
    /* $8F53: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_8F54:;
    /* $8F54: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_8F55:;
    /* $8F55: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_8F57:;
    /* $8F57: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x00); FLAG_NZ(g_cpu.A);
label_8F59:;
    /* $8F59: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8F5A_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8F5A_b0");
#endif
label_8F5A:;
    /* $8F5A: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6988 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8F5D:;
    /* $8F5D: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x3F; FLAG_NZ(g_cpu.A);
label_8F5F:;
    /* $8F5F: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

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
    /* $A29E: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x62 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A2A0:;
    /* $A2A0: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x75 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A2A2:;
    /* $A2A2: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x84 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A2A4:;
    /* $A2A4: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x9F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A2A6:;
    /* $A2A6: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0xAA + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A2A8:;
    /* $A2A8: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0xC8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A2AA:;
    /* $A2AA: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0xD8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A2AC:;
    /* $A2AC: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0xF1 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A2AE:;
    /* $A2AE: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x12 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A2B0:;
    /* $A2B0: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x17); FLAG_NZ(g_cpu.Y);
label_A2B2:;
    /* $A2B2: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x26); FLAG_NZ(g_cpu.Y);
label_A2B4:;
    /* $A2B4: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x42); FLAG_NZ(g_cpu.Y);
label_A2B6:;
    /* $A2B6: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x6B); FLAG_NZ(g_cpu.Y);
label_A2B8:;
    /* $A2B8: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x70); FLAG_NZ(g_cpu.Y);
label_A2BA:;
    /* $A2BA: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x93); FLAG_NZ(g_cpu.Y);
label_A2BC:;
    /* $A2BC: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x9C); FLAG_NZ(g_cpu.Y);
label_A2BE:;
    /* $A2BE: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xAD); FLAG_NZ(g_cpu.Y);
label_A2C0:;
    /* $A2C0: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xBD); FLAG_NZ(g_cpu.Y);
label_A2C2:;
    /* $A2C2: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xCD); FLAG_NZ(g_cpu.Y);
label_A2C4:;
    /* $A2C4: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xD2); FLAG_NZ(g_cpu.Y);
label_A2C6:;
    /* $A2C6: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xD7); FLAG_NZ(g_cpu.Y);
label_A2C8:;
    /* $A2C8: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xDC); FLAG_NZ(g_cpu.Y);
label_A2CA:;
    /* $A2CA: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xE1); FLAG_NZ(g_cpu.Y);
label_A2CC:;
    /* $A2CC: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xE6); FLAG_NZ(g_cpu.Y);
label_A2CE:;
    /* $A2CE: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xEB); FLAG_NZ(g_cpu.Y);
label_A2D0:;
    /* $A2D0: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xEF); FLAG_NZ(g_cpu.Y);
label_A2D2:;
    /* $A2D2: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xF0); FLAG_NZ(g_cpu.Y);
label_A2D4:;
    /* $A2D4: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x08); FLAG_NZ(g_cpu.Y);
label_A2D6:;
    /* $A2D6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1A); FLAG_NZ(g_cpu.A);
label_A2D8:;
    /* $A2D8: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_A2DA:;
    /* $A2DA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x24); FLAG_NZ(g_cpu.A);
label_A2DC:;
    /* $A2DC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_A2DE:;
    /* $A2DE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x24); FLAG_NZ(g_cpu.A);
label_A2E0:;
    /* $A2E0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x38); FLAG_NZ(g_cpu.A);
label_A2E2:;
    /* $A2E2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x3D); FLAG_NZ(g_cpu.A);
label_A2E4:;
    /* $A2E4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x38); FLAG_NZ(g_cpu.A);
label_A2E6:;
    /* $A2E6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x3D); FLAG_NZ(g_cpu.A);
label_A2E8:;
    /* $A2E8: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x20); FLAG_NZ(g_cpu.A);
label_A2EA:;
    /* $A2EA: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x110A); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A2ED:;
    /* $A2ED: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A2EE:;
    /* $A2EE: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A2EF:;
    /* $A2EF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x1E22 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A2F2:;
    /* $A2F2: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A2F4:;
    /* $A2F4: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x12 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A2F6:;
    /* $A2F6: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A2F8:;
    /* $A2F8: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_95C0_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95C0_b0");
#endif
label_95C0:;
    /* $95C0: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x0F; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_95C2:;
    /* $95C2: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x3A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_95C4:;
    /* $95C4: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x170F + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_95C7:;
    /* $95C7: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x37) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_95C9:;
    /* $95C9: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x2232; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_95CC:;
    /* $95CC: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_95CD:;
    /* $95CD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x95CD); return;
}

void func_8420_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8420_b0");
#endif
label_8420:;
    /* $8420: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_8422:;
    /* $8422: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_8424:;
    /* $8424: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_8426:;
    /* $8426: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_8428:;
    /* $8428: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_842A:;
    /* $842A: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_842C:;
    /* $842C: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_842E:;
    /* $842E: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_8430:;
    /* $8430: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8431:;
    /* $8431: 4F */ maybe_trigger_vblank(6); { uint16_t a=0x21FF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8434:;
    /* $8434: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x1C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8436:;
    /* $8436: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8BD4_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8BD4_b0");
#endif
label_8BD4:;
    /* $8BD4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8BD6:;
    /* $8BD6: 8D */ maybe_trigger_vblank(4); nes_write(0x6886, g_cpu.A);
label_8BD9:;
    /* $8BD9: 85 */ maybe_trigger_vblank(3); nes_write(0x05, g_cpu.A);
label_8BDB:;
    /* $8BDB: 85 */ maybe_trigger_vblank(3); nes_write(0x06, g_cpu.A);
label_8BDD:;
    /* $8BDD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3B; FLAG_NZ(g_cpu.A);
label_8BDF:;
    /* $8BDF: 85 */ maybe_trigger_vblank(3); nes_write(0x07, g_cpu.A);
label_8BE1:;
    /* $8BE1: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x05); FLAG_NZ(g_cpu.Y);
label_8BE3:;
    /* $8BE3: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6988 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8BE6:;
    /* $8BE6: 85 */ maybe_trigger_vblank(3); nes_write(0x08, g_cpu.A);
label_8BE8:;
    /* $8BE8: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_8BEA:;
    /* $8BEA: 86 */ maybe_trigger_vblank(3); nes_write(0x09, g_cpu.X);
label_8BEC:;
    /* $8BEC: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x06); FLAG_NZ(g_cpu.X);
label_8BEE:;
    /* $8BEE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8C0A;
label_8BF0:;
    /* $8BF0: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x01; FLAG_NZ(g_cpu.X);
label_8BF2:;
    /* $8BF2: 86 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.X);
label_8BF4:;
    /* $8BF4: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8BF5:;
    /* $8BF5: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_8BF6:;
    /* $8BF6: 85 */ maybe_trigger_vblank(3); nes_write(0x08, g_cpu.A);
label_8BF8:;
    /* $8BF8: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x02); FLAG_NZ(g_cpu.X);
label_8BFA:;
    /* $8BFA: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x06); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8BFC:;
    /* $8BFC: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8C0A;
label_8BFE:;
    /* $8BFE: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C00:;
    /* $8C00: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_8BF5;
label_8C03:;
    /* $8C03: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x05); FLAG_NZ(g_cpu.Y);
label_8C05:;
    /* $8C05: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6988 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8C08:;
    /* $8C08: 85 */ maybe_trigger_vblank(3); nes_write(0x08, g_cpu.A);
label_8C0A:;
    /* $8C0A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x08); FLAG_NZ(g_cpu.A);
label_8C0C:;
    /* $8C0C: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_8C0D:;
    /* $8C0D: 85 */ maybe_trigger_vblank(3); nes_write(0x08, g_cpu.A);
label_8C0F:;
    /* $8C0F: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_8C14;
label_8C11:;
    /* $8C11: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x13; g_cpu.S--; func_8C39_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8C11, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8C14:;
    /* $8C14: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x06); FLAG_NZ(g_cpu.Y);
label_8C16:;
    /* $8C16: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x07; g_cpu.C=(g_cpu.Y>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_8C18:;
    /* $8C18: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8C27;
label_8C1A:;
    /* $8C1A: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C1C:;
    /* $8C1C: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x09; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C1E:;
    /* $8C1E: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x09); FLAG_NZ(g_cpu.X);
label_8C20:;
    /* $8C20: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x07); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8C22:;
    /* $8C22: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8C38;
label_8C24:;
    /* $8C24: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_8C0A;
label_8C27:;
    /* $8C27: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_8C29:;
    /* $8C29: 84 */ maybe_trigger_vblank(3); nes_write(0x06, g_cpu.Y);
label_8C2B:;
    /* $8C2B: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x05; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C2D:;
    /* $8C2D: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x09; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C2F:;
    /* $8C2F: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x09); FLAG_NZ(g_cpu.X);
label_8C31:;
    /* $8C31: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x07); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8C33:;
    /* $8C33: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8C38;
label_8C35:;
    /* $8C35: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_8C03;
label_8C38:;
    /* $8C38: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8D3D_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D3D_b0");
#endif
label_8D3D:;
    /* $8D3D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x6991); FLAG_NZ(g_cpu.A);
label_8D40:;
    /* $8D40: 8D */ maybe_trigger_vblank(4); nes_write(0x6878, g_cpu.A);
label_8D43:;
    /* $8D43: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x6992); FLAG_NZ(g_cpu.A);
label_8D46:;
    /* $8D46: 8D */ maybe_trigger_vblank(4); nes_write(0x6879, g_cpu.A);
label_8D49:;
    /* $8D49: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8D4B:;
    /* $8D4B: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8D4D:;
    /* $8D4D: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_8D4F:;
    /* $8D4F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x6997); FLAG_NZ(g_cpu.A);
label_8D52:;
    /* $8D52: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x80; FLAG_NZ(g_cpu.A);
label_8D54:;
    /* $8D54: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8D5C;
label_8D56:;
    /* $8D56: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_8D58:;
    /* $8D58: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_8D5A:;
    /* $8D5A: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8D5C:;
    /* $8D5C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x6997); FLAG_NZ(g_cpu.A);
label_8D5F:;
    /* $8D5F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x40; FLAG_NZ(g_cpu.A);
label_8D61:;
    /* $8D61: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8D69;
label_8D63:;
    /* $8D63: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_8D65:;
    /* $8D65: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x01; FLAG_NZ(g_cpu.A);
label_8D67:;
    /* $8D67: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8D69:;
    /* $8D69: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_8D6B:;
    /* $8D6B: 8D */ maybe_trigger_vblank(4); nes_write(0x687B, g_cpu.A);
label_8D6E:;
    /* $8D6E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x6997); FLAG_NZ(g_cpu.A);
label_8D71:;
    /* $8D71: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_8D73:;
    /* $8D73: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8D7B;
label_8D75:;
    /* $8D75: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x02); FLAG_NZ(g_cpu.A);
label_8D77:;
    /* $8D77: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_8D79:;
    /* $8D79: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_8D7B:;
    /* $8D7B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x6997); FLAG_NZ(g_cpu.A);
label_8D7E:;
    /* $8D7E: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_8D80:;
    /* $8D80: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8D88;
label_8D82:;
    /* $8D82: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x02); FLAG_NZ(g_cpu.A);
label_8D84:;
    /* $8D84: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x02; FLAG_NZ(g_cpu.A);
label_8D86:;
    /* $8D86: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_8D88:;
    /* $8D88: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x02); FLAG_NZ(g_cpu.A);
label_8D8A:;
    /* $8D8A: 8D */ maybe_trigger_vblank(4); nes_write(0x687C, g_cpu.A);
label_8D8D:;
    /* $8D8D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8D8F:;
    /* $8D8F: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8D91:;
    /* $8D91: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_8D93:;
    /* $8D93: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_8D95:;
    /* $8D95: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6888 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8D98:;
    /* $8D98: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFC; FLAG_NZ(g_cpu.A);
label_8D9A:;
    /* $8D9A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x20; g_cpu.C=(g_cpu.A>=0x20)?1:0; FLAG_NZ(r&0xFF); }
label_8D9C:;
    /* $8D9C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8DA3;
label_8D9E:;
    /* $8D9E: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8DA0:;
    /* $8DA0: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8DA9_b0(); return;
label_8DA3:;
    /* $8DA3: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x24; g_cpu.C=(g_cpu.A>=0x24)?1:0; FLAG_NZ(r&0xFF); }
label_8DA5:;
    /* $8DA5: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8DA9;
label_8DA7:;
    /* $8DA7: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8DA9:;
    /* $8DA9: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8DAA:;
    /* $8DAA: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8DAB:;
    /* $8DAB: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x84; g_cpu.C=(g_cpu.Y>=0x84)?1:0; FLAG_NZ(r&0xFF); }
label_8DAD:;
    /* $8DAD: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8D95;
    }
label_8DAF:;
    /* $8DAF: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_8DB1:;
    /* $8DB1: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x06; g_cpu.C=(g_cpu.A>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_8DB3:;
    /* $8DB3: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_8DB7;
label_8DB5:;
    /* $8DB5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_8DB7:;
    /* $8DB7: 8D */ maybe_trigger_vblank(4); nes_write(0x6877, g_cpu.A);
label_8DBA:;
    /* $8DBA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8DBC:;
    /* $8DBC: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x02); FLAG_NZ(g_cpu.Y);
label_8DBE:;
    /* $8DBE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8DC6;
label_8DC0:;
    /* $8DC0: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8DC1:;
    /* $8DC1: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x05 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x05); g_cpu.A=r&0xFF; }
label_8DC3:;
    /* $8DC3: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8DC4:;
    /* $8DC4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8DC1;
    }
label_8DC6:;
    /* $8DC6: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x687B); FLAG_NZ(g_cpu.Y);
label_8DC9:;
    /* $8DC9: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8DCF;
label_8DCB:;
    /* $8DCB: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x4B + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x4B); g_cpu.A=r&0xFF; }
label_8DCD:;
    /* $8DCD: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8DD8;
label_8DCF:;
    /* $8DCF: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x687C); FLAG_NZ(g_cpu.Y);
label_8DD2:;
    /* $8DD2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8DDA;
label_8DD4:;
    /* $8DD4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x4B + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x4B); g_cpu.A=r&0xFF; }
label_8DD6:;
    /* $8DD6: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_8DDA;
label_8DD8:;
    /* $8DD8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_8DDA:;
    /* $8DDA: 8D */ maybe_trigger_vblank(4); nes_write(0x687A, g_cpu.A);
label_8DDD:;
    /* $8DDD: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_95BD_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95BD_b0");
#endif
label_95BD:;
    /* $95BD: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x1A16; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_95C0:;
    /* $95C0: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x0F; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_95C2:;
    /* $95C2: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x3A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_95C4:;
    /* $95C4: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x170F + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_95C7:;
    /* $95C7: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x37) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_95C9:;
    /* $95C9: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x2232; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_95CC:;
    /* $95CC: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_95CD:;
    /* $95CD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x95CD); return;
}

void func_8BF5_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8BF5_b0");
#endif
label_8BF5:;
    /* $8BF5: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_8BF6:;
    /* $8BF6: 85 */ maybe_trigger_vblank(3); nes_write(0x08, g_cpu.A);
label_8BF8:;
    /* $8BF8: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x02); FLAG_NZ(g_cpu.X);
label_8BFA:;
    /* $8BFA: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x06); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8BFC:;
    /* $8BFC: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8C0A;
label_8BFE:;
    /* $8BFE: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C00:;
    /* $8C00: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_8BF5;
label_8C03:;
    /* $8C03: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x05); FLAG_NZ(g_cpu.Y);
label_8C05:;
    /* $8C05: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6988 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8C08:;
    /* $8C08: 85 */ maybe_trigger_vblank(3); nes_write(0x08, g_cpu.A);
label_8C0A:;
    /* $8C0A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x08); FLAG_NZ(g_cpu.A);
label_8C0C:;
    /* $8C0C: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_8C0D:;
    /* $8C0D: 85 */ maybe_trigger_vblank(3); nes_write(0x08, g_cpu.A);
label_8C0F:;
    /* $8C0F: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_8C14;
label_8C11:;
    /* $8C11: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x13; g_cpu.S--; func_8C39_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8C11, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8C14:;
    /* $8C14: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x06); FLAG_NZ(g_cpu.Y);
label_8C16:;
    /* $8C16: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x07; g_cpu.C=(g_cpu.Y>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_8C18:;
    /* $8C18: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8C27;
label_8C1A:;
    /* $8C1A: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C1C:;
    /* $8C1C: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x09; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C1E:;
    /* $8C1E: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x09); FLAG_NZ(g_cpu.X);
label_8C20:;
    /* $8C20: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x07); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8C22:;
    /* $8C22: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8C38;
label_8C24:;
    /* $8C24: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_8C0A;
label_8C27:;
    /* $8C27: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_8C29:;
    /* $8C29: 84 */ maybe_trigger_vblank(3); nes_write(0x06, g_cpu.Y);
label_8C2B:;
    /* $8C2B: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x05; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C2D:;
    /* $8C2D: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x09; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C2F:;
    /* $8C2F: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x09); FLAG_NZ(g_cpu.X);
label_8C31:;
    /* $8C31: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x07); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8C33:;
    /* $8C33: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8C38;
label_8C35:;
    /* $8C35: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_8C03;
label_8C38:;
    /* $8C38: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

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
label_952E:; return;
label_952F:; return;
label_9531:; return;
label_9533:; return;
label_9536:; return;
label_9538:; return;
label_9539:; return;
label_953B:; return;
label_953C:; return;
label_953E:; return;
label_9540:; return;
label_9542:; return;
label_9543:; return;
label_9544:; return;
label_9546:; return;
label_9547:; return;
label_9548:; return;
label_954B:; return;
label_954D:; return;
label_954E:; return;
label_9550:; return;
label_9553:; return;
label_9555:; return;
label_9558:; return;
label_955A:; return;
label_955C:; return;
label_955E:; return;
label_9561:; return;
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
}

void func_8C39_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C39_b0");
#endif
label_8C39:;
    /* $8C39: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x05); FLAG_NZ(g_cpu.A);
label_8C3B:;
    /* $8C3B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3D; g_cpu.S--; func_C2C6();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8C3B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8C3E:;
    /* $8C3E: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8C3F:;
    /* $8C3F: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x06); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8C41:;
    /* $8C41: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8C42:;
    /* $8C42: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8C43:;
    /* $8C43: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x902A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8C46:;
    /* $8C46: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_8C48:;
    /* $8C48: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9029 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8C4B:;
    /* $8C4B: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8C4D:;
    /* $8C4D: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x6886); FLAG_NZ(g_cpu.Y);
label_8C50:;
    /* $8C50: 99 */ maybe_trigger_vblank(5); nes_write((0x6887 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8C53:;
    /* $8C53: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_8C55:;
    /* $8C55: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8C56:;
    /* $8C56: 99 */ maybe_trigger_vblank(5); nes_write((0x6887 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8C59:;
    /* $8C59: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8C5A:;
    /* $8C5A: 8C */ maybe_trigger_vblank(4); nes_write(0x6886, g_cpu.Y);
label_8C5D:;
    /* $8C5D: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8C0A_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C0A_b0");
#endif
label_8C0A:;
    /* $8C0A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x08); FLAG_NZ(g_cpu.A);
label_8C0C:;
    /* $8C0C: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_8C0D:;
    /* $8C0D: 85 */ maybe_trigger_vblank(3); nes_write(0x08, g_cpu.A);
label_8C0F:;
    /* $8C0F: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_8C14;
label_8C11:;
    /* $8C11: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x13; g_cpu.S--; func_8C39_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8C11, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8C14:;
    /* $8C14: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x06); FLAG_NZ(g_cpu.Y);
label_8C16:;
    /* $8C16: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x07; g_cpu.C=(g_cpu.Y>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_8C18:;
    /* $8C18: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8C27;
label_8C1A:;
    /* $8C1A: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C1C:;
    /* $8C1C: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x09; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C1E:;
    /* $8C1E: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x09); FLAG_NZ(g_cpu.X);
label_8C20:;
    /* $8C20: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x07); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8C22:;
    /* $8C22: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8C38;
label_8C24:;
    /* $8C24: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_8C0A;
label_8C27:;
    /* $8C27: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_8C29:;
    /* $8C29: 84 */ maybe_trigger_vblank(3); nes_write(0x06, g_cpu.Y);
label_8C2B:;
    /* $8C2B: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x05; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C2D:;
    /* $8C2D: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x09; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C2F:;
    /* $8C2F: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x09); FLAG_NZ(g_cpu.X);
label_8C31:;
    /* $8C31: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x07); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8C33:;
    /* $8C33: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8C38;
label_8C35:;
    /* $8C35: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8C03_b0(); return;
label_8C38:;
    /* $8C38: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

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
label_952E:; return;
label_952F:; return;
label_9531:; return;
label_9533:; return;
label_9536:; return;
label_9538:; return;
label_9539:; return;
label_953B:; return;
label_953C:; return;
label_953E:; return;
label_9540:; return;
label_9542:; return;
label_9543:; return;
label_9544:; return;
label_9546:; return;
label_9547:; return;
label_9548:; return;
label_954B:; return;
label_954D:; return;
label_954E:; return;
label_9550:; return;
label_9553:; return;
label_9555:; return;
label_9558:; return;
label_955A:; return;
label_955C:; return;
label_955E:; return;
label_9561:; return;
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
label_9D31:; return;
label_9D32:; return;
label_9D34:; return;
label_9D36:; return;
label_9D38:; return;
label_9D3A:; return;
label_9D3D:; return;
label_9D3F:; return;
label_9D42:; return;
}

void func_8C03_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C03_b0");
#endif
label_8C03:;
    /* $8C03: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x05); FLAG_NZ(g_cpu.Y);
label_8C05:;
    /* $8C05: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6988 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8C08:;
    /* $8C08: 85 */ maybe_trigger_vblank(3); nes_write(0x08, g_cpu.A);
label_8C0A:;
    /* $8C0A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x08); FLAG_NZ(g_cpu.A);
label_8C0C:;
    /* $8C0C: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_8C0D:;
    /* $8C0D: 85 */ maybe_trigger_vblank(3); nes_write(0x08, g_cpu.A);
label_8C0F:;
    /* $8C0F: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_8C14;
label_8C11:;
    /* $8C11: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x13; g_cpu.S--; func_8C39_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8C11, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8C14:;
    /* $8C14: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x06); FLAG_NZ(g_cpu.Y);
label_8C16:;
    /* $8C16: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x07; g_cpu.C=(g_cpu.Y>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_8C18:;
    /* $8C18: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8C27;
label_8C1A:;
    /* $8C1A: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C1C:;
    /* $8C1C: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x09; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C1E:;
    /* $8C1E: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x09); FLAG_NZ(g_cpu.X);
label_8C20:;
    /* $8C20: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x07); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8C22:;
    /* $8C22: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8C38;
label_8C24:;
    /* $8C24: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_8C0A;
label_8C27:;
    /* $8C27: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_8C29:;
    /* $8C29: 84 */ maybe_trigger_vblank(3); nes_write(0x06, g_cpu.Y);
label_8C2B:;
    /* $8C2B: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x05; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C2D:;
    /* $8C2D: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x09; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C2F:;
    /* $8C2F: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x09); FLAG_NZ(g_cpu.X);
label_8C31:;
    /* $8C31: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x07); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8C33:;
    /* $8C33: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8C38;
label_8C35:;
    /* $8C35: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_8C03;
label_8C38:;
    /* $8C38: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

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
label_952E:; return;
label_952F:; return;
label_9531:; return;
label_9533:; return;
label_9536:; return;
label_9538:; return;
label_9539:; return;
label_953B:; return;
label_953C:; return;
label_953E:; return;
label_9540:; return;
label_9542:; return;
label_9543:; return;
label_9544:; return;
label_9546:; return;
label_9547:; return;
label_9548:; return;
label_954B:; return;
label_954D:; return;
label_954E:; return;
label_9550:; return;
label_9553:; return;
label_9555:; return;
label_9558:; return;
label_955A:; return;
label_955C:; return;
label_955E:; return;
label_9561:; return;
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
label_9D31:; return;
label_9D32:; return;
label_9D34:; return;
label_9D36:; return;
label_9D38:; return;
label_9D3A:; return;
}

void func_8DA9_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8DA9_b0");
#endif
label_8DA9:;
    /* $8DA9: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8DAA:;
    /* $8DAA: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8DAB:;
    /* $8DAB: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x84; g_cpu.C=(g_cpu.Y>=0x84)?1:0; FLAG_NZ(r&0xFF); }
label_8DAD:;
    /* $8DAD: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { call_by_address(0x8D95); return; }
label_8DAF:;
    /* $8DAF: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_8DB1:;
    /* $8DB1: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x06; g_cpu.C=(g_cpu.A>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_8DB3:;
    /* $8DB3: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_8DB7;
label_8DB5:;
    /* $8DB5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_8DB7:;
    /* $8DB7: 8D */ maybe_trigger_vblank(4); nes_write(0x6877, g_cpu.A);
label_8DBA:;
    /* $8DBA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8DBC:;
    /* $8DBC: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x02); FLAG_NZ(g_cpu.Y);
label_8DBE:;
    /* $8DBE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8DC6;
label_8DC0:;
    /* $8DC0: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8DC1:;
    /* $8DC1: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x05 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x05); g_cpu.A=r&0xFF; }
label_8DC3:;
    /* $8DC3: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8DC4:;
    /* $8DC4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8DC1;
    }
label_8DC6:;
    /* $8DC6: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x687B); FLAG_NZ(g_cpu.Y);
label_8DC9:;
    /* $8DC9: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8DCF;
label_8DCB:;
    /* $8DCB: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x4B + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x4B); g_cpu.A=r&0xFF; }
label_8DCD:;
    /* $8DCD: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8DD8;
label_8DCF:;
    /* $8DCF: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x687C); FLAG_NZ(g_cpu.Y);
label_8DD2:;
    /* $8DD2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8DDA;
label_8DD4:;
    /* $8DD4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x4B + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x4B); g_cpu.A=r&0xFF; }
label_8DD6:;
    /* $8DD6: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_8DDA;
label_8DD8:;
    /* $8DD8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_8DDA:;
    /* $8DDA: 8D */ maybe_trigger_vblank(4); nes_write(0x687A, g_cpu.A);
label_8DDD:;
    /* $8DDD: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8D95_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D95_b0");
#endif
label_8D95:;
    /* $8D95: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6888 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8D98:;
    /* $8D98: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFC; FLAG_NZ(g_cpu.A);
label_8D9A:;
    /* $8D9A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x20; g_cpu.C=(g_cpu.A>=0x20)?1:0; FLAG_NZ(r&0xFF); }
label_8D9C:;
    /* $8D9C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8DA3;
label_8D9E:;
    /* $8D9E: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8DA0:;
    /* $8DA0: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8DA9_b0(); return;
label_8DA3:;
    /* $8DA3: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x24; g_cpu.C=(g_cpu.A>=0x24)?1:0; FLAG_NZ(r&0xFF); }
label_8DA5:;
    /* $8DA5: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8DA9;
label_8DA7:;
    /* $8DA7: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8DA9:;
    /* $8DA9: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8DAA:;
    /* $8DAA: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8DAB:;
    /* $8DAB: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x84; g_cpu.C=(g_cpu.Y>=0x84)?1:0; FLAG_NZ(r&0xFF); }
label_8DAD:;
    /* $8DAD: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8D95;
    }
label_8DAF:;
    /* $8DAF: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_8DB1:;
    /* $8DB1: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x06; g_cpu.C=(g_cpu.A>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_8DB3:;
    /* $8DB3: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_8DB7;
label_8DB5:;
    /* $8DB5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_8DB7:;
    /* $8DB7: 8D */ maybe_trigger_vblank(4); nes_write(0x6877, g_cpu.A);
label_8DBA:;
    /* $8DBA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8DBC:;
    /* $8DBC: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x02); FLAG_NZ(g_cpu.Y);
label_8DBE:;
    /* $8DBE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8DC6;
label_8DC0:;
    /* $8DC0: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8DC1:;
    /* $8DC1: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x05 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x05); g_cpu.A=r&0xFF; }
label_8DC3:;
    /* $8DC3: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8DC4:;
    /* $8DC4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8DC1;
    }
label_8DC6:;
    /* $8DC6: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x687B); FLAG_NZ(g_cpu.Y);
label_8DC9:;
    /* $8DC9: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8DCF;
label_8DCB:;
    /* $8DCB: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x4B + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x4B); g_cpu.A=r&0xFF; }
label_8DCD:;
    /* $8DCD: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8DD8;
label_8DCF:;
    /* $8DCF: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x687C); FLAG_NZ(g_cpu.Y);
label_8DD2:;
    /* $8DD2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8DDA;
label_8DD4:;
    /* $8DD4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x4B + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x4B); g_cpu.A=r&0xFF; }
label_8DD6:;
    /* $8DD6: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_8DDA;
label_8DD8:;
    /* $8DD8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_8DDA:;
    /* $8DDA: 8D */ maybe_trigger_vblank(4); nes_write(0x687A, g_cpu.A);
label_8DDD:;
    /* $8DDD: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B0E7_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B0E7_b0");
#endif
label_B0E7:;
    /* $B0E7: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B0E8:;
    /* $B0E8: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { call_by_address(0xB0A0); return; }
label_B0EA:;
    /* $B0EA: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x40B2 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B0ED:;
    /* $B0ED: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x38 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_B0EF:;
    /* $B0EF: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x2E) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B0F1:;
    /* $B0F1: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_B0F2:;
    /* $B0F2: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_B0F3:;
    /* $B0F3: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x38B6 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B0F6:;
    /* $B0F6: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B0F7:;
    /* $B0F7: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { call_by_address(0xB0AD); return; }
label_B0F9:;
    /* $B0F9: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B0FA:;
    /* $B0FA: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x3C + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B0FC:;
    /* $B0FC: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A903_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A903_b0");
#endif
label_A903:;
    /* $A903: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A906:;
    /* $A906: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A909:;
    /* $A909: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF0B + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A90C:;
    /* $A90C: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x1816); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A90F:;
    /* $A90F: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A911:;
    /* $A911: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x0F + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A913:;
    /* $A913: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x17 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A915:;
    /* $A915: 1A */ maybe_trigger_vblank(2); /* NOP */
label_A916:;
    /* $A916: 1A */ maybe_trigger_vblank(2); /* NOP */
label_A917:;
    /* $A917: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x1B + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A919:;
    /* $A919: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x1917 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A91C:;
    /* $A91C: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xFF; FLAG_NZ(g_cpu.A);
label_A91E:;
    /* $A91E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A921:;
    /* $A921: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A924:;
    /* $A924: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A927:;
    /* $A927: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A92A:;
    /* $A92A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A92D:;
    /* $A92D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A930:;
    /* $A930: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A933:;
    /* $A933: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A936:;
    /* $A936: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A939:;
    /* $A939: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A93C:;
    /* $A93C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xA9FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A93F:;
    /* $A93F: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x0085 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A942:;
    /* $A942: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA5; FLAG_NZ(g_cpu.A);
label_A944:;
    /* $A944: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_A946:;
    /* $A946: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A948:;
    /* $A948: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_A94A:;
    /* $A94A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x70; FLAG_NZ(g_cpu.A);
label_A94C:;
    /* $A94C: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_A94E:;
    /* $A94E: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_A950:;
    /* $A950: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A952:;
    /* $A952: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A954:;
    /* $A954: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A956:;
    /* $A956: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A957:;
    /* $A957: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A952;
    }
label_A959:;
    /* $A959: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A95B:;
    /* $A95B: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A95D:;
    /* $A95D: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A95E:;
    /* $A95E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A950;
    }
label_A960:;
    /* $A960: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A820_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A820_b0");
#endif
label_A820:;
    /* $A820: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0BFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A823:;
    /* $A823: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x08FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A826:;
    /* $A826: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A829:;
    /* $A829: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF0B + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A82C:;
    /* $A82C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A82F:;
    /* $A82F: 06 */ maybe_trigger_vblank(5); { uint16_t a=0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A831:;
    /* $A831: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A834:;
    /* $A834: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0605 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A837:;
    /* $A837: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFF + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A839:;
    /* $A839: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A83C:;
    /* $A83C: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0xFF; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A83E:;
    /* $A83E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF05 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A841:;
    /* $A841: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x1707 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A844:;
    /* $A844: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A845:;
    /* $A845: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x13); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A847:;
    /* $A847: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x14 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A849:;
    /* $A849: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x0C + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A84B:;
    /* $A84B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF05 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A84E:;
    /* $A84E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0F05 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A851:;
    /* $A851: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A852:;
    /* $A852: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A854:;
    /* $A854: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0529 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A857:;
    /* $A857: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A858:;
    /* $A858: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A85B:;
    /* $A85B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF05 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A85E:;
    /* $A85E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF05 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A861:;
    /* $A861: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF08 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A864:;
    /* $A864: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF05 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A867:;
    /* $A867: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A869:;
    /* $A869: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A86A:;
    /* $A86A: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0AFF); FLAG_NZ(g_cpu.A);
label_A86D:;
    /* $A86D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6F; g_cpu.S--; if (!nes_dispatch_call(0x0D22, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA86D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A870:;
    /* $A870: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x26); FLAG_NZ(g_cpu.A);
label_A872:;
    /* $A872: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x26; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A874:;
    /* $A874: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0E0E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A877:;
    /* $A877: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x23 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A879:;
    /* $A879: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x24); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A87B:;
    /* $A87B: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x07 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A87D:;
    /* $A87D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x05FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A880:;
    /* $A880: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x23FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A883:;
    /* $A883: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A885:;
    /* $A885: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x22; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A887:;
    /* $A887: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0BFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A88A:;
    /* $A88A: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0BFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A88D:;
    /* $A88D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x04FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A890:;
    /* $A890: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A893:;
    /* $A893: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF05 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A896:;
    /* $A896: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A899:;
    /* $A899: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A89C:;
    /* $A89C: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A89D:;
    /* $A89D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x23FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A8A0:;
    /* $A8A0: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A8A1:;
    /* $A8A1: 1A */ maybe_trigger_vblank(2); /* NOP */
label_A8A2:;
    /* $A8A2: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x10) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A8A4:;
    /* $A8A4: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x1C + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A8A6:;
    /* $A8A6: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x06 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8A8:;
    /* $A8A8: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x0C + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A8AA:;
    /* $A8AA: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0AFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8AD:;
    /* $A8AD: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x031D + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A8B0:;
    /* $A8B0: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB2; g_cpu.S--; if (!nes_dispatch_call(0x2121, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA8B0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A8B3:;
    /* $A8B3: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A8B4:;
    /* $A8B4: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x23; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8B6:;
    /* $A8B6: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x2728; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A8B9:;
    /* $A8B9: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A8BB:;
    /* $A8BB: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xFF07 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8BE:;
    /* $A8BE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF0B + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A8C1:;
    /* $A8C1: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x201F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8C4:;
    /* $A8C4: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC6; g_cpu.S--; if (!nes_dispatch_call(0x0F20, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA8C4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A8C7:;
    /* $A8C7: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x21 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A8C9:;
    /* $A8C9: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x0E); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A8CB:;
    /* $A8CB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF04 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A8CE:;
    /* $A8CE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A8D1:;
    /* $A8D1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A8D4:;
    /* $A8D4: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A8D6:;
    /* $A8D6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A8D9:;
    /* $A8D9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A8DC:;
    /* $A8DC: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A8DD:;
    /* $A8DD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A8E0:;
    /* $A8E0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A8E3:;
    /* $A8E3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A8E6:;
    /* $A8E6: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x171B + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8E9:;
    /* $A8E9: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A8EA:;
    /* $A8EA: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x04FF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A8ED:;
    /* $A8ED: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x10) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8EF:;
    /* $A8EF: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A8F0:;
    /* $A8F0: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x14) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A8F2:;
    /* $A8F2: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x15 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A8F4:;
    /* $A8F4: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x1C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A8F6:;
    /* $A8F6: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1F1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8F9:;
    /* $A8F9: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x1D1F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A8FC:;
    /* $A8FC: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A8FE:;
    /* $A8FE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A901:;
    /* $A901: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A904:;
    /* $A904: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A907:;
    /* $A907: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A90A:;
    /* $A90A: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0xFF; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A90C:;
    /* $A90C: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x1816); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A90F:;
    /* $A90F: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A911:;
    /* $A911: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x0F + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A913:;
    /* $A913: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x17 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A915:;
    /* $A915: 1A */ maybe_trigger_vblank(2); /* NOP */
label_A916:;
    /* $A916: 1A */ maybe_trigger_vblank(2); /* NOP */
label_A917:;
    /* $A917: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x1B + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A919:;
    /* $A919: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x1917 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A91C:;
    /* $A91C: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xFF; FLAG_NZ(g_cpu.A);
label_A91E:;
    /* $A91E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A921:;
    /* $A921: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A924:;
    /* $A924: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A927:;
    /* $A927: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A92A:;
    /* $A92A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A92D:;
    /* $A92D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A930:;
    /* $A930: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A933:;
    /* $A933: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A936:;
    /* $A936: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A939:;
    /* $A939: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A93C:;
    /* $A93C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xA9FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A93F:;
    /* $A93F: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x0085 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A942:;
    /* $A942: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA5; FLAG_NZ(g_cpu.A);
label_A944:;
    /* $A944: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_A946:;
    /* $A946: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A948:;
    /* $A948: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_A94A:;
    /* $A94A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x70; FLAG_NZ(g_cpu.A);
label_A94C:;
    /* $A94C: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_A94E:;
    /* $A94E: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_A950:;
    /* $A950: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A952:;
    /* $A952: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A954:;
    /* $A954: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A956:;
    /* $A956: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A957:;
    /* $A957: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A952;
    }
label_A959:;
    /* $A959: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A95B:;
    /* $A95B: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A95D:;
    /* $A95D: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A95E:;
    /* $A95E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A950;
    }
label_A960:;
    /* $A960: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8CCF_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8CCF_b0");
#endif
label_8CCF:;
    /* $8CCF: 06 */ maybe_trigger_vblank(5); { uint16_t a=0xA5; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8CD1:;
    /* $8CD1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8CD1); return;
}

void func_84C8_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_84C8_b0");
#endif
label_84C8:;
    /* $84C8: 1A */ maybe_trigger_vblank(2); /* NOP */
label_84C9:;
    /* $84C9: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_FF4F(); return;
}

void func_83AD_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_83AD_b0");
#endif
label_83AD:;
    /* $83AD: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_83AF:;
    /* $83AF: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_83B1:;
    /* $83B1: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_83B3:;
    /* $83B3: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_83B5:;
    /* $83B5: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_83B7:;
    /* $83B7: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_83B9:;
    /* $83B9: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_83BB:;
    /* $83BB: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_83BD:;
    /* $83BD: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_83BF:;
    /* $83BF: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_83C1:;
    /* $83C1: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_83C3:;
    /* $83C3: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_83C5:;
    /* $83C5: 85 */ maybe_trigger_vblank(3); nes_write(0x23, g_cpu.A);
label_83C7:;
    /* $83C7: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A203_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A203_b0");
#endif
label_A203:;
    /* $A203: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A204:;
    /* $A204: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x21 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A206:;
    /* $A206: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_A207:;
    /* $A207: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x1C; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A209:;
    /* $A209: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0C0A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A20C:;
    /* $A20C: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0007; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A20F:;
    /* $A20F: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x83 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A211:;
    /* $A211: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A212:;
    /* $A212: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x1E; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A214:;
    /* $A214: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1200 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A217:;
    /* $A217: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x16FF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A21A:;
    /* $A21A: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A21B:;
    /* $A21B: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A21C:;
    /* $A21C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0E0B + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A21F:;
    /* $A21F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x1712 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A222:;
    /* $A222: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x0D0A + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A225:;
    /* $A225: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xFF0D; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A228:;
    /* $A228: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x22; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A22A:;
    /* $A22A: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0xC2 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A22C:;
    /* $A22C: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A22D:;
    /* $A22D: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0E11 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A230:;
    /* $A230: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x1D18 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A233:;
    /* $A233: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x0E) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A235:;
    /* $A235: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x16FF + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A238:;
    /* $A238: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1B1D; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A23B:;
    /* $A23B: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A23C:;
    /* $A23C: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A23D:;
    /* $A23D: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0007); FLAG_NZ(g_cpu.A);
label_A240:;
    /* $A240: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A241:;
    /* $A241: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x18 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A243:;
    /* $A243: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0A1B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A246:;
    /* $A246: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A247:;
    /* $A247: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x180F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A24A:;
    /* $A24A: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x0AFF + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A24D:;
    /* $A24D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x1B1D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A250:;
    /* $A250: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0xFF0E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A253:;
    /* $A253: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0A0E + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A256:;
    /* $A256: 0C */ maybe_trigger_vblank(4); (void)nes_read(0xFF0E); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A259:;
    /* $A259: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A25A:;
    /* $A25A: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x22 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A25C:;
    /* $A25C: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_A25D:;
    /* $A25D: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x1C; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A25F:;
    /* $A25F: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0C0A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A262:;
    /* $A262: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x003F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A265:;
    /* $A265: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x76A2); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A268:;
    /* $A268: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x7F; FLAG_NZ(g_cpu.X);
label_A26A:;
    /* $A26A: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x88; FLAG_NZ(g_cpu.X);
label_A26C:;
    /* $A26C: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x20; FLAG_NZ(g_cpu.X);
label_A26E:;
    /* $A26E: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xFF48); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A271:;
    /* $A271: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA2; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x73; g_cpu.S--; if (!nes_dispatch_call(0x5AC3, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA271, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A274:;
    /* $A274: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2100 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A277:;
    /* $A277: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x57 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A279:;
    /* $A279: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x4221 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A27C:;
    /* $A27C: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A27D:;
    /* $A27D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2100 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A280:;
    /* $A280: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x58 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A282:;
    /* $A282: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xC221 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A285:;
    /* $A285: 52 */ maybe_trigger_vblank(2); /* ILLEGAL $52 — skip 1 */
label_A286:;
    /* $A286: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2200 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A289:;
    /* $A289: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x58 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A28B:;
    /* $A28B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x4222 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A28E:;
    /* $A28E: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A28F:;
    /* $A28F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xE900 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A292:;
    /* $A292: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xFB; FLAG_NZ(g_cpu.X);
label_A294:;
    /* $A294: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x1A; FLAG_NZ(g_cpu.X);
label_A296:;
    /* $A296: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x1B + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A298:;
    /* $A298: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x2D + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A29A:;
    /* $A29A: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x39 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A29C:;
    /* $A29C: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x4F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A29E:;
    /* $A29E: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x62 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A2A0:;
    /* $A2A0: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x75 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A2A2:;
    /* $A2A2: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x84 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A2A4:;
    /* $A2A4: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x9F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A2A6:;
    /* $A2A6: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0xAA + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A2A8:;
    /* $A2A8: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0xC8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A2AA:;
    /* $A2AA: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0xD8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A2AC:;
    /* $A2AC: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0xF1 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A2AE:;
    /* $A2AE: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x12 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A2B0:;
    /* $A2B0: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x17); FLAG_NZ(g_cpu.Y);
label_A2B2:;
    /* $A2B2: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x26); FLAG_NZ(g_cpu.Y);
label_A2B4:;
    /* $A2B4: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x42); FLAG_NZ(g_cpu.Y);
label_A2B6:;
    /* $A2B6: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x6B); FLAG_NZ(g_cpu.Y);
label_A2B8:;
    /* $A2B8: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x70); FLAG_NZ(g_cpu.Y);
label_A2BA:;
    /* $A2BA: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x93); FLAG_NZ(g_cpu.Y);
label_A2BC:;
    /* $A2BC: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x9C); FLAG_NZ(g_cpu.Y);
label_A2BE:;
    /* $A2BE: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xAD); FLAG_NZ(g_cpu.Y);
label_A2C0:;
    /* $A2C0: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xBD); FLAG_NZ(g_cpu.Y);
label_A2C2:;
    /* $A2C2: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xCD); FLAG_NZ(g_cpu.Y);
label_A2C4:;
    /* $A2C4: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xD2); FLAG_NZ(g_cpu.Y);
label_A2C6:;
    /* $A2C6: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xD7); FLAG_NZ(g_cpu.Y);
label_A2C8:;
    /* $A2C8: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xDC); FLAG_NZ(g_cpu.Y);
label_A2CA:;
    /* $A2CA: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xE1); FLAG_NZ(g_cpu.Y);
label_A2CC:;
    /* $A2CC: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xE6); FLAG_NZ(g_cpu.Y);
label_A2CE:;
    /* $A2CE: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xEB); FLAG_NZ(g_cpu.Y);
label_A2D0:;
    /* $A2D0: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xEF); FLAG_NZ(g_cpu.Y);
label_A2D2:;
    /* $A2D2: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xF0); FLAG_NZ(g_cpu.Y);
label_A2D4:;
    /* $A2D4: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x08); FLAG_NZ(g_cpu.Y);
label_A2D6:;
    /* $A2D6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1A); FLAG_NZ(g_cpu.A);
label_A2D8:;
    /* $A2D8: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_A2DA:;
    /* $A2DA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x24); FLAG_NZ(g_cpu.A);
label_A2DC:;
    /* $A2DC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_A2DE:;
    /* $A2DE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x24); FLAG_NZ(g_cpu.A);
label_A2E0:;
    /* $A2E0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x38); FLAG_NZ(g_cpu.A);
label_A2E2:;
    /* $A2E2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x3D); FLAG_NZ(g_cpu.A);
label_A2E4:;
    /* $A2E4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x38); FLAG_NZ(g_cpu.A);
label_A2E6:;
    /* $A2E6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x3D); FLAG_NZ(g_cpu.A);
label_A2E8:;
    /* $A2E8: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x20); FLAG_NZ(g_cpu.A);
label_A2EA:;
    /* $A2EA: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x110A); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A2ED:;
    /* $A2ED: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A2EE:;
    /* $A2EE: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A2EF:;
    /* $A2EF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x1E22 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A2F2:;
    /* $A2F2: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A2F4:;
    /* $A2F4: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x12 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A2F6:;
    /* $A2F6: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A2F8:;
    /* $A2F8: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B0A0_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B0A0_b0");
#endif
label_B0A0:;
    /* $B0A0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xB2C2 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B0A3:;
    /* $B0A3: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_B0A4:;
    /* $B0A4: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x30) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B0A6:;
    /* $B0A6: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x3A + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B0A8:;
    /* $B0A8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xB2C4 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B0AB:;
    /* $B0AB: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xB1); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_B0AD:;
    /* $B0AD: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_B0AE:;
    /* $B0AE: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x3C + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B0B0:;
    /* $B0B0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xB6E0 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B0B3:;
    /* $B0B3: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x2EB1; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B0B6:;
    /* $B0B6: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B0B8:;
    /* $B0B8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xB6D0 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B0BB:;
    /* $B0BB: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_B0BC:;
    /* $B0BC: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B0BD:;
    /* $B0BD: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B0BE:;
    /* $B0BE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xB4C8 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B0C1:;
    /* $B0C1: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B0C2:;
    /* $B0C2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x28B2 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B0C5:;
    /* $B0C5: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B0C6:;
    /* $B0C6: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x3832; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B0C9:;
    /* $B0C9: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x4240 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B0CC:;
    /* $B0CC: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x46 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_B0CE:;
    /* $B0CE: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x42) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B0D0:;
    /* $B0D0: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B0AD_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B0AD_b0");
#endif
label_B0AD:;
    /* $B0AD: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_B0AE:;
    /* $B0AE: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x3C + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B0B0:;
    /* $B0B0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xB6E0 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B0B3:;
    /* $B0B3: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x2EB1; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B0B6:;
    /* $B0B6: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B0B8:;
    /* $B0B8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xB6D0 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B0BB:;
    /* $B0BB: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_B0BC:;
    /* $B0BC: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B0BD:;
    /* $B0BD: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B0BE:;
    /* $B0BE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xB4C8 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B0C1:;
    /* $B0C1: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B0C2:;
    /* $B0C2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x28B2 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B0C5:;
    /* $B0C5: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B0C6:;
    /* $B0C6: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x3832; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B0C9:;
    /* $B0C9: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x4240 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B0CC:;
    /* $B0CC: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x46 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_B0CE:;
    /* $B0CE: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x42) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B0D0:;
    /* $B0D0: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B1C8_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B1C8_b0");
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

void func_B6E0_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6E0_b0");
#endif
label_B6E0:;
    /* $B6E0: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE2; g_cpu.S--; func_B4D9_b0();
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
    /* $B6ED: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B722_b0(); return;
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

void func_B703_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B703_b0");
#endif
label_B703:;
    /* $B703: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x05; g_cpu.S--; func_B4D9_b0();
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
    /* $B714: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B398_b0(); return;
label_B717:;
    /* $B717: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_B719:;
    /* $B719: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x6D; FLAG_NZ(g_cpu.Y);
label_B71B:;
    /* $B71B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B769;
label_B71D:;
    /* $B71D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1F; g_cpu.S--; func_B4D9_b0();
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
    /* $B72C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2E; g_cpu.S--; func_B4D2_b0();
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
    /* $B769: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B482_b0(); return;
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
    /* $B785: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x87; g_cpu.S--; func_B4D9_b0();
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
    /* $B792: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B482_b0(); return;
label_B795:;
    /* $B795: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x97; g_cpu.S--; func_B4D9_b0();
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
    /* $B7AE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B482_b0(); return;
label_B7B1:;
    /* $B7B1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; func_B4D9_b0();
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

void func_B71D_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B71D_b0");
#endif
label_B71D:;
    /* $B71D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1F; g_cpu.S--; func_B4D9_b0();
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
    /* $B72C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2E; g_cpu.S--; func_B4D2_b0();
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

void func_B77F_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B77F_b0");
#endif
label_B77F:;
    /* $B77F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x061F); FLAG_NZ(g_cpu.A);
label_B782:;
    /* $B782: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B783:;
    /* $B783: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_B795;
label_B785:;
    /* $B785: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x87; g_cpu.S--; func_B4D9_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB785, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B788:;
    /* $B788: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B78D;
label_B78A:;
    /* $B78A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B722_b0(); return;
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
    /* $B792: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B482_b0(); return;
label_B795:;
    /* $B795: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x97; g_cpu.S--; func_B4D9_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB795, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B798:;
    /* $B798: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B79D;
label_B79A:;
    /* $B79A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B722_b0(); return;
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
    /* $B7AE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B482_b0(); return;
label_B7B1:;
    /* $B7B1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; func_B4D9_b0();
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
    /* $B7C4: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B722_b0(); return;
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

void func_B7B1_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7B1_b0");
#endif
label_B7B1:;
    /* $B7B1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; func_B4D9_b0();
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
    /* $B7C4: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B722_b0(); return;
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

void func_B902_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B902_b0");
#endif
label_B902:;
    /* $B902: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x04; g_cpu.S--; func_B434_b0();
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
    /* $B909: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0B; g_cpu.S--; func_B482_b0();
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

void func_B7DC_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7DC_b0");
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
    /* $B7F8: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B482_b0(); return;
}

void func_B8D7_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8D7_b0");
#endif
label_B8D7:;
    /* $B8D7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_B8D9:;
    /* $B8D9: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA1; FLAG_NZ(g_cpu.Y);
label_B8DB:;
    /* $B8DB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDD; g_cpu.S--; func_B482_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB8DB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B8DE:;
    /* $B8DE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B8F3_b0(); return;
}

void func_B951_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B951_b0");
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
    /* $B96D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B482_b0(); return;
}

void func_B809_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B809_b0");
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
    /* $B814: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B482_b0(); return;
}

void func_B81F_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B81F_b0");
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
    /* $B83B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B482_b0(); return;
}

void func_B864_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B864_b0");
#endif
label_B864:;
    /* $B864: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_B866:;
    /* $B866: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x9D; FLAG_NZ(g_cpu.Y);
label_B868:;
    /* $B868: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6A; g_cpu.S--; func_B482_b0();
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

void func_B8A8_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8A8_b0");
#endif
label_B8A8:;
    /* $B8A8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_B8AA:;
    /* $B8AA: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x95; FLAG_NZ(g_cpu.Y);
label_B8AC:;
    /* $B8AC: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B482_b0(); return;
}

void func_B91D_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B91D_b0");
#endif
label_B91D:;
    /* $B91D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1F; g_cpu.S--; func_B4D9_b0();
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
    /* $B92C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2E; g_cpu.S--; func_B9BC_b0();
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
    /* $B939: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B8C6_b0(); return;
label_B93C:;
    /* $B93C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3E; g_cpu.S--; func_B9D0_b0();
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
    /* $B94B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x4D; g_cpu.S--; func_B9A8_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB94B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B94E:;
    /* $B94E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B899_b0(); return;
}

void func_B7FB_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7FB_b0");
#endif
label_B7FB:;
    /* $B7FB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFD; g_cpu.S--; func_B4D9_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB7FB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B7FE:;
    /* $B7FE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B803;
label_B800:;
    /* $B800: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B8C6_b0(); return;
label_B803:;
    /* $B803: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x05; g_cpu.S--; func_B9BC_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB803, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B806:;
    /* $B806: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B899_b0(); return;
}

void func_B8E1_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8E1_b0");
#endif
label_B8E1:;
    /* $B8E1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xE3; g_cpu.S--; func_B4D9_b0();
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
    /* $B8F0: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B8C6_b0(); return;
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

void func_B970_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B970_b0");
#endif
label_B970:;
    /* $B970: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x72; g_cpu.S--; func_B4D9_b0();
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
    /* $B97F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B8C6_b0(); return;
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
    /* $B994: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x96; g_cpu.S--; func_B9A8_b0();
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
    /* $B99F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B899_b0(); return;
label_B9A2:;
    /* $B9A2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA4; g_cpu.S--; func_B9BC_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB9A2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B9A5:;
    /* $B9A5: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B899_b0(); return;
}

void func_B817_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B817_b0");
#endif
label_B817:;
    /* $B817: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x19; g_cpu.S--; func_B4D9_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB817, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B81A:;
    /* $B81A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0xB7D6); return; }
label_B81C:;
    /* $B81C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B8C6_b0(); return;
}

void func_B83E_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B83E_b0");
#endif
label_B83E:;
    /* $B83E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x40; g_cpu.S--; func_B4D9_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB83E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B841:;
    /* $B841: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B846;
label_B843:;
    /* $B843: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B8C6_b0(); return;
label_B846:;
    /* $B846: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x48; g_cpu.S--; func_B9A8_b0();
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

void func_B87F_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B87F_b0");
#endif
label_B87F:;
    /* $B87F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; func_B4D9_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB87F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B882:;
    /* $B882: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B887;
label_B884:;
    /* $B884: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B8C6_b0(); return;
label_B887:;
    /* $B887: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x89; g_cpu.S--; func_B9D0_b0();
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
    /* $B896: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x98; g_cpu.S--; func_B9BC_b0();
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

void func_B8AF_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8AF_b0");
#endif
label_B8AF:;
    /* $B8AF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB1; g_cpu.S--; func_B4D9_b0();
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
    /* $B8BE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B8C6_b0(); return;
label_B8C1:;
    /* $B8C1: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x99; FLAG_NZ(g_cpu.Y);
label_B8C3:;
    /* $B8C3: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B39C_b0(); return;
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
    /* $B8D3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD5; g_cpu.S--; func_B4D2_b0();
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

void func_BCAA_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCAA_b0");
#endif
label_BCAA:;
    /* $BCAA: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BCD4_b0(); return;
}

void func_B6A3_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6A3_b0");
#endif
label_B6A3:;
    /* $B6A3: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x55; FLAG_NZ(g_cpu.Y);
label_B6A5:;
    /* $B6A5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA7; g_cpu.S--; func_B398_b0();
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
    /* $B6B8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; func_B5D5_b0();
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

void func_B61C_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B61C_b0");
#endif
label_B61C:;
    /* $B61C: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x5D; FLAG_NZ(g_cpu.Y);
label_B61E:;
    /* $B61E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x20; g_cpu.S--; func_B398_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB61E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B621:;
    /* $B621: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x59; FLAG_NZ(g_cpu.Y);
label_B623:;
    /* $B623: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B5D5_b0(); return;
}

void func_B6C5_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6C5_b0");
#endif
label_B6C5:;
    /* $B6C5: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x61; FLAG_NZ(g_cpu.Y);
label_B6C7:;
    /* $B6C7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC9; g_cpu.S--; func_B398_b0();
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
    /* $B6CE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B5D5_b0(); return;
}

void func_B680_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B680_b0");
#endif
label_B680:;
    /* $B680: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x82; g_cpu.S--; func_B4D9_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB680, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B683:;
    /* $B683: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B688;
label_B685:;
    /* $B685: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B5FD_b0(); return;
label_B688:;
    /* $B688: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x55; FLAG_NZ(g_cpu.Y);
label_B68A:;
    /* $B68A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x8C; g_cpu.S--; func_B398_b0();
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
    /* $B696: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x98; g_cpu.S--; func_B3A4_b0();
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

void func_B626_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B626_b0");
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
    /* $B64D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B65C_b0(); return;
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
    /* $B669: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B5FD_b0(); return;
}

void func_B6D1_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6D1_b0");
#endif
label_B6D1:;
    /* $B6D1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD3; g_cpu.S--; func_B4D9_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB6D1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B6D4:;
    /* $B6D4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0xB6C4); return; }
label_B6D6:;
    /* $B6D6: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B5FD_b0(); return;
}

void func_B4D9_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4D9_b0");
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

void func_B722_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B722_b0");
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
    /* $B72C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2E; g_cpu.S--; func_B4D2_b0();
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

void func_B6FC_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6FC_b0");
#endif
label_B6FC:;
    /* $B6FC: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B4D2_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4D2_b0");
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

void func_B482_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B482_b0");
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
    /* $B498: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; func_B398_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB498, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B49B:;
    /* $B49B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_B4AA;
label_B49D:;
    /* $B49D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x9F; g_cpu.S--; func_B3A4_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB49D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B4A0:;
    /* $B4A0: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_B4AA;
label_B4A2:;
    /* $B4A2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA4; g_cpu.S--; func_B39C_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB4A2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B4A5:;
    /* $B4A5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_B4AA;
label_B4A7:;
    /* $B4A7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA9; g_cpu.S--; func_B3A0_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB4A7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B4AA:;
    /* $B4AA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAC; g_cpu.S--; func_B4C3_b0();
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

void func_B8F3_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8F3_b0");
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

void func_B7D6_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7D6_b0");
#endif
label_B7D6:;
    /* $B7D6: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B9BC_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9BC_b0");
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

void func_B91C_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B91C_b0");
#endif
label_B91C:;
    /* $B91C: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

static void func_B8C6_b0_body(int _entry) {
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
    /* $B8D3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD5; g_cpu.S--; func_B4D2_b0();
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

void func_B8C6_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8C6_b0");
#endif
    func_B8C6_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B8D6_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8D6_b0");
#endif
    func_B8C6_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B9D0_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9D0_b0");
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

void func_B9A8_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9A8_b0");
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

void func_B899_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B899_b0");
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

void func_B39C_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B39C_b0");
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

void func_BCD4_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCD4_b0");
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

void func_B5D5_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5D5_b0");
#endif
label_B5D5:;
    /* $B5D5: 8D */ maybe_trigger_vblank(4); nes_write(0x0664, g_cpu.A);
label_B5D8:;
    /* $B5D8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDA; g_cpu.S--; func_B3A4_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB5D8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B5DB:;
    /* $B5DB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDD; g_cpu.S--; func_B4C3_b0();
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

void func_B5FD_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5FD_b0");
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
    /* $B60D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0F; g_cpu.S--; func_B4D2_b0();
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

void func_B3A4_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3A4_b0");
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

void func_B65C_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B65C_b0");
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

void func_B6C4_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6C4_b0");
#endif
label_B6C4:;
    /* $B6C4: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B4C3_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4C3_b0");
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

void func_B3A0_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3A0_b0");
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

void func_BCBD_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCBD_b0");
#endif
label_BCBD:;
    /* $BCBD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBF; g_cpu.S--; func_BA14_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBCBD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BCC0:;
    /* $BCC0: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC2; g_cpu.S--; func_BF62_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBCC0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BCC3:;
    /* $BCC3: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BAD5_b0(); return;
}

void func_BA14_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA14_b0");
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

void func_BF62_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BF62_b0");
#endif
label_BF62:;
    /* $BF62: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBF; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x64; g_cpu.S--; func_B42C_b0();
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

static void func_BAD5_b0_body(int _entry) {
    switch (_entry) {
        case 1: goto label_BB0C;
        case 2: goto label_BAE3;
        case 3: goto label_BAE0;
    }
label_BAD5:;
    /* $BAD5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD7; g_cpu.S--; func_BA23_b0();
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
    /* $BB21: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BB4C_b0(); return;
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

void func_BAD5_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BAD5_b0");
#endif
    func_BAD5_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BB0C_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB0C_b0");
#endif
    func_BAD5_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BAE3_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BAE3_b0");
#endif
    func_BAD5_b0_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BAE0_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BAE0_b0");
#endif
    func_BAD5_b0_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B42C_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B42C_b0");
#endif
label_B42C:;
    /* $B42C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x068D); FLAG_NZ(g_cpu.A);
label_B42F:;
    /* $B42F: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x064D); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B432:;
    /* $B432: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_B43A;
label_B434:;
    /* $B434: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x36; g_cpu.S--; func_B44D_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB434, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B437:;
    /* $B437: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x39; g_cpu.S--; func_B46E_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB437, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B43A:;
    /* $B43A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3C; g_cpu.S--; func_B43E_b0();
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

void func_BA23_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA23_b0");
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

void func_BAD1_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BAD1_b0");
#endif
label_BAD1:;
    /* $BAD1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xD3; g_cpu.S--; func_BA67_b0();
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

void func_BACD_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BACD_b0");
#endif
label_BACD:;
    /* $BACD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCF; g_cpu.S--; func_B420_b0();
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

void func_BB4C_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB4C_b0");
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
    /* $BBDE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BAE3_b0(); return;
label_BBE1:;
    /* $BBE1: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0653 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BBE4:;
    /* $BBE4: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_BBD8;
}

void func_BA67_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA67_b0");
#endif
label_BA67:;
    /* $BA67: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_BA69:;
    /* $BA69: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6B; g_cpu.S--; func_BA71_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBA69, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BA6C:;
    /* $BA6C: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_BA6D:;
    /* $BA6D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6F; g_cpu.S--; func_BA71_b0();
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

void func_B420_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B420_b0");
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
    /* $B434: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x36; g_cpu.S--; func_B44D_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB434, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B437:;
    /* $B437: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x39; g_cpu.S--; func_B46E_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB437, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B43A:;
    /* $B43A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3C; g_cpu.S--; func_B43E_b0();
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

void func_BB49_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB49_b0");
#endif
label_BB49:;
    /* $BB49: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BBE7_b0(); return;
}

void func_BB46_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB46_b0");
#endif
label_BB46:;
    /* $BB46: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BC0E_b0(); return;
}

void func_BBD8_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BBD8_b0");
#endif
label_BBD8:;
    /* $BBD8: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0620 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBDB:;
    /* $BBDB: 9D */ maybe_trigger_vblank(5); nes_write((0x0640 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BBDE:;
    /* $BBDE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BAE3_b0(); return;
}

void func_BA71_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA71_b0");
#endif
label_BA71:;
    /* $BA71: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x062E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA74:;
    /* $BA74: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_BABB;
label_BA76:;
    /* $BA76: 85 */ maybe_trigger_vblank(3); nes_write(0xEB, g_cpu.A);
label_BA78:;
    /* $BA78: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x7A; g_cpu.S--; func_BA38_b0();
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
    /* $BACD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCF; g_cpu.S--; func_B420_b0();
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

void func_BBE7_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BBE7_b0");
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
    /* $BBF6: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BBFD_b0(); return;
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
    /* $BC0B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BB67_b0(); return;
}

void func_BC0E_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC0E_b0");
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
    /* $BC27: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BBD8_b0(); return;
}

void func_BA38_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA38_b0");
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

void func_BBFD_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BBFD_b0");
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
    /* $BC0B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BB67_b0(); return;
}

void func_BB67_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB67_b0");
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
    /* $BBDE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BAE3_b0(); return;
label_BBE1:;
    /* $BBE1: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0653 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BBE4:;
    /* $BBE4: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_BBD8;
}

void func_A93E_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A93E_b0");
#endif
label_A93E:;
    /* $A93E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3E; FLAG_NZ(g_cpu.A);
label_A940:;
    /* $A940: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_A942:;
    /* $A942: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA5; FLAG_NZ(g_cpu.A);
label_A944:;
    /* $A944: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_A946:;
    /* $A946: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A948:;
    /* $A948: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_A94A:;
    /* $A94A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x70; FLAG_NZ(g_cpu.A);
label_A94C:;
    /* $A94C: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_A94E:;
    /* $A94E: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_A950:;
    /* $A950: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A952:;
    /* $A952: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A954:;
    /* $A954: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A956:;
    /* $A956: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A957:;
    /* $A957: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A952;
    }
label_A959:;
    /* $A959: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A95B:;
    /* $A95B: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A95D:;
    /* $A95D: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A95E:;
    /* $A95E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A950;
    }
label_A960:;
    /* $A960: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BB22_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB22_b0");
#endif
label_BB22:;
    /* $BB22: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BDBB_b0(); return;
}

void func_B920_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B920_b0");
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
    /* $B92C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2E; g_cpu.S--; func_B9BC_b0();
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
    /* $B939: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B8C6_b0(); return;
label_B93C:;
    /* $B93C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3E; g_cpu.S--; func_B9D0_b0();
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
    /* $B94B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x4D; g_cpu.S--; func_B9A8_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB94B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B94E:;
    /* $B94E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B899_b0(); return;
}

void func_B359_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B359_b0");
#endif
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
    /* $B367: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x69; g_cpu.S--; func_B4ED_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB367, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B36A:;
    /* $B36A: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16zp(0xE2); maybe_trigger_vblank(2); call_by_address(_jt); return; }
}

void func_B5BF_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5BF_b0");
#endif
label_B5BF:;
    /* $B5BF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC1; g_cpu.S--; func_B4D2_b0();
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

void func_B5B7_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5B7_b0");
#endif
label_B5B7:;
    /* $B5B7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B482_b0(); return;
}

void func_BDBB_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BDBB_b0");
#endif
label_BDBB:;
    /* $BDBB: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0024); FLAG_NZ(g_cpu.X);
label_BDBE:;
    /* $BDBE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_BDC2;
label_BDC0:;
    /* $BDC0: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xB9); FLAG_NZ(g_cpu.A);
label_BDC2:;
    /* $BDC2: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_BDC4;
label_BDC4:;
    /* $BDC4: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_BE3C;
label_BDC6:;
    /* $BDC6: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_BDDD;
label_BDC8:;
    /* $BDC8: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x18) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BDCA:;
    /* $BDCA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBDCA); return;
label_BDCB:;
    /* $BDCB: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0xBDCF); return; }
label_BDCD:;
    /* $BDCD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBDCD); return;
label_BDCE:;
    /* $BDCE: 6E */ maybe_trigger_vblank(6); { uint16_t a=0x4DBE; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BDD1:;
    /* $BDD1: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xBE66 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_BDD4:;
    /* $BDD4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBDD4); return;
label_BDD5:;
    /* $BDD5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBDD5); return;
label_BDD6:;
    /* $BDD6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBDD6); return;
label_BDD7:;
    /* $BDD7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBDD7); return;
label_BDD8:;
    /* $BDD8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_BDDB;
label_BDDA:;
    /* $BDDA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBDDA); return;
label_BDDB:;
    /* $BDDB: 27 */ maybe_trigger_vblank(5); { uint16_t a=0xBE; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_BDDD:;
    /* $BDDD: 3D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x38BE + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
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
label_BDEA:;
    /* $BDEA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBDEA); return;
label_BDEB:;
    /* $BDEB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBDEB); return;
label_BDEC:;
    /* $BDEC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBDEC); return;
label_BDED:;
    /* $BDED: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBDED); return;
label_BDEE:;
    /* $BDEE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBDEE); return;
label_BDEF:;
    /* $BDEF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBDEF); return;
label_BDF0:;
    /* $BDF0: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_BDF1:;
    /* $BDF1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0003 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BDF4:;
    /* $BDF4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBDF4); return;
label_BDF5:;
    /* $BDF5: 89 */ maybe_trigger_vblank(2); /* NOP */
label_BDF7:;
    /* $BDF7: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xBE + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BDF9:;
    /* $BDF9: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_BDFA:;
    /* $BDFA: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x0000 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_BDFD:;
    /* $BDFD: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_BDFE:;
    /* $BDFE: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { call_by_address(0xBE38); return; }
label_BE00:;
    /* $BE00: 3A */ maybe_trigger_vblank(2); /* NOP */
label_BE01:;
    /* $BE01: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x403E + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BE04:;
    /* $BE04: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x3A3C + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BE07:;
    /* $BE07: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x02 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_BE09:;
    /* $BE09: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x02B8 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BE0C:;
    /* $BE0C: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BE0E:;
    /* $BE0E: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_BE0F:;
    /* $BE0F: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BE11:;
    /* $BE11: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_BE12:;
    /* $BE12: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BE13:;
    /* $BE13: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_BE14:;
    /* $BE14: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BE15:;
    /* $BE15: 62 */ maybe_trigger_vblank(2); /* ILLEGAL $62 — skip 1 */
label_BE16:;
    /* $BE16: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x02 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_BE18:;
    /* $BE18: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_BE19:;
    /* $BE19: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_BE1A:;
    /* $BE1A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BE1B:;
    /* $BE1B: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0x7602); maybe_trigger_vblank(2); call_by_address(_jt); return; }
label_BE1E:;
    /* $BE1E: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BE20:;
    /* $BE20: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_BE21:;
    /* $BE21: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0x7C02 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BE24:;
    /* $BE24: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BE26:;
    /* $BE26: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBE26); return;
label_BE27:;
    /* $BE27: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x48) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BE29:;
    /* $BE29: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_BE2A:;
    /* $BE2A: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_BE2B:;
    /* $BE2B: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x3038 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BE2E:;
    /* $BE2E: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_BE2F:;
    /* $BE2F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x3E44, -1); return;
label_BE32:;
    /* $BE32: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0xC8 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BE34:;
    /* $BE34: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { call_by_address(0xBE6E); return; }
label_BE36:;
    /* $BE36: 3C */ maybe_trigger_vblank(4); (void)nes_read((0xB4FF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BE39:;
    /* $BE39: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x1E2A); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BE3C:;
    /* $BE3C: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x22B2 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BE3F:;
    /* $BE3F: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x3430); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BE42:;
    /* $BE42: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_BE43:;
    /* $BE43: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_BE6B;
label_BE45:;
    /* $BE45: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_BE81;
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
    /* $BE54: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { call_by_address(0xBE55); return; }
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
    /* $BE8A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { call_by_address(0xBEE0); return; }
label_BE8C:;
    /* $BE8C: 4E */ maybe_trigger_vblank(6); { uint16_t a=0x4248; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_BE8F:;
    /* $BE8F: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_BE90:;
    /* $BE90: 4E */ maybe_trigger_vblank(6); { uint16_t a=0xE0FF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_BE93:;
    /* $BE93: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BE95:;
    /* $BE95: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_BED3;
label_BE97:;
    /* $BE97: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
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
    /* $BEA0: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0x7470); maybe_trigger_vblank(2); call_by_address(_jt); return; }
label_BEA3:;
    /* $BEA3: 7A */ maybe_trigger_vblank(2); /* NOP */
label_BEA4:;
    /* $BEA4: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BEA6:;
    /* $BEA6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF007 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BEA9:;
    /* $BEA9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBEA9); return;
label_BEAA:;
    /* $BEAA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBEAA); return;
label_BEAB:;
    /* $BEAB: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x4E; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BEAD:;
    /* $BEAD: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xF3); FLAG_NZ(g_cpu.A);
label_BEAF:;
    /* $BEAF: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x4D); FLAG_NZ(g_cpu.A);
label_BEB1:;
    /* $BEB1: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x01); FLAG_NZ(g_cpu.A);
label_BEB3:;
    /* $BEB3: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xB9); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BEB5:;
    /* $BEB5: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x75); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BEB7:;
    /* $BEB7: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x35); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BEB9:;
    /* $BEB9: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BEBB:;
    /* $BEBB: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xBF + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BEBD:;
    /* $BEBD: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x89 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BEBF:;
    /* $BEBF: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x57 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BEC1:;
    /* $BEC1: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x27 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BEC3:;
    /* $BEC3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BEC4:;
    /* $BEC4: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xCF02 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BEC7:;
    /* $BEC7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BEC8:;
    /* $BEC8: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x02); FLAG_NZ(g_cpu.X);
label_BECA:;
    /* $BECA: 80 */ maybe_trigger_vblank(2); /* NOP */
label_BECC:;
    /* $BECC: 5C */ maybe_trigger_vblank(4); (void)nes_read((0x3A02 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BECF:;
    /* $BECF: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BED0:;
    /* $BED0: 1A */ maybe_trigger_vblank(2); /* NOP */
label_BED1:;
    /* $BED1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFC + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
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
label_CBFD:; return;
label_CBFF:; return;
label_CC01:; return;
label_CC03:; return;
label_CC05:; return;
label_CC07:; return;
label_CC09:; return;
label_CC0B:; return;
label_CC0D:; return;
label_CC0F:; return;
label_CC11:; return;
label_CC12:; return;
label_CC14:; return;
label_CC17:; return;
label_CC19:; return;
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
}

static void func_8180_b0_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8182;
    }
label_8180:;
    /* $8180: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_8182:;
    /* $8182: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC0); FLAG_NZ(g_cpu.A);
label_8184:;
    /* $8184: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8189;
label_8186:;
    /* $8186: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x88; g_cpu.S--; func_8AA7_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8186, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8189:;
    /* $8189: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_818B:;
    /* $818B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_81D0;
label_818D:;
    /* $818D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x6EAA); FLAG_NZ(g_cpu.A);
label_8190:;
    /* $8190: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x6EBA); FLAG_NZ(g_cpu.A);
label_8193:;
    /* $8193: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x6ECA); FLAG_NZ(g_cpu.A);
label_8196:;
    /* $8196: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x6EDA); FLAG_NZ(g_cpu.A);
label_8199:;
    /* $8199: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_81CA;
label_819B:;
    /* $819B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_819D:;
    /* $819D: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xBF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_819F:;
    /* $819F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_81AB;
label_81A1:;
    /* $81A1: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xBF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_81A3:;
    /* $81A3: 85 */ maybe_trigger_vblank(3); nes_write(0xC7, g_cpu.A);
label_81A5:;
    /* $81A5: 85 */ maybe_trigger_vblank(3); nes_write(0xC0, g_cpu.A);
label_81A7:;
    /* $81A7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_81A9:;
    /* $81A9: 85 */ maybe_trigger_vblank(3); nes_write(0xC6, g_cpu.A);
label_81AB:;
    /* $81AB: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x6EEA); FLAG_NZ(g_cpu.A);
label_81AE:;
    /* $81AE: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x6EFA); FLAG_NZ(g_cpu.A);
label_81B1:;
    /* $81B1: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x6F0A); FLAG_NZ(g_cpu.A);
label_81B4:;
    /* $81B4: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x6F1A); FLAG_NZ(g_cpu.A);
label_81B7:;
    /* $81B7: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_81CA;
label_81B9:;
    /* $81B9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_81BB:;
    /* $81BB: 85 */ maybe_trigger_vblank(3); nes_write(0xC7, g_cpu.A);
label_81BD:;
    /* $81BD: 85 */ maybe_trigger_vblank(3); nes_write(0xC0, g_cpu.A);
label_81BF:;
    /* $81BF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC1; g_cpu.S--; func_98AE_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x81BF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_81C2:;
    /* $81C2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_81C4:;
    /* $81C4: 85 */ maybe_trigger_vblank(3); nes_write(0xC6, g_cpu.A);
label_81C6:;
    /* $81C6: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_81C8:;
    /* $81C8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_81CD;
label_81CA:;
    /* $81CA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCC; g_cpu.S--; func_88FE_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x81CA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_81CD:;
    /* $81CD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x81; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xCF; g_cpu.S--; func_8976_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x81CD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_81D0:;
    /* $81D0: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

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

void func_8182_b0(void) {
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
    /* $8988: 89 */ maybe_trigger_vblank(2); /* NOP */
label_898A:;
    /* $898A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x898A); return;
}

void func_B31B_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B31B_b0");
#endif
label_B31B:;
    /* $B31B: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xB6; g_cpu.C=(g_cpu.X>=0xB6)?1:0; FLAG_NZ(r&0xFF); }
label_B31D:;
    /* $B31D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB7 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B31F:;
    /* $B31F: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x7FB7 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
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
    /* $B341: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { call_by_address(0xB2FC); return; }
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
    /* $B367: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x69; g_cpu.S--; func_B4ED_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB367, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B36A:;
    /* $B36A: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16zp(0xE2); maybe_trigger_vblank(2); call_by_address(_jt); return; }
}

void func_B329_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B329_b0");
#endif
label_B329:;
    /* $B329: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB7) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B32B:;
    /* $B32B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
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
    /* $B341: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { call_by_address(0xB2FC); return; }
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
    /* $B367: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x69; g_cpu.S--; func_B4ED_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB367, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B36A:;
    /* $B36A: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16zp(0xE2); maybe_trigger_vblank(2); call_by_address(_jt); return; }
}

void func_B33D_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B33D_b0");
#endif
label_B33D:;
    /* $B33D: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xE1B7 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B340:;
    /* $B340: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_B341:;
    /* $B341: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { call_by_address(0xB2FC); return; }
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
    /* $B367: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x69; g_cpu.S--; func_B4ED_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB367, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B36A:;
    /* $B36A: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16zp(0xE2); maybe_trigger_vblank(2); call_by_address(_jt); return; }
}

void func_B38C_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B38C_b0");
#endif
label_B38C:;
    /* $B38C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x068C); FLAG_NZ(g_cpu.A);
label_B38F:;
    /* $B38F: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xDC; FLAG_NZ(g_cpu.X);
label_B391:;
    /* $B391: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B367_b0(); return;
}

void func_B394_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B394_b0");
#endif
label_B394:;
    /* $B394: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x96; g_cpu.S--; func_B359_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB394, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B397:;
    /* $B397: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

static void func_B3F0_b0_body(int _entry) {
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
    /* $B3FA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFC; g_cpu.S--; func_B34B_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3FA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3FD:;
    /* $B3FD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xFF; g_cpu.S--; func_B37B_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3FD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B400:;
    /* $B400: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x02; g_cpu.S--; func_B36D_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB400, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B403:;
    /* $B403: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x05; g_cpu.S--; func_BC66_b0();
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

void func_B3F0_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3F0_b0");
#endif
    func_B3F0_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B40E_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B40E_b0");
#endif
    func_B3F0_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B3FC_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3FC_b0");
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

void func_B452_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B452_b0");
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

static void func_B493_b0_body(int _entry) {
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
    /* $B498: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x9A; g_cpu.S--; func_B398_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB498, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B49B:;
    /* $B49B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_B4AA;
label_B49D:;
    /* $B49D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x9F; g_cpu.S--; func_B3A4_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB49D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B4A0:;
    /* $B4A0: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_B4AA;
label_B4A2:;
    /* $B4A2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA4; g_cpu.S--; func_B39C_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB4A2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B4A5:;
    /* $B4A5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_B4AA;
label_B4A7:;
    /* $B4A7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA9; g_cpu.S--; func_B3A0_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB4A7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B4AA:;
    /* $B4AA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAC; g_cpu.S--; func_B4C3_b0();
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

void func_B493_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B493_b0");
#endif
    func_B493_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B4A2_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4A2_b0");
#endif
    func_B493_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B4A9_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4A9_b0");
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

void func_B4BD_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4BD_b0");
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

void func_B587_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B587_b0");
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
    /* $B591: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B5BF_b0(); return;
}

void func_B5A5_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5A5_b0");
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

static void func_B978_b0_body(int _entry) {
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
    /* $B97F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B8C6_b0(); return;
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
    /* $B994: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x96; g_cpu.S--; func_B9A8_b0();
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
    /* $B99F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B899_b0(); return;
}

void func_B978_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B978_b0");
#endif
    func_B978_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B98C_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B98C_b0");
#endif
    func_B978_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B9A0_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9A0_b0");
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

void func_B9E4_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9E4_b0");
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

static void func_B9E5_b0_body(int _entry) {
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

void func_B9E5_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9E5_b0");
#endif
    func_B9E5_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B9F3_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9F3_b0");
#endif
    func_B9E5_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BA41_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA41_b0");
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

void func_BC1C_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC1C_b0");
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
    /* $BC27: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BBD8_b0(); return;
}

void func_BC53_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC53_b0");
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
    /* $BC72: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x74; g_cpu.S--; func_B4ED_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC72, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC75:;
    /* $BC75: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x77; g_cpu.S--; func_BC83_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC75, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC78:;
    /* $BC78: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16zp(0xE2); maybe_trigger_vblank(2); call_by_address(_jt); return; }
}

void func_BC64_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC64_b0");
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
    /* $BC72: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x74; g_cpu.S--; func_B4ED_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC72, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC75:;
    /* $BC75: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xBC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x77; g_cpu.S--; func_BC83_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC75, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC78:;
    /* $BC78: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16zp(0xE2); maybe_trigger_vblank(2); call_by_address(_jt); return; }
}

void func_BC7B_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC7B_b0");
#endif
label_BC7B:;
    /* $BC7B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x068D); FLAG_NZ(g_cpu.A);
label_BC7E:;
    /* $BC7E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_BCA6;
label_BC80:;
    /* $BC80: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BAD5_b0(); return;
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
label_BC9E:;
    /* $BC9E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x068D); FLAG_NZ(g_cpu.A);
label_BCA1:;
    /* $BCA1: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xF0; FLAG_NZ(g_cpu.A);
label_BCA3:;
    /* $BCA3: 8D */ maybe_trigger_vblank(4); nes_write(0x068D, g_cpu.A);
label_BCA6:;
    /* $BCA6: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BF19_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BF19_b0");
#endif
label_BF19:;
    /* $BF19: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF19); return;
}

void func_C000_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C000_b0");
#endif
label_C000:;
    /* $C000: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_C001:;
    /* $C001: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_C002:;
    /* $C002: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x05; FLAG_NZ(g_cpu.X);
label_C004:;
    /* $C004: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_C006:;
    /* $C006: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_C007:;
    /* $C007: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x05 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x05); g_cpu.A=r&0xFF; }
label_C009:;
    /* $C009: 85 */ maybe_trigger_vblank(3); nes_write(0x2E, g_cpu.A);
label_C00B:;
    /* $C00B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2F); FLAG_NZ(g_cpu.A);
label_C00D:;
    /* $C00D: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_C00E:;
    /* $C00E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x13 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x13); g_cpu.A=r&0xFF; }
label_C010:;
    /* $C010: 85 */ maybe_trigger_vblank(3); nes_write(0x2F, g_cpu.A);
label_C012:;
    /* $C012: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_C013:;
    /* $C013: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_C004;
    }
label_C015:;
    /* $C015: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_C016:;
    /* $C016: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_C017:;
    /* $C017: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_C019:;
    /* $C019: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

static void func_B2FC_b0_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B352;
        case 2: goto label_B360;
    }
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
    /* $B367: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x69; g_cpu.S--; func_B4ED_b0();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB367, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B36A:;
    /* $B36A: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16zp(0xE2); maybe_trigger_vblank(2); call_by_address(_jt); return; }
}

void func_B2FC_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B2FC_b0");
#endif
    func_B2FC_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B352_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B352_b0");
#endif
    func_B2FC_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B360_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B360_b0");
#endif
    func_B2FC_b0_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B568_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B568_b0");
#endif
label_B568:;
    /* $B568: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BC22_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC22_b0");
#endif
label_BC22:;
    /* $BC22: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_BC23:;
    /* $BC23: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_BC24:;
    /* $BC24: 8D */ maybe_trigger_vblank(4); nes_write(0x400F, g_cpu.A);
label_BC27:;
    /* $BC27: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BBD8_b0(); return;
}

