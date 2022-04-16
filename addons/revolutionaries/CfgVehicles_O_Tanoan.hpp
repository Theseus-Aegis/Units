// Units - Revolutionaries
class TACU_Main_U_OPFOR_Soldier_Base;
class TACU_Revolutionaries_U_O_Tanoan_Rifleman01: TACU_Main_U_OPFOR_Soldier_Base {
    dlc = QUOTE(PREFIX);
    author = "Jack";
    displayName = "Rifleman (FAL)";
    faction = "TACU_Revolutionaries_O";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageFRE_F", "Head_Tanoan", "NoGlasses"};
    genericNames = "TanoanMen";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "U_C_MAN_casual_1_F";
    backpack = "B_FieldPack_green_F";
    linkedItems[] = {DEFAULT_ITEMS, "V_LegStrapBag_black_F", "G_Balaclava_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "V_LegStrapBag_black_F", "G_Balaclava_blk"};
    Items[] = {mag_5("ACE_fieldDressing")};
    respawnItems[] = {mag_5("ACE_fieldDressing")};
    weapons[] = {"CUP_arifle_FNFAL", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_FNFAL", "Throw", "Put"};
    magazines[] = {mag_5("tacgt_20Rnd_762x51_FAL_AP_Mag"), "ACE_M84", "SmokeShell", "SmokeShellPurple"};
    respawnMagazines[] = {mag_5("tacgt_20Rnd_762x51_FAL_AP_Mag"), "ACE_M84", "SmokeShell", "SmokeShellPurple"};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_Tanoan";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Tanoan_Rifleman01.jpg);
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
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Tanoan_Rifleman02.jpg);
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
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Tanoan_Rifleman03.jpg);
};

class TACU_Revolutionaries_U_O_Tanoan_Rifleman04: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Rifleman (CZ805 A2)";
    uniformClass = "U_C_Poloshirt_tricolour";
    weapons[] = {"TACU_Revolutionaries_W_CZ805A2", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Revolutionaries_W_CZ805A2", "Throw", "Put"};
    magazines[] = {mag_6("tacgt_30Rnd_556x45_M855A1_G36"), "ACE_M84", "SmokeShellBlue", "SmokeShellPurple"};
    respawnMagazines[] = {mag_6("tacgt_30Rnd_556x45_M855A1_G36"), "ACE_M84", "SmokeShellBlue", "SmokeShellPurple"};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Tanoan_Rifleman04.jpg);
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
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Tanoan_Paramedic.jpg);
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
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Tanoan_Shotgunner.jpg);
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
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Tanoan_Marksman.jpg);
};

class TACU_Revolutionaries_U_O_Tanoan_SMG01: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Submachine Gunner (MP5K)";
    uniformClass = "U_C_MAN_casual_4_F";
    weapons[] = {"TACU_Revolutionaries_W_MP5K", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Revolutionaries_W_MP5K", "Throw", "Put"};
    magazines[] = {mag_6("30Rnd_9x21_Mag_SMG_02"), "ACE_M84", "SmokeShellGreen", "SmokeShellYellow"};
    respawnMagazines[] = {mag_6("30Rnd_9x21_Mag_SMG_02"), "ACE_M84", "SmokeShellGreen", "SmokeShellYellow"};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Tanoan_SMG01.jpg);
};

class TACU_Revolutionaries_U_O_Tanoan_SMG02: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Submachine Gunner (Bizon)";
    uniformClass = "U_C_Poloshirt_burgundy";
    weapons[] = {"CUP_smg_bizon", "Throw", "Put"};
    respawnWeapons[] = {"CUP_smg_bizon", "Throw", "Put"};
    magazines[] = {mag_4("CUP_64Rnd_9x19_Bizon_M"), "ACE_M84", "SmokeShellOrange", "SmokeShellPurple"};
    respawnMagazines[] = {mag_4("CUP_64Rnd_9x19_Bizon_M"), "ACE_M84", "SmokeShellOrange", "SmokeShellPurple"};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Tanoan_SMG02.jpg);
};

