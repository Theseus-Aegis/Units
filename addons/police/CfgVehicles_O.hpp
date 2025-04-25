// Units - Police (Counter-Terrorism)
class TACU_Police_U_O_CT_Rifleman: TACU_Main_U_OPFOR_Soldier_Base {
    author = "Emythiel";
    displayName = "Rifleman (AS VAL)";
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
        "TACU_Police_W_ASVAL",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Police_W_ASVAL",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_9("TACU_Magazine_30Rnd_SR3M"),
        mag_3("TACU_Magazine_17Rnd_Walther"),
        "HandGrenade",
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_9("TACU_Magazine_30Rnd_SR3M"),
        mag_3("TACU_Magazine_17Rnd_Walther"),
        "HandGrenade",
        "SmokeShell"
    };
    headgearList[] = {"TACU_Police_Helmet_PASGT_Neck_PoliceGreen", 1};
    CBA_facewearList[] = {"G_Balaclava_oli", 0.50, "G_Balaclava_blk", 0.50};
    EDITORPREVIEW(TACU_Police_U_O_CT_Rifleman);
};

class TACU_Police_U_O_CT_SMG_1: TACU_Police_U_O_CT_Rifleman {
    displayName = "SMG (Vityaz)";
    weapons[] = {
        "TACU_Police_W_Vityaz_Grip",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Police_W_Vityaz_Grip",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_10("TACU_Magazine_30Rnd_Vityaz"),
        mag_3("TACU_Magazine_17Rnd_Walther"),
        "HandGrenade",
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_10("TACU_Magazine_30Rnd_Vityaz"),
        mag_3("TACU_Magazine_17Rnd_Walther"),
        "HandGrenade",
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Police_U_O_CT_SMG_1);
};

class TACU_Police_U_O_CT_SMG_2: TACU_Police_U_O_CT_Rifleman {
    displayName = "SMG (Vikhr)";
    weapons[] = {
        "TACU_Police_W_Vikhr_Grip",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Police_W_Vikhr_Grip",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_10("TACU_Magazine_30Rnd_SR3M"),
        mag_3("TACU_Magazine_17Rnd_Walther"),
        "HandGrenade",
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_10("TACU_Magazine_30Rnd_SR3M"),
        mag_3("TACU_Magazine_17Rnd_Walther"),
        "HandGrenade",
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Police_U_O_CT_SMG_2);
};

class TACU_Police_U_O_CT_Breacher: TACU_Police_U_O_CT_Rifleman {
    displayName = "Breacher";
    weapons[] = {
        "CUP_sgun_Saiga12K",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "CUP_sgun_Saiga12K",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_8("CUP_12Rnd_B_Saiga12_Buck_00"),
        mag_3("TACU_Magazine_17Rnd_Walther"),
        "HandGrenade",
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_8("CUP_12Rnd_B_Saiga12_Buck_00"),
        mag_3("TACU_Magazine_17Rnd_Walther"),
        "HandGrenade",
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Police_U_O_CT_Breacher);
};

class TACU_Police_U_O_CT_Marksman: TACU_Police_U_O_CT_Rifleman {
    displayName = "Marksman";
    weapons[] = {
        "TACU_Police_W_Dragunov",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Police_W_Dragunov",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {mag_10("TACU_Magazine_10Rnd_VS121"), mag_3("TACU_Magazine_17Rnd_Walther")};
    respawnMagazines[] = {mag_10("TACU_Magazine_10Rnd_VS121"), mag_3("TACU_Magazine_17Rnd_Walther")};
    EDITORPREVIEW(TACU_Police_U_O_CT_Marksman);
};

// Units - Police (Enforcers)
class TACU_Police_U_O_Enforcer_SMG_1: TACU_Police_U_O_CT_Rifleman {
    editorSubcategory = "TACU_Police_EdSubCat_O_Enforcer";
    displayName = "SMG (Vityaz)";
    weapons[] = {
        "CUP_smg_vityaz",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "CUP_smg_vityaz",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {mag_12("TACU_Magazine_30Rnd_Vityaz"), mag_2("TACU_Magazine_17Rnd_Walther")};
    respawnMagazines[] = {mag_12("TACU_Magazine_30Rnd_Vityaz"), mag_2("TACU_Magazine_17Rnd_Walther")};
    headgearList[] = {"H_Beret_blk", 1};
    CBA_facewearList[] = {"G_Aviator", 0.8, "", 0.2};
    EDITORPREVIEW(TACU_Police_U_O_Enforcer_SMG_1);
};

class TACU_Police_U_O_Enforcer_SMG_2: TACU_Police_U_O_Enforcer_SMG_1 {
    displayName = "SMG (Bizon)";
    weapons[] = {
        "CUP_smg_bizon",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "CUP_smg_bizon",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {mag_8("TACU_Magazine_64Rnd_Bizon"), mag_2("TACU_Magazine_17Rnd_Walther")};
    respawnMagazines[] = {mag_8("TACU_Magazine_64Rnd_Bizon"), mag_2("TACU_Magazine_17Rnd_Walther")};
    EDITORPREVIEW(TACU_Police_U_O_Enforcer_SMG_2);
};

class TACU_Police_U_O_Enforcer_SMG_3: TACU_Police_U_O_Enforcer_SMG_1 {
    displayName = "SMG (Vikhr)";
    weapons[] = {
        "CUP_arifle_SR3M_Vikhr",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "CUP_arifle_SR3M_Vikhr",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {mag_12("TACU_Magazine_30Rnd_SR3M"), mag_2("TACU_Magazine_17Rnd_Walther")};
    respawnMagazines[] = {mag_12("TACU_Magazine_30Rnd_SR3M"), mag_2("TACU_Magazine_17Rnd_Walther")};
    EDITORPREVIEW(TACU_Police_U_O_Enforcer_SMG_3);
};

class TACU_Police_U_O_Enforcer_Breacher: TACU_Police_U_O_Enforcer_SMG_1 {
    displayName = "Breacher";
    weapons[] = {
        "CUP_sgun_Saiga12K",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "CUP_sgun_Saiga12K",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {mag_6("CUP_12Rnd_B_Saiga12_Buck_00"), mag_2("TACU_Magazine_17Rnd_Walther")};
    respawnMagazines[] = {mag_6("CUP_12Rnd_B_Saiga12_Buck_00"), mag_2("TACU_Magazine_17Rnd_Walther")};
    EDITORPREVIEW(TACU_Police_U_O_Enforcer_Breacher);
};
