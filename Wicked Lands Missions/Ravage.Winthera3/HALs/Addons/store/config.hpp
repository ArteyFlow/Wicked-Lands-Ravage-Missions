/*
	Macro: ERROR_WITH_TITLE()

	Parameters:
	0: CLASSNAME - Classname of item
	1: PRICE - Default item price
	2: STOCK - Default item stock
__________________________________________________________________*/
#define ITEM(CLASSNAME, PRICE, STOCK)\
	class CLASSNAME {\
		price = PRICE;\
		stock = STOCK;\
	};

class cfgHALsStore {
	containerTypes[] = {"LandVehicle", "Air", "Ship"};
	containerRadius = 50;
	currencySymbol = "$";
	sellFactor = 0.5;
	debug = 0;

	class categories {
		class money {
			displayName = "Redeem Money";
			picture = "";

			class rvg_money {price = 200;stock = 0;};
		};
		
		class survival {
			displayName = "Survival Items";
			picture = "";

            class rvg_plasticBottleEmpty {price = 200;stock = 50;};
			class rvg_canteenEmpty {price = 200;stock = 50;};
			class rvg_canteen {price = 300;stock = 50;};
            class rvg_canteenPurified {price = 400;stock = 50;};
            class rvg_canOpener {price = 300;stock = 50;};
            class rvg_guttingKnife {price = 400;stock = 50;};
            class rvg_foldedTent {price = 600;stock = 50;};
			class rvg_foldedTent_grey {price = 600;stock = 50;};
            class rvg_foldedTent_blue {price = 600;stock = 50;};
            class rvg_matches {price = 300;stock = 50;};
            class rvg_plasticBottlePurified {price = 400;stock = 50;};
            class rvg_purificationTablets {price = 700;stock = 50;};
            class rvg_antiRad {price = 450;stock = 50;};
            class rvg_notepad {price = 50;stock = 50;};
            class rvg_docFolder {price = 50;stock = 50;};
            class rvg_spirit {price = 350;stock = 50;};
            class rvg_franta {price = 350;stock = 50;};
            class rvg_beans {price = 300;stock = 50;};
            class rvg_bacon {price = 300;stock = 50;};
			class FirstAidKit {price = 600;stock = 20;};
			class rvg_sleepingBag_Blue {price = 100;stock = 0;};
			class rvg_Geiger {price = 500;stock = 0;};
		    class rvg_plasticBottle {price = 300;stock = 50;};
			class rvg_milk {price = 300;stock = 50;};
            class rvg_rice {price = 300;stock = 50;};

		};
		
		class vehicleitems {
			displayName = "Vehicle Items";
			picture = "";
			
            class rvg_canisterFuel_Empty {price = 400;stock = 50;};
            class rvg_canisterFuel {price = 1200;stock = 50;};
            class rvg_hose {price = 300;stock = 50;};
            class rvg_tire {price = 800;stock = 50;};
			class rvg_toolkit {price = 2000;stock = 50;};
		
		};
		
		class money2 {
			displayName = "Redeem Money";
			picture = "";

			class rvg_money {price = 200;stock = 0;};
		};
		
		class handgun {
			displayName = "Handguns";
			picture = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\handgun_ca.paa";

            class hgun_Pistol_heavy_01_F {price = 300;stock = 50;};
			class hgun_ACPC2_F {price = 250;stock = 50;};
			class hgun_P07_F {price = 200;stock = 50;};
			class hgun_Rook40_F {price = 200;stock = 50;};
			class hgun_Pistol_heavy_02_F {price = 250;stock = 50;};
            class CUP_hgun_PMM {price = 80;stock = 50;};
            class CUP_hgun_Mk23 {price = 200;stock = 50;};
            class CUP_hgun_Deagle {price = 800;stock = 50;};
            class CUP_hgun_Colt1911 {price = 100;stock = 50;};
            class CUP_hgun_Compact {price = 200;stock = 50;};
            class CUP_hgun_Duty {price = 200;stock = 50;};
            class CUP_hgun_Glock17 {price = 200;stock = 50;};
            class CUP_hgun_M9 {price = 200;stock = 50;};
            class CUP_hgun_Makarov {price = 80;stock = 50;};
            class CUP_hgun_MicroUzi {price = 400;stock = 50;};
            class CUP_hgun_Phantom {price = 200;stock = 50;};
            class CUP_hgun_TaurusTracker455 {price = 100;stock = 50;};
			class CUP_hgun_PB6P9 {price = 120;stock = 50;};
			class CUP_hgun_MP7 {price = 400;stock = 50;};
			
		};
		
		class smg {
			displayName = "SMGs";
			picture = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\primaryWeapon_ca.paa";
			
			class CUP_smg_Mac10 {price = 300;stock = 50;};
			class CUP_smg_MP7 {price = 350;stock = 50;};
			class CUP_smg_MP7_desert {price = 350;stock = 50;};
			class CUP_smg_MP7_woodland {price = 350;stock = 50;};
			class CUP_smg_saiga9 {price = 150;stock = 50;};
			class CUP_smg_vityaz_top_rail {price = 150;stock = 50;};
			class CUP_smg_EVO {price = 300;stock = 50;};
			class CUP_smg_MP5A5 {price = 350;stock = 50;};
            class CUP_smg_MP5SD6 {price = 1200;stock = 50;};
            class CUP_smg_SA61 {price = 120;stock = 50;};
            class CUP_smg_bizon {price = 500;stock = 50;};
			class hgun_PDW2000_F {price = 300;stock = 50;};
			class SMG_02_F {price = 350;stock = 50;};
			class SMG_01_F {price = 300;stock = 50;};
			class SMG_03_black {price = 400;stock = 50;};
			class CUP_smg_vityaz_vfg {price = 150;stock = 50;};
			
		};
		
		class shotgun {
			displayName = "Shotguns";
			picture = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\primaryWeapon_ca.paa";
			
			class CUP_sgun_AA12 {price = 2000;stock = 50;};
            class CUP_sgun_M1014 {price = 500;stock = 50;};
            class CUP_sgun_Saiga12K {price = 500;stock = 50;};
			
		};
		
		class rifle {
			displayName = "Assault Rifles";
			picture = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\primaryWeapon_ca.paa";

            //rifle
			class CUP_arifle_ACR_blk_556 {price = 400;stock = 50;};
			class CUP_arifle_ACRC_EGLM_blk_556 {price = 600;stock = 50;};
			class CUP_arifle_ACR_snw_556 {price = 400;stock = 50;};
			class CUP_arifle_AK101 {price = 400;stock = 50;};
			class CUP_arifle_AK101_railed {price = 450;stock = 50;};
			class CUP_arifle_AK107 {price = 400;stock = 50;};
			class CUP_arifle_AK12_black {price = 400;stock = 50;};
            class CUP_arifle_AK47 {price = 450;stock = 50;};
            class CUP_arifle_AK74M {price = 400;stock = 50;};
			class CUP_arifle_AK74M_railed {price = 450;stock = 50;};
			class CUP_arifle_AK74M_top_rail {price = 450;stock = 50;};
			class CUP_arifle_AK74M_GL {price = 700;stock = 50;};
            class CUP_arifle_AKM {price = 450;stock = 50;};
            class CUP_arifle_AKS74 {price = 400;stock = 50;};
            class CUP_arifle_AKS74U {price = 400;stock = 50;};
            class CUP_arifle_CZ805_A1 {price = 400;stock = 50;};
            class CUP_arifle_FNFAL {price = 500;stock = 50;};
			class CUP_arifle_Galil_black {price = 400;stock = 50;};
            class CUP_arifle_G36A {price = 600;stock = 50;};
            class CUP_arifle_G36C {price = 400;stock = 50;};
            class CUP_arifle_L85A2 {price = 400;stock = 50;};
			class CUP_arifle_M16A1 {price = 400;stock = 50;};
            class CUP_arifle_M16A2 {price = 400;stock = 50;};
			class CUP_arifle_M16A4_Base {price = 400;stock = 50;};
            class CUP_arifle_M4A1 {price = 400;stock = 50;};
			class CUP_arifle_M4A1_camo {price = 400;stock = 50;};
            class CUP_arifle_M4A1_desert {price = 400;stock = 50;};
			class CUP_arifle_M4A1_SOMMOD_black {price = 400;stock = 50;};
			class CUP_arifle_M4A1_SOMMOD_ctrg {price = 400;stock = 50;};
			class CUP_arifle_SBR_black {price = 400;stock = 50;};
            class CUP_arifle_Mk16_CQC {price = 400;stock = 50;};
            class CUP_arifle_Mk16_STD {price = 400;stock = 50;};
			class CUP_arifle_Mk16_STD_black {price = 400;stock = 50;};
            class CUP_arifle_Sa58P {price = 450;stock = 50;};
            class CUP_arifle_Sa58P_des {price = 450;stock = 50;};
            class CUP_arifle_Sa58RIS1 {price = 500;stock = 50;};
            class CUP_arifle_Sa58V {price = 450;stock = 50;};
			class CUP_arifle_TYPE_56_2 {price = 450;stock = 50;};
			class CUP_arifle_OTS14_GROZA_762_Grip {price = 450;stock = 50;};
			class CUP_arifle_HK416_Black {price = 400;stock = 50;};
			class CUP_arifle_HK_M27 {price = 400;stock = 50;};
			class CUP_arifle_G3A3_ris_black {price = 500;stock = 50;};
			class CUP_arifle_AUG_A1 {price = 500;stock = 50;};
			class CUP_arifle_AS_VAL {price = 1800;stock = 50;};
            class arifle_MXC_F {price = 460;stock = 50;};
			class arifle_MXC_Black_F {price = 460;stock = 50;};
			class arifle_Katiba_C_F {price = 460;stock = 50;};
			class arifle_Katiba_F {price = 460;stock = 50;};
			class arifle_Mk20_F {price = 400;stock = 50;};
			class arifle_Mk20_plain_F {price = 400;stock = 50;};
			class arifle_Mk20C_F {price = 400;stock = 50;};
			class arifle_Mk20_GL_F {price = 700;stock = 50;};
			class arifle_MX_Black_F {price = 460;stock = 50;};
			class arifle_MX_F {price = 460;stock = 50;};
			class arifle_TRG20_F {price = 400;stock = 50;};
			class arifle_TRG21_F {price = 400;stock = 50;};
			class arifle_TRG21_GL_F {price = 700;stock = 50;};
			class CUP_arifle_AK102_railed {price = 400;stock = 0;};
			class CUP_arifle_AK104_railed {price = 400;stock = 0;};
			class CUP_arifle_AK105_top_rail {price = 400;stock = 0;};
			class CUP_arifle_AK102 {price = 400;stock = 0;};
			class CUP_arifle_AK103 {price = 400;stock = 0;};
			class CUP_arifle_AK104 {price = 400;stock = 0;};
			class CUP_arifle_AK105 {price = 400;stock = 0;};
			class CUP_arifle_AK108 {price = 400;stock = 0;};
			class CUP_arifle_AK109 {price = 400;stock = 50;};
			class CUP_arifle_Fort221 {price = 400;stock = 50;};
			class CUP_arifle_Fort222 {price = 400;stock = 0;};
			class CUP_arifle_Fort224 {price = 400;stock = 0;};
			class CUP_arifle_AK74 {price = 400;stock = 0;};
		    class CUP_arifle_AK74M_top_rail_desert {price = 420;stock = 50;};
            class CUP_arifle_AKS {price = 400;stock = 50;};
			class CUP_arifle_AKMS {price = 450;stock = 50;};
			class CUP_arifle_CZ805_A2 {price = 400;stock = 50;};
            class CUP_arifle_CZ805_B {price = 450;stock = 50;};
			class CUP_arifle_FNFAL5061 {price = 480;stock = 50;};
            class CUP_arifle_FNFAL5062 {price = 480;stock = 50;};
            class CUP_arifle_FNFAL_railed {price = 480;stock = 50;};
			class CUP_arifle_G36A_camo {price = 600;stock = 50;};
			class CUP_arifle_G36C_camo {price = 400;stock = 50;};
            class CUP_arifle_G36K {price = 600;stock = 50;};
            class CUP_arifle_G36K_camo {price = 600;stock = 50;};
			class CUP_arifle_L86A2 {price = 400;stock = 50;};
			class CUP_arifle_M16A1GL {price = 400;stock = 50;};
			class CUP_arifle_M4A1_black {price = 400;stock = 50;};
            class CUP_arifle_M4A3_desert {price = 400;stock = 50;};
			class CUP_arifle_SBR_od {price = 400;stock = 50;};
			class CUP_arifle_Mk16_STD_woodland {price = 400;stock = 50;};
            class CUP_arifle_Mk16_SV {price = 400;stock = 50;};
			class CUP_arifle_Mk16_SV_black {price = 400;stock = 50;};
            class CUP_arifle_Mk17_CQC {price = 400;stock = 50;};
            class CUP_arifle_Mk17_STD {price = 400;stock = 50;};
            class CUP_arifle_Mk20 {price = 400;stock = 50;};
			class CUP_arifle_Mk20_black {price = 400;stock = 50;};
			class CUP_arifle_Sa58RIS1_des {price = 450;stock = 50;};
            class CUP_arifle_Sa58RIS2 {price = 450;stock = 50;};
            class CUP_arifle_Sa58RIS2_camo {price = 450;stock = 50;};
			class CUP_arifle_Sa58V_camo {price = 450;stock = 50;};
            class CUP_arifle_XM8_Carbine {price = 600;stock = 50;};
            class CUP_arifle_XM8_Compact {price = 400;stock = 50;};
            class CUP_arifle_XM8_Compact_Rail {price = 420;stock = 50;};
            class CUP_arifle_XM8_Railed {price = 420;stock = 50;};
            class CUP_arifle_xm8_sharpshooter {price = 400;stock = 50;};
			class CUP_arifle_X95_Grippod {price = 400;stock = 50;};
			class CUP_arifle_HK416_Desert {price = 400;stock = 50;};
			class CUP_arifle_HK416_Wood {price = 400;stock = 50;};
			class CUP_arifle_Fort224_Grippod {price = 400;stock = 50;};
			class CUP_arifle_CZ805_A2_blk {price = 400;stock = 50;};
			class CUP_arifle_AKS74U_railed {price = 420;stock = 50;};
			class CUP_arifle_XM16E1 {price = 350;stock = 50;};
			class CUP_arifle_AK47_Early {price = 350;stock = 50;};
			
		};
		
		class sniper {
			displayName = "Sniper Rifles";
			picture = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\primaryWeapon_ca.paa";
			
