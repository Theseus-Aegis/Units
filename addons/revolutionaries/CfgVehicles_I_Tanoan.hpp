// Civil Defense
class TACU_Main_U_INDEP_Soldier_Base;
class TACU_Revolutionaries_U_I_Tanoan_Rifleman01: TACU_Main_U_INDEP_Soldier_Base {
    dlc = QUOTE(PREFIX);
    author = "Jack";
    displayName = "Rifleman (FAL)";
    faction = "TACU_Revolutionaries_I";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageFRE_F", "Head_Tanoan", "NoGlasses"};
    genericNames = "TanoanMen";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "U_C_MAN_casual_1_F";
    backpack = "B_FieldPack_green_F";
    linkedItems[] = {DEFAULT_ITEMS, "V_LegStrapBag_black_F"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "V_LegStrapBag_black_F"};
    Items[] = {mag_5("ACE_fieldDressing")};
    respawnItems[] = {mag_5("ACE_fieldDressing")};
    weapons[] = {"CUP_arifle_FNFAL", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_FNFAL", "Throw", "Put"};
    magazines[] = {mag_5("CUP_20Rnd_762x51_FNFAL_M")};
    respawnMagazines[] = {mag_5("CUP_20Rnd_762x51_FNFAL_M")};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_Tanoan";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_I_Tanoan_Rifleman01.jpg);
    headgearList[] = {
        "", 1
    };
    TACU_allowedFacewear[] = {
        "None", 1
    };
};

class TACU_Revolutionaries_U_I_Tanoan_Rifleman02: TACU_Revolutionaries_U_I_Tanoan_Rifleman01 {
    displayName = "Rifleman (MK14)";
    uniformClass = "U_C_MAN_casual_2_F";
    weapons[] = {"srifle_DMR_06_hunter_F", "Throw", "Put"};
    respawnWeapons[] = {"srifle_DMR_06_hunter_F", "Throw", "Put"};
    magazines[] = {mag_5("10Rnd_Mk14_762x51_Mag")};
    respawnMagazines[] = {mag_5("10Rnd_Mk14_762x51_Mag")};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_I_Tanoan_Rifleman02.jpg);
};

class TACU_Revolutionaries_U_I_Tanoan_Rifleman03: TACU_Revolutionaries_U_I_Tanoan_Rifleman01 {
    displayName = "Rifleman (Lee Enfield)";
    uniformClass = "U_C_MAN_casual_6_F";
    weapons[] = {"CUP_srifle_LeeEnfield", "Throw", "Put"};
    respawnWeapons[] = {"CUP_srifle_LeeEnfield", "Throw", "Put"};
    magazines[] = {mag_5("CUP_10x_303_M")};
    respawnMagazines[] = {mag_5("CUP_10x_303_M")};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_I_Tanoan_Rifleman03.jpg);
};

class TACU_Revolutionaries_U_I_Tanoan_Shotgunner: TACU_Revolutionaries_U_I_Tanoan_Rifleman01 {
    displayName = "Shotgunner";
    uniformClass = "U_C_MAN_casual_3_F";
    weapons[] = {"sgun_HunterShotgun_01_F", "Throw", "Put"};
    respawnWeapons[] = {"sgun_HunterShotgun_01_F", "Throw", "Put"};
    magazines[] = {mag_12("2Rnd_12Gauge_Pellets")};
    respawnMagazines[] = {mag_12("2Rnd_12Gauge_Pellets")};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_I_Tanoan_Shotgunner.jpg);
};

class TACU_Revolutionaries_U_I_Tanoan_Marksman: TACU_Revolutionaries_U_I_Tanoan_Rifleman01 {
    displayName = "Marksman";
    uniformClass = "U_C_MAN_casual_5_F";
    weapons[] = {"CUP_srifle_CZ550", "Throw", "Put"};
    respawnWeapons[] = {"CUP_srifle_CZ550", "Throw", "Put"};
    magazines[] = {mag_4("CUP_5x_22_LR_17_HMR_M")};
    respawnMagazines[] = {mag_4("CUP_5x_22_LR_17_HMR_M")};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_I_Tanoan_Marksman.jpg);
};

// Vehicles
class C_Offroad_01_F;
class TACU_Revolutionaries_V_I_Offroad: C_Offroad_01_F {
    dlc = QUOTE(PREFIX);
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_I";
    side = 2;
    displayName = "Offroad";
    crew = "TACU_Revolutionaries_U_I_Tanoan_Rifleman03";
    typicalCargo[] = {"TACU_Revolutionaries_U_I_Tanoan_Rifleman03"};
    editorPreview = QPATHTOF(ui\Revolutionaries_V_I_Offroad.jpg);
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_Cars_Tanoa";
};

class C_Hatchback_01_F;
class TACU_Revolutionaries_V_I_Hatchback: C_Hatchback_01_F {
    dlc = QUOTE(PREFIX);
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_I";
    side = 2;
    displayName = "Hatchback";
    crew = "TACU_Revolutionaries_U_I_Tanoan_Rifleman03";
    typicalCargo[] = {"TACU_Revolutionaries_U_I_Tanoan_Rifleman03"};
    editorPreview = QPATHTOF(ui\Revolutionaries_V_I_Hatchback.jpg);
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_Cars_Tanoa";
};
