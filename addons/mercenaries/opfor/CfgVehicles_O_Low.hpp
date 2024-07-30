class TACU_Mercenaries_U_O_Low_Rifleman: TACU_Main_U_OPFOR_Soldier_Base {
    author = "Mike";
    editorSubcategory = "TACU_Mercenaries_EdSubCat_Low";
    displayName = "Rifleman";
    faction = "TACU_Mercenaries_O";
    genericNames = "TACU_IranianNames";
    icon = "iconMan";
    identityTypes[] = {"LanguagePER_F", "Head_TK"};
    role = "Rifleman";
    scope = 2;
    scopeCurator = 2;
    uniformClass = "U_BG_Guerilla2_1";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_Chestrig_khk",
        "H_Bandanna_cbr"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_Chestrig_khk",
        "H_Bandanna_cbr"
    };
    weapons[] = {
        "TACU_Mercenaries_W_HK416A5_Low",
        "hgun_Pistol_heavy_01_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Mercenaries_W_HK416A5_Low",
        "hgun_Pistol_heavy_01_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_8("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_8("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    headgearList[] = {
        "H_Bandanna_cbr", 0.3,
        "H_Watchcap_cbr", 0.3,
        "H_Booniehat_khk_hs", 0.3,
        "H_Booniehat_khk", 0.3,
        "H_Booniehat_tan", 0.3,
        "H_Cap_tan", 0.3,
        "H_ShemagOpen_tan", 0.3,
        "H_HelmetB_sand", 0.1
    };
    CBA_facewearList[] = {
        "", 0.65,
        "G_Bandanna_oli", 0.25,
        "G_Bandanna_Skull1", 0.25,
        "G_Bandanna_Syndikat1", 0.25,
        "G_Bandanna_Skull2", 0.25,
        "G_Bandanna_aviator", 0.25,
        "G_Spectacles_Tinted", 0.25
    };
    //EDITORPREVIEW(TACU_Mercenaries_U_O_Low_Rifleman);
};
class TACU_Mercenaries_U_O_Low_AT: TACU_Mercenaries_U_O_Low_Rifleman {
    displayName = "Rifleman (AT)";
    role = "MissileSpecialist";
    icon = "iconManAT";
    backpack = "TACU_Mercenaries_B_AT_FieldPack_Sand";
    weapons[] = {
        "launch_RPG32_tan_lxWS",
        "TACU_Mercenaries_W_HK416_Low",
        "hgun_Pistol_heavy_01_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "launch_RPG32_tan_lxWS",
        "TACU_Mercenaries_W_HK416_Low",
        "hgun_Pistol_heavy_01_F",
        "Throw", "Put"
    };
    magazines[] = {
        "RPG32_F",
        mag_8("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        "RPG32_F",
        mag_8("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    //EDITORPREVIEW(TACU_Mercenaries_U_O_Low_AT);
};
class TACU_Mercenaries_U_O_Low_AP: TACU_Mercenaries_U_O_Low_AT {
    displayName = "Rifleman (AP)";
    backpack = "TACU_Mercenaries_B_AP_FieldPack_Sand";
    TACU_isAP = 1;
    magazines[] = {
        "RPG32_HE_F",
        mag_8("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        "RPG32_HE_F",
        mag_8("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    //EDITORPREVIEW(TACU_Mercenaries_U_O_Low_AP);
};
class TACU_Mercenaries_U_O_Low_MG: TACU_Mercenaries_U_O_Low_Rifleman {
    displayName = "Machine Gunner";
    backpack = "TACU_Mercenaries_B_MG_FieldPack_Sand";
    icon = "iconManMG";
    role = "MachineGunner";
    weapons[] = {
        "TACU_Mercenaries_W_M249_Low",
        "hgun_Pistol_heavy_01_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Mercenaries_W_M249_Low",
        "hgun_Pistol_heavy_01_F",
        "Throw", "Put"
    };
    magazines[] = {
        "TACU_Magazine_200Rnd_556_Box",
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        "TACU_Magazine_200Rnd_556_Box",
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    //EDITORPREVIEW(TACU_Mercenaries_U_O_Low_MG);
};
class TACU_Mercenaries_U_O_Low_Medic: TACU_Mercenaries_U_O_Low_Rifleman {
    displayName = "Medic";
    backpack = "TACU_Mercenaries_B_Medic_FieldPack_Sand";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    weapons[] = {
        "TACU_Mercenaries_W_HK416_Low",
        "hgun_Pistol_heavy_01_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Mercenaries_W_HK416_Low",
        "hgun_Pistol_heavy_01_F",
        "Throw", "Put"
    };
    //EDITORPREVIEW(TACU_Mercenaries_U_O_Low_Medic);
};
class TACU_Mercenaries_U_O_Low_Engineer: TACU_Mercenaries_U_O_Low_Rifleman {
    displayName = "Engineer";
    backpack = "TACU_Mercenaries_B_Engineer_FieldPack_Green";
    icon = "iconManEngineer";
    role = "Sapper";
    engineer = 1;
    weapons[] = {
        "TACU_Mercenaries_W_HK416_Low",
        "hgun_Pistol_heavy_01_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Mercenaries_W_HK416_Low",
        "hgun_Pistol_heavy_01_F",
        "Throw", "Put"
    };
    //EDITORPREVIEW(TACU_Mercenaries_U_O_Low_Engineer);
};
class TACU_Mercenaries_U_O_Low_Demolitions: TACU_Mercenaries_U_O_Low_Rifleman {
    displayName = "Demolitions";
    backpack = "TACU_Mercenaries_B_Demolitions_FieldPack_Sand";
    icon = "iconManExplosive";
    role = "Sapper";
    engineer = 1;
    canDeactivateMines = 1;
    weapons[] = {
        "TACU_Mercenaries_W_HK416_Low",
        "hgun_Pistol_heavy_01_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Mercenaries_W_HK416_Low",
        "hgun_Pistol_heavy_01_F",
        "Throw", "Put"
    };
    //EDITORPREVIEW(TACU_Mercenaries_U_O_Low_Demolitions);
};
class TACU_Mercenaries_U_O_Low_Grenadier: TACU_Mercenaries_U_O_Low_Rifleman {
    displayName = "Grenadier";
    role = "Grenadier";
    weapons[] = {
        "TACU_Mercenaries_W_HK416_GL_Low",
        "hgun_Pistol_heavy_01_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Mercenaries_W_HK416_GL_Low",
        "hgun_Pistol_heavy_01_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_10("1Rnd_HE_Grenade_shell"),
        mag_8("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_10("1Rnd_HE_Grenade_shell"),
        mag_8("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    //EDITORPREVIEW(TACU_Mercenaries_U_O_Low_Grenadier);
};
class TACU_Mercenaries_U_O_Low_Marksman: TACU_Mercenaries_U_O_Low_Rifleman {
    displayName = "Marksman";
    icon = "iconManRecon";
    role = "Marksman";
    weapons[] = {
        "Binocular",
        "TACU_Mercenaries_W_HK417_Low",
        "hgun_Pistol_heavy_01_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "Binocular",
        "TACU_Mercenaries_W_HK417_Low",
        "hgun_Pistol_heavy_01_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_10("TACU_Magazine_20Rnd_M1A"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_10("TACU_Magazine_20Rnd_M1A"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    //EDITORPREVIEW(TACU_Mercenaries_U_O_Low_Marksman);
};
class TACU_Mercenaries_U_O_Low_TeamLeader: TACU_Mercenaries_U_O_Low_Rifleman {
    displayName = "Team Leader";
    icon = "iconManLeader";
    weapons[] = {
        "TACU_Mercenaries_W_HK416A5_Low",
        "hgun_Pistol_heavy_01_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Mercenaries_W_HK416A5_Low",
        "hgun_Pistol_heavy_01_F",
        "Throw", "Put"
    };
    //EDITORPREVIEW(TACU_Mercenaries_U_O_Low_TeamLeader);
};
class TACU_Mercenaries_U_O_Low_SquadLeader: TACU_Mercenaries_U_O_Low_Rifleman {
    displayName = "Squad Leader";
    icon = "iconManLeader";
    weapons[] = {
        "Binocular",
        "TACU_Mercenaries_W_HK416_GL_Low",
        "hgun_Pistol_heavy_01_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "Binocular",
        "TACU_Mercenaries_W_HK416_GL_Low",
        "hgun_Pistol_heavy_01_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_10("1Rnd_HE_Grenade_shell"),
        mag_8("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_10("1Rnd_HE_Grenade_shell"),
        mag_8("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    //EDITORPREVIEW(TACU_Mercenaries_U_O_Low_SquadLeader);
};
class TACU_Mercenaries_U_O_Low_Crewman: TACU_Mercenaries_U_O_Low_Rifleman {
    displayName = "Crewman";
    role = "Crewman";
    icon = "iconManEngineer";
    engineer = 1;
    weapons[] = {
        "TACU_Mercenaries_W_HK416_Low",
        "hgun_Pistol_heavy_01_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Mercenaries_W_HK416_Low",
        "hgun_Pistol_heavy_01_F",
        "Throw", "Put"
    };
    //EDITORPREVIEW(TACU_Mercenaries_U_O_Low_Crewman);
};
