/* metroid_full_bank01_part02.c — PRG bank 1 function bodies (sub-part 2).
 * STANDALONE translation unit — compiled independently (in
 * parallel with every other bank part/sub-part and the
 * umbrella metroid_full.c). Do not compile as part of another TU or
 * edit directly; the source of truth is the recompiler's
 * code_generator.c. Renamed to drop the _partNN suffix if
 * this bank turned out to fit in a single sub-part. */

#include "metroid_full_decls.h"

void func_98DB_b1_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A29E;
        case 2: goto label_A903;
        case 3: goto label_A203;
    }
label_98DB:;
    /* $98DB: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_98DC:;
    /* $98DC: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x04) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_98DE:;
    /* $98DE: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x04 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_98E0:;
    /* $98E0: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x05) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_98E2:;
    /* $98E2: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x03) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_98E4:;
    /* $98E4: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_98E6:;
    /* $98E6: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x05 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_98E8:;
    /* $98E8: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x03) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_98EA:;
    /* $98EA: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x05) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_98EC:;
    /* $98EC: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x04) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_98EE:;
    /* $98EE: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x50 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_98F0:;
    /* $98F0: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_98F2:;
    /* $98F2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_98F3:;
    /* $98F3: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xEB04 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_98F6:;
    /* $98F6: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xDB); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_98F8:;
    /* $98F8: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xBB); FLAG_NZ(g_cpu.A);
label_98FA:;
    /* $98FA: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x9B + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_98FC:;
    /* $98FC: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x0B); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_98FE:;
    /* $98FE: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x1B); FLAG_NZ(g_cpu.A);
label_9900:;
    /* $9900: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x3B + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9902:;
    /* $9902: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x5B); FLAG_NZ(g_cpu.A);
label_9904:;
    /* $9904: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x6B); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9906:;
    /* $9906: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); call_by_address(0x9983); return; }
label_9908:;
    /* $9908: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF402 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_990B:;
    /* $990B: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xE4); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_990D:;
    /* $990D: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xD4); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_990F:;
    /* $990F: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xB4); FLAG_NZ(g_cpu.A);
label_9911:;
    /* $9911: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x94 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9913:;
    /* $9913: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9915:;
    /* $9915: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x14); FLAG_NZ(g_cpu.A);
label_9917:;
    /* $9917: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x34 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9919:;
    /* $9919: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x54); FLAG_NZ(g_cpu.A);
label_991B:;
    /* $991B: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x64); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_991D:;
    /* $991D: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); call_by_address(0x9993); return; }
label_991F:;
    /* $991F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFC02 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9922:;
    /* $9922: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xEC); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9924:;
    /* $9924: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xDC); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9926:;
    /* $9926: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xBC); FLAG_NZ(g_cpu.A);
label_9928:;
    /* $9928: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x9C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_992A:;
    /* $992A: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x0C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_992C:;
    /* $992C: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x1C); FLAG_NZ(g_cpu.A);
label_992E:;
    /* $992E: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x3C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9930:;
    /* $9930: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x5C); FLAG_NZ(g_cpu.A);
label_9932:;
    /* $9932: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x6C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9934:;
    /* $9934: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_99B2; }
label_9936:;
    /* $9936: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF202 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9939:;
    /* $9939: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xE2); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_993B:;
    /* $993B: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xD2); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_993D:;
    /* $993D: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xB2); FLAG_NZ(g_cpu.A);
label_993F:;
    /* $993F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x92 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9941:;
    /* $9941: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x02); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9943:;
    /* $9943: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x12); FLAG_NZ(g_cpu.A);
label_9945:;
    /* $9945: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x32 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9947:;
    /* $9947: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x52); FLAG_NZ(g_cpu.A);
label_9949:;
    /* $9949: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x62); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_994B:;
    /* $994B: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_99BF; }
label_994D:;
    /* $994D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFA02 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9950:;
    /* $9950: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xEA); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9952:;
    /* $9952: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xDA); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9954:;
    /* $9954: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xBA); FLAG_NZ(g_cpu.A);
label_9956:;
    /* $9956: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x9A + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9958:;
    /* $9958: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x0A); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_995A:;
    /* $995A: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x1A); FLAG_NZ(g_cpu.A);
label_995C:;
    /* $995C: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x3A + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_995E:;
    /* $995E: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x5A); FLAG_NZ(g_cpu.A);
label_9960:;
    /* $9960: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x6A); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9962:;
    /* $9962: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_99DE; }
label_9964:;
    /* $9964: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xB304 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9967:;
    /* $9967: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xA3); FLAG_NZ(g_cpu.A);
label_9969:;
    /* $9969: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x93; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_996B:;
    /* $996B: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_996D:;
    /* $996D: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x13; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_996F:;
    /* $996F: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x23); FLAG_NZ(g_cpu.A);
label_9971:;
    /* $9971: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); call_by_address(0x99A6); return; }
label_9973:;
    /* $9973: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xC209 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9976:;
    /* $9976: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9977:;
    /* $9977: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x07; FLAG_NZ(g_cpu.X);
label_9979:;
    /* $9979: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_997A:;
    /* $997A: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x12; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_997C:;
    /* $997C: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_997D:;
    /* $997D: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_997E:;
    /* $997E: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x42; FLAG_NZ(g_cpu.A);
label_9980:;
    /* $9980: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_99F4; }
label_9982:;
    /* $9982: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xC207 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9985:;
    /* $9985: 06 */ maybe_trigger_vblank(5); { uint16_t a=0xA2; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9987:;
    /* $9987: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x92); FLAG_NZ(g_cpu.A);
label_9989:;
    /* $9989: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x12); FLAG_NZ(g_cpu.A);
label_998B:;
    /* $998B: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x22; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_998D:;
    /* $998D: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x42; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_998F:;
    /* $998F: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(2); goto label_9A03; }
label_9991:;
    /* $9991: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xC205 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9994:;
    /* $9994: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xA2); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9996:;
    /* $9996: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x92 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9998:;
    /* $9998: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x12 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_999A:;
    /* $999A: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x22); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_999C:;
    /* $999C: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x42); FLAG_NZ(g_cpu.A);
label_999E:;
    /* $999E: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(2); call_by_address(0x9A12); return; }
label_99A0:;
    /* $99A0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x81A5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_99A3:;
    /* $99A3: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_99A5:;
    /* $99A5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_99B0; }
label_99A7:;
    /* $99A7: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_99A9:;
    /* $99A9: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_99B5; }
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
label_99BF:;
    /* $99BF: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x6A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_99C1:;
    /* $99C1: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_99C3:;
    /* $99C3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_99C8; }
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
label_99DE:;
    /* $99DE: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x20 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_99E0:;
    /* $99E0: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x4C80 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_99E3:;
    /* $99E3: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_99E4:;
    /* $99E4: 99 */ maybe_trigger_vblank(5); nes_write((0x21A9 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_99E7:;
    /* $99E7: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_99E9:;
    /* $99E9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1E; FLAG_NZ(g_cpu.A);
label_99EB:;
    /* $99EB: 85 */ maybe_trigger_vblank(3); nes_write(0x86, g_cpu.A);
label_99ED:;
    /* $99ED: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_99F0:;
    /* $99F0: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_99F2:;
    /* $99F2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_99F7; }
label_99F4:;
    /* $99F4: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF6; g_cpu.S--; func_801B_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x99F4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_99F7:;
    /* $99F7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_99C8;
label_9A03:;
    /* $9A03: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0xBD); FLAG_NZ(g_cpu.A);
label_9A05:;
    /* $9A05: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x04; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9A07:;
    /* $9A07: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0F; g_cpu.C=(g_cpu.A>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_9A09:;
    /* $9A09: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9A3F; }
label_9A0B:;
    /* $9A0B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x11; g_cpu.C=(g_cpu.A>=0x11)?1:0; FLAG_NZ(r&0xFF); }
label_9A0D:;
    /* $9A0D: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9A16; }
label_9A0F:;
    /* $9A0F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3A; FLAG_NZ(g_cpu.A);
label_9A11:;
    /* $9A11: 9D */ maybe_trigger_vblank(5); nes_write((0x6B01 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9A14:;
    /* $9A14: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A3F; }
label_9A16:;
    /* $9A16: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x6B01 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9A19:;
    /* $9A19: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A3F; }
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
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9A22;
    }
label_9A3F:;
    /* $9A3F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_9A41:;
    /* $9A41: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8000_b1(); return;
label_A203:;
    /* $A203: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0400 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A206:;
    /* $A206: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x8A); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A208:;
    /* $A208: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x043F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A20B:;
    /* $A20B: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A20C:;
    /* $A20C: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xEC03 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A20F:;
    /* $A20F: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xEC43 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A212:;
    /* $A212: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x043F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A215:;
    /* $A215: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A216:;
    /* $A216: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xED03 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A219:;
    /* $A219: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xED43 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A21C:;
    /* $A21C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x1022 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A21F:;
    /* $A21F: 0C */ maybe_trigger_vblank(4); (void)nes_read(0xC6C5); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A222:;
    /* $A222: C7 */ maybe_trigger_vblank(5); { uint16_t a=0xD5; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A224:;
    /* $A224: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0xD7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A226:;
    /* $A226: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xE6); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A228:;
    /* $A228: E7 */ maybe_trigger_vblank(5); { uint16_t a=0xF5; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A22A:;
    /* $A22A: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xF7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A22C:;
    /* $A22C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x1022 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A22F:;
    /* $A22F: 0C */ maybe_trigger_vblank(4); (void)nes_read(0xC6C5); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A232:;
    /* $A232: C7 */ maybe_trigger_vblank(5); { uint16_t a=0xD5; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A234:;
    /* $A234: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0xD7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A236:;
    /* $A236: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xE6); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A238:;
    /* $A238: E7 */ maybe_trigger_vblank(5); { uint16_t a=0xE8; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A23A:;
    /* $A23A: E9 */ maybe_trigger_vblank(2); { uint8_t m=0xF9; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A23C:;
    /* $A23C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x1062 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A23F:;
    /* $A23F: 0C */ maybe_trigger_vblank(4); (void)nes_read(0xC6C5); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A242:;
    /* $A242: C7 */ maybe_trigger_vblank(5); { uint16_t a=0xD5; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A244:;
    /* $A244: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0xD7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A246:;
    /* $A246: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xE6); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A248:;
    /* $A248: E7 */ maybe_trigger_vblank(5); { uint16_t a=0xF5; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A24A:;
    /* $A24A: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xF7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A24C:;
    /* $A24C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x1062 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A24F:;
    /* $A24F: 0C */ maybe_trigger_vblank(4); (void)nes_read(0xC6C5); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A252:;
    /* $A252: C7 */ maybe_trigger_vblank(5); { uint16_t a=0xD5; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A254:;
    /* $A254: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0xD7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A256:;
    /* $A256: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xE6); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A258:;
    /* $A258: E7 */ maybe_trigger_vblank(5); { uint16_t a=0xE8; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A25A:;
    /* $A25A: E9 */ maybe_trigger_vblank(2); { uint8_t m=0xF9; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A25C:;
    /* $A25C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0021 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A25F:;
    /* $A25F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA25F); return;
label_A260:;
    /* $A260: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC7); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A262:;
    /* $A262: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xD7 + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A264:;
    /* $A264: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xE7); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A266:;
    /* $A266: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0021 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A269:;
    /* $A269: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA269); return;
label_A26A:;
    /* $A26A: C7 */ maybe_trigger_vblank(5); { uint16_t a=0xC5; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A26C:;
    /* $A26C: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xD5 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A26E:;
    /* $A26E: E7 */ maybe_trigger_vblank(5); { uint16_t a=0xE5; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A270:;
    /* $A270: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x003F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A273:;
    /* $A273: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA2; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x75; g_cpu.S--; if (!nes_dispatch_call(0x220F, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA273, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A276:;
    /* $A276: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A277:;
    /* $A277: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x220F + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A27A:;
    /* $A27A: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A27B:;
    /* $A27B: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x270F + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A27E:;
    /* $A27E: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x07) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A280:;
    /* $A280: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x1222; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A283:;
    /* $A283: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x160F + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A286:;
    /* $A286: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0F27 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A289:;
    /* $A289: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A28A:;
    /* $A28A: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_A2AD; }
label_A28C:;
    /* $A28C: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x2A27; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A28F:;
    /* $A28F: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x150F + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A292:;
    /* $A292: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x38 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A294:;
    /* $A294: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA294); return;
label_A295:;
    /* $A295: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x0212 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A298:;
    /* $A298: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0027 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A29B:;
    /* $A29B: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x0212 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A29E:;
    /* $A29E: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0027); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A2A1:;
    /* $A2A1: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x0212 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A2A4:;
    /* $A2A4: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0035 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A2A7:;
    /* $A2A7: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x0212 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A2AA:;
    /* $A2AA: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0024); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A2AD:;
    /* $A2AD: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x1000 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A2B0:;
    /* $A2B0: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x1020; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A2B3:;
    /* $A2B3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA2B3); return;
label_A2B4:;
    /* $A2B4: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x1928; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A2B7:;
    /* $A2B7: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x0F + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A2B9:;
    /* $A2B9: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x11; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A2BB:;
    /* $A2BB: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x0F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A2BD:;
    /* $A2BD: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_A2BE:;
    /* $A2BE: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x17 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A2C0:;
    /* $A2C0: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x0C14 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A2C3:;
    /* $A2C3: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x3012; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A2C6:;
    /* $A2C6: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x0F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A2C8:;
    /* $A2C8: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x1A; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A2CA:;
    /* $A2CA: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x0F) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A2CC:;
    /* $A2CC: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x21 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A2CE:;
    /* $A2CE: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A2CF:;
    /* $A2CF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA2CF); return;
label_A2D0:;
    /* $A2D0: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x0311 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A2D3:;
    /* $A2D3: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x09); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A2D5:;
    /* $A2D5: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A2D7:;
    /* $A2D7: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x0311 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A2DA:;
    /* $A2DA: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x09); FLAG_NZ(g_cpu.A);
label_A2DC:;
    /* $A2DC: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A2DE:;
    /* $A2DE: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x0311 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A2E1:;
    /* $A2E1: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x0A; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A2E3:;
    /* $A2E3: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A2E5:;
    /* $A2E5: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x0311 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A2E8:;
    /* $A2E8: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x19 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A2EA:;
    /* $A2EA: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A2EC:;
    /* $A2EC: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x0400 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A2EF:;
    /* $A2EF: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x3030; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A2F2:;
    /* $A2F2: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A2F4:;
    /* $A2F4: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x0410 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A2F7:;
    /* $A2F7: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x3415; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A2FA:;
    /* $A2FA: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A2FC:;
    /* $A2FC: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x0410 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A2FF:;
    /* $A2FF: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x3415; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A302:;
    /* $A302: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x3F00 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A305:;
    /* $A305: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A30B; }
label_A307:;
    /* $A307: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x3415; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A30A:;
    /* $A30A: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_A30B:;
    /* $A30B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA30B); return;
label_A30C:;
    /* $A30C: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x0410 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A30F:;
    /* $A30F: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x3415; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A312:;
    /* $A312: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x00; FLAG_NZ(g_cpu.A);
label_A314:;
    /* $A314: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0xA4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A316:;
    /* $A316: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xA4 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A318:;
    /* $A318: 5C */ maybe_trigger_vblank(4); (void)nes_read((0x80A4 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A31B:;
    /* $A31B: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xBB); FLAG_NZ(g_cpu.Y);
label_A31D:;
    /* $A31D: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xED); FLAG_NZ(g_cpu.Y);
label_A31F:;
    /* $A31F: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x24); FLAG_NZ(g_cpu.Y);
label_A321:;
    /* $A321: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x5A); FLAG_NZ(g_cpu.A);
label_A323:;
    /* $A323: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x87); FLAG_NZ(g_cpu.A);
label_A325:;
    /* $A325: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB9); FLAG_NZ(g_cpu.A);
label_A327:;
    /* $A327: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xDD); FLAG_NZ(g_cpu.A);
label_A329:;
    /* $A329: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x15); FLAG_NZ(g_cpu.A);
label_A32B:;
    /* $A32B: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x35); FLAG_NZ(g_cpu.X);
label_A32D:;
    /* $A32D: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x61); FLAG_NZ(g_cpu.X);
label_A32F:;
    /* $A32F: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x8D); FLAG_NZ(g_cpu.X);
label_A331:;
    /* $A331: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0xB1); FLAG_NZ(g_cpu.X);
label_A333:;
    /* $A333: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0xDB); FLAG_NZ(g_cpu.X);
label_A335:;
    /* $A335: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x15); FLAG_NZ(g_cpu.X);
label_A337:;
    /* $A337: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0x3C); FLAG_NZ(g_cpu.A);
label_A339:;
    /* $A339: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0x68); FLAG_NZ(g_cpu.A);
label_A33B:;
    /* $A33B: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0x8B); FLAG_NZ(g_cpu.A);
label_A33D:;
    /* $A33D: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0xA3); FLAG_NZ(g_cpu.A);
label_A33F:;
    /* $A33F: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0xD0); FLAG_NZ(g_cpu.A);
label_A341:;
    /* $A341: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0xF1); FLAG_NZ(g_cpu.A);
label_A343:;
    /* $A343: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0x1B); FLAG_NZ(g_cpu.A);
label_A345:;
    /* $A345: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A346:;
    /* $A346: 5B */ maybe_trigger_vblank(7); { uint16_t a=(0x8BA8 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A349:;
    /* $A349: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A34A:;
    /* $A34A: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xA8) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A34C:;
    /* $A34C: E7 */ maybe_trigger_vblank(5); { uint16_t a=0xA8; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A34E:;
    /* $A34E: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(2); call_by_address(0xA2F9); return; }
label_A350:;
    /* $A350: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0xA9; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A352:;
    /* $A352: 6B */ maybe_trigger_vblank(2); { g_cpu.A &= 0xA9; uint8_t c=g_cpu.C; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>6)&1; g_cpu.V=(((g_cpu.A>>6)&1)^((g_cpu.A>>5)&1)); }
label_A354:;
    /* $A354: 97 */ maybe_trigger_vblank(4); nes_write((0xA9 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_A356:;
    /* $A356: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xA9; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A358:;
    /* $A358: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xA9 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A35A:;
    /* $A35A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x5C; g_cpu.S--; if (!nes_dispatch_call(0x56AA, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA35A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A35D:;
    /* $A35D: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A35E:;
    /* $A35E: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xAA); FLAG_NZ(g_cpu.Y);
label_A360:;
    /* $A360: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xAA; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A362:;
    /* $A362: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x48AB + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A365:;
    /* $A365: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x71; FLAG_NZ(g_cpu.A);
label_A367:;
    /* $A367: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x92; FLAG_NZ(g_cpu.A);
label_A369:;
    /* $A369: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0xBF; FLAG_NZ(g_cpu.A);
label_A36B:;
    /* $A36B: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x24; FLAG_NZ(g_cpu.A);
label_A36D:;
    /* $A36D: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0xAC4D); FLAG_NZ(g_cpu.Y);
label_A370:;
    /* $A370: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_A371:;
    /* $A371: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0xAC84); FLAG_NZ(g_cpu.Y);
label_A374:;
    /* $A374: 97 */ maybe_trigger_vblank(4); nes_write((0xAC + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_A376:;
    /* $A376: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xA324); return; }
label_A378:;
    /* $A378: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xAC; g_cpu.C=(g_cpu.A>=0xAC)?1:0; FLAG_NZ(r&0xFF); }
label_A37A:;
    /* $A37A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xA328); return; }
label_A37C:;
    /* $A37C: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xAC + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A37E:;
    /* $A37E: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xE6AC + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A381:;
    /* $A381: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0xACF3); FLAG_NZ(g_cpu.Y);
label_A384:;
    /* $A384: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x05AC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A387:;
    /* $A387: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xAD0A); FLAG_NZ(g_cpu.A);
label_A38A:;
    /* $A38A: 1A */ maybe_trigger_vblank(2); /* NOP */
label_A38B:;
    /* $A38B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xAD1E); FLAG_NZ(g_cpu.A);
label_A38E:;
    /* $A38E: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_A38F:;
    /* $A38F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xAD4D); FLAG_NZ(g_cpu.A);
label_A392:;
    /* $A392: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xAD + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A394:;
    /* $A394: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_A395:;
    /* $A395: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xAD7F); FLAG_NZ(g_cpu.A);
label_A398:;
    /* $A398: 8E */ maybe_trigger_vblank(4); nes_write(0x98AD, g_cpu.X);
label_A39B:;
    /* $A39B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xADA2); FLAG_NZ(g_cpu.A);
label_A39E:;
    /* $A39E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xBEAD); FLAG_NZ(g_cpu.A);
label_A3A1:;
    /* $A3A1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xADE3); FLAG_NZ(g_cpu.A);
label_A3A4:;
    /* $A3A4: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xAD; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A3A6:;
    /* $A3A6: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xF9AD); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A3A9:;
    /* $A3A9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xAE09); FLAG_NZ(g_cpu.A);
label_A3AC:;
    /* $A3AC: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xAE) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A3AE:;
    /* $A3AE: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A3AF:;
    /* $A3AF: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0xAE2D); FLAG_NZ(g_cpu.X);
label_A3B2:;
    /* $A3B2: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_A3B3:;
    /* $A3B3: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0xAE48); FLAG_NZ(g_cpu.X);
label_A3B6:;
    /* $A3B6: 4B */ maybe_trigger_vblank(2); g_cpu.A &= 0xAE; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_A3B8:;
    /* $A3B8: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x70AE + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A3BB:;
    /* $A3BB: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0xAE85); FLAG_NZ(g_cpu.X);
label_A3BE:;
    /* $A3BE: 8E */ maybe_trigger_vblank(4); nes_write(0x92AE, g_cpu.X);
label_A3C1:;
    /* $A3C1: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0xAEA5); FLAG_NZ(g_cpu.X);
label_A3C4:;
    /* $A3C4: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A374;
    }
label_A3C6:;
    /* $A3C6: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0xAE) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3C8:;
    /* $A3C8: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xC8AE + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_A3CB:;
    /* $A3CB: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0xAECB); FLAG_NZ(g_cpu.X);
label_A3CE:;
    /* $A3CE: DE */ maybe_trigger_vblank(7); { uint16_t a=(0xE1AE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A3D1:;
    /* $A3D1: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0xAEE4); FLAG_NZ(g_cpu.X);
label_A3D4:;
    /* $A3D4: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x02AE); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A3D7:;
    /* $A3D7: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA3); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A3D9:;
    /* $A3D9: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x05 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A3DB:;
    /* $A3DB: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x03); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A3DD:;
    /* $A3DD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA3DD); return;
label_A3DE:;
    /* $A3DE: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x02FF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A3E1:;
    /* $A3E1: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x37); FLAG_NZ(g_cpu.A);
label_A3E3:;
    /* $A3E3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA3E3); return;
label_A3E4:;
    /* $A3E4: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A3E6:;
    /* $A3E6: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x18 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A3E8:;
    /* $A3E8: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A3EA:;
    /* $A3EA: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x67; FLAG_NZ(g_cpu.A);
label_A3EC:;
    /* $A3EC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA3EC); return;
label_A3ED:;
    /* $A3ED: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x02FF + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A3F0:;
    /* $A3F0: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A3F1:;
    /* $A3F1: 87 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A & g_cpu.X); /* SAX */
label_A3F3:;
    /* $A3F3: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x02); FLAG_NZ(g_cpu.A);
label_A3F5:;
    /* $A3F5: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x07); FLAG_NZ(g_cpu.Y);
label_A3F7:;
    /* $A3F7: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A3F9:;
    /* $A3F9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A3FA:;
    /* $A3FA: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A3FC:;
    /* $A3FC: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x02FF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3FF:;
    /* $A3FF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA3FF); return;
label_A400:;
    /* $A400: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A402:;
    /* $A402: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x0F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A404:;
    /* $A404: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x0C); FLAG_NZ(g_cpu.Y);
label_A406:;
    /* $A406: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x0A); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A408:;
    /* $A408: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA408); return;
label_A409:;
    /* $A409: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x02FF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A40C:;
    /* $A40C: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A40D:;
    /* $A40D: 87 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A & g_cpu.X); /* SAX */
label_A40F:;
    /* $A40F: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x1C; FLAG_NZ(g_cpu.A);
label_A411:;
    /* $A411: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x13); FLAG_NZ(g_cpu.Y);
label_A413:;
    /* $A413: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A415:;
    /* $A415: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x37; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A417:;
    /* $A417: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA417); return;
label_A418:;
    /* $A418: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A41A:;
    /* $A41A: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A41C:;
    /* $A41C: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2A; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A41E:;
    /* $A41E: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x12); FLAG_NZ(g_cpu.Y);
label_A420:;
    /* $A420: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A422:;
    /* $A422: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x67; FLAG_NZ(g_cpu.A);
label_A424:;
    /* $A424: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA424); return;
label_A425:;
    /* $A425: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A427:;
    /* $A427: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x01); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A429:;
    /* $A429: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA429); return;
label_A42A:;
    /* $A42A: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xA439; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A42D:;
    /* $A42D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A42E:;
    /* $A42E: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A430:;
    /* $A430: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x96); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A432:;
    /* $A432: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA432); return;
label_A433:;
    /* $A433: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xFF; FLAG_NZ(g_cpu.A);
label_A435:;
    /* $A435: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A436:;
    /* $A436: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A437:;
    /* $A437: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A438:;
    /* $A438: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA438); return;
label_A439:;
    /* $A439: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A43A:;
    /* $A43A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x07FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A43D:;
    /* $A43D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0204 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A440:;
    /* $A440: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA440); return;
label_A441:;
    /* $A441: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A442:;
    /* $A442: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xA442; g_rti_bank = 1; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A443:;
    /* $A443: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A445:;
    /* $A445: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A446:;
    /* $A446: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A448:;
    /* $A448: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); call_by_address(0xA44D); return; }
label_A44A:;
    /* $A44A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A44B:;
    /* $A44B: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x0203 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A44E:;
    /* $A44E: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA102 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A451:;
    /* $A451: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A452:;
    /* $A452: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A454:;
    /* $A454: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A455:;
    /* $A455: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A457:;
    /* $A457: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A458:;
    /* $A458: 87 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A & g_cpu.X); /* SAX */
label_A45A:;
    /* $A45A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A45B:;
    /* $A45B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0003 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A45E:;
    /* $A45E: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A460:;
    /* $A460: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x030B; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A463:;
    /* $A463: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); call_by_address(0xA470); return; }
label_A465:;
    /* $A465: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x5E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A467:;
    /* $A467: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A469:;
    /* $A469: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0B; FLAG_NZ(g_cpu.Y);
label_A46B:;
    /* $A46B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xAE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A46D:;
    /* $A46D: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A46F:;
    /* $A46F: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0301 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A472:;
    /* $A472: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_A473:;
    /* $A473: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x83) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A475:;
    /* $A475: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A476:;
    /* $A476: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x03 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A478:;
    /* $A478: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x31 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A47A:;
    /* $A47A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A47B:;
    /* $A47B: 59 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x0241 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A47E:;
    /* $A47E: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0xFF + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A480:;
    /* $A480: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A481:;
    /* $A481: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA481); return;
label_A482:;
    /* $A482: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A484:;
    /* $A484: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A485:;
    /* $A485: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x03; FLAG_NZ(g_cpu.A);
label_A487:;
    /* $A487: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x030B; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A48A:;
    /* $A48A: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_A497; }
label_A48C:;
    /* $A48C: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x56 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A48E:;
    /* $A48E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A48F:;
    /* $A48F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x5F + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A491:;
    /* $A491: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A493:;
    /* $A493: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_A495:;
    /* $A495: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x8E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A497:;
    /* $A497: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A499:;
    /* $A499: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_A49A:;
    /* $A49A: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A49B:;
    /* $A49B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xA0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A49D:;
    /* $A49D: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A49F:;
    /* $A49F: C7 */ maybe_trigger_vblank(5); { uint16_t a=0x09; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A4A1:;
    /* $A4A1: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xDE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4A3:;
    /* $A4A3: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A4A5:;
    /* $A4A5: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA102 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A4A8:;
    /* $A4A8: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x85 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A4AA:;
    /* $A4AA: 47 */ maybe_trigger_vblank(5); { uint16_t a=0x11; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A4AC:;
    /* $A4AC: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xBA); FLAG_NZ(g_cpu.A);
label_A4AE:;
    /* $A4AE: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x03 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A4B0:;
    /* $A4B0: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A4B1:;
    /* $A4B1: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x83) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4B3:;
    /* $A4B3: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x41) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A4B5:;
    /* $A4B5: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x97 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A4B7:;
    /* $A4B7: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x03) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4B9:;
    /* $A4B9: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A4BB:;
    /* $A4BB: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4BD:;
    /* $A4BD: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A4BF:;
    /* $A4BF: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x0A); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4C1:;
    /* $A4C1: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x0E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4C3:;
    /* $A4C3: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A4C5:;
    /* $A4C5: 47 */ maybe_trigger_vblank(5); { uint16_t a=0x09; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A4C7:;
    /* $A4C7: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x50 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4C9:;
    /* $A4C9: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4CB:;
    /* $A4CB: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0x030B + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A4CE:;
    /* $A4CE: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A4D0:;
    /* $A4D0: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x82 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4D2:;
    /* $A4D2: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A4D3:;
    /* $A4D3: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x9C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4D5:;
    /* $A4D5: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A4D6:;
    /* $A4D6: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xAE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4D8:;
    /* $A4D8: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A4DA:;
    /* $A4DA: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x0A + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_A4DC:;
    /* $A4DC: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4DE:;
    /* $A4DE: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A4E0:;
    /* $A4E0: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xB102 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A4E3:;
    /* $A4E3: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x03 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A4E5:;
    /* $A4E5: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x51); FLAG_NZ(g_cpu.A);
label_A4E7:;
    /* $A4E7: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xBB + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4E9:;
    /* $A4E9: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x05) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4EB:;
    /* $A4EB: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x03FF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4EE:;
    /* $A4EE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA4EE); return;
label_A4EF:;
    /* $A4EF: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A4F1:;
    /* $A4F1: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x030B; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4F4:;
    /* $A4F4: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x09 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A4F6:;
    /* $A4F6: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x50 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4F8:;
    /* $A4F8: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4FA:;
    /* $A4FA: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0x0A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A4FC:;
    /* $A4FC: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x5F + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4FE:;
    /* $A4FE: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A500:;
    /* $A500: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A502:;
    /* $A502: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x82 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A504:;
    /* $A504: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A505:;
    /* $A505: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x8B + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A507:;
    /* $A507: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A508:;
    /* $A508: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x8E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A50A:;
    /* $A50A: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A50C:;
    /* $A50C: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A519; }
label_A50E:;
    /* $A50E: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC6 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A510:;
    /* $A510: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x03; FLAG_NZ(g_cpu.A);
label_A512:;
    /* $A512: CE */ maybe_trigger_vblank(6); { uint16_t a=0x030B; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A515:;
    /* $A515: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA102 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A518:;
    /* $A518: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A519:;
    /* $A519: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A51B:;
    /* $A51B: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x43 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A51D:;
    /* $A51D: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x85) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A51F:;
    /* $A51F: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A520:;
    /* $A520: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x05) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A522:;
    /* $A522: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xFF + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_A524:;
    /* $A524: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A526:;
    /* $A526: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A528:;
    /* $A528: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x030B; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A52B:;
    /* $A52B: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A52C:;
    /* $A52C: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A52D:;
    /* $A52D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x37 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A52F:;
    /* $A52F: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A530:;
    /* $A530: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x50 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A532:;
    /* $A532: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A534:;
    /* $A534: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0x030B + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A537:;
    /* $A537: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x0A) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A539:;
    /* $A539: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x8A + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A53B:;
    /* $A53B: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A53C:;
    /* $A53C: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xA0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A53E:;
    /* $A53E: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A540:;
    /* $A540: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x030B); FLAG_NZ(g_cpu.X);
label_A543:;
    /* $A543: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x09 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_A545:;
    /* $A545: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xFD + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A547:;
    /* $A547: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x03 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A549:;
    /* $A549: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x11) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A54B:;
    /* $A54B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x3C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A54D:;
    /* $A54D: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A54F:;
    /* $A54F: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A550:;
    /* $A550: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x05) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A552:;
    /* $A552: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x51); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A554:;
    /* $A554: 85 */ maybe_trigger_vblank(3); nes_write(0x7B, g_cpu.A);
label_A556:;
    /* $A556: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A558:;
    /* $A558: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_A559:;
    /* $A559: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0003 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A55C:;
    /* $A55C: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0803); FLAG_NZ(g_cpu.A);
label_A55F:;
    /* $A55F: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x5403); FLAG_NZ(g_cpu.A);
label_A562:;
    /* $A562: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A564:;
    /* $A564: 5A */ maybe_trigger_vblank(2); /* NOP */
label_A565:;
    /* $A565: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A567:;
    /* $A567: 67 */ maybe_trigger_vblank(5); { uint16_t a=0x07; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A569:;
    /* $A569: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xA0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A56B:;
    /* $A56B: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A56D:;
    /* $A56D: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x030B); FLAG_NZ(g_cpu.X);
label_A570:;
    /* $A570: C2 */ maybe_trigger_vblank(2); /* NOP */
label_A572:;
    /* $A572: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCD + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A574:;
    /* $A574: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A576:;
    /* $A576: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_A577:;
    /* $A577: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA577); return;
label_A578:;
    /* $A578: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A579:;
    /* $A579: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A57B:;
    /* $A57B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A57C:;
    /* $A57C: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0551 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A57F:;
    /* $A57F: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_A580:;
    /* $A580: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A582:;
    /* $A582: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0531 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A585:;
    /* $A585: 67 */ maybe_trigger_vblank(5); { uint16_t a=0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A587:;
    /* $A587: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A589:;
    /* $A589: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0403 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A58C:;
    /* $A58C: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0803 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A58F:;
    /* $A58F: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0C03 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A592:;
    /* $A592: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x3803 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A595:;
    /* $A595: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x4003 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A598:;
    /* $A598: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x4403 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A59B:;
    /* $A59B: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x4C03 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A59E:;
    /* $A59E: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x7403 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5A1:;
    /* $A5A1: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x7803 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5A4:;
    /* $A5A4: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x8003 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5A7:;
    /* $A5A7: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x8C03 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5AA:;
    /* $A5AA: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0xB003 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5AD:;
    /* $A5AD: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0xB403 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5B0:;
    /* $A5B0: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0xB803 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5B3:;
    /* $A5B3: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0xCC03 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5B6:;
    /* $A5B6: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0xFF03 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5B9:;
    /* $A5B9: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5BB:;
    /* $A5BB: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5BD:;
    /* $A5BD: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A5BE:;
    /* $A5BE: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5C0:;
    /* $A5C0: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x1D + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A5C2:;
    /* $A5C2: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x3B + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5C4:;
    /* $A5C4: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x5503 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5C7:;
    /* $A5C7: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A5C9:;
    /* $A5C9: 5A */ maybe_trigger_vblank(2); /* NOP */
label_A5CA:;
    /* $A5CA: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A5CC:;
    /* $A5CC: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x16); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A5CE:;
    /* $A5CE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA5CE); return;
label_A5CF:;
    /* $A5CF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A5E1; }
label_A5D1:;
    /* $A5D1: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5D3:;
    /* $A5D3: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A5D8; }
label_A5D5:;
    /* $A5D5: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0551 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A5D8:;
    /* $A5D8: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x41); FLAG_NZ(g_cpu.A);
label_A5DA:;
    /* $A5DA: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x2B); FLAG_NZ(g_cpu.A);
label_A5DC:;
    /* $A5DC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0000 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A5DF:;
    /* $A5DF: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5E1:;
    /* $A5E1: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A5E2:;
    /* $A5E2: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5E4:;
    /* $A5E4: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x0015; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5E7:;
    /* $A5E7: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A5FE; }
label_A5E9:;
    /* $A5E9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA5E9); return;
label_A5EA:;
    /* $A5EA: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x15 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5EC:;
    /* $A5EC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA5EC); return;
label_A5ED:;
    /* $A5ED: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x08); FLAG_NZ(g_cpu.A);
label_A5EF:;
    /* $A5EF: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x50 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5F1:;
    /* $A5F1: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5F3:;
    /* $A5F3: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_A5F4:;
    /* $A5F4: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x5F00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5F7:;
    /* $A5F7: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x02); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5F9:;
    /* $A5F9: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A5FA:;
    /* $A5FA: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5FC:;
    /* $A5FC: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(2); goto label_A611; }
label_A5FE:;
    /* $A5FE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA5FE); return;
label_A5FF:;
    /* $A5FF: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A601:;
    /* $A601: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA601); return;
label_A602:;
    /* $A602: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A603:;
    /* $A603: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A605:;
    /* $A605: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A61D; }
label_A607:;
    /* $A607: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA607); return;
label_A608:;
    /* $A608: 99 */ maybe_trigger_vblank(5); nes_write((0x0016 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A60B:;
    /* $A60B: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x15) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A60D:;
    /* $A60D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA60D); return;
label_A60E:;
    /* $A60E: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0015 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_A611:;
    /* $A611: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA002 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A614:;
    /* $A614: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0000 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A617:;
    /* $A617: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x00 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A619:;
    /* $A619: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x16 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A61B:;
    /* $A61B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA61B); return;
label_A61C:;
    /* $A61C: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A61D:;
    /* $A61D: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A61F:;
    /* $A61F: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x0015; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A622:;
    /* $A622: 4F */ maybe_trigger_vblank(6); { uint16_t a=0x0015; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A625:;
    /* $A625: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_A62B; }
label_A627:;
    /* $A627: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A628:;
    /* $A628: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A62A:;
    /* $A62A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA62A); return;
label_A62B:;
    /* $A62B: 87 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A & g_cpu.X); /* SAX */
label_A62D:;
    /* $A62D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A62E:;
    /* $A62E: 89 */ maybe_trigger_vblank(2); /* NOP */
label_A630:;
    /* $A630: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA630); return;
label_A631:;
    /* $A631: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xB102 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A634:;
    /* $A634: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0002 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A637:;
    /* $A637: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x0802 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A63A:;
    /* $A63A: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x1002 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A63D:;
    /* $A63D: 1A */ maybe_trigger_vblank(2); /* NOP */
label_A63E:;
    /* $A63E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A63F:;
    /* $A63F: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_A644; }
label_A641:;
    /* $A641: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A642:;
    /* $A642: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A644:;
    /* $A644: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A645:;
    /* $A645: 82 */ maybe_trigger_vblank(2); /* NOP */
label_A647:;
    /* $A647: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A648:;
    /* $A648: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0219 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_A64B:;
    /* $A64B: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x1A; g_cpu.C=(g_cpu.Y>=0x1A)?1:0; FLAG_NZ(r&0xFF); }
label_A64D:;
    /* $A64D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A64E:;
    /* $A64E: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x1B; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A650:;
    /* $A650: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A651:;
    /* $A651: D1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A653:;
    /* $A653: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A654:;
    /* $A654: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0200 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A657:;
    /* $A657: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xB102 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A65A:;
    /* $A65A: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A65C:;
    /* $A65C: 5A */ maybe_trigger_vblank(2); /* NOP */
label_A65D:;
    /* $A65D: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A65F:;
    /* $A65F: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A660:;
    /* $A660: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0002 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A663:;
    /* $A663: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x0802 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A666:;
    /* $A666: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x1E02 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A669:;
    /* $A669: 1A */ maybe_trigger_vblank(2); /* NOP */
label_A66A:;
    /* $A66A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A66B:;
    /* $A66B: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x0203 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A66E:;
    /* $A66E: 8C */ maybe_trigger_vblank(4); nes_write(0x0219, g_cpu.Y);
label_A671:;
    /* $A671: 8E */ maybe_trigger_vblank(4); nes_write(0x021A, g_cpu.X);
label_A674:;
    /* $A674: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x1A + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_A676:;
    /* $A676: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A677:;
    /* $A677: C2 */ maybe_trigger_vblank(2); /* NOP */
label_A679:;
    /* $A679: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A67A:;
    /* $A67A: CE */ maybe_trigger_vblank(6); { uint16_t a=0x021A; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A67D:;
    /* $A67D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A67F; }
label_A67F:;
    /* $A67F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A680:;
    /* $A680: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A682:;
    /* $A682: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A683:;
    /* $A683: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA102 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A686:;
    /* $A686: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x05) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A688:;
    /* $A688: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x51) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A68A:;
    /* $A68A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A68B:;
    /* $A68B: 44 */ maybe_trigger_vblank(3); (void)nes_read(0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A68D:;
    /* $A68D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A68E:;
    /* $A68E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA68E); return;
label_A68F:;
    /* $A68F: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x0802 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A692:;
    /* $A692: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0xAC02 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A695:;
    /* $A695: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xB402 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A698:;
    /* $A698: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xB802 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A69B:;
    /* $A69B: 1A */ maybe_trigger_vblank(2); /* NOP */
label_A69C:;
    /* $A69C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A69D:;
    /* $A69D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A69F; }
label_A69F:;
    /* $A69F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6A0:;
    /* $A6A0: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_A6A1:;
    /* $A6A1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA6A1); return;
label_A6A2:;
    /* $A6A2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6A3:;
    /* $A6A3: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x8201 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6A6:;
    /* $A6A6: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_A6A7:;
    /* $A6A7: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x05) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A6A9:;
    /* $A6A9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x21); FLAG_NZ(g_cpu.A);
label_A6AB:;
    /* $A6AB: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6AC:;
    /* $A6AC: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_A6AE:;
    /* $A6AE: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6AF:;
    /* $A6AF: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03FF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A6B2:;
    /* $A6B2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA6B2); return;
label_A6B3:;
    /* $A6B3: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x0802 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A6B6:;
    /* $A6B6: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x5902 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A6B9:;
    /* $A6B9: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A6BB:;
    /* $A6BB: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_A6BC:;
    /* $A6BC: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xAC02 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A6BF:;
    /* $A6BF: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xBB02 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A6C2:;
    /* $A6C2: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xC002 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A6C5:;
    /* $A6C5: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A6C7:;
    /* $A6C7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A6C9; }
label_A6C9:;
    /* $A6C9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6CA:;
    /* $A6CA: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_A6CB:;
    /* $A6CB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA6CB); return;
label_A6CC:;
    /* $A6CC: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6CD:;
    /* $A6CD: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0201 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6D0:;
    /* $A6D0: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0x0211 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A6D3:;
    /* $A6D3: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_A6D4:;
    /* $A6D4: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x85) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A6D6:;
    /* $A6D6: 84 */ maybe_trigger_vblank(3); nes_write(0x41, g_cpu.Y);
label_A6D8:;
    /* $A6D8: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x49); FLAG_NZ(g_cpu.A);
label_A6DA:;
    /* $A6DA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0002 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6DD:;
    /* $A6DD: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A6DF:;
    /* $A6DF: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A6E0:;
    /* $A6E0: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A6E2:;
    /* $A6E2: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xA6FB); return; }
label_A6E4:;
    /* $A6E4: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6E5:;
    /* $A6E5: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A6E6:;
    /* $A6E6: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A6E8:;
    /* $A6E8: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); call_by_address(0xA6ED); return; }
label_A6EA:;
    /* $A6EA: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6EB:;
    /* $A6EB: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x0203 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A6EE:;
    /* $A6EE: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A6F0:;
    /* $A6F0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6F1:;
    /* $A6F1: 82 */ maybe_trigger_vblank(2); /* NOP */
label_A6F3:;
    /* $A6F3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6F4:;
    /* $A6F4: 86 */ maybe_trigger_vblank(3); nes_write(0x2E, g_cpu.X);
label_A6F6:;
    /* $A6F6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6F7:;
    /* $A6F7: 87 */ maybe_trigger_vblank(3); nes_write(0x1B, g_cpu.A & g_cpu.X); /* SAX */
label_A6F9:;
    /* $A6F9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6FA:;
    /* $A6FA: 8E */ maybe_trigger_vblank(4); nes_write(0x021A, g_cpu.X);
label_A6FD:;
    /* $A6FD: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x1A; g_cpu.C=(g_cpu.Y>=0x1A)?1:0; FLAG_NZ(r&0xFF); }
label_A6FF:;
    /* $A6FF: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A700:;
    /* $A700: CE */ maybe_trigger_vblank(6); { uint16_t a=0x021A; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A703:;
    /* $A703: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_A704:;
    /* $A704: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A705:;
    /* $A705: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A706:;
    /* $A706: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_A707:;
    /* $A707: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A708:;
    /* $A708: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A709:;
    /* $A709: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA102 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A70C:;
    /* $A70C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A70D:;
    /* $A70D: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A70F:;
    /* $A70F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A710:;
    /* $A710: 5C */ maybe_trigger_vblank(4); (void)nes_read((0x0211 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A713:;
    /* $A713: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_A715:;
    /* $A715: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A717:;
    /* $A717: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A719:;
    /* $A719: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A71A:;
    /* $A71A: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A71C:;
    /* $A71C: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x030B; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A71F:;
    /* $A71F: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_A72C; }
label_A721:;
    /* $A721: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x52 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A723:;
    /* $A723: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A725:;
    /* $A725: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0x030B + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A728:;
    /* $A728: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0B; FLAG_NZ(g_cpu.Y);
label_A72A:;
    /* $A72A: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xA2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A72C:;
    /* $A72C: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A72E:;
    /* $A72E: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x030B); FLAG_NZ(g_cpu.X);
label_A731:;
    /* $A731: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x8301 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A734:;
    /* $A734: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0311 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A737:;
    /* $A737: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x21 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A739:;
    /* $A739: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A73A:;
    /* $A73A: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x03FF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A73D:;
    /* $A73D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA73D); return;
label_A73E:;
    /* $A73E: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A740:;
    /* $A740: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A741:;
    /* $A741: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A743:;
    /* $A743: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A744:;
    /* $A744: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A746:;
    /* $A746: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_A74B; }
label_A748:;
    /* $A748: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A749:;
    /* $A749: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A74B:;
    /* $A74B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x82 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A74D:;
    /* $A74D: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A74E:;
    /* $A74E: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A750:;
    /* $A750: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A755; }
label_A752:;
    /* $A752: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_A753:;
    /* $A753: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A758; }
label_A755:;
    /* $A755: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xB102 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A758:;
    /* $A758: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A75A:;
    /* $A75A: C7 */ maybe_trigger_vblank(5); { uint16_t a=0x11; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A75C:;
    /* $A75C: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xCB); FLAG_NZ(g_cpu.A);
label_A75E:;
    /* $A75E: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x04) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A760:;
    /* $A760: 3A */ maybe_trigger_vblank(2); /* NOP */
label_A761:;
    /* $A761: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x04 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A763:;
    /* $A763: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x31; FLAG_NZ(g_cpu.A);
label_A765:;
    /* $A765: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x1E); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A767:;
    /* $A767: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0003 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A76A:;
    /* $A76A: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A76C:;
    /* $A76C: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x10; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A76E:;
    /* $A76E: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x0E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A770:;
    /* $A770: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A772:;
    /* $A772: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x0203 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A775:;
    /* $A775: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A776:;
    /* $A776: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x03; FLAG_NZ(g_cpu.A);
label_A778:;
    /* $A778: 8E */ maybe_trigger_vblank(4); nes_write(0x030B, g_cpu.X);
label_A77B:;
    /* $A77B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A78D; }
label_A77D:;
    /* $A77D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A77F:;
    /* $A77F: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A784; }
label_A781:;
    /* $A781: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA102 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A784:;
    /* $A784: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A786:;
    /* $A786: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0x0511 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A789:;
    /* $A789: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A78A:;
    /* $A78A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0001 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A78D:;
    /* $A78D: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A78F:;
    /* $A78F: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A790:;
    /* $A790: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A792:;
    /* $A792: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A7A4; }
label_A794:;
    /* $A794: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A796:;
    /* $A796: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A79B; }
label_A798:;
    /* $A798: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0451 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A79B:;
    /* $A79B: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x21 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A79D:;
    /* $A79D: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x38); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A79F:;
    /* $A79F: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x04 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A7A1:;
    /* $A7A1: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x03FF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A7A4:;
    /* $A7A4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA7A4); return;
label_A7A5:;
    /* $A7A5: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A7AA; }
label_A7A7:;
    /* $A7A7: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A7A8:;
    /* $A7A8: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xA7AD); return; }
label_A7AA:;
    /* $A7AA: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A7CB; }
label_A7AC:;
    /* $A7AC: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x96 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A7AE:;
    /* $A7AE: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0xAA01 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A7B1:;
    /* $A7B1: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x03); FLAG_NZ(g_cpu.A);
label_A7B3:;
    /* $A7B3: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x011F); FLAG_NZ(g_cpu.Y);
label_A7B6:;
    /* $A7B6: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_A7B7:;
    /* $A7B7: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xA7BC); return; }
label_A7B9:;
    /* $A7B9: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x05); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A7BB:;
    /* $A7BB: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A7BD:;
    /* $A7BD: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A7C2; }
label_A7BF:;
    /* $A7BF: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_A7C0:;
    /* $A7C0: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A7C5; }
label_A7C2:;
    /* $A7C2: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0551 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7C5:;
    /* $A7C5: 89 */ maybe_trigger_vblank(2); /* NOP */
label_A7C7:;
    /* $A7C7: 87 */ maybe_trigger_vblank(3); nes_write(0xAB, g_cpu.A & g_cpu.X); /* SAX */
label_A7C9:;
    /* $A7C9: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x06 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A7CB:;
    /* $A7CB: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x17 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A7CD:;
    /* $A7CD: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xC5; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A7CF:;
    /* $A7CF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0001 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7D2:;
    /* $A7D2: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7D4:;
    /* $A7D4: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A7D5:;
    /* $A7D5: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7D7:;
    /* $A7D7: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A7F8; }
label_A7D9:;
    /* $A7D9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xB6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A7DB:;
    /* $A7DB: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x03); FLAG_NZ(g_cpu.A);
label_A7DD:;
    /* $A7DD: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_A7DE:;
    /* $A7DE: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x03); FLAG_NZ(g_cpu.A);
label_A7E0:;
    /* $A7E0: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x011F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_A7E3:;
    /* $A7E3: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A7E5:;
    /* $A7E5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xD4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A7E7:;
    /* $A7E7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA7E7); return;
label_A7E8:;
    /* $A7E8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A7E9:;
    /* $A7E9: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0707 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7EC:;
    /* $A7EC: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x47 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_A7EE:;
    /* $A7EE: 87 */ maybe_trigger_vblank(3); nes_write(0xB9, g_cpu.A & g_cpu.X); /* SAX */
label_A7F0:;
    /* $A7F0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0003 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7F3:;
    /* $A7F3: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7F5:;
    /* $A7F5: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A7F6:;
    /* $A7F6: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xA7FB); return; }
label_A7F8:;
    /* $A7F8: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A7F9:;
    /* $A7F9: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x6B03 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A7FC:;
    /* $A7FC: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x8C03 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A7FF:;
    /* $A7FF: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0xA603 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A802:;
    /* $A802: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x00 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A804:;
    /* $A804: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x1D) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A806:;
    /* $A806: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A808:;
    /* $A808: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xC303 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A80B:;
    /* $A80B: 0C */ maybe_trigger_vblank(4); (void)nes_read(0xC800); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A80E:;
    /* $A80E: 0C */ maybe_trigger_vblank(4); (void)nes_read(0xD000); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A811:;
    /* $A811: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A816; }
label_A813:;
    /* $A813: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_A814:;
    /* $A814: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A819; }
label_A816:;
    /* $A816: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0541 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A819:;
    /* $A819: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_A81B:;
    /* $A81B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A81D:;
    /* $A81D: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A81F:;
    /* $A81F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x11 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A821:;
    /* $A821: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x09 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A823:;
    /* $A823: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A825:;
    /* $A825: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x030B; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A828:;
    /* $A828: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); call_by_address(0xA82D); return; }
label_A82A:;
    /* $A82A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A82B:;
    /* $A82B: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x0203 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A82E:;
    /* $A82E: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x0D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A830:;
    /* $A830: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x66 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A832:;
    /* $A832: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x34; g_cpu.S--; func_8001_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA832, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A835:;
    /* $A835: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x8401 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A838:;
    /* $A838: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3A; g_cpu.S--; func_8801_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA838, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A83B:;
    /* $A83B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3D; g_cpu.S--; func_8C01_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA83B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A83E:;
    /* $A83E: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0xA603 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A841:;
    /* $A841: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x43; g_cpu.S--; func_B001_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA841, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A844:;
    /* $A844: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A846:;
    /* $A846: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x030B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_A849:;
    /* $A849: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x20; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A84B:;
    /* $A84B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFD + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A84D:;
    /* $A84D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A84E:;
    /* $A84E: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A850:;
    /* $A850: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x31) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A852:;
    /* $A852: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x56); FLAG_NZ(g_cpu.A);
label_A854:;
    /* $A854: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x85 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A856:;
    /* $A856: 5A */ maybe_trigger_vblank(2); /* NOP */
label_A857:;
    /* $A857: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A859:;
    /* $A859: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x01FF + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A85C:;
    /* $A85C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA85C); return;
label_A85D:;
    /* $A85D: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xA862); return; }
label_A85F:;
    /* $A85F: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x1F); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A861:;
    /* $A861: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x08 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A863:;
    /* $A863: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x0C01 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A866:;
    /* $A866: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A868:;
    /* $A868: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A869:;
    /* $A869: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x03) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A86B:;
    /* $A86B: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x1F); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A86D:;
    /* $A86D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x48 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A86F:;
    /* $A86F: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x8401 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A872:;
    /* $A872: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x8801 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A875:;
    /* $A875: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0xD001 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A878:;
    /* $A878: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0xD401 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A87B:;
    /* $A87B: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0xD801 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A87E:;
    /* $A87E: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A883; }
label_A880:;
    /* $A880: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0551 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A883:;
    /* $A883: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x41; g_cpu.C=(g_cpu.Y>=0x41)?1:0; FLAG_NZ(r&0xFF); }
label_A885:;
    /* $A885: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xCA); FLAG_NZ(g_cpu.A);
label_A887:;
    /* $A887: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x06) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A889:;
    /* $A889: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x02FF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A88C:;
    /* $A88C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA88C); return;
label_A88D:;
    /* $A88D: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_A88E:;
    /* $A88E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A88F:;
    /* $A88F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x2D + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A891:;
    /* $A891: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A892:;
    /* $A892: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x2D; FLAG_NZ(g_cpu.A);
label_A894:;
    /* $A894: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A895:;
    /* $A895: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_A89B; }
label_A897:;
    /* $A897: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A898:;
    /* $A898: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A89A:;
    /* $A89A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A89B:;
    /* $A89B: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x14 + g_cpu.X) & 0xFF), g_cpu.A);
label_A89D:;
    /* $A89D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA89D); return;
label_A89E:;
    /* $A89E: 95 */ maybe_trigger_vblank(4); nes_write((0x15 + g_cpu.X) & 0xFF, g_cpu.A);
label_A8A0:;
    /* $A8A0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8A0); return;
label_A8A1:;
    /* $A8A1: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xA8D0); return; }
label_A8A3:;
    /* $A8A3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8A4:;
    /* $A8A4: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_A8A5:;
    /* $A8A5: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0xFD02); FLAG_NZ(g_cpu.A);
label_A8A8:;
    /* $A8A8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8A9:;
    /* $A8A9: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xA8AC); return; }
label_A8AB:;
    /* $A8AB: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xC7); FLAG_NZ(g_cpu.A);
label_A8AD:;
    /* $A8AD: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x85) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8AF:;
    /* $A8AF: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A8B0:;
    /* $A8B0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0000 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A8B3:;
    /* $A8B3: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A8B5:;
    /* $A8B5: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x15); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A8B7:;
    /* $A8B7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8B7); return;
label_A8B8:;
    /* $A8B8: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A8B9:;
    /* $A8B9: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A8BB:;
    /* $A8BB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A8BC:;
    /* $A8BC: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x00 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A8BE:;
    /* $A8BE: 97 */ maybe_trigger_vblank(4); nes_write((0x06 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_A8C0:;
    /* $A8C0: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xA0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A8C2:;
    /* $A8C2: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A8C4:;
    /* $A8C4: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x15); FLAG_NZ(g_cpu.X);
label_A8C6:;
    /* $A8C6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8C6); return;
label_A8C7:;
    /* $A8C7: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A8C8:;
    /* $A8C8: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x00 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A8CA:;
    /* $A8CA: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x030B); FLAG_NZ(g_cpu.X);
label_A8CD:;
    /* $A8CD: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x06 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_A8CF:;
    /* $A8CF: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xBA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A8D1:;
    /* $A8D1: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8D3:;
    /* $A8D3: C2 */ maybe_trigger_vblank(2); /* NOP */
label_A8D5:;
    /* $A8D5: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A8D7:;
    /* $A8D7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8D7); return;
label_A8D8:;
    /* $A8D8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8D9:;
    /* $A8D9: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8DB:;
    /* $A8DB: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8DC:;
    /* $A8DC: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0541 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A8DF:;
    /* $A8DF: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A8E0:;
    /* $A8E0: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x06 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A8E2:;
    /* $A8E2: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x11 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A8E4:;
    /* $A8E4: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xA4); FLAG_NZ(g_cpu.A);
label_A8E6:;
    /* $A8E6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0000 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A8E9:;
    /* $A8E9: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x00 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A8EB:;
    /* $A8EB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x0D + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A8ED:;
    /* $A8ED: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x09 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A8EF:;
    /* $A8EF: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x2A01; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8F2:;
    /* $A8F2: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x01 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A8F4:;
    /* $A8F4: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x22 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A8F6:;
    /* $A8F6: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x4D + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A8F8:;
    /* $A8F8: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x5001; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8FB:;
    /* $A8FB: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A8FD:;
    /* $A8FD: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_A8FE:;
    /* $A8FE: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A900:;
    /* $A900: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x010E); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A903:;
    /* $A903: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A905:;
    /* $A905: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA905); return;
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
label_A0CC:; return;
label_A0CF:; return;
label_A0D1:; return;
label_A0D4:; return;
label_A0D5:; return;
label_A0D8:; return;
label_A0DA:; return;
label_A0DD:; return;
label_A0DE:; return;
label_A0E1:; return;
label_A0E4:; return;
label_A0E7:; return;
label_A0E8:; return;
label_A0E9:; return;
label_A0EC:; return;
label_A0EF:; return;
label_A0F0:; return;
label_A0F1:; return;
label_A0F4:; return;
label_A0F7:; return;
label_A0F8:; return;
label_A0F9:; return;
label_A0FA:; return;
label_A0FC:; return;
label_A0FF:; return;
label_A100:; return;
label_A101:; return;
label_A102:; return;
label_A104:; return;
label_A107:; return;
label_A108:; return;
label_A109:; return;
label_A10C:; return;
label_A10F:; return;
label_A110:; return;
label_A111:; return;
label_A114:; return;
label_A117:; return;
label_A118:; return;
label_A119:; return;
label_A11A:; return;
label_A11C:; return;
label_A11F:; return;
label_A120:; return;
label_A121:; return;
label_A122:; return;
label_A124:; return;
label_A127:; return;
label_A128:; return;
label_A129:; return;
label_A12C:; return;
label_A12F:; return;
label_A130:; return;
label_A131:; return;
label_A133:; return;
label_A134:; return;
label_A136:; return;
label_A138:; return;
label_A13B:; return;
label_A13E:; return;
label_A13F:; return;
label_A142:; return;
label_A145:; return;
label_A148:; return;
label_A14B:; return;
label_A14E:; return;
label_A151:; return;
label_A153:; return;
label_A156:; return;
label_A158:; return;
label_A159:; return;
label_A15B:; return;
label_A15D:; return;
label_A160:; return;
label_A162:; return;
label_A164:; return;
label_A165:; return;
label_A167:; return;
label_A16A:; return;
label_A16B:; return;
label_A16D:; return;
label_A16F:; return;
label_A171:; return;
label_A172:; return;
label_A174:; return;
label_A175:; return;
label_A176:; return;
label_A179:; return;
label_A17A:; return;
label_A17C:; return;
label_A17D:; return;
label_A17F:; return;
label_A180:; return;
label_A181:; return;
label_A182:; return;
label_A184:; return;
label_A185:; return;
label_A187:; return;
label_A189:; return;
label_A18A:; return;
label_A18C:; return;
label_A18D:; return;
label_A18F:; return;
label_A190:; return;
label_A191:; return;
label_A192:; return;
label_A194:; return;
label_A195:; return;
label_A197:; return;
label_A198:; return;
label_A199:; return;
label_A19A:; return;
label_A19C:; return;
label_A19D:; return;
label_A19F:; return;
label_A1A1:; return;
label_A1A2:; return;
label_A1A4:; return;
label_A1A5:; return;
label_A1A7:; return;
label_A1AA:; return;
label_A1AD:; return;
label_A1AE:; return;
label_A1B1:; return;
label_A1B3:; return;
label_A1B6:; return;
label_A1B9:; return;
label_A1BA:; return;
label_A1BD:; return;
label_A1C0:; return;
label_A1C1:; return;
label_A1C2:; return;
label_A1C5:; return;
label_A1C6:; return;
label_A1C9:; return;
label_A1CA:; return;
label_A1CD:; return;
label_A1D0:; return;
label_A1D1:; return;
label_A1D2:; return;
label_A1D5:; return;
label_A1D6:; return;
label_A1D9:; return;
label_A1DA:; return;
label_A1DD:; return;
label_A1E0:; return;
label_A1E1:; return;
label_A1E2:; return;
label_A1E5:; return;
label_A1E6:; return;
label_A1E9:; return;
label_A1EA:; return;
label_A1ED:; return;
label_A1F0:; return;
label_A1F1:; return;
label_A1F2:; return;
label_A1F5:; return;
label_A1F6:; return;
label_A1F9:; return;
label_A1FB:; return;
label_A1FE:; return;
label_A201:; return;
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
}

void func_98DB_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_98DB_b1");
#endif
    func_98DB_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A29E_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A29E_b1");
#endif
    func_98DB_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A903_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A903_b1");
#endif
    func_98DB_b1_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A203_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A203_b1");
#endif
    func_98DB_b1_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9983_b1_body(int _entry) {
    switch (_entry) {
        case 1: goto label_9A4C;
        case 2: goto label_9A8F;
        case 3: goto label_9AA8;
        case 4: goto label_9ABD;
        case 5: goto label_9AC6;
        case 6: goto label_9ADA;
        case 7: goto label_9AE2;
    }
label_9983:;
    /* $9983: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xC2; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9985:;
    /* $9985: 06 */ maybe_trigger_vblank(5); { uint16_t a=0xA2; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9987:;
    /* $9987: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x92); FLAG_NZ(g_cpu.A);
label_9989:;
    /* $9989: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x12); FLAG_NZ(g_cpu.A);
label_998B:;
    /* $998B: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x22; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_998D:;
    /* $998D: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x42; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_998F:;
    /* $998F: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(2); goto label_9A03; }
label_9991:;
    /* $9991: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xC205 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9994:;
    /* $9994: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xA2); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9996:;
    /* $9996: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x92 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9998:;
    /* $9998: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x12 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_999A:;
    /* $999A: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x22); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_999C:;
    /* $999C: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x42); FLAG_NZ(g_cpu.A);
label_999E:;
    /* $999E: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(2); call_by_address(0x9A12); return; }
label_99A0:;
    /* $99A0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x81A5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_99A3:;
    /* $99A3: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_99A5:;
    /* $99A5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_99B0; }
label_99A7:;
    /* $99A7: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_99A9:;
    /* $99A9: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_99B5; }
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
label_9A03:;
    /* $9A03: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0xBD); FLAG_NZ(g_cpu.A);
label_9A05:;
    /* $9A05: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x04; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9A07:;
    /* $9A07: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0F; g_cpu.C=(g_cpu.A>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_9A09:;
    /* $9A09: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9A3F; }
label_9A0B:;
    /* $9A0B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x11; g_cpu.C=(g_cpu.A>=0x11)?1:0; FLAG_NZ(r&0xFF); }
label_9A0D:;
    /* $9A0D: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9A16; }
label_9A0F:;
    /* $9A0F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3A; FLAG_NZ(g_cpu.A);
label_9A11:;
    /* $9A11: 9D */ maybe_trigger_vblank(5); nes_write((0x6B01 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9A14:;
    /* $9A14: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A3F; }
label_9A16:;
    /* $9A16: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x6B01 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9A19:;
    /* $9A19: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A3F; }
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
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9A22;
    }
label_9A3F:;
    /* $9A3F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_9A41:;
    /* $9A41: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8000_b1(); return;
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
    /* $9A51: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A87; }
label_9A53:;
    /* $9A53: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x81); FLAG_NZ(g_cpu.A);
label_9A55:;
    /* $9A55: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_9A57:;
    /* $9A57: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0x9A44); return; }
label_9A59:;
    /* $9A59: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_9A5B:;
    /* $9A5B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0x9A49); return; }
label_9A5D:;
    /* $9A5D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A60:;
    /* $9A60: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_9A62:;
    /* $9A62: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A87; }
label_9A64:;
    /* $9A64: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x040A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A67:;
    /* $9A67: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_9A69:;
    /* $9A69: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_9A6B:;
    /* $9A6B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A7E; }
label_9A6D:;
    /* $9A6D: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0400 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_9A70:;
    /* $9A70: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0xE4; g_cpu.C=(g_cpu.Y>=0xE4)?1:0; FLAG_NZ(r&0xFF); }
label_9A72:;
    /* $9A72: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A7E; }
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
    /* $9A7C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A84; }
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
label_9AA8:;
    /* $9AA8: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_9AAA:;
    /* $9AAA: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9AC5; }
label_9AAC:;
    /* $9AAC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_9AAE:;
    /* $9AAE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9ABD; }
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
    /* $9ABA: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_9A8F;
label_9ABD:;
    /* $9ABD: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9AC0:;
    /* $9AC0: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x01; FLAG_NZ(g_cpu.A);
label_9AC2:;
    /* $9AC2: 9D */ maybe_trigger_vblank(5); nes_write((0x0405 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9AC5:;
    /* $9AC5: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
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
    /* $9ACE: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9AD9; }
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
    /* $9AD9: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9ADA:;
    /* $9ADA: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x040A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_9ADD:;
    /* $9ADD: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9ADE:;
    /* $9ADE: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_9ADF:;
    /* $9ADF: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_9AE1:;
    /* $9AE1: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
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
    /* $9AF4: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _lo=g_ram[0x100+g_cpu.S]; g_cpu.S++; uint8_t _hi=g_ram[0x100+g_cpu.S]; call_by_address_tail(((uint16_t)_hi<<8|_lo)+1, -1); }
    
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9A44:; return;
label_9A46:; return;
label_9A49:; return;
label_9AA0:; return;
label_9AA2:; return;
label_9AA5:; return;
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
label_A0CC:; return;
label_A0CF:; return;
label_A0D1:; return;
label_A0D4:; return;
label_A0D5:; return;
label_A0D8:; return;
label_A0DA:; return;
label_A0DD:; return;
label_A0DE:; return;
label_A0E1:; return;
label_A0E4:; return;
label_A0E7:; return;
label_A0E8:; return;
label_A0E9:; return;
label_A0EC:; return;
label_A0EF:; return;
label_A0F0:; return;
label_A0F1:; return;
label_A0F4:; return;
label_A0F7:; return;
label_A0F8:; return;
label_A0F9:; return;
label_A0FA:; return;
label_A0FC:; return;
label_A0FF:; return;
label_A100:; return;
label_A101:; return;
label_A102:; return;
label_A104:; return;
label_A107:; return;
label_A108:; return;
label_A109:; return;
label_A10C:; return;
label_A10F:; return;
label_A110:; return;
label_A111:; return;
label_A114:; return;
label_A117:; return;
label_A118:; return;
label_A119:; return;
label_A11A:; return;
label_A11C:; return;
label_A11F:; return;
label_A120:; return;
label_A121:; return;
label_A122:; return;
label_A124:; return;
label_A127:; return;
label_A128:; return;
label_A129:; return;
label_A12C:; return;
label_A12F:; return;
label_A130:; return;
label_A131:; return;
label_A133:; return;
label_A134:; return;
label_A136:; return;
label_A138:; return;
label_A13B:; return;
label_A13E:; return;
label_A13F:; return;
label_A142:; return;
label_A145:; return;
label_A148:; return;
label_A14B:; return;
label_A14E:; return;
label_A151:; return;
label_A153:; return;
label_A156:; return;
label_A158:; return;
label_A159:; return;
label_A15B:; return;
label_A15D:; return;
label_A160:; return;
label_A162:; return;
label_A164:; return;
label_A165:; return;
label_A167:; return;
label_A16A:; return;
label_A16B:; return;
label_A16D:; return;
label_A16F:; return;
label_A171:; return;
label_A172:; return;
label_A174:; return;
label_A175:; return;
label_A176:; return;
label_A179:; return;
label_A17A:; return;
label_A17C:; return;
label_A17D:; return;
label_A17F:; return;
label_A180:; return;
label_A181:; return;
label_A182:; return;
label_A184:; return;
label_A185:; return;
label_A187:; return;
label_A189:; return;
label_A18A:; return;
label_A18C:; return;
label_A18D:; return;
label_A18F:; return;
label_A190:; return;
label_A191:; return;
label_A192:; return;
label_A194:; return;
label_A195:; return;
label_A197:; return;
label_A198:; return;
label_A199:; return;
label_A19A:; return;
label_A19C:; return;
label_A19D:; return;
label_A19F:; return;
label_A1A1:; return;
label_A1A2:; return;
label_A1A4:; return;
label_A1A5:; return;
label_A1A7:; return;
label_A1AA:; return;
label_A1AD:; return;
label_A1AE:; return;
label_A1B1:; return;
label_A1B3:; return;
label_A1B6:; return;
label_A1B9:; return;
label_A1BA:; return;
label_A1BD:; return;
label_A1C0:; return;
label_A1C1:; return;
label_A1C2:; return;
label_A1C5:; return;
label_A1C6:; return;
label_A1C9:; return;
label_A1CA:; return;
label_A1CD:; return;
label_A1D0:; return;
label_A1D1:; return;
label_A1D2:; return;
label_A1D5:; return;
label_A1D6:; return;
label_A1D9:; return;
label_A1DA:; return;
label_A1DD:; return;
label_A1E0:; return;
label_A1E1:; return;
label_A1E2:; return;
label_A1E5:; return;
label_A1E6:; return;
label_A1E9:; return;
label_A1EA:; return;
label_A1ED:; return;
label_A1F0:; return;
label_A1F1:; return;
label_A1F2:; return;
label_A1F5:; return;
label_A1F6:; return;
label_A1F9:; return;
label_A1FB:; return;
label_A1FE:; return;
label_A201:; return;
label_A203:; return;
label_A206:; return;
label_A208:; return;
label_A20B:; return;
label_A20C:; return;
label_A20F:; return;
label_A212:; return;
label_A215:; return;
label_A216:; return;
label_A219:; return;
label_A21C:; return;
label_A21F:; return;
label_A222:; return;
label_A224:; return;
label_A226:; return;
label_A228:; return;
label_A22A:; return;
label_A22C:; return;
label_A22F:; return;
label_A232:; return;
label_A234:; return;
label_A236:; return;
label_A238:; return;
label_A23A:; return;
label_A23C:; return;
label_A23F:; return;
label_A242:; return;
label_A244:; return;
label_A246:; return;
label_A248:; return;
label_A24A:; return;
label_A24C:; return;
label_A24F:; return;
label_A252:; return;
label_A254:; return;
label_A256:; return;
label_A258:; return;
label_A25A:; return;
label_A25C:; return;
label_A25F:; return;
label_A260:; return;
label_A262:; return;
label_A264:; return;
label_A266:; return;
label_A269:; return;
label_A26A:; return;
label_A26C:; return;
label_A26E:; return;
label_A270:; return;
label_A273:; return;
label_A276:; return;
label_A277:; return;
label_A27A:; return;
label_A27B:; return;
label_A27E:; return;
label_A280:; return;
label_A283:; return;
label_A286:; return;
label_A289:; return;
label_A28A:; return;
label_A28C:; return;
label_A28F:; return;
label_A292:; return;
label_A294:; return;
label_A295:; return;
label_A298:; return;
label_A29B:; return;
label_A29E:; return;
label_A2A1:; return;
label_A2A4:; return;
label_A2A7:; return;
label_A2AA:; return;
label_A2AD:; return;
label_A2B0:; return;
label_A2B3:; return;
label_A2B4:; return;
label_A2B7:; return;
label_A2B9:; return;
label_A2BB:; return;
label_A2BD:; return;
label_A2BE:; return;
label_A2C0:; return;
label_A2C3:; return;
label_A2C6:; return;
label_A2C8:; return;
label_A2CA:; return;
label_A2CC:; return;
label_A2CE:; return;
label_A2CF:; return;
label_A2D0:; return;
label_A2D3:; return;
label_A2D5:; return;
label_A2D7:; return;
label_A2DA:; return;
label_A2DC:; return;
label_A2DE:; return;
label_A2E1:; return;
label_A2E3:; return;
label_A2E5:; return;
label_A2E8:; return;
label_A2EA:; return;
label_A2EC:; return;
label_A2EF:; return;
label_A2F2:; return;
label_A2F4:; return;
label_A2F7:; return;
label_A2FA:; return;
label_A2FC:; return;
label_A2FF:; return;
label_A302:; return;
label_A305:; return;
label_A307:; return;
label_A30A:; return;
label_A30B:; return;
label_A30C:; return;
label_A30F:; return;
label_A312:; return;
label_A314:; return;
label_A316:; return;
label_A318:; return;
label_A31B:; return;
label_A31D:; return;
label_A31F:; return;
label_A321:; return;
label_A323:; return;
label_A325:; return;
label_A327:; return;
label_A329:; return;
label_A32B:; return;
label_A32D:; return;
label_A32F:; return;
label_A331:; return;
label_A333:; return;
label_A335:; return;
label_A337:; return;
label_A339:; return;
label_A33B:; return;
label_A33D:; return;
label_A33F:; return;
label_A341:; return;
label_A343:; return;
label_A345:; return;
label_A346:; return;
label_A349:; return;
label_A34A:; return;
label_A34C:; return;
label_A34E:; return;
label_A350:; return;
label_A352:; return;
label_A354:; return;
label_A356:; return;
label_A358:; return;
label_A35A:; return;
label_A35D:; return;
label_A35E:; return;
label_A360:; return;
label_A362:; return;
label_A365:; return;
label_A367:; return;
label_A369:; return;
label_A36B:; return;
label_A36D:; return;
label_A370:; return;
label_A371:; return;
label_A374:; return;
label_A376:; return;
label_A378:; return;
label_A37A:; return;
label_A37C:; return;
label_A37E:; return;
label_A381:; return;
label_A384:; return;
label_A387:; return;
label_A38A:; return;
label_A38B:; return;
label_A38E:; return;
label_A38F:; return;
label_A392:; return;
label_A394:; return;
label_A395:; return;
label_A398:; return;
label_A39B:; return;
label_A39E:; return;
label_A3A1:; return;
label_A3A4:; return;
label_A3A6:; return;
label_A3A9:; return;
label_A3AC:; return;
label_A3AE:; return;
label_A3AF:; return;
label_A3B2:; return;
label_A3B3:; return;
label_A3B6:; return;
label_A3B8:; return;
label_A3BB:; return;
label_A3BE:; return;
label_A3C1:; return;
label_A3C4:; return;
label_A3C6:; return;
label_A3C8:; return;
label_A3CB:; return;
label_A3CE:; return;
label_A3D1:; return;
label_A3D4:; return;
label_A3D7:; return;
label_A3D9:; return;
label_A3DB:; return;
label_A3DD:; return;
label_A3DE:; return;
label_A3E1:; return;
label_A3E3:; return;
label_A3E4:; return;
label_A3E6:; return;
label_A3E8:; return;
label_A3EA:; return;
label_A3EC:; return;
label_A3ED:; return;
label_A3F0:; return;
label_A3F1:; return;
label_A3F3:; return;
label_A3F5:; return;
label_A3F7:; return;
label_A3F9:; return;
label_A3FA:; return;
label_A3FC:; return;
label_A3FF:; return;
label_A400:; return;
label_A402:; return;
label_A404:; return;
label_A406:; return;
label_A408:; return;
label_A409:; return;
label_A40C:; return;
label_A40D:; return;
label_A40F:; return;
label_A411:; return;
label_A413:; return;
label_A415:; return;
label_A417:; return;
label_A418:; return;
label_A41A:; return;
label_A41C:; return;
label_A41E:; return;
label_A420:; return;
label_A422:; return;
label_A424:; return;
label_A425:; return;
label_A427:; return;
label_A429:; return;
label_A42A:; return;
label_A42D:; return;
label_A42E:; return;
label_A430:; return;
label_A432:; return;
label_A433:; return;
label_A435:; return;
label_A436:; return;
label_A437:; return;
label_A438:; return;
label_A439:; return;
label_A43A:; return;
label_A43D:; return;
label_A440:; return;
label_A441:; return;
label_A442:; return;
label_A443:; return;
label_A445:; return;
label_A446:; return;
label_A448:; return;
label_A44A:; return;
label_A44B:; return;
label_A44E:; return;
label_A451:; return;
label_A452:; return;
label_A454:; return;
label_A455:; return;
label_A457:; return;
label_A458:; return;
label_A45A:; return;
label_A45B:; return;
label_A45E:; return;
label_A460:; return;
label_A463:; return;
label_A465:; return;
label_A467:; return;
label_A469:; return;
label_A46B:; return;
label_A46D:; return;
label_A46F:; return;
label_A472:; return;
label_A473:; return;
label_A475:; return;
label_A476:; return;
label_A478:; return;
label_A47A:; return;
label_A47B:; return;
label_A47E:; return;
label_A480:; return;
label_A481:; return;
label_A482:; return;
label_A484:; return;
label_A485:; return;
label_A487:; return;
label_A48A:; return;
label_A48C:; return;
label_A48E:; return;
label_A48F:; return;
label_A491:; return;
label_A493:; return;
label_A495:; return;
label_A497:; return;
label_A499:; return;
label_A49A:; return;
label_A49B:; return;
label_A49D:; return;
label_A49F:; return;
label_A4A1:; return;
label_A4A3:; return;
label_A4A5:; return;
label_A4A8:; return;
label_A4AA:; return;
label_A4AC:; return;
label_A4AE:; return;
label_A4B0:; return;
label_A4B1:; return;
label_A4B3:; return;
label_A4B5:; return;
label_A4B7:; return;
label_A4B9:; return;
label_A4BB:; return;
label_A4BD:; return;
label_A4BF:; return;
label_A4C1:; return;
label_A4C3:; return;
label_A4C5:; return;
label_A4C7:; return;
label_A4C9:; return;
label_A4CB:; return;
label_A4CE:; return;
label_A4D0:; return;
label_A4D2:; return;
label_A4D3:; return;
label_A4D5:; return;
label_A4D6:; return;
label_A4D8:; return;
label_A4DA:; return;
label_A4DC:; return;
label_A4DE:; return;
label_A4E0:; return;
label_A4E3:; return;
label_A4E5:; return;
label_A4E7:; return;
label_A4E9:; return;
label_A4EB:; return;
label_A4EE:; return;
label_A4EF:; return;
label_A4F1:; return;
label_A4F4:; return;
label_A4F6:; return;
label_A4F8:; return;
label_A4FA:; return;
label_A4FC:; return;
label_A4FE:; return;
label_A500:; return;
label_A502:; return;
label_A504:; return;
label_A505:; return;
label_A507:; return;
label_A508:; return;
label_A50A:; return;
label_A50C:; return;
label_A50E:; return;
label_A510:; return;
label_A512:; return;
label_A515:; return;
label_A518:; return;
label_A519:; return;
label_A51B:; return;
label_A51D:; return;
label_A51F:; return;
label_A520:; return;
label_A522:; return;
label_A524:; return;
label_A526:; return;
label_A528:; return;
label_A52B:; return;
label_A52C:; return;
label_A52D:; return;
label_A52F:; return;
label_A530:; return;
label_A532:; return;
label_A534:; return;
label_A537:; return;
label_A539:; return;
label_A53B:; return;
label_A53C:; return;
label_A53E:; return;
label_A540:; return;
label_A543:; return;
label_A545:; return;
label_A547:; return;
label_A549:; return;
label_A54B:; return;
label_A54D:; return;
label_A54F:; return;
label_A550:; return;
label_A552:; return;
label_A554:; return;
label_A556:; return;
label_A558:; return;
label_A559:; return;
label_A55C:; return;
label_A55F:; return;
label_A562:; return;
label_A564:; return;
label_A565:; return;
label_A567:; return;
label_A569:; return;
label_A56B:; return;
label_A56D:; return;
label_A570:; return;
label_A572:; return;
label_A574:; return;
label_A576:; return;
label_A577:; return;
label_A578:; return;
label_A579:; return;
label_A57B:; return;
label_A57C:; return;
label_A57F:; return;
label_A580:; return;
label_A582:; return;
label_A585:; return;
label_A587:; return;
label_A589:; return;
label_A58C:; return;
label_A58F:; return;
label_A592:; return;
label_A595:; return;
label_A598:; return;
label_A59B:; return;
label_A59E:; return;
label_A5A1:; return;
label_A5A4:; return;
label_A5A7:; return;
label_A5AA:; return;
label_A5AD:; return;
label_A5B0:; return;
label_A5B3:; return;
label_A5B6:; return;
label_A5B9:; return;
label_A5BB:; return;
label_A5BD:; return;
label_A5BE:; return;
label_A5C0:; return;
label_A5C2:; return;
label_A5C4:; return;
label_A5C7:; return;
label_A5C9:; return;
label_A5CA:; return;
label_A5CC:; return;
label_A5CE:; return;
label_A5CF:; return;
label_A5D1:; return;
label_A5D3:; return;
label_A5D5:; return;
label_A5D8:; return;
label_A5DA:; return;
label_A5DC:; return;
label_A5DF:; return;
label_A5E1:; return;
label_A5E2:; return;
label_A5E4:; return;
label_A5E7:; return;
label_A5E9:; return;
label_A5EA:; return;
label_A5EC:; return;
label_A5ED:; return;
label_A5EF:; return;
label_A5F1:; return;
label_A5F3:; return;
label_A5F4:; return;
label_A5F7:; return;
label_A5F9:; return;
label_A5FA:; return;
label_A5FC:; return;
label_A5FE:; return;
label_A5FF:; return;
label_A601:; return;
label_A602:; return;
label_A603:; return;
label_A605:; return;
label_A607:; return;
label_A608:; return;
label_A60B:; return;
label_A60D:; return;
label_A60E:; return;
label_A611:; return;
label_A614:; return;
label_A617:; return;
label_A619:; return;
label_A61B:; return;
label_A61C:; return;
label_A61D:; return;
label_A61F:; return;
label_A622:; return;
label_A625:; return;
label_A627:; return;
label_A628:; return;
label_A62A:; return;
label_A62B:; return;
label_A62D:; return;
label_A62E:; return;
label_A630:; return;
label_A631:; return;
label_A634:; return;
label_A637:; return;
label_A63A:; return;
label_A63D:; return;
label_A63E:; return;
label_A63F:; return;
label_A641:; return;
label_A642:; return;
label_A644:; return;
label_A645:; return;
label_A647:; return;
label_A648:; return;
label_A64B:; return;
label_A64D:; return;
label_A64E:; return;
label_A650:; return;
label_A651:; return;
label_A653:; return;
label_A654:; return;
label_A657:; return;
label_A65A:; return;
label_A65C:; return;
label_A65D:; return;
label_A65F:; return;
label_A660:; return;
label_A663:; return;
label_A666:; return;
label_A669:; return;
label_A66A:; return;
label_A66B:; return;
label_A66E:; return;
label_A671:; return;
label_A674:; return;
label_A676:; return;
label_A677:; return;
label_A679:; return;
label_A67A:; return;
label_A67D:; return;
label_A67F:; return;
label_A680:; return;
label_A682:; return;
label_A683:; return;
label_A686:; return;
label_A688:; return;
label_A68A:; return;
label_A68B:; return;
label_A68D:; return;
label_A68E:; return;
label_A68F:; return;
label_A692:; return;
label_A695:; return;
label_A698:; return;
label_A69B:; return;
label_A69C:; return;
label_A69D:; return;
label_A69F:; return;
label_A6A0:; return;
label_A6A1:; return;
label_A6A2:; return;
label_A6A3:; return;
label_A6A6:; return;
label_A6A7:; return;
label_A6A9:; return;
label_A6AB:; return;
label_A6AC:; return;
label_A6AE:; return;
label_A6AF:; return;
label_A6B2:; return;
label_A6B3:; return;
label_A6B6:; return;
label_A6B9:; return;
label_A6BB:; return;
label_A6BC:; return;
label_A6BF:; return;
label_A6C2:; return;
label_A6C5:; return;
label_A6C7:; return;
label_A6C9:; return;
label_A6CA:; return;
label_A6CB:; return;
label_A6CC:; return;
label_A6CD:; return;
label_A6D0:; return;
label_A6D3:; return;
label_A6D4:; return;
label_A6D6:; return;
label_A6D8:; return;
label_A6DA:; return;
label_A6DD:; return;
label_A6DF:; return;
label_A6E0:; return;
label_A6E2:; return;
label_A6E4:; return;
label_A6E5:; return;
label_A6E6:; return;
label_A6E8:; return;
label_A6EA:; return;
label_A6EB:; return;
label_A6EE:; return;
label_A6F0:; return;
label_A6F1:; return;
label_A6F3:; return;
label_A6F4:; return;
label_A6F6:; return;
label_A6F7:; return;
label_A6F9:; return;
label_A6FA:; return;
label_A6FD:; return;
label_A6FF:; return;
label_A700:; return;
label_A703:; return;
label_A704:; return;
label_A705:; return;
label_A706:; return;
label_A707:; return;
label_A708:; return;
label_A709:; return;
label_A70C:; return;
label_A70D:; return;
label_A70F:; return;
label_A710:; return;
label_A713:; return;
label_A715:; return;
label_A717:; return;
label_A719:; return;
label_A71A:; return;
label_A71C:; return;
label_A71F:; return;
label_A721:; return;
label_A723:; return;
label_A725:; return;
label_A728:; return;
label_A72A:; return;
label_A72C:; return;
label_A72E:; return;
label_A731:; return;
label_A734:; return;
label_A737:; return;
label_A739:; return;
label_A73A:; return;
label_A73D:; return;
label_A73E:; return;
label_A740:; return;
label_A741:; return;
label_A743:; return;
label_A744:; return;
label_A746:; return;
label_A748:; return;
label_A749:; return;
label_A74B:; return;
label_A74D:; return;
label_A74E:; return;
label_A750:; return;
label_A752:; return;
label_A753:; return;
label_A755:; return;
label_A758:; return;
label_A75A:; return;
label_A75C:; return;
label_A75E:; return;
label_A760:; return;
label_A761:; return;
label_A763:; return;
label_A765:; return;
label_A767:; return;
label_A76A:; return;
label_A76C:; return;
label_A76E:; return;
label_A770:; return;
label_A772:; return;
label_A775:; return;
label_A776:; return;
label_A778:; return;
label_A77B:; return;
label_A77D:; return;
label_A77F:; return;
label_A781:; return;
label_A784:; return;
label_A786:; return;
label_A789:; return;
label_A78A:; return;
label_A78D:; return;
label_A78F:; return;
label_A790:; return;
label_A792:; return;
label_A794:; return;
label_A796:; return;
label_A798:; return;
label_A79B:; return;
label_A79D:; return;
label_A79F:; return;
label_A7A1:; return;
label_A7A4:; return;
label_A7A5:; return;
label_A7A7:; return;
label_A7A8:; return;
label_A7AA:; return;
label_A7AC:; return;
label_A7AE:; return;
label_A7B1:; return;
label_A7B3:; return;
label_A7B6:; return;
label_A7B7:; return;
label_A7B9:; return;
label_A7BB:; return;
label_A7BD:; return;
label_A7BF:; return;
label_A7C0:; return;
label_A7C2:; return;
label_A7C5:; return;
label_A7C7:; return;
label_A7C9:; return;
label_A7CB:; return;
label_A7CD:; return;
label_A7CF:; return;
label_A7D2:; return;
label_A7D4:; return;
label_A7D5:; return;
label_A7D7:; return;
label_A7D9:; return;
label_A7DB:; return;
label_A7DD:; return;
label_A7DE:; return;
label_A7E0:; return;
label_A7E3:; return;
label_A7E5:; return;
label_A7E7:; return;
label_A7E8:; return;
label_A7E9:; return;
label_A7EC:; return;
label_A7EE:; return;
label_A7F0:; return;
label_A7F3:; return;
label_A7F5:; return;
label_A7F6:; return;
label_A7F8:; return;
label_A7F9:; return;
label_A7FC:; return;
label_A7FF:; return;
label_A802:; return;
label_A804:; return;
label_A806:; return;
label_A808:; return;
label_A80B:; return;
label_A80E:; return;
label_A811:; return;
label_A813:; return;
label_A814:; return;
label_A816:; return;
label_A819:; return;
label_A81B:; return;
label_A81D:; return;
label_A81F:; return;
label_A821:; return;
label_A823:; return;
label_A825:; return;
label_A828:; return;
label_A82A:; return;
label_A82B:; return;
label_A82E:; return;
label_A830:; return;
label_A832:; return;
label_A835:; return;
label_A838:; return;
label_A83B:; return;
label_A83E:; return;
label_A841:; return;
label_A844:; return;
label_A846:; return;
label_A849:; return;
label_A84B:; return;
label_A84D:; return;
label_A84E:; return;
label_A850:; return;
label_A852:; return;
label_A854:; return;
label_A856:; return;
label_A857:; return;
label_A859:; return;
label_A85C:; return;
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
}

void func_9983_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9983_b1");
#endif
    func_9983_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9A4C_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A4C_b1");
#endif
    func_9983_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9A8F_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A8F_b1");
#endif
    func_9983_b1_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9AA8_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9AA8_b1");
#endif
    func_9983_b1_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9ABD_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9ABD_b1");
#endif
    func_9983_b1_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9AC6_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9AC6_b1");
#endif
    func_9983_b1_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9ADA_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9ADA_b1");
#endif
    func_9983_b1_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9AE2_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9AE2_b1");
#endif
    func_9983_b1_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9993_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9993_b1");
#endif
label_9993:;
    /* $9993: C2 */ maybe_trigger_vblank(2); /* NOP */
label_9995:;
    /* $9995: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x03; FLAG_NZ(g_cpu.X);
label_9997:;
    /* $9997: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_9998:;
    /* $9998: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x12 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_999A:;
    /* $999A: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x22); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_999C:;
    /* $999C: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x42); FLAG_NZ(g_cpu.A);
label_999E:;
    /* $999E: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(2); goto label_9A12; }
label_99A0:;
    /* $99A0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x81A5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_99A3:;
    /* $99A3: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_99A5:;
    /* $99A5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_99B0; }
label_99A7:;
    /* $99A7: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_99A9:;
    /* $99A9: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_99B5; }
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
label_9A12:;
    /* $9A12: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x6B + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9A14:;
    /* $9A14: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A3F; }
label_9A16:;
    /* $9A16: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x6B01 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9A19:;
    /* $9A19: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A3F; }
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
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9A22;
    }
label_9A3F:;
    /* $9A3F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_9A41:;
    /* $9A41: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8000_b1(); return;
}

void func_99BF_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99BF_b1");
#endif
label_99BF:;
    /* $99BF: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x6A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_99C1:;
    /* $99C1: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_99C3:;
    /* $99C3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_99C8; }
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

void func_99DE_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99DE_b1");
#endif
label_99DE:;
    /* $99DE: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x20 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_99E0:;
    /* $99E0: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x4C80 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_99E3:;
    /* $99E3: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_99E4:;
    /* $99E4: 99 */ maybe_trigger_vblank(5); nes_write((0x21A9 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_99E7:;
    /* $99E7: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_99E9:;
    /* $99E9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1E; FLAG_NZ(g_cpu.A);
label_99EB:;
    /* $99EB: 85 */ maybe_trigger_vblank(3); nes_write(0x86, g_cpu.A);
label_99ED:;
    /* $99ED: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_99F0:;
    /* $99F0: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_99F2:;
    /* $99F2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_99F7; }
label_99F4:;
    /* $99F4: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x99; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF6; g_cpu.S--; func_801B_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x99F4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_99F7:;
    /* $99F7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_99C8_b1(); return;
}

void func_99A6_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99A6_b1");
#endif
label_99A6:;
    /* $99A6: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xC9; FLAG_NZ(g_cpu.A);
label_99A8:;
    /* $99A8: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_99AA:;
    /* $99AA: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_99AB:;
    /* $99AB: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_99AD:;
    /* $99AD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8000_b1(); return;
}

void func_9A03_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A03_b1");
#endif
label_9A03:;
    /* $9A03: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0xBD); FLAG_NZ(g_cpu.A);
label_9A05:;
    /* $9A05: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x04; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9A07:;
    /* $9A07: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0F; g_cpu.C=(g_cpu.A>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_9A09:;
    /* $9A09: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9A3F; }
label_9A0B:;
    /* $9A0B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x11; g_cpu.C=(g_cpu.A>=0x11)?1:0; FLAG_NZ(r&0xFF); }
label_9A0D:;
    /* $9A0D: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9A16; }
label_9A0F:;
    /* $9A0F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3A; FLAG_NZ(g_cpu.A);
label_9A11:;
    /* $9A11: 9D */ maybe_trigger_vblank(5); nes_write((0x6B01 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9A14:;
    /* $9A14: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A3F; }
label_9A16:;
    /* $9A16: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x6B01 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9A19:;
    /* $9A19: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A3F; }
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
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9A22;
    }
label_9A3F:;
    /* $9A3F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_9A41:;
    /* $9A41: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8000_b1(); return;
}

void func_9A12_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A12_b1");
#endif
label_9A12:;
    /* $9A12: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x6B + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9A14:;
    /* $9A14: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A3F; }
label_9A16:;
    /* $9A16: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x6B01 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9A19:;
    /* $9A19: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A3F; }
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
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9A22;
    }
label_9A3F:;
    /* $9A3F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_9A41:;
    /* $9A41: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8000_b1(); return;
}

void func_99BA_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99BA_b1");
#endif
label_99BA:;
    /* $99BA: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_99BC:;
    /* $99BC: 85 */ maybe_trigger_vblank(3); nes_write(0x86, g_cpu.A);
label_99BE:;
    /* $99BE: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_99C1:;
    /* $99C1: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_99C3:;
    /* $99C3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_99C8; }
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

void func_99C8_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99C8_b1");
#endif
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

void func_99CC_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99CC_b1");
#endif
label_99CC:;
    /* $99CC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_99CE:;
    /* $99CE: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_99D0:;
    /* $99D0: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_99A1_b1(); return;
}

void func_9BD2_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9BD2_b1");
#endif
label_9BD2:;
    /* $9BD2: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9BD5:;
    /* $9BD5: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9BD7:;
    /* $9BD7: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9BE0; }
label_9BD9:;
    /* $9BD9: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9BDC:;
    /* $9BDC: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_9BDE:;
    /* $9BDE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9BE7; }
label_9BE0:;
    /* $9BE0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9BE2:;
    /* $9BE2: 9D */ maybe_trigger_vblank(5); nes_write((0x6AF4 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9BE5:;
    /* $9BE5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_9C12; }
label_9BE7:;
    /* $9BE7: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0405 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9BEA:;
    /* $9BEA: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9BEB:;
    /* $9BEB: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(2); goto label_9C12; }
label_9BED:;
    /* $9BED: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6AF4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9BF0:;
    /* $9BF0: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_9BF2:;
    /* $9BF2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_9C12; }
label_9BF4:;
    /* $9BF4: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9B; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF6; g_cpu.S--; func_802D_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9BF4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9BF7:;
    /* $9BF7: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_9BF9:;
    /* $9BF9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_9BFB:;
    /* $9BFB: 9D */ maybe_trigger_vblank(5); nes_write((0x0402 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9BFE:;
    /* $9BFE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x00; g_cpu.S--; func_8030_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9BFE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9C01:;
    /* $9C01: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x4B); FLAG_NZ(g_cpu.X);
label_9C03:;
    /* $9C03: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_9C05:;
    /* $9C05: 9D */ maybe_trigger_vblank(5); nes_write((0x0403 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9C08:;
    /* $9C08: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x0A; g_cpu.S--; func_8033_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9C08, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9C0B:;
    /* $9C0B: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9C12; }
label_9C0D:;
    /* $9C0D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_9C0F:;
    /* $9C0F: 9D */ maybe_trigger_vblank(5); nes_write((0x6AF4 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9C12:;
    /* $9C12: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9C14:;
    /* $9C14: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x9C; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x16; g_cpu.S--; func_800C_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9C14, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9C17:;
    /* $9C17: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8006_b1(); return;
}

void func_9F52_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9F52_b1");
#endif
label_9F52:;
    /* $9F52: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_9F53:;
    /* $9F53: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9F55:;
    /* $9F55: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9F57:;
    /* $9F57: FC */ maybe_trigger_vblank(4); (void)nes_read((0x0400 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9F5A:;
    /* $9F5A: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9F5B:;
    /* $9F5B: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x08 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9F5D:;
    /* $9F5D: FC */ maybe_trigger_vblank(4); (void)nes_read((0x0408 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9F60:;
    /* $9F60: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_9F61:;
    /* $9F61: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9F63:;
    /* $9F63: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xF8 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9F65:;
    /* $9F65: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFC00 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9F68:;
    /* $9F68: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xFC + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9F6A:;
    /* $9F6A: FC */ maybe_trigger_vblank(4); (void)nes_read((0xF8FC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9F6D:;
    /* $9F6D: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9F6F:;
    /* $9F6F: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x02); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9F71:;
    /* $9F71: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9F73:;
    /* $9F73: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xF8 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9F75:;
    /* $9F75: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFC00 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9F78:;
    /* $9F78: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9F79:;
    /* $9F79: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x0A); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9F7B:;
    /* $9F7B: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xF8); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9F7D:;
    /* $9F7D: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_9F7E:;
    /* $9F7E: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_9F7F:;
    /* $9F7F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9F7F); return;
}

void func_9FA4_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9FA4_b1");
#endif
label_9FA4:;
    /* $9FA4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9FA4); return;
}

void func_9161_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9161_b1");
#endif
label_9161:;
    /* $9161: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x3205; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9164:;
    /* $9164: D1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x48) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9166:;
    /* $9166: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_9167:;
    /* $9167: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x01); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_9169:;
    /* $9169: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_916A:;
    /* $916A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_916B:;
    /* $916B: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x48) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_916D:;
    /* $916D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0x91; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6F; g_cpu.S--; if (!nes_dispatch_call(0x0000, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x916D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9170:;
    /* $9170: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xF0; g_cpu.C=(g_cpu.X>=0xF0)?1:0; FLAG_NZ(r&0xFF); }
label_9172:;
    /* $9172: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x92DE); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9175:;
    /* $9175: 8D */ maybe_trigger_vblank(4); nes_write(0x3CA0, g_cpu.A);
label_9178:;
    /* $9178: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x00; g_cpu.C=(g_cpu.Y>=0x00)?1:0; FLAG_NZ(r&0xFF); }
label_917A:;
    /* $917A: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0102); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_917D:;
    /* $917D: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0002); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9180:;
    /* $9180: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9180); return;
}

void func_9173_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9173_b1");
#endif
label_9173:;
    /* $9173: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x8D92 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9176:;
    /* $9176: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x3C; FLAG_NZ(g_cpu.Y);
label_9178:;
    /* $9178: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x00; g_cpu.C=(g_cpu.Y>=0x00)?1:0; FLAG_NZ(r&0xFF); }
label_917A:;
    /* $917A: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0102); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_917D:;
    /* $917D: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0002); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9180:;
    /* $9180: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9180); return;
}

void func_A44D_b1_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B3E4;
        case 2: goto label_B3BF;
        case 3: goto label_B0E7;
        case 4: goto label_AFE5;
        case 5: goto label_B42C;
    }
label_A44D:;
    /* $A44D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A44E:;
    /* $A44E: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA102 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A451:;
    /* $A451: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A452:;
    /* $A452: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A454:;
    /* $A454: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A455:;
    /* $A455: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A457:;
    /* $A457: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A458:;
    /* $A458: 87 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A & g_cpu.X); /* SAX */
label_A45A:;
    /* $A45A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A45B:;
    /* $A45B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0003 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A45E:;
    /* $A45E: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A460:;
    /* $A460: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x030B; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A463:;
    /* $A463: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); call_by_address(0xA470); return; }
label_A465:;
    /* $A465: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x5E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A467:;
    /* $A467: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A469:;
    /* $A469: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0B; FLAG_NZ(g_cpu.Y);
label_A46B:;
    /* $A46B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xAE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A46D:;
    /* $A46D: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A46F:;
    /* $A46F: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0301 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A472:;
    /* $A472: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_A473:;
    /* $A473: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x83) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A475:;
    /* $A475: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A476:;
    /* $A476: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x03 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A478:;
    /* $A478: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x31 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A47A:;
    /* $A47A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A47B:;
    /* $A47B: 59 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x0241 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A47E:;
    /* $A47E: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0xFF + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A480:;
    /* $A480: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A481:;
    /* $A481: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA481); return;
label_A482:;
    /* $A482: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A484:;
    /* $A484: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A485:;
    /* $A485: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x03; FLAG_NZ(g_cpu.A);
label_A487:;
    /* $A487: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x030B; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A48A:;
    /* $A48A: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_A497; }
label_A48C:;
    /* $A48C: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x56 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A48E:;
    /* $A48E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A48F:;
    /* $A48F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x5F + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A491:;
    /* $A491: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A493:;
    /* $A493: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_A495:;
    /* $A495: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x8E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A497:;
    /* $A497: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A499:;
    /* $A499: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_A49A:;
    /* $A49A: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A49B:;
    /* $A49B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xA0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A49D:;
    /* $A49D: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A49F:;
    /* $A49F: C7 */ maybe_trigger_vblank(5); { uint16_t a=0x09; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A4A1:;
    /* $A4A1: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xDE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4A3:;
    /* $A4A3: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A4A5:;
    /* $A4A5: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA102 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A4A8:;
    /* $A4A8: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x85 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A4AA:;
    /* $A4AA: 47 */ maybe_trigger_vblank(5); { uint16_t a=0x11; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A4AC:;
    /* $A4AC: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xBA); FLAG_NZ(g_cpu.A);
label_A4AE:;
    /* $A4AE: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x03 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A4B0:;
    /* $A4B0: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A4B1:;
    /* $A4B1: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x83) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4B3:;
    /* $A4B3: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x41) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A4B5:;
    /* $A4B5: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x97 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A4B7:;
    /* $A4B7: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x03) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4B9:;
    /* $A4B9: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A4BB:;
    /* $A4BB: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4BD:;
    /* $A4BD: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A4BF:;
    /* $A4BF: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x0A); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4C1:;
    /* $A4C1: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x0E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4C3:;
    /* $A4C3: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A4C5:;
    /* $A4C5: 47 */ maybe_trigger_vblank(5); { uint16_t a=0x09; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A4C7:;
    /* $A4C7: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x50 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4C9:;
    /* $A4C9: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4CB:;
    /* $A4CB: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0x030B + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A4CE:;
    /* $A4CE: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A4D0:;
    /* $A4D0: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x82 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4D2:;
    /* $A4D2: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A4D3:;
    /* $A4D3: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x9C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4D5:;
    /* $A4D5: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A4D6:;
    /* $A4D6: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xAE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4D8:;
    /* $A4D8: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A4DA:;
    /* $A4DA: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x0A + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_A4DC:;
    /* $A4DC: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4DE:;
    /* $A4DE: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A4E0:;
    /* $A4E0: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xB102 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A4E3:;
    /* $A4E3: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x03 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A4E5:;
    /* $A4E5: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x51); FLAG_NZ(g_cpu.A);
label_A4E7:;
    /* $A4E7: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xBB + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4E9:;
    /* $A4E9: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x05) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4EB:;
    /* $A4EB: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x03FF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4EE:;
    /* $A4EE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA4EE); return;
label_A4EF:;
    /* $A4EF: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A4F1:;
    /* $A4F1: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x030B; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4F4:;
    /* $A4F4: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x09 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A4F6:;
    /* $A4F6: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x50 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4F8:;
    /* $A4F8: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4FA:;
    /* $A4FA: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0x0A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A4FC:;
    /* $A4FC: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x5F + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4FE:;
    /* $A4FE: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A500:;
    /* $A500: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A502:;
    /* $A502: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x82 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A504:;
    /* $A504: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A505:;
    /* $A505: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x8B + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A507:;
    /* $A507: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A508:;
    /* $A508: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x8E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A50A:;
    /* $A50A: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A50C:;
    /* $A50C: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A519; }
label_A50E:;
    /* $A50E: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC6 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A510:;
    /* $A510: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x03; FLAG_NZ(g_cpu.A);
label_A512:;
    /* $A512: CE */ maybe_trigger_vblank(6); { uint16_t a=0x030B; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A515:;
    /* $A515: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA102 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A518:;
    /* $A518: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A519:;
    /* $A519: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A51B:;
    /* $A51B: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x43 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A51D:;
    /* $A51D: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x85) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A51F:;
    /* $A51F: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A520:;
    /* $A520: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x05) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A522:;
    /* $A522: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xFF + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_A524:;
    /* $A524: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A526:;
    /* $A526: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A528:;
    /* $A528: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x030B; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A52B:;
    /* $A52B: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A52C:;
    /* $A52C: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A52D:;
    /* $A52D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x37 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A52F:;
    /* $A52F: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A530:;
    /* $A530: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x50 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A532:;
    /* $A532: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A534:;
    /* $A534: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0x030B + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A537:;
    /* $A537: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x0A) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A539:;
    /* $A539: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x8A + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A53B:;
    /* $A53B: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A53C:;
    /* $A53C: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xA0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A53E:;
    /* $A53E: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A540:;
    /* $A540: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x030B); FLAG_NZ(g_cpu.X);
label_A543:;
    /* $A543: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x09 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_A545:;
    /* $A545: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xFD + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A547:;
    /* $A547: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x03 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A549:;
    /* $A549: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x11) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A54B:;
    /* $A54B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x3C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A54D:;
    /* $A54D: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A54F:;
    /* $A54F: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A550:;
    /* $A550: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x05) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A552:;
    /* $A552: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x51); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A554:;
    /* $A554: 85 */ maybe_trigger_vblank(3); nes_write(0x7B, g_cpu.A);
label_A556:;
    /* $A556: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A558:;
    /* $A558: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_A559:;
    /* $A559: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0003 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A55C:;
    /* $A55C: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0803); FLAG_NZ(g_cpu.A);
label_A55F:;
    /* $A55F: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x5403); FLAG_NZ(g_cpu.A);
label_A562:;
    /* $A562: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A564:;
    /* $A564: 5A */ maybe_trigger_vblank(2); /* NOP */
label_A565:;
    /* $A565: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A567:;
    /* $A567: 67 */ maybe_trigger_vblank(5); { uint16_t a=0x07; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A569:;
    /* $A569: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xA0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A56B:;
    /* $A56B: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A56D:;
    /* $A56D: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x030B); FLAG_NZ(g_cpu.X);
label_A570:;
    /* $A570: C2 */ maybe_trigger_vblank(2); /* NOP */
label_A572:;
    /* $A572: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCD + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A574:;
    /* $A574: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A576:;
    /* $A576: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_A577:;
    /* $A577: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA577); return;
label_A578:;
    /* $A578: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A579:;
    /* $A579: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A57B:;
    /* $A57B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A57C:;
    /* $A57C: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0551 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A57F:;
    /* $A57F: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_A580:;
    /* $A580: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A582:;
    /* $A582: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0531 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A585:;
    /* $A585: 67 */ maybe_trigger_vblank(5); { uint16_t a=0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A587:;
    /* $A587: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A589:;
    /* $A589: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0403 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A58C:;
    /* $A58C: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0803 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A58F:;
    /* $A58F: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0C03 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A592:;
    /* $A592: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x3803 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A595:;
    /* $A595: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x4003 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A598:;
    /* $A598: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x4403 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A59B:;
    /* $A59B: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x4C03 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A59E:;
    /* $A59E: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x7403 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5A1:;
    /* $A5A1: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x7803 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5A4:;
    /* $A5A4: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x8003 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5A7:;
    /* $A5A7: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x8C03 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5AA:;
    /* $A5AA: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0xB003 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5AD:;
    /* $A5AD: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0xB403 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5B0:;
    /* $A5B0: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0xB803 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5B3:;
    /* $A5B3: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0xCC03 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5B6:;
    /* $A5B6: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0xFF03 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5B9:;
    /* $A5B9: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5BB:;
    /* $A5BB: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5BD:;
    /* $A5BD: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A5BE:;
    /* $A5BE: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5C0:;
    /* $A5C0: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x1D + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A5C2:;
    /* $A5C2: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x3B + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5C4:;
    /* $A5C4: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x5503 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5C7:;
    /* $A5C7: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A5C9:;
    /* $A5C9: 5A */ maybe_trigger_vblank(2); /* NOP */
label_A5CA:;
    /* $A5CA: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A5CC:;
    /* $A5CC: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x16); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A5CE:;
    /* $A5CE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA5CE); return;
label_A5CF:;
    /* $A5CF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A5E1; }
label_A5D1:;
    /* $A5D1: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5D3:;
    /* $A5D3: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A5D8; }
label_A5D5:;
    /* $A5D5: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0551 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A5D8:;
    /* $A5D8: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x41); FLAG_NZ(g_cpu.A);
label_A5DA:;
    /* $A5DA: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x2B); FLAG_NZ(g_cpu.A);
label_A5DC:;
    /* $A5DC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0000 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A5DF:;
    /* $A5DF: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5E1:;
    /* $A5E1: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A5E2:;
    /* $A5E2: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5E4:;
    /* $A5E4: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x0015; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5E7:;
    /* $A5E7: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A5FE; }
label_A5E9:;
    /* $A5E9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA5E9); return;
label_A5EA:;
    /* $A5EA: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x15 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5EC:;
    /* $A5EC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA5EC); return;
label_A5ED:;
    /* $A5ED: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x08); FLAG_NZ(g_cpu.A);
label_A5EF:;
    /* $A5EF: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x50 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5F1:;
    /* $A5F1: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5F3:;
    /* $A5F3: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_A5F4:;
    /* $A5F4: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x5F00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5F7:;
    /* $A5F7: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x02); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5F9:;
    /* $A5F9: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A5FA:;
    /* $A5FA: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5FC:;
    /* $A5FC: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(2); goto label_A611; }
label_A5FE:;
    /* $A5FE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA5FE); return;
label_A5FF:;
    /* $A5FF: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A601:;
    /* $A601: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA601); return;
label_A602:;
    /* $A602: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A603:;
    /* $A603: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A605:;
    /* $A605: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A61D; }
label_A607:;
    /* $A607: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA607); return;
label_A608:;
    /* $A608: 99 */ maybe_trigger_vblank(5); nes_write((0x0016 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A60B:;
    /* $A60B: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x15) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A60D:;
    /* $A60D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA60D); return;
label_A60E:;
    /* $A60E: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0015 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_A611:;
    /* $A611: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA002 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A614:;
    /* $A614: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0000 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A617:;
    /* $A617: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x00 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A619:;
    /* $A619: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x16 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A61B:;
    /* $A61B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA61B); return;
label_A61C:;
    /* $A61C: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A61D:;
    /* $A61D: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A61F:;
    /* $A61F: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x0015; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A622:;
    /* $A622: 4F */ maybe_trigger_vblank(6); { uint16_t a=0x0015; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A625:;
    /* $A625: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_A62B; }
label_A627:;
    /* $A627: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A628:;
    /* $A628: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A62A:;
    /* $A62A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA62A); return;
label_A62B:;
    /* $A62B: 87 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A & g_cpu.X); /* SAX */
label_A62D:;
    /* $A62D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A62E:;
    /* $A62E: 89 */ maybe_trigger_vblank(2); /* NOP */
label_A630:;
    /* $A630: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA630); return;
label_A631:;
    /* $A631: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xB102 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A634:;
    /* $A634: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0002 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A637:;
    /* $A637: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x0802 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A63A:;
    /* $A63A: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x1002 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A63D:;
    /* $A63D: 1A */ maybe_trigger_vblank(2); /* NOP */
label_A63E:;
    /* $A63E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A63F:;
    /* $A63F: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_A644; }
label_A641:;
    /* $A641: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A642:;
    /* $A642: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A644:;
    /* $A644: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A645:;
    /* $A645: 82 */ maybe_trigger_vblank(2); /* NOP */
label_A647:;
    /* $A647: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A648:;
    /* $A648: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0219 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_A64B:;
    /* $A64B: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x1A; g_cpu.C=(g_cpu.Y>=0x1A)?1:0; FLAG_NZ(r&0xFF); }
label_A64D:;
    /* $A64D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A64E:;
    /* $A64E: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x1B; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A650:;
    /* $A650: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A651:;
    /* $A651: D1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A653:;
    /* $A653: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A654:;
    /* $A654: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0200 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A657:;
    /* $A657: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xB102 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A65A:;
    /* $A65A: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A65C:;
    /* $A65C: 5A */ maybe_trigger_vblank(2); /* NOP */
label_A65D:;
    /* $A65D: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A65F:;
    /* $A65F: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A660:;
    /* $A660: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0002 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A663:;
    /* $A663: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x0802 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A666:;
    /* $A666: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x1E02 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A669:;
    /* $A669: 1A */ maybe_trigger_vblank(2); /* NOP */
label_A66A:;
    /* $A66A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A66B:;
    /* $A66B: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x0203 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A66E:;
    /* $A66E: 8C */ maybe_trigger_vblank(4); nes_write(0x0219, g_cpu.Y);
label_A671:;
    /* $A671: 8E */ maybe_trigger_vblank(4); nes_write(0x021A, g_cpu.X);
label_A674:;
    /* $A674: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x1A + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_A676:;
    /* $A676: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A677:;
    /* $A677: C2 */ maybe_trigger_vblank(2); /* NOP */
label_A679:;
    /* $A679: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A67A:;
    /* $A67A: CE */ maybe_trigger_vblank(6); { uint16_t a=0x021A; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A67D:;
    /* $A67D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A67F; }
label_A67F:;
    /* $A67F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A680:;
    /* $A680: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A682:;
    /* $A682: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A683:;
    /* $A683: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA102 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A686:;
    /* $A686: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x05) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A688:;
    /* $A688: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x51) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A68A:;
    /* $A68A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A68B:;
    /* $A68B: 44 */ maybe_trigger_vblank(3); (void)nes_read(0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A68D:;
    /* $A68D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A68E:;
    /* $A68E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA68E); return;
label_A68F:;
    /* $A68F: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x0802 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A692:;
    /* $A692: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0xAC02 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A695:;
    /* $A695: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xB402 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A698:;
    /* $A698: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xB802 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A69B:;
    /* $A69B: 1A */ maybe_trigger_vblank(2); /* NOP */
label_A69C:;
    /* $A69C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A69D:;
    /* $A69D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A69F; }
label_A69F:;
    /* $A69F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6A0:;
    /* $A6A0: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_A6A1:;
    /* $A6A1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA6A1); return;
label_A6A2:;
    /* $A6A2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6A3:;
    /* $A6A3: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x8201 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6A6:;
    /* $A6A6: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_A6A7:;
    /* $A6A7: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x05) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A6A9:;
    /* $A6A9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x21); FLAG_NZ(g_cpu.A);
label_A6AB:;
    /* $A6AB: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6AC:;
    /* $A6AC: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_A6AE:;
    /* $A6AE: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6AF:;
    /* $A6AF: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03FF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A6B2:;
    /* $A6B2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA6B2); return;
label_A6B3:;
    /* $A6B3: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x0802 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A6B6:;
    /* $A6B6: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x5902 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A6B9:;
    /* $A6B9: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A6BB:;
    /* $A6BB: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_A6BC:;
    /* $A6BC: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xAC02 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A6BF:;
    /* $A6BF: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xBB02 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A6C2:;
    /* $A6C2: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xC002 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A6C5:;
    /* $A6C5: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A6C7:;
    /* $A6C7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A6C9; }
label_A6C9:;
    /* $A6C9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6CA:;
    /* $A6CA: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_A6CB:;
    /* $A6CB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA6CB); return;
label_A6CC:;
    /* $A6CC: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6CD:;
    /* $A6CD: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0201 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6D0:;
    /* $A6D0: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0x0211 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A6D3:;
    /* $A6D3: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_A6D4:;
    /* $A6D4: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x85) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A6D6:;
    /* $A6D6: 84 */ maybe_trigger_vblank(3); nes_write(0x41, g_cpu.Y);
label_A6D8:;
    /* $A6D8: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x49); FLAG_NZ(g_cpu.A);
label_A6DA:;
    /* $A6DA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0002 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6DD:;
    /* $A6DD: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A6DF:;
    /* $A6DF: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A6E0:;
    /* $A6E0: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A6E2:;
    /* $A6E2: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xA6FB); return; }
label_A6E4:;
    /* $A6E4: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6E5:;
    /* $A6E5: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A6E6:;
    /* $A6E6: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A6E8:;
    /* $A6E8: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); call_by_address(0xA6ED); return; }
label_A6EA:;
    /* $A6EA: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6EB:;
    /* $A6EB: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x0203 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A6EE:;
    /* $A6EE: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A6F0:;
    /* $A6F0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6F1:;
    /* $A6F1: 82 */ maybe_trigger_vblank(2); /* NOP */
label_A6F3:;
    /* $A6F3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6F4:;
    /* $A6F4: 86 */ maybe_trigger_vblank(3); nes_write(0x2E, g_cpu.X);
label_A6F6:;
    /* $A6F6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6F7:;
    /* $A6F7: 87 */ maybe_trigger_vblank(3); nes_write(0x1B, g_cpu.A & g_cpu.X); /* SAX */
label_A6F9:;
    /* $A6F9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6FA:;
    /* $A6FA: 8E */ maybe_trigger_vblank(4); nes_write(0x021A, g_cpu.X);
label_A6FD:;
    /* $A6FD: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x1A; g_cpu.C=(g_cpu.Y>=0x1A)?1:0; FLAG_NZ(r&0xFF); }
label_A6FF:;
    /* $A6FF: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A700:;
    /* $A700: CE */ maybe_trigger_vblank(6); { uint16_t a=0x021A; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A703:;
    /* $A703: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_A704:;
    /* $A704: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A705:;
    /* $A705: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A706:;
    /* $A706: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_A707:;
    /* $A707: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A708:;
    /* $A708: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A709:;
    /* $A709: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA102 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A70C:;
    /* $A70C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A70D:;
    /* $A70D: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A70F:;
    /* $A70F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A710:;
    /* $A710: 5C */ maybe_trigger_vblank(4); (void)nes_read((0x0211 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A713:;
    /* $A713: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_A715:;
    /* $A715: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A717:;
    /* $A717: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A719:;
    /* $A719: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A71A:;
    /* $A71A: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A71C:;
    /* $A71C: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x030B; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A71F:;
    /* $A71F: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_A72C; }
label_A721:;
    /* $A721: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x52 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A723:;
    /* $A723: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A725:;
    /* $A725: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0x030B + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A728:;
    /* $A728: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0B; FLAG_NZ(g_cpu.Y);
label_A72A:;
    /* $A72A: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xA2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A72C:;
    /* $A72C: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A72E:;
    /* $A72E: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x030B); FLAG_NZ(g_cpu.X);
label_A731:;
    /* $A731: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x8301 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A734:;
    /* $A734: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0311 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A737:;
    /* $A737: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x21 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A739:;
    /* $A739: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A73A:;
    /* $A73A: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x03FF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A73D:;
    /* $A73D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA73D); return;
label_A73E:;
    /* $A73E: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A740:;
    /* $A740: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A741:;
    /* $A741: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A743:;
    /* $A743: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A744:;
    /* $A744: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A746:;
    /* $A746: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_A74B; }
label_A748:;
    /* $A748: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A749:;
    /* $A749: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A74B:;
    /* $A74B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x82 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A74D:;
    /* $A74D: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A74E:;
    /* $A74E: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A750:;
    /* $A750: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A755; }
label_A752:;
    /* $A752: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_A753:;
    /* $A753: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A758; }
label_A755:;
    /* $A755: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xB102 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A758:;
    /* $A758: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A75A:;
    /* $A75A: C7 */ maybe_trigger_vblank(5); { uint16_t a=0x11; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A75C:;
    /* $A75C: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xCB); FLAG_NZ(g_cpu.A);
label_A75E:;
    /* $A75E: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x04) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A760:;
    /* $A760: 3A */ maybe_trigger_vblank(2); /* NOP */
label_A761:;
    /* $A761: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x04 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A763:;
    /* $A763: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x31; FLAG_NZ(g_cpu.A);
label_A765:;
    /* $A765: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x1E); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A767:;
    /* $A767: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0003 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A76A:;
    /* $A76A: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A76C:;
    /* $A76C: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x10; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A76E:;
    /* $A76E: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x0E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A770:;
    /* $A770: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A772:;
    /* $A772: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x0203 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A775:;
    /* $A775: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A776:;
    /* $A776: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x03; FLAG_NZ(g_cpu.A);
label_A778:;
    /* $A778: 8E */ maybe_trigger_vblank(4); nes_write(0x030B, g_cpu.X);
label_A77B:;
    /* $A77B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A78D; }
label_A77D:;
    /* $A77D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A77F:;
    /* $A77F: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A784; }
label_A781:;
    /* $A781: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA102 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A784:;
    /* $A784: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A786:;
    /* $A786: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0x0511 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A789:;
    /* $A789: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A78A:;
    /* $A78A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0001 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A78D:;
    /* $A78D: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A78F:;
    /* $A78F: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A790:;
    /* $A790: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A792:;
    /* $A792: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A7A4; }
label_A794:;
    /* $A794: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A796:;
    /* $A796: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A79B; }
label_A798:;
    /* $A798: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0451 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A79B:;
    /* $A79B: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x21 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A79D:;
    /* $A79D: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x38); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A79F:;
    /* $A79F: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x04 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A7A1:;
    /* $A7A1: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x03FF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A7A4:;
    /* $A7A4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA7A4); return;
label_A7A5:;
    /* $A7A5: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A7AA; }
label_A7A7:;
    /* $A7A7: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A7A8:;
    /* $A7A8: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xA7AD); return; }
label_A7AA:;
    /* $A7AA: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A7CB; }
label_A7AC:;
    /* $A7AC: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x96 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A7AE:;
    /* $A7AE: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0xAA01 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A7B1:;
    /* $A7B1: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x03); FLAG_NZ(g_cpu.A);
label_A7B3:;
    /* $A7B3: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x011F); FLAG_NZ(g_cpu.Y);
label_A7B6:;
    /* $A7B6: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_A7B7:;
    /* $A7B7: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xA7BC); return; }
label_A7B9:;
    /* $A7B9: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x05); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A7BB:;
    /* $A7BB: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A7BD:;
    /* $A7BD: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A7C2; }
label_A7BF:;
    /* $A7BF: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_A7C0:;
    /* $A7C0: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A7C5; }
label_A7C2:;
    /* $A7C2: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0551 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7C5:;
    /* $A7C5: 89 */ maybe_trigger_vblank(2); /* NOP */
label_A7C7:;
    /* $A7C7: 87 */ maybe_trigger_vblank(3); nes_write(0xAB, g_cpu.A & g_cpu.X); /* SAX */
label_A7C9:;
    /* $A7C9: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x06 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A7CB:;
    /* $A7CB: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x17 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A7CD:;
    /* $A7CD: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xC5; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A7CF:;
    /* $A7CF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0001 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7D2:;
    /* $A7D2: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7D4:;
    /* $A7D4: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A7D5:;
    /* $A7D5: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7D7:;
    /* $A7D7: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A7F8; }
label_A7D9:;
    /* $A7D9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xB6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A7DB:;
    /* $A7DB: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x03); FLAG_NZ(g_cpu.A);
label_A7DD:;
    /* $A7DD: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_A7DE:;
    /* $A7DE: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x03); FLAG_NZ(g_cpu.A);
label_A7E0:;
    /* $A7E0: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x011F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_A7E3:;
    /* $A7E3: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A7E5:;
    /* $A7E5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xD4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A7E7:;
    /* $A7E7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA7E7); return;
label_A7E8:;
    /* $A7E8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A7E9:;
    /* $A7E9: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0707 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7EC:;
    /* $A7EC: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x47 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_A7EE:;
    /* $A7EE: 87 */ maybe_trigger_vblank(3); nes_write(0xB9, g_cpu.A & g_cpu.X); /* SAX */
label_A7F0:;
    /* $A7F0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0003 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7F3:;
    /* $A7F3: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7F5:;
    /* $A7F5: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A7F6:;
    /* $A7F6: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xA7FB); return; }
label_A7F8:;
    /* $A7F8: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A7F9:;
    /* $A7F9: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x6B03 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A7FC:;
    /* $A7FC: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x8C03 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A7FF:;
    /* $A7FF: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0xA603 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A802:;
    /* $A802: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x00 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A804:;
    /* $A804: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x1D) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A806:;
    /* $A806: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A808:;
    /* $A808: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xC303 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A80B:;
    /* $A80B: 0C */ maybe_trigger_vblank(4); (void)nes_read(0xC800); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A80E:;
    /* $A80E: 0C */ maybe_trigger_vblank(4); (void)nes_read(0xD000); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A811:;
    /* $A811: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A816; }
label_A813:;
    /* $A813: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_A814:;
    /* $A814: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A819; }
label_A816:;
    /* $A816: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0541 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A819:;
    /* $A819: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_A81B:;
    /* $A81B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A81D:;
    /* $A81D: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A81F:;
    /* $A81F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x11 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A821:;
    /* $A821: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x09 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A823:;
    /* $A823: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A825:;
    /* $A825: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x030B; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A828:;
    /* $A828: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); call_by_address(0xA82D); return; }
label_A82A:;
    /* $A82A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A82B:;
    /* $A82B: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x0203 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A82E:;
    /* $A82E: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x0D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A830:;
    /* $A830: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x66 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A832:;
    /* $A832: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x34; g_cpu.S--; func_8001_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA832, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A835:;
    /* $A835: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x8401 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A838:;
    /* $A838: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3A; g_cpu.S--; func_8801_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA838, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A83B:;
    /* $A83B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3D; g_cpu.S--; func_8C01_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA83B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A83E:;
    /* $A83E: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0xA603 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A841:;
    /* $A841: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x43; g_cpu.S--; func_B001_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA841, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A844:;
    /* $A844: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A846:;
    /* $A846: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x030B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_A849:;
    /* $A849: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x20; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A84B:;
    /* $A84B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFD + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A84D:;
    /* $A84D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A84E:;
    /* $A84E: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A850:;
    /* $A850: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x31) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A852:;
    /* $A852: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x56); FLAG_NZ(g_cpu.A);
label_A854:;
    /* $A854: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x85 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A856:;
    /* $A856: 5A */ maybe_trigger_vblank(2); /* NOP */
label_A857:;
    /* $A857: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A859:;
    /* $A859: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x01FF + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A85C:;
    /* $A85C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA85C); return;
label_A85D:;
    /* $A85D: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xA862); return; }
label_A85F:;
    /* $A85F: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x1F); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A861:;
    /* $A861: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x08 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A863:;
    /* $A863: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x0C01 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A866:;
    /* $A866: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A868:;
    /* $A868: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A869:;
    /* $A869: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x03) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A86B:;
    /* $A86B: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x1F); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A86D:;
    /* $A86D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x48 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A86F:;
    /* $A86F: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x8401 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A872:;
    /* $A872: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x8801 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A875:;
    /* $A875: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0xD001 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A878:;
    /* $A878: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0xD401 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A87B:;
    /* $A87B: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0xD801 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A87E:;
    /* $A87E: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A883; }
label_A880:;
    /* $A880: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0551 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A883:;
    /* $A883: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x41; g_cpu.C=(g_cpu.Y>=0x41)?1:0; FLAG_NZ(r&0xFF); }
label_A885:;
    /* $A885: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xCA); FLAG_NZ(g_cpu.A);
label_A887:;
    /* $A887: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x06) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A889:;
    /* $A889: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x02FF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A88C:;
    /* $A88C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA88C); return;
label_A88D:;
    /* $A88D: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_A88E:;
    /* $A88E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A88F:;
    /* $A88F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x2D + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A891:;
    /* $A891: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A892:;
    /* $A892: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x2D; FLAG_NZ(g_cpu.A);
label_A894:;
    /* $A894: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A895:;
    /* $A895: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_A89B; }
label_A897:;
    /* $A897: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A898:;
    /* $A898: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A89A:;
    /* $A89A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A89B:;
    /* $A89B: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x14 + g_cpu.X) & 0xFF), g_cpu.A);
label_A89D:;
    /* $A89D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA89D); return;
label_A89E:;
    /* $A89E: 95 */ maybe_trigger_vblank(4); nes_write((0x15 + g_cpu.X) & 0xFF, g_cpu.A);
label_A8A0:;
    /* $A8A0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8A0); return;
label_A8A1:;
    /* $A8A1: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xA8D0); return; }
label_A8A3:;
    /* $A8A3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8A4:;
    /* $A8A4: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_A8A5:;
    /* $A8A5: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0xFD02); FLAG_NZ(g_cpu.A);
label_A8A8:;
    /* $A8A8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8A9:;
    /* $A8A9: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xA8AC); return; }
label_A8AB:;
    /* $A8AB: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xC7); FLAG_NZ(g_cpu.A);
label_A8AD:;
    /* $A8AD: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x85) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8AF:;
    /* $A8AF: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A8B0:;
    /* $A8B0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0000 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A8B3:;
    /* $A8B3: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A8B5:;
    /* $A8B5: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x15); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A8B7:;
    /* $A8B7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8B7); return;
label_A8B8:;
    /* $A8B8: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A8B9:;
    /* $A8B9: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A8BB:;
    /* $A8BB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A8BC:;
    /* $A8BC: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x00 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A8BE:;
    /* $A8BE: 97 */ maybe_trigger_vblank(4); nes_write((0x06 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_A8C0:;
    /* $A8C0: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xA0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A8C2:;
    /* $A8C2: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A8C4:;
    /* $A8C4: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x15); FLAG_NZ(g_cpu.X);
label_A8C6:;
    /* $A8C6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8C6); return;
label_A8C7:;
    /* $A8C7: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A8C8:;
    /* $A8C8: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x00 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A8CA:;
    /* $A8CA: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x030B); FLAG_NZ(g_cpu.X);
label_A8CD:;
    /* $A8CD: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x06 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_A8CF:;
    /* $A8CF: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xBA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A8D1:;
    /* $A8D1: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8D3:;
    /* $A8D3: C2 */ maybe_trigger_vblank(2); /* NOP */
label_A8D5:;
    /* $A8D5: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A8D7:;
    /* $A8D7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8D7); return;
label_A8D8:;
    /* $A8D8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8D9:;
    /* $A8D9: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8DB:;
    /* $A8DB: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8DC:;
    /* $A8DC: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0541 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A8DF:;
    /* $A8DF: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A8E0:;
    /* $A8E0: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x06 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A8E2:;
    /* $A8E2: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x11 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A8E4:;
    /* $A8E4: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xA4); FLAG_NZ(g_cpu.A);
label_A8E6:;
    /* $A8E6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0000 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A8E9:;
    /* $A8E9: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x00 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A8EB:;
    /* $A8EB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x0D + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A8ED:;
    /* $A8ED: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x09 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A8EF:;
    /* $A8EF: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x2A01; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8F2:;
    /* $A8F2: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x01 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A8F4:;
    /* $A8F4: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x22 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A8F6:;
    /* $A8F6: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x4D + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A8F8:;
    /* $A8F8: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x5001; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8FB:;
    /* $A8FB: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A8FD:;
    /* $A8FD: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_A8FE:;
    /* $A8FE: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A900:;
    /* $A900: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x010E); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A903:;
    /* $A903: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A905:;
    /* $A905: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA905); return;
label_A906:;
    /* $A906: 87 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A & g_cpu.X); /* SAX */
label_A908:;
    /* $A908: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A909:;
    /* $A909: 89 */ maybe_trigger_vblank(2); /* NOP */
label_A90B:;
    /* $A90B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA90B); return;
label_A90C:;
    /* $A90C: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xB102 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A90F:;
    /* $A90F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0001 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A912:;
    /* $A912: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0801; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A915:;
    /* $A915: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x4401; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A918:;
    /* $A918: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x8401; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A91B:;
    /* $A91B: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x9401; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A91E:;
    /* $A91E: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xB001; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A921:;
    /* $A921: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xB801; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A924:;
    /* $A924: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xFD01; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A927:;
    /* $A927: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x06) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A929:;
    /* $A929: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_A92A:;
    /* $A92A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0001 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A92D:;
    /* $A92D: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0201; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A930:;
    /* $A930: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_A931:;
    /* $A931: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x07 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A933:;
    /* $A933: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x01); FLAG_NZ(g_cpu.A);
label_A935:;
    /* $A935: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A936:;
    /* $A936: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1001; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A939:;
    /* $A939: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1201; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A93C:;
    /* $A93C: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_A93D:;
    /* $A93D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x17 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A93F:;
    /* $A93F: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x01); FLAG_NZ(g_cpu.A);
label_A941:;
    /* $A941: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A942:;
    /* $A942: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x5001; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A945:;
    /* $A945: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A947:;
    /* $A947: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x0203 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A94A:;
    /* $A94A: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x26 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A94C:;
    /* $A94C: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x78 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A94E:;
    /* $A94E: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A950:;
    /* $A950: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A952:;
    /* $A952: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x88 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A954:;
    /* $A954: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xC001; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A957:;
    /* $A957: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x01); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A959:;
    /* $A959: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0124); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A95C:;
    /* $A95C: D4 */ maybe_trigger_vblank(4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A95E:;
    /* $A95E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A95F:;
    /* $A95F: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA102 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A962:;
    /* $A962: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A963:;
    /* $A963: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x11) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A965:;
    /* $A965: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A966:;
    /* $A966: 52 */ maybe_trigger_vblank(2); /* ILLEGAL $52 — skip 1 */
label_A967:;
    /* $A967: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x03 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A969:;
    /* $A969: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A96A:;
    /* $A96A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0001 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A96D:;
    /* $A96D: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A96F:;
    /* $A96F: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A970:;
    /* $A970: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A972:;
    /* $A972: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xA998); return; }
label_A974:;
    /* $A974: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x50 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A976:;
    /* $A976: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A978:;
    /* $A978: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A97A:;
    /* $A97A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A97C:;
    /* $A97C: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A97E:;
    /* $A97E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A98E; }
label_A980:;
    /* $A980: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xCA + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A982:;
    /* $A982: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A984:;
    /* $A984: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_A985:;
    /* $A985: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xFD01; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A988:;
    /* $A988: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A989:;
    /* $A989: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A98B:;
    /* $A98B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A98C:;
    /* $A98C: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x11; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A98E:;
    /* $A98E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A98F:;
    /* $A98F: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_A992:;
    /* $A992: 5B */ maybe_trigger_vblank(7); { uint16_t a=(0x0231 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A995:;
    /* $A995: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_A997:;
    /* $A997: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A999:;
    /* $A999: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A99B:;
    /* $A99B: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A99C:;
    /* $A99C: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A99E:;
    /* $A99E: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x0124 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A9A1:;
    /* $A9A1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA3; g_cpu.S--; if (!nes_dispatch_call(0x0124, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA9A1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A9A4:;
    /* $A9A4: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x0203 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A9A7:;
    /* $A9A7: 8C */ maybe_trigger_vblank(4); nes_write(0x0124, g_cpu.Y);
label_A9AA:;
    /* $A9AA: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_A9AB:;
    /* $A9AB: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9AD:;
    /* $A9AD: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x26); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A9AF:;
    /* $A9AF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A9B1:;
    /* $A9B1: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xD001; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9B4:;
    /* $A9B4: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xFD01; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9B7:;
    /* $A9B7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A9B8:;
    /* $A9B8: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0x51 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A9BA:;
    /* $A9BA: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A9BB:;
    /* $A9BB: 85 */ maybe_trigger_vblank(3); nes_write(0x41, g_cpu.A);
label_A9BD:;
    /* $A9BD: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A9BE:;
    /* $A9BE: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x31); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A9C0:;
    /* $A9C0: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xBA); FLAG_NZ(g_cpu.A);
label_A9C2:;
    /* $A9C2: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A9C4:;
    /* $A9C4: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A9C6:;
    /* $A9C6: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A9C8:;
    /* $A9C8: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0801; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9CB:;
    /* $A9CB: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x3001; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9CE:;
    /* $A9CE: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x3801; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9D1:;
    /* $A9D1: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xA701; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9D4:;
    /* $A9D4: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9D6:;
    /* $A9D6: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xA9FC); return; }
label_A9D8:;
    /* $A9D8: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xB6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A9DA:;
    /* $A9DA: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x01); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A9DC:;
    /* $A9DC: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0124 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_A9DF:;
    /* $A9DF: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x05); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A9E1:;
    /* $A9E1: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD4 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A9E3:;
    /* $A9E3: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A9E5:;
    /* $A9E5: DA */ maybe_trigger_vblank(2); /* NOP */
label_A9E6:;
    /* $A9E6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9E6); return;
label_A9E7:;
    /* $A9E7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A9E8:;
    /* $A9E8: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0707 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A9EB:;
    /* $A9EB: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x11); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A9ED:;
    /* $A9ED: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xAC); FLAG_NZ(g_cpu.A);
label_A9EF:;
    /* $A9EF: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A9F1:;
    /* $A9F1: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A9F2:;
    /* $A9F2: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x06) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9F4:;
    /* $A9F4: 7A */ maybe_trigger_vblank(2); /* NOP */
label_A9F5:;
    /* $A9F5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0001 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A9F8:;
    /* $A9F8: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0801; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9FB:;
    /* $A9FB: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x3001; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9FE:;
    /* $A9FE: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x3701; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA01:;
    /* $AA01: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x01); FLAG_NZ(g_cpu.A);
label_AA03:;
    /* $AA03: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AA04:;
    /* $AA04: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_AA05:;
    /* $AA05: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x4C + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA07:;
    /* $AA07: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_AA08:;
    /* $AA08: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x68 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA0A:;
    /* $AA0A: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x7801; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA0D:;
    /* $AA0D: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xA301; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA10:;
    /* $AA10: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA12:;
    /* $AA12: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_AA22; }
label_AA14:;
    /* $AA14: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xB8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA16:;
    /* $AA16: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xFD01; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA19:;
    /* $AA19: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x06 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA1B:;
    /* $AA1B: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x21 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AA1D:;
    /* $AA1D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x85 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AA1F:;
    /* $AA1F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0002 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AA22:;
    /* $AA22: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AA24:;
    /* $AA24: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AA25:;
    /* $AA25: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AA27:;
    /* $AA27: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x29 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AA29:;
    /* $AA29: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x73 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA2B:;
    /* $AA2B: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AA2C:;
    /* $AA2C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AA2D:;
    /* $AA2D: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_AA2F:;
    /* $AA2F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x9B + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA31:;
    /* $AA31: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AA32:;
    /* $AA32: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AA33:;
    /* $AA33: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x26; g_cpu.C=(g_cpu.Y>=0x26)?1:0; FLAG_NZ(r&0xFF); }
label_AA35:;
    /* $AA35: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA37:;
    /* $AA37: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA39:;
    /* $AA39: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xAA49); return; }
label_AA3B:;
    /* $AA3B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xD8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA3D:;
    /* $AA3D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA3D); return;
label_AA3E:;
    /* $AA3E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AA3F:;
    /* $AA3F: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x010E + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_AA42:;
    /* $AA42: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0305 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA45:;
    /* $AA45: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x8501 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AA48:;
    /* $AA48: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x11 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AA4A:;
    /* $AA4A: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x8B); FLAG_NZ(g_cpu.A);
label_AA4C:;
    /* $AA4C: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA4E:;
    /* $AA4E: 6E */ maybe_trigger_vblank(6); { uint16_t a=0x0747; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA51:;
    /* $AA51: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x8331 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_AA54:;
    /* $AA54: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AA55:;
    /* $AA55: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0001 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AA58:;
    /* $AA58: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0801; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA5B:;
    /* $AA5B: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x4001; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA5E:;
    /* $AA5E: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x00; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AA60:;
    /* $AA60: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AA61:;
    /* $AA61: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x00; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AA63:;
    /* $AA63: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_AA73; }
label_AA65:;
    /* $AA65: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x53 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA67:;
    /* $AA67: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xAA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x69; g_cpu.S--; if (!nes_dispatch_call(0x5801, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAA67, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AA6A:;
    /* $AA6A: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x5B01; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA6D:;
    /* $AA6D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xAA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6F; g_cpu.S--; if (!nes_dispatch_call(0x6001, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAA6D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AA70:;
    /* $AA70: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x00; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AA72:;
    /* $AA72: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_AA73:;
    /* $AA73: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AA75:;
    /* $AA75: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(1); call_by_address(0xAA9E); return; }
label_AA77:;
    /* $AA77: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x78 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA79:;
    /* $AA79: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AA7B:;
    /* $AA7B: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AA7D:;
    /* $AA7D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA7D); return;
label_AA7E:;
    /* $AA7E: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AA7F:;
    /* $AA7F: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x00; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AA81:;
    /* $AA81: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_AAAA; }
label_AA83:;
    /* $AA83: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x98 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA85:;
    /* $AA85: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AA87:;
    /* $AA87: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x13; FLAG_NZ(g_cpu.Y);
label_AA89:;
    /* $AA89: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA89); return;
label_AA8A:;
    /* $AA8A: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AA8B:;
    /* $AA8B: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x00; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AA8D:;
    /* $AA8D: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_AA9D; }
label_AA8F:;
    /* $AA8F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xB8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA91:;
    /* $AA91: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xFD01; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA94:;
    /* $AA94: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA96:;
    /* $AA96: 4D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read(0x8511); FLAG_NZ(g_cpu.A);
label_AA99:;
    /* $AA99: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0x0521); nes_trace_indirect_jump(0xAA99, _jt); maybe_trigger_vblank(2); call_by_address_tail(_jt, -1); return; }
label_AA9D:;
    /* $AA9D: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x85) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AA9F:;
    /* $AA9F: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0x0541); FLAG_NZ(g_cpu.A);
label_AAA2:;
    /* $AAA2: 47 */ maybe_trigger_vblank(5); { uint16_t a=0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AAA4:;
    /* $AAA4: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AAA5:;
    /* $AAA5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAA5); return;
label_AAA6:;
    /* $AAA6: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AAA8:;
    /* $AAA8: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x27); FLAG_NZ(g_cpu.A);
label_AAAA:;
    /* $AAAA: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x0A + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AAAC:;
    /* $AAAC: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x2301; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AAAF:;
    /* $AAAF: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x01); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AAB1:;
    /* $AAB1: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AAB2:;
    /* $AAB2: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AAB4:;
    /* $AAB4: 52 */ maybe_trigger_vblank(2); /* ILLEGAL $52 — skip 1 */
label_AAB5:;
    /* $AAB5: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x01); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AAB7:;
    /* $AAB7: 59 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x0120 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AABA:;
    /* $AABA: 5A */ maybe_trigger_vblank(2); /* NOP */
label_AABB:;
    /* $AABB: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x6A01; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AABE:;
    /* $AABE: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x00; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AAC0:;
    /* $AAC0: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x010E + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AAC3:;
    /* $AAC3: 89 */ maybe_trigger_vblank(2); /* NOP */
label_AAC5:;
    /* $AAC5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAC5); return;
label_AAC6:;
    /* $AAC6: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_AAF0; }
label_AAC8:;
    /* $AAC8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AAC9:;
    /* $AAC9: 94 */ maybe_trigger_vblank(4); nes_write((0x06 + g_cpu.X) & 0xFF, g_cpu.Y);
label_AACB:;
    /* $AACB: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x98 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AACD:;
    /* $AACD: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xA801; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AAD0:;
    /* $AAD0: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AAD2:;
    /* $AAD2: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xAAE2); return; }
label_AAD4:;
    /* $AAD4: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xB8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AAD6:;
    /* $AAD6: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xFD01; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AAD9:;
    /* $AAD9: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x05) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AADB:;
    /* $AADB: 4F */ maybe_trigger_vblank(6); { uint16_t a=0x0541; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AADE:;
    /* $AADE: 6E */ maybe_trigger_vblank(6); { uint16_t a=0x0531; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AAE1:;
    /* $AAE1: 8E */ maybe_trigger_vblank(4); nes_write(0x0221, g_cpu.X);
label_AAE4:;
    /* $AAE4: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AAE5:;
    /* $AAE5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0001 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AAE8:;
    /* $AAE8: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0801; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AAEB:;
    /* $AAEB: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AAED:;
    /* $AAED: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xAAED; g_rti_bank = 1; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AAEE:;
    /* $AAEE: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x00; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AAF0:;
    /* $AAF0: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(2); call_by_address(0xAB00); return; }
label_AAF2:;
    /* $AAF2: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x56 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AAF4:;
    /* $AAF4: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xAA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF6; g_cpu.S--; if (!nes_dispatch_call(0x6001, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAAF4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AAF7:;
    /* $AAF7: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x00; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AAF9:;
    /* $AAF9: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_AAFA:;
    /* $AAFA: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x8000); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AAFD:;
    /* $AAFD: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AAFF:;
    /* $AAFF: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_AB01:;
    /* $AB01: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xD0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AB03:;
    /* $AB03: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB03); return;
label_AB04:;
    /* $AB04: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AB05:;
    /* $AB05: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_AB06:;
    /* $AB06: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB06); return;
label_AB07:;
    /* $AB07: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AB08:;
    /* $AB08: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0551 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AB0B:;
    /* $AB0B: 67 */ maybe_trigger_vblank(5); { uint16_t a=0x41; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AB0D:;
    /* $AB0D: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x7E); FLAG_NZ(g_cpu.A);
label_AB0F:;
    /* $AB0F: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AB11:;
    /* $AB11: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0x0331 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AB14:;
    /* $AB14: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x11; FLAG_NZ(g_cpu.A);
label_AB16:;
    /* $AB16: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AB17:;
    /* $AB17: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AB19:;
    /* $AB19: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AB1B:;
    /* $AB1B: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AB1D:;
    /* $AB1D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AB1E:;
    /* $AB1E: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB20:;
    /* $AB20: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x11; FLAG_NZ(g_cpu.A);
label_AB22:;
    /* $AB22: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x50 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AB24:;
    /* $AB24: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x02); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AB26:;
    /* $AB26: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AB28:;
    /* $AB28: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x82 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AB2A:;
    /* $AB2A: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0xB603 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AB2D:;
    /* $AB2D: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xB703 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB30:;
    /* $AB30: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xC203 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB33:;
    /* $AB33: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x03; FLAG_NZ(g_cpu.A);
label_AB35:;
    /* $AB35: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AB36:;
    /* $AB36: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xD003 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB39:;
    /* $AB39: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AB3E; }
label_AB3B:;
    /* $AB3B: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_AB3C:;
    /* $AB3C: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AB41; }
label_AB3E:;
    /* $AB3E: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xB002 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AB41:;
    /* $AB41: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x04) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB43:;
    /* $AB43: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_AB44:;
    /* $AB44: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x06) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB46:;
    /* $AB46: 27 */ maybe_trigger_vblank(5); { uint16_t a=0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AB48:;
    /* $AB48: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB48); return;
label_AB49:;
    /* $AB49: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB49); return;
label_AB4A:;
    /* $AB4A: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x0802); FLAG_NZ(g_cpu.A);
label_AB4D:;
    /* $AB4D: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x0F02); FLAG_NZ(g_cpu.A);
label_AB50:;
    /* $AB50: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AB51:;
    /* $AB51: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AB52:;
    /* $AB52: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x0203 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AB55:;
    /* $AB55: 87 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A & g_cpu.X); /* SAX */
label_AB57:;
    /* $AB57: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB57); return;
label_AB58:;
    /* $AB58: 8F */ maybe_trigger_vblank(4); nes_write(0x0228, g_cpu.A & g_cpu.X); /* SAX */
label_AB5B:;
    /* $AB5B: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_AB5C:;
    /* $AB5C: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x00 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AB5E:;
    /* $AB5E: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x26 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_AB60:;
    /* $AB60: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xD0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AB62:;
    /* $AB62: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0xD802); FLAG_NZ(g_cpu.A);
label_AB65:;
    /* $AB65: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0xFD02); FLAG_NZ(g_cpu.A);
label_AB68:;
    /* $AB68: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AB69:;
    /* $AB69: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AB6B:;
    /* $AB6B: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x23; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AB6D:;
    /* $AB6D: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x05) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB6F:;
    /* $AB6F: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x02FF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AB72:;
    /* $AB72: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB72); return;
label_AB73:;
    /* $AB73: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x0802); FLAG_NZ(g_cpu.A);
label_AB76:;
    /* $AB76: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0xC202); FLAG_NZ(g_cpu.A);
label_AB79:;
    /* $AB79: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AB7B:;
    /* $AB7B: C7 */ maybe_trigger_vblank(5); { uint16_t a=0x26; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_AB7D:;
    /* $AB7D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC9 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AB7F:;
    /* $AB7F: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AB81:;
    /* $AB81: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_ABB0; }
label_AB83:;
    /* $AB83: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AB84:;
    /* $AB84: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_AB85:;
    /* $AB85: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0xFD02); FLAG_NZ(g_cpu.A);
label_AB88:;
    /* $AB88: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x86 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AB8A:;
    /* $AB8A: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x51); FLAG_NZ(g_cpu.A);
label_AB8C:;
    /* $AB8C: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x2A; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AB8E:;
    /* $AB8E: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AB90:;
    /* $AB90: CB */ maybe_trigger_vblank(2); { uint8_t t=(uint8_t)(g_cpu.A & g_cpu.X); g_cpu.C=(t>=0xFF)?1:0; g_cpu.X=(t-0xFF)&0xFF; FLAG_NZ(g_cpu.X); }
label_AB92:;
    /* $AB92: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB92); return;
label_AB93:;
    /* $AB93: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB93); return;
label_AB94:;
    /* $AB94: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB96:;
    /* $AB96: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AB97:;
    /* $AB97: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB99:;
    /* $AB99: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_AB9A:;
    /* $AB9A: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AB9C:;
    /* $AB9C: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_AB9D:;
    /* $AB9D: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x00 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AB9F:;
    /* $AB9F: 95 */ maybe_trigger_vblank(4); nes_write((0x15 + g_cpu.X) & 0xFF, g_cpu.A);
label_ABA1:;
    /* $ABA1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABA1); return;
label_ABA2:;
    /* $ABA2: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0B; FLAG_NZ(g_cpu.Y);
label_ABA4:;
    /* $ABA4: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xAE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_ABA6:;
    /* $ABA6: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_ABA8:;
    /* $ABA8: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_ABAB:;
    /* $ABAB: C2 */ maybe_trigger_vblank(2); /* NOP */
label_ABAD:;
    /* $ABAD: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_ABAF:;
    /* $ABAF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABAF); return;
label_ABB0:;
    /* $ABB0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ABB1:;
    /* $ABB1: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_ABB3:;
    /* $ABB3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ABB4:;
    /* $ABB4: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0501 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_ABB7:;
    /* $ABB7: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_ABB8:;
    /* $ABB8: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x05) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ABBA:;
    /* $ABBA: 85 */ maybe_trigger_vblank(3); nes_write(0x31, g_cpu.A);
label_ABBC:;
    /* $ABBC: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x26; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_ABBE:;
    /* $ABBE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0002 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ABC1:;
    /* $ABC1: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_ABC3; }
label_ABC3:;
    /* $ABC3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x1A + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ABC5:;
    /* $ABC5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ABC6:;
    /* $ABC6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ABC7:;
    /* $ABC7: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_ABC9; }
label_ABC9:;
    /* $ABC9: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x1A + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_ABCB:;
    /* $ABCB: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ABCC:;
    /* $ABCC: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x1C); FLAG_NZ(g_cpu.A);
label_ABCE:;
    /* $ABCE: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ABCF:;
    /* $ABCF: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_ABD0:;
    /* $ABD0: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x0F02 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_ABD3:;
    /* $ABD3: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_ABD5; }
label_ABD5:;
    /* $ABD5: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(2); goto label_AC07; }
label_ABD7:;
    /* $ABD7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABD7); return;
label_ABD8:;
    /* $ABD8: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x30 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ABDA:;
    /* $ABDA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABDA); return;
label_ABDB:;
    /* $ABDB: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x0030 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_ABDE:;
    /* $ABDE: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0218); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_ABE1:;
    /* $ABE1: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x18 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_ABE3:;
    /* $ABE3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ABE4:;
    /* $ABE4: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x19 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ABE6:;
    /* $ABE6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ABE7:;
    /* $ABE7: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x2F); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ABE9:;
    /* $ABE9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ABEA:;
    /* $ABEA: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x18); FLAG_NZ(g_cpu.A);
label_ABEC:;
    /* $ABEC: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ABED:;
    /* $ABED: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x2F; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_ABEF:;
    /* $ABEF: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ABF0:;
    /* $ABF0: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_ABF6; }
label_ABF2:;
    /* $ABF2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ABF3:;
    /* $ABF3: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x19) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_ABF5:;
    /* $ABF5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ABF6:;
    /* $ABF6: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x0204 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_ABF9:;
    /* $ABF9: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x1C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ABFB:;
    /* $ABFB: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ABFC:;
    /* $ABFC: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x1C); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_ABFE:;
    /* $ABFE: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ABFF:;
    /* $ABFF: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_AC00:;
    /* $AC00: 2F */ maybe_trigger_vblank(6); { uint16_t a=0x8002; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AC03:;
    /* $AC03: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x00 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AC05:;
    /* $AC05: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x19 + g_cpu.X) & 0xFF), g_cpu.A);
label_AC07:;
    /* $AC07: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AC08:;
    /* $AC08: 8D */ maybe_trigger_vblank(4); nes_write(0x0219, g_cpu.A);
label_AC0B:;
    /* $AC0B: 9C */ maybe_trigger_vblank(5); /* ILLEGAL $9C — skip 3 */
label_AC0E:;
    /* $AC0E: 9F */ maybe_trigger_vblank(5); /* ILLEGAL $9F — skip 3 */
label_AC11:;
    /* $AC11: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x30; g_cpu.C=(g_cpu.Y>=0x30)?1:0; FLAG_NZ(r&0xFF); }
label_AC13:;
    /* $AC13: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC13); return;
label_AC14:;
    /* $AC14: D1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_AC16:;
    /* $AC16: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AC17:;
    /* $AC17: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_AC19:;
    /* $AC19: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AC1A:;
    /* $AC1A: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x0030 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_AC1D:;
    /* $AC1D: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA002 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AC20:;
    /* $AC20: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AC21:;
    /* $AC21: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x06) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AC23:;
    /* $AC23: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0000 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AC26:;
    /* $AC26: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AC28:;
    /* $AC28: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x16; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AC2A:;
    /* $AC2A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC2A); return;
label_AC2B:;
    /* $AC2B: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0016; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AC2E:;
    /* $AC2E: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x0015 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AC31:;
    /* $AC31: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xAC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x33; g_cpu.S--; if (!nes_dispatch_call(0x0015, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAC31, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AC34:;
    /* $AC34: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xAC34; g_rti_bank = 1; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AC35:;
    /* $AC35: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_AC37; }
label_AC37:;
    /* $AC37: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x0204 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AC3A:;
    /* $AC3A: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AC3C:;
    /* $AC3C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC3C); return;
label_AC3D:;
    /* $AC3D: 87 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A & g_cpu.X); /* SAX */
label_AC3F:;
    /* $AC3F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AC40:;
    /* $AC40: 89 */ maybe_trigger_vblank(2); /* NOP */
label_AC42:;
    /* $AC42: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC42); return;
label_AC43:;
    /* $AC43: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x15; FLAG_NZ(g_cpu.Y);
label_AC45:;
    /* $AC45: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC45); return;
label_AC46:;
    /* $AC46: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0x0015); FLAG_NZ(g_cpu.A);
label_AC49:;
    /* $AC49: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA102 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AC4C:;
    /* $AC4C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0003 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AC4F:;
    /* $AC4F: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AC51:;
    /* $AC51: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AC52:;
    /* $AC52: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AC54:;
    /* $AC54: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x031E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AC57:;
    /* $AC57: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x0204 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AC5A:;
    /* $AC5A: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_AC5C:;
    /* $AC5C: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x9E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AC5E:;
    /* $AC5E: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AC60:;
    /* $AC60: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xAC72); return; }
label_AC62:;
    /* $AC62: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AC64:;
    /* $AC64: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AC69; }
label_AC66:;
    /* $AC66: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA102 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AC69:;
    /* $AC69: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0003 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AC6C:;
    /* $AC6C: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AC6E:;
    /* $AC6E: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x030B; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AC71:;
    /* $AC71: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); call_by_address(0xAC76); return; }
label_AC73:;
    /* $AC73: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AC74:;
    /* $AC74: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0x030B + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_AC77:;
    /* $AC77: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AC79:;
    /* $AC79: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xAE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AC7B:;
    /* $AC7B: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AC7D:;
    /* $AC7D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xAC8A); return; }
label_AC7F:;
    /* $AC7F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xFD + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AC81:;
    /* $AC81: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AC82:;
    /* $AC82: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AC84:;
    /* $AC84: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AC85:;
    /* $AC85: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AC87:;
    /* $AC87: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AC89:;
    /* $AC89: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AC8B:;
    /* $AC8B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AC8D:;
    /* $AC8D: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AC8E:;
    /* $AC8E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC8E); return;
label_AC8F:;
    /* $AC8F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC8F); return;
label_AC90:;
    /* $AC90: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC90); return;
label_AC91:;
    /* $AC91: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC91); return;
label_AC92:;
    /* $AC92: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC92); return;
label_AC93:;
    /* $AC93: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC93); return;
label_AC94:;
    /* $AC94: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC94); return;
label_AC95:;
    /* $AC95: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC95); return;
label_AC96:;
    /* $AC96: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0208 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AC99:;
    /* $AC99: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AC9A:;
    /* $AC9A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AC9B:;
    /* $AC9B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AC9C:;
    /* $AC9C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AC9D:;
    /* $AC9D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AC9E:;
    /* $AC9E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AC9F:;
    /* $AC9F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ACA0:;
    /* $ACA0: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x28 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACA2:;
    /* $ACA2: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x28 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACA4:;
    /* $ACA4: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x28 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACA6:;
    /* $ACA6: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_ACA7:;
    /* $ACA7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ACA8:;
    /* $ACA8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ACA9:;
    /* $ACA9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ACAA:;
    /* $ACAA: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ACAB:;
    /* $ACAB: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ACAC:;
    /* $ACAC: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ACAD:;
    /* $ACAD: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ACAE:;
    /* $ACAE: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ACAF:;
    /* $ACAF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0402 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ACB2:;
    /* $ACB2: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x02); FLAG_NZ(g_cpu.A);
label_ACB4:;
    /* $ACB4: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ACB6:;
    /* $ACB6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ACB7:;
    /* $ACB7: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ACB9:;
    /* $ACB9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ACBA:;
    /* $ACBA: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ACBC:;
    /* $ACBC: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ACBD:;
    /* $ACBD: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ACBF:;
    /* $ACBF: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ACC0:;
    /* $ACC0: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ACC2:;
    /* $ACC2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ACC3:;
    /* $ACC3: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ACC5:;
    /* $ACC5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ACC6:;
    /* $ACC6: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ACC8:;
    /* $ACC8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0601 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ACCB:;
    /* $ACCB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x06 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACCD:;
    /* $ACCD: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x06 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACCF:;
    /* $ACCF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0701 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ACD2:;
    /* $ACD2: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x07 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACD4:;
    /* $ACD4: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x07 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACD6:;
    /* $ACD6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x3102 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ACD9:;
    /* $ACD9: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_ACDA:;
    /* $ACDA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0801 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ACDD:;
    /* $ACDD: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x33 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACDF:;
    /* $ACDF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x33 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACE1:;
    /* $ACE1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x33 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACE3:;
    /* $ACE3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x33 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACE5:;
    /* $ACE5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2801 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ACE8:;
    /* $ACE8: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x08 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACEA:;
    /* $ACEA: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x1F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACEC:;
    /* $ACEC: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x17 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACEE:;
    /* $ACEE: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x17 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACF0:;
    /* $ACF0: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x1F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACF2:;
    /* $ACF2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0E02 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ACF5:;
    /* $ACF5: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x03) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ACF7:;
    /* $ACF7: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x2212; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_ACFA:;
    /* $ACFA: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x10 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_ACFC:;
    /* $ACFC: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x14) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_ACFE:;
    /* $ACFE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0804 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD01:;
    /* $AD01: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x35 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AD03:;
    /* $AD03: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD04:;
    /* $AD04: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0803 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD07:;
    /* $AD07: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x08 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AD09:;
    /* $AD09: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x3602 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD0C:;
    /* $AD0C: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD0E:;
    /* $AD0E: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x0208 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD11:;
    /* $AD11: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD12:;
    /* $AD12: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD14:;
    /* $AD14: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD16:;
    /* $AD16: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AD17:;
    /* $AD17: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD18:;
    /* $AD18: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD19:;
    /* $AD19: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2002 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD1C:;
    /* $AD1C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xAD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1E; g_cpu.S--; if (!nes_dispatch_call(0x08FF, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAD1C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AD1F:;
    /* $AD1F: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD20:;
    /* $AD20: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x3508 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD23:;
    /* $AD23: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD24:;
    /* $AD24: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x1C + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AD26:;
    /* $AD26: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD27:;
    /* $AD27: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x1E08 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD2A:;
    /* $AD2A: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1C1C + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD2D:;
    /* $AD2D: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1E1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD30:;
    /* $AD30: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1E08 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD33:;
    /* $AD33: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1E1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD36:;
    /* $AD36: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1E1E + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD39:;
    /* $AD39: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1C08 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD3C:;
    /* $AD3C: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1E1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD3F:;
    /* $AD3F: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1C1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD42:;
    /* $AD42: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1E08 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD45:;
    /* $AD45: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1C1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD48:;
    /* $AD48: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1C1C + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD4B:;
    /* $AD4B: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x08FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD4E:;
    /* $AD4E: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x2E2E; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD51:;
    /* $AD51: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x2E2E; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD54:;
    /* $AD54: 2E */ maybe_trigger_vblank(6); { uint16_t a=0xFF2E; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD57:;
    /* $AD57: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD58:;
    /* $AD58: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD59:;
    /* $AD59: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AD5B:;
    /* $AD5B: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AD5D:;
    /* $AD5D: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD5E:;
    /* $AD5E: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AD60:;
    /* $AD60: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD61:;
    /* $AD61: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD62:;
    /* $AD62: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD63:;
    /* $AD63: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x081C + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD66:;
    /* $AD66: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD67:;
    /* $AD67: 1C */ maybe_trigger_vblank(4); (void)nes_read((0xFF08 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD6A:;
    /* $AD6A: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD6B:;
    /* $AD6B: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x0808 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD6E:;
    /* $AD6E: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD6F:;
    /* $AD6F: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD70:;
    /* $AD70: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AD71:;
    /* $AD71: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD72:;
    /* $AD72: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x0808 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD75:;
    /* $AD75: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AD76:;
    /* $AD76: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0A; FLAG_NZ(g_cpu.A);
label_AD78:;
    /* $AD78: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AD79:;
    /* $AD79: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AD7A:;
    /* $AD7A: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD7B:;
    /* $AD7B: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD7C:;
    /* $AD7C: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x08 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD7E:;
    /* $AD7E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2C06 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD81:;
    /* $AD81: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2C); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AD84:;
    /* $AD84: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x2C + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AD86:;
    /* $AD86: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x2D; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD88:;
    /* $AD88: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x2D2D); FLAG_NZ(g_cpu.A);
label_AD8B:;
    /* $AD8B: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x2D + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD8D:;
    /* $AD8D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2B08 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD90:;
    /* $AD90: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AD92:;
    /* $AD92: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AD94:;
    /* $AD94: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AD96:;
    /* $AD96: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0xFF; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AD98:;
    /* $AD98: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD99:;
    /* $AD99: 1A */ maybe_trigger_vblank(2); /* NOP */
label_AD9A:;
    /* $AD9A: 1A */ maybe_trigger_vblank(2); /* NOP */
label_AD9B:;
    /* $AD9B: 1A */ maybe_trigger_vblank(2); /* NOP */
label_AD9C:;
    /* $AD9C: 1A */ maybe_trigger_vblank(2); /* NOP */
label_AD9D:;
    /* $AD9D: 1A */ maybe_trigger_vblank(2); /* NOP */
label_AD9E:;
    /* $AD9E: 1A */ maybe_trigger_vblank(2); /* NOP */
label_AD9F:;
    /* $AD9F: 1A */ maybe_trigger_vblank(2); /* NOP */
label_ADA0:;
    /* $ADA0: 1A */ maybe_trigger_vblank(2); /* NOP */
label_ADA1:;
    /* $ADA1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2001 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ADA4:;
    /* $ADA4: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x20 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ADA6:;
    /* $ADA6: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x17 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ADA8:;
    /* $ADA8: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x17 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ADAA:;
    /* $ADAA: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x20 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ADAC:;
    /* $ADAC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2007 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ADAF:;
    /* $ADAF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xAD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB1; g_cpu.S--; if (!nes_dispatch_call(0x2020, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xADAF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_ADB2:;
    /* $ADB2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xAD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; if (!nes_dispatch_call(0x2020, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xADB2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_ADB5:;
    /* $ADB5: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x20; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_ADB7:;
    /* $ADB7: 1A */ maybe_trigger_vblank(2); /* NOP */
label_ADB8:;
    /* $ADB8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xAD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; if (!nes_dispatch_call(0x201F, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xADB8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_ADBB:;
    /* $ADBB: 1A */ maybe_trigger_vblank(2); /* NOP */
label_ADBC:;
    /* $ADBC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xAD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBE; g_cpu.S--; if (!nes_dispatch_call(0x08FF, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xADBC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_ADBF:;
    /* $ADBF: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_ADC2:;
    /* $ADC2: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_ADC5:;
    /* $ADC5: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x080D); FLAG_NZ(g_cpu.A);
label_ADC8:;
    /* $ADC8: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_ADCB:;
    /* $ADCB: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_ADCE:;
    /* $ADCE: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x080D); FLAG_NZ(g_cpu.A);
label_ADD1:;
    /* $ADD1: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_ADD4:;
    /* $ADD4: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_ADD7:;
    /* $ADD7: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x080D); FLAG_NZ(g_cpu.A);
label_ADDA:;
    /* $ADDA: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_ADDD:;
    /* $ADDD: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_ADE0:;
    /* $ADE0: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0xFF0D); FLAG_NZ(g_cpu.A);
label_ADE3:;
    /* $ADE3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x0D + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ADE5:;
    /* $ADE5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0D04 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ADE8:;
    /* $ADE8: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_ADEB:;
    /* $ADEB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0D02 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ADEE:;
    /* $ADEE: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D02); FLAG_NZ(g_cpu.A);
label_ADF1:;
    /* $ADF1: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D02); FLAG_NZ(g_cpu.A);
label_ADF4:;
    /* $ADF4: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D02); FLAG_NZ(g_cpu.A);
label_ADF7:;
    /* $ADF7: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x08FF); FLAG_NZ(g_cpu.A);
label_ADFA:;
    /* $ADFA: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_ADFD:;
    /* $ADFD: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_AE00:;
    /* $AE00: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x050D); FLAG_NZ(g_cpu.A);
label_AE03:;
    /* $AE03: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x30; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE05:;
    /* $AE05: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x300D); FLAG_NZ(g_cpu.A);
label_AE08:;
    /* $AE08: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0D08 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE0B:;
    /* $AE0B: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_AE0E:;
    /* $AE0E: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_AE11:;
    /* $AE11: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x01FF); FLAG_NZ(g_cpu.A);
label_AE14:;
    /* $AE14: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x1F01); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE17:;
    /* $AE17: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0804 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE1A:;
    /* $AE1A: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x08 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AE1C:;
    /* $AE1C: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AE1D:;
    /* $AE1D: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x08); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE1F:;
    /* $AE1F: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x3408 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE22:;
    /* $AE22: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x34); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE24:;
    /* $AE24: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AE25:;
    /* $AE25: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AE26:;
    /* $AE26: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AE27:;
    /* $AE27: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x08); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE29:;
    /* $AE29: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AE2A:;
    /* $AE2A: 1C */ maybe_trigger_vblank(4); (void)nes_read((0xFF08 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE2D:;
    /* $AE2D: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x1D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE2F:;
    /* $AE2F: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE32:;
    /* $AE32: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x1D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE34:;
    /* $AE34: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1D1C + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE37:;
    /* $AE37: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x1C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE39:;
    /* $AE39: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1C1C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE3C:;
    /* $AE3C: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x1D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE3E:;
    /* $AE3E: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1D1D + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE41:;
    /* $AE41: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x3304 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE44:;
    /* $AE44: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x33) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE46:;
    /* $AE46: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE48:;
    /* $AE48: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x22 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE4A:;
    /* $AE4A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2803 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE4D:;
    /* $AE4D: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0308; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE50:;
    /* $AE50: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x08 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE52:;
    /* $AE52: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3803 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE55:;
    /* $AE55: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x0339 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE58:;
    /* $AE58: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AE59:;
    /* $AE59: 3A */ maybe_trigger_vblank(2); /* NOP */
label_AE5A:;
    /* $AE5A: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AE5B:;
    /* $AE5B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AE5C:;
    /* $AE5C: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0xFF3C + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE5F:;
    /* $AE5F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x1E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AE61:;
    /* $AE61: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x031C + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE64:;
    /* $AE64: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x1E08 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE67:;
    /* $AE67: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x0A + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AE69:;
    /* $AE69: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x1E; FLAG_NZ(g_cpu.A);
label_AE6B:;
    /* $AE6B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x3D + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AE6D:;
    /* $AE6D: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0A; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AE6F:;
    /* $AE6F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x1E04 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE72:;
    /* $AE72: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1E1C + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE75:;
    /* $AE75: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x1E); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE77:;
    /* $AE77: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1E1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE7A:;
    /* $AE7A: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x1C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE7C:;
    /* $AE7C: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1E1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE7F:;
    /* $AE7F: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x1E); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE81:;
    /* $AE81: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1E1C + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE84:;
    /* $AE84: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2301 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE87:;
    /* $AE87: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x23 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE89:;
    /* $AE89: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x23 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE8B:;
    /* $AE8B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x23 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE8D:;
    /* $AE8D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x3E02 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE90:;
    /* $AE90: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x08FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE93:;
    /* $AE93: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1E1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE96:;
    /* $AE96: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1E1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE99:;
    /* $AE99: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x081E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE9C:;
    /* $AE9C: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1E1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE9F:;
    /* $AE9F: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1E1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AEA2:;
    /* $AEA2: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0xFF1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AEA5:;
    /* $AEA5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x1F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AEA7:;
    /* $AEA7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x1F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AEA9:;
    /* $AEA9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x1F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AEAB:;
    /* $AEAB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x1F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AEAD:;
    /* $AEAD: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x1F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AEAF:;
    /* $AEAF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x3E01 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AEB2:;
    /* $AEB2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2E04 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AEB5:;
    /* $AEB5: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_AEB6:;
    /* $AEB6: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x042E; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AEB9:;
    /* $AEB9: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x2E2E; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AEBC:;
    /* $AEBC: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_AEBD:;
    /* $AEBD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2B08 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AEC0:;
    /* $AEC0: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AEC2:;
    /* $AEC2: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AEC4:;
    /* $AEC4: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AEC6:;
    /* $AEC6: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0xFF; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AEC8:;
    /* $AEC8: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x1B + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AECA:;
    /* $AECA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x1F08 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AECD:;
    /* $AECD: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x1F1F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AED0:;
    /* $AED0: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x1F1F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AED3:;
    /* $AED3: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x1F08 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AED6:;
    /* $AED6: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x1F1F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AED9:;
    /* $AED9: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x1F1F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AEDC:;
    /* $AEDC: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x01FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AEDF:;
    /* $AEDF: 2F */ maybe_trigger_vblank(6); { uint16_t a=0x01FF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AEE2:;
    /* $AEE2: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x01FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AEE5:;
    /* $AEE5: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AEE7:;
    /* $AEE7: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AEE9:;
    /* $AEE9: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AEEB:;
    /* $AEEB: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AEED:;
    /* $AEED: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x24 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AEEF:;
    /* $AEEF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF1F1 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AEF2:;
    /* $AEF2: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xF1) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AEF4:;
    /* $AEF4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF0FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AEF7:;
    /* $AEF7: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xAF5D); return; }
label_AEF9:;
    /* $AEF9: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x64); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEFB:;
    /* $AEFB: 64 */ maybe_trigger_vblank(3); (void)nes_read(0xD5); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEFD:;
    /* $AEFD: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0xCB + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AEFF:;
    /* $AEFF: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xFFA4); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_AF02:;
    /* $AF02: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xFF); FLAG_NZ(g_cpu.Y);
label_AF04:;
    /* $AF04: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFA5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF07:;
    /* $AF07: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA0); FLAG_NZ(g_cpu.A);
label_AF09:;
    /* $AF09: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_AF0B:;
    /* $AF0B: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA1; FLAG_NZ(g_cpu.Y);
label_AF0D:;
    /* $AF0D: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xA1 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AF0F:;
    /* $AF0F: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AF11:;
    /* $AF11: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AF13:;
    /* $AF13: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x0B + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF15:;
    /* $AF15: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAF15); return;
label_AF16:;
    /* $AF16: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x030B + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF19:;
    /* $AF19: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AF1A:;
    /* $AF1A: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AF1B:;
    /* $AF1B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0908 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF1E:;
    /* $AF1E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AF1F:;
    /* $AF1F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x0E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF21:;
    /* $AF21: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x1110; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF24:;
    /* $AF24: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_AF25:;
    /* $AF25: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x14) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF27:;
    /* $AF27: 0C */ maybe_trigger_vblank(4); (void)nes_read(0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF2A:;
    /* $AF2A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF30 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF2D:;
    /* $AF2D: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AF2F:;
    /* $AF2F: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AF31:;
    /* $AF31: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3DFF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF34:;
    /* $AF34: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x31FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF37:;
    /* $AF37: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_AF38:;
    /* $AF38: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x35 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF3A:;
    /* $AF3A: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x38 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AF3C:;
    /* $AF3C: 3A */ maybe_trigger_vblank(2); /* NOP */
label_AF3D:;
    /* $AF3D: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0x3F3E + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AF40:;
    /* $AF40: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x4041 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF43:;
    /* $AF43: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_AF44:;
    /* $AF44: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x43FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF47:;
    /* $AF47: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x44 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AF49:;
    /* $AF49: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x44); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF4B:;
    /* $AF4B: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x45); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF4D:;
    /* $AF4D: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x45; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_AF4F:;
    /* $AF4F: 46 */ maybe_trigger_vblank(5); { uint16_t a=0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_AF51:;
    /* $AF51: 47 */ maybe_trigger_vblank(5); { uint16_t a=0x47; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AF53:;
    /* $AF53: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AF54:;
    /* $AF54: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AF55:;
    /* $AF55: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x4847 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF58:;
    /* $AF58: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AF59:;
    /* $AF59: 47 */ maybe_trigger_vblank(5); { uint16_t a=0x47; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AF5B:;
    /* $AF5B: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AF5C:;
    /* $AF5C: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x49; FLAG_NZ(g_cpu.A);
label_AF5E:;
    /* $AF5E: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AF5F:;
    /* $AF5F: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AF60:;
    /* $AF60: 4B */ maybe_trigger_vblank(2); g_cpu.A &= 0x4C; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_AF62:;
    /* $AF62: 4D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read(0x5150); FLAG_NZ(g_cpu.A);
label_AF65:;
    /* $AF65: 52 */ maybe_trigger_vblank(2); /* ILLEGAL $52 — skip 1 */
label_AF66:;
    /* $AF66: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x54) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AF68:;
    /* $AF68: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x56 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AF6A:;
    /* $AF6A: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0x58 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AF6C:;
    /* $AF6C: 59 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x595B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF6F:;
    /* $AF6F: 5B */ maybe_trigger_vblank(7); { uint16_t a=(0x5D5C + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AF72:;
    /* $AF72: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0x4F5F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_AF75:;
    /* $AF75: 4F */ maybe_trigger_vblank(6); { uint16_t a=0x4F4F; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AF78:;
    /* $AF78: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AF79:;
    /* $AF79: 89 */ maybe_trigger_vblank(2); /* NOP */
label_AF7B:;
    /* $AF7B: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_AF7D:;
    /* $AF7D: 85 */ maybe_trigger_vblank(3); nes_write(0x86, g_cpu.A);
label_AF7F:;
    /* $AF7F: 87 */ maybe_trigger_vblank(3); nes_write(0x8C, g_cpu.A & g_cpu.X); /* SAX */
label_AF81:;
    /* $AF81: 8D */ maybe_trigger_vblank(4); nes_write(0x8F8E, g_cpu.A);
label_AF84:;
    /* $AF84: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF87:;
    /* $AF87: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF8A:;
    /* $AF8A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF8D:;
    /* $AF8D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF90:;
    /* $AF90: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF93:;
    /* $AF93: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xB1B0 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF96:;
    /* $AF96: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_AF97:;
    /* $AF97: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0xB4) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF99:;
    /* $AF99: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AF9B:;
    /* $AF9B: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xB8 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_AF9D:;
    /* $AF9D: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_AF9E:;
    /* $AF9E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xFFB9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AFA1:;
    /* $AFA1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBABA + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AFA4:;
    /* $AFA4: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_AFA7:;
    /* $AFA7: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_AFAA:;
    /* $AFAA: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xCA; g_cpu.C=(g_cpu.A>=0xCA)?1:0; FLAG_NZ(r&0xFF); }
label_AFAC:;
    /* $AFAC: 94 */ maybe_trigger_vblank(4); nes_write((0x95 + g_cpu.X) & 0xFF, g_cpu.Y);
label_AFAE:;
    /* $AFAE: 96 */ maybe_trigger_vblank(4); nes_write((0x97 + g_cpu.Y) & 0xFF, g_cpu.X);
label_AFB0:;
    /* $AFB0: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0xFFFF); FLAG_NZ(g_cpu.A);
label_AFB3:;
    /* $AFB3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AFB6:;
    /* $AFB6: 59 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF5A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AFB9:;
    /* $AFB9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x5B5A + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AFBC:;
    /* $AFBC: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AFBE:;
    /* $AFBE: 82 */ maybe_trigger_vblank(2); /* NOP */
label_AFC0:;
    /* $AFC0: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AFC2:;
    /* $AFC2: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AFC4:;
    /* $AFC4: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AFC6:;
    /* $AFC6: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x07; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AFC8:;
    /* $AFC8: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AFC9:;
    /* $AFC9: 61 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x62 + g_cpu.X) & 0xFF)); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AFCB:;
    /* $AFCB: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AFCD:;
    /* $AFCD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAFCD); return;
label_AFCE:;
    /* $AFCE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAFCE); return;
label_AFCF:;
    /* $AFCF: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AFD0:;
    /* $AFD0: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0xBE; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AFD2:;
    /* $AFD2: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xBFBD + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_AFD5:;
    /* $AFD5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AFD7:;
    /* $AFD7: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AFD9:;
    /* $AFD9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AFDB:;
    /* $AFDB: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xFF + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AFDD:;
    /* $AFDD: C1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xFF + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_AFDF:;
    /* $AFDF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x01C2 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AFE2:;
    /* $AFE2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x30FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AFE5:;
    /* $AFE5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAFE5); return;
label_AFE6:;
    /* $AFE6: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xCDBD + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_AFE9:;
    /* $AFE9: CE */ maybe_trigger_vblank(6); { uint16_t a=0xD0CF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AFEC:;
    /* $AFEC: D1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xD2) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_AFEE:;
    /* $AFEE: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xD4) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_AFF0:;
    /* $AFF0: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xAF83); return; }
label_AFF2:;
    /* $AFF2: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_AFF3:;
    /* $AFF3: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_AFF5:;
    /* $AFF5: 85 */ maybe_trigger_vblank(3); nes_write(0x72, g_cpu.A);
label_AFF7:;
    /* $AFF7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_AFF9:;
    /* $AFF9: 85 */ maybe_trigger_vblank(3); nes_write(0x73, g_cpu.A);
label_AFFB:;
    /* $AFFB: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AFFC:;
    /* $AFFC: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x72; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AFFE:;
    /* $AFFE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B017; }
label_B000:;
    /* $B000: C2 */ maybe_trigger_vblank(2); /* NOP */
label_B002:;
    /* $B002: 2E */ maybe_trigger_vblank(6); { uint16_t a=0xFF30; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B005:;
    /* $B005: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB3 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B007:;
    /* $B007: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x3034; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B00A:;
    /* $B00A: 3A */ maybe_trigger_vblank(2); /* NOP */
label_B00B:;
    /* $B00B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2EB4 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B00E:;
    /* $B00E: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x30) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B010:;
    /* $B010: 34 */ maybe_trigger_vblank(4); (void)nes_read((0xC3 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B012:;
    /* $B012: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x38 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_B014:;
    /* $B014: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x2630 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B017:;
    /* $B017: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(2); call_by_address(0xAFD4); return; }
label_B019:;
    /* $B019: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B01A:;
    /* $B01A: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x3A) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B01C:;
    /* $B01C: 34 */ maybe_trigger_vblank(4); (void)nes_read((0xFF + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B01E:;
    /* $B01E: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x38 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_B020:;
    /* $B020: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_B021:;
    /* $B021: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B022:;
    /* $B022: 3A */ maybe_trigger_vblank(2); /* NOP */
label_B023:;
    /* $B023: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xB04F); return; }
label_B025:;
    /* $B025: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x2C30 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B028:;
    /* $B028: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AFE5;
    }
label_B02A:;
    /* $B02A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B02B:;
    /* $B02B: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B02C:;
    /* $B02C: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x3A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B02E:;
    /* $B02E: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x30) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B030:;
    /* $B030: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B031:;
    /* $B031: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0x2A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B033:;
    /* $B033: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_B034:;
    /* $B034: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x2C18 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B037:;
    /* $B037: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B038:;
    /* $B038: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B03B:;
    /* $B03B: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x2C22 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B03E:;
    /* $B03E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x2218 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B041:;
    /* $B041: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B042:;
    /* $B042: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B045:;
    /* $B045: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x262A; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B048:;
    /* $B048: 34 */ maybe_trigger_vblank(4); (void)nes_read((0xB2 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B04A:;
    /* $B04A: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0x3A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B04C:;
    /* $B04C: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_B04D:;
    /* $B04D: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x2226 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B050:;
    /* $B050: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x02BB + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B053:;
    /* $B053: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B054:;
    /* $B054: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_B055:;
    /* $B055: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xB926); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_B058:;
    /* $B058: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_B059:;
    /* $B059: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x34); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B05B:;
    /* $B05B: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B05E:;
    /* $B05E: 34 */ maybe_trigger_vblank(4); (void)nes_read((0xB3 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B060:;
    /* $B060: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x0026; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B063:;
    /* $B063: C2 */ maybe_trigger_vblank(2); /* NOP */
label_B065:;
    /* $B065: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0EB9; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B068:;
    /* $B068: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x0E; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B06A:;
    /* $B06A: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B06D:;
    /* $B06D: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0EB9; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B070:;
    /* $B070: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x0E; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B072:;
    /* $B072: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B075:;
    /* $B075: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xB9 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B077:;
    /* $B077: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B079:;
    /* $B079: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xBB + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B07B:;
    /* $B07B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B07C:;
    /* $B07C: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B07D:;
    /* $B07D: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xB9 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B07F:;
    /* $B07F: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B081:;
    /* $B081: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xBB + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B083:;
    /* $B083: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B084:;
    /* $B084: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xB4C3 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B087:;
    /* $B087: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x44B6 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B08A:;
    /* $B08A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B0CE; }
label_B08C:;
    /* $B08C: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x42); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B08E:;
    /* $B08E: 3A */ maybe_trigger_vblank(2); /* NOP */
label_B08F:;
    /* $B08F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x3EB4 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B092:;
    /* $B092: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0xB6C3 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B095:;
    /* $B095: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B096:;
    /* $B096: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B097:;
    /* $B097: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x44B6 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B09A:;
    /* $B09A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B0DE; }
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
label_B0CE:;
    /* $B0CE: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x4C4E + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B0D1:;
    /* $B0D1: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B0D2:;
    /* $B0D2: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B0D5:;
    /* $B0D5: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x44B2, -1); return;
label_B0DE:;
    /* $B0DE: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x54 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_B0E0:;
    /* $B0E0: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xC4 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B0E2:;
    /* $B0E2: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x02 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_B0E4:;
    /* $B0E4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xB2C3 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
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
label_B235:;
    /* $B235: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x38 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B237:;
    /* $B237: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B239:;
    /* $B239: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xB239; g_rti_bank = 1; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B23A:;
    /* $B23A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB23A); return;
label_B23B:;
    /* $B23B: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x58; FLAG_NZ(g_cpu.A);
label_B23D:;
    /* $B23D: 80 */ maybe_trigger_vblank(2); /* NOP */
label_B23F:;
    /* $B23F: 80 */ maybe_trigger_vblank(2); /* NOP */
label_B241:;
    /* $B241: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x7F + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B243:;
    /* $B243: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB243); return;
label_B244:;
    /* $B244: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B25F; }
label_B246:;
    /* $B246: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xA00E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B249:;
    /* $B249: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0F7F); FLAG_NZ(g_cpu.A);
label_B24C:;
    /* $B24C: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_B24D:;
    /* $B24D: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x7F + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B24F:;
    /* $B24F: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x18; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_B251:;
    /* $B251: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x7F) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B253:;
    /* $B253: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xC1F8; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B256:;
    /* $B256: 89 */ maybe_trigger_vblank(2); /* NOP */
label_B258:;
    /* $B258: 0F */ maybe_trigger_vblank(6); { uint16_t a=0xBA34; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B25B:;
    /* $B25B: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x05; g_cpu.C=(g_cpu.X>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_B25D:;
    /* $B25D: 34 */ maybe_trigger_vblank(4); (void)nes_read((0xBB + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B25F:;
    /* $B25F: CE */ maybe_trigger_vblank(6); { uint16_t a=0xB605; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B262:;
    /* $B262: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xC200 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B265:;
    /* $B265: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x7F + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_B267:;
    /* $B267: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xC2); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B269:;
    /* $B269: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x7F + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B26B:;
    /* $B26B: 66 */ maybe_trigger_vblank(5); { uint16_t a=0x89; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B26D:;
    /* $B26D: 89 */ maybe_trigger_vblank(2); /* NOP */
label_B26F:;
    /* $B26F: 67 */ maybe_trigger_vblank(5); { uint16_t a=0x18; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B271:;
    /* $B271: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_B273:;
    /* $B273: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0228 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B276:;
    /* $B276: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xF8A8 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B279:;
    /* $B279: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0x83 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B27B:;
    /* $B27B: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_B27C:;
    /* $B27C: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_B27D:;
    /* $B27D: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0x82 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B27F:;
    /* $B27F: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_B280:;
    /* $B280: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_B281:;
    /* $B281: 95 */ maybe_trigger_vblank(4); nes_write((0x8C + g_cpu.X) & 0xFF, g_cpu.A);
label_B283:;
    /* $B283: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xB283; g_rti_bank = 1; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B284:;
    /* $B284: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9A1D + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B287:;
    /* $B287: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB2; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x89; g_cpu.S--; if (!nes_dispatch_call(0x168F, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB287, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B28A:;
    /* $B28A: 8D */ maybe_trigger_vblank(4); nes_write(0x42E0, g_cpu.A);
label_B28D:;
    /* $B28D: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x6F7F + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B290:;
    /* $B290: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xB290; g_rti_bank = 1; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B291:;
    /* $B291: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B292:;
    /* $B292: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x4080 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B295:;
    /* $B295: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x7F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B297:;
    /* $B297: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xB297; g_rti_bank = 1; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B298:;
    /* $B298: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_B299:;
    /* $B299: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x7F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B29B:;
    /* $B29B: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x28); FLAG_NZ(g_cpu.A);
label_B29D:;
    /* $B29D: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xDD7F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B2A0:;
    /* $B2A0: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0x7F7F + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_B2A3:;
    /* $B2A3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7F98 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B2A6:;
    /* $B2A6: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x0840 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B2A9:;
    /* $B2A9: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x7F; FLAG_NZ(g_cpu.A);
label_B2AB:;
    /* $B2AB: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xB2F5); return; }
label_B2AD:;
    /* $B2AD: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x7F + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B2AF:;
    /* $B2AF: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_B2B0:;
    /* $B2B0: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B2B1:;
    /* $B2B1: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x7F + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B2B3:;
    /* $B2B3: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x09) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B2B5:;
    /* $B2B5: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x307F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B2B8:;
    /* $B2B8: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B2B9:;
    /* $B2B9: EB */ maybe_trigger_vblank(2); { uint8_t m=0xB2; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B2BB:;
    /* $B2BB: 52 */ maybe_trigger_vblank(2); /* ILLEGAL $52 — skip 1 */
label_B2BC:;
    /* $B2BC: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B2BE:;
    /* $B2BE: FB */ maybe_trigger_vblank(7); { uint16_t a=(0x1EB2 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B2C1:;
    /* $B2C1: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x00 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B2C3:;
    /* $B2C3: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0xB3; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_B2C5:;
    /* $B2C5: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B2C6:;
    /* $B2C6: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B2C8:;
    /* $B2C8: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x1EB3 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B2CB:;
    /* $B2CB: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x01 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B2CD:;
    /* $B2CD: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0xB3; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_B2CF:;
    /* $B2CF: 74 */ maybe_trigger_vblank(4); (void)nes_read((0xB3 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B2D1:;
    /* $B2D1: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x3B + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B2D3:;
    /* $B2D3: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x1E) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B2D5:;
    /* $B2D5: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B2D7:;
    /* $B2D7: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0xBC + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B2D9:;
    /* $B2D9: 8C */ maybe_trigger_vblank(4); nes_write(0x04B3, g_cpu.Y);
label_B2DC:;
    /* $B2DC: 46 */ maybe_trigger_vblank(5); { uint16_t a=0xBC; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_B2DE:;
    /* $B2DE: 94 */ maybe_trigger_vblank(4); nes_write((0xB3 + g_cpu.X) & 0xFF, g_cpu.Y);
label_B2E0:;
    /* $B2E0: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x56); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B2E2:;
    /* $B2E2: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xBC7B + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_B2E5:;
    /* $B2E5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB2E5); return;
label_B2E6:;
    /* $B2E6: 56 */ maybe_trigger_vblank(6); { uint16_t a=(0xBC + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_B2E8:;
    /* $B2E8: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x00BC); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B2EB:;
    /* $B2EB: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x5BB5 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B2EE:;
    /* $B2EE: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9E + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B2F0:;
    /* $B2F0: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB3 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B2F2:;
    /* $B2F2: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xC8 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B2F4:;
    /* $B2F4: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x3F + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B2F6:;
    /* $B2F6: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x1E + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
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
    /* $B367: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x69; g_cpu.S--; func_B4ED_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB367, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B36A:;
    /* $B36A: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16zp(0xE2); nes_trace_indirect_jump(0xB36A, _jt); maybe_trigger_vblank(2); call_by_address_tail(_jt, -1); return; }
label_B3BF:;
    /* $B3BF: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0602; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B3C2:;
    /* $B3C2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC4; g_cpu.S--; func_B46E_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3C2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3C5:;
    /* $B3C5: 8D */ maybe_trigger_vblank(4); nes_write(0x0603, g_cpu.A);
label_B3C8:;
    /* $B3C8: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B3C9:;
    /* $B3C9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0602); FLAG_NZ(g_cpu.A);
label_B3CC:;
    /* $B3CC: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B3BF;
    }
label_B3CE:;
    /* $B3CE: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0603); FLAG_NZ(g_cpu.A);
label_B3D1:;
    /* $B3D1: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x12; g_cpu.C=(g_cpu.A>=0x12)?1:0; FLAG_NZ(r&0xFF); }
label_B3D3:;
    /* $B3D3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B3E3; }
label_B3D5:;
    /* $B3D5: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_B3D7:;
    /* $B3D7: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_B3D9:;
    /* $B3D9: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B3E0; }
label_B3DB:;
    /* $B3DB: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x3D; FLAG_NZ(g_cpu.Y);
label_B3DD:;
    /* $B3DD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDF; g_cpu.S--; func_B398_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3DD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3E0:;
    /* $B3E0: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0603; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
    { g_cpu.S++; uint8_t _lo=g_ram[0x100+g_cpu.S]; g_cpu.S++; uint8_t _hi=g_ram[0x100+g_cpu.S]; call_by_address_tail(((uint16_t)_hi<<8|_lo)+1, -1); }
    return;
label_B3E3:;
    /* $B3E3: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B3E4:;
    /* $B3E4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC0; FLAG_NZ(g_cpu.A);
label_B3E6:;
    /* $B3E6: 8D */ maybe_trigger_vblank(4); nes_write(0x4017, g_cpu.A);
label_B3E9:;
    /* $B3E9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0680); FLAG_NZ(g_cpu.A);
label_B3EC:;
    /* $B3EC: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B3ED:;
    /* $B3ED: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_B41B; }
label_B3EF:;
    /* $B3EF: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1E); FLAG_NZ(g_cpu.A);
label_B3F1:;
    /* $B3F1: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_B3F3:;
    /* $B3F3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B3C9;
    }
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
    /* $B41A: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B41B:;
    /* $B41B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1D; g_cpu.S--; func_B434_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB41B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B41E:;
    /* $B41E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B406;
    }
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
    /* $B434: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x36; g_cpu.S--; func_B44D_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB434, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B437:;
    /* $B437: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x39; g_cpu.S--; func_B46E_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB437, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B43A:;
    /* $B43A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3C; g_cpu.S--; func_B43E_b1();
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
}

void func_A44D_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A44D_b1");
#endif
    func_A44D_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B3E4_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3E4_b1");
#endif
    func_A44D_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B3BF_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3BF_b1");
#endif
    func_A44D_b1_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B0E7_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B0E7_b1");
#endif
    func_A44D_b1_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AFE5_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AFE5_b1");
#endif
    func_A44D_b1_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B42C_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B42C_b1");
#endif
    func_A44D_b1_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A470_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A470_b1");
#endif
label_A470:;
    /* $A470: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x03 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A472:;
    /* $A472: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_A473:;
    /* $A473: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x83) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A475:;
    /* $A475: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A476:;
    /* $A476: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x03 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A478:;
    /* $A478: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x31 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A47A:;
    /* $A47A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A47B:;
    /* $A47B: 59 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x0241 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A47E:;
    /* $A47E: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0xFF + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A480:;
    /* $A480: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A481:;
    /* $A481: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA481); return;
}

void func_A6FB_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A6FB_b1");
#endif
label_A6FB:;
    /* $A6FB: 1A */ maybe_trigger_vblank(2); /* NOP */
label_A6FC:;
    /* $A6FC: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6FD:;
    /* $A6FD: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x1A; g_cpu.C=(g_cpu.Y>=0x1A)?1:0; FLAG_NZ(r&0xFF); }
label_A6FF:;
    /* $A6FF: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A700:;
    /* $A700: CE */ maybe_trigger_vblank(6); { uint16_t a=0x021A; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A703:;
    /* $A703: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_A704:;
    /* $A704: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A705:;
    /* $A705: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A706:;
    /* $A706: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_A707:;
    /* $A707: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A708:;
    /* $A708: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A709:;
    /* $A709: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA102 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A70C:;
    /* $A70C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A70D:;
    /* $A70D: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A70F:;
    /* $A70F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A710:;
    /* $A710: 5C */ maybe_trigger_vblank(4); (void)nes_read((0x0211 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A713:;
    /* $A713: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_A715:;
    /* $A715: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A717:;
    /* $A717: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A719:;
    /* $A719: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A71A:;
    /* $A71A: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A71C:;
    /* $A71C: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x030B; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A71F:;
    /* $A71F: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_A72C; }
label_A721:;
    /* $A721: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x52 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A723:;
    /* $A723: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A725:;
    /* $A725: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0x030B + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A728:;
    /* $A728: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0B; FLAG_NZ(g_cpu.Y);
label_A72A:;
    /* $A72A: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xA2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A72C:;
    /* $A72C: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A72E:;
    /* $A72E: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x030B); FLAG_NZ(g_cpu.X);
label_A731:;
    /* $A731: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x8301 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A734:;
    /* $A734: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0311 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A737:;
    /* $A737: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x21 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A739:;
    /* $A739: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A73A:;
    /* $A73A: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x03FF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A73D:;
    /* $A73D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA73D); return;
}

void func_A6ED_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A6ED_b1");
#endif
label_A6ED:;
    /* $A6ED: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6EE:;
    /* $A6EE: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A6F0:;
    /* $A6F0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6F1:;
    /* $A6F1: 82 */ maybe_trigger_vblank(2); /* NOP */
label_A6F3:;
    /* $A6F3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6F4:;
    /* $A6F4: 86 */ maybe_trigger_vblank(3); nes_write(0x2E, g_cpu.X);
label_A6F6:;
    /* $A6F6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6F7:;
    /* $A6F7: 87 */ maybe_trigger_vblank(3); nes_write(0x1B, g_cpu.A & g_cpu.X); /* SAX */
label_A6F9:;
    /* $A6F9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6FA:;
    /* $A6FA: 8E */ maybe_trigger_vblank(4); nes_write(0x021A, g_cpu.X);
label_A6FD:;
    /* $A6FD: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x1A; g_cpu.C=(g_cpu.Y>=0x1A)?1:0; FLAG_NZ(r&0xFF); }
label_A6FF:;
    /* $A6FF: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A700:;
    /* $A700: CE */ maybe_trigger_vblank(6); { uint16_t a=0x021A; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A703:;
    /* $A703: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_A704:;
    /* $A704: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A705:;
    /* $A705: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A706:;
    /* $A706: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_A707:;
    /* $A707: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A708:;
    /* $A708: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A709:;
    /* $A709: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA102 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A70C:;
    /* $A70C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A70D:;
    /* $A70D: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A70F:;
    /* $A70F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A710:;
    /* $A710: 5C */ maybe_trigger_vblank(4); (void)nes_read((0x0211 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A713:;
    /* $A713: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_A715:;
    /* $A715: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A717:;
    /* $A717: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A719:;
    /* $A719: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A71A:;
    /* $A71A: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A71C:;
    /* $A71C: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x030B; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A71F:;
    /* $A71F: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_A72C; }
label_A721:;
    /* $A721: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x52 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A723:;
    /* $A723: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A725:;
    /* $A725: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0x030B + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A728:;
    /* $A728: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0B; FLAG_NZ(g_cpu.Y);
label_A72A:;
    /* $A72A: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xA2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A72C:;
    /* $A72C: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A72E:;
    /* $A72E: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x030B); FLAG_NZ(g_cpu.X);
label_A731:;
    /* $A731: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x8301 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A734:;
    /* $A734: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0311 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A737:;
    /* $A737: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x21 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A739:;
    /* $A739: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A73A:;
    /* $A73A: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x03FF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A73D:;
    /* $A73D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA73D); return;
}

void func_A7AD_b1_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B503;
        case 2: goto label_B6FC;
        case 3: goto label_B91C;
        case 4: goto label_B8D6;
        case 5: goto label_B6C4;
        case 6: goto label_B920;
        case 7: goto label_B568;
    }
label_A7AD:;
    /* $A7AD: 96 */ maybe_trigger_vblank(4); nes_write((0x1F + g_cpu.Y) & 0xFF, g_cpu.X);
label_A7AF:;
    /* $A7AF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xAA + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A7B1:;
    /* $A7B1: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x03); FLAG_NZ(g_cpu.A);
label_A7B3:;
    /* $A7B3: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x011F); FLAG_NZ(g_cpu.Y);
label_A7B6:;
    /* $A7B6: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_A7B7:;
    /* $A7B7: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xA7BC); return; }
label_A7B9:;
    /* $A7B9: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x05); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A7BB:;
    /* $A7BB: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A7BD:;
    /* $A7BD: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A7C2; }
label_A7BF:;
    /* $A7BF: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_A7C0:;
    /* $A7C0: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A7C5; }
label_A7C2:;
    /* $A7C2: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0551 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7C5:;
    /* $A7C5: 89 */ maybe_trigger_vblank(2); /* NOP */
label_A7C7:;
    /* $A7C7: 87 */ maybe_trigger_vblank(3); nes_write(0xAB, g_cpu.A & g_cpu.X); /* SAX */
label_A7C9:;
    /* $A7C9: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x06 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A7CB:;
    /* $A7CB: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x17 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A7CD:;
    /* $A7CD: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xC5; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A7CF:;
    /* $A7CF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0001 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7D2:;
    /* $A7D2: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7D4:;
    /* $A7D4: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A7D5:;
    /* $A7D5: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7D7:;
    /* $A7D7: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A7F8; }
label_A7D9:;
    /* $A7D9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xB6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A7DB:;
    /* $A7DB: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x03); FLAG_NZ(g_cpu.A);
label_A7DD:;
    /* $A7DD: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_A7DE:;
    /* $A7DE: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x03); FLAG_NZ(g_cpu.A);
label_A7E0:;
    /* $A7E0: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x011F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_A7E3:;
    /* $A7E3: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A7E5:;
    /* $A7E5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xD4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A7E7:;
    /* $A7E7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA7E7); return;
label_A7E8:;
    /* $A7E8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A7E9:;
    /* $A7E9: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0707 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7EC:;
    /* $A7EC: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x47 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_A7EE:;
    /* $A7EE: 87 */ maybe_trigger_vblank(3); nes_write(0xB9, g_cpu.A & g_cpu.X); /* SAX */
label_A7F0:;
    /* $A7F0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0003 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7F3:;
    /* $A7F3: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7F5:;
    /* $A7F5: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A7F6:;
    /* $A7F6: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xA7FB); return; }
label_A7F8:;
    /* $A7F8: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A7F9:;
    /* $A7F9: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x6B03 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A7FC:;
    /* $A7FC: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x8C03 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A7FF:;
    /* $A7FF: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0xA603 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A802:;
    /* $A802: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x00 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A804:;
    /* $A804: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x1D) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A806:;
    /* $A806: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A808:;
    /* $A808: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xC303 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A80B:;
    /* $A80B: 0C */ maybe_trigger_vblank(4); (void)nes_read(0xC800); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A80E:;
    /* $A80E: 0C */ maybe_trigger_vblank(4); (void)nes_read(0xD000); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A811:;
    /* $A811: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A816; }
label_A813:;
    /* $A813: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_A814:;
    /* $A814: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A819; }
label_A816:;
    /* $A816: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0541 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A819:;
    /* $A819: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_A81B:;
    /* $A81B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A81D:;
    /* $A81D: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A81F:;
    /* $A81F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x11 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A821:;
    /* $A821: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x09 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A823:;
    /* $A823: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A825:;
    /* $A825: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x030B; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A828:;
    /* $A828: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); call_by_address(0xA82D); return; }
label_A82A:;
    /* $A82A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A82B:;
    /* $A82B: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x0203 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A82E:;
    /* $A82E: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x0D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A830:;
    /* $A830: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x66 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A832:;
    /* $A832: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x34; g_cpu.S--; func_8001_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA832, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A835:;
    /* $A835: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x8401 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A838:;
    /* $A838: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3A; g_cpu.S--; func_8801_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA838, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A83B:;
    /* $A83B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3D; g_cpu.S--; func_8C01_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA83B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A83E:;
    /* $A83E: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0xA603 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A841:;
    /* $A841: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x43; g_cpu.S--; func_B001_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA841, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A844:;
    /* $A844: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A846:;
    /* $A846: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x030B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_A849:;
    /* $A849: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x20; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A84B:;
    /* $A84B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFD + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A84D:;
    /* $A84D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A84E:;
    /* $A84E: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A850:;
    /* $A850: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x31) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A852:;
    /* $A852: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x56); FLAG_NZ(g_cpu.A);
label_A854:;
    /* $A854: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x85 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A856:;
    /* $A856: 5A */ maybe_trigger_vblank(2); /* NOP */
label_A857:;
    /* $A857: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A859:;
    /* $A859: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x01FF + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A85C:;
    /* $A85C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA85C); return;
label_A85D:;
    /* $A85D: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xA862); return; }
label_A85F:;
    /* $A85F: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x1F); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A861:;
    /* $A861: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x08 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A863:;
    /* $A863: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x0C01 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A866:;
    /* $A866: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A868:;
    /* $A868: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A869:;
    /* $A869: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x03) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A86B:;
    /* $A86B: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x1F); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A86D:;
    /* $A86D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x48 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A86F:;
    /* $A86F: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x8401 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A872:;
    /* $A872: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x8801 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A875:;
    /* $A875: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0xD001 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A878:;
    /* $A878: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0xD401 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A87B:;
    /* $A87B: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0xD801 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A87E:;
    /* $A87E: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A883; }
label_A880:;
    /* $A880: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0551 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A883:;
    /* $A883: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x41; g_cpu.C=(g_cpu.Y>=0x41)?1:0; FLAG_NZ(r&0xFF); }
label_A885:;
    /* $A885: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xCA); FLAG_NZ(g_cpu.A);
label_A887:;
    /* $A887: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x06) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A889:;
    /* $A889: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x02FF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A88C:;
    /* $A88C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA88C); return;
label_A88D:;
    /* $A88D: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_A88E:;
    /* $A88E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A88F:;
    /* $A88F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x2D + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A891:;
    /* $A891: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A892:;
    /* $A892: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x2D; FLAG_NZ(g_cpu.A);
label_A894:;
    /* $A894: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A895:;
    /* $A895: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_A89B; }
label_A897:;
    /* $A897: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A898:;
    /* $A898: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A89A:;
    /* $A89A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A89B:;
    /* $A89B: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x14 + g_cpu.X) & 0xFF), g_cpu.A);
label_A89D:;
    /* $A89D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA89D); return;
label_A89E:;
    /* $A89E: 95 */ maybe_trigger_vblank(4); nes_write((0x15 + g_cpu.X) & 0xFF, g_cpu.A);
label_A8A0:;
    /* $A8A0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8A0); return;
label_A8A1:;
    /* $A8A1: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xA8D0); return; }
label_A8A3:;
    /* $A8A3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8A4:;
    /* $A8A4: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_A8A5:;
    /* $A8A5: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0xFD02); FLAG_NZ(g_cpu.A);
label_A8A8:;
    /* $A8A8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8A9:;
    /* $A8A9: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xA8AC); return; }
label_A8AB:;
    /* $A8AB: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xC7); FLAG_NZ(g_cpu.A);
label_A8AD:;
    /* $A8AD: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x85) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8AF:;
    /* $A8AF: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A8B0:;
    /* $A8B0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0000 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A8B3:;
    /* $A8B3: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A8B5:;
    /* $A8B5: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x15); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A8B7:;
    /* $A8B7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8B7); return;
label_A8B8:;
    /* $A8B8: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A8B9:;
    /* $A8B9: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A8BB:;
    /* $A8BB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A8BC:;
    /* $A8BC: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x00 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A8BE:;
    /* $A8BE: 97 */ maybe_trigger_vblank(4); nes_write((0x06 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_A8C0:;
    /* $A8C0: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xA0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A8C2:;
    /* $A8C2: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A8C4:;
    /* $A8C4: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x15); FLAG_NZ(g_cpu.X);
label_A8C6:;
    /* $A8C6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8C6); return;
label_A8C7:;
    /* $A8C7: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A8C8:;
    /* $A8C8: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x00 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A8CA:;
    /* $A8CA: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x030B); FLAG_NZ(g_cpu.X);
label_A8CD:;
    /* $A8CD: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x06 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_A8CF:;
    /* $A8CF: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xBA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A8D1:;
    /* $A8D1: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8D3:;
    /* $A8D3: C2 */ maybe_trigger_vblank(2); /* NOP */
label_A8D5:;
    /* $A8D5: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A8D7:;
    /* $A8D7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8D7); return;
label_A8D8:;
    /* $A8D8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8D9:;
    /* $A8D9: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8DB:;
    /* $A8DB: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8DC:;
    /* $A8DC: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0541 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A8DF:;
    /* $A8DF: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A8E0:;
    /* $A8E0: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x06 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A8E2:;
    /* $A8E2: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x11 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A8E4:;
    /* $A8E4: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xA4); FLAG_NZ(g_cpu.A);
label_A8E6:;
    /* $A8E6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0000 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A8E9:;
    /* $A8E9: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x00 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A8EB:;
    /* $A8EB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x0D + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A8ED:;
    /* $A8ED: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x09 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A8EF:;
    /* $A8EF: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x2A01; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8F2:;
    /* $A8F2: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x01 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A8F4:;
    /* $A8F4: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x22 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A8F6:;
    /* $A8F6: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x4D + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A8F8:;
    /* $A8F8: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x5001; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8FB:;
    /* $A8FB: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A8FD:;
    /* $A8FD: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_A8FE:;
    /* $A8FE: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A900:;
    /* $A900: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x010E); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A903:;
    /* $A903: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A905:;
    /* $A905: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA905); return;
label_A906:;
    /* $A906: 87 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A & g_cpu.X); /* SAX */
label_A908:;
    /* $A908: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A909:;
    /* $A909: 89 */ maybe_trigger_vblank(2); /* NOP */
label_A90B:;
    /* $A90B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA90B); return;
label_A90C:;
    /* $A90C: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xB102 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A90F:;
    /* $A90F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0001 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A912:;
    /* $A912: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0801; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A915:;
    /* $A915: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x4401; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A918:;
    /* $A918: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x8401; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A91B:;
    /* $A91B: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x9401; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A91E:;
    /* $A91E: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xB001; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A921:;
    /* $A921: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xB801; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A924:;
    /* $A924: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xFD01; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A927:;
    /* $A927: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x06) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A929:;
    /* $A929: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_A92A:;
    /* $A92A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0001 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A92D:;
    /* $A92D: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0201; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A930:;
    /* $A930: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_A931:;
    /* $A931: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x07 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A933:;
    /* $A933: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x01); FLAG_NZ(g_cpu.A);
label_A935:;
    /* $A935: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A936:;
    /* $A936: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1001; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A939:;
    /* $A939: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1201; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A93C:;
    /* $A93C: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_A93D:;
    /* $A93D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x17 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A93F:;
    /* $A93F: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x01); FLAG_NZ(g_cpu.A);
label_A941:;
    /* $A941: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A942:;
    /* $A942: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x5001; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A945:;
    /* $A945: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A947:;
    /* $A947: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x0203 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A94A:;
    /* $A94A: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x26 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A94C:;
    /* $A94C: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x78 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A94E:;
    /* $A94E: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A950:;
    /* $A950: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A952:;
    /* $A952: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x88 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A954:;
    /* $A954: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xC001; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A957:;
    /* $A957: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x01); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A959:;
    /* $A959: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0124); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A95C:;
    /* $A95C: D4 */ maybe_trigger_vblank(4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A95E:;
    /* $A95E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A95F:;
    /* $A95F: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA102 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A962:;
    /* $A962: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A963:;
    /* $A963: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x11) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A965:;
    /* $A965: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A966:;
    /* $A966: 52 */ maybe_trigger_vblank(2); /* ILLEGAL $52 — skip 1 */
label_A967:;
    /* $A967: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x03 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A969:;
    /* $A969: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A96A:;
    /* $A96A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0001 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A96D:;
    /* $A96D: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A96F:;
    /* $A96F: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A970:;
    /* $A970: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A972:;
    /* $A972: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xA998); return; }
label_A974:;
    /* $A974: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x50 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A976:;
    /* $A976: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A978:;
    /* $A978: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A97A:;
    /* $A97A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A97C:;
    /* $A97C: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A97E:;
    /* $A97E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A98E; }
label_A980:;
    /* $A980: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xCA + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A982:;
    /* $A982: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A984:;
    /* $A984: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_A985:;
    /* $A985: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xFD01; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A988:;
    /* $A988: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A989:;
    /* $A989: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A98B:;
    /* $A98B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A98C:;
    /* $A98C: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x11; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A98E:;
    /* $A98E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A98F:;
    /* $A98F: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_A992:;
    /* $A992: 5B */ maybe_trigger_vblank(7); { uint16_t a=(0x0231 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A995:;
    /* $A995: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_A997:;
    /* $A997: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A999:;
    /* $A999: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A99B:;
    /* $A99B: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A99C:;
    /* $A99C: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A99E:;
    /* $A99E: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x0124 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A9A1:;
    /* $A9A1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xA3; g_cpu.S--; if (!nes_dispatch_call(0x0124, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA9A1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A9A4:;
    /* $A9A4: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x0203 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A9A7:;
    /* $A9A7: 8C */ maybe_trigger_vblank(4); nes_write(0x0124, g_cpu.Y);
label_A9AA:;
    /* $A9AA: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_A9AB:;
    /* $A9AB: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9AD:;
    /* $A9AD: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x26); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A9AF:;
    /* $A9AF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A9B1:;
    /* $A9B1: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xD001; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9B4:;
    /* $A9B4: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xFD01; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9B7:;
    /* $A9B7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A9B8:;
    /* $A9B8: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0x51 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A9BA:;
    /* $A9BA: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A9BB:;
    /* $A9BB: 85 */ maybe_trigger_vblank(3); nes_write(0x41, g_cpu.A);
label_A9BD:;
    /* $A9BD: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A9BE:;
    /* $A9BE: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x31); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A9C0:;
    /* $A9C0: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xBA); FLAG_NZ(g_cpu.A);
label_A9C2:;
    /* $A9C2: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A9C4:;
    /* $A9C4: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A9C6:;
    /* $A9C6: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A9C8:;
    /* $A9C8: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0801; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9CB:;
    /* $A9CB: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x3001; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9CE:;
    /* $A9CE: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x3801; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9D1:;
    /* $A9D1: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xA701; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9D4:;
    /* $A9D4: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9D6:;
    /* $A9D6: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xA9FC); return; }
label_A9D8:;
    /* $A9D8: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xB6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A9DA:;
    /* $A9DA: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x01); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A9DC:;
    /* $A9DC: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0124 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_A9DF:;
    /* $A9DF: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x05); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A9E1:;
    /* $A9E1: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD4 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A9E3:;
    /* $A9E3: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A9E5:;
    /* $A9E5: DA */ maybe_trigger_vblank(2); /* NOP */
label_A9E6:;
    /* $A9E6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9E6); return;
label_A9E7:;
    /* $A9E7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A9E8:;
    /* $A9E8: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0707 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A9EB:;
    /* $A9EB: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x11); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A9ED:;
    /* $A9ED: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xAC); FLAG_NZ(g_cpu.A);
label_A9EF:;
    /* $A9EF: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A9F1:;
    /* $A9F1: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A9F2:;
    /* $A9F2: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x06) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9F4:;
    /* $A9F4: 7A */ maybe_trigger_vblank(2); /* NOP */
label_A9F5:;
    /* $A9F5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0001 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A9F8:;
    /* $A9F8: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0801; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9FB:;
    /* $A9FB: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x3001; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9FE:;
    /* $A9FE: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x3701; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA01:;
    /* $AA01: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x01); FLAG_NZ(g_cpu.A);
label_AA03:;
    /* $AA03: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AA04:;
    /* $AA04: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_AA05:;
    /* $AA05: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x4C + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA07:;
    /* $AA07: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_AA08:;
    /* $AA08: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x68 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA0A:;
    /* $AA0A: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x7801; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA0D:;
    /* $AA0D: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xA301; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA10:;
    /* $AA10: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA12:;
    /* $AA12: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_AA22; }
label_AA14:;
    /* $AA14: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xB8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA16:;
    /* $AA16: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xFD01; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA19:;
    /* $AA19: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x06 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA1B:;
    /* $AA1B: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x21 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AA1D:;
    /* $AA1D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x85 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AA1F:;
    /* $AA1F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0002 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AA22:;
    /* $AA22: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AA24:;
    /* $AA24: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AA25:;
    /* $AA25: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AA27:;
    /* $AA27: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x29 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AA29:;
    /* $AA29: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x73 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA2B:;
    /* $AA2B: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AA2C:;
    /* $AA2C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AA2D:;
    /* $AA2D: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_AA2F:;
    /* $AA2F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x9B + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA31:;
    /* $AA31: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AA32:;
    /* $AA32: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AA33:;
    /* $AA33: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x26; g_cpu.C=(g_cpu.Y>=0x26)?1:0; FLAG_NZ(r&0xFF); }
label_AA35:;
    /* $AA35: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA37:;
    /* $AA37: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA39:;
    /* $AA39: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xAA49); return; }
label_AA3B:;
    /* $AA3B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xD8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA3D:;
    /* $AA3D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA3D); return;
label_AA3E:;
    /* $AA3E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AA3F:;
    /* $AA3F: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x010E + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_AA42:;
    /* $AA42: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0305 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA45:;
    /* $AA45: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x8501 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AA48:;
    /* $AA48: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x11 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AA4A:;
    /* $AA4A: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x8B); FLAG_NZ(g_cpu.A);
label_AA4C:;
    /* $AA4C: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA4E:;
    /* $AA4E: 6E */ maybe_trigger_vblank(6); { uint16_t a=0x0747; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA51:;
    /* $AA51: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x8331 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_AA54:;
    /* $AA54: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AA55:;
    /* $AA55: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0001 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AA58:;
    /* $AA58: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0801; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA5B:;
    /* $AA5B: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x4001; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA5E:;
    /* $AA5E: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x00; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AA60:;
    /* $AA60: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AA61:;
    /* $AA61: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x00; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AA63:;
    /* $AA63: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_AA73; }
label_AA65:;
    /* $AA65: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x53 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA67:;
    /* $AA67: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xAA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x69; g_cpu.S--; if (!nes_dispatch_call(0x5801, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAA67, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AA6A:;
    /* $AA6A: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x5B01; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA6D:;
    /* $AA6D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xAA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x6F; g_cpu.S--; if (!nes_dispatch_call(0x6001, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAA6D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AA70:;
    /* $AA70: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x00; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AA72:;
    /* $AA72: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_AA73:;
    /* $AA73: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AA75:;
    /* $AA75: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(1); call_by_address(0xAA9E); return; }
label_AA77:;
    /* $AA77: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x78 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA79:;
    /* $AA79: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AA7B:;
    /* $AA7B: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AA7D:;
    /* $AA7D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA7D); return;
label_AA7E:;
    /* $AA7E: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AA7F:;
    /* $AA7F: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x00; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AA81:;
    /* $AA81: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_AAAA; }
label_AA83:;
    /* $AA83: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x98 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA85:;
    /* $AA85: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AA87:;
    /* $AA87: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x13; FLAG_NZ(g_cpu.Y);
label_AA89:;
    /* $AA89: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA89); return;
label_AA8A:;
    /* $AA8A: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AA8B:;
    /* $AA8B: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x00; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AA8D:;
    /* $AA8D: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_AA9D; }
label_AA8F:;
    /* $AA8F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xB8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA91:;
    /* $AA91: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xFD01; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA94:;
    /* $AA94: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA96:;
    /* $AA96: 4D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read(0x8511); FLAG_NZ(g_cpu.A);
label_AA99:;
    /* $AA99: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0x0521); nes_trace_indirect_jump(0xAA99, _jt); maybe_trigger_vblank(2); call_by_address_tail(_jt, -1); return; }
label_AA9D:;
    /* $AA9D: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x85) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AA9F:;
    /* $AA9F: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0x0541); FLAG_NZ(g_cpu.A);
label_AAA2:;
    /* $AAA2: 47 */ maybe_trigger_vblank(5); { uint16_t a=0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AAA4:;
    /* $AAA4: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AAA5:;
    /* $AAA5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAA5); return;
label_AAA6:;
    /* $AAA6: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AAA8:;
    /* $AAA8: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x27); FLAG_NZ(g_cpu.A);
label_AAAA:;
    /* $AAAA: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x0A + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AAAC:;
    /* $AAAC: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x2301; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AAAF:;
    /* $AAAF: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x01); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AAB1:;
    /* $AAB1: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AAB2:;
    /* $AAB2: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AAB4:;
    /* $AAB4: 52 */ maybe_trigger_vblank(2); /* ILLEGAL $52 — skip 1 */
label_AAB5:;
    /* $AAB5: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x01); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AAB7:;
    /* $AAB7: 59 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x0120 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AABA:;
    /* $AABA: 5A */ maybe_trigger_vblank(2); /* NOP */
label_AABB:;
    /* $AABB: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x6A01; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AABE:;
    /* $AABE: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x00; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AAC0:;
    /* $AAC0: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x010E + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AAC3:;
    /* $AAC3: 89 */ maybe_trigger_vblank(2); /* NOP */
label_AAC5:;
    /* $AAC5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAC5); return;
label_AAC6:;
    /* $AAC6: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_AAF0; }
label_AAC8:;
    /* $AAC8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AAC9:;
    /* $AAC9: 94 */ maybe_trigger_vblank(4); nes_write((0x06 + g_cpu.X) & 0xFF, g_cpu.Y);
label_AACB:;
    /* $AACB: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x98 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AACD:;
    /* $AACD: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xA801; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AAD0:;
    /* $AAD0: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AAD2:;
    /* $AAD2: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xAAE2); return; }
label_AAD4:;
    /* $AAD4: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xB8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AAD6:;
    /* $AAD6: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xFD01; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AAD9:;
    /* $AAD9: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x05) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AADB:;
    /* $AADB: 4F */ maybe_trigger_vblank(6); { uint16_t a=0x0541; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AADE:;
    /* $AADE: 6E */ maybe_trigger_vblank(6); { uint16_t a=0x0531; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AAE1:;
    /* $AAE1: 8E */ maybe_trigger_vblank(4); nes_write(0x0221, g_cpu.X);
label_AAE4:;
    /* $AAE4: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AAE5:;
    /* $AAE5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0001 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AAE8:;
    /* $AAE8: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0801; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AAEB:;
    /* $AAEB: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AAED:;
    /* $AAED: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xAAED; g_rti_bank = 1; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AAEE:;
    /* $AAEE: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x00; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AAF0:;
    /* $AAF0: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(2); call_by_address(0xAB00); return; }
label_AAF2:;
    /* $AAF2: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x56 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AAF4:;
    /* $AAF4: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xAA; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xF6; g_cpu.S--; if (!nes_dispatch_call(0x6001, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAAF4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AAF7:;
    /* $AAF7: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x00; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AAF9:;
    /* $AAF9: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_AAFA:;
    /* $AAFA: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x8000); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AAFD:;
    /* $AAFD: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AAFF:;
    /* $AAFF: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_AB01:;
    /* $AB01: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xD0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AB03:;
    /* $AB03: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB03); return;
label_AB04:;
    /* $AB04: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AB05:;
    /* $AB05: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_AB06:;
    /* $AB06: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB06); return;
label_AB07:;
    /* $AB07: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AB08:;
    /* $AB08: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0551 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AB0B:;
    /* $AB0B: 67 */ maybe_trigger_vblank(5); { uint16_t a=0x41; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AB0D:;
    /* $AB0D: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x7E); FLAG_NZ(g_cpu.A);
label_AB0F:;
    /* $AB0F: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AB11:;
    /* $AB11: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0x0331 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AB14:;
    /* $AB14: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x11; FLAG_NZ(g_cpu.A);
label_AB16:;
    /* $AB16: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AB17:;
    /* $AB17: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AB19:;
    /* $AB19: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AB1B:;
    /* $AB1B: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AB1D:;
    /* $AB1D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AB1E:;
    /* $AB1E: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB20:;
    /* $AB20: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x11; FLAG_NZ(g_cpu.A);
label_AB22:;
    /* $AB22: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x50 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AB24:;
    /* $AB24: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x02); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AB26:;
    /* $AB26: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AB28:;
    /* $AB28: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x82 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AB2A:;
    /* $AB2A: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0xB603 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AB2D:;
    /* $AB2D: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xB703 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB30:;
    /* $AB30: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xC203 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB33:;
    /* $AB33: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x03; FLAG_NZ(g_cpu.A);
label_AB35:;
    /* $AB35: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AB36:;
    /* $AB36: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xD003 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB39:;
    /* $AB39: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AB3E; }
label_AB3B:;
    /* $AB3B: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_AB3C:;
    /* $AB3C: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AB41; }
label_AB3E:;
    /* $AB3E: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xB002 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AB41:;
    /* $AB41: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x04) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB43:;
    /* $AB43: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_AB44:;
    /* $AB44: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x06) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB46:;
    /* $AB46: 27 */ maybe_trigger_vblank(5); { uint16_t a=0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AB48:;
    /* $AB48: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB48); return;
label_AB49:;
    /* $AB49: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB49); return;
label_AB4A:;
    /* $AB4A: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x0802); FLAG_NZ(g_cpu.A);
label_AB4D:;
    /* $AB4D: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x0F02); FLAG_NZ(g_cpu.A);
label_AB50:;
    /* $AB50: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AB51:;
    /* $AB51: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AB52:;
    /* $AB52: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x0203 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AB55:;
    /* $AB55: 87 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A & g_cpu.X); /* SAX */
label_AB57:;
    /* $AB57: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB57); return;
label_AB58:;
    /* $AB58: 8F */ maybe_trigger_vblank(4); nes_write(0x0228, g_cpu.A & g_cpu.X); /* SAX */
label_AB5B:;
    /* $AB5B: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_AB5C:;
    /* $AB5C: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x00 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AB5E:;
    /* $AB5E: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x26 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_AB60:;
    /* $AB60: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xD0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AB62:;
    /* $AB62: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0xD802); FLAG_NZ(g_cpu.A);
label_AB65:;
    /* $AB65: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0xFD02); FLAG_NZ(g_cpu.A);
label_AB68:;
    /* $AB68: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AB69:;
    /* $AB69: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AB6B:;
    /* $AB6B: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x23; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AB6D:;
    /* $AB6D: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x05) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB6F:;
    /* $AB6F: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x02FF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AB72:;
    /* $AB72: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB72); return;
label_AB73:;
    /* $AB73: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x0802); FLAG_NZ(g_cpu.A);
label_AB76:;
    /* $AB76: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0xC202); FLAG_NZ(g_cpu.A);
label_AB79:;
    /* $AB79: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AB7B:;
    /* $AB7B: C7 */ maybe_trigger_vblank(5); { uint16_t a=0x26; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_AB7D:;
    /* $AB7D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC9 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AB7F:;
    /* $AB7F: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AB81:;
    /* $AB81: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_ABB0; }
label_AB83:;
    /* $AB83: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AB84:;
    /* $AB84: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_AB85:;
    /* $AB85: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0xFD02); FLAG_NZ(g_cpu.A);
label_AB88:;
    /* $AB88: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x86 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AB8A:;
    /* $AB8A: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x51); FLAG_NZ(g_cpu.A);
label_AB8C:;
    /* $AB8C: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x2A; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AB8E:;
    /* $AB8E: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AB90:;
    /* $AB90: CB */ maybe_trigger_vblank(2); { uint8_t t=(uint8_t)(g_cpu.A & g_cpu.X); g_cpu.C=(t>=0xFF)?1:0; g_cpu.X=(t-0xFF)&0xFF; FLAG_NZ(g_cpu.X); }
label_AB92:;
    /* $AB92: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB92); return;
label_AB93:;
    /* $AB93: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB93); return;
label_AB94:;
    /* $AB94: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB96:;
    /* $AB96: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AB97:;
    /* $AB97: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB99:;
    /* $AB99: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_AB9A:;
    /* $AB9A: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AB9C:;
    /* $AB9C: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_AB9D:;
    /* $AB9D: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x00 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AB9F:;
    /* $AB9F: 95 */ maybe_trigger_vblank(4); nes_write((0x15 + g_cpu.X) & 0xFF, g_cpu.A);
label_ABA1:;
    /* $ABA1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABA1); return;
label_ABA2:;
    /* $ABA2: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0B; FLAG_NZ(g_cpu.Y);
label_ABA4:;
    /* $ABA4: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xAE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_ABA6:;
    /* $ABA6: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_ABA8:;
    /* $ABA8: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_ABAB:;
    /* $ABAB: C2 */ maybe_trigger_vblank(2); /* NOP */
label_ABAD:;
    /* $ABAD: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_ABAF:;
    /* $ABAF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABAF); return;
label_ABB0:;
    /* $ABB0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ABB1:;
    /* $ABB1: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_ABB3:;
    /* $ABB3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ABB4:;
    /* $ABB4: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0501 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_ABB7:;
    /* $ABB7: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_ABB8:;
    /* $ABB8: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x05) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ABBA:;
    /* $ABBA: 85 */ maybe_trigger_vblank(3); nes_write(0x31, g_cpu.A);
label_ABBC:;
    /* $ABBC: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x26; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_ABBE:;
    /* $ABBE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0002 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ABC1:;
    /* $ABC1: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_ABC3; }
label_ABC3:;
    /* $ABC3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x1A + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ABC5:;
    /* $ABC5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ABC6:;
    /* $ABC6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ABC7:;
    /* $ABC7: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_ABC9; }
label_ABC9:;
    /* $ABC9: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x1A + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_ABCB:;
    /* $ABCB: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ABCC:;
    /* $ABCC: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x1C); FLAG_NZ(g_cpu.A);
label_ABCE:;
    /* $ABCE: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ABCF:;
    /* $ABCF: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_ABD0:;
    /* $ABD0: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x0F02 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_ABD3:;
    /* $ABD3: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_ABD5; }
label_ABD5:;
    /* $ABD5: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(2); goto label_AC07; }
label_ABD7:;
    /* $ABD7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABD7); return;
label_ABD8:;
    /* $ABD8: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x30 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ABDA:;
    /* $ABDA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABDA); return;
label_ABDB:;
    /* $ABDB: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x0030 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_ABDE:;
    /* $ABDE: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0218); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_ABE1:;
    /* $ABE1: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x18 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_ABE3:;
    /* $ABE3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ABE4:;
    /* $ABE4: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x19 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ABE6:;
    /* $ABE6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ABE7:;
    /* $ABE7: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x2F); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ABE9:;
    /* $ABE9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ABEA:;
    /* $ABEA: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x18); FLAG_NZ(g_cpu.A);
label_ABEC:;
    /* $ABEC: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ABED:;
    /* $ABED: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x2F; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_ABEF:;
    /* $ABEF: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ABF0:;
    /* $ABF0: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_ABF6; }
label_ABF2:;
    /* $ABF2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ABF3:;
    /* $ABF3: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x19) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_ABF5:;
    /* $ABF5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ABF6:;
    /* $ABF6: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x0204 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_ABF9:;
    /* $ABF9: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x1C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ABFB:;
    /* $ABFB: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ABFC:;
    /* $ABFC: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x1C); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_ABFE:;
    /* $ABFE: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ABFF:;
    /* $ABFF: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_AC00:;
    /* $AC00: 2F */ maybe_trigger_vblank(6); { uint16_t a=0x8002; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AC03:;
    /* $AC03: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x00 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AC05:;
    /* $AC05: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x19 + g_cpu.X) & 0xFF), g_cpu.A);
label_AC07:;
    /* $AC07: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AC08:;
    /* $AC08: 8D */ maybe_trigger_vblank(4); nes_write(0x0219, g_cpu.A);
label_AC0B:;
    /* $AC0B: 9C */ maybe_trigger_vblank(5); /* ILLEGAL $9C — skip 3 */
label_AC0E:;
    /* $AC0E: 9F */ maybe_trigger_vblank(5); /* ILLEGAL $9F — skip 3 */
label_AC11:;
    /* $AC11: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x30; g_cpu.C=(g_cpu.Y>=0x30)?1:0; FLAG_NZ(r&0xFF); }
label_AC13:;
    /* $AC13: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC13); return;
label_AC14:;
    /* $AC14: D1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_AC16:;
    /* $AC16: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AC17:;
    /* $AC17: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_AC19:;
    /* $AC19: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AC1A:;
    /* $AC1A: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x0030 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_AC1D:;
    /* $AC1D: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA002 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AC20:;
    /* $AC20: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AC21:;
    /* $AC21: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x06) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AC23:;
    /* $AC23: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0000 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AC26:;
    /* $AC26: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AC28:;
    /* $AC28: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x16; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AC2A:;
    /* $AC2A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC2A); return;
label_AC2B:;
    /* $AC2B: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0016; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AC2E:;
    /* $AC2E: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x0015 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AC31:;
    /* $AC31: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xAC; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x33; g_cpu.S--; if (!nes_dispatch_call(0x0015, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAC31, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AC34:;
    /* $AC34: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xAC34; g_rti_bank = 1; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AC35:;
    /* $AC35: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_AC37; }
label_AC37:;
    /* $AC37: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x0204 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AC3A:;
    /* $AC3A: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AC3C:;
    /* $AC3C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC3C); return;
label_AC3D:;
    /* $AC3D: 87 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A & g_cpu.X); /* SAX */
label_AC3F:;
    /* $AC3F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AC40:;
    /* $AC40: 89 */ maybe_trigger_vblank(2); /* NOP */
label_AC42:;
    /* $AC42: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC42); return;
label_AC43:;
    /* $AC43: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x15; FLAG_NZ(g_cpu.Y);
label_AC45:;
    /* $AC45: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC45); return;
label_AC46:;
    /* $AC46: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0x0015); FLAG_NZ(g_cpu.A);
label_AC49:;
    /* $AC49: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA102 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AC4C:;
    /* $AC4C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0003 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AC4F:;
    /* $AC4F: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AC51:;
    /* $AC51: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AC52:;
    /* $AC52: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AC54:;
    /* $AC54: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x031E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AC57:;
    /* $AC57: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x0204 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AC5A:;
    /* $AC5A: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_AC5C:;
    /* $AC5C: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x9E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AC5E:;
    /* $AC5E: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AC60:;
    /* $AC60: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xAC72); return; }
label_AC62:;
    /* $AC62: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AC64:;
    /* $AC64: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AC69; }
label_AC66:;
    /* $AC66: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA102 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AC69:;
    /* $AC69: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0003 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AC6C:;
    /* $AC6C: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AC6E:;
    /* $AC6E: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x030B; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AC71:;
    /* $AC71: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); call_by_address(0xAC76); return; }
label_AC73:;
    /* $AC73: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AC74:;
    /* $AC74: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0x030B + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_AC77:;
    /* $AC77: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AC79:;
    /* $AC79: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xAE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AC7B:;
    /* $AC7B: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AC7D:;
    /* $AC7D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xAC8A); return; }
label_AC7F:;
    /* $AC7F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xFD + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AC81:;
    /* $AC81: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AC82:;
    /* $AC82: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AC84:;
    /* $AC84: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AC85:;
    /* $AC85: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AC87:;
    /* $AC87: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AC89:;
    /* $AC89: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AC8B:;
    /* $AC8B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AC8D:;
    /* $AC8D: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AC8E:;
    /* $AC8E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC8E); return;
label_AC8F:;
    /* $AC8F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC8F); return;
label_AC90:;
    /* $AC90: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC90); return;
label_AC91:;
    /* $AC91: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC91); return;
label_AC92:;
    /* $AC92: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC92); return;
label_AC93:;
    /* $AC93: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC93); return;
label_AC94:;
    /* $AC94: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC94); return;
label_AC95:;
    /* $AC95: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC95); return;
label_AC96:;
    /* $AC96: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0208 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AC99:;
    /* $AC99: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AC9A:;
    /* $AC9A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AC9B:;
    /* $AC9B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AC9C:;
    /* $AC9C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AC9D:;
    /* $AC9D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AC9E:;
    /* $AC9E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AC9F:;
    /* $AC9F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ACA0:;
    /* $ACA0: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x28 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACA2:;
    /* $ACA2: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x28 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACA4:;
    /* $ACA4: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x28 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACA6:;
    /* $ACA6: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_ACA7:;
    /* $ACA7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ACA8:;
    /* $ACA8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ACA9:;
    /* $ACA9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ACAA:;
    /* $ACAA: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ACAB:;
    /* $ACAB: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ACAC:;
    /* $ACAC: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ACAD:;
    /* $ACAD: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ACAE:;
    /* $ACAE: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ACAF:;
    /* $ACAF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0402 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ACB2:;
    /* $ACB2: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x02); FLAG_NZ(g_cpu.A);
label_ACB4:;
    /* $ACB4: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ACB6:;
    /* $ACB6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ACB7:;
    /* $ACB7: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ACB9:;
    /* $ACB9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ACBA:;
    /* $ACBA: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ACBC:;
    /* $ACBC: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ACBD:;
    /* $ACBD: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ACBF:;
    /* $ACBF: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ACC0:;
    /* $ACC0: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ACC2:;
    /* $ACC2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ACC3:;
    /* $ACC3: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ACC5:;
    /* $ACC5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ACC6:;
    /* $ACC6: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ACC8:;
    /* $ACC8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0601 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ACCB:;
    /* $ACCB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x06 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACCD:;
    /* $ACCD: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x06 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACCF:;
    /* $ACCF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0701 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ACD2:;
    /* $ACD2: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x07 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACD4:;
    /* $ACD4: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x07 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACD6:;
    /* $ACD6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x3102 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ACD9:;
    /* $ACD9: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_ACDA:;
    /* $ACDA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0801 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ACDD:;
    /* $ACDD: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x33 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACDF:;
    /* $ACDF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x33 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACE1:;
    /* $ACE1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x33 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACE3:;
    /* $ACE3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x33 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACE5:;
    /* $ACE5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2801 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ACE8:;
    /* $ACE8: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x08 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACEA:;
    /* $ACEA: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x1F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACEC:;
    /* $ACEC: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x17 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACEE:;
    /* $ACEE: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x17 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACF0:;
    /* $ACF0: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x1F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACF2:;
    /* $ACF2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0E02 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ACF5:;
    /* $ACF5: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x03) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ACF7:;
    /* $ACF7: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x2212; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_ACFA:;
    /* $ACFA: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x10 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_ACFC:;
    /* $ACFC: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x14) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_ACFE:;
    /* $ACFE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0804 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD01:;
    /* $AD01: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x35 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AD03:;
    /* $AD03: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD04:;
    /* $AD04: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0803 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD07:;
    /* $AD07: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x08 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AD09:;
    /* $AD09: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x3602 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD0C:;
    /* $AD0C: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD0E:;
    /* $AD0E: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x0208 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD11:;
    /* $AD11: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD12:;
    /* $AD12: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD14:;
    /* $AD14: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD16:;
    /* $AD16: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AD17:;
    /* $AD17: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD18:;
    /* $AD18: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD19:;
    /* $AD19: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2002 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD1C:;
    /* $AD1C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xAD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1E; g_cpu.S--; if (!nes_dispatch_call(0x08FF, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAD1C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AD1F:;
    /* $AD1F: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD20:;
    /* $AD20: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x3508 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD23:;
    /* $AD23: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD24:;
    /* $AD24: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x1C + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AD26:;
    /* $AD26: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD27:;
    /* $AD27: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x1E08 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD2A:;
    /* $AD2A: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1C1C + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD2D:;
    /* $AD2D: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1E1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD30:;
    /* $AD30: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1E08 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD33:;
    /* $AD33: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1E1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD36:;
    /* $AD36: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1E1E + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD39:;
    /* $AD39: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1C08 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD3C:;
    /* $AD3C: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1E1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD3F:;
    /* $AD3F: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1C1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD42:;
    /* $AD42: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1E08 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD45:;
    /* $AD45: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1C1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD48:;
    /* $AD48: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1C1C + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD4B:;
    /* $AD4B: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x08FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD4E:;
    /* $AD4E: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x2E2E; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD51:;
    /* $AD51: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x2E2E; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD54:;
    /* $AD54: 2E */ maybe_trigger_vblank(6); { uint16_t a=0xFF2E; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD57:;
    /* $AD57: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD58:;
    /* $AD58: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD59:;
    /* $AD59: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AD5B:;
    /* $AD5B: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AD5D:;
    /* $AD5D: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD5E:;
    /* $AD5E: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AD60:;
    /* $AD60: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD61:;
    /* $AD61: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD62:;
    /* $AD62: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD63:;
    /* $AD63: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x081C + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD66:;
    /* $AD66: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD67:;
    /* $AD67: 1C */ maybe_trigger_vblank(4); (void)nes_read((0xFF08 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD6A:;
    /* $AD6A: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD6B:;
    /* $AD6B: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x0808 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD6E:;
    /* $AD6E: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD6F:;
    /* $AD6F: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD70:;
    /* $AD70: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AD71:;
    /* $AD71: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD72:;
    /* $AD72: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x0808 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD75:;
    /* $AD75: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AD76:;
    /* $AD76: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0A; FLAG_NZ(g_cpu.A);
label_AD78:;
    /* $AD78: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AD79:;
    /* $AD79: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AD7A:;
    /* $AD7A: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD7B:;
    /* $AD7B: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD7C:;
    /* $AD7C: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x08 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD7E:;
    /* $AD7E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2C06 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD81:;
    /* $AD81: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2C); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AD84:;
    /* $AD84: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x2C + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AD86:;
    /* $AD86: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x2D; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD88:;
    /* $AD88: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x2D2D); FLAG_NZ(g_cpu.A);
label_AD8B:;
    /* $AD8B: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x2D + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD8D:;
    /* $AD8D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2B08 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD90:;
    /* $AD90: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AD92:;
    /* $AD92: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AD94:;
    /* $AD94: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AD96:;
    /* $AD96: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0xFF; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AD98:;
    /* $AD98: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD99:;
    /* $AD99: 1A */ maybe_trigger_vblank(2); /* NOP */
label_AD9A:;
    /* $AD9A: 1A */ maybe_trigger_vblank(2); /* NOP */
label_AD9B:;
    /* $AD9B: 1A */ maybe_trigger_vblank(2); /* NOP */
label_AD9C:;
    /* $AD9C: 1A */ maybe_trigger_vblank(2); /* NOP */
label_AD9D:;
    /* $AD9D: 1A */ maybe_trigger_vblank(2); /* NOP */
label_AD9E:;
    /* $AD9E: 1A */ maybe_trigger_vblank(2); /* NOP */
label_AD9F:;
    /* $AD9F: 1A */ maybe_trigger_vblank(2); /* NOP */
label_ADA0:;
    /* $ADA0: 1A */ maybe_trigger_vblank(2); /* NOP */
label_ADA1:;
    /* $ADA1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2001 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ADA4:;
    /* $ADA4: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x20 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ADA6:;
    /* $ADA6: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x17 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ADA8:;
    /* $ADA8: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x17 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ADAA:;
    /* $ADAA: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x20 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ADAC:;
    /* $ADAC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2007 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ADAF:;
    /* $ADAF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xAD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB1; g_cpu.S--; if (!nes_dispatch_call(0x2020, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xADAF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_ADB2:;
    /* $ADB2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xAD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xB4; g_cpu.S--; if (!nes_dispatch_call(0x2020, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xADB2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_ADB5:;
    /* $ADB5: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x20; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_ADB7:;
    /* $ADB7: 1A */ maybe_trigger_vblank(2); /* NOP */
label_ADB8:;
    /* $ADB8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xAD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBA; g_cpu.S--; if (!nes_dispatch_call(0x201F, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xADB8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_ADBB:;
    /* $ADBB: 1A */ maybe_trigger_vblank(2); /* NOP */
label_ADBC:;
    /* $ADBC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xAD; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xBE; g_cpu.S--; if (!nes_dispatch_call(0x08FF, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xADBC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_ADBF:;
    /* $ADBF: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_ADC2:;
    /* $ADC2: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_ADC5:;
    /* $ADC5: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x080D); FLAG_NZ(g_cpu.A);
label_ADC8:;
    /* $ADC8: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_ADCB:;
    /* $ADCB: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_ADCE:;
    /* $ADCE: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x080D); FLAG_NZ(g_cpu.A);
label_ADD1:;
    /* $ADD1: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_ADD4:;
    /* $ADD4: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_ADD7:;
    /* $ADD7: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x080D); FLAG_NZ(g_cpu.A);
label_ADDA:;
    /* $ADDA: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_ADDD:;
    /* $ADDD: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_ADE0:;
    /* $ADE0: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0xFF0D); FLAG_NZ(g_cpu.A);
label_ADE3:;
    /* $ADE3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x0D + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ADE5:;
    /* $ADE5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0D04 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ADE8:;
    /* $ADE8: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_ADEB:;
    /* $ADEB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0D02 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ADEE:;
    /* $ADEE: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D02); FLAG_NZ(g_cpu.A);
label_ADF1:;
    /* $ADF1: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D02); FLAG_NZ(g_cpu.A);
label_ADF4:;
    /* $ADF4: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D02); FLAG_NZ(g_cpu.A);
label_ADF7:;
    /* $ADF7: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x08FF); FLAG_NZ(g_cpu.A);
label_ADFA:;
    /* $ADFA: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_ADFD:;
    /* $ADFD: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_AE00:;
    /* $AE00: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x050D); FLAG_NZ(g_cpu.A);
label_AE03:;
    /* $AE03: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x30; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE05:;
    /* $AE05: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x300D); FLAG_NZ(g_cpu.A);
label_AE08:;
    /* $AE08: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0D08 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE0B:;
    /* $AE0B: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_AE0E:;
    /* $AE0E: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D0D); FLAG_NZ(g_cpu.A);
label_AE11:;
    /* $AE11: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x01FF); FLAG_NZ(g_cpu.A);
label_AE14:;
    /* $AE14: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x1F01); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE17:;
    /* $AE17: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0804 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE1A:;
    /* $AE1A: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x08 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AE1C:;
    /* $AE1C: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AE1D:;
    /* $AE1D: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x08); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE1F:;
    /* $AE1F: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x3408 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE22:;
    /* $AE22: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x34); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE24:;
    /* $AE24: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AE25:;
    /* $AE25: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AE26:;
    /* $AE26: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AE27:;
    /* $AE27: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x08); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE29:;
    /* $AE29: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AE2A:;
    /* $AE2A: 1C */ maybe_trigger_vblank(4); (void)nes_read((0xFF08 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE2D:;
    /* $AE2D: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x1D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE2F:;
    /* $AE2F: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE32:;
    /* $AE32: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x1D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE34:;
    /* $AE34: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1D1C + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE37:;
    /* $AE37: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x1C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE39:;
    /* $AE39: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1C1C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE3C:;
    /* $AE3C: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x1D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE3E:;
    /* $AE3E: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1D1D + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE41:;
    /* $AE41: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x3304 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE44:;
    /* $AE44: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x33) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE46:;
    /* $AE46: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE48:;
    /* $AE48: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x22 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE4A:;
    /* $AE4A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2803 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE4D:;
    /* $AE4D: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0308; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE50:;
    /* $AE50: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x08 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE52:;
    /* $AE52: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3803 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE55:;
    /* $AE55: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x0339 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE58:;
    /* $AE58: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AE59:;
    /* $AE59: 3A */ maybe_trigger_vblank(2); /* NOP */
label_AE5A:;
    /* $AE5A: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AE5B:;
    /* $AE5B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AE5C:;
    /* $AE5C: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0xFF3C + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE5F:;
    /* $AE5F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x1E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AE61:;
    /* $AE61: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x031C + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE64:;
    /* $AE64: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x1E08 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE67:;
    /* $AE67: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x0A + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AE69:;
    /* $AE69: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x1E; FLAG_NZ(g_cpu.A);
label_AE6B:;
    /* $AE6B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x3D + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AE6D:;
    /* $AE6D: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0A; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AE6F:;
    /* $AE6F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x1E04 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE72:;
    /* $AE72: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1E1C + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE75:;
    /* $AE75: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x1E); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE77:;
    /* $AE77: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1E1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE7A:;
    /* $AE7A: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x1C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE7C:;
    /* $AE7C: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1E1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE7F:;
    /* $AE7F: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x1E); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE81:;
    /* $AE81: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1E1C + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE84:;
    /* $AE84: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2301 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE87:;
    /* $AE87: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x23 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE89:;
    /* $AE89: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x23 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE8B:;
    /* $AE8B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x23 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE8D:;
    /* $AE8D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x3E02 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE90:;
    /* $AE90: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x08FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE93:;
    /* $AE93: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1E1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE96:;
    /* $AE96: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1E1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE99:;
    /* $AE99: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x081E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE9C:;
    /* $AE9C: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1E1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE9F:;
    /* $AE9F: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1E1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AEA2:;
    /* $AEA2: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0xFF1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AEA5:;
    /* $AEA5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x1F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AEA7:;
    /* $AEA7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x1F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AEA9:;
    /* $AEA9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x1F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AEAB:;
    /* $AEAB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x1F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AEAD:;
    /* $AEAD: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x1F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AEAF:;
    /* $AEAF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x3E01 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AEB2:;
    /* $AEB2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2E04 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AEB5:;
    /* $AEB5: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_AEB6:;
    /* $AEB6: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x042E; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AEB9:;
    /* $AEB9: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x2E2E; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AEBC:;
    /* $AEBC: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_AEBD:;
    /* $AEBD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2B08 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AEC0:;
    /* $AEC0: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AEC2:;
    /* $AEC2: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AEC4:;
    /* $AEC4: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AEC6:;
    /* $AEC6: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0xFF; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AEC8:;
    /* $AEC8: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x1B + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AECA:;
    /* $AECA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x1F08 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AECD:;
    /* $AECD: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x1F1F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AED0:;
    /* $AED0: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x1F1F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AED3:;
    /* $AED3: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x1F08 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AED6:;
    /* $AED6: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x1F1F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AED9:;
    /* $AED9: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x1F1F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AEDC:;
    /* $AEDC: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x01FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AEDF:;
    /* $AEDF: 2F */ maybe_trigger_vblank(6); { uint16_t a=0x01FF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AEE2:;
    /* $AEE2: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x01FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AEE5:;
    /* $AEE5: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AEE7:;
    /* $AEE7: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AEE9:;
    /* $AEE9: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AEEB:;
    /* $AEEB: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AEED:;
    /* $AEED: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x24 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AEEF:;
    /* $AEEF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF1F1 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AEF2:;
    /* $AEF2: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xF1) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AEF4:;
    /* $AEF4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF0FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AEF7:;
    /* $AEF7: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xAF5D); return; }
label_AEF9:;
    /* $AEF9: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x64); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEFB:;
    /* $AEFB: 64 */ maybe_trigger_vblank(3); (void)nes_read(0xD5); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEFD:;
    /* $AEFD: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0xCB + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AEFF:;
    /* $AEFF: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xFFA4); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_AF02:;
    /* $AF02: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xFF); FLAG_NZ(g_cpu.Y);
label_AF04:;
    /* $AF04: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFA5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF07:;
    /* $AF07: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA0); FLAG_NZ(g_cpu.A);
label_AF09:;
    /* $AF09: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_AF0B:;
    /* $AF0B: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA1; FLAG_NZ(g_cpu.Y);
label_AF0D:;
    /* $AF0D: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xA1 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AF0F:;
    /* $AF0F: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AF11:;
    /* $AF11: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AF13:;
    /* $AF13: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x0B + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF15:;
    /* $AF15: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAF15); return;
label_AF16:;
    /* $AF16: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x030B + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF19:;
    /* $AF19: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AF1A:;
    /* $AF1A: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AF1B:;
    /* $AF1B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0908 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF1E:;
    /* $AF1E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AF1F:;
    /* $AF1F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x0E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF21:;
    /* $AF21: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x1110; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF24:;
    /* $AF24: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_AF25:;
    /* $AF25: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x14) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF27:;
    /* $AF27: 0C */ maybe_trigger_vblank(4); (void)nes_read(0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF2A:;
    /* $AF2A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF30 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF2D:;
    /* $AF2D: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AF2F:;
    /* $AF2F: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AF31:;
    /* $AF31: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3DFF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF34:;
    /* $AF34: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x31FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF37:;
    /* $AF37: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_AF38:;
    /* $AF38: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x35 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF3A:;
    /* $AF3A: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x38 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AF3C:;
    /* $AF3C: 3A */ maybe_trigger_vblank(2); /* NOP */
label_AF3D:;
    /* $AF3D: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0x3F3E + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AF40:;
    /* $AF40: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x4041 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF43:;
    /* $AF43: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_AF44:;
    /* $AF44: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x43FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF47:;
    /* $AF47: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x44 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AF49:;
    /* $AF49: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x44); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF4B:;
    /* $AF4B: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x45); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF4D:;
    /* $AF4D: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x45; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_AF4F:;
    /* $AF4F: 46 */ maybe_trigger_vblank(5); { uint16_t a=0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_AF51:;
    /* $AF51: 47 */ maybe_trigger_vblank(5); { uint16_t a=0x47; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AF53:;
    /* $AF53: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AF54:;
    /* $AF54: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AF55:;
    /* $AF55: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x4847 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF58:;
    /* $AF58: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AF59:;
    /* $AF59: 47 */ maybe_trigger_vblank(5); { uint16_t a=0x47; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AF5B:;
    /* $AF5B: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AF5C:;
    /* $AF5C: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x49; FLAG_NZ(g_cpu.A);
label_AF5E:;
    /* $AF5E: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AF5F:;
    /* $AF5F: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AF60:;
    /* $AF60: 4B */ maybe_trigger_vblank(2); g_cpu.A &= 0x4C; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_AF62:;
    /* $AF62: 4D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read(0x5150); FLAG_NZ(g_cpu.A);
label_AF65:;
    /* $AF65: 52 */ maybe_trigger_vblank(2); /* ILLEGAL $52 — skip 1 */
label_AF66:;
    /* $AF66: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x54) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AF68:;
    /* $AF68: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x56 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AF6A:;
    /* $AF6A: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0x58 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AF6C:;
    /* $AF6C: 59 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x595B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF6F:;
    /* $AF6F: 5B */ maybe_trigger_vblank(7); { uint16_t a=(0x5D5C + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AF72:;
    /* $AF72: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0x4F5F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_AF75:;
    /* $AF75: 4F */ maybe_trigger_vblank(6); { uint16_t a=0x4F4F; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AF78:;
    /* $AF78: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AF79:;
    /* $AF79: 89 */ maybe_trigger_vblank(2); /* NOP */
label_AF7B:;
    /* $AF7B: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_AF7D:;
    /* $AF7D: 85 */ maybe_trigger_vblank(3); nes_write(0x86, g_cpu.A);
label_AF7F:;
    /* $AF7F: 87 */ maybe_trigger_vblank(3); nes_write(0x8C, g_cpu.A & g_cpu.X); /* SAX */
label_AF81:;
    /* $AF81: 8D */ maybe_trigger_vblank(4); nes_write(0x8F8E, g_cpu.A);
label_AF84:;
    /* $AF84: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF87:;
    /* $AF87: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF8A:;
    /* $AF8A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF8D:;
    /* $AF8D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF90:;
    /* $AF90: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF93:;
    /* $AF93: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xB1B0 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AF96:;
    /* $AF96: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_AF97:;
    /* $AF97: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0xB4) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF99:;
    /* $AF99: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AF9B:;
    /* $AF9B: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xB8 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_AF9D:;
    /* $AF9D: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_AF9E:;
    /* $AF9E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xFFB9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AFA1:;
    /* $AFA1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBABA + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AFA4:;
    /* $AFA4: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_AFA7:;
    /* $AFA7: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_AFAA:;
    /* $AFAA: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xCA; g_cpu.C=(g_cpu.A>=0xCA)?1:0; FLAG_NZ(r&0xFF); }
label_AFAC:;
    /* $AFAC: 94 */ maybe_trigger_vblank(4); nes_write((0x95 + g_cpu.X) & 0xFF, g_cpu.Y);
label_AFAE:;
    /* $AFAE: 96 */ maybe_trigger_vblank(4); nes_write((0x97 + g_cpu.Y) & 0xFF, g_cpu.X);
label_AFB0:;
    /* $AFB0: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0xFFFF); FLAG_NZ(g_cpu.A);
label_AFB3:;
    /* $AFB3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AFB6:;
    /* $AFB6: 59 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF5A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AFB9:;
    /* $AFB9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x5B5A + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AFBC:;
    /* $AFBC: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AFBE:;
    /* $AFBE: 82 */ maybe_trigger_vblank(2); /* NOP */
label_AFC0:;
    /* $AFC0: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AFC2:;
    /* $AFC2: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AFC4:;
    /* $AFC4: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AFC6:;
    /* $AFC6: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x07; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AFC8:;
    /* $AFC8: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AFC9:;
    /* $AFC9: 61 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x62 + g_cpu.X) & 0xFF)); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AFCB:;
    /* $AFCB: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AFCD:;
    /* $AFCD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAFCD); return;
label_AFCE:;
    /* $AFCE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAFCE); return;
label_AFCF:;
    /* $AFCF: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AFD0:;
    /* $AFD0: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0xBE; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AFD2:;
    /* $AFD2: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xBFBD + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_AFD5:;
    /* $AFD5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AFD7:;
    /* $AFD7: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AFD9:;
    /* $AFD9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AFDB:;
    /* $AFDB: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xFF + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AFDD:;
    /* $AFDD: C1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xFF + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_AFDF:;
    /* $AFDF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x01C2 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AFE2:;
    /* $AFE2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x30FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AFE5:;
    /* $AFE5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAFE5); return;
label_AFE6:;
    /* $AFE6: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xCDBD + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_AFE9:;
    /* $AFE9: CE */ maybe_trigger_vblank(6); { uint16_t a=0xD0CF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AFEC:;
    /* $AFEC: D1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xD2) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_AFEE:;
    /* $AFEE: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xD4) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_AFF0:;
    /* $AFF0: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xAF83); return; }
label_AFF2:;
    /* $AFF2: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_AFF3:;
    /* $AFF3: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_AFF5:;
    /* $AFF5: 85 */ maybe_trigger_vblank(3); nes_write(0x72, g_cpu.A);
label_AFF7:;
    /* $AFF7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_AFF9:;
    /* $AFF9: 85 */ maybe_trigger_vblank(3); nes_write(0x73, g_cpu.A);
label_AFFB:;
    /* $AFFB: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AFFC:;
    /* $AFFC: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x72; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AFFE:;
    /* $AFFE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B017; }
label_B000:;
    /* $B000: C2 */ maybe_trigger_vblank(2); /* NOP */
label_B002:;
    /* $B002: 2E */ maybe_trigger_vblank(6); { uint16_t a=0xFF30; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B005:;
    /* $B005: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB3 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B007:;
    /* $B007: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x3034; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B00A:;
    /* $B00A: 3A */ maybe_trigger_vblank(2); /* NOP */
label_B00B:;
    /* $B00B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2EB4 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B00E:;
    /* $B00E: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x30) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B010:;
    /* $B010: 34 */ maybe_trigger_vblank(4); (void)nes_read((0xC3 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B012:;
    /* $B012: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x38 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_B014:;
    /* $B014: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x2630 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B017:;
    /* $B017: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(2); call_by_address(0xAFD4); return; }
label_B019:;
    /* $B019: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B01A:;
    /* $B01A: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x3A) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B01C:;
    /* $B01C: 34 */ maybe_trigger_vblank(4); (void)nes_read((0xFF + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B01E:;
    /* $B01E: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x38 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_B020:;
    /* $B020: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_B021:;
    /* $B021: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B022:;
    /* $B022: 3A */ maybe_trigger_vblank(2); /* NOP */
label_B023:;
    /* $B023: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xB04F); return; }
label_B025:;
    /* $B025: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x2C30 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B028:;
    /* $B028: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AFE5;
    }
label_B02A:;
    /* $B02A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B02B:;
    /* $B02B: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B02C:;
    /* $B02C: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x3A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B02E:;
    /* $B02E: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x30) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B030:;
    /* $B030: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B031:;
    /* $B031: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0x2A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B033:;
    /* $B033: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_B034:;
    /* $B034: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x2C18 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B037:;
    /* $B037: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B038:;
    /* $B038: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B03B:;
    /* $B03B: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x2C22 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B03E:;
    /* $B03E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x2218 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B041:;
    /* $B041: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B042:;
    /* $B042: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B045:;
    /* $B045: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x262A; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B048:;
    /* $B048: 34 */ maybe_trigger_vblank(4); (void)nes_read((0xB2 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B04A:;
    /* $B04A: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0x3A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B04C:;
    /* $B04C: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_B04D:;
    /* $B04D: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x2226 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B050:;
    /* $B050: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x02BB + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B053:;
    /* $B053: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B054:;
    /* $B054: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_B055:;
    /* $B055: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xB926); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_B058:;
    /* $B058: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_B059:;
    /* $B059: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x34); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B05B:;
    /* $B05B: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B05E:;
    /* $B05E: 34 */ maybe_trigger_vblank(4); (void)nes_read((0xB3 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B060:;
    /* $B060: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x0026; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B063:;
    /* $B063: C2 */ maybe_trigger_vblank(2); /* NOP */
label_B065:;
    /* $B065: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0EB9; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B068:;
    /* $B068: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x0E; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B06A:;
    /* $B06A: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B06D:;
    /* $B06D: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0EB9; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B070:;
    /* $B070: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x0E; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B072:;
    /* $B072: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B075:;
    /* $B075: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xB9 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B077:;
    /* $B077: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B079:;
    /* $B079: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xBB + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B07B:;
    /* $B07B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B07C:;
    /* $B07C: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B07D:;
    /* $B07D: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xB9 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B07F:;
    /* $B07F: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B081:;
    /* $B081: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xBB + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B083:;
    /* $B083: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B084:;
    /* $B084: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xB4C3 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B087:;
    /* $B087: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x44B6 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B08A:;
    /* $B08A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B0CE; }
label_B08C:;
    /* $B08C: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x42); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B08E:;
    /* $B08E: 3A */ maybe_trigger_vblank(2); /* NOP */
label_B08F:;
    /* $B08F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x3EB4 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B092:;
    /* $B092: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0xB6C3 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B095:;
    /* $B095: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B096:;
    /* $B096: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B097:;
    /* $B097: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x44B6 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B09A:;
    /* $B09A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B0DE; }
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
label_B0CE:;
    /* $B0CE: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x4C4E + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B0D1:;
    /* $B0D1: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B0D2:;
    /* $B0D2: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B0D5:;
    /* $B0D5: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x44B2, -1); return;
label_B0DE:;
    /* $B0DE: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x54 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_B0E0:;
    /* $B0E0: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xC4 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B0E2:;
    /* $B0E2: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x02 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_B0E4:;
    /* $B0E4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xB2C3 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
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
label_B235:;
    /* $B235: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x38 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B237:;
    /* $B237: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B239:;
    /* $B239: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xB239; g_rti_bank = 1; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B23A:;
    /* $B23A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB23A); return;
label_B23B:;
    /* $B23B: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x58; FLAG_NZ(g_cpu.A);
label_B23D:;
    /* $B23D: 80 */ maybe_trigger_vblank(2); /* NOP */
label_B23F:;
    /* $B23F: 80 */ maybe_trigger_vblank(2); /* NOP */
label_B241:;
    /* $B241: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x7F + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B243:;
    /* $B243: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB243); return;
label_B244:;
    /* $B244: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B25F; }
label_B246:;
    /* $B246: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xA00E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B249:;
    /* $B249: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0F7F); FLAG_NZ(g_cpu.A);
label_B24C:;
    /* $B24C: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_B24D:;
    /* $B24D: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x7F + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B24F:;
    /* $B24F: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x18; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_B251:;
    /* $B251: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x7F) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B253:;
    /* $B253: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xC1F8; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B256:;
    /* $B256: 89 */ maybe_trigger_vblank(2); /* NOP */
label_B258:;
    /* $B258: 0F */ maybe_trigger_vblank(6); { uint16_t a=0xBA34; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B25B:;
    /* $B25B: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x05; g_cpu.C=(g_cpu.X>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_B25D:;
    /* $B25D: 34 */ maybe_trigger_vblank(4); (void)nes_read((0xBB + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B25F:;
    /* $B25F: CE */ maybe_trigger_vblank(6); { uint16_t a=0xB605; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B262:;
    /* $B262: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xC200 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B265:;
    /* $B265: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x7F + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_B267:;
    /* $B267: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xC2); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B269:;
    /* $B269: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x7F + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B26B:;
    /* $B26B: 66 */ maybe_trigger_vblank(5); { uint16_t a=0x89; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B26D:;
    /* $B26D: 89 */ maybe_trigger_vblank(2); /* NOP */
label_B26F:;
    /* $B26F: 67 */ maybe_trigger_vblank(5); { uint16_t a=0x18; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B271:;
    /* $B271: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_B273:;
    /* $B273: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0228 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B276:;
    /* $B276: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xF8A8 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B279:;
    /* $B279: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0x83 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B27B:;
    /* $B27B: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_B27C:;
    /* $B27C: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_B27D:;
    /* $B27D: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0x82 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B27F:;
    /* $B27F: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_B280:;
    /* $B280: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_B281:;
    /* $B281: 95 */ maybe_trigger_vblank(4); nes_write((0x8C + g_cpu.X) & 0xFF, g_cpu.A);
label_B283:;
    /* $B283: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xB283; g_rti_bank = 1; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B284:;
    /* $B284: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9A1D + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B287:;
    /* $B287: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB2; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x89; g_cpu.S--; if (!nes_dispatch_call(0x168F, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB287, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B28A:;
    /* $B28A: 8D */ maybe_trigger_vblank(4); nes_write(0x42E0, g_cpu.A);
label_B28D:;
    /* $B28D: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x6F7F + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B290:;
    /* $B290: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xB290; g_rti_bank = 1; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B291:;
    /* $B291: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B292:;
    /* $B292: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x4080 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B295:;
    /* $B295: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x7F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B297:;
    /* $B297: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xB297; g_rti_bank = 1; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B298:;
    /* $B298: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_B299:;
    /* $B299: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x7F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B29B:;
    /* $B29B: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x28); FLAG_NZ(g_cpu.A);
label_B29D:;
    /* $B29D: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xDD7F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B2A0:;
    /* $B2A0: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0x7F7F + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_B2A3:;
    /* $B2A3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7F98 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B2A6:;
    /* $B2A6: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x0840 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B2A9:;
    /* $B2A9: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x7F; FLAG_NZ(g_cpu.A);
label_B2AB:;
    /* $B2AB: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xB2F5); return; }
label_B2AD:;
    /* $B2AD: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x7F + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B2AF:;
    /* $B2AF: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_B2B0:;
    /* $B2B0: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B2B1:;
    /* $B2B1: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x7F + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B2B3:;
    /* $B2B3: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x09) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B2B5:;
    /* $B2B5: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x307F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B2B8:;
    /* $B2B8: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B2B9:;
    /* $B2B9: EB */ maybe_trigger_vblank(2); { uint8_t m=0xB2; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B2BB:;
    /* $B2BB: 52 */ maybe_trigger_vblank(2); /* ILLEGAL $52 — skip 1 */
label_B2BC:;
    /* $B2BC: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B2BE:;
    /* $B2BE: FB */ maybe_trigger_vblank(7); { uint16_t a=(0x1EB2 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B2C1:;
    /* $B2C1: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x00 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B2C3:;
    /* $B2C3: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0xB3; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_B2C5:;
    /* $B2C5: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B2C6:;
    /* $B2C6: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B2C8:;
    /* $B2C8: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x1EB3 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B2CB:;
    /* $B2CB: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x01 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B2CD:;
    /* $B2CD: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0xB3; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_B2CF:;
    /* $B2CF: 74 */ maybe_trigger_vblank(4); (void)nes_read((0xB3 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B2D1:;
    /* $B2D1: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x3B + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B2D3:;
    /* $B2D3: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x1E) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B2D5:;
    /* $B2D5: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B2D7:;
    /* $B2D7: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0xBC + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B2D9:;
    /* $B2D9: 8C */ maybe_trigger_vblank(4); nes_write(0x04B3, g_cpu.Y);
label_B2DC:;
    /* $B2DC: 46 */ maybe_trigger_vblank(5); { uint16_t a=0xBC; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_B2DE:;
    /* $B2DE: 94 */ maybe_trigger_vblank(4); nes_write((0xB3 + g_cpu.X) & 0xFF, g_cpu.Y);
label_B2E0:;
    /* $B2E0: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x56); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B2E2:;
    /* $B2E2: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xBC7B + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_B2E5:;
    /* $B2E5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB2E5); return;
label_B2E6:;
    /* $B2E6: 56 */ maybe_trigger_vblank(6); { uint16_t a=(0xBC + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_B2E8:;
    /* $B2E8: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x00BC); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B2EB:;
    /* $B2EB: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x5BB5 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B2EE:;
    /* $B2EE: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9E + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B2F0:;
    /* $B2F0: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB3 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B2F2:;
    /* $B2F2: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xC8 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B2F4:;
    /* $B2F4: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x3F + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B2F6:;
    /* $B2F6: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x1E + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
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
    /* $B367: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB3; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x69; g_cpu.S--; func_B4ED_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB367, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B36A:;
    /* $B36A: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16zp(0xE2); nes_trace_indirect_jump(0xB36A, _jt); maybe_trigger_vblank(2); call_by_address_tail(_jt, -1); return; }
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
    /* $B511: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B51F; }
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
    maybe_trigger_vblank(1);
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
    /* $B51E: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

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
label_B568:;
    /* $B568: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B569:;
    /* $B569: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0678); FLAG_NZ(g_cpu.A);
label_B56C:;
    /* $B56C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_B56E:;
    /* $B56E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B579; }
label_B570:;
    /* $B570: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x72; g_cpu.S--; func_B4D9_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB570, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B573:;
    /* $B573: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B568;
    }
label_B575:;
    /* $B575: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0678; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B578:;
    /* $B578: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

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
    /* $B57C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B594; }
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
    /* $B58F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B568;
    }
label_B591:;
    /* $B591: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B5BF_b1(); return;
label_B594:;
    /* $B594: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0670; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B597:;
    /* $B597: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0670); FLAG_NZ(g_cpu.A);
label_B59A:;
    /* $B59A: 8D */ maybe_trigger_vblank(4); nes_write(0x400E, g_cpu.A);
label_B59D:;
    /* $B59D: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
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
    /* $B5AA: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B5AB:;
    /* $B5AB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB5; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xAD; g_cpu.S--; func_B4D9_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB5AB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B5AE:;
    /* $B5AE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B594;
    }
label_B5B0:;
    /* $B5B0: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B5BF_b1(); return;
label_B6C4:;
    /* $B6C4: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B6C5:;
    /* $B6C5: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x61; FLAG_NZ(g_cpu.Y);
label_B6C7:;
    /* $B6C7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB6; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xC9; g_cpu.S--; func_B398_b1();
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
    /* $B6CE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B5D5_b1(); return;
label_B6FC:;
    /* $B6FC: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B6FD:;
    /* $B6FD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_B6FF:;
    /* $B6FF: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x71; FLAG_NZ(g_cpu.Y);
label_B701:;
    /* $B701: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B769; }
label_B703:;
    /* $B703: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB7; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x05; g_cpu.S--; func_B4D9_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB703, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B706:;
    /* $B706: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B6FC;
    }
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
    /* $B714: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B398_b1(); return;
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
    /* $B732: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B733:;
    /* $B733: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x068D); FLAG_NZ(g_cpu.A);
label_B736:;
    /* $B736: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_B738:;
    /* $B738: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B6FC;
    }
label_B73A:;
    /* $B73A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_B73C:;
    /* $B73C: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x81; FLAG_NZ(g_cpu.Y);
label_B73E:;
    /* $B73E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B769; }
label_B740:;
    /* $B740: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_B742:;
    /* $B742: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x85; FLAG_NZ(g_cpu.Y);
label_B744:;
    /* $B744: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B769; }
label_B746:;
    /* $B746: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x061F); FLAG_NZ(g_cpu.A);
label_B749:;
    /* $B749: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B74A:;
    /* $B74A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B78E; }
label_B74C:;
    /* $B74C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0689); FLAG_NZ(g_cpu.A);
label_B74F:;
    /* $B74F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xCC; FLAG_NZ(g_cpu.A);
label_B751:;
    /* $B751: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B6FC;
    }
label_B753:;
    /* $B753: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x061F); FLAG_NZ(g_cpu.A);
label_B756:;
    /* $B756: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_B757:;
    /* $B757: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B75F; }
label_B759:;
    /* $B759: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_B75B:;
    /* $B75B: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x7D; FLAG_NZ(g_cpu.Y);
label_B75D:;
    /* $B75D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B769; }
label_B75F:;
    /* $B75F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_B761:;
    /* $B761: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x79; FLAG_NZ(g_cpu.Y);
label_B763:;
    /* $B763: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B769; }
label_B765:;
    /* $B765: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0B; FLAG_NZ(g_cpu.A);
label_B767:;
    /* $B767: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x75; FLAG_NZ(g_cpu.Y);
label_B769:;
    /* $B769: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B482_b1(); return;
label_B78E:;
    /* $B78E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_B790:;
    /* $B790: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x91; FLAG_NZ(g_cpu.Y);
label_B792:;
    /* $B792: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B482_b1(); return;
label_B8D6:;
    /* $B8D6: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B8D7:;
    /* $B8D7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_B8D9:;
    /* $B8D9: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA1; FLAG_NZ(g_cpu.Y);
label_B8DB:;
    /* $B8DB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0xDD; g_cpu.S--; func_B482_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB8DB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B8DE:;
    /* $B8DE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B8F3_b1(); return;
label_B91C:;
    /* $B91C: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B91D:;
    /* $B91D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x1F; g_cpu.S--; func_B4D9_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB91D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B920:;
    /* $B920: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB93C); return; }
label_B922:;
    /* $B922: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_B924:;
    /* $B924: 8D */ maybe_trigger_vblank(4); nes_write(0x0612, g_cpu.A);
label_B927:;
    /* $B927: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B929:;
    /* $B929: 8D */ maybe_trigger_vblank(4); nes_write(0x0613, g_cpu.A);
label_B92C:;
    /* $B92C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xB9; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x2E; g_cpu.S--; func_B9BC_b1();
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
    /* $B937: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B91C;
    }
label_B939:;
    /* $B939: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B8C6_b1(); return;
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

void func_B6FC_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6FC_b1");
#endif
    func_A7AD_b1_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B91C_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B91C_b1");
#endif
    func_A7AD_b1_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B8D6_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8D6_b1");
#endif
    func_A7AD_b1_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B6C4_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6C4_b1");
#endif
    func_A7AD_b1_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B920_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B920_b1");
#endif
    func_A7AD_b1_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B568_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B568_b1");
#endif
    func_A7AD_b1_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A7BC_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A7BC_b1");
#endif
label_A7BC:;
    /* $A7BC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xA7CE); return; }
label_A7BE:;
    /* $A7BE: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A7C0:;
    /* $A7C0: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A7C5; }
label_A7C2:;
    /* $A7C2: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0551 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7C5:;
    /* $A7C5: 89 */ maybe_trigger_vblank(2); /* NOP */
label_A7C7:;
    /* $A7C7: 87 */ maybe_trigger_vblank(3); nes_write(0xAB, g_cpu.A & g_cpu.X); /* SAX */
label_A7C9:;
    /* $A7C9: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x06 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A7CB:;
    /* $A7CB: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x17 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A7CD:;
    /* $A7CD: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xC5; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A7CF:;
    /* $A7CF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0001 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7D2:;
    /* $A7D2: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7D4:;
    /* $A7D4: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A7D5:;
    /* $A7D5: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7D7:;
    /* $A7D7: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A7F8; }
label_A7D9:;
    /* $A7D9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xB6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A7DB:;
    /* $A7DB: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x03); FLAG_NZ(g_cpu.A);
label_A7DD:;
    /* $A7DD: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_A7DE:;
    /* $A7DE: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x03); FLAG_NZ(g_cpu.A);
label_A7E0:;
    /* $A7E0: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x011F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_A7E3:;
    /* $A7E3: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A7E5:;
    /* $A7E5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xD4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A7E7:;
    /* $A7E7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA7E7); return;
label_A7E8:;
    /* $A7E8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A7E9:;
    /* $A7E9: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0707 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7EC:;
    /* $A7EC: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x47 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_A7EE:;
    /* $A7EE: 87 */ maybe_trigger_vblank(3); nes_write(0xB9, g_cpu.A & g_cpu.X); /* SAX */
label_A7F0:;
    /* $A7F0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0003 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7F3:;
    /* $A7F3: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7F5:;
    /* $A7F5: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A7F6:;
    /* $A7F6: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xA7FB); return; }
label_A7F8:;
    /* $A7F8: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A7F9:;
    /* $A7F9: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x6B03 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A7FC:;
    /* $A7FC: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x8C03 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A7FF:;
    /* $A7FF: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0xA603 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A802:;
    /* $A802: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x00 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A804:;
    /* $A804: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x1D) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A806:;
    /* $A806: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A808:;
    /* $A808: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xC303 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A80B:;
    /* $A80B: 0C */ maybe_trigger_vblank(4); (void)nes_read(0xC800); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A80E:;
    /* $A80E: 0C */ maybe_trigger_vblank(4); (void)nes_read(0xD000); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A811:;
    /* $A811: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A816; }
label_A813:;
    /* $A813: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_A814:;
    /* $A814: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A819; }
label_A816:;
    /* $A816: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0541 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A819:;
    /* $A819: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_A81B:;
    /* $A81B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A81D:;
    /* $A81D: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A81F:;
    /* $A81F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x11 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A821:;
    /* $A821: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x09 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A823:;
    /* $A823: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A825:;
    /* $A825: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x030B; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A828:;
    /* $A828: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); call_by_address(0xA82D); return; }
label_A82A:;
    /* $A82A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A82B:;
    /* $A82B: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x0203 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A82E:;
    /* $A82E: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x0D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A830:;
    /* $A830: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x66 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A832:;
    /* $A832: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x34; g_cpu.S--; func_8001_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA832, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A835:;
    /* $A835: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x8401 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A838:;
    /* $A838: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3A; g_cpu.S--; func_8801_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA838, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A83B:;
    /* $A83B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3D; g_cpu.S--; func_8C01_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA83B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A83E:;
    /* $A83E: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0xA603 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A841:;
    /* $A841: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x43; g_cpu.S--; func_B001_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA841, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A844:;
    /* $A844: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A846:;
    /* $A846: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x030B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_A849:;
    /* $A849: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x20; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A84B:;
    /* $A84B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFD + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A84D:;
    /* $A84D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A84E:;
    /* $A84E: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A850:;
    /* $A850: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x31) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A852:;
    /* $A852: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x56); FLAG_NZ(g_cpu.A);
label_A854:;
    /* $A854: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x85 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A856:;
    /* $A856: 5A */ maybe_trigger_vblank(2); /* NOP */
label_A857:;
    /* $A857: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A859:;
    /* $A859: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x01FF + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A85C:;
    /* $A85C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA85C); return;
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
}

void func_A7FB_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A7FB_b1");
#endif
label_A7FB:;
    /* $A7FB: 6B */ maybe_trigger_vblank(2); { g_cpu.A &= 0x1E; uint8_t c=g_cpu.C; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>6)&1; g_cpu.V=(((g_cpu.A>>6)&1)^((g_cpu.A>>5)&1)); }
label_A7FD:;
    /* $A7FD: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x8C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A7FF:;
    /* $A7FF: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0xA603 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A802:;
    /* $A802: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x00 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A804:;
    /* $A804: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x1D) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A806:;
    /* $A806: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A808:;
    /* $A808: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xC303 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A80B:;
    /* $A80B: 0C */ maybe_trigger_vblank(4); (void)nes_read(0xC800); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A80E:;
    /* $A80E: 0C */ maybe_trigger_vblank(4); (void)nes_read(0xD000); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A811:;
    /* $A811: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A816; }
label_A813:;
    /* $A813: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_A814:;
    /* $A814: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A819; }
label_A816:;
    /* $A816: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0541 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A819:;
    /* $A819: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_A81B:;
    /* $A81B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A81D:;
    /* $A81D: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A81F:;
    /* $A81F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x11 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A821:;
    /* $A821: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x09 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A823:;
    /* $A823: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A825:;
    /* $A825: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x030B; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A828:;
    /* $A828: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); call_by_address(0xA82D); return; }
label_A82A:;
    /* $A82A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A82B:;
    /* $A82B: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x0203 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A82E:;
    /* $A82E: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x0D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A830:;
    /* $A830: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x66 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A832:;
    /* $A832: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x34; g_cpu.S--; func_8001_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA832, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A835:;
    /* $A835: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x8401 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A838:;
    /* $A838: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3A; g_cpu.S--; func_8801_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA838, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A83B:;
    /* $A83B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3D; g_cpu.S--; func_8C01_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA83B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A83E:;
    /* $A83E: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0xA603 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A841:;
    /* $A841: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x43; g_cpu.S--; func_B001_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA841, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A844:;
    /* $A844: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A846:;
    /* $A846: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x030B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_A849:;
    /* $A849: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x20; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A84B:;
    /* $A84B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFD + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A84D:;
    /* $A84D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A84E:;
    /* $A84E: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A850:;
    /* $A850: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x31) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A852:;
    /* $A852: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x56); FLAG_NZ(g_cpu.A);
label_A854:;
    /* $A854: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x85 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A856:;
    /* $A856: 5A */ maybe_trigger_vblank(2); /* NOP */
label_A857:;
    /* $A857: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A859:;
    /* $A859: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x01FF + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A85C:;
    /* $A85C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA85C); return;
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
}

void func_A7CE_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A7CE_b1");
#endif
label_A7CE:;
    /* $A7CE: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A7D0:;
    /* $A7D0: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A7D2:;
    /* $A7D2: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7D4:;
    /* $A7D4: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A7D5:;
    /* $A7D5: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7D7:;
    /* $A7D7: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A7F8; }
label_A7D9:;
    /* $A7D9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xB6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A7DB:;
    /* $A7DB: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x03); FLAG_NZ(g_cpu.A);
label_A7DD:;
    /* $A7DD: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_A7DE:;
    /* $A7DE: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x03); FLAG_NZ(g_cpu.A);
label_A7E0:;
    /* $A7E0: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x011F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_A7E3:;
    /* $A7E3: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A7E5:;
    /* $A7E5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xD4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A7E7:;
    /* $A7E7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA7E7); return;
label_A7E8:;
    /* $A7E8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A7E9:;
    /* $A7E9: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0707 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7EC:;
    /* $A7EC: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x47 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_A7EE:;
    /* $A7EE: 87 */ maybe_trigger_vblank(3); nes_write(0xB9, g_cpu.A & g_cpu.X); /* SAX */
label_A7F0:;
    /* $A7F0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0003 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7F3:;
    /* $A7F3: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7F5:;
    /* $A7F5: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A7F6:;
    /* $A7F6: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xA7FB); return; }
label_A7F8:;
    /* $A7F8: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A7F9:;
    /* $A7F9: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x6B03 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A7FC:;
    /* $A7FC: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x8C03 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A7FF:;
    /* $A7FF: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0xA603 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A802:;
    /* $A802: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x00 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A804:;
    /* $A804: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x1D) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A806:;
    /* $A806: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A808:;
    /* $A808: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xC303 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A80B:;
    /* $A80B: 0C */ maybe_trigger_vblank(4); (void)nes_read(0xC800); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A80E:;
    /* $A80E: 0C */ maybe_trigger_vblank(4); (void)nes_read(0xD000); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A811:;
    /* $A811: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A816; }
label_A813:;
    /* $A813: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_A814:;
    /* $A814: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A819; }
label_A816:;
    /* $A816: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0541 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A819:;
    /* $A819: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_A81B:;
    /* $A81B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A81D:;
    /* $A81D: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A81F:;
    /* $A81F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x11 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A821:;
    /* $A821: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x09 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A823:;
    /* $A823: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A825:;
    /* $A825: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x030B; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A828:;
    /* $A828: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); call_by_address(0xA82D); return; }
label_A82A:;
    /* $A82A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A82B:;
    /* $A82B: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x0203 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A82E:;
    /* $A82E: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x0D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A830:;
    /* $A830: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x66 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A832:;
    /* $A832: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x34; g_cpu.S--; func_8001_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA832, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A835:;
    /* $A835: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x8401 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A838:;
    /* $A838: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3A; g_cpu.S--; func_8801_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA838, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A83B:;
    /* $A83B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x3D; g_cpu.S--; func_8C01_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA83B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A83E:;
    /* $A83E: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0xA603 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A841:;
    /* $A841: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; g_ram[0x100 + g_cpu.S] = 0xA8; g_cpu.S--; g_ram[0x100 + g_cpu.S] = 0x43; g_cpu.S--; func_B001_b1();
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA841, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A844:;
    /* $A844: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A846:;
    /* $A846: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x030B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_A849:;
    /* $A849: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x20; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A84B:;
    /* $A84B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFD + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A84D:;
    /* $A84D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A84E:;
    /* $A84E: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A850:;
    /* $A850: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x31) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A852:;
    /* $A852: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x56); FLAG_NZ(g_cpu.A);
label_A854:;
    /* $A854: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x85 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A856:;
    /* $A856: 5A */ maybe_trigger_vblank(2); /* NOP */
label_A857:;
    /* $A857: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A859:;
    /* $A859: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x01FF + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A85C:;
    /* $A85C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA85C); return;
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

