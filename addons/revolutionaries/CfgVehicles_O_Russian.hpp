// Units - Revolutionaries
class TACU_Main_U_OPFOR_Soldier_Base;
class TACU_Revolutionaries_U_O_Russian_Rifleman01: TACU_Main_U_OPFOR_Soldier_Base {
    dlc = QUOTE(PREFIX);
    author = "Jack";
    displayName = "Rifleman (FAL)";
    faction = "TACU_Revolutionaries_O";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"CUP_D_Language_RU", "Head_Euro", "NoGlasses"};
    genericNames = "CUP_Names_RussianMen";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "CUP_U_C_Citizen_01";
    backpack = "B_FieldPack_blk";
    linkedItems[] = {DEFAULT_ITEMS, "V_LegStrapBag_black_F", "G_Balaclava_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "V_LegStrapBag_black_F", "G_Balaclava_blk"};
    Items[] = {mag_5("ACE_fieldDressing")};
    respawnItems[] = {mag_5("ACE_fieldDressing")};
    weapons[] = {"CUP_arifle_FNFAL", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_FNFAL", "Throw", "Put"};
    magazines[] = {mag_5("tacgt_20Rnd_762x51_FAL_AP_Mag"), "ACE_M84", "SmokeShell", "SmokeShellPurple"};
    respawnMagazines[] = {mag_5("tacgt_20Rnd_762x51_FAL_AP_Mag"), "ACE_M84", "SmokeShell", "SmokeShellPurple"};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_Russian";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Rifleman01.jpg);
    headgearList[] = {
        "", 1
    };
    CBA_facewearList[] = {
        "G_Balaclava_blk", 1
    };
};

class TACU_Revolutionaries_U_O_Russian_Rifleman02: TACU_Revolutionaries_U_O_Russian_Rifleman01 {
    displayName = "Rifleman (MK14)";
    uniformClass = "CUP_U_C_Citizen_02";
    weapons[] = {"srifle_DMR_06_hunter_F", "Throw", "Put"};
    respawnWeapons[] = {"srifle_DMR_06_hunter_F", "Throw", "Put"};
    magazines[] = {mag_5("10Rnd_Mk14_762x51_Mag"), "ACE_M84", "SmokeShellRed", "SmokeShellPurple"};
    respawnMagazines[] = {mag_5("10Rnd_Mk14_762x51_Mag"), "ACE_M84", "SmokeShellRed", "SmokeShellPurple"};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Rifleman02.jpg);
};

class TACU_Revolutionaries_U_O_Russian_Rifleman03: TACU_Revolutionaries_U_O_Russian_Rifleman01 {
    displayName = "Rifleman (Lee Enfield)";
    uniformClass = "CUP_U_C_Woodlander_03";
    weapons[] = {"CUP_srifle_LeeEnfield", "Throw", "Put"};
    respawnWeapons[] = {"CUP_srifle_LeeEnfield", "Throw", "Put"};
    magazines[] = {mag_5("CUP_10x_303_M"), "ACE_M84", "SmokeShellGreen", "SmokeShellYellow"};
    respawnMagazines[] = {mag_5("CUP_10x_303_M"), "ACE_M84", "SmokeShellGreen", "SmokeShellYellow"};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Rifleman03.jpg);
};

class TACU_Revolutionaries_U_O_Russian_Rifleman04: TACU_Revolutionaries_U_O_Russian_Rifleman01 {
    displayName = "Rifleman (CZ805 A2)";
    uniformClass = "U_O_R_Gorka_01_black_F";
    linkedItems[] = {DEFAULT_ITEMS, "CUP_V_C_Police_Holster", "G_Balaclava_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_V_C_Police_Holster", "G_Balaclava_blk"};
    weapons[] = {"TACU_Revolutionaries_W_CZ805A2", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Revolutionaries_W_CZ805A2", "Throw", "Put"};
    magazines[] = {mag_6("tacgt_30Rnd_556x45_M855A1_G36"), "ACE_M84", "SmokeShellBlue", "SmokeShellPurple"};
    respawnMagazines[] = {mag_6("tacgt_30Rnd_556x45_M855A1_G36"), "ACE_M84", "SmokeShellBlue", "SmokeShellPurple"};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Rifleman04.jpg);
};

class TACU_Revolutionaries_U_O_Russian_Paramedic: TACU_Revolutionaries_U_O_Russian_Rifleman01 {
    displayName = "Paramedic";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    uniformClass = "CUP_U_C_Rocker_02";
    weapons[] = {"sgun_HunterShotgun_01_sawedoff_F", "Throw", "Put"};
    respawnWeapons[] = {"sgun_HunterShotgun_01_sawedoff_F", "Throw", "Put"};
    magazines[] = {mag_12("tacgt_2Rnd_P_000"), "ACE_M84", "SmokeShell", "SmokeShellOrange"};
    respawnMagazines[] = {mag_12("tacgt_2Rnd_P_000"), "ACE_M84", "SmokeShell", "SmokeShellOrange"};
    backpack = "TACU_Revolutionaries_B_Paramedic_Black";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Paramedic.jpg);
};

