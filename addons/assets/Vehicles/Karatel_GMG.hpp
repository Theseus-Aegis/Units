// Karatel (GMG)
class TACU_Karatel_GMG_Base: MRAP_02_gmg_base_F {
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_MRAP_02_gmg_F.jpg";

    class TextureSources {
        class Hex {
            displayName = "Hex";
            author = "Bohemia Interactive";
            textures[] = {
                "\A3\soft_F\MRAP_02\data\MRAP_02_ext_01_CO.paa",
                "\A3\soft_F\MRAP_02\data\MRAP_02_ext_02_CO.paa",
                "\A3\Data_F\Vehicles\turret_opfor_co.paa"
            };
            factions[] = {};
        };
        class GreenHex {
            displayName = "Green Hex";
            author = "Bohemia Interactive";
            textures[] = {
                "\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_01_ghex_CO.paa",
                "\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_02_ghex_CO.paa",
                "\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"
            };
            factions[] = {};
        };
    };

    textureList[] = {
        "Hex", 1,
        "GreenHex", 1
    };

    MACRO_EVENTHANDLERS;
};
