class TACU_Vanguard_U_I_Contractor_Winter_Rifleman_01: TACU_Main_U_INDEP_Soldier_Base {
    author = "Mike";
    displayName = "Rifleman (HK416)";
    faction = "TACU_Vanguard_I";
    editorSubcategory = "TACU_Vanguard_EdSubCat_Contractors_Winter";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageENG_F", "Head_NATO", "G_NATO_default"};
    genericNames = "NATOMen";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "tacs_Uniform_Combat_LS_WS_WP_WB";
    items[] = {"NVGoggles_OPFOR"};
    respawnItems[] = {"NVGoggles_OPFOR"};
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
    weapons[] = {
        "TACU_Vanguard_W_Winter_HK416A5",
        "TACU_Vanguard_W_Green_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Vanguard_W_Winter_HK416A5",
        "TACU_Vanguard_W_Green_FNX",
        "Throw", "Put"
    };
    magazines[] = {
        mag_7("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_7("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    headgearList[] = {"tacs_Helmet_Enc_Ballistic_White", 1};
    EDITORPREVIEW(TACU_Vanguard_U_I_Contractor_Winter_Rifleman_01);
};

class TACU_Vanguard_U_I_Contractor_Winter_Rifleman_02: TACU_Vanguard_U_I_Contractor_Winter_Rifleman_01 {
    displayName = "Rifleman (AK12)";
    uniformClass = "tacs_Uniform_Combat_LS_WS_WP_WB";
    weapons[] = {
        "TACU_Vanguard_W_Winter_AK12",
        "TACU_Vanguard_W_Green_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Vanguard_W_Winter_AK12",
        "TACU_Vanguard_W_Green_FNX",
        "Throw", "Put"
    };
    magazines[] = {
        mag_7("TACU_Magazine_30Rnd_762_AK"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_7("TACU_Magazine_30Rnd_762_AK"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Vanguard_U_I_Contractor_Winter_Rifleman_02);
};

class TACU_Vanguard_U_I_Contractor_Winter_Rifleman_AT: TACU_Vanguard_U_I_Contractor_Winter_Rifleman_01 {
    displayName = "Rifleman (AT)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    uniformClass = "tacs_Uniform_Combat_LS_WS_WP_WB";
    backpack = "TACU_Vanguard_B_AT_Kitbag_White";
    weapons[] = {
        "tacs_MRAWS_Black_Rail_F",
        "TACU_Vanguard_W_Winter_QBZ",
        "TACU_Vanguard_W_Green_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "tacs_MRAWS_Black_Rail_F",
        "TACU_Vanguard_W_Winter_QBZ",
        "TACU_Vanguard_W_Green_FNX",
        "Throw", "Put"
    };
    magazines[] = {
        "MRAWS_HEAT_F",
        mag_7("TACU_Magazine_30Rnd_QBZ"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    respawnMagazines[] = {
        "MRAWS_HEAT_F",
        mag_7("TACU_Magazine_30Rnd_QBZ"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Vanguard_U_I_Contractor_Winter_Rifleman_AT);
};

class TACU_Vanguard_U_I_Contractor_Winter_Rifleman_AP: TACU_Vanguard_U_I_Contractor_Winter_Rifleman_01 {
    displayName = "Rifleman (AP)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    uniformClass = "tacs_Uniform_Combat_LS_WS_WP_WB";
    backpack = "TACU_Vanguard_B_AP_Kitbag_White";
    weapons[] = {
        "tacs_MRAWS_Black_Rail_F",
        "TACU_Vanguard_W_Winter_QBZ",
        "TACU_Vanguard_W_Green_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "tacs_MRAWS_Black_Rail_F",
        "TACU_Vanguard_W_Winter_QBZ",
        "TACU_Vanguard_W_Green_FNX",
        "Throw", "Put"
    };
    magazines[] = {
        "MRAWS_HE_F",
        mag_7("TACU_Magazine_30Rnd_QBZ"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    respawnMagazines[] = {
        "MRAWS_HE_F",
        mag_7("TACU_Magazine_30Rnd_QBZ"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Vanguard_U_I_Contractor_Winter_Rifleman_AP);
};

class TACU_Vanguard_U_I_Contractor_Winter_Grenadier: TACU_Vanguard_U_I_Contractor_Winter_Rifleman_01 {
    displayName = "Grenadier";
    icon = "iconMan";
    role = "Grenadier";
    uniformClass = "tacs_Uniform_Combat_LS_WS_WP_WB";
    weapons[] = {
        "TACU_Vanguard_W_Winter_HK416A5GL",
        "TACU_Vanguard_W_Green_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Vanguard_W_Winter_HK416A5GL",
        "TACU_Vanguard_W_Green_FNX",
        "Throw", "Put"
    };
    magazines[] = {
        mag_7("TACU_Magazine_30Rnd_STANAG"),
        mag_3("1Rnd_HE_Grenade_shell"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_7("TACU_Magazine_30Rnd_STANAG"),
        mag_3("1Rnd_HE_Grenade_shell"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Vanguard_U_I_Contractor_Winter_Grenadier);
};

class TACU_Vanguard_U_I_Contractor_Winter_Marksman: TACU_Vanguard_U_I_Contractor_Winter_Rifleman_01 {
    displayName = "Marksman";
    role = "Marksman";
    uniformClass = "tacs_Uniform_Combat_LS_WS_WP_WB";
    weapons[] = {
        "TACU_Vanguard_W_Winter_SIG556",
        "TACU_Vanguard_W_Green_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Vanguard_W_Winter_SIG556",
        "TACU_Vanguard_W_Green_FNX",
        "Throw", "Put"
    };
    magazines[] = {
        mag_7("TACU_Magazine_20Rnd_M1A"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_7("TACU_Magazine_20Rnd_M1A"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Vanguard_U_I_Contractor_Winter_Marksman);
};

class TACU_Vanguard_U_I_Contractor_Winter_TeamLeader: TACU_Vanguard_U_I_Contractor_Winter_Rifleman_01 {
    displayName = "Team Leader";
    icon = "iconManLeader";
    uniformClass = "tacs_Uniform_Combat_LS_WS_WP_WB";
    weapons[] = {
        "TACU_Vanguard_W_Winter_MX",
        "TACU_Vanguard_W_Green_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Vanguard_W_Winter_MX",
        "TACU_Vanguard_W_Green_FNX",
        "Throw", "Put"
    };
    magazines[] = {
        mag_7("TACU_Magazine_30Rnd_MX"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_7("TACU_Magazine_30Rnd_MX"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Vanguard_U_I_Contractor_Winter_TeamLeader);
};

class TACU_Vanguard_U_I_Contractor_Winter_Autorifleman: TACU_Vanguard_U_I_Contractor_Winter_Rifleman_01 {
    displayName = "Autorifleman";
    icon = "iconManMG";
    role = "MachineGunner";
    uniformClass = "tacs_Uniform_Combat_LS_WS_WP_WB";
    backpack = "TACU_Vanguard_B_MG_Kitbag_Winter";
    weapons[] = {
        "TACU_Vanguard_W_Green_MK200",
        "TACU_Vanguard_W_Green_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Vanguard_W_Green_MK200",
        "TACU_Vanguard_W_Green_FNX",
        "Throw", "Put"
    };
    magazines[] = {"TACU_Magazine_200Rnd_65_Box", mag_2("TACU_Magazine_11Rnd_FNX")};
    respawnMagazines[] = {"TACU_Magazine_200Rnd_65_Box", mag_2("TACU_Magazine_11Rnd_FNX")};
    EDITORPREVIEW(TACU_Vanguard_U_I_Contractor_Winter_Autorifleman);
};

class TACU_Vanguard_U_I_Contractor_Winter_Medic: TACU_Vanguard_U_I_Contractor_Winter_Rifleman_01 {
    displayName = "Medic";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    uniformClass = "tacs_Uniform_Combat_LS_WS_WP_WB";
    backpack = "TACU_Vanguard_B_Medic_Kitbag_White";
    weapons[] = {
        "TACU_Vanguard_W_Winter_HK416A5",
        "TACU_Vanguard_W_Green_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Vanguard_W_Winter_HK416A5",
        "TACU_Vanguard_W_Green_FNX",
        "Throw", "Put"
    };
    magazines[] = {
        mag_4("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_4("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Vanguard_U_I_Contractor_Winter_Medic);
};
