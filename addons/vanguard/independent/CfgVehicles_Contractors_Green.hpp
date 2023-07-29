// Units - Vanguard Contractors Green
class TACU_Vanguard_U_I_Contractor_Green_Rifleman_01: TACU_Main_U_INDEP_Soldier_Base {
    author = "Mike";
    displayName = "Rifleman (F2000)";
    faction = "TACU_Vanguard_I";
    editorSubcategory = "TACU_Vanguard_EdSubCat_Contractors_Green";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageENG_F", "Head_NATO", "G_NATO_default"};
    genericNames = "NATOMen";
    icon = "iconMan";
    role = "Rifleman";
    sensitivityEar = 0.15;
    uniformClass = "tacs_Uniform_Garment_RS_GS_GP_BB";
    items[] = {"NVGoggles_INDEP"};
    respawnItems[] = {"NVGoggles_INDEP"};
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "H_HelmetSpecB",
        "TACU_Vanguard_V_PlateCarrier_Foliage"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "H_HelmetSpecB",
        "TACU_Vanguard_V_PlateCarrier_Foliage"
    };
    weapons[] = {
        "TACU_Vanguard_W_Green_F2000",
        "TACU_Vanguard_W_Green_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Vanguard_W_Green_F2000",
        "TACU_Vanguard_W_Green_FNX",
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
    headgearList[] = {"H_HelmetSpecB", 1};
    EDITORPREVIEW(TACU_Vanguard_U_I_Contractor_Green_Rifleman_01);
};