			class CUP_srifle_AS50 {price = 4000;stock = 1;};
            class CUP_srifle_AWM_des {price = 1700;stock = 3;};
            class CUP_srifle_AWM_wdl {price = 1700;stock = 3;};
            class CUP_srifle_CZ550 {price = 300;stock = 50;};
            class CUP_srifle_CZ750 {price = 600;stock = 50;};
            class CUP_srifle_G22_des {price = 800;stock = 50;};
            class CUP_srifle_L129A1 {price = 600;stock = 50;};
            class CUP_srifle_L129A1_HG {price = 600;stock = 50;};
            class CUP_srifle_LeeEnfield {price = 150;stock = 50;};
            class CUP_srifle_LeeEnfield_rail {price = 150;stock = 50;};
            class CUP_srifle_M107_Base {price = 5000;stock = 1;};
            class CUP_srifle_M110 {price = 600;stock = 50;};
            class CUP_srifle_M14 {price = 600;stock = 50;};
            class CUP_srifle_M14_DMR {price = 600;stock = 50;};
			class CUP_srifle_M21 {price = 600;stock = 50;};
            class CUP_srifle_M24_des {price = 600;stock = 50;};
            class CUP_srifle_M24_wdl {price = 600;stock = 50;};
            class CUP_srifle_M40A3 {price = 600;stock = 50;};
            class CUP_srifle_Mk12SPR {price = 600;stock = 50;};
            class CUP_srifle_SVD {price = 600;stock = 50;};
            class CUP_srifle_VSSVintorez {price = 2100;stock = 3;};
            class CUP_srifle_ksvk {price = 4000;stock = 1;};
			class CUP_srifle_Remington700 {price = 400;stock = 50;};
			class CUP_srifle_RSASS_Dazzle {price = 600;stock = 50;};
			class srifle_EBR_F {price = 600;stock = 50;};
			class srifle_DMR_01_F {price = 600;stock = 50;};
			class arifle_MXM_F {price = 700;stock = 50;};
			class arifle_MXM_Black_F {price = 700;stock = 50;};
			class srifle_GM6_F {price = 4000;stock = 1;};
			class srifle_LRR_F {price = 3000;stock = 2;};
			class Rusty_srifle_DMR_04_F {price = 4000;stock = 1;};
			class Rusty_srifle_DMR_02_F {price = 1700;stock = 50;};
			class Rusty_srifle_DMR_03_F {price = 1400;stock = 50;};
			class Rusty_srifle_EBR_F {price = 600;stock = 50;};
			class Rusty_DMR_05_base_F {price = 1700;stock = 50;};
			class CUP_srifle_CZ550_rail {price = 200;stock = 50;};
			class CUP_srifle_SVD_des {price = 600;stock = 50;};
			class CUP_srifle_SVD_wdl {price = 600;stock = 50;};
			
		};
		
		class lmg {
			displayName = "Light Machine Guns";
			picture = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\primaryWeapon_ca.paa";

			class CUP_lmg_L110A1 {price = 2000;stock = 50;};
            class CUP_lmg_M240_B {price = 2000;stock = 50;};
            class CUP_lmg_M60E4 {price = 2000;stock = 50;};
            class CUP_lmg_Mk48_wdl {price = 2000;stock = 50;};
            class CUP_lmg_PKM {price = 2000;stock = 50;};
			class CUP_arifle_RPK74 {price = 800;stock = 50;};
            class CUP_arifle_RPK74M {price = 800;stock = 50;};
            class CUP_lmg_m249_para {price = 2000;stock = 50;};
			class CUP_lmg_m249_pip1 {price = 2000;stock = 50;};
			class arifle_MX_SW_F {price = 800;stock = 50;};
			class arifle_MX_SW_Black_F {price = 800;stock = 50;};
			class Rusty_MMG_01_tan_F {price = 2000;stock = 50;};
			class Rusty_MMG_02_black_F {price = 2000;stock = 50;};
			class Rusty_LMG_Zafir_F {price = 2000;stock = 50;};
			class CUP_lmg_MG3 {price = 2000;stock = 50;};
			class CUP_arifle_MG36 {price = 800;stock = 50;};
            class CUP_arifle_MG36_camo {price = 800;stock = 50;};
			class CUP_lmg_L7A2 {price = 2000;stock = 50;};
			class CUP_lmg_Mk48_des {price = 2000;stock = 50;};
			class CUP_lmg_Pecheneg {price = 2000;stock = 50;};
			class CUP_lmg_minimi {price = 2000;stock = 50;};
            class CUP_lmg_minimipara {price = 2000;stock = 50;};
			class LMG_Mk200_F {price = 2000;stock = 50;};
			class LMG_Zafir_F {price = 2000;stock = 50;};
			class LMG_Mk200_black_F {price = 2000;stock = 50;};
			
		};
		
		class launchers {
			displayName = "Launchers";
			picture = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\secondaryWeapon_ca.paa";
			//CUP_Launchers
			class CUP_glaunch_6G30 {price = 3000;stock = 5;};
            class CUP_glaunch_M32 {price = 3000;stock = 5;};
            class CUP_glaunch_M79 {price = 1500;stock = 50;};
            class CUP_glaunch_Mk13 {price = 1500;stock = 50;};
            class CUP_launch_M136 {price = 4000;stock = 5;};
			class CUP_launch_MAAWS {price = 4000;stock = 5;};
            class CUP_launch_RPG18 {price = 4000;stock = 5;};
            class CUP_launch_RPG7V {price = 4000;stock = 5;};
	
		};
		
		class optic {
			displayName = "Optic Accessories";
			picture = "";

			class CUP_optic_AC11704_Black {price = 200;stock = 50;};
			class CUP_optic_Aimpoint_5000 {price = 200;stock = 50;};
			class CUP_optic_AIMM_MICROT1_BLK {price = 240;stock = 50;};
			class CUP_optic_Elcan_SpecterDR_black {price = 400;stock = 50;};
			class CUP_optic_MicroT1 {price = 200;stock = 50;};
            class CUP_optic_1P87_RIS {price = 200;stock = 50;};
			class CUP_optic_AIMM_COMPM4_BLK {price = 240;stock = 50;};
			class CUP_optic_CompM4 {price = 200;stock = 50;};
			class CUP_optic_ElcanM145 {price = 400;stock = 50;};
			class CUP_optic_Elcan_SpecterDR_KF_black {price = 400;stock = 50;};
			class CUP_optic_Elcan_SpecterDR_RMR_black {price = 400;stock = 50;};
			class CUP_optic_Elcan {price = 400;stock = 50;};
			class CUP_optic_Elcan_reflex {price = 400;stock = 50;};
			class CUP_optic_HoloBlack {price = 200;stock = 50;};
			class CUP_optic_Eotech553_Black {price = 200;stock = 50;};
			class CUP_optic_G33_HWS_BLK {price = 300;stock = 50;};
			class CUP_optic_HensoldtZO {price = 300;stock = 50;};
			class CUP_optic_HensoldtZO_RDS {price = 340;stock = 50;};
			class CUP_optic_LeupoldMk4 {price = 600;stock = 50;};
			class CUP_optic_LeupoldMk4_20x40_LRT {price = 600;stock = 50;};
			class CUP_optic_Leupold_VX3 {price = 600;stock = 50;};
			class CUP_optic_Remington {price = 50;stock = 50;};
			class CUP_optic_CompM2_low {price = 200;stock = 50;};
			class CUP_optic_MARS {price = 200;stock = 50;};
			class CUP_optic_MRad {price = 200;stock = 50;};
			class CUP_optic_ZDDot {price = 200;stock = 50;};
			class CUP_optic_SUSAT {price = 400;stock = 50;};
			class CUP_optic_ACOG_TA01B_Black {price = 400;stock = 50;};
			class CUP_optic_RCO {price = 400;stock = 50;};
			class CUP_optic_ACOG_TA01NSN_RMR_Black {price = 400;stock = 50;};
			class CUP_optic_ACOG2 {price = 400;stock = 50;};
			class CUP_optic_ACOG_TA31_KF {price = 400;stock = 50;};
			class CUP_optic_TrijiconRx01_black {price = 200;stock = 50;};
			class CUP_optic_1p63 {price = 200;stock = 50;};
			class CUP_optic_ekp_8_02 {price = 150;stock = 50;};
			class CUP_optic_Kobra {price = 200;stock = 50;};
			class CUP_optic_PechenegScope {price = 150;stock = 50;};
			class CUP_optic_PSO_1_1 {price = 600;stock = 50;};
			class CUP_optic_AN_PAS_13c1 {price = 1200;stock = 1;};
			class optic_Aco {price = 200;stock = 50;};
			class optic_Arco {price = 400;stock = 50;};
			class optic_DMS {price = 600;stock = 50;};
			class optic_Hamr {price = 450;stock = 50;};
			class optic_Holosight {price = 200;stock = 50;};
			class optic_Holosight_smg {price = 200;stock = 50;};
			class optic_SOS {price = 500;stock = 50;};
			class optic_Yorris {price = 200;stock = 50;};
			class optic_MRD {price = 200;stock = 50;};
			class optic_NVS{price = 1800;stock = 50;};
			class optic_LRPS {price = 600;stock = 50;};
			class CUP_optic_AC11704_Coyote {price = 200;stock = 50;};
			class CUP_optic_AC11704_Jungle {price = 200;stock = 50;};
			class CUP_optic_AC11704_OD {price = 200;stock = 50;};
			class CUP_optic_AC11704_Tan {price = 200;stock = 50;};
			class CUP_optic_AIMM_MICROT1_TAN {price = 240;stock = 50;};
			class CUP_optic_AIMM_MICROT1_OD {price = 240;stock = 50;};
			class CUP_optic_Elcan_SpecterDR_coyote {price = 260;stock = 50;};
			class CUP_optic_MicroT1_coyote {price = 200;stock = 50;};
			class CUP_optic_MicroT1_OD {price = 200;stock = 50;};
			class CUP_optic_1P87_RIS_desert {price = 200;stock = 50;};
			class CUP_optic_1P87_RIS_woodland {price = 200;stock = 50;};	
			class CUP_optic_Elcan_SpecterDR_KF_coyote {price = 240;stock = 50;};
			class CUP_optic_Elcan_SpecterDR_KF_od {price = 240;stock = 50;};
			class CUP_optic_Elcan_SpecterDR_KF {price = 240;stock = 50;};
			class CUP_optic_Elcan_Coyote {price = 260;stock = 50;};
			class CUP_optic_Elcan_OD {price = 260;stock = 50;};
			class CUP_optic_Elcan_reflex_Coyote {price = 240;stock = 50;};
			class CUP_optic_Elcan_reflex_OD {price = 240;stock = 50;};
			class CUP_optic_HoloDesert {price = 200;stock = 50;};
			class CUP_optic_HoloWdl {price = 200;stock = 50;};
			class CUP_optic_Eotech553_Coyote {price = 200;stock = 50;};
			class CUP_optic_Eotech553_OD {price = 200;stock = 50;};
			class CUP_optic_Eotech533 {price = 200;stock = 50;};
			class CUP_optic_G33_HWS_COYOTE {price = 240;stock = 50;};
			class CUP_optic_G33_HWS_TAN {price = 240;stock = 50;};
			class CUP_optic_G33_HWS_OD {price = 240;stock = 50;};
			class CUP_optic_HensoldtZO_coyote {price = 200;stock = 50;};
			class CUP_optic_HensoldtZO_desert {price = 200;stock = 50;};
			class CUP_optic_HensoldtZO_hex {price = 200;stock = 50;};
			class CUP_optic_HensoldtZO_low {price = 200;stock = 50;};
			class CUP_optic_HensoldtZO_od {price = 200;stock = 50;};
			class CUP_optic_HensoldtZO_RDS_coyote {price = 240;stock = 50;};
			class CUP_optic_HensoldtZO_RDS_desert {price = 240;stock = 50;};
			class CUP_optic_HensoldtZO_RDS_hex {price = 240;stock = 50;};
			class CUP_optic_HensoldtZO_RDS_od {price = 240;stock = 50;};
			class CUP_optic_LeupoldMk4_10x40_LRT_Desert {price = 600;stock = 50;};
			class CUP_optic_LeupoldMk4_10x40_LRT_Woodland {price = 600;stock = 50;};
			class CUP_optic_LeupoldMk4_10x40_LRT_tan {price = 600;stock = 50;};
			class CUP_optic_LeupoldM3LR {price = 600;stock = 50;};
			class CUP_optic_LeupoldMk4_25x50_LRT_DESERT {price = 600;stock = 50;};
			class CUP_optic_LeupoldMk4_25x50_LRT_SNOW {price = 600;stock = 50;};
			class CUP_optic_LeupoldMk4_25x50_LRT_WOODLAND {price = 600;stock = 50;};
			class CUP_optic_LeupoldMk4_CQ_T {price = 600;stock = 50;};
			class CUP_optic_MARS_OD {price = 200;stock = 50;};
			class CUP_optic_MARS_tan {price = 200;stock = 50;};
			class CUP_optic_AIMM_MARS_BLK {price = 200;stock = 50;};
			class CUP_optic_AIMM_MARS_TAN {price = 200;stock = 50;};
			class CUP_optic_AIMM_MARS_OD {price = 200;stock = 50;};
			class CUP_optic_ACOG_TA01B_Coyote {price = 400;stock = 50;};
			class CUP_optic_ACOG_TA01B_OD {price = 400;stock = 50;};
			class CUP_optic_ACOG_TA01B_Tan {price = 400;stock = 50;};
			class CUP_optic_ACOG_TA01B_Tropic {price = 400;stock = 50;};
			class CUP_optic_RCO_desert {price = 400;stock = 50;};
			class CUP_optic_ACOG_TA01NSN_OD {price = 400;stock = 50;};
			class CUP_optic_ACOG_TA01NSN_RMR_Coyote {price = 400;stock = 50;};
			class CUP_optic_ACOG_TA01NSN_RMR_OD {price = 400;stock = 50;};
			class CUP_optic_ACOG_TA01NSN_RMR_Tan {price = 400;stock = 50;};
			class CUP_optic_ACOG_TA01NSN_RMR_Tropic {price = 400;stock = 50;};
			class CUP_optic_ACOG_TA31_KF_Desert {price = 400;stock = 50;};
			class CUP_optic_ACOG_TA31_KF_Wood {price = 400;stock = 50;};
			class CUP_optic_ACOG {price = 400;stock = 50;};
			class CUP_optic_ACOG_Reflex_Desert {price = 400;stock = 50;};
			class CUP_optic_ACOG_Reflex_Wood {price = 400;stock = 50;};
			class CUP_optic_TrijiconRx01_desert {price = 200;stock = 50;};
			class CUP_optic_TrijiconRx01_od {price = 200;stock = 50;};
			class CUP_optic_TrijiconRx01_kf_black {price = 200;stock = 50;};
			class CUP_optic_TrijiconRx01_kf_desert {price = 200;stock = 50;};
			class CUP_optic_TrijiconRx01_kf_od {price = 200;stock = 50;};
			class CUP_optic_PSO_1_1_open {price = 600;stock = 50;};
			class CUP_optic_PSO_1 {price = 600;stock = 50;};
			class CUP_optic_PSO_1_AK {price = 600;stock = 50;};
			class CUP_optic_PSO_1_AK_open {price = 600;stock = 50;};
			class CUP_optic_PSO_1_open {price = 600;stock = 50;};
			class CUP_optic_PSO_3 {price = 600;stock = 50;};
			class CUP_optic_PSO_3_open {price = 600;stock = 50;};
			class optic_ACO_grn {price = 200;stock = 50;};
			class optic_ACO_grn_smg {price = 200;stock = 50;};
			class optic_Aco_smg {price = 200;stock = 50;};
			
		};
		
