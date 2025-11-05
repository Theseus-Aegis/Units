// Truck
class B_G_Van_01_transport_F;
class TACU_Truck_Base: B_G_Van_01_transport_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class Black {
            displayName = "Black";
            author = "Bohemia Interactive";
            textures[] = {
                "\a3\soft_f_gamma\van_01\data\van_01_ext_black_co.paa",
                "\a3\soft_f_gamma\van_01\data\van_01_adds_co.paa",
                "\a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa"
            };
            materials[] = {
                "\a3\soft_f_gamma\van_01\data\van_01_ext.rvmat",
                "\a3\soft_f_gamma\van_01\data\van_01_adds.rvmat",
                "\a3\soft_f_gamma\van_01\data\van_01_int_base.rvmat"
            };
            faction[] = {};
        };
        class White: Black {
            displayName = "White";
            textures[] = {
                "\a3\soft_f_gamma\van_01\data\van_01_ext_co.paa",
                "\a3\soft_f_gamma\van_01\data\van_01_adds_co.paa",
                "\a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa"
            };
        };
        class Red: Black {
            displayName = "Red";
            textures[] = {
                "\a3\soft_f_gamma\van_01\data\van_01_ext_red_co.paa",
                "\a3\soft_f_gamma\van_01\data\van_01_adds_co.paa",
                "\a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa"
            };
        };
        class Guerilla_01: Black {
            displayName = "Guerrilla 01";
            textures[] = {
                "\a3\soft_f_bootcamp\van_01\data\van_01_ext_ig_01_co.paa",
                "\a3\soft_f_bootcamp\van_01\data\van_01_adds_ig_01_co.paa",
                "\a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa"
            };
        };
        class Guerilla_02: Black {
            displayName = "Guerrilla 02";
            textures[] = {
                "\a3\soft_f_bootcamp\van_01\data\van_01_ext_ig_02_co.paa",
                "\a3\soft_f_bootcamp\van_01\data\van_01_adds_ig_02_co.paa",
                "\a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa"
            };
        };
        class Guerilla_03: Black {
            displayName = "Guerrilla 03";
            textures[] = {
                "\a3\soft_f_bootcamp\van_01\data\van_01_ext_ig_03_co.paa",
                "\a3\soft_f_bootcamp\van_01\data\van_01_adds_ig_03_co.paa",
                "\a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa"
            };
        };
        class Guerilla_04: Black {
            displayName = "Guerrilla 04";
            textures[] = {
                "\a3\soft_f_bootcamp\van_01\data\van_01_ext_ig_04_co.paa",
                "\a3\soft_f_bootcamp\van_01\data\van_01_adds_ig_04_co.paa",
                "\a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa"
            };
        };
        class Guerilla_05: Black {
            displayName = "Guerrilla 05";
            textures[] = {
                "\a3\soft_f_bootcamp\van_01\data\van_01_ext_ig_05_co.paa",
                "\a3\soft_f_bootcamp\van_01\data\van_01_adds_ig_05_co.paa",
                "\a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa"
            };
        };
        class Guerilla_06: Black {
            displayName = "Guerrilla 06";
            textures[] = {
                "\a3\soft_f_bootcamp\van_01\data\van_01_ext_ig_06_co.paa",
                "\a3\soft_f_bootcamp\van_01\data\van_01_adds_ig_06_co.paa",
                "\a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa"
            };
        };
        class Guerilla_07: Black {
            displayName = "Guerrilla 07";
            textures[] = {
                "\a3\soft_f_bootcamp\van_01\data\van_01_ext_ig_07_co.paa",
                "\a3\soft_f_bootcamp\van_01\data\van_01_adds_ig_07_co.paa",
                "\a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa"
            };
        };
        class Guerilla_08: Black {
            displayName = "Guerrilla 08";
            textures[] = {
                "\a3\soft_f_bootcamp\van_01\data\van_01_ext_ig_08_co.paa",
                "\a3\soft_f_bootcamp\van_01\data\van_01_adds_ig_08_co.paa",
                "\a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa"
            };
        };
        class Brown: Black {
            displayName = "Brown";
            textures[] = {
                "\a3\soft_f_exp\van_01\data\van_01_ext_brn_co.paa",
                "\a3\soft_f_gamma\van_01\data\van_01_adds_co.paa",
                "\a3\soft_f_exp\van_01\data\van_01_int_base_2_co.paa"
            };
        };
        class Olive: Black {
            displayName = "Olive";
            textures[] = {
                "\a3\soft_f_exp\van_01\data\van_01_ext_oli_co.paa",
                "\a3\soft_f_gamma\van_01\data\van_01_adds_co.paa",
                "\a3\soft_f_exp\van_01\data\van_01_int_base_3_co.paa"
            };
        };
    };

    textureList[] = {
        "Black", 1,
        "White", 1,
        "Red", 1,
        "Guerilla_01", 1,
        "Guerilla_02", 1,
        "Guerilla_03", 1,
        "Guerilla_04", 1,
        "Guerilla_05", 1,
        "Guerilla_06", 1,
        "Guerilla_07", 1,
        "Guerilla_08", 1,
        "Brown", 1,
        "Olive", 1
    };
};
