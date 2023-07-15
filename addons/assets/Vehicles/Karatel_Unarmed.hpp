// Karatel
class O_MRAP_02_F: MRAP_02_base_F {
    class EventHandlers;
};

class TACU_Karatel_Unarmed_Base: O_MRAP_02_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
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
        class Seven_Rings_East {
            displayName = "Seven Rings East";
            author = "GilleeDoo";
            textures[] = {
                QPATHTOF(data\karatel\karatel_ext_01_sre_co.paa),
                QPATHTOF(data\karatel\karatel_ext_02_sre_co.paa),
                QPATHTOF(data\turrets\turret_karatel_sre_co.paa)
            };
            factions[] = {"TACU_Seven_Rings_Eastern"};
        };
    };

    textureList[] = {"Hex", 1};

    MACRO_EVENTHANDLERS;
};
