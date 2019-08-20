// Units - Insurgents
class TACU_Main_U_OPFOR_Soldier_Base;
class TACU_PLR_U_O_Insurgent_Rifleman_01: TACU_Main_U_OPFOR_Soldier_Base {
    dlc = QUOTE(PREFIX);
    author = "Kresky";
    displayName = "Rifleman (AK47)";
    faction = "TACU_PLR_O";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguagePER_F", "Head_TK", "NoGlasses"};
    genericNames = "TakistaniMen";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "CUP_U_O_SLA_Green";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_ShemagOpen_khk", "CUP_FR_NeckScarf5", "CUP_V_B_Interceptor_Rifleman_Coyote"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_ShemagOpen_khk", "CUP_FR_NeckScarf5", "CUP_V_B_Interceptor_Rifleman_Coyote"};
    Items[] = {mag_5("ACE_fieldDressing")};
    respawnItems[] = {mag_5("ACE_fieldDressing")};
    weapons[] = {"TACU_PLR_W_AK47_Early_FL", "Throw", "Put"};
    respawnWeapons[] = {"TACU_PLR_W_AK47_Early_FL", "Throw", "Put"};
    magazines[] = {mag_6("CUP_30Rnd_762x39_AK47_M"), "CUP_HandGrenade_RGD5"};
    respawnMagazines[] = {mag_6("CUP_30Rnd_762x39_AK47_M"), "CUP_HandGrenade_RGD5"};
    headgearList[] = {
        "H_ShemagOpen_khk", 1,
        "H_ShemagOpen_tan", 0.1,
        "H_Shemag_olive", 0.1,
        "CUP_H_SLA_Helmet_BLK", 0.25
    };
    TACU_allowedFacewear[] = {
        "CUP_FR_NeckScarf5", 1,
        "CUP_FR_NeckScarf2", 0.2,
        "CUP_FR_NeckScarf", 0.2,
        "CUP_FR_NeckScarf4", 0.1
    };
    editorPreview = QPATHTOF(ui\PLR_U_O_Insurgent_Rifleman_01.jpg);
    editorSubcategory = "TACU_PLR_EdSubCat_Insurgents";
};

class TACU_PLR_U_O_Insurgent_Rifleman_02: TACU_PLR_U_O_Insurgent_Rifleman_01 {
    displayName = "Rifleman (AKM)";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "CUP_U_O_TK_Green";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_H_SLA_Helmet_BLK", "CUP_FR_NeckScarf5", "CUP_V_B_Interceptor_Rifleman_Grey"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_H_SLA_Helmet_BLK", "CUP_FR_NeckScarf5", "CUP_V_B_Interceptor_Rifleman_Grey"};
    weapons[] = {"TACU_PLR_W_AKM_Early_FL", "Throw", "Put"};
    respawnWeapons[] = {"TACU_PLR_W_AKM_Early_FL", "Throw", "Put"};
    magazines[] = {mag_6("CUP_30Rnd_762x39_AK47_M"), "CUP_HandGrenade_RGD5"};
    respawnMagazines[] = {mag_6("CUP_30Rnd_762x39_AK47_M"), "CUP_HandGrenade_RGD5"};
    headgearList[] = {
        "H_ShemagOpen_khk", 0.8,
        "H_ShemagOpen_tan", 0.1,
        "H_Shemag_olive", 0.1,
        "CUP_H_SLA_Helmet_BLK", 0.5
    };
    TACU_allowedFacewear[] = {
        "CUP_FR_NeckScarf5", 1,
        "CUP_FR_NeckScarf2", 0.2,
        "CUP_FR_NeckScarf", 0.2,
        "CUP_FR_NeckScarf4", 0.1
    };
    editorPreview = QPATHTOF(ui\PLR_U_O_Insurgent_Rifleman_02.jpg);
};