		class pointer {
			displayName = "Pointer Accessories";
			picture = "";

			class acc_flashlight {price = 125;stock = 50;};
			class acc_flashlight_smg_01 {price = 125;stock = 50;};
			class acc_pointer_IR {price = 200;stock = 50;};
			class acc_flashlight_pistol {price = 125;stock = 50;};
			class CUP_acc_CZ_M3X {price = 125;stock = 50;};
            class CUP_acc_Glock17_Flashlight {price = 125;stock = 50;};
            class CUP_acc_MLPLS_Laser {price = 125;stock = 50;};
            class CUP_acc_mk23_lam_f {price = 100;stock = 50;};
            class CUP_acc_ANPEQ_15_OD {price = 200;stock = 50;};
            class CUP_acc_ANPEQ_15 {price = 200;stock = 50;};
            class CUP_acc_ANPEQ_15_Top_Flashlight_Black_L {price = 250;stock = 50;};
            class CUP_acc_ANPEQ_2_camo {price = 200;stock = 50;};
            class CUP_acc_Flashlight {price = 125;stock = 50;};
            class CUP_acc_LLM01_L {price = 250;stock = 50;};
            class CUP_acc_LLM {price = 125;stock = 50;};
            class CUP_acc_XM8_light_module {price = 50;stock = 50;};
            class CUP_Mxx_camo {price = 100;stock = 50;};
            class CUP_SVD_camo_g {price = 150;stock = 50;};
            class CUP_SVD_camo_d {price = 150;stock = 50;};
            class CUP_SVD_camo_d_half {price = 150;stock = 50;};
			class CUP_acc_ANPEQ_15_OD_Top {price = 200;stock = 50;};
            class CUP_acc_ANPEQ_15_Tan_Top {price = 200;stock = 50;};
            class CUP_acc_ANPEQ_15_Black_Top {price = 200;stock = 50;};
            class CUP_acc_ANPEQ_15_Black {price = 200;stock = 50;};
            class CUP_acc_ANPEQ_15_Flashlight_OD_L {price = 250;stock = 50;};
            class CUP_acc_ANPEQ_15_Flashlight_Tan_L {price = 250;stock = 50;};
            class CUP_acc_ANPEQ_15_Top_Flashlight_OD_L {price = 250;stock = 50;};
            class CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L {price = 250;stock = 50;};
			class CUP_acc_ANPEQ_15_Flashlight_Black_L {price = 250;stock = 50;};
			class CUP_acc_ANPEQ_2_desert {price = 200;stock = 50;};
            class CUP_acc_ANPEQ_2_OD_Top {price = 200;stock = 50;};
            class CUP_acc_ANPEQ_2_Coyote_Top {price = 200;stock = 50;};
            class CUP_acc_ANPEQ_2_Black_Top {price = 200;stock = 50;};
            class CUP_acc_ANPEQ_2_grey {price = 200;stock = 50;};
            class CUP_acc_ANPEQ_2_Flashlight_OD_L {price = 250;stock = 50;};
            class CUP_acc_ANPEQ_2_Flashlight_Coyote_L {price = 250;stock = 50;};
            class CUP_acc_ANPEQ_2_Flashlight_Black_L {price = 250;stock = 50;};
			class CUP_acc_Flashlight_desert {price = 125;stock = 50;};
            class CUP_acc_Flashlight_wdl {price = 125;stock = 50;};
			class CUP_acc_LLM01_od_L {price = 250;stock = 50;};
            class CUP_acc_LLM01_hex_L {price = 250;stock = 50;};
            class CUP_acc_LLM01_coyote_L {price = 250;stock = 50;};
            class CUP_acc_LLM01_desert_L {price = 250;stock = 50;};
			class CUP_acc_LLM_od {price = 125;stock = 50;};
            class CUP_acc_LLM_black {price = 125;stock = 50;};
			class CUP_Mxx_camo_half {price = 100;stock = 50;};
		    class CUP_SVD_camo_g_half {price = 150;stock = 50;};
			
        };
		
		class muzzle {
			displayName = "Muzzle Accessories";
			picture = "";

			class CUP_muzzle_mfsup_Flashhider_556x45_Black {price = 500;stock = 50;};
			class CUP_muzzle_mfsup_Flashhider_762x39_Black {price = 500;stock = 50;};
			class CUP_muzzle_mfsup_Flashhider_762x51_Black {price = 500;stock = 50;};
			class CUP_muzzle_snds_AWM {price = 800;stock = 50;};
			class CUP_muzzle_snds_M16 {price = 800;stock = 50;};
			class CUP_muzzle_PB6P9 {price = 800;stock = 50;};
			class CUP_muzzle_snds_M9 {price = 800;stock = 50;};
            class CUP_muzzle_snds_SR3M {price = 800;stock = 50;};
            class CUP_muzzle_snds_mk23 {price = 800;stock = 50;};
			class CUP_muzzle_snds_Mk12 {price = 800;stock = 50;};
			class CUP_muzzle_snds_KZRZP_AK545 {price = 800;stock = 50;};
			class CUP_muzzle_snds_KZRZP_AK762 {price = 800;stock = 50;};
			class CUP_muzzle_Bizon {price = 800;stock = 50;};
			class CUP_muzzle_PBS4 {price = 800;stock = 50;};
			class CUP_snds_MP7 {price = 800;stock = 50;};
			class CUP_muzzle_TGPA {price = 800;stock = 50;};
			class muzzle_snds_acp {price = 800;stock = 50;};
			class muzzle_snds_B {price = 800;stock = 50;};
			class muzzle_snds_H_MG {price = 800;stock = 50;};
			class muzzle_snds_L {price = 800;stock = 50;};
			class muzzle_snds_M {price = 800;stock = 50;};
			class CUP_muzzle_mfsup_Flashhider_556x45_OD {price = 400;stock = 50;};
			class CUP_muzzle_mfsup_Flashhider_556x45_Tan {price = 400;stock = 50;};
			class CUP_muzzle_mfsup_Flashhider_762x39_OD {price = 400;stock = 50;};
			class CUP_muzzle_mfsup_Flashhider_762x39_Tan {price = 400;stock = 50;};
			class CUP_muzzle_mfsup_Flashhider_762x51_OD {price = 400;stock = 50;};
			class CUP_muzzle_mfsup_Flashhider_762x51_Tan {price = 400;stock = 50;};
		
		};
		
		class underbarrel {
			displayName = "Underbarrel Accessories";
			picture = "";

			class CUP_bipod_Harris_1A2_L {price = 150;stock = 50;};
			class CUP_Bipod_G36 {price = 150;stock = 50;};
		    class CUP_Bipod_FNFAL {price = 150;stock = 50;};
		    class CUP_Bipod_VLTOR_Modpod {price = 150;stock = 50;};
			class CUP_bipod_Harris_1A2_L_BLK {price = 150;stock = 50;};
			class CUP_Bipod_G36_desert {price = 150;stock = 50;};
		    class CUP_Bipod_G36_wood {price = 150;stock = 50;};
			class CUP_Bipod_VLTOR_Modpod_black {price = 150;stock = 50;};
		    class CUP_Bipod_VLTOR_Modpod_od {price = 150;stock = 50;};
		
		};

		
		class apexguns {
			displayName = "Apex DLC Guns";
			picture = "";

			class arifle_AK12_F {price = 400;stock = 50;};
			class arifle_AK12_lush_F {price = 400;stock = 50;};
		    class arifle_ARX_blk_F {price = 600;stock = 50;};
		    class arifle_ARX_hex_F {price = 600;stock = 50;};
			class arifle_CTAR_blk_F {price = 400;stock = 50;};
			class arifle_CTAR_ghex_F {price = 400;stock = 50;};
		    class arifle_SPAR_01_blk_F {price = 400;stock = 50;};
			class arifle_SPAR_01_snd_F {price = 400;stock = 50;};
			class arifle_SPAR_03_blk_F {price = 600;stock = 50;};
			class arifle_SPAR_03_snd_F {price = 600;stock = 50;};
		    class SMG_05_F {price = 300;stock = 50;};
		
		};
		
		class contactguns {
			displayName = "Contact DLC Guns";
			picture = "";

			class arifle_MSBS65_F {price = 400;stock = 50;};
			class arifle_MSBS65_black_F {price = 400;stock = 50;};
		    class arifle_MSBS65_GL_F {price = 600;stock = 50;};
		    class arifle_MSBS65_UBS_F {price = 500;stock = 50;};
			class sgun_HunterShotgun_01_F {price = 100;stock = 50;};
			class sgun_HunterShotgun_01_sawedoff_F {price = 100;stock = 50;};
			class optic_ico_01_black_f {price = 125;stock = 50;};
			class optic_ico_01_f {price = 125;stock = 50;};

		};
		
		class marksmenguns {
			displayName = "Marksmen DLC Guns";
			picture = "";

			class srifle_DMR_02_F {price = 1000;stock = 50;};
			class srifle_DMR_02_camo_F {price = 1000;stock = 50;};
		    class srifle_DMR_03_F {price = 600;stock = 50;};
		    class srifle_DMR_03_woodland_F {price = 600;stock = 50;};
			class srifle_DMR_05_blk_F {price = 1000;stock = 50;};
			class srifle_DMR_05_hex_F {price = 1000;stock = 50;};
			class srifle_DMR_06_camo_F {price = 600;stock = 50;};
			class srifle_DMR_06_hunter_F {price = 600;stock = 50;};
			class srifle_DMR_06_olive_F {price = 600;stock = 50;};
			class srifle_DMR_07_blk_F {price = 600;stock = 50;};
			class srifle_DMR_07_ghex_F {price = 600;stock = 50;};

		};
		
				class niarms {
			displayName = "NiArms Guns";
			picture = "";

