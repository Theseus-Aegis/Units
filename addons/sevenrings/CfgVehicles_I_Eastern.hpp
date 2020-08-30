class TACU_Seven_Rings_U_I_Eastern_Rifleman_01: TACU_Main_U_INDEP_Soldier_Base {
    author = "Tyrone";
    displayName = "Rifleman (AK-101)";
    faction = "TACU_Seven_Rings_I_Eastern";
    editorSubcategory = "TACU_Seven_Rings_EdSubCat_Eastern";
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
        "TACU_SR_W_East_AK101",
        SR_EAST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_East_AK101",
        SR_EAST_WEAPON_MACRO
    };
    magazines[] = {
        mag_6("tacgt_30Rnd_556x45_M995_AK"),
        SR_EAST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_6("tacgt_30Rnd_556x45_M995_AK"),
        SR_EAST_MAGAZINE_MACRO
    };
    headgearList[] = {
        "CUP_H_TKI_Lungee_Open_01", 0.50,
        "CUP_H_TKI_Pakol_1_03", 0.50,
        "H_PASGT_basic_black_F", 0.50,
        "H_PASGT_basic_olive_F", 0.50,
        "CUP_H_Ger_M92", 0.50,
        "CUP_H_RUS_K6_3_Shield_Down_khaki", 0.25,
        "", 0.50
    };
    CBA_facewearList[] = {
        "CUP_G_Scarf_Face_White", 0.5,
        "CUP_G_Scarf_Face_Red", 0.5,
        "CUP_G_Scarf_Face_Tan", 0.5,
        "CUP_G_Scarf_Face_Blk", 0.5,
        "CUP_G_Scarf_Face_Grn", 0.5,
        "", 0.75
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Eastern_Rifleman_01.jpg);
};

class TACU_Seven_Rings_U_I_Eastern_Rifleman_02: TACU_Seven_Rings_U_I_Eastern_Rifleman_01 {
    displayName = "Rifleman (AK-103)";
    uniformClass = "CUP_U_C_racketeer_01";
    weapons[] = {
        "TACU_SR_W_East_AK103",
        SR_EAST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_East_AK103",
        SR_EAST_WEAPON_MACRO
    };
    magazines[] = {
        mag_6("tacgt_30Rnd_762x39_BP_Mag"),
        SR_EAST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_6("tacgt_30Rnd_762x39_BP_Mag"),
        SR_EAST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Eastern_Rifleman_02.jpg);
};

class TACU_Seven_Rings_U_I_Eastern_Rifleman_03: TACU_Seven_Rings_U_I_Eastern_Rifleman_01 {
    displayName = "Rifleman (AK-104)";
    uniformClass = "CUP_O_TKI_Khet_Partug_01";
    weapons[] = {
        "TACU_SR_W_East_AK104",
        SR_EAST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_East_AK104",
        SR_EAST_WEAPON_MACRO
    };
    magazines[] = {
        mag_6("tacgt_30Rnd_762x39_BP_Mag"),
        SR_EAST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_6("tacgt_30Rnd_762x39_BP_Mag"),
        SR_EAST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Eastern_Rifleman_03.jpg);
};

class TACU_Seven_Rings_U_I_Eastern_Grenadier_01: TACU_Seven_Rings_U_I_Eastern_Rifleman_01 {
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
        "TACU_SR_W_East_AK103_GL",
        SR_EAST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_East_AK103_GL",
        SR_EAST_WEAPON_MACRO
    };
    magazines[] = {
        mag_6("tacgt_30Rnd_762x39_BP_Mag"),
        mag_4("CUP_1Rnd_HE_GP25_M"),
        SR_EAST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_6("tacgt_30Rnd_762x39_BP_Mag"),
        mag_4("CUP_1Rnd_HE_GP25_M"),
        SR_EAST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Eastern_Grenadier_01.jpg);
};

class TACU_Seven_Rings_U_I_Eastern_Grenadier_02: TACU_Seven_Rings_U_I_Eastern_Grenadier_01 {
    displayName = "Grenadier (SA-58)";
    uniformClass = "CUP_O_TKI_Khet_Partug_02";
    weapons[] = {
        "TACU_SR_W_East_SA58_GL",
        SR_EAST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_East_SA58_GL",
        SR_EAST_WEAPON_MACRO
    };
    magazines[] = {
        mag_6("tacgt_30Rnd_762x51_FAL_AP_Mag"),
        mag_4("1Rnd_HE_Grenade_shell"),
        SR_EAST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_6("tacgt_30Rnd_762x51_FAL_AP_Mag"),
        mag_4("1Rnd_HE_Grenade_shell"),
        SR_EAST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Eastern_Grenadier_02.jpg);
};

