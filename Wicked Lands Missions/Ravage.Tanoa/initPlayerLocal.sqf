_spawn_pos = (selectRandom [[5901.7,12830], [12919,4803.83], [8791.79,3296.21], [7035.21,13492.5], [12874.9,6788.4], [8181.09,13678.8], [5002,10064.9], [12343.4,6633.62], [13729.6,7470.39], [9261.68,4798.28], [13021.5,2102.92], [12243.8,2821.26], [11468,2122.2], [10051.5,2450.34], [5399.43,11034.7], [10426.8,13474.2], [14396.4,11597.7], [4058.51,8273.58], [14666.4,9932.19], [11576.8,6266.93], [5092.78,11684.7], [7450.17,13591.6], [5517.32,7547.97], [10610.9,5208.43], [9345.3,2679.4], [8540.3,4278.31], [10730,1864.46], [11949.8,1334.65], [12639.5,1591.76], [13340.5,2572.79], [13310.4,3260.96], [12927.1,3492.76], [13188.1,4034.08], [9844.58,6346.58], [11510.8,5418.02], [9851.68,4852.1], [9704.37,4163.35], [5076.69,8375.61], [5434.7,12469], [6550.23,13206.7], [14812.7,10724], [10744.9,6286.02], [4473.78,8968.08], [5013.65,1777.99], [14147.8,8416.54], [4899.86,5397.75], [2312.24,1867.33], [3679.46,2054.58], [5639.83,3182.81], [7289.3,4353.35], [6066.54,4887.23], [3922.9,4496.92], [1557.28,8552.61], [3117.92,5510.74], [1565.25,6411.74], [4723.62,9538.51], [3141.75,7151.16], [4258.61,6094.47], [882.044,7398.58], [1964.84,10097.4], [1837.81,11483.5], [4293.75,11759.1], [3280.1,11074.9], [3914.01,12857.5], [3830.93,14177.4], [13015.5,12533.7], [14527.1,9110.36], [12271.2,12889.6], [11171.3,13170.5], [2090.76,13568], [1813.73,4523.52], [1418.21,2895.4], [3651.2,3054.59], [7491.78,6734.15], [6442.6,7051.31], [12302.5,5427.87], [8496,6459.69]]); call BIS_fnc_selectRandom;
waitUntil {!isnull player};
player setPos (_spawn_pos);

sleep 0.1;
[] execVM "GF_Ravage_Status_Bar\GF_Ravage_Status_Bar.sqf";

sleep 0.1;
[] execVM "Client\PVEH.sqf";			// PublicVariableEventHandlers for server communication (saving etc)

sleep 0.1;
[] execVM "GF_Ravage_Heros_Money_Reward\GF_Ravage_Heros_Money_Reward.sqf";

sleep 0.1;
[] execVM "zombie_Cash\zombie_Cash.sqf";

sleep 0.1;
[] execVM "give_money\give_money.sqf";

sleep 0.1;
[] execVM "GF_Kill_info\GF_Kill_info_init.sqf";

sleep 0.2;
[] execVM "GF_ColorCorrections\GF_ColorCorrections.sqf";

player enableStamina false;

if (hasInterface) then {
sleep 1.5;
[] execVM "persistency\savedb.sqf";
private ["_player"];
_player =_this select 0;
waitUntil {!isNull _player};
//HALs funds saver
if (isNil {profileNamespace getVariable "hals_money_funds"}) then {
    profileNamespace setVariable ["hals_money_funds", 0];
};
_profile = (profileNamespace getVariable "hals_money_funds");
_player setVariable ["hals_money_funds", _profile];
};

sleep 5;
[ "Tanoa", player call BIS_fnc_locationDescription ] spawn BIS_fnc_infoText;

["InitializePlayer", [player]] call BIS_fnc_dynamicGroups;

