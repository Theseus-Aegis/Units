// Taliban - Militia Units
class TACU_Taliban_Militia_U_I_Rifleman_01: TACU_Main_U_INDEP_Soldier_Base {
    author = "Mike";
    displayName = "Rifleman (Galat, Old)";
    faction = "TACU_Taliban_Militia_I";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguagePER_F", "Head_TK", "NoGlasses"};
    genericNames = "TACU_AfghanNames";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "U_lxWS_Djella_02_Brown";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_HarnessO_brn",
        "lxWS_H_turban_03_sand"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_HarnessO_brn",
        "lxWS_H_turban_03_sand"
    };
    weapons[] = {"arifle_Galat_worn_lxWS", "Throw", "Put"};
    respawnWeapons[] = {"arifle_Galat_worn_lxWS", "Throw", "Put"};
    magazines[] = {mag_12("TACU_Magazine_30Rnd_762_AK"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_12("TACU_Magazine_30Rnd_762_AK"), mag_2("SmokeShell")};
    headgearList[] = {
        "lxWS_H_turban_03_black", 0.058,
        "lxWS_H_turban_03_blue", 0.058,
        "lxWS_H_turban_03_green", 0.058,
        "lxWS_H_turban_03_green_pattern", 0.058,
        "lxWS_H_turban_03_sand", 0.058,
        "lxWS_H_turban_03_gray", 0.058,
        "lxWS_H_turban_04_black", 0.058,
        "lxWS_H_turban_04_blue", 0.058,
        "lxWS_H_turban_04_green", 0.058,
        "lxWS_H_turban_04_sand", 0.058,
        "lxWS_H_turban_04_gray", 0.058,
        "lxWS_H_turban_02_black", 0.058,
        "lxWS_H_turban_02_blue", 0.058,
        "lxWS_H_turban_02_green", 0.058,
        "lxWS_H_turban_02_green_pattern", 0.058,
        "lxWS_H_turban_02_sand", 0.058,
        "lxWS_H_turban_02_gray", 0.058
    };
    CBA_facewearList[] = {};
    //EDITORPREVIEW(TACU_Taliban_Militia_U_I_Rifleman_01);
};

