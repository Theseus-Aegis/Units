// M-ATV (HMG)
class B_MRAP_01_hmg_F: MRAP_01_hmg_base_F {
    class EventHandlers;
};

class TACU_MATV_HMG_Base: B_MRAP_01_hmg_F {
    MACRO_DEFAULT_VEHICLE
    class TextureSources {
        class Blufor {
            displayName = "Sand";
            textures[] = {
                "\a3\soft_f\mrap_01\data\mrap_01_base_co.paa",
                "\a3\soft_f\mrap_01\data\mrap_01_adds_co.paa",
                "\a3\data_f\vehicles\turret_co.paa"
            };
            factions[] = {};
        };
        class Olive {
            displayName = "Olive";
            author = "Bohemia Interactive";
            textures[] = {
                "\a3\soft_f_exp\mrap_01\data\mrap_01_base_olive_co.paa",
                "\a3\soft_f_exp\mrap_01\data\mrap_01_adds_olive_co.paa",
                "\a3\data_f_exp\vehicles\turret_olive_co.paa"
            };
            factions[] = {};
        };
        class Vanguard {
            displayName = "Vanguard PMC";
            author = "GilleeDoo, Mike";
            textures[] = {
                QPATHTOF(data\matv\vanguard_v_hunter_ext01_co.paa),
                QPATHTOF(data\matv\vanguard_v_hunter_ext02_co.paa),
                "\a3\data_f\vehicles\turret_co.paa"
            };
            factions[] = {"TACU_Vanguard", "TACU_Vanguard_O"};
        };
    };

    textureList[] = {
        "Blufor", 1,
        "Olive", 1,
        "Vanguard", 0
    };

    MACRO_EVENTHANDLERS;
};
