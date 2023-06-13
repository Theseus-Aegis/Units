// Uniforms (MGSR Prisoner Outfits)
class C_man_1;
class TACU_Assets_Unit_Prisoner_Outfit_Orange_Clean: C_man_1 {
    dlc = QUOTE(PREFIX);
    scope = 1;
    author = "Facel, Rebel";
    uniformClass = "TACU_Assets_Uniform_Prisoner_Outfit_Orange_Clean";
    modelSides[] = {6};
    model = QPATHTOF(assets_uniform_prisoner_outfit.p3d);
    hiddenSelections[] = {"camo", "ins1", "ins2", "ins3", "ins4", "ins5"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\prison\assets_uniform_prisoner_outfit_orange_clean_co.paa),
        QPATHTOF(data\prison\ins\9.paa),
        QPATHTOF(data\prison\ins\4.paa),
        QPATHTOF(data\prison\ins\7.paa),
        QPATHTOF(data\prison\ins\0.paa),
        QPATHTOF(data\prison\ins\2.paa)
    };
    hiddenSelectionsMaterials[] = {QPATHTOF(data\prison\assets_uniform_prisoner_outfit_orange.rvmat)};
    class Wounds {
        tex[] = {};
        mat[] = {
            "x\tacu\addons\assets\data\prison\assets_uniform_prisoner_outfit_orange.rvmat",
            "x\tacu\addons\assets\data\prison\assets_uniform_prisoner_outfit_orange_wound_01.rvmat",
            "x\tacu\addons\assets\data\prison\assets_uniform_prisoner_outfit_orange_wound_02.rvmat",

            "x\tacu\addons\assets\data\prison\assets_uniform_prisoner_outfit_blue.rvmat",
            "x\tacu\addons\assets\data\prison\assets_uniform_prisoner_outfit_blue_wound_01.rvmat",
            "x\tacu\addons\assets\data\prison\assets_uniform_prisoner_outfit_blue_wound_02.rvmat",

            "x\tacu\addons\assets\data\prison\assets_uniform_prisoner_outfit_olive.rvmat",
            "x\tacu\addons\assets\data\prison\assets_uniform_prisoner_outfit_olive_wound_01.rvmat",
            "x\tacu\addons\assets\data\prison\assets_uniform_prisoner_outfit_olive_wound_02.rvmat",

            "A3\Characters_F\Common\Data\basicbody.rvmat",
            "A3\Characters_F\Common\Data\basicbody_injury.rvmat",
            "A3\Characters_F\Common\Data\basicbody_injury.rvmat",

            "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",

            "A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
            "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",

            "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",

            "A3\Characters_F\Heads\Data\hl_white_old.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",

            "A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
            "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
        };
    };
};
class TACU_Assets_Unit_Prisoner_Outfit_Orange_Dirty: TACU_Assets_Unit_Prisoner_Outfit_Orange_Clean {
    author = "Facel, Rebel";
    uniformClass = "TACU_Assets_Uniform_Prisoner_Outfit_Orange_Dirty";
    modelSides[] = {6};
    model = QPATHTOF(assets_uniform_prisoner_outfit.p3d);
    hiddenSelections[] = {"camo", "ins1", "ins2", "ins3", "ins4", "ins5"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\prison\assets_uniform_prisoner_outfit_orange_dirty_co.paa),
        QPATHTOF(data\prison\ins\9.paa),
        QPATHTOF(data\prison\ins\4.paa),
        QPATHTOF(data\prison\ins\7.paa),
        QPATHTOF(data\prison\ins\0.paa),
        QPATHTOF(data\prison\ins\2.paa)
    };
    hiddenSelectionsMaterials[] = {QPATHTOF(data\prison\assets_uniform_prisoner_outfit_orange.rvmat)};
};
class TACU_Assets_Unit_Prisoner_Outfit_Orange_Muddy: TACU_Assets_Unit_Prisoner_Outfit_Orange_Clean {
    uniformClass = "TACU_Assets_Uniform_Prisoner_Outfit_Orange_Muddy";
    model = QPATHTOF(assets_uniform_prisoner_outfit.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\prison\assets_uniform_prisoner_outfit_orange_muddy_co.paa),
        QPATHTOF(data\prison\ins\9.paa),
        QPATHTOF(data\prison\ins\4.paa),
        QPATHTOF(data\prison\ins\7.paa),
        QPATHTOF(data\prison\ins\0.paa),
        QPATHTOF(data\prison\ins\2.paa)
    };
};

