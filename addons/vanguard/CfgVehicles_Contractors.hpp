// Units - Vanguard Contractors
class TACU_Vanguard_U_Contractor_Rifleman_01: TACU_Main_U_INDEP_Soldier_Base {
    author = CSTRING(Author);
    displayName = "Rifleman (F2000)";
    faction = "TACU_Vanguard";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageENG_F", "Head_NATO", "G_NATO_default"};
    genericNames = "NATOMen";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "tacs_Uniform_Combat_LS_CDBS_GP_TB";
    backpack = "";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_HelmetB_light_black", "tacs_Vest_PlateCarrier_Green"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_HelmetB_light_black", "tacs_Vest_PlateCarrier_Green"};
    Items[] = {mag_5("ACE_fieldDressing")};
    respawnItems[] = {mag_5("ACE_fieldDressing")};
    weapons[] = {"arifle_Mk20_ACO_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_Mk20_ACO_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_7("30Rnd_556x45_Stanag"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("30Rnd_556x45_Stanag"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    headgearList[] = {
        "H_HelmetB_light_black",1
    };
    editorSubcategory = "TACU_Vanguard_EdSubCat_Contractors";
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Rifleman_01.jpg);
};

class TACU_Vanguard_U_Contractor_Rifleman_02: TACU_Vanguard_U_Contractor_Rifleman_01 {
    displayName = "Rifleman (AK12)";
    uniformClass = "tacs_Uniform_Combat_LS_CPS_BP_BB";
    weapons[] = {"arifle_AK12_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_AK12_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_7("30Rnd_762x39_Mag_F"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("30Rnd_762x39_Mag_F"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Rifleman_02.jpg);
};

class TACU_Vanguard_U_Contractor_Rifleman_AT: TACU_Vanguard_U_Contractor_Rifleman_01 {
    displayName = "Rifleman (AT)";
    uniformClass = "tacs_Uniform_Combat_LS_CLRS_TP_BB";
    weapons[] = {"arifle_CTAR_blk_ACO_F", "hgun_Pistol_heavy_01_F", "launch_NLAW_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_CTAR_blk_ACO_F", "hgun_Pistol_heavy_01_F", "launch_NLAW_F", "Throw", "Put"};
    magazines[] = {mag_7("30Rnd_580x42_Mag_F"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("30Rnd_580x42_Mag_F"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Rifleman_AT.jpg);
};

class TACU_Vanguard_U_Contractor_Grenadier: TACU_Vanguard_U_Contractor_Rifleman_01 {
    displayName = "Grenadier";
    uniformClass = "tacs_Uniform_Combat_LS_CLRS_TP_BB";
    weapons[] = {"arifle_SPAR_01_GL_blk_ACO_Pointer_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_SPAR_01_GL_blk_ACO_Pointer_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_7("30Rnd_556x45_Stanag"), mag_3("1Rnd_HE_Grenade_shell"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("30Rnd_556x45_Stanag"), mag_3("1Rnd_HE_Grenade_shell"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Grenadier.jpg);
};

class TACU_Vanguard_U_Contractor_Marksman: TACU_Vanguard_U_Contractor_Rifleman_01 {
    displayName = "Marksman";
    uniformClass = "tacs_Uniform_Combat_LS_CPS_BP_BB";
    weapons[] = {"srifle_EBR_MRCO_LP_BI_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"srifle_EBR_MRCO_LP_BI_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_7("20Rnd_762x51_Mag"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("20Rnd_762x51_Mag"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Marksman.jpg);
};

class TACU_Vanguard_U_Contractor_Driver: TACU_Vanguard_U_Contractor_Rifleman_01 {
    displayName = "Driver";
    uniformClass = "tacs_Uniform_Combat_LS_CDBS_GP_TB";
    weapons[] = {"SMG_02_ACO_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"SMG_02_ACO_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_4("30Rnd_9x21_Mag_SMG_02"), mag_2("11Rnd_45ACP_Mag"), "SmokeShell"};
    respawnMagazines[] = {mag_4("30Rnd_9x21_Mag_SMG_02"), mag_2("11Rnd_45ACP_Mag"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Driver.jpg);
};

class TACU_Vanguard_U_Contractor_TeamLeader: TACU_Vanguard_U_Contractor_Rifleman_01 {
    displayName = "Team Leader";
    uniformClass = "tacs_Uniform_Combat_LS_CDBS_GP_TB";
    weapons[] = {"arifle_MX_Hamr_pointer_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_MX_Hamr_pointer_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_7("30Rnd_65x39_caseless_mag"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("30Rnd_65x39_caseless_mag"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Teamleader.jpg);
};

class TACU_Vanguard_U_Contractor_Autorifleman: TACU_Vanguard_U_Contractor_Rifleman_01 {
    displayName = "Autorifleman";
    uniformClass = "tacs_Uniform_Combat_RS_CLBS_GP_BB";
    weapons[] = {"LMG_Mk200_MRCO_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"LMG_Mk200_MRCO_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_2("200Rnd_65x39_cased_Box"), mag_2("11Rnd_45ACP_Mag")};
    respawnMagazines[] = {mag_2("200Rnd_65x39_cased_Box"), mag_2("11Rnd_45ACP_Mag")};
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Autorifleman.jpg);
};

class TACU_Vanguard_U_Contractor_Medic: TACU_Vanguard_U_Contractor_Rifleman_01 {
    displayName = "Medic";
    uniformClass = "tacs_Uniform_Combat_LS_CLBS_GP_BB";
    backpack = "B_AssaultPack_rgr_Medic";
    weapons[] = {"arifle_Mk20C_ACO_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_Mk20C_ACO_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_4("30Rnd_556x45_Stanag"), mag_2("11Rnd_45ACP_Mag"), "SmokeShell"};
    respawnMagazines[] = {mag_4("30Rnd_556x45_Stanag"), mag_2("11Rnd_45ACP_Mag"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Medic.jpg);
};

class TACU_Vanguard_U_Contractor_Engineer: TACU_Vanguard_U_Contractor_Rifleman_01 {
    displayName = "Engineer";
    uniformClass = "tacs_Uniform_Combat_LS_CLBS_GP_BB";
    backpack = "B_AssaultPack_rgr_Repair";
    weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_4("30Rnd_580x42_Mag_F"), mag_2("11Rnd_45ACP_Mag"), "SmokeShell"};
    respawnMagazines[] = {mag_4("30Rnd_580x42_Mag_F"), mag_2("11Rnd_45ACP_Mag"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Engineer.jpg);
};

class TACU_Vanguard_U_Contractor_Pilot: TACU_Vanguard_U_Contractor_Rifleman_01 {
    displayName = "Pilot";
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
