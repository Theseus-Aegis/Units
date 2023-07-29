class TACU_African_South_U_B_Rifleman: TACU_Main_U_BLUFOR_Soldier_Base {
    author = "Mike";
    displayName = "Rifleman";
    faction = "TACU_African_South_B";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageENGFRE_F", "Head_African", "Head_Euro"};
    genericNames = "TACU_SouthAfricanNames";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "TACU_African_South_Uniform_Combat_Fatigues";
    items[] = {"NVGoggles_INDEP"};
    respawnItems[] = {"NVGoggles_INDEP"};
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_lxWS_TacVestIR_oli",
        "TACU_African_South_Helmet_PASGT_Green"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_lxWS_TacVestIR_oli",
        "TACU_African_South_Helmet_PASGT_Green"
    };
    weapons[] = {
        "TACU_African_South_W_Green_XMS",
        "TACU_African_South_W_Green_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_African_South_W_Green_XMS",
        "TACU_African_South_W_Green_FNX",
        "Throw", "Put"
    };
    magazines[] = {
        mag_12("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_12("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    headgearList[] = {};
    CBA_facewearList[] = {"", 0.8, "G_Combat_lxWS", 0.2};
    EDITORPREVIEW(TACU_African_South_U_B_Rifleman);
};

class TACU_African_South_U_B_CQB: TACU_African_South_U_B_Rifleman {
    displayName = "CQB Specialist";
    weapons[] = {
        "TACU_African_South_W_Green_XMS_SG",
        "TACU_African_South_W_Green_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_African_South_W_Green_XMS_SG",
        "TACU_African_South_W_Green_FNX",
        "Throw", "Put"
    };
    magazines[] = {
        mag_7("TACU_Magazine_30Rnd_STANAG"),
        mag_4("6Rnd_12Gauge_Pellets"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_7("TACU_Magazine_30Rnd_STANAG"),
        mag_4("6Rnd_12Gauge_Pellets"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_African_South_U_B_CQB);
};

class TACU_African_South_U_B_Medic: TACU_African_South_U_B_Rifleman {
    displayName = "Medic";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    backpack = "TACU_African_South_B_Medic";
    EDITORPREVIEW(TACU_African_South_U_B_Medic);
};

class TACU_African_South_U_B_Demolitions: TACU_African_South_U_B_Rifleman {
    displayName = "Demolitions";
    icon = "iconManExplosive";
    role = "Sapper";
    uniformClass = "TACU_African_South_Uniform_Combat_Fatigues_Rolled";
    backpack = "TACU_African_South_B_Demolitions";
    canDeactivateMines = 1;
    engineer = 1;
    EDITORPREVIEW(TACU_African_South_U_B_Demolitions);
};

class TACU_African_South_U_B_Grenadier: TACU_African_South_U_B_Rifleman {
    displayName = "Grenadier";
    role = "Grenadier";
    weapons[] = {
        "TACU_African_South_W_Green_XMS_GL",
        "TACU_African_South_W_Green_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_African_South_W_Green_XMS_GL",
        "TACU_African_South_W_Green_FNX",
        "Throw", "Put"
    };
    magazines[] = {
        mag_10("TACU_Magazine_30Rnd_STANAG"),
        mag_4("1Rnd_HE_Grenade_shell"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_10("TACU_Magazine_30Rnd_STANAG"),
        mag_4("1Rnd_HE_Grenade_shell"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_African_South_U_B_Grenadier);
};

class TACU_African_South_U_B_Autorifleman: TACU_African_South_U_B_Rifleman {
    displayName = "Autorifleman";
    icon = "iconManMG";
    role = "MachineGunner";
    weapons[] = {
        "TACU_African_South_W_Green_SW",
        "TACU_African_South_W_Green_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_African_South_W_Green_SW",
        "TACU_African_South_W_Green_FNX",
        "Throw", "Put"
    };
    magazines[] = {
        mag_7("TACU_Magazine_75Rnd_556_Surefire"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_7("TACU_Magazine_75Rnd_556_Surefire"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_African_South_U_B_Autorifleman);
};

class TACU_African_South_U_B_Machinegunner: TACU_African_South_U_B_Rifleman {
    displayName = "Machinegunner";
    icon = "iconManMG";
    role = "MachineGunner";
    uniformClass = "TACU_African_South_Uniform_Combat_Fatigues_Rolled";
    backpack = "TACU_African_South_B_MG";
    weapons[] = {
        "TACU_African_South_W_SPW",
        "TACU_African_South_W_Green_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_African_South_W_SPW",
        "TACU_African_South_W_Green_FNX",
        "Throw", "Put"
    };
    magazines[] = {
        mag_2("TACU_Magazine_200Rnd_556_Box"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_2("TACU_Magazine_200Rnd_556_Box"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_African_South_U_B_Machinegunner);
};

class TACU_African_South_U_B_Marksman: TACU_African_South_U_B_Rifleman {
    displayName = "Marksman";
    role = "Marksman";
    uniformClass = "TACU_African_South_Uniform_Combat_Fatigues_Rolled";
    weapons[] = {
        "TACU_African_South_W_SLR",
        "TACU_African_South_W_Green_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_African_South_W_SLR",
        "TACU_African_South_W_Green_FNX",
        "Throw", "Put"
    };
    magazines[] = {
        mag_11("TACU_Magazine_20Rnd_SLR"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_11("TACU_Magazine_20Rnd_SLR"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_African_South_U_B_Marksman);
};

class TACU_African_South_U_B_TL: TACU_African_South_U_B_Rifleman {
    displayName = "Team Leader";
    icon = "iconManLeader";
    weapons[] = {
        "TACU_African_South_W_Green_XMS_GL",
        "TACU_African_South_W_Green_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_African_South_W_Green_XMS_GL",
        "TACU_African_South_W_Green_FNX",
        "Throw", "Put"
    };
    magazines[] = {
        mag_11("TACU_Magazine_30Rnd_STANAG"),
        mag_4("1Rnd_HE_Grenade_shell"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_11("TACU_Magazine_30Rnd_STANAG"),
        mag_4("1Rnd_HE_Grenade_shell"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_African_South_U_B_TL);
};

class TACU_African_South_U_B_AT: TACU_African_South_U_B_Rifleman {
    displayName = "Rifleman (AT)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    backpack = "TACU_African_South_B_AT";
    weapons[] = {
        "launch_MRAWS_green_rail_F",
        "TACU_African_South_W_Green_XMS",
        "TACU_African_South_W_Green_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "launch_MRAWS_green_rail_F",
        "TACU_African_South_W_Green_XMS",
        "TACU_African_South_W_Green_FNX",
        "Throw", "Put"
    };
    magazines[] = {
        "MRAWS_HEAT_F",
        mag_12("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        "MRAWS_HEAT_F",
        mag_12("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_African_South_U_B_AT);
};

class TACU_African_South_U_B_AP: TACU_African_South_U_B_AT {
    displayName = "Rifleman (AP)";
    backpack = "TACU_African_South_B_AP";
    magazines[] = {
        "MRAWS_HE_F",
        mag_12("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        "MRAWS_HE_F",
        mag_12("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
};

class TACU_African_South_U_B_AA: TACU_African_South_U_B_Rifleman {
    displayName = "Rifleman (AA)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    uniformClass = "TACU_African_South_Uniform_Combat_Fatigues_Rolled";
    backpack = "TACU_African_South_B_AA";
    weapons[] = {
        "launch_B_Titan_tna_F",
        "TACU_African_South_W_Green_XMS",
        "TACU_African_South_W_Green_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "launch_B_Titan_tna_F",
        "TACU_African_South_W_Green_XMS",
        "TACU_African_South_W_Green_FNX",
        "Throw", "Put"
    };
    magazines[] = {
        "Titan_AA",
        mag_12("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        "Titan_AA",
        mag_12("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_African_South_U_B_AA);
};

class TACU_African_South_U_B_Sniper: TACU_African_South_U_B_Rifleman {
    displayName = "Sniper";
    uniformClass = "U_B_FullGhillie_lsh";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "V_Chestrig_oli"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "V_Chestrig_oli"};
    weapons[] = {
        "TACU_African_South_W_Green_M200",
        "TACU_African_South_W_Green_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_African_South_W_Green_M200",
        "TACU_African_South_W_Green_FNX",
        "Throw", "Put"
    };
    magazines[] = {
        mag_9("7Rnd_408_Mag"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_9("7Rnd_408_Mag"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_African_South_U_B_Sniper);
};

class TACU_African_South_U_B_Spotter: TACU_African_South_U_B_Rifleman {
    displayName = "Spotter";
    uniformClass = "U_B_FullGhillie_lsh";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "V_Chestrig_oli"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "V_Chestrig_oli"};
    weapons[] = {
        "TACU_African_South_W_Green_XMS",
        "TACU_African_South_W_Green_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_African_South_W_Green_XMS",
        "TACU_African_South_W_Green_FNX",
        "Throw", "Put"
    };
    magazines[] = {
        mag_12("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_12("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_African_South_U_B_Spotter);
};

class TACU_African_South_U_B_Pilot: TACU_African_South_U_B_Rifleman {
    displayName = "Pilot";
    uniformClass = "tacs_Uniform_HeliPilotCoverall_Green";
    backpack = "B_Parachute";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "H_PilotHelmetHeli_I_E",
        "V_Chestrig_oli"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "H_PilotHelmetHeli_I_E",
        "V_Chestrig_oli"
    };
    CBA_facewearList[] = {};
};
