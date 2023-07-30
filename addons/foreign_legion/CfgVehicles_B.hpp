class TACU_Foreign_Legion_U_B_Rifleman: TACU_Main_U_BLUFOR_Soldier_Base {
    author = "Mike";
    displayName = "Rifleman";
    faction = "TACU_Foreign_Legion_B";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageFRE_F", "Head_Euro"};
    genericNames = "TACU_FrenchNames";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "tacs_Uniform_Garment_RS_TS_TP_TB";
    items[] = {"NVGoggles"};
    respawnItems[] = {"NVGoggles"};
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "H_HelmetB_sand",
        "TACU_Foreign_Legion_Vest_Carrier_Lite_Desert",
        "G_Shades_Black"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "H_HelmetB_sand",
        "TACU_Foreign_Legion_Vest_Carrier_Lite_Desert",
        "G_Shades_Black"
    };
    weapons[] = {
        "TACU_Foreign_Legion_W_HK416A5_LB_Holo",
        "hgun_P07_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Foreign_Legion_W_HK416A5_LB_Holo",
        "hgun_P07_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_12("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_12("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    headgearList[] = {
        "H_HelmetB_sand", 0.4,
        "H_HelmetSpecB_sand", 0.4,
        "H_Bandanna_sand", 0.2
    };
    CBA_facewearList[] = {
        "", 0.4,
        "G_Shades_Black", 0.2,
        "G_Shades_Green", 0.2,
        "G_Shades_Red", 0.2
    };
    EDITORPREVIEW(TACU_Foreign_Legion_U_B_Rifleman);
};

