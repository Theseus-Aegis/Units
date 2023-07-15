// M-ATV
class B_MRAP_01_F: MRAP_01_base_F {
    class EventHandlers;
};

class TACU_MATV_Unarmed_Base: B_MRAP_01_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
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
        class Olive: Blufor {
            displayName = "Olive";
            textures[] = {
                "\a3\soft_f_exp\mrap_01\data\mrap_01_base_olive_co.paa",
                "\a3\soft_f_exp\mrap_01\data\mrap_01_adds_olive_co.paa",
                "\a3\data_f_exp\vehicles\turret_olive_co.paa"
            };
        };
        class Vanguard {
            displayName = "Vanguard PMC";
            author = "GilleeDoo";
            textures[] = {
                QPATHTOF(data\matv\vanguard_v_hunter_ext01_co.paa),
                QPATHTOF(data\matv\vanguard_v_hunter_ext02_co.paa),
                "\a3\data_f\vehicles\turret_co.paa"
            };
            factions[] = {"TACU_Vanguard", "TACU_Vanguard_O"};
        };
    };

    textureList[] = {"Blufor", 1, "Olive", 1};

    MACRO_EVENTHANDLERS;
};
