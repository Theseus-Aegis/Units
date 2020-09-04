// Units - Tehrik-i-Taliban Takistan, Veterans.
class TACU_Takistan_U_Tehrik_Leader: TACU_Main_U_OPFOR_Soldier_Base {
    author = "TyroneMF";
    displayName = "Leader";
    faction = "TACU_Takistan_Tehrik";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguagePER_F", "Head_TK", "NoGlasses"};
    genericNames = "TakistaniMen";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "CUP_O_TKI_Khet_Partug_04";
    backpack = "";
    editorPreview = QPATHTOF(ui\Takistan_U_Tehrik_Leader.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket2_06", "CUP_H_TK_Lungee"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket2_06", "CUP_H_TK_Lungee"};
    weapons[] = {"CUP_arifle_AK47", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AK47", "Throw", "Put"};
    magazines[] = {mag_6("tacgt_30Rnd_762x39_BP_Mag"), mag_5("CUP_HandGrenade_RGD5")};
    respawnMagazines[] = {mag_6("tacgt_30Rnd_762x39_BP_Mag"), mag_5("CUP_HandGrenade_RGD5")};
    editorSubcategory = "TACU_Takistan_EdSubCat_Veteran";
};

class TACU_Takistan_U_Tehrik_Rifleman: TACU_Takistan_U_Tehrik_Leader {
    displayName = "Rifleman";
    editorPreview = QPATHTOF(ui\Takistan_U_Tehrik_Rifleman.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket4_05", "CUP_H_TKI_Lungee_05"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket4_05", "CUP_H_TKI_Lungee_05"};
    weapons[] = {"CUP_arifle_AK47", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AK47", "Throw", "Put"};
    magazines[] = {mag_6("tacgt_30Rnd_762x39_BP_Mag"), mag_5("CUP_HandGrenade_RGD5")};
    respawnMagazines[] = {mag_6("tacgt_30Rnd_762x39_BP_Mag"), mag_5("CUP_HandGrenade_RGD5")};
};

class TACU_Takistan_U_Tehrik_Rifleman_02: TACU_Takistan_U_Tehrik_Rifleman {
    displayName = "Rifleman 2";
    editorPreview = QPATHTOF(ui\Takistan_U_Tehrik_Rifleman_02.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket2_03", "CUP_H_TKI_Lungee_03"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket2_03", "CUP_H_TKI_Lungee_03"};
    weapons[] = {"CUP_arifle_AKMS", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AKMS", "Throw", "Put"};
    magazines[] = {mag_6("tacgt_30Rnd_762x39_BP_Mag"), mag_5("CUP_HandGrenade_RGD5")};
    respawnMagazines[] = {mag_6("tacgt_30Rnd_762x39_BP_Mag"), mag_5("CUP_HandGrenade_RGD5")};
};

class TACU_Takistan_U_Tehrik_Grenadier: TACU_Takistan_U_Tehrik_Rifleman_02 {
    displayName = "Veteran Grenadier";
    editorPreview = QPATHTOF(ui\Takistan_U_Tehrik_Grenadier.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket2_01", "CUP_H_TKI_Lungee_06"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket2_01", "CUP_H_TKI_Lungee_06"};
    weapons[] = {"CUP_arifle_AKM_GL_Early", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AKM_GL_Early", "Throw", "Put"};
    magazines[] = {mag_6("tacgt_30Rnd_762x39_BP_Mag"), mag_10("CUP_1Rnd_HE_GP25_M")};
    respawnMagazines[] = {mag_6("tacgt_30Rnd_762x39_BP_Mag"), mag_10("CUP_1Rnd_HE_GP25_M")};
};

class TACU_Takistan_U_Tehrik_Autorifleman: TACU_Takistan_U_Tehrik_Grenadier {
    displayName = "Autorifleman";
    editorPreview = QPATHTOF(ui\Takistan_U_Tehrik_Autorifleman.jpg);
    backpack = "TACU_Takistan_B_Tehrik_LMG";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket1_03", "CUP_H_TKI_Lungee_03"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket1_03", "CUP_H_TKI_Lungee_03"};
    weapons[] = {"CUP_lmg_PKM", "Throw", "Put"};
    respawnWeapons[] = {"CUP_lmg_PKM", "Throw", "Put"};
    magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
    respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
};

class TACU_Takistan_U_Tehrik_Rifleman_AT: TACU_Takistan_U_Tehrik_Grenadier {
    displayName = "Rifleman AT";
    editorPreview = QPATHTOF(ui\Takistan_U_Tehrik_Rifleman_AT.jpg);
    backpack = "TACU_Takistan_B_Tehrik_AT";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket3_02", "CUP_H_TKI_Lungee_03"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket3_02", "CUP_H_TKI_Lungee_03"};
    weapons[] = {"CUP_arifle_AKS", "CUP_launch_RPG7V", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AKS", "CUP_launch_RPG7V", "Throw", "Put"};
    magazines[] = {mag_5("tacgt_30Rnd_762x39_BP_Mag"), "RPG7_F"};
    respawnMagazines[] = {mag_5("tacgt_30Rnd_762x39_BP_Mag"), "RPG7_F"};
};

// Units - Tehrik-i-Taliban Takistan, Enlisted.
class TACU_Takistan_U_Tehrik_Enlisted_Squadleader: TACU_Takistan_U_Tehrik_Leader {
    displayName = "Squad Leader";
    editorPreview = QPATHTOF(ui\Takistan_U_Tehrik_Enlisted_Squadleader.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket4_03", "CUP_H_TKI_Lungee_Open_01"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket4_03", "CUP_H_TKI_Lungee_Open_01"};
    weapons[] = {"CUP_arifle_AKS74U", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AKS74U", "Throw", "Put"};
    magazines[] = {mag_6("tacgt_30Rnd_545x39_BT_Mag_Plum")};
    respawnMagazines[] = {mag_6("tacgt_30Rnd_545x39_BT_Mag_Plum")};
    editorSubcategory = "TACU_Takistan_EdSubCat_Enlisted";
};

class TACU_Takistan_U_Tehrik_Enlisted_Rifleman: TACU_Takistan_U_Tehrik_Enlisted_Squadleader {
    displayName = "Rifleman";
    editorPreview = QPATHTOF(ui\Takistan_U_Tehrik_Enlisted_Rifleman.jpg);
    uniformClass = "CUP_O_TKI_Khet_Partug_07";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket5_05", "CUP_H_TKI_SkullCap_04"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket5_05", "CUP_H_TKI_SkullCap_04"};
    weapons[] = {"CUP_arifle_AK74_Early", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AK74_Early", "Throw", "Put"};
    magazines[] = {mag_6("tacgt_30Rnd_545x39_BT_Mag_Black")};
    respawnMagazines[] = {mag_6("tacgt_30Rnd_545x39_BT_Mag_Black")};
};

class TACU_Takistan_U_Tehrik_Enlisted_Rifleman_02: TACU_Takistan_U_Tehrik_Enlisted_Rifleman {
    displayName = "Rifleman 2";
    editorPreview = QPATHTOF(ui\Takistan_U_Tehrik_Enlisted_Rifleman_02.jpg);
    uniformClass = "CUP_O_TKI_Khet_Partug_02";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket1_04", "CUP_H_TKI_Pakol_1_06"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket1_04", "CUP_H_TKI_Pakol_1_06"};
    weapons[] = {"CUP_arifle_AKMS", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AKMS", "Throw", "Put"};
    magazines[] = {mag_6("tacgt_30Rnd_762x39_BP_Mag")};
    respawnMagazines[] = {mag_6("tacgt_30Rnd_762x39_BP_Mag")};
};

class TACU_Takistan_U_Tehrik_Enlisted_Rifleman_03: TACU_Takistan_U_Tehrik_Enlisted_Rifleman_02 {
    displayName = "Rifleman 3";
    editorPreview = QPATHTOF(ui\Takistan_U_Tehrik_Enlisted_Rifleman_03.jpg);
    uniformClass = "CUP_O_TKI_Khet_Partug_01";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket3_06", "CUP_H_TKI_Lungee_Open_04"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket3_06", "CUP_H_TKI_Lungee_Open_04"};
};

class TACU_Takistan_U_Tehrik_Enlisted_Rifleman_04: TACU_Takistan_U_Tehrik_Enlisted_Rifleman_03 {
    displayName = "Rifleman 4";
    editorPreview = QPATHTOF(ui\Takistan_U_Tehrik_Enlisted_Rifleman_04.jpg);
    uniformClass = "CUP_O_TKI_Khet_Partug_08";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket4_05", "CUP_H_TKI_SkullCap_06"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket4_05", "CUP_H_TKI_SkullCap_06"};
};

class TACU_Takistan_U_Tehrik_Enlisted_Autorifleman: TACU_Takistan_U_Tehrik_Enlisted_Rifleman_04 {
    displayName = "Machine-Gunner";
    editorPreview = QPATHTOF(ui\Takistan_U_Tehrik_Enlisted_Autorifleman.jpg);
    uniformClass = "CUP_O_TKI_Khet_Partug_06";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket4_06", "CUP_H_TKI_Lungee_06"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket4_06", "CUP_H_TKI_Lungee_06"};
    weapons[] = {"CUP_arifle_RPK74", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_RPK74", "Throw", "Put"};
    magazines[] = {mag_3("tacgt_75Rnd_762x39_RPK_BP_Mag")};
    respawnMagazines[] = {mag_3("tacgt_75Rnd_762x39_RPK_BP_Mag")};
};

class TACU_Takistan_U_Tehrik_Enlisted_Rifleman_AT: TACU_Takistan_U_Tehrik_Rifleman_AT {
    displayName = "Rifleman AT";
    editorPreview = QPATHTOF(ui\Takistan_U_Tehrik_Enlisted_Rifleman_AT.jpg);
    uniformClass = "CUP_O_TKI_Khet_Partug_03";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket2_04", "CUP_H_TKI_Lungee_04"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket2_04", "CUP_H_TKI_Lungee_04"};
    weapons[] = {"CUP_arifle_AKS74U", "CUP_launch_RPG7V", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AKS74U", "CUP_launch_RPG7V", "Throw", "Put"};
    magazines[] = {mag_5("tacgt_30Rnd_545x39_BT_Mag_Plum"), "RPG7_F"};
    respawnMagazines[] = {mag_5("tacgt_30Rnd_545x39_BT_Mag_Plum"), "RPG7_F"};
    editorSubcategory = "TACU_Takistan_EdSubCat_Enlisted";
};

// Vehicles - Tehrik
class CUP_C_Lada_TK2_CIV;
class TACU_Takistan_V_Tehrik_Lada: CUP_C_Lada_TK2_CIV {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Takistan_Tehrik";
    side = 0;
    displayName = "Lada";
    crew = "TACU_Takistan_U_Tehrik_Enlisted_Rifleman";
    typicalCargo[] = {"TACU_Takistan_U_Tehrik_Enlisted_Rifleman"};
    editorPreview = QPATHTOF(ui\Takistan_V_Tehrik_Lada.jpg);
};

class CUP_C_Lada_GreenTK_CIV;
class TACU_Takistan_V_Tehrik_Lada_Green: CUP_C_Lada_GreenTK_CIV {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Takistan_Tehrik";
    side = 0;
    displayName = "Lada Green";
    crew = "TACU_Takistan_U_Tehrik_Enlisted_Rifleman";
    typicalCargo[] = {"TACU_Takistan_U_Tehrik_Enlisted_Rifleman"};
    editorPreview = QPATHTOF(ui\Takistan_V_Tehrik_Lada_Green.jpg);
};

class CUP_O_V3S_Open_TKA;
class TACU_Takistan_V_Tehrik_V3S_Open: CUP_O_V3S_Open_TKA {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Takistan_Tehrik";
    side = 0;
    displayName = "V3S Open";
    crew = "TACU_Takistan_U_Tehrik_Enlisted_Rifleman";
    typicalCargo[] = {"TACU_Takistan_U_Tehrik_Enlisted_Rifleman"};
    editorPreview = QPATHTOF(ui\Takistan_V_Tehrik_V3S_Open.jpg);
};

class CUP_C_S1203_CIV;
class TACU_Takistan_V_Tehrik_S1203: CUP_C_S1203_CIV {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Takistan_Tehrik";
    side = 0;
    displayName = "Skoda S1203";
    crew = "TACU_Takistan_U_Tehrik_Enlisted_Rifleman";
    typicalCargo[] = {"TACU_Takistan_U_Tehrik_Enlisted_Rifleman"};
    editorPreview = QPATHTOF(ui\Takistan_V_Tehrik_S1203.jpg);
};

class CUP_C_Volha_Blue_TKCIV;
class TACU_Takistan_V_Tehrik_Volha_Blue: CUP_C_Volha_Blue_TKCIV {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Takistan_Tehrik";
    side = 0;
    displayName = "Volha Blue";
    crew = "TACU_Takistan_U_Tehrik_Enlisted_Rifleman";
    typicalCargo[] = {"TACU_Takistan_U_Tehrik_Enlisted_Rifleman"};
    editorPreview = QPATHTOF(ui\Takistan_V_Tehrik_Volha_Blue.jpg);
};

class CUP_O_Hilux_unarmed_TK_INS;
class TACU_Takistan_V_Tehrik_Hilux_Unarmed: CUP_O_Hilux_unarmed_TK_INS {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Takistan_Tehrik";
    side = 0;
    displayName = "Hilux";
    crew = "TACU_Takistan_U_Tehrik_Enlisted_Rifleman";
    typicalCargo[] = {"TACU_Takistan_U_Tehrik_Enlisted_Rifleman"};
    editorPreview = QPATHTOF(ui\Takistan_V_Tehrik_Hilux_Unarmed.jpg);
};

class CUP_O_Hilux_btr60_TK_INS;
class TACU_Takistan_V_Tehrik_Hilux_BTR60: CUP_O_Hilux_btr60_TK_INS {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Takistan_Tehrik";
    side = 0;
    displayName = "Hilux (BTR-60)";
    crew = "TACU_Takistan_U_Tehrik_Enlisted_Rifleman";
    typicalCargo[] = {"TACU_Takistan_U_Tehrik_Enlisted_Rifleman"};
    editorPreview = QPATHTOF(ui\Takistan_V_Tehrik_Hilux_BTR60.jpg);
};

class CUP_O_Hilux_DSHKM_TK_INS;
class TACU_Takistan_V_Tehrik_Hilux_DSHKM: CUP_O_Hilux_DSHKM_TK_INS {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Takistan_Tehrik";
    side = 0;
    displayName = "Hilux (DShKM)";
    hiddenSelectionsTextures[] = {"\CUP\WheeledVehicles\CUP_WheeledVehicles_Hilux\data\v2\Body_CO.paa"};
    crew = "TACU_Takistan_U_Tehrik_Enlisted_Rifleman";
    typicalCargo[] = {"TACU_Takistan_U_Tehrik_Enlisted_Rifleman"};
    editorPreview = QPATHTOF(ui\Takistan_V_Tehrik_Hilux_DSHKM.jpg);
};

class CUP_O_Hilux_SPG9_TK_INS;
class TACU_Takistan_V_Tehrik_Hilux_SPG9: CUP_O_Hilux_SPG9_TK_INS {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Takistan_Tehrik";
    side = 0;
    displayName = "Hilux (SPG-9)";
    hiddenSelectionsTextures[] = {"\CUP\WheeledVehicles\CUP_WheeledVehicles_Hilux\data\v2\Body_CO.paa"};
    crew = "TACU_Takistan_U_Tehrik_Enlisted_Rifleman";
    typicalCargo[] = {"TACU_Takistan_U_Tehrik_Enlisted_Rifleman"};
    editorPreview = QPATHTOF(ui\Takistan_V_Tehrik_Hilux_SPG9.jpg);
};

class CUP_O_Hilux_zu23_TK_INS;
class TACU_Takistan_V_Tehrik_Hilux_ZU23: CUP_O_Hilux_zu23_TK_INS {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Takistan_Tehrik";
    side = 0;
    displayName = "Hilux (ZU-23-2)";
    crew = "TACU_Takistan_U_Tehrik_Enlisted_Rifleman";
    typicalCargo[] = {"TACU_Takistan_U_Tehrik_Enlisted_Rifleman"};
    editorPreview = QPATHTOF(ui\Takistan_V_Tehrik_Hilux_ZU23.jpg);
};

// Vehicles - Veterans
class CUP_O_Hilux_armored_unarmed_TK_INS;
class TACU_Takistan_V_Tehrik_Hilux_Armored_Unarmed: CUP_O_Hilux_armored_unarmed_TK_INS {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Takistan_Tehrik";
    side = 0;
    displayName = "Hilux Full Armor Mode";
    crew = "TACU_Takistan_U_Tehrik_Rifleman";
    typicalCargo[] = {"TACU_Takistan_U_Tehrik_Rifleman"};
    editorPreview = QPATHTOF(ui\Takistan_V_Tehrik_Hilux_Armored_Unarmed.jpg);
};

class CUP_O_Hilux_armored_BTR60_TK_INS;
class TACU_Takistan_V_Tehrik_Hilux_Armored_BTR60: CUP_O_Hilux_armored_BTR60_TK_INS {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Takistan_Tehrik";
    side = 0;
    displayName = "Hilux Armored (BTR-60)";
    crew = "TACU_Takistan_U_Tehrik_Rifleman";
    typicalCargo[] = {"TACU_Takistan_U_Tehrik_Rifleman"};
    editorPreview = QPATHTOF(ui\Takistan_V_Tehrik_Hilux_Armored_BTR60.jpg);
};

class CUP_O_Hilux_armored_DSHKM_TK_INS;
class TACU_Takistan_V_Tehrik_Hilux_Armored_DSHKM: CUP_O_Hilux_armored_DSHKM_TK_INS {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Takistan_Tehrik";
    side = 0;
    displayName = "Hilux Armored (DShKM)";
    crew = "TACU_Takistan_U_Tehrik_Rifleman";
    typicalCargo[] = {"TACU_Takistan_U_Tehrik_Rifleman"};
    editorPreview = QPATHTOF(ui\Takistan_V_Tehrik_Hilux_Armored_DSHKM.jpg);
};

class CUP_O_Hilux_armored_SPG9_TK_INS;
class TACU_Takistan_V_Tehrik_Hilux_Armored_SPG9: CUP_O_Hilux_armored_SPG9_TK_INS {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Takistan_Tehrik";
    side = 0;
    displayName = "Hilux Armored (SPG-9)";
    crew = "TACU_Takistan_U_Tehrik_Rifleman";
    typicalCargo[] = {"TACU_Takistan_U_Tehrik_Rifleman"};
    editorPreview = QPATHTOF(ui\Takistan_V_Tehrik_Hilux_Armored_SPG9.jpg);
};

// Vehicles - Turrets
class CUP_O_DSHKM_ChDKZ;
class TACU_Takistan_V_Tehrik_DSHKM: CUP_O_DSHKM_ChDKZ {
    faction = "TACU_Takistan_Tehrik";
    side = 0;
    displayName = "DShKM";
    crew = "TACU_Takistan_U_Tehrik_Enlisted_Rifleman";
    typicalCargo[] = {"TACU_Takistan_U_Tehrik_Enlisted_Rifleman"};
    editorPreview = QPATHTOF(ui\Takistan_V_Tehrik_DSHKM.jpg);
};

class CUP_O_DSHkM_MiniTriPod_ChDKZ;
class TACU_Takistan_V_Tehrik_DSHKM_Mini: CUP_O_DSHkM_MiniTriPod_ChDKZ {
    faction = "TACU_Takistan_Tehrik";
    side = 0;
    displayName = "DShKM Minitripod";
    crew = "TACU_Takistan_U_Tehrik_Enlisted_Rifleman_02";
    typicalCargo[] = {"TACU_Takistan_U_Tehrik_Enlisted_Rifleman"};
    editorPreview = QPATHTOF(ui\Takistan_V_Tehrik_DSHKM_Mini.jpg);
};

class CUP_O_ZU23_RU;
class TACU_Takistan_V_Tehrik_ZU23: CUP_O_ZU23_RU {
    faction = "TACU_Takistan_Tehrik";
    side = 0;
    displayName = "ZU-23";
    crew = "TACU_Takistan_U_Tehrik_Enlisted_Rifleman_03";
    typicalCargo[] = {"TACU_Takistan_U_Tehrik_Enlisted_Rifleman"};
    editorPreview = QPATHTOF(ui\Takistan_V_Tehrik_ZU23.jpg);
};

class CUP_O_Metis_RU;
class TACU_Takistan_V_Tehrik_Metis: CUP_O_Metis_RU {
    faction = "TACU_Takistan_Tehrik";
    side = 0;
    displayName = "Metis AT-13";
    crew = "TACU_Takistan_U_Tehrik_Enlisted_Rifleman_04";
    typicalCargo[] = {"TACU_Takistan_U_Tehrik_Enlisted_Rifleman"};
    editorPreview = QPATHTOF(ui\Takistan_V_Tehrik_Metis.jpg);
};

class CUP_O_SPG9_ChDKZ;
class TACU_Takistan_V_Tehrik_SPG9: CUP_O_SPG9_ChDKZ {
    faction = "TACU_Takistan_Tehrik";
    side = 0;
    displayName = "SPG-9";
    crew = "TACU_Takistan_U_Tehrik_Enlisted_Rifleman_03";
    typicalCargo[] = {"TACU_Takistan_U_Tehrik_Enlisted_Rifleman"};
    editorPreview = QPATHTOF(ui\Takistan_V_Tehrik_SPG9.jpg);
};
