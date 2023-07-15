// Eastern Units (Opfor)
class TACU_Seven_Rings_Eastern_U_O_Rifleman_01: TACU_Main_U_OPFOR_Soldier_Base {
    author = "Mike";
    displayName = "Rifleman (Katiba)";
    faction = "TACU_Seven_Rings_Eastern";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguagePER_F", "Head_TK"};
    genericNames = "TACU_IranianNames";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "U_lxWS_C_Djella_02";
    items[] = {"ACE_NVG_Gen4"};
    respawnItems[] = {"ACE_NVG_Gen4"};
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_Seven_Rings_Vest_Plate_Carrier_Coyote",
        "H_turban_02_mask_black_lxws"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_Seven_Rings_Vest_Plate_Carrier_Coyote",
        "H_turban_02_mask_black_lxws"
    };
    weapons[] = {
        "TACU_Seven_Rings_Eastern_W_Katiba",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Seven_Rings_Eastern_W_Katiba",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_6("tacgt_AI_30Rnd_65x39_Katiba"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("MiniGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_6("tacgt_AI_30Rnd_65x39_Katiba"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("MiniGrenade"),
        mag_2("SmokeShell")
    };
    headgearList[] = {
        "H_turban_02_mask_black_lxws", 0.33,
        "H_turban_02_mask_hex_lxws", 0.33,
        "H_turban_02_mask_snake_lxws", 0.33
    };
    EDITORPREVIEW(TACU_Seven_Rings_Eastern_U_O_Rifleman_01);
};

