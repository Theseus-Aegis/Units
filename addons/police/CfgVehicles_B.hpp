// Units - Police (Counter Terrorism)
class TACU_Police_U_B_CT_Rifleman: TACU_Main_U_BLUFOR_Soldier_Base {
    author = ECSTRING(Police,Author);
    displayName = "Rifleman";
    faction = "TACU_Police_B";
    scope = 2;
    scopeCurator = 2;
    uniformClass = "U_B_GEN_Commander_F";
    backpack = "";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "BWA3_OpsCore", "CUP_G_PMC_Facewrap_Black_Glasses_Dark", "TACU_Police_Vest_PlateCarrier_PoliceBlue"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "BWA3_OpsCore", "CUP_G_PMC_Facewrap_Black_Glasses_Dark", "TACU_Police_Vest_PlateCarrier_PoliceBlue"};
    Items[] = {mag_5("ACE_fieldDressing")};
    respawnItems[] = {mag_5("ACE_fieldDressing")};
    weapons[] = {"TACU_Police_W_HK416_CQB", "CUP_hgun_Glock17_blk", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Police_W_HK416_CQB", "CUP_hgun_Glock17_blk", "Throw", "Put"};
    magazines[] = {mag_6("CUP_30Rnd_556x45_PMAG_QP"), mag_3("CUP_17Rnd_9x19_glock17"), mag_2("ACE_M84"), "CUP_HandGrenade_M67", "SmokeShell"};
    respawnMagazines[] = {mag_6("CUP_30Rnd_556x45_PMAG_QP"), mag_3("CUP_17Rnd_9x19_glock17"), mag_2("ACE_M84"), "CUP_HandGrenade_M67", "SmokeShell"};
    headgearList[] = {
        "BWA3_OpsCore",0.50,
        "BWA3_OpsCore_Camera",0.50
    };
    editorSubcategory = "TACU_Police_EdSubCat_B_CT";
};

class TACU_Police_U_B_CT_Breacher: TACU_Police_U_B_CT_Rifleman {
    displayName = "Breacher";
    weapons[] = {"CUP_sgun_M1014", "CUP_hgun_Glock17_blk", "Throw", "Put"};
    respawnWeapons[] = {"CUP_sgun_M1014", "CUP_hgun_Glock17_blk", "Throw", "Put"};
    magazines[] = {mag_8("CUP_8Rnd_B_Beneli_74Pellets"), mag_3("CUP_17Rnd_9x19_glock17"), mag_2("ACE_M84"), "CUP_HandGrenade_M67", "SmokeShell"};
    respawnMagazines[] = {mag_8("CUP_8Rnd_B_Beneli_74Pellets"), mag_3("CUP_17Rnd_9x19_glock17"), mag_2("ACE_M84"), "CUP_HandGrenade_M67", "SmokeShell"};
};

class TACU_Police_U_B_CT_Marksman: TACU_Police_U_B_CT_Rifleman {
    displayName = "Marksman";
    weapons[] = {"TACU_Police_W_HK417DMR", "CUP_hgun_Glock17_blk", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Police_W_HK417DMR", "CUP_hgun_Glock17_blk", "Throw", "Put"};
    magazines[] = {mag_6("CUP_20Rnd_762x51_HK417"), mag_3("CUP_17Rnd_9x19_glock17"), mag_2("ACE_M84"), "CUP_HandGrenade_M67", "SmokeShell"};
    respawnMagazines[] = {mag_6("CUP_20Rnd_762x51_HK417"), mag_3("CUP_17Rnd_9x19_glock17"), mag_2("ACE_M84"), "CUP_HandGrenade_M67", "SmokeShell"};
};

class TACU_Police_U_B_CT_RiotControl: TACU_Police_U_B_CT_Rifleman {
    displayName = "Riot Control";
    weapons[] = {"CUP_hgun_BallisticShield_Armed", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_BallisticShield_Armed", "Throw", "Put"};
    magazines[] = {mag_6("CUP_15Rnd_9x19_M9"), mag_2("ACE_M84"), "CUP_HandGrenade_M67", "SmokeShell"};
    respawnMagazines[] = {mag_6("CUP_15Rnd_9x19_M9"), mag_2("ACE_M84"), "CUP_HandGrenade_M67", "SmokeShell"};
};
