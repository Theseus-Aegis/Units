// Units - Takistan National Army
class TACU_TNA_U_I_Major: TACU_Main_U_INDEP_Soldier_Base {
    author = "TyroneMF";
    displayName = "Major";
    faction = "TACU_TNA_I";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguagePER_F", "Head_TK", "NoGlasses"};
    genericNames = "TakistaniMen";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "CUP_U_O_TK_Officer";
    backpack = "";
    editorPreview = QPATHTOF(ui\TNA_U_I_Major.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_O_TK_OfficerBelt", "CUP_H_TK_Beret"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_O_TK_OfficerBelt", "CUP_H_TK_Beret"};
    Items[] = {mag_5("ACE_fieldDressing")};
    respawnItems[] = {mag_5("ACE_fieldDressing")};
    weapons[] = {"CUP_hgun_M9", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_M9", "Throw", "Put"};
    magazines[] = {mag_4("CUP_15Rnd_9x19_M9")};
    respawnMagazines[] = {mag_4("CUP_15Rnd_9x19_M9")};
    editorSubcategory = "TACU_TNA_EdSubCat_I_Enlisted";
};

class TACU_TNA_U_I_Lieutenant: TACU_TNA_U_I_Major {
    displayName = "Lieutenant";
    scope = 2;
    scopeCurator = 2;
    uniformClass = "CUP_U_O_TK_Green";
    editorPreview = QPATHTOF(ui\TNA_U_I_Lieutenant.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_B_RRV_TL", "CUP_H_TK_Beret"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_B_RRV_TL", "CUP_H_TK_Beret"};
    weapons[] = {"CUP_arifle_M16A2", "CUP_hgun_M9", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_M16A2", "CUP_hgun_M9", "Throw", "Put"};
    magazines[] = {mag_10("CUP_30Rnd_556x45_Stanag"), mag_3("CUP_15Rnd_9x19_M9")};
    respawnMagazines[] = {mag_10("CUP_30Rnd_556x45_Stanag"), mag_3("CUP_15Rnd_9x19_M9")};
};

class TACU_TNA_U_I_NCO: TACU_TNA_U_I_Lieutenant {
    displayName = "NCO";
    scope = 2;
    scopeCurator = 2;
    editorPreview = QPATHTOF(ui\TNA_U_I_NCO.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_B_PASGT_no_bags_OD", "CUP_H_Ger_M92_RGR"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_B_PASGT_no_bags_OD", "CUP_H_Ger_M92_RGR"};
    weapons[] = {"CUP_arifle_M16A2", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_M16A2", "Throw", "Put"};
    magazines[] = {mag_10("CUP_30Rnd_556x45_Stanag"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_10("CUP_30Rnd_556x45_Stanag"), mag_2("SmokeShell")};
};

class TACU_TNA_U_I_Rifleman: TACU_TNA_U_I_NCO {
    displayName = "Rifleman";
    editorPreview = QPATHTOF(ui\TNA_U_I_Rifleman.jpg);
};

class TACU_TNA_U_I_Rifleman2: TACU_TNA_U_I_NCO {
    displayName = "Rifleman";
    editorPreview = QPATHTOF(ui\TNA_U_I_Rifleman2.jpg);
    uniformClass = "CUP_U_O_TK_MixedCamo";
};

class TACU_TNA_U_I_Rifleman3: TACU_TNA_U_I_NCO {
    displayName = "Rifleman";
    editorPreview = QPATHTOF(ui\TNA_U_I_Rifleman3.jpg);
};

class TACU_TNA_U_I_LMG: TACU_TNA_U_I_NCO {
    displayName = "Machine-Gunner";
    editorPreview = QPATHTOF(ui\TNA_U_I_LMG.jpg);
    backpack = "CUP_B_AlicePack_Khaki";
    weapons[] = {"CUP_lmg_M249_E2", "Throw", "Put"};
    respawnWeapons[] = {"CUP_lmg_M249_E2", "Throw", "Put"};
    magazines[] = {mag_4("CUP_200Rnd_TE4_Red_Tracer_556x45_M249")};
    respawnMagazines[] = {mag_4("CUP_200Rnd_TE4_Red_Tracer_556x45_M249")};
};

class TACU_TNA_U_I_Pilot: TACU_TNA_U_I_NCO {
    displayName = "Pilot";
    editorPreview = QPATHTOF(ui\TNA_U_I_Pilot.jpg);
    uniformClass = "CUP_U_B_USMC_PilotOverall";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_B_PilotVest", "CUP_H_TK_PilotHelmet"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_B_PilotVest", "CUP_H_TK_PilotHelmet"};
    weapons[] = {"CUP_hgun_M9", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_M9", "Throw", "Put"};
    magazines[] = {mag_5("CUP_15Rnd_9x19_M9")};
    respawnMagazines[] = {mag_5("CUP_15Rnd_9x19_M9")};
};

// Units - Takistan National Army, Commandos.
class TACU_TNA_U_I_C_NCO: TACU_TNA_U_I_Major {
    displayName = "Commando NCO";
    editorPreview = QPATHTOF(ui\TNA_U_I_C_NCO.jpg);
    uniformClass = "Gen3_M81";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_B_Ciras_Olive2", "CUP_H_OpsCore_Spray", "CUP_NVG_PVS15_black"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_B_Ciras_Olive2", "CUP_H_OpsCore_Spray", "CUP_NVG_PVS15_black"};
    backpack = "CUP_B_Kombat_Radio_Olive";
    weapons[] = {"TACU_TNA_W_M4A3_Desert", "CUP_hgun_M9", "Throw", "Put"};
    respawnWeapons[] = {"TACU_TNA_W_M4A3_Desert", "CUP_hgun_M9", "Throw", "Put"};
    magazines[] = {mag_10("CUP_30Rnd_556x45_Stanag"), mag_3("CUP_15Rnd_9x19_M9"), mag_3("HandGrenade"), mag_2("ACE_M84"), mag_4("SmokeShell")};
    respawnMagazines[] = {mag_10("CUP_30Rnd_556x45_Stanag"), mag_3("CUP_15Rnd_9x19_M9"), mag_3("HandGrenade"), mag_2("ACE_M84"), mag_4("SmokeShell")};
    editorSubcategory = "TACU_TNA_EdSubCat_I_Commandos";
};

class TACU_TNA_U_I_C_Breacher: TACU_TNA_U_I_C_NCO {
    displayName = "Commando Breacher";
    editorPreview = QPATHTOF(ui\TNA_U_I_C_Breacher.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_B_Ciras_Olive2", "CUP_H_OpsCore_Grey", "CUP_NVG_PVS15_black"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_B_Ciras_Olive2", "CUP_H_OpsCore_Grey", "CUP_NVG_PVS15_black"};
    weapons[] = {"CUP_sgun_M1014_solidstock", "CUP_hgun_M9", "Throw", "Put"};
    respawnWeapons[] = {"CUP_sgun_M1014_solidstock", "CUP_hgun_M9", "Throw", "Put"};
    magazines[] = {mag_10("CUP_8Rnd_B_Beneli_74Pellets"), mag_3("CUP_15Rnd_9x19_M9"), mag_3("HandGrenade"), mag_2("ACE_M84"), mag_4("SmokeShell")};
    respawnMagazines[] = {mag_10("CUP_8Rnd_B_Beneli_74Pellets"), mag_3("CUP_15Rnd_9x19_M9"), mag_3("HandGrenade"), mag_2("ACE_M84"), mag_4("SmokeShell")};
};

class TACU_TNA_U_I_C_Grenadier: TACU_TNA_U_I_C_NCO {
    displayName = "Commando Grenadier";
    editorPreview = QPATHTOF(ui\TNA_U_I_C_Grenadier.jpg);
    backpack = "CUP_B_Kombat_Olive";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_PMC_CIRAS_Coyote_Grenadier", "CUP_H_OpsCore_Tan", "CUP_NVG_PVS15_black"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_PMC_CIRAS_Coyote_Grenadier", "CUP_H_OpsCore_Tan", "CUP_NVG_PVS15_black"};
    weapons[] = {"TACU_TNA_W_M4A1_GL"};
    respawnWeapons[] = {"TACU_TNA_W_M4A1_GL"};
    magazines[] = {mag_10("CUP_1Rnd_HEDP_M203"), mag_10("CUP_30Rnd_556x45_Stanag")};
    respawnMagazines[] = {mag_10("CUP_1Rnd_HEDP_M203"), mag_10("CUP_30Rnd_556x45_Stanag")};
};

class TACU_TNA_U_I_C_LMG: TACU_TNA_U_I_C_NCO {
    displayName = "Commando Machine-Gunner";
    editorPreview = QPATHTOF(ui\TNA_U_I_C_LMG.jpg);
    backpack = "CUP_B_Kombat_Olive";
    weapons[] = {"CUP_lmg_m249_para", "Throw", "Put"};
    respawnWeapons[] = {"CUP_lmg_m249_para", "Throw", "Put"};
    magazines[] = {mag_4("CUP_200Rnd_TE4_Red_Tracer_556x45_M249"), mag_3("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_4("CUP_200Rnd_TE4_Red_Tracer_556x45_M249"), mag_3("HandGrenade"), mag_2("SmokeShell")};
};
    
 class TACU_TNA_U_I_C_Medic: TACU_TNA_U_I_C_NCO {
    displayName = "Commando Medic";
    editorPreview = QPATHTOF(ui\TNA_U_I_C_Medic.jpg);
    backpack = "tacs_Backpack_Kitbag_Medic_Sage";
    attendant = 1;
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_B_Ciras_Olive4", "CUP_H_OpsCore_Spray", "CUP_NVG_PVS15_black"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_B_Ciras_Olive4", "CUP_H_OpsCore_Spray", "CUP_NVG_PVS15_black"};
    weapons[] = {"TACU_TNA_W_M4A3_Black", "CUP_hgun_M9", "Throw", "Put"};
    respawnWeapons[] = {"TACU_TNA_W_M4A3_Black", "CUP_hgun_M9", "Throw", "Put"};
    magazines[] = {mag_10("CUP_30Rnd_556x45_Stanag"), mag_3("CUP_15Rnd_9x19_M9"), mag_3("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_10("CUP_30Rnd_556x45_Stanag"), mag_3("CUP_15Rnd_9x19_M9"), mag_3("HandGrenade"), mag_2("SmokeShell")};
};

class TACU_TNA_U_I_C_Rifleman: TACU_TNA_U_I_C_NCO {
    displayName = "Commando Rifleman";
    editorPreview = QPATHTOF(ui\TNA_U_I_C_Rifleman.jpg);
    backpack = "CUP_B_Kombat_Olive";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_B_Ciras_Olive", "CUP_H_OpsCore_Spray", "CUP_NVG_PVS15_black"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_B_Ciras_Olive", "CUP_H_OpsCore_Spray", "CUP_NVG_PVS15_black"};
    weapons[] = {"TACU_TNA_W_M4A1_Black", "CUP_hgun_M9", "CUP_launch_M136_Loaded", "Throw", "Put"};
    respawnWeapons[] = {"TACU_TNA_W_M4A1_Black", "CUP_hgun_M9", "CUP_launch_M136_Loaded", "Throw", "Put"};
    magazines[] = {mag_10("CUP_30Rnd_556x45_Stanag"), mag_3("CUP_15Rnd_9x19_M9"), mag_3("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_10("CUP_30Rnd_556x45_Stanag"), mag_3("CUP_15Rnd_9x19_M9"), mag_3("HandGrenade"), mag_2("SmokeShell")};
};

// Units - Takistan National Police
class TACU_TNP_U_I_Officer: TACU_Main_U_INDEP_Soldier_Base {
    displayName = "Officer";
    faction = "TACU_TNP_I";
    scope = 2;
    scopeCurator = 2;
    genericNames = "TakistaniMen";
    editorPreview = QPATHTOF(ui\TNP_U_I_Officer.jpg);
    uniformClass = "U_B_GEN_Commander_F";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket1_03", "CUP_H_TKI_Pakol_2_02"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket1_03", "CUP_H_TKI_Pakol_2_02"};
    weapons[] = {"CUP_arifle_AKMS_Early", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AKMS_Early", "Throw", "Put"};
    magazines[] = {mag_4("CUP_30Rnd_762x39_AK47_M")};
    respawnMagazines[] = {mag_4("CUP_30Rnd_762x39_AK47_M")};
    editorSubcategory = "TACU_TNP_EdSubCat_I_Police";
};

class TACU_TNP_U_I_Rifleman: TACU_TNP_U_I_Officer {
    displayName = "Rifleman";
    editorPreview = QPATHTOF(ui\TNP_U_I_Rifleman.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket2_06", "CUP_H_TKI_SkullCap_02"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket2_06", "CUP_H_TKI_SkullCap_02"};
    weapons[] = {"CUP_arifle_AKS74_Early", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AKS74_Early", "Throw", "Put"};
    magazines[] = {mag_4("CUP_30Rnd_545x39_AK74M_M")};
    respawnMagazines[] = {mag_4("CUP_30Rnd_545x39_AK74M_M")};
};

class TACU_TNP_U_I_Rifleman2: TACU_TNP_U_I_Rifleman {
    displayName = "Rifleman 2";
    editorPreview = QPATHTOF(ui\TNP_U_I_Rifleman2.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket2_01", "CUP_H_TKI_Pakol_1_01"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket2_01", "CUP_H_TKI_Pakol_1_01"};
    weapons[] = {"CUP_arifle_AKS74", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AKS74", "Throw", "Put"};
    magazines[] = {mag_4("CUP_30Rnd_545x39_AK_M")};
    respawnMagazines[] = {mag_4("CUP_30Rnd_545x39_AK_M")};
};

class TACU_TNP_U_I_LMG: TACU_TNP_U_I_Rifleman2 {
    displayName = "Machine Gunner";
    editorPreview = QPATHTOF(ui\TNP_U_I_LMG.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket4_04", "CUP_H_TKI_SkullCap_05"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_OI_TKI_Jacket4_04", "CUP_H_TKI_SkullCap_05"};
    weapons[] = {"CUP_arifle_RPK74", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_RPK74", "Throw", "Put"};
    magazines[] = {mag_4("CUP_30Rnd_762x39_AK47_TK_M")};
    respawnMagazines[] = {mag_4("CUP_30Rnd_762x39_AK47_TK_M")};
};

// Vehicles - TNA
class CUP_B_HMMWV_M2_USMC;
class TACU_TNA_V_I_HMMWV_M2: CUP_B_HMMWV_M2_USMC {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_TNA_I";
    side = 2;
    displayName = "HMMWV (M2)";
    crew = "TACU_TNA_U_I_Rifleman";
    typicalCargo[] = {"TACU_TNA_U_I_Rifleman"};
    editorPreview = QPATHTOF(ui\TNA_V_I_HMMWV_M2.jpg);
};

class CUP_B_M1151_M2_USA;
class TACU_TNA_V_I_M1151_M2: CUP_B_M1151_M2_USA {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_TNA_I";
    side = 2;
    displayName = "M1151 (M2)";
    crew = "TACU_TNA_U_I_Rifleman";
    typicalCargo[] = {"TACU_TNA_U_I_Rifleman"};
    editorPreview = QPATHTOF(ui\TNA_V_I_M1151_M2.jpg);
};

class CUP_B_HMMWV_Unarmed_USMC;
class TACU_TNA_V_I_HMMWV_Unarmed: CUP_B_HMMWV_Unarmed_USMC {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_TNA_I";
    side = 2;
    displayName = "HMMWV (Unarmed)";
    crew = "TACU_TNA_U_I_Rifleman";
    typicalCargo[] = {"TACU_TNA_U_I_Rifleman"};
    editorPreview = QPATHTOF(ui\TNA_V_I_HMMWV_Unarmed.jpg);
};

class CUP_B_HMMWV_Transport_NATO_T;
class TACU_TNA_V_I_HMMWV_Transport: CUP_B_HMMWV_Transport_NATO_T {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_TNA_I";
    side = 2;
    displayName = "HMMWV (Transport)";
    crew = "TACU_TNA_U_I_Rifleman";
    typicalCargo[] = {"TACU_TNA_U_I_Rifleman"};
    editorPreview = QPATHTOF(ui\TNA_V_I_HMMWV_Transport.jpg);
};

class CUP_O_Kamaz_RU;
class TACU_TNA_V_I_Kamaz: CUP_O_Kamaz_RU {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_TNA_I";
    side = 2;
    displayName = "Kamaz";
    crew = "TACU_TNA_U_I_Rifleman";
    typicalCargo[] = {"TACU_TNA_U_I_Rifleman"};
    editorPreview = QPATHTOF(ui\TNA_V_I_Kamaz.jpg);
};

class CUP_C_Mi17_Civilian_RU;
class TACU_TNA_V_I_Mi17: CUP_C_Mi17_Civilian_RU {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_TNA_I";
    side = 2;
    displayName = "Mi17";
    crew = "TACU_TNA_U_I_Pilot";
    typicalCargo[] = {"TACU_TNA_U_I_Pilot"};
    editorPreview = QPATHTOF(ui\TNA_V_I_Mi17.jpg);
};

// Vehicles - TNP
class TACU_Police_V_B_Offroad_Blue;
class TACU_TNP_V_I_Police_Offroad: TACU_Police_V_B_Offroad_Blue {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_TNP_I";
    side = 2;
    displayName = "Offroad (Police)";
    crew = "TACU_TNP_U_I_Rifleman";
    typicalCargo[] = {"TACU_TNP_U_I_Rifleman"};
    editorPreview = QPATHTOF(ui\TNP_V_I_Police_Offroad.jpg);
};

class CUP_C_Datsun;
class TACU_TNP_V_I_Datsun: CUP_C_Datsun {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_TNP_I";
    side = 2;
    displayName = "Datsun (Unarmed)";
    crew = "TACU_TNP_U_I_Rifleman";
    typicalCargo[] = {"TACU_TNP_U_I_Rifleman"};
    editorPreview = QPATHTOF(ui\TNP_V_I_Datsun.jpg);
};

class CUP_O_Datsun_PK_Random;
class TACU_TNP_V_I_Datsun_PK: CUP_O_Datsun_PK_Random {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_TNP_I";
    side = 2;
    displayName = "Datsun (PK)";
    crew = "TACU_TNP_U_I_Rifleman";
    typicalCargo[] = {"TACU_TNP_U_I_Rifleman"};
    editorPreview = QPATHTOF(ui\TNP_V_I_Datsun_PK.jpg);
};
