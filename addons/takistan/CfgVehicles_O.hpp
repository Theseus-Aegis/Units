// Units - Tehrik-i-Taliban Takistan, Veterans.
class TACU_Talib_U_O_V_Leader: TACU_Main_U_OPFOR_Soldier_Base {
    author = "TyroneMF";
    displayName = "Veteran Leader";
    faction = "TACU_Tehrik_Taliban_O";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguagePER_F", "Head_TK", "NoGlasses"};
    genericNames = "TakistaniMen";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "CUP_O_TKI_Khet_Partug_04";
    backpack = "";
    editorPreview = QPATHTOF(ui\Talib_U_O_V_Leader.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket2_06", "CUP_H_TK_Lungee"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket2_06", "CUP_H_TK_Lungee"};
    weapons[] = {"CUP_arifle_AK47", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AK47", "Throw", "Put"};
    magazines[] = {mag_10("CUP_30Rnd_762x39_AK47_M"), mag_5("CUP_HandGrenade_RGD5")};
    respawnMagazines[] = {mag_10("CUP_30Rnd_762x39_AK47_M"), mag_5("CUP_HandGrenade_RGD5")};
    editorSubcategory = "TACU_Tehrik_EdSubCat_O_Veteran";
};

class TACU_Talib_U_O_V_Rifleman: TACU_Talib_U_O_V_Leader {
    displayName = "Veteran Rifleman";
    editorPreview = QPATHTOF(ui\Talib_U_O_V_Rifleman.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket4_05", "CUP_H_TKI_Lungee_05"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket4_05", "CUP_H_TKI_Lungee_05"};
    weapons[] = {"CUP_arifle_AK47", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AK47", "Throw", "Put"};
    magazines[] = {mag_10("CUP_30Rnd_762x39_AK47_M"), mag_5("CUP_HandGrenade_RGD5")};
    respawnMagazines[] = {mag_10("CUP_30Rnd_762x39_AK47_M"), mag_5("CUP_HandGrenade_RGD5")};
};

class TACU_Talib_U_O_V_Rifleman2: TACU_Talib_U_O_V_Rifleman {
    displayName = "Veteran Rifleman 2";
    editorPreview = QPATHTOF(ui\Talib_U_O_V_Rifleman2.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket2_03", "CUP_H_TKI_Lungee_03"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket2_03", "CUP_H_TKI_Lungee_03"};
    weapons[] = {"CUP_arifle_AKMS", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AKMS", "Throw", "Put"};
    magazines[] = {mag_10("CUP_30Rnd_762x39_AK47_bakelite_M"), mag_5("CUP_HandGrenade_RGD5")};
    respawnMagazines[] = {mag_10("CUP_30Rnd_762x39_AK47_bakelite_M"), mag_5("CUP_HandGrenade_RGD5")};
};

class TACU_Talib_U_O_V_Grenadier: TACU_Talib_U_O_V_Rifleman2 {
    displayName = "Veteran Grenadier";
    editorPreview = QPATHTOF(ui\Talib_U_O_V_Grenadier.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket2_01", "CUP_H_TKI_Lungee_06"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket2_01", "CUP_H_TKI_Lungee_06"};
    weapons[] = {"CUP_arifle_AKM_GL_Early", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AKM_GL_Early", "Throw", "Put"};
    magazines[] = {mag_10("CUP_30Rnd_762x39_AK47_bakelite_M"), mag_10("CUP_1Rnd_HE_GP25_M")};
    respawnMagazines[] = {mag_10("CUP_30Rnd_762x39_AK47_bakelite_M"), mag_10("CUP_1Rnd_HE_GP25_M")};
};

class TACU_Talib_U_O_V_LMG: TACU_Talib_U_O_V_Grenadier {
    displayName = "Veteran Machine-Gunner";
    editorPreview = QPATHTOF(ui\Talib_U_O_V_LMG.jpg);
    backpack = "CUP_B_AlicePack_Khaki";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket1_03", "CUP_H_TKI_Lungee_03"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket1_03", "CUP_H_TKI_Lungee_03"};
    weapons[] = {"CUP_lmg_PKM", "Throw", "Put"};
    respawnWeapons[] = {"CUP_lmg_PKM", "Throw", "Put"};
    magazines[] = {mag_5("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M")};
    respawnMagazines[] = {mag_5("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M")};
};

class TACU_Talib_U_O_V_RPG: TACU_Talib_U_O_V_Grenadier {
    displayName = "Veteran AT";
    editorPreview = QPATHTOF(ui\Talib_U_O_V_RPG.jpg);
    backpack = "TACU_Tehrik_B_RPG_Khaki";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket3_02", "CUP_H_TKI_Lungee_03"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket3_02", "CUP_H_TKI_Lungee_03"};
    weapons[] = {"CUP_arifle_AKS", "launch_RPG7_F", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AKS", "launch_RPG7_F", "Throw", "Put"};
    magazines[] = {mag_5("CUP_30Rnd_762x39_AK47_M")};
    respawnMagazines[] = {mag_5("CUP_30Rnd_762x39_AK47_M")};
};

// Units - Tehrik-i-Taliban Takistan, Enlisted.
class TACU_Talib_U_O_E_Squadleader: TACU_Talib_U_O_V_Leader {
    displayName = "Squad Leader";
    editorPreview = QPATHTOF(ui\Talib_U_O_E_Squadleader.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket4_03", "CUP_H_TKI_Lungee_Open_01"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket4_03", "CUP_H_TKI_Lungee_Open_01"};
    weapons[] = {"CUP_arifle_AKS74U", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AKS74U", "Throw", "Put"};
    magazines[] = {mag_10("CUP_30Rnd_545x39_AK74_plum_M")};
    respawnMagazines[] = {mag_10("CUP_30Rnd_545x39_AK74_plum_M")};
    editorSubcategory = "TACU_Tehrik_EdSubCat_O_Enlisted";
};

class TACU_Talib_U_O_E_Rifleman1: TACU_Talib_U_O_E_Squadleader {
    displayName = "Rifleman";
    editorPreview = QPATHTOF(ui\Talib_U_O_E_Rifleman1.jpg);
    uniformClass = "CUP_O_TKI_Khet_Partug_07";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket5_05", "CUP_H_TKI_SkullCap_04"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket5_05", "CUP_H_TKI_SkullCap_04"};
    weapons[] = {"CUP_arifle_AK74_Early", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AK74_Early", "Throw", "Put"};
    magazines[] = {mag_10("CUP_30Rnd_545x39_AK_M")};
    respawnMagazines[] = {mag_10("CUP_30Rnd_545x39_AK_M")};
};

class TACU_Talib_U_O_E_Rifleman2: TACU_Talib_U_O_E_Rifleman1 {
    displayName = "Rifleman 2";
    editorPreview = QPATHTOF(ui\Talib_U_O_E_Rifleman2.jpg);
    uniformClass = "CUP_O_TKI_Khet_Partug_02";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket1_04", "CUP_H_TKI_Pakol_1_06"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket1_04", "CUP_H_TKI_Pakol_1_06"};
    weapons[] = {"CUP_arifle_AKMS", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AKMS", "Throw", "Put"};
    magazines[] = {mag_10("CUP_30Rnd_762x39_AK47_bakelite_M")};
    respawnMagazines[] = {mag_10("CUP_30Rnd_762x39_AK47_bakelite_M")};
};

class TACU_Talib_U_O_E_Rifleman3: TACU_Talib_U_O_E_Rifleman2 {
    displayName = "Rifleman 3";
    editorPreview = QPATHTOF(ui\Talib_U_O_E_Rifleman3.jpg);
    uniformClass = "CUP_O_TKI_Khet_Partug_01";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket3_06", "CUP_H_TKI_Lungee_Open_04"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket3_06", "CUP_H_TKI_Lungee_Open_04"};
};

class TACU_Talib_U_O_E_Rifleman4: TACU_Talib_U_O_E_Rifleman3 {
    displayName = "Rifleman 4";
    editorPreview = QPATHTOF(ui\Talib_U_O_E_Rifleman4.jpg);
    uniformClass = "CUP_O_TKI_Khet_Partug_08";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket4_05", "CUP_H_TKI_SkullCap_06"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket4_05", "CUP_H_TKI_SkullCap_06"};
};

class TACU_Talib_U_O_E_LMG: TACU_Talib_U_O_E_Rifleman4 {
    displayName = "Machine-Gunner";
    editorPreview = QPATHTOF(ui\Talib_U_O_E_LMG.jpg);
    uniformClass = "CUP_O_TKI_Khet_Partug_06";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket4_06", "CUP_H_TKI_Lungee_06"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket4_06", "CUP_H_TKI_Lungee_06"};
    weapons[] = {"CUP_arifle_RPK74", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_RPK74", "Throw", "Put"};
    magazines[] = {mag_3("CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M")};
    respawnMagazines[] = {mag_3("CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M")};
};

class TACU_Talib_U_O_E_RPG: TACU_Talib_U_O_V_RPG {
    displayName = "Rifleman AT";
    editorPreview = QPATHTOF(ui\Talib_U_O_E_RPG.jpg);
    uniformClass = "CUP_O_TKI_Khet_Partug_03";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket2_04", "CUP_H_TKI_Lungee_04"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket2_04", "CUP_H_TKI_Lungee_04"};
    weapons[] = {"CUP_arifle_AKS74U", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AKS74U", "Throw", "Put"};
    magazines[] = {mag_5("CUP_30Rnd_545x39_AK74_plum_M")};
    respawnMagazines[] = {mag_5("CUP_30Rnd_545x39_AK74_plum_M")};
    editorSubcategory = "TACU_Tehrik_EdSubCat_O_Enlisted";
};

// Vehicles - Tehrik
class CUP_C_Lada_TK2_CIV;
class TACU_Talib_V_O_Lada: CUP_C_Lada_TK2_CIV {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Tehrik_Taliban_O";
    side = 0;
    displayName = "Lada";
    crew = "TACU_Talib_U_O_E_Rifleman1";
    typicalCargo[] = {"TACU_Talib_U_O_E_Rifleman1"};
    editorPreview = QPATHTOF(ui\Talib_V_O_Lada.jpg);
};

class CUP_C_Lada_GreenTK_CIV;
class TACU_Talib_V_O_Lada_GreenTK: CUP_C_Lada_GreenTK_CIV {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Tehrik_Taliban_O";
    side = 0;
    displayName = "Lada Green";
    crew = "TACU_Talib_U_O_E_Rifleman1";
    typicalCargo[] = {"TACU_Talib_U_O_E_Rifleman1"};
    editorPreview = QPATHTOF(ui\Talib_V_O_Lada_GreenTK.jpg);
};

class CUP_O_V3S_Open_TKA;
class TACU_Talib_V_O_V3S_Open: CUP_O_V3S_Open_TKA {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Tehrik_Taliban_O";
    side = 0;
    displayName = "V3S Open";
    crew = "TACU_Talib_U_O_E_Rifleman1";
    typicalCargo[] = {"TACU_Talib_U_O_E_Rifleman1"};
    editorPreview = QPATHTOF(ui\Talib_V_O_V3S_Open.jpg);
};

class CUP_C_S1203_CIV;
class TACU_Talib_V_O_S1203: CUP_C_S1203_CIV {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Tehrik_Taliban_O";
    side = 0;
    displayName = "Skoda S1203";
    crew = "TACU_Talib_U_O_E_Rifleman1";
    typicalCargo[] = {"TACU_Talib_U_O_E_Rifleman1"};
    editorPreview = QPATHTOF(ui\Talib_V_O_S1203.jpg);
};

class CUP_C_Volha_Blue_TKCIV;
class TACU_Talib_V_O_Volha_Blue: CUP_C_Volha_Blue_TKCIV {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Tehrik_Taliban_O";
    side = 0;
    displayName = "Volha Blue";
    crew = "TACU_Talib_U_O_E_Rifleman1";
    typicalCargo[] = {"TACU_Talib_U_O_E_Rifleman1"};
    editorPreview = QPATHTOF(ui\Talib_V_O_Volha_Blue.jpg);
};
