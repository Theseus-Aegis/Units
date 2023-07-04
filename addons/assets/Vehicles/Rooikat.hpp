// Rooikat (Tank Destroyer)
class B_T_AFV_Wheeled_01_cannon_F: AFV_Wheeled_01_base_F {
    class EventHandlers;
};

class TACU_Rooikat_Base: B_T_AFV_Wheeled_01_cannon_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;

    class TextureSources {
        class Sand {
            displayName = "Sand";
            author = "Bohemia Interactive";
            textures[] = {
                "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT1_CO.paa",
                "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT2_CO.paa",
                "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_CO.paa",
                "a3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
                "A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_sand_CO.paa"
            };
            factions[] = {};
        };
        class Green {
            displayName = "Green";
            author = "Bohemia Interactive";
            textures[] = {
                "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT1_green_CO.paa",
                "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT2_green_CO.paa",
                "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_CO.paa",
                "a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
                "A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_CO.paa"
            };
            factions[] = {};
        };
        class South_African_Green {
            displayName = "SA - Green";
            author = "GilleeDoo";
            textures[] = {
                QPATHTOF(data\rooikat\afv_wheeled_01_ext1_sa_grn_co.paa),
                QPATHTOF(data\rooikat\afv_wheeled_01_ext2_sa_grn_co.paa),
                "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_CO.paa",
                "a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
                "A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_CO.paa"
            };
            factions[] = {};
        };
    };

    textureList[] = {
        "Sand", 1,
        "Green", 1
    };

    MACRO_EVENTHANDLERS;
};
