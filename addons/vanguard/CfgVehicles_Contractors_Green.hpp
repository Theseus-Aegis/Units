// Units - Vanguard Contractors Green
class TACU_Vanguard_U_Contractor_Green_Rifleman_01: TACU_Main_U_INDEP_Soldier_Base {
    author = "Mike";
    displayName = "Rifleman (F2000)";
    faction = "TACU_Vanguard";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageENG_F", "Head_NATO", "G_NATO_default"};
    genericNames = "NATOMen";
    icon = "iconMan";
    role = "Rifleman";
    sensitivityEar = 0.15;
    uniformClass = "tacs_Uniform_Garment_RS_GS_GP_BB";
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
    items[] = {"ACE_NVG_Gen4_Green"};
    respawnItems[] = {"ACE_NVG_Gen4_Green"};
    weapons[] = {
        "arifle_Mk20_ACO_F",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "arifle_Mk20_ACO_F",
        "hgun_Pistol_heavy_01_green_F",
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
    EDITORPREVIEW(TACU_Vanguard_U_Contractor_Green_Rifleman_01);
    headgearList[] = {"H_HelmetSpecB", 1};
    editorSubcategory = "TACU_Vanguard_EdSubCat_Contractors_Green";
};

class TACU_Vanguard_U_O_Contractor_Green_Rifleman_01: TACU_Vanguard_U_Contractor_Green_Rifleman_01 {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Contractor_Green_Rifleman_02: TACU_Vanguard_U_Contractor_Green_Rifleman_01 {
    displayName = "Rifleman (AK12)";
    uniformClass = "tacs_Uniform_Garment_RS_GS_GP_BB";
    weapons[] = {
        "arifle_AK12_lush_F",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "arifle_AK12_lush_F",
        "hgun_Pistol_heavy_01_green_F",
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
    EDITORPREVIEW(TACU_Vanguard_U_Contractor_Green_Rifleman_02);
};

class TACU_Vanguard_U_O_Contractor_Green_Rifleman_02: TACU_Vanguard_U_Contractor_Green_Rifleman_02 {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Contractor_Green_Rifleman_AT: TACU_Vanguard_U_Contractor_Green_Rifleman_01 {
    displayName = "Rifleman (AT)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    uniformClass = "tacs_Uniform_Garment_RS_GS_GP_BB";
    weapons[] = {
        "launch_MRAWS_green_rail_F",
        "TACU_Vanguard_W_CTAR_Green",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "launch_MRAWS_green_rail_F",
        "TACU_Vanguard_W_CTAR_Green",
        "hgun_Pistol_heavy_01_green_F",
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
    EDITORPREVIEW(TACU_Vanguard_U_Contractor_Green_Rifleman_AT);
};

class TACU_Vanguard_U_O_Contractor_Green_Rifleman_AT: TACU_Vanguard_U_Contractor_Green_Rifleman_AT {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Contractor_Green_Grenadier: TACU_Vanguard_U_Contractor_Green_Rifleman_01 {
    displayName = "Grenadier";
    role = "Grenadier";
    uniformClass = "tacs_Uniform_Garment_RS_GS_GP_BB";
    weapons[] = {
        "TACU_Vanguard_W_HK416GL_Green",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Vanguard_W_HK416GL_Green",
        "hgun_Pistol_heavy_01_green_F",
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
    EDITORPREVIEW(TACU_Vanguard_U_Contractor_Green_Grenadier);
};

class TACU_Vanguard_U_O_Contractor_Green_Grenadier: TACU_Vanguard_U_Contractor_Green_Grenadier {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Contractor_Green_Marksman: TACU_Vanguard_U_Contractor_Green_Rifleman_01 {
    displayName = "Marksman";
    role = "Marksman";
    uniformClass = "tacs_Uniform_Garment_RS_GS_GP_BB";
    weapons[] = {
        "TACU_Vanguard_W_SIG556_Green",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Vanguard_W_SIG556_Green",
        "hgun_Pistol_heavy_01_green_F",
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
    EDITORPREVIEW(TACU_Vanguard_U_Contractor_Green_Marksman);
};

class TACU_Vanguard_U_O_Contractor_Green_Marksman: TACU_Vanguard_U_Contractor_Green_Marksman {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Contractor_Green_Driver: TACU_Vanguard_U_Contractor_Green_Rifleman_01 {
    displayName = "Driver";
    role = "Crewman";
    uniformClass = "tacs_Uniform_Garment_RS_GS_GP_BB";
    weapons[] = {
        "SMG_02_ACO_F",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "SMG_02_ACO_F",
        "hgun_Pistol_heavy_01_green_F",
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
    EDITORPREVIEW(TACU_Vanguard_U_Contractor_Green_Driver);
};

class TACU_Vanguard_U_O_Contractor_Green_Driver: TACU_Vanguard_U_Contractor_Green_Driver {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Contractor_Green_TeamLeader: TACU_Vanguard_U_Contractor_Green_Rifleman_01 {
    displayName = "Team Leader";
    icon = "iconManLeader";
    uniformClass = "tacs_Uniform_Garment_RS_GS_GP_BB";
    weapons[] = {
        "TACU_Vanguard_W_MX_Green",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Vanguard_W_MX_Green",
        "hgun_Pistol_heavy_01_green_F",
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
    EDITORPREVIEW(TACU_Vanguard_U_Contractor_Green_TeamLeader);
};

class TACU_Vanguard_U_O_Contractor_Green_TeamLeader: TACU_Vanguard_U_Contractor_Green_TeamLeader {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Contractor_Green_Autorifleman: TACU_Vanguard_U_Contractor_Green_Rifleman_01 {
    displayName = "Autorifleman";
    icon = "iconManMG";
    role = "MachineGunner";
    uniformClass = "tacs_Uniform_Garment_RS_GS_GP_BB";
    weapons[] = {
        "TACU_Vanguard_W_Stoner_Black",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Vanguard_W_Stoner_Black",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    magazines[] = {mag_2("TACU_Magazine_200Rnd_65_Box"), mag_2("TACU_Magazine_11Rnd_FNX")};
    respawnMagazines[] = {mag_2("TACU_Magazine_200Rnd_65_Box"), mag_2("TACU_Magazine_11Rnd_FNX")};
    EDITORPREVIEW(TACU_Vanguard_U_Contractor_Green_Autorifleman);
};

class TACU_Vanguard_U_O_Contractor_Green_Autorifleman: TACU_Vanguard_U_Contractor_Green_Autorifleman {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Contractor_Green_Medic: TACU_Vanguard_U_Contractor_Green_Rifleman_01 {
    displayName = "Medic";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    uniformClass = "tacs_Uniform_Garment_RS_GS_GP_BB";
    backpack = "TACU_Vanguard_B_Medic_Kitbag_Green";
    weapons[] = {
        "arifle_Mk20C_ACO_F",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "arifle_Mk20C_ACO_F",
        "hgun_Pistol_heavy_01_green_F",
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
    EDITORPREVIEW(TACU_Vanguard_U_Contractor_Green_Medic);
};

class TACU_Vanguard_U_O_Contractor_Green_Medic: TACU_Vanguard_U_Contractor_Green_Medic {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Contractor_Green_Engineer: TACU_Vanguard_U_Contractor_Green_Rifleman_01 {
    displayName = "Engineer";
    icon = "iconManEngineer";
    role = "Sapper";
    engineer = 1;
    uniformClass = "tacs_Uniform_Garment_RS_GS_GP_BB";
    backpack = "I_Fieldpack_oli_Repair";
    weapons[] = {
        "TACU_Vanguard_W_CTAR_Green",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Vanguard_W_CTAR_Green",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_4("TACU_Magazine_30Rnd_QBZ"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_4("TACU_Magazine_30Rnd_QBZ"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Vanguard_U_Contractor_Green_Engineer);
};

class TACU_Vanguard_U_O_Contractor_Green_Engineer: TACU_Vanguard_U_Contractor_Green_Engineer {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Contractor_Pilot: TACU_Vanguard_U_Contractor_Green_Rifleman_01 {
    displayName = "Pilot";
    role = "Crewman";
    engineer = 1;
    uniformClass = "tacs_Uniform_Garment_LS_TS_TP_TB";
    backpack = "B_Parachute";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_PilotHelmetHeli_B"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_PilotHelmetHeli_B"};
    weapons[] = {"SMG_02_F", "Throw", "Put"};
    respawnWeapons[] = {"SMG_02_F", "Throw", "Put"};
    magazines[] = {mag_2("TACU_Magazine_30Rnd_SMG"), "SmokeShell"};
    respawnMagazines[] = {mag_2("TACU_Magazine_30Rnd_SMG"), "SmokeShell"};
    EDITORPREVIEW(TACU_Vanguard_U_Contractor_Pilot);
};

class TACU_Vanguard_U_O_Contractor_Pilot: TACU_Vanguard_U_Contractor_Pilot {
    side = 0;
    faction = "TACU_Vanguard_O";
};
