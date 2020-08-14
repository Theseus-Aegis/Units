class CfgVehicles {
    // Units
    class TACU_Main_U_BLUFOR_Soldier_Base;
    class TACU_TakistanSF_U_B_Rifleman_01: TACU_Main_U_BLUFOR_Soldier_Base {
        dlc = QUOTE(PREFIX);
        author = "Kresky";
        displayName = "Rifleman (M4 SBR)";
        faction = "BLU_F";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        identityTypes[] = {"LanguageENG_F", "Head_NATO", "NoGlasses"};
        genericNames = "NATOMen";
        icon = "iconMan";
        role = "Rifleman";
        uniformClass = "U_I_C_Soldier_Para_4_F";
        backpack = "";
        editorPreview = QPATHTOF(ui\TakistanSF_U_B_Rifleman_01.jpg);
        linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_H_TKI_Lungee_Open_01", "CUP_V_OI_TKI_Jacket4_05"};
        respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_H_TKI_Lungee_Open_01", "CUP_V_OI_TKI_Jacket4_05"};
        Items[] = {mag_6("ACE_fieldDressing")};
        respawnItems[] = {mag_6("ACE_fieldDressing")};
        weapons[] = {"TACU_TakistanSF_W_M4SBR_Tan", "CUP_hgun_M9", "Throw", "Put"};
        respawnWeapons[] = {"TACU_TakistanSF_W_M4SBR_Tan", "CUP_hgun_M9", "Throw", "Put"};
        magazines[] = {mag_6("CUP_30Rnd_556x45_Emag"), mag_3("CUP_15Rnd_9x19_M9"), "HandGrenade", "SmokeShell"};
        respawnMagazines[] = {mag_6("CUP_30Rnd_556x45_Emag"), mag_3("CUP_15Rnd_9x19_M9"), "HandGrenade", "SmokeShell"};
        headgearList[] = {
            "CUP_H_TKI_Lungee_Open_01", 1,
            "CUP_H_TKI_Lungee_Open_02", 1,
            "CUP_H_TKI_Lungee_Open_03", 1,
            "CUP_H_TKI_Lungee_Open_04", 1,
            "CUP_H_TKI_Lungee_Open_05", 1,
            "CUP_H_TKI_Lungee_Open_06", 1,
            "CUP_H_TK_Lungee", 0.75,
            "CUP_H_TKI_Lungee_05", 0.75,
            "CUP_H_TKI_Lungee_06", 0.75,
            "CUP_H_TKI_Lungee_04", 0.75
        };
        CBA_facewearList[] = {
            "", 1,
            "G_Shades_Black", 0.1
        };
        editorSubcategory = "TACU_TakistanSF_EdSubCat_TakistanSF";
    };

    class TACU_TakistanSF_U_B_Rifleman_02: TACU_TakistanSF_U_B_Rifleman_01 {
        displayName = "Rifleman (M4A1)";
        uniformClass = "CUP_I_B_PMC_Unit_10";
        editorPreview = QPATHTOF(ui\TakistanSF_U_B_Rifleman_02.jpg);
        linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_H_TKI_Lungee_Open_01", "CUP_V_OI_TKI_Jacket4_03"};
        respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_H_TKI_Lungee_Open_01", "CUP_V_OI_TKI_Jacket4_03"};
        weapons[] = {"TACU_TakistanSF_W_M4A1_Grip", "CUP_hgun_M9", "Throw", "Put"};
        respawnWeapons[] = {"TACU_TakistanSF_W_M4A1_Grip", "CUP_hgun_M9", "Throw", "Put"};
        magazines[] = {mag_6("CUP_30Rnd_556x45_Emag"), mag_3("CUP_15Rnd_9x19_M9"), "HandGrenade", "SmokeShell"};
        respawnMagazines[] = {mag_6("CUP_30Rnd_556x45_Emag"), mag_3("CUP_15Rnd_9x19_M9"), "HandGrenade", "SmokeShell"};
    };

    class TACU_TakistanSF_U_B_Rifleman_03: TACU_TakistanSF_U_B_Rifleman_01 {
        displayName = "Rifleman (M16A4)";
        uniformClass = "CUP_U_B_BAF_DDPM_UBACSTSHIRT";
        editorPreview = QPATHTOF(ui\TakistanSF_U_B_Rifleman_03.jpg);
        linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_H_TK_Lungee", "CUP_FR_NeckScarf", "CUP_V_B_BAF_DDPM_Osprey_Mk3_Rifleman"};
        respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_H_TK_Lungee", "CUP_FR_NeckScarf", "CUP_V_B_BAF_DDPM_Osprey_Mk3_Rifleman"};
        weapons[] = {"TACU_TakistanSF_W_M16A4", "CUP_hgun_M9", "Throw", "Put"};
        respawnWeapons[] = {"TACU_TakistanSF_W_M16A4", "CUP_hgun_M9", "Throw", "Put"};
        magazines[] = {mag_6("CUP_30Rnd_556x45_Stanag"), mag_3("CUP_15Rnd_9x19_M9"), "HandGrenade", "SmokeShell"};
        respawnMagazines[] = {mag_6("CUP_30Rnd_556x45_Stanag"), mag_3("CUP_15Rnd_9x19_M9"), "HandGrenade", "SmokeShell"};
        headgearList[] = {
            "CUP_H_TK_Lungee", 1,
            "CUP_H_TKI_Lungee_Open_01", 1,
            "CUP_H_TKI_Lungee_Open_03", 1,
            "CUP_H_TKI_Lungee_Open_04", 1,
            "CUP_H_TKI_Lungee_Open_05", 1,
            "CUP_H_TKI_Lungee_Open_06", 1,
            "CUP_H_TKI_Lungee_01", 1,
            "CUP_H_TKI_Lungee_02", 1,
            "CUP_H_TKI_Lungee_04", 1,
            "CUP_H_TKI_Lungee_05", 1,
            "CUP_H_TKI_Lungee_06", 1
        };
        CBA_facewearList[] = {
            "CUP_FR_NeckScarf", 1,
            "CUP_FR_NeckScarf2", 1,
            "CUP_FR_NeckScarf3", 1,
            "CUP_FR_NeckScarf4", 1,
            "CUP_FR_NeckScarf5", 1
        };
    };

    class TACU_TakistanSF_U_B_Grenadier: TACU_TakistanSF_U_B_Rifleman_01 {
        displayName = "Grenadier";
        uniformClass = "CUP_U_B_BAF_MTP_UBACSTSHIRTKNEE";
        editorPreview = QPATHTOF(ui\TakistanSF_U_B_Grenadier.jpg);
        linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_H_TKI_Lungee_Open_01", "CUP_V_OI_TKI_Jacket1_01"};
        respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_H_TKI_Lungee_Open_01", "CUP_V_OI_TKI_Jacket1_01"};
        weapons[] = {"TACU_TakistanSF_W_M4A1_GL", "CUP_hgun_M9", "Throw", "Put"};
        respawnWeapons[] = {"TACU_TakistanSF_W_M4A1_GL", "CUP_hgun_M9", "Throw", "Put"};
        magazines[] = {mag_5("CUP_30Rnd_556x45_Emag"), mag_2("CUP_15Rnd_9x19_M9"), mag_3("1Rnd_HE_Grenade_shell")};
        respawnMagazines[] = {mag_5("CUP_30Rnd_556x45_Emag"), mag_2("CUP_15Rnd_9x19_M9"), mag_3("1Rnd_HE_Grenade_shell")};
    };

    class TACU_TakistanSF_U_B_Sniper: TACU_TakistanSF_U_B_Rifleman_01 {
        displayName = "Sniper";
        role = "Marksman";
        sensitivity = 2.25;
        uniformClass = "CUP_U_B_BAF_MTP_UBACSTSHIRTKNEE";
        editorPreview = QPATHTOF(ui\TakistanSF_U_B_Sniper.jpg);
        linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_ShemagOpen_khk", "CUP_V_O_SLA_M23_1_BRN"};
        respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_ShemagOpen_khk", "CUP_V_O_SLA_M23_1_BRN"};
        weapons[] = {"TACU_TakistaniSF_W_M110", "CUP_hgun_M9", "Throw", "Put"};
        respawnWeapons[] = {"TACU_TakistaniSF_W_M110", "CUP_hgun_M9", "Throw", "Put"};
        magazines[] = {mag_5("CUP_20Rnd_762x51_B_M110"), mag_2("CUP_15Rnd_9x19_M9")};
        respawnMagazines[] = {mag_5("CUP_20Rnd_762x51_B_M110"), mag_2("CUP_15Rnd_9x19_M9")};
        headgearList[] = {
            "H_ShemagOpen_khk", 1,
            "H_ShemagOpen_tan", 1,
            "H_Shemag_olive_hs", 1,
            "H_Shemag_olive", 1
        };
        CBA_facewearList[] = {
            "", 1,
            "G_Shades_Black", 1
        };
    };
};
