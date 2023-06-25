// Units - Revolutionaries
class TACU_Revolutionaries_U_O_Tanoan_Rifleman01: TACU_Revolutionaries_U_I_Tanoan_Rifleman01 {
    faction = "TACU_Revolutionaries_O";
    side = 0;
    scope = 2;
    scopeCurator = 2;
    linkedItems[] = {DEFAULT_ITEMS, "V_LegStrapBag_black_F", "G_Balaclava_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "V_LegStrapBag_black_F", "G_Balaclava_blk"};
    magazines[] = {mag_5("tacgt_AI_20Rnd_762x51_FAL"), "ACE_M84", mag_2("SmokeShell")};
    respawnMagazines[] = {mag_5("tacgt_AI_20Rnd_762x51_FAL"), "ACE_M84", mag_2("SmokeShell")};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_Tanoan";
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Rifleman01);
    headgearList[] = {
        "", 1
    };
    CBA_facewearList[] = {
        "G_Balaclava_blk", 1
    };
};

class TACU_Revolutionaries_U_O_Tanoan_Rifleman02: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Rifleman (MK14)";
    uniformClass = "U_C_MAN_casual_2_F";
    weapons[] = {"srifle_DMR_06_hunter_F", "Throw", "Put"};
    respawnWeapons[] = {"srifle_DMR_06_hunter_F", "Throw", "Put"};
    magazines[] = {mag_5("10Rnd_Mk14_762x51_Mag"), "ACE_M84", "SmokeShellRed", "SmokeShellPurple"};
    respawnMagazines[] = {mag_5("10Rnd_Mk14_762x51_Mag"), "ACE_M84", "SmokeShellRed", "SmokeShellPurple"};
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Rifleman02);
};

class TACU_Revolutionaries_U_O_Tanoan_Rifleman03: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Rifleman (Lee Enfield)";
    uniformClass = "U_C_MAN_casual_6_F";
    linkedItems[] = {DEFAULT_ITEMS, "V_Pocketed_black_F", "G_Balaclava_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "V_Pocketed_black_F", "G_Balaclava_blk"};
    weapons[] = {"CUP_srifle_LeeEnfield", "Throw", "Put"};
    respawnWeapons[] = {"CUP_srifle_LeeEnfield", "Throw", "Put"};
    magazines[] = {mag_5("CUP_10x_303_M"), "ACE_M84", "SmokeShellGreen", "SmokeShellYellow"};
    respawnMagazines[] = {mag_5("CUP_10x_303_M"), "ACE_M84", "SmokeShellGreen", "SmokeShellYellow"};
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Rifleman03);
};

class TACU_Revolutionaries_U_O_Tanoan_Rifleman04: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Rifleman (CZ805 A2)";
    uniformClass = "U_C_Poloshirt_tricolour";
    weapons[] = {"TACU_Revolutionaries_W_CZ805A2", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Revolutionaries_W_CZ805A2", "Throw", "Put"};
    magazines[] = {mag_6("tacgt_AI_30Rnd_556x45_G36"), "ACE_M84", "SmokeShellBlue", "SmokeShellPurple"};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_556x45_G36"), "ACE_M84", "SmokeShellBlue", "SmokeShellPurple"};
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Rifleman04);
};

class TACU_Revolutionaries_U_O_Tanoan_Paramedic: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Paramedic";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    uniformClass = "U_C_Poloshirt_burgundy";
    weapons[] = {"sgun_HunterShotgun_01_sawedoff_F", "Throw", "Put"};
    respawnWeapons[] = {"sgun_HunterShotgun_01_sawedoff_F", "Throw", "Put"};
    magazines[] = {mag_12("tacgt_2Rnd_P_000"), "ACE_M84", "SmokeShell", "SmokeShellOrange"};
    respawnMagazines[] = {mag_12("tacgt_2Rnd_P_000"), "ACE_M84", "SmokeShell", "SmokeShellOrange"};
    backpack = "TACU_Revolutionaries_B_Paramedic_Green";
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Paramedic);
};

