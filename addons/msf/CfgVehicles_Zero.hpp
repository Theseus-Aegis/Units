// Units - Zero
class TACU_MSF_U_I_Zero_Rifleman_01: TACU_Main_U_INDEP_Soldier_Base {
    dlc = QUOTE(PREFIX);
    author = "Kresky";
    displayName = "Rifleman";
    faction = "TACU_MSF_I";
    scope = 2;
    scopeCurator = 2;
    sensitivity = 2;
    sensitivityEar = 0.15;
    identityTypes[] = {"LanguageENG_F", "Head_NATO", "NoGlasses"};
    genericNames = "NATOMen";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "U_O_R_Gorka_01_black_F";
    backpack = "";
    editorPreview = QPATHTOF(ui\MSF_U_I_Zero_Rifleman_01.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_HelmetB_light_black", "G_Balaclava_TI_blk_F", "TACU_MSF_Vest_PlateCarrier_Black", "CUP_NVG_PVS14"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_HelmetB_light_black", "G_Balaclava_TI_blk_F", "TACU_MSF_Vest_PlateCarrier_Black", "CUP_NVG_PVS14"};
    Items[] = {mag_8("ACE_fieldDressing")};
    respawnItems[] = {mag_8("ACE_fieldDressing")};
    weapons[] = {"TACU_MSF_W_HoneyBadger", "TACU_MSF_W_FNX45_Stealth_Green", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_HoneyBadger", "TACU_MSF_W_FNX45_Stealth_Green", "Throw", "Put"};
    magazines[] = {mag_8("29rnd_300BLK_STANAG_T"), mag_3("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), mag_2("SmokeShell"), mag_2("ACE_M84")};
    respawnMagazines[] = {mag_8("29rnd_300BLK_STANAG_T"), mag_3("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), mag_2("SmokeShell"), mag_2("ACE_M84")};
    headgearList[] = {
        "H_HelmetB_light_black", 1
    };
    TACU_allowedFacewear[] = {
        "G_Balaclava_TI_blk_F", 1,
    };
    editorSubcategory = "TACU_MSF_EdSubCat_Zero";
};
class TACU_MSF_U_O_Zero_Rifleman_01: TACU_MSF_U_I_Zero_Rifleman_01 {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Zero_Autorifleman: TACU_MSF_U_I_Zero_Rifleman_01 {
    displayName = "Autorifleman";
    icon = "iconMan";
    role = "Rifleman";
    editorPreview = QPATHTOF(ui\MSF_U_I_Zero_Autorifleman.jpg);
    weapons[] = {"TACU_MSF_W_HoneyBadger", "TACU_MSF_W_FNX45_Stealth_Green", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_HoneyBadger", "TACU_MSF_W_FNX45_Stealth_Green", "Throw", "Put"};
    magazines[] = {mag_6("hlc_50rnd_300BLK_STANAG_EPR"), mag_2("11Rnd_45ACP_Mag"), "SmokeShell", mag_2("ACE_M84")};
    respawnMagazines[] = {mag_6("hlc_50rnd_300BLK_STANAG_EPR"), mag_2("11Rnd_45ACP_Mag"), "SmokeShell", mag_2("ACE_M84")};
};
class TACU_MSF_U_O_Zero_Autorifleman: TACU_MSF_U_I_Zero_Autorifleman {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Zero_Marksman: TACU_MSF_U_I_Zero_Rifleman_01 {
    displayName = "Marksman";
    icon = "iconMan";
    role = "Rifleman";
    editorPreview = QPATHTOF(ui\MSF_U_I_Zero_Marksman.jpg);
    weapons[] = {"TACU_MSF_W_LAR15", "TACU_MSF_W_FNX45_Stealth_Green", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_LAR15", "TACU_MSF_W_FNX45_Stealth_Green", "Throw", "Put"};
    magazines[] = {mag_6("hlc_30rnd_556x45_S_PMAG"), mag_3("11Rnd_45ACP_Mag")};
    respawnMagazines[] = {mag_6("hlc_30rnd_556x45_S_PMAG"), mag_3("11Rnd_45ACP_Mag")};
};
class TACU_MSF_U_O_Zero_Marksman: TACU_MSF_U_I_Zero_Marksman {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Zero_SMG_01: TACU_MSF_U_I_Zero_Rifleman_01 {
    displayName = "Rifleman (SMG)";
    icon = "iconMan";
    role = "Rifleman";
    editorPreview = QPATHTOF(ui\MSF_U_I_Zero_SMG_01.jpg);
    weapons[] = {"TACU_MSF_W_Scorpion", "TACU_MSF_W_FNX45_Stealth_Green", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_Scorpion", "TACU_MSF_W_FNX45_Stealth_Green", "Throw", "Put"};
    magazines[] = {mag_8("30Rnd_9x21_Mag_SMG_02"), mag_3("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), mag_2("SmokeShell"), mag_2("ACE_M84")};
    respawnMagazines[] = {mag_8("30Rnd_9x21_Mag_SMG_02"), mag_3("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), mag_2("SmokeShell"), mag_2("ACE_M84")};
};
class TACU_MSF_U_O_Zero_SMG_01: TACU_MSF_U_I_Zero_SMG_01 {
    side = 0;
    faction = "TACU_MSF_O";
};
