class TACU_Proxy_China_U_O_Rifleman: TACU_Main_U_OPFOR_Soldier_Base {
    author = "Mike";
    displayName = "Rifleman";
    faction = "TACU_Proxy_China_O";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageCHI_F", "Head_Asian"};
    genericNames = "TACU_ChineseNames";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "TACU_Proxy_China_Uniform_Combat_Fatigues";
    items[] = {"NVGoggles"};
    respawnItems[] = {"NVGoggles"};
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_Eastern_Asia_Vest_Carrier_Rig",
        "tacs_Helmet_Modular_Coyote"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_Eastern_Asia_Vest_Carrier_Rig",
        "tacs_Helmet_Modular_Coyote"
    };
    weapons[] = {
        "TACU_Proxy_China_W_QBZ_ACO",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Proxy_China_W_QBZ_ACO",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_10("TACU_Magazine_30Rnd_QBZ"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_10("TACU_Magazine_30Rnd_QBZ"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    headgearList[] = {
        "tacs_Helmet_Modular_Coyote", 0.25,
        "tacs_Helmet_Modular_Chops_Coyote", 0.25,
        "tacs_Helmet_Modular_Ear_Coyote", 0.25,
        "tacs_Helmet_Modular_Headset_Coyote", 0.25
    };
    CBA_facewearList[] = {"", 1};
    //EDITORPREVIEW(TACU_Proxy_China_U_O_Rifleman);
};

class TACU_Proxy_China_U_O_Demolitions: TACU_Proxy_China_U_O_Rifleman {
    displayName = "Demolitions";
    icon = "iconManEngineer";
    role = "Sapper";
    canDeactivateMines = 1;
    backpack = "TACU_Proxy_China_B_Demolitions";
    //EDITORPREVIEW(TACU_Proxy_China_U_O_Demolitions);
};

class TACU_Proxy_China_U_O_Engineer: TACU_Proxy_China_U_O_Rifleman {
    displayName = "Engineer";
    icon = "iconManEngineer";
    role = "Sapper";
    engineer = 1;
    backpack = "TACU_Proxy_China_B_Engineer";
    //EDITORPREVIEW(TACU_Proxy_China_U_O_Engineer);
};

