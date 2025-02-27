// Units - Revolutionaries
class TACU_Revolutionaries_U_O_Tanoan_Rifleman01: TACU_Revolutionaries_U_I_Tanoan_Rifleman01 {
    faction = "TACU_Revolutionaries_O";
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_Tanoan";
    side = 0;
    scope = 2;
    scopeCurator = 2;
    linkedItems[] = {
        DEFAULT_ITEMS,
        "V_LegStrapBag_black_F",
        "G_Balaclava_blk"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS,
        "V_LegStrapBag_black_F",
        "G_Balaclava_blk"
    };
    magazines[] = {
        mag_5("TACU_Magazine_20Rnd_762_FAL"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_5("TACU_Magazine_20Rnd_762_FAL"),
        mag_2("SmokeShell")
    };
    headgearList[] = {};
    CBA_facewearList[] = {"G_Balaclava_blk", 1};
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Rifleman01);
};

class TACU_Revolutionaries_U_O_Tanoan_Rifleman02: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Rifleman (MK14)";
    uniformClass = "U_C_MAN_casual_2_F";
    weapons[] = {"srifle_DMR_06_hunter_F", "Throw", "Put"};
    respawnWeapons[] = {"srifle_DMR_06_hunter_F", "Throw", "Put"};
    magazines[] = {
        mag_5("10Rnd_Mk14_762x51_Mag"),
        "SmokeShellRed",
        "SmokeShellPurple"
    };
    respawnMagazines[] = {
        mag_5("10Rnd_Mk14_762x51_Mag"),
        "SmokeShellRed",
        "SmokeShellPurple"
    };
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Rifleman02);
};

class TACU_Revolutionaries_U_O_Tanoan_Rifleman03: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Rifleman (Lee Enfield)";
    uniformClass = "U_C_MAN_casual_6_F";
    linkedItems[] = {
        DEFAULT_ITEMS,
        "V_Pocketed_black_F",
        "G_Balaclava_blk"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS,
        "V_Pocketed_black_F",
        "G_Balaclava_blk"
    };
    weapons[] = {"CUP_srifle_LeeEnfield", "Throw", "Put"};
    respawnWeapons[] = {"CUP_srifle_LeeEnfield", "Throw", "Put"};
    magazines[] = {
        mag_5("CUP_10x_303_M"),
        "SmokeShellGreen",
        "SmokeShellYellow"
    };
    respawnMagazines[] = {
        mag_5("CUP_10x_303_M"),
        "SmokeShellGreen",
        "SmokeShellYellow"
    };
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Rifleman03);
};

class TACU_Revolutionaries_U_O_Tanoan_Rifleman04: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Rifleman (CZ805 A2)";
    uniformClass = "U_C_Poloshirt_tricolour";
    weapons[] = {"TACU_Revolutionaries_W_CZ805A2", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Revolutionaries_W_CZ805A2", "Throw", "Put"};
    magazines[] = {
        mag_6("TACU_Magazine_30Rnd_556_G36"),
        "SmokeShellBlue",
        "SmokeShellPurple"
    };
    respawnMagazines[] = {
        mag_6("TACU_Magazine_30Rnd_556_G36"),
        "SmokeShellBlue",
        "SmokeShellPurple"
    };
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Rifleman04);
};

class TACU_Revolutionaries_U_O_Tanoan_Paramedic: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Paramedic";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    uniformClass = "U_C_Poloshirt_burgundy";
    backpack = "TACU_Revolutionaries_B_Paramedic_Green";
    weapons[] = {"sgun_HunterShotgun_01_sawedoff_F", "Throw", "Put"};
    respawnWeapons[] = {"sgun_HunterShotgun_01_sawedoff_F", "Throw", "Put"};
    magazines[] = {
        mag_12("2Rnd_12Gauge_Pellets"),
        "SmokeShell",
        "SmokeShellOrange"
    };
    respawnMagazines[] = {
        mag_12("2Rnd_12Gauge_Pellets"),
        "SmokeShell",
        "SmokeShellOrange"
    };
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Paramedic);
};

