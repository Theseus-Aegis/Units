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
    magazines[] = {mag_5("CUP_20Rnd_762x51_FNFAL_M")};
    respawnMagazines[] = {mag_5("CUP_20Rnd_762x51_FNFAL_M")};
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
    magazines[] = {mag_5("10Rnd_Mk14_762x51_Mag")};
    respawnMagazines[] = {mag_5("10Rnd_Mk14_762x51_Mag")};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Tanoan_Rifleman02.jpg);
};

class TACU_Revolutionaries_U_O_Tanoan_Rifleman03: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Rifleman (Lee Enfield)";
    uniformClass = "U_C_MAN_casual_6_F";
    linkedItems[] = {DEFAULT_ITEMS, "V_Pocketed_black_F", "G_Balaclava_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "V_Pocketed_black_F", "G_Balaclava_blk"};
    weapons[] = {"CUP_srifle_LeeEnfield", "Throw", "Put"};
    respawnWeapons[] = {"CUP_srifle_LeeEnfield", "Throw", "Put"};
    magazines[] = {mag_5("CUP_10x_303_M")};
    respawnMagazines[] = {mag_5("CUP_10x_303_M")};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Tanoan_Rifleman03.jpg);
};

class TACU_Revolutionaries_U_O_Tanoan_Rifleman04: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Rifleman (CZ805 A2)";
    uniformClass = "U_C_Poloshirt_tricolour";
    weapons[] = {"TACU_Revolutionaries_W_CZ805A2", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Revolutionaries_W_CZ805A2", "Throw", "Put"};
    magazines[] = {mag_6("CUP_30Rnd_556x45_G36")};
    respawnMagazines[] = {mag_6("CUP_30Rnd_556x45_G36")};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Tanoan_Rifleman04.jpg);
};

class TACU_Revolutionaries_U_O_Tanoan_Shotgunner: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Shotgunner";
    uniformClass = "U_C_MAN_casual_3_F";
    linkedItems[] = {DEFAULT_ITEMS, "V_Pocketed_black_F", "G_Balaclava_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "V_Pocketed_black_F", "G_Balaclava_blk"};
    weapons[] = {"sgun_HunterShotgun_01_F", "Throw", "Put"};
    respawnWeapons[] = {"sgun_HunterShotgun_01_F", "Throw", "Put"};
    magazines[] = {mag_12("2Rnd_12Gauge_Pellets")};
    respawnMagazines[] = {mag_12("2Rnd_12Gauge_Pellets")};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Tanoan_Shotgunner.jpg);
};

class TACU_Revolutionaries_U_O_Tanoan_Marksman: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Marksman";
    uniformClass = "U_C_MAN_casual_5_F";
    linkedItems[] = {DEFAULT_ITEMS, "V_Pocketed_black_F", "G_Balaclava_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "V_Pocketed_black_F", "G_Balaclava_blk"};
    weapons[] = {"CUP_srifle_CZ550", "Throw", "Put"};
    respawnWeapons[] = {"CUP_srifle_CZ550", "Throw", "Put"};
    magazines[] = {mag_4("CUP_5x_22_LR_17_HMR_M")};
    respawnMagazines[] = {mag_4("CUP_5x_22_LR_17_HMR_M")};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Tanoan_Marksman.jpg);
};

class TACU_Revolutionaries_U_O_Tanoan_SMG01: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Submachine Gunner (MP5K)";
    uniformClass = "U_C_MAN_casual_4_F";
    weapons[] = {"TACU_Revolutionaries_W_MP5K", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Revolutionaries_W_MP5K", "Throw", "Put"};
    magazines[] = {mag_6("30Rnd_9x21_Mag_SMG_02")};
    respawnMagazines[] = {mag_6("30Rnd_9x21_Mag_SMG_02")};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Tanoan_SMG01.jpg);
};

class TACU_Revolutionaries_U_O_Tanoan_SMG02: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Submachine Gunner (Bizon)";
    uniformClass = "U_C_Poloshirt_burgundy";
    weapons[] = {"CUP_smg_bizon", "Throw", "Put"};
    respawnWeapons[] = {"CUP_smg_bizon", "Throw", "Put"};
    magazines[] = {mag_4("CUP_64Rnd_9x19_Bizon_M")};
    respawnMagazines[] = {mag_4("CUP_64Rnd_9x19_Bizon_M")};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Tanoan_SMG02.jpg);
};

