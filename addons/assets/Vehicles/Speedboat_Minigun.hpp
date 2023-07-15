class Boat_Armed_01_minigun_base_F : Boat_Armed_01_base_F {
    class EventHandlers;
};

class TACU_Speedboat_Minigun_Base: Boat_Armed_01_minigun_base_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;

    // This property has to be set otherwise textureSources fail.
    hiddenSelectionsTextures[] = {
        "\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_ext_co.paa",
        "\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_int_co.paa",
        "\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_crows_blufor_co.paa"
    };

    class TextureSources {
        class Indep {
            displayName = "AAF";
            author = "Bohemia Interactive";
            textures[] = {
                "\a3\boat_f_beta\boat_armed_01\data\boat_armed_01_ext_indp_co.paa",
                "\a3\boat_f_beta\boat_armed_01\data\boat_armed_01_int_indp_co.paa",
                "\a3\boat_f_beta\boat_armed_01\data\boat_armed_01_crows_indp_co.paa"
            };
            factions[] = {};
        };
        class Opfor: Indep {
            displayName = "OPFOR";
            textures[] = {
                "\a3\boat_f\boat_armed_01\data\boat_armed_01_ext_opfor_co.paa",
                "\a3\boat_f\boat_armed_01\data\boat_armed_01_int_opfor_co.paa",
                "\a3\boat_f\boat_armed_01\data\boat_armed_01_crows_opfor_co.paa"
            };
        };
        class Blufor: Indep {
            displayName = "BLUFOR";
            textures[] = {
                "\a3\boat_f\boat_armed_01\data\boat_armed_01_ext_co.paa",
                "\a3\boat_f\boat_armed_01\data\boat_armed_01_int_co.paa",
                "\a3\boat_f\boat_armed_01\data\boat_armed_01_crows_blufor_co.paa"
            };
        };
    };

    textureList[] = {
        "Indep", 1,
        "Opfor", 1,
        "Blufor", 1
    };

    MACRO_EVENTHANDLERS;
};