class TACU_Revolutionaries_U_O_Tanoan_Shotgunner: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Shotgunner";
    uniformClass = "U_C_MAN_casual_3_F";
    linkedItems[] = {DEFAULT_ITEMS, "V_Pocketed_black_F", "G_Balaclava_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "V_Pocketed_black_F", "G_Balaclava_blk"};
    weapons[] = {"sgun_HunterShotgun_01_F", "Throw", "Put"};
    respawnWeapons[] = {"sgun_HunterShotgun_01_F", "Throw", "Put"};
    magazines[] = {mag_12("tacgt_2Rnd_P_000"), "ACE_M84", "SmokeShell", "SmokeShellGreen"};
    respawnMagazines[] = {mag_12("tacgt_2Rnd_P_000"), "ACE_M84", "SmokeShell", "SmokeShellGreen"};
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Shotgunner);
};

class TACU_Revolutionaries_U_O_Tanoan_Marksman: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Marksman";
    role = "Marksman";
    uniformClass = "U_C_MAN_casual_5_F";
    linkedItems[] = {DEFAULT_ITEMS, "V_Pocketed_black_F", "G_Balaclava_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "V_Pocketed_black_F", "G_Balaclava_blk"};
    weapons[] = {"CUP_srifle_CZ550", "Throw", "Put"};
    respawnWeapons[] = {"CUP_srifle_CZ550", "Throw", "Put"};
    magazines[] = {mag_4("CUP_5x_22_LR_17_HMR_M"), "ACE_M84", "SmokeShellRed", "SmokeShellBlue"};
    respawnMagazines[] = {mag_4("CUP_5x_22_LR_17_HMR_M"), "ACE_M84", "SmokeShellRed", "SmokeShellBlue"};
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Marksman);
};

class TACU_Revolutionaries_U_O_Tanoan_SMG01: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Submachine Gunner (MP5K)";
    uniformClass = "U_C_MAN_casual_4_F";
    weapons[] = {"TACU_Revolutionaries_W_MP5K", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Revolutionaries_W_MP5K", "Throw", "Put"};
    magazines[] = {mag_6("tacgt_AI_30Rnd_9x19"), "ACE_M84", "SmokeShellGreen", "SmokeShellYellow"};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_9x19"), "ACE_M84", "SmokeShellGreen", "SmokeShellYellow"};
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_SMG01);
};

class TACU_Revolutionaries_U_O_Tanoan_SMG02: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Submachine Gunner (Bizon)";
    uniformClass = "U_C_Poloshirt_burgundy";
    weapons[] = {"CUP_smg_bizon", "Throw", "Put"};
    respawnWeapons[] = {"CUP_smg_bizon", "Throw", "Put"};
    magazines[] = {mag_4("tacgt_AI_64Rnd_9x19_Bizon"), "ACE_M84", "SmokeShellOrange", "SmokeShellPurple"};
    respawnMagazines[] = {mag_4("tacgt_AI_64Rnd_9x19_Bizon"), "ACE_M84", "SmokeShellOrange", "SmokeShellPurple"};
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_SMG02);
};

class TACU_Revolutionaries_U_O_Tanoan_Grenadier: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Grenadier";
    role = "Grenadier";
    uniformClass = "U_C_Poloshirt_blue";
    linkedItems[] = {DEFAULT_ITEMS, "V_Pocketed_black_F", "G_Balaclava_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "V_Pocketed_black_F", "G_Balaclava_blk"};
    weapons[] = {"CUP_glaunch_M79", "CUP_hgun_Glock17_blk", "Throw", "Put"};
    respawnWeapons[] = {"CUP_glaunch_M79", "CUP_hgun_Glock17_blk", "Throw", "Put"};
    magazines[] = {mag_6("1Rnd_HE_Grenade_shell"), mag_3("tacgt_AI_17Rnd_9x19_Glock"), "ACE_M84", "SmokeShell", "SmokeShellPurple"};
    respawnMagazines[] = {mag_6("1Rnd_HE_Grenade_shell"), mag_3("tacgt_AI_17Rnd_9x19_Glock"), "ACE_M84", "SmokeShell", "SmokeShellPurple"};
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Grenadier);
};

