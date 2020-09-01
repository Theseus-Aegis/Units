class TACU_SevenRings_U_I_Eastern_Rifleman_01: TACU_Main_U_INDEP_Soldier_Base {
    author = "Tyrone";
    displayName = "Rifleman (AK-101)";
    faction = "TACU_SevenRings_I_Eastern";
    editorSubcategory = "TACU_SevenRings_EdSubCat_Eastern";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguagePER_F", "Head_TK"};
    genericNames = "TakistaniMen";
    icon = "iconMan";
    role = "Rifleman";
    sensitivity = 2;
    sensitivityEar = 0.15;
    uniformClass = "CUP_O_TKI_Khet_Partug_04";
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
        mag_9("tacgt_30Rnd_556x45_M995_AK"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_9("tacgt_30Rnd_556x45_M995_AK"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    headgearList[] = {
        "CUP_H_TKI_Lungee_Open_01", 0.25,
        "CUP_H_TKI_Pakol_1_03", 0.25,
        "H_PASGT_basic_black_F", 0.50,
        "H_PASGT_basic_olive_F", 0.50,
        "CUP_H_Ger_M92", 0.50,
        "CUP_H_RUS_K6_3_Shield_Down_khaki", 0.10
    };
    CBA_facewearList[] = {
        "CUP_G_Scarf_Face_White", 0.5,
        "CUP_G_Scarf_Face_Red", 0.5,
        "CUP_G_Scarf_Face_Tan", 0.5,
        "CUP_G_Scarf_Face_Blk", 0.5,
        "CUP_G_Scarf_Face_Grn", 0.5,
        "", 0.15
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_Rifleman_01.jpg);
};

class TACU_SevenRings_U_I_Eastern_Rifleman_02: TACU_SevenRings_U_I_Eastern_Rifleman_01 {
    displayName = "Rifleman (AK-103)";
    uniformClass = "CUP_U_C_racketeer_01";
    weapons[] = {
        "TACU_SevenRings_W_East_AK103",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_East_AK103",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_9("tacgt_30Rnd_762x39_BP_Mag"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_9("tacgt_30Rnd_762x39_BP_Mag"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_Rifleman_02.jpg);
};

class TACU_SevenRings_U_I_Eastern_Rifleman_03: TACU_SevenRings_U_I_Eastern_Rifleman_01 {
    displayName = "Rifleman (AK-104)";
    uniformClass = "CUP_O_TKI_Khet_Partug_01";
    weapons[] = {
        "TACU_SevenRings_W_East_AK104",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_East_AK104",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_9("tacgt_30Rnd_762x39_BP_Mag"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_9("tacgt_30Rnd_762x39_BP_Mag"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_Rifleman_03.jpg);
};

class TACU_SevenRings_U_I_Eastern_Grenadier_01: TACU_SevenRings_U_I_Eastern_Rifleman_01 {
    displayName = "Grenadier (AK-103)";
    role = "Grenadier";
    uniformClass = "CUP_U_C_racketeer_01";
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
        mag_9("tacgt_30Rnd_762x39_BP_Mag"),
        mag_4("CUP_1Rnd_HE_GP25_M"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_9("tacgt_30Rnd_762x39_BP_Mag"),
        mag_4("CUP_1Rnd_HE_GP25_M"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_Grenadier_01.jpg);
};

class TACU_SevenRings_U_I_Eastern_Grenadier_02: TACU_SevenRings_U_I_Eastern_Grenadier_01 {
    displayName = "Grenadier (SA-58)";
    uniformClass = "CUP_O_TKI_Khet_Partug_02";
    weapons[] = {
        "TACU_SevenRings_W_East_SA58_GL",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_East_SA58_GL",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("tacgt_30Rnd_762x51_FAL_AP_Mag"),
        mag_4("1Rnd_HE_Grenade_shell"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_30Rnd_762x51_FAL_AP_Mag"),
        mag_4("1Rnd_HE_Grenade_shell"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_Grenadier_02.jpg);
};

class TACU_SevenRings_U_I_Eastern_Grenadier_03: TACU_SevenRings_U_I_Eastern_Grenadier_01 {
    displayName = "Grenadier (AKS-74N)";
    uniformClass = "CUP_O_TKI_Khet_Partug_04";
    weapons[] = {
        "TACU_SevenRings_W_East_AKS74_GL",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_East_AKS74_GL",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_9("tacgt_30Rnd_545x39_BT_Mag_Bakelite"),
        mag_4("CUP_1Rnd_HE_GP25_M"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_9("tacgt_30Rnd_545x39_BT_Mag_Bakelite"),
        mag_4("CUP_1Rnd_HE_GP25_M"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_Grenadier_03.jpg);
};

class TACU_SevenRings_U_I_Eastern_AT_01: TACU_SevenRings_U_I_Eastern_Rifleman_01 {
    displayName = "Rifleman AT (M136)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    uniformClass = "CUP_O_TKI_Khet_Partug_01";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_hgunner_cb"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_hgunner_cb"
    };
    weapons[] = {
        "CUP_launch_M136",
        "TACU_SevenRings_W_East_AK101",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "CUP_launch_M136",
        "TACU_SevenRings_W_East_AK101",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        "CUP_M136_M",
        mag_9("tacgt_30Rnd_556x45_M995_AK"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        "CUP_M136_M",
        mag_9("tacgt_30Rnd_556x45_M995_AK"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_AT_01.jpg);
};

class TACU_SevenRings_U_I_Eastern_AT_02: TACU_SevenRings_U_I_Eastern_AT_01 {
    displayName = "Rifleman AT (RPG-18)";
    uniformClass = "CUP_U_C_racketeer_01";
    weapons[] = {
        "CUP_launch_RPG18",
        "TACU_SevenRings_W_East_AK15K",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "CUP_launch_RPG18",
        "TACU_SevenRings_W_East_AK15K",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        "CUP_RPG18_M",
        mag_9("tacgt_30Rnd_762x39_BP_Mag"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        "CUP_RPG18_M",
        mag_9("tacgt_30Rnd_762x39_BP_Mag"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_AT_02.jpg);
};

class TACU_SevenRings_U_I_Eastern_AT_03: TACU_SevenRings_U_I_Eastern_AT_01 {
    displayName = "Rifleman AT (RPG-7)";
    uniformClass = "CUP_O_TKI_Khet_Partug_04";
    backpack = "TACU_SevenRings_B_AT_Fieldpack_RPG7";
    weapons[] = {
        "launch_RPG7_F",
        "TACU_SevenRings_W_East_AKMN_AFG",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "launch_RPG7_F",
        "TACU_SevenRings_W_East_AKMN_AFG",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        "RPG7_F",
        mag_9("tacgt_30Rnd_762x39_BP_Mag"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        "RPG7_F",
        mag_9("tacgt_30Rnd_762x39_BP_Mag"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_AT_03.jpg);
};

class TACU_SevenRings_U_I_Eastern_MG_01: TACU_SevenRings_U_I_Eastern_Rifleman_01 {
    displayName = "Autorifleman (RPK-12)";
    icon = "iconManMG";
    role = "MachineGunner";
    uniformClass = "CUP_O_TKI_Khet_Partug_02";
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
        mag_5("tacgt_75Rnd_762x39_RPK_BP_Mag"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_5("tacgt_75Rnd_762x39_RPK_BP_Mag"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_MG_01.jpg);
};

class TACU_SevenRings_U_I_Eastern_MG_02: TACU_SevenRings_U_I_Eastern_MG_01 {
    displayName = "Autorifleman (RPK-74)";
    uniformClass = "CUP_O_TKI_Khet_Partug_01";
    weapons[] = {
        "TACU_SevenRings_W_East_RPK",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_East_RPK",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_5("tacgt_75Rnd_762x39_RPK_BP_Mag"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_5("tacgt_75Rnd_762x39_RPK_BP_Mag"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_MG_02.jpg);
};

class TACU_SevenRings_U_I_Eastern_MG_03: TACU_SevenRings_U_I_Eastern_MG_01 {
    displayName = "Autorifleman (MG3)";
    uniformClass = "CUP_O_TKI_Khet_Partug_01";
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
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_MG_03.jpg);
};

class TACU_SevenRings_U_I_Eastern_Medic_01: TACU_SevenRings_U_I_Eastern_Rifleman_01 {
    displayName = "Medic (AK-107)";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    uniformClass = "CUP_O_TKI_Khet_Partug_04";
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
        mag_8("tacgt_30Rnd_545x39_BT_Mag_Black"),
        mag_2("SmokeShell"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_30Rnd_545x39_BT_Mag_Black"),
        mag_2("SmokeShell"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Western_Medic_01.jpg);
};

class TACU_SevenRings_U_I_Eastern_Medic_02: TACU_SevenRings_U_I_Eastern_Medic_01 {
    displayName = "Medic (AKS-74U)";
    uniformClass = "CUP_U_C_racketeer_01";
    weapons[] = {
        "TACU_SevenRings_W_East_AKS_74U",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_East_AKS_74U",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("tacgt_30Rnd_545x39_BT_Mag_Plum"),
        mag_2("SmokeShell"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_30Rnd_545x39_BT_Mag_Plum"),
        mag_2("SmokeShell"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Western_Medic_02.jpg);
};

class TACU_SevenRings_U_I_Eastern_Medic_03: TACU_SevenRings_U_I_Eastern_Medic_01 {
    displayName = "Medic (AKS)";
    uniformClass = "CUP_O_TKI_Khet_Partug_02";
    weapons[] = {
        "TACU_SevenRings_W_East_AKS",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_East_AKS",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("tacgt_30Rnd_762x39_BP_Mag"),
        mag_2("SmokeShell"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_30Rnd_762x39_BP_Mag"),
        mag_2("SmokeShell"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Western_Medic_03.jpg);
};

class TACU_SevenRings_U_I_Eastern_Engineer_01: TACU_SevenRings_U_I_Eastern_Rifleman_01 {
    displayName = "Engineer (Vikhr)";
    icon = "iconManEngineer";
    role = "Sapper";
    engineer = true;
    canDeactivateMines = true;
    uniformClass = "CUP_U_C_racketeer_01";
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
    uniformClass = "CUP_O_TKI_Khet_Partug_04";
    weapons[] = {
        "TACU_SevenRings_W_East_Type_56",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_East_Type_56",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("tacgt_30Rnd_762x39_BP_Mag"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_30Rnd_762x39_BP_Mag"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_Engineer_02.jpg);
};

class TACU_SevenRings_U_I_Eastern_Engineer_03: TACU_SevenRings_U_I_Eastern_Engineer_01 {
    displayName = "Engineer (M4)";
    uniformClass = "CUP_U_C_racketeer_01";
    weapons[] = {
        "TACU_SevenRings_W_East_M4",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_East_M4",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("tacgt_30Rnd_556x45_M995_EMAG"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_30Rnd_556x45_M995_EMAG"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_Engineer_03.jpg);
};

class TACU_SevenRings_U_I_Eastern_Teamleader_01: TACU_SevenRings_U_I_Eastern_Rifleman_01 {
    displayName = "Team Leader (AK-107)";
    icon = "iconManLeader";
    uniformClass = "CUP_O_TKI_Khet_Partug_01";
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
        mag_8("tacgt_30Rnd_545x39_BT_Mag_Black"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_30Rnd_545x39_BT_Mag_Black"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_Teamleader_01.jpg);
};

class TACU_SevenRings_U_I_Eastern_Teamleader_02: TACU_SevenRings_U_I_Eastern_Teamleader_01 {
    displayName = "Team Leader (AK-15K)";
    uniformClass = "CUP_O_TKI_Khet_Partug_02";
    weapons[] = {
        "TACU_SevenRings_W_East_AK15K",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_East_AK15K",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("tacgt_30Rnd_762x39_BP_Mag"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_30Rnd_762x39_BP_Mag"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_Teamleader_02.jpg);
};

class TACU_SevenRings_U_I_Eastern_Teamleader_03: TACU_SevenRings_U_I_Eastern_Teamleader_01 {
    displayName = "Team Leader (AK-108)";
    uniformClass = "CUP_O_TKI_Khet_Partug_04";
    weapons[] = {
        "TACU_SevenRings_W_East_AK108",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_East_AK108",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("tacgt_30Rnd_556x45_M995_AK"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_30Rnd_556x45_M995_AK"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_Teamleader_03.jpg);
};

class TACU_SevenRings_U_I_Eastern_CQBSpecialist_01: TACU_SevenRings_U_I_Eastern_Rifleman_01 {
    displayName = "CQB Specialist (SAIGA-12)";
    uniformClass = "CUP_O_TKI_Khet_Partug_02";
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
        mag_8("CUP_20Rnd_B_Saiga12_74Pellets_M"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("CUP_20Rnd_B_Saiga12_74Pellets_M"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_CQBSpecialist_01.jpg);
};

class TACU_SevenRings_U_I_Eastern_CQBSpecialist_02: TACU_SevenRings_U_I_Eastern_CQBSpecialist_01 {
    displayName = "CQB Specialist (Groza)";
    uniformClass = "CUP_O_TKI_Khet_Partug_04";
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
    uniformClass = "CUP_O_TKI_Khet_Partug_01";
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
    sensitivity = 2.25;
    uniformClass = "CUP_O_TKI_Khet_Partug_01";
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
        mag_8("tacgt_10Rnd_762x54_SVD_AP_Mag"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_10Rnd_762x54_SVD_AP_Mag"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_Marksman_01.jpg);
};

class TACU_SevenRings_U_I_Eastern_Marksman_02: TACU_SevenRings_U_I_Eastern_Marksman_01 {
    displayName = "Marksman (Cyrus)";
    uniformClass = "CUP_U_C_racketeer_01";
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
    uniformClass = "CUP_O_TKI_Khet_Partug_04";
    weapons[] = {
        "TACU_SevenRings_W_East_FNFAL_5061",
        MACRO_EAST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_East_FNFAL_5061",
        MACRO_EAST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("tacgt_20Rnd_762x51_FAL_AP_Mag"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_20Rnd_762x51_FAL_AP_Mag"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_Marksman_03.jpg);
};

class TACU_SevenRings_U_I_Eastern_AA_01: TACU_SevenRings_U_I_Eastern_Rifleman_01 {
    displayName = "Rifleman AA (Stinger)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    uniformClass = "CUP_O_TKI_Khet_Partug_04";
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
        mag_8("tacgt_30Rnd_556x45_M995_AK"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        "CUP_Stinger_M",
        mag_8("tacgt_30Rnd_556x45_M995_AK"),
        MACRO_EAST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Eastern_AA_01.jpg);
};
