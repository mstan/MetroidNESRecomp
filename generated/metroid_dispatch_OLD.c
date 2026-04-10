/* AUTO-GENERATED dispatch table. DO NOT EDIT. */
#include "nes_runtime.h"
extern int g_current_bank;

int call_by_address(uint16_t addr) {
    switch (addr) {
        case 0xFFB0:
            func_FFB0(); break;
        case 0xC0D9:
            func_C0D9(); break;
        case 0x8000:
            switch (g_current_bank) {
                case 7: func_C000(); break;
                case 0: func_8000_b0(); break;
                case 1: func_8000_b1(); break;
                case 2: func_8000_b2(); break;
                case 3: func_8000_b3(); break;
                case 4: func_8000_b4(); break;
                case 5: func_8000_b5(); break;
                case 6: func_8000_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC01A:
            func_C01A(); break;
        case 0x9A07:
            switch (g_current_bank) {
                case 0: func_9A07_b0(); break;
                case 1: func_9A07_b1(); break;
                case 2: func_9A07_b2(); break;
                case 3: func_9A07_b3(); break;
                case 4: func_9A07_b4(); break;
                case 5: func_9A07_b5(); break;
                case 6: func_9A07_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC1E0:
            func_C1E0(); break;
        case 0xC2CA:
            func_C2CA(); break;
        case 0xC44D:
            func_C44D(); break;
        case 0xC29A:
            func_C29A(); break;
        case 0xC215:
            func_C215(); break;
        case 0xFFD8:
            func_FFD8(); break;
        case 0xC97E:
            func_C97E(); break;
        case 0xC1BC:
            func_C1BC(); break;
        case 0x8071:
            func_8071_b0(); break;
        case 0x80D0:
            func_80D0_b0(); break;
        case 0x80F9:
            func_80F9_b0(); break;
        case 0x812C:
            func_812C_b0(); break;
        case 0x8142:
            func_8142_b0(); break;
        case 0x8109:
            func_8109_b0(); break;
        case 0x814D:
            func_814D_b0(); break;
        case 0x8163:
            func_8163_b0(); break;
        case 0x8182:
            func_8182_b0(); break;
        case 0x81D1:
            switch (g_current_bank) {
                case 7: func_C1D1(); break;
                case 0: func_81D1_b0(); break;
                case 1: func_81D1_b1(); break;
                case 2: func_81D1_b2(); break;
                case 3: func_81D1_b3(); break;
                case 4: func_81D1_b4(); break;
                case 5: func_81D1_b5(); break;
                case 6: func_81D1_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x806E:
            func_806E_b0(); break;
        case 0x822E:
            func_822E_b0(); break;
        case 0x8243:
            func_8243_b0(); break;
        case 0x8263:
            func_8263_b0(); break;
        case 0x8283:
            func_8283_b0(); break;
        case 0x8068:
            func_8068_b0(); break;
        case 0x82A3:
            func_82A3_b0(); break;
        case 0x82ED:
            func_82ED_b0(); break;
        case 0x82F3:
            func_82F3_b0(); break;
        case 0x90BA:
            func_90BA_b0(); break;
        case 0x90D7:
            func_90D7_b0(); break;
        case 0x911A:
            func_911A_b0(); break;
        case 0x9147:
            func_9147_b0(); break;
        case 0x9359:
            func_9359_b0(); break;
        case 0x9394:
            func_9394_b0(); break;
        case 0x939E:
            func_939E_b0(); break;
        case 0x9AA7:
            func_9AA7_b0(); break;
        case 0xC4AA:
            func_C4AA(); break;
        case 0xF410:
            func_F410(); break;
        case 0xC4FA:
            func_C4FA(); break;
        case 0xC158:
            func_C158(); break;
        case 0xC1A3:
            func_C1A3(); break;
        case 0xC4B2:
            func_C4B2(); break;
        case 0xC4DE:
            func_C4DE(); break;
        case 0xC266:
            func_C266(); break;
        case 0xC114:
            func_C114(); break;
        case 0xC0CB:
            func_C0CB(); break;
        case 0xC000:
            switch (g_current_bank) {
                default: func_C000(); break;
                case 0: func_C000_b0(); break;
            }
            break;
        case 0xC0BC:
            func_C0BC(); break;
        case 0x9C45:
            func_9C45_b0(); break;
        case 0xC20E:
            func_C20E(); break;
        case 0x99DC:
            func_99DC_b2(); break;
        case 0x99DE:
            func_99DE_b4(); break;
        case 0x9F54:
            switch (g_current_bank) {
                case 0: func_9F54_b0(); break;
                case 1: func_9F54_b1(); break;
                case 2: func_9F54_b2(); break;
                case 3: func_9F54_b3(); break;
                case 4: func_9F54_b4(); break;
                case 5: func_9F54_b5(); break;
                case 6: func_9F54_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8AC7:
            switch (g_current_bank) {
                case 7: func_CAC7(); break;
                case 0: func_8AC7_b0(); break;
                case 1: func_8AC7_b1(); break;
                case 2: func_8AC7_b2(); break;
                case 3: func_8AC7_b3(); break;
                case 4: func_8AC7_b4(); break;
                case 5: func_8AC7_b5(); break;
                case 6: func_8AC7_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC30C:
            func_C30C(); break;
        case 0xC4D9:
            func_C4D9(); break;
        case 0xC21F:
            func_C21F(); break;
        case 0xB3E4:
            switch (g_current_bank) {
                case 0: func_B3E4_b0(); break;
                case 1: func_B3E4_b1(); break;
                case 2: func_B3E4_b2(); break;
                case 3: func_B3E4_b3(); break;
                case 4: func_B3E4_b4(); break;
                case 5: func_B3E4_b5(); break;
                case 6: func_B3E4_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC1BB:
            func_C1BB(); break;
        case 0x988A:
            switch (g_current_bank) {
                case 0: func_988A_b0(); break;
                case 1: func_988A_b1(); break;
                case 2: func_988A_b2(); break;
                case 3: func_988A_b3(); break;
                case 4: func_988A_b4(); break;
                case 5: func_988A_b5(); break;
                case 6: func_988A_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x98AE:
            func_98AE_b0(); break;
        case 0xC439:
            func_C439(); break;
        case 0xC447:
            func_C447(); break;
        case 0x8A8C:
            func_8A8C_b0(); break;
        case 0x8141:
            func_8141_b0(); break;
        case 0x87AB:
            func_87AB_b0(); break;
        case 0x87CF:
            func_87CF_b0(); break;
        case 0x8897:
            func_8897_b0(); break;
        case 0x8B5F:
            func_8B5F_b0(); break;
        case 0x8AA7:
            func_8AA7_b0(); break;
        case 0x88FE:
            switch (g_current_bank) {
                case 0: func_88FE_b0(); break;
                case 1: func_88FE_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8976:
            func_8976_b0(); break;
        case 0x909F:
            func_909F_b0(); break;
        case 0x9449:
            func_9449_b0(); break;
        case 0xC487:
            func_C487(); break;
        case 0x932B:
            func_932B_b0(); break;
        case 0xC6D6:
            func_C6D6(); break;
        case 0x940B:
            func_940B_b0(); break;
        case 0x90D1:
            func_90D1_b0(); break;
        case 0x8C5E:
            func_8C5E_b0(); break;
        case 0xC36B:
            func_C36B(); break;
        case 0x9180:
            func_9180_b0(); break;
        case 0x91FB:
            func_91FB_b0(); break;
        case 0x91BF:
            func_91BF_b0(); break;
        case 0x9450:
            func_9450_b0(); break;
        case 0x9324:
            func_9324_b0(); break;
        case 0x8C7A:
            func_8C7A_b0(); break;
        case 0x93C6:
            func_93C6_b0(); break;
        case 0xC42C:
            func_C42C(); break;
        case 0x9EAA:
            func_9EAA_b0(); break;
        case 0x9AD5:
            func_9AD5_b0(); break;
        case 0x9B1C:
            func_9B1C_b0(); break;
        case 0x9B34:
            func_9B34_b0(); break;
        case 0x9B93:
            func_9B93_b0(); break;
        case 0x9BCD:
            func_9BCD_b0(); break;
        case 0x9BFC:
            func_9BFC_b0(); break;
        case 0x9A39:
            func_9A39_b0(); break;
        case 0xC45C:
            func_C45C(); break;
        case 0x9F20:
            func_9F20_b0(); break;
        case 0x9AA0:
            func_9AA0_b0(); break;
        case 0xC4A7:
            func_C4A7(); break;
        case 0xE094:
            func_E094(); break;
        case 0x8058:
            switch (g_current_bank) {
                case 0: func_8058_b0(); break;
                case 1: func_8058_b1(); break;
                case 2: func_8058_b2(); break;
                case 3: func_8058_b3(); break;
                case 4: func_8058_b4(); break;
                case 5: func_8058_b5(); break;
                case 6: func_8058_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xDD8B:
            func_DD8B(); break;
        case 0xC16D:
            func_C16D(); break;
        case 0xC4E8:
            func_C4E8(); break;
        case 0xC510:
            func_C510(); break;
        case 0xCB92:
            func_CB92(); break;
        case 0xC801:
            func_C801(); break;
        case 0xC81D:
            func_C81D(); break;
        case 0xC8D1:
            func_C8D1(); break;
        case 0xC92B:
            func_C92B(); break;
        case 0xC9A6:
            func_C9A6(); break;
        case 0xC9B1:
            func_C9B1(); break;
        case 0xC9C4:
            func_C9C4(); break;
        case 0xC155:
            func_C155(); break;
        case 0xC9D7:
            func_C9D7(); break;
        case 0xC494:
            func_C494(); break;
        case 0x800F:
            switch (g_current_bank) {
                case 2: func_800F_b2(); break;
                case 4: func_800F_b4(); break;
                case 5: func_800F_b5(); break;
                case 1: func_800F_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC37E:
            func_C37E(); break;
        case 0xC2B3:
            func_C2B3(); break;
        case 0xC2E4:
            func_C2E4(); break;
        case 0xC4B6:
            func_C4B6(); break;
        case 0xB3C9:
            switch (g_current_bank) {
                case 0: func_B3C9_b0(); break;
                case 1: func_B3C9_b1(); break;
                case 2: func_B3C9_b2(); break;
                case 3: func_B3C9_b3(); break;
                case 4: func_B3C9_b4(); break;
                case 5: func_B3C9_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB34B:
            switch (g_current_bank) {
                case 0: func_B34B_b0(); break;
                case 1: func_B34B_b1(); break;
                case 2: func_B34B_b2(); break;
                case 3: func_B34B_b3(); break;
                case 4: func_B34B_b4(); break;
                case 5: func_B34B_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB37B:
            switch (g_current_bank) {
                case 0: func_B37B_b0(); break;
                case 1: func_B37B_b1(); break;
                case 2: func_B37B_b2(); break;
                case 3: func_B37B_b3(); break;
                case 4: func_B37B_b4(); break;
                case 5: func_B37B_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB36D:
            switch (g_current_bank) {
                case 0: func_B36D_b0(); break;
                case 1: func_B36D_b1(); break;
                case 2: func_B36D_b2(); break;
                case 3: func_B36D_b3(); break;
                case 4: func_B36D_b4(); break;
                case 5: func_B36D_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBC66:
            switch (g_current_bank) {
                case 7: func_FC66(); break;
                case 0: func_BC66_b0(); break;
                case 1: func_BC66_b1(); break;
                case 2: func_BC66_b2(); break;
                case 3: func_BC66_b3(); break;
                case 4: func_BC66_b4(); break;
                case 5: func_BC66_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB434:
            switch (g_current_bank) {
                case 0: func_B434_b0(); break;
                case 1: func_B434_b1(); break;
                case 2: func_B434_b2(); break;
                case 3: func_B434_b3(); break;
                case 4: func_B434_b4(); break;
                case 5: func_B434_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB44D:
            switch (g_current_bank) {
                case 0: func_B44D_b0(); break;
                case 1: func_B44D_b1(); break;
                case 2: func_B44D_b2(); break;
                case 3: func_B44D_b3(); break;
                case 4: func_B44D_b4(); break;
                case 5: func_B44D_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB46E:
            switch (g_current_bank) {
                case 0: func_B46E_b0(); break;
                case 1: func_B46E_b1(); break;
                case 2: func_B46E_b2(); break;
                case 3: func_B46E_b3(); break;
                case 4: func_B46E_b4(); break;
                case 5: func_B46E_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB43E:
            switch (g_current_bank) {
                case 7: func_F43E(); break;
                case 0: func_B43E_b0(); break;
                case 1: func_B43E_b1(); break;
                case 2: func_B43E_b2(); break;
                case 3: func_B43E_b3(); break;
                case 4: func_B43E_b4(); break;
                case 5: func_B43E_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8036:
            switch (g_current_bank) {
                case 2: func_8036_b2(); break;
                case 5: func_8036_b5(); break;
                case 4: func_8036_b4(); break;
                case 6: func_8036_b6(); break;
                case 1: func_8036_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8039:
            switch (g_current_bank) {
                case 2: func_8039_b2(); break;
                case 5: func_8039_b5(); break;
                case 4: func_8039_b4(); break;
                case 6: func_8039_b6(); break;
                case 1: func_8039_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9A42:
            func_9A42_b2(); break;
        case 0x8027:
            switch (g_current_bank) {
                case 7: func_C027(); break;
                case 2: func_8027_b2(); break;
                case 3: func_8027_b3(); break;
                case 5: func_8027_b5(); break;
                case 4: func_8027_b4(); break;
                case 6: func_8027_b6(); break;
                case 1: func_8027_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9A52:
            func_9A52_b2(); break;
        case 0x8003:
            switch (g_current_bank) {
                case 7: func_C003(); break;
                case 2: func_8003_b2(); break;
                case 5: func_8003_b5(); break;
                case 3: func_8003_b3(); break;
                case 4: func_8003_b4(); break;
                case 6: func_8003_b6(); break;
                case 1: func_8003_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x99B7:
            func_99B7_b3(); break;
        case 0x9A10:
            func_9A10_b3(); break;
        case 0x99C3:
            func_99C3_b3(); break;
        case 0x99BD:
            func_99BD_b3(); break;
        case 0x95C6:
            switch (g_current_bank) {
                case 3: func_95C6_b3(); break;
                case 2: func_95C6_b2(); break;
                case 5: func_95C6_b5(); break;
                case 6: func_95C6_b6(); break;
                case 1: func_95C6_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x99E4:
            switch (g_current_bank) {
                case 3: func_99E4_b3(); break;
                case 5: func_99E4_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x99F4:
            func_99F4_b3(); break;
        case 0x9967:
            switch (g_current_bank) {
                case 3: func_9967_b3(); break;
                case 5: func_9967_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x99AE:
            func_99AE_b3(); break;
        case 0x8042:
            func_8042_b3(); break;
        case 0x97E2:
            func_97E2_b3(); break;
        case 0x9AE1:
            switch (g_current_bank) {
                case 5: func_9AE1_b5(); break;
                case 6: func_9AE1_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9AF1:
            switch (g_current_bank) {
                case 5: func_9AF1_b5(); break;
                case 6: func_9AF1_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC434:
            func_C434(); break;
        case 0xC43D:
            func_C43D(); break;
        case 0x87D6:
            func_87D6_b0(); break;
        case 0x87D9:
            func_87D9_b0(); break;
        case 0x881A:
            func_881A_b0(); break;
        case 0x887B:
            func_887B_b0(); break;
        case 0x8963:
            func_8963_b0(); break;
        case 0x981E:
            func_981E_b0(); break;
        case 0xC47D:
            func_C47D(); break;
        case 0xC481:
            func_C481(); break;
        case 0xD92C:
            func_D92C(); break;
        case 0xC7AB:
            func_C7AB(); break;
        case 0x8F60:
            func_8F60_b0(); break;
        case 0x8DDE:
            func_8DDE_b0(); break;
        case 0x92D4:
            func_92D4_b0(); break;
        case 0xC328:
            func_C328(); break;
        case 0x8B79:
            switch (g_current_bank) {
                case 0: func_8B79_b0(); break;
                case 1: func_8B79_b1(); break;
                case 2: func_8B79_b2(); break;
                case 3: func_8B79_b3(); break;
                case 4: func_8B79_b4(); break;
                case 5: func_8B79_b5(); break;
                case 6: func_8B79_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8E17:
            func_8E17_b0(); break;
        case 0x8E6C:
            func_8E6C_b0(); break;
        case 0x93F9:
            func_93F9_b0(); break;
        case 0xC5D0:
            func_C5D0(); break;
        case 0x9C9A:
            func_9C9A_b0(); break;
        case 0xCAF5:
            func_CAF5(); break;
        case 0x9C7F:
            func_9C7F_b0(); break;
        case 0xC43F:
            func_C43F(); break;
        case 0x9A38:
            func_9A38_b0(); break;
        case 0xE173:
            func_E173(); break;
        case 0xC2BF:
            switch (g_current_bank) {
                default: func_C2BF(); break;
                case 1: func_C2BF_b1(); break;
                case 2: func_C2BF_b2(); break;
                case 3: func_C2BF_b3(); break;
                case 4: func_C2BF_b4(); break;
                case 5: func_C2BF_b5(); break;
            }
            break;
        case 0xE198:
            func_E198(); break;
        case 0xE17B:
            func_E17B(); break;
        case 0x8001:
            switch (g_current_bank) {
                case 7: func_C001(); break;
                case 0: func_8001_b0(); break;
                case 1: func_8001_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8244:
            switch (g_current_bank) {
                case 1: func_8244_b1(); break;
                case 2: func_8244_b2(); break;
                case 3: func_8244_b3(); break;
                case 4: func_8244_b4(); break;
                case 5: func_8244_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC3D4:
            switch (g_current_bank) {
                default: func_C3D4(); break;
                case 1: func_C3D4_b1(); break;
                case 2: func_C3D4_b2(); break;
                case 3: func_C3D4_b3(); break;
                case 4: func_C3D4_b4(); break;
                case 5: func_C3D4_b5(); break;
            }
            break;
        case 0x83F5:
            switch (g_current_bank) {
                case 1: func_83F5_b1(); break;
                case 2: func_83F5_b2(); break;
                case 3: func_83F5_b3(); break;
                case 4: func_83F5_b4(); break;
                case 5: func_83F5_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x80B8:
            switch (g_current_bank) {
                case 1: func_80B8_b1(); break;
                case 2: func_80B8_b2(); break;
                case 3: func_80B8_b3(); break;
                case 4: func_80B8_b4(); break;
                case 5: func_80B8_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x844B:
            switch (g_current_bank) {
                case 1: func_844B_b1(); break;
                case 2: func_844B_b2(); break;
                case 3: func_844B_b3(); break;
                case 4: func_844B_b4(); break;
                case 5: func_844B_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x80FB:
            switch (g_current_bank) {
                case 1: func_80FB_b1(); break;
                case 2: func_80FB_b2(); break;
                case 3: func_80FB_b3(); break;
                case 4: func_80FB_b4(); break;
                case 5: func_80FB_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8318:
            switch (g_current_bank) {
                case 7: func_C318(); break;
                case 1: func_8318_b1(); break;
                case 2: func_8318_b2(); break;
                case 3: func_8318_b3(); break;
                case 4: func_8318_b4(); break;
                case 5: func_8318_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x84A7:
            switch (g_current_bank) {
                case 7: func_C4A7(); break;
                case 1: func_84A7_b1(); break;
                case 2: func_84A7_b2(); break;
                case 3: func_84A7_b3(); break;
                case 4: func_84A7_b4(); break;
                case 5: func_84A7_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x816E:
            switch (g_current_bank) {
                case 7: func_C16E(); break;
                case 1: func_816E_b1(); break;
                case 2: func_816E_b2(); break;
                case 3: func_816E_b3(); break;
                case 4: func_816E_b4(); break;
                case 5: func_816E_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x84FE:
            switch (g_current_bank) {
                case 1: func_84FE_b1(); break;
                case 2: func_84FE_b2(); break;
                case 3: func_84FE_b3(); break;
                case 4: func_84FE_b4(); break;
                case 5: func_84FE_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8134:
            switch (g_current_bank) {
                case 1: func_8134_b1(); break;
                case 2: func_8134_b2(); break;
                case 3: func_8134_b3(); break;
                case 4: func_8134_b4(); break;
                case 5: func_8134_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xDF2D:
            func_DF2D(); break;
        case 0xDCC3:
            func_DCC3(); break;
        case 0xDCF5:
            func_DCF5(); break;
        case 0xDE3D:
            func_DE3D(); break;
        case 0xDFDF:
            func_DFDF(); break;
        case 0xDEDE:
            func_DEDE(); break;
        case 0xDC8F:
            func_DC8F(); break;
        case 0xDF19:
            func_DF19(); break;
        case 0xCC1A:
            func_CC1A(); break;
        case 0xCA18:
            func_CA18(); break;
        case 0xC8BB:
            func_C8BB(); break;
        case 0xC8B0:
            func_C8B0(); break;
        case 0xE720:
            func_E720(); break;
        case 0xEA2B:
            func_EA2B(); break;
        case 0xCBFD:
            func_CBFD(); break;
        case 0xE1F1:
            func_E1F1(); break;
        case 0xCB29:
            func_CB29(); break;
        case 0xC92A:
            func_C92A(); break;
        case 0xCB8E:
            func_CB8E(); break;
        case 0xCB73:
            switch (g_current_bank) {
                default: func_CB73(); break;
                case 1: func_CB73_b1(); break;
                case 2: func_CB73_b2(); break;
                case 3: func_CB73_b3(); break;
                case 4: func_CB73_b4(); break;
                case 5: func_CB73_b5(); break;
            }
            break;
        case 0xC9C3:
            func_C9C3(); break;
        case 0xCF6B:
            func_CF6B(); break;
        case 0xDE47:
            func_DE47(); break;
        case 0xF68D:
            func_F68D(); break;
        case 0xC3C6:
            func_C3C6(); break;
        case 0xC2A8:
            func_C2A8(); break;
        case 0xC376:
            func_C376(); break;
        case 0xC36E:
            func_C36E(); break;
        case 0xC318:
            func_C318(); break;
        case 0xB3BF:
            switch (g_current_bank) {
                case 7: func_F3BF(); break;
                case 0: func_B3BF_b0(); break;
                case 1: func_B3BF_b1(); break;
                case 2: func_B3BF_b2(); break;
                case 3: func_B3BF_b3(); break;
                case 4: func_B3BF_b4(); break;
                case 5: func_B3BF_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB398:
            switch (g_current_bank) {
                case 0: func_B398_b0(); break;
                case 1: func_B398_b1(); break;
                case 2: func_B398_b2(); break;
                case 3: func_B398_b3(); break;
                case 4: func_B398_b4(); break;
                case 5: func_B398_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB4ED:
            switch (g_current_bank) {
                case 0: func_B4ED_b0(); break;
                case 1: func_B4ED_b1(); break;
                case 2: func_B4ED_b2(); break;
                case 3: func_B4ED_b3(); break;
                case 4: func_B4ED_b4(); break;
                case 5: func_B4ED_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBC83:
            switch (g_current_bank) {
                case 0: func_BC83_b0(); break;
                case 1: func_BC83_b1(); break;
                case 2: func_BC83_b2(); break;
                case 3: func_BC83_b3(); break;
                case 4: func_BC83_b4(); break;
                case 5: func_BC83_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBC94:
            switch (g_current_bank) {
                case 0: func_BC94_b0(); break;
                case 1: func_BC94_b1(); break;
                case 2: func_BC94_b2(); break;
                case 3: func_BC94_b3(); break;
                case 4: func_BC94_b4(); break;
                case 5: func_BC94_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB367:
            switch (g_current_bank) {
                case 0: func_B367_b0(); break;
                case 1: func_B367_b1(); break;
                case 2: func_B367_b2(); break;
                case 3: func_B367_b3(); break;
                case 4: func_B367_b4(); break;
                case 5: func_B367_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x833F:
            switch (g_current_bank) {
                case 2: func_833F_b2(); break;
                case 5: func_833F_b5(); break;
                case 1: func_833F_b1(); break;
                case 3: func_833F_b3(); break;
                case 4: func_833F_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8395:
            switch (g_current_bank) {
                case 2: func_8395_b2(); break;
                case 5: func_8395_b5(); break;
                case 1: func_8395_b1(); break;
                case 3: func_8395_b3(); break;
                case 4: func_8395_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xFD8F:
            func_FD8F(); break;
        case 0xF438:
            func_F438(); break;
        case 0x9B1B:
            func_9B1B_b3(); break;
        case 0xCE92:
            func_CE92(); break;
        case 0x8006:
            switch (g_current_bank) {
                case 7: func_C006(); break;
                case 3: func_8006_b3(); break;
                case 2: func_8006_b2(); break;
                case 5: func_8006_b5(); break;
                case 4: func_8006_b4(); break;
                case 6: func_8006_b6(); break;
                case 1: func_8006_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC2C0:
            switch (g_current_bank) {
                default: func_C2C0(); break;
                case 1: func_C2C0_b1(); break;
                case 2: func_C2C0_b2(); break;
                case 3: func_C2C0_b3(); break;
                case 4: func_C2C0_b4(); break;
                case 5: func_C2C0_b5(); break;
            }
            break;
        case 0x8871:
            func_8871_b0(); break;
        case 0x9871:
            func_9871_b0(); break;
        case 0xC4EF:
            func_C4EF(); break;
        case 0xC7D5:
            func_C7D5(); break;
        case 0x8FF1:
            func_8FF1_b0(); break;
        case 0x9001:
            func_9001_b0(); break;
        case 0x9011:
            func_9011_b0(); break;
        case 0x8E4E:
            func_8E4E_b0(); break;
        case 0x8E21:
            func_8E21_b0(); break;
        case 0xC1D4:
            func_C1D4(); break;
        case 0xC578:
            func_C578(); break;
        case 0x8D12:
            func_8D12_b0(); break;
        case 0xC45D:
            func_C45D(); break;
        case 0xC5DC:
            func_C5DC(); break;
        case 0x8B9C:
            func_8B9C_b0(); break;
        case 0x8E2D:
            func_8E2D_b0(); break;
        case 0x8F2D:
            func_8F2D_b0(); break;
        case 0x8F33:
            func_8F33_b0(); break;
        case 0x8F46:
            func_8F46_b0(); break;
        case 0x8F5A:
            func_8F5A_b0(); break;
        case 0xC6C2:
            func_C6C2(); break;
        case 0xE193:
            func_E193(); break;
        case 0xE1AD:
            func_E1AD(); break;
        case 0x80B0:
            switch (g_current_bank) {
                case 1: func_80B0_b1(); break;
                case 2: func_80B0_b2(); break;
                case 3: func_80B0_b3(); break;
                case 4: func_80B0_b4(); break;
                case 5: func_80B0_b5(); break;
                case 0: func_80B0_b0(); break;
                case 6: func_80B0_b6(); break;
                case 7: func_80B0_b7(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x822B:
            switch (g_current_bank) {
                case 1: func_822B_b1(); break;
                case 2: func_822B_b2(); break;
                case 3: func_822B_b3(); break;
                case 4: func_822B_b4(); break;
                case 5: func_822B_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8312:
            switch (g_current_bank) {
                case 1: func_8312_b1(); break;
                case 2: func_8312_b2(); break;
                case 3: func_8312_b3(); break;
                case 4: func_8312_b4(); break;
                case 5: func_8312_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC2BE:
            func_C2BE(); break;
        case 0xE770:
            switch (g_current_bank) {
                default: func_E770(); break;
                case 1: func_E770_b1(); break;
                case 2: func_E770_b2(); break;
                case 3: func_E770_b3(); break;
                case 4: func_E770_b4(); break;
                case 5: func_E770_b5(); break;
            }
            break;
        case 0x82C3:
            switch (g_current_bank) {
                case 1: func_82C3_b1(); break;
                case 2: func_82C3_b2(); break;
                case 3: func_82C3_b3(); break;
                case 4: func_82C3_b4(); break;
                case 5: func_82C3_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xE77B:
            switch (g_current_bank) {
                default: func_E77B(); break;
                case 1: func_E77B_b1(); break;
                case 2: func_E77B_b2(); break;
                case 3: func_E77B_b3(); break;
                case 4: func_E77B_b4(); break;
                case 5: func_E77B_b5(); break;
            }
            break;
        case 0x825B:
            switch (g_current_bank) {
                case 1: func_825B_b1(); break;
                case 2: func_825B_b2(); break;
                case 3: func_825B_b3(); break;
                case 4: func_825B_b4(); break;
                case 5: func_825B_b5(); break;
                case 6: func_825B_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x82F4:
            switch (g_current_bank) {
                case 1: func_82F4_b1(); break;
                case 2: func_82F4_b2(); break;
                case 3: func_82F4_b3(); break;
                case 4: func_82F4_b4(); break;
                case 5: func_82F4_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8258:
            switch (g_current_bank) {
                case 1: func_8258_b1(); break;
                case 2: func_8258_b2(); break;
                case 3: func_8258_b3(); break;
                case 4: func_8258_b4(); break;
                case 5: func_8258_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x81B1:
            switch (g_current_bank) {
                case 1: func_81B1_b1(); break;
                case 2: func_81B1_b2(); break;
                case 3: func_81B1_b3(); break;
                case 4: func_81B1_b4(); break;
                case 5: func_81B1_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x82A2:
            switch (g_current_bank) {
                case 1: func_82A2_b1(); break;
                case 2: func_82A2_b2(); break;
                case 3: func_82A2_b3(); break;
                case 4: func_82A2_b4(); break;
                case 5: func_82A2_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8563:
            switch (g_current_bank) {
                case 1: func_8563_b1(); break;
                case 2: func_8563_b2(); break;
                case 3: func_8563_b3(); break;
                case 4: func_8563_b4(); break;
                case 5: func_8563_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x855A:
            switch (g_current_bank) {
                case 1: func_855A_b1(); break;
                case 2: func_855A_b2(); break;
                case 3: func_855A_b3(); break;
                case 4: func_855A_b4(); break;
                case 5: func_855A_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x81FC:
            switch (g_current_bank) {
                case 1: func_81FC_b1(); break;
                case 2: func_81FC_b2(); break;
                case 3: func_81FC_b3(); break;
                case 4: func_81FC_b4(); break;
                case 5: func_81FC_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x80F6:
            switch (g_current_bank) {
                case 1: func_80F6_b1(); break;
                case 2: func_80F6_b2(); break;
                case 3: func_80F6_b3(); break;
                case 4: func_80F6_b4(); break;
                case 5: func_80F6_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x856B:
            switch (g_current_bank) {
                case 1: func_856B_b1(); break;
                case 2: func_856B_b2(); break;
                case 3: func_856B_b3(); break;
                case 4: func_856B_b4(); break;
                case 5: func_856B_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x812F:
            switch (g_current_bank) {
                case 1: func_812F_b1(); break;
                case 2: func_812F_b2(); break;
                case 3: func_812F_b3(); break;
                case 4: func_812F_b4(); break;
                case 5: func_812F_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xE8F1:
            switch (g_current_bank) {
                default: func_E8F1(); break;
                case 1: func_E8F1_b1(); break;
                case 2: func_E8F1_b2(); break;
                case 3: func_E8F1_b3(); break;
                case 4: func_E8F1_b4(); break;
                case 5: func_E8F1_b5(); break;
            }
            break;
        case 0x81C7:
            switch (g_current_bank) {
                case 1: func_81C7_b1(); break;
                case 2: func_81C7_b2(); break;
                case 3: func_81C7_b3(); break;
                case 4: func_81C7_b4(); break;
                case 5: func_81C7_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x81AC:
            switch (g_current_bank) {
                case 1: func_81AC_b1(); break;
                case 2: func_81AC_b2(); break;
                case 3: func_81AC_b3(); break;
                case 4: func_81AC_b4(); break;
                case 5: func_81AC_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x81C0:
            switch (g_current_bank) {
                case 1: func_81C0_b1(); break;
                case 2: func_81C0_b2(); break;
                case 3: func_81C0_b3(); break;
                case 4: func_81C0_b4(); break;
                case 5: func_81C0_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xE8FC:
            switch (g_current_bank) {
                default: func_E8FC(); break;
                case 1: func_E8FC_b1(); break;
                case 2: func_E8FC_b2(); break;
                case 3: func_E8FC_b3(); break;
                case 4: func_E8FC_b4(); break;
                case 5: func_E8FC_b5(); break;
            }
            break;
        case 0x8169:
            switch (g_current_bank) {
                case 1: func_8169_b1(); break;
                case 2: func_8169_b2(); break;
                case 3: func_8169_b3(); break;
                case 4: func_8169_b4(); break;
                case 5: func_8169_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xE038:
            func_E038(); break;
        case 0xF74B:
            switch (g_current_bank) {
                default: func_F74B(); break;
                case 1: func_F74B_b1(); break;
                case 2: func_F74B_b2(); break;
                case 3: func_F74B_b3(); break;
                case 4: func_F74B_b4(); break;
                case 5: func_F74B_b5(); break;
            }
            break;
        case 0xFA18:
            func_FA18(); break;
        case 0xCBF9:
            func_CBF9(); break;
        case 0xDD97:
            func_DD97(); break;
        case 0xDCA1:
            func_DCA1(); break;
        case 0xDEE6:
            func_DEE6(); break;
        case 0xDF1B:
            func_DF1B(); break;
        case 0xCC36:
            func_CC36(); break;
        case 0xCCC2:
            func_CCC2(); break;
        case 0xD002:
            func_D002(); break;
        case 0xD0E1:
            func_D0E1(); break;
        case 0xD198:
            func_D198(); break;
        case 0xD3A8:
            func_D3A8(); break;
        case 0xD41A:
            func_D41A(); break;
        case 0xD41F:
            func_D41F(); break;
        case 0xD423:
            func_D423(); break;
        case 0xCF5D:
            func_CF5D(); break;
        case 0xE1E1:
            func_E1E1(); break;
        case 0xD1EE:
            func_D1EE(); break;
        case 0xCD6D:
            func_CD6D(); break;
        case 0xCC98:
            func_CC98(); break;
        case 0xCFC3:
            func_CFC3(); break;
        case 0xD0B5:
            func_D0B5(); break;
        case 0xCF77:
            func_CF77(); break;
        case 0x95AB:
            switch (g_current_bank) {
                case 0: func_95AB_b0(); break;
                case 1: func_95AB_b1(); break;
                case 2: func_95AB_b2(); break;
                case 3: func_95AB_b3(); break;
                case 4: func_95AB_b4(); break;
                case 5: func_95AB_b5(); break;
                case 6: func_95AB_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xEC93:
            func_EC93(); break;
        case 0xC2C5:
            switch (g_current_bank) {
                default: func_C2C5(); break;
                case 1: func_C2C5_b1(); break;
                case 2: func_C2C5_b2(); break;
                case 3: func_C2C5_b3(); break;
                case 4: func_C2C5_b4(); break;
                case 5: func_C2C5_b5(); break;
            }
            break;
        case 0xEA2A:
            func_EA2A(); break;
        case 0xEA13:
            func_EA13(); break;
        case 0xEC9B:
            func_EC9B(); break;
        case 0xED98:
            func_ED98(); break;
        case 0xEAC0:
            func_EAC0(); break;
        case 0xEA05:
            func_EA05(); break;
        case 0xEFF8:
            func_EFF8(); break;
        case 0xEAAA:
            func_EAAA(); break;
        case 0xCBE8:
            func_CBE8(); break;
        case 0xE1F0:
            func_E1F0(); break;
        case 0xE6D2:
            func_E6D2(); break;
        case 0xE204:
            func_E204(); break;
        case 0xE6A7:
            func_E6A7(); break;
        case 0xE519:
            func_E519(); break;
        case 0xE21B:
            func_E21B(); break;
        case 0xE4F1:
            func_E4F1(); break;
        case 0xC2C6:
            func_C2C6(); break;
        case 0xE252:
            func_E252(); break;
        case 0xF345:
            func_F345(); break;
        case 0xD4BF:
            func_D4BF(); break;
        case 0xCC0D:
            func_CC0D(); break;
        case 0x95C3:
            switch (g_current_bank) {
                case 0: func_95C3_b0(); break;
                case 1: func_95C3_b1(); break;
                case 2: func_95C3_b2(); break;
                case 3: func_95C3_b3(); break;
                case 4: func_95C3_b4(); break;
                case 5: func_95C3_b5(); break;
                case 6: func_95C3_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xD7B3:
            func_D7B3(); break;
        case 0xD9D4:
            func_D9D4(); break;
        case 0xFA9D:
            func_FA9D(); break;
        case 0xFC65:
            func_FC65(); break;
        case 0xF93B:
            func_F93B(); break;
        case 0xFBDD:
            func_FBDD(); break;
        case 0x8B13:
            switch (g_current_bank) {
                case 0: func_8B13_b0(); break;
                case 1: func_8B13_b1(); break;
                case 2: func_8B13_b2(); break;
                case 3: func_8B13_b3(); break;
                case 4: func_8B13_b4(); break;
                case 5: func_8B13_b5(); break;
                case 6: func_8B13_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xFE1B:
            func_FE1B(); break;
        case 0xF034:
            func_F034(); break;
        case 0xE0C1:
            func_E0C1(); break;
        case 0xFAF2:
            func_FAF2(); break;
        case 0xDB17:
            func_DB17(); break;
        case 0xDB37:
            func_DB37(); break;
        case 0xFDE3:
            func_FDE3(); break;
        case 0xB51A:
            switch (g_current_bank) {
                case 0: func_B51A_b0(); break;
                case 1: func_B51A_b1(); break;
                case 2: func_B51A_b2(); break;
                case 3: func_B51A_b3(); break;
                case 4: func_B51A_b4(); break;
                case 5: func_B51A_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xE449:
            switch (g_current_bank) {
                default: func_E449(); break;
                case 1: func_E449_b1(); break;
                case 2: func_E449_b2(); break;
                case 3: func_E449_b3(); break;
                case 4: func_E449_b4(); break;
                case 5: func_E449_b5(); break;
            }
            break;
        case 0xFDBF:
            func_FDBF(); break;
        case 0xFDDD:
            func_FDDD(); break;
        case 0xF416:
            func_F416(); break;
        case 0xCE91:
            func_CE91(); break;
        case 0xCE84:
            func_CE84(); break;
        case 0xF323:
            func_F323(); break;
        case 0xC3FB:
            func_C3FB(); break;
        case 0xCBE2:
            func_CBE2(); break;
        case 0xCC8B:
            func_CC8B(); break;
        case 0xC3DA:
            func_C3DA(); break;
        case 0xC7DB:
            func_C7DB(); break;
        case 0x8BD4:
            func_8BD4_b0(); break;
        case 0x8D3D:
            func_8D3D_b0(); break;
        case 0xE783:
            func_E783(); break;
        case 0xE792:
            func_E792(); break;
        case 0xE7BD:
            func_E7BD(); break;
        case 0x81B8:
            switch (g_current_bank) {
                case 1: func_81B8_b1(); break;
                case 2: func_81B8_b2(); break;
                case 3: func_81B8_b3(); break;
                case 4: func_81B8_b4(); break;
                case 5: func_81B8_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x81F6:
            switch (g_current_bank) {
                case 1: func_81F6_b1(); break;
                case 2: func_81F6_b2(); break;
                case 3: func_81F6_b3(); break;
                case 4: func_81F6_b4(); break;
                case 5: func_81F6_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x81F5:
            switch (g_current_bank) {
                case 1: func_81F5_b1(); break;
                case 2: func_81F5_b2(); break;
                case 3: func_81F5_b3(); break;
                case 4: func_81F5_b4(); break;
                case 5: func_81F5_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xE904:
            func_E904(); break;
        case 0xE89B:
            func_E89B(); break;
        case 0x80AC:
            func_80AC_b0(); break;
        case 0x809E:
            func_809E_b0(); break;
        case 0xDF6B:
            func_DF6B(); break;
        case 0xDFA3:
            func_DFA3(); break;
        case 0xD147:
            func_D147(); break;
        case 0xCF88:
            func_CF88(); break;
        case 0xD09C:
            func_D09C(); break;
        case 0xCF2E:
            func_CF2E(); break;
        case 0xCCB7:
            func_CCB7(); break;
        case 0xCDBF:
            func_CDBF(); break;
        case 0xCB96:
            func_CB96(); break;
        case 0xCD6B:
            func_CD6B(); break;
        case 0xCDD7:
            func_CDD7(); break;
        case 0xCF55:
            func_CF55(); break;
        case 0xCD9C:
            func_CD9C(); break;
        case 0xCDFA:
            func_CDFA(); break;
        case 0xE269:
            func_E269(); break;
        case 0xCD92:
            func_CD92(); break;
        case 0xDE4A:
            func_DE4A(); break;
        case 0xD055:
            func_D055(); break;
        case 0xE7A2:
            func_E7A2(); break;
        case 0xE8BE:
            func_E8BE(); break;
        case 0xD638:
            func_D638(); break;
        case 0xD144:
            func_D144(); break;
        case 0xD150:
            func_D150(); break;
        case 0xCFB7:
            func_CFB7(); break;
        case 0xCFBE:
            func_CFBE(); break;
        case 0xD275:
            func_D275(); break;
        case 0xF1EE:
            func_F1EE(); break;
        case 0xD1F7:
            func_D1F7(); break;
        case 0xD2EB:
            func_D2EB(); break;
        case 0xD359:
            func_D359(); break;
        case 0xD38E:
            func_D38E(); break;
        case 0xD315:
            func_D315(); break;
        case 0xD306:
            func_D306(); break;
        case 0xCBB4:
            func_CBB4(); break;
        case 0xCF6E:
            func_CF6E(); break;
        case 0xD48C:
            func_D48C(); break;
        case 0xED65:
            func_ED65(); break;
        case 0xCC07:
            switch (g_current_bank) {
                default: func_CC07(); break;
                case 1: func_CC07_b1(); break;
                case 2: func_CC07_b2(); break;
                case 3: func_CC07_b3(); break;
                case 4: func_CC07_b4(); break;
                case 5: func_CC07_b5(); break;
            }
            break;
        case 0xE249:
            func_E249(); break;
        case 0xD411:
            func_D411(); break;
        case 0xD47E:
            func_D47E(); break;
        case 0xCF81:
            func_CF81(); break;
        case 0xCBCA:
            func_CBCA(); break;
        case 0xCBAC:
            func_CBAC(); break;
        case 0xCBEF:
            func_CBEF(); break;
        case 0xA315:
            func_A315_b3(); break;
        case 0xE5E2:
            func_E5E2(); break;
        case 0xEA26:
            func_EA26(); break;
        case 0xFFA9:
            func_FFA9(); break;
        case 0xED51:
            func_ED51(); break;
        case 0xEB85:
            func_EB85(); break;
        case 0xF1F4:
            func_F1F4(); break;
        case 0xED5B:
            func_ED5B(); break;
        case 0xED7A:
            func_ED7A(); break;
        case 0xED8C:
            func_ED8C(); break;
        case 0x95AE:
            switch (g_current_bank) {
                case 0: func_95AE_b0(); break;
                case 1: func_95AE_b1(); break;
                case 2: func_95AE_b2(); break;
                case 3: func_95AE_b3(); break;
                case 4: func_95AE_b4(); break;
                case 5: func_95AE_b5(); break;
                case 6: func_95AE_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xED97:
            func_ED97(); break;
        case 0xEDA0:
            func_EDA0(); break;
        case 0xEF09:
            func_EF09(); break;
        case 0xEF00:
            func_EF00(); break;
        case 0xEDC3:
            func_EDC3(); break;
        case 0xEDF8:
            func_EDF8(); break;
        case 0xEDFE:
            func_EDFE(); break;
        case 0xEE63:
            func_EE63(); break;
        case 0xEEA1:
            func_EEA1(); break;
        case 0xEEA6:
            func_EEA6(); break;
        case 0xEEAE:
            func_EEAE(); break;
        case 0xEECA:
            func_EECA(); break;
        case 0xEEEE:
            func_EEEE(); break;
        case 0xEEF4:
            func_EEF4(); break;
        case 0xEEFA:
            func_EEFA(); break;
        case 0xEB0C:
            func_EB0C(); break;
        case 0xEDD6:
            func_EDD6(); break;
        case 0xF01C:
            func_F01C(); break;
        case 0xEA60:
            func_EA60(); break;
        case 0xEB06:
            func_EB06(); break;
        case 0xEB8C:
            func_EB8C(); break;
        case 0xEC04:
            func_EC04(); break;
        case 0xEC2F:
            func_EC2F(); break;
        case 0xEC57:
            func_EC57(); break;
        case 0xF0A2:
            func_F0A2(); break;
        case 0xE57C:
            func_E57C(); break;
        case 0xE70C:
            func_E70C(); break;
        case 0xEAD4:
            func_EAD4(); break;
        case 0xEB7A:
            func_EB7A(); break;
        case 0xEB28:
            func_EB28(); break;
        case 0xEB4D:
            func_EB4D(); break;
        case 0xEB24:
            func_EB24(); break;
        case 0xFB7B:
            func_FB7B(); break;
        case 0xF85A:
            func_F85A(); break;
        case 0xEB92:
            func_EB92(); break;
        case 0xEE41:
            func_EE41(); break;
        case 0xEE4A:
            func_EE4A(); break;
        case 0xEE3D:
            func_EE3D(); break;
        case 0xDC67:
            func_DC67(); break;
        case 0xEE86:
            func_EE86(); break;
        case 0xEC09:
            func_EC09(); break;
        case 0x95B1:
            switch (g_current_bank) {
                case 0: func_95B1_b0(); break;
                case 1: func_95B1_b1(); break;
                case 2: func_95B1_b2(); break;
                case 3: func_95B1_b3(); break;
                case 4: func_95B1_b4(); break;
                case 5: func_95B1_b5(); break;
                case 6: func_95B1_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x95B4:
            switch (g_current_bank) {
                case 0: func_95B4_b0(); break;
                case 1: func_95B4_b1(); break;
                case 2: func_95B4_b2(); break;
                case 3: func_95B4_b3(); break;
                case 4: func_95B4_b4(); break;
                case 5: func_95B4_b5(); break;
                case 6: func_95B4_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x95B7:
            switch (g_current_bank) {
                case 0: func_95B7_b0(); break;
                case 1: func_95B7_b1(); break;
                case 2: func_95B7_b2(); break;
                case 3: func_95B7_b3(); break;
                case 4: func_95B7_b4(); break;
                case 5: func_95B7_b5(); break;
                case 6: func_95B7_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xEEC6:
            func_EEC6(); break;
        case 0x95BA:
            switch (g_current_bank) {
                case 0: func_95BA_b0(); break;
                case 1: func_95BA_b1(); break;
                case 2: func_95BA_b2(); break;
                case 3: func_95BA_b3(); break;
                case 4: func_95BA_b4(); break;
                case 5: func_95BA_b5(); break;
                case 6: func_95BA_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xEF9E:
            func_EF9E(); break;
        case 0xEF78:
            func_EF78(); break;
        case 0xEF13:
            func_EF13(); break;
        case 0xF19A:
            func_F19A(); break;
        case 0xF149:
            func_F149(); break;
        case 0xF2B4:
            func_F2B4(); break;
        case 0xF32A:
            func_F32A(); break;
        case 0xDC7F:
            func_DC7F(); break;
        case 0xF277:
            func_F277(); break;
        case 0xF152:
            func_F152(); break;
        case 0xF140:
            func_F140(); break;
        case 0xF2CA:
            func_F2CA(); break;
        case 0xF282:
            func_F282(); break;
        case 0xF09F:
            func_F09F(); break;
        case 0xF172:
            func_F172(); break;
        case 0xF1B3:
            func_F1B3(); break;
        case 0xF162:
            func_F162(); break;
        case 0xF1FA:
            func_F1FA(); break;
        case 0xF2ED:
            func_F2ED(); break;
        case 0xF186:
            func_F186(); break;
        case 0xDC82:
            func_DC82(); break;
        case 0xF311:
            func_F311(); break;
        case 0xF1BF:
            func_F1BF(); break;
        case 0xF1D2:
            func_F1D2(); break;
        case 0xF17F:
            func_F17F(); break;
        case 0xF193:
            func_F193(); break;
        case 0xF1E0:
            func_F1E0(); break;
        case 0xF1D9:
            func_F1D9(); break;
        case 0xF1E7:
            func_F1E7(); break;
        case 0xF1CB:
            func_F1CB(); break;
        case 0xF262:
            func_F262(); break;
        case 0xF22B:
            func_F22B(); break;
        case 0xF266:
            func_F266(); break;
        case 0xF256:
            func_F256(); break;
        case 0xF2E8:
            func_F2E8(); break;
        case 0xF338:
            func_F338(); break;
        case 0xF306:
            func_F306(); break;
        case 0xF279:
            func_F279(); break;
        case 0xF332:
            func_F332(); break;
        case 0xF340:
            func_F340(); break;
        case 0xF2DF:
            func_F2DF(); break;
        case 0xF270:
            func_F270(); break;
        case 0xF2BF:
            func_F2BF(); break;
        case 0xF27B:
            func_F27B(); break;
        case 0xF351:
            func_F351(); break;
        case 0xF37F:
            func_F37F(); break;
        case 0xF3AA:
            func_F3AA(); break;
        case 0xF3BE:
            func_F3BE(); break;
        case 0xF3E6:
            func_F3E6(); break;
        case 0xF40D:
            func_F40D(); break;
        case 0xF43E:
            func_F43E(); break;
        case 0xF483:
            func_F483(); break;
        case 0xF4EE:
            func_F4EE(); break;
        case 0xF6B9:
            func_F6B9(); break;
        case 0xF75B:
            func_F75B(); break;
        case 0xF682:
            func_F682(); break;
        case 0xF676:
            func_F676(); break;
        case 0xF7BA:
            func_F7BA(); break;
        case 0xF40A:
            func_F40A(); break;
        case 0xF51E:
            func_F51E(); break;
        case 0xF536:
            func_F536(); break;
        case 0x95E5:
            switch (g_current_bank) {
                case 7: func_D5E5(); break;
                case 0: func_95E5_b0(); break;
                case 1: func_95E5_b1(); break;
                case 2: func_95E5_b2(); break;
                case 3: func_95E5_b3(); break;
                case 4: func_95E5_b4(); break;
                case 5: func_95E5_b5(); break;
                case 6: func_95E5_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xCEF9:
            func_CEF9(); break;
        case 0xCBBC:
            func_CBBC(); break;
        case 0xCBC0:
            func_CBC0(); break;
        case 0xF515:
            func_F515(); break;
        case 0xF423:
            func_F423(); break;
        case 0xCBD2:
            func_CBD2(); break;
        case 0xF673:
            func_F673(); break;
        case 0x95A8:
            switch (g_current_bank) {
                case 7: func_D5A8(); break;
                case 0: func_95A8_b0(); break;
                case 1: func_95A8_b1(); break;
                case 2: func_95A8_b2(); break;
                case 3: func_95A8_b3(); break;
                case 4: func_95A8_b4(); break;
                case 5: func_95A8_b5(); break;
                case 6: func_95A8_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xCBB8:
            func_CBB8(); break;
        case 0xF42D:
            func_F42D(); break;
        case 0xCBD6:
            func_CBD6(); break;
        case 0xCBB0:
            func_CBB0(); break;
        case 0xCBCE:
            func_CBCE(); break;
        case 0xDCFC:
            func_DCFC(); break;
        case 0xF844:
            func_F844(); break;
        case 0xF7B3:
            func_F7B3(); break;
        case 0xF752:
            func_F752(); break;
        case 0xF744:
            switch (g_current_bank) {
                default: func_F744(); break;
                case 1: func_F744_b1(); break;
                case 2: func_F744_b2(); break;
                case 3: func_F744_b3(); break;
                case 4: func_F744_b4(); break;
                case 5: func_F744_b5(); break;
            }
            break;
        case 0x81DA:
            switch (g_current_bank) {
                case 0: func_81DA_b0(); break;
                case 1: func_81DA_b1(); break;
                case 2: func_81DA_b2(); break;
                case 3: func_81DA_b3(); break;
                case 4: func_81DA_b4(); break;
                case 5: func_81DA_b5(); break;
                case 6: func_81DA_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x820F:
            switch (g_current_bank) {
                case 0: func_820F_b0(); break;
                case 1: func_820F_b1(); break;
                case 2: func_820F_b2(); break;
                case 3: func_820F_b3(); break;
                case 4: func_820F_b4(); break;
                case 5: func_820F_b5(); break;
                case 6: func_820F_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xCBA4:
            func_CBA4(); break;
        case 0xF699:
            func_F699(); break;
        case 0xF839:
            func_F839(); break;
        case 0x8206:
            switch (g_current_bank) {
                case 0: func_8206_b0(); break;
                case 1: func_8206_b1(); break;
                case 2: func_8206_b2(); break;
                case 3: func_8206_b3(); break;
                case 4: func_8206_b4(); break;
                case 5: func_8206_b5(); break;
                case 6: func_8206_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xF84B:
            func_F84B(); break;
        case 0xF8E8:
            func_F8E8(); break;
        case 0xF92C:
            func_F92C(); break;
        case 0xF8F8:
            func_F8F8(); break;
        case 0xF91D:
            func_F91D(); break;
        case 0xF690:
            func_F690(); break;
        case 0xFA49:
            func_FA49(); break;
        case 0xF949:
            func_F949(); break;
        case 0xF96A:
            func_F96A(); break;
        case 0xF991:
            func_F991(); break;
        case 0xFA6B:
            func_FA6B(); break;
        case 0xFA91:
            func_FA91(); break;
        case 0xFA5B:
            func_FA5B(); break;
        case 0xFA1E:
            func_FA1E(); break;
        case 0xFA60:
            func_FA60(); break;
        case 0xF987:
            func_F987(); break;
        case 0x8296:
            switch (g_current_bank) {
                case 0: func_8296_b0(); break;
                case 1: func_8296_b1(); break;
                case 2: func_8296_b2(); break;
                case 3: func_8296_b3(); break;
                case 4: func_8296_b4(); break;
                case 5: func_8296_b5(); break;
                case 6: func_8296_b6(); break;
                case 7: func_8296_b7(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x832F:
            switch (g_current_bank) {
                case 0: func_832F_b0(); break;
                case 1: func_832F_b1(); break;
                case 2: func_832F_b2(); break;
                case 3: func_832F_b3(); break;
                case 4: func_832F_b4(); break;
                case 5: func_832F_b5(); break;
                case 6: func_832F_b6(); break;
                case 7: func_832F_b7(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xF518:
            func_F518(); break;
        case 0xF97C:
            func_F97C(); break;
        case 0xFA7D:
            func_FA7D(); break;
        case 0xE96A:
            switch (g_current_bank) {
                default: func_E96A(); break;
                case 1: func_E96A_b1(); break;
                case 2: func_E96A_b2(); break;
                case 3: func_E96A_b3(); break;
                case 4: func_E96A_b4(); break;
                case 5: func_E96A_b5(); break;
            }
            break;
        case 0xFAB4:
            func_FAB4(); break;
        case 0xFA41:
            func_FA41(); break;
        case 0xF97E:
            func_F97E(); break;
        case 0xFAFF:
            func_FAFF(); break;
        case 0xF693:
            func_F693(); break;
        case 0xFBEC:
            func_FBEC(); break;
        case 0xE9B7:
            func_E9B7(); break;
        case 0xE54A:
            func_E54A(); break;
        case 0xE53F:
            func_E53F(); break;
        case 0xD4CB:
            func_D4CB(); break;
        case 0xD4EB:
            func_D4EB(); break;
        case 0xD52C:
            func_D52C(); break;
        case 0xD5C1:
            func_D5C1(); break;
        case 0xD5C8:
            func_D5C8(); break;
        case 0xD65E:
            func_D65E(); break;
        case 0xD670:
            func_D670(); break;
        case 0xD691:
            func_D691(); break;
        case 0xD5FC:
            func_D5FC(); break;
        case 0xD5DA:
            func_D5DA(); break;
        case 0xD609:
            func_D609(); break;
        case 0xD5E4:
            func_D5E4(); break;
        case 0x9D35:
            func_9D35_b1(); break;
        case 0x9B9D:
            func_9B9D_b2(); break;
        case 0x9B25:
            func_9B25_b3(); break;
        case 0x9C49:
            func_9C49_b4(); break;
        case 0x9B48:
            func_9B48_b5(); break;
        case 0xD7D1:
            func_D7D1(); break;
        case 0xD80E:
            func_D80E(); break;
        case 0xD83D:
            func_D83D(); break;
        case 0xD870:
            func_D870(); break;
        case 0xD8A3:
            func_D8A3(); break;
        case 0xD8BF:
            func_D8BF(); break;
        case 0xD94E:
            func_D94E(); break;
        case 0xD79E:
            func_D79E(); break;
        case 0xD9D3:
            func_D9D3(); break;
        case 0xDAB0:
            func_DAB0(); break;
        case 0xDA1A:
            func_DA1A(); break;
        case 0xDADA:
            func_DADA(); break;
        case 0xFC98:
            func_FC98(); break;
        case 0x8B74:
            switch (g_current_bank) {
                case 7: func_CB74(); break;
                case 1: func_8B74_b1(); break;
                case 2: func_8B74_b2(); break;
                case 3: func_8B74_b3(); break;
                case 4: func_8B74_b4(); break;
                case 5: func_8B74_b5(); break;
                case 6: func_8B74_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8B53:
            switch (g_current_bank) {
                case 1: func_8B53_b1(); break;
                case 2: func_8B53_b2(); break;
                case 3: func_8B53_b3(); break;
                case 4: func_8B53_b4(); break;
                case 5: func_8B53_b5(); break;
                case 6: func_8B53_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8B87:
            switch (g_current_bank) {
                case 7: func_CB87(); break;
                case 1: func_8B87_b1(); break;
                case 2: func_8B87_b2(); break;
                case 3: func_8B87_b3(); break;
                case 4: func_8B87_b4(); break;
                case 5: func_8B87_b5(); break;
                case 6: func_8B87_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xFE27:
            func_FE27(); break;
        case 0xFE3D:
            func_FE3D(); break;
        case 0xFE54:
            func_FE54(); break;
        case 0xFE59:
            func_FE59(); break;
        case 0xFE83:
            func_FE83(); break;
        case 0xFE6D:
            func_FE6D(); break;
        case 0xFF54:
            func_FF54(); break;
        case 0xFAB3:
            func_FAB3(); break;
        case 0xDB16:
            func_DB16(); break;
        case 0xDB42:
            func_DB42(); break;
        case 0xDB36:
            func_DB36(); break;
        case 0xD79F:
            func_D79F(); break;
        case 0xDC1C:
            func_DC1C(); break;
        case 0xDB2F:
            func_DB2F(); break;
        case 0xDC51:
            func_DC51(); break;
        case 0xDC54:
            func_DC54(); break;
        case 0xFE05:
            func_FE05(); break;
        case 0xFDE2:
            func_FDE2(); break;
        case 0xC41D:
            func_C41D(); break;
        case 0x8BF5:
            func_8BF5_b0(); break;
        case 0x8C39:
            func_8C39_b0(); break;
        case 0x8C0A:
            func_8C0A_b0(); break;
        case 0x8C03:
            func_8C03_b0(); break;
        case 0x8DA9:
            func_8DA9_b0(); break;
        case 0xE8CE:
            func_E8CE(); break;
        case 0xE90F:
            func_E90F(); break;
        case 0x95C0:
            switch (g_current_bank) {
                case 0: func_95C0_b0(); break;
                case 1: func_95C0_b1(); break;
                case 2: func_95C0_b2(); break;
                case 3: func_95C0_b3(); break;
                case 4: func_95C0_b4(); break;
                case 5: func_95C0_b5(); break;
                case 6: func_95C0_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xD651:
            func_D651(); break;
        case 0xE9BE:
            func_E9BE(); break;
        case 0xE98E:
            func_E98E(); break;
        case 0xE7E6:
            func_E7E6(); break;
        case 0xE7DE:
            func_E7DE(); break;
        case 0xDF91:
            func_DF91(); break;
        case 0xDF75:
            func_DF75(); break;
        case 0xDFAD:
            func_DFAD(); break;
        case 0xCF4C:
            func_CF4C(); break;
        case 0xD095:
            func_D095(); break;
        case 0xD210:
            func_D210(); break;
        case 0xCDBE:
            func_CDBE(); break;
        case 0xCBDE:
            func_CBDE(); break;
        case 0xCE66:
            func_CE66(); break;
        case 0xCF4E:
            func_CF4E(); break;
        case 0xCBF3:
            func_CBF3(); break;
        case 0xE268:
            func_E268(); break;
        case 0xE25D:
            func_E25D(); break;
        case 0xE37A:
            func_E37A(); break;
        case 0xE457:
            func_E457(); break;
        case 0xE31A:
            func_E31A(); break;
        case 0xE4A3:
            func_E4A3(); break;
        case 0xE3E5:
            func_E3E5(); break;
        case 0xE626:
            func_E626(); break;
        case 0xE365:
            func_E365(); break;
        case 0xE668:
            func_E668(); break;
        case 0xD088:
            func_D088(); break;
        case 0xE7B5:
            func_E7B5(); break;
        case 0xCBA8:
            func_CBA8(); break;
        case 0xCFC5:
            func_CFC5(); break;
        case 0xD38A:
            func_D38A(); break;
        case 0xD340:
            func_D340(); break;
        case 0xD26B:
            func_D26B(); break;
        case 0xD358:
            func_D358(); break;
        case 0xD34D:
            func_D34D(); break;
        case 0xCBC6:
            func_CBC6(); break;
        case 0xCB9E:
            func_CB9E(); break;
        case 0xCBA0:
            func_CBA0(); break;
        case 0xD4B4:
            func_D4B4(); break;
        case 0xD4A8:
            func_D4A8(); break;
        case 0x99B1:
            func_99B1_b3(); break;
        case 0xE564:
            func_E564(); break;
        case 0xE880:
            func_E880(); break;
        case 0xD976:
            func_D976(); break;
        case 0xED57:
            func_ED57(); break;
        case 0x9C6F:
            func_9C6F_b3(); break;
        case 0xEDFB:
            func_EDFB(); break;
        case 0xEE83:
            func_EE83(); break;
        case 0xEEAB:
            func_EEAB(); break;
        case 0xEF8C:
            func_EF8C(); break;
        case 0xEB8F:
            func_EB8F(); break;
        case 0xEC54:
            func_EC54(); break;
        case 0xE549:
            func_E549(); break;
        case 0xA29E:
            switch (g_current_bank) {
                case 0: func_A29E_b0(); break;
                case 1: func_A29E_b1(); break;
                case 2: func_A29E_b2(); break;
                case 3: func_A29E_b3(); break;
                case 4: func_A29E_b4(); break;
                case 5: func_A29E_b5(); break;
                case 6: func_A29E_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xE6FE:
            func_E6FE(); break;
        case 0xE590:
            func_E590(); break;
        case 0xC2C4:
            func_C2C4(); break;
        case 0x9CE6:
            func_9CE6_b3(); break;
        case 0x9D21:
            func_9D21_b3(); break;
        case 0x9D3D:
            func_9D3D_b3(); break;
        case 0x9D6C:
            func_9D6C_b3(); break;
        case 0xF298:
            func_F298(); break;
        case 0xF329:
            func_F329(); break;
        case 0xF1A7:
            func_F1A7(); break;
        case 0xF281:
            func_F281(); break;
        case 0xF2D8:
            func_F2D8(); break;
        case 0xF6B8:
            func_F6B8(); break;
        case 0xF530:
            func_F530(); break;
        case 0x8024:
            switch (g_current_bank) {
                case 1: func_8024_b1(); break;
                case 2: func_8024_b2(); break;
                case 3: func_8024_b3(); break;
                case 4: func_8024_b4(); break;
                case 5: func_8024_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xF59A:
            func_F59A(); break;
        case 0x9593:
            func_9593_b2(); break;
        case 0xFFFF:
            func_FFFF(); break;
        case 0x801E:
            switch (g_current_bank) {
                case 7: func_C01E(); break;
                case 2: func_801E_b2(); break;
                case 5: func_801E_b5(); break;
                case 4: func_801E_b4(); break;
                case 6: func_801E_b6(); break;
                case 1: func_801E_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9839:
            func_9839_b2(); break;
        case 0x9954:
            func_9954_b2(); break;
        case 0x98F4:
            func_98F4_b2(); break;
        case 0x802A:
            switch (g_current_bank) {
                case 7: func_C02A(); break;
                case 2: func_802A_b2(); break;
                case 3: func_802A_b3(); break;
                case 5: func_802A_b5(); break;
                case 6: func_802A_b6(); break;
                case 4: func_802A_b4(); break;
                case 1: func_802A_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x801B:
            switch (g_current_bank) {
                case 7: func_C01B(); break;
                case 2: func_801B_b2(); break;
                case 5: func_801B_b5(); break;
                case 4: func_801B_b4(); break;
                case 6: func_801B_b6(); break;
                case 1: func_801B_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8009:
            switch (g_current_bank) {
                case 7: func_C009(); break;
                case 2: func_8009_b2(); break;
                case 5: func_8009_b5(); break;
                case 4: func_8009_b4(); break;
                case 6: func_8009_b6(); break;
                case 1: func_8009_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x984D:
            func_984D_b2(); break;
        case 0x9A0A:
            func_9A0A_b2(); break;
        case 0x9A2F:
            func_9A2F_b2(); break;
        case 0x99F5:
            func_99F5_b2(); break;
        case 0x9A13:
            switch (g_current_bank) {
                case 2: func_9A13_b2(); break;
                case 5: func_9A13_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x800C:
            switch (g_current_bank) {
                case 2: func_800C_b2(); break;
                case 5: func_800C_b5(); break;
                case 4: func_800C_b4(); break;
                case 1: func_800C_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB102:
            func_B102_b2(); break;
        case 0x9A27:
            switch (g_current_bank) {
                case 2: func_9A27_b2(); break;
                case 3: func_9A27_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8021:
            switch (g_current_bank) {
                case 7: func_C021(); break;
                case 2: func_8021_b2(); break;
                case 5: func_8021_b5(); break;
                case 6: func_8021_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9B59:
            func_9B59_b2(); break;
        case 0xA320:
            func_A320_b3(); break;
        case 0xF969:
            func_F969(); break;
        case 0xF984:
            func_F984(); break;
        case 0x8269:
            func_8269_b6(); break;
        case 0xA480:
            func_A480_b6(); break;
        case 0xE06E:
            func_E06E(); break;
        case 0x8844:
            func_8844_b6(); break;
        case 0x8B9D:
            switch (g_current_bank) {
                case 6: func_8B9D_b6(); break;
                case 1: func_8B9D_b1(); break;
                case 2: func_8B9D_b2(); break;
                case 3: func_8B9D_b3(); break;
                case 4: func_8B9D_b4(); break;
                case 5: func_8B9D_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8BD5:
            switch (g_current_bank) {
                case 6: func_8BD5_b6(); break;
                case 1: func_8BD5_b1(); break;
                case 2: func_8BD5_b2(); break;
                case 3: func_8BD5_b3(); break;
                case 4: func_8BD5_b4(); break;
                case 5: func_8BD5_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8C01:
            switch (g_current_bank) {
                case 6: func_8C01_b6(); break;
                case 1: func_8C01_b1(); break;
                case 2: func_8C01_b2(); break;
                case 3: func_8C01_b3(); break;
                case 4: func_8C01_b4(); break;
                case 5: func_8C01_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8C84:
            switch (g_current_bank) {
                case 6: func_8C84_b6(); break;
                case 1: func_8C84_b1(); break;
                case 2: func_8C84_b2(); break;
                case 3: func_8C84_b3(); break;
                case 4: func_8C84_b4(); break;
                case 5: func_8C84_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8CC6:
            switch (g_current_bank) {
                case 6: func_8CC6_b6(); break;
                case 1: func_8CC6_b1(); break;
                case 2: func_8CC6_b2(); break;
                case 3: func_8CC6_b3(); break;
                case 4: func_8CC6_b4(); break;
                case 5: func_8CC6_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8CF0:
            switch (g_current_bank) {
                case 7: func_CCF0(); break;
                case 6: func_8CF0_b6(); break;
                case 1: func_8CF0_b1(); break;
                case 2: func_8CF0_b2(); break;
                case 3: func_8CF0_b3(); break;
                case 4: func_8CF0_b4(); break;
                case 5: func_8CF0_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xD2FA:
            func_D2FA(); break;
        case 0x8CFB:
            switch (g_current_bank) {
                case 6: func_8CFB_b6(); break;
                case 1: func_8CFB_b1(); break;
                case 2: func_8CFB_b2(); break;
                case 3: func_8CFB_b3(); break;
                case 4: func_8CFB_b4(); break;
                case 5: func_8CFB_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC020:
            func_C020(); break;
        case 0xC0E0:
            func_C0E0(); break;
        case 0xE571:
            func_E571(); break;
        case 0xE701:
            func_E701(); break;
        case 0xD522:
            func_D522(); break;
        case 0xD51F:
            func_D51F(); break;
        case 0xD624:
            func_D624(); break;
        case 0xD4F8:
            func_D4F8(); break;
        case 0xD517:
            func_D517(); break;
        case 0xCB9A:
            func_CB9A(); break;
        case 0xD66B:
            func_D66B(); break;
        case 0xD6A7:
            func_D6A7(); break;
        case 0xD5FB:
            func_D5FB(); break;
        case 0xD5F8:
            func_D5F8(); break;
        case 0xE81E:
            func_E81E(); break;
        case 0xD606:
            func_D606(); break;
        case 0xD602:
            func_D602(); break;
        case 0x9B37:
            func_9B37_b3(); break;
        case 0x9DD4:
            func_9DD4_b3(); break;
        case 0xA1E7:
            func_A1E7_b3(); break;
        case 0xA238:
            func_A238_b3(); break;
        case 0xA28B:
            func_A28B_b3(); break;
        case 0xA15E:
            func_A15E_b3(); break;
        case 0xD806:
            func_D806(); break;
        case 0xD648:
            func_D648(); break;
        case 0xD866:
            func_D866(); break;
        case 0xD892:
            func_D892(); break;
        case 0xFEDC:
            func_FEDC(); break;
        case 0xDA3D:
            func_DA3D(); break;
        case 0xDA7C:
            func_DA7C(); break;
        case 0xFCA5:
            func_FCA5(); break;
        case 0xFCB1:
            func_FCB1(); break;
        case 0xFCBA:
            func_FCBA(); break;
        case 0x8420:
            switch (g_current_bank) {
                case 7: func_C420(); break;
                case 0: func_8420_b0(); break;
                case 1: func_8420_b1(); break;
                case 2: func_8420_b2(); break;
                case 3: func_8420_b3(); break;
                case 4: func_8420_b4(); break;
                case 5: func_8420_b5(); break;
                case 6: func_8420_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xFF3C:
            func_FF3C(); break;
        case 0x8D95:
            func_8D95_b0(); break;
        case 0xE95F:
            func_E95F(); break;
        case 0xE934:
            func_E934(); break;
        case 0xA142:
            func_A142_b3(); break;
        case 0x95BD:
            switch (g_current_bank) {
                case 0: func_95BD_b0(); break;
                case 1: func_95BD_b1(); break;
                case 2: func_95BD_b2(); break;
                case 3: func_95BD_b3(); break;
                case 4: func_95BD_b4(); break;
                case 5: func_95BD_b5(); break;
                case 6: func_95BD_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xE7AD:
            func_E7AD(); break;
        case 0xE364:
            func_E364(); break;
        case 0xE88B:
            func_E88B(); break;
        case 0xD35B:
            func_D35B(); break;
        case 0xD323:
            func_D323(); break;
        case 0xCBC2:
            func_CBC2(); break;
        case 0xE893:
            func_E893(); break;
        case 0xD9BA:
            func_D9BA(); break;
        case 0x9D64:
            func_9D64_b3(); break;
        case 0x9CD6:
            func_9CD6_b3(); break;
        case 0xA28A:
            func_A28A_b3(); break;
        case 0x803F:
            func_803F_b3(); break;
        case 0x9B20:
            func_9B20_b3(); break;
        case 0x9D88:
            func_9D88_b3(); break;
        case 0x9D75:
            func_9D75_b3(); break;
        case 0xC27C:
            func_C27C(); break;
        case 0xF56C:
            func_F56C(); break;
        case 0xFBCA:
            func_FBCA(); break;
        case 0xEB6E:
            func_EB6E(); break;
        case 0xFB88:
            func_FB88(); break;
        case 0xF852:
            func_F852(); break;
        case 0xB0CC:
            switch (g_current_bank) {
                case 2: func_B0CC_b2(); break;
                case 1: func_B0CC_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xF049:
            func_F049(); break;
        case 0xF1FB:
            func_F1FB(); break;
        case 0xF222:
            func_F222(); break;
        case 0xF870:
            func_F870(); break;
        case 0x8BB1:
            switch (g_current_bank) {
                case 6: func_8BB1_b6(); break;
                case 1: func_8BB1_b1(); break;
                case 2: func_8BB1_b2(); break;
                case 3: func_8BB1_b3(); break;
                case 4: func_8BB1_b4(); break;
                case 5: func_8BB1_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xD78B:
            func_D78B(); break;
        case 0xD76A:
            func_D76A(); break;
        case 0xD77F:
            func_D77F(); break;
        case 0xE9C2:
            func_E9C2(); break;
        case 0x9B44:
            func_9B44_b3(); break;
        case 0x9C4D:
            func_9C4D_b3(); break;
        case 0x9B70:
            func_9B70_b3(); break;
        case 0x9C2B:
            func_9C2B_b3(); break;
        case 0x9C31:
            func_9C31_b3(); break;
        case 0x9DF2:
            func_9DF2_b3(); break;
        case 0x9FED:
            func_9FED_b3(); break;
        case 0xA01B:
            func_A01B_b3(); break;
        case 0xA02E:
            func_A02E_b3(); break;
        case 0xA041:
            func_A041_b3(); break;
        case 0x9E43:
            func_9E43_b3(); break;
        case 0x9E31:
            func_9E31_b3(); break;
        case 0x9EF9:
            func_9EF9_b3(); break;
        case 0x9E2E:
            func_9E2E_b3(); break;
        case 0xA072:
            func_A072_b3(); break;
        case 0x9ED6:
            func_9ED6_b3(); break;
        case 0x9F69:
            func_9F69_b3(); break;
        case 0x803C:
            func_803C_b3(); break;
        case 0xA16B:
            func_A16B_b3(); break;
        case 0x9EE7:
            func_9EE7_b3(); break;
        case 0x8045:
            func_8045_b3(); break;
        case 0xA29B:
            func_A29B_b3(); break;
        case 0xA15D:
            func_A15D_b3(); break;
        case 0xFEDB:
            func_FEDB(); break;
        case 0xFECC:
            func_FECC(); break;
        case 0xFD84:
            func_FD84(); break;
        case 0xFD08:
            func_FD08(); break;
        case 0xFD25:
            func_FD25(); break;
        case 0xFCC1:
            func_FCC1(); break;
        case 0x8C7E:
            switch (g_current_bank) {
                case 1: func_8C7E_b1(); break;
                case 2: func_8C7E_b2(); break;
                case 3: func_8C7E_b3(); break;
                case 4: func_8C7E_b4(); break;
                case 5: func_8C7E_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8CF7:
            switch (g_current_bank) {
                case 1: func_8CF7_b1(); break;
                case 2: func_8CF7_b2(); break;
                case 3: func_8CF7_b3(); break;
                case 4: func_8CF7_b4(); break;
                case 5: func_8CF7_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xDC1E:
            switch (g_current_bank) {
                default: func_DC1E(); break;
                case 1: func_DC1E_b1(); break;
                case 2: func_DC1E_b2(); break;
                case 3: func_DC1E_b3(); break;
                case 4: func_DC1E_b4(); break;
                case 5: func_DC1E_b5(); break;
            }
            break;
        case 0x8C76:
            switch (g_current_bank) {
                case 1: func_8C76_b1(); break;
                case 2: func_8C76_b2(); break;
                case 3: func_8C76_b3(); break;
                case 4: func_8C76_b4(); break;
                case 5: func_8C76_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xCC03:
            switch (g_current_bank) {
                default: func_CC03(); break;
                case 1: func_CC03_b1(); break;
                case 2: func_CC03_b2(); break;
                case 3: func_CC03_b3(); break;
                case 4: func_CC03_b4(); break;
                case 5: func_CC03_b5(); break;
            }
            break;
        case 0x8C71:
            switch (g_current_bank) {
                case 1: func_8C71_b1(); break;
                case 2: func_8C71_b2(); break;
                case 3: func_8C71_b3(); break;
                case 4: func_8C71_b4(); break;
                case 5: func_8C71_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xD2FD:
            switch (g_current_bank) {
                default: func_D2FD(); break;
                case 1: func_D2FD_b1(); break;
                case 2: func_D2FD_b2(); break;
                case 3: func_D2FD_b3(); break;
                case 4: func_D2FD_b4(); break;
                case 5: func_D2FD_b5(); break;
            }
            break;
        case 0xCBDA:
            switch (g_current_bank) {
                default: func_CBDA(); break;
                case 1: func_CBDA_b1(); break;
                case 2: func_CBDA_b2(); break;
                case 3: func_CBDA_b3(); break;
                case 4: func_CBDA_b4(); break;
                case 5: func_CBDA_b5(); break;
            }
            break;
        case 0x8CED:
            switch (g_current_bank) {
                case 1: func_8CED_b1(); break;
                case 2: func_8CED_b2(); break;
                case 3: func_8CED_b3(); break;
                case 4: func_8CED_b4(); break;
                case 5: func_8CED_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8C61:
            switch (g_current_bank) {
                case 1: func_8C61_b1(); break;
                case 2: func_8C61_b2(); break;
                case 3: func_8C61_b3(); break;
                case 4: func_8C61_b4(); break;
                case 5: func_8C61_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA0C6:
            func_A0C6_b3(); break;
        case 0xFB87:
            func_FB87(); break;
        case 0xF03D:
            func_F03D(); break;
        case 0xF86F:
            func_F86F(); break;
        case 0x8253:
            func_8253_b6(); break;
        case 0x825A:
            func_825A_b6(); break;
        case 0x824C:
            func_824C_b6(); break;
        case 0xD798:
            func_D798(); break;
        case 0x9BAF:
            func_9BAF_b3(); break;
        case 0x9B84:
            func_9B84_b3(); break;
        case 0x9DF1:
            func_9DF1_b3(); break;
        case 0xFD5F:
            func_FD5F(); break;
        case 0xFD6C:
            func_FD6C(); break;
        case 0xCA2F:
            func_CA2F(); break;
        case 0xD0CA:
            func_D0CA(); break;
        case 0xD0CB:
            func_D0CB(); break;
        case 0xEFD0:
            func_EFD0(); break;
        case 0xC001:
            func_C001(); break;
        case 0xFA20:
            func_FA20(); break;
        case 0xFA21:
            func_FA21(); break;
        case 0xC4FB:
            func_C4FB(); break;
        case 0xCAC5:
            func_CAC5(); break;
        case 0xC800:
            func_C800(); break;
        case 0xD0C8:
            func_D0C8(); break;
        case 0xFBD1:
            func_FBD1(); break;
        case 0xC6FB:
            func_C6FB(); break;
        case 0xC6FC:
            func_C6FC(); break;
        case 0xE001:
            func_E001(); break;
        case 0xE002:
            func_E002(); break;
        case 0xD001:
            func_D001(); break;
        case 0xF1D0:
            func_F1D0(); break;
        case 0xF1D1:
            func_F1D1(); break;
        case 0xF3B0:
            func_F3B0(); break;
        case 0xF3B1:
            func_F3B1(); break;
        case 0xFD85:
            func_FD85(); break;
        case 0xFC84:
            func_FC84(); break;
        case 0xC821:
            func_C821(); break;
        case 0xC159:
            func_C159(); break;
        case 0xFF85:
            func_FF85(); break;
        case 0xFF86:
            func_FF86(); break;
        case 0xFE85:
            func_FE85(); break;
        case 0xFE86:
            func_FE86(); break;
        case 0xFA85:
            func_FA85(); break;
        case 0xC4B3:
            func_C4B3(); break;
        case 0xC82F:
            func_C82F(); break;
        case 0xC830:
            func_C830(); break;
        case 0xDE20:
            func_DE20(); break;
        case 0xDE21:
            func_DE21(); break;
        case 0xC4DF:
            func_C4DF(); break;
        case 0xD0C4:
            func_D0C4(); break;
        case 0xD0C5:
            func_D0C5(); break;
        case 0xC267:
            func_C267(); break;
        case 0xC115:
            func_C115(); break;
        case 0xE6C2:
            func_E6C2(); break;
        case 0xD01B:
            func_D01B(); break;
        case 0xC0CC:
            func_C0CC(); break;
        case 0xC0BD:
            func_C0BD(); break;
        case 0xF01D:
            func_F01D(); break;
        case 0xF01E:
            func_F01E(); break;
        case 0xE020:
            func_E020(); break;
        case 0xE021:
            func_E021(); break;
        case 0xC1E1:
            func_C1E1(); break;
        case 0xCA20:
            func_CA20(); break;
        case 0xCA21:
            func_CA21(); break;
        case 0xC216:
            func_C216(); break;
        case 0xD821:
            func_D821(); break;
        case 0xFFD9:
            func_FFD9(); break;
        case 0xC97F:
            func_C97F(); break;
        case 0xF010:
            func_F010(); break;
        case 0xF011:
            func_F011(); break;
        case 0xF003:
            func_F003(); break;
        case 0xF004:
            func_F004(); break;
        case 0xC908:
            func_C908(); break;
        case 0xD005:
            func_D005(); break;
        case 0xD006:
            func_D006(); break;
        case 0xC27D:
            func_C27D(); break;
        case 0xC802:
            func_C802(); break;
        case 0xC81E:
            func_C81E(); break;
        case 0xD1C8:
            func_D1C8(); break;
        case 0xD1C9:
            func_D1C9(); break;
        case 0xC8D2:
            func_C8D2(); break;
        case 0xC92C:
            func_C92C(); break;
        case 0xC9B2:
            func_C9B2(); break;
        case 0xC4C9:
            func_C4C9(); break;
        case 0xC4CA:
            func_C4CA(); break;
        case 0xC9C5:
            func_C9C5(); break;
        case 0xC156:
            func_C156(); break;
        case 0xD7C1:
            func_D7C1(); break;
        case 0xD7C2:
            func_D7C2(); break;
        case 0xC9D8:
            func_C9D8(); break;
        case 0xC495:
            func_C495(); break;
        case 0xE6C4:
            func_E6C4(); break;
        case 0xE6C5:
            func_E6C5(); break;
        case 0xC16E:
            func_C16E(); break;
        case 0xC920:
            func_C920(); break;
        case 0xFFA5:
            func_FFA5(); break;
        case 0xFB29:
            func_FB29(); break;
        case 0xCA01:
            func_CA01(); break;
        case 0xCA02:
            func_CA02(); break;
        case 0xC19F:
            func_C19F(); break;
        case 0xC1A0:
            func_C1A0(); break;
        case 0xCAFA:
            func_CAFA(); break;
        case 0xCAFB:
            func_CAFB(); break;
        case 0xF7D0:
            func_F7D0(); break;
        case 0xF7D1:
            func_F7D1(); break;
        case 0xF0AA:
            func_F0AA(); break;
        case 0xF4A9:
            func_F4A9(); break;
        case 0xF4AA:
            func_F4AA(); break;
        case 0xFB10:
            func_FB10(); break;
        case 0xEAF1:
            func_EAF1(); break;
        case 0xE800:
            func_E800(); break;
        case 0xE801:
            func_E801(); break;
        case 0xE0E8:
            func_E0E8(); break;
        case 0xE0E0:
            func_E0E0(); break;
        case 0xE0E1:
            func_E0E1(); break;
        case 0xD01D:
            func_D01D(); break;
        case 0xC74C:
            func_C74C(); break;
        case 0xC220:
            func_C220(); break;
        case 0xE8C3:
            func_E8C3(); break;
        case 0xE6E8:
            func_E6E8(); break;
        case 0xE6E9:
            func_E6E9(); break;
        case 0xF001:
            func_F001(); break;
        case 0xC514:
            func_C514(); break;
        case 0xC515:
            func_C515(); break;
        case 0xD608:
            func_D608(); break;
        case 0xD018:
            func_D018(); break;
        case 0xD019:
            func_D019(); break;
        case 0xC601:
            func_C601(); break;
        case 0xC602:
            func_C602(); break;
        case 0xF02A:
            func_F02A(); break;
        case 0xF02B:
            func_F02B(); break;
        case 0xD603:
            func_D603(); break;
        case 0xCA2A:
            func_CA2A(); break;
        case 0xCA2B:
            func_CA2B(); break;
        case 0xF711:
            func_F711(); break;
        case 0xC8A9:
            func_C8A9(); break;
        case 0xC8AA:
            func_C8AA(); break;
        case 0xC8AB:
            func_C8AB(); break;
        case 0xFDA6:
            func_FDA6(); break;
        case 0xFCA6:
            func_FCA6(); break;
        case 0xE603:
            func_E603(); break;
        case 0xC319:
            func_C319(); break;
        case 0xF5D0:
            func_F5D0(); break;
        case 0xF5D1:
            func_F5D1(); break;
        case 0xC8F5:
            func_C8F5(); break;
        case 0xC2A9:
            func_C2A9(); break;
        case 0xCFD1:
            func_CFD1(); break;
        case 0xC36C:
            func_C36C(); break;
        case 0xC8C4:
            func_C8C4(); break;
        case 0xC6C3:
            func_C6C3(); break;
        case 0xC6C4:
            func_C6C4(); break;
        case 0xF6D1:
            func_F6D1(); break;
        case 0xC606:
            func_C606(); break;
        case 0xC607:
            func_C607(); break;
        case 0xD5D0:
            func_D5D0(); break;
        case 0xC377:
            func_C377(); break;
        case 0xE807:
            func_E807(); break;
        case 0xE808:
            func_E808(); break;
        case 0xF089:
            func_F089(); break;
        case 0xC620:
            func_C620(); break;
        case 0xE3D0:
            func_E3D0(); break;
        case 0xE3D1:
            func_E3D1(); break;
        case 0xC807:
            func_C807(); break;
        case 0xC2D0:
            func_C2D0(); break;
        case 0xC2D1:
            func_C2D1(); break;
        case 0xC36F:
            func_C36F(); break;
        case 0xFF49:
            func_FF49(); break;
        case 0xC41E:
            func_C41E(); break;
        case 0xC902:
            func_C902(); break;
        case 0xF029:
            func_F029(); break;
        case 0xC960:
            func_C960(); break;
        case 0xF8B0:
            func_F8B0(); break;
        case 0xF8B1:
            func_F8B1(); break;
        case 0xE5C4:
            func_E5C4(); break;
        case 0xE538:
            func_E538(); break;
        case 0xE539:
            func_E539(); break;
        case 0xC435:
            func_C435(); break;
        case 0xF01A:
            func_F01A(); break;
        case 0xFCF0:
            func_FCF0(); break;
        case 0xFCF1:
            func_FCF1(); break;
        case 0xFEA5:
            func_FEA5(); break;
        case 0xFEA6:
            func_FEA6(); break;
        case 0xE729:
            func_E729(); break;
        case 0xD01E:
            func_D01E(); break;
        case 0xD01F:
            func_D01F(); break;
        case 0xF0D0:
            func_F0D0(); break;
        case 0xF0D1:
            func_F0D1(); break;
        case 0xFAA6:
            func_FAA6(); break;
        case 0xD920:
            func_D920(); break;
        case 0xD921:
            func_D921(); break;
        case 0xC43E:
            func_C43E(); break;
        case 0xC0D0:
            func_C0D0(); break;
        case 0xD080:
            func_D080(); break;
        case 0xD081:
            func_D081(); break;
        case 0xF9D0:
            func_F9D0(); break;
        case 0xF9D1:
            func_F9D1(); break;
        case 0xEDD1:
            func_EDD1(); break;
        case 0xD02D:
            func_D02D(); break;
        case 0xC921:
            func_C921(); break;
        case 0xF005:
            func_F005(); break;
        case 0xC90A:
            func_C90A(); break;
        case 0xF006:
            func_F006(); break;
        case 0xD92D:
            func_D92D(); break;
        case 0xD00A:
            func_D00A(); break;
        case 0xEAF5:
            func_EAF5(); break;
        case 0xEAF6:
            func_EAF6(); break;
        case 0xEAEB:
            func_EAEB(); break;
        case 0xFE29:
            func_FE29(); break;
        case 0xFE2A:
            func_FE2A(); break;
        case 0xC4B7:
            func_C4B7(); break;
        case 0xF024:
            func_F024(); break;
        case 0xF025:
            func_F025(); break;
        case 0xE820:
            func_E820(); break;
        case 0xE821:
            func_E821(); break;
        case 0xC4E9:
            func_C4E9(); break;
        case 0xC511:
            func_C511(); break;
        case 0xE000:
            func_E000(); break;
        case 0xC51F:
            func_C51F(); break;
        case 0xC520:
            func_C520(); break;
        case 0xC531:
            func_C531(); break;
        case 0xC532:
            func_C532(); break;
        case 0xC552:
            func_C552(); break;
        case 0xC553:
            func_C553(); break;
        case 0xC583:
            func_C583(); break;
        case 0xC584:
            func_C584(); break;
        case 0xC590:
            func_C590(); break;
        case 0xC591:
            func_C591(); break;
        case 0xC5B6:
            func_C5B6(); break;
        case 0xC5B7:
            func_C5B7(); break;
        case 0xC5C3:
            func_C5C3(); break;
        case 0xC5C4:
            func_C5C4(); break;
        case 0xC831:
            func_C831(); break;
        case 0xC832:
            func_C832(); break;
        case 0xC45E:
            func_C45E(); break;
        case 0xFF99:
            func_FF99(); break;
        case 0xD720:
            func_D720(); break;
        case 0xC5D7:
            func_C5D7(); break;
        case 0xC5D8:
            func_C5D8(); break;
        case 0xEF20:
            func_EF20(); break;
        case 0xEF21:
            func_EF21(); break;
        case 0xC4F0:
            func_C4F0(); break;
        case 0xC604:
            func_C604(); break;
        case 0xFA10:
            func_FA10(); break;
        case 0xFA11:
            func_FA11(); break;
        case 0xC622:
            func_C622(); break;
        case 0xC5A8:
            func_C5A8(); break;
        case 0xC5A9:
            func_C5A9(); break;
        case 0xF09A:
            func_F09A(); break;
        case 0xC645:
            func_C645(); break;
        case 0xC646:
            func_C646(); break;
        case 0xF8C4:
            func_F8C4(); break;
        case 0xF8C5:
            func_F8C5(); break;
        case 0xD030:
            func_D030(); break;
        case 0xD031:
            func_D031(); break;
        case 0xC677:
            func_C677(); break;
        case 0xC69F:
            func_C69F(); break;
        case 0xC24D:
            func_C24D(); break;
        case 0xF069:
            func_F069(); break;
        case 0xF06A:
            func_F06A(); break;
        case 0xC006:
            func_C006(); break;
        case 0xC007:
            func_C007(); break;
        case 0xE010:
            func_E010(); break;
        case 0xE011:
            func_E011(); break;
        case 0xC017:
            func_C017(); break;
        case 0xC018:
            func_C018(); break;
        case 0xE006:
            func_E006(); break;
        case 0xE007:
            func_E007(); break;
        case 0xC099:
            func_C099(); break;
        case 0xE0BA:
            func_E0BA(); break;
        case 0xC6E0:
            func_C6E0(); break;
        case 0xC6E1:
            func_C6E1(); break;
        case 0xCA88:
            func_CA88(); break;
        case 0xCA89:
            func_CA89(); break;
        case 0xD520:
            func_D520(); break;
        case 0xD521:
            func_D521(); break;
        case 0xC7D6:
            func_C7D6(); break;
        case 0xEF4C:
            func_EF4C(); break;
        case 0xEF4D:
            func_EF4D(); break;
        case 0xC60C:
            func_C60C(); break;
        case 0xEED1:
            func_EED1(); break;
        case 0xE6EF:
            func_E6EF(); break;
        case 0xDB4D:
            func_DB4D(); break;
        case 0xFD86:
            func_FD86(); break;
        case 0xFC86:
            func_FC86(); break;
        case 0xFC29:
            func_FC29(); break;
        case 0xFC2A:
            func_FC2A(); break;
        case 0xE700:
            func_E700(); break;
        case 0xC029:
            func_C029(); break;
        case 0xC02A:
            func_C02A(); break;
        case 0xF085:
            func_F085(); break;
        case 0xCA19:
            func_CA19(); break;
        case 0xFFA3:
            func_FFA3(); break;
        case 0xE875:
            func_E875(); break;
        case 0xE876:
            func_E876(); break;
        case 0xE07A:
            func_E07A(); break;
        case 0xE07B:
            func_E07B(); break;
        case 0xE804:
            func_E804(); break;
        case 0xD0E9:
            func_D0E9(); break;
        case 0xC43A:
            func_C43A(); break;
        case 0xC8BC:
            func_C8BC(); break;
        case 0xE86D:
            func_E86D(); break;
        case 0xE86E:
            func_E86E(); break;
        case 0xE830:
            func_E830(); break;
        case 0xD7AE:
            func_D7AE(); break;
        case 0xD8AD:
            func_D8AD(); break;
        case 0xDAAD:
            func_DAAD(); break;
        case 0xC8B1:
            func_C8B1(); break;
        case 0xE721:
            func_E721(); break;
        case 0xC85A:
            func_C85A(); break;
        case 0xC85B:
            func_C85B(); break;
        case 0xF8D1:
            func_F8D1(); break;
        case 0xE6F8:
            func_E6F8(); break;
        case 0xE6F9:
            func_E6F9(); break;
        case 0xF3D0:
            func_F3D0(); break;
        case 0xF3D1:
            func_F3D1(); break;
        case 0xE630:
            func_E630(); break;
        case 0xE631:
            func_E631(); break;
        case 0xC448:
            func_C448(); break;
        case 0xCA3B:
            func_CA3B(); break;
        case 0xCA3C:
            func_CA3C(); break;
        case 0xF810:
            func_F810(); break;
        case 0xF811:
            func_F811(); break;
        case 0xE0AA:
            func_E0AA(); break;
        case 0xF49E:
            func_F49E(); break;
        case 0xE868:
            func_E868(); break;
        case 0xF2D0:
            func_F2D0(); break;
        case 0xFD20:
            func_FD20(); break;
        case 0xCA70:
            func_CA70(); break;
        case 0xF00F:
            func_F00F(); break;
        case 0xFA84:
            func_FA84(); break;
        case 0xF120:
            func_F120(); break;
        case 0xF121:
            func_F121(); break;
        case 0xE1F2:
            func_E1F2(); break;
        case 0xCB2A:
            func_CB2A(); break;
        case 0xC4AB:
            func_C4AB(); break;
        case 0xC904:
            func_C904(); break;
        case 0xD008:
            func_D008(); break;
        case 0xC4D0:
            func_C4D0(); break;
        case 0xC4D1:
            func_C4D1(); break;
        case 0xCB8F:
            func_CB8F(); break;
        case 0xC998:
            func_C998(); break;
        case 0xC999:
            func_C999(); break;
        case 0xF00A:
            func_F00A(); break;
        case 0xF00B:
            func_F00B(); break;
        case 0xD02E:
            func_D02E(); break;
        case 0xC969:
            func_C969(); break;
        case 0xE068:
            func_E068(); break;
        case 0xE806:
            func_E806(); break;
        case 0xFEE8:
            func_FEE8(); break;
        case 0xFEE9:
            func_FEE9(); break;
        case 0xF068:
            func_F068(); break;
        case 0xF6F0:
            func_F6F0(); break;
        case 0xF6F1:
            func_F6F1(); break;
        case 0xCB74:
            func_CB74(); break;
        case 0xCDB0:
            func_CDB0(); break;
        case 0xCDB1:
            func_CDB1(); break;
        case 0xD9CD:
            func_D9CD(); break;
        case 0xD9CE:
            func_D9CE(); break;
        case 0xFFDA:
            func_FFDA(); break;
        case 0xCA00:
            func_CA00(); break;
        case 0xEE06:
            func_EE06(); break;
        case 0xCF6C:
            func_CF6C(); break;
        case 0xFF04:
            func_FF04(); break;
        case 0xFF05:
            func_FF05(); break;
        case 0xC01E:
            func_C01E(); break;
        case 0xC01F:
            func_C01F(); break;
        case 0xF008:
            func_F008(); break;
        case 0xC004:
            func_C004(); break;
        case 0xC005:
            func_C005(); break;
        case 0xDE4C:
            func_DE4C(); break;
        case 0xCA96:
            func_CA96(); break;
        case 0xCA97:
            func_CA97(); break;
        case 0xCAA1:
            func_CAA1(); break;
        case 0xCAA2:
            func_CAA2(); break;
        case 0xCAC6:
            func_CAC6(); break;
        case 0xCAC7:
            func_CAC7(); break;
        case 0xFE9A:
            func_FE9A(); break;
        case 0xC877:
            func_C877(); break;
        case 0xE8C8:
            func_E8C8(); break;
        case 0xE8C9:
            func_E8C9(); break;
        case 0xD010:
            func_D010(); break;
        case 0xF4D0:
            func_F4D0(); break;
        case 0xF4D1:
            func_F4D1(); break;
        case 0xC869:
            func_C869(); break;
        case 0xE6CA:
            func_E6CA(); break;
        case 0xE6CB:
            func_E6CB(); break;
        case 0xC803:
            func_C803(); break;
        case 0xD00C:
            func_D00C(); break;
        case 0xEFBE:
            func_EFBE(); break;
        case 0xCAEF:
            func_CAEF(); break;
        case 0xCAF0:
            func_CAF0(); break;
        case 0xF0BD:
            func_F0BD(); break;
        case 0xCAF1:
            func_CAF1(); break;
        case 0xF0AB:
            func_F0AB(); break;
        case 0xD068:
            func_D068(); break;
        case 0xD069:
            func_D069(); break;
        case 0xD969:
            func_D969(); break;
        case 0xCB17:
            func_CB17(); break;
        case 0xC805:
            func_C805(); break;
        case 0xC0C8:
            func_C0C8(); break;
        case 0xC0C9:
            func_C0C9(); break;
        case 0xC175:
            func_C175(); break;
        case 0xF346:
            func_F346(); break;
        case 0xD4C0:
            func_D4C0(); break;
        case 0xCC0E:
            func_CC0E(); break;
        case 0xC321:
            func_C321(); break;
        case 0xD7B4:
            func_D7B4(); break;
        case 0xD9D5:
            func_D9D5(); break;
        case 0xFA9E:
            func_FA9E(); break;
        case 0xFC66:
            func_FC66(); break;
        case 0xF93C:
            func_F93C(); break;
        case 0xDD20:
            func_DD20(); break;
        case 0xDD21:
            func_DD21(); break;
        case 0xFBDE:
            func_FBDE(); break;
        case 0xFE1C:
            func_FE1C(); break;
        case 0xC121:
            func_C121(); break;
        case 0xE0C2:
            func_E0C2(); break;
        case 0xF220:
            func_F220(); break;
        case 0xF221:
            func_F221(); break;
        case 0xFAF3:
            func_FAF3(); break;
        case 0xDB18:
            func_DB18(); break;
        case 0xDB38:
            func_DB38(); break;
        case 0xE320:
            func_E320(); break;
        case 0xE321:
            func_E321(); break;
        case 0xE194:
            func_E194(); break;
        case 0xD020:
            func_D020(); break;
        case 0xD021:
            func_D021(); break;
        case 0xD041:
            func_D041(); break;
        case 0xD2D1:
            func_D2D1(); break;
        case 0xE5D0:
            func_E5D0(); break;
        case 0xE5D1:
            func_E5D1(); break;
        case 0xDBD0:
            func_DBD0(); break;
        case 0xDBD1:
            func_DBD1(); break;
        case 0xE84B:
            func_E84B(); break;
        case 0xCC1B:
            func_CC1B(); break;
        case 0xC6CC:
            func_C6CC(); break;
        case 0xC6CD:
            func_C6CD(); break;
        case 0xC2CC:
            func_C2CC(); break;
        case 0xC2CD:
            func_C2CD(); break;
        case 0xCCC3:
            func_CCC3(); break;
        case 0xE1D0:
            func_E1D0(); break;
        case 0xD3A9:
            func_D3A9(); break;
        case 0xD41B:
            func_D41B(); break;
        case 0xD424:
            func_D424(); break;
        case 0xCF29:
            func_CF29(); break;
        case 0xCF2A:
            func_CF2A(); break;
        case 0xF0CF:
            func_F0CF(); break;
        case 0xCF5E:
            func_CF5E(); break;
        case 0xF009:
            func_F009(); break;
        case 0xE120:
            func_E120(); break;
        case 0xE1E2:
            func_E1E2(); break;
        case 0xC9E1:
            func_C9E1(); break;
        case 0xC9E2:
            func_C9E2(); break;
        case 0xCC87:
            func_CC87(); break;
        case 0xCC88:
            func_CC88(); break;
        case 0xEE20:
            func_EE20(); break;
        case 0xEE21:
            func_EE21(); break;
        case 0xCC99:
            func_CC99(); break;
        case 0xC3CD:
            func_C3CD(); break;
        case 0xD0B6:
            func_D0B6(); break;
        case 0xE80A:
            func_E80A(); break;
        case 0xE80B:
            func_E80B(); break;
        case 0xC9E8:
            func_C9E8(); break;
        case 0xC9E9:
            func_C9E9(); break;
        case 0xF027:
            func_F027(); break;
        case 0xF028:
            func_F028(); break;
        case 0xCF6F:
            func_CF6F(); break;
        case 0xCCBE:
            func_CCBE(); break;
        case 0xC0BE:
            func_C0BE(); break;
        case 0xCCC0:
            func_CCC0(); break;
        case 0xCCC1:
            func_CCC1(); break;
        case 0xC00B:
            func_C00B(); break;
        case 0xC026:
            func_C026(); break;
        case 0xC027:
            func_C027(); break;
        case 0xF020:
            func_F020(); break;
        case 0xF021:
            func_F021(); break;
        case 0xC003:
            func_C003(); break;
        case 0xD148:
            func_D148(); break;
        case 0xCD01:
            func_CD01(); break;
        case 0xF064:
            func_F064(); break;
        case 0xCF2F:
            func_CF2F(); break;
        case 0xCCB8:
            func_CCB8(); break;
        case 0xC6CE:
            func_C6CE(); break;
        case 0xD053:
            func_D053(); break;
        case 0xD054:
            func_D054(); break;
        case 0xCB97:
            func_CB97(); break;
        case 0xCDD8:
            func_CDD8(); break;
        case 0xCF56:
            func_CF56(); break;
        case 0xC5E1:
            func_C5E1(); break;
        case 0xC5E2:
            func_C5E2(); break;
        case 0xF04D:
            func_F04D(); break;
        case 0xF04E:
            func_F04E(); break;
        case 0xCD9D:
            func_CD9D(); break;
        case 0xCDFB:
            func_CDFB(); break;
        case 0xE26A:
            func_E26A(); break;
        case 0xF092:
            func_F092(); break;
        case 0xCD93:
            func_CD93(); break;
        case 0xF00E:
            func_F00E(); break;
        case 0xD039:
            func_D039(); break;
        case 0xCD03:
            func_CD03(); break;
        case 0xCD04:
            func_CD04(); break;
        case 0xCDCD:
            func_CDCD(); break;
        case 0xEFF1:
            func_EFF1(); break;
        case 0xED38:
            func_ED38(); break;
        case 0xF6BD:
            func_F6BD(); break;
        case 0xF077:
            func_F077(); break;
        case 0xF078:
            func_F078(); break;
        case 0xFDAA:
            func_FDAA(); break;
        case 0xCE85:
            func_CE85(); break;
        case 0xD0CE:
            func_D0CE(); break;
        case 0xD0CF:
            func_D0CF(); break;
        case 0xF070:
            func_F070(); break;
        case 0xF071:
            func_F071(); break;
        case 0xC632:
            func_C632(); break;
        case 0xC633:
            func_C633(); break;
        case 0xE872:
            func_E872(); break;
        case 0xE873:
            func_E873(); break;
        case 0xF0E8:
            func_F0E8(); break;
        case 0xC9C2:
            func_C9C2(); break;
        case 0xCF4F:
            func_CF4F(); break;
        case 0xCACF:
            func_CACF(); break;
        case 0xCAD0:
            func_CAD0(); break;
        case 0xF7A0:
            func_F7A0(); break;
        case 0xF7A1:
            func_F7A1(); break;
        case 0xF320:
            func_F320(); break;
        case 0xF321:
            func_F321(); break;
        case 0xCBF4:
            func_CBF4(); break;
        case 0xC906:
            func_C906(); break;
        case 0xFFC9:
            func_FFC9(); break;
        case 0xFFCA:
            func_FFCA(); break;
        case 0xF06F:
            func_F06F(); break;
        case 0xF9F0:
            func_F9F0(); break;
        case 0xF9F1:
            func_F9F1(); break;
        case 0xF0C8:
            func_F0C8(); break;
        case 0xF0C9:
            func_F0C9(); break;
        case 0xF324:
            func_F324(); break;
        case 0xF7B0:
            func_F7B0(); break;
        case 0xF7B1:
            func_F7B1(); break;
        case 0xFB20:
            func_FB20(); break;
        case 0xFB21:
            func_FB21(); break;
        case 0xC3FC:
            func_C3FC(); break;
        case 0xE220:
            func_E220(); break;
        case 0xE221:
            func_E221(); break;
        case 0xCC8C:
            func_CC8C(); break;
        case 0xDA20:
            func_DA20(); break;
        case 0xDA21:
            func_DA21(); break;
        case 0xC3DB:
            func_C3DB(); break;
        case 0xCD10:
            func_CD10(); break;
        case 0xCF82:
            func_CF82(); break;
        case 0xCFB8:
            func_CFB8(); break;
        case 0xCF4D:
            func_CF4D(); break;
        case 0xC54C:
            func_C54C(); break;
        case 0xCFC6:
            func_CFC6(); break;
        case 0xFCA9:
            func_FCA9(); break;
        case 0xFCAA:
            func_FCAA(); break;
        case 0xCA03:
            func_CA03(); break;
        case 0xCA04:
            func_CA04(); break;
        case 0xCBCB:
            func_CBCB(); break;
        case 0xC90C:
            func_C90C(); break;
        case 0xD056:
            func_D056(); break;
        case 0xD0D0:
            func_D0D0(); break;
        case 0xCA07:
            func_CA07(); break;
        case 0xC8CA:
            func_C8CA(); break;
        case 0xC4C8:
            func_C4C8(); break;
        case 0xD903:
            func_D903(); break;
        case 0xD099:
            func_D099(); break;
        case 0xD09A:
            func_D09A(); break;
        case 0xD0D1:
            func_D0D1(); break;
        case 0xD09B:
            func_D09B(); break;
        case 0xF210:
            func_F210(); break;
        case 0xF211:
            func_F211(); break;
        case 0xD035:
            func_D035(); break;
        case 0xD036:
            func_D036(); break;
        case 0xF5AA:
            func_F5AA(); break;
        case 0xFD90:
            func_FD90(); break;
        case 0xD639:
            func_D639(); break;
        case 0xCECF:
            func_CECF(); break;
        case 0xCED0:
            func_CED0(); break;
        case 0xD145:
            func_D145(); break;
        case 0xD151:
            func_D151(); break;
        case 0xD0A3:
            func_D0A3(); break;
        case 0xE0A2:
            func_E0A2(); break;
        case 0xE0A3:
            func_E0A3(); break;
        case 0xCBA9:
            func_CBA9(); break;
        case 0xEBBD:
            func_EBBD(); break;
        case 0xEBBE:
            func_EBBE(); break;
        case 0xD1EB:
            func_D1EB(); break;
        case 0xD1EC:
            func_D1EC(); break;
        case 0xCFBF:
            func_CFBF(); break;
        case 0xD0A0:
            func_D0A0(); break;
        case 0xD0A1:
            func_D0A1(); break;
        case 0xF1EF:
            func_F1EF(); break;
        case 0xD0F1:
            func_D0F1(); break;
        case 0xD0F2:
            func_D0F2(); break;
        case 0xC8F7:
            func_C8F7(); break;
        case 0xC002:
            func_C002(); break;
        case 0xD0C1:
            func_D0C1(); break;
        case 0xD092:
            func_D092(); break;
        case 0xD093:
            func_D093(); break;
        case 0xF720:
            func_F720(); break;
        case 0xD1F8:
            func_D1F8(); break;
        case 0xEB20:
            func_EB20(); break;
        case 0xEB21:
            func_EB21(); break;
        case 0xD2EC:
            func_D2EC(); break;
        case 0xD35A:
            func_D35A(); break;
        case 0xD38F:
            func_D38F(); break;
        case 0xD316:
            func_D316(); break;
        case 0xFAA9:
            func_FAA9(); break;
        case 0xD307:
            func_D307(); break;
        case 0xCBB5:
            func_CBB5(); break;
        case 0xF40C:
            func_F40C(); break;
        case 0xF809:
            func_F809(); break;
        case 0xFC04:
            func_FC04(); break;
        case 0xFC05:
            func_FC05(); break;
        case 0xD341:
            func_D341(); break;
        case 0xD2E7:
            func_D2E7(); break;
        case 0xE9BD:
            func_E9BD(); break;
        case 0xD2E9:
            func_D2E9(); break;
        case 0xD2EA:
            func_D2EA(); break;
        case 0xE3BC:
            func_E3BC(); break;
        case 0xE3BD:
            func_E3BD(); break;
        case 0xD2E3:
            func_D2E3(); break;
        case 0xD2E4:
            func_D2E4(); break;
        case 0xE5BD:
            func_E5BD(); break;
        case 0xD26C:
            func_D26C(); break;
        case 0xFF01:
            func_FF01(); break;
        case 0xFF02:
            func_FF02(); break;
        case 0xECFF:
            func_ECFF(); break;
        case 0xED00:
            func_ED00(); break;
        case 0xF0EC:
            func_F0EC(); break;
        case 0xF0ED:
            func_F0ED(); break;
        case 0xFEAA:
            func_FEAA(); break;
        case 0xFEAB:
            func_FEAB(); break;
        case 0xC03E:
            func_C03E(); break;
        case 0xC03F:
            func_C03F(); break;
        case 0xD33E:
            func_D33E(); break;
        case 0xD34E:
            func_D34E(); break;
        case 0xCB9F:
            func_CB9F(); break;
        case 0xCE03:
            func_CE03(); break;
        case 0xCE04:
            func_CE04(); break;
        case 0xCE20:
            func_CE20(); break;
        case 0xCE21:
            func_CE21(); break;
        case 0xC013:
            func_C013(); break;
        case 0xD090:
            func_D090(); break;
        case 0xD6D1:
            func_D6D1(); break;
        case 0xF550:
            func_F550(); break;
        case 0xC64C:
            func_C64C(); break;
        case 0xC64D:
            func_C64D(); break;
        case 0xCBC7:
            func_CBC7(); break;
        case 0xC5D1:
            func_C5D1(); break;
        case 0xC010:
            func_C010(); break;
        case 0xC956:
            func_C956(); break;
        case 0xC957:
            func_C957(); break;
        case 0xC663:
            func_C663(); break;
        case 0xD059:
            func_D059(); break;
        case 0xD057:
            func_D057(); break;
        case 0xD48D:
            func_D48D(); break;
        case 0xED66:
            func_ED66(); break;
        case 0xF079:
            func_F079(); break;
        case 0xF07A:
            func_F07A(); break;
        case 0xCC08:
            func_CC08(); break;
        case 0xEDF0:
            func_EDF0(); break;
        case 0xEDF1:
            func_EDF1(); break;
        case 0xF04F:
            func_F04F(); break;
        case 0xCEE2:
            func_CEE2(); break;
        case 0xEED4:
            func_EED4(); break;
        case 0xEED5:
            func_EED5(); break;
        case 0xCECD:
            func_CECD(); break;
        case 0xC905:
            func_C905(); break;
        case 0xFCE5:
            func_FCE5(); break;
        case 0xC9FC:
            func_C9FC(); break;
        case 0xE51A:
            func_E51A(); break;
        case 0xEFC0:
            func_EFC0(); break;
        case 0xD0EF:
            func_D0EF(); break;
        case 0xD0F0:
            func_D0F0(); break;
        case 0xFFA0:
            func_FFA0(); break;
        case 0xFFA1:
            func_FFA1(); break;
        case 0xC900:
            func_C900(); break;
        case 0xD47F:
            func_D47F(); break;
        case 0xE4F2:
            func_E4F2(); break;
        case 0xF0A1:
            func_F0A1(); break;
        case 0xD4B5:
            func_D4B5(); break;
        case 0xE98A:
            func_E98A(); break;
        case 0xE98B:
            func_E98B(); break;
        case 0xD4A9:
            func_D4A9(); break;
        case 0xE939:
            func_E939(); break;
        case 0xD0AA:
            func_D0AA(); break;
        case 0xD0AB:
            func_D0AB(); break;
        case 0xDD98:
            func_DD98(); break;
        case 0xDD99:
            func_DD99(); break;
        case 0xCB21:
            func_CB21(); break;
        case 0xEBC4:
            func_EBC4(); break;
        case 0xEBC5:
            func_EBC5(); break;
        case 0xD4EC:
            func_D4EC(); break;
        case 0xD52D:
            func_D52D(); break;
        case 0xC1D6:
            func_C1D6(); break;
        case 0xD5C2:
            func_D5C2(); break;
        case 0xC8D5:
            func_C8D5(); break;
        case 0xC8D6:
            func_C8D6(); break;
        case 0xD5C9:
            func_D5C9(); break;
        case 0xD671:
            func_D671(); break;
        case 0xEBD6:
            func_EBD6(); break;
        case 0xEBD7:
            func_EBD7(); break;
        case 0xFC20:
            func_FC20(); break;
        case 0xFC21:
            func_FC21(); break;
        case 0xD5DB:
            func_D5DB(); break;
        case 0xDE14:
            func_DE14(); break;
        case 0xDE15:
            func_DE15(); break;
        case 0xE420:
            func_E420(); break;
        case 0xD5E5:
            func_D5E5(); break;
        case 0xC6DE:
            func_C6DE(); break;
        case 0xFE61:
            func_FE61(); break;
        case 0xFE06:
            func_FE06(); break;
        case 0xD58C:
            func_D58C(); break;
        case 0xD58D:
            func_D58D(); break;
        case 0xD0FF:
            func_D0FF(); break;
        case 0xD100:
            func_D100(); break;
        case 0xD523:
            func_D523(); break;
        case 0xDDD5:
            func_DDD5(); break;
        case 0xC5F0:
            func_C5F0(); break;
        case 0xFEC5:
            func_FEC5(); break;
        case 0xFEC6:
            func_FEC6(); break;
        case 0xF84C:
            func_F84C(); break;
        case 0xD58F:
            func_D58F(); break;
        case 0xD5A8:
            func_D5A8(); break;
        case 0xD5A9:
            func_D5A9(); break;
        case 0xD301:
            func_D301(); break;
        case 0xD302:
            func_D302(); break;
        case 0xFFF3:
            func_FFF3(); break;
        case 0xFFF4:
            func_FFF4(); break;
        case 0xFFB7:
            func_FFB7(); break;
        case 0xFFB8:
            func_FFB8(); break;
        case 0xEB4C:
            func_EB4C(); break;
        case 0xF7E9:
            func_F7E9(); break;
        case 0xD0F7:
            func_D0F7(); break;
        case 0xD0F8:
            func_D0F8(); break;
        case 0xD518:
            func_D518(); break;
        case 0xC00E:
            func_C00E(); break;
        case 0xD00B:
            func_D00B(); break;
        case 0xD2FB:
            func_D2FB(); break;
        case 0xF9B0:
            func_F9B0(); break;
        case 0xE81F:
            func_E81F(); break;
        case 0xC021:
            func_C021(); break;
        case 0xC996:
            func_C996(); break;
        case 0xEBF1:
            func_EBF1(); break;
        case 0xE9BF:
            func_E9BF(); break;
        case 0xCA90:
            func_CA90(); break;
        case 0xCA91:
            func_CA91(); break;
        case 0xC074:
            func_C074(); break;
        case 0xC075:
            func_C075(); break;
        case 0xFE03:
            func_FE03(); break;
        case 0xFE04:
            func_FE04(); break;
        case 0xDE19:
            func_DE19(); break;
        case 0xDE1A:
            func_DE1A(); break;
        case 0xFED2:
            func_FED2(); break;
        case 0xCB9B:
            func_CB9B(); break;
        case 0xFED6:
            func_FED6(); break;
        case 0xFED7:
            func_FED7(); break;
        case 0xD78C:
            func_D78C(); break;
        case 0xD08B:
            func_D08B(); break;
        case 0xD76B:
            func_D76B(); break;
        case 0xD780:
            func_D780(); break;
        case 0xDAD1:
            func_DAD1(); break;
        case 0xC221:
            func_C221(); break;
        case 0xE9C3:
            func_E9C3(); break;
        case 0xE90B:
            func_E90B(); break;
        case 0xE90C:
            func_E90C(); break;
        case 0xE96B:
            func_E96B(); break;
        case 0xD1C5:
            func_D1C5(); break;
        case 0xD80F:
            func_D80F(); break;
        case 0xD8A4:
            func_D8A4(); break;
        case 0xF014:
            func_F014(); break;
        case 0xF015:
            func_F015(); break;
        case 0xD0FD:
            func_D0FD(); break;
        case 0xFE49:
            func_FE49(); break;
        case 0xFE4A:
            func_FE4A(); break;
        case 0xD807:
            func_D807(); break;
        case 0xFDE5:
            func_FDE5(); break;
        case 0xFDE6:
            func_FDE6(); break;
        case 0xE6A8:
            func_E6A8(); break;
        case 0xD220:
            func_D220(); break;
        case 0xE6D3:
            func_E6D3(); break;
        case 0xFED9:
            func_FED9(); break;
        case 0xF0CA:
            func_F0CA(); break;
        case 0xD083:
            func_D083(); break;
        case 0xC9A8:
            func_C9A8(); break;
        case 0xEE1E:
            func_EE1E(); break;
        case 0xC834:
            func_C834(); break;
        case 0xD085:
            func_D085(); break;
        case 0xCDAD:
            func_CDAD(); break;
        case 0xCDAE:
            func_CDAE(); break;
        case 0xE253:
            func_E253(); break;
        case 0xF187:
            func_F187(); break;
        case 0xF4BE:
            func_F4BE(); break;
        case 0xC96A:
            func_C96A(); break;
        case 0xC96B:
            func_C96B(); break;
        case 0xF153:
            func_F153(); break;
        case 0xF1C0:
            func_F1C0(); break;
        case 0xD9BB:
            func_D9BB(); break;
        case 0xE605:
            func_E605(); break;
        case 0xD07D:
            func_D07D(); break;
        case 0xD07E:
            func_D07E(); break;
        case 0xF421:
            func_F421(); break;
        case 0xF1F5:
            func_F1F5(); break;
        case 0xEE03:
            func_EE03(); break;
        case 0xEE04:
            func_EE04(); break;
        case 0xC811:
            func_C811(); break;
        case 0xC812:
            func_C812(); break;
        case 0xDA1B:
            func_DA1B(); break;
        case 0xDA4C:
            func_DA4C(); break;
        case 0xDA4D:
            func_DA4D(); break;
        case 0xDA3B:
            func_DA3B(); break;
        case 0xDA3C:
            func_DA3C(); break;
        case 0xFE2D:
            func_FE2D(); break;
        case 0xFE2E:
            func_FE2E(); break;
        case 0xDE03:
            func_DE03(); break;
        case 0xFE68:
            func_FE68(); break;
        case 0xFE69:
            func_FE69(); break;
        case 0xC8C8:
            func_C8C8(); break;
        case 0xC8C9:
            func_C8C9(); break;
        case 0xDA39:
            func_DA39(); break;
        case 0xDA3A:
            func_DA3A(); break;
        case 0xDE0B:
            func_DE0B(); break;
        case 0xDE0C:
            func_DE0C(); break;
        case 0xD2B9:
            func_D2B9(); break;
        case 0xD2BA:
            func_D2BA(); break;
        case 0xDAD2:
            func_DAD2(); break;
        case 0xDAD3:
            func_DAD3(); break;
        case 0xC88D:
            func_C88D(); break;
        case 0xC88E:
            func_C88E(); break;
        case 0xD619:
            func_D619(); break;
        case 0xDAD6:
            func_DAD6(); break;
        case 0xDAD7:
            func_DAD7(); break;
        case 0xC98D:
            func_C98D(); break;
        case 0xC98E:
            func_C98E(); break;
        case 0xC38D:
            func_C38D(); break;
        case 0xC38E:
            func_C38E(); break;
        case 0xC0AA:
            func_C0AA(); break;
        case 0xDC20:
            func_DC20(); break;
        case 0xFEDD:
            func_FEDD(); break;
        case 0xF0AD:
            func_F0AD(); break;
        case 0xFAF0:
            func_FAF0(); break;
        case 0xFAF1:
            func_FAF1(); break;
        case 0xFC10:
            func_FC10(); break;
        case 0xFC11:
            func_FC11(); break;
        case 0xDB43:
            func_DB43(); break;
        case 0xECF1:
            func_ECF1(); break;
        case 0xCD90:
            func_CD90(); break;
        case 0xCD91:
            func_CD91(); break;
        case 0xC569:
            func_C569(); break;
        case 0xF05B:
            func_F05B(); break;
        case 0xF05C:
            func_F05C(); break;
        case 0xC988:
            func_C988(); break;
        case 0xC989:
            func_C989(); break;
        case 0xDC80:
            func_DC80(); break;
        case 0xCBFA:
            func_CBFA(); break;
        case 0xC84C:
            func_C84C(); break;
        case 0xC84D:
            func_C84D(); break;
        case 0xDC1D:
            func_DC1D(); break;
        case 0xC0A8:
            func_C0A8(); break;
        case 0xDB30:
            func_DB30(); break;
        case 0xF060:
            func_F060(); break;
        case 0xD0DD:
            func_D0DD(); break;
        case 0xD0DE:
            func_D0DE(); break;
        case 0xC7D0:
            func_C7D0(); break;
        case 0xF0FD:
            func_F0FD(); break;
        case 0xF0FE:
            func_F0FE(); break;
        case 0xF0FC:
            func_F0FC(); break;
        case 0xF018:
            func_F018(); break;
        case 0xF019:
            func_F019(); break;
        case 0xC420:
            func_C420(); break;
        case 0xC421:
            func_C421(); break;
        case 0xF173:
            func_F173(); break;
        case 0xF1A8:
            func_F1A8(); break;
        case 0xFA4C:
            func_FA4C(); break;
        case 0xC080:
            func_C080(); break;
        case 0xC081:
            func_C081(); break;
        case 0xDE05:
            func_DE05(); break;
        case 0xC986:
            func_C986(); break;
        case 0xF0FF:
            func_F0FF(); break;
        case 0xF100:
            func_F100(); break;
        case 0xC804:
            func_C804(); break;
        case 0xDF2E:
            func_DF2E(); break;
        case 0xC974:
            func_C974(); break;
        case 0xD014:
            func_D014(); break;
        case 0xC96C:
            func_C96C(); break;
        case 0xC95A:
            func_C95A(); break;
        case 0xC92E:
            func_C92E(); break;
        case 0xC92F:
            func_C92F(); break;
        case 0xDE36:
            func_DE36(); break;
        case 0xF79E:
            func_F79E(); break;
        case 0xC493:
            func_C493(); break;
        case 0xF095:
            func_F095(); break;
        case 0xE614:
            func_E614(); break;
        case 0xE60A:
            func_E60A(); break;
        case 0xC997:
            func_C997(); break;
        case 0xEFB0:
            func_EFB0(); break;
        case 0xF013:
            func_F013(); break;
        case 0xFA19:
            func_FA19(); break;
        case 0xC895:
            func_C895(); break;
        case 0xF7BD:
            func_F7BD(); break;
        case 0xF7BE:
            func_F7BE(); break;
        case 0xF7C9:
            func_F7C9(); break;
        case 0xF7CA:
            func_F7CA(); break;
        case 0xFBBE:
            func_FBBE(); break;
        case 0xDCC4:
            func_DCC4(); break;
        case 0xFE4B:
            func_FE4B(); break;
        case 0xFE4C:
            func_FE4C(); break;
        case 0xDC8B:
            func_DC8B(); break;
        case 0xF54C:
            func_F54C(); break;
        case 0xF54D:
            func_F54D(); break;
        case 0xDCF6:
            func_DCF6(); break;
        case 0xC84B:
            func_C84B(); break;
        case 0xF59D:
            func_F59D(); break;
        case 0xF59E:
            func_F59E(); break;
        case 0xDE3E:
            func_DE3E(); break;
        case 0xC8DE:
            func_C8DE(); break;
        case 0xC8DF:
            func_C8DF(); break;
        case 0xF69E:
            func_F69E(); break;
        case 0xC809:
            func_C809(); break;
        case 0xDF20:
            func_DF20(); break;
        case 0xDF21:
            func_DF21(); break;
        case 0xDFE0:
            func_DFE0(); break;
        case 0xFD29:
            func_FD29(); break;
        case 0xFD2A:
            func_FD2A(); break;
        case 0xC9DF:
            func_C9DF(); break;
        case 0xC9E0:
            func_C9E0(); break;
        case 0xEF29:
            func_EF29(); break;
        case 0xEF2A:
            func_EF2A(); break;
        case 0xDFBD:
            func_DFBD(); break;
        case 0xDFBE:
            func_DFBE(); break;
        case 0xE0BD:
            func_E0BD(); break;
        case 0xE0BE:
            func_E0BE(); break;
        case 0xF055:
            func_F055(); break;
        case 0xF056:
            func_F056(); break;
        case 0xE02D:
            func_E02D(); break;
        case 0xE02E:
            func_E02E(); break;
        case 0xD00E:
            func_D00E(); break;
        case 0xE64B:
            func_E64B(); break;
        case 0xE64C:
            func_E64C(); break;
        case 0xDF1A:
            func_DF1A(); break;
        case 0xDE02:
            func_DE02(); break;
        case 0xE80F:
            func_E80F(); break;
        case 0xE810:
            func_E810(); break;
        case 0xE8E9:
            func_E8E9(); break;
        case 0xFCCA:
            func_FCCA(); break;
        case 0xF0C5:
            func_F0C5(); break;
        case 0xFDC9:
            func_FDC9(); break;
        case 0xFDCA:
            func_FDCA(); break;
        case 0xC914:
            func_C914(); break;
        case 0xFEC9:
            func_FEC9(); break;
        case 0xE661:
            func_E661(); break;
        case 0xE60F:
            func_E60F(); break;
        case 0xD0E0:
            func_D0E0(); break;
        case 0xDF1C:
            func_DF1C(); break;
        case 0xE611:
            func_E611(); break;
        case 0xE60E:
            func_E60E(); break;
        case 0xC9F0:
            func_C9F0(); break;
        case 0xC9F1:
            func_C9F1(); break;
        case 0xF080:
            func_F080(); break;
        case 0xE049:
            func_E049(); break;
        case 0xE04A:
            func_E04A(); break;
        case 0xDF92:
            func_DF92(); break;
        case 0xE04B:
            func_E04B(); break;
        case 0xF869:
            func_F869(); break;
        case 0xF86A:
            func_F86A(); break;
        case 0xC427:
            func_C427(); break;
        case 0xFCC4:
            func_FCC4(); break;
        case 0xFCC5:
            func_FCC5(); break;
        case 0xFF45:
            func_FF45(); break;
        case 0xFF46:
            func_FF46(); break;
        case 0xE911:
            func_E911(); break;
        case 0xC910:
            func_C910(); break;
        case 0xC911:
            func_C911(); break;
        case 0xC509:
            func_C509(); break;
        case 0xC50A:
            func_C50A(); break;
        case 0xFC31:
            func_FC31(); break;
        case 0xF8FC:
            func_F8FC(); break;
        case 0xF8FD:
            func_F8FD(); break;
        case 0xF4F8:
            func_F4F8(); break;
        case 0xF4F9:
            func_F4F9(); break;
        case 0xF0F4:
            func_F0F4(); break;
        case 0xEEF0:
            func_EEF0(); break;
        case 0xEEF1:
            func_EEF1(); break;
        case 0xECEE:
            func_ECEE(); break;
        case 0xECEF:
            func_ECEF(); break;
        case 0xEAED:
            func_EAED(); break;
        case 0xE8EA:
            func_E8EA(); break;
        case 0xE8EB:
            func_E8EB(); break;
        case 0xE7E8:
            func_E7E8(); break;
        case 0xE7E9:
            func_E7E9(); break;
        case 0xE6E6:
            func_E6E6(); break;
        case 0xE5E6:
            func_E5E6(); break;
        case 0xE4E6:
            func_E4E6(); break;
        case 0xE4E4:
            func_E4E4(); break;
        case 0xE3E4:
            func_E3E4(); break;
        case 0xE5E3:
            func_E5E3(); break;
        case 0xE5E4:
            func_E5E4(); break;
        case 0xE9E7:
            func_E9E7(); break;
        case 0xE9E8:
            func_E9E8(); break;
        case 0xEBEA:
            func_EBEA(); break;
        case 0xEFEB:
            func_EFEB(); break;
        case 0xEFEC:
            func_EFEC(); break;
        case 0xF3EF:
            func_F3EF(); break;
        case 0xF3F0:
            func_F3F0(); break;
        case 0xF7F3:
            func_F7F3(); break;
        case 0xF7F4:
            func_F7F4(); break;
        case 0xFBF8:
            func_FBF8(); break;
        case 0xFEFC:
            func_FEFC(); break;
        case 0xFCFE:
            func_FCFE(); break;
        case 0xFCFF:
            func_FCFF(); break;
        case 0xFAFC:
            func_FAFC(); break;
        case 0xFAFD:
            func_FAFD(); break;
        case 0xF8FA:
            func_F8FA(); break;
        case 0xF6F8:
            func_F6F8(); break;
        case 0xF6F9:
            func_F6F9(); break;
        case 0xF4F6:
            func_F4F6(); break;
        case 0xF4F7:
            func_F4F7(); break;
        case 0xF2F4:
            func_F2F4(); break;
        case 0xF0F2:
            func_F0F2(); break;
        case 0xF0F3:
            func_F0F3(); break;
        case 0xEDEE:
            func_EDEE(); break;
        case 0xEDEF:
            func_EDEF(); break;
        case 0xEBED:
            func_EBED(); break;
        case 0xEBEE:
            func_EBEE(); break;
        case 0xE9EA:
            func_E9EA(); break;
        case 0xE8E6:
            func_E8E6(); break;
        case 0xE8E7:
            func_E8E7(); break;
        case 0xEAE8:
            func_EAE8(); break;
        case 0xECEA:
            func_ECEA(); break;
        case 0xEEEC:
            func_EEEC(); break;
        case 0xEEED:
            func_EEED(); break;
        case 0xFEEE:
            func_FEEE(); break;
        case 0xFEEF:
            func_FEEF(); break;
        case 0xF7F8:
            func_F7F8(); break;
        case 0xF7F9:
            func_F7F9(); break;
        case 0xF5F6:
            func_F5F6(); break;
        case 0xF5F7:
            func_F5F7(); break;
        case 0xF2F3:
            func_F2F3(); break;
        case 0xF1F2:
            func_F1F2(); break;
        case 0xF1F3:
            func_F1F3(); break;
        case 0xF1F1:
            func_F1F1(); break;
        case 0xF0F1:
            func_F0F1(); break;
        case 0xEFEF:
            func_EFEF(); break;
        case 0xF0EF:
            func_F0EF(); break;
        case 0xF1F0:
            func_F1F0(); break;
        case 0xF2F2:
            func_F2F2(); break;
        case 0xF4BC:
            func_F4BC(); break;
        case 0xC06A:
            func_C06A(); break;
        case 0xC06B:
            func_C06B(); break;
        case 0xF8BD:
            func_F8BD(); break;
        case 0xF8DF:
            func_F8DF(); break;
        case 0xD06B:
            func_D06B(); break;
        case 0xF89E:
            func_F89E(); break;
        case 0xFABC:
            func_FABC(); break;
        case 0xC948:
            func_C948(); break;
        case 0xC86A:
            func_C86A(); break;
        case 0xC86B:
            func_C86B(); break;
        case 0xF9BC:
            func_F9BC(); break;
        case 0xF9BD:
            func_F9BD(); break;
        case 0xECB0:
            func_ECB0(); break;
        case 0xECB1:
            func_ECB1(); break;
        case 0xE1B9:
            func_E1B9(); break;
        case 0xE1BA:
            func_E1BA(); break;
        case 0xE802:
            func_E802(); break;
        case 0xC8E9:
            func_C8E9(); break;
        case 0xD028:
            func_D028(); break;
        case 0xD029:
            func_D029(); break;
        case 0xE174:
            func_E174(); break;
        case 0xE0FF:
            func_E0FF(); break;
        case 0xE100:
            func_E100(); break;
        case 0xF4E0:
            func_F4E0(); break;
        case 0xE003:
            func_E003(); break;
        case 0xF0E0:
            func_F0E0(); break;
        case 0xF0E1:
            func_F0E1(); break;
        case 0xFE02:
            func_FE02(); break;
        case 0xFCE0:
            func_FCE0(); break;
        case 0xC688:
            func_C688(); break;
        case 0xC689:
            func_C689(); break;
        case 0xE1AE:
            func_E1AE(); break;
        case 0xC838:
            func_C838(); break;
        case 0xE5C8:
            func_E5C8(); break;
        case 0xE5C9:
            func_E5C9(); break;
        case 0xFBB0:
            func_FBB0(); break;
        case 0xFBB1:
            func_FBB1(); break;
        case 0xFF2B:
            func_FF2B(); break;
        case 0xFF2C:
            func_FF2C(); break;
        case 0xE805:
            func_E805(); break;
        case 0xF057:
            func_F057(); break;
        case 0xFBF0:
            func_FBF0(); break;
        case 0xFBF1:
            func_FBF1(); break;
        case 0xCAFC:
            func_CAFC(); break;
        case 0xE205:
            func_E205(); break;
        case 0xCAE2:
            func_CAE2(); break;
        case 0xCAE3:
            func_CAE3(); break;
        case 0xFCA7:
            func_FCA7(); break;
        case 0xE818:
            func_E818(); break;
        case 0xE819:
            func_E819(); break;
        case 0xC2C7:
            func_C2C7(); break;
        case 0xC057:
            func_C057(); break;
        case 0xD047:
            func_D047(); break;
        case 0xD048:
            func_D048(); break;
        case 0xC501:
            func_C501(); break;
        case 0xC502:
            func_C502(); break;
        case 0xD8A9:
            func_D8A9(); break;
        case 0xD8AA:
            func_D8AA(); break;
        case 0xCDD9:
            func_CDD9(); break;
        case 0xF4B1:
            func_F4B1(); break;
        case 0xE25E:
            func_E25E(); break;
        case 0xCE93:
            func_CE93(); break;
        case 0xF04A:
            func_F04A(); break;
        case 0xF04B:
            func_F04B(); break;
        case 0xE458:
            func_E458(); break;
        case 0xE31B:
            func_E31B(); break;
        case 0xC6E3:
            func_C6E3(); break;
        case 0xC6E4:
            func_C6E4(); break;
        case 0xD065:
            func_D065(); break;
        case 0xD066:
            func_D066(); break;
        case 0xF0EE:
            func_F0EE(); break;
        case 0xE4A4:
            func_E4A4(); break;
        case 0xED01:
            func_ED01(); break;
        case 0xC9D0:
            func_C9D0(); break;
        case 0xC9D1:
            func_C9D1(); break;
        case 0xE520:
            func_E520(); break;
        case 0xE521:
            func_E521(); break;
        case 0xE3E6:
            func_E3E6(); break;
        case 0xE627:
            func_E627(); break;
        case 0xE366:
            func_E366(); break;
        case 0xF059:
            func_F059(); break;
        case 0xE669:
            func_E669(); break;
        case 0xFDB0:
            func_FDB0(); break;
        case 0xFDB1:
            func_FDB1(); break;
        case 0xD977:
            func_D977(); break;
        case 0xED03:
            func_ED03(); break;
        case 0xED04:
            func_ED04(); break;
        case 0xFAA3:
            func_FAA3(); break;
        case 0xD0FA:
            func_D0FA(); break;
        case 0xD0FB:
            func_D0FB(); break;
        case 0xE44A:
            func_E44A(); break;
        case 0xE599:
            func_E599(); break;
        case 0xE501:
            func_E501(); break;
        case 0xC942:
            func_C942(); break;
        case 0xC943:
            func_C943(); break;
        case 0xC952:
            func_C952(); break;
        case 0xC953:
            func_C953(); break;
        case 0xEFC9:
            func_EFC9(); break;
        case 0xEFCA:
            func_EFCA(); break;
        case 0xC90D:
            func_C90D(); break;
        case 0xC61E:
            func_C61E(); break;
        case 0xC61F:
            func_C61F(); break;
        case 0xE6E5:
            func_E6E5(); break;
        case 0xCA49:
            func_CA49(); break;
        case 0xCA4A:
            func_CA4A(); break;
        case 0xF0CB:
            func_F0CB(); break;
        case 0xE629:
            func_E629(); break;
        case 0xE608:
            func_E608(); break;
        case 0xE0FD:
            func_E0FD(); break;
        case 0xEFE0:
            func_EFE0(); break;
        case 0xEFE1:
            func_EFE1(); break;
        case 0xE8FF:
            func_E8FF(); break;
        case 0xE900:
            func_E900(); break;
        case 0xFC87:
            func_FC87(); break;
        case 0xC660:
            func_C660(); break;
        case 0xC661:
            func_C661(); break;
        case 0xE85A:
            func_E85A(); break;
        case 0xE85B:
            func_E85B(); break;
        case 0xE572:
            func_E572(); break;
        case 0xE702:
            func_E702(); break;
        case 0xE560:
            func_E560(); break;
        case 0xE561:
            func_E561(); break;
        case 0xE562:
            func_E562(); break;
        case 0xDD07:
            func_DD07(); break;
        case 0xE55F:
            func_E55F(); break;
        case 0xD0E5:
            func_D0E5(); break;
        case 0xD04B:
            func_D04B(); break;
        case 0xF829:
            func_F829(); break;
        case 0xF82A:
            func_F82A(); break;
        case 0xE565:
            func_E565(); break;
        case 0xE5E0:
            func_E5E0(); break;
        case 0xE8D0:
            func_E8D0(); break;
        case 0xE8D1:
            func_E8D1(); break;
        case 0xC0A3:
            func_C0A3(); break;
        case 0xF2C9:
            func_F2C9(); break;
        case 0xC6C9:
            func_C6C9(); break;
        case 0xC941:
            func_C941(); break;
        case 0xC951:
            func_C951(); break;
        case 0xEE51:
            func_EE51(); break;
        case 0xEE52:
            func_EE52(); break;
        case 0xC949:
            func_C949(); break;
        case 0xC94A:
            func_C94A(); break;
        case 0xC60B:
            func_C60B(); break;
        case 0xC6E9:
            func_C6E9(); break;
        case 0xC6EA:
            func_C6EA(); break;
        case 0xFDC6:
            func_FDC6(); break;
        case 0xFDC7:
            func_FDC7(); break;
        case 0xE621:
            func_E621(); break;
        case 0xE60D:
            func_E60D(); break;
        case 0xFDE7:
            func_FDE7(); break;
        case 0xFDDE:
            func_FDDE(); break;
        case 0xE6FD:
            func_E6FD(); break;
        case 0xD0E7:
            func_D0E7(); break;
        case 0xECD0:
            func_ECD0(); break;
        case 0xECD1:
            func_ECD1(); break;
        case 0xC2C1:
            func_C2C1(); break;
        case 0xE591:
            func_E591(); break;
        case 0xFF69:
            func_FF69(); break;
        case 0xFF6A:
            func_FF6A(); break;
        case 0xD95A:
            func_D95A(); break;
        case 0xC80D:
            func_C80D(); break;
        case 0xC80E:
            func_C80E(); break;
        case 0xF5BD:
            func_F5BD(); break;
        case 0xFD39:
            func_FD39(); break;
        case 0xF5FD:
            func_F5FD(); break;
        case 0xE793:
            func_E793(); break;
        case 0xC924:
            func_C924(); break;
        case 0xC925:
            func_C925(); break;
        case 0xC958:
            func_C958(); break;
        case 0xC959:
            func_C959(); break;
        case 0xE659:
            func_E659(); break;
        case 0xCA59:
            func_CA59(); break;
        case 0xE7E7:
            func_E7E7(); break;
        case 0xF072:
            func_F072(); break;
        case 0xF00C:
            func_F00C(); break;
        case 0xD091:
            func_D091(); break;
        case 0xCA10:
            func_CA10(); break;
        case 0xCACA:
            func_CACA(); break;
        case 0xCACB:
            func_CACB(); break;
        case 0xCBB9:
            func_CBB9(); break;
        case 0xF6FD:
            func_F6FD(); break;
        case 0xF5BC:
            func_F5BC(); break;
        case 0xE960:
            func_E960(); break;
        case 0xE004:
            func_E004(); break;
        case 0xE935:
            func_E935(); break;
        case 0xC095:
            func_C095(); break;
        case 0xDE29:
            func_DE29(); break;
        case 0xDE2A:
            func_DE2A(); break;
        case 0xD012:
            func_D012(); break;
        case 0xC008:
            func_C008(); break;
        case 0xC009:
            func_C009(); break;
        case 0xD076:
            func_D076(); break;
        case 0xD077:
            func_D077(); break;
        case 0xE2C4:
            func_E2C4(); break;
        case 0xC9F9:
            func_C9F9(); break;
        case 0xC9FA:
            func_C9FA(); break;
        case 0xC929:
            func_C929(); break;
        case 0xEC9C:
            func_EC9C(); break;
        case 0xED99:
            func_ED99(); break;
        case 0xEAC1:
            func_EAC1(); break;
        case 0xEA06:
            func_EA06(); break;
        case 0xF821:
            func_F821(); break;
        case 0xEAAB:
            func_EAAB(); break;
        case 0xCA38:
            func_CA38(); break;
        case 0xCA39:
            func_CA39(); break;
        case 0xC836:
            func_C836(); break;
        case 0xEF8D:
            func_EF8D(); break;
        case 0xC933:
            func_C933(); break;
        case 0xC934:
            func_C934(); break;
        case 0xF0A6:
            func_F0A6(); break;
        case 0xF0A7:
            func_F0A7(); break;
        case 0xEF0A:
            func_EF0A(); break;
        case 0xEC05:
            func_EC05(); break;
        case 0xEC30:
            func_EC30(); break;
        case 0xEC58:
            func_EC58(); break;
        case 0xE57D:
            func_E57D(); break;
        case 0xE70D:
            func_E70D(); break;
        case 0xEB0D:
            func_EB0D(); break;
        case 0xD44C:
            func_D44C(); break;
        case 0xD44D:
            func_D44D(); break;
        case 0xEAD5:
            func_EAD5(); break;
        case 0xD0EB:
            func_D0EB(); break;
        case 0xC80F:
            func_C80F(); break;
        case 0xEB29:
            func_EB29(); break;
        case 0xEB4E:
            func_EB4E(); break;
        case 0xEB25:
            func_EB25(); break;
        case 0xFB7C:
            func_FB7C(); break;
        case 0xEB93:
            func_EB93(); break;
        case 0xC8EA:
            func_C8EA(); break;
        case 0xEC01:
            func_EC01(); break;
        case 0xC91B:
            func_C91B(); break;
        case 0xEE4B:
            func_EE4B(); break;
        case 0xFCB9:
            func_FCB9(); break;
        case 0xEBFC:
            func_EBFC(); break;
        case 0xEBFD:
            func_EBFD(); break;
        case 0xEBFF:
            func_EBFF(); break;
        case 0xEC0A:
            func_EC0A(); break;
        case 0xD0ED:
            func_D0ED(); break;
        case 0xC81F:
            func_C81F(); break;
        case 0xC1D0:
            func_C1D0(); break;
        case 0xC1D1:
            func_C1D1(); break;
        case 0xED52:
            func_ED52(); break;
        case 0xFB5E:
            func_FB5E(); break;
        case 0xEA10:
            func_EA10(); break;
        case 0xEA11:
            func_EA11(); break;
        case 0xEF10:
            func_EF10(); break;
        case 0xEF11:
            func_EF11(); break;
        case 0xED5C:
            func_ED5C(); break;
        case 0xC9F2:
            func_C9F2(); break;
        case 0xED7B:
            func_ED7B(); break;
        case 0xCCF0:
            func_CCF0(); break;
        case 0xEE10:
            func_EE10(); break;
        case 0xEE11:
            func_EE11(); break;
        case 0xED8D:
            func_ED8D(); break;
        case 0xEE30:
            func_EE30(); break;
        case 0xEE31:
            func_EE31(); break;
        case 0xC500:
            func_C500(); break;
        case 0xF050:
            func_F050(); break;
        case 0xC8EC:
            func_C8EC(); break;
        case 0xE0F0:
            func_E0F0(); break;
        case 0xE0F1:
            func_E0F1(); break;
        case 0xEDA1:
            func_EDA1(); break;
        case 0xF051:
            func_F051(); break;
        case 0xCAB1:
            func_CAB1(); break;
        case 0xEF01:
            func_EF01(); break;
        case 0xEDC4:
            func_EDC4(); break;
        case 0xFEED:
            func_FEED(); break;
        case 0xEDFF:
            func_EDFF(); break;
        case 0xEE64:
            func_EE64(); break;
        case 0xEEA2:
            func_EEA2(); break;
        case 0xEEA7:
            func_EEA7(); break;
        case 0xEEAF:
            func_EEAF(); break;
        case 0xCAEE:
            func_CAEE(); break;
        case 0xEECB:
            func_EECB(); break;
        case 0xEEEF:
            func_EEEF(); break;
        case 0xFAEE:
            func_FAEE(); break;
        case 0xFAEF:
            func_FAEF(); break;
        case 0xEEFB:
            func_EEFB(); break;
        case 0xD64C:
            func_D64C(); break;
        case 0xD64D:
            func_D64D(); break;
        case 0xEDD7:
            func_EDD7(); break;
        case 0xCDFF:
            func_CDFF(); break;
        case 0xCD08:
            func_CD08(); break;
        case 0xCD09:
            func_CD09(); break;
        case 0xEE3E:
            func_EE3E(); break;
        case 0xD907:
            func_D907(); break;
        case 0xD908:
            func_D908(); break;
        case 0xD906:
            func_D906(); break;
        case 0xEE87:
            func_EE87(); break;
        case 0xF611:
            func_F611(); break;
        case 0xE4AD:
            func_E4AD(); break;
        case 0xE4AE:
            func_E4AE(); break;
        case 0xE98D:
            func_E98D(); break;
        case 0xEA8D:
            func_EA8D(); break;
        case 0xEA8E:
            func_EA8E(); break;
        case 0xE48D:
            func_E48D(); break;
        case 0xE48E:
            func_E48E(); break;
        case 0xD0B0:
            func_D0B0(); break;
        case 0xD0B1:
            func_D0B1(); break;
        case 0xDDD1:
            func_DDD1(); break;
        case 0xEEC7:
            func_EEC7(); break;
        case 0xC6D1:
            func_C6D1(); break;
        case 0xE63F:
            func_E63F(); break;
        case 0xE640:
            func_E640(); break;
        case 0xEF9A:
            func_EF9A(); break;
        case 0xEF9B:
            func_EF9B(); break;
        case 0xEF79:
            func_EF79(); break;
        case 0xC6EF:
            func_C6EF(); break;
        case 0xC6F0:
            func_C6F0(); break;
        case 0xC936:
            func_C936(); break;
        case 0xC567:
            func_C567(); break;
        case 0xC00A:
            func_C00A(); break;
        case 0xCA67:
            func_CA67(); break;
        case 0xCA68:
            func_CA68(); break;
        case 0xFC60:
            func_FC60(); break;
        case 0xF3FC:
            func_F3FC(); break;
        case 0xCFF3:
            func_CFF3(); break;
        case 0xCFF4:
            func_CFF4(); break;
        case 0xC0A0:
            func_C0A0(); break;
        case 0xC0A1:
            func_C0A1(); break;
        case 0xFFAB:
            func_FFAB(); break;
        case 0xE518:
            func_E518(); break;
        case 0xF0B0:
            func_F0B0(); break;
        case 0xC93A:
            func_C93A(); break;
        case 0xC93B:
            func_C93B(); break;
        case 0xF19B:
            func_F19B(); break;
        case 0xD070:
            func_D070(); break;
        case 0xF14A:
            func_F14A(); break;
        case 0xC916:
            func_C916(); break;
        case 0xC917:
            func_C917(); break;
        case 0xF32B:
            func_F32B(); break;
        case 0xE0D0:
            func_E0D0(); break;
        case 0xE0D1:
            func_E0D1(); break;
        case 0xF278:
            func_F278(); break;
        case 0xE730:
            func_E730(); break;
        case 0xE731:
            func_E731(); break;
        case 0xF141:
            func_F141(); break;
        case 0xF283:
            func_F283(); break;
        case 0xF4B9:
            func_F4B9(); break;
        case 0xC919:
            func_C919(); break;
        case 0xF1B4:
            func_F1B4(); break;
        case 0xF163:
            func_F163(); break;
        case 0xED20:
            func_ED20(); break;
        case 0xED21:
            func_ED21(); break;
        case 0xF2EE:
            func_F2EE(); break;
        case 0xF312:
            func_F312(); break;
        case 0xFBB9:
            func_FBB9(); break;
        case 0xFBBA:
            func_FBBA(); break;
        case 0xF1E1:
            func_F1E1(); break;
        case 0xD94C:
            func_D94C(); break;
        case 0xD94D:
            func_D94D(); break;
        case 0xF1DA:
            func_F1DA(); break;
        case 0xF1E8:
            func_F1E8(); break;
        case 0xF1CC:
            func_F1CC(); break;
        case 0xF679:
            func_F679(); break;
        case 0xF67A:
            func_F67A(); break;
        case 0xF579:
            func_F579(); break;
        case 0xF22C:
            func_F22C(); break;
        case 0xE901:
            func_E901(); break;
        case 0xF267:
            func_F267(); break;
        case 0xC512:
            func_C512(); break;
        case 0xF257:
            func_F257(); break;
        case 0xE9F2:
            func_E9F2(); break;
        case 0xC50F:
            func_C50F(); break;
        case 0xE50B:
            func_E50B(); break;
        case 0xE50C:
            func_E50C(); break;
        case 0xE6E4:
            func_E6E4(); break;
        case 0xF2E9:
            func_F2E9(); break;
        case 0xDCD1:
            func_DCD1(); break;
        case 0xF339:
            func_F339(); break;
        case 0xF307:
            func_F307(); break;
        case 0xD9B0:
            func_D9B0(); break;
        case 0xD9B1:
            func_D9B1(); break;
        case 0xF27A:
            func_F27A(); break;
        case 0xF333:
            func_F333(); break;
        case 0xF341:
            func_F341(); break;
        case 0xD0F4:
            func_D0F4(); break;
        case 0xEBD0:
            func_EBD0(); break;
        case 0xEBD1:
            func_EBD1(); break;
        case 0xF2E0:
            func_F2E0(); break;
        case 0xF271:
            func_F271(); break;
        case 0xCEAD:
            func_CEAD(); break;
        case 0xCEAE:
            func_CEAE(); break;
        case 0xCFAE:
            func_CFAE(); break;
        case 0xE0A9:
            func_E0A9(); break;
        case 0xF2C0:
            func_F2C0(); break;
        case 0xF27C:
            func_F27C(); break;
        case 0xF380:
            func_F380(); break;
        case 0xF3AB:
            func_F3AB(); break;
        case 0xC982:
            func_C982(); break;
        case 0xF3BF:
            func_F3BF(); break;
        case 0xE6F3:
            func_E6F3(); break;
        case 0xE6F4:
            func_E6F4(); break;
        case 0xF3E7:
            func_F3E7(); break;
        case 0xF40E:
            func_F40E(); break;
        case 0xF43F:
            func_F43F(); break;
        case 0xF6BA:
            func_F6BA(); break;
        case 0xF677:
            func_F677(); break;
        case 0xF7BB:
            func_F7BB(); break;
        case 0xF40B:
            func_F40B(); break;
        case 0xF4DF:
            func_F4DF(); break;
        case 0xF51F:
            func_F51F(); break;
        case 0xE54C:
            func_E54C(); break;
        case 0xE54D:
            func_E54D(); break;
        case 0xC8F0:
            func_C8F0(); break;
        case 0xDE1B:
            func_DE1B(); break;
        case 0xCA0B:
            func_CA0B(); break;
        case 0xCA0C:
            func_CA0C(); break;
        case 0xD082:
            func_D082(); break;
        case 0xCEFA:
            func_CEFA(); break;
        case 0xCBBD:
            func_CBBD(); break;
        case 0xF06C:
            func_F06C(); break;
        case 0xCD05:
            func_CD05(); break;
        case 0xC04D:
            func_C04D(); break;
        case 0xDE08:
            func_DE08(); break;
        case 0xDE09:
            func_DE09(); break;
        case 0xDEF5:
            func_DEF5(); break;
        case 0xC94B:
            func_C94B(); break;
        case 0xC94C:
            func_C94C(); break;
        case 0xECC9:
            func_ECC9(); break;
        case 0xCBD3:
            func_CBD3(); break;
        case 0xD620:
            func_D620(); break;
        case 0xD621:
            func_D621(); break;
        case 0xF00D:
            func_F00D(); break;
        case 0xC90E:
            func_C90E(); break;
        case 0xC90F:
            func_C90F(); break;
        case 0xC037:
            func_C037(); break;
        case 0xC038:
            func_C038(); break;
        case 0xF082:
            func_F082(); break;
        case 0xDE0F:
            func_DE0F(); break;
        case 0xDE10:
            func_DE10(); break;
        case 0xDE0A:
            func_DE0A(); break;
        case 0xF845:
            func_F845(); break;
        case 0xF68E:
            func_F68E(); break;
        case 0xC9AA:
            func_C9AA(); break;
        case 0xC9AB:
            func_C9AB(); break;
        case 0xE0C9:
            func_E0C9(); break;
        case 0xE0CA:
            func_E0CA(); break;
        case 0xDDAE:
            func_DDAE(); break;
        case 0xF4FF:
            func_F4FF(); break;
        case 0xF99D:
            func_F99D(); break;
        case 0xF99E:
            func_F99E(); break;
        case 0xF07F:
            func_F07F(); break;
        case 0xDEA8:
            func_DEA8(); break;
        case 0xDEA9:
            func_DEA9(); break;
        case 0xFADE:
            func_FADE(); break;
        case 0xFADF:
            func_FADF(); break;
        case 0xDE98:
            func_DE98(); break;
        case 0xDE99:
            func_DE99(); break;
        case 0xFEA9:
            func_FEA9(); break;
        case 0xF7B4:
            func_F7B4(); break;
        case 0xF745:
            func_F745(); break;
        case 0xFBA9:
            func_FBA9(); break;
        case 0xFBAA:
            func_FBAA(); break;
        case 0xE682:
            func_E682(); break;
        case 0xE683:
            func_E683(); break;
        case 0xE7A9:
            func_E7A9(); break;
        case 0xE7AA:
            func_E7AA(); break;
        case 0xEFA0:
            func_EFA0(); break;
        case 0xEFA1:
            func_EFA1(); break;
        case 0xC54A:
            func_C54A(); break;
        case 0xDE60:
            func_DE60(); break;
        case 0xDE61:
            func_DE61(); break;
        case 0xCBA5:
            func_CBA5(); break;
        case 0xCBBA:
            func_CBBA(); break;
        case 0xD16A:
            func_D16A(); break;
        case 0xFE9E:
            func_FE9E(); break;
        case 0xFF9D:
            func_FF9D(); break;
        case 0xD120:
            func_D120(); break;
        case 0xD121:
            func_D121(); break;
        case 0xDFAA:
            func_DFAA(); break;
        case 0xF8F0:
            func_F8F0(); break;
        case 0xF8F1:
            func_F8F1(); break;
        case 0xD06C:
            func_D06C(); break;
        case 0xF8E9:
            func_F8E9(); break;
        case 0xF499:
            func_F499(); break;
        case 0xF49A:
            func_F49A(); break;
        case 0xF92B:
            func_F92B(); break;
        case 0xF8F9:
            func_F8F9(); break;
        case 0xF899:
            func_F899(); break;
        case 0xF89A:
            func_F89A(); break;
        case 0xFA4A:
            func_FA4A(); break;
        case 0xD060:
            func_D060(); break;
        case 0xD061:
            func_D061(); break;
        case 0xFA92:
            func_FA92(); break;
        case 0xFA61:
            func_FA61(); break;
        case 0xF988:
            func_F988(); break;
        case 0xF97D:
            func_F97D(); break;
        case 0xCF90:
            func_CF90(); break;
        case 0xCF91:
            func_CF91(); break;
        case 0xF0F7:
            func_F0F7(); break;
        case 0xF0F8:
            func_F0F8(); break;
        case 0xDCAD:
            func_DCAD(); break;
        case 0xDCAE:
            func_DCAE(); break;
        case 0xFAB5:
            func_FAB5(); break;
        case 0xEAB9:
            func_EAB9(); break;
        case 0xEABA:
            func_EABA(); break;
        case 0xFAEA:
            func_FAEA(); break;
        case 0xFAEB:
            func_FAEB(); break;
        case 0xEBB9:
            func_EBB9(); break;
        case 0xEBBA:
            func_EBBA(); break;
        case 0xF97F:
            func_F97F(); break;
        case 0xFF20:
            func_FF20(); break;
        case 0xFF21:
            func_FF21(); break;
        case 0xD0A8:
            func_D0A8(); break;
        case 0xDDFF:
            func_DDFF(); break;
        case 0xDE00:
            func_DE00(); break;
        case 0xDE51:
            func_DE51(); break;
        case 0xFE6B:
            func_FE6B(); break;
        case 0xFE6C:
            func_FE6C(); break;
        case 0xC91C:
            func_C91C(); break;
        case 0xC91D:
            func_C91D(); break;
        case 0xE0B1:
            func_E0B1(); break;
        case 0xDD00:
            func_DD00(); break;
        case 0xD4F1:
            func_D4F1(); break;
        case 0xDE6A:
            func_DE6A(); break;
        case 0xF694:
            func_F694(); break;
        case 0xC0F1:
            func_C0F1(); break;
        case 0xEC21:
            func_EC21(); break;
        case 0xFBED:
            func_FBED(); break;
        case 0xD668:
            func_D668(); break;
        case 0xFC5D:
            func_FC5D(); break;
        case 0xFB01:
            func_FB01(); break;
        case 0xFBFB:
            func_FBFB(); break;
        case 0xFBFE:
            func_FBFE(); break;
        case 0xFBFF:
            func_FBFF(); break;
        case 0xE9AD:
            func_E9AD(); break;
        case 0xE9AE:
            func_E9AE(); break;
        case 0xE4CD:
            func_E4CD(); break;
        case 0xE4CE:
            func_E4CE(); break;
        case 0xFC99:
            func_FC99(); break;
        case 0xED10:
            func_ED10(); break;
        case 0xED11:
            func_ED11(); break;
        case 0xFCB2:
            func_FCB2(); break;
        case 0xFCBB:
            func_FCBB(); break;
        case 0xFD09:
            func_FD09(); break;
        case 0xFD26:
            func_FD26(); break;
        case 0xFD60:
            func_FD60(); break;
        case 0xC9B4:
            func_C9B4(); break;
        case 0xC9B5:
            func_C9B5(); break;
        case 0xCC09:
            func_CC09(); break;
        case 0xFDA0:
            func_FDA0(); break;
        case 0xFDA1:
            func_FDA1(); break;
        case 0xF605:
            func_F605(); break;
        case 0xFD6D:
            func_FD6D(); break;
        case 0xC9B6:
            func_C9B6(); break;
        case 0xF539:
            func_F539(); break;
        case 0xFD5B:
            func_FD5B(); break;
        case 0xFD5C:
            func_FD5C(); break;
        case 0xC0C4:
            func_C0C4(); break;
        case 0xF08D:
            func_F08D(); break;
        case 0xF08E:
            func_F08E(); break;
        case 0xF18E:
            func_F18E(); break;
        case 0xF017:
            func_F017(); break;
        case 0xE637:
            func_E637(); break;
        case 0xE638:
            func_E638(); break;
        case 0xFDC0:
            func_FDC0(); break;
        case 0xE909:
            func_E909(); break;
        case 0xDD4C:
            func_DD4C(); break;
        case 0xDD4D:
            func_DD4D(); break;
        case 0xED18:
            func_ED18(); break;
        case 0xED19:
            func_ED19(); break;
        case 0xDC55:
            func_DC55(); break;
        case 0xFE3E:
            func_FE3E(); break;
        case 0xFE5A:
            func_FE5A(); break;
        case 0xFE84:
            func_FE84(); break;
        case 0xFEFE:
            func_FEFE(); break;
        case 0xFEFF:
            func_FEFF(); break;
        case 0xFE6E:
            func_FE6E(); break;
        case 0xFE14:
            func_FE14(); break;
        case 0xFE79:
            func_FE79(); break;
        case 0xFF3D:
            func_FF3D(); break;
        case 0xE600:
            func_E600(); break;
        case 0xE601:
            func_E601(); break;
        case 0xCA12:
            func_CA12(); break;
        case 0xC611:
            func_C611(); break;
        case 0xC329:
            func_C329(); break;
        case 0xE029:
            func_E029(); break;
        case 0xE02A:
            func_E02A(); break;
        case 0xFE00:
            func_FE00(); break;
        case 0xFE01:
            func_FE01(); break;
        case 0xFE09:
            func_FE09(); break;
        case 0xFE0B:
            func_FE0B(); break;
        case 0xFE0C:
            func_FE0C(); break;
        case 0xFE08:
            func_FE08(); break;
        case 0xD879:
            func_D879(); break;
        case 0xFF09:
            func_FF09(); break;
        case 0xFF0A:
            func_FF0A(); break;
        case 0xC01B:
            func_C01B(); break;
        case 0xE44C:
            func_E44C(); break;
        case 0xE44D:
            func_E44D(); break;
        case 0xD9BC:
            func_D9BC(); break;
        case 0xC0DA:
            func_C0DA(); break;
        case 0xFFB1:
            func_FFB1(); break;
        case 0xFB75:
            func_FB75(); break;
        case 0xFC81:
            func_FC81(); break;
        case 0xC4AD:
            func_C4AD(); break;
        case 0xEFAB:
            func_EFAB(); break;
        case 0xCAF7:
            func_CAF7(); break;
        case 0xB0E7:
            switch (g_current_bank) {
                case 0: func_B0E7_b0(); break;
                case 1: func_B0E7_b1(); break;
                case 2: func_B0E7_b2(); break;
                case 3: func_B0E7_b3(); break;
                case 4: func_B0E7_b4(); break;
                case 5: func_B0E7_b5(); break;
                case 6: func_B0E7_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC892:
            func_C892(); break;
        case 0xC8BE:
            func_C8BE(); break;
        case 0xF084:
            func_F084(); break;
        case 0xE5C2:
            func_E5C2(); break;
        case 0xFA9F:
            func_FA9F(); break;
        case 0xCFD4:
            func_CFD4(); break;
        case 0xC903:
            func_C903(); break;
        case 0xEA7D:
            func_EA7D(); break;
        case 0xA93E:
            switch (g_current_bank) {
                case 0: func_A93E_b0(); break;
                case 1: func_A93E_b1(); break;
                case 2: func_A93E_b2(); break;
                case 3: func_A93E_b3(); break;
                case 4: func_A93E_b4(); break;
                case 5: func_A93E_b5(); break;
                case 6: func_A93E_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC57C:
            func_C57C(); break;
        case 0xDFAE:
            func_DFAE(); break;
        case 0xEF4B:
            func_EF4B(); break;
        case 0xEF2B:
            func_EF2B(); break;
        case 0xA903:
            switch (g_current_bank) {
                case 0: func_A903_b0(); break;
                case 1: func_A903_b1(); break;
                case 2: func_A903_b2(); break;
                case 3: func_A903_b3(); break;
                case 4: func_A903_b4(); break;
                case 5: func_A903_b5(); break;
                case 6: func_A903_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xE824:
            func_E824(); break;
        case 0xCA66:
            func_CA66(); break;
        case 0xEFB1:
            func_EFB1(); break;
        case 0xE05B:
            func_E05B(); break;
        case 0xFEAD:
            func_FEAD(); break;
        case 0xFEBC:
            func_FEBC(); break;
        case 0xF0B4:
            func_F0B4(); break;
        case 0xA820:
            switch (g_current_bank) {
                case 7: func_E820(); break;
                case 0: func_A820_b0(); break;
                case 1: func_A820_b1(); break;
                case 2: func_A820_b2(); break;
                case 3: func_A820_b3(); break;
                case 4: func_A820_b4(); break;
                case 5: func_A820_b5(); break;
                case 6: func_A820_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xCC92:
            func_CC92(); break;
        case 0xCC69:
            func_CC69(); break;
        case 0xED32:
            func_ED32(); break;
        case 0x8CCF:
            switch (g_current_bank) {
                case 0: func_8CCF_b0(); break;
                case 1: func_8CCF_b1(); break;
                case 2: func_8CCF_b2(); break;
                case 3: func_8CCF_b3(); break;
                case 4: func_8CCF_b4(); break;
                case 5: func_8CCF_b5(); break;
                case 6: func_8CCF_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xEB4B:
            func_EB4B(); break;
        case 0xD1B3:
            func_D1B3(); break;
        case 0xCB87:
            func_CB87(); break;
        case 0xD284:
            func_D284(); break;
        case 0xF090:
            func_F090(); break;
        case 0xCDAF:
            func_CDAF(); break;
        case 0xED25:
            func_ED25(); break;
        case 0xB503:
            switch (g_current_bank) {
                case 0: func_B503_b0(); break;
                case 1: func_B503_b1(); break;
                case 2: func_B503_b2(); break;
                case 3: func_B503_b3(); break;
                case 4: func_B503_b4(); break;
                case 5: func_B503_b5(); break;
                case 6: func_B503_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xFE4D:
            func_FE4D(); break;
        case 0xCA63:
            func_CA63(); break;
        case 0xFDFB:
            func_FDFB(); break;
        case 0xCB6D:
            func_CB6D(); break;
        case 0xFE70:
            func_FE70(); break;
        case 0xF012:
            func_F012(); break;
        case 0xDA80:
            func_DA80(); break;
        case 0xC385:
            func_C385(); break;
        case 0xECC5:
            func_ECC5(); break;
        case 0xDBA4:
            func_DBA4(); break;
        case 0x84C8:
            switch (g_current_bank) {
                case 7: func_C4C8(); break;
                case 0: func_84C8_b0(); break;
                case 1: func_84C8_b1(); break;
                case 2: func_84C8_b2(); break;
                case 3: func_84C8_b3(); break;
                case 4: func_84C8_b4(); break;
                case 5: func_84C8_b5(); break;
                case 6: func_84C8_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xF56B:
            func_F56B(); break;
        case 0xE0AD:
            func_E0AD(); break;
        case 0xE03F:
            func_E03F(); break;
        case 0xECE4:
            func_ECE4(); break;
        case 0xEFE8:
            func_EFE8(); break;
        case 0xFC92:
            func_FC92(); break;
        case 0xFAF4:
            func_FAF4(); break;
        case 0xC060:
            func_C060(); break;
        case 0xECAD:
            func_ECAD(); break;
        case 0xDFEE:
            func_DFEE(); break;
        case 0xCAE0:
            func_CAE0(); break;
        case 0x83AD:
            switch (g_current_bank) {
                case 0: func_83AD_b0(); break;
                case 1: func_83AD_b1(); break;
                case 2: func_83AD_b2(); break;
                case 3: func_83AD_b3(); break;
                case 4: func_83AD_b4(); break;
                case 5: func_83AD_b5(); break;
                case 6: func_83AD_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xEE4F:
            func_EE4F(); break;
        case 0xD02B:
            func_D02B(); break;
        case 0xFAFE:
            func_FAFE(); break;
        case 0xEBA3:
            func_EBA3(); break;
        case 0xD003:
            func_D003(); break;
        case 0xCAAB:
            func_CAAB(); break;
        case 0xFAE0:
            func_FAE0(); break;
        case 0xFAE1:
            func_FAE1(); break;
        case 0xEDC7:
            func_EDC7(); break;
        case 0xD8D1:
            func_D8D1(); break;
        case 0xEE59:
            func_EE59(); break;
        case 0xE0C7:
            func_E0C7(); break;
        case 0xED15:
            func_ED15(); break;
        case 0xF5F9:
            func_F5F9(); break;
        case 0xC048:
            func_C048(); break;
        case 0xC543:
            func_C543(); break;
        case 0xF8EB:
            func_F8EB(); break;
        case 0xFF06:
            func_FF06(); break;
        case 0xA203:
            switch (g_current_bank) {
                case 0: func_A203_b0(); break;
                case 1: func_A203_b1(); break;
                case 2: func_A203_b2(); break;
                case 3: func_A203_b3(); break;
                case 4: func_A203_b4(); break;
                case 5: func_A203_b5(); break;
                case 6: func_A203_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xFD33:
            func_FD33(); break;
        case 0xDD4A:
            func_DD4A(); break;
        case 0xDD30:
            func_DD30(); break;
        case 0xFF08:
            func_FF08(); break;
        case 0xB0A0:
            func_B0A0_b0(); break;
        case 0xB0CE:
            switch (g_current_bank) {
                case 3: func_B0CE_b3(); break;
                case 4: func_B0CE_b4(); break;
                case 5: func_B0CE_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB920:
            switch (g_current_bank) {
                case 3: func_B920_b3(); break;
                case 4: func_B920_b4(); break;
                case 5: func_B920_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB359:
            switch (g_current_bank) {
                case 3: func_B359_b3(); break;
                case 4: func_B359_b4(); break;
                case 5: func_B359_b5(); break;
                case 1: func_B359_b1(); break;
                case 2: func_B359_b2(); break;
                case 0: func_B359_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB3A4:
            switch (g_current_bank) {
                case 3: func_B3A4_b3(); break;
                case 4: func_B3A4_b4(); break;
                case 5: func_B3A4_b5(); break;
                case 1: func_B3A4_b1(); break;
                case 2: func_B3A4_b2(); break;
                case 0: func_B3A4_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB39C:
            switch (g_current_bank) {
                case 3: func_B39C_b3(); break;
                case 4: func_B39C_b4(); break;
                case 5: func_B39C_b5(); break;
                case 1: func_B39C_b1(); break;
                case 2: func_B39C_b2(); break;
                case 0: func_B39C_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB3A0:
            switch (g_current_bank) {
                case 3: func_B3A0_b3(); break;
                case 4: func_B3A0_b4(); break;
                case 5: func_B3A0_b5(); break;
                case 1: func_B3A0_b1(); break;
                case 2: func_B3A0_b2(); break;
                case 0: func_B3A0_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB4C3:
            switch (g_current_bank) {
                case 3: func_B4C3_b3(); break;
                case 4: func_B4C3_b4(); break;
                case 5: func_B4C3_b5(); break;
                case 1: func_B4C3_b1(); break;
                case 2: func_B4C3_b2(); break;
                case 0: func_B4C3_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB482:
            switch (g_current_bank) {
                case 3: func_B482_b3(); break;
                case 4: func_B482_b4(); break;
                case 5: func_B482_b5(); break;
                case 1: func_B482_b1(); break;
                case 2: func_B482_b2(); break;
                case 0: func_B482_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB4D9:
            switch (g_current_bank) {
                case 3: func_B4D9_b3(); break;
                case 4: func_B4D9_b4(); break;
                case 5: func_B4D9_b5(); break;
                case 1: func_B4D9_b1(); break;
                case 2: func_B4D9_b2(); break;
                case 0: func_B4D9_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB5BF:
            switch (g_current_bank) {
                case 3: func_B5BF_b3(); break;
                case 4: func_B5BF_b4(); break;
                case 5: func_B5BF_b5(); break;
                case 1: func_B5BF_b1(); break;
                case 2: func_B5BF_b2(); break;
                case 0: func_B5BF_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB5B7:
            switch (g_current_bank) {
                case 3: func_B5B7_b3(); break;
                case 4: func_B5B7_b4(); break;
                case 5: func_B5B7_b5(); break;
                case 1: func_B5B7_b1(); break;
                case 2: func_B5B7_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB4D2:
            switch (g_current_bank) {
                case 3: func_B4D2_b3(); break;
                case 4: func_B4D2_b4(); break;
                case 5: func_B4D2_b5(); break;
                case 1: func_B4D2_b1(); break;
                case 2: func_B4D2_b2(); break;
                case 0: func_B4D2_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB5D5:
            switch (g_current_bank) {
                case 3: func_B5D5_b3(); break;
                case 4: func_B5D5_b4(); break;
                case 5: func_B5D5_b5(); break;
                case 1: func_B5D5_b1(); break;
                case 2: func_B5D5_b2(); break;
                case 0: func_B5D5_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB65C:
            switch (g_current_bank) {
                case 3: func_B65C_b3(); break;
                case 4: func_B65C_b4(); break;
                case 5: func_B65C_b5(); break;
                case 1: func_B65C_b1(); break;
                case 2: func_B65C_b2(); break;
                case 0: func_B65C_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB5FD:
            switch (g_current_bank) {
                case 7: func_F5FD(); break;
                case 3: func_B5FD_b3(); break;
                case 4: func_B5FD_b4(); break;
                case 5: func_B5FD_b5(); break;
                case 1: func_B5FD_b1(); break;
                case 2: func_B5FD_b2(); break;
                case 0: func_B5FD_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB722:
            switch (g_current_bank) {
                case 3: func_B722_b3(); break;
                case 4: func_B722_b4(); break;
                case 5: func_B722_b5(); break;
                case 1: func_B722_b1(); break;
                case 2: func_B722_b2(); break;
                case 0: func_B722_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB8C6:
            switch (g_current_bank) {
                case 3: func_B8C6_b3(); break;
                case 4: func_B8C6_b4(); break;
                case 5: func_B8C6_b5(); break;
                case 1: func_B8C6_b1(); break;
                case 2: func_B8C6_b2(); break;
                case 0: func_B8C6_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB9BC:
            switch (g_current_bank) {
                case 7: func_F9BC(); break;
                case 3: func_B9BC_b3(); break;
                case 4: func_B9BC_b4(); break;
                case 5: func_B9BC_b5(); break;
                case 1: func_B9BC_b1(); break;
                case 2: func_B9BC_b2(); break;
                case 0: func_B9BC_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB899:
            switch (g_current_bank) {
                case 7: func_F899(); break;
                case 3: func_B899_b3(); break;
                case 4: func_B899_b4(); break;
                case 5: func_B899_b5(); break;
                case 1: func_B899_b1(); break;
                case 2: func_B899_b2(); break;
                case 0: func_B899_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB9A8:
            switch (g_current_bank) {
                case 3: func_B9A8_b3(); break;
                case 4: func_B9A8_b4(); break;
                case 5: func_B9A8_b5(); break;
                case 1: func_B9A8_b1(); break;
                case 2: func_B9A8_b2(); break;
                case 0: func_B9A8_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB9D0:
            switch (g_current_bank) {
                case 7: func_F9D0(); break;
                case 3: func_B9D0_b3(); break;
                case 4: func_B9D0_b4(); break;
                case 5: func_B9D0_b5(); break;
                case 1: func_B9D0_b1(); break;
                case 2: func_B9D0_b2(); break;
                case 0: func_B9D0_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB8F3:
            switch (g_current_bank) {
                case 3: func_B8F3_b3(); break;
                case 4: func_B8F3_b4(); break;
                case 5: func_B8F3_b5(); break;
                case 1: func_B8F3_b1(); break;
                case 2: func_B8F3_b2(); break;
                case 0: func_B8F3_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBA71:
            switch (g_current_bank) {
                case 3: func_BA71_b3(); break;
                case 4: func_BA71_b4(); break;
                case 5: func_BA71_b5(); break;
                case 1: func_BA71_b1(); break;
                case 2: func_BA71_b2(); break;
                case 6: func_BA71_b6(); break;
                case 0: func_BA71_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBA38:
            switch (g_current_bank) {
                case 3: func_BA38_b3(); break;
                case 4: func_BA38_b4(); break;
                case 5: func_BA38_b5(); break;
                case 1: func_BA38_b1(); break;
                case 2: func_BA38_b2(); break;
                case 6: func_BA38_b6(); break;
                case 0: func_BA38_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB420:
            switch (g_current_bank) {
                case 3: func_B420_b3(); break;
                case 4: func_B420_b4(); break;
                case 5: func_B420_b5(); break;
                case 1: func_B420_b1(); break;
                case 2: func_B420_b2(); break;
                case 6: func_B420_b6(); break;
                case 0: func_B420_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBA67:
            switch (g_current_bank) {
                case 3: func_BA67_b3(); break;
                case 4: func_BA67_b4(); break;
                case 5: func_BA67_b5(); break;
                case 1: func_BA67_b1(); break;
                case 2: func_BA67_b2(); break;
                case 6: func_BA67_b6(); break;
                case 0: func_BA67_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBA23:
            switch (g_current_bank) {
                case 3: func_BA23_b3(); break;
                case 4: func_BA23_b4(); break;
                case 5: func_BA23_b5(); break;
                case 1: func_BA23_b1(); break;
                case 2: func_BA23_b2(); break;
                case 6: func_BA23_b6(); break;
                case 0: func_BA23_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBB4C:
            switch (g_current_bank) {
                case 3: func_BB4C_b3(); break;
                case 4: func_BB4C_b4(); break;
                case 5: func_BB4C_b5(); break;
                case 1: func_BB4C_b1(); break;
                case 2: func_BB4C_b2(); break;
                case 6: func_BB4C_b6(); break;
                case 0: func_BB4C_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBB0C:
            switch (g_current_bank) {
                case 3: func_BB0C_b3(); break;
                case 4: func_BB0C_b4(); break;
                case 5: func_BB0C_b5(); break;
                case 1: func_BB0C_b1(); break;
                case 2: func_BB0C_b2(); break;
                case 6: func_BB0C_b6(); break;
                case 0: func_BB0C_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBC0E:
            switch (g_current_bank) {
                case 3: func_BC0E_b3(); break;
                case 4: func_BC0E_b4(); break;
                case 5: func_BC0E_b5(); break;
                case 1: func_BC0E_b1(); break;
                case 2: func_BC0E_b2(); break;
                case 6: func_BC0E_b6(); break;
                case 0: func_BC0E_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBBE7:
            switch (g_current_bank) {
                case 3: func_BBE7_b3(); break;
                case 4: func_BBE7_b4(); break;
                case 5: func_BBE7_b5(); break;
                case 1: func_BBE7_b1(); break;
                case 2: func_BBE7_b2(); break;
                case 6: func_BBE7_b6(); break;
                case 0: func_BBE7_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBAE3:
            switch (g_current_bank) {
                case 3: func_BAE3_b3(); break;
                case 4: func_BAE3_b4(); break;
                case 5: func_BAE3_b5(); break;
                case 1: func_BAE3_b1(); break;
                case 2: func_BAE3_b2(); break;
                case 6: func_BAE3_b6(); break;
                case 0: func_BAE3_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBBD8:
            switch (g_current_bank) {
                case 3: func_BBD8_b3(); break;
                case 4: func_BBD8_b4(); break;
                case 5: func_BBD8_b5(); break;
                case 1: func_BBD8_b1(); break;
                case 2: func_BBD8_b2(); break;
                case 6: func_BBD8_b6(); break;
                case 0: func_BBD8_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBBFD:
            switch (g_current_bank) {
                case 3: func_BBFD_b3(); break;
                case 4: func_BBFD_b4(); break;
                case 5: func_BBFD_b5(); break;
                case 1: func_BBFD_b1(); break;
                case 2: func_BBFD_b2(); break;
                case 6: func_BBFD_b6(); break;
                case 0: func_BBFD_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBB67:
            switch (g_current_bank) {
                case 3: func_BB67_b3(); break;
                case 4: func_BB67_b4(); break;
                case 5: func_BB67_b5(); break;
                case 1: func_BB67_b1(); break;
                case 2: func_BB67_b2(); break;
                case 6: func_BB67_b6(); break;
                case 0: func_BB67_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBAD5:
            switch (g_current_bank) {
                case 3: func_BAD5_b3(); break;
                case 4: func_BAD5_b4(); break;
                case 5: func_BAD5_b5(); break;
                case 1: func_BAD5_b1(); break;
                case 2: func_BAD5_b2(); break;
                case 6: func_BAD5_b6(); break;
                case 0: func_BAD5_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBCDA:
            switch (g_current_bank) {
                case 3: func_BCDA_b3(); break;
                case 4: func_BCDA_b4(); break;
                case 5: func_BCDA_b5(); break;
                case 1: func_BCDA_b1(); break;
                case 2: func_BCDA_b2(); break;
                case 6: func_BCDA_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBCD4:
            switch (g_current_bank) {
                case 3: func_BCD4_b3(); break;
                case 4: func_BCD4_b4(); break;
                case 5: func_BCD4_b5(); break;
                case 1: func_BCD4_b1(); break;
                case 2: func_BCD4_b2(); break;
                case 0: func_BCD4_b0(); break;
                case 6: func_BCD4_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBCCA:
            switch (g_current_bank) {
                case 7: func_FCCA(); break;
                case 3: func_BCCA_b3(); break;
                case 4: func_BCCA_b4(); break;
                case 5: func_BCCA_b5(); break;
                case 1: func_BCCA_b1(); break;
                case 2: func_BCCA_b2(); break;
                case 6: func_BCCA_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBCC6:
            switch (g_current_bank) {
                case 3: func_BCC6_b3(); break;
                case 4: func_BCC6_b4(); break;
                case 5: func_BCC6_b5(); break;
                case 1: func_BCC6_b1(); break;
                case 2: func_BCC6_b2(); break;
                case 6: func_BCC6_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBCB9:
            switch (g_current_bank) {
                case 7: func_FCB9(); break;
                case 3: func_BCB9_b3(); break;
                case 4: func_BCB9_b4(); break;
                case 5: func_BCB9_b5(); break;
                case 1: func_BCB9_b1(); break;
                case 2: func_BCB9_b2(); break;
                case 6: func_BCB9_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBCCE:
            switch (g_current_bank) {
                case 3: func_BCCE_b3(); break;
                case 4: func_BCCE_b4(); break;
                case 5: func_BCCE_b5(); break;
                case 1: func_BCCE_b1(); break;
                case 2: func_BCCE_b2(); break;
                case 6: func_BCCE_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBA14:
            switch (g_current_bank) {
                case 3: func_BA14_b3(); break;
                case 4: func_BA14_b4(); break;
                case 5: func_BA14_b5(); break;
                case 1: func_BA14_b1(); break;
                case 2: func_BA14_b2(); break;
                case 6: func_BA14_b6(); break;
                case 0: func_BA14_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBF62:
            switch (g_current_bank) {
                case 3: func_BF62_b3(); break;
                case 4: func_BF62_b4(); break;
                case 5: func_BF62_b5(); break;
                case 1: func_BF62_b1(); break;
                case 2: func_BF62_b2(); break;
                case 6: func_BF62_b6(); break;
                case 0: func_BF62_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB42C:
            switch (g_current_bank) {
                case 3: func_B42C_b3(); break;
                case 4: func_B42C_b4(); break;
                case 5: func_B42C_b5(); break;
                case 1: func_B42C_b1(); break;
                case 2: func_B42C_b2(); break;
                case 6: func_B42C_b6(); break;
                case 0: func_B42C_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xEA72:
            func_EA72(); break;
        case 0xFF11:
            func_FF11(); break;
        case 0x9190:
            func_9190_b5(); break;
        case 0xFF48:
            func_FF48(); break;
        case 0x8801:
            func_8801_b1(); break;
        case 0xB001:
            func_B001_b1(); break;
        case 0xCB6A:
            func_CB6A(); break;
        case 0xFF4F:
            func_FF4F(); break;
        case 0x9401:
            func_9401_b2(); break;
        case 0x9C01:
            func_9C01_b2(); break;
        case 0x8601:
            func_8601_b2(); break;
        case 0xAF01:
            func_AF01_b2(); break;
        case 0xA1D1:
            func_A1D1_b4(); break;
        case 0xB071:
            func_B071_b0(); break;
        case 0xB91C:
            switch (g_current_bank) {
                case 3: func_B91C_b3(); break;
                case 4: func_B91C_b4(); break;
                case 5: func_B91C_b5(); break;
                case 0: func_B91C_b0(); break;
                case 1: func_B91C_b1(); break;
                case 2: func_B91C_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBB49:
            switch (g_current_bank) {
                case 3: func_BB49_b3(); break;
                case 4: func_BB49_b4(); break;
                case 5: func_BB49_b5(); break;
                case 1: func_BB49_b1(); break;
                case 2: func_BB49_b2(); break;
                case 6: func_BB49_b6(); break;
                case 0: func_BB49_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBB46:
            switch (g_current_bank) {
                case 3: func_BB46_b3(); break;
                case 4: func_BB46_b4(); break;
                case 5: func_BB46_b5(); break;
                case 1: func_BB46_b1(); break;
                case 2: func_BB46_b2(); break;
                case 6: func_BB46_b6(); break;
                case 0: func_BB46_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBACD:
            switch (g_current_bank) {
                case 3: func_BACD_b3(); break;
                case 4: func_BACD_b4(); break;
                case 5: func_BACD_b5(); break;
                case 1: func_BACD_b1(); break;
                case 2: func_BACD_b2(); break;
                case 6: func_BACD_b6(); break;
                case 0: func_BACD_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBAD1:
            switch (g_current_bank) {
                case 3: func_BAD1_b3(); break;
                case 4: func_BAD1_b4(); break;
                case 5: func_BAD1_b5(); break;
                case 1: func_BAD1_b1(); break;
                case 2: func_BAD1_b2(); break;
                case 6: func_BAD1_b6(); break;
                case 0: func_BAD1_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBAE0:
            switch (g_current_bank) {
                case 7: func_FAE0(); break;
                case 3: func_BAE0_b3(); break;
                case 4: func_BAE0_b4(); break;
                case 5: func_BAE0_b5(); break;
                case 1: func_BAE0_b1(); break;
                case 2: func_BAE0_b2(); break;
                case 6: func_BAE0_b6(); break;
                case 0: func_BAE0_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBCBD:
            switch (g_current_bank) {
                case 3: func_BCBD_b3(); break;
                case 4: func_BCBD_b4(); break;
                case 5: func_BCBD_b5(); break;
                case 1: func_BCBD_b1(); break;
                case 2: func_BCBD_b2(); break;
                case 0: func_BCBD_b0(); break;
                case 6: func_BCBD_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBCBB:
            switch (g_current_bank) {
                case 7: func_FCBB(); break;
                case 3: func_BCBB_b3(); break;
                case 4: func_BCBB_b4(); break;
                case 5: func_BCBB_b5(); break;
                case 1: func_BCBB_b1(); break;
                case 2: func_BCBB_b2(); break;
                case 6: func_BCBB_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9166:
            func_9166_b5(); break;
        case 0x912E:
            func_912E_b5(); break;
        case 0xAFD4:
            func_AFD4_b1(); break;
        case 0xAFE5:
            func_AFE5_b1(); break;
        case 0xB61C:
            switch (g_current_bank) {
                case 2: func_B61C_b2(); break;
                case 0: func_B61C_b0(); break;
                case 1: func_B61C_b1(); break;
                case 3: func_B61C_b3(); break;
                case 4: func_B61C_b4(); break;
                case 5: func_B61C_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC2FF:
            func_C2FF(); break;
        case 0xA0C7:
            switch (g_current_bank) {
                case 7: func_E0C7(); break;
                case 5: func_A0C7_b5(); break;
                case 1: func_A0C7_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9830:
            switch (g_current_bank) {
                case 5: func_9830_b5(); break;
                case 6: func_9830_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9849:
            func_9849_b5(); break;
        case 0x9958:
            switch (g_current_bank) {
                case 5: func_9958_b5(); break;
                case 6: func_9958_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x98F8:
            switch (g_current_bank) {
                case 5: func_98F8_b5(); break;
                case 6: func_98F8_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x99DB:
            func_99DB_b5(); break;
        case 0x9A00:
            switch (g_current_bank) {
                case 5: func_9A00_b5(); break;
                case 6: func_9A00_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x99C6:
            func_99C6_b5(); break;
        case 0x99AD:
            switch (g_current_bank) {
                case 5: func_99AD_b5(); break;
                case 6: func_99AD_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x99F8:
            switch (g_current_bank) {
                case 5: func_99F8_b5(); break;
                case 6: func_99F8_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9A79:
            switch (g_current_bank) {
                case 5: func_9A79_b5(); break;
                case 6: func_9A79_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAF83:
            func_AF83_b1(); break;
        case 0xC2FD:
            func_C2FD(); break;
        case 0xAF47:
            func_AF47_b1(); break;
        case 0xB6E0:
            switch (g_current_bank) {
                case 0: func_B6E0_b0(); break;
                case 1: func_B6E0_b1(); break;
                case 2: func_B6E0_b2(); break;
                case 3: func_B6E0_b3(); break;
                case 4: func_B6E0_b4(); break;
                case 5: func_B6E0_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB703:
            switch (g_current_bank) {
                case 0: func_B703_b0(); break;
                case 1: func_B703_b1(); break;
                case 2: func_B703_b2(); break;
                case 3: func_B703_b3(); break;
                case 4: func_B703_b4(); break;
                case 5: func_B703_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB71D:
            switch (g_current_bank) {
                case 0: func_B71D_b0(); break;
                case 1: func_B71D_b1(); break;
                case 2: func_B71D_b2(); break;
                case 3: func_B71D_b3(); break;
                case 4: func_B71D_b4(); break;
                case 5: func_B71D_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB77F:
            switch (g_current_bank) {
                case 0: func_B77F_b0(); break;
                case 1: func_B77F_b1(); break;
                case 2: func_B77F_b2(); break;
                case 3: func_B77F_b3(); break;
                case 4: func_B77F_b4(); break;
                case 5: func_B77F_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB7B1:
            switch (g_current_bank) {
                case 7: func_F7B1(); break;
                case 0: func_B7B1_b0(); break;
                case 1: func_B7B1_b1(); break;
                case 2: func_B7B1_b2(); break;
                case 3: func_B7B1_b3(); break;
                case 4: func_B7B1_b4(); break;
                case 5: func_B7B1_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB902:
            switch (g_current_bank) {
                case 0: func_B902_b0(); break;
                case 1: func_B902_b1(); break;
                case 2: func_B902_b2(); break;
                case 3: func_B902_b3(); break;
                case 4: func_B902_b4(); break;
                case 5: func_B902_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB7DC:
            switch (g_current_bank) {
                case 0: func_B7DC_b0(); break;
                case 1: func_B7DC_b1(); break;
                case 2: func_B7DC_b2(); break;
                case 3: func_B7DC_b3(); break;
                case 4: func_B7DC_b4(); break;
                case 5: func_B7DC_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB8D7:
            switch (g_current_bank) {
                case 0: func_B8D7_b0(); break;
                case 1: func_B8D7_b1(); break;
                case 2: func_B8D7_b2(); break;
                case 3: func_B8D7_b3(); break;
                case 4: func_B8D7_b4(); break;
                case 5: func_B8D7_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB951:
            switch (g_current_bank) {
                case 0: func_B951_b0(); break;
                case 1: func_B951_b1(); break;
                case 2: func_B951_b2(); break;
                case 3: func_B951_b3(); break;
                case 4: func_B951_b4(); break;
                case 5: func_B951_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB809:
            switch (g_current_bank) {
                case 7: func_F809(); break;
                case 0: func_B809_b0(); break;
                case 1: func_B809_b1(); break;
                case 2: func_B809_b2(); break;
                case 3: func_B809_b3(); break;
                case 4: func_B809_b4(); break;
                case 5: func_B809_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB81F:
            switch (g_current_bank) {
                case 0: func_B81F_b0(); break;
                case 1: func_B81F_b1(); break;
                case 2: func_B81F_b2(); break;
                case 3: func_B81F_b3(); break;
                case 4: func_B81F_b4(); break;
                case 5: func_B81F_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB864:
            switch (g_current_bank) {
                case 0: func_B864_b0(); break;
                case 1: func_B864_b1(); break;
                case 2: func_B864_b2(); break;
                case 3: func_B864_b3(); break;
                case 4: func_B864_b4(); break;
                case 5: func_B864_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB8A8:
            switch (g_current_bank) {
                case 0: func_B8A8_b0(); break;
                case 1: func_B8A8_b1(); break;
                case 2: func_B8A8_b2(); break;
                case 3: func_B8A8_b3(); break;
                case 4: func_B8A8_b4(); break;
                case 5: func_B8A8_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB91D:
            switch (g_current_bank) {
                case 7: func_F91D(); break;
                case 0: func_B91D_b0(); break;
                case 1: func_B91D_b1(); break;
                case 2: func_B91D_b2(); break;
                case 3: func_B91D_b3(); break;
                case 4: func_B91D_b4(); break;
                case 5: func_B91D_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB7FB:
            switch (g_current_bank) {
                case 0: func_B7FB_b0(); break;
                case 1: func_B7FB_b1(); break;
                case 2: func_B7FB_b2(); break;
                case 3: func_B7FB_b3(); break;
                case 4: func_B7FB_b4(); break;
                case 5: func_B7FB_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB8E1:
            switch (g_current_bank) {
                case 0: func_B8E1_b0(); break;
                case 1: func_B8E1_b1(); break;
                case 2: func_B8E1_b2(); break;
                case 3: func_B8E1_b3(); break;
                case 4: func_B8E1_b4(); break;
                case 5: func_B8E1_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB970:
            switch (g_current_bank) {
                case 0: func_B970_b0(); break;
                case 1: func_B970_b1(); break;
                case 2: func_B970_b2(); break;
                case 3: func_B970_b3(); break;
                case 4: func_B970_b4(); break;
                case 5: func_B970_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB817:
            switch (g_current_bank) {
                case 0: func_B817_b0(); break;
                case 1: func_B817_b1(); break;
                case 2: func_B817_b2(); break;
                case 3: func_B817_b3(); break;
                case 4: func_B817_b4(); break;
                case 5: func_B817_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB83E:
            switch (g_current_bank) {
                case 0: func_B83E_b0(); break;
                case 1: func_B83E_b1(); break;
                case 2: func_B83E_b2(); break;
                case 3: func_B83E_b3(); break;
                case 4: func_B83E_b4(); break;
                case 5: func_B83E_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB87F:
            switch (g_current_bank) {
                case 0: func_B87F_b0(); break;
                case 1: func_B87F_b1(); break;
                case 2: func_B87F_b2(); break;
                case 3: func_B87F_b3(); break;
                case 4: func_B87F_b4(); break;
                case 5: func_B87F_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB8AF:
            switch (g_current_bank) {
                case 0: func_B8AF_b0(); break;
                case 1: func_B8AF_b1(); break;
                case 2: func_B8AF_b2(); break;
                case 3: func_B8AF_b3(); break;
                case 4: func_B8AF_b4(); break;
                case 5: func_B8AF_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBCAA:
            switch (g_current_bank) {
                case 7: func_FCAA(); break;
                case 0: func_BCAA_b0(); break;
                case 1: func_BCAA_b1(); break;
                case 2: func_BCAA_b2(); break;
                case 3: func_BCAA_b3(); break;
                case 4: func_BCAA_b4(); break;
                case 5: func_BCAA_b5(); break;
                case 6: func_BCAA_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB51E:
            switch (g_current_bank) {
                case 7: func_F51E(); break;
                case 0: func_B51E_b0(); break;
                case 1: func_B51E_b1(); break;
                case 2: func_B51E_b2(); break;
                case 3: func_B51E_b3(); break;
                case 4: func_B51E_b4(); break;
                case 5: func_B51E_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB6A3:
            switch (g_current_bank) {
                case 0: func_B6A3_b0(); break;
                case 1: func_B6A3_b1(); break;
                case 2: func_B6A3_b2(); break;
                case 3: func_B6A3_b3(); break;
                case 4: func_B6A3_b4(); break;
                case 5: func_B6A3_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB6C5:
            switch (g_current_bank) {
                case 0: func_B6C5_b0(); break;
                case 1: func_B6C5_b1(); break;
                case 2: func_B6C5_b2(); break;
                case 3: func_B6C5_b3(); break;
                case 4: func_B6C5_b4(); break;
                case 5: func_B6C5_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB680:
            switch (g_current_bank) {
                case 0: func_B680_b0(); break;
                case 1: func_B680_b1(); break;
                case 2: func_B680_b2(); break;
                case 3: func_B680_b3(); break;
                case 4: func_B680_b4(); break;
                case 5: func_B680_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB626:
            switch (g_current_bank) {
                case 0: func_B626_b0(); break;
                case 1: func_B626_b1(); break;
                case 2: func_B626_b2(); break;
                case 3: func_B626_b3(); break;
                case 4: func_B626_b4(); break;
                case 5: func_B626_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB6D1:
            switch (g_current_bank) {
                case 7: func_F6D1(); break;
                case 0: func_B6D1_b0(); break;
                case 1: func_B6D1_b1(); break;
                case 2: func_B6D1_b2(); break;
                case 3: func_B6D1_b3(); break;
                case 4: func_B6D1_b4(); break;
                case 5: func_B6D1_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x80AD:
            switch (g_current_bank) {
                case 1: func_80AD_b1(); break;
                case 2: func_80AD_b2(); break;
                case 3: func_80AD_b3(); break;
                case 4: func_80AD_b4(); break;
                case 5: func_80AD_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x97F9:
            func_97F9_b3(); break;
        case 0x97DC:
            func_97DC_b3(); break;
        case 0x9A2C:
            func_9A2C_b3(); break;
        case 0x9E22:
            func_9E22_b3(); break;
        case 0x9E36:
            func_9E36_b3(); break;
        case 0x9E52:
            func_9E52_b3(); break;
        case 0x9E86:
            func_9E86_b3(); break;
        case 0x9F02:
            func_9F02_b3(); break;
        case 0x9F49:
            func_9F49_b3(); break;
        case 0x9FC0:
            func_9FC0_b3(); break;
        case 0x9FDA:
            func_9FDA_b3(); break;
        case 0xA062:
            func_A062_b3(); break;
        case 0xA0A0:
            switch (g_current_bank) {
                case 3: func_A0A0_b3(); break;
                case 5: func_A0A0_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA6E0:
            func_A6E0_b3(); break;
        case 0xA6EE:
            func_A6EE_b3(); break;
        case 0x9EA5:
            func_9EA5_b3(); break;
        case 0xA4A5:
            func_A4A5_b3(); break;
        case 0xA04F:
            switch (g_current_bank) {
                case 3: func_A04F_b3(); break;
                case 5: func_A04F_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA1A0:
            switch (g_current_bank) {
                case 3: func_A1A0_b3(); break;
                case 5: func_A1A0_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA1A1:
            switch (g_current_bank) {
                case 3: func_A1A1_b3(); break;
                case 5: func_A1A1_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB55B:
            switch (g_current_bank) {
                case 3: func_B55B_b3(); break;
                case 4: func_B55B_b4(); break;
                case 5: func_B55B_b5(); break;
                case 1: func_B55B_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB59E:
            switch (g_current_bank) {
                case 7: func_F59E(); break;
                case 3: func_B59E_b3(); break;
                case 4: func_B59E_b4(); break;
                case 5: func_B59E_b5(); break;
                case 1: func_B59E_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB5B3:
            switch (g_current_bank) {
                case 3: func_B5B3_b3(); break;
                case 4: func_B5B3_b4(); break;
                case 5: func_B5B3_b5(); break;
                case 1: func_B5B3_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB5C8:
            switch (g_current_bank) {
                case 3: func_B5C8_b3(); break;
                case 4: func_B5C8_b4(); break;
                case 5: func_B5C8_b5(); break;
                case 1: func_B5C8_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB53F:
            switch (g_current_bank) {
                case 3: func_B53F_b3(); break;
                case 4: func_B53F_b4(); break;
                case 5: func_B53F_b5(); break;
                case 1: func_B53F_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB569:
            switch (g_current_bank) {
                case 3: func_B569_b3(); break;
                case 4: func_B569_b4(); break;
                case 5: func_B569_b5(); break;
                case 1: func_B569_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB5AB:
            switch (g_current_bank) {
                case 3: func_B5AB_b3(); break;
                case 4: func_B5AB_b4(); break;
                case 5: func_B5AB_b5(); break;
                case 1: func_B5AB_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB5BA:
            switch (g_current_bank) {
                case 3: func_B5BA_b3(); break;
                case 4: func_B5BA_b4(); break;
                case 5: func_B5BA_b5(); break;
                case 1: func_B5BA_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB546:
            switch (g_current_bank) {
                case 3: func_B546_b3(); break;
                case 4: func_B546_b4(); break;
                case 5: func_B546_b5(); break;
                case 1: func_B546_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB6FD:
            switch (g_current_bank) {
                case 7: func_F6FD(); break;
                case 3: func_B6FD_b3(); break;
                case 4: func_B6FD_b4(); break;
                case 5: func_B6FD_b5(); break;
                case 1: func_B6FD_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB717:
            switch (g_current_bank) {
                case 3: func_B717_b3(); break;
                case 4: func_B717_b4(); break;
                case 5: func_B717_b5(); break;
                case 1: func_B717_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB765:
            switch (g_current_bank) {
                case 3: func_B765_b3(); break;
                case 4: func_B765_b4(); break;
                case 5: func_B765_b5(); break;
                case 1: func_B765_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB746:
            switch (g_current_bank) {
                case 3: func_B746_b3(); break;
                case 4: func_B746_b4(); break;
                case 5: func_B746_b5(); break;
                case 1: func_B746_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB76C:
            switch (g_current_bank) {
                case 3: func_B76C_b3(); break;
                case 4: func_B76C_b4(); break;
                case 5: func_B76C_b5(); break;
                case 1: func_B76C_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB740:
            switch (g_current_bank) {
                case 3: func_B740_b3(); break;
                case 4: func_B740_b4(); break;
                case 5: func_B740_b5(); break;
                case 1: func_B740_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB733:
            switch (g_current_bank) {
                case 3: func_B733_b3(); break;
                case 4: func_B733_b4(); break;
                case 5: func_B733_b5(); break;
                case 1: func_B733_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB7AA:
            switch (g_current_bank) {
                case 3: func_B7AA_b3(); break;
                case 4: func_B7AA_b4(); break;
                case 5: func_B7AA_b5(); break;
                case 1: func_B7AA_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBCB0:
            switch (g_current_bank) {
                case 3: func_BCB0_b3(); break;
                case 4: func_BCB0_b4(); break;
                case 5: func_BCB0_b5(); break;
                case 6: func_BCB0_b6(); break;
                case 1: func_BCB0_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBCB6:
            switch (g_current_bank) {
                case 3: func_BCB6_b3(); break;
                case 4: func_BCB6_b4(); break;
                case 5: func_BCB6_b5(); break;
                case 6: func_BCB6_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBCB3:
            switch (g_current_bank) {
                case 3: func_BCB3_b3(); break;
                case 4: func_BCB3_b4(); break;
                case 5: func_BCB3_b5(); break;
                case 6: func_BCB3_b6(); break;
                case 1: func_BCB3_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBCA7:
            switch (g_current_bank) {
                case 7: func_FCA7(); break;
                case 3: func_BCA7_b3(); break;
                case 4: func_BCA7_b4(); break;
                case 5: func_BCA7_b5(); break;
                case 6: func_BCA7_b6(); break;
                case 1: func_BCA7_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBCAD:
            switch (g_current_bank) {
                case 3: func_BCAD_b3(); break;
                case 4: func_BCAD_b4(); break;
                case 5: func_BCAD_b5(); break;
                case 6: func_BCAD_b6(); break;
                case 1: func_BCAD_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8500:
            switch (g_current_bank) {
                case 7: func_C500(); break;
                case 3: func_8500_b3(); break;
                case 4: func_8500_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA028:
            func_A028_b3(); break;
        case 0x8400:
            switch (g_current_bank) {
                case 3: func_8400_b3(); break;
                case 4: func_8400_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x84FD:
            switch (g_current_bank) {
                case 3: func_84FD_b3(); break;
                case 4: func_84FD_b4(); break;
                case 5: func_84FD_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA220:
            func_A220_b3(); break;
        case 0xA004:
            func_A004_b3(); break;
        case 0xA500:
            func_A500_b3(); break;
        case 0x8D00:
            func_8D00_b3(); break;
        case 0x8550:
            func_8550_b3(); break;
        case 0xA507:
            func_A507_b3(); break;
        case 0x854F:
            func_854F_b3(); break;
        case 0xA506:
            func_A506_b3(); break;
        case 0x8501:
            switch (g_current_bank) {
                case 7: func_C501(); break;
                case 3: func_8501_b3(); break;
                case 4: func_8501_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA501:
            switch (g_current_bank) {
                case 7: func_E501(); break;
                case 3: func_A501_b3(); break;
                case 4: func_A501_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA502:
            switch (g_current_bank) {
                case 3: func_A502_b3(); break;
                case 4: func_A502_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA50E:
            func_A50E_b3(); break;
        case 0x8539:
            func_8539_b3(); break;
        case 0xA537:
            func_A537_b3(); break;
        case 0x853A:
            func_853A_b3(); break;
        case 0xA509:
            func_A509_b3(); break;
        case 0xB9F8:
            func_B9F8_b3(); break;
        case 0x960B:
            func_960B_b3(); break;
        case 0x8D20:
            func_8D20_b3(); break;
        case 0x9DF6:
            func_9DF6_b3(); break;
        case 0x84A6:
            switch (g_current_bank) {
                case 4: func_84A6_b4(); break;
                case 5: func_84A6_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x844A:
            switch (g_current_bank) {
                case 4: func_844A_b4(); break;
                case 5: func_844A_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x83F4:
            switch (g_current_bank) {
                case 4: func_83F4_b4(); break;
                case 5: func_83F4_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x87CB:
            switch (g_current_bank) {
                case 4: func_87CB_b4(); break;
                case 5: func_87CB_b5(); break;
                case 1: func_87CB_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x87DD:
            switch (g_current_bank) {
                case 4: func_87DD_b4(); break;
                case 5: func_87DD_b5(); break;
                case 1: func_87DD_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x87F0:
            switch (g_current_bank) {
                case 4: func_87F0_b4(); break;
                case 5: func_87F0_b5(); break;
                case 1: func_87F0_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8818:
            switch (g_current_bank) {
                case 4: func_8818_b4(); break;
                case 5: func_8818_b5(); break;
                case 1: func_8818_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x882C:
            switch (g_current_bank) {
                case 4: func_882C_b4(); break;
                case 5: func_882C_b5(); break;
                case 1: func_882C_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x883E:
            switch (g_current_bank) {
                case 4: func_883E_b4(); break;
                case 5: func_883E_b5(); break;
                case 1: func_883E_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8851:
            switch (g_current_bank) {
                case 4: func_8851_b4(); break;
                case 5: func_8851_b5(); break;
                case 1: func_8851_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8863:
            switch (g_current_bank) {
                case 4: func_8863_b4(); break;
                case 5: func_8863_b5(); break;
                case 1: func_8863_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8874:
            switch (g_current_bank) {
                case 4: func_8874_b4(); break;
                case 5: func_8874_b5(); break;
                case 1: func_8874_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x88D9:
            switch (g_current_bank) {
                case 4: func_88D9_b4(); break;
                case 5: func_88D9_b5(); break;
                case 1: func_88D9_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9589:
            switch (g_current_bank) {
                case 4: func_9589_b4(); break;
                case 5: func_9589_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x991C:
            func_991C_b4(); break;
        case 0x9937:
            func_9937_b4(); break;
        case 0x95CB:
            func_95CB_b4(); break;
        case 0x993C:
            func_993C_b4(); break;
        case 0x9949:
            func_9949_b4(); break;
        case 0x999B:
            func_999B_b4(); break;
        case 0x9A44:
            switch (g_current_bank) {
                case 4: func_9A44_b4(); break;
                case 1: func_9A44_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9AB4:
            func_9AB4_b4(); break;
        case 0x9AE4:
            func_9AE4_b4(); break;
        case 0x9B2C:
            func_9B2C_b4(); break;
        case 0x841F:
            func_841F_b4(); break;
        case 0xA91E:
            func_A91E_b4(); break;
        case 0x8511:
            func_8511_b4(); break;
        case 0x98D7:
            func_98D7_b5(); break;
        case 0x990C:
            func_990C_b5(); break;
        case 0x9847:
            func_9847_b5(); break;
        case 0x9862:
            func_9862_b5(); break;
        case 0x982A:
            func_982A_b5(); break;
        case 0x9867:
            func_9867_b5(); break;
        case 0x9A4A:
            func_9A4A_b5(); break;
        case 0x9B03:
            func_9B03_b5(); break;
        case 0x9B16:
            func_9B16_b5(); break;
        case 0xBF9E:
            switch (g_current_bank) {
                case 5: func_BF9E_b5(); break;
                case 6: func_BF9E_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D76:
            switch (g_current_bank) {
                case 5: func_9D76_b5(); break;
                case 6: func_9D76_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D82:
            switch (g_current_bank) {
                case 5: func_9D82_b5(); break;
                case 6: func_9D82_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D8A:
            switch (g_current_bank) {
                case 5: func_9D8A_b5(); break;
                case 6: func_9D8A_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x91A0:
            func_91A0_b6(); break;
        case 0xABA0:
            func_ABA0_b6(); break;
        case 0xA0DB:
            func_A0DB_b6(); break;
        case 0xB6FC:
            switch (g_current_bank) {
                case 0: func_B6FC_b0(); break;
                case 1: func_B6FC_b1(); break;
                case 2: func_B6FC_b2(); break;
                case 3: func_B6FC_b3(); break;
                case 4: func_B6FC_b4(); break;
                case 5: func_B6FC_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB7D6:
            switch (g_current_bank) {
                case 0: func_B7D6_b0(); break;
                case 1: func_B7D6_b1(); break;
                case 2: func_B7D6_b2(); break;
                case 3: func_B7D6_b3(); break;
                case 4: func_B7D6_b4(); break;
                case 5: func_B7D6_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB8D6:
            switch (g_current_bank) {
                case 0: func_B8D6_b0(); break;
                case 1: func_B8D6_b1(); break;
                case 2: func_B8D6_b2(); break;
                case 3: func_B8D6_b3(); break;
                case 4: func_B8D6_b4(); break;
                case 5: func_B8D6_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB6C4:
            switch (g_current_bank) {
                case 0: func_B6C4_b0(); break;
                case 1: func_B6C4_b1(); break;
                case 2: func_B6C4_b2(); break;
                case 3: func_B6C4_b3(); break;
                case 4: func_B6C4_b4(); break;
                case 5: func_B6C4_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x80A5:
            switch (g_current_bank) {
                case 1: func_80A5_b1(); break;
                case 2: func_80A5_b2(); break;
                case 3: func_80A5_b3(); break;
                case 4: func_80A5_b4(); break;
                case 5: func_80A5_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9899:
            func_9899_b3(); break;
        case 0x9A06:
            func_9A06_b3(); break;
        case 0x99D1:
            func_99D1_b3(); break;
        case 0x9AF9:
            func_9AF9_b3(); break;
        case 0xB5C7:
            switch (g_current_bank) {
                case 3: func_B5C7_b3(); break;
                case 4: func_B5C7_b4(); break;
                case 5: func_B5C7_b5(); break;
                case 1: func_B5C7_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB568:
            switch (g_current_bank) {
                case 3: func_B568_b3(); break;
                case 4: func_B568_b4(); break;
                case 5: func_B568_b5(); break;
                case 0: func_B568_b0(); break;
                case 1: func_B568_b1(); break;
                case 2: func_B568_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB594:
            switch (g_current_bank) {
                case 3: func_B594_b3(); break;
                case 4: func_B594_b4(); break;
                case 5: func_B594_b5(); break;
                case 1: func_B594_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB769:
            switch (g_current_bank) {
                case 3: func_B769_b3(); break;
                case 4: func_B769_b4(); break;
                case 5: func_B769_b5(); break;
                case 1: func_B769_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB9E5:
            switch (g_current_bank) {
                case 3: func_B9E5_b3(); break;
                case 0: func_B9E5_b0(); break;
                case 1: func_B9E5_b1(); break;
                case 2: func_B9E5_b2(); break;
                case 4: func_B9E5_b4(); break;
                case 5: func_B9E5_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D19:
            func_8D19_b3(); break;
        case 0x9905:
            func_9905_b4(); break;
        case 0x991E:
            func_991E_b4(); break;
        case 0x992C:
            func_992C_b4(); break;
        case 0x9993:
            func_9993_b4(); break;
        case 0x9998:
            func_9998_b4(); break;
        case 0x9A0C:
            func_9A0C_b4(); break;
        case 0x9A31:
            func_9A31_b4(); break;
        case 0x99F7:
            func_99F7_b4(); break;
        case 0x9A15:
            func_9A15_b4(); break;
        case 0x9BBC:
            func_9BBC_b4(); break;
        case 0x9BAA:
            func_9BAA_b4(); break;
        case 0x9B2F:
            func_9B2F_b4(); break;
        case 0x9BE0:
            func_9BE0_b4(); break;
        case 0x9C19:
            func_9C19_b4(); break;
        case 0x9930:
            func_9930_b4(); break;
        case 0x802D:
            switch (g_current_bank) {
                case 4: func_802D_b4(); break;
                case 1: func_802D_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8030:
            switch (g_current_bank) {
                case 4: func_8030_b4(); break;
                case 1: func_8030_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8033:
            switch (g_current_bank) {
                case 4: func_8033_b4(); break;
                case 1: func_8033_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9540:
            func_9540_b5(); break;
        case 0x9D7F:
            switch (g_current_bank) {
                case 5: func_9D7F_b5(); break;
                case 6: func_9D7F_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D81:
            switch (g_current_bank) {
                case 5: func_9D81_b5(); break;
                case 6: func_9D81_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x916D:
            func_916D_b6(); break;
        case 0x918C:
            func_918C_b6(); break;
        case 0x9A29:
            func_9A29_b4(); break;
        case 0x9B3C:
            func_9B3C_b4(); break;
        case 0x915E:
            func_915E_b6(); break;
        case 0x8008:
            func_8008_b6(); break;
        case 0xEAF4:
            func_EAF4(); break;
        case 0x8180:
            func_8180_b0(); break;
        case 0x8988:
            func_8988_b0(); break;
        case 0xB31B:
            func_B31B_b0(); break;
        case 0xB329:
            func_B329_b0(); break;
        case 0xB33D:
            func_B33D_b0(); break;
        case 0xB352:
            func_B352_b0(); break;
        case 0xB360:
            func_B360_b0(); break;
        case 0xB374:
            func_B374_b0(); break;
        case 0xB38C:
            func_B38C_b0(); break;
        case 0xB394:
            func_B394_b0(); break;
        case 0xB3F0:
            switch (g_current_bank) {
                case 7: func_F3F0(); break;
                case 0: func_B3F0_b0(); break;
                case 1: func_B3F0_b1(); break;
                case 2: func_B3F0_b2(); break;
                case 3: func_B3F0_b3(); break;
                case 4: func_B3F0_b4(); break;
                case 5: func_B3F0_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB3FC:
            switch (g_current_bank) {
                case 7: func_F3FC(); break;
                case 0: func_B3FC_b0(); break;
                case 1: func_B3FC_b1(); break;
                case 2: func_B3FC_b2(); break;
                case 3: func_B3FC_b3(); break;
                case 4: func_B3FC_b4(); break;
                case 5: func_B3FC_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB40E:
            switch (g_current_bank) {
                case 7: func_F40E(); break;
                case 0: func_B40E_b0(); break;
                case 1: func_B40E_b1(); break;
                case 2: func_B40E_b2(); break;
                case 3: func_B40E_b3(); break;
                case 4: func_B40E_b4(); break;
                case 5: func_B40E_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB452:
            switch (g_current_bank) {
                case 0: func_B452_b0(); break;
                case 1: func_B452_b1(); break;
                case 2: func_B452_b2(); break;
                case 3: func_B452_b3(); break;
                case 4: func_B452_b4(); break;
                case 5: func_B452_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB493:
            switch (g_current_bank) {
                case 0: func_B493_b0(); break;
                case 1: func_B493_b1(); break;
                case 2: func_B493_b2(); break;
                case 3: func_B493_b3(); break;
                case 4: func_B493_b4(); break;
                case 5: func_B493_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB4A2:
            switch (g_current_bank) {
                case 0: func_B4A2_b0(); break;
                case 1: func_B4A2_b1(); break;
                case 2: func_B4A2_b2(); break;
                case 3: func_B4A2_b3(); break;
                case 4: func_B4A2_b4(); break;
                case 5: func_B4A2_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB4A9:
            switch (g_current_bank) {
                case 7: func_F4A9(); break;
                case 0: func_B4A9_b0(); break;
                case 1: func_B4A9_b1(); break;
                case 2: func_B4A9_b2(); break;
                case 3: func_B4A9_b3(); break;
                case 4: func_B4A9_b4(); break;
                case 5: func_B4A9_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB4BD:
            switch (g_current_bank) {
                case 0: func_B4BD_b0(); break;
                case 1: func_B4BD_b1(); break;
                case 2: func_B4BD_b2(); break;
                case 3: func_B4BD_b3(); break;
                case 4: func_B4BD_b4(); break;
                case 5: func_B4BD_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB587:
            switch (g_current_bank) {
                case 0: func_B587_b0(); break;
                case 1: func_B587_b1(); break;
                case 2: func_B587_b2(); break;
                case 3: func_B587_b3(); break;
                case 4: func_B587_b4(); break;
                case 5: func_B587_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB5A5:
            switch (g_current_bank) {
                case 0: func_B5A5_b0(); break;
                case 1: func_B5A5_b1(); break;
                case 2: func_B5A5_b2(); break;
                case 3: func_B5A5_b3(); break;
                case 4: func_B5A5_b4(); break;
                case 5: func_B5A5_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB978:
            switch (g_current_bank) {
                case 0: func_B978_b0(); break;
                case 1: func_B978_b1(); break;
                case 2: func_B978_b2(); break;
                case 3: func_B978_b3(); break;
                case 4: func_B978_b4(); break;
                case 5: func_B978_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB98C:
            switch (g_current_bank) {
                case 0: func_B98C_b0(); break;
                case 1: func_B98C_b1(); break;
                case 2: func_B98C_b2(); break;
                case 3: func_B98C_b3(); break;
                case 4: func_B98C_b4(); break;
                case 5: func_B98C_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB9A0:
            switch (g_current_bank) {
                case 0: func_B9A0_b0(); break;
                case 1: func_B9A0_b1(); break;
                case 2: func_B9A0_b2(); break;
                case 3: func_B9A0_b3(); break;
                case 4: func_B9A0_b4(); break;
                case 5: func_B9A0_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB9E4:
            switch (g_current_bank) {
                case 0: func_B9E4_b0(); break;
                case 1: func_B9E4_b1(); break;
                case 2: func_B9E4_b2(); break;
                case 3: func_B9E4_b3(); break;
                case 4: func_B9E4_b4(); break;
                case 5: func_B9E4_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB9F3:
            switch (g_current_bank) {
                case 0: func_B9F3_b0(); break;
                case 1: func_B9F3_b1(); break;
                case 2: func_B9F3_b2(); break;
                case 3: func_B9F3_b3(); break;
                case 4: func_B9F3_b4(); break;
                case 5: func_B9F3_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBA41:
            switch (g_current_bank) {
                case 7: func_FA41(); break;
                case 0: func_BA41_b0(); break;
                case 1: func_BA41_b1(); break;
                case 2: func_BA41_b2(); break;
                case 3: func_BA41_b3(); break;
                case 4: func_BA41_b4(); break;
                case 5: func_BA41_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBC1C:
            switch (g_current_bank) {
                case 0: func_BC1C_b0(); break;
                case 1: func_BC1C_b1(); break;
                case 2: func_BC1C_b2(); break;
                case 3: func_BC1C_b3(); break;
                case 4: func_BC1C_b4(); break;
                case 5: func_BC1C_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBC53:
            switch (g_current_bank) {
                case 0: func_BC53_b0(); break;
                case 1: func_BC53_b1(); break;
                case 2: func_BC53_b2(); break;
                case 3: func_BC53_b3(); break;
                case 4: func_BC53_b4(); break;
                case 5: func_BC53_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBC64:
            switch (g_current_bank) {
                case 0: func_BC64_b0(); break;
                case 1: func_BC64_b1(); break;
                case 2: func_BC64_b2(); break;
                case 3: func_BC64_b3(); break;
                case 4: func_BC64_b4(); break;
                case 5: func_BC64_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBC6D:
            func_BC6D_b0(); break;
        case 0xBC7B:
            func_BC7B_b0(); break;
        case 0xBF19:
            switch (g_current_bank) {
                case 0: func_BF19_b0(); break;
                case 1: func_BF19_b1(); break;
                case 2: func_BF19_b2(); break;
                case 3: func_BF19_b3(); break;
                case 4: func_BF19_b4(); break;
                case 5: func_BF19_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x86FD:
            func_86FD_b1(); break;
        case 0x8701:
            func_8701_b1(); break;
        case 0x871F:
            func_871F_b1(); break;
        case 0x872B:
            func_872B_b1(); break;
        case 0x8737:
            func_8737_b1(); break;
        case 0x8747:
            func_8747_b1(); break;
        case 0x8749:
            func_8749_b1(); break;
        case 0x8751:
            func_8751_b1(); break;
        case 0x875D:
            func_875D_b1(); break;
        case 0x8775:
            func_8775_b1(); break;
        case 0x878D:
            func_878D_b1(); break;
        case 0x8791:
            func_8791_b1(); break;
        case 0x8799:
            func_8799_b1(); break;
        case 0x87A5:
            func_87A5_b1(); break;
        case 0x87B1:
            func_87B1_b1(); break;
        case 0x8802:
            func_8802_b1(); break;
        case 0x8885:
            func_8885_b1(); break;
        case 0x888F:
            func_888F_b1(); break;
        case 0x8899:
            func_8899_b1(); break;
        case 0x88A3:
            func_88A3_b1(); break;
        case 0x88AD:
            func_88AD_b1(); break;
        case 0x88B8:
            func_88B8_b1(); break;
        case 0x88C3:
            func_88C3_b1(); break;
        case 0x88CE:
            func_88CE_b1(); break;
        case 0x88EE:
            func_88EE_b1(); break;
        case 0x88F8:
            func_88F8_b1(); break;
        case 0x8904:
            func_8904_b1(); break;
        case 0x890A:
            func_890A_b1(); break;
        case 0x890F:
            func_890F_b1(); break;
        case 0x8914:
            func_8914_b1(); break;
        case 0x8928:
            func_8928_b1(); break;
        case 0x893C:
            func_893C_b1(); break;
        case 0x8948:
            func_8948_b1(); break;
        case 0x8954:
            func_8954_b1(); break;
        case 0x8961:
            func_8961_b1(); break;
        case 0x8974:
            func_8974_b1(); break;
        case 0x8987:
            func_8987_b1(); break;
        case 0x8995:
            func_8995_b1(); break;
        case 0x89A9:
            func_89A9_b1(); break;
        case 0x89BE:
            func_89BE_b1(); break;
        case 0x89D2:
            func_89D2_b1(); break;
        case 0x89E6:
            func_89E6_b1(); break;
        case 0x89FB:
            func_89FB_b1(); break;
        case 0x8A0F:
            func_8A0F_b1(); break;
        case 0x8A1D:
            func_8A1D_b1(); break;
        case 0x8A21:
            func_8A21_b1(); break;
        case 0x8A26:
            func_8A26_b1(); break;
        case 0x8A3C:
            func_8A3C_b1(); break;
        case 0x8A41:
            func_8A41_b1(); break;
        case 0x8A46:
            func_8A46_b1(); break;
        case 0x8A4E:
            func_8A4E_b1(); break;
        case 0x8A56:
            func_8A56_b1(); break;
        case 0x8A5E:
            func_8A5E_b1(); break;
        case 0x8A66:
            func_8A66_b1(); break;
        case 0x8A6E:
            func_8A6E_b1(); break;
        case 0x8A76:
            func_8A76_b1(); break;
        case 0x8A7E:
            func_8A7E_b1(); break;
        case 0x8A86:
            func_8A86_b1(); break;
        case 0x8A8E:
            func_8A8E_b1(); break;
        case 0x8A9C:
            func_8A9C_b1(); break;
        case 0x8AA1:
            func_8AA1_b1(); break;
        case 0x8AA6:
            func_8AA6_b1(); break;
        case 0x8AAE:
            func_8AAE_b1(); break;
        case 0x8ABA:
            func_8ABA_b1(); break;
        case 0x8AC4:
            func_8AC4_b1(); break;
        case 0x8AD8:
            func_8AD8_b1(); break;
        case 0x8AE9:
            func_8AE9_b1(); break;
        case 0x8AF3:
            func_8AF3_b1(); break;
        case 0x8B03:
            func_8B03_b1(); break;
        case 0x99B8:
            func_99B8_b1(); break;
        case 0x99FA:
            func_99FA_b1(); break;
        case 0x9A49:
            func_9A49_b1(); break;
        case 0x9A4C:
            func_9A4C_b1(); break;
        case 0x9A8F:
            func_9A8F_b1(); break;
        case 0x9AA8:
            func_9AA8_b1(); break;
        case 0x9ABD:
            func_9ABD_b1(); break;
        case 0x9AC6:
            func_9AC6_b1(); break;
        case 0x9ADA:
            func_9ADA_b1(); break;
        case 0x9AE2:
            func_9AE2_b1(); break;
        case 0x9C1D:
            func_9C1D_b1(); break;
        case 0x9C2A:
            func_9C2A_b1(); break;
        case 0x9C96:
            func_9C96_b1(); break;
        case 0x9CA8:
            func_9CA8_b1(); break;
        case 0x9CCC:
            func_9CCC_b1(); break;
        case 0x9D05:
            func_9D05_b1(); break;
        case 0xBB22:
            switch (g_current_bank) {
                case 3: func_BB22_b3(); break;
                case 4: func_BB22_b4(); break;
                case 5: func_BB22_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x871C:
            func_871C_b5(); break;
        case 0xB2FC:
            func_B2FC_b0(); break;
        case 0xBC22:
            switch (g_current_bank) {
                case 0: func_BC22_b0(); break;
                case 1: func_BC22_b1(); break;
                case 2: func_BC22_b2(); break;
                case 3: func_BC22_b3(); break;
                case 4: func_BC22_b4(); break;
                case 5: func_BC22_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x86FB:
            func_86FB_b1(); break;
        case 0x8700:
            func_8700_b1(); break;
        case 0x8736:
            func_8736_b1(); break;
        case 0x876D:
            func_876D_b1(); break;
        case 0xFE21:
            func_FE21(); break;
        case 0xC360:
            func_C360(); break;
        case 0xA08B:
            func_A08B_b1(); break;
        case 0xDF73:
            func_DF73(); break;
        case 0x8790:
            func_8790_b1(); break;
        case 0x87A4:
            func_87A4_b1(); break;
        case 0x99A1:
            func_99A1_b1(); break;
        case 0xBDBB:
            switch (g_current_bank) {
                case 3: func_BDBB_b3(); break;
                case 4: func_BDBB_b4(); break;
                case 5: func_BDBB_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xFE1D:
            func_FE1D(); break;
        case 0xC33D:
            func_C33D(); break;
        default:
            nes_log_dispatch_miss(addr);
            return 0;
    }
    return 1;
}
