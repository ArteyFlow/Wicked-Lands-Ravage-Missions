


//________________  Author : GEORGE FLOROS [GR] ___________ 29.12.18 _____________ 


/*
________________ GF Auto Loot Crashsites Script - Mod	________________

https://forums.bohemia.net/forums/topic/220928-gf-auto-loot-crashsites-script-mod/

Please keep the Credits or add them to your Diary

https://community.bistudio.com/wiki/SQF_syntax
Don't try to open this with the simple notepad.
For everything that is with comment  //  in front  or between /*
means that it is disabled , so there is no need to delete the extra lines.

You can open this ex:
with notepad++
https://notepad-plus-plus.org/

and also use the extra pluggins
(this way will be better , it will give also some certain colors to be able to detect ex. problems )
http://www.armaholic.com/page.php?id=8680

or use any other program for editing .

For the Compilation List of my GF Scripts , you can search in:
https://forums.bohemia.net/forums/topic/215850-compilation-list-of-my-gf-scripts/
*/


//________________ Settings ________________
//________________ Set true or false  ________________

GF_ALC_Hintsilent_info					= false;
GF_ALC_Systemchat_info					= false;		
GF_ALC_diag_log_info					= false;
GF_ALC_Debug 							= false;
GF_ALC_Systemchat_info_count_Crashsites = false;
GF_ALC_diag_log_info_count_Crashsites	= false;



//GF_ALC_Select	-->	1 = Load every Mod + Bohemia Items , 2 = Load every Mod - No Bohemia Items , 3 = Load Bohemia Items Only , 4 = Custom items only
GF_ALC_Select 							= 4;		

//	It is possible to spawn normal alive vehicles , with crew or not or just wrecks.
//	If yfalse it will spawn the vanilla wrecks for the 1/2/3 selection , 
//	***	NOTE : The normal vehicles , might also not spawn loot at all , due to the vehicle destuction.	***
GF_ALC_Spawn_Normal_Vehicles			= false;		
GF_ALC_Spawn_Crew 						= false;		

GF_ALC_Number							= 7;		//	Number of the Crashsites
GF_ALC_Number_random					= 1;		//	+ random Crashsites

GF_ALC_Spawned_Items    				= 12;		//	Number of the Spawned Items 
GF_ALC_Spawned_Items_random    			= 6;		//	+ random 

GF_ALC_Blacklist_Zone_distance			= 1000;		//	Add here the distance from the Blacklist Zones
GF_ALC_Distanse_from_Players			= 800;		//	Add here the distance from players

GF_ALC_Spawn_Loot						= true;		//	Create Loot at the Crashsites
GF_ALC_Spawn_CraterLong					= false;		//	Spawn CraterLong at the Crashsites 	
GF_ALC_Spawn_CraterLong_small			= false;		//	Spawn CraterLong_small at the Crashsites 
GF_ALC_Spawn_Craters					= false;		//	Spawn Craters at the Crashsites  
GF_ALC_Spawn_Oil_Spill					= false;		//	Spawn Oil Spill at the Crashsites 
GF_ALC_Spawn_Smoke_and_Fire_to_Oil		= false;		//	Spawn Smoke and Fire to Oil
GF_ALC_Spawn_Smoke_and_Fire_to_Vehicle	= true;		//	Spawn Smoke and Fire to vehicle
GF_ALC_Grass_Cutter						= true;		//	Remove the grass around the Crashsites

//________________ Set true or false  ________________

GF_ALC_Create_Markers					= false;		//	Create a Marker for the Crashsites	

GF_ALC_Spawn_Enemy						= false;		//	Spawn Enemy at the site
GF_ALC_Enemy_Side						= east;		//	This is for Normal Spawn and EOS , NOT for the DAC units

GF_ALC_Squad_Members					= 5;		//	+ floor random 5 below
GF_ALC_Squad_Members_random				= 3;

GF_ALC_set_AiSkill						= 0.50;
GF_ALC_set_AiSkill_random				= 0.50;

GF_ALC_Patrol_distance 					= 100;		//	The distance for BIS_fnc_taskPatrol
GF_ALC_Patrol_distance_random 			= 25;	


//________________	Add here your Blacklist Zones ( for more ) , these are included in the 3D editor to copy paste to your mission	________________

GF_ALC_Blacklist_Zone_1 = getMarkerPos "GF_ALC_Blacklist_Zone_1";	
GF_ALC_Blacklist_Zone_2 = getMarkerPos "GF_ALC_Blacklist_Zone_2";
GF_ALC_Blacklist_Zone_3 = getMarkerPos "GF_ALC_Blacklist_Zone_3";
GF_ALC_Blacklist_Zone_4 = getMarkerPos "GF_ALC_Blacklist_Zone_4";
GF_ALC_Blacklist_Zone_5 = getMarkerPos "GF_ALC_Blacklist_Zone_5";


//________________	Enemy Array 	________________

GF_ALC_Pool_Infantry = [
	"O_G_officer_F","O_G_Soldier_SL_F","O_G_Soldier_TL_F","O_G_medic_F","O_G_Soldier_exp_F",
	"O_G_Soldier_M_F","O_G_Soldier_A_F","O_G_Soldier_F","O_G_Soldier_lite_F","O_G_Sharpshooter_F",
	"O_G_Soldier_universal_F"
	];
	
	
GF_ALC_allPlayers = allUnits select {isPlayer _x && {!(_x isKindOf "HeadlessClient_F")}};
GF_ALC_centerPosition = getArray(configFile >> "CfgWorlds" >> worldName >> "centerPosition");
GF_ALC_size = worldsize;


if (GF_ALC_Systemchat_info) then {
systemchat "GF Auto Loot Crashsites Script initializing";			
};	

if (GF_ALC_diag_log_info) then {
diag_log "//________________ GF_Auto_Loot_Crashsites Script initializing ________________";
};



//________________	Array 	________________

/*
//________________	GF_ALC_Binocular_and_Nvg_array	Binocular and Nvg slot 	________________

It might be needed , to add also the mods , that you want to blacklist , in the GF_ALC_Assignable_Items_Mod_Blacklist
in case that the GF_ALC_Attachments_array , generates also items from the blacklisted mods.
To check this , uncomment the line that you will find below (in case : % ) , depending the selection GF_ALC_Select

copyToClipboard str GF_ALC_Binocular_and_Nvg_array; 

then run the mission and it will copy the generated array , then ctrl + v to paste the array.

The "mcc_sandbox_a3" mod will generate items that they are not Binocular or Nvg.
*/

