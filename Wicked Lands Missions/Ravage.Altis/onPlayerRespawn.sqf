player addWeapon "ItemMap";

_addUniform = ["U_BG_Guerilla1_1_rvg","U_BG_Guerilla2_1","U_BG_Guerilla2_2","U_BG_Guerilla2_3","U_BG_Guerilla3_1","U_C_Poor_1","U_C_WorkerCoveralls","U_I_G_Soldier_para_F"];

_uniformSelection = _addUniform call BIS_fnc_selectRandom;

player addUniform _uniformSelection;

sleep 0.1;

player addItemToUniform "CUP_8Rnd_9x18_Makarov_M";
player addItemToUniform "CUP_8Rnd_9x18_Makarov_M";
player addItemToUniform "CUP_8Rnd_9x18_Makarov_M";
player addItemToUniform "CUP_8Rnd_9x18_Makarov_M";

sleep 0.1;

player addWeapon "CUP_hgun_Makarov";

sleep 0.1;

player addItemToUniform "Chemlight_red";
player addItemToUniform "Chemlight_blue";
player addItemToUniform "Chemlight_green";
player addItemToUniform "Chemlight_yellow";

sleep 0.1;

player enableStamina false;

sleep 5;
[ "Altis", player call BIS_fnc_locationDescription ] spawn BIS_fnc_infoText;