class TACU_Revolutionaries_U_O_Russian_Shotgunner: TACU_Revolutionaries_U_O_Russian_Rifleman01 {
    displayName = "Shotgunner";
    uniformClass = "CUP_U_C_Citizen_03";
    weapons[] = {"sgun_HunterShotgun_01_F", "Throw", "Put"};
    respawnWeapons[] = {"sgun_HunterShotgun_01_F", "Throw", "Put"};
    magazines[] = {mag_12("tacgt_2Rnd_P_000"), "ACE_M84", "SmokeShell", "SmokeShellGreen"};
    respawnMagazines[] = {mag_12("tacgt_2Rnd_P_000"), "ACE_M84", "SmokeShell", "SmokeShellGreen"};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Shotgunner.jpg);
};

class TACU_Revolutionaries_U_O_Russian_Marksman: TACU_Revolutionaries_U_O_Russian_Rifleman01 {
    displayName = "Marksman";
    role = "Marksman";
    uniformClass = "CUP_U_C_Woodlander_04";
    weapons[] = {"CUP_srifle_CZ550", "Throw", "Put"};
    respawnWeapons[] = {"CUP_srifle_CZ550", "Throw", "Put"};
    magazines[] = {mag_4("CUP_5x_22_LR_17_HMR_M"), "ACE_M84", "SmokeShellRed", "SmokeShellBlue"};
    respawnMagazines[] = {mag_4("CUP_5x_22_LR_17_HMR_M"), "ACE_M84", "SmokeShellRed", "SmokeShellBlue"};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_I_Russian_Marksman.jpg);
};

class TACU_Revolutionaries_U_O_Russian_SMG01: TACU_Revolutionaries_U_O_Russian_Rifleman01 {
    displayName = "Submachine Gunner (MP5K)";
    uniformClass = "CUP_U_C_Citizen_04";
    weapons[] = {"TACU_Revolutionaries_W_MP5K", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Revolutionaries_W_MP5K", "Throw", "Put"};
    magazines[] = {mag_6("30Rnd_9x21_Mag_SMG_02"), "ACE_M84", "SmokeShellGreen", "SmokeShellYellow"};
    respawnMagazines[] = {mag_6("30Rnd_9x21_Mag_SMG_02"), "ACE_M84", "SmokeShellGreen", "SmokeShellYellow"};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_SMG01.jpg);
};

class TACU_Revolutionaries_U_O_Russian_SMG02: TACU_Revolutionaries_U_O_Russian_Rifleman01 {
    displayName = "Submachine Gunner (Bizon)";
    uniformClass = "CUP_U_C_Woodlander_01";
    linkedItems[] = {DEFAULT_ITEMS, "CUP_V_C_Police_Holster", "G_Balaclava_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_V_C_Police_Holster", "G_Balaclava_blk"};
    weapons[] = {"CUP_smg_bizon", "Throw", "Put"};
    respawnWeapons[] = {"CUP_smg_bizon", "Throw", "Put"};
    magazines[] = {mag_4("CUP_64Rnd_9x19_Bizon_M"), "ACE_M84", "SmokeShellOrange", "SmokeShellPurple"};
    respawnMagazines[] = {mag_4("CUP_64Rnd_9x19_Bizon_M"), "ACE_M84", "SmokeShellOrange", "SmokeShellPurple"};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_SMG02.jpg);
};

class TACU_Revolutionaries_U_O_Russian_Grenadier: TACU_Revolutionaries_U_O_Russian_Rifleman01 {
    displayName = "Grenadier";
    role = "Grenadier";
    uniformClass = "CUP_U_C_Woodlander_02";
    linkedItems[] = {DEFAULT_ITEMS, "CUP_V_C_Police_Holster", "G_Balaclava_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_V_C_Police_Holster", "G_Balaclava_blk"};
    weapons[] = {"CUP_glaunch_M79", "CUP_hgun_Glock17_blk", "Throw", "Put"};
    respawnWeapons[] = {"CUP_glaunch_M79", "CUP_hgun_Glock17_blk", "Throw", "Put"};
    magazines[] = {mag_6("1Rnd_HE_Grenade_shell"), mag_3("CUP_17Rnd_9x19_glock17"), "ACE_M84", "SmokeShell", "SmokeShellPurple"};
    respawnMagazines[] = {mag_6("1Rnd_HE_Grenade_shell"), mag_3("CUP_17Rnd_9x19_glock17"), "ACE_M84", "SmokeShell", "SmokeShellPurple"};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Grenadier.jpg);
};

