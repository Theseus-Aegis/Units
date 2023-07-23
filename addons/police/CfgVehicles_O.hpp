// Units - Police (Counter-Terrorism)
class TACU_Police_U_O_CT_Rifleman: TACU_Main_U_OPFOR_Soldier_Base {
    author = "Kresky";
    displayName = "Rifleman (AK-15)";
    faction = "TACU_Police_O";
    editorSubcategory = "TACU_Police_EdSubCat_O_CT";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageRUS_F", "Head_Euro", "Head_Russian"};
    genericNames = "TACU_RussianNames";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "TACU_Police_Uniform_Combat_Green";
    items[] = {"NVGoggles_INDEP"};
    respawnItems[] = {"NVGoggles_INDEP"};
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_Police_Helmet_PASGT_Neck_PoliceGreen",
        "G_Balaclava_oli",
        "TACU_Police_Vest_HeavyPlateCarrier_PoliceGreen"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_Police_Helmet_PASGT_Neck_PoliceGreen",
        "G_Balaclava_oli",
        "TACU_Police_Vest_HeavyPlateCarrier_PoliceGreen"
    };
    weapons[] = {
        "TACU_Police_W_AK15",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Police_W_AK15",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_6("TACU_Magazine_30Rnd_762_AK"),
        mag_3("TACU_Magazine_17Rnd_Walther"),
        "HandGrenade",
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_6("TACU_Magazine_30Rnd_762_AK"),
        mag_3("TACU_Magazine_17Rnd_Walther"),
        "HandGrenade",
        "SmokeShell"
    };
    headgearList[] = {"TACU_Police_Helmet_PASGT_Neck_PoliceGreen", 1};
    CBA_facewearList[] = {"G_Balaclava_oli", 0.50, "G_Balaclava_blk", 0.50};
    EDITORPREVIEW(TACU_Police_U_O_CT_Rifleman);
};

class TACU_Police_U_O_CT_SMG_1: TACU_Police_U_O_CT_Rifleman {
    displayName = "SMG (Scorpion)";
    weapons[] = {
        "TACU_Police_W_Scorpion",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Police_W_Scorpion",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_6("TACU_Magazine_30Rnd_SMG"),
        mag_3("TACU_Magazine_17Rnd_Walther"),
        "HandGrenade",
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_6("TACU_Magazine_30Rnd_SMG"),
        mag_3("TACU_Magazine_17Rnd_Walther"),
        "HandGrenade",
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Police_U_O_CT_SMG_1);
};

class TACU_Police_U_O_CT_SMG_2: TACU_Police_U_O_CT_Rifleman {
    displayName = "SMG (CPW)";
    weapons[] = {
        "TACU_Police_W_CPW",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Police_W_CPW",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_6("TACU_Magazine_30Rnd_SMG"),
        mag_3("TACU_Magazine_17Rnd_Walther"),
        "HandGrenade",
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_6("TACU_Magazine_30Rnd_SMG"),
        mag_3("TACU_Magazine_17Rnd_Walther"),
        "HandGrenade",
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Police_U_O_CT_SMG_2);
};

class TACU_Police_U_O_CT_Breacher: TACU_Police_U_O_CT_Rifleman {
    displayName = "Breacher";
    weapons[] = {
        "sgun_HunterShotgun_01_sawedoff_F",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "sgun_HunterShotgun_01_sawedoff_F",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_8("2Rnd_12Gauge_Pellets"),
        mag_3("TACU_Magazine_17Rnd_Walther"),
        "HandGrenade",
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_8("2Rnd_12Gauge_Pellets"),
        mag_3("TACU_Magazine_17Rnd_Walther"),
        "HandGrenade",
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Police_U_O_CT_Breacher);
};

class TACU_Police_U_O_CT_Marksman: TACU_Police_U_O_CT_Rifleman {
    displayName = "Marksman";
    weapons[] = {
        "TACU_Police_W_QBU",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Police_W_QBU",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {mag_6("TACU_Magazine_20Rnd_QBU"), mag_3("TACU_Magazine_17Rnd_Walther")};
    respawnMagazines[] = {mag_6("TACU_Magazine_20Rnd_QBU"), mag_3("TACU_Magazine_17Rnd_Walther")};
    EDITORPREVIEW(TACU_Police_U_O_CT_Marksman);
};

// Units - Police (Enforcers)
class TACU_Police_U_O_Enforcer_SMG_1: TACU_Police_U_O_CT_Rifleman {
    editorSubcategory = "TACU_Police_EdSubCat_O_Enforcer";
    displayName = "SMG (Scorpion)";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "H_Beret_blk",
        "G_Aviator",
        "TACU_Police_Vest_PlateCarrier_PoliceGreen"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "H_Beret_blk",
        "G_Aviator",
        "TACU_Police_Vest_PlateCarrier_PoliceGreen"
    };
    weapons[] = {
        "SMG_02_F",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "SMG_02_F",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {mag_4("TACU_Magazine_30Rnd_SMG"), mag_2("TACU_Magazine_17Rnd_Walther")};
    respawnMagazines[] = {mag_4("TACU_Magazine_30Rnd_SMG"), mag_2("TACU_Magazine_17Rnd_Walther")};
    headgearList[] = {"H_Beret_blk", 1};
    CBA_facewearList[] = {"G_Aviator", 0.8, "", 0.2};
    EDITORPREVIEW(TACU_Police_U_O_Enforcer_SMG_1);
};

class TACU_Police_U_O_Enforcer_SMG_2: TACU_Police_U_O_Enforcer_SMG_1 {
    displayName = "SMG (CPW)";
    weapons[] = {
        "hgun_PDW2000_F",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "hgun_PDW2000_F",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {mag_4("TACU_Magazine_30Rnd_SMG"), mag_2("TACU_Magazine_17Rnd_Walther")};
    respawnMagazines[] = {mag_4("TACU_Magazine_30Rnd_SMG"), mag_2("TACU_Magazine_17Rnd_Walther")};
    EDITORPREVIEW(TACU_Police_U_O_Enforcer_SMG_2);
};

class TACU_Police_U_O_Enforcer_SMG_3: TACU_Police_U_O_Enforcer_SMG_1 {
    displayName = "Rifleman (AK-15K)";
    weapons[] = {
        "arifle_AK12U_F",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "arifle_AK12U_F",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {mag_4("TACU_Magazine_30Rnd_762_AK"), mag_2("TACU_Magazine_17Rnd_Walther")};
    respawnMagazines[] = {mag_4("TACU_Magazine_30Rnd_762_AK"), mag_2("TACU_Magazine_17Rnd_Walther")};
    EDITORPREVIEW(TACU_Police_U_O_Enforcer_SMG_3);
};

class TACU_Police_U_O_Enforcer_Breacher: TACU_Police_U_O_Enforcer_SMG_1 {
    displayName = "Breacher";
    weapons[] = {
        "sgun_HunterShotgun_01_sawedoff_F",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "sgun_HunterShotgun_01_sawedoff_F",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {mag_4("2Rnd_12Gauge_Pellets"), mag_2("TACU_Magazine_17Rnd_Walther")};
    respawnMagazines[] = {mag_4("2Rnd_12Gauge_Pellets"), mag_2("TACU_Magazine_17Rnd_Walther")};
    EDITORPREVIEW(TACU_Police_U_O_Enforcer_Breacher);
};