class TACU_Revolutionaries_U_O_Tanoan_Machinegunner: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Machinegunner";
    icon = "iconManMG";
    role = "MachineGunner";
    uniformClass = "U_C_Poloshirt_redwhite";
    linkedItems[] = {DEFAULT_ITEMS, "V_Pocketed_black_F", "G_Balaclava_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "V_Pocketed_black_F", "G_Balaclava_blk"};
    backpack = "TACU_Revolutionaries_B_MMG_UK59_Green";
    weapons[] = {"CUP_lmg_UK59", "Throw", "Put"};
    respawnWeapons[] = {"CUP_lmg_UK59", "Throw", "Put"};
    magazines[] = {mag_2("CUP_50Rnd_UK59_762x54R_Tracer"), "ACE_M84", "SmokeShellOrange", "SmokeShellBlue"};
    respawnMagazines[] = {mag_2("CUP_50Rnd_UK59_762x54R_Tracer"), "ACE_M84", "SmokeShellOrange", "SmokeShellBlue"};
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Machinegunner);
};

class TACU_Revolutionaries_U_O_Tanoan_Autorifleman: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Autorifleman";
    icon = "iconManMG";
    role = "MachineGunner";
    uniformClass = "U_C_Poloshirt_salmon";
    linkedItems[] = {DEFAULT_ITEMS, "V_Pocketed_black_F", "G_Balaclava_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "V_Pocketed_black_F", "G_Balaclava_blk"};
    backpack = "TACU_Revolutionaries_B_LMG_Minimi_Green";
    weapons[] = {"TACU_Revolutionaries_W_FNMinimiSPW", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Revolutionaries_W_FNMinimiSPW", "Throw", "Put"};
    magazines[] = {"tacgt_AI_200Rnd_556x45_Box", "ACE_M84", "SmokeShellYellow", "SmokeShellRed"};
    respawnMagazines[] = {"tacgt_AI_200Rnd_556x45_Box", "ACE_M84", "SmokeShellYellow", "SmokeShellRed"};
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Autorifleman);
};

class TACU_Revolutionaries_U_O_Tanoan_FigureHeadUA: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Figure Head (Unarmed)";
    uniformClass = "U_I_C_Soldier_Para_2_F";
    linkedItems[] = {DEFAULT_ITEMS, "H_Beret_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "", "H_Beret_blk"};
    backpack = "";
    weapons[] = {"Throw", "Put"};
    respawnWeapons[] = {"Throw", "Put"};
    magazines[] = {};
    respawnMagazines[] = {};
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_FigureHeadUA);
    headgearList[] = {
        "H_Beret_blk", 1
    };
    CBA_facewearList[] = {
        "", 1
    };
};

class TACU_Revolutionaries_U_O_Tanoan_FigureHead: TACU_Revolutionaries_U_O_Tanoan_FigureHeadUA {
    displayName = "Figure Head";
    icon = "iconManOfficer";
    weapons[] = {"CUP_hgun_TaurusTracker455_gold", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_TaurusTracker455_gold", "Throw", "Put"};
    magazines[] = {mag_3("CUP_6Rnd_45ACP_M"), "ACE_M84", "SmokeShellGreen", "SmokeShellOrange"};
    respawnMagazines[] = {mag_3("CUP_6Rnd_45ACP_M"), "ACE_M84", "SmokeShellGreen", "SmokeShellOrange"};
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_FigureHead);
};