class TACU_Revolutionaries_U_O_Russian_Machinegunner: TACU_Revolutionaries_U_O_Russian_Rifleman01 {
    displayName = "Machinegunner";
    icon = "iconManMG";
    role = "MachineGunner";
    uniformClass = "CUP_U_C_Worker_02";
    linkedItems[] = {DEFAULT_ITEMS, "CUP_V_C_Police_Holster", "G_Balaclava_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_V_C_Police_Holster", "G_Balaclava_blk"};
    backpack = "TACU_Revolutionaries_B_MMG_UK59_Black";
    weapons[] = {"CUP_lmg_UK59", "Throw", "Put"};
    respawnWeapons[] = {"CUP_lmg_UK59", "Throw", "Put"};
    magazines[] = {mag_2("CUP_50Rnd_UK59_762x54R_Tracer"), "ACE_M84", "SmokeShellOrange", "SmokeShellBlue"};
    respawnMagazines[] = {mag_2("CUP_50Rnd_UK59_762x54R_Tracer"), "ACE_M84", "SmokeShellOrange", "SmokeShellBlue"};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Machinegunner.jpg);
};

class TACU_Revolutionaries_U_O_Russian_Autorifleman: TACU_Revolutionaries_U_O_Russian_Rifleman01 {
    displayName = "Autorifleman";
    icon = "iconManMG";
    role = "MachineGunner";
    uniformClass = "CUP_U_C_Worker_03";
    linkedItems[] = {DEFAULT_ITEMS, "CUP_V_C_Police_Holster", "G_Balaclava_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_V_C_Police_Holster", "G_Balaclava_blk"};
    backpack = "TACU_Revolutionaries_B_LMG_Minimi_Black";
    weapons[] = {"TACU_Revolutionaries_W_FNMinimiSPW", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Revolutionaries_W_FNMinimiSPW", "Throw", "Put"};
    magazines[] = {"tacgt_200Rnd_556x45_M855A1_Box_Red", "ACE_M84", "SmokeShellYellow", "SmokeShellRed"};
    respawnMagazines[] = {"tacgt_200Rnd_556x45_M855A1_Box_Red", "ACE_M84", "SmokeShellYellow", "SmokeShellRed"};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Autorifleman.jpg);
};

class TACU_Revolutionaries_U_O_Russian_FigureHeadUA: TACU_Revolutionaries_U_O_Russian_Rifleman01 {
    displayName = "Figure Head (Unarmed)";
    uniformClass = "CUP_U_B_USMC_FROG3_WMARPAT";
    linkedItems[] = {DEFAULT_ITEMS, "CUP_H_USMC_CAP_WDL"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_H_USMC_CAP_WDL"};
    backpack = "";
    weapons[] = {"Throw", "Put"};
    respawnWeapons[] = {"Throw", "Put"};
    magazines[] = {};
    respawnMagazines[] = {};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_FigureHeadUA.jpg);
    headgearList[] = {
        "CUP_H_USMC_CAP_WDL", 1
    };
    CBA_facewearList[] = {
        "", 1
    };
};

class TACU_Revolutionaries_U_O_Russian_FigureHead: TACU_Revolutionaries_U_O_Russian_FigureHeadUA {
    displayName = "Figure Head";
    weapons[] = {"CUP_hgun_TaurusTracker455_gold", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_TaurusTracker455_gold", "Throw", "Put"};
    magazines[] = {mag_3("CUP_6Rnd_45ACP_M"), "ACE_M84", "SmokeShellGreen", "SmokeShellOrange"};
    respawnMagazines[] = {mag_3("CUP_6Rnd_45ACP_M"), "ACE_M84", "SmokeShellGreen", "SmokeShellOrange"};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_FigureHead.jpg);
};

class TACU_Revolutionaries_U_O_Russian_Leader: TACU_Revolutionaries_U_O_Russian_Rifleman01 {
    displayName = "Leader";
    icon = "iconManLeader";
    uniformClass = "CUP_U_B_USMC_FROG1_WMARPAT";
    linkedItems[] = {DEFAULT_ITEMS, "V_LegStrapBag_black_F", "CUP_H_USMC_BOONIE_PRR_WDL", "G_Balaclava_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "V_LegStrapBag_black_F", "CUP_H_USMC_BOONIE_PRR_WDL", "G_Balaclava_blk"};
    weapons[] = {"TACU_Revolutionaries_W_CZ805_GL", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Revolutionaries_W_CZ805_GL", "Throw", "Put"};
    magazines[] = {mag_6("tacgt_30Rnd_556x45_M855A1_G36"), mag_6("1Rnd_HE_Grenade_shell"), "ACE_M84", "SmokeShellBlue", "SmokeShellPurple"};
    respawnMagazines[] = {mag_6("tacgt_30Rnd_556x45_M855A1_G36"), mag_6("1Rnd_HE_Grenade_shell"), "ACE_M84", "SmokeShellBlue", "SmokeShellPurple"};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Leader.jpg);
    headgearList[] = {
        "CUP_H_USMC_BOONIE_PRR_WDL", 1
    };
};

class TACU_Revolutionaries_U_O_Russian_Rocketeer: TACU_Revolutionaries_U_O_Russian_Rifleman01 {
    displayName = "Rocketeer";
    icon = "iconManAT";
    role = "MissileSpecialist";
    uniformClass = "CUP_U_C_racketeer_01";
    linkedItems[] = {DEFAULT_ITEMS, "CUP_V_C_Police_Holster", "G_Balaclava_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_V_C_Police_Holster", "G_Balaclava_blk"};
    backpack = "TACU_Revolutionaries_B_Rocketeer_Black";
    weapons[] = {"launch_RPG32_green_F","CUP_hgun_Mac10", "Throw", "Put"};
    respawnWeapons[] = {"launch_RPG32_green_F","CUP_hgun_Mac10", "Throw", "Put"};
    magazines[] = {mag_4("CUP_30Rnd_45ACP_MAC10_M"), "ACE_M84", "SmokeShellRed", "SmokeShellOrange"};
    respawnMagazines[] = {mag_4("CUP_30Rnd_45ACP_MAC10_M"), "ACE_M84", "SmokeShellRed", "SmokeShellOrange"};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Rocketeer.jpg);
};

