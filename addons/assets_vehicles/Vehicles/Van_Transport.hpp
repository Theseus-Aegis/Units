// Van - Transport
class B_G_Van_02_transport_F: Van_02_transport_base_F {
    class EventHandlers;
};

class TACU_Transport_Van_Base: B_G_Van_02_transport_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class Syndikat {
            displayName = "Brown (Syndikat)";
            author = "Bohemia Interactive";
            textures[] = {
                "\a3\soft_f_orange\van_02\data\van_body_syndikat_co.paa",
                "\a3\soft_f_orange\van_02\data\van_wheel_transport_co.paa",
                "\a3\soft_f_orange\van_02\data\van_glass_transport_ca.paa",
                "\a3\soft_f_orange\van_02\data\van_body_syndikat_co.paa"
            };
            materials[] = {
                "\a3\soft_f_orange\van_02\data\van_body.rvmat",
                "\a3\soft_f_orange\van_02\data\van_wheel_transport.rvmat",
                "",
                "\a3\Data_f\Lights\Car_Beacon_Orange_emit.rvmat"
            };
            factions[] = {};
        };
        class FIA1: Syndikat {
            displayName = "Guerrilla 01";
            textures[] = {
                "\a3\soft_f_orange\van_02\data\van_body_fia_01_co.paa",
                "\a3\soft_f_orange\van_02\data\van_wheel_transport_co.paa",
                "\a3\soft_f_orange\van_02\data\van_glass_transport_ca.paa",
                "\a3\soft_f_orange\van_02\data\van_body_fia_01_co.paa"
            };
        };
        class FIA2: Syndikat {
            displayName = "Guerrilla 02";
            textures[] = {
                "\a3\soft_f_orange\van_02\data\van_body_fia_02_co.paa",
                "\a3\soft_f_orange\van_02\data\van_wheel_transport_co.paa",
                "\a3\soft_f_orange\van_02\data\van_glass_transport_ca.paa",
                "\a3\soft_f_orange\van_02\data\van_body_fia_02_co.paa"
            };
        };
        class FIA3: Syndikat {
            displayName = "Guerrilla 03";
            textures[] = {
                "\a3\soft_f_orange\van_02\data\van_body_fia_03_co.paa",
                "\a3\soft_f_orange\van_02\data\van_wheel_transport_co.paa",
                "\a3\soft_f_orange\van_02\data\van_glass_transport_ca.paa",
                "\a3\soft_f_orange\van_02\data\van_body_fia_03_co.paa"
            };
        };
        class Green: Syndikat {
            displayName = "Green";
            textures[] = {
                "\a3\soft_f_orange\van_02\data\van_body_green_co.paa",
                "\a3\soft_f_orange\van_02\data\van_wheel_transport_co.paa",
                "\a3\soft_f_orange\van_02\data\van_glass_transport_ca.paa",
                "\a3\soft_f_orange\van_02\data\van_body_green_co.paa"
            };
        };
        class Black: Syndikat {
            displayName = "Black";
            textures[] = {
                "\a3\soft_f_orange\van_02\data\van_body_black_co.paa",
                "\a3\soft_f_orange\van_02\data\van_wheel_transport_co.paa",
                "\a3\soft_f_orange\van_02\data\van_glass_transport_ca.paa",
                "\a3\soft_f_orange\van_02\data\van_body_black_co.paa"
            };
        };
        class Red: Syndikat {
            displayName = "Red";
            textures[] = {
                "\a3\soft_f_orange\van_02\data\van_body_red_co.paa",
                "\a3\soft_f_orange\van_02\data\van_wheel_transport_co.paa",
                "\a3\soft_f_orange\van_02\data\van_glass_transport_ca.paa",
                "\a3\soft_f_orange\van_02\data\van_body_red_co.paa"
            };
        };
        class Blue: Syndikat {
            displayName = "Blue";
            textures[] = {
                "\a3\soft_f_orange\van_02\data\van_body_blue_co.paa",
                "\a3\soft_f_orange\van_02\data\van_wheel_transport_co.paa",
                "\a3\soft_f_orange\van_02\data\van_glass_transport_ca.paa",
                "\a3\soft_f_orange\van_02\data\van_body_blue_co.paa"
            };
        };
        class Orange: Syndikat {
            displayName = "Orange";
            textures[] = {
                "\a3\soft_f_orange\van_02\data\van_body_orange_co.paa",
                "\a3\soft_f_orange\van_02\data\van_wheel_transport_co.paa",
                "\a3\soft_f_orange\van_02\data\van_glass_transport_ca.paa",
                "\a3\soft_f_orange\van_02\data\van_body_orange_co.paa"
            };
        };
        class White: Syndikat {
            displayName = "White";
            textures[] = {
                "\a3\soft_f_orange\van_02\data\van_body_white_co.paa",
                "\a3\soft_f_orange\van_02\data\van_wheel_transport_co.paa",
                "\a3\soft_f_orange\van_02\data\van_glass_transport_ca.paa",
                "\a3\soft_f_orange\van_02\data\van_body_white_co.paa"
            };
        };
        class Police_Blue: Syndikat {
            displayName = "Police (Blue)";
            author = "Emythiel";
            textures[] = {
                QPATHTOF(data\transport_van\Police_V_Van_Blue_co.paa),
                "\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
                "\a3\soft_f_orange\van_02\data\van_glass_gen_ca.paa",
                QPATHTOF(data\transport_van\Police_V_Van_Blue_co.paa)
            };
            factions[] = {"TACU_Police_B"};
        };
        class Police_Russian: Syndikat {
            displayName = "Police (Russian)";
            author = "Emythiel";
            textures[] = {
                QPATHTOF(data\transport_van\Police_V_Van_BlackRus_co.paa),
                "\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
                "\a3\soft_f_orange\van_02\data\van_glass_gen_ca.paa",
                QPATHTOF(data\transport_van\Police_V_Van_BlackRus_co.paa)
            };
            factions[] = {"TACU_Police_O"};
        };
        class Police_Black: Syndikat {
            displayName = "Police (Black)";
            author = "Emythiel";
            textures[] = {
                QPATHTOF(data\transport_van\Police_V_Van_Black_co.paa),
                "\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
                "\a3\soft_f_orange\van_02\data\van_glass_gen_ca.paa",
                QPATHTOF(data\transport_van\Police_V_Van_Black_co.paa)
            };
            factions[] = {"TACU_Police_I"};
        };
    };
    textureList[] = {
        "Syndikat", 1,
        "FIA3", 1,
        "FIA2", 1,
        "FIA1", 1,
        "Green", 1,
        "Black", 1,
        "Red", 1,
        "Blue", 1,
        "Orange", 1,
        "White", 1,
        "Police_Blue", 1,
        "Police_Russian", 1,
        "Police_Black", 1
    };
};