class TACU_Revolutionaries_U_O_Tanoan_Leader: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Leader";
    icon = "iconManLeader";
    uniformClass = "U_I_C_Soldier_Para_4_F";
    linkedItems[] = {DEFAULT_ITEMS, "V_LegStrapBag_black_F", "H_Booniehat_oil", "G_Balaclava_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "V_LegStrapBag_black_F", "H_Booniehat_oil", "G_Balaclava_blk"};
    weapons[] = {"TACU_Revolutionaries_W_CZ805_GL", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Revolutionaries_W_CZ805_GL", "Throw", "Put"};
    magazines[] = {mag_6("tacgt_AI_30Rnd_556x45_G36"), mag_6("1Rnd_HE_Grenade_shell"), "ACE_M84", "SmokeShellBlue", "SmokeShellPurple"};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_556x45_G36"), mag_6("1Rnd_HE_Grenade_shell"), "ACE_M84", "SmokeShellBlue", "SmokeShellPurple"};
    headgearList[] = {
        "H_Booniehat_oil", 1
    };
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Leader);
};

class TACU_Revolutionaries_U_O_Tanoan_Rocketeer: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Rocketeer";
    icon = "iconManAT";
    role = "MissileSpecialist";
    uniformClass = "U_I_C_Soldier_Bandit_1_F";
    linkedItems[] = {DEFAULT_ITEMS, "V_Pocketed_black_F", "G_Balaclava_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "V_Pocketed_black_F", "G_Balaclava_blk"};
    backpack = "TACU_Revolutionaries_B_Rocketeer_Green";
    weapons[] = {"launch_RPG32_green_F","CUP_hgun_Mac10", "Throw", "Put"};
    respawnWeapons[] = {"launch_RPG32_green_F","CUP_hgun_Mac10", "Throw", "Put"};
    magazines[] = {mag_4("tacgt_AI_30Rnd_45ACP_MAC10"), "ACE_M84", "SmokeShellRed", "SmokeShellOrange"};
    respawnMagazines[] = {mag_4("tacgt_AI_30Rnd_45ACP_MAC10"), "ACE_M84", "SmokeShellRed", "SmokeShellOrange"};
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Rocketeer);
};

class TACU_Revolutionaries_U_O_Tanoan_Saboteur: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Saboteur";
    icon = "iconManExplosive";
    role = "Sapper";
    engineer = 1;
    uniformClass = "U_I_C_Soldier_Bandit_5_F";
    Items[] = {mag_5("ACE_fieldDressing"), "ACE_Clacker"};
    respawnItems[] = {mag_5("ACE_fieldDressing"), "ACE_Clacker"};
    backpack = "TACU_Revolutionaries_B_Saboteur_Green";
    weapons[] = {"hgun_PDW2000_F", "Throw", "Put"};
    respawnWeapons[] = {"hgun_PDW2000_F", "Throw", "Put"};
    magazines[] = {mag_6("tacgt_AI_30Rnd_9x19"), "ACE_M84", "SmokeShellYellow", "SmokeShellPurple"};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_9x19"), "ACE_M84", "SmokeShellYellow", "SmokeShellPurple"};
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Saboteur);
};

class TACU_Revolutionaries_U_O_Tanoan_Pistoleer01: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Pistoleer (Grach)";
    uniformClass = "U_I_C_Soldier_Bandit_4_F";
    linkedItems[] = {DEFAULT_ITEMS, "V_Pocketed_black_F", "G_Balaclava_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "V_Pocketed_black_F", "G_Balaclava_blk"};
    backpack = "";
    weapons[] = {"hgun_Rook40_F", "Throw", "Put"};
    respawnWeapons[] = {"hgun_Rook40_F", "Throw", "Put"};
    magazines[] = {mag_6("tacgt_AI_17Rnd_9x19_Walther"), "ACE_M84", "SmokeShellGreen", "SmokeShellPurple"};
    respawnMagazines[] = {mag_6("tacgt_AI_17Rnd_9x19_Walther"), "ACE_M84", "SmokeShellGreen", "SmokeShellPurple"};
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Pistoleer01);
};

