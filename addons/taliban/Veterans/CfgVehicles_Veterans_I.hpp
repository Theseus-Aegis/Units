// Taliban - Veteran Units
class TACU_Taliban_Veterans_U_I_Rifleman_01: TACU_Main_U_INDEP_Soldier_Base {
    author = "Mike";
    displayName = "Rifleman (Galat)";
    faction = "TACU_Taliban_Veterans_I";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguagePER_F", "Head_TK", "NoGlasses"};
    genericNames = "TACU_TalibanNames";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "U_lxWS_Djella_02_Brown";
    items[] = {};
    respawnItems[] = {};
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_lxWS_TacVestIR_oli",
        "lxWS_H_turban_03_black"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_lxWS_TacVestIR_oli",
        "lxWS_H_turban_03_black"
    };
    weapons[] = {
        "TACU_Taliban_Veterans_W_Galat",
        "CUP_hgun_M9",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Taliban_Veterans_W_Galat",
        "CUP_hgun_M9",
        "Throw", "Put"
    };
    magazines[] = {
        mag_6("tacgt_AI_30Rnd_762x39_AK"),
        mag_2("tacgt_AI_15Rnd_9x19_M9"),
        "HandGrenade",
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_6("tacgt_AI_30Rnd_762x39_AK"),
        mag_2("tacgt_AI_15Rnd_9x19_M9"),
        "HandGrenade",
        "SmokeShell"
    };
    headgearList[] = {
        "lxWS_H_turban_03_black", 0.0625,
        "lxWS_H_turban_03_blue", 0.0625,
        "lxWS_H_turban_03_green", 0.0625,
        "lxWS_H_turban_03_green_pattern", 0.0625,
        "lxWS_H_turban_03_sand", 0.0625,
        "lxWS_H_turban_03_gray", 0.0625,
        "lxWS_H_turban_02_black", 0.0625,
        "lxWS_H_turban_02_blue", 0.0625,
        "lxWS_H_turban_02_green", 0.0625,
        "lxWS_H_turban_02_green_pattern", 0.0625,
        "lxWS_H_turban_02_sand", 0.0625,
        "lxWS_H_turban_02_gray", 0.0625,
        "H_PASGT_basic_olive_F", 0.0625,
        "H_turban_02_mask_snake_lxws", 0.0625,
        "H_turban_02_mask_black_lxws", 0.0625,
        "H_HelmetB_light_sand", 0.0625
    };
    CBA_facewearList[] = {};
    EDITORPREVIEW(TACU_Taliban_Veterans_U_I_Rifleman_01);
};

class TACU_Taliban_Veterans_U_I_Rifleman_02: TACU_Taliban_Veterans_U_I_Rifleman_01 {
    displayName = "Rifleman (R4)";
    uniformClass = "U_lxWS_Djella_02_Grey";
    weapons[] = {
        "TACU_Taliban_Veterans_W_R4",
        "CUP_hgun_M9",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Taliban_Veterans_W_R4",
        "CUP_hgun_M9",
        "Throw", "Put"
    };
    magazines[] = {
        mag_6("tacgt_AI_35Rnd_556x45_R4"),
        mag_2("tacgt_AI_15Rnd_9x19_M9"),
        "HandGrenade",
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_6("tacgt_AI_35Rnd_556x45_R4"),
        mag_2("tacgt_AI_15Rnd_9x19_M9"),
        "HandGrenade",
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Taliban_Veterans_U_I_Rifleman_02);
};

class TACU_Taliban_Veterans_U_I_Rifleman_03: TACU_Taliban_Veterans_U_I_Rifleman_01 {
    displayName = "Rifleman (SLR)";
    uniformClass = "U_lxWS_Djella_03_Green";
    weapons[] = {
        "TACU_Taliban_Veterans_W_SLR_Wood",
        "CUP_hgun_M9",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Taliban_Veterans_W_SLR_Wood",
        "CUP_hgun_M9",
        "Throw", "Put"
    };
    magazines[] = {
        mag_6("20Rnd_762x51_slr_lxWS"),
        mag_2("tacgt_AI_15Rnd_9x19_M9"),
        "HandGrenade",
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_6("20Rnd_762x51_slr_lxWS"),
        mag_2("tacgt_AI_15Rnd_9x19_M9"),
        "HandGrenade",
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Taliban_Veterans_U_I_Rifleman_03);
};

