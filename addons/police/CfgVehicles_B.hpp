// Units - Police (Counter Terrorism)
class TACU_Police_U_B_CT_Rifleman: TACU_Main_U_BLUFOR_Soldier_Base {
    author = "Kresky";
    displayName = "Rifleman";
    faction = "TACU_Police_B";
    scope = 2;
    scopeCurator = 2;
    uniformClass = "TACU_Police_Uniform_Combat_Blue";
    backpack = "";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "TACU_Police_Helmet_PASGT_Neck_PoliceBlack", "milgp_f_face_shield_shades_shemagh_BLK", "TACU_Police_Vest_HeavyPlateCarrier_PoliceBlue"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "TACU_Police_Helmet_PASGT_Neck_PoliceBlack", "milgp_f_face_shield_shades_shemagh_BLK", "TACU_Police_Vest_HeavyPlateCarrier_PoliceBlue"};
    Items[] = {mag_5("ACE_fieldDressing")};
    respawnItems[] = {mag_5("ACE_fieldDressing")};
    weapons[] = {"TACU_Police_W_HK416_CQB", "CUP_hgun_Glock17_blk", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Police_W_HK416_CQB", "CUP_hgun_Glock17_blk", "Throw", "Put"};
    magazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_17Rnd_9x19_Glock"), mag_2("ACE_M84"), "CUP_HandGrenade_M67", "SmokeShell"};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_17Rnd_9x19_Glock"), mag_2("ACE_M84"), "CUP_HandGrenade_M67", "SmokeShell"};
    //EDITORPREVIEW();
    headgearList[] = {
        "TACU_Police_Helmet_PASGT_Neck_PoliceBlack", 1
    };
    CBA_facewearList[] = {
        "milgp_f_face_shield_shades_shemagh_BLK", 1
    };
    editorSubcategory = "TACU_Police_EdSubCat_B_CT";
};

class TACU_Police_U_B_CT_Breacher: TACU_Police_U_B_CT_Rifleman {
    displayName = "Breacher";
    weapons[] = {"CUP_sgun_M1014", "CUP_hgun_Glock17_blk", "Throw", "Put"};
    respawnWeapons[] = {"CUP_sgun_M1014", "CUP_hgun_Glock17_blk", "Throw", "Put"};
    magazines[] = {mag_8("tacgt_8Rnd_P_000"), mag_3("tacgt_AI_17Rnd_9x19_Glock"), mag_2("ACE_M84"), "CUP_HandGrenade_M67", "SmokeShell"};
    respawnMagazines[] = {mag_8("tacgt_8Rnd_P_000"), mag_3("tacgt_AI_17Rnd_9x19_Glock"), mag_2("ACE_M84"), "CUP_HandGrenade_M67", "SmokeShell"};
    //EDITORPREVIEW();
};

