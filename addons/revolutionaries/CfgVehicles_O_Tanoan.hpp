class TACU_Revolutionaries_U_O_Tanoan_Base: TACU_Main_U_OPFOR_Soldier_Base {
    author = "Jack";
    displayName = "Rifleman (FAL)";
    faction = "TACU_Revolutionaries_O";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageFRE_F", "Head_Tanoan", "G_Balaclava_blk"};
    genericNames = "TanoanMen";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "U_C_MAN_casual_1_F";
    backpack = "TACU_Revolutionaries_Backpack_FNFAL";
    linkedItems[] = {"ItemWatch","ItemCompass","ItemMap"};
    respawnLinkedItems[] = {"ItemWatch", "ItemCompass", "ItemMap"};
    Items[] = {mag_5("ACE_fieldDressing"), "ACE_EarPlugs"};
    respawnItems[] = {mag_5("ACE_fieldDressing"), "ACE_EarPlugs"};
    weapons[] = {"CUP_arifle_FNFAL"};
    respawnWeapons[] = {"CUP_arifle_FNFAL"};
    magazines[] = {mag_2("CUP_20Rnd_762x51_FNFAL_M")};
    respawnMagazines[] = {mag_2("CUP_20Rnd_762x51_FNFAL_M")};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_O_Tanoan";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Tanoan_Base.jpg);
    headgearList[] = {};
    TACU_allowedFacewear[] = {
        "G_Balaclava_blk", 1
    };
};
class TACU_Revolutionaries_U_O_Tanoan_Rifleman01: TACU_Revolutionaries_U_O_Tanoan_Base { 
    displayName = "Rifleman (MK14)"; 
    scope = 2;
    scopeCurator = 2;
    uniformClass = "U_C_MAN_casual_2_F";
    weapons[] = {"srifle_DMR_06_hunter_F"};
    respawnWeapons[] = {"srifle_DMR_06_hunter_F"};
    magazines[] = {mag_2("10Rnd_Mk14_762x51_Mag")};
    respawnMagazines[] = {mag_2("10Rnd_Mk14_762x51_Mag")};
    backpack = "TACU_Revolutionaries_Backpack_Mk14";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Tanoan_Rifleman01.jpg);
};
class TACU_Revolutionaries_U_O_Tanoan_Rifleman02: TACU_Revolutionaries_U_O_Tanoan_Base {
    displayName = "Shotgunner"; 
    scope = 2;
    scopeCurator = 2;
    uniformClass = "U_C_MAN_casual_3_F";
    weapons[] = {"sgun_HunterShotgun_01_F"};
    respawnWeapons[] = {"sgun_HunterShotgun_01_F"};
    magazines[] = {mag_4("2Rnd_12Gauge_Pellets")};
    respawnMagazines[] = {mag_4("2Rnd_12Gauge_Pellets")};
    backpack = "TACU_Revolutionaries_Backpack_Shotgun";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Tanoan_Rifleman02.jpg);
};
class TACU_Revolutionaries_U_O_Tanoan_Rifleman03: TACU_Revolutionaries_U_O_Tanoan_Base {
    displayName = "Submachine Gunner (MP5K)"; 
    scope = 2;
    scopeCurator = 2;
    uniformClass = "U_C_MAN_casual_4_F";
    weapons[] = {"TACU_Revolutionaries_Weapon_O_MP5K"};
    respawnWeapons[] = {"TACU_Revolutionaries_Weapon_O_MP5K"};
    magazines[] = {mag_2("30Rnd_9x21_Mag_SMG_02")};
    respawnMagazines[] = {mag_2("30Rnd_9x21_Mag_SMG_02")};
    backpack = "TACU_Revolutionaries_Backpack_MP5K";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Tanoan_Rifleman03.jpg);
};
class TACU_Revolutionaries_U_O_Tanoan_Rifleman04: TACU_Revolutionaries_U_O_Tanoan_Base {
    displayName = "Marksman"; 
    scope = 2;
    scopeCurator = 2;
    uniformClass = "U_C_MAN_casual_5_F";
    weapons[] = {"CUP_srifle_CZ550"};
    respawnWeapons[] = {"CUP_srifle_CZ550"};
    magazines[] = {mag_2("CUP_5x_22_LR_17_HMR_M")};
    respawnMagazines[] = {mag_2("CUP_5x_22_LR_17_HMR_M")};
    backpack = "TACU_Revolutionaries_Backpack_CZ550";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Tanoan_Rifleman04.jpg);
};
class TACU_Revolutionaries_U_O_Tanoan_Rifleman05: TACU_Revolutionaries_U_O_Tanoan_Base {
    displayName = "Rifleman (Lee Enfield)"; 
    scope = 2;
    scopeCurator = 2;
    uniformClass = "U_C_MAN_casual_6_F";
    weapons[] = {"CUP_srifle_LeeEnfield"};
    respawnWeapons[] = {"CUP_srifle_LeeEnfield"};
    magazines[] = {mag_2("CUP_10x_303_M")};
    respawnMagazines[] = {mag_2("CUP_10x_303_M")};
    backpack = "TACU_Revolutionaries_Backpack_LeeEnfield";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Tanoan_Rifleman05.jpg);
};
class TACU_Revolutionaries_U_O_Tanoan_Rifleman06: TACU_Revolutionaries_U_O_Tanoan_Base {
    displayName = "Grenadier"; 
    scope = 2;
    scopeCurator = 2;
    uniformClass = "U_C_Poloshirt_blue";
    weapons[] = {"CUP_glaunch_M79"};
    respawnWeapons[] = {"CUP_glaunch_M79"};
    magazines[] = {mag_5("1Rnd_HE_Grenade_shell")};
    respawnMagazines[] = {mag_5("1Rnd_HE_Grenade_shell")};
    backpack = "TACU_Revolutionaries_Backpack_M79";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Tanoan_Rifleman06.jpg);
};
class TACU_Revolutionaries_U_O_Tanoan_Rifleman07: TACU_Revolutionaries_U_O_Tanoan_Base {
    displayName = "Submachine Gunner (Bizon)"; 
    scope = 2;
    scopeCurator = 2;
    uniformClass = "U_C_Poloshirt_burgundy";
    weapons[] = {"CUP_smg_bizon"};
    respawnWeapons[] = {"CUP_smg_bizon"};
    magazines[] = {mag_2("CUP_64Rnd_9x19_Bizon_M")};
    respawnMagazines[] = {mag_2("CUP_64Rnd_9x19_Bizon_M")};
    backpack = "TACU_Revolutionaries_Backpack_Bizon";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Tanoan_Rifleman07.jpg);
};
class TACU_Revolutionaries_U_O_Tanoan_Rifleman08: TACU_Revolutionaries_U_O_Tanoan_Base {
    displayName = "Machine Gunner (UK-59)"; 
    scope = 2;
    scopeCurator = 2;
    uniformClass = "U_C_Poloshirt_redwhite";
    weapons[] = {"CUP_lmg_UK59"};
    respawnWeapons[] = {"CUP_lmg_UK59"};
    magazines[] = {mag_2("CUP_50Rnd_UK59_762x54R_Tracer")};
    respawnMagazines[] = {mag_2("CUP_50Rnd_UK59_762x54R_Tracer")};
    backpack = "TACU_Revolutionaries_Backpack_UK59";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Tanoan_Rifleman08.jpg);
};
class TACU_Revolutionaries_U_O_Tanoan_Rifleman09: TACU_Revolutionaries_U_O_Tanoan_Base {
    displayName = "Machine Gunner (FN Minimi SPW)"; 
    scope = 2;
    scopeCurator = 2;
    uniformClass = "U_C_Poloshirt_salmon";
    weapons[] = {"TACU_Revolutionaries_Weapon_O_FNMinimiSPW"};
    respawnWeapons[] = {"TACU_Revolutionaries_Weapon_O_FNMinimiSPW"};
    magazines[] = {"200Rnd_556x45_Box_F"};
    respawnMagazines[] = {"200Rnd_556x45_Box_F"};
    backpack = "TACU_Revolutionaries_Backpack_FNMinimiSPW";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Tanoan_Rifleman09.jpg);
};
class TACU_Revolutionaries_U_O_Tanoan_Rifleman10: TACU_Revolutionaries_U_O_Tanoan_Base {
    displayName = "Rifleman (CZ805 A2)"; 
    scope = 2;
    scopeCurator = 2;
    uniformClass = "U_C_Poloshirt_tricolour";
    weapons[] = {"TACU_Revolutionaries_Weapon_O_CZ805A2"};
    respawnWeapons[] = {"TACU_Revolutionaries_Weapon_O_CZ805A2"};
    magazines[] = {mag_2("CUP_30Rnd_556x45_G36")};
    respawnMagazines[] = {mag_2("CUP_30Rnd_556x45_G36")};
    backpack = "TACU_Revolutionaries_Backpack_CZ805A2";
    editorPreview = QPATHTOF(ui\Revolutionaries_U_O_Tanoan_Rifleman10.jpg);
};