			class hlc_rifle_RU556 {price = 400;stock = 50;};
			class hlc_rifle_RU5562 {price = 400;stock = 50;};
			class hlc_rifle_M4 {price = 400;stock = 50;};
			class hlc_rifle_Bushmaster300 {price = 500;stock = 50;};
			class hlc_rifle_vendimus {price = 450;stock = 50;};
			class hlc_rifle_honeybase {price = 400;stock = 50;};
			class hlc_rifle_cqbr {price = 400;stock = 50;};
			class hlc_rifle_bcmblackjack {price = 450;stock = 50;};
			class hlc_rifle_mk18mod0 {price = 400;stock = 50;};
			class hlc_rifle_ak47 {price = 450;stock = 50;};
			class hlc_rifle_ak74 {price = 450;stock = 50;};
			class hlc_rifle_aks74 {price = 450;stock = 50;};
			class hlc_rifle_aks74_MTK {price = 450;stock = 50;};
			class hlc_rifle_aks74u_MTK {price = 450;stock = 50;};
			class hlc_rifle_akm {price = 450;stock = 50;};
			class hlc_rifle_akm_MTK {price = 450;stock = 50;};
			class hlc_rifle_ak12 {price = 450;stock = 50;};
			class hlc_rifle_aek971 {price = 450;stock = 50;};
			class hlc_rifle_aek971_mtk {price = 450;stock = 50;};
			class hlc_rifle_ak74m {price = 450;stock = 50;};
			class hlc_rifle_ak74m_MTK {price = 450;stock = 50;};
			class hlc_rifle_SAMR {price = 600;stock = 50;};
			class hlc_rifle_rpk12 {price = 800;stock = 50;};
			class hlc_smg_mp5k_PDW {price = 300;stock = 50;};
			class hlc_rifle_hk53RAS {price = 400;stock = 50;};
			class hlc_smg_mp5a2 {price = 300;stock = 50;};
			class hlc_smg_mp5a3 {price = 300;stock = 50;};
			class hlc_smg_mp5a4 {price = 300;stock = 50;};
			class hlc_smg_mp5sd5 {price = 300;stock = 50;};
			class hlc_smg_mp5sd6 {price = 300;stock = 50;};
			class hlc_rifle_G36A1 {price = 400;stock = 50;};
			class hlc_rifle_G36C {price = 400;stock = 50;};
			class hlc_rifle_G36KA1 {price = 400;stock = 50;};
			class hlc_rifle_G36KV {price = 400;stock = 50;};
			class hlc_rifle_auga1_t {price = 400;stock = 50;};
			class hlc_rifle_auga1_B {price = 400;stock = 50;};
			class hlc_rifle_auga1carb {price = 400;stock = 50;};
			class hlc_rifle_auga3 {price = 400;stock = 50;};
			class hlc_rifle_auga3_b {price = 400;stock = 50;};
			class hlc_rifle_auga3_bl {price = 400;stock = 50;};
			class hlc_rifle_auga2carb {price = 400;stock = 50;};
			class hlc_rifle_auga2para {price = 300;stock = 50;};
			class hlc_rifle_SG550 {price = 400;stock = 50;};
			class hlc_rifle_SG550_RIS {price = 400;stock = 50;};
			class hlc_rifle_SG550_TAC {price = 400;stock = 50;};
			class hlc_rifle_SG551SB {price = 400;stock = 50;};
			class hlc_rifle_SG551SB_RIS {price = 400;stock = 50;};
			class hlc_rifle_SG551SB_TAC {price = 400;stock = 50;};
			class hlc_rifle_416D145 {price = 400;stock = 50;};
			class hlc_rifle_416D145_tan {price = 400;stock = 50;};
			class hlc_rifle_416D145_wdl {price = 400;stock = 50;};
			class hlc_rifle_416D145_CAG {price = 400;stock = 50;};
			class hlc_rifle_416D145C {price = 400;stock = 50;};
			class hlc_rifle_416C {price = 400;stock = 50;};
			class hlc_rifle_M27IAR {price = 400;stock = 50;};
			class hlc_rifle_416D165 {price = 400;stock = 50;};
			class hlc_rifle_416D165_tan {price = 400;stock = 50;};
			class hlc_rifle_416D165_wdl {price = 400;stock = 50;};
			class hlc_rifle_416D165C {price = 400;stock = 50;};
			class hlc_rifle_M14 {price = 600;stock = 50;};
			class hlc_rifle_M21 {price = 600;stock = 50;};
			class hlc_rifle_M14DMR {price = 600;stock = 50;};
			class hlc_rifle_m14sopmod {price = 600;stock = 50;};
			class hlc_rifle_ACR68_SBR_tan {price = 400;stock = 50;};
			class hlc_rifle_ACR68_SBR_black {price = 400;stock = 50;};
			class hlc_rifle_ACR68_SBR_green {price = 400;stock = 50;};
			class hlc_rifle_ACR68_Carb_black {price = 400;stock = 50;};
			class hlc_rifle_ACR68_Carb_tan {price = 400;stock = 50;};
			class hlc_rifle_ACR68_Carb_green {price = 400;stock = 50;};
			class hlc_rifle_ACR68_full_black {price = 400;stock = 50;};
			class hlc_rifle_ACR68_full_tan {price = 400;stock = 50;};
			class hlc_rifle_ACR68_full_green {price = 400;stock = 50;};
			class hlc_rifle_ACR_full_black {price = 400;stock = 50;};
			class hlc_rifle_ACR_full_tan {price = 400;stock = 50;};
			class hlc_rifle_ACR_full_green {price = 400;stock = 50;};
			class hlc_rifle_ACR_Carb_black {price = 400;stock = 50;};
			class hlc_rifle_ACR_Carb_tan {price = 400;stock = 50;};
			class hlc_rifle_ACR_Carb_green {price = 400;stock = 50;};
			class hlc_wp_MK17 {price = 450;stock = 50;};
			class hlc_wp_Mk17_camo {price = 450;stock = 50;};
			class hlc_wp_MK17IUR_556 {price = 400;stock = 50;};
			class hlc_wp_MK17IUR_556_camo {price = 400;stock = 50;};
			class hlc_wp_SCARL_STD {price = 400;stock = 50;};
			class hlc_wp_SCARL_STD_300AAC_SRX_Blk {price = 400;stock = 50;};
			class hlc_wp_SCARL_STD_camo_grip {price = 400;stock = 50;};
			class hlc_wp_SCARL_STD_Blk_grip {price = 400;stock = 50;};
			class hlc_wp_SSR_Blk_grip {price = 400;stock = 50;};
			class hlc_wp_SCARH_STD_Blk_grip {price = 400;stock = 50;};
			class hlc_wp_SCARH_STD_grip {price = 400;stock = 50;};
			class hlc_wp_SCARH_STD_camo_grip {price = 400;stock = 50;};
			class hlc_rifle_M1903A1 {price = 150;stock = 50;};
			class hlc_rifle_M1903A1_unertl {price = 300;stock = 50;};
			class hlc_rifle_awcovert {price = 1400;stock = 50;};
			class hlc_rifle_awcovert_BL {price = 1400;stock = 50;};
			class hlc_rifle_awmagnum {price = 1400;stock = 50;};
			class hlc_rifle_awmagnum_BL {price = 1600;stock = 50;};
			class hlc_rifle_awMagnum_BL_ghillie {price = 1700;stock = 50;};
			class hlc_rifle_FN3011 {price = 600;stock = 50;};
			class hlc_rifle_FN3011_WDL {price = 600;stock = 50;};
			class hlc_rifle_FN3011Modern {price = 600;stock = 50;};
			class hlc_rifle_FN3011Modern_camo {price = 600;stock = 50;};
			class hlc_rifle_FN3011Lynx {price = 600;stock = 50;};
			class hlc_rifle_FN3011Tactical {price = 600;stock = 50;};
			class hlc_rifle_FN3011Tactical_grey {price = 600;stock = 50;};
			class hlc_rifle_FN3011Tactical_green {price = 600;stock = 50;};
			class hlc_pistol_P226US {price = 150;stock = 50;};
			class hlc_pistol_P226R_Elite {price = 150;stock = 50;};
			class hlc_pistol_Mk25 {price = 150;stock = 50;};
			class hlc_pistol_Mk25D {price = 150;stock = 50;};
			class hlc_Pistol_M11 {price = 150;stock = 50;};
			class hlc_Pistol_M11A1 {price = 150;stock = 50;};
			class hlc_pistol_P229R_40Elite {price = 300;stock = 50;};
			class hlc_pistol_C96_Wartime {price = 75;stock = 50;};
			class hlc_pistol_C96_Wartime_stock {price = 75;stock = 50;};
			class hlc_muzzle_556NATO_KAC {price = 800;stock = 50;};
			class muzzle_HBADGER {price = 800;stock = 50;};
			class hlc_muzzle_300blk_KAC {price = 800;stock = 50;};
			class hlc_29rnd_300BLK_STANAG {price = 200;stock = 50;};
			class hlc_50rnd_300BLK_STANAG_EPR {price = 300;stock = 50;};
			class hlc_30rnd_556x45_EPR {price = 150;stock = 50;};
			class hlc_50rnd_556x45_EPR {price = 250;stock = 50;};
			class hlc_30Rnd_545x39_B_AK {price = 175;stock = 50;};
			class hlc_30Rnd_762x39_b_ak {price = 200;stock = 50;};
			class hlc_45Rnd_545x39_t_rpk {price = 200;stock = 50;};
			class hlc_45Rnd_762x39_t_rpk {price = 225;stock = 50;};
			class hlc_10rnd_12g_buck_S12 {price = 150;stock = 50;};
			class hlc_10rnd_12g_slug_S12 {price = 200;stock = 50;};
			class hlc_30Rnd_9x19_B_MP5 {price = 100;stock = 50;};
			class hlc_30Rnd_9x19_SD_MP5 {price = 100;stock = 50;};
			class hlc_30Rnd_10mm_B_MP5 {price = 100;stock = 50;};
			class hlc_30rnd_556x45_b_HK33 {price = 150;stock = 50;};
			class hlc_20Rnd_762x51_B_SCARH_Tan {price = 175;stock = 50;};
			class HLC_optic_DocterR {price = 100;stock = 50;};
			class HLC_optic_Aimpoint5000 {price = 100;stock = 50;};
			class hlc_optic_HensoldtZO_Hi_2D {price = 200;stock = 50;};
			class hlc_optic_HensoldtZO_Hi {price = 200;stock = 50;};
			class hlc_optic_HensoldtZO_lo_Docter_2D {price = 200;stock = 50;};
			class hlc_optic_ATACR {price = 600;stock = 50;};
			class HLC_Optic_G36dualoptic35x {price = 100;stock = 50;};
			class HLC_Optic_G36Export35x {price = 100;stock = 50;};
			class HLC_Optic_G36Dualoptic15x {price = 100;stock = 50;};
			class HLC_Optic_G36Export15x {price = 100;stock = 50;};
			class hlc_30Rnd_556x45_B_AUG {price = 150;stock = 50;};
			class hlc_40Rnd_556x45_B_AUG {price = 175;stock = 50;};
			class hlc_25Rnd_9x19mm_M882_AUG {price = 125;stock = 50;};
			class hlc_30Rnd_556x45_SPR_AUG {price = 175;stock = 50;};
			class hlc_40Rnd_556x45_SPR_AUG {price = 200;stock = 50;};
			class hlc_25Rnd_9x19mm_JHP_AUG {price = 150;stock = 50;};
			class hlc_30Rnd_556x45_EPR_sg550 {price = 150;stock = 50;};
			class hlc_30Rnd_556x45_SOST_sg550 {price = 150;stock = 50;};
			class hlc_30Rnd_556x45_T_sg550 {price = 175;stock = 50;};
			class hlc_optic_artel_m14 {price = 600;stock = 50;};
			class hlc_optic_LRT_m14 {price = 600;stock = 50;};
			class hlc_20Rnd_762x51_B_M14 {price = 175;stock = 50;};
			class hlc_30rnd_68x43_FMJ {price = 150;stock = 50;};
			class hlc_30rnd_68x43_OTM {price = 175;stock = 50;};
			class hlc_15Rnd_9x19_B_P226 {price = 75;stock = 50;};
			class hlc_15Rnd_9x19_JHP_P226 {price = 100;stock = 50;};
			class hlc_15Rnd_9x19_SD_P226 {price = 100;stock = 50;};
			class hlc_12Rnd_40SW_B_P226 {price = 150;stock = 50;};
			class hlc_12Rnd_40SW_JHP_P226 {price = 175;stock = 50;};
			class hlc_10Rnd_763x25_B_C96 {price = 50;stock = 50;};
			class hlc_5rnd_3006_1903 {price = 75;stock = 50;};
			class hlc_5rnd_300WM_FMJ_AWM {price = 400;stock = 50;};
			class hlc_5rnd_300WM_AP_AWM {price = 500;stock = 50;};
			class hlc_10Rnd_762x51_B_fal {price = 175;stock = 50;};
			class hlc_10Rnd_762x51_mk316_fal {price = 175;stock = 50;};
			class hlc_optic_FNSTANAG4X {price = 300;stock = 50;};
			class hlc_optic_ZF95_3011 {price = 400;stock = 50;};
			class hlc_optic_LeupoldM3A_3011 {price = 600;stock = 50;};
		
		};
		
		class rhsguns {
			displayName = "RHS Guns";
			picture = "";

			class rhs_weap_hk416d145 {price = 400;stock = 50;};
			class rhs_weap_M107 {price = 4000;stock = 1;};
			class rhs_weap_m14_ris {price = 800;stock = 50;};
			class rhs_weap_m14ebrri {price = 800;stock = 50;};
			class rhs_weap_m16a4_carryhandle {price = 400;stock = 50;};
			class rhs_weap_m16a4_carryhandle_M203 {price = 400;stock = 50;};
			class rhs_weap_XM2010 {price = 1200;stock = 50;};
			class rhs_weap_m24sws {price = 800;stock = 50;};
			class rhs_weap_m24sws_d {price = 800;stock = 50;};
			class rhs_weap_m240B {price = 2000;stock = 50;};
			class rhs_weap_m249_pip {price = 2000;stock = 50;};
			class rhs_weap_m27iar {price = 400;stock = 50;};
			class rhs_weap_m40a5 {price = 800;stock = 50;};
			class rhs_weap_m4a1_blockII {price = 400;stock = 50;};
			class rhs_weap_m4a1_blockII_M203_bk {price = 600;stock = 50;};
			class rhs_weap_m4a1_blockII_M203_d {price = 600;stock = 50;};
			class rhs_weap_m4a1_blockII_M203_wd {price = 600;stock = 50;};
			class rhs_weap_M590_8RD {price = 400;stock = 50;};
			class rhs_weap_sr25 {price = 800;stock = 50;};
			class rhs_weap_mk18 {price = 400;stock = 50;};
			class rhs_weap_mk18_d {price = 400;stock = 50;};
			class rhs_weap_mk18_wd {price = 400;stock = 50;};
			class rhsusf_weap_MP7A2 {price = 300;stock = 50;};
			class rhs_weap_Izh18 {price = 80;stock = 50;};
			class rhs_weap_kar98k {price = 150;stock = 50;};
			class rhs_weap_l1a1 {price = 600;stock = 50;};
			class rhs_weap_m1garand_sa43 {price = 150;stock = 50;};
			class rhs_weap_m21a {price = 400;stock = 50;};
			class rhs_weap_m38 {price = 150;stock = 50;};
			class rhs_weap_m38_rail {price = 200;stock = 50;};
			class rhs_weap_vhsd2 {price = 400;stock = 50;};
			class rhs_weap_savz58p {price = 400;stock = 50;};
			class rhs_mag_30Rnd_556x45_M855A1_Stanag {price = 100;stock = 100;};
			class rhsusf_mag_10Rnd_STD_50BMG_M33 {price = 1000;stock = 10;};
			class rhsusf_20Rnd_762x51_m80_Mag {price = 200;stock = 100;};
			class rhsusf_5Rnd_300winmag_xm2010 {price = 400;stock = 100;};
			class rhsusf_5Rnd_762x51_m118_special_Mag {price = 200;stock = 100;};
			class rhsusf_5Rnd_762x51_m993_Mag {price = 300;stock = 100;};
			class rhsusf_100Rnd_762x51 {price = 500;stock = 100;};
			class rhsusf_200Rnd_556x45_box {price = 600;stock = 100;};
			class rhsusf_5Rnd_762x51_AICS_m118_special_Mag {price = 200;stock = 100;};
			class rhsusf_8Rnd_00Buck {price = 100;stock = 100;};
			class rhsusf_8Rnd_Slug {price = 130;stock = 100;};
			class rhsusf_8Rnd_HE {price = 200;stock = 100;};
			class rhsusf_20Rnd_762x51_SR25_m118_special_Mag {price = 200;stock = 100;};
			class rhsusf_20Rnd_762x51_SR25_m993_Mag {price = 300;stock = 100;};
			class rhsusf_mag_40Rnd_46x30_FMJ {price = 75;stock = 100;};
			class rhsusf_mag_40Rnd_46x30_AP {price = 150;stock = 100;};
			class rhsgref_1Rnd_00Buck {price = 20;stock = 100;};
			class rhsgref_1Rnd_Slug {price = 30;stock = 100;};
			class rhsgref_5Rnd_792x57_kar98k {price = 50;stock = 100;};
			class rhs_mag_20Rnd_762x51_m80_fnfal {price = 200;stock = 100;};
			class rhsgref_8Rnd_762x63_M2B_M1rifle {price = 50;stock = 100;};
			class rhsgref_30rnd_556x45_m21 {price = 100;stock = 100;};
			class rhsgref_5Rnd_762x54_m38 {price = 50;stock = 100;};
			class rhsgref_30rnd_556x45_vhs2 {price = 100;stock = 100;};
			class rhs_30Rnd_762x39mm_Savz58 {price = 125;stock = 100;};
			class rhsusf_acc_ACOG2_USMC {price = 200;stock = 100;};
			class rhsusf_acc_ACOG_USMC {price = 200;stock = 50;};
			class rhsusf_acc_ACOG_RMR {price = 200;stock = 100;};
			class rhsusf_acc_g33_xps3 {price = 100;stock = 100;};
			class rhsusf_acc_ELCAN {price = 200;stock = 100;};
			class rhsusf_acc_eotech_552 {price = 100;stock = 100;};
			class rhsusf_acc_compm4 {price = 100;stock = 100;};
			class rhsusf_acc_M8541 {price = 250;stock = 100;};
			class rhsusf_acc_premier_anpvs27 {price = 400;stock = 100;};
			class rhsusf_acc_premier {price = 250;stock = 100;};
			class rhsusf_acc_mrds {price = 100;stock = 100;};
			class rhsusf_acc_nxs_3515x50_md {price = 250;stock = 100;};
			class rhsusf_acc_nxs_5522x56_md {price = 250;stock = 100;};
			class rhsusf_acc_RX01_NoFilter {price = 100;stock = 100;};
			class rhs_acc_1p29 {price = 100;stock = 100;};
			class rhs_acc_1p63 {price = 100;stock = 100;};
			class rhs_acc_nita {price = 100;stock = 100;};
			class rhs_acc_ekp1 {price = 100;stock = 100;};
			class rhs_acc_ekp8_02 {price = 100;stock = 100;};
			class rhs_acc_okp7_dovetail {price = 100;stock = 100;};
			class rhs_acc_pgo7v {price = 250;stock = 100;};
			class rhs_acc_pkas {price = 250;stock = 100;};
			class rhs_acc_pso1m21_ak {price = 250;stock = 100;};
			class rhsusf_acc_nt4_black {price = 800;stock = 100;};
			class rhsusf_acc_m24_silencer_black {price = 800;stock = 100;};
			class rhsusf_acc_M2010S {price = 800;stock = 100;};
			class rhsusf_acc_SR25S {price = 800;stock = 100;};
			class rhsusf_acc_rotex_mp7 {price = 800;stock = 100;};
			class rhsusf_acc_aac_762sd_silencer {price = 800;stock = 100;};
			class rhs_acc_tgpa {price = 800;stock = 100;};
			class rhs_acc_tgpv {price = 800;stock = 100;};
			class rhs_acc_pbs1 {price = 800;stock = 100;};
		
		};
		