class TACU_PLR_U_O_Insurgent_Rifleman_03: TACU_PLR_U_O_Insurgent_Rifleman_01 {
    displayName = "Rifleman (AKS)";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "CUP_U_O_TK_Green";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "G_Balaclava_blk", "CUP_V_B_Interceptor_Rifleman_DCU"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "G_Balaclava_blk", "CUP_V_B_Interceptor_Rifleman_DCU"};
    weapons[] = {"TACU_PLR_W_AKS_FL", "Throw", "Put"};
    respawnWeapons[] = {"TACU_PLR_W_AKS_FL", "Throw", "Put"};
    magazines[] = {mag_6("CUP_30Rnd_762x39_AK47_M"), "CUP_HandGrenade_RGD5"};
    respawnMagazines[] = {mag_6("CUP_30Rnd_762x39_AK47_M"), "CUP_HandGrenade_RGD5"};
    headgearList[] = {
        "", 1
    };
    TACU_allowedFacewear[] = {
        "G_Balaclava_blk", 1,
        "G_Balaclava_oli", 0.2
    };
    editorPreview = QPATHTOF(ui\PLR_U_O_Insurgent_Rifleman_03.jpg);
};

class TACU_PLR_U_O_Insurgent_Rifleman_04: TACU_PLR_U_O_Insurgent_Rifleman_01 {
    displayName = "Rifleman (AK-74)";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "CUP_I_B_PMC_Unit_11";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "G_Balaclava_blk", "CUP_V_B_Interceptor_Rifleman_Coyote"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "G_Balaclava_blk", "CUP_V_B_Interceptor_Rifleman_Coyote"};
    weapons[] = {"TACU_PLR_W_AK74_Early_FL", "Throw", "Put"};
    respawnWeapons[] = {"TACU_PLR_W_AK74_Early_FL", "Throw", "Put"};
    magazines[] = {mag_6("CUP_30Rnd_545x39_AK74M_M"), "CUP_HandGrenade_RGD5"};
    respawnMagazines[] = {mag_6("CUP_30Rnd_545x39_AK74M_M"), "CUP_HandGrenade_RGD5"};
    headgearList[] = {
        "", 1
    };
    TACU_allowedFacewear[] = {
        "G_Balaclava_blk", 1,
        "G_Balaclava_oli", 0.2
    };
    editorPreview = QPATHTOF(ui\PLR_U_O_Insurgent_Rifleman_04.jpg);
};

class TACU_PLR_U_O_Insurgent_Rifleman_05: TACU_PLR_U_O_Insurgent_Rifleman_01 {
    displayName = "Rifleman (FAL)";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "CUP_I_B_PMC_Unit_13";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_ShemagOpen_khk", "CUP_FR_NeckScarf5", "CUP_V_B_Interceptor_Rifleman_Grey"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_ShemagOpen_khk", "CUP_FR_NeckScarf5", "CUP_V_B_Interceptor_Rifleman_Grey"};
    weapons[] = {"CUP_arifle_FNFAL", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_FNFAL", "Throw", "Put"};
    magazines[] = {mag_5("CUP_20Rnd_762x51_FNFAL_M"), "CUP_HandGrenade_RGD5"};
    respawnMagazines[] = {mag_5("CUP_20Rnd_762x51_FNFAL_M"), "CUP_HandGrenade_RGD5"};
    headgearList[] = {
        "H_ShemagOpen_khk", 1,
        "H_ShemagOpen_tan", 0.1,
        "H_Shemag_olive", 0.1,
        "CUP_H_SLA_Helmet_BLK", 0.4
    };
    TACU_allowedFacewear[] = {
        "CUP_FR_NeckScarf5", 1,
        "CUP_FR_NeckScarf2", 0.2,
        "CUP_FR_NeckScarf", 0.2,
        "CUP_FR_NeckScarf4", 0.1
    };
    editorPreview = QPATHTOF(ui\PLR_U_O_Insurgent_Rifleman_05.jpg);
};

class TACU_PLR_U_O_Insurgent_Rifleman_AT: TACU_PLR_U_O_Insurgent_Rifleman_01 {
    displayName = "Rifleman (AT)";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "CUP_U_O_TK_MixedCamo";
    backpack = "TACU_PLR_B_AT";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "G_Balaclava_blk", "CUP_V_B_Interceptor_Base_DCU"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "G_Balaclava_blk", "CUP_V_B_Interceptor_Base_DCU"};
    weapons[] = {"CUP_arifle_AKS74U", "CUP_launch_RPG7V", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AKS74U", "CUP_launch_RPG7V", "Throw", "Put"};
    magazines[] = {mag_5("CUP_30Rnd_545x39_AK74_plum_M")};
    respawnMagazines[] = {mag_5("CUP_30Rnd_545x39_AK74_plum_M")};
    headgearList[] = {
        "", 1
    };
    TACU_allowedFacewear[] = {
        "G_Balaclava_blk", 1,
        "G_Balaclava_oli", 0.2
    };
    editorPreview = QPATHTOF(ui\PLR_U_O_Insurgent_Rifleman_AT.jpg);
};

