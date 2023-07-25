// Units - Police (Counter Terrorism)
class TACU_Police_U_B_CT_Rifleman: TACU_Main_U_BLUFOR_Soldier_Base {
    author = "Kresky";
    displayName = "Rifleman";
    faction = "TACU_Police_B";
    editorSubcategory = "TACU_Police_EdSubCat_B_CT";
    scope = 2;
    scopeCurator = 2;
    uniformClass = "TACU_Police_Uniform_Combat_Blue";
    items[] = {"NVGoggles_OPFOR"};
    respawnItems[] = {"NVGoggles_OPFOR"};
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_Police_Helmet_PASGT_Neck_PoliceBlack",
        "G_Bandanna_shades",
        "TACU_Police_Vest_HeavyPlateCarrier_PoliceBlue"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_Police_Helmet_PASGT_Neck_PoliceBlack",
        "G_Bandanna_shades",
        "TACU_Police_Vest_HeavyPlateCarrier_PoliceBlue"
    };
    weapons[] = {
        "TACU_Police_W_HK416_CQB",
        "hgun_P07_blk_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Police_W_HK416_CQB",
        "hgun_P07_blk_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_10("TACU_Magazine_30Rnd_STANAG"),
        mag_3("TACU_Magazine_17Rnd_Walther"),
        "HandGrenade",
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_10("TACU_Magazine_30Rnd_STANAG"),
        mag_3("TACU_Magazine_17Rnd_Walther"),
        "HandGrenade",
        "SmokeShell"
    };
    headgearList[] = {"TACU_Police_Helmet_PASGT_Neck_PoliceBlack", 1};
    CBA_facewearList[] = {"G_Bandanna_shades", 0.8, "G_Bandanna_sport", 0.2};
    EDITORPREVIEW(TACU_Police_U_B_CT_Rifleman);
};

class TACU_Police_U_B_CT_Breacher: TACU_Police_U_B_CT_Rifleman {
    displayName = "Breacher";
    weapons[] = {
        "SMG_03C_black",
        "hgun_P07_blk_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "SMG_03C_black",
        "hgun_P07_blk_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_12("TACU_Magazine_50Rnd_P90"),
        mag_3("TACU_Magazine_17Rnd_Walther"),
        "HandGrenade",
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_12("TACU_Magazine_50Rnd_P90"),
        mag_3("TACU_Magazine_17Rnd_Walther"),
        "HandGrenade",
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Police_U_B_CT_Breacher);
};

class TACU_Police_U_B_CT_Marksman: TACU_Police_U_B_CT_Rifleman {
    displayName = "Marksman";
    weapons[] = {
        "TACU_Police_W_HK417_DMR",
        "hgun_P07_blk_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Police_W_HK417_DMR",
        "hgun_P07_blk_F",
        "Throw", "Put"
    };
    magazines[] = {mag_10("TACU_Magazine_20Rnd_M1A"), mag_3("TACU_Magazine_17Rnd_Walther")};
    respawnMagazines[] = {mag_10("TACU_Magazine_20Rnd_M1A"), mag_3("TACU_Magazine_17Rnd_Walther")};
    EDITORPREVIEW(TACU_Police_U_B_CT_Marksman);
};

// Units - Police (Enforcers)
class TACU_Police_U_B_Enforcer_Rifleman: TACU_Main_U_BLUFOR_Soldier_Base {
    author = "Kresky";
    displayName = "Rifleman";
    faction = "TACU_Police_B";
    editorSubcategory = "TACU_Police_EdSubCat_B_Enforcer";
    scope = 2;
    scopeCurator = 2;
    uniformClass = "TACU_Police_Uniform_Combat_Blue";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "H_Cap_police",
        "G_Aviator",
        "TACU_Police_Vest_PlateCarrier_PoliceBlue"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "H_Cap_police",
        "G_Aviator",
        "TACU_Police_Vest_PlateCarrier_PoliceBlue"
    };
    weapons[] = {
        "arifle_SPAR_01_blk_F",
        "hgun_P07_blk_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "arifle_SPAR_01_blk_F",
        "hgun_P07_blk_F",
        "Throw", "Put"
    };
    magazines[] = {mag_8("TACU_Magazine_30Rnd_STANAG"), mag_3("TACU_Magazine_17Rnd_Walther")};
    respawnMagazines[] = {mag_8("TACU_Magazine_30Rnd_STANAG"), mag_3("TACU_Magazine_17Rnd_Walther")};
    headgearList[] = {"H_Cap_police", 0.60, "H_MilCap_blue", 0.50};
    CBA_facewearList[] = {"", 0.5, "G_Aviator", 0.5};
    EDITORPREVIEW(TACU_Police_U_B_Enforcer_Rifleman);
};

class TACU_Police_U_B_Enforcer_SMG_1: TACU_Police_U_B_Enforcer_Rifleman {
    displayName = "SMG (MP5)";
    weapons[] = {
        "SMG_05_F",
        "hgun_P07_blk_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "SMG_05_F",
        "hgun_P07_blk_F",
        "Throw", "Put"
    };
    magazines[] = {mag_6("TACU_Magazine_30Rnd_SMG"), mag_3("TACU_Magazine_17Rnd_Walther")};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_SMG"), mag_3("TACU_Magazine_17Rnd_Walther")};
    EDITORPREVIEW(TACU_Police_U_B_Enforcer_SMG_1);
};

class TACU_Police_U_B_Enforcer_SMG_2: TACU_Police_U_B_Enforcer_Rifleman {
    displayName = "SMG (Vector)";
    weapons[] = {
        "SMG_01_F",
        "hgun_P07_blk_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "SMG_01_F",
        "hgun_P07_blk_F",
        "Throw", "Put"
    };
    magazines[] = {mag_12("TACU_Magazine_25Rnd_Vector"), mag_3("TACU_Magazine_17Rnd_Walther")};
    respawnMagazines[] = {mag_12("TACU_Magazine_25Rnd_Vector"), mag_3("TACU_Magazine_17Rnd_Walther")};
    EDITORPREVIEW(TACU_Police_U_B_Enforcer_SMG_2);
};

class TACU_Police_U_B_Enforcer_Breacher: TACU_Police_U_B_Enforcer_Rifleman {
    displayName = "Breacher";
    weapons[] = {
        "SMG_03C_black",
        "hgun_P07_blk_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "SMG_03C_black",
        "hgun_P07_blk_F",
        "Throw", "Put"
    };
    magazines[] = {mag_10("TACU_Magazine_50Rnd_P90"), mag_3("TACU_Magazine_17Rnd_Walther")};
    respawnMagazines[] = {mag_10("TACU_Magazine_50Rnd_P90"), mag_3("TACU_Magazine_17Rnd_Walther")};
    EDITORPREVIEW(TACU_Police_U_B_Enforcer_Breacher);
};