		class ammo {
			displayName = "Ammo and Explosives";
			picture = "";

            class 6Rnd_45ACP_Cylinder {price = 60;stock = 100;};
            class 9Rnd_45ACP_Mag {price = 75;stock = 100;};
            class 11Rnd_45ACP_Mag {price = 50;stock = 100;};
			class 30Rnd_9x21_Mag {price = 70;stock = 100;};
            class 10Rnd_9x21_Mag {price = 75;stock = 100;};
			class CUP_8Rnd_9x18_Makarov_M {price = 25;stock = 100;};
            class CUP_8Rnd_9x18_MakarovSD_M {price = 30;stock = 100;};
            class CUP_6Rnd_45ACP_M {price = 40;stock = 100;};
            class CUP_17Rnd_9x19_glock17 {price = 70;stock = 100;};
            class CUP_7Rnd_45ACP_1911 {price = 40;stock = 100;};
            class CUP_10Rnd_9x19_Compact {price = 75;stock = 100;};
            class CUP_18Rnd_9x19_Phantom {price = 75;stock = 100;};
            class CUP_15Rnd_9x19_M9 {price = 70;stock = 100;};
            class CUP_7Rnd_50AE_Deagle {price = 100;stock = 100;};
			class CUP_12Rnd_45ACP_mk23 {price = 75;stock = 100;};
            class CUP_12Rnd_9x18_PMM_M {price = 25;stock = 100;};
			class 50Rnd_570x28_SMG_03 {price = 125;stock = 100;};
            class 30Rnd_9x21_Mag_SMG_02 {price = 125;stock = 100;};
            class 30Rnd_45ACP_Mag_SMG_01 {price = 125;stock = 100;};
			class CUP_64Rnd_9x19_Bizon_M {price = 200;stock = 100;};
            class CUP_30Rnd_9x19_MP5 {price = 125;stock = 100;};
			class CUP_10Rnd_B_765x17_Ball_M {price = 40;stock = 100;};
            class CUP_20Rnd_B_765x17_Ball_M {price = 75;stock = 100;};
            class CUP_30Rnd_9x19_EVO {price = 125;stock = 100;};
            class CUP_30Rnd_9x19_UZI {price = 125;stock = 100;};
			class CUP_30Rnd_45ACP_MAC10_M {price = 125;stock = 100;};
            class CUP_20Rnd_46x30_MP7 {price = 125;stock = 100;};
			class CUP_10Rnd_762x39_SaigaMk03_M {price = 75;stock = 100;};
			class CUP_30Rnd_9x19AP_Vityaz {price = 125;stock = 100;};
            class CUP_10Rnd_9x19_Saiga9 {price = 30;stock = 100;};
            class CUP_40Rnd_46x30_MP7 {price = 125;stock = 100;};
			class CUP_8Rnd_B_Saiga12_74Slug_M {price = 200;stock = 100;};
            class CUP_8Rnd_B_Saiga12_74Pellets_M {price = 150;stock = 100;};
			class CUP_6Rnd_B_Beneli_74Pellets {price = 200;stock = 100;};
            class CUP_20Rnd_B_AA12_Pellets {price = 300;stock = 20;};
            class CUP_20Rnd_B_AA12_74Slug {price = 500;stock = 20;};
            class CUP_20Rnd_B_AA12_HE {price = 1000;stock = 100;};
            class CUP_8Rnd_B_Beneli_74Slug {price = 200;stock = 100;};
            class CUP_8Rnd_B_Beneli_74Pellets {price = 150;stock = 100;};
			class 30Rnd_556x45_Stanag {price = 150;stock = 500;};
			class 30Rnd_65x39_caseless_mag {price = 175;stock = 100;};
			class CUP_30Rnd_545x39_AK_M {price = 150;stock = 100;};
            class CUP_30Rnd_Subsonic_545x39_AK_M {price = 150;stock = 100;};
            class CUP_30Rnd_762x39_AK47_M {price = 200;stock = 100;};
            class CUP_30Rnd_Sa58_M {price = 200;stock = 100;};
			class CUP_30Rnd_556x45_Stanag {price = 150;stock = 100;};
            class CUP_20Rnd_556x45_Stanag {price = 125;stock = 100;};
			class CUP_25Rnd_762x51_Galil_Mag {price = 200;stock = 100;};
            class CUP_30Rnd_556x45_G36 {price = 150;stock = 100;};
			class CUP_20Rnd_762x51_FNFAL_M {price = 200;stock = 100;};
			class CUP_20Rnd_762x51_B_SCAR {price = 200;stock = 100;};
            class CUP_20Rnd_762x51_CZ805B {price = 200;stock = 100;};
            class CUP_30Rnd_556x45_AK {price = 150;stock = 100;};
            class CUP_30Rnd_545x39_AK74M_M {price = 150;stock = 100;};
            class CUP_30Rnd_762x39_AK103_bakelite_M {price = 200;stock = 100;};
            class CUP_30Rnd_762x39_AK47_bakelite_M {price = 200;stock = 100;};
            class CUP_30Rnd_556x45_AUG {price = 150;stock = 100;};
            class CUP_30Rnd_556x45_CZ805 {price = 150;stock = 100;};
            class CUP_20Rnd_762x51_G3 {price = 200;stock = 100;};
            class CUP_30Rnd_556x45_PMAG_QP {price = 150;stock = 100;};
            class CUP_20Rnd_762x51_HK417 {price = 200;stock = 100;};
            class CUP_30Rnd_556x45_Stanag_L85 {price = 150;stock = 100;};
            class CUP_30Rnd_556x45_Stanag_Mk16 {price = 150;stock = 100;};
            class CUP_20Rnd_762x51_B_SCAR_bkl {price = 200;stock = 100;};
            class CUP_20Rnd_9x39_SP5_GROZA_M {price = 150;stock = 100;};
			class CUP_30Rnd_9x39_SP5_VIKHR_M {price = 500;stock = 100;};
            class CUP_30Rnd_556x45_X95 {price = 150;stock = 100;};
            class CUP_30Rnd_556x45_XM8 {price = 150;stock = 100;};
            class CUP_30Rnd_762x39_CZ807 {price = 200;stock = 100;};
			class CUP_1Rnd_HE_GP25_M {price = 400;stock = 50;};
            class CUP_FlareWhite_GP25_M {price = 200;stock = 50;};
            class CUP_FlareGreen_GP25_M {price = 200;stock = 50;};
            class CUP_FlareRed_GP25_M {price = 200;stock = 50;};
            class CUP_FlareYellow_GP25_M {price = 200;stock = 50;};
            class CUP_IlumFlareWhite_GP25_M {price = 150;stock = 50;};
            class CUP_IlumFlareRed_GP25_M {price = 150;stock = 50;};
            class CUP_IlumFlareGreen_GP25_M {price = 150;stock = 50;};
            class CUP_1Rnd_SMOKE_GP25_M {price = 200;stock = 50;};
            class CUP_1Rnd_SmokeRed_GP25_M {price = 200;stock = 50;};
            class CUP_1Rnd_SmokeGreen_GP25_M {price = 200;stock = 50;};
            class CUP_1Rnd_SmokeYellow_GP25_M {price = 200;stock = 50;};
            class CUP_1Rnd_HE_M203 {price = 400;stock = 50;};
            class CUP_1Rnd_HEDP_M203 {price = 400;stock = 50;};
            class CUP_FlareWhite_M203 {price = 200;stock = 50;};
            class CUP_FlareGreen_M203 {price = 200;stock = 50;};
            class CUP_FlareRed_M203 {price = 200;stock = 50;};
            class CUP_FlareYellow_M203 {price = 200;stock = 50;};
            class CUP_1Rnd_Smoke_M203 {price = 200;stock = 50;};
            class CUP_1Rnd_SmokeRed_M203 {price = 200;stock = 50;};
            class CUP_1Rnd_SmokeGreen_M203 {price = 200;stock = 50;};
            class CUP_1Rnd_SmokeYellow_M203 {price = 200;stock = 50;};
            class CUP_6Rnd_HE_GP25_M {price = 1200;stock = 50;};
            class CUP_6Rnd_HE_M203 {price = 1200;stock = 50;};
            class CUP_6Rnd_FlareWhite_M203 {price = 200;stock = 50;};
            class CUP_6Rnd_FlareGreen_M203 {price = 200;stock = 50;};
            class CUP_6Rnd_FlareRed_M203 {price = 200;stock = 50;};
            class CUP_6Rnd_FlareYellow_M203 {price = 200;stock = 50;};
            class CUP_6Rnd_Smoke_M203 {price = 200;stock = 50;};
            class CUP_6Rnd_SmokeRed_M203 {price = 200;stock = 50;};
            class CUP_6Rnd_SmokeGreen_M203 {price = 200;stock = 50;};
            class CUP_6Rnd_SmokeYellow_M203 {price = 200;stock = 50;};
			class 20Rnd_762x51_Mag {price = 200;stock = 500;};
            class 10Rnd_762x51_Mag {price = 200;stock = 100;};
            class 10Rnd_762x54_Mag {price = 200;stock = 100;};
            class 5Rnd_127x108_Mag {price = 1000;stock = 8;};
            class 5Rnd_127x108_APDS_Mag {price = 1000;stock = 8;};
            class 10Rnd_127x54_Mag {price = 1500;stock = 8;};
            class 10Rnd_338_Mag {price = 400;stock = 50;};
            class 7Rnd_408_Mag {price = 1000;stock = 8;};
            class 10Rnd_93x64_DMR_05_Mag {price = 400;stock = 100;};
			class CUP_10x_303_M {price = 75;stock = 100;};
			class CUP_20Rnd_762x51_L129_M {price = 200;stock = 100;};
			class CUP_5Rnd_127x108_KSVK_M {price = 1000;stock = 8;};
            class CUP_10Rnd_762x54_SVD_M {price = 200;stock = 100;};
            class CUP_10Rnd_9x39_SP5_VSS_M {price = 600;stock = 50;};
            class CUP_20Rnd_9x39_SP5_VSS_M {price = 800;stock = 50;};
            class CUP_5Rnd_127x99_as50_M {price = 1000;stock = 8;};
            class CUP_20Rnd_762x51_DMR {price = 200;stock = 100;};
            class CUP_5Rnd_762x51_M24 {price = 200;stock = 100;};
            class CUP_20Rnd_762x51_B_M110 {price = 200;stock = 100;};
            class CUP_10Rnd_127x99_M107 {price = 1000;stock = 8;};
            class CUP_10Rnd_762x51_CZ750 {price = 150;stock = 100;};
            class CUP_5Rnd_86x70_L115A1 {price = 700;stock = 100;};
            class CUP_5Rnd_762x67_G22 {price = 300;stock = 100;};
            class CUP_5x_22_LR_17_HMR_M {price = 50;stock = 100;};
			class CUP_6Rnd_762x51_R700 {price = 150;stock = 100;};
			class 100Rnd_65x39_caseless_mag {price = 500;stock = 50;};
			class 100Rnd_65x39_caseless_mag_Tracer {price = 500;stock = 50;};
			class 200Rnd_65x39_cased_Box {price = 600;stock = 50;};
			class 200Rnd_65x39_cased_Box_Tracer {price = 600;stock = 50;};
			class 150Rnd_762x51_Box {price = 600;stock = 50;};
			class 150Rnd_762x51_Box_Tracer {price = 600;stock = 50;};
			class 150Rnd_762x54_Box {price = 600;stock = 50;};
			class 150Rnd_762x54_Box_Tracer {price = 600;stock = 50;};
			class 150Rnd_93x64_Mag {price = 600;stock = 50;};
			class 130Rnd_338_Mag {price = 500;stock = 50;};
			class CUP_100Rnd_556x45_BetaCMag {price = 400;stock = 50;};
            class CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag {price = 400;stock = 50;};
			class CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M {price = 215;stock = 50;};
            class CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M {price = 200;stock = 50;};
            class CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M {price = 500;stock = 50;};
            class CUP_200Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M {price = 600;stock = 50;};
            class CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M {price = 500;stock = 50;};
            class CUP_200Rnd_TE4_Green_Tracer_556x45_M249 {price = 500;stock = 50;};
			class CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch {price = 500;stock = 50;};
			class CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1 {price = 500;stock = 50;};
            class CUP_100Rnd_TE4_Green_Tracer_556x45_M249 {price = 400;stock = 50;};
            class CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1 {price = 500;stock = 50;};
			class CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M {price = 200;stock = 100;};
            class CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M {price = 250;stock = 100;};
			class HandGrenade {price = 300;stock = 100;};
            class MiniGrenade {price = 400;stock = 100;};
			class CUP_HandGrenade_RGD5 {price = 300;stock = 100;};
            class B_IR_Grenade {price = 200;stock = 100;};
            class DemoCharge_Remote_Mag {price = 2500;stock = 20;};
            class IEDUrbanSmall_Remote_Mag {price = 2000;stock = 4;};
            class IEDLandSmall_Remote_Mag {price = 2000;stock = 4;};
            class SatchelCharge_Remote_Mag {price = 2500;stock = 4;};
            class IEDUrbanBig_Remote_Mag {price = 2500;stock = 4;};
            class IEDLandBig_Remote_Mag {price = 2500;stock = 4;};
            class ATMine_Range_Mag {price = 2500;stock = 4;};
            class ClaymoreDirectionalMine_Remote_Mag {price = 1500;stock = 4;};
            class APERSMine_Range_Mag {price = 1500;stock = 4;};
            class APERSMineDispenser_Mag {price = 4000;stock = 4;};
            class APERSBoundingMine_Range_Mag {price = 1500;stock = 4;};
            class SLAMDirectionalMine_Wire_Mag {price = 1500;stock = 4;};
            class APERSTripMine_Wire_Mag {price = 1500;stock = 4;};
			class 3Rnd_HE_Grenade_shell {price = 700;stock = 20;};
            class 1Rnd_HE_Grenade_shell {price = 300;stock = 20;};
            class 1Rnd_Smoke_Grenade_shell {price = 150;stock = 20;};
            class 1Rnd_SmokeRed_Grenade_shell {price = 150;stock = 20;};
            class 1Rnd_SmokeBlue_Grenade_shell {price = 150;stock = 20;};
            class 1Rnd_SmokeOrange_Grenade_shell {price = 150;stock = 20;};
			class 30Rnd_762x39_AK12_Mag_F {price = 200;stock = 100;};
            class 10Rnd_50BW_Mag_F {price = 800;stock = 100;};
			class 30Rnd_580x42_Mag_F {price = 150;stock = 100;};
			class 30Rnd_65x39_caseless_msbs_mag {price = 175;stock = 100;};
            class 2Rnd_12Gauge_Pellets {price = 50;stock = 100;};
            class 2Rnd_12Gauge_Slug {price = 60;stock = 100;};
			class 20Rnd_650x39_Cased_Mag_F {price = 175;stock = 100;};
			class CUP_M136_M {price = 2000;stock = 10;};
            class CUP_RPG18_M {price = 2000;stock = 10;};
            class CUP_PG7V_M {price = 2000;stock = 10;};
			class CUP_PG7VM_M {price = 2000;stock = 0;};
            class CUP_PG7VL_M {price = 2000;stock = 0;};
            class CUP_PG7VR_M {price = 2000;stock = 0;};
            class CUP_TBG7V_M {price = 2000;stock = 0;};
            class CUP_OG7_M {price = 2000;stock = 0;};
			class 30Rnd_9x21_Red_Mag {price = 70;stock = 0;};
            class 30Rnd_9x21_Yellow_Mag {price = 70;stock = 0;};
            class 16Rnd_9x21_Mag {price = 50;stock = 100;};
            class 16Rnd_9x21_red_Mag {price = 50;stock = 0;};
            class 16Rnd_9x21_green_Mag {price = 50;stock = 0;};
			class 30Rnd_9x21_Mag_SMG_02_Tracer_Red {price = 125;stock = 0;};
            class 30Rnd_9x21_Mag_SMG_02_Tracer_Yellow {price = 125;stock = 0;};
			class 30Rnd_45ACP_Mag_SMG_01_Tracer_Green {price = 125;stock = 0;};
            class 30Rnd_45ACP_Mag_SMG_01_Tracer_Red {price = 125;stock = 0;};
			class CUP_64Rnd_Green_Tracer_9x19_Bizon_M {price = 200;stock = 0;};
            class CUP_64Rnd_Red_Tracer_9x19_Bizon_M {price = 200;stock = 0;};
            class CUP_64Rnd_White_Tracer_9x19_Bizon_M {price = 200;stock = 0;};
            class CUP_64Rnd_Yellow_Tracer_9x19_Bizon_M {price = 200;stock = 0;};
			class 30Rnd_556x45_Stanag_green {price = 150;stock = 0;};
            class 30Rnd_556x45_Stanag_red {price = 150;stock = 0;};
            class 30Rnd_556x45_Stanag_Tracer_Red {price = 150;stock = 0;};
            class 30Rnd_556x45_Stanag_Tracer_Green {price = 150;stock = 0;};
            class 30Rnd_556x45_Stanag_Tracer_Yellow {price = 150;stock = 0;};
			class 30Rnd_65x39_caseless_green {price = 175;stock = 0;};
            class 30Rnd_65x39_caseless_mag_Tracer {price = 175;stock = 0;};
            class 30Rnd_65x39_caseless_green_mag_Tracer {price = 175;stock = 0;};
			class CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M {price = 150;stock = 0;};
            class CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M {price = 150;stock = 0;};
            class CUP_30Rnd_TE1_White_Tracer_545x39_AK_M {price = 150;stock = 0;};
            class CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M {price = 150;stock = 0;};
			class CUP_30Rnd_Sa58_M_TracerG {price = 200;stock = 0;};
            class CUP_30Rnd_Sa58_M_TracerR {price = 200;stock = 0;};
            class CUP_30Rnd_Sa58_M_TracerY {price = 200;stock = 0;};
			class CUP_30Rnd_TE1_Red_Tracer_556x45_G36 {price = 150;stock = 0;};
            class CUP_30Rnd_TE1_Green_Tracer_556x45_G36 {price = 150;stock = 0;};
            class CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36 {price = 150;stock = 0;};
			class CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR {price = 200;stock = 0;};
            class CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR {price = 200;stock = 0;};
            class CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR {price = 200;stock = 0;};
            class CUP_20Rnd_TE1_White_Tracer_762x51_SCAR {price = 200;stock = 0;};
			class CUP_20Rnd_TE1_Yellow_Tracer_762x51_CZ805B {price = 200;stock = 0;};
            class CUP_20Rnd_TE1_Red_Tracer_762x51_CZ805B {price = 200;stock = 0;};
            class CUP_20Rnd_TE1_Green_Tracer_762x51_CZ805B {price = 200;stock = 0;};
            class CUP_20Rnd_TE1_White_Tracer_762x51_CZ805B {price = 200;stock = 0;};
			class CUP_30Rnd_545x39_AK74M_desert_M {price = 150;stock = 0;};
			class CUP_30Rnd_545x39_AK74_plum_M {price = 150;stock = 0;};
	        class CUP_30Rnd_545x39_Fort224_M {price = 150;stock = 100;};
			class CUP_30Rnd_556x45_G36_hex {price = 150;stock = 0;};
            class CUP_30Rnd_556x45_G36_wdl {price = 150;stock = 0;};
			class CUP_30Rnd_556x45_Stanag_Mk16_black {price = 150;stock = 0;};
            class CUP_30Rnd_556x45_Stanag_Mk16_woodland {price = 150;stock = 0;};
			class CUP_20Rnd_762x51_B_SCAR_wdl {price = 200;stock = 0;};
		    class CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR {price = 250;stock = 0;};
            class CUP_20Rnd_TE1_Red_Tracer_762x51_DMR {price = 250;stock = 0;};
            class CUP_20Rnd_TE1_Green_Tracer_762x51_DMR {price = 250;stock = 0;};
            class CUP_20Rnd_TE1_White_Tracer_762x51_DMR {price = 250;stock = 0;};
			class CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110 {price = 300;stock = 0;};
            class CUP_20Rnd_TE1_Red_Tracer_762x51_M110 {price = 300;stock = 0;};
            class CUP_20Rnd_TE1_Green_Tracer_762x51_M110 {price = 300;stock = 0;};
            class CUP_20Rnd_TE1_White_Tracer_762x51_M110 {price = 300;stock = 0;};
			class CUP_10Rnd_762x51_CZ750_Tracer {price = 150;stock = 0;};
			class CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag {price = 400;stock = 0;};
            class CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag {price = 400;stock = 0;};
			class CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M {price = 500;stock = 0;};
			class CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M {price = 600;stock = 100;};
            class CUP_200Rnd_TE1_LRT4_Red_Tracer_762x51_Belt_M {price = 600;stock = 0;};
            class CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M {price = 500;stock = 0;};
            class CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M {price = 500;stock = 0;};
			class CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M {price = 500;stock = 0;};
            class CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M {price = 500;stock = 0;};
			class CUP_200Rnd_TE4_Red_Tracer_556x45_M249 {price = 500;stock = 0;};
            class CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249 {price = 500;stock = 0;};
            class CUP_200Rnd_TE1_Red_Tracer_556x45_M249 {price = 500;stock = 0;};
			class CUP_100Rnd_TE4_Red_Tracer_556x45_M249 {price = 400;stock = 0;};
            class CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249 {price = 400;stock = 0;};
			class CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M {price = 500;stock = 0;};
			class O_IR_Grenade {price = 150;stock = 0;};
            class I_IR_Grenade {price = 150;stock = 0;};
			
		};

		
		class money3 {
			displayName = "Redeem Money";
			picture = "";

