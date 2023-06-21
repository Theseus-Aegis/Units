// M-ATV (GMG)
class TACU_MATV_GMG_Base: MRAP_01_gmg_base_F {
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_MRAP_01_gmg_F.jpg";

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
        "Vanguard", 1
    };

    MACRO_EVENTHANDLERS;
};