class TACU_PLR_U_O_Insurgent_TeamLeader: TACU_PLR_U_O_Insurgent_Rifleman_01 {
    displayName = "Team Leader";
    icon = "iconManLeader";
    role = "Rifleman";
    uniformClass = "CUP_U_O_SLA_Green";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_H_SLA_BeretRed", "CUP_FR_NeckScarf5", "CUP_V_B_Interceptor_Base_Grey"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_H_SLA_BeretRed", "CUP_FR_NeckScarf5", "CUP_V_B_Interceptor_Base_Grey"};
    weapons[] = {"CUP_arifle_AKS74U", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AKS74U", "Throw", "Put"};
    magazines[] = {mag_4("CUP_30Rnd_545x39_AK74_plum_M"), "CUP_HandGrenade_RGD5", "SmokeShell"};
    respawnMagazines[] = {mag_4("CUP_30Rnd_545x39_AK74_plum_M"), "CUP_HandGrenade_RGD5", "SmokeShell"};
    headgearList[] = {
        "CUP_H_SLA_BeretRed", 1
    };
    TACU_allowedFacewear[] = {
        "CUP_FR_NeckScarf5", 1
    };
    editorPreview = QPATHTOF(ui\PLR_U_O_Insurgent_TeamLeader.jpg);
};

class TACU_PLR_U_O_Insurgent_Autorifleman: TACU_PLR_U_O_Insurgent_Rifleman_01 {
    displayName = "Autorifleman";
    icon = "iconManMG";
    role = "MachineGunner";
    uniformClass = "CUP_I_B_PMC_Unit_15";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "G_Balaclava_blk", "CUP_V_B_Interceptor_Grenadier_Coyote"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "G_Balaclava_blk", "CUP_V_B_Interceptor_Grenadier_Coyote"};
    weapons[] = {"TACU_PLR_W_RPK74_FL", "Throw", "Put"};
    respawnWeapons[] = {"TACU_PLR_W_RPK74_FL", "Throw", "Put"};
    magazines[] = {mag_4("CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M")};
    respawnMagazines[] = {mag_4("CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M")};
    headgearList[] = {
        "", 1
    };
    TACU_allowedFacewear[] = {
        "G_Balaclava_blk", 1,
        "G_Balaclava_oli", 0.1
    };
    editorPreview = QPATHTOF(ui\PLR_U_O_Insurgent_Autorifleman.jpg);
};

class TACU_PLR_U_O_Insurgent_Sniper: TACU_PLR_U_O_Insurgent_Rifleman_01 {
    displayName = "Sniper";
    icon = "iconMan";
    role = "Marksman";
    uniformClass = "CUP_U_O_SLA_Green";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_ShemagOpen_khk", "CUP_FR_NeckScarf5", "CUP_V_B_Interceptor_Base_Grey"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_ShemagOpen_khk", "CUP_FR_NeckScarf5", "CUP_V_B_Interceptor_Base_Grey"};
    weapons[] = {"TACU_PLR_W_SVD", "Throw", "Put"};
    respawnWeapons[] = {"TACU_PLR_W_SVD", "Throw", "Put"};
    magazines[] = {mag_5("CUP_10Rnd_762x54_SVD_M")};
    respawnMagazines[] = {mag_5("CUP_10Rnd_762x54_SVD_M")};
    headgearList[] = {
        "H_ShemagOpen_khk", 1,
        "H_ShemagOpen_tan", 0.2,
        "H_Shemag_olive", 0.2
    };
    TACU_allowedFacewear[] = {
        "CUP_FR_NeckScarf5", 1,
        "CUP_FR_NeckScarf4", 0.1,
        "CUP_FR_NeckScarf2", 0.1,
        "CUP_FR_NeckScarf", 0.1
    };
    editorPreview = QPATHTOF(ui\PLR_U_O_Insurgent_Sniper.jpg);
};