class TACU_Revolutionaries_U_O_Tanoan_Shotgunner: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Shotgunner";
    uniformClass = "U_C_MAN_casual_3_F";
    linkedItems[] = {
        DEFAULT_ITEMS,
        "V_Pocketed_black_F",
        "G_Balaclava_blk"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS,
        "V_Pocketed_black_F",
        "G_Balaclava_blk"
    };
    weapons[] = {"sgun_HunterShotgun_01_F", "Throw", "Put"};
    respawnWeapons[] = {"sgun_HunterShotgun_01_F", "Throw", "Put"};
    magazines[] = {
        mag_12("2Rnd_12Gauge_Pellets"),
        "SmokeShell",
        "SmokeShellGreen"
    };
    respawnMagazines[] = {
        mag_12("2Rnd_12Gauge_Pellets"),
        "SmokeShell",
        "SmokeShellGreen"
    };
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Shotgunner);
};

class TACU_Revolutionaries_U_O_Tanoan_Marksman: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Marksman";
    role = "Marksman";
    uniformClass = "U_C_MAN_casual_5_F";
    linkedItems[] = {
        DEFAULT_ITEMS,
        "V_Pocketed_black_F",
        "G_Balaclava_blk"};
    respawnLinkedItems[] = {
        DEFAULT_ITEMS,
        "V_Pocketed_black_F",
        "G_Balaclava_blk"
    };
    weapons[] = {"CUP_srifle_CZ550", "Throw", "Put"};
    respawnWeapons[] = {"CUP_srifle_CZ550", "Throw", "Put"};
    magazines[] = {
        mag_4("CUP_5x_22_LR_17_HMR_M"),
        "SmokeShellRed",
        "SmokeShellBlue"
    };
    respawnMagazines[] = {
        mag_4("CUP_5x_22_LR_17_HMR_M"),
        "SmokeShellRed",
        "SmokeShellBlue"
    };
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Marksman);
};

class TACU_Revolutionaries_U_O_Tanoan_SMG01: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Submachine Gunner (MP5K)";
    uniformClass = "U_C_MAN_casual_4_F";
    weapons[] = {"TACU_Revolutionaries_W_MP5K", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Revolutionaries_W_MP5K", "Throw", "Put"};
    magazines[] = {
        mag_6("TACU_Magazine_30Rnd_SMG"),
        "SmokeShellGreen",
        "SmokeShellYellow"
    };
    respawnMagazines[] = {
        mag_6("TACU_Magazine_30Rnd_SMG"),
        "SmokeShellGreen",
        "SmokeShellYellow"
    };
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_SMG01);
};

class TACU_Revolutionaries_U_O_Tanoan_SMG02: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Submachine Gunner (Bizon)";
    uniformClass = "U_C_Poloshirt_burgundy";
    weapons[] = {"CUP_smg_bizon", "Throw", "Put"};
    respawnWeapons[] = {"CUP_smg_bizon", "Throw", "Put"};
    magazines[] = {
        mag_4("TACU_Magazine_64Rnd_Bizon"),
        "SmokeShellOrange",
        "SmokeShellPurple"
    };
    respawnMagazines[] = {
        mag_4("TACU_Magazine_64Rnd_Bizon"),
        "SmokeShellOrange",
        "SmokeShellPurple"
    };
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_SMG02);
};

class TACU_Revolutionaries_U_O_Tanoan_Grenadier: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Grenadier";
    role = "Grenadier";
    uniformClass = "U_C_Poloshirt_blue";
    linkedItems[] = {
        DEFAULT_ITEMS,
        "V_Pocketed_black_F",
        "G_Balaclava_blk"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS,
        "V_Pocketed_black_F",
        "G_Balaclava_blk"
    };
    weapons[] = {
        "CUP_glaunch_M79",
        "CUP_hgun_Glock17_blk",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "CUP_glaunch_M79",
        "CUP_hgun_Glock17_blk",
        "Throw", "Put"
    };
    magazines[] = {
        mag_6("1Rnd_HE_Grenade_shell"),
        mag_3("TACU_Magazine_17Rnd_Glock"),
        "SmokeShell",
        "SmokeShellPurple"
    };
    respawnMagazines[] = {
        mag_6("1Rnd_HE_Grenade_shell"),
        mag_3("TACU_Magazine_17Rnd_Glock"),
        "SmokeShell",
        "SmokeShellPurple"
    };
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Grenadier);
};

