["Initialize"] call BIS_fnc_dynamicGroups;

sleep 5;
[] execVM "Plane_Spawner\Plane_Spawner.sqf";

sleep 30;
[] execVM "GF_Auto_Loot_Crashsites\GF_Auto_Loot_Crashsites.sqf";