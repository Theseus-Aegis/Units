class TACU_SevenRings_U_I_Eastern_Rifleman_01: TACU_Main_U_INDEP_Soldier_Base {
    author = "Mike";
    displayName = "Rifleman (AK-101)";
    faction = "TACU_SevenRings_I_Eastern";
    editorSubcategory = "TACU_SevenRings_EdSubCat_Eastern";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguagePER_F", "Head_TK"};
    genericNames = "TakistaniMen";
    icon = "iconMan";
    role = "Rifleman";
    sensitivityEar = 0.15;
    uniformClass = "U_lxWS_Djella_02_Brown";
    backpack = "";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_assaulter_cb"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_assaulter_cb"
    };
    Items[] = {};
    respawnItems[] = {};
    weapons[] = {
        "TACU_SevenRings_W_East_AK101",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_East_AK101",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_9("tacgt_30Rnd_556x45_AP_AK"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_9("tacgt_30Rnd_556x45_AP_AK"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    headgearList[] = {
        "H_turban_02_mask_black_lxws", 1
    };
    CBA_facewearList[] = {"", 1};
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_Rifleman_01.jpg);
};

class TACU_SevenRings_U_I_Eastern_Rifleman_02: TACU_SevenRings_U_I_Eastern_Rifleman_01 {
    displayName = "Rifleman (AK-103)";
    uniformClass = "U_lxWS_Djella_02_Grey";
    weapons[] = {
        "TACU_SevenRings_W_East_AK103",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_East_AK103",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_9("tacgt_30Rnd_762x39_AP_Metal"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_9("tacgt_30Rnd_762x39_AP_Metal"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_Rifleman_02.jpg);
};

class TACU_SevenRings_U_I_Eastern_Rifleman_03: TACU_SevenRings_U_I_Eastern_Rifleman_01 {
    displayName = "Rifleman (AK-104)";
    uniformClass = "U_lxWS_Djella_03_Green";
    weapons[] = {
        "TACU_SevenRings_W_East_AK104",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_East_AK104",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_9("tacgt_30Rnd_762x39_AP_Metal"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_9("tacgt_30Rnd_762x39_AP_Metal"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_Rifleman_03.jpg);
};

class TACU_SevenRings_U_I_Eastern_Grenadier_01: TACU_SevenRings_U_I_Eastern_Rifleman_01 {
    displayName = "Grenadier (AK-103)";
    role = "Grenadier";
    uniformClass = "U_lxWS_Djella_02_Sand";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_grenadier_belt_cb"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_grenadier_belt_cb"
    };
    weapons[] = {
        "TACU_SevenRings_W_East_AK103_GL",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_East_AK103_GL",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_9("tacgt_30Rnd_762x39_AP_Metal"),
        mag_4("CUP_1Rnd_HE_GP25_M"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_9("tacgt_30Rnd_762x39_AP_Metal"),
        mag_4("CUP_1Rnd_HE_GP25_M"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_Grenadier_01.jpg);
};

class TACU_SevenRings_U_I_Eastern_Grenadier_02: TACU_SevenRings_U_I_Eastern_Grenadier_01 {
    displayName = "Grenadier (SA-58)";
    uniformClass = "U_lxWS_C_Djella_03";
    weapons[] = {
        "TACU_SevenRings_W_East_SA58_GL",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_East_SA58_GL",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("tacgt_20Rnd_762x51_AP_FAL"),
        mag_4("1Rnd_HE_Grenade_shell"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_20Rnd_762x51_AP_FAL"),
        mag_4("1Rnd_HE_Grenade_shell"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_Grenadier_02.jpg);
};

class TACU_SevenRings_U_I_Eastern_Grenadier_03: TACU_SevenRings_U_I_Eastern_Grenadier_01 {
    displayName = "Grenadier (AKS-74N)";
    uniformClass = "U_lxWS_C_Djella_07";
    weapons[] = {
        "TACU_SevenRings_W_East_AKS74_GL",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_East_AKS74_GL",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_9("tacgt_30Rnd_545x39_AP_Black"),
        mag_4("CUP_1Rnd_HE_GP25_M"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_9("tacgt_30Rnd_545x39_AP_Black"),
        mag_4("CUP_1Rnd_HE_GP25_M"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_Grenadier_03.jpg);
};

class TACU_SevenRings_U_I_Eastern_Rifleman_AT_01: TACU_SevenRings_U_I_Eastern_Rifleman_01 {
    displayName = "Rifleman AT (M136)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    uniformClass = "U_lxWS_C_Djella_05";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_hgunner_cb"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_hgunner_cb"
    };
    weapons[] = {
        "TACU_SevenRings_W_East_AK101",
        "CUP_launch_M136",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_East_AK101",
        "CUP_launch_M136",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_9("tacgt_30Rnd_556x45_AP_AK"),
        "CUP_M136_M",
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_9("tacgt_30Rnd_556x45_AP_AK"),
        "CUP_M136_M",
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_Rifleman_AT_01.jpg);
};

class TACU_SevenRings_U_I_Eastern_Rifleman_AT_02: TACU_SevenRings_U_I_Eastern_Rifleman_AT_01 {
    displayName = "Rifleman AT (RPG-18)";
    uniformClass = "U_lxWS_Tak_02_B";
    weapons[] = {
        "TACU_SevenRings_W_East_AK15K",
        "CUP_launch_RPG18",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_East_AK15K",
        "CUP_launch_RPG18",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_9("tacgt_30Rnd_762x39_AP_Metal"),
        "CUP_RPG18_M",
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_9("tacgt_30Rnd_762x39_AP_Metal"),
        "CUP_RPG18_M",
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_Rifleman_AT_02.jpg);
};

class TACU_SevenRings_U_I_Eastern_Rifleman_AT_03: TACU_SevenRings_U_I_Eastern_Rifleman_AT_01 {
    displayName = "Rifleman AT (RPG-7)";
    uniformClass = "U_lxWS_Tak_02_A";
    backpack = "TACU_SevenRings_B_AT_Fieldpack_RPG7";
    weapons[] = {
        "TACU_SevenRings_W_East_AKMN_AFG",
        "launch_RPG7_F",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_East_AKMN_AFG",
        "launch_RPG7_F",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_9("tacgt_30Rnd_762x39_AP_Metal"),
        "RPG7_F",
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_9("tacgt_30Rnd_762x39_AP_Metal"),
        "RPG7_F",
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_Rifleman_AT_03.jpg);
};

class TACU_SevenRings_U_I_Eastern_Autorifleman_01: TACU_SevenRings_U_I_Eastern_Rifleman_01 {
    displayName = "Autorifleman (RPK-12)";
    icon = "iconManMG";
    role = "MachineGunner";
    uniformClass = "U_lxWS_Djella_02_Brown";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_hgunner_belt_cb"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_hgunner_belt_cb"
    };
    weapons[] = {
        "TACU_SevenRings_W_East_RPK12",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_East_RPK12",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_5("tacgt_75Rnd_762x39_EPR_Drum"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_5("tacgt_75Rnd_762x39_EPR_Drum"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_Autorifleman_01.jpg);
};

class TACU_SevenRings_U_I_Eastern_Autorifleman_02: TACU_SevenRings_U_I_Eastern_Autorifleman_01 {
    displayName = "Autorifleman (RPK-74)";
    uniformClass = "U_lxWS_Djella_02_Grey";
    weapons[] = {
        "TACU_SevenRings_W_East_RPK",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_East_RPK",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_5("tacgt_75Rnd_762x39_EPR_Drum"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_5("tacgt_75Rnd_762x39_EPR_Drum"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_Autorifleman_02.jpg);
};

class TACU_SevenRings_U_I_Eastern_Autorifleman_03: TACU_SevenRings_U_I_Eastern_Autorifleman_01 {
    displayName = "Autorifleman (MG3)";
    uniformClass = "U_lxWS_Djella_03_Green";
    weapons[] = {
        "TACU_SevenRings_W_East_MG3",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_East_MG3",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_4("CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_4("CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_Autorifleman_03.jpg);
};

class TACU_SevenRings_U_I_Eastern_Medic_01: TACU_SevenRings_U_I_Eastern_Rifleman_01 {
    displayName = "Medic (AK-107)";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    uniformClass = "U_lxWS_Djella_02_Sand";
    backpack = "B_Patrol_Medic_bag_F";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_medic_belt_cb"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_medic_belt_cb"
    };
    weapons[] = {
        "TACU_SevenRings_W_East_AK107",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_East_AK107",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("tacgt_30Rnd_545x39_AP_Black"),
        mag_2("SmokeShell"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_30Rnd_545x39_AP_Black"),
        mag_2("SmokeShell"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_Medic_01.jpg);
};

class TACU_SevenRings_U_I_Eastern_Medic_02: TACU_SevenRings_U_I_Eastern_Medic_01 {
    displayName = "Medic (AKS-74U)";
    uniformClass = "U_lxWS_C_Djella_02";
    weapons[] = {
        "TACU_SevenRings_W_East_AKS_74U",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_East_AKS_74U",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("tacgt_30Rnd_545x39_AP_Black"),
        mag_2("SmokeShell"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_30Rnd_545x39_AP_Black"),
        mag_2("SmokeShell"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_Medic_02.jpg);
};

class TACU_SevenRings_U_I_Eastern_Medic_03: TACU_SevenRings_U_I_Eastern_Medic_01 {
    displayName = "Medic (AKS)";
    uniformClass = "U_lxWS_C_Djella_07";
    weapons[] = {
        "TACU_SevenRings_W_East_AKS",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_East_AKS",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("tacgt_30Rnd_762x39_AP_Metal"),
        mag_2("SmokeShell"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_30Rnd_762x39_AP_Metal"),
        mag_2("SmokeShell"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_Medic_03.jpg);
};

class TACU_SevenRings_U_I_Eastern_Engineer_01: TACU_SevenRings_U_I_Eastern_Rifleman_01 {
    displayName = "Engineer (Vikhr)";
    icon = "iconManEngineer";
    role = "Sapper";
    engineer = 1;
    canDeactivateMines = 1;
    uniformClass = "U_lxWS_Tak_02_B";
    backpack = "TACU_SevenRings_B_Engineer_Kitbag_Tan";
    Items[] = {"ACE_M26_Clacker", "ACE_DeadManSwitch"};
    respawnItems[] = {"ACE_M26_Clacker", "ACE_DeadManSwitch"};
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_assaulter_belt_cb"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_assaulter_belt_cb"
    };
    weapons[] = {
        "TACU_SevenRings_W_East_VIKHR",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_East_VIKHR",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("CUP_30Rnd_9x39_SP5_VIKHR_M"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("CUP_30Rnd_9x39_SP5_VIKHR_M"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_Engineer_01.jpg);
};

class TACU_SevenRings_U_I_Eastern_Engineer_02: TACU_SevenRings_U_I_Eastern_Engineer_01 {
    displayName = "Engineer (Type 56)";
    uniformClass = "U_lxWS_Tak_02_A";
    weapons[] = {
        "TACU_SevenRings_W_East_Type_56",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_East_Type_56",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("tacgt_30Rnd_762x39_AP_Metal"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_30Rnd_762x39_AP_Metal"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_Engineer_02.jpg);
};

class TACU_SevenRings_U_I_Eastern_Engineer_03: TACU_SevenRings_U_I_Eastern_Engineer_01 {
    displayName = "Engineer (M4)";
    uniformClass = "U_lxWS_Djella_02_Brown";
    weapons[] = {
        "TACU_SevenRings_W_East_M4",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_East_M4",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("tacgt_30Rnd_556x45_AP_EMAG"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_30Rnd_556x45_AP_EMAG"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_Engineer_03.jpg);
};

class TACU_SevenRings_U_I_Eastern_Teamleader_01: TACU_SevenRings_U_I_Eastern_Rifleman_01 {
    displayName = "Team Leader (AK-107)";
    icon = "iconManLeader";
    uniformClass = "U_lxWS_Djella_03_Green";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_teamleader_belt_cb"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_teamleader_belt_cb"
    };
    weapons[] = {
        "TACU_SevenRings_W_East_AK107",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_East_AK107",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("tacgt_30Rnd_545x39_AP_Black"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_30Rnd_545x39_AP_Black"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_Teamleader_01.jpg);
};

class TACU_SevenRings_U_I_Eastern_Teamleader_02: TACU_SevenRings_U_I_Eastern_Teamleader_01 {
    displayName = "Team Leader (AK-15K)";
    uniformClass = "U_lxWS_Djella_02_Sand";
    weapons[] = {
        "TACU_SevenRings_W_East_AK15K",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_East_AK15K",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("tacgt_30Rnd_762x39_AP_Metal"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_30Rnd_762x39_AP_Metal"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_Teamleader_02.jpg);
};

class TACU_SevenRings_U_I_Eastern_Teamleader_03: TACU_SevenRings_U_I_Eastern_Teamleader_01 {
    displayName = "Team Leader (AK-108)";
    uniformClass = "U_lxWS_C_Djella_02";
    weapons[] = {
        "TACU_SevenRings_W_East_AK108",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_East_AK108",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("tacgt_30Rnd_556x45_AP_AK"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_30Rnd_556x45_AP_AK"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_Teamleader_03.jpg);
};

class TACU_SevenRings_U_I_Eastern_CQBSpecialist_01: TACU_SevenRings_U_I_Eastern_Rifleman_01 {
    displayName = "CQB Specialist (SAIGA-12)";
    uniformClass = "U_lxWS_C_Djella_07";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_light_cb"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_light_cb"
    };
    weapons[] = {
        "TACU_SevenRings_W_East_SAIGA12K",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_East_SAIGA12K",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("CUP_12Rnd_B_Saiga12_Buck_00"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("CUP_12Rnd_B_Saiga12_Buck_00"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_CQBSpecialist_01.jpg);
};

class TACU_SevenRings_U_I_Eastern_CQBSpecialist_02: TACU_SevenRings_U_I_Eastern_CQBSpecialist_01 {
    displayName = "CQB Specialist (Groza)";
    uniformClass = "U_lxWS_Tak_02_B";
    weapons[] = {
        "CUP_arifle_OTS14_GROZA_Grip",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "CUP_arifle_OTS14_GROZA_Grip",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("CUP_20Rnd_9x39_SP5_GROZA_M"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("CUP_20Rnd_9x39_SP5_GROZA_M"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_CQBSpecialist_02.jpg);
};

class TACU_SevenRings_U_I_Eastern_CQBSpecialist_03: TACU_SevenRings_U_I_Eastern_CQBSpecialist_01 {
    displayName = "CQB Specialist (Scorpion EVO)";
    uniformClass = "U_lxWS_Tak_02_C";
    weapons[] = {
        "TACU_SevenRings_W_East_Scorpion_Evo",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_East_Scorpion_Evo",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("CUP_30Rnd_9x19_EVO"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("CUP_30Rnd_9x19_EVO"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_CQBSpecialist_03.jpg);
};

class TACU_SevenRings_U_I_Eastern_Marksman_01: TACU_SevenRings_U_I_Eastern_Rifleman_01 {
    displayName = "Marksman (SVD)";
    role = "Marksman";
    uniformClass = "U_lxWS_Djella_02_Sand";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_marksman_cb"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_marksman_cb"
    };
    weapons[] = {
        "TACU_SevenRings_W_East_SVD",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_East_SVD",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("tacgt_10Rnd_762x54r_AP"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_10Rnd_762x54r_AP"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_Marksman_01.jpg);
};

class TACU_SevenRings_U_I_Eastern_Marksman_02: TACU_SevenRings_U_I_Eastern_Marksman_01 {
    displayName = "Marksman (Cyrus)";
    uniformClass = "U_lxWS_Djella_03_Green";
    weapons[] = {
        "TACU_SevenRings_W_East_Cyrus",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_East_Cyrus",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("10Rnd_93x64_DMR_05_Mag"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("10Rnd_93x64_DMR_05_Mag"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_Marksman_02.jpg);
};

class TACU_SevenRings_U_I_Eastern_Marksman_03: TACU_SevenRings_U_I_Eastern_Marksman_01 {
    displayName = "Marksman (FN FAL)";
    uniformClass = "U_lxWS_Djella_02_Grey";
    weapons[] = {
        "TACU_SevenRings_W_East_FNFAL_5061",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_East_FNFAL_5061",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("tacgt_20Rnd_762x51_AP_FAL"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_20Rnd_762x51_AP_FAL"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_Marksman_03.jpg);
};

class TACU_SevenRings_U_I_Eastern_AA_01: TACU_SevenRings_U_I_Eastern_Rifleman_01 {
    displayName = "AA Specialist (Stinger)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    uniformClass = "U_lxWS_Djella_02_Brown";
    backpack = "TACU_SevenRings_B_AA_Kitbag_Tan";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_hgunner_rgr"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_hgunner_rgr"
    };
    weapons[] = {
        "CUP_launch_FIM92Stinger",
        "TACU_SevenRings_W_East_AK108",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "CUP_launch_FIM92Stinger",
        "TACU_SevenRings_W_East_AK108",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        "CUP_Stinger_M",
        mag_8("tacgt_30Rnd_556x45_AP_AK"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        "CUP_Stinger_M",
        mag_8("tacgt_30Rnd_556x45_AP_AK"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_AA_01.jpg);
};
