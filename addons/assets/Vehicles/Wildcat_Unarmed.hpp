// Wildcat (Unarmed)
class I_Heli_light_03_unarmed_F: Heli_light_03_unarmed_base_F {
    class EventHandlers;
};

class TACU_Wildcat_Base: I_Heli_light_03_unarmed_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class Black {
            displayName = "Black";
            author = "GilleeDoo";
            textures[] = {"\x\tacs\addons\vehicles\data\heli_wildcat_black_co.paa"};
            factions[] = {};
        };
        class Green: Black {
            displayName = "Green";
            author = "Bohemia Interactive";
            textures[] = {"\a3\air_f_epb\heli_light_03\data\heli_light_03_base_co.paa"};
        };
        class Seven_Rings_West: Black {
            displayName = "Seven Rings West";
            textures[] = {QPATHTOF(data\wildcat\heli_light_03_base_srw_co.paa)};
            factions[] = {"TACU_Seven_Rings_Western"};
        };
    };

    textureList[] = {"Black", 1, "Green", 1};

    MACRO_EVENTHANDLERS;
};
