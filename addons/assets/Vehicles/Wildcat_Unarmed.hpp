// Wildcat (Unarmed)
class TACU_Wildcat_Base: Heli_light_03_unarmed_base_F {
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_Heli_light_03_unarmed_F.jpg";

    class TextureSources {
        class Black {
            displayName = "Black";
            author = "GilleeDoo";
            textures[] = {"\x\tacs\addons\vehicles\data\heli_wildcat_black_co.paa"};
            factions[] = {};
        };
        class Green {
            displayName = "Green";
            author = "Bohemia Interactive";
            textures[] = {"\a3\air_f_epb\heli_light_03\data\heli_light_03_base_co.paa"};
            factions[] = {};
        };
    };

    textureList[] = {
        "Black", 1,
        "Green", 1
    };

    MACRO_EVENTHANDLERS;
};
