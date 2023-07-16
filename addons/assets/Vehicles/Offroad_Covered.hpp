// Offroad (Covered)
class I_E_Offroad_01_covered_F: Offroad_01_military_covered_base_F {
    class EventHandlers;
};

class TACU_Offroad_Covered_Base: I_E_Offroad_01_covered_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class Green {
            displayName = "Green";
            author = "Bohemia Interactive";
            textures[] = {
                "\a3\soft_f_enoch\offroad_01\data\offroad_01_ext_grn_co.paa",
                "\a3\soft_f_enoch\offroad_01\data\offroad_01_ext_grn_co.paa",
                "a3\soft_f_enoch\offroad_01\data\offroad_01_cover_grn_co.paa"
            };
            faction[] = {};
        };
        class Black: Green {
            displayName = "Black";
            textures[] = {
                "\a3\soft_f_enoch\offroad_01\data\offroad_01_ext_blk_co.paa",
                "\a3\soft_f_enoch\offroad_01\data\offroad_01_ext_blk_co.paa",
                "a3\soft_f_enoch\offroad_01\data\offroad_01_cover_blk_co.paa"
            };
        };
    };

    textureList[] = {"Green", 1, "Black", 1};

    MACRO_EVENTHANDLERS;
};
