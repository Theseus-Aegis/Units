// AH-6 Little Bird
class B_Heli_Light_01_dynamicLoadout_F: Heli_Light_01_dynamicLoadout_base_F {
    class EventHandlers;
};

class TACU_AH6_LittleBird_Base: B_Heli_Light_01_dynamicLoadout_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class Vanguard {
            author = "GilleeDoo";
            displayName = "Vanguard PMC";
            textures[] = {QPATHTOF(data\ah6\Vanguard_V_AH9_Pawnee_co.paa), "a3\air_f\heli_light_01\data\heli_light_01_dot_ca.paa"};
            factions[] = {"TACU_Vanguard", "TACU_Vanguard_O"};
        };
        class Blufor {
            author = "Bohemia Interactive";
            displayName = "NATO";
            textures[] = {"a3\air_f\heli_light_01\data\heli_light_01_ext_blufor_co.paa", "a3\air_f\heli_light_01\data\heli_light_01_dot_ca.paa"};
            factions[] = {};
        };
        class Desert: Blufor {
            author = "Rotators Collective";
            displayName = "Desert";
            textures[] = {"\lxws\air_f_lxws\data\nato\lxws_heli_light_01_ext_sand_co.paa", "a3\air_f\heli_light_01\data\heli_light_01_dot_ca.paa"};
        };
    };
    textureList[] = {"Blufor", 1, "Desert", 1};

    MACRO_EVENTHANDLERS;
};
