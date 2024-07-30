class TACU_Mercenaries_U_I_Low_Rifleman: TACU_Main_U_INDEP_Soldier_Base {
    author = "Mike";
    editorSubcategory = "TACU_Mercenaries_EdSubCat_Low";
    displayName = "Rifleman";
    faction = "TACU_Mercenaries_I";
    genericNames = "CivMen";
    icon = "iconMan";
    identityTypes[] = {"LanguageENGFRE_F", "Head_African", "Head_NATO"};
    role = "Rifleman";
    scope = 2;
    scopeCurator = 2;
    uniformClass = "U_BG_Guerilla2_3";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_Chestrig_oli",
        "H_Bandanna_khk_hs"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_Chestrig_oli",
        "H_Bandanna_khk_hs"
    };
    weapons[] = {
        "TACU_Mercenaries_W_Tar21_Low",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Mercenaries_W_Tar21_Low",
        "hgun_Pistol_heavy_01_green_F",
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
        "H_Bandanna_khk", 0.3,
        "H_Bandanna_khk_hs", 0.3,
        "H_Bandanna_sgg", 0.3,
        "H_Watchcap_camo", 0.3,
        "H_Watchcap_khk", 0.3,
        "H_Cap_grn", 0.3,
        "H_Cap_oli", 0.3,
        "H_Cap_oli_hs", 0.3,
        "H_Shemag_olive", 0.3,
        "H_Shemag_olive_hs", 0.3,
        "H_HelmetB", 0.1
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
    //EDITORPREVIEW(TACU_Mercenaries_U_I_Low_Rifleman);
};
class TACU_Mercenaries_U_I_Low_AT: TACU_Mercenaries_U_I_Low_Rifleman {
    displayName = "Rifleman (AT)";
    role = "MissileSpecialist";
    icon = "iconManAT";
    backpack = "TACU_Mercenaries_B_AT_FieldPack_Green";
    weapons[] = {
        "launch_MRAWS_green_rail_F",
        "TACU_Mercenaries_W_Tar21_Low",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "launch_MRAWS_green_rail_F",
        "TACU_Mercenaries_W_Tar21_Low",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    magazines[] = {
        "MRAWS_HEAT_F",
        mag_8("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        "MRAWS_HEAT_F",
        mag_8("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    //EDITORPREVIEW(TACU_Mercenaries_U_I_Low_AT);
};
class TACU_Mercenaries_U_I_Low_AP: TACU_Mercenaries_U_I_Low_AT {
    displayName = "Rifleman (AP)";
    backpack = "TACU_Mercenaries_B_AP_FieldPack_Green";
    magazines[] = {
        "MRAWS_HE_F",
        mag_8("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        "MRAWS_HE_F",
        mag_8("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    //EDITORPREVIEW(TACU_Mercenaries_U_I_Low_AP);
};
class TACU_Mercenaries_U_I_Low_MG: TACU_Mercenaries_U_I_Low_Rifleman {
    displayName = "Machine Gunner";
    backpack = "TACU_Mercenaries_B_MG_FieldPack_Green";
    icon = "iconManMG";
    role = "MachineGunner";
    weapons[] = {
        "TACU_Mercenaries_W_Stoner_Low",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Mercenaries_W_Stoner_Low",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    magazines[] = {
        "TACU_Magazine_200Rnd_65_Box",
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        "TACU_Magazine_200Rnd_65_Box",
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    //EDITORPREVIEW(TACU_Mercenaries_U_I_Low_Rifleman_MG);
};
class TACU_Mercenaries_U_I_Low_Medic: TACU_Mercenaries_U_I_Low_Rifleman {
    displayName = "Medic";
    backpack = "TACU_Mercenaries_B_Medic_FieldPack_Green";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    weapons[] = {
        "TACU_Mercenaries_W_Ctar21_Low",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Mercenaries_W_Ctar21_Low",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    //EDITORPREVIEW(TACU_Mercenaries_U_I_Low_Rifleman_Medic);
};
class TACU_Mercenaries_U_I_Low_Engineer: TACU_Mercenaries_U_I_Low_Rifleman {
    displayName = "Engineer";
    backpack = "TACU_Mercenaries_B_Engineer_FieldPack_Green";
    icon = "iconManEngineer";
    role = "Sapper";
    engineer = 1;
    weapons[] = {
        "TACU_Mercenaries_W_Ctar21_Low",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Mercenaries_W_Ctar21_Low",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    //EDITORPREVIEW(TACU_Mercenaries_U_I_Low_Rifleman_Engineer);
};
class TACU_Mercenaries_U_I_Low_Demolitions: TACU_Mercenaries_U_I_Low_Rifleman {
    displayName = "Demolitions";
    backpack = "TACU_Mercenaries_B_Demolitions_FieldPack_Green";
    icon = "iconManExplosive";
    role = "Sapper";
    engineer = 1;
    canDeactivateMines = 1;
    weapons[] = {
        "TACU_Mercenaries_W_Ctar21_Low",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Mercenaries_W_Ctar21_Low",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    //EDITORPREVIEW(TACU_Mercenaries_U_I_Low_Rifleman_Demolitions);
};
class TACU_Mercenaries_U_I_Low_Grenadier: TACU_Mercenaries_U_I_Low_Rifleman {
    displayName = "Grenadier";
    role = "Grenadier";
    weapons[] = {
        "TACU_Mercenaries_W_Gtar21_Low",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Mercenaries_W_Gtar21_Low",
        "hgun_Pistol_heavy_01_green_F",
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
    //EDITORPREVIEW(TACU_Mercenaries_U_I_Low_Grenadier);
};
class TACU_Mercenaries_U_I_Low_Marksman: TACU_Mercenaries_U_I_Low_Rifleman {
    displayName = "Marksman";
    icon = "iconManRecon";
    role = "Marksman";
    weapons[] = {
        "Binocular",
        "TACU_Mercenaries_W_M14_Low",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "Binocular",
        "TACU_Mercenaries_W_M14_Low",
        "hgun_Pistol_heavy_01_green_F",
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
    //EDITORPREVIEW(TACU_Mercenaries_U_I_Low_Marksman);
};
class TACU_Mercenaries_U_I_Low_TeamLeader: TACU_Mercenaries_U_I_Low_Rifleman {
    displayName = "Team Leader";
    icon = "iconManLeader";
    weapons[] = {
        "TACU_Mercenaries_W_Tar21_Low",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Mercenaries_W_Tar21_Low",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    //EDITORPREVIEW(TACU_Mercenaries_U_I_Low_TeamLeader);
};
class TACU_Mercenaries_U_I_Low_SquadLeader: TACU_Mercenaries_U_I_Low_Rifleman {
    displayName = "Squad Leader";
    icon = "iconManLeader";
    weapons[] = {
        "Binocular",
        "TACU_Mercenaries_W_Gtar21_Low",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "Binocular",
        "TACU_Mercenaries_W_Gtar21_Low",
        "hgun_Pistol_heavy_01_green_F",
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
    //EDITORPREVIEW(TACU_Mercenaries_U_I_Low_SquadLeader);
};
class TACU_Mercenaries_U_I_Low_Crewman: TACU_Mercenaries_U_I_Low_Rifleman {
    displayName = "Crewman";
    role = "Crewman";
    icon = "iconManEngineer";
    engineer = 1;
    weapons[] = {
        "TACU_Mercenaries_W_Ctar21_Low",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Mercenaries_W_Ctar21_Low",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    //EDITORPREVIEW(TACU_Mercenaries_U_I_Low_Crewman);
};
