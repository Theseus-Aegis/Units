// Units - Vanguard Contractors Green
class TACU_Vanguard_U_Contractor_Green_Rifleman_01: TACU_Main_U_INDEP_Soldier_Base {
    author = "Tyrone";
    displayName = "Rifleman (F2000)";
    faction = "TACU_Vanguard";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageENG_F", "Head_NATO", "G_NATO_default"};
    genericNames = "NATOMen";
    icon = "iconMan";
    role = "Rifleman";
    sensitivity = 2;
    sensitivityEar = 0.15;
    uniformClass = "tacs_Uniform_Garment_RS_GS_GP_BB";
    backpack = "";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_HelmetSpecB", "CUP_FR_NeckScarf", "V_PlateCarrier2_rgr_noflag_F"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_HelmetSpecB", "CUP_FR_NeckScarf", "V_PlateCarrier2_rgr_noflag_F"};
    Items[] = {mag_5("ACE_fieldDressing")};
    respawnItems[] = {mag_5("ACE_fieldDressing")};
    weapons[] = {"arifle_Mk20_ACO_F", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_Mk20_ACO_F", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    magazines[] = {mag_7("tacgt_30Rnd_556x45_M855A1_EMAG"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("tacgt_30Rnd_556x45_M855A1_EMAG"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    headgearList[] = {
        "H_HelmetSpecB", 1
    };
    CBA_facewearList[] = {
        "CUP_FR_NeckScarf", 1
    };
    editorSubcategory = "TACU_Vanguard_EdSubCat_Contractors_Green";
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Green_Rifleman_01.jpg);
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
    magazines[] = {mag_7("tacgt_30Rnd_762x39_AK12_Lush_BP_Mag"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("tacgt_30Rnd_762x39_AK12_Lush_BP_Mag"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Green_Rifleman_02.jpg);
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
    magazines[] = {mag_7("30Rnd_580x42_Mag_F"), mag_2("11Rnd_45ACP_Mag"), "MRAWS_HEAT_F", mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("30Rnd_580x42_Mag_F"), mag_2("11Rnd_45ACP_Mag"), "MRAWS_HEAT_F", mag_2("HandGrenade"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Green_Rifleman_AT.jpg);
};

class TACU_Vanguard_U_O_Contractor_Green_Rifleman_AT: TACU_Vanguard_U_Contractor_Green_Rifleman_AT {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Contractor_Green_Grenadier: TACU_Vanguard_U_Contractor_Green_Rifleman_01 {
    displayName = "Grenadier";
    icon = "iconMan";
    role = "Grenadier";
    uniformClass = "tacs_Uniform_Garment_RS_GS_GP_BB";
    weapons[] = {"TACU_Vanguard_W_HK416GL_Green", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Vanguard_W_HK416GL_Green", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    magazines[] = {mag_7("tacgt_30Rnd_556x45_M855A1_EMAG"), mag_3("1Rnd_HE_Grenade_shell"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("tacgt_30Rnd_556x45_M855A1_EMAG"), mag_3("1Rnd_HE_Grenade_shell"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Green_Grenadier.jpg);
};

class TACU_Vanguard_U_O_Contractor_Green_Grenadier: TACU_Vanguard_U_Contractor_Green_Grenadier {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Contractor_Green_Marksman: TACU_Vanguard_U_Contractor_Green_Rifleman_01 {
    displayName = "Marksman";
    role = "Marksman";
    sensitivity = 2.25;
    uniformClass = "tacs_Uniform_Garment_RS_GS_GP_BB";
    weapons[] = {"TACU_Vanguard_W_SIG556_Green", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Vanguard_W_SIG556_Green", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    magazines[] = {mag_7("20Rnd_762x51_Mag"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("20Rnd_762x51_Mag"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Green_Marksman.jpg);
};

class TACU_Vanguard_U_O_Contractor_Green_Marksman: TACU_Vanguard_U_Contractor_Green_Marksman {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Contractor_Green_Driver: TACU_Vanguard_U_Contractor_Green_Rifleman_01 {
    displayName = "Driver";
    uniformClass = "tacs_Uniform_Garment_RS_GS_GP_BB";
    weapons[] = {"SMG_02_ACO_F", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    respawnWeapons[] = {"SMG_02_ACO_F", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    magazines[] = {mag_4("30Rnd_9x21_Mag_SMG_02"), mag_2("11Rnd_45ACP_Mag"), "SmokeShell"};
    respawnMagazines[] = {mag_4("30Rnd_9x21_Mag_SMG_02"), mag_2("11Rnd_45ACP_Mag"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Green_Driver.jpg);
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
    magazines[] = {mag_7("30Rnd_65x39_caseless_khaki_mag"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("30Rnd_65x39_caseless_khaki_mag"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Green_TeamLeader.jpg);
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
    magazines[] = {mag_2("200Rnd_65x39_cased_Box"), mag_2("11Rnd_45ACP_Mag")};
    respawnMagazines[] = {mag_2("200Rnd_65x39_cased_Box"), mag_2("11Rnd_45ACP_Mag")};
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Green_Autorifleman.jpg);
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
    magazines[] = {mag_4("tacgt_30Rnd_556x45_M855A1_EMAG"), mag_2("11Rnd_45ACP_Mag"), "SmokeShell"};
    respawnMagazines[] = {mag_4("tacgt_30Rnd_556x45_M855A1_EMAG"), mag_2("11Rnd_45ACP_Mag"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Green_Medic.jpg);
};

class TACU_Vanguard_U_O_Contractor_Green_Medic: TACU_Vanguard_U_Contractor_Green_Medic {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Contractor_Green_Engineer: TACU_Vanguard_U_Contractor_Green_Rifleman_01 {
    displayName = "Engineer";
    icon = "iconManEngineer";
    role = "Sapper";
    engineer = true;
    uniformClass = "tacs_Uniform_Garment_RS_GS_GP_BB";
    backpack = "I_Fieldpack_oli_Repair";
    weapons[] = {"TACU_Vanguard_W_CTAR_Green", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Vanguard_W_CTAR_Green", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    magazines[] = {mag_4("30Rnd_580x42_Mag_F"), mag_2("11Rnd_45ACP_Mag"), "SmokeShell"};
    respawnMagazines[] = {mag_4("30Rnd_580x42_Mag_F"), mag_2("11Rnd_45ACP_Mag"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Green_Engineer.jpg);
};

class TACU_Vanguard_U_O_Contractor_Green_Engineer: TACU_Vanguard_U_Contractor_Green_Engineer {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Contractor_Pilot: TACU_Vanguard_U_Contractor_Green_Rifleman_01 {
    displayName = "Pilot";
    icon = "iconManEngineer";
    role = "Sapper";
    engineer = true;
    uniformClass = "tacs_Uniform_Garment_LS_TS_TP_TB";
    backpack = "B_Parachute";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_PilotHelmetHeli_B"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_PilotHelmetHeli_B"};
    weapons[] = {"SMG_02_F", "Throw", "Put"};
    respawnWeapons[] = {"SMG_02_F", "Throw", "Put"};
    magazines[] = {mag_2("30Rnd_9x21_Mag_SMG_02"), "SmokeShell"};
    respawnMagazines[] = {mag_2("30Rnd_9x21_Mag_SMG_02"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Pilot.jpg);
};

class TACU_Vanguard_U_O_Contractor_Pilot: TACU_Vanguard_U_Contractor_Pilot {
    side = 0;
    faction = "TACU_Vanguard_O";
};
