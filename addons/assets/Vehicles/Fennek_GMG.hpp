// Fennek (GMG)
class I_MRAP_03_gmg_F: MRAP_03_gmg_base_F {
    class EventHandlers;
};

class TACU_Fennek_GMG_Base: I_MRAP_03_gmg_F {
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class Blufor {
            displayName = "BLUFOR";
            author = "Bohemia Interactive";
            textures[] = {"\a3\soft_f_beta\MRAP_03\Data\mrap_03_ext_co.paa", "\a3\data_f\vehicles\turret_co.paa"};
            factions[] = {};
        };
        class Indep {
            displayName = "AAF";
            author = "Bohemia Interactive";
            textures[] = {"\a3\soft_f_beta\mrap_03\data\mrap_03_ext_indp_co.paa", "\a3\data_f\vehicles\turret_indp_co.paa"};
            factions[] = {};
        };
        class Vanguard {
            displayName = "Vanguard PMC";
            author = "GilleeDoo, Mike";
            textures[] = {QPATHTOF(data\fennek\vanguard_v_strider_co.paa), "\a3\data_f\vehicles\turret_co.paa"};
            factions[] = {"TACU_Vanguard", "TACU_Vanguard_O"};
        };
    };

    textureList[] = {
        "Blufor", 1,
        "Indep", 1,
        "Vanguard", 1
    };
};
