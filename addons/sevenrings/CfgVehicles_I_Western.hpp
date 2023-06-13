class TACU_SevenRings_U_I_Western_Rifleman_01: TACU_Main_U_INDEP_Soldier_Base {
    author = "Mike";
    displayName = "Rifleman (CZ BREN)";
    faction = "TACU_SevenRings_I_Western";
    editorSubcategory = "TACU_SevenRings_EdSubCat_Western";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageRUS_F", "Head_Euro", "Head_Enoch"};
    genericNames = "EnochMen";
    icon = "iconMan";
    role = "Rifleman";
    sensitivityEar = 0.15;
    uniformClass = "U_lxWS_SFIA_Tanker_O";
    backpack = "";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_assaulter_rgr",
        "G_Balaclava_blk",
        "H_HelmetSpecB"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_assaulter_rgr",
        "G_Balaclava_blk",
        "H_HelmetSpecB"
    };
    Items[] = {};
    respawnItems[] = {};
    weapons[] = {
        "TACU_SevenRings_W_West_BREN2_14",
        MACRO_WEST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_West_BREN2_14",
        MACRO_WEST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_9("tacgt_AI_30Rnd_556x45_STANAG"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_9("tacgt_AI_30Rnd_556x45_STANAG"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    headgearList[] = {
        "H_Watchcap_blk", 0.25,
        "H_Cap_blk_CMMG", 0.25,
        "H_HelmetB_black", 0.50,
        "H_HelmetB", 0.50,
        "H_HelmetSpecB", 0.50,
        "H_HelmetSpecB_blk", 0.50,
        "H_HelmetB_light", 0.50,
        "H_HelmetB_light_black", 0.50,
        "H_Booniehat_khk", 0.25
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Western_Rifleman_01.jpg);
};

class TACU_SevenRings_U_I_Western_Rifleman_02: TACU_SevenRings_U_I_Western_Rifleman_01 {
    displayName = "Rifleman (SA58)";
    uniformClass = "U_lxWS_SFIA_Tanker_O";
    weapons[] = {
        "TACU_SevenRings_W_West_SA58_Grip",
        MACRO_WEST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_West_SA58_Grip",
        MACRO_WEST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("tacgt_AI_20Rnd_762x51_FAL"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_AI_20Rnd_762x51_FAL"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Western_Rifleman_02.jpg);
};

class TACU_SevenRings_U_I_Western_Rifleman_03: TACU_SevenRings_U_I_Western_Rifleman_01 {
    displayName = "Rifleman (G36K)";
    uniformClass = "U_lxWS_SFIA_Tanker_O";
    weapons[] = {
        "TACU_SevenRings_W_West_G36K_Grip",
        MACRO_WEST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_West_G36K_Grip",
        MACRO_WEST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("tacgt_AI_30Rnd_556x45_G36"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_AI_30Rnd_556x45_G36"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Western_Rifleman_03.jpg);
};

class TACU_SevenRings_U_I_Western_Grenadier_01: TACU_SevenRings_U_I_Western_Rifleman_01 {
    displayName = "Grenadier (CZ BREN)";
    role = "Grenadier";
    uniformClass = "U_lxWS_SFIA_Tanker_O";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_grenadier_belt_rgr",
        "G_Balaclava_blk"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_grenadier_belt_rgr",
        "G_Balaclava_blk"
    };
    weapons[] = {
        "TACU_SevenRings_W_West_BREN2_GL_14",
        MACRO_WEST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_West_BREN2_GL_14",
        MACRO_WEST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("tacgt_AI_30Rnd_556x45_STANAG"),
        mag_4("1Rnd_HE_Grenade_shell"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_AI_30Rnd_556x45_STANAG"),
        mag_4("1Rnd_HE_Grenade_shell"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Western_Grenadier_01.jpg);
};

class TACU_SevenRings_U_I_Western_Grenadier_02: TACU_SevenRings_U_I_Western_Grenadier_01 {
    displayName = "Grenadier (SA58)";
    uniformClass = "U_lxWS_SFIA_Tanker_O";
    weapons[] = {
        "TACU_SevenRings_W_West_SA58_GL",
        MACRO_WEST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_West_SA58_GL",
        MACRO_WEST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("tacgt_AI_20Rnd_762x51_FAL"),
        mag_4("1Rnd_HE_Grenade_shell"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_AI_20Rnd_762x51_FAL"),
        mag_4("1Rnd_HE_Grenade_shell"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Western_Grenadier_02.jpg);
};

class TACU_SevenRings_U_I_Western_Grenadier_03: TACU_SevenRings_U_I_Western_Grenadier_01 {
    displayName = "Grenadier (G36K)";
    uniformClass = "U_lxWS_SFIA_Tanker_O";
    weapons[] = {
        "TACU_SevenRings_W_West_G36K_GL",
        MACRO_WEST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_West_G36K_GL",
        MACRO_WEST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("tacgt_AI_30Rnd_556x45_G36"),
        mag_4("1Rnd_HE_Grenade_shell"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_AI_30Rnd_556x45_G36"),
        mag_4("1Rnd_HE_Grenade_shell"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Western_Grenadier_03.jpg);
};

class TACU_SevenRings_U_I_Western_Rifleman_AT_01: TACU_SevenRings_U_I_Western_Rifleman_01 {
    displayName = "Rifleman AT (MAAWS)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    uniformClass = "U_lxWS_SFIA_Tanker_O";
    backpack = "TACU_SevenRings_B_AT_Assault_Maaws";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_hgunner_rgr",
        "G_Balaclava_blk"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_hgunner_rgr",
        "G_Balaclava_blk"
    };
    weapons[] = {
        "TACU_SevenRings_W_West_AK109_Zenitco",
        "tacs_MRAWS_Black_Rail_F",
        MACRO_WEST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_West_AK109_Zenitco",
        "tacs_MRAWS_Black_Rail_F",
        MACRO_WEST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("tacgt_AI_30Rnd_762x39_AK"),
        "MRAWS_HEAT_F",
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_AI_30Rnd_762x39_AK"),
        "MRAWS_HEAT_F",
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Western_Rifleman_AT_01.jpg);
};

class TACU_SevenRings_U_I_Western_Rifleman_AT_02: TACU_SevenRings_U_I_Western_Rifleman_AT_01 {
    displayName = "Rifleman AT (RPG-32)";
    uniformClass = "U_lxWS_SFIA_Tanker_O";
    backpack = "TACU_SevenRings_B_AT_Assault_RPG32";
    weapons[] = {
        "TACU_SevenRings_W_West_MK18_Black",
        "launch_RPG32_green_F",
        MACRO_WEST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_West_MK18_Black",
        "launch_RPG32_green_F",
        MACRO_WEST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("tacgt_AI_30Rnd_556x45_STANAG"),
        "RPG32_F",
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_AI_30Rnd_556x45_STANAG"),
        "RPG32_F",
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Western_Rifleman_AT_02.jpg);
};

class TACU_SevenRings_U_I_Western_Rifleman_AT_03: TACU_SevenRings_U_I_Western_Rifleman_AT_01 {
    displayName = "Rifleman AT (NLAW)";
    uniformClass = "U_lxWS_SFIA_Tanker_O";
    backpack = "";
    weapons[] = {
        "TACU_SevenRings_W_West_ACR556_AFG",
        "launch_NLAW_F",
        MACRO_WEST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_West_ACR556_AFG",
        "launch_NLAW_F",
        MACRO_WEST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("tacgt_AI_30Rnd_556x45_STANAG"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_AI_30Rnd_556x45_STANAG"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Western_Rifleman_AT_03.jpg);
};

class TACU_SevenRings_U_I_Western_Autorifleman_01: TACU_SevenRings_U_I_Western_Rifleman_01 {
    displayName = "Autorifleman (Stoner 99)";
    icon = "iconManMG";
    role = "MachineGunner";
    uniformClass = "tacs_Uniform_Polo_CP_BS_TP_BB_NoLogo";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_hgunner_belt_rgr",
        "G_Balaclava_blk"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_hgunner_belt_rgr",
        "G_Balaclava_blk"
    };
    weapons[] = {
        "TACU_SevenRings_W_West_MK200",
        MACRO_WEST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_West_MK200",
        MACRO_WEST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_4("tacgt_AI_200Rnd_65x39_Belt"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_4("tacgt_AI_200Rnd_65x39_Belt"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Western_Autorifleman_01.jpg);
};

class TACU_SevenRings_U_I_Western_Autorifleman_02: TACU_SevenRings_U_I_Western_Autorifleman_01 {
    displayName = "Autorifleman (Minimi SPW)";
    uniformClass = "tacs_Uniform_Polo_TP_BS_LP_BB_NoLogo";
    weapons[] = {
        "TACU_SevenRings_W_West_Minimi_SPW",
        MACRO_WEST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_West_Minimi_SPW",
        MACRO_WEST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_4("tacgt_AI_200Rnd_556x45_Box"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_4("tacgt_AI_200Rnd_556x45_Box"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Western_Autorifleman_02.jpg);
};

class TACU_SevenRings_U_I_Western_Autorifleman_03: TACU_SevenRings_U_I_Western_Autorifleman_01 {
    displayName = "Autorifleman (MX LSW)";
    uniformClass = "U_O_R_Gorka_01_black_F";
    weapons[] = {
        "TACU_SevenRings_W_West_MXLSW_Black",
        MACRO_WEST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_West_MXLSW_Black",
        MACRO_WEST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_5("tacgt_AI_100Rnd_65x39_MX_Black"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_5("tacgt_AI_100Rnd_65x39_MX_Black"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Western_Autorifleman_03.jpg);
};

class TACU_SevenRings_U_I_Western_Medic_01: TACU_SevenRings_U_I_Western_Rifleman_01 {
    displayName = "Medic (G3A3)";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    uniformClass = "U_C_E_LooterJacket_01_F";
    backpack = "G_FieldPack_Medic";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_medic_belt_rgr",
        "G_Balaclava_blk"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_medic_belt_rgr",
        "G_Balaclava_blk"
    };
    weapons[] = {
        "TACU_SevenRings_W_West_G3A3_RIS",
        MACRO_WEST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_West_G3A3_RIS",
        MACRO_WEST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("tacgt_AI_20Rnd_762x51"),
        mag_2("SmokeShell"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_AI_20Rnd_762x51"),
        mag_2("SmokeShell"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Western_Medic_01.jpg);
};

class TACU_SevenRings_U_I_Western_Medic_02: TACU_SevenRings_U_I_Western_Medic_01 {
    displayName = "Medic (SIG 551)";
    uniformClass = "U_BG_Guerilla2_1";
    weapons[] = {
        "TACU_SevenRings_W_West_SG551_TAC_SB",
        MACRO_WEST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_West_SG551_TAC_SB",
        MACRO_WEST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("tacgt_AI_30Rnd_556x45_SIG"),
        mag_2("SmokeShell"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_AI_30Rnd_556x45_SIG"),
        mag_2("SmokeShell"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Western_Medic_02.jpg);
};

class TACU_SevenRings_U_I_Western_Medic_03: TACU_SevenRings_U_I_Western_Medic_01 {
    displayName = "Medic (AUG A2)";
    uniformClass = "tacs_Uniform_Combat_LS_GS_BP_BB";
    weapons[] = {
        "TACU_SevenRings_W_West_AUGA2",
        MACRO_WEST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_West_AUGA2",
        MACRO_WEST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("tacgt_AI_30Rnd_556x45_AUG"),
        mag_2("SmokeShell"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_AI_30Rnd_556x45_AUG"),
        mag_2("SmokeShell"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Western_Medic_03.jpg);
};

class TACU_SevenRings_U_I_Western_Engineer_01: TACU_SevenRings_U_I_Western_Rifleman_01 {
    displayName = "Engineer (AK-15)";
    icon = "iconManEngineer";
    role = "Sapper";
    engineer = 1;
    canDeactivateMines = 1;
    uniformClass = "U_BG_Guerilla2_2";
    backpack = "TACU_SevenRings_B_Engineer_Kitbag_Black";
    Items[] = {"ACE_M26_Clacker"};
    respawnItems[] = {"ACE_M26_Clacker"};
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_assaulter_belt_rgr",
        "G_Balaclava_blk"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_assaulter_belt_rgr",
        "G_Balaclava_blk"
    };
    weapons[] = {
        "TACU_SevenRings_W_West_AK15",
        MACRO_WEST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_West_AK15",
        MACRO_WEST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("tacgt_AI_30Rnd_762x39_AK"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_AI_30Rnd_762x39_AK"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Western_Engineer_01.jpg);
};

class TACU_SevenRings_U_I_Western_Engineer_02: TACU_SevenRings_U_I_Western_Engineer_01 {
    displayName = "Engineer (M1014)";
    uniformClass = "U_BG_Guerilla2_3";
    weapons[] = {
        "TACU_SevenRings_W_West_M1014_Grip",
        MACRO_WEST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_West_M1014_Grip",
        MACRO_WEST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_10("tacgt_8Rnd_P_000"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_10("tacgt_8Rnd_P_000"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Western_Engineer_02.jpg);
};

class TACU_SevenRings_U_I_Western_Engineer_03: TACU_SevenRings_U_I_Western_Engineer_01 {
    displayName = "Engineer (KH-2002)";
    uniformClass = "U_BG_Guerilla3_1";
    weapons[] = {
        "TACU_SevenRings_W_West_Katiba_LB",
        MACRO_WEST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_West_Katiba_LB",
        MACRO_WEST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("tacgt_AI_30Rnd_65x39_Katiba"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_AI_30Rnd_65x39_Katiba"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Western_Engineer_03.jpg);
};

class TACU_SevenRings_U_I_Western_Teamleader_01: TACU_SevenRings_U_I_Western_Rifleman_01 {
    displayName = "Team Leader (SCAR-L)";
    icon = "iconManLeader";
    uniformClass = "tacs_Uniform_Garment_LS_OS_EP_TB";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_teamleader_belt_RGR",
        "G_Balaclava_blk"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_teamleader_belt_RGR",
        "G_Balaclava_blk"
    };
    weapons[] = {
        "TACU_SevenRings_W_West_SCAR_L_AFG",
        MACRO_WEST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_West_SCAR_L_AFG",
        MACRO_WEST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("tacgt_AI_30Rnd_556x45_STANAG"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_AI_30Rnd_556x45_STANAG"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Western_Teamleader_01.jpg);
};

class TACU_SevenRings_U_I_Western_Teamleader_02: TACU_SevenRings_U_I_Western_Teamleader_01 {
    displayName = "Team Leader (SIG 553)";
    uniformClass = "tacs_Uniform_Garment_LS_ES_EP_TB";
    weapons[] = {
        "TACU_SevenRings_W_West_SG553_TAC_SB",
        MACRO_WEST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_West_SG553_TAC_SB",
        MACRO_WEST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("tacgt_AI_30Rnd_762x39_AK"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_AI_30Rnd_762x39_AK"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Western_Teamleader_02.jpg);
};

class TACU_SevenRings_U_I_Western_Teamleader_03: TACU_SevenRings_U_I_Western_Teamleader_01 {
    displayName = "Team Leader (AUG A3)";
    uniformClass = "tacs_Uniform_Garment_LS_TS_BP_BB";
    weapons[] = {
        "TACU_SevenRings_W_West_AUG_A3",
        MACRO_WEST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_West_AUG_A3",
        MACRO_WEST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("tacgt_AI_30Rnd_556x45_AUG"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_AI_30Rnd_556x45_AUG"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Western_Teamleader_03.jpg);
};

class TACU_SevenRings_U_I_Western_CQBSpecialist_01: TACU_SevenRings_U_I_Western_Rifleman_01 {
    displayName = "CQB Specialist (SAIGA-12)";
    uniformClass = "tacs_Uniform_Combat_RS_CLFS_GP_BB";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_light_rgr",
        "G_Balaclava_blk"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_light_rgr",
        "G_Balaclava_blk"
    };
    weapons[] = {
        "TACU_SevenRings_W_West_SAIGA12K",
        MACRO_WEST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_West_SAIGA12K",
        MACRO_WEST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("CUP_12Rnd_B_Saiga12_Buck_00"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("CUP_12Rnd_B_Saiga12_Buck_00"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Western_CQBSpecialist_01.jpg);
};

class TACU_SevenRings_U_I_Western_CQBSpecialist_02: TACU_SevenRings_U_I_Western_CQBSpecialist_01 {
    displayName = "CQB Specialist (P90)";
    uniformClass = "tacs_Uniform_Combat_RS_CPS_BP_BB";
    weapons[] = {
        "SMG_03C_black",
        MACRO_WEST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "SMG_03C_black",
        MACRO_WEST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("tacgt_AI_50Rnd_57x28"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_AI_50Rnd_57x28"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Western_CQBSpecialist_02.jpg);
};

class TACU_SevenRings_U_I_Western_CQBSpecialist_03: TACU_SevenRings_U_I_Western_CQBSpecialist_01 {
    displayName = "CQB Specialist (Vector)";
    uniformClass = "tacs_Uniform_Combat_RS_CLBS_GP_BB";
    weapons[] = {
        "TACU_SevenRings_W_West_Vector",
        MACRO_WEST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_West_Vector",
        MACRO_WEST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("tacgt_AI_25Rnd_45ACP_Vector"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_AI_25Rnd_45ACP_Vector"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Western_CQBSpecialist_03.jpg);
};

class TACU_SevenRings_U_I_Western_Marksman_01: TACU_SevenRings_U_I_Western_Rifleman_01 {
    displayName = "Marksman (SIG 556)";
    role = "Marksman";
    uniformClass = "U_I_C_Soldier_Bandit_3_F";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_marksman_rgr",
        "G_Balaclava_blk"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_marksman_rgr",
        "G_Balaclava_blk"
    };
    weapons[] = {
        "TACU_SevenRings_W_West_SIG556_DMR",
        MACRO_WEST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_West_SIG556_DMR",
        MACRO_WEST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("tacgt_AI_20Rnd_762x51"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_AI_20Rnd_762x51"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Western_Marksman_01.jpg);
};

class TACU_SevenRings_U_I_Western_Marksman_02: TACU_SevenRings_U_I_Western_Marksman_01 {
    displayName = "Marksman (HK417)";
    uniformClass = "U_lxWS_SFIA_Tanker_O";
    weapons[] = {
        "TACU_SevenRings_W_West_HK417_DMR",
        MACRO_WEST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_West_HK417_DMR",
        MACRO_WEST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("tacgt_AI_20Rnd_762x51"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_AI_20Rnd_762x51"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Western_Marksman_02.jpg);
};

class TACU_SevenRings_U_I_Western_Marksman_03: TACU_SevenRings_U_I_Western_Marksman_01 {
    displayName = "Marksman (QBU-88)";
    uniformClass = "tacs_Uniform_Garment_RS_ES_BP_BB";
    weapons[] = {
        "TACU_SevenRings_W_West_QBU_88_DMR",
        MACRO_WEST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "TACU_SevenRings_W_West_QBU_88_DMR",
        MACRO_WEST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("tacgt_AI_20Rnd_65x39"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_AI_20Rnd_65x39"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Western_Marksman_03.jpg);
};

class TACU_SevenRings_U_I_Western_AA_01: TACU_SevenRings_U_I_Western_Rifleman_01 {
    displayName = "AA Specialist (Titan)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    uniformClass = "tacs_Uniform_Combat_LS_BS_TP_BB";
    backpack = "TACU_SevenRings_B_AA_Kitbag_Black";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_hgunner_rgr",
        "G_Balaclava_blk"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_hgunner_rgr",
        "G_Balaclava_blk"
    };
    weapons[] = {
        "launch_B_Titan_olive_F",
        "TACU_SevenRings_W_West_SCAR_L_AFG",
        MACRO_WEST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "launch_B_Titan_olive_F",
        "TACU_SevenRings_W_West_SCAR_L_AFG",
        MACRO_WEST_DEFAULT_WEAPON
    };
    magazines[] = {
        "Titan_AA",
        mag_8("tacgt_AI_30Rnd_556x45_STANAG"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        "Titan_AA",
        mag_8("tacgt_AI_30Rnd_556x45_STANAG"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Western_AA_01.jpg);
};

class TACU_SevenRings_U_I_Western_Pilot_01: TACU_SevenRings_U_I_Western_Rifleman_01 {
    displayName = "Pilot (P90)";
    role = "Crewman";
    uniformClass = "U_B_HeliPilotCoveralls";
    backpack = "B_Parachute";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_HarnessO_gry",
        "H_PilotHelmetHeli_O"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_HarnessO_gry",
        "H_PilotHelmetHeli_O"
    };
    weapons[] = {
        "SMG_03C_black",
        MACRO_WEST_DEFAULT_WEAPON
    };
    respawnWeapons[] = {
        "SMG_03C_black",
        MACRO_WEST_DEFAULT_WEAPON
    };
    magazines[] = {
        mag_8("tacgt_AI_50Rnd_57x28"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    respawnMagazines[] = {
        mag_8("tacgt_AI_50Rnd_57x28"),
        MACRO_WEST_DEFAULT_MAGAZINE
    };
    headgearList[] = {
        "H_PilotHelmetHeli_O", 1
    };
    editorPreview = QPATHTOF(ui\SevenRings_U_I_Western_Pilot_01.jpg);
};