class TACU_Revolutionaries_U_O_Tanoan_Machinegunner: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Machinegunner";
    icon = "iconManMG";
    role = "MachineGunner";
    uniformClass = "U_C_Poloshirt_redwhite";
    backpack = "TACU_Revolutionaries_B_MMG_UK59_Green";
    linkedItems[] = {
        DEFAULT_ITEMS,
        "V_Pocketed_black_F",
        "G_Balaclava_blk"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS,
        "V_Pocketed_black_F",
        "G_Balaclava_blk"
    };
    weapons[] = {"CUP_lmg_UK59", "Throw", "Put"};
    respawnWeapons[] = {"CUP_lmg_UK59", "Throw", "Put"};
    magazines[] = {
        mag_2("CUP_50Rnd_UK59_762x54R_Tracer"),
        "SmokeShellOrange",
        "SmokeShellBlue"
    };
    respawnMagazines[] = {
        mag_2("CUP_50Rnd_UK59_762x54R_Tracer"),
        "SmokeShellOrange",
        "SmokeShellBlue"
    };
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Machinegunner);
};

class TACU_Revolutionaries_U_O_Tanoan_Autorifleman: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Autorifleman";
    icon = "iconManMG";
    role = "MachineGunner";
    uniformClass = "U_C_Poloshirt_salmon";
    backpack = "TACU_Revolutionaries_B_LMG_Minimi_Green";
    linkedItems[] = {
        DEFAULT_ITEMS,
        "V_Pocketed_black_F",
        "G_Balaclava_blk"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS,
        "V_Pocketed_black_F",
        "G_Balaclava_blk"
    };
    weapons[] = {"TACU_Revolutionaries_W_FNMinimiSPW", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Revolutionaries_W_FNMinimiSPW", "Throw", "Put"};
    magazines[] = {
        "TACU_Magazine_200Rnd_556_Box",
        "SmokeShellYellow",
        "SmokeShellRed"
    };
    respawnMagazines[] = {
        "TACU_Magazine_200Rnd_556_Box",
        "SmokeShellYellow",
        "SmokeShellRed"
    };
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Autorifleman);
};

class TACU_Revolutionaries_U_O_Tanoan_FigureHeadUA: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Figure Head (Unarmed)";
    uniformClass = "U_I_C_Soldier_Para_2_F";
    backpack = "";
    linkedItems[] = {DEFAULT_ITEMS, "H_Beret_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "", "H_Beret_blk"};
    weapons[] = {"Throw", "Put"};
    respawnWeapons[] = {"Throw", "Put"};
    magazines[] = {};
    respawnMagazines[] = {};
    headgearList[] = {"H_Beret_blk", 1};
    CBA_facewearList[] = {};
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_FigureHeadUA);
};

class TACU_Revolutionaries_U_O_Tanoan_FigureHead: TACU_Revolutionaries_U_O_Tanoan_FigureHeadUA {
    displayName = "Figure Head";
    icon = "iconManOfficer";
    weapons[] = {"CUP_hgun_TaurusTracker455_gold", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_TaurusTracker455_gold", "Throw", "Put"};
    magazines[] = {
        mag_3("CUP_6Rnd_45ACP_M"),
        "SmokeShellGreen",
        "SmokeShellOrange"
    };
    respawnMagazines[] = {
        mag_3("CUP_6Rnd_45ACP_M"),
        "SmokeShellGreen",
        "SmokeShellOrange"
    };
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_FigureHead);
};

class TACU_Revolutionaries_U_O_Tanoan_Leader: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Leader";
    icon = "iconManLeader";
    uniformClass = "U_I_C_Soldier_Para_4_F";
    linkedItems[] = {
        DEFAULT_ITEMS,
        "V_LegStrapBag_black_F",
        "H_Booniehat_oil",
        "G_Balaclava_blk"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS,
        "V_LegStrapBag_black_F",
        "H_Booniehat_oil",
        "G_Balaclava_blk"
    };
    weapons[] = {"TACU_Revolutionaries_W_CZ805_GL", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Revolutionaries_W_CZ805_GL", "Throw", "Put"};
    magazines[] = {
        mag_6("TACU_Magazine_30Rnd_556_G36"),
        mag_6("1Rnd_HE_Grenade_shell"),
        "SmokeShellBlue",
        "SmokeShellPurple"
    };
    respawnMagazines[] = {
        mag_6("TACU_Magazine_30Rnd_556_G36"),
        mag_6("1Rnd_HE_Grenade_shell"),
        "SmokeShellBlue",
        "SmokeShellPurple"
    };
    headgearList[] = {"H_Booniehat_oil", 1};
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Leader);
};

