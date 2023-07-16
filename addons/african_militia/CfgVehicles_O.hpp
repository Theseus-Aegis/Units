class TACU_African_Militia_U_O_Rifleman: TACU_Main_U_OPFOR_Soldier_Base {
    author = "Mike";
    displayName = "Rifleman (Galat)";
    faction = "TACU_African_Militia_O";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageFRE_F", "Head_African", "Head_Tanoan"};
    genericNames = "TACU_AfricanNames";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "U_I_C_Soldier_Para_1_F";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_lxWS_HarnessO_oli",
        "H_Booniehat_oli"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_lxWS_HarnessO_oli",
        "H_Booniehat_oli"
    };
    weapons[] = {"TACU_African_Militia_W_Galat", "Throw", "Put"};
    respawnWeapons[] = {"TACU_African_Militia_W_Galat", "Throw", "Put"};
    magazines[] = {mag_7("tacgt_AI_30Rnd_762x39_AK"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_7("tacgt_AI_30Rnd_762x39_AK"), mag_2("SmokeShell")};
    headgearList[] = {
        "H_Booniehat_khk", 8.3,
        "H_Booniehat_oli", 8.3,
        "H_Booniehat_tan", 8.3,
        "lxWS_H_Booniehat_desert", 8.3,
        "H_Shemag_olive", 8.3,
        "H_ShemagOpen_tan", 8.3,
        "lxWS_H_ssh40_green", 8.3,
        "lxWS_H_ssh40_sand", 8.3,
        "lxWS_H_ssh40_white", 8.3,
        "H_Bandanna_khk", 8.3,
        "H_Bandanna_camo", 8.3,
        "H_Beret_blk", 8.3,
        "lxWS_H_PASGT_goggles_UN_F", 0.05,
        "H_PASGT_basic_olive_F", 0.05,
        "H_PASGT_basic_white_F", 0.05
    };
    CBA_facewearList[] = {"", 0.95, "G_Aviator", 0.05};
    //EDITORPREVIEW(TACU_African_Militia_U_O_Rifleman);
};

