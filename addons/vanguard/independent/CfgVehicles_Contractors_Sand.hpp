class TACU_Vanguard_U_I_Contractor_Sand_Rifleman_01: TACU_Main_U_INDEP_Soldier_Base {
    author = "Mike";
    displayName = "Rifleman (F2000)";
    faction = "TACU_Vanguard_I";
    editorSubcategory = "TACU_Vanguard_EdSubCat_Contractors_Sand";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageENG_F", "Head_NATO", "G_NATO_default"};
    genericNames = "NATOMen";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "tacs_Uniform_Garment_RS_TS_TP_TB";
    items[] = {"NVGoggles"};
    respawnItems[] = {"NVGoggles"};
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "H_HelmetSpecB_sand",
        "TACU_Vanguard_V_PlateCarrier_Earth"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "H_HelmetSpecB_sand",
        "TACU_Vanguard_V_PlateCarrier_Earth"
    };
    weapons[] = {
        "TACU_Vanguard_W_Sand_F2000",
        "TACU_Vanguard_W_Sand_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Vanguard_W_Sand_F2000",
        "TACU_Vanguard_W_Sand_FNX",
        "Throw", "Put"
    };
    magazines[] = {
        mag_12("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_12("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    headgearList[] = {"H_HelmetSpecB_sand", 1};
    EDITORPREVIEW(TACU_Vanguard_U_I_Contractor_Sand_Rifleman_01);
};

class TACU_Vanguard_U_I_Contractor_Sand_Rifleman_02: TACU_Vanguard_U_I_Contractor_Sand_Rifleman_01 {
    displayName = "Rifleman (AK12)";
    uniformClass = "tacs_Uniform_Garment_RS_TS_TP_TB";
    weapons[] = {
        "TACU_Vanguard_W_Sand_AK12",
        "TACU_Vanguard_W_Sand_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Vanguard_W_Sand_AK12",
        "TACU_Vanguard_W_Sand_FNX",
        "Throw", "Put"
    };
    magazines[] = {
        mag_11("TACU_Magazine_30Rnd_762_AK"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_11("TACU_Magazine_30Rnd_762_AK"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Vanguard_U_I_Contractor_Sand_Rifleman_02);
};

class TACU_Vanguard_U_I_Contractor_Sand_Rifleman_AT: TACU_Vanguard_U_I_Contractor_Sand_Rifleman_01 {
    displayName = "Rifleman (AT)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    uniformClass = "tacs_Uniform_Garment_RS_TS_TP_TB";
    backpack = "TACU_Vanguard_B_AT_Kitbag_Tan";
    weapons[] = {
        "launch_MRAWS_sand_rail_F",
        "TACU_Vanguard_W_Sand_QBZ",
        "TACU_Vanguard_W_Sand_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "launch_MRAWS_sand_rail_F",
        "TACU_Vanguard_W_Sand_QBZ",
        "TACU_Vanguard_W_Sand_FNX",
        "Throw", "Put"
    };
    magazines[] = {
        "MRAWS_HEAT_F",
        mag_12("TACU_Magazine_30Rnd_QBZ"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    respawnMagazines[] = {
        "MRAWS_HEAT_F",
        mag_12("TACU_Magazine_30Rnd_QBZ"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Vanguard_U_I_Contractor_Sand_Rifleman_AT);
};

class TACU_Vanguard_U_I_Contractor_Sand_Rifleman_AP: TACU_Vanguard_U_I_Contractor_Sand_Rifleman_01 {
    displayName = "Rifleman (AP)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    uniformClass = "tacs_Uniform_Garment_RS_TS_TP_TB";
    backpack = "TACU_Vanguard_B_AP_Kitbag_Tan";
    weapons[] = {
        "launch_MRAWS_sand_rail_F",
        "TACU_Vanguard_W_Sand_QBZ",
        "TACU_Vanguard_W_Sand_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "launch_MRAWS_sand_rail_F",
        "TACU_Vanguard_W_Sand_QBZ",
        "TACU_Vanguard_W_Sand_FNX",
        "Throw", "Put"
    };
    magazines[] = {
        "MRAWS_HE_F",
        mag_12("TACU_Magazine_30Rnd_QBZ"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    respawnMagazines[] = {
        "MRAWS_HE_F",
        mag_12("TACU_Magazine_30Rnd_QBZ"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Vanguard_U_I_Contractor_Sand_Rifleman_AP);
};

class TACU_Vanguard_U_I_Contractor_Sand_Grenadier: TACU_Vanguard_U_I_Contractor_Sand_Rifleman_01 {
    displayName = "Grenadier";
    icon = "iconMan";
    role = "Grenadier";
    uniformClass = "tacs_Uniform_Garment_RS_TS_TP_TB";
    weapons[] = {
        "TACU_Vanguard_W_Sand_HK416A5GL",
        "TACU_Vanguard_W_Sand_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Vanguard_W_Sand_HK416A5GL",
        "TACU_Vanguard_W_Sand_FNX",
        "Throw", "Put"
    };
    magazines[] = {
        mag_12("TACU_Magazine_30Rnd_STANAG"),
        mag_3("1Rnd_HE_Grenade_shell"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_12("TACU_Magazine_30Rnd_STANAG"),
        mag_3("1Rnd_HE_Grenade_shell"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Vanguard_U_I_Contractor_Sand_Grenadier);
};

class TACU_Vanguard_U_I_Contractor_Sand_Marksman: TACU_Vanguard_U_I_Contractor_Sand_Rifleman_01 {
    displayName = "Marksman";
    role = "Marksman";
    uniformClass = "tacs_Uniform_Garment_RS_TS_TP_TB";
    weapons[] = {
        "TACU_Vanguard_W_Sand_SIG556",
        "TACU_Vanguard_W_Sand_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Vanguard_W_Sand_SIG556",
        "TACU_Vanguard_W_Sand_FNX",
        "Throw", "Put"
    };
    magazines[] = {
        mag_12("TACU_Magazine_20Rnd_M1A"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_12("TACU_Magazine_20Rnd_M1A"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Vanguard_U_I_Contractor_Sand_Marksman);
};

class TACU_Vanguard_U_I_Contractor_Sand_Driver: TACU_Vanguard_U_I_Contractor_Sand_Rifleman_01 {
    displayName = "Driver";
    role = "Crewman";
    uniformClass = "tacs_Uniform_Garment_RS_TS_TP_TB";
    weapons[] = {
        "SMG_02_ACO_F",
        "TACU_Vanguard_W_Sand_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "SMG_02_ACO_F",
        "TACU_Vanguard_W_Sand_FNX",
        "Throw", "Put"
    };
    magazines[] = {
        mag_4("TACU_Magazine_30Rnd_SMG"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_4("TACU_Magazine_30Rnd_SMG"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Vanguard_U_I_Contractor_Sand_Driver);
};

class TACU_Vanguard_U_I_Contractor_Sand_TeamLeader: TACU_Vanguard_U_I_Contractor_Sand_Rifleman_01 {
    displayName = "Team Leader";
    icon = "iconManLeader";
    uniformClass = "tacs_Uniform_Garment_RS_TS_TP_TB";
    weapons[] = {
        "arifle_MX_Hamr_pointer_F",
        "TACU_Vanguard_W_Sand_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "arifle_MX_Hamr_pointer_F",
        "TACU_Vanguard_W_Sand_FNX",
        "Throw", "Put"
    };
    magazines[] = {
        mag_12("TACU_Magazine_30Rnd_MX"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_12("TACU_Magazine_30Rnd_MX"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Vanguard_U_I_Contractor_Sand_TeamLeader);
};

class TACU_Vanguard_U_I_Contractor_Sand_Autorifleman: TACU_Vanguard_U_I_Contractor_Sand_Rifleman_01 {
    displayName = "Autorifleman";
    icon = "iconManMG";
    role = "MachineGunner";
    uniformClass = "tacs_Uniform_Garment_RS_TS_TP_TB";
    backpack = "TACU_Vanguard_B_MG_Kitbag_Tan";
    weapons[] = {
        "TACU_Vanguard_W_Sand_MK200",
        "TACU_Vanguard_W_Sand_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Vanguard_W_Sand_MK200",
        "TACU_Vanguard_W_Sand_FNX",
        "Throw", "Put"
    };
    magazines[] = {mag_2("TACU_Magazine_200Rnd_65_Box"), mag_2("TACU_Magazine_11Rnd_FNX")};
    respawnMagazines[] = {mag_2("TACU_Magazine_200Rnd_65_Box"), mag_2("TACU_Magazine_11Rnd_FNX")};
    EDITORPREVIEW(TACU_Vanguard_U_I_Contractor_Sand_Autorifleman);
};

class TACU_Vanguard_U_I_Contractor_Sand_Medic: TACU_Vanguard_U_I_Contractor_Sand_Rifleman_01 {
    displayName = "Medic";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    uniformClass = "tacs_Uniform_Garment_RS_TS_TP_TB";
    backpack = "TACU_Vanguard_B_Medic_Kitbag_Tan";
    weapons[] = {
        "TACU_Vanguard_W_Sand_F2000",
        "TACU_Vanguard_W_Sand_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Vanguard_W_Sand_F2000",
        "TACU_Vanguard_W_Sand_FNX",
        "Throw", "Put"
    };
    magazines[] = {
        mag_12("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_12("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Vanguard_U_I_Contractor_Sand_Medic);
};

class TACU_Vanguard_U_I_Contractor_Sand_Engineer: TACU_Vanguard_U_I_Contractor_Sand_Rifleman_01 {
    displayName = "Engineer";
    icon = "iconManEngineer";
    role = "Sapper";
    engineer = 1;
    uniformClass = "tacs_Uniform_Garment_RS_TS_TP_TB";
    backpack = "B_Kitbag_mcamo_Eng";
    weapons[] = {
        "TACU_Vanguard_W_Sand_QBZ",
        "TACU_Vanguard_W_Sand_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Vanguard_W_Sand_QBZ",
        "TACU_Vanguard_W_Sand_FNX",
        "Throw", "Put"
    };
    magazines[] = {
        mag_12("TACU_Magazine_30Rnd_QBZ"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_12("TACU_Magazine_30Rnd_QBZ"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Vanguard_U_I_Contractor_Sand_Engineer);
};
