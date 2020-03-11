// Units - Foxhound
class TACU_Main_U_INDEP_Soldier_Base;
class TACU_MSF_U_I_Foxhound_Rifleman_01: TACU_Main_U_INDEP_Soldier_Base {
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
    editorPreview = QPATHTOF(ui\MSF_U_I_Foxhound_Rifleman_01.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "tacs_Helmet_Light_Ballistic_DarkBlack", "G_Balaclava_TI_blk_F", "V_PlateCarrier2_blk", "CUP_NVG_GPNVG_black"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "tacs_Helmet_Light_Ballistic_DarkBlack", "G_Balaclava_TI_blk_F", "V_PlateCarrier2_blk", "CUP_NVG_GPNVG_black"};
    Items[] = {mag_8("ACE_fieldDressing")};
    respawnItems[] = {mag_8("ACE_fieldDressing")};
    weapons[] = {"TACU_MSF_W_CZ_BREN2_8in_Stealth", "TACU_MSF_W_Mk23_SOCOM_Stealth", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_CZ_BREN2_8in_Stealth", "TACU_MSF_W_Mk23_SOCOM_Stealth", "Throw", "Put"};
    magazines[] = {mag_8("CUP_30Rnd_556x45_PMAG_QP"), mag_3("CUP_12Rnd_45ACP_mk23"), mag_2("HandGrenade"), mag_2("SmokeShell"), mag_4("ACE_M84")};
    respawnMagazines[] = {mag_8("CUP_30Rnd_556x45_PMAG_QP"), mag_3("CUP_12Rnd_45ACP_mk23"), mag_2("HandGrenade"), mag_2("SmokeShell"), mag_4("ACE_M84")};
    headgearList[] = {
        "tacs_Helmet_Light_Ballistic_DarkBlack", 1
    };
    CBA_facewearList[] = {
        "G_Balaclava_TI_blk_F", 1,
    };
    editorSubcategory = "TACU_MSF_EdSubCat_Foxhound";
};
class TACU_MSF_U_O_Foxhound_Rifleman_01: TACU_MSF_U_I_Foxhound_Rifleman_01 {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Foxhound_Marksman: TACU_MSF_U_I_Foxhound_Rifleman_01 {
    displayName = "Marksman";
    icon = "iconMan";
    role = "Rifleman";
    editorPreview = QPATHTOF(ui\MSF_U_I_Foxhound_Marksman.jpg);
    weapons[] = {"TACU_MSF_W_M110_Stealth", "TACU_MSF_W_Mk23_SOCOM_Stealth", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_M110_Stealth", "TACU_MSF_W_Mk23_SOCOM_Stealth", "Throw", "Put"};
    magazines[] = {mag_6("CUP_20Rnd_762x51_B_M110"), mag_4("CUP_12Rnd_45ACP_mk23")};
    respawnMagazines[] = {mag_6("CUP_20Rnd_762x51_B_M110"), mag_4("CUP_12Rnd_45ACP_mk23")};
};
class TACU_MSF_U_O_Foxhound_Marksman: TACU_MSF_U_I_Foxhound_Marksman {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Foxhound_SMG_01: TACU_MSF_U_I_Foxhound_Rifleman_01 {
    displayName = "Sub Machine-Gunner";
    icon = "iconMan";
    role = "Rifleman";
    editorPreview = QPATHTOF(ui\MSF_U_I_Foxhound_SMG_01.jpg);
    weapons[] = {"TACU_MSF_W_MP7A1_Stealth", "TACU_MSF_W_Mk23_SOCOM_Stealth", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_MP7A1_Stealth", "TACU_MSF_W_Mk23_SOCOM_Stealth", "Throw", "Put"};
    magazines[] = {mag_10("CUP_40Rnd_46x30_MP7"), mag_3("CUP_12Rnd_45ACP_mk23"), mag_2("HandGrenade"), mag_2("SmokeShell"), mag_4("ACE_M84")};
    respawnMagazines[] = {mag_10("CUP_40Rnd_46x30_MP7"), mag_3("CUP_12Rnd_45ACP_mk23"), mag_2("HandGrenade"), mag_2("SmokeShell"), mag_4("ACE_M84")};
};
class TACU_MSF_U_O_Foxhound_SMG_01: TACU_MSF_U_I_Foxhound_SMG_01 {
    side = 0;
    faction = "TACU_MSF_O";
};
