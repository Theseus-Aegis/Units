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
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "TACU_Police_Helmet_PASGT_Neck_PoliceGreen", "CUP_RUS_Balaclava_grn", "TACU_Police_Vest_HeavyPlateCarrier_PoliceGreen"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "TACU_Police_Helmet_PASGT_Neck_PoliceGreen", "CUP_RUS_Balaclava_grn", "TACU_Police_Vest_HeavyPlateCarrier_PoliceGreen"};
    Items[] = {mag_5("ACE_fieldDressing")};
    respawnItems[] = {mag_5("ACE_fieldDressing")};
    weapons[] = {"CUP_arifle_AS_VAL", "hgun_Rook40_F", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AS_VAL", "hgun_Rook40_F", "Throw", "Put"};
    magazines[] = {mag_6("CUP_20Rnd_9x39_SP5_VSS_M"), mag_3("16Rnd_9x21_Mag"), mag_2("ACE_M84"), "CUP_HandGrenade_RGD5", "SmokeShell"};
    respawnMagazines[] = {mag_6("CUP_20Rnd_9x39_SP5_VSS_M"), mag_3("16Rnd_9x21_Mag"), mag_2("ACE_M84"), "CUP_HandGrenade_RGD5", "SmokeShell"};
    headgearList[] = {
        "TACU_Police_Helmet_PASGT_Neck_PoliceGreen", 1
    };
    editorSubcategory = "TACU_Police_EdSubCat_O_CT";
};

class TACU_Police_U_O_CT_SMG_1: TACU_Police_U_O_CT_Rifleman {
    displayName = "SMG (1)";
    weapons[] = {"TACU_Police_W_Vityaz_Grip", "hgun_Rook40_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Police_W_Vityaz_Grip", "hgun_Rook40_F", "Throw", "Put"};
    magazines[] = {mag_6("CUP_30Rnd_9x19AP_Vityaz"), mag_3("16Rnd_9x21_Mag"), mag_2("ACE_M84"), "CUP_HandGrenade_RGD5", "SmokeShell"};
    respawnMagazines[] = {mag_6("CUP_30Rnd_9x19AP_Vityaz"), mag_3("16Rnd_9x21_Mag"), mag_2("ACE_M84"), "CUP_HandGrenade_RGD5", "SmokeShell"};
};

class TACU_Police_U_O_CT_SMG_2: TACU_Police_U_O_CT_Rifleman {
    displayName = "SMG (2)";
    weapons[] = {"TACU_Police_W_Vikhr_Grip", "hgun_Rook40_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Police_W_Vikhr_Grip", "hgun_Rook40_F", "Throw", "Put"};
    magazines[] = {mag_6("CUP_30Rnd_9x39_SP5_VIKHR_M"), mag_3("16Rnd_9x21_Mag"), mag_2("ACE_M84"), "CUP_HandGrenade_RGD5", "SmokeShell"};
    respawnMagazines[] = {mag_6("CUP_30Rnd_9x39_SP5_VIKHR_M"), mag_3("16Rnd_9x21_Mag"), mag_2("ACE_M84"), "CUP_HandGrenade_RGD5", "SmokeShell"};
};

class TACU_Police_U_O_CT_Breacher: TACU_Police_U_O_CT_Rifleman {
    displayName = "Breacher";
    weapons[] = {"CUP_sgun_Saiga12K", "hgun_Rook40_F", "Throw", "Put"};
    respawnWeapons[] = {"CUP_sgun_Saiga12K", "hgun_Rook40_F", "Throw", "Put"};
    magazines[] = {mag_8("CUP_8Rnd_B_Saiga12_74Pellets_M"), mag_3("16Rnd_9x21_Mag"), mag_2("ACE_M84"), "CUP_HandGrenade_RGD5", "SmokeShell"};
    respawnMagazines[] = {mag_8("CUP_8Rnd_B_Saiga12_74Pellets_M"), mag_3("16Rnd_9x21_Mag"), mag_2("ACE_M84"), "CUP_HandGrenade_RGD5", "SmokeShell"};
};

class TACU_Police_U_O_CT_Marksman: TACU_Police_U_O_CT_Rifleman {
    displayName = "Marksman";
    weapons[] = {"TACU_Police_W_Dragunov", "hgun_Rook40_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Police_W_Dragunov", "hgun_Rook40_F", "Throw", "Put"};
    magazines[] = {mag_6("CUP_10Rnd_762x54_SVD_M"), mag_3("16Rnd_9x21_Mag")};
    respawnMagazines[] = {mag_6("CUP_10Rnd_762x54_SVD_M"), mag_3("16Rnd_9x21_Mag")};
};
