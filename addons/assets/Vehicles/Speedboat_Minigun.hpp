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
                "\A3\boat_f_beta\Boat_Armed_01\data\Boat_Armed_01_ext_INDP_co.paa",
                "\A3\boat_f_beta\Boat_Armed_01\data\Boat_Armed_01_int_INDP_co.paa",
                "\A3\boat_f_beta\Boat_Armed_01\data\Boat_Armed_01_crows_INDP_co.paa"
            };
            factions[] = {};
        };
        class Opfor {
            displayName = "OPFOR";
            author = "Bohemia Interactive";
            textures[] = {
                "\A3\Boat_F\Boat_Armed_01\Data\Boat_Armed_01_ext_opfor_CO.paa",
                "\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_int_opfor_co.paa",
                "\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_crows_OPFOR_co.paa"
            };
            factions[] = {};
        };
        class Blufor {
            displayName = "BLUFOR";
            author = "Bohemia Interactive";
            textures[] = {
                "\A3\Boat_F\Boat_Armed_01\Data\Boat_Armed_01_ext_CO.paa",
                "\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_int_co.paa",
                "\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_crows_blufor_co.paa"
            };
            factions[] = {};
        };
    };

    textureList[] = {
        "Indep", 1,
        "Opfor", 1,
        "Blufor", 1
    };

    MACRO_EVENTHANDLERS;
};