fnc_otherUnif = {  
  params ["_type","_return"];  
  if (_type == 0) exitWith {  
    MGI_button = _return #1; false  
  };  
  if (_type == 1 and !isnil "MGI_button" && {MGI_button == 1}) then {  
    disableSerialization;  
    _control = _return select 0;  
    _index = _return select 1;  
    private _idc = ctrlIDC _control;  
    private _text = lbText [_idc, _index];  
    private _picture = lbPicture [_idc,_index];  
    private _uniforms = ("getText (_x >> 'displayName') == _text && getNumber (_x >> 'ItemInfo' >> 'type') == 801" configClasses (configFile >> "CfgWeapons")); 
 
    if (_uniforms isEqualType [] && {!(_uniforms isEqualTo [])}) then {  
      [_idc,_text,_picture,_index,_uniforms] spawn {  
        params ["_idc","_text","_picture","_index","_uniforms",["_selectedUnif",""],"_unifConts",["_uniformObject",objNull],"_otherItems","_g0"];  
        private _currentUnif = uniform player;  
        private _currentInvent = uniformItems player;  
        _currentInvent = (_currentInvent arrayIntersect _currentInvent) apply {private _v= _x;[_x]+[{_v isEqualTo _x} count _currentInvent]}; 
        private _selectedUnif = ((_uniforms select {toLower (gettext (_x >> "picture")) splitString "\"joinString "\" == _picture}) apply {configName _x}); 
        if (_selectedUnif isEqualTo []) exitWith {}; 
        _selectedUnif = _selectedUnif #0; 
  
        if !(pl_container isKindOf "CAManBase") then {  
          _unifConts = (everyContainer pl_container select {getNumber (configFile >> "CfgWeapons" >> _x #0 >> 'ItemInfo' >> 'type') == 801});  
          _cnt = 0; 
 
          for "_i" from 0 to _index do {  
            if (lbText [_idc,_i] == _text) then {  
              _cnt = _cnt +1;  
              _uniformObject = _unifConts select {_selectedUnif == (_x #0)} select (_cnt -1) select 1  
            };  
          };  
        } else {  
          _uniformObject = uniformContainer pl_container  
        }; 
 
        if (!isNull _uniformObject && !(player isUniformAllowed _selectedUnif)) then { 
           
          private _itemsAndMags = (_uniformObject call MGI_orderItsAndMgs) params ["_selectedItems","_selectedMags"]; 
           
          if !(pl_container isKindOf "CAmanbase" or isNull pl_container) then {  
            private _its = getItemCargo pl_container; 
            private _mgs = magazinesAmmoCargo pl_container; 
            private _unifItems = _unifConts apply {_x #0}; 
            private _vestConts = (everyContainer pl_container select {getNumber (configFile >> "CfgWeapons" >> _x #0 >> 'ItemInfo' >> 'type') == 701}); 
            private _vestItems = _vestConts apply {_x #0}; 
            _otherItems = +(_its #0) - _unifItems - _vestItems; 
            _otherItems = _otherItems apply {[_x,_its #1#(_its #0 find _x)]}; 
            private _conts = _unifConts + _vestConts; 
            for '_i' from 0 to count _Conts -1 do { 
              if (_conts #_i #1 == _uniformObject) exitWith { 
                _conts deleteAt _i 
              }; 
            }; 
           
            pl_container setVariable ["MGIallContForWear",[]]; 
            { 
              private _itsAndMgs = ((_x #1) call MGI_orderItsAndMgs) params ["_its","_mgs"]; 
              (pl_container getVariable "MGIallContForWear") pushBack [_x #0,_its,_mgs]; 
            } forEach _conts; 
            _g0 = pl_container; 
            clearItemCargoGlobal _g0; 
          } else { 
            _g0 = createVehicle ['WeaponHolderSimulated_Scripted', (player modelToWorld [0,1,1]), [], 0, 'CAN_COLLIDE'] 
          }; 
 
          player forceAddUniform _selectedUnif;  
          private _unif = uniformContainer player; 
          {_unif addItemCargoGlobal [_x#0,_x#1]} count _selectedItems; 
          {_unif addMagazineAmmoCargo [_x#0,_x#2,_x#1]} count _selectedMags;  
          call {  
            if (pl_container isKindOf "CAManBase") exitWith {  
              removeUniform pl_container  
            };  
            {  
              _x params ["_cont",["_it",[]],["_mag",[]]];  
              pl_container addItemCargoGlobal [_cont,1];  
              private _createdCont = pl_container call MGI_lastCont; 
              {_createdCont addItemCargoGlobal [_x#0,_x#1]} count _it; 
              {_createdCont addMagazineAmmoCargo [_x#0,_x#2,_x#1]} count _mag;  
            } forEach (pl_container getVariable "MGIallContForWear"); 
            {_g0 addItemCargoGlobal [_x #0,_x #1]} forEach _otherItems;  
          };  
           
          _g0 addItemCargoGlobal [_currentUnif,1]; 
          _lastCont = _g0 call MGI_lastCont;  
          {_lastCont addItemCargoGlobal [_x #0,_x #1]} forEach _currentInvent;  
          if (_g0 isKindOf "WeaponHolderSimulated" && {(count itemCargo _g0 + count magazineCargo _g0 + count weaponCargo _g0 + count backpackCargo _g0) == 0}) then {  
            deleteVehicle _g0  
          };  
        };  
      }; 
    };  
  MGI_button = 0; false  
  };  
}; 
 
MGI_orderItsAndMgs = compileFinal " 
  params [['_uniformObject', objNull,[objNull]]]; 
  private _items = getItemCargo _uniformObject; 
  private _mags = magazinesAmmoCargo _uniformObject; 
  private _selectedItems = (_items #0) apply {[_x,_items #1#(_items #0 find _x)]}; 
  private _selectedMags = (_mags arrayintersect _mags) apply {private _v= _x;_x+[{_v isEqualTo _x} count _mags]}; 
  [_selectedItems,_selectedMags]; 
"; 
 
MGI_lastCont = compileFinal "  
  params [['_cont',objNull]];  
  private '_lastCont';  
   _invent = (everyContainer _cont - (everyBackpack _cont apply {[typeOf _x,_x]}));  
   if !(_invent isEqualTo []) then {  
    _lastCont = _invent select (count _invent -1) select 1;  
   } else {  
    _lastCont = _cont;  
   };  
   _lastCont  
";  
  
player addEventHandler ["InventoryOpened", {  
  params ["_unit", "_container"];  
  pl_container = _container;  
  [] spawn {  
    waitUntil {!(isNull findDisplay 602)};  
    disableSerialization;  
    {(findDisplay 602 displayCtrl _x) ctrlAddEventHandler ["MouseButtonClick", "[0,_this] call fnc_otherUnif"]} forEach [632,640];  
    {(findDisplay 602 displayCtrl _x) ctrlAddEventHandler ["LBSelChanged", "[1,_this] spawn fnc_otherUnif"]} forEach [632,640];  
  };  
}];

sleep 10;
VABB_ObjectsBP = ["BlockConcrete_F","CamoNet_BLUFOR_F","CamoNet_BLUFOR_open_F","CamoNet_OPFOR_F","CamoNet_OPFOR_open_F","Land_ArmChair_01_F","Land_BackAlley_01_l_1m_F","Land_BackAlley_01_l_gate_F","Land_BagBunker_01_large_green_F","Land_BagBunker_01_small_green_F","Land_BagBunker_Large_F","Land_BagBunker_Small_F","Land_BagBunker_Tower_F","Land_BagFence_01_long_green_F","Land_BagFence_01_round_green_F","Land_BagFence_Corner_F","Land_BagFence_Long_F","Land_BagFence_Round_F","Land_BambooFence_01_s_4m_F","Land_Barricade_01_10m_F","Land_Barricade_01_4m_F","Land_Bench_01_F","Land_Bench_02_F","Land_Bench_03_F","Land_Bench_04_F","Land_Bench_05_F","Land_Bench_F","Land_BrickWall_01_l_5m_F","Land_BrickWall_02_l_5m_F","Land_BrickWall_03_l_5m_v1_F","Land_BrickWall_04_l_5m_old_F","Land_Bunker_01_big_F","Land_Bunker_01_small_F","Land_Bunker_01_tall_F","Land_Bunker_02_light_double_F","Land_CamoConcreteWall_01_l_4m_v1_F","Land_CampingChair_V1_F","Land_CampingChair_V2_F","Land_CampingChair_V2_white_F","Land_CampingTable_F","Land_CampingTable_small_F","Land_CampingTable_small_white_F","Land_Camping_Light_F","Land_CanvasCover_01_F","Land_Cargo_HQ_V1_F","Land_Cargo_HQ_V3_F","Land_Cargo_House_V1_F","Land_Cargo_House_V3_F","Land_Cargo_Patrol_V1_F","Land_Cargo_Patrol_V2_F","Land_Cargo_Patrol_V3_F","Land_ChairPlastic_F","Land_ChairPlastic_F","Land_ChairWood_F","Land_ChairWood_F","Land_Chapel_Small_V1_F","Land_Chapel_V1_F","Land_CinderBlocks_F","Land_City2_8m_F","Land_City_4m_F","Land_City_8m_F","Land_City_Gate_F","Land_CncBarrierMedium4_F","Land_CncBarrierMedium_F","Land_CncBarrier_F","Land_CncShelter_F","Land_CncWall1_F","Land_CncWall4_F","Land_CobblestoneSquare_01_4m_F","Land_ConcretePanels_02_single_v1_F","Land_ConcreteWall_01_l_4m_F","Land_ConcreteWall_01_l_gate_F","Land_Concrete_SmallWall_4m_F","Land_Concrete_SmallWall_8m_F","Land_DeerStand_01_F","Land_DeerStand_02_F","Land_GH_Gazebo_F","Land_GH_House_1_F","Land_GH_House_2_F","Land_GH_Stairs_F","Land_GameProofFence_01_l_5m_F","Land_GameProofFence_01_l_gate_F","Land_GarageShelter_01_F","Land_Grave_dirt_F","Land_Greenhouse_01_F","Land_HBarrierWall4_F","Land_HBarrier_01_big_tower_green_F","Land_HBarrier_01_line_3_green_F","Land_HBarrier_01_tower_green_F","Land_HBarrier_01_wall_corridor_green_F","Land_HBarrier_3_F","Land_House_1W01_F","Land_House_1W02_F","Land_House_1W03_F","Land_House_1W04_F","Land_House_1W05_F","Land_House_1W06_F","Land_House_1W07_F","Land_House_1W08_F","Land_House_1W09_F","Land_House_1W10_F","Land_House_1W11_F","Land_House_1W12_F","Land_House_1W13_F","Land_House_2W01_F","Land_House_2W02_F","Land_House_2W03_F","Land_House_2W04_F","Land_House_2W05_F","Land_IndFnc_3_F","Land_IndFnc_9_F","Land_MarketShelter_F","Land_MetalShelter_01_F","Land_MetalShelter_02_F","Land_Metal_Shed_F","Land_Metal_rack_F","Land_Metal_rack_Tall_F","Land_Metal_wooden_rack_F","Land_Mil_WallBig_4m_F","Land_Mil_WallBig_Gate_F","Land_Mil_WiredFence_F","Land_Mil_WiredFence_F","Land_Mil_WiredFence_Gate_F","Land_NetFence_01_m_4m_F","Land_NetFence_01_m_8m_F","Land_NetFence_01_m_gate_F","Land_Net_Fence_4m_F","Land_Net_Fence_8m_F","Land_Net_Fence_Gate_F","Land_New_WiredFence_10m_F","Land_New_WiredFence_5m_F","Land_Obstacle_Pass_F","Land_Obstacle_Ramp_F","Land_OfficeCabinet_01_F","Land_OfficeCabinet_02_F","Land_OfficeChair_01_F","Land_Pallet_F","Land_Pallet_vertical_F","Land_Pavement_narrow_F","Land_Pavement_narrow_corner_F","Land_PierLadder_F","Land_PipeFence_01_m_4m_F","Land_PipeFence_01_m_gate_v1_F","Land_Pipe_fence_4m_F","Land_Plank_01_4m_F","Land_Plank_01_8m_F","Land_Rack_F","Land_Rail_ConcreteRamp_F","Land_RampConcreteHigh_F","Land_RampConcrete_F","Land_RattanChair_01_F","Land_RattanTable_01_F","Land_Razorwire_F","Land_Rug_01_F","Land_Rug_01_Traditional_F","Land_SandbagBarricade_01_F","Land_SandbagBarricade_01_half_F","Land_SandbagBarricade_01_hole_F","Land_Shed_09_F","Land_Shed_10_F","Land_Shed_11_F","Land_Shed_12_F","Land_Shed_13_F","Land_Shed_14_F","Land_ShelvesMetal_F","Land_ShelvesWooden_F","Land_ShelvesWooden_blue_F","Land_ShelvesWooden_khaki_F","Land_Sidewalk_02_8m_F","Land_Sidewalk_02_corner_F","Land_SilageWall_01_l_5m_F","Land_SlumWall_01_s_4m_F","Land_Slum_01_F","Land_Slum_02_F","Land_Slum_03_F","Land_Slum_House01_F","Land_Slum_House02_F","Land_Slum_House03_F","Land_Slums02_4m","Land_Sofa_01_F","Land_Sofa_01_F","Land_SportGround_fence_F","Land_Stone_4m_F","Land_Stone_Gate_F","Land_TableBig_01_F","Land_TableDesk_F","Land_TablePlastic_01_F","Land_TableSmall_01_F","Land_TinWall_02_l_4m_F","Land_TinWall_02_l_8m_F","Land_TouristShelter_01_F","Land_WallCity_01_4m_blue_F","Land_WallCity_01_4m_grey_F","Land_WallCity_01_4m_pink_F","Land_WallCity_01_4m_yellow_F","Land_WallCity_01_8m_blue_F","Land_WallCity_01_8m_grey_F","Land_WallCity_01_8m_pink_F","Land_WallCity_01_8m_plain_blue_F","Land_WallCity_01_8m_plain_grey_F","Land_WallCity_01_8m_plain_yellow_F","Land_WallCity_01_8m_whiteblue_F","Land_WallCity_01_8m_yellow_F","Land_Wall_IndCnc_2deco_F","Land_Wall_IndCnc_4_F","Land_Wall_IndCnc_4_F","Land_WiredFence_01_4m_F","Land_WiredFence_01_8m_F","Land_WiredFence_01_gate_F","Land_Wired_Fence_4m_F","Land_Wired_Fence_8m_F","Land_WoodenBed_01_F","Land_WoodenCart_F","Land_WoodenCounter_01_F","Land_WoodenShelter_01_F","Land_WoodenTable_02_large_F","Land_WoodenTable_large_F","Land_WoodenTable_small_F","Land_WoodenWall_01_m_4m_F","Land_WoodenWall_02_s_4m_F","Land_WoodenWall_02_s_gate_F","Land_WoodenWindBreak_01_F","Land_WorkStand_F","Land_Workbench_01_F","Land_cargo_house_slum_F","Land_i_Garage_V1_F","Land_i_House_Big_01_V1_F","Land_i_House_Big_01_V2_F","Land_i_House_Big_01_V3_F","Land_i_House_Big_02_V1_F","Land_i_House_Big_02_V2_F","Land_i_House_Big_02_V3_F","Land_i_House_Big_02_b_blue_F","Land_i_House_Big_02_b_pink_F","Land_i_House_Big_02_b_whiteblue_F","Land_i_House_Small_01_V1_F","Land_i_House_Small_01_V2_F","Land_i_House_Small_01_V3_F","Land_i_House_Small_02_V1_F","Land_i_House_Small_02_V2_F","Land_i_House_Small_02_V3_F","Land_i_Stone_HouseBig_V1_F","Land_i_Stone_HouseBig_V2_F","Land_i_Stone_HouseBig_V3_F","Land_i_Stone_HouseSmall_V1_F","Land_i_Stone_HouseSmall_V2_F","Land_i_Stone_Shed_V1_F","Land_i_Stone_Shed_V2_F","Land_i_Stone_Shed_V3_F","Land_wall_tin_4","Land_wall_tin_4_2","OfficeTable_01_new_F","Land_ArmChair_01_F","MetalBarrel_burning_F"];

player createDiaryRecord ["Diary", ["Survival Guide","
IMPORTANT KEYBINDS: <br/><br/>

Basebuilding Menu - T (only if using Vandeanson's Apocalypse, and only if the feature is enabled in VA's settings)  <br/><br/>
Holster Weapon - 4  <br/><br/>
Earplugs - 5  <br/><br/>
Mag Repack - Left CTRL + R <br/><br/>
Dynamic Groups - U (or whatever TeamSwitch is bound to in your controls) <br/><br/>
CHVD - Left CTRL + \ <br/><br/>

SURVIVAL BASICS: <br/><br/>

HUNGER  <br/><br/>
It's pretty much the end of the world... What more do you need besides a trusty rifle to keep the dead and hostile people away from you? That's correct! You need food! With food in your belly and a warm fire by your side, you stand a lot better chance of surviving. The lower your hunger meter falls, the more your character will seem to slow down. Also, when starving you will notice other negative effects taking place: your vision fuzzing, along with your health dropping very, very, slowly... so it's best to save that can of tactical bacon like it's the last one on earth! it may very well be.	<br/><br/>
THIRST  <br/><br/>
What goes along nicely with a slice of zombie apocalypse and starving? Yeah, thirst! You can't have survival without throwing in thirst! Just like hunger, you need to keep your thirst to a good amount in order to survive. If your thirst level drops too much, you begin to be dehydrated, with the same risk as starvation... eventual death! So you would be wise to keep your thirst floating nicely around the 75 - 100% ranges... <br/><br/>
FOOD TYPES  <br/><br/>
There are tons of food items to be eaten or even cooked within the world
of Ravage... Here is a list to see what is edible: Baked beans, Rusty food can, Powdered Milk, Tactical Bacon, You can also acquire meats from animals that you kill, (sheep, rabbits, goats).  <br/><br/>
DRINK TYPES <br/><br/>
Here is a list of all the consumable (drinkable) items within ravage: Cleaned water, Dirty Water, Franta soda, Spirit soda, Canteen (cleaned), Canteen (Dirty). Note: 'Dirty' items are contaminated and will give you a certain amount of radiation poisoning. Dirty water can be cleaned with purification tablets, but dirty food cannot. Save dirty items for when you're desperate.  <br/><br/>
HEALTH <br/><br/>
In vanilla Ravage, health does not regenerate on its own. The only ways to heal are by either using a first aid kit or by consuming food and water (with an additional health bonus if the food or water is consumed by a campfire). However, if you're playing with Vandeanson's Apocalypse, health will regenerate slowly if you keep both your hunger and thirst at 80% or above (may have to enable this feature first in your VA settings). <br/><br/>

USABLE ITEMS: <br/><br/>
Usable Items are also a huge part of Ravage and you will need to acquire them before completing certain actions or even being able to use certain food items. <br/><br/>
Remember that you use items by double-clicking them.  <br/><br/>

Tires - Tires can be found, or can even be scavenged off of vehicles within the world of Ravage. You will need tires to fix vehicles with popped, or missing tires. It is also a fairly good idea to keep tires on hand (within the vehicle's inventory for emergency repairs). <br/><br/>
Toolbox - You can't scavenge or make repairs on vehicles without a Toolbox, it is an ABSOLUTE necessity if you are wanting to travel by vehicle. Also, keep in mind Toolboxes have a limited amount of use before they can wear out... Like tires, it is a good idea to store them within vehicles for emergency repairs. (Toolboxes shouldn't be used without a plan in mind; if you are fixing a vehicle and jump ship to fix another, you could potentially break your toolbox and then have to find another. They are rare.)  <br/><br/>
Fuel Canisters - They are used to refuel vehicles that either are low on fuel, or are empty. You also need a fuel canister to syphon, or collect, fuel. <br/><br/>
Hose - Hoses are used in the filling of fuel canisters, or they can be used to syphon fuel from other vehicles that are broken down, or no longer being used. With a hose on hand, you will have the option to syphon fuel from vehicles. Just make sure you've got a Fuel canister on hand as well.  <br/><br/>
Can Opener - Can openers are as you expect, to open canned goods within the world of Ravage. They are a highly useful and slightly rare item that will help you throughout your journeys. <br/><br/>
Gutting knife - The gutting knife is used to gut animals, if you cannot find any edible goods within the area but are constantly spotting rabbits it is a good idea to see if you can kill one. If you do kill an animal, simply walk up to your kill (standing directly over it) and then use the scroll menu to gut the animal. After the animation plays, you will see the meat within the animal's inventory, fresh for you to grab.  <br/><br/>
Flares - Flares are a very useful item when it comes to Ravage. You can use flares to your advantage at night. Say you are within a town and zombies are everywhere around you (you can hear them, but can't see them) - throw a flare onto the ground in front of you and you will easily be able to spot the dead.  <br/><br/>
Chemlights - Chemlights have the same practicality as flares, but are generally safer to use at night, since they're much dimmer. Double - click on a chemlight in your inventory to attach it to your character. <br/><br/>
Matches - Matches will allow you to light a fire anywhere (if you have fuel - paper mostly) once a fire is lit, it can be used to cook meat taken from gutted animals.  <br/><br/>
Fire fuel - This isn't an item but multiple items, banknotes, notepads, and document folders can ALL be used for fuel with matches to make a nice little fire.  <br/><br/>
Banknotes - Bank notes are the Currency to spend on wandering or static traders in Ravage. Can also be used as kindling for campfires.  <br/><br/>
Purification Tablets - Purification tablets can be used on (canteens or dirty water within bottles) to make purified water that is safe to drink, and doesn't contain radiation.  <br/><br/>
Antirad pills - Since there's no radioactive zones in this mission, the only possible use this item has is for consuming dirty food items (since consuming dirty food and water gives you a small amount of radiation poisoning).  <br/><br/>
Geiger Counter - Completely useless item, since there's no radioactive zones in this mission. Don't even bother picking it up.  <br/><br/>
Sleeping bag - Useless item, as there's no sleeping feature for Ravage multiplayer missions. Purely a cosmetic item.  <br/><br/>
Folded tent - Lets you store a limited quantity of items.  <br/><br/>
Campfires - A warm fire for your feet, or in the shelter you just took from some of the dead that were still wandering about. What more use could this serve other than a faint light and a safe place to use a sleeping bag? Campfires give a small bonus to ALL food and drink consumed nearby them. Your hunger and thirst get a small boost whenever using a food or drink next to one. Which makes a lot of difference, especially compared to eating food as soon as you find it. <br/><br/>
Bandages - These only spawn if you're using Vandeanson's Apocalypse. Not usable unless you have bleeding enabled in Vandeanson's Apocalypse settings. Bandages help to stop bleeding. Hold space to use the item. <br/><br/>
Antibiotics - These only spawn if you're using Vandeanson's Apocalypse. Not usable unless you have infection enabled in Vandeanson's Apocalypse settings. Antibiotics temporarily stop the zombie infection. Hold space to use the item. <br/><br/>
Anti-virus Injector - These only spawn if you're using Vandeanson's Apocalypse. Not usable unless you have infection enabled in Vandeanson's Apocalypse settings. Anti-virus injectors permanently cure the zombie infection. Hold space to use the item. <br/><br/>

BANDITS AND OTHER AI: <br/><br/>
Raiders (OPFOR) - The bandits in the mod. Yes, there are people who are going to try and kill you, and you should really work on your situational awareness. This mod will test just that; if you know you aren't going to stand a chance against some bandits... run. It is your safest bet for surviving. Bandits are highly unpredictable and should NOT be taken lightly. <br/><br/>
Renegades - Unlike Bandits who roam in small or large groups, Renegades are extremely hostile lone wolves who never stay still....unless they have you in their sights!  <br/><br/>
Survivors - Not all lone wolves are hostile. There are also friendly Survivors who can be approached and recruited to help you in the Apocalypse.  <br/><br/>
Zombies - The dead, the undying, walkers, whatever the hell you call them... These guys are truly going to hinder you in your travels. Zombies are very strong creatures and should not be taken lightly just like bandits but, for reasons, a tad different. Zombies are extremely resilient, smart and can catch up quite quickly to you at a moment's notice when you are not paying attention. This is where situational awareness is a key factor. Whenever you are within a town scavenging for loot, be on your toes. You never truly never know what lurks behind the doors of a seemingly 'empty' house. <br/><br/>
Traders - Fellow survivors who are trying to make easy money by selling (probably stolen) goods, such as survival supplies. They don't care about your wellbeing, since they live only for themselves. Keep that in mind since you're not the only one with pockets full of money...  <br/><br/>

SURVIVAL TIPS: <br/><br/>
1 - When you're first starting out, try to keep your head low and avoid any engagements. It's generally a good idea to be as sneaky as possible until you find better weapons and gear to help you survive. <br/><br/>
2 - Use zombies to your advantage. Zombies are attracted to both auditory and visual stimuli, so keep that in mind. <br/><br/>
3 - Be aware of the possible presence of bandits near towns and cities, as these locations can be fairly active. <br/><br/>
4 - Don't underestimate the dynamic AI missions. All of the hostiles located at the missions are all heavily geared, so chances are, they're even better geared than you. <br/><br/>
5 - Always have a backup plan in mind for when things go south. <br/><br/>
6 - Be wary of trusting other players. It's impossible to know a player's true intentions, so don't be surprised if you wind up with a bullet in the back of your head. <br/><br/>
7 - Use chemlights to your advantage when working as a team. If all players in a squad attached chemlights to themselves, then it'll be much easier to distinguish friend from foe. <br/><br/>
8 - Vehicles can be used to store large amounts of equipment. Use them as make - shift storage crates (but remember that vehicle inventories can be accessed by anyone). <br/><br/>

All credit goes to: Gunter Severloh, kodabar, EO, Haleks, TenuredCloud, GilliganTrevor93, and ArteyFlow for the contents of this guide."]]