class TACU_Revolutionaries_U_O_Tanoan_Grenadier: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Grenadier";
    role = "Grenadier";
    uniformClass = "U_C_Poloshirt_blue";
    linkedItems[] = {DEFAULT_ITEMS, "V_Pocketed_black_F", "G_Balaclava_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "V_Pocketed_black_F", "G_Balaclava_blk"};
    weapons[] = {"CUP_glaunch_M79", "CUP_hgun_Glock17_blk", "Throw", "Put"};
    respawnWeapons[] = {"CUP_glaunch_M79", "CUP_hgun_Glock17_blk", "Throw", "Put"};
    magazines[] = {mag_6("1Rnd_HE_Grenade_shell"), mag_3("CUP_17Rnd_9x19_glock17"), "ACE_M84", "SmokeShell", "SmokeShellPurple"};
    respawnMagazines[] = {mag_6("1Rnd_HE_Grenade_shell"), mag_3("CUP_17Rnd_9x19_glock17"), "ACE_M84", "SmokeShell", "SmokeShellPurple"};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Tanoan_Grenadier.jpg);
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
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Tanoan_Machinegunner.jpg);
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
    magazines[] = {"tacgt_200Rnd_556x45_M855A1_Box_Red", "ACE_M84", "SmokeShellYellow", "SmokeShellRed"};
    respawnMagazines[] = {"tacgt_200Rnd_556x45_M855A1_Box_Red", "ACE_M84", "SmokeShellYellow", "SmokeShellRed"};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Tanoan_Autorifleman.jpg);
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
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Tanoan_FigureHeadUA.jpg);
    headgearList[] = {
        "H_Beret_blk", 1
    };
    CBA_facewearList[] = {
        "", 1
    };
};

class TACU_Revolutionaries_U_O_Tanoan_FigureHead: TACU_Revolutionaries_U_O_Tanoan_FigureHeadUA {
    displayName = "Figure Head";
    weapons[] = {"CUP_hgun_TaurusTracker455_gold", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_TaurusTracker455_gold", "Throw", "Put"};
    magazines[] = {mag_3("CUP_6Rnd_45ACP_M"), "ACE_M84", "SmokeShellGreen", "SmokeShellOrange"};
    respawnMagazines[] = {mag_3("CUP_6Rnd_45ACP_M"), "ACE_M84", "SmokeShellGreen", "SmokeShellOrange"};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Tanoan_FigureHead.jpg);
};

class TACU_Revolutionaries_U_O_Tanoan_Leader: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Leader";
    icon = "iconManLeader";
    uniformClass = "U_I_C_Soldier_Para_4_F";
    linkedItems[] = {DEFAULT_ITEMS, "V_LegStrapBag_black_F", "H_Booniehat_oil", "G_Balaclava_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "V_LegStrapBag_black_F", "H_Booniehat_oil", "G_Balaclava_blk"};
    weapons[] = {"TACU_Revolutionaries_W_CZ805_GL", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Revolutionaries_W_CZ805_GL", "Throw", "Put"};
    magazines[] = {mag_6("tacgt_30Rnd_556x45_M855A1_G36"), mag_6("1Rnd_HE_Grenade_shell"), "ACE_M84", "SmokeShellBlue", "SmokeShellPurple"};
    respawnMagazines[] = {mag_6("tacgt_30Rnd_556x45_M855A1_G36"), mag_6("1Rnd_HE_Grenade_shell"), "ACE_M84", "SmokeShellBlue", "SmokeShellPurple"};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Tanoan_Leader.jpg);
    headgearList[] = {
        "H_Booniehat_oil", 1
    };
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
    magazines[] = {mag_4("CUP_30Rnd_45ACP_MAC10_M"), "ACE_M84", "SmokeShellRed", "SmokeShellOrange"};
    respawnMagazines[] = {mag_4("CUP_30Rnd_45ACP_MAC10_M"), "ACE_M84", "SmokeShellRed", "SmokeShellOrange"};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Tanoan_Rocketeer.jpg);
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
    magazines[] = {mag_6("30Rnd_9x21_Mag"), "ACE_M84", "SmokeShellYellow", "SmokeShellPurple"};
    respawnMagazines[] = {mag_6("30Rnd_9x21_Mag"), "ACE_M84", "SmokeShellYellow", "SmokeShellPurple"};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Tanoan_Saboteur.jpg);
};

class TACU_Revolutionaries_U_O_Tanoan_Pistoleer01: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Pistoleer (Grach)";
    uniformClass = "U_I_C_Soldier_Bandit_4_F";
    linkedItems[] = {DEFAULT_ITEMS, "V_Pocketed_black_F", "G_Balaclava_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "V_Pocketed_black_F", "G_Balaclava_blk"};
    backpack = "";
    weapons[] = {"hgun_Rook40_F", "Throw", "Put"};
    respawnWeapons[] = {"hgun_Rook40_F", "Throw", "Put"};
    magazines[] = {mag_6("16Rnd_9x21_Mag"), "ACE_M84", "SmokeShellGreen", "SmokeShellPurple"};
    respawnMagazines[] = {mag_6("16Rnd_9x21_Mag"), "ACE_M84", "SmokeShellGreen", "SmokeShellPurple"};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Tanoan_Pistoleer01.jpg);
};

