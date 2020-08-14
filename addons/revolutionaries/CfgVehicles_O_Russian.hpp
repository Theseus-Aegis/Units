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
    sensitivity = 2;
    uniformClass = "CUP_U_C_Citizen_01";
    backpack = "B_FieldPack_blk";
    linkedItems[] = {DEFAULT_ITEMS, "V_LegStrapBag_black_F", "G_Balaclava_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "V_LegStrapBag_black_F", "G_Balaclava_blk"};
    Items[] = {mag_5("ACE_fieldDressing")};
    respawnItems[] = {mag_5("ACE_fieldDressing")};
    weapons[] = {"CUP_arifle_FNFAL", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_FNFAL", "Throw", "Put"};
    magazines[] = {mag_5("CUP_20Rnd_762x51_FNFAL_M")};
    respawnMagazines[] = {mag_5("CUP_20Rnd_762x51_FNFAL_M")};
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
    magazines[] = {mag_5("10Rnd_Mk14_762x51_Mag")};
    respawnMagazines[] = {mag_5("10Rnd_Mk14_762x51_Mag")};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Rifleman02.jpg);
};

class TACU_Revolutionaries_U_O_Russian_Rifleman03: TACU_Revolutionaries_U_O_Russian_Rifleman01 {
    displayName = "Rifleman (Lee Enfield)";
    uniformClass = "CUP_U_C_Woodlander_03";
    weapons[] = {"CUP_srifle_LeeEnfield", "Throw", "Put"};
    respawnWeapons[] = {"CUP_srifle_LeeEnfield", "Throw", "Put"};
    magazines[] = {mag_5("CUP_10x_303_M")};
    respawnMagazines[] = {mag_5("CUP_10x_303_M")};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Rifleman03.jpg);
};

class TACU_Revolutionaries_U_O_Russian_Rifleman04: TACU_Revolutionaries_U_O_Russian_Rifleman01 {
    displayName = "Rifleman (CZ805 A2)";
    uniformClass = "U_O_R_Gorka_01_black_F";
    linkedItems[] = {DEFAULT_ITEMS, "CUP_V_C_Police_Holster", "G_Balaclava_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_V_C_Police_Holster", "G_Balaclava_blk"};
    weapons[] = {"TACU_Revolutionaries_W_CZ805A2", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Revolutionaries_W_CZ805A2", "Throw", "Put"};
    magazines[] = {mag_6("CUP_30Rnd_556x45_G36")};
    respawnMagazines[] = {mag_6("CUP_30Rnd_556x45_G36")};
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
    magazines[] = {mag_12("2Rnd_12Gauge_Pellets")};
    respawnMagazines[] = {mag_12("2Rnd_12Gauge_Pellets")};
    backpack = "TACU_Revolutionaries_B_Paramedic_Black";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Paramedic.jpg);
};

class TACU_Revolutionaries_U_O_Russian_Shotgunner: TACU_Revolutionaries_U_O_Russian_Rifleman01 {
    displayName = "Shotgunner";
    uniformClass = "CUP_U_C_Citizen_03";
    weapons[] = {"sgun_HunterShotgun_01_F", "Throw", "Put"};
    respawnWeapons[] = {"sgun_HunterShotgun_01_F", "Throw", "Put"};
    magazines[] = {mag_12("2Rnd_12Gauge_Pellets")};
    respawnMagazines[] = {mag_12("2Rnd_12Gauge_Pellets")};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Shotgunner.jpg);
};

class TACU_Revolutionaries_U_O_Russian_Marksman: TACU_Revolutionaries_U_O_Russian_Rifleman01 {
    displayName = "Marksman";
    role = "Marksman";
    sensitivity = 2.25;
    uniformClass = "CUP_U_C_Woodlander_04";
    weapons[] = {"CUP_srifle_CZ550", "Throw", "Put"};
    respawnWeapons[] = {"CUP_srifle_CZ550", "Throw", "Put"};
    magazines[] = {mag_4("CUP_5x_22_LR_17_HMR_M")};
    respawnMagazines[] = {mag_4("CUP_5x_22_LR_17_HMR_M")};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_I_Russian_Marksman.jpg);
};

class TACU_Revolutionaries_U_O_Russian_SMG01: TACU_Revolutionaries_U_O_Russian_Rifleman01 {
    displayName = "Submachine Gunner (MP5K)";
    uniformClass = "CUP_U_C_Citizen_04";
    weapons[] = {"TACU_Revolutionaries_W_MP5K", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Revolutionaries_W_MP5K", "Throw", "Put"};
    magazines[] = {mag_6("30Rnd_9x21_Mag_SMG_02")};
    respawnMagazines[] = {mag_6("30Rnd_9x21_Mag_SMG_02")};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_SMG01.jpg);
};