class TACU_Taliban_Veterans_U_I_Leader: TACU_Taliban_Veterans_U_I_Rifleman_01 {
    displayName = "Leader";
    icon = "iconManLeader";
    uniformClass = "U_lxWS_Djella_02_Sand";
    weapons[] = {
        "TACU_Taliban_Veterans_W_R5_GL",
        "CUP_hgun_M9",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Taliban_Veterans_W_R5_GL",
        "CUP_hgun_M9",
        "Throw", "Put"
    };
    magazines[] = {
        mag_6("tacgt_AI_35Rnd_556x45_R4"),
        mag_4("1Rnd_HE_Grenade_shell"),
        mag_2("tacgt_AI_15Rnd_9x19_M9"),
        "HandGrenade",
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_6("tacgt_AI_35Rnd_556x45_R4"),
        mag_4("1Rnd_HE_Grenade_shell"),
        mag_2("tacgt_AI_15Rnd_9x19_M9"),
        "HandGrenade",
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Taliban_Veterans_U_I_Leader);
};

class TACU_Taliban_Veterans_U_I_Grenadier: TACU_Taliban_Veterans_U_I_Rifleman_01 {
    displayName = "Grenadier";
    role = "Grenadier";
    weapons[] = {
        "TACU_Taliban_Veterans_W_SLR_GL_Wood",
        "CUP_hgun_M9",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Taliban_Veterans_W_SLR_GL_Wood",
        "CUP_hgun_M9",
        "Throw", "Put"
    };
    magazines[] = {
        mag_6("20Rnd_762x51_slr_lxWS"),
        mag_4("1Rnd_40mm_HE_lxWS"),
        mag_2("tacgt_AI_15Rnd_9x19_M9"),
        "HandGrenade",
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_6("20Rnd_762x51_slr_lxWS"),
        mag_4("1Rnd_40mm_HE_lxWS"),
        mag_2("tacgt_AI_15Rnd_9x19_M9"),
        "HandGrenade",
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Taliban_Veterans_U_I_Grenadier);
};

class TACU_Taliban_Veterans_U_I_Medic: TACU_Taliban_Veterans_U_I_Rifleman_01 {
    displayName = "Medic";
    uniformClass = "U_lxWS_Djella_03_Green";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    backpack = "TACU_Taliban_Militia_B_Medic";
    weapons[] = {
        "TACU_Taliban_Veterans_W_Galat",
        "CUP_hgun_M9",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Taliban_Veterans_W_Galat",
        "CUP_hgun_M9",
        "Throw", "Put"
    };
    magazines[] = {
        mag_6("tacgt_AI_30Rnd_762x39_AK"),
        mag_2("tacgt_AI_15Rnd_9x19_M9"),
        "HandGrenade",
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_6("tacgt_AI_30Rnd_762x39_AK"),
        mag_2("tacgt_AI_15Rnd_9x19_M9"),
        "HandGrenade",
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Taliban_Veterans_U_I_Medic);
};

class TACU_Taliban_Veterans_U_I_Demolitions: TACU_Taliban_Veterans_U_I_Rifleman_01 {
    displayName = "Demolitions";
    uniformClass = "U_lxWS_Djella_02_Sand";
    icon = "iconManEngineer";
    role = "Sapper";
    engineer = 1;
    canDeactivateMines = 1;
    backpack = "TACU_Taliban_Militia_B_Demolitions";
    weapons[] = {
        "TACU_Taliban_Veterans_W_AK15K",
        "CUP_hgun_M9",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Taliban_Veterans_W_AK15K",
        "CUP_hgun_M9",
        "Throw", "Put"
    };
    magazines[] = {
        mag_6("tacgt_AI_30Rnd_762x39_AK"),
        mag_2("tacgt_AI_15Rnd_9x19_M9"),
        "HandGrenade",
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_6("tacgt_AI_30Rnd_762x39_AK"),
        mag_2("tacgt_AI_15Rnd_9x19_M9"),
        "HandGrenade",
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Taliban_Veterans_U_I_Demolitions);
};