GF_ALC_Binocular_and_Nvg_array_Mod_Blacklist = [
	"mcc_sandbox_a3",
	"CUP_Weapons"		//	Example
	];

	//________________	GF_ALC_Assignable_Items_Mod_Blacklist 	________________

GF_ALC_Vehicle_Mod_Blacklist = [
	"mcc_sandbox_a3",
	"@CUP_Vehicles"		//	Example
	];
	
//________________	case	________________
	
_Array_Loaded = false;
_Select_items_Loaded = false;

private ["_items_case"];

switch (GF_ALC_Select) do {
							

case 1 : {

//________________	Load every Mod + Bohemia items	________________

GF_ALC_primaryWeapon_array = ("getNumber (_x >> 'type') isEqualTo 1 && getNumber (_x>> 'scope') isEqualTo 2" configClasses (configfile >> "CfgWeapons")) apply {configName _x};
GF_ALC_secondaryWeapon_array = ("getNumber (_x >> 'type') isEqualTo 4 && getNumber (_x>> 'scope') isEqualTo 2" configClasses (configfile >> "CfgWeapons")) apply {configName _x};
GF_ALC_handgunWeapon_array = ("getNumber (_x >> 'type') isEqualTo 2 && getNumber (_x>> 'scope') isEqualTo 2" configClasses (configfile >> "CfgWeapons")) apply {configName _x};
GF_ALC_Magazines_array = ("getNumber (_x >> 'scope') isEqualTo 2 && getNumber (_x >> 'type') in [256,16,2*256,3*256,6*256]"configClasses (configFile >> "CfgMagazines")) apply {configName _x};

GF_ALC_Uniform_array = ("getNumber (_x >> 'itemInfo' >> 'type') isEqualTo 801 && getNumber (_x>> 'scope') >1" configClasses (configfile >> "CfgWeapons")) apply {configName _x};
GF_ALC_Vests_array = ("getNumber (_x >> 'itemInfo' >> 'type') isEqualTo 701 && getNumber (_x>> 'scope') >1" configClasses (configfile >> "CfgWeapons")) apply {configName _x};
GF_ALC_Headgear_array = ("getNumber (_x >> 'itemInfo' >> 'type') isEqualTo 605 && getNumber (_x>> 'scope') >1" configClasses (configfile >> "CfgWeapons")) apply {configName _x};
GF_ALC_Backpacks_array = ("getNumber (_x >> 'isbackpack') isEqualTo 1 && getNumber (_x>> 'scope') >1 && getNumber (_x>> 'maximumLoad') != 0" configClasses (configfile >> "CfgVehicles")) apply {configName _x};
GF_ALC_Goggles_array = ("getNumber (_x >> 'scope') > 1" configClasses (configfile >> "CfgGlasses")) apply {configName _x};

GF_ALC_Items_array = ("getNumber (_x >> 'type') isEqualTo 4096 && getNumber (_x>> 'scope') >1" configClasses (configfile >> "CfgWeapons")) apply {configName _x};
GF_ALC_Attachments_array = ("getNumber (_x >> 'type') isEqualTo 131072 && getNumber (_x>> 'scope') >1" configClasses (configfile >> "CfgWeapons")) apply {configName _x};

GF_ALC_Binocular_and_Nvg_array = (
	"getNumber ( _x >> 'scope' ) isEqualTo 2	
	&& getNumber ( _x >> 'type' ) in [ 131072, 4096 ]
	&& getNumber ( _x >> 'ItemInfo' >> 'type' ) in [ 0 , 616 ] 
	"configClasses (configfile >> "CfgWeapons")
	) apply {configName _x};
	//	copyToClipboard str GF_ALC_Binocular_and_Nvg_array; 


//________________	crashsite Vehicle	________________

GF_ALC_Vehicle_array = ("
	getNumber (_x >> 'scope') >= 1 
	&& ((configName _x isKindof 'Helicopter') or (configName _x isKindof 'plane'))
	&& (!(configName _x isKindof 'ParachuteBase')) 
	&& (!(configName _x isKindof 'UAV'))
	&& (!(configName _x isKindof 'B_UAV_01_F'))
	&& (!(configName _x isKindof 'O_UAV_01_F'))
	&& (!(configName _x isKindof 'I_UAV_01_F'))	
	&& (!(configName _x isKindof 'B_T_UAV_03_F'))
	&& (!(configName _x isKindof 'B_T_UAV_03_dynamicLoadout_F')) 
	&& (!(configName _x isKindof 'UAV_06_base_F'))
	&& (!(configName _x isKindof 'C_IDAP_UAV_01_F'))
	" configClasses (configFile >> "CfgVehicles")) apply {configName _x};
	//	copyToClipBoard str GF_ALC_Vehicle_array;	//	uncomment to copy
	
	
_items_case = "Load every Mod + Bohemia items";
_Select_items_Loaded = true;
};


case 2 : {

//________________	Load every Mod / No Bohemia items	________________

GF_ALC_primaryWeapon_array = ("(!(getText( _x >> 'author' ) == 'Bohemia Interactive')) && getNumber (_x >> 'type') isEqualTo 1 && getNumber (_x>> 'scope') isEqualTo 2" configClasses (configfile >> "CfgWeapons")) apply {configName _x};
GF_ALC_secondaryWeapon_array = ("(!(getText( _x >> 'author' ) == 'Bohemia Interactive')) && getNumber (_x >> 'type') isEqualTo 4 && getNumber (_x>> 'scope') isEqualTo 2" configClasses (configfile >> "CfgWeapons")) apply {configName _x};
GF_ALC_handgunWeapon_array = ("(!(getText( _x >> 'author' ) == 'Bohemia Interactive')) && getNumber (_x >> 'type') isEqualTo 2 && getNumber (_x>> 'scope') isEqualTo 2" configClasses (configfile >> "CfgWeapons")) apply {configName _x};
GF_ALC_Magazines_array = ("(!(getText( _x >> 'author' ) == 'Bohemia Interactive')) && getNumber (_x >> 'scope') isEqualTo 2 && getNumber (_x >> 'type') in [256,16,2*256,3*256,6*256]"configClasses (configFile >> "CfgMagazines")) apply {configName _x};

GF_ALC_Uniform_array = ("(!(getText( _x >> 'author' ) == 'Bohemia Interactive')) && getNumber (_x >> 'itemInfo' >> 'type') isEqualTo 801 && getNumber (_x>> 'scope') >1" configClasses (configfile >> "CfgWeapons")) apply {configName _x};
GF_ALC_Vests_array = ("(!(getText( _x >> 'author' ) == 'Bohemia Interactive')) && getNumber (_x >> 'itemInfo' >> 'type') isEqualTo 701 && getNumber (_x>> 'scope') >1" configClasses (configfile >> "CfgWeapons")) apply {configName _x};
GF_ALC_Headgear_array = ("(!(getText( _x >> 'author' ) == 'Bohemia Interactive')) && getNumber (_x >> 'itemInfo' >> 'type') isEqualTo 605 && getNumber (_x>> 'scope') >1" configClasses (configfile >> "CfgWeapons")) apply {configName _x};
GF_ALC_Backpacks_array = ("(!(getText( _x >> 'author' ) == 'Bohemia Interactive')) && getNumber (_x >> 'isbackpack') isEqualTo 1 && getNumber (_x>> 'scope') >1 && getNumber (_x>> 'maximumLoad') != 0" configClasses (configfile >> "CfgVehicles")) apply {configName _x};
GF_ALC_Goggles_array = ("(!(getText( _x >> 'author' ) == 'Bohemia Interactive')) && getNumber (_x >> 'scope') > 1" configClasses (configfile >> "CfgGlasses")) apply {configName _x};

GF_ALC_Items_array = ("(!(getText( _x >> 'author' ) == 'Bohemia Interactive')) && getNumber (_x >> 'type') isEqualTo 4096 && getNumber (_x>> 'scope') >1" configClasses (configfile >> "CfgWeapons")) apply {configName _x};
GF_ALC_Attachments_array = ("(!(getText( _x >> 'author' ) == 'Bohemia Interactive')) && getNumber (_x >> 'type') isEqualTo 131072 && getNumber (_x>> 'scope') >1" configClasses (configfile >> "CfgWeapons")) apply {configName _x};

GF_ALC_Binocular_and_Nvg_array = (
	"(!(getText( _x >> 'author' ) == 'Bohemia Interactive'))
	&& getNumber ( _x >> 'scope' ) isEqualTo 2	
	&& getNumber ( _x >> 'type' ) in [ 131072, 4096 ]
	&& getNumber ( _x >> 'ItemInfo' >> 'type' ) in [ 0 , 616 ] 
	"configClasses (configfile >> "CfgWeapons")
	) apply {configName _x};
	//	copyToClipboard str GF_ALC_Binocular_and_Nvg_array; 


//________________	crashsite Vehicle	________________

GF_ALC_Vehicle_array = ("
	(!(getText( _x >> 'author' ) == 'Bohemia Interactive'))
	&& getNumber (_x >> 'scope') >= 1 
	&& ((configName _x isKindof 'Helicopter') or (configName _x isKindof 'plane'))
	&& (!(configName _x isKindof 'ParachuteBase')) 
	&& (!(configName _x isKindof 'UAV'))
	&& (!(configName _x isKindof 'B_UAV_01_F'))
	&& (!(configName _x isKindof 'O_UAV_01_F'))
	&& (!(configName _x isKindof 'I_UAV_01_F'))	
	&& (!(configName _x isKindof 'B_T_UAV_03_F'))
	&& (!(configName _x isKindof 'B_T_UAV_03_dynamicLoadout_F')) 
	&& (!(configName _x isKindof 'UAV_06_base_F'))
	&& (!(configName _x isKindof 'C_IDAP_UAV_01_F'))
	" configClasses (configFile >> "CfgVehicles")) apply {configName _x};
	//	copyToClipBoard str GF_ALC_Vehicle_array;	//	uncomment to copy
	
	
_items_case = "Load every Mod - No Bohemia items";
_Select_items_Loaded = true;	
};


case 3 : {

//________________	Bohemia items Only	________________

GF_ALC_primaryWeapon_array = ("getText( _x >> 'author' ) == 'Bohemia Interactive' && getNumber (_x >> 'type') isEqualTo 1 && getNumber (_x>> 'scope') isEqualTo 2" configClasses (configfile >> "CfgWeapons")) apply {configName _x};
GF_ALC_secondaryWeapon_array = ("getText( _x >> 'author' ) == 'Bohemia Interactive' && getNumber (_x >> 'type') isEqualTo 4 && getNumber (_x>> 'scope') isEqualTo 2" configClasses (configfile >> "CfgWeapons")) apply {configName _x};
GF_ALC_handgunWeapon_array = ("getText( _x >> 'author' ) == 'Bohemia Interactive' && getNumber (_x >> 'type') isEqualTo 2 && getNumber (_x>> 'scope') isEqualTo 2" configClasses (configfile >> "CfgWeapons")) apply {configName _x};
GF_ALC_Magazines_array = ("getText( _x >> 'author' ) == 'Bohemia Interactive' && getNumber (_x >> 'scope') isEqualTo 2 && getNumber (_x >> 'type') in [256,16,2*256,3*256,6*256]"configClasses (configFile >> "CfgMagazines")) apply {configName _x};

GF_ALC_Uniform_array = ("getText( _x >> 'author' ) == 'Bohemia Interactive' && getNumber (_x >> 'itemInfo' >> 'type') isEqualTo 801 && getNumber (_x>> 'scope') >1" configClasses (configfile >> "CfgWeapons")) apply {configName _x};
GF_ALC_Vests_array = ("getText( _x >> 'author' ) == 'Bohemia Interactive' && getNumber (_x >> 'itemInfo' >> 'type') isEqualTo 701 && getNumber (_x>> 'scope') >1" configClasses (configfile >> "CfgWeapons")) apply {configName _x};
GF_ALC_Headgear_array = ("getText( _x >> 'author' ) == 'Bohemia Interactive' && getNumber (_x >> 'itemInfo' >> 'type') isEqualTo 605 && getNumber (_x>> 'scope') >1" configClasses (configfile >> "CfgWeapons")) apply {configName _x};
GF_ALC_Backpacks_array = ("getText( _x >> 'author' ) == 'Bohemia Interactive' && getNumber (_x >> 'isbackpack') isEqualTo 1 && getNumber (_x>> 'scope') >1 && getNumber (_x>> 'maximumLoad') != 0" configClasses (configfile >> "CfgVehicles")) apply {configName _x};
GF_ALC_Goggles_array = ("getText( _x >> 'author' ) == 'Bohemia Interactive' && getNumber (_x >> 'scope') > 1" configClasses (configfile >> "CfgGlasses")) apply {configName _x};

GF_ALC_Items_array = ("getText( _x >> 'author' ) == 'Bohemia Interactive' && getNumber (_x >> 'type') isEqualTo 4096 && getNumber (_x>> 'scope') >1" configClasses (configfile >> "CfgWeapons")) apply {configName _x};
GF_ALC_Attachments_array = ("getText( _x >> 'author' ) == 'Bohemia Interactive' && getNumber (_x >> 'type') isEqualTo 131072 && getNumber (_x>> 'scope') >1" configClasses (configfile >> "CfgWeapons")) apply {configName _x};

GF_ALC_Binocular_and_Nvg_array = (
	"getText( _x >> 'author' ) == 'Bohemia Interactive'
	&& (!(getText( _x >> 'DLC' ) in GF_ALC_Binocular_and_Nvg_array_Mod_Blacklist))
	&& getNumber ( _x >> 'scope' ) isEqualTo 2	
	&& getNumber ( _x >> 'type' ) in [ 131072, 4096 ]
	&& getNumber ( _x >> 'ItemInfo' >> 'type' ) in [ 0 , 616 ] 
	"configClasses (configfile >> "CfgWeapons")
	) apply {configName _x};
	//	copyToClipboard str GF_ALC_Binocular_and_Nvg_array; 


//________________	crashsite Vehicle	________________

GF_ALC_Vehicle_array = ("
	getText( _x >> 'author' ) == 'Bohemia Interactive'
	&& (!(getText( _x >> 'DLC' ) in GF_ALC_Vehicle_Mod_Blacklist))
	&& getNumber (_x >> 'scope') >= 1 
	&& ((configName _x isKindof 'Helicopter') or (configName _x isKindof 'plane'))
	&& (!(configName _x isKindof 'ParachuteBase')) 
	&& (!(configName _x isKindof 'UAV'))
	&& (!(configName _x isKindof 'B_UAV_01_F'))
	&& (!(configName _x isKindof 'O_UAV_01_F'))
	&& (!(configName _x isKindof 'I_UAV_01_F'))	
	&& (!(configName _x isKindof 'B_T_UAV_03_F'))
	&& (!(configName _x isKindof 'B_T_UAV_03_dynamicLoadout_F')) 
	&& (!(configName _x isKindof 'UAV_06_base_F'))
	&& (!(configName _x isKindof 'C_IDAP_UAV_01_F'))
	" configClasses (configFile >> "CfgVehicles")) apply {configName _x};
	//	copyToClipBoard str GF_ALC_Vehicle_array;	//	uncomment to copy
	
	
_items_case = "Load Bohemia items Only";
_Select_items_Loaded = true;	
};


case 4 : {

/*
//________________	Custom items only	________________
It is posible to add everything to one array and the code below will manage the spawn , 
GF_ALC_cfgArray = [];
But then delete the arrays and their count below
*/

//	add the classnames	ex:
GF_ALC_primaryWeapon_array  = ["CUP_arifle_HK_M27","CUP_arifle_M16A4_Base","arifle_TRG21_F","CUP_arifle_ACR_blk_556","CUP_arifle_ACRC_EGLM_blk_556","CUP_arifle_ACR_snw_556","CUP_arifle_AK103","CUP_arifle_AK12_black","CUP_arifle_AK74M_GL","CUP_arifle_AK74M_top_rail","CUP_arifle_AKS74","CUP_arifle_AS_VAL","CUP_arifle_FNFAL_railed","CUP_arifle_G36A","CUP_arifle_G36C","CUP_arifle_Galil_black","CUP_arifle_HK416_Black","CUP_arifle_M16A1GL","CUP_arifle_M16A4_Base","CUP_arifle_M4A1_SOMMOD_black","CUP_arifle_M4A1_SOMMOD_ctrg","CUP_arifle_MG36","CUP_arifle_SBR_od","CUP_lmg_M240","CUP_lmg_m249_para","CUP_lmg_M60E4","CUP_sgun_AA12","CUP_sgun_M1014","CUP_sgun_Saiga12K","CUP_smg_MP5A5","CUP_smg_MP5SD6","CUP_smg_MP7","CUP_smg_MP7_woodland","CUP_smg_bizon","CUP_srifle_AS50","CUP_srifle_G22_des","CUP_srifle_L129A1","CUP_srifle_M107_Base","CUP_srifle_M14_DMR","CUP_srifle_Mk12SPR","CUP_srifle_RSASS_Dazzle","CUP_srifle_M110","Rusty_srifle_DMR_04_F","arifle_MXM_F","arifle_MX_Black_F","arifle_Mk20_F","srifle_DMR_01_F","srifle_EBR_F","srifle_LRR_F"];
GF_ALC_secondaryWeapon_array = ["CUP_launch_M136"];
GF_ALC_handgunWeapon_array = ["CUP_hgun_Deagle","CUP_hgun_M9","CUP_hgun_MK23","hgun_ACPC2_F"];	
GF_ALC_Magazines_array = ["CUP_30Rnd_545x39_AK12_M","30Rnd_556x45_Stanag","CUP_20Rnd_762x51_FNFAL_M","CUP_10Rnd_127x99_M107","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_M203","CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_762x39_AK103_bakelite_M","CUP_20Rnd_9x39_SP5_VSS_M","CUP_100Rnd_556x45_BetaCMag","CUP_30Rnd_556x45_G36","CUP_25Rnd_762x51_Galil_Mag","CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_20Rnd_B_AA12_Pellets","CUP_20Rnd_B_AA12_HE","CUP_8Rnd_B_Beneli_74Slug","CUP_8Rnd_B_Saiga12_74Slug_M","CUP_30Rnd_9x19_MP5","CUP_40Rnd_46x30_MP7","CUP_64Rnd_9x19_Bizon_M","CUP_5Rnd_127x99_as50_M","CUP_5Rnd_762x67_G22","CUP_20Rnd_762x51_L129_M","CUP_20Rnd_762x51_DMR","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_762x51_B_M110","10Rnd_127x54_Mag","100Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_green","7Rnd_408_Mag","10Rnd_762x54_Mag","CUP_M136_M"];
GF_ALC_Uniform_array = ["U_B_GhillieSuit"];
GF_ALC_Vests_array = [];
GF_ALC_Headgear_array = [];
GF_ALC_Backpacks_array = ["B_Carryall_cbr","B_Parachute","B_Respawn_Sleeping_bag_F","B_TacticalPack_blk"];
GF_ALC_Goggles_array = [];
GF_ALC_Items_array = ["ItemWatch","ItemGPS","FirstAidKit"];
GF_ALC_Attachments_array = ["optic_Aco","CUP_optic_CompM4","Optic_Arco","CUP_optic_AC11704_Black","optic_DMS","CUP_optic_Elcan_SpecterDR_RMR_black","CUP_optic_Elcan_reflex","CUP_optic_HoloBlack","CUP_optic_LeupoldMk4","optic_LRPS","CUP_optic_ZDDot","optic_NVS","optic_Hamr","CUP_optic_TrijiconRx01_black","CUP_optic_ACOG_TA01B_OD","CUP_optic_1P87_RIS","CUP_optic_Kobra","CUP_muzzle_Bizon","CUP_muzzle_snds_mk23","muzzle_snds_acp","muzzle_snds_B","muzzle_snds_H_MG","muzzle_snds_L","muzzle_snds_M","CUP_muzzle_snds_M16","CUP_muzzle_TGPA"];
GF_ALC_Binocular_and_Nvg_array = ["NVGoggles","Rangefinder"];


//________________	crashsite Vehicle Custom array	________________

GF_ALC_Vehicle_array = [
	"Land_Wreck_Heli_Attack_01_F"
];


_items_case = "Custom items only";
_Select_items_Loaded = true;	
};


};


//________________	_Array_Loaded	________________

waituntil {_Select_items_Loaded};
_Array_Loaded = true;

if (GF_ALC_Hintsilent_info) then {
hintsilent format ["%1",_items_case]; 
};

if (GF_ALC_diag_log_info) then {
diag_log format ["%1",_items_case]; 
};


GF_ALC_cfgArray	=			//		["arifle_MX_SW_F"];	//	Test here an item Chemlight_green
	GF_ALC_primaryWeapon_array 
	+ GF_ALC_secondaryWeapon_array 
	+ GF_ALC_handgunWeapon_array
	+ GF_ALC_Magazines_array
	+ GF_ALC_Uniform_array
	+ GF_ALC_Vests_array
	+ GF_ALC_Headgear_array
	+ GF_ALC_Backpacks_array
	+ GF_ALC_Goggles_array
	+ GF_ALC_Items_array
	+ GF_ALC_Attachments_array
	+ GF_ALC_Binocular_and_Nvg_array;

waituntil {_Array_Loaded};


private ["_marker","_x","_a","_Pos"];

_x = 0;
_a = 0;	

//________________ Number of the Crashsites	________________

for "_x" from 0 to GF_ALC_Number + random GF_ALC_Number_random do {

_a = _a + 1;

//________________ Find Crashsite Position	________________

_Found = false;
while {!_Found} do {
	_Pos = [] call BIS_fnc_randomPos;
	
	_nearestRoad = [_Pos, 50] call BIS_fnc_nearestRoad;	
	_nearest_House = nearestObject [_Pos, "House"];
	_nearest_Building = nearestObject [_Pos, "Building"];
	
	if (		
	//________________	Add Blacklist Distance from all Players	________________
	(({((_Pos distance _x) <= GF_ALC_Distanse_from_Players)} count GF_ALC_allPlayers) isEqualTo 0)
	
	//________________	Add here your Blacklist Zones ( for more )	________________
	&& ((_Pos distance GF_ALC_Blacklist_Zone_1) > GF_ALC_Blacklist_Zone_distance) 
	&& ((_Pos distance GF_ALC_Blacklist_Zone_2) > GF_ALC_Blacklist_Zone_distance)
	&& ((_Pos distance GF_ALC_Blacklist_Zone_3) > GF_ALC_Blacklist_Zone_distance) 
	&& ((_Pos distance GF_ALC_Blacklist_Zone_4) > GF_ALC_Blacklist_Zone_distance) 
	&& ((_Pos distance GF_ALC_Blacklist_Zone_5) > GF_ALC_Blacklist_Zone_distance) 

	//________________	uncomment to add Distance from _nearestRoad - House - Building	________________
	//	&& ((_Pos distance _nearestRoad) > 50) 
	//	&& ((_Pos distance _nearest_House) > 50) 
	//	&& ((_Pos distance _nearest_Building) > 50) 
	
	) then {
	
	_Found = true;
	
if (GF_ALC_Systemchat_info) then {
systemchat format ["Crashsite Position Found %1",_Found];
};	
		}else{	

	_Found = false;
	
if (GF_ALC_Systemchat_info) then {
systemchat format ["Crashsite Position Found %1",_Found];
};	
	
};
};
	

waituntil {_Found};
	

//________________	crashsite Vehicle	________________

if(GF_ALC_Spawn_Normal_Vehicles ) then {

//________________	Normal_Vehicles	________________

GF_ALC_Vehicle = selectrandom GF_ALC_Vehicle_array;

} else {

//________________	Wrecks	________________

GF_ALC_Vehicle_array = [
	"Land_Wreck_Heli_Attack_01_F"
];

GF_ALC_Vehicle = selectrandom GF_ALC_Vehicle_array;
};


//________________	GF_ALC_Spawn_CraterLong	________________

_CraterLong = createVehicle ["CraterLong", _Pos, [], 0, "CAN_COLLIDE"];


//________________	CraterLong_small	________________ 

if(GF_ALC_Spawn_CraterLong_small) then {

for "_x" from 1 to 2 + random 3 do {
_Pos_Crater_small = _Pos getPos [random 5,random 360];
_Crater_small = createVehicle ["CraterLong_small", _Pos_Crater_small, [], 0, "CAN_COLLIDE"];
};
};

_height_of_drop = 0;
_Vehicle = createVehicle [GF_ALC_Vehicle, _Pos, [], 0, "FLY"];
_Vehicle setPosATL [getPosATL _Vehicle select 0, getPosATL _Vehicle select 1, _height_of_drop];

if (GF_ALC_Spawn_Crew) then {
createVehicleCrew _Vehicle;
};

if(GF_ALC_Spawn_Normal_Vehicles ) then {
_banked = selectrandom [0.50,-0.50];
_Vehicle setVectorUp [_banked,0,0]; //box is banked 90 degrees to the right
};

waituntil{!isNull _Vehicle};
_Vehicle setDamage 0.5 + random 0.5;




//________________	Crater	________________ 

if(GF_ALC_Spawn_Craters) then {

for "_x" from 1 to 3 + random 7 do {
_Pos_Crater = _Vehicle getPos [1 + random 10,random 360];
_Crater = createVehicle ["Crater", _Pos_Crater, [], 0, "CAN_COLLIDE"];
_Crater setdir random 360;
};
};

//________________	Oil_Spill_F	________________ 

if(GF_ALC_Spawn_Oil_Spill) then {

if (GF_ALC_Systemchat_info) then {
	systemchat "Spawn_Oil_Spill";
};

for "_x" from 1 to 3 + random 15 do {
_Pos_Oil = _Vehicle getPos [3 + random 20,random 360];
_Oil = createVehicle ["Oil_Spill_F", _Pos_Oil, [], 0, "CAN_COLLIDE"];
_Oil setdir random 360;

//________________	Smoke and fire attached to Oil_Spill_F	________________ 

if(GF_ALC_Spawn_Smoke_and_Fire_to_Oil) then {

if (GF_ALC_Systemchat_info) then {
	systemchat "Smoke_and_Fire_to_Oil";
};
	
switch (floor random 3) do {
 case 0: {

	_Fire = "#particlesource" createVehicle (getPos _Oil);
	_Fire setParticleClass "SmallDestructionFire";
	_Fire setParticleFire [0.3,1.5,0.1];
	
	_Smoke = "#particlesource" createVehicle (getPos _Oil);
	_Smoke setParticleClass "SmallDestructionSmoke";
	_Smoke setParticleFire [0.3,1.5,0.1];	
	};

 case 1: {

	_Fire = "#particlesource" createVehicle (getPos _Oil);
	_Fire setParticleClass "MediumDestructionFire";
	_Fire setParticleFire [0.3,1.5,0.1];
	
	_Smoke = "#particlesource" createVehicle (getPos _Oil);
	_Smoke setParticleClass "MediumDestructionSmoke";
	_Smoke setParticleFire [0.3,1.5,0.1];	
	};

 case 2: {
 	//	Nothing
	};	
	
};
	
};

};
};

//________________	Smoke and fire attached to vehicle	________________ 

if(GF_ALC_Spawn_Smoke_and_Fire_to_Vehicle) then {

if (GF_ALC_Systemchat_info) then {
	systemchat "Smoke_and_Fire_to_Vehicle";
};

switch (floor random 3) do {
 case 0: {

	_Fire_Veh = "#particlesource" createVehicle (getPos _Vehicle);
	_Fire_Veh setParticleClass "SmallDestructionFire";
	_Fire_Veh setParticleFire [0.3,1.5,0.1];
	_Fire_Veh attachTo [_Vehicle,[0,0,0]];
	
	_Smoke_Veh = "#particlesource" createVehicle (getPos _Vehicle);
	_Smoke_Veh setParticleClass "SmallDestructionSmoke";
	_Smoke_Veh setParticleFire [0.3,1.5,0.1];	
	_Smoke_Veh attachTo [_Vehicle,[0,0,0]];
	};

 case 1: {

	_Fire_Veh = "#particlesource" createVehicle (getPos _Vehicle);
	_Fire_Veh setParticleClass "MediumDestructionFire";
	_Fire_Veh setParticleFire [0.3,1.5,0.1];
	_Fire_Veh attachTo [_Vehicle,[0,0,0]];
	
	_Smoke_Veh = "#particlesource" createVehicle (getPos _Vehicle);
	_Smoke_Veh setParticleClass "MediumDestructionSmoke";
	_Smoke_Veh setParticleFire [0.3,1.5,0.1];	
	_Smoke_Veh attachTo [_Vehicle,[0,0,0]];
	};

 case 2: {

	_Fire_Veh = "#particlesource" createVehicle (getPos _Vehicle);
	_Fire_Veh setParticleClass "BigDestructionFire";
	_Fire_Veh setParticleFire [0.3,1.5,0.1];
	_Fire_Veh attachTo [_Vehicle,[0,0,0]];
	
	_Smoke_Veh = "#particlesource" createVehicle (getPos _Vehicle);
	_Smoke_Veh setParticleClass "BigDestructionSmoke";
	_Smoke_Veh setParticleFire [0.3,1.5,0.1];
	_Smoke_Veh attachTo [_Vehicle,[0,0,0]];
	};

 case 3: {	
	//	Nothing
	};
 
};
};


//________________	Cut the grass around the Crashsites	________________ 

if (GF_ALC_Grass_Cutter) then {

if (GF_ALC_Systemchat_info) then {
	systemchat "Grass_Cutter";
};

for "_x" from 1 to random 4 do {
_Pos_Cutter = _Vehicle getPos [2 + random 10,random 360];
createVehicle ["Land_ClutterCutter_large_F", _Pos_Cutter, [], 0, "CAN_COLLIDE"];
};

};	
		
sleep 2;
_Vehicle setPos _Pos;
_Vehicle setPosATL [getPosATL _Vehicle select 0, getPosATL _Vehicle select 1, _height_of_drop];


//________________	Spawn Loot around the Crashsites	________________ 

if (GF_ALC_Spawn_Loot) then {
		
for "_i" from 1 to GF_ALC_Spawned_Items + random GF_ALC_Spawned_Items_random do {

//________________	Position of the loot at the Crashsite	________________			

_Loot_Pos = _Pos getPos [
			6 + random 20,	//	distance
			random 360	
			];
			
			
//________________	_Loot	________________

private ["_Loot","_Item","_magazines","_Item_magazines","_getText","_Color","_Marker","_Text"];
	
	_Item = selectRandom GF_ALC_cfgArray;
	_getText = getText (configFile >> "cfgVehicles" >> _Item >> "vehicleClass");	
	
	_Loot = createVehicle ["WeaponHolderSimulated",[_Loot_Pos select 0, _Loot_Pos select 1,(_Loot_Pos select 2) +  0.06], [], 0, "CAN_COLLIDE"];	
	_Color = "Default";	//	https://community.bistudio.com/wiki/CfgMarkerColors_Arma_3
	_Text =  "Empty - ERROR";
	
	
	//	https://forums.bohemia.net/forums/topic/193019-can-i-detect-all-pistols-from-cfgweapons/?tab=comments#comment-3072020
	_type = [
	0,1,2,4,16,256,4096,131072,	 //>> "Type"
	101,201,301,302,401,501,601,602,603,604,605,607,611,616,617,620,701,801,901	//>> "ItemInfo" >> "type"
	];	 
	
	if (
	(getNumber (configFile >> "CfgWeapons" >> _item >> "ItemInfo" >> "type") in _type)
	or (getNumber (configFile >> "CfgWeapons" >> _item >> "type") in _type)
	or (getNumber (configFile >> "CfgWeapons" >> _item >> "ItemInfo" >> "type") in [ 0 , 616 ])
	or (isClass (configFile >> "CfgGlasses" >> _Item))
	or (isClass (configFile >> "CfgMagazines" >> _Item))
	 
	) then {
	
		
switch true do {
	
/*
 //>> "Type"

WeaponSlotPrimary 1
WeaponSlotHandGun 2
WeaponSlotSecondary 4
WeaponSlotHandGunItem 16
WeaponSlotItem 256
WeaponSlotBinocular 4096
WeaponHardMounted 65536
WeaponSlotInventory 131072

//>> "ItemInfo" >> "type"

DEFAULT_SLOT 0

MUZZLE_SLOT 101
OPTICS_SLOT 201
FLASHLIGHT_SLOT 301
BIPOD_SLOT 302
FIRSTAIDKIT_SLOT 401
FINS_SLOT 501
BREATHINGBOMB_SLOT 601
NVG_SLOT 602
GOGGLE_SLOT 603
SCUBA_SLOT 604
HEADGEAR_SLOT 605
FACTOR_SLOT 607
RADIO_SLOT 611
HMD_SLOT 616
BINOCULAR_SLOT 617
MEDIKIT_SLOT 619
TOOLKIT_SLOT 620 //added
VEST_SLOT 701
UNIFORM_SLOT 801
BACKPACK_SLOT 901
*/
	
//________________	Gear	________________

case(getNumber (configFile >> "CfgWeapons" >> _item >> "ItemInfo" >> "type") == 101) : {
	_Loot addItemCargoGlobal [ _Item, 1 ];
	_Color = "ColorGrey";_Text = "Muzzles";};

case(getNumber (configFile >> "CfgWeapons" >> _item >> "ItemInfo" >> "type") == 201) : {
	_Loot addItemCargoGlobal [ _Item, 1 ];
	_Color = "ColorGrey";_Text = "Optics";};

case(getNumber (configFile >> "CfgWeapons" >> _item >> "ItemInfo" >> "type") == 301) : {
	_Loot addItemCargoGlobal [ _Item, 1 ];
	_Color = "ColorGrey";_Text = "Rail Attachments";};
	
case(getNumber (configFile >> "CfgWeapons" >> _item >> "ItemInfo" >> "type") == 302) : {
	_Loot addItemCargoGlobal [ _Item, 1 ];
	_Color = "ColorGrey";_Text = "Bipods";};	

case(getNumber (configFile >> "CfgWeapons" >> _item >> "ItemInfo" >> "type") == 401) : {
	_Loot addItemCargoGlobal [ _Item, 1 ];
	_Color = "ColorYellow";_Text = "FirstAidKit";};
	
case(getNumber (configFile >> "CfgWeapons" >> _item >> "ItemInfo" >> "type") == 501) : {
	_Loot addItemCargoGlobal [ _Item, 1 ];
	_Color = "ColorBlack";_Text = "Fins";};

case(getNumber (configFile >> "CfgWeapons" >> _item >> "ItemInfo" >> "type") == 601) : {
	_Loot addItemCargoGlobal [ _Item, 1 ];
	_Color = "ColorBlack";_Text = "BREATHINGBOMB";};

case(getNumber (configFile >> "CfgWeapons" >> _item >> "ItemInfo" >> "type") == 602) : {
	_Loot addItemCargoGlobal [ _Item, 1 ];
	_Color = "ColorBlack";_Text = "Nvg";};	
	
case(getNumber (configFile >> "CfgWeapons" >> _item >> "ItemInfo" >> "type") == 603) : {
	_Loot addItemCargoGlobal [ _Item, 1 ];
	_Color = "ColorBlack";_Text = "Goggles";};		
	
case(getNumber (configFile >> "CfgWeapons" >> _item >> "ItemInfo" >> "type") == 604) : {
	_Loot addItemCargoGlobal [ _Item, 1 ];
	_Color = "ColorBlack";_Text = "Scuba";};			
	
case(getNumber (configFile >> "CfgWeapons" >> _item >> "ItemInfo" >> "type") == 605) : {
	_Loot addItemCargoGlobal [ _Item, 1 ];
	_Color = "ColorGreen";_Text = "Headgear";};	
	
case(getNumber (configFile >> "CfgWeapons" >> _item >> "ItemInfo" >> "type") == 607) : {
	_Loot addItemCargoGlobal [ _Item, 1 ];
	_Color = "ColorGreen";_Text = "Factor";};		
	
case(getNumber (configFile >> "CfgWeapons" >> _item >> "ItemInfo" >> "type") == 611) : {
	_Loot addItemCargoGlobal [ _Item, 1 ];
	_Color = "ColorGreen";_Text = "Radio";};	

case(getNumber (configFile >> "CfgWeapons" >> _item >> "ItemInfo" >> "type") == 616): {
	_Loot addItemCargoGlobal [ _Item, 1 ];
	_Color = "ColorBlue";_Text = "Nvg";};

case(getNumber (configFile >> "CfgWeapons" >> _item >> "ItemInfo" >> "type") == 617): {
	_Loot addItemCargoGlobal [ _Item, 1 ];
	_Color = "ColorBlue";_Text = "Binocular";};
	
case(getNumber (configFile >> "CfgWeapons" >> _item >> "ItemInfo" >> "type") == 619): {
	_Loot addItemCargoGlobal [ _Item, 1 ];
	_Color = "ColorBlue";_Text = "Medikit";};

case(getNumber (configFile >> "CfgWeapons" >> _item >> "ItemInfo" >> "type") == 620): {
	_Loot addItemCargoGlobal [ _Item, 1 ];
	_Color = "ColorBlue";_Text = "Toolkit";};

case(getNumber (configFile >> "CfgWeapons" >> _item >> "ItemInfo" >> "type") == 701) : {
	_Loot addItemCargoGlobal [ _Item, 1 ];
	_Color = "ColorKhaki";_Text = "Vests";};
	
case(getNumber (configFile >> "CfgWeapons" >> _item >> "ItemInfo" >> "type") == 801) : {
	_Loot addItemCargoGlobal [ _Item, 1 ];
	_Color = "ColorGUER";_Text = "Uniforms";};
	
case(getNumber (configFile >> "CfgWeapons" >> _item >> "ItemInfo" >> "type") == 901) : {
	_Loot addBackPackCargoGlobal [ _Item, 1 ];
	_Color = "ColorGUER";_Text = "Backpacks";};
			
case(_getText isEqualTo "Backpacks") : {
	_Loot addBackPackCargoGlobal [ _Item, 1 ];
	_Color = "ColorBrown";_Text = "Backpacks";};
		
case(isClass (configFile >> "CfgGlasses" >> _Item)) : {
	_Loot addItemCargoGlobal [ _Item, 1 ];
	_Color = "colorCivilian";_Text = "Glasses";};
	
	
//________________	Weapons	________________
	
case(getNumber (configFile >> "CfgWeapons" >> _item >> "type") == 1) : {
	_Loot addWeaponCargoGlobal [ _Item, 1 ];
	private _magazines = getArray (configFile >> "CfgWeapons" >> _Item >> "magazines");
	private _Item_magazines = selectRandom _magazines;
	_Loot addMagazineCargoGlobal [_Item_magazines, round (1 + random 2)];
	_Color = "ColorEAST";_Text = "WeaponsPrimary";};

case(getNumber (configFile >> "CfgWeapons" >> _item >> "type") == 2) : {
	_Loot addWeaponCargoGlobal [ _Item, 1 ];
	private _magazines = getArray (configFile >> "CfgWeapons" >> _Item >> "magazines");
	private _Item_magazines = selectRandom _magazines;
	_Loot addMagazineCargoGlobal [_Item_magazines, round (1 + random 2)];
	_Color = "ColorPink";_Text = "HandGuns";};
	
case(getNumber (configFile >> "CfgWeapons" >> _item >> "type") == 4) : {
	_Loot addWeaponCargoGlobal [ _Item, 1 ];
	private _magazines = getArray (configFile >> "CfgWeapons" >> _Item >> "magazines");
	private _Item_magazines = selectRandom _magazines;
	_Loot addMagazineCargoGlobal [_Item_magazines, round (1 + random 2)];
	_Color = "ColorOrange";_Text = "WeaponsSecondary";};

case(isClass (configFile >> "CfgMagazines" >> _Item)) : {
	_Loot addMagazineCargoGlobal [ _Item, round (1 + random 2)];
	_Color = "colorRed";_Text =  "Mags";};
	
case(getNumber (configFile >> "CfgWeapons" >> _item >> "type") == 4096) : {
	_Loot addItemCargoGlobal [ _Item, 1 ];
	_Color = "ColorWEST";_Text = "Items / Objects";};		

case(getNumber (configFile >> "CfgWeapons" >> _item >> "type") == 131072) : {
	_Loot addItemCargoGlobal [ _Item, 1 ];
	_Color = "ColorWhite";_Text = "Inventory Items";};	
	
case(getNumber (configFile >> "CfgWeapons" >> _item >> "type") == 0) : {
	_Loot addItemCargoGlobal [ _Item, 1 ];
	_Color = "colorBLUFOR";_Text = "Inventory Items";};
	
};

	} else {
	
	_Loot addItemCargoGlobal [ _Item, 1 ];
	_Color = "colorBLUFOR";_Text = "Inventory Items";	
	};

	
//________________	GF_ALC_Debug	________________
	
if (GF_ALC_Debug && {!(isNull _Loot)}) then {

	_Marker_Number = format ["%1",_Loot_Pos];
	_Marker = createMarker [_Marker_Number,getpos _Loot];		
	_Marker setMarkerShape "ICON"; 
	_Marker setMarkerType "mil_dot"; 
	_Marker setMarkerColor _Color; 
	_Marker setMarkerText _Text;	
	_Marker setMarkerSize [0.6,0.6]; 		
};			
			
			
};			
};
			
			
//________________	Spawn a Group at the Crashsite	________________

if (GF_ALC_Spawn_Enemy) then {

if (GF_ALC_Systemchat_info) then {
	systemchat "GF_ALC_Spawn_Enemy";
};

_Pos_Spawn =  [[[_Pos, 50 + random 250]],["water"]] call BIS_fnc_randomPos;
_Group = createGroup GF_ALC_Enemy_Side;

for "_x" from 0 to (GF_ALC_Squad_Members + floor random GF_ALC_Squad_Members_random) do {

_unit = _Group createunit [selectRandom GF_ALC_Pool_Infantry,_Pos_Spawn,[],0,"None"];
[_unit] JoinSilent _Group;
(leader _Group) setSkill GF_ALC_set_AiSkill + random GF_ALC_set_AiSkill_random;
};
[_Group,_Pos,GF_ALC_Patrol_distance + random GF_ALC_Patrol_distance_random] call BIS_fnc_taskPatrol;
};


//________________	GF_ALC_Debug	________________
	
if (GF_ALC_Create_Markers) then {

	_Marker_Number_Pos = format ["%1",_Pos];
	_Marker_Pos = createMarker [_Marker_Number_Pos,_Pos];		
	_Marker_Pos setMarkerShape "ICON"; 
	_Marker_Pos setMarkerType "mil_marker"; 
	_Marker_Pos setMarkerColor "ColorYellow"; 
	_Marker_Pos setMarkerText format ["Crashsite : %1",_a];	
	_Marker_Pos setMarkerSize [1,1]; 		
};	


if (GF_ALC_diag_log_info_count_Crashsites) then {
diag_log format ["Crashsites : %1",_a];
};

if (GF_ALC_Systemchat_info_count_Crashsites) then {
systemchat format ["Crashsites : %1",_a];
};


};


if (GF_ALC_Systemchat_info) then {
systemchat "GF_Auto_Loot_Crashsites Script initialized";			
};	

if (GF_ALC_diag_log_info) then {
diag_log "//________________ GF_Auto_Loot_Crashsites Script initialized ________________";
};

GF_ALC_Spawned_Items setVariable ["GF_Excude_from_cleanup",true];
GF_ALC_Spawned_Items_random setVariable ["GF_Excude_from_cleanup",true];