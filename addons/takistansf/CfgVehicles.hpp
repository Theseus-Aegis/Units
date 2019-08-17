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
        //editorPreview = QPATHTOF(ui\TakistanSF_U_B_Rifleman_01.jpg);
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
        TACU_allowedFacewear[] = {
            "None", 1,
            "G_Shades_Black", 0.1
        };
        editorSubcategory = "TACU_TakistanSF_EdSubCat_TakistanSF";
    };

    class TACU_TakistanSF_U_B_Rifleman_02: TACU_TakistanSF_U_B_Rifleman_01 {
        displayName = "Rifleman (M4A1)";
        uniformClass = "CUP_I_B_PMC_Unit_10";
        //editorPreview = QPATHTOF(ui\TakistanSF_U_B_Rifleman_02.jpg);
        linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_H_TKI_Lungee_Open_01", "CUP_V_OI_TKI_Jacket4_03"};
        respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_H_TKI_Lungee_Open_01", "CUP_V_OI_TKI_Jacket4_03"};
        weapons[] = {"TACU_TakistanSF_W_M4A1_Grip", "CUP_hgun_M9", "Throw", "Put"};
        respawnWeapons[] = {"TACU_TakistanSF_W_M4A1_Grip", "CUP_hgun_M9", "Throw", "Put"};
        magazines[] = {mag_6("CUP_30Rnd_556x45_Emag"), mag_3("CUP_15Rnd_9x19_M9"), "HandGrenade", "SmokeShell"};
        respawnMagazines[] = {mag_6("CUP_30Rnd_556x45_Emag"), mag_3("CUP_15Rnd_9x19_M9"), "HandGrenade", "SmokeShell"};
    };

    class TACU_TakistanSF_U_B_Grenadier: TACU_TakistanSF_U_B_Rifleman_01 {
        displayName = "Grenadier";
        uniformClass = "CUP_U_B_BAF_MTP_UBACSTSHIRTKNEE";
        //editorPreview = QPATHTOF(ui\TakistanSF_U_B_Grenadier.jpg);
        linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_H_TKI_Lungee_Open_01", "CUP_V_OI_TKI_Jacket1_01"};
        respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_H_TKI_Lungee_Open_01", "CUP_V_OI_TKI_Jacket1_01"};
        weapons[] = {"TACU_TakistanSF_W_M4A1_GL", "CUP_hgun_M9", "Throw", "Put"};
        respawnWeapons[] = {"TACU_TakistanSF_W_M4A1_GL", "CUP_hgun_M9", "Throw", "Put"};
        magazines[] = {mag_5("CUP_30Rnd_556x45_Emag"), mag_2("CUP_15Rnd_9x19_M9"), mag_3("1Rnd_HE_Grenade_shell")};
        respawnMagazines[] = {mag_5("CUP_30Rnd_556x45_Emag"), mag_2("CUP_15Rnd_9x19_M9"), mag_3("1Rnd_HE_Grenade_shell")};
    };
};
