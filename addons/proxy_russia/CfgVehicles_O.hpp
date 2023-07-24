#define MACRO_LINKED_ITEMS_CBRN \
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "V_CarrierRigKBT_01_light_EAF_F", "H_HelmetHBK_F", "G_AirPurifyingRespirator_02_olive_F"}; \
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "V_CarrierRigKBT_01_light_EAF_F", "H_HelmetHBK_F", "G_AirPurifyingRespirator_02_olive_F"}; \
    uniformClass = "U_I_E_CBRN_Suit_01_EAF_F"; \
    CBA_facewearList[] = {"G_AirPurifyingRespirator_02_olive_F"}; \
    editorSubcategory = "TACU_Proxy_Russia_CBRN"

class TACU_Proxy_Russia_U_O_Rifleman: TACU_Main_U_OPFOR_Soldier_Base {
    author = "Mike";
    displayName = "Rifleman";
    faction = "TACU_Proxy_Russia_O";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageRUS_F", "Head_Russian", "Head_Euro"};
    genericNames = "TACU_RussianNames";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "TACU_Proxy_Russia_Uniform_Combat_Fatigues";
    items[] = {"ACE_NVG_Gen4_Green"};
    respawnItems[] = {"ACE_NVG_Gen4_Green"};
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_CarrierRigKBT_01_light_EAF_F",
        "H_HelmetHBK_F",
        "G_Bandanna_oli"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_CarrierRigKBT_01_light_EAF_F",
        "H_HelmetHBK_F",
        "G_Bandanna_oli"
    };
    weapons[] = {
        "TACU_Proxy_Russia_W_AK12U",
        "TACU_Proxy_Russia_W_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Proxy_Russia_W_AK12U",
        "TACU_Proxy_Russia_W_FNX",
        "Throw", "Put"
    };
    magazines[] = {
        mag_8("TACU_Magazine_30Rnd_762_AK"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_8("TACU_Magazine_30Rnd_762_AK"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    headgearList[] = {
        "H_HelmetHBK_headset_F", 0.25,
        "H_HelmetHBK_chops_F", 0.25,
        "H_HelmetHBK_ear_F", 0.25,
        "H_HelmetHBK_F", 0.25
    };
    CBA_facewearList[] = {
        "G_Bandanna_oli", 0.8,
        "", 0.4,
        "G_Balaclava_blk", 0.2,
        "G_Balaclava_oli", 0.2
    };
    //EDITORPREVIEW(TACU_Proxy_Russia_U_O_Rifleman);
};

class TACU_Proxy_Russia_U_O_Demolitions: TACU_Proxy_Russia_U_O_Rifleman {
    displayName = "Demolitions";
    icon = "iconManEngineer";
    role = "Sapper";
    canDeactivateMines = 1;
    uniformClass = "TACU_Proxy_Russia_Uniform_Combat_Fatigues_Rolled";
    backpack = "TACU_Proxy_Russia_B_Demolitions";
    weapons[] = {
        "TACU_Proxy_Russia_W_AK15",
        "TACU_Proxy_Russia_W_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Proxy_Russia_W_AK15",
        "TACU_Proxy_Russia_W_FNX",
        "Throw", "Put"
    };
    //EDITORPREVIEW(TACU_Proxy_Russia_U_O_Demolitions);
};

class TACU_Proxy_Russia_U_O_Engineer: TACU_Proxy_Russia_U_O_Rifleman {
    displayName = "Engineer";
    icon = "iconManEngineer";
    role = "Sapper";
    engineer = 1;
    uniformClass = "TACU_Proxy_Russia_Uniform_Combat_Fatigues_Rolled";
    backpack = "TACU_Proxy_Russia_B_Engineer";
    //EDITORPREVIEW(TACU_Proxy_Russia_U_O_Engineer);
};

class TACU_Proxy_Russia_U_O_Grenadier: TACU_Proxy_Russia_U_O_Rifleman {
    displayName = "Grenadier";
    role = "Grenadier";
    weapons[] = {
        "TACU_Proxy_Russia_W_AK15_GL",
        "TACU_Proxy_Russia_W_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Proxy_Russia_W_AK15_GL",
        "TACU_Proxy_Russia_W_FNX",
        "Throw", "Put"
    };
    magazines[] = {
        mag_8("TACU_Magazine_30Rnd_762_AK"),
        mag_4("1Rnd_HE_Grenade_shell"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_8("TACU_Magazine_30Rnd_762_AK"),
        mag_4("1Rnd_HE_Grenade_shell"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    //EDITORPREVIEW(TACU_Proxy_Russia_U_O_Grenadier);
};

class TACU_Proxy_Russia_U_O_Marksman: TACU_Proxy_Russia_U_O_Rifleman {
    displayName = "Marksman";
    uniformClass = "TACU_Proxy_Russia_Uniform_Combat_Fatigues_Rolled";
    weapons[] = {
        "TACU_Proxy_Russia_W_Cyrus",
        "TACU_Proxy_Russia_W_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Proxy_Russia_W_Cyrus",
        "TACU_Proxy_Russia_W_FNX",
        "Throw", "Put"
    };
    magazines[] = {
        mag_7("10Rnd_93x64_DMR_05_Mag"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_7("10Rnd_93x64_DMR_05_Mag"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    //EDITORPREVIEW(TACU_Proxy_Russia_U_O_Marksman);
};

class TACU_Proxy_Russia_U_O_Teamleader: TACU_Proxy_Russia_U_O_Rifleman {
    displayName = "Team Leader";
    icon = "iconManLeader";
    uniformClass = "TACU_Proxy_Russia_Uniform_Combat_Fatigues_Officer";
    weapons[] = {
        "TACU_Proxy_Russia_W_AK15_GL",
        "TACU_Proxy_Russia_W_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Proxy_Russia_W_AK15_GL",
        "TACU_Proxy_Russia_W_FNX",
        "Throw", "Put"
    };
    magazines[] = {
        mag_8("TACU_Magazine_30Rnd_762_AK"),
        mag_4("1Rnd_HE_Grenade_shell"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_8("TACU_Magazine_30Rnd_762_AK"),
        mag_4("1Rnd_HE_Grenade_shell"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    //EDITORPREVIEW(TACU_Proxy_Russia_U_O_Marksman);
};

class TACU_Proxy_Russia_U_O_Autorifleman: TACU_Proxy_Russia_U_O_Rifleman {
    displayName = "Autorifleman";
    icon = "iconManMG";
    role = "MachineGunner";
    uniformClass = "TACU_Proxy_Russia_Uniform_Deserter";
    backpack = "TACU_Proxy_Russia_B_Autorifleman"; // to do!
    weapons[] = {
        "TACU_Proxy_Russia_W_RPK",
        "TACU_Proxy_Russia_W_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Proxy_Russia_W_RPK",
        "TACU_Proxy_Russia_W_FNX",
        "Throw", "Put"
    };
    magazines[] = {
        mag_3("TACU_Magazine_75Rnd_762_AK"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_3("TACU_Magazine_75Rnd_762_AK"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    //EDITORPREVIEW(TACU_Proxy_Russia_U_O_Autorifleman);
};

class TACU_Proxy_Russia_U_O_Machinegunner: TACU_Proxy_Russia_U_O_Rifleman {
    displayName = "Machinegunner";
    icon = "iconManMG";
    role = "MachineGunner";
    uniformClass = "TACU_Proxy_Russia_Uniform_Deserter";
    backpack = "TACU_Proxy_Russia_B_Machinegunner";
    weapons[] = {
        "TACU_Proxy_Russia_W_Negev",
        "TACU_Proxy_Russia_W_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Proxy_Russia_W_Negev",
        "TACU_Proxy_Russia_W_FNX",
        "Throw", "Put"
    };
    magazines[] = {
        "TACU_Magazine_150Rnd_Negev",
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        "TACU_Magazine_150Rnd_Negev",
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    //EDITORPREVIEW(TACU_Proxy_Russia_U_O_Machinegunner);
};

class TACU_Proxy_Russia_U_O_Medic: TACU_Proxy_Russia_U_O_Rifleman {
    displayName = "Medic";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    uniformClass = "TACU_Proxy_Russia_Uniform_Deserter";
    backpack = "TACU_Proxy_Russia_B_Medic";
    //EDITORPREVIEW(TACU_Proxy_Russia_U_O_Medic);
};

class TACU_Proxy_Russia_U_O_AT: TACU_Proxy_Russia_U_O_Rifleman {
    displayName = "Rifleman (AT)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    backpack = "TACU_Proxy_Russia_B_AT";
    weapons[] = {
        "launch_RPG32_green_F",
        "TACU_Proxy_Russia_W_AK15",
        "TACU_Proxy_Russia_W_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "launch_RPG32_green_F",
        "TACU_Proxy_Russia_W_AK15",
        "TACU_Proxy_Russia_W_FNX",
        "Throw", "Put"
    };
    magazines[] = {
        "RPG32_F",
        mag_9("TACU_Magazine_30Rnd_762_AK"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        "RPG32_F",
        mag_9("TACU_Magazine_30Rnd_762_AK"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    //EDITORPREVIEW(TACU_Proxy_Russia_U_O_AT);
};

class TACU_Proxy_Russia_U_O_AP: TACU_Proxy_Russia_U_O_Rifleman {
    displayName = "Rifleman (AP)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    backpack = "TACU_Proxy_Russia_B_AP";
    weapons[] = {
        "launch_RPG32_green_F",
        "TACU_Proxy_Russia_W_AK15",
        "TACU_Proxy_Russia_W_FNX",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "launch_RPG32_green_F",
        "TACU_Proxy_Russia_W_AK15",
        "TACU_Proxy_Russia_W_FNX",
        "Throw", "Put"
    };
    magazines[] = {
        "RPG32_HE_F",
        mag_9("TACU_Magazine_30Rnd_762_AK"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        "RPG32_HE_F",
        mag_9("TACU_Magazine_30Rnd_762_AK"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    //EDITORPREVIEW(TACU_Proxy_Russia_U_O_AT);
};

class TACU_Proxy_Russia_U_O_Driver: TACU_Proxy_Russia_U_O_Rifleman {
    displayName = "Driver";
    uniformClass = "U_I_L_Uniform_01_deserter_F";
    //EDITORPREVIEW(TACU_Proxy_Russia_U_O_Driver);
};

class TACU_Proxy_Russia_U_O_Pilot: TACU_Proxy_Russia_U_O_Rifleman {
    displayName = "Pilot";
    uniformClass = "TACU_Proxy_Russia_Uniform_Coveralls";
    backpack = "B_Parachute";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "H_PilotHelmetHeli_I_E",
        "V_CarrierRigKBT_01_light_Olive_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "H_PilotHelmetHeli_I_E",
        "V_CarrierRigKBT_01_light_Olive_F"
    };
    headgearList[] = {"H_PilotHelmetHeli_I_E", 1};
    //EDITORPREVIEW(TACU_Proxy_Russia_U_O_Pilot);
};

// CBRN Units
class TACU_Proxy_Russia_U_O_Rifleman_CBRN: TACU_Proxy_Russia_U_O_Rifleman {
    MACRO_LINKED_ITEMS_CBRN;
    displayName = "Rifleman (CBRN)";
    //EDITORPREVIEW(TACU_Proxy_Russia_U_O_Rifleman_CBRN);
};
class TACU_Proxy_Russia_U_O_Demolitions_CBRN: TACU_Proxy_Russia_U_O_Demolitions {
    MACRO_LINKED_ITEMS_CBRN;
    displayName = "Demolitions (CBRN)";
    //EDITORPREVIEW(TACU_Proxy_Russia_U_O_Demolitions_CBRN);
};
class TACU_Proxy_Russia_U_O_Engineer_CBRN: TACU_Proxy_Russia_U_O_Engineer {
    MACRO_LINKED_ITEMS_CBRN;
    displayName = "Engineer (CBRN)";
    //EDITORPREVIEW(TACU_Proxy_Russia_U_O_Engineer_CBRN);
};
class TACU_Proxy_Russia_U_O_Grenadier_CBRN: TACU_Proxy_Russia_U_O_Grenadier {
    MACRO_LINKED_ITEMS_CBRN;
    displayName = "Grenadier (CBRN)";
    //EDITORPREVIEW(TACU_Proxy_Russia_U_O_Grenadier_CBRN);
};
class TACU_Proxy_Russia_U_O_Marksman_CBRN: TACU_Proxy_Russia_U_O_Marksman {
    MACRO_LINKED_ITEMS_CBRN;
    displayName = "Marksman (CBRN)";
    //EDITORPREVIEW(TACU_Proxy_Russia_U_O_Marksman_CBRN);
};
class TACU_Proxy_Russia_U_O_Teamleader_CBRN: TACU_Proxy_Russia_U_O_Teamleader {
    MACRO_LINKED_ITEMS_CBRN;
    displayName = "Team Leader (CBRN)";
    //EDITORPREVIEW(TACU_Proxy_Russia_U_O_Teamleader_CBRN);
};
class TACU_Proxy_Russia_U_O_Autorifleman_CBRN: TACU_Proxy_Russia_U_O_Autorifleman {
    MACRO_LINKED_ITEMS_CBRN;
    displayName = "Autorifleman (CBRN)";
    //EDITORPREVIEW(TACU_Proxy_Russia_U_O_Autorifleman_CBRN);
};
class TACU_Proxy_Russia_U_O_Machinegunner_CBRN: TACU_Proxy_Russia_U_O_Machinegunner {
    MACRO_LINKED_ITEMS_CBRN;
    displayName = "Machinegunner (CBRN)";
    //EDITORPREVIEW(TACU_Proxy_Russia_U_O_Machinegunner_CBRN);
};
class TACU_Proxy_Russia_U_O_Medic_CBRN: TACU_Proxy_Russia_U_O_Medic {
    MACRO_LINKED_ITEMS_CBRN;
    displayName = "Medic (CBRN)";
    //EDITORPREVIEW(TACU_Proxy_Russia_U_O_Medic_CBRN);
};
class TACU_Proxy_Russia_U_O_AT_CBRN: TACU_Proxy_Russia_U_O_AT {
    MACRO_LINKED_ITEMS_CBRN;
    displayName = "Rifleman (AT, CBRN)";
    //EDITORPREVIEW(TACU_Proxy_Russia_U_O_AT_CBRN);
};
class TACU_Proxy_Russia_U_O_AP_CBRN: TACU_Proxy_Russia_U_O_AP {
    MACRO_LINKED_ITEMS_CBRN;
    displayName = "Rifleman (AP, CBRN)";
    //EDITORPREVIEW(TACU_Proxy_Russia_U_O_AP_CBRN);
};
class TACU_Proxy_Russia_U_O_Driver_CBRN: TACU_Proxy_Russia_U_O_Driver {
    MACRO_LINKED_ITEMS_CBRN;
    displayName = "Driver (CBRN)";
    //EDITORPREVIEW(TACU_Proxy_Russia_U_O_Driver_CBRN);
};
class TACU_Proxy_Russia_U_O_Pilot_CBRN: TACU_Proxy_Russia_U_O_Pilot {
    MACRO_LINKED_ITEMS_CBRN;
    displayName = "Pilot (CBRN)";
    //EDITORPREVIEW(TACU_Proxy_Russia_U_O_Pilot_CBRN);
};
