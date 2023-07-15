// Western Units. (Independent)
class TACU_Seven_Rings_Western_U_I_Rifleman_01: TACU_Main_U_INDEP_Soldier_Base {
    author = "Mike";
    displayName = "Rifleman";
    faction = "TACU_Seven_Rings_Western";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageRUS_F", "Head_Euro", "Head_Enoch"};
    genericNames = "TACU_PolishNames";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "U_O_R_Gorka_01_F";
    items[] = {"ACE_NVG_Gen4_Green"};
    respawnItems[] = {"ACE_NVG_Gen4_Green"};
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_Seven_Rings_Vest_Plate_Carrier_Green",
        "H_HelmetHBK_F",
        "G_Balaclava_oli"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_Seven_Rings_Vest_Plate_Carrier_Green",
        "H_HelmetHBK_F",
        "G_Balaclava_oli"
    };
    weapons[] = {
        "TACU_Seven_Rings_Western_W_MSBS",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Seven_Rings_Western_W_MSBS",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_6("tacgt_AI_30Rnd_65x39_GROT"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_6("tacgt_AI_30Rnd_65x39_GROT"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    headgearList[] = {"H_HelmetHBK_F", 1};
    CBA_facewearList[] = {"G_Balaclava_oli", 1};
    EDITORPREVIEW(TACU_Seven_Rings_Western_U_I_Rifleman_01);
};