			class rvg_money {price = 200;stock = 0;};
		};
		
		class facewear {
			displayName = "Facewear";
			picture = "";
			
			class G_Aviator {price = 50;stock = 100;};
			class G_Balaclava_blk {price = 50;stock = 100;};
			class G_Balaclava_combat {price = 50;stock = 100;};
			class G_Balaclava_lowprofile {price = 50;stock = 100;};
			class G_Balaclava_oli {price = 50;stock = 100;};
			class G_Bandanna_aviator {price = 50;stock = 100;};
			class G_Bandanna_beast {price = 50;stock = 100;};
			class G_Bandanna_blk {price = 50;stock = 100;};
			class G_Bandanna_khk {price = 50;stock = 100;};
			class G_Bandanna_oli {price = 50;stock = 100;};
			class G_Bandanna_shades {price = 50;stock = 100;};
			class G_Bandanna_sport {price = 50;stock = 100;};
			class G_Bandanna_tan {price = 50;stock = 100;};
			class G_Diving {price = 200;stock = 100;};
			class G_Lowprofile {price = 100;stock = 100;};
			class G_Shades_Black {price = 50;stock = 100;};
			class G_Shades_Blue {price = 50;stock = 100;};
			class G_Shades_Green {price = 50;stock = 100;};
			class G_Shades_Red {price = 50;stock = 100;};
			class G_Spectacles {price = 50;stock = 100;};
			class G_Sport_Red {price = 50;stock = 100;};
			class G_Sport_Blackyellow {price = 50;stock = 100;};
			class G_Sport_BlackWhite {price = 50;stock = 100;};
			class G_Sport_Checkered {price = 50;stock = 100;};
			class G_Sport_Blackred {price = 50;stock = 100;};
			class G_Sport_Greenblack {price = 50;stock = 100;};
			class G_Squares_Tinted {price = 50;stock = 100;};
			class G_Squares {price = 50;stock = 100;};
			class G_Tactical_Clear {price = 150;stock = 100;};
			class G_Tactical_Black {price = 150;stock = 100;};
			class G_Spectacles_Tinted {price = 50;stock = 100;};
			class LBG_Shemagh_Gry {price = 50;stock = 100;};
			class LBG_Shemagh_OD {price = 50;stock = 100;};
			class LCG_Shemagh_Gry {price = 50;stock = 100;};
			class LCG_Shemagh_Tan {price = 50;stock = 100;};
			class LCG_Shemagh_White {price = 50;stock = 100;};
			class LOG_Shemagh_OD {price = 50;stock = 100;};
			class LOG_Shemagh_Tan {price = 50;stock = 100;};
			class L_Shemagh_Gry {price = 50;stock = 100;};
			class L_Shemagh_OD {price = 50;stock = 100;};
			class L_Shemagh_Tan {price = 50;stock = 100;};
			class Mask_M40 {price = 300;stock = 100;};
			class Mask_M50 {price = 300;stock = 100;};
			class PU_shemagh_OD {price = 50;stock = 100;};
			class PU_shemagh_ODBLK {price = 50;stock = 100;};
			class rvg_BalaclavaCombat_1 {price = 50;stock = 100;};
			class rvg_BalaclavaCombat_2 {price = 50;stock = 100;};
			class rvg_BalaclavaLow_1 {price = 50;stock = 100;};
			class rvg_BalaclavaLow_2 {price = 50;stock = 100;};
			class rvg_balaclava_1 {price = 50;stock = 100;};
			class rvg_balaclava_2 {price = 50;stock = 100;};
			class rvg_bandanaAvi_1 {price = 50;stock = 100;};
			class rvg_bandanaAvi_2 {price = 50;stock = 100;};
			class rvg_bandanaShades_1 {price = 50;stock = 100;};
			class rvg_bandanaShades_2 {price = 50;stock = 100;};
			class rvg_bandanaSport_1 {price = 50;stock = 100;};
			class rvg_bandanaSport_2 {price = 50;stock = 100;};
			class rvg_bandana_1 {price = 50;stock = 100;};
			class rvg_bandana_2 {price = 50;stock = 100;};
			class rvg_respirator_1 {price = 50;stock = 100;};
			class rvg_respirator_2 {price = 50;stock = 100;};
			class CUP_G_RUS_Ratnik_Balaclava_Green_2 {price = 150;stock = 100;};
			class G_Combat {price = 150;stock = 0;};
		    class G_I_Diving {price = 200;stock = 0;};
			class G_B_Diving {price = 200;stock = 0;};
			class Mask_M40_OD {price = 300;stock = 0;};
	
	    };
		
		class headgear {
			displayName = "Headgear";
			picture = "";
			
			class H_HelmetSpecO_blk {price = 1200;stock = 50;};
			class H_HelmetSpecO_ocamo {price = 1200;stock = 50;};
			class H_HelmetB {price = 600;stock = 50;};
		    class H_HelmetB_black {price = 600;stock = 50;};
		    class H_HelmetB_camo {price = 600;stock = 50;};
		    class H_HelmetB_desert {price = 600;stock = 50;};
			class FRITH_ruin_modhat_fabdpm {price = 300;stock = 50;};
			class FRITH_ruin_modhat_ltrpntblk {price = 300;stock = 50;};
			class FRITH_ruin_modhat_fabaaf {price = 300;stock = 50;};
			class FRITH_ruin_modhat_fabmtp {price = 300;stock = 50;};
		    class H_HelmetCrew_I {price = 600;stock = 50;};
			class H_HelmetCrew_B {price = 600;stock = 50;};
		    class H_HelmetSpecB {price = 800;stock = 50;};
			class H_HelmetSpecB_blk {price = 800;stock = 50;};
		    class H_HelmetSpecB_sand {price = 800;stock = 50;};
            class H_HelmetSpecB_snakeskin {price = 800;stock = 50;};
		    class H_HelmetB_light {price = 500;stock = 50;};
		    class H_HelmetB_light_black {price = 500;stock = 50;};
			class H_HelmetB_light_desert {price = 500;stock = 50;};
            class H_HelmetB_light_grass {price = 500;stock = 50;};
			class H_HelmetO_ocamo {price = 1200;stock = 50;};
			class H_HelmetO_oucamo {price = 1200;stock = 50;};
			class H_Watchcap_blk {price = 50;stock = 50;};
			class H_Watchcap_cbr {price = 50;stock = 50;};
			class H_Watchcap_camo {price = 50;stock = 50;};
			class H_Watchcap_khk {price = 50;stock = 50;};
			class H_Booniehat_mcamo {price = 100;stock = 50;};
		    class H_Booniehat_oli {price = 100;stock = 50;};
		    class H_Booniehat_tan {price = 100;stock = 50;};
		    class H_Cap_blk {price = 50;stock = 50;};
		    class H_Cap_grn {price = 50;stock = 50;};
			class H_Cap_oli {price = 50;stock = 50;};
		    class H_Cap_police {price = 50;stock = 50;};
		    class H_Cap_tan {price = 50;stock = 50;};
		    class H_Cap_khaki_specops_UK {price = 50;stock = 50;};
			class H_Cap_usblack {price = 50;stock = 50;};
		    class H_Cap_tan_specops_US {price = 50;stock = 50;};
		    class H_Cap_blk_Raven {price = 50;stock = 50;};
			class H_Cap_brn_SPECOPS {price = 50;stock = 50;};
			class H_Hat_camo {price = 50;stock = 50;};
			class H_MilCap_blue {price = 100;stock = 50;};
			class H_MilCap_gry {price = 100;stock = 50;};
			class H_MilCap_ocamo {price = 100;stock = 50;};
			class H_MilCap_mcamo {price = 100;stock = 50;};
		    class H_MilCap_dgtl {price = 100;stock = 50;};
		    class H_Shemag_olive {price = 50;stock = 50;};
			class H_ShemagOpen_tan {price = 50;stock = 50;};
		    class H_ShemagOpen_khk {price = 50;stock = 50;};
            class H_Bandanna_gry {price = 50;stock = 50;};
			class H_Bandanna_blu {price = 50;stock = 50;};
			class H_Bandanna_cbr {price = 50;stock = 50;};
			class H_Bandanna_khk {price = 50;stock = 50;};
		    class H_Bandanna_mcamo {price = 50;stock = 50;};
		    class H_Bandanna_sgg {price = 50;stock = 50;};
		    class H_Bandanna_sand {price = 50;stock = 50;};
		    class H_Bandanna_camo {price = 50;stock = 50;};
			class CUP_H_C_Ushanka_01 {price = 100;stock = 50;};
			class CUP_H_PMC_Cap_Back_Burberry {price = 50;stock = 50;};
			class CUP_H_PMC_Cap_Back_Grey {price = 50;stock = 50;};
			class CUP_H_PMC_Cap_Burberry {price = 50;stock = 50;};
			class CUP_H_PMC_Cap_Grey {price = 50;stock = 50;};
			class CUP_H_RUS_6B27 {price = 500;stock = 50;};
			class CUP_H_RUS_6B47_6M2_6B34U_Summer {price = 500;stock = 50;};
			class H_BandCap_rvg {price = 100;stock = 50;};
			class rvg_hat_brown {price = 50;stock = 50;};
			class rvg_hat_grey {price = 50;stock = 50;};
			class rvg_hat_tan {price = 50;stock = 50;};
			class rvg_presshelmet_1 {price = 400;stock = 50;};
			class rvg_presshelmet_2 {price = 400;stock = 50;};
			class rvg_racing_1 {price = 300;stock = 50;};
			class rvg_racing_2 {price = 300;stock = 50;};
			class rvg_racing_3 {price = 300;stock = 50;};
			class rvg_safari_1 {price = 50;stock = 50;};
			class rvg_safari_2 {price = 50;stock = 50;};
			class rvg_skate_1 {price = 200;stock = 50;};
			class rvg_skate_2 {price = 200;stock = 50;};
          
		};
		
