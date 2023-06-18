// Units - Vanguard Contractors Green
class TACU_Vanguard_U_Contractor_Green_Rifleman_01: TACU_Main_U_INDEP_Soldier_Base {
    author = "Mike";
    displayName = "Rifleman (F2000)";
    faction = "TACU_Vanguard";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageENG_F", "Head_NATO", "G_NATO_default"};
    genericNames = "NATOMen";
    icon = "iconMan";
    role = "Rifleman";
    sensitivityEar = 0.15;
    uniformClass = "tacs_Uniform_Garment_RS_GS_GP_BB";
    backpack = "";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_HelmetSpecB", "TACU_Vanguard_V_PlateCarrier_Foliage"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_HelmetSpecB", "TACU_Vanguard_V_PlateCarrier_Foliage"};
    Items[] = {mag_5("ACE_fieldDressing")};
    respawnItems[] = {mag_5("ACE_fieldDressing")};
    weapons[] = {"arifle_Mk20_ACO_F", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_Mk20_ACO_F", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    magazines[] = {mag_7("tacgt_AI_30Rnd_556x45_STANAG"), mag_2("tacgt_AI_11Rnd_45ACP_FNX"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("tacgt_AI_30Rnd_556x45_STANAG"), mag_2("tacgt_AI_11Rnd_45ACP_FNX"), mag_2("HandGrenade"), "SmokeShell"};
    headgearList[] = {
        "H_HelmetSpecB", 1
    };
    editorSubcategory = "TACU_Vanguard_EdSubCat_Contractors_Green";
    //EDITORPREVIEW(Vanguard_U_Contractor_Green_Rifleman_01)
};

