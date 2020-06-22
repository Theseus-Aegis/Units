// Units - Civil Defense
class TACU_Main_U_INDEP_Soldier_Base;
class TACU_Revolutionaries_U_I_Russian_Rifleman01: TACU_Main_U_INDEP_Soldier_Base {
    dlc = QUOTE(PREFIX);
    author = "Jack";
    displayName = "Rifleman (FAL)";
    faction = "TACU_Revolutionaries_I";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"CUP_D_Language_RU", "Head_Euro", "NoGlasses"};
    genericNames = "CUP_Names_RussianMen";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "CUP_U_C_Citizen_01";
    backpack = "B_FieldPack_blk";
    linkedItems[] = {DEFAULT_ITEMS, "V_LegStrapBag_black_F"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "V_LegStrapBag_black_F"};
    Items[] = {mag_5("ACE_fieldDressing")};
    respawnItems[] = {mag_5("ACE_fieldDressing")};
    weapons[] = {"CUP_arifle_FNFAL", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_FNFAL", "Throw", "Put"};
    magazines[] = {mag_5("CUP_20Rnd_762x51_FNFAL_M")};
    respawnMagazines[] = {mag_5("CUP_20Rnd_762x51_FNFAL_M")};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_Russian";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_I_Russian_Rifleman01.jpg);
    headgearList[] = {
        "", 1
    };
    CBA_facewearList[] = {
        "", 1
    };
};

class TACU_Revolutionaries_U_I_Russian_Rifleman02: TACU_Revolutionaries_U_I_Russian_Rifleman01 {
    displayName = "Rifleman (MK14)";
    uniformClass = "CUP_U_C_Citizen_02";
    weapons[] = {"srifle_DMR_06_hunter_F", "Throw", "Put"};
    respawnWeapons[] = {"srifle_DMR_06_hunter_F", "Throw", "Put"};
    magazines[] = {mag_5("10Rnd_Mk14_762x51_Mag")};
    respawnMagazines[] = {mag_5("10Rnd_Mk14_762x51_Mag")};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_I_Russian_Rifleman02.jpg);
};

class TACU_Revolutionaries_U_I_Russian_Rifleman03: TACU_Revolutionaries_U_I_Russian_Rifleman01 {
    displayName = "Rifleman (Lee Enfield)";
    uniformClass = "CUP_U_C_Woodlander_03";
    weapons[] = {"CUP_srifle_LeeEnfield", "Throw", "Put"};
    respawnWeapons[] = {"CUP_srifle_LeeEnfield", "Throw", "Put"};
    magazines[] = {mag_5("CUP_10x_303_M")};
    respawnMagazines[] = {mag_5("CUP_10x_303_M")};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_I_Russian_Rifleman03.jpg);
};

class TACU_Revolutionaries_U_I_Russian_Paramedic: TACU_Revolutionaries_U_I_Russian_Rifleman01 {
    displayName = "Paramedic";
    uniformClass = "CUP_U_C_Rocker_02";
    weapons[] = {"sgun_HunterShotgun_01_sawedoff_F", "Throw", "Put"};
    respawnWeapons[] = {"sgun_HunterShotgun_01_sawedoff_F", "Throw", "Put"};
    magazines[] = {mag_12("2Rnd_12Gauge_Pellets")};
    respawnMagazines[] = {mag_12("2Rnd_12Gauge_Pellets")};
    backpack = "TACU_Revolutionaries_B_Paramedic_Black";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_I_Russian_Paramedic.jpg);
};

class TACU_Revolutionaries_U_I_Russian_Shotgunner: TACU_Revolutionaries_U_I_Russian_Rifleman01 {
    displayName = "Shotgunner";
    uniformClass = "CUP_U_C_Citizen_03";
    weapons[] = {"sgun_HunterShotgun_01_F", "Throw", "Put"};
    respawnWeapons[] = {"sgun_HunterShotgun_01_F", "Throw", "Put"};
    magazines[] = {mag_12("2Rnd_12Gauge_Pellets")};
    respawnMagazines[] = {mag_12("2Rnd_12Gauge_Pellets")};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_I_Russian_Shotgunner.jpg);
};

class TACU_Revolutionaries_U_I_Russian_Marksman: TACU_Revolutionaries_U_I_Russian_Rifleman01 {
    displayName = "Marksman";
    uniformClass = "CUP_U_C_Woodlander_04";
    weapons[] = {"CUP_srifle_CZ550", "Throw", "Put"};
    respawnWeapons[] = {"CUP_srifle_CZ550", "Throw", "Put"};
    magazines[] = {mag_4("CUP_5x_22_LR_17_HMR_M")};
    respawnMagazines[] = {mag_4("CUP_5x_22_LR_17_HMR_M")};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_I_Russian_Marksman.jpg);
};

class TACU_Revolutionaries_U_I_Russian_Pistoleer01: TACU_Revolutionaries_U_I_Russian_Rifleman01 {
    displayName = "Pistoleer (Grach)";
    uniformClass = "CUP_U_C_racketeer_03";
    backpack = "";
    weapons[] = {"hgun_Rook40_F", "Throw", "Put"};
    respawnWeapons[] = {"hgun_Rook40_F", "Throw", "Put"};
    magazines[] = {mag_6("16Rnd_9x21_Mag")};
    respawnMagazines[] = {mag_6("16Rnd_9x21_Mag")};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_I_Russian_Pistoleer01.jpg);
};

