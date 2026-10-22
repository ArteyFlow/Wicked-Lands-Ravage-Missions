player removeAction Giveplayer100;
player removeAction Giveplayer1000;

sleep 1;

Giveplayer100 = player addaction ["Give player (100)", { 

_purchase = 100;
_cash = player getVariable ["hals_money_funds", 0];
if(_cash < _purchase) exitWith {
hint composeText ["You cannot afford this!"];
};
player setVariable ["hals_money_funds", (_cash - _purchase), true];
hintSilent "Gift Successful";
_cashtarget = cursortarget getVariable ["hals_money_funds", 0];
cursortarget setVariable ["hals_money_funds",(_cashtarget + _purchase), true];
},[], 1, false, true, "", "lifestate cursortarget == 'healthy' && (isplayer cursortarget) && (player distance cursortarget) < 2"];

Giveplayer1000 = player addaction ["Give player (1000)", { 

_purchase = 1000;
_cash = player getVariable ["hals_money_funds", 0];
if(_cash < _purchase) exitWith {
hint composeText ["You cannot afford this!"];
};
player setVariable ["hals_money_funds", (_cash - _purchase), true];
hintSilent "Gift Successful";
_cashtarget = cursortarget getVariable ["hals_money_funds", 0];
cursortarget setVariable ["hals_money_funds",(_cashtarget + _purchase), true];
},[], 1, false, true, "", "lifestate cursortarget == 'healthy' && (isplayer cursortarget) && (player distance cursortarget) < 2"];