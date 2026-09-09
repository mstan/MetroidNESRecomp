/*
 * metroid_ws_zp.h — zero-page temporaries used by the widescreen hooks.
 *
 * disasm/m1disasm/SRC/constants_ram.asm declares these with `Name = $xx`,
 * which WLA-DX does not export to the .sym (so tools/gen_symbols.py cannot
 * emit them into metroid_ram.h). Names and values are copied verbatim from
 * the disassembly; keep them in sync with it.
 */
#pragma once

/* IsObjectVisible ($DFDF) inputs/outputs (constants_ram.asm "ObjDrawFrame"). */
#define MET_Temp06_PositionHi   0x06u   /* object nametable: 0 = NT0, 1 = NT3 */
#define MET_Temp09_RadiusX      0x09u   /* object horizontal radius (px) */
#define MET_Temp0A_PositionY    0x0Au   /* object Y in room */
#define MET_Temp0B_PositionX    0x0Bu   /* object X in room */
#define MET_Temp0E_ScreenX      0x0Eu   /* out: 8-bit screen X (PositionX - ScrollX) */
#define MET_Temp10_ScreenY      0x10u   /* out: 8-bit screen Y (PositionY - ScrollY) */

/* Room decoder pointers (SetupRoom/DrawRoom). */
#define MET_RoomPtr             0x33u   /* dw: current room data pointer */
#define MET_StructPtr           0x35u   /* dw: current structure pointer */
#define MET_RoomRAMWorkPtr      0x37u   /* dw: work pointer into RoomRAM */
