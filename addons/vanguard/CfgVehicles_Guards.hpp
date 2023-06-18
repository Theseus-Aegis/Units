// Units - Vanguard Guarding Division
class TACU_Vanguard_U_Guard_Rifleman_01: TACU_Main_U_INDEP_Soldier_Base {
    author = "Mike";
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
    magazines[] = {mag_3("tacgt_AI_50Rnd_57x28"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_3("tacgt_AI_50Rnd_57x28"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade"), "SmokeShell"};
    headgearList[] = {
        "None", 1
    };
    CBA_facewearList[] = {
        "G_Aviator", 1
    };
    editorSubcategory = "TACU_Vanguard_EdSubCat_Guards";
    //EDITORPREVIEW(Vanguard_U_Guard_Rifleman_01)
};

class TACU_Vanguard_U_O_Guard_Rifleman_01: TACU_Vanguard_U_Guard_Rifleman_01 {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Guard_Rifleman_02: TACU_Vanguard_U_Guard_Rifleman_01 {
    displayName = "Guard (MP5)";
    uniformClass = "tacs_Uniform_Combat_LS_CPS_BP_BB";
    weapons[] = {"CUP_smg_MP5A5", "CUP_hgun_M9", "Throw", "Put"};
    respawnWeapons[] = {"CUP_smg_MP5A5", "CUP_hgun_M9", "Throw", "Put"};
    magazines[] = {mag_3("tacgt_AI_30Rnd_9x19_MP5"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_3("tacgt_AI_30Rnd_9x19_MP5"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade"), "SmokeShell"};
    //EDITORPREVIEW(Vanguard_U_Guard_Rifleman_02)
};

class TACU_Vanguard_U_O_Guard_Rifleman_02: TACU_Vanguard_U_Guard_Rifleman_02 {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Guard_Rifleman_03: TACU_Vanguard_U_Guard_Rifleman_01 {
    displayName = "Guard (CPW)";
    uniformClass = "tacs_Uniform_Combat_LS_CLBS_GP_BB";
    weapons[] = {"hgun_PDW2000_F", "CUP_hgun_M9", "Throw", "Put"};
    respawnWeapons[] = {"hgun_PDW2000_F", "CUP_hgun_M9", "Throw", "Put"};
    magazines[] = {mag_3("tacgt_AI_30Rnd_9x19"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_3("tacgt_AI_30Rnd_9x19"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade"), "SmokeShell"};
    //EDITORPREVIEW(Vanguard_U_Guard_Rifleman_03)
};

class TACU_Vanguard_U_O_Guard_Rifleman_03: TACU_Vanguard_U_Guard_Rifleman_03 {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Guard_Rifleman_04: TACU_Vanguard_U_Guard_Rifleman_01 {
    displayName = "Guard (Saiga)";
    uniformClass = "tacs_Uniform_Combat_RS_CDBS_GP_TB";
    weapons[] = {"CUP_sgun_Saiga12K", "CUP_hgun_M9", "Throw", "Put"};
    respawnWeapons[] = {"CUP_sgun_Saiga12K", "CUP_hgun_M9", "Throw", "Put"};
    magazines[] = {mag_3("tacgt_20Rnd_Saiga_000"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_3("tacgt_20Rnd_Saiga_000"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade"), "SmokeShell"};
    //EDITORPREVIEW(Vanguard_U_Guard_Rifleman_04)
};

class TACU_Vanguard_U_O_Guard_Rifleman_04: TACU_Vanguard_U_Guard_Rifleman_04 {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Guard_Rifleman_05: TACU_Vanguard_U_Guard_Rifleman_01 {
    displayName = "Guard (HK416C)";
    uniformClass = "tacs_Uniform_Combat_RS_CDFS_GP_TB";
    weapons[] = {"CUP_arifle_HK416_CQB_Black", "CUP_hgun_M9", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_HK416_CQB_Black", "CUP_hgun_M9", "Throw", "Put"};
    magazines[] = {mag_3("tacgt_AI_30Rnd_556x45_STANAG"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_3("tacgt_AI_30Rnd_556x45_STANAG"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade"), "SmokeShell"};
    //EDITORPREVIEW(Vanguard_U_Guard_Rifleman_05)
};

class TACU_Vanguard_U_O_Guard_Rifleman_05: TACU_Vanguard_U_Guard_Rifleman_05 {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Guard_Rifleman_06: TACU_Vanguard_U_Guard_Rifleman_01 {
    displayName = "Guard (AKS-74U)";
    uniformClass = "tacs_Uniform_Combat_RS_CPS_BP_BB";
    weapons[] = {"arifle_AKS_F", "CUP_hgun_M9", "Throw", "Put"};
    respawnWeapons[] = {"arifle_AKS_F", "CUP_hgun_M9", "Throw", "Put"};
    magazines[] = {mag_3("tacgt_AI_30Rnd_545x39_AK"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_3("tacgt_AI_30Rnd_545x39_AK"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade"), "SmokeShell"};
    //EDITORPREVIEW(Vanguard_U_Guard_Rifleman_06)
};

class TACU_Vanguard_U_O_Guard_Rifleman_06: TACU_Vanguard_U_Guard_Rifleman_06 {
    side = 0;
    faction = "TACU_Vanguard_O";
};
