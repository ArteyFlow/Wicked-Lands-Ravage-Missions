_cityPosArray = call dmd_fnc_getCityPos;						// get an array of all the cities/towns on the map. 
_cityPosArray = _cityPosArray call dmd_fnc_arrayShuffle;		// shuffle the array (so we get different invasion/redzone cities on each restart) 

// 5 cities to be used for RedZone strikes
_redZneCities = [];
for "_i" from 0 to 4 do { _redZneCities pushBack (_cityPosArray select _i); };

// remaining cities to be used for invasion missions 
_invadeCities = [];
for "_ii" from 5 to (count _cityPosArray)-1 do { _invadeCities pushBack (_cityPosArray select _ii); };


[_redZneCities] execVM "Server\redZone.sqf";					// start the red zone arty strikes
[_invadeCities] execVM "Server\AI\invasion.sqf";				// start the invasion missions loop
[] execVM "Server\AI\mainMission.sqf";							// main missions system
[] execVM "Server\Scripts\timeCycle.sqf";