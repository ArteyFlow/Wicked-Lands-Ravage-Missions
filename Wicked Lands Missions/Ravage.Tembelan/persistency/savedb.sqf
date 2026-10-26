[] spawn {
    waitUntil {!isNull(findDisplay 46)};

    (findDisplay 46) displayAddEventHandler ["KeyDown", {
        if(_this select 1 == 1) //ESC key
        then {
          [] execVM "persistency\autosave.sqf";

        };
    }];
};