class TACU_Revolutionaries_U_O_Tanoan_Pistoleer02: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Pistoleer (FNX)";
    uniformClass = "U_I_C_Soldier_Bandit_2_F";
    backpack = "";
    weapons[] = {"hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_4("tacgt_AI_11Rnd_45ACP_FNX"), "ACE_M84", "SmokeShellYellow", "SmokeShell"};
    respawnMagazines[] = {mag_4("tacgt_AI_11Rnd_45ACP_FNX"), "ACE_M84", "SmokeShellYellow", "SmokeShell"};
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Pistoleer02);
};

class TACU_Revolutionaries_U_O_Tanoan_Head: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Head";
    icon = "iconManOfficer";
    uniformClass = "U_Marshal";
    linkedItems[] = {DEFAULT_ITEMS, "V_LegStrapBag_black_F", "H_Hat_brown"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "V_LegStrapBag_black_F", "H_Hat_brown"};
    backpack = "";
    weapons[] = {"cup_hgun_Deagle", "Throw", "Put"};
    respawnWeapons[] = {"cup_hgun_Deagle", "Throw", "Put"};
    magazines[] = {mag_4("CUP_7Rnd_50AE_Deagle"), "ACE_M84", "SmokeShell", "SmokeShellBlue"};
    respawnMagazines[] = {mag_4("CUP_7Rnd_50AE_Deagle"), "ACE_M84", "SmokeShell", "SmokeShellBlue"};
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Head);
    headgearList[] = {
        "H_Hat_brown", 1
    };
    CBA_facewearList[] = {
        "", 1
    };
};

// Veterans
class TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Rifleman (FAMAS)";
    uniformClass = "U_BG_Guerrilla_6_1";
    backpack = "B_FieldPack_green_F";
    linkedItems[] = {DEFAULT_ITEMS, "V_TacVest_camo", "G_Balaclava_blk","CUP_NVG_1PN138_Hide"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "V_TacVest_camo", "G_Balaclava_blk","CUP_NVG_1PN138_Hide"};
    Items[] = {mag_5("ACE_fieldDressing")};
    respawnItems[] = {mag_5("ACE_fieldDressing")};
    weapons[] = {"CUP_Famas_F1_Wood", "Throw", "Put"};
    respawnWeapons[] = {"CUP_Famas_F1_Wood", "Throw", "Put"};
    magazines[] = {mag_5("tacgt_AI_25Rnd_556x45_FAMAS"), "HandGrenade", mag_2("SmokeShell")};
    respawnMagazines[] = {mag_5("tacgt_AI_25Rnd_556x45_FAMAS"), "HandGrenade", mag_2("SmokeShell")};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    headgearList[] = {
        "H_HelmetB_plain_wdl", 1
    };
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01);
};

class TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman02: TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01 {
    displayName = "Rifleman (MX)";
    uniformClass = "U_I_C_Soldier_Para_1_F";
    weapons[] = {"arifle_MX_ACO_pointer_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_MX_ACO_pointer_F", "Throw", "Put"};
    magazines[] = {mag_5("tacgt_AI_30Rnd_65x39_MX_Black"), "HandGrenade", mag_2("SmokeShell")};
    respawnMagazines[] = {mag_5("tacgt_AI_30Rnd_65x39_MX_Black"), "HandGrenade", mag_2("SmokeShell")};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman02);
};

class TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman03: TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01 {
    displayName = "Rifleman (Katiba)";
    uniformClass = "U_I_C_Soldier_Para_5_F";
    weapons[] = {"arifle_Katiba_ARCO_pointer_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_Katiba_ARCO_pointer_F", "Throw", "Put"};
    magazines[] = {mag_5("tacgt_AI_30Rnd_65x39_Katiba"), "HandGrenade", mag_2("SmokeShell")};
    respawnMagazines[] = {mag_5("tacgt_AI_30Rnd_65x39_Katiba"), "HandGrenade", mag_2("SmokeShell")};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman03);
};

class TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman04: TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01 {
    displayName = "Rifleman (Type 115)";
    uniformClass = "U_C_E_LooterJacket_01_F";
    weapons[] = {"arifle_ARX_ghex_ACO_Pointer_Snds_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_ARX_ghex_ACO_Pointer_Snds_F", "Throw", "Put"};
    magazines[] = {mag_5("tacgt_AI_30Rnd_65x39_Katiba"), mag_5("10Rnd_50BW_Mag_F"), "HandGrenade", mag_2("SmokeShell")};
    respawnMagazines[] = {mag_5("tacgt_AI_30Rnd_65x39_Katiba"), mag_5("10Rnd_50BW_Mag_F"), "HandGrenade", mag_2("SmokeShell")};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman04);
};

class TACU_Revolutionaries_U_O_Tanoan_Vet_Medic: TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01 {
    displayName = "Medic";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    uniformClass = "U_I_C_Soldier_Para_5_F";
    backpack = "TACU_Revolutionaries_B_Paramedic_Green";
    weapons[] = {"CUP_arifle_X95_Grippod", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_X95_Grippod", "Throw", "Put"};
    magazines[] = {mag_5("tacgt_AI_30Rnd_556x45_STANAG"), "HandGrenade", mag_2("SmokeShell")};
    respawnMagazines[] = {mag_5("tacgt_AI_30Rnd_556x45_STANAG"), "HandGrenade", mag_2("SmokeShell")};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Vet_Medic);

};

class TACU_Revolutionaries_U_O_Tanoan_Vet_Shotgunner: TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01 {
    displayName = "Shotgunner";
    uniformClass = "U_O_R_Gorka_01_brown_F";
    weapons[] = {"CUP_sgun_SPAS12", "Throw", "Put"};
    respawnWeapons[] = {"CUP_sgun_SPAS12", "Throw", "Put"};
    magazines[] = {mag_5("tacgt_8Rnd_P_000"), mag_5("tacgt_8Rnd_S_AP20"), "HandGrenade", mag_2("SmokeShell")};
    respawnMagazines[] = {mag_5("tacgt_8Rnd_P_000"), mag_5("tacgt_8Rnd_S_AP20"), "HandGrenade", mag_2("SmokeShell")};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Vet_Shotgunner);
};

class TACU_Revolutionaries_U_O_Tanoan_Vet_Marksman: TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01 {
    displayName = "Marksman";
    uniformClass = "U_I_FullGhillie_sard";
    weapons[] = {"TACU_Revolutionaries_W_M24", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Revolutionaries_W_M24", "Throw", "Put"};
    magazines[] = {mag_8("CUP_5Rnd_762x51_M24"), "HandGrenade", mag_2("SmokeShell")};
    respawnMagazines[] = {mag_8("CUP_5Rnd_762x51_M24"), "HandGrenade", mag_2("SmokeShell")};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Vet_Marksman);
};

class TACU_Revolutionaries_U_O_Tanoan_Vet_SMG01: TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01 {
    displayName = "SMG (MP5SD)";
    uniformClass = "U_C_WorkerCoveralls";
    weapons[] = {"CUP_smg_MP5SD6", "Throw", "Put"};
    respawnWeapons[] = {"CUP_smg_MP5SD6", "Throw", "Put"};
    magazines[] = {mag_8("tacgt_AI_30Rnd_9x19_MP5"), "HandGrenade", mag_2("SmokeShell")};
    respawnMagazines[] = {mag_8("tacgt_AI_30Rnd_9x19_MP5"), "HandGrenade", mag_2("SmokeShell")};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Vet_SMG01);
};

