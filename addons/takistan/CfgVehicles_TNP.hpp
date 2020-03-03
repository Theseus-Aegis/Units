// Units - Takistan National Police
class TACU_Takistan_U_TNP_Officer: TACU_Main_U_INDEP_Soldier_Base {
    displayName = "Officer";
    faction = "TACU_Takistan_TNP";
    scope = 2;
    scopeCurator = 2;
    genericNames = "TakistaniMen";
    identityTypes[] = {"LanguagePER_F", "Head_TK", "NoGlasses"};
    editorPreview = QPATHTOF(ui\Takistan_U_TNP_Officer.jpg);
    uniformClass = "U_B_GEN_Commander_F";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket1_03", "CUP_H_TKI_Pakol_2_02"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket1_03", "CUP_H_TKI_Pakol_2_02"};
    weapons[] = {"CUP_arifle_AKMS_Early", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AKMS_Early", "Throw", "Put"};
    magazines[] = {mag_4("CUP_30Rnd_762x39_AK47_M")};
    respawnMagazines[] = {mag_4("CUP_30Rnd_762x39_AK47_M")};
    editorSubcategory = "TACU_Takistan_EdSubCat_Police";
};

class TACU_Takistan_U_TNP_Rifleman: TACU_Takistan_U_TNP_Officer {
    displayName = "Rifleman";
    editorPreview = QPATHTOF(ui\Takistan_U_TNP_Rifleman.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket2_06", "CUP_H_TKI_SkullCap_02"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket2_06", "CUP_H_TKI_SkullCap_02"};
    weapons[] = {"CUP_arifle_AKS74_Early", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AKS74_Early", "Throw", "Put"};
    magazines[] = {mag_7("CUP_30Rnd_545x39_AK74M_M")};
    respawnMagazines[] = {mag_7("CUP_30Rnd_545x39_AK74M_M")};
};

class TACU_Takistan_U_TNP_Rifleman_02: TACU_Takistan_U_TNP_Rifleman {
    displayName = "Rifleman 2";
    editorPreview = QPATHTOF(ui\Takistan_U_TNP_Rifleman_02.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket2_01", "CUP_H_TKI_Pakol_1_01"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket2_01", "CUP_H_TKI_Pakol_1_01"};
    weapons[] = {"CUP_arifle_AKS74", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AKS74", "Throw", "Put"};
    magazines[] = {mag_7("CUP_30Rnd_545x39_AK_M")};
    respawnMagazines[] = {mag_7("CUP_30Rnd_545x39_AK_M")};
};

class TACU_Takistan_U_TNP_Machinegunner: TACU_Takistan_U_TNP_Rifleman_02 {
    displayName = "Machine Gunner";
    editorPreview = QPATHTOF(ui\Takistan_U_TNP_Machinegunner.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket4_04", "CUP_H_TKI_SkullCap_05"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket4_04", "CUP_H_TKI_SkullCap_05"};
    weapons[] = {"CUP_arifle_RPK74", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_RPK74", "Throw", "Put"};
    magazines[] = {mag_4("CUP_30Rnd_762x39_AK47_TK_M")};
    respawnMagazines[] = {mag_4("CUP_30Rnd_762x39_AK47_TK_M")};
};

// Vehicles - TNP
class TACU_Police_V_B_Offroad_Blue;
class TACU_Takistan_V_TNP_Offroad_Police: TACU_Police_V_B_Offroad_Blue {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Takistan_TNP";
    side = 2;
    displayName = "Offroad (Police)";
    crew = "TACU_Takistan_U_TNP_Rifleman";
    typicalCargo[] = {"TACU_Takistan_U_TNP_Rifleman"};
    editorPreview = QPATHTOF(ui\Takistan_V_TNP_Offroad_Police.jpg);
};

class CUP_C_Datsun;
class TACU_Takistan_V_TNP_Datsun: CUP_C_Datsun {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Takistan_TNP";
    side = 2;
    displayName = "Datsun (Unarmed)";
    crew = "TACU_Takistan_U_TNP_Rifleman";
    typicalCargo[] = {"TACU_Takistan_U_TNP_Rifleman"};
    editorPreview = QPATHTOF(ui\Takistan_V_TNP_Datsun.jpg);
};

class CUP_O_Datsun_PK_Random;
class TACU_Takistan_V_TNP_Datsun_PK: CUP_O_Datsun_PK_Random {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Takistan_TNP";
    side = 2;
    displayName = "Datsun (PK)";
    crew = "TACU_Takistan_U_TNP_Rifleman";
    typicalCargo[] = {"TACU_Takistan_U_TNP_Rifleman"};
    editorPreview = QPATHTOF(ui\Takistan_V_TNP_Datsun_PK.jpg);
};