class C_Hatchback_01_F; // Vehicles
class TACU_Revolutionaries_V_O_Hatchback01: C_Hatchback_01_F { 
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_O";
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_O_Cars_Tanoa";
    side = 0;
    displayName = "Hatchback";
    crew = "TACU_Revolutionaries_U_O_Tanoan_Rifleman05";
    editorPreview = QPATHTOF(ui\Revolutionaries_V_O_Hatchback01.jpg);
};
class C_Truck_02_transport_F;
class TACU_Revolutionaries_V_O_Transport01: C_Truck_02_transport_F {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_O";
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_O_Cars_Tanoa";
    side = 0;
    displayName = "KamAZ Transport";
    crew = "TACU_Revolutionaries_U_O_Tanoan_Rifleman05";
    editorPreview = QPATHTOF(ui\Revolutionaries_V_O_Transport01.jpg);
};
class C_Offroad_01_covered_F;
class TACU_Revolutionaries_V_O_OffroadC01: C_Offroad_01_covered_F {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_O";
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_O_Cars_Tanoa";
    side = 0;
    displayName = "Offroad";
    crew = "TACU_Revolutionaries_U_O_Tanoan_Rifleman05";
    editorPreview = QPATHTOF(ui\Revolutionaries_V_O_OffroadC01.jpg);
};
class I_C_Offroad_02_LMG_F;
class TACU_Revolutionaries_V_O_Jeep_LMG: I_C_Offroad_02_LMG_F {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_O";
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_O_Cars_Tanoa";
    side = 0;
    displayName = "Jeep (LMG)";
    crew = "TACU_Revolutionaries_U_O_Tanoan_Rifleman05";
    typicalCargo[] = {"TACU_Revolutionaries_U_O_Tanoan_Rifleman03"};
    editorPreview = QPATHTOF(ui\Revolutionaries_V_O_Jeep_LMG.jpg);
};