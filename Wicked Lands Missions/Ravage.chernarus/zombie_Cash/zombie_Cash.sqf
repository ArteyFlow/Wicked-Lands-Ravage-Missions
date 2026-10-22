if (isServer) then {
    addMissionEventHandler ["EntityKilled", {
        params ["_killed", "_killer", "_instigator", "_useEffects"];
        if (_killed isKindOf "zombie") then {
            private _player = _instigator;
            if (isNull _player || {!isPlayer _player}) then {
                _player = _killer;
            };
            if (!isNull _player && {isPlayer _player}) then {
                _player setVariable ["hals_money_funds", (_player getVariable ["hals_money_funds", 0]) + 20, true];
            };
        };
    }];
};