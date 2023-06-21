// HEMTT Transport
class TACU_HEMTT_Base: Truck_01_base_F {
    class TextureSources {
        class Blufor {
            displayName = "Sand";
            author = "Bohemia Interactive";
            textures[] = {
                "\a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa",
                "\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa",
                "\a3\soft_f_beta\truck_01\data\truck_01_cargo_co.paa",
                "\a3\soft_f_beta\truck_01\data\truck_01_cover_co.paa"
            };
            factions[] = {};
        };
        class Olive {
            displayName = "Olive";
            author = "Bohemia Interactive";
            textures[] = {
                "\a3\soft_f_Exp\truck_01\data\truck_01_ext_01_olive_co.paa",
                "\a3\soft_f_Exp\truck_01\data\truck_01_ext_02_olive_co.paa",
                "\a3\soft_f_Exp\truck_01\data\truck_01_cargo_olive_co.paa",
                "\a3\soft_f_Exp\truck_01\data\truck_01_cover_olive_co.paa"
            };
            factions[] = {};
        };
    };

    textureList[] = {
        "Blufor", 1,
        "Olive", 1
    };

    MACRO_EVENTHANDLERS;
};

// HEMTT Transport (Covered)
class TACU_HEMTT_Covered_Base: TACU_HEMTT_Base {
    hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4"};
};