class TACU_Revolutionaries_U_O_Tanoan_Rocketeer: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Rocketeer";
    icon = "iconManAT";
    role = "MissileSpecialist";
    uniformClass = "U_I_C_Soldier_Bandit_1_F";
    backpack = "TACU_Revolutionaries_B_Rocketeer_Green";
    linkedItems[] = {
        DEFAULT_ITEMS,
        "V_Pocketed_black_F",
        "G_Balaclava_blk"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS,
        "V_Pocketed_black_F",
        "G_Balaclava_blk"
    };
    weapons[] = {
        "launch_RPG32_green_F",
        "CUP_hgun_Mac10",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "launch_RPG32_green_F",
        "CUP_hgun_Mac10",
        "Throw", "Put"
    };
    magazines[] = {
        mag_4("TACU_Magazine_30Rnd_MAC10"),
        "SmokeShellRed",
        "SmokeShellOrange"
    };
    respawnMagazines[] = {
        mag_4("TACU_Magazine_30Rnd_MAC10"),
        "SmokeShellRed",
        "SmokeShellOrange"
    };
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Rocketeer);
};

class TACU_Revolutionaries_U_O_Tanoan_Saboteur: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Saboteur";
    icon = "iconManExplosive";
    role = "Sapper";
    engineer = 1;
    uniformClass = "U_I_C_Soldier_Bandit_5_F";
    backpack = "TACU_Revolutionaries_B_Saboteur_Green";
    weapons[] = {"hgun_PDW2000_F", "Throw", "Put"};
    respawnWeapons[] = {"hgun_PDW2000_F", "Throw", "Put"};
    magazines[] = {
        mag_6("TACU_Magazine_30Rnd_SMG"),
        "SmokeShellYellow",
        "SmokeShellPurple"
    };
    respawnMagazines[] = {
        mag_6("TACU_Magazine_30Rnd_SMG"),
        "SmokeShellYellow",
        "SmokeShellPurple"
    };
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Saboteur);
};

class TACU_Revolutionaries_U_O_Tanoan_Pistoleer01: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Pistoleer (Grach)";
    uniformClass = "U_I_C_Soldier_Bandit_4_F";
    backpack = "";
    linkedItems[] = {
        DEFAULT_ITEMS,
        "V_Pocketed_black_F",
        "G_Balaclava_blk"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS,
        "V_Pocketed_black_F",
        "G_Balaclava_blk"
    };
    weapons[] = {"hgun_Rook40_F", "Throw", "Put"};
    respawnWeapons[] = {"hgun_Rook40_F", "Throw", "Put"};
    magazines[] = {
        mag_6("TACU_Magazine_17Rnd_Walther"),
        "SmokeShellGreen",
        "SmokeShellPurple"
    };
    respawnMagazines[] = {
        mag_6("TACU_Magazine_17Rnd_Walther"),
        "SmokeShellGreen",
        "SmokeShellPurple"
    };
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Pistoleer01);
};

class TACU_Revolutionaries_U_O_Tanoan_Pistoleer02: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Pistoleer (FNX)";
    uniformClass = "U_I_C_Soldier_Bandit_2_F";
    backpack = "";
    weapons[] = {"hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {
        mag_4("TACU_Magazine_11Rnd_FNX"),
        "SmokeShellYellow",
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_4("TACU_Magazine_11Rnd_FNX"),
        "SmokeShellYellow",
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Pistoleer02);
};

class TACU_Revolutionaries_U_O_Tanoan_Head: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Head";
    icon = "iconManOfficer";
    uniformClass = "U_Marshal";
    backpack = "";
    linkedItems[] = {
        DEFAULT_ITEMS,
        "V_LegStrapBag_black_F",
        "H_Hat_brown"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS,
        "V_LegStrapBag_black_F",
        "H_Hat_brown"
    };
    weapons[] = {"cup_hgun_Deagle", "Throw", "Put"};
    respawnWeapons[] = {"cup_hgun_Deagle", "Throw", "Put"};
    magazines[] = {
        mag_4("CUP_7Rnd_50AE_Deagle"),
        "SmokeShell",
        "SmokeShellBlue"
    };
    respawnMagazines[] = {
        mag_4("CUP_7Rnd_50AE_Deagle"),
        "SmokeShell",
        "SmokeShellBlue"
    };
    headgearList[] = {"H_Hat_brown", 1};
    CBA_facewearList[] = {};
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Head);
};