class TACU_Vanguard_U_O_Contractor_Green_Rifleman_01: TACU_Vanguard_U_Contractor_Green_Rifleman_01 {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Contractor_Green_Rifleman_02: TACU_Vanguard_U_Contractor_Green_Rifleman_01 {
    displayName = "Rifleman (AK12)";
    uniformClass = "tacs_Uniform_Garment_RS_GS_GP_BB";
    weapons[] = {"arifle_AK12_lush_F", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_AK12_lush_F", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    magazines[] = {mag_7("tacgt_AI_30Rnd_762x39_AK"), mag_2("tacgt_AI_11Rnd_45ACP_FNX"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("tacgt_AI_30Rnd_762x39_AK"), mag_2("tacgt_AI_11Rnd_45ACP_FNX"), mag_2("HandGrenade"), "SmokeShell"};
    //EDITORPREVIEW(Vanguard_U_Contractor_Green_Rifleman_02)
};

class TACU_Vanguard_U_O_Contractor_Green_Rifleman_02: TACU_Vanguard_U_Contractor_Green_Rifleman_02 {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Contractor_Green_Rifleman_AT: TACU_Vanguard_U_Contractor_Green_Rifleman_01 {
    displayName = "Rifleman (AT)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    uniformClass = "tacs_Uniform_Garment_RS_GS_GP_BB";
    weapons[] = {"TACU_Vanguard_W_CTAR_Green", "hgun_Pistol_heavy_01_green_F", "launch_MRAWS_green_rail_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Vanguard_W_CTAR_Green", "hgun_Pistol_heavy_01_green_F", "launch_MRAWS_green_rail_F", "Throw", "Put"};
    magazines[] = {mag_7("tacgt_AI_30Rnd_58x42"), mag_2("tacgt_AI_11Rnd_45ACP_FNX"), "MRAWS_HEAT_F", mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("tacgt_AI_30Rnd_58x42"), mag_2("tacgt_AI_11Rnd_45ACP_FNX"), "MRAWS_HEAT_F", mag_2("HandGrenade"), "SmokeShell"};
    //EDITORPREVIEW(Vanguard_U_Contractor_Green_Rifleman_AT)
};

class TACU_Vanguard_U_O_Contractor_Green_Rifleman_AT: TACU_Vanguard_U_Contractor_Green_Rifleman_AT {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Contractor_Green_Grenadier: TACU_Vanguard_U_Contractor_Green_Rifleman_01 {
    displayName = "Grenadier";
    role = "Grenadier";
    uniformClass = "tacs_Uniform_Garment_RS_GS_GP_BB";
    weapons[] = {"TACU_Vanguard_W_HK416GL_Green", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Vanguard_W_HK416GL_Green", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    magazines[] = {mag_7("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("1Rnd_HE_Grenade_shell"), mag_2("tacgt_AI_11Rnd_45ACP_FNX"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("1Rnd_HE_Grenade_shell"), mag_2("tacgt_AI_11Rnd_45ACP_FNX"), mag_2("HandGrenade"), "SmokeShell"};
    //EDITORPREVIEW(Vanguard_U_Contractor_Green_Grenadier)
};

class TACU_Vanguard_U_O_Contractor_Green_Grenadier: TACU_Vanguard_U_Contractor_Green_Grenadier {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Contractor_Green_Marksman: TACU_Vanguard_U_Contractor_Green_Rifleman_01 {
    displayName = "Marksman";
    role = "Marksman";
    uniformClass = "tacs_Uniform_Garment_RS_GS_GP_BB";
    weapons[] = {"TACU_Vanguard_W_SIG556_Green", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Vanguard_W_SIG556_Green", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    magazines[] = {mag_7("tacgt_AI_20Rnd_762x51"), mag_2("tacgt_AI_11Rnd_45ACP_FNX"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("tacgt_AI_20Rnd_762x51"), mag_2("tacgt_AI_11Rnd_45ACP_FNX"), mag_2("HandGrenade"), "SmokeShell"};
    //EDITORPREVIEW(Vanguard_U_Contractor_Green_Marksman)
};

class TACU_Vanguard_U_O_Contractor_Green_Marksman: TACU_Vanguard_U_Contractor_Green_Marksman {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Contractor_Green_Driver: TACU_Vanguard_U_Contractor_Green_Rifleman_01 {
    displayName = "Driver";
    role = "Crewman";
    uniformClass = "tacs_Uniform_Garment_RS_GS_GP_BB";
    weapons[] = {"SMG_02_ACO_F", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    respawnWeapons[] = {"SMG_02_ACO_F", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    magazines[] = {mag_4("tacgt_AI_30Rnd_9x19"), mag_2("tacgt_AI_11Rnd_45ACP_FNX"), "SmokeShell"};
    respawnMagazines[] = {mag_4("tacgt_AI_30Rnd_9x19"), mag_2("tacgt_AI_11Rnd_45ACP_FNX"), "SmokeShell"};
    //EDITORPREVIEW(Vanguard_U_Contractor_Green_Driver)
};

class TACU_Vanguard_U_O_Contractor_Green_Driver: TACU_Vanguard_U_Contractor_Green_Driver {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Contractor_Green_TeamLeader: TACU_Vanguard_U_Contractor_Green_Rifleman_01 {
    displayName = "Team Leader";
    icon = "iconManLeader";
    uniformClass = "tacs_Uniform_Garment_RS_GS_GP_BB";
    weapons[] = {"TACU_Vanguard_W_MX_Green", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Vanguard_W_MX_Green", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    magazines[] = {mag_7("30Rnd_65x39_caseless_khaki_mag"), mag_2("tacgt_AI_11Rnd_45ACP_FNX"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("30Rnd_65x39_caseless_khaki_mag"), mag_2("tacgt_AI_11Rnd_45ACP_FNX"), mag_2("HandGrenade"), "SmokeShell"};
    //EDITORPREVIEW(Vanguard_U_Contractor_Green_TeamLeader)
};

class TACU_Vanguard_U_O_Contractor_Green_TeamLeader: TACU_Vanguard_U_Contractor_Green_TeamLeader {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Contractor_Green_Autorifleman: TACU_Vanguard_U_Contractor_Green_Rifleman_01 {
    displayName = "Autorifleman";
    icon = "iconManMG";
    role = "MachineGunner";
    uniformClass = "tacs_Uniform_Garment_RS_GS_GP_BB";
    weapons[] = {"TACU_Vanguard_W_Stoner_Black", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Vanguard_W_Stoner_Black", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    magazines[] = {mag_2("tacgt_AI_200Rnd_65x39_Belt"), mag_2("tacgt_AI_11Rnd_45ACP_FNX")};
    respawnMagazines[] = {mag_2("tacgt_AI_200Rnd_65x39_Belt"), mag_2("tacgt_AI_11Rnd_45ACP_FNX")};
    //EDITORPREVIEW(Vanguard_U_Contractor_Green_Autorifleman)
};

class TACU_Vanguard_U_O_Contractor_Green_Autorifleman: TACU_Vanguard_U_Contractor_Green_Autorifleman {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Contractor_Green_Medic: TACU_Vanguard_U_Contractor_Green_Rifleman_01 {
    displayName = "Medic";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    uniformClass = "tacs_Uniform_Garment_RS_GS_GP_BB";
    backpack = "tacs_Backpack_Kitbag_Medic_Sage";
    weapons[] = {"arifle_Mk20C_ACO_F", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_Mk20C_ACO_F", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    magazines[] = {mag_4("tacgt_AI_30Rnd_556x45_STANAG"), mag_2("tacgt_AI_11Rnd_45ACP_FNX"), "SmokeShell"};
    respawnMagazines[] = {mag_4("tacgt_AI_30Rnd_556x45_STANAG"), mag_2("tacgt_AI_11Rnd_45ACP_FNX"), "SmokeShell"};
    //EDITORPREVIEW(Vanguard_U_Contractor_Green_Medic)
};

class TACU_Vanguard_U_O_Contractor_Green_Medic: TACU_Vanguard_U_Contractor_Green_Medic {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Contractor_Green_Engineer: TACU_Vanguard_U_Contractor_Green_Rifleman_01 {
    displayName = "Engineer";
    icon = "iconManEngineer";
    role = "Sapper";
    engineer = 1;
    uniformClass = "tacs_Uniform_Garment_RS_GS_GP_BB";
    backpack = "I_Fieldpack_oli_Repair";
    weapons[] = {"TACU_Vanguard_W_CTAR_Green", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Vanguard_W_CTAR_Green", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    magazines[] = {mag_4("tacgt_AI_30Rnd_58x42"), mag_2("tacgt_AI_11Rnd_45ACP_FNX"), "SmokeShell"};
    respawnMagazines[] = {mag_4("tacgt_AI_30Rnd_58x42"), mag_2("tacgt_AI_11Rnd_45ACP_FNX"), "SmokeShell"};
    //EDITORPREVIEW(Vanguard_U_Contractor_Green_Engineer)
};

class TACU_Vanguard_U_O_Contractor_Green_Engineer: TACU_Vanguard_U_Contractor_Green_Engineer {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Contractor_Pilot: TACU_Vanguard_U_Contractor_Green_Rifleman_01 {
    displayName = "Pilot";
    role = "Crewman";
    engineer = 1;
    uniformClass = "tacs_Uniform_Garment_LS_TS_TP_TB";
    backpack = "B_Parachute";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_PilotHelmetHeli_B"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_PilotHelmetHeli_B"};
    weapons[] = {"SMG_02_F", "Throw", "Put"};
    respawnWeapons[] = {"SMG_02_F", "Throw", "Put"};
    magazines[] = {mag_2("tacgt_AI_30Rnd_9x19"), "SmokeShell"};
    respawnMagazines[] = {mag_2("tacgt_AI_30Rnd_9x19"), "SmokeShell"};
    //EDITORPREVIEW(Vanguard_U_Contractor_Pilot)
};

class TACU_Vanguard_U_O_Contractor_Pilot: TACU_Vanguard_U_Contractor_Pilot {
    side = 0;
    faction = "TACU_Vanguard_O";
};
