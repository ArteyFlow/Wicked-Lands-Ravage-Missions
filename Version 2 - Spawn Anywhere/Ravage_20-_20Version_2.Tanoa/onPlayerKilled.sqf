["DynamicBlur", 0, [100]] spawn
{
	params ["_name", "_priority", "_effect", "_handle"];
	while {
		_handle = ppEffectCreate [_name, _priority];
		_handle < 0
	} do {
		_priority = _priority + 1;
	};
	_handle ppEffectEnable true;
	_handle ppEffectAdjust _effect;
	_handle ppEffectCommit 15;
	waitUntil {ppEffectCommitted _handle};
	_handle ppEffectEnable false;
	ppEffectDestroy _handle;
};

titleText ["<t color='#FF2D00' size='4'>You are Dead</t>", "PLAIN", 1.3, true, true];

playSound "Heart_Beat_dying";

0 fadeSound 0.25;
sleep 15;
0 fadeSound 1;