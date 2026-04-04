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
            switch (g_current_bank) {
                case 0: func_8071_b0(); break;
                case 4: func_8071_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x80D0:
            func_80D0_b0(); break;
        case 0x80F9:
            func_80F9_b0(); break;
        case 0x812C:
            func_812C_b0(); break;
        case 0x8142:
            switch (g_current_bank) {
                case 0: func_8142_b0(); break;
                case 1: func_8142_b1(); break;
                case 2: func_8142_b2(); break;
                case 3: func_8142_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8109:
            switch (g_current_bank) {
                case 0: func_8109_b0(); break;
                case 5: func_8109_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
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
            switch (g_current_bank) {
                case 0: func_8283_b0(); break;
                case 1: func_8283_b1(); break;
                case 2: func_8283_b2(); break;
                case 3: func_8283_b3(); break;
                case 4: func_8283_b4(); break;
                case 5: func_8283_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
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
            switch (g_current_bank) {
                case 4: func_99DE_b4(); break;
                case 6: func_99DE_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
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
            switch (g_current_bank) {
                case 0: func_8AA7_b0(); break;
                case 1: func_8AA7_b1(); break;
                case 2: func_8AA7_b2(); break;
                case 3: func_8AA7_b3(); break;
                case 4: func_8AA7_b4(); break;
                case 5: func_8AA7_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
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
            switch (g_current_bank) {
                case 7: func_D0D1(); break;
                case 0: func_90D1_b0(); break;
                case 3: func_90D1_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
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
            switch (g_current_bank) {
                case 7: func_DF20(); break;
                case 0: func_9F20_b0(); break;
                case 1: func_9F20_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
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
                case 6: func_B434_b6(); break;
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
                case 1: func_8036_b1(); break;
                case 4: func_8036_b4(); break;
                case 6: func_8036_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8039:
            switch (g_current_bank) {
                case 2: func_8039_b2(); break;
                case 5: func_8039_b5(); break;
                case 1: func_8039_b1(); break;
                case 4: func_8039_b4(); break;
                case 6: func_8039_b6(); break;
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
                case 1: func_8027_b1(); break;
                case 4: func_8027_b4(); break;
                case 6: func_8027_b6(); break;
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
                case 1: func_8003_b1(); break;
                case 4: func_8003_b4(); break;
                case 6: func_8003_b6(); break;
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
                case 1: func_95C6_b1(); break;
                case 6: func_95C6_b6(); break;
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
            func_9967_b3(); break;
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
            switch (g_current_bank) {
                case 0: func_981E_b0(); break;
                case 4: func_981E_b4(); break;
                case 5: func_981E_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
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
                case 6: func_B4ED_b6(); break;
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
                case 6: func_BC83_b6(); break;
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
                case 1: func_8006_b1(); break;
                case 4: func_8006_b4(); break;
                case 6: func_8006_b6(); break;
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
            switch (g_current_bank) {
                case 7: func_D001(); break;
                case 0: func_9001_b0(); break;
                case 4: func_9001_b4(); break;
                case 5: func_9001_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9011:
            func_9011_b0(); break;
        case 0x8E4E:
            func_8E4E_b0(); break;
        case 0x8E21:
            switch (g_current_bank) {
                case 7: func_CE21(); break;
                case 0: func_8E21_b0(); break;
                case 1: func_8E21_b1(); break;
                case 5: func_8E21_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
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
                case 1: func_801E_b1(); break;
                case 4: func_801E_b4(); break;
                case 6: func_801E_b6(); break;
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
                case 0: func_802A_b0(); break;
                case 1: func_802A_b1(); break;
                case 4: func_802A_b4(); break;
                case 6: func_802A_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x801B:
            switch (g_current_bank) {
                case 7: func_C01B(); break;
                case 2: func_801B_b2(); break;
                case 5: func_801B_b5(); break;
                case 1: func_801B_b1(); break;
                case 4: func_801B_b4(); break;
                case 6: func_801B_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8009:
            switch (g_current_bank) {
                case 7: func_C009(); break;
                case 2: func_8009_b2(); break;
                case 5: func_8009_b5(); break;
                case 1: func_8009_b1(); break;
                case 4: func_8009_b4(); break;
                case 6: func_8009_b6(); break;
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
            func_9A13_b2(); break;
        case 0x800C:
            switch (g_current_bank) {
                case 2: func_800C_b2(); break;
                case 5: func_800C_b5(); break;
                case 1: func_800C_b1(); break;
                case 4: func_800C_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB102:
            func_B102_b2(); break;
        case 0x9A27:
            func_9A27_b2(); break;
        case 0x8021:
            switch (g_current_bank) {
                case 7: func_C021(); break;
                case 2: func_8021_b2(); break;
                case 5: func_8021_b5(); break;
                case 1: func_8021_b1(); break;
                case 3: func_8021_b3(); break;
                case 4: func_8021_b4(); break;
                case 6: func_8021_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9B59:
            switch (g_current_bank) {
                case 2: func_9B59_b2(); break;
                case 5: func_9B59_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
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
            switch (g_current_bank) {
                case 3: func_9D64_b3(); break;
                case 1: func_9D64_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9CD6:
            func_9CD6_b3(); break;
        case 0xA28A:
            switch (g_current_bank) {
                case 3: func_A28A_b3(); break;
                case 0: func_A28A_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x803F:
            func_803F_b3(); break;
        case 0x9B20:
            func_9B20_b3(); break;
        case 0x9D88:
            switch (g_current_bank) {
                case 3: func_9D88_b3(); break;
                case 0: func_9D88_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
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
            switch (g_current_bank) {
                case 3: func_A041_b3(); break;
                case 0: func_A041_b0(); break;
                case 2: func_A041_b2(); break;
                case 4: func_A041_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
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
            switch (g_current_bank) {
                case 3: func_9ED6_b3(); break;
                case 4: func_9ED6_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9F69:
            switch (g_current_bank) {
                case 3: func_9F69_b3(); break;
                case 4: func_9F69_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x803C:
            func_803C_b3(); break;
        case 0xA16B:
            func_A16B_b3(); break;
        case 0x9EE7:
            func_9EE7_b3(); break;
        case 0x8045:
            func_8045_b3(); break;
        case 0xA29B:
            switch (g_current_bank) {
                case 3: func_A29B_b3(); break;
                case 4: func_A29B_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
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
                case 0: func_8C61_b0(); break;
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
            switch (g_current_bank) {
                case 0: func_B0A0_b0(); break;
                case 1: func_B0A0_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
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
                case 6: func_B482_b6(); break;
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
                case 6: func_B4D9_b6(); break;
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
                case 0: func_B5B7_b0(); break;
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
                case 6: func_B4D2_b6(); break;
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
                case 6: func_B8C6_b6(); break;
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
                case 6: func_B9BC_b6(); break;
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
                case 6: func_B899_b6(); break;
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
                case 6: func_B9A8_b6(); break;
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
                case 6: func_B9D0_b6(); break;
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
                case 6: func_B8F3_b6(); break;
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
                case 0: func_BA71_b0(); break;
                case 6: func_BA71_b6(); break;
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
                case 0: func_BA38_b0(); break;
                case 6: func_BA38_b6(); break;
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
                case 0: func_B420_b0(); break;
                case 6: func_B420_b6(); break;
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
                case 0: func_BA67_b0(); break;
                case 6: func_BA67_b6(); break;
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
                case 0: func_BA23_b0(); break;
                case 6: func_BA23_b6(); break;
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
                case 0: func_BB4C_b0(); break;
                case 6: func_BB4C_b6(); break;
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
                case 0: func_BB0C_b0(); break;
                case 6: func_BB0C_b6(); break;
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
                case 0: func_BBE7_b0(); break;
                case 6: func_BBE7_b6(); break;
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
                case 0: func_BAE3_b0(); break;
                case 6: func_BAE3_b6(); break;
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
                case 0: func_BBD8_b0(); break;
                case 6: func_BBD8_b6(); break;
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
                case 0: func_BBFD_b0(); break;
                case 6: func_BBFD_b6(); break;
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
                case 0: func_BB67_b0(); break;
                case 6: func_BB67_b6(); break;
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
                case 0: func_BAD5_b0(); break;
                case 6: func_BAD5_b6(); break;
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
                case 0: func_BCDA_b0(); break;
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
                case 0: func_BCCA_b0(); break;
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
                case 0: func_BCC6_b0(); break;
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
                case 0: func_BCB9_b0(); break;
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
                case 0: func_BCCE_b0(); break;
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
                case 0: func_BA14_b0(); break;
                case 6: func_BA14_b6(); break;
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
                case 0: func_BF62_b0(); break;
                case 6: func_BF62_b6(); break;
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
                case 0: func_B42C_b0(); break;
                case 6: func_B42C_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xEA72:
            func_EA72(); break;
        case 0xFF11:
            func_FF11(); break;
        case 0x9190:
            switch (g_current_bank) {
                case 5: func_9190_b5(); break;
                case 3: func_9190_b3(); break;
                case 4: func_9190_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xFF48:
            func_FF48(); break;
        case 0x8801:
            switch (g_current_bank) {
                case 7: func_C801(); break;
                case 1: func_8801_b1(); break;
                case 4: func_8801_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB001:
            switch (g_current_bank) {
                case 7: func_F001(); break;
                case 1: func_B001_b1(); break;
                case 0: func_B001_b0(); break;
                case 2: func_B001_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xCB6A:
            func_CB6A(); break;
        case 0xFF4F:
            func_FF4F(); break;
        case 0x9401:
            func_9401_b2(); break;
        case 0x9C01:
            switch (g_current_bank) {
                case 2: func_9C01_b2(); break;
                case 1: func_9C01_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
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
                case 1: func_B91C_b1(); break;
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
                case 0: func_BB49_b0(); break;
                case 6: func_BB49_b6(); break;
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
                case 0: func_BB46_b0(); break;
                case 6: func_BB46_b6(); break;
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
                case 0: func_BACD_b0(); break;
                case 6: func_BACD_b6(); break;
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
                case 0: func_BAD1_b0(); break;
                case 6: func_BAD1_b6(); break;
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
                case 0: func_BAE0_b0(); break;
                case 6: func_BAE0_b6(); break;
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
                case 0: func_BCBB_b0(); break;
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
                case 1: func_B61C_b1(); break;
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
                case 6: func_A0C7_b6(); break;
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
            switch (g_current_bank) {
                case 1: func_AF83_b1(); break;
                case 2: func_AF83_b2(); break;
                case 4: func_AF83_b4(); break;
                case 5: func_AF83_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC2FD:
            func_C2FD(); break;
        case 0xAF47:
            func_AF47_b1(); break;
        case 0xA017:
            func_A017_b0(); break;
        case 0x84D2:
            func_84D2_b0(); break;
        case 0x8282:
            func_8282_b0(); break;
        case 0xA381:
            func_A381_b0(); break;
        case 0x9494:
            func_9494_b0(); break;
        case 0x84CE:
            func_84CE_b0(); break;
        case 0xB28D:
            func_B28D_b0(); break;
        case 0x84CC:
            func_84CC_b0(); break;
        case 0x84D9:
            func_84D9_b0(); break;
        case 0x84B9:
            func_84B9_b0(); break;
        case 0x84C3:
            func_84C3_b0(); break;
        case 0xA201:
            func_A201_b0(); break;
        case 0xA80B:
            func_A80B_b0(); break;
        case 0x84A9:
            func_84A9_b0(); break;
        case 0xA4F8:
            func_A4F8_b0(); break;
        case 0x8502:
            func_8502_b0(); break;
        case 0x851D:
            func_851D_b0(); break;
        case 0x8504:
            func_8504_b0(); break;
        case 0xA58B:
            func_A58B_b0(); break;
        case 0xA988:
            func_A988_b0(); break;
        case 0x8519:
            func_8519_b0(); break;
        case 0xA9FC:
            func_A9FC_b0(); break;
        case 0xA519:
            switch (g_current_bank) {
                case 7: func_E519(); break;
                case 0: func_A519_b0(); break;
                case 1: func_A519_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBFC6:
            func_BFC6_b0(); break;
        case 0xBFE7:
            func_BFE7_b0(); break;
        case 0x8D7D:
            func_8D7D_b0(); break;
        case 0xA9BC:
            switch (g_current_bank) {
                case 0: func_A9BC_b0(); break;
                case 3: func_A9BC_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8507:
            func_8507_b0(); break;
        case 0xA90D:
            func_A90D_b0(); break;
        case 0xB8A6:
            func_B8A6_b0(); break;
        case 0xA9D3:
            func_A9D3_b0(); break;
        case 0x84C9:
            func_84C9_b0(); break;
        case 0x8413:
            func_8413_b0(); break;
        case 0x8415:
            func_8415_b0(); break;
        case 0x8417:
            func_8417_b0(); break;
        case 0x8D00:
            func_8D00_b0(); break;
        case 0x8181:
            func_8181_b0(); break;
        case 0x8221:
            func_8221_b0(); break;
        case 0x8421:
            func_8421_b0(); break;
        case 0x8688:
            switch (g_current_bank) {
                case 7: func_C688(); break;
                case 0: func_8688_b0(); break;
                case 6: func_8688_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8989:
            func_8989_b0(); break;
        case 0x888A:
            func_888A_b0(); break;
        case 0x8322:
            func_8322_b0(); break;
        case 0xBD0B:
            switch (g_current_bank) {
                case 0: func_BD0B_b0(); break;
                case 1: func_BD0B_b1(); break;
                case 2: func_BD0B_b2(); break;
                case 3: func_BD0B_b3(); break;
                case 4: func_BD0B_b4(); break;
                case 5: func_BD0B_b5(); break;
                case 6: func_BD0B_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x87C5:
            func_87C5_b0(); break;
        case 0xA09E:
            func_A09E_b0(); break;
        case 0xA5DF:
            func_A5DF_b0(); break;
        case 0xA37E:
            func_A37E_b0(); break;
        case 0xA39E:
            func_A39E_b0(); break;
        case 0xA19E:
            func_A19E_b0(); break;
        case 0x8A61:
            func_8A61_b0(); break;
        case 0xA8C3:
            func_A8C3_b0(); break;
        case 0x89B1:
            func_89B1_b0(); break;
        case 0xA99E:
            func_A99E_b0(); break;
        case 0xB1C9:
            switch (g_current_bank) {
                case 0: func_B1C9_b0(); break;
                case 1: func_B1C9_b1(); break;
                case 2: func_B1C9_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBF21:
            switch (g_current_bank) {
                case 7: func_FF21(); break;
                case 0: func_BF21_b0(); break;
                case 1: func_BF21_b1(); break;
                case 2: func_BF21_b2(); break;
                case 3: func_BF21_b3(); break;
                case 4: func_BF21_b4(); break;
                case 5: func_BF21_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBD03:
            switch (g_current_bank) {
                case 0: func_BD03_b0(); break;
                case 1: func_BD03_b1(); break;
                case 2: func_BD03_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA2BE:
            func_A2BE_b0(); break;
        case 0x9D07:
            switch (g_current_bank) {
                case 7: func_DD07(); break;
                case 0: func_9D07_b0(); break;
                case 1: func_9D07_b1(); break;
                case 4: func_9D07_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB8AA:
            func_B8AA_b0(); break;
        case 0x8DB9:
            func_8DB9_b0(); break;
        case 0x8D70:
            func_8D70_b0(); break;
        case 0xA970:
            func_A970_b0(); break;
        case 0x8002:
            func_8002_b0(); break;
        case 0xA581:
            switch (g_current_bank) {
                case 0: func_A581_b0(); break;
                case 5: func_A581_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBD0F:
            switch (g_current_bank) {
                case 0: func_BD0F_b0(); break;
                case 1: func_BD0F_b1(); break;
                case 2: func_BD0F_b2(); break;
                case 3: func_BD0F_b3(); break;
                case 4: func_BD0F_b4(); break;
                case 5: func_BD0F_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAABA:
            func_AABA_b0(); break;
        case 0x904B:
            func_904B_b0(); break;
        case 0xB9C2:
            func_B9C2_b0(); break;
        case 0xA0AE:
            switch (g_current_bank) {
                case 0: func_A0AE_b0(); break;
                case 2: func_A0AE_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x858B:
            func_858B_b0(); break;
        case 0x8B01:
            func_8B01_b0(); break;
        case 0x8B1A:
            func_8B1A_b0(); break;
        case 0x8B24:
            func_8B24_b0(); break;
        case 0x8B42:
            func_8B42_b0(); break;
        case 0x8B4C:
            func_8B4C_b0(); break;
        case 0x86AE:
            func_86AE_b0(); break;
        case 0xA405:
            func_A405_b0(); break;
        case 0x8402:
            func_8402_b0(); break;
        case 0xA46A:
            func_A46A_b0(); break;
        case 0x868E:
            func_868E_b0(); break;
        case 0xA408:
            func_A408_b0(); break;
        case 0x88BA:
            func_88BA_b0(); break;
        case 0xA209:
            switch (g_current_bank) {
                case 0: func_A209_b0(); break;
                case 2: func_A209_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA609:
            func_A609_b0(); break;
        case 0xB008:
            func_B008_b0(); break;
        case 0x8591:
            func_8591_b0(); break;
        case 0xAC01:
            switch (g_current_bank) {
                case 7: func_EC01(); break;
                case 0: func_AC01_b0(); break;
                case 4: func_AC01_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA569:
            func_A569_b0(); break;
        case 0x850D:
            func_850D_b0(); break;
        case 0x9910:
            func_9910_b0(); break;
        case 0x8E8E:
            func_8E8E_b0(); break;
        case 0xAC40:
            func_AC40_b0(); break;
        case 0x908E:
            func_908E_b0(); break;
        case 0x918E:
            func_918E_b0(); break;
        case 0xA507:
            switch (g_current_bank) {
                case 0: func_A507_b0(); break;
                case 1: func_A507_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8581:
            switch (g_current_bank) {
                case 0: func_8581_b0(); break;
                case 1: func_8581_b1(); break;
                case 2: func_8581_b2(); break;
                case 3: func_8581_b3(); break;
                case 4: func_8581_b4(); break;
                case 5: func_8581_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB904:
            switch (g_current_bank) {
                case 0: func_B904_b0(); break;
                case 1: func_B904_b1(); break;
                case 2: func_B904_b2(); break;
                case 3: func_B904_b3(); break;
                case 4: func_B904_b4(); break;
                case 5: func_B904_b5(); break;
                case 6: func_B904_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x939A:
            func_939A_b0(); break;
        case 0xA5C1:
            func_A5C1_b0(); break;
        case 0x90AE:
            func_90AE_b0(); break;
        case 0x97AE:
            switch (g_current_bank) {
                case 7: func_D7AE(); break;
                case 0: func_97AE_b0(); break;
                case 1: func_97AE_b1(); break;
                case 5: func_97AE_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA5E7:
            func_A5E7_b0(); break;
        case 0x9007:
            func_9007_b0(); break;
        case 0x8D07:
            func_8D07_b0(); break;
        case 0xAC0A:
            func_AC0A_b0(); break;
        case 0x8E08:
            func_8E08_b0(); break;
        case 0xA9F6:
            switch (g_current_bank) {
                case 0: func_A9F6_b0(); break;
                case 3: func_A9F6_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x99CE:
            func_99CE_b0(); break;
        case 0xB039:
            func_B039_b0(); break;
        case 0x887A:
            func_887A_b0(); break;
        case 0xA28E:
            func_A28E_b0(); break;
        case 0xA48E:
            func_A48E_b0(); break;
        case 0xA78E:
            switch (g_current_bank) {
                case 0: func_A78E_b0(); break;
                case 3: func_A78E_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAE8E:
            func_AE8E_b0(); break;
        case 0x958E:
            func_958E_b0(); break;
        case 0x9627:
            func_9627_b0(); break;
        case 0xBB29:
            switch (g_current_bank) {
                case 7: func_FB29(); break;
                case 0: func_BB29_b0(); break;
                case 1: func_BB29_b1(); break;
                case 2: func_BB29_b2(); break;
                case 3: func_BB29_b3(); break;
                case 4: func_BB29_b4(); break;
                case 5: func_BB29_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9E23:
            func_9E23_b0(); break;
        case 0xA321:
            func_A321_b0(); break;
        case 0xAC0D:
            func_AC0D_b0(); break;
        case 0x8D09:
            func_8D09_b0(); break;
        case 0xAC07:
            switch (g_current_bank) {
                case 0: func_AC07_b0(); break;
                case 3: func_AC07_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D51:
            func_8D51_b0(); break;
        case 0xAE1C:
            func_AE1C_b0(); break;
        case 0xA8AA:
            func_A8AA_b0(); break;
        case 0xBF4D:
            switch (g_current_bank) {
                case 0: func_BF4D_b0(); break;
                case 1: func_BF4D_b1(); break;
                case 2: func_BF4D_b2(); break;
                case 3: func_BF4D_b3(); break;
                case 4: func_BF4D_b4(); break;
                case 5: func_BF4D_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x850A:
            func_850A_b0(); break;
        case 0x859A:
            switch (g_current_bank) {
                case 0: func_859A_b0(); break;
                case 6: func_859A_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x99BA:
            switch (g_current_bank) {
                case 7: func_D9BA(); break;
                case 0: func_99BA_b0(); break;
                case 1: func_99BA_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D93:
            func_8D93_b0(); break;
        case 0xA099:
            func_A099_b0(); break;
        case 0x845C:
            func_845C_b0(); break;
        case 0x844C:
            func_844C_b0(); break;
        case 0x9326:
            func_9326_b0(); break;
        case 0xA95D:
            func_A95D_b0(); break;
        case 0xA0BA:
            func_A0BA_b0(); break;
        case 0x8C22:
            func_8C22_b0(); break;
        case 0xA294:
            func_A294_b0(); break;
        case 0xA0AA:
            func_A0AA_b0(); break;
        case 0x9D6A:
            func_9D6A_b0(); break;
        case 0x8D9A:
            func_8D9A_b0(); break;
        case 0x86E5:
            func_86E5_b0(); break;
        case 0x80A3:
            func_80A3_b0(); break;
        case 0x8608:
            func_8608_b0(); break;
        case 0x8AE9:
            switch (g_current_bank) {
                case 0: func_8AE9_b0(); break;
                case 1: func_8AE9_b1(); break;
                case 2: func_8AE9_b2(); break;
                case 3: func_8AE9_b3(); break;
                case 4: func_8AE9_b4(); break;
                case 5: func_8AE9_b5(); break;
                case 6: func_8AE9_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9056:
            func_9056_b0(); break;
        case 0x8600:
            func_8600_b0(); break;
        case 0xA539:
            func_A539_b0(); break;
        case 0x866F:
            func_866F_b0(); break;
        case 0x9587:
            func_9587_b0(); break;
        case 0xAA96:
            func_AA96_b0(); break;
        case 0x95CF:
            func_95CF_b0(); break;
        case 0x95F3:
            func_95F3_b0(); break;
        case 0x9617:
            func_9617_b0(); break;
        case 0x963B:
            func_963B_b0(); break;
        case 0x965F:
            func_965F_b0(); break;
        case 0x9683:
            func_9683_b0(); break;
        case 0x96A7:
            func_96A7_b0(); break;
        case 0x96CB:
            func_96CB_b0(); break;
        case 0x96EF:
            func_96EF_b0(); break;
        case 0x9713:
            func_9713_b0(); break;
        case 0x9737:
            func_9737_b0(); break;
        case 0x975B:
            func_975B_b0(); break;
        case 0x977F:
            func_977F_b0(); break;
        case 0xA298:
            func_A298_b0(); break;
        case 0x97A3:
            func_97A3_b0(); break;
        case 0x97C7:
            func_97C7_b0(); break;
        case 0x97EB:
            func_97EB_b0(); break;
        case 0x97F3:
            func_97F3_b0(); break;
        case 0xB01E:
            func_B01E_b0(); break;
        case 0xA51E:
            func_A51E_b0(); break;
        case 0x9FA3:
            func_9FA3_b0(); break;
        case 0xA3CF:
            func_A3CF_b0(); break;
        case 0xA2D0:
            func_A2D0_b0(); break;
        case 0xAFE4:
            switch (g_current_bank) {
                case 0: func_AFE4_b0(); break;
                case 4: func_AFE4_b4(); break;
                case 5: func_AFE4_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8A70:
            func_8A70_b0(); break;
        case 0x9883:
            switch (g_current_bank) {
                case 0: func_9883_b0(); break;
                case 5: func_9883_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAE08:
            func_AE08_b0(); break;
        case 0x9F0C:
            func_9F0C_b0(); break;
        case 0x99CA:
            func_99CA_b0(); break;
        case 0x99D7:
            func_99D7_b0(); break;
        case 0xB006:
            switch (g_current_bank) {
                case 7: func_F006(); break;
                case 0: func_B006_b0(); break;
                case 1: func_B006_b1(); break;
                case 2: func_B006_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA1B9:
            func_A1B9_b0(); break;
        case 0xA264:
            func_A264_b0(); break;
        case 0xA8A3:
            func_A8A3_b0(); break;
        case 0x80AA:
            switch (g_current_bank) {
                case 7: func_C0AA(); break;
                case 0: func_80AA_b0(); break;
                case 1: func_80AA_b1(); break;
                case 2: func_80AA_b2(); break;
                case 3: func_80AA_b3(); break;
                case 5: func_80AA_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA59F:
            func_A59F_b0(); break;
        case 0xA27E:
            func_A27E_b0(); break;
        case 0xA053:
            func_A053_b0(); break;
        case 0x857B:
            func_857B_b0(); break;
        case 0x8186:
            func_8186_b0(); break;
        case 0xA981:
            switch (g_current_bank) {
                case 0: func_A981_b0(); break;
                case 5: func_A981_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x81E7:
            func_81E7_b0(); break;
        case 0xA02D:
            func_A02D_b0(); break;
        case 0x859C:
            func_859C_b0(); break;
        case 0xA584:
            switch (g_current_bank) {
                case 0: func_A584_b0(); break;
                case 2: func_A584_b2(); break;
                case 4: func_A584_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8411:
            func_8411_b0(); break;
        case 0x83E7:
            func_83E7_b0(); break;
        case 0x852E:
            func_852E_b0(); break;
        case 0xA50A:
            func_A50A_b0(); break;
        case 0x88CA:
            func_88CA_b0(); break;
        case 0x8802:
            switch (g_current_bank) {
                case 7: func_C802(); break;
                case 0: func_8802_b0(); break;
                case 1: func_8802_b1(); break;
                case 2: func_8802_b2(); break;
                case 3: func_8802_b3(); break;
                case 4: func_8802_b4(); break;
                case 5: func_8802_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D13:
            func_9D13_b0(); break;
        case 0x859E:
            func_859E_b0(); break;
        case 0x9CFB:
            func_9CFB_b0(); break;
        case 0x9D2B:
            func_9D2B_b0(); break;
        case 0x9D4B:
            switch (g_current_bank) {
                case 0: func_9D4B_b0(); break;
                case 1: func_9D4B_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D67:
            func_9D67_b0(); break;
        case 0x9DD3:
            func_9DD3_b0(); break;
        case 0x9E09:
            func_9E09_b0(); break;
        case 0x9E3F:
            func_9E3F_b0(); break;
        case 0x9E75:
            func_9E75_b0(); break;
        case 0xA379:
            func_A379_b0(); break;
        case 0x8033:
            switch (g_current_bank) {
                case 0: func_8033_b0(); break;
                case 1: func_8033_b1(); break;
                case 4: func_8033_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB379:
            func_B379_b0(); break;
        case 0x9381:
            func_9381_b0(); break;
        case 0x8008:
            switch (g_current_bank) {
                case 7: func_C008(); break;
                case 0: func_8008_b0(); break;
                case 6: func_8008_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8018:
            func_8018_b0(); break;
        case 0xB224:
            func_B224_b0(); break;
        case 0xB348:
            func_B348_b0(); break;
        case 0x9524:
            func_9524_b0(); break;
        case 0x98D7:
            func_98D7_b0(); break;
        case 0x80BA:
            func_80BA_b0(); break;
        case 0x9F9C:
            func_9F9C_b0(); break;
        case 0x9FC0:
            func_9FC0_b0(); break;
        case 0x9FCC:
            func_9FCC_b0(); break;
        case 0x9FD8:
            func_9FD8_b0(); break;
        case 0x9FE4:
            func_9FE4_b0(); break;
        case 0x9FF0:
            func_9FF0_b0(); break;
        case 0x9FFC:
            switch (g_current_bank) {
                case 0: func_9FFC_b0(); break;
                case 4: func_9FFC_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA008:
            switch (g_current_bank) {
                case 0: func_A008_b0(); break;
                case 1: func_A008_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9807:
            func_9807_b0(); break;
        case 0xAC2A:
            func_AC2A_b0(); break;
        case 0xA33A:
            func_A33A_b0(); break;
        case 0xA350:
            func_A350_b0(); break;
        case 0xA363:
            func_A363_b0(); break;
        case 0xAAA4:
            func_AAA4_b0(); break;
        case 0xA413:
            func_A413_b0(); break;
        case 0x93A5:
            func_93A5_b0(); break;
        case 0xA494:
            func_A494_b0(); break;
        case 0x9CA5:
            func_9CA5_b0(); break;
        case 0xA49D:
            func_A49D_b0(); break;
        case 0xA4EC:
            func_A4EC_b0(); break;
        case 0x8822:
            func_8822_b0(); break;
        case 0x85A6:
            func_85A6_b0(); break;
        case 0xA006:
            switch (g_current_bank) {
                case 7: func_E006(); break;
                case 0: func_A006_b0(); break;
                case 5: func_A006_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB94A:
            func_B94A_b0(); break;
        case 0xBD58:
            func_BD58_b0(); break;
        case 0xB8BE:
            func_B8BE_b0(); break;
        case 0xB011:
            func_B011_b0(); break;
        case 0xB029:
            func_B029_b0(); break;
        case 0x8AEB:
            switch (g_current_bank) {
                case 0: func_8AEB_b0(); break;
                case 1: func_8AEB_b1(); break;
                case 2: func_8AEB_b2(); break;
                case 3: func_8AEB_b3(); break;
                case 4: func_8AEB_b4(); break;
                case 5: func_8AEB_b5(); break;
                case 6: func_8AEB_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA5EB:
            func_A5EB_b0(); break;
        case 0x9F4D:
            func_9F4D_b0(); break;
        case 0x81CA:
            func_81CA_b0(); break;
        case 0x98E3:
            func_98E3_b0(); break;
        case 0x990C:
            func_990C_b0(); break;
        case 0xA91B:
            func_A91B_b0(); break;
        case 0xAE96:
            func_AE96_b0(); break;
        case 0x95A9:
            func_95A9_b0(); break;
        case 0xAC96:
            func_AC96_b0(); break;
        case 0xA296:
            func_A296_b0(); break;
        case 0x95A3:
            func_95A3_b0(); break;
        case 0xA696:
            func_A696_b0(); break;
        case 0x9504:
            func_9504_b0(); break;
        case 0xA804:
            func_A804_b0(); break;
        case 0x95CD:
            switch (g_current_bank) {
                case 0: func_95CD_b0(); break;
                case 1: func_95CD_b1(); break;
                case 2: func_95CD_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x96B4:
            func_96B4_b0(); break;
        case 0x9D03:
            switch (g_current_bank) {
                case 0: func_9D03_b0(); break;
                case 3: func_9D03_b3(); break;
                case 4: func_9D03_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB243:
            switch (g_current_bank) {
                case 0: func_B243_b0(); break;
                case 1: func_B243_b1(); break;
                case 2: func_B243_b2(); break;
                case 3: func_B243_b3(); break;
                case 4: func_B243_b4(); break;
                case 5: func_B243_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB247:
            switch (g_current_bank) {
                case 0: func_B247_b0(); break;
                case 4: func_B247_b4(); break;
                case 5: func_B247_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB545:
            func_B545_b0(); break;
        case 0xB239:
            switch (g_current_bank) {
                case 0: func_B239_b0(); break;
                case 1: func_B239_b1(); break;
                case 4: func_B239_b4(); break;
                case 5: func_B239_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB1C5:
            func_B1C5_b0(); break;
        case 0xB821:
            switch (g_current_bank) {
                case 7: func_F821(); break;
                case 0: func_B821_b0(); break;
                case 1: func_B821_b1(); break;
                case 2: func_B821_b2(); break;
                case 3: func_B821_b3(); break;
                case 4: func_B821_b4(); break;
                case 5: func_B821_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB0C4:
            func_B0C4_b0(); break;
        case 0xB34D:
            switch (g_current_bank) {
                case 0: func_B34D_b0(); break;
                case 1: func_B34D_b1(); break;
                case 2: func_B34D_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB143:
            func_B143_b0(); break;
        case 0xB451:
            func_B451_b0(); break;
        case 0xB22B:
            switch (g_current_bank) {
                case 7: func_F22B(); break;
                case 0: func_B22B_b0(); break;
                case 2: func_B22B_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB105:
            func_B105_b0(); break;
        case 0x93DA:
            func_93DA_b0(); break;
        case 0x8594:
            func_8594_b0(); break;
        case 0xB13C:
            func_B13C_b0(); break;
        case 0x90AA:
            switch (g_current_bank) {
                case 7: func_D0AA(); break;
                case 0: func_90AA_b0(); break;
                case 3: func_90AA_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8525:
            func_8525_b0(); break;
        case 0x85A0:
            func_85A0_b0(); break;
        case 0x8528:
            func_8528_b0(); break;
        case 0x9508:
            func_9508_b0(); break;
        case 0xB157:
            func_B157_b0(); break;
        case 0xB131:
            func_B131_b0(); break;
        case 0xB53F:
            switch (g_current_bank) {
                case 0: func_B53F_b0(); break;
                case 1: func_B53F_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB531:
            func_B531_b0(); break;
        case 0x953E:
            func_953E_b0(); break;
        case 0x943E:
            func_943E_b0(); break;
        case 0xA910:
            switch (g_current_bank) {
                case 0: func_A910_b0(); break;
                case 1: func_A910_b1(); break;
                case 3: func_A910_b3(); break;
                case 6: func_A910_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x90F2:
            func_90F2_b0(); break;
        case 0xAA4B:
            switch (g_current_bank) {
                case 0: func_AA4B_b0(); break;
                case 4: func_AA4B_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBDF3:
            switch (g_current_bank) {
                case 0: func_BDF3_b0(); break;
                case 1: func_BDF3_b1(); break;
                case 2: func_BDF3_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8059:
            func_8059_b0(); break;
        case 0xA00F:
            switch (g_current_bank) {
                case 0: func_A00F_b0(); break;
                case 3: func_A00F_b3(); break;
                case 5: func_A00F_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB941:
            switch (g_current_bank) {
                case 0: func_B941_b0(); break;
                case 1: func_B941_b1(); break;
                case 2: func_B941_b2(); break;
                case 3: func_B941_b3(); break;
                case 4: func_B941_b4(); break;
                case 5: func_B941_b5(); break;
                case 6: func_B941_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8F21:
            func_8F21_b0(); break;
        case 0x9900:
            switch (g_current_bank) {
                case 0: func_9900_b0(); break;
                case 2: func_9900_b2(); break;
                case 4: func_9900_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB32C:
            switch (g_current_bank) {
                case 0: func_B32C_b0(); break;
                case 1: func_B32C_b1(); break;
                case 2: func_B32C_b2(); break;
                case 3: func_B32C_b3(); break;
                case 4: func_B32C_b4(); break;
                case 5: func_B32C_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB3B6:
            switch (g_current_bank) {
                case 0: func_B3B6_b0(); break;
                case 1: func_B3B6_b1(); break;
                case 2: func_B3B6_b2(); break;
                case 3: func_B3B6_b3(); break;
                case 4: func_B3B6_b4(); break;
                case 5: func_B3B6_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA207:
            switch (g_current_bank) {
                case 0: func_A207_b0(); break;
                case 1: func_A207_b1(); break;
                case 2: func_A207_b2(); break;
                case 3: func_A207_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD08:
            switch (g_current_bank) {
                case 0: func_AD08_b0(); break;
                case 3: func_AD08_b3(); break;
                case 4: func_AD08_b4(); break;
                case 5: func_AD08_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8DB5:
            switch (g_current_bank) {
                case 0: func_8DB5_b0(); break;
                case 3: func_8DB5_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x828E:
            switch (g_current_bank) {
                case 0: func_828E_b0(); break;
                case 1: func_828E_b1(); break;
                case 2: func_828E_b2(); break;
                case 3: func_828E_b3(); break;
                case 4: func_828E_b4(); break;
                case 5: func_828E_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAEEB:
            func_AEEB_b0(); break;
        case 0x84B3:
            func_84B3_b0(); break;
        case 0x8DE5:
            switch (g_current_bank) {
                case 0: func_8DE5_b0(); break;
                case 2: func_8DE5_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8DE3:
            switch (g_current_bank) {
                case 0: func_8DE3_b0(); break;
                case 5: func_8DE3_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA0B4:
            func_A0B4_b0(); break;
        case 0xA0B6:
            switch (g_current_bank) {
                case 0: func_A0B6_b0(); break;
                case 3: func_A0B6_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA5B4:
            switch (g_current_bank) {
                case 0: func_A5B4_b0(); break;
                case 2: func_A5B4_b2(); break;
                case 4: func_A5B4_b4(); break;
                case 5: func_A5B4_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8DBE:
            switch (g_current_bank) {
                case 7: func_CDBE(); break;
                case 0: func_8DBE_b0(); break;
                case 3: func_8DBE_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAC18:
            switch (g_current_bank) {
                case 0: func_AC18_b0(); break;
                case 1: func_AC18_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA9D1:
            switch (g_current_bank) {
                case 0: func_A9D1_b0(); break;
                case 4: func_A9D1_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA00C:
            switch (g_current_bank) {
                case 0: func_A00C_b0(); break;
                case 6: func_A00C_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xADB8:
            switch (g_current_bank) {
                case 0: func_ADB8_b0(); break;
                case 1: func_ADB8_b1(); break;
                case 2: func_ADB8_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB7A9:
            switch (g_current_bank) {
                case 0: func_B7A9_b0(); break;
                case 1: func_B7A9_b1(); break;
                case 2: func_B7A9_b2(); break;
                case 3: func_B7A9_b3(); break;
                case 4: func_B7A9_b4(); break;
                case 5: func_B7A9_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB7DA:
            switch (g_current_bank) {
                case 0: func_B7DA_b0(); break;
                case 1: func_B7DA_b1(); break;
                case 2: func_B7DA_b2(); break;
                case 3: func_B7DA_b3(); break;
                case 4: func_B7DA_b4(); break;
                case 5: func_B7DA_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB8AE:
            switch (g_current_bank) {
                case 0: func_B8AE_b0(); break;
                case 1: func_B8AE_b1(); break;
                case 2: func_B8AE_b2(); break;
                case 3: func_B8AE_b3(); break;
                case 4: func_B8AE_b4(); break;
                case 5: func_B8AE_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA9B9:
            switch (g_current_bank) {
                case 0: func_A9B9_b0(); break;
                case 4: func_A9B9_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB2B0:
            switch (g_current_bank) {
                case 0: func_B2B0_b0(); break;
                case 1: func_B2B0_b1(); break;
                case 2: func_B2B0_b2(); break;
                case 3: func_B2B0_b3(); break;
                case 4: func_B2B0_b4(); break;
                case 5: func_B2B0_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB0AE:
            func_B0AE_b0(); break;
        case 0xA5BA:
            switch (g_current_bank) {
                case 0: func_A5BA_b0(); break;
                case 1: func_A5BA_b1(); break;
                case 2: func_A5BA_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9DA1:
            func_9DA1_b0(); break;
        case 0xA1A1:
            switch (g_current_bank) {
                case 0: func_A1A1_b0(); break;
                case 2: func_A1A1_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D6D:
            func_8D6D_b0(); break;
        case 0xA5A1:
            switch (g_current_bank) {
                case 0: func_A5A1_b0(); break;
                case 1: func_A5A1_b1(); break;
                case 5: func_A5A1_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB3AE:
            switch (g_current_bank) {
                case 0: func_B3AE_b0(); break;
                case 1: func_B3AE_b1(); break;
                case 2: func_B3AE_b2(); break;
                case 3: func_B3AE_b3(); break;
                case 4: func_B3AE_b4(); break;
                case 5: func_B3AE_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB1A1:
            switch (g_current_bank) {
                case 0: func_B1A1_b0(); break;
                case 1: func_B1A1_b1(); break;
                case 2: func_B1A1_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD19:
            func_AD19_b0(); break;
        case 0xBDBB:
            switch (g_current_bank) {
                case 0: func_BDBB_b0(); break;
                case 4: func_BDBB_b4(); break;
                case 5: func_BDBB_b5(); break;
                case 3: func_BDBB_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA048:
            switch (g_current_bank) {
                case 0: func_A048_b0(); break;
                case 6: func_A048_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAA01:
            switch (g_current_bank) {
                case 0: func_AA01_b0(); break;
                case 1: func_AA01_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBDE8:
            switch (g_current_bank) {
                case 0: func_BDE8_b0(); break;
                case 1: func_BDE8_b1(); break;
                case 2: func_BDE8_b2(); break;
                case 3: func_BDE8_b3(); break;
                case 4: func_BDE8_b4(); break;
                case 5: func_BDE8_b5(); break;
                case 6: func_BDE8_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8ADD:
            func_8ADD_b0(); break;
        case 0x9D40:
            func_9D40_b0(); break;
        case 0xB0CA:
            func_B0CA_b0(); break;
        case 0xA807:
            switch (g_current_bank) {
                case 7: func_E807(); break;
                case 0: func_A807_b0(); break;
                case 1: func_A807_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBF28:
            switch (g_current_bank) {
                case 0: func_BF28_b0(); break;
                case 1: func_BF28_b1(); break;
                case 2: func_BF28_b2(); break;
                case 3: func_BF28_b3(); break;
                case 4: func_BF28_b4(); break;
                case 5: func_BF28_b5(); break;
                case 6: func_BF28_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9DC0:
            switch (g_current_bank) {
                case 0: func_9DC0_b0(); break;
                case 3: func_9DC0_b3(); break;
                case 4: func_9DC0_b4(); break;
                case 5: func_9DC0_b5(); break;
                case 6: func_9DC0_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8AA9:
            func_8AA9_b0(); break;
        case 0x9D0C:
            func_9D0C_b0(); break;
        case 0xBEA8:
            switch (g_current_bank) {
                case 0: func_BEA8_b0(); break;
                case 1: func_BEA8_b1(); break;
                case 2: func_BEA8_b2(); break;
                case 3: func_BEA8_b3(); break;
                case 4: func_BEA8_b4(); break;
                case 5: func_BEA8_b5(); break;
                case 6: func_BEA8_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x99EB:
            switch (g_current_bank) {
                case 0: func_99EB_b0(); break;
                case 4: func_99EB_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xADBC:
            switch (g_current_bank) {
                case 0: func_ADBC_b0(); break;
                case 1: func_ADBC_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8201:
            switch (g_current_bank) {
                case 0: func_8201_b0(); break;
                case 1: func_8201_b1(); break;
                case 2: func_8201_b2(); break;
                case 3: func_8201_b3(); break;
                case 4: func_8201_b4(); break;
                case 5: func_8201_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85AE:
            func_85AE_b0(); break;
        case 0x900B:
            switch (g_current_bank) {
                case 7: func_D00B(); break;
                case 0: func_900B_b0(); break;
                case 1: func_900B_b1(); break;
                case 2: func_900B_b2(); break;
                case 4: func_900B_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x92A3:
            switch (g_current_bank) {
                case 0: func_92A3_b0(); break;
                case 1: func_92A3_b1(); break;
                case 5: func_92A3_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xADA3:
            func_ADA3_b0(); break;
        case 0xB900:
            switch (g_current_bank) {
                case 0: func_B900_b0(); break;
                case 1: func_B900_b1(); break;
                case 2: func_B900_b2(); break;
                case 3: func_B900_b3(); break;
                case 4: func_B900_b4(); break;
                case 5: func_B900_b5(); break;
                case 6: func_B900_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAB02:
            switch (g_current_bank) {
                case 0: func_AB02_b0(); break;
                case 2: func_AB02_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9302:
            func_9302_b0(); break;
        case 0x9961:
            switch (g_current_bank) {
                case 0: func_9961_b0(); break;
                case 1: func_9961_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8B4D:
            switch (g_current_bank) {
                case 1: func_8B4D_b1(); break;
                case 2: func_8B4D_b2(); break;
                case 3: func_8B4D_b3(); break;
                case 4: func_8B4D_b4(); break;
                case 5: func_8B4D_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA685:
            switch (g_current_bank) {
                case 1: func_A685_b1(); break;
                case 2: func_A685_b2(); break;
                case 5: func_A685_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x977C:
            switch (g_current_bank) {
                case 1: func_977C_b1(); break;
                case 4: func_977C_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB04C:
            func_B04C_b1(); break;
        case 0xBD3F:
            switch (g_current_bank) {
                case 1: func_BD3F_b1(); break;
                case 2: func_BD3F_b2(); break;
                case 3: func_BD3F_b3(); break;
                case 4: func_BD3F_b4(); break;
                case 5: func_BD3F_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA961:
            func_A961_b1(); break;
        case 0xA905:
            switch (g_current_bank) {
                case 1: func_A905_b1(); break;
                case 4: func_A905_b4(); break;
                case 5: func_A905_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x90F1:
            switch (g_current_bank) {
                case 7: func_D0F1(); break;
                case 1: func_90F1_b1(); break;
                case 3: func_90F1_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBE21:
            switch (g_current_bank) {
                case 7: func_FE21(); break;
                case 1: func_BE21_b1(); break;
                case 2: func_BE21_b2(); break;
                case 3: func_BE21_b3(); break;
                case 4: func_BE21_b4(); break;
                case 5: func_BE21_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9029:
            switch (g_current_bank) {
                case 7: func_D029(); break;
                case 1: func_9029_b1(); break;
                case 4: func_9029_b4(); break;
                case 6: func_9029_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA6E8:
            switch (g_current_bank) {
                case 7: func_E6E8(); break;
                case 1: func_A6E8_b1(); break;
                case 5: func_A6E8_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBC06:
            switch (g_current_bank) {
                case 1: func_BC06_b1(); break;
                case 2: func_BC06_b2(); break;
                case 3: func_BC06_b3(); break;
                case 4: func_BC06_b4(); break;
                case 5: func_BC06_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8805:
            switch (g_current_bank) {
                case 7: func_C805(); break;
                case 1: func_8805_b1(); break;
                case 2: func_8805_b2(); break;
                case 3: func_8805_b3(); break;
                case 4: func_8805_b4(); break;
                case 5: func_8805_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9889:
            func_9889_b1(); break;
        case 0x8539:
            switch (g_current_bank) {
                case 1: func_8539_b1(); break;
                case 2: func_8539_b2(); break;
                case 3: func_8539_b3(); break;
                case 4: func_8539_b4(); break;
                case 5: func_8539_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9805:
            switch (g_current_bank) {
                case 1: func_9805_b1(); break;
                case 5: func_9805_b5(); break;
                case 6: func_9805_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA96B:
            switch (g_current_bank) {
                case 7: func_E96B(); break;
                case 1: func_A96B_b1(); break;
                case 3: func_A96B_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA5E5:
            switch (g_current_bank) {
                case 1: func_A5E5_b1(); break;
                case 5: func_A5E5_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA601:
            switch (g_current_bank) {
                case 7: func_E601(); break;
                case 1: func_A601_b1(); break;
                case 2: func_A601_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA50F:
            switch (g_current_bank) {
                case 1: func_A50F_b1(); break;
                case 5: func_A50F_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9989:
            switch (g_current_bank) {
                case 1: func_9989_b1(); break;
                case 3: func_9989_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8910:
            switch (g_current_bank) {
                case 7: func_C910(); break;
                case 1: func_8910_b1(); break;
                case 2: func_8910_b2(); break;
                case 3: func_8910_b3(); break;
                case 4: func_8910_b4(); break;
                case 5: func_8910_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8955:
            switch (g_current_bank) {
                case 1: func_8955_b1(); break;
                case 2: func_8955_b2(); break;
                case 3: func_8955_b3(); break;
                case 4: func_8955_b4(); break;
                case 5: func_8955_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x868B:
            switch (g_current_bank) {
                case 1: func_868B_b1(); break;
                case 2: func_868B_b2(); break;
                case 3: func_868B_b3(); break;
                case 4: func_868B_b4(); break;
                case 5: func_868B_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA18B:
            func_A18B_b1(); break;
        case 0x8AA2:
            switch (g_current_bank) {
                case 7: func_CAA2(); break;
                case 1: func_8AA2_b1(); break;
                case 2: func_8AA2_b2(); break;
                case 3: func_8AA2_b3(); break;
                case 4: func_8AA2_b4(); break;
                case 5: func_8AA2_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAE8B:
            switch (g_current_bank) {
                case 1: func_AE8B_b1(); break;
                case 2: func_AE8B_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8AAF:
            switch (g_current_bank) {
                case 1: func_8AAF_b1(); break;
                case 2: func_8AAF_b2(); break;
                case 3: func_8AAF_b3(); break;
                case 4: func_8AAF_b4(); break;
                case 5: func_8AAF_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8ABB:
            switch (g_current_bank) {
                case 1: func_8ABB_b1(); break;
                case 2: func_8ABB_b2(); break;
                case 3: func_8ABB_b3(); break;
                case 4: func_8ABB_b4(); break;
                case 5: func_8ABB_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8720:
            switch (g_current_bank) {
                case 1: func_8720_b1(); break;
                case 2: func_8720_b2(); break;
                case 3: func_8720_b3(); break;
                case 4: func_8720_b4(); break;
                case 5: func_8720_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8738:
            switch (g_current_bank) {
                case 1: func_8738_b1(); break;
                case 2: func_8738_b2(); break;
                case 3: func_8738_b3(); break;
                case 4: func_8738_b4(); break;
                case 5: func_8738_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8792:
            switch (g_current_bank) {
                case 1: func_8792_b1(); break;
                case 2: func_8792_b2(); break;
                case 3: func_8792_b3(); break;
                case 4: func_8792_b4(); break;
                case 5: func_8792_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x879A:
            switch (g_current_bank) {
                case 1: func_879A_b1(); break;
                case 2: func_879A_b2(); break;
                case 3: func_879A_b3(); break;
                case 4: func_879A_b4(); break;
                case 5: func_879A_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA588:
            switch (g_current_bank) {
                case 1: func_A588_b1(); break;
                case 6: func_A588_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x87A6:
            switch (g_current_bank) {
                case 1: func_87A6_b1(); break;
                case 2: func_87A6_b2(); break;
                case 3: func_87A6_b3(); break;
                case 4: func_87A6_b4(); break;
                case 5: func_87A6_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8383:
            switch (g_current_bank) {
                case 1: func_8383_b1(); break;
                case 2: func_8383_b2(); break;
                case 3: func_8383_b3(); break;
                case 4: func_8383_b4(); break;
                case 5: func_8383_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8300:
            switch (g_current_bank) {
                case 1: func_8300_b1(); break;
                case 2: func_8300_b2(); break;
                case 3: func_8300_b3(); break;
                case 4: func_8300_b4(); break;
                case 5: func_8300_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA0FE:
            switch (g_current_bank) {
                case 1: func_A0FE_b1(); break;
                case 3: func_A0FE_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9688:
            switch (g_current_bank) {
                case 1: func_9688_b1(); break;
                case 2: func_9688_b2(); break;
                case 4: func_9688_b4(); break;
                case 5: func_9688_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8C8C:
            switch (g_current_bank) {
                case 7: func_CC8C(); break;
                case 1: func_8C8C_b1(); break;
                case 2: func_8C8C_b2(); break;
                case 3: func_8C8C_b3(); break;
                case 4: func_8C8C_b4(); break;
                case 5: func_8C8C_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9284:
            switch (g_current_bank) {
                case 7: func_D284(); break;
                case 1: func_9284_b1(); break;
                case 3: func_9284_b3(); break;
                case 4: func_9284_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9393:
            func_9393_b1(); break;
        case 0x9869:
            switch (g_current_bank) {
                case 1: func_9869_b1(); break;
                case 5: func_9869_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9595:
            switch (g_current_bank) {
                case 1: func_9595_b1(); break;
                case 2: func_9595_b2(); break;
                case 5: func_9595_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB9B7:
            switch (g_current_bank) {
                case 1: func_B9B7_b1(); break;
                case 2: func_B9B7_b2(); break;
                case 3: func_B9B7_b3(); break;
                case 4: func_B9B7_b4(); break;
                case 5: func_B9B7_b5(); break;
                case 6: func_B9B7_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x80FF:
            switch (g_current_bank) {
                case 1: func_80FF_b1(); break;
                case 2: func_80FF_b2(); break;
                case 3: func_80FF_b3(); break;
                case 4: func_80FF_b4(); break;
                case 5: func_80FF_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA597:
            switch (g_current_bank) {
                case 1: func_A597_b1(); break;
                case 3: func_A597_b3(); break;
                case 4: func_A597_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8541:
            switch (g_current_bank) {
                case 1: func_8541_b1(); break;
                case 2: func_8541_b2(); break;
                case 3: func_8541_b3(); break;
                case 4: func_8541_b4(); break;
                case 5: func_8541_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x994B:
            switch (g_current_bank) {
                case 1: func_994B_b1(); break;
                case 2: func_994B_b2(); break;
                case 3: func_994B_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA211:
            switch (g_current_bank) {
                case 1: func_A211_b1(); break;
                case 2: func_A211_b2(); break;
                case 5: func_A211_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D06:
            switch (g_current_bank) {
                case 1: func_8D06_b1(); break;
                case 2: func_8D06_b2(); break;
                case 3: func_8D06_b3(); break;
                case 4: func_8D06_b4(); break;
                case 5: func_8D06_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8AE3:
            switch (g_current_bank) {
                case 7: func_CAE3(); break;
                case 1: func_8AE3_b1(); break;
                case 2: func_8AE3_b2(); break;
                case 3: func_8AE3_b3(); break;
                case 4: func_8AE3_b4(); break;
                case 5: func_8AE3_b5(); break;
                case 6: func_8AE3_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA58C:
            switch (g_current_bank) {
                case 1: func_A58C_b1(); break;
                case 3: func_A58C_b3(); break;
                case 6: func_A58C_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9DC5:
            func_9DC5_b1(); break;
        case 0xBD4F:
            switch (g_current_bank) {
                case 1: func_BD4F_b1(); break;
                case 2: func_BD4F_b2(); break;
                case 3: func_BD4F_b3(); break;
                case 4: func_BD4F_b4(); break;
                case 5: func_BD4F_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA51D:
            switch (g_current_bank) {
                case 1: func_A51D_b1(); break;
                case 2: func_A51D_b2(); break;
                case 4: func_A51D_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA98D:
            func_A98D_b1(); break;
        case 0xA5CC:
            switch (g_current_bank) {
                case 1: func_A5CC_b1(); break;
                case 2: func_A5CC_b2(); break;
                case 4: func_A5CC_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8A12:
            switch (g_current_bank) {
                case 7: func_CA12(); break;
                case 1: func_8A12_b1(); break;
                case 2: func_8A12_b2(); break;
                case 3: func_8A12_b3(); break;
                case 4: func_8A12_b4(); break;
                case 5: func_8A12_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA509:
            switch (g_current_bank) {
                case 1: func_A509_b1(); break;
                case 5: func_A509_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8A0F:
            switch (g_current_bank) {
                case 1: func_8A0F_b1(); break;
                case 2: func_8A0F_b2(); break;
                case 3: func_8A0F_b3(); break;
                case 4: func_8A0F_b4(); break;
                case 5: func_8A0F_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8A03:
            switch (g_current_bank) {
                case 7: func_CA03(); break;
                case 1: func_8A03_b1(); break;
                case 2: func_8A03_b2(); break;
                case 3: func_8A03_b3(); break;
                case 4: func_8A03_b4(); break;
                case 5: func_8A03_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA6F4:
            switch (g_current_bank) {
                case 7: func_E6F4(); break;
                case 1: func_A6F4_b1(); break;
                case 5: func_A6F4_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA5A9:
            switch (g_current_bank) {
                case 1: func_A5A9_b1(); break;
                case 2: func_A5A9_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9906:
            switch (g_current_bank) {
                case 7: func_D906(); break;
                case 1: func_9906_b1(); break;
                case 3: func_9906_b3(); break;
                case 5: func_9906_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA969:
            switch (g_current_bank) {
                case 1: func_A969_b1(); break;
                case 2: func_A969_b2(); break;
                case 5: func_A969_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB8B9:
            switch (g_current_bank) {
                case 1: func_B8B9_b1(); break;
                case 2: func_B8B9_b2(); break;
                case 3: func_B8B9_b3(); break;
                case 4: func_B8B9_b4(); break;
                case 5: func_B8B9_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D80:
            func_9D80_b1(); break;
        case 0xBC00:
            switch (g_current_bank) {
                case 1: func_BC00_b1(); break;
                case 2: func_BC00_b2(); break;
                case 4: func_BC00_b4(); break;
                case 5: func_BC00_b5(); break;
                case 6: func_BC00_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB800:
            switch (g_current_bank) {
                case 1: func_B800_b1(); break;
                case 2: func_B800_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9EDD:
            func_9EDD_b1(); break;
        case 0xBD80:
            switch (g_current_bank) {
                case 1: func_BD80_b1(); break;
                case 6: func_BD80_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB330:
            func_B330_b1(); break;
        case 0xB0E1:
            switch (g_current_bank) {
                case 7: func_F0E1(); break;
                case 1: func_B0E1_b1(); break;
                case 2: func_B0E1_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9009:
            switch (g_current_bank) {
                case 1: func_9009_b1(); break;
                case 2: func_9009_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x98C5:
            func_98C5_b1(); break;
        case 0x811F:
            switch (g_current_bank) {
                case 1: func_811F_b1(); break;
                case 3: func_811F_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9E37:
            func_9E37_b1(); break;
        case 0xB926:
            switch (g_current_bank) {
                case 1: func_B926_b1(); break;
                case 3: func_B926_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB041:
            switch (g_current_bank) {
                case 1: func_B041_b1(); break;
                case 2: func_B041_b2(); break;
                case 4: func_B041_b4(); break;
                case 5: func_B041_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8144:
            switch (g_current_bank) {
                case 1: func_8144_b1(); break;
                case 3: func_8144_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x80B3:
            func_80B3_b1(); break;
        case 0x9C79:
            func_9C79_b1(); break;
        case 0x9C3D:
            func_9C3D_b1(); break;
        case 0x9E3D:
            func_9E3D_b1(); break;
        case 0x8308:
            func_8308_b1(); break;
        case 0x8701:
            switch (g_current_bank) {
                case 1: func_8701_b1(); break;
                case 2: func_8701_b2(); break;
                case 3: func_8701_b3(); break;
                case 5: func_8701_b5(); break;
                case 6: func_8701_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA272:
            func_A272_b1(); break;
        case 0xA1A3:
            func_A1A3_b1(); break;
        case 0xA2AE:
            func_A2AE_b1(); break;
        case 0xA2D1:
            func_A2D1_b1(); break;
        case 0xA2D8:
            func_A2D8_b1(); break;
        case 0xA2DF:
            func_A2DF_b1(); break;
        case 0xA2E6:
            func_A2E6_b1(); break;
        case 0xA2ED:
            func_A2ED_b1(); break;
        case 0xA2F5:
            func_A2F5_b1(); break;
        case 0xA2FD:
            func_A2FD_b1(); break;
        case 0xA305:
            func_A305_b1(); break;
        case 0xA30D:
            func_A30D_b1(); break;
        case 0xA3D7:
            func_A3D7_b1(); break;
        case 0x9EE1:
            func_9EE1_b1(); break;
        case 0x98A6:
            switch (g_current_bank) {
                case 1: func_98A6_b1(); break;
                case 3: func_98A6_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x98BA:
            func_98BA_b1(); break;
        case 0x98C1:
            func_98C1_b1(); break;
        case 0x9966:
            func_9966_b1(); break;
        case 0x9D41:
            switch (g_current_bank) {
                case 1: func_9D41_b1(); break;
                case 0: func_9D41_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D46:
            func_9D46_b1(); break;
        case 0x9D50:
            func_9D50_b1(); break;
        case 0x9D5F:
            func_9D5F_b1(); break;
        case 0xB206:
            func_B206_b1(); break;
        case 0x9208:
            func_9208_b1(); break;
        case 0xBA04:
            switch (g_current_bank) {
                case 1: func_BA04_b1(); break;
                case 2: func_BA04_b2(); break;
                case 4: func_BA04_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9A09:
            func_9A09_b1(); break;
        case 0x9304:
            switch (g_current_bank) {
                case 1: func_9304_b1(); break;
                case 4: func_9304_b4(); break;
                case 5: func_9304_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8509:
            switch (g_current_bank) {
                case 7: func_C509(); break;
                case 1: func_8509_b1(); break;
                case 2: func_8509_b2(); break;
                case 3: func_8509_b3(); break;
                case 4: func_8509_b4(); break;
                case 5: func_8509_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA99A:
            switch (g_current_bank) {
                case 1: func_A99A_b1(); break;
                case 2: func_A99A_b2(); break;
                case 3: func_A99A_b3(); break;
                case 5: func_A99A_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBA4D:
            func_BA4D_b1(); break;
        case 0x8522:
            switch (g_current_bank) {
                case 1: func_8522_b1(); break;
                case 4: func_8522_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB012:
            func_B012_b1(); break;
        case 0xA29A:
            func_A29A_b1(); break;
        case 0xA9E4:
            func_A9E4_b1(); break;
        case 0x9D04:
            switch (g_current_bank) {
                case 1: func_9D04_b1(); break;
                case 4: func_9D04_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA63F:
            switch (g_current_bank) {
                case 7: func_E63F(); break;
                case 1: func_A63F_b1(); break;
                case 2: func_A63F_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA918:
            func_A918_b1(); break;
        case 0xA99D:
            switch (g_current_bank) {
                case 1: func_A99D_b1(); break;
                case 3: func_A99D_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA681:
            func_A681_b1(); break;
        case 0x9CC7:
            func_9CC7_b1(); break;
        case 0x9D9D:
            func_9D9D_b1(); break;
        case 0x986C:
            func_986C_b1(); break;
        case 0x9D09:
            switch (g_current_bank) {
                case 1: func_9D09_b1(); break;
                case 4: func_9D09_b4(); break;
                case 5: func_9D09_b5(); break;
                case 6: func_9D09_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x987F:
            func_987F_b1(); break;
        case 0xA202:
            switch (g_current_bank) {
                case 1: func_A202_b1(); break;
                case 2: func_A202_b2(); break;
                case 4: func_A202_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA20B:
            func_A20B_b1(); break;
        case 0x8423:
            switch (g_current_bank) {
                case 1: func_8423_b1(); break;
                case 2: func_8423_b2(); break;
                case 4: func_8423_b4(); break;
                case 5: func_8423_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8C23:
            switch (g_current_bank) {
                case 1: func_8C23_b1(); break;
                case 2: func_8C23_b2(); break;
                case 4: func_8C23_b4(); break;
                case 5: func_8C23_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9200:
            func_9200_b1(); break;
        case 0x9400:
            switch (g_current_bank) {
                case 1: func_9400_b1(); break;
                case 4: func_9400_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9FD2:
            func_9FD2_b1(); break;
        case 0x9FDB:
            func_9FDB_b1(); break;
        case 0xA034:
            switch (g_current_bank) {
                case 1: func_A034_b1(); break;
                case 5: func_A034_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA03D:
            func_A03D_b1(); break;
        case 0xA047:
            func_A047_b1(); break;
        case 0xA051:
            switch (g_current_bank) {
                case 1: func_A051_b1(); break;
                case 2: func_A051_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA05A:
            func_A05A_b1(); break;
        case 0xA064:
            switch (g_current_bank) {
                case 1: func_A064_b1(); break;
                case 5: func_A064_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA0E7:
            func_A0E7_b1(); break;
        case 0xA0EF:
            func_A0EF_b1(); break;
        case 0xA0F7:
            func_A0F7_b1(); break;
        case 0xA10F:
            func_A10F_b1(); break;
        case 0xA117:
            func_A117_b1(); break;
        case 0xA11F:
            func_A11F_b1(); break;
        case 0xA157:
            func_A157_b1(); break;
        case 0xA163:
            func_A163_b1(); break;
        case 0x87A2:
            func_87A2_b1(); break;
        case 0xAFA2:
            func_AFA2_b1(); break;
        case 0xBFA2:
            func_BFA2_b1(); break;
        case 0xA21E:
            func_A21E_b1(); break;
        case 0xA22E:
            func_A22E_b1(); break;
        case 0xA23E:
            func_A23E_b1(); break;
        case 0xA24E:
            func_A24E_b1(); break;
        case 0x84A0:
            func_84A0_b1(); break;
        case 0x9FBF:
            func_9FBF_b1(); break;
        case 0x80FD:
            switch (g_current_bank) {
                case 1: func_80FD_b1(); break;
                case 2: func_80FD_b2(); break;
                case 3: func_80FD_b3(); break;
                case 4: func_80FD_b4(); break;
                case 5: func_80FD_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA4B4:
            func_A4B4_b1(); break;
        case 0xB3A6:
            func_B3A6_b1(); break;
        case 0xA3E3:
            func_A3E3_b1(); break;
        case 0xA5E3:
            func_A5E3_b1(); break;
        case 0xA700:
            func_A700_b1(); break;
        case 0xB3F9:
            func_B3F9_b1(); break;
        case 0x9601:
            func_9601_b1(); break;
        case 0x9897:
            func_9897_b1(); break;
        case 0x9899:
            switch (g_current_bank) {
                case 1: func_9899_b1(); break;
                case 3: func_9899_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA442:
            func_A442_b1(); break;
        case 0xA45D:
            func_A45D_b1(); break;
        case 0xA481:
            func_A481_b1(); break;
        case 0xA4BC:
            func_A4BC_b1(); break;
        case 0xA4EE:
            func_A4EE_b1(); break;
        case 0xA525:
            func_A525_b1(); break;
        case 0xA55B:
            func_A55B_b1(); break;
        case 0xA636:
            func_A636_b1(); break;
        case 0xA662:
            func_A662_b1(); break;
        case 0xA68E:
            func_A68E_b1(); break;
        case 0xA6B2:
            func_A6B2_b1(); break;
        case 0xA6DC:
            func_A6DC_b1(); break;
        case 0xA716:
            func_A716_b1(); break;
        case 0xA73D:
            func_A73D_b1(); break;
        case 0xA769:
            func_A769_b1(); break;
        case 0xA7A4:
            func_A7A4_b1(); break;
        case 0xA7F2:
            func_A7F2_b1(); break;
        case 0xA88C:
            func_A88C_b1(); break;
        case 0x97AA:
            func_97AA_b1(); break;
        case 0xAA21:
            func_AA21_b1(); break;
        case 0xA4AB:
            func_A4AB_b1(); break;
        case 0xAAA5:
            func_AAA5_b1(); break;
        case 0xAB1A:
            func_AB1A_b1(); break;
        case 0xAB72:
            func_AB72_b1(); break;
        case 0xABC0:
            func_ABC0_b1(); break;
        case 0xAC4E:
            func_AC4E_b1(); break;
        case 0xAC6B:
            func_AC6B_b1(); break;
        case 0xACD8:
            func_ACD8_b1(); break;
        case 0xACF4:
            func_ACF4_b1(); break;
        case 0xAD00:
            func_AD00_b1(); break;
        case 0xAD06:
            func_AD06_b1(); break;
        case 0xAD0B:
            switch (g_current_bank) {
                case 1: func_AD0B_b1(); break;
                case 6: func_AD0B_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD1B:
            func_AD1B_b1(); break;
        case 0xADAE:
            func_ADAE_b1(); break;
        case 0xADE7:
            func_ADE7_b1(); break;
        case 0xADED:
            switch (g_current_bank) {
                case 1: func_ADED_b1(); break;
                case 2: func_ADED_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAE19:
            func_AE19_b1(); break;
        case 0xAE2E:
            func_AE2E_b1(); break;
        case 0xAE4C:
            func_AE4C_b1(); break;
        case 0xAE60:
            switch (g_current_bank) {
                case 1: func_AE60_b1(); break;
                case 0: func_AE60_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAE71:
            func_AE71_b1(); break;
        case 0xAE8F:
            func_AE8F_b1(); break;
        case 0xA5AF:
            func_A5AF_b1(); break;
        case 0xB0AF:
            func_B0AF_b1(); break;
        case 0xAEB4:
            func_AEB4_b1(); break;
        case 0xBEAF:
            func_BEAF_b1(); break;
        case 0xA41D:
            func_A41D_b1(); break;
        case 0xB103:
            switch (g_current_bank) {
                case 1: func_B103_b1(); break;
                case 2: func_B103_b2(); break;
                case 4: func_B103_b4(); break;
                case 5: func_B103_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAE04:
            func_AE04_b1(); break;
        case 0x9784:
            func_9784_b1(); break;
        case 0xB604:
            switch (g_current_bank) {
                case 1: func_B604_b1(); break;
                case 2: func_B604_b2(); break;
                case 3: func_B604_b3(); break;
                case 4: func_B604_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBB04:
            switch (g_current_bank) {
                case 1: func_BB04_b1(); break;
                case 3: func_BB04_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8203:
            switch (g_current_bank) {
                case 1: func_8203_b1(); break;
                case 3: func_8203_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAC03:
            func_AC03_b1(); break;
        case 0x8486:
            switch (g_current_bank) {
                case 1: func_8486_b1(); break;
                case 2: func_8486_b2(); break;
                case 4: func_8486_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA204:
            switch (g_current_bank) {
                case 7: func_E204(); break;
                case 1: func_A204_b1(); break;
                case 2: func_A204_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBC04:
            switch (g_current_bank) {
                case 7: func_FC04(); break;
                case 1: func_BC04_b1(); break;
                case 2: func_BC04_b2(); break;
                case 5: func_BC04_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB708:
            func_B708_b1(); break;
        case 0xB988:
            switch (g_current_bank) {
                case 7: func_F988(); break;
                case 1: func_B988_b1(); break;
                case 2: func_B988_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA604:
            func_A604_b1(); break;
        case 0xA801:
            func_A801_b1(); break;
        case 0x8222:
            switch (g_current_bank) {
                case 1: func_8222_b1(); break;
                case 2: func_8222_b2(); break;
                case 5: func_8222_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8503:
            switch (g_current_bank) {
                case 1: func_8503_b1(); break;
                case 2: func_8503_b2(); break;
                case 3: func_8503_b3(); break;
                case 5: func_8503_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA302:
            func_A302_b1(); break;
        case 0x8F01:
            switch (g_current_bank) {
                case 1: func_8F01_b1(); break;
                case 2: func_8F01_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9C03:
            func_9C03_b1(); break;
        case 0x848C:
            func_848C_b1(); break;
        case 0xBE0C:
            func_BE0C_b1(); break;
        case 0xBCBF:
            switch (g_current_bank) {
                case 1: func_BCBF_b1(); break;
                case 2: func_BCBF_b2(); break;
                case 3: func_BCBF_b3(); break;
                case 4: func_BCBF_b4(); break;
                case 5: func_BCBF_b5(); break;
                case 6: func_BCBF_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB939:
            func_B939_b1(); break;
        case 0xB92B:
            switch (g_current_bank) {
                case 7: func_F92B(); break;
                case 1: func_B92B_b1(); break;
                case 3: func_B92B_b3(); break;
                case 4: func_B92B_b4(); break;
                case 5: func_B92B_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBB19:
            switch (g_current_bank) {
                case 1: func_BB19_b1(); break;
                case 2: func_BB19_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB4C5:
            switch (g_current_bank) {
                case 1: func_B4C5_b1(); break;
                case 2: func_B4C5_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB2C4:
            switch (g_current_bank) {
                case 1: func_B2C4_b1(); break;
                case 2: func_B2C4_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB227:
            switch (g_current_bank) {
                case 1: func_B227_b1(); break;
                case 2: func_B227_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x86E9:
            switch (g_current_bank) {
                case 7: func_C6E9(); break;
                case 1: func_86E9_b1(); break;
                case 2: func_86E9_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85F5:
            switch (g_current_bank) {
                case 1: func_85F5_b1(); break;
                case 2: func_85F5_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA880:
            switch (g_current_bank) {
                case 7: func_E880(); break;
                case 1: func_A880_b1(); break;
                case 2: func_A880_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8CBD:
            switch (g_current_bank) {
                case 1: func_8CBD_b1(); break;
                case 2: func_8CBD_b2(); break;
                case 3: func_8CBD_b3(); break;
                case 4: func_8CBD_b4(); break;
                case 5: func_8CBD_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD0F:
            func_AD0F_b1(); break;
        case 0x8BAE:
            switch (g_current_bank) {
                case 1: func_8BAE_b1(); break;
                case 2: func_8BAE_b2(); break;
                case 3: func_8BAE_b3(); break;
                case 4: func_8BAE_b4(); break;
                case 5: func_8BAE_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA90B:
            switch (g_current_bank) {
                case 7: func_E90B(); break;
                case 1: func_A90B_b1(); break;
                case 5: func_A90B_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9821:
            switch (g_current_bank) {
                case 7: func_D821(); break;
                case 1: func_9821_b1(); break;
                case 2: func_9821_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8DC1:
            func_8DC1_b1(); break;
        case 0x808E:
            switch (g_current_bank) {
                case 1: func_808E_b1(); break;
                case 2: func_808E_b2(); break;
                case 3: func_808E_b3(); break;
                case 4: func_808E_b4(); break;
                case 5: func_808E_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x848E:
            switch (g_current_bank) {
                case 1: func_848E_b1(); break;
                case 2: func_848E_b2(); break;
                case 3: func_848E_b3(); break;
                case 4: func_848E_b4(); break;
                case 5: func_848E_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x898E:
            switch (g_current_bank) {
                case 7: func_C98E(); break;
                case 1: func_898E_b1(); break;
                case 2: func_898E_b2(); break;
                case 3: func_898E_b3(); break;
                case 4: func_898E_b4(); break;
                case 5: func_898E_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8A8E:
            switch (g_current_bank) {
                case 1: func_8A8E_b1(); break;
                case 2: func_8A8E_b2(); break;
                case 3: func_8A8E_b3(); break;
                case 4: func_8A8E_b4(); break;
                case 5: func_8A8E_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D11:
            switch (g_current_bank) {
                case 1: func_8D11_b1(); break;
                case 2: func_8D11_b2(); break;
                case 3: func_8D11_b3(); break;
                case 4: func_8D11_b4(); break;
                case 5: func_8D11_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8A07:
            switch (g_current_bank) {
                case 7: func_CA07(); break;
                case 1: func_8A07_b1(); break;
                case 2: func_8A07_b2(); break;
                case 3: func_8A07_b3(); break;
                case 4: func_8A07_b4(); break;
                case 5: func_8A07_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA019:
            switch (g_current_bank) {
                case 1: func_A019_b1(); break;
                case 4: func_A019_b4(); break;
                case 5: func_A019_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D0B:
            switch (g_current_bank) {
                case 1: func_8D0B_b1(); break;
                case 2: func_8D0B_b2(); break;
                case 3: func_8D0B_b3(); break;
                case 4: func_8D0B_b4(); break;
                case 5: func_8D0B_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D02:
            switch (g_current_bank) {
                case 1: func_8D02_b1(); break;
                case 2: func_8D02_b2(); break;
                case 3: func_8D02_b3(); break;
                case 4: func_8D02_b4(); break;
                case 5: func_8D02_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xADAA:
            switch (g_current_bank) {
                case 1: func_ADAA_b1(); break;
                case 3: func_ADAA_b3(); break;
                case 4: func_ADAA_b4(); break;
                case 5: func_ADAA_b5(); break;
                case 0: func_ADAA_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x89A1:
            switch (g_current_bank) {
                case 1: func_89A1_b1(); break;
                case 2: func_89A1_b2(); break;
                case 3: func_89A1_b3(); break;
                case 4: func_89A1_b4(); break;
                case 5: func_89A1_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA8BA:
            switch (g_current_bank) {
                case 1: func_A8BA_b1(); break;
                case 6: func_A8BA_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D13:
            switch (g_current_bank) {
                case 1: func_8D13_b1(); break;
                case 2: func_8D13_b2(); break;
                case 3: func_8D13_b3(); break;
                case 4: func_8D13_b4(); break;
                case 5: func_8D13_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA00B:
            switch (g_current_bank) {
                case 1: func_A00B_b1(); break;
                case 4: func_A00B_b4(); break;
                case 5: func_A00B_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xADBA:
            func_ADBA_b1(); break;
        case 0x99A1:
            func_99A1_b1(); break;
        case 0x8D26:
            switch (g_current_bank) {
                case 1: func_8D26_b1(); break;
                case 2: func_8D26_b2(); break;
                case 3: func_8D26_b3(); break;
                case 4: func_8D26_b4(); break;
                case 5: func_8D26_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB107:
            switch (g_current_bank) {
                case 1: func_B107_b1(); break;
                case 2: func_B107_b2(); break;
                case 3: func_B107_b3(); break;
                case 4: func_B107_b4(); break;
                case 5: func_B107_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA0EC:
            switch (g_current_bank) {
                case 1: func_A0EC_b1(); break;
                case 2: func_A0EC_b2(); break;
                case 5: func_A0EC_b5(); break;
                case 6: func_A0EC_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA9BB:
            switch (g_current_bank) {
                case 1: func_A9BB_b1(); break;
                case 2: func_A9BB_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA8E7:
            switch (g_current_bank) {
                case 7: func_E8E7(); break;
                case 1: func_A8E7_b1(); break;
                case 3: func_A8E7_b3(); break;
                case 5: func_A8E7_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x80B6:
            switch (g_current_bank) {
                case 1: func_80B6_b1(); break;
                case 2: func_80B6_b2(); break;
                case 3: func_80B6_b3(); break;
                case 4: func_80B6_b4(); break;
                case 5: func_80B6_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB0BD:
            switch (g_current_bank) {
                case 7: func_F0BD(); break;
                case 1: func_B0BD_b1(); break;
                case 2: func_B0BD_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8DF1:
            func_8DF1_b1(); break;
        case 0xA093:
            switch (g_current_bank) {
                case 1: func_A093_b1(); break;
                case 2: func_A093_b2(); break;
                case 4: func_A093_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8904:
            switch (g_current_bank) {
                case 7: func_C904(); break;
                case 1: func_8904_b1(); break;
                case 2: func_8904_b2(); break;
                case 3: func_8904_b3(); break;
                case 4: func_8904_b4(); break;
                case 5: func_8904_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9F01:
            switch (g_current_bank) {
                case 1: func_9F01_b1(); break;
                case 4: func_9F01_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD21:
            func_AD21_b1(); break;
        case 0xB0C1:
            switch (g_current_bank) {
                case 1: func_B0C1_b1(); break;
                case 2: func_B0C1_b2(); break;
                case 3: func_B0C1_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x944D:
            switch (g_current_bank) {
                case 7: func_D44D(); break;
                case 2: func_944D_b2(); break;
                case 3: func_944D_b3(); break;
                case 4: func_944D_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x924D:
            switch (g_current_bank) {
                case 2: func_924D_b2(); break;
                case 3: func_924D_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA986:
            func_A986_b2(); break;
        case 0xA909:
            switch (g_current_bank) {
                case 7: func_E909(); break;
                case 2: func_A909_b2(); break;
                case 4: func_A909_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA061:
            switch (g_current_bank) {
                case 2: func_A061_b2(); break;
                case 3: func_A061_b3(); break;
                case 5: func_A061_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D6B:
            func_9D6B_b2(); break;
        case 0xA805:
            func_A805_b2(); break;
        case 0x9803:
            switch (g_current_bank) {
                case 2: func_9803_b2(); break;
                case 3: func_9803_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA50B:
            func_A50B_b2(); break;
        case 0xA514:
            switch (g_current_bank) {
                case 2: func_A514_b2(); break;
                case 4: func_A514_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD89:
            func_AD89_b2(); break;
        case 0xA68B:
            switch (g_current_bank) {
                case 2: func_A68B_b2(); break;
                case 5: func_A68B_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D88:
            switch (g_current_bank) {
                case 2: func_8D88_b2(); break;
                case 4: func_8D88_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9868:
            switch (g_current_bank) {
                case 2: func_9868_b2(); break;
                case 3: func_9868_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9999:
            func_9999_b2(); break;
        case 0xA456:
            switch (g_current_bank) {
                case 2: func_A456_b2(); break;
                case 6: func_A456_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA802:
            func_A802_b2(); break;
        case 0xA00A:
            func_A00A_b2(); break;
        case 0xA96C:
            switch (g_current_bank) {
                case 2: func_A96C_b2(); break;
                case 5: func_A96C_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA58D:
            func_A58D_b2(); break;
        case 0xB04B:
            switch (g_current_bank) {
                case 7: func_F04B(); break;
                case 2: func_B04B_b2(); break;
                case 3: func_B04B_b3(); break;
                case 6: func_B04B_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA821:
            switch (g_current_bank) {
                case 7: func_E821(); break;
                case 2: func_A821_b2(); break;
                case 4: func_A821_b4(); break;
                case 5: func_A821_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBEFB:
            func_BEFB_b2(); break;
        case 0xB86A:
            func_B86A_b2(); break;
        case 0xA35B:
            func_A35B_b2(); break;
        case 0x993B:
            func_993B_b2(); break;
        case 0xA0C1:
            switch (g_current_bank) {
                case 7: func_E0C1(); break;
                case 2: func_A0C1_b2(); break;
                case 3: func_A0C1_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA6C1:
            func_A6C1_b2(); break;
        case 0xA001:
            switch (g_current_bank) {
                case 7: func_E001(); break;
                case 2: func_A001_b2(); break;
                case 3: func_A001_b3(); break;
                case 6: func_A001_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8041:
            switch (g_current_bank) {
                case 2: func_8041_b2(); break;
                case 3: func_8041_b3(); break;
                case 4: func_8041_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8841:
            func_8841_b2(); break;
        case 0x904D:
            func_904D_b2(); break;
        case 0x8102:
            switch (g_current_bank) {
                case 2: func_8102_b2(); break;
                case 6: func_8102_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x993D:
            func_993D_b2(); break;
        case 0x8885:
            switch (g_current_bank) {
                case 2: func_8885_b2(); break;
                case 1: func_8885_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x814B:
            func_814B_b2(); break;
        case 0x894B:
            func_894B_b2(); break;
        case 0x9CBE:
            func_9CBE_b2(); break;
        case 0xA179:
            func_A179_b2(); break;
        case 0x9CA2:
            func_9CA2_b2(); break;
        case 0xA1B5:
            func_A1B5_b2(); break;
        case 0xA1D8:
            func_A1D8_b2(); break;
        case 0xA1DF:
            func_A1DF_b2(); break;
        case 0xA1E6:
            func_A1E6_b2(); break;
        case 0xA1ED:
            func_A1ED_b2(); break;
        case 0xA1F4:
            func_A1F4_b2(); break;
        case 0xA1FC:
            func_A1FC_b2(); break;
        case 0xA20C:
            func_A20C_b2(); break;
        case 0xA214:
            func_A214_b2(); break;
        case 0x9699:
            func_9699_b2(); break;
        case 0x8285:
            func_8285_b2(); break;
        case 0x8689:
            func_8689_b2(); break;
        case 0x97EE:
            func_97EE_b2(); break;
        case 0x9BA9:
            func_9BA9_b2(); break;
        case 0x9BAE:
            func_9BAE_b2(); break;
        case 0x9BB3:
            func_9BB3_b2(); break;
        case 0xB79C:
            func_B79C_b2(); break;
        case 0x9BB8:
            func_9BB8_b2(); break;
        case 0x9BC7:
            func_9BC7_b2(); break;
        case 0x9BCC:
            func_9BCC_b2(); break;
        case 0x9BD6:
            func_9BD6_b2(); break;
        case 0xBEBA:
            switch (g_current_bank) {
                case 2: func_BEBA_b2(); break;
                case 5: func_BEBA_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBC26:
            func_BC26_b2(); break;
        case 0x9D23:
            func_9D23_b2(); break;
        case 0x9D69:
            switch (g_current_bank) {
                case 2: func_9D69_b2(); break;
                case 0: func_9D69_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA535:
            func_A535_b2(); break;
        case 0xA673:
            func_A673_b2(); break;
        case 0xA51A:
            switch (g_current_bank) {
                case 7: func_E51A(); break;
                case 2: func_A51A_b2(); break;
                case 5: func_A51A_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA989:
            switch (g_current_bank) {
                case 2: func_A989_b2(); break;
                case 6: func_A989_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D9E:
            func_9D9E_b2(); break;
        case 0x9C9E:
            func_9C9E_b2(); break;
        case 0x9EA0:
            func_9EA0_b2(); break;
        case 0x9EF2:
            func_9EF2_b2(); break;
        case 0x9F00:
            switch (g_current_bank) {
                case 2: func_9F00_b2(); break;
                case 6: func_9F00_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9F0E:
            func_9F0E_b2(); break;
        case 0x81A0:
            func_81A0_b2(); break;
        case 0x9F9A:
            func_9F9A_b2(); break;
        case 0xA5A0:
            func_A5A0_b2(); break;
        case 0x9FA6:
            switch (g_current_bank) {
                case 2: func_9FA6_b2(); break;
                case 3: func_9FA6_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9FB4:
            func_9FB4_b2(); break;
        case 0x9FC2:
            func_9FC2_b2(); break;
        case 0x9FD0:
            switch (g_current_bank) {
                case 2: func_9FD0_b2(); break;
                case 6: func_9FD0_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9FDC:
            func_9FDC_b2(); break;
        case 0x9FEA:
            func_9FEA_b2(); break;
        case 0x9FF8:
            func_9FF8_b2(); break;
        case 0xA02F:
            func_A02F_b2(); break;
        case 0xA03E:
            func_A03E_b2(); break;
        case 0xA07A:
            func_A07A_b2(); break;
        case 0x93A1:
            func_93A1_b2(); break;
        case 0xA0A1:
            switch (g_current_bank) {
                case 2: func_A0A1_b2(); break;
                case 6: func_A0A1_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA8A1:
            func_A8A1_b2(); break;
        case 0xA0A9:
            func_A0A9_b2(); break;
        case 0xA0B5:
            func_A0B5_b2(); break;
        case 0xA0E5:
            switch (g_current_bank) {
                case 2: func_A0E5_b2(); break;
                case 3: func_A0E5_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA0F1:
            switch (g_current_bank) {
                case 7: func_E0F1(); break;
                case 2: func_A0F1_b2(); break;
                case 6: func_A0F1_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA0FD:
            func_A0FD_b2(); break;
        case 0xA169:
            func_A169_b2(); break;
        case 0x9DBD:
            func_9DBD_b2(); break;
        case 0xA3AC:
            func_A3AC_b2(); break;
        case 0xBEA4:
            func_BEA4_b2(); break;
        case 0xA3C7:
            func_A3C7_b2(); break;
        case 0xA3F9:
            func_A3F9_b2(); break;
        case 0xA4AC:
            func_A4AC_b2(); break;
        case 0xA4F6:
            func_A4F6_b2(); break;
        case 0xA528:
            func_A528_b2(); break;
        case 0xA560:
            func_A560_b2(); break;
        case 0xA599:
            switch (g_current_bank) {
                case 7: func_E599(); break;
                case 2: func_A599_b2(); break;
                case 3: func_A599_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA618:
            func_A618_b2(); break;
        case 0xA679:
            func_A679_b2(); break;
        case 0xA70F:
            func_A70F_b2(); break;
        case 0xA74A:
            func_A74A_b2(); break;
        case 0xA77F:
            func_A77F_b2(); break;
        case 0xA7B4:
            func_A7B4_b2(); break;
        case 0xA82C:
            func_A82C_b2(); break;
        case 0xA853:
            func_A853_b2(); break;
        case 0xA8DD:
            func_A8DD_b2(); break;
        case 0xA948:
            func_A948_b2(); break;
        case 0xA97A:
            func_A97A_b2(); break;
        case 0xA9AC:
            func_A9AC_b2(); break;
        case 0xA9D6:
            func_A9D6_b2(); break;
        case 0xAA3E:
            switch (g_current_bank) {
                case 2: func_AA3E_b2(); break;
                case 5: func_AA3E_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAA70:
            func_AA70_b2(); break;
        case 0xAAA8:
            func_AAA8_b2(); break;
        case 0xAAD5:
            func_AAD5_b2(); break;
        case 0xAB71:
            func_AB71_b2(); break;
        case 0xABA6:
            func_ABA6_b2(); break;
        case 0xAC0E:
            func_AC0E_b2(); break;
        case 0xAC9A:
            func_AC9A_b2(); break;
        case 0xAD0D:
            func_AD0D_b2(); break;
        case 0xAD2C:
            func_AD2C_b2(); break;
        case 0xAD62:
            switch (g_current_bank) {
                case 2: func_AD62_b2(); break;
                case 3: func_AD62_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD6D:
            func_AD6D_b2(); break;
        case 0x9CAE:
            func_9CAE_b2(); break;
        case 0xAD9D:
            func_AD9D_b2(); break;
        case 0xADE3:
            func_ADE3_b2(); break;
        case 0xADF8:
            func_ADF8_b2(); break;
        case 0xAE1E:
            func_AE1E_b2(); break;
        case 0xAE3B:
            func_AE3B_b2(); break;
        case 0x8EAF:
            func_8EAF_b2(); break;
        case 0x94AF:
            func_94AF_b2(); break;
        case 0xA36E:
            func_A36E_b2(); break;
        case 0xA103:
            func_A103_b2(); break;
        case 0x8E02:
            func_8E02_b2(); break;
        case 0xBE02:
            switch (g_current_bank) {
                case 7: func_FE02(); break;
                case 2: func_BE02_b2(); break;
                case 4: func_BE02_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAA07:
            func_AA07_b2(); break;
        case 0x9A04:
            func_9A04_b2(); break;
        case 0xA304:
            func_A304_b2(); break;
        case 0x8728:
            switch (g_current_bank) {
                case 2: func_8728_b2(); break;
                case 4: func_8728_b4(); break;
                case 5: func_8728_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9707:
            func_9707_b2(); break;
        case 0x8588:
            func_8588_b2(); break;
        case 0x8C32:
            func_8C32_b2(); break;
        case 0xA703:
            func_A703_b2(); break;
        case 0xBE07:
            func_BE07_b2(); break;
        case 0x9904:
            switch (g_current_bank) {
                case 2: func_9904_b2(); break;
                case 5: func_9904_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9701:
            func_9701_b2(); break;
        case 0xAE02:
            func_AE02_b2(); break;
        case 0xA465:
            func_A465_b2(); break;
        case 0xA0A6:
            func_A0A6_b2(); break;
        case 0xB1C3:
            func_B1C3_b2(); break;
        case 0xB125:
            func_B125_b2(); break;
        case 0xB2E1:
            func_B2E1_b2(); break;
        case 0xA95A:
            func_A95A_b2(); break;
        case 0xA5E9:
            func_A5E9_b2(); break;
        case 0x9EB6:
            func_9EB6_b2(); break;
        case 0xABB6:
            func_ABB6_b2(); break;
        case 0xAAB8:
            func_AAB8_b2(); break;
        case 0xADF2:
            func_ADF2_b2(); break;
        case 0xA9BD:
            switch (g_current_bank) {
                case 7: func_E9BD(); break;
                case 2: func_A9BD_b2(); break;
                case 5: func_A9BD_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x99E5:
            switch (g_current_bank) {
                case 2: func_99E5_b2(); break;
                case 4: func_99E5_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xACB6:
            switch (g_current_bank) {
                case 2: func_ACB6_b2(); break;
                case 4: func_ACB6_b4(); break;
                case 5: func_ACB6_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD07:
            func_AD07_b2(); break;
        case 0xA9F1:
            func_A9F1_b2(); break;
        case 0xA9C7:
            func_A9C7_b2(); break;
        case 0xA9A1:
            func_A9A1_b2(); break;
        case 0x9FAE:
            func_9FAE_b2(); break;
        case 0xA005:
            func_A005_b2(); break;
        case 0xA0B9:
            func_A0B9_b2(); break;
        case 0x9810:
            switch (g_current_bank) {
                case 2: func_9810_b2(); break;
                case 3: func_9810_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x98BC:
            func_98BC_b2(); break;
        case 0xAE49:
            switch (g_current_bank) {
                case 2: func_AE49_b2(); break;
                case 3: func_AE49_b3(); break;
                case 4: func_AE49_b4(); break;
                case 5: func_AE49_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA7BA:
            switch (g_current_bank) {
                case 2: func_A7BA_b2(); break;
                case 3: func_A7BA_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA7BD:
            switch (g_current_bank) {
                case 7: func_E7BD(); break;
                case 2: func_A7BD_b2(); break;
                case 3: func_A7BD_b3(); break;
                case 4: func_A7BD_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xADBD:
            switch (g_current_bank) {
                case 2: func_ADBD_b2(); break;
                case 3: func_ADBD_b3(); break;
                case 4: func_ADBD_b4(); break;
                case 5: func_ADBD_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA8AB:
            func_A8AB_b2(); break;
        case 0xA2EE:
            switch (g_current_bank) {
                case 2: func_A2EE_b2(); break;
                case 5: func_A2EE_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA0F6:
            func_A0F6_b2(); break;
        case 0xA2EA:
            switch (g_current_bank) {
                case 2: func_A2EA_b2(); break;
                case 3: func_A2EA_b3(); break;
                case 6: func_A2EA_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB027:
            func_B027_b2(); break;
        case 0xB058:
            func_B058_b2(); break;
        case 0xA9F4:
            switch (g_current_bank) {
                case 2: func_A9F4_b2(); break;
                case 6: func_A9F4_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9827:
            switch (g_current_bank) {
                case 2: func_9827_b2(); break;
                case 5: func_9827_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8F4D:
            func_8F4D_b3(); break;
        case 0xA92A:
            func_A92A_b3(); break;
        case 0x9DC4:
            switch (g_current_bank) {
                case 3: func_9DC4_b3(); break;
                case 4: func_9DC4_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x96DD:
            switch (g_current_bank) {
                case 3: func_96DD_b3(); break;
                case 4: func_96DD_b4(); break;
                case 5: func_96DD_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D99:
            func_9D99_b3(); break;
        case 0x9D20:
            func_9D20_b3(); break;
        case 0xA24D:
            func_A24D_b3(); break;
        case 0xA90A:
            func_A90A_b3(); break;
        case 0xA912:
            func_A912_b3(); break;
        case 0xA5F1:
            switch (g_current_bank) {
                case 3: func_A5F1_b3(); break;
                case 4: func_A5F1_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D7F:
            func_8D7F_b3(); break;
        case 0xA595:
            func_A595_b3(); break;
        case 0xA98C:
            func_A98C_b3(); break;
        case 0xA904:
            func_A904_b3(); break;
        case 0xA908:
            func_A908_b3(); break;
        case 0x9186:
            switch (g_current_bank) {
                case 3: func_9186_b3(); break;
                case 5: func_9186_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB0C3:
            func_B0C3_b3(); break;
        case 0xA9AB:
            switch (g_current_bank) {
                case 3: func_A9AB_b3(); break;
                case 5: func_A9AB_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA6CC:
            func_A6CC_b3(); break;
        case 0x92AE:
            switch (g_current_bank) {
                case 3: func_92AE_b3(); break;
                case 4: func_92AE_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD01:
            switch (g_current_bank) {
                case 7: func_ED01(); break;
                case 3: func_AD01_b3(); break;
                case 4: func_AD01_b4(); break;
                case 5: func_AD01_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB05A:
            func_B05A_b3(); break;
        case 0xAF29:
            func_AF29_b3(); break;
        case 0xB051:
            func_B051_b3(); break;
        case 0x9C1D:
            switch (g_current_bank) {
                case 7: func_DC1D(); break;
                case 3: func_9C1D_b3(); break;
                case 1: func_9C1D_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA25F:
            func_A25F_b3(); break;
        case 0x80C3:
            func_80C3_b3(); break;
        case 0x9FEF:
            func_9FEF_b3(); break;
        case 0x9F80:
            func_9F80_b3(); break;
        case 0x90C6:
            func_90C6_b3(); break;
        case 0x8C49:
            func_8C49_b3(); break;
        case 0x988D:
            func_988D_b3(); break;
        case 0xAF10:
            switch (g_current_bank) {
                case 7: func_EF10(); break;
                case 3: func_AF10_b3(); break;
                case 4: func_AF10_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8205:
            switch (g_current_bank) {
                case 3: func_8205_b3(); break;
                case 4: func_8205_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9E01:
            func_9E01_b3(); break;
        case 0x9709:
            func_9709_b3(); break;
        case 0xA719:
            func_A719_b3(); break;
        case 0xA755:
            func_A755_b3(); break;
        case 0xA75A:
            func_A75A_b3(); break;
        case 0xA75F:
            func_A75F_b3(); break;
        case 0xA774:
            func_A774_b3(); break;
        case 0xA789:
            func_A789_b3(); break;
        case 0xA795:
            func_A795_b3(); break;
        case 0x9BA8:
            func_9BA8_b3(); break;
        case 0xA79C:
            func_A79C_b3(); break;
        case 0xA7A3:
            func_A7A3_b3(); break;
        case 0xA7AA:
            func_A7AA_b3(); break;
        case 0xA7B2:
            func_A7B2_b3(); break;
        case 0xA7C2:
            func_A7C2_b3(); break;
        case 0xA7CA:
            func_A7CA_b3(); break;
        case 0x97DC:
            func_97DC_b3(); break;
        case 0xA3D6:
            func_A3D6_b3(); break;
        case 0xA3E8:
            func_A3E8_b3(); break;
        case 0xA3F1:
            func_A3F1_b3(); break;
        case 0xA3FA:
            switch (g_current_bank) {
                case 3: func_A3FA_b3(); break;
                case 5: func_A3FA_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAC81:
            func_AC81_b3(); break;
        case 0xB99A:
            func_B99A_b3(); break;
        case 0x9D06:
            switch (g_current_bank) {
                case 3: func_9D06_b3(); break;
                case 4: func_9D06_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBD38:
            func_BD38_b3(); break;
        case 0xBD47:
            func_BD47_b3(); break;
        case 0x840C:
            func_840C_b3(); break;
        case 0xA593:
            func_A593_b3(); break;
        case 0xA89C:
            func_A89C_b3(); break;
        case 0xAD0A:
            func_AD0A_b3(); break;
        case 0x81C5:
            func_81C5_b3(); break;
        case 0xA979:
            func_A979_b3(); break;
        case 0xAD6B:
            func_AD6B_b3(); break;
        case 0x9D9C:
            switch (g_current_bank) {
                case 3: func_9D9C_b3(); break;
                case 0: func_9D9C_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA59D:
            func_A59D_b3(); break;
        case 0x94BA:
            func_94BA_b3(); break;
        case 0x844D:
            func_844D_b3(); break;
        case 0xA549:
            func_A549_b3(); break;
        case 0xA0CA:
            func_A0CA_b3(); break;
        case 0x996C:
            func_996C_b3(); break;
        case 0x99AB:
            func_99AB_b3(); break;
        case 0x9C27:
            func_9C27_b3(); break;
        case 0x9DCD:
            func_9DCD_b3(); break;
        case 0x9DD0:
            func_9DD0_b3(); break;
        case 0xBD98:
            func_BD98_b3(); break;
        case 0x8D9E:
            func_8D9E_b3(); break;
        case 0xA5FE:
            func_A5FE_b3(); break;
        case 0xB004:
            func_B004_b3(); break;
        case 0x9DA6:
            func_9DA6_b3(); break;
        case 0xAD99:
            func_AD99_b3(); break;
        case 0xB561:
            func_B561_b3(); break;
        case 0x8BB6:
            func_8BB6_b3(); break;
        case 0x956D:
            func_956D_b3(); break;
        case 0x859B:
            switch (g_current_bank) {
                case 3: func_859B_b3(); break;
                case 5: func_859B_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB501:
            switch (g_current_bank) {
                case 3: func_B501_b3(); break;
                case 5: func_B501_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x80EA:
            func_80EA_b3(); break;
        case 0x9E86:
            func_9E86_b3(); break;
        case 0x9FC7:
            func_9FC7_b3(); break;
        case 0x981D:
            func_981D_b3(); break;
        case 0x8899:
            switch (g_current_bank) {
                case 3: func_8899_b3(); break;
                case 1: func_8899_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9985:
            func_9985_b3(); break;
        case 0x9AE7:
            func_9AE7_b3(); break;
        case 0xADEE:
            func_ADEE_b3(); break;
        case 0x99E7:
            func_99E7_b3(); break;
        case 0x8D62:
            func_8D62_b3(); break;
        case 0xAD4C:
            func_AD4C_b3(); break;
        case 0xA591:
            func_A591_b3(); break;
        case 0x9F66:
            func_9F66_b3(); break;
        case 0xA9A0:
            func_A9A0_b3(); break;
        case 0x9D11:
            func_9D11_b3(); break;
        case 0x9885:
            func_9885_b3(); break;
        case 0xAD2A:
            func_AD2A_b3(); break;
        case 0x9AC7:
            func_9AC7_b3(); break;
        case 0xA90C:
            switch (g_current_bank) {
                case 7: func_E90C(); break;
                case 3: func_A90C_b3(); break;
                case 6: func_A90C_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9B46:
            func_9B46_b3(); break;
        case 0x8D45:
            func_8D45_b3(); break;
        case 0x8500:
            func_8500_b3(); break;
        case 0x8646:
            func_8646_b3(); break;
        case 0xA958:
            func_A958_b3(); break;
        case 0x8CAA:
            func_8CAA_b3(); break;
        case 0xB101:
            switch (g_current_bank) {
                case 3: func_B101_b3(); break;
                case 4: func_B101_b4(); break;
                case 5: func_B101_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9E2A:
            switch (g_current_bank) {
                case 7: func_DE2A(); break;
                case 3: func_9E2A_b3(); break;
                case 0: func_9E2A_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA616:
            func_A616_b3(); break;
        case 0xB073:
            func_B073_b3(); break;
        case 0xAC61:
            func_AC61_b3(); break;
        case 0xA1DC:
            func_A1DC_b3(); break;
        case 0xBAC9:
            func_BAC9_b3(); break;
        case 0xACBB:
            func_ACBB_b3(); break;
        case 0xA92D:
            func_A92D_b3(); break;
        case 0x850C:
            switch (g_current_bank) {
                case 3: func_850C_b3(); break;
                case 5: func_850C_b5(); break;
                case 6: func_850C_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D1B:
            func_8D1B_b3(); break;
        case 0xA311:
            func_A311_b3(); break;
        case 0xAA69:
            switch (g_current_bank) {
                case 3: func_AA69_b3(); break;
                case 4: func_AA69_b4(); break;
                case 6: func_AA69_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9286:
            switch (g_current_bank) {
                case 3: func_9286_b3(); break;
                case 1: func_9286_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9092:
            switch (g_current_bank) {
                case 7: func_D092(); break;
                case 3: func_9092_b3(); break;
                case 4: func_9092_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9243:
            func_9243_b3(); break;
        case 0x9294:
            func_9294_b3(); break;
        case 0x9CA7:
            func_9CA7_b3(); break;
        case 0xA6AD:
            func_A6AD_b3(); break;
        case 0xA6BD:
            func_A6BD_b3(); break;
        case 0xA709:
            func_A709_b3(); break;
        case 0xA8B0:
            func_A8B0_b3(); break;
        case 0xA8C6:
            func_A8C6_b3(); break;
        case 0xA95F:
            func_A95F_b3(); break;
        case 0xA976:
            func_A976_b3(); break;
        case 0xA991:
            func_A991_b3(); break;
        case 0xA9F3:
            func_A9F3_b3(); break;
        case 0xAA34:
            func_AA34_b3(); break;
        case 0xAA76:
            func_AA76_b3(); break;
        case 0xAEAB:
            func_AEAB_b3(); break;
        case 0xAAAF:
            func_AAAF_b3(); break;
        case 0xAAE4:
            func_AAE4_b3(); break;
        case 0xAB13:
            func_AB13_b3(); break;
        case 0xAB4B:
            func_AB4B_b3(); break;
        case 0xAB7D:
            func_AB7D_b3(); break;
        case 0xAC7B:
            func_AC7B_b3(); break;
        case 0xACA5:
            func_ACA5_b3(); break;
        case 0xACD1:
            func_ACD1_b3(); break;
        case 0xAD27:
            func_AD27_b3(); break;
        case 0xADC9:
            func_ADC9_b3(); break;
        case 0xADDE:
            func_ADDE_b3(); break;
        case 0xAE1B:
            func_AE1B_b3(); break;
        case 0x8F02:
            func_8F02_b3(); break;
        case 0xA7A8:
            switch (g_current_bank) {
                case 3: func_A7A8_b3(); break;
                case 5: func_A7A8_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA2A7:
            func_A2A7_b3(); break;
        case 0x8D8D:
            func_8D8D_b3(); break;
        case 0xB445:
            func_B445_b3(); break;
        case 0xB931:
            func_B931_b3(); break;
        case 0xBB37:
            func_BB37_b3(); break;
        case 0xBB21:
            switch (g_current_bank) {
                case 7: func_FB21(); break;
                case 3: func_BB21_b3(); break;
                case 4: func_BB21_b4(); break;
                case 5: func_BB21_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB2C9:
            switch (g_current_bank) {
                case 7: func_F2C9(); break;
                case 3: func_B2C9_b3(); break;
                case 4: func_B2C9_b4(); break;
                case 5: func_B2C9_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB0C9:
            func_B0C9_b3(); break;
        case 0xADB9:
            switch (g_current_bank) {
                case 3: func_ADB9_b3(); break;
                case 4: func_ADB9_b4(); break;
                case 5: func_ADB9_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA9B5:
            func_A9B5_b3(); break;
        case 0x8DB8:
            func_8DB8_b3(); break;
        case 0xAD24:
            switch (g_current_bank) {
                case 3: func_AD24_b3(); break;
                case 4: func_AD24_b4(); break;
                case 5: func_AD24_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA982:
            func_A982_b3(); break;
        case 0xAC12:
            func_AC12_b3(); break;
        case 0x8F42:
            switch (g_current_bank) {
                case 3: func_8F42_b3(); break;
                case 5: func_8F42_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA2E4:
            func_A2E4_b3(); break;
        case 0xA603:
            switch (g_current_bank) {
                case 7: func_E603(); break;
                case 3: func_A603_b3(); break;
                case 4: func_A603_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB201:
            switch (g_current_bank) {
                case 3: func_B201_b3(); break;
                case 4: func_B201_b4(); break;
                case 5: func_B201_b5(); break;
                case 6: func_B201_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xADFC:
            switch (g_current_bank) {
                case 3: func_ADFC_b3(); break;
                case 4: func_ADFC_b4(); break;
                case 5: func_ADFC_b5(); break;
                case 6: func_ADFC_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA684:
            func_A684_b4(); break;
        case 0x9D05:
            switch (g_current_bank) {
                case 4: func_9D05_b4(); break;
                case 5: func_9D05_b5(); break;
                case 6: func_9D05_b6(); break;
                case 1: func_9D05_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA9F5:
            func_A9F5_b4(); break;
        case 0xA96A:
            func_A96A_b4(); break;
        case 0x9D01:
            func_9D01_b4(); break;
        case 0xA0E8:
            func_A0E8_b4(); break;
        case 0xB003:
            switch (g_current_bank) {
                case 7: func_F003(); break;
                case 4: func_B003_b4(); break;
                case 5: func_B003_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA600:
            func_A600_b4(); break;
        case 0x9003:
            func_9003_b4(); break;
        case 0x9C8B:
            switch (g_current_bank) {
                case 7: func_DC8B(); break;
                case 4: func_9C8B_b4(); break;
                case 5: func_9C8B_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9386:
            func_9386_b4(); break;
        case 0xA208:
            switch (g_current_bank) {
                case 4: func_A208_b4(); break;
                case 6: func_A208_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D51:
            switch (g_current_bank) {
                case 4: func_9D51_b4(); break;
                case 5: func_9D51_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA91E:
            func_A91E_b4(); break;
        case 0xA913:
            func_A913_b4(); break;
        case 0xA68D:
            func_A68D_b4(); break;
        case 0x9D31:
            switch (g_current_bank) {
                case 4: func_9D31_b4(); break;
                case 5: func_9D31_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA54C:
            func_A54C_b4(); break;
        case 0x91A6:
            switch (g_current_bank) {
                case 4: func_91A6_b4(); break;
                case 5: func_91A6_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x98AB:
            func_98AB_b4(); break;
        case 0x9905:
            func_9905_b4(); break;
        case 0x88C7:
            func_88C7_b4(); break;
        case 0x9881:
            func_9881_b4(); break;
        case 0xB879:
            func_B879_b4(); break;
        case 0x9919:
            func_9919_b4(); break;
        case 0x8CB1:
            func_8CB1_b4(); break;
        case 0x9F10:
            func_9F10_b4(); break;
        case 0x9FA0:
            func_9FA0_b4(); break;
        case 0xB081:
            func_B081_b4(); break;
        case 0x9D71:
            func_9D71_b4(); break;
        case 0x9CFD:
            func_9CFD_b4(); break;
        case 0xA156:
            func_A156_b4(); break;
        case 0x85A2:
            func_85A2_b4(); break;
        case 0xA192:
            func_A192_b4(); break;
        case 0xA199:
            func_A199_b4(); break;
        case 0xA1A0:
            func_A1A0_b4(); break;
        case 0xA1A7:
            func_A1A7_b4(); break;
        case 0xADA2:
            func_ADA2_b4(); break;
        case 0xA1AE:
            func_A1AE_b4(); break;
        case 0xA1B6:
            func_A1B6_b4(); break;
        case 0xA1BE:
            func_A1BE_b4(); break;
        case 0xA1C6:
            func_A1C6_b4(); break;
        case 0xA1CE:
            func_A1CE_b4(); break;
        case 0xA26E:
            func_A26E_b4(); break;
        case 0xA220:
            func_A220_b4(); break;
        case 0x9DF8:
            func_9DF8_b4(); break;
        case 0x980A:
            func_980A_b4(); break;
        case 0x9825:
            func_9825_b4(); break;
        case 0x982C:
            func_982C_b4(); break;
        case 0x9833:
            func_9833_b4(); break;
        case 0x98CA:
            func_98CA_b4(); break;
        case 0x9C55:
            func_9C55_b4(); break;
        case 0x9C5A:
            func_9C5A_b4(); break;
        case 0x9C5F:
            func_9C5F_b4(); break;
        case 0x9C64:
            func_9C64_b4(); break;
        case 0x9C73:
            func_9C73_b4(); break;
        case 0x9C78:
            func_9C78_b4(); break;
        case 0x9C82:
            func_9C82_b4(); break;
        case 0x9B04:
            func_9B04_b4(); break;
        case 0x9010:
            func_9010_b4(); break;
        case 0x9D3B:
            func_9D3B_b4(); break;
        case 0xA06B:
            func_A06B_b4(); break;
        case 0xBD70:
            func_BD70_b4(); break;
        case 0xBD5E:
            func_BD5E_b4(); break;
        case 0xA84B:
            func_A84B_b4(); break;
        case 0x9BDB:
            func_9BDB_b4(); break;
        case 0xA56B:
            func_A56B_b4(); break;
        case 0xA003:
            func_A003_b4(); break;
        case 0xA212:
            func_A212_b4(); break;
        case 0xA561:
            func_A561_b4(); break;
        case 0x8F8F:
            switch (g_current_bank) {
                case 4: func_8F8F_b4(); break;
                case 5: func_8F8F_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9C23:
            func_9C23_b4(); break;
        case 0x9023:
            func_9023_b4(); break;
        case 0x9090:
            func_9090_b4(); break;
        case 0x9F39:
            func_9F39_b4(); break;
        case 0x9F42:
            func_9F42_b4(); break;
        case 0x9F4C:
            func_9F4C_b4(); break;
        case 0x9F56:
            func_9F56_b4(); break;
        case 0x9F5F:
            func_9F5F_b4(); break;
        case 0x87A0:
            func_87A0_b4(); break;
        case 0x9FEC:
            func_9FEC_b4(); break;
        case 0x9FF4:
            func_9FF4_b4(); break;
        case 0xA014:
            switch (g_current_bank) {
                case 4: func_A014_b4(); break;
                case 5: func_A014_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA01C:
            switch (g_current_bank) {
                case 4: func_A01C_b4(); break;
                case 5: func_A01C_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA024:
            func_A024_b4(); break;
        case 0x83A1:
            switch (g_current_bank) {
                case 4: func_83A1_b4(); break;
                case 5: func_83A1_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xABA1:
            func_ABA1_b4(); break;
        case 0xA102:
            func_A102_b4(); break;
        case 0xA112:
            func_A112_b4(); break;
        case 0xA122:
            func_A122_b4(); break;
        case 0xA132:
            func_A132_b4(); break;
        case 0xA79F:
            func_A79F_b4(); break;
        case 0xA2B8:
            func_A2B8_b4(); break;
        case 0x83A7:
            func_83A7_b4(); break;
        case 0xA6B6:
            func_A6B6_b4(); break;
        case 0xA714:
            func_A714_b4(); break;
        case 0xA7B3:
            func_A7B3_b4(); break;
        case 0xA7F7:
            func_A7F7_b4(); break;
        case 0xA8A4:
            func_A8A4_b4(); break;
        case 0xA9BF:
            func_A9BF_b4(); break;
        case 0xAB69:
            func_AB69_b4(); break;
        case 0xAB9C:
            func_AB9C_b4(); break;
        case 0xB0AC:
            func_B0AC_b4(); break;
        case 0xAC10:
            func_AC10_b4(); break;
        case 0xA276:
            func_A276_b4(); break;
        case 0x8C16:
            func_8C16_b4(); break;
        case 0xA29F:
            switch (g_current_bank) {
                case 4: func_A29F_b4(); break;
                case 5: func_A29F_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA2A8:
            func_A2A8_b4(); break;
        case 0x9201:
            func_9201_b4(); break;
        case 0xA401:
            func_A401_b4(); break;
        case 0x9203:
            func_9203_b4(); break;
        case 0x9B01:
            func_9B01_b4(); break;
        case 0x9804:
            func_9804_b4(); break;
        case 0x8112:
            func_8112_b4(); break;
        case 0xA1A2:
            func_A1A2_b4(); break;
        case 0x8450:
            switch (g_current_bank) {
                case 4: func_8450_b4(); break;
                case 5: func_8450_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA8B9:
            func_A8B9_b4(); break;
        case 0xA907:
            switch (g_current_bank) {
                case 4: func_A907_b4(); break;
                case 5: func_A907_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA9E3:
            func_A9E3_b4(); break;
        case 0xA941:
            func_A941_b4(); break;
        case 0xA0E6:
            switch (g_current_bank) {
                case 4: func_A0E6_b4(); break;
                case 5: func_A0E6_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB007:
            switch (g_current_bank) {
                case 4: func_B007_b4(); break;
                case 5: func_B007_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA031:
            switch (g_current_bank) {
                case 4: func_A031_b4(); break;
                case 5: func_A031_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA9F9:
            switch (g_current_bank) {
                case 4: func_A9F9_b4(); break;
                case 6: func_A9F9_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D80:
            switch (g_current_bank) {
                case 4: func_8D80_b4(); break;
                case 6: func_8D80_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA011:
            func_A011_b4(); break;
        case 0xB05C:
            switch (g_current_bank) {
                case 7: func_F05C(); break;
                case 4: func_B05C_b4(); break;
                case 5: func_B05C_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA3B6:
            switch (g_current_bank) {
                case 4: func_A3B6_b4(); break;
                case 6: func_A3B6_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8E00:
            switch (g_current_bank) {
                case 4: func_8E00_b4(); break;
                case 6: func_8E00_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA9F2:
            func_A9F2_b4(); break;
        case 0xA0B7:
            switch (g_current_bank) {
                case 4: func_A0B7_b4(); break;
                case 5: func_A0B7_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9DBE:
            switch (g_current_bank) {
                case 4: func_9DBE_b4(); break;
                case 5: func_9DBE_b5(); break;
                case 0: func_9DBE_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9A86:
            func_9A86_b4(); break;
        case 0xA0E9:
            func_A0E9_b5(); break;
        case 0xA513:
            func_A513_b5(); break;
        case 0xA501:
            func_A501_b5(); break;
        case 0xA55A:
            func_A55A_b5(); break;
        case 0xAA11:
            func_AA11_b5(); break;
        case 0xA9DD:
            func_A9DD_b5(); break;
        case 0xA949:
            func_A949_b5(); break;
        case 0x9CE9:
            switch (g_current_bank) {
                case 5: func_9CE9_b5(); break;
                case 6: func_9CE9_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x89D2:
            switch (g_current_bank) {
                case 5: func_89D2_b5(); break;
                case 1: func_89D2_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x871D:
            func_871D_b5(); break;
        case 0x9C99:
            switch (g_current_bank) {
                case 5: func_9C99_b5(); break;
                case 6: func_9C99_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x830C:
            func_830C_b5(); break;
        case 0x9069:
            func_9069_b5(); break;
        case 0x8293:
            func_8293_b5(); break;
        case 0x8851:
            switch (g_current_bank) {
                case 5: func_8851_b5(); break;
                case 6: func_8851_b6(); break;
                case 1: func_8851_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA128:
            func_A128_b5(); break;
        case 0xA13C:
            func_A13C_b5(); break;
        case 0xA143:
            func_A143_b5(); break;
        case 0xA14A:
            func_A14A_b5(); break;
        case 0xA151:
            func_A151_b5(); break;
        case 0xA158:
            func_A158_b5(); break;
        case 0xA160:
            func_A160_b5(); break;
        case 0xA168:
            func_A168_b5(); break;
        case 0xA170:
            func_A170_b5(); break;
        case 0xA178:
            func_A178_b5(); break;
        case 0xA180:
            func_A180_b5(); break;
        case 0x9CF1:
            switch (g_current_bank) {
                case 5: func_9CF1_b5(); break;
                case 6: func_9CF1_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x97F4:
            func_97F4_b5(); break;
        case 0x9B54:
            func_9B54_b5(); break;
        case 0x9B5E:
            func_9B5E_b5(); break;
        case 0x9B63:
            func_9B63_b5(); break;
        case 0x9B72:
            func_9B72_b5(); break;
        case 0x9B77:
            func_9B77_b5(); break;
        case 0x9B81:
            func_9B81_b5(); break;
        case 0x9206:
            func_9206_b5(); break;
        case 0x9204:
            func_9204_b5(); break;
        case 0xA82B:
            func_A82B_b5(); break;
        case 0x8D6C:
            func_8D6C_b5(); break;
        case 0xA461:
            func_A461_b5(); break;
        case 0xA88B:
            func_A88B_b5(); break;
        case 0x9C9F:
            switch (g_current_bank) {
                case 5: func_9C9F_b5(); break;
                case 6: func_9C9F_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBA9F:
            switch (g_current_bank) {
                case 7: func_FA9F(); break;
                case 5: func_BA9F_b5(); break;
                case 6: func_BA9F_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9F18:
            func_9F18_b5(); break;
        case 0x9F24:
            switch (g_current_bank) {
                case 5: func_9F24_b5(); break;
                case 6: func_9F24_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9F32:
            func_9F32_b5(); break;
        case 0x9F40:
            func_9F40_b5(); break;
        case 0x9F4E:
            func_9F4E_b5(); break;
        case 0x9F5A:
            switch (g_current_bank) {
                case 5: func_9F5A_b5(); break;
                case 6: func_9F5A_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9F68:
            func_9F68_b5(); break;
        case 0x9F76:
            switch (g_current_bank) {
                case 5: func_9F76_b5(); break;
                case 6: func_9F76_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8EA0:
            func_8EA0_b5(); break;
        case 0xA028:
            func_A028_b5(); break;
        case 0xA058:
            func_A058_b5(); break;
        case 0xA070:
            func_A070_b5(); break;
        case 0xA0DC:
            func_A0DC_b5(); break;
        case 0x9D6F:
            switch (g_current_bank) {
                case 5: func_9D6F_b5(); break;
                case 6: func_9D6F_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x829E:
            func_829E_b5(); break;
        case 0xAF00:
            func_AF00_b5(); break;
        case 0xA248:
            func_A248_b5(); break;
        case 0xA274:
            func_A274_b5(); break;
        case 0xA2B3:
            func_A2B3_b5(); break;
        case 0xA2E5:
            func_A2E5_b5(); break;
        case 0xA310:
            func_A310_b5(); break;
        case 0xA34E:
            func_A34E_b5(); break;
        case 0x83A4:
            func_83A4_b5(); break;
        case 0xA384:
            func_A384_b5(); break;
        case 0xA42A:
            func_A42A_b5(); break;
        case 0xA526:
            func_A526_b5(); break;
        case 0xA556:
            func_A556_b5(); break;
        case 0xA76C:
            func_A76C_b5(); break;
        case 0xA79E:
            func_A79E_b5(); break;
        case 0xA7FD:
            func_A7FD_b5(); break;
        case 0xA84A:
            func_A84A_b5(); break;
        case 0xA8ED:
            func_A8ED_b5(); break;
        case 0xA92B:
            func_A92B_b5(); break;
        case 0xA9FA:
            func_A9FA_b5(); break;
        case 0xAA08:
            func_AA08_b5(); break;
        case 0xAA18:
            func_AA18_b5(); break;
        case 0xAA2D:
            func_AA2D_b5(); break;
        case 0xAA58:
            func_AA58_b5(); break;
        case 0xAA6E:
            func_AA6E_b5(); break;
        case 0xAA79:
            func_AA79_b5(); break;
        case 0x83AB:
            func_83AB_b5(); break;
        case 0xAA97:
            func_AA97_b5(); break;
        case 0xABAB:
            func_ABAB_b5(); break;
        case 0xAADA:
            func_AADA_b5(); break;
        case 0xAB1E:
            func_AB1E_b5(); break;
        case 0xA225:
            func_A225_b5(); break;
        case 0x9787:
            func_9787_b5(); break;
        case 0x9287:
            func_9287_b5(); break;
        case 0x9402:
            func_9402_b5(); break;
        case 0x9B02:
            func_9B02_b5(); break;
        case 0xA803:
            func_A803_b5(); break;
        case 0x998D:
            func_998D_b5(); break;
        case 0x9B0D:
            func_9B0D_b5(); break;
        case 0x9E03:
            func_9E03_b5(); break;
        case 0x8818:
            switch (g_current_bank) {
                case 5: func_8818_b5(); break;
                case 1: func_8818_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA400:
            func_A400_b5(); break;
        case 0xA973:
            func_A973_b5(); break;
        case 0x9421:
            func_9421_b5(); break;
        case 0xA0E4:
            func_A0E4_b5(); break;
        case 0x8D8E:
            func_8D8E_b5(); break;
        case 0xA021:
            func_A021_b5(); break;
        case 0x8D61:
            func_8D61_b5(); break;
        case 0x8DB6:
            func_8DB6_b5(); break;
        case 0xA002:
            func_A002_b5(); break;
        case 0xA9B4:
            func_A9B4_b5(); break;
        case 0xA9DB:
            func_A9DB_b5(); break;
        case 0xA009:
            func_A009_b5(); break;
        case 0xAA0B:
            func_AA0B_b5(); break;
        case 0x903D:
            switch (g_current_bank) {
                case 5: func_903D_b5(); break;
                case 2: func_903D_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x848D:
            func_848D_b6(); break;
        case 0x9079:
            func_9079_b6(); break;
        case 0x9CAF:
            func_9CAF_b6(); break;
        case 0x80C9:
            func_80C9_b6(); break;
        case 0x9CC9:
            func_9CC9_b6(); break;
        case 0x9C9D:
            func_9C9D_b6(); break;
        case 0x98E9:
            func_98E9_b6(); break;
        case 0x9089:
            func_9089_b6(); break;
        case 0xB661:
            func_B661_b6(); break;
        case 0xBE60:
            func_BE60_b6(); break;
        case 0x8510:
            func_8510_b6(); break;
        case 0x8A00:
            func_8A00_b6(); break;
        case 0xA3BE:
            func_A3BE_b6(); break;
        case 0xA869:
            func_A869_b6(); break;
        case 0x9CED:
            func_9CED_b6(); break;
        case 0x8869:
            func_8869_b6(); break;
        case 0x9091:
            func_9091_b6(); break;
        case 0x99C1:
            func_99C1_b6(); break;
        case 0x8031:
            func_8031_b6(); break;
        case 0x8004:
            func_8004_b6(); break;
        case 0x9831:
            func_9831_b6(); break;
        case 0xA654:
            func_A654_b6(); break;
        case 0x904C:
            func_904C_b6(); break;
        case 0x8686:
            func_8686_b6(); break;
        case 0xA218:
            func_A218_b6(); break;
        case 0x8023:
            func_8023_b6(); break;
        case 0x9423:
            func_9423_b6(); break;
        case 0x9797:
            func_9797_b6(); break;
        case 0x9191:
            func_9191_b6(); break;
        case 0x9EB1:
            switch (g_current_bank) {
                case 6: func_9EB1_b6(); break;
                case 1: func_9EB1_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9EEF:
            func_9EEF_b6(); break;
        case 0xAAA0:
            func_AAA0_b6(); break;
        case 0x9FB7:
            func_9FB7_b6(); break;
        case 0x9FD3:
            func_9FD3_b6(); break;
        case 0xA040:
            func_A040_b6(); break;
        case 0xA0C4:
            func_A0C4_b6(); break;
        case 0xA0CC:
            func_A0CC_b6(); break;
        case 0x9DAB:
            func_9DAB_b6(); break;
        case 0x8485:
            func_8485_b6(); break;
        case 0x82E1:
            func_82E1_b6(); break;
        case 0x9E81:
            func_9E81_b6(); break;
        case 0x8A10:
            func_8A10_b6(); break;
        case 0xB873:
            func_B873_b6(); break;
        case 0x8681:
            func_8681_b6(); break;
        case 0x8143:
            func_8143_b6(); break;
        case 0x8082:
            func_8082_b6(); break;
        case 0xBCF7:
            func_BCF7_b6(); break;
        case 0x983D:
            func_983D_b6(); break;
        case 0xBF48:
            func_BF48_b6(); break;
        case 0xBFC1:
            func_BFC1_b6(); break;
        case 0x8811:
            func_8811_b6(); break;
        case 0x83C8:
            func_83C8_b6(); break;
        case 0x8185:
            func_8185_b6(); break;
        case 0x8708:
            func_8708_b6(); break;
        case 0x98D9:
            func_98D9_b6(); break;
        case 0xA7AE:
            func_A7AE_b6(); break;
        case 0xB2A8:
            func_B2A8_b6(); break;
        case 0xAD49:
            func_AD49_b6(); break;
        case 0x85ED:
            func_85ED_b6(); break;
        case 0xA8B8:
            func_A8B8_b6(); break;
        case 0xA541:
            func_A541_b6(); break;
        case 0xB233:
            func_B233_b6(); break;
        case 0xAABD:
            func_AABD_b6(); break;
        case 0xB51F:
            func_B51F_b6(); break;
        case 0x8321:
            func_8321_b6(); break;
        case 0x96A1:
            func_96A1_b6(); break;
        case 0xAAB1:
            func_AAB1_b6(); break;
        case 0xB023:
            func_B023_b6(); break;
        case 0xB463:
            func_B463_b6(); break;
        case 0xB21D:
            func_B21D_b6(); break;
        case 0xB42B:
            func_B42B_b6(); break;
        case 0xA8BD:
            func_A8BD_b6(); break;
        case 0x909A:
            func_909A_b6(); break;
        case 0x9727:
            func_9727_b6(); break;
        case 0x94DA:
            func_94DA_b0(); break;
        case 0xE9DD:
            func_E9DD(); break;
        case 0xEAF3:
            func_EAF3(); break;
        case 0xEA1B:
            func_EA1B(); break;
        case 0xEB1F:
            func_EB1F(); break;
        case 0xEAEE:
            func_EAEE(); break;
        case 0xEA9F:
            func_EA9F(); break;
        case 0xE1ED:
            func_E1ED(); break;
        case 0xEA96:
            func_EA96(); break;
        case 0xE214:
            func_E214(); break;
        case 0x8771:
            func_8771_b0(); break;
        case 0xE2A2:
            func_E2A2(); break;
        case 0xE96D:
            func_E96D(); break;
        case 0xEC02:
            func_EC02(); break;
        case 0xEBA2:
            func_EBA2(); break;
        case 0xEBE8:
            func_EBE8(); break;
        case 0xB4C2:
            func_B4C2_b0(); break;
        case 0xB254:
            func_B254_b0(); break;
        case 0xB042:
            func_B042_b0(); break;
        case 0xB342:
            func_B342_b0(); break;
        case 0xFF3E:
            func_FF3E(); break;
        case 0xEF47:
            func_EF47(); break;
        case 0xEFFC:
            func_EFFC(); break;
        case 0xF054:
            func_F054(); break;
        case 0xF177:
            func_F177(); break;
        case 0x8D71:
            func_8D71_b0(); break;
        case 0x9CA6:
            func_9CA6_b0(); break;
        case 0x947B:
            func_947B_b0(); break;
        case 0x866E:
            func_866E_b0(); break;
        case 0xB02E:
            func_B02E_b0(); break;
        case 0x9DD2:
            func_9DD2_b0(); break;
        case 0x9DE3:
            func_9DE3_b0(); break;
        case 0x9E10:
            func_9E10_b0(); break;
        case 0x9E1C:
            func_9E1C_b0(); break;
        case 0x8220:
            func_8220_b0(); break;
        case 0xA950:
            func_A950_b0(); break;
        case 0x9CF8:
            switch (g_current_bank) {
                case 0: func_9CF8_b0(); break;
                case 4: func_9CF8_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D1F:
            func_9D1F_b0(); break;
        case 0x9D30:
            func_9D30_b0(); break;
        case 0x9D1C:
            func_9D1C_b0(); break;
        case 0x9D33:
            func_9D33_b0(); break;
        case 0x9D44:
            func_9D44_b0(); break;
        case 0x9D55:
            func_9D55_b0(); break;
        case 0x9D66:
            func_9D66_b0(); break;
        case 0x8988:
            func_8988_b0(); break;
        case 0x80C5:
            func_80C5_b0(); break;
        case 0x9877:
            func_9877_b0(); break;
        case 0x9C92:
            func_9C92_b0(); break;
        case 0x9DC1:
            func_9DC1_b0(); break;
        case 0x9E38:
            func_9E38_b0(); break;
        case 0x9E46:
            func_9E46_b0(); break;
        case 0x802E:
            func_802E_b0(); break;
        case 0x9882:
            func_9882_b0(); break;
        case 0x9502:
            func_9502_b0(); break;
        case 0x9501:
            func_9501_b0(); break;
        case 0xB12B:
            func_B12B_b0(); break;
        case 0xB0CB:
            func_B0CB_b0(); break;
        case 0xB2FC:
            switch (g_current_bank) {
                case 0: func_B2FC_b0(); break;
                case 1: func_B2FC_b1(); break;
                case 2: func_B2FC_b2(); break;
                case 3: func_B2FC_b3(); break;
                case 4: func_B2FC_b4(); break;
                case 5: func_B2FC_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB3B4:
            switch (g_current_bank) {
                case 0: func_B3B4_b0(); break;
                case 1: func_B3B4_b1(); break;
                case 2: func_B3B4_b2(); break;
                case 3: func_B3B4_b3(); break;
                case 4: func_B3B4_b4(); break;
                case 5: func_B3B4_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB26B:
            switch (g_current_bank) {
                case 0: func_B26B_b0(); break;
                case 1: func_B26B_b1(); break;
                case 2: func_B26B_b2(); break;
                case 3: func_B26B_b3(); break;
                case 4: func_B26B_b4(); break;
                case 5: func_B26B_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D77:
            func_9D77_b0(); break;
        case 0xAAFC:
            func_AAFC_b0(); break;
        case 0x99C8:
            func_99C8_b1(); break;
        case 0x9ABD:
            func_9ABD_b1(); break;
        case 0x9AE2:
            func_9AE2_b1(); break;
        case 0x9AA8:
            func_9AA8_b1(); break;
        case 0x9AC6:
            func_9AC6_b1(); break;
        case 0x9A8F:
            func_9A8F_b1(); break;
        case 0x9ADA:
            func_9ADA_b1(); break;
        case 0x9CA8:
            func_9CA8_b1(); break;
        case 0x9C96:
            func_9C96_b1(); break;
        case 0x9CCC:
            func_9CCC_b1(); break;
        case 0x99CC:
            func_99CC_b1(); break;
        case 0x802D:
            switch (g_current_bank) {
                case 1: func_802D_b1(); break;
                case 4: func_802D_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8030:
            switch (g_current_bank) {
                case 1: func_8030_b1(); break;
                case 4: func_8030_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9BD2:
            func_9BD2_b1(); break;
        case 0x9C2A:
            func_9C2A_b1(); break;
        case 0xFF03:
            func_FF03(); break;
        case 0x8736:
            switch (g_current_bank) {
                case 1: func_8736_b1(); break;
                case 2: func_8736_b2(); break;
                case 3: func_8736_b3(); break;
                case 4: func_8736_b4(); break;
                case 5: func_8736_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8790:
            switch (g_current_bank) {
                case 1: func_8790_b1(); break;
                case 2: func_8790_b2(); break;
                case 3: func_8790_b3(); break;
                case 4: func_8790_b4(); break;
                case 5: func_8790_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x87A4:
            switch (g_current_bank) {
                case 1: func_87A4_b1(); break;
                case 2: func_87A4_b2(); break;
                case 3: func_87A4_b3(); break;
                case 4: func_87A4_b4(); break;
                case 5: func_87A4_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9EC1:
            func_9EC1_b1(); break;
        case 0x9EC3:
            func_9EC3_b1(); break;
        case 0x9EC5:
            func_9EC5_b1(); break;
        case 0x86FB:
            switch (g_current_bank) {
                case 7: func_C6FB(); break;
                case 1: func_86FB_b1(); break;
                case 2: func_86FB_b2(); break;
                case 3: func_86FB_b3(); break;
                case 5: func_86FB_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8700:
            switch (g_current_bank) {
                case 1: func_8700_b1(); break;
                case 2: func_8700_b2(); break;
                case 3: func_8700_b3(); break;
                case 5: func_8700_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA2F9:
            func_A2F9_b1(); break;
        case 0x9CF2:
            switch (g_current_bank) {
                case 1: func_9CF2_b1(); break;
                case 4: func_9CF2_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x91BB:
            func_91BB_b1(); break;
        case 0xA03C:
            func_A03C_b1(); break;
        case 0xA059:
            switch (g_current_bank) {
                case 1: func_A059_b1(); break;
                case 2: func_A059_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBF9A:
            func_BF9A_b1(); break;
        case 0xB6FC:
            func_B6FC_b1(); break;
        case 0xA08B:
            func_A08B_b1(); break;
        case 0xDF73:
            func_DF73(); break;
        case 0xFE22:
            func_FE22(); break;
        case 0xC360:
            func_C360(); break;
        case 0x9D27:
            func_9D27_b2(); break;
        case 0x9033:
            func_9033_b2(); break;
        case 0x9C66:
            func_9C66_b2(); break;
        case 0x9B5A:
            func_9B5A_b2(); break;
        case 0xB10A:
            func_B10A_b2(); break;
        case 0xAFE9:
            func_AFE9_b2(); break;
        case 0xF0C0:
            func_F0C0(); break;
        case 0xB0C0:
            func_B0C0_b2(); break;
        case 0x9800:
            func_9800_b2(); break;
        case 0xC090:
            func_C090(); break;
        case 0x943D:
            func_943D_b3(); break;
        case 0x9A06:
            func_9A06_b3(); break;
        case 0x99D1:
            func_99D1_b3(); break;
        case 0x9AF9:
            func_9AF9_b3(); break;
        case 0x8F3C:
            func_8F3C_b3(); break;
        case 0x9078:
            func_9078_b3(); break;
        case 0xB080:
            switch (g_current_bank) {
                case 7: func_F080(); break;
                case 3: func_B080_b3(); break;
                case 4: func_B080_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9224:
            switch (g_current_bank) {
                case 3: func_9224_b3(); break;
                case 4: func_9224_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA018:
            switch (g_current_bank) {
                case 3: func_A018_b3(); break;
                case 4: func_A018_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9254:
            switch (g_current_bank) {
                case 3: func_9254_b3(); break;
                case 4: func_9254_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB009:
            func_B009_b3(); break;
        case 0xB083:
            func_B083_b3(); break;
        case 0x80C1:
            func_80C1_b3(); break;
        case 0xA7AD:
            func_A7AD_b3(); break;
        case 0xA7B1:
            func_A7B1_b3(); break;
        case 0xA7BF:
            func_A7BF_b3(); break;
        case 0xA369:
            func_A369_b3(); break;
        case 0xA36B:
            func_A36B_b3(); break;
        case 0xA36D:
            func_A36D_b3(); break;
        case 0xA36F:
            func_A36F_b3(); break;
        case 0xB4F8:
            switch (g_current_bank) {
                case 7: func_F4F8(); break;
                case 3: func_B4F8_b3(); break;
                case 5: func_B4F8_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9F08:
            func_9F08_b3(); break;
        case 0x9F0F:
            func_9F0F_b3(); break;
        case 0xBAAD:
            func_BAAD_b3(); break;
        case 0x8D19:
            func_8D19_b3(); break;
        case 0xA007:
            func_A007_b3(); break;
        case 0xA0A0:
            func_A0A0_b3(); break;
        case 0x8800:
            func_8800_b3(); break;
        case 0xD160:
            func_D160(); break;
        case 0xA4E8:
            func_A4E8_b3(); break;
        case 0x9CD0:
            func_9CD0_b4(); break;
        case 0x9CEC:
            func_9CEC_b4(); break;
        case 0x9CEE:
            func_9CEE_b4(); break;
        case 0x9CF0:
            func_9CF0_b4(); break;
        case 0x9CF4:
            func_9CF4_b4(); break;
        case 0x9CF6:
            func_9CF6_b4(); break;
        case 0x9CFA:
            func_9CFA_b4(); break;
        case 0x9CFC:
            func_9CFC_b4(); break;
        case 0x9CFE:
            func_9CFE_b4(); break;
        case 0x9D00:
            func_9D00_b4(); break;
        case 0x9D02:
            func_9D02_b4(); break;
        case 0xAFBE:
            switch (g_current_bank) {
                case 7: func_EFBE(); break;
                case 4: func_AFBE_b4(); break;
                case 5: func_AFBE_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAFD7:
            switch (g_current_bank) {
                case 4: func_AFD7_b4(); break;
                case 5: func_AFD7_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xFC0C:
            func_FC0C(); break;
        case 0x991E:
            func_991E_b4(); break;
        case 0x992C:
            func_992C_b4(); break;
        case 0x9A0C:
            func_9A0C_b4(); break;
        case 0x9A31:
            func_9A31_b4(); break;
        case 0x99F7:
            func_99F7_b4(); break;
        case 0x9A15:
            func_9A15_b4(); break;
        case 0x9A29:
            func_9A29_b4(); break;
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
        case 0x9AE4:
            func_9AE4_b4(); break;
        case 0x9B3C:
            func_9B3C_b4(); break;
        case 0x9C06:
            func_9C06_b4(); break;
        case 0x93C4:
            func_93C4_b4(); break;
        case 0x9F41:
            func_9F41_b4(); break;
        case 0x9F5E:
            func_9F5E_b4(); break;
        case 0xBB22:
            switch (g_current_bank) {
                case 4: func_BB22_b4(); break;
                case 5: func_BB22_b5(); break;
                case 3: func_BB22_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8104:
            switch (g_current_bank) {
                case 4: func_8104_b4(); break;
                case 5: func_8104_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8551:
            func_8551_b4(); break;
        case 0x967E:
            func_967E_b5(); break;
        case 0x9540:
            func_9540_b5(); break;
        case 0x808D:
            func_808D_b5(); break;
        case 0x9B05:
            func_9B05_b5(); break;
        case 0xAB17:
            func_AB17_b5(); break;
        case 0x8EF4:
            func_8EF4_b5(); break;
        case 0x8EFC:
            func_8EFC_b5(); break;
        case 0xBE28:
            func_BE28_b6(); break;
        case 0x9F6D:
            func_9F6D_b6(); break;
        case 0x9F75:
            func_9F75_b6(); break;
        case 0x916D:
            func_916D_b6(); break;
        case 0x918C:
            func_918C_b6(); break;
        case 0xAA7C:
            func_AA7C_b6(); break;
        case 0xAA8E:
            func_AA8E_b6(); break;
        case 0xAA8B:
            func_AA8B_b6(); break;
        case 0xFC3F:
            func_FC3F(); break;
        case 0x8810:
            func_8810_b6(); break;
        case 0x80C7:
            func_80C7_b6(); break;
        case 0x8040:
            func_8040_b6(); break;
        case 0x8468:
            func_8468_b6(); break;
        case 0xC200:
            func_C200(); break;
        case 0xA508:
            func_A508_b6(); break;
        case 0xD748:
            func_D748(); break;
        case 0x87F6:
            func_87F6_b6(); break;
        case 0x87FD:
            func_87FD_b6(); break;
        case 0xB251:
            func_B251_b6(); break;
        case 0x9D5D:
            func_9D5D_b6(); break;
        case 0x9D65:
            func_9D65_b6(); break;
        case 0x9D8B:
            func_9D8B_b0(); break;
        case 0x9DAD:
            func_9DAD_b0(); break;
        case 0xB0C2:
            func_B0C2_b0(); break;
        case 0xFE1D:
            func_FE1D(); break;
        case 0xC33D:
            func_C33D(); break;
        case 0x906F:
            func_906F_b3(); break;
        case 0xAFC4:
            func_AFC4_b3(); break;
        case 0xAF53:
            switch (g_current_bank) {
                case 4: func_AF53_b4(); break;
                case 5: func_AF53_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x915E:
            func_915E_b6(); break;
        case 0xEAF4:
            func_EAF4(); break;
        case 0x8180:
            func_8180_b0(); break;
        case 0x8382:
            func_8382_b0(); break;
        case 0x8584:
            func_8584_b0(); break;
        case 0x8786:
            func_8786_b0(); break;
        case 0x9380:
            func_9380_b0(); break;
        case 0xA080:
            func_A080_b0(); break;
        case 0xA370:
            func_A370_b0(); break;
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
        case 0xB51E:
            switch (g_current_bank) {
                case 7: func_F51E(); break;
                case 0: func_B51E_b0(); break;
                case 1: func_B51E_b1(); break;
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
        case 0xB9E5:
            switch (g_current_bank) {
                case 0: func_B9E5_b0(); break;
                case 1: func_B9E5_b1(); break;
                case 2: func_B9E5_b2(); break;
                case 3: func_B9E5_b3(); break;
                case 4: func_B9E5_b4(); break;
                case 5: func_B9E5_b5(); break;
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
        case 0xBCAA:
            func_BCAA_b0(); break;
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
        case 0x87CB:
            func_87CB_b1(); break;
        case 0x87DD:
            func_87DD_b1(); break;
        case 0x87F0:
            func_87F0_b1(); break;
        case 0x882C:
            func_882C_b1(); break;
        case 0x883E:
            func_883E_b1(); break;
        case 0x8863:
            func_8863_b1(); break;
        case 0x8874:
            func_8874_b1(); break;
        case 0x888F:
            func_888F_b1(); break;
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
        case 0x88D9:
            func_88D9_b1(); break;
        case 0x88EE:
            func_88EE_b1(); break;
        case 0x88F8:
            func_88F8_b1(); break;
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
        case 0x89E6:
            func_89E6_b1(); break;
        case 0x89FB:
            func_89FB_b1(); break;
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
        case 0x8AF3:
            func_8AF3_b1(); break;
        case 0x8B03:
            func_8B03_b1(); break;
        case 0x99B8:
            func_99B8_b1(); break;
        case 0x99FA:
            func_99FA_b1(); break;
        case 0x9A44:
            func_9A44_b1(); break;
        case 0x9A49:
            func_9A49_b1(); break;
        case 0x9A4C:
            func_9A4C_b1(); break;
        case 0xB546:
            func_B546_b1(); break;
        case 0xB55B:
            func_B55B_b1(); break;
        case 0xB569:
            func_B569_b1(); break;
        case 0xB59E:
            func_B59E_b1(); break;
        case 0xB5AB:
            func_B5AB_b1(); break;
        case 0xB5B3:
            func_B5B3_b1(); break;
        case 0xB5BA:
            func_B5BA_b1(); break;
        case 0xB5C7:
            func_B5C7_b1(); break;
        case 0xB5C8:
            func_B5C8_b1(); break;
        case 0xB626:
            func_B626_b1(); break;
        case 0xB680:
            func_B680_b1(); break;
        case 0xB6A3:
            func_B6A3_b1(); break;
        case 0xB6C5:
            func_B6C5_b1(); break;
        case 0xB6D1:
            func_B6D1_b1(); break;
        case 0xB6E0:
            func_B6E0_b1(); break;
        case 0xB6FD:
            func_B6FD_b1(); break;
        case 0xB703:
            func_B703_b1(); break;
        case 0xB717:
            func_B717_b1(); break;
        case 0xB71D:
            func_B71D_b1(); break;
        case 0xB733:
            func_B733_b1(); break;
        case 0xB740:
            func_B740_b1(); break;
        case 0xB746:
            func_B746_b1(); break;
        case 0xB765:
            func_B765_b1(); break;
        case 0xB76C:
            func_B76C_b1(); break;
        case 0xB77F:
            func_B77F_b1(); break;
        case 0xB7AA:
            func_B7AA_b1(); break;
        case 0xB7B1:
            func_B7B1_b1(); break;
        case 0xB7D6:
            func_B7D6_b1(); break;
        case 0xB7DC:
            func_B7DC_b1(); break;
        case 0xB7FB:
            func_B7FB_b1(); break;
        case 0xB809:
            func_B809_b1(); break;
        case 0xB817:
            func_B817_b1(); break;
        case 0xB81F:
            func_B81F_b1(); break;
        case 0xB83E:
            func_B83E_b1(); break;
        case 0xB864:
            func_B864_b1(); break;
        case 0xB87F:
            func_B87F_b1(); break;
        case 0xB8A8:
            func_B8A8_b1(); break;
        case 0xB8AF:
            func_B8AF_b1(); break;
        case 0xB8D7:
            func_B8D7_b1(); break;
        case 0xB8E1:
            func_B8E1_b1(); break;
        case 0xB902:
            func_B902_b1(); break;
        case 0xB91D:
            func_B91D_b1(); break;
        case 0xB951:
            func_B951_b1(); break;
        case 0xB970:
            func_B970_b1(); break;
        case 0xBCA7:
            func_BCA7_b1(); break;
        case 0xBCAD:
            func_BCAD_b1(); break;
        case 0xBCB0:
            func_BCB0_b1(); break;
        case 0xBCB3:
            func_BCB3_b1(); break;
        case 0x871C:
            func_871C_b5(); break;
        case 0xB568:
            switch (g_current_bank) {
                case 0: func_B568_b0(); break;
                case 1: func_B568_b1(); break;
                case 2: func_B568_b2(); break;
                case 3: func_B568_b3(); break;
                case 4: func_B568_b4(); break;
                case 5: func_B568_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
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
        case 0x876D:
            func_876D_b1(); break;
        case 0xFE21:
            func_FE21(); break;
        case 0xB594:
            func_B594_b1(); break;
        case 0xB6C4:
            func_B6C4_b1(); break;
        case 0xB769:
            func_B769_b1(); break;
        case 0xB8D6:
            func_B8D6_b1(); break;
        default:
            nes_log_dispatch_miss(addr);
            return 0;
    }
    return 1;
}
