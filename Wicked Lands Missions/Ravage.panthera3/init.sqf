execVM "randomWeather2.sqf";

sleep 0.1;
[] execVM "GF_Earplugs\GF_Earplugs.sqf";

sleep 0.1;
[] execVM "outlw_magRepack\MagRepack_init_sv.sqf";

sleep 0.1;
[] execVM "GF_Holster\GF_Holster.sqf";

sleep 0.1;
[] execVM "GF_Ravage_Static_Traders\Trader_rvg_arms_s.sqf";

sleep 0.1;
[] execVM "GF_Ravage_Static_Traders\Trader_rvg_gear_s.sqf";

sleep 0.1;
[] execVM "GF_Ravage_Static_Traders\Trader_rvg_supplies_s.sqf";

sleep 0.1;
[] execVM "GF_Cleanup\GF_Cleanup.sqf";

sleep 0.1;
[] execVM "CHBN.sqf";

sleep 0.1;
[] execVM "dontDeletePlayerBodies\dontDeletePlayerBodies.sqf";

if ((isDedicated) || (hasInterface && isServer)) then { [] execVM "serverScripts.sqf"; };

enableSaving [false, false];

0 fadeRadio 0;

player addMPEventHandler ["MPRespawn", { _this execVM "give_money\give_money.sqf"; }];

CHBN_adjustBrightness = 0.4;
CHBN_adjustColor = [0,0,0];

CHVD_allowNoGrass = true;
//CHVD_maxView = 4000;
//CHVD_maxObj = 2000;

