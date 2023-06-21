// AW101 - Merlin
class TACU_Merlin_Base: Heli_Transport_02_base_F {
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_Heli_Transport_02_F.jpg";

    class TextureSources {
        class BAF {
            author = "GilleeDoo, Mike";
            displayName = "British Armed Forces";
            textures[] = {
                QPATHTOF(data\merlin\X.paa),
                QPATHTOF(data\merlin\X.paa),
                QPATHTOF(data\merlin\X.paa),
                QPATHTOF(data\merlin\X.paa)
            };
            factions[] = {};
        };
    };

    textureList[] = {"BAF", 1};

    MACRO_EVENTHANDLERS;
};