class TACU_Revolutionaries_U_O_Russian_SMG02: TACU_Revolutionaries_U_O_Russian_Rifleman01 {
    displayName = "Submachine Gunner (Bizon)";
    uniformClass = "CUP_U_C_Woodlander_01";
    linkedItems[] = {DEFAULT_ITEMS, "CUP_V_C_Police_Holster", "G_Balaclava_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_V_C_Police_Holster", "G_Balaclava_blk"};
    weapons[] = {"CUP_smg_bizon", "Throw", "Put"};
    respawnWeapons[] = {"CUP_smg_bizon", "Throw", "Put"};
    magazines[] = {mag_4("CUP_64Rnd_9x19_Bizon_M")};
    respawnMagazines[] = {mag_4("CUP_64Rnd_9x19_Bizon_M")};
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
    magazines[] = {mag_8("1Rnd_HE_Grenade_shell"), mag_3("CUP_17Rnd_9x19_glock17")};
    respawnMagazines[] = {mag_8("1Rnd_HE_Grenade_shell"), mag_3("CUP_17Rnd_9x19_glock17")};
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
    magazines[] = {mag_2("CUP_50Rnd_UK59_762x54R_Tracer")};
    respawnMagazines[] = {mag_2("CUP_50Rnd_UK59_762x54R_Tracer")};
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
    magazines[] = {"200Rnd_556x45_Box_F"};
    respawnMagazines[] = {"200Rnd_556x45_Box_F"};
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
    magazines[] = {mag_3("CUP_6Rnd_45ACP_M")};
    respawnMagazines[] = {mag_3("CUP_6Rnd_45ACP_M")};
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
    magazines[] = {mag_6("CUP_30Rnd_556x45_G36"), mag_6("1Rnd_HE_Grenade_shell")};
    respawnMagazines[] = {mag_6("CUP_30Rnd_556x45_G36"), mag_6("1Rnd_HE_Grenade_shell")};
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
    magazines[] = {mag_4("CUP_30Rnd_45ACP_MAC10_M")};
    respawnMagazines[] = {mag_4("CUP_30Rnd_45ACP_MAC10_M")};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Rocketeer.jpg);
};

class TACU_Revolutionaries_U_O_Russian_Saboteur: TACU_Revolutionaries_U_O_Russian_Rifleman01 {
    displayName = "Saboteur";
    icon = "iconManEngineer";
    role = "Sapper";
    engineer = true;
    uniformClass = "CUP_U_C_racketeer_02";
    Items[] = {mag_5("ACE_fieldDressing"), "ACE_Clacker"};
    respawnItems[] = {mag_5("ACE_fieldDressing"), "ACE_Clacker"};
    backpack = "TACU_Revolutionaries_B_Saboteur_Black";
    weapons[] = {"hgun_PDW2000_F", "Throw", "Put"};
    respawnWeapons[] = {"hgun_PDW2000_F", "Throw", "Put"};
    magazines[] = {mag_6("30Rnd_9x21_Mag")};
    respawnMagazines[] = {mag_6("30Rnd_9x21_Mag")};
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
    magazines[] = {mag_6("16Rnd_9x21_Mag")};
    respawnMagazines[] = {mag_6("16Rnd_9x21_Mag")};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Pistoleer01.jpg);
};

class TACU_Revolutionaries_U_O_Russian_Pistoleer02: TACU_Revolutionaries_U_O_Russian_Rifleman01 {
    displayName = "Pistoleer (FNX)";
    uniformClass = "CUP_U_C_racketeer_04";
    backpack = "";
    weapons[] = {"hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_6("11Rnd_45ACP_Mag")};
    respawnMagazines[] = {mag_6("11Rnd_45ACP_Mag")};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Pistoleer02.jpg);
};

class TACU_Revolutionaries_U_O_Russian_Head: TACU_Revolutionaries_U_O_Russian_Rifleman01 {
    displayName = "Head";
    uniformClass = "CUP_U_O_CHDKZ_Lopotev";
    linkedItems[] = {DEFAULT_ITEMS, "V_LegStrapBag_black_F", "CUP_H_PMC_Beanie_Black"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "V_LegStrapBag_black_F", "CUP_H_PMC_Beanie_Black"};
    backpack = "";
    weapons[] = {"cup_hgun_Deagle", "Throw", "Put"};
    respawnWeapons[] = {"cup_hgun_Deagle", "Throw", "Put"};
    magazines[] = {mag_5("CUP_7Rnd_50AE_Deagle")};
    respawnMagazines[] = {mag_5("CUP_7Rnd_50AE_Deagle")};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Head.jpg);
    headgearList[] = {
        "CUP_H_PMC_Beanie_Black", 1
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
