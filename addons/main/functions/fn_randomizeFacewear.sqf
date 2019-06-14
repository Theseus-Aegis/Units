/*
 * Author: commy2
 * Adds random glasses to units.
 *
 * Arguments:
 * 0: unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_unit"];

if (!local _unit || {!(_unit getVariable ["BIS_enableRandomization", true])}) exitWith {};

// add random glasses
private _allowedFacewear = getArray (configFile >> "CfgVehicles" >> typeOf _unit >> "TACU_allowedFacewear");

if (_allowedFacewear isEqualTo []) exitWith {};

private _goggles = selectRandomWeighted _allowedFacewear;

if (_goggles == "None") then {
    removeGoggles _unit;
} else {
    _unit addGoggles _goggles;
};
