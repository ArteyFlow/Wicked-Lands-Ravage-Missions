addMissionEventHandler ["EntityKilled", {
    params ["_killed", "_killer", "_instigator", "_useEffects"];
    if (_killed isKindOf "CAManBase" && {isPlayer _killed || {_killed in playableUnits}}) then {
        _killed setVariable ["GF_Excude_from_cleanup",true,true];
    };
}];