class TACU_Revolutionaries_U_O_Russian_Saboteur: TACU_Revolutionaries_U_O_Russian_Rifleman01 {
    displayName = "Saboteur";
    icon = "iconManExplosive";
    role = "Sapper";
    engineer = 1;
    uniformClass = "CUP_U_C_racketeer_02";
    Items[] = {mag_5("ACE_fieldDressing"), "ACE_Clacker"};
    respawnItems[] = {mag_5("ACE_fieldDressing"), "ACE_Clacker"};
    backpack = "TACU_Revolutionaries_B_Saboteur_Black";
    weapons[] = {"hgun_PDW2000_F", "Throw", "Put"};
    respawnWeapons[] = {"hgun_PDW2000_F", "Throw", "Put"};
    magazines[] = {mag_6("30Rnd_9x21_Mag"), "ACE_M84", "SmokeShellYellow", "SmokeShellPurple"};
    respawnMagazines[] = {mag_6("30Rnd_9x21_Mag"), "ACE_M84", "SmokeShellYellow", "SmokeShellPurple"};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Saboteur.jpg);
};

class TACU_Revolutionaries_U_O_Russian_Pistoleer01: TACU_Revolutionaries_U_O_Russian_Rifleman01 {
    displayName = "Pistoleer (Grach)";
    uniformClass = "CUP_U_C_racketeer_03";
    linkedItems[] = {DEFAULT_ITEMS, "CUP_V_C_Police_Holster", "G_Balaclava_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_V_C_Police_Holster", "G_Balaclava_blk"};
    backpack = "";
    weapons[] = {"hgun_Rook40_F", "Throw", "Put"};
    respawnWeapons[] = {"hgun_Rook40_F", "Throw", "Put"};
    magazines[] = {mag_6("16Rnd_9x21_Mag"), "ACE_M84", "SmokeShellGreen", "SmokeShellPurple"};
    respawnMagazines[] = {mag_6("16Rnd_9x21_Mag"), "ACE_M84", "SmokeShellGreen", "SmokeShellPurple"};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Pistoleer01.jpg);
};

class TACU_Revolutionaries_U_O_Russian_Pistoleer02: TACU_Revolutionaries_U_O_Russian_Rifleman01 {
    displayName = "Pistoleer (FNX)";
    uniformClass = "CUP_U_C_racketeer_04";
    backpack = "";
    weapons[] = {"hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_4("11Rnd_45ACP_Mag"), "ACE_M84", "SmokeShellYellow", "SmokeShell"};
    respawnMagazines[] = {mag_4("11Rnd_45ACP_Mag"), "ACE_M84", "SmokeShellYellow", "SmokeShell"};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Pistoleer02.jpg);
};

class TACU_Revolutionaries_U_O_Russian_Head: TACU_Revolutionaries_U_O_Russian_Rifleman01 {
    displayName = "Head";
    icon = "iconManOfficer";
    uniformClass = "CUP_U_O_CHDKZ_Lopotev";
    linkedItems[] = {DEFAULT_ITEMS, "V_LegStrapBag_black_F", "CUP_H_PMC_Beanie_Black"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "V_LegStrapBag_black_F", "CUP_H_PMC_Beanie_Black"};
    backpack = "";
    weapons[] = {"cup_hgun_Deagle", "Throw", "Put"};
    respawnWeapons[] = {"cup_hgun_Deagle", "Throw", "Put"};
    magazines[] = {mag_4("CUP_7Rnd_50AE_Deagle"), "ACE_M84", "SmokeShell", "SmokeShellBlue"};
    respawnMagazines[] = {mag_4("CUP_7Rnd_50AE_Deagle"), "ACE_M84", "SmokeShell", "SmokeShellBlue"};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Head.jpg);
    headgearList[] = {
        "CUP_H_PMC_Beanie_Black", 1
    };
    CBA_facewearList[] = {
        "", 1
    };
};