class TACU_Revolutionaries_U_O_Tanoan_Pistoleer02: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Pistoleer (FNX)";
    uniformClass = "U_I_C_Soldier_Bandit_2_F";
    backpack = "";
    weapons[] = {"hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_4("11Rnd_45ACP_Mag"), "ACE_M84", "SmokeShellYellow", "SmokeShell"};
    respawnMagazines[] = {mag_4("11Rnd_45ACP_Mag"), "ACE_M84", "SmokeShellYellow", "SmokeShell"};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Tanoan_Pistoleer02.jpg);
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
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Tanoan_Head.jpg);
    headgearList[] = {
        "H_Hat_brown", 1
    };
    CBA_facewearList[] = {
        "", 1
    };
};

//Veterans
class TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01: TACU_Revolutionaries_U_O_Russian_Rifleman01 {
    displayName = "Rifleman (FAMAS)";
    uniformClass = "U_BG_Guerrilla_6_1";
    backpack = "B_FieldPack_green_F";
    linkedItems[] = {DEFAULT_ITEMS, "CUP_V_B_PASGT", "G_Balaclava_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_V_B_PASGT", "G_Balaclava_blk"};
    Items[] = {mag_5("ACE_fieldDressing")};
    respawnItems[] = {mag_5("ACE_fieldDressing")};
    weapons[] = {"CUP_Famas_F1_Wood", "Throw", "Put"};
    respawnWeapons[] = {"CUP_Famas_F1_Wood", "Throw", "Put"};
    magazines[] = {mag_5("tacgt_25Rnd_556x45_M995_Famas"), "HandGrenade", "SmokeShell", "SmokeShellPurple"};
    respawnMagazines[] = {mag_5("tacgt_25Rnd_556x45_M995_Famas"), "HandGrenade", "SmokeShell", "SmokeShellPurple"};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    editorPreview = QPATHTOF(ui\);
    headgearList[] = {
        "CUP_H_SLA_Helmet_BLK_worn", 1
        "CUP_H_SLA_Helmet_OD_worn", 1
        "CUP_H_RUS_SSH68_cover_berezka", 1
        "CUP_H_RUS_SSH68_cover_vsr93", 1
        "CUP_H_RUS_SSH68_cover_vsr98",1
        "CUP_H_RUS_6B27_cover",1
    };
};

class TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman02: TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01 {
    displayName = "Rifleman (MX)";
    uniformClass = "U_I_C_Soldier_Para_1_F";
    weapons[] = {"arifle_MX_ACO_pointer_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_MX_ACO_pointer_F", "Throw", "Put"};
    magazines[] = {mag_5("tacs_30Rnd_65x39_caseless_BlackCamo_mag"), "HandGrenade", "SmokeShell", "SmokeShellBlue"};
    respawnMagazines[] = {mag_5("tacs_30Rnd_65x39_caseless_BlackCamo_mag"), "HandGrenade", "SmokeShell", "SmokeShellBlue"};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    editorPreview = QPATHTOF(ui\);
};

class TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman03: TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01 {
    displayName = "Rifleman (Katiba)";
    uniformClass = "U_I_C_Soldier_Para_5_F";
    weapons[] = {"arifle_Katiba_ARCO_pointer_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_Katiba_ARCO_pointer_F", "Throw", "Put"};
    magazines[] = {mag_5("30Rnd_65x39_caseless_green"), "HandGrenade", "SmokeShell", "SmokeShellYellow"};
    respawnMagazines[] = {mag_5("30Rnd_65x39_caseless_green"), "HandGrenade", "SmokeShell", "SmokeShellYellow"};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    editorPreview = QPATHTOF(ui\);
};

class TACU_Revolutionaries_U_O_Tanoan_Vet_Grenadier: TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01 {
    displayName = "Grenadier";
    uniformClass = "U_C_man_sport_2_F";
    weapons[] = {"CUP_glaunch_M32", "tacgt_Rhino_44", "Throw", "Put"};
    respawnWeapons[] = {"CUP_glaunch_M32", "tacgt_Rhino_44", "Throw", "Put"};
    magazines[] = {mag_5("CUP_6Rnd_HE_M203"), mag_3("tacgt_6Rnd_44"), "HandGrenade", "SmokeShell", "SmokeShellOrange"};
    respawnMagazines[] = {mag_5("CUP_6Rnd_HE_M203"), mag_3("tacgt_6Rnd_44"), "HandGrenade", "SmokeShell", "SmokeShellOrange"};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    editorPreview = QPATHTOF(ui\);
};

