// High end gear.
class TACU_Cartel_Greek_U_O_Enforcer_Rifleman_01: TACU_Main_U_OPFOR_Soldier_Base {
    author = "Mike";
    displayName = "Enforcer (G36A)";
    faction = "TACU_Cartel_Greek_O";
    editorSubcategory = "TACU_Cartel_Greek_EdSubCat_O_Enforcers";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageGRE_F", "Head_Greek_Cartel", "NoGlasses"};
    genericNames = "GreekMen";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "U_O_R_Gorka_01_black_F";
    items[] = {"NVGogglesB_blk_F"};
    respawnItems[] = {"NVGogglesB_blk_F"};
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_PlateCarrier1_blk",
        "H_PASGT_basic_black_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_PlateCarrier1_blk",
        "H_PASGT_basic_black_F"
    };
    weapons[] = {
        "TACU_Cartel_Greek_W_G36A_RIS",
        "TACU_Cartel_Greek_W_M9_Laser",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Cartel_Greek_W_G36A_RIS",
        "TACU_Cartel_Greek_W_M9_Laser",
        "Throw", "Put"
    };
    magazines[] = {
        mag_12("TACU_Magazine_30Rnd_556_G36"),
        mag_2("TACU_Magazine_15Rnd_M9"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_12("TACU_Magazine_30Rnd_556_G36"),
        mag_2("TACU_Magazine_15Rnd_M9"),
        mag_2("HandGrenade")
    };
    headgearList[] = {"H_PASGT_basic_black_F", 1};
    CBA_facewearList[] = {"G_Balaclava_blk", 1};
    EDITORPREVIEW(TACU_Cartel_Greek_U_O_Enforcer_Rifleman_01);
};
class TACU_Cartel_Greek_U_O_Enforcer_Rifleman_02: TACU_Cartel_Greek_U_O_Enforcer_Rifleman_01 {
    displayName = "Enforcer (G36A AG36)";
    weapons[] = {
        "TACU_Cartel_Greek_W_G36A_AG36",
        "TACU_Cartel_Greek_W_M9_Laser",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Cartel_Greek_W_G36A_AG36",
        "TACU_Cartel_Greek_W_M9_Laser",
        "Throw", "Put"
    };
    magazines[] = {
        mag_10("TACU_Magazine_30Rnd_556_G36"),
        mag_6("1Rnd_HE_Grenade_shell"),
        mag_2("TACU_Magazine_15Rnd_M9"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_10("TACU_Magazine_30Rnd_556_G36"),
        mag_6("1Rnd_HE_Grenade_shell"),
        mag_2("TACU_Magazine_15Rnd_M9"),
        mag_2("HandGrenade")
    };
    EDITORPREVIEW(TACU_Cartel_Greek_U_O_Enforcer_Rifleman_02);
};

class TACU_Cartel_Greek_U_O_Enforcer_Rifleman_03: TACU_Cartel_Greek_U_O_Enforcer_Rifleman_01 {
    displayName = "Enforcer (G36C)";
    weapons[] = {
        "TACU_Cartel_Greek_W_G36C",
        "TACU_Cartel_Greek_W_M9_Laser",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Cartel_Greek_W_G36C",
        "TACU_Cartel_Greek_W_M9_Laser",
        "Throw", "Put"
    };
    magazines[] = {
        mag_12("TACU_Magazine_30Rnd_556_G36"),
        mag_2("TACU_Magazine_15Rnd_M9"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_12("TACU_Magazine_30Rnd_556_G36"),
        mag_2("TACU_Magazine_15Rnd_M9"),
        mag_2("HandGrenade")
    };
    EDITORPREVIEW(TACU_Cartel_Greek_U_O_Enforcer_Rifleman_03);
};

class TACU_Cartel_Greek_U_O_Enforcer_Rifleman_04: TACU_Cartel_Greek_U_O_Enforcer_Rifleman_01 {
    displayName = "Enforcer (G36K / RPG7)";
    weapons[] = {
        "TACU_Cartel_Greek_W_G36K_KSK",
        "CUP_launch_RPG7V",
        "TACU_Cartel_Greek_W_M9_Laser",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Cartel_Greek_W_G36K_KSK",
        "CUP_launch_RPG7V",
        "TACU_Cartel_Greek_W_M9_Laser",
        "Throw", "Put"
    };
    magazines[] = {
        mag_11("TACU_Magazine_30Rnd_556_G36"),
        "CUP_OG7_M",
        mag_2("TACU_Magazine_15Rnd_M9"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_11("TACU_Magazine_30Rnd_556_G36"),
        "CUP_OG7_M",
        mag_2("TACU_Magazine_15Rnd_M9"),
        mag_2("HandGrenade")
    };
    EDITORPREVIEW(TACU_Cartel_Greek_U_O_Enforcer_Rifleman_04);
};

class TACU_Cartel_Greek_U_O_Enforcer_Rifleman_05: TACU_Cartel_Greek_U_O_Enforcer_Rifleman_01 {
    displayName = "Enforcer (G3A3)";
    weapons[] = {
        "TACU_Cartel_Greek_W_G3A3",
        "TACU_Cartel_Greek_W_M9_Laser",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Cartel_Greek_W_G3A3",
        "TACU_Cartel_Greek_W_M9_Laser",
        "Throw", "Put"
    };
    magazines[] = {
        mag_11("TACU_Magazine_20Rnd_M1A"),
        mag_2("TACU_Magazine_15Rnd_M9"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_11("TACU_Magazine_20Rnd_M1A"),
        mag_2("TACU_Magazine_15Rnd_M9"),
        mag_2("HandGrenade")
    };
    EDITORPREVIEW(TACU_Cartel_Greek_U_O_Enforcer_Rifleman_05);
};

class TACU_Cartel_Greek_U_O_Enforcer_Rifleman_06: TACU_Cartel_Greek_U_O_Enforcer_Rifleman_01 {
    displayName = "Enforcer (MG36)";
    weapons[] = {
        "TACU_Cartel_Greek_W_MG36",
        "TACU_Cartel_Greek_W_M9_Laser",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Cartel_Greek_W_MG36",
        "TACU_Cartel_Greek_W_M9_Laser",
        "Throw", "Put"
    };
    magazines[] = {
        mag_6("TACU_Magazine_100Rnd_556_G36_BetaC"),
        mag_2("TACU_Magazine_15Rnd_M9"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_6("TACU_Magazine_100Rnd_556_G36_BetaC"),
        mag_2("TACU_Magazine_15Rnd_M9"),
        mag_2("HandGrenade")
    };
    EDITORPREVIEW(TACU_Cartel_Greek_U_O_Enforcer_Rifleman_06);
};

class TACU_Cartel_Greek_U_O_Enforcer_Rifleman_07: TACU_Cartel_Greek_U_O_Enforcer_Rifleman_01 {
    displayName = "Enforcer (Saiga-12k)";
    weapons[] = {
        "TACU_Cartel_Greek_W_Saiga12k",
        "TACU_Cartel_Greek_W_M9_Laser",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Cartel_Greek_W_Saiga12k",
        "TACU_Cartel_Greek_W_M9_Laser",
        "Throw", "Put"
    };
    magazines[] = {
        mag_9("CUP_12Rnd_B_Saiga12_Buck_0"),
        mag_2("TACU_Magazine_15Rnd_M9"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_9("CUP_12Rnd_B_Saiga12_Buck_0"),
        mag_2("TACU_Magazine_15Rnd_M9"),
        mag_2("HandGrenade")
    };
    EDITORPREVIEW(TACU_Cartel_Greek_U_O_Enforcer_Rifleman_07);
};

class TACU_Cartel_Greek_U_O_Enforcer_Rifleman_08: TACU_Cartel_Greek_U_O_Enforcer_Rifleman_01 {
    displayName = "Enforcer (M32 / MP7)";
    weapons[] = {
        "CUP_glaunch_M32",
        "TACU_Cartel_Greek_W_hgun_MP7",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "CUP_glaunch_M32",
        "TACU_Cartel_Greek_W_hgun_MP7",
        "Throw", "Put"
    };
    magazines[] = {
        mag_4("CUP_6Rnd_HE_M203"),
        mag_5("TACU_Magazine_40Rnd_MP7"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_4("CUP_6Rnd_HE_M203"),
        mag_5("TACU_Magazine_40Rnd_MP7"),
        mag_2("HandGrenade")
    };
    EDITORPREVIEW(TACU_Cartel_Greek_U_O_Enforcer_Rifleman_08);
};