class TACU_Police_U_B_CT_Marksman: TACU_Police_U_B_CT_Rifleman {
    displayName = "Marksman";
    weapons[] = {"TACU_Police_W_HK417_DMR", "CUP_hgun_Glock17_blk", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Police_W_HK417_DMR", "CUP_hgun_Glock17_blk", "Throw", "Put"};
    magazines[] = {mag_6("tacgt_AI_20Rnd_762x51"), mag_3("tacgt_AI_17Rnd_9x19_Glock")};
    respawnMagazines[] = {mag_6("tacgt_AI_20Rnd_762x51"), mag_3("tacgt_AI_17Rnd_9x19_Glock")};
    //EDITORPREVIEW();
};

class TACU_Police_U_B_CT_RiotControl: TACU_Police_U_B_CT_Rifleman {
    displayName = "Riot Control";
    weapons[] = {"CUP_hgun_BallisticShield_Armed", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_BallisticShield_Armed", "Throw", "Put"};
    magazines[] = {mag_6("tacgt_AI_15Rnd_9x19_M9"), mag_2("ACE_M84"), "CUP_HandGrenade_M67", "SmokeShell"};
    respawnMagazines[] = {mag_6("tacgt_AI_15Rnd_9x19_M9"), mag_2("ACE_M84"), "CUP_HandGrenade_M67", "SmokeShell"};
    //EDITORPREVIEW();
};

// Units - Police (Enforcers)
class TACU_Police_U_B_Enforcer_Rifleman: TACU_Main_U_BLUFOR_Soldier_Base {
    author = "Kresky";
    displayName = "Rifleman";
    faction = "TACU_Police_B";
    scope = 2;
    scopeCurator = 2;
    uniformClass = "TACU_Police_Uniform_Combat_Blue";
    backpack = "";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_Cap_police", "G_Aviator", "TACU_Police_Vest_PlateCarrier_PoliceBlue"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_Cap_police", "G_Aviator", "TACU_Police_Vest_PlateCarrier_PoliceBlue"};
    Items[] = {mag_5("ACE_fieldDressing")};
    respawnItems[] = {mag_5("ACE_fieldDressing")};
    weapons[] = {"CUP_arifle_M4A3_black", "CUP_hgun_Glock17_blk", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_M4A3_black", "CUP_hgun_Glock17_blk", "Throw", "Put"};
    magazines[] = {mag_4("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_17Rnd_9x19_Glock")};
    respawnMagazines[] = {mag_4("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_17Rnd_9x19_Glock")};
    //EDITORPREVIEW();
    headgearList[] = {
        "H_Cap_police", 0.60,
        "H_MilCap_blue", 0.50
    };
    CBA_facewearList[] = {
        "G_Aviator", 1
    };
    editorSubcategory = "TACU_Police_EdSubCat_B_Enforcer";
};

class TACU_Police_U_B_Enforcer_SMG_1: TACU_Police_U_B_Enforcer_Rifleman {
    displayName = "SMG (MP5A5)";
    weapons[] = {"CUP_smg_MP5A5", "CUP_hgun_Glock17_blk", "Throw", "Put"};
    respawnWeapons[] = {"CUP_smg_MP5A5", "CUP_hgun_Glock17_blk", "Throw", "Put"};
    magazines[] = {mag_6("tacgt_AI_30Rnd_9x19_MP5"), mag_3("tacgt_AI_17Rnd_9x19_Glock")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_9x19_MP5"), mag_3("tacgt_AI_17Rnd_9x19_Glock")};
    //EDITORPREVIEW();
};

class TACU_Police_U_B_Enforcer_SMG_2: TACU_Police_U_B_Enforcer_Rifleman {
    displayName = "SMG (Vector)";
    weapons[] = {"SMG_01_F", "CUP_hgun_Glock17_blk", "Throw", "Put"};
    respawnWeapons[] = {"SMG_01_F", "CUP_hgun_Glock17_blk", "Throw", "Put"};
    magazines[] = {mag_6("tacgt_AI_25Rnd_45ACP_Vector"), mag_3("tacgt_AI_17Rnd_9x19_Glock")};
    respawnMagazines[] = {mag_6("tacgt_AI_25Rnd_45ACP_Vector"), mag_3("tacgt_AI_17Rnd_9x19_Glock")};
    //EDITORPREVIEW();
};

class TACU_Police_U_B_Enforcer_Breacher: TACU_Police_U_B_Enforcer_Rifleman {
    displayName = "Breacher";
    weapons[] = {"CUP_sgun_M1014", "CUP_hgun_Glock17_blk", "Throw", "Put"};
    respawnWeapons[] = {"CUP_sgun_M1014", "CUP_hgun_Glock17_blk", "Throw", "Put"};
    magazines[] = {mag_6("tacgt_8Rnd_P_000"), mag_3("tacgt_AI_17Rnd_9x19_Glock")};
    respawnMagazines[] = {mag_6("tacgt_8Rnd_P_000"), mag_3("tacgt_AI_17Rnd_9x19_Glock")};
    //EDITORPREVIEW();
};
