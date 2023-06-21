// AW101 - Merlin
class TACU_Merlin_Base: Heli_Transport_02_base_F {
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

    MACRO_EVENTHANDLERS
};
