class TACU_Revolutionaries_U_O_Russian_Base: TACU_Main_U_OPFOR_Soldier_Base { // Units - Revolutionaries (Russian)
    author = "Jack";
    displayName = "Rifleman (FAL)";
    faction = "TACU_Revolutionaries_O";
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
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_O_Russian";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_I_Russian_Base.jpg);
    headgearList[] = {};
    TACU_allowedFacewear[] = {
        "G_Balaclava_blk", 1
    };
};
class TACU_Revolutionaries_U_O_Russian_Rifleman01: TACU_Revolutionaries_U_O_Russian_Base { //Unit Specifics
    displayName = "Rifleman (MK14)"; 
    scope = 2;
    scopeCurator = 2;
    uniformClass = "CUP_U_C_Citizen_02";
    weapons[] = {"srifle_DMR_06_hunter_F"};
    respawnWeapons[] = {"srifle_DMR_06_hunter_F"};
    magazines[] = {mag_2("10Rnd_Mk14_762x51_Mag")};
    respawnMagazines[] = {mag_2("10Rnd_Mk14_762x51_Mag")};
    backpack = "TACU_Revolutionaries_Backpack_Mk14";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Rifleman01.jpg);
};
class TACU_Revolutionaries_U_O_Russian_Rifleman02: TACU_Revolutionaries_U_O_Russian_Base {
    displayName = "Shotgunner"; 
    scope = 2;
    scopeCurator = 2;
    uniformClass = "CUP_U_C_Citizen_03";
    weapons[] = {"sgun_HunterShotgun_01_F"};
    respawnWeapons[] = {"sgun_HunterShotgun_01_F"};
    magazines[] = {mag_4("2Rnd_12Gauge_Pellets")};
    respawnMagazines[] = {mag_4("2Rnd_12Gauge_Pellets")};
    backpack = "TACU_Revolutionaries_Backpack_Shotgun";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Rifleman02.jpg);
};
class TACU_Revolutionaries_U_O_Russian_Rifleman03: TACU_Revolutionaries_U_O_Russian_Base {
    displayName = "Submachine Gunner (MP5K)"; 
    scope = 2;
    scopeCurator = 2;
    uniformClass = "CUP_U_C_Citizen_04";
    weapons[] = {"TACU_Revolutionaries_Weapon_O_MP5K"};
    respawnWeapons[] = {"TACU_Revolutionaries_Weapon_O_MP5K"};
    magazines[] = {mag_2("30Rnd_9x21_Mag_SMG_02")};
    respawnMagazines[] = {mag_2("30Rnd_9x21_Mag_SMG_02")};
    backpack = "TACU_Revolutionaries_Backpack_MP5K";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Rifleman03.jpg);
};
class TACU_Revolutionaries_U_O_Russian_Rifleman04: TACU_Revolutionaries_U_O_Russian_Base {
    displayName = "Marksmen"; 
    scope = 2;
    scopeCurator = 2;
    uniformClass = "CUP_U_C_Woodlander_04";
    weapons[] = {"CUP_srifle_CZ550"};
    respawnWeapons[] = {"CUP_srifle_CZ550"};
    magazines[] = {mag_2("CUP_5x_22_LR_17_HMR_M")};
    respawnMagazines[] = {mag_2("CUP_5x_22_LR_17_HMR_M")};
    backpack = "TACU_Revolutionaries_Backpack_CZ550";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Rifleman04.jpg);
};
class TACU_Revolutionaries_U_O_Russian_Rifleman05: TACU_Revolutionaries_U_O_Russian_Base {
    displayName = "Rifleman (Lee Enfield)"; 
    scope = 2;
    scopeCurator = 2;
    uniformClass = "CUP_U_C_Woodlander_03";
    weapons[] = {"CUP_srifle_LeeEnfield"};
    respawnWeapons[] = {"CUP_srifle_LeeEnfield"};
    magazines[] = {mag_2("CUP_10x_303_M")};
    respawnMagazines[] = {mag_2("CUP_10x_303_M")};
    backpack = "TACU_Revolutionaries_Backpack_LeeEnfield";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Rifleman05.jpg);
};
class TACU_Revolutionaries_U_O_Russian_Rifleman06: TACU_Revolutionaries_U_O_Russian_Base {
    displayName = "Grenadier"; 
    scope = 2;
    scopeCurator = 2;
    uniformClass = "CUP_U_C_Woodlander_02";
    weapons[] = {"CUP_glaunch_M79"};
    respawnWeapons[] = {"CUP_glaunch_M79"};
    magazines[] = {mag_5("1Rnd_HE_Grenade_shell")};
    respawnMagazines[] = {mag_5("1Rnd_HE_Grenade_shell")};
    backpack = "TACU_Revolutionaries_Backpack_M79";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Rifleman06.jpg);
};
class TACU_Revolutionaries_U_O_Russian_Rifleman07: TACU_Revolutionaries_U_O_Russian_Base {
    displayName = "Submachine Gunner (Bizon)"; 
    scope = 2;
    scopeCurator = 2;
    uniformClass = "CUP_U_C_Woodlander_01";
    weapons[] = {"CUP_smg_bizon"};
    respawnWeapons[] = {"CUP_smg_bizon"};
    magazines[] = {mag_2("CUP_64Rnd_9x19_Bizon_M")};
    respawnMagazines[] = {mag_2("CUP_64Rnd_9x19_Bizon_M")};
    backpack = "TACU_Revolutionaries_Backpack_Bizon";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Rifleman07.jpg);
};
class TACU_Revolutionaries_U_O_Russian_Rifleman08: TACU_Revolutionaries_U_O_Russian_Base {
    displayName = "Machine Gunner (UK-59)"; 
    scope = 2;
    scopeCurator = 2;
    uniformClass = "CUP_U_C_Worker_02";
    weapons[] = {"CUP_lmg_UK59"};
    respawnWeapons[] = {"CUP_lmg_UK59"};
    magazines[] = {mag_2("CUP_50Rnd_UK59_762x54R_Tracer")};
    respawnMagazines[] = {mag_2("CUP_50Rnd_UK59_762x54R_Tracer")};
    backpack = "TACU_Revolutionaries_Backpack_UK59";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Rifleman08.jpg);
};
class TACU_Revolutionaries_U_O_Russian_Rifleman09: TACU_Revolutionaries_U_O_Russian_Base {
    displayName = "Machine Gunner (FN Minimi SPW)"; 
    scope = 2;
    scopeCurator = 2;
    uniformClass = "CUP_U_C_Worker_03";
    weapons[] = {"TACU_Revolutionaries_Weapon_O_FNMinimiSPW"};
    respawnWeapons[] = {"TACU_Revolutionaries_Weapon_O_FNMinimiSPW"};
    magazines[] = {"200Rnd_556x45_Box_F"};
    respawnMagazines[] = {"200Rnd_556x45_Box_F"};
    backpack = "TACU_Revolutionaries_Backpack_FNMinimiSPW";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Rifleman09.jpg);
};
class TACU_Revolutionaries_U_O_Russian_Rifleman10: TACU_Revolutionaries_U_O_Russian_Base {
    displayName = "Rifleman (CZ805 A2)"; 
    scope = 2;
    scopeCurator = 2;
    uniformClass = "U_O_R_Gorka_01_black_F";
    weapons[] = {"TACU_Revolutionaries_Weapon_O_CZ805A2"};
    respawnWeapons[] = {"TACU_Revolutionaries_Weapon_O_CZ805A2"};
    magazines[] = {mag_2("CUP_30Rnd_556x45_G36")};
    respawnMagazines[] = {mag_2("CUP_30Rnd_556x45_G36")};
    backpack = "TACU_Revolutionaries_Backpack_CZ805A2";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Russian_Rifleman10.jpg);
};

