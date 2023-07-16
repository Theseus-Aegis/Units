class TACU_Proxy_Russia_U_O_Rifleman: TACU_Main_U_OPFOR_Soldier_Base {
    author = "Mike";
    displayName = "Rifleman";
    faction = "TACU_Proxy_Russia_O";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {};
    genericNames = "TACU_RussianNames";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "TACU_Proxy_Russia_Uniform_Combat_Fatigues";
    items[] = {"ACE_NVG_Gen4_Green"};
    respawnItems[] = {"ACE_NVG_Gen4_Green"};
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_CarrierRigKBT_01_light_EAF_F",
        "H_HelmetHBK_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_CarrierRigKBT_01_light_EAF_F",
        "H_HelmetHBK_F"
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
        mag_7("tacgt_AI_30Rnd_762x39_AK"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_7("tacgt_AI_30Rnd_762x39_AK"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    headgearList[] = {
        "H_HelmetHBK_headset_F", 0.25,
        "H_HelmetHBK_chops_F", 0.25,
        "H_HelmetHBK_ear_F", 0.25,
        "H_HelmetHBK_F", 0.25
    };
    CBA_facewearList[] = {};
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
        mag_7("tacgt_AI_30Rnd_762x39_AK"),
        mag_4("1Rnd_HE_Grenade_shell"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_7("tacgt_AI_30Rnd_762x39_AK"),
        mag_4("1Rnd_HE_Grenade_shell"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
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
        mag_6("10Rnd_93x64_DMR_05_Mag"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_6("10Rnd_93x64_DMR_05_Mag"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
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
        mag_7("tacgt_AI_30Rnd_762x39_AK"),
        mag_4("1Rnd_HE_Grenade_shell"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_7("tacgt_AI_30Rnd_762x39_AK"),
        mag_4("1Rnd_HE_Grenade_shell"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
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
        mag_2("tacgt_AI_75Rnd_762x39_Drum"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_2("tacgt_AI_75Rnd_762x39_Drum"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
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
        "150Rnd_762x54_Box",
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        "150Rnd_762x54_Box",
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
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
        mag_7("tacgt_AI_30Rnd_762x39_AK"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        "RPG32_F",
        mag_7("tacgt_AI_30Rnd_762x39_AK"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
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
        mag_7("tacgt_AI_30Rnd_762x39_AK"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        "RPG32_HE_F",
        mag_7("tacgt_AI_30Rnd_762x39_AK"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
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
