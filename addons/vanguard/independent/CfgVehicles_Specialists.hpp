class TACU_Vanguard_U_I_Specialist_Rifleman: TACU_Main_U_INDEP_Soldier_Base {
    author = "Mike";
    displayName = "Rifleman";
    faction = "TACU_Vanguard_I";
    editorSubcategory = "TACU_Vanguard_EdSubCat_Specialists";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageENG_F", "Head_NATO", "G_NATO_default"};
    genericNames = "NATOMen";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "tacs_Uniform_Garment_LS_BS_BP_BB";
    items[] = {"NVGogglesB_blk_F"};
    respawnItems[] = {"NVGogglesB_blk_F"};
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "tacs_Helmet_Enc_Ballistic_DarkBlack",
        "V_PlateCarrier2_blk",
        "G_Balaclava_blk"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "tacs_Helmet_Enc_Ballistic_DarkBlack",
        "V_PlateCarrier2_blk",
        "G_Balaclava_blk"
    };
    weapons[] = {
        "TACU_Vanguard_W_Specialists_MX",
        "TACU_Vanguard_W_Specialists_Rook",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Vanguard_W_Specialists_MX",
        "TACU_Vanguard_W_Specialists_Rook",
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
    headgearList[] = {
        "tacs_Helmet_Enc_Ballistic_DarkBlack", 1
    };
    CBA_facewearList[] = {
        "G_Balaclava_blk", 1
    };
    EDITORPREVIEW(TACU_Vanguard_U_I_Specialist_Rifleman);
};

class TACU_Vanguard_U_I_Specialist_Rifleman_AT: TACU_Vanguard_U_I_Specialist_Rifleman {
    displayName = "Rifleman (AT)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    weapons[] = {
        "launch_NLAW_F",
        "TACU_Vanguard_W_Specialists_MX",
        "TACU_Vanguard_W_Specialists_Rook",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "launch_NLAW_F",
        "TACU_Vanguard_W_Specialists_MX",
        "TACU_Vanguard_W_Specialists_Rook",
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
    EDITORPREVIEW(TACU_Vanguard_U_I_Specialist_Rifleman_AT);
};

class TACU_Vanguard_U_I_Specialist_Grenadier: TACU_Vanguard_U_I_Specialist_Rifleman {
    displayName = "Grenadier";
    icon = "iconMan";
    role = "Grenadier";
    weapons[] = {
        "TACU_Vanguard_W_Specialists_MXGL",
        "TACU_Vanguard_W_Specialists_Rook",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Vanguard_W_Specialists_MXGL",
        "TACU_Vanguard_W_Specialists_Rook",
        "Throw", "Put"
    };
    magazines[] = {
        mag_7("TACU_Magazine_30Rnd_MX"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_3("1Rnd_HE_Grenade_shell"),
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_7("TACU_Magazine_30Rnd_MX"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_3("1Rnd_HE_Grenade_shell"),
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Vanguard_U_I_Specialist_Grenadier);
};

class TACU_Vanguard_U_I_Specialist_Marksman: TACU_Vanguard_U_I_Specialist_Rifleman {
    displayName = "Marksman";
    role = "Marksman";
    weapons[] = {
        "TACU_Vanguard_W_Specialists_MXM",
        "TACU_Vanguard_W_Specialists_Rook",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Vanguard_W_Specialists_MXM",
        "TACU_Vanguard_W_Specialists_Rook",
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
    EDITORPREVIEW(TACU_Vanguard_U_I_Specialist_Marksman);
};

class TACU_Vanguard_U_I_Specialist_Driver: TACU_Vanguard_U_I_Specialist_Rifleman {
    displayName = "Driver";
    role = "Crewman";
    weapons[] = {
        "TACU_Vanguard_W_Specialists_MXC",
        "TACU_Vanguard_W_Specialists_Rook",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Vanguard_W_Specialists_MXC",
        "TACU_Vanguard_W_Specialists_Rook",
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
    EDITORPREVIEW(TACU_Vanguard_U_I_Specialist_Driver);
};

class TACU_Vanguard_U_I_Specialist_TeamLeader: TACU_Vanguard_U_I_Specialist_Rifleman {
    displayName = "Team Leader";
    icon = "iconManLeader";
    weapons[] = {
        "TACU_Vanguard_W_Specialists_ARX",
        "TACU_Vanguard_W_Specialists_Rook",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Vanguard_W_Specialists_ARX",
        "TACU_Vanguard_W_Specialists_Rook",
        "Throw", "Put"
    };
    magazines[] = {
        "10Rnd_50BW_Mag_F",
        mag_7("TACU_Magazine_30Rnd_Katiba"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    respawnMagazines[] = {
        "10Rnd_50BW_Mag_F",
        mag_7("TACU_Magazine_30Rnd_Katiba"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Vanguard_U_I_Specialist_TeamLeader);
};

class TACU_Vanguard_U_I_Specialist_Autorifleman: TACU_Vanguard_U_I_Specialist_Rifleman {
    displayName = "Autorifleman";
    icon = "iconManMG";
    role = "MachineGunner";
    weapons[] = {
        "TACU_Vanguard_W_Specialists_MXSW",
        "TACU_Vanguard_W_Specialists_Rook",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Vanguard_W_Specialists_MXSW",
        "TACU_Vanguard_W_Specialists_Rook",
        "Throw", "Put"
    };
    magazines[] = {
        mag_4("TACU_Magazine_100Rnd_MX"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_4("TACU_Magazine_100Rnd_MX"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Vanguard_U_I_Specialist_Autorifleman);
};

class TACU_Vanguard_U_I_Specialist_Medic: TACU_Vanguard_U_I_Specialist_Rifleman {
    displayName = "Medic";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    backpack = "TACU_Vanguard_B_Medic_AssaultPack_Black";
    weapons[] = {
        "TACU_Vanguard_W_Specialists_MXC",
        "TACU_Vanguard_W_Specialists_Rook",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Vanguard_W_Specialists_MXC",
        "TACU_Vanguard_W_Specialists_Rook",
        "Throw", "Put"
    };
    magazines[] = {
        mag_7("TACU_Magazine_30Rnd_MX"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("SmokeShell"),
        "HandGrenade"
    };
    respawnMagazines[] = {
        mag_7("TACU_Magazine_30Rnd_MX"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("SmokeShell"),
        "HandGrenade"
    };
    EDITORPREVIEW(TACU_Vanguard_U_I_Specialist_Medic);
};
