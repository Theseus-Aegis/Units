// RAH-66 Comanche
class B_Heli_Attack_01_dynamicLoadout_F: Heli_Attack_01_dynamicLoadout_base_F {
    class EventHandlers;
};

class TACU_RAH66_Comanche_Base: B_Heli_Attack_01_dynamicLoadout_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class Sand {
            displayName = "Sand";
            author = "Rotators Collective";
            textures[] = {"\lxws\air_f_lxws\data\nato\lxws_heli_attack_01_sand_co.paa"};
            factions[] = {};
        };
        class Blufor {
            displayName = "NATO";
            author = "Bohemia Interactive";
            textures[] = {"\a3\air_f_beta\heli_attack_01\data\heli_attack_01_co.paa"};
            factions[] = {};
        };
    };

    textureList[] = {
        "Sand", 1,
        "Blufor", 1
    };

    MACRO_EVENTHANDLERS;
};
