// FV510 Warrior
class I_APC_tracked_03_cannon_F: I_APC_tracked_03_base_F {
    class EventHandlers;
};

class TACU_FV510_Warrior_Base: I_APC_tracked_03_cannon_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class Arid {
            displayName = "Arid";
            author = "GilleeDoo";
            textures[] = {
                QPATHTOF(data\warrior\apc_tracked_03_ext_baf_arid_co.paa),
                QPATHTOF(data\warrior\apc_tracked_03_ext2_baf_arid_co.paa),
                "a3\armor_f\data\camonet_aaf_digi_desert_co.paa",
                QPATHTOF(data\warrior\cage_g1_baf_arid_co.paa)
            };
            factions[] = {"TACU_BAF_B"};
        };
        class Tropic: Arid {
            displayName = "Tropic";
            textures[] = {
                QPATHTOF(data\warrior\apc_tracked_03_ext_baf_tropic_co.paa),
                QPATHTOF(data\warrior\apc_tracked_03_ext2_baf_tropic_co.paa),
                "a3\armor_f\data\camonet_aaf_digi_jungle_co.paa",
                QPATHTOF(data\warrior\cage_g1_baf_tropic_co.paa)
            };
        };
    };

    textureList[] = {"Arid", 1, "Tropic", 1};

    animationList[] = {
        "showBags", 0,
        "showBags2", 1,
        "showCamonetHull", 0,
        "showCamonetTurret", 0,
        "showTools", 0,
        "showSLATHull", 0,
        "showSLATTurret", 0
    };

    MACRO_EVENTHANDLERS;
};
