// Units - Police (Counter-Terrorism)
class TACU_Police_U_I_CT_Rifleman: TACU_Main_U_INDEP_Soldier_Base {
    author = "Kresky";
    displayName = "Rifleman";
    faction = "TACU_Police_I";
    editorSubcategory = "TACU_Police_EdSubCat_I_CT";
    scope = 2;
    scopeCurator = 2;
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "TACU_Police_Uniform_Combat_Black";
    items[] = {"NVGoggles_OPFOR"};
    respawnItems[] = {"NVGoggles_OPFOR"};
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_Police_Helmet_PASGT_Neck_PoliceBlack",
        "G_Balaclava_blk",
        "TACU_Police_Vest_HeavyPlateCarrier_PoliceBlack"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_Police_Helmet_PASGT_Neck_PoliceBlack",
        "G_Balaclava_blk",
        "TACU_Police_Vest_HeavyPlateCarrier_PoliceBlack"
    };
    weapons[] = {
        "TACU_Police_W_Tar21",
        "hgun_ACPC2_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Police_W_Tar21",
        "hgun_ACPC2_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_10("TACU_Magazine_30Rnd_STANAG"),
        mag_3("TACU_Magazine_8Rnd_1911"),
        "MiniGrenade",
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_10("TACU_Magazine_30Rnd_STANAG"),
        mag_3("TACU_Magazine_8Rnd_1911"),
        "MiniGrenade",
        "SmokeShell"
    };
    headgearList[] = {"TACU_Police_Helmet_PASGT_Neck_PoliceBlack", 1};
    CBA_facewearList[] = {"G_Balaclava_blk", 0.70, "G_Balaclava_combat", 0.30};
    EDITORPREVIEW(TACU_Police_U_I_CT_Rifleman);
};

class TACU_Police_U_I_CT_Breacher: TACU_Police_U_I_CT_Rifleman {
    displayName = "Breacher";
    weapons[] = {
        "TACU_Police_W_AA40",
        "hgun_ACPC2_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Police_W_AA40",
        "hgun_ACPC2_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_6("8Rnd_12Gauge_AA40_Pellets_lxWS"),
        mag_3("TACU_Magazine_8Rnd_1911"),
        mag_2("ACE_M84"),
        "MiniGrenade",
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_6("8Rnd_12Gauge_AA40_Pellets_lxWS"),
        mag_3("TACU_Magazine_8Rnd_1911"),
        mag_2("ACE_M84"),
        "MiniGrenade",
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Police_U_I_CT_Breacher);
};

class TACU_Police_U_I_CT_Marksman: TACU_Police_U_I_CT_Rifleman {
    displayName = "Marksman";
    weapons[] = {
        "TACU_Police_W_EBR",
        "hgun_ACPC2_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Police_W_EBR",
        "hgun_ACPC2_F",
        "Throw", "Put"
    };
    magazines[] = {mag_10("TACU_Magazine_20Rnd_M1A"), mag_3("TACU_Magazine_8Rnd_1911")};
    respawnMagazines[] = {mag_10("TACU_Magazine_20Rnd_M1A"), mag_3("TACU_Magazine_8Rnd_1911")};
    EDITORPREVIEW(TACU_Police_U_I_CT_Marksman);
};

class TACU_Police_U_I_CT_RiotControl: TACU_Police_U_I_CT_Rifleman {
    scope = 1;
    scopeCurator = 1;
    weapons[] = {""};
    respawnWeapons[] = {""};
    magazines[] = {""};
    respawnMagazines[] = {""};
    EDITORPREVIEW(TACU_Police_U_I_CT_RiotControl);
};

// Units - Police (Enforcers)
class TACU_Police_U_I_Enforcer_Rifleman: TACU_Main_U_INDEP_Soldier_Base {
    author = "Kresky";
    displayName = "Rifleman";
    faction = "TACU_Police_I";
    editorSubcategory = "TACU_Police_EdSubCat_I_Enforcer";
    scope = 2;
    scopeCurator = 2;
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "TACU_Police_Uniform_Combat_Black";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "H_Cap_blk",
        "G_Aviator",
        "TACU_Police_Vest_PlateCarrier_PoliceBlack"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "H_Cap_blk",
        "G_Aviator",
        "TACU_Police_Vest_PlateCarrier_PoliceBlack"
    };
    weapons[] = {
        "arifle_TRG21_F",
        "hgun_ACPC2_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "arifle_TRG21_F",
        "hgun_ACPC2_F",
        "Throw", "Put"
    };
    magazines[] = {mag_12("TACU_Magazine_30Rnd_STANAG"), mag_3("TACU_Magazine_8Rnd_1911")};
    respawnMagazines[] = {mag_12("TACU_Magazine_30Rnd_STANAG"), mag_3("TACU_Magazine_8Rnd_1911")};
    headgearList[] = {"H_Cap_blk", 0.60, "H_HelmetB_black", 0.40};
    CBA_facewearList[] = {"G_Aviator", 1};
    EDITORPREVIEW(TACU_Police_U_I_Enforcer_Rifleman);
};

class TACU_Police_U_I_Enforcer_SMG_1: TACU_Police_U_I_Enforcer_Rifleman {
    displayName = "SMG (CPW)";
    weapons[] = {
        "hgun_PDW2000_F",
        "hgun_ACPC2_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "hgun_PDW2000_F",
        "hgun_ACPC2_F",
        "Throw", "Put"
    };
    magazines[] = {mag_12("TACU_Magazine_30Rnd_SMG"), mag_3("TACU_Magazine_8Rnd_1911")};
    respawnMagazines[] = {mag_12("TACU_Magazine_30Rnd_SMG"), mag_3("TACU_Magazine_8Rnd_1911")};
    EDITORPREVIEW(TACU_Police_U_I_Enforcer_SMG_1);
};

class TACU_Police_U_I_Enforcer_SMG_2: TACU_Police_U_I_Enforcer_Rifleman {
    displayName = "SMG (P90)";
    weapons[] = {
        "SMG_03C_black",
        "hgun_ACPC2_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "SMG_03C_black",
        "hgun_ACPC2_F",
        "Throw", "Put"
    };
    magazines[] = {mag_12("TACU_Magazine_50Rnd_P90"), mag_3("TACU_Magazine_8Rnd_1911")};
    respawnMagazines[] = {mag_12("TACU_Magazine_50Rnd_P90"), mag_3("TACU_Magazine_8Rnd_1911")};
    EDITORPREVIEW(TACU_Police_U_I_Enforcer_SMG_2);
};

class TACU_Police_U_I_Enforcer_Breacher: TACU_Police_U_I_Enforcer_Rifleman {
    displayName = "Breacher";
    weapons[] = {
        "sgun_aa40_lxWS",
        "hgun_ACPC2_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "sgun_aa40_lxWS",
        "hgun_ACPC2_F",
        "Throw", "Put"
    };
    magazines[] = {mag_8("8Rnd_12Gauge_AA40_Pellets_lxWS"), mag_3("TACU_Magazine_8Rnd_1911")};
    respawnMagazines[] = {mag_8("8Rnd_12Gauge_AA40_Pellets_lxWS"), mag_3("TACU_Magazine_8Rnd_1911")};
    EDITORPREVIEW(TACU_Police_U_I_Enforcer_Breacher);
};
