// UH-80 Ghost Hawk
class B_Heli_Transport_01_F: Heli_Transport_01_base_F {
    class EventHandlers;
};

class TACU_GhostHawk_Base: B_Heli_Transport_01_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class Black {
            displayName = "Black";
            author = "Bohemia Interactive";
            textures[] = {"\a3\air_f_beta\heli_transport_01\data\heli_transport_01_ext01_co.paa", "\a3\air_f_beta\heli_transport_01\data\heli_transport_01_ext02_co.paa"};
            factions[] = {};
        };
        class Desert: Black {
            displayName = "Desert";
            author = "Rotators Collective";
            textures[] = {"\lxws\air_f_lxws\data\nato\lxws_heli_transport_01_ext01_sand_co.paa", "\lxws\air_f_lxws\data\nato\lxws_heli_transport_01_ext02_sand_co.paa"};
        };
        class Vanguard {
            displayName = "Vanguard PMC";
            author = "GilleeDoo";
            textures[] = {QPATHTOF(data\ghosthawk\vanguard_v_uh80_ghosthawk_ext01_co.paa), QPATHTOF(data\ghosthawk\vanguard_v_uh80_ghosthawk_ext02_co.paa)};
            factions[] = {"TACU_Vanguard", "TACU_Vanguard_O"};
        };
    };
    textureList[] = {"Black", 1, "Desert", 1};

    MACRO_EVENTHANDLERS;
};
