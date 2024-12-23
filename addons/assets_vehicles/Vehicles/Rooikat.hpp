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
                "a3\armor_f_tank\afv_wheeled_01\data\afv_wheeled_01_ext1_co.paa",
                "a3\armor_f_tank\afv_wheeled_01\data\afv_wheeled_01_ext2_co.paa",
                "a3\armor_f_tank\afv_wheeled_01\data\afv_wheeled_01_wheel_co.paa",
                "a3\armor_f\data\camonet_nato_desert_co.paa",
                "a3\armor_f_tank\afv_wheeled_01\data\afv_wheeled_01_ext3_sand_co.paa"
            };
            factions[] = {};
        };
        class Green: Sand {
            displayName = "Green";
            textures[] = {
                "a3\armor_f_tank\afv_wheeled_01\data\afv_wheeled_01_ext1_green_co.paa",
                "a3\armor_f_tank\afv_wheeled_01\data\afv_wheeled_01_ext2_green_co.paa",
                "a3\armor_f_tank\afv_wheeled_01\data\afv_wheeled_01_wheel_green_co.paa",
                "a3\armor_f\data\camonet_nato_green_co.paa",
                "a3\armor_f_tank\afv_wheeled_01\data\afv_wheeled_01_ext3_co.paa"
            };
        };
        class South_African_Green {
            displayName = "South African Green";
            author = "GilleeDoo";
            textures[] = {
                QPATHTOF(data\rooikat\afv_wheeled_01_ext1_sa_grn_co.paa),
                QPATHTOF(data\rooikat\afv_wheeled_01_ext2_sa_grn_co.paa),
                "a3\armor_f_tank\afv_wheeled_01\data\afv_wheeled_01_wheel_green_co.paa",
                "a3\armor_f\data\camonet_nato_green_co.paa",
                QPATHTOF(data\rooikat\afv_wheeled_01_ext3_sa_grn_co.paa)
            };
            factions[] = {
                "TACU_African_South_B",
                "TACU_African_South_O",
                "TACU_African_South_I"
            };
        };
    };

    textureList[] = {"Sand", 1, "Green", 1};

    MACRO_EVENTHANDLERS;
};
