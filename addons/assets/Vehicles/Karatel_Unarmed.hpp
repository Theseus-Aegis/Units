// Karatel
class O_MRAP_02_F: MRAP_02_base_F {
    class EventHandlers;
};

class TACU_Karatel_Unarmed_Base: O_MRAP_02_F {
    MACRO_DEFAULT_VEHICLE
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
