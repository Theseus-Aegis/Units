class TACU_Revolutionaries_U_I_Russian_Base: TACU_Main_U_INDEP_Soldier_Base { //Home Defense (Russian)
    author = "Jack";
    displayName = "Rifleman (FAL)";
    faction = "TACU_Revolutionaries_I";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"CUP_D_Language_RU", "Head_Euro", "G_Balaclava_blk"};
    genericNames = "CUP_Names_RussianMen";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "CUP_U_C_Citizen_01";
    backpack = "TACU_Revolutionaries_Backpack_FNFAL";
    linkedItems[] = {"ItemWatch","ItemCompass","ItemMap"};
    respawnLinkedItems[] = {"ItemWatch","ItemCompass","ItemMap"};
    Items[] = {mag_5("ACE_fieldDressing"),"ACE_EarPlugs"};
    respawnItems[] = {mag_5("ACE_fieldDressing"),"ACE_EarPlugs"};
    weapons[] = {"CUP_arifle_FNFAL"};
    respawnWeapons[] = {"CUP_arifle_FNFAL"};
    magazines[] = {mag_2("CUP_20Rnd_762x51_FNFAL_M")};
    respawnMagazines[] = {mag_2("CUP_20Rnd_762x51_FNFAL_M")};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_I_Russian";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_I_Russian_Base.jpg);
    headgearList[] = {};
    TACU_allowedFacewear[] = {
        "None", 1
    };
};
class TACU_Revolutionaries_U_I_Russian_Rifleman01: TACU_Revolutionaries_U_I_Russian_Base { //Unit Specifics
    displayName = "Rifleman (MK14)"; 
    scope = 2;
    scopeCurator = 2;
    uniformClass = "CUP_U_C_Citizen_02";
    weapons[] = {"srifle_DMR_06_hunter_F"};
    respawnWeapons[] = {"srifle_DMR_06_hunter_F"};
    magazines[] = {mag_2("10Rnd_Mk14_762x51_Mag")};
    respawnMagazines[] = {mag_2("10Rnd_Mk14_762x51_Mag")};
    backpack = "TACU_Revolutionaries_Backpack_Mk14";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_I_Russian_Rifleman01.jpg);
};
class TACU_Revolutionaries_U_I_Russian_Rifleman02: TACU_Revolutionaries_U_I_Russian_Base {
    displayName = "Shotgunner"; 
    scope = 2;
    scopeCurator = 2;
    uniformClass = "CUP_U_C_Citizen_03";
    weapons[] = {"sgun_HunterShotgun_01_F"};
    respawnWeapons[] = {"sgun_HunterShotgun_01_F"};
    magazines[] = {mag_4("2Rnd_12Gauge_Pellets")};
    respawnMagazines[] = {mag_4("2Rnd_12Gauge_Pellets")};
    backpack = "TACU_Revolutionaries_Backpack_Shotgun";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_I_Russian_Rifleman02.jpg);
};
class TACU_Revolutionaries_U_I_Russian_Rifleman03: TACU_Revolutionaries_U_I_Russian_Base {
    displayName = "Marksman"; 
    scope = 2;
    scopeCurator = 2;
    uniformClass = "CUP_U_C_Woodlander_04";
    weapons[] = {"CUP_srifle_CZ550"};
    respawnWeapons[] = {"CUP_srifle_CZ550"};
    magazines[] = {mag_2("CUP_5x_22_LR_17_HMR_M")};
    respawnMagazines[] = {mag_2("CUP_5x_22_LR_17_HMR_M")};
    backpack = "TACU_Revolutionaries_Backpack_CZ550";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_I_Russian_Rifleman03.jpg);
};
class TACU_Revolutionaries_U_I_Russian_Rifleman04: TACU_Revolutionaries_U_I_Russian_Base {
    displayName = "Rifleman (Lee Enfield)"; 
    scope = 2;
    scopeCurator = 2;
    uniformClass = "CUP_U_C_Woodlander_03";
    weapons[] = {"CUP_srifle_LeeEnfield"};
    respawnWeapons[] = {"CUP_srifle_LeeEnfield"};
    magazines[] = {mag_2("CUP_10x_303_M")};
    respawnMagazines[] = {mag_2("CUP_10x_303_M")};
    backpack = "TACU_Revolutionaries_Backpack_LeeEnfield";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_I_Russian_Rifleman04.jpg);
};
class CUP_C_Datsun_4seat;
class TACU_Revolutionaries_V_I_Datsun_5Seat: CUP_C_Datsun_4seat { // Vehicles
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_I";
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_I_Cars_Russian";
    side = 2;
    displayName = "Datsun (5 Seats)";
    crew = "TACU_Revolutionaries_U_I_Russian_Rifleman04";
    editorPreview = QPATHTOF(ui\Revolutionaries_V_I_Datsun_5Seat.jpg);
};
class CUP_C_Golf4_black_Civ;
class TACU_Revolutionaries_V_I_Golf_Black: CUP_C_Golf4_black_Civ {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_I";
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_I_Cars_Russian";
    side = 2;
    displayName = "Golf (Black)";
    crew = "TACU_Revolutionaries_U_I_Russian_Rifleman04";
    editorPreview = QPATHTOF(ui\Revolutionaries_V_I_Golf_Black.jpg);
};
class CUP_C_Skoda_Blue_CIV;
class TACU_Revolutionaries_V_I_Skoda_Blue: CUP_C_Skoda_Blue_CIV {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_I";
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_I_Cars_Russian";
    side = 2;
    displayName = "Skoda (Blue)";
    crew = "TACU_Revolutionaries_U_I_Russian_Rifleman04";
    editorPreview = QPATHTOF(ui\Revolutionaries_V_I_Skoda_Blue.jpg);
};