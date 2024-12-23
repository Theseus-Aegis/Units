// Jeep Wrangler Unarmed
class I_C_Offroad_02_unarmed_F: Offroad_02_unarmed_base_F {
    class EventHandlers;
};

class TACU_Jeep_Wrangler_Unarmed_Base: I_C_Offroad_02_unarmed_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class Black {
            displayName = "Black";
            author = "Bohemia Interactive";
            textures[] = {
                "\a3\soft_f_exp\offroad_02\data\offroad_02_ext_black_co.paa",
                "\a3\soft_f_exp\offroad_02\data\offroad_02_ext_black_co.paa",
                "\a3\soft_f_exp\offroad_02\data\offroad_02_int_black_co.paa",
                "\a3\soft_f_exp\offroad_02\data\offroad_02_int_black_co.paa"
            };
            materials[] = {
                "\a3\soft_f_exp\offroad_02\data\offroad_02_ext_metal.rvmat",
                "\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
                "\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
                "\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
            };
            factions[] = {};
        };
        class Blue: Black {
            displayName = "Blue";
            textures[] = {
                "\a3\soft_f_exp\offroad_02\data\offroad_02_ext_blue_co.paa",
                "\a3\soft_f_exp\offroad_02\data\offroad_02_ext_blue_co.paa",
                "\a3\soft_f_exp\offroad_02\data\offroad_02_int_blue_co.paa",
                "\a3\soft_f_exp\offroad_02\data\offroad_02_int_blue_co.paa"
            };
        };
        class Green: Black {
            displayName = "Green";
            textures[] = {
                "\a3\soft_f_exp\offroad_02\data\offroad_02_ext_green_co.paa",
                "\a3\soft_f_exp\offroad_02\data\offroad_02_ext_green_co.paa",
                "\a3\soft_f_exp\offroad_02\data\offroad_02_int_green_co.paa",
                "\a3\soft_f_exp\offroad_02\data\offroad_02_int_green_co.paa"
            };
        };
        class Orange: Black {
            displayName = "Orange";
            textures[] = {
                "\a3\soft_f_exp\offroad_02\data\offroad_02_ext_orange_co.paa",
                "\a3\soft_f_exp\offroad_02\data\offroad_02_ext_orange_co.paa",
                "\a3\soft_f_exp\offroad_02\data\offroad_02_int_orange_co.paa",
                "\a3\soft_f_exp\offroad_02\data\offroad_02_int_orange_co.paa"
            };
        };
        class Red: Black {
            displayName = "Red";
            textures[] = {
                "\a3\soft_f_exp\offroad_02\data\offroad_02_ext_red_co.paa",
                "\a3\soft_f_exp\offroad_02\data\offroad_02_ext_red_co.paa",
                "\a3\soft_f_exp\offroad_02\data\offroad_02_int_red_co.paa",
                "\a3\soft_f_exp\offroad_02\data\offroad_02_int_red_co.paa"
            };
        };
        class White: Black {
            displayName = "White";
            textures[] = {
                "\a3\soft_f_exp\offroad_02\data\offroad_02_ext_white_co.paa",
                "\a3\soft_f_exp\offroad_02\data\offroad_02_ext_white_co.paa",
                "\a3\soft_f_exp\offroad_02\data\offroad_02_int_white_co.paa",
                "\a3\soft_f_exp\offroad_02\data\offroad_02_int_white_co.paa"
            };
        };
        class Brown: Black {
            displayName = "Brown";
            textures[] = {
                "\a3\soft_f_exp\offroad_02\data\offroad_02_ext_brown_co.paa",
                "\a3\soft_f_exp\offroad_02\data\offroad_02_ext_brown_co.paa",
                "\a3\soft_f_exp\offroad_02\data\offroad_02_int_brown_co.paa",
                "\a3\soft_f_exp\offroad_02\data\offroad_02_int_brown_co.paa"
            };
            materials[] = {
                "\a3\soft_f_exp\offroad_02\data\offroad_02_ext_2_metal.rvmat",
                "\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
                "\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
                "\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
            };
        };
        class Olive: Brown {
            displayName = "Olive";
            textures[] = {
                "\a3\soft_f_exp\offroad_02\data\offroad_02_ext_olive_co.paa",
                "\a3\soft_f_exp\offroad_02\data\offroad_02_ext_olive_co.paa",
                "\a3\soft_f_exp\offroad_02\data\offroad_02_int_olive_co.paa",
                "\a3\soft_f_exp\offroad_02\data\offroad_02_int_olive_co.paa"
            };
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