class TACU_Taliban_Veterans_U_I_Scout: TACU_Taliban_Veterans_U_I_Rifleman_01 {
    displayName = "Scout";
    uniformClass = "U_lxWS_Djella_02_Grey";
    weapons[] = {
        "Binocular",
        "TACU_Taliban_Veterans_W_SLR_Wood_Scout",
        "CUP_hgun_M9",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "Binocular",
        "TACU_Taliban_Veterans_W_SLR_Wood_Scout",
        "CUP_hgun_M9",
        "Throw", "Put"
    };
    magazines[] = {
        mag_6("20Rnd_762x51_slr_lxWS"),
        mag_2("tacgt_AI_15Rnd_9x19_M9"),
        "HandGrenade",
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_6("20Rnd_762x51_slr_lxWS"),
        mag_2("tacgt_AI_15Rnd_9x19_M9"),
        "HandGrenade",
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Taliban_Veterans_U_I_Scout);
};

class TACU_Taliban_Veterans_U_I_Machinegunner: TACU_Taliban_Veterans_U_I_Rifleman_01 {
    displayName = "Machinegunner";
    uniformClass = "U_lxWS_Djella_03_Green";
    icon = "iconManMG";
    role = "MachineGunner";
    weapons[] = {
        "TACU_Taliban_Veterans_W_SA77",
        "CUP_hgun_M9",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Taliban_Veterans_W_SA77",
        "CUP_hgun_M9",
        "Throw", "Put"
    };
    magazines[] = {
        mag_3("100Rnd_762x51_S77_Red_lxWS"),
        mag_2("tacgt_AI_15Rnd_9x19_M9"),
        "HandGrenade",
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_3("100Rnd_762x51_S77_Red_lxWS"),
        mag_2("tacgt_AI_15Rnd_9x19_M9"),
        "HandGrenade",
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Taliban_Veterans_U_I_Machinegunner);
};

class TACU_Taliban_Veterans_U_I_AT: TACU_Taliban_Veterans_U_I_Rifleman_01 {
    displayName = "Rifleman (AT)";
    uniformClass = "U_lxWS_Djella_02_Grey";
    icon = "iconManAT";
    role = "MissileSpecialist";
    backpack = "TACU_Taliban_Militia_B_AT";
    weapons[] = {
        "launch_RPG7_F",
        "TACU_Taliban_Veterans_W_Galat",
        "CUP_hgun_M9",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "launch_RPG7_F",
        "TACU_Taliban_Veterans_W_Galat",
        "CUP_hgun_M9",
        "Throw", "Put"
    };
    magazines[] = {
        "RPG7_F",
        mag_6("tacgt_AI_30Rnd_762x39_AK"),
        mag_2("tacgt_AI_15Rnd_9x19_M9"),
        "HandGrenade",
        "SmokeShell"
    };
    respawnMagazines[] = {
        "RPG7_F",
        mag_6("tacgt_AI_30Rnd_762x39_AK"),
        mag_2("tacgt_AI_15Rnd_9x19_M9"),
        "HandGrenade",
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Taliban_Veterans_U_I_AT);
};

class TACU_Taliban_Veterans_U_I_AP: TACU_Taliban_Veterans_U_I_Rifleman_01 {
    displayName = "Rifleman (AP)";
    uniformClass = "U_lxWS_Djella_02_Grey";
    icon = "iconManAT";
    role = "MissileSpecialist";
    backpack = "TACU_Taliban_Veterans_B_AP";
    weapons[] = {
        "launch_RPG7_F",
        "TACU_Taliban_Veterans_W_Galat",
        "CUP_hgun_M9",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "launch_RPG7_F",
        "TACU_Taliban_Veterans_W_Galat",
        "CUP_hgun_M9",
        "Throw", "Put"
    };
    magazines[] = {
        "CUP_OG7_M",
        mag_6("tacgt_AI_30Rnd_762x39_AK"),
        mag_2("tacgt_AI_15Rnd_9x19_M9"),
        "HandGrenade",
        "SmokeShell"
    };
    respawnMagazines[] = {
        "CUP_OG7_M",
        mag_6("tacgt_AI_30Rnd_762x39_AK"),
        mag_2("tacgt_AI_15Rnd_9x19_M9"),
        "HandGrenade",
        "SmokeShell"
    };
    EDITORPREVIEW(TACU_Taliban_Veterans_U_I_AP);
};

class TACU_Taliban_Veterans_U_I_Driver: TACU_Taliban_Veterans_U_I_Rifleman_01 {
    displayName = "Driver";
    uniformClass = "U_lxWS_Djella_02_Sand";
};
