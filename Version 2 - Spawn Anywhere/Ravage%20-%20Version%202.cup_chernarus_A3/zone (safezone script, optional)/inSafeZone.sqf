hint "In Safe Zone";
player allowDamage false;
isSafe = true;
//private _ctrl1 = (findDisplay 49) displayCtrl 104;

while {isSafe} do
{
	uisleep 0.1;
	((findDisplay 49) displayctrl 104) ctrlEnable false;
	uisleep 0.1;
	((findDisplay 49) displayctrl 104) ctrlSetText format ["IN SAFEZONE",true];

	derp = player action ["SwitchWeapon", player, player, 100];
	sleep 1;
};
