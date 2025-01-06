class TACU_Territorial_Defence_U_O_Rifleman_Arid: TACU_Main_U_OPFOR_Soldier_Base {
    author = "Mike";
    editorSubcategory = "TACU_Territorial_Defence_EdSubCat_Arid";
    displayName = "Rifleman 01";
    faction = "TACU_Territorial_Defence_O";
    genericNames = "TACU_RussianNames";
    icon = "iconMan";
    identityTypes[] = {"LanguageRUS_F", "Head_Asian", "Head_Euro", "Head_Russian"};
    role = "Rifleman";
    scope = 2;
    scopeCurator = 2;
    uniformClass = "CUP_U_O_SLA_Desert";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "CUP_V_O_SLA_6B3_3_DES",
        "CUP_H_RUS_6B47_desert"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "CUP_V_O_SLA_6B3_3_DES",
        "CUP_H_RUS_6B47_desert"
    };
    weapons[] = {
        "TACU_Territorial_Defence_AK103_OKP7",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Territorial_Defence_AK103_OKP7",
        "Throw", "Put"
    };
    magazines[] = {
        mag_8("TACU_Magazine_30Rnd_762_AK"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_8("TACU_Magazine_30Rnd_762_AK"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    headgearList[] = {
        "CUP_H_RUS_6B47_desert", 0.25,
        "CUP_H_RUS_6B47_goggles_desert", 0.25,
        "CUP_H_RUS_6B47_headset_goggles_desert", 0.25,
        "CUP_H_RUS_6B47_headset_desert", 0.25
    };
    EDITORPREVIEW(TACU_Territorial_Defence_U_O_Rifleman_Arid);
};
class TACU_Territorial_Defence_U_O_Rifleman02_Arid: TACU_Territorial_Defence_U_O_Rifleman_Arid {
    displayName = "Rifleman 02";
    weapons[] = {
        "TACU_Territorial_Defence_AK105_Kobra",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Territorial_Defence_AK105_Kobra",
        "Throw", "Put"
    };
    magazines[] = {
        mag_10("TACU_Magazine_30Rnd_545_AK"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_10("TACU_Magazine_30Rnd_545_AK"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Territorial_Defence_U_O_Rifleman02_Arid);
};
class TACU_Territorial_Defence_U_O_AT_Arid: TACU_Territorial_Defence_U_O_Rifleman_Arid {
    backpack = "TACU_Territorial_Defence_RPGPack";
    displayName = "Rifleman (AT)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    weapons[] = {
        "launch_RPG7_F",
        "TACU_Territorial_Defence_AK105_Kobra",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "launch_RPG7_F",
        "TACU_Territorial_Defence_AK105_Kobra",
        "Throw", "Put"
    };
    magazines[] = {
        "RPG7_F",
        mag_10("TACU_Magazine_30Rnd_545_AK"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        "RPG7_F",
        mag_10("TACU_Magazine_30Rnd_545_AK"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Territorial_Defence_U_O_AT_Arid);
};
class TACU_Territorial_Defence_U_O_Autorifleman_Arid: TACU_Territorial_Defence_U_O_Rifleman_Arid {
    backpack = "TACU_Territorial_Defence_MG_AlicePack";
    displayName = "Autorifleman";
    icon = "iconManMG";
    role = "MachineGunner";
    weapons[] = {
        "TACU_Territorial_Defence_RPK_1P63",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Territorial_Defence_RPK_1P63",
        "Throw", "Put"
    };
    magazines[] = {
        "TACU_Magazine_75Rnd_762_AK",
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        "TACU_Magazine_75Rnd_762_AK",
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Territorial_Defence_U_O_Autorifleman_Arid);
};
class TACU_Territorial_Defence_U_O_Grenadier_Arid: TACU_Territorial_Defence_U_O_Rifleman_Arid {
    displayName = "Grenadier";
    role = "Grenadier";
    weapons[] = {
        "TACU_Territorial_Defence_AK103GL_OKP7",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Territorial_Defence_AK103GL_OKP7",
        "Throw", "Put"
    };
    magazines[] = {
        mag_8("TACU_Magazine_30Rnd_762_AK"),
        mag_6("CUP_1Rnd_HE_GP25_M"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_8("TACU_Magazine_30Rnd_762_AK"),
        mag_6("CUP_1Rnd_HE_GP25_M"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Territorial_Defence_U_O_Grenadier_Arid);
};
class TACU_Territorial_Defence_U_O_Engineer_Arid: TACU_Territorial_Defence_U_O_Rifleman_Arid {
    backpack = "TACU_Territorial_Defence_Engineer_AlicePack";
    displayName = "Engineer";
    engineer = 1;
    icon = "iconManEngineer";
    role = "Sapper";
    uavHacker = 1;
    EDITORPREVIEW(TACU_Territorial_Defence_U_O_Engineer_Arid);
};
class TACU_Territorial_Defence_U_O_Medic_Arid: TACU_Territorial_Defence_U_O_Rifleman_Arid {
    attendant = 1;
    backpack = "TACU_Territorial_Defence_Medic_AlicePack";
    displayName = "Medic";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    EDITORPREVIEW(TACU_Territorial_Defence_U_O_Medic_Arid);
};
class TACU_Territorial_Defence_U_O_Demolitions_Arid: TACU_Territorial_Defence_U_O_Rifleman_Arid {
    backpack = "TACU_Territorial_Defence_Demolitions_AlicePack";
    canDeactivateMines = 1;
    displayName = "Demolitions";
    engineer = 1;
    icon = "iconManExplosive";
    role = "Sapper";
    uavHacker = 1;
    EDITORPREVIEW(TACU_Territorial_Defence_U_O_Demolitions_Arid);
};
class TACU_Territorial_Defence_U_O_Marksman_Arid: TACU_Territorial_Defence_U_O_Rifleman_Arid {
    displayName = "Marksman (VSS)";
    icon = "iconManRecon";
    role = "Marksman";
    weapons[] = {
        "CUP_srifle_VSSVintorez_pso",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "CUP_srifle_VSSVintorez_pso",
        "Throw", "Put"
    };
    magazines[] = {
        mag_7("CUP_20Rnd_9x39_SP5_VSS_M"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_7("CUP_20Rnd_9x39_SP5_VSS_M"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Territorial_Defence_U_O_Marksman_Arid);
};
class TACU_Territorial_Defence_U_O_Marksman02_Arid: TACU_Territorial_Defence_U_O_Marksman_Arid {
    displayName = "Marksman (SVD)";
    weapons[] = {
        "CUP_srifle_SVD_pso",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "CUP_srifle_SVD_pso",
        "Throw", "Put"
    };
    magazines[] = {
        mag_7("CUP_10Rnd_762x54_SVD_M"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_7("CUP_10Rnd_762x54_SVD_M"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Territorial_Defence_U_O_Marksman02_Arid);
};
class TACU_Territorial_Defence_U_O_SquadLeader_Arid: TACU_Territorial_Defence_U_O_Rifleman_Arid {
    displayName = "Squad Leader";
    icon = "iconManLeader";
    weapons[] = {
        "Binocular",
        "TACU_Territorial_Defence_AK103GL_OKP7",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "Binocular",
        "TACU_Territorial_Defence_AK103GL_OKP7",
        "Throw", "Put"
    };
    magazines[] = {
        mag_8("TACU_Magazine_30Rnd_762_AK"),
        mag_6("CUP_1Rnd_HE_GP25_M"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_8("TACU_Magazine_30Rnd_762_AK"),
        mag_6("CUP_1Rnd_HE_GP25_M"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Territorial_Defence_U_O_SquadLeader_Arid);
};
class TACU_Territorial_Defence_U_O_TeamLeader_Arid: TACU_Territorial_Defence_U_O_Rifleman_Arid {
    displayName = "Team Leader";
    icon = "iconManLeader";
    weapons[] = {
        "Binocular",
        "TACU_Territorial_Defence_AK105_Kobra",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "Binocular",
        "TACU_Territorial_Defence_AK105_Kobra",
        "Throw", "Put"
    };
    magazines[] = {
        mag_10("TACU_Magazine_30Rnd_545_AK"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_10("TACU_Magazine_30Rnd_545_AK"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Territorial_Defence_U_O_TeamLeader_Arid);
};
class TACU_Territorial_Defence_U_O_Crewman_Arid: TACU_Territorial_Defence_U_O_Rifleman_Arid {
    displayName = "Crewman";
};
class TACU_Territorial_Militia_U_O_Pilot_Arid;
class TACU_Territorial_Defence_U_O_Pilot_Arid: TACU_Territorial_Militia_U_O_Pilot_Arid {
    editorSubcategory = "TACU_Territorial_Defence_EdSubCat_Arid";
    faction = "TACU_Territorial_Defence_O";
};
