// Units - Vanguard Contractors Winter
class TACU_Vanguard_U_Contractor_Winter_Rifleman_01: TACU_Main_U_INDEP_Soldier_Base {
    author = "Mike";
    displayName = "Rifleman (HK416)";
    faction = "TACU_Vanguard";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageENG_F", "Head_NATO", "G_NATO_default"};
    genericNames = "NATOMen";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "tacs_Uniform_Combat_LS_WS_WP_WB";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "tacs_Helmet_Enc_Ballistic_White",
        "TACU_Vanguard_V_PlateCarrier_Snow"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "tacs_Helmet_Enc_Ballistic_White",
        "TACU_Vanguard_V_PlateCarrier_Snow"
    };
    items[] = {"ACE_NVG_Gen4_Black"};
    respawnItems[] = {"ACE_NVG_Gen4_Black"};
    weapons[] = {
        "arifle_SPAR_01_blk_ACO_Pointer_F",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "arifle_SPAR_01_blk_ACO_Pointer_F",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_7("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_7("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Vanguard_U_Contractor_Winter_Rifleman_01);
    headgearList[] = {
        "tacs_Helmet_Enc_Ballistic_White", 1
    };
    editorSubcategory = "TACU_Vanguard_EdSubCat_Contractors_Winter";
};

class TACU_Vanguard_U_O_Contractor_Winter_Rifleman_01: TACU_Vanguard_U_Contractor_Winter_Rifleman_01 {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Contractor_Winter_Rifleman_02: TACU_Vanguard_U_Contractor_Winter_Rifleman_01 {
    displayName = "Rifleman (AK12)";
    uniformClass = "tacs_Uniform_Combat_LS_WS_WP_WB";
    weapons[] = {
        "arifle_AK12_F",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {"arifle_AK12_F",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_7("TACU_Magazine_30Rnd_762_AK"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_7("TACU_Magazine_30Rnd_762_AK"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Vanguard_U_Contractor_Winter_Rifleman_02);
};

class TACU_Vanguard_U_O_Contractor_Winter_Rifleman_02: TACU_Vanguard_U_Contractor_Winter_Rifleman_02 {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Contractor_Winter_Rifleman_AT: TACU_Vanguard_U_Contractor_Winter_Rifleman_01 {
    displayName = "Rifleman (AT)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    uniformClass = "tacs_Uniform_Combat_LS_WS_WP_WB";
    weapons[] = {
        "launch_MRAWS_green_rail_F",
        "arifle_CTAR_blk_ACO_Pointer_F",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "launch_MRAWS_green_rail_F",
        "arifle_CTAR_blk_ACO_Pointer_F",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        "MRAWS_HEAT_F",
        mag_7("TACU_Magazine_30Rnd_QBZ"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    respawnMagazines[] = {
        "MRAWS_HEAT_F",
        mag_7("TACU_Magazine_30Rnd_QBZ"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Vanguard_U_Contractor_Winter_Rifleman_AT);
};

class TACU_Vanguard_U_O_Contractor_Winter_Rifleman_AT: TACU_Vanguard_U_Contractor_Winter_Rifleman_AT {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Contractor_Winter_Grenadier: TACU_Vanguard_U_Contractor_Winter_Rifleman_01 {
    displayName = "Grenadier";
    icon = "iconMan";
    role = "Grenadier";
    uniformClass = "tacs_Uniform_Combat_LS_WS_WP_WB";
    weapons[] = {
        "arifle_SPAR_01_GL_blk_ACO_Pointer_F",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "arifle_SPAR_01_GL_blk_ACO_Pointer_F",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_7("TACU_Magazine_30Rnd_STANAG"),
        mag_3("1Rnd_HE_Grenade_shell"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_7("TACU_Magazine_30Rnd_STANAG"),
        mag_3("1Rnd_HE_Grenade_shell"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Vanguard_U_Contractor_Winter_Grenadier);
};

class TACU_Vanguard_U_O_Contractor_Winter_Grenadier: TACU_Vanguard_U_Contractor_Winter_Grenadier {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Contractor_Winter_Marksman: TACU_Vanguard_U_Contractor_Winter_Rifleman_01 {
    displayName = "Marksman";
    role = "Marksman";
    uniformClass = "tacs_Uniform_Combat_LS_WS_WP_WB";
    weapons[] = {
        "arifle_SPAR_03_blk_MOS_Pointer_Bipod_F",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "arifle_SPAR_03_blk_MOS_Pointer_Bipod_F",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_7("TACU_Magazine_20Rnd_M1A"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_7("TACU_Magazine_20Rnd_M1A"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Vanguard_U_Contractor_Winter_Marksman);
};

class TACU_Vanguard_U_O_Contractor_Winter_Marksman: TACU_Vanguard_U_Contractor_Winter_Marksman {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Contractor_Winter_TeamLeader: TACU_Vanguard_U_Contractor_Winter_Rifleman_01 {
    displayName = "Team Leader";
    icon = "iconManLeader";
    uniformClass = "tacs_Uniform_Combat_LS_WS_WP_WB";
    weapons[] = {
        "TACU_Vanguard_W_MX_Black",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Vanguard_W_MX_Black",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_7("TACU_Magazine_30Rnd_MX"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_7("TACU_Magazine_30Rnd_MX"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Vanguard_U_Contractor_Winter_TeamLeader);
};

class TACU_Vanguard_U_O_Contractor_Winter_TeamLeader: TACU_Vanguard_U_Contractor_Winter_TeamLeader {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Contractor_Winter_Autorifleman: TACU_Vanguard_U_Contractor_Winter_Rifleman_01 {
    displayName = "Autorifleman";
    icon = "iconManMG";
    role = "MachineGunner";
    uniformClass = "tacs_Uniform_Combat_LS_WS_WP_WB";
    weapons[] = {
        "TACU_Vanguard_W_Stoner_Black",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Vanguard_W_Stoner_Black",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {mag_2("TACU_Magazine_200Rnd_65_Box"), mag_2("TACU_Magazine_17Rnd_Walther")};
    respawnMagazines[] = {mag_2("TACU_Magazine_200Rnd_65_Box"), mag_2("TACU_Magazine_17Rnd_Walther")};
    EDITORPREVIEW(TACU_Vanguard_U_Contractor_Winter_Autorifleman);
};

class TACU_Vanguard_U_O_Contractor_Winter_Autorifleman: TACU_Vanguard_U_Contractor_Winter_Autorifleman {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Contractor_Winter_Medic: TACU_Vanguard_U_Contractor_Winter_Rifleman_01 {
    displayName = "Medic";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    uniformClass = "tacs_Uniform_Combat_LS_WS_WP_WB";
    backpack = "TACU_Vanguard_B_Kitbag_Medic_White";
    weapons[] = {
        "arifle_SPAR_01_blk_ACO_Pointer_F",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "arifle_SPAR_01_blk_ACO_Pointer_F",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_4("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_4("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Vanguard_U_Contractor_Winter_Medic);
};

class TACU_Vanguard_U_O_Contractor_Winter_Medic: TACU_Vanguard_U_Contractor_Winter_Medic {
    side = 0;
    faction = "TACU_Vanguard_O";
};