class CUP_C_Datsun_4seat; // Vehicles
class TACU_Revolutionaries_V_O_Datsun_5Seat: CUP_C_Datsun_4seat {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_O";
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_O_Cars_Russian";
    side = 0;
    displayName = "Datsun (5 Seats)";
    crew = "TACU_Revolutionaries_U_O_Russian_Rifleman05";
    editorPreview = QPATHTOF(ui\Revolutionaries_V_O_Datsun_5Seat.jpg);
};
class CUP_C_Golf4_black_Civ;
class TACU_Revolutionaries_V_O_Golf_Black: CUP_C_Golf4_black_Civ {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_O";
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_O_Cars_Russian";
    side = 0;
    displayName = "Golf (Black)";
    crew = "TACU_Revolutionaries_U_O_Russian_Rifleman05";
    editorPreview = QPATHTOF(ui\Revolutionaries_V_O_Golf_Black.jpg);
};
class CUP_C_Skoda_Blue_CIV;
class TACU_Revolutionaries_V_O_Skoda_Blue: CUP_C_Skoda_Blue_CIV {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_O";
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_O_Cars_Russian";
    side = 0;
    displayName = "Skoda (Blue)";
    crew = "TACU_Revolutionaries_U_O_Russian_Rifleman05";
    editorPreview = QPATHTOF(ui\Revolutionaries_V_O_Skoda_Blue.jpg);
};
class CUP_O_Datsun_PK;
class TACU_Revolutionaries_V_O_Fatsun_PK: CUP_O_Datsun_PK {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_O";
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_O_Cars_Russian";
    side = 0;
    displayName = "Fatsun (PK)";
    crew = "TACU_Revolutionaries_U_O_Russian_Rifleman05";
    typicalCargo[] = {"TACU_Revolutionaries_U_O_Russian_Rifleman03"};
    editorPreview = QPATHTOF(ui\Revolutionaries_V_O_Fatsun_PK.jpg);
};
class CUP_C_Ural_Civ_03;
class TACU_Revolutionaries_V_O_Ural01: CUP_C_Ural_Civ_03 {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_O";
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_O_Cars_Russian";
    side = 0;
    displayName = "Ural (Worker)";
    crew = "TACU_Revolutionaries_U_O_Russian_Rifleman05";
    editorPreview = QPATHTOF(ui\Revolutionaries_V_O_Ural01.jpg);
};