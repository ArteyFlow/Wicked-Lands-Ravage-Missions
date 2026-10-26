// ==========================
// FIXED EMPTY Plane Spawner Script
// FIXED: Random plane per marker! (selectRandom now INSIDE loop)
// Spawns EMPTY planes (no crew) at markers.
// ==========================

// List of markers where planes will spawn
private _planeMarkers = [
    "VD_PlaneMrkr",
    "VD_PlaneMrkr_1",
    "VD_PlaneMrkr_2",
    "VD_PlaneMrkr_3",
    "VD_PlaneMrkr_4",
    "VD_PlaneMrkr_5",
	"VD_PlaneMrkr_6",
	"VD_PlaneMrkr_7",
	"VD_PlaneMrkr_8",
	"VD_PlaneMrkr_9"
];

// FIXED Random plane pool — picks DIFFERENT plane for EACH marker!
private _planePool = [
    "CUP_B_MV22_USMC_RAMPGUN",        // Osprey w/ Ramp Gun
    "CUP_C_AN2_AEROSCHROT_TK_CIV" // Civilian Plane
];

// Other config
private _side        = west;
private _flyInHeight = false;
private _altitude    = 800;
private _direction   = 0;
private _locked      = false;

{
    private _marker   = _x;
    private _pos      = getMarkerPos _marker;
    private _markerDir = markerDir _marker;
    private _heading  = if (_direction != 0) then {_direction} else {_markerDir};

    // FIXED: Select RANDOM plane for THIS marker only (inside loop!)
    private _planeType = selectRandom _planePool;

    private _plane = objNull;

    if (_flyInHeight) then {
        _pos set [2, _altitude];
        _plane = createVehicle [_planeType, _pos, [], 0, "FLY"];
        _plane setDir _heading;
        _plane setPosATL _pos;
        _plane flyInHeight _altitude;
    } else {
        _plane = createVehicle [_planeType, _pos, [], 0, "NONE"];
        _plane setDir _heading;
        _plane setPosASL (getPosASL _plane vectorAdd [0, 0, -0.5]);
    };

    // Set side for Zeus/MP
    _plane setVariable ["side", _side, true];

    // Lock?
    if (_locked) then { _plane lock 2; };

    // Optional: Indestructible
    // _plane allowDamage false;

    // Debug: See what spawned where
    //systemChat format ["EMPTY %1 spawned at %2", getText (configFile >> "CfgVehicles" >> _planeType >> "displayName"), _marker];

    sleep 0.1;

} forEach _planeMarkers;