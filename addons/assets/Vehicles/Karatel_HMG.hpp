// Karatel (HMG)
class O_MRAP_02_hmg_F: MRAP_02_hmg_base_F {
    class EventHandlers;
};

class TACU_Karatel_HMG_Base: O_MRAP_02_hmg_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class Hex {
            displayName = "Hex";
            author = "Bohemia Interactive";
            textures[] = {
                "\a3\soft_f\mrap_02\data\mrap_02_ext_01_co.paa",
                "\a3\soft_f\mrap_02\data\mrap_02_ext_02_co.paa",
                "\a3\data_f\vehicles\turret_opfor_co.paa"
            };
            factions[] = {};
        };
        class Seven_Rings_East {
            displayName = "Seven Rings East";
            author = "GilleeDoo";
            textures[] = {
                QPATHTOF(data\karatel\karatel_ext_01_sre_co.paa),
                QPATHTOF(data\karatel\karatel_ext_02_sre_co.paa),
                QPATHTOF(data\turrets\turret_sre_co.paa)
            };
            factions[] = {"TACU_Seven_Rings_Eastern"};
        };
    };

    textureList[] = {"Hex", 1};

    MACRO_EVENTHANDLERS;
};
