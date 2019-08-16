// Units - Vanguard Guarding Division
class TACU_Vanguard_U_Contractor_Guard_Rifleman_01: TACU_Main_U_INDEP_Soldier_Base {
    author = "Tyrone";
    displayName = "Guard (P90)";
    faction = "TACU_Vanguard";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageENG_F", "Head_NATO", "G_NATO_default"};
    genericNames = "NATOMen";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "tacs_Uniform_Garment_RS_GS_GP_BB";
    backpack = "";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "G_Aviator", "V_BandollierB_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "G_Aviator", "V_BandollierB_blk"};
    Items[] = {mag_5("ACE_fieldDressing")};
    respawnItems[] = {mag_5("ACE_fieldDressing")};
    weapons[] = {"SMG_03C_black", "CUP_hgun_M9", "Throw", "Put"};
    respawnWeapons[] = {"SMG_03C_black", "CUP_hgun_M9", "Throw", "Put"};
    magazines[] = {mag_3("50Rnd_570x28_SMG_03"), mag_2("CUP_15Rnd_9x19_M9"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_3("50Rnd_570x28_SMG_03"), mag_2("CUP_15Rnd_9x19_M9"), mag_2("HandGrenade"), "SmokeShell"};
    headgearList[] = {
        "None", 1
    };
    TACU_allowedFacewear[] = {
        "G_Aviator", 1
    };
    editorSubcategory = "TACU_Vanguard_EdSubCat_Guards";
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Guard_Rifleman_01.jpg);
};

class TACU_Vanguard_U_Contractor_Guard_Rifleman_02: TACU_Vanguard_U_Contractor_Guard_Rifleman_01 {
    displayName = "Guard (MP5)";
    uniformClass = "tacs_Uniform_Combat_LS_CPS_BP_BB";
    weapons[] = {"hlc_smg_mp5a2", "CUP_hgun_M9", "Throw", "Put"};
    respawnWeapons[] = {"hlc_smg_mp5a2", "CUP_hgun_M9", "Throw", "Put"};
    magazines[] = {mag_3("hlc_30Rnd_9x19_B_MP5"), mag_2("CUP_15Rnd_9x19_M9"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_3("hlc_30Rnd_9x19_B_MP5"), mag_2("CUP_15Rnd_9x19_M9"), mag_2("HandGrenade"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Guard_Rifleman_02.jpg);
};

class TACU_Vanguard_U_Contractor_Guard_Rifleman_03: TACU_Vanguard_U_Contractor_Guard_Rifleman_01 {
    displayName = "Guard (CPW)";
    uniformClass = "tacs_Uniform_Combat_LS_CLBS_GP_BB";
    weapons[] = {"hgun_PDW2000_F", "CUP_hgun_M9", "Throw", "Put"};
    respawnWeapons[] = {"hgun_PDW2000_F", "CUP_hgun_M9", "Throw", "Put"};
    magazines[] = {mag_3("30Rnd_9x21_Mag"), mag_2("CUP_15Rnd_9x19_M9"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_3("30Rnd_9x21_Mag"), mag_2("CUP_15Rnd_9x19_M9"), mag_2("HandGrenade"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Guard_Rifleman_03.jpg);
};

class TACU_Vanguard_U_Contractor_Guard_Rifleman_04: TACU_Vanguard_U_Contractor_Guard_Rifleman_01 {
    displayName = "Guard (Saiga)";
    uniformClass = "tacs_Uniform_Combat_RS_CDBS_GP_TB";
    weapons[] = {"CUP_sgun_Saiga12K", "CUP_hgun_M9", "Throw", "Put"};
    respawnWeapons[] = {"CUP_sgun_Saiga12K", "CUP_hgun_M9", "Throw", "Put"};
    magazines[] = {mag_3("CUP_8Rnd_B_Saiga12_74Pellets_M"), mag_2("CUP_15Rnd_9x19_M9"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_3("CUP_8Rnd_B_Saiga12_74Pellets_M"), mag_2("CUP_15Rnd_9x19_M9"), mag_2("HandGrenade"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Guard_Rifleman_04.jpg);
};

class TACU_Vanguard_U_Contractor_Guard_Rifleman_05: TACU_Vanguard_U_Contractor_Guard_Rifleman_01 {
    displayName = "Guard (HK416C)";
    uniformClass = "tacs_Uniform_Combat_RS_CDFS_GP_TB";
    weapons[] = {"hlc_rifle_416C", "CUP_hgun_M9", "Throw", "Put"};
    respawnWeapons[] = {"hlc_rifle_416C", "CUP_hgun_M9", "Throw", "Put"};
    magazines[] = {mag_3("hlc_30rnd_556x45_EPR"), mag_2("CUP_15Rnd_9x19_M9"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_3("hlc_30rnd_556x45_EPR"), mag_2("CUP_15Rnd_9x19_M9"), mag_2("HandGrenade"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Guard_Rifleman_05.jpg);
};

class TACU_Vanguard_U_Contractor_Guard_Rifleman_06: TACU_Vanguard_U_Contractor_Guard_Rifleman_01 {
    displayName = "Guard (AKS-74U)";
    uniformClass = "tacs_Uniform_Combat_RS_CPS_BP_BB";
    weapons[] = {"arifle_AKS_F", "CUP_hgun_M9", "Throw", "Put"};
    respawnWeapons[] = {"arifle_AKS_F", "CUP_hgun_M9", "Throw", "Put"};
    magazines[] = {mag_3("30Rnd_545x39_Mag_F"), mag_2("CUP_15Rnd_9x19_M9"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_3("30Rnd_545x39_Mag_F"), mag_2("CUP_15Rnd_9x19_M9"), mag_2("HandGrenade"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Guard_Rifleman_06.jpg);
};