// Veterans
class TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    displayName = "Rifleman (FAMAS)";
    uniformClass = "U_BG_Guerrilla_6_1";
    backpack = "B_FieldPack_green_F";
    linkedItems[] = {
        DEFAULT_ITEMS,
        "V_TacVest_camo",
        "G_Balaclava_blk"
    };
    respawnLinkedItems[]= {
        DEFAULT_ITEMS,
        "V_TacVest_camo",
        "G_Balaclava_blk"
    };
    items[] = {"CUP_NVG_1PN138_Hide"};
    respawnItems[] = {"CUP_NVG_1PN138_Hide"};
    weapons[] = {"CUP_Famas_F1_Wood", "Throw", "Put"};
    respawnWeapons[] = {"CUP_Famas_F1_Wood", "Throw", "Put"};
    magazines[] = {
        mag_5("TACU_Magazine_25Rnd_556_Famas"),
        "HandGrenade",
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_5("TACU_Magazine_25Rnd_556_Famas"),
        "HandGrenade",
        mag_2("SmokeShell")
    };
    headgearList[] = {"H_HelmetB_plain_wdl", 1};
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01);
};

class TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman02: TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01 {
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    displayName = "Rifleman (MX)";
    uniformClass = "U_I_C_Soldier_Para_1_F";
    weapons[] = {"arifle_MX_ACO_pointer_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_MX_ACO_pointer_F", "Throw", "Put"};
    magazines[] = {
        mag_5("TACU_Magazine_30Rnd_MX"),
        "HandGrenade",
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_5("TACU_Magazine_30Rnd_MX"),
        "HandGrenade",
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman02);
};

class TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman03: TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01 {
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    displayName = "Rifleman (Katiba)";
    uniformClass = "U_I_C_Soldier_Para_5_F";
    weapons[] = {"arifle_Katiba_ARCO_pointer_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_Katiba_ARCO_pointer_F", "Throw", "Put"};
    magazines[] = {
        mag_5("TACU_Magazine_30Rnd_Katiba"),
        "HandGrenade",
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_5("TACU_Magazine_30Rnd_Katiba"),
        "HandGrenade",
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman03);
};

class TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman04: TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01 {
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    displayName = "Rifleman (Type 115)";
    uniformClass = "U_C_E_LooterJacket_01_F";
    weapons[] = {"arifle_ARX_ghex_ACO_Pointer_Snds_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_ARX_ghex_ACO_Pointer_Snds_F", "Throw", "Put"};
    magazines[] = {
        mag_5("TACU_Magazine_30Rnd_Katiba"),
        mag_5("10Rnd_50BW_Mag_F"),
        "HandGrenade",
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_5("TACU_Magazine_30Rnd_Katiba"),
        mag_5("10Rnd_50BW_Mag_F"),
        "HandGrenade",
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman04);
};