class TACU_Revolutionaries_U_O_Tanoan_Vet_SMG02: TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01 {
    displayName = "SMG (PS90)";
    uniformClass = "U_I_L_Uniform_01_tshirt_sport_F";
    weapons[] = {"CUP_smg_PS90_olive", "Throw", "Put"};
    respawnWeapons[] = {"CUP_smg_PS90_olive", "Throw", "Put"};
    magazines[] = {mag_8("tacgt_AI_50Rnd_57x28"), "HandGrenade", mag_2("SmokeShell")};
    respawnMagazines[] = {mag_8("tacgt_AI_50Rnd_57x28"), "HandGrenade", mag_2("SmokeShell")};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Vet_SMG02);
};

class TACU_Revolutionaries_U_O_Tanoan_Vet_Grenadier: TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01 {
    displayName = "Grenadier";
    uniformClass = "U_C_man_sport_2_F";
    weapons[] = {"CUP_glaunch_M32", "tacgt_Rhino_44", "Throw", "Put"};
    respawnWeapons[] = {"CUP_glaunch_M32", "tacgt_Rhino_44", "Throw", "Put"};
    magazines[] = {mag_5("CUP_6Rnd_HE_M203"), mag_3("tacgt_6Rnd_44"), "HandGrenade", mag_2("SmokeShell")};
    respawnMagazines[] = {mag_5("CUP_6Rnd_HE_M203"), mag_3("tacgt_6Rnd_44"), "HandGrenade", mag_2("SmokeShell")};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Vet_Grenadier);
};

class TACU_Revolutionaries_U_O_Tanoan_Vet_Machinegunner: TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01 {
    displayName = "Machinegunner";
    uniformClass = "U_O_R_Gorka_01_black_F";
    backpack = "TACU_Revolutionaries_B_Vet_M60_Green";
    weapons[] = {"CUP_lmg_M60E4_norail_jungle", "Throw", "Put"};
    respawnWeapons[] = {"CUP_lmg_M60E4_norail_jungle", "Throw", "Put"};
    magazines[] = {mag_5("tacgt_AI_100Rnd_762x51_Belt"), "HandGrenade", mag_2("SmokeShell")};
    respawnMagazines[] = {mag_5("tacgt_AI_100Rnd_762x51_Belt"), "HandGrenade", mag_2("SmokeShell")};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Vet_Machinegunner);
};

class TACU_Revolutionaries_U_O_Tanoan_Vet_Autorifleman: TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01 {
    displayName = "Autorifleman";
    uniformClass = "U_O_R_Gorka_01_black_F";
    backpack = "TACU_Revolutionaries_B_Vet_MXLSW_Green";
    weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "Put"};
    magazines[] = {mag_5("tacgt_AI_100Rnd_65x39_MX_Black"), "HandGrenade", mag_2("SmokeShell")};
    respawnMagazines[] = {mag_5("tacgt_AI_100Rnd_65x39_MX_Black"), "HandGrenade", mag_2("SmokeShell")};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Vet_Autorifleman);
};