class TACU_Seven_Rings_U_I_Eastern_Grenadier_03: TACU_Seven_Rings_U_I_Eastern_Grenadier_01 {
    displayName = "Grenadier (AKS-74N)";
    uniformClass = "CUP_O_TKI_Khet_Partug_04";
    weapons[] = {
        "TACU_SR_W_East_AKS74_GL",
        SR_EAST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_East_AKS74_GL",
        SR_EAST_WEAPON_MACRO
    };
    magazines[] = {
        mag_6("tacgt_30Rnd_545x39_BT_Mag_Bakelite"),
        mag_4("CUP_1Rnd_HE_GP25_M"),
        SR_EAST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_6("tacgt_30Rnd_545x39_BT_Mag_Bakelite"),
        mag_4("CUP_1Rnd_HE_GP25_M"),
        SR_EAST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Eastern_Grenadier_03.jpg);
};

class TACU_Seven_Rings_U_I_Eastern_AT_01: TACU_Seven_Rings_U_I_Eastern_Rifleman_01 {
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
        "TACU_SR_W_East_AK101",
        SR_EAST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "CUP_launch_M136",
        "TACU_SR_W_East_AK101",
        SR_EAST_WEAPON_MACRO
    };
    magazines[] = {
        "CUP_M136_M",
        mag_6("tacgt_30Rnd_556x45_M995_AK"),
        SR_EAST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        "CUP_M136_M",
        mag_6("tacgt_30Rnd_556x45_M995_AK"),
        SR_EAST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Eastern_AT_01.jpg);
};

class TACU_Seven_Rings_U_I_Eastern_AT_02: TACU_Seven_Rings_U_I_Eastern_AT_01 {
    displayName = "Rifleman AT (RPG-18)";
    uniformClass = "CUP_U_C_racketeer_01";
    weapons[] = {
        "CUP_launch_RPG18",
        "TACU_SR_W_East_AK15K",
        SR_EAST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "CUP_launch_RPG18",
        "TACU_SR_W_East_AK15K",
        SR_EAST_WEAPON_MACRO
    };
    magazines[] = {
        "CUP_RPG18_M",
        mag_6("tacgt_30Rnd_762x39_BP_Mag"),
        SR_EAST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        "CUP_RPG18_M",
        mag_6("tacgt_30Rnd_762x39_BP_Mag"),
        SR_EAST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Eastern_AT_02.jpg);
};

class TACU_Seven_Rings_U_I_Eastern_AT_03: TACU_Seven_Rings_U_I_Eastern_AT_01 {
    displayName = "Rifleman AT (RPG-7)";
    uniformClass = "CUP_O_TKI_Khet_Partug_04";
    backpack = "TACU_SR_B_AT_Fieldpack_RPG7";
    weapons[] = {
        "launch_RPG7_F",
        "TACU_SR_W_East_AKMN_AFG",
        SR_EAST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "launch_RPG7_F",
        "TACU_SR_W_East_AKMN_AFG",
        SR_EAST_WEAPON_MACRO
    };
    magazines[] = {
        "RPG7_F",
        mag_6("tacgt_30Rnd_762x39_BP_Mag"),
        SR_EAST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        "RPG7_F",
        mag_6("tacgt_30Rnd_762x39_BP_Mag"),
        SR_EAST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Eastern_AT_03.jpg);
};

class TACU_Seven_Rings_U_I_Eastern_MG_01: TACU_Seven_Rings_U_I_Eastern_Rifleman_01 {
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
        "TACU_SR_W_East_RPK12",
        SR_EAST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_East_RPK12",
        SR_EAST_WEAPON_MACRO
    };
    magazines[] = {
        mag_3("tacgt_75Rnd_762x39_RPK_BP_Mag"),
        SR_EAST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_3("tacgt_75Rnd_762x39_RPK_BP_Mag"),
        SR_EAST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Eastern_MG_01.jpg);
};

class TACU_Seven_Rings_U_I_Eastern_MG_02: TACU_Seven_Rings_U_I_Eastern_MG_01 {
    displayName = "Autorifleman (RPK-74)";
    uniformClass = "CUP_O_TKI_Khet_Partug_01";
    weapons[] = {
        "TACU_SR_W_East_RPK",
        SR_EAST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_East_RPK",
        SR_EAST_WEAPON_MACRO
    };
    magazines[] = {
        mag_3("tacgt_75Rnd_762x39_RPK_BP_Mag"),
        SR_EAST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_3("tacgt_75Rnd_762x39_RPK_BP_Mag"),
        SR_EAST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Eastern_MG_02.jpg);
};

