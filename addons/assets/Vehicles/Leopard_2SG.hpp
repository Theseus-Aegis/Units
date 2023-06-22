// Leopard 2SG
class I_MBT_03_cannon_F: I_MBT_03_base_F {
    class EventHandlers;
};

class TACU_Leopard_2SG_Base: I_MBT_03_cannon_F {
    MACRO_DEFAULT_VEHICLE
    class TextureSources {
        class Indep_02 {
            displayName = "AAF (Jungle Camo Net)";
            author = "Bohemia Interactive";
            textures[] = {
                "a3\armor_f_epb\mbt_03\data\mbt_03_ext01_co.paa",
                "a3\armor_f_epb\mbt_03\data\mbt_03_ext02_co.paa",
                "a3\armor_f_epb\mbt_03\data\mbt_03_rcws_co.paa",
                "a3\armor_f\data\camonet_aaf_digi_jungle_co.paa"
            };
            factions[] = {};
        };
        class Indep_03 {
            displayName = "AAF (Desert Camo Net)";
            author = "Bohemia Interactive";
            textures[] = {
                "a3\armor_f_epb\mbt_03\data\mbt_03_ext01_co.paa",
                "a3\armor_f_epb\mbt_03\data\mbt_03_ext02_co.paa",
                "a3\armor_f_epb\mbt_03\data\mbt_03_rcws_co.paa",
                "a3\armor_f\data\camonet_aaf_digi_desert_co.paa"
            };
            factions[] = {};
        };
    };

    textureList[] = {
        "Indep_02", 1,
        "Indep_03", 1
    };

    MACRO_EVENTHANDLERS;
};