class TACU_Revolutionaries_U_O_Tanoan_Vet_Figure_Head: TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01 {
    displayName = "Figure Head";
    icon = "iconManOfficer";
    uniformClass = "U_C_FormalSuit_01_black_F";
    backpack = "";
    weapons[] = {"CUP_arifle_M4_MOE_BW", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_M4_MOE_BW", "Throw", "Put"};
    magazines[] = {mag_8("CUP_10Rnd_50BW_Mag_M4_M"), "HandGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_8("CUP_10Rnd_50BW_Mag_M4_M"), "HandGrenade", "SmokeShell"};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Vet_Figure_Head);
    headgearList[] = {
        "H_HelmetSpecO_blk", 1
    };
    CBA_facewearList[] = {
        "", 1
    };
};

class TACU_Revolutionaries_U_O_Tanoan_Vet_Leader: TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01 {
    displayName = "Leader";
    icon = "iconManOfficer";
    uniformClass = "U_I_L_Uniform_01_tshirt_olive_F";
    backpack = "";
    weapons[] = {"CUP_arifle_Mk17_STD_EGLM_woodland", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_Mk17_STD_EGLM_woodland", "Throw", "Put"};
    magazines[] = {mag_5("tacgt_AI_20Rnd_762x51_SCARH"), mag_5("1Rnd_HE_Grenade_shell"), "HandGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_5("tacgt_AI_20Rnd_762x51_SCARH"), mag_5("1Rnd_HE_Grenade_shell"), "HandGrenade", "SmokeShell"};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    headgearList[] = {
        "CUP_H_RUS_Altyn_Shield_Down_khaki", 1
    };
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Vet_Leader);
};

class TACU_Revolutionaries_U_O_Tanoan_Vet_Rocketeer: TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01 {
    displayName = "Rocketeer";
    icon = "iconManAT";
    role = "MissileSpecialist";
    uniformClass = "U_I_L_Uniform_01_tshirt_sport_F";
    backpack = "TACU_Revolutionaries_B_Vet_Rocketeer_Green";
    weapons[] = {"SMG_03C_black", "tacs_MRAWS_Black_F", "Throw", "Put"};
    respawnWeapons[] = {"SMG_03C_black", "tacs_MRAWS_Black_F", "Throw", "Put"};
    magazines[] = {mag_5("tacgt_AI_50Rnd_57x28"), "HandGrenade", mag_2("SmokeShell")};
    respawnMagazines[] = {mag_5("tacgt_AI_50Rnd_57x28"), "HandGrenade", mag_2("SmokeShell")};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Vet_Rocketeer);
};

class TACU_Revolutionaries_U_O_Tanoan_Vet_Pistoleer01: TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01 {
    displayName = "Pistoleer (TEC9)";
    uniformClass = "U_I_L_Uniform_01_tshirt_sport_F";
    weapons[] = {"CUP_hgun_TEC9_FA", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_TEC9_FA", "Throw", "Put"};
    magazines[] = {mag_5("tacgt_AI_32Rnd_9x19_TEC9"), "HandGrenade", mag_2("SmokeShell")};
    respawnMagazines[] = {mag_5("tacgt_AI_32Rnd_9x19_TEC9"), "HandGrenade", mag_2("SmokeShell")};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Vet_Pistoleer01);
};

class TACU_Revolutionaries_U_O_Tanoan_Vet_Pistoleer02: TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01 {
    displayName = "Pistoleer (Uzi)";
    uniformClass = "U_I_L_Uniform_01_tshirt_olive_F";
    weapons[] = {"CUP_hgun_UZI", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_UZI", "Throw", "Put"};
    magazines[] = {mag_5("tacgt_AI_32Rnd_9x19_UZI"), "HandGrenade", mag_2("SmokeShell")};
    respawnMagazines[] = {mag_5("tacgt_AI_32Rnd_9x19_UZI"), "HandGrenade", mag_2("SmokeShell")};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Vet_Pistoleer02);
};

class TACU_Revolutionaries_U_O_Tanoan_Vet_Head: TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01 {
    displayName = "Head";
    icon = "iconManOfficer";
    uniformClass = "U_B_ParadeUniform_01_US_decorated_F";
    backpack = "";
    weapons[] = {"CUP_smg_SA61", "Throw", "Put"};
    respawnWeapons[] = {"CUP_smg_SA61", "Throw", "Put"};
    magazines[] = {mag_4("CUP_50Rnd_B_765x17_Ball_M"), "HandGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_4("CUP_50Rnd_B_765x17_Ball_M"), "HandGrenade", "SmokeShell"};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    EDITORPREVIEW(TACU_Revolutionaries_U_O_Tanoan_Vet_Head);
    headgearList[] = {
        "H_HelmetAggressor_F", 1
    };
    CBA_facewearList[] = {
        "", 1
    };
};