class TACU_Seven_Rings_Eastern_U_O_Rifleman_02: TACU_Seven_Rings_Eastern_U_O_Rifleman_01 {
    displayName = "Rifleman (QBZ)";
    uniformClass = "U_lxWS_C_Djella_03";
    weapons[] = {
        "TACU_Seven_Rings_Eastern_W_QBZ95",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Seven_Rings_Eastern_W_QBZ95",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_6("tacgt_AI_30Rnd_58x42"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("MiniGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_6("tacgt_AI_30Rnd_58x42"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("MiniGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Seven_Rings_Eastern_U_O_Rifleman_02);
};

class TACU_Seven_Rings_Eastern_U_O_Leader: TACU_Seven_Rings_Eastern_U_O_Rifleman_01 {
    displayName = "Leader";
    icon = "iconManLeader";
    uniformClass = "U_SFIA_deserter_lxWS";
    weapons[] = {
        "TACU_Seven_Rings_Eastern_W_Katiba_GL",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Seven_Rings_Eastern_W_Katiba_GL",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_6("tacgt_AI_30Rnd_65x39_Katiba"),
        mag_4("1Rnd_HE_Grenade_shell"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("MiniGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_6("tacgt_AI_30Rnd_65x39_Katiba"),
        mag_4("1Rnd_HE_Grenade_shell"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("MiniGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Seven_Rings_Eastern_U_O_Leader);
};

class TACU_Seven_Rings_Eastern_U_O_Marksman: TACU_Seven_Rings_Eastern_U_O_Rifleman_01 {
    displayName = "Marksman";
    role = "Marksman";
    uniformClass = "U_lxWS_C_Djella_07";
    weapons[] = {
        "Binocular",
        "TACU_Seven_Rings_Eastern_W_VS121",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "Binocular",
        "TACU_Seven_Rings_Eastern_W_VS121",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_7("10Rnd_762x54_Mag"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("MiniGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_7("10Rnd_762x54_Mag"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("MiniGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Seven_Rings_Eastern_U_O_Marksman);
};

class TACU_Seven_Rings_Eastern_U_O_Sharpshooter: TACU_Seven_Rings_Eastern_U_O_Rifleman_01 {
    displayName = "Sharpshooter";
    role = "Marksman";
    uniformClass = "U_lxWS_Djella_02_Brown";
    weapons[] = {
        "Binocular",
        "TACU_Seven_Rings_Eastern_W_QBU88",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "Binocular",
        "TACU_Seven_Rings_Eastern_W_QBU88",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_6("tacgt_AI_20Rnd_65x39"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("MiniGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_6("tacgt_AI_20Rnd_65x39"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("MiniGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Seven_Rings_Eastern_U_O_Sharpshooter);
};

class TACU_Seven_Rings_Eastern_U_O_Sniper: TACU_Seven_Rings_Eastern_U_O_Rifleman_01 {
    displayName = "Sniper";
    role = "Marksman";
    uniformClass = "U_SFIA_deserter_lxWS";
    weapons[] = {
        "Binocular",
        "TACU_Seven_Rings_Eastern_W_Cyrus",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "Binocular",
        "TACU_Seven_Rings_Eastern_W_Cyrus",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_4("10Rnd_93x64_DMR_05_Mag"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("MiniGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_4("10Rnd_93x64_DMR_05_Mag"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("MiniGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Seven_Rings_Eastern_U_O_Sniper);
};

class TACU_Seven_Rings_Eastern_U_O_AT: TACU_Seven_Rings_Eastern_U_O_Rifleman_01 {
    displayName = "Rifleman (AT)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    uniformClass = "U_lxWS_Djella_02_Grey";
    backpack = "TACU_Seven_Rings_Eastern_B_AT";
    weapons[] = {
        "launch_RPG32_F",
        "TACU_Seven_Rings_Eastern_W_Katiba_Carbine",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "launch_RPG32_F",
        "TACU_Seven_Rings_Eastern_W_Katiba_Carbine",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        "RPG32_F",
        mag_6("tacgt_AI_30Rnd_65x39_Katiba"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("MiniGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        "RPG32_F",
        mag_6("tacgt_AI_30Rnd_65x39_Katiba"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("MiniGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Seven_Rings_Eastern_U_O_AT);
};

class TACU_Seven_Rings_Eastern_U_O_AP: TACU_Seven_Rings_Eastern_U_O_Rifleman_01 {
    displayName = "Rifleman (AP)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    uniformClass = "U_lxWS_Djella_03_Green";
    backpack = "TACU_Seven_Rings_Eastern_B_AP";
    weapons[] = {
        "launch_RPG32_F",
        "TACU_Seven_Rings_Eastern_W_Katiba_Carbine",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "launch_RPG32_F",
        "TACU_Seven_Rings_Eastern_W_Katiba_Carbine",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        "RPG32_HE_F",
        mag_6("tacgt_AI_30Rnd_65x39_Katiba"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("MiniGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        "RPG32_HE_F",
        mag_6("tacgt_AI_30Rnd_65x39_Katiba"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("MiniGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Seven_Rings_Eastern_U_O_AP);
};

class TACU_Seven_Rings_Eastern_U_O_Grenadier: TACU_Seven_Rings_Eastern_U_O_Rifleman_01 {
    displayName = "Grenadier";
    role = "Grenadier";
    uniformClass = "U_lxWS_Djella_02_Sand";
    weapons[] = {
        "TACU_Seven_Rings_Eastern_W_QBZ95_GL",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Seven_Rings_Eastern_W_QBZ95_GL",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_6("tacgt_AI_30Rnd_58x42"),
        mag_4("1Rnd_HE_Grenade_shell"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("MiniGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_6("tacgt_AI_30Rnd_58x42"),
        mag_4("1Rnd_HE_Grenade_shell"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("MiniGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Seven_Rings_Eastern_U_O_Grenadier);
};

class TACU_Seven_Rings_Eastern_U_O_Autorifleman: TACU_Seven_Rings_Eastern_U_O_Rifleman_01 {
    displayName = "Autorifleman";
    icon = "iconManMG";
    role = "MachineGunner";
    uniformClass = "U_lxWS_C_Djella_03";
    weapons[] = {
        "TACU_Seven_Rings_Eastern_W_QBZ95_LSW",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Seven_Rings_Eastern_W_QBZ95_LSW",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_3("tacgt_AI_100Rnd_58x42"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("MiniGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_3("tacgt_AI_100Rnd_58x42"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("MiniGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Seven_Rings_Eastern_U_O_Autorifleman);
};

class TACU_Seven_Rings_Eastern_U_O_Heavygunner: TACU_Seven_Rings_Eastern_U_O_Rifleman_01 {
    displayName = "Heavy Gunner";
    icon = "iconManMG";
    role = "MachineGunner";
    uniformClass = "U_SFIA_deserter_lxWS";
    backpack = "TACU_Seven_Rings_Eastern_B_Heavygunner";
    weapons[] = {
        "TACU_Seven_Rings_Eastern_W_HK121",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Seven_Rings_Eastern_W_HK121",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        "150Rnd_93x64_Mag",
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("MiniGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        "150Rnd_93x64_Mag",
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("MiniGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Seven_Rings_Eastern_U_O_Heavygunner);
};

class TACU_Seven_Rings_Eastern_U_O_Demolitions: TACU_Seven_Rings_Eastern_U_O_Rifleman_01 {
    displayName = "Demolitions";
    icon = "iconManExplosive";
    role = "Sapper";
    canDeactivateMines = 1;
    engineer = 1;
    uniformClass = "U_lxWS_Djella_02_Brown";
    backpack = "TACU_Seven_Rings_Eastern_B_Demo";
    weapons[] = {
        "TACU_Seven_Rings_Eastern_W_QBZ95",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Seven_Rings_Eastern_W_QBZ95",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_6("tacgt_AI_30Rnd_58x42"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("MiniGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_6("tacgt_AI_30Rnd_58x42"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("MiniGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Seven_Rings_Eastern_U_O_Demolitions);
};

class TACU_Seven_Rings_Eastern_U_O_Medic: TACU_Seven_Rings_Eastern_U_O_Rifleman_01 {
    displayName = "Medic";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    uniformClass = "U_lxWS_Djella_03_Green";
    backpack = "TACU_Seven_Rings_Eastern_B_Medic";
    weapons[] = {
        "TACU_Seven_Rings_Eastern_W_Katiba_Carbine",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Seven_Rings_Eastern_W_Katiba_Carbine",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_6("tacgt_AI_30Rnd_65x39_Katiba"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("MiniGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_6("tacgt_AI_30Rnd_65x39_Katiba"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("MiniGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Seven_Rings_Eastern_U_O_Medic);
};

class TACU_Seven_Rings_Eastern_U_O_Engineer: TACU_Seven_Rings_Eastern_U_O_Rifleman_01 {
    displayName = "Engineer";
    icon = "iconManEngineer";
    role = "Sapper";
    engineer = 1;
    uniformClass = "U_lxWS_Djella_02_Grey";
    backpack = "TACU_Seven_Rings_Eastern_B_Engineer";
    weapons[] = {
        "TACU_Seven_Rings_Eastern_W_QBZ95",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Seven_Rings_Eastern_W_QBZ95",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_6("tacgt_AI_30Rnd_58x42"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("MiniGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_6("tacgt_AI_30Rnd_58x42"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("MiniGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Seven_Rings_Eastern_U_O_Engineer);
};

class TACU_Seven_Rings_Eastern_U_O_Ambusher: TACU_Seven_Rings_Eastern_U_O_Rifleman_01 {
    displayName = "Ambusher";
    uniformClass = "U_lxWS_C_Djella_02";
    weapons[] = {
        "Binocular",
        "TACU_Seven_Rings_Eastern_W_Type115",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "Binocular",
        "TACU_Seven_Rings_Eastern_W_Type115",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_6("tacgt_AI_30Rnd_65x39_Katiba"),
        mag_4("10Rnd_50BW_Mag_F"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("MiniGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_6("tacgt_AI_30Rnd_65x39_Katiba"),
        mag_4("10Rnd_50BW_Mag_F"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("MiniGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_Seven_Rings_Eastern_U_O_Ambusher);
};

class TACU_Seven_Rings_Eastern_U_O_Driver: TACU_Seven_Rings_Eastern_U_O_Rifleman_01 {
    displayName = "Driver";
    uniformClass = "U_lxWS_Djella_02_Sand";
    EDITORPREVIEW(TACU_Seven_Rings_Eastern_U_O_Driver);
};
