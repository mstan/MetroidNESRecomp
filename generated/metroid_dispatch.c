/* AUTO-GENERATED dispatch table. DO NOT EDIT. */
#include "nes_runtime.h"
extern int g_current_bank;

/* Interpreter-fallback precondition flag (see runner/src/interp.c). */
int g_recomp_push_all_jsr = 1;

/* Forward declarations */
void func_FFB0(void); /* ROMFIXED_RESET */
void func_C0D9(void);
void func_C0DA(void);
void func_C01A(void); /* Startup */
void func_C0CC(void);
void func_C0D0(void);
void func_C01F(void);
void func_C0C9(void);
void func_C03E(void);
void func_C03F(void);
void func_C075(void);
void func_C0AA(void);
void func_C0A8(void);
void func_C081(void);
void func_C06B(void);
void func_C057(void); /* Startup_exitLoop_A */
void func_C0A3(void);
void func_C095(void);
void func_C0A1(void);
void func_C04D(void);
void func_C037(void);
void func_C060(void); /* Startup_loop_C */
void func_C048(void); /* Startup_loop_A */
void func_C08A(void);
void func_C01C(void);
void func_9A07_b0(void); /* NMIScreenWrite */
void func_9A07_b4(void);
void func_9A07_b6(void);
void func_C1E0(void); /* CheckPaletteWrite */
void func_C20E(void); /* PreparePPUProcess */
void func_C200(void);
void func_C1E6(void);
void func_C2CA(void); /* CheckVRAMStructBufferWrite */
void func_C2D0(void);
void func_C29A(void); /* WriteScroll */
void func_C2A4(void);
void func_C215(void); /* ReadJoyPads */
void func_C21F(void); /* ReadOnePad */
void func_C24D(void); /* ReadOnePad_endIf_A */
void func_C221(void);
void func_B3B4_b0(void); /* SoundEngine */
void func_B3B4_b1(void); /* SoundEngine */
void func_B3B4_b2(void); /* SoundEngine */
void func_B3B4_b3(void); /* SoundEngine */
void func_B3B4_b4(void); /* SoundEngine */
void func_B3B4_b5(void); /* SoundEngine */
void func_B3B4_b6(void);
void func_C158(void); /* ClearNameTables */
void func_C175(void); /* ClearNameTable */
void func_C184(void);
void func_C1A3(void); /* EraseAllSprites */
void func_C1BB(void); /* Exit101 */
void func_C1A5(void);
void func_C4DE(void); /* CheckBankSwitch */
void func_C50F(void);
void func_C266(void); /* UpdateTimer */
void func_C114(void); /* GoMainRoutine */
void func_C155(void); /* IncrementRoutine */
void func_C121(void);
void func_C0CB(void); /* WaitNMIEnd */
void func_C000(void); /* RandomNumbers */
void func_C001(void);
void func_C004(void); /* RandomNumbers_loop */
void func_C00B(void);
void func_C002(void);
void func_C013(void);
void func_C010(void);
void func_C00E(void);
void func_C009(void);
void func_C007(void);
void func_C00D(void);
void func_C006(void);
void func_C0BC(void); /* MainLoop */
void func_9C45_b0(void); /* LoadCredits */
void func_8000_b1(void); /* CommonJump_UpdateEnemyCommon */
void func_99DC_b2(void); /* CrawlerReorientSprite_BANK2 */
void func_9F54_b0(void); /* EndGamePaletteWrite */
void func_9F54_b2(void);
void func_9F54_b3(void);
void func_9F54_b4(void);
void func_9F54_b5(void);
void func_9F54_b6(void);
void func_8AC7_b0(void); /* StarPaletteSwitch */
void func_8AC7_b2(void);
void func_8AC7_b3(void);
void func_8AC7_b4(void);
void func_8AC7_b5(void);
void func_8AC7_b6(void);
void func_C4D9(void); /* PrepPPUMirror */
void func_B399_b0(void); /* SoundEngine_GameIsPaused */
void func_B31B_b0(void); /* RunSFXNoiseInitRoutine */
void func_B322_b0(void); /* RunSFXNoiseContRoutine */
void func_B34B_b0(void); /* RunSFXMultiInitRoutine */
void func_B33D_b0(void); /* RunSFXTriInitRoutine */
void func_B344_b0(void); /* RunSFXTriContRoutine */
void func_BC36_b0(void); /* RunMusicLoopRoutine */
void func_BC3D_b0(void); /* RunMusicInitRoutine */
void func_B404_b0(void); /* InitializeSoundAddresses */
void func_B41D_b0(void); /* ClearMusicAndSFXAddresses */
void func_B422_b0(void);
void func_B43E_b0(void); /* ClearSounds */
void func_B40E_b0(void); /* ClearSpecialAddresses */
void func_B399_b1(void); /* SoundEngine_GameIsPaused */
void func_B31B_b1(void); /* RunSFXNoiseInitRoutine */
void func_B34B_b1(void); /* RunSFXMultiInitRoutine */
void func_B33D_b1(void); /* RunSFXTriInitRoutine */
void func_BC36_b1(void); /* RunMusicLoopRoutine */
void func_B404_b1(void); /* InitializeSoundAddresses */
void func_B41D_b1(void); /* ClearMusicAndSFXAddresses */
void func_B422_b1(void);
void func_B43E_b1(void); /* ClearSounds */
void func_B40E_b1(void); /* ClearSpecialAddresses */
void func_B399_b2(void); /* SoundEngine_GameIsPaused */
void func_B31B_b2(void); /* RunSFXNoiseInitRoutine */
void func_B329_b2(void); /* RunSFXSQ1InitRoutine */
void func_B34B_b2(void); /* RunSFXMultiInitRoutine */
void func_B33D_b2(void); /* RunSFXTriInitRoutine */
void func_BC36_b2(void); /* RunMusicLoopRoutine */
void func_B404_b2(void); /* InitializeSoundAddresses */
void func_B41D_b2(void); /* ClearMusicAndSFXAddresses */
void func_B422_b2(void);
void func_B43E_b2(void); /* ClearSounds */
void func_B40E_b2(void); /* ClearSpecialAddresses */
void func_B399_b3(void); /* SoundEngine_GameIsPaused */
void func_B31B_b3(void); /* RunSFXNoiseInitRoutine */
void func_B329_b3(void); /* RunSFXSQ1InitRoutine */
void func_B34B_b3(void); /* RunSFXMultiInitRoutine */
void func_B33D_b3(void); /* RunSFXTriInitRoutine */
void func_BC36_b3(void); /* RunMusicLoopRoutine */
void func_B404_b3(void); /* InitializeSoundAddresses */
void func_B41D_b3(void); /* ClearMusicAndSFXAddresses */
void func_B422_b3(void);
void func_B43E_b3(void); /* ClearSounds */
void func_B40E_b3(void); /* ClearSpecialAddresses */
void func_B399_b4(void); /* SoundEngine_GameIsPaused */
void func_B31B_b4(void); /* RunSFXNoiseInitRoutine */
void func_B329_b4(void); /* RunSFXSQ1InitRoutine */
void func_B34B_b4(void); /* RunSFXMultiInitRoutine */
void func_B33D_b4(void); /* RunSFXTriInitRoutine */
void func_BC36_b4(void); /* RunMusicLoopRoutine */
void func_B404_b4(void); /* InitializeSoundAddresses */
void func_B41D_b4(void); /* ClearMusicAndSFXAddresses */
void func_B422_b4(void);
void func_B43E_b4(void); /* ClearSounds */
void func_B40E_b4(void); /* ClearSpecialAddresses */
void func_B399_b5(void); /* SoundEngine_GameIsPaused */
void func_B31B_b5(void); /* RunSFXNoiseInitRoutine */
void func_B329_b5(void); /* RunSFXSQ1InitRoutine */
void func_B34B_b5(void); /* RunSFXMultiInitRoutine */
void func_B33D_b5(void); /* RunSFXTriInitRoutine */
void func_BC36_b5(void); /* RunMusicLoopRoutine */
void func_B404_b5(void); /* InitializeSoundAddresses */
void func_B41D_b5(void); /* ClearMusicAndSFXAddresses */
void func_B422_b5(void);
void func_B43E_b5(void); /* ClearSounds */
void func_B40E_b5(void); /* ClearSpecialAddresses */
void func_988A_b0(void); /* DecSpriteYCoord */
void func_988A_b1(void);
void func_988A_b2(void);
void func_988A_b3(void);
void func_988A_b4(void);
void func_988A_b5(void); /* PipeBugAIRoutine_BANK5_checkIfGoForwards */
void func_988A_b6(void);
void func_C510(void); /* GoBankInit */
void func_C515(void);
void func_C511(void);
void func_C512(void);
void func_8000_b0(void); /* MainTitleRoutine */
void func_806E_b0(void); /* IncTitleRoutine0A */
void func_8068_b0(void); /* ClearSpareMem */
void func_8000_b2(void); /* CommonJump_UpdateEnemyCommon */
void func_8000_b3(void); /* CommonJump_UpdateEnemyCommon */
void func_8000_b4(void); /* CommonJump_UpdateEnemyCommon */
void func_8000_b5(void); /* CommonJump_UpdateEnemyCommon */
void func_8000_b6(void); /* GFX_Samus */
void func_CB92(void); /* PauseMusic */
void func_C801(void); /* AreaInit */
void func_C821(void);
void func_C82F(void);
void func_C830(void);
void func_C8A9(void);
void func_C8AB(void);
void func_C807(void);
void func_C832(void);
void func_C85B(void);
void func_C877(void);
void func_C803(void);
void func_C805(void);
void func_C834(void);
void func_C811(void);
void func_C88D(void);
void func_C84C(void);
void func_C895(void);
void func_C809(void);
void func_C838(void);
void func_C80D(void);
void func_C836(void);
void func_C80F(void);
void func_C81F(void);
void func_C892(void);
void func_C885(void);
void func_C8D1(void); /* SamusInit */
void func_C908(void);
void func_C920(void);
void func_C8F5(void);
void func_C902(void);
void func_C90A(void);
void func_C904(void);
void func_C906(void);
void func_C90C(void);
void func_C900(void);
void func_C8DE(void);
void func_C914(void);
void func_C911(void);
void func_C8E9(void);
void func_C925(void);
void func_C91B(void);
void func_C8EC(void);
void func_C916(void);
void func_C919(void);
void func_C90E(void);
void func_C91D(void);
void func_C8D7(void);
void func_C8FA(void);
void func_F410(void); /* UpdateEnemyCommon */
void func_800F_b2(void); /* CommonJump_InitEnAnimIndex */
void func_C37E(void); /* PrepPPUPaletteString */
void func_C2B3(void); /* AddYToPtr02 */
void func_C2E4(void); /* VRAMStructWriteData */
void func_C30C(void); /* VRAMStructWrite */
void func_C2FF(void);
void func_C2FD(void); /* VRAMStructWriteData_endIf_A */
void func_C2F0(void);
void func_C4B6(void); /* SetPPUMirror */
void func_B38F_b0(void); /* PauseSFX */
void func_B368_b0(void); /* LoadSFXData */
void func_B4BD_b0(void); /* GetSoundRoutine */
void func_B4EE_b0(void); /* GetSoundRoutine_RTS */
void func_B4EA_b0(void); /* GetSoundRoutine_RestoreSFXFlags */
void func_BC53_b0(void); /* FindMusicInitIndex */
void func_BC64_b0(void); /* MusicInitIndexAdd8 */
void func_B337_b0(void); /* RunSoundRoutine */
void func_B38F_b1(void); /* PauseSFX */
void func_B368_b1(void); /* LoadSFXData */
void func_B4BD_b1(void); /* GetSoundRoutine */
void func_BC53_b1(void); /* FindMusicInitIndex */
void func_BC64_b1(void); /* MusicInitIndexAdd8 */
void func_B337_b1(void); /* RunSoundRoutine */
void func_B38F_b2(void); /* PauseSFX */
void func_B368_b2(void); /* LoadSFXData */
void func_B4BD_b2(void); /* GetSoundRoutine */
void func_B4EA_b2(void); /* GetSoundRoutine_RestoreSFXFlags */
void func_BC53_b2(void); /* FindMusicInitIndex */
void func_BC64_b2(void); /* MusicInitIndexAdd8 */
void func_B337_b2(void); /* RunSoundRoutine */
void func_B38F_b3(void); /* PauseSFX */
void func_B368_b3(void); /* LoadSFXData */
void func_B4BD_b3(void); /* GetSoundRoutine */
void func_B4EA_b3(void); /* GetSoundRoutine_RestoreSFXFlags */
void func_BC53_b3(void); /* FindMusicInitIndex */
void func_BC64_b3(void); /* MusicInitIndexAdd8 */
void func_B337_b3(void); /* RunSoundRoutine */
void func_B38F_b4(void); /* PauseSFX */
void func_B368_b4(void); /* LoadSFXData */
void func_B4BD_b4(void); /* GetSoundRoutine */
void func_B4EA_b4(void); /* GetSoundRoutine_RestoreSFXFlags */
void func_BC53_b4(void); /* FindMusicInitIndex */
void func_BC64_b4(void); /* MusicInitIndexAdd8 */
void func_B337_b4(void); /* RunSoundRoutine */
void func_B38F_b5(void); /* PauseSFX */
void func_B368_b5(void); /* LoadSFXData */
void func_B4BD_b5(void); /* GetSoundRoutine */
void func_B4EA_b5(void); /* GetSoundRoutine_RestoreSFXFlags */
void func_BC53_b5(void); /* FindMusicInitIndex */
void func_BC64_b5(void); /* MusicInitIndexAdd8 */
void func_B337_b5(void); /* RunSoundRoutine */
void func_8036_b2(void); /* CommonJump_EnemyGetDeltaY_UsingAcceleration */
void func_8039_b2(void); /* CommonJump_EnemyGetDeltaX_UsingAcceleration */
void func_9A42_b2(void); /* StoreEnemyPositionToTemp__BANK2 */
void func_8027_b2(void); /* CommonJump_ApplySpeedToPosition */
void func_9A52_b2(void); /* LoadEnemyPositionFromTemp__BANK2 */
void func_8003_b2(void); /* CommonJump_UpdateEnemyCommon_noMove */
void func_99B7_b3(void); /* LoadEnemySlotIDIntoY */
void func_9A10_b3(void); /* GetMetroidRepelSpeed */
void func_99C3_b3(void); /* ClearMetroidSpeed */
void func_99D1_b3(void); /* ClearRinkaAcceleration */
void func_99BD_b3(void); /* LoadEnemySlotIDIntoX */
void func_95C6_b3(void); /* TwosComplement_ */
void func_99E4_b3(void); /* StoreSamusPositionToTemp */
void func_8027_b3(void); /* CommonJump_ApplySpeedToPosition */
void func_99F4_b3(void); /* LoadEnemyPositionFromTemp_ */
void func_9967_b3(void); /* MetroidAIRoutine_BANK3_metroidOnSamus */
void func_99AE_b3(void); /* ClearCurrentMetroidLatch */
void func_99B1_b3(void); /* ClearMetroidLatch */
void func_8042_b3(void); /* CommonJump_SubtractHealth */
void func_97E2_b3(void); /* UpdateEnemyCommon_Decide_BANK3 */
void func_9923_b4(void);
void func_9942_b4(void);
void func_990A_b4(void);
void func_9967_b4(void);
void func_8003_b4(void); /* CommonJump_UpdateEnemyCommon_noMove */
void func_8006_b4(void); /* CommonJump_UpdateEnemyCommon_noMoveNoAnim */
void func_801B_b4(void); /* CommonJump_EnemyFlipAfterDisplacement */
void func_9905_b4(void); /* UpdateEnemyCommon_Decide_BANK4 */
void func_991E_b4(void); /* Sidehopper_Common_BANK4 */
void func_801E_b4(void); /* CommonJump_InitEnActiveAnimIndex_NoInitOffset */
void func_992C_b4(void); /* CommonEnemyStub2_BANK4 */
void func_8009_b4(void); /* CommonJump_CrawlerAIRoutine_ShouldCrawlerMove */
void func_9A31_b4(void); /* JumpByRTSToMovementRoutine_BANK4 */
void func_99F7_b4(void); /* CrawlerInsideCornerCheck_BANK4 */
void func_9A0C_b4(void); /* CrawlerFlipDirection_BANK4 */
void func_9A15_b4(void); /* CrawlerOutsideCornerCheck_BANK4 */
void func_800C_b4(void); /* CommonJump_UpdateEnemyAnim */
void func_800F_b4(void); /* CommonJump_InitEnAnimIndex */
void func_99DE_b4(void); /* CrawlerReorientSprite_BANK4 */
void func_9A29_b4(void); /* CrawlerOutsideCornerGetNextOrientation_BANK4 */
void func_8036_b4(void); /* CommonJump_EnemyGetDeltaY_UsingAcceleration */
void func_8039_b4(void); /* CommonJump_EnemyGetDeltaX_UsingAcceleration */
void func_9BBC_b4(void); /* StoreEnemyPositionToTemp__BANK4 */
void func_8027_b4(void); /* CommonJump_ApplySpeedToPosition */
void func_9B2F_b4(void); /* KraidUpdateAllProjectiles_BANK4 */
void func_9BE0_b4(void); /* KraidTryToLaunchLint_BANK4 */
void func_9C19_b4(void); /* KraidTryToLaunchNail_BANK4 */
void func_9930_b4(void); /* CommonEnemyStub_BANK4 */
void func_802D_b4(void); /* CommonJump_EnemyGetDeltaY */
void func_8030_b4(void); /* CommonJump_EnemyGetDeltaX */
void func_8033_b4(void); /* CommonJump_EnemyBGCollideOrApplySpeed */
void func_9AE4_b4(void); /* KraidLintAIRoutine_BANK4 */
void func_9B3C_b4(void); /* KraidUpdateProjectile_BANK4 */
void func_9BAA_b4(void); /* LoadEnemyPositionFromTemp__BANK4 */
void func_802A_b4(void); /* CommonJump_0E */
void func_9CEB_b4(void);
void func_FF03(void);
void func_9E69_b4(void);
void func_9EBB_b4(void);
void func_A320_b4(void);
void func_A375_b4(void);
void func_A381_b4(void);
void func_A3D9_b4(void);
void func_A52C_b4(void);
void func_A6A2_b4(void);
void func_8801_b4(void);
void func_A767_b4(void);
void func_A7B0_b4(void);
void func_A818_b4(void);
void func_A814_b4(void);
void func_A85A_b4(void);
void func_A8C7_b4(void); /* Room1D_BANK4 */
void func_A8C4_b4(void);
void func_8036_b5(void); /* CommonJump_EnemyGetDeltaY_UsingAcceleration */
void func_8039_b5(void); /* CommonJump_EnemyGetDeltaX_UsingAcceleration */
void func_9AE1_b5(void); /* StoreEnemyPositionToTemp__BANK5 */
void func_8027_b5(void); /* CommonJump_ApplySpeedToPosition */
void func_9AF1_b5(void); /* LoadEnemyPositionFromTemp__BANK5 */
void func_8003_b5(void); /* CommonJump_UpdateEnemyCommon_noMove */
void func_C1BC(void); /* RemoveIntroSprites */
void func_8071_b0(void); /* InitializeAfterReset */
void func_80AC_b0(void); /* InitializeAfterReset_loop_B */
void func_809E_b0(void); /* InitializeAfterReset_loop_A */
void func_80D0_b0(void); /* DrawIntroBackground */
void func_80F9_b0(void); /* FadeInDelay */
void func_812C_b0(void); /* METROIDFadeIn */
void func_8141_b0(void);
void func_8142_b0(void); /* LoadFlashTimer */
void func_8109_b0(void); /* FlashEffect */
void func_814D_b0(void); /* METROIDSparkle */
void func_8163_b0(void); /* METROIDFadeOut */
void func_81D1_b0(void); /* MoreCrosshairs */
void func_822E_b0(void); /* ChangeIntroNameTable */
void func_8243_b0(void); /* MessageFadeIn */
void func_8263_b0(void); /* MessageFadeOut */
void func_8283_b0(void); /* DelayIntroReplay */
void func_82A3_b0(void); /* PrepIntroRestart */
void func_82ED_b0(void); /* TitleScreenOff */
void func_82F3_b0(void); /* TitleRoutineReturn13 */
void func_90BA_b0(void); /* StartContinueScreen15 */
void func_90D7_b0(void); /* ChooseStartContinue */
void func_911A_b0(void); /* LoadPasswordScreen */
void func_9147_b0(void); /* EnterPassword */
void func_9180_b0(void); /* EnterPassword_endIf_B */
void func_91FB_b0(void); /* CheckBackspace */
void func_91BF_b0(void); /* LoadRowAndColumn */
void func_9359_b0(void); /* DisplayPassword */
void func_9394_b0(void); /* WaitForSTART */
void func_939E_b0(void); /* GameOver */
void func_9AA7_b0(void); /* EndGame */
void func_C4AA(void); /* SetTimer */
void func_C4B3(void);
void func_C4B7(void);
void func_C4D0(void);
void func_C4D1(void);
void func_C4C8(void);
void func_C4C9(void);
void func_C4BD(void);
void func_CA18(void); /* IsEngineRunning */
void func_CA20(void);
void func_CA2B(void);
void func_CA2D(void);
void func_C439(void); /* ScreenOff */
void func_C8BB(void); /* DestroyEnemies */
void func_C8C4(void); /* DestroyEnemies_endIf_A */
void func_C8CA(void);
void func_C8C8(void);
void func_C8C9(void);
void func_C8BE(void); /* DestroyEnemies_loop */
void func_C8CE(void);
void func_C8BD(void);
void func_C8B0(void); /* CopyAreaPointers */
void func_E720(void); /* GetRoomNum */
void func_E730(void);
void func_E731(void);
void func_EA2B(void); /* SetupRoom */
void func_EA2D(void);
void func_EA4C(void);
void func_C447(void); /* ScreenOn */
void func_CBFD(void); /* IntroMusic */
void func_E1F1(void); /* ScrollDoor */
void func_E221(void);
void func_CB29(void); /* UpdateWorld */
void func_CB6A(void); /* UpdateWorld_loop */
void func_C92A(void);
void func_CB8E(void); /* SilenceMusic */
void func_CBE2(void); /* SFX_SamusDie */
void func_CBBA(void);
void func_CC09(void); /* SetMusicInitFlag */
void func_CBD0(void);
void func_CB73(void); /* SelectSamusPalette */
void func_CB74(void);
void func_CB87(void);
void func_CB84(void);
void func_C9C3(void); /* PauseMode_RTS */
void func_DE47(void); /* AnimDrawObject */
void func_DE4A(void); /* ObjDrawFrame */
void func_DE4C(void);
void func_DEA9(void);
void func_DE99(void);
void func_DE60(void);
void func_DE51(void);
void func_DE6A(void);
void func_DE9F(void);
void func_DED5(void);
void func_E094(void); /* UpdateEnemyAnim */
void func_E0E8(void);
void func_E0AA(void);
void func_E0A2(void);
void func_E0F1(void);
void func_E0D1(void);
void func_E0CA(void);
void func_E0B1(void);
void func_E0AD(void);
void func_E0C7(void); /* DisplayBar_loop */
void func_E09D(void);
void func_E099(void);
void func_8058_b0(void);
void func_8058_b1(void); /* EnemyMove */
void func_8058_b2(void); /* EnemyMove */
void func_8058_b3(void); /* EnemyMove */
void func_8058_b4(void); /* EnemyMove */
void func_8058_b5(void); /* EnemyMove */
void func_8058_b6(void);
void func_DD8B(void); /* DrawEnemy */
void func_C2A8(void); /* AddYToPtr00 */
void func_C2A9(void);
void func_C318(void); /* SetPPUInc */
void func_C319(void);
void func_C321(void); /* SetPPUInc_endIf_A */
void func_B4EA_b1(void); /* GetSoundRoutine_RestoreSFXFlags */
void func_B4EE_b1(void); /* GetSoundRoutine_RTS */
void func_833F_b2(void); /* EnemyGetDeltaY_UsingAcceleration */
void func_8395_b2(void); /* EnemyGetDeltaX_UsingAcceleration */
void func_FD8F(void); /* ApplySpeedToPosition */
void func_FDBF(void); /* ApplySpeedToPosition_endIf_A */
void func_FDDD(void); /* ApplySpeedToPosition_endIf_F */
void func_FDA6(void);
void func_FDAA(void);
void func_FDCA(void);
void func_FDB1(void); /* ApplySpeedToPosition_else_A */
void func_FDC6(void);
void func_FDA0(void);
void func_FDBD(void); /* ApplySpeedToPosition_endIf_C */
void func_F438(void); /* UpdateEnemyCommon_noMove */
void func_9B1B_b3(void); /* Adiv16_ */
void func_CE92(void); /* SubtractHealth */
void func_CED0(void);
void func_CEE2(void);
void func_CECD(void);
void func_8003_b3(void); /* CommonJump_UpdateEnemyCommon_noMove */
void func_8006_b3(void); /* CommonJump_UpdateEnemyCommon_noMoveNoAnim */
void func_F416(void); /* UpdateEnemyCommon_noMoveNoAnim */
void func_833F_b4(void); /* EnemyGetDeltaY_UsingAcceleration */
void func_8395_b4(void); /* EnemyGetDeltaX_UsingAcceleration */
void func_8244_b4(void); /* EnemyGetDeltaY */
void func_82C3_b4(void); /* EnemyGetDeltaY_RepeatPreviousUntilFailure_endIf_A */
void func_825B_b4(void); /* EnemyGetDeltaY_ReadByte */
void func_82F4_b4(void); /* EnemyGetDeltaY_RepeatPreviousUntilNoDeltaYThenTriggerResting_endIf_A */
void func_8258_b4(void); /* EnemyGetDeltaY_ReadByteAtIndex */
void func_82A2_b4(void); /* EnemyGetDeltaY_SignMagSpeed_endIf_B */
void func_8296_b4(void); /* EnemyGetDeltaY_SignMagSpeed_fromByte */
void func_8318_b4(void); /* EnemyGetDeltaX */
void func_832F_b4(void); /* EnemyGetDeltaX_SignMagSpeed_fromByte */
void func_FA1E(void); /* EnemyBGCollideOrApplySpeed */
void func_FA20(void);
void func_FA2D(void);
void func_9CD0_b4(void);
void func_A9E0_b4(void);
void func_A9DC_b4(void);
void func_AA4B_b4(void);
void func_AB69_b4(void);
void func_AB6B_b4(void);
void func_AB6D_b4(void);
void func_AB73_b4(void);
void func_AB75_b4(void); /* Structure17_BANK4 */
void func_AB7E_b4(void);
void func_AB81_b4(void);
void func_AB84_b4(void);
void func_AD21_b4(void);
void func_AD04_b4(void);
void func_C328(void); /* WriteVRAMString */
void func_C36E(void); /* NextPPUByte */
void func_C36F(void);
void func_AD95_b4(void);
void func_FF11(void);
void func_ADFC_b4(void);
void func_AE0D_b4(void);
void func_AEE7_b4(void);
void func_B03F_b4(void); /* SongKraidSQ1 */
void func_B037_b4(void);
void func_B084_b4(void);
void func_B0B8_b4(void);
void func_B0BC_b4(void);
void func_B09B_b4(void);
void func_B920_b4(void);
void func_B151_b4(void);
void func_B144_b4(void);
void func_B154_b4(void);
void func_B19B_b4(void);
void func_B1A8_b4(void);
void func_9830_b4(void);
void func_B1E0_b4(void);
void func_80C7_b4(void); /* EnemyIfMoveFailedUp_facingHorizontal */
void func_B2C5_b4(void);
void func_B374_b4(void); /* LoadSFXData_SQ2 */
void func_B36C_b4(void); /* LoadSFXData_Tri */
void func_B370_b4(void); /* LoadSFXData_Noise */
void func_B493_b4(void); /* UpdateContFlags */
void func_B452_b4(void); /* InitSFXData */
void func_B463_b4(void);
void func_B472_b4(void); /* InitSFXData_Tri */
void func_B4A9_b4(void); /* IncrementSFXFrame */
void func_B58F_b4(void); /* EndNoiseSFX */
void func_B587_b4(void); /* GotoInitSFXData */
void func_B4A2_b4(void); /* ClearCurrentSoundFlagsAndContFlags */
void func_B5A5_b4(void); /* MultiSFXInit */
void func_B62C_b4(void); /* WriteSQ1SQ2PeriodLow */
void func_B5CD_b4(void); /* EndMultiSFX */
void func_B6F2_b4(void); /* EndSQ1SFX */
void func_B896_b4(void); /* EndTriSFX */
void func_B98C_b4(void); /* DecreaseSFXTriPeriod */
void func_B869_b4(void); /* WriteSFXTriPeriod */
void func_B978_b4(void); /* IncreaseSFXTriPeriod */
void func_B9A0_b4(void); /* DivideSFXTriPeriod */
void func_B8C3_b4(void); /* RndTriPeriods */
void func_833F_b5(void); /* EnemyGetDeltaY_UsingAcceleration */
void func_8395_b5(void); /* EnemyGetDeltaX_UsingAcceleration */
void func_98AE_b0(void); /* LoadStarSprites */
void func_8A8C_b0(void); /* CrossExplodeDataTbl_end_2 */
void func_87AB_b0(void); /* LoadSparkleData */
void func_87CF_b0(void); /* UpdateSparkleSprites */
void func_87D6_b0(void); /* DoTwoSparkleUpdates */
void func_87D9_b0(void); /* SparkleUpdate */
void func_8897_b0(void); /* InitCrossMissiles */
void func_8B5F_b0(void); /* DoFadeOut */
void func_8AA7_b0(void); /* FlashIntroScreen */
void func_88FE_b0(void); /* UpdateCrossMissiles */
void func_8963_b0(void); /* UpdateCrossMissile */
void func_8976_b0(void); /* UpdateCrossExplode */
void func_909F_b0(void); /* ClearAll */
void func_9449_b0(void); /* PreparePPUProcess_ */
void func_C487(void); /* NMIOn */
void func_C494(void); /* WaitTimer */
void func_C4A5(void);
void func_932B_b0(void); /* InitializeStats */
void func_C6D6(void); /* InitPasswordFontGFX */
void func_940B_b0(void); /* DisplayInputCharacters */
void func_90D1_b0(void); /* TurnOnDisplay */
void func_8C5E_b0(void); /* CheckPassword */
void func_9450_b0(void); /* PrepareWriteVRAMStringRAM */
void func_9324_b0(void);
void func_8C7A_b0(void); /* CalculatePassword */
void func_93C6_b0(void); /* PasswordToScreen */
void func_C42C(void); /* WaitNMIPass */
void func_9EAA_b0(void); /* LoadEndStarSprites */
void func_9AD5_b0(void); /* LoadEndGFX */
void func_9B1C_b0(void); /* ShowEndSamus */
void func_9B34_b0(void); /* EndSamusFlash */
void func_9B93_b0(void); /* SamusWave */
void func_9BCD_b0(void); /* EndFadeOut */
void func_9BFC_b0(void); /* RollCredits */
void func_9A39_b0(void); /* Restart */
void func_9F20_b0(void);
void func_9AA0_b0(void);
void func_C4A7(void); /* SetMainRoutine */
void func_D1EE(void); /* FireWeaponProjectile */
void func_D1F0(void);
void func_C434(void); /* ClearNMIStat */
void func_95AB_b0(void);
void func_95AB_b2(void);
void func_95AB_b3(void); /* GotoClearAllMetroidLatches */
void func_95AB_b4(void);
void func_95AB_b5(void);
void func_95AB_b6(void);
void func_EC93(void); /* OnNameTable0 */
void func_EA2A(void);
void func_EA13(void); /* AttribTableWrite */
void func_EC9B(void); /* DeleteOffscreenRoomSprites */
void func_ED98(void); /* ScanForItems */
void func_EAC0(void); /* AddToRoomPtr */
void func_EA05(void); /* SelectRoomRAM */
void func_EA10(void);
void func_EFF8(void); /* InitTables */
void func_EAAA(void); /* DrawRoom */
void func_FCAA(void);
void func_FCE5(void);
void func_FCCA(void);
void func_FCC4(void);
void func_FCE0(void);
void func_FCA7(void);
void func_FCB9(void);
void func_FC92(void);
void func_FC8C(void);
void func_CBE8(void); /* SetSoundInitFlag */
void func_E1F0(void);
void func_E6D2(void); /* ScrollRight */
void func_E6E8(void);
void func_E6EF(void); /* ScrollRight_noNewRoom */
void func_E6F9(void);
void func_E6E6(void);
void func_E6FD(void); /* ScrollRight_cantScroll */
void func_E6E4(void); /* ScrollRight_currentlyScrollingRight */
void func_E6ED(void);
void func_E204(void);
void func_E6A7(void); /* ScrollLeft */
void func_E6C2(void);
void func_E6D0(void); /* ScrollLeft_cantScroll */
void func_E6B1(void);
void func_E519(void); /* ScrollDown */
void func_E520(void);
void func_E21B(void); /* VerticalRoomCentered */
void func_E4F1(void); /* ScrollUp */
void func_E501(void); /* ScrollUp_currentlyScrollingUp */
void func_E518(void);
void func_C2C6(void); /* Amul8 */
void func_E252(void); /* ToggleScroll */
void func_F345(void); /* UpdateAllEnemies */
void func_D4BF(void); /* UpdateWeaponProjectiles */
void func_CC0D(void); /* UpdateSamus */
void func_95C3_b0(void);
void func_95C3_b2(void); /* AreaRoutine */
void func_95C3_b3(void); /* AreaRoutine */
void func_95C3_b4(void); /* AreaRoutine */
void func_95C3_b5(void); /* AreaRoutine */
void func_95C3_b6(void);
void func_D7B3(void); /* UpdateElevator */
void func_D9D4(void); /* UpdateAllStatues */
void func_FA9D(void); /* UpdateAllEnemyExplosions */
void func_FC65(void); /* UpdateAllMellows */
void func_F93B(void); /* UpdateAllEnProjectiles */
void func_FBDD(void); /* UpdateAllSkreeProjectiles */
void func_8B13_b0(void);
void func_8B13_b1(void); /* SamusEnterDoor */
void func_8B74_b1(void); /* SamusInDoor */
void func_8B53_b1(void); /* SamusEnterDoor_endIf_A_noDex */
void func_8B13_b2(void); /* SamusEnterDoor */
void func_8B74_b2(void); /* SamusInDoor */
void func_8B53_b2(void); /* SamusEnterDoor_endIf_A_noDex */
void func_8B13_b3(void); /* SamusEnterDoor */
void func_8B74_b3(void); /* SamusInDoor */
void func_8B53_b3(void); /* SamusEnterDoor_endIf_A_noDex */
void func_8B13_b4(void); /* SamusEnterDoor */
void func_8B74_b4(void); /* SamusInDoor */
void func_8B53_b4(void); /* SamusEnterDoor_endIf_A_noDex */
void func_8B13_b5(void); /* SamusEnterDoor */
void func_8B74_b5(void); /* SamusInDoor */
void func_8B53_b5(void); /* SamusEnterDoor_endIf_A_noDex */
void func_8B13_b6(void);
void func_8B79_b0(void); /* ProcessUniqueItems */
void func_8B79_b2(void); /* UpdateAllDoors */
void func_8B79_b3(void); /* UpdateAllDoors */
void func_8B79_b4(void); /* UpdateAllDoors */
void func_8B79_b5(void); /* UpdateAllDoors */
void func_8B79_b6(void);
void func_FE1B(void); /* UpdateAllTileBlasts */
void func_FE29(void);
void func_FE4A(void);
void func_FE4D(void);
void func_FE20(void);
void func_F034(void); /* CollisionDetection */
void func_E0C1(void); /* DisplayBar */
void func_FAF2(void); /* UpdateAllPipeBugHoles */
void func_DB17(void); /* CheckMissileToggle */
void func_DB20(void);
void func_DB37(void); /* UpdateAllPowerUps */
void func_DB42(void); /* UpdateOnePowerUp */
void func_DB4D(void);
void func_DBD0(void);
void func_DC20(void);
void func_DBB9(void);
void func_DB8D(void);
void func_DBE3(void);
void func_FDE3(void); /* UpdateTourianItems */
void func_FE03(void);
void func_FDE6(void);
void func_FE02(void);
void func_FE14(void);
void func_FE00(void);
void func_E193(void); /* Xplus4 */
void func_DE3D(void); /* ReduceYRadius */
void func_DE3E(void);
void func_DF19(void); /* DrawSpriteObject */
void func_E173(void); /* SPRWriteDigit */
void func_E198(void); /* HexToDec */
void func_E17B(void); /* AddOneTank */
void func_E194(void);
void func_8001_b0(void);
void func_8244_b1(void); /* EnemyGetDeltaY */
void func_8296_b1(void); /* EnemyGetDeltaY_SignMagSpeed_fromByte */
void func_82C3_b1(void); /* EnemyGetDeltaY_RepeatPreviousUntilFailure_endIf_A */
void func_825B_b1(void); /* EnemyGetDeltaY_ReadByte */
void func_82F4_b1(void); /* EnemyGetDeltaY_RepeatPreviousUntilNoDeltaYThenTriggerResting_endIf_A */
void func_8258_b1(void); /* EnemyGetDeltaY_ReadByteAtIndex */
void func_82A2_b1(void); /* EnemyGetDeltaY_SignMagSpeed_endIf_B */
void func_C3D4(void); /* TwosComplement */
void func_83F5_b1(void); /* EnemyMoveOnePixelUp */
void func_8400_b1(void);
void func_80B8_b1(void); /* EnemyIfMoveFailedUp */
void func_844B_b1(void); /* EnemyMoveOnePixelDown */
void func_80FB_b1(void); /* EnemyIfMoveFailedDown */
void func_812F_b1(void); /* EnemyIfMoveFailedDown_abortLoop */
void func_8318_b1(void); /* EnemyGetDeltaX */
void func_832F_b1(void); /* EnemyGetDeltaX_SignMagSpeed_fromByte */
void func_84A7_b1(void); /* EnemyMoveOnePixelLeft */
void func_84FD_b1(void); /* EnemyMoveOnePixelLeft_RTS */
void func_816E_b1(void); /* EnemyIfMoveFailedLeft */
void func_81AC_b1(void); /* EnemyIfMoveFailedLeft_abortLoop */
void func_84FE_b1(void); /* EnemyMoveOnePixelRight */
void func_8500_b1(void);
void func_8134_b1(void); /* EnemyIfMoveFailedRight */
void func_8169_b1(void); /* EnemyIfMoveFailedRight_abortLoop */
void func_8244_b2(void); /* EnemyGetDeltaY */
void func_8296_b2(void); /* EnemyGetDeltaY_SignMagSpeed_fromByte */
void func_82C3_b2(void); /* EnemyGetDeltaY_RepeatPreviousUntilFailure_endIf_A */
void func_825B_b2(void); /* EnemyGetDeltaY_ReadByte */
void func_82F4_b2(void); /* EnemyGetDeltaY_RepeatPreviousUntilNoDeltaYThenTriggerResting_endIf_A */
void func_8258_b2(void); /* EnemyGetDeltaY_ReadByteAtIndex */
void func_82A2_b2(void); /* EnemyGetDeltaY_SignMagSpeed_endIf_B */
void func_83F5_b2(void); /* EnemyMoveOnePixelUp */
void func_8400_b2(void);
void func_80B8_b2(void); /* EnemyIfMoveFailedUp */
void func_80F6_b2(void); /* EnemyIfMoveFailedUp_abortLoop */
void func_844B_b2(void); /* EnemyMoveOnePixelDown */
void func_80FB_b2(void); /* EnemyIfMoveFailedDown */
void func_812F_b2(void); /* EnemyIfMoveFailedDown_abortLoop */
void func_8318_b2(void); /* EnemyGetDeltaX */
void func_832F_b2(void); /* EnemyGetDeltaX_SignMagSpeed_fromByte */
void func_84A7_b2(void); /* EnemyMoveOnePixelLeft */
void func_84FD_b2(void); /* EnemyMoveOnePixelLeft_RTS */
void func_816E_b2(void); /* EnemyIfMoveFailedLeft */
void func_81AC_b2(void); /* EnemyIfMoveFailedLeft_abortLoop */
void func_84FE_b2(void); /* EnemyMoveOnePixelRight */
void func_8500_b2(void);
void func_8134_b2(void); /* EnemyIfMoveFailedRight */
void func_8169_b2(void); /* EnemyIfMoveFailedRight_abortLoop */
void func_8244_b3(void); /* EnemyGetDeltaY */
void func_8296_b3(void); /* EnemyGetDeltaY_SignMagSpeed_fromByte */
void func_82C3_b3(void); /* EnemyGetDeltaY_RepeatPreviousUntilFailure_endIf_A */
void func_825B_b3(void); /* EnemyGetDeltaY_ReadByte */
void func_82F4_b3(void); /* EnemyGetDeltaY_RepeatPreviousUntilNoDeltaYThenTriggerResting_endIf_A */
void func_8258_b3(void); /* EnemyGetDeltaY_ReadByteAtIndex */
void func_82A2_b3(void); /* EnemyGetDeltaY_SignMagSpeed_endIf_B */
void func_83F5_b3(void); /* EnemyMoveOnePixelUp */
void func_8400_b3(void);
void func_80B8_b3(void); /* EnemyIfMoveFailedUp */
void func_80F6_b3(void); /* EnemyIfMoveFailedUp_abortLoop */
void func_844B_b3(void); /* EnemyMoveOnePixelDown */
void func_80FB_b3(void); /* EnemyIfMoveFailedDown */
void func_812F_b3(void); /* EnemyIfMoveFailedDown_abortLoop */
void func_8318_b3(void); /* EnemyGetDeltaX */
void func_832F_b3(void); /* EnemyGetDeltaX_SignMagSpeed_fromByte */
void func_84A7_b3(void); /* EnemyMoveOnePixelLeft */
void func_84FD_b3(void); /* EnemyMoveOnePixelLeft_RTS */
void func_816E_b3(void); /* EnemyIfMoveFailedLeft */
void func_81AC_b3(void); /* EnemyIfMoveFailedLeft_abortLoop */
void func_84FE_b3(void); /* EnemyMoveOnePixelRight */
void func_8500_b3(void);
void func_8134_b3(void); /* EnemyIfMoveFailedRight */
void func_8169_b3(void); /* EnemyIfMoveFailedRight_abortLoop */
void func_83F5_b4(void); /* EnemyMoveOnePixelUp */
void func_8400_b4(void);
void func_80B8_b4(void); /* EnemyIfMoveFailedUp */
void func_80F6_b4(void); /* EnemyIfMoveFailedUp_abortLoop */
void func_844B_b4(void); /* EnemyMoveOnePixelDown */
void func_80FB_b4(void); /* EnemyIfMoveFailedDown */
void func_812F_b4(void); /* EnemyIfMoveFailedDown_abortLoop */
void func_84A7_b4(void); /* EnemyMoveOnePixelLeft */
void func_84FD_b4(void); /* EnemyMoveOnePixelLeft_RTS */
void func_816E_b4(void); /* EnemyIfMoveFailedLeft */
void func_81AC_b4(void); /* EnemyIfMoveFailedLeft_abortLoop */
void func_84FE_b4(void); /* EnemyMoveOnePixelRight */
void func_8500_b4(void);
void func_8134_b4(void); /* EnemyIfMoveFailedRight */
void func_8169_b4(void); /* EnemyIfMoveFailedRight_abortLoop */
void func_8244_b5(void); /* EnemyGetDeltaY */
void func_8296_b5(void); /* EnemyGetDeltaY_SignMagSpeed_fromByte */
void func_82C3_b5(void); /* EnemyGetDeltaY_RepeatPreviousUntilFailure_endIf_A */
void func_825B_b5(void); /* EnemyGetDeltaY_ReadByte */
void func_82F4_b5(void); /* EnemyGetDeltaY_RepeatPreviousUntilNoDeltaYThenTriggerResting_endIf_A */
void func_8258_b5(void); /* EnemyGetDeltaY_ReadByteAtIndex */
void func_82A2_b5(void); /* EnemyGetDeltaY_SignMagSpeed_endIf_B */
void func_83F5_b5(void); /* EnemyMoveOnePixelUp */
void func_8400_b5(void);
void func_80B8_b5(void); /* EnemyIfMoveFailedUp */
void func_80F6_b5(void); /* EnemyIfMoveFailedUp_abortLoop */
void func_844B_b5(void); /* EnemyMoveOnePixelDown */
void func_80FB_b5(void); /* EnemyIfMoveFailedDown */
void func_812F_b5(void); /* EnemyIfMoveFailedDown_abortLoop */
void func_8318_b5(void); /* EnemyGetDeltaX */
void func_832F_b5(void); /* EnemyGetDeltaX_SignMagSpeed_fromByte */
void func_84A7_b5(void); /* EnemyMoveOnePixelLeft */
void func_84FD_b5(void); /* EnemyMoveOnePixelLeft_RTS */
void func_816E_b5(void); /* EnemyIfMoveFailedLeft */
void func_81AC_b5(void); /* EnemyIfMoveFailedLeft_abortLoop */
void func_84FE_b5(void); /* EnemyMoveOnePixelRight */
void func_8500_b5(void);
void func_8134_b5(void); /* EnemyIfMoveFailedRight */
void func_8169_b5(void); /* EnemyIfMoveFailedRight_abortLoop */
void func_DCF5(void); /* EnemyCompleteDeath */
void func_DE20(void);
void func_DD20(void);
void func_DE19(void);
void func_DE05(void);
void func_DE02(void);
void func_DD07(void);
void func_DE29(void);
void func_DDD1(void);
void func_DE08(void);
void func_DE10(void);
void func_DE0A(void);
void func_DE00(void);
void func_DD00(void);
void func_DD4D(void);
void func_DD4A(void); /* RTS_X137 */
void func_DD30(void);
void func_DD10(void);
void func_DDB0(void); /* DrawEnemy_NotBlank */
void func_DE07(void);
void func_DE13(void);
void func_DEDE(void);
void func_E449(void); /* NegateTemp00Temp01 */
void func_E44C(void);
void func_CE84(void); /* IsSamusDead */
void func_CE91(void); /* Exit3 */
void func_F323(void); /* ClearHealthChange */
void func_C3FB(void); /* Base10Subtract */
void func_C3DA(void); /* Base10Add */
void func_C3E6(void);
void func_F844(void); /* GetEnemyTypeTimes2PlusFacingDirection */
void func_F693(void); /* ClearEnAnimDelay */
void func_F690(void); /* SetEnAnimIndex */
void func_80B0_b4(void); /* LoadTableAt977B */
void func_822B_b4(void); /* LoadEnemyMovementPtr */
void func_8312_b4(void); /* EnemyGetDeltaY_RepeatPreviousUntilNoDeltaYThenTriggerResting_endIf_B */
void func_C2BE(void); /* Adiv32 */
void func_C2BF(void); /* Adiv16 */
void func_C2C1(void);
void func_E770(void); /* EnemyCheckMoveUp */
void func_E77B(void); /* EnemyCheckMoveDown */
void func_81B1_b4(void); /* EnemyTriggerResting_AndClearEnAccelY */
void func_FA7D(void); /* GetEnemyRoomRAMPtr */
void func_E792(void); /* StoreEnemyPositionToTemp */
void func_FA18(void); /* RemoveEnemy */
void func_FB7B(void); /* InitEnemyFacingDirectionAxisAndDelay */
void func_F85A(void); /* InitEnemyForceSpeedTowardsSamusDelayAndHealth */
void func_AB7B_b4(void);
void func_BA41_b4(void); /* UpdateVolumeEnvelope */
void func_BA08_b4(void); /* LoadMusicSQ1SQ2Periods */
void func_B3F0_b4(void); /* EndOrLoopMusic */
void func_BA37_b4(void); /* UpdateAllVolumeEnvelopes */
void func_B9F3_b4(void); /* ResetVolumeIndex */
void func_BB1C_b4(void); /* LoadNextMusicChannelInstr_Continued */
void func_BADC_b4(void); /* LoadNextMusicChannelInstr */
void func_BBDE_b4(void); /* MusicChannelInstr_SongNoteNoise */
void func_BBB7_b4(void); /* UpdateMusicTriLinearCount */
void func_BAB3_b4(void); /* IncrementToNextMusicChannel */
void func_BBA8_b4(void); /* SetMusicInstrDelayToLength */
void func_BBCD_b4(void); /* UpdateMusicTriLinearCount_setToNoteLength */
void func_BB37_b4(void); /* LoadNextMusicChannelInstr_Continued_ReturnFromUpdateMusicTriLinearCount */
void func_BAA5_b4(void); /* UpdateAllMusicChannels */
void func_BCAA_b4(void); /* Music00Init */
void func_BCA4_b4(void); /* Music01Init */
void func_BC9A_b4(void); /* Music02Init */
void func_BC96_b4(void); /* Music03Init */
void func_BC89_b4(void); /* Music04Init */
void func_BC9E_b4(void); /* Music05Init */
void func_B9E4_b4(void); /* SetVolumeAndDisableSweep */
void func_BF19_b4(void); /* InitializeMusic */
void func_BD77_b4(void);
void func_BD9F_b4(void);
void func_BE08_b4(void); /* SongPowerUpTri */
void func_BE3E_b4(void); /* SongFadeInSQ1 */
void func_E0FF(void);
void func_BEB0_b4(void);
void func_AEAC_b4(void);
void func_AEAE_b4(void);
void func_BF1B_b4(void);
void func_BF0B_b4(void);
void func_BF67_b4(void);
void func_AFFE_b4(void);
void func_B06C_b4(void);
void func_B17E_b4(void);
void func_983F_b4(void); /* EnemyMovement0F_R_BANK4 */
void func_98E7_b4(void); /* EnProjectileMovement2_BANK4 */
void func_98F7_b4(void);
void func_80C1_b4(void); /* EnemyIfMoveFailedUp_bounce */
void func_856B_b4(void); /* XorEnData05 */
void func_881A_b0(void); /* DoSparkleSpriteCoord */
void func_887B_b0(void); /* WriteIntroSprite */
void func_981E_b0(void); /* UpdateCrossMissileCoords */
void func_C47D(void); /* VBOffAndHorzWrite */
void func_C481(void);
void func_C7AB(void); /* LoadGFX */
void func_8F60_b0(void); /* ConsolidatePassword */
void func_8DDE_b0(void); /* ValidatePassword */
void func_92D4_b0(void); /* InitializeGame */
void func_8E17_b0(void); /* PasswordChecksumAndScramble */
void func_8E6C_b0(void); /* LoadPasswordChar */
void func_93F9_b0(void); /* LoadPasswordCharToVRAMStringRAM */
void func_C5D0(void); /* InitEndGFX */
void func_9C9A_b0(void); /* LoadEndSamusSprites */
void func_CAF5(void); /* ChooseEnding */
void func_9C7F_b0(void); /* LoadWaveSprites */
void func_C43F(void); /* WaitNMIPass_ */
void func_9A38_b0(void); /* Exit100 */
void func_CF88(void); /* SamusRun_CheckHorzMovementMidair */
void func_CFB7(void); /* StopHorzMovement */
void func_CFAE(void);
void func_CF91(void);
void func_CFBD(void); /* StopHorzMovement_RTS */
void func_CDBF(void); /* SamusRun_SetAnim */
void func_CDCD(void);
void func_CB96(void); /* SFX_SamusWalk */
void func_CD6B(void); /* SetSamusData_3FrameAnimDelay */
void func_CD6D(void); /* SetSamusData */
void func_CDD7(void); /* SamusRun_Fire */
void func_CDFA(void); /* CheckHealthStatus */
void func_CE03(void);
void func_CE20(void);
void func_CDFF(void);
void func_CE19(void);
void func_E269(void); /* LavaAndMoveCheck */
void func_E320(void);
void func_E321(void);
void func_E26C(void);
void func_E284(void);
void func_E2D0(void);
void func_E7A2(void); /* ObjectCheckMoveUp */
void func_E7AA(void);
void func_E8BE(void); /* StoreObjectPositionToTemp */
void func_E8C3(void);
void func_E8C8(void);
void func_D638(void); /* LoadObjectPositionFromTemp */
void func_D144(void);
void func_D150(void); /* CheckBombLaunch */
void func_D16A(void);
void func_CFBE(void); /* SetSamusJumpPntUp */
void func_D275(void); /* FireWeaponProjectileUpwards */
void func_D2D1(void);
void func_D2B9(void);
void func_D2BA(void);
void func_F1EE(void); /* Yplus16 */
void func_D1F7(void); /* SearchOpenWeaponProjectileSlot */
void func_D2EB(void); /* InitBullet */
void func_D2EC(void);
void func_D359(void); /* CheckHorizontalWaveBulletFire */
void func_D38E(void); /* CheckIceBulletFire */
void func_D315(void); /* CheckHorizontalMissileLaunch */
void func_D306(void); /* PlaceBulletAtArmCannon */
void func_CBB4(void); /* SFX_BulletFire */
void func_CF6E(void); /* SetSamusNextAnim */
void func_D48C(void); /* Door_DeleteOffscreenEnemies */
void func_D4A9(void);
void func_ED65(void); /* Doors_RemoveIfOffScreen */
void func_CC07(void); /* TourianMusic */
void func_E249(void); /* ToggleSamusHi */
void func_E24C(void);
void func_D411(void);
void func_D47E(void);
void func_CBCA(void); /* SFX_ScrewAttack */
void func_CBAC(void); /* SFX_SamusJump */
void func_CBEF(void); /* SFX_SamusBall */
void func_A315_b3(void); /* ClearAllMetroidLatches */
void func_E5E2(void); /* WritePPUAttribTbl */
void func_EA26(void); /* RoomFinished */
void func_FFA9(void);
void func_FFC9(void);
void func_FFB1(void);
void func_FFBD(void);
void func_FFBA(void); /* ROMFIXED_RESET_WaitForVBlank1 */
void func_ED51(void); /* UpdateDoorData */
void func_EB85(void); /* GetNameTableAtScrollDir */
void func_F1F4(void); /* Xminus16 */
void func_ED5B(void); /* EraseScrollBlockOnNameTableAtScrollDir */
void func_ED7A(void); /* WeaponProjectile_RemoveIfOffScreen */
void func_ED8C(void); /* PowerUp_RemoveIfOffScreen */
void func_95AE_b0(void);
void func_95AE_b2(void);
void func_95AE_b3(void); /* GotoDeleteOffscreenRoomSprites_Tourian */
void func_95AE_b4(void);
void func_95AE_b5(void);
void func_95AE_b6(void);
void func_ED97(void); /* Exit11 */
void func_EDA0(void); /* ScanForItems_loop_scanItemY */
void func_EF09(void); /* AddToPtr00 */
void func_EF00(void); /* ScanForItems_AnotherItem */
void func_EDC3(void); /* ScanForItems_loop_scanItemX */
void func_EDF8(void); /* SpawnMapEnemy */
void func_EDFE(void); /* SpawnPowerUp */
void func_EE63(void); /* SpawnMellows */
void func_EEA1(void); /* SpawnElevator */
void func_EEA6(void); /* SpawnCannon */
void func_EEAE(void); /* SpawnMotherBrain */
void func_EECA(void); /* SpawnZebetite */
void func_EEEE(void); /* SpawnRinkaSpawner */
void func_EEF4(void); /* SpawnDoor */
void func_EEFA(void); /* SpawnPalette */
void func_EB0C(void); /* GetEnemyData */
void func_EDD6(void); /* ChooseSpawningRoutine */
void func_F01C(void); /* FillRoomRAM */
void func_F01D(void);
void func_EAF4(void); /* EndOfRoom */
void func_EA60(void); /* DrawObject */
void func_FB88(void); /* EnemyFlipAfterDisplacement */
void func_FBCA(void); /* InitEnActiveAnimIndex_NoInitOffset */
void func_F852(void); /* CrawlerAIRoutine_ShouldCrawlerMove */
void func_EB6E(void);
void func_FB87(void); /* Exit13 */
void func_F870(void); /* SpawnEnProjectile */
void func_F86F(void); /* InitEnemyForceSpeedTowardsSamusDelayAndHealth_RTS */
void func_EFD0(void);
void func_F1D1(void);
void func_F3B0(void);
void func_F01E(void);
void func_F010(void);
void func_F004(void);
void func_F4A9(void);
void func_F02B(void);
void func_F5D1(void);
void func_F6D1(void);
void func_F089(void);
void func_F029(void); /* FillRoomRAM_loop_inner */
void func_F8B0(void);
void func_F9D0(void);
void func_F9D1(void);
void func_EDD1(void);
void func_EAF6(void);
void func_F024(void);
void func_F025(void);
void func_FA10(void);
void func_F8C4(void);
void func_F8C5(void);
void func_F06A(void);
void func_EED1(void);
void func_FC86(void);
void func_FC29(void);
void func_F8D1(void);
void func_F49E(void);
void func_FA84(void);
void func_F00B(void);
void func_F068(void);
void func_F6F0(void);
void func_F6F1(void);
void func_EE06(void);
void func_F4D1(void);
void func_EFBE(void);
void func_F0BD(void);
void func_F0AB(void);
void func_FC66(void);
void func_F221(void); /* CheckCollisionOfXSlotAndYSlot_endIf_A */
void func_F009(void);
void func_EE20(void);
void func_F027(void);
void func_F020(void);
void func_F021(void);
void func_F064(void);
void func_F04D(void);
void func_EFF1(void);
void func_ED38(void);
void func_F0E8(void);
void func_F7A0(void);
void func_F7A1(void);
void func_F321(void);
void func_F7B1(void);
void func_FB20(void);
void func_F211(void);
void func_F5AA(void);
void func_EBBE(void);
void func_F1EF(void);
void func_F720(void);
void func_FAA9(void); /* UpdateAllEnemyExplosions_endIf */
void func_F809(void);
void func_FC05(void);
void func_F079(void);
void func_F04F(void);
void func_EED5(void);
void func_EFC0(void);
void func_FC20(void);
void func_F84C(void);
void func_EB4C(void);
void func_F7E9(void);
void func_F9B0(void);
void func_EBF1(void);
void func_F014(void);
void func_F015(void);
void func_F4BE(void);
void func_F421(void);
void func_F1F5(void);
void func_EE03(void);
void func_FC10(void);
void func_F05B(void);
void func_F060(void);
void func_F0FD(void);
void func_F018(void); /* ATDataTable */
void func_F019(void);
void func_F0FF(void);
void func_EFB0(void);
void func_F7BD(void);
void func_F7C9(void); /* UpdateEnemy_Resting_TryBecomingActive_RTS */
void func_F7CA(void); /* UpdateEnemy_Resting_TryBecomingActive_becomeActive */
void func_F0C5(void);
void func_F080(void);
void func_F869(void);
void func_F4BC(void);
void func_F8DF(void);
void func_F89E(void);
void func_F9BC(void);
void func_ECB1(void);
void func_FBB1(void);
void func_FBF0(void);
void func_F04B(void);
void func_F0ED(void);
void func_F059(void);
void func_ED04(void);
void func_EFCA(void);
void func_EFE0(void);
void func_FC87(void);
void func_F829(void);
void func_F82A(void);
void func_F2C9(void); /* RTS_X290 */
void func_F0F2(void);
void func_EE51(void);
void func_ECD0(void);
void func_ECD1(void);
void func_F5BD(void);
void func_F5FD(void);
void func_F6FD(void);
void func_EAC1(void);
void func_F821(void);
void func_F0A6(void);
void func_EF0A(void);
void func_EB29(void);
void func_EB4E(void);
void func_EB25(void);
void func_EB93(void);
void func_ED52(void);
void func_FB5E(void);
void func_EF10(void);
void func_ED8D(void);
void func_EE30(void);
void func_F051(void);
void func_F611(void); /* ExplodeEnemy */
void func_EA8D(void);
void func_EA8E(void);
void func_EF9A(void); /* TilePosTable */
void func_EFF4(void); /* AttribMaskTable */
void func_F3FC(void);
void func_F0B0(void);
void func_F4B9(void);
void func_ED20(void);
void func_ED21(void);
void func_FBB9(void); /* InitEnResetAnimIndex */
void func_F1E1(void);
void func_F1DA(void);
void func_F1E8(void);
void func_F1CC(void);
void func_F679(void);
void func_F67A(void);
void func_F579(void);
void func_F22C(void);
void func_F257(void);
void func_EBD0(void); /* SpawnDoorRoutine_if_B */
void func_F06C(void);
void func_ECC9(void);
void func_F00D(void);
void func_F082(void);
void func_F4FF(void);
void func_F99D(void);
void func_F07F(void);
void func_FBAA(void);
void func_EFA0(void);
void func_F1F0(void);
void func_F499(void);
void func_F49A(void);
void func_F92B(void);
void func_F899(void);
void func_F89A(void);
void func_F0F7(void);
void func_EABA(void);
void func_EBBA(void);
void func_EC21(void);
void func_FC5D(void); /* SkreeProjectileSpeedTable */
void func_FB01(void);
void func_FBFF(void);
void func_ED10(void);
void func_F605(void);
void func_F18E(void);
void func_F017(void);
void func_ED18(void);
void func_FB75(void);
void func_FC81(void); /* UpdateAllMellows_loop */
void func_EFAB(void);
void func_F084(void);
void func_FA9F(void); /* UpdateAllEnemyExplosions_loop */
void func_EA7D(void);
void func_F03D(void);
void func_F0B4(void);
void func_ED32(void); /* DeleteOffscreenRoomSprites_loop_pipeBugHoles */
void func_F012(void); /* InitTables_loop */
void func_ECE4(void); /* DeleteOffscreenRoomSprites_loop_tileBlasts */
void func_ECC5(void); /* DeleteOffscreenRoomSprites_loop_mellows */
void func_F0F4(void);
void func_F56B(void); /* EnemyReactToSamusWeaponProjectile_RTS */
void func_ECAD(void); /* DeleteOffscreenRoomSprites_loop_enemies */
void func_EE4F(void); /* CheckForItem_loop */
void func_EDC7(void);
void func_ED15(void); /* DeleteOffscreenRoomSprites_loop_Mem0700 */
void func_F5F9(void);
void func_EA72(void);
void func_F4A2(void);
void func_F06E(void);
void func_F0BF(void);
void func_EC0E(void);
void func_ED0E(void);
void func_FC0E(void);
void func_F0C7(void);
void func_EA90(void);
void func_F510(void); /* UpdateEnemy_Hurt_exit */
void func_F02C(void);
void func_F520(void);
void func_FAB9(void);
void func_EEB3(void);
void func_EEB5(void);
void func_EAD0(void);
void func_EE22(void);
void func_EE0D(void);
void func_EBC6(void);
void func_ED85(void);
void func_EA85(void);
void func_F7B9(void); /* AndEnData05_RTS */
void func_EAA5(void);
void func_F83E(void); /* GetEnemyTypeTimes2PlusFacingDirectionBit0 */
void func_F64C(void);
void func_F5F0(void);
void func_F0FB(void);
void func_F44C(void);
void func_F6DD(void);
void func_F60A(void);
void func_F4DD(void);
void func_EBC0(void);
void func_EDB9(void);
void func_F6F8(void);
void func_F8FE(void);
void func_FB0D(void);
void func_F2B9(void);
void func_F0B9(void);
void func_FC7D(void);
void func_FB99(void);
void func_F999(void);
void func_EFB9(void);
void func_F8A9(void);
void func_EB06(void); /* LoadEnemy */
void func_EB8C(void); /* LoadDoor */
void func_EC04(void); /* LoadElevator */
void func_EC2F(void); /* LoadStatues */
void func_EC57(void); /* LoadPipeBugHole */
void func_F0A2(void);
void func_E57C(void); /* EndOfRoomVertical */
void func_E70C(void); /* EndOfRoomHorizontal */
void func_EAD4(void); /* EnemyLoop */
void func_FCF0(void);
void func_FD0D(void);
void func_EB7A(void); /* IsSlotTaken */
void func_EB28(void); /* GetEnemyType */
void func_EB4D(void);
void func_EB24(void);
void func_EB92(void); /* SpawnDoorRoutine */
void func_EE41(void);
void func_EE4A(void); /* CheckForItem */
void func_EC25(void);
void func_EE3D(void); /* PrepareItemID */
void func_EE86(void); /* SpawnMellow */
void func_EC09(void); /* SpawnElevatorRoutine */
void func_95B1_b0(void);
void func_95B1_b2(void);
void func_95B1_b3(void); /* GotoSpawnCannonRoutine */
void func_95B1_b4(void);
void func_95B1_b5(void);
void func_95B1_b6(void);
void func_95B4_b0(void);
void func_95B4_b2(void);
void func_95B4_b3(void); /* GotoSpawnMotherBrainRoutine */
void func_95B4_b4(void);
void func_95B4_b5(void);
void func_95B4_b6(void);
void func_95B7_b0(void);
void func_95B7_b2(void);
void func_95B7_b3(void); /* GotoSpawnZebetiteRoutine */
void func_95B7_b4(void);
void func_95B7_b5(void);
void func_95B7_b6(void);
void func_EEC6(void); /* SpawnMotherBrain_exit */
void func_95BA_b0(void);
void func_95BA_b2(void);
void func_95BA_b3(void); /* GotoSpawnRinkaSpawnerRoutine */
void func_95BA_b4(void);
void func_95BA_b5(void);
void func_95BA_b6(void);
void func_EF9E(void); /* UpdateAttrib */
void func_F19A(void); /* GetMellowXSlotPosition */
void func_F149(void); /* CollisionDetectionMellow_CheckWithObjectYSlot */
void func_F2B4(void); /* CollisionDetectionMellow_ReactToCollisionWithSamus */
void func_F32A(void); /* CollisionDetectionMellow_ReactToCollisionWithWeaponProjectile */
void func_F277(void); /* CollisionDetectionDoor_F277 */
void func_F152(void); /* GetEnemyXSlotPosition */
void func_F140(void); /* CollisionDetectionEnemy_CheckWithObjectYSlot */
void func_F2CA(void); /* CollisionDetectionEnemy_ReactToCollisionWithWeaponProjectile */
void func_F282(void); /* CollisionDetectionEnemy_ReactToCollisionWithSamus */
void func_F09F(void);
void func_F1B3(void); /* GetRadiusSumsOfObjXSlotAndEnYSlot */
void func_F162(void); /* GetEnemyYSlotPosition */
void func_F1FA(void); /* CheckCollisionOfXSlotAndYSlot */
void func_F2ED(void); /* CollisionDetectionEnProjectile_ReactToCollisionWithSamus */
void func_DC82(void);
void func_F311(void); /* SamusHurt_F311 */
void func_F1BF(void); /* GetRadiusSumsOfEnXSlotAndObjYSlot */
void func_F1D2(void); /* AddObjectYSlotRadiusYOf4AndRadiusXOf8 */
void func_F17F(void); /* GetXSlotPosition_Common */
void func_F193(void); /* GetYSlotPosition_Common */
void func_F1E0(void); /* AddObjectYSlotRadiusY */
void func_F1D9(void); /* AddObjectYSlotRadiusX */
void func_F1E7(void); /* AddEnemyYSlotRadiusY */
void func_F1CB(void); /* AddEnemyYSlotRadiusX */
void func_F262(void); /* CheckCollisionOfXSlotAndYSlot_positionHi_notEqual */
void func_F22B(void); /* CheckCollisionOfXSlotAndYSlot_endIf_sameHiY */
void func_F266(void); /* CheckCollisionOfXSlotAndYSlot_positionHi_equal */
void func_F256(void); /* CheckCollisionOfXSlotAndYSlot_endIf_sameHiX */
void func_F2E8(void); /* SetEnemyTouchingSamusFlags */
void func_F338(void); /* SetSamusIsHitByEnemy */
void func_F306(void);
void func_F279(void); /* SetWeaponProjectileIsHit */
void func_F332(void); /* GetEnemyIsHitFlags */
void func_F340(void);
void func_F2DF(void); /* CollisionDetectionEnProjectile_ReactToCollisionWithSamus_F2DF */
void func_F270(void);
void func_F2BF(void); /* CollisionDetectionMellow_Hit */
void func_F27B(void); /* SetSamusIsHitFlags */
void func_F351(void); /* UpdateEnemy */
void func_F37F(void); /* UpdateEnemy_CheckIfVisible */
void func_F3AA(void); /* UpdateEnemy_UpdateEnData05Bit6 */
void func_F37C(void); /* UpdateEnemy_invalidStatus */
void func_F3BE(void); /* UpdateEnemy_Resting */
void func_F3E6(void); /* UpdateEnemy_Active */
void func_F40D(void); /* UpdateEnemy_Explode */
void func_F43E(void); /* UpdateEnemy_Frozen */
void func_F483(void); /* UpdateEnemy_Pickup */
void func_F4EE(void); /* UpdateEnemy_Hurt */
void func_F6B9(void); /* UpdateEnemy_ForceSpeedTowardsSamus */
void func_F75B(void); /* UpdateEnemy_EnData05DistanceToSamusThreshold */
void func_F682(void); /* InitEnRestingAnimIndex */
void func_F676(void); /* UpdateEnemy_Resting_UpdateEnData1F */
void func_F7BA(void); /* UpdateEnemy_Resting_TryBecomingActive */
void func_F40A(void); /* UpdateEnemy_Active_BranchB */
void func_F51E(void); /* RemoveEnemyIfItIsInLava */
void func_F536(void); /* EnemyReactToSamusWeaponProjectile */
void func_F550(void);
void func_F54D(void);
void func_F539(void);
void func_95E5_b0(void);
void func_95E5_b1(void); /* ChooseEnemyAIRoutine */
void func_95E5_b2(void); /* ChooseEnemyAIRoutine */
void func_95E5_b3(void); /* ChooseEnemyAIRoutine */
void func_95E5_b4(void); /* ChooseEnemyAIRoutine */
void func_95E5_b5(void); /* ChooseEnemyAIRoutine */
void func_95E5_b6(void);
void func_CEF9(void); /* AddHealth */
void func_CBBC(void); /* SFX_EnergyPickup */
void func_CBC0(void); /* SFX_MissilePickup */
void func_80B0_b0(void);
void func_80B0_b1(void); /* LoadTableAt977B */
void func_80B0_b2(void); /* LoadTableAt977B */
void func_80B0_b3(void); /* LoadTableAt977B */
void func_80B0_b5(void); /* LoadTableAt977B */
void func_80B0_b6(void);
void func_F515(void);
void func_F518(void);
void func_F423(void); /* UpdateEnemyCommon_setHurtPalette */
void func_CBD2(void); /* SFX_MetroidHit */
void func_F673(void); /* ExplodeEnemy_exit */
void func_95A8_b0(void);
void func_95A8_b1(void);
void func_95A8_b2(void);
void func_95A8_b3(void); /* GotoClearCurrentMetroidLatchAndMetroidOnSamus */
void func_95A8_b4(void);
void func_95A8_b5(void);
void func_95A8_b6(void);
void func_CBB8(void); /* SFX_Metal */
void func_F42D(void); /* UpdateEnemyCommon_clearIsHitFlags */
void func_CBD6(void); /* SFX_BossHit */
void func_CBB0(void); /* SFX_EnemyHit */
void func_CBCE(void); /* SFX_BigEnemyHit */
void func_DCFC(void); /* EnemyCompleteDeath_SkipChunkyExplosion */
void func_F7B3(void); /* AndEnData05 */
void func_F752(void); /* LoadEnHiToYAndLoadEorHiToCarry */
void func_F744(void); /* OrEnData05 */
void func_81DA_b0(void);
void func_81DA_b1(void); /* EnemyIfMoveFailedHorizontal_Bounce_flipSpeed */
void func_81DA_b2(void); /* EnemyIfMoveFailedHorizontal_Bounce_flipSpeed */
void func_81DA_b3(void); /* EnemyIfMoveFailedHorizontal_Bounce_flipSpeed */
void func_81DA_b4(void); /* EnemyIfMoveFailedHorizontal_Bounce_flipSpeed */
void func_81DA_b5(void); /* EnemyIfMoveFailedHorizontal_Bounce_flipSpeed */
void func_81DA_b6(void);
void func_820F_b0(void);
void func_820F_b1(void); /* EnemyIfMoveFailedVertical_Bounce_flipSpeed */
void func_820F_b2(void); /* EnemyIfMoveFailedVertical_Bounce_flipSpeed */
void func_820F_b3(void); /* EnemyIfMoveFailedVertical_Bounce_flipSpeed */
void func_820F_b4(void); /* EnemyIfMoveFailedVertical_Bounce_flipSpeed */
void func_820F_b5(void); /* EnemyIfMoveFailedVertical_Bounce_flipSpeed */
void func_820F_b6(void);
void func_CBA4(void); /* SFX_OutOfPipe */
void func_F699(void); /* InitEnActiveAnimIndex */
void func_81D1_b6(void);
void func_F839(void); /* UpdateEnemy_Resting_TryBecomingActive_endIf_B */
void func_8206_b0(void); /* UnusedIntroRoutine2 */
void func_8206_b6(void);
void func_F84B(void); /* GetEnemyTypeTimes2PlusFacingDirection_common */
void func_F8E8(void); /* SpawnEnProjectile_FindSlot */
void func_F8EB(void); /* SpawnEnProjectile_FindSlot_loop */
void func_F92C(void); /* SpawnEnProjectile_F92C */
void func_F8F8(void); /* SpawnEnProjectile_F8F8 */
void func_F91D(void); /* SpawnEnProjectile_SetEnProjectilePosition */
void func_FA49(void); /* LoadEnemyPositionFromTemp */
void func_F949(void); /* UpdateEnProjectile */
void func_F96A(void); /* UpdateEnProjectile_Resting */
void func_F991(void); /* UpdateEnProjectile_Active */
void func_FA6B(void); /* UpdateEnProjectile_Frozen */
void func_FA91(void); /* UpdateEnProjectile_Pickup */
void func_FA5B(void); /* EnemyBecomePickupIfHit */
void func_FA60(void); /* EnemyBecomePickup */
void func_F987(void);
void func_8296_b0(void);
void func_8296_b6(void);
void func_832F_b0(void);
void func_832F_b6(void);
void func_F97C(void);
void func_E96A(void); /* MakeRoomRAMPtr */
void func_E98B(void);
void func_E98D(void);
void func_FAB4(void); /* UpdateEnemyExplosion */
void func_FA41(void); /* EnemyBGCollideOrApplySpeed_applySpeed */
void func_F97E(void); /* AnimDrawEnemy */
void func_FAFF(void); /* UpdatePipeBugHole */
void func_FBEC(void); /* UpdateSkreeProjectile */
void func_E9B7(void); /* ToggleNameTable */
void func_E9BD(void);
void func_E54A(void); /* CheckUpdateNameTable */
void func_E54D(void);
void func_E53F(void); /* ScrollVertically_Merge */
void func_D4CB(void); /* DoOneWeaponProjectile */
void func_D4EB(void); /* UpdateBullet */
void func_D52C(void); /* UpdateWaveBullet */
void func_D5C1(void); /* UpdateIceBullet */
void func_D5C8(void); /* UpdateBulletExplode */
void func_D5D0(void);
void func_D65E(void); /* BombInit */
void func_D668(void);
void func_D670(void); /* BombCountdown */
void func_D691(void); /* BombExplode */
void func_D5FC(void); /* UpdateBullet_DeleteIfOffScreen */
void func_D5DA(void); /* UpdateBullet_ExplodeIfHitSprite */
void func_D609(void); /* UpdateBullet_CollisionWithBG */
void func_D619(void);
void func_D64D(void);
void func_D620(void);
void func_D621(void);
void func_D646(void);
void func_D5E4(void); /* BulletExplode */
void func_9D35_b1(void); /* AreaRoutineStub_BANK1 */
void func_9B9D_b2(void); /* RTS_Polyp_BANK2 */
void func_9B25_b3(void); /* AreaRoutine_Tourian */
void func_9C49_b4(void); /* AreaRoutineStub_BANK4 */
void func_9B48_b5(void); /* RTS_Polyp_BANK5 */
void func_D7D1(void); /* ElevatorIdle */
void func_D80E(void); /* ElevatorScrollXToCenter */
void func_D83D(void); /* ElevatorMove */
void func_D870(void); /* ElevatorScrollY */
void func_D879(void);
void func_D885(void);
void func_D8A3(void); /* ElevatorFade */
void func_D8AD(void);
void func_D8A9(void);
void func_D8BF(void); /* ElevatorD8BF */
void func_D921(void);
void func_D94E(void); /* ElevatorStop */
void func_D969(void);
void func_D95A(void);
void func_D79E(void); /* RTS_X098 */
void func_D9D3(void); /* Exit8 */
void func_DAB0(void); /* UpdateStatueBGTiles */
void func_DAD1(void);
void func_DAB9(void);
void func_DA1A(void); /* UpdateStatue */
void func_DA20(void);
void func_DA21(void);
void func_DA2D(void);
void func_DADA(void); /* UpdateAllStatues_Bridge */
void func_FC98(void); /* UpdateMellow */
void func_8B74_b6(void);
void func_8B53_b6(void);
void func_8B9C_b0(void); /* UniqueItemSearch */
void func_8B87_b2(void); /* UpdateDoor */
void func_8B9D_b2(void); /* UpdateDoor_Init */
void func_8BB1_b2(void); /* DrawDoor */
void func_8B87_b3(void); /* UpdateDoor */
void func_8B9D_b3(void); /* UpdateDoor_Init */
void func_8BB1_b3(void); /* DrawDoor */
void func_8B87_b4(void); /* UpdateDoor */
void func_8B9D_b4(void); /* UpdateDoor_Init */
void func_8BB1_b4(void); /* DrawDoor */
void func_8B87_b5(void); /* UpdateDoor */
void func_8B9D_b5(void); /* UpdateDoor_Init */
void func_8BB1_b5(void); /* DrawDoor */
void func_8B87_b6(void);
void func_FE27(void); /* UpdateTileBlast */
void func_FE3D(void); /* UpdateTileBlast_Init */
void func_FE54(void); /* UpdateTileBlast_Animating */
void func_FE59(void); /* UpdateTileBlast_WaitToRespawn */
void func_FE70(void);
void func_FE83(void); /* UpdateTileBlast_Respawned */
void func_FE85(void);
void func_FEA6(void);
void func_FE9A(void);
void func_FEC5(void);
void func_FEC9(void);
void func_FE9E(void);
void func_FEAD(void);
void func_FEA8(void);
void func_FE6D(void); /* SetTileAnim */
void func_FF54(void); /* UpdateTileBlastAnim */
void func_FF85(void);
void func_FF69(void);
void func_FF60(void); /* UpdateTileBlastAnim_update */
void func_FF72(void);
void func_FAB3(void); /* UpdateAllEnemyExplosions_RTS */
void func_DB16(void); /* Exit0 */
void func_DB36(void);
void func_CBF9(void); /* PowerUpMusic */
void func_DB2F(void); /* MakeBitMask */
void func_DB30(void);
void func_DD97(void); /* AddToMaxMissiles */
void func_DD98(void);
void func_DD99(void);
void func_DC51(void); /* MapScrollRoutine_endIf_B */
void func_DC54(void); /* AddItemToHistory */
void func_FE05(void); /* CheckZebetite */
void func_FDE2(void); /* RTS_X410 */
void func_DCA1(void);
void func_DEE6(void); /* WriteSpriteRAM */
void func_DF21(void);
void func_DEF5(void);
void func_DF1B(void); /* GetNextFrameByte */
void func_E1AD(void); /* DivideByRepeatedSubtraction */
void func_833F_b1(void); /* EnemyGetDeltaY_UsingAcceleration */
void func_822B_b1(void); /* LoadEnemyMovementPtr */
void func_8312_b1(void); /* EnemyGetDeltaY_RepeatPreviousUntilNoDeltaYThenTriggerResting_endIf_B */
void func_81B1_b1(void); /* EnemyTriggerResting_AndClearEnAccelY */
void func_8563_b1(void); /* GetOtherNameTableIndex */
void func_855A_b1(void); /* SwitchEnemyNameTable */
void func_81FC_b1(void); /* EnemyIfMoveFailedVertical_Bounce */
void func_8206_b1(void); /* EnemyIfMoveFailedVertical_Bounce_flipSpeedAndAccel */
void func_856B_b1(void); /* XorEnData05 */
void func_8395_b1(void); /* EnemyGetDeltaX_UsingAcceleration */
void func_E8F1(void); /* EnemyCheckMoveLeft */
void func_81C7_b1(void); /* EnemyIfMoveFailedHorizontal_Bounce */
void func_81D1_b1(void); /* EnemyIfMoveFailedHorizontal_Bounce_flipSpeedAndAccel */
void func_81F5_b1(void); /* EnemyIfMoveFailedHorizontal_Bounce_RTS */
void func_81C0_b1(void); /* EnemyTriggerResting_AndClearEnAccelX */
void func_E8FC(void); /* EnemyCheckMoveRight */
void func_822B_b2(void); /* LoadEnemyMovementPtr */
void func_8312_b2(void); /* EnemyGetDeltaY_RepeatPreviousUntilNoDeltaYThenTriggerResting_endIf_B */
void func_81B1_b2(void); /* EnemyTriggerResting_AndClearEnAccelY */
void func_8563_b2(void); /* GetOtherNameTableIndex */
void func_855A_b2(void); /* SwitchEnemyNameTable */
void func_81FC_b2(void); /* EnemyIfMoveFailedVertical_Bounce */
void func_8206_b2(void); /* EnemyIfMoveFailedVertical_Bounce_flipSpeedAndAccel */
void func_856B_b2(void); /* XorEnData05 */
void func_81C7_b2(void); /* EnemyIfMoveFailedHorizontal_Bounce */
void func_81D1_b2(void); /* EnemyIfMoveFailedHorizontal_Bounce_flipSpeedAndAccel */
void func_81F5_b2(void); /* EnemyIfMoveFailedHorizontal_Bounce_RTS */
void func_81C0_b2(void); /* EnemyTriggerResting_AndClearEnAccelX */
void func_833F_b3(void); /* EnemyGetDeltaY_UsingAcceleration */
void func_822B_b3(void); /* LoadEnemyMovementPtr */
void func_8312_b3(void); /* EnemyGetDeltaY_RepeatPreviousUntilNoDeltaYThenTriggerResting_endIf_B */
void func_81B1_b3(void); /* EnemyTriggerResting_AndClearEnAccelY */
void func_8563_b3(void); /* GetOtherNameTableIndex */
void func_855A_b3(void); /* SwitchEnemyNameTable */
void func_81FC_b3(void); /* EnemyIfMoveFailedVertical_Bounce */
void func_8206_b3(void); /* EnemyIfMoveFailedVertical_Bounce_flipSpeedAndAccel */
void func_856B_b3(void); /* XorEnData05 */
void func_8395_b3(void); /* EnemyGetDeltaX_UsingAcceleration */
void func_81C7_b3(void); /* EnemyIfMoveFailedHorizontal_Bounce */
void func_81D1_b3(void); /* EnemyIfMoveFailedHorizontal_Bounce_flipSpeedAndAccel */
void func_81F5_b3(void); /* EnemyIfMoveFailedHorizontal_Bounce_RTS */
void func_81C0_b3(void); /* EnemyTriggerResting_AndClearEnAccelX */
void func_8563_b4(void); /* GetOtherNameTableIndex */
void func_855A_b4(void); /* SwitchEnemyNameTable */
void func_81FC_b4(void); /* EnemyIfMoveFailedVertical_Bounce */
void func_8206_b4(void); /* EnemyIfMoveFailedVertical_Bounce_flipSpeedAndAccel */
void func_81C7_b4(void); /* EnemyIfMoveFailedHorizontal_Bounce */
void func_81D1_b4(void); /* EnemyIfMoveFailedHorizontal_Bounce_flipSpeedAndAccel */
void func_81F5_b4(void); /* EnemyIfMoveFailedHorizontal_Bounce_RTS */
void func_81C0_b4(void); /* EnemyTriggerResting_AndClearEnAccelX */
void func_822B_b5(void); /* LoadEnemyMovementPtr */
void func_8312_b5(void); /* EnemyGetDeltaY_RepeatPreviousUntilNoDeltaYThenTriggerResting_endIf_B */
void func_81B1_b5(void); /* EnemyTriggerResting_AndClearEnAccelY */
void func_8563_b5(void); /* GetOtherNameTableIndex */
void func_855A_b5(void); /* SwitchEnemyNameTable */
void func_81FC_b5(void); /* EnemyIfMoveFailedVertical_Bounce */
void func_8206_b5(void); /* EnemyIfMoveFailedVertical_Bounce_flipSpeedAndAccel */
void func_856B_b5(void); /* XorEnData05 */
void func_81C7_b5(void); /* EnemyIfMoveFailedHorizontal_Bounce */
void func_81D1_b5(void); /* EnemyIfMoveFailedHorizontal_Bounce_flipSpeedAndAccel */
void func_81F5_b5(void); /* EnemyIfMoveFailedHorizontal_Bounce_RTS */
void func_81C0_b5(void); /* EnemyTriggerResting_AndClearEnAccelX */
void func_C41D(void); /* ExtractNibbles */
void func_C41E(void);
void func_C420(void);
void func_C427(void);
void func_E783(void); /* EnemyCheckMoveVertical */
void func_E785(void);
void func_E7BD(void); /* CheckMoveVertical */
void func_81B8_b4(void); /* EnemyTriggerResting */
void func_BB19_b4(void); /* GotoUpdateMusicTriLinearCount */
void func_BB16_b4(void); /* GotoMusicChannelInstr_SongNoteNoise */
void func_BA9D_b4(void); /* GotoEndOrLoopMusic */
void func_BAA1_b4(void); /* GotoUpdateAllVolumeEnvelopes */
void func_BAB0_b4(void); /* MusicChannelBaseEmpty */
void func_BC8D_b4(void);
void func_BC8B_b4(void); /* XYMusicInit */
void func_B3FC_b4(void); /* CheckMusicFlags */
void func_C45D(void); /* ScreenNmiOff */
void func_A93E_b4(void);
void func_C5D7(void); /* InitTitleGFX */
void func_C5DC(void); /* LoadSamusGFX */
void func_C601(void);
void func_C5E1(void);
void func_C5F0(void);
void func_C1D4(void); /* ClearRAM_33_DF */
void func_C578(void); /* ClearSamusStats */
void func_C645(void); /* InitTourianGFX */
void func_C663(void);
void func_C677(void); /* InitKraidGFX */
void func_C681(void);
void func_C69F(void); /* InitRidleyGFX */
void func_C6A4(void);
void func_C6C2(void); /* InitGFX6 */
void func_C707(void);
void func_C7D5(void); /* CopyGFXBlock */
void func_C7DB(void); /* CopyGFXBlock_loop */
void func_CBDE(void); /* SFX_SamusHit */
void func_CE66(void); /* CheckHealthBeep */
void func_CF4E(void);
void func_CBF3(void); /* SFX_Beep */
void func_AFD7_b4(void);
void func_AFE4_b4(void);
void func_C2C0(void); /* Adiv8 */
void func_8871_b0(void); /* DoSparkleSpriteCoord_NibbleSubtract */
void func_9871_b0(void); /* UpdateCrossMissileCoords_CalcDisplacement */
void func_8FF1_b0(void); /* SixLowerAndTwoUpper */
void func_9001_b0(void); /* FourLowerAndFiveThruTwo */
void func_9011_b0(void); /* TwoLowerAndSixLower */
void func_8E4E_b0(void); /* UnscramblePassword */
void func_8E21_b0(void); /* PasswordChecksum */
void func_8D12_b0(void); /* LoadPasswordData */
void func_8E2D_b0(void); /* PasswordScramble */
void func_8F2D_b0(void); /* SixUpperBits */
void func_8F33_b0(void); /* TwoLowerAndFourUpper */
void func_8F46_b0(void); /* FourLowerAndTwoUpper */
void func_8F5A_b0(void); /* SixLowerBits */
void func_D095(void); /* RTS_X028 */
void func_D210(void); /* FireWeaponProjectileForwards */
void func_CDBE(void);
void func_E268(void);
void func_E25D(void); /* IsSamusInLava */
void func_E37A(void); /* VertAccelerate */
void func_E3D0(void);
void func_E3BD(void);
void func_E3A2(void);
void func_E457(void); /* MoveSamusUp */
void func_E48D(void);
void func_E486(void);
void func_E31A(void); /* SamusMoveHorizontally */
void func_E4A3(void); /* MoveSamusDown */
void func_E4E4(void);
void func_E4B1(void);
void func_E4D0(void);
void func_E4C0(void);
void func_E3E5(void); /* HorzAccelerate */
void func_E409(void);
void func_E626(void); /* MoveSamusLeft */
void func_E365(void); /* CheckStopHorzMvmt */
void func_E668(void); /* MoveSamusRight */
void func_E682(void);
void func_E683(void);
void func_E690(void);
void func_E67E(void);
void func_E685(void);
void func_E6A0(void);
void func_E699(void);
void func_D088(void);
void func_E7B5(void); /* ObjectCheckMoveVertical */
void func_CBA8(void); /* SFX_BombLaunch */
void func_CFC5(void);
void func_D38A(void); /* CheckVerticalWaveBulletFire */
void func_D340(void); /* CheckVerticalMissileLaunch */
void func_D26B(void);
void func_D358(void); /* SetBulletAnim_RTS */
void func_D34D(void); /* SetBulletAnim */
void func_CBC6(void); /* SFX_WaveFire */
void func_CB9E(void); /* SFX_MissileLaunch */
void func_CBA0(void); /* SetSFXNoiseInitFlag */
void func_D4B4(void); /* Door_DeleteOffscreenEnemies_deleteEnemy */
void func_D4A8(void); /* Door_DeleteOffscreenEnemies_deletePipeBugHole */
void func_E564(void); /* GetNameAddrs */
void func_E880(void); /* ObjectCheckMoveLeft */
void func_D976(void); /* SamusCollisionWithSolidEntities */
void func_D983(void); /* SamusCollisionWithSolidEntities_loop */
void func_ED57(void);
void func_9C6F_b3(void); /* DeleteOffscreenRoomSprites_Tourian */
void func_EDFB(void); /* SpawnMapEnemy_exit */
void func_EE83(void); /* SpawnMellows_exit */
void func_EEAB(void); /* SpawnCannon_exit */
void func_EB8F(void);
void func_EC54(void);
void func_E549(void); /* RTS_X173 */
void func_A29E_b0(void);
void func_A29E_b2(void);
void func_A29E_b4(void); /* SpecItmsTbl_BANK4_y1B */
void func_A29E_b5(void); /* Room04_BANK5 */
void func_A29E_b6(void);
void func_E6FE(void); /* RTS_X196 */
void func_E590(void); /* UpdateNameTable */
void func_C2C4(void); /* Amul32 */
void func_C2C5(void); /* Amul16 */
void func_C2C7(void);
void func_9CE6_b3(void); /* SpawnCannonRoutine */
void func_9D21_b3(void); /* SpawnMotherBrainRoutine */
void func_9D3D_b3(void); /* SpawnZebetiteRoutine */
void func_9D6C_b3(void); /* SpawnRinkaSpawnerRoutine */
void func_9D75_b3(void); /* SpawnRinkaSpawnerRoutine_endIf_A */
void func_F298(void);
void func_F329(void); /* ClearHealthChange_RTS */
void func_F281(void); /* Exit17 */
void func_F2D8(void);
void func_F6B8(void); /* InitEnActiveAnimIndex_RTS */
void func_F530(void);
void func_8024_b1(void); /* CommonJump_JumpEngine */
void func_F59A(void);
void func_8024_b2(void); /* CommonJump_JumpEngine */
void func_9593_b2(void);
void func_9641_b2(void);
void func_FFFF(void);
void func_96BE_b2(void);
void func_98A4_b2(void);
void func_8006_b2(void); /* CommonJump_UpdateEnemyCommon_noMoveNoAnim */
void func_801E_b2(void); /* CommonJump_InitEnActiveAnimIndex_NoInitOffset */
void func_9839_b2(void); /* UpdateEnemyCommon_Decide_BANK2 */
void func_9954_b2(void); /* SwooperChangeEnemyType_BANK2 */
void func_98F4_b2(void); /* UpdateSwooperAnim_BANK2 */
void func_95C6_b2(void); /* TwosComplement_ */
void func_802A_b2(void); /* CommonJump_0E */
void func_801B_b2(void); /* CommonJump_EnemyFlipAfterDisplacement */
void func_8009_b2(void); /* CommonJump_CrawlerAIRoutine_ShouldCrawlerMove */
void func_984D_b2(void); /* UpdateEnemyCommon_Decide_BANK2_explode */
void func_9A2F_b2(void); /* JumpByRTSToMovementRoutine_BANK2 */
void func_99F5_b2(void); /* CrawlerInsideCornerCheck_BANK2 */
void func_9A0A_b2(void); /* CrawlerFlipDirection_BANK2 */
void func_9A07_b2(void);
void func_9A13_b2(void); /* CrawlerOutsideCornerCheck_BANK2 */
void func_800C_b2(void); /* CommonJump_UpdateEnemyAnim */
void func_B102_b2(void);
void func_9A27_b2(void); /* CrawlerOutsideCornerGetNextOrientation_BANK2 */
void func_8021_b2(void); /* CommonJump_SpawnEnProjectile */
void func_9B59_b2(void); /* DragonAIRoutine_BANK2_endIf_C */
void func_9DEC_b2(void);
void func_A40A_b2(void);
void func_A46A_b2(void);
void func_A471_b2(void);
void func_A4E9_b2(void);
void func_A4F5_b2(void); /* Room07_BANK2 */
void func_A527_b2(void); /* Room08_BANK2 */
void func_A540_b2(void);
void func_A54D_b2(void);
void func_A57E_b2(void);
void func_8024_b3(void); /* CommonJump_JumpEngine */
void func_8024_b4(void); /* CommonJump_JumpEngine */
void func_8024_b5(void); /* CommonJump_JumpEngine */
void func_A320_b3(void); /* ClearCurrentMetroidLatchAndMetroidOnSamus */
void func_81F6_b1(void); /* LoadBit5ofTableAt968B */
void func_81F6_b2(void); /* LoadBit5ofTableAt968B */
void func_81F6_b3(void); /* LoadBit5ofTableAt968B */
void func_81F6_b4(void); /* LoadBit5ofTableAt968B */
void func_81F6_b5(void); /* LoadBit5ofTableAt968B */
void func_F969(void); /* UpdateEnProjectile_RTS */
void func_F984(void);
void func_E571(void); /* CheckUpdateNameTableVertical */
void func_E603(void);
void func_E5BD(void);
void func_E614(void);
void func_E64C(void);
void func_E661(void);
void func_E60F(void);
void func_E5C9(void);
void func_E599(void);
void func_E629(void);
void func_E608(void);
void func_E60D(void);
void func_E659(void);
void func_E640(void);
void func_E600(void);
void func_E5C2(void); /* UpdateNameTable_loop_data */
void func_E61C(void);
void func_E62F(void);
void func_E584(void);
void func_E63C(void);
void func_E616(void);
void func_E701(void); /* CheckUpdateNameTableHorizontal */
void func_D522(void);
void func_D51F(void); /* MoveToNextWeaponWaveInstr */
void func_D624(void); /* UpdateBullet_Move */
void func_D4F8(void); /* CheckBulletStat */
void func_D517(void); /* DrawBullet */
void func_D2FA(void); /* InitObjAnimIndex */
void func_CB9A(void); /* SFX_BombExplode */
void func_D66B(void); /* DrawBomb */
void func_D6A7(void); /* BombExplosion_CollisionWithBG */
void func_D720(void);
void func_D6D1(void);
void func_D76B(void);
void func_D5FB(void); /* Exit5 */
void func_D5F8(void);
void func_E81E(void); /* WeaponProjectileHitDoorOrStatue */
void func_95C0_b0(void);
void func_95C0_b2(void);
void func_95C0_b3(void); /* GotoUpdateBullet_CollisionWithMotherBrain */
void func_95C0_b4(void);
void func_95C0_b5(void);
void func_95C0_b6(void);
void func_D606(void); /* GotoWeaponProjectileHitDoorOrStatue */
void func_D651(void); /* CheckBlastTile */
void func_E9BE(void); /* IsBlastTile */
void func_E9F2(void);
void func_E9CC(void);
void func_D602(void);
void func_9B37_b3(void); /* UpdateAllCannons */
void func_9B44_b3(void); /* UpdateAllCannons_updateIfPossible */
void func_9DD4_b3(void); /* MotherBrainStatusHandler */
void func_A1E7_b3(void); /* UpdateEndTimer */
void func_A238_b3(void); /* DrawEndTimerEnemy */
void func_A28A_b3(void); /* DrawEndTimerEnemy_RTS */
void func_A28B_b3(void); /* UpdateAllZebetites */
void func_A29B_b3(void); /* UpdateZebetite */
void func_A29E_b3(void);
void func_A15E_b3(void); /* UpdateAllRinkaSpawners */
void func_A16B_b3(void); /* UpdateAllRinkaSpawners_subroutine */
void func_D806(void); /* DrawElevator */
void func_D648(void); /* ToggleObjHi */
void func_D866(void); /* ElevatorMove_endIf_A */
void func_D892(void); /* ElevScrollRoom */
void func_FEDC(void); /* DrawTileBlast */
void func_FEE8(void);
void func_FF04(void);
void func_FF21(void);
void func_FEFC(void);
void func_FF01(void);
void func_FF0A(void);
void func_FF06(void); /* DrawTileBlast_loop_rows */
void func_FF08(void); /* DrawTileBlast_loop_columns */
void func_FEF6(void);
void func_FEE5(void);
void func_DA3D(void); /* UpdateStatue_Raise */
void func_DA4C(void);
void func_DA7C(void); /* UpdateStatue_StartRaising */
void func_FCA5(void); /* UpdateMellow_Resting */
void func_FCB1(void); /* UpdateMellow_Active */
void func_FCBA(void); /* UpdateMellow_Explode */
void func_8420_b0(void);
void func_8420_b1(void);
void func_8420_b2(void);
void func_8420_b3(void);
void func_8420_b4(void);
void func_8420_b5(void);
void func_8420_b6(void);
void func_8BD5_b1(void); /* UpdateDoor_Closed */
void func_8BD5_b2(void); /* UpdateDoor_Closed */
void func_8C01_b2(void); /* UpdateDoor_Open */
void func_8C71_b2(void); /* DoorSubRoutine8C71 */
void func_8C61_b2(void); /* DoorSubRoutine8C61 */
void func_8C84_b2(void); /* UpdateDoor_LetSamusIn */
void func_8CC6_b2(void); /* UpdateDoor_Scroll */
void func_8CED_b2(void); /* Goto2DrawDoor */
void func_8CCF_b2(void);
void func_8CF0_b2(void); /* UpdateDoor_LetSamusOut */
void func_8BD5_b3(void); /* UpdateDoor_Closed */
void func_8C01_b3(void); /* UpdateDoor_Open */
void func_8C71_b3(void); /* DoorSubRoutine8C71 */
void func_8C61_b3(void); /* DoorSubRoutine8C61 */
void func_8C84_b3(void); /* UpdateDoor_LetSamusIn */
void func_8CC6_b3(void); /* UpdateDoor_Scroll */
void func_8CED_b3(void); /* Goto2DrawDoor */
void func_8CCF_b3(void);
void func_8CF0_b3(void); /* UpdateDoor_LetSamusOut */
void func_8BD5_b4(void); /* UpdateDoor_Closed */
void func_8C01_b4(void); /* UpdateDoor_Open */
void func_8C71_b4(void); /* DoorSubRoutine8C71 */
void func_8C61_b4(void); /* DoorSubRoutine8C61 */
void func_8C84_b4(void); /* UpdateDoor_LetSamusIn */
void func_8CC6_b4(void); /* UpdateDoor_Scroll */
void func_8CED_b4(void); /* Goto2DrawDoor */
void func_8CCF_b4(void);
void func_8CF0_b4(void); /* UpdateDoor_LetSamusOut */
void func_8BD5_b5(void); /* UpdateDoor_Closed */
void func_8C01_b5(void); /* UpdateDoor_Open */
void func_8C71_b5(void); /* DoorSubRoutine8C71 */
void func_8C61_b5(void); /* DoorSubRoutine8C61 */
void func_8C84_b5(void); /* UpdateDoor_LetSamusIn */
void func_8CC6_b5(void); /* UpdateDoor_Scroll */
void func_8CED_b5(void); /* Goto2DrawDoor */
void func_8CCF_b5(void);
void func_8CF0_b5(void); /* UpdateDoor_LetSamusOut */
void func_8B9D_b6(void);
void func_8BD5_b6(void);
void func_8C01_b6(void);
void func_8C84_b6(void);
void func_8CC6_b6(void);
void func_8CF0_b6(void);
void func_8CFB_b6(void);
void func_FF3C(void); /* GetPosAtNameTableAddr */
void func_FF48(void);
void func_FF49(void);
void func_FF45(void);
void func_FF46(void);
void func_DF6B(void); /* YDisplacement */
void func_DF92(void);
void func_DFA3(void); /* XDisplacement */
void func_DFBD(void);
void func_DFAA(void);
void func_81B8_b1(void); /* EnemyTriggerResting */
void func_E904(void); /* EnemyCheckMoveHorizontalBranch */
void func_E90C(void);
void func_E909(void);
void func_E89B(void); /* CheckMoveHorizontal */
void func_81B8_b2(void); /* EnemyTriggerResting */
void func_81B8_b3(void); /* EnemyTriggerResting */
void func_81B8_b5(void); /* EnemyTriggerResting */
void func_E8CE(void); /* GetNumBlocksToCheck */
void func_E8E9(void);
void func_E8D0(void);
void func_E8D1(void);
void func_E8EE(void);
void func_E8F0(void);
void func_E90F(void); /* CalculateFirstBGCollisionPoint */
void func_E939(void);
void func_E911(void);
void func_E935(void);
void func_E98E(void); /* CalculateNextBGCollisionPoint */
void func_E9A8(void);
void func_E7E6(void);
void func_AF83_b4(void);
void func_8BD4_b0(void); /* LoadUniqueItems */
void func_8D3D_b0(void); /* LoadTanksAndMissiles */
void func_E7AD(void); /* ObjectCheckMoveDown */
void func_E800(void); /* IsWalkableTile */
void func_E807(void);
void func_E820(void);
void func_E875(void);
void func_E804(void);
void func_E86D(void);
void func_E86E(void);
void func_E830(void);
void func_E84B(void);
void func_E80B(void);
void func_E80F(void);
void func_E802(void);
void func_E805(void);
void func_E819(void);
void func_E85B(void);
void func_E824(void); /* WeaponProjectileHitDoorOrStatue_loop */
void func_E364(void); /* Exit10 */
void func_E88B(void); /* ObjectCheckMoveRight */
void func_E8AA(void);
void func_D35B(void);
void func_D323(void); /* CheckMissileLaunchCommon */
void func_CBC2(void); /* SetSFXSQ1InitFlag */
void func_E893(void); /* ObjectCheckMoveHorizontalBranch */
void func_D9BA(void); /* SamusCollisionWithSolidEntities_isSamusOnTop */
void func_D9CE(void);
void func_D9C2(void);
void func_9D64_b3(void); /* GetRoomRAMPtrHi */
void func_9CD6_b3(void); /* DeleteOffscreenRoomSprites_Tourian_rinkaSpawner */
void func_803F_b3(void); /* CommonJump_DrawTileBlast */
void func_A2AE_b5(void);
void func_A3D1_b5(void);
void func_A439_b5(void);
void func_A4E0_b5(void);
void func_A542_b5(void);
void func_A575_b5(void);
void func_A5CF_b5(void);
void func_A66F_b5(void);
void func_A699_b5(void);
void func_A69F_b5(void);
void func_A71C_b5(void);
void func_F4F8(void);
void func_A767_b5(void);
void func_A7C5_b5(void);
void func_A822_b5(void);
void func_A8AC_b5(void);
void func_A91F_b5(void);
void func_A98E_b5(void);
void func_AAA3_b5(void);
void func_B948_b5(void);
void func_BC23_b5(void);
void func_AB86_b5(void);
void func_AD21_b5(void);
void func_AD04_b5(void);
void func_AD95_b5(void);
void func_ADFC_b5(void);
void func_AE0D_b5(void);
void func_AEE7_b5(void);
void func_B03F_b5(void); /* SongKraidSQ1 */
void func_B037_b5(void);
void func_B084_b5(void);
void func_B0B8_b5(void);
void func_B0BC_b5(void);
void func_B09B_b5(void);
void func_B920_b5(void);
void func_B151_b5(void);
void func_B144_b5(void);
void func_B154_b5(void);
void func_B19B_b5(void);
void func_B1A8_b5(void);
void func_9830_b5(void); /* UpdateEnemyCommon_Decide_BANK5 */
void func_B1E0_b5(void);
void func_80C7_b5(void); /* EnemyIfMoveFailedUp_facingHorizontal */
void func_9B20_b3(void); /* Amul16_ */
void func_9D88_b3(void); /* GetNameTableAtScrollDir_ */
void func_C27C(void); /* JumpEngine */
void func_C27D(void);
void func_C284(void);
void func_F56C(void);
void func_B0D4_b2(void);
void func_A5EB_b2(void);
void func_A608_b2(void);
void func_A650_b2(void);
void func_A68D_b2(void);
void func_A720_b2(void);
void func_A740_b2(void);
void func_A8E4_b2(void);
void func_9401_b2(void);
void func_9C01_b2(void);
void func_A984_b2(void);
void func_A9AA_b2(void);
void func_AA06_b2(void);
void func_ABAD_b2(void);
void func_ABDA_b2(void); /* Room29_BANK2 */
void func_ABDF_b2(void);
void func_ABE5_b2(void);
void func_AC15_b2(void);
void func_AC4A_b2(void);
void func_AC7A_b2(void);
void func_AF01_b2(void);
void func_AC89_b2(void);
void func_AD3F_b2(void);
void func_AE2F_b2(void); /* Structure20_BANK2 */
void func_AE36_b2(void);
void func_AE3A_b2(void); /* Structure21_BANK2 */
void func_AE3B_b2(void);
void func_AEE0_b2(void);
void func_AF59_b2(void);
void func_AF2B_b2(void);
void func_B03F_b2(void);
void func_B61C_b2(void);
void func_B06C_b2(void);
void func_B0A4_b2(void);
void func_9830_b2(void);
void func_B1E0_b2(void);
void func_80C7_b2(void); /* EnemyIfMoveFailedUp_facingHorizontal */
void func_B2C5_b2(void);
void func_B374_b2(void); /* LoadSFXData_SQ2 */
void func_B36C_b2(void); /* LoadSFXData_Tri */
void func_B370_b2(void); /* LoadSFXData_Noise */
void func_B493_b2(void); /* UpdateContFlags */
void func_B452_b2(void); /* InitSFXData */
void func_B463_b2(void);
void func_B472_b2(void); /* InitSFXData_Tri */
void func_B4A9_b2(void); /* IncrementSFXFrame */
void func_B58F_b2(void); /* EndNoiseSFX */
void func_D78B(void);
void func_D78D(void);
void func_D76A(void); /* BombCurrentTile */
void func_D77F(void);
void func_D780(void);
void func_D784(void);
void func_E9C2(void); /* IsBlastTile_SkipCheckUpdatingWeaponProjectile */
void func_A142_b3(void); /* UpdateBullet_CollisionWithMotherBrain */
void func_95BD_b0(void);
void func_95BD_b2(void);
void func_95BD_b3(void); /* GotoUpdateBullet_CollisionWithZebetiteAndMotherBrainGlass */
void func_95BD_b4(void);
void func_95BD_b5(void);
void func_95BD_b6(void);
void func_9C4D_b3(void); /* UpdateCannon_CheckIfOnScreen */
void func_9B70_b3(void); /* UpdateCannon_RunInstructions */
void func_9B84_b3(void); /* UpdateCannon_RunInstructions_getInstruction */
void func_9C2B_b3(void); /* DrawCannon_Normal */
void func_9C31_b3(void); /* DrawCannon_Escape */
void func_8045_b3(void); /* CommonJump_Base10Subtract */
void func_803C_b3(void); /* CommonJump_DrawEnemy */
void func_A15D_b3(void);
void func_802A_b3(void); /* CommonJump_0E */
void func_9EE7_b3(void); /* SpawnRinka_InitPositionXY */
void func_FEDB(void); /* GetVRAMStringPtr_RTS */
void func_FECC(void); /* GetVRAMStringPtr */
void func_FED6(void);
void func_FED9(void);
void func_FD84(void); /* UpdateMellow_FD84 */
void func_FD86(void);
void func_FD08(void); /* UpdateMellow_FD08 */
void func_FD20(void);
void func_FD25(void); /* UpdateMellow_FD25 */
void func_FD29(void);
void func_FCC1(void); /* UpdateMellow_RunAI */
void func_848B_b6(void);
void func_8631_b6(void);
void func_8778_b6(void);
void func_878F_b6(void);
void func_E06E(void);
void func_8868_b6(void);
void func_8888_b6(void);
void func_8937_b6(void);
void func_8844_b6(void);
void func_89DB_b6(void);
void func_89F1_b6(void);
void func_C0C0(void);
void func_C0E0(void);
void func_8E25_b6(void);
void func_DF20(void);
void func_DF2D(void); /* ClearObjectCntrl */
void func_90C4_b6(void);
void func_90CA_b6(void);
void func_90EE_b6(void);
void func_90F0_b6(void);
void func_918F_b6(void);
void func_914D_b6(void);
void func_91C0_b6(void);
void func_9278_b6(void);
void func_92FC_b6(void);
void func_8BB1_b1(void); /* DrawDoor */
void func_8C7E_b1(void); /* DoorSubRoutine8C7E */
void func_DC1E(void); /* MapScrollRoutine */
void func_CC03(void); /* MotherBrainMusic */
void func_8C71_b1(void); /* DoorSubRoutine8C71 */
void func_D2FD(void); /* SetObjAnimIndex */
void func_CBDA(void); /* SFX_Door */
void func_8C61_b1(void); /* DoorSubRoutine8C61 */
void func_8C7E_b2(void); /* DoorSubRoutine8C7E */
void func_8CF7_b2(void); /* WriteDoorBGTiles_Air */
void func_8CFB_b2(void); /* WriteDoorBGTiles_Solid */
void func_8C76_b2(void); /* DoorSubRoutine8C76 */
void func_8C7E_b3(void); /* DoorSubRoutine8C7E */
void func_8CF7_b3(void); /* WriteDoorBGTiles_Air */
void func_8CFB_b3(void); /* WriteDoorBGTiles_Solid */
void func_8C76_b3(void); /* DoorSubRoutine8C76 */
void func_8C7E_b4(void); /* DoorSubRoutine8C7E */
void func_8CF7_b4(void); /* WriteDoorBGTiles_Air */
void func_8CFB_b4(void); /* WriteDoorBGTiles_Solid */
void func_8C76_b4(void); /* DoorSubRoutine8C76 */
void func_8C7E_b5(void); /* DoorSubRoutine8C7E */
void func_8CF7_b5(void); /* WriteDoorBGTiles_Air */
void func_8CFB_b5(void); /* WriteDoorBGTiles_Solid */
void func_8C76_b5(void); /* DoorSubRoutine8C76 */
void func_8BB1_b6(void);
void func_8C60_b6(void);
void func_9339_b6(void);
void func_9321_b6(void);
void func_93BE_b6(void);
void func_9413_b6(void);
void func_94D3_b6(void);
void func_94B7_b6(void);
void func_A480_b6(void);
void func_9519_b6(void);
void func_9858_b6(void);
void func_8036_b6(void);
void func_8039_b6(void);
void func_9AE1_b6(void);
void func_8027_b6(void);
void func_9AF1_b6(void);
void func_8003_b6(void);
void func_9958_b6(void);
void func_98F8_b6(void);
void func_9830_b6(void);
void func_95C6_b6(void);
void func_8006_b6(void);
void func_802A_b6(void);
void func_8009_b6(void);
void func_99A2_b6(void);
void func_99AA_b6(void);
void func_99A7_b6(void);
void func_9A14_b6(void);
void func_DF91(void);
void func_DF75(void);
void func_DFAD(void);
void func_E7DE(void);
void func_E95F(void);
void func_E934(void);
void func_AF53_b4(void);
void func_8BF5_b0(void); /* LoadUniqueItems_loop_unused */
void func_8C39_b0(void); /* SamusHasItem */
void func_8C0A_b0(void); /* LoadUniqueItems_processItemBit */
void func_8C03_b0(void); /* LoadUniqueItems_processItemByte */
void func_8DA9_b0(void); /* LoadTanksAndMissiles_IncrementToNextItem */
void func_D318(void);
void func_B2C5_b5(void);
void func_B374_b5(void); /* LoadSFXData_SQ2 */
void func_B36C_b5(void); /* LoadSFXData_Tri */
void func_B370_b5(void); /* LoadSFXData_Noise */
void func_B493_b5(void); /* UpdateContFlags */
void func_B452_b5(void); /* InitSFXData */
void func_B463_b5(void);
void func_B472_b5(void); /* InitSFXData_Tri */
void func_B4A9_b5(void); /* IncrementSFXFrame */
void func_B58F_b5(void); /* EndNoiseSFX */
void func_B587_b5(void); /* GotoInitSFXData */
void func_B4A2_b5(void); /* ClearCurrentSoundFlagsAndContFlags */
void func_B5A5_b5(void); /* MultiSFXInit */
void func_B62C_b5(void); /* WriteSQ1SQ2PeriodLow */
void func_B5CD_b5(void); /* EndMultiSFX */
void func_B6F2_b5(void); /* EndSQ1SFX */
void func_B896_b5(void); /* EndTriSFX */
void func_B98C_b5(void); /* DecreaseSFXTriPeriod */
void func_B869_b5(void); /* WriteSFXTriPeriod */
void func_B978_b5(void); /* IncreaseSFXTriPeriod */
void func_B9A0_b5(void); /* DivideSFXTriPeriod */
void func_B8C3_b5(void); /* RndTriPeriods */
void func_BA41_b5(void); /* UpdateVolumeEnvelope */
void func_BA08_b5(void); /* LoadMusicSQ1SQ2Periods */
void func_B3F0_b5(void); /* EndOrLoopMusic */
void func_BA37_b5(void); /* UpdateAllVolumeEnvelopes */
void func_B9F3_b5(void); /* ResetVolumeIndex */
void func_BB1C_b5(void); /* LoadNextMusicChannelInstr_Continued */
void func_BADC_b5(void); /* LoadNextMusicChannelInstr */
void func_BBDE_b5(void); /* MusicChannelInstr_SongNoteNoise */
void func_BBB7_b5(void); /* UpdateMusicTriLinearCount */
void func_BAB3_b5(void); /* IncrementToNextMusicChannel */
void func_BBA8_b5(void); /* SetMusicInstrDelayToLength */
void func_BBCD_b5(void); /* UpdateMusicTriLinearCount_setToNoteLength */
void func_BB37_b5(void); /* LoadNextMusicChannelInstr_Continued_ReturnFromUpdateMusicTriLinearCount */
void func_AB32_b5(void);
void func_BAA5_b5(void); /* UpdateAllMusicChannels */
void func_BCAA_b5(void); /* Music00Init */
void func_BCA4_b5(void); /* Music01Init */
void func_BC9A_b5(void); /* Music02Init */
void func_BC96_b5(void); /* Music03Init */
void func_BC89_b5(void); /* Music04Init */
void func_BC9E_b5(void); /* Music05Init */
void func_B9E4_b5(void); /* SetVolumeAndDisableSweep */
void func_BF19_b5(void); /* InitializeMusic */
void func_BD77_b5(void);
void func_BD9F_b5(void);
void func_BE08_b5(void); /* SongPowerUpTri */
void func_BE3E_b5(void); /* SongFadeInSQ1 */
void func_BEB0_b5(void);
void func_AEAC_b5(void);
void func_AEAE_b5(void);
void func_BF1B_b5(void);
void func_BF0B_b5(void);
void func_BF67_b5(void);
void func_AFFE_b5(void);
void func_B06C_b5(void);
void func_B17E_b5(void);
void func_8006_b5(void); /* CommonJump_UpdateEnemyCommon_noMoveNoAnim */
void func_80C1_b5(void); /* EnemyIfMoveFailedUp_bounce */
void func_B0A2_b2(void);
void func_B587_b2(void); /* GotoInitSFXData */
void func_B4A2_b2(void); /* ClearCurrentSoundFlagsAndContFlags */
void func_B5A5_b2(void); /* MultiSFXInit */
void func_B62C_b2(void); /* WriteSQ1SQ2PeriodLow */
void func_B5CD_b2(void); /* EndMultiSFX */
void func_B6F2_b2(void); /* EndSQ1SFX */
void func_9416_b2(void);
void func_9431_b2(void);
void func_94EE_b2(void);
void func_9526_b2(void);
void func_94E2_b2(void);
void func_9564_b2(void);
void func_B896_b2(void); /* EndTriSFX */
void func_B98C_b2(void); /* DecreaseSFXTriPeriod */
void func_B869_b2(void); /* WriteSFXTriPeriod */
void func_B978_b2(void); /* IncreaseSFXTriPeriod */
void func_B9A0_b2(void); /* DivideSFXTriPeriod */
void func_B8C3_b2(void); /* RndTriPeriods */
void func_BA41_b2(void); /* UpdateVolumeEnvelope */
void func_BA08_b2(void); /* LoadMusicSQ1SQ2Periods */
void func_B3F0_b2(void); /* EndOrLoopMusic */
void func_BA37_b2(void); /* UpdateAllVolumeEnvelopes */
void func_B9F3_b2(void); /* ResetVolumeIndex */
void func_BB1C_b2(void); /* LoadNextMusicChannelInstr_Continued */
void func_BADC_b2(void); /* LoadNextMusicChannelInstr */
void func_BBDE_b2(void); /* MusicChannelInstr_SongNoteNoise */
void func_BBB7_b2(void); /* UpdateMusicTriLinearCount */
void func_BAB3_b2(void); /* IncrementToNextMusicChannel */
void func_BBA8_b2(void); /* SetMusicInstrDelayToLength */
void func_BBCD_b2(void); /* UpdateMusicTriLinearCount_setToNoteLength */
void func_BB37_b2(void); /* LoadNextMusicChannelInstr_Continued_ReturnFromUpdateMusicTriLinearCount */
void func_BAA5_b2(void); /* UpdateAllMusicChannels */
void func_BCAA_b2(void); /* Music00Init */
void func_BCA4_b2(void); /* Music01Init */
void func_BC9A_b2(void); /* Music02Init */
void func_BC96_b2(void); /* Music03Init */
void func_BC89_b2(void); /* Music04Init */
void func_BC9E_b2(void); /* Music05Init */
void func_B9E4_b2(void); /* SetVolumeAndDisableSweep */
void func_BF19_b2(void); /* InitializeMusic */
void func_BD79_b2(void);
void func_BDAC_b2(void);
void func_BD77_b2(void);
void func_BD9F_b2(void);
void func_BE08_b2(void); /* SongPowerUpTri */
void func_BE3E_b2(void); /* SongFadeInSQ1 */
void func_BEB0_b2(void);
void func_BF1B_b2(void);
void func_BF0B_b2(void);
void func_BF67_b2(void);
void func_AF53_b2(void);
void func_80C1_b2(void); /* EnemyIfMoveFailedUp_bounce */
void func_D798(void);
void func_A0C6_b3(void); /* UpdateBullet_CollisionWithZebetiteAndMotherBrainGlass */
void func_9BAF_b3(void); /* Cannon_ShootEnProjectile */
void func_FD5F(void); /* UpdateMellow_StorePositionToTemp */
void func_FD6C(void); /* UpdateMellow_LoadPositionFromTemp */
void func_8DF7_b6(void);
void func_90BF_b6(void);
void func_90BC_b6(void);
void func_99AD_b6(void);
void func_99F8_b6(void);
void func_9A00_b6(void);
void func_801B_b6(void);
void func_9A79_b6(void);
void func_801E_b6(void);
void func_8021_b6(void);
void func_9D9E_b6(void);
void func_9DDF_b6(void);
void func_9E87_b6(void);
void func_916D_b6(void);
void func_918C_b6(void);
void func_8008_b6(void);
void func_9817_b6(void);
void func_9F0A_b6(void);
void func_9F8C_b6(void);
void func_A0FA_b6(void);
void func_A0B2_b6(void);
void func_A0E5_b6(void);
void func_A0BA_b6(void);
void func_A1E5_b6(void);
void func_A237_b6(void);
void func_A28A_b6(void);
void func_A2ED_b6(void);
void func_A30D_b6(void);
void func_A2F5_b6(void);
void func_A31B_b6(void);
void func_A462_b6(void);
void func_A44C_b6(void);
void func_A655_b6(void);
void func_A657_b6(void);
void func_8D95_b0(void); /* LoadTanksAndMissiles_loop_tanks */
void func_BB19_b5(void); /* GotoUpdateMusicTriLinearCount */
void func_BB16_b5(void); /* GotoMusicChannelInstr_SongNoteNoise */
void func_BA9D_b5(void); /* GotoEndOrLoopMusic */
void func_BAA1_b5(void); /* GotoUpdateAllVolumeEnvelopes */
void func_BAB0_b5(void); /* MusicChannelBaseEmpty */
void func_BC8D_b5(void);
void func_BC8B_b5(void); /* XYMusicInit */
void func_B3FC_b5(void); /* CheckMusicFlags */
void func_A93E_b5(void);
void func_AFD7_b5(void);
void func_AFE4_b5(void);
void func_BB19_b2(void); /* GotoUpdateMusicTriLinearCount */
void func_BB16_b2(void); /* GotoMusicChannelInstr_SongNoteNoise */
void func_BA9D_b2(void); /* GotoEndOrLoopMusic */
void func_BAA1_b2(void); /* GotoUpdateAllVolumeEnvelopes */
void func_BAB0_b2(void); /* MusicChannelBaseEmpty */
void func_BC8D_b2(void);
void func_BC8B_b2(void); /* XYMusicInit */
void func_B3FC_b2(void); /* CheckMusicFlags */
void func_A93E_b2(void);
void func_9EF9_b3(void); /* Xplus16 */
void func_915E_b6(void);
void func_A76F_b6(void);
void func_A508_b6(void);
void func_A8D4_b6(void);
void func_A8C2_b6(void);
void func_A8ED_b6(void);
void func_A93D_b6(void);
void func_A91F_b6(void);
void func_A994_b6(void);
void func_AA84_b6(void);
void func_D748(void);
void func_AC2A_b6(void);
void func_AC26_b6(void);
void func_AC28_b6(void);
void func_AC73_b6(void);
void func_AC6E_b6(void);
void func_AD9B_b6(void);
void func_AE3F_b6(void);
void func_AE8D_b6(void);
void func_A1F2_b6(void);
void func_A1FA_b6(void);
void func_8810_b6(void);
void func_AF83_b5(void);
void func_C020(void);
void func_B039_b6(void);
void func_B10A_b6(void);
void func_B1E0_b6(void);
void func_80C7_b6(void);
void func_B25D_b6(void);
void func_B295_b6(void);
void func_E0E0(void);
void func_B29D_b6(void);
void func_B2DC_b6(void);
void func_B2DF_b6(void);
void func_C080(void);
void func_C088(void);
void func_8040_b6(void);
void func_B39C_b6(void);
void func_B3A0_b6(void);
void func_C6CE(void);
void func_A0C7_b6(void);
void func_AA63_b6(void);
void func_ABFB_b6(void);
void func_AC07_b6(void);
void func_B713_b6(void);
void func_B766_b6(void);
void func_B76E_b6(void);
void func_B7B3_b6(void);
void func_B81C_b6(void);
void func_B853_b6(void);
void func_B89E_b6(void);
void func_AC71_b6(void);
void func_AC6D_b6(void);
void func_A1AD_b6(void);
void func_A1B5_b6(void);
void func_87FD_b6(void);
void func_AF53_b5(void);
void func_84C8_b0(void);
void func_84C8_b1(void);
void func_84C8_b2(void);
void func_84C8_b3(void);
void func_84C8_b4(void);
void func_84C8_b5(void);
void func_84C8_b6(void);
void func_B82E_b6(void);
void func_B404_b6(void);
void func_B452_b6(void);
void func_B4A9_b6(void);
void func_B98C_b6(void);
void func_B896_b6(void);
void func_B9A0_b6(void);
void func_B978_b6(void);
void func_B869_b6(void);
void func_BA41_b6(void);
void func_BA08_b6(void);
void func_B3F0_b6(void); /* GFX_RidlBG */
void func_BA37_b6(void);
void func_B9F3_b6(void);
void func_BB1C_b6(void);
void func_BADC_b6(void);
void func_BBDE_b6(void);
void func_BBB7_b6(void);
void func_BAB3_b6(void);
void func_BBA8_b6(void);
void func_BBCD_b6(void);
void func_BB37_b6(void);
void func_B4BD_b6(void);
void func_BC53_b6(void);
void func_BAA5_b6(void);
void func_BCAA_b6(void);
void func_BCA4_b6(void);
void func_BC9A_b6(void);
void func_BC96_b6(void);
void func_BC89_b6(void);
void func_BC9E_b6(void);
void func_B9E4_b6(void);
void func_BF19_b6(void);
void func_BD77_b6(void);
void func_BD9F_b6(void);
void func_BE08_b6(void);
void func_BE3E_b6(void);
void func_BEB0_b6(void);
void func_BF1B_b6(void);
void func_BF0B_b6(void);
void func_BF67_b6(void);
void func_A93E_b6(void);
void func_FF4F(void);
void func_BB19_b6(void);
void func_BB16_b6(void);
void func_BA9D_b6(void);
void func_BAA1_b6(void);
void func_BAB0_b6(void);
void func_BC8D_b6(void);
void func_BC8B_b6(void);
void func_B3FC_b6(void);
void func_CA2F(void);
void func_D0CB(void);
void func_FA21(void);
void func_C4FB(void);
void func_C800(void); /* CopyGFXBlock_RTS */
void func_FBD1(void);
void func_E001(void);
void func_F1D0(void);
void func_F3B1(void);
void func_FD85(void);
void func_FC84(void);
void func_FC85(void);
void func_C820(void);
void func_C159(void);
void func_C16D(void); /* ClearNameTables_nameTable0 */
void func_FF86(void); /* TileBlastAnim */
void func_FE86(void);
void func_FA85(void);
void func_FA86(void);
void func_DE21(void);
void func_C4DF(void);
void func_D0C4(void);
void func_C267(void);
void func_C115(void);
void func_C0BD(void);
void func_E021(void);
void func_C1E1(void);
void func_CA21(void);
void func_C216(void);
void func_C97F(void);
void func_F011(void);
void func_C91E(void);
void func_F003(void);
void func_C909(void);
void func_D006(void);
void func_C16E(void);
void func_FB29(void);
void func_FB2A(void);
void func_CA01(void);
void func_C19F(void); /* HiPPUTable */
void func_C1A0(void);
void func_FAD1(void);
void func_CAFA(void);
void func_CAFB(void);
void func_F7D0(void);
void func_F7D1(void);
void func_F0AA(void);
void func_F4AA(void);
void func_FB10(void);
void func_FB11(void);
void func_E801(void);
void func_E0E1(void);
void func_D01C(void);
void func_C220(void);
void func_E6E9(void);
void func_F001(void);
void func_C514(void);
void func_D608(void);
void func_D018(void);
void func_D019(void);
void func_C602(void);
void func_C604(void); /* InitBrinstarGFX */
void func_C61F(void);
void func_F02A(void);
void func_D603(void);
void func_CA2A(void);
void func_F711(void);
void func_C8A8(void);
void func_C8AA(void);
void func_FCA6(void);
void func_C802(void);
void func_F5D0(void);
void func_C36C(void);
void func_C376(void); /* EndVRAMStruct */
void func_C8C3(void);
void func_C6C3(void);
void func_C6C4(void);
void func_F6D0(void);
void func_C606(void);
void func_C607(void);
void func_C377(void);
void func_E808(void);
void func_C620(void);
void func_C622(void); /* InitNorfairGFX */
void func_C3C7(void);
void func_E3D1(void);
void func_C2D1(void);
void func_C960(void);
void func_F8B1(void);
void func_E5C4(void);
void func_E538(void);
void func_E539(void);
void func_C435(void);
void func_F01A(void);
void func_FCF1(void);
void func_FEA5(void);
void func_E729(void);
void func_D01E(void);
void func_F0D0(void);
void func_F0D1(void);
void func_FAA6(void);
void func_D920(void);
void func_C4DA(void);
void func_C43E(void);
void func_D081(void);
void func_D02D(void);
void func_C921(void);
void func_F005(void);
void func_F006(void);
void func_D92D(void);
void func_EAF5(void);
void func_FE2A(void);
void func_E821(void);
void func_C4E9(void);
void func_C831(void);
void func_C45E(void);
void func_D721(void);
void func_C5D8(void);
void func_D420(void);
void func_FA11(void);
void func_C623(void);
void func_F099(void);
void func_F09A(void);
void func_C646(void);
void func_C678(void);
void func_C6A0(void);
void func_C24C(void);
void func_F069(void);
void func_E0B9(void);
void func_E0BA(void);
void func_CA88(void);
void func_CA89(void);
void func_D520(void);
void func_D521(void);
void func_C7D6(void);
void func_EF4C(void);
void func_EF78(void); /* AdvanceRow */
void func_EF79(void);
void func_EF8C(void); /* AdvanceRow_endIf_B */
void func_C60C(void);
void func_C806(void);
void func_EED0(void);
void func_E6EE(void);
void func_C7DC(void);
void func_FC2A(void);
void func_E700(void);
void func_C029(void);
void func_C02A(void);
void func_F085(void);
void func_CA19(void);
void func_E876(void);
void func_C43A(void);
void func_C43D(void); /* WriteAndWait */
void func_C8BC(void);
void func_DAAD(void);
void func_C8B1(void);
void func_E721(void);
void func_EA2C(void);
void func_C85A(void);
void func_F8D0(void);
void func_E6F8(void);
void func_F3D0(void);
void func_F3D1(void);
void func_E630(void);
void func_E631(void);
void func_C448(void);
void func_C44D(void); /* WritePPUCtrl */
void func_C45C(void); /* ExitSub */
void func_CA3B(void);
void func_CA3C(void);
void func_F810(void);
void func_F811(void);
void func_E0AB(void);
void func_E868(void);
void func_F2D0(void);
void func_F2D1(void);
void func_CBFE(void);
void func_CA70(void);
void func_CA71(void);
void func_F00F(void);
void func_D9AD(void);
void func_D9AE(void);
void func_F120(void);
void func_F121(void);
void func_E1F2(void);
void func_CB2A(void);
void func_F002(void);
void func_C4AB(void);
void func_C903(void);
void func_CB8F(void);
void func_C999(void);
void func_F00A(void);
void func_E6C4(void);
void func_E6C5(void);
void func_FE19(void);
void func_FE1A(void);
void func_E806(void);
void func_FEE9(void);
void func_E632(void);
void func_CDB0(void);
void func_D9CD(void);
void func_C9FF(void);
void func_CF6C(void);
void func_DE48(void);
void func_FF05(void);
void func_C01E(void);
void func_F008(void);
void func_C005(void);
void func_CA97(void);
void func_CAA2(void);
void func_C878(void);
void func_E8C9(void);
void func_F4D0(void);
void func_C868(void);
void func_C869(void);
void func_E6CA(void);
void func_E6CB(void);
void func_CAEF(void); /* SavedDataTable */
void func_CAF0(void);
void func_CAF1(void);
void func_D069(void);
void func_CB17(void);
void func_CB18(void); /* AgeTable */
void func_C0C8(void);
void func_F346(void);
void func_F74B(void); /* ReadTableAt968B */
void func_D4C0(void);
void func_D92C(void); /* StartMusic */
void func_D79F(void); /* GetObjRoomRAMPtr */
void func_D7AE(void);
void func_D94D(void);
void func_CC0E(void);
void func_D7B4(void);
void func_D9D5(void);
void func_FA9E(void);
void func_F93C(void);
void func_DD21(void);
void func_FBDE(void);
void func_FE1C(void);
void func_E0C2(void);
void func_F220(void);
void func_FAF3(void);
void func_DB18(void);
void func_DB38(void);
void func_D020(void);
void func_E5D0(void);
void func_E5D1(void); /* UpdateNameTable_inc1 */
void func_DBD1(void);
void func_CC1B(void);
void func_C6CC(void);
void func_C6CD(void);
void func_CF29(void);
void func_CF2A(void);
void func_CF2E(void);
void func_F0CF(void);
void func_CF5E(void);
void func_CF6B(void); /* SetSamusAnim */
void func_CF77(void); /* SetSamusPntUp */
void func_CF81(void); /* NoHorzMoveNoDelay */
void func_E120(void);
void func_E121(void);
void func_E1E2(void);
void func_C9E2(void);
void func_EE21(void);
void func_CD6E(void);
void func_E80A(void);
void func_C9E8(void);
void func_C9E9(void);
void func_F028(void);
void func_CF6F(void);
void func_CCBE(void); /* RunAnimationTbl */
void func_C0BE(void);
void func_CCC0(void); /* RunAccelerationTbl */
void func_CCC2(void); /* SamusRun */
void func_CCCC(void);
void func_CD04(void);
void func_CD10(void);
void func_CCF0(void);
void func_CD09(void);
void func_CD84(void);
void func_CD0E(void); /* samL05 */
void func_CCC1(void);
void func_D031(void);
void func_C026(void);
void func_C027(void);
void func_C003(void);
void func_D148(void);
void func_CD01(void);
void func_CF89(void);
void func_CF2F(void);
void func_CF4C(void); /* ClearHorzMvmntData */
void func_CCB8(void);
void func_CDC0(void);
void func_D053(void);
void func_D054(void);
void func_CB97(void);
void func_CFC4(void);
void func_CDD8(void);
void func_CF56(void);
void func_CF5D(void); /* SetSamusStand_NoFootstep */
void func_C5E2(void);
void func_F04E(void);
void func_CC99(void);
void func_CDFB(void);
void func_E26A(void);
void func_F092(void);
void func_CD93(void);
void func_CD9C(void); /* IsScrewAttackActive */
void func_CDB1(void);
void func_CD9D(void);
void func_CDAD(void);
void func_CDAF(void);
void func_F00E(void);
void func_CD03(void);
void func_F6BD(void);
void func_F077(void);
void func_F078(void);
void func_CBDF(void);
void func_CE85(void);
void func_D0CE(void);
void func_D0CF(void);
void func_F070(void);
void func_F071(void);
void func_C632(void);
void func_C633(void);
void func_E872(void);
void func_E873(void);
void func_C9C2(void);
void func_CF4F(void);
void func_CAD0(void);
void func_D00F(void);
void func_F320(void);
void func_CBF4(void);
void func_FFCA(void);
void func_F06F(void);
void func_F9F0(void);
void func_F9F1(void);
void func_F0C8(void);
void func_F0C9(void);
void func_F324(void);
void func_F7B0(void);
void func_FB21(void);
void func_C3FC(void);
void func_E220(void);
void func_CBE3(void);
void func_CC8C(void);
void func_C3DB(void);
void func_CD0F(void);
void func_F929(void);
void func_CF82(void);
void func_CFB8(void);
void func_D097(void);
void func_D098(void);
void func_CF4D(void);
void func_C54C(void);
void func_CFC6(void);
void func_FCA9(void);
void func_CA04(void);
void func_CBCB(void);
void func_D056(void);
void func_CF78(void);
void func_CA06(void);
void func_CA07(void);
void func_D903(void);
void func_D099(void); /* Table04 */
void func_D09A(void);
void func_D09C(void); /* SamusJump_CheckFire */
void func_D0A3(void);
void func_D0A0(void);
void func_D0A1(void);
void func_D0AA(void);
void func_D0B0(void);
void func_D0A8(void);
void func_D0D1(void);
void func_D09B(void);
void func_D096(void); /* Table06 */
void func_F210(void);
void func_D035(void);
void func_D036(void);
void func_E8BF(void);
void func_FD90(void);
void func_D639(void);
void func_CECF(void);
void func_D145(void);
void func_D151(void);
void func_E0A3(void);
void func_CBA9(void);
void func_EBBD(void);
void func_D0F2(void);
void func_C8F7(void);
void func_D0C0(void);
void func_D093(void);
void func_D1F8(void);
void func_EB20(void);
void func_EB21(void);
void func_D35A(void);
void func_D38F(void);
void func_D273(void); /* BulletSpeedXTable */
void func_D274(void);
void func_D316(void);
void func_D26F(void); /* BulletForwardsOffsetXTable */
void func_D270(void);
void func_D307(void);
void func_CBB5(void);
void func_F40C(void);
void func_F808(void);
void func_FC04(void);
void func_D341(void);
void func_E3BC(void);
void func_FEAA(void);
void func_FEAB(void);
void func_D33E(void); /* HorizontalMissileAnims */
void func_D34E(void);
void func_CB9F(void);
void func_CE04(void);
void func_CE21(void);
void func_F551(void);
void func_C64C(void);
void func_C64D(void);
void func_CBC7(void);
void func_C5D1(void);
void func_C956(void);
void func_C957(void);
void func_C664(void);
void func_D05A(void);
void func_D48D(void);
void func_ED66(void);
void func_F07A(void);
void func_CC08(void);
void func_E24A(void);
void func_D412(void);
void func_EED4(void);
void func_C905(void);
void func_C9FC(void);
void func_E51A(void);
void func_D0F0(void);
void func_C8FF(void);
void func_D47F(void);
void func_E4F2(void);
void func_F0A0(void);
void func_F0A1(void);
void func_D4B5(void);
void func_E98A(void);
void func_D0AB(void);
void func_CB21(void);
void func_FC21(void);
void func_D5DB(void);
void func_DE14(void);
void func_DE15(void);
void func_E420(void);
void func_D5E5(void);
void func_C6DE(void);
void func_FE61(void);
void func_FE06(void);
void func_D100(void);
void func_D523(void);
void func_DDD5(void);
void func_FEC6(void);
void func_D4EC(void);
void func_F7EA(void);
void func_D0F8(void);
void func_D518(void);
void func_D00B(void);
void func_D2FB(void);
void func_F9B1(void);
void func_E81F(void);
void func_C021(void);
void func_EBF0(void);
void func_D652(void);
void func_E9BF(void);
void func_CA90(void);
void func_CA91(void);
void func_C074(void);
void func_FE04(void);
void func_DE1A(void);
void func_FED2(void);
void func_FED3(void);
void func_CB9B(void);
void func_FED7(void);
void func_D78C(void);
void func_C0CA(void);
void func_E9C3(void);
void func_E90B(void);
void func_E96B(void);
void func_FE49(void);
void func_D807(void);
void func_FDE5(void);
void func_E6A8(void);
void func_D220(void);
void func_E6D3(void);
void func_D649(void);
void func_D867(void);
void func_FED8(void);
void func_F0CA(void);
void func_EE1E(void);
void func_C440(void);
void func_CDAE(void);
void func_E253(void);
void func_F187(void);
void func_C96A(void);
void func_C96B(void);
void func_F153(void);
void func_F1C0(void);
void func_D9BB(void);
void func_E1E1(void); /* BitScan */
void func_DC8F(void); /* UpdateObjAnim */
void func_DCC3(void); /* GetSpriteCntrlData */
void func_DFDF(void); /* IsObjectVisible */
void func_DC67(void); /* CreateItemID */
void func_DC7F(void); /* AreObjectsTouching */
void func_E038(void); /* SpriteAttrsOverride */
void func_E002(void);
void func_E020(void);
void func_E000(void);
void func_E011(void);
void func_E02D(void);
void func_E02E(void);
void func_E004(void);
void func_DCD1(void);
void func_DCAD(void);
void func_E029(void);
void func_DFEE(void);
void func_DCF0(void);
void func_E605(void);
void func_D07E(void);
void func_F420(void);
void func_E010(void);
void func_EE04(void);
void func_C812(void);
void func_DA1B(void);
void func_DA4D(void);
void func_DADB(void);
void func_DA3E(void);
void func_DA3B(void); /* StatueAnimFrameTable */
void func_DA3C(void);
void func_FE2D(void);
void func_FE2E(void);
void func_DE03(void);
void func_DE04(void);
void func_FE68(void);
void func_FE69(void);
void func_DA39(void); /* StatueXTable */
void func_DA3A(void);
void func_DE0B(void);
void func_DE0C(void);
void func_C88E(void);
void func_D61A(void);
void func_C98D(void);
void func_C98E(void);
void func_C38D(void);
void func_C38E(void);
void func_FEDD(void);
void func_FC11(void);
void func_DB43(void);
void func_ECF0(void);
void func_ECF1(void);
void func_CD90(void);
void func_CD91(void);
void func_C568(void);
void func_C569(void);
void func_F05C(void);
void func_C989(void);
void func_DC80(void);
void func_CBFA(void);
void func_C84D(void);
void func_DC1D(void);
void func_F061(void);
void func_D0DE(void);
void func_C7D0(void);
void func_F0FE(void);
void func_F0FC(void);
void func_C421(void);
void func_F173(void);
void func_F1A8(void);
void func_FA4C(void);
void func_FA4D(void);
void func_F100(void);
void func_C804(void);
void func_DF2E(void);
void func_C975(void);
void func_D014(void);
void func_C96C(void);
void func_C92E(void);
void func_C92F(void);
void func_F79E(void);
void func_C493(void);
void func_F095(void);
void func_C495(void);
void func_E60A(void);
void func_C997(void);
void func_F013(void);
void func_FA19(void);
void func_C896(void);
void func_F7BE(void);
void func_FBBE(void);
void func_DCC4(void);
void func_FE4B(void);
void func_FE4C(void);
void func_DC8B(void); /* ExplodeRotationTbl */
void func_DC8C(void);
void func_F54C(void);
void func_DCF6(void);
void func_C84B(void);
void func_F59D(void); /* PlaySnd1 */
void func_F59E(void);
void func_C8DF(void);
void func_F69E(void);
void func_C80A(void);
void func_DFE0(void);
void func_FD2A(void);
void func_C9E0(void);
void func_EF2A(void);
void func_EF4B(void); /* DrawMetatile_loop */
void func_EF4D(void);
void func_DFBE(void);
void func_E0BD(void);
void func_E0BE(void);
void func_F055(void);
void func_F056(void);
void func_E64B(void);
void func_DF1A(void);
void func_E810(void);
void func_C590(void); /* InitBank3 */
void func_C591(void);
void func_FDC9(void);
void func_C915(void);
void func_E610(void);
void func_DF1C(void);
void func_E611(void);
void func_E60E(void);
void func_C9F1(void);
void func_DF76(void);
void func_F86A(void);
void func_DFAE(void);
void func_FCC5(void);
void func_C910(void);
void func_C06A(void);
void func_F8BD(void);
void func_F06B(void);
void func_F8DE(void);
void func_F89D(void);
void func_FABC(void);
void func_FABD(void);
void func_C86A(void);
void func_C86B(void);
void func_F9BD(void);
void func_ECB0(void);
void func_D029(void);
void func_E174(void);
void func_E199(void);
void func_E100(void);
void func_F4E0(void);
void func_F4E1(void);
void func_E003(void);
void func_F0E0(void);
void func_F0E1(void);
void func_FCE1(void);
void func_C688(void);
void func_C689(void);
void func_E1AE(void);
void func_E5C8(void);
void func_FBB0(void);
void func_F057(void);
void func_FBF1(void);
void func_CAFC(void);
void func_E205(void);
void func_E21C(void);
void func_E818(void);
void func_D047(void);
void func_D048(void);
void func_D8AA(void);
void func_CDD9(void);
void func_F4B1(void);
void func_E25E(void);
void func_CE93(void);
void func_E37B(void);
void func_F04A(void);
void func_E458(void);
void func_E31B(void);
void func_D065(void);
void func_F0EE(void);
void func_E4A4(void);
void func_ED00(void);
void func_ED01(void);
void func_C9D0(void);
void func_E521(void);
void func_E3E6(void);
void func_E627(void);
void func_E366(void);
void func_E669(void);
void func_FDB0(void);
void func_D977(void);
void func_ED03(void);
void func_FAA2(void);
void func_FAA3(void);
void func_D0FA(void);
void func_D0FB(void);
void func_E44A(void);
void func_C943(void);
void func_C953(void);
void func_EFC9(void);
void func_F049(void);
void func_C90D(void);
void func_C61E(void);
void func_E540(void);
void func_E6E5(void);
void func_CA49(void);
void func_CA4A(void);
void func_F0CB(void);
void func_E0FD(void);
void func_EFE1(void);
void func_E8FF(void);
void func_C660(void);
void func_C661(void);
void func_E85A(void);
void func_E572(void);
void func_E702(void);
void func_E560(void); /* PPUAddrs */
void func_E561(void);
void func_E562(void); /* RoomRAMAddrs */
void func_E563(void);
void func_DD08(void);
void func_E55F(void);
void func_D0E6(void);
void func_E565(void);
void func_E5E0(void); /* UpdateNameTable_controlBitsTable */
void func_F0F3(void);
void func_C6C9(void);
void func_C941(void);
void func_C951(void);
void func_EE52(void);
void func_C949(void);
void func_C94A(void);
void func_C60A(void);
void func_C60B(void);
void func_FDC7(void);
void func_E621(void);
void func_FDE7(void);
void func_FDDE(void);
void func_E591(void);
void func_FF6A(void);
void func_C80E(void);
void func_F5BE(void);
void func_FD39(void);
void func_E793(void);
void func_C924(void);
void func_C959(void);
void func_CA59(void);
void func_E7E7(void);
void func_F072(void);
void func_F00C(void);
void func_D091(void);
void func_CBB9(void);
void func_E7DF(void);
void func_F6FE(void);
void func_F5BC(void);
void func_E960(void);
void func_DE2A(void);
void func_D012(void);
void func_C008(void);
void func_D076(void);
void func_C9FA(void);
void func_C929(void);
void func_C92B(void); /* GameEngine */
void func_C969(void);
void func_C974(void);
void func_C95A(void);
void func_C948(void);
void func_C942(void);
void func_C952(void);
void func_C958(void);
void func_C934(void);
void func_C936(void);
void func_C93B(void);
void func_C94B(void);
void func_C96E(void);
void func_C970(void);
void func_EC9C(void);
void func_ED99(void);
void func_EA06(void);
void func_F820(void);
void func_EFF9(void);
void func_EAAB(void);
void func_CA38(void);
void func_CA39(void);
void func_C835(void);
void func_EF8D(void);
void func_C933(void);
void func_F0A7(void);
void func_E57D(void);
void func_E70D(void);
void func_EB0D(void);
void func_EAD5(void);
void func_F172(void); /* GetObjectXSlotPosition */
void func_F186(void); /* GetObjectYSlotPosition */
void func_F1A7(void); /* GetRadiusSumsOfObjXSlotAndObjYSlot */
void func_EB7B(void);
void func_D0EC(void);
void func_C810(void);
void func_FB9D(void);
void func_FB7C(void);
void func_C8EA(void);
void func_C97E(void); /* UpdateAge */
void func_C9A6(void); /* PrepareGameOver */
void func_C9B1(void); /* PauseMode */
void func_C9C4(void); /* GoPassword */
void func_C9D7(void); /* SamusIntro */
void func_CC1A(void); /* GoSamusHandler */
void func_CC36(void); /* SamusStand */
void func_D002(void); /* SamusJump */
void func_D0E1(void); /* SamusRoll */
void func_D198(void); /* SamusPntUp */
void func_D3A8(void); /* SamusDoor */
void func_D41A(void); /* SamusDead */
void func_D41F(void); /* SamusDead2 */
void func_D423(void); /* SamusElevator */
void func_CC98(void); /* SetSamusRun */
void func_CFC3(void); /* SetSamusJump */
void func_D0B5(void); /* SetSamusRoll */
void func_D147(void); /* StopVertMovement */
void func_CCB7(void); /* SetSamusRunAccel */
void func_CF55(void); /* SetSamusStand */
void func_CD92(void); /* SetMirrorCntrlBit */
void func_D055(void); /* SamusJump_CheckHorzMovement */
void func_CA96(void); /* GetGameDataIndex */
void func_CAA1(void); /* EraseAllGameData */
void func_CAC6(void); /* SavedDataBaseAddr */
void func_CC8B(void); /* SetSamusExplode */
void func_D001(void);
void func_D0CA(void);
void func_CAC5(void);
void func_D0C8(void);
void func_D0C5(void);
void func_D01B(void);
void func_D005(void);
void func_CA02(void);
void func_D01D(void);
void func_CFD1(void);
void func_D01F(void);
void func_D080(void);
void func_D00A(void);
void func_D0E9(void);
void func_D008(void);
void func_C998(void);
void func_D02E(void);
void func_CA00(void);
void func_CAC7(void);
void func_D010(void);
void func_D00C(void);
void func_D068(void);
void func_D021(void);
void func_D041(void);
void func_C9E1(void);
void func_D1EF(void);
void func_D030(void);
void func_D039(void);
void func_CACF(void);
void func_CA03(void);
void func_D0D0(void);
void func_D0F1(void);
void func_D0C1(void);
void func_D092(void);
void func_D26C(void);
void func_D090(void);
void func_D059(void);
void func_D057(void);
void func_D0EF(void);
void func_D0FF(void);
void func_D0F7(void);
void func_C996(void);
void func_D08B(void);
void func_D0FD(void);
void func_D083(void);
void func_C9A8(void);
void func_D085(void);
void func_D07D(void);
void func_C988(void);
void func_D0DD(void);
void func_C986(void);
void func_C9DF(void);
void func_D00E(void);
void func_D0E0(void);
void func_C9F0(void);
void func_D06B(void);
void func_D028(void);
void func_CAE2(void);
void func_CAE3(void);
void func_D066(void);
void func_C9D1(void);
void func_D0E5(void);
void func_D04B(void);
void func_D0E7(void);
void func_CA10(void);
void func_CACA(void);
void func_CACB(void);
void func_D077(void);
void func_C9F9(void);
void func_D44C(void);
void func_D44D(void);
void func_D0EB(void);
void func_D0ED(void);
void func_C9F2(void);
void func_CAB1(void);
void func_CFF3(void);
void func_D0F4(void);
void func_C982(void);
void func_CA0C(void);
void func_C9AA(void);
void func_D060(void);
void func_C9B5(void);
void func_CC69(void);
void func_D1B3(void);
void func_CAE0(void);
void func_CAAB(void);
void func_CF84(void);
void func_C984(void);
void func_C9B9(void);
void func_C9C1(void);
void func_D0D8(void);
void func_D0BC(void);
void func_C98A(void);
void func_D14C(void);
void func_CA0A(void);
void func_D050(void);
void func_C980(void);
void func_D034(void);
void func_D1B9(void); /* SamusPntUp_endIf_B */
void func_D24C(void);
void func_CCBD(void);
void func_C9A0(void);
void func_C99B(void); /* UpdateAge_loop */
void func_EE4B(void);
void func_EC0A(void);
void func_C81E(void);
void func_C1D0(void);
void func_C1D1(void);
void func_FB5D(void);
void func_EA11(void);
void func_EF11(void);
void func_EF13(void); /* DrawStructRow */
void func_EF20(void);
void func_EF21(void);
void func_EF29(void);
void func_EF2B(void); /* DrawMetatile */
void func_ED5C(void);
void func_ED7B(void);
void func_EE10(void);
void func_EE11(void);
void func_EE31(void);
void func_C500(void);
void func_F050(void);
void func_E0F0(void);
void func_EDA1(void);
void func_EF01(void);
void func_EDC4(void);
void func_D64C(void);
void func_EDD7(void);
void func_CD08(void);
void func_EE3E(void);
void func_D907(void);
void func_D908(void);
void func_D906(void);
void func_EE87(void);
void func_E4AD(void);
void func_E4AE(void);
void func_E48E(void);
void func_D0B1(void);
void func_EEC7(void);
void func_C6D1(void);
void func_F063(void);
void func_E63F(void);
void func_EF9B(void);
void func_C567(void);
void func_C00A(void);
void func_CA67(void);
void func_CA68(void);
void func_FC60(void);
void func_F3FD(void);
void func_CFF4(void);
void func_C0A0(void);
void func_C93A(void);
void func_F19B(void);
void func_D070(void);
void func_F14A(void);
void func_C917(void);
void func_F32B(void);
void func_E0D0(void);
void func_F278(void);
void func_F141(void);
void func_F283(void);
void func_F1B4(void);
void func_F163(void);
void func_F2EE(void);
void func_F312(void);
void func_F1D3(void);
void func_FBBA(void);
void func_D94C(void);
void func_F267(void);
void func_E9F3(void);
void func_E50B(void);
void func_E50C(void);
void func_F2E9(void);
void func_F339(void);
void func_F307(void);
void func_D9B0(void);
void func_D9B1(void);
void func_F27A(void);
void func_F333(void);
void func_F341(void);
void func_EBD1(void);
void func_F2E0(void);
void func_F271(void);
void func_CEAD(void);
void func_CEAE(void);
void func_E0A9(void);
void func_F2C0(void);
void func_F27C(void);
void func_F380(void);
void func_F3AB(void);
void func_F6BA(void);
void func_F683(void);
void func_F68D(void); /* InitEnAnimIndex */
void func_F677(void);
void func_F7BB(void);
void func_F40B(void);
void func_F4DF(void);
void func_F51F(void);
void func_E54C(void);
void func_C8F0(void);
void func_DE1B(void);
void func_F7BC(void);
void func_CA0B(void);
void func_D082(void);
void func_CEFA(void);
void func_CBBD(void);
void func_CD05(void);
void func_CBC1(void);
void func_DE09(void);
void func_F516(void);
void func_C94C(void);
void func_ECCA(void);
void func_CBD3(void);
void func_C90F(void);
void func_CBB1(void);
void func_CBCF(void);
void func_C038(void);
void func_DE0F(void);
void func_DCFD(void);
void func_F845(void);
void func_F68E(void);
void func_C9AB(void);
void func_E0C9(void);
void func_DDAD(void);
void func_DDAE(void);
void func_F9DE(void);
void func_F99E(void);
void func_DEA8(void);
void func_FADE(void);
void func_FADF(void);
void func_DE98(void);
void func_FEA9(void);
void func_F7B4(void);
void func_F745(void);
void func_FBA9(void);
void func_E7A9(void);
void func_EFA1(void);
void func_DE61(void);
void func_CBA5(void);
void func_F69A(void);
void func_D120(void);
void func_D121(void);
void func_DFA9(void);
void func_F8F0(void);
void func_F8F1(void);
void func_F43D(void);
void func_F1F1(void);
void func_D06C(void);
void func_F8E9(void);
void func_F8F9(void);
void func_F691(void);
void func_FA4A(void);
void func_D061(void);
void func_FA5C(void);
void func_FA1F(void);
void func_F0F1(void);
void func_FA61(void);
void func_F988(void);
void func_DDFA(void);
void func_CCF1(void);
void func_E2B9(void);
void func_F519(void);
void func_F97D(void);
void func_CF90(void);
void func_F0F8(void);
void func_DCAE(void);
void func_FAB5(void);
void func_EAB9(void);
void func_EBB9(void);
void func_F97F(void);
void func_FF20(void);
void func_DDFF(void);
void func_FE6B(void);
void func_FE6C(void);
void func_DE6B(void);
void func_C91C(void);
void func_D4F0(void);
void func_D4F1(void);
void func_F694(void);
void func_C0F1(void);
void func_EC20(void);
void func_FBED(void);
void func_FBFB(void);
void func_FBFC(void);
void func_FEFB(void);
void func_FBFE(void);
void func_E4CD(void);
void func_E4CE(void);
void func_FC99(void);
void func_ED11(void);
void func_FCBB(void);
void func_FD09(void);
void func_FD60(void);
void func_C9B4(void);
void func_FDA1(void);
void func_F604(void);
void func_FD6D(void);
void func_C9B6(void);
void func_F538(void);
void func_FD5B(void);
void func_FD5C(void);
void func_C0C3(void);
void func_C0C4(void);
void func_FF02(void);
void func_F08D(void);
void func_F08E(void);
void func_EB8E(void);
void func_E637(void);
void func_E638(void);
void func_FDC0(void);
void func_DD4C(void);
void func_ED19(void);
void func_DC55(void);
void func_FE6E(void);
void func_FE15(void);
void func_FF3D(void);
void func_CC20(void);
void func_CC21(void);
void func_E601(void);
void func_CA12(void);
void func_C611(void);
void func_C329(void);
void func_E02A(void);
void func_FF09(void);
void func_C01B(void);
void func_FFC1(void);
void func_FDEF(void);
void func_B3E4_b1(void);
void func_B3E4_b6(void);
void func_C4AD(void);
void func_C4B2(void); /* PrepVertMirror */
void func_CAF7(void); /* ChooseEnding_loop */
void func_F4F4(void);
void func_E70B(void);
void func_B0E7_b0(void);
void func_B0E7_b2(void);
void func_B0E7_b3(void);
void func_B0E7_b4(void);
void func_B0E7_b5(void);
void func_B0E7_b6(void);
void func_E3D9(void);
void func_CFD4(void);
void func_F05D(void);
void func_A903_b0(void);
void func_A903_b2(void);
void func_A903_b3(void);
void func_A903_b4(void);
void func_A903_b5(void);
void func_A903_b6(void);
void func_CA66(void);
void func_EFB1(void);
void func_FEBC(void);
void func_F368(void);
void func_F95E(void);
void func_A820_b0(void);
void func_A820_b1(void);
void func_A820_b2(void);
void func_A820_b3(void);
void func_A820_b4(void);
void func_A820_b5(void);
void func_A820_b6(void);
void func_CC92(void);
void func_8CCF_b0(void);
void func_8CCF_b6(void);
void func_EB4B(void);
void func_ED25(void);
void func_B503_b0(void);
void func_B503_b1(void);
void func_B503_b2(void);
void func_B503_b3(void);
void func_B503_b4(void);
void func_B503_b5(void);
void func_B503_b6(void);
void func_D60A(void);
void func_CA63(void);
void func_FDFB(void); /* UpdateTourianItems_loop */
void func_CB6D(void);
void func_D9E6(void);
void func_C385(void);
void func_DBA4(void);
void func_83AD_b0(void);
void func_83AD_b1(void);
void func_83AD_b2(void);
void func_83AD_b3(void);
void func_83AD_b4(void);
void func_83AD_b5(void);
void func_83AD_b6(void);
void func_D0C7(void);
void func_D02B(void);
void func_FAFE(void);
void func_C8F3(void);
void func_D003(void);
void func_D8D1(void);
void func_EE59(void);
void func_F38C(void);
void func_A203_b0(void);
void func_A203_b2(void); /* Palette19_BANK2 */
void func_A203_b3(void);
void func_A203_b4(void);
void func_A203_b5(void);
void func_A203_b6(void);
void func_FD33(void);
void func_CC0A(void);
void func_CBC3(void);
void func_B0D4_b1(void);
void func_B920_b3(void);
void func_B151_b3(void);
void func_B144_b3(void);
void func_B154_b3(void);
void func_B19B_b3(void);
void func_B1A8_b3(void);
void func_9830_b3(void);
void func_B1E0_b3(void);
void func_80C7_b3(void); /* EnemyIfMoveFailedUp_facingHorizontal */
void func_B2C5_b3(void);
void func_B374_b3(void); /* LoadSFXData_SQ2 */
void func_B36C_b3(void); /* LoadSFXData_Tri */
void func_B370_b3(void); /* LoadSFXData_Noise */
void func_B493_b3(void); /* UpdateContFlags */
void func_B452_b3(void); /* InitSFXData */
void func_B463_b3(void);
void func_B472_b3(void); /* InitSFXData_Tri */
void func_B4A9_b3(void); /* IncrementSFXFrame */
void func_B58F_b3(void); /* EndNoiseSFX */
void func_B587_b3(void); /* GotoInitSFXData */
void func_B4A2_b3(void); /* ClearCurrentSoundFlagsAndContFlags */
void func_B5A5_b3(void); /* MultiSFXInit */
void func_B62C_b3(void); /* WriteSQ1SQ2PeriodLow */
void func_B5CD_b3(void); /* EndMultiSFX */
void func_B6F2_b3(void); /* EndSQ1SFX */
void func_B896_b3(void); /* EndTriSFX */
void func_B98C_b3(void); /* DecreaseSFXTriPeriod */
void func_B869_b3(void); /* WriteSFXTriPeriod */
void func_B978_b3(void); /* IncreaseSFXTriPeriod */
void func_B9A0_b3(void); /* DivideSFXTriPeriod */
void func_B8C3_b3(void); /* RndTriPeriods */
void func_BA41_b3(void); /* UpdateVolumeEnvelope */
void func_BA08_b3(void); /* LoadMusicSQ1SQ2Periods */
void func_B3F0_b3(void); /* EndOrLoopMusic */
void func_BA37_b3(void); /* UpdateAllVolumeEnvelopes */
void func_B9F3_b3(void); /* ResetVolumeIndex */
void func_BB1C_b3(void); /* LoadNextMusicChannelInstr_Continued */
void func_BADC_b3(void); /* LoadNextMusicChannelInstr */
void func_BBDE_b3(void); /* MusicChannelInstr_SongNoteNoise */
void func_BBB7_b3(void); /* UpdateMusicTriLinearCount */
void func_BAB3_b3(void); /* IncrementToNextMusicChannel */
void func_BBA8_b3(void); /* SetMusicInstrDelayToLength */
void func_BBCD_b3(void); /* UpdateMusicTriLinearCount_setToNoteLength */
void func_BB37_b3(void); /* LoadNextMusicChannelInstr_Continued_ReturnFromUpdateMusicTriLinearCount */
void func_BAA5_b3(void); /* UpdateAllMusicChannels */
void func_BCAA_b3(void); /* Music00Init */
void func_BCA4_b3(void); /* Music01Init */
void func_BC9A_b3(void); /* Music02Init */
void func_BC96_b3(void); /* Music03Init */
void func_BC89_b3(void); /* Music04Init */
void func_BC9E_b3(void); /* Music05Init */
void func_B9E4_b3(void); /* SetVolumeAndDisableSweep */
void func_BF19_b3(void); /* InitializeMusic */
void func_BD77_b3(void);
void func_BD9F_b3(void);
void func_BE08_b3(void); /* SongPowerUpTri */
void func_BE3E_b3(void); /* SongFadeInSQ1 */
void func_BEB0_b3(void);
void func_BF1B_b3(void);
void func_BF0B_b3(void);
void func_BF67_b3(void);
void func_E3E0(void);
void func_A82D_b1(void);
void func_8001_b1(void);
void func_8801_b1(void);
void func_B001_b1(void);
void func_A862_b1(void);
void func_A8D0_b1(void);
void func_A8AC_b1(void);
void func_A998_b1(void);
void func_A9FC_b1(void);
void func_BA41_b1(void); /* UpdateVolumeEnvelope */
void func_BA08_b1(void); /* LoadMusicSQ1SQ2Periods */
void func_BA37_b1(void); /* UpdateAllVolumeEnvelopes */
void func_B9F3_b1(void); /* ResetVolumeIndex */
void func_BAB3_b1(void); /* IncrementToNextMusicChannel */
void func_BB37_b1(void); /* LoadNextMusicChannelInstr_Continued_ReturnFromUpdateMusicTriLinearCount */
void func_B9E4_b1(void); /* SetVolumeAndDisableSweep */
void func_BB19_b1(void); /* GotoUpdateMusicTriLinearCount */
void func_BB16_b1(void); /* GotoMusicChannelInstr_SongNoteNoise */
void func_BAB0_b1(void); /* MusicChannelBaseEmpty */
void func_AA49_b1(void);
void func_BBDE_b1(void); /* MusicChannelInstr_SongNoteNoise */
void func_BBB7_b1(void); /* UpdateMusicTriLinearCount */
void func_BBCD_b1(void); /* UpdateMusicTriLinearCount_setToNoteLength */
void func_AA9E_b1(void);
void func_AAE2_b1(void);
void func_AB00_b1(void);
void func_AC72_b1(void);
void func_BCA4_b1(void); /* Music01Init */
void func_BC9E_b1(void); /* Music05Init */
void func_BE08_b1(void); /* SongPowerUpTri */
void func_BC8B_b1(void); /* XYMusicInit */
void func_AC76_b1(void);
void func_AC8A_b1(void);
void func_AF5D_b1(void);
void func_B04D_b1(void);
void func_B0BA_b1(void);
void func_B0CA_b1(void);
void func_9830_b1(void);
void func_B1E0_b1(void);
void func_80C7_b1(void); /* EnemyIfMoveFailedUp_facingHorizontal */
void func_80F6_b1(void); /* EnemyIfMoveFailedUp_abortLoop */
void func_B2C5_b1(void);
void func_B329_b1(void); /* RunSFXSQ1InitRoutine */
void func_B374_b1(void); /* LoadSFXData_SQ2 */
void func_B36C_b1(void); /* LoadSFXData_Tri */
void func_B370_b1(void); /* LoadSFXData_Noise */
void func_B493_b1(void); /* UpdateContFlags */
void func_B452_b1(void); /* InitSFXData */
void func_B463_b1(void);
void func_B472_b1(void); /* InitSFXData_Tri */
void func_B4A9_b1(void); /* IncrementSFXFrame */
void func_B58F_b1(void); /* EndNoiseSFX */
void func_B597_b1(void); /* EndNoiseSFX_RTS */
void func_B587_b1(void); /* GotoInitSFXData */
void func_B4A2_b1(void); /* ClearCurrentSoundFlagsAndContFlags */
void func_B5A5_b1(void); /* MultiSFXInit */
void func_B62C_b1(void); /* WriteSQ1SQ2PeriodLow */
void func_B5CD_b1(void); /* EndMultiSFX */
void func_B6F2_b1(void); /* EndSQ1SFX */
void func_B896_b1(void); /* EndTriSFX */
void func_B98C_b1(void); /* DecreaseSFXTriPeriod */
void func_B869_b1(void); /* WriteSFXTriPeriod */
void func_B978_b1(void); /* IncreaseSFXTriPeriod */
void func_B9A0_b1(void); /* DivideSFXTriPeriod */
void func_B8C3_b1(void); /* RndTriPeriods */
void func_B452_b0(void); /* InitSFXData */
void func_B463_b0(void);
void func_B472_b0(void); /* InitSFXData_Tri */
void func_A1D1_b4(void);
void func_B17E_b3(void);
void func_9A06_b3(void); /* GetMetroidAccel */
void func_9A07_b3(void);
void func_80C1_b3(void); /* EnemyIfMoveFailedUp_bounce */
void func_BB19_b3(void); /* GotoUpdateMusicTriLinearCount */
void func_BB16_b3(void); /* GotoMusicChannelInstr_SongNoteNoise */
void func_BA9D_b3(void); /* GotoEndOrLoopMusic */
void func_BAA1_b3(void); /* GotoUpdateAllVolumeEnvelopes */
void func_BAB0_b3(void); /* MusicChannelBaseEmpty */
void func_BC8D_b3(void);
void func_BC8B_b3(void); /* XYMusicInit */
void func_B3FC_b3(void); /* CheckMusicFlags */
void func_A93E_b3(void);
void func_AFCC_b1(void);
void func_AFDA_b1(void);
void func_B3F0_b1(void); /* EndOrLoopMusic */
void func_BB1C_b1(void); /* LoadNextMusicChannelInstr_Continued */
void func_BADC_b1(void); /* LoadNextMusicChannelInstr */
void func_BBA8_b1(void); /* SetMusicInstrDelayToLength */
void func_BAA5_b1(void); /* UpdateAllMusicChannels */
void func_BAA8_b1(void);
void func_BCAA_b1(void); /* Music00Init */
void func_BC9A_b1(void); /* Music02Init */
void func_BC96_b1(void); /* Music03Init */
void func_BC89_b1(void); /* Music04Init */
void func_BF19_b1(void); /* InitializeMusic */
void func_BD77_b1(void);
void func_BD9F_b1(void);
void func_BE3E_b1(void); /* SongFadeInSQ1 */
void func_BEB0_b1(void);
void func_BF1B_b1(void);
void func_BF0B_b1(void);
void func_BF67_b1(void);
void func_80C1_b1(void); /* EnemyIfMoveFailedUp_bounce */
void func_B374_b0(void); /* LoadSFXData_SQ2 */
void func_B36C_b0(void); /* LoadSFXData_Tri */
void func_B370_b0(void); /* LoadSFXData_Noise */
void func_B493_b0(void); /* UpdateContFlags */
void func_BA9D_b1(void); /* GotoEndOrLoopMusic */
void func_BAA1_b1(void); /* GotoUpdateAllVolumeEnvelopes */
void func_BC8D_b1(void);
void func_B3FC_b1(void); /* CheckMusicFlags */
void func_A93E_b1(void);
void func_D184(void);
void func_E6C9(void);
void func_D384(void);
void func_C484(void);
void func_C8B9(void);
void func_E6DB(void);
void func_CF20(void);
void func_E6BF(void);
void func_F0C0(void);
void func_C085(void);
void func_E6C6(void);
void func_E649(void);
void func_D0B7(void);
void func_CA6E(void);
void func_DE33(void);
void func_F0BC(void);
void func_C634(void);
void func_DC0E(void);
void func_DC1C(void); /* GetItemXYPos */
void func_DD0E(void);
void func_FD0E(void);
void func_D0BD(void);
void func_C0C6(void);
void func_C88A(void);
void func_C4F3(void);
void func_C4FA(void); /* MMCWritePrgBank */
void func_C285(void);
void func_C2E6(void);
void func_C3A5(void);
void func_C3C6(void); /* SeparateControlBits */
void func_FFB9(void);
void func_C4A4(void);
void func_C98B(void);
void func_C4E6(void);
void func_C4E8(void); /* CheckBankSwitch_OK */
void func_C4EF(void); /* BankSwitch */
void func_C4F0(void);
void func_C509(void);
void func_C50A(void);
void func_C501(void);
void func_C502(void);
void func_C404(void);
void func_E790(void);
void func_F7F0(void);
void func_F040(void);
void func_D024(void);
void func_D08E(void);
void func_CD8E(void);
void func_F910(void);
void func_CA69(void);
void func_FB4C(void);
void func_C991(void);
void func_E902(void);
void func_C814(void);
void func_C81D(void); /* MoreInit */
void func_E80C(void);
void func_E90A(void);
void func_FAB0(void);
void func_C8A5(void);
void func_D07B(void);
void func_C97C(void);
void func_D07C(void);
void func_D4D0(void);
void func_E385(void);
void func_E2B1(void);
void func_EE60(void);
void func_E6F0(void);
void func_F08A(void);
void func_DD06(void);
void func_E285(void);
void func_EEF3(void);
void func_C92D(void);
void func_CD4C(void);
void func_D0B6(void);
void func_D03D(void);
void func_D04D(void);
void func_EEB9(void);
void func_EE2D(void);
void func_ED06(void);
void func_C600(void);
void func_E7D0(void);
void func_F0E6(void);
void func_C9C0(void);
void func_DC4C(void);
void func_C9B0(void);
void func_FA90(void);
void func_F5A2(void); /* PlaySnd2 */
void func_D0F6(void);
void func_E9D0(void);
void func_CA4C(void);
void func_F0F6(void);
void func_FD00(void);
void func_FEBD(void);
void func_FAC9(void);
void func_F0FA(void);
void func_C946(void);
void func_FECB(void);
void func_F2A0(void);
void func_E504(void);
void func_E130(void);
void func_FCBD(void);
void func_FC9D(void);
void func_FF7D(void);
void func_FFBC(void);
void func_C504(void);
void func_FD9D(void);
void func_E642(void);
void func_E63D(void);
void func_DE17(void);
void func_C944(void);
void func_E310(void);
void func_C9EB(void);
void func_D0E4(void);
void func_CC4C(void);
void func_F054(void);
void func_F560(void);
void func_DD40(void);
void func_DD50(void);
void func_FF22(void);
void func_DD0F(void);
void func_F8F6(void);
void func_FAF6(void);
void func_FD04(void);
void func_F6D9(void);
void func_F8AD(void);
void func_FA0D(void);
void func_FC0D(void);
void func_FD7D(void);
void func_FB7D(void);
void func_E5F0(void);
void func_C56B(void);
void func_FDC5(void);
void func_F098(void);
void func_EEB0(void);
void func_D09F(void);
void func_E09E(void);
void func_C99E(void);
void func_C099(void);
void func_F09E(void);
void func_D99E(void); /* SamusCollisionWithSolidEntities_notOnEnemy */
void func_D905(void);
void func_F0E2(void);
void func_EB30(void);
void func_E390(void);
void func_F64B(void);
void func_F8F2(void);
void func_F408(void);
void func_DF90(void);
void func_FE1D(void); /* UpdateAllTileBlasts_loop */
void func_B1C8_b0(void);
void func_B1C8_b1(void);
void func_B1C8_b2(void);
void func_B1C8_b3(void);
void func_B1C8_b4(void);
void func_B1C8_b5(void);
void func_B1C8_b6(void);
void func_C39B(void); /* WritePaletteStringByte */
void func_FD68(void);
void func_F274(void);
void func_FD0B(void);
void func_E2E3(void); /* SamusMoveVertically_loop_down */
void func_FAF4(void); /* UpdateAllPipeBugHoles_loop */
void func_99E5_b3(void);
void func_8009_b3(void); /* CommonJump_CrawlerAIRoutine_ShouldCrawlerMove */
void func_9B45_b3(void);
void func_9B85_b3(void);
void func_A0F1_b3(void);
void func_847F_b3(void);
void func_C531(void); /* InitBank0 */
void func_C54A(void);
void func_C543(void);
void func_C552(void); /* InitBank1 */
void func_C583(void); /* InitBank2 */
void func_C585(void);
void func_C5B6(void); /* InitBank4 */
void func_C5C3(void); /* InitBank5 */
void func_84C8_b7(void);
void func_A0A0_b7(void);
void func_BFB9_b7(void);
void func_9998_b7(void);
void func_A9C4_b7(void);
void func_8500_b7(void);
void func_A90F_b7(void);
void func_9900_b7(void);
void func_A8B9_b7(void);
void func_99C5_b7(void);
void func_A900_b7(void);
void func_8501_b7(void);
void func_AB20_b7(void);
void func_A0C7_b7(void);
void func_B3AD_b7(void);
void func_AB4C_b7(void);
void func_8000_b7(void);
void func_8D60_b7(void);
void func_A006_b7(void);
void func_9160_b7(void);
void func_A950_b7(void);
void func_A93E_b0(void); /* CopyMap */
void func_9983_b7(void);
void func_800F_b1(void); /* CommonJump_InitEnAnimIndex */
void func_800F_b3(void); /* CommonJump_InitEnAnimIndex */
void func_800F_b5(void); /* CommonJump_InitEnAnimIndex */
void func_8036_b1(void); /* CommonJump_EnemyGetDeltaY_UsingAcceleration */
void func_8036_b3(void); /* CommonJump_EnemyGetDeltaY_UsingAcceleration */
void func_8039_b1(void); /* CommonJump_EnemyGetDeltaX_UsingAcceleration */
void func_8039_b3(void); /* CommonJump_EnemyGetDeltaX_UsingAcceleration */
void func_8027_b1(void); /* CommonJump_ApplySpeedToPosition */
void func_8003_b1(void); /* CommonJump_UpdateEnemyCommon_noMove */
void func_8042_b1(void); /* CommonJump_SubtractHealth */
void func_8042_b2(void); /* CommonJump_SubtractHealth */
void func_8042_b4(void); /* CommonJump_SubtractHealth */
void func_8042_b5(void); /* CommonJump_SubtractHealth */
void func_8006_b1(void); /* CommonJump_UpdateEnemyCommon_noMoveNoAnim */
void func_801B_b1(void); /* CommonJump_EnemyFlipAfterDisplacement */
void func_801B_b3(void); /* CommonJump_EnemyFlipAfterDisplacement */
void func_801B_b5(void); /* CommonJump_EnemyFlipAfterDisplacement */
void func_801E_b1(void); /* CommonJump_InitEnActiveAnimIndex_NoInitOffset */
void func_801E_b3(void); /* CommonJump_InitEnActiveAnimIndex_NoInitOffset */
void func_801E_b5(void); /* CommonJump_InitEnActiveAnimIndex_NoInitOffset */
void func_8009_b1(void); /* CommonJump_CrawlerAIRoutine_ShouldCrawlerMove */
void func_8009_b5(void); /* CommonJump_CrawlerAIRoutine_ShouldCrawlerMove */
void func_800C_b1(void); /* CommonJump_UpdateEnemyAnim */
void func_800C_b3(void); /* CommonJump_UpdateEnemyAnim */
void func_800C_b5(void); /* CommonJump_UpdateEnemyAnim */
void func_802D_b1(void); /* CommonJump_EnemyGetDeltaY */
void func_802D_b2(void); /* CommonJump_EnemyGetDeltaY */
void func_802D_b3(void); /* CommonJump_EnemyGetDeltaY */
void func_802D_b5(void); /* CommonJump_EnemyGetDeltaY */
void func_8030_b1(void); /* CommonJump_EnemyGetDeltaX */
void func_8030_b2(void); /* CommonJump_EnemyGetDeltaX */
void func_8030_b3(void); /* CommonJump_EnemyGetDeltaX */
void func_8030_b5(void); /* CommonJump_EnemyGetDeltaX */
void func_8033_b1(void); /* CommonJump_EnemyBGCollideOrApplySpeed */
void func_8033_b2(void); /* CommonJump_EnemyBGCollideOrApplySpeed */
void func_8033_b3(void); /* CommonJump_EnemyBGCollideOrApplySpeed */
void func_8033_b5(void); /* CommonJump_EnemyBGCollideOrApplySpeed */
void func_802A_b1(void); /* CommonJump_0E */
void func_802A_b5(void); /* CommonJump_0E */
void func_B920_b0(void);
void func_B920_b1(void);
void func_B921_b1(void); /* StatueRaiseSFXInit */
void func_B920_b2(void);
void func_B329_b0(void); /* RunSFXSQ1InitRoutine */
void func_B330_b0(void); /* RunSFXSQ1ContRoutine */
void func_B4A9_b0(void); /* IncrementSFXFrame */
void func_B58F_b0(void); /* EndNoiseSFX */
void func_B587_b0(void); /* GotoInitSFXData */
void func_B4A2_b0(void); /* ClearCurrentSoundFlagsAndContFlags */
void func_B5A5_b0(void); /* MultiSFXInit */
void func_B62C_b0(void); /* WriteSQ1SQ2PeriodLow */
void func_B5CD_b0(void); /* EndMultiSFX */
void func_B6F2_b0(void); /* EndSQ1SFX */
void func_B896_b0(void); /* EndTriSFX */
void func_B98C_b0(void); /* DecreaseSFXTriPeriod */
void func_B869_b0(void); /* WriteSFXTriPeriod */
void func_B978_b0(void); /* IncreaseSFXTriPeriod */
void func_B9A0_b0(void); /* DivideSFXTriPeriod */
void func_B8C3_b0(void); /* RndTriPeriods */
void func_BA41_b0(void); /* UpdateVolumeEnvelope */
void func_BA08_b0(void); /* LoadMusicSQ1SQ2Periods */
void func_B3F0_b0(void); /* EndOrLoopMusic */
void func_BA37_b0(void); /* UpdateAllVolumeEnvelopes */
void func_B9F3_b0(void); /* ResetVolumeIndex */
void func_BB1C_b0(void); /* LoadNextMusicChannelInstr_Continued */
void func_BBDE_b0(void); /* MusicChannelInstr_SongNoteNoise */
void func_BBB7_b0(void); /* UpdateMusicTriLinearCount */
void func_BBA8_b0(void); /* SetMusicInstrDelayToLength */
void func_BBCD_b0(void); /* UpdateMusicTriLinearCount_setToNoteLength */
void func_BB37_b0(void); /* LoadNextMusicChannelInstr_Continued_ReturnFromUpdateMusicTriLinearCount */
void func_BAA5_b0(void); /* UpdateAllMusicChannels */
void func_BADC_b0(void); /* LoadNextMusicChannelInstr */
void func_BAB3_b0(void); /* IncrementToNextMusicChannel */
void func_BAB0_b0(void); /* MusicChannelBaseEmpty */
void func_BCA4_b0(void); /* Music01Init */
void func_BCAA_b0(void); /* Music00Init */
void func_BC9A_b0(void); /* Music02Init */
void func_BC96_b0(void); /* Music03Init */
void func_BC89_b0(void); /* Music04Init */
void func_BC9E_b0(void); /* Music05Init */
void func_B9E4_b0(void); /* SetVolumeAndDisableSweep */
void func_BF67_b0(void);
void func_BB19_b0(void); /* GotoUpdateMusicTriLinearCount */
void func_BB16_b0(void); /* GotoMusicChannelInstr_SongNoteNoise */
void func_BA9D_b0(void); /* GotoEndOrLoopMusic */
void func_BAA1_b0(void); /* GotoUpdateAllVolumeEnvelopes */
void func_BC8D_b0(void);
void func_BC8B_b0(void); /* XYMusicInit */
void func_B3FC_b0(void); /* CheckMusicFlags */
void func_8021_b1(void); /* CommonJump_SpawnEnProjectile */
void func_8021_b3(void); /* CommonJump_SpawnEnProjectile */
void func_8021_b4(void); /* CommonJump_SpawnEnProjectile */
void func_8021_b5(void); /* CommonJump_SpawnEnProjectile */
void func_803F_b1(void); /* CommonJump_DrawTileBlast */
void func_803F_b2(void); /* CommonJump_DrawTileBlast */
void func_803F_b4(void); /* CommonJump_DrawTileBlast */
void func_803F_b5(void); /* CommonJump_DrawTileBlast */
void func_B61C_b0(void);
void func_B61C_b1(void);
void func_B61C_b3(void);
void func_B61C_b4(void);
void func_B61C_b5(void);
void func_8045_b1(void); /* CommonJump_Base10Subtract */
void func_8045_b2(void); /* CommonJump_Base10Subtract */
void func_8045_b4(void); /* CommonJump_Base10Subtract */
void func_8045_b5(void); /* CommonJump_Base10Subtract */
void func_803C_b1(void); /* CommonJump_DrawEnemy */
void func_803C_b2(void); /* CommonJump_DrawEnemy */
void func_803C_b4(void); /* CommonJump_DrawEnemy */
void func_803C_b5(void); /* CommonJump_DrawEnemy */
void func_8001_b2(void);
void func_8001_b3(void);
void func_8001_b4(void);
void func_8001_b5(void);
void func_847F_b1(void);
void func_847F_b2(void);
void func_847F_b4(void);
void func_847F_b5(void);
void func_BF19_b0(void); /* InitializeMusic */
void func_80B0_b7(void);
void func_8296_b7(void);
void func_832F_b7(void);
void func_8180_b0(void);
void func_8182_b0(void); /* Crosshairs */
void func_8988_b0(void);
void func_B2EB_b0(void); /* SFXSQ1ContRoutineTbl */
void func_B2F9_b0(void);
void func_B30D_b0(void);
void func_B35C_b0(void); /* RunSFXMultiContRoutine */
void func_B364_b0(void); /* GotoRunSFXSQ1InitRoutine */
void func_B3C0_b0(void);
void func_B3E4_b0(void);
void func_B3CC_b0(void);
void func_B3DE_b0(void);
void func_B479_b0(void);
void func_B48D_b0(void);
void func_B557_b0(void);
void func_B575_b0(void);
void func_B948_b0(void);
void func_B95C_b0(void);
void func_B970_b0(void);
void func_B9B4_b0(void);
void func_B9B5_b0(void); /* DivideSFXTriPeriod_loop */
void func_B9C3_b0(void);
void func_BA11_b0(void);
void func_BBEC_b0(void);
void func_BC23_b0(void);
void func_BC34_b0(void);
void func_BC4B_b0(void); /* ContinueMusic */
void func_BC7A_b0(void); /* GotoMusic01Init */
void func_BEE9_b0(void);
void func_C000_b0(void); /* RandomNumbers */
void func_BA40_b1(void);
void func_BA4B_b1(void);
void func_871F_b1(void); /* ObjPlace1 */
void func_872B_b1(void); /* ObjPlace2 */
void func_8737_b1(void); /* ObjPlace3 */
void func_8747_b1(void); /* ObjPlace4 */
void func_8749_b1(void); /* ObjPlaceD */
void func_8751_b1(void); /* ObjPlace5 */
void func_875D_b1(void); /* ObjPlace7 */
void func_8775_b1(void); /* ObjPlace8 */
void func_878D_b1(void); /* ObjPlace9 */
void func_8791_b1(void); /* ObjPlaceA */
void func_87CB_b1(void); /* ObjFrame00 */
void func_87DD_b1(void); /* ObjFrame_SamusRun1 */
void func_8802_b1(void); /* ObjFrame06 */
void func_883E_b1(void); /* ObjFrame_SamusRunFire1 */
void func_8863_b1(void); /* ObjFrame0F */
void func_8AC7_b1(void);
void func_8B79_b1(void); /* UpdateAllDoors */
void func_87F0_b1(void); /* ObjFrame_SamusRun2 */
void func_8818_b1(void); /* ObjFrame_SamusStand */
void func_882C_b1(void); /* ObjFrame09 */
void func_8851_b1(void); /* ObjFrame_SamusRunFire2 */
void func_8874_b1(void); /* ObjFrame11 */
void func_8885_b1(void); /* ObjFrame13 */
void func_888F_b1(void); /* ObjFrame_SamusSalto1 */
void func_8899_b1(void); /* ObjFrame_SamusSalto2 */
void func_88A3_b1(void); /* ObjFrame_SamusSalto3 */
void func_88AD_b1(void); /* ObjFrame_SamusRoll3 */
void func_88B8_b1(void); /* ObjFrame_SamusRoll2 */
void func_88C3_b1(void); /* ObjFrame_SamusRoll1 */
void func_88CE_b1(void); /* ObjFrame_SamusRoll0 */
void func_88D9_b1(void); /* ObjFrame1F */
void func_88EE_b1(void); /* ObjFrame_Elevator */
void func_88F8_b1(void); /* ObjFrame24 */
void func_88FE_b1(void); /* ObjFrame_MissileLeft */
void func_8904_b1(void); /* ObjFrame_MissileUp */
void func_890A_b1(void); /* ObjFrame_RegularBullet */
void func_890F_b1(void); /* ObjFrame29 */
void func_8914_b1(void); /* ObjFrame_SamusPntUp */
void func_8928_b1(void); /* ObjFrame2C */
void func_89A9_b1(void); /* ObjFrame_SamusRunPntUp1 */
void func_89D2_b1(void); /* ObjFrame43 */
void func_89E6_b1(void); /* ObjFrame_SamusRunPntUpFire1 */
void func_893C_b1(void); /* ObjFrame_DoorClosed */
void func_8948_b1(void); /* ObjFrame32 */
void func_8954_b1(void); /* ObjFrame34 */
void func_8961_b1(void); /* ObjFrame36 */
void func_8974_b1(void); /* ObjFrame_SamusJumpPntUpFire */
void func_8987_b1(void); /* ObjFrame3A */
void func_8995_b1(void); /* ObjFrame3D */
void func_89BE_b1(void); /* ObjFrame_SamusRunPntUp2 */
void func_8A0F_b1(void); /* ObjFrame_BombExplode1 */
void func_8A1D_b1(void); /* ObjFrame_BombExplodeBlank */
void func_8A21_b1(void); /* ObjFrame_WaveBeam */
void func_8B87_b1(void); /* UpdateDoor */
void func_8B9D_b1(void); /* UpdateDoor_Init */
void func_8C01_b1(void); /* UpdateDoor_Open */
void func_8C84_b1(void); /* UpdateDoor_LetSamusIn */
void func_8CC6_b1(void); /* UpdateDoor_Scroll */
void func_8CF0_b1(void); /* UpdateDoor_LetSamusOut */
void func_8CFB_b1(void); /* WriteDoorBGTiles_Solid */
void func_8CF7_b1(void); /* WriteDoorBGTiles_Air */
void func_8C76_b1(void); /* DoorSubRoutine8C76 */
void func_8AAE_b1(void); /* ObjFrame5D */
void func_8ABA_b1(void); /* ObjFrame5E */
void func_8CED_b1(void); /* Goto2DrawDoor */
void func_8CCF_b1(void);
void func_8A26_b1(void); /* ObjFrame4C */
void func_8A3C_b1(void); /* ObjFrame_Bomb0 */
void func_8A41_b1(void); /* ObjFrame_Bomb1 */
void func_8A4E_b1(void); /* ObjFrame_HighJumpItem */
void func_8A46_b1(void); /* ObjFrame_BombItem */
void func_8A56_b1(void); /* ObjFrame_LongBeamItem */
void func_8A5E_b1(void); /* ObjFrame_ScrewAttackItem */
void func_8A66_b1(void); /* ObjFrame_MaruMariItem */
void func_8A6E_b1(void); /* ObjFrame_VariaSuitItem */
void func_8A76_b1(void); /* ObjFrame_WaveBeamItem */
void func_8A7E_b1(void); /* ObjFrame_IceBeamItem */
void func_8A86_b1(void); /* ObjFrame_EnergyTankItem */
void func_8A8E_b1(void); /* ObjFrame_MissileItem */
void func_8A9C_b1(void); /* ObjFrame_SkreeProjectile */
void func_8AA1_b1(void); /* ObjFrame5B */
void func_8AA6_b1(void); /* ObjFrame5C */
void func_8AC4_b1(void); /* ObjFrame5F */
void func_8AD8_b1(void); /* ObjFrame_RidleyStatue */
void func_8AE9_b1(void); /* ObjFrame_MissileExplode0 */
void func_8AF3_b1(void); /* ObjFrame_MissileExplode1 */
void func_8B03_b1(void); /* ObjFrame_MissileExplode2 */
void func_95C6_b1(void); /* TwosComplement_ */
void func_99B8_b1(void); /* SidehopperFloorAIRoutine_BANK1 */
void func_99FA_b1(void); /* SkreeAIRoutine_BANK1 */
void func_9A44_b1(void); /* SkreeExit_Resting_BANK1 */
void func_9A49_b1(void); /* SkreeExit_Explode_BANK1 */
void func_9A4C_b1(void); /* CrawlerAIRoutine_BANK1 */
void func_9A8F_b1(void); /* CrawlerReorientSprite_BANK1 */
void func_9AA8_b1(void); /* CrawlerInsideCornerCheck_BANK1 */
void func_9ABD_b1(void); /* CrawlerFlipDirection_BANK1 */
void func_9AC6_b1(void); /* CrawlerOutsideCornerCheck_BANK1 */
void func_9ADA_b1(void); /* CrawlerOutsideCornerGetNextOrientation_BANK1 */
void func_9AE2_b1(void); /* JumpByRTSToMovementRoutine_BANK1 */
void func_9C1D_b1(void); /* KraidUpdateAllProjectiles_BANK1 */
void func_9C2A_b1(void); /* KraidUpdateProjectile_BANK1 */
void func_9C96_b1(void); /* LoadEnemyPositionFromTemp__BANK1 */
void func_9CA8_b1(void); /* StoreEnemyPositionToTemp__BANK1 */
void func_9CCC_b1(void); /* KraidTryToLaunchLint_BANK1 */
void func_9D05_b1(void); /* KraidTryToLaunchNail_BANK1 */
void func_B3C0_b1(void);
void func_B3CC_b1(void);
void func_B3DE_b1(void);
void func_B479_b1(void);
void func_B48D_b1(void);
void func_B50F_b1(void); /* SpitFlameSFXInit */
void func_B516_b1(void); /* SpitFlameSFXCont */
void func_B52B_b1(void); /* ScrewAttackSFXInit */
void func_B539_b1(void); /* ScrewAttackSFXCont */
void func_B557_b1(void);
void func_B56E_b1(void); /* MissileLaunchSFXInit */
void func_B575_b1(void);
void func_B57B_b1(void); /* MissileLaunchSFXCont */
void func_B583_b1(void); /* BombExplodeSFXInit */
void func_B58A_b1(void); /* NoiseSFXCont */
void func_B598_b1(void); /* SamusWalkSFXInit */
void func_B5EC_b1(void); /* BossHitSFXInit */
void func_B5F6_b1(void); /* BossHitSFXCont */
void func_B650_b1(void); /* SamusHitSFXCont */
void func_B673_b1(void); /* SamusHitSFXInit */
void func_B695_b1(void); /* IncorrectPasswordSFXInit */
void func_B6A1_b1(void); /* IncorrectPasswordSFXCont */
void func_B6B0_b1(void); /* MissilePickupSFXCont */
void func_B6CD_b1(void); /* MissilePickupSFXInit */
void func_B6D3_b1(void); /* EnergyPickupSFXCont */
void func_B6E7_b1(void); /* EnergyPickupSFXInit */
void func_B6ED_b1(void); /* SQ1SFXCont */
void func_B703_b1(void); /* SamusJumpSFXInit */
void func_B710_b1(void); /* EnemyHitSFXInit */
void func_B716_b1(void); /* BulletFireSFXInit */
void func_B735_b1(void); /* MetalSFXInit */
void func_B73C_b1(void); /* OutOfPipeSFXInit */
void func_B74F_b1(void); /* BulletFireSFXCont */
void func_B77A_b1(void); /* WaveBeamSFXInit */
void func_B781_b1(void); /* WaveBeamSFXCont */
void func_B7A6_b1(void); /* LoadSQ1PeriodLow_RTS */
void func_B7AC_b1(void); /* DoorOpenCloseSFXInit */
void func_B7CB_b1(void); /* DoorOpenCloseSFXCont */
void func_B7D9_b1(void); /* BeepSFXInit */
void func_B7E7_b1(void); /* BeepSFXCont */
void func_B7EF_b1(void); /* BigEnemyHitSFXInit */
void func_B80E_b1(void); /* BigEnemyHitSFXCont */
void func_B834_b1(void); /* SamusToBallSFXInit */
void func_B84F_b1(void); /* SamusToBallSFXCont */
void func_B878_b1(void); /* BombLaunchSFXInit */
void func_B87F_b1(void); /* BombLaunchSFXCont */
void func_B8A7_b1(void); /* MetroidHitSFXInit */
void func_B8B1_b1(void); /* MetroidHitSFXCont */
void func_B8D2_b1(void); /* SamusDieSFXInit */
void func_B8ED_b1(void); /* SamusDieSFXCont */
void func_B940_b1(void); /* StatueRaiseSFXCont */
void func_B948_b1(void);
void func_B95C_b1(void);
void func_B970_b1(void);
void func_B9B4_b1(void);
void func_B9B5_b1(void); /* DivideSFXTriPeriod_loop */
void func_B9C3_b1(void);
void func_BA11_b1(void);
void func_BC77_b1(void); /* GotoMusic00Init */
void func_BC7D_b1(void); /* GotoMusic02Init */
void func_BC80_b1(void); /* GotoMusic03Init */
void func_BC83_b1(void); /* GotoMusic04Init */
void func_BBEC_b1(void);
void func_BBF7_b1(void); /* MusicChannelInstr_SongNoteNoise_endIf_A */
void func_BC23_b1(void);
void func_BC34_b1(void);
void func_BEE9_b1(void);
void func_C2BF_b1(void); /* Adiv16 */
void func_C2C0_b1(void); /* Adiv8 */
void func_C2C5_b1(void); /* Amul16 */
void func_C3D4_b1(void); /* TwosComplement */
void func_CB73_b1(void); /* SelectSamusPalette */
void func_CBDA_b1(void); /* SFX_Door */
void func_CC03_b1(void); /* MotherBrainMusic */
void func_CC07_b1(void); /* TourianMusic */
void func_D2FD_b1(void); /* SetObjAnimIndex */
void func_DC1E_b1(void); /* MapScrollRoutine */
void func_E449_b1(void); /* NegateTemp00Temp01 */
void func_E770_b1(void); /* EnemyCheckMoveUp */
void func_E77B_b1(void); /* EnemyCheckMoveDown */
void func_E8F1_b1(void); /* EnemyCheckMoveLeft */
void func_E8FC_b1(void); /* EnemyCheckMoveRight */
void func_E96A_b1(void); /* MakeRoomRAMPtr */
void func_F744_b1(void); /* OrEnData05 */
void func_F74B_b1(void); /* ReadTableAt968B */
void func_B3C0_b2(void);
void func_B3E4_b2(void);
void func_B3CC_b2(void);
void func_B3DE_b2(void);
void func_B479_b2(void);
void func_B48D_b2(void);
void func_B557_b2(void);
void func_B575_b2(void);
void func_B948_b2(void);
void func_B95C_b2(void);
void func_B970_b2(void);
void func_B9B4_b2(void);
void func_B9B5_b2(void); /* DivideSFXTriPeriod_loop */
void func_B9C3_b2(void);
void func_BA11_b2(void);
void func_BBEC_b2(void);
void func_BC23_b2(void);
void func_BC34_b2(void);
void func_BEE9_b2(void);
void func_C2BF_b2(void); /* Adiv16 */
void func_C2C0_b2(void); /* Adiv8 */
void func_C2C5_b2(void); /* Amul16 */
void func_C3D4_b2(void); /* TwosComplement */
void func_CB73_b2(void); /* SelectSamusPalette */
void func_CBDA_b2(void); /* SFX_Door */
void func_CC03_b2(void); /* MotherBrainMusic */
void func_CC07_b2(void); /* TourianMusic */
void func_D2FD_b2(void); /* SetObjAnimIndex */
void func_DC1E_b2(void); /* MapScrollRoutine */
void func_E449_b2(void); /* NegateTemp00Temp01 */
void func_E770_b2(void); /* EnemyCheckMoveUp */
void func_E77B_b2(void); /* EnemyCheckMoveDown */
void func_E8F1_b2(void); /* EnemyCheckMoveLeft */
void func_E8FC_b2(void); /* EnemyCheckMoveRight */
void func_E96A_b2(void); /* MakeRoomRAMPtr */
void func_F744_b2(void); /* OrEnData05 */
void func_F74B_b2(void); /* ReadTableAt968B */
void func_9AF9_b3(void); /* SetRinkaSpeed_BANK3 */
void func_9DF2_b3(void); /* MotherBrain_Idle_CollideWithSamus */
void func_9E43_b3(void); /* UpdateMotherBrainFlashDelay */
void func_9F69_b3(void); /* MotherBrain_SpawnDoor */
void func_9FED_b3(void); /* MotherBrain_Idle_HandleBeingHit */
void func_A001_b3(void);
void func_A01B_b3(void); /* MotherBrain_Idle_UpdateAnimBrain */
void func_A028_b3(void);
void func_A02E_b3(void); /* MotherBrain_Idle_UpdateAnimEye */
void func_A041_b3(void); /* MotherBrain_DrawSprites */
void func_A072_b3(void); /* MotherBrain_Disappear_Disintegrate */
void func_B3C0_b3(void);
void func_B3E4_b3(void);
void func_B3CC_b3(void);
void func_B3DE_b3(void);
void func_B479_b3(void);
void func_B48D_b3(void);
void func_B557_b3(void);
void func_B575_b3(void);
void func_B948_b3(void);
void func_B95C_b3(void);
void func_B970_b3(void);
void func_B9B4_b3(void);
void func_B9B5_b3(void); /* DivideSFXTriPeriod_loop */
void func_B9C3_b3(void);
void func_BA11_b3(void);
void func_BAF2_b3(void);
void func_BBEC_b3(void);
void func_BC23_b3(void);
void func_BC34_b3(void);
void func_BEE9_b3(void);
void func_C2BF_b3(void); /* Adiv16 */
void func_C2C0_b3(void); /* Adiv8 */
void func_C2C5_b3(void); /* Amul16 */
void func_C3D4_b3(void); /* TwosComplement */
void func_CB73_b3(void); /* SelectSamusPalette */
void func_CBDA_b3(void); /* SFX_Door */
void func_CC03_b3(void); /* MotherBrainMusic */
void func_CC07_b3(void); /* TourianMusic */
void func_D2FD_b3(void); /* SetObjAnimIndex */
void func_DC1E_b3(void); /* MapScrollRoutine */
void func_E449_b3(void); /* NegateTemp00Temp01 */
void func_E770_b3(void); /* EnemyCheckMoveUp */
void func_E77B_b3(void); /* EnemyCheckMoveDown */
void func_E8F1_b3(void); /* EnemyCheckMoveLeft */
void func_E8FC_b3(void); /* EnemyCheckMoveRight */
void func_E96A_b3(void); /* MakeRoomRAMPtr */
void func_F744_b3(void); /* OrEnData05 */
void func_F74B_b3(void); /* ReadTableAt968B */
void func_B3C0_b4(void);
void func_B3E4_b4(void);
void func_B3CC_b4(void);
void func_B3DE_b4(void);
void func_B479_b4(void);
void func_B48D_b4(void);
void func_B557_b4(void);
void func_B575_b4(void);
void func_B948_b4(void);
void func_B95C_b4(void);
void func_B970_b4(void);
void func_B9B4_b4(void);
void func_B9B5_b4(void); /* DivideSFXTriPeriod_loop */
void func_B9C3_b4(void);
void func_BA11_b4(void);
void func_BAF2_b4(void);
void func_BBEC_b4(void);
void func_BC23_b4(void);
void func_BC34_b4(void);
void func_BEE9_b4(void);
void func_C2BF_b4(void); /* Adiv16 */
void func_C2C0_b4(void); /* Adiv8 */
void func_C2C5_b4(void); /* Amul16 */
void func_C3D4_b4(void); /* TwosComplement */
void func_CB73_b4(void); /* SelectSamusPalette */
void func_CBDA_b4(void); /* SFX_Door */
void func_CC03_b4(void); /* MotherBrainMusic */
void func_CC07_b4(void); /* TourianMusic */
void func_D2FD_b4(void); /* SetObjAnimIndex */
void func_DC1E_b4(void); /* MapScrollRoutine */
void func_E449_b4(void); /* NegateTemp00Temp01 */
void func_E770_b4(void); /* EnemyCheckMoveUp */
void func_E77B_b4(void); /* EnemyCheckMoveDown */
void func_E8F1_b4(void); /* EnemyCheckMoveLeft */
void func_E8FC_b4(void); /* EnemyCheckMoveRight */
void func_E96A_b4(void); /* MakeRoomRAMPtr */
void func_F744_b4(void); /* OrEnData05 */
void func_F74B_b4(void); /* ReadTableAt968B */
void func_871C_b5(void);
void func_95C6_b5(void); /* TwosComplement_ */
void func_98F8_b5(void); /* UpdateSwooperAnim_BANK5 */
void func_9958_b5(void); /* SwooperChangeEnemyType_BANK5 */
void func_99AD_b5(void); /* CrawlerReorientSprite_BANK5 */
void func_99C6_b5(void); /* CrawlerInsideCornerCheck_BANK5 */
void func_99DB_b5(void); /* CrawlerFlipDirection_BANK5 */
void func_99E4_b5(void); /* CrawlerOutsideCornerCheck_BANK5 */
void func_99F8_b5(void); /* CrawlerOutsideCornerGetNextOrientation_BANK5 */
void func_9A00_b5(void); /* JumpByRTSToMovementRoutine_BANK5 */
void func_9A07_b5(void);
void func_9A79_b5(void); /* RidleyTryToLaunchFireball_BANK5 */
void func_B3C0_b5(void);
void func_B3E4_b5(void);
void func_B3CC_b5(void);
void func_B3DE_b5(void);
void func_B479_b5(void);
void func_B48D_b5(void);
void func_B557_b5(void);
void func_B575_b5(void);
void func_B95C_b5(void);
void func_B970_b5(void);
void func_B9B4_b5(void);
void func_B9B5_b5(void); /* DivideSFXTriPeriod_loop */
void func_B9C3_b5(void);
void func_BA11_b5(void);
void func_BAF2_b5(void);
void func_BBEC_b5(void);
void func_BC34_b5(void);
void func_BEE9_b5(void);
void func_C2BF_b5(void); /* Adiv16 */
void func_C2C0_b5(void); /* Adiv8 */
void func_C2C5_b5(void); /* Amul16 */
void func_C3D4_b5(void); /* TwosComplement */
void func_CB73_b5(void); /* SelectSamusPalette */
void func_CBDA_b5(void); /* SFX_Door */
void func_CC03_b5(void); /* MotherBrainMusic */
void func_CC07_b5(void); /* TourianMusic */
void func_D2FD_b5(void); /* SetObjAnimIndex */
void func_DC1E_b5(void); /* MapScrollRoutine */
void func_E449_b5(void); /* NegateTemp00Temp01 */
void func_E770_b5(void); /* EnemyCheckMoveUp */
void func_E77B_b5(void); /* EnemyCheckMoveDown */
void func_E8F1_b5(void); /* EnemyCheckMoveLeft */
void func_E8FC_b5(void); /* EnemyCheckMoveRight */
void func_E96A_b5(void); /* MakeRoomRAMPtr */
void func_F744_b5(void); /* OrEnData05 */
void func_F74B_b5(void); /* ReadTableAt968B */
void func_B2A3_b0(void);
void func_B538_b0(void); /* ScrewAttackSFXInit_RTS */
void func_86FB_b1(void);
void func_86FD_b1(void); /* ObjPlace6 */
void func_8701_b1(void); /* ObjPlace0 */
void func_8700_b1(void);
void func_876D_b1(void);
void func_FE21(void);
void func_8927_b1(void);
void func_891A_b1(void);
void func_8A67_b1(void);
void func_8D9D_b1(void);
void func_8E05_b1(void);
void func_A0C7_b1(void);
void func_9144_b1(void);
void func_914A_b1(void);
void func_916E_b1(void);
void func_91FF_b1(void);
void func_91B9_b1(void);
void func_9203_b1(void);
void func_91C3_b1(void);
void func_9210_b1(void);
void func_9266_b1(void);
void func_925D_b1(void);
void func_C360(void);
void func_C36B(void); /* WritePPUByte */
void func_9332_b1(void);
void func_9303_b1(void);
void func_92E1_b1(void);
void func_933F_b1(void);
void func_DF73(void);
void func_9460_b1(void);
void func_8796_b1(void);
void func_8799_b1(void); /* ObjPlaceB */
void func_87A5_b1(void); /* ObjPlaceC */
void func_87B1_b1(void); /* ObjPlaceE */
void func_89F6_b1(void);
void func_89FB_b1(void); /* ObjFrame_SamusRunPntUpFire2 */
void func_99A1_b1(void); /* UpdateEnemyCommon_Decide_BANK1 */
void func_B538_b1(void); /* ScrewAttackSFXInit_RTS */
void func_B564_b1(void); /* IncrementNoisePeriod */
void func_B694_b1(void); /* SamusHitSFXInit_RTS */
void func_B6CC_b1(void); /* MissilePickupSFXCont_RTS */
void func_B739_b1(void); /* GotoInitSFXData2 */
void func_B8A6_b1(void); /* EndTriSFX_RTS */
void func_B8EC_b1(void); /* SamusDieSFXInit_RTS */
void func_B538_b2(void); /* ScrewAttackSFXInit_RTS */
void func_9DF1_b3(void);
void func_B538_b3(void); /* ScrewAttackSFXInit_RTS */
void func_B538_b4(void); /* ScrewAttackSFXInit_RTS */
void func_B538_b5(void); /* ScrewAttackSFXInit_RTS */
void func_913F_b1(void);
void func_9A07_b1(void);
void func_9F54_b1(void);
void func_95AB_b1(void);
void func_95C3_b1(void); /* AreaRoutine */
void func_95AE_b1(void);
void func_95B1_b1(void);
void func_95B4_b1(void);
void func_95B7_b1(void);
void func_95BA_b1(void);
void func_95C0_b1(void);
void func_95BD_b1(void);
void func_98DB_b1(void); /* EnemyMovement0F_R_BANK1 */
void func_A29E_b1(void); /* Palette03_BANK1_VRAMStructData2_start */
void func_A903_b1(void);
void func_A203_b1(void);
void func_9983_b1(void); /* EnProjectileMovement2_BANK1 */
void func_9993_b1(void);
void func_99BF_b1(void);
void func_99DE_b1(void);
void func_99A6_b1(void);
void func_9A03_b1(void);
void func_9A12_b1(void);
void func_99BA_b1(void); /* Sidehopper_Common_BANK1 */
void func_99C8_b1(void); /* CommonEnemyStub2_BANK1 */
void func_99CC_b1(void); /* CommonEnemyStub_BANK1 */
void func_9BD2_b1(void); /* KraidLintAIRoutine_BANK1 */
void func_9F52_b1(void);
void func_9FA4_b1(void);
void func_9161_b1(void);
void func_9173_b1(void);
void func_A44D_b1(void);
void func_B0E7_b1(void);
void func_B0A2_b1(void);
void func_A470_b1(void);
void func_A6FB_b1(void);
void func_A6ED_b1(void);
void func_A7AD_b1(void);
void func_A7BC_b1(void);
void func_A7FB_b1(void);
void func_A7CE_b1(void);

int call_by_address_cb(uint16_t addr, int _caller_bank) {
    if (addr < 0x8000) { return nes_interp_dispatch(addr); }
_dispatch_retry:
    switch (addr) {
        case 0xFFB0:
            func_FFB0(); break;
        case 0xC0D9:
            func_C0D9(); break;
        case 0xC0DA:
            func_C0DA(); break;
        case 0xC01A:
            func_C01A(); break;
        case 0xC0CC:
            func_C0CC(); break;
        case 0xC0D0:
            func_C0D0(); break;
        case 0xC01F:
            func_C01F(); break;
        case 0xC0C9:
            func_C0C9(); break;
        case 0xC03E:
            func_C03E(); break;
        case 0xC03F:
            func_C03F(); break;
        case 0xC075:
            func_C075(); break;
        case 0xC0AA:
            func_C0AA(); break;
        case 0xC0A8:
            func_C0A8(); break;
        case 0xC081:
            func_C081(); break;
        case 0xC06B:
            func_C06B(); break;
        case 0xC057:
            func_C057(); break;
        case 0xC0A3:
            func_C0A3(); break;
        case 0xC095:
            func_C095(); break;
        case 0xC0A1:
            func_C0A1(); break;
        case 0xC04D:
            func_C04D(); break;
        case 0xC037:
            func_C037(); break;
        case 0xC060:
            func_C060(); break;
        case 0xC048:
            func_C048(); break;
        case 0xC08A:
            func_C08A(); break;
        case 0xC01C:
            func_C01C(); break;
        case 0x9A07:
            switch (g_current_bank) {
                case 0: func_9A07_b0(); break;
                case 4: func_9A07_b4(); break;
                case 6: func_9A07_b6(); break;
                case 2: func_9A07_b2(); break;
                case 3: func_9A07_b3(); break;
                case 5: func_9A07_b5(); break;
                case 1: func_9A07_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xC1E0:
            func_C1E0(); break;
        case 0xC20E:
            func_C20E(); break;
        case 0xC200:
            func_C200(); break;
        case 0xC1E6:
            func_C1E6(); break;
        case 0xC2CA:
            func_C2CA(); break;
        case 0xC2D0:
            func_C2D0(); break;
        case 0xC29A:
            func_C29A(); break;
        case 0xC2A4:
            func_C2A4(); break;
        case 0xC215:
            func_C215(); break;
        case 0xC21F:
            func_C21F(); break;
        case 0xC24D:
            func_C24D(); break;
        case 0xC221:
            func_C221(); break;
        case 0xB3B4:
            switch (g_current_bank) {
                case 0: func_B3B4_b0(); break;
                case 1: func_B3B4_b1(); break;
                case 2: func_B3B4_b2(); break;
                case 3: func_B3B4_b3(); break;
                case 4: func_B3B4_b4(); break;
                case 5: func_B3B4_b5(); break;
                case 6: func_B3B4_b6(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xC158:
            func_C158(); break;
        case 0xC175:
            func_C175(); break;
        case 0xC184:
            func_C184(); break;
        case 0xC1A3:
            func_C1A3(); break;
        case 0xC1BB:
            func_C1BB(); break;
        case 0xC1A5:
            func_C1A5(); break;
        case 0xC4DE:
            func_C4DE(); break;
        case 0xC50F:
            func_C50F(); break;
        case 0xC266:
            func_C266(); break;
        case 0xC114:
            func_C114(); break;
        case 0xC155:
            func_C155(); break;
        case 0xC121:
            func_C121(); break;
        case 0xC0CB:
            func_C0CB(); break;
        case 0xC000:
            switch (g_current_bank) {
                default: func_C000(); break;
                case 0: func_C000_b0(); break;
            }
            break;
        case 0xC001:
            func_C001(); break;
        case 0xC004:
            func_C004(); break;
        case 0xC00B:
            func_C00B(); break;
        case 0xC002:
            func_C002(); break;
        case 0xC013:
            func_C013(); break;
        case 0xC010:
            func_C010(); break;
        case 0xC00E:
            func_C00E(); break;
        case 0xC009:
            func_C009(); break;
        case 0xC007:
            func_C007(); break;
        case 0xC00D:
            func_C00D(); break;
        case 0xC006:
            func_C006(); break;
        case 0xC0BC:
            func_C0BC(); break;
        case 0x9C45:
            func_9C45_b0(); break;
        case 0x8000:
            switch (g_current_bank) {
                case 1: func_8000_b1(); break;
                case 0: func_8000_b0(); break;
                case 2: func_8000_b2(); break;
                case 3: func_8000_b3(); break;
                case 4: func_8000_b4(); break;
                case 5: func_8000_b5(); break;
                case 6: func_8000_b6(); break;
                case 7: func_8000_b7(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x99DC:
            func_99DC_b2(); break;
        case 0x9F54:
            switch (g_current_bank) {
                case 0: func_9F54_b0(); break;
                case 2: func_9F54_b2(); break;
                case 3: func_9F54_b3(); break;
                case 4: func_9F54_b4(); break;
                case 5: func_9F54_b5(); break;
                case 6: func_9F54_b6(); break;
                case 1: func_9F54_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x8AC7:
            switch (g_current_bank) {
                case 7: func_CAC7(); break;
                case 0: func_8AC7_b0(); break;
                case 2: func_8AC7_b2(); break;
                case 3: func_8AC7_b3(); break;
                case 4: func_8AC7_b4(); break;
                case 5: func_8AC7_b5(); break;
                case 6: func_8AC7_b6(); break;
                case 1: func_8AC7_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xC4D9:
            func_C4D9(); break;
        case 0xB399:
            switch (g_current_bank) {
                case 0: func_B399_b0(); break;
                case 1: func_B399_b1(); break;
                case 2: func_B399_b2(); break;
                case 3: func_B399_b3(); break;
                case 4: func_B399_b4(); break;
                case 5: func_B399_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB31B:
            switch (g_current_bank) {
                case 0: func_B31B_b0(); break;
                case 1: func_B31B_b1(); break;
                case 2: func_B31B_b2(); break;
                case 3: func_B31B_b3(); break;
                case 4: func_B31B_b4(); break;
                case 5: func_B31B_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB322:
            func_B322_b0(); break;
        case 0xB34B:
            switch (g_current_bank) {
                case 0: func_B34B_b0(); break;
                case 1: func_B34B_b1(); break;
                case 2: func_B34B_b2(); break;
                case 3: func_B34B_b3(); break;
                case 4: func_B34B_b4(); break;
                case 5: func_B34B_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB33D:
            switch (g_current_bank) {
                case 0: func_B33D_b0(); break;
                case 1: func_B33D_b1(); break;
                case 2: func_B33D_b2(); break;
                case 3: func_B33D_b3(); break;
                case 4: func_B33D_b4(); break;
                case 5: func_B33D_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB344:
            func_B344_b0(); break;
        case 0xBC36:
            switch (g_current_bank) {
                case 0: func_BC36_b0(); break;
                case 1: func_BC36_b1(); break;
                case 2: func_BC36_b2(); break;
                case 3: func_BC36_b3(); break;
                case 4: func_BC36_b4(); break;
                case 5: func_BC36_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xBC3D:
            func_BC3D_b0(); break;
        case 0xB404:
            switch (g_current_bank) {
                case 0: func_B404_b0(); break;
                case 1: func_B404_b1(); break;
                case 2: func_B404_b2(); break;
                case 3: func_B404_b3(); break;
                case 4: func_B404_b4(); break;
                case 5: func_B404_b5(); break;
                case 6: func_B404_b6(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB41D:
            switch (g_current_bank) {
                case 0: func_B41D_b0(); break;
                case 1: func_B41D_b1(); break;
                case 2: func_B41D_b2(); break;
                case 3: func_B41D_b3(); break;
                case 4: func_B41D_b4(); break;
                case 5: func_B41D_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB422:
            switch (g_current_bank) {
                case 0: func_B422_b0(); break;
                case 1: func_B422_b1(); break;
                case 2: func_B422_b2(); break;
                case 3: func_B422_b3(); break;
                case 4: func_B422_b4(); break;
                case 5: func_B422_b5(); break;
                default: return nes_interp_dispatch(addr);
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
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB40E:
            switch (g_current_bank) {
                case 0: func_B40E_b0(); break;
                case 1: func_B40E_b1(); break;
                case 2: func_B40E_b2(); break;
                case 3: func_B40E_b3(); break;
                case 4: func_B40E_b4(); break;
                case 5: func_B40E_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB329:
            switch (g_current_bank) {
                case 7: func_F329(); break;
                case 2: func_B329_b2(); break;
                case 3: func_B329_b3(); break;
                case 4: func_B329_b4(); break;
                case 5: func_B329_b5(); break;
                case 1: func_B329_b1(); break;
                case 0: func_B329_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x988A:
            switch (g_current_bank) {
                case 0: func_988A_b0(); break;
                case 1: func_988A_b1(); break;
                case 2: func_988A_b2(); break;
                case 3: func_988A_b3(); break;
                case 4: func_988A_b4(); break;
                case 5: func_988A_b5(); break;
                case 6: func_988A_b6(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xC510:
            func_C510(); break;
        case 0xC515:
            func_C515(); break;
        case 0xC511:
            func_C511(); break;
        case 0xC512:
            func_C512(); break;
        case 0x806E:
            func_806E_b0(); break;
        case 0x8068:
            func_8068_b0(); break;
        case 0xCB92:
            func_CB92(); break;
        case 0xC801:
            func_C801(); break;
        case 0xC821:
            func_C821(); break;
        case 0xC82F:
            func_C82F(); break;
        case 0xC830:
            func_C830(); break;
        case 0xC8A9:
            func_C8A9(); break;
        case 0xC8AB:
            func_C8AB(); break;
        case 0xC807:
            func_C807(); break;
        case 0xC832:
            func_C832(); break;
        case 0xC85B:
            func_C85B(); break;
        case 0xC877:
            func_C877(); break;
        case 0xC803:
            func_C803(); break;
        case 0xC805:
            func_C805(); break;
        case 0xC834:
            func_C834(); break;
        case 0xC811:
            func_C811(); break;
        case 0xC88D:
            func_C88D(); break;
        case 0xC84C:
            func_C84C(); break;
        case 0xC895:
            func_C895(); break;
        case 0xC809:
            func_C809(); break;
        case 0xC838:
            func_C838(); break;
        case 0xC80D:
            func_C80D(); break;
        case 0xC836:
            func_C836(); break;
        case 0xC80F:
            func_C80F(); break;
        case 0xC81F:
            func_C81F(); break;
        case 0xC892:
            func_C892(); break;
        case 0xC885:
            func_C885(); break;
        case 0xC8D1:
            func_C8D1(); break;
        case 0xC908:
            func_C908(); break;
        case 0xC920:
            func_C920(); break;
        case 0xC8F5:
            func_C8F5(); break;
        case 0xC902:
            func_C902(); break;
        case 0xC90A:
            func_C90A(); break;
        case 0xC904:
            func_C904(); break;
        case 0xC906:
            func_C906(); break;
        case 0xC90C:
            func_C90C(); break;
        case 0xC900:
            func_C900(); break;
        case 0xC8DE:
            func_C8DE(); break;
        case 0xC914:
            func_C914(); break;
        case 0xC911:
            func_C911(); break;
        case 0xC8E9:
            func_C8E9(); break;
        case 0xC925:
            func_C925(); break;
        case 0xC91B:
            func_C91B(); break;
        case 0xC8EC:
            func_C8EC(); break;
        case 0xC916:
            func_C916(); break;
        case 0xC919:
            func_C919(); break;
        case 0xC90E:
            func_C90E(); break;
        case 0xC91D:
            func_C91D(); break;
        case 0xC8D7:
            func_C8D7(); break;
        case 0xC8FA:
            func_C8FA(); break;
        case 0xF410:
            func_F410(); break;
        case 0x800F:
            switch (g_current_bank) {
                case 2: func_800F_b2(); break;
                case 4: func_800F_b4(); break;
                case 1: func_800F_b1(); break;
                case 3: func_800F_b3(); break;
                case 5: func_800F_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xC37E:
            func_C37E(); break;
        case 0xC2B3:
            func_C2B3(); break;
        case 0xC2E4:
            func_C2E4(); break;
        case 0xC30C:
            func_C30C(); break;
        case 0xC2FF:
            func_C2FF(); break;
        case 0xC2FD:
            func_C2FD(); break;
        case 0xC2F0:
            func_C2F0(); break;
        case 0xC4B6:
            func_C4B6(); break;
        case 0xB38F:
            switch (g_current_bank) {
                case 0: func_B38F_b0(); break;
                case 1: func_B38F_b1(); break;
                case 2: func_B38F_b2(); break;
                case 3: func_B38F_b3(); break;
                case 4: func_B38F_b4(); break;
                case 5: func_B38F_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB368:
            switch (g_current_bank) {
                case 7: func_F368(); break;
                case 0: func_B368_b0(); break;
                case 1: func_B368_b1(); break;
                case 2: func_B368_b2(); break;
                case 3: func_B368_b3(); break;
                case 4: func_B368_b4(); break;
                case 5: func_B368_b5(); break;
                default: return nes_interp_dispatch(addr);
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
                case 6: func_B4BD_b6(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB4EE:
            switch (g_current_bank) {
                case 7: func_F4EE(); break;
                case 0: func_B4EE_b0(); break;
                case 1: func_B4EE_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB4EA:
            switch (g_current_bank) {
                case 0: func_B4EA_b0(); break;
                case 2: func_B4EA_b2(); break;
                case 3: func_B4EA_b3(); break;
                case 4: func_B4EA_b4(); break;
                case 5: func_B4EA_b5(); break;
                case 1: func_B4EA_b1(); break;
                default: return nes_interp_dispatch(addr);
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
                case 6: func_BC53_b6(); break;
                default: return nes_interp_dispatch(addr);
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
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB337:
            switch (g_current_bank) {
                case 0: func_B337_b0(); break;
                case 1: func_B337_b1(); break;
                case 2: func_B337_b2(); break;
                case 3: func_B337_b3(); break;
                case 4: func_B337_b4(); break;
                case 5: func_B337_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x8036:
            switch (g_current_bank) {
                case 2: func_8036_b2(); break;
                case 4: func_8036_b4(); break;
                case 5: func_8036_b5(); break;
                case 6: func_8036_b6(); break;
                case 1: func_8036_b1(); break;
                case 3: func_8036_b3(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x8039:
            switch (g_current_bank) {
                case 2: func_8039_b2(); break;
                case 4: func_8039_b4(); break;
                case 5: func_8039_b5(); break;
                case 6: func_8039_b6(); break;
                case 1: func_8039_b1(); break;
                case 3: func_8039_b3(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x9A42:
            func_9A42_b2(); break;
        case 0x8027:
            switch (g_current_bank) {
                case 7: func_C027(); break;
                case 2: func_8027_b2(); break;
                case 3: func_8027_b3(); break;
                case 4: func_8027_b4(); break;
                case 5: func_8027_b5(); break;
                case 6: func_8027_b6(); break;
                case 1: func_8027_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x9A52:
            func_9A52_b2(); break;
        case 0x8003:
            switch (g_current_bank) {
                case 7: func_C003(); break;
                case 2: func_8003_b2(); break;
                case 4: func_8003_b4(); break;
                case 5: func_8003_b5(); break;
                case 3: func_8003_b3(); break;
                case 6: func_8003_b6(); break;
                case 1: func_8003_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x99B7:
            func_99B7_b3(); break;
        case 0x9A10:
            func_9A10_b3(); break;
        case 0x99C3:
            func_99C3_b3(); break;
        case 0x99D1:
            func_99D1_b3(); break;
        case 0x99BD:
            func_99BD_b3(); break;
        case 0x95C6:
            switch (g_current_bank) {
                case 3: func_95C6_b3(); break;
                case 2: func_95C6_b2(); break;
                case 6: func_95C6_b6(); break;
                case 1: func_95C6_b1(); break;
                case 5: func_95C6_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x99E4:
            switch (g_current_bank) {
                case 3: func_99E4_b3(); break;
                case 5: func_99E4_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x99F4:
            func_99F4_b3(); break;
        case 0x9967:
            switch (g_current_bank) {
                case 3: func_9967_b3(); break;
                case 4: func_9967_b4(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x99AE:
            func_99AE_b3(); break;
        case 0x99B1:
            func_99B1_b3(); break;
        case 0x8042:
            switch (g_current_bank) {
                case 3: func_8042_b3(); break;
                case 1: func_8042_b1(); break;
                case 2: func_8042_b2(); break;
                case 4: func_8042_b4(); break;
                case 5: func_8042_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x97E2:
            func_97E2_b3(); break;
        case 0x9923:
            func_9923_b4(); break;
        case 0x9942:
            func_9942_b4(); break;
        case 0x990A:
            func_990A_b4(); break;
        case 0x8006:
            switch (g_current_bank) {
                case 7: func_C006(); break;
                case 4: func_8006_b4(); break;
                case 3: func_8006_b3(); break;
                case 2: func_8006_b2(); break;
                case 6: func_8006_b6(); break;
                case 5: func_8006_b5(); break;
                case 1: func_8006_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x801B:
            switch (g_current_bank) {
                case 7: func_C01B(); break;
                case 4: func_801B_b4(); break;
                case 2: func_801B_b2(); break;
                case 6: func_801B_b6(); break;
                case 1: func_801B_b1(); break;
                case 3: func_801B_b3(); break;
                case 5: func_801B_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x9905:
            func_9905_b4(); break;
        case 0x991E:
            func_991E_b4(); break;
        case 0x801E:
            switch (g_current_bank) {
                case 7: func_C01E(); break;
                case 4: func_801E_b4(); break;
                case 2: func_801E_b2(); break;
                case 6: func_801E_b6(); break;
                case 1: func_801E_b1(); break;
                case 3: func_801E_b3(); break;
                case 5: func_801E_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x992C:
            func_992C_b4(); break;
        case 0x8009:
            switch (g_current_bank) {
                case 7: func_C009(); break;
                case 4: func_8009_b4(); break;
                case 2: func_8009_b2(); break;
                case 6: func_8009_b6(); break;
                case 3: func_8009_b3(); break;
                case 1: func_8009_b1(); break;
                case 5: func_8009_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x9A31:
            func_9A31_b4(); break;
        case 0x99F7:
            func_99F7_b4(); break;
        case 0x9A0C:
            func_9A0C_b4(); break;
        case 0x9A15:
            func_9A15_b4(); break;
        case 0x800C:
            switch (g_current_bank) {
                case 4: func_800C_b4(); break;
                case 2: func_800C_b2(); break;
                case 1: func_800C_b1(); break;
                case 3: func_800C_b3(); break;
                case 5: func_800C_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x99DE:
            switch (g_current_bank) {
                case 4: func_99DE_b4(); break;
                case 1: func_99DE_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x9A29:
            func_9A29_b4(); break;
        case 0x9BBC:
            func_9BBC_b4(); break;
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
                case 2: func_802D_b2(); break;
                case 3: func_802D_b3(); break;
                case 5: func_802D_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x8030:
            switch (g_current_bank) {
                case 4: func_8030_b4(); break;
                case 1: func_8030_b1(); break;
                case 2: func_8030_b2(); break;
                case 3: func_8030_b3(); break;
                case 5: func_8030_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x8033:
            switch (g_current_bank) {
                case 4: func_8033_b4(); break;
                case 1: func_8033_b1(); break;
                case 2: func_8033_b2(); break;
                case 3: func_8033_b3(); break;
                case 5: func_8033_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x9AE4:
            func_9AE4_b4(); break;
        case 0x9B3C:
            func_9B3C_b4(); break;
        case 0x9BAA:
            func_9BAA_b4(); break;
        case 0x802A:
            switch (g_current_bank) {
                case 7: func_C02A(); break;
                case 4: func_802A_b4(); break;
                case 2: func_802A_b2(); break;
                case 3: func_802A_b3(); break;
                case 6: func_802A_b6(); break;
                case 1: func_802A_b1(); break;
                case 5: func_802A_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x9CEB:
            func_9CEB_b4(); break;
        case 0xFF03:
            func_FF03(); break;
        case 0x9E69:
            func_9E69_b4(); break;
        case 0x9EBB:
            func_9EBB_b4(); break;
        case 0xA320:
            switch (g_current_bank) {
                case 7: func_E320(); break;
                case 4: func_A320_b4(); break;
                case 3: func_A320_b3(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xA375:
            func_A375_b4(); break;
        case 0xA381:
            func_A381_b4(); break;
        case 0xA3D9:
            func_A3D9_b4(); break;
        case 0xA52C:
            func_A52C_b4(); break;
        case 0xA6A2:
            func_A6A2_b4(); break;
        case 0x8801:
            switch (g_current_bank) {
                case 7: func_C801(); break;
                case 4: func_8801_b4(); break;
                case 1: func_8801_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xA767:
            switch (g_current_bank) {
                case 4: func_A767_b4(); break;
                case 5: func_A767_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xA7B0:
            func_A7B0_b4(); break;
        case 0xA818:
            func_A818_b4(); break;
        case 0xA814:
            func_A814_b4(); break;
        case 0xA85A:
            func_A85A_b4(); break;
        case 0xA8C7:
            func_A8C7_b4(); break;
        case 0xA8C4:
            func_A8C4_b4(); break;
        case 0x9AE1:
            switch (g_current_bank) {
                case 5: func_9AE1_b5(); break;
                case 6: func_9AE1_b6(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x9AF1:
            switch (g_current_bank) {
                case 5: func_9AF1_b5(); break;
                case 6: func_9AF1_b6(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xC1BC:
            func_C1BC(); break;
        case 0x8071:
            func_8071_b0(); break;
        case 0x80AC:
            func_80AC_b0(); break;
        case 0x809E:
            func_809E_b0(); break;
        case 0x80D0:
            func_80D0_b0(); break;
        case 0x80F9:
            func_80F9_b0(); break;
        case 0x812C:
            func_812C_b0(); break;
        case 0x8141:
            func_8141_b0(); break;
        case 0x8142:
            func_8142_b0(); break;
        case 0x8109:
            func_8109_b0(); break;
        case 0x814D:
            func_814D_b0(); break;
        case 0x8163:
            func_8163_b0(); break;
        case 0x81D1:
            switch (g_current_bank) {
                case 7: func_C1D1(); break;
                case 0: func_81D1_b0(); break;
                case 6: func_81D1_b6(); break;
                case 1: func_81D1_b1(); break;
                case 2: func_81D1_b2(); break;
                case 3: func_81D1_b3(); break;
                case 4: func_81D1_b4(); break;
                case 5: func_81D1_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x822E:
            func_822E_b0(); break;
        case 0x8243:
            func_8243_b0(); break;
        case 0x8263:
            func_8263_b0(); break;
        case 0x8283:
            func_8283_b0(); break;
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
        case 0x9180:
            func_9180_b0(); break;
        case 0x91FB:
            func_91FB_b0(); break;
        case 0x91BF:
            func_91BF_b0(); break;
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
        case 0xC4B3:
            func_C4B3(); break;
        case 0xC4B7:
            func_C4B7(); break;
        case 0xC4D0:
            func_C4D0(); break;
        case 0xC4D1:
            func_C4D1(); break;
        case 0xC4C8:
            func_C4C8(); break;
        case 0xC4C9:
            func_C4C9(); break;
        case 0xC4BD:
            func_C4BD(); break;
        case 0xCA18:
            func_CA18(); break;
        case 0xCA20:
            func_CA20(); break;
        case 0xCA2B:
            func_CA2B(); break;
        case 0xCA2D:
            func_CA2D(); break;
        case 0xC439:
            func_C439(); break;
        case 0xC8BB:
            func_C8BB(); break;
        case 0xC8C4:
            func_C8C4(); break;
        case 0xC8CA:
            func_C8CA(); break;
        case 0xC8C8:
            func_C8C8(); break;
        case 0xC8C9:
            func_C8C9(); break;
        case 0xC8BE:
            func_C8BE(); break;
        case 0xC8CE:
            func_C8CE(); break;
        case 0xC8BD:
            func_C8BD(); break;
        case 0xC8B0:
            func_C8B0(); break;
        case 0xE720:
            func_E720(); break;
        case 0xE730:
            func_E730(); break;
        case 0xE731:
            func_E731(); break;
        case 0xEA2B:
            func_EA2B(); break;
        case 0xEA2D:
            func_EA2D(); break;
        case 0xEA4C:
            func_EA4C(); break;
        case 0xC447:
            func_C447(); break;
        case 0xCBFD:
            func_CBFD(); break;
        case 0xE1F1:
            func_E1F1(); break;
        case 0xE221:
            func_E221(); break;
        case 0xCB29:
            func_CB29(); break;
        case 0xCB6A:
            func_CB6A(); break;
        case 0xC92A:
            func_C92A(); break;
        case 0xCB8E:
            func_CB8E(); break;
        case 0xCBE2:
            func_CBE2(); break;
        case 0xCBBA:
            func_CBBA(); break;
        case 0xCC09:
            func_CC09(); break;
        case 0xCBD0:
            func_CBD0(); break;
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
        case 0xCB74:
            func_CB74(); break;
        case 0xCB87:
            func_CB87(); break;
        case 0xCB84:
            func_CB84(); break;
        case 0xC9C3:
            func_C9C3(); break;
        case 0xDE47:
            func_DE47(); break;
        case 0xDE4A:
            func_DE4A(); break;
        case 0xDE4C:
            func_DE4C(); break;
        case 0xDEA9:
            func_DEA9(); break;
        case 0xDE99:
            func_DE99(); break;
        case 0xDE60:
            func_DE60(); break;
        case 0xDE51:
            func_DE51(); break;
        case 0xDE6A:
            func_DE6A(); break;
        case 0xDE9F:
            func_DE9F(); break;
        case 0xDED5:
            func_DED5(); break;
        case 0xE094:
            func_E094(); break;
        case 0xE0E8:
            func_E0E8(); break;
        case 0xE0AA:
            func_E0AA(); break;
        case 0xE0A2:
            func_E0A2(); break;
        case 0xE0F1:
            func_E0F1(); break;
        case 0xE0D1:
            func_E0D1(); break;
        case 0xE0CA:
            func_E0CA(); break;
        case 0xE0B1:
            func_E0B1(); break;
        case 0xE0AD:
            func_E0AD(); break;
        case 0xE0C7:
            func_E0C7(); break;
        case 0xE09D:
            func_E09D(); break;
        case 0xE099:
            func_E099(); break;
        case 0x8058:
            switch (g_current_bank) {
                case 0: func_8058_b0(); break;
                case 1: func_8058_b1(); break;
                case 2: func_8058_b2(); break;
                case 3: func_8058_b3(); break;
                case 4: func_8058_b4(); break;
                case 5: func_8058_b5(); break;
                case 6: func_8058_b6(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xDD8B:
            func_DD8B(); break;
        case 0xC2A8:
            func_C2A8(); break;
        case 0xC2A9:
            func_C2A9(); break;
        case 0xC318:
            func_C318(); break;
        case 0xC319:
            func_C319(); break;
        case 0xC321:
            func_C321(); break;
        case 0x833F:
            switch (g_current_bank) {
                case 2: func_833F_b2(); break;
                case 4: func_833F_b4(); break;
                case 5: func_833F_b5(); break;
                case 1: func_833F_b1(); break;
                case 3: func_833F_b3(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x8395:
            switch (g_current_bank) {
                case 2: func_8395_b2(); break;
                case 4: func_8395_b4(); break;
                case 5: func_8395_b5(); break;
                case 1: func_8395_b1(); break;
                case 3: func_8395_b3(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xFD8F:
            func_FD8F(); break;
        case 0xFDBF:
            func_FDBF(); break;
        case 0xFDDD:
            func_FDDD(); break;
        case 0xFDA6:
            func_FDA6(); break;
        case 0xFDAA:
            func_FDAA(); break;
        case 0xFDCA:
            func_FDCA(); break;
        case 0xFDB1:
            func_FDB1(); break;
        case 0xFDC6:
            func_FDC6(); break;
        case 0xFDA0:
            func_FDA0(); break;
        case 0xFDBD:
            func_FDBD(); break;
        case 0xF438:
            func_F438(); break;
        case 0x9B1B:
            func_9B1B_b3(); break;
        case 0xCE92:
            func_CE92(); break;
        case 0xCED0:
            func_CED0(); break;
        case 0xCEE2:
            func_CEE2(); break;
        case 0xCECD:
            func_CECD(); break;
        case 0xF416:
            func_F416(); break;
        case 0x8244:
            switch (g_current_bank) {
                case 4: func_8244_b4(); break;
                case 1: func_8244_b1(); break;
                case 2: func_8244_b2(); break;
                case 3: func_8244_b3(); break;
                case 5: func_8244_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x82C3:
            switch (g_current_bank) {
                case 4: func_82C3_b4(); break;
                case 1: func_82C3_b1(); break;
                case 2: func_82C3_b2(); break;
                case 3: func_82C3_b3(); break;
                case 5: func_82C3_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x825B:
            switch (g_current_bank) {
                case 4: func_825B_b4(); break;
                case 1: func_825B_b1(); break;
                case 2: func_825B_b2(); break;
                case 3: func_825B_b3(); break;
                case 5: func_825B_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x82F4:
            switch (g_current_bank) {
                case 4: func_82F4_b4(); break;
                case 1: func_82F4_b1(); break;
                case 2: func_82F4_b2(); break;
                case 3: func_82F4_b3(); break;
                case 5: func_82F4_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x8258:
            switch (g_current_bank) {
                case 4: func_8258_b4(); break;
                case 1: func_8258_b1(); break;
                case 2: func_8258_b2(); break;
                case 3: func_8258_b3(); break;
                case 5: func_8258_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x82A2:
            switch (g_current_bank) {
                case 4: func_82A2_b4(); break;
                case 1: func_82A2_b1(); break;
                case 2: func_82A2_b2(); break;
                case 3: func_82A2_b3(); break;
                case 5: func_82A2_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x8296:
            switch (g_current_bank) {
                case 4: func_8296_b4(); break;
                case 1: func_8296_b1(); break;
                case 2: func_8296_b2(); break;
                case 3: func_8296_b3(); break;
                case 5: func_8296_b5(); break;
                case 0: func_8296_b0(); break;
                case 6: func_8296_b6(); break;
                case 7: func_8296_b7(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x8318:
            switch (g_current_bank) {
                case 7: func_C318(); break;
                case 4: func_8318_b4(); break;
                case 1: func_8318_b1(); break;
                case 2: func_8318_b2(); break;
                case 3: func_8318_b3(); break;
                case 5: func_8318_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x832F:
            switch (g_current_bank) {
                case 4: func_832F_b4(); break;
                case 1: func_832F_b1(); break;
                case 2: func_832F_b2(); break;
                case 3: func_832F_b3(); break;
                case 5: func_832F_b5(); break;
                case 0: func_832F_b0(); break;
                case 6: func_832F_b6(); break;
                case 7: func_832F_b7(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xFA1E:
            func_FA1E(); break;
        case 0xFA20:
            func_FA20(); break;
        case 0xFA2D:
            func_FA2D(); break;
        case 0x9CD0:
            func_9CD0_b4(); break;
        case 0xA9E0:
            func_A9E0_b4(); break;
        case 0xA9DC:
            func_A9DC_b4(); break;
        case 0xAA4B:
            func_AA4B_b4(); break;
        case 0xAB69:
            func_AB69_b4(); break;
        case 0xAB6B:
            func_AB6B_b4(); break;
        case 0xAB6D:
            func_AB6D_b4(); break;
        case 0xAB73:
            func_AB73_b4(); break;
        case 0xAB75:
            func_AB75_b4(); break;
        case 0xAB7E:
            func_AB7E_b4(); break;
        case 0xAB81:
            func_AB81_b4(); break;
        case 0xAB84:
            func_AB84_b4(); break;
        case 0xAD21:
            switch (g_current_bank) {
                case 7: func_ED21(); break;
                case 4: func_AD21_b4(); break;
                case 5: func_AD21_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xAD04:
            switch (g_current_bank) {
                case 7: func_ED04(); break;
                case 4: func_AD04_b4(); break;
                case 5: func_AD04_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xC328:
            func_C328(); break;
        case 0xC36E:
            func_C36E(); break;
        case 0xC36F:
            func_C36F(); break;
        case 0xAD95:
            switch (g_current_bank) {
                case 4: func_AD95_b4(); break;
                case 5: func_AD95_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xFF11:
            func_FF11(); break;
        case 0xADFC:
            switch (g_current_bank) {
                case 4: func_ADFC_b4(); break;
                case 5: func_ADFC_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xAE0D:
            switch (g_current_bank) {
                case 7: func_EE0D(); break;
                case 4: func_AE0D_b4(); break;
                case 5: func_AE0D_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xAEE7:
            switch (g_current_bank) {
                case 4: func_AEE7_b4(); break;
                case 5: func_AEE7_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB03F:
            switch (g_current_bank) {
                case 4: func_B03F_b4(); break;
                case 5: func_B03F_b5(); break;
                case 2: func_B03F_b2(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB037:
            switch (g_current_bank) {
                case 4: func_B037_b4(); break;
                case 5: func_B037_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB084:
            switch (g_current_bank) {
                case 7: func_F084(); break;
                case 4: func_B084_b4(); break;
                case 5: func_B084_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB0B8:
            switch (g_current_bank) {
                case 4: func_B0B8_b4(); break;
                case 5: func_B0B8_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB0BC:
            switch (g_current_bank) {
                case 7: func_F0BC(); break;
                case 4: func_B0BC_b4(); break;
                case 5: func_B0BC_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB09B:
            switch (g_current_bank) {
                case 4: func_B09B_b4(); break;
                case 5: func_B09B_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB920:
            switch (g_current_bank) {
                case 4: func_B920_b4(); break;
                case 5: func_B920_b5(); break;
                case 3: func_B920_b3(); break;
                case 0: func_B920_b0(); break;
                case 1: func_B920_b1(); break;
                case 2: func_B920_b2(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB151:
            switch (g_current_bank) {
                case 4: func_B151_b4(); break;
                case 5: func_B151_b5(); break;
                case 3: func_B151_b3(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB144:
            switch (g_current_bank) {
                case 4: func_B144_b4(); break;
                case 5: func_B144_b5(); break;
                case 3: func_B144_b3(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB154:
            switch (g_current_bank) {
                case 4: func_B154_b4(); break;
                case 5: func_B154_b5(); break;
                case 3: func_B154_b3(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB19B:
            switch (g_current_bank) {
                case 7: func_F19B(); break;
                case 4: func_B19B_b4(); break;
                case 5: func_B19B_b5(); break;
                case 3: func_B19B_b3(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB1A8:
            switch (g_current_bank) {
                case 7: func_F1A8(); break;
                case 4: func_B1A8_b4(); break;
                case 5: func_B1A8_b5(); break;
                case 3: func_B1A8_b3(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x9830:
            switch (g_current_bank) {
                case 4: func_9830_b4(); break;
                case 5: func_9830_b5(); break;
                case 2: func_9830_b2(); break;
                case 6: func_9830_b6(); break;
                case 3: func_9830_b3(); break;
                case 1: func_9830_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB1E0:
            switch (g_current_bank) {
                case 7: func_F1E0(); break;
                case 4: func_B1E0_b4(); break;
                case 5: func_B1E0_b5(); break;
                case 2: func_B1E0_b2(); break;
                case 6: func_B1E0_b6(); break;
                case 3: func_B1E0_b3(); break;
                case 1: func_B1E0_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x80C7:
            switch (g_current_bank) {
                case 4: func_80C7_b4(); break;
                case 5: func_80C7_b5(); break;
                case 2: func_80C7_b2(); break;
                case 6: func_80C7_b6(); break;
                case 3: func_80C7_b3(); break;
                case 1: func_80C7_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB2C5:
            switch (g_current_bank) {
                case 4: func_B2C5_b4(); break;
                case 2: func_B2C5_b2(); break;
                case 5: func_B2C5_b5(); break;
                case 3: func_B2C5_b3(); break;
                case 1: func_B2C5_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB374:
            switch (g_current_bank) {
                case 4: func_B374_b4(); break;
                case 2: func_B374_b2(); break;
                case 5: func_B374_b5(); break;
                case 3: func_B374_b3(); break;
                case 1: func_B374_b1(); break;
                case 0: func_B374_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB36C:
            switch (g_current_bank) {
                case 4: func_B36C_b4(); break;
                case 2: func_B36C_b2(); break;
                case 5: func_B36C_b5(); break;
                case 3: func_B36C_b3(); break;
                case 1: func_B36C_b1(); break;
                case 0: func_B36C_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB370:
            switch (g_current_bank) {
                case 4: func_B370_b4(); break;
                case 2: func_B370_b2(); break;
                case 5: func_B370_b5(); break;
                case 3: func_B370_b3(); break;
                case 1: func_B370_b1(); break;
                case 0: func_B370_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB493:
            switch (g_current_bank) {
                case 4: func_B493_b4(); break;
                case 2: func_B493_b2(); break;
                case 5: func_B493_b5(); break;
                case 3: func_B493_b3(); break;
                case 1: func_B493_b1(); break;
                case 0: func_B493_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB452:
            switch (g_current_bank) {
                case 4: func_B452_b4(); break;
                case 2: func_B452_b2(); break;
                case 5: func_B452_b5(); break;
                case 6: func_B452_b6(); break;
                case 3: func_B452_b3(); break;
                case 1: func_B452_b1(); break;
                case 0: func_B452_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB463:
            switch (g_current_bank) {
                case 4: func_B463_b4(); break;
                case 2: func_B463_b2(); break;
                case 5: func_B463_b5(); break;
                case 3: func_B463_b3(); break;
                case 1: func_B463_b1(); break;
                case 0: func_B463_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB472:
            switch (g_current_bank) {
                case 4: func_B472_b4(); break;
                case 2: func_B472_b2(); break;
                case 5: func_B472_b5(); break;
                case 3: func_B472_b3(); break;
                case 1: func_B472_b1(); break;
                case 0: func_B472_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB4A9:
            switch (g_current_bank) {
                case 7: func_F4A9(); break;
                case 4: func_B4A9_b4(); break;
                case 2: func_B4A9_b2(); break;
                case 5: func_B4A9_b5(); break;
                case 6: func_B4A9_b6(); break;
                case 3: func_B4A9_b3(); break;
                case 1: func_B4A9_b1(); break;
                case 0: func_B4A9_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB58F:
            switch (g_current_bank) {
                case 4: func_B58F_b4(); break;
                case 2: func_B58F_b2(); break;
                case 5: func_B58F_b5(); break;
                case 3: func_B58F_b3(); break;
                case 1: func_B58F_b1(); break;
                case 0: func_B58F_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB587:
            switch (g_current_bank) {
                case 4: func_B587_b4(); break;
                case 5: func_B587_b5(); break;
                case 2: func_B587_b2(); break;
                case 3: func_B587_b3(); break;
                case 1: func_B587_b1(); break;
                case 0: func_B587_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB4A2:
            switch (g_current_bank) {
                case 7: func_F4A2(); break;
                case 4: func_B4A2_b4(); break;
                case 5: func_B4A2_b5(); break;
                case 2: func_B4A2_b2(); break;
                case 3: func_B4A2_b3(); break;
                case 1: func_B4A2_b1(); break;
                case 0: func_B4A2_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB5A5:
            switch (g_current_bank) {
                case 4: func_B5A5_b4(); break;
                case 5: func_B5A5_b5(); break;
                case 2: func_B5A5_b2(); break;
                case 3: func_B5A5_b3(); break;
                case 1: func_B5A5_b1(); break;
                case 0: func_B5A5_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB62C:
            switch (g_current_bank) {
                case 4: func_B62C_b4(); break;
                case 5: func_B62C_b5(); break;
                case 2: func_B62C_b2(); break;
                case 3: func_B62C_b3(); break;
                case 1: func_B62C_b1(); break;
                case 0: func_B62C_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB5CD:
            switch (g_current_bank) {
                case 4: func_B5CD_b4(); break;
                case 5: func_B5CD_b5(); break;
                case 2: func_B5CD_b2(); break;
                case 3: func_B5CD_b3(); break;
                case 1: func_B5CD_b1(); break;
                case 0: func_B5CD_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB6F2:
            switch (g_current_bank) {
                case 4: func_B6F2_b4(); break;
                case 5: func_B6F2_b5(); break;
                case 2: func_B6F2_b2(); break;
                case 3: func_B6F2_b3(); break;
                case 1: func_B6F2_b1(); break;
                case 0: func_B6F2_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB896:
            switch (g_current_bank) {
                case 4: func_B896_b4(); break;
                case 5: func_B896_b5(); break;
                case 2: func_B896_b2(); break;
                case 6: func_B896_b6(); break;
                case 3: func_B896_b3(); break;
                case 1: func_B896_b1(); break;
                case 0: func_B896_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB98C:
            switch (g_current_bank) {
                case 4: func_B98C_b4(); break;
                case 5: func_B98C_b5(); break;
                case 2: func_B98C_b2(); break;
                case 6: func_B98C_b6(); break;
                case 3: func_B98C_b3(); break;
                case 1: func_B98C_b1(); break;
                case 0: func_B98C_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB869:
            switch (g_current_bank) {
                case 7: func_F869(); break;
                case 4: func_B869_b4(); break;
                case 5: func_B869_b5(); break;
                case 2: func_B869_b2(); break;
                case 6: func_B869_b6(); break;
                case 3: func_B869_b3(); break;
                case 1: func_B869_b1(); break;
                case 0: func_B869_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB978:
            switch (g_current_bank) {
                case 4: func_B978_b4(); break;
                case 5: func_B978_b5(); break;
                case 2: func_B978_b2(); break;
                case 6: func_B978_b6(); break;
                case 3: func_B978_b3(); break;
                case 1: func_B978_b1(); break;
                case 0: func_B978_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB9A0:
            switch (g_current_bank) {
                case 4: func_B9A0_b4(); break;
                case 5: func_B9A0_b5(); break;
                case 2: func_B9A0_b2(); break;
                case 6: func_B9A0_b6(); break;
                case 3: func_B9A0_b3(); break;
                case 1: func_B9A0_b1(); break;
                case 0: func_B9A0_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB8C3:
            switch (g_current_bank) {
                case 4: func_B8C3_b4(); break;
                case 5: func_B8C3_b5(); break;
                case 2: func_B8C3_b2(); break;
                case 3: func_B8C3_b3(); break;
                case 1: func_B8C3_b1(); break;
                case 0: func_B8C3_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x98AE:
            func_98AE_b0(); break;
        case 0x8A8C:
            func_8A8C_b0(); break;
        case 0x87AB:
            func_87AB_b0(); break;
        case 0x87CF:
            func_87CF_b0(); break;
        case 0x87D6:
            func_87D6_b0(); break;
        case 0x87D9:
            func_87D9_b0(); break;
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
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x8963:
            func_8963_b0(); break;
        case 0x8976:
            func_8976_b0(); break;
        case 0x909F:
            func_909F_b0(); break;
        case 0x9449:
            func_9449_b0(); break;
        case 0xC487:
            func_C487(); break;
        case 0xC494:
            func_C494(); break;
        case 0xC4A5:
            func_C4A5(); break;
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
        case 0x9F20:
            func_9F20_b0(); break;
        case 0x9AA0:
            func_9AA0_b0(); break;
        case 0xC4A7:
            func_C4A7(); break;
        case 0xD1EE:
            func_D1EE(); break;
        case 0xD1F0:
            func_D1F0(); break;
        case 0xC434:
            func_C434(); break;
        case 0x95AB:
            switch (g_current_bank) {
                case 0: func_95AB_b0(); break;
                case 2: func_95AB_b2(); break;
                case 3: func_95AB_b3(); break;
                case 4: func_95AB_b4(); break;
                case 5: func_95AB_b5(); break;
                case 6: func_95AB_b6(); break;
                case 1: func_95AB_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xEC93:
            func_EC93(); break;
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
        case 0xEA10:
            func_EA10(); break;
        case 0xEFF8:
            func_EFF8(); break;
        case 0xEAAA:
            func_EAAA(); break;
        case 0xFCAA:
            func_FCAA(); break;
        case 0xFCE5:
            func_FCE5(); break;
        case 0xFCCA:
            func_FCCA(); break;
        case 0xFCC4:
            func_FCC4(); break;
        case 0xFCE0:
            func_FCE0(); break;
        case 0xFCA7:
            func_FCA7(); break;
        case 0xFCB9:
            func_FCB9(); break;
        case 0xFC92:
            func_FC92(); break;
        case 0xFC8C:
            func_FC8C(); break;
        case 0xCBE8:
            func_CBE8(); break;
        case 0xE1F0:
            func_E1F0(); break;
        case 0xE6D2:
            func_E6D2(); break;
        case 0xE6E8:
            func_E6E8(); break;
        case 0xE6EF:
            func_E6EF(); break;
        case 0xE6F9:
            func_E6F9(); break;
        case 0xE6E6:
            func_E6E6(); break;
        case 0xE6FD:
            func_E6FD(); break;
        case 0xE6E4:
            func_E6E4(); break;
        case 0xE6ED:
            func_E6ED(); break;
        case 0xE204:
            func_E204(); break;
        case 0xE6A7:
            func_E6A7(); break;
        case 0xE6C2:
            func_E6C2(); break;
        case 0xE6D0:
            func_E6D0(); break;
        case 0xE6B1:
            func_E6B1(); break;
        case 0xE519:
            func_E519(); break;
        case 0xE520:
            func_E520(); break;
        case 0xE21B:
            func_E21B(); break;
        case 0xE4F1:
            func_E4F1(); break;
        case 0xE501:
            func_E501(); break;
        case 0xE518:
            func_E518(); break;
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
                case 2: func_95C3_b2(); break;
                case 3: func_95C3_b3(); break;
                case 4: func_95C3_b4(); break;
                case 5: func_95C3_b5(); break;
                case 6: func_95C3_b6(); break;
                case 1: func_95C3_b1(); break;
                default: return nes_interp_dispatch(addr);
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
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x8B74:
            switch (g_current_bank) {
                case 7: func_CB74(); break;
                case 1: func_8B74_b1(); break;
                case 2: func_8B74_b2(); break;
                case 3: func_8B74_b3(); break;
                case 4: func_8B74_b4(); break;
                case 5: func_8B74_b5(); break;
                case 6: func_8B74_b6(); break;
                default: return nes_interp_dispatch(addr);
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
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x8B79:
            switch (g_current_bank) {
                case 0: func_8B79_b0(); break;
                case 2: func_8B79_b2(); break;
                case 3: func_8B79_b3(); break;
                case 4: func_8B79_b4(); break;
                case 5: func_8B79_b5(); break;
                case 6: func_8B79_b6(); break;
                case 1: func_8B79_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xFE1B:
            func_FE1B(); break;
        case 0xFE29:
            func_FE29(); break;
        case 0xFE4A:
            func_FE4A(); break;
        case 0xFE4D:
            func_FE4D(); break;
        case 0xFE20:
            func_FE20(); break;
        case 0xF034:
            func_F034(); break;
        case 0xE0C1:
            func_E0C1(); break;
        case 0xFAF2:
            func_FAF2(); break;
        case 0xDB17:
            func_DB17(); break;
        case 0xDB20:
            func_DB20(); break;
        case 0xDB37:
            func_DB37(); break;
        case 0xDB42:
            func_DB42(); break;
        case 0xDB4D:
            func_DB4D(); break;
        case 0xDBD0:
            func_DBD0(); break;
        case 0xDC20:
            func_DC20(); break;
        case 0xDBB9:
            func_DBB9(); break;
        case 0xDB8D:
            func_DB8D(); break;
        case 0xDBE3:
            func_DBE3(); break;
        case 0xFDE3:
            func_FDE3(); break;
        case 0xFE03:
            func_FE03(); break;
        case 0xFDE6:
            func_FDE6(); break;
        case 0xFE02:
            func_FE02(); break;
        case 0xFE14:
            func_FE14(); break;
        case 0xFE00:
            func_FE00(); break;
        case 0xE193:
            func_E193(); break;
        case 0xDE3D:
            func_DE3D(); break;
        case 0xDE3E:
            func_DE3E(); break;
        case 0xDF19:
            func_DF19(); break;
        case 0xE173:
            func_E173(); break;
        case 0xE198:
            func_E198(); break;
        case 0xE17B:
            func_E17B(); break;
        case 0xE194:
            func_E194(); break;
        case 0x8001:
            switch (g_current_bank) {
                case 7: func_C001(); break;
                case 0: func_8001_b0(); break;
                case 1: func_8001_b1(); break;
                case 2: func_8001_b2(); break;
                case 3: func_8001_b3(); break;
                case 4: func_8001_b4(); break;
                case 5: func_8001_b5(); break;
                default: return nes_interp_dispatch(addr);
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
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x8400:
            switch (g_current_bank) {
                case 1: func_8400_b1(); break;
                case 2: func_8400_b2(); break;
                case 3: func_8400_b3(); break;
                case 4: func_8400_b4(); break;
                case 5: func_8400_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x80B8:
            switch (g_current_bank) {
                case 1: func_80B8_b1(); break;
                case 2: func_80B8_b2(); break;
                case 3: func_80B8_b3(); break;
                case 4: func_80B8_b4(); break;
                case 5: func_80B8_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x844B:
            switch (g_current_bank) {
                case 1: func_844B_b1(); break;
                case 2: func_844B_b2(); break;
                case 3: func_844B_b3(); break;
                case 4: func_844B_b4(); break;
                case 5: func_844B_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x80FB:
            switch (g_current_bank) {
                case 1: func_80FB_b1(); break;
                case 2: func_80FB_b2(); break;
                case 3: func_80FB_b3(); break;
                case 4: func_80FB_b4(); break;
                case 5: func_80FB_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x812F:
            switch (g_current_bank) {
                case 1: func_812F_b1(); break;
                case 2: func_812F_b2(); break;
                case 3: func_812F_b3(); break;
                case 4: func_812F_b4(); break;
                case 5: func_812F_b5(); break;
                default: return nes_interp_dispatch(addr);
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
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x84FD:
            switch (g_current_bank) {
                case 1: func_84FD_b1(); break;
                case 2: func_84FD_b2(); break;
                case 3: func_84FD_b3(); break;
                case 4: func_84FD_b4(); break;
                case 5: func_84FD_b5(); break;
                default: return nes_interp_dispatch(addr);
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
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x81AC:
            switch (g_current_bank) {
                case 1: func_81AC_b1(); break;
                case 2: func_81AC_b2(); break;
                case 3: func_81AC_b3(); break;
                case 4: func_81AC_b4(); break;
                case 5: func_81AC_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x84FE:
            switch (g_current_bank) {
                case 1: func_84FE_b1(); break;
                case 2: func_84FE_b2(); break;
                case 3: func_84FE_b3(); break;
                case 4: func_84FE_b4(); break;
                case 5: func_84FE_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x8500:
            switch (g_current_bank) {
                case 1: func_8500_b1(); break;
                case 2: func_8500_b2(); break;
                case 3: func_8500_b3(); break;
                case 4: func_8500_b4(); break;
                case 5: func_8500_b5(); break;
                case 7: func_8500_b7(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x8134:
            switch (g_current_bank) {
                case 1: func_8134_b1(); break;
                case 2: func_8134_b2(); break;
                case 3: func_8134_b3(); break;
                case 4: func_8134_b4(); break;
                case 5: func_8134_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x8169:
            switch (g_current_bank) {
                case 1: func_8169_b1(); break;
                case 2: func_8169_b2(); break;
                case 3: func_8169_b3(); break;
                case 4: func_8169_b4(); break;
                case 5: func_8169_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x80F6:
            switch (g_current_bank) {
                case 2: func_80F6_b2(); break;
                case 3: func_80F6_b3(); break;
                case 4: func_80F6_b4(); break;
                case 5: func_80F6_b5(); break;
                case 1: func_80F6_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xDCF5:
            func_DCF5(); break;
        case 0xDE20:
            func_DE20(); break;
        case 0xDD20:
            func_DD20(); break;
        case 0xDE19:
            func_DE19(); break;
        case 0xDE05:
            func_DE05(); break;
        case 0xDE02:
            func_DE02(); break;
        case 0xDD07:
            func_DD07(); break;
        case 0xDE29:
            func_DE29(); break;
        case 0xDDD1:
            func_DDD1(); break;
        case 0xDE08:
            func_DE08(); break;
        case 0xDE10:
            func_DE10(); break;
        case 0xDE0A:
            func_DE0A(); break;
        case 0xDE00:
            func_DE00(); break;
        case 0xDD00:
            func_DD00(); break;
        case 0xDD4D:
            func_DD4D(); break;
        case 0xDD4A:
            func_DD4A(); break;
        case 0xDD30:
            func_DD30(); break;
        case 0xDD10:
            func_DD10(); break;
        case 0xDDB0:
            func_DDB0(); break;
        case 0xDE07:
            func_DE07(); break;
        case 0xDE13:
            func_DE13(); break;
        case 0xDEDE:
            func_DEDE(); break;
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
        case 0xE44C:
            func_E44C(); break;
        case 0xCE84:
            func_CE84(); break;
        case 0xCE91:
            func_CE91(); break;
        case 0xF323:
            func_F323(); break;
        case 0xC3FB:
            func_C3FB(); break;
        case 0xC3DA:
            func_C3DA(); break;
        case 0xC3E6:
            func_C3E6(); break;
        case 0xF844:
            func_F844(); break;
        case 0xF693:
            func_F693(); break;
        case 0xF690:
            func_F690(); break;
        case 0x80B0:
            switch (g_current_bank) {
                case 4: func_80B0_b4(); break;
                case 0: func_80B0_b0(); break;
                case 1: func_80B0_b1(); break;
                case 2: func_80B0_b2(); break;
                case 3: func_80B0_b3(); break;
                case 5: func_80B0_b5(); break;
                case 6: func_80B0_b6(); break;
                case 7: func_80B0_b7(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x822B:
            switch (g_current_bank) {
                case 4: func_822B_b4(); break;
                case 1: func_822B_b1(); break;
                case 2: func_822B_b2(); break;
                case 3: func_822B_b3(); break;
                case 5: func_822B_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x8312:
            switch (g_current_bank) {
                case 4: func_8312_b4(); break;
                case 1: func_8312_b1(); break;
                case 2: func_8312_b2(); break;
                case 3: func_8312_b3(); break;
                case 5: func_8312_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xC2BE:
            func_C2BE(); break;
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
        case 0xC2C1:
            func_C2C1(); break;
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
        case 0x81B1:
            switch (g_current_bank) {
                case 4: func_81B1_b4(); break;
                case 1: func_81B1_b1(); break;
                case 2: func_81B1_b2(); break;
                case 3: func_81B1_b3(); break;
                case 5: func_81B1_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xFA7D:
            func_FA7D(); break;
        case 0xE792:
            func_E792(); break;
        case 0xFA18:
            func_FA18(); break;
        case 0xFB7B:
            func_FB7B(); break;
        case 0xF85A:
            func_F85A(); break;
        case 0xAB7B:
            func_AB7B_b4(); break;
        case 0xBA41:
            switch (g_current_bank) {
                case 7: func_FA41(); break;
                case 4: func_BA41_b4(); break;
                case 5: func_BA41_b5(); break;
                case 2: func_BA41_b2(); break;
                case 6: func_BA41_b6(); break;
                case 3: func_BA41_b3(); break;
                case 1: func_BA41_b1(); break;
                case 0: func_BA41_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xBA08:
            switch (g_current_bank) {
                case 4: func_BA08_b4(); break;
                case 5: func_BA08_b5(); break;
                case 2: func_BA08_b2(); break;
                case 6: func_BA08_b6(); break;
                case 3: func_BA08_b3(); break;
                case 1: func_BA08_b1(); break;
                case 0: func_BA08_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB3F0:
            switch (g_current_bank) {
                case 4: func_B3F0_b4(); break;
                case 5: func_B3F0_b5(); break;
                case 2: func_B3F0_b2(); break;
                case 6: func_B3F0_b6(); break;
                case 3: func_B3F0_b3(); break;
                case 1: func_B3F0_b1(); break;
                case 0: func_B3F0_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xBA37:
            switch (g_current_bank) {
                case 4: func_BA37_b4(); break;
                case 5: func_BA37_b5(); break;
                case 2: func_BA37_b2(); break;
                case 6: func_BA37_b6(); break;
                case 3: func_BA37_b3(); break;
                case 1: func_BA37_b1(); break;
                case 0: func_BA37_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB9F3:
            switch (g_current_bank) {
                case 4: func_B9F3_b4(); break;
                case 5: func_B9F3_b5(); break;
                case 2: func_B9F3_b2(); break;
                case 6: func_B9F3_b6(); break;
                case 3: func_B9F3_b3(); break;
                case 1: func_B9F3_b1(); break;
                case 0: func_B9F3_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xBB1C:
            switch (g_current_bank) {
                case 4: func_BB1C_b4(); break;
                case 5: func_BB1C_b5(); break;
                case 2: func_BB1C_b2(); break;
                case 6: func_BB1C_b6(); break;
                case 3: func_BB1C_b3(); break;
                case 1: func_BB1C_b1(); break;
                case 0: func_BB1C_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xBADC:
            switch (g_current_bank) {
                case 4: func_BADC_b4(); break;
                case 5: func_BADC_b5(); break;
                case 2: func_BADC_b2(); break;
                case 6: func_BADC_b6(); break;
                case 3: func_BADC_b3(); break;
                case 1: func_BADC_b1(); break;
                case 0: func_BADC_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xBBDE:
            switch (g_current_bank) {
                case 7: func_FBDE(); break;
                case 4: func_BBDE_b4(); break;
                case 5: func_BBDE_b5(); break;
                case 2: func_BBDE_b2(); break;
                case 6: func_BBDE_b6(); break;
                case 3: func_BBDE_b3(); break;
                case 1: func_BBDE_b1(); break;
                case 0: func_BBDE_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xBBB7:
            switch (g_current_bank) {
                case 4: func_BBB7_b4(); break;
                case 5: func_BBB7_b5(); break;
                case 2: func_BBB7_b2(); break;
                case 6: func_BBB7_b6(); break;
                case 3: func_BBB7_b3(); break;
                case 1: func_BBB7_b1(); break;
                case 0: func_BBB7_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xBAB3:
            switch (g_current_bank) {
                case 7: func_FAB3(); break;
                case 4: func_BAB3_b4(); break;
                case 5: func_BAB3_b5(); break;
                case 2: func_BAB3_b2(); break;
                case 6: func_BAB3_b6(); break;
                case 3: func_BAB3_b3(); break;
                case 1: func_BAB3_b1(); break;
                case 0: func_BAB3_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xBBA8:
            switch (g_current_bank) {
                case 4: func_BBA8_b4(); break;
                case 5: func_BBA8_b5(); break;
                case 2: func_BBA8_b2(); break;
                case 6: func_BBA8_b6(); break;
                case 3: func_BBA8_b3(); break;
                case 1: func_BBA8_b1(); break;
                case 0: func_BBA8_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xBBCD:
            switch (g_current_bank) {
                case 4: func_BBCD_b4(); break;
                case 5: func_BBCD_b5(); break;
                case 2: func_BBCD_b2(); break;
                case 6: func_BBCD_b6(); break;
                case 3: func_BBCD_b3(); break;
                case 1: func_BBCD_b1(); break;
                case 0: func_BBCD_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xBB37:
            switch (g_current_bank) {
                case 4: func_BB37_b4(); break;
                case 5: func_BB37_b5(); break;
                case 2: func_BB37_b2(); break;
                case 6: func_BB37_b6(); break;
                case 3: func_BB37_b3(); break;
                case 1: func_BB37_b1(); break;
                case 0: func_BB37_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xBAA5:
            switch (g_current_bank) {
                case 4: func_BAA5_b4(); break;
                case 5: func_BAA5_b5(); break;
                case 2: func_BAA5_b2(); break;
                case 6: func_BAA5_b6(); break;
                case 3: func_BAA5_b3(); break;
                case 1: func_BAA5_b1(); break;
                case 0: func_BAA5_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xBCAA:
            switch (g_current_bank) {
                case 7: func_FCAA(); break;
                case 4: func_BCAA_b4(); break;
                case 5: func_BCAA_b5(); break;
                case 2: func_BCAA_b2(); break;
                case 6: func_BCAA_b6(); break;
                case 3: func_BCAA_b3(); break;
                case 1: func_BCAA_b1(); break;
                case 0: func_BCAA_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xBCA4:
            switch (g_current_bank) {
                case 4: func_BCA4_b4(); break;
                case 5: func_BCA4_b5(); break;
                case 2: func_BCA4_b2(); break;
                case 6: func_BCA4_b6(); break;
                case 3: func_BCA4_b3(); break;
                case 1: func_BCA4_b1(); break;
                case 0: func_BCA4_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xBC9A:
            switch (g_current_bank) {
                case 4: func_BC9A_b4(); break;
                case 5: func_BC9A_b5(); break;
                case 2: func_BC9A_b2(); break;
                case 6: func_BC9A_b6(); break;
                case 3: func_BC9A_b3(); break;
                case 1: func_BC9A_b1(); break;
                case 0: func_BC9A_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xBC96:
            switch (g_current_bank) {
                case 4: func_BC96_b4(); break;
                case 5: func_BC96_b5(); break;
                case 2: func_BC96_b2(); break;
                case 6: func_BC96_b6(); break;
                case 3: func_BC96_b3(); break;
                case 1: func_BC96_b1(); break;
                case 0: func_BC96_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xBC89:
            switch (g_current_bank) {
                case 4: func_BC89_b4(); break;
                case 5: func_BC89_b5(); break;
                case 2: func_BC89_b2(); break;
                case 6: func_BC89_b6(); break;
                case 3: func_BC89_b3(); break;
                case 1: func_BC89_b1(); break;
                case 0: func_BC89_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xBC9E:
            switch (g_current_bank) {
                case 4: func_BC9E_b4(); break;
                case 5: func_BC9E_b5(); break;
                case 2: func_BC9E_b2(); break;
                case 6: func_BC9E_b6(); break;
                case 3: func_BC9E_b3(); break;
                case 1: func_BC9E_b1(); break;
                case 0: func_BC9E_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB9E4:
            switch (g_current_bank) {
                case 4: func_B9E4_b4(); break;
                case 5: func_B9E4_b5(); break;
                case 2: func_B9E4_b2(); break;
                case 6: func_B9E4_b6(); break;
                case 3: func_B9E4_b3(); break;
                case 1: func_B9E4_b1(); break;
                case 0: func_B9E4_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xBF19:
            switch (g_current_bank) {
                case 4: func_BF19_b4(); break;
                case 5: func_BF19_b5(); break;
                case 2: func_BF19_b2(); break;
                case 6: func_BF19_b6(); break;
                case 3: func_BF19_b3(); break;
                case 1: func_BF19_b1(); break;
                case 0: func_BF19_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xBD77:
            switch (g_current_bank) {
                case 4: func_BD77_b4(); break;
                case 5: func_BD77_b5(); break;
                case 2: func_BD77_b2(); break;
                case 6: func_BD77_b6(); break;
                case 3: func_BD77_b3(); break;
                case 1: func_BD77_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xBD9F:
            switch (g_current_bank) {
                case 4: func_BD9F_b4(); break;
                case 5: func_BD9F_b5(); break;
                case 2: func_BD9F_b2(); break;
                case 6: func_BD9F_b6(); break;
                case 3: func_BD9F_b3(); break;
                case 1: func_BD9F_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xBE08:
            switch (g_current_bank) {
                case 4: func_BE08_b4(); break;
                case 5: func_BE08_b5(); break;
                case 2: func_BE08_b2(); break;
                case 6: func_BE08_b6(); break;
                case 3: func_BE08_b3(); break;
                case 1: func_BE08_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xBE3E:
            switch (g_current_bank) {
                case 4: func_BE3E_b4(); break;
                case 5: func_BE3E_b5(); break;
                case 2: func_BE3E_b2(); break;
                case 6: func_BE3E_b6(); break;
                case 3: func_BE3E_b3(); break;
                case 1: func_BE3E_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xE0FF:
            func_E0FF(); break;
        case 0xBEB0:
            switch (g_current_bank) {
                case 4: func_BEB0_b4(); break;
                case 5: func_BEB0_b5(); break;
                case 2: func_BEB0_b2(); break;
                case 6: func_BEB0_b6(); break;
                case 3: func_BEB0_b3(); break;
                case 1: func_BEB0_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xAEAC:
            switch (g_current_bank) {
                case 4: func_AEAC_b4(); break;
                case 5: func_AEAC_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xAEAE:
            switch (g_current_bank) {
                case 7: func_EEAE(); break;
                case 4: func_AEAE_b4(); break;
                case 5: func_AEAE_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xBF1B:
            switch (g_current_bank) {
                case 4: func_BF1B_b4(); break;
                case 5: func_BF1B_b5(); break;
                case 2: func_BF1B_b2(); break;
                case 6: func_BF1B_b6(); break;
                case 3: func_BF1B_b3(); break;
                case 1: func_BF1B_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xBF0B:
            switch (g_current_bank) {
                case 4: func_BF0B_b4(); break;
                case 5: func_BF0B_b5(); break;
                case 2: func_BF0B_b2(); break;
                case 6: func_BF0B_b6(); break;
                case 3: func_BF0B_b3(); break;
                case 1: func_BF0B_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xBF67:
            switch (g_current_bank) {
                case 4: func_BF67_b4(); break;
                case 5: func_BF67_b5(); break;
                case 2: func_BF67_b2(); break;
                case 6: func_BF67_b6(); break;
                case 3: func_BF67_b3(); break;
                case 1: func_BF67_b1(); break;
                case 0: func_BF67_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xAFFE:
            switch (g_current_bank) {
                case 4: func_AFFE_b4(); break;
                case 5: func_AFFE_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB06C:
            switch (g_current_bank) {
                case 7: func_F06C(); break;
                case 4: func_B06C_b4(); break;
                case 2: func_B06C_b2(); break;
                case 5: func_B06C_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB17E:
            switch (g_current_bank) {
                case 4: func_B17E_b4(); break;
                case 5: func_B17E_b5(); break;
                case 3: func_B17E_b3(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x983F:
            func_983F_b4(); break;
        case 0x98E7:
            func_98E7_b4(); break;
        case 0x98F7:
            func_98F7_b4(); break;
        case 0x80C1:
            switch (g_current_bank) {
                case 4: func_80C1_b4(); break;
                case 5: func_80C1_b5(); break;
                case 2: func_80C1_b2(); break;
                case 3: func_80C1_b3(); break;
                case 1: func_80C1_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x856B:
            switch (g_current_bank) {
                case 7: func_C56B(); break;
                case 4: func_856B_b4(); break;
                case 1: func_856B_b1(); break;
                case 2: func_856B_b2(); break;
                case 3: func_856B_b3(); break;
                case 5: func_856B_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x881A:
            func_881A_b0(); break;
        case 0x887B:
            func_887B_b0(); break;
        case 0x981E:
            func_981E_b0(); break;
        case 0xC47D:
            func_C47D(); break;
        case 0xC481:
            func_C481(); break;
        case 0xC7AB:
            func_C7AB(); break;
        case 0x8F60:
            func_8F60_b0(); break;
        case 0x8DDE:
            func_8DDE_b0(); break;
        case 0x92D4:
            func_92D4_b0(); break;
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
        case 0xCF88:
            func_CF88(); break;
        case 0xCFB7:
            func_CFB7(); break;
        case 0xCFAE:
            func_CFAE(); break;
        case 0xCF91:
            func_CF91(); break;
        case 0xCFBD:
            func_CFBD(); break;
        case 0xCDBF:
            func_CDBF(); break;
        case 0xCDCD:
            func_CDCD(); break;
        case 0xCB96:
            func_CB96(); break;
        case 0xCD6B:
            func_CD6B(); break;
        case 0xCD6D:
            func_CD6D(); break;
        case 0xCDD7:
            func_CDD7(); break;
        case 0xCDFA:
            func_CDFA(); break;
        case 0xCE03:
            func_CE03(); break;
        case 0xCE20:
            func_CE20(); break;
        case 0xCDFF:
            func_CDFF(); break;
        case 0xCE19:
            func_CE19(); break;
        case 0xE269:
            func_E269(); break;
        case 0xE320:
            func_E320(); break;
        case 0xE321:
            func_E321(); break;
        case 0xE26C:
            func_E26C(); break;
        case 0xE284:
            func_E284(); break;
        case 0xE2D0:
            func_E2D0(); break;
        case 0xE7A2:
            func_E7A2(); break;
        case 0xE7AA:
            func_E7AA(); break;
        case 0xE8BE:
            func_E8BE(); break;
        case 0xE8C3:
            func_E8C3(); break;
        case 0xE8C8:
            func_E8C8(); break;
        case 0xD638:
            func_D638(); break;
        case 0xD144:
            func_D144(); break;
        case 0xD150:
            func_D150(); break;
        case 0xD16A:
            func_D16A(); break;
        case 0xCFBE:
            func_CFBE(); break;
        case 0xD275:
            func_D275(); break;
        case 0xD2D1:
            func_D2D1(); break;
        case 0xD2B9:
            func_D2B9(); break;
        case 0xD2BA:
            func_D2BA(); break;
        case 0xF1EE:
            func_F1EE(); break;
        case 0xD1F7:
            func_D1F7(); break;
        case 0xD2EB:
            func_D2EB(); break;
        case 0xD2EC:
            func_D2EC(); break;
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
        case 0xD4A9:
            func_D4A9(); break;
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
        case 0xE24C:
            func_E24C(); break;
        case 0xD411:
            func_D411(); break;
        case 0xD47E:
            func_D47E(); break;
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
        case 0xFFC9:
            func_FFC9(); break;
        case 0xFFB1:
            func_FFB1(); break;
        case 0xFFBD:
            func_FFBD(); break;
        case 0xFFBA:
            func_FFBA(); break;
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
                case 2: func_95AE_b2(); break;
                case 3: func_95AE_b3(); break;
                case 4: func_95AE_b4(); break;
                case 5: func_95AE_b5(); break;
                case 6: func_95AE_b6(); break;
                case 1: func_95AE_b1(); break;
                default: return nes_interp_dispatch(addr);
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
        case 0xF01D:
            func_F01D(); break;
        case 0xEAF4:
            func_EAF4(); break;
        case 0xEA60:
            func_EA60(); break;
        case 0xFB88:
            func_FB88(); break;
        case 0xFBCA:
            func_FBCA(); break;
        case 0xF852:
            func_F852(); break;
        case 0xEB6E:
            func_EB6E(); break;
        case 0xFB87:
            func_FB87(); break;
        case 0xF870:
            func_F870(); break;
        case 0xF86F:
            func_F86F(); break;
        case 0xEFD0:
            func_EFD0(); break;
        case 0xF1D1:
            func_F1D1(); break;
        case 0xF3B0:
            func_F3B0(); break;
        case 0xF01E:
            func_F01E(); break;
        case 0xF010:
            func_F010(); break;
        case 0xF004:
            func_F004(); break;
        case 0xF4A9:
            func_F4A9(); break;
        case 0xF02B:
            func_F02B(); break;
        case 0xF5D1:
            func_F5D1(); break;
        case 0xF6D1:
            func_F6D1(); break;
        case 0xF089:
            func_F089(); break;
        case 0xF029:
            func_F029(); break;
        case 0xF8B0:
            func_F8B0(); break;
        case 0xF9D0:
            func_F9D0(); break;
        case 0xF9D1:
            func_F9D1(); break;
        case 0xEDD1:
            func_EDD1(); break;
        case 0xEAF6:
            func_EAF6(); break;
        case 0xF024:
            func_F024(); break;
        case 0xF025:
            func_F025(); break;
        case 0xFA10:
            func_FA10(); break;
        case 0xF8C4:
            func_F8C4(); break;
        case 0xF8C5:
            func_F8C5(); break;
        case 0xF06A:
            func_F06A(); break;
        case 0xEED1:
            func_EED1(); break;
        case 0xFC86:
            func_FC86(); break;
        case 0xFC29:
            func_FC29(); break;
        case 0xF8D1:
            func_F8D1(); break;
        case 0xF49E:
            func_F49E(); break;
        case 0xFA84:
            func_FA84(); break;
        case 0xF00B:
            func_F00B(); break;
        case 0xF068:
            func_F068(); break;
        case 0xF6F0:
            func_F6F0(); break;
        case 0xF6F1:
            func_F6F1(); break;
        case 0xEE06:
            func_EE06(); break;
        case 0xF4D1:
            func_F4D1(); break;
        case 0xEFBE:
            func_EFBE(); break;
        case 0xF0BD:
            func_F0BD(); break;
        case 0xF0AB:
            func_F0AB(); break;
        case 0xFC66:
            func_FC66(); break;
        case 0xF221:
            func_F221(); break;
        case 0xF009:
            func_F009(); break;
        case 0xEE20:
            func_EE20(); break;
        case 0xF027:
            func_F027(); break;
        case 0xF020:
            func_F020(); break;
        case 0xF021:
            func_F021(); break;
        case 0xF064:
            func_F064(); break;
        case 0xF04D:
            func_F04D(); break;
        case 0xEFF1:
            func_EFF1(); break;
        case 0xED38:
            func_ED38(); break;
        case 0xF0E8:
            func_F0E8(); break;
        case 0xF7A0:
            func_F7A0(); break;
        case 0xF7A1:
            func_F7A1(); break;
        case 0xF321:
            func_F321(); break;
        case 0xF7B1:
            func_F7B1(); break;
        case 0xFB20:
            func_FB20(); break;
        case 0xF211:
            func_F211(); break;
        case 0xF5AA:
            func_F5AA(); break;
        case 0xEBBE:
            func_EBBE(); break;
        case 0xF1EF:
            func_F1EF(); break;
        case 0xF720:
            func_F720(); break;
        case 0xFAA9:
            func_FAA9(); break;
        case 0xF809:
            func_F809(); break;
        case 0xFC05:
            func_FC05(); break;
        case 0xF079:
            func_F079(); break;
        case 0xF04F:
            func_F04F(); break;
        case 0xEED5:
            func_EED5(); break;
        case 0xEFC0:
            func_EFC0(); break;
        case 0xFC20:
            func_FC20(); break;
        case 0xF84C:
            func_F84C(); break;
        case 0xEB4C:
            func_EB4C(); break;
        case 0xF7E9:
            func_F7E9(); break;
        case 0xF9B0:
            func_F9B0(); break;
        case 0xEBF1:
            func_EBF1(); break;
        case 0xF014:
            func_F014(); break;
        case 0xF015:
            func_F015(); break;
        case 0xF4BE:
            func_F4BE(); break;
        case 0xF421:
            func_F421(); break;
        case 0xF1F5:
            func_F1F5(); break;
        case 0xEE03:
            func_EE03(); break;
        case 0xFC10:
            func_FC10(); break;
        case 0xF05B:
            func_F05B(); break;
        case 0xF060:
            func_F060(); break;
        case 0xF0FD:
            func_F0FD(); break;
        case 0xF018:
            func_F018(); break;
        case 0xF019:
            func_F019(); break;
        case 0xF0FF:
            func_F0FF(); break;
        case 0xEFB0:
            func_EFB0(); break;
        case 0xF7BD:
            func_F7BD(); break;
        case 0xF7C9:
            func_F7C9(); break;
        case 0xF7CA:
            func_F7CA(); break;
        case 0xF0C5:
            func_F0C5(); break;
        case 0xF080:
            func_F080(); break;
        case 0xF869:
            func_F869(); break;
        case 0xF4BC:
            func_F4BC(); break;
        case 0xF8DF:
            func_F8DF(); break;
        case 0xF89E:
            func_F89E(); break;
        case 0xF9BC:
            func_F9BC(); break;
        case 0xECB1:
            func_ECB1(); break;
        case 0xFBB1:
            func_FBB1(); break;
        case 0xFBF0:
            func_FBF0(); break;
        case 0xF04B:
            func_F04B(); break;
        case 0xF0ED:
            func_F0ED(); break;
        case 0xF059:
            func_F059(); break;
        case 0xED04:
            func_ED04(); break;
        case 0xEFCA:
            func_EFCA(); break;
        case 0xEFE0:
            func_EFE0(); break;
        case 0xFC87:
            func_FC87(); break;
        case 0xF829:
            func_F829(); break;
        case 0xF82A:
            func_F82A(); break;
        case 0xF2C9:
            func_F2C9(); break;
        case 0xF0F2:
            func_F0F2(); break;
        case 0xEE51:
            func_EE51(); break;
        case 0xECD0:
            func_ECD0(); break;
        case 0xECD1:
            func_ECD1(); break;
        case 0xF5BD:
            func_F5BD(); break;
        case 0xF5FD:
            func_F5FD(); break;
        case 0xF6FD:
            func_F6FD(); break;
        case 0xEAC1:
            func_EAC1(); break;
        case 0xF821:
            func_F821(); break;
        case 0xF0A6:
            func_F0A6(); break;
        case 0xEF0A:
            func_EF0A(); break;
        case 0xEB29:
            func_EB29(); break;
        case 0xEB4E:
            func_EB4E(); break;
        case 0xEB25:
            func_EB25(); break;
        case 0xEB93:
            func_EB93(); break;
        case 0xED52:
            func_ED52(); break;
        case 0xFB5E:
            func_FB5E(); break;
        case 0xEF10:
            func_EF10(); break;
        case 0xED8D:
            func_ED8D(); break;
        case 0xEE30:
            func_EE30(); break;
        case 0xF051:
            func_F051(); break;
        case 0xF611:
            func_F611(); break;
        case 0xEA8D:
            func_EA8D(); break;
        case 0xEA8E:
            func_EA8E(); break;
        case 0xEF9A:
            func_EF9A(); break;
        case 0xEFF4:
            func_EFF4(); break;
        case 0xF3FC:
            func_F3FC(); break;
        case 0xF0B0:
            func_F0B0(); break;
        case 0xF4B9:
            func_F4B9(); break;
        case 0xED20:
            func_ED20(); break;
        case 0xED21:
            func_ED21(); break;
        case 0xFBB9:
            func_FBB9(); break;
        case 0xF1E1:
            func_F1E1(); break;
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
        case 0xF257:
            func_F257(); break;
        case 0xEBD0:
            func_EBD0(); break;
        case 0xF06C:
            func_F06C(); break;
        case 0xECC9:
            func_ECC9(); break;
        case 0xF00D:
            func_F00D(); break;
        case 0xF082:
            func_F082(); break;
        case 0xF4FF:
            func_F4FF(); break;
        case 0xF99D:
            func_F99D(); break;
        case 0xF07F:
            func_F07F(); break;
        case 0xFBAA:
            func_FBAA(); break;
        case 0xEFA0:
            func_EFA0(); break;
        case 0xF1F0:
            func_F1F0(); break;
        case 0xF499:
            func_F499(); break;
        case 0xF49A:
            func_F49A(); break;
        case 0xF92B:
            func_F92B(); break;
        case 0xF899:
            func_F899(); break;
        case 0xF89A:
            func_F89A(); break;
        case 0xF0F7:
            func_F0F7(); break;
        case 0xEABA:
            func_EABA(); break;
        case 0xEBBA:
            func_EBBA(); break;
        case 0xEC21:
            func_EC21(); break;
        case 0xFC5D:
            func_FC5D(); break;
        case 0xFB01:
            func_FB01(); break;
        case 0xFBFF:
            func_FBFF(); break;
        case 0xED10:
            func_ED10(); break;
        case 0xF605:
            func_F605(); break;
        case 0xF18E:
            func_F18E(); break;
        case 0xF017:
            func_F017(); break;
        case 0xED18:
            func_ED18(); break;
        case 0xFB75:
            func_FB75(); break;
        case 0xFC81:
            func_FC81(); break;
        case 0xEFAB:
            func_EFAB(); break;
        case 0xF084:
            func_F084(); break;
        case 0xFA9F:
            func_FA9F(); break;
        case 0xEA7D:
            func_EA7D(); break;
        case 0xF03D:
            func_F03D(); break;
        case 0xF0B4:
            func_F0B4(); break;
        case 0xED32:
            func_ED32(); break;
        case 0xF012:
            func_F012(); break;
        case 0xECE4:
            func_ECE4(); break;
        case 0xECC5:
            func_ECC5(); break;
        case 0xF0F4:
            func_F0F4(); break;
        case 0xF56B:
            func_F56B(); break;
        case 0xECAD:
            func_ECAD(); break;
        case 0xEE4F:
            func_EE4F(); break;
        case 0xEDC7:
            func_EDC7(); break;
        case 0xED15:
            func_ED15(); break;
        case 0xF5F9:
            func_F5F9(); break;
        case 0xEA72:
            func_EA72(); break;
        case 0xF4A2:
            func_F4A2(); break;
        case 0xF06E:
            func_F06E(); break;
        case 0xF0BF:
            func_F0BF(); break;
        case 0xEC0E:
            func_EC0E(); break;
        case 0xED0E:
            func_ED0E(); break;
        case 0xFC0E:
            func_FC0E(); break;
        case 0xF0C7:
            func_F0C7(); break;
        case 0xEA90:
            func_EA90(); break;
        case 0xF510:
            func_F510(); break;
        case 0xF02C:
            func_F02C(); break;
        case 0xF520:
            func_F520(); break;
        case 0xFAB9:
            func_FAB9(); break;
        case 0xEEB3:
            func_EEB3(); break;
        case 0xEEB5:
            func_EEB5(); break;
        case 0xEAD0:
            func_EAD0(); break;
        case 0xEE22:
            func_EE22(); break;
        case 0xEE0D:
            func_EE0D(); break;
        case 0xEBC6:
            func_EBC6(); break;
        case 0xED85:
            func_ED85(); break;
        case 0xEA85:
            func_EA85(); break;
        case 0xF7B9:
            func_F7B9(); break;
        case 0xEAA5:
            func_EAA5(); break;
        case 0xF83E:
            func_F83E(); break;
        case 0xF64C:
            func_F64C(); break;
        case 0xF5F0:
            func_F5F0(); break;
        case 0xF0FB:
            func_F0FB(); break;
        case 0xF44C:
            func_F44C(); break;
        case 0xF6DD:
            func_F6DD(); break;
        case 0xF60A:
            func_F60A(); break;
        case 0xF4DD:
            func_F4DD(); break;
        case 0xEBC0:
            func_EBC0(); break;
        case 0xEDB9:
            func_EDB9(); break;
        case 0xF6F8:
            func_F6F8(); break;
        case 0xF8FE:
            func_F8FE(); break;
        case 0xFB0D:
            func_FB0D(); break;
        case 0xF2B9:
            func_F2B9(); break;
        case 0xF0B9:
            func_F0B9(); break;
        case 0xFC7D:
            func_FC7D(); break;
        case 0xFB99:
            func_FB99(); break;
        case 0xF999:
            func_F999(); break;
        case 0xEFB9:
            func_EFB9(); break;
        case 0xF8A9:
            func_F8A9(); break;
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
        case 0xFCF0:
            func_FCF0(); break;
        case 0xFD0D:
            func_FD0D(); break;
        case 0xEB7A:
            func_EB7A(); break;
        case 0xEB28:
            func_EB28(); break;
        case 0xEB4D:
            func_EB4D(); break;
        case 0xEB24:
            func_EB24(); break;
        case 0xEB92:
            func_EB92(); break;
        case 0xEE41:
            func_EE41(); break;
        case 0xEE4A:
            func_EE4A(); break;
        case 0xEC25:
            func_EC25(); break;
        case 0xEE3D:
            func_EE3D(); break;
        case 0xEE86:
            func_EE86(); break;
        case 0xEC09:
            func_EC09(); break;
        case 0x95B1:
            switch (g_current_bank) {
                case 0: func_95B1_b0(); break;
                case 2: func_95B1_b2(); break;
                case 3: func_95B1_b3(); break;
                case 4: func_95B1_b4(); break;
                case 5: func_95B1_b5(); break;
                case 6: func_95B1_b6(); break;
                case 1: func_95B1_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x95B4:
            switch (g_current_bank) {
                case 0: func_95B4_b0(); break;
                case 2: func_95B4_b2(); break;
                case 3: func_95B4_b3(); break;
                case 4: func_95B4_b4(); break;
                case 5: func_95B4_b5(); break;
                case 6: func_95B4_b6(); break;
                case 1: func_95B4_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x95B7:
            switch (g_current_bank) {
                case 0: func_95B7_b0(); break;
                case 2: func_95B7_b2(); break;
                case 3: func_95B7_b3(); break;
                case 4: func_95B7_b4(); break;
                case 5: func_95B7_b5(); break;
                case 6: func_95B7_b6(); break;
                case 1: func_95B7_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xEEC6:
            func_EEC6(); break;
        case 0x95BA:
            switch (g_current_bank) {
                case 0: func_95BA_b0(); break;
                case 2: func_95BA_b2(); break;
                case 3: func_95BA_b3(); break;
                case 4: func_95BA_b4(); break;
                case 5: func_95BA_b5(); break;
                case 6: func_95BA_b6(); break;
                case 1: func_95BA_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xEF9E:
            func_EF9E(); break;
        case 0xF19A:
            func_F19A(); break;
        case 0xF149:
            func_F149(); break;
        case 0xF2B4:
            func_F2B4(); break;
        case 0xF32A:
            func_F32A(); break;
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
        case 0xF1B3:
            func_F1B3(); break;
        case 0xF162:
            func_F162(); break;
        case 0xF1FA:
            func_F1FA(); break;
        case 0xF2ED:
            func_F2ED(); break;
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
        case 0xF37C:
            func_F37C(); break;
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
        case 0xF550:
            func_F550(); break;
        case 0xF54D:
            func_F54D(); break;
        case 0xF539:
            func_F539(); break;
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
                default: return nes_interp_dispatch(addr);
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
        case 0xF518:
            func_F518(); break;
        case 0xF423:
            func_F423(); break;
        case 0xCBD2:
            func_CBD2(); break;
        case 0xF673:
            func_F673(); break;
        case 0x95A8:
            switch (g_current_bank) {
                case 0: func_95A8_b0(); break;
                case 1: func_95A8_b1(); break;
                case 2: func_95A8_b2(); break;
                case 3: func_95A8_b3(); break;
                case 4: func_95A8_b4(); break;
                case 5: func_95A8_b5(); break;
                case 6: func_95A8_b6(); break;
                default: return nes_interp_dispatch(addr);
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
                default: return nes_interp_dispatch(addr);
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
                default: return nes_interp_dispatch(addr);
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
                case 6: func_8206_b6(); break;
                case 1: func_8206_b1(); break;
                case 2: func_8206_b2(); break;
                case 3: func_8206_b3(); break;
                case 4: func_8206_b4(); break;
                case 5: func_8206_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xF84B:
            func_F84B(); break;
        case 0xF8E8:
            func_F8E8(); break;
        case 0xF8EB:
            func_F8EB(); break;
        case 0xF92C:
            func_F92C(); break;
        case 0xF8F8:
            func_F8F8(); break;
        case 0xF91D:
            func_F91D(); break;
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
        case 0xFA60:
            func_FA60(); break;
        case 0xF987:
            func_F987(); break;
        case 0xF97C:
            func_F97C(); break;
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
        case 0xE98B:
            func_E98B(); break;
        case 0xE98D:
            func_E98D(); break;
        case 0xFAB4:
            func_FAB4(); break;
        case 0xFA41:
            func_FA41(); break;
        case 0xF97E:
            func_F97E(); break;
        case 0xFAFF:
            func_FAFF(); break;
        case 0xFBEC:
            func_FBEC(); break;
        case 0xE9B7:
            func_E9B7(); break;
        case 0xE9BD:
            func_E9BD(); break;
        case 0xE54A:
            func_E54A(); break;
        case 0xE54D:
            func_E54D(); break;
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
        case 0xD5D0:
            func_D5D0(); break;
        case 0xD65E:
            func_D65E(); break;
        case 0xD668:
            func_D668(); break;
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
        case 0xD619:
            func_D619(); break;
        case 0xD64D:
            func_D64D(); break;
        case 0xD620:
            func_D620(); break;
        case 0xD621:
            func_D621(); break;
        case 0xD646:
            func_D646(); break;
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
        case 0xD879:
            func_D879(); break;
        case 0xD885:
            func_D885(); break;
        case 0xD8A3:
            func_D8A3(); break;
        case 0xD8AD:
            func_D8AD(); break;
        case 0xD8A9:
            func_D8A9(); break;
        case 0xD8BF:
            func_D8BF(); break;
        case 0xD921:
            func_D921(); break;
        case 0xD94E:
            func_D94E(); break;
        case 0xD969:
            func_D969(); break;
        case 0xD95A:
            func_D95A(); break;
        case 0xD79E:
            func_D79E(); break;
        case 0xD9D3:
            func_D9D3(); break;
        case 0xDAB0:
            func_DAB0(); break;
        case 0xDAD1:
            func_DAD1(); break;
        case 0xDAB9:
            func_DAB9(); break;
        case 0xDA1A:
            func_DA1A(); break;
        case 0xDA20:
            func_DA20(); break;
        case 0xDA21:
            func_DA21(); break;
        case 0xDA2D:
            func_DA2D(); break;
        case 0xDADA:
            func_DADA(); break;
        case 0xFC98:
            func_FC98(); break;
        case 0x8B9C:
            func_8B9C_b0(); break;
        case 0x8B87:
            switch (g_current_bank) {
                case 7: func_CB87(); break;
                case 2: func_8B87_b2(); break;
                case 3: func_8B87_b3(); break;
                case 4: func_8B87_b4(); break;
                case 5: func_8B87_b5(); break;
                case 6: func_8B87_b6(); break;
                case 1: func_8B87_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x8B9D:
            switch (g_current_bank) {
                case 2: func_8B9D_b2(); break;
                case 3: func_8B9D_b3(); break;
                case 4: func_8B9D_b4(); break;
                case 5: func_8B9D_b5(); break;
                case 6: func_8B9D_b6(); break;
                case 1: func_8B9D_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x8BB1:
            switch (g_current_bank) {
                case 7: func_CBB1(); break;
                case 2: func_8BB1_b2(); break;
                case 3: func_8BB1_b3(); break;
                case 4: func_8BB1_b4(); break;
                case 5: func_8BB1_b5(); break;
                case 1: func_8BB1_b1(); break;
                case 6: func_8BB1_b6(); break;
                default: return nes_interp_dispatch(addr);
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
        case 0xFE70:
            func_FE70(); break;
        case 0xFE83:
            func_FE83(); break;
        case 0xFE85:
            func_FE85(); break;
        case 0xFEA6:
            func_FEA6(); break;
        case 0xFE9A:
            func_FE9A(); break;
        case 0xFEC5:
            func_FEC5(); break;
        case 0xFEC9:
            func_FEC9(); break;
        case 0xFE9E:
            func_FE9E(); break;
        case 0xFEAD:
            func_FEAD(); break;
        case 0xFEA8:
            func_FEA8(); break;
        case 0xFE6D:
            func_FE6D(); break;
        case 0xFF54:
            func_FF54(); break;
        case 0xFF85:
            func_FF85(); break;
        case 0xFF69:
            func_FF69(); break;
        case 0xFF60:
            func_FF60(); break;
        case 0xFF72:
            func_FF72(); break;
        case 0xFAB3:
            func_FAB3(); break;
        case 0xDB16:
            func_DB16(); break;
        case 0xDB36:
            func_DB36(); break;
        case 0xCBF9:
            func_CBF9(); break;
        case 0xDB2F:
            func_DB2F(); break;
        case 0xDB30:
            func_DB30(); break;
        case 0xDD97:
            func_DD97(); break;
        case 0xDD98:
            func_DD98(); break;
        case 0xDD99:
            func_DD99(); break;
        case 0xDC51:
            func_DC51(); break;
        case 0xDC54:
            func_DC54(); break;
        case 0xFE05:
            func_FE05(); break;
        case 0xFDE2:
            func_FDE2(); break;
        case 0xDCA1:
            func_DCA1(); break;
        case 0xDEE6:
            func_DEE6(); break;
        case 0xDF21:
            func_DF21(); break;
        case 0xDEF5:
            func_DEF5(); break;
        case 0xDF1B:
            func_DF1B(); break;
        case 0xE1AD:
            func_E1AD(); break;
        case 0x8563:
            switch (g_current_bank) {
                case 1: func_8563_b1(); break;
                case 2: func_8563_b2(); break;
                case 3: func_8563_b3(); break;
                case 4: func_8563_b4(); break;
                case 5: func_8563_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x855A:
            switch (g_current_bank) {
                case 1: func_855A_b1(); break;
                case 2: func_855A_b2(); break;
                case 3: func_855A_b3(); break;
                case 4: func_855A_b4(); break;
                case 5: func_855A_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x81FC:
            switch (g_current_bank) {
                case 1: func_81FC_b1(); break;
                case 2: func_81FC_b2(); break;
                case 3: func_81FC_b3(); break;
                case 4: func_81FC_b4(); break;
                case 5: func_81FC_b5(); break;
                default: return nes_interp_dispatch(addr);
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
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x81F5:
            switch (g_current_bank) {
                case 1: func_81F5_b1(); break;
                case 2: func_81F5_b2(); break;
                case 3: func_81F5_b3(); break;
                case 4: func_81F5_b4(); break;
                case 5: func_81F5_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x81C0:
            switch (g_current_bank) {
                case 1: func_81C0_b1(); break;
                case 2: func_81C0_b2(); break;
                case 3: func_81C0_b3(); break;
                case 4: func_81C0_b4(); break;
                case 5: func_81C0_b5(); break;
                default: return nes_interp_dispatch(addr);
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
        case 0xC41D:
            func_C41D(); break;
        case 0xC41E:
            func_C41E(); break;
        case 0xC420:
            func_C420(); break;
        case 0xC427:
            func_C427(); break;
        case 0xE783:
            func_E783(); break;
        case 0xE785:
            func_E785(); break;
        case 0xE7BD:
            func_E7BD(); break;
        case 0x81B8:
            switch (g_current_bank) {
                case 4: func_81B8_b4(); break;
                case 1: func_81B8_b1(); break;
                case 2: func_81B8_b2(); break;
                case 3: func_81B8_b3(); break;
                case 5: func_81B8_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xBB19:
            switch (g_current_bank) {
                case 4: func_BB19_b4(); break;
                case 5: func_BB19_b5(); break;
                case 2: func_BB19_b2(); break;
                case 6: func_BB19_b6(); break;
                case 1: func_BB19_b1(); break;
                case 3: func_BB19_b3(); break;
                case 0: func_BB19_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xBB16:
            switch (g_current_bank) {
                case 4: func_BB16_b4(); break;
                case 5: func_BB16_b5(); break;
                case 2: func_BB16_b2(); break;
                case 6: func_BB16_b6(); break;
                case 1: func_BB16_b1(); break;
                case 3: func_BB16_b3(); break;
                case 0: func_BB16_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xBA9D:
            switch (g_current_bank) {
                case 7: func_FA9D(); break;
                case 4: func_BA9D_b4(); break;
                case 5: func_BA9D_b5(); break;
                case 2: func_BA9D_b2(); break;
                case 6: func_BA9D_b6(); break;
                case 3: func_BA9D_b3(); break;
                case 1: func_BA9D_b1(); break;
                case 0: func_BA9D_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xBAA1:
            switch (g_current_bank) {
                case 4: func_BAA1_b4(); break;
                case 5: func_BAA1_b5(); break;
                case 2: func_BAA1_b2(); break;
                case 6: func_BAA1_b6(); break;
                case 3: func_BAA1_b3(); break;
                case 1: func_BAA1_b1(); break;
                case 0: func_BAA1_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xBAB0:
            switch (g_current_bank) {
                case 7: func_FAB0(); break;
                case 4: func_BAB0_b4(); break;
                case 5: func_BAB0_b5(); break;
                case 2: func_BAB0_b2(); break;
                case 6: func_BAB0_b6(); break;
                case 1: func_BAB0_b1(); break;
                case 3: func_BAB0_b3(); break;
                case 0: func_BAB0_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xBC8D:
            switch (g_current_bank) {
                case 4: func_BC8D_b4(); break;
                case 5: func_BC8D_b5(); break;
                case 2: func_BC8D_b2(); break;
                case 6: func_BC8D_b6(); break;
                case 3: func_BC8D_b3(); break;
                case 1: func_BC8D_b1(); break;
                case 0: func_BC8D_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xBC8B:
            switch (g_current_bank) {
                case 4: func_BC8B_b4(); break;
                case 5: func_BC8B_b5(); break;
                case 2: func_BC8B_b2(); break;
                case 6: func_BC8B_b6(); break;
                case 1: func_BC8B_b1(); break;
                case 3: func_BC8B_b3(); break;
                case 0: func_BC8B_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB3FC:
            switch (g_current_bank) {
                case 7: func_F3FC(); break;
                case 4: func_B3FC_b4(); break;
                case 5: func_B3FC_b5(); break;
                case 2: func_B3FC_b2(); break;
                case 6: func_B3FC_b6(); break;
                case 3: func_B3FC_b3(); break;
                case 1: func_B3FC_b1(); break;
                case 0: func_B3FC_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xC45D:
            func_C45D(); break;
        case 0xA93E:
            switch (g_current_bank) {
                case 4: func_A93E_b4(); break;
                case 5: func_A93E_b5(); break;
                case 2: func_A93E_b2(); break;
                case 6: func_A93E_b6(); break;
                case 3: func_A93E_b3(); break;
                case 1: func_A93E_b1(); break;
                case 0: func_A93E_b0(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xC5D7:
            func_C5D7(); break;
        case 0xC5DC:
            func_C5DC(); break;
        case 0xC601:
            func_C601(); break;
        case 0xC5E1:
            func_C5E1(); break;
        case 0xC5F0:
            func_C5F0(); break;
        case 0xC1D4:
            func_C1D4(); break;
        case 0xC578:
            func_C578(); break;
        case 0xC645:
            func_C645(); break;
        case 0xC663:
            func_C663(); break;
        case 0xC677:
            func_C677(); break;
        case 0xC681:
            func_C681(); break;
        case 0xC69F:
            func_C69F(); break;
        case 0xC6A4:
            func_C6A4(); break;
        case 0xC6C2:
            func_C6C2(); break;
        case 0xC707:
            func_C707(); break;
        case 0xC7D5:
            func_C7D5(); break;
        case 0xC7DB:
            func_C7DB(); break;
        case 0xCBDE:
            func_CBDE(); break;
        case 0xCE66:
            func_CE66(); break;
        case 0xCF4E:
            func_CF4E(); break;
        case 0xCBF3:
            func_CBF3(); break;
        case 0xAFD7:
            switch (g_current_bank) {
                case 4: func_AFD7_b4(); break;
                case 5: func_AFD7_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xAFE4:
            switch (g_current_bank) {
                case 4: func_AFE4_b4(); break;
                case 5: func_AFE4_b5(); break;
                default: return nes_interp_dispatch(addr);
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
        case 0x8D12:
            func_8D12_b0(); break;
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
        case 0xD095:
            func_D095(); break;
        case 0xD210:
            func_D210(); break;
        case 0xCDBE:
            func_CDBE(); break;
        case 0xE268:
            func_E268(); break;
        case 0xE25D:
            func_E25D(); break;
        case 0xE37A:
            func_E37A(); break;
        case 0xE3D0:
            func_E3D0(); break;
        case 0xE3BD:
            func_E3BD(); break;
        case 0xE3A2:
            func_E3A2(); break;
        case 0xE457:
            func_E457(); break;
        case 0xE48D:
            func_E48D(); break;
        case 0xE486:
            func_E486(); break;
        case 0xE31A:
            func_E31A(); break;
        case 0xE4A3:
            func_E4A3(); break;
        case 0xE4E4:
            func_E4E4(); break;
        case 0xE4B1:
            func_E4B1(); break;
        case 0xE4D0:
            func_E4D0(); break;
        case 0xE4C0:
            func_E4C0(); break;
        case 0xE3E5:
            func_E3E5(); break;
        case 0xE409:
            func_E409(); break;
        case 0xE626:
            func_E626(); break;
        case 0xE365:
            func_E365(); break;
        case 0xE668:
            func_E668(); break;
        case 0xE682:
            func_E682(); break;
        case 0xE683:
            func_E683(); break;
        case 0xE690:
            func_E690(); break;
        case 0xE67E:
            func_E67E(); break;
        case 0xE685:
            func_E685(); break;
        case 0xE6A0:
            func_E6A0(); break;
        case 0xE699:
            func_E699(); break;
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
        case 0xE564:
            func_E564(); break;
        case 0xE880:
            func_E880(); break;
        case 0xD976:
            func_D976(); break;
        case 0xD983:
            func_D983(); break;
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
        case 0xEB8F:
            func_EB8F(); break;
        case 0xEC54:
            func_EC54(); break;
        case 0xE549:
            func_E549(); break;
        case 0xA29E:
            switch (g_current_bank) {
                case 0: func_A29E_b0(); break;
                case 2: func_A29E_b2(); break;
                case 4: func_A29E_b4(); break;
                case 5: func_A29E_b5(); break;
                case 6: func_A29E_b6(); break;
                case 3: func_A29E_b3(); break;
                case 1: func_A29E_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xE6FE:
            func_E6FE(); break;
        case 0xE590:
            func_E590(); break;
        case 0xC2C4:
            func_C2C4(); break;
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
        case 0xC2C7:
            func_C2C7(); break;
        case 0x9CE6:
            func_9CE6_b3(); break;
        case 0x9D21:
            func_9D21_b3(); break;
        case 0x9D3D:
            func_9D3D_b3(); break;
        case 0x9D6C:
            func_9D6C_b3(); break;
        case 0x9D75:
            func_9D75_b3(); break;
        case 0xF298:
            func_F298(); break;
        case 0xF329:
            func_F329(); break;
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
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xF59A:
            func_F59A(); break;
        case 0x9593:
            func_9593_b2(); break;
        case 0x9641:
            func_9641_b2(); break;
        case 0xFFFF:
            func_FFFF(); break;
        case 0x96BE:
            func_96BE_b2(); break;
        case 0x98A4:
            func_98A4_b2(); break;
        case 0x9839:
            func_9839_b2(); break;
        case 0x9954:
            func_9954_b2(); break;
        case 0x98F4:
            func_98F4_b2(); break;
        case 0x984D:
            func_984D_b2(); break;
        case 0x9A2F:
            func_9A2F_b2(); break;
        case 0x99F5:
            func_99F5_b2(); break;
        case 0x9A0A:
            func_9A0A_b2(); break;
        case 0x9A13:
            func_9A13_b2(); break;
        case 0xB102:
            func_B102_b2(); break;
        case 0x9A27:
            func_9A27_b2(); break;
        case 0x8021:
            switch (g_current_bank) {
                case 7: func_C021(); break;
                case 2: func_8021_b2(); break;
                case 6: func_8021_b6(); break;
                case 1: func_8021_b1(); break;
                case 3: func_8021_b3(); break;
                case 4: func_8021_b4(); break;
                case 5: func_8021_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x9B59:
            func_9B59_b2(); break;
        case 0x9DEC:
            func_9DEC_b2(); break;
        case 0xA40A:
            func_A40A_b2(); break;
        case 0xA46A:
            func_A46A_b2(); break;
        case 0xA471:
            func_A471_b2(); break;
        case 0xA4E9:
            func_A4E9_b2(); break;
        case 0xA4F5:
            func_A4F5_b2(); break;
        case 0xA527:
            func_A527_b2(); break;
        case 0xA540:
            func_A540_b2(); break;
        case 0xA54D:
            func_A54D_b2(); break;
        case 0xA57E:
            func_A57E_b2(); break;
        case 0x81F6:
            switch (g_current_bank) {
                case 1: func_81F6_b1(); break;
                case 2: func_81F6_b2(); break;
                case 3: func_81F6_b3(); break;
                case 4: func_81F6_b4(); break;
                case 5: func_81F6_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xF969:
            func_F969(); break;
        case 0xF984:
            func_F984(); break;
        case 0xE571:
            func_E571(); break;
        case 0xE603:
            func_E603(); break;
        case 0xE5BD:
            func_E5BD(); break;
        case 0xE614:
            func_E614(); break;
        case 0xE64C:
            func_E64C(); break;
        case 0xE661:
            func_E661(); break;
        case 0xE60F:
            func_E60F(); break;
        case 0xE5C9:
            func_E5C9(); break;
        case 0xE599:
            func_E599(); break;
        case 0xE629:
            func_E629(); break;
        case 0xE608:
            func_E608(); break;
        case 0xE60D:
            func_E60D(); break;
        case 0xE659:
            func_E659(); break;
        case 0xE640:
            func_E640(); break;
        case 0xE600:
            func_E600(); break;
        case 0xE5C2:
            func_E5C2(); break;
        case 0xE61C:
            func_E61C(); break;
        case 0xE62F:
            func_E62F(); break;
        case 0xE584:
            func_E584(); break;
        case 0xE63C:
            func_E63C(); break;
        case 0xE616:
            func_E616(); break;
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
        case 0xD2FA:
            func_D2FA(); break;
        case 0xCB9A:
            func_CB9A(); break;
        case 0xD66B:
            func_D66B(); break;
        case 0xD6A7:
            func_D6A7(); break;
        case 0xD720:
            func_D720(); break;
        case 0xD6D1:
            func_D6D1(); break;
        case 0xD76B:
            func_D76B(); break;
        case 0xD5FB:
            func_D5FB(); break;
        case 0xD5F8:
            func_D5F8(); break;
        case 0xE81E:
            func_E81E(); break;
        case 0x95C0:
            switch (g_current_bank) {
                case 0: func_95C0_b0(); break;
                case 2: func_95C0_b2(); break;
                case 3: func_95C0_b3(); break;
                case 4: func_95C0_b4(); break;
                case 5: func_95C0_b5(); break;
                case 6: func_95C0_b6(); break;
                case 1: func_95C0_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xD606:
            func_D606(); break;
        case 0xD651:
            func_D651(); break;
        case 0xE9BE:
            func_E9BE(); break;
        case 0xE9F2:
            func_E9F2(); break;
        case 0xE9CC:
            func_E9CC(); break;
        case 0xD602:
            func_D602(); break;
        case 0x9B37:
            func_9B37_b3(); break;
        case 0x9B44:
            func_9B44_b3(); break;
        case 0x9DD4:
            func_9DD4_b3(); break;
        case 0xA1E7:
            func_A1E7_b3(); break;
        case 0xA238:
            func_A238_b3(); break;
        case 0xA28A:
            switch (g_current_bank) {
                case 3: func_A28A_b3(); break;
                case 6: func_A28A_b6(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xA28B:
            func_A28B_b3(); break;
        case 0xA29B:
            func_A29B_b3(); break;
        case 0xA15E:
            func_A15E_b3(); break;
        case 0xA16B:
            func_A16B_b3(); break;
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
        case 0xFEE8:
            func_FEE8(); break;
        case 0xFF04:
            func_FF04(); break;
        case 0xFF21:
            func_FF21(); break;
        case 0xFEFC:
            func_FEFC(); break;
        case 0xFF01:
            func_FF01(); break;
        case 0xFF0A:
            func_FF0A(); break;
        case 0xFF06:
            func_FF06(); break;
        case 0xFF08:
            func_FF08(); break;
        case 0xFEF6:
            func_FEF6(); break;
        case 0xFEE5:
            func_FEE5(); break;
        case 0xDA3D:
            func_DA3D(); break;
        case 0xDA4C:
            func_DA4C(); break;
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
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x8BD5:
            switch (g_current_bank) {
                case 1: func_8BD5_b1(); break;
                case 2: func_8BD5_b2(); break;
                case 3: func_8BD5_b3(); break;
                case 4: func_8BD5_b4(); break;
                case 5: func_8BD5_b5(); break;
                case 6: func_8BD5_b6(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x8C01:
            switch (g_current_bank) {
                case 2: func_8C01_b2(); break;
                case 3: func_8C01_b3(); break;
                case 4: func_8C01_b4(); break;
                case 5: func_8C01_b5(); break;
                case 6: func_8C01_b6(); break;
                case 1: func_8C01_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x8C71:
            switch (g_current_bank) {
                case 2: func_8C71_b2(); break;
                case 3: func_8C71_b3(); break;
                case 4: func_8C71_b4(); break;
                case 5: func_8C71_b5(); break;
                case 1: func_8C71_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x8C61:
            switch (g_current_bank) {
                case 2: func_8C61_b2(); break;
                case 3: func_8C61_b3(); break;
                case 4: func_8C61_b4(); break;
                case 5: func_8C61_b5(); break;
                case 1: func_8C61_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x8C84:
            switch (g_current_bank) {
                case 2: func_8C84_b2(); break;
                case 3: func_8C84_b3(); break;
                case 4: func_8C84_b4(); break;
                case 5: func_8C84_b5(); break;
                case 6: func_8C84_b6(); break;
                case 1: func_8C84_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x8CC6:
            switch (g_current_bank) {
                case 2: func_8CC6_b2(); break;
                case 3: func_8CC6_b3(); break;
                case 4: func_8CC6_b4(); break;
                case 5: func_8CC6_b5(); break;
                case 6: func_8CC6_b6(); break;
                case 1: func_8CC6_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x8CED:
            switch (g_current_bank) {
                case 2: func_8CED_b2(); break;
                case 3: func_8CED_b3(); break;
                case 4: func_8CED_b4(); break;
                case 5: func_8CED_b5(); break;
                case 1: func_8CED_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x8CCF:
            switch (g_current_bank) {
                case 2: func_8CCF_b2(); break;
                case 3: func_8CCF_b3(); break;
                case 4: func_8CCF_b4(); break;
                case 5: func_8CCF_b5(); break;
                case 0: func_8CCF_b0(); break;
                case 6: func_8CCF_b6(); break;
                case 1: func_8CCF_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x8CF0:
            switch (g_current_bank) {
                case 7: func_CCF0(); break;
                case 2: func_8CF0_b2(); break;
                case 3: func_8CF0_b3(); break;
                case 4: func_8CF0_b4(); break;
                case 5: func_8CF0_b5(); break;
                case 6: func_8CF0_b6(); break;
                case 1: func_8CF0_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x8CFB:
            switch (g_current_bank) {
                case 6: func_8CFB_b6(); break;
                case 2: func_8CFB_b2(); break;
                case 3: func_8CFB_b3(); break;
                case 4: func_8CFB_b4(); break;
                case 5: func_8CFB_b5(); break;
                case 1: func_8CFB_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xFF3C:
            func_FF3C(); break;
        case 0xFF48:
            func_FF48(); break;
        case 0xFF49:
            func_FF49(); break;
        case 0xFF45:
            func_FF45(); break;
        case 0xFF46:
            func_FF46(); break;
        case 0xDF6B:
            func_DF6B(); break;
        case 0xDF92:
            func_DF92(); break;
        case 0xDFA3:
            func_DFA3(); break;
        case 0xDFBD:
            func_DFBD(); break;
        case 0xDFAA:
            func_DFAA(); break;
        case 0xE904:
            func_E904(); break;
        case 0xE90C:
            func_E90C(); break;
        case 0xE909:
            func_E909(); break;
        case 0xE89B:
            func_E89B(); break;
        case 0xE8CE:
            func_E8CE(); break;
        case 0xE8E9:
            func_E8E9(); break;
        case 0xE8D0:
            func_E8D0(); break;
        case 0xE8D1:
            func_E8D1(); break;
        case 0xE8EE:
            func_E8EE(); break;
        case 0xE8F0:
            func_E8F0(); break;
        case 0xE90F:
            func_E90F(); break;
        case 0xE939:
            func_E939(); break;
        case 0xE911:
            func_E911(); break;
        case 0xE935:
            func_E935(); break;
        case 0xE98E:
            func_E98E(); break;
        case 0xE9A8:
            func_E9A8(); break;
        case 0xE7E6:
            func_E7E6(); break;
        case 0xAF83:
            switch (g_current_bank) {
                case 4: func_AF83_b4(); break;
                case 5: func_AF83_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x8BD4:
            func_8BD4_b0(); break;
        case 0x8D3D:
            func_8D3D_b0(); break;
        case 0xE7AD:
            func_E7AD(); break;
        case 0xE800:
            func_E800(); break;
        case 0xE807:
            func_E807(); break;
        case 0xE820:
            func_E820(); break;
        case 0xE875:
            func_E875(); break;
        case 0xE804:
            func_E804(); break;
        case 0xE86D:
            func_E86D(); break;
        case 0xE86E:
            func_E86E(); break;
        case 0xE830:
            func_E830(); break;
        case 0xE84B:
            func_E84B(); break;
        case 0xE80B:
            func_E80B(); break;
        case 0xE80F:
            func_E80F(); break;
        case 0xE802:
            func_E802(); break;
        case 0xE805:
            func_E805(); break;
        case 0xE819:
            func_E819(); break;
        case 0xE85B:
            func_E85B(); break;
        case 0xE824:
            func_E824(); break;
        case 0xE364:
            func_E364(); break;
        case 0xE88B:
            func_E88B(); break;
        case 0xE8AA:
            func_E8AA(); break;
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
        case 0xD9CE:
            func_D9CE(); break;
        case 0xD9C2:
            func_D9C2(); break;
        case 0x9D64:
            func_9D64_b3(); break;
        case 0x9CD6:
            func_9CD6_b3(); break;
        case 0x803F:
            switch (g_current_bank) {
                case 7: func_C03F(); break;
                case 3: func_803F_b3(); break;
                case 1: func_803F_b1(); break;
                case 2: func_803F_b2(); break;
                case 4: func_803F_b4(); break;
                case 5: func_803F_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xA2AE:
            func_A2AE_b5(); break;
        case 0xA3D1:
            func_A3D1_b5(); break;
        case 0xA439:
            func_A439_b5(); break;
        case 0xA4E0:
            func_A4E0_b5(); break;
        case 0xA542:
            func_A542_b5(); break;
        case 0xA575:
            func_A575_b5(); break;
        case 0xA5CF:
            func_A5CF_b5(); break;
        case 0xA66F:
            func_A66F_b5(); break;
        case 0xA699:
            func_A699_b5(); break;
        case 0xA69F:
            func_A69F_b5(); break;
        case 0xA71C:
            func_A71C_b5(); break;
        case 0xF4F8:
            func_F4F8(); break;
        case 0xA7C5:
            func_A7C5_b5(); break;
        case 0xA822:
            func_A822_b5(); break;
        case 0xA8AC:
            switch (g_current_bank) {
                case 5: func_A8AC_b5(); break;
                case 1: func_A8AC_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xA91F:
            switch (g_current_bank) {
                case 5: func_A91F_b5(); break;
                case 6: func_A91F_b6(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xA98E:
            func_A98E_b5(); break;
        case 0xAAA3:
            func_AAA3_b5(); break;
        case 0xB948:
            switch (g_current_bank) {
                case 5: func_B948_b5(); break;
                case 0: func_B948_b0(); break;
                case 1: func_B948_b1(); break;
                case 2: func_B948_b2(); break;
                case 3: func_B948_b3(); break;
                case 4: func_B948_b4(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xBC23:
            switch (g_current_bank) {
                case 5: func_BC23_b5(); break;
                case 0: func_BC23_b0(); break;
                case 1: func_BC23_b1(); break;
                case 2: func_BC23_b2(); break;
                case 3: func_BC23_b3(); break;
                case 4: func_BC23_b4(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xAB86:
            func_AB86_b5(); break;
        case 0x9B20:
            func_9B20_b3(); break;
        case 0x9D88:
            func_9D88_b3(); break;
        case 0xC27C:
            func_C27C(); break;
        case 0xC27D:
            func_C27D(); break;
        case 0xC284:
            func_C284(); break;
        case 0xF56C:
            func_F56C(); break;
        case 0xB0D4:
            switch (g_current_bank) {
                case 2: func_B0D4_b2(); break;
                case 1: func_B0D4_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xA5EB:
            func_A5EB_b2(); break;
        case 0xA608:
            func_A608_b2(); break;
        case 0xA650:
            func_A650_b2(); break;
        case 0xA68D:
            func_A68D_b2(); break;
        case 0xA720:
            func_A720_b2(); break;
        case 0xA740:
            func_A740_b2(); break;
        case 0xA8E4:
            func_A8E4_b2(); break;
        case 0x9401:
            func_9401_b2(); break;
        case 0x9C01:
            func_9C01_b2(); break;
        case 0xA984:
            func_A984_b2(); break;
        case 0xA9AA:
            func_A9AA_b2(); break;
        case 0xAA06:
            func_AA06_b2(); break;
        case 0xABAD:
            func_ABAD_b2(); break;
        case 0xABDA:
            func_ABDA_b2(); break;
        case 0xABDF:
            func_ABDF_b2(); break;
        case 0xABE5:
            func_ABE5_b2(); break;
        case 0xAC15:
            func_AC15_b2(); break;
        case 0xAC4A:
            func_AC4A_b2(); break;
        case 0xAC7A:
            func_AC7A_b2(); break;
        case 0xAF01:
            func_AF01_b2(); break;
        case 0xAC89:
            func_AC89_b2(); break;
        case 0xAD3F:
            func_AD3F_b2(); break;
        case 0xAE2F:
            func_AE2F_b2(); break;
        case 0xAE36:
            func_AE36_b2(); break;
        case 0xAE3A:
            func_AE3A_b2(); break;
        case 0xAE3B:
            func_AE3B_b2(); break;
        case 0xAEE0:
            func_AEE0_b2(); break;
        case 0xAF59:
            func_AF59_b2(); break;
        case 0xAF2B:
            func_AF2B_b2(); break;
        case 0xB61C:
            switch (g_current_bank) {
                case 2: func_B61C_b2(); break;
                case 0: func_B61C_b0(); break;
                case 1: func_B61C_b1(); break;
                case 3: func_B61C_b3(); break;
                case 4: func_B61C_b4(); break;
                case 5: func_B61C_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB0A4:
            func_B0A4_b2(); break;
        case 0xD78B:
            func_D78B(); break;
        case 0xD78D:
            func_D78D(); break;
        case 0xD76A:
            func_D76A(); break;
        case 0xD77F:
            func_D77F(); break;
        case 0xD780:
            func_D780(); break;
        case 0xD784:
            func_D784(); break;
        case 0xE9C2:
            func_E9C2(); break;
        case 0xA142:
            func_A142_b3(); break;
        case 0x95BD:
            switch (g_current_bank) {
                case 0: func_95BD_b0(); break;
                case 2: func_95BD_b2(); break;
                case 3: func_95BD_b3(); break;
                case 4: func_95BD_b4(); break;
                case 5: func_95BD_b5(); break;
                case 6: func_95BD_b6(); break;
                case 1: func_95BD_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x9C4D:
            func_9C4D_b3(); break;
        case 0x9B70:
            func_9B70_b3(); break;
        case 0x9B84:
            func_9B84_b3(); break;
        case 0x9C2B:
            func_9C2B_b3(); break;
        case 0x9C31:
            func_9C31_b3(); break;
        case 0x8045:
            switch (g_current_bank) {
                case 3: func_8045_b3(); break;
                case 1: func_8045_b1(); break;
                case 2: func_8045_b2(); break;
                case 4: func_8045_b4(); break;
                case 5: func_8045_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x803C:
            switch (g_current_bank) {
                case 3: func_803C_b3(); break;
                case 1: func_803C_b1(); break;
                case 2: func_803C_b2(); break;
                case 4: func_803C_b4(); break;
                case 5: func_803C_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xA15D:
            func_A15D_b3(); break;
        case 0x9EE7:
            func_9EE7_b3(); break;
        case 0xFEDB:
            func_FEDB(); break;
        case 0xFECC:
            func_FECC(); break;
        case 0xFED6:
            func_FED6(); break;
        case 0xFED9:
            func_FED9(); break;
        case 0xFD84:
            func_FD84(); break;
        case 0xFD86:
            func_FD86(); break;
        case 0xFD08:
            func_FD08(); break;
        case 0xFD20:
            func_FD20(); break;
        case 0xFD25:
            func_FD25(); break;
        case 0xFD29:
            func_FD29(); break;
        case 0xFCC1:
            func_FCC1(); break;
        case 0x848B:
            func_848B_b6(); break;
        case 0x8631:
            func_8631_b6(); break;
        case 0x8778:
            func_8778_b6(); break;
        case 0x878F:
            func_878F_b6(); break;
        case 0xE06E:
            func_E06E(); break;
        case 0x8868:
            func_8868_b6(); break;
        case 0x8888:
            func_8888_b6(); break;
        case 0x8937:
            func_8937_b6(); break;
        case 0x8844:
            func_8844_b6(); break;
        case 0x89DB:
            func_89DB_b6(); break;
        case 0x89F1:
            func_89F1_b6(); break;
        case 0xC0C0:
            func_C0C0(); break;
        case 0xC0E0:
            func_C0E0(); break;
        case 0x8E25:
            func_8E25_b6(); break;
        case 0xDF20:
            func_DF20(); break;
        case 0xDF2D:
            func_DF2D(); break;
        case 0x90C4:
            func_90C4_b6(); break;
        case 0x90CA:
            func_90CA_b6(); break;
        case 0x90EE:
            func_90EE_b6(); break;
        case 0x90F0:
            func_90F0_b6(); break;
        case 0x918F:
            func_918F_b6(); break;
        case 0x914D:
            func_914D_b6(); break;
        case 0x91C0:
            func_91C0_b6(); break;
        case 0x9278:
            func_9278_b6(); break;
        case 0x92FC:
            func_92FC_b6(); break;
        case 0x8C7E:
            switch (g_current_bank) {
                case 1: func_8C7E_b1(); break;
                case 2: func_8C7E_b2(); break;
                case 3: func_8C7E_b3(); break;
                case 4: func_8C7E_b4(); break;
                case 5: func_8C7E_b5(); break;
                default: return nes_interp_dispatch(addr);
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
        case 0x8CF7:
            switch (g_current_bank) {
                case 2: func_8CF7_b2(); break;
                case 3: func_8CF7_b3(); break;
                case 4: func_8CF7_b4(); break;
                case 5: func_8CF7_b5(); break;
                case 1: func_8CF7_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x8C76:
            switch (g_current_bank) {
                case 2: func_8C76_b2(); break;
                case 3: func_8C76_b3(); break;
                case 4: func_8C76_b4(); break;
                case 5: func_8C76_b5(); break;
                case 1: func_8C76_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x8C60:
            func_8C60_b6(); break;
        case 0x9339:
            func_9339_b6(); break;
        case 0x9321:
            func_9321_b6(); break;
        case 0x93BE:
            func_93BE_b6(); break;
        case 0x9413:
            func_9413_b6(); break;
        case 0x94D3:
            func_94D3_b6(); break;
        case 0x94B7:
            func_94B7_b6(); break;
        case 0xA480:
            func_A480_b6(); break;
        case 0x9519:
            func_9519_b6(); break;
        case 0x9858:
            func_9858_b6(); break;
        case 0x9958:
            switch (g_current_bank) {
                case 6: func_9958_b6(); break;
                case 5: func_9958_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x98F8:
            switch (g_current_bank) {
                case 6: func_98F8_b6(); break;
                case 5: func_98F8_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x99A2:
            func_99A2_b6(); break;
        case 0x99AA:
            func_99AA_b6(); break;
        case 0x99A7:
            func_99A7_b6(); break;
        case 0x9A14:
            func_9A14_b6(); break;
        case 0xDF91:
            func_DF91(); break;
        case 0xDF75:
            func_DF75(); break;
        case 0xDFAD:
            func_DFAD(); break;
        case 0xE7DE:
            func_E7DE(); break;
        case 0xE95F:
            func_E95F(); break;
        case 0xE934:
            func_E934(); break;
        case 0xAF53:
            switch (g_current_bank) {
                case 4: func_AF53_b4(); break;
                case 2: func_AF53_b2(); break;
                case 5: func_AF53_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
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
        case 0xD318:
            func_D318(); break;
        case 0xAB32:
            func_AB32_b5(); break;
        case 0xB0A2:
            switch (g_current_bank) {
                case 7: func_F0A2(); break;
                case 2: func_B0A2_b2(); break;
                case 1: func_B0A2_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x9416:
            func_9416_b2(); break;
        case 0x9431:
            func_9431_b2(); break;
        case 0x94EE:
            func_94EE_b2(); break;
        case 0x9526:
            func_9526_b2(); break;
        case 0x94E2:
            func_94E2_b2(); break;
        case 0x9564:
            func_9564_b2(); break;
        case 0xBD79:
            func_BD79_b2(); break;
        case 0xBDAC:
            func_BDAC_b2(); break;
        case 0xD798:
            func_D798(); break;
        case 0xA0C6:
            func_A0C6_b3(); break;
        case 0x9BAF:
            func_9BAF_b3(); break;
        case 0xFD5F:
            func_FD5F(); break;
        case 0xFD6C:
            func_FD6C(); break;
        case 0x8DF7:
            func_8DF7_b6(); break;
        case 0x90BF:
            func_90BF_b6(); break;
        case 0x90BC:
            func_90BC_b6(); break;
        case 0x99AD:
            switch (g_current_bank) {
                case 7: func_D9AD(); break;
                case 6: func_99AD_b6(); break;
                case 5: func_99AD_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x99F8:
            switch (g_current_bank) {
                case 6: func_99F8_b6(); break;
                case 5: func_99F8_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x9A00:
            switch (g_current_bank) {
                case 6: func_9A00_b6(); break;
                case 5: func_9A00_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x9A79:
            switch (g_current_bank) {
                case 6: func_9A79_b6(); break;
                case 5: func_9A79_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x9D9E:
            func_9D9E_b6(); break;
        case 0x9DDF:
            func_9DDF_b6(); break;
        case 0x9E87:
            func_9E87_b6(); break;
        case 0x916D:
            func_916D_b6(); break;
        case 0x918C:
            func_918C_b6(); break;
        case 0x8008:
            func_8008_b6(); break;
        case 0x9817:
            func_9817_b6(); break;
        case 0x9F0A:
            func_9F0A_b6(); break;
        case 0x9F8C:
            func_9F8C_b6(); break;
        case 0xA0FA:
            func_A0FA_b6(); break;
        case 0xA0B2:
            func_A0B2_b6(); break;
        case 0xA0E5:
            func_A0E5_b6(); break;
        case 0xA0BA:
            func_A0BA_b6(); break;
        case 0xA1E5:
            func_A1E5_b6(); break;
        case 0xA237:
            func_A237_b6(); break;
        case 0xA2ED:
            func_A2ED_b6(); break;
        case 0xA30D:
            func_A30D_b6(); break;
        case 0xA2F5:
            func_A2F5_b6(); break;
        case 0xA31B:
            func_A31B_b6(); break;
        case 0xA462:
            func_A462_b6(); break;
        case 0xA44C:
            func_A44C_b6(); break;
        case 0xA655:
            func_A655_b6(); break;
        case 0xA657:
            func_A657_b6(); break;
        case 0x8D95:
            func_8D95_b0(); break;
        case 0x9EF9:
            func_9EF9_b3(); break;
        case 0x915E:
            func_915E_b6(); break;
        case 0xA76F:
            func_A76F_b6(); break;
        case 0xA508:
            func_A508_b6(); break;
        case 0xA8D4:
            func_A8D4_b6(); break;
        case 0xA8C2:
            func_A8C2_b6(); break;
        case 0xA8ED:
            func_A8ED_b6(); break;
        case 0xA93D:
            func_A93D_b6(); break;
        case 0xA994:
            func_A994_b6(); break;
        case 0xAA84:
            func_AA84_b6(); break;
        case 0xD748:
            func_D748(); break;
        case 0xAC2A:
            func_AC2A_b6(); break;
        case 0xAC26:
            func_AC26_b6(); break;
        case 0xAC28:
            func_AC28_b6(); break;
        case 0xAC73:
            func_AC73_b6(); break;
        case 0xAC6E:
            func_AC6E_b6(); break;
        case 0xAD9B:
            func_AD9B_b6(); break;
        case 0xAE3F:
            func_AE3F_b6(); break;
        case 0xAE8D:
            func_AE8D_b6(); break;
        case 0xA1F2:
            func_A1F2_b6(); break;
        case 0xA1FA:
            func_A1FA_b6(); break;
        case 0x8810:
            func_8810_b6(); break;
        case 0xC020:
            func_C020(); break;
        case 0xB039:
            func_B039_b6(); break;
        case 0xB10A:
            func_B10A_b6(); break;
        case 0xB25D:
            func_B25D_b6(); break;
        case 0xB295:
            func_B295_b6(); break;
        case 0xE0E0:
            func_E0E0(); break;
        case 0xB29D:
            func_B29D_b6(); break;
        case 0xB2DC:
            func_B2DC_b6(); break;
        case 0xB2DF:
            func_B2DF_b6(); break;
        case 0xC080:
            func_C080(); break;
        case 0xC088:
            func_C088(); break;
        case 0x8040:
            func_8040_b6(); break;
        case 0xB39C:
            func_B39C_b6(); break;
        case 0xB3A0:
            func_B3A0_b6(); break;
        case 0xC6CE:
            func_C6CE(); break;
        case 0xA0C7:
            switch (g_current_bank) {
                case 6: func_A0C7_b6(); break;
                case 7: func_A0C7_b7(); break;
                case 1: func_A0C7_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xAA63:
            func_AA63_b6(); break;
        case 0xABFB:
            func_ABFB_b6(); break;
        case 0xAC07:
            func_AC07_b6(); break;
        case 0xB713:
            func_B713_b6(); break;
        case 0xB766:
            func_B766_b6(); break;
        case 0xB76E:
            func_B76E_b6(); break;
        case 0xB7B3:
            func_B7B3_b6(); break;
        case 0xB81C:
            func_B81C_b6(); break;
        case 0xB853:
            func_B853_b6(); break;
        case 0xB89E:
            func_B89E_b6(); break;
        case 0xAC71:
            func_AC71_b6(); break;
        case 0xAC6D:
            func_AC6D_b6(); break;
        case 0xA1AD:
            func_A1AD_b6(); break;
        case 0xA1B5:
            func_A1B5_b6(); break;
        case 0x87FD:
            func_87FD_b6(); break;
        case 0x84C8:
            switch (g_current_bank) {
                case 0: func_84C8_b0(); break;
                case 1: func_84C8_b1(); break;
                case 2: func_84C8_b2(); break;
                case 3: func_84C8_b3(); break;
                case 4: func_84C8_b4(); break;
                case 5: func_84C8_b5(); break;
                case 6: func_84C8_b6(); break;
                case 7: func_84C8_b7(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB82E:
            func_B82E_b6(); break;
        case 0xFF4F:
            func_FF4F(); break;
        case 0xCA2F:
            func_CA2F(); break;
        case 0xD0CB:
            func_D0CB(); break;
        case 0xFA21:
            func_FA21(); break;
        case 0xC4FB:
            func_C4FB(); break;
        case 0xC800:
            func_C800(); break;
        case 0xFBD1:
            func_FBD1(); break;
        case 0xE001:
            func_E001(); break;
        case 0xF1D0:
            func_F1D0(); break;
        case 0xF3B1:
            func_F3B1(); break;
        case 0xFD85:
            func_FD85(); break;
        case 0xFC84:
            func_FC84(); break;
        case 0xFC85:
            func_FC85(); break;
        case 0xC820:
            func_C820(); break;
        case 0xC159:
            func_C159(); break;
        case 0xC16D:
            func_C16D(); break;
        case 0xFF86:
            func_FF86(); break;
        case 0xFE86:
            func_FE86(); break;
        case 0xFA85:
            func_FA85(); break;
        case 0xFA86:
            func_FA86(); break;
        case 0xDE21:
            func_DE21(); break;
        case 0xC4DF:
            func_C4DF(); break;
        case 0xD0C4:
            func_D0C4(); break;
        case 0xC267:
            func_C267(); break;
        case 0xC115:
            func_C115(); break;
        case 0xC0BD:
            func_C0BD(); break;
        case 0xE021:
            func_E021(); break;
        case 0xC1E1:
            func_C1E1(); break;
        case 0xCA21:
            func_CA21(); break;
        case 0xC216:
            func_C216(); break;
        case 0xC97F:
            func_C97F(); break;
        case 0xF011:
            func_F011(); break;
        case 0xC91E:
            func_C91E(); break;
        case 0xF003:
            func_F003(); break;
        case 0xC909:
            func_C909(); break;
        case 0xD006:
            func_D006(); break;
        case 0xC16E:
            func_C16E(); break;
        case 0xFB29:
            func_FB29(); break;
        case 0xFB2A:
            func_FB2A(); break;
        case 0xCA01:
            func_CA01(); break;
        case 0xC19F:
            func_C19F(); break;
        case 0xC1A0:
            func_C1A0(); break;
        case 0xFAD1:
            func_FAD1(); break;
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
        case 0xF4AA:
            func_F4AA(); break;
        case 0xFB10:
            func_FB10(); break;
        case 0xFB11:
            func_FB11(); break;
        case 0xE801:
            func_E801(); break;
        case 0xE0E1:
            func_E0E1(); break;
        case 0xD01C:
            func_D01C(); break;
        case 0xC220:
            func_C220(); break;
        case 0xE6E9:
            func_E6E9(); break;
        case 0xF001:
            func_F001(); break;
        case 0xC514:
            func_C514(); break;
        case 0xD608:
            func_D608(); break;
        case 0xD018:
            func_D018(); break;
        case 0xD019:
            func_D019(); break;
        case 0xC602:
            func_C602(); break;
        case 0xC604:
            func_C604(); break;
        case 0xC61F:
            func_C61F(); break;
        case 0xF02A:
            func_F02A(); break;
        case 0xD603:
            func_D603(); break;
        case 0xCA2A:
            func_CA2A(); break;
        case 0xF711:
            func_F711(); break;
        case 0xC8A8:
            func_C8A8(); break;
        case 0xC8AA:
            func_C8AA(); break;
        case 0xFCA6:
            func_FCA6(); break;
        case 0xC802:
            func_C802(); break;
        case 0xF5D0:
            func_F5D0(); break;
        case 0xC36C:
            func_C36C(); break;
        case 0xC376:
            func_C376(); break;
        case 0xC8C3:
            func_C8C3(); break;
        case 0xC6C3:
            func_C6C3(); break;
        case 0xC6C4:
            func_C6C4(); break;
        case 0xF6D0:
            func_F6D0(); break;
        case 0xC606:
            func_C606(); break;
        case 0xC607:
            func_C607(); break;
        case 0xC377:
            func_C377(); break;
        case 0xE808:
            func_E808(); break;
        case 0xC620:
            func_C620(); break;
        case 0xC622:
            func_C622(); break;
        case 0xC3C7:
            func_C3C7(); break;
        case 0xE3D1:
            func_E3D1(); break;
        case 0xC2D1:
            func_C2D1(); break;
        case 0xC960:
            func_C960(); break;
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
        case 0xFCF1:
            func_FCF1(); break;
        case 0xFEA5:
            func_FEA5(); break;
        case 0xE729:
            func_E729(); break;
        case 0xD01E:
            func_D01E(); break;
        case 0xF0D0:
            func_F0D0(); break;
        case 0xF0D1:
            func_F0D1(); break;
        case 0xFAA6:
            func_FAA6(); break;
        case 0xD920:
            func_D920(); break;
        case 0xC4DA:
            func_C4DA(); break;
        case 0xC43E:
            func_C43E(); break;
        case 0xD081:
            func_D081(); break;
        case 0xD02D:
            func_D02D(); break;
        case 0xC921:
            func_C921(); break;
        case 0xF005:
            func_F005(); break;
        case 0xF006:
            func_F006(); break;
        case 0xD92D:
            func_D92D(); break;
        case 0xEAF5:
            func_EAF5(); break;
        case 0xFE2A:
            func_FE2A(); break;
        case 0xE821:
            func_E821(); break;
        case 0xC4E9:
            func_C4E9(); break;
        case 0xC831:
            func_C831(); break;
        case 0xC45E:
            func_C45E(); break;
        case 0xD721:
            func_D721(); break;
        case 0xC5D8:
            func_C5D8(); break;
        case 0xD420:
            func_D420(); break;
        case 0xFA11:
            func_FA11(); break;
        case 0xC623:
            func_C623(); break;
        case 0xF099:
            func_F099(); break;
        case 0xF09A:
            func_F09A(); break;
        case 0xC646:
            func_C646(); break;
        case 0xC678:
            func_C678(); break;
        case 0xC6A0:
            func_C6A0(); break;
        case 0xC24C:
            func_C24C(); break;
        case 0xF069:
            func_F069(); break;
        case 0xE0B9:
            func_E0B9(); break;
        case 0xE0BA:
            func_E0BA(); break;
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
        case 0xEF78:
            func_EF78(); break;
        case 0xEF79:
            func_EF79(); break;
        case 0xEF8C:
            func_EF8C(); break;
        case 0xC60C:
            func_C60C(); break;
        case 0xC806:
            func_C806(); break;
        case 0xEED0:
            func_EED0(); break;
        case 0xE6EE:
            func_E6EE(); break;
        case 0xC7DC:
            func_C7DC(); break;
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
        case 0xE876:
            func_E876(); break;
        case 0xC43A:
            func_C43A(); break;
        case 0xC43D:
            func_C43D(); break;
        case 0xC8BC:
            func_C8BC(); break;
        case 0xDAAD:
            func_DAAD(); break;
        case 0xC8B1:
            func_C8B1(); break;
        case 0xE721:
            func_E721(); break;
        case 0xEA2C:
            func_EA2C(); break;
        case 0xC85A:
            func_C85A(); break;
        case 0xF8D0:
            func_F8D0(); break;
        case 0xE6F8:
            func_E6F8(); break;
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
        case 0xC44D:
            func_C44D(); break;
        case 0xC45C:
            func_C45C(); break;
        case 0xCA3B:
            func_CA3B(); break;
        case 0xCA3C:
            func_CA3C(); break;
        case 0xF810:
            func_F810(); break;
        case 0xF811:
            func_F811(); break;
        case 0xE0AB:
            func_E0AB(); break;
        case 0xE868:
            func_E868(); break;
        case 0xF2D0:
            func_F2D0(); break;
        case 0xF2D1:
            func_F2D1(); break;
        case 0xCBFE:
            func_CBFE(); break;
        case 0xCA70:
            func_CA70(); break;
        case 0xCA71:
            func_CA71(); break;
        case 0xF00F:
            func_F00F(); break;
        case 0xD9AD:
            func_D9AD(); break;
        case 0xD9AE:
            func_D9AE(); break;
        case 0xF120:
            func_F120(); break;
        case 0xF121:
            func_F121(); break;
        case 0xE1F2:
            func_E1F2(); break;
        case 0xCB2A:
            func_CB2A(); break;
        case 0xF002:
            func_F002(); break;
        case 0xC4AB:
            func_C4AB(); break;
        case 0xC903:
            func_C903(); break;
        case 0xCB8F:
            func_CB8F(); break;
        case 0xC999:
            func_C999(); break;
        case 0xF00A:
            func_F00A(); break;
        case 0xE6C4:
            func_E6C4(); break;
        case 0xE6C5:
            func_E6C5(); break;
        case 0xFE19:
            func_FE19(); break;
        case 0xFE1A:
            func_FE1A(); break;
        case 0xE806:
            func_E806(); break;
        case 0xFEE9:
            func_FEE9(); break;
        case 0xE632:
            func_E632(); break;
        case 0xCDB0:
            func_CDB0(); break;
        case 0xD9CD:
            func_D9CD(); break;
        case 0xC9FF:
            func_C9FF(); break;
        case 0xCF6C:
            func_CF6C(); break;
        case 0xDE48:
            func_DE48(); break;
        case 0xFF05:
            func_FF05(); break;
        case 0xC01E:
            func_C01E(); break;
        case 0xF008:
            func_F008(); break;
        case 0xC005:
            func_C005(); break;
        case 0xCA97:
            func_CA97(); break;
        case 0xCAA2:
            func_CAA2(); break;
        case 0xC878:
            func_C878(); break;
        case 0xE8C9:
            func_E8C9(); break;
        case 0xF4D0:
            func_F4D0(); break;
        case 0xC868:
            func_C868(); break;
        case 0xC869:
            func_C869(); break;
        case 0xE6CA:
            func_E6CA(); break;
        case 0xE6CB:
            func_E6CB(); break;
        case 0xCAEF:
            func_CAEF(); break;
        case 0xCAF0:
            func_CAF0(); break;
        case 0xCAF1:
            func_CAF1(); break;
        case 0xD069:
            func_D069(); break;
        case 0xCB17:
            func_CB17(); break;
        case 0xCB18:
            func_CB18(); break;
        case 0xC0C8:
            func_C0C8(); break;
        case 0xF346:
            func_F346(); break;
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
        case 0xD4C0:
            func_D4C0(); break;
        case 0xD92C:
            func_D92C(); break;
        case 0xD79F:
            func_D79F(); break;
        case 0xD7AE:
            func_D7AE(); break;
        case 0xD94D:
            func_D94D(); break;
        case 0xCC0E:
            func_CC0E(); break;
        case 0xD7B4:
            func_D7B4(); break;
        case 0xD9D5:
            func_D9D5(); break;
        case 0xFA9E:
            func_FA9E(); break;
        case 0xF93C:
            func_F93C(); break;
        case 0xDD21:
            func_DD21(); break;
        case 0xFBDE:
            func_FBDE(); break;
        case 0xFE1C:
            func_FE1C(); break;
        case 0xE0C2:
            func_E0C2(); break;
        case 0xF220:
            func_F220(); break;
        case 0xFAF3:
            func_FAF3(); break;
        case 0xDB18:
            func_DB18(); break;
        case 0xDB38:
            func_DB38(); break;
        case 0xD020:
            func_D020(); break;
        case 0xE5D0:
            func_E5D0(); break;
        case 0xE5D1:
            func_E5D1(); break;
        case 0xDBD1:
            func_DBD1(); break;
        case 0xCC1B:
            func_CC1B(); break;
        case 0xC6CC:
            func_C6CC(); break;
        case 0xC6CD:
            func_C6CD(); break;
        case 0xCF29:
            func_CF29(); break;
        case 0xCF2A:
            func_CF2A(); break;
        case 0xCF2E:
            func_CF2E(); break;
        case 0xF0CF:
            func_F0CF(); break;
        case 0xCF5E:
            func_CF5E(); break;
        case 0xCF6B:
            func_CF6B(); break;
        case 0xCF77:
            func_CF77(); break;
        case 0xCF81:
            func_CF81(); break;
        case 0xE120:
            func_E120(); break;
        case 0xE121:
            func_E121(); break;
        case 0xE1E2:
            func_E1E2(); break;
        case 0xC9E2:
            func_C9E2(); break;
        case 0xEE21:
            func_EE21(); break;
        case 0xCD6E:
            func_CD6E(); break;
        case 0xE80A:
            func_E80A(); break;
        case 0xC9E8:
            func_C9E8(); break;
        case 0xC9E9:
            func_C9E9(); break;
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
        case 0xCCC2:
            func_CCC2(); break;
        case 0xCCCC:
            func_CCCC(); break;
        case 0xCD04:
            func_CD04(); break;
        case 0xCD10:
            func_CD10(); break;
        case 0xCCF0:
            func_CCF0(); break;
        case 0xCD09:
            func_CD09(); break;
        case 0xCD84:
            func_CD84(); break;
        case 0xCD0E:
            func_CD0E(); break;
        case 0xCCC1:
            func_CCC1(); break;
        case 0xD031:
            func_D031(); break;
        case 0xC026:
            func_C026(); break;
        case 0xC027:
            func_C027(); break;
        case 0xC003:
            func_C003(); break;
        case 0xD148:
            func_D148(); break;
        case 0xCD01:
            func_CD01(); break;
        case 0xCF89:
            func_CF89(); break;
        case 0xCF2F:
            func_CF2F(); break;
        case 0xCF4C:
            func_CF4C(); break;
        case 0xCCB8:
            func_CCB8(); break;
        case 0xCDC0:
            func_CDC0(); break;
        case 0xD053:
            func_D053(); break;
        case 0xD054:
            func_D054(); break;
        case 0xCB97:
            func_CB97(); break;
        case 0xCFC4:
            func_CFC4(); break;
        case 0xCDD8:
            func_CDD8(); break;
        case 0xCF56:
            func_CF56(); break;
        case 0xCF5D:
            func_CF5D(); break;
        case 0xC5E2:
            func_C5E2(); break;
        case 0xF04E:
            func_F04E(); break;
        case 0xCC99:
            func_CC99(); break;
        case 0xCDFB:
            func_CDFB(); break;
        case 0xE26A:
            func_E26A(); break;
        case 0xF092:
            func_F092(); break;
        case 0xCD93:
            func_CD93(); break;
        case 0xCD9C:
            func_CD9C(); break;
        case 0xCDB1:
            func_CDB1(); break;
        case 0xCD9D:
            func_CD9D(); break;
        case 0xCDAD:
            func_CDAD(); break;
        case 0xCDAF:
            func_CDAF(); break;
        case 0xF00E:
            func_F00E(); break;
        case 0xCD03:
            func_CD03(); break;
        case 0xF6BD:
            func_F6BD(); break;
        case 0xF077:
            func_F077(); break;
        case 0xF078:
            func_F078(); break;
        case 0xCBDF:
            func_CBDF(); break;
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
        case 0xC9C2:
            func_C9C2(); break;
        case 0xCF4F:
            func_CF4F(); break;
        case 0xCAD0:
            func_CAD0(); break;
        case 0xD00F:
            func_D00F(); break;
        case 0xF320:
            func_F320(); break;
        case 0xCBF4:
            func_CBF4(); break;
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
        case 0xFB21:
            func_FB21(); break;
        case 0xC3FC:
            func_C3FC(); break;
        case 0xE220:
            func_E220(); break;
        case 0xCBE3:
            func_CBE3(); break;
        case 0xCC8C:
            func_CC8C(); break;
        case 0xC3DB:
            func_C3DB(); break;
        case 0xCD0F:
            func_CD0F(); break;
        case 0xF929:
            func_F929(); break;
        case 0xCF82:
            func_CF82(); break;
        case 0xCFB8:
            func_CFB8(); break;
        case 0xD097:
            func_D097(); break;
        case 0xD098:
            func_D098(); break;
        case 0xCF4D:
            func_CF4D(); break;
        case 0xC54C:
            func_C54C(); break;
        case 0xCFC6:
            func_CFC6(); break;
        case 0xFCA9:
            func_FCA9(); break;
        case 0xCA04:
            func_CA04(); break;
        case 0xCBCB:
            func_CBCB(); break;
        case 0xD056:
            func_D056(); break;
        case 0xCF78:
            func_CF78(); break;
        case 0xCA06:
            func_CA06(); break;
        case 0xCA07:
            func_CA07(); break;
        case 0xD903:
            func_D903(); break;
        case 0xD099:
            func_D099(); break;
        case 0xD09A:
            func_D09A(); break;
        case 0xD09C:
            func_D09C(); break;
        case 0xD0A3:
            func_D0A3(); break;
        case 0xD0A0:
            func_D0A0(); break;
        case 0xD0A1:
            func_D0A1(); break;
        case 0xD0AA:
            func_D0AA(); break;
        case 0xD0B0:
            func_D0B0(); break;
        case 0xD0A8:
            func_D0A8(); break;
        case 0xD0D1:
            func_D0D1(); break;
        case 0xD09B:
            func_D09B(); break;
        case 0xD096:
            func_D096(); break;
        case 0xF210:
            func_F210(); break;
        case 0xD035:
            func_D035(); break;
        case 0xD036:
            func_D036(); break;
        case 0xE8BF:
            func_E8BF(); break;
        case 0xFD90:
            func_FD90(); break;
        case 0xD639:
            func_D639(); break;
        case 0xCECF:
            func_CECF(); break;
        case 0xD145:
            func_D145(); break;
        case 0xD151:
            func_D151(); break;
        case 0xE0A3:
            func_E0A3(); break;
        case 0xCBA9:
            func_CBA9(); break;
        case 0xEBBD:
            func_EBBD(); break;
        case 0xD0F2:
            func_D0F2(); break;
        case 0xC8F7:
            func_C8F7(); break;
        case 0xD0C0:
            func_D0C0(); break;
        case 0xD093:
            func_D093(); break;
        case 0xD1F8:
            func_D1F8(); break;
        case 0xEB20:
            func_EB20(); break;
        case 0xEB21:
            func_EB21(); break;
        case 0xD35A:
            func_D35A(); break;
        case 0xD38F:
            func_D38F(); break;
        case 0xD273:
            func_D273(); break;
        case 0xD274:
            func_D274(); break;
        case 0xD316:
            func_D316(); break;
        case 0xD26F:
            func_D26F(); break;
        case 0xD270:
            func_D270(); break;
        case 0xD307:
            func_D307(); break;
        case 0xCBB5:
            func_CBB5(); break;
        case 0xF40C:
            func_F40C(); break;
        case 0xF808:
            func_F808(); break;
        case 0xFC04:
            func_FC04(); break;
        case 0xD341:
            func_D341(); break;
        case 0xE3BC:
            func_E3BC(); break;
        case 0xFEAA:
            func_FEAA(); break;
        case 0xFEAB:
            func_FEAB(); break;
        case 0xD33E:
            func_D33E(); break;
        case 0xD34E:
            func_D34E(); break;
        case 0xCB9F:
            func_CB9F(); break;
        case 0xCE04:
            func_CE04(); break;
        case 0xCE21:
            func_CE21(); break;
        case 0xF551:
            func_F551(); break;
        case 0xC64C:
            func_C64C(); break;
        case 0xC64D:
            func_C64D(); break;
        case 0xCBC7:
            func_CBC7(); break;
        case 0xC5D1:
            func_C5D1(); break;
        case 0xC956:
            func_C956(); break;
        case 0xC957:
            func_C957(); break;
        case 0xC664:
            func_C664(); break;
        case 0xD05A:
            func_D05A(); break;
        case 0xD48D:
            func_D48D(); break;
        case 0xED66:
            func_ED66(); break;
        case 0xF07A:
            func_F07A(); break;
        case 0xCC08:
            func_CC08(); break;
        case 0xE24A:
            func_E24A(); break;
        case 0xD412:
            func_D412(); break;
        case 0xEED4:
            func_EED4(); break;
        case 0xC905:
            func_C905(); break;
        case 0xC9FC:
            func_C9FC(); break;
        case 0xE51A:
            func_E51A(); break;
        case 0xD0F0:
            func_D0F0(); break;
        case 0xC8FF:
            func_C8FF(); break;
        case 0xD47F:
            func_D47F(); break;
        case 0xE4F2:
            func_E4F2(); break;
        case 0xF0A0:
            func_F0A0(); break;
        case 0xF0A1:
            func_F0A1(); break;
        case 0xD4B5:
            func_D4B5(); break;
        case 0xE98A:
            func_E98A(); break;
        case 0xD0AB:
            func_D0AB(); break;
        case 0xCB21:
            func_CB21(); break;
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
        case 0xD100:
            func_D100(); break;
        case 0xD523:
            func_D523(); break;
        case 0xDDD5:
            func_DDD5(); break;
        case 0xFEC6:
            func_FEC6(); break;
        case 0xD4EC:
            func_D4EC(); break;
        case 0xF7EA:
            func_F7EA(); break;
        case 0xD0F8:
            func_D0F8(); break;
        case 0xD518:
            func_D518(); break;
        case 0xD00B:
            func_D00B(); break;
        case 0xD2FB:
            func_D2FB(); break;
        case 0xF9B1:
            func_F9B1(); break;
        case 0xE81F:
            func_E81F(); break;
        case 0xC021:
            func_C021(); break;
        case 0xEBF0:
            func_EBF0(); break;
        case 0xD652:
            func_D652(); break;
        case 0xE9BF:
            func_E9BF(); break;
        case 0xCA90:
            func_CA90(); break;
        case 0xCA91:
            func_CA91(); break;
        case 0xC074:
            func_C074(); break;
        case 0xFE04:
            func_FE04(); break;
        case 0xDE1A:
            func_DE1A(); break;
        case 0xFED2:
            func_FED2(); break;
        case 0xFED3:
            func_FED3(); break;
        case 0xCB9B:
            func_CB9B(); break;
        case 0xFED7:
            func_FED7(); break;
        case 0xD78C:
            func_D78C(); break;
        case 0xC0CA:
            func_C0CA(); break;
        case 0xE9C3:
            func_E9C3(); break;
        case 0xE90B:
            func_E90B(); break;
        case 0xE96B:
            func_E96B(); break;
        case 0xFE49:
            func_FE49(); break;
        case 0xD807:
            func_D807(); break;
        case 0xFDE5:
            func_FDE5(); break;
        case 0xE6A8:
            func_E6A8(); break;
        case 0xD220:
            func_D220(); break;
        case 0xE6D3:
            func_E6D3(); break;
        case 0xD649:
            func_D649(); break;
        case 0xD867:
            func_D867(); break;
        case 0xFED8:
            func_FED8(); break;
        case 0xF0CA:
            func_F0CA(); break;
        case 0xEE1E:
            func_EE1E(); break;
        case 0xC440:
            func_C440(); break;
        case 0xCDAE:
            func_CDAE(); break;
        case 0xE253:
            func_E253(); break;
        case 0xF187:
            func_F187(); break;
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
        case 0xE1E1:
            func_E1E1(); break;
        case 0xDC8F:
            func_DC8F(); break;
        case 0xDCC3:
            func_DCC3(); break;
        case 0xDFDF:
            func_DFDF(); break;
        case 0xDC67:
            func_DC67(); break;
        case 0xDC7F:
            func_DC7F(); break;
        case 0xE038:
            func_E038(); break;
        case 0xE002:
            func_E002(); break;
        case 0xE020:
            func_E020(); break;
        case 0xE000:
            func_E000(); break;
        case 0xE011:
            func_E011(); break;
        case 0xE02D:
            func_E02D(); break;
        case 0xE02E:
            func_E02E(); break;
        case 0xE004:
            func_E004(); break;
        case 0xDCD1:
            func_DCD1(); break;
        case 0xDCAD:
            func_DCAD(); break;
        case 0xE029:
            func_E029(); break;
        case 0xDFEE:
            func_DFEE(); break;
        case 0xDCF0:
            func_DCF0(); break;
        case 0xE605:
            func_E605(); break;
        case 0xD07E:
            func_D07E(); break;
        case 0xF420:
            func_F420(); break;
        case 0xE010:
            func_E010(); break;
        case 0xEE04:
            func_EE04(); break;
        case 0xC812:
            func_C812(); break;
        case 0xDA1B:
            func_DA1B(); break;
        case 0xDA4D:
            func_DA4D(); break;
        case 0xDADB:
            func_DADB(); break;
        case 0xDA3E:
            func_DA3E(); break;
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
        case 0xDE04:
            func_DE04(); break;
        case 0xFE68:
            func_FE68(); break;
        case 0xFE69:
            func_FE69(); break;
        case 0xDA39:
            func_DA39(); break;
        case 0xDA3A:
            func_DA3A(); break;
        case 0xDE0B:
            func_DE0B(); break;
        case 0xDE0C:
            func_DE0C(); break;
        case 0xC88E:
            func_C88E(); break;
        case 0xD61A:
            func_D61A(); break;
        case 0xC98D:
            func_C98D(); break;
        case 0xC98E:
            func_C98E(); break;
        case 0xC38D:
            func_C38D(); break;
        case 0xC38E:
            func_C38E(); break;
        case 0xFEDD:
            func_FEDD(); break;
        case 0xFC11:
            func_FC11(); break;
        case 0xDB43:
            func_DB43(); break;
        case 0xECF0:
            func_ECF0(); break;
        case 0xECF1:
            func_ECF1(); break;
        case 0xCD90:
            func_CD90(); break;
        case 0xCD91:
            func_CD91(); break;
        case 0xC568:
            func_C568(); break;
        case 0xC569:
            func_C569(); break;
        case 0xF05C:
            func_F05C(); break;
        case 0xC989:
            func_C989(); break;
        case 0xDC80:
            func_DC80(); break;
        case 0xCBFA:
            func_CBFA(); break;
        case 0xC84D:
            func_C84D(); break;
        case 0xDC1D:
            func_DC1D(); break;
        case 0xF061:
            func_F061(); break;
        case 0xD0DE:
            func_D0DE(); break;
        case 0xC7D0:
            func_C7D0(); break;
        case 0xF0FE:
            func_F0FE(); break;
        case 0xF0FC:
            func_F0FC(); break;
        case 0xC421:
            func_C421(); break;
        case 0xF173:
            func_F173(); break;
        case 0xF1A8:
            func_F1A8(); break;
        case 0xFA4C:
            func_FA4C(); break;
        case 0xFA4D:
            func_FA4D(); break;
        case 0xF100:
            func_F100(); break;
        case 0xC804:
            func_C804(); break;
        case 0xDF2E:
            func_DF2E(); break;
        case 0xC975:
            func_C975(); break;
        case 0xD014:
            func_D014(); break;
        case 0xC96C:
            func_C96C(); break;
        case 0xC92E:
            func_C92E(); break;
        case 0xC92F:
            func_C92F(); break;
        case 0xF79E:
            func_F79E(); break;
        case 0xC493:
            func_C493(); break;
        case 0xF095:
            func_F095(); break;
        case 0xC495:
            func_C495(); break;
        case 0xE60A:
            func_E60A(); break;
        case 0xC997:
            func_C997(); break;
        case 0xF013:
            func_F013(); break;
        case 0xFA19:
            func_FA19(); break;
        case 0xC896:
            func_C896(); break;
        case 0xF7BE:
            func_F7BE(); break;
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
        case 0xDC8C:
            func_DC8C(); break;
        case 0xF54C:
            func_F54C(); break;
        case 0xDCF6:
            func_DCF6(); break;
        case 0xC84B:
            func_C84B(); break;
        case 0xF59D:
            func_F59D(); break;
        case 0xF59E:
            func_F59E(); break;
        case 0xC8DF:
            func_C8DF(); break;
        case 0xF69E:
            func_F69E(); break;
        case 0xC80A:
            func_C80A(); break;
        case 0xDFE0:
            func_DFE0(); break;
        case 0xFD2A:
            func_FD2A(); break;
        case 0xC9E0:
            func_C9E0(); break;
        case 0xEF2A:
            func_EF2A(); break;
        case 0xEF4B:
            func_EF4B(); break;
        case 0xEF4D:
            func_EF4D(); break;
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
        case 0xE64B:
            func_E64B(); break;
        case 0xDF1A:
            func_DF1A(); break;
        case 0xE810:
            func_E810(); break;
        case 0xC590:
            func_C590(); break;
        case 0xC591:
            func_C591(); break;
        case 0xFDC9:
            func_FDC9(); break;
        case 0xC915:
            func_C915(); break;
        case 0xE610:
            func_E610(); break;
        case 0xDF1C:
            func_DF1C(); break;
        case 0xE611:
            func_E611(); break;
        case 0xE60E:
            func_E60E(); break;
        case 0xC9F1:
            func_C9F1(); break;
        case 0xDF76:
            func_DF76(); break;
        case 0xF86A:
            func_F86A(); break;
        case 0xDFAE:
            func_DFAE(); break;
        case 0xFCC5:
            func_FCC5(); break;
        case 0xC910:
            func_C910(); break;
        case 0xC06A:
            func_C06A(); break;
        case 0xF8BD:
            func_F8BD(); break;
        case 0xF06B:
            func_F06B(); break;
        case 0xF8DE:
            func_F8DE(); break;
        case 0xF89D:
            func_F89D(); break;
        case 0xFABC:
            func_FABC(); break;
        case 0xFABD:
            func_FABD(); break;
        case 0xC86A:
            func_C86A(); break;
        case 0xC86B:
            func_C86B(); break;
        case 0xF9BD:
            func_F9BD(); break;
        case 0xECB0:
            func_ECB0(); break;
        case 0xD029:
            func_D029(); break;
        case 0xE174:
            func_E174(); break;
        case 0xE199:
            func_E199(); break;
        case 0xE100:
            func_E100(); break;
        case 0xF4E0:
            func_F4E0(); break;
        case 0xF4E1:
            func_F4E1(); break;
        case 0xE003:
            func_E003(); break;
        case 0xF0E0:
            func_F0E0(); break;
        case 0xF0E1:
            func_F0E1(); break;
        case 0xFCE1:
            func_FCE1(); break;
        case 0xC688:
            func_C688(); break;
        case 0xC689:
            func_C689(); break;
        case 0xE1AE:
            func_E1AE(); break;
        case 0xE5C8:
            func_E5C8(); break;
        case 0xFBB0:
            func_FBB0(); break;
        case 0xF057:
            func_F057(); break;
        case 0xFBF1:
            func_FBF1(); break;
        case 0xCAFC:
            func_CAFC(); break;
        case 0xE205:
            func_E205(); break;
        case 0xE21C:
            func_E21C(); break;
        case 0xE818:
            func_E818(); break;
        case 0xD047:
            func_D047(); break;
        case 0xD048:
            func_D048(); break;
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
        case 0xE37B:
            func_E37B(); break;
        case 0xF04A:
            func_F04A(); break;
        case 0xE458:
            func_E458(); break;
        case 0xE31B:
            func_E31B(); break;
        case 0xD065:
            func_D065(); break;
        case 0xF0EE:
            func_F0EE(); break;
        case 0xE4A4:
            func_E4A4(); break;
        case 0xED00:
            func_ED00(); break;
        case 0xED01:
            func_ED01(); break;
        case 0xC9D0:
            func_C9D0(); break;
        case 0xE521:
            func_E521(); break;
        case 0xE3E6:
            func_E3E6(); break;
        case 0xE627:
            func_E627(); break;
        case 0xE366:
            func_E366(); break;
        case 0xE669:
            func_E669(); break;
        case 0xFDB0:
            func_FDB0(); break;
        case 0xD977:
            func_D977(); break;
        case 0xED03:
            func_ED03(); break;
        case 0xFAA2:
            func_FAA2(); break;
        case 0xFAA3:
            func_FAA3(); break;
        case 0xD0FA:
            func_D0FA(); break;
        case 0xD0FB:
            func_D0FB(); break;
        case 0xE44A:
            func_E44A(); break;
        case 0xC943:
            func_C943(); break;
        case 0xC953:
            func_C953(); break;
        case 0xEFC9:
            func_EFC9(); break;
        case 0xF049:
            func_F049(); break;
        case 0xC90D:
            func_C90D(); break;
        case 0xC61E:
            func_C61E(); break;
        case 0xE540:
            func_E540(); break;
        case 0xE6E5:
            func_E6E5(); break;
        case 0xCA49:
            func_CA49(); break;
        case 0xCA4A:
            func_CA4A(); break;
        case 0xF0CB:
            func_F0CB(); break;
        case 0xE0FD:
            func_E0FD(); break;
        case 0xEFE1:
            func_EFE1(); break;
        case 0xE8FF:
            func_E8FF(); break;
        case 0xC660:
            func_C660(); break;
        case 0xC661:
            func_C661(); break;
        case 0xE85A:
            func_E85A(); break;
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
        case 0xE563:
            func_E563(); break;
        case 0xDD08:
            func_DD08(); break;
        case 0xE55F:
            func_E55F(); break;
        case 0xD0E6:
            func_D0E6(); break;
        case 0xE565:
            func_E565(); break;
        case 0xE5E0:
            func_E5E0(); break;
        case 0xF0F3:
            func_F0F3(); break;
        case 0xC6C9:
            func_C6C9(); break;
        case 0xC941:
            func_C941(); break;
        case 0xC951:
            func_C951(); break;
        case 0xEE52:
            func_EE52(); break;
        case 0xC949:
            func_C949(); break;
        case 0xC94A:
            func_C94A(); break;
        case 0xC60A:
            func_C60A(); break;
        case 0xC60B:
            func_C60B(); break;
        case 0xFDC7:
            func_FDC7(); break;
        case 0xE621:
            func_E621(); break;
        case 0xFDE7:
            func_FDE7(); break;
        case 0xFDDE:
            func_FDDE(); break;
        case 0xE591:
            func_E591(); break;
        case 0xFF6A:
            func_FF6A(); break;
        case 0xC80E:
            func_C80E(); break;
        case 0xF5BE:
            func_F5BE(); break;
        case 0xFD39:
            func_FD39(); break;
        case 0xE793:
            func_E793(); break;
        case 0xC924:
            func_C924(); break;
        case 0xC959:
            func_C959(); break;
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
        case 0xCBB9:
            func_CBB9(); break;
        case 0xE7DF:
            func_E7DF(); break;
        case 0xF6FE:
            func_F6FE(); break;
        case 0xF5BC:
            func_F5BC(); break;
        case 0xE960:
            func_E960(); break;
        case 0xDE2A:
            func_DE2A(); break;
        case 0xD012:
            func_D012(); break;
        case 0xC008:
            func_C008(); break;
        case 0xD076:
            func_D076(); break;
        case 0xC9FA:
            func_C9FA(); break;
        case 0xC929:
            func_C929(); break;
        case 0xC92B:
            func_C92B(); break;
        case 0xC969:
            func_C969(); break;
        case 0xC974:
            func_C974(); break;
        case 0xC95A:
            func_C95A(); break;
        case 0xC948:
            func_C948(); break;
        case 0xC942:
            func_C942(); break;
        case 0xC952:
            func_C952(); break;
        case 0xC958:
            func_C958(); break;
        case 0xC934:
            func_C934(); break;
        case 0xC936:
            func_C936(); break;
        case 0xC93B:
            func_C93B(); break;
        case 0xC94B:
            func_C94B(); break;
        case 0xC96E:
            func_C96E(); break;
        case 0xC970:
            func_C970(); break;
        case 0xEC9C:
            func_EC9C(); break;
        case 0xED99:
            func_ED99(); break;
        case 0xEA06:
            func_EA06(); break;
        case 0xF820:
            func_F820(); break;
        case 0xEFF9:
            func_EFF9(); break;
        case 0xEAAB:
            func_EAAB(); break;
        case 0xCA38:
            func_CA38(); break;
        case 0xCA39:
            func_CA39(); break;
        case 0xC835:
            func_C835(); break;
        case 0xEF8D:
            func_EF8D(); break;
        case 0xC933:
            func_C933(); break;
        case 0xF0A7:
            func_F0A7(); break;
        case 0xE57D:
            func_E57D(); break;
        case 0xE70D:
            func_E70D(); break;
        case 0xEB0D:
            func_EB0D(); break;
        case 0xEAD5:
            func_EAD5(); break;
        case 0xF172:
            func_F172(); break;
        case 0xF186:
            func_F186(); break;
        case 0xF1A7:
            func_F1A7(); break;
        case 0xEB7B:
            func_EB7B(); break;
        case 0xD0EC:
            func_D0EC(); break;
        case 0xC810:
            func_C810(); break;
        case 0xFB9D:
            func_FB9D(); break;
        case 0xFB7C:
            func_FB7C(); break;
        case 0xC8EA:
            func_C8EA(); break;
        case 0xC97E:
            func_C97E(); break;
        case 0xC9A6:
            func_C9A6(); break;
        case 0xC9B1:
            func_C9B1(); break;
        case 0xC9C4:
            func_C9C4(); break;
        case 0xC9D7:
            func_C9D7(); break;
        case 0xCC1A:
            func_CC1A(); break;
        case 0xCC36:
            func_CC36(); break;
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
        case 0xCC98:
            func_CC98(); break;
        case 0xCFC3:
            func_CFC3(); break;
        case 0xD0B5:
            func_D0B5(); break;
        case 0xD147:
            func_D147(); break;
        case 0xCCB7:
            func_CCB7(); break;
        case 0xCF55:
            func_CF55(); break;
        case 0xCD92:
            func_CD92(); break;
        case 0xD055:
            func_D055(); break;
        case 0xCA96:
            func_CA96(); break;
        case 0xCAA1:
            func_CAA1(); break;
        case 0xCAC6:
            func_CAC6(); break;
        case 0xCC8B:
            func_CC8B(); break;
        case 0xD001:
            func_D001(); break;
        case 0xD0CA:
            func_D0CA(); break;
        case 0xCAC5:
            func_CAC5(); break;
        case 0xD0C8:
            func_D0C8(); break;
        case 0xD0C5:
            func_D0C5(); break;
        case 0xD01B:
            func_D01B(); break;
        case 0xD005:
            func_D005(); break;
        case 0xCA02:
            func_CA02(); break;
        case 0xD01D:
            func_D01D(); break;
        case 0xCFD1:
            func_CFD1(); break;
        case 0xD01F:
            func_D01F(); break;
        case 0xD080:
            func_D080(); break;
        case 0xD00A:
            func_D00A(); break;
        case 0xD0E9:
            func_D0E9(); break;
        case 0xD008:
            func_D008(); break;
        case 0xC998:
            func_C998(); break;
        case 0xD02E:
            func_D02E(); break;
        case 0xCA00:
            func_CA00(); break;
        case 0xCAC7:
            func_CAC7(); break;
        case 0xD010:
            func_D010(); break;
        case 0xD00C:
            func_D00C(); break;
        case 0xD068:
            func_D068(); break;
        case 0xD021:
            func_D021(); break;
        case 0xD041:
            func_D041(); break;
        case 0xC9E1:
            func_C9E1(); break;
        case 0xD1EF:
            func_D1EF(); break;
        case 0xD030:
            func_D030(); break;
        case 0xD039:
            func_D039(); break;
        case 0xCACF:
            func_CACF(); break;
        case 0xCA03:
            func_CA03(); break;
        case 0xD0D0:
            func_D0D0(); break;
        case 0xD0F1:
            func_D0F1(); break;
        case 0xD0C1:
            func_D0C1(); break;
        case 0xD092:
            func_D092(); break;
        case 0xD26C:
            func_D26C(); break;
        case 0xD090:
            func_D090(); break;
        case 0xD059:
            func_D059(); break;
        case 0xD057:
            func_D057(); break;
        case 0xD0EF:
            func_D0EF(); break;
        case 0xD0FF:
            func_D0FF(); break;
        case 0xD0F7:
            func_D0F7(); break;
        case 0xC996:
            func_C996(); break;
        case 0xD08B:
            func_D08B(); break;
        case 0xD0FD:
            func_D0FD(); break;
        case 0xD083:
            func_D083(); break;
        case 0xC9A8:
            func_C9A8(); break;
        case 0xD085:
            func_D085(); break;
        case 0xD07D:
            func_D07D(); break;
        case 0xC988:
            func_C988(); break;
        case 0xD0DD:
            func_D0DD(); break;
        case 0xC986:
            func_C986(); break;
        case 0xC9DF:
            func_C9DF(); break;
        case 0xD00E:
            func_D00E(); break;
        case 0xD0E0:
            func_D0E0(); break;
        case 0xC9F0:
            func_C9F0(); break;
        case 0xD06B:
            func_D06B(); break;
        case 0xD028:
            func_D028(); break;
        case 0xCAE2:
            func_CAE2(); break;
        case 0xCAE3:
            func_CAE3(); break;
        case 0xD066:
            func_D066(); break;
        case 0xC9D1:
            func_C9D1(); break;
        case 0xD0E5:
            func_D0E5(); break;
        case 0xD04B:
            func_D04B(); break;
        case 0xD0E7:
            func_D0E7(); break;
        case 0xCA10:
            func_CA10(); break;
        case 0xCACA:
            func_CACA(); break;
        case 0xCACB:
            func_CACB(); break;
        case 0xD077:
            func_D077(); break;
        case 0xC9F9:
            func_C9F9(); break;
        case 0xD44C:
            func_D44C(); break;
        case 0xD44D:
            func_D44D(); break;
        case 0xD0EB:
            func_D0EB(); break;
        case 0xD0ED:
            func_D0ED(); break;
        case 0xC9F2:
            func_C9F2(); break;
        case 0xCAB1:
            func_CAB1(); break;
        case 0xCFF3:
            func_CFF3(); break;
        case 0xD0F4:
            func_D0F4(); break;
        case 0xC982:
            func_C982(); break;
        case 0xCA0C:
            func_CA0C(); break;
        case 0xC9AA:
            func_C9AA(); break;
        case 0xD060:
            func_D060(); break;
        case 0xC9B5:
            func_C9B5(); break;
        case 0xCC69:
            func_CC69(); break;
        case 0xD1B3:
            func_D1B3(); break;
        case 0xCAE0:
            func_CAE0(); break;
        case 0xCAAB:
            func_CAAB(); break;
        case 0xCF84:
            func_CF84(); break;
        case 0xC984:
            func_C984(); break;
        case 0xC9B9:
            func_C9B9(); break;
        case 0xC9C1:
            func_C9C1(); break;
        case 0xD0D8:
            func_D0D8(); break;
        case 0xD0BC:
            func_D0BC(); break;
        case 0xC98A:
            func_C98A(); break;
        case 0xD14C:
            func_D14C(); break;
        case 0xCA0A:
            func_CA0A(); break;
        case 0xD050:
            func_D050(); break;
        case 0xC980:
            func_C980(); break;
        case 0xD034:
            func_D034(); break;
        case 0xD1B9:
            func_D1B9(); break;
        case 0xD24C:
            func_D24C(); break;
        case 0xCCBD:
            func_CCBD(); break;
        case 0xC9A0:
            func_C9A0(); break;
        case 0xC99B:
            func_C99B(); break;
        case 0xEE4B:
            func_EE4B(); break;
        case 0xEC0A:
            func_EC0A(); break;
        case 0xC81E:
            func_C81E(); break;
        case 0xC1D0:
            func_C1D0(); break;
        case 0xC1D1:
            func_C1D1(); break;
        case 0xFB5D:
            func_FB5D(); break;
        case 0xEA11:
            func_EA11(); break;
        case 0xEF11:
            func_EF11(); break;
        case 0xEF13:
            func_EF13(); break;
        case 0xEF20:
            func_EF20(); break;
        case 0xEF21:
            func_EF21(); break;
        case 0xEF29:
            func_EF29(); break;
        case 0xEF2B:
            func_EF2B(); break;
        case 0xED5C:
            func_ED5C(); break;
        case 0xED7B:
            func_ED7B(); break;
        case 0xEE10:
            func_EE10(); break;
        case 0xEE11:
            func_EE11(); break;
        case 0xEE31:
            func_EE31(); break;
        case 0xC500:
            func_C500(); break;
        case 0xF050:
            func_F050(); break;
        case 0xE0F0:
            func_E0F0(); break;
        case 0xEDA1:
            func_EDA1(); break;
        case 0xEF01:
            func_EF01(); break;
        case 0xEDC4:
            func_EDC4(); break;
        case 0xD64C:
            func_D64C(); break;
        case 0xEDD7:
            func_EDD7(); break;
        case 0xCD08:
            func_CD08(); break;
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
        case 0xE4AD:
            func_E4AD(); break;
        case 0xE4AE:
            func_E4AE(); break;
        case 0xE48E:
            func_E48E(); break;
        case 0xD0B1:
            func_D0B1(); break;
        case 0xEEC7:
            func_EEC7(); break;
        case 0xC6D1:
            func_C6D1(); break;
        case 0xF063:
            func_F063(); break;
        case 0xE63F:
            func_E63F(); break;
        case 0xEF9B:
            func_EF9B(); break;
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
        case 0xF3FD:
            func_F3FD(); break;
        case 0xCFF4:
            func_CFF4(); break;
        case 0xC0A0:
            func_C0A0(); break;
        case 0xC93A:
            func_C93A(); break;
        case 0xF19B:
            func_F19B(); break;
        case 0xD070:
            func_D070(); break;
        case 0xF14A:
            func_F14A(); break;
        case 0xC917:
            func_C917(); break;
        case 0xF32B:
            func_F32B(); break;
        case 0xE0D0:
            func_E0D0(); break;
        case 0xF278:
            func_F278(); break;
        case 0xF141:
            func_F141(); break;
        case 0xF283:
            func_F283(); break;
        case 0xF1B4:
            func_F1B4(); break;
        case 0xF163:
            func_F163(); break;
        case 0xF2EE:
            func_F2EE(); break;
        case 0xF312:
            func_F312(); break;
        case 0xF1D3:
            func_F1D3(); break;
        case 0xFBBA:
            func_FBBA(); break;
        case 0xD94C:
            func_D94C(); break;
        case 0xF267:
            func_F267(); break;
        case 0xE9F3:
            func_E9F3(); break;
        case 0xE50B:
            func_E50B(); break;
        case 0xE50C:
            func_E50C(); break;
        case 0xF2E9:
            func_F2E9(); break;
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
        case 0xF6BA:
            func_F6BA(); break;
        case 0xF683:
            func_F683(); break;
        case 0xF68D:
            func_F68D(); break;
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
        case 0xC8F0:
            func_C8F0(); break;
        case 0xDE1B:
            func_DE1B(); break;
        case 0xF7BC:
            func_F7BC(); break;
        case 0xCA0B:
            func_CA0B(); break;
        case 0xD082:
            func_D082(); break;
        case 0xCEFA:
            func_CEFA(); break;
        case 0xCBBD:
            func_CBBD(); break;
        case 0xCD05:
            func_CD05(); break;
        case 0xCBC1:
            func_CBC1(); break;
        case 0xDE09:
            func_DE09(); break;
        case 0xF516:
            func_F516(); break;
        case 0xC94C:
            func_C94C(); break;
        case 0xECCA:
            func_ECCA(); break;
        case 0xCBD3:
            func_CBD3(); break;
        case 0xC90F:
            func_C90F(); break;
        case 0xCBB1:
            func_CBB1(); break;
        case 0xCBCF:
            func_CBCF(); break;
        case 0xC038:
            func_C038(); break;
        case 0xDE0F:
            func_DE0F(); break;
        case 0xDCFD:
            func_DCFD(); break;
        case 0xF845:
            func_F845(); break;
        case 0xF68E:
            func_F68E(); break;
        case 0xC9AB:
            func_C9AB(); break;
        case 0xE0C9:
            func_E0C9(); break;
        case 0xDDAD:
            func_DDAD(); break;
        case 0xDDAE:
            func_DDAE(); break;
        case 0xF9DE:
            func_F9DE(); break;
        case 0xF99E:
            func_F99E(); break;
        case 0xDEA8:
            func_DEA8(); break;
        case 0xFADE:
            func_FADE(); break;
        case 0xFADF:
            func_FADF(); break;
        case 0xDE98:
            func_DE98(); break;
        case 0xFEA9:
            func_FEA9(); break;
        case 0xF7B4:
            func_F7B4(); break;
        case 0xF745:
            func_F745(); break;
        case 0xFBA9:
            func_FBA9(); break;
        case 0xE7A9:
            func_E7A9(); break;
        case 0xEFA1:
            func_EFA1(); break;
        case 0xDE61:
            func_DE61(); break;
        case 0xCBA5:
            func_CBA5(); break;
        case 0xF69A:
            func_F69A(); break;
        case 0xD120:
            func_D120(); break;
        case 0xD121:
            func_D121(); break;
        case 0xDFA9:
            func_DFA9(); break;
        case 0xF8F0:
            func_F8F0(); break;
        case 0xF8F1:
            func_F8F1(); break;
        case 0xF43D:
            func_F43D(); break;
        case 0xF1F1:
            func_F1F1(); break;
        case 0xD06C:
            func_D06C(); break;
        case 0xF8E9:
            func_F8E9(); break;
        case 0xF8F9:
            func_F8F9(); break;
        case 0xF691:
            func_F691(); break;
        case 0xFA4A:
            func_FA4A(); break;
        case 0xD061:
            func_D061(); break;
        case 0xFA5C:
            func_FA5C(); break;
        case 0xFA1F:
            func_FA1F(); break;
        case 0xF0F1:
            func_F0F1(); break;
        case 0xFA61:
            func_FA61(); break;
        case 0xF988:
            func_F988(); break;
        case 0xDDFA:
            func_DDFA(); break;
        case 0xCCF1:
            func_CCF1(); break;
        case 0xE2B9:
            func_E2B9(); break;
        case 0xF519:
            func_F519(); break;
        case 0xF97D:
            func_F97D(); break;
        case 0xCF90:
            func_CF90(); break;
        case 0xF0F8:
            func_F0F8(); break;
        case 0xDCAE:
            func_DCAE(); break;
        case 0xFAB5:
            func_FAB5(); break;
        case 0xEAB9:
            func_EAB9(); break;
        case 0xEBB9:
            func_EBB9(); break;
        case 0xF97F:
            func_F97F(); break;
        case 0xFF20:
            func_FF20(); break;
        case 0xDDFF:
            func_DDFF(); break;
        case 0xFE6B:
            func_FE6B(); break;
        case 0xFE6C:
            func_FE6C(); break;
        case 0xDE6B:
            func_DE6B(); break;
        case 0xC91C:
            func_C91C(); break;
        case 0xD4F0:
            func_D4F0(); break;
        case 0xD4F1:
            func_D4F1(); break;
        case 0xF694:
            func_F694(); break;
        case 0xC0F1:
            func_C0F1(); break;
        case 0xEC20:
            func_EC20(); break;
        case 0xFBED:
            func_FBED(); break;
        case 0xFBFB:
            func_FBFB(); break;
        case 0xFBFC:
            func_FBFC(); break;
        case 0xFEFB:
            func_FEFB(); break;
        case 0xFBFE:
            func_FBFE(); break;
        case 0xE4CD:
            func_E4CD(); break;
        case 0xE4CE:
            func_E4CE(); break;
        case 0xFC99:
            func_FC99(); break;
        case 0xED11:
            func_ED11(); break;
        case 0xFCBB:
            func_FCBB(); break;
        case 0xFD09:
            func_FD09(); break;
        case 0xFD60:
            func_FD60(); break;
        case 0xC9B4:
            func_C9B4(); break;
        case 0xFDA1:
            func_FDA1(); break;
        case 0xF604:
            func_F604(); break;
        case 0xFD6D:
            func_FD6D(); break;
        case 0xC9B6:
            func_C9B6(); break;
        case 0xF538:
            func_F538(); break;
        case 0xFD5B:
            func_FD5B(); break;
        case 0xFD5C:
            func_FD5C(); break;
        case 0xC0C3:
            func_C0C3(); break;
        case 0xC0C4:
            func_C0C4(); break;
        case 0xFF02:
            func_FF02(); break;
        case 0xF08D:
            func_F08D(); break;
        case 0xF08E:
            func_F08E(); break;
        case 0xEB8E:
            func_EB8E(); break;
        case 0xE637:
            func_E637(); break;
        case 0xE638:
            func_E638(); break;
        case 0xFDC0:
            func_FDC0(); break;
        case 0xDD4C:
            func_DD4C(); break;
        case 0xED19:
            func_ED19(); break;
        case 0xDC55:
            func_DC55(); break;
        case 0xFE6E:
            func_FE6E(); break;
        case 0xFE15:
            func_FE15(); break;
        case 0xFF3D:
            func_FF3D(); break;
        case 0xCC20:
            func_CC20(); break;
        case 0xCC21:
            func_CC21(); break;
        case 0xE601:
            func_E601(); break;
        case 0xCA12:
            func_CA12(); break;
        case 0xC611:
            func_C611(); break;
        case 0xC329:
            func_C329(); break;
        case 0xE02A:
            func_E02A(); break;
        case 0xFF09:
            func_FF09(); break;
        case 0xC01B:
            func_C01B(); break;
        case 0xFFC1:
            func_FFC1(); break;
        case 0xFDEF:
            func_FDEF(); break;
        case 0xB3E4:
            switch (g_current_bank) {
                case 1: func_B3E4_b1(); break;
                case 6: func_B3E4_b6(); break;
                case 0: func_B3E4_b0(); break;
                case 2: func_B3E4_b2(); break;
                case 3: func_B3E4_b3(); break;
                case 4: func_B3E4_b4(); break;
                case 5: func_B3E4_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xC4AD:
            func_C4AD(); break;
        case 0xC4B2:
            func_C4B2(); break;
        case 0xCAF7:
            func_CAF7(); break;
        case 0xF4F4:
            func_F4F4(); break;
        case 0xE70B:
            func_E70B(); break;
        case 0xB0E7:
            switch (g_current_bank) {
                case 0: func_B0E7_b0(); break;
                case 2: func_B0E7_b2(); break;
                case 3: func_B0E7_b3(); break;
                case 4: func_B0E7_b4(); break;
                case 5: func_B0E7_b5(); break;
                case 6: func_B0E7_b6(); break;
                case 1: func_B0E7_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xE3D9:
            func_E3D9(); break;
        case 0xCFD4:
            func_CFD4(); break;
        case 0xF05D:
            func_F05D(); break;
        case 0xA903:
            switch (g_current_bank) {
                case 0: func_A903_b0(); break;
                case 2: func_A903_b2(); break;
                case 3: func_A903_b3(); break;
                case 4: func_A903_b4(); break;
                case 5: func_A903_b5(); break;
                case 6: func_A903_b6(); break;
                case 1: func_A903_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xCA66:
            func_CA66(); break;
        case 0xEFB1:
            func_EFB1(); break;
        case 0xFEBC:
            func_FEBC(); break;
        case 0xF368:
            func_F368(); break;
        case 0xF95E:
            func_F95E(); break;
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
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xCC92:
            func_CC92(); break;
        case 0xEB4B:
            func_EB4B(); break;
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
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xD60A:
            func_D60A(); break;
        case 0xCA63:
            func_CA63(); break;
        case 0xFDFB:
            func_FDFB(); break;
        case 0xCB6D:
            func_CB6D(); break;
        case 0xD9E6:
            func_D9E6(); break;
        case 0xC385:
            func_C385(); break;
        case 0xDBA4:
            func_DBA4(); break;
        case 0x83AD:
            switch (g_current_bank) {
                case 0: func_83AD_b0(); break;
                case 1: func_83AD_b1(); break;
                case 2: func_83AD_b2(); break;
                case 3: func_83AD_b3(); break;
                case 4: func_83AD_b4(); break;
                case 5: func_83AD_b5(); break;
                case 6: func_83AD_b6(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xD0C7:
            func_D0C7(); break;
        case 0xD02B:
            func_D02B(); break;
        case 0xFAFE:
            func_FAFE(); break;
        case 0xC8F3:
            func_C8F3(); break;
        case 0xD003:
            func_D003(); break;
        case 0xD8D1:
            func_D8D1(); break;
        case 0xEE59:
            func_EE59(); break;
        case 0xF38C:
            func_F38C(); break;
        case 0xA203:
            switch (g_current_bank) {
                case 0: func_A203_b0(); break;
                case 2: func_A203_b2(); break;
                case 3: func_A203_b3(); break;
                case 4: func_A203_b4(); break;
                case 5: func_A203_b5(); break;
                case 6: func_A203_b6(); break;
                case 1: func_A203_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xFD33:
            func_FD33(); break;
        case 0xCC0A:
            func_CC0A(); break;
        case 0xCBC3:
            func_CBC3(); break;
        case 0xE3E0:
            func_E3E0(); break;
        case 0xA82D:
            func_A82D_b1(); break;
        case 0xB001:
            func_B001_b1(); break;
        case 0xA862:
            func_A862_b1(); break;
        case 0xA8D0:
            func_A8D0_b1(); break;
        case 0xA998:
            func_A998_b1(); break;
        case 0xA9FC:
            func_A9FC_b1(); break;
        case 0xAA49:
            func_AA49_b1(); break;
        case 0xAA9E:
            func_AA9E_b1(); break;
        case 0xAAE2:
            func_AAE2_b1(); break;
        case 0xAB00:
            func_AB00_b1(); break;
        case 0xAC72:
            func_AC72_b1(); break;
        case 0xAC76:
            func_AC76_b1(); break;
        case 0xAC8A:
            func_AC8A_b1(); break;
        case 0xAF5D:
            func_AF5D_b1(); break;
        case 0xB04D:
            func_B04D_b1(); break;
        case 0xB0BA:
            func_B0BA_b1(); break;
        case 0xB0CA:
            func_B0CA_b1(); break;
        case 0xB597:
            func_B597_b1(); break;
        case 0xA1D1:
            func_A1D1_b4(); break;
        case 0x9A06:
            func_9A06_b3(); break;
        case 0xAFCC:
            func_AFCC_b1(); break;
        case 0xAFDA:
            func_AFDA_b1(); break;
        case 0xBAA8:
            func_BAA8_b1(); break;
        case 0xD184:
            func_D184(); break;
        case 0xE6C9:
            func_E6C9(); break;
        case 0xD384:
            func_D384(); break;
        case 0xC484:
            func_C484(); break;
        case 0xC8B9:
            func_C8B9(); break;
        case 0xE6DB:
            func_E6DB(); break;
        case 0xCF20:
            func_CF20(); break;
        case 0xE6BF:
            func_E6BF(); break;
        case 0xF0C0:
            func_F0C0(); break;
        case 0xC085:
            func_C085(); break;
        case 0xE6C6:
            func_E6C6(); break;
        case 0xE649:
            func_E649(); break;
        case 0xD0B7:
            func_D0B7(); break;
        case 0xCA6E:
            func_CA6E(); break;
        case 0xDE33:
            func_DE33(); break;
        case 0xF0BC:
            func_F0BC(); break;
        case 0xC634:
            func_C634(); break;
        case 0xDC0E:
            func_DC0E(); break;
        case 0xDC1C:
            func_DC1C(); break;
        case 0xDD0E:
            func_DD0E(); break;
        case 0xFD0E:
            func_FD0E(); break;
        case 0xD0BD:
            func_D0BD(); break;
        case 0xC0C6:
            func_C0C6(); break;
        case 0xC88A:
            func_C88A(); break;
        case 0xC4F3:
            func_C4F3(); break;
        case 0xC4FA:
            func_C4FA(); break;
        case 0xC285:
            func_C285(); break;
        case 0xC2E6:
            func_C2E6(); break;
        case 0xC3A5:
            func_C3A5(); break;
        case 0xC3C6:
            func_C3C6(); break;
        case 0xFFB9:
            func_FFB9(); break;
        case 0xC4A4:
            func_C4A4(); break;
        case 0xC98B:
            func_C98B(); break;
        case 0xC4E6:
            func_C4E6(); break;
        case 0xC4E8:
            func_C4E8(); break;
        case 0xC4EF:
            func_C4EF(); break;
        case 0xC4F0:
            func_C4F0(); break;
        case 0xC509:
            func_C509(); break;
        case 0xC50A:
            func_C50A(); break;
        case 0xC501:
            func_C501(); break;
        case 0xC502:
            func_C502(); break;
        case 0xC404:
            func_C404(); break;
        case 0xE790:
            func_E790(); break;
        case 0xF7F0:
            func_F7F0(); break;
        case 0xF040:
            func_F040(); break;
        case 0xD024:
            func_D024(); break;
        case 0xD08E:
            func_D08E(); break;
        case 0xCD8E:
            func_CD8E(); break;
        case 0xF910:
            func_F910(); break;
        case 0xCA69:
            func_CA69(); break;
        case 0xFB4C:
            func_FB4C(); break;
        case 0xC991:
            func_C991(); break;
        case 0xE902:
            func_E902(); break;
        case 0xC814:
            func_C814(); break;
        case 0xC81D:
            func_C81D(); break;
        case 0xE80C:
            func_E80C(); break;
        case 0xE90A:
            func_E90A(); break;
        case 0xFAB0:
            func_FAB0(); break;
        case 0xC8A5:
            func_C8A5(); break;
        case 0xD07B:
            func_D07B(); break;
        case 0xC97C:
            func_C97C(); break;
        case 0xD07C:
            func_D07C(); break;
        case 0xD4D0:
            func_D4D0(); break;
        case 0xE385:
            func_E385(); break;
        case 0xE2B1:
            func_E2B1(); break;
        case 0xEE60:
            func_EE60(); break;
        case 0xE6F0:
            func_E6F0(); break;
        case 0xF08A:
            func_F08A(); break;
        case 0xDD06:
            func_DD06(); break;
        case 0xE285:
            func_E285(); break;
        case 0xEEF3:
            func_EEF3(); break;
        case 0xC92D:
            func_C92D(); break;
        case 0xCD4C:
            func_CD4C(); break;
        case 0xD0B6:
            func_D0B6(); break;
        case 0xD03D:
            func_D03D(); break;
        case 0xD04D:
            func_D04D(); break;
        case 0xEEB9:
            func_EEB9(); break;
        case 0xEE2D:
            func_EE2D(); break;
        case 0xED06:
            func_ED06(); break;
        case 0xC600:
            func_C600(); break;
        case 0xE7D0:
            func_E7D0(); break;
        case 0xF0E6:
            func_F0E6(); break;
        case 0xC9C0:
            func_C9C0(); break;
        case 0xDC4C:
            func_DC4C(); break;
        case 0xC9B0:
            func_C9B0(); break;
        case 0xFA90:
            func_FA90(); break;
        case 0xF5A2:
            func_F5A2(); break;
        case 0xD0F6:
            func_D0F6(); break;
        case 0xE9D0:
            func_E9D0(); break;
        case 0xCA4C:
            func_CA4C(); break;
        case 0xF0F6:
            func_F0F6(); break;
        case 0xFD00:
            func_FD00(); break;
        case 0xFEBD:
            func_FEBD(); break;
        case 0xFAC9:
            func_FAC9(); break;
        case 0xF0FA:
            func_F0FA(); break;
        case 0xC946:
            func_C946(); break;
        case 0xFECB:
            func_FECB(); break;
        case 0xF2A0:
            func_F2A0(); break;
        case 0xE504:
            func_E504(); break;
        case 0xE130:
            func_E130(); break;
        case 0xFCBD:
            func_FCBD(); break;
        case 0xFC9D:
            func_FC9D(); break;
        case 0xFF7D:
            func_FF7D(); break;
        case 0xFFBC:
            func_FFBC(); break;
        case 0xC504:
            func_C504(); break;
        case 0xFD9D:
            func_FD9D(); break;
        case 0xE642:
            func_E642(); break;
        case 0xE63D:
            func_E63D(); break;
        case 0xDE17:
            func_DE17(); break;
        case 0xC944:
            func_C944(); break;
        case 0xE310:
            func_E310(); break;
        case 0xC9EB:
            func_C9EB(); break;
        case 0xD0E4:
            func_D0E4(); break;
        case 0xCC4C:
            func_CC4C(); break;
        case 0xF054:
            func_F054(); break;
        case 0xF560:
            func_F560(); break;
        case 0xDD40:
            func_DD40(); break;
        case 0xDD50:
            func_DD50(); break;
        case 0xFF22:
            func_FF22(); break;
        case 0xDD0F:
            func_DD0F(); break;
        case 0xF8F6:
            func_F8F6(); break;
        case 0xFAF6:
            func_FAF6(); break;
        case 0xFD04:
            func_FD04(); break;
        case 0xF6D9:
            func_F6D9(); break;
        case 0xF8AD:
            func_F8AD(); break;
        case 0xFA0D:
            func_FA0D(); break;
        case 0xFC0D:
            func_FC0D(); break;
        case 0xFD7D:
            func_FD7D(); break;
        case 0xFB7D:
            func_FB7D(); break;
        case 0xE5F0:
            func_E5F0(); break;
        case 0xC56B:
            func_C56B(); break;
        case 0xFDC5:
            func_FDC5(); break;
        case 0xF098:
            func_F098(); break;
        case 0xEEB0:
            func_EEB0(); break;
        case 0xD09F:
            func_D09F(); break;
        case 0xE09E:
            func_E09E(); break;
        case 0xC99E:
            func_C99E(); break;
        case 0xC099:
            func_C099(); break;
        case 0xF09E:
            func_F09E(); break;
        case 0xD99E:
            func_D99E(); break;
        case 0xD905:
            func_D905(); break;
        case 0xF0E2:
            func_F0E2(); break;
        case 0xEB30:
            func_EB30(); break;
        case 0xE390:
            func_E390(); break;
        case 0xF64B:
            func_F64B(); break;
        case 0xF8F2:
            func_F8F2(); break;
        case 0xF408:
            func_F408(); break;
        case 0xDF90:
            func_DF90(); break;
        case 0xFE1D:
            func_FE1D(); break;
        case 0xB1C8:
            switch (g_current_bank) {
                case 0: func_B1C8_b0(); break;
                case 1: func_B1C8_b1(); break;
                case 2: func_B1C8_b2(); break;
                case 3: func_B1C8_b3(); break;
                case 4: func_B1C8_b4(); break;
                case 5: func_B1C8_b5(); break;
                case 6: func_B1C8_b6(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xC39B:
            func_C39B(); break;
        case 0xFD68:
            func_FD68(); break;
        case 0xF274:
            func_F274(); break;
        case 0xFD0B:
            func_FD0B(); break;
        case 0xE2E3:
            func_E2E3(); break;
        case 0xFAF4:
            func_FAF4(); break;
        case 0x99E5:
            func_99E5_b3(); break;
        case 0x9B45:
            func_9B45_b3(); break;
        case 0x9B85:
            func_9B85_b3(); break;
        case 0xA0F1:
            func_A0F1_b3(); break;
        case 0x847F:
            switch (g_current_bank) {
                case 3: func_847F_b3(); break;
                case 1: func_847F_b1(); break;
                case 2: func_847F_b2(); break;
                case 4: func_847F_b4(); break;
                case 5: func_847F_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xC531:
            func_C531(); break;
        case 0xC54A:
            func_C54A(); break;
        case 0xC543:
            func_C543(); break;
        case 0xC552:
            func_C552(); break;
        case 0xC583:
            func_C583(); break;
        case 0xC585:
            func_C585(); break;
        case 0xC5B6:
            func_C5B6(); break;
        case 0xC5C3:
            func_C5C3(); break;
        case 0xA0A0:
            func_A0A0_b7(); break;
        case 0xBFB9:
            func_BFB9_b7(); break;
        case 0x9998:
            func_9998_b7(); break;
        case 0xA9C4:
            func_A9C4_b7(); break;
        case 0xA90F:
            func_A90F_b7(); break;
        case 0x9900:
            func_9900_b7(); break;
        case 0xA8B9:
            func_A8B9_b7(); break;
        case 0x99C5:
            func_99C5_b7(); break;
        case 0xA900:
            func_A900_b7(); break;
        case 0x8501:
            func_8501_b7(); break;
        case 0xAB20:
            func_AB20_b7(); break;
        case 0xB3AD:
            func_B3AD_b7(); break;
        case 0xAB4C:
            func_AB4C_b7(); break;
        case 0x8D60:
            func_8D60_b7(); break;
        case 0xA006:
            func_A006_b7(); break;
        case 0x9160:
            func_9160_b7(); break;
        case 0xA950:
            func_A950_b7(); break;
        case 0x9983:
            switch (g_current_bank) {
                case 7: func_9983_b7(); break;
                case 1: func_9983_b1(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB921:
            func_B921_b1(); break;
        case 0xB330:
            func_B330_b0(); break;
        case 0x8180:
            func_8180_b0(); break;
        case 0x8182:
            func_8182_b0(); break;
        case 0x8988:
            func_8988_b0(); break;
        case 0xB2EB:
            func_B2EB_b0(); break;
        case 0xB2F9:
            func_B2F9_b0(); break;
        case 0xB30D:
            func_B30D_b0(); break;
        case 0xB35C:
            func_B35C_b0(); break;
        case 0xB364:
            func_B364_b0(); break;
        case 0xB3C0:
            switch (g_current_bank) {
                case 0: func_B3C0_b0(); break;
                case 1: func_B3C0_b1(); break;
                case 2: func_B3C0_b2(); break;
                case 3: func_B3C0_b3(); break;
                case 4: func_B3C0_b4(); break;
                case 5: func_B3C0_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB3CC:
            switch (g_current_bank) {
                case 0: func_B3CC_b0(); break;
                case 1: func_B3CC_b1(); break;
                case 2: func_B3CC_b2(); break;
                case 3: func_B3CC_b3(); break;
                case 4: func_B3CC_b4(); break;
                case 5: func_B3CC_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB3DE:
            switch (g_current_bank) {
                case 0: func_B3DE_b0(); break;
                case 1: func_B3DE_b1(); break;
                case 2: func_B3DE_b2(); break;
                case 3: func_B3DE_b3(); break;
                case 4: func_B3DE_b4(); break;
                case 5: func_B3DE_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB479:
            switch (g_current_bank) {
                case 0: func_B479_b0(); break;
                case 1: func_B479_b1(); break;
                case 2: func_B479_b2(); break;
                case 3: func_B479_b3(); break;
                case 4: func_B479_b4(); break;
                case 5: func_B479_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB48D:
            switch (g_current_bank) {
                case 0: func_B48D_b0(); break;
                case 1: func_B48D_b1(); break;
                case 2: func_B48D_b2(); break;
                case 3: func_B48D_b3(); break;
                case 4: func_B48D_b4(); break;
                case 5: func_B48D_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB557:
            switch (g_current_bank) {
                case 0: func_B557_b0(); break;
                case 1: func_B557_b1(); break;
                case 2: func_B557_b2(); break;
                case 3: func_B557_b3(); break;
                case 4: func_B557_b4(); break;
                case 5: func_B557_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB575:
            switch (g_current_bank) {
                case 0: func_B575_b0(); break;
                case 1: func_B575_b1(); break;
                case 2: func_B575_b2(); break;
                case 3: func_B575_b3(); break;
                case 4: func_B575_b4(); break;
                case 5: func_B575_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB95C:
            switch (g_current_bank) {
                case 0: func_B95C_b0(); break;
                case 1: func_B95C_b1(); break;
                case 2: func_B95C_b2(); break;
                case 3: func_B95C_b3(); break;
                case 4: func_B95C_b4(); break;
                case 5: func_B95C_b5(); break;
                default: return nes_interp_dispatch(addr);
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
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB9B4:
            switch (g_current_bank) {
                case 0: func_B9B4_b0(); break;
                case 1: func_B9B4_b1(); break;
                case 2: func_B9B4_b2(); break;
                case 3: func_B9B4_b3(); break;
                case 4: func_B9B4_b4(); break;
                case 5: func_B9B4_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB9B5:
            switch (g_current_bank) {
                case 0: func_B9B5_b0(); break;
                case 1: func_B9B5_b1(); break;
                case 2: func_B9B5_b2(); break;
                case 3: func_B9B5_b3(); break;
                case 4: func_B9B5_b4(); break;
                case 5: func_B9B5_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xB9C3:
            switch (g_current_bank) {
                case 0: func_B9C3_b0(); break;
                case 1: func_B9C3_b1(); break;
                case 2: func_B9C3_b2(); break;
                case 3: func_B9C3_b3(); break;
                case 4: func_B9C3_b4(); break;
                case 5: func_B9C3_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xBA11:
            switch (g_current_bank) {
                case 7: func_FA11(); break;
                case 0: func_BA11_b0(); break;
                case 1: func_BA11_b1(); break;
                case 2: func_BA11_b2(); break;
                case 3: func_BA11_b3(); break;
                case 4: func_BA11_b4(); break;
                case 5: func_BA11_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xBBEC:
            switch (g_current_bank) {
                case 7: func_FBEC(); break;
                case 0: func_BBEC_b0(); break;
                case 1: func_BBEC_b1(); break;
                case 2: func_BBEC_b2(); break;
                case 3: func_BBEC_b3(); break;
                case 4: func_BBEC_b4(); break;
                case 5: func_BBEC_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xBC34:
            switch (g_current_bank) {
                case 0: func_BC34_b0(); break;
                case 1: func_BC34_b1(); break;
                case 2: func_BC34_b2(); break;
                case 3: func_BC34_b3(); break;
                case 4: func_BC34_b4(); break;
                case 5: func_BC34_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xBC4B:
            func_BC4B_b0(); break;
        case 0xBC7A:
            func_BC7A_b0(); break;
        case 0xBEE9:
            switch (g_current_bank) {
                case 7: func_FEE9(); break;
                case 0: func_BEE9_b0(); break;
                case 1: func_BEE9_b1(); break;
                case 2: func_BEE9_b2(); break;
                case 3: func_BEE9_b3(); break;
                case 4: func_BEE9_b4(); break;
                case 5: func_BEE9_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0xBA40:
            func_BA40_b1(); break;
        case 0xBA4B:
            func_BA4B_b1(); break;
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
        case 0x87CB:
            func_87CB_b1(); break;
        case 0x87DD:
            func_87DD_b1(); break;
        case 0x8802:
            func_8802_b1(); break;
        case 0x883E:
            func_883E_b1(); break;
        case 0x8863:
            func_8863_b1(); break;
        case 0x87F0:
            func_87F0_b1(); break;
        case 0x8818:
            func_8818_b1(); break;
        case 0x882C:
            func_882C_b1(); break;
        case 0x8851:
            func_8851_b1(); break;
        case 0x8874:
            func_8874_b1(); break;
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
        case 0x88D9:
            func_88D9_b1(); break;
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
        case 0x89A9:
            func_89A9_b1(); break;
        case 0x89D2:
            func_89D2_b1(); break;
        case 0x89E6:
            func_89E6_b1(); break;
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
        case 0x89BE:
            func_89BE_b1(); break;
        case 0x8A0F:
            func_8A0F_b1(); break;
        case 0x8A1D:
            func_8A1D_b1(); break;
        case 0x8A21:
            func_8A21_b1(); break;
        case 0x8AAE:
            func_8AAE_b1(); break;
        case 0x8ABA:
            func_8ABA_b1(); break;
        case 0x8A26:
            func_8A26_b1(); break;
        case 0x8A3C:
            func_8A3C_b1(); break;
        case 0x8A41:
            func_8A41_b1(); break;
        case 0x8A4E:
            func_8A4E_b1(); break;
        case 0x8A46:
            func_8A46_b1(); break;
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
        case 0x9A44:
            func_9A44_b1(); break;
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
        case 0xB50F:
            func_B50F_b1(); break;
        case 0xB516:
            func_B516_b1(); break;
        case 0xB52B:
            func_B52B_b1(); break;
        case 0xB539:
            func_B539_b1(); break;
        case 0xB56E:
            func_B56E_b1(); break;
        case 0xB57B:
            func_B57B_b1(); break;
        case 0xB583:
            func_B583_b1(); break;
        case 0xB58A:
            func_B58A_b1(); break;
        case 0xB598:
            func_B598_b1(); break;
        case 0xB5EC:
            func_B5EC_b1(); break;
        case 0xB5F6:
            func_B5F6_b1(); break;
        case 0xB650:
            func_B650_b1(); break;
        case 0xB673:
            func_B673_b1(); break;
        case 0xB695:
            func_B695_b1(); break;
        case 0xB6A1:
            func_B6A1_b1(); break;
        case 0xB6B0:
            func_B6B0_b1(); break;
        case 0xB6CD:
            func_B6CD_b1(); break;
        case 0xB6D3:
            func_B6D3_b1(); break;
        case 0xB6E7:
            func_B6E7_b1(); break;
        case 0xB6ED:
            func_B6ED_b1(); break;
        case 0xB703:
            func_B703_b1(); break;
        case 0xB710:
            func_B710_b1(); break;
        case 0xB716:
            func_B716_b1(); break;
        case 0xB735:
            func_B735_b1(); break;
        case 0xB73C:
            func_B73C_b1(); break;
        case 0xB74F:
            func_B74F_b1(); break;
        case 0xB77A:
            func_B77A_b1(); break;
        case 0xB781:
            func_B781_b1(); break;
        case 0xB7A6:
            func_B7A6_b1(); break;
        case 0xB7AC:
            func_B7AC_b1(); break;
        case 0xB7CB:
            func_B7CB_b1(); break;
        case 0xB7D9:
            func_B7D9_b1(); break;
        case 0xB7E7:
            func_B7E7_b1(); break;
        case 0xB7EF:
            func_B7EF_b1(); break;
        case 0xB80E:
            func_B80E_b1(); break;
        case 0xB834:
            func_B834_b1(); break;
        case 0xB84F:
            func_B84F_b1(); break;
        case 0xB878:
            func_B878_b1(); break;
        case 0xB87F:
            func_B87F_b1(); break;
        case 0xB8A7:
            func_B8A7_b1(); break;
        case 0xB8B1:
            func_B8B1_b1(); break;
        case 0xB8D2:
            func_B8D2_b1(); break;
        case 0xB8ED:
            func_B8ED_b1(); break;
        case 0xB940:
            func_B940_b1(); break;
        case 0xBC77:
            func_BC77_b1(); break;
        case 0xBC7D:
            func_BC7D_b1(); break;
        case 0xBC80:
            func_BC80_b1(); break;
        case 0xBC83:
            func_BC83_b1(); break;
        case 0xBBF7:
            func_BBF7_b1(); break;
        case 0x9AF9:
            func_9AF9_b3(); break;
        case 0x9DF2:
            func_9DF2_b3(); break;
        case 0x9E43:
            func_9E43_b3(); break;
        case 0x9F69:
            func_9F69_b3(); break;
        case 0x9FED:
            func_9FED_b3(); break;
        case 0xA001:
            func_A001_b3(); break;
        case 0xA01B:
            func_A01B_b3(); break;
        case 0xA028:
            func_A028_b3(); break;
        case 0xA02E:
            func_A02E_b3(); break;
        case 0xA041:
            func_A041_b3(); break;
        case 0xA072:
            func_A072_b3(); break;
        case 0xBAF2:
            switch (g_current_bank) {
                case 7: func_FAF2(); break;
                case 3: func_BAF2_b3(); break;
                case 4: func_BAF2_b4(); break;
                case 5: func_BAF2_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x871C:
            func_871C_b5(); break;
        case 0x99C6:
            func_99C6_b5(); break;
        case 0x99DB:
            func_99DB_b5(); break;
        case 0xB2A3:
            func_B2A3_b0(); break;
        case 0xB538:
            switch (g_current_bank) {
                case 7: func_F538(); break;
                case 0: func_B538_b0(); break;
                case 1: func_B538_b1(); break;
                case 2: func_B538_b2(); break;
                case 3: func_B538_b3(); break;
                case 4: func_B538_b4(); break;
                case 5: func_B538_b5(); break;
                default: return nes_interp_dispatch(addr);
            }
            break;
        case 0x86FB:
            func_86FB_b1(); break;
        case 0x86FD:
            func_86FD_b1(); break;
        case 0x8701:
            func_8701_b1(); break;
        case 0x8700:
            func_8700_b1(); break;
        case 0x876D:
            func_876D_b1(); break;
        case 0xFE21:
            func_FE21(); break;
        case 0x8927:
            func_8927_b1(); break;
        case 0x891A:
            func_891A_b1(); break;
        case 0x8A67:
            func_8A67_b1(); break;
        case 0x8D9D:
            func_8D9D_b1(); break;
        case 0x8E05:
            func_8E05_b1(); break;
        case 0x9144:
            func_9144_b1(); break;
        case 0x914A:
            func_914A_b1(); break;
        case 0x916E:
            func_916E_b1(); break;
        case 0x91FF:
            func_91FF_b1(); break;
        case 0x91B9:
            func_91B9_b1(); break;
        case 0x9203:
            func_9203_b1(); break;
        case 0x91C3:
            func_91C3_b1(); break;
        case 0x9210:
            func_9210_b1(); break;
        case 0x9266:
            func_9266_b1(); break;
        case 0x925D:
            func_925D_b1(); break;
        case 0xC360:
            func_C360(); break;
        case 0xC36B:
            func_C36B(); break;
        case 0x9332:
            func_9332_b1(); break;
        case 0x9303:
            func_9303_b1(); break;
        case 0x92E1:
            func_92E1_b1(); break;
        case 0x933F:
            func_933F_b1(); break;
        case 0xDF73:
            func_DF73(); break;
        case 0x9460:
            func_9460_b1(); break;
        case 0x8796:
            func_8796_b1(); break;
        case 0x8799:
            func_8799_b1(); break;
        case 0x87A5:
            func_87A5_b1(); break;
        case 0x87B1:
            func_87B1_b1(); break;
        case 0x89F6:
            func_89F6_b1(); break;
        case 0x89FB:
            func_89FB_b1(); break;
        case 0x99A1:
            func_99A1_b1(); break;
        case 0xB564:
            func_B564_b1(); break;
        case 0xB694:
            func_B694_b1(); break;
        case 0xB6CC:
            func_B6CC_b1(); break;
        case 0xB739:
            func_B739_b1(); break;
        case 0xB8A6:
            func_B8A6_b1(); break;
        case 0xB8EC:
            func_B8EC_b1(); break;
        case 0x9DF1:
            func_9DF1_b3(); break;
        case 0x913F:
            func_913F_b1(); break;
        case 0x98DB:
            func_98DB_b1(); break;
        case 0x9993:
            func_9993_b1(); break;
        case 0x99BF:
            func_99BF_b1(); break;
        case 0x99A6:
            func_99A6_b1(); break;
        case 0x9A03:
            func_9A03_b1(); break;
        case 0x9A12:
            func_9A12_b1(); break;
        case 0x99BA:
            func_99BA_b1(); break;
        case 0x99C8:
            func_99C8_b1(); break;
        case 0x99CC:
            func_99CC_b1(); break;
        case 0x9BD2:
            func_9BD2_b1(); break;
        case 0x9F52:
            func_9F52_b1(); break;
        case 0x9FA4:
            func_9FA4_b1(); break;
        case 0x9161:
            func_9161_b1(); break;
        case 0x9173:
            func_9173_b1(); break;
        case 0xA44D:
            func_A44D_b1(); break;
        case 0xA470:
            func_A470_b1(); break;
        case 0xA6FB:
            func_A6FB_b1(); break;
        case 0xA6ED:
            func_A6ED_b1(); break;
        case 0xA7AD:
            func_A7AD_b1(); break;
        case 0xA7BC:
            func_A7BC_b1(); break;
        case 0xA7FB:
            func_A7FB_b1(); break;
        case 0xA7CE:
            func_A7CE_b1(); break;
        default:
            return nes_interp_dispatch(addr);
    }
    return 1;
}

/* Legacy entry: no caller-bank hint (JMP-indirect, interp, debug server).
 * Depth-counted so deferred JMP-tail targets get driven (see runtime.c). */
int call_by_address(uint16_t addr) { return nes_dispatch_call(addr, -1); }
