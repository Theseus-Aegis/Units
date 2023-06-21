// CH-47L Chinook (Armed)
class TACU_Chinook_Armed_Base: Heli_Transport_03_base_F {
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Heli_Transport_03_F.jpg";

    class TextureSources {
        class Green {
            displayName = "Green";
            author = "Bohemia Interactive";
            textures[] = {"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_co.paa", "\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_co.paa"};
            factions[] = {};
        };
        class Black {
            displayName = "Black";
            author = "Bohemia Interactive";
            textures[] = {"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_black_co.paa", "\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_black_co.paa"};
            factions[] = {};
        };
    };

    textureList[] = {
        "Green", 1,
        "Black", 1
    };

    MACRO_EVENTHANDLERS;
};