class TACU_Seven_Rings_U_I_Eastern_MG_03: TACU_Seven_Rings_U_I_Eastern_MG_01 {
    displayName = "Autorifleman (MG3)";
    uniformClass = "CUP_O_TKI_Khet_Partug_01";
    weapons[] = {
        "TACU_SR_W_East_MG3",
        SR_EAST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_East_MG3",
        SR_EAST_WEAPON_MACRO
    };
    magazines[] = {
        mag_3("CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
        SR_EAST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_3("CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
        SR_EAST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Eastern_MG_03.jpg);
};

class TACU_Seven_Rings_U_I_Eastern_Medic_01: TACU_Seven_Rings_U_I_Eastern_Rifleman_01 {
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
        "TACU_SR_W_East_AK107",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_East_AK107",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        mag_8("tacgt_30Rnd_545x39_BT_Mag_Black"),
        mag_2("SmokeShell"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_8("tacgt_30Rnd_545x39_BT_Mag_Black"),
        mag_2("SmokeShell"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Western_Medic_01.jpg);
};

class TACU_Seven_Rings_U_I_Eastern_Medic_02: TACU_Seven_Rings_U_I_Eastern_Medic_01 {
    displayName = "Medic (AKS-74U)";
    uniformClass = "CUP_U_C_racketeer_01";
    weapons[] = {
        "TACU_SR_W_East_AKS_74U",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_East_AKS_74U",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        mag_8("tacgt_30Rnd_545x39_BT_Mag_Plum"),
        mag_2("SmokeShell"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_8("tacgt_30Rnd_545x39_BT_Mag_Plum"),
        mag_2("SmokeShell"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Western_Medic_02.jpg);
};

class TACU_Seven_Rings_U_I_Eastern_Medic_03: TACU_Seven_Rings_U_I_Eastern_Medic_01 {
    displayName = "Medic (AKS)";
    uniformClass = "CUP_O_TKI_Khet_Partug_02";
    weapons[] = {
        "TACU_SR_W_East_AKS",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_East_AKS",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        mag_8("tacgt_30Rnd_762x39_BP_Mag"),
        mag_2("SmokeShell"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_8("tacgt_30Rnd_762x39_BP_Mag"),
        mag_2("SmokeShell"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Western_Medic_03.jpg);
};

class TACU_Seven_Rings_U_I_Eastern_Engineer_01: TACU_Seven_Rings_U_I_Eastern_Rifleman_01 {
    displayName = "Engineer (Vikhr)";
    icon = "iconManEngineer";
    role = "Sapper";
    engineer = true;
    uniformClass = "CUP_U_C_racketeer_01";
    backpack = "TACU_SR_B_Engineer_Kitbag_Tan";
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
        "TACU_SR_W_East_VIKHR",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_East_VIKHR",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        mag_8("CUP_30Rnd_9x39_SP5_VIKHR_M"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_8("CUP_30Rnd_9x39_SP5_VIKHR_M"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Eastern_Engineer_01.jpg);
};

class TACU_Seven_Rings_U_I_Eastern_Engineer_02: TACU_Seven_Rings_U_I_Eastern_Engineer_01 {
    displayName = "Engineer (Type 56)";
    uniformClass = "CUP_O_TKI_Khet_Partug_04";
    weapons[] = {
        "TACU_SR_W_East_Type_56",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_East_Type_56",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        mag_8("tacgt_30Rnd_762x39_BP_Mag"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_8("tacgt_30Rnd_762x39_BP_Mag"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Eastern_Engineer_02.jpg);
};

class TACU_Seven_Rings_U_I_Eastern_Engineer_03: TACU_Seven_Rings_U_I_Eastern_Engineer_01 {
    displayName = "Engineer (M4)";
    uniformClass = "CUP_U_C_racketeer_01";
    weapons[] = {
        "TACU_SR_W_East_M4",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_East_M4",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        mag_8("tacgt_30Rnd_556x45_M995_EMAG"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_8("tacgt_30Rnd_556x45_M995_EMAG"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Eastern_Engineer_03.jpg);
};

class TACU_Seven_Rings_U_I_Eastern_Teamleader_01: TACU_Seven_Rings_U_I_Eastern_Rifleman_01 {
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
        "TACU_SR_W_East_AK107",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_East_AK107",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        mag_8("tacgt_30Rnd_545x39_BT_Mag_Black"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_8("tacgt_30Rnd_545x39_BT_Mag_Black"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Eastern_Teamleader_01.jpg);
};

class TACU_Seven_Rings_U_I_Eastern_Teamleader_02: TACU_Seven_Rings_U_I_Eastern_Teamleader_01 {
    displayName = "Team Leader (AK-15K)";
    uniformClass = "CUP_O_TKI_Khet_Partug_02";
    weapons[] = {
        "TACU_SR_W_East_AK15K",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_East_AK15K",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        mag_8("tacgt_30Rnd_762x39_BP_Mag"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_8("tacgt_30Rnd_762x39_BP_Mag"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Eastern_Teamleader_02.jpg);
};

class TACU_Seven_Rings_U_I_Eastern_Teamleader_03: TACU_Seven_Rings_U_I_Eastern_Teamleader_01 {
    displayName = "Team Leader (AK-108)";
    uniformClass = "CUP_O_TKI_Khet_Partug_04";
    weapons[] = {
        "TACU_SR_W_East_AK108",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_East_AK108",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        mag_8("tacgt_30Rnd_556x45_M995_AK"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_8("tacgt_30Rnd_556x45_M995_AK"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Eastern_Teamleader_03.jpg);
};

class TACU_Seven_Rings_U_I_Eastern_CQBSpecialist_01: TACU_Seven_Rings_U_I_Eastern_Rifleman_01 {
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
        "TACU_SR_W_East_SAIGA12K",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_East_SAIGA12K",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        mag_8("CUP_20Rnd_B_Saiga12_74Pellets_M"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_8("CUP_20Rnd_B_Saiga12_74Pellets_M"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Eastern_CQBSpecialist_01.jpg);
};

class TACU_Seven_Rings_U_I_Eastern_CQBSpecialist_02: TACU_Seven_Rings_U_I_Eastern_CQBSpecialist_01 {
    displayName = "CQB Specialist (Groza)";
    uniformClass = "CUP_O_TKI_Khet_Partug_04";
    weapons[] = {
        "CUP_arifle_OTS14_GROZA_Grip",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "CUP_arifle_OTS14_GROZA_Grip",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        mag_8("CUP_20Rnd_9x39_SP5_GROZA_M"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_8("CUP_20Rnd_9x39_SP5_GROZA_M"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Eastern_CQBSpecialist_02.jpg);
};

class TACU_Seven_Rings_U_I_Eastern_CQBSpecialist_03: TACU_Seven_Rings_U_I_Eastern_CQBSpecialist_01 {
    displayName = "CQB Specialist (Scorpion EVO)";
    uniformClass = "CUP_O_TKI_Khet_Partug_01";
    weapons[] = {
        "TACU_SR_W_East_Scorpion_Evo",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_East_Scorpion_Evo",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        mag_8("CUP_30Rnd_9x19_EVO"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_8("CUP_30Rnd_9x19_EVO"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Eastern_CQBSpecialist_03.jpg);
};

class TACU_Seven_Rings_U_I_Eastern_Marksman_01: TACU_Seven_Rings_U_I_Eastern_Rifleman_01 {
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
        "TACU_SR_W_East_SVD",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_East_SVD",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        mag_8("tacgt_10Rnd_762x54_SVD_AP_Mag"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_8("tacgt_10Rnd_762x54_SVD_AP_Mag"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Eastern_Marksman_01.jpg);
};

class TACU_Seven_Rings_U_I_Eastern_Marksman_02: TACU_Seven_Rings_U_I_Eastern_Marksman_01 {
    displayName = "Marksman (Cyrus)";
    uniformClass = "CUP_U_C_racketeer_01";
    weapons[] = {
        "TACU_SR_W_East_Cyrus",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_East_Cyrus",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        mag_8("10Rnd_93x64_DMR_05_Mag"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_8("10Rnd_93x64_DMR_05_Mag"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Eastern_Marksman_02.jpg);
};

class TACU_Seven_Rings_U_I_Eastern_Marksman_03: TACU_Seven_Rings_U_I_Eastern_Marksman_01 {
    displayName = "Marksman (FN FAL)";
    uniformClass = "CUP_O_TKI_Khet_Partug_04";
    weapons[] = {
        "TACU_SR_W_East_FNFAL_5061",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_East_FNFAL_5061",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        mag_8("tacgt_20Rnd_762x51_FAL_AP_Mag"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_8("tacgt_20Rnd_762x51_FAL_AP_Mag"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Eastern_Marksman_03.jpg);
};

class TACU_Seven_Rings_U_I_Eastern_AA_01: TACU_Seven_Rings_U_I_Eastern_Rifleman_01 {
    displayName = "Rifleman AA (Stinger)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    uniformClass = "CUP_O_TKI_Khet_Partug_04";
    backpack = "TACU_SR_B_AA_Kitbag_Tan";
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
        "TACU_SR_W_East_AK108",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "CUP_launch_FIM92Stinger",
        "TACU_SR_W_East_AK108",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        "CUP_Stinger_M",
        mag_8("tacgt_30Rnd_556x45_M995_AK"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        "CUP_Stinger_M",
        mag_8("tacgt_30Rnd_556x45_M995_AK"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Eastern_AA_01.jpg);
};