class TACU_Taliban_Militia_U_I_Rifleman_02: TACU_Taliban_Militia_U_I_Rifleman_01 {
    displayName = "Rifleman (Galat)";
    uniformClass = "U_lxWS_Djella_02_Grey";
    weapons[] = {"arifle_Galat_lxWS", "Throw", "Put"};
    respawnWeapons[] = {"arifle_Galat_lxWS", "Throw", "Put"};
    magazines[] = {mag_12("TACU_Magazine_30Rnd_762_AK"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_12("TACU_Magazine_30Rnd_762_AK"), mag_2("SmokeShell")};
    //EDITORPREVIEW(TACU_Taliban_Militia_U_I_Rifleman_02);
};

class TACU_Taliban_Militia_U_I_Rifleman_03: TACU_Taliban_Militia_U_I_Rifleman_01 {
    displayName = "Rifleman (SLR)";
    uniformClass = "U_lxWS_Djella_03_Green";
    weapons[] = {"arifle_SLR_lxWS", "Throw", "Put"};
    respawnWeapons[] = {"arifle_SLR_lxWS", "Throw", "Put"};
    magazines[] = {mag_12("TACU_Magazine_20Rnd_SLR"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_12("TACU_Magazine_20Rnd_SLR"), mag_2("SmokeShell")};
    //EDITORPREVIEW(TACU_Taliban_Militia_U_I_Rifleman_03);
};

class TACU_Taliban_Militia_U_I_Leader: TACU_Taliban_Militia_U_I_Rifleman_01 {
    displayName = "Leader";
    icon = "iconManLeader";
    uniformClass = "U_lxWS_Djella_02_Sand";
    weapons[] = {"arifle_VelkoR5_GL_lxWS", "Throw", "Put"};
    respawnWeapons[] = {"arifle_VelkoR5_GL_lxWS", "Throw", "Put"};
    magazines[] = {
        mag_12("TACU_Magazine_35Rnd_R4"),
        mag_4("1Rnd_HE_Grenade_shell"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_12("TACU_Magazine_35Rnd_R4"),
        mag_4("1Rnd_HE_Grenade_shell"),
        mag_2("SmokeShell")
    };
    //EDITORPREVIEW(TACU_Taliban_Militia_U_I_Leader);
};

class TACU_Taliban_Militia_U_I_Grenadier: TACU_Taliban_Militia_U_I_Rifleman_01 {
    displayName = "Grenadier";
    role = "Grenadier";
    weapons[] = {"arifle_SLR_GL_lxWS", "Throw", "Put"};
    respawnWeapons[] = {"arifle_SLR_GL_lxWS", "Throw", "Put"};
    magazines[] = {
        mag_12("TACU_Magazine_20Rnd_SLR"),
        mag_4("1Rnd_40mm_HE_lxWS"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_12("TACU_Magazine_20Rnd_SLR"),
        mag_4("1Rnd_40mm_HE_lxWS"),
        mag_2("SmokeShell")
    };
    //EDITORPREVIEW(TACU_Taliban_Militia_U_I_Grenadier);
};

class TACU_Taliban_Militia_U_I_Medic: TACU_Taliban_Militia_U_I_Rifleman_01 {
    displayName = "Medic";
    uniformClass = "U_lxWS_Djella_03_Green";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    backpack = "TACU_Taliban_Militia_B_Medic";
    weapons[] = {"arifle_Galat_lxWS", "Throw", "Put"};
    respawnWeapons[] = {"arifle_Galat_lxWS", "Throw", "Put"};
    magazines[] = {mag_12("TACU_Magazine_30Rnd_762_AK"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_12("TACU_Magazine_30Rnd_762_AK"), mag_2("SmokeShell")};
    //EDITORPREVIEW(TACU_Taliban_Militia_U_I_Medic);
};

class TACU_Taliban_Militia_U_I_Demolitions: TACU_Taliban_Militia_U_I_Rifleman_01 {
    displayName = "Demolitions";
    uniformClass = "U_lxWS_Djella_02_Sand";
    icon = "iconManEngineer";
    role = "Sapper";
    engineer = 1;
    canDeactivateMines = 1;
    backpack = "TACU_Taliban_Militia_B_Demolitions";
    weapons[] = {"arifle_AK12U_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_AK12U_F", "Throw", "Put"};
    magazines[] = {mag_12("TACU_Magazine_30Rnd_762_AK"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_12("TACU_Magazine_30Rnd_762_AK"), mag_2("SmokeShell")};
    //EDITORPREVIEW(TACU_Taliban_Militia_U_I_Demolitions);
};

class TACU_Taliban_Militia_U_I_Scout: TACU_Taliban_Militia_U_I_Rifleman_01 {
    displayName = "Scout";
    uniformClass = "U_lxWS_Djella_02_Grey";
    weapons[] = {
        "Binocular",
        "arifle_SLR_lxWS",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "Binocular",
        "arifle_SLR_lxWS",
        "Throw", "Put"
    };
    magazines[] = {mag_12("TACU_Magazine_20Rnd_SLR"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_12("TACU_Magazine_20Rnd_SLR"), mag_2("SmokeShell")};
    //EDITORPREVIEW(TACU_Taliban_Militia_U_I_Scout);
};

class TACU_Taliban_Militia_U_I_Machinegunner: TACU_Taliban_Militia_U_I_Rifleman_01 {
    displayName = "Machinegunner";
    uniformClass = "U_lxWS_Djella_03_Green";
    icon = "iconManMG";
    role = "MachineGunner";
    weapons[] = {"LMG_S77_Compact_lxWS", "Throw", "Put"};
    respawnWeapons[] = {"LMG_S77_Compact_lxWS", "Throw", "Put"};
    magazines[] = {mag_3("TACU_Magazine_100Rnd_762_SA77"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_3("TACU_Magazine_100Rnd_762_SA77"), mag_2("SmokeShell")};
    //EDITORPREVIEW(TACU_Taliban_Militia_U_I_Machinegunner);
};

class TACU_Taliban_Militia_U_I_AT: TACU_Taliban_Militia_U_I_Rifleman_01 {
    displayName = "Rifleman (AT)";
    uniformClass = "U_lxWS_Djella_02_Grey";
    icon = "iconManAT";
    role = "MissileSpecialist";
    backpack = "TACU_Taliban_Militia_B_AT";
    weapons[] = {
        "launch_RPG7_F",
        "arifle_Galat_lxWS",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "launch_RPG7_F",
        "arifle_Galat_lxWS",
        "Throw", "Put"
    };
    magazines[] = {
        "RPG7_F",
        mag_12("TACU_Magazine_30Rnd_762_AK"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        "RPG7_F",
        mag_12("TACU_Magazine_30Rnd_762_AK"),
        mag_2("SmokeShell")
    };
    //EDITORPREVIEW(TACU_Taliban_Militia_U_I_AT);
};

class TACU_Taliban_Militia_U_I_AP: TACU_Taliban_Militia_U_I_AT {
    displayName = "Rifleman (AP)";
    TACU_isAP = 1;
    backpack = "TACU_Taliban_Militia_B_AP";
    magazines[] = {
        "CUP_OG7_M",
        mag_12("TACU_Magazine_30Rnd_762_AK"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        "CUP_OG7_M",
        mag_12("TACU_Magazine_30Rnd_762_AK"),
        mag_2("SmokeShell")
    };
};

class TACU_Taliban_Militia_U_I_Driver: TACU_Taliban_Militia_U_I_Rifleman_01 {
    displayName = "Driver";
    uniformClass = "U_lxWS_Djella_02_Sand";
};
