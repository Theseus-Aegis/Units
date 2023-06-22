// Wildcat (Armed)
class I_Heli_light_03_dynamicLoadout_F: Heli_light_03_dynamicLoadout_base_F {
    class EventHandlers;
};

class TACU_Wildcat_Armed_Base: I_Heli_light_03_dynamicLoadout_F {
    MACRO_DEFAULT_VEHICLE
    class TextureSources {
        class Black {
            displayName = "Black";
            author = "GilleeDoo";
            textures[] = {
                "\x\tacs\addons\vehicles\data\heli_wildcat_black_co.paa",
                "a3\weapons_f\ammoboxes\data\ammobox_co.paa",
                "a3\weapons_f\ammoboxes\data\ammobox_signs_ca.paa"
            };
            factions[] = {};
        };
        // This one will need a retexture, Green has "Rescue" on it.
        class Green {
            displayName = "Green";
            author = "Bohemia Interactive";
            textures[] = {
                "\a3\air_f_epb\heli_light_03\data\heli_light_03_base_co.paa",
                "a3\weapons_f\ammoboxes\data\ammobox_co.paa",
                "a3\weapons_f\ammoboxes\data\ammobox_signs_ca.paa"
            };
            factions[] = {};
        };
    };

    textureList[] = {
        "Black", 1,
        "Green", 1
    };

    MACRO_EVENTHANDLERS;
};
