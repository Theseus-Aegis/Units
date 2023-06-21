class TACU_Cargo_Van_Base: Van_02_vehicle_base_F {
    editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\I_G_Van_02_vehicle_F.jpg";

    class TextureSources {
        class Syndikat {
            displayName = "Brown (Syndikat)";
            author = "Bohemia Interactive";
            textures[] = {
                "\a3\soft_f_orange\van_02\data\van_body_Syndikat_co.paa",
                "\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
                "\a3\soft_f_orange\van_02\data\van_glass_utility_CA.paa",
                "\a3\soft_f_orange\van_02\data\van_body_Syndikat_co.paa"
            };
            materials[] = {MACRO_CARGO_MATERIALS};
            factions[] = {};
        };
        class FIA1 {
            displayName = "Guerrilla 01";
            author = "Bohemia Interactive";
            textures[] = {
                "\a3\soft_f_orange\van_02\data\van_body_fia_01_co.paa",
                "\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
                "\a3\soft_f_orange\van_02\data\van_glass_utility_CA.paa",
                "\a3\soft_f_orange\van_02\data\van_body_fia_01_co.paa"
            };
            materials[] = {MACRO_CARGO_MATERIALS};
            factions[] = {};
        };
        class FIA2 {
            displayName = "Guerrilla 02";
            author = "Bohemia Interactive";
            textures[] = {
                "\a3\soft_f_orange\van_02\data\van_body_fia_02_co.paa",
                "\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
                "\a3\soft_f_orange\van_02\data\van_glass_utility_CA.paa",
                "\a3\soft_f_orange\van_02\data\van_body_fia_02_co.paa"
            };
            materials[] = {MACRO_CARGO_MATERIALS};
            factions[] = {};
        };
        class FIA3 {
            displayName = "Guerrilla 03";
            author = "Bohemia Interactive";
            textures[] = {
                "\a3\soft_f_orange\van_02\data\van_body_fia_03_co.paa",
                "\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
                "\a3\soft_f_orange\van_02\data\van_glass_utility_CA.paa",
                "\a3\soft_f_orange\van_02\data\van_body_fia_03_co.paa"
            };
            materials[] = {MACRO_CARGO_MATERIALS};
            factions[] = {};
        };
        class Green {
            displayName = "Green";
            author = "Bohemia Interactive";
            textures[] = {
                "\a3\soft_f_orange\van_02\data\van_body_Green_co.paa",
                "\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
                "\a3\soft_f_orange\van_02\data\van_glass_utility_CA.paa",
                "\a3\soft_f_orange\van_02\data\van_body_Green_co.paa"
            };
            materials[] = {MACRO_CARGO_MATERIALS};
            factions[] = {};
        };
        class Black {
            displayName = "Black";
            author = "Bohemia Interactive";
            textures[] = {
                "\a3\soft_f_orange\van_02\data\van_body_Black_co.paa",
                "\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
                "\a3\soft_f_orange\van_02\data\van_glass_utility_CA.paa",
                "\a3\soft_f_orange\van_02\data\van_body_Black_co.paa"
            };
            materials[] = {MACRO_CARGO_MATERIALS};
            factions[] = {};
        };
        class Red {
            displayName = "Red";
            author = "Bohemia Interactive";
            textures[] = {
                "\a3\soft_f_orange\van_02\data\van_body_Red_co.paa",
                "\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
                "\a3\soft_f_orange\van_02\data\van_glass_utility_CA.paa",
                "\a3\soft_f_orange\van_02\data\van_body_Red_co.paa"
            };
            materials[] = {MACRO_CARGO_MATERIALS};
            factions[] = {};
        };
        class Blue {
            displayName = "Blue";
            author = "Bohemia Interactive";
            textures[] = {
                "\a3\soft_f_orange\van_02\data\van_body_Blue_co.paa",
                "\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
                "\a3\soft_f_orange\van_02\data\van_glass_utility_CA.paa",
                "\a3\soft_f_orange\van_02\data\van_body_Blue_co.paa"
            };
            materials[] = {MACRO_CARGO_MATERIALS};
            factions[] = {};
        };
        class Orange {
            displayName = "Orange";
            author = "Bohemia Interactive";
            textures[] = {
                "\a3\soft_f_orange\van_02\data\van_body_Orange_co.paa",
                "\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
                "\a3\soft_f_orange\van_02\data\van_glass_utility_CA.paa",
                "\a3\soft_f_orange\van_02\data\van_body_Orange_co.paa"
            };
            materials[] = {MACRO_CARGO_MATERIALS};
            factions[] = {};
        };
        class White {
            displayName = "White";
            author = "Bohemia Interactive";
            textures[] = {
                "\a3\soft_f_orange\van_02\data\van_body_White_co.paa",
                "\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
                "\a3\soft_f_orange\van_02\data\van_glass_utility_CA.paa",
                "\a3\soft_f_orange\van_02\data\van_body_White_co.paa"
            };
            materials[] = {MACRO_CARGO_MATERIALS};
            factions[] = {};
        };
        class Police_Blue {
            displayName = "Police (Blue)";
            author = "Kresky";
            textures[] = {
                QPATHTOF(data\transport_van\Police_V_Van_Blue_co.paa),
                "\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
                "\a3\soft_f_orange\van_02\data\van_glass_gen_CA.paa",
                QPATHTOF(data\transport_van\Police_V_Van_Blue_co.paa)
            };
            materials[] = {MACRO_CARGO_MATERIALS};
            factions[] = {"TACU_Police_B"};
        };
        class Police_Russian {
            displayName = "Police (Russian)";
            author = "Kresky";
            textures[] = {
                QPATHTOF(data\transport_van\Police_V_Van_BlackRus_co.paa),
                "\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
                "\a3\soft_f_orange\van_02\data\van_glass_gen_CA.paa",
                QPATHTOF(data\transport_van\Police_V_Van_BlackRus_co.paa)
            };
            materials[] = {MACRO_CARGO_MATERIALS};
            factions[] = {"TACU_Police_O"};
        };
        class Police_Black {
            displayName = "Police (Black)";
            author = "Kresky";
            textures[] = {
                QPATHTOF(data\transport_van\Police_V_Van_Black_co.paa),
                "\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
                "\a3\soft_f_orange\van_02\data\van_glass_gen_CA.paa",
                QPATHTOF(data\transport_van\Police_V_Van_Black_co.paa)
            };
            materials[] = {MACRO_CARGO_MATERIALS};
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