class TACU_Vanguard_U_I_Contractor_Green_Rifleman_02: TACU_Vanguard_U_I_Contractor_Green_Rifleman_01 {
    displayName = "Rifleman (AK12)";
    weapons[] = {
        "TACU_Vanguard_W_Green_AK12",
        "TACU_Vanguard_W_Green_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Vanguard_W_Green_AK12",
        "TACU_Vanguard_W_Green_FNX",
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
    EDITORPREVIEW(TACU_Vanguard_U_I_Contractor_Green_Rifleman_02);
};

class TACU_Vanguard_U_I_Contractor_Green_Rifleman_AT: TACU_Vanguard_U_I_Contractor_Green_Rifleman_01 {
    displayName = "Rifleman (AT)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    backpack = "TACU_Vanguard_B_AT_Kitbag_Green";
    weapons[] = {
        "launch_MRAWS_green_rail_F",
        "TACU_Vanguard_W_Green_QBZ",
        "TACU_Vanguard_W_Green_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "launch_MRAWS_green_rail_F",
        "TACU_Vanguard_W_Green_QBZ",
        "TACU_Vanguard_W_Green_FNX",
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
    EDITORPREVIEW(TACU_Vanguard_U_I_Contractor_Green_Rifleman_AT);
};

class TACU_Vanguard_U_I_Contractor_Green_Rifleman_AP: TACU_Vanguard_U_I_Contractor_Green_Rifleman_AT {
    displayName = "Rifleman (AP)";
    backpack = "TACU_Vanguard_B_AP_Kitbag_Green";
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
};

class TACU_Vanguard_U_I_Contractor_Green_Grenadier: TACU_Vanguard_U_I_Contractor_Green_Rifleman_01 {
    displayName = "Grenadier";
    role = "Grenadier";
    weapons[] = {
        "TACU_Vanguard_W_Green_HK416A5GL",
        "TACU_Vanguard_W_Green_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Vanguard_W_Green_HK416A5GL",
        "TACU_Vanguard_W_Green_FNX",
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
    EDITORPREVIEW(TACU_Vanguard_U_I_Contractor_Green_Grenadier);
};

class TACU_Vanguard_U_I_Contractor_Green_Marksman: TACU_Vanguard_U_I_Contractor_Green_Rifleman_01 {
    displayName = "Marksman";
    role = "Marksman";
    weapons[] = {
        "TACU_Vanguard_W_Green_SIG556",
        "TACU_Vanguard_W_Green_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Vanguard_W_Green_SIG556",
        "TACU_Vanguard_W_Green_FNX",
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
    EDITORPREVIEW(TACU_Vanguard_U_I_Contractor_Green_Marksman);
};

class TACU_Vanguard_U_I_Contractor_Green_Driver: TACU_Vanguard_U_I_Contractor_Green_Rifleman_01 {
    displayName = "Driver";
    role = "Crewman";
    weapons[] = {
        "SMG_02_ACO_F",
        "TACU_Vanguard_W_Green_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "SMG_02_ACO_F",
        "TACU_Vanguard_W_Green_FNX",
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
    EDITORPREVIEW(TACU_Vanguard_U_I_Contractor_Green_Driver);
};

class TACU_Vanguard_U_I_Contractor_Green_TeamLeader: TACU_Vanguard_U_I_Contractor_Green_Rifleman_01 {
    displayName = "Team Leader";
    icon = "iconManLeader";
    weapons[] = {
        "TACU_Vanguard_W_Green_MX",
        "TACU_Vanguard_W_Green_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Vanguard_W_Green_MX",
        "TACU_Vanguard_W_Green_FNX",
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
    EDITORPREVIEW(TACU_Vanguard_U_I_Contractor_Green_TeamLeader);
};

class TACU_Vanguard_U_I_Contractor_Green_Autorifleman: TACU_Vanguard_U_I_Contractor_Green_Rifleman_01 {
    displayName = "Autorifleman";
    icon = "iconManMG";
    role = "MachineGunner";
    backpack = "TACU_Vanguard_B_MG_Kitbag_Green";
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
    magazines[] = {mag_2("TACU_Magazine_200Rnd_65_Box"), mag_2("TACU_Magazine_11Rnd_FNX")};
    respawnMagazines[] = {mag_2("TACU_Magazine_200Rnd_65_Box"), mag_2("TACU_Magazine_11Rnd_FNX")};
    EDITORPREVIEW(TACU_Vanguard_U_I_Contractor_Green_Autorifleman);
};

class TACU_Vanguard_U_I_Contractor_Green_Medic: TACU_Vanguard_U_I_Contractor_Green_Rifleman_01 {
    displayName = "Medic";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    backpack = "TACU_Vanguard_B_Medic_Kitbag_Green";
    weapons[] = {
        "TACU_Vanguard_W_Green_F2000",
        "TACU_Vanguard_W_Green_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Vanguard_W_Green_F2000",
        "TACU_Vanguard_W_Green_FNX",
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
    EDITORPREVIEW(TACU_Vanguard_U_I_Contractor_Green_Medic);
};

class TACU_Vanguard_U_I_Contractor_Green_Engineer: TACU_Vanguard_U_I_Contractor_Green_Rifleman_01 {
    displayName = "Engineer";
    icon = "iconManEngineer";
    role = "Sapper";
    engineer = 1;
    backpack = "I_Fieldpack_oli_Repair";
    weapons[] = {
        "TACU_Vanguard_W_Green_QBZ",
        "TACU_Vanguard_W_Green_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Vanguard_W_Green_QBZ",
        "TACU_Vanguard_W_Green_FNX",
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
    EDITORPREVIEW(TACU_Vanguard_U_I_Contractor_Green_Engineer);
};

class TACU_Vanguard_U_I_Contractor_Pilot: TACU_Vanguard_U_I_Contractor_Green_Rifleman_01 {
    displayName = "Pilot";
    role = "Crewman";
    engineer = 1;
    uniformClass = "tacs_Uniform_Garment_LS_TS_TP_TB";
    backpack = "B_Parachute";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_PilotHelmetHeli_B"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_PilotHelmetHeli_B"};
    weapons[] = {"SMG_02_ACO_F", "Throw", "Put"};
    respawnWeapons[] = {"SMG_02_ACO_F", "Throw", "Put"};
    magazines[] = {mag_2("TACU_Magazine_30Rnd_SMG"), "SmokeShell"};
    respawnMagazines[] = {mag_2("TACU_Magazine_30Rnd_SMG"), "SmokeShell"};
    EDITORPREVIEW(TACU_Vanguard_U_I_Contractor_Pilot);
};