		class headgear2 {
			displayName = "Apex DLC Headgear";
			picture = "";
			
			class H_HelmetB_TI_arid_F {price = 600;stock = 50;};
			class H_HelmetB_TI_tna_F {price = 600;stock = 50;};
			class H_HelmetO_ViperSP_ghex_F {price = 8000;stock = 1;};
          
		};
		
		class uniform {
			displayName = "Uniforms";
			picture = "";
			
			class U_B_CombatUniform_mcam {price = 400;stock = 50;};
			class U_B_survival_uniform {price = 500;stock = 50;};
			class U_I_CombatUniform {price = 400;stock = 50;};
			class U_B_CombatUniform_mcam_wdl_f {price = 400;stock = 50;};
			class U_I_CombatUniform_shortsleeve {price = 400;stock = 50;};
			class U_O_CombatUniform_ocamo {price = 400;stock = 50;};
			class U_FRITH_RUIN_sdr_fab_rs {price = 50;stock = 50;};
			class U_FRITH_RUIN_sdr_fabbrn {price = 50;stock = 50;};
			class U_FRITH_RUIN_sdr_fabdpm {price = 50;stock = 50;};
			class U_FRITH_RUIN_sdr_fabgrn {price = 50;stock = 50;};
			class U_FRITH_RUIN_sdr_fabmtp {price = 50;stock = 50;};
			class U_FRITH_RUIN_sdr_ltrdrk {price = 50;stock = 50;};
			class U_FRITH_RUIN_SDR_Tshirt_blk_cyp {price = 50;stock = 50;};
			class U_FRITH_RUIN_SDR_Tshirt_blk_drj {price = 50;stock = 50;};
			class U_FRITH_RUIN_SDR_Tshirt_wht_zap {price = 50;stock = 50;};
			class U_FRITH_RUIN_SDR_Tshirt_wht_stk {price = 50;stock = 50;};
			class U_FRITH_RUIN_SDR_snip_crow {price = 300;stock = 50;};
			class U_FRITH_RUIN_offdpm {price = 50;stock = 50;};
			class U_I_GhillieSuit {price = 800;stock = 2;};
			class U_O_GhillieSuit {price = 800;stock = 2;};
			class U_B_GhillieSuit {price = 800;stock = 2;};
			class U_OG_leader {price = 100;stock = 50;};
			class U_B_CTRG_1 {price = 400;stock = 50;};
			class U_B_CTRG_2 {price = 400;stock = 50;};
			class U_B_CTRG_3 {price = 400;stock = 50;};
			class U_BG_Guerilla1_1 {price = 100;stock = 50;};
			class U_BG_Guerilla1_2_F {price = 100;stock = 50;};
			class U_BG_Guerilla2_2 {price = 100;stock = 50;};
			class U_BG_Guerilla2_1 {price = 100;stock = 50;};
			class U_BG_Guerilla2_3 {price = 100;stock = 50;};
			class U_BG_Guerilla3_1 {price = 100;stock = 50;};
			class U_BG_Guerrilla_6_1NG {price = 400;stock = 50;};
			class U_C_ArtTShirt_01_v5_F {price = 200;stock = 50;};
			class U_C_ArtTShirt_01_v4_F {price = 200;stock = 50;};
			class U_C_ArtTShirt_01_v1_F {price = 200;stock = 50;};
			class U_O_SpecopsUniform_ocamo {price = 400;stock = 50;};
			class U_I_Wetsuit {price = 600;stock = 50;};
			class U_I_G_Story_Protagonist_F {price = 400;stock = 50;};
			class U_O_SpecopsUniform_blk {price = 400;stock = 50;};
			class U_C_Poor_1 {price = 100;stock = 50;};
			class U_C_Poor_2 {price = 100;stock = 50;};
			class U_C_HunterBody_grn {price = 10;stock = 50;};
			class U_C_Driver_1_black {price = 150;stock = 50;};
			class U_C_WorkerCoveralls {price = 10;stock = 50;};
			class CUP_I_B_PMC_Unit_1 {price = 50;stock = 50;};
			class CUP_I_B_PMC_Unit_2 {price = 50;stock = 50;};
			class CUP_I_B_PMC_Unit_3 {price = 50;stock = 50;};
			class CUP_U_I_GUE_Woodland1 {price = 200;stock = 50;};
			class CUP_I_B_PMC_Unit_13 {price = 400;stock = 50;};
			class CUP_I_B_PMC_Unit_14 {price = 400;stock = 50;};
			class CUP_I_B_PMC_Unit_17 {price = 400;stock = 50;};
			class CUP_I_B_PMC_Unit_19 {price = 400;stock = 50;};
			class CUP_I_B_PMC_Unit_10 {price = 400;stock = 50;};
			class CUP_I_B_PMC_Unit_24 {price = 400;stock = 50;};
			class CUP_U_B_USArmy_UBACS {price = 400;stock = 50;};
			class CUP_U_O_SLA_Desert {price = 200;stock = 50;};
			class CUP_U_O_SLA_Green {price = 200;stock = 50;};
		    class CUP_U_O_SLA_Urban {price = 200;stock = 50;};
			class CUP_U_B_BDUv2_gloves_Tigerstripe {price = 400;stock = 50;};
			class CUP_U_B_BDUv2_gloves_Urban {price = 400;stock = 50;};
			class CUP_U_B_BDUv2_roll_Urban {price = 400;stock = 50;};
			class CUP_U_B_BDUv2_gloves_DPM {price = 400;stock = 50;};
			class CUP_U_B_BDUv2_roll_DPM {price = 400;stock = 50;};
			class CUP_U_B_BDUv2_gloves_M81 {price = 400;stock = 50;};
			class CUP_U_CRYE_BLK_Full {price = 400;stock = 50;};
			class CUP_U_CRYE_BLK_Roll {price = 400;stock = 50;};
			class CUP_U_O_RUS_Soldier_VKPO_Summer_2 {price = 400;stock = 50;};
			class CUP_U_O_RUS_EMR_1 {price = 400;stock = 50;};
			class CUP_V_RUS_6B3_1 {price = 400;stock = 50;};
			class rvg_bandit {price = 300;stock = 50;};
			class rvg_bandit_1 {price = 300;stock = 50;};
			class rvg_camo {price = 300;stock = 50;};
			class rvg_camo_1 {price = 300;stock = 50;};
			class rvg_diamond {price = 300;stock = 50;};
			class rvg_diamond_1 {price = 300;stock = 50;};
			class rvg_independant {price = 300;stock = 50;};
			class rvg_independant_1 {price = 300;stock = 50;};
			class rvg_paramilitary_1 {price = 300;stock = 50;};
			class rvg_survivor {price = 300;stock = 50;};
			class rvg_survivor_1 {price = 300;stock = 50;};
			class rvg_hoodie_bandit {price = 50;stock = 50;};
			class rvg_hoodie_blue {price = 50;stock = 50;};
			class rvg_retro_bandit {price = 50;stock = 50;};
			class rvg_retro_green {price = 50;stock = 50;};
			class rvg_shirt_bandit {price = 50;stock = 50;};
			class rvg_shirt_check {price = 50;stock = 50;};
			class U_B_Wetsuit {price = 600;stock = 50;};
			class U_O_Wetsuit {price = 600;stock = 50;};

		};
		
		class uniform2 {
			displayName = "Apex DLC Uniforms";
			picture = "";
			
			class U_B_CTRG_Soldier_2_Arid_F {price = 600;stock = 50;};
			class U_B_CTRG_Soldier_2_F {price = 600;stock = 50;};
			class U_B_CTRG_Soldier_3_F {price = 600;stock = 50;};
			class U_B_CTRG_Soldier_F {price = 600;stock = 50;};
			class U_B_CTRG_Soldier_urb_1_F {price = 600;stock = 50;};
			class U_B_CTRG_Soldier_urb_2_F {price = 600;stock = 50;};
			class U_B_CTRG_Soldier_urb_3_F {price = 600;stock = 50;};
			class U_O_V_Soldier_Viper_F {price = 800;stock = 50;};
			class G_Balaclava_TI_blk_F {price = 400;stock = 50;};
	
		};
		
		class uniform3 {
			displayName = "Marksmen DLC Uniforms";
			picture = "";
			
			class U_B_FullGhillie_ard {price = 800;stock = 2;};
			class U_B_FullGhillie_lsh {price = 800;stock = 2;};
			class U_B_FullGhillie_sard {price = 800;stock = 2;};
	
		};
		
		class uniform4 {
			displayName = "Contact DLC Uniforms";
			picture = "";
			
			class U_C_CBRN_Suit_01_Blue_F {price = 400;stock = 50;};
			class U_O_R_Gorka_01_black_F {price = 600;stock = 50;};
			class U_O_R_Gorka_01_brown_F {price = 600;stock = 50;};
			class U_O_R_Gorka_01_camo_F {price = 600;stock = 50;};
			class U_O_R_Gorka_01_F {price = 600;stock = 50;};
			class U_B_CBRN_Suit_01_MTP_F {price = 400;stock = 50;};
			class U_B_CBRN_Suit_01_Tropic_F {price = 400;stock = 50;};
			class U_B_CBRN_Suit_01_Wdl_F {price = 400;stock = 50;};
	
		};
		
		class uniform5 {
			displayName = "TRYK Uniforms";
			picture = "";
			
			class TRYK_U_B_ACU {price = 400;stock = 50;};
			class TRYK_U_B_ARO1_CombatUniform {price = 400;stock = 50;};
			class TRYK_U_B_ARO1_BLK_CombatUniform {price = 400;stock = 50;};
			class TRYK_U_B_ARO1_GR_CombatUniform {price = 400;stock = 50;};
			class TRYK_U_B_ARO1_GRY_CombatUniform {price = 400;stock = 50;};
			class TRYK_U_B_ARO2_CombatUniform {price = 400;stock = 50;};
			class TRYK_C_AOR2_T {price = 400;stock = 50;};
			class TRYK_U_B_AOR2_BLK_R_CombatUniform {price = 400;stock = 50;};
			class TRYK_U_B_PCUHsW9 {price = 400;stock = 50;};
			class TRYK_U_B_PCUHsW3 {price = 400;stock = 50;};
			class TRYK_U_B_BLKBLK_CombatUniform {price = 400;stock = 50;};
			class TRYK_U_B_BLK3CD {price = 400;stock = 50;};
			class TRYK_U_Bts_UCP_PCUs {price = 400;stock = 50;};
			class TRYK_U_Bts_PCUs {price = 400;stock = 50;};
			class TRYK_U_Bts_Wood_PCUs {price = 400;stock = 50;};
			class TRYK_U_B_PCUGs_BLK_R {price = 400;stock = 50;};
			class TRYK_U_B_PCUGs_BLK {price = 400;stock = 50;};
			class TRYK_hoodie_Wood {price = 400;stock = 50;};
			class TRYK_hoodie_3c {price = 400;stock = 50;};
			class TRYK_U_denim_hood_nc {price = 400;stock = 50;};
			class TRYK_U_pad_j_blk {price = 400;stock = 50;};
			class TRYK_U_B_BLK_T_BK {price = 400;stock = 50;};
			class TRYK_U_B_Denim_T_BG_BK {price = 400;stock = 50;};
			class TRYK_U_B_NATO_UCP_CombatUniform {price = 400;stock = 50;};
			class TRYK_B_TRYK_UCP_T {price = 400;stock = 50;};
			class TRYK_U_B_NATO_UCP_GRY_CombatUniform {price = 400;stock = 50;};
			class TRYK_U_B_wood_CombatUniform {price = 400;stock = 50;};
			class TRYK_U_denim_jersey_blk {price = 400;stock = 50;};
			class TRYK_T_BLK_PAD {price = 400;stock = 50;};
			class TRYK_U_denim_hood_3c {price = 400;stock = 50;};
			class TRYK_U_denim_hood_blk {price = 400;stock = 50;};
			class TRYK_U_denim_hood_mc {price = 400;stock = 50;};
			class TRYK_U_B_WOOD_MARPAT_CombatUniform {price = 400;stock = 50;};
			class TRYK_U_B_WDL_GRY_CombatUniform {price = 400;stock = 50;};

		};
		
		class uniform6 {
			displayName = "RHS Uniforms";
			picture = "";
			
