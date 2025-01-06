class TACU_African_North_U_B_Rifleman: TACU_Main_U_BLUFOR_Soldier_Base {
    author = "Mike";
    displayName = "Rifleman";
    faction = "TACU_African_North_B";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageFRE_F", "Head_African", "Head_Tanoan"};
    genericNames = "TACU_AfricanNames";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "U_lxWS_SFIA_soldier_2_O";
    items[] = {"NVGoggles_INDEP"};
    respawnItems[] = {"NVGoggles_INDEP"};
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_lxWS_TacVestIR_oli",
        "lxWS_H_ssh40_green"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_lxWS_TacVestIR_oli",
        "lxWS_H_ssh40_green"
    };
    weapons[] = {
        "TACU_African_North_W_VelkoR4",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_African_North_W_VelkoR4",
        "Throw", "Put"
    };
    magazines[] = {
        mag_11("TACU_Magazine_35Rnd_R4"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_11("TACU_Magazine_35Rnd_R4"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    headgearList[] = {"lxWS_H_ssh40_green"};
    CBA_facewearList[] = {};
    EDITORPREVIEW(TACU_African_North_U_B_Rifleman);
};

class TACU_African_North_U_B_Medic: TACU_African_North_U_B_Rifleman {
    displayName = "Medic";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    backpack = "TACU_African_North_B_Medic";
    weapons[] = {
        "TACU_African_North_W_VelkoR5",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_African_North_W_VelkoR5",
        "Throw", "Put"
    };
    magazines[] = {
        mag_11("TACU_Magazine_35Rnd_R4"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_11("TACU_Magazine_35Rnd_R4"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    EDITORPREVIEW(TACU_African_North_U_B_Medic);
};
class TACU_African_North_U_B_Crewman: TACU_African_North_U_B_Rifleman {
    displayName = "Crewman";
    role = "Crewman";
    uniformClass = "U_lxWS_SFIA_Tanker_O";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_BandollierB_blk",
        "lxWS_H_Tank_tan_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_BandollierB_blk",
        "lxWS_H_Tank_tan_F"
    };
    weapons[] = {
        "TACU_African_North_W_VelkoR5",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_African_North_W_VelkoR5",
        "Throw", "Put"
    };
    magazines[] = {
        mag_5("TACU_Magazine_35Rnd_R4"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_5("TACU_Magazine_35Rnd_R4"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    headgearList[] = {"lxWS_H_Tank_tan_F"};
    EDITORPREVIEW(TACU_African_North_U_B_Crewman);
};
class TACU_African_North_U_B_Demolitions: TACU_African_North_U_B_Rifleman {
    displayName = "Demolitions Specialist";
    icon = "iconManExplosive";
    role = "Sapper";
    backpack = "TACU_African_North_B_Demolitions";
    canDeactivateMines = 1;
    weapons[] = {
        "TACU_African_North_W_VelkoR4",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_African_North_W_VelkoR4",
        "Throw", "Put"
    };
    magazines[] = {
        mag_11("TACU_Magazine_35Rnd_R4"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_11("TACU_Magazine_35Rnd_R4"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    EDITORPREVIEW(TACU_African_North_U_B_Demolitions);
};
class TACU_African_North_U_B_Grenadier: TACU_African_North_U_B_Rifleman {
    displayName = "Grenadier";
    role = "Grenadier";
    weapons[] = {
        "TACU_African_North_W_VelkoR5_GL",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_African_North_W_VelkoR5_GL",
        "Throw", "Put"
    };
    magazines[] = {
        mag_10("TACU_Magazine_35Rnd_R4"),
        mag_6("1Rnd_HE_Grenade_shell"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_10("TACU_Magazine_35Rnd_R4"),
        mag_6("1Rnd_HE_Grenade_shell"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    EDITORPREVIEW(TACU_African_North_U_B_Grenadier);
};
class TACU_African_North_U_B_Machinegunner: TACU_African_North_U_B_Rifleman {
    displayName = "Machinegunner";
    icon = "iconManMG";
    role = "MachineGunner";
    uniformClass = "U_lxWS_SFIA_soldier_1_O";
    weapons[] = {
        "TACU_African_North_W_SA77_MG",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_African_North_W_SA77_MG",
        "Throw", "Put"
    };
    magazines[] = {
        mag_4("TACU_Magazine_100Rnd_762_SA77"),
        mag_2("SmokeShell"),
        mag_2("MiniGrenade")
    };
    respawnMagazines[] = {
        mag_4("TACU_Magazine_100Rnd_762_SA77"),
        mag_2("SmokeShell"),
        mag_2("MiniGrenade")
    };
    EDITORPREVIEW(TACU_African_North_U_B_Machinegunner);
};
class TACU_African_North_U_B_AT: TACU_African_North_U_B_Rifleman {
    displayName = "Missile Specialist (AT)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    backpack = "TACU_African_North_B_AT";
    weapons[] = {
        "TACU_African_North_W_VelkoR4",
        "launch_RPG32_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_African_North_W_VelkoR4",
        "launch_RPG32_green_F",
        "Throw", "Put"
    };
    magazines[] = {
        "RPG32_F",
        mag_11("TACU_Magazine_35Rnd_R4"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        "RPG32_F",
        mag_11("TACU_Magazine_35Rnd_R4"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    EDITORPREVIEW(TACU_African_North_U_B_AT);
};
class TACU_African_North_U_B_AP: TACU_African_North_U_B_AT {
    displayName = "Missile Specialist (AP)";
    TACU_isAP = 1;
    backpack = "TACU_African_North_B_AP";
    magazines[] = {
        "RPG32_HE_F",
        mag_11("TACU_Magazine_35Rnd_R4"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        "RPG32_HE_F",
        mag_11("TACU_Magazine_35Rnd_R4"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
};
class TACU_African_North_U_B_AA: TACU_African_North_U_B_Rifleman {
    displayName = "Missile Specialist (AA)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    backpack = "TACU_African_North_B_AA";
    weapons[] = {
        "TACU_African_North_W_VelkoR4",
        "launch_B_Titan_olive_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_African_North_W_VelkoR4",
        "launch_B_Titan_olive_F",
        "Throw", "Put"
    };
    magazines[] = {
        "Titan_AA",
        mag_11("TACU_Magazine_35Rnd_R4"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        "Titan_AA",
        mag_11("TACU_Magazine_35Rnd_R4"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    EDITORPREVIEW(TACU_African_North_U_B_AA);
};
class TACU_African_North_U_B_Officer: TACU_African_North_U_B_Rifleman {
    displayName = "Officer";
    icon = "iconManOfficer";
    uniformClass = "U_lxWS_SFIA_Officer_1_O";
    weapons[] = {
        "TACU_African_North_W_VelkoR4",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_African_North_W_VelkoR4",
        "Throw", "Put"
    };
    magazines[] = {
        mag_11("TACU_Magazine_35Rnd_R4"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_11("TACU_Magazine_35Rnd_R4"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    EDITORPREVIEW(TACU_African_North_U_B_Officer);
};

class TACU_African_North_U_B_Pilot: TACU_African_North_U_B_Rifleman {
    displayName = "Pilot";
    uniformClass = "U_lxWS_SFIA_pilot_O";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_BandollierB_oli",
        "H_PilotHelmetHeli_O"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_BandollierB_oli",
        "H_PilotHelmetHeli_O"
    };
    weapons[] = {
        "TACU_African_North_W_VelkoR5",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_African_North_W_VelkoR5",
        "Throw", "Put"
    };
    magazines[] = {
        mag_3("TACU_Magazine_35Rnd_R4"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_3("TACU_Magazine_35Rnd_R4"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_African_North_U_B_Pilot);
};

class TACU_African_North_U_B_Repair: TACU_African_North_U_B_Rifleman {
    displayName = "Engineer";
    icon = "iconManEngineer";
    backpack = "TACU_African_North_B_Repair";
    engineer = 1;
    weapons[] = {
        "TACU_African_North_W_VelkoR5",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_African_North_W_VelkoR5",
        "Throw", "Put"
    };
    magazines[] = {
        mag_11("TACU_Magazine_35Rnd_R4"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_11("TACU_Magazine_35Rnd_R4"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    EDITORPREVIEW(TACU_African_North_U_B_Repair);
};
class TACU_African_North_U_B_Marksman: TACU_African_North_U_B_Rifleman {
    displayName = "Marksman";
    role = "Marksman";
    uniformClass = "U_lxWS_SFIA_soldier_1_O";
    weapons[] = {
        "TACU_African_North_W_SLR_Marksman",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_African_North_W_SLR_Marksman",
        "Throw", "Put"
    };
    magazines[] = {
        mag_11("TACU_Magazine_20Rnd_SLR"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_11("TACU_Magazine_20Rnd_SLR"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    EDITORPREVIEW(TACU_African_North_U_B_Marksman);
};
class TACU_African_North_U_B_Teamleader: TACU_African_North_U_B_Rifleman {
    displayName = "Team Leader";
    icon = "iconManLeader";
    uniformClass = "U_lxWS_SFIA_Officer_1_O";
    weapons[] = {
        "TACU_African_North_W_VelkoR5_GL",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_African_North_W_VelkoR5_GL",
        "Throw", "Put"
    };
    magazines[] = {
        mag_10("TACU_Magazine_35Rnd_R4"),
        mag_6("1Rnd_HE_Grenade_shell"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_10("TACU_Magazine_35Rnd_R4"),
        mag_6("1Rnd_HE_Grenade_shell"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    EDITORPREVIEW(TACU_African_North_U_B_Teamleader);
};