class TACU_Revolutionaries_U_O_Tanoan_Grenadier: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Grenadier";
    uniformClass = "U_C_Poloshirt_blue";
    linkedItems[] = {DEFAULT_ITEMS, "V_Pocketed_black_F", "G_Balaclava_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "V_Pocketed_black_F", "G_Balaclava_blk"};
    weapons[] = {"CUP_glaunch_M79", "CUP_hgun_Glock17_blk", "Throw", "Put"};
    respawnWeapons[] = {"CUP_glaunch_M79", "CUP_hgun_Glock17_blk", "Throw", "Put"};
    magazines[] = {mag_8("1Rnd_HE_Grenade_shell"), mag_6("CUP_17Rnd_9x19_glock17")};
    respawnMagazines[] = {mag_8("1Rnd_HE_Grenade_shell"), mag_6("CUP_17Rnd_9x19_glock17")};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Tanoan_Grenadier.jpg);
};

class TACU_Revolutionaries_U_O_Tanoan_Machinegunner: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Machinegunner";
    uniformClass = "U_C_Poloshirt_redwhite";
    linkedItems[] = {DEFAULT_ITEMS, "V_Pocketed_black_F", "G_Balaclava_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "V_Pocketed_black_F", "G_Balaclava_blk"};
    backpack = "TACU_Revolutionaries_B_MMG_UK59_Green";
    weapons[] = {"CUP_lmg_UK59", "Throw", "Put"};
    respawnWeapons[] = {"CUP_lmg_UK59", "Throw", "Put"};
    magazines[] = {mag_2("CUP_50Rnd_UK59_762x54R_Tracer")};
    respawnMagazines[] = {mag_2("CUP_50Rnd_UK59_762x54R_Tracer")};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Tanoan_Machinegunner.jpg);
};

class TACU_Revolutionaries_U_O_Tanoan_Autorifleman: TACU_Revolutionaries_U_O_Tanoan_Rifleman01 {
    displayName = "Autorifleman";
    uniformClass = "U_C_Poloshirt_salmon";
    linkedItems[] = {DEFAULT_ITEMS, "V_Pocketed_black_F", "G_Balaclava_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "V_Pocketed_black_F", "G_Balaclava_blk"};
    backpack = "TACU_Revolutionaries_B_LMG_Minimi_Green";
    weapons[] = {"TACU_Revolutionaries_W_FNMinimiSPW", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Revolutionaries_W_FNMinimiSPW", "Throw", "Put"};
    magazines[] = {"200Rnd_556x45_Box_F"};
    respawnMagazines[] = {"200Rnd_556x45_Box_F"};
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Tanoan_Autorifleman.jpg);
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
    crew = "TACU_Revolutionaries_U_O_Tanoan_Rifleman03";
    typicalCargo[] = {"TACU_Revolutionaries_U_O_Tanoan_Rifleman03"};
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
    crew = "TACU_Revolutionaries_U_O_Tanoan_Rifleman03";
    typicalCargo[] = {"TACU_Revolutionaries_U_O_Tanoan_Rifleman03"};
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
    crew = "TACU_Revolutionaries_U_O_Tanoan_Rifleman03";
    typicalCargo[] = {"TACU_Revolutionaries_U_O_Tanoan_Rifleman03"};
    editorPreview = QPATHTOF(ui\Revolutionaries_V_O_Offroad.jpg);
};

class I_C_Offroad_02_LMG_F;
class TACU_Revolutionaries_V_O_Jeep_LMG: I_C_Offroad_02_LMG_F {
    dlc = QUOTE(PREFIX);
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_O";
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_Cars_Tanoa";
    side = 0;
    displayName = "Jeep (LMG)";
    crew = "TACU_Revolutionaries_U_O_Tanoan_Rifleman03";
    typicalCargo[] = {"TACU_Revolutionaries_U_O_Tanoan_Rifleman03"};
    editorPreview = QPATHTOF(ui\Revolutionaries_V_O_Jeep_LMG.jpg);
};
