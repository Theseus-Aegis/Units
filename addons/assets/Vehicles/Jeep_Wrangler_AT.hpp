// Jeep Wrangler (SPG-9)
class I_C_Offroad_02_AT_F: Offroad_02_AT_base_F {
    class EventHandlers;
};

class TACU_Jeep_Wrangler_AT_Base: I_C_Offroad_02_AT_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class Black {
            displayName = "Black";
            author = "Bohemia Interactive";
            textures[] = {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa",
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa",
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa",
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"
            };
            materials[] = {MACRO_WRANGLER_MATERIALS};
            factions[] = {};
        };
        class Blue {
            displayName = "Blue";
            author = "Bohemia Interactive";
            textures[] = {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa",
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa",
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa",
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa"
            };
            materials[] = {MACRO_WRANGLER_MATERIALS};
            factions[] = {};
        };
        class Green {
            displayName = "Green";
            author = "Bohemia Interactive";
            textures[] = {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa",
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa",
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa",
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa"
            };
            materials[] = {MACRO_WRANGLER_MATERIALS};
            factions[] = {};
        };
        class Orange {
            displayName = "Orange";
            author = "Bohemia Interactive";
            textures[] = {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa",
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa",
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa",
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa"
            };
            materials[] = {MACRO_WRANGLER_MATERIALS};
            factions[] = {};
        };
        class Red {
            displayName = "Red";
            author = "Bohemia Interactive";
            textures[] = {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa",
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa",
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa",
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa"
            };
            materials[] = {MACRO_WRANGLER_MATERIALS};
            factions[] = {};
        };
        class White {
            displayName = "White";
            author = "Bohemia Interactive";
            textures[] = {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa",
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa",
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa",
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa"
            };
            materials[] = {MACRO_WRANGLER_MATERIALS};
            factions[] = {};
        };
        class Brown {
            displayName = "Brown";
            author = "Bohemia Interactive";
            textures[] = {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa",
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa",
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa",
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa"
            };
            materials[] = {MACRO_WRANGLER_MATERIALS_ALT};
            factions[] = {};
        };
        class Olive {
            displayName = "Olive";
            author = "Bohemia Interactive";
            textures[] = {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa",
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa",
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa",
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa"
            };
            materials[] = {MACRO_WRANGLER_MATERIALS_ALT};
            factions[] = {};
        };
    };

    textureList[] = {
        "Black", 1,
        "Blue", 1,
        "Green", 1,
        "Orange", 1,
        "Red", 1,
        "White", 1,
        "Brown", 1,
        "Olive", 1
    };

    MACRO_EVENTHANDLERS;
};