class TACU_Seven_Rings_Western_U_I_Rifleman_02: TACU_Seven_Rings_Western_U_I_Rifleman_01 {
    displayName = "Rifleman (AK-15)";
    weapons[] = {
        "TACU_Seven_Rings_Western_W_AK15",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Seven_Rings_Western_W_AK15",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_6("tacgt_AI_30Rnd_762x39_AK"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_6("tacgt_AI_30Rnd_762x39_AK"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Seven_Rings_Western_U_I_Rifleman_02);
};

class TACU_Seven_Rings_Western_U_I_CQB: TACU_Seven_Rings_Western_U_I_Rifleman_01 {
    displayName = "CQB Specialist";
    weapons[] = {
        "TACU_Seven_Rings_Western_W_MSBS_SG",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Seven_Rings_Western_W_MSBS_SG",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_6("tacgt_AI_30Rnd_65x39_GROT"),
        mag_4("6Rnd_12Gauge_Pellets"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_6("tacgt_AI_30Rnd_65x39_GROT"),
        mag_4("6Rnd_12Gauge_Pellets"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Seven_Rings_Western_U_I_CQB);
};

class TACU_Seven_Rings_Western_U_I_Leader: TACU_Seven_Rings_Western_U_I_Rifleman_01 {
    displayName = "Leader";
    icon = "iconManLeader";
    genericNames = "TACU_SlovakianNames";
    weapons[] = {
        "TACU_Seven_Rings_Western_W_MSBS_GL",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Seven_Rings_Western_W_MSBS_GL",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_6("tacgt_AI_30Rnd_65x39_GROT"),
        mag_4("1Rnd_HE_Grenade_shell"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_6("tacgt_AI_30Rnd_65x39_GROT"),
        mag_4("1Rnd_HE_Grenade_shell"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Seven_Rings_Western_U_I_Leader);
};

class TACU_Seven_Rings_Western_U_I_Marksman: TACU_Seven_Rings_Western_U_I_Rifleman_01 {
    displayName = "Marksman";
    role = "Marksman";
    weapons[] = {
        "Binocular",
        "TACU_Seven_Rings_Western_W_MSBS_MR",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "Binocular",
        "TACU_Seven_Rings_Western_W_MSBS_MR",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_6("tacgt_AI_30Rnd_65x39_GROT"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_6("tacgt_AI_30Rnd_65x39_GROT"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Seven_Rings_Western_U_I_Marksman);
};

class TACU_Seven_Rings_Western_U_I_Sniper: TACU_Seven_Rings_Western_U_I_Rifleman_01 {
    displayName = "Sniper";
    role = "Marksman";
    genericNames = "TACU_SlovakianNames";
    weapons[] = {
        "Binocular",
        "TACU_Seven_Rings_Western_W_Noreen",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "Binocular",
        "TACU_Seven_Rings_Western_W_Noreen",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_6("10Rnd_338_Mag"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_6("10Rnd_338_Mag"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Seven_Rings_Western_U_I_Sniper);
};

class TACU_Seven_Rings_Western_U_I_AT: TACU_Seven_Rings_Western_U_I_Rifleman_01 {
    displayName = "Rifleman (AT)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    backpack = "TACU_Seven_Rings_Western_B_AT";
    weapons[] = {
        "TACU_Seven_Rings_Western_W_MSBS",
        "launch_RPG32_green_F",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Seven_Rings_Western_W_MSBS",
        "launch_RPG32_green_F",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    magazines[] = {
        "RPG32_F",
        mag_6("tacgt_AI_30Rnd_65x39_GROT"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        "RPG32_F",
        mag_6("tacgt_AI_30Rnd_65x39_GROT"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Seven_Rings_Western_U_I_AT);
};

class TACU_Seven_Rings_Western_U_I_AP: TACU_Seven_Rings_Western_U_I_Rifleman_01 {
    displayName = "Rifleman (AP)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    backpack = "TACU_Seven_Rings_Western_B_AP";
    weapons[] = {
        "TACU_Seven_Rings_Western_W_MSBS",
        "launch_RPG32_green_F",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Seven_Rings_Western_W_MSBS",
        "launch_RPG32_green_F",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    magazines[] = {
        "RPG32_HE_F",
        mag_6("tacgt_AI_30Rnd_65x39_GROT"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        "RPG32_HE_F",
        mag_6("tacgt_AI_30Rnd_65x39_GROT"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Seven_Rings_Western_U_I_AP);
};

class TACU_Seven_Rings_Western_U_I_AA: TACU_Seven_Rings_Western_U_I_Rifleman_01 {
    displayName = "Rifleman (AA)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    backpack = "TACU_Seven_Rings_Western_B_AA";
    weapons[] = {
        "TACU_Seven_Rings_Western_W_MSBS",
        "launch_B_Titan_olive_F",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Seven_Rings_Western_W_MSBS",
        "launch_B_Titan_olive_F",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    magazines[] = {
        "Titan_AA",
        mag_6("tacgt_AI_30Rnd_65x39_GROT"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        "Titan_AA",
        mag_6("tacgt_AI_30Rnd_65x39_GROT"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Seven_Rings_Western_U_I_AA);
};

class TACU_Seven_Rings_Western_U_I_Grenadier: TACU_Seven_Rings_Western_U_I_Rifleman_01 {
    displayName = "Grenadier";
    role = "Grenadier";
    genericNames = "TACU_SlovakianNames";
    weapons[] = {
        "TACU_Seven_Rings_Western_W_MSBS_GL",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Seven_Rings_Western_W_MSBS_GL",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_6("tacgt_AI_30Rnd_65x39_GROT"),
        mag_4("1Rnd_HE_Grenade_shell"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_6("tacgt_AI_30Rnd_65x39_GROT"),
        mag_4("1Rnd_HE_Grenade_shell"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Seven_Rings_Western_U_I_Grenadier);
};

class TACU_Seven_Rings_Western_U_I_Autorifleman: TACU_Seven_Rings_Western_U_I_Rifleman_01 {
    displayName = "Autorifleman";
    icon = "iconManMG";
    role = "MachineGunner";
    weapons[] = {
        "TACU_Seven_Rings_Western_W_AK15",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Seven_Rings_Western_W_AK15",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_4("tacgt_AI_75Rnd_762x39_Drum"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_4("tacgt_AI_75Rnd_762x39_Drum"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Seven_Rings_Western_U_I_Autorifleman);
};

class TACU_Seven_Rings_Western_U_I_Machinegunner: TACU_Seven_Rings_Western_U_I_Rifleman_01 {
    displayName = "Machine Gunner";
    icon = "iconManMG";
    role = "MachineGunner";
    backpack = "TACU_Seven_Rings_Western_B_MG";
    weapons[] = {
        "TACU_Seven_Rings_Western_W_Stoner99",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Seven_Rings_Western_W_Stoner99",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_2("tacgt_AI_200Rnd_65x39_Belt"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_2("tacgt_AI_200Rnd_65x39_Belt"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Seven_Rings_Western_U_I_Machinegunner);
};

class TACU_Seven_Rings_Western_U_I_Heavygunner: TACU_Seven_Rings_Western_U_I_Rifleman_01 {
    displayName = "Heavy Gunner";
    icon = "iconManMG";
    role = "MachineGunner";
    genericNames = "TACU_SlovakianNames";
    backpack = "TACU_Seven_Rings_Western_B_HG";
    weapons[] = {
        "TACU_Seven_Rings_Western_W_LWMMG",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Seven_Rings_Western_W_LWMMG",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    magazines[] = {
        "130Rnd_338_Mag",
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        "130Rnd_338_Mag",
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Seven_Rings_Western_U_I_Heavygunner);
};

class TACU_Seven_Rings_Western_U_I_Demolitions: TACU_Seven_Rings_Western_U_I_Rifleman_01 {
    displayName = "Demolitions";
    icon = "iconManExplosive";
    role = "Sapper";
    backpack = "TACU_Seven_Rings_Western_B_Demo";
    weapons[] = {
        "TACU_Seven_Rings_Western_W_AK15K",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Seven_Rings_Western_W_AK15K",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_6("tacgt_AI_30Rnd_762x39_AK"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_6("tacgt_AI_30Rnd_762x39_AK"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Seven_Rings_Western_U_I_Demolitions);
};

class TACU_Seven_Rings_Western_U_I_Medic: TACU_Seven_Rings_Western_U_I_Rifleman_01 {
    displayName = "Medic";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    backpack = "TACU_Seven_Rings_Western_B_Medic";
    weapons[] = {
        "TACU_Seven_Rings_Western_W_AK15K",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Seven_Rings_Western_W_AK15K",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_6("tacgt_AI_30Rnd_762x39_AK"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_6("tacgt_AI_30Rnd_762x39_AK"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Seven_Rings_Western_U_I_Medic);
};

class TACU_Seven_Rings_Western_U_I_Engineer: TACU_Seven_Rings_Western_U_I_Rifleman_01 {
    displayName = "Engineer";
    icon = "iconManEngineer";
    role = "Sapper";
    engineer = 1;
    genericNames = "TACU_SlovakianNames";
    backpack = "TACU_Seven_Rings_Western_B_Engineer";
    weapons[] = {
        "TACU_Seven_Rings_Western_W_MSBS",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Seven_Rings_Western_W_MSBS",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_6("tacgt_AI_30Rnd_65x39_GROT"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_6("tacgt_AI_30Rnd_65x39_GROT"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Seven_Rings_Western_U_I_Engineer);
};

class TACU_Seven_Rings_Western_U_I_Driver: TACU_Seven_Rings_Western_U_I_Rifleman_01 {
    displayName = "Driver";
    EDITORPREVIEW(TACU_Seven_Rings_Western_U_I_Driver);
};

class TACU_Seven_Rings_Western_U_I_Pilot: TACU_Seven_Rings_Western_U_I_Rifleman_01 {
    displayName = "Pilot";
    backpack = "B_Parachute";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "H_PilotHelmetHeli_B",
        "TACU_Seven_Rings_Vest_Plate_Carrier_Green"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "H_PilotHelmetHeli_B",
        "TACU_Seven_Rings_Vest_Plate_Carrier_Green"
    };
    headgearList[] = {"H_PilotHelmetHeli_B", 1};
    CBA_facewearList[] = {};
    EDITORPREVIEW(TACU_Seven_Rings_Western_U_I_Pilot);
};
