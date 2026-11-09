// SETTINGS EASILY CHANGED BY PLAYER HOST THROUGH PARAMETERS ON STARTUP
// IF RUNNING IN DEDI, JUST CHANGE THE DEFAULT VALUE
class params {
	class aiskillsettings {
		title = "AI Mission Difficulty";
		values[] = {0,1,2,3};
		texts[] = {"Very Easy","Easy","Medium","Hard"};
		default = 2;
	};
	class Daytime
	{
		title = "Time of Day";
		texts[] = {"Dawn","Morning","Noon","Afternoon","Evening","Night","Midnight","Early Morning"};
		values[] = {6,9,12,15,18,21,0,3};
		default = 9;
		function = "BIS_fnc_paramDaytime"; // (Optional) Function called when player joins, selected value is passed as an argument
		isGlobal = 1; // (Optional) 1 to execute script / function locally for every player who joins, 0 to do it only on server
	};
	class daytimeMultiplier {
		title = "Time Acceleration - Daytime Multiplier";
		values[] = { 1, 2, 3, 4, 5, 10, 20, 30, 40, 50, 60 };
		texts[] = {"x1", "x2", "x3", "x4", "x5", "x10", "x20", "x30", "x40", "x50", "x60"};
		default = 1;
	};
	class nighttimeMultiplier {
		title = "Time Acceleration - Nighttime Multiplier";
		values[] = { 1, 2, 3, 4, 5, 10, 20, 30, 40, 50, 60 };
		texts[] = {"x1", "x2", "x3", "x4", "x5", "x10", "x20", "x30", "x40", "x50", "x60"};
		default = 1;
	};
	class GF_ColorCorrections {
		title = "Color Correction Theme Selection";
		values[]={0,1,2,3,4,5,6,7};
	    texts[]={
		"Disabled",
		"Realistic",
		"Post Apocalyptic",
		"Nightstalkers",
		"Afghan",
		"Gray Tone",
		"Cold Tone",
		"Mediterranean"
		};
	   default=0;
    };
};

// SETTINGS DEFINED ELSEWHERE
class dmd_cfg_settings {

    class ServerSettings {
        
        // used to stop blank ammunition spawning on AI / Loot Crates
        blackListMags[] = {
            "rhsusf_100Rnd_762x51_m82_blank",
            "rhsusf_50Rnd_762x51_m82_blank",
            "rhs_mag_30Rnd_556x45_M200_Stanag",
            "rhs_mag_20Rnd_556x45_M200_Stanag",
            "rhsusf_100Rnd_556x45_M200_soft_pouch",
            "rhsusf_100Rnd_556x45_M200_soft_pouch_ucp",
            "rhsusf_100Rnd_556x45_M200_soft_pouch_coyote"
        };

        // World Specific Settings (this should make it easier for people to port this mission to other maps - many scripts will switch values based on worldName 
        class worldSettings {

            class defaultMap {
                friendlyName = "";
                exclusionZones[] = {};      // {"Guglovo"} missions wont spawn within 1000m of guglovo, and base objects wont spawn there either.
                exclusionPos[] = {};        // {{position},radius}  eg. {{2000,2000,0},100}     // missions wont spawn radius meters from position. 
                safeZones[] = {};

                exclusionDist = 1000;       // missions wont spawn x meters  from the exclusionZones locations.
                playerDist = 800;           // missions wont spawn within this distance of any players
            };

            // CHERNARUS REDUX 
            class chernarusredux : defaultMap {
                friendlyName = "Chernarus Redux";
                safeZones[] = {};
                exclusionZones[] = {"Guglovo", "Chernogorsk", "Elektrozavodsk"};
            };

            // ISLA DUALA A3
            class isladuala3 : defaultMap {
                friendlyName = "Isla Duala";
            };

            // VANILLA TERRAINS
            class Altis : defaultMap {
                friendlyName = "Altis";
                exclusionZones[] = {"Kavala","Pyrgos"};
            };

            class Malden : defaultMap {
                friendlyName = "Malden";
            };

            class Tanoa : defaultMap {
                friendlyName = "Tanoa";
            };

            class Stratis : defaultMap {
                friendlyName = "Stratis";
            };

            // CUP Terrains
            class sara : defaultMap {
                friendlyName = "Sahrani";
            };

            class saralite : defaultMap {
                friendlyName = "Southern Sahrani";
            };

            class sara_dbe1 : defaultMap {
                friendlyName = "United Sahrani";
            };

            class chernarus : defaultMap {
                friendlyName = "Chernarus";
            };

            class chernarus_summer : defaultMap {
                friendlyName = "Chernarus (Summer)";
            };

            class Chernarus_Winter : defaultMap {
                friendlyName = "Chernarus (Winter)";
            };

            class takistan : defaultMap {
                friendlyName = "Takistan"; 
            };

            class utes : defaultMap {
                friendlyName = "Utes";
            };
			
			//Other Maps
			class taviana : defaultMap {
                friendlyName = "Taviana";
            };
			class lingor3: defaultMap {
                friendlyName = "Lingor";
            };
			class Napf: defaultMap {
                friendlyName = "Napf Island";
            };
			class NapfWinter : defaultMap {
                friendlyName = "Napf Island - Winter";
            };
			class panthera3 : defaultMap {
                friendlyName = "Panthera";
            };
			class Winthera3 : defaultMap {
                friendlyName = "Panthera - Winter";
            };
        };

        // smoke shell colours - these are used across a few scripts. just call/edit them from here.
        smokeShellColours[] = {"SmokeShell","SmokeShellYellow","SmokeShellRed","SmokeShellGreen","SmokeShellPurple","SmokeShellBlue","SmokeShellOrange"};
    };
    
    /***    SETTINGS FOR AI MISSIONS       ***/
    #include "dmd_ai_missions.hpp"
};
/***    PRESET AI LOADOUTS (no shit, sherlock)      ***/
#include "dmd_ai_loadouts.hpp"