class TACU_Assets_Unit_Prisoner_Outfit_Blue_Clean: TACU_Assets_Unit_Prisoner_Outfit_Orange_Clean {
    uniformClass = "TACU_Assets_Uniform_Prisoner_Outfit_Blue_Clean";
    model = QPATHTOF(assets_uniform_prisoner_outfit.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\prison\assets_uniform_prisoner_outfit_blue_clean_co.paa),
        QPATHTOF(data\prison\ins\9.paa),
        QPATHTOF(data\prison\ins\4.paa),
        QPATHTOF(data\prison\ins\7.paa),
        QPATHTOF(data\prison\ins\0.paa),
        QPATHTOF(data\prison\ins\2.paa)
    };
    hiddenSelectionsMaterials[] = {QPATHTOF(data\prison\assets_uniform_prisoner_outfit_blue.rvmat)};
};
class TACU_Assets_Unit_Prisoner_Outfit_Blue_Dirty: TACU_Assets_Unit_Prisoner_Outfit_Orange_Clean {
    uniformClass = "TACU_Assets_Uniform_Prisoner_Outfit_Blue_Dirty";
    model = QPATHTOF(assets_uniform_prisoner_outfit.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\prison\assets_uniform_prisoner_outfit_blue_dirty_co.paa),
        QPATHTOF(data\prison\ins\9.paa),
        QPATHTOF(data\prison\ins\4.paa),
        QPATHTOF(data\prison\ins\7.paa),
        QPATHTOF(data\prison\ins\0.paa),
        QPATHTOF(data\prison\ins\2.paa)
    };
    hiddenSelectionsMaterials[] = {QPATHTOF(data\prison\assets_uniform_prisoner_outfit_blue.rvmat)};
};
class TACU_Assets_Unit_Prisoner_Outfit_Blue_Muddy: TACU_Assets_Unit_Prisoner_Outfit_Orange_Clean {
    uniformClass = "TACU_Assets_Uniform_Prisoner_Outfit_Blue_Muddy";
    model = QPATHTOF(assets_uniform_prisoner_outfit.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\prison\assets_uniform_prisoner_outfit_blue_muddy_co.paa),
        QPATHTOF(data\prison\ins\9.paa),
        QPATHTOF(data\prison\ins\4.paa),
        QPATHTOF(data\prison\ins\7.paa),
        QPATHTOF(data\prison\ins\0.paa),
        QPATHTOF(data\prison\ins\2.paa)
    };
    hiddenSelectionsMaterials[] = {QPATHTOF(data\prison\assets_uniform_prisoner_outfit_blue.rvmat)};
};

class TACU_Assets_Unit_Prisoner_Outfit_Olive_Clean: TACU_Assets_Unit_Prisoner_Outfit_Orange_Clean {
    uniformClass = "TACU_Assets_Uniform_Prisoner_Outfit_Olive_Clean";
    model = QPATHTOF(assets_uniform_prisoner_outfit.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\prison\assets_uniform_prisoner_outfit_olive_clean_co.paa),
        QPATHTOF(data\prison\ins\9.paa),
        QPATHTOF(data\prison\ins\4.paa),
        QPATHTOF(data\prison\ins\7.paa),
        QPATHTOF(data\prison\ins\0.paa),
        QPATHTOF(data\prison\ins\2.paa)
    };
    hiddenSelectionsMaterials[] = {QPATHTOF(data\prison\assets_uniform_prisoner_outfit_olive.rvmat)};
};
class TACU_Assets_Unit_Prisoner_Outfit_Olive_Dirty: TACU_Assets_Unit_Prisoner_Outfit_Orange_Clean {
    uniformClass = "TACU_Assets_Uniform_Prisoner_Outfit_Olive_Dirty";
    model = QPATHTOF(assets_uniform_prisoner_outfit.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\prison\assets_uniform_prisoner_outfit_olive_dirty_co.paa),
        QPATHTOF(data\prison\ins\9.paa),
        QPATHTOF(data\prison\ins\4.paa),
        QPATHTOF(data\prison\ins\7.paa),
        QPATHTOF(data\prison\ins\0.paa),
        QPATHTOF(data\prison\ins\2.paa)
    };
    hiddenSelectionsMaterials[] = {QPATHTOF(data\prison\assets_uniform_prisoner_outfit_olive.rvmat)};
};
class TACU_Assets_Unit_Prisoner_Outfit_Olive_Muddy: TACU_Assets_Unit_Prisoner_Outfit_Orange_Clean {
    uniformClass = "TACU_Assets_Uniform_Prisoner_Outfit_Olive_Muddy";
    model = QPATHTOF(assets_uniform_prisoner_outfit.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\prison\assets_uniform_prisoner_outfit_olive_muddy_co.paa),
        QPATHTOF(data\prison\ins\9.paa),
        QPATHTOF(data\prison\ins\4.paa),
        QPATHTOF(data\prison\ins\7.paa),
        QPATHTOF(data\prison\ins\0.paa),
        QPATHTOF(data\prison\ins\2.paa)
    };
    hiddenSelectionsMaterials[] = {QPATHTOF(data\prison\assets_uniform_prisoner_outfit_olive.rvmat)};
};