class TACU_Proxy_China_U_O_Grenadier: TACU_Proxy_China_U_O_Rifleman {
    displayName = "Grenadier";
    role = "Grenadier";
    weapons[] = {
        "TACU_Proxy_China_W_QBZ_GL_ACO",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Proxy_China_W_QBZ_GL_ACO",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_8("TACU_Magazine_30Rnd_QBZ"),
        mag_5("1Rnd_HE_Grenade_shell"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_8("TACU_Magazine_30Rnd_QBZ"),
        mag_5("1Rnd_HE_Grenade_shell"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("SmokeShell")
    };
    //EDITORPREVIEW(TACU_Proxy_China_U_O_Grenadier);
};

class TACU_Proxy_China_U_O_Marksman: TACU_Proxy_China_U_O_Rifleman {
    displayName = "Marksman";
    weapons[] = {
        "Binocular",
        "TACU_Proxy_China_W_QBU_DMS",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "Binocular",
        "TACU_Proxy_China_W_QBU_DMS",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_12("TACU_Magazine_20Rnd_QBU"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_12("TACU_Magazine_20Rnd_QBU"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    //EDITORPREVIEW(TACU_Proxy_China_U_O_Marksman);
};

class TACU_Proxy_China_U_O_Teamleader: TACU_Proxy_China_U_O_Rifleman {
    displayName = "Team Leader";
    icon = "iconManLeader";
    weapons[] = {
        "TACU_Proxy_China_W_QBZ_MRCO",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Proxy_China_W_QBZ_MRCO",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_10("TACU_Magazine_30Rnd_QBZ"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_10("TACU_Magazine_30Rnd_QBZ"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    //EDITORPREVIEW(TACU_Proxy_China_U_O_Teamleader);
};

class TACU_Proxy_China_U_O_Autorifleman: TACU_Proxy_China_U_O_Rifleman {
    displayName = "Autorifleman";
    icon = "iconManMG";
    role = "MachineGunner";
    backpack = "TACU_Proxy_China_B_Autorifleman";
    weapons[] = {
        "TACU_Proxy_China_W_QBZ_LSW_MRCO",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Proxy_China_W_QBZ_LSW_MRCO",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        "TACU_Magazine_100Rnd_QBZ",
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        "TACU_Magazine_100Rnd_QBZ",
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    //EDITORPREVIEW(TACU_Proxy_China_U_O_Autorifleman);
};

class TACU_Proxy_China_U_O_Machinegunner: TACU_Proxy_China_U_O_Rifleman {
    displayName = "Machinegunner";
    icon = "iconManMG";
    role = "MachineGunner";
    backpack = "TACU_Proxy_China_B_Machinegunner";
    weapons[] = {
        "TACU_Proxy_China_W_Negev_MRCO",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Proxy_China_W_Negev_MRCO",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        "TACU_Magazine_150Rnd_Negev",
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        "TACU_Magazine_150Rnd_Negev",
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    //EDITORPREVIEW(TACU_Proxy_China_U_O_Machinegunner);
};

class TACU_Proxy_China_U_O_Medic: TACU_Proxy_China_U_O_Rifleman {
    displayName = "Medic";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    backpack = "TACU_Proxy_China_B_Medic";
    //EDITORPREVIEW(TACU_Proxy_China_U_O_Medic);
};

class TACU_Proxy_China_U_O_AT: TACU_Proxy_China_U_O_Rifleman {
    displayName = "Rifleman (AT)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    backpack = "TACU_Proxy_China_B_AT";
    weapons[] = {
        "launch_RPG32_F",
        "TACU_Proxy_China_W_QBZ_ACO",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "launch_RPG32_F",
        "TACU_Proxy_China_W_QBZ_ACO",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        "RPG32_F",
        mag_10("TACU_Magazine_30Rnd_QBZ"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        "RPG32_F",
        mag_10("TACU_Magazine_30Rnd_QBZ"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    //EDITORPREVIEW(TACU_Proxy_China_U_O_AT);
};

class TACU_Proxy_China_U_O_AP: TACU_Proxy_China_U_O_Rifleman {
    displayName = "Rifleman (AP)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    backpack = "TACU_Proxy_China_B_AP";
    weapons[] = {
        "launch_RPG32_F",
        "TACU_Proxy_China_W_QBZ_ACO",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "launch_RPG32_F",
        "TACU_Proxy_China_W_QBZ_ACO",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        "RPG32_HE_F",
        mag_10("TACU_Magazine_30Rnd_QBZ"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        "RPG32_HE_F",
        mag_10("TACU_Magazine_30Rnd_QBZ"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    //EDITORPREVIEW(TACU_Proxy_China_U_O_AP);
};

class TACU_Proxy_China_U_O_Driver: TACU_Proxy_China_U_O_Rifleman {
    displayName = "Driver";
    //EDITORPREVIEW(TACU_Proxy_China_U_O_Driver);
};

class TACU_Proxy_China_U_O_Pilot: TACU_Proxy_China_U_O_Rifleman {
    displayName = "Pilot";
    uniformClass = "tacs_Uniform_HeliPilotCoverall_Sand";
    backpack = "B_Parachute";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "tacs_Helmet_PilotHeli_Tan",
        "TACU_Eastern_Asia_Vest_Carrier_Rig"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "tacs_Helmet_PilotHeli_Tan",
        "TACU_Eastern_Asia_Vest_Carrier_Rig"
    };
    weapons[] = {
        "arifle_CTAR_blk_F",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "arifle_CTAR_blk_F",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_4("TACU_Magazine_30Rnd_QBZ"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_4("TACU_Magazine_30Rnd_QBZ"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("SmokeShell")
    };
    headgearList[] = {"tacs_Helmet_PilotHeli_Tan", 1};
    //EDITORPREVIEW(TACU_Proxy_China_U_O_Pilot);
};

class TACU_Proxy_China_U_O_Sniper: TACU_Proxy_China_U_O_Rifleman {
    displayName = "Sniper";
    uniformClass = "U_O_FullGhillie_ard";
    weapons[] = {
        "Binocular",
        "TACU_Proxy_China_W_GM6_LRPS",
        "TACU_Proxy_China_W_Rook_Suppressed",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "Binocular",
        "TACU_Proxy_China_W_GM6_LRPS",
        "TACU_Proxy_China_W_Rook_Suppressed",
        "Throw", "Put"
    };
    magazines[] = {
        mag_6("ACE_5Rnd_127x99_Mag"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_6("ACE_5Rnd_127x99_Mag"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("SmokeShell")
    };
    //EDITORPREVIEW(TACU_Proxy_China_U_O_Sniper);
};
class TACU_Proxy_China_U_O_Spotter: TACU_Proxy_China_U_O_Rifleman {
    displayName = "Spotter";
    uniformClass = "U_O_FullGhillie_ard";
    weapons[] = {
        "Binocular",
        "TACU_Proxy_China_W_QBZ_MRCO",
        "TACU_Proxy_China_W_Rook_Suppressed",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "Binocular",
        "TACU_Proxy_China_W_QBZ_MRCO",
        "TACU_Proxy_China_W_Rook_Suppressed",
        "Throw", "Put"
    };
    magazines[] = {
        mag_10("TACU_Magazine_30Rnd_QBZ"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_10("TACU_Magazine_30Rnd_QBZ"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    //EDITORPREVIEW(TACU_Proxy_China_U_O_Spotter);
};
