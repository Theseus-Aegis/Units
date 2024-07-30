class TACU_Mercenaries_U_I_High_Rifleman: TACU_Mercenaries_U_I_Low_Rifleman {
    editorSubcategory = "TACU_Mercenaries_EdSubCat_High";
    items[] = {"NVGoggles_INDEP"};
    respawnItems[] = {"NVGoggles_INDEP"};
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_PlateCarrier1_rgr_noflag_F",
        "H_HelmetB"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_PlateCarrier1_rgr_noflag_F",
        "H_HelmetB"
    };
    weapons[] = {
        "TACU_Mercenaries_W_Tar21_High",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Mercenaries_W_Tar21_High",
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
        "H_HelmetB", 0.7,
        "H_HelmetSpecB", 0.7,
        "H_HelmetB_light", 0.7,
        "H_Bandanna_khk", 0.1,
        "H_Bandanna_khk_hs", 0.1,
        "H_Bandanna_sgg", 0.1,
        "H_Watchcap_camo", 0.1,
        "H_Watchcap_khk", 0.1,
        "H_Cap_grn", 0.1,
        "H_Cap_oli", 0.1,
        "H_Cap_oli_hs", 0.1,
        "H_Shemag_olive", 0.1,
        "H_Shemag_olive_hs", 0.1
    };
    //EDITORPREVIEW(TACU_Mercenaries_U_I_High_Rifleman);
};
class TACU_Mercenaries_U_I_High_AT: TACU_Mercenaries_U_I_High_Rifleman {
    displayName = "Rifleman (AT)";
    role = "MissileSpecialist";
    icon = "iconManAT";
    backpack = "TACU_Mercenaries_B_AT_FieldPack_Green";
    weapons[] = {
        "launch_MRAWS_green_rail_F",
        "TACU_Mercenaries_W_Tar21_High",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "launch_MRAWS_green_rail_F",
        "TACU_Mercenaries_W_Tar21_High",
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
    //EDITORPREVIEW(TACU_Mercenaries_U_I_High_AT);
};
class TACU_Mercenaries_U_I_High_AP: TACU_Mercenaries_U_I_High_AT {
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
    //EDITORPREVIEW(TACU_Mercenaries_U_I_High_AP);
};
class TACU_Mercenaries_U_I_High_MG: TACU_Mercenaries_U_I_High_Rifleman {
    displayName = "Machine Gunner";
    backpack = "TACU_Mercenaries_B_MG_FieldPack_Green";
    icon = "iconManMG";
    role = "MachineGunner";
    weapons[] = {
        "TACU_Mercenaries_W_Stoner_High",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Mercenaries_W_Stoner_High",
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
    //EDITORPREVIEW(TACU_Mercenaries_U_I_High_MG);
};
class TACU_Mercenaries_U_I_High_Medic: TACU_Mercenaries_U_I_High_Rifleman {
    displayName = "Medic";
    backpack = "TACU_Mercenaries_B_Medic_FieldPack_Green";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    weapons[] = {
        "TACU_Mercenaries_W_Ctar21_High",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Mercenaries_W_Ctar21_High",
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
    //EDITORPREVIEW(TACU_Mercenaries_U_I_High_Medic);
};
class TACU_Mercenaries_U_I_High_Engineer: TACU_Mercenaries_U_I_High_Rifleman {
    displayName = "Engineer";
    backpack = "TACU_Mercenaries_B_Engineer_FieldPack_Green";
    icon = "iconManEngineer";
    role = "Sapper";
    engineer = 1;
    weapons[] = {
        "TACU_Mercenaries_W_Ctar21_High",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Mercenaries_W_Ctar21_High",
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
    //EDITORPREVIEW(TACU_Mercenaries_U_I_High_Engineer);
};
class TACU_Mercenaries_U_I_High_Demolitions: TACU_Mercenaries_U_I_High_Rifleman {
    displayName = "Demolitions";
    backpack = "TACU_Mercenaries_B_Demolitions_FieldPack_Green";
    icon = "iconManExplosive";
    role = "Sapper";
    engineer = 1;
    canDeactivateMines = 1;
    weapons[] = {
        "TACU_Mercenaries_W_Ctar21_High",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Mercenaries_W_Ctar21_High",
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
    //EDITORPREVIEW(TACU_Mercenaries_U_I_High_Demolitions);
};
class TACU_Mercenaries_U_I_High_Grenadier: TACU_Mercenaries_U_I_High_Rifleman {
    displayName = "Grenadier";
    role = "Grenadier";
    weapons[] = {
        "TACU_Mercenaries_W_Gtar21_High",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Mercenaries_W_Gtar21_High",
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
    //EDITORPREVIEW(TACU_Mercenaries_U_I_High_Grenadier);
};
class TACU_Mercenaries_U_I_High_Marksman: TACU_Mercenaries_U_I_High_Rifleman {
    displayName = "Marksman";
    icon = "iconManRecon";
    role = "Marksman";
    weapons[] = {
        "Binocular",
        "TACU_Mercenaries_W_M14_High",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "Binocular",
        "TACU_Mercenaries_W_M14_High",
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
    //EDITORPREVIEW(TACU_Mercenaries_U_I_High_Marksman);
};
class TACU_Mercenaries_U_I_High_TeamLeader: TACU_Mercenaries_U_I_High_Rifleman {
    displayName = "Team Leader";
    icon = "iconManLeader";
    weapons[] = {
        "TACU_Mercenaries_W_Tar21_High",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Mercenaries_W_Tar21_High",
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
    //EDITORPREVIEW(TACU_Mercenaries_U_I_High_TeamLeader);
};
class TACU_Mercenaries_U_I_High_SquadLeader: TACU_Mercenaries_U_I_High_Rifleman {
    displayName = "Squad Leader";
    icon = "iconManLeader";
    weapons[] = {
        "Binocular",
        "TACU_Mercenaries_W_Gtar21_High",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "Binocular",
        "TACU_Mercenaries_W_Gtar21_High",
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
    //EDITORPREVIEW(TACU_Mercenaries_U_I_High_SquadLeader);
};
class TACU_Mercenaries_U_I_High_Crewman: TACU_Mercenaries_U_I_High_Rifleman {
    displayName = "Crewman";
    role = "Crewman";
    icon = "iconManEngineer";
    engineer = 1;
    weapons[] = {
        "TACU_Mercenaries_W_Ctar21_High",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Mercenaries_W_Ctar21_High",
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
    //EDITORPREVIEW(TACU_Mercenaries_U_I_High_Crewman);
};