			class rhs_uniform_emr_des_patchless {price = 400;stock = 50;};
			class rhs_uniform_emr_patchless {price = 400;stock = 50;};
			class rhs_uniform_flora_patchless {price = 400;stock = 50;};
			class rhs_uniform_gorka_r_g_gloves {price = 400;stock = 50;};
			class rhs_uniform_gorka_r_y_gloves {price = 400;stock = 50;};
			class rhs_uniform_afghanka_ttsko {price = 400;stock = 50;};
			class rhs_uniform_afghanka_vsr_1 {price = 400;stock = 50;};
			class rhs_uniform_afghanka_vsr_3 {price = 400;stock = 50;};
			class rhs_uniform_afghanka_wdl {price = 400;stock = 50;};
			class rhs_uniform_vkpo_gloves {price = 400;stock = 50;};
			class rhs_uniform_acu_ocp {price = 400;stock = 50;};
			class rhs_uniform_acu_ucp {price = 400;stock = 50;};
			class rhs_uniform_bdu_erdl {price = 400;stock = 50;};
			class rhs_uniform_cu_ocp {price = 400;stock = 50;};
			class rhs_uniform_cu_ucp {price = 400;stock = 50;};
			class rhs_uniform_g3_blk {price = 400;stock = 50;};
	
		};
		
		class vest {
			displayName = "Vests";
			picture = "";
			
			class V_PlateCarrier1_blk {price = 600;stock = 50;};
		    class V_PlateCarrier1_rgr {price = 600;stock = 50;};
		    class V_PlateCarrier2_blk {price = 800;stock = 50;};
		    class V_PlateCarrier2_rgr {price = 800;stock = 50;};
			class FRITH_ruin_vestia_lite_nja {price = 200;stock = 50;};
			class FRITH_ruin_vestia_nja {price = 300;stock = 50;};
			class V_Chestrig_blk {price = 250;stock = 50;};
			class V_Chestrig_rgr {price = 250;stock = 50;};
			class V_Chestrig_khk {price = 250;stock = 50;};
			class V_HarnessOGL_brn {price = 250;stock = 50;};
			class V_HarnessOGL_gry {price = 250;stock = 50;};
			class V_HarnessO_brn {price = 250;stock = 50;};
		    class V_HarnessO_gry {price = 250;stock = 50;};
		    class V_TacVestIR_blk {price = 320;stock = 50;};
			class V_BandollierB_blk {price = 150;stock = 50;};
			class V_BandollierB_cbr {price = 150;stock = 50;};
			class V_BandollierB_khk {price = 150;stock = 50;};
			class V_TacVest_blk {price = 400;stock = 50;};
			class V_TacVest_brn {price = 400;stock = 50;};
			class V_TacVest_khk {price = 400;stock = 50;};
			class V_RebreatherB {price = 1000;stock = 50;};
		    class V_RebreatherIR {price = 1000;stock = 50;};
			class V_PlateCarrierGL_blk {price = 1500;stock = 50;};
			class V_PlateCarrierGL_rgr {price = 1500;stock = 50;};
		    class V_PlateCarrier_Kerry {price = 600;stock = 50;};
			class V_PLateCarrierSpec_blk {price = 1500;stock = 50;};
		    class V_PLateCarrierSpec_rgr {price = 1500;stock = 50;};
			class V_PLateCarrierSpec_mtp {price = 1500;stock = 50;};
		    class V_PlateCarrierIA1_dgtl {price = 600;stock = 50;};
		    class V_PlateCarrierIA2_dgtl {price = 600;stock = 50;};
			class V_LegStrapBag_black_F {price = 100;stock = 50;};
			class V_LegStrapBag_coyote_F {price = 100;stock = 50;};
			class V_Pocketed_black_F {price = 125;stock = 50;};
			class V_Pocketed_coyote_F {price = 125;stock = 50;};
			class CUP_V_B_PASGT {price = 600;stock = 50;};
			class CUP_V_I_Guerilla_Jacket {price = 100;stock = 50;};
			class CUP_V_PMC_CIRAS_Black_Patrol {price = 500;stock = 50;};
			class CUP_V_O_RUS_6B45_6Sh117_AK_Summer {price = 600;stock = 50;};
			class rvg_chestrig {price = 200;stock = 50;};
			class rvg_eodvest_1 {price = 600;stock = 50;};
			class rvg_eodvest_2 {price = 600;stock = 50;};
			class rvg_platecarrier_1 {price = 500;stock = 50;};
			class rvg_platecarrier_2 {price = 500;stock = 50;};
			class rvg_rangemaster_1 {price = 100;stock = 50;};
			class rvg_rangemaster_2 {price = 100;stock = 50;};
			class rvg_ravenvest_1 {price = 400;stock = 50;};
			class rvg_tacvest_1 {price = 400;stock = 50;};
			class rvg_tacvest_2 {price = 400;stock = 50;};
			class V_Chestrig_oli {price = 250;stock = 50;};
			class V_BandollierB_rgr {price = 150;stock = 50;};
			class V_BandollierB_oli {price = 150;stock = 50;};
			class V_TacVest_camo {price = 400;stock = 50;};
			class V_TacVest_oli {price = 400;stock = 50;};
			class V_TacVest_blk_POLICE {price = 400;stock = 50;};
			class V_PlateCarrierGL_mtp {price = 1500;stock = 50;};
			class V_PlateCarrierIAGL_dgtl {price = 1500;stock = 50;};
			class V_PlateCarrierIAGL_oli {price = 1500;stock = 50;};
			class V_CarrierRigKBT_01_EAF_F {price = 600;stock = 50;};
			class V_CarrierRigKBT_01_Olive_F {price = 600;stock = 50;};
		    class CUP_V_B_Eagle_SPC_Patrol {price = 600;stock = 50;};
			class CUP_V_B_Interceptor_Rifleman {price = 600;stock = 50;};
			class CUP_V_B_MTV_Patrol {price = 600;stock = 50;};
			class CUP_V_CDF_6B3_1_DST {price = 600;stock = 50;};
			class CUP_V_CDF_6B3_1_FST {price = 600;stock = 50;};
			class CUP_V_CDF_6B3_1_Green {price = 600;stock = 50;};
			class CUP_V_I_RACS_Carrier_Vest_3 {price = 600;stock = 50;};
			class CUP_V_I_RACS_Carrier_Vest_wdl_3 {price = 600;stock = 50;};
			class CUP_V_O_SLA_6B3_1_DES {price = 600;stock = 50;};
			class CUP_V_O_SLA_6B3_1_URB {price = 600;stock = 50;};
			class CUP_V_O_SLA_6B3_1_WDL {price = 600;stock = 50;};
			class CUP_V_O_TK_Vest_1 {price = 600;stock = 50;};
			class CUP_V_PMC_CIRAS_Coyote_Patrol {price = 500;stock = 50;};
			class CUP_V_PMC_IOTV_Black_Patrol {price = 500;stock = 50;};
			class rvg_deckvest_1 {price = 350;stock = 50;};
			class rvg_deckvest_2 {price = 350;stock = 50;};
			
		};
		
		class vest2 {
			displayName = "Tryk Tac Vests";
			picture = "";
			
			class TRYK_V_ArmorVest_Delta2 {price = 600;stock = 50;};
		    class TRYK_V_ArmorVest_khk2 {price = 600;stock = 50;};
		    class TRYK_V_ArmorVest_green2 {price = 600;stock = 50;};
		    class TRYK_V_ArmorVest_Delta {price = 600;stock = 50;};
			class TRYK_V_ArmorVest_green {price = 600;stock = 50;};
			class TRYK_V_ArmorVest_khk {price = 600;stock = 50;};
			class TRYK_V_PlateCarrier_blk {price = 400;stock = 50;};
			class TRYK_V_PlateCarrier_wood_L {price = 400;stock = 50;};
			class TRYK_V_PlateCarrier_blk_L {price = 400;stock = 50;};
			
		};
		
		class backpack {
			displayName = "Backpacks";
			picture = "";
			
			class B_AssaultPack_blk {price = 300;stock = 50;};
			class B_AssaultPack_khk {price = 300;stock = 50;};
			class B_AssaultPack_cbr {price = 300;stock = 50;};
			class B_Carryall_cbr {price = 1500;stock = 50;};
			class B_Carryall_khk {price = 1500;stock = 50;};
			class B_Carryall_oli {price = 1500;stock = 50;};
            class B_FieldPack_blk {price = 500;stock = 50;};
			class B_FieldPack_cbr {price = 500;stock = 50;};
			class B_FieldPack_oli {price = 500;stock = 50;};
            class B_Kitbag_cbr {price = 700;stock = 50;};
			class B_Kitbag_rgr {price = 700;stock = 50;};
			class B_Kitbag_tan {price = 700;stock = 50;};
			class B_Respawn_Sleeping_bag_F {price = 2000;stock = 20;};
			class B_Parachute {price = 400;stock = 50;};
			class B_TacticalPack_blk {price = 900;stock = 50;};
			class B_TacticalPack_rgr {price = 900;stock = 50;};
		    class B_TacticalPack_oli {price = 900;stock = 50;};
			class CUP_B_ACRPara_dpm {price = 400;stock = 50;};
			class CUP_B_AlicePack_Bedroll {price = 500;stock = 50;};
			class CUP_B_AlicePack_Khaki {price = 500;stock = 50;};
			class CUP_B_AlicePack_OD {price = 500;stock = 50;};
			class CUP_B_CivPack_WDL {price = 450;stock = 50;};
			class CUP_B_HikingPack_Civ {price = 600;stock = 50;};
			class CUP_B_RUS_Backpack {price = 400;stock = 50;};
			class CUP_B_USPack_Coyote {price = 1250;stock = 50;};
			class CUP_B_RUS_Patrol_bag_Summer_AT {price = 600;stock = 50;};
			class rvg_bergan {price = 2000;stock = 50;};
			class rvg_legstrappack_1 {price = 150;stock = 50;};
			class rvg_legstrappack_2 {price = 150;stock = 50;};
			class rvg_legstrappack_3 {price = 150;stock = 50;};
			class rvg_messengerbag_1 {price = 250;stock = 50;};
			class rvg_messengerbag_2 {price = 250;stock = 50;};
			class rvg_messengerbag_3 {price = 250;stock = 50;};
			class B_AssaultPack_dgtl {price = 300;stock = 50;};
			class B_AssaultPack_rgr {price = 300;stock = 50;};
			class B_AssaultPack_ocamo {price = 300;stock = 50;};
			class B_AssaultPack_mcamo {price = 300;stock = 50;};
			class B_AssaultPack_sgg {price = 300;stock = 50;};
			class B_Carryall_mcamo {price = 1500;stock = 50;};
		    class B_Carryall_oucamo {price = 1500;stock = 50;};
			class B_FieldPack_oucamo {price = 500;stock = 50;};
			class B_FieldPack_ocamo {price = 500;stock = 50;};
            class B_FieldPack_khk {price = 500;stock = 50;};
			class B_Kitbag_sgg {price = 700;stock = 50;};
			class B_Kitbag_mcamo {price = 700;stock = 50;};
			class B_TacticalPack_ocamo {price = 900;stock = 50;};
		    class B_TacticalPack_mcamo {price = 900;stock = 50;};
			class CUP_B_ACRPara_m95 {price = 400;stock = 50;};
			
		};
		
		class backpack2 {
			displayName = "Apex DLC Backpacks";
			picture = "";
			
			class B_ViperHarness_blk_F {price = 1000;stock = 50;};
			class B_ViperHarness_ghex_F {price = 1000;stock = 50;};
			class B_ViperHarness_hex_F {price = 1000;stock = 50;};
			class B_ViperHarness_oli_F {price = 1000;stock = 50;};
			class B_ViperLightHarness_blk_F {price = 500;stock = 50;};
			class B_ViperLightHarness_ghex_F {price = 500;stock = 50;};
			class B_ViperLightHarness_hex_F {price = 500;stock = 50;};
			class B_ViperLightHarness_oli_F {price = 500;stock = 50;};
			
		};
		
		class lights {
			displayName = "Chemlights and Flares";
			picture = "";
			
            class rvg_flare {price = 100;stock = 50;};
			class Chemlight_green {price = 25;stock = 50;};
			class Chemlight_red {price = 25;stock = 50;};
			class Chemlight_blue {price = 25;stock = 50;};
			class Chemlight_yellow {price = 25;stock = 50;};
		};
		
		class smokes {
			displayName = "Smoke Grenades";
			picture = "";
			
            class SmokeShell {price = 250;stock = 50;};
			class SmokeShellYellow {price = 250;stock = 50;};
			class SmokeShellgreen {price = 250;stock = 50;};
			class SmokeShellred {price = 250;stock = 50;};
			class SmokeShellpurple {price = 250;stock = 50;};
			class SmokeShellblue {price = 250;stock = 50;};
			class SmokeShellorange {price = 250;stock = 50;};
		
		};
		
		class nightvision {
			displayName = "Nightvision Goggles";
			picture = "";
			
			class CUP_NVG_GPNVG_black {price = 9000;stock = 1;};
			class NVGoggles {price = 6000;stock = 2;};
			class NVGoggles_Indep {price = 6000;stock = 2;};
			class NVGoggles_Opfor {price = 6000;stock = 2;};
		    class CUP_NVG_PVS15_black {price = 6000;stock = 0;};
			class CUP_NVG_PVS7 {price = 6000;stock = 0;};
			class CUP_NVG_PVS14 {price = 6000;stock = 0;};
			class CUP_NVG_HMNVS {price = 6000;stock = 0;};
			
		};
		
		class nightvision2 {
			displayName = "Apex DLC Nightvision Goggles";
			picture = "";
			
			class NVGogglesB_blk_F {price = 9000;stock = 1;};
			
		};
		
		class miscitems {
			displayName = "Miscellaneous Items";
			picture = "";
			
            class ItemWatch {price = 200;stock = 50;};
			class ItemCompass {price = 300;stock = 50;};
			class ItemGPS {price = 1000;stock = 50;};
			class ItemRadio {price = 100;stock = 50;};
			class ItemMap {price = 10;stock = 50;};
			class Binocular {price = 400;stock = 50;};
			class Rangefinder {price = 800;stock = 50;};
			class MineDetector {price = 1600;stock = 50;};
			
		};

    };
	class stores {
		class ravage {
			displayName = "Supplies Shop";
			categories[] = {"money","survival","vehicleitems"};
			};

		class weapon {
			displayName = "Weapons Shop";
			categories[] = {"money2","handgun","smg","shotgun","rifle","sniper","lmg","launchers","optic","pointer","muzzle","underbarrel","apexguns","contactguns","marksmenguns","niarms","rhsguns","ammo"};
			};
			
		class gear {
		    displayName = "Gear Shop";
			categories[] = {"money3","facewear","headgear","headgear2","uniform","uniform2","uniform3","uniform4","uniform5","uniform6","vest","vest2","backpack","backpack2","lights","smokes","nightvision","nightvision2","miscitems"};
			};
	};
	
};