// Badger IFV
class B_APC_Wheeled_01_cannon_F: B_APC_Wheeled_01_base_F {
    class EventHandlers;
};

class TACU_Badger_IFV_Base: B_APC_Wheeled_01_cannon_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class Sand {
            displayName = "Sand";
            author = "Bohemia Interactive";
            textures[] = {
                "a3\armor_f_beta\apc_wheeled_01\data\apc_wheeled_01_base_co.paa",
                "a3\armor_f_beta\apc_wheeled_01\data\apc_wheeled_01_adds_co.paa",
                "a3\armor_f_beta\apc_wheeled_01\data\apc_wheeled_01_tows_co.paa",
                "a3\armor_f\data\camonet_nato_desert_co.paa",
                "a3\armor_f\data\cage_sand_co.paa"
            };
            factions[] = {};
        };
        class Olive: Sand {
            displayName = "Olive";
            textures[] = {
                "a3\armor_f_exp\apc_wheeled_01\data\apc_wheeled_01_base_olive_co.paa",
                "a3\armor_f_exp\apc_wheeled_01\data\apc_wheeled_01_adds_olive_co.paa",
                "a3\armor_f_exp\apc_wheeled_01\data\apc_wheeled_01_tows_olive_co.paa",
                "a3\armor_f\data\camonet_nato_green_co.paa",
                "a3\armor_f\data\cage_olive_co.paa"
            };
        };
        class South_African_Green {
            displayName = "South African Green";
            author = "GilleeDoo";
            textures[] = {
                QPATHTOF(data\badger\apc_wheeled_01_base_sa_grn_co.paa),
                QPATHTOF(data\badger\apc_wheeled_01_adds_sa_grn_co.paa),
                QPATHTOF(data\badger\apc_wheeled_01_tows_sa_grn_co.paa),
                "a3\armor_f\data\camonet_nato_green_co.paa",
                QPATHTOF(data\badger\cage_g1_sa_grn_co.paa)
            };
            factions[] = {
                "TACU_African_South_B",
                "TACU_African_South_O",
                "TACU_African_South_I"
            };
        };
        class South_African_Tan: South_African_Green {
            displayName = "South African Tan";
            textures[] = {
                QPATHTOF(data\badger\apc_wheeled_01_base_sa_tan_co.paa),
                QPATHTOF(data\badger\apc_wheeled_01_adds_sa_tan_co.paa),
                QPATHTOF(data\badger\apc_wheeled_01_tows_sa_tan_co.paa),
                "a3\armor_f\data\camonet_nato_desert_co.paa",
                "a3\armor_f\data\cage_sand_co.paa"
            };
        };
    };

    textureList[] = {"Sand", 1, "Olive", 1};

    MACRO_EVENTHANDLERS;
};
