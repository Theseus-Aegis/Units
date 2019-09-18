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
    backpack = "B_FieldPack_khk";
    linkedItems[] = {DEFAULT_ITEMS, "CUP_V_O_TK_OfficerBelt"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_V_O_TK_OfficerBelt"};
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
    TACU_allowedFacewear[] = {
        "None", 1
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

// Vehicles
class CUP_C_Datsun_4seat;
class TACU_Revolutionaries_V_I_Datsun_5Seat: CUP_C_Datsun_4seat {
    dlc = QUOTE(PREFIX);
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_I";
    side = 2;
    displayName = "Datsun (5 Seats)";
    crew = "TACU_Revolutionaries_U_I_Russian_Rifleman03";
    typicalCargo[] = {"TACU_Revolutionaries_U_I_Russian_Rifleman03"};
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
    crew = "TACU_Revolutionaries_U_I_Russian_Rifleman03";
    typicalCargo[] = {"TACU_Revolutionaries_U_I_Russian_Rifleman03"};
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
    crew = "TACU_Revolutionaries_U_I_Russian_Rifleman03";
    typicalCargo[] = {"TACU_Revolutionaries_U_I_Russian_Rifleman03"};
    editorPreview = QPATHTOF(ui\Revolutionaries_V_I_Skoda_Blue.jpg);
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_Cars_Russian";
};
