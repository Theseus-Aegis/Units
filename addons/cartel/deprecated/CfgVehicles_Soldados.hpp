// Units - Cartel Soldados

class TACU_Cartel_U_O_Soldado_Rifleman: TACU_Main_U_OPFOR_Soldier_Base {
    author = "Mike";
    displayName = "Soldado (P99)";
    faction = "TACU_Cartel_O";
    scope = 1;
    scopeCurator = 1;
    identityTypes[] = {"LanguageFRE_F", "Head_Tanoan", "NoGlasses"};
    genericNames = "TanoanMen";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "tacs_Uniform_Polo_TP_BS_LP_BB_NoLogo";
    backpack = "";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_Bandanna_gry", "V_BandollierB_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_Bandanna_gry", "V_BandollierB_blk"};
    Items[] = {mag_5("ACE_fieldDressing")};
    respawnItems[] = {mag_5("ACE_fieldDressing")};
    weapons[] = {"hgun_P07_F", "Throw", "Put"};
    respawnWeapons[] = {"hgun_P07_F", "Throw", "Put"};
    magazines[] = {mag_7("tacgt_AI_17Rnd_9x19_Walther"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("tacgt_AI_17Rnd_9x19_Walther"), mag_2("HandGrenade"), "SmokeShell"};
    headgearList[] = {
        "H_Bandanna_gry", 0.30,
        "H_Bandanna_cbr", 0.30,
        "H_Bandanna_khk", 0.30,
        "", 0.30
    };
    CBA_facewearList[] = {
        "", 1
    };
};

class TACU_Cartel_U_O_Soldado_Rifleman_01: TACU_Cartel_U_O_Soldado_Rifleman {
    displayName = "Soldado (AK)";
    uniformClass = "tacs_Uniform_Polo_TP_BS_LP_BB_NoLogo";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_Bandanna_gry", "V_BandollierB_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_Bandanna_gry", "V_BandollierB_blk"};
    Items[] = {mag_5("ACE_fieldDressing")};
    respawnItems[] = {mag_5("ACE_fieldDressing")};
    weapons[] = {"arifle_AKS_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_AKS_F", "Throw", "Put"};
    magazines[] = {mag_7("tacgt_AI_30Rnd_545x39_AK"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("tacgt_AI_30Rnd_545x39_AK"), mag_2("HandGrenade"), "SmokeShell"};
};

class TACU_Cartel_U_O_Soldado_Rifleman_02: TACU_Cartel_U_O_Soldado_Rifleman_01 {
    displayName = "Soldado (AK12)";
    uniformClass = "tacs_Uniform_Polo_CP_BS_TP_BB_NoLogo";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_Bandanna_gry", "V_BandollierB_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_Bandanna_gry", "V_BandollierB_blk"};
    weapons[] = {"arifle_AK12_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_AK12_F", "Throw", "Put"};
    magazines[] = {mag_7("tacgt_AI_30Rnd_762x39_AK"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("tacgt_AI_30Rnd_762x39_AK"), mag_2("HandGrenade"), "SmokeShell"};
};

class TACU_Cartel_U_O_Soldado_Rifleman_03: TACU_Cartel_U_O_Soldado_Rifleman_01 {
    displayName = "Soldado (CPW)";
    uniformClass = "tacs_Uniform_Polo_TP_BS_TP_TB_NoLogo";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_Bandanna_gry", "V_BandollierB_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_Bandanna_gry", "V_BandollierB_blk"};
    weapons[] = {"hgun_PDW2000_F", "Throw", "Put"};
    respawnWeapons[] = {"hgun_PDW2000_F", "Throw", "Put"};
    magazines[] = {mag_7("tacgt_AI_30Rnd_9x19"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("tacgt_AI_30Rnd_9x19"), mag_2("HandGrenade"), "SmokeShell"};
};

class TACU_Cartel_U_O_Soldado_Rifleman_04: TACU_Cartel_U_O_Soldado_Rifleman_01 {
    displayName = "Soldado (PP-19)";
    uniformClass = "tacs_Uniform_Polo_TP_LS_GP_BB_NoLogo";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_Bandanna_gry", "V_BandollierB_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_Bandanna_gry", "V_BandollierB_blk"};
    weapons[] = {"CUP_smg_vityaz", "Throw", "Put"};
    respawnWeapons[] = {"CUP_smg_vityaz", "Throw", "Put"};
    magazines[] = {mag_7("tacgt_AI_30Rnd_9x19_Vityaz"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("tacgt_AI_30Rnd_9x19_Vityaz"), mag_2("HandGrenade"), "SmokeShell"};
};

class TACU_Cartel_U_O_Soldado_Driver: TACU_Cartel_U_O_Soldado_Rifleman_01 {
    displayName = "Driver";
    uniformClass = "tacs_Uniform_Polo_TP_LS_TP_TB_NoLogo";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_Bandanna_gry", "V_BandollierB_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_Bandanna_gry", "V_BandollierB_blk"};
    weapons[] = {"arifle_AKS_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_AKS_F", "Throw", "Put"};
    magazines[] = {mag_7("tacgt_AI_30Rnd_545x39_AK"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("tacgt_AI_30Rnd_545x39_AK"), mag_2("HandGrenade"), "SmokeShell"};
};

class TACU_Cartel_U_O_Soldado_Rifleman_AT: TACU_Cartel_U_O_Soldado_Rifleman_01 {
    displayName = "Soldado (AT)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    uniformClass = "tacs_Uniform_Polo_TP_BS_TP_TB_NoLogo";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_Bandanna_gry", "V_BandollierB_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_Bandanna_gry", "V_BandollierB_blk"};
    weapons[] = {"arifle_AKS_F", "CUP_launch_RPG7V", "Throw", "Put"};
    respawnWeapons[] = {"arifle_AKS_F", "CUP_launch_RPG7V", "Throw", "Put"};
    magazines[] = {mag_7("tacgt_AI_30Rnd_545x39_AK"), mag_2("HandGrenade"), "RPG7_F", "SmokeShell"};
    respawnMagazines[] = {mag_7("tacgt_AI_30Rnd_545x39_AK"), mag_2("HandGrenade"), "RPG7_F", "SmokeShell"};
};

class TACU_Cartel_U_O_Soldado_Rifleman_MG: TACU_Cartel_U_O_Soldado_Rifleman_01 {
    displayName = "Soldado (RPK)";
    icon = "iconManMG";
    role = "MachineGunner";
    uniformClass = "tacs_Uniform_Polo_TP_BS_TP_TB_NoLogo";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_Bandanna_gry", "V_BandollierB_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_Bandanna_gry", "V_BandollierB_blk"};
    weapons[] = {"CUP_arifle_RPK74", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_RPK74", "Throw", "Put"};
    magazines[] = {mag_4("tacgt_AI_75Rnd_762x39_Drum"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_4("tacgt_AI_75Rnd_762x39_Drum"), mag_2("HandGrenade"), "SmokeShell"};
};

class TACU_Cartel_U_O_Soldado_Grenadier: TACU_Cartel_U_O_Soldado_Rifleman_01 {
    displayName = "Soldado (GL)";
    role = "Grenadier";
    uniformClass = "tacs_Uniform_Polo_TP_LS_GP_BB_NoLogo";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_Bandanna_gry", "V_BandollierB_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_Bandanna_gry", "V_BandollierB_blk"};
    weapons[] = {"CUP_arifle_AKS74_GL_Early", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AKS74_GL_Early", "Throw", "Put"};
    magazines[] = {mag_4("tacgt_AI_30Rnd_545x39_AK"), mag_2("HandGrenade"), mag_3("CUP_1Rnd_HE_GP25_M"), "SmokeShell"};
    respawnMagazines[] = {mag_4("tacgt_AI_30Rnd_545x39_AK"), mag_2("HandGrenade"), mag_3("CUP_1Rnd_HE_GP25_M"), "SmokeShell"};
};

// Vehicles - Cartel

class TACU_Cartel_V_O_Offroad_Jeep: I_C_Offroad_02_unarmed_F {
    MACRO_CLEAR_VEHICLE_CARGO
    scope = 1;
    scopeCurator = 1;
    faction = "TACU_Cartel_O";
    side = 0;
    displayName = "Jeep Wrangler";
    crew = "TACU_Cartel_U_O_Soldado_Driver";
    typicalCargo[] = {"TACU_Cartel_U_O_Soldado_Rifleman_01"};
};

class TACU_Cartel_V_O_Offroad_Jeep_Armed: I_C_Offroad_02_LMG_F {
    MACRO_CLEAR_VEHICLE_CARGO
    scope = 1;
    scopeCurator = 1;
    faction = "TACU_Cartel_O";
    side = 0;
    displayName = "Jeep Wrangler (LMG)";
    crew = "TACU_Cartel_U_O_Soldado_Driver";
    typicalCargo[] = {"TACU_Cartel_U_O_Soldado_Rifleman_02"};
};

class TACU_Cartel_V_O_Van_Transport: C_Van_02_transport_F {
    MACRO_CLEAR_VEHICLE_CARGO
    scope = 1;
    scopeCurator = 1;
    faction = "TACU_Cartel_O";
    side = 0;
    displayName = "Cargo Van Transport";
    crew = "TACU_Cartel_U_O_Soldado_Driver";
    typicalCargo[] = {"TACU_Cartel_U_O_Soldado_Rifleman_03"};
};