class TACU_Revolutionaries_U_O_Tanoan_Vet_Pistoleer01: TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01 {
    displayName = "Pistoleer (TEC9)";
    uniformClass = "U_I_L_Uniform_01_tshirt_sport_F";
    weapons[] = {"CUP_hgun_TEC9_FA", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_TEC9_FA", "Throw", "Put"};
    magazines[] = {mag_5("CUP_32Rnd_9x19_TEC9"), "HandGrenade", "SmokeShell", "SmokeShellGreen"};
    respawnMagazines[] = {mag_5("CUP_32Rnd_9x19_TEC9"), "HandGrenade", "SmokeShell", "SmokeShellGreen"};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    editorPreview = QPATHTOF(ui\);
};

class TACU_Revolutionaries_U_O_Tanoan_Vet_Pistoleer02: TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01 {
    displayName = "Pistoleer (Uzi)";
    uniformClass = "U_I_L_Uniform_01_tshirt_sport_F";
    weapons[] = {"CUP_hgun_UZI", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_UZI", "Throw", "Put"};
    magazines[] = {mag_5("CUP_72Rnd_9x19_UZI_M"), "HandGrenade", "SmokeShell", "SmokeShellRed"};
    respawnMagazines[] = {mag_5("CUP_72Rnd_9x19_UZI_M"), "HandGrenade", "SmokeShell", "SmokeShellRed"};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    editorPreview = QPATHTOF(ui\);
};

class TACU_Revolutionaries_U_O_Tanoan_Vet_Rocketeer: TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01 {
    displayName = "Rocketeer";
    icon = "iconManAT";
    role = "MissileSpecialist";
    uniformClass = "U_I_L_Uniform_01_tshirt_sport_F";
    backpack = "TACU_Revolutionaries_B_Vet_Rocketeer_Black";
    weapons[] = {"SMG_03C_black", "tacs_MRAWS_Black_F", "Throw", "Put"};
    respawnWeapons[] = {"SMG_03C_black", "tacs_MRAWS_Black_F", "Throw", "Put"};
    magazines[] = {mag_5("tacgt_50Rnd_57x28_SS190"), "HandGrenade", "SmokeShell", "SmokeShellYellow"};
    respawnMagazines[] = {mag_5("tacgt_50Rnd_57x28_SS190"), "HandGrenade", "SmokeShell", "SmokeShellYellow"};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_TanoanVet";
    editorPreview = QPATHTOF(ui\);
};

// Vehicles
class C_Hatchback_01_F;
class TACU_Revolutionaries_V_O_Hatchback: C_Hatchback_01_F {
    dlc = QUOTE(PREFIX);
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_O";
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_Cars_Tanoa";
    side = 0;
    displayName = "Hatchback";
    crew = "TACU_Revolutionaries_U_O_Tanoan_Pistoleer01";
    typicalCargo[] = {"TACU_Revolutionaries_U_O_Tanoan_Pistoleer01"};
    editorPreview = QPATHTOF(ui\Revolutionaries_V_O_Hatchback.jpg);
};

class C_Truck_02_transport_F;
class TACU_Revolutionaries_V_O_KamAZ: C_Truck_02_transport_F {
    dlc = QUOTE(PREFIX);
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_O";
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_Cars_Tanoa";
    side = 0;
    displayName = "KamAZ Transport";
    crew = "TACU_Revolutionaries_U_O_Tanoan_Pistoleer02";
    typicalCargo[] = {"TACU_Revolutionaries_U_O_Tanoan_Pistoleer02"};
    editorPreview = QPATHTOF(ui\Revolutionaries_V_O_KamAZ.jpg);
};

class C_Offroad_01_covered_F;
class TACU_Revolutionaries_V_O_Offroad: C_Offroad_01_covered_F {
    dlc = QUOTE(PREFIX);
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_O";
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_Cars_Tanoa";
    side = 0;
    displayName = "Offroad";
    crew = "TACU_Revolutionaries_U_O_Tanoan_Pistoleer01";
    typicalCargo[] = {"TACU_Revolutionaries_U_O_Tanoan_Pistoleer01"};
    editorPreview = QPATHTOF(ui\Revolutionaries_V_O_Offroad.jpg);
};

class C_Van_02_vehicle_F;
class TACU_Revolutionaries_V_O_Van: C_Van_02_vehicle_F {
    dlc = QUOTE(PREFIX);
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_O";
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_Cars_Tanoa";
    side = 0;
    displayName = "Van";
    crew = "TACU_Revolutionaries_U_O_Tanoan_Pistoleer02";
    typicalCargo[] = {"TACU_Revolutionaries_U_O_Tanoan_Pistoleer01"};
    editorPreview = QPATHTOF(ui\Revolutionaries_V_O_Van.jpg);
};

class I_C_Offroad_02_LMG_F;
class TACU_Revolutionaries_V_O_Jeep_LMG: I_C_Offroad_02_LMG_F {
    dlc = QUOTE(PREFIX);
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_O";
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_Cars_Tanoa";
    side = 0;
    displayName = "Jeep (LMG)";
    crew = "TACU_Revolutionaries_U_O_Tanoan_Pistoleer02";
    typicalCargo[] = {"TACU_Revolutionaries_U_O_Tanoan_Pistoleer02"};
    editorPreview = QPATHTOF(ui\Revolutionaries_V_O_Jeep_LMG.jpg);
};
