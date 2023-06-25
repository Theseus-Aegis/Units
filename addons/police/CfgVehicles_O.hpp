// Units - Police (Counter-Terrorism)
class TACU_Police_U_O_CT_Rifleman: TACU_Main_U_OPFOR_Soldier_Base {
    author = "Kresky";
    displayName = "Rifleman";
    faction = "TACU_Police_O";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"CUP_D_Language_RU", "Head_Euro", "NoGlasses"};
    genericNames = "CUP_Names_RussianMen";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "TACU_Police_Uniform_Combat_Green";
    backpack = "";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "TACU_Police_Helmet_PASGT_Neck_PoliceGreen", "G_Balaclava_oli", "TACU_Police_Vest_HeavyPlateCarrier_PoliceGreen"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "TACU_Police_Helmet_PASGT_Neck_PoliceGreen", "G_Balaclava_oli", "TACU_Police_Vest_HeavyPlateCarrier_PoliceGreen"};
    Items[] = {mag_5("ACE_fieldDressing")};
    respawnItems[] = {mag_5("ACE_fieldDressing")};
    weapons[] = {"CUP_arifle_AS_VAL", "hgun_Rook40_F", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AS_VAL", "hgun_Rook40_F", "Throw", "Put"};
    magazines[] = {mag_6("CUP_20Rnd_9x39_SP5_VSS_M"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("ACE_M84"), "CUP_HandGrenade_RGD5", "SmokeShell"};
    respawnMagazines[] = {mag_6("CUP_20Rnd_9x39_SP5_VSS_M"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("ACE_M84"), "CUP_HandGrenade_RGD5", "SmokeShell"};
    EDITORPREVIEW(TACU_Police_U_O_CT_Rifleman);
    headgearList[] = {
        "TACU_Police_Helmet_PASGT_Neck_PoliceGreen", 1
    };
    CBA_facewearList[] = {
        "G_Balaclava_oli", 0.50,
        "G_Balaclava_blk", 0.50
    };
    editorSubcategory = "TACU_Police_EdSubCat_O_CT";
};

class TACU_Police_U_O_CT_SMG_1: TACU_Police_U_O_CT_Rifleman {
    displayName = "SMG (Vityaz)";
    weapons[] = {"TACU_Police_W_Vityaz_Grip", "hgun_Rook40_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Police_W_Vityaz_Grip", "hgun_Rook40_F", "Throw", "Put"};
    magazines[] = {mag_6("tacgt_AI_30Rnd_9x19_Vityaz"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("ACE_M84"), "CUP_HandGrenade_RGD5", "SmokeShell"};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_9x19_Vityaz"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("ACE_M84"), "CUP_HandGrenade_RGD5", "SmokeShell"};
    EDITORPREVIEW(TACU_Police_U_O_CT_SMG_1);
};

class TACU_Police_U_O_CT_SMG_2: TACU_Police_U_O_CT_Rifleman {
    displayName = "SMG (Vikhr)";
    weapons[] = {"TACU_Police_W_Vikhr_Grip", "hgun_Rook40_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Police_W_Vikhr_Grip", "hgun_Rook40_F", "Throw", "Put"};
    magazines[] = {mag_6("CUP_30Rnd_9x39_SP5_VIKHR_M"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("ACE_M84"), "CUP_HandGrenade_RGD5", "SmokeShell"};
    respawnMagazines[] = {mag_6("CUP_30Rnd_9x39_SP5_VIKHR_M"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("ACE_M84"), "CUP_HandGrenade_RGD5", "SmokeShell"};
    EDITORPREVIEW(TACU_Police_U_O_CT_SMG_2);
};

class TACU_Police_U_O_CT_Breacher: TACU_Police_U_O_CT_Rifleman {
    displayName = "Breacher";
    weapons[] = {"CUP_sgun_Saiga12K", "hgun_Rook40_F", "Throw", "Put"};
    respawnWeapons[] = {"CUP_sgun_Saiga12K", "hgun_Rook40_F", "Throw", "Put"};
    magazines[] = {mag_8("tacgt_20Rnd_Saiga_000"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("ACE_M84"), "CUP_HandGrenade_RGD5", "SmokeShell"};
    respawnMagazines[] = {mag_8("tacgt_20Rnd_Saiga_000"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("ACE_M84"), "CUP_HandGrenade_RGD5", "SmokeShell"};
    EDITORPREVIEW(TACU_Police_U_O_CT_Breacher);
};

class TACU_Police_U_O_CT_Marksman: TACU_Police_U_O_CT_Rifleman {
    displayName = "Marksman";
    weapons[] = {"TACU_Police_W_Dragunov", "hgun_Rook40_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Police_W_Dragunov", "hgun_Rook40_F", "Throw", "Put"};
    magazines[] = {mag_6("tacgt_10Rnd_762x54r_AP"), mag_3("tacgt_AI_17Rnd_9x19_Walther")};
    respawnMagazines[] = {mag_6("tacgt_10Rnd_762x54r_AP"), mag_3("tacgt_AI_17Rnd_9x19_Walther")};
    EDITORPREVIEW(TACU_Police_U_O_CT_Marksman);
};

// Units - Police (Enforcers)
class TACU_Police_U_O_Enforcer_SMG_1: TACU_Police_U_O_CT_Rifleman {
    displayName = "SMG (Vityaz)";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_Beret_blk", "G_Aviator", "TACU_Police_Vest_PlateCarrier_PoliceGreen"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_Beret_blk", "G_Aviator", "TACU_Police_Vest_PlateCarrier_PoliceGreen"};
    weapons[] = {"CUP_smg_vityaz", "hgun_Rook40_F", "Throw", "Put"};
    respawnWeapons[] = {"CUP_smg_vityaz", "hgun_Rook40_F", "Throw", "Put"};
    magazines[] = {mag_4("tacgt_AI_30Rnd_9x19_Vityaz"), mag_2("tacgt_AI_17Rnd_9x19_Walther")};
    respawnMagazines[] = {mag_4("tacgt_AI_30Rnd_9x19_Vityaz"), mag_2("tacgt_AI_17Rnd_9x19_Walther")};
    EDITORPREVIEW(TACU_Police_U_O_Enforcer_SMG_1);
    headgearList[] = {
        "H_Beret_blk", 1
    };
    CBA_facewearList[] = {
        "G_Aviator", 1
    };
    editorSubcategory = "TACU_Police_EdSubCat_O_Enforcer";
};

class TACU_Police_U_O_Enforcer_SMG_2: TACU_Police_U_O_Enforcer_SMG_1 {
    displayName = "SMG (Bizon)";
    weapons[] = {"CUP_smg_bizon", "hgun_Rook40_F", "Throw", "Put"};
    respawnWeapons[] = {"CUP_smg_bizon", "hgun_Rook40_F", "Throw", "Put"};
    magazines[] = {mag_4("tacgt_AI_64Rnd_9x19_Bizon"), mag_2("tacgt_AI_17Rnd_9x19_Walther")};
    respawnMagazines[] = {mag_4("tacgt_AI_64Rnd_9x19_Bizon"), mag_2("tacgt_AI_17Rnd_9x19_Walther")};
    EDITORPREVIEW(TACU_Police_U_O_Enforcer_SMG_2);
};

class TACU_Police_U_O_Enforcer_SMG_3: TACU_Police_U_O_Enforcer_SMG_1 {
    displayName = "SMG (Vikhr)";
    weapons[] = {"CUP_arifle_SR3M_Vikhr", "hgun_Rook40_F", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_SR3M_Vikhr", "hgun_Rook40_F", "Throw", "Put"};
    magazines[] = {mag_4("CUP_30Rnd_9x39_SP5_VIKHR_M"), mag_2("tacgt_AI_17Rnd_9x19_Walther")};
    respawnMagazines[] = {mag_4("CUP_30Rnd_9x39_SP5_VIKHR_M"), mag_2("tacgt_AI_17Rnd_9x19_Walther")};
    EDITORPREVIEW(TACU_Police_U_O_Enforcer_SMG_3);
};

class TACU_Police_U_O_Enforcer_Breacher: TACU_Police_U_O_Enforcer_SMG_1 {
    displayName = "Breacher";
    weapons[] = {"CUP_sgun_Saiga12K", "hgun_Rook40_F", "Throw", "Put"};
    respawnWeapons[] = {"CUP_sgun_Saiga12K", "hgun_Rook40_F", "Throw", "Put"};
    magazines[] = {mag_4("tacgt_20Rnd_Saiga_000"), mag_2("tacgt_AI_17Rnd_9x19_Walther")};
    respawnMagazines[] = {mag_4("tacgt_20Rnd_Saiga_000"), mag_2("tacgt_AI_17Rnd_9x19_Walther")};
    EDITORPREVIEW(TACU_Police_U_O_Enforcer_Breacher);
};
