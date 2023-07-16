// Offroad Unarmed (Armoured)
class B_G_Offroad_01_armor_base_lxWS: I_G_Offroad_01_armor_base_lxWS {
    class EventHandlers;
};

class TACU_Offroad_Unarmed_UP_Base: B_G_Offroad_01_armor_base_lxWS {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class Black {
            displayName = "Black";
            author = "Rotators Collective";
            textures[] = {
                "\lxws\vehicles_f_lxws\data\offroad_01\offroad_01_ext_black_co.paa",
                "\lxws\vehicles_f_lxws\data\offroad_01\offroad_01_ext_black_co.paa",
                "\lxws\vehicles_f_lxws\offroad_01\data\offroad_01_adds_black_co.paa",
                "\lxws\vehicles_f_lxws\offroad_01\data\offroad_01_armor_black_co.paa"
            };

        };
        class White: Black {
            displayName = "White";
            textures[] = {
                "\a3\soft_f\offroad_01\data\offroad_01_ext_base02_co.paa",
                "\a3\soft_f\offroad_01\data\offroad_01_ext_base02_co.paa",
                "\lxws\vehicles_f_lxws\offroad_01\data\offroad_01_adds_black_co.paa",
                "\lxws\vehicles_f_lxws\offroad_01\data\offroad_01_armor_white_co.paa"
            };
        };
        class Red: Black {
            displayName = "Red";
            textures[] = {
                "\a3\soft_f\offroad_01\data\offroad_01_ext_co.paa",
                "\a3\soft_f\offroad_01\data\offroad_01_ext_co.paa",
                "\lxws\vehicles_f_lxws\offroad_01\data\offroad_01_adds_black_co.paa",
                "\lxws\vehicles_f_lxws\offroad_01\data\offroad_01_armor_rust_co.paa"
            };
        };
        class Beige: Black {
            displayName = "Beige";
            textures[] = {
                "\a3\soft_f\offroad_01\data\offroad_01_ext_base01_co.paa",
                "\a3\soft_f\offroad_01\data\offroad_01_ext_base01_co.paa",
                "\lxws\vehicles_f_lxws\offroad_01\data\offroad_01_adds_black_co.paa",
                "\lxws\vehicles_f_lxws\offroad_01\data\offroad_01_armor_sfia2_co.paa"
            };
        };
        class Blue: Black {
            displayName = "Blue";
            textures[] = {
                "\a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa",
                "\a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa",
                "\lxws\vehicles_f_lxws\offroad_01\data\offroad_01_adds_black_co.paa",
                "\lxws\vehicles_f_lxws\offroad_01\data\offroad_01_armor_rust_co.paa"
            };
        };
        class Darkred: Black {
            displayName = "Dark Red";
            textures[] = {
                "\a3\soft_f\offroad_01\data\offroad_01_ext_base04_co.paa",
                "\a3\soft_f\offroad_01\data\offroad_01_ext_base04_co.paa",
                "\lxws\vehicles_f_lxws\offroad_01\data\offroad_01_adds_black_co.paa",
                "\lxws\vehicles_f_lxws\offroad_01\data\offroad_01_armor_rust_co.paa"
            };
        };
        class Bluecustom: Black {
            displayName = "Blue Custom";
            textures[] = {
                "\a3\soft_f\offroad_01\data\offroad_01_ext_base05_co.paa",
                "\a3\soft_f\offroad_01\data\offroad_01_ext_base05_co.paa",
                "\lxws\vehicles_f_lxws\offroad_01\data\offroad_01_adds_black_co.paa",
                "\lxws\vehicles_f_lxws\offroad_01\data\offroad_01_armor_rust_co.paa"
            };
        };
        class Zebra: Black {
            displayName = "Zebra";
            textures[] = {
                "\lxws\vehicles_f_lxws\data\offroad_01\offroad_01_ext_zebra_co.paa",
                "\lxws\vehicles_f_lxws\data\offroad_01\offroad_01_ext_zebra_co.paa",
                "\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa",
                "\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_rust_co.paa"
            };
        };
        class Pink: Black {
            displayName = "Pink";
            textures[] = {
                "\lxws\vehicles_f_lxws\data\Offroad_01\offroad_01_ext_pink_co.paa",
                "\lxws\vehicles_f_lxws\data\Offroad_01\offroad_01_ext_pink_co.paa",
                "\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa",
                "\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_rust_co.paa"
            };
        };
        class Guerilla_01: Black {
            displayName = "Guerrilla 01";
            textures[] = {
                "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_01_co.paa",
                "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_01_co.paa",
                "\lxws\vehicles_f_lxws\offroad_01\data\offroad_01_adds_black_co.paa",
                "\lxws\vehicles_f_lxws\offroad_01\data\offroad_01_armor_rust_ig01_co.paa"
            };
        };
        class Guerilla_02: Black {
            displayName = "Guerrilla 02";
            textures[] = {
                "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_02_co.paa",
                "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_02_co.paa",
                "\lxws\vehicles_f_lxws\offroad_01\data\offroad_01_adds_black_co.paa",
                "\lxws\vehicles_f_lxws\offroad_01\data\offroad_01_armor_rust_ig02_co.paa"
            };
        };
        class Guerilla_03: Black {
            displayName = "Guerrilla 03";
            textures[] = {
                "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_03_co.paa",
                "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_03_co.paa",
                "\lxws\vehicles_f_lxws\offroad_01\data\offroad_01_adds_black_co.paa",
                "\lxws\vehicles_f_lxws\offroad_01\data\offroad_01_armor_rust_ig01_co.paa"
            };
        };
        class Guerilla_04: Black {
            displayName = "Guerrilla 04";
            textures[] = {
                "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_04_co.paa",
                "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_04_co.paa",
                "\lxws\vehicles_f_lxws\offroad_01\data\offroad_01_adds_black_co.paa",
                "\lxws\vehicles_f_lxws\offroad_01\data\offroad_01_armor_rust_ig04_co.paa"
            };
        };
        class Guerilla_05: Black {
            displayName = "Guerrilla 05";
            textures[] = {
                "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_05_co.paa",
                "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_05_co.paa",
                "\lxws\vehicles_f_lxws\offroad_01\data\offroad_01_adds_black_co.paa",
                "\lxws\vehicles_f_lxws\offroad_01\data\offroad_01_armor_rust_ig05_co.paa"
            };
        };
        class Guerilla_06: Black {
            displayName = "Guerrilla 06";
            textures[] = {
                "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_06_co.paa",
                "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_06_co.paa",
                "\lxws\vehicles_f_lxws\offroad_01\data\offroad_01_adds_black_co.paa",
                "\lxws\vehicles_f_lxws\offroad_01\data\offroad_01_armor_rust_ig06_co.paa"
            };
        };
        class Guerilla_07: Black {
            displayName = "Guerrilla 07";
            textures[] = {
                "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_07_co.paa",
                "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_07_co.paa",
                "\lxws\vehicles_f_lxws\offroad_01\data\offroad_01_adds_black_co.paa",
                "\lxws\vehicles_f_lxws\offroad_01\data\offroad_01_armor_rust_ig07_co.paa"
            };
        };
        class Guerilla_08: Black {
            displayName = "Guerrilla 08";
            textures[] = {
                "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_08_co.paa",
                "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_08_co.paa",
                "\lxws\vehicles_f_lxws\offroad_01\data\offroad_01_adds_black_co.paa",
                "\lxws\vehicles_f_lxws\offroad_01\data\offroad_01_armor_rust_ig08_co.paa"
            };
        };
        class Guerilla_09: Black {
            displayName = "Guerrilla 09";
            textures[] = {
                "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_09_co.paa",
                "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_09_co.paa",
                "\lxws\vehicles_f_lxws\offroad_01\data\offroad_01_adds_black_co.paa",
                "\lxws\vehicles_f_lxws\offroad_01\data\offroad_01_armor_rust_ig09_co.paa"
            };
        };
        class Guerilla_10: Black {
            displayName = "Guerrilla 10";
            textures[] = {
                "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_10_co.paa",
                "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_10_co.paa",
                "\lxws\vehicles_f_lxws\offroad_01\data\offroad_01_adds_black_co.paa",
                "\lxws\vehicles_f_lxws\offroad_01\data\offroad_01_armor_rust_ig10_co.paa"
            };
        };
        class Guerilla_11: Black {
            displayName = "Guerrilla 11";
            textures[] = {
                "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_11_co.paa",
                "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_11_co.paa",
                "\lxws\vehicles_f_lxws\offroad_01\data\offroad_01_adds_black_co.paa",
                "\lxws\vehicles_f_lxws\offroad_01\data\offroad_01_armor_rust_ig11_co.paa"
            };
        };
        class Guerilla_12: Black {
            displayName = "Guerrilla 12";
            textures[] = {
                "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_12_co.paa",
                "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_12_co.paa",
                "\lxws\vehicles_f_lxws\offroad_01\data\offroad_01_adds_black_co.paa",
                "\lxws\vehicles_f_lxws\offroad_01\data\offroad_01_armor_rust_ig12_co.paa"
            };
        };
        class Green: Black {
            displayName = "Green";
            textures[] = {
                "\a3\soft_f_enoch\offroad_01\data\offroad_01_ext_grn_co.paa",
                "\a3\soft_f_enoch\offroad_01\data\offroad_01_ext_grn_co.paa",
                "\lxws\vehicles_f_lxws\offroad_01\data\offroad_01_adds_black_co.paa",
                "\lxws\vehicles_f_lxws\offroad_01\data\offroad_01_armor_rust_co.paa"
            };
        };
    };

    textureList[] = {
        "Black", 1,
        "White", 1,
        "Red", 1,
        "Beige", 1,
        "Blue", 1,
        "Darkred", 1,
        "Bluecustom", 1,
        "Zebra", 1,
        "Pink", 1,
        "Green", 1,
        "Guerilla_01", 1,
        "Guerilla_02", 1,
        "Guerilla_03", 1,
        "Guerilla_04", 1,
        "Guerilla_05", 1,
        "Guerilla_06", 1,
        "Guerilla_07", 1,
        "Guerilla_08", 1,
        "Guerilla_09", 1,
        "Guerilla_10", 1,
        "Guerilla_11", 1,
        "Guerilla_12", 1
    };

    MACRO_EVENTHANDLERS;
};
