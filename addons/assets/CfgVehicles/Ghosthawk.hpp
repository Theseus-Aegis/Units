// UH-80 Ghost Hawk
class TACU_GhostHawk_Base: Heli_Transport_01_base_F {
    scope = 1;
    class TextureSources {
        class Black {
            displayName = "Black";
            author = "Bohemia Interactive";
            textures[] = {"\a3\air_f_beta\heli_transport_01\data\heli_transport_01_ext01_co.paa", "\a3\air_f_beta\heli_transport_01\data\heli_transport_01_ext02_co.paa"};
            factions[] = {};
        };
        class Vanguard {
            displayName = "Vanguard PMC";
            author = "GilleeDoo, Mike";
            textures[] = {QPATHTOF(data\ghosthawk\vanguard_v_uh80_ghosthawk_ext01_co.paa), QPATHTOF(data\ghosthawk\vanguard_v_uh80_ghosthawk_ext02_co.paa)};
            factions[] = {"TACU_Vanguard", "TACU_Vanguard_O"};
        };
    };
    textureList[] = {
        "Black", 1,
        "Vanguard", 1
    };

    class EventHandlers: EventHandlers {
        postInit = "if (local (_this select 0)) then { [_this select 0, '', [], true] call BIS_fnc_initVehicle; };";
    };
};