sleep 5;
rvg_launchers = ["CUP_launch_RPG7V"];
rvg_nvgs = [];
rvg_uniforms_lv1 = ["CUP_I_B_PMC_Unit_13","CUP_I_B_PMC_Unit_14","CUP_I_B_PMC_Unit_17","CUP_I_B_PMC_Unit_19","CUP_I_B_PMC_Unit_20","CUP_I_B_PMC_Unit_24","CUP_U_B_USArmy_UBACS","CUP_U_O_SLA_Desert","CUP_U_O_SLA_Green","CUP_U_O_SLA_Urban","U_BG_Guerilla1_1","U_BG_Guerilla1_2_F","U_BG_Guerrilla_6_1NG","U_B_CombatUniform_mcam","U_B_CombatUniform_mcam_tshirt","U_B_CombatUniform_mcam_wdl_f","U_B_GhillieSuit","U_I_CombatUniform","U_I_CombatUniform_shortsleeve","rvg_bandit","rvg_bandit_1","rvg_camo","rvg_camo_1","rvg_diamond","rvg_diamond_1","rvg_independant","rvg_independant_1","rvg_paramilitary_1","rvg_survivor","rvg_survivor_1"];
rvg_uniforms_lv0 = ["CUP_I_B_PMC_Unit_1","CUP_I_B_PMC_Unit_2","CUP_I_B_PMC_Unit_3","CUP_U_I_GUE_Woodland1","U_BG_Guerilla2_1","U_BG_Guerilla2_2","U_BG_Guerilla2_3","U_BG_Guerilla3_1","U_C_Poor_1","rvg_hoodie_bandit","rvg_hoodie_blue","rvg_retro_bandit","rvg_retro_green","rvg_shirt_bandit","rvg_shirt_check"];
rvg_vests = ["CUP_V_B_Eagle_SPC_Patrol","CUP_V_B_Interceptor_Rifleman","CUP_V_B_MTV_Patrol","CUP_V_B_PASGT","CUP_V_CDF_6B3_1_DST","CUP_V_CDF_6B3_1_FST","CUP_V_CDF_6B3_1_Green","CUP_V_I_Guerilla_Jacket","CUP_V_I_RACS_Carrier_Vest_3","CUP_V_I_RACS_Carrier_Vest_wdl_3","CUP_V_O_SLA_6B3_1_DES","CUP_V_O_SLA_6B3_1_URB","CUP_V_O_SLA_6B3_1_WDL","CUP_V_O_TK_Vest_1","CUP_V_PMC_CIRAS_Black_Patrol","CUP_V_PMC_CIRAS_Coyote_Patrol","CUP_V_PMC_IOTV_Black_Patrol","V_BandollierB_blk","V_BandollierB_cbr","V_CarrierRigKBT_01_EAF_F","V_CarrierRigKBT_01_Olive_F","V_Chestrig_blk","V_Chestrig_khk","V_HarnessO_brn","V_HarnessO_gry","V_HarnessOGL_gry","V_LegStrapBag_black_F","V_LegStrapBag_coyote_F","V_PlateCarrier1_blk","V_PlateCarrier1_rgr","V_PlateCarrier2_blk","V_Pocketed_black_F","V_Pocketed_coyote_F","V_TacVest_blk","V_TacVest_brn","rvg_chestrig","rvg_deckvest_1","rvg_deckvest_2","rvg_eodvest_1","rvg_eodvest_2","rvg_platecarrier_1","rvg_platecarrier_2","rvg_rangemaster_1","rvg_rangemaster_2","rvg_ravenvest_1","rvg_tacvest_1","rvg_tacvest_2"];
rvg_headGears = ["CUP_H_C_Ushanka_01","CUP_H_PMC_Cap_Back_Burberry","CUP_H_PMC_Cap_Back_Grey","CUP_H_PMC_Cap_Burberry","CUP_H_PMC_Cap_Grey","H_BandCap_rvg","H_Bandanna_camo","H_Bandanna_cbr","H_Bandanna_gry","H_Booniehat_oli","H_Booniehat_tan","H_Booniehat_wdl","H_Cap_blk_Raven","H_Cap_police","H_Cap_tan_specops_US","H_ShemagOpen_khk","H_ShemagOpen_tan","H_Shemag_olive","H_Watchcap_blk","H_Watchcap_cbr","H_Watchcap_khk","rvg_hat_brown","rvg_hat_grey","rvg_hat_tan","rvg_presshelmet_1","rvg_presshelmet_2","rvg_racing_1","rvg_racing_2","rvg_racing_3","rvg_safari_1","rvg_safari_2","rvg_skate_1","rvg_skate_2"];
rvg_goggles = ["G_Bandanna_blk","G_Bandanna_khk","G_Bandanna_sport","LBG_Shemagh_Gry","LBG_Shemagh_OD","LCG_Shemagh_Gry","LCG_Shemagh_Tan","LCG_Shemagh_White","LOG_Shemagh_OD","LOG_Shemagh_Tan","L_Shemagh_Gry","L_Shemagh_OD","L_Shemagh_Tan","PU_shemagh_OD","PU_shemagh_ODBLK","rvg_BalaclavaCombat_1","rvg_BalaclavaCombat_2","rvg_BalaclavaLow_1","rvg_BalaclavaLow_2","rvg_balaclava_1","rvg_balaclava_2","rvg_bandanaAvi_1","rvg_bandanaAvi_2","rvg_bandanaShades_1","rvg_bandanaShades_2","rvg_bandanaSport_1","rvg_bandanaSport_2","rvg_bandana_1","rvg_bandana_2","rvg_respirator_1","rvg_respirator_2"];
rvg_backpacks = ["B_FieldPack_cbr","B_FieldPack_khk","B_FieldPack_oli","B_Kitbag_cbr","B_Kitbag_rgr","B_Kitbag_tan","B_TacticalPack_blk","B_TacticalPack_mcamo","B_TacticalPack_oli","CUP_B_ACRPara_dpm","CUP_B_ACRPara_m95","CUP_B_AlicePack_Bedroll","CUP_B_AlicePack_Khaki","CUP_B_AlicePack_OD","CUP_B_CivPack_WDL","CUP_B_HikingPack_Civ","CUP_B_RUS_Backpack","rvg_legstrappack_1","rvg_legstrappack_2","rvg_legstrappack_3","rvg_messengerbag_1","rvg_messengerbag_2","rvg_messengerbag_3"];
rvg_gasmasks = ["Mask_M40","Mask_M40_OD","Mask_M50"];
rvg_weapons = ["CUP_hgun_Colt1911","CUP_hgun_Makarov","CUP_hgun_TaurusTracker455","CUP_srifle_CZ550","CUP_srifle_LeeEnfield","CUP_srifle_LeeEnfield_rail","CUP_arifle_AK101","CUP_arifle_AK101_railed","CUP_arifle_AK47","CUP_arifle_AK74","CUP_arifle_AK74M","CUP_arifle_AK74M_railed","CUP_arifle_AKM","CUP_arifle_AKMS","CUP_arifle_AKS74","CUP_arifle_FNFAL","CUP_arifle_G36A","CUP_arifle_G36C","CUP_arifle_HK416_Black","CUP_arifle_HK416_Desert","CUP_arifle_HK416_Wood","CUP_arifle_HK_M27","CUP_arifle_L85A2","CUP_arifle_M16A1","CUP_arifle_M16A2","CUP_arifle_M16A4_Base","CUP_arifle_M4A1_black","CUP_arifle_M4A1_camo","CUP_arifle_M4A1_desert","CUP_arifle_Mk16_STD","CUP_arifle_Mk16_STD_black","CUP_arifle_Mk16_STD_woodland","CUP_arifle_SBR_black","CUP_arifle_SBR_od","CUP_arifle_Sa58P","CUP_arifle_XM8_Carbine","CUP_hgun_Compact","CUP_hgun_Duty","CUP_hgun_M9","CUP_hgun_MicroUzi","CUP_hgun_Phantom","CUP_sgun_M1014","CUP_sgun_Saiga12k","CUP_smg_MP5A5_flashlight","CUP_smg_bizon","CUP_srifle_M110","CUP_srifle_M14","CUP_srifle_M14_DMR","CUP_srifle_M21","CUP_srifle_Mk12SPR","CUP_srifle_SVD","SMG_01_F","SMG_02_F","SMG_03_black","arifle_Katiba_F","arifle_MX_F","arifle_Mk20_F","arifle_TRG21_F","hgun_ACPC2_F","hgun_P07_F","hgun_PDW2000_F","hgun_Pistol_heavy_01_F","hgun_Pistol_heavy_02_F","hgun_Rook40_F","srifle_DMR_01_F","srifle_EBR_F"];
rvg_LMG = ["CUP_lmg_Mk48_wdl"];
rvg_WeaponItems = [];
rvg_WeaponLights = ["acc_Flashlight"];

sleep 1;
[["music1","music2","music3","music4","music5","music6","music7","music8","music9","music10","music11","music12","music13","music14","music15","music16","music17","music18","music19","music20","music21","music22","music23","music24","music25","music26","music27","music28","music29","music30","music31","music32","music33","music34","music35","music36","music37","music38","music39","music40","music41"], 180] call BIS_fnc_music;