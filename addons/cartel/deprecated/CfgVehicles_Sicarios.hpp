// Units - Cartel Sicarios

class TACU_Cartel_U_O_Sicario_Rifleman_01: TACU_Main_U_OPFOR_Soldier_Base {
    author = "Mike";
    displayName = "Cartel Sicario (Glock)";
    faction = "TACU_Cartel_O";
    scope = 1;
    scopeCurator = 1;
    model = "\A3\characters_F\OPFOR\o_soldier_01.p3d";
    identityTypes[] = {"LanguageFRE_F", "Head_Tanoan", "NoGlasses"};
    genericNames = "TanoanMen";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "tacs_Suit_VIP";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "V_Rangemaster_belt", "G_Aviator"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "V_Rangemaster_belt", "G_Aviator"};
    Items[] = {mag_5("ACE_fieldDressing")};
    respawnItems[] = {mag_5("ACE_fieldDressing")};
    weapons[] = {"CUP_hgun_Glock17", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_Glock17", "Throw", "Put"};
    magazines[] = {mag_4("CUP_17Rnd_9x19_glock17"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_4("CUP_17Rnd_9x19_glock17"), mag_2("HandGrenade"), "SmokeShell"};
    headgearList[] = {
        "", 1
    };
    CBA_facewearList[] = {
        "G_Aviator", 1
    };
};

class TACU_Cartel_U_O_Sicario_Rifleman_02: TACU_Cartel_U_O_Sicario_Rifleman_01 {
    displayName = "Cartel Sicario (Gold AK)";
    uniformClass = "tacs_Suit_VIP";
    weapons[] = {"CUP_arifle_AKS_Gold", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AKS_Gold", "Throw", "Put"};
    magazines[] = {mag_2("tacgt_30Rnd_762x39_EPR_Metal"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_2("tacgt_30Rnd_762x39_EPR_Metal"), mag_2("HandGrenade"), "SmokeShell"};
};

class TACU_Cartel_U_O_Sicario_Rifleman_03: TACU_Cartel_U_O_Sicario_Rifleman_01 {
    displayName = "Sicario (AK)";
    uniformClass = "tacs_Uniform_Combat_LS_BS_GP_TB";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "V_PlateCarrierIA1_dgtl", "G_Aviator"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "V_PlateCarrierIA1_dgtl", "G_Aviator"};
    weapons[] = {"CUP_arifle_AKS74_top_rail", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AKS74_top_rail", "Throw", "Put"};
    magazines[] = {mag_2("tacgt_30Rnd_545x39_EPR_Black"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_2("tacgt_30Rnd_545x39_EPR_Black"), mag_2("HandGrenade"), "SmokeShell"};
};

class TACU_Cartel_U_O_Sicario_Rifleman_04: TACU_Cartel_U_O_Sicario_Rifleman_01 {
    displayName = "Sicario (SA58)";
    uniformClass = "tacs_Uniform_Combat_LS_BS_GP_TB";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "V_PlateCarrierIA1_dgtl", "G_Aviator"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "V_PlateCarrierIA1_dgtl", "G_Aviator"};
    weapons[] = {"CUP_arifle_Sa58RIS2", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_Sa58RIS2", "Throw", "Put"};
    magazines[] = {mag_2("CUP_30Rnd_Sa58_M"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_2("CUP_30Rnd_Sa58_M"), mag_2("HandGrenade"), "SmokeShell"};
};

class TACU_Cartel_U_O_Sicario_Rifleman_AT: TACU_Cartel_U_O_Sicario_Rifleman_01 {
    displayName = "Sicario (AT)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    uniformClass = "tacs_Uniform_Combat_LS_BS_GP_TB";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "V_PlateCarrierIA1_dgtl", "G_Aviator"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "V_PlateCarrierIA1_dgtl", "G_Aviator"};
    weapons[] = {"CUP_arifle_Sa58RIS2", "CUP_launch_RPG7V", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_Sa58RIS2", "CUP_launch_RPG7V", "Throw", "Put"};
    magazines[] = {mag_2("CUP_30Rnd_Sa58_M_TracerG"), mag_2("HandGrenade"), "RPG7_F", "SmokeShell"};
    respawnMagazines[] = {mag_2("CUP_30Rnd_Sa58_M_TracerG"), mag_2("HandGrenade"), "RPG7_F", "SmokeShell"};
};

class TACU_Cartel_U_O_Sicario_Rifleman_MG: TACU_Cartel_U_O_Sicario_Rifleman_01 {
    displayName = "Sicario (SPW)";
    icon = "iconManMG";
    role = "MachineGunner";
    uniformClass = "tacs_Uniform_Combat_LS_BS_GP_TB";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "V_PlateCarrierIA1_dgtl", "G_Aviator"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "V_PlateCarrierIA1_dgtl", "G_Aviator"};
    weapons[] = {"LMG_03_F", "Throw", "Put"};
    respawnWeapons[] = {"LMG_03_F", "Throw", "Put"};
    magazines[] = {mag_2("tacgt_200Rnd_556x45_EPR_Belt"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_2("tacgt_200Rnd_556x45_EPR_Belt"), mag_2("HandGrenade"), "SmokeShell"};
};

class TACU_Cartel_U_O_Sicario_Grenadier: TACU_Cartel_U_O_Sicario_Rifleman_01 {
    displayName = "Sicario (GL)";
    role = "Grenadier";
    uniformClass = "tacs_Uniform_Combat_LS_BS_GP_TB";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "V_PlateCarrierIA1_dgtl", "G_Aviator"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "V_PlateCarrierIA1_dgtl", "G_Aviator"};
    weapons[] = {"CUP_arifle_AK74_GL", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AK74_GL", "Throw", "Put"};
    magazines[] = {mag_2("tacgt_30Rnd_545x39_EPR_Black"), mag_2("HandGrenade"), mag_3("CUP_1Rnd_HE_GP25_M"), "SmokeShell"};
    respawnMagazines[] = {mag_2("tacgt_30Rnd_545x39_EPR_Black"), mag_2("HandGrenade"), mag_3("CUP_1Rnd_HE_GP25_M"), "SmokeShell"};
};