class TACU_African_Militia_U_O_Rifleman_02: TACU_African_Militia_U_O_Rifleman {
    displayName = "Rifleman (SLR)";
    uniformClass = "U_lxWS_SFIA_deserter";
    weapons[] = {"TACU_African_Militia_W_SLR", "Throw", "Put"};
    respawnWeapons[] = {"TACU_African_Militia_W_SLR", "Throw", "Put"};
    magazines[] = {mag_6("20Rnd_762x51_slr_desert_lxWS"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("20Rnd_762x51_slr_desert_lxWS"), mag_2("SmokeShell")};
    //EDITORPREVIEW(TACU_African_Militia_U_O_Rifleman_02);
};

class TACU_African_Militia_U_O_Shotgunner: TACU_African_Militia_U_O_Rifleman {
    displayName = "Shotgunner";
    uniformClass = "U_SFIA_deserter_lxWS";
    weapons[] = {"sgun_HunterShotgun_01_F", "Throw", "Put"};
    respawnWeapons[] = {"sgun_HunterShotgun_01_F", "Throw", "Put"};
    magazines[] = {
        mag_12("2Rnd_12Gauge_Pellets"),
        mag_6("2Rnd_12Gauge_Pellets"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_12("2Rnd_12Gauge_Pellets"),
        mag_6("2Rnd_12Gauge_Pellets"),
        mag_2("SmokeShell")
    };
    //EDITORPREVIEW(TACU_African_Militia_U_O_Shotgunner);
};

class TACU_African_Militia_U_O_Medic: TACU_African_Militia_U_O_Rifleman {
    displayName = "Medic";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    uniformClass = "U_I_C_Soldier_Para_2_F";
    backpack = "TACU_African_Militia_B_Medic";
    weapons[] = {"TACU_African_Militia_W_SLR", "Throw", "Put"};
    respawnWeapons[] = {"TACU_African_Militia_W_SLR", "Throw", "Put"};
    magazines[] = {mag_6("20Rnd_762x51_slr_desert_lxWS"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("20Rnd_762x51_slr_desert_lxWS"), mag_2("SmokeShell")};
    //EDITORPREVIEW(TACU_African_Militia_U_O_Medic);
};

class TACU_African_Militia_U_O_Demolitions: TACU_African_Militia_U_O_Rifleman {
    displayName = "Demolitions Specialist";
    icon = "iconManExplosive";
    role = "Sapper";
    canDeactivateMines = 1;
    uniformClass = "U_I_C_Soldier_Para_3_F";
    backpack = "TACU_African_Militia_B_Demolitions";
    //EDITORPREVIEW(TACU_African_Militia_U_O_Demolitions);
};

class TACU_African_Militia_U_O_Grenadier: TACU_African_Militia_U_O_Rifleman {
    displayName = "Grenadier";
    role = "Grenadier";
    uniformClass = "U_I_C_Soldier_Para_4_F";
    weapons[] = {"TACU_African_Militia_W_SLR_GL", "Throw", "Put"};
    respawnWeapons[] = {"TACU_African_Militia_W_SLR_GL", "Throw", "Put"};
    magazines[] = {
        mag_6("20Rnd_762x51_slr_lxWS"),
        mag_4("1Rnd_40mm_HE_lxWS"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_6("20Rnd_762x51_slr_lxWS"),
        mag_4("1Rnd_40mm_HE_lxWS"),
        mag_2("SmokeShell")
    };
    //EDITORPREVIEW(TACU_African_Militia_U_O_Grenadier);
};

class TACU_African_Militia_U_O_Machinegunner: TACU_African_Militia_U_O_Rifleman {
    displayName = "Machinegunner";
    icon = "iconManMG";
    role = "MachineGunner";
    uniformClass = "U_I_C_Soldier_Para_3_F";
    backpack = "TACU_African_Militia_B_MG";
    weapons[] = {"TACU_African_Militia_W_SA77", "Throw", "Put"};
    respawnWeapons[] = {"TACU_African_Militia_W_SA77", "Throw", "Put"};
    magazines[] = {"100Rnd_762x51_S77_Red_lxWS", mag_2("SmokeShell")};
    respawnMagazines[] = {"100Rnd_762x51_S77_Red_lxWS", mag_2("SmokeShell")};
    //EDITORPREVIEW(TACU_African_Militia_U_O_Machinegunner);
};

class TACU_African_Militia_U_O_AT: TACU_African_Militia_U_O_Rifleman {
    displayName = "Missile Specialist (AT)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    backpack = "TACU_African_Militia_B_AT";
    weapons[] = {
        "launch_RPG7_F",
        "TACU_African_Militia_W_AK12U_Lush",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "launch_RPG7_F",
        "TACU_African_Militia_W_AK12U_Lush",
        "Throw", "Put"
    };
    magazines[] = {
        "RPG7_F",
        mag_5("tacgt_AI_30Rnd_762x39_AK"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        "RPG7_F",
        mag_5("tacgt_AI_30Rnd_762x39_AK"),
        mag_2("SmokeShell")
    };
    //EDITORPREVIEW(TACU_African_Militia_U_O_AT);
};

class TACU_African_Militia_U_O_Repair: TACU_African_Militia_U_O_Rifleman {
    displayName = "Engineer";
    icon = "iconManEngineer";
    engineer = 1;
    uniformClass = "U_I_C_Soldier_Para_2_F";
    backpack = "TACU_African_Militia_B_Engineer";
    weapons[] = {"TACU_African_Militia_W_AK12", "Throw", "Put"};
    respawnWeapons[] = {"TACU_African_Militia_W_AK12", "Throw", "Put"};
    magazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_2("SmokeShell")};
    //EDITORPREVIEW(TACU_African_Militia_U_O_Repair);
};

class TACU_African_Militia_U_O_Marksman: TACU_African_Militia_U_O_Rifleman {
    displayName = "Marksman";
    role = "Marksman";
    uniformClass = "U_I_C_Soldier_Para_5_F";
    weapons[] = {"TACU_African_Militia_W_VS121", "Throw", "Put"};
    respawnWeapons[] = {"TACU_African_Militia_W_VS121", "Throw", "Put"};
    magazines[] = {mag_7("10Rnd_762x54_Mag"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_7("10Rnd_762x54_Mag"), mag_2("SmokeShell")};
    //EDITORPREVIEW(TACU_African_Militia_U_O_Marksman);
};

class TACU_African_Militia_U_O_Teamleader: TACU_African_Militia_U_O_Rifleman {
    displayName = "Team Leader";
    icon = "iconManLeader";
    uniformClass = "U_I_C_Soldier_Camo_F";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_lxWS_TacVestIR_oli",
        "H_Booniehat_oli"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_lxWS_TacVestIR_oli",
        "H_Booniehat_oli"
    };
    weapons[] = {"TACU_African_Militia_W_SLR", "Throw", "Put"};
    respawnWeapons[] = {"TACU_African_Militia_W_SLR", "Throw", "Put"};
    magazines[] = {mag_7("20Rnd_762x51_slr_desert_lxWS"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_7("20Rnd_762x51_slr_desert_lxWS"), mag_2("SmokeShell")};
    //EDITORPREVIEW(TACU_African_Militia_U_O_Teamleader);
};