class TACU_Revolutionaries_U_O_Tanoan_Vet_Medic: TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01 {
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    displayName = "Medic";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    uniformClass = "U_I_C_Soldier_Para_5_F";
    backpack = "TACU_Revolutionaries_B_Paramedic_Green";
    weapons[] = {"CUP_arifle_X95_Grippod", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_X95_Grippod", "Throw", "Put"};
    magazines[] = {
        mag_5("TACU_Magazine_30Rnd_STANAG"),
        "HandGrenade",
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_5("TACU_Magazine_30Rnd_STANAG"),
        "HandGrenade",
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Vet_Medic);

};

class TACU_Revolutionaries_U_O_Tanoan_Vet_Shotgunner: TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01 {
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    displayName = "Shotgunner";
    uniformClass = "U_O_R_Gorka_01_brown_F";
    weapons[] = {"CUP_sgun_SPAS12", "Throw", "Put"};
    respawnWeapons[] = {"CUP_sgun_SPAS12", "Throw", "Put"};
    magazines[] = {
        mag_5("CUP_8Rnd_12Gauge_Pellets_No00_Buck"),
        mag_5("CUP_8Rnd_12Gauge_Slug"),
        "HandGrenade",
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_5("CUP_8Rnd_12Gauge_Pellets_No00_Buck"),
        mag_5("CUP_8Rnd_12Gauge_Slug"),
        "HandGrenade",
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Vet_Shotgunner);
};

class TACU_Revolutionaries_U_O_Tanoan_Vet_Marksman: TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01 {
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    displayName = "Marksman";
    uniformClass = "U_I_FullGhillie_sard";
    weapons[] = {"TACU_Revolutionaries_W_M24", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Revolutionaries_W_M24", "Throw", "Put"};
    magazines[] = {
        mag_8("CUP_5Rnd_762x51_M24"),
        "HandGrenade",
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_8("CUP_5Rnd_762x51_M24"),
        "HandGrenade",
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Vet_Marksman);
};

class TACU_Revolutionaries_U_O_Tanoan_Vet_SMG01: TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01 {
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    displayName = "SMG (MP5SD)";
    uniformClass = "U_C_WorkerCoveralls";
    weapons[] = {"CUP_smg_MP5SD6", "Throw", "Put"};
    respawnWeapons[] = {"CUP_smg_MP5SD6", "Throw", "Put"};
    magazines[] = {
        mag_8("TACU_Magazine_30Rnd_MP5"),
        "HandGrenade",
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_8("TACU_Magazine_30Rnd_MP5"),
        "HandGrenade",
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Vet_SMG01);
};

class TACU_Revolutionaries_U_O_Tanoan_Vet_SMG02: TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01 {
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    displayName = "SMG (PS90)";
    uniformClass = "U_I_L_Uniform_01_tshirt_sport_F";
    weapons[] = {"CUP_smg_PS90_olive", "Throw", "Put"};
    respawnWeapons[] = {"CUP_smg_PS90_olive", "Throw", "Put"};
    magazines[] = {
        mag_8("TACU_Magazine_50Rnd_P90"),
        "HandGrenade",
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_8("TACU_Magazine_50Rnd_P90"),
        "HandGrenade",
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Vet_SMG02);
};

class TACU_Revolutionaries_U_O_Tanoan_Vet_Grenadier: TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01 {
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    displayName = "Grenadier";
    uniformClass = "U_C_man_sport_2_F";
    weapons[] = {"CUP_glaunch_M32", "hgun_Pistol_heavy_02_F", "Throw", "Put"};
    respawnWeapons[] = {"CUP_glaunch_M32", "hgun_Pistol_heavy_02_F", "Throw", "Put"};
    magazines[] = {
        mag_5("CUP_6Rnd_HE_M203"),
        mag_3("TACU_Magazine_Cylinder"),
        "HandGrenade",
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_5("CUP_6Rnd_HE_M203"),
        mag_3("TACU_Magazine_Cylinder"),
        "HandGrenade",
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Vet_Grenadier);
};

class TACU_Revolutionaries_U_O_Tanoan_Vet_Machinegunner: TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01 {
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    displayName = "Machinegunner";
    uniformClass = "U_O_R_Gorka_01_black_F";
    backpack = "TACU_Revolutionaries_B_Vet_M60_Green";
    weapons[] = {"CUP_lmg_M60E4_norail_jungle", "Throw", "Put"};
    respawnWeapons[] = {"CUP_lmg_M60E4_norail_jungle", "Throw", "Put"};
    magazines[] = {
        mag_5("TACU_Magazine_100Rnd_762_M240"),
        "HandGrenade",
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_5("TACU_Magazine_100Rnd_762_M240"),
        "HandGrenade",
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Vet_Machinegunner);
};

class TACU_Revolutionaries_U_O_Tanoan_Vet_Autorifleman: TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01 {
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    displayName = "Autorifleman";
    uniformClass = "U_O_R_Gorka_01_black_F";
    backpack = "TACU_Revolutionaries_B_Vet_MXLSW_Green";
    weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "Put"};
    magazines[] = {
        mag_5("TACU_Magazine_100Rnd_MX"),
        "HandGrenade",
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_5("TACU_Magazine_100Rnd_MX"),
        "HandGrenade",
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Vet_Autorifleman);
};

class TACU_Revolutionaries_U_O_Tanoan_Vet_Figure_Head: TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01 {
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    displayName = "Figure Head";
    icon = "iconManOfficer";
    uniformClass = "U_C_FormalSuit_01_black_F";
    backpack = "";
    weapons[] = {"CUP_arifle_M4_MOE_BW", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_M4_MOE_BW", "Throw", "Put"};
    magazines[] = {
        mag_8("CUP_10Rnd_50BW_Mag_M4_M"),
        "HandGrenade",
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_8("CUP_10Rnd_50BW_Mag_M4_M"),
        "HandGrenade",
        "SmokeShell"
    };
    headgearList[] = {"H_HelmetSpecO_blk", 1};
    CBA_facewearList[] = {};
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Vet_Figure_Head);
};

class TACU_Revolutionaries_U_O_Tanoan_Vet_Leader: TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01 {
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    displayName = "Leader";
    icon = "iconManOfficer";
    uniformClass = "U_I_L_Uniform_01_tshirt_olive_F";
    backpack = "";
    weapons[] = {"CUP_arifle_Mk17_STD_EGLM_woodland", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_Mk17_STD_EGLM_woodland", "Throw", "Put"};
    magazines[] = {
        mag_5("TACU_Magazine_20Rnd_762_SCARH"),
        mag_5("1Rnd_HE_Grenade_shell"),
        "HandGrenade",
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_5("TACU_Magazine_20Rnd_762_SCARH"),
        mag_5("1Rnd_HE_Grenade_shell"),
        "HandGrenade",
        "SmokeShell"
    };
    headgearList[] = {"CUP_H_RUS_Altyn_Shield_Down_khaki", 1};
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Vet_Leader);
};

class TACU_Revolutionaries_U_O_Tanoan_Vet_Rocketeer: TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01 {
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    displayName = "Rocketeer";
    icon = "iconManAT";
    role = "MissileSpecialist";
    uniformClass = "U_I_L_Uniform_01_tshirt_sport_F";
    backpack = "TACU_Revolutionaries_B_Vet_Rocketeer_Green";
    weapons[] = {
        "tacs_MRAWS_Black_F",
        "SMG_03C_black",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "tacs_MRAWS_Black_F",
        "SMG_03C_black",
        "Throw", "Put"
    };
    magazines[] = {
        mag_5("TACU_Magazine_50Rnd_P90"),
        "HandGrenade",
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_5("TACU_Magazine_50Rnd_P90"),
        "HandGrenade",
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Vet_Rocketeer);
};

class TACU_Revolutionaries_U_O_Tanoan_Vet_Pistoleer01: TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01 {
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    displayName = "Pistoleer (TEC9)";
    uniformClass = "U_I_L_Uniform_01_tshirt_sport_F";
    weapons[] = {"CUP_hgun_TEC9_FA", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_TEC9_FA", "Throw", "Put"};
    magazines[] = {
        mag_5("TACU_Magazine_32Rnd_TEC9"),
        "HandGrenade",
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_5("TACU_Magazine_32Rnd_TEC9"),
        "HandGrenade",
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Vet_Pistoleer01);
};

class TACU_Revolutionaries_U_O_Tanoan_Vet_Pistoleer02: TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01 {
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    displayName = "Pistoleer (Uzi)";
    uniformClass = "U_I_L_Uniform_01_tshirt_olive_F";
    weapons[] = {"CUP_hgun_UZI", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_UZI", "Throw", "Put"};
    magazines[] = {
        mag_5("TACU_Magazine_32Rnd_UZI"),
        "HandGrenade",
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_5("TACU_Magazine_32Rnd_UZI"),
        "HandGrenade",
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Vet_Pistoleer02);
};

class TACU_Revolutionaries_U_O_Tanoan_Vet_Head: TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01 {
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    displayName = "Head";
    icon = "iconManOfficer";
    uniformClass = "U_B_ParadeUniform_01_US_decorated_F";
    backpack = "";
    weapons[] = {"CUP_smg_SA61", "Throw", "Put"};
    respawnWeapons[] = {"CUP_smg_SA61", "Throw", "Put"};
    magazines[] = {
        mag_4("CUP_50Rnd_B_765x17_Ball_M"),
        "HandGrenade",
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_4("CUP_50Rnd_B_765x17_Ball_M"),
        "HandGrenade",
        "SmokeShell"
    };
    headgearList[] = {"H_HelmetAggressor_F", 1};
    CBA_facewearList[] = {};
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Vet_Head);
};
