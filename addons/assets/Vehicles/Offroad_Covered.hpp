// Offroad (Covered)
class TACU_Offroad_Covered_Base: Offroad_01_military_covered_base_F {
    class TextureSources {
        class Green {
            displayName = "Green";
            author = "Bohemia Interactive";
            textures[] = {
                "\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa",
                "\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa",
                "a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_cover_grn_co.paa"
            };
            faction[] = {};
        };
        class Black {
            displayName = "Black";
            author = "Bohemia Interactive";
            textures[] = {
                "\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa",
                "\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa",
                "a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_cover_blk_co.paa"
            };
            faction[] = {};
        };
    };

    textureList[] = {
        "Green", 1,
        "Black", 1
    };

    MACRO_EVENTHANDLERS
};
