// Units - Vanguard Contractors Sand
class TACU_Vanguard_U_Contractor_Sand_Rifleman_01: TACU_Main_U_INDEP_Soldier_Base {
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
    uniformClass = "tacs_Uniform_Garment_RS_TS_TP_TB";
    backpack = "";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_HelmetSpecB_sand", "CUP_FR_NeckScarf2", "milgp_v_jpc_assaulter_belt_khk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_HelmetSpecB_sand", "CUP_FR_NeckScarf2", "milgp_v_jpc_assaulter_belt_khk"};
    Items[] = {mag_5("ACE_fieldDressing")};
    respawnItems[] = {mag_5("ACE_fieldDressing")};
    weapons[] = {"TACU_Vanguard_W_F2000_Sand", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Vanguard_W_F2000_Sand", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_7("tacgt_30Rnd_556x45_M855A1_EMAG_Tan"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("tacgt_30Rnd_556x45_M855A1_EMAG_Tan"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    headgearList[] = {
        "H_HelmetSpecB_sand", 1
    };
    CBA_facewearList[] = {
        "CUP_FR_NeckScarf2", 1
    };
    editorSubcategory = "TACU_Vanguard_EdSubCat_Contractors_Sand";
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Sand_Rifleman_01.jpg);
};

class TACU_Vanguard_U_O_Contractor_Sand_Rifleman_01: TACU_Vanguard_U_Contractor_Sand_Rifleman_01 {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Contractor_Sand_Rifleman_02: TACU_Vanguard_U_Contractor_Sand_Rifleman_01 {
    displayName = "Rifleman (AK12)";
    uniformClass = "tacs_Uniform_Garment_RS_TS_TP_TB";
    weapons[] = {"arifle_AK12_arid_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_AK12_arid_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_7("tacgt_30Rnd_762x39_AK12_Arid_BP_Mag"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("tacgt_30Rnd_762x39_AK12_Arid_BP_Mag"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Sand_Rifleman_02.jpg);
};

class TACU_Vanguard_U_O_Contractor_Sand_Rifleman_02: TACU_Vanguard_U_Contractor_Sand_Rifleman_02 {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Contractor_Sand_Rifleman_AT: TACU_Vanguard_U_Contractor_Sand_Rifleman_01 {
    displayName = "Rifleman (AT)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    uniformClass = "tacs_Uniform_Garment_RS_TS_TP_TB";
    weapons[] = {"TACU_Vanguard_W_CTAR_Sand", "hgun_Pistol_heavy_01_F", "launch_MRAWS_sand_rail_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Vanguard_W_CTAR_Sand", "hgun_Pistol_heavy_01_F", "launch_MRAWS_sand_rail_F", "Throw", "Put"};
    magazines[] = {mag_7("tacgt_30Rnd_580x42_DBP88"), mag_2("11Rnd_45ACP_Mag"), "MRAWS_HEAT_F", mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("tacgt_30Rnd_580x42_DBP88"), mag_2("11Rnd_45ACP_Mag"), "MRAWS_HEAT_F", mag_2("HandGrenade"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Sand_Rifleman_AT.jpg);
};

class TACU_Vanguard_U_O_Contractor_Sand_Rifleman_AT: TACU_Vanguard_U_Contractor_Sand_Rifleman_AT {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Contractor_Sand_Grenadier: TACU_Vanguard_U_Contractor_Sand_Rifleman_01 {
    displayName = "Grenadier";
    icon = "iconMan";
    role = "Grenadier";
    uniformClass = "tacs_Uniform_Garment_RS_TS_TP_TB";
    weapons[] = {"TACU_Vanguard_W_HK416GL_Sand", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Vanguard_W_HK416GL_Sand", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_7("tacgt_30Rnd_556x45_M855A1_EMAG_Tan"), mag_3("1Rnd_HE_Grenade_shell"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("tacgt_30Rnd_556x45_M855A1_EMAG_Tan"), mag_3("1Rnd_HE_Grenade_shell"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Sand_Grenadier.jpg);
};

class TACU_Vanguard_U_O_Contractor_Sand_Grenadier: TACU_Vanguard_U_Contractor_Sand_Grenadier {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Contractor_Sand_Marksman: TACU_Vanguard_U_Contractor_Sand_Rifleman_01 {
    displayName = "Marksman";
    role = "Marksman";
    sensitivity = 2.25;
    uniformClass = "tacs_Uniform_Garment_RS_TS_TP_TB";
    weapons[] = {"TACU_Vanguard_W_SIG556_Sand", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Vanguard_W_SIG556_Sand", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_7("ACE_20Rnd_762x51_M993_AP_Mag"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("ACE_20Rnd_762x51_M993_AP_Mag"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Sand_Marksman.jpg);
};

class TACU_Vanguard_U_O_Contractor_Sand_Marksman: TACU_Vanguard_U_Contractor_Sand_Marksman {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Contractor_Sand_Driver: TACU_Vanguard_U_Contractor_Sand_Rifleman_01 {
    displayName = "Driver";
    uniformClass = "tacs_Uniform_Garment_RS_TS_TP_TB";
    weapons[] = {"SMG_02_ACO_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"SMG_02_ACO_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_4("30Rnd_9x21_Mag_SMG_02"), mag_2("11Rnd_45ACP_Mag"), "SmokeShell"};
    respawnMagazines[] = {mag_4("30Rnd_9x21_Mag_SMG_02"), mag_2("11Rnd_45ACP_Mag"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Sand_Driver.jpg);
};

class TACU_Vanguard_U_O_Contractor_Sand_Driver: TACU_Vanguard_U_Contractor_Sand_Driver {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Contractor_Sand_TeamLeader: TACU_Vanguard_U_Contractor_Sand_Rifleman_01 {
    displayName = "Team Leader";
    icon = "iconManLeader";
    uniformClass = "tacs_Uniform_Garment_RS_TS_TP_TB";
    weapons[] = {"arifle_MX_Hamr_pointer_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_MX_Hamr_pointer_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_7("30Rnd_65x39_caseless_mag"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("30Rnd_65x39_caseless_mag"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Sand_TeamLeader.jpg);
};

class TACU_Vanguard_U_O_Contractor_Sand_TeamLeader: TACU_Vanguard_U_Contractor_Sand_TeamLeader {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Contractor_Sand_Autorifleman: TACU_Vanguard_U_Contractor_Sand_Rifleman_01 {
    displayName = "Autorifleman";
    icon = "iconManMG";
    role = "MachineGunner";
    uniformClass = "tacs_Uniform_Garment_RS_TS_TP_TB";
    weapons[] = {"LMG_Mk200_MRCO_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"LMG_Mk200_MRCO_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_2("200Rnd_65x39_cased_Box"), mag_2("11Rnd_45ACP_Mag")};
    respawnMagazines[] = {mag_2("200Rnd_65x39_cased_Box"), mag_2("11Rnd_45ACP_Mag")};
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Sand_Autorifleman.jpg);
};

class TACU_Vanguard_U_O_Contractor_Sand_Autorifleman: TACU_Vanguard_U_Contractor_Sand_Autorifleman {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Contractor_Sand_Medic: TACU_Vanguard_U_Contractor_Sand_Rifleman_01 {
    displayName = "Medic";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    uniformClass = "tacs_Uniform_Garment_RS_TS_TP_TB";
    backpack = "tacs_Backpack_Kitbag_Medic_Tan";
    weapons[] = {"TACU_Vanguard_W_F2000_Sand", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Vanguard_W_F2000_Sand", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_4("tacgt_30Rnd_556x45_M855A1_EMAG_Tan"), mag_2("11Rnd_45ACP_Mag"), "SmokeShell"};
    respawnMagazines[] = {mag_4("tacgt_30Rnd_556x45_M855A1_EMAG_Tan"), mag_2("11Rnd_45ACP_Mag"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Sand_Medic.jpg);
};

class TACU_Vanguard_U_O_Contractor_Sand_Medic: TACU_Vanguard_U_Contractor_Sand_Medic {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Contractor_Sand_Engineer: TACU_Vanguard_U_Contractor_Sand_Rifleman_01 {
    displayName = "Engineer";
    icon = "iconManEngineer";
    role = "Sapper";
    engineer = true;
    uniformClass = "tacs_Uniform_Garment_RS_TS_TP_TB";
    backpack = "B_Kitbag_mcamo_Eng";
    weapons[] = {"TACU_Vanguard_W_CTAR_Sand", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Vanguard_W_CTAR_Sand", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_4("tacgt_30Rnd_580x42_DBP88"), mag_2("11Rnd_45ACP_Mag"), "SmokeShell"};
    respawnMagazines[] = {mag_4("tacgt_30Rnd_580x42_DBP88"), mag_2("11Rnd_45ACP_Mag"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Sand_Engineer.jpg);
};

class TACU_Vanguard_U_O_Contractor_Sand_Engineer: TACU_Vanguard_U_Contractor_Sand_Engineer {
    side = 0;
    faction = "TACU_Vanguard_O";
};
