class CfgWeapons {
    // Prisoner Outfits - Orange
    class Uniform_Base;
    class UniformItem;
    class TACU_Assets_Uniform_Prisoner_Outfit_Orange_Clean: Uniform_Base {
        dlc = QUOTE(PREFIX);
        author = "Facel, Rebel";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Prisoner Outfit (Orange, Clean)";
        picture = QPATHTOF(ui\prison\assets_uniform_prisoner_outfit_orange_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "TACU_Assets_Unit_Prisoner_Outfit_Orange_Clean";
            containerClass = "Supply20";
            mass = 40;
        };
    };
    class TACU_Assets_Uniform_Prisoner_Outfit_Orange_Dirty: TACU_Assets_Uniform_Prisoner_Outfit_Orange_Clean {
        displayName = "Prisoner Outfit (Orange, Dirty)";
        picture = QPATHTOF(ui\prison\assets_uniform_prisoner_outfit_orange_ca.paa);
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Assets_Unit_Prisoner_Outfit_Orange_Dirty";
        };
    };
    class TACU_Assets_Uniform_Prisoner_Outfit_Orange_Muddy: TACU_Assets_Uniform_Prisoner_Outfit_Orange_Clean {
        displayName = "Prisoner Outfit (Orange, Muddy)";
        picture = QPATHTOF(ui\prison\assets_uniform_prisoner_outfit_orange_ca.paa);
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Assets_Unit_Prisoner_Outfit_Orange_Muddy";
        };
    };

    // Prisoner Outfits - Blue
    class TACU_Assets_Uniform_Prisoner_Outfit_Blue_Clean: TACU_Assets_Uniform_Prisoner_Outfit_Orange_Clean {
        displayName = "Prisoner Outfit (Blue, Clean)";
        picture = QPATHTOF(ui\prison\assets_uniform_prisoner_outfit_blue_ca.paa);
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Assets_Unit_Prisoner_Outfit_Blue_Clean";
        };
    };
    class TACU_Assets_Uniform_Prisoner_Outfit_Blue_Dirty: TACU_Assets_Uniform_Prisoner_Outfit_Orange_Clean {
        displayName = "Prisoner Outfit (Blue, Dirty)";
        picture = QPATHTOF(ui\prison\assets_uniform_prisoner_outfit_blue_ca.paa);
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Assets_Unit_Prisoner_Outfit_Blue_Dirty";
        };
    };
    class TACU_Assets_Uniform_Prisoner_Outfit_Blue_Muddy: TACU_Assets_Uniform_Prisoner_Outfit_Orange_Clean {
        displayName = "Prisoner Outfit (Blue, Muddy)";
        picture = QPATHTOF(ui\prison\assets_uniform_prisoner_outfit_blue_ca.paa);
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Assets_Unit_Prisoner_Outfit_Blue_Muddy";
        };
    };

    // Prisoner Outfits - Olive
    class TACU_Assets_Uniform_Prisoner_Outfit_Olive_Clean: TACU_Assets_Uniform_Prisoner_Outfit_Orange_Clean {
        displayName = "Prisoner Outfit (Olive, Clean)";
        picture = QPATHTOF(ui\prison\assets_uniform_prisoner_outfit_olive_ca.paa);
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Assets_Unit_Prisoner_Outfit_Olive_Clean";
        };
    };
    class TACU_Assets_Uniform_Prisoner_Outfit_Olive_Dirty: TACU_Assets_Uniform_Prisoner_Outfit_Orange_Clean {
        displayName = "Prisoner Outfit (Olive, Dirty)";
        picture = QPATHTOF(ui\prison\assets_uniform_prisoner_outfit_olive_ca.paa);
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Assets_Unit_Prisoner_Outfit_Olive_Dirty";
        };
    };
    class TACU_Assets_Uniform_Prisoner_Outfit_Olive_Muddy: TACU_Assets_Uniform_Prisoner_Outfit_Orange_Clean {
        displayName = "Prisoner Outfit (Olive, Muddy)";
        picture = QPATHTOF(ui\prison\assets_uniform_prisoner_outfit_olive_ca.paa);
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Assets_Unit_Prisoner_Outfit_Olive_Muddy";
        };
    };
};
