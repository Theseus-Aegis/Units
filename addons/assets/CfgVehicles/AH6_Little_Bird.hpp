// AH-6 Little Bird
class TACU_AH6_LittleBird_Base: Heli_Light_01_dynamicLoadout_base_F {
    scope = 1;
    class TextureSources {
        class Vanguard {
            author = "GilleeDoo, Mike";
            displayName = "Vanguard PMC";
            textures[] = {QPATHTOF(data\ah6\Vanguard_V_AH9_Pawnee_co.paa)};
            factions[] = {"TACU_Vanguard", "TACU_Vanguard_O"};
        };
    };
    textureList[] = {"Vanguard", 1};

    class EventHandlers: EventHandlers {
        postInit = "if (local (_this select 0)) then { [_this select 0, '', [], true] call BIS_fnc_initVehicle; };";
    };
};