//Veterans
class TACU_Revolutionaries_U_O_Russian_Vet_Rifleman01: TACU_Revolutionaries_U_O_Russian_Rifleman01 {
    displayName = "Rifleman (XM8)";
    uniformClass = "CUP_U_O_RUS_Commander";
    backpack = "B_FieldPack_blk";
    linkedItems[] = {DEFAULT_ITEMS, "CUP_V_RUS_6B3_Flora_4", "G_Balaclava_blk","CUP_NVG_1PN138_Hide"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_V_RUS_6B3_Flora_4", "G_Balaclava_blk","CUP_NVG_1PN138_Hide"};
    Items[] = {mag_5("ACE_fieldDressing")};
    respawnItems[] = {mag_5("ACE_fieldDressing")};
    weapons[] = {"CUP_arifle_XM8_Compact", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_XM8_Compact", "Throw", "Put"};
    magazines[] = {mag_5("tacgt_30Rnd_556x45_M995_CZ805"), "HandGrenade", "SmokeShell", "SmokeShellPurple"};
    respawnMagazines[] = {mag_5("tacgt_30Rnd_556x45_M995_CZ805"), "HandGrenade", "SmokeShell", "SmokeShellPurple"};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_RussianVet";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Vet_Rifleman01);
    headgearList[] = {
        "CUP_H_SLA_Helmet_BLK_worn", 0.2,
        "CUP_H_SLA_Helmet_OD_worn", 0.2,
        "CUP_H_RUS_SSH68_cover_berezka", 0.2,
        "CUP_H_RUS_SSH68_cover_vsr93", 0.2,
        "CUP_H_RUS_SSH68_cover_vsr98",0.2,
        "CUP_H_RUS_6B27_cover",0.2
    };
};

class TACU_Revolutionaries_U_O_Russian_Vet_Rifleman02: TACU_Revolutionaries_U_O_Russian_Vet_Rifleman01 {
    displayName = "Rifleman (G36)";
    uniformClass = "CUP_U_B_BDUv2_Alpenflage";
    backpack = "B_FieldPack_blk";
    weapons[] = {"CUP_arifle_G36C_wdl", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_G36C_wdl", "Throw", "Put"};
    magazines[] = {mag_5("tacgt_30Rnd_556x45_M995_G36"), "HandGrenade", "SmokeShell", "SmokeShellGreen"};
    respawnMagazines[] = {mag_5("tacgt_30Rnd_556x45_M995_G36"), "HandGrenade", "SmokeShell", "SmokeShellGreen"};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_RussianVet";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Vet_Rifleman02);
};

class TACU_Revolutionaries_U_O_Russian_Vet_Rifleman03: TACU_Revolutionaries_U_O_Russian_Vet_Rifleman01 {
    displayName = "Rifleman (AUG)";
    uniformClass = "CUP_U_I_GUE_Flecktarn2";
    backpack = "B_FieldPack_blk";
    weapons[] = {"CUP_arifle_AUG_A1", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AUG_A1", "Throw", "Put"};
    magazines[] = {mag_5("tacgt_42Rnd_556x45_M995_AUG"), "HandGrenade", "SmokeShell", "SmokeShellRed"};
    respawnMagazines[] = {mag_5("tacgt_42Rnd_556x45_M995_AUG"), "HandGrenade", "SmokeShell", "SmokeShellRed"};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_RussianVet";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Vet_Rifleman03.jpg);
};

class TACU_Revolutionaries_U_O_Russian_Vet_Rifleman04: TACU_Revolutionaries_U_O_Russian_Vet_Rifleman01 {
    displayName = "Rifleman (MSBS Grot)";
    uniformClass = "CUP_U_O_SLA_Green";
    backpack = "B_FieldPack_blk";
    weapons[] = {"arifle_MSBS65_UBS_ico_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_MSBS65_UBS_ico_F", "Throw", "Put"};
    magazines[] = {mag_5("30Rnd_65x39_caseless_msbs_mag"), mag_5("tacgt_6Rnd_P_UGL"), "HandGrenade", "SmokeShell", "SmokeShellYellow"};
    respawnMagazines[] = {mag_5("t30Rnd_65x39_caseless_msbs_mag"), mag_5("tacgt_6Rnd_P_UGL"), "HandGrenade", "SmokeShell", "SmokeShellYellow"};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_RussianVet";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Vet_Rifleman04.jpg);
};

class TACU_Revolutionaries_U_O_Russian_Vet_Medic: TACU_Revolutionaries_U_O_Russian_Vet_Rifleman01 {
    displayName = "Medic";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    uniformClass = "CUP_U_B_BDUv2_DPM";
    backpack = "TACU_Revolutionaries_B_Paramedic_Black";
    weapons[] = {"CUP_smg_MP7_woodland", "Throw", "Put"};
    respawnWeapons[] = {"CUP_smg_MP7_woodland", "Throw", "Put"};
    magazines[] = {mag_5("CUP_40Rnd_46x30_MP7"), "HandGrenade", "SmokeShell", "SmokeShellOrange"};
    respawnMagazines[] = {mag_5("CUP_40Rnd_46x30_MP7"), "HandGrenade", "SmokeShell", "SmokeShellOrange"};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_RussianVet";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Vet_Medic.jpg);
};

class TACU_Revolutionaries_U_O_Russian_Vet_Shotgunner: TACU_Revolutionaries_U_O_Russian_Vet_Rifleman01 {
    displayName = "Shotgunner";
    uniformClass = "CUP_U_B_BDUv2_ERDL_highland";
    backpack = "B_FieldPack_blk";
    weapons[] = {"CUP_sgun_Saiga12K", "Throw", "Put"};
    respawnWeapons[] = {"CUP_sgun_Saiga12K", "Throw", "Put"};
    magazines[] = {mag_5("CUP_12Rnd_B_Saiga12_Buck_00"), mag_5("CUP_12Rnd_B_Saiga12_Slug"), "HandGrenade", "SmokeShell", "SmokeShellPurple"};
    respawnMagazines[] = {mag_5("CUP_12Rnd_B_Saiga12_Buck_00"), mag_5("CUP_12Rnd_B_Saiga12_Slug"), "HandGrenade", "SmokeShell", "SmokeShellPurple"};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_RussianVet";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Vet_Shotgunner.jpg);
};

class TACU_Revolutionaries_U_O_Russian_Vet_Marksman: TACU_Revolutionaries_U_O_Russian_Vet_Rifleman01 {
    displayName = "Marksman";
    uniformClass = "CUP_U_I_Ghillie_Top";
    backpack = "B_FieldPack_blk";
    weapons[] = {"TACU_Revolutionaries_W_CZ750", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Revolutionaries_W_CZ750", "Throw", "Put"};
    magazines[] = {mag_8("CUP_10Rnd_762x51_CZ750"), "HandGrenade", "SmokeShell", "SmokeShellBlue"};
    respawnMagazines[] = {mag_8("CUP_10Rnd_762x51_CZ750"), "HandGrenade", "SmokeShell", "SmokeShellBlue"};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_RussianVet";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Vet_Marksman.jpg);
};

class TACU_Revolutionaries_U_O_Russian_Vet_SMG01: TACU_Revolutionaries_U_O_Russian_Vet_Rifleman01 {
    displayName = "SMG (VSS)";
    uniformClass = "CUP_U_B_BDUv2_OD";
    backpack = "B_FieldPack_blk";
    weapons[] = {"CUP_srifle_VSSVintorez_flash", "Throw", "Put"};
    respawnWeapons[] = {"CUP_srifle_VSSVintorez_flash", "Throw", "Put"};
    magazines[] = {mag_8("CUP_30Rnd_9x39_SP5_VIKHR_M"), "HandGrenade", "SmokeShell", "SmokeShellGreen"};
    respawnMagazines[] = {mag_8("CUP_30Rnd_9x39_SP5_VIKHR_M"), "HandGrenade", "SmokeShell", "SmokeShellGreen"};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_RussianVet";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Vet_SMG01.jpg);
};

class TACU_Revolutionaries_U_O_Russian_Vet_SMG02: TACU_Revolutionaries_U_O_Russian_Vet_Rifleman01 {
    displayName = "SMG (Vector)";
    uniformClass = "CUP_U_B_BDUv2_Tigerstripe";
    backpack = "B_FieldPack_blk";
    weapons[] = {"SMG_01_Holo_pointer_snds_F", "Throw", "Put"};
    respawnWeapons[] = {"SMG_01_Holo_pointer_snds_F", "Throw", "Put"};
    magazines[] = {mag_8("30Rnd_45ACP_Mag_SMG_01"), "HandGrenade", "SmokeShell", "SmokeShellGreen"};
    respawnMagazines[] = {mag_8("30Rnd_45ACP_Mag_SMG_01"), "HandGrenade", "SmokeShell", "SmokeShellGreen"};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_RussianVet";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Vet_SMG02.jpg);
};

class TACU_Revolutionaries_U_O_Russian_Vet_Grenadier: TACU_Revolutionaries_U_O_Russian_Vet_Rifleman01 {
    displayName = "Grenadier";
    uniformClass = "CUP_U_B_BDUv2_M81";
    backpack = "B_FieldPack_blk";
    weapons[] = {"CUP_glaunch_6G30", "CUP_hgun_CZ75", "Throw", "Put"};
    respawnWeapons[] = {"CUP_glaunch_6G30", "CUP_hgun_CZ75", "Throw", "Put"};
    magazines[] = {mag_5("CUP_6Rnd_HE_GP25_M"), mag_2("CUP_16Rnd_9x19_cz75"), "HandGrenade", "SmokeShell", "SmokeShellOrange"};
    respawnMagazines[] = {mag_5("CUP_6Rnd_HE_GP25_M"), mag_2("CUP_16Rnd_9x19_cz75"), "HandGrenade", "SmokeShell", "SmokeShellOrange"};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_RussianVet";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Vet_Grenadier.jpg);
};

class TACU_Revolutionaries_U_O_Russian_Vet_Machinegunner: TACU_Revolutionaries_U_O_Russian_Vet_Rifleman01 {
    displayName = "Machinegunner";
    uniformClass = "CUP_U_I_GUE_Flecktarn2";
    backpack = "TACU_Revolutionaries_B_Vet_Zafir_Black";
    weapons[] = {"LMG_Zafir_ARCO_F", "Throw", "Put"};
    respawnWeapons[] = {"LMG_Zafir_ARCO_F", "Throw", "Put"};
    magazines[] = {mag_5("150Rnd_762x54_Box"), "HandGrenade", "SmokeShell", "SmokeShellPurple"};
    respawnMagazines[] = {mag_5("150Rnd_762x54_Box"), "HandGrenade", "SmokeShell", "SmokeShellPurple"};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_RussianVet";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Vet_Machinegunner.jpg);
};

class TACU_Revolutionaries_U_O_Russian_Vet_Autorifleman: TACU_Revolutionaries_U_O_Russian_Vet_Rifleman01 {
    displayName = "Autorifleman";
    uniformClass = "CUP_U_O_Partisan_TTsKO";
    backpack = "TACU_Revolutionaries_B_Vet_Galil_Black";
    weapons[] = {"CUP_arifle_Galil_556_black", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_Galil_556_black", "Throw", "Put"};
    magazines[] = {mag_5("CUP_50Rnd_556x45_Galil_Mag"), "HandGrenade", "SmokeShell", "SmokeShellRed"};
    respawnMagazines[] = {mag_5("CUP_50Rnd_556x45_Galil_Mag"), "HandGrenade", "SmokeShell", "SmokeShellRed"};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_RussianVet";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Vet_Autorifleman.jpg);
};

class TACU_Revolutionaries_U_O_Russian_Vet_Figure_Head: TACU_Revolutionaries_U_O_Russian_Vet_Rifleman01 {
    displayName = "Figure Head";
    icon = "iconManOfficer";
    uniformClass = "U_C_FormalSuit_01_gray_F";
    backpack = "";
    weapons[] = {"CUP_smg_M3A1_blk", "Throw", "Put"};
    respawnWeapons[] = {"CUP_smg_M3A1_blk", "Throw", "Put"};
    magazines[] = {mag_5("CUP_30Rnd_45ACP_M3A1_BLK_M"), "HandGrenade", "SmokeShell", "SmokeShellPurple"};
    respawnMagazines[] = {mag_5("CUP_30Rnd_45ACP_M3A1_BLK_M"), "HandGrenade", "SmokeShell", "SmokeShellPurple"};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_RussianVet";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Vet_Figure_Head.jpg);
    headgearList[] = {
        "H_HelmetSpecO_blk", 1
    };
    CBA_facewearList[] = {
        "", 1
    };
};

class TACU_Revolutionaries_U_O_Russian_Vet_Leader: TACU_Revolutionaries_U_O_Russian_Vet_Rifleman01 {
    displayName = "Leader";
    icon = "iconManOfficer";
    uniformClass = "CUP_U_O_CHDKZ_Kam_04";
    backpack = "";
    weapons[] = {"arifle_CTAR_GL_blk_ACO_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_CTAR_GL_blk_ACO_F", "Throw", "Put"};
    magazines[] = {mag_5("tacgt_30Rnd_580x42_DBP88"), mag_5("1Rnd_HE_Grenade_shell"), "HandGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_5("tacgt_30Rnd_580x42_DBP88"), mag_5("1Rnd_HE_Grenade_shell"), "HandGrenade", "SmokeShell"};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_RussianVet";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Vet_Leader.jpg);
    headgearList[] = {
        "CUP_H_RUS_Altyn_Shield_Down_khaki", 1
    };
};

class TACU_Revolutionaries_U_O_Russian_Vet_Rocketeer: TACU_Revolutionaries_U_O_Russian_Vet_Rifleman01 {
    displayName = "Rocketeer";
    icon = "iconManAT";
    role = "MissileSpecialist";
    uniformClass = "CUP_U_B_HIL_ACU_CCE";
    backpack = "TACU_Revolutionaries_B_Vet_SMAW_Black";
    weapons[] = {"CUP_arifle_SR3M_Vikhr", "CUP_launch_Mk153Mod0_blk", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_SR3M_Vikhr", "CUP_launch_Mk153Mod0_blk", "Throw", "Put"};
    magazines[] = {mag_5("CUP_30Rnd_9x39_SP5_VIKHR_M"), "HandGrenade", "SmokeShell", "SmokeShellYellow"};
    respawnMagazines[] = {mag_5("CUP_30Rnd_9x39_SP5_VIKHR_M"), "HandGrenade", "SmokeShell", "SmokeShellYellow"};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_RussianVet";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Vet_Rocketeer.jpg);
};

class TACU_Revolutionaries_U_O_Russian_Vet_Pistoleer01: TACU_Revolutionaries_U_O_Russian_Vet_Rifleman01 {
    displayName = "Pistoleer (Mk23)";
    uniformClass = "CUP_U_B_HIL_ACU_Kneepad_TTS";
    backpack = "B_FieldPack_blk";
    weapons[] = {"CUP_hgun_Mk23", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_Mk23", "Throw", "Put"};
    magazines[] = {mag_5("CUP_12Rnd_45ACP_mk23"), "HandGrenade", "SmokeShell", "SmokeShellRed"};
    respawnMagazines[] = {mag_5("CUP_12Rnd_45ACP_mk23"), "HandGrenade", "SmokeShell", "SmokeShellRed"};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_RussianVet";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Vet_Pistoleer01.jpg);
};

class TACU_Revolutionaries_U_O_Russian_Vet_Pistoleer02: TACU_Revolutionaries_U_O_Russian_Vet_Rifleman01 {
    displayName = "Pistoleer (TT-33)";
    uniformClass = "CUP_U_O_RUS_Ratnik_Summer";
    backpack = "B_FieldPack_blk";
    weapons[] = {"CUP_hgun_TT", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_TT", "Throw", "Put"};
    magazines[] = {mag_5("CUP_8Rnd_762x25_TT"), "HandGrenade", "SmokeShell", "SmokeShellYellow"};
    respawnMagazines[] = {mag_5("CUP_8Rnd_762x25_TT"), "HandGrenade", "SmokeShell", "SmokeShellYellow"};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_RussianVet";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Vet_Pistoleer02.jpg);
};

class TACU_Revolutionaries_U_O_Russian_Vet_Head: TACU_Revolutionaries_U_O_Russian_Vet_Rifleman01 {
    displayName = "Head";
    icon = "iconManOfficer";
    uniformClass = "U_B_ParadeUniform_01_US_decorated_F";
    backpack = "";
    weapons[] = {"srifle_DMR_04_F", "Throw", "Put"};
    respawnWeapons[] = {"srifle_DMR_04_F", "Throw", "Put"};
    magazines[] = {mag_8("10Rnd_127x54_Mag"), "HandGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_8("10Rnd_127x54_Mag"), "HandGrenade", "SmokeShell"};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_RussianVet";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Vet_Head.jpg);
    headgearList[] = {
        "H_HelmetAggressor_F", 1
    };
    CBA_facewearList[] = {
        "", 1
    };
};

// Vehicles
class CUP_C_Datsun_4seat;
class TACU_Revolutionaries_V_O_Datsun_5Seat: CUP_C_Datsun_4seat {
    dlc = QUOTE(PREFIX);
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_O";
    side = 0;
    displayName = "Datsun (5 Seats)";
    crew = "TACU_Revolutionaries_U_O_Russian_Pistoleer01";
    typicalCargo[] = {"TACU_Revolutionaries_U_O_Russian_Pistoleer01"};
    editorPreview = QPATHTOF(ui\Revolutionaries_V_O_Datsun_5Seat.jpg);
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_Cars_Russian";
};
class CUP_C_Golf4_black_Civ;
class TACU_Revolutionaries_V_O_Golf_Black: CUP_C_Golf4_black_Civ {
    dlc = QUOTE(PREFIX);
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_O";
    side = 0;
    displayName = "Golf (Black)";
    crew = "TACU_Revolutionaries_U_O_Russian_Pistoleer02";
    typicalCargo[] = {"TACU_Revolutionaries_U_O_Russian_Pistoleer02"};
    editorPreview = QPATHTOF(ui\Revolutionaries_V_O_Golf_Black.jpg);
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_Cars_Russian";
};
class CUP_C_Skoda_Blue_CIV;
class TACU_Revolutionaries_V_O_Skoda_Blue: CUP_C_Skoda_Blue_CIV {
    dlc = QUOTE(PREFIX);
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_O";
    side = 0;
    displayName = "Skoda (Blue)";
    crew = "TACU_Revolutionaries_U_O_Russian_Pistoleer01";
    typicalCargo[] = {"TACU_Revolutionaries_U_O_Russian_Pistoleer01"};
    editorPreview = QPATHTOF(ui\Revolutionaries_V_O_Skoda_Blue.jpg);
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_Cars_Russian";
};
class CUP_O_Datsun_PK;
class TACU_Revolutionaries_V_O_Datsun_PK: CUP_O_Datsun_PK {
    dlc = QUOTE(PREFIX);
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_O";
    side = 0;
    displayName = "Datsun (PK)";
    crew = "TACU_Revolutionaries_U_O_Russian_Pistoleer02";
    typicalCargo[] = {"TACU_Revolutionaries_U_O_Russian_Pistoleer02"};
    editorPreview = QPATHTOF(ui\Revolutionaries_V_O_Datsun_PK.jpg);
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_Cars_Russian";
};
class CUP_C_Ural_Civ_03;
class TACU_Revolutionaries_V_O_Ural: CUP_C_Ural_Civ_03 {
    dlc = QUOTE(PREFIX);
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_O";
    side = 0;
    displayName = "Ural (Worker)";
    crew = "TACU_Revolutionaries_U_O_Russian_Rifleman03";
    typicalCargo[] = {"TACU_Revolutionaries_U_O_Russian_Rifleman03"};
    editorPreview = QPATHTOF(ui\Revolutionaries_V_O_Ural.jpg);
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_Cars_Russian";
};