class TACU_Revolutionaries_U_I_Russian_Pistoleer02: TACU_Revolutionaries_U_I_Russian_Rifleman01 {
    displayName = "Pistoleer (FNX)";
    uniformClass = "CUP_U_C_racketeer_04";
    backpack = "";
    weapons[] = {"hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_6("11Rnd_45ACP_Mag")};
    respawnMagazines[] = {mag_6("11Rnd_45ACP_Mag")};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_I_Russian_Pistoleer02.jpg);
};

class TACU_Revolutionaries_U_I_Russian_Head: TACU_Revolutionaries_U_I_Russian_Rifleman01 {
    displayName = "Head";
    uniformClass = "CUP_U_C_Profiteer_04";
    linkedItems[] = {DEFAULT_ITEMS, "V_LegStrapBag_black_F", "CUP_H_C_Beret_04"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "V_LegStrapBag_black_F", "CUP_H_C_Beret_04"};
    backpack = "";
    weapons[] = {"hgun_P07_F", "Throw", "Put"};
    respawnWeapons[] = {"hgun_P07_F", "Throw", "Put"};
    magazines[] = {mag_6("16Rnd_9x21_Mag")};
    respawnMagazines[] = {mag_6("16Rnd_9x21_Mag")};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_I_Russian_Head.jpg);
    headgearList[] = {
        "CUP_H_C_Beret_04", 1
    };
};

class TACU_Revolutionaries_U_I_Russian_FigureHeadUA: TACU_Revolutionaries_U_I_Russian_Rifleman01 {
    displayName = "Representative (Unarmed)";
    uniformClass = "CUP_U_C_Functionary_jacket_03";
    linkedItems[] = {DEFAULT_ITEMS};
    respawnLinkedItems[] = {DEFAULT_ITEMS};
    backpack = "";
    weapons[] = {"Throw", "Put"};
    respawnWeapons[] = {"Throw", "Put"};
    magazines[] = {};
    respawnMagazines[] = {};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_I_Russian_FigureHeadUA.jpg);
};

class TACU_Revolutionaries_U_I_Russian_FigureHead: TACU_Revolutionaries_U_I_Russian_FigureHeadUA {
    displayName = "Representative";
    weapons[] = {"hgun_Pistol_heavy_02_F", "Throw", "Put"};
    respawnWeapons[] = {"hgun_Pistol_heavy_02_F", "Throw", "Put"};
    magazines[] = {mag_3("6Rnd_45ACP_Cylinder")};
    respawnMagazines[] = {mag_3("6Rnd_45ACP_Cylinder")};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_I_Russian_FigureHead.jpg);
};

class TACU_Revolutionaries_U_I_Russian_Leader: TACU_Revolutionaries_U_I_Russian_Rifleman01 {
    displayName = "Leader";
    uniformClass = "CUP_U_I_GUE_Anorak_03";
    linkedItems[] = {DEFAULT_ITEMS, "V_LegStrapBag_black_F", "CUP_H_PMC_Cap_Grey"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "V_LegStrapBag_black_F", "CUP_H_PMC_Cap_Grey"};
    weapons[] = {"CUP_arifle_OTS14_GROZA_762", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_OTS14_GROZA_762", "Throw", "Put"};
    magazines[] = {mag_6("CUP_20Rnd_762X39_AMD63_M")};
    respawnMagazines[] = {mag_6("CUP_20Rnd_762X39_AMD63_M")};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_I_Russian_Leader.jpg);
    headgearList[] = {
        "CUP_H_PMC_Cap_Grey", 1
    };
};

// Vehicles
class CUP_C_Datsun_4seat;
class TACU_Revolutionaries_V_I_Datsun_5Seat: CUP_C_Datsun_4seat {
    dlc = QUOTE(PREFIX);
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_I";
    side = 2;
    displayName = "Datsun (5 Seats)";
    crew = "TACU_Revolutionaries_U_I_Russian_Pistoleer02";
    typicalCargo[] = {"TACU_Revolutionaries_U_I_Russian_Pistoleer02"};
    editorPreview = QPATHTOF(ui\Revolutionaries_V_I_Datsun_5Seat.jpg);
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_Cars_Russian";
};

class CUP_C_Golf4_black_Civ;
class TACU_Revolutionaries_V_I_Golf_Black: CUP_C_Golf4_black_Civ {
    dlc = QUOTE(PREFIX);
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_I";
    side = 2;
    displayName = "Golf (Black)";
    crew = "TACU_Revolutionaries_U_I_Russian_Pistoleer01";
    typicalCargo[] = {"TTACU_Revolutionaries_U_I_Russian_Pistoleer01"};
    editorPreview = QPATHTOF(ui\Revolutionaries_V_I_Golf_Black.jpg);
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_Cars_Russian";
};

class CUP_C_Skoda_Blue_CIV;
class TACU_Revolutionaries_V_I_Skoda_Blue: CUP_C_Skoda_Blue_CIV {
    dlc = QUOTE(PREFIX);
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_I";
    side = 2;
    displayName = "Skoda (Blue)";
    crew = "TACU_Revolutionaries_U_I_Russian_Pistoleer02";
    typicalCargo[] = {"TTACU_Revolutionaries_U_I_Russian_Pistoleer02"};
    editorPreview = QPATHTOF(ui\Revolutionaries_V_I_Skoda_Blue.jpg);
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_Cars_Russian";
};