class TACU_Foreign_Legion_U_B_Demolitions: TACU_Foreign_Legion_U_B_Rifleman {
    displayName = "Demolitions";
    backpack = "TACU_Foreign_Legion_B_Demolitions_AssaultPack";
    icon = "iconManEngineer";
    role = "Sapper";
    engineer = 1;
    canDeactivateMines = 1;
    weapons[] = {
        "TACU_Foreign_Legion_W_HK416A5_SB_Holo",
        "hgun_P07_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Foreign_Legion_W_HK416A5_SB_Holo",
        "hgun_P07_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_12("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_12("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Foreign_Legion_U_B_Demolitions);
};

class TACU_Foreign_Legion_U_B_Engineer: TACU_Foreign_Legion_U_B_Rifleman {
    displayName = "Engineer";
    backpack = "TACU_Foreign_Legion_B_Engineer_AssaultPack";
    icon = "iconManEngineer";
    role = "Sapper";
    engineer = 1;
    weapons[] = {
        "TACU_Foreign_Legion_W_HK416A5_SB_Holo",
        "hgun_P07_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Foreign_Legion_W_HK416A5_SB_Holo",
        "hgun_P07_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_12("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_12("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Foreign_Legion_U_B_Engineer);
};

class TACU_Foreign_Legion_U_B_Autorifleman: TACU_Foreign_Legion_U_B_Rifleman {
    displayName = "Autorifleman";
    icon = "iconManMG";
    role = "MachineGunner";
    backpack = "TACU_Foreign_Legion_B_Autorifleman_AssaultPack";
    weapons[] = {
        "TACU_Foreign_Legion_W_HK416A5_LB_Bravo",
        "hgun_P07_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Foreign_Legion_W_HK416A5_LB_Bravo",
        "hgun_P07_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_2("TACU_Magazine_150Rnd_556_Drum"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_2("TACU_Magazine_150Rnd_556_Drum"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Foreign_Legion_U_B_Autorifleman);
};

class TACU_Foreign_Legion_U_B_Machinegunner: TACU_Foreign_Legion_U_B_Rifleman {
    displayName = "Machinegunner";
    icon = "iconManMG";
    role = "MachineGunner";
    backpack = "TACU_Foreign_Legion_B_Machinegunner_Carryall";
    weapons[] = {
        "TACU_Foreign_Legion_W_Minimi",
        "hgun_P07_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Foreign_Legion_W_Minimi",
        "hgun_P07_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_3("TACU_Magazine_200Rnd_556_Box"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_3("TACU_Magazine_200Rnd_556_Box"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Foreign_Legion_U_B_Machinegunner);
};

class TACU_Foreign_Legion_U_B_Marksman: TACU_Foreign_Legion_U_B_Rifleman {
    displayName = "Marksman";
    role = "Marksman";
    weapons[] = {
        "Binocular",
        "TACU_Foreign_Legion_W_HK417A2",
        "hgun_P07_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "Binocular",
        "TACU_Foreign_Legion_W_HK417A2",
        "hgun_P07_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_12("TACU_Magazine_20Rnd_M1A"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_12("TACU_Magazine_20Rnd_M1A"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Foreign_Legion_U_B_Marksman);
};

class TACU_Foreign_Legion_U_B_Medic: TACU_Foreign_Legion_U_B_Rifleman {
    displayName = "Medic";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    backpack = "TACU_Foreign_Legion_B_Medic_AssaultPack";
    weapons[] = {
        "TACU_Foreign_Legion_W_HK416A5_SB_Holo",
        "hgun_P07_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Foreign_Legion_W_HK416A5_SB_Holo",
        "hgun_P07_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_12("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_12("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Foreign_Legion_U_B_Medic);
};

class TACU_Foreign_Legion_U_B_AT: TACU_Foreign_Legion_U_B_Rifleman {
    displayName = "Rifleman (AT)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    backpack = "TACU_Foreign_Legion_B_AT_Carryall";
    weapons[] = {
        "launch_MRAWS_sand_rail_F",
        "TACU_Foreign_Legion_W_HK416A5_SB_Holo",
        "hgun_P07_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "launch_MRAWS_sand_rail_F",
        "TACU_Foreign_Legion_W_HK416A5_SB_Holo",
        "hgun_P07_F",
        "Throw", "Put"
    };
    magazines[] = {
        "MRAWS_HEAT_F",
        mag_12("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        "MRAWS_HEAT_F",
        mag_12("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Foreign_Legion_U_B_AT);
};

class TACU_Foreign_Legion_U_B_AP: TACU_Foreign_Legion_U_B_AT {
    displayName = "Rifleman (AP)";
    isAP = 1;
    backpack = "TACU_Foreign_Legion_B_AP_Carryall";
    magazines[] = {
        "MRAWS_HE_F",
        mag_12("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        "MRAWS_HE_F",
        mag_12("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
};

class TACU_Foreign_Legion_U_B_Breacher: TACU_Foreign_Legion_U_B_Rifleman {
    displayName = "Breacher";
    backpack = "TACU_Foreign_Legion_B_Breacher";
    weapons[] = {
        "TACU_Foreign_Legion_W_AA40",
        "hgun_P07_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Foreign_Legion_W_AA40",
        "hgun_P07_F",
        "Throw", "Put"
    };
    magazines[] = {
        "20Rnd_12Gauge_AA40_Pellets_lxWS",
        mag_6("8Rnd_12Gauge_AA40_Pellets_lxWS"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        "20Rnd_12Gauge_AA40_Pellets_lxWS",
        mag_6("8Rnd_12Gauge_AA40_Pellets_lxWS"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Foreign_Legion_U_B_Breacher);
};

class TACU_Foreign_Legion_U_B_TL: TACU_Foreign_Legion_U_B_Rifleman {
    displayName = "Team Leader";
    icon = "iconManLeader";
    weapons[] = {
        "TACU_Foreign_Legion_W_HK416A5_LB_Bravo",
        "hgun_P07_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Foreign_Legion_W_HK416A5_LB_Bravo",
        "hgun_P07_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_12("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_12("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Foreign_Legion_U_B_TL);
};

class TACU_Foreign_Legion_U_B_Grenadier: TACU_Foreign_Legion_U_B_Rifleman {
    displayName = "Grenadier";
    role = "Grenadier";
    weapons[] = {
        "TACU_Foreign_Legion_W_HK416A5_GL_Holo",
        "hgun_P07_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Foreign_Legion_W_HK416A5_GL_Holo",
        "hgun_P07_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_10("TACU_Magazine_30Rnd_STANAG"),
        mag_6("1Rnd_HE_Grenade_shell"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_10("TACU_Magazine_30Rnd_STANAG"),
        mag_6("1Rnd_HE_Grenade_shell"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Foreign_Legion_U_B_Grenadier);
};

class TACU_Foreign_Legion_U_B_Driver: TACU_Foreign_Legion_U_B_Rifleman {
    displayName = "Driver";
    EDITORPREVIEW(TACU_Foreign_Legion_U_B_Driver);
};

class TACU_Foreign_Legion_U_B_Pilot: TACU_Foreign_Legion_U_B_Rifleman {
    displayName = "Pilot";
    uniformClass = "tacs_Uniform_HeliPilotCoverall_Sand";
    backpack = "B_Parachute";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "tacs_Helmet_PilotHeli_Tan",
        "TACU_Foreign_Legion_Vest_Carrier_Lite_Desert",
        "G_Aviator"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "tacs_Helmet_PilotHeli_Tan",
        "TACU_Foreign_Legion_Vest_Carrier_Lite_Desert",
        "G_Aviator"
    };
    weapons[] = {
        "TACU_Foreign_Legion_W_MP5",
        "hgun_P07_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Foreign_Legion_W_MP5",
        "hgun_P07_F",
        "Throw", "Put"
    };
    magazines[] = {mag_4("TACU_Magazine_30Rnd_SMG"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_4("TACU_Magazine_30Rnd_SMG"), mag_2("SmokeShell")};
    headgearList[] = {"tacs_Helmet_PilotHeli_Tan", 1};
    CBA_facewearList[] = {"G_Aviator", 1};
    EDITORPREVIEW(TACU_Foreign_Legion_U_B_Pilot);
};
